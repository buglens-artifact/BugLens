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



static volatile int g_2 = (-1L);
static int g_3 = 6L;
static const short g_32 = (-1L);
static int g_64[5][6][2] = {{{0x39B398EFL,(-1L)},{(-1L),0x39B398EFL},{(-1L),(-1L)},{0x39B398EFL,(-1L)},{(-1L),0x39B398EFL},{(-1L),(-1L)}},{{0x39B398EFL,(-1L)},{(-1L),0x39B398EFL},{(-1L),(-1L)},{0x39B398EFL,(-1L)},{(-1L),0x39B398EFL},{(-1L),(-1L)}},{{0x39B398EFL,(-1L)},{(-1L),0x39B398EFL},{(-1L),(-1L)},{0x39B398EFL,(-1L)},{(-1L),0x39B398EFL},{(-1L),(-1L)}},{{0x39B398EFL,(-1L)},{(-1L),0x39B398EFL},{(-1L),(-1L)},{0x39B398EFL,(-1L)},{(-1L),0x39B398EFL},{0x39B398EFL,0x39B398EFL}},{{1L,0x39B398EFL},{0x39B398EFL,1L},{0x39B398EFL,0x39B398EFL},{1L,0x39B398EFL},{0x39B398EFL,1L},{0x39B398EFL,0x39B398EFL}}};
static unsigned g_148 = 0xFCDD685BL;
static char g_339 = 0xEDL;
static unsigned g_387 = 5UL;
static unsigned short g_440 = 0xCA93L;
static unsigned g_519 = 0UL;
static volatile char g_528 = 7L;
static short g_533 = 1L;
static unsigned short g_540[3][6] = {{7UL,0xA107L,0xA107L,7UL,7UL,0xA107L},{7UL,7UL,0xA107L,0xA107L,7UL,7UL},{7UL,0xA107L,0xA107L,7UL,7UL,0xA107L}};
static short g_622 = 0x7518L;
static volatile int g_641[10] = {0x62EB8886L,0L,0x62EB8886L,0x62EB8886L,0L,0x62EB8886L,0x62EB8886L,0L,0x62EB8886L,0x62EB8886L};
static unsigned g_656 = 0x5959B25EL;
static volatile short g_731 = 0x2B11L;
static volatile int g_906 = (-1L);
static unsigned g_1204 = 4294967295UL;
static unsigned char g_1240 = 0x37L;
static volatile unsigned short g_1390 = 0x2C3CL;
static unsigned char g_1445 = 0xAFL;
static unsigned g_1446 = 0UL;



