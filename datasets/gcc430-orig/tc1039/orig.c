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



static unsigned short g_4 = 65535UL;
static unsigned g_6 = 0x2F4A8B10L;
static unsigned g_35 = 4294967295UL;
static unsigned *g_34 = &g_35;
static short g_37 = 0x74FDL;
static int g_44 = 8L;
static char g_66[7][5][3] = {{{0x90L, (-1L), 0x4CL}, {0x90L, (-1L), 0x4CL}, {0x90L, (-1L), 0x4CL}, {0x90L, (-1L), 0x4CL}, {0x90L, (-1L), 0x4CL}}, {{0x90L, (-1L), 0x4CL}, {0x90L, (-1L), 0x4CL}, {0x90L, (-1L), 0x4CL}, {0x90L, (-1L), 0x4CL}, {0x90L, (-1L), 0x4CL}}, {{0x90L, (-1L), 0x4CL}, {0x90L, (-1L), 0x4CL}, {0x90L, (-1L), 0x4CL}, {0x90L, (-1L), 0x4CL}, {0x90L, (-1L), 0x4CL}}, {{0x90L, (-1L), 0x4CL}, {0x90L, (-1L), 0x4CL}, {0x90L, (-1L), 0x4CL}, {0x90L, (-1L), 0x4CL}, {0x90L, (-1L), 0x4CL}}, {{0x90L, (-1L), 0x4CL}, {0x90L, (-1L), 0x4CL}, {0x90L, (-1L), 0x4CL}, {0x90L, (-1L), 0x4CL}, {0x90L, (-1L), 0x4CL}}, {{0x90L, (-1L), 0x4CL}, {0x90L, (-1L), 0x4CL}, {0x90L, (-1L), 0x4CL}, {0x90L, (-1L), 0x4CL}, {0x90L, (-1L), 0x4CL}}, {{0x90L, (-1L), 0x4CL}, {0x90L, (-1L), 0x4CL}, {0x90L, (-1L), 0x4CL}, {0x90L, (-1L), 0x4CL}, {0x90L, (-1L), 0x4CL}}};
static int g_71 = 1L;
static int g_75 = 0L;
static int g_113 = 0xCBA47412L;
static unsigned char g_139 = 0x75L;
static char g_166 = (-1L);
static char g_169[5] = {1L, 0x14L, 1L, 0x14L, 1L};
static unsigned short g_170 = 65535UL;
static short g_194 = 1L;
static short *g_196 = &g_37;
static short **g_195[9] = {&g_196, (void*)0, &g_196, (void*)0, &g_196, (void*)0, &g_196, (void*)0, &g_196};
static short g_235 = 6L;
static unsigned g_248[7][1] = {{0UL}, {0UL}, {0UL}, {0UL}, {0UL}, {0UL}, {0UL}};
static int *g_259 = &g_113;
static int g_269 = 0L;
static int g_271 = 1L;
static unsigned short *g_294 = (void*)0;
static unsigned char g_325 = 0x8EL;
static unsigned char *g_324[4] = {&g_325, &g_325, &g_325, &g_325};
static int *g_376 = &g_75;
static short g_379 = 0x02C1L;
static short g_392 = 0x31F8L;
static short **g_412 = (void*)0;
static int g_414 = 0xD6B82742L;
static unsigned *g_443 = &g_248[6][0];
static int g_493 = (-1L);
static int g_496 = 0x86AF52DAL;
static volatile char g_499[9] = {(-1L), (-1L), 0xC2L, (-1L), (-1L), 0xC2L, (-1L), (-1L), 0xC2L};
static short ***g_502[4] = {&g_195[1], &g_195[1], &g_195[1], &g_195[1]};
static volatile unsigned char g_550 = 251UL;
static volatile unsigned char *g_549 = &g_550;
static volatile unsigned char **g_548 = &g_549;
static volatile unsigned char ***g_547 = &g_548;



