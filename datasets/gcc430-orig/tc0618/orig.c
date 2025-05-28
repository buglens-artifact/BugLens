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



static int g_15 = 0x00FA72C2L;
static int *g_29 = &g_15;
static unsigned char g_44 = 3UL;
static char g_72[3] = {(-1L), (-1L), (-1L)};
static int *g_73 = &g_15;
static int *g_83 = &g_15;
static unsigned g_89 = 4294967295UL;
static short g_91 = 1L;
static unsigned g_96 = 4294967295UL;
static int g_100 = 0L;
static unsigned short *g_106 = (void*)0;
static unsigned short g_109 = 65529UL;
static char *g_118 = (void*)0;
static char **g_117 = &g_118;
static int g_120 = 2L;
static volatile int g_140 = (-1L);
static volatile int * volatile g_139 = &g_140;
static volatile int * volatile *g_138[4] = {&g_139, (void*)0, &g_139, (void*)0};
static volatile int * volatile ** volatile g_137 = &g_138[0];
static int **g_144 = &g_29;
static int ***g_143 = &g_144;
static char g_161 = 0x5EL;
static char g_163 = 0xD7L;
static short *g_179 = (void*)0;
static short **g_178 = &g_179;
static volatile unsigned short g_209 = 65528UL;
static volatile char g_219[8][7] = {{(-8L), (-8L), 0x47L, (-8L), (-8L), 0x47L, (-8L)}, {(-8L), (-8L), 0x47L, (-8L), (-8L), 0x47L, (-8L)}, {(-8L), (-8L), 0x47L, (-8L), (-8L), 0x47L, (-8L)}, {(-8L), (-8L), 0x47L, (-8L), (-8L), 0x47L, (-8L)}, {(-8L), (-8L), 0x47L, (-8L), (-8L), 0x47L, (-8L)}, {(-8L), (-8L), 0x47L, (-8L), (-8L), 0x47L, (-8L)}, {(-8L), (-8L), 0x47L, (-8L), (-8L), 0x47L, (-8L)}, {(-8L), (-8L), 0x47L, (-8L), (-8L), 0x47L, (-8L)}};
static volatile char *g_218 = &g_219[0][0];
static volatile char * volatile * volatile g_217 = &g_218;
static int g_242 = 1L;
static unsigned char g_245[3][10] = {{0x66L, 0x03L, 0x66L, 0x03L, 0x66L, 0x03L, 0x66L, 0x03L, 0x66L, 0x03L}, {0x66L, 0x03L, 0x66L, 0x03L, 0x66L, 0x03L, 0x66L, 0x03L, 0x66L, 0x03L}, {0x66L, 0x03L, 0x66L, 0x03L, 0x66L, 0x03L, 0x66L, 0x03L, 0x66L, 0x03L}};
static int g_248 = 0L;
static unsigned char g_251 = 9UL;
static volatile unsigned char g_309 = 0x3FL;
static int *g_326 = &g_120;
static short g_338 = 0xFFB3L;
static int g_363 = 0L;
static volatile int g_403 = (-1L);
static unsigned char g_404 = 0x38L;
static unsigned g_417 = 0x2766ABE1L;
static int ** volatile g_545 = &g_73;
static char *** volatile g_546 = (void*)0;
static int *g_655 = &g_15;



static unsigned char func_1(void);
static int * func_2(unsigned p_3, unsigned p_4, int * p_5, int * p_6);
static short func_9(int * p_10, int * p_11, char p_12, int * p_13);
static int * func_16(int * p_17, int * p_18, int p_19, int * p_20, int p_21);
static int * func_22(int * p_23, int * p_24, int * p_25);
static int * func_26(char p_27, int * p_28);
static int func_30(unsigned p_31, unsigned short p_32, int * p_33, char p_34, int * p_35);
static char func_48(int * p_49, unsigned short p_50, int p_51, int * p_52);
static int * func_53(char p_54);
static int * func_56(unsigned p_57);
static unsigned char func_1(void)
{
    int *l_14 = &g_15;
    unsigned char l_360 = 0x54L;
    unsigned short l_361[7] = {0x89A8L, 0x89A8L, 1UL, 0x89A8L, 0x89A8L, 1UL, 0x89A8L};
    int *l_362 = &g_363;
    int i;
    (*g_144) = func_2(((safe_add_func_int16_t_s_s(((*l_14) = func_9(l_14, func_16(func_22(func_26((*l_14), g_29), l_14, l_14), l_14, (((l_360 && g_248) > l_361[1]) || 255UL), l_362, (*l_362)), g_404, l_362)), g_404)) >= (-3L)), g_404, l_14, l_14);
    return (*l_14);
}







static int * func_2(unsigned p_3, unsigned p_4, int * p_5, int * p_6)
{
    unsigned l_645 = 0UL;
    int *l_658 = &g_100;
    char **l_659 = &g_118;
    char *l_660 = &g_161;
    char *l_661 = &g_72[1];
    for (g_100 = 6; (g_100 >= 1); g_100 -= 1)
    {
        unsigned *l_646[4][6][8] = {{{&g_417, &g_417, (void*)0, &g_417, (void*)0, (void*)0, (void*)0, (void*)0}, {&g_417, &g_417, (void*)0, &g_417, (void*)0, (void*)0, (void*)0, (void*)0}, {&g_417, &g_417, (void*)0, &g_417, (void*)0, (void*)0, (void*)0, (void*)0}, {&g_417, &g_417, (void*)0, &g_417, (void*)0, (void*)0, (void*)0, (void*)0}, {&g_417, &g_417, (void*)0, &g_417, (void*)0, (void*)0, (void*)0, (void*)0}, {&g_417, &g_417, (void*)0, &g_417, (void*)0, (void*)0, (void*)0, (void*)0}}, {{&g_417, &g_417, (void*)0, &g_417, (void*)0, (void*)0, (void*)0, (void*)0}, {&g_417, &g_417, (void*)0, &g_417, (void*)0, (void*)0, (void*)0, (void*)0}, {&g_417, &g_417, (void*)0, &g_417, (void*)0, (void*)0, (void*)0, (void*)0}, {&g_417, &g_417, (void*)0, &g_417, (void*)0, (void*)0, (void*)0, (void*)0}, {&g_417, &g_417, (void*)0, &g_417, (void*)0, (void*)0, (void*)0, (void*)0}, {&g_417, &g_417, (void*)0, &g_417, (void*)0, (void*)0, (void*)0, (void*)0}}, {{&g_417, &g_417, (void*)0, &g_417, (void*)0, (void*)0, (void*)0, (void*)0}, {&g_417, &g_417, (void*)0, &g_417, (void*)0, (void*)0, (void*)0, (void*)0}, {&g_417, &g_417, (void*)0, &g_417, (void*)0, (void*)0, (void*)0, (void*)0}, {&g_417, &g_417, (void*)0, &g_417, (void*)0, (void*)0, (void*)0, (void*)0}, {&g_417, &g_417, (void*)0, &g_417, (void*)0, (void*)0, (void*)0, (void*)0}, {&g_417, &g_417, (void*)0, &g_417, (void*)0, (void*)0, (void*)0, (void*)0}}, {{&g_417, &g_417, (void*)0, &g_417, (void*)0, (void*)0, (void*)0, (void*)0}, {&g_417, &g_417, (void*)0, &g_417, (void*)0, (void*)0, (void*)0, (void*)0}, {&g_417, &g_417, (void*)0, &g_417, (void*)0, (void*)0, (void*)0, (void*)0}, {&g_417, &g_417, (void*)0, &g_417, (void*)0, (void*)0, (void*)0, (void*)0}, {&g_417, &g_417, (void*)0, &g_417, (void*)0, (void*)0, (void*)0, (void*)0}, {&g_417, &g_417, (void*)0, &g_417, (void*)0, (void*)0, (void*)0, (void*)0}}};
        int l_647 = 0L;
        char *l_648 = &g_161;
        int i, j, k;
        (*p_5) = (*g_83);
        (*p_5) = ((l_647 = (l_645 || p_4)) > (*p_5));
        (*g_144) = func_53(((*l_648) = l_645));
        for (g_242 = 2; (g_242 <= 6); g_242 += 1)
        {
            int *l_656 = &g_363;
            int i, j;
            (*g_29) = g_219[g_242][g_100];
            if ((((*l_648) = (safe_add_func_int16_t_s_s((safe_sub_func_uint32_t_u_u((safe_mod_func_int16_t_s_s((0xBFL < g_89), p_4)), (p_3 > g_219[g_242][g_100]))), (p_4 & l_645)))) <= l_647))
            {
                p_5 = func_53(p_3);
                g_655 = p_6;
                l_656 = (void*)0;
                (*g_144) = p_5;
            }
            else
            {
                int *l_657[3][10][8] = {{{(void*)0, &g_15, (void*)0, &g_120, &l_647, &g_363, &l_647, (void*)0}, {(void*)0, &g_15, (void*)0, &g_120, &l_647, &g_363, &l_647, (void*)0}, {(void*)0, &g_15, (void*)0, &g_120, &l_647, &g_363, &l_647, (void*)0}, {(void*)0, &g_15, (void*)0, &g_120, &l_647, &g_363, &l_647, (void*)0}, {(void*)0, &g_15, (void*)0, &g_120, &l_647, &g_363, &l_647, (void*)0}, {(void*)0, &g_15, (void*)0, &g_120, &l_647, &g_363, &l_647, (void*)0}, {(void*)0, &g_15, (void*)0, &g_120, &l_647, &g_363, &l_647, (void*)0}, {(void*)0, &g_15, (void*)0, &g_120, &l_647, &g_363, &l_647, (void*)0}, {(void*)0, &g_15, (void*)0, &g_120, &l_647, &g_363, &l_647, (void*)0}, {(void*)0, &g_15, (void*)0, &g_120, &l_647, &g_363, &l_647, (void*)0}}, {{(void*)0, &g_15, (void*)0, &g_120, &l_647, &g_363, &l_647, (void*)0}, {(void*)0, &g_15, (void*)0, &g_120, &l_647, &g_363, &l_647, (void*)0}, {(void*)0, &g_15, (void*)0, &g_120, &l_647, &g_363, &l_647, (void*)0}, {(void*)0, &g_15, (void*)0, &g_120, &l_647, &g_363, &l_647, (void*)0}, {(void*)0, &g_15, (void*)0, &g_120, &l_647, &g_363, &l_647, (void*)0}, {(void*)0, &g_15, (void*)0, &g_120, &l_647, &g_363, &l_647, (void*)0}, {(void*)0, &g_15, (void*)0, &g_120, &l_647, &g_363, &l_647, (void*)0}, {(void*)0, &g_15, (void*)0, &g_120, &l_647, &g_363, &l_647, (void*)0}, {(void*)0, &g_15, (void*)0, &g_120, &l_647, &g_363, &l_647, (void*)0}, {(void*)0, &g_15, (void*)0, &g_120, &l_647, &g_363, &l_647, (void*)0}}, {{(void*)0, &g_15, (void*)0, &g_120, &l_647, &g_363, &l_647, (void*)0}, {(void*)0, &g_15, (void*)0, &g_120, &l_647, &g_363, &l_647, (void*)0}, {(void*)0, &g_15, (void*)0, &g_120, &l_647, &g_363, &l_647, (void*)0}, {(void*)0, &g_15, (void*)0, &g_120, &l_647, &g_363, &l_647, (void*)0}, {(void*)0, &g_15, (void*)0, &g_120, &l_647, &g_363, &l_647, (void*)0}, {(void*)0, &g_15, (void*)0, &g_120, &l_647, &g_363, &l_647, (void*)0}, {(void*)0, &g_15, (void*)0, &g_120, &l_647, &g_363, &l_647, (void*)0}, {(void*)0, &g_15, (void*)0, &g_120, &l_647, &g_363, &l_647, (void*)0}, {(void*)0, &g_15, (void*)0, &g_120, &l_647, &g_363, &l_647, (void*)0}, {(void*)0, &g_15, (void*)0, &g_120, &l_647, &g_363, &l_647, (void*)0}}};
                int i, j, k;
                (*g_144) = l_657[1][3][4];
            }
            (*g_144) = l_658;
            return p_6;
        }
    }
    l_658 = (*g_545);
    (*g_545) = p_5;
    return l_658;
}







