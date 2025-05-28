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
   char f0;
};


static int g_4 = (-1L);
static int g_6 = 1L;
static int g_10 = (-1L);
static int g_11 = 0L;
static int g_20[3][2] = {{(-7L),(-7L)},{(-7L),(-7L)},{(-7L),(-7L)}};
static int *g_55 = (void*)0;
static int **g_54 = &g_55;
static int g_58 = 0x307758A8L;
static union U0 g_62 = {0L};
static int **g_92[1] = {&g_55};
static const union U0 g_93 = {0x34L};
static int g_142[6][6] = {{0x57CAC61BL,0L,0L,0x57CAC61BL,0x6D203B38L,0x57CAC61BL},{0x57CAC61BL,0x6D203B38L,0x57CAC61BL,0L,0L,0x57CAC61BL},{0x154EA432L,0x154EA432L,0L,0xF8CB8F1EL,0L,0x154EA432L},{0L,0x6D203B38L,0xF8CB8F1EL,0xF8CB8F1EL,0x6D203B38L,0L},{0x154EA432L,0L,0xF8CB8F1EL,0L,0x154EA432L,0x154EA432L},{0x57CAC61BL,0L,0L,0x57CAC61BL,0x6D203B38L,0x57CAC61BL}};
static int g_144 = 1L;
static unsigned g_188 = 0xB3F8241AL;
static union U0 **g_199 = (void*)0;
static union U0 g_326 = {0L};
static unsigned g_352[1][6] = {{0xB87F0C31L,0xB87F0C31L,0x9802F6E7L,0x7C3F0AD0L,0x7C3F0AD0L,0xB87F0C31L}};
static int *g_366 = &g_20[1][0];
static union U0 *g_435 = &g_326;
static union U0 ** const g_434 = &g_435;
static const int *g_524[6] = {&g_58,&g_58,&g_20[1][0],&g_58,&g_58,&g_20[1][0]};
static char g_541[8] = {0x2FL,0x2FL,0x2FL,0x2FL,0x2FL,0x2FL,0x2FL,0x2FL};
static int g_557 = 1L;
static int g_559 = 0x47361511L;
static union U0 *g_590[10] = {&g_326,&g_326,&g_326,&g_62,&g_62,&g_326,&g_326,&g_326,&g_62,&g_62};



static int func_1(void);
static int func_12(int p_13, const int * const p_14);
static int * func_21(short p_22, unsigned char p_23, union U0 p_24, unsigned short p_25);
static int func_26(unsigned p_27, union U0 p_28);
static int func_29(union U0 p_30, unsigned short p_31);
static union U0 func_32(int ** p_33, unsigned p_34, int * p_35, int * p_36);
static int ** func_37(int ** p_38, int p_39, int ** p_40, union U0 p_41);
static unsigned char func_42(const int p_43, union U0 p_44, int * p_45, unsigned char p_46);
static const int func_47(int * p_48);
static int * func_49(int ** p_50, int ** p_51, const union U0 p_52, unsigned short p_53);
static int func_1(void)
{
    int *l_3 = &g_4;
    int **l_2 = &l_3;
    union U0 l_5[8] = {{0x72L},{0x72L},{0x72L},{0x72L},{0x72L},{0x72L},{0x72L},{0x72L}};
    const short l_614 = 0xE85EL;
    unsigned char l_620[3][7] = {{1UL,0x74L,1UL,0x74L,1UL,0x74L,1UL},{252UL,255UL,255UL,252UL,252UL,255UL,255UL},{0xD2L,0x74L,0xD2L,0x74L,0xD2L,0x74L,0xD2L}};
    int *l_630 = &g_20[1][0];
    int *l_682 = (void*)0;
    int *l_683 = &g_557;
    int i, j;
    (*l_2) = (void*)0;

    ;
    for (g_4 = 7; (g_4 >= 0); g_4 -= 1)
    {
        int l_15 = 5L;
        char l_612 = 1L;
        int **l_613 = &l_3;
        union U0 l_615 = {0L};
        unsigned char l_642 = 9UL;
        char l_648 = 1L;
        char l_679 = 0L;
        int l_681 = 0x7BE79D9FL;
        for (g_6 = 0; (g_6 <= 7); g_6 += 1)
        {
            int *l_9 = &g_10;
            int l_610 = (-1L);
            unsigned l_611 = 4294967295UL;
            const unsigned short l_629[8][5][6] = {{{0x37CAL,0xB2C9L,65530UL,0x8D34L,0x00D8L,0x8D34L},{7UL,0x8D34L,7UL,65535UL,0xC4A4L,65530UL},{65535UL,0xC4A4L,65530UL,0xF978L,0x3ECEL,0x4435L},{65532UL,65530UL,0xCE85L,0xF978L,65535UL,65535UL},{65535UL,0x445FL,0x445FL,65535UL,0xB2C9L,65535UL}},{{7UL,65532UL,0x4435L,0x8D34L,0xCE85L,65530UL},{0x37CAL,0xF978L,0x00D8L,0xF978L,65530UL,0x445FL},{7UL,0x3ECEL,65530UL,0x3ECEL,7UL,0xF978L},{0x4435L,65535UL,0x8D34L,0x2D34L,65530UL,0xB2C9L},{0x8D34L,0xC4A4L,7UL,65535UL,0xCE85L,0xB2C9L}},{{0xF978L,0x445FL,0x8D34L,0x8D34L,0x445FL,0xF978L},{0xCE85L,7UL,65530UL,65530UL,0x4435L,0x445FL},{7UL,7UL,0x4435L,65535UL,0x00D8L,0x37CAL},{7UL,0x2D34L,65535UL,65530UL,65535UL,0x2D34L},{0xCE85L,0x4435L,65535UL,0x8D34L,0x2D34L,65530UL}},{{0xF978L,65532UL,65530UL,65535UL,0xB2C9L,65535UL},{0x8D34L,65532UL,0xC4A4L,0x2D34L,0x2D34L,0xC4A4L},{0x4435L,0x4435L,65532UL,0x3ECEL,65535UL,7UL},{7UL,0x2D34L,0x37CAL,0xF978L,0x00D8L,65532UL},{0xB2C9L,7UL,0x37CAL,7UL,0x4435L,7UL}},{{65532UL,7UL,65532UL,65530UL,0x445FL,0xC4A4L},{65530UL,0x445FL,0xC4A4L,0x00D8L,0xCE85L,65535UL},{0x3ECEL,0xC4A4L,65530UL,65530UL,7UL,7UL},{7UL,0x00D8L,0x00D8L,7UL,65532UL,0x4435L},{0x3ECEL,0x445FL,0xB2C9L,65530UL,0x2D34L,0x8D34L}},{{7UL,65530UL,0x37CAL,0xCE85L,0x2D34L,0xF978L},{65532UL,0x445FL,7UL,0x445FL,65532UL,0xCE85L},{0x37CAL,0x00D8L,65535UL,0x4435L,7UL,7UL},{65535UL,65532UL,65532UL,0x00D8L,65535UL,7UL},{0xCE85L,0xF978L,65535UL,65535UL,0xF978L,0xCE85L}},{{65535UL,65530UL,7UL,0x2D34L,0x37CAL,0xF978L},{65530UL,65532UL,0x37CAL,0xB2C9L,65530UL,0x8D34L},{65530UL,0x4435L,0xB2C9L,0x2D34L,0xB2C9L,0x4435L},{65535UL,0x37CAL,0x00D8L,65535UL,0x4435L,7UL},{0xCE85L,0x3ECEL,0x2D34L,0x00D8L,7UL,0xB2C9L}},{{65535UL,0x3ECEL,65532UL,0x4435L,0x4435L,65532UL},{0x37CAL,0x37CAL,0x3ECEL,0x445FL,0xB2C9L,65530UL},{65532UL,0x4435L,0x8D34L,0xCE85L,65530UL,0x3ECEL},{7UL,65532UL,7UL,0xC4A4L,0xB2C9L,0xC4A4L},{0xCE85L,0xC4A4L,0xCE85L,65532UL,0x00D8L,0xF978L}}};
            short l_639[7] = {0xE96DL,0xE96DL,0xE96DL,0xE96DL,0xE96DL,0xE96DL,0xE96DL};
            unsigned l_649 = 4294967289UL;
            int i, j, k;
            (*l_9) |= (safe_mod_func_int8_t_s_s(g_4, 1L));
            for (g_10 = 7; (g_10 >= 1); g_10 -= 1)
            {
                unsigned char l_597[8][10][3] = {{{1UL,0x8AL,255UL},{0xCDL,0xCDL,0x16L},{0x6BL,0x2AL,0x56L},{0x3FL,0xCDL,255UL},{0x4AL,0x8AL,0xBDL},{0x0BL,0x3FL,255UL},{0x33L,247UL,0x56L},{0xABL,0x0BL,0x16L},{0x33L,0x81L,255UL},{0x0BL,0xABL,0xB3L}},{{0x4AL,0x81L,0xFDL},{0x3FL,0x0BL,0xDDL},{0x6BL,247UL,0xFDL},{0xCDL,0x3FL,0xB3L},{1UL,0x8AL,255UL},{0xCDL,0xCDL,0x16L},{0x6BL,0x2AL,0x56L},{0x3FL,0xCDL,255UL},{0x4AL,0x8AL,0xBDL},{0x0BL,0x3FL,255UL}},{{0x33L,247UL,0x56L},{0xABL,0x0BL,0x16L},{0x33L,0x81L,255UL},{0x0BL,0xABL,0xB3L},{0x4AL,0x81L,0xFDL},{0x3FL,0x0BL,0xDDL},{0x3AL,0UL,0xBAL},{0xCEL,255UL,0xCDL},{3UL,2UL,0x83L},{0xCEL,0xCEL,0x5CL}},{{0x3AL,0xCDL,0x33L},{255UL,0xCEL,0xE5L},{0UL,2UL,0x6BL},{0xFEL,255UL,0xE5L},{0x3CL,0UL,0x33L},{9UL,0xFEL,0x5CL},{0x3CL,255UL,0x83L},{0xFEL,9UL,0xCDL},{0UL,255UL,0xBAL},{255UL,0xFEL,0x0BL}},{{0x3AL,0UL,0xBAL},{0xCEL,255UL,0xCDL},{3UL,2UL,0x83L},{0xCEL,0xCEL,0x5CL},{0x3AL,0xCDL,0x33L},{255UL,0xCEL,0xE5L},{0UL,2UL,0x6BL},{0xFEL,255UL,0xE5L},{0x3CL,0UL,0x33L},{9UL,0xFEL,0x5CL}},{{0x3CL,255UL,0x83L},{0xFEL,9UL,0xCDL},{0UL,255UL,0xBAL},{255UL,0xFEL,0x0BL},{0x3AL,0UL,0xBAL},{0xCEL,255UL,0xCDL},{3UL,2UL,0x83L},{0xCEL,0xCEL,0x5CL},{0x2BL,0UL,1UL},{0xFEL,250UL,0xABL}},{{0x3AL,251UL,0x83L},{0x58L,0xFEL,0xABL},{0UL,2UL,1UL},{255UL,0x58L,0xCDL},{0UL,0x63L,0x33L},{0x58L,255UL,0UL},{0x3AL,0x63L,1UL},{0xFEL,0x58L,0x5CL},{0x2BL,2UL,1UL},{250UL,0xFEL,0UL}},{{0UL,251UL,0x33L},{250UL,250UL,0xCDL},{0x2BL,0UL,1UL},{0xFEL,250UL,0xABL},{0x3AL,251UL,0x83L},{0x58L,0xFEL,0xABL},{0UL,2UL,1UL},{255UL,0x58L,0xCDL},{0UL,0x63L,0x33L},{0x58L,255UL,0UL}}};
                int i, j, k;
                for (g_11 = 0; (g_11 <= 7); g_11 += 1)
                {
                    int *l_593 = &g_20[1][0];
                }
                if (l_597[4][5][1])
                    break;
                (*g_54) = func_21(l_597[5][7][1], g_6, (g_557 , ((safe_lshift_func_int8_t_s_u((((safe_mod_func_int32_t_s_s((((safe_mod_func_uint32_t_u_u((safe_mod_func_uint16_t_u_u(((*l_9) || (safe_add_func_uint16_t_u_u(g_559, (~(safe_sub_func_uint32_t_u_u(l_610, 0xA1BFAAF5L)))))), ((l_611 && l_15) ^ (*l_9)))), 0x1C548EF4L)) <= g_144) & l_597[4][5][1]), g_11)) != l_597[6][9][2]) , g_11), g_11)) , l_5[g_4])), l_612);

                ;
            }
        }
        (*g_366) = l_681;
    }

    ;
    (*l_683) &= ((g_142[3][5] | ((l_5[3] , (*l_630)) != (*l_630))) > (-9L));
    (*g_366) = (*l_630);
    return (*l_630);
}







