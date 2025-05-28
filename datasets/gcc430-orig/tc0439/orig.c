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
   unsigned f0 : 17;
   signed f1 : 4;
   signed f2 : 23;
   unsigned f3 : 6;
};


static int g_11 = 0x531F145BL;
static char g_80 = 0x63L;
static unsigned char g_99 = 255UL;
static struct S0 g_100 = {44,3,411,4};
static int g_242[7] = {0xA15CDC31L, 0xA15CDC31L, (-1L), 0xA15CDC31L, 0xA15CDC31L, (-1L), 0xA15CDC31L};
static unsigned char g_322[4][6] = {{1UL, 0x30L, 1UL, 2UL, 253UL, 0x1CL}, {1UL, 0x30L, 1UL, 2UL, 253UL, 0x1CL}, {1UL, 0x30L, 1UL, 2UL, 253UL, 0x1CL}, {1UL, 0x30L, 1UL, 2UL, 253UL, 0x1CL}};
static short g_367 = 5L;
static char g_451 = (-10L);
static unsigned g_718 = 4294967295UL;
static int g_812[2] = {(-1L), (-1L)};
static unsigned short g_914 = 0x74F1L;
static unsigned short g_1072[10] = {65535UL, 65535UL, 65529UL, 65535UL, 65535UL, 65529UL, 65535UL, 65535UL, 65529UL, 65535UL};
static unsigned short g_1231 = 0x3410L;
static short g_1362 = 0x18C5L;
static int g_1435 = 0x563BDF3EL;



static unsigned short func_1(void);
static unsigned func_5(unsigned char p_6);
static int func_20(short p_21);
static struct S0 func_24(unsigned short p_25, unsigned char p_26);
static unsigned func_27(int p_28);
static int func_33(int p_34, int p_35, int p_36, char p_37, int p_38);
static short func_41(unsigned p_42, int p_43);
static unsigned char func_44(unsigned p_45, unsigned p_46, unsigned short p_47, unsigned char p_48);
static short func_53(unsigned short p_54);
static unsigned short func_55(struct S0 p_56, int p_57, short p_58, short p_59);
static unsigned short func_1(void)
{
    unsigned l_2 = 2UL;
    unsigned l_14 = 0xBDAE4F9DL;
    short l_15 = 0xA143L;
    struct S0 l_1372 = {212,-2,-1132,2};
    int l_1432[3];
    short l_1434 = (-7L);
    short l_1436 = 0xC9BCL;
    int i;
    for (i = 0; i < 3; i++)
        l_1432[i] = 7L;
    if (((((!l_2) && 0xB274BF90L) || (-1L)) > (safe_mod_func_int8_t_s_s(((func_5((((((~0x44C0L) != (safe_sub_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u(g_11, 1)), l_2))) <= 0x58L) & ((+(((0x448112DEL & (safe_div_func_uint8_t_u_u(((l_2 , l_14) >= (-10L)), l_14))) != l_2) > l_15)) , l_14)) == (-5L))) <= l_14) & g_242[6]), l_2))))
    {
        unsigned l_1379 = 0x336251D4L;
        g_100 = g_100;
        for (g_80 = 0; (g_80 != 9); g_80++)
        {
            int l_1397 = 0L;
            struct S0 l_1398 = {291,1,-2879,2};
            for (g_1231 = (-25); (g_1231 <= 33); g_1231 = safe_add_func_int8_t_s_s(g_1231, 1))
            {
                char l_1396 = (-1L);
                char l_1404 = 0x3BL;
                for (g_367 = 6; (g_367 != (-5)); g_367--)
                {
                    g_100 = g_100;
                    g_11 = g_1072[3];
                    l_1372 = g_100;
                    g_100.f2 = 1L;
                }
                if (g_451)
                    continue;
                if (func_33((((safe_mod_func_int8_t_s_s((safe_mod_func_uint8_t_u_u(g_914, ((func_33((g_812[0] >= (safe_sub_func_uint16_t_u_u(l_1379, 0L))), (((g_812[0] > (safe_lshift_func_uint8_t_u_u(l_15, ((safe_add_func_uint32_t_u_u((safe_add_func_int8_t_s_s((safe_mod_func_uint32_t_u_u((safe_mod_func_uint32_t_u_u(g_322[1][1], 4294967295UL)), (safe_lshift_func_uint16_t_u_s(((safe_div_func_int8_t_s_s((safe_add_func_uint16_t_u_u((((((g_1231 | l_1379) > 1L) != l_1396) >= g_100.f3) != g_451), g_367)), g_914)) >= 0xF0965EE2L), 12)))), 0xA7L)), l_1396)) , 0xBEL)))) && l_1396) > 0xB44FF64AL), g_1362, l_14, g_242[6]) > 4294967295UL) ^ g_914))), 0x59L)) & 0x1E09E1D2L) , 1L), l_1396, l_1396, g_11, l_1397))
                {
                    l_1398 = l_1372;
                }
                else
                {
                    short l_1424 = 0x38F4L;
                    unsigned l_1425[9][5][5] = {{{0xE989B97CL, 1UL, 0xAFB7CC02L, 0xF74FB440L, 0x4BB42A19L}, {0xE989B97CL, 1UL, 0xAFB7CC02L, 0xF74FB440L, 0x4BB42A19L}, {0xE989B97CL, 1UL, 0xAFB7CC02L, 0xF74FB440L, 0x4BB42A19L}, {0xE989B97CL, 1UL, 0xAFB7CC02L, 0xF74FB440L, 0x4BB42A19L}, {0xE989B97CL, 1UL, 0xAFB7CC02L, 0xF74FB440L, 0x4BB42A19L}}, {{0xE989B97CL, 1UL, 0xAFB7CC02L, 0xF74FB440L, 0x4BB42A19L}, {0xE989B97CL, 1UL, 0xAFB7CC02L, 0xF74FB440L, 0x4BB42A19L}, {0xE989B97CL, 1UL, 0xAFB7CC02L, 0xF74FB440L, 0x4BB42A19L}, {0xE989B97CL, 1UL, 0xAFB7CC02L, 0xF74FB440L, 0x4BB42A19L}, {0xE989B97CL, 1UL, 0xAFB7CC02L, 0xF74FB440L, 0x4BB42A19L}}, {{0xE989B97CL, 1UL, 0xAFB7CC02L, 0xF74FB440L, 0x4BB42A19L}, {0xE989B97CL, 1UL, 0xAFB7CC02L, 0xF74FB440L, 0x4BB42A19L}, {0xE989B97CL, 1UL, 0xAFB7CC02L, 0xF74FB440L, 0x4BB42A19L}, {0xE989B97CL, 1UL, 0xAFB7CC02L, 0xF74FB440L, 0x4BB42A19L}, {0xE989B97CL, 1UL, 0xAFB7CC02L, 0xF74FB440L, 0x4BB42A19L}}, {{0xE989B97CL, 1UL, 0xAFB7CC02L, 0xF74FB440L, 0x4BB42A19L}, {0xE989B97CL, 1UL, 0xAFB7CC02L, 0xF74FB440L, 0x4BB42A19L}, {0xE989B97CL, 1UL, 0xAFB7CC02L, 0xF74FB440L, 0x4BB42A19L}, {0xE989B97CL, 1UL, 0xAFB7CC02L, 0xF74FB440L, 0x4BB42A19L}, {0xE989B97CL, 1UL, 0xAFB7CC02L, 0xF74FB440L, 0x4BB42A19L}}, {{0xE989B97CL, 1UL, 0xAFB7CC02L, 0xF74FB440L, 0x4BB42A19L}, {0xE989B97CL, 1UL, 0xAFB7CC02L, 0xF74FB440L, 0x4BB42A19L}, {0xE989B97CL, 1UL, 0xAFB7CC02L, 0xF74FB440L, 0x4BB42A19L}, {0xE989B97CL, 1UL, 0xAFB7CC02L, 0xF74FB440L, 0x4BB42A19L}, {0xE989B97CL, 1UL, 0xAFB7CC02L, 0xF74FB440L, 0x4BB42A19L}}, {{0xE989B97CL, 1UL, 0xAFB7CC02L, 0xF74FB440L, 0x4BB42A19L}, {0xE989B97CL, 1UL, 0xAFB7CC02L, 0xF74FB440L, 0x4BB42A19L}, {0xE989B97CL, 1UL, 0xAFB7CC02L, 0xF74FB440L, 0x4BB42A19L}, {0xE989B97CL, 1UL, 0xAFB7CC02L, 0xF74FB440L, 0x4BB42A19L}, {0xE989B97CL, 1UL, 0xAFB7CC02L, 0xF74FB440L, 0x4BB42A19L}}, {{0xE989B97CL, 1UL, 0xAFB7CC02L, 0xF74FB440L, 0x4BB42A19L}, {0xE989B97CL, 1UL, 0xAFB7CC02L, 0xF74FB440L, 0x4BB42A19L}, {0xE989B97CL, 1UL, 0xAFB7CC02L, 0xF74FB440L, 0x4BB42A19L}, {0xE989B97CL, 1UL, 0xAFB7CC02L, 0xF74FB440L, 0x4BB42A19L}, {0xE989B97CL, 1UL, 0xAFB7CC02L, 0xF74FB440L, 0x4BB42A19L}}, {{0xE989B97CL, 1UL, 0xAFB7CC02L, 0xF74FB440L, 0x4BB42A19L}, {0xE989B97CL, 1UL, 0xAFB7CC02L, 0xF74FB440L, 0x4BB42A19L}, {0xE989B97CL, 1UL, 0xAFB7CC02L, 0xF74FB440L, 0x4BB42A19L}, {0xE989B97CL, 1UL, 0xAFB7CC02L, 0xF74FB440L, 0x4BB42A19L}, {0xE989B97CL, 1UL, 0xAFB7CC02L, 0xF74FB440L, 0x4BB42A19L}}, {{0xE989B97CL, 1UL, 0xAFB7CC02L, 0xF74FB440L, 0x4BB42A19L}, {0xE989B97CL, 1UL, 0xAFB7CC02L, 0xF74FB440L, 0x4BB42A19L}, {0xE989B97CL, 1UL, 0xAFB7CC02L, 0xF74FB440L, 0x4BB42A19L}, {0xE989B97CL, 1UL, 0xAFB7CC02L, 0xF74FB440L, 0x4BB42A19L}, {0xE989B97CL, 1UL, 0xAFB7CC02L, 0xF74FB440L, 0x4BB42A19L}}};
                    int i, j, k;
                    for (l_1379 = 19; (l_1379 < 42); ++l_1379)
                    {
                        int l_1403[5] = {0x5ADFE409L, 0L, 0x5ADFE409L, 0L, 0x5ADFE409L};
                        int i;
                        l_1372.f1 = (((l_1397 && g_718) , (safe_sub_func_int32_t_s_s(l_1403[0], ((l_1404 | ((((func_33(l_1372.f3, l_1398.f2, ((((safe_div_func_uint32_t_u_u((((safe_unary_minus_func_uint16_t_u((safe_mod_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u(((((safe_sub_func_int16_t_s_s((safe_add_func_uint32_t_u_u((((safe_div_func_uint16_t_u_u(((safe_mod_func_int32_t_s_s((safe_div_func_int16_t_s_s(g_367, ((func_33(((safe_sub_func_int32_t_s_s((l_1398.f0 == g_914), 1L)) , 0L), g_1072[1], l_1403[0], l_1424, g_322[3][1]) != 4294967290UL) ^ 1L))), 0x50765700L)) <= 1L), l_1398.f0)) , l_1403[0]) ^ 0x3AL), 0x41C3B0D3L)), l_1396)) | l_1398.f2) == g_100.f0) >= 1L), 0x44L)), l_1424)))) || g_1231) && g_451), g_367)) != g_812[0]) & l_1372.f1) == l_1396), l_1424, l_1403[3]) | g_242[6]) , g_1072[3]) || 65535UL) & g_99)) && l_1425[3][4][1])))) != g_242[1]);
                    }
                }
            }
        }
    }
    else
    {
        int l_1433 = 0L;
        l_1436 = (((+(((0x94DEL >= l_2) & (-7L)) , l_1372.f1)) , ((safe_rshift_func_int8_t_s_s(((safe_sub_func_uint32_t_u_u((safe_lshift_func_int16_t_s_u(g_1362, g_1072[8])), l_1432[1])) >= l_1433), 1)) <= l_1434)) | g_1435);
        for (g_11 = 2; (g_11 >= 0); g_11 -= 1)
        {
            for (l_1434 = 2; (l_1434 >= 0); l_1434 -= 1)
            {
                for (l_14 = 0; (l_14 <= 6); l_14 += 1)
                {
                    struct S0 l_1437 = {346,-3,-2853,1};
                    int i;
                    l_1432[g_11] = (-1L);
                    if (l_1432[l_1434])
                        continue;
                    g_100 = l_1437;
                }
            }
        }
        for (g_1231 = 0; (g_1231 != 28); ++g_1231)
        {
            if (g_100.f1)
                break;
            return l_1432[2];
        }
        return l_1433;
    }
    return l_1372.f1;
}







static unsigned func_5(unsigned char p_6)
{
    unsigned l_1364[7] = {0xC43B9ACAL, 1UL, 0xC43B9ACAL, 1UL, 0xC43B9ACAL, 1UL, 0xC43B9ACAL};
    struct S0 l_1365[4][8][2] = {{{{285,1,-675,0}, {285,1,-675,0}}, {{285,1,-675,0}, {285,1,-675,0}}, {{285,1,-675,0}, {285,1,-675,0}}, {{285,1,-675,0}, {285,1,-675,0}}, {{285,1,-675,0}, {285,1,-675,0}}, {{285,1,-675,0}, {285,1,-675,0}}, {{285,1,-675,0}, {285,1,-675,0}}, {{285,1,-675,0}, {285,1,-675,0}}}, {{{285,1,-675,0}, {285,1,-675,0}}, {{285,1,-675,0}, {285,1,-675,0}}, {{285,1,-675,0}, {285,1,-675,0}}, {{285,1,-675,0}, {285,1,-675,0}}, {{285,1,-675,0}, {285,1,-675,0}}, {{285,1,-675,0}, {285,1,-675,0}}, {{285,1,-675,0}, {285,1,-675,0}}, {{285,1,-675,0}, {285,1,-675,0}}}, {{{285,1,-675,0}, {285,1,-675,0}}, {{285,1,-675,0}, {285,1,-675,0}}, {{285,1,-675,0}, {285,1,-675,0}}, {{285,1,-675,0}, {285,1,-675,0}}, {{285,1,-675,0}, {285,1,-675,0}}, {{285,1,-675,0}, {285,1,-675,0}}, {{285,1,-675,0}, {285,1,-675,0}}, {{285,1,-675,0}, {285,1,-675,0}}}, {{{285,1,-675,0}, {285,1,-675,0}}, {{285,1,-675,0}, {285,1,-675,0}}, {{285,1,-675,0}, {285,1,-675,0}}, {{285,1,-675,0}, {285,1,-675,0}}, {{285,1,-675,0}, {285,1,-675,0}}, {{285,1,-675,0}, {285,1,-675,0}}, {{285,1,-675,0}, {285,1,-675,0}}, {{285,1,-675,0}, {285,1,-675,0}}}};
    int i, j, k;
    for (g_11 = 0; (g_11 <= 13); g_11++)
    {
        unsigned l_1363 = 1UL;
        for (p_6 = 0; (p_6 == 35); ++p_6)
        {
            g_1362 = func_20(g_11);
            return p_6;
        }
        if (l_1363)
            break;
        l_1364[4] = func_41(g_451, p_6);
        g_100.f1 = 0L;
    }
    g_100 = l_1365[2][3][0];
    return l_1364[4];
}







