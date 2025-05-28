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


union U0 {
   const char f0;
};

union U1 {
   unsigned f0;
};


static const short g_2 = 1L;
static union U1 g_86[7] = {{4294967295UL},{1UL},{4294967295UL},{4294967295UL},{1UL},{4294967295UL},{4294967295UL}};
static union U0 g_110 = {0L};
static short g_121[6] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
static unsigned char g_135 = 9UL;
static unsigned short g_140 = 0x7F01L;
static union U1 g_158 = {0xFA2621F7L};
static char g_159 = 8L;
static unsigned g_174 = 0xD89ECE45L;
static unsigned char g_193 = 0xCCL;
static unsigned short g_227 = 0x790FL;
static int g_267 = 1L;
static unsigned g_315[10][8] = {{0x1B8BEBA2L,4294967295UL,0UL,1UL,0UL,4294967295UL,0x1B8BEBA2L,5UL},{4294967295UL,4294967295UL,4294967290UL,4294967295UL,0x8659274AL,1UL,1UL,0x8659274AL},{5UL,0x1B8BEBA2L,0x1B8BEBA2L,5UL,0x8659274AL,1UL,5UL,1UL},{4294967295UL,4294967295UL,0UL,0x8659274AL,0UL,0x8659274AL,0UL,4294967295UL},{0x1B8BEBA2L,5UL,0UL,4294967295UL,1UL,0x1B8BEBA2L,4294967295UL,4294967295UL},{0UL,4294967295UL,1UL,1UL,4294967295UL,0UL,4294967295UL,0x8659274AL},{4294967295UL,1UL,0UL,0x1B8BEBA2L,4294967295UL,0UL,4294967295UL,0x1B8BEBA2L},{4294967295UL,0UL,4294967295UL,0x1B8BEBA2L,0UL,1UL,4294967295UL,0x8659274AL},{4294967295UL,0UL,4294967295UL,1UL,1UL,4294967295UL,0UL,4294967295UL},{4294967295UL,0x1B8BEBA2L,1UL,4294967295UL,0UL,5UL,4294967295UL,5UL}};
static unsigned g_346[4] = {4294967288UL,4294967288UL,4294967288UL,4294967288UL};
static unsigned char g_350[3] = {0x83L,0x83L,0x83L};
static unsigned char g_351[5][1] = {{0x9AL},{0x60L},{0x9AL},{0x60L},{0x9AL}};
static char g_358 = (-1L);
static unsigned char g_378 = 0xEEL;
static int g_421 = (-10L);
static unsigned g_454 = 0x57CEDAFAL;
static short g_477 = 2L;
static char g_478 = (-7L);
static short g_489[2] = {(-9L),(-9L)};
static short g_510 = 0x0CBCL;
static char g_520 = 0xCAL;
static unsigned g_532 = 1UL;
static unsigned g_541 = 0x60AE69A0L;
static unsigned g_542 = 0x9505C210L;
static union U1 g_553 = {0xFCE919ACL};
static short g_571 = 0x4B35L;
static int g_588[5] = {0L,0L,0L,0L,0L};
static union U0 g_1117 = {-2L};
static unsigned short g_1130 = 0xB885L;



static int func_1(void);
static char func_3(unsigned p_4, int p_5, int p_6);
static int func_10(short p_11, union U0 p_12);
static union U0 func_13(char p_14, char p_15, unsigned char p_16, char p_17);
static unsigned func_24(short p_25, const union U1 p_26, int p_27, char p_28, unsigned p_29);
static unsigned char func_38(unsigned short p_39, int p_40);
static const int func_46(int p_47, unsigned p_48, short p_49, unsigned short p_50, unsigned short p_51);
static char func_66(unsigned p_67, union U0 p_68);
static char func_72(const int p_73, union U1 p_74, unsigned p_75, union U0 p_76);
static union U1 func_77(short p_78, char p_79, unsigned short p_80, unsigned char p_81, char p_82);
static int func_1(void)
{
    unsigned l_7 = 0UL;
    int l_1050 = 0x160CABFEL;
    short l_1051 = 7L;
    short l_1075[4][5] = {{1L,1L,(-9L),1L,1L},{0x678FL,(-1L),0x678FL,0x678FL,(-1L)},{1L,(-9L),(-9L),1L,(-9L)},{(-1L),(-1L),9L,(-1L),(-1L)}};
    unsigned char l_1091 = 255UL;
    union U0 l_1104 = {0L};
    union U1 l_1164 = {0x20964BBBL};
    char l_1165 = 0L;
    int i, j;
    if (g_2)
    {
        short l_1049 = 0xE407L;
        union U1 l_1060 = {1UL};
        int l_1073 = 0L;
        char l_1103[5] = {0x9CL,0x9CL,0x9CL,0x9CL,0x9CL};
        int i;
        if ((func_3(l_7, g_2, l_7) >= g_2))
        {
            unsigned l_1040 = 0xA77316EEL;
            for (g_159 = 5; (g_159 >= 0); g_159 -= 1)
            {
                union U0 l_1044[8] = {{0x46L},{0x0BL},{0x0BL},{0x46L},{0x0BL},{0x0BL},{0x46L},{0x0BL}};
                int i;
                l_1040 = g_121[g_159];
                for (g_267 = 0; (g_267 <= 0); g_267 += 1)
                {
                    unsigned char l_1043 = 251UL;
                    g_588[2] = func_38((safe_lshift_func_uint8_t_u_s((0UL < ((func_38((g_477 >= g_553.f0), l_1043) && (g_378 <= (l_7 > (func_72((0UL <= g_121[g_159]), g_158, g_358, l_1044[1]) ^ l_1040)))) ^ l_1043)), 3)), l_1044[1].f0);
                }
            }
        }
        else
        {
lbl_1092:
            for (g_378 = (-19); (g_378 > 44); g_378++)
            {
                for (g_477 = (-10); (g_477 <= (-17)); g_477 = safe_sub_func_uint16_t_u_u(g_477, 1))
                {
                    l_1050 = l_1049;
                }
            }
        }
        for (g_140 = 0; (g_140 <= 3); g_140 += 1)
        {
            char l_1061 = 7L;
            int l_1072 = (-1L);
            int i;
            g_588[1] = (func_38(g_346[g_140], (((+0L) != l_1051) || ((((g_346[g_140] != ((safe_div_func_uint16_t_u_u(g_267, (safe_lshift_func_uint8_t_u_s((safe_lshift_func_uint8_t_u_u(((g_346[g_140] != func_72((l_1050 == 0xDDL), l_1060, g_351[3][0], g_110)) & (-1L)), l_7)), g_542)))) < l_1050)) >= 0x3DA7L) >= l_1061) >= l_1049))) ^ l_1051);
            l_1050 = ((((safe_sub_func_int32_t_s_s((g_159 > ((safe_lshift_func_uint16_t_u_u((safe_add_func_uint32_t_u_u(((safe_sub_func_int8_t_s_s(g_159, (((l_1061 != (g_553.f0 != g_346[g_140])) == func_38(g_346[g_140], (func_38((safe_sub_func_int8_t_s_s(l_1061, (~9L))), g_588[3]) >= l_1050))) || g_588[2]))) && l_1061), 4294967286UL)), g_489[0])) & l_1072)), 1L)) < 4294967294UL) || l_1060.f0) <= 0x7D6AL);
            l_1073 = g_267;
            for (l_7 = 0; (l_7 <= 3); l_7 += 1)
            {
                unsigned l_1074 = 0x0AA640D5L;
                int l_1090[6][5][4] = {{{1L,1L,(-2L),(-2L)},{1L,1L,1L,0x7C1B17C4L},{0x9AD3EC1BL,7L,8L,1L},{1L,0x01E73007L,0xA7623B35L,8L},{0x466227D2L,0x01E73007L,0x99B08E98L,1L}},{{0x01E73007L,7L,(-10L),0x7C1B17C4L},{(-1L),1L,0x01E73007L,(-2L)},{0xAC00481EL,1L,(-5L),0xA7623B35L},{1L,7L,1L,0x9AD3EC1BL},{(-1L),1L,4L,1L}},{{7L,1L,(-2L),4L},{0x466227D2L,(-1L),0x01E73007L,1L},{(-10L),7L,1L,(-4L)},{(-10L),7L,0x01E73007L,(-5L)},{0x466227D2L,(-4L),(-2L),0xA7623B35L}},{{7L,1L,4L,0x7C1B17C4L},{(-1L),0x466227D2L,1L,1L},{1L,1L,(-5L),1L},{0xAC00481EL,0x01E73007L,0x01E73007L,0xAC00481EL},{(-1L),1L,(-10L),(-4L)}},{{0x01E73007L,1L,0x99B08E98L,(-2L)},{0x466227D2L,(-1L),0xA7623B35L,(-2L)},{1L,1L,8L,(-4L)},{1L,(-1L),0xC32397E8L,(-4L)},{7L,0L,1L,0xC32397E8L}},{{(-1L),(-2L),(-5L),0x9AD3EC1BL},{0xDC504682L,1L,0x466227D2L,8L},{0xA7623B35L,1L,0xA7623B35L,1L},{(-4L),0x249B7129L,1L,7L},{7L,0x466227D2L,0xA95D02AEL,0x249B7129L}}};
                int i, j, k;
                l_1074 = 0x4CB62CB0L;
                if (l_1075[3][3])
                {
                    int l_1086 = 0x7694C7B2L;
                    int l_1089[5][6] = {{(-3L),0x058CF482L,1L,1L,0x058CF482L,(-3L)},{(-3L),(-3L),1L,(-3L),(-3L),(-3L)},{(-1L),(-3L),(-3L),(-1L),0x058CF482L,(-1L)},{(-1L),0x058CF482L,(-1L),(-3L),(-3L),(-1L)},{(-3L),(-3L),(-3L),1L,(-3L),(-3L)}};
                    int i, j;
                    g_588[1] = func_72((((safe_div_func_int16_t_s_s(((safe_div_func_int16_t_s_s((safe_div_func_int16_t_s_s((g_121[2] < ((l_1074 & (safe_lshift_func_int8_t_s_u((safe_sub_func_int32_t_s_s((g_346[g_140] && (l_1086 == 4294967288UL)), (safe_sub_func_int8_t_s_s(g_121[3], ((2L > g_86[2].f0) > g_378))))), 5))) <= g_315[0][0])), 1UL)), l_1074)) != l_1086), l_1089[4][4])) < 0xE796E0C9L) >= g_532), g_86[1], g_588[3], g_110);
                    l_1090[3][4][2] = l_1075[2][0];
                    l_1089[4][4] = l_1075[1][3];
                }
                else
                {
                    for (l_1061 = 3; (l_1061 >= 0); l_1061 -= 1)
                    {
                        g_588[1] = l_1091;
                        if (g_140)
                            break;
                    }
                    l_1073 = (l_1075[0][2] > ((l_7 | l_7) == 0x310BL));
                    if (l_1091)
                        goto lbl_1092;
                }
                g_588[1] = (!l_1050);
            }
        }
        l_1073 = ((safe_add_func_int32_t_s_s(1L, (func_66(func_46(g_478, (0x411FL && g_121[4]), (~((safe_mod_func_uint8_t_u_u(((safe_div_func_int16_t_s_s((safe_add_func_uint32_t_u_u((g_315[3][6] == l_1049), l_1050)), (safe_lshift_func_int8_t_s_s(g_588[2], l_1075[3][3])))) != g_2), 0xABL)) || l_1103[2])), l_7, l_1050), l_1104) <= 1L))) != 65530UL);
    }
    else
    {
        const unsigned l_1116 = 0x62F8C0D9L;
        unsigned l_1123 = 4294967295UL;
        union U0 l_1124 = {0x58L};
        int l_1151 = 0x029C7CE6L;
        for (g_571 = 3; (g_571 >= 0); g_571 -= 1)
        {
            unsigned char l_1115 = 254UL;
            g_588[1] = g_350[1];
            for (g_510 = 0; (g_510 <= 2); g_510 += 1)
            {
                short l_1129 = 0L;
                union U0 l_1135 = {0xA2L};
                for (l_1051 = 0; (l_1051 >= 0); l_1051 -= 1)
                {
                    int l_1118 = (-6L);
                    int i, j;
                    l_1118 = ((safe_div_func_uint16_t_u_u(g_350[(l_1051 + 2)], (safe_rshift_func_uint16_t_u_s(g_351[(g_510 + 1)][l_1051], 14)))) >= (safe_div_func_int16_t_s_s(((safe_mod_func_uint8_t_u_u((safe_mod_func_int8_t_s_s((((l_1115 == (~func_72(l_1116, g_553, g_350[0], g_1117))) || g_520) || g_1117.f0), g_227)), g_193)) > g_350[0]), 0x091EL)));
                    if (((((safe_add_func_int32_t_s_s(((g_478 != ((safe_div_func_uint8_t_u_u((l_1115 == g_86[2].f0), g_121[3])) < (func_72(l_1118, g_86[2], l_1123, l_1124) != l_1051))) <= g_350[(l_1051 + 2)]), l_1116)) < 1UL) <= g_571) < 0x53L))
                    {
                        const unsigned l_1136 = 0x451CD5F2L;
                        int l_1137 = 0x3477A31DL;
                        l_1118 = g_421;
                        l_1137 = (g_520 & (safe_mod_func_int8_t_s_s(((2UL < (((safe_div_func_uint32_t_u_u(l_1129, g_1130)) || (safe_div_func_uint8_t_u_u(g_86[2].f0, (func_72(l_1123, func_77((0xA2FEL == (safe_add_func_uint16_t_u_u(g_351[(g_510 + 1)][l_1051], 6UL))), g_421, g_351[3][0], g_532, g_588[1]), l_1124.f0, l_1135) || g_477)))) ^ l_1129)) | l_1136), l_1135.f0)));
                    }
                    else
                    {
                        g_588[3] = g_478;
                        g_588[4] = g_351[(g_510 + 1)][l_1051];
                        return l_1115;
                    }
                    l_1151 = (safe_rshift_func_int8_t_s_s(((safe_lshift_func_uint16_t_u_u((((safe_mod_func_uint16_t_u_u(((func_24((safe_lshift_func_uint16_t_u_s(((safe_unary_minus_func_int8_t_s((((l_1129 >= ((((func_66(l_1123, g_110) & (g_520 > (((((((-1L) == g_541) != (0x6101L && (safe_lshift_func_uint8_t_u_s(((safe_add_func_uint16_t_u_u(l_1123, 1UL)) == g_553.f0), 1)))) & 0x16C1L) < g_454) ^ 9L) ^ 0L))) > 0UL) == l_1123) & l_1075[0][0])) >= l_1115) < (-1L)))) <= l_1124.f0), g_542)), g_553, g_571, g_520, g_541) | g_489[0]) != 0L), 65535UL)) != g_110.f0) & l_1118), g_542)) > l_1129), 4));
                    g_588[1] = g_121[0];
                }
            }
            return g_346[3];
        }
        g_588[3] = func_3(l_1151, func_10(l_1116, l_1104), l_1116);
    }
    g_588[1] = (safe_add_func_int8_t_s_s(func_46(func_10(((safe_mod_func_int32_t_s_s((safe_div_func_int16_t_s_s(((0x8684959AL >= (5UL <= func_24(func_38((l_1075[3][3] >= (safe_div_func_int32_t_s_s((safe_sub_func_int16_t_s_s((safe_mod_func_int16_t_s_s(func_10(l_7, g_1117), func_72(l_1104.f0, l_1164, (2UL && l_1075[2][0]), l_1104))), g_489[0])), (-10L)))), g_510), g_553, l_1075[2][0], l_1091, g_1130))) <= g_541), l_1164.f0)), (-1L))) == l_1051), l_1104), g_110.f0, g_110.f0, l_1165, l_7), l_1164.f0));
    l_1050 = ((safe_sub_func_uint8_t_u_u((g_378 >= l_1075[3][3]), g_520)) > (((safe_rshift_func_int16_t_s_u(0xDA33L, 10)) != func_66((func_66(((((safe_mod_func_int32_t_s_s(((((safe_lshift_func_uint8_t_u_u(((safe_div_func_uint32_t_u_u(func_66(l_1164.f0, g_1117), g_532)) <= ((safe_mod_func_int8_t_s_s(g_1130, 0xC3L)) >= g_489[0])), 1)) > g_477) != g_1117.f0) < 0xDE47L), 0xCC8E2E2CL)) && 0x51270297L) && 0xBBL) || l_1104.f0), l_1104) & 0x4F165AC8L), g_1117)) | l_1050));
    return g_2;
}