static unsigned func_1(void);
static unsigned short func_11(int p_12, int p_13, unsigned char p_14);
static int func_16(short p_17, unsigned char p_18, unsigned * p_19, unsigned short p_20, unsigned p_21);
static short func_24(char p_25, int p_26, unsigned * p_27, unsigned p_28);
static char func_29(unsigned p_30, int p_31);
static unsigned * func_47(int p_48, int * p_49);
static int * func_51(short p_52, int * p_53);
static short * func_56(int p_57, short p_58, int p_59, unsigned short p_60);
static int func_83(unsigned short p_84, unsigned * p_85);
static unsigned * func_89(unsigned p_90);
static unsigned func_1(void)
{
    unsigned *l_5 = &g_6;
    int l_15 = 0x4888999DL;
    short *l_36 = &g_37;
    unsigned short *l_494 = &g_170;
    int *l_495 = &g_496;
    (*l_495) |= (safe_sub_func_uint32_t_u_u(((*l_5) = g_4), ((*g_376) = (safe_div_func_uint32_t_u_u((safe_mod_func_uint16_t_u_u(((*l_494) = func_11(l_15, (l_15 && func_16(g_4, ((((g_4 != (0xD4A55F07L && (!9UL))) < (~((*l_36) = (safe_add_func_int16_t_s_s(func_24(func_29((((l_15 > (safe_rshift_func_int16_t_s_u((g_4 , g_4), 3))) , l_15) != g_4), l_15), g_4, g_34, l_15), g_4))))) , (void*)0) != l_5), l_5, g_4, (*g_34))), g_4)), (-10L))), (*g_443))))));

    ;

    ;
    for (g_235 = 0; (g_235 <= 2); g_235 += 1)
    {
        unsigned short l_497 = 0xE263L;
        int *l_511 = &g_75;
        unsigned char **l_534 = &g_324[2];
        unsigned char ***l_533 = &l_534;
        int l_542 = 1L;
        int l_561[9] = {1L, 0x12E9CEC5L, 1L, 0x12E9CEC5L, 1L, 0x12E9CEC5L, 1L, 0x12E9CEC5L, 1L};
        unsigned short **l_563 = &l_494;
        unsigned l_573 = 0x1DD4E567L;
        unsigned short l_574 = 6UL;
        int i;
        (*g_376) |= l_497;
        for (g_4 = 0; (g_4 <= 2); g_4 += 1)
        {
            unsigned l_504 = 0x41B35455L;
            int l_509 = (-9L);
            for (g_496 = 0; (g_496 <= 4); g_496 += 1)
            {
                int i;
                return g_169[(g_4 + 1)];
            }
            for (g_37 = 7; (g_37 >= 0); g_37 -= 1)
            {
                char l_510 = (-1L);
                int **l_519 = &l_495;
                for (l_15 = 4; (l_15 >= 0); l_15 -= 1)
                {
                    int i, j, k;
                    g_376 = &g_113;

                    ;
                    if (g_66[(g_235 + 2)][(g_235 + 1)][g_235])
                    {
                        int **l_498[3][9] = {{&g_376, &g_376, &g_376, &g_376, &g_376, &g_376, &g_376, &g_376, &g_376}, {&g_376, &g_376, &g_376, &g_376, &g_376, &g_376, &g_376, &g_376, &g_376}, {&g_376, &g_376, &g_376, &g_376, &g_376, &g_376, &g_376, &g_376, &g_376}};
                        int i, j;
                        if ((*g_376))
                            break;
                        (*l_495) = (*g_376);
                        g_259 = &g_44;

                        ;
                    }
                    else
                    {
                        short ***l_501 = (void*)0;
                        short ****l_500[5][3][9] = {{{&l_501, &l_501, (void*)0, &l_501, (void*)0, &l_501, &l_501, (void*)0, &l_501}, {&l_501, &l_501, (void*)0, &l_501, (void*)0, &l_501, &l_501, (void*)0, &l_501}, {&l_501, &l_501, (void*)0, &l_501, (void*)0, &l_501, &l_501, (void*)0, &l_501}}, {{&l_501, &l_501, (void*)0, &l_501, (void*)0, &l_501, &l_501, (void*)0, &l_501}, {&l_501, &l_501, (void*)0, &l_501, (void*)0, &l_501, &l_501, (void*)0, &l_501}, {&l_501, &l_501, (void*)0, &l_501, (void*)0, &l_501, &l_501, (void*)0, &l_501}}, {{&l_501, &l_501, (void*)0, &l_501, (void*)0, &l_501, &l_501, (void*)0, &l_501}, {&l_501, &l_501, (void*)0, &l_501, (void*)0, &l_501, &l_501, (void*)0, &l_501}, {&l_501, &l_501, (void*)0, &l_501, (void*)0, &l_501, &l_501, (void*)0, &l_501}}, {{&l_501, &l_501, (void*)0, &l_501, (void*)0, &l_501, &l_501, (void*)0, &l_501}, {&l_501, &l_501, (void*)0, &l_501, (void*)0, &l_501, &l_501, (void*)0, &l_501}, {&l_501, &l_501, (void*)0, &l_501, (void*)0, &l_501, &l_501, (void*)0, &l_501}}, {{&l_501, &l_501, (void*)0, &l_501, (void*)0, &l_501, &l_501, (void*)0, &l_501}, {&l_501, &l_501, (void*)0, &l_501, (void*)0, &l_501, &l_501, (void*)0, &l_501}, {&l_501, &l_501, (void*)0, &l_501, (void*)0, &l_501, &l_501, (void*)0, &l_501}}};
                        int l_503[6][2][5] = {{{0xB29BD161L, 0x9E4FD60EL, 0xE13792FBL, 0x6AE4A5FEL, 0x6AE4A5FEL}, {0xB29BD161L, 0x9E4FD60EL, 0xE13792FBL, 0x6AE4A5FEL, 0x6AE4A5FEL}}, {{0xB29BD161L, 0x9E4FD60EL, 0xE13792FBL, 0x6AE4A5FEL, 0x6AE4A5FEL}, {0xB29BD161L, 0x9E4FD60EL, 0xE13792FBL, 0x6AE4A5FEL, 0x6AE4A5FEL}}, {{0xB29BD161L, 0x9E4FD60EL, 0xE13792FBL, 0x6AE4A5FEL, 0x6AE4A5FEL}, {0xB29BD161L, 0x9E4FD60EL, 0xE13792FBL, 0x6AE4A5FEL, 0x6AE4A5FEL}}, {{0xB29BD161L, 0x9E4FD60EL, 0xE13792FBL, 0x6AE4A5FEL, 0x6AE4A5FEL}, {0xB29BD161L, 0x9E4FD60EL, 0xE13792FBL, 0x6AE4A5FEL, 0x6AE4A5FEL}}, {{0xB29BD161L, 0x9E4FD60EL, 0xE13792FBL, 0x6AE4A5FEL, 0x6AE4A5FEL}, {0xB29BD161L, 0x9E4FD60EL, 0xE13792FBL, 0x6AE4A5FEL, 0x6AE4A5FEL}}, {{0xB29BD161L, 0x9E4FD60EL, 0xE13792FBL, 0x6AE4A5FEL, 0x6AE4A5FEL}, {0xB29BD161L, 0x9E4FD60EL, 0xE13792FBL, 0x6AE4A5FEL, 0x6AE4A5FEL}}};
                        int **l_512 = &g_376;
                        unsigned char **l_513 = &g_324[1];
                        unsigned char ***l_514 = &l_513;
                        unsigned char **l_516 = &g_324[1];
                        unsigned char ***l_515 = &l_516;
                        int i, j, k;
                        (*l_512) = func_47((func_16(((*g_443) , (&g_195[(l_15 + 3)] != (g_499[1] , (g_502[2] = (void*)0)))), l_503[4][1][1], &g_35, ((*l_494) = func_16(l_504, ((safe_mul_func_uint8_t_u_u(255UL, ((safe_add_func_int32_t_s_s(func_24(g_6, g_4, &g_35, g_235), (*g_376))) && l_509))) == l_510), &g_35, g_71, (*g_34))), (*g_443)) , 0L), l_511);


                        ;
                        (*l_512) = &g_493;

                        ;
                        (*l_515) = ((*l_514) = l_513);
                        (*l_512) = func_47(((*g_376) = (safe_rshift_func_uint16_t_u_u(((*l_494) |= 0xE29DL), 3))), l_511);

                        ;
                    }

                    ;
                }
                (*l_519) = &g_75;

                ;
            }


            ;
            ;

            return g_235;
        }
        if ((*l_495))
            break;
        for (g_75 = 8; (g_75 >= 0); g_75 -= 1)
        {
            short l_520 = 0xB883L;
            char *l_525 = &g_66[5][1][1];
            int *l_532 = &g_493;
            char l_535[1][10][5] = {{{0xD2L, 1L, 0x39L, 0x14L, 0x14L}, {0xD2L, 1L, 0x39L, 0x14L, 0x14L}, {0xD2L, 1L, 0x39L, 0x14L, 0x14L}, {0xD2L, 1L, 0x39L, 0x14L, 0x14L}, {0xD2L, 1L, 0x39L, 0x14L, 0x14L}, {0xD2L, 1L, 0x39L, 0x14L, 0x14L}, {0xD2L, 1L, 0x39L, 0x14L, 0x14L}, {0xD2L, 1L, 0x39L, 0x14L, 0x14L}, {0xD2L, 1L, 0x39L, 0x14L, 0x14L}, {0xD2L, 1L, 0x39L, 0x14L, 0x14L}}};
            unsigned char ***l_546 = &l_534;
            unsigned **l_575 = &l_5;
            int i, j, k;
            g_376 = func_51(((*l_36) = (func_29(l_520, (*g_376)) > (safe_sub_func_uint16_t_u_u(((((*l_495) || (safe_sub_func_int32_t_s_s(((*l_532) = (((*l_525) &= (g_169[g_235] = g_493)) , (safe_mod_func_uint8_t_u_u(0x32L, (((*l_511) , (((*l_511) , ((*l_495) = (((*l_525) = (safe_mod_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s(g_269, l_520)), 0x46FAL))) || 0L))) && (*g_376))) , 0x6FL))))), (*g_376)))) , (void*)0) != l_533), l_535[0][3][1])))), &l_15);

            ;
            (*l_495) = (((*l_494) |= (safe_rshift_func_int8_t_s_u(0xCBL, (*l_511)))) < (*l_532));
            for (g_269 = 2; (g_269 >= 0); g_269 -= 1)
            {
                unsigned char l_553 = 247UL;
                short l_572 = 0x5D88L;
                unsigned *l_588 = &g_248[6][0];
                if ((*g_376))
                {
                    unsigned l_545 = 0x241B3BE7L;
                    unsigned short l_556[8][6][2] = {{{0x49C5L, 0x532CL}, {0x49C5L, 0x532CL}, {0x49C5L, 0x532CL}, {0x49C5L, 0x532CL}, {0x49C5L, 0x532CL}, {0x49C5L, 0x532CL}}, {{0x49C5L, 0x532CL}, {0x49C5L, 0x532CL}, {0x49C5L, 0x532CL}, {0x49C5L, 0x532CL}, {0x49C5L, 0x532CL}, {0x49C5L, 0x532CL}}, {{0x49C5L, 0x532CL}, {0x49C5L, 0x532CL}, {0x49C5L, 0x532CL}, {0x49C5L, 0x532CL}, {0x49C5L, 0x532CL}, {0x49C5L, 0x532CL}}, {{0x49C5L, 0x532CL}, {0x49C5L, 0x532CL}, {0x49C5L, 0x532CL}, {0x49C5L, 0x532CL}, {0x49C5L, 0x532CL}, {0x49C5L, 0x532CL}}, {{0x49C5L, 0x532CL}, {0x49C5L, 0x532CL}, {0x49C5L, 0x532CL}, {0x49C5L, 0x532CL}, {0x49C5L, 0x532CL}, {0x49C5L, 0x532CL}}, {{0x49C5L, 0x532CL}, {0x49C5L, 0x532CL}, {0x49C5L, 0x532CL}, {0x49C5L, 0x532CL}, {0x49C5L, 0x532CL}, {0x49C5L, 0x532CL}}, {{0x49C5L, 0x532CL}, {0x49C5L, 0x532CL}, {0x49C5L, 0x532CL}, {0x49C5L, 0x532CL}, {0x49C5L, 0x532CL}, {0x49C5L, 0x532CL}}, {{0x49C5L, 0x532CL}, {0x49C5L, 0x532CL}, {0x49C5L, 0x532CL}, {0x49C5L, 0x532CL}, {0x49C5L, 0x532CL}, {0x49C5L, 0x532CL}}};
                    unsigned l_562 = 0x01EEE6B0L;
                    unsigned short **l_565 = &l_494;
                    unsigned short ***l_564 = &l_565;
                    int **l_566 = &g_376;
                    int i, j, k;
                    (*g_376) = ((void*)0 == &g_376);
                    for (g_392 = 0; (g_392 >= 0); g_392 -= 1)
                    {
                        int *l_551 = (void*)0;
                        int *l_552[4] = {&g_71, &g_414, &g_71, &g_414};
                        int i, j, k;
                        (*g_376) = func_24((((safe_add_func_uint8_t_u_u((safe_mod_func_int32_t_s_s(((g_66[(g_235 + 3)][(g_392 + 1)][g_235] = 4L) , ((*g_376) = (l_542 = 1L))), g_499[(g_392 + 8)])), (safe_sub_func_int8_t_s_s((~l_535[g_392][(g_235 + 1)][(g_235 + 2)]), (+l_545))))) , l_546) == g_547), (g_71 = (&g_259 != (void*)0)), l_532, l_553);
                        (*l_495) = (safe_mul_func_uint16_t_u_u(((*l_511) < 9L), 3UL));
                        (*l_495) &= (((*l_532) , l_545) & func_29((0UL && ((*g_376) < (*g_34))), ((*l_511) == ((*g_443) >= ((*l_5) = 0x64C74B2BL)))));
                        if (l_553)
                            continue;
                    }
                    (*g_376) = ((l_556[3][3][0] == (safe_rshift_func_uint16_t_u_u((safe_div_func_uint8_t_u_u(((**g_548) , 255UL), (*l_532))), 4))) & (*g_443));
                    (*l_566) = ((l_561[8] > 0UL) , func_47(l_562, ((g_66[g_269][g_269][g_235] = g_392) , ((*l_566) = func_47(((*l_495) = (((*l_532) | (l_563 != ((*l_564) = &g_294))) != (*g_549))), ((*l_566) = func_47(func_29((*l_511), (*l_532)), &g_44)))))));

                    ;
                    ;
                }
                else
                {
                    for (g_113 = 1; (g_113 <= 8); g_113 += 1)
                    {
                        int **l_569 = &g_376;
                        int i, j, k;
                        (*l_532) = (~(g_66[(g_235 + 4)][(g_269 + 2)][g_269] >= l_561[g_113]));
                        (*g_547) = (void*)0;

                        ;
                        (*g_376) = func_16((((*l_495) > 0x8BL) < (safe_lshift_func_uint16_t_u_s(((*l_494) ^= l_553), 10))), ((l_569 == &g_259) , ((~(safe_div_func_int16_t_s_s(3L, 0xC907L))) | 0xF8F9L)), &g_248[3][0], l_572, l_573);
                        (*g_376) = ((void*)0 != &g_75);
                    }

                    ;
                    return g_235;
                }

                ;
                if ((*l_511))
                    continue;
                (*l_532) = ((((g_271 , l_574) , &g_34) == ((*l_495) , l_575)) != ((*g_376) = (safe_sub_func_uint32_t_u_u(((((func_24(g_269, ((((*l_494) ^= (safe_sub_func_int32_t_s_s((safe_add_func_int8_t_s_s((~func_24(g_379, ((safe_sub_func_int16_t_s_s((safe_add_func_int32_t_s_s((safe_lshift_func_int8_t_s_u(((*g_376) < (*g_376)), 7)), 0xBA9E946EL)), (*l_532))) , g_6), l_588, g_325)), 0x31L)), 0x42964910L))) | g_166) <= 0xE42F7637L), &g_6, (*l_511)) && 1L) < g_271) != 0x3F6CEA1FL) != l_553), (*l_495)))));
            }

            ;
        }
    }

    ;
    return (*l_495);
}