static int func_20(short p_21)
{
    int l_29 = 0L;
    char l_957 = (-2L);
    int l_974 = (-5L);
    struct S0 l_975 = {190,3,322,2};
    short l_1106 = 0x920BL;
    short l_1116 = 8L;
    int l_1162 = (-6L);
    int l_1236 = 0x43695F11L;
    unsigned l_1290[7] = {0x484C8061L, 0x484C8061L, 0xF262BC73L, 0x484C8061L, 0x484C8061L, 0xF262BC73L, 0x484C8061L};
    struct S0 l_1312 = {34,-3,-510,0};
    unsigned l_1361[5];
    int i;
    for (i = 0; i < 5; i++)
        l_1361[i] = 4294967294UL;
    for (p_21 = 0; (p_21 <= 19); p_21 = safe_add_func_int16_t_s_s(p_21, 3))
    {
        unsigned l_626[7] = {0xFF67701CL, 0x20DFAB2EL, 0xFF67701CL, 0x20DFAB2EL, 0xFF67701CL, 0x20DFAB2EL, 0xFF67701CL};
        unsigned char l_627 = 255UL;
        struct S0 l_955 = {243,3,2170,5};
        unsigned l_958[7][10][3] = {{{6UL, 1UL, 0x1F05088AL}, {6UL, 1UL, 0x1F05088AL}, {6UL, 1UL, 0x1F05088AL}, {6UL, 1UL, 0x1F05088AL}, {6UL, 1UL, 0x1F05088AL}, {6UL, 1UL, 0x1F05088AL}, {6UL, 1UL, 0x1F05088AL}, {6UL, 1UL, 0x1F05088AL}, {6UL, 1UL, 0x1F05088AL}, {6UL, 1UL, 0x1F05088AL}}, {{6UL, 1UL, 0x1F05088AL}, {6UL, 1UL, 0x1F05088AL}, {6UL, 1UL, 0x1F05088AL}, {6UL, 1UL, 0x1F05088AL}, {6UL, 1UL, 0x1F05088AL}, {6UL, 1UL, 0x1F05088AL}, {6UL, 1UL, 0x1F05088AL}, {6UL, 1UL, 0x1F05088AL}, {6UL, 1UL, 0x1F05088AL}, {6UL, 1UL, 0x1F05088AL}}, {{6UL, 1UL, 0x1F05088AL}, {6UL, 1UL, 0x1F05088AL}, {6UL, 1UL, 0x1F05088AL}, {6UL, 1UL, 0x1F05088AL}, {6UL, 1UL, 0x1F05088AL}, {6UL, 1UL, 0x1F05088AL}, {6UL, 1UL, 0x1F05088AL}, {6UL, 1UL, 0x1F05088AL}, {6UL, 1UL, 0x1F05088AL}, {6UL, 1UL, 0x1F05088AL}}, {{6UL, 1UL, 0x1F05088AL}, {6UL, 1UL, 0x1F05088AL}, {6UL, 1UL, 0x1F05088AL}, {6UL, 1UL, 0x1F05088AL}, {6UL, 1UL, 0x1F05088AL}, {6UL, 1UL, 0x1F05088AL}, {6UL, 1UL, 0x1F05088AL}, {6UL, 1UL, 0x1F05088AL}, {6UL, 1UL, 0x1F05088AL}, {6UL, 1UL, 0x1F05088AL}}, {{6UL, 1UL, 0x1F05088AL}, {6UL, 1UL, 0x1F05088AL}, {6UL, 1UL, 0x1F05088AL}, {6UL, 1UL, 0x1F05088AL}, {6UL, 1UL, 0x1F05088AL}, {6UL, 1UL, 0x1F05088AL}, {6UL, 1UL, 0x1F05088AL}, {6UL, 1UL, 0x1F05088AL}, {6UL, 1UL, 0x1F05088AL}, {6UL, 1UL, 0x1F05088AL}}, {{6UL, 1UL, 0x1F05088AL}, {6UL, 1UL, 0x1F05088AL}, {6UL, 1UL, 0x1F05088AL}, {6UL, 1UL, 0x1F05088AL}, {6UL, 1UL, 0x1F05088AL}, {6UL, 1UL, 0x1F05088AL}, {6UL, 1UL, 0x1F05088AL}, {6UL, 1UL, 0x1F05088AL}, {6UL, 1UL, 0x1F05088AL}, {6UL, 1UL, 0x1F05088AL}}, {{6UL, 1UL, 0x1F05088AL}, {6UL, 1UL, 0x1F05088AL}, {6UL, 1UL, 0x1F05088AL}, {6UL, 1UL, 0x1F05088AL}, {6UL, 1UL, 0x1F05088AL}, {6UL, 1UL, 0x1F05088AL}, {6UL, 1UL, 0x1F05088AL}, {6UL, 1UL, 0x1F05088AL}, {6UL, 1UL, 0x1F05088AL}, {6UL, 1UL, 0x1F05088AL}}};
        unsigned l_964 = 0x9E5AF199L;
        int l_965 = 9L;
        unsigned char l_1008 = 0x82L;
        short l_1049 = 0x066DL;
        struct S0 l_1080 = {223,2,1950,5};
        char l_1091 = (-1L);
        int l_1102 = 0L;
        short l_1113 = 0x49FCL;
        char l_1310[10][4] = {{0x97L, 0xB2L, 0x28L, 0xB2L}, {0x97L, 0xB2L, 0x28L, 0xB2L}, {0x97L, 0xB2L, 0x28L, 0xB2L}, {0x97L, 0xB2L, 0x28L, 0xB2L}, {0x97L, 0xB2L, 0x28L, 0xB2L}, {0x97L, 0xB2L, 0x28L, 0xB2L}, {0x97L, 0xB2L, 0x28L, 0xB2L}, {0x97L, 0xB2L, 0x28L, 0xB2L}, {0x97L, 0xB2L, 0x28L, 0xB2L}, {0x97L, 0xB2L, 0x28L, 0xB2L}};
        char l_1328 = 0x58L;
        int l_1333[7][6] = {{0xF99DFA7AL, 0x70E47B96L, 5L, (-4L), 0x1FCE4D8AL, (-1L)}, {0xF99DFA7AL, 0x70E47B96L, 5L, (-4L), 0x1FCE4D8AL, (-1L)}, {0xF99DFA7AL, 0x70E47B96L, 5L, (-4L), 0x1FCE4D8AL, (-1L)}, {0xF99DFA7AL, 0x70E47B96L, 5L, (-4L), 0x1FCE4D8AL, (-1L)}, {0xF99DFA7AL, 0x70E47B96L, 5L, (-4L), 0x1FCE4D8AL, (-1L)}, {0xF99DFA7AL, 0x70E47B96L, 5L, (-4L), 0x1FCE4D8AL, (-1L)}, {0xF99DFA7AL, 0x70E47B96L, 5L, (-4L), 0x1FCE4D8AL, (-1L)}};
        char l_1347 = 0x18L;
        int i, j, k;
        l_955 = func_24(p_21, (((func_27(l_29) , (g_100.f3 == (safe_mod_func_int16_t_s_s(0x137DL, (((safe_rshift_func_int8_t_s_s(func_41((g_367 >= l_626[3]), func_41((p_21 > l_29), l_29)), g_100.f0)) | 0L) , 65532UL))))) ^ 1UL) <= l_627));
        if (p_21)
        {
            unsigned char l_961[3];
            struct S0 l_1007 = {272,2,82,6};
            short l_1013 = (-1L);
            int i;
            for (i = 0; i < 3; i++)
                l_961[i] = 0UL;
            for (g_367 = 1; (g_367 <= 6); g_367 += 1)
            {
                int l_956 = 0xE9BD21BEL;
                int i;
                l_956 = (1UL | g_242[g_367]);
                l_957 = 0x8AB3BFEEL;
                if (l_958[6][4][0])
                    break;
                if (g_242[g_367])
                    break;
            }
            if (((safe_add_func_uint32_t_u_u(l_961[2], (((((safe_rshift_func_int16_t_s_u(g_99, l_958[5][3][0])) , 0x45A9L) | ((l_961[2] && l_964) || (func_33(((1L <= g_367) > func_33(g_322[1][1], l_965, p_21, g_100.f1, g_322[0][4])), p_21, p_21, p_21, l_958[5][0][2]) || 0xEE7A5A07L))) != g_99) && g_100.f1))) & 1L))
            {
                unsigned short l_966 = 65535UL;
                struct S0 l_976 = {77,2,-645,5};
                l_966 = g_451;
                for (g_451 = 0; (g_451 >= (-9)); g_451 = safe_sub_func_uint8_t_u_u(g_451, 6))
                {
                    for (l_964 = (-17); (l_964 >= 57); ++l_964)
                    {
                        char l_971 = 0xA0L;
                        l_974 = (((l_966 | (g_11 == (l_971 == (p_21 == ((l_961[2] , ((p_21 , (!(safe_div_func_int8_t_s_s(0L, 254UL)))) & (0x3011L && l_971))) , p_21))))) != 4294967295UL) <= g_100.f2);
                        l_976 = l_975;
                        g_100.f2 = 0x45F51A99L;
                    }
                }
            }
            else
            {
                char l_1003 = (-1L);
                for (g_914 = 0; (g_914 <= 29); ++g_914)
                {
                    int l_983 = (-1L);
                    struct S0 l_1004 = {263,-1,1746,0};
                    l_1004 = (((safe_lshift_func_int8_t_s_u((func_27((((safe_sub_func_int32_t_s_s(l_983, (safe_add_func_int32_t_s_s((safe_div_func_uint8_t_u_u(g_11, g_242[6])), (g_322[2][5] ^ (safe_div_func_int32_t_s_s((safe_add_func_uint32_t_u_u(((l_961[2] && ((g_322[3][0] ^ (safe_add_func_uint16_t_u_u((safe_mod_func_int8_t_s_s(g_242[2], (((safe_unary_minus_func_uint8_t_u((safe_add_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u(l_975.f1, 0)), (safe_sub_func_uint32_t_u_u(((!((((((p_21 , l_627) != l_29) <= p_21) , 0x77L) && 1UL) < l_961[2])) <= l_983), p_21)))))) >= g_100.f3) , p_21))), p_21))) && 4L)) > 65528UL), g_718)), l_961[0]))))))) > l_1003) | p_21)) > 0xEEL), 5)) < g_242[6]) , l_975);
                    for (g_99 = 0; (g_99 < 18); g_99 = safe_add_func_int16_t_s_s(g_99, 9))
                    {
                        g_100 = l_1007;
                        g_100.f2 = l_1008;
                        return g_100.f0;
                    }
                    for (l_1008 = 0; (l_1008 <= 54); l_1008++)
                    {
                        short l_1017 = 0L;
                        l_1007.f2 = (~(safe_sub_func_uint16_t_u_u(((p_21 , 0xA123DAB6L) > l_961[2]), func_41(l_1013, func_27(((g_100 , (safe_mod_func_int16_t_s_s((4294967290UL && (((l_1007.f2 && (safe_unary_minus_func_uint8_t_u(l_1007.f3))) < p_21) && l_1017)), 9UL))) , g_100.f2))))));
                        l_1004.f1 = 0x54E4D11CL;
                    }
                }
            }
            for (g_80 = 5; (g_80 >= 0); g_80 -= 1)
            {
                int l_1035 = 0x422D8296L;
                int i;
                l_975 = l_1007;
                if ((g_242[(g_80 + 1)] <= p_21))
                {
                    return g_242[(g_80 + 1)];
                }
                else
                {
                    short l_1024 = (-1L);
                    l_1007.f1 = (safe_lshift_func_int16_t_s_u((1UL | (p_21 | 0xEEL)), g_242[(g_80 + 1)]));
                    l_1035 = (safe_add_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_s((l_1024 , 0x7AL), 5)) < (safe_add_func_int32_t_s_s((safe_div_func_int8_t_s_s((p_21 == ((func_33(l_1024, g_242[0], g_367, (((safe_rshift_func_uint16_t_u_u(p_21, l_974)) , (safe_rshift_func_uint16_t_u_u(p_21, p_21))) ^ p_21), l_975.f0) <= g_718) >= 0x7CF5L)), 0x63L)), 0x8339BBE4L))), g_367));
                }
                l_1035 = (safe_add_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u(l_1013, (((0x67L >= l_961[1]) == (((p_21 , 0x1CL) | (safe_lshift_func_uint16_t_u_s(((safe_unary_minus_func_int32_t_s((safe_add_func_int32_t_s_s((((safe_rshift_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u(0x56L, 5)), p_21)) < (+l_1049)) ^ ((g_99 & g_242[(g_80 + 1)]) || 1UL)), g_242[6])))) > g_100.f3), p_21))) , l_974)) ^ g_812[1]))), p_21));
            }
        }
        else
        {
            unsigned l_1050 = 0UL;
            int l_1079 = 0x933C21D0L;
            struct S0 l_1088 = {270,-3,-1399,0};
            unsigned char l_1182 = 0x2AL;
            l_1050 = 0L;
            if (p_21)
            {
                unsigned char l_1059[1][5] = {{0x86L, 7UL, 0x86L, 7UL, 0x86L}};
                int i, j;
                for (l_965 = 0; (l_965 >= (-14)); l_965 = safe_sub_func_int16_t_s_s(l_965, 8))
                {
                    int l_1064 = (-7L);
                    int l_1069 = 0x494D8886L;
                    l_975.f2 = (((l_958[3][2][1] != l_975.f0) | (l_964 ^ ((p_21 , g_11) | (safe_div_func_uint8_t_u_u(((safe_sub_func_uint32_t_u_u((safe_mod_func_uint16_t_u_u(l_1059[0][1], (safe_rshift_func_uint16_t_u_u(g_812[0], 10)))), g_11)) >= (safe_mod_func_int32_t_s_s(p_21, l_1064))), l_1050))))) <= g_322[1][4]);
                    l_1069 = (safe_lshift_func_uint16_t_u_s(l_1064, (safe_lshift_func_int16_t_s_s(p_21, 11))));
                }
                return p_21;
            }
            else
            {
                g_1072[3] = ((safe_lshift_func_uint16_t_u_s(5UL, 7)) < p_21);
            }
            for (l_965 = 0; (l_965 <= 9); l_965 += 1)
            {
                int l_1122 = (-8L);
                int i;
                if (g_1072[l_965])
                {
                    l_1079 = (!(func_44(func_41(g_718, (func_24(p_21, p_21) , (((g_1072[l_965] , (~((safe_sub_func_uint8_t_u_u((~(p_21 >= (safe_rshift_func_int16_t_s_s((((g_100.f0 , (((safe_add_func_int8_t_s_s(((g_718 != (0x1D92L != 0L)) > 5UL), g_914)) && g_914) & g_11)) || l_955.f1) >= 0x8C9F16C7L), p_21)))), 1UL)) ^ 0UL))) || 0x7351D2F1L) || 0x43L))), g_1072[3], g_322[2][2], p_21) && 0xE880CEF4L));
                    l_1080 = g_100;
                    if (g_100.f3)
                        break;
                }
                else
                {
                    int l_1096 = 0x0415F828L;
                    short l_1121 = 0x001FL;
                    if ((safe_mod_func_int16_t_s_s((func_24(((((safe_rshift_func_int8_t_s_s((1UL > g_718), 2)) != ((safe_unary_minus_func_int32_t_s(((func_24((safe_mod_func_uint8_t_u_u(((((l_1088 , (safe_lshift_func_int16_t_s_u((0x62D6C2E7L || l_1091), (0xF2CA0A46L || g_1072[3])))) > g_80) , func_33((safe_sub_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u((func_53(g_914) & 0xFDL), l_974)), 0x878FL)), g_812[0], p_21, g_1072[3], l_1096)) && l_1096), 255UL)), l_1091) , l_975.f0) != g_1072[3]))) & p_21)) | (-1L)) >= 0x64L), g_322[3][3]) , l_1050), l_975.f2)))
                    {
                        int l_1101 = 1L;
                        g_100.f2 = (((p_21 && (safe_mod_func_int16_t_s_s((((safe_add_func_uint8_t_u_u(l_1101, g_322[2][2])) , g_11) > (0x1675C3EDL || ((l_626[4] == ((l_955.f1 && p_21) > g_80)) <= l_1102))), p_21))) >= g_367) == g_322[3][5]);
                    }
                    else
                    {
                        short l_1103 = 0xADA3L;
                        if (l_1103)
                            break;
                    }
                    l_975 = func_24((~l_1079), (safe_sub_func_int16_t_s_s((func_24(((l_1106 >= (p_21 >= ((safe_div_func_int32_t_s_s(((safe_lshift_func_uint8_t_u_s((((safe_lshift_func_uint16_t_u_s(l_1113, (safe_rshift_func_uint8_t_u_s(l_1116, ((g_100.f3 && (safe_div_func_int8_t_s_s(7L, p_21))) < (safe_mod_func_int32_t_s_s(func_33(l_957, g_1072[3], l_1121, p_21, p_21), 0x25720785L))))))) | g_718) , g_242[1]), 1)) && l_1088.f2), g_100.f2)) , 0x2C74L))) , p_21), l_1122) , l_1008), 0xA1B4L)));
                    if (p_21)
                        break;
                }
                l_975.f2 = ((safe_mod_func_uint8_t_u_u((func_41(((l_1088.f2 < (safe_div_func_int32_t_s_s(((safe_unary_minus_func_int16_t_s(g_100.f0)) , ((g_1072[3] & 0x60L) == (safe_sub_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s(((safe_div_func_uint16_t_u_u((((safe_sub_func_uint8_t_u_u(0x09L, func_27(g_1072[l_965]))) && (safe_sub_func_int32_t_s_s(((safe_sub_func_uint32_t_u_u((0x41L < (((((safe_mod_func_uint32_t_u_u(func_44((g_100.f2 , 0x9C1A62DDL), l_975.f3, g_1072[l_965], g_100.f0), 0xDDFAA2D7L)) == l_974) , g_812[1]) , p_21) | p_21)), g_242[6])) != g_242[1]), 0xD640F532L))) != p_21), p_21)) < 0L), 11)), g_812[1])))), g_322[1][5]))) != 0L), g_11) | g_322[3][4]), 1L)) < p_21);
                if (p_21)
                {
                    unsigned short l_1152 = 1UL;
                    int l_1161[5][6] = {{1L, 0xDB9DD6B1L, 8L, 0xDB9DD6B1L, 1L, 0x4E79C1C0L}, {1L, 0xDB9DD6B1L, 8L, 0xDB9DD6B1L, 1L, 0x4E79C1C0L}, {1L, 0xDB9DD6B1L, 8L, 0xDB9DD6B1L, 1L, 0x4E79C1C0L}, {1L, 0xDB9DD6B1L, 8L, 0xDB9DD6B1L, 1L, 0x4E79C1C0L}, {1L, 0xDB9DD6B1L, 8L, 0xDB9DD6B1L, 1L, 0x4E79C1C0L}};
                    int i, j;
                    if (p_21)
                        break;
                    l_975.f1 = (((6L < ((safe_mod_func_uint32_t_u_u(((func_44((func_33(g_99, ((safe_add_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s(0x40F4L, l_957)), (safe_lshift_func_uint16_t_u_s(g_100.f0, func_55(g_100, p_21, (p_21 , l_1113), p_21))))) && g_451), g_100.f3, p_21, p_21) , g_100.f2), g_100.f0, l_1152, g_1072[8]) & g_914) > p_21), 0x27BEC469L)) != 0xF06BL)) , p_21) && g_322[1][1]);
                    l_975.f2 = (safe_lshift_func_uint16_t_u_s(func_27(((safe_div_func_uint8_t_u_u(((safe_rshift_func_int8_t_s_s((-1L), l_1080.f1)) <= (l_1152 == 0x40DF1A74L)), (p_21 & g_242[6]))) == (g_812[0] && p_21))), g_812[0]));
                    l_1161[2][3] = (safe_add_func_int32_t_s_s(g_322[1][1], func_33(l_974, (g_322[3][0] , p_21), p_21, l_975.f0, l_975.f3)));
                }
                else
                {
                    unsigned l_1171 = 4294967293UL;
                    g_100.f1 = l_1162;
                    l_975.f2 = func_33((safe_add_func_int32_t_s_s((+(((~(safe_div_func_uint32_t_u_u((l_1122 <= (safe_mod_func_int32_t_s_s(l_1122, 0xEFBA19D2L))), (safe_sub_func_int16_t_s_s(((65533UL ^ 0x7048L) <= (l_1171 , (safe_mod_func_uint8_t_u_u((func_44(l_1122, (g_1072[l_965] > func_53(p_21)), l_1171, p_21) && l_1088.f1), 0xB8L)))), p_21))))) < g_322[3][5]) | p_21)), 1UL)), g_11, g_1072[3], g_718, l_955.f2);
                    if (p_21)
                        continue;
                    l_975 = func_24(p_21, ((safe_mod_func_int8_t_s_s((g_11 > 3UL), l_1171)) == (safe_rshift_func_uint8_t_u_s((p_21 != (safe_rshift_func_uint16_t_u_s(((safe_lshift_func_int16_t_s_s(l_1182, l_1080.f2)) | (safe_div_func_int8_t_s_s(g_451, (p_21 | 0x29L)))), p_21))), g_1072[l_965]))));
                }
            }
            g_100 = l_1080;
        }
        l_974 = p_21;
        for (l_1008 = 17; (l_1008 < 17); l_1008++)
        {
            unsigned char l_1200 = 1UL;
            int l_1292 = 0xBFFDAF3EL;
            struct S0 l_1305 = {294,2,-382,5};
            int l_1348[4][8] = {{0x88397ECCL, 0xA70917C4L, 0x88397ECCL, 0xA70917C4L, 0x88397ECCL, 0xA70917C4L, 0x88397ECCL, 0xA70917C4L}, {0x88397ECCL, 0xA70917C4L, 0x88397ECCL, 0xA70917C4L, 0x88397ECCL, 0xA70917C4L, 0x88397ECCL, 0xA70917C4L}, {0x88397ECCL, 0xA70917C4L, 0x88397ECCL, 0xA70917C4L, 0x88397ECCL, 0xA70917C4L, 0x88397ECCL, 0xA70917C4L}, {0x88397ECCL, 0xA70917C4L, 0x88397ECCL, 0xA70917C4L, 0x88397ECCL, 0xA70917C4L, 0x88397ECCL, 0xA70917C4L}};
            int i, j;
            for (g_99 = 0; (g_99 == 8); ++g_99)
            {
                short l_1189 = 0x71E1L;
                return l_1189;
            }
            l_1162 = ((p_21 ^ ((safe_sub_func_uint16_t_u_u((p_21 | (safe_sub_func_int32_t_s_s(0x318E90C5L, func_44(g_812[0], g_100.f0, func_55(g_100, ((safe_add_func_int32_t_s_s((safe_sub_func_int16_t_s_s(g_718, 0x873DL)), (((safe_mod_func_uint32_t_u_u(p_21, g_812[0])) | l_1080.f0) >= g_914))) != l_1200), g_11, p_21), g_1072[3])))), (-4L))) > g_812[0])) | g_242[5]);
            if (func_27(g_914))
            {
                return p_21;
            }
            else
            {
                unsigned char l_1232[8][4][4] = {{{0xADL, 0xBEL, 0x4EL, 0x57L}, {0xADL, 0xBEL, 0x4EL, 0x57L}, {0xADL, 0xBEL, 0x4EL, 0x57L}, {0xADL, 0xBEL, 0x4EL, 0x57L}}, {{0xADL, 0xBEL, 0x4EL, 0x57L}, {0xADL, 0xBEL, 0x4EL, 0x57L}, {0xADL, 0xBEL, 0x4EL, 0x57L}, {0xADL, 0xBEL, 0x4EL, 0x57L}}, {{0xADL, 0xBEL, 0x4EL, 0x57L}, {0xADL, 0xBEL, 0x4EL, 0x57L}, {0xADL, 0xBEL, 0x4EL, 0x57L}, {0xADL, 0xBEL, 0x4EL, 0x57L}}, {{0xADL, 0xBEL, 0x4EL, 0x57L}, {0xADL, 0xBEL, 0x4EL, 0x57L}, {0xADL, 0xBEL, 0x4EL, 0x57L}, {0xADL, 0xBEL, 0x4EL, 0x57L}}, {{0xADL, 0xBEL, 0x4EL, 0x57L}, {0xADL, 0xBEL, 0x4EL, 0x57L}, {0xADL, 0xBEL, 0x4EL, 0x57L}, {0xADL, 0xBEL, 0x4EL, 0x57L}}, {{0xADL, 0xBEL, 0x4EL, 0x57L}, {0xADL, 0xBEL, 0x4EL, 0x57L}, {0xADL, 0xBEL, 0x4EL, 0x57L}, {0xADL, 0xBEL, 0x4EL, 0x57L}}, {{0xADL, 0xBEL, 0x4EL, 0x57L}, {0xADL, 0xBEL, 0x4EL, 0x57L}, {0xADL, 0xBEL, 0x4EL, 0x57L}, {0xADL, 0xBEL, 0x4EL, 0x57L}}, {{0xADL, 0xBEL, 0x4EL, 0x57L}, {0xADL, 0xBEL, 0x4EL, 0x57L}, {0xADL, 0xBEL, 0x4EL, 0x57L}, {0xADL, 0xBEL, 0x4EL, 0x57L}}};
                int i, j, k;
                if (l_1080.f3)
                    break;
                for (g_451 = (-20); (g_451 == (-14)); g_451 = safe_add_func_int32_t_s_s(g_451, 8))
                {
                    short l_1205 = 0L;
                    short l_1215 = 0x9D66L;
                    for (l_1162 = (-23); (l_1162 == (-12)); l_1162 = safe_add_func_int8_t_s_s(l_1162, 8))
                    {
                        int l_1212 = 0x9E272FBDL;
                        unsigned char l_1226 = 0xABL;
                        char l_1233[10] = {1L, 1L, 0x34L, 0x34L, 1L, 1L, 1L, 0x34L, 0x34L, 1L};
                        int i;
                        l_1080.f2 = g_914;
                        g_100.f2 = ((((p_21 , l_1205) < p_21) && ((safe_sub_func_int32_t_s_s(l_1205, (safe_sub_func_int32_t_s_s(((safe_mod_func_uint32_t_u_u(((!0x9AL) <= (p_21 | func_33(p_21, g_242[6], l_1106, g_1072[8], l_1212))), g_100.f1)) ^ 65535UL), 0xC14DF454L)))) && 65529UL)) | 0UL);
                        l_1215 = (l_1091 >= (func_55(g_100, l_1080.f0, (l_1200 , (((g_914 == p_21) , (g_100 , g_100.f2)) , 0L)), l_1205) >= g_11));
                        g_100.f2 = (g_80 ^ ((safe_div_func_int16_t_s_s(p_21, (safe_rshift_func_int16_t_s_s((safe_mod_func_uint32_t_u_u((~0x53FA5AA1L), (safe_sub_func_int32_t_s_s(g_451, (safe_lshift_func_int8_t_s_s(l_1226, (((g_812[0] & (safe_lshift_func_int16_t_s_s(g_99, 14))) || (((((((func_33(g_1231, l_1232[3][3][0], g_100.f0, p_21, l_1233[7]) , g_100.f2) >= 251UL) <= p_21) | l_1080.f3) == 0x6166F4C0L) & 0L) && g_100.f3)) != g_1231))))))), 11)))) || 0xE02D7A6BL));
                    }
                    l_975 = g_100;
                }
                g_100.f2 = func_41(g_100.f3, ((p_21 == ((p_21 < func_55(l_955, (((safe_sub_func_uint16_t_u_u(func_55(l_955, g_100.f0, p_21, p_21), g_322[2][5])) ^ l_1236) >= p_21), g_100.f0, l_975.f0)) & l_626[3])) ^ 1UL));
            }
            if (g_99)
            {
                unsigned char l_1247 = 0UL;
                unsigned char l_1264[9];
                struct S0 l_1285[10] = {{327,-2,621,2}, {175,2,-2418,0}, {327,-2,621,2}, {175,2,-2418,0}, {327,-2,621,2}, {175,2,-2418,0}, {327,-2,621,2}, {175,2,-2418,0}, {327,-2,621,2}, {175,2,-2418,0}};
                int i;
                for (i = 0; i < 9; i++)
                    l_1264[i] = 246UL;
                for (l_1091 = 4; (l_1091 == (-14)); l_1091 = safe_sub_func_uint8_t_u_u(l_1091, 1))
                {
                    return p_21;
                }
                if ((l_1236 < (safe_div_func_int16_t_s_s(((safe_div_func_int32_t_s_s((g_100.f2 && (g_1072[3] ^ ((safe_lshift_func_uint16_t_u_u(((safe_rshift_func_int16_t_s_u(((0x00D7AC49L < ((l_1200 , func_27(p_21)) > g_242[6])) , l_1247), 6)) , g_451), 0)) , 0x656E92EEL))), p_21)) < l_29), l_1200))))
                {
                    unsigned char l_1256[4][6] = {{252UL, 252UL, 0x7DL, 0x50L, 0UL, 0x50L}, {252UL, 252UL, 0x7DL, 0x50L, 0UL, 0x50L}, {252UL, 252UL, 0x7DL, 0x50L, 0UL, 0x50L}, {252UL, 252UL, 0x7DL, 0x50L, 0UL, 0x50L}};
                    int i, j;
                    l_955 = func_24(l_974, ((safe_lshift_func_int16_t_s_s((safe_sub_func_int8_t_s_s(((p_21 && 0x4067L) <= (g_1072[4] ^ p_21)), (safe_lshift_func_uint16_t_u_s(1UL, (g_99 ^ ((func_33(((g_718 , (safe_div_func_uint16_t_u_u(((g_80 == p_21) < p_21), g_242[6]))) , (-8L)), p_21, p_21, g_242[6], p_21) == p_21) == l_1256[3][0])))))), l_1256[3][0])) && p_21));
                    for (g_80 = (-27); (g_80 != (-6)); ++g_80)
                    {
                        struct S0 l_1259 = {177,-3,-1856,2};
                        l_1259 = g_100;
                        l_1259.f2 = (p_21 >= l_1259.f1);
                        l_1264[1] = ((safe_lshift_func_uint8_t_u_u((func_33((((((safe_sub_func_uint8_t_u_u(l_955.f2, ((g_100.f0 == 0xDC990F11L) , p_21))) | (((func_33(p_21, (g_1072[5] < l_1259.f0), g_242[6], p_21, g_11) , l_975.f2) < l_1256[0][2]) ^ 0x67L)) != p_21) <= p_21) , 3L), g_322[1][1], g_451, g_1072[9], l_955.f2) < l_1200), l_1236)) , 0x2D84B0D1L);
                    }
                    g_100.f1 = (l_1080 , (safe_add_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u((g_100.f2 <= (g_99 >= (safe_div_func_uint32_t_u_u((safe_rshift_func_int8_t_s_s((safe_div_func_int16_t_s_s(0L, (safe_div_func_uint8_t_u_u(((func_33(g_367, ((((safe_rshift_func_uint16_t_u_u(g_812[1], 7)) , g_100.f2) , (~((249UL < g_914) > 0xE7L))) | 0xCFA70B43L), p_21, g_322[1][1], l_1264[0]) < 250UL) < l_1080.f0), g_100.f2)))), 0)), p_21)))), (-8L))), l_1256[3][0])));
                }
                else
                {
                    l_1285[8] = (func_33(g_242[6], g_242[6], g_100.f0, (safe_lshift_func_uint8_t_u_u((0x98L != func_33(p_21, l_1113, p_21, (safe_lshift_func_int16_t_s_u(((+g_100.f1) < (safe_sub_func_int8_t_s_s(g_718, l_974))), p_21)), g_100.f1)), 0)), g_451) , l_975);
                    if (g_367)
                    {
                        if (l_1200)
                            break;
                    }
                    else
                    {
                        return g_100.f0;
                    }
                    for (l_627 = 0; (l_627 == 10); l_627 = safe_add_func_uint16_t_u_u(l_627, 8))
                    {
                        char l_1291[3];
                        int i;
                        for (i = 0; i < 3; i++)
                            l_1291[i] = 0x66L;
                        l_1292 = ((safe_div_func_int32_t_s_s(l_1290[4], ((0x0EL && (l_1291[2] , func_53(g_322[1][1]))) , 4294967295UL))) && l_1291[2]);
                    }
                    g_100 = g_100;
                }
                for (l_965 = 0; (l_965 > 10); ++l_965)
                {
                    g_100.f1 = p_21;
                    if ((l_955 , 0x356321AFL))
                    {
                        unsigned char l_1295 = 0xA0L;
                        int l_1296 = 0x42E360E6L;
                        l_1295 = (l_955.f3 != g_100.f0);
                        l_1296 = p_21;
                        g_100.f1 = (((safe_sub_func_int8_t_s_s(p_21, ((safe_div_func_uint16_t_u_u(g_322[1][1], func_33(g_1072[9], g_100.f2, (safe_sub_func_uint32_t_u_u(g_1231, l_1285[8].f3)), p_21, g_451))) , g_242[1]))) & 0xF795L) && 0UL);
                    }
                    else
                    {
                        int l_1303 = (-2L);
                        struct S0 l_1304 = {294,0,1049,0};
                        l_1303 = p_21;
                        l_1304 = func_24((l_1292 >= g_1072[6]), p_21);
                    }
                    l_1305 = func_24(l_1292, l_955.f0);
                }
            }
            else
            {
                unsigned short l_1311 = 0xC833L;
                unsigned char l_1323[5] = {255UL, 0UL, 255UL, 0UL, 255UL};
                int i;
                l_1311 = (func_44(p_21, ((safe_mod_func_uint8_t_u_u(p_21, p_21)) & l_955.f3), (safe_lshift_func_int8_t_s_u(l_1310[2][0], l_1305.f1)), p_21) > p_21);
                if ((func_41(l_1113, g_11) ^ (((((l_1312 , (0xE8L > p_21)) && l_1311) , ((((safe_lshift_func_uint8_t_u_s((func_33(l_1311, ((safe_div_func_int8_t_s_s(func_33(p_21, p_21, l_1311, l_1312.f3, p_21), g_1072[1])) , l_1200), p_21, l_1310[2][0], l_1305.f0) & g_451), 7)) <= l_1311) & 0xCC33C2C4L) && (-1L))) , 7L) <= l_1311)))
                {
                    unsigned l_1317[5];
                    int i;
                    for (i = 0; i < 5; i++)
                        l_1317[i] = 4294967286UL;
                    l_975 = func_24(l_1317[1], l_1311);
                    l_1305.f1 = (safe_lshift_func_uint8_t_u_u(l_1305.f1, 5));
                    return l_1162;
                }
                else
                {
                    struct S0 l_1320 = {158,2,240,5};
                    g_100 = l_1305;
                    for (l_1162 = 6; (l_1162 >= 2); l_1162 -= 1)
                    {
                        g_100 = l_1320;
                    }
                    for (l_957 = 0; (l_957 <= 14); ++l_957)
                    {
                        l_1323[1] = (((l_1311 , g_100.f2) >= func_55(l_1320, g_242[6], g_322[1][1], ((((((g_1072[1] > (func_33(l_1080.f1, l_1292, g_322[2][4], l_1311, p_21) >= p_21)) < g_812[0]) <= l_1312.f2) || l_1320.f1) || p_21) , 0xEEB4L))) , 0x429A32ABL);
                        l_1080.f1 = (safe_lshift_func_uint8_t_u_s((func_55(func_24(func_27(g_1072[9]), (l_1292 > ((safe_sub_func_uint32_t_u_u(l_1328, 0xAEB800DAL)) , (safe_add_func_int16_t_s_s(((safe_lshift_func_int8_t_s_u(((g_11 < 255UL) > ((l_1305.f1 < p_21) , 0UL)), 2)) ^ g_1072[9]), l_1320.f3))))), l_1333[5][4], l_1305.f1, p_21) & g_322[1][1]), 6));
                    }
                    if ((safe_mod_func_uint32_t_u_u(0x157AF4A3L, p_21)))
                    {
                        g_100.f2 = func_55(g_100, (p_21 || (!((safe_div_func_uint16_t_u_u(l_1320.f1, (safe_lshift_func_int8_t_s_u(((65530UL == (-3L)) | p_21), 2)))) <= l_1320.f0))), g_322[1][1], (safe_add_func_int16_t_s_s(l_626[3], g_80)));
                        g_100.f2 = p_21;
                    }
                    else
                    {
                        struct S0 l_1346 = {158,-1,308,0};
                        g_100 = g_100;
                        l_1292 = (((safe_div_func_int32_t_s_s((l_1346 , (func_55(func_24(l_1323[1], g_100.f0), l_1292, (func_33((l_1346.f2 || (p_21 , g_322[3][2])), l_1323[1], p_21, l_957, g_242[3]) == l_1347), l_1348[0][6]) , g_1231)), l_1346.f1)) > g_1072[2]) != p_21);
                    }
                }
            }
        }
    }
    for (p_21 = 0; (p_21 > 19); p_21++)
    {
        short l_1357 = 1L;
        unsigned short l_1360 = 0UL;
        g_100.f2 = ((((safe_mod_func_int16_t_s_s(((safe_div_func_int16_t_s_s((p_21 > ((g_100.f3 , (safe_add_func_uint8_t_u_u(g_1072[7], l_1106))) >= l_1290[4])), ((l_1357 || (safe_sub_func_uint16_t_u_u(g_718, ((p_21 , (l_1312.f1 | l_1360)) == p_21)))) | g_1231))) != l_1361[2]), g_242[1])) && p_21) && l_1312.f2) == 0x0BL);
    }
    return g_99;
}