static char func_3(unsigned p_4, int p_5, int p_6)
{
    unsigned l_41 = 8UL;
    union U0 l_69 = {0x4AL};
    const union U1 l_422[10] = {{0xAB1F8B39L},{0xAB1F8B39L},{0xAB1F8B39L},{0xAB1F8B39L},{0xAB1F8B39L},{0xAB1F8B39L},{0xAB1F8B39L},{0xAB1F8B39L},{0xAB1F8B39L},{0xAB1F8B39L}};
    int l_874 = (-1L);
    unsigned l_989 = 4294967290UL;
    int i;
    for (p_4 = (-18); (p_4 == 6); p_4 = safe_add_func_int32_t_s_s(p_4, 9))
    {
        const unsigned char l_360 = 0xAFL;
        int l_455[8][5] = {{0xE21C28B8L,7L,0xF59B802BL,(-6L),(-3L)},{0L,0x2D23FC32L,0xC3EB7847L,(-3L),0xCCE150EAL},{0xE21C28B8L,0L,0xCCE150EAL,0L,0xE21C28B8L},{0L,1L,0xCCE150EAL,0xC3EB7847L,(-1L)},{(-6L),0x3C421EE8L,0xC3EB7847L,(-2L),0x62D38288L},{0x62D38288L,0xE21C28B8L,0x62D38288L,(-1L),(-7L)},{0x2D23FC32L,7L,7L,0x2D23FC32L,0x3C421EE8L},{(-7L),7L,1L,6L,0x2D23FC32L}};
        union U1 l_879 = {1UL};
        char l_925[4] = {1L,1L,1L,1L};
        int i, j;
        l_874 = (+func_10(g_2, func_13(g_2, (g_2 > (safe_add_func_int8_t_s_s((safe_lshift_func_int16_t_s_u((g_2 ^ (safe_add_func_uint32_t_u_u(func_24((safe_rshift_func_uint16_t_u_u((((safe_mod_func_int32_t_s_s((safe_add_func_uint32_t_u_u(((safe_rshift_func_uint8_t_u_s(func_38((l_41 <= (safe_mod_func_uint16_t_u_u((safe_div_func_int32_t_s_s(func_46((safe_sub_func_int16_t_s_s((((safe_sub_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u((safe_div_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s((0xA3L != p_5), 0)), 0xEDL)), 4)), (safe_mod_func_int32_t_s_s((safe_rshift_func_int8_t_s_s(func_66(p_6, l_69), p_6)), 1UL)))) < g_110.f0) && g_140), l_360)), p_6, l_360, l_41, g_2), l_41)), p_6))), l_360), l_360)) != p_4), l_360)), l_41)) ^ 0L) & p_6), 0)), l_422[3], l_360, g_110.f0, g_2), l_360))), 3)), l_455[3][3]))), l_455[7][4], l_422[3].f0)));
        p_5 = (g_346[0] & (0x0230C9CEL | p_6));
        l_455[3][3] = l_69.f0;
        if ((((g_351[3][0] < (l_41 >= p_4)) & (safe_div_func_int32_t_s_s(((safe_div_func_uint8_t_u_u(g_135, g_542)) ^ (func_72((g_571 || g_478), l_879, (safe_sub_func_int8_t_s_s(g_489[1], 1L)), l_69) ^ 0xBDB3L)), g_121[5]))) && p_6))
        {
            unsigned short l_884[1];
            union U1 l_917 = {4294967295UL};
            int i;
            for (i = 0; i < 1; i++)
                l_884[i] = 1UL;
            for (g_140 = (-24); (g_140 >= 49); ++g_140)
            {
                union U1 l_901 = {1UL};
                l_884[0] = g_110.f0;
                g_588[3] = l_422[3].f0;
                for (g_421 = 0; (g_421 <= 1); g_421 += 1)
                {
                    int i;
                    p_6 = g_489[g_421];
                    for (l_879.f0 = 0; (l_879.f0 <= 3); l_879.f0 += 1)
                    {
                        int i;
                        g_588[1] = (g_489[g_421] && (65535UL && 0x831AL));
                        l_455[2][4] = (7UL > (safe_mod_func_int8_t_s_s((((safe_add_func_uint16_t_u_u((func_72((safe_rshift_func_int16_t_s_u(g_346[l_879.f0], ((safe_lshift_func_int16_t_s_u((((l_884[0] ^ l_422[3].f0) == ((safe_add_func_uint32_t_u_u((safe_sub_func_int8_t_s_s(((safe_add_func_int8_t_s_s(g_135, (safe_add_func_uint32_t_u_u(((g_110.f0 || 0x8DL) <= func_72(g_315[5][0], g_158, p_4, g_110)), p_5)))) == g_121[5]), g_174)), p_6)) || (-1L))) >= 0x74L), l_69.f0)) == g_121[3]))), l_901, l_455[5][0], g_110) >= 0xCAL), p_5)) >= 1UL) && g_542), 0xBEL)));
                        if (p_6)
                            continue;
                    }
                    for (g_553.f0 = 0; (g_553.f0 <= 0); g_553.f0 += 1)
                    {
                        int i, j;
                        if (g_315[(g_421 + 8)][(g_421 + 4)])
                            break;
                        p_6 = g_351[(g_421 + 1)][g_553.f0];
                    }
                }
                g_588[0] = g_227;
            }
            for (g_477 = 0; (g_477 <= 2); g_477 += 1)
            {
                unsigned l_902 = 0x5E38BBD9L;
                l_902 = 1L;
                g_588[1] = 5L;
            }
            if ((g_315[3][6] ^ (l_884[0] || l_41)))
            {
                unsigned char l_905 = 4UL;
                for (g_159 = 0; (g_159 > 7); g_159 = safe_add_func_uint32_t_u_u(g_159, 7))
                {
                    return p_5;
                }
                g_588[1] = (0x104AL > func_24(l_905, l_879, (safe_sub_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s(p_5, ((250UL || 0x57L) || (func_66(p_5, func_13(l_41, (safe_mod_func_uint32_t_u_u(((l_905 & g_520) && 0x5652L), p_6)), g_553.f0, p_4)) == p_6)))), p_6)), g_553.f0, p_6));
                p_5 = ((g_571 >= (safe_unary_minus_func_int32_t_s(0xE12187E2L))) ^ p_6);
            }
            else
            {
                unsigned l_932 = 6UL;
                for (g_421 = 25; (g_421 == (-30)); g_421--)
                {
                    unsigned short l_924 = 0xAB03L;
                    if ((safe_mod_func_int8_t_s_s(g_350[0], func_72((((4294967295UL || l_884[0]) & p_6) ^ 0x7319L), l_917, (safe_add_func_uint32_t_u_u(((0x3C2DF9A7L && p_4) == (safe_div_func_uint8_t_u_u((((((safe_rshift_func_uint16_t_u_s(p_5, 12)) != 255UL) & l_924) ^ p_4) >= l_925[1]), 0x0BL))), p_6)), l_69))))
                    {
                        p_5 = g_478;
                        return g_571;
                    }
                    else
                    {
                        g_588[2] = (p_5 > (safe_lshift_func_int16_t_s_u((g_121[5] != (0L ^ ((0x74683736L && (safe_sub_func_int8_t_s_s(l_874, (l_360 | (p_5 <= l_924))))) != (safe_sub_func_uint16_t_u_u(0x8D80L, g_351[3][0]))))), 3)));
                        if (g_159)
                            continue;
                    }
                }
                l_932 = (!p_5);
            }
        }
        else
        {
            unsigned char l_948 = 0x4EL;
            int l_975 = 0x7B9DB82EL;
            for (g_174 = (-12); (g_174 == 25); g_174 = safe_add_func_uint16_t_u_u(g_174, 8))
            {
                unsigned char l_945 = 0x8BL;
                char l_961[6][6] = {{0x76L,1L,0xF5L,0x81L,0x20L,0x81L},{0xF5L,0x76L,0xF5L,0x2CL,0x45L,0L},{(-1L),0x2CL,0x81L,(-1L),0x61L,0x61L},{(-1L),0x61L,0x61L,(-1L),0x81L,0x2CL},{(-1L),0L,0x45L,0x2CL,0xF5L,0x76L},{0xF5L,0x81L,0x20L,0x81L,0xF5L,1L}};
                unsigned l_967 = 0x40549101L;
                int i, j;
                g_588[1] = (func_72((safe_rshift_func_int16_t_s_s(0x6331L, ((p_5 <= (p_5 <= p_6)) ^ (g_358 & ((-1L) ^ (((((safe_add_func_int32_t_s_s((safe_div_func_int32_t_s_s(0xF7ECE5DEL, (safe_rshift_func_int16_t_s_s((safe_add_func_uint32_t_u_u((((l_455[4][3] & g_227) != 0x78L) && 1L), l_455[2][0])), 8)))), l_69.f0)) <= g_588[1]) < l_69.f0) < 0x04C2L) ^ p_4)))))), l_422[3], g_588[1], g_110) >= 4294967294UL);
                if (p_6)
                    break;
                g_588[1] = p_4;
                if ((0x4E1E2A2FL <= func_38(g_478, l_945)))
                {
                    char l_949[7][9] = {{8L,0xACL,0L,0L,0xACL,8L,0xACL,0L,0L},{0xC8L,0xC8L,0L,(-1L),0L,0xC8L,0xC8L,0L,(-1L)},{0x15L,0xACL,0x15L,8L,8L,0x15L,0xACL,0x15L,8L},{(-1L),0L,0L,(-1L),1L,(-1L),0L,0L,(-1L)},{6L,8L,0L,8L,6L,6L,6L,0x15L,6L},{0xC8L,(-1L),(-1L),(-1L),(-1L),0xC8L,(-1L),(-1L),(-1L)},{0xACL,0xACL,6L,0x15L,6L,0xACL,0xACL,6L,0x15L}};
                    unsigned char l_962 = 246UL;
                    union U1 l_970 = {4294967295UL};
                    int i, j;
                    if (((safe_sub_func_uint8_t_u_u(l_925[1], 0x0CL)) > (0UL ^ l_948)))
                    {
                        char l_960[8][1][1] = {{{0L}},{{0L}},{{0L}},{{0L}},{{0L}},{{0L}},{{0L}},{{0L}}};
                        int i, j, k;
                        l_949[0][7] = ((g_346[0] && l_945) | p_6);
                        p_6 = ((p_5 <= (func_38((((((safe_lshift_func_uint8_t_u_s(p_6, ((safe_sub_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s((safe_sub_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u(p_5, (g_454 < (-1L)))), ((p_6 < p_5) & func_38(g_346[0], l_949[0][7])))), p_4)), 0x91L)) > l_455[4][3]))) >= g_571) > p_5) ^ l_960[2][0][0]) ^ g_346[0]), p_4) != l_961[3][4])) || 6UL);
                    }
                    else
                    {
                        l_962 = ((l_874 >= g_510) ^ func_38(p_5, p_4));
                        p_5 = g_489[0];
                        p_6 = (safe_sub_func_uint32_t_u_u((safe_div_func_uint16_t_u_u((((-5L) || (+(((l_967 != func_38(p_4, l_949[1][5])) && func_72((func_72((safe_mod_func_uint8_t_u_u(l_967, (0xFA2FL && (g_121[3] > func_72(p_5, l_970, p_5, g_110))))), g_553, l_970.f0, g_110) != l_925[1]), g_553, l_945, g_110)) > l_948))) & 0UL), 0x23A1L)), p_4));
                    }
                    for (g_358 = 0; (g_358 < (-8)); g_358 = safe_sub_func_uint16_t_u_u(g_358, 2))
                    {
                        return g_588[1];
                    }
                }
                else
                {
                    for (g_140 = 0; (g_140 >= 36); ++g_140)
                    {
                        g_588[4] = p_5;
                        l_975 = ((p_4 || p_4) <= g_350[1]);
                        p_6 = (-1L);
                    }
                }
            }
            if (l_69.f0)
                break;
        }
    }
    if ((p_6 | (safe_div_func_int16_t_s_s((g_227 != (safe_rshift_func_int8_t_s_u((((g_350[0] < (((g_478 | (safe_lshift_func_uint16_t_u_u((l_69.f0 > g_86[2].f0), 1))) && (safe_sub_func_int32_t_s_s((((safe_div_func_int16_t_s_s(func_38((p_5 || (0xEC1F5672L <= (g_110.f0 || l_69.f0))), p_4), g_121[3])) || 1UL) && l_874), g_588[4]))) || p_6)) <= 0x9428FDB1L) && l_41), 1))), g_588[1]))))
    {
        char l_990 = 0x23L;
        int l_1013 = 0x243FF957L;
        char l_1036 = 1L;
        for (g_553.f0 = (-23); (g_553.f0 != 39); g_553.f0 = safe_add_func_int16_t_s_s(g_553.f0, 1))
        {
            union U0 l_988 = {-9L};
            if (func_72(func_72(p_4, g_86[2], l_874, l_988), func_77(l_989, l_988.f0, (((+g_510) || g_378) ^ p_6), p_6, l_990), l_41, g_110))
            {
                unsigned l_991 = 4294967291UL;
                int l_1037[6] = {1L,1L,1L,1L,1L,1L};
                int i;
                for (g_140 = 2; (g_140 <= 6); g_140 += 1)
                {
                    if (p_4)
                        break;
                    for (g_520 = 0; (g_520 <= 0); g_520 += 1)
                    {
                        int i, j;
                        p_5 = (g_351[(g_520 + 2)][g_520] & g_350[0]);
                    }
                }
                for (g_532 = 0; g_532 < 5; g_532 += 1)
                {
                    for (l_41 = 0; l_41 < 1; l_41 += 1)
                    {
                        g_351[g_532][l_41] = 253UL;
                    }
                }
                l_874 = l_991;
                if (func_72(((func_38(p_4, l_989) && (safe_mod_func_int32_t_s_s(p_6, g_158.f0))) < ((-5L) >= (safe_rshift_func_int8_t_s_s(p_5, 1)))), g_553, p_6, l_69))
                {
                    unsigned short l_1024[4][4][2];
                    int i, j, k;
                    for (i = 0; i < 4; i++)
                    {
                        for (j = 0; j < 4; j++)
                        {
                            for (k = 0; k < 2; k++)
                                l_1024[i][j][k] = 6UL;
                        }
                    }
                    g_588[0] = g_315[7][0];
                    l_1013 = ((+((safe_add_func_uint32_t_u_u((safe_sub_func_uint8_t_u_u(0xF8L, ((safe_unary_minus_func_uint16_t_u((safe_add_func_uint32_t_u_u(l_422[3].f0, ((l_69.f0 ^ ((g_571 ^ (((0xADL < (l_991 < (safe_div_func_uint32_t_u_u((0UL | ((safe_mod_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u((1UL != (safe_mul_func_uint32_t_u_u((p_6 >= 0L), 0UL))), p_6)), l_991)) >= g_477)), g_588[1])))) == g_121[3]) == 4294967295UL)) != g_193)) & g_135))))) == g_158.f0))), (-3L))) == 0x142CL)) <= p_4);
                    g_588[0] = (((((safe_sub_func_uint32_t_u_u((safe_mod_func_int8_t_s_s((l_988.f0 >= l_991), (safe_div_func_int32_t_s_s(0xCE3E702DL, (safe_mod_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_s(func_24(l_990, func_77(l_1024[3][0][1], (safe_div_func_uint16_t_u_u(p_4, g_174)), (safe_lshift_func_uint16_t_u_u((safe_add_func_uint32_t_u_u((((safe_mod_func_uint16_t_u_u((p_5 && (g_174 || g_346[2])), 0x3D5CL)) | 0x29L) | g_135), 0L)), g_477)), g_315[3][6], g_532), p_4, g_315[3][0], g_588[4]), 2)), l_988.f0)))))), g_588[1])) || 1UL) >= 0x43L) == 4294967293UL) > 0x2B6DE4E6L);
                    p_5 = (g_346[2] >= 0x7EL);
                }
                else
                {
                    char l_1035 = (-3L);
                    p_6 = func_24(p_4, l_422[3], (safe_div_func_uint32_t_u_u(((+0xA257E261L) && func_46(l_1035, func_10(p_6, l_988), l_1036, l_990, l_991)), g_489[0])), g_510, p_5);
                    l_1037[1] = 0xC1F954B5L;
                }
            }
            else
            {
                p_6 = g_110.f0;
            }
        }
    }
    else
    {
        for (g_135 = 0; (g_135 >= 39); g_135 = safe_add_func_uint16_t_u_u(g_135, 7))
        {
            return g_227;
        }
    }
    return g_421;
}