static short func_9(int * p_10, int * p_11, char p_12, int * p_13)
{
    unsigned l_441 = 0x424FF63DL;
    short *l_450 = &g_91;
    char l_451[1];
    int l_454 = 0xF80AD8FBL;
    char *l_457[5][6] = {{&g_72[0], &g_161, &g_163, &g_72[0], &g_163, &l_451[0]}, {&g_72[0], &g_161, &g_163, &g_72[0], &g_163, &l_451[0]}, {&g_72[0], &g_161, &g_163, &g_72[0], &g_163, &l_451[0]}, {&g_72[0], &g_161, &g_163, &g_72[0], &g_163, &l_451[0]}, {&g_72[0], &g_161, &g_163, &g_72[0], &g_163, &l_451[0]}};
    int l_458[7];
    int *l_459 = &g_15;
    char l_473 = (-1L);
    unsigned char l_498 = 247UL;
    char l_526 = 0x7FL;
    unsigned char *l_612 = (void*)0;
    unsigned char **l_611 = &l_612;
    int i, j;
    for (i = 0; i < 1; i++)
        l_451[i] = (-5L);
    for (i = 0; i < 7; i++)
        l_458[i] = 0L;
    (*p_10) = ((*p_13) = l_441);
    if ((((*l_459) && (*l_459)) <= 0x58CAL))
    {
        int l_470 = 0x5A2D97DEL;
        unsigned l_474[8][1][10] = {{{0xEEFF1D3DL, 0xEEFF1D3DL, 0x5BE27D49L, 0xEEFF1D3DL, 0xEEFF1D3DL, 0x5BE27D49L, 0xEEFF1D3DL, 0xEEFF1D3DL, 0x5BE27D49L, 0xEEFF1D3DL}}, {{0xEEFF1D3DL, 0xEEFF1D3DL, 0x5BE27D49L, 0xEEFF1D3DL, 0xEEFF1D3DL, 0x5BE27D49L, 0xEEFF1D3DL, 0xEEFF1D3DL, 0x5BE27D49L, 0xEEFF1D3DL}}, {{0xEEFF1D3DL, 0xEEFF1D3DL, 0x5BE27D49L, 0xEEFF1D3DL, 0xEEFF1D3DL, 0x5BE27D49L, 0xEEFF1D3DL, 0xEEFF1D3DL, 0x5BE27D49L, 0xEEFF1D3DL}}, {{0xEEFF1D3DL, 0xEEFF1D3DL, 0x5BE27D49L, 0xEEFF1D3DL, 0xEEFF1D3DL, 0x5BE27D49L, 0xEEFF1D3DL, 0xEEFF1D3DL, 0x5BE27D49L, 0xEEFF1D3DL}}, {{0xEEFF1D3DL, 0xEEFF1D3DL, 0x5BE27D49L, 0xEEFF1D3DL, 0xEEFF1D3DL, 0x5BE27D49L, 0xEEFF1D3DL, 0xEEFF1D3DL, 0x5BE27D49L, 0xEEFF1D3DL}}, {{0xEEFF1D3DL, 0xEEFF1D3DL, 0x5BE27D49L, 0xEEFF1D3DL, 0xEEFF1D3DL, 0x5BE27D49L, 0xEEFF1D3DL, 0xEEFF1D3DL, 0x5BE27D49L, 0xEEFF1D3DL}}, {{0xEEFF1D3DL, 0xEEFF1D3DL, 0x5BE27D49L, 0xEEFF1D3DL, 0xEEFF1D3DL, 0x5BE27D49L, 0xEEFF1D3DL, 0xEEFF1D3DL, 0x5BE27D49L, 0xEEFF1D3DL}}, {{0xEEFF1D3DL, 0xEEFF1D3DL, 0x5BE27D49L, 0xEEFF1D3DL, 0xEEFF1D3DL, 0x5BE27D49L, 0xEEFF1D3DL, 0xEEFF1D3DL, 0x5BE27D49L, 0xEEFF1D3DL}}};
        int i, j, k;
        (*g_144) = &l_454;
    }
    else
    {
        int l_475 = 1L;
        int *l_486 = &g_242;
        unsigned short ***l_531[7];
        unsigned l_586 = 4294967295UL;
        unsigned l_619 = 0x1FD94D90L;
        int l_631 = 0x95EBD23CL;
        int i;
        for (i = 0; i < 7; i++)
            l_531[i] = (void*)0;
        (*p_10) = (*p_10);
        if ((*p_10))
        {
            int *l_480 = (void*)0;
            int *l_504 = &g_100;
            int l_516 = 0L;
            unsigned short l_520 = 6UL;
            unsigned char *l_525 = &l_498;
            (*p_10) = (*p_10);
            if (l_475)
            {
                (*g_144) = p_11;
            }
            else
            {
                int *l_481 = &g_242;
                int l_502 = 0xB3087533L;
                int l_508 = (-7L);
                for (g_15 = (-15); (g_15 == (-15)); g_15 = safe_add_func_int8_t_s_s(g_15, 7))
                {
                    for (l_475 = 0; (l_475 < 14); l_475 = safe_add_func_uint16_t_u_u(l_475, 2))
                    {
                        (*g_144) = l_480;
                        if ((*g_83))
                            continue;
                    }
                    l_481 = p_11;
                    for (g_338 = (-8); (g_338 >= (-2)); g_338 = safe_add_func_uint16_t_u_u(g_338, 3))
                    {
                        (*g_144) = l_481;
                        return p_12;
                    }
                }
                if ((*p_10))
                {
                    unsigned l_497 = 4294967295UL;
                    int l_500 = 0x22407312L;
                    unsigned short l_513[7][9][4] = {{{65535UL, 0x2680L, 0x2150L, 0x943EL}, {65535UL, 0x2680L, 0x2150L, 0x943EL}, {65535UL, 0x2680L, 0x2150L, 0x943EL}, {65535UL, 0x2680L, 0x2150L, 0x943EL}, {65535UL, 0x2680L, 0x2150L, 0x943EL}, {65535UL, 0x2680L, 0x2150L, 0x943EL}, {65535UL, 0x2680L, 0x2150L, 0x943EL}, {65535UL, 0x2680L, 0x2150L, 0x943EL}, {65535UL, 0x2680L, 0x2150L, 0x943EL}}, {{65535UL, 0x2680L, 0x2150L, 0x943EL}, {65535UL, 0x2680L, 0x2150L, 0x943EL}, {65535UL, 0x2680L, 0x2150L, 0x943EL}, {65535UL, 0x2680L, 0x2150L, 0x943EL}, {65535UL, 0x2680L, 0x2150L, 0x943EL}, {65535UL, 0x2680L, 0x2150L, 0x943EL}, {65535UL, 0x2680L, 0x2150L, 0x943EL}, {65535UL, 0x2680L, 0x2150L, 0x943EL}, {65535UL, 0x2680L, 0x2150L, 0x943EL}}, {{65535UL, 0x2680L, 0x2150L, 0x943EL}, {65535UL, 0x2680L, 0x2150L, 0x943EL}, {65535UL, 0x2680L, 0x2150L, 0x943EL}, {65535UL, 0x2680L, 0x2150L, 0x943EL}, {65535UL, 0x2680L, 0x2150L, 0x943EL}, {65535UL, 0x2680L, 0x2150L, 0x943EL}, {65535UL, 0x2680L, 0x2150L, 0x943EL}, {65535UL, 0x2680L, 0x2150L, 0x943EL}, {65535UL, 0x2680L, 0x2150L, 0x943EL}}, {{65535UL, 0x2680L, 0x2150L, 0x943EL}, {65535UL, 0x2680L, 0x2150L, 0x943EL}, {65535UL, 0x2680L, 0x2150L, 0x943EL}, {65535UL, 0x2680L, 0x2150L, 0x943EL}, {65535UL, 0x2680L, 0x2150L, 0x943EL}, {65535UL, 0x2680L, 0x2150L, 0x943EL}, {65535UL, 0x2680L, 0x2150L, 0x943EL}, {65535UL, 0x2680L, 0x2150L, 0x943EL}, {65535UL, 0x2680L, 0x2150L, 0x943EL}}, {{65535UL, 0x2680L, 0x2150L, 0x943EL}, {65535UL, 0x2680L, 0x2150L, 0x943EL}, {65535UL, 0x2680L, 0x2150L, 0x943EL}, {65535UL, 0x2680L, 0x2150L, 0x943EL}, {65535UL, 0x2680L, 0x2150L, 0x943EL}, {65535UL, 0x2680L, 0x2150L, 0x943EL}, {65535UL, 0x2680L, 0x2150L, 0x943EL}, {65535UL, 0x2680L, 0x2150L, 0x943EL}, {65535UL, 0x2680L, 0x2150L, 0x943EL}}, {{65535UL, 0x2680L, 0x2150L, 0x943EL}, {65535UL, 0x2680L, 0x2150L, 0x943EL}, {65535UL, 0x2680L, 0x2150L, 0x943EL}, {65535UL, 0x2680L, 0x2150L, 0x943EL}, {65535UL, 0x2680L, 0x2150L, 0x943EL}, {65535UL, 0x2680L, 0x2150L, 0x943EL}, {65535UL, 0x2680L, 0x2150L, 0x943EL}, {65535UL, 0x2680L, 0x2150L, 0x943EL}, {65535UL, 0x2680L, 0x2150L, 0x943EL}}, {{65535UL, 0x2680L, 0x2150L, 0x943EL}, {65535UL, 0x2680L, 0x2150L, 0x943EL}, {65535UL, 0x2680L, 0x2150L, 0x943EL}, {65535UL, 0x2680L, 0x2150L, 0x943EL}, {65535UL, 0x2680L, 0x2150L, 0x943EL}, {65535UL, 0x2680L, 0x2150L, 0x943EL}, {65535UL, 0x2680L, 0x2150L, 0x943EL}, {65535UL, 0x2680L, 0x2150L, 0x943EL}, {65535UL, 0x2680L, 0x2150L, 0x943EL}}};
                    unsigned *l_514 = &g_417;
                    unsigned *l_515 = &l_441;
                    int i, j, k;
                    for (g_248 = 0; (g_248 != 26); g_248++)
                    {
                        short l_487 = (-1L);
                        unsigned *l_492 = &g_417;
                        unsigned char *l_493 = (void*)0;
                        unsigned char *l_494 = &g_245[0][4];
                        (*l_486) = (((*g_73) >= (*p_13)) && p_12);
                    }
                    for (g_363 = 0; g_363 < 3; g_363 += 1)
                    {
                        g_72[g_363] = 1L;
                    }
                    for (g_242 = 0; (g_242 <= 6); g_242 += 1)
                    {
                        unsigned short *l_501 = &g_109;
                        int l_503 = 5L;
                        int **l_505[2][9][9] = {{{&l_459, &l_459, &l_459, &l_459, (void*)0, &g_83, &l_504, &l_481, &g_73}, {&l_459, &l_459, &l_459, &l_459, (void*)0, &g_83, &l_504, &l_481, &g_73}, {&l_459, &l_459, &l_459, &l_459, (void*)0, &g_83, &l_504, &l_481, &g_73}, {&l_459, &l_459, &l_459, &l_459, (void*)0, &g_83, &l_504, &l_481, &g_73}, {&l_459, &l_459, &l_459, &l_459, (void*)0, &g_83, &l_504, &l_481, &g_73}, {&l_459, &l_459, &l_459, &l_459, (void*)0, &g_83, &l_504, &l_481, &g_73}, {&l_459, &l_459, &l_459, &l_459, (void*)0, &g_83, &l_504, &l_481, &g_73}, {&l_459, &l_459, &l_459, &l_459, (void*)0, &g_83, &l_504, &l_481, &g_73}, {&l_459, &l_459, &l_459, &l_459, (void*)0, &g_83, &l_504, &l_481, &g_73}}, {{&l_459, &l_459, &l_459, &l_459, (void*)0, &g_83, &l_504, &l_481, &g_73}, {&l_459, &l_459, &l_459, &l_459, (void*)0, &g_83, &l_504, &l_481, &g_73}, {&l_459, &l_459, &l_459, &l_459, (void*)0, &g_83, &l_504, &l_481, &g_73}, {&l_459, &l_459, &l_459, &l_459, (void*)0, &g_83, &l_504, &l_481, &g_73}, {&l_459, &l_459, &l_459, &l_459, (void*)0, &g_83, &l_504, &l_481, &g_73}, {&l_459, &l_459, &l_459, &l_459, (void*)0, &g_83, &l_504, &l_481, &g_73}, {&l_459, &l_459, &l_459, &l_459, (void*)0, &g_83, &l_504, &l_481, &g_73}, {&l_459, &l_459, &l_459, &l_459, (void*)0, &g_83, &l_504, &l_481, &g_73}, {&l_459, &l_459, &l_459, &l_459, (void*)0, &g_83, &l_504, &l_481, &g_73}}};
                        int i, j, k;
                        l_504 = ((*g_144) = p_10);
                        l_458[g_242] = (p_12 | (safe_sub_func_uint8_t_u_u(0xE4L, g_44)));
                    }
                    if (((*p_13) = (((*g_139) ^ l_508) <= ((((*l_486) = ((*l_459) > ((safe_mod_func_uint32_t_u_u(((*l_515) = ((*l_514) = l_513[1][4][3])), l_516)) ^ (*l_486)))) | p_12) >= (g_161 = (l_513[1][4][3] >= g_120))))))
                    {
                        (*g_139) = 0x8CBE5736L;
                        (*g_144) = &l_508;
                        (*l_459) = 2L;
                    }
                    else
                    {
                        int l_519 = 0xABB091EEL;
                        (*g_83) = (safe_sub_func_uint8_t_u_u((0xD759L < ((*l_450) = (*l_459))), l_519));
                        (*l_504) = (*p_13);
                    }
                }
                else
                {
                    (*g_144) = p_11;
                    (*p_10) = 0x18BC3AC4L;
                    p_10 = p_13;
                }
                return p_12;
            }
            (*p_10) = l_520;
            (*l_486) = (~((*l_459) && g_140));
        }
        else
        {
            short l_527 = 1L;
            unsigned short **l_533 = &g_106;
            unsigned short ***l_532[4][4] = {{&l_533, &l_533, &l_533, &l_533}, {&l_533, &l_533, &l_533, &l_533}, {&l_533, &l_533, &l_533, &l_533}, {&l_533, &l_533, &l_533, &l_533}};
            int *l_541 = &g_100;
            int l_560 = 0x0C7C55ACL;
            char l_600 = 1L;
            int i, j;
            if (((*g_73) = l_526))
            {
                unsigned l_535 = 0x2DCF4EA9L;
                int l_536 = (-1L);
                int *l_542 = &l_458[1];
                if ((*l_459))
                {
                    int *l_528[3];
                    unsigned short ****l_534 = &l_532[1][3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_528[i] = (void*)0;
                    (*g_144) = p_11;
                    if (l_536)
                    {
                        int *l_537 = &g_242;
                        (*g_144) = l_537;
                        return p_12;
                    }
                    else
                    {
                        unsigned *l_540 = &g_417;
                        (*g_144) = func_53((safe_sub_func_uint32_t_u_u((p_12 != 9UL), p_12)));
                    }
                }
                else
                {
                    char ***l_547 = &g_117;
                    if ((*l_541))
                    {
                        (*g_83) = (*p_10);
                    }
                    else
                    {
                        (*g_545) = ((*g_144) = func_16(p_13, l_542, ((*l_486) = ((*p_10) = ((*l_541) = (safe_mod_func_int8_t_s_s(((g_44 || p_12) | g_245[1][8]), (p_12 && 0x69B9L)))))), p_11, (*p_13)));
                        (*l_486) = (*l_486);
                        l_541 = p_10;
                    }
                    (*l_547) = &l_457[2][0];
                }
                for (l_454 = (-22); (l_454 >= (-17)); l_454 = safe_add_func_int16_t_s_s(l_454, 1))
                {
                    (*l_541) = (p_12 >= (safe_mod_func_uint8_t_u_u(p_12, (**g_217))));
                    if ((*l_541))
                        continue;
                }
                (*l_459) = (*l_486);
            }
            else
            {
                int *l_552 = &g_15;
                unsigned char *l_559 = &g_245[1][8];
                unsigned l_561 = 0x9BBD31F6L;
                int l_579 = 4L;
                unsigned short **l_607 = &g_106;
                if ((*l_459))
                {
                    (*g_144) = l_552;
                    for (g_89 = 20; (g_89 > 2); --g_89)
                    {
                        unsigned l_568[5] = {0xB3DF25A8L, 0x2E92DBF2L, 0xB3DF25A8L, 0x2E92DBF2L, 0xB3DF25A8L};
                        unsigned *l_591[1];
                        int l_592 = (-7L);
                        unsigned short **l_593 = &g_106;
                        unsigned *l_599[2][9];
                        unsigned **l_598 = &l_599[1][7];
                        int i, j;
                        for (i = 0; i < 1; i++)
                            l_591[i] = &l_586;
                        for (i = 0; i < 2; i++)
                        {
                            for (j = 0; j < 9; j++)
                                l_599[i][j] = (void*)0;
                        }
                    }
                    if ((g_91 == 0xF7796FF4L))
                    {
                        (*g_144) = func_56((*l_552));
                        (*g_83) = (0x01L >= 6L);
                        (*g_144) = (*g_545);
                        (*g_83) = ((*p_13) = (*g_29));
                    }
                    else
                    {
                        unsigned char l_610 = 0UL;
                        (*p_10) = (2UL ^ (safe_rshift_func_int16_t_s_u(((safe_lshift_func_uint16_t_u_s(((~(*g_218)) || 1L), ((*l_450) = ((*l_459) < (safe_lshift_func_uint8_t_u_u(((void*)0 == l_607), g_44)))))) && (*l_541)), (safe_sub_func_int16_t_s_s((-7L), l_610)))));
                    }
                }
                else
                {
                    unsigned char ***l_613[9][5][4] = {{{(void*)0, (void*)0, &l_611, (void*)0}, {(void*)0, (void*)0, &l_611, (void*)0}, {(void*)0, (void*)0, &l_611, (void*)0}, {(void*)0, (void*)0, &l_611, (void*)0}, {(void*)0, (void*)0, &l_611, (void*)0}}, {{(void*)0, (void*)0, &l_611, (void*)0}, {(void*)0, (void*)0, &l_611, (void*)0}, {(void*)0, (void*)0, &l_611, (void*)0}, {(void*)0, (void*)0, &l_611, (void*)0}, {(void*)0, (void*)0, &l_611, (void*)0}}, {{(void*)0, (void*)0, &l_611, (void*)0}, {(void*)0, (void*)0, &l_611, (void*)0}, {(void*)0, (void*)0, &l_611, (void*)0}, {(void*)0, (void*)0, &l_611, (void*)0}, {(void*)0, (void*)0, &l_611, (void*)0}}, {{(void*)0, (void*)0, &l_611, (void*)0}, {(void*)0, (void*)0, &l_611, (void*)0}, {(void*)0, (void*)0, &l_611, (void*)0}, {(void*)0, (void*)0, &l_611, (void*)0}, {(void*)0, (void*)0, &l_611, (void*)0}}, {{(void*)0, (void*)0, &l_611, (void*)0}, {(void*)0, (void*)0, &l_611, (void*)0}, {(void*)0, (void*)0, &l_611, (void*)0}, {(void*)0, (void*)0, &l_611, (void*)0}, {(void*)0, (void*)0, &l_611, (void*)0}}, {{(void*)0, (void*)0, &l_611, (void*)0}, {(void*)0, (void*)0, &l_611, (void*)0}, {(void*)0, (void*)0, &l_611, (void*)0}, {(void*)0, (void*)0, &l_611, (void*)0}, {(void*)0, (void*)0, &l_611, (void*)0}}, {{(void*)0, (void*)0, &l_611, (void*)0}, {(void*)0, (void*)0, &l_611, (void*)0}, {(void*)0, (void*)0, &l_611, (void*)0}, {(void*)0, (void*)0, &l_611, (void*)0}, {(void*)0, (void*)0, &l_611, (void*)0}}, {{(void*)0, (void*)0, &l_611, (void*)0}, {(void*)0, (void*)0, &l_611, (void*)0}, {(void*)0, (void*)0, &l_611, (void*)0}, {(void*)0, (void*)0, &l_611, (void*)0}, {(void*)0, (void*)0, &l_611, (void*)0}}, {{(void*)0, (void*)0, &l_611, (void*)0}, {(void*)0, (void*)0, &l_611, (void*)0}, {(void*)0, (void*)0, &l_611, (void*)0}, {(void*)0, (void*)0, &l_611, (void*)0}, {(void*)0, (void*)0, &l_611, (void*)0}}};
                    int *l_614 = &g_242;
                    char l_617 = 1L;
                    int i, j, k;
                    l_611 = l_611;
                    if ((*p_10))
                    {
                        (*p_10) = (safe_lshift_func_uint16_t_u_u(((*l_614) = (*l_614)), l_617));
                        (*p_10) = 0x441812C1L;
                    }
                    else
                    {
                        int l_618 = 6L;
                        (*l_552) = l_618;
                        p_13 = p_11;
                        (*g_144) = p_11;
                        l_614 = func_56(((p_12 | p_12) && p_12));
                    }
                    if ((*g_73))
                    {
                        (*g_144) = func_53(p_12);
                    }
                    else
                    {
                        (*p_10) = (*l_614);
                        return (*l_459);
                    }
                }
                for (g_44 = 0; (g_44 <= 3); g_44 += 1)
                {
                    char l_634 = 0x6BL;
                    for (l_561 = 0; (l_561 <= 3); l_561 += 1)
                    {
                        int i, j;
                        if (g_219[(l_561 + 1)][l_561])
                            break;
                        (*g_144) = (void*)0;
                    }
                    for (g_242 = 3; (g_242 >= 0); g_242 -= 1)
                    {
                        unsigned *l_628 = &l_441;
                        int i, j;
                        (*g_73) = ((~(safe_rshift_func_uint8_t_u_s(p_12, (((void*)0 == &g_179) ^ ((((safe_add_func_uint32_t_u_u(((*l_628) = (safe_mod_func_uint8_t_u_u(g_72[0], p_12))), (safe_lshift_func_uint16_t_u_u((l_631 = 65526UL), 10)))) | ((+(&p_12 == (void*)0)) | (safe_rshift_func_int16_t_s_u((-1L), l_634)))) != (*l_552)) > 0x0D2A722AL))))) != 0UL);
                        if ((*l_486))
                            break;
                    }
                }
                if (((void*)0 == (*g_178)))
                {
                    (*g_144) = p_10;
                }
                else
                {
                    (*g_144) = p_11;
                    (*p_10) = (p_12 & (safe_rshift_func_int16_t_s_u(((-1L) <= 6UL), p_12)));
                }
            }
            for (p_12 = 0; (p_12 == (-29)); p_12--)
            {
                (*l_459) = (safe_rshift_func_uint16_t_u_s((65535UL & p_12), (*l_459)));
                return p_12;
            }
            (*g_83) = (-1L);
            return p_12;
        }
    }
    for (g_15 = (-11); (g_15 != (-15)); g_15 = safe_sub_func_int16_t_s_s(g_15, 7))
    {
        char ***l_643 = &g_117;
        volatile int * volatile **l_644 = &g_138[0];
        (*l_643) = &l_457[2][0];
        (*l_644) = (*g_137);
        return p_12;
    }
    return p_12;
}







static int * func_16(int * p_17, int * p_18, int p_19, int * p_20, int p_21)
{
    int l_366 = (-5L);
    unsigned char l_367 = 5UL;
    int *l_405 = &g_242;
    int l_424[5][3] = {{0x1892F36FL, 1L, 1L}, {0x1892F36FL, 1L, 1L}, {0x1892F36FL, 1L, 1L}, {0x1892F36FL, 1L, 1L}, {0x1892F36FL, 1L, 1L}};
    unsigned short l_435 = 65534UL;
    int *l_440 = &g_242;
    int i, j;
    if ((safe_mod_func_int16_t_s_s((p_21 && (g_91 = (l_367 >= (l_366 <= (safe_lshift_func_uint16_t_u_u(((safe_add_func_int8_t_s_s((g_309 & p_19), l_366)) >= l_366), 3)))))), 0x9BE3L)))
    {
        char ***l_385 = &g_117;
        int l_389 = 0xC75080D3L;
        int *l_391 = &g_100;
        unsigned short *l_402 = &g_109;
        (*g_73) = 0L;
        for (g_363 = 0; (g_363 <= (-30)); --g_363)
        {
            short l_382 = 0x38C2L;
            char ****l_386 = &l_385;
            char ***l_388[2][3][4];
            char ****l_387 = &l_388[0][2][1];
            int *l_390 = (void*)0;
            int i, j, k;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 3; j++)
                {
                    for (k = 0; k < 4; k++)
                        l_388[i][j][k] = &g_117;
                }
            }
            (*g_83) = (safe_add_func_uint32_t_u_u(0x31C8A64BL, (safe_rshift_func_int16_t_s_s((safe_add_func_int16_t_s_s(l_367, 0xA4C8L)), 15))));
            (*g_73) = (safe_lshift_func_uint8_t_u_u(l_382, (safe_lshift_func_uint16_t_u_s(((((*l_386) = l_385) != ((*l_387) = (void*)0)) == l_389), 12))));
            if ((*g_73))
            {
                if (l_389)
                    break;
            }
            else
            {
                if (l_389)
                    break;
                return l_390;
            }
        }
        (*p_18) = (*g_139);
        l_405 = (void*)0;
    }
    else
    {
        int l_418 = 0x7EE9AFB1L;
        for (g_363 = 25; (g_363 >= (-15)); g_363 = safe_sub_func_uint32_t_u_u(g_363, 9))
        {
            char *l_423 = (void*)0;
            char *l_434 = &g_163;
            unsigned char *l_439 = (void*)0;
            unsigned char **l_438 = &l_439;
            for (g_109 = (-12); (g_109 > 24); g_109++)
            {
                unsigned *l_416 = &g_417;
                int l_425 = 0x17B31BC2L;
                int l_426[8][3][10] = {{{0x73FC7AFDL, 0x0D2A5A22L, 0L, 1L, 0xD23BE1CAL, 0x2A5B0014L, 9L, (-1L), 0x4F64149DL, 0x51286D18L}, {0x73FC7AFDL, 0x0D2A5A22L, 0L, 1L, 0xD23BE1CAL, 0x2A5B0014L, 9L, (-1L), 0x4F64149DL, 0x51286D18L}, {0x73FC7AFDL, 0x0D2A5A22L, 0L, 1L, 0xD23BE1CAL, 0x2A5B0014L, 9L, (-1L), 0x4F64149DL, 0x51286D18L}}, {{0x73FC7AFDL, 0x0D2A5A22L, 0L, 1L, 0xD23BE1CAL, 0x2A5B0014L, 9L, (-1L), 0x4F64149DL, 0x51286D18L}, {0x73FC7AFDL, 0x0D2A5A22L, 0L, 1L, 0xD23BE1CAL, 0x2A5B0014L, 9L, (-1L), 0x4F64149DL, 0x51286D18L}, {0x73FC7AFDL, 0x0D2A5A22L, 0L, 1L, 0xD23BE1CAL, 0x2A5B0014L, 9L, (-1L), 0x4F64149DL, 0x51286D18L}}, {{0x73FC7AFDL, 0x0D2A5A22L, 0L, 1L, 0xD23BE1CAL, 0x2A5B0014L, 9L, (-1L), 0x4F64149DL, 0x51286D18L}, {0x73FC7AFDL, 0x0D2A5A22L, 0L, 1L, 0xD23BE1CAL, 0x2A5B0014L, 9L, (-1L), 0x4F64149DL, 0x51286D18L}, {0x73FC7AFDL, 0x0D2A5A22L, 0L, 1L, 0xD23BE1CAL, 0x2A5B0014L, 9L, (-1L), 0x4F64149DL, 0x51286D18L}}, {{0x73FC7AFDL, 0x0D2A5A22L, 0L, 1L, 0xD23BE1CAL, 0x2A5B0014L, 9L, (-1L), 0x4F64149DL, 0x51286D18L}, {0x73FC7AFDL, 0x0D2A5A22L, 0L, 1L, 0xD23BE1CAL, 0x2A5B0014L, 9L, (-1L), 0x4F64149DL, 0x51286D18L}, {0x73FC7AFDL, 0x0D2A5A22L, 0L, 1L, 0xD23BE1CAL, 0x2A5B0014L, 9L, (-1L), 0x4F64149DL, 0x51286D18L}}, {{0x73FC7AFDL, 0x0D2A5A22L, 0L, 1L, 0xD23BE1CAL, 0x2A5B0014L, 9L, (-1L), 0x4F64149DL, 0x51286D18L}, {0x73FC7AFDL, 0x0D2A5A22L, 0L, 1L, 0xD23BE1CAL, 0x2A5B0014L, 9L, (-1L), 0x4F64149DL, 0x51286D18L}, {0x73FC7AFDL, 0x0D2A5A22L, 0L, 1L, 0xD23BE1CAL, 0x2A5B0014L, 9L, (-1L), 0x4F64149DL, 0x51286D18L}}, {{0x73FC7AFDL, 0x0D2A5A22L, 0L, 1L, 0xD23BE1CAL, 0x2A5B0014L, 9L, (-1L), 0x4F64149DL, 0x51286D18L}, {0x73FC7AFDL, 0x0D2A5A22L, 0L, 1L, 0xD23BE1CAL, 0x2A5B0014L, 9L, (-1L), 0x4F64149DL, 0x51286D18L}, {0x73FC7AFDL, 0x0D2A5A22L, 0L, 1L, 0xD23BE1CAL, 0x2A5B0014L, 9L, (-1L), 0x4F64149DL, 0x51286D18L}}, {{0x73FC7AFDL, 0x0D2A5A22L, 0L, 1L, 0xD23BE1CAL, 0x2A5B0014L, 9L, (-1L), 0x4F64149DL, 0x51286D18L}, {0x73FC7AFDL, 0x0D2A5A22L, 0L, 1L, 0xD23BE1CAL, 0x2A5B0014L, 9L, (-1L), 0x4F64149DL, 0x51286D18L}, {0x73FC7AFDL, 0x0D2A5A22L, 0L, 1L, 0xD23BE1CAL, 0x2A5B0014L, 9L, (-1L), 0x4F64149DL, 0x51286D18L}}, {{0x73FC7AFDL, 0x0D2A5A22L, 0L, 1L, 0xD23BE1CAL, 0x2A5B0014L, 9L, (-1L), 0x4F64149DL, 0x51286D18L}, {0x73FC7AFDL, 0x0D2A5A22L, 0L, 1L, 0xD23BE1CAL, 0x2A5B0014L, 9L, (-1L), 0x4F64149DL, 0x51286D18L}, {0x73FC7AFDL, 0x0D2A5A22L, 0L, 1L, 0xD23BE1CAL, 0x2A5B0014L, 9L, (-1L), 0x4F64149DL, 0x51286D18L}}};
                int i, j, k;
                for (p_19 = 3; (p_19 >= 0); p_19 -= 1)
                {
                    int i, j;
                    (*g_73) = g_219[(p_19 + 3)][(p_19 + 3)];
                }
                if ((l_418 = (safe_add_func_uint8_t_u_u((g_338 != ((l_425 = ((safe_rshift_func_uint16_t_u_u((((!(safe_mod_func_int32_t_s_s(0xF79201D8L, ((*l_416) = g_219[5][1])))) || (*l_405)) | l_418), 5)) < (safe_rshift_func_uint8_t_u_u((safe_sub_func_int32_t_s_s((l_423 != (void*)0), l_424[4][0])), 7)))) != (*g_83))), l_426[6][2][0]))))
                {
                    unsigned char l_429[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_429[i] = 0x3EL;
                    (*g_144) = &p_21;
                    for (g_248 = (-15); (g_248 == 3); g_248++)
                    {
                        (**g_144) = l_429[0];
                        (*g_144) = func_53(l_426[2][2][4]);
                    }
                }
                else
                {
                    for (g_100 = 2; (g_100 >= 0); g_100 -= 1)
                    {
                        (*g_144) = &l_366;
                    }
                }
            }
            (*g_83) = (safe_mod_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s(((*l_434) = p_21), l_435)), (safe_mod_func_uint32_t_u_u(g_245[0][1], ((l_438 == (void*)0) && g_209)))));
        }
        return l_440;
    }
    return &g_100;
}