static unsigned short func_11(int p_12, int p_13, unsigned char p_14)
{
    short l_42 = (-7L);
    int *l_43 = &g_44;
    char l_50 = 0x2DL;
    char *l_65[1];
    int l_67 = 0x421A1674L;
    int *l_70 = &g_71;
    short *l_413 = (void*)0;
    unsigned **l_490 = &g_34;
    int l_491 = 0x3B51DBB9L;
    int *l_492 = &g_493;
    int i;
    for (i = 0; i < 1; i++)
        l_65[i] = &g_66[3][3][1];
    (*l_492) |= ((*g_376) = ((safe_div_func_uint8_t_u_u(l_42, (((((*l_43) = p_12) == p_12) >= (0x7C8A36A7L ^ (safe_div_func_uint16_t_u_u(func_29((((*l_490) = (g_4 , func_47(l_50, func_51((safe_add_func_int8_t_s_s((g_414 ^= ((l_413 = func_56(((*l_70) = (safe_rshift_func_int16_t_s_s((safe_mod_func_uint8_t_u_u(p_13, (l_67 = p_14))), (safe_add_func_uint32_t_u_u(((*g_34) , 1UL), 0UL))))), g_66[1][3][2], g_37, g_66[3][3][1])) == (void*)0)), 0x6EL)), g_376)))) != &g_248[6][0]), p_14), g_392)))) , l_491))) | (*g_443)));

    ;

    ;
    ;
    return (*l_43);
}