static int func_12(int p_13, const int * const p_14)
{
    unsigned short l_18 = 65532UL;
    int *l_64 = &g_10;
    union U0 l_381 = {0xBBL};
    union U0 l_389[6][9] = {{{0x78L},{-8L},{0x78L},{2L},{0x9AL},{0x9DL},{2L},{1L},{1L}},{{-2L},{-8L},{1L},{0x9AL},{1L},{-8L},{-2L},{2L},{0x2CL}},{{2L},{0x9DL},{0x9AL},{2L},{0x78L},{-8L},{0x78L},{2L},{0x9AL}},{{0x9AL},{0x9AL},{2L},{0x9DL},{0x9AL},{2L},{0x78L},{-8L},{0x78L}},{{1L},{0x64L},{2L},{2L},{0x64L},{1L},{0x9DL},{0x92L},{0x2CL}},{{-8L},{-2L},{2L},{0x2CL},{0x64L},{0x64L},{0x2CL},{2L},{-2L}}};
    union U0 *l_407 = &l_389[1][6];
    union U0 **l_406[2];
    int l_408 = 0xEB240AD1L;
    int * const l_411 = &g_11;
    int l_448[10] = {0xC40589F3L,0xC40589F3L,0xC40589F3L,0xC40589F3L,0xC40589F3L,0xC40589F3L,0xC40589F3L,0xC40589F3L,0xC40589F3L,0xC40589F3L};
    short l_486 = 0x3D12L;
    union U0 *l_527 = (void*)0;
    int *l_528 = &g_20[2][0];
    int l_529 = 0x7DB0CC6CL;
    short l_530[1][6][5] = {{{0x0A43L,0x035BL,0x035BL,0x0A43L,0x035BL},{0x3501L,0x3501L,0x583EL,0x3501L,0x3501L},{0x035BL,0x0A43L,0x035BL,0x035BL,0x0A43L},{0x3501L,0x5500L,0x5500L,0x3501L,0x5500L},{0x0A43L,0x0A43L,0xDC0FL,0x0A43L,0x0A43L},{0x5500L,0x3501L,0x5500L,0x5500L,0x3501L}}};
    const unsigned char l_573 = 255UL;
    const int **l_591 = &g_524[1];
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_406[i] = &l_407;
    for (p_13 = (-29); (p_13 >= 10); p_13 = safe_add_func_int16_t_s_s(p_13, 6))
    {
        int *l_19 = &g_20[1][0];
        const union U0 l_56 = {0xC9L};
        int *l_99 = &g_11;
        int *l_395 = &g_144;
        (*l_19) |= l_18;
        (*g_54) = (g_10 , func_21(g_6, g_4, (((((-7L) < g_4) < (func_26((func_29(func_32(func_37(((g_4 || func_42(func_47(func_49(g_54, &l_19, l_56, g_20[1][0])), g_62, l_64, p_13)) , (void*)0), (*l_64), &l_19, l_56), p_13, l_64, l_99), (*l_99)) != (*p_14)), l_381) == (*l_99))) ^ (*p_14)) , l_389[1][6]), (*l_64)));

        ;
        ;
        (*l_395) &= (**g_54);
    }

    ;
    if (func_29(l_381, (*l_64)))
    {
        int *l_396[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        union U0 l_399[6][5][2] = {{{{0L},{0xB0L}},{{0L},{0x7DL}},{{0L},{0xB0L}},{{0L},{0L}},{{0xB0L},{0x7DL}}},{{{0L},{0L}},{{0L},{0L}},{{0L},{0x7DL}},{{0xB0L},{0L}},{{0L},{0xB0L}}},{{{0L},{0L}},{{0xB0L},{0L}},{{0x76L},{0xB0L}},{{0L},{0L}},{{0L},{0L}}},{{{0x76L},{0L}},{{0L},{0L}},{{0L},{0xB0L}},{{0x76L},{0L}},{{0xB0L},{0L}}},{{{0xB0L},{0L}},{{0x76L},{0xB0L}},{{0L},{0L}},{{0L},{0L}},{{0x76L},{0L}}},{{{0L},{0L}},{{0L},{0xB0L}},{{0x76L},{0L}},{{0xB0L},{0L}},{{0xB0L},{0L}}}};
        unsigned char l_418 = 247UL;
        unsigned short l_425[3];
        unsigned char l_433[3];
        const unsigned l_461 = 4294967290UL;
        int *l_469 = &g_4;
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_425[i] = 1UL;
        for (i = 0; i < 3; i++)
            l_433[i] = 0xC8L;
        for (p_13 = 0; (p_13 >= 0); p_13 -= 1)
        {
            unsigned l_397 = 0x5E27E8E5L;
            int l_398 = 0L;
            int **l_400 = &g_366;
            union U0 l_404 = {4L};
            union U0 ***l_405 = &g_199;
            int l_410 = 0x840F3624L;
            char l_519 = 0xF4L;
            for (g_58 = 5; (g_58 >= 1); g_58 -= 1)
            {
                int i, j;
                if (g_142[g_58][g_58])
                    break;
            }
            if (((p_13 & (func_29(l_399[3][3][0], g_20[1][0]) && (**l_400))) < g_4))
            {
                unsigned l_409 = 0x2FB8A222L;
                for (l_381.f0 = 4; (l_381.f0 >= 1); l_381.f0 -= 1)
                {
                    int *l_401 = &g_20[1][1];
                    int i, j;
                    (*g_366) = g_142[(p_13 + 2)][(l_381.f0 + 1)];
                    l_396[(l_381.f0 + 5)] = l_401;
                    (*g_54) = (void*)0;

                    ;
                }
                l_410 |= (((*l_64) & (safe_rshift_func_int8_t_s_s(func_29(l_404, ((((l_405 != (void*)0) , p_13) , p_13) , (((l_406[0] != (*l_405)) || ((l_408 ^ 1L) && l_409)) >= 0x92L))), g_11))) | 0x02L);
                for (g_326.f0 = 0; (g_326.f0 <= 0); g_326.f0 += 1)
                {
                    int **l_412 = (void*)0;
                    int **l_413 = &l_396[5];
                    (*l_413) = l_411;
                }
            }
            else
            {
                l_410 &= (safe_sub_func_int16_t_s_s((g_20[1][0] > (**l_400)), (((safe_add_func_int16_t_s_s(l_418, p_13)) && (g_142[3][5] , g_58)) >= (safe_add_func_int16_t_s_s(p_13, ((safe_rshift_func_int16_t_s_s(((*l_411) ^ (safe_lshift_func_uint8_t_u_s(g_142[1][0], 4))), g_20[1][0])) || p_13))))));
            }
            (**l_400) = (((l_425[0] , (((+(safe_mod_func_uint32_t_u_u((((safe_rshift_func_uint8_t_u_s(g_4, 0)) , (((**l_400) , 255UL) | (safe_unary_minus_func_int16_t_s(((safe_mod_func_int16_t_s_s(p_13, func_47((*l_400)))) >= ((*g_366) == ((p_13 <= g_10) , g_188))))))) , l_433[0]), (-8L)))) != 0x68FD6B38L) , g_199)) != g_434) != 0UL);
            (**l_400) = (g_10 , (((safe_rshift_func_int16_t_s_s((safe_lshift_func_int16_t_s_s((safe_lshift_func_int16_t_s_u(func_29((**g_434), ((safe_lshift_func_uint16_t_u_s(((safe_lshift_func_uint16_t_u_u(p_13, g_144)) && ((safe_rshift_func_uint16_t_u_s(p_13, 0)) & (**l_400))), 5)) , p_13)), p_13)), 14)), 7)) , p_13) , l_448[4]));
            for (l_397 = 0; (l_397 <= 5); l_397 += 1)
            {
                unsigned short l_458 = 0x3398L;
                int *l_459 = &l_410;
                union U0 l_460 = {-2L};
                unsigned l_471 = 4294967295UL;
                unsigned l_475 = 0x386D778FL;
                union U0 l_514 = {0x8CL};
                union U0 **l_516 = &l_407;
            }
        }


        (*g_366) ^= (*l_469);
        for (l_18 = 22; (l_18 <= 46); l_18 = safe_add_func_uint32_t_u_u(l_18, 7))
        {
            const int *l_523 = &g_11;
            const int **l_522 = &l_523;
            (*l_522) = p_14;

            ;
            g_524[1] = p_14;
        }


        l_529 &= (safe_lshift_func_int16_t_s_u(((~func_42((l_527 != &l_399[3][3][1]), (((*l_64) <= (*l_469)) , (*g_435)), l_528, p_13)) >= g_142[3][5]), 6));

        ;
    }
    else
    {
        const union U0 l_534 = {0x32L};
        const unsigned char l_535 = 0xB3L;
        int *l_556 = &l_529;
        short l_576 = 0L;
        for (g_326.f0 = 9; (g_326.f0 >= 2); g_326.f0 -= 1)
        {
            char l_553[8][6] = {{0xBEL,(-3L),0xF0L,0x4DL,0x4DL,0xF0L},{(-3L),(-3L),0x2BL,0xBEL,1L,0x4DL},{0x8EL,0L,9L,0x2BL,4L,0x2BL},{9L,0x8EL,9L,0L,(-3L),0x4DL},{0xDBL,0L,0x2BL,1L,0xF0L,0xF0L},{1L,0xF0L,0xF0L,1L,0x2BL,0L},{0xDBL,0x4DL,(-3L),0L,9L,0x8EL},{9L,0x2BL,4L,0x2BL,9L,0L}};
            int i, j;
            if (l_530[0][4][2])
                break;
            for (l_18 = 0; (l_18 <= 9); l_18 += 1)
            {
                int **l_532 = (void*)0;
                int **l_533 = &g_366;
                union U0 l_548 = {1L};
                int *l_558 = &g_559;
            }
        }
        for (l_408 = 0; (l_408 <= (-18)); --l_408)
        {
            int *l_562[3][3][1] = {{{&g_4},{&g_11},{&g_4}},{{&g_11},{&g_4},{&g_11}},{{&g_4},{&g_11},{&g_4}}};
            int i, j, k;
            (*g_54) = l_562[1][2][0];

            ;
        }

        ;
        (*l_528) = (*p_14);
        if (((safe_mod_func_uint32_t_u_u(0UL, g_352[0][4])) , (p_13 && ((((**g_434) , (void*)0) == p_14) == g_93.f0))))
        {
            union U0 l_575 = {6L};
            int **l_584[10] = {&g_55,&g_55,&g_55,&g_55,&g_55,&g_55,&g_55,&g_55,&g_55,&g_55};
            int i;
            if ((g_144 || (g_142[3][5] , (-10L))))
            {
                return (*p_14);
            }
            else
            {
                int *l_574 = &g_11;
                unsigned char l_579 = 2UL;
                short l_583[5] = {0x32A2L,0x32A2L,0x32A2L,0x32A2L,0x32A2L};
                int i;
                (*g_366) = (safe_lshift_func_uint16_t_u_u(((safe_add_func_uint16_t_u_u(((*p_14) || (((safe_mod_func_uint32_t_u_u(((((safe_sub_func_int32_t_s_s((*g_366), 0x57E541DAL)) , l_573) != ((func_47(l_574) | (((func_42((((((**g_434) , l_575) , ((!l_575.f0) != 0x73L)) <= 0x1EF99012L) , 8L), (*g_435), (*g_54), g_6) && 1L) | l_575.f0) < p_13)) & l_575.f0)) , p_13), p_13)) > l_576) | g_188)), 0x5004L)) ^ 1UL), 6));
                (*g_54) = ((safe_add_func_int32_t_s_s((((l_579 & (safe_lshift_func_uint16_t_u_u((safe_unary_minus_func_int16_t_s(func_47(l_574))), g_144))) == ((*l_556) && l_583[2])) , ((((*l_556) != (*l_556)) || (&g_524[1] != l_584[0])) & (*l_556))), 0x5AC88AB8L)) , (void*)0);

                ;
                for (p_13 = 0; (p_13 <= 1); p_13 = safe_add_func_int8_t_s_s(p_13, 4))
                {
                    return (*p_14);
                }
            }

            ;
        }
        else
        {
            union U0 l_589[4][5][8] = {{{{4L},{5L},{1L},{1L},{5L},{4L},{5L},{1L}},{{-6L},{5L},{-6L},{4L},{4L},{-6L},{5L},{-6L}},{{5L},{4L},{1L},{4L},{5L},{5L},{4L},{1L}},{{5L},{5L},{4L},{1L},{4L},{5L},{5L},{4L}},{{-6L},{4L},{4L},{-6L},{5L},{-6L},{4L},{4L}}},{{{4L},{5L},{1L},{1L},{5L},{4L},{5L},{1L}},{{-6L},{5L},{-6L},{4L},{4L},{-6L},{5L},{-6L}},{{5L},{4L},{1L},{4L},{5L},{5L},{4L},{1L}},{{5L},{5L},{4L},{1L},{4L},{5L},{5L},{4L}},{{-6L},{4L},{4L},{-6L},{5L},{-6L},{4L},{1L}}},{{{1L},{4L},{5L},{5L},{4L},{1L},{4L},{5L}},{{5L},{4L},{5L},{1L},{1L},{5L},{4L},{5L}},{{-6L},{1L},{5L},{1L},{-6L},{-6L},{1L},{5L}},{{-6L},{-6L},{1L},{5L},{1L},{-6L},{-6L},{1L}},{{5L},{1L},{1L},{5L},{4L},{5L},{1L},{1L}}},{{{1L},{4L},{5L},{5L},{4L},{1L},{4L},{5L}},{{5L},{4L},{5L},{1L},{1L},{5L},{4L},{5L}},{{-6L},{1L},{5L},{1L},{-6L},{-6L},{1L},{5L}},{{-6L},{-6L},{1L},{5L},{1L},{-6L},{-6L},{1L}},{{5L},{1L},{1L},{5L},{4L},{5L},{1L},{1L}}}};
            int i, j, k;
            (*l_556) &= ((func_42(g_352[0][4], l_589[2][4][1], l_556, (*l_411)) > (*p_14)) & 1L);

            ;
            (*g_366) = ((((*g_434) != ((*g_435) , g_590[6])) | (((*l_407) , p_13) && (p_14 != p_14))) && g_10);
            return (*l_528);


        }

        ;
    }

    ;

    (*l_591) = p_14;
    return (*l_64);
}







static int * func_21(short p_22, unsigned char p_23, union U0 p_24, unsigned short p_25)
{
    int **l_390 = &g_366;
    union U0 l_393 = {0xC9L};
    int *l_394[2];
    int i;
    for (i = 0; i < 2; i++)
        l_394[i] = &g_20[1][0];
    (*l_390) = l_394[1];
    return (*l_390);


}







static int func_26(unsigned p_27, union U0 p_28)
{
    union U0 *l_382 = &g_326;
    int *l_383 = (void*)0;
    int l_384 = 0x8E17E25FL;
    int l_385[8] = {0x6C59F22AL,7L,0x6C59F22AL,7L,0x6C59F22AL,7L,0x6C59F22AL,7L};
    int l_386 = 1L;
    int i;
    l_385[4] |= func_42(func_29((*l_382), l_384), p_28, &l_384, g_142[2][1]);


    l_385[4] = (l_386 , (safe_lshift_func_uint8_t_u_s(g_352[0][4], l_385[3])));
    l_383 = &l_385[4];

    ;
    return (*g_366);


}







static int func_29(union U0 p_30, unsigned short p_31)
{
    union U0 ***l_373 = &g_199;
    int *l_374 = &g_6;
    char l_376[5][9][5] = {{{0x56L,0xB0L,0L,7L,(-10L)},{0x53L,0xB0L,5L,0x9CL,7L},{0L,7L,0xA8L,0x2BL,0x53L},{3L,0x2CL,0x2CL,3L,0L},{2L,0x15L,1L,(-6L),(-1L)},{8L,(-5L),(-6L),0x4CL,7L},{0xA8L,0L,(-1L),(-6L),0x08L},{0x2BL,0xBAL,0x15L,3L,0x15L},{(-1L),(-10L),5L,0x2BL,8L}},{{5L,0x83L,0L,0x9CL,0x53L},{(-10L),(-1L),0xC8L,0x56L,0x42L},{(-10L),0x15L,1L,7L,0x9CL},{5L,0xC8L,(-1L),0x4CL,0x4CL},{(-1L),5L,(-1L),1L,0L},{0x2BL,0x56L,0x4CL,0xBAL,0xB0L},{0xA8L,3L,5L,0x15L,0x83L},{8L,0x42L,0x4CL,0xB0L,0x53L},{2L,0xA8L,(-1L),(-10L),5L}},{{3L,0x15L,(-1L),1L,0L},{0L,0x7DL,1L,0x4CL,0x66L},{0x7DL,8L,0xDEL,0x9CL,0x14L},{0x2CL,0x53L,1L,(-1L),(-1L)},{0x3AL,(-1L),0L,(-1L),0L},{0x66L,0x66L,(-6L),0xA8L,7L},{9L,2L,0x3AL,0x53L,0x4CL},{(-1L),0x7DL,(-1L),0L,(-5L)},{0x08L,2L,0x2BL,7L,1L}},{{0xDEL,0x66L,0xBAL,0x98L,7L},{0x2CL,(-1L),(-1L),0xFCL,(-1L)},{0xBAL,0x53L,0L,0xC8L,0xA8L},{0xA8L,0x15L,1L,0xC8L,7L},{0x75L,0x56L,(-10L),0xFCL,0x15L},{0x53L,0x7DL,0x98L,0x98L,0x7DL},{0x4CL,3L,0x9CL,7L,1L},{(-10L),0xA8L,3L,0L,(-2L)},{0x2CL,0x5FL,(-2L),0x53L,0xC8L}},{{(-10L),0x75L,0L,0xA8L,7L},{0x4CL,0L,0x14L,(-1L),7L},{0x53L,0xDEL,0x56L,(-1L),0x08L},{0x75L,0x7DL,7L,0x4CL,(-6L)},{0x53L,0x15L,7L,0L,7L},{0x9CL,0x17L,0x2BL,0x66L,0x42L},{0x14L,0xA8L,0x83L,0xA8L,0x14L},{0L,(-1L),9L,(-2L),0xFCL},{0x75L,0x5FL,8L,1L,0x56L}}};
    int i, j, k;
    for (p_31 = (-8); (p_31 > 11); ++p_31)
    {
        int **l_371 = &g_366;
    }
    (*g_366) = ((safe_add_func_int8_t_s_s(func_47(((safe_add_func_uint8_t_u_u(p_31, (((*l_374) ^ 0x6ECBB81FL) > p_30.f0))) , l_374)), ((*l_374) && (*l_374)))) , (!p_31));
    return (*l_374);
}







static union U0 func_32(int ** p_33, unsigned p_34, int * p_35, int * p_36)
{
    int l_100 = 9L;
    int *l_101 = &g_20[1][0];
    int *l_104 = (void*)0;
    int ***l_185[6][8][5] = {{{&g_92[0],&g_54,&g_92[0],&g_54,(void*)0},{&g_92[0],&g_92[0],&g_92[0],&g_92[0],&g_92[0]},{&g_54,&g_92[0],&g_92[0],&g_92[0],&g_92[0]},{&g_54,&g_92[0],&g_92[0],&g_92[0],&g_92[0]},{(void*)0,(void*)0,&g_92[0],&g_92[0],&g_92[0]},{&g_92[0],&g_92[0],&g_92[0],(void*)0,&g_92[0]},{&g_92[0],&g_92[0],&g_92[0],(void*)0,(void*)0},{&g_54,&g_54,&g_54,&g_92[0],(void*)0}},{{(void*)0,&g_92[0],&g_92[0],&g_92[0],&g_92[0]},{&g_54,&g_54,&g_92[0],&g_92[0],&g_92[0]},{&g_54,&g_92[0],&g_92[0],&g_54,(void*)0},{&g_92[0],&g_92[0],&g_54,&g_92[0],&g_92[0]},{&g_92[0],(void*)0,&g_92[0],&g_92[0],&g_92[0]},{&g_92[0],&g_92[0],&g_54,(void*)0,&g_54},{&g_54,&g_92[0],&g_92[0],(void*)0,&g_54},{&g_54,&g_54,&g_92[0],(void*)0,(void*)0}},{{(void*)0,(void*)0,&g_92[0],&g_54,&g_92[0]},{&g_54,&g_92[0],&g_92[0],&g_54,&g_92[0]},{(void*)0,&g_92[0],&g_92[0],&g_92[0],&g_92[0]},{&g_54,&g_92[0],&g_54,&g_92[0],&g_54},{&g_54,(void*)0,&g_54,&g_92[0],&g_92[0]},{&g_92[0],&g_92[0],&g_54,&g_92[0],&g_92[0]},{&g_92[0],&g_92[0],&g_54,&g_92[0],(void*)0},{&g_92[0],&g_54,&g_54,&g_54,&g_92[0]}},{{(void*)0,&g_54,&g_92[0],&g_92[0],&g_92[0]},{&g_92[0],(void*)0,&g_92[0],&g_92[0],&g_92[0]},{&g_92[0],&g_54,&g_92[0],&g_54,&g_92[0]},{&g_92[0],&g_92[0],&g_92[0],&g_92[0],&g_92[0]},{&g_92[0],&g_92[0],&g_92[0],&g_92[0],(void*)0},{&g_54,&g_92[0],&g_92[0],&g_54,&g_92[0]},{&g_92[0],&g_92[0],&g_92[0],&g_92[0],&g_92[0]},{&g_92[0],&g_92[0],&g_92[0],(void*)0,&g_54}},{{(void*)0,&g_92[0],&g_54,&g_92[0],&g_92[0]},{&g_54,&g_54,&g_54,&g_54,&g_92[0]},{&g_92[0],&g_54,&g_92[0],&g_92[0],&g_92[0]},{&g_54,&g_92[0],(void*)0,&g_54,&g_92[0]},{(void*)0,&g_54,&g_92[0],&g_92[0],&g_54},{&g_54,&g_92[0],&g_54,&g_92[0],&g_92[0]},{&g_92[0],&g_92[0],&g_92[0],(void*)0,&g_92[0]},{&g_92[0],(void*)0,&g_54,&g_92[0],&g_92[0]}},{{&g_92[0],&g_92[0],&g_92[0],&g_92[0],&g_92[0]},{&g_54,&g_92[0],&g_54,&g_92[0],&g_54},{(void*)0,&g_92[0],&g_54,&g_54,(void*)0},{&g_54,(void*)0,&g_92[0],&g_54,&g_92[0]},{&g_92[0],&g_92[0],&g_54,&g_54,&g_92[0]},{&g_54,&g_92[0],&g_54,&g_92[0],&g_54},{&g_92[0],&g_92[0],&g_92[0],(void*)0,&g_54},{(void*)0,&g_92[0],&g_54,&g_54,&g_92[0]}}};
    const union U0 l_224 = {-8L};
    union U0 *l_276 = &g_62;
    union U0 **l_275 = &l_276;
    int i, j, k;
    (*l_101) = l_100;
    for (p_34 = 0; (p_34 > 36); p_34 = safe_add_func_uint8_t_u_u(p_34, 2))
    {
        (*g_54) = l_104;

        ;
        (*l_101) ^= (*p_36);
    }
    if ((((l_104 == l_104) <= (251UL & (!1UL))) , (*p_35)))
    {
        short l_128[2];
        int *l_157 = &g_20[1][0];
        int l_173[6][7][6] = {{{1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L}},{{1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L}},{{1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L}},{{1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L}},{{1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L}},{{1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L}}};
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_128[i] = (-3L);
        if (((safe_add_func_int16_t_s_s((0xF0ABL && p_34), (safe_rshift_func_int8_t_s_s(0xC1L, 1)))) < p_34))
        {
            int l_129 = 6L;
            int ***l_130 = &g_92[0];
            short l_139[8] = {0L,0L,0L,0L,0L,0L,0L,0L};
            int *l_155 = &g_10;
            int *l_158 = &g_144;
            int i;
            for (p_34 = 15; (p_34 < 40); p_34 = safe_add_func_uint16_t_u_u(p_34, 3))
            {
                return g_62;

                            }
            for (l_100 = 4; (l_100 != (-14)); --l_100)
            {
                int **l_116 = &l_101;
                unsigned l_123[5][1][10] = {{{4294967292UL,4294967295UL,4294967295UL,4294967292UL,4294967295UL,4294967295UL,4294967292UL,4294967295UL,4294967295UL,4294967292UL}},{{4294967295UL,4294967292UL,4294967295UL,4294967295UL,4294967292UL,4294967295UL,4294967295UL,4294967292UL,4294967295UL,4294967295UL}},{{4294967292UL,4294967292UL,4294967289UL,4294967292UL,4294967292UL,4294967289UL,4294967292UL,4294967292UL,4294967289UL,4294967292UL}},{{4294967292UL,4294967295UL,4294967295UL,4294967292UL,4294967295UL,4294967295UL,4294967292UL,4294967295UL,4294967295UL,4294967292UL}},{{4294967295UL,4294967292UL,4294967295UL,4294967295UL,4294967295UL,4294967289UL,4294967289UL,4294967295UL,4294967289UL,4294967289UL}}};
                const union U0 l_131 = {0x5EL};
                int i, j, k;
                for (g_58 = 0; (g_58 != (-19)); g_58 = safe_sub_func_uint32_t_u_u(g_58, 6))
                {
                    int **l_115 = &g_55;
                    union U0 l_134 = {-8L};
                    int *l_143 = &g_144;
                    (*p_33) = func_49(l_115, l_116, ((safe_sub_func_uint16_t_u_u(((safe_lshift_func_uint16_t_u_s((((safe_add_func_uint8_t_u_u((l_123[2][0][3] >= ((p_34 >= (((safe_sub_func_uint32_t_u_u((((safe_lshift_func_uint16_t_u_u(p_34, 6)) >= ((((-8L) == ((l_128[0] != (func_42((*l_101), g_93, (*p_33), l_129) > (*p_36))) > p_34)) , (void*)0) != l_130)) , g_20[1][0]), p_34)) >= p_34) , (*l_101))) ^ p_34)), 0x35L)) , g_93) , 0x46E3L), 13)) ^ p_34), g_93.f0)) , l_131), l_128[0]);
                    (*l_143) ^= (((((((safe_sub_func_int16_t_s_s((((((func_42((**l_116), l_134, (*p_33), (safe_lshift_func_uint16_t_u_s(1UL, 8))) || (g_10 != (safe_rshift_func_uint16_t_u_u(l_139[6], (((((((safe_rshift_func_int16_t_s_u(l_129, g_10)) != 0xF09CL) <= (-3L)) & g_10) >= g_10) > g_142[3][5]) <= 0xE4L))))) == (**l_116)) > g_6) , (void*)0) != &p_36), g_20[1][0])) , l_131) , 1L) < 254UL) <= 0UL) | g_20[1][0]) != p_34);
                }
            }
            (*l_101) = l_128[0];
            (*l_158) |= ((safe_mod_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s(((*p_33) == (((safe_lshift_func_uint16_t_u_s(g_4, 6)) ^ (safe_add_func_uint8_t_u_u(g_4, ((safe_add_func_int16_t_s_s(((1L < func_47(l_155)) < 0xF1L), g_20[0][1])) , ((safe_unary_minus_func_uint16_t_u((!g_11))) , p_34))))) , l_157)), g_142[2][1])), p_34)) | 0x98B4L);
        }
        else
        {
            int ***l_161 = (void*)0;
            union U0 l_172 = {0x56L};
            int **l_201 = &l_104;
            const int *l_203 = &g_6;
            unsigned short l_207 = 1UL;
            if (((safe_mod_func_uint8_t_u_u((g_62 , (0x29L == ((((void*)0 != l_161) , (*p_33)) != (void*)0))), (safe_mod_func_int8_t_s_s((safe_sub_func_uint16_t_u_u((safe_add_func_int16_t_s_s(((func_47(l_157) , (safe_sub_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s((l_172 , p_34), g_20[2][0])), 1L))) && g_142[3][0]), g_142[3][5])), 1L)), l_173[3][0][4])))) <= g_142[5][0]))
            {
                unsigned char l_180 = 0x03L;
                union U0 *l_193 = &g_62;
                int l_194 = (-4L);
                if (((safe_mod_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s(0x51F5L, p_34)), (safe_sub_func_uint16_t_u_u(l_180, ((p_34 ^ p_34) ^ 0UL))))) , (safe_lshift_func_uint8_t_u_s((safe_lshift_func_int8_t_s_u(g_11, 3)), g_20[1][0]))))
                {
                    if ((l_172 , (l_185[4][3][0] == (g_93.f0 , &g_92[0]))))
                    {
                        (*l_157) |= (*p_36);
                        (*l_157) = 0L;
                    }
                    else
                    {
                        g_188 ^= (safe_sub_func_int8_t_s_s(func_47(&l_173[3][0][4]), 0UL));
                        (*p_33) = (void*)0;
                        (*l_101) = (safe_rshift_func_int8_t_s_u(g_58, 6));
                    }
                }
                else
                {
                    (*l_101) ^= (safe_add_func_uint8_t_u_u(1UL, g_144));
                    l_194 ^= (g_20[1][0] , ((void*)0 != l_193));
                }
            }
            else
            {
                const union U0 l_195 = {1L};
                (*g_54) = func_49(&l_157, &g_55, l_195, p_34);
            }
            for (l_100 = 3; (l_100 >= (-30)); l_100 = safe_sub_func_uint32_t_u_u(l_100, 2))
            {
                int *l_198[7][8][2] = {{{&g_58,(void*)0},{&g_20[1][0],&g_20[1][0]},{&g_58,&g_6},{(void*)0,&g_58},{&g_20[1][0],(void*)0},{&g_20[1][0],&g_58},{(void*)0,&g_6},{&g_58,&g_20[1][0]}},{{&g_20[1][0],(void*)0},{&g_58,(void*)0},{(void*)0,&g_11},{&g_20[1][0],&g_20[1][0]},{&g_20[1][0],&g_11},{(void*)0,(void*)0},{&g_58,(void*)0},{&g_20[1][0],&g_20[1][0]}},{{&g_58,&g_6},{(void*)0,&g_58},{&g_20[1][0],(void*)0},{&g_20[1][0],&g_58},{(void*)0,&g_6},{&g_58,&g_20[1][0]},{&g_20[1][0],(void*)0},{&g_58,(void*)0}},{{(void*)0,&g_11},{&g_20[1][0],&g_20[1][0]},{&g_20[1][0],&g_11},{(void*)0,(void*)0},{&g_58,(void*)0},{&g_20[1][0],&g_20[1][0]},{&g_58,&g_6},{(void*)0,&g_58}},{{&g_20[1][0],(void*)0},{&g_20[1][0],&g_58},{(void*)0,&g_6},{&g_58,&g_20[1][0]},{&g_20[1][0],(void*)0},{&g_58,(void*)0},{(void*)0,&g_11},{&g_20[1][0],&g_20[1][0]}},{{&g_20[1][0],&g_11},{(void*)0,(void*)0},{&g_58,(void*)0},{&g_20[1][0],&g_20[1][0]},{&g_58,&g_6},{&l_173[2][4][2],&g_20[1][0]},{(void*)0,&g_11},{(void*)0,&g_20[1][0]}},{{&l_173[2][4][2],&g_20[0][1]},{&g_20[1][0],(void*)0},{&g_58,&g_58},{&g_20[1][0],&l_173[2][4][2]},{&l_173[2][4][2],(void*)0},{(void*)0,&g_58},{(void*)0,(void*)0},{&l_173[2][4][2],&l_173[2][4][2]}}};
                int i, j, k;
                (*g_54) = l_198[3][2][0];
            }

            ;
            for (l_100 = 0; (l_100 >= 0); l_100 -= 1)
            {
                const union U0 l_202[4][9][5] = {{{{0x91L},{0x29L},{0x7BL},{0x89L},{0x7DL}},{{0L},{0xA3L},{-6L},{4L},{0xFCL}},{{0x89L},{-6L},{-6L},{0x3EL},{2L}},{{0x18L},{0x7BL},{0x7BL},{0x18L},{0x76L}},{{0x9BL},{2L},{0x7DL},{0x1FL},{-1L}},{{0x8FL},{4L},{0xA9L},{0xD8L},{0x8CL}},{{-6L},{0xA6L},{0x8CL},{0x1FL},{0x18L}},{{0x8AL},{0L},{-6L},{0x18L},{0xD8L}},{{2L},{0xF3L},{0x39L},{0x3EL},{-2L}}},{{{0xA6L},{0x8AL},{0x3EL},{4L},{-2L}},{{-7L},{0xD8L},{0x89L},{0x89L},{0xD8L}},{{0L},{0x89L},{0xDBL},{0x91L},{0x18L}},{{4L},{0x6EL},{0x94L},{0L},{0x8CL}},{{0x6EL},{0xB5L},{0L},{-6L},{-1L}},{{4L},{0x1FL},{-2L},{0x6EL},{0x91L}},{{-6L},{0x8FL},{0x39L},{-1L},{0L}},{{0x39L},{2L},{0L},{-1L},{0x89L}},{{0xA9L},{2L},{4L},{0x18L},{0x18L}}},{{{0L},{0x8FL},{0L},{0x7BL},{0x9BL}},{{0x9BL},{0x3EL},{0x29L},{0L},{0x8FL}},{{-2L},{0x6EL},{0xB5L},{0L},{-6L}},{{0xA3L},{0L},{0x29L},{0x8FL},{0x8AL}},{{0xF3L},{0x7DL},{0L},{0x1FL},{2L}},{{0L},{0x29L},{4L},{0x91L},{0xA6L}},{{0x7DL},{0x9BL},{0L},{0x91L},{-7L}},{{0L},{0x1FL},{0x39L},{0x1FL},{0L}},{{0xB5L},{0L},{0xDBL},{0x8FL},{4L}}},{{{-1L},{0xA9L},{0L},{0L},{0x6EL}},{{0x94L},{-7L},{-1L},{0L},{4L}},{{-6L},{0L},{0x8AL},{0x7BL},{0L}},{{4L},{0xD8L},{0x7DL},{0x18L},{-7L}},{{0x8AL},{0x76L},{0xFCL},{-1L},{0xA6L}},{{0x8AL},{-1L},{2L},{-1L},{2L}},{{4L},{4L},{0x76L},{0L},{0x9BL}},{{0x76L},{-1L},{0x94L},{0xDBL},{-2L}},{{-1L},{-6L},{-1L},{0x76L},{0xA3L}}}};
                const union U0 l_213[10] = {{0xB6L},{0xB6L},{0xB6L},{0xB6L},{0xB6L},{0xB6L},{0xB6L},{0xB6L},{0xB6L},{0xB6L}};
                int i, j, k;
                for (p_34 = 0; (p_34 <= 0); p_34 += 1)
                {
                    int i, j;
                    (*l_101) ^= (g_142[l_100][(p_34 + 1)] , (*p_35));
                    for (l_172.f0 = 0; (l_172.f0 <= 0); l_172.f0 += 1)
                    {
                        union U0 ***l_200 = &g_199;
                        (*l_200) = g_199;
                    }
                }
                (*l_201) = func_49(l_201, &g_55, l_202[1][5][1], g_142[3][5]);
                (*l_157) ^= l_202[1][5][1].f0;
                for (g_144 = 0; (g_144 <= 0); g_144 += 1)
                {
                    union U0 l_208 = {0x41L};
                    for (g_188 = 0; (g_188 <= 0); g_188 += 1)
                    {
                        const int **l_204 = &l_203;
                        int i, j, k;
                        (*l_204) = (l_202[0][2][3] , l_203);
                        l_173[(l_100 + 1)][(g_144 + 3)][(g_144 + 3)] |= func_47((*p_33));
                        (*l_204) = (*p_33);
                        l_173[(l_100 + 3)][(l_100 + 5)][(g_188 + 3)] |= (func_42(p_34, (l_202[1][5][1].f0 , l_202[1][5][1]), (*p_33), (safe_sub_func_uint16_t_u_u((g_62.f0 != ((func_47((*p_33)) && l_207) <= 253UL)), 0xD321L))) < 0xA7L);
                    }
                    (*l_201) = (*p_33);
                    for (g_188 = 0; (g_188 <= 0); g_188 += 1)
                    {
                        (*l_201) = func_49(((p_34 == func_47((*g_54))) , ((l_208 , ((func_47((*p_33)) <= ((safe_lshift_func_int8_t_s_u(g_93.f0, (g_62.f0 , (safe_sub_func_int8_t_s_s(9L, g_10))))) , p_34)) && g_188)) , &g_55)), &g_55, l_213[2], p_34);
                        return g_62;


                                            }
                }
            }

            ;
            ;
        }

        ;
        ;
        (*l_157) &= ((((((((p_34 , g_188) <= p_34) ^ g_6) , ((void*)0 == &g_92[0])) & func_47((*p_33))) , func_47((*p_33))) , 1L) && g_4);
    }
    else
    {
        unsigned short l_214 = 65529UL;
        (*g_54) = (*p_33);
        l_214 = (*p_35);
    }



    if ((*p_35))
    {
        unsigned l_223[4][7] = {{4294967295UL,0x33CF7742L,0x40E8074CL,0x33CF7742L,4294967295UL,8UL,0x68AE5B86L},{4294967295UL,0x22F168FFL,0x33CF7742L,8UL,4294967293UL,8UL,0x33CF7742L},{0x68AE5B86L,0x68AE5B86L,4294967293UL,0x40E8074CL,0x22F168FFL,0xD68D9240L,4294967295UL},{4294967295UL,8UL,4294967293UL,4294967293UL,8UL,4294967295UL,4294967293UL}};
        union U0 l_226 = {0x30L};
        int *l_227[8][4] = {{&g_10,&g_10,&g_11,&g_11},{&g_10,&g_10,&g_11,&g_11},{&g_10,&g_10,&g_11,&g_11},{&g_10,&g_10,&g_11,&g_11},{&g_10,&g_10,&g_11,&g_11},{&g_10,&g_10,&g_11,&g_11},{&g_10,&g_10,&g_11,&g_11},{&g_10,&g_10,&g_11,&g_11}};
        int l_228 = (-2L);
        int *l_255 = &g_10;
        unsigned l_257 = 1UL;
        short l_284 = 0xA3A9L;
        const unsigned short l_289[9] = {0x36B3L,0x36B3L,0x36B3L,0x36B3L,0x36B3L,0x36B3L,0x36B3L,0x36B3L,0x36B3L};
        unsigned l_314 = 0x354BBB31L;
        char l_342 = 0xBAL;
        const union U0 *l_355 = &l_224;
        const union U0 **l_354 = &l_355;
        const union U0 ***l_353 = &l_354;
        int i, j;
        for (g_58 = 0; (g_58 >= 0); g_58 -= 1)
        {
            union U0 l_225 = {0xB2L};
            int *l_238 = (void*)0;
            int l_244 = 0xB01D4E9AL;
            union U0 **l_282 = &l_276;
            int l_283 = (-10L);
            unsigned short l_299 = 0x516AL;
            int i;
            if (((safe_lshift_func_int16_t_s_s((safe_sub_func_int32_t_s_s(((p_34 & (((g_10 , &g_55) == (void*)0) , g_142[5][5])) , l_228), 0x4D939EB3L)), 10)) , (*l_101)))
            {
                unsigned short l_229 = 2UL;
                int **l_232 = &l_227[5][0];
                unsigned char l_256 = 0xC4L;
                union U0 l_263 = {2L};
                union U0 l_300[4] = {{-7L},{-7L},{-7L},{-7L}};
                int i;
                if (l_229)
                    break;
                for (p_34 = (-9); (p_34 >= 49); p_34++)
                {
                    int l_237 = (-1L);
                    int **l_241[8][4][8] = {{{&g_55,&l_101,&l_227[1][0],&l_104,&g_55,&l_101,&l_104,(void*)0},{&l_104,&g_55,&l_227[3][1],&l_104,&l_101,&g_55,&l_227[5][0],(void*)0},{&l_227[5][0],&l_227[7][2],&g_55,&g_55,&g_55,&l_227[3][1],&l_104,(void*)0},{&l_238,&l_101,&l_101,(void*)0,&g_55,&g_55,&g_55,&g_55}},{{&l_227[5][0],&l_227[5][0],&g_55,&g_55,&l_227[5][0],&l_227[5][0],&l_227[5][0],&g_55},{&g_55,&g_55,&g_55,&l_227[5][0],&l_227[7][2],&l_227[5][0],(void*)0,&l_227[3][1]},{&l_104,&l_101,&l_101,&l_227[5][0],&l_238,&l_104,&l_104,&g_55},{&l_227[5][0],&l_238,&l_227[5][0],&g_55,(void*)0,&l_238,&l_227[0][2],&g_55}},{{&l_227[5][0],&l_104,&l_227[7][1],(void*)0,&l_227[5][0],&l_227[7][1],&l_104,(void*)0},{&l_227[5][0],&l_227[5][0],&l_104,&g_55,&l_238,&l_227[3][1],&l_101,(void*)0},{&g_55,(void*)0,&l_227[3][3],&l_104,&g_55,&l_104,&l_227[3][3],(void*)0},{&g_55,(void*)0,&g_55,&l_104,&l_227[5][0],&l_227[7][1],&l_238,&l_227[3][3]}},{{&l_104,(void*)0,&l_101,&g_55,&l_104,(void*)0,&g_55,&l_101},{&l_227[7][2],&g_55,&l_227[0][2],&l_238,(void*)0,&g_55,&l_227[5][0],&l_238},{(void*)0,&g_55,&l_227[5][0],&l_238,&l_227[5][0],&l_227[3][3],&l_227[5][0],&l_227[3][1]},{&l_227[5][0],&g_55,&l_101,&g_55,&l_101,&l_227[3][1],(void*)0,&l_101}},{{(void*)0,&g_55,&l_238,&l_227[7][2],&l_101,&l_104,&l_104,&l_101},{&l_227[5][0],&l_227[5][0],&l_227[5][0],&l_227[5][0],&l_104,&l_227[7][2],&l_238,&l_104},{&l_227[5][0],(void*)0,&l_104,(void*)0,&l_227[5][0],&g_55,&l_104,&g_55},{&l_227[5][0],(void*)0,&l_227[3][1],&l_227[5][0],(void*)0,&l_227[7][2],(void*)0,&l_104}},{{&g_55,&l_227[5][0],&l_227[5][0],&l_101,&l_227[5][0],&l_104,(void*)0,&l_227[5][0]},{&l_104,&g_55,&l_238,(void*)0,&g_55,&l_227[3][1],&l_227[5][0],&l_104},{&l_227[5][0],&g_55,&l_227[3][1],&g_55,(void*)0,&l_227[3][3],&l_104,&g_55},{&l_238,&g_55,&l_227[7][2],&l_104,&l_227[7][2],&g_55,&l_238,&l_101}},{{&l_227[5][0],&g_55,&l_101,&l_104,&g_55,&g_55,&g_55,&l_227[3][1]},{(void*)0,&l_227[5][0],&l_101,&l_101,&g_55,&l_101,&l_227[5][0],&l_227[5][0]},{&l_227[5][0],(void*)0,&g_55,&l_227[3][1],&g_55,&l_227[5][0],&l_227[3][3],&l_227[3][1]},{(void*)0,&l_227[7][2],(void*)0,&l_227[5][0],&l_227[3][1],(void*)0,&l_227[5][0],&l_227[7][2]}},{{&l_101,&l_227[5][0],&l_227[3][1],(void*)0,&l_227[5][0],&l_101,&g_55,&l_227[5][0]},{&l_227[7][2],&l_227[5][0],&l_101,&g_55,&l_101,&l_101,&g_55,&l_101},{&g_55,&g_55,&l_104,&l_227[5][0],&l_104,&g_55,&l_227[5][0],(void*)0},{&l_104,&l_227[0][2],&l_238,&l_101,&l_227[3][3],&l_101,&l_101,(void*)0}}};
                    int i, j, k;
                    (*p_33) = l_227[5][0];
                    (*l_101) = (*p_36);
                    l_244 &= (safe_rshift_func_uint16_t_u_s((p_34 , (l_241[4][2][6] == &p_35)), (safe_add_func_int8_t_s_s((((p_34 | (g_142[2][1] >= g_188)) > (p_34 != (func_42(p_34, l_226, l_227[5][0], g_93.f0) > g_142[0][5]))) & p_34), p_34))));
                    (*l_232) = l_227[3][0];
                }


                (*l_232) = (void*)0;
                if ((((g_6 ^ ((safe_add_func_int8_t_s_s(((((safe_rshift_func_uint8_t_u_s((((safe_mod_func_uint32_t_u_u(func_42(p_34, g_62, l_255, p_34), (*p_36))) != 0xCCL) , l_229), 4)) && p_34) && (*l_255)) & p_34), g_142[3][5])) & 255UL)) & 1UL) < g_6))
                {
                    const char l_259[8][1][8] = {{{0x7BL,0x22L,0x4BL,0x22L,0x7BL,0x22L,0x4BL,0x22L}},{{0x7BL,0x22L,0x4BL,0x22L,0x7BL,0x22L,0x4BL,0x22L}},{{0x7BL,0x22L,0x4BL,0x22L,0x7BL,0x22L,0x4BL,0x22L}},{{0x7BL,0x22L,0x4BL,0x22L,0x7BL,0x22L,0x4BL,0x22L}},{{0x7BL,0x22L,0x4BL,0x22L,0x7BL,0x22L,0x4BL,0x22L}},{{0x7BL,0x22L,0x4BL,0x22L,0x7BL,0x22L,0x4BL,0x22L}},{{0x7BL,0x22L,0x4BL,0x22L,0x7BL,0x22L,0x4BL,0x22L}},{{0x7BL,0x22L,0x4BL,0x22L,0x7BL,0x22L,0x4BL,0x22L}}};
                    int l_278 = 0x586A8A5BL;
                    union U0 **l_281 = &l_276;
                    int i, j, k;
                    if (l_256)
                    {
                        return l_226;

                                            }
                    else
                    {
                        unsigned char l_258 = 0x28L;
                        if (l_257)
                            break;
                        l_244 = l_258;
                        if (l_258)
                            break;
                    }
                    if (l_259[3][0][6])
                    {
                        union U0 ***l_260 = &g_199;
                        (*l_260) = g_199;
                        (*g_54) = (*l_232);

                        ;
                        (*l_101) = (((g_6 && l_229) , 1UL) ^ (func_42((safe_lshift_func_uint16_t_u_u(1UL, g_20[1][0])), l_263, (*g_54), p_34) , 0xE4L));
                    }
                    else
                    {
                        int * const l_264[9] = {&g_144,&g_20[1][0],&g_144,&g_20[1][0],&g_144,&g_20[1][0],&g_144,&g_20[1][0],&g_144};
                        int **l_265 = &l_238;
                        int i;
                        (*l_232) = (*l_232);
                        (*l_101) ^= (*p_36);
                        (*l_265) = l_264[3];

                        ;
                    }

                    ;
                    for (g_62.f0 = 0; (g_62.f0 <= (-1)); g_62.f0 = safe_sub_func_int32_t_s_s(g_62.f0, 9))
                    {
                        int l_274 = 0xF03C69E9L;
                        union U0 * const *l_277 = &l_276;
                        (*l_232) = p_35;
                        l_278 |= (*p_36);
                    }
                    if (((((p_34 < ((p_34 , l_281) != (g_188 , l_282))) == (func_42(g_6, (*l_276), p_36, l_283) == 0x5BL)) , g_20[1][0]) >= l_284))
                    {
                        (*l_275) = (*l_275);
                    }
                    else
                    {
                        int *l_290 = &g_58;
                        (*l_101) = (g_20[1][0] > (((g_4 <= (*p_36)) | (safe_rshift_func_uint16_t_u_u((p_34 < func_42(g_20[1][1], g_62, ((safe_mod_func_int32_t_s_s(func_42(l_289[8], (**l_275), l_255, g_144), l_259[6][0][7])) , l_290), p_34)), 12))) | g_20[1][0]));
                    }
                }
                else
                {
                    unsigned l_295 = 0xD56425BDL;
                    (*l_101) = (safe_sub_func_uint8_t_u_u((safe_add_func_uint16_t_u_u((g_199 != g_199), p_34)), ((l_295 , p_34) , (~((safe_rshift_func_int16_t_s_s((((((g_58 , ((~func_42((safe_unary_minus_func_uint16_t_u(l_299)), l_300[1], l_255, (*l_101))) < p_34)) == (*p_35)) > p_34) && g_142[3][5]) | 0x2AL), 5)) & g_62.f0)))));
                }

                ;
            }
            else
            {
                const unsigned l_313 = 0UL;
                int l_315 = (-3L);
                int * const *l_325[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                union U0 l_336 = {0xECL};
                int *l_337 = &g_144;
                int i;
                if ((safe_rshift_func_uint16_t_u_s((((((safe_sub_func_uint8_t_u_u(((((safe_mod_func_uint32_t_u_u((((0x53BCL ^ (g_10 , (safe_mod_func_int32_t_s_s((safe_add_func_uint16_t_u_u(g_62.f0, (((!g_62.f0) == g_20[1][0]) && (safe_rshift_func_uint8_t_u_s(func_42(l_313, (*l_276), l_255, p_34), p_34))))), p_34)))) > 0xC5L) >= 0xE8L), l_314)) == (*l_255)) == 4294967294UL) , l_313), (-8L))) < (*p_36)) != p_34) & 0x7CL) || p_34), p_34)))
                {
                    const int *l_318[10][6] = {{&g_20[1][0],&g_20[1][0],&g_4,&l_315,&g_20[0][1],&l_315},{&g_4,&g_20[1][0],&g_4,&l_244,&g_4,&g_4},{&l_315,&g_4,&g_4,&l_315,&g_20[1][0],&l_315},{&l_315,&l_315,&g_4,&l_315,&l_315,&l_244},{&l_315,&l_315,&l_244,&l_244,&l_315,&l_315},{&g_4,&l_315,&g_20[1][0],&l_315,&g_20[1][0],&l_315},{&g_20[1][0],&g_4,&l_244,&g_4,&g_4,&l_244},{&g_20[1][0],&g_20[1][0],&g_4,&g_4,&g_4,&g_4},{&l_244,&l_315,&l_244,&g_20[1][0],&g_20[0][1],&g_20[0][1]},{&l_315,&l_244,&l_244,&l_315,&l_315,&g_4}};
                    unsigned l_321 = 0xE9C670EDL;
                    union U0 l_324 = {0x1EL};
                    int i, j;
                    l_315 = 9L;
                    if ((*p_35))
                        break;
                    if ((safe_rshift_func_int16_t_s_u((l_318[5][3] != (void*)0), ((+(l_313 ^ 1L)) & (l_321 >= ((*p_36) > (&l_318[5][3] != ((safe_mod_func_int16_t_s_s(g_6, 65535UL)) , l_325[0]))))))))
                    {
                        (*g_54) = (void*)0;

                        ;
                        return g_326;

                                            }
                    else
                    {
                        unsigned char l_335 = 2UL;
                        int * const l_338 = &g_4;
                        int **l_339 = &l_101;
                        (*l_337) = func_42(((((safe_lshift_func_int16_t_s_u(g_93.f0, (g_199 != (g_6 , g_199)))) == (func_42(((safe_add_func_int16_t_s_s((g_11 , g_188), g_188)) < (safe_rshift_func_uint8_t_u_u((((((*l_101) < (func_42((((safe_sub_func_uint16_t_u_u((g_144 || 5L), 0xF9FEL)) , l_335) , p_34), (**l_275), p_35, p_34) < g_144)) ^ p_34) , g_142[3][5]) || 4294967289UL), p_34))), l_324, p_35, g_6) ^ p_34)) <= g_93.f0) && (*p_35)), l_336, l_337, g_20[1][0]);
                        (*l_339) = l_338;

                        ;
                        (*l_339) = l_227[5][0];

                        ;
                        return l_324;

                                            }
                }
                else
                {
                    for (p_34 = 0; (p_34 >= 19); p_34 = safe_add_func_int32_t_s_s(p_34, 8))
                    {
                        (*l_337) = ((p_34 , &g_55) != &g_55);
                        (*l_337) |= (*p_36);
                    }
                    (*l_337) &= 6L;
                    (*p_33) = p_35;
                }
                l_342 &= (*l_255);
                if ((((*p_36) > ((safe_lshift_func_int8_t_s_u((p_34 > ((func_42(g_142[4][0], g_62, l_227[5][1], ((((-3L) | p_34) & p_34) || g_58)) <= p_34) || p_34)), 7)) == g_142[3][5])) , (*p_36)))
                {
                    unsigned char l_347 = 0x56L;
                    (*l_337) = (0xC4A3L | ((p_34 < (safe_rshift_func_int8_t_s_u((l_347 != ((safe_mod_func_uint32_t_u_u(((void*)0 != &g_55), (*p_36))) < 0x63L)), g_4))) , ((void*)0 != l_282)));
                    return l_336;

                                    }
                else
                {
                    int **l_350 = &l_238;
                    const union U0 l_351 = {0x0AL};
                    int *l_356[9][5][5] = {{{&l_244,(void*)0,(void*)0,&g_58,&g_144},{&g_4,&g_11,&g_10,&g_6,&g_11},{&g_6,&g_144,(void*)0,(void*)0,&l_244},{(void*)0,&g_6,(void*)0,(void*)0,&g_11},{&g_4,&g_58,&g_20[1][0],&g_6,&g_10}},{{(void*)0,&g_58,&g_6,&g_58,&g_11},{&g_20[1][0],&g_11,&g_6,&g_20[1][0],&l_244},{&g_20[1][0],&g_144,&l_315,&g_10,&g_11},{(void*)0,&g_4,(void*)0,&l_315,&g_144},{&g_4,&g_144,&g_144,(void*)0,&g_6}},{{(void*)0,&g_11,&g_144,&l_315,(void*)0},{&g_6,&g_58,(void*)0,(void*)0,&g_144},{&g_4,&g_58,&l_315,&l_315,&g_58},{&l_244,&g_6,&g_6,(void*)0,&g_58},{&g_58,&g_144,&g_6,&l_315,&g_144}},{{&g_6,&g_11,&g_20[1][0],&g_10,(void*)0},{&g_58,(void*)0,&g_20[0][0],&g_20[1][0],&g_58},{(void*)0,(void*)0,(void*)0,&g_20[1][1],&g_4},{&l_315,&g_10,&g_11,&g_6,&g_4},{&g_10,&g_4,(void*)0,&g_6,(void*)0}},{{&g_20[1][0],(void*)0,&g_20[0][0],&g_6,&g_11},{&g_58,(void*)0,&g_20[1][0],&g_6,&g_11},{&g_6,&g_6,&g_6,&g_20[1][1],&g_11},{(void*)0,&g_11,(void*)0,&g_20[1][0],(void*)0},{(void*)0,(void*)0,&g_144,&g_11,&g_4}},{{&g_6,(void*)0,(void*)0,&g_11,&g_4},{&g_58,(void*)0,&g_10,&g_6,&g_58},{&g_20[1][0],&g_11,&g_10,&g_144,(void*)0},{&g_10,&g_6,(void*)0,(void*)0,(void*)0},{&l_315,(void*)0,&g_144,&g_144,(void*)0}},{{(void*)0,(void*)0,(void*)0,&g_6,(void*)0},{&l_315,&g_4,&g_6,&g_11,(void*)0},{(void*)0,&g_10,&g_20[1][0],&g_11,(void*)0},{&l_315,(void*)0,&g_20[0][0],&g_20[1][0],&g_58},{(void*)0,(void*)0,(void*)0,&g_20[1][1],&g_4}},{{&l_315,&g_6,&l_244,&g_20[1][0],(void*)0},{&g_20[0][0],(void*)0,&g_6,&g_11,&g_144},{&l_315,&g_6,&g_6,&g_11,&g_20[1][1]},{&g_20[1][1],(void*)0,&g_58,&g_20[1][0],&g_144},{&g_6,(void*)0,&g_20[1][0],&g_10,&g_20[1][1]}},{{&g_6,&g_20[1][1],&g_11,&g_58,&g_144},{&g_6,&g_11,&g_58,&l_244,(void*)0},{&g_6,&g_6,(void*)0,&g_4,(void*)0},{&g_20[1][1],&g_11,&g_10,&g_11,&g_11},{&l_315,&g_20[1][1],&g_10,&g_58,&g_20[0][0]}}};
                    int i, j, k;
                    for (l_257 = 0; (l_257 <= 3); l_257 += 1)
                    {
                        int i, j;
                        l_227[(g_58 + 3)][(g_58 + 3)] = (void*)0;
                        (*l_101) &= (*p_35);
                        l_227[(l_257 + 1)][l_257] = p_36;
                    }
                    if (g_352[0][4])
                        continue;
                    l_356[1][2][1] = p_36;
                }
            }


            ;
            return (**l_282);

                    }


        (*l_101) &= 0x493FA2EEL;
    }
    else
    {
        unsigned short l_363 = 0xF93EL;
        int *l_364[4][8] = {{(void*)0,&g_144,&g_144,(void*)0,&g_144,&g_144,(void*)0,&g_144},{(void*)0,(void*)0,&g_10,(void*)0,(void*)0,&g_10,(void*)0,(void*)0},{&g_144,(void*)0,&g_144,&g_144,(void*)0,&g_144,&g_144,(void*)0},{(void*)0,&g_144,&g_144,(void*)0,&g_144,&g_144,(void*)0,&g_144}};
        const union U0 l_365 = {0x54L};
        int i, j;
        (*p_33) = g_366;
    }


    return (*l_276);

    }







