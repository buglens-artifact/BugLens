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
   unsigned short f0;
   int f1;
   int f2;
   unsigned f3;
   unsigned f4;
   int f5;
   unsigned f6;
   int f7;
};


static int *g_2 = (void*)0;
static unsigned g_8 = 4294967291UL;
static struct S0 *g_22 = (void*)0;
static int g_26 = 0xCA6D786FL;
static short g_57[4] = {(-7L),(-7L),(-7L),(-7L)};
static struct S0 g_59 = {65535UL,0x28A3ABE6L,8L,9UL,3UL,0x333AB1ADL,9UL,1L};
static struct S0 g_79 = {0xC266L,0x63E41A7DL,1L,0xE8128C20L,0x361CED51L,0x0589B843L,4294967295UL,0xD0453C8AL};
static int **g_112 = &g_2;
static struct S0 **g_126 = &g_22;
static struct S0 ***g_125 = &g_126;
static int *g_197 = &g_79.f7;
static struct S0 g_255 = {0x069EL,-1L,7L,0x0085E577L,4294967295UL,-1L,4294967295UL,0x86B27C4BL};
static char g_265 = 1L;
static struct S0 g_328 = {65526UL,-1L,1L,0xB22DE3F5L,0x99852C72L,-7L,8UL,0L};
static int g_342 = 3L;
static unsigned char g_352 = 250UL;
static char g_356 = 0x1BL;



static unsigned func_1(void);
static struct S0 * func_4(int p_5, struct S0 * p_6, short p_7);
static struct S0 * func_9(int ** p_10, struct S0 * p_11, int ** p_12, int * p_13, unsigned p_14);
static int ** func_15(short p_16);
static char func_19(struct S0 * p_20, struct S0 * p_21);
static struct S0 * func_23(struct S0 * p_24);
static char func_27(struct S0 p_28, unsigned char p_29, unsigned short p_30, unsigned p_31);
static unsigned func_33(unsigned p_34);
static int func_35(char p_36);
static unsigned func_46(int p_47, unsigned char p_48, unsigned short p_49);
static unsigned func_1(void)
{
    int **l_3[2][8][8] = {{{&g_2,(void*)0,&g_2,&g_2,&g_2,&g_2,(void*)0,&g_2},{&g_2,&g_2,&g_2,&g_2,&g_2,&g_2,&g_2,&g_2},{&g_2,&g_2,&g_2,(void*)0,(void*)0,&g_2,&g_2,&g_2},{&g_2,&g_2,&g_2,&g_2,&g_2,&g_2,(void*)0,&g_2},{&g_2,&g_2,(void*)0,&g_2,&g_2,&g_2,&g_2,(void*)0},{(void*)0,&g_2,(void*)0,&g_2,(void*)0,&g_2,(void*)0,(void*)0},{&g_2,&g_2,(void*)0,&g_2,&g_2,&g_2,(void*)0,(void*)0},{&g_2,(void*)0,&g_2,&g_2,&g_2,&g_2,&g_2,&g_2}},{{&g_2,(void*)0,&g_2,(void*)0,(void*)0,&g_2,(void*)0,&g_2},{(void*)0,(void*)0,&g_2,&g_2,(void*)0,&g_2,(void*)0,&g_2},{&g_2,&g_2,&g_2,&g_2,&g_2,(void*)0,&g_2,(void*)0},{&g_2,&g_2,&g_2,&g_2,&g_2,&g_2,&g_2,&g_2},{&g_2,(void*)0,&g_2,&g_2,(void*)0,&g_2,&g_2,&g_2},{&g_2,&g_2,&g_2,(void*)0,(void*)0,&g_2,(void*)0,&g_2},{(void*)0,(void*)0,&g_2,(void*)0,&g_2,&g_2,&g_2,&g_2},{&g_2,&g_2,&g_2,&g_2,&g_2,&g_2,&g_2,&g_2}}};
    unsigned short l_351 = 0x0BE7L;
    char l_353 = (-1L);
    struct S0 *l_355 = &g_328;
    struct S0 **l_521 = (void*)0;
    struct S0 **l_522 = (void*)0;
    int i, j, k;
    g_2 = g_2;
    l_355 = func_4(((l_3[1][7][4] == l_3[1][2][1]) < g_8), func_9(func_15((safe_mod_func_uint16_t_u_u((((func_19(g_22, func_23(g_22)) || func_46((safe_div_func_uint32_t_u_u(((safe_sub_func_int8_t_s_s(l_351, g_79.f6)) == g_328.f2), (*g_197))), g_352, g_79.f1)) | g_328.f5) > 0x815DL), l_353))), l_355, &g_197, g_197, g_328.f1), g_352);
    return g_26;
}