static unsigned func_1(void);
static unsigned char func_11(unsigned p_12, unsigned short p_13, unsigned p_14, int p_15, unsigned short p_16);
static short func_17(unsigned p_18, unsigned char p_19, unsigned p_20, int p_21, unsigned short p_22);
static char func_27(int p_28, int p_29, int p_30, unsigned p_31);
static int func_33(int p_34, unsigned p_35, int p_36);
static const short func_45(unsigned char p_46, unsigned p_47, unsigned char p_48, unsigned char p_49, unsigned short p_50);
static const unsigned short func_54(short p_55, const unsigned short p_56, unsigned short p_57, unsigned short p_58);
static short func_59(unsigned p_60, unsigned p_61, unsigned p_62, unsigned char p_63);
static char func_68(unsigned p_69, char p_70);
static int func_71(short p_72, char p_73, char p_74);
static unsigned func_1(void)
{
    unsigned short l_26 = 65535UL;
    unsigned short l_1203 = 0xAA01L;
    int l_1218[2][10] = {{4L,0x06EF2D7CL,4L,0x748C82B1L,0x748C82B1L,4L,0x06EF2D7CL,4L,0x748C82B1L,0x748C82B1L},{4L,0x06EF2D7CL,4L,0x748C82B1L,0x748C82B1L,4L,0x06EF2D7CL,4L,0x748C82B1L,0x748C82B1L}};
    const unsigned char l_1252[5] = {0x23L,0x23L,0x23L,0x23L,0x23L};
    unsigned short l_1278 = 65535UL;
    unsigned l_1290 = 0UL;
    const int l_1324[5] = {0L,0L,0L,0L,0L};
    char l_1429[3][2][2];
    int l_1449 = 9L;
    char l_1454 = 0x7BL;
    int l_1463 = 0x98F90D84L;
    const int l_1516 = 6L;
    char l_1517 = (-4L);
    unsigned l_1555[9];
    int i, j, k;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 2; k++)
                l_1429[i][j][k] = 0x8CL;
        }
    }
    for (i = 0; i < 9; i++)
        l_1555[i] = 0xBCFDDB08L;
    for (g_3 = 7; (g_3 > (-11)); g_3 = safe_sub_func_int16_t_s_s(g_3, 4))
    {
        short l_6 = 1L;
        l_6 |= 1L;
    }
    for (g_3 = 20; (g_3 < (-30)); g_3 = safe_sub_func_uint8_t_u_u(g_3, 2))
    {
        int l_23 = 0x9AC54C97L;
        short l_1216[5];
        int i;
        for (i = 0; i < 5; i++)
            l_1216[i] = (-2L);
        if (((safe_add_func_int32_t_s_s(((func_11(((g_2 || func_17(l_23, ((safe_add_func_int32_t_s_s((~(((~(l_26 <= func_27((g_3 <= g_32), func_33(g_3, l_26, ((((safe_rshift_func_uint8_t_u_s((safe_add_func_uint16_t_u_u(g_32, l_23)), g_3)) == l_26) < (-8L)) | l_26)), g_32, g_32))) < l_26) >= g_32)), g_540[2][0])) < 1L), g_540[1][4], l_26, g_540[0][5])) && 0xABL), g_3, l_23, g_540[0][2], g_656) && 9L) && 0x578C129CL), (-6L))) || 0xFBL))
        {
            unsigned short l_1188 = 5UL;
            for (g_519 = 0; (g_519 == 12); g_519++)
            {
                char l_1187[6][2][6] = {{{0x4FL,0xAAL,0x5CL,9L,9L,0x5CL},{0x2AL,0x2AL,0x68L,(-1L),9L,0x99L}},{{9L,0xAAL,(-10L),(-1L),0xAAL,0x68L},{0x2AL,9L,(-10L),9L,0x2AL,0x5CL}},{{0xAAL,(-1L),(-10L),0xAAL,9L,0xCFL},{0xAAL,9L,0xCFL,(-1L),(-1L),0xCFL}},{{0x4FL,0x4FL,(-10L),0x2AL,(-1L),0x5CL},{(-1L),9L,0x99L,0x2AL,9L,(-10L)}},{{0x4FL,(-1L),0x99L,(-1L),0x4FL,0x5CL},{0xAAL,(-1L),(-10L),0xAAL,9L,0xCFL}},{{0xAAL,9L,0xCFL,(-1L),(-1L),0xCFL},{0x4FL,0x4FL,(-10L),0x2AL,(-1L),0x5CL}}};
                char l_1191 = 0x39L;
                int i, j, k;
                l_1191 = (l_1187[4][0][0] < (l_26 != func_59(l_1188, ((safe_sub_func_int16_t_s_s((func_59(g_528, g_148, ((g_540[2][2] != ((!250UL) , l_1187[0][0][1])) < g_540[0][1]), l_1188) , 0xC0EAL), 0x57F7L)) , 1UL), g_519, l_23)));
                g_1204 &= (safe_sub_func_int8_t_s_s((l_23 , ((safe_unary_minus_func_int16_t_s(l_26)) >= (safe_mul_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s((func_11((l_1188 | func_68((safe_add_func_uint16_t_u_u(g_906, (safe_lshift_func_uint16_t_u_s(g_387, 13)))), g_540[2][3])), g_3, l_1187[4][0][0], l_23, l_1203) != l_1191), g_622)), 0L)))), 0xB3L));
                if ((g_440 <= func_45((safe_mod_func_uint16_t_u_u((l_1187[4][0][0] , g_148), (l_1187[3][0][0] || ((func_11((((l_1191 || 0x60E1L) == (0x5EF7L && (func_11((0x6F935D51L <= 0xAE3E548BL), l_26, l_1203, g_1204, l_1187[4][0][0]) >= g_656))) & l_1203), l_1187[4][0][0], l_1188, g_387, g_3) ^ g_519) , g_641[0])))), g_656, g_440, g_440, g_148)))
                {
                    char l_1209[10] = {(-9L),1L,3L,3L,1L,(-9L),1L,3L,3L,1L};
                    int i;
                    for (g_339 = 1; (g_339 >= 0); g_339 -= 1)
                    {
                        int i, j, k;
                        g_64[(g_339 + 1)][(g_339 + 3)][g_339] = (safe_rshift_func_uint16_t_u_s(((g_64[g_339][g_339][g_339] , 0xC0L) & 0xF3L), g_533));
                        if (g_1204)
                            break;
                        g_906 = (((l_1203 <= l_23) , (((((-7L) | g_32) , func_45(l_1209[7], (((func_45(g_2, ((((((g_540[0][3] , (safe_rshift_func_uint16_t_u_s((((safe_lshift_func_int8_t_s_s(g_540[2][0], 5)) , g_540[1][2]) , 0x4B10L), g_64[(g_339 + 1)][(g_339 + 3)][g_339]))) > 0xB4F9L) <= 0xEB3A1D6AL) == 1L) && 0x85C64F79L) && 0UL), l_23, l_26, g_32) != l_26) & 1L) < g_387), g_1204, l_1203, g_387)) ^ l_1188) >= l_26)) != g_148);
                        g_2 = l_23;
                    }
                    if (l_23)
                        break;
                }
                else
                {
                    unsigned short l_1214[2][7] = {{0x49A4L,0x5AAEL,0x5AAEL,0x49A4L,0x5AAEL,0x5AAEL,0x49A4L},{0x5AAEL,0x49A4L,0x5AAEL,0x5AAEL,0x49A4L,0x5AAEL,0x5AAEL}};
                    int l_1215[6][6] = {{0x004EBD04L,0xEE761EC7L,0x50D78BA2L,0xA7A474CEL,1L,0x4F0D448DL},{1L,0x50D78BA2L,0x004EBD04L,0x1D41C941L,0x1D41C941L,0x004EBD04L},{0x50D78BA2L,0x50D78BA2L,8L,1L,1L,0x1D41C941L},{7L,0xEE761EC7L,0xA7A474CEL,8L,1L,(-10L)},{1L,0xA7A474CEL,1L,0x004EBD04L,1L,0x4F0D448DL},{7L,0x004EBD04L,(-10L),1L,0xEE761EC7L,0xEE761EC7L}};
                    int i, j;
                    l_1215[3][1] = func_68((l_1203 , l_1188), l_1214[1][0]);
                }
            }
        }
        else
        {
            int l_1219 = 0x9FF4519BL;
            l_1218[1][2] = (l_1216[0] || (((g_440 || 0xFB3D90E8L) , (safe_unary_minus_func_int32_t_s((-1L)))) && 0xBEE7L));
            l_1218[1][2] = l_1219;
            return g_519;
        }
    }
    g_3 = (func_45((((safe_sub_func_int8_t_s_s((l_1203 <= 0x47DCL), 0x78L)) | (l_1218[1][2] || l_26)) || ((l_1218[1][2] & func_68(g_731, (!(safe_add_func_int16_t_s_s(l_1218[1][2], (((!g_622) || 0x1425L) < 0xE8L)))))) && g_519)), g_519, l_26, g_540[1][4], g_656) || l_1203);
    if ((+(func_68((((safe_rshift_func_uint8_t_u_s(func_27(l_1218[1][2], ((safe_lshift_func_int8_t_s_s(1L, g_540[1][0])) , (safe_add_func_uint32_t_u_u(g_339, g_540[2][0]))), func_45(func_45(((safe_mod_func_uint16_t_u_u(l_1218[1][2], (func_45(l_1203, (((safe_lshift_func_uint8_t_u_u((((l_1218[1][0] >= (safe_add_func_int16_t_s_s(((((safe_add_func_int32_t_s_s(func_45((safe_lshift_func_int16_t_s_u(((l_1218[1][2] ^ g_622) && 0xD8L), l_1203)), g_1204, g_540[2][0], l_1218[1][2], g_440), l_1203)) == 0L) && 0UL) > l_1218[1][2]), g_533))) , 0x20068603L) , g_656), g_540[2][0])) == g_1240) <= g_519), g_339, l_26, l_1218[0][8]) , l_1218[1][2]))) == g_533), l_1203, g_440, l_1218[1][8], l_1218[1][5]), l_1203, g_387, l_26, l_1218[0][7]), l_1218[1][2]), g_32)) | (-5L)) >= l_1218[1][0]), l_26) > l_26)))
    {
        short l_1241[4] = {(-1L),(-1L),(-1L),(-1L)};
        int l_1243 = (-3L);
        int l_1325 = 6L;
        short l_1332 = 1L;
        char l_1339 = 0x9FL;
        unsigned l_1341[3][10] = {{8UL,8UL,8UL,8UL,8UL,8UL,8UL,8UL,8UL,8UL},{8UL,8UL,8UL,8UL,8UL,8UL,8UL,8UL,8UL,8UL},{8UL,8UL,8UL,8UL,8UL,8UL,8UL,8UL,8UL,8UL}};
        char l_1364 = 0xF4L;
        unsigned l_1387 = 0x72EDD89AL;
        int i, j;
        if (l_1241[3])
        {
            unsigned l_1242 = 0xDCFC3137L;
            unsigned short l_1289 = 0xF063L;
            l_1242 = g_148;
            if (l_1242)
            {
                l_1243 &= l_1242;
            }
            else
            {
                unsigned l_1254 = 1UL;
                unsigned char l_1271 = 0x6DL;
                int l_1275 = 3L;
                for (g_1240 = 0; (g_1240 > 41); g_1240++)
                {
                    short l_1253[7][4][7] = {{{0x44B8L,0x5473L,(-1L),0xE6C7L,0xF1D9L,(-5L),0x4BC4L},{1L,0x224BL,1L,0x0A1EL,(-6L),0x544FL,1L},{5L,0x44B8L,6L,(-8L),0xE6C7L,0xD02BL,0x4BC4L},{(-8L),0xE9BBL,(-1L),0xB728L,(-1L),0xE9BBL,(-8L)}},{{(-7L),(-8L),(-5L),0xA55FL,0x44B8L,(-7L),0x5473L},{(-6L),(-7L),0x0E0AL,(-1L),(-6L),0x4C8AL,0xF40CL},{0x44B8L,1L,(-5L),0x9F54L,(-7L),0xF1D9L,(-8L)},{(-1L),0x224BL,(-1L),1L,(-8L),0x0A1EL,0xB6D7L}},{{0xE6C7L,0x9F54L,6L,0xE6C7L,5L,0xF8F6L,(-6L)},{(-6L),0x544FL,1L,0xB728L,1L,0x0A1EL,(-7L)},{0xF1D9L,0x44B8L,(-1L),(-1L),0x44B8L,0xF1D9L,(-7L)},{(-8L),(-1L),0x5EACL,0x224BL,0xC7F2L,0x4C8AL,(-8L)}},{{0x564DL,(-1L),(-7L),0xE6C7L,0xA55FL,(-7L),(-8L)},{1L,(-1L),0x8638L,0xE9BBL,(-6L),0xE9BBL,0x8638L},{0xE6C7L,0x44B8L,0x2E21L,0x9F54L,0x564DL,0xD02BL,0x9F54L},{0xC7F2L,0x544FL,(-1L),(-7L),0xB6D7L,0x544FL,(-8L)}},{{1L,0x9F54L,(-1L),0xA55FL,0x564DL,(-5L),(-5L)},{(-6L),0x224BL,0L,0x224BL,(-6L),1L,(-7L)},{5L,1L,0x5473L,(-8L),0xA55FL,0xF1D9L,0x4BC4L},{0xB6D7L,(-7L),(-1L),0x544FL,0xC7F2L,0xE9BBL,0xB6D7L}},{{5L,(-8L),0xF8F6L,0xA55FL,1L,(-6L),0x5473L},{1L,0x7121L,0x0E0AL,1L,0x4D3FL,0x4C8AL,0x8638L},{0L,1L,0xF8F6L,6L,(-7L),0xD02BL,7L},{(-1L),0x0A1EL,0xC7F2L,1L,0xB6D7L,0x224BL,0xB6D7L}},{{0xA55FL,6L,6L,0xA55FL,0x9E4BL,0xF8F6L,(-7L)},{0x4D3FL,0x544FL,0L,1L,1L,0xD8F0L,0L},{0xF1D9L,1L,(-8L),(-1L),1L,0x564DL,(-7L)},{0xB6D7L,0x4C8AL,0x5EACL,0x0A1EL,0x5EACL,0x4C8AL,0xB6D7L}}};
                    int i, j, k;
                    g_3 = ((g_641[2] > ((safe_sub_func_int32_t_s_s(((((l_1241[3] > ((((safe_mod_func_uint32_t_u_u(((safe_add_func_int16_t_s_s(0L, ((g_533 == (g_656 , (l_1252[1] == (g_540[1][1] < l_1243)))) == g_339))) != g_3), g_519)) | g_387) | l_1242) | g_440)) != l_26) > g_519) ^ l_1253[2][0][5]), 1UL)) == 1UL)) & (-1L));
                    for (g_533 = 0; (g_533 <= 3); g_533 += 1)
                    {
                        int l_1267 = 0L;
                        unsigned l_1268 = 4294967295UL;
                        int i;
                        l_1243 = (g_641[(g_533 + 2)] && ((g_656 , (func_71(l_1254, (safe_mod_func_int8_t_s_s(l_1218[1][0], (safe_sub_func_int8_t_s_s((!((func_11((safe_sub_func_uint8_t_u_u((safe_add_func_uint8_t_u_u(((((safe_rshift_func_uint16_t_u_s(((safe_mod_func_uint8_t_u_u((g_32 && l_1253[2][1][4]), l_1242)) <= (g_641[0] == g_339)), l_1267)) >= 1UL) , g_32) < 0xF562L), g_533)), g_519)), g_387, l_1242, l_1268, g_540[2][0]) != 0xAD7AL) > 4294967295UL)), 0xE3L)))), g_32) , l_1242)) >= g_1204));
                        g_64[4][3][0] = (safe_mod_func_int32_t_s_s(((func_68(g_32, l_1271) >= ((safe_unary_minus_func_int8_t_s(((0xCC03E9C9L != (safe_mod_func_int32_t_s_s(l_1252[1], (~(g_656 >= (0x073556FAL && ((g_656 >= g_540[2][4]) || g_656))))))) != g_540[2][0]))) != l_1242)) != l_1253[6][1][6]), 0x5E642752L));
                        return g_32;
                    }
                    l_1243 = (-1L);
                }
                l_1275 = g_339;
                l_1218[1][2] = ((safe_mod_func_uint8_t_u_u((((l_1278 <= ((((safe_add_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u((l_1252[3] ^ g_3), (safe_sub_func_int32_t_s_s(((l_1271 , (g_656 & 1L)) & (safe_lshift_func_int8_t_s_s(l_1203, ((((safe_mod_func_int32_t_s_s(l_1289, ((func_11((g_540[2][0] <= g_1240), g_656, g_2, l_1290, g_540[2][0]) == 0xF5C4L) ^ l_1203))) != (-7L)) < g_387) , l_1289)))), g_519)))), g_387)) != l_26) == g_1204) < g_32)) && g_339) != 0x7A8166AEL), (-5L))) == g_533);
            }
        }
        else
        {
            int l_1295 = 8L;
            short l_1319 = 1L;
            char l_1331 = 0xF2L;
            l_1218[1][5] = (((safe_mod_func_uint32_t_u_u(((safe_rshift_func_int8_t_s_s(l_1295, 2)) , (safe_unary_minus_func_uint32_t_u((safe_sub_func_uint8_t_u_u((!(safe_rshift_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u(l_1252[1], 5)), l_1241[3]))), ((g_540[2][0] | (safe_lshift_func_uint16_t_u_s((safe_lshift_func_int8_t_s_s((func_68(l_1252[1], (safe_mod_func_uint32_t_u_u((g_540[0][1] <= ((safe_add_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_u(((0xE8L && (safe_lshift_func_int8_t_s_s(((safe_mod_func_uint8_t_u_u(((safe_lshift_func_int8_t_s_s((+(-1L)), l_1218[1][2])) | l_1241[3]), g_1240)) || 65531UL), g_906))) >= 0x1730L), g_656)) < 255UL), g_1204)) , l_1295)), 0x32A40C09L))) < l_1243), l_1243)), 6))) , 0x1AL)))))), 0xD8EA4503L)) != l_1241[3]) != l_1319);
            for (l_1243 = 2; (l_1243 >= 0); l_1243 -= 1)
            {
                int l_1326 = 1L;
                l_1218[1][2] = 0L;
                g_2 = l_1218[0][3];
                l_1325 = (g_32 >= (g_641[3] > (((g_387 || ((9UL && (safe_add_func_int8_t_s_s((l_1243 ^ ((g_32 | (safe_mod_func_int32_t_s_s(g_519, g_656))) && 0L)), 1L))) >= l_1324[2])) == g_1204) , 0UL)));
                for (g_1204 = 0; (g_1204 <= 2); g_1204 += 1)
                {
                    return l_1326;
                }
            }
            g_3 ^= l_1319;
            l_1218[0][2] = (((((safe_add_func_uint16_t_u_u(l_1324[2], (((l_1252[1] == (((func_27((((g_622 <= func_59(((safe_rshift_func_uint8_t_u_u(g_540[1][5], 1)) , (0UL >= func_45(g_440, (((((-2L) == (func_59(g_528, l_1319, g_1240, l_1319) | l_1252[1])) | g_622) , l_1331) >= l_1218[1][7]), g_32, l_1290, l_1241[3]))), g_32, g_540[1][2], l_1243)) >= g_1204) == g_622), g_622, l_1319, l_1278) , l_1325) & g_656) <= l_1252[2])) < l_1203) < g_540[2][0]))) <= g_3) >= l_1252[4]) && 0L) < l_1332);
        }
        for (g_387 = 0; (g_387 <= 1); g_387 += 1)
        {
            unsigned l_1333 = 0xBE3981DEL;
            int l_1363 = 5L;
            for (g_1204 = 0; (g_1204 <= 3); g_1204 += 1)
            {
                int i, j;
                return l_1218[g_387][g_1204];
            }
            for (l_1203 = 0; (l_1203 <= 1); l_1203 += 1)
            {
                unsigned l_1340 = 0xF156C1CAL;
                short l_1381 = (-1L);
                short l_1382 = (-1L);
                char l_1383 = 0xF4L;
                l_1243 &= l_1241[3];
                if (l_1333)
                    continue;
                if (l_1252[1])
                    continue;
                for (l_1278 = 0; (l_1278 <= 1); l_1278 += 1)
                {
                    unsigned l_1336 = 4294967287UL;
                    const short l_1384 = 1L;
                    for (l_1290 = 0; (l_1290 <= 1); l_1290 += 1)
                    {
                        int i, j, k;
                        g_64[(l_1290 + 2)][(g_387 + 4)][l_1290] = (((func_68(((((safe_sub_func_uint8_t_u_u(g_64[(g_387 + 1)][(g_387 + 2)][l_1203], (g_339 | (func_45(l_1252[1], (l_1336 >= (safe_lshift_func_uint16_t_u_s(((1UL < (!func_45(l_1336, g_339, g_622, l_1241[3], l_1332))) != 0xE5L), 11))), l_1339, g_533, g_387) , 0x8191L)))) , (-5L)) && l_1336) & l_1340), g_64[3][4][1]) , 0x7F1AD23EL) || l_1341[2][2]) || 0x31AD5475L);
                        g_64[4][1][1] = (((safe_sub_func_uint32_t_u_u((0x56L <= (g_1240 , (safe_rshift_func_int16_t_s_u((safe_lshift_func_int8_t_s_u((-3L), g_641[8])), g_387)))), ((g_148 != g_622) >= g_64[(g_387 + 1)][(g_387 + 2)][l_1203]))) , l_1340) <= (-6L));
                    }
                    for (g_339 = (-2); (g_339 != 4); ++g_339)
                    {
                        short l_1354 = (-3L);
                        int l_1355 = 0xF22A9F22L;
                        const unsigned l_1365 = 0x7A944142L;
                        l_1355 |= (safe_sub_func_int8_t_s_s(l_1340, ((l_1333 >= g_3) & (safe_lshift_func_int16_t_s_u((l_1354 ^ g_387), 15)))));
                        g_2 = ((((safe_unary_minus_func_uint8_t_u((((0xF253L > (((g_641[0] , ((l_1354 >= (g_641[9] > (l_1354 , l_1218[1][2]))) < (((safe_mod_func_uint8_t_u_u((((safe_add_func_int32_t_s_s((l_1336 ^ g_519), (((safe_lshift_func_int8_t_s_s((((l_1241[3] <= l_1363) , l_1333) < 0x7B4EL), l_1243)) != g_1240) <= l_1355))) < (-9L)) , 255UL), 0x60L)) | l_1364) | l_1340))) , 0xFCL) , g_387)) >= l_1324[0]) , l_1363))) && l_1365) <= 0xA775AC6DL) , l_1365);
                        l_1218[1][2] ^= (safe_rshift_func_int16_t_s_s(func_45((((safe_unary_minus_func_uint8_t_u(l_1365)) | g_148) != (l_1365 , (safe_rshift_func_int16_t_s_u(((safe_mod_func_int16_t_s_s((0x2AL && (((safe_rshift_func_uint8_t_u_s((+(g_656 || func_45(((g_32 , (((~(safe_sub_func_uint32_t_u_u((safe_mod_func_uint8_t_u_u(func_45((g_148 > (safe_add_func_int32_t_s_s((g_906 != (-1L)), l_1336))), g_440, g_656, g_339, l_1381), 0x13L)), g_387))) & l_1364) | g_519)) , l_1340), l_1324[2], l_1365, l_1365, l_1354))), 5)) & l_1382) <= l_1241[3])), 0xBC69L)) & l_1354), l_1339)))), g_64[0][1][0], l_1383, l_1382, l_1363), g_1204));
                        g_906 = ((0x01D4L ^ (l_1324[2] , ((l_1384 >= ((l_1324[2] | g_540[2][0]) && g_519)) & 5L))) || func_45(g_440, ((safe_add_func_int32_t_s_s(((func_45(g_540[2][0], l_1332, g_622, l_1324[2], g_3) ^ g_3) >= 9L), 0x652829A4L)) & g_533), l_1387, g_519, l_1336));
                    }
                    if (l_1384)
                        break;
                    if (l_1363)
                        continue;
                }
            }
        }
        l_1243 = (g_32 > g_622);
        g_3 ^= ((safe_sub_func_int16_t_s_s(g_1390, ((+((((((l_1218[0][0] | (l_1243 ^ (((safe_add_func_uint8_t_u_u(l_1290, ((0xBAL && (safe_rshift_func_uint8_t_u_s((safe_rshift_func_int16_t_s_u(l_1203, 10)), 6))) < (g_387 & ((safe_sub_func_uint16_t_u_u(((safe_sub_func_int32_t_s_s(g_1204, (l_1252[1] >= g_387))) && l_1218[0][3]), 0xDBB3L)) || l_1290))))) , g_622) != 0x17F28797L))) == g_656) ^ g_540[2][5]) , g_32) & l_1324[4]) <= g_148)) , 0x09A0L))) > 0x95L);
    }
    else
    {
        char l_1408 = (-1L);
        int l_1439 = 1L;
        unsigned l_1498[2][10][3] = {{{4294967287UL,4294967292UL,6UL},{0xB8486A42L,0x3FE0D897L,0x3FE0D897L},{6UL,4294967287UL,1UL},{0x19885E0DL,0xB8486A42L,0UL},{6UL,6UL,1UL},{0xB8486A42L,0x19885E0DL,4294967295UL},{4294967287UL,6UL,4294967287UL},{0x3FE0D897L,0xB8486A42L,3UL},{4294967292UL,4294967287UL,4294967287UL},{3UL,0x3FE0D897L,4294967295UL}},{{0x72AFE912L,4294967292UL,1UL},{3UL,3UL,0UL},{4294967292UL,0x72AFE912L,1UL},{0x3FE0D897L,3UL,0x3FE0D897L},{4294967287UL,4294967293UL,1UL},{4294967295UL,0xB8486A42L,0xB8486A42L},{1UL,4294967292UL,0x72AFE912L},{0x3FE0D897L,4294967295UL,4294967295UL},{1UL,1UL,1UL},{4294967295UL,0x3FE0D897L,0x19885E0DL}}};
        char l_1515 = (-1L);
        unsigned short l_1548 = 65532UL;
        int i, j, k;
        for (g_622 = 14; (g_622 > 9); g_622--)
        {
            const short l_1403 = 0x0D9FL;
            short l_1411 = 9L;
            int l_1412 = 1L;
            g_64[1][3][1] = g_440;
            if (g_148)
                continue;
            l_1412 = (((((!((l_1403 == (safe_lshift_func_int16_t_s_s((+((0UL & ((((safe_lshift_func_int16_t_s_s(0xE536L, func_68(l_1408, (safe_lshift_func_int8_t_s_s(((func_33((l_1290 != g_64[4][1][1]), g_64[4][4][0], (g_540[2][0] <= ((0L ^ 3UL) <= l_1403))) , l_1290) & l_1403), l_1408))))) | 9L) , g_641[6]) , g_906)) >= g_540[2][0])), 6))) , l_1408)) > 65535UL) , l_1408) , g_64[2][0][0]) & l_1411);
        }
        if (((((((g_3 < (safe_add_func_int16_t_s_s((g_622 | (l_26 >= (((safe_rshift_func_uint16_t_u_u((g_32 , (safe_add_func_int16_t_s_s((((safe_mod_func_int8_t_s_s((((safe_add_func_int16_t_s_s((safe_rshift_func_int16_t_s_s(l_1408, l_1408)), (safe_rshift_func_uint16_t_u_s((safe_add_func_uint32_t_u_u(0x743050B1L, g_533)), 4)))) < ((func_71(l_1408, g_656, l_1429[2][0][1]) && g_519) | l_1408)) , l_1429[2][0][1]), g_1240)) <= (-5L)) & 0xBD6369EAL), 0xB726L))), 13)) <= g_32) || g_1390))), (-4L)))) | l_1408) < 0x48B1387AL) >= g_533) <= 6UL) >= g_440))
        {
            int l_1444 = 0L;
            unsigned l_1468 = 4294967294UL;
            for (l_1408 = 1; (l_1408 >= (-18)); l_1408 = safe_sub_func_uint32_t_u_u(l_1408, 2))
            {
                unsigned char l_1436 = 1UL;
                for (g_1204 = 0; (g_1204 >= 15); ++g_1204)
                {
                    int l_1442 = 1L;
                    int l_1443 = 0xA3CFEC05L;
                    int l_1447[7] = {(-6L),(-6L),(-6L),(-6L),(-6L),(-6L),(-6L)};
                    int i;
                    g_1445 ^= ((safe_sub_func_int16_t_s_s(((l_1436 , l_1324[2]) == ((l_26 > 0x550EL) < ((0xAC10L & g_656) <= func_59((((((safe_add_func_int8_t_s_s((+((l_1439 > ((g_387 || ((safe_sub_func_int8_t_s_s(1L, g_32)) & l_1442)) , l_1443)) >= 0x270EL)), g_339)) != 8L) , l_1444) & g_656) || l_1436), g_148, l_1442, l_1429[2][1][1])))), l_1442)) & l_1218[1][2]);
                    if ((func_27(l_1218[1][2], l_1436, l_1444, g_1446) , g_1390))
                    {
                        g_64[0][3][0] = 0x3AA04485L;
                        l_1447[0] &= g_148;
                    }
                    else
                    {
                        unsigned short l_1448 = 3UL;
                        g_3 = func_17(l_1448, func_27(((func_27(g_440, g_440, (((l_1443 , l_1449) ^ 1UL) == g_1240), (((((safe_rshift_func_int16_t_s_s((safe_add_func_int32_t_s_s(func_54((1UL | (g_540[2][0] , g_2)), g_1240, l_1429[2][0][1], l_1444), l_1454)), 8)) , 1L) < l_1252[1]) & l_1443) >= g_540[1][0])) | g_656) ^ l_1439), g_540[2][0], g_540[1][1], l_1436), g_1446, g_656, l_1448);
                        if (g_32)
                            continue;
                        l_1447[0] |= (func_11(l_1448, l_1436, (func_59(g_540[2][0], ((g_339 != l_1290) , g_2), l_1444, g_3) <= l_1444), g_622, g_32) || g_148);
                    }
                    g_906 = func_45(((l_1444 >= (l_1444 > g_64[2][0][1])) , l_1444), g_1240, (g_1204 , (g_1445 & (safe_lshift_func_uint8_t_u_u((((((g_1240 ^ l_1442) , l_1439) ^ 0L) | l_1439) <= l_1443), l_1252[4])))), g_64[4][1][0], g_519);
                    l_1447[3] = l_1444;
                }
                l_1439 = (g_540[0][2] , ((-1L) ^ (((func_45(g_440, g_656, (func_54((((((g_641[0] | (safe_lshift_func_int8_t_s_s(((safe_add_func_int32_t_s_s(g_656, (safe_add_func_int32_t_s_s((~((l_1436 | l_1436) & (l_1463 & l_1454))), 0x2C4FFEF9L)))) != l_1436), l_1449))) != g_1446) && g_32) || g_533) >= 254UL), g_440, l_1436, l_1444) , 0xF6L), l_1444, l_1439) >= g_440) < 1UL) && g_339)));
                g_906 = ((l_1439 >= l_1252[1]) ^ (l_1444 <= func_11(l_1436, (0xBE12CB99L || ((safe_lshift_func_uint16_t_u_s(((l_1454 | 0xE8L) != (safe_lshift_func_uint8_t_u_u(0UL, ((l_1444 >= g_540[1][3]) == 0xD6359DB4L)))), l_1408)) > g_641[3])), l_1324[2], l_1436, l_1468)));
            }
            g_64[3][0][1] &= (l_1278 != g_32);
            return l_1439;
        }
        else
        {
            int l_1476 = 1L;
            unsigned l_1495 = 0x368EDCFEL;
            l_1439 = l_1429[2][0][1];
            for (l_1203 = 0; (l_1203 == 34); ++l_1203)
            {
                unsigned char l_1475 = 250UL;
                int l_1484 = 0x5B6BB146L;
                short l_1494 = 0xEF77L;
                if ((safe_lshift_func_uint16_t_u_s((safe_mod_func_uint32_t_u_u(0x2E517BB3L, 0xF3FBE0C9L)), l_1475)))
                {
                    if (l_1476)
                        break;
                    for (l_26 = 0; (l_26 <= 17); l_26 = safe_add_func_int32_t_s_s(l_26, 2))
                    {
                        g_3 = l_1408;
                        g_64[2][2][0] &= (!g_540[2][0]);
                        g_2 &= 1L;
                        l_1218[1][1] = l_26;
                    }
                    g_64[2][0][0] = g_3;
                }
                else
                {
                    unsigned char l_1479 = 252UL;
                    if ((l_1479 , (safe_lshift_func_int16_t_s_s((g_906 < (safe_lshift_func_int16_t_s_s(l_1475, (g_519 || g_32)))), l_1479))))
                    {
                        g_906 = (-9L);
                        g_64[0][0][1] = (l_1476 ^ 1UL);
                        g_3 &= g_2;
                        l_1484 &= (g_339 , (l_1476 && 0x4A44E640L));
                    }
                    else
                    {
                        unsigned l_1487 = 0x23641568L;
                        g_64[3][2][1] = (g_339 < (l_1476 && (0xBEA25BFAL == g_540[1][5])));
                        l_1476 = (l_1484 == (((1UL && func_45(g_519, g_641[7], l_1479, g_519, (((l_1479 , (safe_add_func_uint8_t_u_u(l_1487, (g_3 , (-1L))))) >= l_1484) , 0x0AFEL))) | g_148) | 1L));
                        l_1439 = (~((((((safe_rshift_func_uint16_t_u_u(0x9E54L, l_1479)) >= 1L) == (func_11((l_1476 , (g_731 > l_1218[1][2])), (safe_sub_func_int16_t_s_s(0xCF33L, (((safe_rshift_func_int8_t_s_s(((g_32 ^ g_540[2][5]) , l_1439), 6)) < g_3) , g_656))), l_1476, l_1487, g_622) && l_1487)) , l_1408) && g_64[0][0][0]) | g_3));
                        l_1495 = (g_656 , l_1494);
                    }
                    if (g_64[4][5][1])
                        break;
                    if (g_528)
                        continue;
                }
            }
            l_1218[0][2] &= (((func_27(l_1408, (safe_mod_func_uint8_t_u_u((l_1498[0][0][0] || func_33((l_1463 <= g_641[0]), (safe_add_func_int32_t_s_s(((safe_rshift_func_int8_t_s_u((safe_rshift_func_uint16_t_u_s((safe_rshift_func_uint16_t_u_u(((safe_rshift_func_int8_t_s_u((g_622 , ((l_1498[1][9][1] > g_387) < ((((((safe_mod_func_uint8_t_u_u(((g_148 & (safe_sub_func_int8_t_s_s(((safe_lshift_func_int16_t_s_s((l_1498[0][0][0] , l_1515), 11)) > 250UL), g_1445))) && 0L), g_533)) ^ l_26) | g_387) | g_32) > g_32) || g_1240))), l_1476)) ^ 5L), l_1516)), 9)), g_1204)) | g_1445), 0xDA72DDC5L)), l_1498[0][0][0])), 3L)), g_1240, l_1515) == l_1495) ^ l_1517) <= 2L);
        }
        for (g_1240 = 0; (g_1240 < 58); ++g_1240)
        {
            unsigned l_1520 = 0x0DBA03FDL;
            unsigned l_1547[10][8][3] = {{{4294967290UL,4294967295UL,0xEE3457BEL},{4294967295UL,0x97C10337L,0xD1A280AFL},{0x99CFF1EFL,1UL,0x99CFF1EFL},{0x7D00E4C9L,0x755765A0L,4294967286UL},{0x6A7FE0B7L,4294967295UL,0xEE3457BEL},{4294967295UL,4294967295UL,0x755765A0L},{0x93FF2FC8L,4294967295UL,0x6F4D2278L},{4294967295UL,0x2891604AL,6UL}},{{0x6A7FE0B7L,4294967295UL,0x62E73D0AL},{0x7D00E4C9L,0x7D00E4C9L,0x0ED79892L},{0x99CFF1EFL,2UL,0x93FF2FC8L},{4294967295UL,0x2891604AL,4294967286UL},{4294967290UL,1UL,1UL},{4294967291UL,4294967295UL,4294967286UL},{0x7213A2D2L,0x0352A056L,0x93FF2FC8L},{4294967295UL,0x755765A0L,0x0ED79892L}},{{0x51631C3FL,4294967295UL,0x62E73D0AL},{7UL,0x97C10337L,6UL},{0x7213A2D2L,2UL,0x6F4D2278L},{0x7D00E4C9L,4294967294UL,0x755765A0L},{4294967290UL,2UL,0xEE3457BEL},{0UL,0x97C10337L,4294967286UL},{0x99CFF1EFL,4294967295UL,0x99CFF1EFL},{4294967291UL,0x755765A0L,6UL}},{{0xF5EAECC0L,4294967295UL,0xDF1FE99BL},{4294967295UL,0x7D00E4C9L,4294967295UL},{0x7213A2D2L,4294967286UL,0x99CFF1EFL},{4294967295UL,4294967286UL,0x755765A0L},{0xF5EAECC0L,4294967295UL,1UL},{0x1A5181CAL,0x97C10337L,4294967294UL},{0x93FF2FC8L,0x0352A056L,0x7213A2D2L},{4294967291UL,4294967286UL,6UL}},{{0x51631C3FL,0xF0B9ACC8L,0xEE3457BEL},{0x97C10337L,0x7D00E4C9L,6UL},{0xEB392587L,1UL,0x7213A2D2L},{4294967295UL,4294967294UL,4294967294UL},{0x6A7FE0B7L,4294967286UL,1UL},{0UL,0xF3C71A3CL,0x755765A0L},{0xEB392587L,0x0352A056L,0x99CFF1EFL},{0x1A5181CAL,0x2891604AL,4294967295UL}},{{0x51631C3FL,0x0352A056L,0xDF1FE99BL},{0x7D00E4C9L,0xF3C71A3CL,6UL},{0x93FF2FC8L,4294967286UL,0x93FF2FC8L},{0x97C10337L,4294967294UL,0x25E33808L},{0xF5EAECC0L,1UL,0xDF1FE99BL},{0UL,0x7D00E4C9L,4294967294UL},{0x7213A2D2L,0xF0B9ACC8L,0x99CFF1EFL},{0UL,4294967286UL,0x0ED79892L}},{{0xF5EAECC0L,0x0352A056L,1UL},{0x97C10337L,0x97C10337L,4294967295UL},{0x93FF2FC8L,4294967295UL,0x7213A2D2L},{0x7D00E4C9L,4294967286UL,0x25E33808L},{0x51631C3FL,4294967286UL,0xEE3457BEL},{0x1A5181CAL,0x7D00E4C9L,0x25E33808L},{0xEB392587L,4294967295UL,0x7213A2D2L},{0UL,4294967294UL,6UL}},{{4294967290UL,0x0352A056L,4294967289UL},{0xF3C71A3CL,0x7D00E4C9L,0xD1A280AFL},{0x93FF2FC8L,4294967292UL,0xEB392587L},{4294967295UL,0x755765A0L,0x25E33808L},{1UL,4294967292UL,1UL},{4294967295UL,0x7D00E4C9L,0x2891604AL},{0x6F4D2278L,0x0352A056L,0x6F4D2278L},{0UL,0x25E33808L,0xE0E98295L}},{{0x51631C3FL,4294967295UL,1UL},{0xF3C71A3CL,7UL,6UL},{0x99CFF1EFL,4294967295UL,0xEB392587L},{0xF3C71A3CL,4294967294UL,4294967286UL},{0x51631C3FL,4294967292UL,4294967289UL},{0UL,4294967295UL,0x25E33808L},{0x6F4D2278L,0UL,0x99CFF1EFL},{4294967295UL,4294967294UL,0xE0E98295L}},{{1UL,0x0352A056L,0x62E73D0AL},{4294967295UL,7UL,0xE0E98295L},{0x93FF2FC8L,2UL,0x99CFF1EFL},{0xF3C71A3CL,0x25E33808L,0x25E33808L},{4294967290UL,4294967295UL,4294967289UL},{1UL,0x7D00E4C9L,4294967286UL},{0x93FF2FC8L,0UL,0xEB392587L},{0UL,0x755765A0L,6UL}}};
            char l_1549 = 0xC6L;
            int l_1554 = (-1L);
            int i, j, k;
            l_1520 = (~(-1L));
            for (l_1203 = 0; (l_1203 >= 16); l_1203 = safe_add_func_uint16_t_u_u(l_1203, 2))
            {
                short l_1531 = 0xCD57L;
                int l_1546 = (-10L);
                g_906 = (((l_1454 , (safe_lshift_func_uint8_t_u_u(((((~((safe_lshift_func_uint16_t_u_s(l_1218[1][2], (((safe_add_func_uint16_t_u_u((safe_add_func_int32_t_s_s(g_3, (g_64[4][0][1] < l_1531))), g_533)) > func_45(l_1515, (safe_add_func_int16_t_s_s(l_1520, ((g_656 < l_1531) && 0x230EL))), l_1531, g_519, g_656)) | 0x49L))) <= g_1204)) <= g_440) ^ 0x5E93A008L) || g_540[2][2]), g_519))) , l_1429[1][1][0]) & g_533);
                if ((0x2FFEL && func_17((safe_rshift_func_int16_t_s_u((safe_add_func_int32_t_s_s(func_59((safe_rshift_func_int8_t_s_u(((((g_440 > (safe_add_func_int8_t_s_s(g_641[4], (l_1218[1][2] , 0x5FL)))) || ((g_339 < (safe_add_func_uint8_t_u_u(((safe_sub_func_uint16_t_u_u((g_519 || g_148), (((l_1520 | l_1546) != l_1517) & 4294967295UL))) , 0xEEL), g_1240))) != l_1547[1][2][0])) < 0x8407L) , g_339), 5)), l_1439, g_148, l_1548), l_1515)), l_1531)), g_32, l_1531, l_1547[1][2][0], l_1549)))
                {
                    short l_1560 = (-1L);
                    if (((((safe_mod_func_int32_t_s_s(g_641[0], (((0x82045C5CL ^ ((((((l_1516 < (safe_lshift_func_uint16_t_u_u(l_1554, ((l_1555[8] && (3UL ^ (safe_rshift_func_uint16_t_u_s(g_656, (safe_rshift_func_uint16_t_u_s(1UL, 11)))))) != (-1L))))) >= 9L) != g_339) >= l_1554) <= 1UL) | l_1549)) > l_1547[5][6][2]) & l_1560))) , l_1560) < 0xBAL) != 0x3ECA7A81L))
                    {
                        return l_1547[2][4][2];
                    }
                    else
                    {
                        unsigned l_1561 = 1UL;
                        l_1561 ^= g_540[2][0];
                        g_64[4][1][1] = l_1252[3];
                        l_1463 = 0xD76E413AL;
                    }
                    for (g_148 = 0; (g_148 > 8); g_148++)
                    {
                        g_64[1][0][1] = (-8L);
                        return g_519;
                    }
                }
                else
                {
                    for (l_1546 = 15; (l_1546 <= 26); l_1546 = safe_add_func_uint8_t_u_u(l_1546, 7))
                    {
                        unsigned char l_1566 = 0x8BL;
                        l_1566 = l_1547[3][6][2];
                        if (g_440)
                            break;
                        if (l_26)
                            continue;
                        if (l_1546)
                            break;
                    }
                }
                for (l_1454 = 24; (l_1454 < 25); l_1454 = safe_add_func_uint32_t_u_u(l_1454, 8))
                {
                    g_906 |= g_64[3][1][1];
                    if (l_1498[0][0][0])
                        break;
                }
            }
            g_906 = 0x8A034526L;
            if (g_622)
                continue;
        }
    }
    return l_1429[2][0][1];
}