static int ** func_37(int ** p_38, int p_39, int ** p_40, union U0 p_41)
{
    union U0 l_68[3] = {{-10L},{-10L},{-10L}};
    int l_76 = 0x9D76C132L;
    int **l_77 = &g_55;
    const short l_89 = 0x7991L;
    int *l_97 = &g_20[0][0];
    int ***l_98 = &l_77;
    int i;
    if ((l_68[0] , (-7L)))
    {
        int *l_71 = &g_6;
        int l_73 = (-4L);
        int **l_82 = &l_71;
        union U0 l_88 = {4L};
        (*p_40) = ((safe_add_func_uint8_t_u_u(((func_42(p_39, p_41, l_71, (safe_unary_minus_func_uint32_t_u((l_73 , (0x2A44L || (safe_lshift_func_uint16_t_u_u((((*g_54) == (l_76 , func_49(l_77, &g_55, g_62, g_10))) < 0x30F1L), (*l_71)))))))) == p_41.f0) & p_41.f0), p_39)) , (*g_54));


        if ((!((*g_54) != ((safe_lshift_func_uint16_t_u_u((safe_mod_func_int8_t_s_s(func_47((*g_54)), g_11)), 14)) , ((g_10 == func_47((*g_54))) , (*g_54))))))
        {
            unsigned char l_85 = 0UL;
            (*l_82) = func_49(p_38, (p_41.f0 , &g_55), g_62, ((l_82 != p_38) != (safe_rshift_func_int16_t_s_u(func_47((*g_54)), l_85))));

            ;
        }
        else
        {
            return p_40;


        }

        ;
        (*l_77) = func_49(l_77, ((l_68[0].f0 & (~(safe_rshift_func_uint16_t_u_s((l_88 , p_39), func_42(l_89, p_41, func_49(p_40, &l_71, g_62, p_41.f0), g_6))))) , &l_71), l_88, g_20[0][1]);
        for (p_41.f0 = 0; p_41.f0 < 3; p_41.f0 += 1)
        {
            union U0 tmp = {5L};
            l_68[p_41.f0] = tmp;
        }
    }
    else
    {
        const short l_90 = (-2L);
        unsigned l_96 = 0UL;
        (**p_40) = l_90;
        (**p_40) ^= (((safe_unary_minus_func_uint16_t_u(func_47((*p_40)))) , func_47(func_49(g_92[0], &g_55, g_93, (l_90 >= ((safe_sub_func_uint32_t_u_u(l_90, l_96)) , g_93.f0))))) ^ p_39);
    }


    (*l_97) = ((*p_40) == (*l_77));
    (*l_98) = &l_97;

    ;
    return &g_55;


}