static struct S0 * func_4(int p_5, struct S0 * p_6, short p_7)
{
    int *l_412 = &g_255.f7;
    struct S0 *l_413 = &g_59;
    short l_443 = 1L;
    char l_488[3];
    int i;
    for (i = 0; i < 3; i++)
        l_488[i] = 0x87L;
lbl_519:
    (*g_112) = l_412;
    if (p_5)
    {
        return l_413;
    }
    else
    {
        unsigned char l_414 = 1UL;
        int *l_427 = &g_328.f7;
        struct S0 *l_445 = &g_255;
        int l_502[4][6] = {{0x48946935L,(-8L),(-8L),0x48946935L,0x48946935L,(-8L)},{0x48946935L,0x48946935L,(-8L),(-8L),0x48946935L,0x48946935L},{0x48946935L,(-8L),(-8L),0x48946935L,0x48946935L,(-8L)},{0x48946935L,0x48946935L,(-8L),(-8L),0x48946935L,0x48946935L}};
        int ***l_511[1][3];
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 3; j++)
                l_511[i][j] = &g_112;
        }
        for (g_59.f2 = 3; (g_59.f2 >= 0); g_59.f2 -= 1)
        {
            int l_422 = 0x58466E0DL;
            int i;
            if (g_57[g_59.f2])
            {
                if (l_414)
                    break;
                (*g_2) = (safe_lshift_func_int16_t_s_u(p_7, 6));
                for (g_79.f1 = (-26); (g_79.f1 == 5); g_79.f1 = safe_add_func_int8_t_s_s(g_79.f1, 9))
                {
                    unsigned l_419 = 0xFA1E50EEL;
                    if (((void*)0 != (*g_125)))
                    {
                        (**g_125) = p_6;
                        (*l_412) = func_46((((l_414 && (((l_419 | (l_419 || (safe_div_func_uint16_t_u_u(g_255.f5, l_422)))) && l_414) == 0x5424L)) & (g_328.f1 | (p_7 <= l_414))) >= 0x96L), l_414, g_59.f7);
                    }
                    else
                    {
                        (*l_412) = (safe_rshift_func_int16_t_s_s((-1L), g_59.f1));
                        (*l_412) = (safe_mod_func_uint8_t_u_u(0UL, g_328.f1));
                        (*g_112) = (*g_112);
                    }
                    l_427 = (*g_112);
                }
            }
            else
            {
                int *l_428 = &g_328.f7;
                l_427 = l_428;
                for (g_79.f4 = 0; (g_79.f4 <= 3); g_79.f4 += 1)
                {
                    int l_441[1];
                    int l_442 = 0x9C491C5CL;
                    struct S0 *l_446[8][8][4] = {{{&g_79,&g_79,&g_79,(void*)0},{(void*)0,(void*)0,&g_59,&g_255},{&g_79,&g_59,&g_79,&g_79},{&g_255,&g_59,&g_79,&g_79},{&g_79,&g_328,&g_328,&g_79},{&g_255,&g_59,&g_255,&g_255},{&g_59,(void*)0,&g_255,&g_328},{&g_328,(void*)0,&g_59,&g_328}},{{&g_59,(void*)0,&g_59,&g_255},{&g_328,&g_59,(void*)0,&g_79},{(void*)0,&g_328,&g_79,&g_79},{&g_328,&g_59,&g_79,&g_79},{(void*)0,&g_59,&g_59,&g_255},{&g_79,(void*)0,&g_79,(void*)0},{(void*)0,&g_79,&g_255,&g_59},{(void*)0,&g_59,&g_59,&g_59}},{{&g_59,&g_79,(void*)0,&g_79},{&g_255,&g_79,&g_328,&g_255},{&g_79,&g_59,&g_255,&g_79},{&g_59,&g_255,&g_59,&g_79},{&g_255,&g_59,&g_255,(void*)0},{&g_328,&g_79,&g_79,&g_59},{(void*)0,&g_255,&g_79,&g_328},{&g_328,(void*)0,&g_255,(void*)0}},{{&g_79,&g_79,&g_79,(void*)0},{&g_79,(void*)0,(void*)0,&g_59},{&g_79,&g_255,&g_59,&g_328},{(void*)0,(void*)0,&g_79,&g_79},{(void*)0,&g_79,&g_59,(void*)0},{&g_328,&g_59,(void*)0,&g_79},{&g_255,&g_79,&g_79,&g_79},{&g_79,&g_255,(void*)0,&g_79}},{{&g_79,&g_255,&g_59,&g_79},{&g_79,&g_59,&g_59,&g_59},{&g_255,&g_255,&g_79,&g_255},{(void*)0,&g_79,&g_59,&g_79},{&g_255,(void*)0,(void*)0,&g_59},{&g_79,(void*)0,&g_59,&g_79},{(void*)0,&g_79,&g_79,&g_255},{&g_255,&g_255,&g_79,&g_59}},{{&g_255,&g_59,&g_255,&g_79},{&g_59,&g_255,&g_255,&g_79},{&g_255,&g_255,&g_328,&g_79},{(void*)0,&g_79,(void*)0,&g_79},{&g_255,(void*)0,&g_59,&g_79},{(void*)0,&g_255,&g_79,(void*)0},{&g_79,&g_79,&g_79,&g_59},{(void*)0,&g_255,&g_59,(void*)0}},{{&g_79,(void*)0,&g_79,(void*)0},{&g_328,&g_79,&g_79,&g_59},{(void*)0,(void*)0,&g_59,&g_79},{&g_59,&g_59,&g_255,&g_79},{&g_59,&g_79,&g_59,&g_59},{(void*)0,&g_79,&g_79,&g_255},{&g_328,&g_79,&g_79,&g_59},{&g_79,(void*)0,&g_59,&g_59}},{{(void*)0,&g_79,&g_79,&g_255},{&g_79,&g_79,&g_79,&g_255},{(void*)0,&g_328,&g_59,&g_79},{&g_255,&g_255,&g_328,&g_59},{&g_59,&g_79,&g_328,&g_59},{&g_79,(void*)0,&g_255,&g_328},{&g_79,&g_328,&g_59,(void*)0},{&g_255,&g_59,&g_59,&g_255}}};
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                        l_441[i] = 0x7491E24DL;
                    (**g_112) = ((9L < func_46((g_57[g_59.f2] | (safe_lshift_func_int16_t_s_u(((func_46((~((g_57[g_59.f2] < (safe_div_func_uint16_t_u_u(((0xFBDC2D0AL ^ ((p_7 || (safe_sub_func_uint8_t_u_u((*l_427), g_79.f7))) < (safe_add_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u((g_57[g_59.f2] | (safe_lshift_func_uint8_t_u_s(p_7, l_441[0]))), p_7)), l_442)))) <= g_57[3]), 2UL))) != p_7)), g_79.f7, (*l_412)) >= l_443) < l_441[0]), g_328.f3))), g_57[g_59.f2], p_5)) & g_59.f6);
                    for (g_79.f0 = 0; (g_79.f0 <= 3); g_79.f0 += 1)
                    {
                        (*g_2) = (**g_112);
                        (*l_427) = p_7;
                        (*g_126) = (void*)0;
                    }
                    if (((*g_112) == (*g_112)))
                    {
                        int *l_444 = &g_255.f7;
                        (**g_112) = (0x23L & (*l_427));
                        l_412 = l_444;
                    }
                    else
                    {
                        (*g_112) = (*g_112);
                        (**g_125) = l_445;
                        (*l_428) = g_57[g_59.f2];
                        if ((*g_2))
                            break;
                    }
                    (*l_427) = ((*l_427) >= (((safe_div_func_int16_t_s_s((0xACL | (safe_lshift_func_int16_t_s_s(((safe_mod_func_int8_t_s_s((-1L), (safe_add_func_int32_t_s_s(((safe_lshift_func_int16_t_s_u(g_356, (p_7 >= p_7))) || g_79.f3), 4294967295UL)))) | g_59.f4), g_57[g_59.f2]))), 65535UL)) != g_255.f2) == l_422));
                }
                for (g_79.f4 = 0; (g_79.f4 <= 3); g_79.f4 += 1)
                {
                    struct S0 l_457 = {0x8F5CL,0xF9A69C08L,0x741DBB1BL,5UL,0xA587A582L,0xA4E5AF34L,4294967288UL,0x87DAB6FAL};
                    int i;
                    (*l_428) = g_57[g_59.f2];
                    for (l_422 = 3; (l_422 >= 0); l_422 -= 1)
                    {
                        (*l_445) = l_457;
                    }
                    (*l_428) = (safe_rshift_func_int16_t_s_u(((0xBDL && (*l_428)) & (safe_rshift_func_int8_t_s_s((safe_lshift_func_int8_t_s_u((-3L), 3)), (p_5 ^ (p_7 & ((safe_div_func_uint8_t_u_u(0x4EL, 0x1EL)) < g_59.f3)))))), 6));
                    for (g_328.f4 = 0; (g_328.f4 <= 3); g_328.f4 += 1)
                    {
                        int *l_466 = (void*)0;
                        int i;
                        (*g_112) = l_466;
                        (*l_412) = (safe_div_func_int8_t_s_s((((g_57[g_79.f4] >= g_255.f1) != ((**g_125) != (**g_125))) >= p_5), 0xF5L));
                        (*l_427) = (&g_126 != &g_126);
                    }
                }
                return p_6;
            }
            l_422 = l_422;
            for (g_79.f4 = 0; (g_79.f4 <= 3); g_79.f4 += 1)
            {
                int i;
                (*l_427) = (safe_lshift_func_int16_t_s_s((0L >= (safe_mod_func_int16_t_s_s(func_46(g_57[g_79.f4], l_422, (safe_div_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s(((*l_412) & func_46(((p_6 == (**g_125)) >= (safe_rshift_func_int16_t_s_s(l_422, 4))), (safe_add_func_uint16_t_u_u(g_255.f6, p_7)), g_59.f4)), (*l_427))), 3UL))), (*l_412)))), 8));
                if (p_7)
                    break;
                if (g_57[g_79.f4])
                    break;
                (**g_112) = g_57[g_79.f4];
            }
            if (p_7)
                continue;
        }
        for (g_79.f0 = 0; (g_79.f0 <= 3); g_79.f0 += 1)
        {
            int ***l_481 = &g_112;
            struct S0 *l_486 = (void*)0;
            struct S0 *l_487 = &g_255;
            int i;
            (*g_2) = ((void*)0 != l_481);
            for (g_59.f4 = 0; (g_59.f4 <= 3); g_59.f4 += 1)
            {
                int i;
                l_488[0] = ((0xD751693CL || (0x9146D413L ^ ((safe_add_func_uint32_t_u_u((safe_div_func_uint16_t_u_u(g_57[g_59.f4], g_57[g_59.f4])), g_57[g_79.f0])) | (*l_412)))) | p_7);
                (*l_445) = (*l_445);
            }
            if (g_57[g_79.f0])
                break;
        }
        if ((func_46((safe_mod_func_uint16_t_u_u((p_7 >= (&g_126 != &g_126)), p_7)), (*l_412), ((safe_lshift_func_uint16_t_u_s(g_255.f2, 0)) != (*l_427))) != (((**g_112) || (*l_427)) ^ p_5)))
        {
            (*l_413) = (*l_413);
            (*l_412) = (p_7 == p_7);
            (*g_112) = (*g_112);
            return (*g_126);
        }
        else
        {
            struct S0 l_493 = {0x84C4L,0xB52E1FA4L,0x0035A4B7L,0UL,4294967295UL,0x17378FAEL,0x7A61D2C1L,-6L};
            (*l_445) = l_493;
            (*l_413) = (*l_413);
            for (g_59.f0 = 0; (g_59.f0 <= 3); g_59.f0 += 1)
            {
                return l_413;
            }
        }
        if (func_35((*l_427)))
        {
            int *l_517 = &g_255.f7;
            for (g_79.f1 = 0; (g_79.f1 != 12); ++g_79.f1)
            {
                (*l_412) = (g_255.f1 > g_57[1]);
            }
            if ((*l_412))
            {
                for (p_7 = 0; (p_7 <= 2); p_7 += 1)
                {
                    return p_6;
                }
            }
            else
            {
                unsigned short l_498[3];
                int *l_518 = &g_328.f7;
                int i;
                for (i = 0; i < 3; i++)
                    l_498[i] = 4UL;
                (*g_126) = (*g_126);
                if (g_59.f5)
                {
                    for (g_255.f4 = 0; (g_255.f4 < 49); g_255.f4 = safe_add_func_uint8_t_u_u(g_255.f4, 7))
                    {
                        l_498[0] = p_5;
                    }
                }
                else
                {
                    unsigned char l_501 = 0x4BL;
                    (*l_427) = 0x9B18EC9DL;
                    if (func_46((*l_412), ((-1L) ^ (safe_sub_func_uint8_t_u_u(func_35(l_501), (7UL | (p_5 > p_5))))), l_502[3][0]))
                    {
                        int l_506 = (-1L);
                        (*l_412) = (safe_sub_func_uint16_t_u_u(((safe_unary_minus_func_uint16_t_u((4294967291UL < (func_46(l_506, p_7, l_498[0]) <= (((safe_lshift_func_int8_t_s_u(g_79.f6, 6)) == (l_511[0][1] != &g_112)) != (safe_lshift_func_uint8_t_u_u((4294967289UL <= g_328.f6), 1))))))) >= l_498[1]), p_7));
                    }
                    else
                    {
lbl_516:
                        (*l_412) = (safe_add_func_int8_t_s_s((0xBCL || g_328.f6), func_33(g_255.f5)));
                        (*g_112) = &g_26;
                        if (g_328.f7)
                            goto lbl_516;
                    }
                    (*l_412) = p_5;
                    if ((((*g_112) == (void*)0) | g_255.f5))
                    {
                        return (*g_126);
                    }
                    else
                    {
                        (*g_112) = l_517;
                        (*g_112) = l_518;
                        (*g_112) = (*g_112);
                    }
                }
            }
        }
        else
        {
            struct S0 l_520 = {0x631EL,0x09BDF26CL,0L,0UL,4294967290UL,0x8A5B82F4L,0xB28B59BEL,0x13818B19L};
            if (g_79.f0)
                goto lbl_519;
            (*l_445) = l_520;
            (**g_125) = l_413;
            (*l_427) = g_59.f3;
        }
    }
    return (**g_125);
}







static struct S0 * func_9(int ** p_10, struct S0 * p_11, int ** p_12, int * p_13, unsigned p_14)
{
    struct S0 *l_357[1][6][4] = {{{&g_255,&g_328,&g_328,&g_255},{(void*)0,&g_328,(void*)0,&g_328},{&g_328,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&g_328,&g_255},{&g_328,(void*)0,&g_328,(void*)0},{&g_328,(void*)0,(void*)0,&g_328}}};
    struct S0 **l_358 = &l_357[0][1][2];
    int *l_359 = &g_255.f1;
    unsigned l_408 = 2UL;
    int i, j, k;
lbl_375:
    (*g_197) = g_356;
lbl_411:
    if (g_356)
        goto lbl_360;
    (*l_358) = func_23(func_23(func_23(func_23(l_357[0][5][3]))));
lbl_360:
    l_359 = l_359;
    for (g_79.f5 = 3; (g_79.f5 >= 0); g_79.f5 -= 1)
    {
        struct S0 *l_374[10];
        int *l_383 = &g_79.f7;
        int ***l_386 = (void*)0;
        struct S0 *l_405 = (void*)0;
        int i;
        for (i = 0; i < 10; i++)
            l_374[i] = (void*)0;
        (*g_197) = 0xB04AB8BCL;
        (*g_112) = (*p_12);
        if (g_57[g_79.f5])
        {
            for (g_59.f0 = 0; (g_59.f0 > 41); g_59.f0 = safe_add_func_int8_t_s_s(g_59.f0, 9))
            {
                for (g_328.f4 = 0; g_328.f4 < 4; g_328.f4 += 1)
                {
                    g_57[g_328.f4] = 0x3EC5L;
                }
                for (g_328.f6 = 0; g_328.f6 < 4; g_328.f6 += 1)
                {
                    g_57[g_328.f6] = 0xCCA9L;
                }
            }
            (*p_11) = (*p_11);
            for (g_328.f5 = (-23); (g_328.f5 <= (-18)); ++g_328.f5)
            {
                unsigned short l_373[2][5][7] = {{{0UL,65531UL,65535UL,1UL,0x5EA3L,4UL,0x5EA3L},{0xAA1FL,4UL,4UL,0xAA1FL,65528UL,7UL,0xC935L},{0UL,0x5EA3L,0UL,4UL,0UL,65534UL,0xD898L},{0xC935L,0x7AEBL,7UL,65535UL,7UL,0x7AEBL,0xC935L},{0x19B0L,0xBA67L,65531UL,0xD898L,0UL,0x769DL,0x5EA3L}},{{0xCF74L,65535UL,0xBF29L,7UL,0x0058L,0x0058L,7UL},{65531UL,65535UL,65531UL,0x6338L,65534UL,0x6522L,0x769DL},{0x7AEBL,9UL,7UL,65535UL,4UL,65533UL,0xCF74L},{0x6522L,0x19B0L,0UL,0UL,0x19B0L,0x6522L,0x4B75L},{0xB4CBL,7UL,4UL,0x61B2L,0xBF29L,0x0058L,65528UL}}};
                int i, j, k;
                (*p_10) = (*p_12);
                if (func_46(((safe_div_func_int32_t_s_s((*g_197), (((safe_div_func_int16_t_s_s(func_35((p_14 == g_26)), (((safe_lshift_func_int8_t_s_s(p_14, (safe_mod_func_int8_t_s_s(func_46((*p_13), (*l_359), p_14), p_14)))) <= 0xF6CB8D0EL) && p_14))) != p_14) & (-1L)))) > l_373[0][1][0]), g_328.f6, g_59.f6))
                {
                    (*p_10) = (*p_10);
                    return l_374[3];
                }
                else
                {
                    return p_11;
                }
            }
            if ((*g_197))
                continue;
        }
        else
        {
            unsigned l_378 = 4294967295UL;
            int ***l_379[4];
            struct S0 l_385 = {0xA84DL,-10L,0x29B7A29EL,0x58740386L,3UL,0x71B0955DL,5UL,2L};
            int i;
            for (i = 0; i < 4; i++)
                l_379[i] = &g_112;
            for (g_328.f6 = 0; (g_328.f6 <= 3); g_328.f6 += 1)
            {
                unsigned char l_380 = 250UL;
                if (g_79.f2)
                    goto lbl_375;
            }
            for (g_59.f7 = 0; (g_59.f7 == (-21)); --g_59.f7)
            {
                struct S0 **l_401 = (void*)0;
                (*p_12) = (*p_12);
                for (g_255.f0 = 0; (g_255.f0 <= 3); g_255.f0 += 1)
                {
                    if (((void*)0 != p_11))
                    {
                        unsigned l_384[8][3] = {{0xC9B5946CL,0x1DBDBB79L,0x1DBDBB79L},{0xC9B5946CL,0x1DBDBB79L,0x1DBDBB79L},{0xC9B5946CL,0x1DBDBB79L,0x1DBDBB79L},{0xC9B5946CL,0x1DBDBB79L,0x1DBDBB79L},{0xC9B5946CL,0x1DBDBB79L,0x1DBDBB79L},{0xC9B5946CL,0x1DBDBB79L,0x1DBDBB79L},{0xC9B5946CL,0x1DBDBB79L,0x1DBDBB79L},{0xC9B5946CL,0x1DBDBB79L,0x1DBDBB79L}};
                        int i, j;
                        if (g_59.f0)
                            goto lbl_375;
                        (*p_10) = l_383;
                        l_384[5][1] = ((*p_12) == (void*)0);
                        (*g_112) = l_359;
                    }
                    else
                    {
                        g_328 = l_385;
                        return p_11;
                    }
                    if (g_255.f2)
                        goto lbl_360;
                    for (g_356 = 0; (g_356 >= 0); g_356 -= 1)
                    {
                        (*p_13) = ((void*)0 == l_386);
                        (**p_12) = 0xFA52EACEL;
                    }
                }
                (**p_12) = (safe_div_func_uint32_t_u_u(g_79.f6, g_26));
                for (g_79.f4 = 0; (g_79.f4 <= 3); g_79.f4 += 1)
                {
                    unsigned l_404 = 4294967295UL;
                    int i;
                }
            }
            (**g_112) = ((*g_2) > ((*l_359) <= (((0x3DB7E87AL & 0L) < ((safe_sub_func_int8_t_s_s(0L, (&p_11 != &l_374[7]))) >= l_408)) & ((!(safe_lshift_func_uint16_t_u_u(p_14, 2))) == (*l_383)))));
        }
        if (g_59.f5)
            goto lbl_411;
    }
    return (**g_125);
}