static int * func_22(int * p_23, int * p_24, int * p_25)
{
    char *l_300 = &g_161;
    char *l_301 = &g_161;
    int l_304[10] = {0x275ACE0FL, 0x5883E4B1L, 0xCD6AE3D4L, 0xCD6AE3D4L, 0x5883E4B1L, 0x275ACE0FL, 0x5883E4B1L, 0xCD6AE3D4L, 0xCD6AE3D4L, 0x5883E4B1L};
    int *l_318 = &l_304[3];
    unsigned short *l_353 = &g_109;
    int i;
    (*g_144) = p_23;
    (*p_24) = ((g_309 <= 0x54D64D8AL) || l_304[3]);
    for (g_242 = (-2); (g_242 > 12); ++g_242)
    {
        int *l_312 = &g_120;
        int ***l_333 = &g_144;
        (*p_24) = (*p_24);
        for (g_91 = 0; (g_91 < (-22)); g_91 = safe_sub_func_int16_t_s_s(g_91, 1))
        {
            int l_315[10] = {0xA09B0128L, 1L, 0xA6B7EA1FL, 0xA6B7EA1FL, 1L, 0xA09B0128L, 1L, 0xA6B7EA1FL, 0xA6B7EA1FL, 1L};
            int i;
            (*l_312) = (l_315[7] != (0UL != (*p_25)));
            (*g_144) = (void*)0;
        }
        if ((safe_lshift_func_uint8_t_u_u(246UL, 6)))
        {
            (*g_144) = l_318;
        }
        else
        {
            unsigned l_321[2][4];
            int i, j;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 4; j++)
                    l_321[i][j] = 0x8D5E8493L;
            }
            for (g_91 = 0; (g_91 != (-6)); g_91--)
            {
                int ***l_335[1][10][9] = {{{&g_144, &g_144, &g_144, &g_144, &g_144, (void*)0, &g_144, &g_144, &g_144}, {&g_144, &g_144, &g_144, &g_144, &g_144, (void*)0, &g_144, &g_144, &g_144}, {&g_144, &g_144, &g_144, &g_144, &g_144, (void*)0, &g_144, &g_144, &g_144}, {&g_144, &g_144, &g_144, &g_144, &g_144, (void*)0, &g_144, &g_144, &g_144}, {&g_144, &g_144, &g_144, &g_144, &g_144, (void*)0, &g_144, &g_144, &g_144}, {&g_144, &g_144, &g_144, &g_144, &g_144, (void*)0, &g_144, &g_144, &g_144}, {&g_144, &g_144, &g_144, &g_144, &g_144, (void*)0, &g_144, &g_144, &g_144}, {&g_144, &g_144, &g_144, &g_144, &g_144, (void*)0, &g_144, &g_144, &g_144}, {&g_144, &g_144, &g_144, &g_144, &g_144, (void*)0, &g_144, &g_144, &g_144}, {&g_144, &g_144, &g_144, &g_144, &g_144, (void*)0, &g_144, &g_144, &g_144}}};
                int i, j, k;
                if (l_321[1][3])
                {
                    (*l_318) = l_321[1][2];
                    for (g_109 = 0; (g_109 <= 59); g_109 = safe_add_func_uint32_t_u_u(g_109, 4))
                    {
                        unsigned *l_324 = (void*)0;
                        unsigned *l_325 = &g_89;
                        (*g_144) = p_23;
                        (*g_144) = func_56(((*l_325) = 0x4C9C0968L));
                        g_326 = p_23;
                    }
                }
                else
                {
                    int l_343 = 0x275DC9E8L;
                    for (g_251 = 0; (g_251 > 48); g_251 = safe_add_func_uint16_t_u_u(g_251, 2))
                    {
                        (*g_144) = func_56((*l_318));
                    }
                    for (g_96 = 10; (g_96 > 29); g_96 = safe_add_func_int32_t_s_s(g_96, 1))
                    {
                        int ****l_334 = &g_143;
                        short *l_336 = (void*)0;
                        short *l_337 = &g_338;
                        (**l_333) = func_56((((safe_add_func_uint8_t_u_u((l_333 == (l_335[0][9][6] = (void*)0)), ((((*l_337) = l_321[0][3]) <= (*l_318)) >= g_100))) || (l_321[1][3] ^ l_321[1][2])) > 0x57D01596L));
                        if ((*p_24))
                            break;
                        (*l_318) = ((*g_83) = (safe_rshift_func_uint8_t_u_u(g_163, 2)));
                        (**l_333) = (*g_144);
                    }
                    for (g_109 = 0; (g_109 != 12); g_109 = safe_add_func_uint8_t_u_u(g_109, 4))
                    {
                        if (l_343)
                            break;
                    }
                    (*l_318) = (*p_24);
                }
                g_83 = ((*g_144) = func_56(g_219[0][0]));
            }
            if (l_321[1][0])
                continue;
        }
        if ((*l_318))
            break;
    }
    for (g_338 = 0; (g_338 != 18); g_338++)
    {
        unsigned l_348 = 4294967295UL;
        short *l_349[5] = {&g_91, (void*)0, &g_91, (void*)0, &g_91};
        int l_350 = 0x12725317L;
        unsigned char *l_354 = (void*)0;
        unsigned char *l_355[8];
        int l_356 = 0x6CD39D24L;
        int i;
        for (i = 0; i < 8; i++)
            l_355[i] = &g_245[1][8];
        (*p_24) = (((-2L) && (l_350 = (safe_mod_func_int32_t_s_s((*l_318), l_348)))) <= (((safe_lshift_func_uint8_t_u_u((*l_318), (*l_318))) & 0x5A11C1BFL) || (((**g_217) < (l_356 = ((*l_318) || (l_353 != l_353)))) < l_348)));
        for (g_91 = 0; (g_91 == 10); g_91++)
        {
            int l_359 = (-1L);
            l_359 = (*p_24);
        }
        for (l_350 = 0; (l_350 <= 2); l_350 += 1)
        {
            int i, j;
            (*g_144) = func_53(g_245[l_350][(l_350 + 6)]);
            return p_23;
        }
        (*p_24) = (*l_318);
    }
    return p_25;
}