static struct S0 func_24(unsigned short p_25, unsigned char p_26)
{
    struct S0 l_630 = {71,-0,993,6};
    int l_693[7][4][6] = {{{0xC6FB10C5L, 8L, (-6L), 0x3DB79A74L, 0L, 0x0CDCD275L}, {0xC6FB10C5L, 8L, (-6L), 0x3DB79A74L, 0L, 0x0CDCD275L}, {0xC6FB10C5L, 8L, (-6L), 0x3DB79A74L, 0L, 0x0CDCD275L}, {0xC6FB10C5L, 8L, (-6L), 0x3DB79A74L, 0L, 0x0CDCD275L}}, {{0xC6FB10C5L, 8L, (-6L), 0x3DB79A74L, 0L, 0x0CDCD275L}, {0xC6FB10C5L, 8L, (-6L), 0x3DB79A74L, 0L, 0x0CDCD275L}, {0xC6FB10C5L, 8L, (-6L), 0x3DB79A74L, 0L, 0x0CDCD275L}, {0xC6FB10C5L, 8L, (-6L), 0x3DB79A74L, 0L, 0x0CDCD275L}}, {{0xC6FB10C5L, 8L, (-6L), 0x3DB79A74L, 0L, 0x0CDCD275L}, {0xC6FB10C5L, 8L, (-6L), 0x3DB79A74L, 0L, 0x0CDCD275L}, {0xC6FB10C5L, 8L, (-6L), 0x3DB79A74L, 0L, 0x0CDCD275L}, {0xC6FB10C5L, 8L, (-6L), 0x3DB79A74L, 0L, 0x0CDCD275L}}, {{0xC6FB10C5L, 8L, (-6L), 0x3DB79A74L, 0L, 0x0CDCD275L}, {0xC6FB10C5L, 8L, (-6L), 0x3DB79A74L, 0L, 0x0CDCD275L}, {0xC6FB10C5L, 8L, (-6L), 0x3DB79A74L, 0L, 0x0CDCD275L}, {0xC6FB10C5L, 8L, (-6L), 0x3DB79A74L, 0L, 0x0CDCD275L}}, {{0xC6FB10C5L, 8L, (-6L), 0x3DB79A74L, 0L, 0x0CDCD275L}, {0xC6FB10C5L, 8L, (-6L), 0x3DB79A74L, 0L, 0x0CDCD275L}, {0xC6FB10C5L, 8L, (-6L), 0x3DB79A74L, 0L, 0x0CDCD275L}, {0xC6FB10C5L, 8L, (-6L), 0x3DB79A74L, 0L, 0x0CDCD275L}}, {{0xC6FB10C5L, 8L, (-6L), 0x3DB79A74L, 0L, 0x0CDCD275L}, {0xC6FB10C5L, 8L, (-6L), 0x3DB79A74L, 0L, 0x0CDCD275L}, {0xC6FB10C5L, 8L, (-6L), 0x3DB79A74L, 0L, 0x0CDCD275L}, {0xC6FB10C5L, 8L, (-6L), 0x3DB79A74L, 0L, 0x0CDCD275L}}, {{0xC6FB10C5L, 8L, (-6L), 0x3DB79A74L, 0L, 0x0CDCD275L}, {0xC6FB10C5L, 8L, (-6L), 0x3DB79A74L, 0L, 0x0CDCD275L}, {0xC6FB10C5L, 8L, (-6L), 0x3DB79A74L, 0L, 0x0CDCD275L}, {0xC6FB10C5L, 8L, (-6L), 0x3DB79A74L, 0L, 0x0CDCD275L}}};
    int l_754 = 0L;
    unsigned l_772 = 1UL;
    char l_810 = 2L;
    int l_916 = 0x6AFC90CCL;
    unsigned char l_932 = 250UL;
    int i, j, k;
    if ((p_26 <= ((safe_mod_func_uint8_t_u_u(g_242[6], (-1L))) > g_100.f0)))
    {
        struct S0 l_634 = {354,-2,-1545,1};
        int l_696[8][8][4] = {{{1L, 0L, (-5L), 0x1832A510L}, {1L, 0L, (-5L), 0x1832A510L}, {1L, 0L, (-5L), 0x1832A510L}, {1L, 0L, (-5L), 0x1832A510L}, {1L, 0L, (-5L), 0x1832A510L}, {1L, 0L, (-5L), 0x1832A510L}, {1L, 0L, (-5L), 0x1832A510L}, {1L, 0L, (-5L), 0x1832A510L}}, {{1L, 0L, (-5L), 0x1832A510L}, {1L, 0L, (-5L), 0x1832A510L}, {1L, 0L, (-5L), 0x1832A510L}, {1L, 0L, (-5L), 0x1832A510L}, {1L, 0L, (-5L), 0x1832A510L}, {1L, 0L, (-5L), 0x1832A510L}, {1L, 0L, (-5L), 0x1832A510L}, {1L, 0L, (-5L), 0x1832A510L}}, {{1L, 0L, (-5L), 0x1832A510L}, {1L, 0L, (-5L), 0x1832A510L}, {1L, 0L, (-5L), 0x1832A510L}, {1L, 0L, (-5L), 0x1832A510L}, {1L, 0L, (-5L), 0x1832A510L}, {1L, 0L, (-5L), 0x1832A510L}, {1L, 0L, (-5L), 0x1832A510L}, {1L, 0L, (-5L), 0x1832A510L}}, {{1L, 0L, (-5L), 0x1832A510L}, {1L, 0L, (-5L), 0x1832A510L}, {1L, 0L, (-5L), 0x1832A510L}, {1L, 0L, (-5L), 0x1832A510L}, {1L, 0L, (-5L), 0x1832A510L}, {1L, 0L, (-5L), 0x1832A510L}, {1L, 0L, (-5L), 0x1832A510L}, {1L, 0L, (-5L), 0x1832A510L}}, {{1L, 0L, (-5L), 0x1832A510L}, {1L, 0L, (-5L), 0x1832A510L}, {1L, 0L, (-5L), 0x1832A510L}, {1L, 0L, (-5L), 0x1832A510L}, {1L, 0L, (-5L), 0x1832A510L}, {1L, 0L, (-5L), 0x1832A510L}, {1L, 0L, (-5L), 0x1832A510L}, {1L, 0L, (-5L), 0x1832A510L}}, {{1L, 0L, (-5L), 0x1832A510L}, {1L, 0L, (-5L), 0x1832A510L}, {1L, 0L, (-5L), 0x1832A510L}, {1L, 0L, (-5L), 0x1832A510L}, {1L, 0L, (-5L), 0x1832A510L}, {1L, 0L, (-5L), 0x1832A510L}, {1L, 0L, (-5L), 0x1832A510L}, {1L, 0L, (-5L), 0x1832A510L}}, {{1L, 0L, (-5L), 0x1832A510L}, {1L, 0L, (-5L), 0x1832A510L}, {1L, 0L, (-5L), 0x1832A510L}, {1L, 0L, (-5L), 0x1832A510L}, {1L, 0L, (-5L), 0x1832A510L}, {1L, 0L, (-5L), 0x1832A510L}, {1L, 0L, (-5L), 0x1832A510L}, {1L, 0L, (-5L), 0x1832A510L}}, {{1L, 0L, (-5L), 0x1832A510L}, {1L, 0L, (-5L), 0x1832A510L}, {1L, 0L, (-5L), 0x1832A510L}, {1L, 0L, (-5L), 0x1832A510L}, {1L, 0L, (-5L), 0x1832A510L}, {1L, 0L, (-5L), 0x1832A510L}, {1L, 0L, (-5L), 0x1832A510L}, {1L, 0L, (-5L), 0x1832A510L}}};
        int l_697[7][8] = {{0x60923F70L, 0L, 0L, 0x60923F70L, (-5L), 1L, 0xF8CD926CL, 0x509BFBB7L}, {0x60923F70L, 0L, 0L, 0x60923F70L, (-5L), 1L, 0xF8CD926CL, 0x509BFBB7L}, {0x60923F70L, 0L, 0L, 0x60923F70L, (-5L), 1L, 0xF8CD926CL, 0x509BFBB7L}, {0x60923F70L, 0L, 0L, 0x60923F70L, (-5L), 1L, 0xF8CD926CL, 0x509BFBB7L}, {0x60923F70L, 0L, 0L, 0x60923F70L, (-5L), 1L, 0xF8CD926CL, 0x509BFBB7L}, {0x60923F70L, 0L, 0L, 0x60923F70L, (-5L), 1L, 0xF8CD926CL, 0x509BFBB7L}, {0x60923F70L, 0L, 0L, 0x60923F70L, (-5L), 1L, 0xF8CD926CL, 0x509BFBB7L}};
        int l_698 = 1L;
        struct S0 l_699 = {43,-0,2486,5};
        short l_753 = 0xA2BDL;
        int i, j, k;
        g_100 = (g_100 , l_630);
        if ((safe_lshift_func_int16_t_s_s(l_630.f1, (g_451 ^ p_25))))
        {
            struct S0 l_633 = {353,-2,1533,7};
            unsigned l_677[5][8] = {{0xE9E624EBL, 0x2E06E24FL, 0xE9E624EBL, 0x2E06E24FL, 0xE9E624EBL, 0x2E06E24FL, 0xE9E624EBL, 0x2E06E24FL}, {0xE9E624EBL, 0x2E06E24FL, 0xE9E624EBL, 0x2E06E24FL, 0xE9E624EBL, 0x2E06E24FL, 0xE9E624EBL, 0x2E06E24FL}, {0xE9E624EBL, 0x2E06E24FL, 0xE9E624EBL, 0x2E06E24FL, 0xE9E624EBL, 0x2E06E24FL, 0xE9E624EBL, 0x2E06E24FL}, {0xE9E624EBL, 0x2E06E24FL, 0xE9E624EBL, 0x2E06E24FL, 0xE9E624EBL, 0x2E06E24FL, 0xE9E624EBL, 0x2E06E24FL}, {0xE9E624EBL, 0x2E06E24FL, 0xE9E624EBL, 0x2E06E24FL, 0xE9E624EBL, 0x2E06E24FL, 0xE9E624EBL, 0x2E06E24FL}};
            unsigned short l_710 = 0x051CL;
            unsigned char l_760 = 0x8EL;
            struct S0 l_761 = {149,2,-2463,7};
            int i, j;
            if (p_26)
            {
                int l_649 = 0xBB8EAD91L;
                l_634 = l_633;
                l_634.f1 = (safe_mod_func_int8_t_s_s(((safe_lshift_func_int16_t_s_u(l_633.f2, 2)) >= (((g_99 , (safe_lshift_func_uint8_t_u_u((p_26 <= ((safe_div_func_int32_t_s_s(p_26, l_630.f2)) , ((safe_sub_func_int16_t_s_s(((safe_sub_func_int8_t_s_s((0x9CL && (((!(0UL || ((safe_rshift_func_int16_t_s_s(p_25, 15)) > l_649))) > l_633.f0) != p_26)), p_26)) | p_26), p_26)) ^ 0UL))), g_242[6]))) <= l_633.f2) && g_100.f0)), l_649));
            }
            else
            {
                int l_652[7];
                int i;
                for (i = 0; i < 7; i++)
                    l_652[i] = 1L;
                l_652[0] = (g_367 || (safe_add_func_int32_t_s_s(g_80, (((l_652[0] > l_634.f3) ^ (safe_div_func_int32_t_s_s(((safe_sub_func_uint32_t_u_u((0xDD0CL && (safe_rshift_func_int8_t_s_s(((((safe_div_func_int8_t_s_s((((safe_add_func_uint32_t_u_u(((safe_lshift_func_int16_t_s_s(0x4A5EL, 10)) == 0x8CL), (((g_100.f1 , (~l_630.f2)) == g_99) & l_633.f1))) & g_80) != 0x1FL), 1L)) | l_630.f3) || 0xE0A70F1FL) >= 0x0F030724L), 3))), p_26)) < 0xB37EL), g_100.f2))) , 0x05623DA4L))));
            }
            for (g_99 = (-14); (g_99 <= 8); g_99 = safe_add_func_uint16_t_u_u(g_99, 2))
            {
                int l_694 = (-8L);
                struct S0 l_711[3] = {{289,-1,2541,0}, {289,-1,2541,0}, {289,-1,2541,0}};
                int l_752 = (-1L);
                int i;
                if ((safe_sub_func_uint8_t_u_u(func_33(g_322[1][1], (1UL >= p_26), ((safe_rshift_func_int16_t_s_s((p_26 | (p_25 , (~0x79EEECC3L))), 3)) , ((safe_mod_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s(p_25, (func_33((safe_lshift_func_int8_t_s_s((((func_55(l_633, l_630.f1, p_26, p_25) && l_630.f3) , l_633.f3) & 65528UL), 1)), g_451, g_242[6], l_677[3][7], p_26) & g_100.f3))), g_242[2])) >= p_25)), p_26, p_26), g_367)))
                {
                    struct S0 l_678[7] = {{203,-3,-2732,2}, {203,-3,-2732,2}, {127,-3,-1935,0}, {203,-3,-2732,2}, {203,-3,-2732,2}, {127,-3,-1935,0}, {203,-3,-2732,2}};
                    int i;
                    g_100 = l_678[1];
                    for (p_26 = 0; (p_26 <= 4); p_26 += 1)
                    {
                        int i, j;
                        l_634 = (l_677[p_26][(p_26 + 2)] , l_633);
                    }
                }
                else
                {
                    unsigned l_695 = 0UL;
                    if (func_33(((g_99 != g_100.f0) > ((safe_div_func_uint8_t_u_u(((safe_sub_func_uint16_t_u_u(l_677[1][6], func_33((safe_add_func_uint8_t_u_u((safe_sub_func_int32_t_s_s(func_55(g_100, g_322[1][1], (safe_add_func_uint32_t_u_u(((safe_div_func_int8_t_s_s((safe_sub_func_int32_t_s_s((((l_630.f2 == (g_100.f0 , func_33(p_26, p_26, l_693[4][1][2], g_322[2][0], p_25))) & g_242[6]) > l_694), 0L)), g_242[6])) && p_25), g_242[5])), l_634.f1), g_100.f0)), l_695)), g_322[1][1], l_696[0][4][0], g_451, l_697[5][3]))) || p_25), 0x08L)) && g_322[1][5])), p_26, g_11, p_26, l_698))
                    {
                        g_100.f2 = l_696[0][4][0];
                        g_100 = l_699;
                        g_100.f1 = 0xEB42FD08L;
                        return g_100;
                    }
                    else
                    {
                        g_100.f1 = (func_33(l_677[3][7], l_697[4][7], (0L >= (((((safe_add_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u((!(func_33((p_26 , (safe_sub_func_int16_t_s_s(p_25, (safe_add_func_int8_t_s_s(l_695, l_630.f0))))), g_100.f3, func_55(g_100, p_25, p_26, g_99), l_694, g_451) , p_25)), 3)), 10)), p_26)) , g_451) | g_11) || 0x8DL) || l_699.f2)), l_710, g_242[6]) > 0xA21BL);
                        if (p_25)
                            continue;
                        l_630 = l_711[2];
                    }
                    for (g_80 = 0; (g_80 <= 1); g_80 = safe_add_func_int16_t_s_s(g_80, 2))
                    {
                        short l_731 = 0L;
                        l_634 = g_100;
                        l_731 = ((safe_add_func_int8_t_s_s(p_26, (l_711[2].f0 > (safe_rshift_func_int8_t_s_s(g_718, 5))))) >= (((safe_lshift_func_uint8_t_u_s(l_634.f3, (0x5782700DL > (safe_rshift_func_int16_t_s_s(l_633.f3, 12))))) | ((((safe_add_func_int32_t_s_s((safe_rshift_func_int16_t_s_s(g_100.f2, (safe_mod_func_uint8_t_u_u(((safe_sub_func_int32_t_s_s((l_677[0][1] && l_630.f0), p_26)) && g_322[1][1]), g_100.f3)))), g_100.f1)) || (-2L)) , l_677[0][6]) ^ p_26)) >= p_26));
                        g_100.f1 = (safe_sub_func_uint32_t_u_u((((safe_mod_func_int16_t_s_s(l_710, 0x9BA9L)) < (((safe_div_func_int16_t_s_s(func_33((func_33(((safe_mod_func_int16_t_s_s((safe_add_func_uint16_t_u_u((((((safe_lshift_func_int16_t_s_s(p_26, (safe_add_func_int8_t_s_s(((4UL <= g_80) | 0x571CL), p_25)))) >= ((safe_add_func_int32_t_s_s(p_25, ((safe_lshift_func_int8_t_s_s((((safe_div_func_int8_t_s_s((((l_711[2].f0 >= 0UL) ^ l_752) != l_753), 0x18L)) , g_80) || l_630.f1), p_26)) | 0x0F84A1B8L))) || 3UL)) > 1UL) ^ g_242[5]) && l_630.f3), g_11)), g_100.f2)) , g_242[6]), g_11, l_633.f3, l_731, g_100.f0) >= (-8L)), g_367, g_322[1][1], g_100.f2, g_100.f0), g_451)) <= p_25) ^ 0x21L)) || g_367), 0x5DBC2CACL));
                    }
                    l_754 = (l_634.f2 , 1L);
                }
                for (g_367 = 0; (g_367 <= 6); g_367 += 1)
                {
                    short l_757 = 0xC79BL;
                    int i, j;
                    l_697[g_367][(g_367 + 1)] = ((g_718 <= p_26) , (((safe_mod_func_uint32_t_u_u((0xB041L < ((l_757 | (l_710 != ((l_630.f0 == ((g_100.f2 != (safe_div_func_int32_t_s_s(l_760, (((g_242[6] , g_100) , 0xA2L) & 0xD2L)))) && p_26)) || l_693[2][3][4]))) | p_26)), 1L)) <= g_322[1][2]) <= 1L));
                    return l_761;
                }
                l_761 = l_634;
                g_100 = l_630;
            }
        }
        else
        {
            int l_773 = 0xA73C9DF7L;
            unsigned l_813 = 0xF58A57D4L;
            int l_837 = 0L;
            l_630.f1 = p_26;
            if ((safe_mod_func_int8_t_s_s((safe_sub_func_int16_t_s_s((5UL < (1UL & (safe_sub_func_int8_t_s_s(p_26, func_33(p_26, g_100.f3, g_100.f0, (safe_mod_func_uint32_t_u_u(0x471A323FL, func_33((safe_sub_func_uint32_t_u_u(g_367, l_698)), g_100.f3, l_634.f1, p_25, l_772))), p_25))))), l_753)), l_773)))
            {
                unsigned l_794 = 0xA403F822L;
                int l_799 = 0L;
                if (l_773)
                {
                    l_630 = l_630;
                    l_799 = ((safe_lshift_func_int8_t_s_u(((!(safe_rshift_func_int16_t_s_u((((safe_sub_func_int32_t_s_s((safe_add_func_int16_t_s_s((safe_sub_func_int32_t_s_s((4294967287UL & (g_718 == (safe_mod_func_int32_t_s_s(((safe_mod_func_int8_t_s_s(((safe_add_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s((((safe_div_func_int8_t_s_s((l_794 < (p_25 , (safe_lshift_func_int16_t_s_s(((g_100 , g_367) & p_25), 5)))), (safe_add_func_int8_t_s_s(g_322[1][1], p_25)))) && p_26) && g_367), l_699.f2)), p_26)) >= 0x36A8L), l_699.f3)) == 9UL), g_322[1][2])))), 0xB53AC787L)), g_242[1])), 4294967293UL)) == g_242[6]) & l_794), p_25))) , l_693[4][1][2]), 3)) ^ 0x9475A8FCL);
                }
                else
                {
                    int l_811 = (-1L);
                    l_630.f1 = (((((safe_div_func_int32_t_s_s((safe_mod_func_uint32_t_u_u(((safe_sub_func_uint32_t_u_u((func_41(((l_754 , ((((p_25 | (((((253UL | (safe_sub_func_uint8_t_u_u(((safe_add_func_int32_t_s_s(p_25, (func_44(g_367, func_41((g_100.f0 , (((-2L) ^ g_322[1][1]) == p_25)), l_810), l_773, l_794) < g_242[2]))) == l_811), g_718))) ^ 3L) , g_322[2][0]) > 65531UL) | l_693[3][3][3])) <= l_811) != l_773) != l_773)) , 0UL), l_697[5][3]) ^ g_322[1][1]), g_322[2][0])) || g_812[0]), (-4L))), l_799)) | l_813) | 0xE95607C0L) >= g_322[2][5]) & (-6L));
                }
                for (g_80 = 0; (g_80 < 27); ++g_80)
                {
                    l_634 = l_630;
                    for (l_754 = 0; l_754 < 2; l_754 += 1)
                    {
                        g_812[l_754] = (-6L);
                    }
                    g_100.f2 = g_812[1];
                }
                l_837 = ((safe_add_func_int16_t_s_s((g_242[6] < (safe_div_func_uint32_t_u_u((safe_unary_minus_func_int16_t_s(p_25)), ((safe_add_func_int32_t_s_s(func_41(((g_100.f2 && (safe_add_func_int32_t_s_s(func_33(((safe_add_func_int32_t_s_s((g_322[1][2] >= p_25), func_41(p_25, (0L >= ((safe_add_func_int8_t_s_s(((safe_add_func_uint8_t_u_u((((((safe_add_func_int32_t_s_s((safe_rshift_func_int8_t_s_u((1L <= (safe_rshift_func_int8_t_s_s((p_25 ^ l_773), g_80))), 2)), l_813)) , l_630.f2) | 4294967295UL) & 0L) && 0x29937389L), 0xEAL)) | l_794), 0x56L)) >= 0xB8L))))) | 0L), g_718, g_812[0], p_26, p_25), p_26))) <= l_697[5][3]), g_100.f0), 4294967295UL)) ^ l_630.f2)))), p_26)) < 0x9CL);
            }
            else
            {
                struct S0 l_844 = {216,-3,-987,1};
                l_630 = (func_27(func_53(((l_837 > (65527UL > g_100.f0)) ^ (safe_add_func_uint8_t_u_u(g_367, (safe_mod_func_uint32_t_u_u(func_41(g_99, g_718), (safe_div_func_int16_t_s_s((((0xFEL & (-9L)) >= 0xA25FL) != g_812[0]), l_813))))))))) , l_844);
                return g_100;
            }
            l_754 = (safe_add_func_int8_t_s_s(((safe_lshift_func_uint16_t_u_s(p_26, 8)) >= ((safe_mod_func_uint16_t_u_u(p_25, func_55(g_100, g_812[0], l_693[4][1][2], (safe_div_func_int8_t_s_s(func_55(l_630, (((func_41(l_813, ((g_100 , ((safe_add_func_int16_t_s_s(5L, (-2L))) != 0x7BL)) , p_25)) == p_26) > 0UL) ^ g_11), g_322[1][1], p_26), g_367))))) == p_25)), g_812[1]));
            g_100.f1 = (((safe_mod_func_int16_t_s_s((((safe_sub_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s(0xC8L, 6)), (((safe_sub_func_int16_t_s_s((g_100.f1 >= l_699.f3), ((safe_lshift_func_uint8_t_u_s((safe_add_func_int32_t_s_s((~g_242[6]), (safe_add_func_int8_t_s_s((l_837 | ((safe_add_func_int8_t_s_s((safe_rshift_func_int8_t_s_u((safe_mod_func_uint32_t_u_u(((safe_add_func_int16_t_s_s(0L, (func_41(func_55(l_630, (((l_693[4][1][2] | g_718) , g_100) , 0x81BBD953L), g_812[0], l_753), l_699.f3) != 0xD348L))) & p_26), l_696[0][4][0])), l_837)), (-9L))) != g_718)), g_11)))), g_100.f0)) | (-7L)))) >= p_25) | g_242[3]))), 2L)) > g_100.f1) ^ 4294967295UL), g_100.f1)) == 5L) < 65529UL);
        }
        for (p_25 = 0; (p_25 <= 1); p_25 += 1)
        {
            char l_881 = 0xE8L;
            int l_889 = 0x2DE0076AL;
            g_100.f1 = 0x8D3D3955L;
            g_100.f1 = l_881;
            l_634 = g_100;
            for (l_881 = 3; (l_881 >= 0); l_881 -= 1)
            {
                short l_899 = 0xD174L;
                g_100.f1 = func_55(g_100, (g_322[1][3] != (safe_rshift_func_int8_t_s_s(((0x4C6CL || (safe_div_func_int8_t_s_s((safe_add_func_uint32_t_u_u(((l_881 && 0L) || g_367), func_33((p_25 & p_26), (((((func_55(g_100, p_25, g_242[6], l_697[3][6]) , g_100.f2) && g_11) | (-1L)) , 0UL) >= l_693[1][3][4]), g_322[3][3], l_630.f3, g_367))), p_25))) || 253UL), l_754))), g_100.f3, g_100.f1);
                for (l_754 = 0; (l_754 <= 3); l_754 += 1)
                {
                    int l_898 = 0xC35AF924L;
                    struct S0 l_911 = {165,-1,-745,6};
                    if ((p_26 , l_634.f2))
                    {
                        unsigned l_888 = 0xD45E4246L;
                        int l_900[9] = {1L, (-1L), 1L, (-1L), 1L, (-1L), 1L, (-1L), 1L};
                        int i;
                        l_889 = (func_41(l_888, g_11) < p_25);
                        l_900[4] = (((func_53((((((((((safe_add_func_uint8_t_u_u((p_25 < (safe_rshift_func_uint16_t_u_u(((p_26 , (safe_div_func_uint32_t_u_u(((-1L) == ((l_696[0][4][0] | ((p_26 > g_451) && (safe_lshift_func_uint16_t_u_u((p_25 , 0UL), g_367)))) , g_11)), p_25))) <= 0UL), p_26))), p_25)) >= 1L) , p_25) , l_898) , l_899) <= g_100.f1) > 0xCD71L) , p_26) , g_242[6])) , 0x49L) > p_26) <= g_11);
                        if (p_25)
                            continue;
                    }
                    else
                    {
                        struct S0 l_915 = {31,-3,377,2};
                        g_914 = (l_889 >= (g_80 , ((((g_100 , (safe_sub_func_int16_t_s_s(((safe_add_func_int16_t_s_s(l_634.f0, (safe_lshift_func_uint16_t_u_s((safe_add_func_uint32_t_u_u((safe_div_func_int32_t_s_s((l_899 & func_55(l_911, p_26, ((248UL != (safe_rshift_func_uint16_t_u_s(g_451, g_11))) != g_242[6]), p_25)), g_451)), g_451)), 3)))) & 0xABD6L), 65535UL))) , g_718) == g_812[1]) | g_451)));
                        return l_915;
                    }
                    for (l_899 = 0; (l_899 <= 3); l_899 += 1)
                    {
                        g_100 = l_630;
                    }
                    g_100.f2 = l_916;
                    g_100.f1 = (p_26 & (-8L));
                }
            }
        }
        l_697[0][4] = ((safe_unary_minus_func_int16_t_s(0x7C82L)) <= ((safe_mod_func_uint8_t_u_u(4UL, func_41((safe_lshift_func_int16_t_s_s(0xAEC6L, 10)), p_25))) , func_33(((p_25 && ((safe_lshift_func_uint8_t_u_u(p_25, 6)) || (safe_add_func_int32_t_s_s((safe_add_func_int16_t_s_s((!(safe_div_func_int16_t_s_s(((safe_add_func_int32_t_s_s((p_25 , (p_25 & p_26)), l_699.f1)) != 0xA7684E68L), p_25))), l_634.f3)), 0xE635CFACL)))) , 0xF8142CD0L), l_696[0][4][0], p_26, l_754, l_916)));
    }
    else
    {
        unsigned l_933[1][1];
        int l_951 = 0x127E9A29L;
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 1; j++)
                l_933[i][j] = 0xEBDC0C06L;
        }
        l_933[0][0] = l_932;
        g_100 = l_630;
        for (g_80 = 0; (g_80 >= 8); g_80 = safe_add_func_int16_t_s_s(g_80, 1))
        {
            int l_950 = (-9L);
            struct S0 l_954[8] = {{337,-2,-1145,3}, {337,-2,-1145,3}, {337,-2,-1145,3}, {337,-2,-1145,3}, {337,-2,-1145,3}, {337,-2,-1145,3}, {337,-2,-1145,3}, {337,-2,-1145,3}};
            int i;
            g_100.f2 = (safe_div_func_int32_t_s_s(((!(((g_322[1][1] != p_25) && ((safe_div_func_int16_t_s_s((((safe_add_func_int16_t_s_s(l_772, ((safe_rshift_func_uint8_t_u_s(255UL, 0)) >= func_33((g_914 , (l_933[0][0] || ((safe_lshift_func_uint16_t_u_u(func_33((l_630 , ((func_33(p_25, ((safe_lshift_func_uint16_t_u_s(((65535UL >= g_11) || l_630.f2), l_950)) != p_25), l_933[0][0], p_26, l_933[0][0]) ^ l_772) , 0xEAC1FE5BL)), g_914, l_950, g_322[1][1], l_916), 5)) != l_754))), g_242[6], g_914, p_25, l_630.f3)))) & 0xB311L) | 0xA9L), 1UL)) & 6L)) , l_916)) && l_693[5][3][5]), g_451));
            l_951 = (g_812[0] == (-1L));
            for (l_950 = 0; (l_950 >= (-28)); l_950 = safe_sub_func_uint8_t_u_u(l_950, 1))
            {
                l_954[5] = l_630;
            }
        }
    }
    return l_630;
}