static int ** func_15(short p_16)
{
    int **l_354[5];
    int i;
    for (i = 0; i < 5; i++)
        l_354[i] = &g_197;
    for (g_79.f3 = 0; (g_79.f3 <= 3); g_79.f3 += 1)
    {
        return &g_2;
    }
    return l_354[3];
}







static char func_19(struct S0 * p_20, struct S0 * p_21)
{
    unsigned short l_343[3];
    struct S0 l_344[10][4][4] = {{{{65535UL,-1L,0x75E1FDB3L,1UL,0UL,6L,4294967295UL,0L},{0x07D3L,-1L,0xE2ADE48FL,9UL,0x3BC8FD94L,0x0654CEB2L,0x3E38FBC6L,0xC0E06E17L},{6UL,0xE4944E85L,-8L,0x23A8BB8FL,0xD7B71868L,0x3A714632L,0xEF10296DL,-3L},{0xB7C5L,0x531CE290L,0xC3FD4654L,0xA4E7FD7CL,4294967289UL,-7L,0UL,-8L}},{{0xF8CFL,-5L,-5L,0xFBB4A379L,0x38BAE10AL,0x93D1BC77L,1UL,0x2D71AA8BL},{0x53A0L,0x6BC2BE7EL,-3L,0x9689BADAL,0x33378390L,0x8FD3F875L,4294967289UL,7L},{65535UL,0L,0xE041AB93L,4294967288UL,4294967292UL,0L,0UL,-9L},{0x07D3L,-1L,0xE2ADE48FL,9UL,0x3BC8FD94L,0x0654CEB2L,0x3E38FBC6L,0xC0E06E17L}},{{0x95F3L,1L,0L,0UL,0xEC50A47CL,0x71FB4261L,0x0E70246FL,1L},{0xE5CFL,9L,0x6D354225L,4294967290UL,1UL,0x1E08880FL,4294967295UL,1L},{65535UL,0L,0xE041AB93L,4294967288UL,4294967292UL,0L,0UL,-9L},{1UL,-1L,-10L,0x0ED1F489L,4294967287UL,0L,0x4836B82DL,0x3AC75DE7L}},{{0xF8CFL,-5L,-5L,0xFBB4A379L,0x38BAE10AL,0x93D1BC77L,1UL,0x2D71AA8BL},{0x880BL,-10L,0x31E79A15L,0x6806F2AAL,0xE44BFC9AL,0L,4294967291UL,0x892FD614L},{6UL,0xE4944E85L,-8L,0x23A8BB8FL,0xD7B71868L,0x3A714632L,0xEF10296DL,-3L},{6UL,0xE4944E85L,-8L,0x23A8BB8FL,0xD7B71868L,0x3A714632L,0xEF10296DL,-3L}}},{{{65535UL,-1L,0x75E1FDB3L,1UL,0UL,6L,4294967295UL,0L},{65535UL,-1L,0x75E1FDB3L,1UL,0UL,6L,4294967295UL,0L},{0x53A0L,0x6BC2BE7EL,-3L,0x9689BADAL,0x33378390L,0x8FD3F875L,4294967289UL,7L},{0x95F3L,1L,0L,0UL,0xEC50A47CL,0x71FB4261L,0x0E70246FL,1L}},{{0x53A0L,0x6BC2BE7EL,-3L,0x9689BADAL,0x33378390L,0x8FD3F875L,4294967289UL,7L},{0x95F3L,1L,0L,0UL,0xEC50A47CL,0x71FB4261L,0x0E70246FL,1L},{0x2417L,5L,0x12030E46L,0x48929C28L,0xE27B8753L,0xBB3791D0L,0x51EF8290L,-1L},{0x5D6FL,1L,1L,0x6CF75A4EL,0xE9D23C24L,0L,0x217F7E6BL,-1L}},{{0x5D6FL,1L,1L,0x6CF75A4EL,0xE9D23C24L,0L,0x217F7E6BL,-1L},{65529UL,0L,0x10110AAAL,0x90BDA31DL,0x79AB40D9L,0x61DB1226L,5UL,0x2D5DE012L},{65535UL,-1L,0x75E1FDB3L,1UL,0UL,6L,4294967295UL,0L},{0x2417L,5L,0x12030E46L,0x48929C28L,0xE27B8753L,0xBB3791D0L,0x51EF8290L,-1L}},{{1UL,0x7EBE50A8L,5L,0x52DE786BL,0xD744F6EBL,-7L,6UL,0x1C3FE82BL},{65529UL,0L,0x10110AAAL,0x90BDA31DL,0x79AB40D9L,0x61DB1226L,5UL,0x2D5DE012L},{0xF0DFL,1L,0x6FA5281EL,0x1C687ED9L,0x9E15608AL,0L,4294967292UL,0L},{0x5D6FL,1L,1L,0x6CF75A4EL,0xE9D23C24L,0L,0x217F7E6BL,-1L}}},{{{65529UL,0L,0x10110AAAL,0x90BDA31DL,0x79AB40D9L,0x61DB1226L,5UL,0x2D5DE012L},{0x95F3L,1L,0L,0UL,0xEC50A47CL,0x71FB4261L,0x0E70246FL,1L},{0x6BD1L,0L,-1L,0x18FE6200L,4294967292UL,0x12D2855EL,3UL,1L},{0x95F3L,1L,0L,0UL,0xEC50A47CL,0x71FB4261L,0x0E70246FL,1L}},{{0x3702L,4L,1L,4294967291UL,4294967294UL,0x45F8C1AAL,7UL,0x5991800EL},{65535UL,-1L,0x75E1FDB3L,1UL,0UL,6L,4294967295UL,0L},{0x07D3L,-1L,0xE2ADE48FL,9UL,0x3BC8FD94L,0x0654CEB2L,0x3E38FBC6L,0xC0E06E17L},{6UL,0xE4944E85L,-8L,0x23A8BB8FL,0xD7B71868L,0x3A714632L,0xEF10296DL,-3L}},{{0x6BD1L,0L,-1L,0x18FE6200L,4294967292UL,0x12D2855EL,3UL,1L},{0x880BL,-10L,0x31E79A15L,0x6806F2AAL,0xE44BFC9AL,0L,4294967291UL,0x892FD614L},{0xE5CFL,9L,0x6D354225L,4294967290UL,1UL,0x1E08880FL,4294967295UL,1L},{1UL,-1L,-10L,0x0ED1F489L,4294967287UL,0L,0x4836B82DL,0x3AC75DE7L}},{{6UL,0xE4944E85L,-8L,0x23A8BB8FL,0xD7B71868L,0x3A714632L,0xEF10296DL,-3L},{0xE5CFL,9L,0x6D354225L,4294967290UL,1UL,0x1E08880FL,4294967295UL,1L},{65529UL,0L,0x10110AAAL,0x90BDA31DL,0x79AB40D9L,0x61DB1226L,5UL,0x2D5DE012L},{0x07D3L,-1L,0xE2ADE48FL,9UL,0x3BC8FD94L,0x0654CEB2L,0x3E38FBC6L,0xC0E06E17L}}},{{{6UL,0xE4944E85L,-8L,0x23A8BB8FL,0xD7B71868L,0x3A714632L,0xEF10296DL,-3L},{0x53A0L,0x6BC2BE7EL,-3L,0x9689BADAL,0x33378390L,0x8FD3F875L,4294967289UL,7L},{0xE5CFL,9L,0x6D354225L,4294967290UL,1UL,0x1E08880FL,4294967295UL,1L},{0xB7C5L,0x531CE290L,0xC3FD4654L,0xA4E7FD7CL,4294967289UL,-7L,0UL,-8L}},{{0x6BD1L,0L,-1L,0x18FE6200L,4294967292UL,0x12D2855EL,3UL,1L},{0x07D3L,-1L,0xE2ADE48FL,9UL,0x3BC8FD94L,0x0654CEB2L,0x3E38FBC6L,0xC0E06E17L},{0x07D3L,-1L,0xE2ADE48FL,9UL,0x3BC8FD94L,0x0654CEB2L,0x3E38FBC6L,0xC0E06E17L},{0x6BD1L,0L,-1L,0x18FE6200L,4294967292UL,0x12D2855EL,3UL,1L}},{{0x3702L,4L,1L,4294967291UL,4294967294UL,0x45F8C1AAL,7UL,0x5991800EL},{0x5D6FL,1L,1L,0x6CF75A4EL,0xE9D23C24L,0L,0x217F7E6BL,-1L},{0x6BD1L,0L,-1L,0x18FE6200L,4294967292UL,0x12D2855EL,3UL,1L},{65535UL,0L,0xE041AB93L,4294967288UL,4294967292UL,0L,0UL,-9L}},{{65529UL,0L,0x10110AAAL,0x90BDA31DL,0x79AB40D9L,0x61DB1226L,5UL,0x2D5DE012L},{0xB7C5L,0x531CE290L,0xC3FD4654L,0xA4E7FD7CL,4294967289UL,-7L,0UL,-8L},{0xF0DFL,1L,0x6FA5281EL,0x1C687ED9L,0x9E15608AL,0L,4294967292UL,0L},{0xF8CFL,-5L,-5L,0xFBB4A379L,0x38BAE10AL,0x93D1BC77L,1UL,0x2D71AA8BL}}},{{{1UL,0x7EBE50A8L,5L,0x52DE786BL,0xD744F6EBL,-7L,6UL,0x1C3FE82BL},{1UL,-1L,-10L,0x0ED1F489L,4294967287UL,0L,0x4836B82DL,0x3AC75DE7L},{65535UL,-1L,0x75E1FDB3L,1UL,0UL,6L,4294967295UL,0L},{0xF8CFL,-5L,-5L,0xFBB4A379L,0x38BAE10AL,0x93D1BC77L,1UL,0x2D71AA8BL}},{{0x5D6FL,1L,1L,0x6CF75A4EL,0xE9D23C24L,0L,0x217F7E6BL,-1L},{0xB7C5L,0x531CE290L,0xC3FD4654L,0xA4E7FD7CL,4294967289UL,-7L,0UL,-8L},{0x2417L,5L,0x12030E46L,0x48929C28L,0xE27B8753L,0xBB3791D0L,0x51EF8290L,-1L},{65535UL,0L,0xE041AB93L,4294967288UL,4294967292UL,0L,0UL,-9L}},{{0x53A0L,0x6BC2BE7EL,-3L,0x9689BADAL,0x33378390L,0x8FD3F875L,4294967289UL,7L},{0x5D6FL,1L,1L,0x6CF75A4EL,0xE9D23C24L,0L,0x217F7E6BL,-1L},{0x53A0L,0x6BC2BE7EL,-3L,0x9689BADAL,0x33378390L,0x8FD3F875L,4294967289UL,7L},{0x6BD1L,0L,-1L,0x18FE6200L,4294967292UL,0x12D2855EL,3UL,1L}},{{65535UL,-1L,0x75E1FDB3L,1UL,0UL,6L,4294967295UL,0L},{0x07D3L,-1L,0xE2ADE48FL,9UL,0x3BC8FD94L,0x0654CEB2L,0x3E38FBC6L,0xC0E06E17L},{6UL,0xE4944E85L,-8L,0x23A8BB8FL,0xD7B71868L,0x3A714632L,0xEF10296DL,-3L},{0xB7C5L,0x531CE290L,0xC3FD4654L,0xA4E7FD7CL,4294967289UL,-7L,0UL,-8L}}},{{{0xF8CFL,-5L,-5L,0xFBB4A379L,0x38BAE10AL,0x93D1BC77L,1UL,0x2D71AA8BL},{0x53A0L,0x6BC2BE7EL,-3L,0x9689BADAL,0x33378390L,0x8FD3F875L,4294967289UL,7L},{65535UL,0L,0xE041AB93L,4294967288UL,4294967292UL,0L,0UL,-9L},{0x07D3L,-1L,0xE2ADE48FL,9UL,0x3BC8FD94L,0x0654CEB2L,0x3E38FBC6L,0xC0E06E17L}},{{0x95F3L,1L,0L,0UL,0xEC50A47CL,0x71FB4261L,0x0E70246FL,1L},{0xE5CFL,9L,0x6D354225L,4294967290UL,1UL,0x1E08880FL,4294967295UL,1L},{65535UL,0L,0xE041AB93L,4294967288UL,4294967292UL,0L,0UL,-9L},{1UL,-1L,-10L,0x0ED1F489L,4294967287UL,0L,0x4836B82DL,0x3AC75DE7L}},{{0x3702L,4L,1L,4294967291UL,4294967294UL,0x45F8C1AAL,7UL,0x5991800EL},{0xF8CFL,-5L,-5L,0xFBB4A379L,0x38BAE10AL,0x93D1BC77L,1UL,0x2D71AA8BL},{0x2417L,5L,0x12030E46L,0x48929C28L,0xE27B8753L,0xBB3791D0L,0x51EF8290L,-1L},{0x2417L,5L,0x12030E46L,0x48929C28L,0xE27B8753L,0xBB3791D0L,0x51EF8290L,-1L}},{{0xF0DFL,1L,0x6FA5281EL,0x1C687ED9L,0x9E15608AL,0L,4294967292UL,0L},{0xF0DFL,1L,0x6FA5281EL,0x1C687ED9L,0x9E15608AL,0L,4294967292UL,0L},{0x95F3L,1L,0L,0UL,0xEC50A47CL,0x71FB4261L,0x0E70246FL,1L},{0x880BL,-10L,0x31E79A15L,0x6806F2AAL,0xE44BFC9AL,0L,4294967291UL,0x892FD614L}}},{{{0x95F3L,1L,0L,0UL,0xEC50A47CL,0x71FB4261L,0x0E70246FL,1L},{0x880BL,-10L,0x31E79A15L,0x6806F2AAL,0xE44BFC9AL,0L,4294967291UL,0x892FD614L},{1UL,0x7EBE50A8L,5L,0x52DE786BL,0xD744F6EBL,-7L,6UL,0x1C3FE82BL},{0x6BD1L,0L,-1L,0x18FE6200L,4294967292UL,0x12D2855EL,3UL,1L}},{{0x6BD1L,0L,-1L,0x18FE6200L,4294967292UL,0x12D2855EL,3UL,1L},{0x0B48L,0x3042CCA9L,-1L,0UL,0UL,0x25484FA7L,0x7527C55EL,0xC66EDA78L},{0xF0DFL,1L,0x6FA5281EL,0x1C687ED9L,0x9E15608AL,0L,4294967292UL,0L},{1UL,0x7EBE50A8L,5L,0x52DE786BL,0xD744F6EBL,-7L,6UL,0x1C3FE82BL}},{{0x5D6FL,1L,1L,0x6CF75A4EL,0xE9D23C24L,0L,0x217F7E6BL,-1L},{0x0B48L,0x3042CCA9L,-1L,0UL,0UL,0x25484FA7L,0x7527C55EL,0xC66EDA78L},{6UL,0xE4944E85L,-8L,0x23A8BB8FL,0xD7B71868L,0x3A714632L,0xEF10296DL,-3L},{0x6BD1L,0L,-1L,0x18FE6200L,4294967292UL,0x12D2855EL,3UL,1L}},{{0x0B48L,0x3042CCA9L,-1L,0UL,0UL,0x25484FA7L,0x7527C55EL,0xC66EDA78L},{0x880BL,-10L,0x31E79A15L,0x6806F2AAL,0xE44BFC9AL,0L,4294967291UL,0x892FD614L},{65529UL,0L,0x10110AAAL,0x90BDA31DL,0x79AB40D9L,0x61DB1226L,5UL,0x2D5DE012L},{0x880BL,-10L,0x31E79A15L,0x6806F2AAL,0xE44BFC9AL,0L,4294967291UL,0x892FD614L}}},{{{0x07D3L,-1L,0xE2ADE48FL,9UL,0x3BC8FD94L,0x0654CEB2L,0x3E38FBC6L,0xC0E06E17L},{0xF0DFL,1L,0x6FA5281EL,0x1C687ED9L,0x9E15608AL,0L,4294967292UL,0L},{1UL,-1L,-10L,0x0ED1F489L,4294967287UL,0L,0x4836B82DL,0x3AC75DE7L},{0x2417L,5L,0x12030E46L,0x48929C28L,0xE27B8753L,0xBB3791D0L,0x51EF8290L,-1L}},{{65529UL,0L,0x10110AAAL,0x90BDA31DL,0x79AB40D9L,0x61DB1226L,5UL,0x2D5DE012L},{0xF8CFL,-5L,-5L,0xFBB4A379L,0x38BAE10AL,0x93D1BC77L,1UL,0x2D71AA8BL},{0x53A0L,0x6BC2BE7EL,-3L,0x9689BADAL,0x33378390L,0x8FD3F875L,4294967289UL,7L},{65535UL,0L,0xE041AB93L,4294967288UL,4294967292UL,0L,0UL,-9L}},{{0x2417L,5L,0x12030E46L,0x48929C28L,0xE27B8753L,0xBB3791D0L,0x51EF8290L,-1L},{0x53A0L,0x6BC2BE7EL,-3L,0x9689BADAL,0x33378390L,0x8FD3F875L,4294967289UL,7L},{0x0B48L,0x3042CCA9L,-1L,0UL,0UL,0x25484FA7L,0x7527C55EL,0xC66EDA78L},{1UL,-1L,-10L,0x0ED1F489L,4294967287UL,0L,0x4836B82DL,0x3AC75DE7L}},{{0x2417L,5L,0x12030E46L,0x48929C28L,0xE27B8753L,0xBB3791D0L,0x51EF8290L,-1L},{0x95F3L,1L,0L,0UL,0xEC50A47CL,0x71FB4261L,0x0E70246FL,1L},{0x53A0L,0x6BC2BE7EL,-3L,0x9689BADAL,0x33378390L,0x8FD3F875L,4294967289UL,7L},{65535UL,-1L,0x75E1FDB3L,1UL,0UL,6L,4294967295UL,0L}}},{{{65529UL,0L,0x10110AAAL,0x90BDA31DL,0x79AB40D9L,0x61DB1226L,5UL,0x2D5DE012L},{1UL,-1L,-10L,0x0ED1F489L,4294967287UL,0L,0x4836B82DL,0x3AC75DE7L},{1UL,-1L,-10L,0x0ED1F489L,4294967287UL,0L,0x4836B82DL,0x3AC75DE7L},{65529UL,0L,0x10110AAAL,0x90BDA31DL,0x79AB40D9L,0x61DB1226L,5UL,0x2D5DE012L}},{{0x07D3L,-1L,0xE2ADE48FL,9UL,0x3BC8FD94L,0x0654CEB2L,0x3E38FBC6L,0xC0E06E17L},{0x6BD1L,0L,-1L,0x18FE6200L,4294967292UL,0x12D2855EL,3UL,1L},{65529UL,0L,0x10110AAAL,0x90BDA31DL,0x79AB40D9L,0x61DB1226L,5UL,0x2D5DE012L},{0xB7C5L,0x531CE290L,0xC3FD4654L,0xA4E7FD7CL,4294967289UL,-7L,0UL,-8L}},{{0x0B48L,0x3042CCA9L,-1L,0UL,0UL,0x25484FA7L,0x7527C55EL,0xC66EDA78L},{65535UL,-1L,0x75E1FDB3L,1UL,0UL,6L,4294967295UL,0L},{6UL,0xE4944E85L,-8L,0x23A8BB8FL,0xD7B71868L,0x3A714632L,0xEF10296DL,-3L},{0x3702L,4L,1L,4294967291UL,4294967294UL,0x45F8C1AAL,7UL,0x5991800EL}},{{0x5D6FL,1L,1L,0x6CF75A4EL,0xE9D23C24L,0L,0x217F7E6BL,-1L},{65535UL,0L,0xE041AB93L,4294967288UL,4294967292UL,0L,0UL,-9L},{0xF0DFL,1L,0x6FA5281EL,0x1C687ED9L,0x9E15608AL,0L,4294967292UL,0L},{0x3702L,4L,1L,4294967291UL,4294967294UL,0x45F8C1AAL,7UL,0x5991800EL}}},{{{0x6BD1L,0L,-1L,0x18FE6200L,4294967292UL,0x12D2855EL,3UL,1L},{65535UL,-1L,0x75E1FDB3L,1UL,0UL,6L,4294967295UL,0L},{1UL,0x7EBE50A8L,5L,0x52DE786BL,0xD744F6EBL,-7L,6UL,0x1C3FE82BL},{0xB7C5L,0x531CE290L,0xC3FD4654L,0xA4E7FD7CL,4294967289UL,-7L,0UL,-8L}},{{0x95F3L,1L,0L,0UL,0xEC50A47CL,0x71FB4261L,0x0E70246FL,1L},{0x6BD1L,0L,-1L,0x18FE6200L,4294967292UL,0x12D2855EL,3UL,1L},{0x95F3L,1L,0L,0UL,0xEC50A47CL,0x71FB4261L,0x0E70246FL,1L},{65529UL,0L,0x10110AAAL,0x90BDA31DL,0x79AB40D9L,0x61DB1226L,5UL,0x2D5DE012L}},{{0xF0DFL,1L,0x6FA5281EL,0x1C687ED9L,0x9E15608AL,0L,4294967292UL,0L},{1UL,-1L,-10L,0x0ED1F489L,4294967287UL,0L,0x4836B82DL,0x3AC75DE7L},{0x2417L,5L,0x12030E46L,0x48929C28L,0xE27B8753L,0xBB3791D0L,0x51EF8290L,-1L},{65535UL,-1L,0x75E1FDB3L,1UL,0UL,6L,4294967295UL,0L}},{{0x3702L,4L,1L,4294967291UL,4294967294UL,0x45F8C1AAL,7UL,0x5991800EL},{0x95F3L,1L,0L,0UL,0xEC50A47CL,0x71FB4261L,0x0E70246FL,1L},{0xB7C5L,0x531CE290L,0xC3FD4654L,0xA4E7FD7CL,4294967289UL,-7L,0UL,-8L},{1UL,-1L,-10L,0x0ED1F489L,4294967287UL,0L,0x4836B82DL,0x3AC75DE7L}}}};
    struct S0 *l_345 = &g_255;
    int **l_346 = &g_197;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_343[i] = 0x9800L;
    for (g_59.f0 = 0; (g_59.f0 <= 3); g_59.f0 += 1)
    {
        (*g_125) = (*g_125);
        if (l_343[0])
            continue;
    }
    (*l_345) = l_344[4][3][1];
    (**l_346) = ((void*)0 != l_346);
    (*l_345) = (*l_345);
    return (**l_346);
}