static int * func_26(char p_27, int * p_28)
{
    int *l_40[10][9][2] = {{{&g_15, (void*)0}, {&g_15, (void*)0}, {&g_15, (void*)0}, {&g_15, (void*)0}, {&g_15, (void*)0}, {&g_15, (void*)0}, {&g_15, (void*)0}, {&g_15, (void*)0}, {&g_15, (void*)0}}, {{&g_15, (void*)0}, {&g_15, (void*)0}, {&g_15, (void*)0}, {&g_15, (void*)0}, {&g_15, (void*)0}, {&g_15, (void*)0}, {&g_15, (void*)0}, {&g_15, (void*)0}, {&g_15, (void*)0}}, {{&g_15, (void*)0}, {&g_15, (void*)0}, {&g_15, (void*)0}, {&g_15, (void*)0}, {&g_15, (void*)0}, {&g_15, (void*)0}, {&g_15, (void*)0}, {&g_15, (void*)0}, {&g_15, (void*)0}}, {{&g_15, (void*)0}, {&g_15, (void*)0}, {&g_15, (void*)0}, {&g_15, (void*)0}, {&g_15, (void*)0}, {&g_15, (void*)0}, {&g_15, (void*)0}, {&g_15, (void*)0}, {&g_15, (void*)0}}, {{&g_15, (void*)0}, {&g_15, (void*)0}, {&g_15, (void*)0}, {&g_15, (void*)0}, {&g_15, (void*)0}, {&g_15, (void*)0}, {&g_15, (void*)0}, {&g_15, (void*)0}, {&g_15, (void*)0}}, {{&g_15, (void*)0}, {&g_15, (void*)0}, {&g_15, (void*)0}, {&g_15, (void*)0}, {&g_15, (void*)0}, {&g_15, (void*)0}, {&g_15, (void*)0}, {&g_15, (void*)0}, {&g_15, (void*)0}}, {{&g_15, (void*)0}, {&g_15, (void*)0}, {&g_15, (void*)0}, {&g_15, (void*)0}, {&g_15, (void*)0}, {&g_15, (void*)0}, {&g_15, (void*)0}, {&g_15, (void*)0}, {&g_15, (void*)0}}, {{&g_15, (void*)0}, {&g_15, (void*)0}, {&g_15, (void*)0}, {&g_15, (void*)0}, {&g_15, (void*)0}, {&g_15, (void*)0}, {&g_15, (void*)0}, {&g_15, (void*)0}, {&g_15, (void*)0}}, {{&g_15, (void*)0}, {&g_15, (void*)0}, {&g_15, (void*)0}, {&g_15, (void*)0}, {&g_15, (void*)0}, {&g_15, (void*)0}, {&g_15, (void*)0}, {&g_15, (void*)0}, {&g_15, (void*)0}}, {{&g_15, (void*)0}, {&g_15, (void*)0}, {&g_15, (void*)0}, {&g_15, (void*)0}, {&g_15, (void*)0}, {&g_15, (void*)0}, {&g_15, (void*)0}, {&g_15, (void*)0}, {&g_15, (void*)0}}};
    unsigned char *l_43 = &g_44;
    unsigned l_299 = 0UL;
    int i, j, k;
    (*p_28) = (l_299 = func_30((((safe_lshift_func_int8_t_s_s((safe_sub_func_uint16_t_u_u(((void*)0 != &g_15), (p_28 == p_28))), 7)) < ((void*)0 != l_40[6][3][1])) < ((safe_add_func_uint8_t_u_u(((*l_43) = (g_15 || p_27)), ((1UL & g_15) == p_27))) & g_15)), p_27, &g_15, p_27, l_40[6][3][1]));
    if ((*p_28))
    {
        return l_40[4][7][1];
    }
    else
    {
        (*g_83) = (*p_28);
        (*g_73) = (-1L);
    }
    return p_28;
}