static unsigned char func_11(unsigned p_12, unsigned short p_13, unsigned p_14, int p_15, unsigned short p_16)
{
    unsigned l_1183 = 0x54E2AF91L;
    l_1183 = (-6L);
    if ((0x9694L <= g_440))
    {
        for (g_731 = 0; g_731 < 10; g_731 += 1)
        {
            g_641[g_731] = 0x9CD54A96L;
        }
        for (g_339 = 0; g_339 < 3; g_339 += 1)
        {
            for (p_15 = 0; p_15 < 6; p_15 += 1)
            {
                g_540[g_339][p_15] = 0xA184L;
            }
        }
    }
    else
    {
        unsigned short l_1184 = 0xFF04L;
        return l_1184;
    }
    return p_14;
}







static short func_17(unsigned p_18, unsigned char p_19, unsigned p_20, int p_21, unsigned short p_22)
{
    unsigned l_901 = 0x8D6547C2L;
    int l_934 = 0x30424874L;
    int l_938 = 0x933C0CE1L;
    int l_983 = 0x04812642L;
    short l_1180 = (-1L);
    int l_1181 = 1L;
    unsigned l_1182 = 0x3F28736CL;
    if ((safe_rshift_func_int8_t_s_s((safe_mod_func_uint8_t_u_u(((p_19 >= (safe_lshift_func_int8_t_s_s(((((((l_901 , p_18) ^ (((+0x492EL) & ((((func_68(g_519, ((safe_rshift_func_uint16_t_u_s(0x014CL, 7)) | g_32)) , (safe_add_func_uint16_t_u_u(0x1050L, l_901))) || g_622) > 65526UL) >= 0x1CD70946L)) < g_656)) , 255UL) , p_21) , l_901) > g_540[1][0]), l_901))) , g_906), 252UL)), 3)))
    {
        int l_909 = 0L;
        int l_918 = 0x3D4BB524L;
        l_918 = (safe_lshift_func_int8_t_s_s(((g_519 | l_909) > func_59((g_656 && 0xC3L), ((0x72E3E7ABL != (safe_sub_func_uint8_t_u_u(g_540[2][5], (~(-5L))))) , ((safe_sub_func_uint8_t_u_u((p_20 || (safe_sub_func_uint32_t_u_u((safe_mod_func_int32_t_s_s(0x0C26942AL, p_22)), g_622))), p_21)) & l_909)), p_21, p_18)), 2));
        g_2 = (safe_lshift_func_uint8_t_u_s(g_641[0], 0));
    }
    else
    {
        int l_923 = (-1L);
        int l_933 = 0xF8AAD1DFL;
        int l_984 = 0L;
        char l_1016[7] = {1L,1L,4L,1L,1L,4L,1L};
        char l_1137 = 0x6EL;
        char l_1146 = 0xD6L;
        int i;
        if ((((((g_440 | l_901) || 5L) , ((safe_rshift_func_uint8_t_u_u(g_3, 3)) , 0xE167L)) | (l_901 > ((((+((p_19 || (p_18 > (l_901 , 5UL))) && (-10L))) ^ 0x3A39L) , g_540[2][0]) | l_923))) , 0x7039150BL))
        {
            short l_932 = 0x5BF3L;
            int l_935 = 5L;
            int l_1017 = 1L;
            short l_1070 = 0x18CBL;
            l_935 = func_54(l_923, l_901, ((((safe_sub_func_uint32_t_u_u((l_923 >= ((((247UL > (func_27(p_19, g_906, (safe_rshift_func_int16_t_s_s(((safe_sub_func_int8_t_s_s((-1L), 0x3BL)) | p_18), 10)), l_932) ^ p_19)) && p_18) ^ g_656) < l_901)), g_540[0][1])) < l_923) >= l_923) , l_933), l_934);
            for (p_21 = 0; (p_21 <= (-22)); --p_21)
            {
                for (g_440 = 0; (g_440 <= 2); g_440 += 1)
                {
                    int l_939 = 0x1098E6EDL;
                    int i, j;
                    l_938 |= g_540[g_440][(g_440 + 3)];
                    l_939 = p_21;
                }
                return g_2;
            }
            if ((safe_lshift_func_int8_t_s_u(4L, l_933)))
            {
                short l_946 = (-3L);
                for (l_934 = 1; (l_934 <= 5); ++l_934)
                {
                    unsigned char l_953 = 0x36L;
                    int l_954 = (-1L);
                    l_954 = (safe_mod_func_int32_t_s_s((l_946 & (safe_lshift_func_int16_t_s_u((safe_add_func_int32_t_s_s(g_622, g_339)), (l_933 | (((((safe_unary_minus_func_int8_t_s(0L)) > (func_45(l_934, (((safe_unary_minus_func_uint32_t_u((l_932 ^ (g_148 , 65535UL)))) , l_953) >= 4294967289UL), p_19, p_20, g_656) > (-6L))) > 0xFAE64F6EL) || l_933) <= l_953))))), 0xFD2A3464L));
                }
            }
            else
            {
                int l_959 = 0x11A9C50AL;
                unsigned short l_982 = 0x0720L;
                l_983 ^= ((func_68((safe_rshift_func_int16_t_s_s((safe_rshift_func_int16_t_s_s(l_959, (safe_mod_func_uint8_t_u_u(((((safe_add_func_int16_t_s_s(0L, ((!(safe_lshift_func_uint16_t_u_s(l_938, 0))) , (((safe_mod_func_uint32_t_u_u((safe_lshift_func_int16_t_s_u(((safe_mod_func_uint8_t_u_u(0xBFL, (safe_mod_func_uint32_t_u_u((safe_sub_func_uint32_t_u_u((g_440 ^ (g_387 | (255UL <= l_935))), (safe_mod_func_int8_t_s_s(((((safe_add_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s((g_656 < g_528), l_935)), l_923)) && l_982) ^ l_934) ^ g_339), l_982)))), p_21)))) <= l_934), 4)), 5L)) >= p_21) == g_148)))) < l_933) , l_982) > 0x6D56L), 0x20L)))), l_923)), l_901) , (-1L)) >= p_20);
            }
            for (p_19 = 0; (p_19 <= 2); p_19 += 1)
            {
                short l_998 = 0xED46L;
                int l_1018[2][3][5] = {{{6L,0x89EE9397L,0L,0L,0L},{0x89EE9397L,6L,0x89EE9397L,0L,0L},{0x1ED60943L,(-1L),0L,(-1L),0x1ED60943L}},{{0L,0x1ED60943L,(-1L),0L,(-1L)},{(-1L),(-1L),0xD44182A6L,0L,0x89EE9397L},{0x1ED60943L,0L,0L,0x1ED60943L,(-1L)}}};
                int l_1065 = 0x8E4593A6L;
                int i, j, k;
                if ((g_641[0] < (-1L)))
                {
                    char l_987 = 0x3AL;
                    short l_999 = (-9L);
                    l_984 = ((l_935 & l_923) || 0xCBL);
                    l_987 = (safe_rshift_func_int8_t_s_u(0xB8L, 4));
                    l_984 = ((((g_519 || (safe_sub_func_uint8_t_u_u(0x5CL, l_932))) >= (safe_sub_func_int16_t_s_s((p_22 ^ l_987), ((((safe_lshift_func_int8_t_s_u(((func_68(g_641[0], ((safe_lshift_func_uint8_t_u_s(p_20, ((l_901 && (safe_lshift_func_int16_t_s_s(p_20, g_540[1][3]))) <= p_22))) & 0L)) , p_22) == l_923), p_22)) && p_21) , g_64[4][1][1]) & 0x50L)))) < g_387) | g_540[2][0]);
                    l_999 = l_998;
                }
                else
                {
                    unsigned l_1000[3][4] = {{0xE4E10855L,0xE4E10855L,0x766B18F7L,4294967295UL},{1UL,4294967295UL,1UL,0x766B18F7L},{1UL,0x766B18F7L,0x766B18F7L,1UL}};
                    int l_1023 = 5L;
                    int l_1047 = 0L;
                    int i, j;
                    if ((+p_21))
                    {
                        if (l_1000[2][3])
                            break;
                        if (p_22)
                            continue;
                    }
                    else
                    {
                        l_1018[0][1][1] = (((safe_mod_func_int16_t_s_s((safe_rshift_func_int16_t_s_u((safe_add_func_int16_t_s_s(((+(((func_71((g_519 > ((((safe_rshift_func_uint16_t_u_u(0xBFE2L, g_641[0])) ^ ((safe_lshift_func_uint8_t_u_u(1UL, 4)) <= (p_20 >= ((l_998 | (safe_unary_minus_func_int8_t_s((safe_lshift_func_int8_t_s_u(((p_20 , (5L || 1UL)) >= 0x5B63F499L), 3))))) , g_440)))) || 255UL) > g_32)), l_998, l_934) <= g_3) | 0UL) ^ 0x1F41554DL)) && l_1016[3]), l_1000[0][3])), 3)), 1UL)) , p_22) , l_1017);
                        if (p_22)
                            break;
                    }
                    for (l_998 = 2; (l_998 >= 0); l_998 -= 1)
                    {
                        int i, j;
                        l_1023 = (safe_rshift_func_int16_t_s_s((safe_lshift_func_int8_t_s_s(func_68(g_540[l_998][p_19], g_540[p_19][l_998]), 2)), 2));
                        l_1023 = (safe_sub_func_uint32_t_u_u(p_19, p_21));
                        if (l_1018[0][1][1])
                            break;
                    }
                    for (l_901 = 0; (l_901 <= 28); l_901 = safe_add_func_uint32_t_u_u(l_901, 1))
                    {
                        unsigned l_1036 = 8UL;
                        l_984 = ((g_3 , ((((safe_add_func_int8_t_s_s(((safe_add_func_int32_t_s_s((safe_sub_func_int32_t_s_s((safe_rshift_func_int8_t_s_s(func_68(l_933, l_934), (l_1036 == ((p_19 == g_540[1][3]) <= (safe_lshift_func_uint16_t_u_s(g_540[2][0], ((((g_32 <= g_32) ^ g_622) , 8UL) & p_18))))))), 2L)), g_540[2][0])) | p_21), l_932)) == l_1000[2][3]) < g_656) , p_21)) || p_21);
                        l_1047 &= (((safe_lshift_func_uint8_t_u_s(func_33(l_1018[0][0][0], p_21, func_45((g_148 , p_20), func_45(l_935, g_339, (safe_add_func_uint16_t_u_u((((safe_sub_func_int8_t_s_s((safe_add_func_uint32_t_u_u(4294967293UL, 0x18125F95L)), p_19)) & (-8L)) < g_387), 0xEAF8L)), g_440, p_22), g_519, l_1023, p_20)), g_32)) , l_1017) , (-1L));
                    }
                    for (g_148 = (-18); (g_148 < 57); g_148 = safe_add_func_int16_t_s_s(g_148, 5))
                    {
                        g_2 = (((7UL >= (safe_sub_func_int32_t_s_s(g_641[0], ((!(((safe_add_func_uint16_t_u_u(((+(0x2423L < ((l_1023 , (p_22 == p_22)) || 0xBEDDB95FL))) & (l_923 > 0x4EL)), l_901)) > 0x0EE4L) == 0x64B9C335L)) >= p_21)))) , l_932) | l_1000[2][3]);
                    }
                }
                for (g_339 = (-3); (g_339 < (-4)); g_339 = safe_sub_func_int16_t_s_s(g_339, 7))
                {
                    unsigned l_1056 = 5UL;
                    g_64[2][3][1] = (l_1056 || l_1017);
                    l_938 = (func_45(l_1056, g_540[1][1], (safe_sub_func_int16_t_s_s((safe_add_func_int8_t_s_s((255UL == 0x00L), (safe_sub_func_int8_t_s_s((((((g_622 >= ((((((safe_rshift_func_int8_t_s_s(p_22, 7)) ^ (g_387 || (l_984 < ((func_45(p_21, l_935, l_984, g_3, p_21) >= p_21) > p_22)))) , p_22) == (-1L)) , l_1056) >= (-1L))) < l_932) || l_1056) & l_938) == 254UL), l_1065)))), 0x5AB1L)), g_533, g_440) | l_984);
                    for (p_21 = 0; (p_21 < (-21)); p_21 = safe_sub_func_uint32_t_u_u(p_21, 7))
                    {
                        l_1018[0][1][1] = ((safe_lshift_func_uint16_t_u_u(func_45(g_731, (p_19 != g_540[2][0]), l_1056, g_64[3][4][0], g_339), ((5L == 0x5704L) || g_622))) || l_1070);
                        return g_440;
                    }
                    g_906 ^= (p_20 , g_656);
                }
                if (l_938)
                    continue;
                return l_923;
            }
        }
        else
        {
            unsigned short l_1082 = 0x19FDL;
            int l_1083 = 0xD419FDE1L;
            for (p_18 = 0; (p_18 <= 1); p_18 += 1)
            {
                unsigned char l_1094 = 0x03L;
                int l_1097 = 0x60FCA55BL;
                l_1083 = (safe_add_func_uint8_t_u_u((safe_add_func_int32_t_s_s(((0x9CE20D4DL >= (0x99L & (safe_unary_minus_func_uint16_t_u(p_22)))) < (((safe_add_func_uint16_t_u_u(l_983, (g_641[0] , ((safe_sub_func_uint32_t_u_u((safe_add_func_int8_t_s_s(p_20, (l_1082 & g_731))), p_21)) < p_18)))) , g_540[0][0]) | 0x1CL)), p_20)), g_339));
                for (l_1082 = 0; (l_1082 <= 1); l_1082 += 1)
                {
                    unsigned short l_1112 = 3UL;
                    int l_1119 = 1L;
                    if ((g_148 , (safe_sub_func_uint16_t_u_u(g_519, (safe_add_func_int32_t_s_s(((g_528 != (safe_lshift_func_int8_t_s_u(p_21, 3))) > l_1082), (safe_sub_func_int8_t_s_s(l_1082, ((safe_add_func_int32_t_s_s(((-1L) < g_339), ((l_1016[2] , g_440) == 249UL))) < g_440)))))))))
                    {
                        unsigned l_1098 = 5UL;
                        if (p_19)
                            break;
                        l_1083 = p_19;
                        l_1097 = func_45(g_528, g_148, p_20, g_64[4][4][0], ((l_1094 ^ ((g_64[3][4][0] >= (safe_rshift_func_uint8_t_u_u((p_18 | (((p_21 ^ (l_1082 > l_983)) & g_440) || g_339)), g_622))) , g_533)) , 6UL));
                        l_1098 = (-7L);
                    }
                    else
                    {
                        unsigned l_1101 = 0x67D4DF68L;
                        int l_1109[9][7] = {{(-3L),0xE4941C05L,0xC878450BL,0x95F9BD36L,0x95F9BD36L,0xC878450BL,0xE4941C05L},{(-3L),0xE4941C05L,0xC878450BL,0x95F9BD36L,0x95F9BD36L,0xC878450BL,0xE4941C05L},{(-3L),0xE4941C05L,0xC878450BL,0x95F9BD36L,0x95F9BD36L,0xC878450BL,0xE4941C05L},{(-3L),0xE4941C05L,0xC878450BL,0x95F9BD36L,0x95F9BD36L,0xC878450BL,0xE4941C05L},{(-3L),0xE4941C05L,0xC878450BL,0x95F9BD36L,0x95F9BD36L,0xC878450BL,0xE4941C05L},{(-3L),0xE4941C05L,0xC878450BL,0x95F9BD36L,0x95F9BD36L,0xC878450BL,0xE4941C05L},{(-3L),0xE4941C05L,0xC878450BL,0x95F9BD36L,0x95F9BD36L,0xC878450BL,0xE4941C05L},{(-3L),0xE4941C05L,0xC878450BL,0x95F9BD36L,0x95F9BD36L,0xC878450BL,0xE4941C05L},{(-3L),0xE4941C05L,0xC878450BL,0x95F9BD36L,0x95F9BD36L,0xC878450BL,0xE4941C05L}};
                        int i, j;
                        l_983 &= (-9L);
                        l_938 = (safe_sub_func_int16_t_s_s(((((l_1101 == ((func_59(((!(safe_add_func_int32_t_s_s(g_2, p_21))) == (safe_unary_minus_func_int16_t_s((safe_rshift_func_int16_t_s_u(g_32, p_21))))), (safe_rshift_func_int8_t_s_s(p_20, ((g_540[0][5] != (((g_540[2][0] < (p_22 & 0x4C3CL)) == p_20) == p_22)) == l_1109[0][1]))), p_21, g_3) > g_656) <= l_901)) || p_18) != 1UL) , 0x94FDL), p_20));
                    }
                    l_1112 = (7L || (safe_mod_func_uint8_t_u_u(p_19, 0x01L)));
                    for (l_901 = 0; (l_901 <= 1); l_901 += 1)
                    {
                        int i, j, k;
                        l_984 = (func_71(g_64[(l_901 + 3)][(l_901 + 2)][p_18], (func_45(l_1112, p_22, ((g_519 , func_45((l_901 , (safe_rshift_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u((safe_sub_func_int16_t_s_s((g_387 && ((g_440 != p_18) , (((g_540[0][0] & 0x7FFCL) < p_21) == l_938))), p_18)), 7)), p_18))), p_20, l_1112, p_20, g_2)) ^ 1UL), p_18, g_148) == l_1082), g_533) ^ p_19);
                        l_1119 ^= (0x58L || 0L);
                        g_64[(l_901 + 3)][(l_901 + 2)][p_18] ^= (safe_sub_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s((p_20 < g_540[2][0]), (safe_add_func_uint16_t_u_u(l_1083, l_1082)))), 0xEFL));
                        g_2 = l_1112;
                    }
                }
                for (g_387 = 0; (g_387 <= 1); g_387 += 1)
                {
                    unsigned l_1128 = 0x84FB7591L;
                    if (l_1094)
                        break;
                    for (p_19 = 0; (p_19 <= 1); p_19 += 1)
                    {
                        int i, j, k;
                        l_1128 = ((safe_rshift_func_uint16_t_u_u(func_71(g_64[(p_18 + 1)][g_387][p_18], p_19, l_984), 0)) & p_21);
                    }
                }
            }
            g_906 = 0xCAB5721EL;
        }
        for (p_19 = 0; (p_19 <= 2); p_19++)
        {
            unsigned l_1144 = 0xC93C2F4AL;
            int l_1145 = 0x2C7E437EL;
            int l_1160 = 8L;
            for (g_339 = 0; (g_339 > (-5)); g_339--)
            {
                char l_1159 = 0x32L;
                char l_1161 = (-1L);
                l_1146 = (safe_sub_func_int16_t_s_s(((safe_add_func_int32_t_s_s(l_933, (l_1137 , ((safe_sub_func_int32_t_s_s(((safe_rshift_func_uint8_t_u_s(255UL, (g_32 != (-3L)))) != 0xB3L), ((~(((!((+8UL) , (safe_rshift_func_uint16_t_u_s(l_1144, 11)))) && 0x496F1E5BL) , g_731)) , 8L))) != 0x6B415708L)))) | l_1145), p_21));
                l_1160 = ((safe_rshift_func_int8_t_s_u((safe_rshift_func_int8_t_s_s((-2L), 2)), 7)) != (func_45((p_22 ^ (((g_641[0] , (p_20 & ((safe_sub_func_int32_t_s_s((+l_1145), 0x7B2F98EAL)) & ((((safe_rshift_func_int16_t_s_u(((safe_mod_func_uint16_t_u_u(0xB01DL, (l_934 ^ (((func_45((0xFED99CE0L < l_1137), l_933, p_22, l_1144, g_540[2][0]) != p_21) > l_1159) < l_983)))) == g_540[2][4]), 7)) == p_20) == g_540[1][5]) != 4294967295UL)))) , 0x013AC0CBL) ^ p_19)), l_1159, p_21, g_64[4][3][1], g_148) > l_1159));
                l_1161 = g_64[2][1][0];
            }
        }
        return g_339;
    }
    g_64[1][1][1] = func_27((((((g_540[2][0] <= (((~((safe_sub_func_uint16_t_u_u(func_33(func_59(p_20, l_983, (+(((safe_lshift_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u((safe_add_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u(p_20, ((safe_rshift_func_int8_t_s_u((safe_mod_func_uint8_t_u_u(((func_54((safe_rshift_func_uint16_t_u_u((l_938 , g_519), 12)), ((safe_add_func_uint32_t_u_u((((g_641[2] != p_19) && g_906) >= g_3), g_622)) > p_18), p_20, l_934) != 0x4DL) != (-10L)), p_22)), 7)) ^ 0UL))), p_22)), l_1180)), p_22)) == 0xABL) , 0UL)), g_540[0][0]), p_22, l_1181), (-8L))) , (-4L))) & 0xA0L) , g_906)) != l_901) , (-1L)) >= 0UL) >= 7L), p_18, p_20, g_622);
    l_1182 = 1L;
    g_64[4][5][1] = (0L | p_18);
    return l_1180;
}