static struct S0 * func_23(struct S0 * p_24)
{
    int *l_25[6][9] = {{&g_26,&g_26,&g_26,&g_26,&g_26,&g_26,&g_26,&g_26,&g_26},{&g_26,&g_26,&g_26,&g_26,&g_26,&g_26,&g_26,&g_26,&g_26},{&g_26,&g_26,&g_26,&g_26,(void*)0,(void*)0,&g_26,&g_26,(void*)0},{&g_26,&g_26,&g_26,&g_26,&g_26,&g_26,&g_26,&g_26,&g_26},{&g_26,&g_26,&g_26,&g_26,&g_26,&g_26,&g_26,&g_26,&g_26},{&g_26,&g_26,&g_26,&g_26,&g_26,&g_26,&g_26,&g_26,&g_26}};
    struct S0 l_32 = {9UL,0L,-1L,0x80A25601L,0x1B3B3333L,0xB9622CFBL,0x4730E92FL,-10L};
    int l_299 = 0L;
    struct S0 ***l_310 = &g_126;
    unsigned char l_341 = 0UL;
    int i, j;
    if (((((void*)0 != l_25[0][1]) > ((void*)0 == g_22)) <= (((func_27(l_32, (&l_25[0][1] == (void*)0), g_8, func_33((&l_25[0][1] == &g_2))) <= g_57[3]) & g_8) == g_57[2])))
    {
        (*g_112) = l_25[2][0];
lbl_292:
        for (g_265 = 24; (g_265 == (-10)); --g_265)
        {
            int l_275 = 4L;
            int l_276 = 6L;
            l_276 = l_275;
            (*g_112) = l_25[0][1];
        }
    }
    else
    {
        struct S0 ***l_309 = &g_126;
        int l_315 = 1L;
        struct S0 l_327 = {65526UL,1L,-4L,4294967288UL,4294967287UL,0x0D667F98L,4294967295UL,0L};
        for (l_32.f6 = 0; (l_32.f6 > 25); l_32.f6 = safe_add_func_int8_t_s_s(l_32.f6, 9))
        {
            for (g_79.f4 = 4; (g_79.f4 < 6); g_79.f4 = safe_add_func_uint32_t_u_u(g_79.f4, 8))
            {
                int *l_283 = &g_59.f1;
                struct S0 *l_288 = &g_255;
                for (g_265 = (-20); (g_265 >= (-24)); g_265--)
                {
                    (*g_112) = l_283;
                }
                for (g_79.f7 = 0; (g_79.f7 != 9); g_79.f7++)
                {
                    int l_291[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_291[i] = 0x9B5C6D67L;
                    (*g_112) = (void*)0;
                    if (((*l_283) <= (safe_add_func_uint8_t_u_u(1UL, (g_255.f3 & (*l_283))))))
                    {
                        int **l_289 = &l_25[0][1];
                        int l_290 = 0L;
                        l_288 = p_24;
                        l_290 = (l_289 != &g_2);
                        (*l_289) = l_25[1][0];
                    }
                    else
                    {
                        struct S0 *l_293 = &g_79;
                        (*l_283) = l_291[0];
                        if (g_255.f2)
                            goto lbl_292;
                        return l_293;
                    }
                }
                if ((*l_283))
                    break;
            }
        }
        for (g_59.f0 = 14; (g_59.f0 > 57); g_59.f0 = safe_add_func_int16_t_s_s(g_59.f0, 2))
        {
            int *l_296 = &g_59.f7;
            (*g_112) = l_296;
            for (l_32.f4 = 0; (l_32.f4 != 35); ++l_32.f4)
            {
                int l_316[8][8][4] = {{{6L,0x1BF113D2L,0x1BF113D2L,6L},{3L,0x6CC553CEL,(-1L),0x3005CFBDL},{7L,0xAC140D51L,0x3005CFBDL,1L},{0x3005CFBDL,1L,0xD91D2613L,1L},{0x1BF113D2L,0xAC140D51L,0xCCC1D938L,0x3005CFBDL},{0x741046A6L,0x6CC553CEL,1L,6L},{0xCCC1D938L,0x1BF113D2L,(-3L),(-3L)},{0xCCC1D938L,0xCCC1D938L,1L,3L}},{{0x741046A6L,(-3L),0xCCC1D938L,0x6CC553CEL},{0x1BF113D2L,7L,0xD91D2613L,0xCCC1D938L},{0x3005CFBDL,7L,0x3005CFBDL,0x6CC553CEL},{7L,(-3L),(-1L),3L},{3L,0xCCC1D938L,0x1BF113D2L,(-3L)},{6L,0x1BF113D2L,0x1BF113D2L,6L},{3L,0x6CC553CEL,(-1L),0x3005CFBDL},{7L,0xAC140D51L,0x3005CFBDL,1L}},{{0x3005CFBDL,0x741046A6L,1L,0x741046A6L},{0xAC140D51L,6L,0xD91D2613L,3L},{7L,0x1BF113D2L,0x741046A6L,(-1L)},{0xD91D2613L,0xAC140D51L,0x6CC553CEL,0x6CC553CEL},{0xD91D2613L,0xD91D2613L,0x741046A6L,(-3L)},{7L,0x6CC553CEL,0xD91D2613L,0x1BF113D2L},{0xAC140D51L,0x3005CFBDL,1L,0xD91D2613L},{3L,0x3005CFBDL,3L,0x1BF113D2L}},{{0x3005CFBDL,0x6CC553CEL,0xCCC1D938L,(-3L)},{(-3L),0xD91D2613L,0xAC140D51L,0x6CC553CEL},{(-1L),0xAC140D51L,0xAC140D51L,(-1L)},{(-3L),0x1BF113D2L,0xCCC1D938L,3L},{0x3005CFBDL,6L,3L,0x741046A6L},{3L,0x741046A6L,1L,0x741046A6L},{0xAC140D51L,6L,0xD91D2613L,3L},{7L,0x1BF113D2L,0x741046A6L,(-1L)}},{{0xD91D2613L,0xAC140D51L,0x6CC553CEL,0x6CC553CEL},{0xD91D2613L,0xD91D2613L,0x741046A6L,(-3L)},{7L,0x6CC553CEL,0xD91D2613L,0x1BF113D2L},{0xAC140D51L,0x3005CFBDL,1L,0xD91D2613L},{3L,0x3005CFBDL,3L,0x1BF113D2L},{0x3005CFBDL,0x6CC553CEL,0xCCC1D938L,(-3L)},{(-3L),0xD91D2613L,0xAC140D51L,0x6CC553CEL},{(-1L),0xAC140D51L,0xAC140D51L,(-1L)}},{{0x6CC553CEL,0xAC140D51L,0xD91D2613L,(-3L)},{3L,(-1L),(-3L),7L},{(-3L),7L,0x741046A6L,7L},{6L,(-1L),1L,(-3L)},{0x3005CFBDL,0xAC140D51L,7L,0xCCC1D938L},{1L,6L,0x1BF113D2L,0x1BF113D2L},{1L,1L,7L,0x6CC553CEL},{0x3005CFBDL,0x1BF113D2L,1L,0xAC140D51L}},{{6L,3L,0x741046A6L,1L},{(-3L),3L,(-3L),0xAC140D51L},{3L,0x1BF113D2L,0xD91D2613L,0x6CC553CEL},{0x6CC553CEL,1L,6L,0x1BF113D2L},{0xCCC1D938L,6L,6L,0xCCC1D938L},{0x6CC553CEL,0xAC140D51L,0xD91D2613L,(-3L)},{3L,(-1L),(-3L),7L},{(-3L),7L,0x741046A6L,7L}},{{6L,(-1L),1L,(-3L)},{0x3005CFBDL,0xAC140D51L,7L,0xCCC1D938L},{1L,6L,0x1BF113D2L,0x1BF113D2L},{1L,1L,7L,0x6CC553CEL},{0x3005CFBDL,0x1BF113D2L,1L,0xAC140D51L},{6L,3L,0x741046A6L,1L},{(-3L),3L,(-3L),0xAC140D51L},{3L,0x1BF113D2L,0xD91D2613L,0x6CC553CEL}}};
                unsigned l_317 = 0x39052B1FL;
                struct S0 l_325 = {65535UL,0x85E786EDL,0xAA910080L,0x04A2B144L,4294967295UL,0xF9507A3DL,0xA62C9CABL,0xFE2A5CB4L};
                int i, j, k;
                (*l_296) = l_299;
                if ((safe_unary_minus_func_int8_t_s(((safe_sub_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u(1UL, 1)), ((0xCA3028F6L | ((*l_296) == (g_255.f6 < (l_309 != l_310)))) && (-7L)))), ((safe_div_func_uint8_t_u_u(((~(safe_div_func_int32_t_s_s(l_315, l_316[2][3][1]))) == g_255.f2), (*l_296))) | l_317))) | 0xF8L))))
                {
                    int *l_318 = &g_59.f7;
                    (*g_112) = l_318;
                    for (g_255.f0 = 12; (g_255.f0 < 4); g_255.f0 = safe_sub_func_uint8_t_u_u(g_255.f0, 1))
                    {
                        if ((*g_197))
                            break;
                    }
                    (*g_112) = (*g_112);
                }
                else
                {
                    unsigned char l_323 = 8UL;
                    struct S0 *l_329 = &l_327;
                    (*g_112) = (*g_112);
                    if ((*l_296))
                    {
                        int l_324 = 1L;
                        (*l_296) = (safe_rshift_func_uint16_t_u_u((246UL && (func_46(l_316[7][3][0], g_59.f7, g_59.f5) <= ((l_316[2][3][1] > l_323) == l_324))), 9));
                    }
                    else
                    {
                        struct S0 *l_326[1][10] = {{&g_79,&g_79,&g_79,&g_79,&g_79,&g_79,&g_79,&g_79,&g_79,&g_79}};
                        int i, j;
                        l_327 = l_325;
                        l_325 = g_328;
                    }
                    (*l_329) = l_325;
                    (**g_112) = (65526UL != 0x774EL);
                }
                for (g_79.f5 = (-1); (g_79.f5 == 10); g_79.f5++)
                {
                    for (g_79.f3 = 0; (g_79.f3 >= 26); g_79.f3 = safe_add_func_int8_t_s_s(g_79.f3, 6))
                    {
                        if ((*g_2))
                            break;
                        if (l_327.f4)
                            continue;
                        (*g_197) = (g_255.f6 && (*g_2));
                    }
                    for (g_255.f0 = (-16); (g_255.f0 == 27); ++g_255.f0)
                    {
                        int l_336[4][3] = {{(-7L),(-4L),(-4L)},{0x744C5951L,1L,1L},{(-7L),(-4L),(-4L)},{0x744C5951L,1L,1L}};
                        int i, j;
                        (*g_112) = (*g_112);
                        if (l_327.f5)
                            continue;
                        (**g_112) = l_336[2][0];
                        if ((*g_2))
                            continue;
                    }
                }
                for (g_59.f3 = 4; (g_59.f3 == 17); g_59.f3++)
                {
                    for (g_79.f5 = 0; (g_79.f5 > 23); g_79.f5++)
                    {
                        return (**g_125);
                    }
                    if ((*g_197))
                        continue;
                }
            }
        }
        (*g_112) = (void*)0;
        return (*g_126);
    }
    (*g_197) = (func_27(l_32, g_255.f6, l_341, g_79.f5) == g_342);
    (*g_112) = l_25[0][1];
    l_25[0][1] = l_25[4][4];
    return (**l_310);
}