static int func_30(unsigned p_31, unsigned short p_32, int * p_33, char p_34, int * p_35)
{
    unsigned l_45 = 0UL;
    unsigned char *l_55 = &g_44;
    unsigned short l_88[6] = {0xE23FL, 0xE23FL, 0UL, 0xE23FL, 0xE23FL, 0UL};
    short *l_90 = &g_91;
    unsigned short *l_92 = (void*)0;
    unsigned short *l_93 = &l_88[4];
    int l_97 = 2L;
    int l_98 = (-10L);
    int *l_99 = &g_100;
    unsigned *l_252 = &l_45;
    unsigned short **l_265 = &l_93;
    char *l_288 = &g_163;
    int *l_295 = (void*)0;
    int *l_296 = &l_97;
    short l_297 = 0x282AL;
    short l_298 = 0xA2E2L;
    int i;
    (*p_33) = l_45;
    if ((((*l_252) = (safe_mod_func_int8_t_s_s(func_48(func_53(((void*)0 != l_55)), (l_98 = ((safe_rshift_func_uint16_t_u_u(((*l_93) = (safe_add_func_uint32_t_u_u(0x6A0F30BDL, (~(l_88[3] == ((*l_90) = g_89)))))), (safe_lshift_func_uint8_t_u_u((((g_96 = (-9L)) | (((l_97 = (l_45 || ((g_89 & 9L) ^ g_89))) < p_32) != 0x19L)) || p_34), 5)))) < 0xC7E6L)), g_89, l_99), g_251))) && 1L))
    {
        char *l_255 = &g_161;
        int l_256 = 0xEF01F0A4L;
        unsigned char l_267 = 0x90L;
        (*g_73) = (*p_33);
        if ((safe_lshift_func_int8_t_s_s(0xC3L, (*l_99))))
        {
            (*g_83) = (*p_33);
            return (*p_33);
        }
        else
        {
            char *l_270[1][3][8] = {{{&g_72[0], &g_72[0], &g_161, &g_72[0], &g_72[0], &g_161, &g_72[0], &g_72[0]}, {&g_72[0], &g_72[0], &g_161, &g_72[0], &g_72[0], &g_161, &g_72[0], &g_72[0]}, {&g_72[0], &g_72[0], &g_161, &g_72[0], &g_72[0], &g_161, &g_72[0], &g_72[0]}}};
            int l_272 = (-1L);
            char *l_275[5] = {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0};
            int i, j, k;
            (*g_83) = (*p_33);
            for (g_96 = (-5); (g_96 > 57); g_96++)
            {
                for (p_31 = 0; (p_31 <= 2); p_31 += 1)
                {
                    int i;
                    if ((((void*)0 == &g_179) || (1L >= (g_72[p_31] < (((*l_255) = (safe_lshift_func_int8_t_s_u(p_31, 4))) >= p_34)))))
                    {
                        (*g_144) = func_56(g_140);
                    }
                    else
                    {
                        (*g_144) = (void*)0;
                        (*g_139) = (-1L);
                        p_33 = (*g_144);
                    }
                }
            }
            for (g_15 = (-6); (g_15 == 18); g_15 = safe_add_func_uint16_t_u_u(g_15, 1))
            {
                unsigned short **l_266 = &l_92;
                int l_268 = 0xF0FC9D27L;
                char *l_269 = (void*)0;
                char *l_271 = &g_72[0];
                l_268 = (((l_265 = &g_106) != l_266) || l_267);
                l_272 = (l_269 != (l_271 = l_270[0][0][4]));
                (*l_99) = (safe_lshift_func_int8_t_s_u(l_256, ((g_118 = &p_34) != l_275[0])));
            }
        }
    }
    else
    {
        unsigned l_278 = 0xC9AB741BL;
        for (g_109 = 0; (g_109 > 36); g_109 = safe_add_func_uint32_t_u_u(g_109, 9))
        {
            unsigned l_279[6];
            int i;
            for (i = 0; i < 6; i++)
                l_279[i] = 0xC468759EL;
            (*g_144) = (void*)0;
            (*g_139) = (l_278 ^ g_72[2]);
            (*p_33) = l_279[4];
        }
        for (l_278 = 13; (l_278 <= 3); l_278 = safe_sub_func_uint16_t_u_u(l_278, 1))
        {
            return (*g_83);
        }
    }
    (*l_99) = (safe_add_func_uint16_t_u_u(((*l_93) = p_31), p_34));
    return l_298;
}