static int func_10(short p_11, union U0 p_12)
{
    unsigned l_692[3];
    int l_716 = 0x8937B03BL;
    union U0 l_806 = {-1L};
    int l_843[8][3][10] = {{{0xF19C642FL,(-1L),0x4DA9EA3CL,(-3L),0x4DA9EA3CL,(-1L),0xF19C642FL,(-6L),0x5E242D22L,0x5E242D22L},{0xF19C642FL,0x5E242D22L,(-5L),0L,0L,(-5L),0x5E242D22L,0xF19C642FL,0x971E486BL,(-6L)},{(-5L),0x5E242D22L,0xF19C642FL,0x971E486BL,(-6L),0x971E486BL,0xF19C642FL,0x5E242D22L,(-5L),0L}},{{0x4DA9EA3CL,(-1L),0xF19C642FL,(-6L),0x5E242D22L,0x5E242D22L,(-6L),0xF19C642FL,(-1L),0x4DA9EA3CL},{(-1L),0x971E486BL,(-5L),(-6L),0x551DA88DL,0x4DA9EA3CL,0x551DA88DL,(-6L),(-5L),0x971E486BL},{0L,0xF19C642FL,0x4DA9EA3CL,0x971E486BL,0x551DA88DL,(-3L),(-3L),0x551DA88DL,0x971E486BL,0x4DA9EA3CL}},{{0x551DA88DL,0xDE54D410L,0xF19C642FL,0x551DA88DL,0L,(-6L),(-1L),(-6L),0L,0x551DA88DL},{0x551DA88DL,0x4DA9EA3CL,0x551DA88DL,(-6L),(-5L),0x971E486BL,(-1L),(-1L),0x971E486BL,(-5L)},{0xF19C642FL,0xDE54D410L,0xDE54D410L,0xF19C642FL,0x551DA88DL,0L,(-6L),(-1L),(-6L),0L}},{{0x971E486BL,0x5E242D22L,0x551DA88DL,0x5E242D22L,0x971E486BL,(-3L),0xDE54D410L,(-6L),(-6L),0xDE54D410L},{(-1L),(-3L),0xF19C642FL,0xF19C642FL,(-3L),(-1L),(-5L),0xDE54D410L,0x971E486BL,0xDE54D410L},{0x5E242D22L,0xF19C642FL,0x971E486BL,(-6L),0x971E486BL,0xF19C642FL,0x5E242D22L,(-5L),0L,0L}},{{0x5E242D22L,0L,(-1L),0x551DA88DL,0x551DA88DL,(-1L),0L,0x5E242D22L,(-3L),(-5L)},{(-1L),0L,0x5E242D22L,(-3L),(-5L),(-3L),0x5E242D22L,0L,(-1L),0x551DA88DL},{0x971E486BL,0xF19C642FL,0x5E242D22L,(-5L),0L,0L,(-5L),0x5E242D22L,0xF19C642FL,0x971E486BL}},{{0xF19C642FL,(-3L),(-1L),(-5L),0xDE54D410L,0x971E486BL,(-3L),0x5E242D22L,0L,(-1L)},{0x971E486BL,0xDE54D410L,(-5L),(-1L),(-3L),0xF19C642FL,0xF19C642FL,(-3L),(-1L),(-5L)},{(-3L),(-3L),0x551DA88DL,0x971E486BL,0x4DA9EA3CL,0xF19C642FL,0L,0xF19C642FL,0x4DA9EA3CL,0x971E486BL}},{{0x971E486BL,(-6L),0x971E486BL,0xF19C642FL,0x5E242D22L,(-5L),0L,0L,(-5L),0x5E242D22L},{0x551DA88DL,(-3L),(-3L),0x551DA88DL,0x971E486BL,0x4DA9EA3CL,0xF19C642FL,0L,0xF19C642FL,0x4DA9EA3CL},{(-5L),0xDE54D410L,0x971E486BL,0xDE54D410L,(-5L),(-1L),(-3L),0xF19C642FL,0xF19C642FL,(-3L)}},{{0L,(-1L),0x551DA88DL,0x551DA88DL,(-1L),0L,0x5E242D22L,(-3L),(-5L),(-3L)},{0xDE54D410L,0x551DA88DL,(-5L),0xF19C642FL,(-5L),0x551DA88DL,0xDE54D410L,0x5E242D22L,0x4DA9EA3CL,0x4DA9EA3CL},{0xDE54D410L,0x4DA9EA3CL,0L,0x971E486BL,0x971E486BL,0L,0x4DA9EA3CL,0xDE54D410L,(-1L),0x5E242D22L}}};
    short l_866 = (-4L);
    union U1 l_869 = {0UL};
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_692[i] = 4294967287UL;
    l_692[1] = (0L < 0x3462L);
    if (g_378)
    {
        union U1 l_701 = {0UL};
        unsigned l_702 = 0UL;
        union U0 l_734 = {0xF4L};
        unsigned l_764 = 0UL;
        union U1 l_829 = {2UL};
lbl_777:
        g_588[1] = 1L;
        for (g_532 = 0; (g_532 <= 3); g_532 += 1)
        {
            const unsigned short l_711[5][1][10] = {{{0xDC1DL,65535UL,65535UL,0xDC1DL,1UL,0xDC1DL,65535UL,65535UL,0xDC1DL,1UL}},{{0xDC1DL,65535UL,0xD96EL,1UL,65535UL,1UL,0xD96EL,0xD96EL,1UL,65535UL}},{{1UL,0xD96EL,0xD96EL,1UL,65535UL,1UL,0xD96EL,0xD96EL,1UL,65535UL}},{{1UL,0xD96EL,0xD96EL,1UL,65535UL,1UL,0xD96EL,0xD96EL,1UL,65535UL}},{{1UL,0xD96EL,0xD96EL,1UL,65535UL,1UL,0xD96EL,0xD96EL,1UL,65535UL}}};
            union U0 l_715 = {0x4BL};
            union U1 l_733 = {0x52639570L};
            int l_763 = (-1L);
            const unsigned l_808 = 0xFB7FCD5AL;
            int i, j, k;
            for (g_140 = 0; (g_140 <= 4); g_140 += 1)
            {
                int l_714 = 0x7C50C236L;
                for (g_267 = 0; (g_267 <= 0); g_267 += 1)
                {
                    union U1 l_712 = {0x1EE6CA22L};
                    int i, j;
                    g_588[g_532] = ((safe_div_func_uint16_t_u_u((((safe_lshift_func_int16_t_s_u(4L, 0)) | func_38((safe_sub_func_int8_t_s_s(g_346[g_532], (func_38((g_588[g_140] && (((func_72(g_588[g_532], l_701, g_350[(g_267 + 2)], p_12) | g_351[(g_267 + 4)][g_267]) < 65532UL) == g_351[g_532][g_267])), l_702) ^ 0UL))), p_11)) < l_692[1]), l_692[1])) && 4294967295UL);
                    l_716 = func_72(g_351[g_532][g_267], func_77(g_2, p_11, l_692[2], g_588[3], func_38((g_477 ^ ((safe_add_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s((safe_add_func_int8_t_s_s((safe_sub_func_int16_t_s_s(func_72(l_711[3][0][0], l_712, (safe_unary_minus_func_int16_t_s(func_38(p_12.f0, p_12.f0))), p_12), l_714)), 1UL)), 0)), l_714)) > l_714)), g_86[2].f0)), l_711[3][0][0], l_715);
                    g_588[3] = ((p_11 != (safe_rshift_func_uint8_t_u_u(((p_11 != ((0L && g_174) || ((g_542 != l_711[4][0][5]) != (func_38(p_11, p_12.f0) && 5UL)))) || g_478), 7))) == l_714);
                }
                for (g_421 = 0; (g_421 <= 3); g_421 += 1)
                {
                    unsigned short l_745 = 0xAAD8L;
                    int i;
                    if ((safe_rshift_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u(((0x683F8AF6L != (g_346[g_421] >= (safe_mod_func_uint16_t_u_u(((safe_div_func_int32_t_s_s(func_72(((safe_lshift_func_int8_t_s_u((+g_346[g_532]), 2)) ^ (((safe_lshift_func_int8_t_s_u((g_588[g_532] >= (((0L || ((safe_div_func_uint8_t_u_u(func_72(g_315[3][6], l_733, g_315[5][1], l_734), g_346[g_421])) > g_478)) || (-1L)) >= 6UL)), g_140)) < 4294967295UL) < 0L)), l_733, p_12.f0, g_110), 0x8103C1C5L)) != g_358), p_12.f0)))) || l_734.f0), l_711[1][0][6])), 10)))
                    {
                        g_588[1] = (0x3973L > g_489[0]);
                    }
                    else
                    {
                        unsigned l_746 = 0x5AB4B9E5L;
                        l_746 = func_72(g_489[0], g_86[2], (safe_lshift_func_int8_t_s_s((func_72(l_716, l_701, p_11, p_12) < (p_12.f0 != (safe_div_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s((safe_add_func_int32_t_s_s((safe_add_func_int16_t_s_s((~0xB0C9L), g_489[0])), p_12.f0)), p_11)), l_745)))), 0)), g_110);
                        l_716 = (g_315[3][6] & (safe_add_func_uint8_t_u_u(((0x0431L != (safe_lshift_func_uint16_t_u_u(g_267, 9))) >= g_267), (safe_lshift_func_int16_t_s_u(l_746, (safe_sub_func_int8_t_s_s((((((p_12.f0 <= l_692[0]) != (p_12.f0 <= ((((safe_lshift_func_int8_t_s_u(((safe_add_func_int16_t_s_s(((safe_add_func_int16_t_s_s((((0xF7L ^ 246UL) == 0xFAL) | l_714), 0x4D53L)) <= l_692[1]), p_12.f0)) < 2UL), p_12.f0)) & 0x9A73L) || 0UL) || g_510))) == p_11) == g_520) != (-7L)), g_86[2].f0)))))));
                    }
                }
                l_763 = ((safe_lshift_func_uint8_t_u_u(p_12.f0, 7)) == p_11);
            }
            if (p_11)
            {
                unsigned char l_767 = 0xBDL;
                if (p_12.f0)
                {
                    return l_764;
                }
                else
                {
                    if ((safe_lshift_func_uint16_t_u_u(l_763, 12)))
                    {
                        g_588[1] = 0xC4BF866BL;
                        return g_159;
                    }
                    else
                    {
                        if (p_11)
                            break;
                    }
                    return l_767;
                }
            }
            else
            {
                if (p_12.f0)
                    break;
                if (g_315[3][6])
                    continue;
                l_716 = p_12.f0;
            }
            for (g_158.f0 = 0; (g_158.f0 <= 2); g_158.f0 += 1)
            {
                int l_776 = 0x1E76D398L;
                int l_782 = 0L;
                union U1 l_818 = {0x6B4D7706L};
                short l_828[7][2] = {{0x0951L,0x0951L},{0x0951L,0x0951L},{0x0951L,0x0951L},{0x0951L,0x0951L},{0x0951L,0x0951L},{0x0951L,0x0951L},{0x0951L,0x0951L}};
                int i, j;
                if (g_315[(g_532 + 3)][g_158.f0])
                {
                    for (g_520 = 2; (g_520 >= 0); g_520 -= 1)
                    {
                        short l_774 = 0x4CAEL;
                        union U1 l_775 = {0x36FDE1AAL};
                        int i;
                        l_763 = (safe_rshift_func_int8_t_s_u((g_350[g_520] || (func_72((safe_sub_func_uint8_t_u_u((safe_div_func_uint16_t_u_u(g_350[g_158.f0], g_350[g_158.f0])), (((~(p_12.f0 & ((g_135 <= l_774) < 0x610C445EL))) > func_72(l_701.f0, g_86[5], g_346[0], g_110)) <= g_510))), l_775, l_774, g_110) <= l_734.f0)), 5));
                        l_776 = g_193;
                        if (g_121[3])
                            break;
                    }
                    if (l_716)
                        goto lbl_777;
                    g_588[3] = (l_776 && (0x4626L == (((safe_mod_func_uint32_t_u_u(1UL, (safe_add_func_uint8_t_u_u(l_782, 0xD7L)))) > (safe_rshift_func_uint8_t_u_u(l_763, g_346[0]))) <= (func_38((safe_mod_func_uint32_t_u_u((safe_rshift_func_int16_t_s_s((g_489[0] > 0x7CL), l_711[3][0][0])), 4294967287UL)), p_12.f0) | g_351[1][0]))));
                }
                else
                {
                    unsigned l_795 = 0UL;
                    union U1 l_805 = {4294967295UL};
                    for (g_227 = 0; (g_227 <= 2); g_227 += 1)
                    {
                        char l_800 = (-1L);
                        g_588[0] = ((safe_add_func_uint8_t_u_u(p_11, (g_541 | (((safe_add_func_uint32_t_u_u(g_351[3][0], (l_795 & (((safe_div_func_int32_t_s_s((safe_div_func_uint32_t_u_u(4294967290UL, func_72(((-6L) & (l_800 != ((0x6815L <= (((((safe_mod_func_int8_t_s_s((safe_add_func_uint8_t_u_u(0x78L, l_716)), 0x87L)) & p_11) > 5UL) != p_11) != 0x30FAL)) & 0xA12BD820L))), l_805, g_351[4][0], l_806))), p_11)) | 65527UL) ^ 0x78L)))) ^ 1UL) <= g_121[3])))) >= p_12.f0);
                        return p_11;
                    }
                }
                for (g_478 = 1; (g_478 >= 0); g_478 -= 1)
                {
                    unsigned l_807 = 0x5DB2DB27L;
                    int i;
                    l_716 = g_489[g_478];
                    l_807 = g_510;
                    if (g_571)
                        break;
                    return p_11;
                }
                g_588[1] = ((func_72(l_808, func_77((safe_div_func_uint16_t_u_u((safe_div_func_uint8_t_u_u(l_734.f0, (safe_unary_minus_func_int8_t_s((0x4EB0F7E4L != (safe_mod_func_int8_t_s_s((p_11 && ((safe_add_func_uint16_t_u_u(((func_72(g_110.f0, l_818, g_2, g_110) > g_378) < p_12.f0), p_11)) && 0x1505DAFDL)), g_532))))))), l_711[3][0][5])), g_346[0], g_571, g_478, l_818.f0), p_12.f0, g_110) ^ g_520) && 0xE0035F31L);
                for (g_193 = 1; (g_193 <= 4); g_193 += 1)
                {
                    unsigned l_825 = 0x06B20EEFL;
                    const unsigned char l_832 = 0xDCL;
                    int l_863 = (-1L);
                    int i;
                    g_588[(g_158.f0 + 2)] = (((g_588[g_532] ^ g_588[g_158.f0]) == (safe_sub_func_uint32_t_u_u(((((safe_sub_func_uint8_t_u_u(g_267, 7UL)) >= 1L) == (safe_sub_func_uint16_t_u_u(l_825, ((func_72((1L || (safe_div_func_uint16_t_u_u(l_828[0][0], l_806.f0))), l_829, l_711[3][0][0], g_110) != p_11) >= l_711[2][0][1])))) >= 0x3BL), g_315[8][4]))) & g_532);
                    if (p_12.f0)
                    {
                        union U1 l_833 = {0UL};
                        int l_834 = 0x33647103L;
                        l_763 = g_510;
                        l_834 = (safe_lshift_func_int16_t_s_u((l_828[1][0] | func_72(l_832, l_833, g_315[3][6], g_110)), (1L || p_11)));
                        l_843[1][1][8] = ((safe_lshift_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u(((safe_mod_func_uint32_t_u_u(((-7L) >= (0xE9L > (0x0FBAL >= ((p_12.f0 && 0xE0L) || l_843[2][0][9])))), g_542)) && ((safe_lshift_func_int8_t_s_s(0x55L, 0)) ^ p_11)), p_12.f0)), l_806.f0)) || g_121[3]);
                    }
                    else
                    {
                        unsigned l_852 = 0x8C529AEEL;
                        int l_864 = (-8L);
                        l_776 = ((safe_div_func_uint8_t_u_u((p_12.f0 != (!(safe_div_func_int16_t_s_s((g_478 | (g_159 != (-8L))), l_852)))), g_588[g_532])) | (g_315[(g_532 + 3)][g_158.f0] | (safe_lshift_func_uint16_t_u_u(((safe_mod_func_int16_t_s_s((p_12.f0 <= (0x2BC9FA6AL & g_489[1])), g_110.f0)) && 0x7BL), 13))));
                        g_588[3] = (safe_sub_func_int16_t_s_s(l_782, (g_542 || p_11)));
                        l_864 = (safe_rshift_func_int16_t_s_s(0x6F25L, (g_378 > ((~p_11) >= l_863))));
                    }
                    return l_828[0][1];
                }
            }
        }
    }
    else
    {
        unsigned char l_865 = 0UL;
        union U1 l_872[7][1] = {{{0x59D80177L}},{{0xA2AFA9F8L}},{{0x59D80177L}},{{0xA2AFA9F8L}},{{0x59D80177L}},{{0xA2AFA9F8L}},{{0x59D80177L}}};
        int l_873 = 0x1C230ABBL;
        int i, j;
        l_873 = (l_865 & func_46(l_866, g_553.f0, (safe_add_func_int32_t_s_s((func_72(g_378, l_869, (g_227 >= (g_350[0] != ((func_72(((safe_mod_func_uint16_t_u_u(l_865, p_11)) == g_421), l_872[6][0], g_351[3][0], g_110) || l_865) && 4294967292UL))), p_12) | 248UL), 0xC55DEF99L)), p_11, p_11));
    }
    return g_489[0];
}