static char func_27(struct S0 p_28, unsigned char p_29, unsigned short p_30, unsigned p_31)
{
    unsigned char l_136 = 0UL;
    int l_206 = (-4L);
    struct S0 l_218 = {0x69D1L,0x05192C4AL,0x06731C5AL,0x2A184551L,0x72582D2EL,-7L,0x0BFC1F75L,0L};
    int ***l_254 = &g_112;
lbl_162:
    p_28.f7 = ((4294967294UL == (safe_rshift_func_int8_t_s_s((g_125 != (void*)0), 6))) > p_28.f0);
    for (g_79.f1 = 0; (g_79.f1 > 4); ++g_79.f1)
    {
        int *l_137 = &g_26;
        struct S0 **l_188 = &g_22;
        if ((safe_mod_func_uint16_t_u_u(p_28.f1, 0x6625L)))
        {
            unsigned l_135 = 1UL;
            char l_140 = 0xD4L;
            struct S0 *l_193 = &g_59;
            int l_194 = 0x2D848F50L;
            int *l_198 = &g_26;
            int ***l_213 = &g_112;
            if (((safe_lshift_func_int8_t_s_s(((safe_sub_func_uint8_t_u_u(l_135, ((void*)0 != &g_126))) || func_35(g_26)), 6)) == l_136))
            {
                short l_151 = 0x67CFL;
                int *l_167 = &g_26;
                (*g_112) = l_137;
                for (g_26 = (-7); (g_26 == (-9)); g_26 = safe_sub_func_int8_t_s_s(g_26, 5))
                {
                    int *l_144 = &g_79.f1;
                    if (l_140)
                        break;
                    for (g_59.f5 = 0; (g_59.f5 < 14); ++g_59.f5)
                    {
                        int *l_143 = &g_79.f7;
                        (*l_143) = ((*l_137) > p_29);
                        (*g_112) = l_144;
                        (*l_143) = ((safe_add_func_uint32_t_u_u(p_28.f1, (!((safe_rshift_func_int8_t_s_s(0xB4L, (safe_mod_func_uint8_t_u_u(g_26, l_151)))) < (safe_lshift_func_uint16_t_u_s(func_46((safe_rshift_func_int8_t_s_s(g_57[1], (l_151 | (*l_137)))), p_28.f6, p_29), p_28.f1)))))) < 0xF6BC7391L);
                        if (p_29)
                            break;
                    }
                    for (g_59.f1 = 3; (g_59.f1 >= 0); g_59.f1 -= 1)
                    {
                        int l_156 = 0x8F8D087CL;
                        int i;
                        l_156 = g_57[g_59.f1];
                        return g_8;
                    }
                }
                for (g_59.f2 = (-7); (g_59.f2 <= 20); ++g_59.f2)
                {
                    struct S0 *l_160 = &g_79;
                    struct S0 **l_159 = &l_160;
                    int *l_161 = &g_79.f1;
                    (*l_159) = &p_28;
                    if (p_31)
                        continue;
                    if ((*g_2))
                    {
                        (*g_112) = (*g_112);
                        return p_29;
                    }
                    else
                    {
                        (*g_112) = l_161;
                    }
                    if (g_26)
                        goto lbl_162;
                }
                for (l_151 = (-27); (l_151 >= (-13)); l_151++)
                {
                    if ((safe_sub_func_int32_t_s_s((*g_2), p_28.f5)))
                    {
                        (*l_137) = p_28.f0;
                        return p_28.f4;
                    }
                    else
                    {
                        if (l_151)
                            goto lbl_162;
                        if (p_29)
                            break;
                        (*g_112) = l_167;
                    }
                }
            }
            else
            {
                unsigned short l_181 = 0x111CL;
                struct S0 *l_208[6][1] = {{&g_59},{(void*)0},{&g_59},{&g_59},{(void*)0},{&g_59}};
                int ***l_211 = &g_112;
                int i, j;
                for (g_79.f7 = 0; (g_79.f7 < 14); g_79.f7++)
                {
                    int *l_178 = &g_59.f7;
                    unsigned l_192 = 4294967295UL;
                    if (l_140)
                        break;
                    if (func_46(p_28.f5, g_79.f1, (safe_rshift_func_int8_t_s_s((safe_sub_func_int16_t_s_s(p_28.f5, (safe_sub_func_uint8_t_u_u(((void*)0 != (*g_126)), (((0x33L | g_59.f2) <= g_59.f7) & func_35((safe_lshift_func_int16_t_s_s((p_31 && 0xC3E8L), p_28.f7)))))))), 7))))
                    {
                        int l_191 = 0x0E336DEEL;
                        (*g_112) = l_178;
                        (*l_178) = ((safe_rshift_func_uint8_t_u_s(l_181, 6)) && (safe_add_func_uint8_t_u_u(((((l_135 > (safe_rshift_func_int8_t_s_u((safe_sub_func_int16_t_s_s(p_31, ((void*)0 != l_188))), ((safe_sub_func_uint16_t_u_u(l_191, (func_46((*g_2), func_46((g_59.f0 || (0xA3D8L >= l_140)), g_59.f7, p_29), (*l_137)) >= g_79.f7))) && g_59.f6)))) & (-1L)) == p_28.f1) | p_28.f1), l_192)));
                        l_194 = ((*g_126) == l_193);
                    }
                    else
                    {
                        (*g_125) = (*g_125);
                        if (l_194)
                            break;
                        if ((*l_137))
                            break;
                    }
                }
                for (p_28.f2 = 0; (p_28.f2 > (-20)); p_28.f2 = safe_sub_func_uint16_t_u_u(p_28.f2, 7))
                {
                    short l_205 = 0x5DCEL;
                    int ***l_212 = &g_112;
                    struct S0 l_219 = {0x92BCL,0x94D50374L,0L,0UL,4294967291UL,0x626CCDBEL,0xE01D6977L,1L};
                    l_198 = g_197;
                    if ((g_79.f5 ^ ((((safe_div_func_int8_t_s_s(func_46((*l_137), p_28.f3, g_79.f4), (-1L))) != (+((0x69L || (((safe_sub_func_uint32_t_u_u(l_205, (l_206 >= l_206))) > g_59.f6) & (-6L))) & 0L))) != p_29) > g_79.f4)))
                    {
                        struct S0 **l_207[2][8][7] = {{{&l_193,&g_22,&g_22,&l_193,(void*)0,&l_193,&l_193},{&g_22,&l_193,(void*)0,&l_193,&l_193,&l_193,&g_22},{&l_193,&l_193,&g_22,&l_193,&l_193,(void*)0,&l_193},{&g_22,&l_193,(void*)0,&l_193,(void*)0,&l_193,&g_22},{&l_193,&l_193,&l_193,(void*)0,&g_22,(void*)0,&l_193},{&g_22,&g_22,(void*)0,(void*)0,&l_193,(void*)0,&l_193},{(void*)0,&g_22,&l_193,&l_193,&g_22,&g_22,&l_193},{&g_22,&l_193,(void*)0,&l_193,&l_193,&g_22,&l_193}},{{&g_22,&l_193,&g_22,&l_193,&l_193,(void*)0,&l_193},{&g_22,&l_193,(void*)0,&l_193,&l_193,&l_193,&l_193},{&g_22,&l_193,&g_22,&l_193,&l_193,&g_22,&g_22},{&l_193,(void*)0,&l_193,&l_193,&l_193,&g_22,&l_193},{&l_193,(void*)0,&l_193,&l_193,&l_193,&g_22,&g_22},{&l_193,&l_193,(void*)0,&l_193,&g_22,&l_193,&g_22},{&l_193,&g_22,&l_193,&l_193,&l_193,&l_193,&l_193},{&g_22,&g_22,&g_22,&l_193,&l_193,&g_22,&l_193}}};
                        int i, j, k;
                        l_208[2][0] = &p_28;
                    }
                    else
                    {
                        int l_216 = (-7L);
                        struct S0 **l_217 = (void*)0;
                        (*l_198) = (safe_mod_func_int16_t_s_s(((0x86E8L != (g_59.f5 >= g_79.f3)) == func_35(func_46((l_211 != &g_112), (((l_212 == l_213) ^ 0x4AL) >= (safe_mod_func_int32_t_s_s((p_30 || g_57[3]), p_28.f3))), g_59.f7))), l_216));
                        (**l_211) = (*g_112);
                        (*g_125) = l_217;
                    }
                    l_219 = l_218;
                }
                (*l_193) = l_218;
                for (l_181 = 0; (l_181 == 56); l_181++)
                {
                    (**l_213) = l_137;
                }
            }
            (*g_125) = l_188;
        }
        else
        {
            int l_224 = 5L;
            struct S0 *l_261[6][10] = {{&g_79,&g_59,&g_59,&g_59,&g_59,&g_79,&g_59,&g_59,&g_59,&g_59},{&g_79,&g_59,&g_59,&g_59,&g_59,&g_79,&g_59,&g_59,&g_59,&g_59},{&g_79,&g_59,&g_59,&g_59,&g_59,&g_79,&g_59,&g_59,&g_59,&g_59},{&g_79,&g_59,&g_59,&g_59,&g_59,&g_79,&g_59,&g_59,&g_59,&g_59},{&g_79,&g_59,&g_59,&g_59,&g_59,&g_79,&g_59,&g_59,&g_59,&g_59},{&g_59,&g_59,&g_255,&g_255,&g_59,&g_59,&g_59,&g_255,&g_255,&g_59}};
            int i, j;
            if (((func_35(func_35(p_28.f0)) <= g_79.f3) < p_28.f6))
            {
                unsigned char l_229 = 255UL;
                if ((safe_rshift_func_uint8_t_u_s((func_46(l_224, (*l_137), (((g_79.f5 && p_29) || ((((p_28.f4 <= ((*l_137) < (p_28.f3 == (safe_mod_func_uint16_t_u_u(l_136, p_28.f2))))) && l_206) | l_229) == 4294967290UL)) || 0x001E7473L)) <= p_29), 7)))
                {
                    (*g_112) = &l_224;
                }
                else
                {
                    return (*l_137);
                }
                (*g_112) = &l_206;
                for (g_59.f0 = (-19); (g_59.f0 >= 48); g_59.f0 = safe_add_func_uint16_t_u_u(g_59.f0, 1))
                {
                    if (((safe_rshift_func_int16_t_s_u(((safe_div_func_uint32_t_u_u(((((-1L) > (l_224 ^ (l_224 || p_28.f7))) == g_59.f0) ^ g_59.f4), ((safe_rshift_func_uint8_t_u_s(p_31, g_59.f5)) || 0x4DL))) != p_31), (*l_137))) > l_229))
                    {
                        (*g_197) = (p_28.f7 ^ (safe_rshift_func_uint16_t_u_s(l_218.f6, l_136)));
                        (*g_112) = (*g_112);
                    }
                    else
                    {
                        short l_246[2];
                        int *l_247 = &l_218.f7;
                        int i;
                        for (i = 0; i < 2; i++)
                            l_246[i] = 1L;
                        l_224 = (safe_add_func_uint8_t_u_u(((safe_div_func_int8_t_s_s(0x25L, (p_28.f0 ^ g_8))) ^ (safe_mod_func_uint16_t_u_u((func_46(l_224, p_28.f6, l_246[1]) ^ (0L & p_29)), p_29))), p_29));
                        l_247 = (*g_112);
                        (*g_112) = &l_206;
                        if (p_28.f2)
                            break;
                    }
                    if ((*l_137))
                        continue;
                    for (g_59.f5 = 0; (g_59.f5 <= (-26)); g_59.f5 = safe_sub_func_int32_t_s_s(g_59.f5, 7))
                    {
                        int *l_250 = (void*)0;
                        struct S0 *l_251 = &l_218;
                        l_250 = (*g_112);
                        if (g_59.f0)
                            goto lbl_162;
                        l_251 = (*g_126);
                        (*g_197) = (*g_2);
                    }
                    for (l_229 = 0; (l_229 <= 3); l_229 += 1)
                    {
                        (*g_112) = (*g_112);
                        return g_79.f3;
                    }
                }
                (*g_112) = (*g_112);
            }
            else
            {
                struct S0 *l_256 = &g_255;
                for (g_59.f4 = 0; (g_59.f4 <= 3); g_59.f4 += 1)
                {
                    int i;
                    if (g_57[g_59.f4])
                    {
                        return (*l_137);
                    }
                    else
                    {
                        (*l_137) = (safe_sub_func_int16_t_s_s(((void*)0 != l_254), 1L));
                        (*l_137) = l_218.f7;
                    }
                }
                (*l_256) = g_255;
                (*l_137) = l_218.f6;
            }
            for (l_218.f0 = 26; (l_218.f0 != 6); l_218.f0 = safe_sub_func_uint32_t_u_u(l_218.f0, 6))
            {
                short l_268 = (-1L);
                if ((*g_197))
                {
                    int l_264 = (-9L);
                    if ((safe_div_func_uint8_t_u_u(func_46((((l_261[5][1] != (*l_188)) || (safe_sub_func_int32_t_s_s((l_264 < g_265), p_28.f1))) ^ (func_46(p_28.f2, func_46((safe_rshift_func_int16_t_s_s(0xD771L, l_268)), p_28.f6, g_59.f5), p_28.f7) ^ 0x8AL)), p_31, p_28.f5), g_57[3])))
                    {
                        (*l_137) = (safe_div_func_int32_t_s_s(((safe_lshift_func_uint8_t_u_u((~g_255.f4), (0xF147L ^ ((p_28.f3 | (func_46(func_35(g_59.f5), g_59.f5, l_264) <= (0xFDA1L > g_255.f7))) ^ p_28.f0)))) <= g_59.f7), p_29));
                    }
                    else
                    {
                        if (p_28.f2)
                            break;
                    }
                }
                else
                {
                    return g_255.f6;
                }
            }
        }
        return p_29;
    }
    return g_59.f7;
}