static int func_16(short p_17, unsigned char p_18, unsigned * p_19, unsigned short p_20, unsigned p_21)
{
    int *l_38 = (void*)0;
    int l_39 = (-3L);
    l_39 |= p_18;
    return g_4;
}







static short func_24(char p_25, int p_26, unsigned * p_27, unsigned p_28)
{
    return g_35;
}







static char func_29(unsigned p_30, int p_31)
{
    return g_4;
}







static unsigned * func_47(int p_48, int * p_49)
{
    char l_421[9][7][4] = {{{0x71L, 0x37L, 0xAFL, 2L}, {0x71L, 0x37L, 0xAFL, 2L}, {0x71L, 0x37L, 0xAFL, 2L}, {0x71L, 0x37L, 0xAFL, 2L}, {0x71L, 0x37L, 0xAFL, 2L}, {0x71L, 0x37L, 0xAFL, 2L}, {0x71L, 0x37L, 0xAFL, 2L}}, {{0x71L, 0x37L, 0xAFL, 2L}, {0x71L, 0x37L, 0xAFL, 2L}, {0x71L, 0x37L, 0xAFL, 2L}, {0x71L, 0x37L, 0xAFL, 2L}, {0x71L, 0x37L, 0xAFL, 2L}, {0x71L, 0x37L, 0xAFL, 2L}, {0x71L, 0x37L, 0xAFL, 2L}}, {{0x71L, 0x37L, 0xAFL, 2L}, {0x71L, 0x37L, 0xAFL, 2L}, {0x71L, 0x37L, 0xAFL, 2L}, {0x71L, 0x37L, 0xAFL, 2L}, {0x71L, 0x37L, 0xAFL, 2L}, {0x71L, 0x37L, 0xAFL, 2L}, {0x71L, 0x37L, 0xAFL, 2L}}, {{0x71L, 0x37L, 0xAFL, 2L}, {0x71L, 0x37L, 0xAFL, 2L}, {0x71L, 0x37L, 0xAFL, 2L}, {0x71L, 0x37L, 0xAFL, 2L}, {0x71L, 0x37L, 0xAFL, 2L}, {0x71L, 0x37L, 0xAFL, 2L}, {0x71L, 0x37L, 0xAFL, 2L}}, {{0x71L, 0x37L, 0xAFL, 2L}, {0x71L, 0x37L, 0xAFL, 2L}, {0x71L, 0x37L, 0xAFL, 2L}, {0x71L, 0x37L, 0xAFL, 2L}, {0x71L, 0x37L, 0xAFL, 2L}, {0x71L, 0x37L, 0xAFL, 2L}, {0x71L, 0x37L, 0xAFL, 2L}}, {{0x71L, 0x37L, 0xAFL, 2L}, {0x71L, 0x37L, 0xAFL, 2L}, {0x71L, 0x37L, 0xAFL, 2L}, {0x71L, 0x37L, 0xAFL, 2L}, {0x71L, 0x37L, 0xAFL, 2L}, {0x71L, 0x37L, 0xAFL, 2L}, {0x71L, 0x37L, 0xAFL, 2L}}, {{0x71L, 0x37L, 0xAFL, 2L}, {0x71L, 0x37L, 0xAFL, 2L}, {0x71L, 0x37L, 0xAFL, 2L}, {0x71L, 0x37L, 0xAFL, 2L}, {0x71L, 0x37L, 0xAFL, 2L}, {0x71L, 0x37L, 0xAFL, 2L}, {0x71L, 0x37L, 0xAFL, 2L}}, {{0x71L, 0x37L, 0xAFL, 2L}, {0x71L, 0x37L, 0xAFL, 2L}, {0x71L, 0x37L, 0xAFL, 2L}, {0x71L, 0x37L, 0xAFL, 2L}, {0x71L, 0x37L, 0xAFL, 2L}, {0x71L, 0x37L, 0xAFL, 2L}, {0x71L, 0x37L, 0xAFL, 2L}}, {{0x71L, 0x37L, 0xAFL, 2L}, {0x71L, 0x37L, 0xAFL, 2L}, {0x71L, 0x37L, 0xAFL, 2L}, {0x71L, 0x37L, 0xAFL, 2L}, {0x71L, 0x37L, 0xAFL, 2L}, {0x71L, 0x37L, 0xAFL, 2L}, {0x71L, 0x37L, 0xAFL, 2L}}};
    int l_437 = 0x15AA2A86L;
    int l_440 = 0L;
    int l_484 = (-1L);
    int **l_488 = &g_259;
    unsigned *l_489 = &g_248[6][0];
    int i, j, k;
    l_421[1][4][2] &= 1L;
    for (g_35 = 0; (g_35 != 27); g_35 = safe_add_func_int16_t_s_s(g_35, 3))
    {
        unsigned l_426 = 0xE4F27F65L;
        unsigned *l_427 = &l_426;
        int l_430[10] = {0x2C07887BL, (-1L), 0x2C07887BL, (-1L), 0x2C07887BL, (-1L), 0x2C07887BL, (-1L), 0x2C07887BL, (-1L)};
        char *l_433 = &g_66[1][0][1];
        int *l_470 = &l_430[3];
        unsigned short *l_479 = &g_170;
        int **l_485 = (void*)0;
        int **l_486 = &g_259;
        int **l_487 = &g_376;
        int i;
    }
    (*l_488) = &l_484;

    ;
    return l_489;



}







static int * func_51(short p_52, int * p_53)
{
    int *l_419 = &g_271;
    int *l_420 = &g_269;
    for (g_170 = 0; (g_170 <= 47); g_170++)
    {
        unsigned short **l_418 = (void*)0;
        unsigned short ***l_417 = &l_418;
        (*l_417) = (void*)0;
        if ((*p_53))
            break;
    }
    (*l_420) |= ((*l_419) &= (*p_53));
    return &g_271;


}