static unsigned char func_42(const int p_43, union U0 p_44, int * p_45, unsigned char p_46)
{
    unsigned short l_65 = 65529UL;
    int l_66 = 0L;
    l_66 &= l_65;
    for (l_65 = 0; (l_65 <= 1); l_65 += 1)
    {
        int *l_67 = &g_4;
        (*g_54) = p_45;


        for (p_46 = 0; (p_46 <= 1); p_46 += 1)
        {
            int i, j;
            if (g_20[(p_46 + 1)][l_65])
                break;
            (*g_54) = l_67;

            ;
        }
    }


    return p_43;
}







static const int func_47(int * p_48)
{
    union U0 *l_61 = &g_62;
    for (g_58 = 20; (g_58 <= (-5)); g_58--)
    {
        union U0 **l_63[2];
        int i;
        for (i = 0; i < 2; i++)
            l_63[i] = &l_61;
        l_61 = l_61;
    }
    return g_10;
}







static int * func_49(int ** p_50, int ** p_51, const union U0 p_52, unsigned short p_53)
{
    unsigned char l_57 = 255UL;
    l_57 = g_6;
    return (*g_54);


}





int main (int argc, char* argv[])
{
    int i, j;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_6, "g_6", print_hash_value);
    transparent_crc(g_10, "g_10", print_hash_value);
    transparent_crc(g_11, "g_11", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_20[i][j], "g_20[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_58, "g_58", print_hash_value);
    transparent_crc(g_62.f0, "g_62.f0", print_hash_value);
    transparent_crc(g_93.f0, "g_93.f0", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_142[i][j], "g_142[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_144, "g_144", print_hash_value);
    transparent_crc(g_188, "g_188", print_hash_value);
    transparent_crc(g_326.f0, "g_326.f0", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_352[i][j], "g_352[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_541[i], "g_541[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_557, "g_557", print_hash_value);
    transparent_crc(g_559, "g_559", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