static union U0 func_13(char p_14, char p_15, unsigned char p_16, char p_17)
{
    int l_460 = (-3L);
    int l_461 = 1L;
    unsigned char l_466 = 0x92L;
    char l_473[4][2];
    int l_490 = 0L;
    unsigned short l_492[8] = {0xF0DEL,0x002CL,0x002CL,0xF0DEL,0x002CL,0x002CL,0xF0DEL,0x002CL};
    const short l_505 = (-6L);
    union U1 l_506 = {0x74A97AA3L};
    union U0 l_507 = {0x52L};
    unsigned short l_538[3];
    short l_587 = 0L;
    int l_606[8];
    int i, j;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 2; j++)
            l_473[i][j] = (-4L);
    }
    for (i = 0; i < 3; i++)
        l_538[i] = 1UL;
    for (i = 0; i < 8; i++)
        l_606[i] = (-1L);
lbl_522:
    if ((safe_unary_minus_func_int8_t_s(((safe_rshift_func_uint8_t_u_s((g_267 != 0x1CL), 6)) <= g_351[3][0]))))
    {
        short l_459 = 0x8702L;
        l_460 = l_459;
        if (l_459)
            goto lbl_491;
        l_461 = l_459;
        l_466 = (safe_add_func_int16_t_s_s((!(g_227 | ((p_16 || (0x14BB1F64L || (g_193 > func_38(g_267, ((safe_rshift_func_uint8_t_u_u((g_454 ^ func_38(g_2, p_17)), 0)) != 1L))))) > p_14))), (-3L)));
    }
    else
    {
        short l_472 = 4L;
        int l_476 = 0xEF8654FCL;
        union U1 l_483 = {1UL};
        union U0 l_488[9] = {{0xF6L},{0x86L},{0xF6L},{0x86L},{0xF6L},{0x86L},{0xF6L},{0x86L},{0xF6L}};
        int i;
        for (g_267 = 0; (g_267 >= (-8)); --g_267)
        {
            short l_471 = 0xAC52L;
            l_461 = (p_17 < (l_471 >= func_38(l_472, l_473[1][1])));
            l_476 = (safe_mod_func_uint32_t_u_u(g_158.f0, g_351[3][0]));
            g_477 = func_38(g_135, l_471);
            g_478 = (func_38((~p_16), g_193) <= g_346[2]);
        }
        l_476 = l_472;
        g_489[0] = ((func_24((safe_div_func_int8_t_s_s((safe_mod_func_uint8_t_u_u(g_454, 0xB3L)), func_72((!g_267), l_483, (safe_sub_func_uint16_t_u_u(g_358, (g_121[3] < (l_483.f0 <= ((p_17 > (safe_add_func_uint32_t_u_u(l_461, l_476))) | 0x5EL))))), l_488[4]))), l_483, p_15, l_460, l_483.f0) ^ (-1L)) || g_315[9][3]);
    }