static short * func_56(int p_57, short p_58, int p_59, unsigned short p_60)
{
    unsigned l_76 = 0x20CF6802L;
    unsigned **l_230[9][8][3] = {{{(void*)0, &g_34, &g_34}, {(void*)0, &g_34, &g_34}, {(void*)0, &g_34, &g_34}, {(void*)0, &g_34, &g_34}, {(void*)0, &g_34, &g_34}, {(void*)0, &g_34, &g_34}, {(void*)0, &g_34, &g_34}, {(void*)0, &g_34, &g_34}}, {{(void*)0, &g_34, &g_34}, {(void*)0, &g_34, &g_34}, {(void*)0, &g_34, &g_34}, {(void*)0, &g_34, &g_34}, {(void*)0, &g_34, &g_34}, {(void*)0, &g_34, &g_34}, {(void*)0, &g_34, &g_34}, {(void*)0, &g_34, &g_34}}, {{(void*)0, &g_34, &g_34}, {(void*)0, &g_34, &g_34}, {(void*)0, &g_34, &g_34}, {(void*)0, &g_34, &g_34}, {(void*)0, &g_34, &g_34}, {(void*)0, &g_34, &g_34}, {(void*)0, &g_34, &g_34}, {(void*)0, &g_34, &g_34}}, {{(void*)0, &g_34, &g_34}, {(void*)0, &g_34, &g_34}, {(void*)0, &g_34, &g_34}, {(void*)0, &g_34, &g_34}, {(void*)0, &g_34, &g_34}, {(void*)0, &g_34, &g_34}, {(void*)0, &g_34, &g_34}, {(void*)0, &g_34, &g_34}}, {{(void*)0, &g_34, &g_34}, {(void*)0, &g_34, &g_34}, {(void*)0, &g_34, &g_34}, {(void*)0, &g_34, &g_34}, {(void*)0, &g_34, &g_34}, {(void*)0, &g_34, &g_34}, {(void*)0, &g_34, &g_34}, {(void*)0, &g_34, &g_34}}, {{(void*)0, &g_34, &g_34}, {(void*)0, &g_34, &g_34}, {(void*)0, &g_34, &g_34}, {(void*)0, &g_34, &g_34}, {(void*)0, &g_34, &g_34}, {(void*)0, &g_34, &g_34}, {(void*)0, &g_34, &g_34}, {(void*)0, &g_34, &g_34}}, {{(void*)0, &g_34, &g_34}, {(void*)0, &g_34, &g_34}, {(void*)0, &g_34, &g_34}, {(void*)0, &g_34, &g_34}, {(void*)0, &g_34, &g_34}, {(void*)0, &g_34, &g_34}, {(void*)0, &g_34, &g_34}, {(void*)0, &g_34, &g_34}}, {{(void*)0, &g_34, &g_34}, {(void*)0, &g_34, &g_34}, {(void*)0, &g_34, &g_34}, {(void*)0, &g_34, &g_34}, {(void*)0, &g_34, &g_34}, {(void*)0, &g_34, &g_34}, {(void*)0, &g_34, &g_34}, {(void*)0, &g_34, &g_34}}, {{(void*)0, &g_34, &g_34}, {(void*)0, &g_34, &g_34}, {(void*)0, &g_34, &g_34}, {(void*)0, &g_34, &g_34}, {(void*)0, &g_34, &g_34}, {(void*)0, &g_34, &g_34}, {(void*)0, &g_34, &g_34}, {(void*)0, &g_34, &g_34}}};
    short *l_405 = (void*)0;
    int *l_406 = &g_113;
    short ***l_409 = (void*)0;
    short ***l_410 = (void*)0;
    short ***l_411[2];
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_411[i] = &g_195[1];
    for (p_58 = 0; (p_58 < (-9)); p_58 = safe_sub_func_int16_t_s_s(p_58, 3))
    {
        int *l_74 = &g_75;
        (*l_74) = 0x3DF123EFL;
        if (l_76)
            continue;
        for (p_57 = (-14); (p_57 > 18); p_57 = safe_add_func_int32_t_s_s(p_57, 2))
        {
            unsigned **l_233 = &g_34;
            unsigned *l_236 = &g_35;
            int l_380 = 0xE093A666L;
            int *l_402 = &g_271;
            for (p_60 = (-5); (p_60 <= 28); p_60++)
            {
                char l_86 = 0L;
                unsigned **l_228 = (void*)0;
                unsigned **l_229 = &g_34;
                unsigned ***l_231 = (void*)0;
                unsigned ***l_232[3][3][9];
                short *l_234 = &g_235;
                short *l_377 = (void*)0;
                short *l_378 = &g_379;
                unsigned l_400 = 0xD2E8DBCEL;
                int i, j, k;
                for (i = 0; i < 3; i++)
                {
                    for (j = 0; j < 3; j++)
                    {
                        for (k = 0; k < 9; k++)
                            l_232[i][j][k] = &l_228;
                    }
                }
                if ((func_16(((*l_378) ^= (safe_sub_func_int16_t_s_s(((((func_83(l_76, (l_236 = (l_86 , ((safe_mod_func_int16_t_s_s(((*l_234) ^= ((((*l_229) = func_89(p_60)) != l_74) || ((l_230[2][1][1] = l_230[2][1][1]) == l_233))), (p_60 , 65532UL))) , &g_35)))) , p_58) , &p_57) == &g_71) && 1UL), p_58))), l_380, &g_248[6][0], l_86, g_269) < g_71))
                {
                    int l_389 = 0x93B17E52L;
                    unsigned *l_393 = &g_248[6][0];
                    unsigned short *l_394[10][2][4] = {{{&g_170, &g_170, (void*)0, (void*)0}, {&g_170, &g_170, (void*)0, (void*)0}}, {{&g_170, &g_170, (void*)0, (void*)0}, {&g_170, &g_170, (void*)0, (void*)0}}, {{&g_170, &g_170, (void*)0, (void*)0}, {&g_170, &g_170, (void*)0, (void*)0}}, {{&g_170, &g_170, (void*)0, (void*)0}, {&g_170, &g_170, (void*)0, (void*)0}}, {{&g_170, &g_170, (void*)0, (void*)0}, {&g_170, &g_170, (void*)0, (void*)0}}, {{&g_170, &g_170, (void*)0, (void*)0}, {&g_170, &g_170, (void*)0, (void*)0}}, {{&g_170, &g_170, (void*)0, (void*)0}, {&g_170, &g_170, (void*)0, (void*)0}}, {{&g_170, &g_170, (void*)0, (void*)0}, {&g_170, &g_170, (void*)0, (void*)0}}, {{&g_170, &g_170, (void*)0, (void*)0}, {&g_170, &g_170, (void*)0, (void*)0}}, {{&g_170, &g_170, (void*)0, (void*)0}, {&g_170, &g_170, (void*)0, (void*)0}}};
                    unsigned char *l_395[8][8];
                    int l_396[9];
                    int *l_397 = &g_269;
                    int i, j, k;
                    for (i = 0; i < 8; i++)
                    {
                        for (j = 0; j < 8; j++)
                            l_395[i][j] = &g_325;
                    }
                    for (i = 0; i < 9; i++)
                        l_396[i] = 0x9C780D75L;
                    (*l_397) &= (p_60 ^ (l_396[4] ^= ((safe_lshift_func_int8_t_s_u(l_76, func_16(((safe_div_func_uint16_t_u_u(p_58, (safe_mul_func_uint16_t_u_u((safe_add_func_uint16_t_u_u((l_86 , l_380), (0xE7L || p_60))), (g_170 = (func_24((~l_389), (safe_lshift_func_uint8_t_u_s(p_57, g_392)), l_393, g_35) <= (*g_34))))))) >= (*l_74)), (*l_74), &g_35, l_380, (*g_34)))) > p_57)));
                    if (l_76)
                        continue;
                }
                else
                {
                    unsigned short l_401 = 65535UL;
                    (*g_259) = (safe_add_func_uint16_t_u_u(func_29((*g_34), ((func_24(g_271, (l_400 ^ l_401), &g_35, ((void*)0 == &p_58)) | p_57) <= (*g_34))), p_60));
                }
            }
            (*l_402) = ((*g_259) = (*g_259));
            (*l_74) = (0xA38CAB49L == ((*l_74) <= ((*g_196) = (*l_74))));
        }
        for (g_194 = (-26); (g_194 >= (-9)); g_194 = safe_add_func_uint8_t_u_u(g_194, 6))
        {
            return l_405;


        }
    }

    ;
    l_406 = l_406;
    (*g_259) = (safe_mul_func_uint8_t_u_u(((g_412 = (g_195[5] = &g_196)) == &g_196), 9UL));

    ;
    return (*g_412);


}