static unsigned func_33(unsigned p_34)
{
    unsigned l_37 = 0xE33BD0D8L;
    struct S0 l_80 = {0UL,0L,0xC09A20D7L,0xEEFDE0CEL,7UL,0xDB586DAAL,0UL,0L};
    struct S0 l_118 = {0xA672L,1L,5L,0UL,1UL,0xFB31F79DL,0x4A7D6E7BL,0xDDACD7A2L};
    if (func_35((((l_37 != (255UL <= ((safe_mod_func_int16_t_s_s(((((safe_div_func_int32_t_s_s((((safe_lshift_func_uint16_t_u_s((safe_mod_func_uint32_t_u_u(func_46(l_37, ((p_34 == p_34) >= 0x25E6B711L), l_37), 4294967289UL)), 12)) != p_34) || l_37), p_34)) > 9UL) & l_37) == 0xDFF04C39L), g_26)) != 0xB68B63C9L))) >= p_34) != (-1L))))
    {
        int *l_55 = &g_26;
        int **l_56 = &g_2;
        short l_95[10][2] = {{0x0249L,0x05A1L},{0x5734L,0x7D48L},{0x5734L,0x05A1L},{0x0249L,0x0249L},{0x05A1L,0x5734L},{0x7D48L,0x5734L},{0x05A1L,0x0249L},{0x0249L,0x05A1L},{0x5734L,0x7D48L},{0x5734L,0x05A1L}};
        struct S0 **l_99[7][5] = {{&g_22,&g_22,&g_22,&g_22,(void*)0},{(void*)0,&g_22,(void*)0,&g_22,(void*)0},{&g_22,&g_22,&g_22,&g_22,(void*)0},{&g_22,&g_22,&g_22,&g_22,&g_22},{(void*)0,&g_22,&g_22,&g_22,&g_22},{(void*)0,&g_22,(void*)0,&g_22,(void*)0},{(void*)0,&g_22,&g_22,&g_22,&g_22}};
        int i, j;
lbl_116:
        (*l_56) = l_55;
        for (p_34 = 0; (p_34 <= 3); p_34 += 1)
        {
            int i;
            (*l_56) = (void*)0;
            return g_57[p_34];
        }
        if ((*g_2))
        {
            struct S0 *l_58 = &g_59;
            int l_67[3][2][10] = {{{1L,(-9L),0x9866F533L,0x3964532EL,(-9L),1L,(-9L),0x3964532EL,0x9866F533L,(-9L)},{1L,0x43AD1FF0L,(-1L),0x3964532EL,0x43AD1FF0L,0x740B48CFL,(-9L),(-1L),(-1L),(-9L)}},{{0x740B48CFL,(-9L),(-1L),(-1L),(-9L),0x740B48CFL,0x43AD1FF0L,0x3964532EL,(-1L),0x43AD1FF0L},{1L,1L,0x83E25FC2L,(-10L),1L,0x9866F533L,1L,(-10L),0x83E25FC2L,1L}},{{0x3964532EL,0x740B48CFL,(-5L),(-10L),0x740B48CFL,(-1L),1L,(-5L),(-5L),1L},{(-1L),1L,(-5L),(-5L),1L,(-1L),0x740B48CFL,(-10L),(-5L),0x740B48CFL}}};
            int l_91 = 0x028979A2L;
            struct S0 **l_100 = &l_58;
            int l_113 = 0x6948E95CL;
            int i, j, k;
            if ((l_58 == &g_59))
            {
                unsigned short l_66[10][5][2] = {{{0xAF82L,65534UL},{0x6116L,0xD5A1L},{0xC057L,0x2AB3L},{0xA785L,65535UL},{65535UL,0x6116L}},{{1UL,0x253AL},{0x2AB3L,0x26A2L},{0xAF82L,0xD48FL},{0xD75FL,0xC057L},{0xD5A1L,7UL}},{{1UL,65535UL},{0x26A2L,0xD75FL},{0xE949L,3UL},{7UL,65535UL},{0xAF82L,0xC261L}},{{65527UL,1UL},{0x253AL,2UL},{0xC261L,65535UL},{65534UL,65527UL},{0x07ACL,0x07ACL}},{{2UL,0xA785L},{0xAF82L,1UL},{65534UL,0xE949L},{3UL,65534UL},{0xD48FL,65535UL}},{{0xD48FL,65534UL},{3UL,0xE949L},{65534UL,1UL},{0xAF82L,0xA785L},{2UL,0x07ACL}},{{0x07ACL,65527UL},{65534UL,65535UL},{0xC261L,2UL},{0xA785L,0x26A2L},{65529UL,65535UL}},{{0x2BEBL,1UL},{1UL,0xD48FL},{0xC261L,0xDB8BL},{0x4BD4L,0xC9EFL},{0xAF82L,1UL}},{{65534UL,1UL},{0xDB8BL,0x2229L},{0x2BEBL,0x4BD4L},{0x974DL,0xA785L},{0x26A2L,0x8472L}},{{1UL,0xC9EFL},{1UL,0x974DL},{1UL,65534UL},{0x8472L,0x499CL},{0x2BEBL,0x499CL}}};
                int *l_68[6][2] = {{&g_59.f7,&l_67[0][1][6]},{&g_59.f7,&g_59.f7},{&l_67[0][1][6],&g_59.f7},{&g_59.f7,&l_67[0][1][6]},{&g_59.f7,&g_59.f7},{&l_67[0][1][6],&g_59.f7}};
                int i, j, k;
lbl_98:
                if ((safe_rshift_func_int16_t_s_u(g_8, (func_46((g_26 > (safe_rshift_func_int16_t_s_u(((l_66[9][2][1] || (9L != (&g_59 != l_58))) == 0xAAD4D87CL), (&g_59 == (void*)0)))), (**l_56), g_59.f2) | (**l_56)))))
                {
                    struct S0 **l_77 = &g_22;
                    struct S0 ***l_76 = &l_77;
                    if (((l_67[0][1][6] & (0x4BB1L && g_59.f0)) < (*g_2)))
                    {
                        (*l_56) = l_68[0][0];
                        (*l_56) = &g_26;
                    }
                    else
                    {
                        int **l_75[1];
                        int i;
                        for (i = 0; i < 1; i++)
                            l_75[i] = &g_2;
                        (*g_2) = (safe_mod_func_int32_t_s_s((p_34 | ((safe_mod_func_int8_t_s_s((func_46(l_67[1][0][3], g_57[2], ((!6UL) >= (safe_lshift_func_int8_t_s_u(((&g_2 == l_75[0]) != g_59.f2), 6)))) || (+g_57[3])), g_26)) && (**l_56))), 0xEAC5D1DBL));
                    }
                    (*l_76) = (void*)0;
                    (*g_2) = 0x370D8BEEL;
                    (*g_2) = 1L;
                }
                else
                {
                    unsigned l_85 = 0xB4874BDAL;
                    for (g_59.f0 = 0; (g_59.f0 <= 1); g_59.f0 += 1)
                    {
                        struct S0 *l_78[5][6] = {{&g_59,&g_59,&g_59,&g_59,&g_59,&g_59},{&g_59,&g_59,&g_59,&g_59,&g_59,&g_59},{&g_79,&g_79,&g_59,&g_79,&g_59,&g_79},{&g_59,&g_59,&g_79,&g_79,&g_59,&g_59},{&g_79,&g_59,&g_79,&g_59,&g_79,&g_79}};
                        int i, j;
                        l_80 = g_59;
                        (*l_55) = (l_78[2][4] != (void*)0);
                        return g_57[g_59.f0];
                    }
                    for (g_79.f0 = 0; (g_79.f0 != 3); g_79.f0 = safe_add_func_uint16_t_u_u(g_79.f0, 7))
                    {
                        unsigned short l_94 = 65534UL;
                        if (p_34)
                            break;
                        (*l_55) = (safe_sub_func_uint16_t_u_u((0x1AL >= 0x10L), (l_85 & (safe_unary_minus_func_uint8_t_u(func_35(p_34))))));
                        (*l_55) = (safe_sub_func_uint32_t_u_u((safe_add_func_int16_t_s_s(g_59.f7, func_46((g_79.f2 > l_37), p_34, l_91))), (p_34 > ((((~p_34) == ((safe_add_func_uint32_t_u_u(func_46(p_34, p_34, l_94), l_94)) != p_34)) | 0x08L) == l_95[7][1]))));
                    }
                    (*l_56) = &l_67[1][0][2];
                    (*l_56) = (*l_56);
                }
                for (g_79.f1 = 0; (g_79.f1 == 26); g_79.f1 = safe_add_func_int16_t_s_s(g_79.f1, 7))
                {
                    if (g_59.f0)
                        goto lbl_98;
                    l_100 = l_99[3][4];
                }
            }
            else
            {
                (*l_56) = &g_26;
                for (g_59.f7 = 3; (g_59.f7 >= 0); g_59.f7 -= 1)
                {
                    for (g_79.f7 = 0; (g_79.f7 <= 1); g_79.f7 += 1)
                    {
                        (*g_2) = 0x695F44C7L;
                    }
                    g_79 = l_80;
                    for (p_34 = 0; (p_34 <= 1); p_34 += 1)
                    {
                        (*l_55) = 0x5F19456CL;
                    }
                }
                return p_34;
            }
            if (p_34)
            {
                int *l_103 = (void*)0;
                struct S0 **l_104 = &l_58;
                int l_114[8] = {0x08559244L,0x08559244L,0x08559244L,0x08559244L,0x08559244L,0x08559244L,0x08559244L,0x08559244L};
                int i;
                for (l_80.f2 = (-23); (l_80.f2 < (-23)); l_80.f2 = safe_add_func_uint8_t_u_u(l_80.f2, 9))
                {
                    g_2 = l_103;
                }
                (*l_55) = func_46((0x0EL >= (p_34 != (((g_79.f6 | g_79.f7) && (&g_22 != l_104)) || (g_59.f7 ^ ((safe_sub_func_int8_t_s_s(l_80.f6, (safe_add_func_int32_t_s_s((safe_add_func_int16_t_s_s(((l_91 > g_79.f0) > 0x0C378F7CL), p_34)), p_34)))) & 0x1984L))))), p_34, g_59.f7);
                (**l_104) = g_79;
                for (g_79.f2 = 0; (g_79.f2 <= 1); g_79.f2 += 1)
                {
                    int ***l_111[2][4][5] = {{{&l_56,&l_56,&l_56,&l_56,&l_56},{&l_56,&l_56,&l_56,&l_56,&l_56},{&l_56,&l_56,&l_56,&l_56,&l_56},{&l_56,&l_56,&l_56,&l_56,&l_56}},{{&l_56,&l_56,&l_56,&l_56,&l_56},{&l_56,&l_56,&l_56,&l_56,&l_56},{&l_56,&l_56,&l_56,&l_56,&l_56},{&l_56,&l_56,&l_56,&l_56,&l_56}}};
                    int i, j, k;
                    l_80.f7 = p_34;
                    g_112 = &g_2;
                    for (g_79.f0 = 0; (g_79.f0 <= 1); g_79.f0 += 1)
                    {
                        l_114[1] = (~(g_79.f3 != ((g_79.f4 < l_113) < g_79.f6)));
                        (*l_55) = p_34;
                        return g_79.f2;
                    }
                    for (g_79.f3 = 0; (g_79.f3 <= 1); g_79.f3 += 1)
                    {
                        struct S0 *l_115 = &g_79;
                        (*l_104) = l_115;
                    }
                }
            }
            else
            {
                if (l_80.f7)
                    goto lbl_116;
            }
        }
        else
        {
            struct S0 l_117[7] = {{0x97E2L,1L,0x8EBAD2A3L,0UL,0x07670E18L,0x70B1168EL,0x87208B66L,1L},{0x97E2L,1L,0x8EBAD2A3L,0UL,0x07670E18L,0x70B1168EL,0x87208B66L,1L},{0x97E2L,1L,0x8EBAD2A3L,0UL,0x07670E18L,0x70B1168EL,0x87208B66L,1L},{0x97E2L,1L,0x8EBAD2A3L,0UL,0x07670E18L,0x70B1168EL,0x87208B66L,1L},{0x97E2L,1L,0x8EBAD2A3L,0UL,0x07670E18L,0x70B1168EL,0x87208B66L,1L},{0x97E2L,1L,0x8EBAD2A3L,0UL,0x07670E18L,0x70B1168EL,0x87208B66L,1L},{0x97E2L,1L,0x8EBAD2A3L,0UL,0x07670E18L,0x70B1168EL,0x87208B66L,1L}};
            int i;
            (*g_2) = (*g_2);
            l_118 = l_117[4];
        }
    }
    else
    {
        struct S0 l_121 = {65535UL,0xE6FC7E2CL,0L,0xE99CA764L,0x65E8A440L,0x65D72AE1L,4294967295UL,0xB7D986BFL};
        g_79.f1 = (p_34 > p_34);
        for (l_80.f2 = 0; (l_80.f2 >= (-9)); l_80.f2 = safe_sub_func_int16_t_s_s(l_80.f2, 3))
        {
            struct S0 *l_122 = &g_59;
            if (p_34)
                break;
            (*l_122) = l_121;
        }
    }
    return g_59.f4;
}