static unsigned func_27(int p_28)
{
    char l_32 = 0x27L;
    struct S0 l_488[2] = {{143,1,-392,3}, {143,1,-392,3}};
    unsigned short l_602 = 0xE97AL;
    int i;
    for (p_28 = 0; (p_28 >= 2); p_28 = safe_add_func_int16_t_s_s(p_28, 8))
    {
        unsigned short l_499[10][4] = {{0x826DL, 0x78E9L, 0x826DL, 0x78E9L}, {0x826DL, 0x78E9L, 0x826DL, 0x78E9L}, {0x826DL, 0x78E9L, 0x826DL, 0x78E9L}, {0x826DL, 0x78E9L, 0x826DL, 0x78E9L}, {0x826DL, 0x78E9L, 0x826DL, 0x78E9L}, {0x826DL, 0x78E9L, 0x826DL, 0x78E9L}, {0x826DL, 0x78E9L, 0x826DL, 0x78E9L}, {0x826DL, 0x78E9L, 0x826DL, 0x78E9L}, {0x826DL, 0x78E9L, 0x826DL, 0x78E9L}, {0x826DL, 0x78E9L, 0x826DL, 0x78E9L}};
        int l_528 = 4L;
        int i, j;
        l_32 = p_28;
        if (p_28)
            continue;
        if (func_33(((g_11 > (((((safe_mod_func_int16_t_s_s(func_41((p_28 , (l_32 | func_44(p_28, p_28, l_32, g_11))), ((((((l_488[1] , l_488[1].f3) || (-1L)) , p_28) | 0x7D0FL) == p_28) , p_28)), p_28)) , l_488[1].f1) ^ 0UL) ^ g_242[0]) > l_499[6][1])) | l_499[6][1]), l_499[6][1], p_28, g_11, p_28))
        {
            unsigned short l_505 = 65535UL;
            int l_506[3];
            char l_539[3][9] = {{(-6L), (-6L), 0xC4L, 0x63L, 0xB0L, 0x63L, 0xC4L, (-6L), (-6L)}, {(-6L), (-6L), 0xC4L, 0x63L, 0xB0L, 0x63L, 0xC4L, (-6L), (-6L)}, {(-6L), (-6L), 0xC4L, 0x63L, 0xB0L, 0x63L, 0xC4L, (-6L), (-6L)}};
            unsigned l_557 = 0UL;
            int i, j;
            for (i = 0; i < 3; i++)
                l_506[i] = 4L;
            l_505 = (p_28 != (func_44((0xB602AF45L > p_28), ((((((safe_mod_func_int32_t_s_s(((p_28 != (l_499[6][1] && ((p_28 , (((safe_mod_func_int32_t_s_s(func_55(l_488[1], g_242[6], l_488[1].f2, g_100.f1), g_99)) && p_28) < 4UL)) & g_99))) != l_488[1].f0), p_28)) != l_499[0][3]) , 0x0A15L) && 0L) , 0x517AL) <= l_488[1].f0), p_28, p_28) , (-1L)));
            if (l_506[0])
            {
                short l_527 = 0xAE63L;
                unsigned l_529[8] = {0xC6B91B02L, 0xC6B91B02L, 4294967292UL, 0xC6B91B02L, 0xC6B91B02L, 4294967292UL, 0xC6B91B02L, 0xC6B91B02L};
                int i;
                for (l_505 = 0; (l_505 <= 35); ++l_505)
                {
                    short l_523[3][4][7] = {{{(-7L), (-1L), 0x5349L, (-1L), (-7L), (-1L), 0xF282L}, {(-7L), (-1L), 0x5349L, (-1L), (-7L), (-1L), 0xF282L}, {(-7L), (-1L), 0x5349L, (-1L), (-7L), (-1L), 0xF282L}, {(-7L), (-1L), 0x5349L, (-1L), (-7L), (-1L), 0xF282L}}, {{(-7L), (-1L), 0x5349L, (-1L), (-7L), (-1L), 0xF282L}, {(-7L), (-1L), 0x5349L, (-1L), (-7L), (-1L), 0xF282L}, {(-7L), (-1L), 0x5349L, (-1L), (-7L), (-1L), 0xF282L}, {(-7L), (-1L), 0x5349L, (-1L), (-7L), (-1L), 0xF282L}}, {{(-7L), (-1L), 0x5349L, (-1L), (-7L), (-1L), 0xF282L}, {(-7L), (-1L), 0x5349L, (-1L), (-7L), (-1L), 0xF282L}, {(-7L), (-1L), 0x5349L, (-1L), (-7L), (-1L), 0xF282L}, {(-7L), (-1L), 0x5349L, (-1L), (-7L), (-1L), 0xF282L}}};
                    unsigned l_526 = 4294967287UL;
                    struct S0 l_532[6] = {{183,1,-1744,3}, {183,1,-1744,3}, {163,-1,-1890,3}, {183,1,-1744,3}, {183,1,-1744,3}, {163,-1,-1890,3}};
                    int i, j, k;
                    if ((safe_lshift_func_int16_t_s_u((p_28 || p_28), (safe_mod_func_int32_t_s_s(0L, (safe_div_func_int32_t_s_s((((safe_add_func_int16_t_s_s((0xF8F62C7FL == (safe_rshift_func_int8_t_s_u((safe_sub_func_int8_t_s_s(((l_523[2][0][6] || p_28) < (g_367 < (((((safe_add_func_uint32_t_u_u(g_100.f3, (g_100.f0 <= l_488[1].f1))) ^ g_100.f2) == p_28) | l_505) , p_28))), 0xFEL)), l_526))), 7L)) , g_322[0][4]) < 0xD534FA00L), l_527)))))))
                    {
                        l_528 = g_99;
                        return g_80;
                    }
                    else
                    {
                        g_100 = g_100;
                        if (g_100.f2)
                            continue;
                    }
                    l_532[0] = ((l_529[7] & 4294967286UL) , ((((safe_lshift_func_int16_t_s_s(l_505, (0x42B6L && (4294967295UL && ((l_532[0] , (func_55(l_532[0], g_322[2][1], g_80, l_506[1]) >= l_499[2][1])) | g_367))))) ^ (-7L)) , 0xCF350D01L) , g_100));
                }
                if ((func_44(l_506[0], p_28, ((3UL != (g_11 <= ((safe_sub_func_uint16_t_u_u((safe_mod_func_int32_t_s_s((!0L), p_28)), (safe_add_func_int32_t_s_s(l_506[0], p_28)))) , p_28))) <= g_367), l_539[1][7]) , g_451))
                {
                    unsigned short l_556 = 0UL;
                    struct S0 l_558 = {215,2,1377,5};
                    g_100.f2 = (((func_41((p_28 | ((safe_add_func_uint16_t_u_u(p_28, g_100.f0)) >= (+(safe_rshift_func_uint16_t_u_s((safe_div_func_uint8_t_u_u((((g_322[1][1] > (((safe_lshift_func_uint8_t_u_u((g_99 > (1L != (safe_div_func_int32_t_s_s((0x66391F0CL || func_33((safe_mod_func_int32_t_s_s((p_28 >= (safe_div_func_uint8_t_u_u((g_451 | l_556), g_451))), g_100.f0)), g_11, g_242[6], l_488[1].f1, l_499[2][3])), 1UL)))), 4)) , 4294967295UL) , 3UL)) != l_506[0]) > p_28), 0x78L)), 1))))), g_367) != 0L) | l_557) & 249UL);
                    l_488[1] = l_558;
                    l_528 = l_539[1][7];
                }
                else
                {
                    return l_488[1].f2;
                }
                l_488[1].f1 = func_44((0x703BL || l_499[6][1]), (((safe_div_func_int8_t_s_s((safe_add_func_int16_t_s_s(func_53((safe_lshift_func_uint8_t_u_s((l_488[1] , ((safe_rshift_func_int8_t_s_s((func_41(func_41((((safe_sub_func_int8_t_s_s(2L, g_100.f1)) || (safe_add_func_int16_t_s_s(((g_11 & l_499[6][1]) | (((9UL && (l_527 >= l_529[7])) & 65527UL) == 0xD0EA1D86L)), 0x813CL))) , l_529[4]), l_499[7][2]), g_100.f2) != (-1L)), p_28)) <= l_527)), 1))), 0UL)), 0x65L)) & g_242[6]) ^ 0x92F7L), g_322[3][4], p_28);
            }
            else
            {
                for (l_505 = 14; (l_505 != 37); l_505 = safe_add_func_int32_t_s_s(l_505, 8))
                {
                    unsigned short l_585[6];
                    int i;
                    for (i = 0; i < 6; i++)
                        l_585[i] = 3UL;
                    g_100.f1 = ((safe_sub_func_int32_t_s_s((((safe_sub_func_int32_t_s_s(g_367, (safe_mul_func_int8_t_s_s(0xF4L, (safe_lshift_func_uint16_t_u_u(0UL, 15)))))) != (((g_11 , g_100.f3) ^ (safe_div_func_uint32_t_u_u(((0x021FL || (safe_sub_func_int16_t_s_s(3L, g_100.f1))) ^ (0x54L != l_506[0])), g_451))) , p_28)) == 0xBEECL), l_585[0])) | p_28);
                }
                if (l_506[1])
                    continue;
            }
            for (l_32 = 3; (l_32 >= 0); l_32 -= 1)
            {
                int i, j;
                l_506[1] = ((!l_499[(l_32 + 6)][l_32]) >= func_44((l_488[1].f2 , (((255UL < 7UL) | func_53(l_499[(l_32 + 6)][l_32])) | g_242[6])), (~0x6652B564L), l_506[0], g_322[1][1]));
            }
        }
        else
        {
            struct S0 l_588 = {348,0,75,0};
            struct S0 l_593 = {333,-0,599,6};
            int l_611 = (-1L);
            l_593 = ((1L == (0x3578L & (safe_add_func_int8_t_s_s(((!(func_55(l_588, (p_28 || ((0x2AL <= (-1L)) < (safe_sub_func_uint16_t_u_u(((l_488[1].f3 && p_28) != p_28), g_322[1][1])))), p_28, p_28) || g_11)) | g_100.f3), 0x3AL)))) , l_588);
            if (func_44((((safe_sub_func_int32_t_s_s(p_28, (safe_sub_func_uint32_t_u_u((p_28 == g_11), l_593.f2)))) , (p_28 >= (p_28 > ((g_11 <= ((((safe_add_func_uint32_t_u_u(p_28, (p_28 , p_28))) ^ 4L) , g_242[6]) | p_28)) >= g_367)))) || p_28), g_242[6], p_28, g_100.f0))
            {
                unsigned l_618 = 0xD68D3AD8L;
                l_528 = ((safe_div_func_uint8_t_u_u((l_602 ^ ((0xC200C1C2L | p_28) && (safe_add_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_s((g_322[2][1] <= (safe_mod_func_int8_t_s_s(((((safe_add_func_uint32_t_u_u(l_611, p_28)) && p_28) && (safe_lshift_func_uint8_t_u_s(l_488[1].f3, (safe_mod_func_int8_t_s_s((safe_add_func_uint32_t_u_u(g_451, g_80)), 0x1FL))))) < g_100.f3), p_28))), 1)), 0L)))), g_100.f2)) | l_618);
                for (g_99 = (-9); (g_99 <= 15); g_99 = safe_add_func_uint8_t_u_u(g_99, 2))
                {
                    l_588.f1 = p_28;
                }
                l_528 = (-1L);
            }
            else
            {
                struct S0 l_621 = {296,1,-1137,0};
                g_100 = g_100;
                l_621 = g_100;
                if (l_588.f2)
                    continue;
                return g_451;
            }
            l_528 = (0L == g_100.f2);
        }
    }
    return g_11;
}