static int func_83(unsigned short p_84, unsigned * p_85)
{
    short **l_246 = &g_196;
    int *l_257 = &g_75;
    unsigned l_264 = 1UL;
    unsigned short l_327 = 0x1630L;
    int *l_340 = &g_71;
    unsigned **l_363 = (void*)0;
    unsigned ***l_362 = &l_363;
    int *l_371 = &g_271;
    int **l_373 = &g_259;
    for (g_166 = 8; (g_166 >= 3); g_166 -= 1)
    {
        int l_239 = 0L;
        unsigned *l_289 = &g_35;
        short *l_328 = &g_194;
        int l_345 = (-3L);
        for (g_35 = 2; (g_35 <= 8); g_35 += 1)
        {
            int l_273 = 6L;
            int l_285 = 0xB5386900L;
            unsigned **l_287 = &g_34;
            unsigned ***l_286 = &l_287;
            int l_309 = 7L;
            int l_314 = 0x3EE432B5L;
            short *l_329[3];
            int *l_372[1];
            int i;
            for (i = 0; i < 3; i++)
                l_329[i] = (void*)0;
            for (i = 0; i < 1; i++)
                l_372[i] = &g_271;
        }
        for (g_194 = 0; (g_194 <= 2); g_194 += 1)
        {
            return p_84;
        }
    }
    (*l_373) = func_89((*g_34));

    ;
    for (g_170 = (-14); (g_170 > 47); g_170 = safe_add_func_uint32_t_u_u(g_170, 6))
    {
        (*g_259) = func_24((0xD3L <= 1L), g_194, p_85, (*l_371));
        (*l_373) = g_376;

        ;
    }

    ;
    return (**l_373);
}