static int func_35(char p_36)
{
    int *l_53 = (void*)0;
    int **l_54 = &g_2;
    (*l_54) = l_53;
    return g_8;
}







static unsigned func_46(int p_47, unsigned char p_48, unsigned short p_49)
{
    int l_52[6];
    int i;
    for (i = 0; i < 6; i++)
        l_52[i] = 9L;
    for (p_48 = 26; (p_48 >= 11); --p_48)
    {
        l_52[4] = (0xEE8FA1C1L <= p_47);
    }
    return l_52[4];
}





int main (void)
{
    int i;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_8, "g_8", print_hash_value);
    transparent_crc(g_26, "g_26", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_57[i], "g_57[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_59.f0, "g_59.f0", print_hash_value);
    transparent_crc(g_59.f1, "g_59.f1", print_hash_value);
    transparent_crc(g_59.f2, "g_59.f2", print_hash_value);
    transparent_crc(g_59.f3, "g_59.f3", print_hash_value);
    transparent_crc(g_59.f4, "g_59.f4", print_hash_value);
    transparent_crc(g_59.f5, "g_59.f5", print_hash_value);
    transparent_crc(g_59.f6, "g_59.f6", print_hash_value);
    transparent_crc(g_59.f7, "g_59.f7", print_hash_value);
    transparent_crc(g_79.f0, "g_79.f0", print_hash_value);
    transparent_crc(g_79.f1, "g_79.f1", print_hash_value);
    transparent_crc(g_79.f2, "g_79.f2", print_hash_value);
    transparent_crc(g_79.f3, "g_79.f3", print_hash_value);
    transparent_crc(g_79.f4, "g_79.f4", print_hash_value);
    transparent_crc(g_79.f5, "g_79.f5", print_hash_value);
    transparent_crc(g_79.f6, "g_79.f6", print_hash_value);
    transparent_crc(g_79.f7, "g_79.f7", print_hash_value);
    transparent_crc(g_255.f0, "g_255.f0", print_hash_value);
    transparent_crc(g_255.f1, "g_255.f1", print_hash_value);
    transparent_crc(g_255.f2, "g_255.f2", print_hash_value);
    transparent_crc(g_255.f3, "g_255.f3", print_hash_value);
    transparent_crc(g_255.f4, "g_255.f4", print_hash_value);
    transparent_crc(g_255.f5, "g_255.f5", print_hash_value);
    transparent_crc(g_255.f6, "g_255.f6", print_hash_value);
    transparent_crc(g_255.f7, "g_255.f7", print_hash_value);
    transparent_crc(g_265, "g_265", print_hash_value);
    transparent_crc(g_328.f0, "g_328.f0", print_hash_value);
    transparent_crc(g_328.f1, "g_328.f1", print_hash_value);
    transparent_crc(g_328.f2, "g_328.f2", print_hash_value);
    transparent_crc(g_328.f3, "g_328.f3", print_hash_value);
    transparent_crc(g_328.f4, "g_328.f4", print_hash_value);
    transparent_crc(g_328.f5, "g_328.f5", print_hash_value);
    transparent_crc(g_328.f6, "g_328.f6", print_hash_value);
    transparent_crc(g_328.f7, "g_328.f7", print_hash_value);
    transparent_crc(g_342, "g_342", print_hash_value);
    transparent_crc(g_352, "g_352", print_hash_value);
    transparent_crc(g_356, "g_356", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