lbl_491:
    l_461 = ((l_490 & (0x99A3L | 65535UL)) == (-1L));
lbl_548:
    l_492[6] = l_461;
    if ((safe_div_func_uint16_t_u_u(((((safe_div_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u((safe_div_func_uint32_t_u_u(l_461, (safe_div_func_int32_t_s_s(func_72((safe_div_func_uint16_t_u_u(l_505, (0x49D98BB1L ^ 0x395B3AD1L))), l_506, l_466, l_507), (0xA9E1L | l_460))))), 0x0FL)), 0xADB5L)) < l_466) || (-10L)) == l_466), l_461)))
    {
        unsigned l_519 = 0xBF6AE2B5L;
        int l_521 = (-5L);
        union U0 l_539 = {1L};
        if (g_358)
        {
            unsigned l_537 = 4294967295UL;
            int l_540 = 0xE9ED3B3AL;
            for (g_174 = (-18); (g_174 > 57); g_174 = safe_add_func_uint16_t_u_u(g_174, 8))
            {
                int l_511 = 1L;
                for (p_14 = 5; (p_14 >= 0); p_14 -= 1)
                {
                    int i;
                    l_461 = g_121[p_14];
                    if (g_510)
                    {
                        unsigned l_518 = 4294967295UL;
                        g_520 = func_38((0xD0L > l_511), (p_15 <= ((g_315[3][6] & (+(p_14 & ((((+(p_16 ^ (safe_sub_func_int8_t_s_s(((safe_sub_func_int32_t_s_s(0L, (0x52L ^ ((safe_lshift_func_uint8_t_u_s((65535UL >= p_16), p_14)) | l_518)))) | p_15), p_17)))) && l_519) != g_358) ^ g_159)))) <= 253UL)));
                    }
                    else
                    {
                        short l_531[8];
                        int i;
                        for (i = 0; i < 8; i++)
                            l_531[i] = 0x9F4BL;
                        l_521 = p_17;
                        if (g_174)
                            goto lbl_522;
                        l_531[4] = (253UL | (safe_add_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_u(0UL, 4)), (safe_mod_func_int16_t_s_s((~(safe_add_func_int16_t_s_s(g_350[0], g_358))), g_351[4][0])))));
                        g_532 = p_16;
                    }
                }
            }
            l_461 = ((8UL > (((0x14L && (safe_lshift_func_int8_t_s_s((((safe_lshift_func_uint16_t_u_u((func_46(l_537, g_477, l_537, func_66(p_17, g_110), l_538[0]) ^ 0xBAL), l_521)) != p_16) >= g_454), 1))) ^ 0x48L) > p_16)) ^ p_14);
            l_540 = func_72(l_461, g_86[2], l_521, l_539);
            g_541 = p_14;
        }
        else
        {
            g_542 = g_532;
        }
    }
    else
    {
        char l_556 = 0xFEL;
        union U0 l_610 = {4L};
        int l_615 = 0x89F0EA6DL;
        for (l_461 = 0; (l_461 <= (-28)); l_461 = safe_sub_func_int32_t_s_s(l_461, 7))
        {
            const unsigned l_547 = 0xCCCE24DEL;
            int l_582 = 0x543DC6B8L;
            union U1 l_609 = {4294967295UL};
            union U0 l_614 = {0x09L};
            char l_633 = 0x74L;
            if ((safe_mod_func_uint16_t_u_u(g_174, func_72(l_547, g_86[2], g_159, g_110))))
            {
                if (g_477)
                    goto lbl_548;
                if (l_492[5])
                    break;
            }
            else
            {
                const union U1 l_557 = {0x57B25D7DL};
                int l_658 = (-9L);
                unsigned l_685 = 0UL;
                if ((safe_mod_func_uint32_t_u_u((func_24(p_17, g_86[2], g_159, (safe_rshift_func_uint16_t_u_s(((func_72(g_346[0], g_553, p_15, l_507) >= (safe_div_func_int16_t_s_s(p_15, 0xE54EL))) <= g_553.f0), l_556)), g_520) > g_478), p_17)))
                {
                    unsigned l_570[4][5][4] = {{{0x59C50F79L,0x7F8BD2DBL,4294967295UL,0x7F8BD2DBL},{1UL,0x33DAA007L,1UL,4294967295UL},{0x7F8BD2DBL,0x33DAA007L,0x33DAA007L,0x7F8BD2DBL},{0x33DAA007L,0x7F8BD2DBL,1UL,0x59C50F79L},{0x33DAA007L,1UL,0x33DAA007L,1UL}},{{0x59C50F79L,4294967295UL,1UL,1UL},{0x7F8BD2DBL,0x7F8BD2DBL,0x54257C0BL,4294967295UL},{4294967295UL,0x59C50F79L,0x54257C0BL,0x59C50F79L},{0x7F8BD2DBL,1UL,1UL,0x54257C0BL},{0x59C50F79L,1UL,1UL,0x59C50F79L}},{{1UL,0x59C50F79L,0x7F8BD2DBL,4294967295UL},{1UL,0x7F8BD2DBL,1UL,1UL},{0x59C50F79L,4294967295UL,1UL,1UL},{0x7F8BD2DBL,0x7F8BD2DBL,0x54257C0BL,4294967295UL},{4294967295UL,0x59C50F79L,0x54257C0BL,0x59C50F79L}},{{0x7F8BD2DBL,1UL,1UL,0x54257C0BL},{0x59C50F79L,1UL,1UL,0x59C50F79L},{1UL,0x59C50F79L,0x7F8BD2DBL,4294967295UL},{1UL,0x7F8BD2DBL,1UL,1UL},{0x59C50F79L,4294967295UL,1UL,1UL}}};
                    short l_589 = 1L;
                    union U0 l_605[2] = {{1L},{1L}};
                    short l_613 = 3L;
                    int i, j, k;
                    g_571 = func_46(func_24(g_174, l_557, g_227, (safe_lshift_func_int16_t_s_u(((g_158.f0 <= (~g_267)) & (safe_add_func_uint8_t_u_u(((g_378 < (func_38(func_38((safe_div_func_int32_t_s_s((safe_mod_func_int32_t_s_s(func_38(((safe_mod_func_int8_t_s_s(((p_16 | ((safe_mod_func_int8_t_s_s(l_570[0][2][2], p_17)) <= l_547)) || g_553.f0), p_16)) >= p_15), p_16), 0x5871FE35L)), l_556)), g_267), l_556) <= 0x68L)) ^ p_15), g_158.f0))), 7)), g_86[2].f0), p_14, g_541, l_490, l_557.f0);
                    if ((((safe_lshift_func_uint16_t_u_s((safe_rshift_func_int8_t_s_u((safe_div_func_int8_t_s_s((safe_mod_func_int8_t_s_s(1L, (safe_mod_func_int8_t_s_s(((g_135 | g_553.f0) | 0xC120B9FAL), l_582)))), (safe_add_func_uint8_t_u_u(((safe_lshift_func_int8_t_s_u(((~g_571) || l_587), 4)) | ((p_17 != l_547) <= 0L)), l_556)))), l_570[0][2][2])), 0)) ^ l_556) & p_14))
                    {
                        unsigned short l_590[8] = {0x771FL,0x771FL,0x771FL,0x771FL,0x771FL,0x771FL,0x771FL,0x771FL};
                        int i;
                        if (g_158.f0)
                            goto lbl_522;
                        g_588[1] = 0x1250FD14L;
                        l_589 = (1UL || func_66(p_16, g_110));
                        if (l_590[3])
                            break;
                    }
                    else
                    {
                        const char l_593 = 2L;
                        l_606[3] = ((0x14L | (safe_sub_func_uint16_t_u_u(((~func_72(l_593, func_77(((safe_mod_func_uint8_t_u_u((safe_sub_func_int8_t_s_s((l_593 | p_17), ((safe_add_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_u((p_17 >= 0x99F8L), (((safe_unary_minus_func_int8_t_s((((0UL | (p_17 <= (safe_lshift_func_uint8_t_u_u((((func_66(g_350[0], g_110) & l_557.f0) == 0x259AL) < p_15), 7)))) ^ g_542) < p_14))) & 0xE4D1L) | 2L))), p_16)) > l_570[0][2][2]))), p_17)) > g_571), g_478, l_547, p_14, g_110.f0), g_553.f0, l_605[0])) || p_16), 0UL))) || p_16);
                        g_588[1] = ((safe_add_func_uint16_t_u_u(func_72(p_16, l_609, ((-1L) || 251UL), l_610), (g_227 != (safe_mod_func_int16_t_s_s(((0L | func_72(p_15, g_553, l_613, l_614)) | p_15), 0x7841L))))) >= 0xA131L);
                        l_615 = (g_588[1] | 0xF885L);
                    }
                    l_606[2] = ((((safe_lshift_func_int16_t_s_u(((func_24(g_346[0], g_553, (safe_mod_func_int16_t_s_s((g_378 && ((((safe_sub_func_uint16_t_u_u((l_610.f0 > p_15), ((safe_rshift_func_uint16_t_u_u(((l_582 != ((((safe_rshift_func_uint16_t_u_u(l_609.f0, 2)) | (~((safe_unary_minus_func_int32_t_s(p_17)) | (safe_add_func_uint8_t_u_u((safe_mod_func_int32_t_s_s(l_615, (-2L))), 0x46L))))) != l_633) > l_582)) && g_174), 2)) < p_15))) & l_507.f0) | 0x306DL) == p_16)), g_159)), l_606[7], l_614.f0) && p_15) ^ l_633), p_14)) && g_553.f0) >= p_16) != 0UL);
                }
                else
                {
                    int l_647 = 0L;
                    union U0 l_682 = {-6L};
                    for (l_490 = 0; (l_490 <= 18); l_490 = safe_add_func_int8_t_s_s(l_490, 3))
                    {
                        char l_638 = 0L;
                        g_588[4] = ((safe_lshift_func_int16_t_s_s(l_638, (0x09C1L > (func_46(p_17, (safe_mod_func_int32_t_s_s((((safe_mod_func_uint16_t_u_u(g_346[0], p_15)) | p_16) <= (safe_rshift_func_uint16_t_u_s(p_17, 8))), (((safe_div_func_uint32_t_u_u((func_72(p_14, g_158, g_193, g_110) < p_15), l_557.f0)) >= 0x8199L) | p_15))), g_159, l_547, l_557.f0) == g_553.f0)))) > l_647);
                    }
                    if ((safe_rshift_func_uint16_t_u_u(p_15, 12)))
                    {
                        l_615 = (l_556 || func_46((safe_rshift_func_int8_t_s_u((((p_16 >= (safe_add_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s(l_647, ((p_15 == (g_346[0] > func_38(p_14, g_571))) != (safe_add_func_uint8_t_u_u((l_647 ^ 0x3781L), p_14))))), g_489[0]))) == l_647) < 0UL), 4)), g_351[4][0], l_557.f0, g_267, p_15));
                    }
                    else
                    {
                        unsigned short l_671 = 0x518DL;
                        l_615 = g_267;
                        l_606[3] = 0x1A819723L;
                        if (g_510)
                            goto lbl_491;
                        g_588[2] = func_46(p_17, l_658, (safe_add_func_int32_t_s_s(g_121[0], g_421)), p_17, (func_72((safe_div_func_int32_t_s_s((safe_rshift_func_uint16_t_u_u(((safe_mod_func_uint16_t_u_u((g_542 < (safe_rshift_func_uint8_t_u_u((p_17 != (safe_rshift_func_int8_t_s_u((g_350[0] == g_351[1][0]), 3))), 3))), l_610.f0)) == p_17), 0)), 0x983677CDL)), g_553, p_16, g_110) != l_671));
                    }
                    for (p_16 = 25; (p_16 != 51); p_16 = safe_add_func_uint16_t_u_u(p_16, 3))
                    {
                        if (g_477)
                            break;
                        return g_110;
                    }
                    g_588[3] = (safe_rshift_func_int16_t_s_u((safe_lshift_func_uint16_t_u_s((g_571 & (safe_div_func_int8_t_s_s((safe_sub_func_int16_t_s_s((func_72(l_614.f0, g_86[0], g_121[2], l_682) == ((safe_sub_func_uint16_t_u_u((p_14 ^ (g_315[6][0] ^ p_16)), 0x0893L)) && g_315[9][1])), 0x52F1L)), l_615))), l_685)), 12));
                }
                l_615 = (safe_add_func_int32_t_s_s(l_685, ((p_14 > l_615) >= (p_14 | ((p_14 && p_17) && (l_685 ^ (safe_rshift_func_int16_t_s_u(l_556, (safe_rshift_func_int8_t_s_u((~(0x7F61D5CEL < g_532)), 7))))))))));
                if (l_505)
                    break;
            }
        }
    }
    return l_507;
}