static unsigned * func_89(unsigned p_90)
{
    short *l_93[2];
    int l_94 = 1L;
    char *l_99 = &g_66[5][1][2];
    int l_130[4][4][7] = {{{(-8L), 0L, 0xB6F1E529L, 0x0DA39397L, 0L, 0xFA911A91L, 0x5A7B369AL}, {(-8L), 0L, 0xB6F1E529L, 0x0DA39397L, 0L, 0xFA911A91L, 0x5A7B369AL}, {(-8L), 0L, 0xB6F1E529L, 0x0DA39397L, 0L, 0xFA911A91L, 0x5A7B369AL}, {(-8L), 0L, 0xB6F1E529L, 0x0DA39397L, 0L, 0xFA911A91L, 0x5A7B369AL}}, {{(-8L), 0L, 0xB6F1E529L, 0x0DA39397L, 0L, 0xFA911A91L, 0x5A7B369AL}, {(-8L), 0L, 0xB6F1E529L, 0x0DA39397L, 0L, 0xFA911A91L, 0x5A7B369AL}, {(-8L), 0L, 0xB6F1E529L, 0x0DA39397L, 0L, 0xFA911A91L, 0x5A7B369AL}, {(-8L), 0L, 0xB6F1E529L, 0x0DA39397L, 0L, 0xFA911A91L, 0x5A7B369AL}}, {{(-8L), 0L, 0xB6F1E529L, 0x0DA39397L, 0L, 0xFA911A91L, 0x5A7B369AL}, {(-8L), 0L, 0xB6F1E529L, 0x0DA39397L, 0L, 0xFA911A91L, 0x5A7B369AL}, {(-8L), 0L, 0xB6F1E529L, 0x0DA39397L, 0L, 0xFA911A91L, 0x5A7B369AL}, {(-8L), 0L, 0xB6F1E529L, 0x0DA39397L, 0L, 0xFA911A91L, 0x5A7B369AL}}, {{(-8L), 0L, 0xB6F1E529L, 0x0DA39397L, 0L, 0xFA911A91L, 0x5A7B369AL}, {(-8L), 0L, 0xB6F1E529L, 0x0DA39397L, 0L, 0xFA911A91L, 0x5A7B369AL}, {(-8L), 0L, 0xB6F1E529L, 0x0DA39397L, 0L, 0xFA911A91L, 0x5A7B369AL}, {(-8L), 0L, 0xB6F1E529L, 0x0DA39397L, 0L, 0xFA911A91L, 0x5A7B369AL}}};
    short l_147 = 1L;
    short **l_152 = (void*)0;
    short **l_153 = &l_93[0];
    unsigned *l_165 = &g_35;
    int l_168 = 0x79EB048EL;
    int *l_219 = &l_130[1][1][3];
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_93[i] = &g_37;
    if (((((g_71 | (g_37 |= (p_90 & (safe_rshift_func_uint16_t_u_s(p_90, 15))))) >= l_94) == ((safe_sub_func_uint32_t_u_u(p_90, ((safe_add_func_uint32_t_u_u((*g_34), ((((l_94 , (p_90 , l_99)) != l_99) & l_94) & p_90))) ^ g_4))) , 0xE2L)) , g_66[3][3][1]))
    {
        int *l_101 = &g_75;
        int **l_100 = &l_101;
        short ***l_102 = (void*)0;
        short **l_103 = &l_93[0];
        char *l_128 = &g_66[3][3][1];
        char *l_129 = (void*)0;
        (*l_100) = (p_90 , (void*)0);

        ;
        l_103 = &l_93[0];
        for (l_94 = 0; (l_94 > (-24)); l_94 = safe_sub_func_uint32_t_u_u(l_94, 7))
        {
            int l_114 = 0L;
            int l_127 = (-2L);
            if (p_90)
            {
                int *l_110 = &g_75;
                int l_117[7][6] = {{0L, (-6L), 0x67AFBDFEL, (-1L), 0L, (-1L)}, {0L, (-6L), 0x67AFBDFEL, (-1L), 0L, (-1L)}, {0L, (-6L), 0x67AFBDFEL, (-1L), 0L, (-1L)}, {0L, (-6L), 0x67AFBDFEL, (-1L), 0L, (-1L)}, {0L, (-6L), 0x67AFBDFEL, (-1L), 0L, (-1L)}, {0L, (-6L), 0x67AFBDFEL, (-1L), 0L, (-1L)}, {0L, (-6L), 0x67AFBDFEL, (-1L), 0L, (-1L)}};
                unsigned short *l_126[3];
                int i, j;
                for (i = 0; i < 3; i++)
                    l_126[i] = (void*)0;
                for (g_37 = 0; (g_37 <= (-7)); g_37 = safe_sub_func_int16_t_s_s(g_37, 9))
                {
                    for (g_75 = (-29); (g_75 == (-3)); g_75 = safe_add_func_int32_t_s_s(g_75, 8))
                    {
                        int l_111 = 0x24A7E6D0L;
                        int *l_112 = &g_113;
                        (*l_100) = l_110;

                        ;
                        l_114 &= ((*l_112) = (l_111 = l_111));
                    }
                }
                (*l_110) = (safe_mul_func_int16_t_s_s((l_130[1][1][3] &= (((*g_34) = (((**l_103) = l_117[0][0]) > (((l_128 = ((safe_rshift_func_int8_t_s_s((safe_add_func_int16_t_s_s((((safe_div_func_int32_t_s_s(g_75, p_90)) , (~0xBBD8L)) == (l_127 = ((safe_rshift_func_uint8_t_u_u(((+g_66[0][0][2]) == p_90), 2)) || p_90))), g_71)), p_90)) , l_99)) != l_129) , (*l_110)))) , p_90)), p_90));
                g_75 &= (safe_sub_func_uint8_t_u_u(((void*)0 != &l_101), (-8L)));
            }
            else
            {
                int l_137 = 0x877AA3FFL;
                unsigned char *l_138 = &g_139;
                int *l_140 = &l_137;
                unsigned char l_141 = 0x8BL;
                if (p_90)
                    break;
                for (p_90 = 0; (p_90 > 25); p_90 = safe_add_func_int16_t_s_s(p_90, 5))
                {
                    return &g_35;


                }
                l_141 = ((*l_140) = (g_75 && ((*l_138) = (safe_add_func_uint8_t_u_u(l_137, g_71)))));
            }
        }

        ;
    }
    else
    {
        return &g_35;


    }
    for (p_90 = 0; (p_90 <= 2); p_90 += 1)
    {
        int *l_142 = &l_130[3][3][5];
        short **l_150[1];
        short ***l_151[8][9][3] = {{{&l_150[0], &l_150[0], &l_150[0]}, {&l_150[0], &l_150[0], &l_150[0]}, {&l_150[0], &l_150[0], &l_150[0]}, {&l_150[0], &l_150[0], &l_150[0]}, {&l_150[0], &l_150[0], &l_150[0]}, {&l_150[0], &l_150[0], &l_150[0]}, {&l_150[0], &l_150[0], &l_150[0]}, {&l_150[0], &l_150[0], &l_150[0]}, {&l_150[0], &l_150[0], &l_150[0]}}, {{&l_150[0], &l_150[0], &l_150[0]}, {&l_150[0], &l_150[0], &l_150[0]}, {&l_150[0], &l_150[0], &l_150[0]}, {&l_150[0], &l_150[0], &l_150[0]}, {&l_150[0], &l_150[0], &l_150[0]}, {&l_150[0], &l_150[0], &l_150[0]}, {&l_150[0], &l_150[0], &l_150[0]}, {&l_150[0], &l_150[0], &l_150[0]}, {&l_150[0], &l_150[0], &l_150[0]}}, {{&l_150[0], &l_150[0], &l_150[0]}, {&l_150[0], &l_150[0], &l_150[0]}, {&l_150[0], &l_150[0], &l_150[0]}, {&l_150[0], &l_150[0], &l_150[0]}, {&l_150[0], &l_150[0], &l_150[0]}, {&l_150[0], &l_150[0], &l_150[0]}, {&l_150[0], &l_150[0], &l_150[0]}, {&l_150[0], &l_150[0], &l_150[0]}, {&l_150[0], &l_150[0], &l_150[0]}}, {{&l_150[0], &l_150[0], &l_150[0]}, {&l_150[0], &l_150[0], &l_150[0]}, {&l_150[0], &l_150[0], &l_150[0]}, {&l_150[0], &l_150[0], &l_150[0]}, {&l_150[0], &l_150[0], &l_150[0]}, {&l_150[0], &l_150[0], &l_150[0]}, {&l_150[0], &l_150[0], &l_150[0]}, {&l_150[0], &l_150[0], &l_150[0]}, {&l_150[0], &l_150[0], &l_150[0]}}, {{&l_150[0], &l_150[0], &l_150[0]}, {&l_150[0], &l_150[0], &l_150[0]}, {&l_150[0], &l_150[0], &l_150[0]}, {&l_150[0], &l_150[0], &l_150[0]}, {&l_150[0], &l_150[0], &l_150[0]}, {&l_150[0], &l_150[0], &l_150[0]}, {&l_150[0], &l_150[0], &l_150[0]}, {&l_150[0], &l_150[0], &l_150[0]}, {&l_150[0], &l_150[0], &l_150[0]}}, {{&l_150[0], &l_150[0], &l_150[0]}, {&l_150[0], &l_150[0], &l_150[0]}, {&l_150[0], &l_150[0], &l_150[0]}, {&l_150[0], &l_150[0], &l_150[0]}, {&l_150[0], &l_150[0], &l_150[0]}, {&l_150[0], &l_150[0], &l_150[0]}, {&l_150[0], &l_150[0], &l_150[0]}, {&l_150[0], &l_150[0], &l_150[0]}, {&l_150[0], &l_150[0], &l_150[0]}}, {{&l_150[0], &l_150[0], &l_150[0]}, {&l_150[0], &l_150[0], &l_150[0]}, {&l_150[0], &l_150[0], &l_150[0]}, {&l_150[0], &l_150[0], &l_150[0]}, {&l_150[0], &l_150[0], &l_150[0]}, {&l_150[0], &l_150[0], &l_150[0]}, {&l_150[0], &l_150[0], &l_150[0]}, {&l_150[0], &l_150[0], &l_150[0]}, {&l_150[0], &l_150[0], &l_150[0]}}, {{&l_150[0], &l_150[0], &l_150[0]}, {&l_150[0], &l_150[0], &l_150[0]}, {&l_150[0], &l_150[0], &l_150[0]}, {&l_150[0], &l_150[0], &l_150[0]}, {&l_150[0], &l_150[0], &l_150[0]}, {&l_150[0], &l_150[0], &l_150[0]}, {&l_150[0], &l_150[0], &l_150[0]}, {&l_150[0], &l_150[0], &l_150[0]}, {&l_150[0], &l_150[0], &l_150[0]}}};
        int *l_154 = (void*)0;
        int *l_155 = (void*)0;
        int *l_156[3][1];
        short ***l_190 = &l_153;
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_150[i] = &l_93[1];
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 1; j++)
                l_156[i][j] = &g_113;
        }
        (*l_142) = g_35;
        g_113 = ((safe_rshift_func_int8_t_s_s((!(((g_75 = ((*l_142) = (g_139 && (safe_sub_func_int32_t_s_s(l_147, (((*l_142) && (safe_mul_func_int16_t_s_s(g_139, g_37))) < ((l_152 = l_150[0]) != (l_153 = &l_93[1])))))))) | p_90) <= 0x3EDF114FL)), g_113)) == p_90);
        for (g_113 = 0; (g_113 <= 2); g_113 += 1)
        {
            unsigned l_157 = 0xF7B2E307L;
            int **l_158 = &l_154;
            unsigned short *l_175 = &g_170;
            l_157 = 0x211E331EL;
            (*l_158) = &g_75;

            ;
            (*l_154) = p_90;
            for (l_147 = 2; (l_147 >= 0); l_147 -= 1)
            {
                int l_161 = 6L;
                unsigned short *l_173 = &g_170;
                int l_208 = 0L;
                for (g_75 = 2; (g_75 >= 0); g_75 -= 1)
                {
                    unsigned short **l_174 = &l_173;
                    int l_183[3];
                    char l_192 = (-1L);
                    int i;
                    for (i = 0; i < 3; i++)
                        l_183[i] = 0x0E445E5FL;
                    for (l_157 = 0; (l_157 <= 2); l_157 += 1)
                    {
                        unsigned short *l_162 = &g_4;
                        int l_167 = 0x361ACFDDL;
                        l_168 |= ((safe_mod_func_uint16_t_u_u(p_90, (l_161 && (l_147 && (l_93[0] == l_162))))) == (safe_mul_func_int16_t_s_s((((((((l_167 = (p_90 && (g_166 &= func_16(p_90, func_29((*g_34), (((*l_142) = l_94) ^ p_90)), l_165, g_71, p_90)))) || g_75) | p_90) || l_130[1][1][3]) == l_161) >= g_139) , p_90), g_37)));
                        g_169[0] = (((*l_158) = (*l_158)) != (void*)0);
                    }
                    g_170 &= ((*l_142) = (-1L));
                    if (((((safe_sub_func_int16_t_s_s(p_90, ((g_169[0] , &g_4) == ((*l_174) = l_173)))) == g_66[2][4][2]) , l_175) != &g_4))
                    {
                        short ***l_188 = &l_153;
                        short ****l_189 = &l_151[3][2][2];
                        short l_193 = 0xE7D5L;
                        if (p_90)
                            break;
                        g_194 |= ((((func_24((safe_unary_minus_func_uint32_t_u((safe_rshift_func_uint16_t_u_s(((**l_158) , ((safe_sub_func_int32_t_s_s((**l_158), (safe_mod_func_int8_t_s_s(l_183[1], (safe_sub_func_uint32_t_u_u((*g_34), g_113)))))) < g_170)), (safe_sub_func_uint16_t_u_u((((*l_189) = l_188) == l_190), ((safe_unary_minus_func_int8_t_s(g_169[0])) > l_192))))))), l_161, l_165, g_35) > 8UL) ^ p_90) != (**l_158)) > l_193);
                        (*l_142) = ((7UL <= ((*l_165) = (((**l_189) = g_195[1]) == ((func_24(l_161, (safe_unary_minus_func_int16_t_s((safe_mod_func_int8_t_s_s((p_90 == (p_90 && (safe_mod_func_uint8_t_u_u(((safe_rshift_func_int16_t_s_u((((safe_mod_func_int16_t_s_s((-3L), l_94)) , (l_208 = func_29(l_161, l_161))) <= (*g_34)), 0)) == 0L), 0xFDL)))), g_169[0])))), l_154, g_66[5][2][0]) , l_193) , (void*)0)))) , p_90);
                    }
                    else
                    {
                        if (p_90)
                            break;
                    }
                }
            }
            for (l_168 = 2; (l_168 >= 0); l_168 -= 1)
            {
                short *l_211[9] = {&l_147, (void*)0, &l_147, (void*)0, &l_147, (void*)0, &l_147, (void*)0, &l_147};
                int l_214[1];
                int i, j, k;
                for (i = 0; i < 1; i++)
                    l_214[i] = 0xA571D432L;
                (*l_142) |= ((((p_90 < ((*g_196) = (-1L))) ^ 0x0AL) == 0x02L) , ((*l_154) = (g_169[0] | (g_66[(g_113 + 1)][(g_113 + 1)][l_168] = ((+(-4L)) , (safe_add_func_uint8_t_u_u(((l_211[3] == (void*)0) ^ func_16((((safe_add_func_int32_t_s_s((0x00511DE0L < (-1L)), (*g_34))) | l_168) , 0xA31BL), p_90, &g_35, l_214[0], p_90)), p_90)))))));
            }
        }



        ;
    }

    ;
    ;
    for (p_90 = (-27); (p_90 >= 46); p_90 = safe_add_func_int8_t_s_s(p_90, 4))
    {
        int *l_218 = &l_130[1][1][3];
        int **l_217[1];
        int i;
        for (i = 0; i < 1; i++)
            l_217[i] = &l_218;
        l_219 = &g_75;

        ;
        (*l_219) ^= g_113;
        for (l_94 = 27; (l_94 <= (-27)); l_94--)
        {
            return l_165;


        }
    }

    ;
    for (g_75 = 27; (g_75 < (-14)); --g_75)
    {
        int *l_224 = &l_130[1][1][1];
        (*l_224) = (p_90 ^ 0x6DL);
        if (p_90)
            break;
        for (g_194 = 0; (g_194 > (-14)); g_194 = safe_sub_func_int8_t_s_s(g_194, 1))
        {
            int **l_227 = (void*)0;
            if (g_139)
                break;
            l_224 = (void*)0;

            ;
        }

        ;
    }
    return l_165;


}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_6, "g_6", print_hash_value);
    transparent_crc(g_35, "g_35", print_hash_value);
    transparent_crc(g_37, "g_37", print_hash_value);
    transparent_crc(g_44, "g_44", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_66[i][j][k], "g_66[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_71, "g_71", print_hash_value);
    transparent_crc(g_75, "g_75", print_hash_value);
    transparent_crc(g_113, "g_113", print_hash_value);
    transparent_crc(g_139, "g_139", print_hash_value);
    transparent_crc(g_166, "g_166", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_169[i], "g_169[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_170, "g_170", print_hash_value);
    transparent_crc(g_194, "g_194", print_hash_value);
    transparent_crc(g_235, "g_235", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_248[i][j], "g_248[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_269, "g_269", print_hash_value);
    transparent_crc(g_271, "g_271", print_hash_value);
    transparent_crc(g_325, "g_325", print_hash_value);
    transparent_crc(g_379, "g_379", print_hash_value);
    transparent_crc(g_392, "g_392", print_hash_value);
    transparent_crc(g_414, "g_414", print_hash_value);
    transparent_crc(g_493, "g_493", print_hash_value);
    transparent_crc(g_496, "g_496", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_499[i], "g_499[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_550, "g_550", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