static int func_33(int p_34, int p_35, int p_36, char p_37, int p_38)
{
    unsigned short l_500 = 0UL;
    return l_500;
}







static short func_41(unsigned p_42, int p_43)
{
    unsigned short l_489 = 0x2925L;
    char l_494 = 0L;
    char l_498[4] = {0xEAL, (-9L), 0xEAL, (-9L)};
    int i;
    p_43 = ((0xA2L ^ l_489) == l_489);
    for (g_99 = 18; (g_99 > 23); g_99++)
    {
        struct S0 l_497 = {156,-3,-529,3};
        l_497.f2 = ((((p_43 & g_100.f2) , ((((65535UL | ((safe_div_func_int8_t_s_s((func_55(g_100, ((((l_494 != (safe_lshift_func_int16_t_s_s(func_55(l_497, g_80, p_43, l_497.f1), p_42))) , p_42) <= l_497.f1) , 1L), g_100.f1, p_43) >= 255UL), p_42)) , g_80)) , p_42) , l_489) , l_497.f1)) , g_367) > l_489);
    }
    return l_498[3];
}







static unsigned char func_44(unsigned p_45, unsigned p_46, unsigned short p_47, unsigned char p_48)
{
    struct S0 l_60 = {290,-0,949,6};
    int l_454 = 1L;
    if (((safe_rshift_func_int16_t_s_s(0x0F4FL, 1)) || g_11))
    {
        for (p_45 = (-12); (p_45 <= 60); p_45++)
        {
            return g_11;
        }
    }
    else
    {
        unsigned short l_67 = 1UL;
        unsigned l_74 = 4294967295UL;
        int l_450 = 0xD19205ADL;
        struct S0 l_471 = {63,-0,1707,5};
        if ((0xAA7FL == func_53(func_55(l_60, (safe_lshift_func_int16_t_s_u(g_11, 3)), l_60.f3, (((safe_lshift_func_uint8_t_u_u(((((safe_lshift_func_int8_t_s_s(((l_67 != (0xCE9EL == (safe_div_func_int16_t_s_s((255UL && (safe_sub_func_uint16_t_u_u((~(safe_rshift_func_int8_t_s_s(((g_11 >= (((((g_11 , l_74) < 1L) , l_74) , p_45) | l_67)) == 65527UL), 2))), p_48))), g_11)))) | l_60.f0), 4)) >= 0x588CL) != p_47) | l_74), p_47)) && 247UL) < l_74)))))
        {
            l_450 = (safe_add_func_int8_t_s_s(((p_47 , g_100) , (((+g_100.f1) > 1L) || l_60.f0)), p_45));
            l_450 = (g_80 , g_242[6]);
        }
        else
        {
            unsigned l_455 = 0xBDCF934AL;
            struct S0 l_460 = {344,-1,329,2};
            for (l_67 = 0; (l_67 <= 3); l_67 += 1)
            {
                struct S0 l_457 = {332,-0,350,1};
                g_451 = 0x9E081993L;
                if ((((safe_mod_func_uint8_t_u_u((l_454 >= l_455), ((safe_unary_minus_func_int32_t_s((func_55((((p_45 < (p_47 > g_242[6])) || l_450) , l_457), (0x71C6L && l_454), p_47, p_45) , (-6L)))) ^ g_451))) && g_100.f0) || l_60.f0))
                {
                    if ((safe_rshift_func_uint8_t_u_u(func_53(((l_457 , (-3L)) | p_47)), 3)))
                    {
                        l_450 = p_47;
                        l_60.f1 = g_322[0][0];
                    }
                    else
                    {
                        if (g_322[1][1])
                            break;
                        if (g_322[0][0])
                            break;
                    }
                }
                else
                {
                    for (p_45 = 0; (p_45 <= 6); p_45 += 1)
                    {
                        int i, j;
                        l_460 = (g_322[l_67][(l_67 + 1)] , l_457);
                    }
                }
                for (l_454 = 0; (l_454 <= 3); l_454 += 1)
                {
                    int i, j;
                    if (g_322[l_454][(l_67 + 2)])
                        break;
                    g_100.f1 = (safe_sub_func_int16_t_s_s(l_460.f1, (l_450 || (safe_add_func_uint32_t_u_u(l_450, ((safe_rshift_func_uint8_t_u_s(((l_457.f1 >= g_322[2][4]) , (!p_45)), (safe_div_func_uint16_t_u_u(l_460.f2, 65535UL)))) && (g_100.f1 < 0x4715L)))))));
                }
            }
            l_60 = l_471;
            l_60.f2 = ((((safe_sub_func_uint32_t_u_u(p_48, (((+((safe_div_func_int32_t_s_s((safe_sub_func_int32_t_s_s(g_322[3][4], (((g_322[1][2] > (!(g_11 & (func_53((safe_div_func_uint32_t_u_u((safe_lshift_func_int8_t_s_u(l_67, 4)), p_46))) , (safe_div_func_uint32_t_u_u((safe_div_func_int8_t_s_s(func_55(l_471, (((safe_mod_func_uint16_t_u_u(p_48, g_100.f3)) , p_46) >= g_242[4]), p_47, p_46), (-6L))), 4L)))))) < 2L) <= g_322[2][1]))), 1L)) | l_60.f0)) == g_322[0][4]) && p_45))) != g_322[1][1]) && g_11) || 255UL);
        }
    }
    return g_322[3][0];
}