static unsigned func_24(short p_25, const union U1 p_26, int p_27, char p_28, unsigned p_29)
{
    unsigned char l_425 = 250UL;
    int l_442 = 0x3C239BF8L;
    unsigned l_445 = 0UL;
    unsigned char l_450 = 0x54L;
    union U0 l_451 = {0xF8L};
    l_442 = ((safe_mod_func_int32_t_s_s((l_425 > ((safe_lshift_func_int16_t_s_s(l_425, ((safe_add_func_int32_t_s_s((g_315[3][6] != (safe_add_func_uint8_t_u_u((!(safe_div_func_uint8_t_u_u((l_425 >= (((safe_add_func_uint8_t_u_u((+(0x47F9L == (((safe_add_func_uint16_t_u_u(((g_121[3] >= (safe_div_func_uint32_t_u_u(1UL, p_28))) <= g_110.f0), l_425)) == 249UL) > g_159))), (-1L))) ^ 0x9C50L) >= p_29)), p_29))), g_315[5][1]))), 0x365DECADL)) | g_227))) && 4294967293UL)), 0xB62DD90EL)) <= 0xA6B990DFL);
    g_454 = func_66((safe_rshift_func_int8_t_s_u(l_445, (((0xC9L && (safe_lshift_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u(func_72(g_350[0], p_26, l_450, l_451), (safe_rshift_func_uint16_t_u_u(g_315[3][6], (func_38(l_445, g_121[3]) < 5L))))), g_121[0]))) <= p_27) ^ 0x38L))), g_110);
    l_442 = (!g_140);
    return g_267;
}







static unsigned char func_38(unsigned short p_39, int p_40)
{
    unsigned l_398[5];
    union U1 l_400 = {0xAF559F17L};
    unsigned char l_403[4] = {0xC1L,0xC1L,0xC1L,0xC1L};
    unsigned l_404 = 9UL;
    union U0 l_417 = {0L};
    union U1 l_418 = {0xE039B3D8L};
    union U0 l_419 = {0x02L};
    short l_420 = 0x8F76L;
    int i;
    for (i = 0; i < 5; i++)
        l_398[i] = 4294967293UL;
    for (g_135 = (-21); (g_135 != 58); g_135++)
    {
        int l_399 = 0x24E79B49L;
        union U1 l_401 = {0x8971933DL};
        union U0 l_402 = {0L};
        for (p_40 = (-14); (p_40 <= (-16)); --p_40)
        {
            return p_40;
        }
        l_404 = (safe_add_func_uint16_t_u_u(1UL, func_72((g_267 ^ (l_398[4] > l_399)), l_400, (func_72(l_399, l_401, l_400.f0, l_402) || l_403[1]), g_110)));
        return p_40;
    }
    p_40 = l_404;
    g_421 = (func_72(l_398[4], func_77((safe_mod_func_int32_t_s_s(p_40, (safe_rshift_func_int16_t_s_u((func_72((((g_351[3][0] | (safe_lshift_func_int16_t_s_u(1L, 13))) != ((((func_72((p_39 | ((safe_lshift_func_uint16_t_u_u((safe_div_func_uint8_t_u_u(g_86[2].f0, g_350[0])), 2)) < 5UL)), l_400, l_403[1], l_417) & g_174) > 0x1AL) ^ g_351[3][0]) & 65534UL)) && 0L), l_418, p_39, l_419) >= g_140), 6)))), l_403[1], l_420, p_39, l_418.f0), g_140, l_419) || 0x7B07397FL);
    return l_420;
}







static const int func_46(int p_47, unsigned p_48, short p_49, unsigned short p_50, unsigned short p_51)
{
    union U0 l_370[9] = {{5L},{5L},{5L},{5L},{5L},{5L},{5L},{5L},{5L}};
    unsigned l_371 = 4294967286UL;
    int i;
    for (p_50 = 0; (p_50 < 10); p_50 = safe_add_func_uint32_t_u_u(p_50, 4))
    {
        int l_369 = 1L;
        int l_390 = 0x9AA41E39L;
        unsigned short l_391 = 6UL;
        g_378 = (safe_lshift_func_int8_t_s_s(((3L && (((((safe_add_func_uint16_t_u_u(func_72(p_51, g_86[2], (safe_lshift_func_int8_t_s_s(l_369, 2)), l_370[8]), (l_371 ^ g_346[0]))) != (safe_sub_func_int16_t_s_s((safe_div_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s(p_50, g_350[0])), p_50)), p_47))) && l_371) < 0x7838L) == 6UL)) ^ 65535UL), 6));
        l_391 = (safe_rshift_func_uint8_t_u_s(func_66(g_346[1], l_370[0]), (safe_mod_func_uint32_t_u_u((safe_sub_func_uint8_t_u_u((((!p_47) != (!(((g_2 != (safe_unary_minus_func_uint16_t_u(l_371))) | (safe_div_func_uint8_t_u_u(((safe_rshift_func_uint8_t_u_u(((l_390 > 246UL) <= g_110.f0), 2)) < g_2), g_110.f0))) > 0xD0L))) & 0x88CA31A6L), p_49)), l_390))));
    }
    return g_350[2];
}