static char func_27(int p_28, int p_29, int p_30, unsigned p_31)
{
    int l_609[1];
    unsigned short l_702[2];
    unsigned char l_712 = 1UL;
    int l_865 = 0x11A695EBL;
    int l_886 = 0L;
    int i;
    for (i = 0; i < 1; i++)
        l_609[i] = 0xB80903C9L;
    for (i = 0; i < 2; i++)
        l_702[i] = 0xB7CDL;
    p_30 = (((p_30 , (safe_rshift_func_uint8_t_u_s((func_71(l_609[0], func_59(func_71(l_609[0], g_519, (func_68(func_68(l_609[0], g_339), p_31) ^ 1L)), l_609[0], p_31, g_440), l_609[0]) & l_609[0]), p_30))) == p_30) <= p_29);
    for (g_440 = 0; (g_440 > 7); g_440 = safe_add_func_uint32_t_u_u(g_440, 2))
    {
        short l_618 = 0L;
        int l_644 = 0L;
        short l_701[7][4] = {{(-1L),0L,1L,0x127AL},{(-1L),(-1L),(-1L),(-7L)},{(-1L),(-7L),0x127AL,0L},{(-1L),0x127AL,(-1L),0x6147L},{(-7L),0L,0x6147L,0x6147L},{0x127AL,0x127AL,1L,0L},{0L,(-7L),1L,(-7L)}};
        short l_765 = 4L;
        int l_799 = 0x3CB32549L;
        int i, j;
        p_30 = (-1L);
        if (g_540[0][5])
        {
            int l_642 = 1L;
            for (p_30 = (-26); (p_30 == 11); p_30 = safe_add_func_int8_t_s_s(p_30, 4))
            {
                int l_643 = 1L;
                int l_645 = 0xD6EE6F73L;
                int l_680 = 0xBA6EF52FL;
                for (p_31 = 0; (p_31 <= 1); p_31 += 1)
                {
                    int l_619 = 0x8B4CA2EEL;
                    char l_655 = (-7L);
                    unsigned l_679[1][6];
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 6; j++)
                            l_679[i][j] = 0x7250A4EAL;
                    }
                    if (g_64[p_31][(p_31 + 3)][p_31])
                    {
                        int i, j;
                        if (g_540[(p_31 + 1)][(p_31 + 1)])
                            break;
                    }
                    else
                    {
                        int l_640 = 0L;
                        g_2 |= (safe_sub_func_uint8_t_u_u((safe_add_func_int32_t_s_s(l_618, p_29)), l_619));
                        l_644 = ((((g_519 && (((safe_rshift_func_int8_t_s_u((g_622 , (safe_lshift_func_int8_t_s_u(func_54(l_609[0], ((((0xF695L <= (safe_sub_func_uint32_t_u_u(l_609[0], ((safe_lshift_func_uint16_t_u_s((safe_sub_func_uint32_t_u_u((safe_add_func_int8_t_s_s(g_533, (((0L < func_45((safe_unary_minus_func_uint32_t_u((safe_lshift_func_uint16_t_u_s((((safe_sub_func_uint8_t_u_u(247UL, ((safe_add_func_uint16_t_u_u(func_68(func_68(l_640, g_540[2][5]), g_440), 0xE82BL)) && 0UL))) || p_28) && g_32), 14)))), p_29, l_618, p_30, l_619)) || (-1L)) && p_29))), p_29)), l_619)) && g_641[0])))) ^ g_387) ^ p_29) == l_619), p_28, l_642), 6))), g_32)) >= 0xF5F0L) == l_643)) && g_64[2][5][0]) != 8L) > g_32);
                        l_645 = l_618;
                        l_640 = ((safe_lshift_func_int16_t_s_u((!(-4L)), 3)) , (((func_68(p_28, (((func_71(((safe_mod_func_int32_t_s_s(func_68(g_533, func_45(g_64[p_31][(p_31 + 3)][p_31], ((((g_540[0][4] ^ l_644) | ((1UL > g_64[3][5][0]) & (safe_unary_minus_func_int16_t_s(func_45((safe_lshift_func_uint16_t_u_u(((safe_lshift_func_int16_t_s_s((-1L), p_29)) ^ p_28), 7)), l_655, p_28, g_64[p_31][(p_31 + 3)][p_31], g_3))))) <= g_533) | p_28), g_533, g_540[2][0], p_31)), g_656)) && g_64[p_31][(p_31 + 3)][p_31]), p_30, p_29) < p_28) , (-1L)) , (-6L))) > p_31) ^ p_31) , p_30));
                    }
                    if ((p_31 , (safe_rshift_func_uint16_t_u_u(0x8B3DL, 1))))
                    {
                        char l_678 = 0L;
                        l_680 |= ((p_30 == func_68(((((((safe_lshift_func_int16_t_s_u((((safe_sub_func_uint16_t_u_u(((((func_59((l_609[0] , (((safe_add_func_uint32_t_u_u((((((0x3AD2L <= 0x3E41L) , l_609[0]) | g_641[0]) >= (((((safe_sub_func_uint32_t_u_u(((safe_unary_minus_func_int32_t_s((((safe_rshift_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s(g_519, ((safe_rshift_func_uint8_t_u_u(g_148, (safe_mod_func_uint8_t_u_u((safe_add_func_uint32_t_u_u(p_29, 0xC2376C82L)), l_619)))) == 0x251DL))), l_643)) | p_31) && 0xDD355A69L))) && g_387), 0L)) == p_28) > g_339) >= g_3) ^ g_622)) , p_30), l_643)) > l_643) < 0xC2509FF3L)), l_678, l_642, l_679[0][3]) > 4294967295UL) || l_609[0]) | l_645) == g_656), l_678)) != p_29) , l_619), g_32)) , p_30) , 4294967289UL) <= l_678) , l_643) < p_28), g_32)) > l_619);
                        l_644 = g_339;
                        g_64[p_31][(p_31 + 3)][p_31] = (((0xE8L ^ (func_54(p_31, g_533, g_2, l_680) & ((p_30 , l_679[0][3]) == ((~2UL) ^ p_30)))) & l_645) ^ l_642);
                        return p_29;
                    }
                    else
                    {
                        g_2 |= p_30;
                    }
                    g_64[1][3][0] = func_45(((((safe_mod_func_uint32_t_u_u(((((g_148 , (safe_sub_func_int8_t_s_s(func_33((0xC49F2512L & (safe_mod_func_int8_t_s_s((safe_sub_func_int8_t_s_s(func_59(g_641[4], g_519, (((g_32 , 1UL) == ((safe_sub_func_int8_t_s_s(0xF2L, g_387)) && (safe_rshift_func_uint8_t_u_s((safe_lshift_func_uint8_t_u_s(g_622, 0)), 5)))) , l_609[0]), l_609[0]), 0L)), l_644))), l_642, l_618), 5UL))) || g_641[0]) && g_540[2][0]) ^ g_656), 4L)) , 0x0BL) , p_31) , g_3), p_30, p_28, l_644, p_31);
                }
                l_642 = (-1L);
            }
        }
        else
        {
            p_30 = ((safe_add_func_uint32_t_u_u(((safe_rshift_func_int16_t_s_u((l_644 , (4294967289UL && (p_30 == 0x7E0F0C8BL))), 5)) | (g_387 & (safe_rshift_func_uint16_t_u_u((((g_387 || (p_29 || (((((l_618 || p_28) , g_622) >= (-4L)) < 252UL) == l_618))) , g_540[2][0]) , l_701[4][1]), 13)))), l_702[1])) >= 2L);
            if (l_701[4][1])
                break;
        }
        g_64[2][4][1] = (func_71(g_32, (safe_mod_func_uint32_t_u_u(g_540[0][2], g_148)), (p_29 & g_622)) == l_701[1][0]);
        if (g_64[4][2][0])
        {
            short l_709 = 9L;
            int l_735 = 0xB4EDDD3AL;
            unsigned char l_792[1];
            int l_795 = 3L;
            int i;
            for (i = 0; i < 1; i++)
                l_792[i] = 255UL;
            p_30 |= l_701[5][1];
            if ((safe_sub_func_uint32_t_u_u((safe_add_func_int8_t_s_s(l_709, ((((func_59(g_339, l_709, p_29, func_45(p_29, ((l_702[1] < (p_29 || (safe_add_func_int16_t_s_s(g_641[6], (l_709 <= p_30))))) || g_528), g_656, l_701[6][2], g_339)) , 2UL) != l_709) > (-7L)) & l_712))), p_28)))
            {
                unsigned l_734 = 0x172139ABL;
                if (func_59(((safe_rshift_func_uint16_t_u_s(p_30, 7)) , ((((safe_lshift_func_uint8_t_u_u(((safe_add_func_uint16_t_u_u(p_29, 0x18E8L)) , p_30), 0)) , (safe_rshift_func_uint8_t_u_s(p_29, 1))) > (g_3 >= ((safe_add_func_int32_t_s_s((l_709 <= ((((l_709 , (((safe_lshift_func_int8_t_s_s(p_30, 2)) || p_28) , p_30)) ^ 0xF756F43EL) && l_709) , g_32)), g_440)) , 5L))) & 1UL)), l_712, p_31, p_29))
                {
                    unsigned char l_727 = 0xABL;
                    for (g_519 = (-17); (g_519 > 20); g_519 = safe_add_func_int16_t_s_s(g_519, 6))
                    {
                        g_2 = l_727;
                        return g_641[9];
                    }
                }
                else
                {
                    unsigned char l_728[6][9] = {{0x00L,255UL,0x7AL,255UL,0x00L,255UL,0x7AL,255UL,0x00L},{248UL,251UL,3UL,0x11L,0x11L,3UL,251UL,248UL,248UL},{0UL,255UL,0UL,0UL,0UL,255UL,0UL,0UL,0UL},{248UL,0x11L,251UL,251UL,0x11L,248UL,3UL,3UL,248UL},{0x00L,0UL,0x7AL,0UL,0x00L,0UL,0x7AL,0UL,0x00L},{0x11L,251UL,251UL,0x11L,248UL,3UL,3UL,248UL,0x11L}};
                    int l_753[7][9] = {{0xB86C0C9EL,0xF510831BL,0xA49AB7D6L,(-1L),0x47FAB661L,0x80449148L,0x0FC84EF7L,0x80449148L,0x47FAB661L},{(-1L),0xA49AB7D6L,0xA49AB7D6L,(-1L),0x208808D5L,(-3L),0xB86C0C9EL,1L,5L},{0xFD1EB6EEL,0xFD1EB6EEL,(-3L),0xD9A45676L,(-3L),0xB86C0C9EL,0x208808D5L,0xAE595E8AL,0x0FC84EF7L},{0x80449148L,0L,0x47FAB661L,5L,1L,0xD9A45676L,0x8B1ECFE8L,0x0FC84EF7L,0xEE45F4BDL},{(-1L),0x8B1ECFE8L,0xEE45F4BDL,(-3L),(-3L),0xEE45F4BDL,0x8B1ECFE8L,(-1L),0L},{0xB86C0C9EL,0xD9A45676L,0x511A0A69L,0x15503E63L,(-1L),(-1L),0x208808D5L,(-1L),0x91633A4BL},{0x15503E63L,0x80449148L,1L,0x0FC84EF7L,(-1L),0x1794A50CL,(-1L),0x208808D5L,0L}};
                    int i, j;
                    if ((func_68(l_728[2][7], g_32) , (((safe_add_func_int32_t_s_s((-1L), (g_731 , l_728[2][7]))) < ((((((((((safe_mod_func_uint32_t_u_u(0x59ED372DL, l_712)) , p_29) != 7UL) | g_656) , l_609[0]) | 0xB3F979F3L) == l_734) > l_709) > l_709) , g_148)) < p_31)))
                    {
                        p_30 = g_339;
                        return l_644;
                    }
                    else
                    {
                        unsigned short l_736 = 0x99FFL;
                        l_735 = p_31;
                        l_735 ^= func_54(l_736, (safe_lshift_func_uint16_t_u_u(g_533, 4)), ((safe_sub_func_uint8_t_u_u((((safe_add_func_uint16_t_u_u(0xDB28L, ((safe_sub_func_uint16_t_u_u(0x7681L, ((((safe_lshift_func_int8_t_s_s(((g_540[1][3] >= 247UL) || 0x5BB2A744L), g_387)) & (safe_mod_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u((safe_add_func_int32_t_s_s(((-5L) && l_753[6][4]), g_148)), 2)), 0x2DB9L))) | l_736) , (-1L)))) || g_339))) == p_30) , 0x4EL), 0UL)) , l_734), p_28);
                    }
                }
                for (l_735 = 0; (l_735 >= 11); l_735 = safe_add_func_uint8_t_u_u(l_735, 8))
                {
                    p_30 = (safe_mod_func_int8_t_s_s(g_528, p_30));
                    g_64[4][5][0] = (g_533 <= p_29);
                }
                g_2 ^= (g_64[3][2][0] & (safe_lshift_func_int8_t_s_u(p_28, l_734)));
            }
            else
            {
                g_2 = ((0x41L && (~g_32)) >= l_709);
            }
            for (p_31 = 0; (p_31 > 13); p_31 = safe_add_func_uint16_t_u_u(p_31, 8))
            {
                unsigned char l_764 = 254UL;
                unsigned short l_774 = 0x434FL;
                int l_800 = 0x4EBEDFE7L;
                p_30 = (safe_add_func_uint16_t_u_u(l_764, ((l_765 & (l_764 || func_59(l_735, (safe_add_func_uint32_t_u_u(p_30, (((func_71(l_702[1], (func_71(g_540[1][5], ((p_31 && (g_519 | l_618)) | 8L), p_30) != 247UL), p_31) , p_28) > g_387) == g_387))), p_31, p_28))) , 0x7BDAL)));
                for (l_644 = (-21); (l_644 < 21); l_644++)
                {
                    unsigned l_770 = 4294967295UL;
                    if (l_644)
                    {
                        unsigned short l_777 = 1UL;
                        l_770 = 0x462C249FL;
                        p_30 = (g_540[2][2] , (((func_45((safe_lshift_func_uint16_t_u_s(func_45(l_609[0], ((safe_unary_minus_func_uint8_t_u(l_774)) & p_30), ((safe_rshift_func_int8_t_s_u(((l_777 || ((((8L <= (((p_30 != g_731) < l_735) , p_28)) , 1UL) < l_712) , (-8L))) | g_64[2][4][0]), 1)) & g_656), p_30, p_29), g_64[1][0][1])), g_519, p_28, p_31, p_30) != g_440) || 1L) == l_609[0]));
                        l_735 = g_339;
                        l_609[0] &= l_765;
                    }
                    else
                    {
                        char l_782 = 5L;
                        g_2 &= (+0x307563D8L);
                        if (l_765)
                            continue;
                        p_30 = (g_656 > ((p_28 < l_735) && func_59(l_644, ((safe_lshift_func_int8_t_s_s(func_33((0x8D01L ^ 0L), l_709, (p_29 == ((safe_sub_func_uint16_t_u_u(0UL, l_644)) > l_702[1]))), p_31)) , l_712), l_702[0], g_32)));
                        p_30 |= (((((g_32 >= (g_540[2][4] < l_782)) > p_31) < (0x868385A0L >= (l_770 , (g_641[0] || (safe_sub_func_uint32_t_u_u((((g_2 != ((safe_sub_func_int16_t_s_s((((+g_533) <= g_148) || g_533), g_339)) , 1UL)) ^ l_782) , g_2), 0x1529E657L)))))) > 0x8AL) | 1L);
                    }
                    if (l_702[1])
                    {
                        unsigned l_789[5][2][10] = {{{0x4F67A0E0L,1UL,0x4BA2B6DDL,4UL,0UL,4294967295UL,0xAA75C359L,4294967295UL,1UL,4294967295UL},{4UL,4294967295UL,0x4BA2B6DDL,0UL,0x4BA2B6DDL,4294967295UL,4UL,0xC5BCD570L,0xA5F0BBDCL,0x96398B6AL}},{{0x7AD874D9L,4294967294UL,0xA5F0BBDCL,6UL,0xAA75C359L,0x4BA2B6DDL,0xC5BCD570L,1UL,1UL,0xC5BCD570L},{1UL,4294967294UL,0xC5BCD570L,0xC5BCD570L,4294967294UL,1UL,4UL,0x96398B6AL,0xD47B3D5BL,0x4BA2B6DDL}},{{0x96398B6AL,4294967295UL,4294967295UL,1UL,6UL,0x4F67A0E0L,0xAA75C359L,0xA5F0BBDCL,0xAA75C359L,0x4F67A0E0L},{0x96398B6AL,0xAA75C359L,0xA5F0BBDCL,0xAA75C359L,0x4F67A0E0L,6UL,1UL,4294967295UL,4294967295UL,0x96398B6AL}},{{6UL,1UL,4294967295UL,4294967295UL,0x96398B6AL,0x7AD874D9L,1UL,1UL,0x7AD874D9L,0x96398B6AL},{0xA5F0BBDCL,4294967295UL,4294967295UL,0xA5F0BBDCL,0x4F67A0E0L,0xC5BCD570L,0xA879A1C6L,6UL,0xD47B3D5BL,1UL}},{{0UL,0x4F67A0E0L,0x4BA2B6DDL,0x7AD874D9L,0xD47B3D5BL,0xA879A1C6L,4294967295UL,0xA879A1C6L,0xD47B3D5BL,0x7AD874D9L},{1UL,0UL,1UL,0xA5F0BBDCL,1UL,4294967294UL,0xD47B3D5BL,0UL,0x7AD874D9L,4UL}}};
                        int l_798 = 0L;
                        int i, j, k;
                        l_798 |= (safe_add_func_uint8_t_u_u(l_789[1][1][9], ((l_770 < (safe_lshift_func_uint16_t_u_u(g_64[4][2][1], (((l_792[0] , g_533) == (((((p_29 , (func_45(p_29, (~(safe_mod_func_int8_t_s_s((((l_795 , (safe_lshift_func_int16_t_s_s(g_339, l_702[1]))) , 0xE1B75544L) , l_789[1][1][9]), l_709))), p_30, l_735, g_387) >= 0L)) || g_2) | 0UL) < l_795) , (-5L))) ^ 0x96E9B462L)))) < p_28)));
                        l_799 = 0x6CDECFD9L;
                        p_30 = g_540[2][0];
                    }
                    else
                    {
                        return p_30;
                    }
                }
                for (g_148 = 0; (g_148 <= 9); g_148 += 1)
                {
                    l_800 = 0xEC1746B3L;
                }
            }
        }
        else
        {
            unsigned l_816[6];
            int l_817 = 0xEA881A6BL;
            int l_843 = (-7L);
            int l_854 = 0xAFAB6328L;
            int i;
            for (i = 0; i < 6; i++)
                l_816[i] = 4294967295UL;
            for (g_339 = 0; (g_339 >= 4); g_339++)
            {
                unsigned l_807 = 0x677E86ABL;
                for (g_622 = 0; (g_622 < 26); g_622 = safe_add_func_int16_t_s_s(g_622, 4))
                {
                    return l_609[0];
                }
                p_30 = (safe_add_func_uint16_t_u_u((l_609[0] >= l_807), (((func_45(((~p_28) , (((p_30 > ((((safe_rshift_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u((safe_sub_func_int32_t_s_s((func_45(((safe_mod_func_int8_t_s_s(p_29, l_816[1])) , g_440), l_618, l_644, p_28, p_30) >= g_533), l_807)), (-9L))), 2)) && p_31) & g_540[0][5]) <= 0L)) , p_28) & g_656)), p_29, g_64[2][4][0], g_387, g_32) < l_807) <= p_29) , 8UL)));
                for (l_807 = 0; (l_807 <= 9); l_807 += 1)
                {
                    int i;
                    return g_641[l_807];
                }
                l_817 = 0x24FB54FEL;
            }
            for (p_29 = 0; (p_29 != 21); p_29++)
            {
                int l_833 = 1L;
                const unsigned short l_853 = 65535UL;
                unsigned short l_866[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_866[i] = 0x8353L;
                p_30 = (-1L);
                if ((2L <= (func_68((l_618 != (safe_unary_minus_func_int32_t_s((((((func_54((safe_add_func_uint8_t_u_u(p_30, (g_2 >= ((safe_sub_func_int16_t_s_s((safe_rshift_func_int16_t_s_u(((p_29 , (safe_lshift_func_int16_t_s_u((l_816[3] ^ (safe_rshift_func_uint16_t_u_s((safe_lshift_func_int16_t_s_u(l_816[1], 12)), g_622))), (((((!((p_31 , l_609[0]) & l_833)) & p_28) , 0x290FAB5DL) >= 0x6FB31F9AL) && p_31)))) <= l_765), 1)), p_30)) , g_540[2][0])))), l_833, p_29, l_765) > g_622) , g_64[4][0][1]) , p_30) > p_29) | (-6L))))), l_644) > l_816[1])))
                {
                    int l_834[4] = {0x7BC7EC7AL,0x7BC7EC7AL,0x7BC7EC7AL,0x7BC7EC7AL};
                    int i;
                    g_64[4][0][0] = func_45(l_834[0], (safe_add_func_int16_t_s_s(func_71(l_816[1], l_816[4], l_701[4][2]), (65528UL & l_817))), (p_28 && (g_656 < l_701[0][2])), g_387, l_834[1]);
                    l_834[1] = ((((safe_mod_func_int32_t_s_s(((-5L) && (p_31 != l_833)), (g_387 | g_440))) == ((((safe_sub_func_int16_t_s_s((p_29 && g_440), (safe_lshift_func_uint16_t_u_s(((g_387 >= func_45(((g_641[0] <= l_609[0]) , 2UL), l_833, p_31, l_843, p_31)) || g_540[2][2]), 11)))) , g_540[1][2]) > g_533) , g_3)) , g_641[0]) | p_29);
                    for (l_843 = 0; (l_843 <= 22); l_843++)
                    {
                        int l_850 = 0x1C35699EL;
                        unsigned short l_869 = 0xE150L;
                        g_64[3][3][1] &= ((((safe_mod_func_uint16_t_u_u(g_641[0], ((p_28 <= l_843) || (safe_rshift_func_uint16_t_u_s(((((((+(((l_850 >= g_533) , p_31) == (safe_add_func_int16_t_s_s((((((l_853 & l_854) || ((safe_lshift_func_int16_t_s_s((safe_sub_func_uint32_t_u_u((p_30 && g_387), 4294967295UL)), p_30)) < g_148)) & 1L) , (-1L)) > g_3), g_540[0][1])))) , (-7L)) , l_843) || l_816[2]) == 6L) , 0x8D04L), 6))))) && p_28) > 0x00E79003L) , p_31);
                        l_866[1] = (+((g_148 && (l_765 <= g_64[4][5][1])) , ((0xD098L != (func_71(l_834[3], p_30, ((safe_mod_func_int32_t_s_s((2UL != g_622), ((((func_71((safe_rshift_func_int16_t_s_u(((safe_add_func_uint32_t_u_u(0xCFA84C51L, l_865)) > (-5L)), 1)), g_656, l_799) , 0xD2L) | p_28) != g_3) , l_712))) , 4L)) | l_816[0])) <= (-1L))));
                        if (p_31)
                            continue;
                        g_64[2][5][1] = (safe_mod_func_uint16_t_u_u(func_68(l_865, l_869), l_834[1]));
                    }
                    p_30 = (((safe_rshift_func_int16_t_s_u(l_799, 0)) > ((func_45((safe_add_func_int32_t_s_s((safe_rshift_func_uint8_t_u_s(l_866[0], 2)), 0xC392FA5EL)), ((+(65535UL <= (((((p_31 >= (((safe_mod_func_int16_t_s_s((safe_lshift_func_int16_t_s_u(((((safe_rshift_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u((p_31 | (p_28 < g_641[0])), ((((+l_866[2]) == l_702[1]) <= g_32) >= l_853))), g_656)) ^ 65535UL) || 0L) , p_31), g_656)), p_30)) && g_540[2][0]) ^ 0UL)) | l_833) | g_148) != 7L) | l_816[1]))) , g_533), g_148, p_29, l_834[0]) < 0xC2L) ^ (-1L))) | 1UL);
                }
                else
                {
                    g_64[0][4][0] = (safe_rshift_func_int16_t_s_s(g_528, (g_148 & (g_148 != l_817))));
                    for (l_712 = 0; l_712 < 3; l_712 += 1)
                    {
                        l_866[l_712] = 0x172CL;
                    }
                    g_2 &= (l_886 , p_28);
                }
            }
            l_817 |= ((safe_sub_func_int32_t_s_s((((((safe_rshift_func_int8_t_s_u(l_886, 0)) == (p_31 ^ (l_816[1] & (safe_add_func_uint32_t_u_u(l_702[1], 0x9B0A7FBEL))))) >= (((safe_rshift_func_uint8_t_u_s(l_886, 2)) , func_71((func_71(g_533, ((1L == l_854) && l_644), p_31) != p_30), g_440, p_28)) , g_2)) <= 0x7E09L) | 0x32L), 8L)) , g_148);
        }
    }
    return p_30;
}