static short func_53(unsigned short p_54)
{
    struct S0 l_93 = {202,1,-100,7};
    char l_113 = 0L;
    int l_338 = (-5L);
    struct S0 l_350[6][10][2] = {{{{172,-0,2536,4}, {188,-3,-2549,2}}, {{172,-0,2536,4}, {188,-3,-2549,2}}, {{172,-0,2536,4}, {188,-3,-2549,2}}, {{172,-0,2536,4}, {188,-3,-2549,2}}, {{172,-0,2536,4}, {188,-3,-2549,2}}, {{172,-0,2536,4}, {188,-3,-2549,2}}, {{172,-0,2536,4}, {188,-3,-2549,2}}, {{172,-0,2536,4}, {188,-3,-2549,2}}, {{172,-0,2536,4}, {188,-3,-2549,2}}, {{172,-0,2536,4}, {188,-3,-2549,2}}}, {{{172,-0,2536,4}, {188,-3,-2549,2}}, {{172,-0,2536,4}, {188,-3,-2549,2}}, {{172,-0,2536,4}, {188,-3,-2549,2}}, {{172,-0,2536,4}, {188,-3,-2549,2}}, {{172,-0,2536,4}, {188,-3,-2549,2}}, {{172,-0,2536,4}, {188,-3,-2549,2}}, {{172,-0,2536,4}, {188,-3,-2549,2}}, {{172,-0,2536,4}, {188,-3,-2549,2}}, {{172,-0,2536,4}, {188,-3,-2549,2}}, {{172,-0,2536,4}, {188,-3,-2549,2}}}, {{{172,-0,2536,4}, {188,-3,-2549,2}}, {{172,-0,2536,4}, {188,-3,-2549,2}}, {{172,-0,2536,4}, {188,-3,-2549,2}}, {{172,-0,2536,4}, {188,-3,-2549,2}}, {{172,-0,2536,4}, {188,-3,-2549,2}}, {{172,-0,2536,4}, {188,-3,-2549,2}}, {{172,-0,2536,4}, {188,-3,-2549,2}}, {{172,-0,2536,4}, {188,-3,-2549,2}}, {{172,-0,2536,4}, {188,-3,-2549,2}}, {{172,-0,2536,4}, {188,-3,-2549,2}}}, {{{172,-0,2536,4}, {188,-3,-2549,2}}, {{172,-0,2536,4}, {188,-3,-2549,2}}, {{172,-0,2536,4}, {188,-3,-2549,2}}, {{172,-0,2536,4}, {188,-3,-2549,2}}, {{172,-0,2536,4}, {188,-3,-2549,2}}, {{172,-0,2536,4}, {188,-3,-2549,2}}, {{172,-0,2536,4}, {188,-3,-2549,2}}, {{172,-0,2536,4}, {188,-3,-2549,2}}, {{172,-0,2536,4}, {188,-3,-2549,2}}, {{172,-0,2536,4}, {188,-3,-2549,2}}}, {{{172,-0,2536,4}, {188,-3,-2549,2}}, {{172,-0,2536,4}, {188,-3,-2549,2}}, {{172,-0,2536,4}, {188,-3,-2549,2}}, {{172,-0,2536,4}, {188,-3,-2549,2}}, {{172,-0,2536,4}, {188,-3,-2549,2}}, {{172,-0,2536,4}, {188,-3,-2549,2}}, {{172,-0,2536,4}, {188,-3,-2549,2}}, {{172,-0,2536,4}, {188,-3,-2549,2}}, {{172,-0,2536,4}, {188,-3,-2549,2}}, {{172,-0,2536,4}, {188,-3,-2549,2}}}, {{{172,-0,2536,4}, {188,-3,-2549,2}}, {{172,-0,2536,4}, {188,-3,-2549,2}}, {{172,-0,2536,4}, {188,-3,-2549,2}}, {{172,-0,2536,4}, {188,-3,-2549,2}}, {{172,-0,2536,4}, {188,-3,-2549,2}}, {{172,-0,2536,4}, {188,-3,-2549,2}}, {{172,-0,2536,4}, {188,-3,-2549,2}}, {{172,-0,2536,4}, {188,-3,-2549,2}}, {{172,-0,2536,4}, {188,-3,-2549,2}}, {{172,-0,2536,4}, {188,-3,-2549,2}}}};
    int i, j, k;
    if (g_80)
    {
        unsigned char l_98 = 1UL;
        struct S0 l_101 = {145,2,-1424,6};
        int l_150[6] = {0xF9B34B0AL, 0xF9B34B0AL, 0L, 0xF9B34B0AL, 0xF9B34B0AL, 0L};
        int i;
        if (g_11)
        {
            struct S0 l_96[6] = {{243,0,-1391,1}, {243,0,-1391,1}, {243,0,-1391,1}, {243,0,-1391,1}, {243,0,-1391,1}, {243,0,-1391,1}};
            short l_97[1];
            int i;
            for (i = 0; i < 1; i++)
                l_97[i] = 6L;
            g_99 = (((safe_mod_func_uint8_t_u_u(func_55(l_93, (p_54 , (((g_80 || (safe_mod_func_uint32_t_u_u((((((p_54 , 9L) , func_55(l_96[2], g_11, p_54, func_55(l_93, g_80, g_11, p_54))) || l_97[0]) , g_11) >= p_54), (-1L)))) <= g_11) , l_98)), g_11, p_54), l_98)) <= 255UL) , p_54);
        }
        else
        {
            struct S0 l_105 = {10,3,1246,2};
            l_101 = g_100;
            g_100.f2 = (((safe_lshift_func_int16_t_s_u((g_100 , (g_100.f2 == 1UL)), 10)) != l_101.f1) != (safe_unary_minus_func_int16_t_s((g_100 , func_55(l_101, func_55(l_105, g_100.f1, ((safe_mod_func_uint16_t_u_u(0UL, 0x3AF2L)) || 0xFDL), g_100.f0), p_54, p_54)))));
            l_101 = l_105;
        }
        l_93.f1 = (((l_93 , 0UL) , p_54) | (((((safe_unary_minus_func_uint16_t_u((p_54 & ((safe_lshift_func_int16_t_s_u((-7L), 6)) == ((safe_lshift_func_int8_t_s_s(l_101.f2, 1)) && (l_93.f0 > (p_54 >= g_100.f0))))))) , l_113) ^ g_99) > g_80) , p_54));
        l_101 = l_93;
        if ((g_100.f1 , (0UL || p_54)))
        {
            int l_114 = (-1L);
            unsigned l_119 = 4294967293UL;
            g_100.f1 = ((248UL & 0xE7L) , (l_114 <= func_55(l_93, g_100.f3, (l_93.f1 < ((safe_rshift_func_uint16_t_u_s(0xB06CL, 5)) <= p_54)), ((safe_sub_func_uint32_t_u_u((4294967295UL != l_119), g_11)) <= p_54))));
            return p_54;
        }
        else
        {
            struct S0 l_124 = {115,-0,1136,2};
            for (l_98 = 0; (l_98 < 16); l_98 = safe_add_func_uint32_t_u_u(l_98, 9))
            {
                unsigned short l_133 = 0xF0E3L;
                g_100 = l_93;
                if (((func_55(g_100, (g_80 && p_54), g_80, l_93.f2) < (g_100.f1 | g_100.f3)) | ((p_54 < p_54) < p_54)))
                {
                    int l_125[6] = {(-1L), (-1L), 0L, (-1L), (-1L), 0L};
                    unsigned char l_139 = 5UL;
                    int i;
                    if ((safe_rshift_func_int16_t_s_u(3L, func_55(l_124, g_100.f1, func_55(g_100, g_80, l_93.f0, g_100.f0), ((((0xF8CEL > 0x63EDL) ^ l_93.f0) , l_93.f2) | 0x8CL)))))
                    {
                        l_93 = l_93;
                    }
                    else
                    {
                        struct S0 l_132 = {47,1,758,1};
                        unsigned char l_134[2];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_134[i] = 0xC6L;
                        l_125[3] = g_11;
                        l_134[1] = (~(p_54 , (g_99 , ((((func_55(g_100, (safe_rshift_func_int16_t_s_s((safe_div_func_int32_t_s_s(p_54, l_125[1])), 5)), (safe_rshift_func_uint16_t_u_u(((g_100.f3 < func_55(l_132, (p_54 < p_54), p_54, g_100.f1)) > l_132.f1), g_11)), l_132.f1) , l_133) && p_54) || 1L) > l_132.f1))));
                        l_150[5] = (safe_sub_func_uint16_t_u_u(((safe_rshift_func_uint8_t_u_u(l_139, 0)) > (safe_div_func_uint16_t_u_u((g_100.f1 ^ ((safe_mod_func_uint16_t_u_u(((!(g_100.f3 || (safe_div_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u(g_100.f2, ((((safe_rshift_func_int16_t_s_s(((+p_54) , (65533UL > (1UL != ((((p_54 , p_54) > (-10L)) < g_99) <= 0xC57F21A0L)))), g_80)) == 0xA5489851L) | l_133) & 0x6AL))), 0x28L)))) >= p_54), (-1L))) || g_100.f2)), l_124.f0))), p_54));
                    }
                }
                else
                {
                    for (g_99 = 0; (g_99 > 18); g_99 = safe_add_func_uint8_t_u_u(g_99, 5))
                    {
                        g_100 = l_124;
                    }
                    if (g_100.f2)
                        break;
                }
            }
        }
    }
    else
    {
        char l_153 = 0x66L;
        unsigned l_164 = 0xA3BB4AA2L;
        unsigned short l_165 = 7UL;
        int l_166[1];
        unsigned l_182[2][1][9] = {{{1UL, 0UL, 0x452D96C6L, 0x452D96C6L, 0UL, 1UL, 0UL, 0x452D96C6L, 0x452D96C6L}}, {{1UL, 0UL, 0x452D96C6L, 0x452D96C6L, 0UL, 1UL, 0UL, 0x452D96C6L, 0x452D96C6L}}};
        struct S0 l_210 = {280,1,-740,5};
        char l_235 = 0x75L;
        int l_244 = 0xB5C31CDAL;
        unsigned char l_306 = 0xBAL;
        unsigned short l_349 = 0x74C8L;
        unsigned l_381 = 4294967295UL;
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_166[i] = 0xB7190DC9L;
        l_153 = 0xEB741D22L;
        if ((((p_54 == ((g_100 , l_93.f1) | ((safe_div_func_int8_t_s_s(p_54, (safe_sub_func_int32_t_s_s(((((~(func_55(l_93, (safe_div_func_uint32_t_u_u((((safe_rshift_func_int8_t_s_s((safe_div_func_int16_t_s_s(g_99, (((g_11 , l_93.f2) && l_153) , 0x3155L))), l_164)) & g_80) < l_165), 1L)), p_54, p_54) , l_166[0])) & 1UL) ^ p_54) > g_100.f2), 0xDD45D5CCL)))) || g_100.f0))) , l_113) >= g_100.f1))
        {
            unsigned l_179 = 0x8DD45185L;
            int l_196 = 0x7E062F4CL;
            struct S0 l_204 = {41,-1,1080,6};
            int l_228[6][1][8] = {{{0L, 0L, (-2L), 0L, 1L, 0x457C9E64L, 0xB5EA1FB0L, 0L}}, {{0L, 0L, (-2L), 0L, 1L, 0x457C9E64L, 0xB5EA1FB0L, 0L}}, {{0L, 0L, (-2L), 0L, 1L, 0x457C9E64L, 0xB5EA1FB0L, 0L}}, {{0L, 0L, (-2L), 0L, 1L, 0x457C9E64L, 0xB5EA1FB0L, 0L}}, {{0L, 0L, (-2L), 0L, 1L, 0x457C9E64L, 0xB5EA1FB0L, 0L}}, {{0L, 0L, (-2L), 0L, 1L, 0x457C9E64L, 0xB5EA1FB0L, 0L}}};
            int l_280 = 0L;
            int i, j, k;
            if ((((p_54 , l_164) , ((safe_lshift_func_int8_t_s_u((g_100.f1 & (safe_add_func_int8_t_s_s((g_100.f3 <= ((safe_mod_func_int32_t_s_s((safe_div_func_uint16_t_u_u((safe_add_func_int32_t_s_s(l_179, (g_100.f0 ^ (g_100.f3 & (safe_div_func_uint16_t_u_u((l_93.f0 , 0x4ADDL), l_182[0][0][6])))))), g_100.f2)), p_54)) != 4294967287UL)), g_80))), 4)) != g_100.f1)) ^ 0xA08B820AL))
            {
                unsigned l_183[2][2][6] = {{{9UL, 9UL, 0xBD7DA9C4L, 4294967288UL, 4UL, 4294967288UL}, {9UL, 9UL, 0xBD7DA9C4L, 4294967288UL, 4UL, 4294967288UL}}, {{9UL, 9UL, 0xBD7DA9C4L, 4294967288UL, 4UL, 4294967288UL}, {9UL, 9UL, 0xBD7DA9C4L, 4294967288UL, 4UL, 4294967288UL}}};
                int i, j, k;
                g_100.f2 = l_183[1][0][3];
                l_196 = (safe_add_func_uint32_t_u_u(g_99, ((safe_lshift_func_int8_t_s_s((safe_mod_func_int16_t_s_s((((p_54 , 4294967290UL) , ((safe_div_func_int32_t_s_s((l_179 , (p_54 , (func_55(g_100, ((safe_sub_func_uint32_t_u_u((safe_mod_func_int8_t_s_s(p_54, func_55(l_93, g_100.f2, g_99, l_166[0]))), g_100.f0)) , g_100.f0), l_183[0][1][1], g_11) | 0xC894L))), l_183[1][1][5])) , 0xBFDB4B20L)) , p_54), p_54)), 5)) , 1UL)));
            }
            else
            {
                struct S0 l_203[1][10] = {{{202,3,389,1}, {356,-0,-1689,6}, {202,3,389,1}, {356,-0,-1689,6}, {202,3,389,1}, {356,-0,-1689,6}, {202,3,389,1}, {356,-0,-1689,6}, {202,3,389,1}, {356,-0,-1689,6}}};
                unsigned short l_221 = 65528UL;
                int i, j;
                l_203[0][5].f2 = (safe_rshift_func_int16_t_s_s((safe_sub_func_int32_t_s_s((safe_add_func_int32_t_s_s(func_55(l_203[0][5], ((l_196 , l_179) & (l_165 != func_55(l_203[0][9], func_55(l_204, l_196, ((safe_rshift_func_uint8_t_u_u(g_100.f2, 6)) > (safe_mod_func_uint32_t_u_u(g_100.f1, g_100.f2))), g_100.f2), p_54, g_100.f3))), l_93.f1, p_54), 0x82A4FE22L)), 0xCD8053AFL)), p_54));
                for (l_165 = 0; (l_165 <= 0); l_165 += 1)
                {
                    struct S0 l_209 = {353,2,-1343,2};
                    l_210 = l_209;
                    g_100 = l_203[0][7];
                }
                for (l_113 = 0; (l_113 == 6); l_113 = safe_add_func_int32_t_s_s(l_113, 4))
                {
                    unsigned char l_229 = 0x67L;
                    int l_243 = 0xA3075B59L;
                    if ((safe_add_func_uint32_t_u_u((safe_mod_func_int8_t_s_s(p_54, (safe_add_func_uint8_t_u_u(((((((((0x7B76DF01L < (safe_lshift_func_int16_t_s_s(l_221, ((((safe_lshift_func_uint16_t_u_s((safe_lshift_func_uint8_t_u_u(((~((safe_lshift_func_uint8_t_u_s((!p_54), g_100.f2)) || (-1L))) | ((func_55(g_100, l_113, (g_99 <= p_54), g_100.f3) >= g_100.f0) , g_99)), 5)), 8)) >= 4294967286UL) || 8UL) , 0x392AL)))) , l_210.f0) , g_100.f2) , g_100) , l_228[0][0][7]) < l_229) == p_54) | g_100.f3), g_100.f1)))), l_166[0])))
                    {
                        struct S0 l_230 = {11,-2,-2212,3};
                        l_93.f1 = (func_55(l_230, l_230.f0, func_55(((safe_sub_func_uint8_t_u_u((g_99 , (p_54 < l_210.f3)), (((safe_mod_func_uint8_t_u_u(p_54, 0x5EL)) , ((((func_55(g_100, g_100.f0, p_54, g_100.f1) <= l_204.f3) <= 0x83L) , g_100.f1) <= 0x1CA11431L)) != l_235))) , l_230), l_229, g_100.f0, p_54), g_100.f3) & l_113);
                        g_100 = g_100;
                        l_243 = (safe_mod_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_u(0x00L, 0)), (safe_sub_func_int8_t_s_s((g_100 , p_54), (g_242[6] & (p_54 , l_229))))));
                        return g_11;
                    }
                    else
                    {
                        return l_244;
                    }
                }
                if (func_55(l_210, g_80, (0x5BE12B37L < (g_100.f0 < p_54)), g_100.f0))
                {
                    struct S0 l_253 = {311,1,2490,0};
                    for (p_54 = 1; (p_54 <= 6); p_54 += 1)
                    {
                        int i;
                        l_93.f1 = ((g_242[p_54] , ((-3L) != (l_203[0][5].f3 <= ((safe_lshift_func_int8_t_s_s((safe_div_func_int16_t_s_s(g_100.f1, (safe_lshift_func_uint8_t_u_s((g_80 || p_54), 4)))), 1)) == l_204.f3)))) < ((g_100 , g_11) && p_54));
                        l_253 = l_93;
                        return g_242[p_54];
                    }
                }
                else
                {
                    l_210 = l_203[0][2];
                    for (l_153 = (-18); (l_153 <= 15); l_153 = safe_add_func_uint32_t_u_u(l_153, 3))
                    {
                        if (l_203[0][5].f2)
                            break;
                    }
                }
            }
            if (l_113)
            {
                short l_263 = 0xF3B7L;
                int l_266 = (-3L);
                struct S0 l_318 = {295,1,-811,7};
                l_266 = (safe_div_func_uint32_t_u_u((safe_mod_func_int32_t_s_s((func_55(g_100, g_80, l_204.f2, ((0L <= g_100.f2) | (safe_add_func_uint16_t_u_u((safe_unary_minus_func_uint8_t_u((l_263 ^ (((safe_rshift_func_int16_t_s_u(l_113, g_100.f1)) && p_54) , l_204.f2)))), 0x9C2FL)))) < l_263), g_242[1])), l_228[5][0][2]));
                g_100 = l_93;
                for (g_80 = (-15); (g_80 < 26); ++g_80)
                {
                    int l_277[10][3][8] = {{{(-1L), 0xD234CDECL, 1L, 8L, 0x62AD69ADL, 1L, 0x21C7FAE4L, 0x491EEB30L}, {(-1L), 0xD234CDECL, 1L, 8L, 0x62AD69ADL, 1L, 0x21C7FAE4L, 0x491EEB30L}, {(-1L), 0xD234CDECL, 1L, 8L, 0x62AD69ADL, 1L, 0x21C7FAE4L, 0x491EEB30L}}, {{(-1L), 0xD234CDECL, 1L, 8L, 0x62AD69ADL, 1L, 0x21C7FAE4L, 0x491EEB30L}, {(-1L), 0xD234CDECL, 1L, 8L, 0x62AD69ADL, 1L, 0x21C7FAE4L, 0x491EEB30L}, {(-1L), 0xD234CDECL, 1L, 8L, 0x62AD69ADL, 1L, 0x21C7FAE4L, 0x491EEB30L}}, {{(-1L), 0xD234CDECL, 1L, 8L, 0x62AD69ADL, 1L, 0x21C7FAE4L, 0x491EEB30L}, {(-1L), 0xD234CDECL, 1L, 8L, 0x62AD69ADL, 1L, 0x21C7FAE4L, 0x491EEB30L}, {(-1L), 0xD234CDECL, 1L, 8L, 0x62AD69ADL, 1L, 0x21C7FAE4L, 0x491EEB30L}}, {{(-1L), 0xD234CDECL, 1L, 8L, 0x62AD69ADL, 1L, 0x21C7FAE4L, 0x491EEB30L}, {(-1L), 0xD234CDECL, 1L, 8L, 0x62AD69ADL, 1L, 0x21C7FAE4L, 0x491EEB30L}, {(-1L), 0xD234CDECL, 1L, 8L, 0x62AD69ADL, 1L, 0x21C7FAE4L, 0x491EEB30L}}, {{(-1L), 0xD234CDECL, 1L, 8L, 0x62AD69ADL, 1L, 0x21C7FAE4L, 0x491EEB30L}, {(-1L), 0xD234CDECL, 1L, 8L, 0x62AD69ADL, 1L, 0x21C7FAE4L, 0x491EEB30L}, {(-1L), 0xD234CDECL, 1L, 8L, 0x62AD69ADL, 1L, 0x21C7FAE4L, 0x491EEB30L}}, {{(-1L), 0xD234CDECL, 1L, 8L, 0x62AD69ADL, 1L, 0x21C7FAE4L, 0x491EEB30L}, {(-1L), 0xD234CDECL, 1L, 8L, 0x62AD69ADL, 1L, 0x21C7FAE4L, 0x491EEB30L}, {(-1L), 0xD234CDECL, 1L, 8L, 0x62AD69ADL, 1L, 0x21C7FAE4L, 0x491EEB30L}}, {{(-1L), 0xD234CDECL, 1L, 8L, 0x62AD69ADL, 1L, 0x21C7FAE4L, 0x491EEB30L}, {(-1L), 0xD234CDECL, 1L, 8L, 0x62AD69ADL, 1L, 0x21C7FAE4L, 0x491EEB30L}, {(-1L), 0xD234CDECL, 1L, 8L, 0x62AD69ADL, 1L, 0x21C7FAE4L, 0x491EEB30L}}, {{(-1L), 0xD234CDECL, 1L, 8L, 0x62AD69ADL, 1L, 0x21C7FAE4L, 0x491EEB30L}, {(-1L), 0xD234CDECL, 1L, 8L, 0x62AD69ADL, 1L, 0x21C7FAE4L, 0x491EEB30L}, {(-1L), 0xD234CDECL, 1L, 8L, 0x62AD69ADL, 1L, 0x21C7FAE4L, 0x491EEB30L}}, {{(-1L), 0xD234CDECL, 1L, 8L, 0x62AD69ADL, 1L, 0x21C7FAE4L, 0x491EEB30L}, {(-1L), 0xD234CDECL, 1L, 8L, 0x62AD69ADL, 1L, 0x21C7FAE4L, 0x491EEB30L}, {(-1L), 0xD234CDECL, 1L, 8L, 0x62AD69ADL, 1L, 0x21C7FAE4L, 0x491EEB30L}}, {{(-1L), 0xD234CDECL, 1L, 8L, 0x62AD69ADL, 1L, 0x21C7FAE4L, 0x491EEB30L}, {(-1L), 0xD234CDECL, 1L, 8L, 0x62AD69ADL, 1L, 0x21C7FAE4L, 0x491EEB30L}, {(-1L), 0xD234CDECL, 1L, 8L, 0x62AD69ADL, 1L, 0x21C7FAE4L, 0x491EEB30L}}};
                    struct S0 l_307 = {234,1,-2772,1};
                    int i, j, k;
                    if (((((((safe_lshift_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u(((g_100.f1 , (safe_rshift_func_int8_t_s_u(0L, 6))) == (safe_sub_func_int16_t_s_s((l_210.f0 , (((g_242[6] | (l_196 , p_54)) | l_277[4][2][4]) , (safe_rshift_func_uint16_t_u_u((+((+(l_280 , (l_244 , 0xA8L))) < l_263)), 5)))), 0L))), p_54)), 10)) & 0xF45D0BD2L) , l_263) && l_266) >= p_54) < p_54))
                    {
                        l_204.f2 = ((safe_lshift_func_uint8_t_u_u((safe_div_func_int8_t_s_s((safe_div_func_int8_t_s_s(g_100.f3, ((safe_sub_func_uint16_t_u_u(((safe_add_func_int8_t_s_s(g_100.f1, (p_54 == (0xE85BA4B4L >= (safe_mod_func_int8_t_s_s((g_100.f2 == (!((l_277[4][2][4] != g_100.f3) , p_54))), (safe_lshift_func_int8_t_s_s(l_204.f0, g_100.f3)))))))) != g_99), p_54)) && p_54))), 4UL)), l_93.f3)) , l_93.f1);
                        if (p_54)
                            continue;
                        g_100 = l_93;
                        g_100 = l_204;
                    }
                    else
                    {
                        unsigned char l_303 = 253UL;
                        g_100 = ((safe_div_func_int32_t_s_s((safe_mod_func_int8_t_s_s((g_100.f0 , l_166[0]), ((safe_lshift_func_uint8_t_u_u((safe_sub_func_int32_t_s_s(g_99, (((g_100.f3 == p_54) > (l_303 , ((g_100.f3 >= (((safe_add_func_uint32_t_u_u(l_306, l_93.f2)) & p_54) , l_266)) , p_54))) != 1L))), g_100.f2)) ^ 0x516107DDL))), l_228[0][0][7])) , l_307);
                        g_100.f1 = (~0xBE9EF241L);
                    }
                    l_307 = (((p_54 , (-10L)) <= (safe_sub_func_uint8_t_u_u(g_99, ((safe_lshift_func_uint8_t_u_u((safe_div_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u(((g_99 != (-1L)) < ((p_54 || l_307.f1) , (l_93.f1 == (safe_lshift_func_int16_t_s_u(g_100.f1, 3))))), 0x270C199CL)), g_99)), g_11)) <= p_54)))) , l_318);
                    for (l_235 = 0; (l_235 <= 2); l_235 += 1)
                    {
                        l_204 = l_204;
                        return l_210.f0;
                    }
                }
            }
            else
            {
                struct S0 l_319 = {258,-0,1636,1};
                l_204 = l_319;
                l_319 = ((0L || (0x9C87FB20L > l_166[0])) , g_100);
            }
        }
        else
        {
            for (g_99 = 0; (g_99 <= 0); g_99 += 1)
            {
                int i;
                l_166[g_99] = (g_322[1][1] <= g_242[2]);
            }
            l_93 = l_210;
        }
        for (l_153 = (-26); (l_153 < 0); l_153 = safe_add_func_uint8_t_u_u(l_153, 3))
        {
            struct S0 l_325[4] = {{179,1,-508,1}, {179,1,-508,1}, {179,1,-508,1}, {179,1,-508,1}};
            int i;
            for (l_113 = 0; (l_113 <= 3); l_113 += 1)
            {
                struct S0 l_328 = {152,-2,174,1};
                int i, j;
                l_325[0] = g_100;
                if (g_322[l_113][(l_113 + 1)])
                    break;
                l_166[0] = ((safe_rshift_func_uint16_t_u_s(((g_80 <= l_325[0].f3) , 65535UL), g_100.f0)) || ((func_55(l_328, func_55(l_93, p_54, l_328.f1, p_54), p_54, l_93.f1) ^ g_100.f1) , l_328.f3));
                if (p_54)
                    continue;
                for (l_306 = 0; (l_306 <= 3); l_306 += 1)
                {
                    struct S0 l_329[7][3] = {{{231,1,-632,6}, {2,-0,-848,7}, {311,0,-381,3}}, {{231,1,-632,6}, {2,-0,-848,7}, {311,0,-381,3}}, {{231,1,-632,6}, {2,-0,-848,7}, {311,0,-381,3}}, {{231,1,-632,6}, {2,-0,-848,7}, {311,0,-381,3}}, {{231,1,-632,6}, {2,-0,-848,7}, {311,0,-381,3}}, {{231,1,-632,6}, {2,-0,-848,7}, {311,0,-381,3}}, {{231,1,-632,6}, {2,-0,-848,7}, {311,0,-381,3}}};
                    int i, j;
                    l_329[3][1] = l_210;
                    if (p_54)
                        continue;
                }
            }
            l_93.f2 = (((-5L) == ((l_93.f2 & l_153) , p_54)) && (((l_182[0][0][3] , g_11) & (safe_sub_func_uint8_t_u_u((l_325[0] , (safe_mod_func_int16_t_s_s(((safe_mod_func_uint32_t_u_u((safe_sub_func_int16_t_s_s(g_242[4], g_99)), g_242[6])) >= 0x29L), p_54))), l_338))) | l_244));
            g_100 = g_100;
        }
        if ((safe_mod_func_uint32_t_u_u((g_322[1][1] > (g_100.f1 == (((safe_sub_func_uint8_t_u_u((safe_sub_func_int32_t_s_s(((safe_mod_func_uint16_t_u_u(((l_93 , ((safe_div_func_int16_t_s_s((+(func_55(l_210, p_54, l_93.f3, l_349) < g_242[6])), l_93.f1)) > 1L)) || 0L), g_322[3][4])) || g_100.f1), g_100.f3)), (-8L))) , p_54) & l_93.f0))), l_93.f0)))
        {
            struct S0 l_351 = {317,-1,970,6};
            l_351 = l_350[1][1][0];
            for (g_80 = 4; (g_80 < 19); g_80 = safe_add_func_int32_t_s_s(g_80, 1))
            {
                struct S0 l_354 = {145,-1,2069,7};
                l_354 = g_100;
                l_166[0] = p_54;
            }
        }
        else
        {
            unsigned short l_370 = 0x62D4L;
            unsigned short l_394 = 2UL;
            struct S0 l_418 = {189,1,-417,6};
            g_100.f2 = p_54;
            for (l_153 = 1; (l_153 >= 0); l_153 -= 1)
            {
                char l_380 = 0x9DL;
                struct S0 l_388 = {336,2,1723,2};
                if ((((p_54 | ((safe_sub_func_uint16_t_u_u((((safe_lshift_func_int8_t_s_s(0x54L, 1)) > 248UL) || ((safe_div_func_int32_t_s_s(g_100.f1, (safe_mod_func_int8_t_s_s((safe_div_func_int16_t_s_s((g_322[2][5] | g_242[0]), (safe_lshift_func_int16_t_s_s((p_54 , (g_367 && (65535UL || g_322[3][0]))), p_54)))), p_54)))) ^ p_54)), p_54)) < p_54)) == 0x5A4DL) , g_242[3]))
                {
                    g_100.f1 = l_338;
                    return g_322[1][1];
                }
                else
                {
                    struct S0 l_379[2] = {{345,2,570,0}, {345,2,570,0}};
                    int i;
                    l_370 = (safe_sub_func_uint32_t_u_u(0x2228E07AL, g_367));
                    g_100 = g_100;
                    l_380 = (safe_add_func_int16_t_s_s(func_55(l_210, (((g_80 ^ g_100.f2) != p_54) | ((safe_lshift_func_int8_t_s_s(((safe_rshift_func_int8_t_s_u((p_54 | l_93.f2), 3)) | (safe_add_func_uint32_t_u_u((l_379[1] , 0x1C56A950L), g_80))), 2)) , 0x2157L)), p_54, l_210.f1), 0x71A7L));
                    l_244 = ((p_54 <= p_54) , g_242[4]);
                }
                if (l_381)
                {
                    int l_389 = 1L;
                    struct S0 l_392 = {320,2,-184,0};
                    if ((safe_sub_func_int8_t_s_s(l_153, (safe_lshift_func_int8_t_s_u(l_380, (((safe_add_func_int32_t_s_s(l_182[0][0][6], func_55(l_388, p_54, func_55(l_388, func_55(l_388, (l_370 < func_55(g_100, g_322[2][0], p_54, p_54)), p_54, g_99), g_242[2], l_388.f3), l_389))) != (-5L)) <= g_100.f1))))))
                    {
                        g_100.f2 = (safe_rshift_func_int16_t_s_u(g_100.f3, 15));
                        if (p_54)
                            continue;
                        return p_54;
                    }
                    else
                    {
                        if (l_370)
                            break;
                    }
                    l_392 = l_210;
                    return p_54;
                }
                else
                {
                    struct S0 l_393 = {187,2,1220,1};
                    l_393 = l_388;
                    for (p_54 = 0; (p_54 <= 1); p_54 += 1)
                    {
                        char l_413 = 0x01L;
                        g_100.f2 = (1UL <= (((func_55(l_388, (l_394 , (safe_div_func_int8_t_s_s(((p_54 < (safe_sub_func_uint8_t_u_u(0x45L, ((g_242[5] > (safe_mod_func_int16_t_s_s(0x8EBAL, 0x4D73L))) && p_54)))) ^ 0xD453L), 0x7CL))), p_54, g_100.f2) & p_54) && (-5L)) , p_54));
                        g_100.f1 = (((func_55(l_210, g_322[0][0], (((safe_lshift_func_uint8_t_u_u((safe_div_func_uint32_t_u_u(4294967286UL, l_338)), 6)) < (!g_100.f3)) , ((+0xA16BL) , (((safe_div_func_uint16_t_u_u(((g_11 | g_367) != (safe_mod_func_int16_t_s_s(((safe_add_func_uint16_t_u_u((func_55(g_100, p_54, l_394, g_100.f0) & 0x48L), l_393.f3)) && g_80), g_100.f2))), l_166[0])) <= g_11) && g_100.f3))), p_54) > l_413) , g_322[1][1]) , l_388.f1);
                    }
                    l_166[0] = p_54;
                    if ((safe_lshift_func_int8_t_s_u(((((l_210 , l_350[1][1][0].f2) ^ (safe_sub_func_int32_t_s_s(g_100.f1, func_55(l_418, ((3L == (safe_sub_func_int16_t_s_s(0xEC01L, (safe_add_func_uint16_t_u_u(g_242[0], g_367))))) == g_322[1][1]), l_393.f3, g_242[6])))) , l_388.f1) & 0x894EL), l_210.f2)))
                    {
                        if (l_388.f0)
                            break;
                        return p_54;
                    }
                    else
                    {
                        return p_54;
                    }
                }
            }
        }
    }
    l_93 = l_350[3][9][0];
    for (g_99 = 0; (g_99 < 4); g_99++)
    {
        struct S0 l_446 = {289,-0,590,4};
        int l_447 = 0xCEE4B908L;
        for (g_367 = 0; (g_367 < (-15)); g_367--)
        {
            struct S0 l_431 = {230,0,780,6};
            for (l_338 = 0; (l_338 == 6); ++l_338)
            {
                if (g_100.f1)
                    break;
                for (g_80 = 1; (g_80 < (-18)); g_80--)
                {
                    g_100.f2 = (g_80 > l_350[1][1][0].f2);
                    l_350[1][1][0].f2 = (p_54 > p_54);
                    l_431 = g_100;
                    return l_431.f0;
                }
                if (g_100.f1)
                    break;
            }
            for (l_113 = 6; (l_113 >= 1); l_113 -= 1)
            {
                if (p_54)
                    break;
                return g_100.f2;
            }
        }
        l_447 = (safe_rshift_func_int8_t_s_u((safe_lshift_func_uint8_t_u_s((((func_55(g_100, (safe_div_func_int16_t_s_s(((p_54 || (safe_add_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_u((((safe_sub_func_int32_t_s_s(func_55(l_350[1][1][0], (safe_mod_func_uint8_t_u_u((func_55(l_93, g_11, ((!(((func_55(l_446, ((func_55(g_100, p_54, p_54, g_100.f1) ^ g_242[4]) , l_350[1][1][0].f3), p_54, p_54) < g_100.f1) ^ l_113) >= 0L)) || 0x1ACF764FL), l_446.f0) ^ 4294967295UL), 0xAEL)), l_446.f2, p_54), 0x5228BA67L)) >= l_446.f2) , l_93.f2), g_242[3])), 0xD025CFA6L))) <= 0x1EL), g_322[1][1])), g_367, p_54) , g_242[3]) == 0L) <= p_54), g_11)), 2));
    }
    return g_100.f0;
}