static char func_66(unsigned p_67, union U0 p_68)
{
    unsigned l_83 = 0xCE570888L;
    union U0 l_87 = {0x53L};
    union U1 l_109 = {3UL};
    int l_111 = (-7L);
    short l_190 = 6L;
    union U1 l_312 = {0UL};
    if ((safe_lshift_func_int8_t_s_s(func_72(p_67, func_77((l_83 == (g_2 >= p_67)), l_83, g_2, l_83, (((g_2 || l_83) | g_2) && l_83)), p_68.f0, l_87), 4)))
    {
        unsigned char l_103[5];
        union U1 l_116 = {0x1DF95200L};
        union U0 l_132[6] = {{-1L},{-1L},{-1L},{-1L},{-1L},{-1L}};
        unsigned char l_141 = 0UL;
        const unsigned l_184 = 0x32CE05B3L;
        int l_194 = (-8L);
        int i;
        for (i = 0; i < 5; i++)
            l_103[i] = 0x59L;
        for (l_83 = (-10); (l_83 != 2); l_83 = safe_add_func_uint16_t_u_u(l_83, 6))
        {
            unsigned short l_102 = 65530UL;
            int l_104 = 0L;
            if (p_68.f0)
                break;
            if (l_102)
                continue;
            l_104 = l_103[1];
            if (g_2)
                break;
        }
        l_111 = (safe_sub_func_uint32_t_u_u(((((l_103[0] != (safe_lshift_func_uint16_t_u_s(0xA33FL, 6))) <= l_103[1]) >= (l_87.f0 < func_72(g_2, l_109, (l_103[1] <= (((((func_72((p_67 | (g_86[2].f0 != 0x98D42F46L)), l_109, l_103[1], p_68) && g_86[2].f0) <= g_86[2].f0) == l_83) > g_2) & 0L)), g_110))) != l_103[1]), l_109.f0));
        g_121[3] = (g_2 < (safe_add_func_uint16_t_u_u((safe_sub_func_int16_t_s_s(g_110.f0, l_103[1])), ((((((func_72(g_110.f0, l_116, g_2, g_110) || func_72((safe_mod_func_uint32_t_u_u(((safe_mod_func_uint8_t_u_u(l_83, g_86[2].f0)) == 0x56L), (-6L))), l_109, g_86[2].f0, p_68)) | 0UL) ^ l_116.f0) < g_2) != g_110.f0) | g_2))));
        if (((safe_div_func_uint8_t_u_u((0x68L >= (safe_lshift_func_uint8_t_u_u(0xE3L, func_72(((safe_mod_func_int8_t_s_s(((safe_div_func_int8_t_s_s((l_87.f0 != (((p_67 <= (func_72((g_86[2].f0 & 0xB991B7FBL), l_109, (safe_rshift_func_int16_t_s_u(g_121[3], 6)), l_132[4]) && 9UL)) >= 0xD562L) & p_67)), 0x39L)) == g_86[2].f0), 0x23L)) & l_109.f0), l_116, p_67, g_110)))), l_116.f0)) == 0x84L))
        {
            l_111 = (safe_lshift_func_uint16_t_u_s(65526UL, 0));
            g_135 = p_67;
            if (g_110.f0)
            {
                int l_138 = (-1L);
                union U1 l_139 = {4294967295UL};
                g_140 = ((g_110.f0 & ((func_72((+(((safe_sub_func_int8_t_s_s(l_138, (((4L >= ((p_68.f0 || func_72(g_2, g_86[4], p_68.f0, p_68)) | g_121[1])) || p_67) || g_86[2].f0))) && (-10L)) | 4294967289UL)), l_139, g_121[3], p_68) >= 0x09L) & l_103[1])) < l_103[1]);
                return g_2;
            }
            else
            {
                return l_141;
            }
        }
        else
        {
            union U1 l_185 = {0x408E3904L};
            char l_189 = 0L;
            int l_216 = 0xD4B936DAL;
            int l_221 = 0L;
            union U0 l_228 = {0x33L};
            if ((safe_lshift_func_uint8_t_u_s((safe_rshift_func_uint16_t_u_s(func_72(l_111, l_116, p_67, p_68), 8)), (0xAAL == g_135))))
            {
                return g_86[2].f0;
            }
            else
            {
                unsigned l_181 = 0xC3003DDAL;
                union U1 l_187 = {4UL};
                unsigned l_207[8] = {0xD43F7002L,0xD43F7002L,0xD43F7002L,0xD43F7002L,0xD43F7002L,0xD43F7002L,0xD43F7002L,0xD43F7002L};
                union U0 l_208 = {0L};
                int i;
                for (l_83 = (-2); (l_83 < 20); l_83++)
                {
                    short l_173 = 0xF8C0L;
                    if ((p_67 || (-1L)))
                    {
                        if (p_67)
                            break;
                        g_159 = func_72(((safe_rshift_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s(65535UL, 8)), 4)) != (safe_add_func_int16_t_s_s(g_2, (safe_add_func_uint16_t_u_u(1UL, (p_67 <= (+(safe_rshift_func_uint16_t_u_u(g_2, 0))))))))), g_158, p_68.f0, l_87);
                    }
                    else
                    {
                        unsigned short l_160 = 0x9668L;
                        return l_160;
                    }
                    for (l_109.f0 = (-29); (l_109.f0 <= 59); l_109.f0 = safe_add_func_uint8_t_u_u(l_109.f0, 9))
                    {
                        unsigned short l_186 = 0x7B79L;
                        union U0 l_188[5][8] = {{{0xAFL},{0xAFL},{0x1EL},{0xAFL},{0xAFL},{0x1EL},{0xAFL},{0xAFL}},{{1L},{0xAFL},{1L},{1L},{0xAFL},{1L},{1L},{0xAFL}},{{0xAFL},{1L},{1L},{0xAFL},{1L},{1L},{0xAFL},{1L}},{{0xAFL},{0xAFL},{0x1EL},{0xAFL},{0xAFL},{0x1EL},{0xAFL},{0xAFL}},{{1L},{0xAFL},{1L},{1L},{0xAFL},{1L},{1L},{0xAFL}}};
                        int i, j;
                        g_174 = (((safe_lshift_func_int16_t_s_s(g_158.f0, ((safe_mod_func_uint32_t_u_u(((func_72(p_67, func_77((g_140 & (1UL && (((safe_div_func_int32_t_s_s(((safe_div_func_uint16_t_u_u((safe_div_func_uint32_t_u_u(4294967295UL, (-2L))), p_67)) < 0xB0CBD639L), p_67)) ^ 0x0EL) == 0x424E9327L))), g_140, g_121[3], g_121[3], g_110.f0), g_140, l_132[4]) >= g_2) == 0UL), l_173)) > p_67))) == 0L) <= 0x90E8L);
                        l_189 = (safe_lshift_func_int8_t_s_u(0x6FL, (0UL == (safe_add_func_uint32_t_u_u(g_135, (safe_lshift_func_uint16_t_u_s(((l_181 | func_72((func_72((safe_div_func_int8_t_s_s(func_72(l_184, l_185, l_181, p_68), l_186)), g_158, p_68.f0, g_110) > 0x67L), l_187, p_67, l_188[3][4])) <= p_68.f0), l_187.f0)))))));
                        if (l_141)
                            continue;
                    }
                    if (l_190)
                        continue;
                }
                for (g_158.f0 = 0; g_158.f0 < 7; g_158.f0 += 1)
                {
                    union U1 tmp = {4294967291UL};
                    g_86[g_158.f0] = tmp;
                }
                l_111 = g_121[3];
                if (l_185.f0)
                {
                    union U0 l_209[5] = {{0x40L},{0x40L},{0x40L},{0x40L},{0x40L}};
                    union U1 l_210 = {0x54B497D7L};
                    unsigned short l_215 = 65529UL;
                    int i;
                    for (g_174 = (-15); (g_174 > 17); g_174 = safe_add_func_int8_t_s_s(g_174, 5))
                    {
                        g_193 = l_187.f0;
                    }
                    l_194 = p_68.f0;
                    l_194 = (l_190 == p_67);
                    if ((safe_rshift_func_uint8_t_u_s(0xF8L, ((safe_rshift_func_int16_t_s_u(((func_72(func_72(func_72((safe_rshift_func_uint16_t_u_s((safe_rshift_func_uint16_t_u_s((safe_div_func_uint32_t_u_u(4294967290UL, g_135)), (((safe_sub_func_uint16_t_u_u(0UL, l_187.f0)) | func_72(l_184, func_77(l_207[7], func_72(l_109.f0, g_158, l_189, p_68), g_121[3], l_181, p_67), g_110.f0, l_208)) < 0xF0D97DA6L))), 2)), l_109, l_185.f0, g_110), g_86[3], p_68.f0, l_209[3]), l_210, l_109.f0, l_87) != g_135) < g_121[1]), g_158.f0)) && 254UL))))
                    {
                        l_215 = (func_72(((safe_rshift_func_int16_t_s_u(((safe_sub_func_uint8_t_u_u((p_67 && (-8L)), ((l_132[4].f0 < 4294967293UL) || func_72(p_67, func_77(l_185.f0, g_121[3], p_67, l_189, l_83), l_87.f0, g_110)))) | 0x48C6L), p_68.f0)) | 0xEDL), g_158, p_67, g_110) >= p_67);
                        l_216 = g_174;
                        g_227 = ((safe_div_func_int8_t_s_s(l_109.f0, l_221)) & ((((safe_unary_minus_func_uint8_t_u((safe_add_func_uint16_t_u_u(0x7755L, (safe_rshift_func_int8_t_s_s(func_72(p_67, l_185, (p_67 || (l_185.f0 <= l_210.f0)), g_110), g_193)))))) > l_185.f0) & 0x14L) != 0x81L));
                        return g_86[2].f0;
                    }
                    else
                    {
                        l_194 = l_207[1];
                        return g_121[3];
                    }
                }
                else
                {
                    int l_229 = 8L;
                    if (func_72(p_67, l_116, p_67, l_228))
                    {
                        l_229 = g_121[3];
                    }
                    else
                    {
                        return g_110.f0;
                    }
                    for (g_140 = 0; g_140 < 6; g_140 += 1)
                    {
                        g_121[g_140] = (-1L);
                    }
                    l_216 = l_187.f0;
                }
            }
            l_194 = ((l_109.f0 != (safe_add_func_uint32_t_u_u((safe_mod_func_uint8_t_u_u(g_193, g_193)), ((1UL == p_68.f0) != l_87.f0)))) != l_132[4].f0);
        }
    }
    else
    {
        int l_244 = 5L;
        union U1 l_247[7] = {{4294967295UL},{4294967295UL},{4294967295UL},{4294967295UL},{4294967295UL},{4294967295UL},{4294967295UL}};
        int l_321 = 0x418E2FD4L;
        int i;
        for (l_83 = (-10); (l_83 != 20); ++l_83)
        {
            unsigned l_248 = 0xE24A4532L;
            union U1 l_266 = {0x883D1008L};
            union U0 l_292 = {-2L};
            int l_294[6][4] = {{0xFF29AA79L,0xFF29AA79L,(-7L),(-1L)},{1L,0xF3555BB4L,1L,(-7L)},{1L,(-7L),(-7L),1L},{0xFF29AA79L,(-7L),(-1L),(-7L)},{(-7L),0xF3555BB4L,(-1L),(-1L)},{0xFF29AA79L,0xFF29AA79L,(-7L),(-1L)}};
            union U1 l_313[8] = {{0x4196F249L},{0xFF211D84L},{0xFF211D84L},{0x4196F249L},{0xFF211D84L},{0xFF211D84L},{0x4196F249L},{0xFF211D84L}};
            union U1 l_347[3] = {{4294967295UL},{4294967295UL},{4294967295UL}};
            int i, j;
            if ((safe_mod_func_uint16_t_u_u(((safe_add_func_int32_t_s_s(l_109.f0, (safe_rshift_func_int16_t_s_s(0x7A43L, (safe_sub_func_uint16_t_u_u(p_67, (l_244 ^ p_68.f0))))))) >= (+(((g_2 >= (((((safe_add_func_uint32_t_u_u((((func_72(g_121[3], l_247[6], p_68.f0, p_68) > g_86[2].f0) && l_248) == 1UL), g_174)) != l_190) ^ (-1L)) & g_135) > g_110.f0)) == p_67) < 65532UL))), p_67)))
            {
                int l_265 = 0xAD263BBAL;
                for (g_193 = 0; (g_193 < 3); g_193++)
                {
                    unsigned short l_261 = 0x91EFL;
                    for (g_135 = 0; (g_135 <= 5); g_135 += 1)
                    {
                        int i;
                        return g_121[g_135];
                    }
                    if ((safe_sub_func_uint32_t_u_u(g_121[3], (((safe_sub_func_uint16_t_u_u(0xE32BL, g_158.f0)) > 0x227E0448L) | (safe_sub_func_uint8_t_u_u(g_121[2], (safe_lshift_func_uint8_t_u_s((safe_sub_func_uint8_t_u_u((g_110.f0 == func_72(g_227, func_77(g_135, g_159, p_68.f0, g_140, g_121[3]), g_193, g_110)), l_261)), 1))))))))
                    {
                        int l_262[4][8] = {{9L,9L,0xADAEAB58L,0xADAEAB58L,9L,9L,0xADAEAB58L,0xADAEAB58L},{9L,9L,0xADAEAB58L,0xADAEAB58L,9L,9L,0xADAEAB58L,0xADAEAB58L},{9L,9L,0xADAEAB58L,0xADAEAB58L,9L,9L,0xADAEAB58L,0xADAEAB58L},{9L,9L,0xADAEAB58L,0xADAEAB58L,9L,9L,0xADAEAB58L,0xADAEAB58L}};
                        int i, j;
                        return l_262[2][3];
                    }
                    else
                    {
                        return g_121[3];
                    }
                }
                g_267 = ((safe_add_func_int8_t_s_s((p_68.f0 < l_265), p_67)) & ((func_72(g_110.f0, l_266, l_266.f0, p_68) <= (((-1L) || g_193) == p_68.f0)) < 0UL));
            }
            else
            {
                int l_291 = (-10L);
                union U0 l_345[3] = {{0xB3L},{0xB3L},{0xB3L}};
                int i;
                for (l_248 = (-15); (l_248 <= 11); l_248 = safe_add_func_uint16_t_u_u(l_248, 8))
                {
                    int l_272 = 0x30807B0CL;
                    union U1 l_281 = {0UL};
                    unsigned l_311 = 0x9C51B163L;
                    if ((safe_sub_func_uint32_t_u_u(l_272, (safe_sub_func_uint8_t_u_u(((safe_sub_func_uint32_t_u_u(g_135, g_158.f0)) || ((g_140 > (safe_div_func_int8_t_s_s(l_109.f0, (-4L)))) < g_193)), 0L)))))
                    {
                        return p_68.f0;
                    }
                    else
                    {
                        unsigned short l_288[9];
                        union U0 l_293 = {1L};
                        char l_314 = 7L;
                        int i;
                        for (i = 0; i < 9; i++)
                            l_288[i] = 6UL;
                        l_294[1][2] = ((safe_div_func_uint8_t_u_u(((func_72(g_140, l_281, ((func_72((l_248 == p_67), g_158, (safe_mod_func_int8_t_s_s((safe_mod_func_uint32_t_u_u((+(func_72(((+p_68.f0) && ((safe_lshift_func_int16_t_s_s(l_288[6], p_68.f0)) != (((((!(safe_mod_func_uint8_t_u_u(g_135, g_267))) == 0xCA94L) != l_244) <= g_121[3]) < l_266.f0))), l_266, l_291, l_292) | p_67)), g_159)), 0x7CL)), g_110) & g_158.f0) == l_244), l_293) < l_272) && p_68.f0), g_2)) >= g_110.f0);
                        if (p_67)
                            break;
                        g_315[3][6] = (safe_add_func_int8_t_s_s(((p_68.f0 > (safe_lshift_func_uint8_t_u_s((((safe_mod_func_uint8_t_u_u(func_72(((p_67 && (0x57L < (+(safe_mod_func_uint16_t_u_u(func_72(func_72(func_72((safe_lshift_func_uint8_t_u_s(g_159, 4)), g_86[0], func_72((p_68.f0 < ((safe_rshift_func_int16_t_s_s((safe_sub_func_int16_t_s_s(((l_311 && (func_72(l_247[6].f0, l_247[6], p_68.f0, g_110) > 1UL)) & l_247[6].f0), p_68.f0)), 3)) <= 0x1C24DCEBL)), g_158, g_267, g_110), l_292), l_312, l_291, g_110), l_247[5], g_174, g_110), l_87.f0))))) >= g_135), l_313[2], l_314, l_292), l_87.f0)) & 0xC1L) || g_121[3]), 1))) | p_68.f0), 7L));
                        l_321 = (safe_unary_minus_func_uint8_t_u((l_292.f0 != ((3UL | (g_135 <= l_291)) > (l_247[6].f0 <= (!l_291))))));
                    }
                    for (g_158.f0 = 0; (g_158.f0 > 18); g_158.f0++)
                    {
                        unsigned l_336 = 0x4FC259D0L;
                        l_111 = g_159;
                        g_346[0] = ((safe_sub_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u(p_67, (safe_rshift_func_int16_t_s_u(((safe_div_func_int8_t_s_s(l_83, (+(g_135 > (safe_sub_func_uint8_t_u_u((1L || (safe_add_func_int16_t_s_s(l_336, ((safe_div_func_uint16_t_u_u((safe_div_func_int16_t_s_s((((func_72(((-7L) > (safe_div_func_uint16_t_u_u((((safe_div_func_uint16_t_u_u(0x589AL, l_281.f0)) != g_315[6][4]) != p_68.f0), g_140))), l_281, p_68.f0, l_345[1]) != p_67) >= l_87.f0) <= p_68.f0), p_68.f0)), 0x6B3CL)) != g_135)))), p_67)))))) != p_67), 5)))), g_193)) && (-2L));
                        g_350[0] = (((l_336 <= p_67) != (((-1L) < (+(func_72(g_267, l_347[0], (8UL || (safe_div_func_int32_t_s_s(func_72(p_67, func_77(g_227, l_190, p_68.f0, p_67, l_281.f0), g_267, g_110), p_68.f0))), g_110) <= 0x053CD6AEL))) >= 65530UL)) && g_121[1]);
                    }
                }
            }
            g_351[3][0] = g_350[1];
        }
    }
    for (g_227 = 0; g_227 < 7; g_227 += 1)
    {
        union U1 tmp = {0UL};
        g_86[g_227] = tmp;
    }
    if (l_312.f0)
    {
        for (g_227 = 0; g_227 < 5; g_227 += 1)
        {
            for (p_67 = 0; p_67 < 1; p_67 += 1)
            {
                g_351[g_227][p_67] = 0xD3L;
            }
        }
    }
    else
    {
        const short l_356[1][4][9] = {{{0xB5CCL,0xB5CCL,5L,0x0B71L,5L,0xB5CCL,0xB5CCL,5L,0x0B71L},{0x02F4L,0x4813L,0x02F4L,5L,5L,0x02F4L,0x4813L,0x02F4L,5L},{0x02F4L,5L,5L,0x02F4L,0x4813L,0x02F4L,5L,5L,0x02F4L},{0xB5CCL,5L,0x0B71L,5L,0xB5CCL,0xB5CCL,5L,0x0B71L,5L}}};
        union U0 l_357 = {0L};
        int l_359 = 0xF5F61162L;
        int i, j, k;
        g_358 = (safe_sub_func_int8_t_s_s((safe_sub_func_uint32_t_u_u((func_72((func_72(((g_135 <= 0x45L) <= p_68.f0), func_77(p_67, func_72(l_356[0][3][5], func_77(g_346[0], g_351[3][0], g_140, p_68.f0, g_351[3][0]), g_2, l_87), l_109.f0, g_158.f0, g_346[2]), l_111, l_87) >= l_356[0][1][2]), l_312, g_158.f0, l_357) | 0xCEB4F8A2L), l_190)), 0x44L));
        l_359 = l_190;
    }
    return p_68.f0;
}







