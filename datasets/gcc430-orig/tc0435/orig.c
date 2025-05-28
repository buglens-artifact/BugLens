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
   unsigned short f0;
   unsigned short f1;
   const char f2;
   int f3;
};


static const int g_8 = 2L;
static int g_13[10] = {0xBA028EA3L, 0L, 0xBA028EA3L, 0L, 0xBA028EA3L, 0L, 0xBA028EA3L, 0L, 0xBA028EA3L, 0L};
static int g_59 = 0xBC79A46BL;
static unsigned g_75 = 7UL;
static int *g_108 = (void*)0;
static int **g_107 = &g_108;
static int ***g_106 = &g_107;
static union U0 g_220 = {0UL};
static union U0 g_223[3] = {{0x023FL}, {0x023FL}, {0x023FL}};
static union U0 *g_222 = &g_223[2];
static unsigned short g_262 = 65535UL;
static int g_284 = 0xB41750E7L;
static union U0 g_337 = {65528UL};
static union U0 **g_373 = &g_222;
static union U0 ***g_372 = &g_373;



static unsigned func_1(void);
static const int * func_2(const int p_3, unsigned char p_4, int * p_5, char p_6, unsigned short p_7);
static unsigned short func_14(int * p_15, int p_16, int * p_17, unsigned p_18, int * p_19);
static int func_25(const int p_26, int p_27, unsigned p_28, int p_29);
static unsigned func_36(int * p_37, union U0 p_38, int * p_39, unsigned char p_40, short p_41);
static union U0 func_42(short p_43, unsigned p_44, int p_45, unsigned short p_46);
static int * func_47(unsigned short p_48, int p_49, int * const p_50);
static int * func_52(union U0 p_53, int p_54);
static unsigned func_65(int p_66, int * const p_67, int * p_68);
static int func_70(unsigned char p_71, int p_72);
static unsigned func_1(void)
{
    char l_11 = (-1L);
    int *l_12 = &g_13[8];
    const int *l_534 = &g_59;
    const int **l_533 = &l_534;
    union U0 **l_537 = (void*)0;
    const int l_541 = 0x422B1043L;
    unsigned char l_603 = 4UL;
    unsigned char l_604 = 247UL;
    unsigned short l_618 = 0x4D4AL;
    unsigned char l_641 = 0xA8L;
    unsigned short l_682 = 65527UL;
    (*l_533) = func_2(g_8, (0xA0B8EE41L | (safe_add_func_int16_t_s_s(g_8, (l_11 <= (-5L))))), l_12, (*l_12), g_13[3]);

    ;
    ;
    ;
    for (g_59 = 0; (g_59 != 23); g_59++)
    {
        const unsigned char l_538[3][10][6] = {{{0xCAL, 0x95L, 0x8DL, 0xC3L, 250UL, 0x6BL}, {0xCAL, 0x95L, 0x8DL, 0xC3L, 250UL, 0x6BL}, {0xCAL, 0x95L, 0x8DL, 0xC3L, 250UL, 0x6BL}, {0xCAL, 0x95L, 0x8DL, 0xC3L, 250UL, 0x6BL}, {0xCAL, 0x95L, 0x8DL, 0xC3L, 250UL, 0x6BL}, {0xCAL, 0x95L, 0x8DL, 0xC3L, 250UL, 0x6BL}, {0xCAL, 0x95L, 0x8DL, 0xC3L, 250UL, 0x6BL}, {0xCAL, 0x95L, 0x8DL, 0xC3L, 250UL, 0x6BL}, {0xCAL, 0x95L, 0x8DL, 0xC3L, 250UL, 0x6BL}, {0xCAL, 0x95L, 0x8DL, 0xC3L, 250UL, 0x6BL}}, {{0xCAL, 0x95L, 0x8DL, 0xC3L, 250UL, 0x6BL}, {0xCAL, 0x95L, 0x8DL, 0xC3L, 250UL, 0x6BL}, {0xCAL, 0x95L, 0x8DL, 0xC3L, 250UL, 0x6BL}, {0xCAL, 0x95L, 0x8DL, 0xC3L, 250UL, 0x6BL}, {0xCAL, 0x95L, 0x8DL, 0xC3L, 250UL, 0x6BL}, {0xCAL, 0x95L, 0x8DL, 0xC3L, 250UL, 0x6BL}, {0xCAL, 0x95L, 0x8DL, 0xC3L, 250UL, 0x6BL}, {0xCAL, 0x95L, 0x8DL, 0xC3L, 250UL, 0x6BL}, {0xCAL, 0x95L, 0x8DL, 0xC3L, 250UL, 0x6BL}, {0xCAL, 0x95L, 0x8DL, 0xC3L, 250UL, 0x6BL}}, {{0xCAL, 0x95L, 0x8DL, 0xC3L, 250UL, 0x6BL}, {0xCAL, 0x95L, 0x8DL, 0xC3L, 250UL, 0x6BL}, {0xCAL, 0x95L, 0x8DL, 0xC3L, 250UL, 0x6BL}, {0xCAL, 0x95L, 0x8DL, 0xC3L, 250UL, 0x6BL}, {0xCAL, 0x95L, 0x8DL, 0xC3L, 250UL, 0x6BL}, {0xCAL, 0x95L, 0x8DL, 0xC3L, 250UL, 0x6BL}, {0xCAL, 0x95L, 0x8DL, 0xC3L, 250UL, 0x6BL}, {0xCAL, 0x95L, 0x8DL, 0xC3L, 250UL, 0x6BL}, {0xCAL, 0x95L, 0x8DL, 0xC3L, 250UL, 0x6BL}, {0xCAL, 0x95L, 0x8DL, 0xC3L, 250UL, 0x6BL}}};
        int *l_574 = &g_59;
        short l_575 = 0xEC8BL;
        union U0 *l_622[1];
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_622[i] = &g_223[2];
        l_537 = l_537;
        if ((g_223[2].f1 ^ ((g_223[2].f2 < func_25(l_538[1][0][2], l_538[2][4][3], l_538[0][8][4], (((g_262 & ((!1UL) != g_337.f0)) >= (g_284 > 0xB7L)) != 0L))) < 0UL)))
        {
            const int l_542 = 0L;
            int l_543 = 1L;
            int **l_571 = (void*)0;
            int *l_584 = &g_284;
            for (g_220.f3 = 0; (g_220.f3 != 22); g_220.f3 = safe_add_func_uint16_t_u_u(g_220.f3, 6))
            {
                unsigned short l_554[7][1][2] = {{{0xDD84L, 0x1283L}}, {{0xDD84L, 0x1283L}}, {{0xDD84L, 0x1283L}}, {{0xDD84L, 0x1283L}}, {{0xDD84L, 0x1283L}}, {{0xDD84L, 0x1283L}}, {{0xDD84L, 0x1283L}}};
                int i, j, k;
            }

        }
        else
        {
            unsigned short l_586 = 0x950AL;
            union U0 *l_589 = &g_220;
            int ***l_610 = &g_107;
            char l_632 = 0x5CL;
            unsigned l_663 = 0xC54E68D0L;
            unsigned l_664 = 0x87253B63L;
            if ((*l_574))
                break;
            (*l_12) = (l_586 && g_223[2].f2);
            if ((safe_lshift_func_int16_t_s_s(((*g_373) != l_589), 1)))
            {
                int l_602 = (-5L);
                short l_619[9][9][1] = {{{(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}}, {{(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}}, {{(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}}, {{(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}}, {{(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}}, {{(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}}, {{(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}}, {{(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}}, {{(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}}};
                int i, j, k;
                (*l_12) = (safe_mod_func_int32_t_s_s(func_25(func_25((((safe_lshift_func_uint16_t_u_s(((safe_add_func_int8_t_s_s((safe_mod_func_int8_t_s_s(0x69L, func_25((*l_574), (safe_sub_func_int8_t_s_s((((func_25(l_586, g_337.f2, (!(safe_rshift_func_int8_t_s_u(l_586, 0))), l_602) & ((void*)0 == (**g_372))) >= (*l_574)) < (*l_574)), (-4L))), g_223[2].f1, (*l_574)))), (*l_574))) & l_586), 3)) ^ (*l_574)) > g_220.f1), g_223[2].f0, l_603, g_59), (*l_534), l_604, (*l_574)), g_223[2].f2));
                if (((safe_rshift_func_int8_t_s_u(l_586, 5)) && (**l_533)))
                {
                    int *l_607[8] = {&g_284, &g_284, &g_284, &g_284, &g_284, &g_284, &g_284, &g_284};
                    char l_620[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_620[i] = 0x08L;
                    if ((*l_534))
                    {
                        int *l_617 = &g_284;
                        l_574 = l_607[3];

                        ;
                        l_619[0][4][0] = func_25(l_586, l_586, g_223[2].f0, (safe_add_func_int32_t_s_s((l_610 != &g_107), (((g_59 && g_262) < (safe_lshift_func_uint8_t_u_s((safe_sub_func_uint8_t_u_u(((*l_574) == (safe_sub_func_uint32_t_u_u(((void*)0 == l_617), g_220.f2))), g_13[8])), 5))) || l_618))));
                        if (l_620[1])
                            break;
                    }
                    else
                    {
                        int l_621 = 0x42CD2C7FL;
                        if ((*l_12))
                            break;
                        if (l_621)
                            continue;
                    }

                    ;
                    (**g_372) = l_622[0];

                    ;
                    if ((*l_574))
                        break;
                }
                else
                {
                    const unsigned char l_629[8] = {0x7BL, 0x7BL, 0xA6L, 0x7BL, 0x7BL, 0xA6L, 0x7BL, 0x7BL};
                    int i;
                    for (g_262 = 15; (g_262 > 8); --g_262)
                    {
                        (*l_12) = ((safe_sub_func_uint16_t_u_u((safe_div_func_uint16_t_u_u(func_25(l_629[5], g_8, l_629[5], (((+(4294967288UL == 0UL)) == (g_220.f0 >= (safe_div_func_int32_t_s_s((g_59 & 2UL), (g_220.f2 && (*l_534)))))) | (*l_574))), 65534UL)), g_223[2].f1)) <= 0x60D9B660L);
                    }
                    return l_632;
                }

                ;
                ;
            }
            else
            {
                int *l_637 = &g_284;
                for (g_220.f0 = 16; (g_220.f0 != 31); g_220.f0 = safe_add_func_int16_t_s_s(g_220.f0, 4))
                {
                    const int l_640 = (-4L);
                    const int l_648 = 3L;
                    for (l_604 = 0; (l_604 >= 39); l_604 = safe_add_func_uint8_t_u_u(l_604, 1))
                    {
                        (**g_106) = l_637;

                        ;
                        (***l_610) = (*l_574);
                        (**g_372) = (**g_372);
                        if ((*l_637))
                            break;
                    }


                    if ((safe_mod_func_int16_t_s_s(func_25((*l_12), (*l_574), (func_25(l_640, (1UL <= func_25((*l_534), (l_622[0] == (void*)0), (l_632 <= l_641), (*l_574))), g_223[2].f0, l_640) ^ g_262), (*l_534)), (*l_574))))
                    {
                        short l_642[5] = {0x3B14L, (-9L), 0x3B14L, (-9L), 0x3B14L};
                        int i;
                        (*g_106) = (*g_106);
                        (*g_107) = func_47(l_640, l_642[4], l_12);

                        ;
                        (**g_106) = func_47((***l_610), (*l_574), l_637);
                    }
                    else
                    {
                        int *l_647 = &g_13[8];
                        int l_649 = 0xE056D7D8L;
                        (*l_12) = (func_25((((safe_rshift_func_int8_t_s_s(func_25(func_25((safe_div_func_int32_t_s_s((255UL & g_337.f1), ((l_647 != l_574) && (0UL | g_284)))), (((g_220.f0 <= g_223[2].f1) < ((+l_648) < l_649)) == 0xE5L), g_223[2].f0, l_640), l_648, g_220.f2, (*l_574)), 5)) == 0x86C4FEB4L) | l_640), (*l_637), g_220.f0, (*l_647)) <= g_59);
                        (*l_12) = ((((safe_add_func_uint8_t_u_u((safe_sub_func_int32_t_s_s((((safe_unary_minus_func_uint8_t_u(((((*g_106) == &l_647) < (((g_220.f1 != ((safe_div_func_int8_t_s_s(((*l_574) <= (safe_add_func_int8_t_s_s((**l_533), func_25(((safe_rshift_func_uint8_t_u_u((*l_574), 1)) || l_640), (safe_sub_func_uint16_t_u_u((~((l_648 > (*l_12)) & 4L)), (-9L))), l_663, (*l_574))))), g_8)) & g_262)) >= g_8) <= g_223[2].f2)) < g_59))) == g_13[8]) && (*l_637)), (**l_533))), 0xA9L)) > (*l_647)) ^ l_664) > 0x24L);
                    }


                }
                for (g_220.f0 = 0; (g_220.f0 <= 30); g_220.f0 = safe_add_func_uint16_t_u_u(g_220.f0, 6))
                {
                    int * const l_669 = &g_59;
                    (**g_106) = func_47(g_220.f0, (safe_div_func_int16_t_s_s(0xDBDAL, g_337.f0)), l_669);

                    ;
                    (*l_637) = ((~0L) && (((((*l_574) | ((safe_sub_func_int8_t_s_s(0xFBL, (safe_lshift_func_uint16_t_u_s(g_337.f0, (***l_610))))) ^ ((**l_533) >= (g_337.f2 ^ (safe_mod_func_int16_t_s_s(g_337.f0, (*l_637))))))) || (***l_610)) > (*l_534)) == (-1L)));
                    (*l_637) = (safe_sub_func_int16_t_s_s(func_25((**g_107), (safe_lshift_func_uint16_t_u_u((***l_610), ((safe_rshift_func_int16_t_s_u(l_682, 3)) == g_220.f1))), g_220.f1, ((*l_533) == (void*)0)), (safe_add_func_uint8_t_u_u((&g_107 != (void*)0), l_632))));


                    (*l_12) = 0xD6133223L;
                }
                if ((*l_574))
                    break;
            }

            ;
        }


        ;
    }


    return g_337.f2;
}







static const int * func_2(const int p_3, unsigned char p_4, int * p_5, char p_6, unsigned short p_7)
{
    short l_20 = 0x6E3EL;
    int *l_21 = &g_13[8];
    int *l_22[6] = {&g_13[8], &g_13[8], &g_13[8], &g_13[8], &g_13[8], &g_13[8]};
    union U0 *l_524[4][2][6] = {{{&g_220, &g_223[0], &g_223[2], &g_223[0], &g_223[2], &g_223[0]}, {&g_220, &g_223[0], &g_223[2], &g_223[0], &g_223[2], &g_223[0]}}, {{&g_220, &g_223[0], &g_223[2], &g_223[0], &g_223[2], &g_223[0]}, {&g_220, &g_223[0], &g_223[2], &g_223[0], &g_223[2], &g_223[0]}}, {{&g_220, &g_223[0], &g_223[2], &g_223[0], &g_223[2], &g_223[0]}, {&g_220, &g_223[0], &g_223[2], &g_223[0], &g_223[2], &g_223[0]}}, {{&g_220, &g_223[0], &g_223[2], &g_223[0], &g_223[2], &g_223[0]}, {&g_220, &g_223[0], &g_223[2], &g_223[0], &g_223[2], &g_223[0]}}};
    int i, j, k;
    (*l_21) = (func_14(&g_13[8], l_20, p_5, ((l_21 != l_22[2]) && (safe_rshift_func_uint8_t_u_s(0xAEL, (&g_13[8] != &g_13[3])))), &g_13[8]) != g_8);

    ;
    ;
    for (g_337.f0 = 0; (g_337.f0 > 34); g_337.f0 = safe_add_func_uint16_t_u_u(g_337.f0, 2))
    {
        unsigned l_521[6] = {4294967295UL, 4294967295UL, 0UL, 4294967295UL, 4294967295UL, 0UL};
        int *l_523 = (void*)0;
        union U0 l_525 = {1UL};
        int *l_532[1][4][7] = {{{&g_59, &g_59, &g_59, &g_59, &g_59, &g_59, &g_59}, {&g_59, &g_59, &g_59, &g_59, &g_59, &g_59, &g_59}, {&g_59, &g_59, &g_59, &g_59, &g_59, &g_59, &g_59}, {&g_59, &g_59, &g_59, &g_59, &g_59, &g_59, &g_59}}};
        int i, j, k;
    }
    return p_5;


}







static unsigned short func_14(int * p_15, int p_16, int * p_17, unsigned p_18, int * p_19)
{
    int *l_409 = (void*)0;
    int l_513 = 1L;
    if (func_25((safe_div_func_uint16_t_u_u((0xCF0AL ^ (safe_div_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u(((func_36(&g_13[2], func_42(p_16, p_16, (*p_19), (0x0B25631CL & 0xAC8C6DCFL)), l_409, g_284, g_8) < g_8) && 0x76L), (-1L))), l_513))), p_18)), g_8, p_18, l_513))
    {
        (*g_107) = &g_59;

        ;
    }
    else
    {
        char l_518 = 0xBFL;
        (*p_19) = l_518;
        (*p_15) = (*p_19);
        (*g_107) = (void*)0;

        ;
    }

    ;
    ;
    return g_337.f1;
}







static int func_25(const int p_26, int p_27, unsigned p_28, int p_29)
{
    int l_516 = (-1L);
    (**g_106) = &p_29;

    ;
    for (g_337.f0 = 0; (g_337.f0 < 23); g_337.f0 = safe_add_func_int32_t_s_s(g_337.f0, 7))
    {
        int l_517 = 0x552F0B21L;
        (**g_106) = func_47((l_516 >= l_517), (**g_107), &p_29);

        ;
    }

    ;
    return p_28;


}







static unsigned func_36(int * p_37, union U0 p_38, int * p_39, unsigned char p_40, short p_41)
{
    int l_439 = 0L;
    union U0 **l_440 = &g_222;
    int l_506[6][4] = {{0xDC58E0FBL, 0x26083F5EL, (-1L), 1L}, {0xDC58E0FBL, 0x26083F5EL, (-1L), 1L}, {0xDC58E0FBL, 0x26083F5EL, (-1L), 1L}, {0xDC58E0FBL, 0x26083F5EL, (-1L), 1L}, {0xDC58E0FBL, 0x26083F5EL, (-1L), 1L}, {0xDC58E0FBL, 0x26083F5EL, (-1L), 1L}};
    int i, j;
    for (p_40 = 18; (p_40 >= 55); p_40++)
    {
        unsigned l_416 = 0x4B5438F7L;
        for (g_337.f3 = 0; (g_337.f3 <= (-12)); g_337.f3 = safe_sub_func_uint16_t_u_u(g_337.f3, 8))
        {
            int *l_422[10] = {&g_284, &g_284, &g_13[8], &g_284, &g_284, &g_13[8], &g_284, &g_284, &g_13[8], &g_284};
            int i;
            for (g_220.f1 = (-21); (g_220.f1 > 33); g_220.f1 = safe_add_func_int16_t_s_s(g_220.f1, 7))
            {
                return l_416;
            }

            (**g_106) = p_37;

            ;
            for (g_220.f1 = 1; (g_220.f1 <= 9); g_220.f1 += 1)
            {
                union U0 ***l_419 = &g_373;
                int i;
                g_13[g_220.f1] = ((safe_rshift_func_uint8_t_u_s(((((void*)0 != l_419) >= (safe_mod_func_int8_t_s_s(0xA0L, (g_13[g_220.f1] || g_59)))) <= p_40), 2)) & g_223[2].f0);
            }
            l_422[5] = p_39;


        }

        (*p_37) = (*p_37);
    }
    for (p_38.f0 = 0; (p_38.f0 <= 47); p_38.f0 = safe_add_func_uint8_t_u_u(p_38.f0, 1))
    {
        const unsigned l_435 = 0xC16B0B2AL;
        int *l_466[9][10] = {{&g_59, (void*)0, &g_13[8], &g_13[8], (void*)0, (void*)0, &g_13[8], &g_13[8], (void*)0, &g_59}, {&g_59, (void*)0, &g_13[8], &g_13[8], (void*)0, (void*)0, &g_13[8], &g_13[8], (void*)0, &g_59}, {&g_59, (void*)0, &g_13[8], &g_13[8], (void*)0, (void*)0, &g_13[8], &g_13[8], (void*)0, &g_59}, {&g_59, (void*)0, &g_13[8], &g_13[8], (void*)0, (void*)0, &g_13[8], &g_13[8], (void*)0, &g_59}, {&g_59, (void*)0, &g_13[8], &g_13[8], (void*)0, (void*)0, &g_13[8], &g_13[8], (void*)0, &g_59}, {&g_59, (void*)0, &g_13[8], &g_13[8], (void*)0, (void*)0, &g_13[8], &g_13[8], (void*)0, &g_59}, {&g_59, (void*)0, &g_13[8], &g_13[8], (void*)0, (void*)0, &g_13[8], &g_13[8], (void*)0, &g_59}, {&g_59, (void*)0, &g_13[8], &g_13[8], (void*)0, (void*)0, &g_13[8], &g_13[8], (void*)0, &g_59}, {&g_59, (void*)0, &g_13[8], &g_13[8], (void*)0, (void*)0, &g_13[8], &g_13[8], (void*)0, &g_59}};
        union U0 *l_486[7];
        int i, j;
        for (i = 0; i < 7; i++)
            l_486[i] = &g_337;
        for (g_75 = 0; (g_75 == 37); g_75 = safe_add_func_uint8_t_u_u(g_75, 4))
        {
            short l_434 = 0x05CCL;
            int *l_436[8];
            union U0 **l_482[5][6] = {{(void*)0, &g_222, (void*)0, &g_222, (void*)0, &g_222}, {(void*)0, &g_222, (void*)0, &g_222, (void*)0, &g_222}, {(void*)0, &g_222, (void*)0, &g_222, (void*)0, &g_222}, {(void*)0, &g_222, (void*)0, &g_222, (void*)0, &g_222}, {(void*)0, &g_222, (void*)0, &g_222, (void*)0, &g_222}};
            int i, j;
            for (i = 0; i < 8; i++)
                l_436[i] = &g_223[2].f3;
            for (g_337.f3 = 0; (g_337.f3 == (-1)); g_337.f3 = safe_sub_func_int8_t_s_s(g_337.f3, 1))
            {
                for (g_262 = 0; (g_262 <= 46); g_262++)
                {
                    int l_433 = 0xFA915693L;
                    for (p_41 = 22; (p_41 > 20); p_41--)
                    {
                        l_433 = (4294967295UL > (*p_37));
                    }
                }
            }

            if (l_434)
                break;
            (*p_37) = l_435;
            for (g_220.f3 = 7; (g_220.f3 >= 0); g_220.f3 -= 1)
            {
                int **l_480[5][3][2] = {{{&l_466[4][3], &g_108}, {&l_466[4][3], &g_108}, {&l_466[4][3], &g_108}}, {{&l_466[4][3], &g_108}, {&l_466[4][3], &g_108}, {&l_466[4][3], &g_108}}, {{&l_466[4][3], &g_108}, {&l_466[4][3], &g_108}, {&l_466[4][3], &g_108}}, {{&l_466[4][3], &g_108}, {&l_466[4][3], &g_108}, {&l_466[4][3], &g_108}}, {{&l_466[4][3], &g_108}, {&l_466[4][3], &g_108}, {&l_466[4][3], &g_108}}};
                int i, j, k;
                for (g_262 = 0; (g_262 <= 9); g_262 += 1)
                {
                    int i;
                    (*g_107) = &g_13[g_220.f3];

                    ;
                    l_436[4] = p_37;
                }
                for (p_41 = 0; p_41 < 8; p_41 += 1)
                {
                    l_436[p_41] = (void*)0;
                }
                if ((safe_sub_func_uint32_t_u_u(9UL, (l_439 <= ((void*)0 != l_440)))))
                {
                    const int l_463 = 0x4B1261ABL;
                    for (g_337.f0 = 0; (g_337.f0 <= 9); g_337.f0 += 1)
                    {
                        int i;
                        (*g_107) = p_39;

                        ;
                        g_13[g_337.f0] = (safe_rshift_func_int16_t_s_u(((safe_mod_func_uint8_t_u_u((safe_sub_func_int16_t_s_s(((((safe_lshift_func_uint16_t_u_s(g_220.f1, p_41)) | (safe_rshift_func_uint16_t_u_s(((safe_lshift_func_uint8_t_u_u(l_435, 6)) <= p_41), 14))) || (safe_sub_func_int8_t_s_s((((safe_add_func_int32_t_s_s((*p_37), (safe_sub_func_int8_t_s_s(((void*)0 == &g_373), ((safe_add_func_int8_t_s_s(3L, (safe_add_func_uint8_t_u_u((p_39 != (**g_106)), g_220.f1)))) >= g_59))))) | 1L) <= l_439), 0x3CL))) != l_463), g_59)), p_38.f2)) & (*p_37)), l_463));
                    }
                    for (l_439 = 0; (l_439 == 23); l_439++)
                    {
                        (*g_107) = p_37;

                        ;
                        (*p_37) = (*g_108);
                    }
                    (*g_107) = l_466[4][3];

                    ;
                }
                else
                {
                    short l_467 = 0x6340L;
                    int l_481 = (-2L);
                    union U0 **l_483 = &g_222;
                    (*p_37) = ((l_467 >= ((0xF495L ^ ((safe_lshift_func_uint16_t_u_s((g_337.f2 & 0x2A41L), 3)) < ((safe_rshift_func_int16_t_s_s((safe_mod_func_int32_t_s_s(l_439, (safe_sub_func_uint32_t_u_u((safe_sub_func_uint32_t_u_u((safe_mod_func_int32_t_s_s(((**g_372) != (void*)0), (*p_37))), ((*p_37) == (*p_37)))), l_439)))), g_75)) ^ 0x98L))) < 0x9C4AL)) >= l_439);
                    l_480[3][2][0] = &p_37;


                    if ((*p_37))
                    {
                        (*p_37) = l_439;
                        (*g_372) = l_440;
                        l_481 = 0x5594C27AL;
                        (*p_37) = (l_482[0][0] == l_483);
                    }
                    else
                    {
                        (**g_106) = p_39;

                        ;
                        if (l_439)
                            break;
                        return p_38.f1;
                    }
                }



                (*g_107) = p_39;

                ;
            }


        }
        for (g_337.f1 = 0; (g_337.f1 <= 8); g_337.f1 += 1)
        {
            int i;
            (*p_37) = ((g_13[g_337.f1] > g_223[2].f2) | (+1UL));
            return g_223[2].f0;
        }

        if ((0x51D7ED9AL > l_439))
        {
            for (p_41 = 0; (p_41 != (-5)); p_41 = safe_sub_func_uint32_t_u_u(p_41, 3))
            {
                (**g_106) = l_466[0][0];

                ;
                if (l_439)
                    break;
            }


            (*g_107) = (void*)0;

            ;
            (**g_106) = (*g_107);
            (*g_373) = l_486[5];

            ;
        }
        else
        {
            int l_491 = 0x499EF2F5L;
            int *l_504 = (void*)0;
            int l_505 = 0x545C5981L;
            for (g_59 = 7; (g_59 >= (-5)); --g_59)
            {
                for (g_262 = 29; (g_262 == 28); g_262 = safe_sub_func_int8_t_s_s(g_262, 1))
                {
                    g_13[8] = l_491;
                    (**g_106) = (void*)0;

                    ;
                    (*p_37) = (((&p_38 != (void*)0) || 0x6664D94EL) ^ 6UL);
                }
                (*p_37) = ((safe_lshift_func_int16_t_s_s((g_59 | (((safe_div_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u(p_38.f0, (safe_mod_func_uint16_t_u_u((safe_add_func_uint32_t_u_u(((safe_lshift_func_uint16_t_u_s(((void*)0 == (*g_106)), 3)) ^ 0L), g_223[2].f2)), p_40)))), g_223[2].f0)) < (*p_37)) > p_38.f0)), g_220.f1)) ^ p_41);
                (*g_107) = func_47((l_440 == l_440), (*p_37), p_39);

                ;
                (**g_106) = l_504;

                ;
            }
            if (l_491)
                continue;
            l_506[5][0] = l_505;
        }
        for (p_40 = 0; (p_40 <= 3); p_40 += 1)
        {
            int i, j;
            l_506[(p_40 + 2)][p_40] = ((((0x7CL == (safe_rshift_func_uint8_t_u_s(255UL, 4))) ^ ((*g_373) == (void*)0)) >= (safe_rshift_func_uint16_t_u_u((safe_add_func_int16_t_s_s(l_506[(p_40 + 1)][p_40], 0UL)), ((~g_337.f2) < (*p_37))))) > p_40);
        }
    }

    ;
    (*g_107) = &l_506[4][3];

    ;
    return g_284;


}







static union U0 func_42(short p_43, unsigned p_44, int p_45, unsigned short p_46)
{
    short l_51 = 0L;
    union U0 l_55[6] = {{1UL}, {1UL}, {1UL}, {1UL}, {1UL}, {1UL}};
    int *l_366 = &l_55[5].f3;
    union U0 ***l_374 = &g_373;
    int l_379[7][7];
    int i, j;
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 7; j++)
            l_379[i][j] = 4L;
    }
    l_366 = func_47(((+(g_13[8] == p_43)) <= g_8), l_51, func_52(l_55[5], p_44));


    ;
    for (p_43 = 0; (p_43 <= 9); p_43 += 1)
    {
        unsigned l_367 = 1UL;
        unsigned char l_403 = 0x7AL;
        int i;
        g_13[p_43] = (+l_367);
        g_13[p_43] = (safe_mod_func_int16_t_s_s(((safe_lshift_func_int16_t_s_s(((g_372 == l_374) ^ (safe_mod_func_uint8_t_u_u(g_8, 0x62L))), (((void*)0 == &g_13[p_43]) >= (l_367 | ((safe_rshift_func_uint16_t_u_u((p_43 != (-5L)), g_220.f2)) >= g_59))))) > (*l_366)), l_379[2][2]));
        if (((p_44 && ((safe_div_func_int32_t_s_s(p_46, (safe_add_func_uint16_t_u_u(1UL, (65535UL > (((*l_366) != g_220.f1) == (((&g_107 == (void*)0) & ((*l_366) && g_337.f0)) > (*l_366)))))))) > p_46)) || 0xBF575D46L))
        {
            int *l_386 = &l_379[2][1];
            for (p_45 = 0; (p_45 <= 6); p_45 += 1)
            {
                int i, j;
                l_379[p_45][p_45] = l_379[p_45][p_45];
            }
            (**g_106) = l_386;

            ;
        }
        else
        {
            char l_397[3][9][4] = {{{0xC5L, 0x3CL, (-1L), 7L}, {0xC5L, 0x3CL, (-1L), 7L}, {0xC5L, 0x3CL, (-1L), 7L}, {0xC5L, 0x3CL, (-1L), 7L}, {0xC5L, 0x3CL, (-1L), 7L}, {0xC5L, 0x3CL, (-1L), 7L}, {0xC5L, 0x3CL, (-1L), 7L}, {0xC5L, 0x3CL, (-1L), 7L}, {0xC5L, 0x3CL, (-1L), 7L}}, {{0xC5L, 0x3CL, (-1L), 7L}, {0xC5L, 0x3CL, (-1L), 7L}, {0xC5L, 0x3CL, (-1L), 7L}, {0xC5L, 0x3CL, (-1L), 7L}, {0xC5L, 0x3CL, (-1L), 7L}, {0xC5L, 0x3CL, (-1L), 7L}, {0xC5L, 0x3CL, (-1L), 7L}, {0xC5L, 0x3CL, (-1L), 7L}, {0xC5L, 0x3CL, (-1L), 7L}}, {{0xC5L, 0x3CL, (-1L), 7L}, {0xC5L, 0x3CL, (-1L), 7L}, {0xC5L, 0x3CL, (-1L), 7L}, {0xC5L, 0x3CL, (-1L), 7L}, {0xC5L, 0x3CL, (-1L), 7L}, {0xC5L, 0x3CL, (-1L), 7L}, {0xC5L, 0x3CL, (-1L), 7L}, {0xC5L, 0x3CL, (-1L), 7L}, {0xC5L, 0x3CL, (-1L), 7L}}};
            int l_398[4][5] = {{0L, 0L, 0x4BE91178L, 0L, 0L}, {0L, 0L, 0x4BE91178L, 0L, 0L}, {0L, 0L, 0x4BE91178L, 0L, 0L}, {0L, 0L, 0x4BE91178L, 0L, 0L}};
            union U0 l_408 = {0UL};
            int i, j, k;
            if ((safe_rshift_func_uint16_t_u_u((((safe_lshift_func_uint16_t_u_u(g_220.f0, p_44)) < p_45) < (((safe_div_func_int16_t_s_s(l_367, (safe_lshift_func_int16_t_s_u(p_45, 10)))) ^ p_44) > ((+(safe_sub_func_int32_t_s_s((-1L), p_46))) != p_46))), 9)))
            {
                (*g_106) = (*g_106);
                l_398[2][4] = l_397[2][6][0];
            }
            else
            {
                int * const l_404[9][4] = {{&g_13[3], &l_379[2][2], &g_13[5], &l_398[0][2]}, {&g_13[3], &l_379[2][2], &g_13[5], &l_398[0][2]}, {&g_13[3], &l_379[2][2], &g_13[5], &l_398[0][2]}, {&g_13[3], &l_379[2][2], &g_13[5], &l_398[0][2]}, {&g_13[3], &l_379[2][2], &g_13[5], &l_398[0][2]}, {&g_13[3], &l_379[2][2], &g_13[5], &l_398[0][2]}, {&g_13[3], &l_379[2][2], &g_13[5], &l_398[0][2]}, {&g_13[3], &l_379[2][2], &g_13[5], &l_398[0][2]}, {&g_13[3], &l_379[2][2], &g_13[5], &l_398[0][2]}};
                int *l_405 = &l_379[3][5];
                int i, j;
                (*l_405) = (g_75 > p_43);
                if ((safe_add_func_int16_t_s_s(g_220.f0, p_43)))
                {
                    for (g_337.f3 = 0; (g_337.f3 <= 2); g_337.f3 += 1)
                    {
                        return l_408;


                                            }

                }
                else
                {
                    return (***l_374);


                                    }

            }
            for (p_45 = 0; p_45 < 3; p_45 += 1)
            {
                for (l_403 = 0; l_403 < 9; l_403 += 1)
                {
                    for (g_337.f3 = 0; g_337.f3 < 4; g_337.f3 += 1)
                    {
                        l_397[p_45][l_403][g_337.f3] = 0x27L;
                    }
                }
            }
        }
        (*l_366) = (-8L);
    }


    (*l_366) = p_45;
    for (g_220.f3 = 3; (g_220.f3 <= 9); g_220.f3 += 1)
    {
        return (***l_374);


            }

    return (***l_374);


    }







static int * func_47(unsigned short p_48, int p_49, int * const p_50)
{
    union U0 *l_363 = (void*)0;
    int *l_365 = &g_59;
    for (g_75 = (-1); (g_75 > 29); g_75++)
    {
        union U0 **l_364 = &l_363;
        (*l_364) = l_363;
        (*g_107) = &p_49;

        ;
        return l_365;



    }
    return l_365;


}







static int * func_52(union U0 p_53, int p_54)
{
    short l_58[5][7] = {{0x6042L, 0xB0B8L, 0x6042L, 0xB0B8L, 0x6042L, 0xB0B8L, 0x6042L}, {0x6042L, 0xB0B8L, 0x6042L, 0xB0B8L, 0x6042L, 0xB0B8L, 0x6042L}, {0x6042L, 0xB0B8L, 0x6042L, 0xB0B8L, 0x6042L, 0xB0B8L, 0x6042L}, {0x6042L, 0xB0B8L, 0x6042L, 0xB0B8L, 0x6042L, 0xB0B8L, 0x6042L}, {0x6042L, 0xB0B8L, 0x6042L, 0xB0B8L, 0x6042L, 0xB0B8L, 0x6042L}};
    int *l_359 = &g_13[8];
    int *l_360 = &g_13[8];
    int i, j;
    for (p_53.f0 = 0; (p_53.f0 <= 29); ++p_53.f0)
    {
        int *l_69[2];
        int i;
        for (i = 0; i < 2; i++)
            l_69[i] = (void*)0;
        for (p_54 = 0; p_54 < 5; p_54 += 1)
        {
            for (g_59 = 0; g_59 < 7; g_59 += 1)
            {
                l_58[p_54][g_59] = 0x18ADL;
            }
        }
        g_223[2].f3 = ((p_53.f0 == (safe_add_func_uint16_t_u_u((p_54 & (~(safe_unary_minus_func_int16_t_s((safe_add_func_uint32_t_u_u(func_65(p_53.f1, &g_59, l_69[0]), p_53.f2)))))), g_337.f0))) ^ (+(safe_rshift_func_int16_t_s_u(p_53.f0, 6))));


        (*g_107) = l_359;

        ;
    }
    return l_360;


}







static unsigned func_65(int p_66, int * const p_67, int * p_68)
{
    const int l_245 = (-1L);
    unsigned l_246 = 0x5AB7BA45L;
    unsigned l_248[6][5][8] = {{{0UL, 0x644EE2E7L, 0UL, 4294967295UL, 2UL, 0xEC70156CL, 4294967295UL, 0UL}, {0UL, 0x644EE2E7L, 0UL, 4294967295UL, 2UL, 0xEC70156CL, 4294967295UL, 0UL}, {0UL, 0x644EE2E7L, 0UL, 4294967295UL, 2UL, 0xEC70156CL, 4294967295UL, 0UL}, {0UL, 0x644EE2E7L, 0UL, 4294967295UL, 2UL, 0xEC70156CL, 4294967295UL, 0UL}, {0UL, 0x644EE2E7L, 0UL, 4294967295UL, 2UL, 0xEC70156CL, 4294967295UL, 0UL}}, {{0UL, 0x644EE2E7L, 0UL, 4294967295UL, 2UL, 0xEC70156CL, 4294967295UL, 0UL}, {0UL, 0x644EE2E7L, 0UL, 4294967295UL, 2UL, 0xEC70156CL, 4294967295UL, 0UL}, {0UL, 0x644EE2E7L, 0UL, 4294967295UL, 2UL, 0xEC70156CL, 4294967295UL, 0UL}, {0UL, 0x644EE2E7L, 0UL, 4294967295UL, 2UL, 0xEC70156CL, 4294967295UL, 0UL}, {0UL, 0x644EE2E7L, 0UL, 4294967295UL, 2UL, 0xEC70156CL, 4294967295UL, 0UL}}, {{0UL, 0x644EE2E7L, 0UL, 4294967295UL, 2UL, 0xEC70156CL, 4294967295UL, 0UL}, {0UL, 0x644EE2E7L, 0UL, 4294967295UL, 2UL, 0xEC70156CL, 4294967295UL, 0UL}, {0UL, 0x644EE2E7L, 0UL, 4294967295UL, 2UL, 0xEC70156CL, 4294967295UL, 0UL}, {0UL, 0x644EE2E7L, 0UL, 4294967295UL, 2UL, 0xEC70156CL, 4294967295UL, 0UL}, {0UL, 0x644EE2E7L, 0UL, 4294967295UL, 2UL, 0xEC70156CL, 4294967295UL, 0UL}}, {{0UL, 0x644EE2E7L, 0UL, 4294967295UL, 2UL, 0xEC70156CL, 4294967295UL, 0UL}, {0UL, 0x644EE2E7L, 0UL, 4294967295UL, 2UL, 0xEC70156CL, 4294967295UL, 0UL}, {0UL, 0x644EE2E7L, 0UL, 4294967295UL, 2UL, 0xEC70156CL, 4294967295UL, 0UL}, {0UL, 0x644EE2E7L, 0UL, 4294967295UL, 2UL, 0xEC70156CL, 4294967295UL, 0UL}, {0UL, 0x644EE2E7L, 0UL, 4294967295UL, 2UL, 0xEC70156CL, 4294967295UL, 0UL}}, {{0UL, 0x644EE2E7L, 0UL, 4294967295UL, 2UL, 0xEC70156CL, 4294967295UL, 0UL}, {0UL, 0x644EE2E7L, 0UL, 4294967295UL, 2UL, 0xEC70156CL, 4294967295UL, 0UL}, {0UL, 0x644EE2E7L, 0UL, 4294967295UL, 2UL, 0xEC70156CL, 4294967295UL, 0UL}, {0UL, 0x644EE2E7L, 0UL, 4294967295UL, 2UL, 0xEC70156CL, 4294967295UL, 0UL}, {0UL, 0x644EE2E7L, 0UL, 4294967295UL, 2UL, 0xEC70156CL, 4294967295UL, 0UL}}, {{0UL, 0x644EE2E7L, 0UL, 4294967295UL, 2UL, 0xEC70156CL, 4294967295UL, 0UL}, {0UL, 0x644EE2E7L, 0UL, 4294967295UL, 2UL, 0xEC70156CL, 4294967295UL, 0UL}, {0UL, 0x644EE2E7L, 0UL, 4294967295UL, 2UL, 0xEC70156CL, 4294967295UL, 0UL}, {0UL, 0x644EE2E7L, 0UL, 4294967295UL, 2UL, 0xEC70156CL, 4294967295UL, 0UL}, {0UL, 0x644EE2E7L, 0UL, 4294967295UL, 2UL, 0xEC70156CL, 4294967295UL, 0UL}}};
    int *l_307[5][3] = {{&g_13[8], &g_220.f3, &g_13[8]}, {&g_13[8], &g_220.f3, &g_13[8]}, {&g_13[8], &g_220.f3, &g_13[8]}, {&g_13[8], &g_220.f3, &g_13[8]}, {&g_13[8], &g_220.f3, &g_13[8]}};
    int l_334 = 0x9D92A423L;
    int ***l_339 = &g_107;
    unsigned l_354 = 1UL;
    int i, j, k;
    if (func_70((p_66 <= g_13[2]), ((safe_sub_func_uint16_t_u_u((((0xAEL & g_75) & p_66) || ((safe_sub_func_uint16_t_u_u(p_66, (safe_add_func_int32_t_s_s(g_59, p_66)))) | g_13[1])), g_75)) && g_8)))
    {
        unsigned l_234[7][3] = {{4294967295UL, 0x5AEBE9E3L, 0x495F2836L}, {4294967295UL, 0x5AEBE9E3L, 0x495F2836L}, {4294967295UL, 0x5AEBE9E3L, 0x495F2836L}, {4294967295UL, 0x5AEBE9E3L, 0x495F2836L}, {4294967295UL, 0x5AEBE9E3L, 0x495F2836L}, {4294967295UL, 0x5AEBE9E3L, 0x495F2836L}, {4294967295UL, 0x5AEBE9E3L, 0x495F2836L}};
        int l_263 = (-1L);
        int *l_308 = &l_263;
        union U0 **l_353 = &g_222;
        char l_355 = 0xB2L;
        int i, j;
        if (g_220.f1)
        {
            unsigned l_247[5][7][6] = {{{4294967294UL, 1UL, 0x60233A00L, 1UL, 1UL, 4294967294UL}, {4294967294UL, 1UL, 0x60233A00L, 1UL, 1UL, 4294967294UL}, {4294967294UL, 1UL, 0x60233A00L, 1UL, 1UL, 4294967294UL}, {4294967294UL, 1UL, 0x60233A00L, 1UL, 1UL, 4294967294UL}, {4294967294UL, 1UL, 0x60233A00L, 1UL, 1UL, 4294967294UL}, {4294967294UL, 1UL, 0x60233A00L, 1UL, 1UL, 4294967294UL}, {4294967294UL, 1UL, 0x60233A00L, 1UL, 1UL, 4294967294UL}}, {{4294967294UL, 1UL, 0x60233A00L, 1UL, 1UL, 4294967294UL}, {4294967294UL, 1UL, 0x60233A00L, 1UL, 1UL, 4294967294UL}, {4294967294UL, 1UL, 0x60233A00L, 1UL, 1UL, 4294967294UL}, {4294967294UL, 1UL, 0x60233A00L, 1UL, 1UL, 4294967294UL}, {4294967294UL, 1UL, 0x60233A00L, 1UL, 1UL, 4294967294UL}, {4294967294UL, 1UL, 0x60233A00L, 1UL, 1UL, 4294967294UL}, {4294967294UL, 1UL, 0x60233A00L, 1UL, 1UL, 4294967294UL}}, {{4294967294UL, 1UL, 0x60233A00L, 1UL, 1UL, 4294967294UL}, {4294967294UL, 1UL, 0x60233A00L, 1UL, 1UL, 4294967294UL}, {4294967294UL, 1UL, 0x60233A00L, 1UL, 1UL, 4294967294UL}, {4294967294UL, 1UL, 0x60233A00L, 1UL, 1UL, 4294967294UL}, {4294967294UL, 1UL, 0x60233A00L, 1UL, 1UL, 4294967294UL}, {4294967294UL, 1UL, 0x60233A00L, 1UL, 1UL, 4294967294UL}, {4294967294UL, 1UL, 0x60233A00L, 1UL, 1UL, 4294967294UL}}, {{4294967294UL, 1UL, 0x60233A00L, 1UL, 1UL, 4294967294UL}, {4294967294UL, 1UL, 0x60233A00L, 1UL, 1UL, 4294967294UL}, {4294967294UL, 1UL, 0x60233A00L, 1UL, 1UL, 4294967294UL}, {4294967294UL, 1UL, 0x60233A00L, 1UL, 1UL, 4294967294UL}, {4294967294UL, 1UL, 0x60233A00L, 1UL, 1UL, 4294967294UL}, {4294967294UL, 1UL, 0x60233A00L, 1UL, 1UL, 4294967294UL}, {4294967294UL, 1UL, 0x60233A00L, 1UL, 1UL, 4294967294UL}}, {{4294967294UL, 1UL, 0x60233A00L, 1UL, 1UL, 4294967294UL}, {4294967294UL, 1UL, 0x60233A00L, 1UL, 1UL, 4294967294UL}, {4294967294UL, 1UL, 0x60233A00L, 1UL, 1UL, 4294967294UL}, {4294967294UL, 1UL, 0x60233A00L, 1UL, 1UL, 4294967294UL}, {4294967294UL, 1UL, 0x60233A00L, 1UL, 1UL, 4294967294UL}, {4294967294UL, 1UL, 0x60233A00L, 1UL, 1UL, 4294967294UL}, {4294967294UL, 1UL, 0x60233A00L, 1UL, 1UL, 4294967294UL}}};
            int i, j, k;
            (*p_67) = l_247[4][3][1];
            return g_13[8];
        }
        else
        {
            union U0 *l_259 = &g_223[2];
            const int l_281[10][3] = {{0L, 0xD82735C6L, 0L}, {0L, 0xD82735C6L, 0L}, {0L, 0xD82735C6L, 0L}, {0L, 0xD82735C6L, 0L}, {0L, 0xD82735C6L, 0L}, {0L, 0xD82735C6L, 0L}, {0L, 0xD82735C6L, 0L}, {0L, 0xD82735C6L, 0L}, {0L, 0xD82735C6L, 0L}, {0L, 0xD82735C6L, 0L}};
            int i, j;
            if ((*p_67))
            {
                unsigned l_283 = 0xFDBCDAE1L;
                for (g_220.f0 = (-26); (g_220.f0 == 38); g_220.f0 = safe_add_func_int16_t_s_s(g_220.f0, 7))
                {
                    int l_253 = 1L;
                    if ((g_223[2].f2 && l_248[5][0][3]))
                    {
                        unsigned l_256 = 4294967295UL;
                        const int **l_264 = (void*)0;
                        const int *l_266 = &g_13[8];
                        const int **l_265 = &l_266;
                        l_263 = ((safe_sub_func_int32_t_s_s(l_253, ((g_59 >= (safe_rshift_func_int8_t_s_u(0x9CL, 1))) == l_256))) || (safe_mod_func_int16_t_s_s(l_256, (((void*)0 == l_259) ^ ((safe_lshift_func_int16_t_s_u(g_13[8], p_66)) | 4294967291UL)))));
                        (*l_265) = &l_245;

                        ;
                        return g_223[2].f1;


                    }
                    else
                    {
                        unsigned l_282 = 8UL;
                        (*p_67) = 0xF7B0DDA5L;
                        (**g_106) = &p_66;

                        ;
                        (*p_67) = (safe_lshift_func_int8_t_s_u((safe_mod_func_uint8_t_u_u(((-1L) == (l_234[4][2] < (g_220.f1 != 0x81L))), (((safe_rshift_func_int8_t_s_s((safe_div_func_int8_t_s_s((-7L), (~((l_263 >= l_283) || l_245)))), l_281[9][2])) && l_283) || l_253))), p_66));
                    }

                    ;
                    (***g_106) = (**g_107);
                    (*p_67) = func_70(p_66, (*p_67));


                }


                (*p_67) = l_281[9][2];
                return g_284;


            }
            else
            {
                int l_289 = 0x5A08B872L;
                (*g_106) = (*g_106);
                if ((*p_67))
                {
                    unsigned l_294 = 0x2840B4C9L;
                    for (l_263 = 0; (l_263 <= 2); l_263 += 1)
                    {
                        (*g_107) = &p_66;

                        ;
                        (*p_67) = ((((~g_223[2].f1) | l_234[4][2]) && 0x0FL) > ((safe_sub_func_int32_t_s_s((safe_lshift_func_int8_t_s_u(0x28L, (func_70(g_220.f0, l_289) < (safe_rshift_func_int16_t_s_u((safe_mod_func_int32_t_s_s(l_294, (((0xD67176CBL >= l_281[9][2]) >= 0x0EL) && g_223[2].f1))), p_66))))), l_234[4][2])) <= 6UL));


                        if (g_8)
                            break;
                    }


                    (*p_67) = (safe_lshift_func_int16_t_s_u(((p_66 != l_294) || (safe_lshift_func_int8_t_s_u((safe_sub_func_int32_t_s_s((*p_67), 0x3A9174A0L)), 1))), 10));
                    (*g_107) = (void*)0;

                    ;
                    (*g_107) = &p_66;

                    ;
                }
                else
                {
                    for (g_220.f1 = 0; (g_220.f1 <= 14); ++g_220.f1)
                    {
                        if ((*p_67))
                            break;
                    }

                    for (g_59 = 0; (g_59 <= 4); g_59 += 1)
                    {
                        int *l_305 = (void*)0;
                        int *l_306 = &g_220.f3;
                        (*l_306) = (safe_lshift_func_uint16_t_u_u(((void*)0 != &p_68), g_262));

                        (**g_106) = &p_66;

                        ;
                        (*l_306) = (p_66 >= g_223[2].f0);
                    }


                    (*g_107) = (void*)0;

                    ;
                    (**g_106) = (**g_106);
                }

                ;
            }

            ;
        }

        ;
        for (g_220.f3 = 2; (g_220.f3 >= 0); g_220.f3 -= 1)
        {
            int **l_311 = (void*)0;
            l_307[1][1] = (**g_106);
            l_308 = &p_66;

            ;
            for (g_262 = 0; (g_262 <= 4); g_262 += 1)
            {
                union U0 *l_336 = &g_337;
                int i, j;
            }
        }


        ;
        (*p_67) = (g_13[9] >= (&l_308 == (void*)0));
        (*l_308) = ((safe_rshift_func_uint16_t_u_s(g_13[8], g_220.f1)) >= ((safe_sub_func_uint16_t_u_u(1UL, (safe_div_func_uint32_t_u_u(((~(((((*l_308) | (safe_rshift_func_uint8_t_u_s((safe_lshift_func_int16_t_s_u((*l_308), l_355)), p_66))) | (-1L)) == (*p_67)) || g_223[2].f0)) == 0x0FCD7525L), g_8)))) <= g_337.f1));
    }
    else
    {
        const char l_356 = 1L;
        (*p_67) = (*p_67);
        (*g_107) = &l_334;

        ;
        (*p_67) = (func_70(p_66, (0x59L | l_356)) >= 0x20L);


    }



    return p_66;


}







static int func_70(unsigned char p_71, int p_72)
{
    int *l_81 = &g_13[8];
    int **l_80 = &l_81;
    int ***l_82 = (void*)0;
    unsigned l_88[8] = {4294967295UL, 4294967295UL, 4294967295UL, 4294967295UL, 4294967295UL, 4294967295UL, 4294967295UL, 4294967295UL};
    int l_122 = 0x04CA5222L;
    unsigned char l_131 = 0UL;
    unsigned l_132 = 4294967295UL;
    int *l_140 = &g_59;
    unsigned short l_217 = 0x832AL;
    int i;
    l_80 = l_80;
    (*l_80) = &p_72;

    ;
    if (p_71)
    {
        int ***l_85 = &l_80;
        unsigned short l_101[10][6][4] = {{{0xADA2L, 0x3E79L, 2UL, 0x4891L}, {0xADA2L, 0x3E79L, 2UL, 0x4891L}, {0xADA2L, 0x3E79L, 2UL, 0x4891L}, {0xADA2L, 0x3E79L, 2UL, 0x4891L}, {0xADA2L, 0x3E79L, 2UL, 0x4891L}, {0xADA2L, 0x3E79L, 2UL, 0x4891L}}, {{0xADA2L, 0x3E79L, 2UL, 0x4891L}, {0xADA2L, 0x3E79L, 2UL, 0x4891L}, {0xADA2L, 0x3E79L, 2UL, 0x4891L}, {0xADA2L, 0x3E79L, 2UL, 0x4891L}, {0xADA2L, 0x3E79L, 2UL, 0x4891L}, {0xADA2L, 0x3E79L, 2UL, 0x4891L}}, {{0xADA2L, 0x3E79L, 2UL, 0x4891L}, {0xADA2L, 0x3E79L, 2UL, 0x4891L}, {0xADA2L, 0x3E79L, 2UL, 0x4891L}, {0xADA2L, 0x3E79L, 2UL, 0x4891L}, {0xADA2L, 0x3E79L, 2UL, 0x4891L}, {0xADA2L, 0x3E79L, 2UL, 0x4891L}}, {{0xADA2L, 0x3E79L, 2UL, 0x4891L}, {0xADA2L, 0x3E79L, 2UL, 0x4891L}, {0xADA2L, 0x3E79L, 2UL, 0x4891L}, {0xADA2L, 0x3E79L, 2UL, 0x4891L}, {0xADA2L, 0x3E79L, 2UL, 0x4891L}, {0xADA2L, 0x3E79L, 2UL, 0x4891L}}, {{0xADA2L, 0x3E79L, 2UL, 0x4891L}, {0xADA2L, 0x3E79L, 2UL, 0x4891L}, {0xADA2L, 0x3E79L, 2UL, 0x4891L}, {0xADA2L, 0x3E79L, 2UL, 0x4891L}, {0xADA2L, 0x3E79L, 2UL, 0x4891L}, {0xADA2L, 0x3E79L, 2UL, 0x4891L}}, {{0xADA2L, 0x3E79L, 2UL, 0x4891L}, {0xADA2L, 0x3E79L, 2UL, 0x4891L}, {0xADA2L, 0x3E79L, 2UL, 0x4891L}, {0xADA2L, 0x3E79L, 2UL, 0x4891L}, {0xADA2L, 0x3E79L, 2UL, 0x4891L}, {0xADA2L, 0x3E79L, 2UL, 0x4891L}}, {{0xADA2L, 0x3E79L, 2UL, 0x4891L}, {0xADA2L, 0x3E79L, 2UL, 0x4891L}, {0xADA2L, 0x3E79L, 2UL, 0x4891L}, {0xADA2L, 0x3E79L, 2UL, 0x4891L}, {0xADA2L, 0x3E79L, 2UL, 0x4891L}, {0xADA2L, 0x3E79L, 2UL, 0x4891L}}, {{0xADA2L, 0x3E79L, 2UL, 0x4891L}, {0xADA2L, 0x3E79L, 2UL, 0x4891L}, {0xADA2L, 0x3E79L, 2UL, 0x4891L}, {0xADA2L, 0x3E79L, 2UL, 0x4891L}, {0xADA2L, 0x3E79L, 2UL, 0x4891L}, {0xADA2L, 0x3E79L, 2UL, 0x4891L}}, {{0xADA2L, 0x3E79L, 2UL, 0x4891L}, {0xADA2L, 0x3E79L, 2UL, 0x4891L}, {0xADA2L, 0x3E79L, 2UL, 0x4891L}, {0xADA2L, 0x3E79L, 2UL, 0x4891L}, {0xADA2L, 0x3E79L, 2UL, 0x4891L}, {0xADA2L, 0x3E79L, 2UL, 0x4891L}}, {{0xADA2L, 0x3E79L, 2UL, 0x4891L}, {0xADA2L, 0x3E79L, 2UL, 0x4891L}, {0xADA2L, 0x3E79L, 2UL, 0x4891L}, {0xADA2L, 0x3E79L, 2UL, 0x4891L}, {0xADA2L, 0x3E79L, 2UL, 0x4891L}, {0xADA2L, 0x3E79L, 2UL, 0x4891L}}};
        int i, j, k;
        if (((safe_lshift_func_uint8_t_u_u(((void*)0 == l_85), (**l_80))) == 4294967295UL))
        {
            for (g_59 = 0; (g_59 == (-23)); g_59 = safe_sub_func_int16_t_s_s(g_59, 8))
            {
                return g_59;
            }
        }
        else
        {
            int l_100 = (-1L);
            (*l_80) = &p_72;
            (**l_85) = &p_72;
            for (g_75 = 0; (g_75 <= 7); g_75 += 1)
            {
                int l_117 = (-1L);
                int i;
            }
            (**l_80) = l_100;
        }
        return p_71;
    }
    else
    {
        unsigned short l_128 = 1UL;
        int l_129 = 0x9BC54FA0L;
        int *** const l_130 = &g_107;
        unsigned l_139 = 0x203B90B5L;
        int *l_198 = &g_59;
        (*l_81) = ((safe_rshift_func_uint8_t_u_u(((safe_add_func_int8_t_s_s(((l_128 <= (l_129 > (l_130 != &g_107))) || 0xD70EL), (g_75 <= (l_131 || l_132)))) >= (g_59 || (*l_81))), 0)) > p_71);
        for (p_71 = 0; (p_71 < 34); p_71 = safe_add_func_int16_t_s_s(p_71, 1))
        {
            unsigned char l_150 = 7UL;
            int *l_174 = &g_59;
            if (((((p_72 && (safe_lshift_func_int8_t_s_u((65535UL == (safe_lshift_func_int8_t_s_s((-7L), 7))), 6))) < l_139) || (p_72 | 0x32D690D0L)) > ((*g_107) != (*g_107))))
            {
                (**l_130) = l_140;

                ;
            }
            else
            {
                return p_72;


            }

            ;
            if ((**l_80))
            {
                (*g_108) = p_71;
                (*g_107) = (*g_107);
            }
            else
            {
                short l_147 = 0xEF0FL;
                (*l_140) = (g_8 | (((0x8821L || (**l_80)) == p_72) <= (g_75 ^ (safe_mod_func_uint8_t_u_u((((safe_add_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s(l_147, 6)), g_59)) | 1UL) < (p_71 ^ g_59)), 0xEAL)))));
                p_72 = ((!(l_150 >= g_75)) || 0L);
                (*l_140) = (*g_108);
            }
            for (l_150 = 0; (l_150 <= 14); l_150++)
            {
                unsigned l_163[8][2] = {{4294967295UL, 9UL}, {4294967295UL, 9UL}, {4294967295UL, 9UL}, {4294967295UL, 9UL}, {4294967295UL, 9UL}, {4294967295UL, 9UL}, {4294967295UL, 9UL}, {4294967295UL, 9UL}};
                int *l_166 = &l_122;
                int i, j;
                (***l_130) = l_150;
                (*l_140) = (***l_130);
                for (l_131 = 0; (l_131 < 1); l_131++)
                {
                    const int *** const l_159 = (void*)0;
                    for (g_75 = 0; (g_75 >= 38); g_75 = safe_add_func_int8_t_s_s(g_75, 8))
                    {
                        unsigned l_160[6] = {4294967295UL, 4294967295UL, 0xA610A40BL, 4294967295UL, 4294967295UL, 0xA610A40BL};
                        int i;
                        p_72 = (safe_add_func_int32_t_s_s(((void*)0 == l_159), l_160[5]));
                        (***g_106) = (safe_div_func_int8_t_s_s(l_163[6][0], (safe_lshift_func_uint16_t_u_u((((**g_106) != l_166) != (safe_mod_func_uint8_t_u_u((g_13[0] >= (safe_unary_minus_func_uint16_t_u((g_59 > ((((void*)0 != l_130) <= (((safe_rshift_func_int8_t_s_u(g_59, (**l_80))) <= (*l_166)) < 1UL)) < g_13[8]))))), l_160[5]))), 11))));
                        if (p_72)
                            continue;
                        (*l_81) = 0xA9CCBCD5L;
                    }
                    for (l_129 = (-19); (l_129 > (-12)); l_129 = safe_add_func_uint8_t_u_u(l_129, 3))
                    {
                        (**g_106) = (**g_106);
                        (**g_106) = l_166;

                        ;
                        if ((**g_107))
                            continue;
                        l_174 = (**g_106);

                        ;
                    }
                }
            }

            ;
            ;
            for (l_129 = 19; (l_129 == (-1)); --l_129)
            {
                int *l_191 = &g_13[8];
                union U0 *l_219 = &g_220;
            }
        }


        for (g_59 = 10; (g_59 >= (-5)); g_59 = safe_sub_func_uint8_t_u_u(g_59, 1))
        {
            int *l_228 = &g_220.f3;
            if (p_72)
                break;
            for (l_129 = 7; (l_129 >= 0); l_129 -= 1)
            {
                l_228 = (**g_106);


            }


        }
        for (l_128 = 0; (l_128 <= 7); l_128 += 1)
        {
            int *l_229 = &g_13[8];
            (**g_106) = l_229;

            ;
            if ((*l_198))
                break;
            for (g_59 = 7; (g_59 >= 0); g_59 -= 1)
            {
                union U0 **l_231 = &g_222;
                union U0 ***l_230 = &l_231;
                int i;
                (*l_230) = &g_222;
                (*l_81) = ((0x6BL >= l_88[g_59]) ^ l_88[g_59]);
            }
        }
    }


    return p_71;


}





int main (void)
{
    int i;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_8, "g_8", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_13[i], "g_13[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_59, "g_59", print_hash_value);
    transparent_crc(g_75, "g_75", print_hash_value);
    transparent_crc(g_220.f0, "g_220.f0", print_hash_value);
    transparent_crc(g_220.f1, "g_220.f1", print_hash_value);
    transparent_crc(g_220.f2, "g_220.f2", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_223[i].f0, "g_223[i].f0", print_hash_value);
        transparent_crc(g_223[i].f1, "g_223[i].f1", print_hash_value);
        transparent_crc(g_223[i].f2, "g_223[i].f2", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_262, "g_262", print_hash_value);
    transparent_crc(g_284, "g_284", print_hash_value);
    transparent_crc(g_337.f0, "g_337.f0", print_hash_value);
    transparent_crc(g_337.f1, "g_337.f1", print_hash_value);
    transparent_crc(g_337.f2, "g_337.f2", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