static unsigned short func_55(struct S0 p_56, int p_57, short p_58, short p_59)
{
    unsigned char l_77 = 0x01L;
    char l_89 = 7L;
    int l_90 = 0xA3B2A51DL;
    g_80 = ((safe_rshift_func_int8_t_s_u(((l_77 || ((g_11 && g_11) && (((safe_add_func_uint16_t_u_u(g_11, (((((((p_59 == (p_56.f1 < g_11)) , (p_57 | l_77)) > g_11) <= p_57) < p_59) && p_56.f0) && g_11))) , 0xACF2L) >= g_11))) == 0xEE06L), 6)) != g_11);
    l_90 = ((l_77 ^ (65534UL <= (g_11 ^ ((((safe_sub_func_uint8_t_u_u((safe_add_func_uint16_t_u_u(0x5641L, (l_77 || (((safe_mod_func_uint16_t_u_u(((l_77 ^ (((+(1UL <= p_56.f3)) && 0x80D0L) ^ g_80)) < 0x60L), l_77)) , p_56.f2) >= 0x1E5F5605L)))), g_11)) ^ 8UL) >= g_80) , g_11)))) >= l_89);
    return p_56.f1;
}





int main (void)
{
    int i, j;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_11, "g_11", print_hash_value);
    transparent_crc(g_80, "g_80", print_hash_value);
    transparent_crc(g_99, "g_99", print_hash_value);
    transparent_crc(g_100.f0, "g_100.f0", print_hash_value);
    transparent_crc(g_100.f1, "g_100.f1", print_hash_value);
    transparent_crc(g_100.f2, "g_100.f2", print_hash_value);
    transparent_crc(g_100.f3, "g_100.f3", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_242[i], "g_242[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_322[i][j], "g_322[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_367, "g_367", print_hash_value);
    transparent_crc(g_451, "g_451", print_hash_value);
    transparent_crc(g_718, "g_718", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_812[i], "g_812[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_914, "g_914", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_1072[i], "g_1072[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1231, "g_1231", print_hash_value);
    transparent_crc(g_1362, "g_1362", print_hash_value);
    transparent_crc(g_1435, "g_1435", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