static char func_72(const int p_73, union U1 p_74, unsigned p_75, union U0 p_76)
{
    unsigned char l_90 = 0x5BL;
    int l_99 = 0x8E49ED22L;
    l_99 = (safe_sub_func_int8_t_s_s((-7L), ((!g_2) | (((!(((((7L < l_90) & (safe_mod_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_u(g_2, 15)), 3L))) ^ (safe_mod_func_uint8_t_u_u(p_73, (p_76.f0 && (!(safe_sub_func_uint8_t_u_u(l_90, 5L))))))) && p_74.f0) && 3L)) == g_2) <= 4294967295UL))));
    return p_76.f0;
}







static union U1 func_77(short p_78, char p_79, unsigned short p_80, unsigned char p_81, char p_82)
{
    unsigned short l_84 = 4UL;
    int l_85 = 0x40A7B48FL;
    l_85 = l_84;
    return g_86[2];
}





int main (int argc, char* argv[])
{
    int i, j;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_86[i].f0, "g_86[i].f0", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_110.f0, "g_110.f0", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_121[i], "g_121[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_135, "g_135", print_hash_value);
    transparent_crc(g_140, "g_140", print_hash_value);
    transparent_crc(g_158.f0, "g_158.f0", print_hash_value);
    transparent_crc(g_159, "g_159", print_hash_value);
    transparent_crc(g_174, "g_174", print_hash_value);
    transparent_crc(g_193, "g_193", print_hash_value);
    transparent_crc(g_227, "g_227", print_hash_value);
    transparent_crc(g_267, "g_267", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(g_315[i][j], "g_315[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_346[i], "g_346[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_350[i], "g_350[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_351[i][j], "g_351[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_358, "g_358", print_hash_value);
    transparent_crc(g_378, "g_378", print_hash_value);
    transparent_crc(g_421, "g_421", print_hash_value);
    transparent_crc(g_454, "g_454", print_hash_value);
    transparent_crc(g_477, "g_477", print_hash_value);
    transparent_crc(g_478, "g_478", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_489[i], "g_489[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_510, "g_510", print_hash_value);
    transparent_crc(g_520, "g_520", print_hash_value);
    transparent_crc(g_532, "g_532", print_hash_value);
    transparent_crc(g_541, "g_541", print_hash_value);
    transparent_crc(g_542, "g_542", print_hash_value);
    transparent_crc(g_553.f0, "g_553.f0", print_hash_value);
    transparent_crc(g_571, "g_571", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_588[i], "g_588[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1117.f0, "g_1117.f0", print_hash_value);
    transparent_crc(g_1130, "g_1130", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