static char func_48(int * p_49, unsigned short p_50, int p_51, int * p_52)
{
    unsigned short *l_105 = (void*)0;
    int l_119 = 0L;
    int *l_152[9][8] = {{(void*)0, (void*)0, &g_120, (void*)0, &g_100, (void*)0, &g_120, (void*)0}, {(void*)0, (void*)0, &g_120, (void*)0, &g_100, (void*)0, &g_120, (void*)0}, {(void*)0, (void*)0, &g_120, (void*)0, &g_100, (void*)0, &g_120, (void*)0}, {(void*)0, (void*)0, &g_120, (void*)0, &g_100, (void*)0, &g_120, (void*)0}, {(void*)0, (void*)0, &g_120, (void*)0, &g_100, (void*)0, &g_120, (void*)0}, {(void*)0, (void*)0, &g_120, (void*)0, &g_100, (void*)0, &g_120, (void*)0}, {(void*)0, (void*)0, &g_120, (void*)0, &g_100, (void*)0, &g_120, (void*)0}, {(void*)0, (void*)0, &g_120, (void*)0, &g_100, (void*)0, &g_120, (void*)0}, {(void*)0, (void*)0, &g_120, (void*)0, &g_100, (void*)0, &g_120, (void*)0}};
    int i, j;
    if ((safe_add_func_uint32_t_u_u(p_50, ((*p_49) = (*g_73)))))
    {
        unsigned short *l_108 = &g_109;
        int l_112 = 0xE0669094L;
        int **l_125 = (void*)0;
        for (g_91 = 0; (g_91 <= 2); g_91 += 1)
        {
            char *l_116 = (void*)0;
            char **l_115 = &l_116;
            for (g_96 = 0; (g_96 <= 2); g_96 += 1)
            {
                for (p_50 = 0; (p_50 <= 2); p_50 += 1)
                {
                    int **l_103 = &g_83;
                    int **l_104 = &g_73;
                    unsigned short **l_107[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_107[i] = &g_106;
                    (**l_104) = (l_103 == l_104);
                    (**l_103) = (g_72[g_96] ^ (((l_105 == (l_108 = g_106)) >= (((safe_sub_func_uint16_t_u_u((l_112 || p_51), ((void*)0 != &p_50))) != (safe_mod_func_int16_t_s_s(g_72[0], (((*p_49) == l_112) && (**l_103))))) & g_15)) || 1L));
                }
            }
            g_117 = l_115;
        }
        (*p_52) = ((*g_83) = ((l_119 | (-3L)) | (g_120 = p_50)));
        for (g_120 = 2; (g_120 >= 0); g_120 -= 1)
        {
            short *l_122 = &g_91;
            short **l_121 = &l_122;
            unsigned char *l_128 = &g_44;
            int **l_129 = &g_29;
            short l_145 = 0L;
            int i;
            (*l_129) = func_56((((((*l_121) = &g_91) != &g_91) & 0xACL) == (safe_lshift_func_uint16_t_u_s((g_72[g_120] != (p_50 > (((&g_73 == l_125) >= ((safe_rshift_func_int8_t_s_u(l_112, ((*l_128) = (p_50 ^ p_50)))) & 7L)) > g_100))), l_119))));
            if ((*p_52))
                break;
            for (p_50 = 0; (p_50 <= 2); p_50 += 1)
            {
                int ***l_134 = &l_125;
                int ***l_142 = &l_129;
                int ****l_141[2][6] = {{&l_142, &l_142, &l_134, &l_142, &l_142, &l_134}, {&l_142, &l_142, &l_134, &l_142, &l_142, &l_134}};
                int i, j;
                (*p_49) = ((safe_lshift_func_int16_t_s_s(g_72[p_50], ((((((*p_52) = (safe_add_func_uint32_t_u_u(g_72[g_120], (*p_52)))) | (*g_29)) & (((*l_134) = (void*)0) == &g_73)) > ((!g_120) | ((safe_rshift_func_uint8_t_u_s(((g_137 == (g_143 = l_134)) >= 0xC47DL), 0)) && l_112))) & g_109))) != l_145);
                if (((*p_49) = (*g_83)))
                {
                    (*g_29) = (safe_add_func_uint32_t_u_u((safe_unary_minus_func_uint8_t_u(((*l_128) = 0x55L))), (*g_83)));
                    (**l_142) = func_53(p_50);
                }
                else
                {
                    for (g_96 = 0; (g_96 <= 2); g_96 += 1)
                    {
                        (*p_49) = (*g_73);
                    }
                    (**l_129) = (g_89 | g_72[1]);
                    (*p_49) = (*g_29);
                    for (g_96 = 0; (g_96 <= 2); g_96 += 1)
                    {
                        (*p_49) = (*g_29);
                        if ((**g_144))
                            break;
                        (*g_83) = (safe_lshift_func_uint8_t_u_u(g_109, 6));
                    }
                }
            }
            (*g_144) = &p_51;
        }
    }
    else
    {
        unsigned l_151 = 4294967295UL;
        short *l_183 = (void*)0;
        int l_197 = (-6L);
        int *l_223 = &g_15;
        char *l_229[4] = {&g_163, &g_72[2], &g_163, &g_72[2]};
        int i;
        for (g_100 = 0; (g_100 <= 3); g_100 += 1)
        {
            int i;
            if (l_151)
                break;
            (**g_143) = (void*)0;
        }
        if (((*p_49) = l_119))
        {
            unsigned short *l_153 = (void*)0;
            unsigned short *l_154 = &g_109;
            char *l_159 = &g_72[0];
            char *l_160 = &g_161;
            char *l_162 = &g_163;
            int l_198 = 0xB04A4827L;
            int *l_199 = &g_120;
            (**g_143) = l_152[5][6];
            (*p_49) = 0L;
            if ((((*l_154) = (l_151 != (0xDCL == p_51))) <= ((l_151 || p_50) || (((*l_162) = ((*l_160) = (p_51 < ((*l_159) = (safe_rshift_func_uint8_t_u_s((8L < ((*p_49) | (~(g_44 != g_96)))), p_51)))))) == p_50))))
            {
                unsigned char l_168[2][2] = {{0xDEL, 0x52L}, {0xDEL, 0x52L}};
                int l_186[7];
                int l_187[2];
                unsigned short **l_204 = &l_153;
                char **l_215 = (void*)0;
                int i, j;
                for (i = 0; i < 7; i++)
                    l_186[i] = 0L;
                for (i = 0; i < 2; i++)
                    l_187[i] = 0x559AEF2FL;
                if ((*p_49))
                {
                    int l_173 = (-1L);
                    for (g_15 = 21; (g_15 > (-6)); g_15 = safe_sub_func_int16_t_s_s(g_15, 8))
                    {
                        short ***l_180 = &g_178;
                        unsigned char *l_184 = &g_44;
                        short *l_185 = &g_91;
                        (*p_52) = (*p_52);
                        l_187[0] = ((safe_sub_func_uint8_t_u_u(((l_168[1][0] = p_51) <= ((safe_rshift_func_int16_t_s_u(((*l_185) = (safe_add_func_uint16_t_u_u((0xF7D0L | l_173), (safe_rshift_func_uint8_t_u_s((safe_sub_func_uint8_t_u_u((((*l_180) = g_178) == &g_179), ((*l_184) = (safe_mod_func_int8_t_s_s(((*l_160) = (l_183 == l_183)), 0x6EL))))), 5))))), l_151)) != p_50)), l_186[0])) | g_100);
                    }
                }
                else
                {
                    short l_194 = 1L;
                    for (g_109 = (-9); (g_109 < 38); g_109 = safe_add_func_int32_t_s_s(g_109, 8))
                    {
                        (*p_49) = (+(((safe_lshift_func_uint8_t_u_u(g_140, (safe_sub_func_uint32_t_u_u(g_91, (*g_73))))) == p_50) < (4294967286UL || (l_194 > ((*p_52) <= (p_50 < ((l_197 = (p_51 = ((safe_sub_func_uint8_t_u_u(p_50, p_50)) | 0x15L))) >= g_163)))))));
                        (*g_144) = (void*)0;
                        if ((*p_52))
                            continue;
                        if (l_198)
                            break;
                    }
                    l_199 = &l_186[0];
                }
                for (g_91 = 0; (g_91 != (-16)); --g_91)
                {
                    unsigned short ***l_205 = &l_204;
                    int ***l_206 = (void*)0;
                    int ****l_207 = (void*)0;
                    int ****l_208 = &g_143;
                    if (((safe_mul_func_uint8_t_u_u((((*l_205) = l_204) != &l_153), (((*l_208) = l_206) != &g_138[2]))) && g_209))
                    {
                        char l_214[7];
                        int i;
                        for (i = 0; i < 7; i++)
                            l_214[i] = (-1L);
                        (*p_49) = (*p_52);
                        (*p_52) = ((safe_sub_func_int32_t_s_s((*p_49), (0xF8E74D01L > ((g_163 > (p_51 ^ (g_109 = (l_186[0] && l_186[0])))) | l_197)))) != ((safe_add_func_uint16_t_u_u(l_214[1], l_186[0])) && p_51));
                    }
                    else
                    {
                        char ***l_216[2];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_216[i] = &l_215;
                        (*g_144) = func_53((g_72[1] < p_50));
                        (*p_49) = ((l_215 = l_215) == g_217);
                    }
                    for (p_50 = 0; (p_50 <= 3); p_50 += 1)
                    {
                        (*g_73) = (*l_199);
                        if (l_168[1][1])
                            continue;
                        if ((*p_52))
                            continue;
                    }
                    (*g_144) = func_53(p_51);
                    if ((*g_29))
                        break;
                }
                for (g_100 = 22; (g_100 < 4); g_100--)
                {
                    unsigned l_222 = 0x325BED0AL;
                    l_197 = ((*g_83) = (p_51 & l_222));
                    for (l_197 = 0; (l_197 <= 1); l_197 += 1)
                    {
                        return l_222;
                    }
                    if ((+0L))
                    {
                        l_223 = &l_186[5];
                    }
                    else
                    {
                        int **l_225 = &l_152[2][6];
                        int **l_226 = &g_83;
                        (*l_226) = (p_49 = ((*l_225) = ((*g_144) = func_53((safe_unary_minus_func_int8_t_s(1L))))));
                    }
                }
                for (g_15 = 25; (g_15 == 17); g_15--)
                {
                    (*l_199) = (0xA2L > (p_50 | ((*g_117) != l_229[1])));
                    (*g_144) = &l_186[0];
                }
            }
            else
            {
                unsigned char *l_232[3][1][2] = {{{&g_44, &g_44}}, {{&g_44, &g_44}}, {{&g_44, &g_44}}};
                int i, j, k;
                (*p_52) = (safe_sub_func_int8_t_s_s((-1L), (g_44 = 0UL)));
                (*l_223) = (*p_52);
            }
        }
        else
        {
            char l_237 = 0x38L;
            (*g_73) = (((safe_rshift_func_uint16_t_u_u(p_50, p_50)) & p_50) > (safe_mod_func_uint16_t_u_u(0x5BA9L, (*l_223))));
            (**g_143) = &p_51;
            (*g_73) = (!(*g_29));
            return l_237;
        }
        (*g_73) = (g_209 < (!((safe_lshift_func_uint16_t_u_s((safe_rshift_func_int16_t_s_u(g_242, ((safe_add_func_uint32_t_u_u((g_245[1][8] = p_50), p_51)) <= (p_51 & (safe_sub_func_uint32_t_u_u(((g_248 > (((l_183 != l_105) > ((safe_sub_func_uint16_t_u_u(((g_163 = ((!((p_50 || g_89) & (*g_83))) <= 0xF1L)) == 1L), 1L)) < p_50)) && g_251)) != p_50), p_51)))))), 14)) >= p_51)));
    }
    return (*g_218);
}







static int * func_53(char p_54)
{
    unsigned short l_62 = 0xAF7CL;
    int *l_63 = &g_15;
    int **l_64 = (void*)0;
    int **l_65[1];
    int *l_66 = &g_15;
    unsigned char *l_67[1];
    unsigned char **l_68 = (void*)0;
    unsigned char *l_69 = (void*)0;
    unsigned char *l_70 = &g_44;
    char *l_71 = &g_72[0];
    int *l_74 = &g_15;
    int i;
    for (i = 0; i < 1; i++)
        l_65[i] = (void*)0;
    for (i = 0; i < 1; i++)
        l_67[i] = &g_44;
    g_83 = func_56((safe_rshift_func_int8_t_s_s((safe_add_func_int32_t_s_s(l_62, (((*l_71) = (((g_29 = (l_66 = l_63)) != &g_15) < ((*l_70) = ((l_67[0] = l_67[0]) != l_69)))) & ((((g_73 = g_73) != l_74) | p_54) | (safe_mod_func_int32_t_s_s((safe_add_func_int32_t_s_s(((g_15 & 8L) != p_54), g_15)), g_15)))))), p_54)));
    return &g_15;
}







static int * func_56(unsigned p_57)
{
    int *l_79 = &g_15;
    int **l_80[8] = {(void*)0, (void*)0, &g_29, (void*)0, (void*)0, &g_29, (void*)0, (void*)0};
    char *l_81 = &g_72[0];
    char *l_82 = (void*)0;
    int i;
    g_73 = l_79;
    (*g_73) = (((l_81 = l_81) == l_82) || p_57);
    return &g_15;
}





int main (void)
{
    int i, j;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_15, "g_15", print_hash_value);
    transparent_crc(g_44, "g_44", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_72[i], "g_72[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_89, "g_89", print_hash_value);
    transparent_crc(g_91, "g_91", print_hash_value);
    transparent_crc(g_96, "g_96", print_hash_value);
    transparent_crc(g_100, "g_100", print_hash_value);
    transparent_crc(g_109, "g_109", print_hash_value);
    transparent_crc(g_120, "g_120", print_hash_value);
    transparent_crc(g_140, "g_140", print_hash_value);
    transparent_crc(g_161, "g_161", print_hash_value);
    transparent_crc(g_163, "g_163", print_hash_value);
    transparent_crc(g_209, "g_209", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_219[i][j], "g_219[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_242, "g_242", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(g_245[i][j], "g_245[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_248, "g_248", print_hash_value);
    transparent_crc(g_251, "g_251", print_hash_value);
    transparent_crc(g_309, "g_309", print_hash_value);
    transparent_crc(g_338, "g_338", print_hash_value);
    transparent_crc(g_363, "g_363", print_hash_value);
    transparent_crc(g_403, "g_403", print_hash_value);
    transparent_crc(g_404, "g_404", print_hash_value);
    transparent_crc(g_417, "g_417", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