static int func_33(int p_34, unsigned p_35, int p_36)
{
    unsigned l_51 = 0UL;
    p_36 &= ((safe_sub_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s(func_45(l_51, p_35, l_51, (safe_sub_func_uint16_t_u_u(func_54(func_59(g_2, g_32, p_35, l_51), (g_32 , p_34), p_34, g_440), 0x90E4L)), p_35), l_51)), l_51)) , g_339);
    return l_51;
}







static const short func_45(unsigned char p_46, unsigned p_47, unsigned char p_48, unsigned char p_49, unsigned short p_50)
{
    int l_605 = 0L;
    int l_606[9];
    int i;
    for (i = 0; i < 9; i++)
        l_606[i] = (-8L);
    l_605 = (safe_lshift_func_int16_t_s_u((-5L), 14));
    l_606[5] = p_47;
    g_2 |= (g_533 <= l_606[3]);
    return g_519;
}







static const unsigned short func_54(short p_55, const unsigned short p_56, unsigned short p_57, unsigned short p_58)
{
    int l_515[5][7] = {{1L,0x27EA42A9L,(-8L),0L,(-1L),0xCEAC51B7L,0x9C29BB03L},{0x9C29BB03L,0x4BB4AE4EL,(-10L),(-10L),0x4BB4AE4EL,0x9C29BB03L,1L},{0x4BB4AE4EL,(-8L),(-1L),(-10L),0x3995F679L,1L,0L},{(-6L),0x9C29BB03L,0xFCA3626DL,0L,0x27EA42A9L,0L,0xFCA3626DL},{(-8L),(-8L),0xCEAC51B7L,1L,(-10L),1L,0xFCA3626DL}};
    int i, j;
    g_519 ^= (func_71(func_71((func_71(p_56, p_56, p_58) != l_515[3][2]), ((((safe_lshift_func_uint16_t_u_s(p_55, (safe_unary_minus_func_int32_t_s(l_515[2][1])))) , l_515[4][6]) > l_515[3][5]) , p_56), p_57), l_515[3][2], l_515[3][2]) == l_515[1][5]);
    for (g_339 = 0; (g_339 <= 1); g_339 += 1)
    {
        unsigned l_520 = 0xDEFF4A30L;
        short l_523 = 1L;
        int l_545 = (-9L);
        int l_562[5][6] = {{0x53B0567BL,0x23C7B043L,0x23C7B043L,0x53B0567BL,0x78949836L,0xA522300FL},{0xA522300FL,0xA522300FL,1L,0xA522300FL,0x1CFA67D3L,0x78949836L},{0xA522300FL,0x1CFA67D3L,0x78949836L,0x78949836L,0x1CFA67D3L,0xA522300FL},{(-1L),0xA522300FL,0x53B0567BL,0x1CFA67D3L,0x53B0567BL,0xA522300FL},{0x53B0567BL,(-1L),0x78949836L,1L,1L,0x78949836L}};
        int l_583 = 0L;
        int i, j;
        g_2 = l_515[1][5];
        g_64[4][0][0] = (((l_515[3][2] , g_3) == ((p_58 , (((l_520 | (l_520 && l_520)) || l_520) > (safe_add_func_uint16_t_u_u((((p_58 | l_520) > l_523) ^ g_32), p_57)))) < g_64[1][5][0])) <= 0UL);
        for (g_387 = 0; (g_387 <= 1); g_387 += 1)
        {
            unsigned l_524[1];
            int l_525 = (-1L);
            int l_602 = (-7L);
            int i;
            for (i = 0; i < 1; i++)
                l_524[i] = 0xFB05484EL;
            l_524[0] = ((((((((((p_55 <= l_520) && p_57) & g_3) < l_515[3][6]) ^ l_515[1][5]) != ((g_32 == 247UL) >= 0x20L)) ^ l_520) && l_515[1][6]) ^ g_64[4][1][1]) ^ 0x51L);
            l_525 = l_515[4][5];
            for (g_519 = 0; (g_519 <= 1); g_519 += 1)
            {
                int i, j, k;
                if (g_64[(g_339 + 3)][g_339][g_519])
                    break;
                for (p_58 = 0; (p_58 <= 4); p_58 += 1)
                {
                    int i, j, k;
                    g_533 |= (((~l_515[p_58][(g_519 + 2)]) & 0x9EE0DF27L) , (l_515[p_58][(g_387 + 2)] & (safe_mod_func_uint16_t_u_u(g_528, (((((4294967288UL > (safe_mod_func_int8_t_s_s(4L, p_56))) , (safe_rshift_func_uint8_t_u_s(l_524[0], l_524[0]))) && g_64[(g_339 + 3)][g_339][g_519]) > g_64[2][3][1]) & g_440)))));
                    g_64[(g_339 + 3)][g_339][g_519] = ((((safe_mod_func_int32_t_s_s(g_3, (safe_lshift_func_uint8_t_u_s((p_56 & (safe_rshift_func_int8_t_s_u((g_64[(g_519 + 1)][p_58][g_339] >= (g_540[2][0] , 0x45617689L)), 4))), (p_56 | (safe_mod_func_int8_t_s_s(((safe_rshift_func_int16_t_s_s(0x37CCL, 11)) || (p_57 < (-9L))), p_55))))))) | p_56) & g_339) >= 0L);
                    l_545 = 9L;
                }
            }
            l_562[4][2] &= (safe_lshift_func_int8_t_s_u((safe_mod_func_uint8_t_u_u((((safe_add_func_int16_t_s_s((safe_add_func_int8_t_s_s((((safe_sub_func_uint16_t_u_u(g_440, ((safe_rshift_func_uint8_t_u_s((g_540[2][3] < 0x49L), 0)) >= (((0L == (((l_515[1][5] , (p_57 || (safe_rshift_func_uint8_t_u_u(((p_55 , (safe_add_func_uint8_t_u_u(l_545, 251UL))) > 5L), g_533)))) && l_545) != g_32)) || p_58) <= l_524[0])))) <= l_515[3][2]) , l_515[3][2]), g_440)), l_515[2][5])) ^ l_545) == 0UL), p_57)), l_520));
            for (l_525 = 1; (l_525 >= 0); l_525 -= 1)
            {
                unsigned l_567 = 1UL;
                int i, j, k;
                if ((g_64[l_525][(g_387 + 3)][g_339] && (safe_mod_func_int32_t_s_s((l_562[2][2] || (g_64[l_525][(g_387 + 3)][g_339] , (((safe_add_func_uint16_t_u_u(g_64[0][5][1], (g_519 , l_515[2][3]))) , (~l_567)) , (safe_mod_func_int16_t_s_s(p_56, (safe_rshift_func_uint8_t_u_u((0xD439L & g_528), 7))))))), 3UL))))
                {
                    unsigned short l_582 = 0x19C5L;
                    int i, j, k;
                    g_64[(l_525 + 2)][(g_339 + 3)][g_387] = (safe_lshift_func_uint16_t_u_u(((safe_rshift_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s(p_55, (l_567 < (safe_rshift_func_uint8_t_u_u((l_523 != (g_540[1][2] | (-10L))), 4))))), 13)) == p_55), (p_58 ^ (((l_525 , g_440) == g_3) | l_562[4][2]))));
                    g_64[(l_525 + 1)][(g_387 + 1)][g_339] ^= (g_387 != (safe_sub_func_uint16_t_u_u(0xF632L, ((l_582 <= l_583) >= g_32))));
                }
                else
                {
                    int l_601 = 1L;
                    for (g_533 = 2; (g_533 >= 0); g_533 -= 1)
                    {
                        int i, j;
                        g_64[0][0][0] = ((safe_mod_func_uint32_t_u_u(g_540[g_387][(g_533 + 1)], (safe_sub_func_int32_t_s_s(0xBB041C9EL, (safe_rshift_func_int16_t_s_u((safe_sub_func_int8_t_s_s(p_57, (((safe_sub_func_uint8_t_u_u(0x40L, (!l_562[2][1]))) , g_519) == p_56))), ((l_525 && g_32) == p_56))))))) > g_64[l_525][(g_387 + 3)][g_339]);
                        g_64[l_525][(g_387 + 3)][g_339] = (0L == (((0x80L && 1UL) , (l_567 ^ ((safe_unary_minus_func_uint8_t_u((safe_lshift_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u((~g_540[g_387][(g_533 + 1)]), 5)), (g_440 && g_339))))) != (safe_mod_func_uint16_t_u_u(g_339, ((((0L || l_601) ^ l_515[3][2]) || g_519) & g_540[2][0])))))) & g_64[3][2][1]));
                        g_64[2][1][0] = g_519;
                        l_602 = 0x8C29B2D5L;
                    }
                }
            }
        }
    }
    return g_64[4][3][1];
}







static short func_59(unsigned p_60, unsigned p_61, unsigned p_62, unsigned char p_63)
{
    const unsigned l_353 = 0x9B692279L;
    unsigned l_386 = 0UL;
    int l_412 = 0xE26E32C7L;
    int l_438[1];
    unsigned short l_505 = 0xD218L;
    int i;
    for (i = 0; i < 1; i++)
        l_438[i] = (-5L);
    for (p_63 = 0; (p_63 <= 1); p_63 += 1)
    {
        unsigned char l_65 = 1UL;
        return l_65;
    }
    if (((safe_mod_func_uint8_t_u_u((func_68(g_64[1][4][1], p_60) , (safe_rshift_func_int16_t_s_s((0xAAE21104L | ((((0x20L < l_353) != ((+func_71((5UL == ((((l_353 || (safe_add_func_int32_t_s_s((((((safe_rshift_func_uint8_t_u_s(l_353, l_353)) & 0x7441C2B1L) < l_353) || l_353) && 1UL), g_148))) , p_62) & 0xC7L) < g_339)), l_353, g_148)) , 4294967295UL)) , 7L) == l_353)), g_32))), l_353)) && l_353))
    {
        const unsigned char l_372 = 1UL;
        for (g_148 = 12; (g_148 <= 23); g_148 = safe_add_func_int16_t_s_s(g_148, 1))
        {
            const unsigned l_360[8] = {0x14A060F0L,0x14A060F0L,0x14A060F0L,0x14A060F0L,0x14A060F0L,0x14A060F0L,0x14A060F0L,0x14A060F0L};
            char l_381 = 0x40L;
            short l_391 = 0xFE8AL;
            int i;
            if (((((p_63 != g_339) ^ (!0x3CL)) == l_360[5]) != (0x373FL < (safe_lshift_func_uint16_t_u_u(p_62, p_62)))))
            {
                const short l_379 = 0x454EL;
                int l_392 = 0xF0517095L;
                if (p_61)
                    break;
                if (g_339)
                {
                    return p_62;
                }
                else
                {
                    int l_380 = 0x76937241L;
                    for (p_63 = 0; (p_63 > 56); ++p_63)
                    {
                        int l_369 = 0xF414FDD7L;
                        g_2 = (((safe_lshift_func_int16_t_s_u(g_2, ((~((safe_rshift_func_int16_t_s_s((65535UL == l_369), g_32)) != ((l_360[5] >= (safe_lshift_func_uint8_t_u_u(p_63, l_372))) , (safe_add_func_uint16_t_u_u((1L == p_61), l_372))))) & g_339))) > (-7L)) && 65534UL);
                        l_380 = (!((safe_rshift_func_int16_t_s_u(0x1AD1L, 14)) || ((p_61 , (p_61 & ((p_60 < (safe_lshift_func_uint16_t_u_u(p_63, g_339))) > l_360[2]))) && ((~((p_60 != (l_379 && l_380)) && 9L)) > p_63))));
                        return p_62;
                    }
                    for (p_62 = 0; (p_62 <= 1); p_62 += 1)
                    {
                        l_381 = p_63;
                        g_2 = (safe_lshift_func_uint8_t_u_u((((safe_mod_func_uint16_t_u_u((((p_60 >= p_60) <= g_148) < ((l_386 == (g_387 , ((!0xAAL) <= (safe_sub_func_int32_t_s_s(((safe_unary_minus_func_uint16_t_u(g_2)) , l_379), 4294967295UL))))) >= 0x2EFC176AL)), 0x4948L)) || 0x8A465BDCL) ^ l_391), p_61));
                        l_392 = l_379;
                    }
                }
            }
            else
            {
                return g_2;
            }
        }
    }
    else
    {
        int l_400 = 0L;
        unsigned short l_413 = 65527UL;
        for (g_148 = 0; (g_148 <= 1); g_148 += 1)
        {
            unsigned l_399 = 4294967295UL;
            if ((((p_63 && (safe_add_func_uint8_t_u_u(((((safe_sub_func_int32_t_s_s(g_387, 4294967286UL)) && (g_64[1][4][0] | 1L)) || ((safe_rshift_func_uint16_t_u_u(5UL, 8)) & ((l_353 || (0x9ABEL || 0x5CECL)) < g_339))) >= l_399), p_61))) || l_400) && 0x94L))
            {
                g_64[0][1][0] = ((0x95L <= l_399) < (safe_mod_func_uint32_t_u_u(g_32, ((safe_lshift_func_uint8_t_u_u(g_2, 4)) , g_2))));
            }
            else
            {
                char l_407 = 2L;
                l_412 = ((g_3 , (((safe_mod_func_int16_t_s_s(l_407, l_400)) || p_61) || ((safe_sub_func_int8_t_s_s(((-1L) == g_148), (g_32 || (safe_rshift_func_int16_t_s_s(g_339, 9))))) != g_2))) <= 255UL);
            }
            if (l_399)
                continue;
            if (g_2)
            {
                unsigned l_419 = 0x134DEF45L;
                int l_425 = (-1L);
                l_413 &= (0xD71EDCD7L || g_2);
                g_64[4][4][1] = g_3;
                for (g_387 = 0; (g_387 <= 1); g_387 += 1)
                {
                    int l_418 = 1L;
                    for (l_400 = 1; (l_400 >= 0); l_400 -= 1)
                    {
                        int i, j, k;
                        g_64[(g_387 + 1)][l_400][g_387] = g_64[(l_400 + 3)][l_400][g_387];
                        g_64[g_387][g_387][g_387] = ((!(((g_64[(l_400 + 2)][(g_148 + 2)][g_148] | (safe_rshift_func_uint8_t_u_s(p_63, 2))) >= 1L) , (safe_mod_func_uint32_t_u_u(((((g_32 < ((p_63 & (g_339 >= (g_3 <= l_353))) || (g_64[0][2][1] || p_63))) > 0UL) | p_62) , l_418), g_32)))) > g_32);
                        g_64[(g_148 + 1)][(l_400 + 1)][g_148] = (l_419 && l_399);
                    }
                    for (p_62 = 0; (p_62 <= 1); p_62 += 1)
                    {
                        int i, j, k;
                        g_64[(p_62 + 2)][(g_148 + 2)][g_387] = (((safe_mod_func_int32_t_s_s((g_64[4][5][0] , p_60), 7L)) > (safe_rshift_func_int16_t_s_u((((0xD9222CCBL <= 0xAA2DB91DL) == l_412) || ((~l_419) >= g_3)), 7))) || (safe_unary_minus_func_uint16_t_u(0x90A3L)));
                    }
                    l_425 = g_64[4][1][1];
                    for (l_386 = 0; (l_386 > 60); l_386 = safe_add_func_uint8_t_u_u(l_386, 3))
                    {
                        unsigned short l_439 = 0x5BA1L;
                        g_64[0][1][0] ^= ((safe_lshift_func_int16_t_s_s(((((p_63 <= ((safe_lshift_func_int8_t_s_s((((((((g_3 , ((safe_mod_func_uint16_t_u_u((((p_62 | (1UL == ((safe_mod_func_int16_t_s_s(p_63, p_63)) , p_63))) > (safe_mod_func_uint8_t_u_u((((l_438[0] , (((g_339 | 0x3CD0F279L) < l_439) , g_3)) != l_418) < l_418), (-1L)))) <= l_439), 0xA423L)) < 0x95BDL)) , (-10L)) || p_60) && g_339) & g_440) == g_3) , 0xC7L), 4)) && g_440)) , l_399) & l_386) && 4294967295UL), 2)) == 0x67B9L);
                    }
                }
            }
            else
            {
                unsigned short l_441[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_441[i] = 4UL;
                l_441[1] ^= l_413;
            }
            for (p_61 = 0; (p_61 <= 1); p_61 += 1)
            {
                int l_442 = 0xE573C5D9L;
                g_2 ^= ((l_386 || g_339) || (p_62 <= (p_63 >= 0L)));
                for (l_412 = 0; (l_412 <= 1); l_412 += 1)
                {
                    int i, j, k;
                    g_64[(p_61 + 2)][(p_61 + 3)][g_148] = (!g_64[p_61][(l_412 + 3)][g_148]);
                    l_442 = g_64[(p_61 + 1)][(p_61 + 4)][g_148];
                    g_64[p_61][(l_412 + 3)][g_148] = p_60;
                }
            }
        }
    }
    l_412 = g_2;
    if ((safe_sub_func_uint16_t_u_u((func_71(g_148, g_387, g_339) , func_68(l_438[0], g_440)), g_32)))
    {
        unsigned char l_456[7] = {247UL,247UL,247UL,247UL,247UL,247UL,247UL};
        int l_457 = 0L;
        unsigned char l_470[6];
        int l_473 = 0x057E27B0L;
        unsigned char l_510 = 252UL;
        unsigned l_512[5];
        char l_513 = 0xABL;
        int i;
        for (i = 0; i < 6; i++)
            l_470[i] = 0xC6L;
        for (i = 0; i < 5; i++)
            l_512[i] = 0x280F9C2AL;
        for (g_148 = 0; (g_148 == 12); g_148++)
        {
            const unsigned char l_449 = 0x65L;
            int l_479[9] = {(-6L),(-6L),(-6L),(-6L),(-6L),(-6L),(-6L),(-6L),(-6L)};
            int i;
            l_457 = ((safe_add_func_int8_t_s_s(p_60, (g_387 < l_449))) ^ (((g_2 >= (((l_449 && ((safe_sub_func_uint8_t_u_u(249UL, p_61)) == g_339)) < ((((((safe_mod_func_int32_t_s_s((safe_add_func_int32_t_s_s(((p_60 | g_3) | l_449), p_61)), p_63)) == 0xDBL) & 3UL) ^ p_60) , l_438[0]) & 0x7F6B34E8L)) || l_456[3])) && l_456[3]) >= 8UL));
            l_457 = ((g_64[4][4][0] != (l_449 || (g_64[1][2][0] != (safe_sub_func_int8_t_s_s((safe_sub_func_uint32_t_u_u(((g_148 , ((((safe_mod_func_uint8_t_u_u((0xC127L & g_64[0][5][1]), ((safe_add_func_int8_t_s_s(p_62, (safe_add_func_uint8_t_u_u(p_62, (safe_rshift_func_uint8_t_u_s(249UL, p_63)))))) , l_457))) | 0x91L) && g_3) >= l_353)) && g_148), l_438[0])), 0xABL))))) & l_470[5]);
            for (l_457 = 23; (l_457 == (-4)); l_457 = safe_sub_func_int32_t_s_s(l_457, 3))
            {
                if (g_148)
                {
                    unsigned l_474 = 0x5901C2DEL;
                    l_473 = l_412;
                    l_473 |= g_339;
                    g_2 |= (~l_449);
                    g_2 ^= l_474;
                }
                else
                {
                    for (l_473 = 0; (l_473 >= (-7)); l_473 = safe_sub_func_uint16_t_u_u(l_473, 7))
                    {
                        l_479[8] = (safe_rshift_func_int8_t_s_s(1L, 7));
                    }
                }
                return g_440;
            }
            l_479[8] = (p_62 | ((0x27L <= g_64[2][4][1]) > 3UL));
        }
        for (g_339 = 0; (g_339 >= (-23)); g_339 = safe_sub_func_int32_t_s_s(g_339, 1))
        {
            unsigned short l_490 = 1UL;
            l_412 |= (((safe_lshift_func_uint8_t_u_s((1L < 4UL), g_3)) != ((safe_rshift_func_int8_t_s_s((l_353 , (1UL < ((safe_add_func_uint32_t_u_u(1UL, p_60)) >= ((safe_add_func_int8_t_s_s(l_490, ((l_490 , p_62) & l_490))) || l_473)))), l_490)) <= 0UL)) ^ p_62);
            g_2 = p_60;
            if (p_63)
            {
                int l_494 = (-5L);
                short l_503 = (-1L);
                const unsigned l_504 = 1UL;
                int l_506[2][7][4] = {{{0xEFCEC9C3L,0x234B259BL,0xEFCEC9C3L,0x234B259BL},{0xEFCEC9C3L,0x234B259BL,0xEFCEC9C3L,0x234B259BL},{0xEFCEC9C3L,0x234B259BL,0xEFCEC9C3L,0x234B259BL},{0xEFCEC9C3L,0x234B259BL,0xEFCEC9C3L,0x234B259BL},{0xEFCEC9C3L,0x234B259BL,0xEFCEC9C3L,0x234B259BL},{0xEFCEC9C3L,0x234B259BL,0xEFCEC9C3L,0x234B259BL},{0xEFCEC9C3L,0x234B259BL,0xEFCEC9C3L,0x234B259BL}},{{0xEFCEC9C3L,0x234B259BL,0xEFCEC9C3L,0x234B259BL},{0xEFCEC9C3L,0x234B259BL,0xEFCEC9C3L,0x234B259BL},{0xEFCEC9C3L,0x234B259BL,0xEFCEC9C3L,0x234B259BL},{0xEFCEC9C3L,0x234B259BL,0xEFCEC9C3L,0x234B259BL},{0xEFCEC9C3L,0x234B259BL,0xEFCEC9C3L,0x234B259BL},{0xEFCEC9C3L,0x234B259BL,0xEFCEC9C3L,0x234B259BL},{0xEFCEC9C3L,0x234B259BL,0xEFCEC9C3L,0x234B259BL}}};
                int i, j, k;
                if ((p_63 , ((((-1L) != g_387) != (((safe_add_func_int16_t_s_s(((safe_unary_minus_func_int16_t_s(l_494)) & (((safe_mod_func_int16_t_s_s((((safe_sub_func_uint8_t_u_u((p_62 | (safe_mod_func_int16_t_s_s((safe_rshift_func_int8_t_s_s(((g_148 < 0xE986L) < p_63), (g_339 , g_64[4][1][1]))), g_148))), l_438[0])) , 0xE7D913A9L) != l_503), l_504)) > p_63) , l_438[0])), l_490)) , l_505) , p_61)) | g_387)))
                {
                    unsigned l_509 = 0x1A5608BFL;
                    char l_511[5][10][5] = {{{(-1L),(-5L),(-1L),0x74L,0L},{0xEDL,0xA1L,(-2L),0x46L,0x60L},{0x74L,(-5L),0xA8L,0L,0L},{(-2L),0x38L,(-2L),0x60L,0x46L},{0x74L,0xA5L,(-1L),0L,0x74L},{0xEDL,0x38L,(-1L),0x46L,0x46L},{(-1L),(-5L),(-1L),0x74L,0L},{0xEDL,0xA1L,(-2L),0x46L,0x60L},{0x74L,(-5L),0xA8L,0L,0L},{(-2L),0x38L,(-2L),0x60L,0x46L}},{{0x74L,0xA5L,(-1L),0L,0x74L},{0xEDL,0x38L,(-1L),0x46L,0x46L},{(-1L),(-5L),(-1L),0x74L,0L},{0xEDL,0xA1L,(-2L),0x46L,0x60L},{0x74L,(-5L),0xA8L,0L,0L},{(-2L),0x38L,(-2L),0x60L,0x46L},{0x74L,0xA5L,(-1L),0L,0x74L},{0xEDL,0x38L,(-1L),0xEFL,0xEFL},{0xD3L,0L,0xD3L,(-7L),0xFFL},{0x60L,0xE5L,5L,0xEFL,6L}},{{0x74L,0L,0L,0xFFL,0xFFL},{5L,(-5L),5L,6L,0xEFL},{0x74L,0x6AL,0xD3L,0xFFL,(-7L)},{0x60L,(-5L),0x46L,0xEFL,0xEFL},{0xD3L,0L,0xD3L,(-7L),0xFFL},{0x60L,0xE5L,5L,0xEFL,6L},{0x74L,0L,0L,0xFFL,0xFFL},{5L,(-5L),5L,6L,0xEFL},{0x74L,0x6AL,0xD3L,0xFFL,(-7L)},{0x60L,(-5L),0x46L,0xEFL,0xEFL}},{{0xD3L,0L,0xD3L,(-7L),0xFFL},{0x60L,0xE5L,5L,0xEFL,6L},{0x74L,0L,0L,0xFFL,0xFFL},{5L,(-5L),5L,6L,0xEFL},{0x74L,0x6AL,0xD3L,0xFFL,(-7L)},{0x60L,(-5L),0x46L,0xEFL,0xEFL},{0xD3L,0L,0xD3L,0xA8L,(-1L)},{(-5L),6L,0xE5L,(-2L),(-1L)},{0L,0xFFL,0xE7L,(-1L),(-1L)},{0xE5L,0xEFL,0xE5L,(-1L),(-2L)}},{{0L,(-7L),0x6AL,(-1L),0xA8L},{(-5L),0xEFL,1L,(-2L),(-2L)},{0x6AL,0xFFL,0x6AL,0xA8L,(-1L)},{(-5L),6L,0xE5L,(-2L),(-1L)},{0L,0xFFL,0xE7L,(-1L),(-1L)},{0xE5L,0xEFL,0xE5L,(-1L),(-2L)},{0L,(-7L),0x6AL,(-1L),0xA8L},{(-5L),0xEFL,1L,(-2L),(-2L)},{0x6AL,0xFFL,0x6AL,0xA8L,(-1L)},{(-5L),6L,0xE5L,(-2L),(-1L)}}};
                    int l_514[5][8][6] = {{{0x10AB4BD5L,(-6L),5L,(-5L),7L,2L},{1L,0x490BDA48L,(-5L),1L,(-1L),0x10AB4BD5L},{2L,7L,0x66393B35L,0xA5D7600BL,1L,(-1L)},{(-1L),0x51CFE5AEL,7L,0xAEE23EC0L,(-2L),(-2L)},{1L,0x5BC48D29L,0x5BC48D29L,1L,8L,1L},{0L,0x21670786L,5L,0xD399EFB1L,1L,0x30360020L},{0x38FF595BL,0x4DE438EBL,1L,0xD6E9D4CEL,1L,1L},{(-5L),0x21670786L,0x359AF67AL,1L,(-1L),0x66393B35L}},{{0xCD52962EL,1L,(-2L),3L,0x49161C96L,0L},{0x490BDA48L,6L,0xCD52962EL,0x2E8FB2FCL,(-5L),0xB706BA50L},{1L,(-10L),0x5BC48D29L,(-1L),(-2L),0x21670786L},{7L,5L,0x96F96501L,0xD52E5A0FL,0L,0x4EB0016CL},{(-1L),0xD9FF47A5L,2L,0x359AF67AL,(-8L),0x4DE438EBL},{0xAEE23EC0L,0x7A0F7134L,1L,(-1L),1L,(-5L)},{1L,(-1L),0x73B2CDE9L,(-1L),1L,7L},{(-5L),0L,0x410E4990L,0x7A0F7134L,1L,0x7A0F7134L}},{{0xD6E9D4CEL,(-2L),0xD6E9D4CEL,1L,(-1L),1L},{7L,(-6L),7L,0xF55E9068L,(-10L),(-8L)},{(-2L),0x359AF67AL,0xAEE23EC0L,0xF55E9068L,0xB706BA50L,1L},{7L,1L,0x49161C96L,1L,0xE95B6803L,1L},{0xD6E9D4CEL,0xAEE23EC0L,0x10AB4BD5L,0x7A0F7134L,(-1L),0x21670786L},{0x1D85E34AL,(-5L),0x410E4990L,0x96F96501L,0x7A0F7134L,(-1L)},{0xCB1EC50DL,0x490BDA48L,1L,0x21056A9DL,0L,0xB706BA50L},{(-6L),0x21670786L,0x38FF595BL,2L,0x2E8FB2FCL,1L}},{{0x410E4990L,0xD9FF47A5L,(-1L),0L,6L,(-10L)},{0x30360020L,0x359AF67AL,6L,1L,2L,7L},{0x5BC48D29L,0xCB1EC50DL,0x21670786L,0xB706BA50L,(-10L),0x4DE438EBL},{0x4EB0016CL,1L,0xE95B6803L,0xCD52962EL,0xCD52962EL,0xE95B6803L},{0xAEE23EC0L,0xAEE23EC0L,3L,7L,0x38FF595BL,(-1L)},{1L,(-1L),(-1L),(-2L),1L,3L},{1L,1L,(-1L),0x66393B35L,0xAEE23EC0L,(-1L)},{1L,0x66393B35L,3L,(-5L),0xD6E9D4CEL,0xE95B6803L}},{{(-5L),0xD6E9D4CEL,0xE95B6803L,0xD9FF47A5L,0xD52E5A0FL,0x4DE438EBL},{2L,2L,0x21670786L,0xE95B6803L,(-8L),7L},{(-8L),7L,6L,1L,0x66393B35L,(-10L)},{7L,0L,(-1L),0x410E4990L,0xB706BA50L,1L},{(-1L),0x2E8FB2FCL,0x38FF595BL,0x10AB4BD5L,2L,1L},{(-10L),0x73B2CDE9L,0x38FF595BL,(-6L),1L,0xCB1EC50DL},{0L,0x10AB4BD5L,2L,(-1L),7L,0xCD52962EL},{1L,1L,(-1L),0x410E4990L,(-1L),1L}}};
                    int i, j, k;
                    l_506[1][5][0] |= g_2;
                    for (p_61 = 0; (p_61 < 52); p_61++)
                    {
                        l_509 |= (p_62 == (l_438[0] & p_60));
                        l_506[1][5][0] = (!((l_510 == g_3) == (l_511[1][1][3] & (p_62 || l_512[2]))));
                    }
                    l_513 &= g_32;
                    l_514[1][3][4] = l_386;
                }
                else
                {
                    l_412 = g_440;
                    return g_440;
                }
            }
            else
            {
                g_2 = 1L;
            }
            if (p_60)
                continue;
        }
        l_412 = 0x27323494L;
    }
    else
    {
        g_64[4][3][0] = (-1L);
    }
    return p_61;
}







static char func_68(unsigned p_69, char p_70)
{
    int l_75 = 0xAF80453DL;
    unsigned l_80[2];
    int l_350 = 0xAAB0F44AL;
    int i;
    for (i = 0; i < 2; i++)
        l_80[i] = 4294967295UL;
    l_350 = func_71(p_70, ((g_2 , 0x81L) , ((((g_64[3][5][1] <= l_75) , g_32) || (safe_add_func_int16_t_s_s((safe_rshift_func_int16_t_s_s((1UL > (l_75 , ((g_32 , l_80[1]) | 0xBA32L))), 10)), l_75))) , 1L)), p_69);
    return g_339;
}







static int func_71(short p_72, char p_73, char p_74)
{
    unsigned l_83 = 0x12EA0FEFL;
    int l_90 = (-1L);
    int l_160[7] = {0x7C6A24AFL,0x7C6A24AFL,0x7C6A24AFL,0x7C6A24AFL,0x7C6A24AFL,0x7C6A24AFL,0x7C6A24AFL};
    unsigned l_199 = 0xD46ABB7CL;
    int l_203 = (-2L);
    unsigned l_282 = 0x5E22DACEL;
    int i;
    if (((p_72 <= (safe_add_func_uint8_t_u_u((p_72 | ((l_83 , (((p_72 , (((safe_rshift_func_int16_t_s_s(l_83, 3)) != (safe_add_func_uint16_t_u_u((safe_add_func_uint8_t_u_u((g_3 <= ((p_73 , 7L) , g_2)), l_83)), g_64[4][4][0]))) ^ 0x9375E773L)) | l_83) < p_73)) , 0x7DFBL)), 0xB6L))) & g_3))
    {
        g_64[1][5][1] = 0xDC182152L;
    }
    else
    {
        unsigned char l_93 = 0x3AL;
        int l_106 = 2L;
        int l_214 = 0xB6F9CE4CL;
        g_64[1][0][1] |= 0xDBC40293L;
        l_90 |= (-10L);
        if ((safe_sub_func_int8_t_s_s(p_72, l_93)))
        {
            int l_104[1][3][6] = {{{7L,7L,7L,7L,7L,7L},{7L,7L,7L,7L,7L,7L},{7L,7L,7L,7L,7L,7L}}};
            const unsigned l_105 = 0x5C6C2786L;
            int l_147[4][10][6] = {{{0L,0x7D3352EEL,0x17F063A1L,(-2L),0x0995485AL,0L},{0x4B4BCE18L,1L,(-9L),0L,1L,0x7D3352EEL},{0xB3E14F1FL,(-1L),0x3B6C1D07L,0xB7103798L,0L,0x8A493C9AL},{(-1L),0xB85391ACL,(-2L),0x7B03FFABL,1L,0L},{(-6L),4L,(-5L),(-2L),1L,0L},{0L,3L,(-2L),0xAF959E53L,1L,0x8A493C9AL},{(-8L),0L,0x3B6C1D07L,0L,0xB85391ACL,0x7D3352EEL},{(-2L),(-6L),(-9L),0x5F9F679CL,(-1L),0L},{0x1B73CF63L,0xA303ACD4L,(-2L),(-2L),9L,(-9L)},{0x3922E0D3L,1L,0x2E69A228L,0x0D5B00ECL,0x0995485AL,5L}},{{4L,0x3B6C1D07L,0L,0L,1L,0xB85391ACL},{4L,(-1L),9L,0x0D5B00ECL,1L,1L},{0x3922E0D3L,0x0995485AL,0xA303ACD4L,(-2L),0x8A493C9AL,0x3B6C1D07L},{0xE83B3B4DL,0xB85391ACL,(-1L),(-4L),0x17F063A1L,4L},{(-9L),0x1342B15AL,0xB85391ACL,0xB170A64DL,0xB85391ACL,0x1342B15AL},{(-6L),(-2L),1L,0x3922E0D3L,0x046493B6L,0x7D3352EEL},{0xB170A64DL,5L,1L,0xB3E14F1FL,0x0DF63A0EL,2L},{0L,5L,1L,0xBA40B5A9L,0x046493B6L,(-1L)},{0xB7103798L,(-2L),0L,0x7B03FFABL,0xB85391ACL,0x88BD6C54L},{(-8L),0x1342B15AL,1L,0x1B73CF63L,0x17F063A1L,0x09B2EA33L}},{{(-8L),0xB85391ACL,0x0995485AL,1L,0x8A493C9AL,0x0995485AL},{0L,0x0995485AL,1L,6L,1L,0x17F063A1L},{0x1B73CF63L,(-1L),0L,(-1L),1L,1L},{0L,0x3B6C1D07L,0L,(-8L),0x0995485AL,0x17F063A1L},{(-1L),0xB0B04AA5L,(-2L),(-6L),0x05431493L,0xBFF4CCE4L},{(-6L),0x05431493L,0xBFF4CCE4L,4L,0x5D96F57FL,(-2L)},{0x8A493C9AL,(-2L),0L,0x17F063A1L,0xF4AAFBA0L,0x64895FD5L},{1L,0x8E5E8280L,0xF4AAFBA0L,0xA303ACD4L,(-9L),0x345FCB09L},{1L,(-4L),0L,0x2E69A228L,0x345FCB09L,0x5D96F57FL},{2L,0x41FD33E8L,0xB0B04AA5L,0x2E69A228L,0xDCC4AB30L,(-4L)}},{{1L,0xF4AAFBA0L,0L,0xA303ACD4L,0xB0B04AA5L,1L},{1L,(-2L),0x62D627FBL,0x17F063A1L,1L,(-1L)},{0x8A493C9AL,(-9L),(-9L),4L,0xD18C2020L,0xD18C2020L},{(-6L),0L,0L,(-6L),0x68FA652DL,0L},{(-1L),0x47A8F7DDL,0x05431493L,(-1L),0x8E5E8280L,0x62D627FBL},{0L,1L,0L,1L,0x8E5E8280L,1L},{(-9L),0x47A8F7DDL,1L,(-1L),0x68FA652DL,0x67DBE3FBL},{0x3B6C1D07L,0L,(-3L),0x046493B6L,0xD18C2020L,0xB0B04AA5L},{0L,(-9L),0x64895FD5L,(-9L),1L,0L},{(-1L),(-2L),0x67DBE3FBL,(-9L),0xB0B04AA5L,1L}}};
            const int l_149 = 0x9AB3D763L;
            int i, j, k;
            l_106 ^= (safe_lshift_func_uint16_t_u_s((((p_72 || (safe_add_func_int8_t_s_s(g_3, l_93))) < ((((safe_mod_func_uint16_t_u_u(l_93, g_3)) , (0L <= ((((safe_mod_func_uint16_t_u_u((l_90 <= (((((safe_mod_func_uint16_t_u_u(g_3, l_93)) <= l_93) <= g_2) , p_74) > g_32)), l_104[0][1][4])) , p_74) , 255UL) != l_105))) | g_64[0][4][0]) && 0x757AL)) <= (-2L)), 7));
            if (((safe_mod_func_uint16_t_u_u(((g_64[0][4][0] , (l_105 > (g_32 | (safe_rshift_func_uint8_t_u_s(p_73, g_2))))) == l_104[0][2][2]), p_72)) , ((0xD5D9L || g_32) < p_72)))
            {
                int l_119 = 1L;
                g_64[3][3][1] = (((safe_mod_func_uint8_t_u_u(0xC8L, g_3)) , (p_73 <= (0x1310E34DL & l_90))) , g_32);
                for (l_93 = 0; (l_93 > 54); l_93 = safe_add_func_uint8_t_u_u(l_93, 6))
                {
                    unsigned l_146 = 8UL;
                    for (l_83 = (-24); (l_83 == 5); ++l_83)
                    {
                        short l_120[9] = {0xA216L,0xA216L,0xA216L,0xA216L,0xA216L,0xA216L,0xA216L,0xA216L,0xA216L};
                        int l_125 = 0x9F7DC92BL;
                        int i;
                        l_125 = (((safe_mod_func_int32_t_s_s((g_2 == l_119), ((l_120[6] , (((g_32 || ((safe_sub_func_uint32_t_u_u(0xD1E8AE57L, 0xC46AF0F7L)) | (((0x09L & (safe_rshift_func_uint8_t_u_u((l_119 >= l_105), 2))) || g_64[0][4][0]) & 0x9AC2FE19L))) >= g_3) && 1L)) , (-1L)))) == p_74) , g_3);
                        g_148 |= ((0x0408L > ((g_32 > (safe_add_func_uint16_t_u_u(((safe_rshift_func_int8_t_s_u(((safe_rshift_func_int8_t_s_s((safe_mod_func_uint32_t_u_u((g_64[1][2][1] != ((safe_lshift_func_uint8_t_u_u(((safe_lshift_func_int16_t_s_u((safe_sub_func_int8_t_s_s(l_105, (safe_add_func_int32_t_s_s((0x16L == (safe_rshift_func_int16_t_s_u(p_74, 12))), ((p_72 , (safe_rshift_func_uint16_t_u_s(0xF121L, 12))) , ((l_146 | g_2) && l_120[6])))))), 6)) || p_72), 1)) | p_72)), l_83)), l_147[1][6][3])) || l_120[6]), 2)) == 0x958418D4L), p_72))) && p_72)) , p_72);
                    }
                }
                l_147[1][6][3] = l_149;
            }
            else
            {
                int l_157 = 0L;
                for (l_90 = (-23); (l_90 >= 22); l_90 = safe_add_func_int32_t_s_s(l_90, 4))
                {
                    unsigned char l_156 = 0x92L;
                    l_157 = (safe_mod_func_uint16_t_u_u(l_149, ((p_73 , (~((((g_2 , (safe_sub_func_uint16_t_u_u(l_156, ((-1L) || (l_106 == p_73))))) > ((g_3 >= (l_93 < g_32)) < l_157)) < g_32) < g_148))) , l_157)));
                    if ((g_148 > (p_72 == (safe_add_func_uint8_t_u_u(p_74, l_90)))))
                    {
                        g_64[1][2][0] = 0x427D2546L;
                    }
                    else
                    {
                        l_160[5] = p_72;
                    }
                    l_147[1][6][3] = 0x0BCC4B37L;
                }
            }
            l_106 = 0x96A3AA06L;
            for (p_73 = 0; (p_73 == 16); p_73 = safe_add_func_int8_t_s_s(p_73, 8))
            {
                int l_165[2][6][2] = {{{(-1L),0x3E6EA00FL},{(-1L),(-1L)},{0x3E6EA00FL,(-1L)},{(-1L),0x3E6EA00FL},{(-1L),(-1L)},{0x3E6EA00FL,(-1L)}},{{(-1L),0x3E6EA00FL},{(-1L),(-1L)},{0x3E6EA00FL,(-1L)},{(-1L),0x3E6EA00FL},{(-1L),(-1L)},{0x3E6EA00FL,(-1L)}}};
                int l_173 = (-3L);
                int i, j, k;
                for (g_148 = 27; (g_148 < 57); g_148 = safe_add_func_int8_t_s_s(g_148, 1))
                {
                    unsigned short l_172[6] = {0x49F9L,0x49F9L,0x49F9L,0x49F9L,0x49F9L,0x49F9L};
                    int i;
                    g_64[4][1][0] = l_165[1][1][1];
                    if ((((l_93 <= (safe_add_func_uint8_t_u_u((g_148 | (g_64[2][3][0] || ((safe_lshift_func_uint8_t_u_s(((~p_72) && (((((safe_mod_func_int8_t_s_s(p_74, (~g_32))) | (g_64[1][2][1] >= 0x76L)) , (l_172[0] | p_74)) >= l_83) , p_73)), l_172[0])) && g_32))), l_149))) ^ 0xA96CL) | p_74))
                    {
                        l_173 = p_73;
                        g_64[4][3][1] = g_3;
                    }
                    else
                    {
                        if (l_173)
                            break;
                        g_2 &= ((((-1L) && (0x62L > (safe_mod_func_int8_t_s_s(p_74, (p_74 , (((p_72 && ((-1L) >= l_165[1][1][1])) != (safe_mod_func_uint8_t_u_u((((l_106 , ((l_172[5] != p_72) || g_148)) , 65535UL) < g_32), g_3))) && p_73)))))) , 0x67619783L) >= g_3);
                        if (p_73)
                            continue;
                    }
                }
                return l_106;
            }
        }
        else
        {
            short l_188 = 0L;
            int l_349 = 0x146A2B3DL;
            for (l_93 = 0; (l_93 > 38); ++l_93)
            {
                unsigned short l_200 = 0x8B16L;
                int l_204 = 1L;
                l_200 = (safe_rshift_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s((((safe_lshift_func_int8_t_s_s((p_74 != (safe_lshift_func_int8_t_s_u(((p_73 , (l_188 >= 2UL)) || ((!(((((0x63L < (safe_sub_func_int8_t_s_s(g_64[1][2][0], l_160[5]))) > (safe_mod_func_int8_t_s_s(((p_72 && ((safe_lshift_func_int8_t_s_u((safe_sub_func_int16_t_s_s(l_106, p_72)), 4)) != g_148)) & 4294967288UL), 0xF3L))) , 0xB1D02B38L) <= 4294967295UL) | p_73)) ^ l_199)), 4))), g_148)) | p_74) , 0xBEL), 5)), 4));
                if (g_148)
                    continue;
                if ((((p_73 && (0x30A3237CL > (0UL < (g_148 >= l_160[5])))) && (((((g_2 <= p_72) || (0x4A3AFCE4L && ((safe_rshift_func_int8_t_s_s(((g_3 , 5L) > 0x12L), l_93)) & g_64[4][5][0]))) < l_203) >= 0L) > 0x56C85954L)) <= l_188))
                {
                    int l_211 = 0L;
                    unsigned short l_240[6] = {0x7076L,0x7076L,0x7076L,0x7076L,0x7076L,0x7076L};
                    const int l_257 = (-1L);
                    int i;
                    l_106 = (!l_90);
                    l_204 = (+(p_74 > p_73));
                    if (((safe_sub_func_uint16_t_u_u(g_3, (safe_mod_func_int32_t_s_s((((safe_rshift_func_int16_t_s_s((0xF3FEL || (((1L | (l_200 > l_211)) > l_106) ^ (safe_add_func_uint16_t_u_u(p_74, (g_64[1][5][1] & l_93))))), g_32)) && p_72) ^ 4294967294UL), l_211)))) | g_148))
                    {
                        int l_216 = 1L;
                        unsigned l_219 = 0xFA86E48CL;
                        l_219 = ((g_2 ^ ((0x52L <= l_214) >= ((l_160[5] , p_73) & (safe_unary_minus_func_uint8_t_u(l_216))))) > (l_214 == (l_216 || ((g_32 || 0x3240L) >= l_216))));
                    }
                    else
                    {
                        unsigned char l_227 = 0UL;
                        l_211 = (safe_add_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u((((((safe_unary_minus_func_uint8_t_u((l_211 != (((safe_sub_func_uint32_t_u_u(((((l_227 , p_73) || g_2) && (safe_add_func_uint16_t_u_u(p_72, 1UL))) , (((safe_lshift_func_uint8_t_u_s(((safe_rshift_func_uint16_t_u_s((safe_lshift_func_uint16_t_u_u(p_73, 2)), (((g_2 , (((safe_rshift_func_uint8_t_u_u((((safe_rshift_func_uint16_t_u_u((~p_73), g_2)) | g_3) && 0x7B55C8FDL), 5)) | l_211) || g_2)) != p_74) == g_3))) == p_72), p_73)) <= p_72) && 0UL)), l_240[5])) , p_73) <= p_72)))) && l_200) == 1L) | 0xA99FL) , p_72), g_148)), l_93));
                        if (g_32)
                            break;
                        l_204 = (p_73 | ((248UL <= (safe_add_func_uint32_t_u_u(((safe_mod_func_uint16_t_u_u(0xF209L, 0x8C49L)) & (4UL && (safe_add_func_uint32_t_u_u(l_93, l_93)))), (((g_64[2][4][0] , 0x2186L) && l_211) , 4294967295UL)))) && g_64[4][5][1]));
                    }
                    l_204 ^= (0xFE30L <= (safe_rshift_func_uint16_t_u_u(((l_211 | ((0xA34F9124L || (g_32 <= ((safe_lshift_func_uint16_t_u_u(l_160[5], 7)) > ((((safe_add_func_int16_t_s_s(l_83, (safe_sub_func_uint8_t_u_u((safe_add_func_int16_t_s_s(7L, l_203)), p_72)))) , 4294967293UL) && 0xDD7BFDBEL) != l_257)))) == p_72)) , 0UL), p_73)));
                }
                else
                {
                    l_204 |= (((1L & (safe_unary_minus_func_uint16_t_u(((0x40L != (p_74 && (safe_mod_func_uint32_t_u_u(g_3, (safe_sub_func_uint16_t_u_u(1UL, p_72)))))) | (safe_rshift_func_uint8_t_u_u(((safe_mod_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u(((9L <= (g_148 >= p_73)) ^ p_72), 0x58E7L)), l_188)) & g_32), p_73)))))) >= g_3) | p_72);
                    if (l_160[6])
                        break;
                    if ((~0x310ADE88L))
                    {
                        unsigned l_273 = 0UL;
                        unsigned l_274 = 1UL;
                        l_274 &= (safe_rshift_func_uint16_t_u_s((g_32 , ((((safe_rshift_func_uint16_t_u_u((l_273 && 0xF559L), ((0x44FDL ^ l_273) < 0x658AL))) , p_73) != l_199) ^ g_32)), 3));
                        g_2 &= ((safe_rshift_func_int8_t_s_s(0x73L, p_73)) && (g_64[0][3][0] , g_3));
                        g_2 = (((p_73 & p_73) == (l_188 >= p_73)) , (((l_214 <= (safe_mod_func_uint8_t_u_u(g_32, (((safe_mod_func_uint16_t_u_u(g_148, 65535UL)) != 0x00L) , 0xA2L)))) , l_188) != g_2));
                    }
                    else
                    {
                        int l_281 = 5L;
                        l_281 = l_200;
                        g_64[2][1][1] = (l_282 || (~0x41L));
                        g_64[3][4][0] = (p_74 | 0UL);
                        g_64[4][3][1] = (safe_mod_func_uint8_t_u_u(g_2, 0x68L));
                    }
                }
                for (l_106 = (-23); (l_106 <= 8); l_106 = safe_add_func_uint16_t_u_u(l_106, 1))
                {
                    unsigned char l_334 = 0x36L;
                    for (l_188 = 27; (l_188 > 24); l_188--)
                    {
                        int l_319 = 0x72CE6AA6L;
                        l_319 = (p_72 ^ ((safe_lshift_func_int16_t_s_u((safe_sub_func_int8_t_s_s((((l_160[6] ^ 0x97L) < ((safe_mod_func_int8_t_s_s(((~(g_3 < (g_148 , (0x0C6BL >= (safe_lshift_func_int8_t_s_u((safe_mod_func_int16_t_s_s(((safe_mod_func_int16_t_s_s(((((safe_lshift_func_uint16_t_u_s((safe_mod_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u((safe_add_func_uint8_t_u_u((((safe_sub_func_uint8_t_u_u(p_72, (0x9D8AF96AL <= (safe_mod_func_uint32_t_u_u(((safe_rshift_func_int8_t_s_u(l_200, p_74)) | l_282), 1L))))) >= p_74) , l_203), 0L)), p_72)), g_64[1][5][1])), 0x1755L)), l_188)) != l_188) & 0x7EL) == g_32), 0x7949L)) == g_3), p_72)), 3)))))) , g_32), p_74)) , p_72)) <= 3UL), p_73)), g_64[0][2][0])) , 0xE115L));
                        l_90 |= 0xD1A2A8A7L;
                        l_90 = ((g_64[4][5][1] == (0x00737D8DL <= 0xF796855FL)) < (g_32 != (p_74 >= (safe_mod_func_int16_t_s_s((((safe_add_func_int8_t_s_s((((g_2 , l_160[2]) ^ g_64[0][2][1]) , (p_74 <= l_160[4])), 0x56L)) == 4294967295UL) , g_32), g_64[1][1][1])))));
                        l_204 = ((safe_add_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u((safe_add_func_int8_t_s_s((p_72 ^ ((~((safe_sub_func_uint8_t_u_u((((((g_2 ^ 0xADFF3299L) , ((((safe_add_func_int32_t_s_s((p_72 && ((l_160[1] , ((((+0x2311L) , 0x88L) < 0xB4L) || l_93)) || p_74)), p_74)) , p_72) , 1L) , 0x74BAB456L)) , g_64[1][1][1]) || l_319) , 0x8AL), p_74)) > (-5L))) < l_93)), g_32)), 7)), 0UL)) <= l_334);
                    }
                    if ((safe_lshift_func_int8_t_s_u(1L, 1)))
                    {
                        g_339 &= (((g_32 & (g_32 == p_74)) < (((safe_mod_func_uint16_t_u_u((p_74 | (p_73 && ((p_72 <= l_199) <= (g_32 , (((l_282 == g_32) <= (-4L)) <= l_204))))), g_2)) < 0x95D2L) && g_64[4][2][0])) , 0L);
                        g_2 = ((((safe_sub_func_int8_t_s_s((g_64[3][1][1] == l_188), g_339)) > (safe_sub_func_uint16_t_u_u((0x5E6B33BDL > 0xBE19D1D8L), ((safe_sub_func_int32_t_s_s((safe_add_func_int32_t_s_s(l_188, p_72)), ((((p_74 , l_334) >= g_339) > g_2) , g_3))) , g_339)))) <= 255UL) < p_72);
                        return p_73;
                    }
                    else
                    {
                        unsigned char l_348 = 0xE1L;
                        g_2 = p_72;
                        l_348 = g_148;
                    }
                }
            }
            l_90 &= (l_214 ^ l_349);
        }
    }
    return p_74;
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
    transparent_crc(g_32, "g_32", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_64[i][j][k], "g_64[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_148, "g_148", print_hash_value);
    transparent_crc(g_339, "g_339", print_hash_value);
    transparent_crc(g_387, "g_387", print_hash_value);
    transparent_crc(g_440, "g_440", print_hash_value);
    transparent_crc(g_519, "g_519", print_hash_value);
    transparent_crc(g_528, "g_528", print_hash_value);
    transparent_crc(g_533, "g_533", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_540[i][j], "g_540[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_622, "g_622", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_641[i], "g_641[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_656, "g_656", print_hash_value);
    transparent_crc(g_731, "g_731", print_hash_value);
    transparent_crc(g_906, "g_906", print_hash_value);
    transparent_crc(g_1204, "g_1204", print_hash_value);
    transparent_crc(g_1240, "g_1240", print_hash_value);
    transparent_crc(g_1390, "g_1390", print_hash_value);
    transparent_crc(g_1445, "g_1445", print_hash_value);
    transparent_crc(g_1446, "g_1446", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
