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



static volatile unsigned char g_2[10] = {0x9AL, 0x9AL, 0x9AL, 0x9AL, 0x9AL, 0x9AL, 0x9AL, 0x9AL, 0x9AL, 0x9AL};
static int g_7 = 4L;
static int * volatile g_6 = &g_7;
static int * volatile g_11 = (void*)0;
static int g_68 = (-8L);
static int *g_70 = &g_7;
static int **g_69 = &g_70;
static int g_74 = 0xE298319BL;
static char g_88 = 0x67L;
static char *g_87[7][8] = {{(void*)0, &g_88, &g_88, &g_88, (void*)0, &g_88, &g_88, &g_88}, {(void*)0, &g_88, &g_88, &g_88, (void*)0, &g_88, &g_88, &g_88}, {(void*)0, &g_88, &g_88, &g_88, (void*)0, &g_88, &g_88, &g_88}, {(void*)0, &g_88, &g_88, &g_88, (void*)0, &g_88, &g_88, &g_88}, {(void*)0, &g_88, &g_88, &g_88, (void*)0, &g_88, &g_88, &g_88}, {(void*)0, &g_88, &g_88, &g_88, (void*)0, &g_88, &g_88, &g_88}, {(void*)0, &g_88, &g_88, &g_88, (void*)0, &g_88, &g_88, &g_88}};
static unsigned short g_105 = 0x4386L;
static unsigned g_114 = 9UL;
static int ***g_132 = (void*)0;
static int ****g_131 = &g_132;
static unsigned char g_141 = 255UL;
static short g_145 = 1L;
static short *g_144[1] = {&g_145};
static int ***g_183 = &g_69;
static const int *g_213 = &g_7;
static unsigned g_237[1] = {4294967295UL};
static short g_238 = 1L;
static int **g_242 = (void*)0;
static char g_268 = 9L;
static unsigned short g_285 = 0UL;
static short g_305[5] = {(-1L), (-1L), (-1L), (-1L), (-1L)};
static unsigned g_308 = 4294967289UL;
static int g_309 = 0x7C60A04EL;
static unsigned char g_356 = 0xDAL;
static const volatile unsigned * volatile *g_379 = (void*)0;
static int **g_385[6][9][2] = {{{&g_70, (void*)0}, {&g_70, (void*)0}, {&g_70, (void*)0}, {&g_70, (void*)0}, {&g_70, (void*)0}, {&g_70, (void*)0}, {&g_70, (void*)0}, {&g_70, (void*)0}, {&g_70, (void*)0}}, {{&g_70, (void*)0}, {&g_70, (void*)0}, {&g_70, (void*)0}, {&g_70, (void*)0}, {&g_70, (void*)0}, {&g_70, (void*)0}, {&g_70, (void*)0}, {&g_70, (void*)0}, {&g_70, (void*)0}}, {{&g_70, (void*)0}, {&g_70, (void*)0}, {&g_70, (void*)0}, {&g_70, (void*)0}, {&g_70, (void*)0}, {&g_70, (void*)0}, {&g_70, (void*)0}, {&g_70, (void*)0}, {&g_70, (void*)0}}, {{&g_70, (void*)0}, {&g_70, (void*)0}, {&g_70, (void*)0}, {&g_70, (void*)0}, {&g_70, (void*)0}, {&g_70, (void*)0}, {&g_70, (void*)0}, {&g_70, (void*)0}, {&g_70, (void*)0}}, {{&g_70, (void*)0}, {&g_70, (void*)0}, {&g_70, (void*)0}, {&g_70, (void*)0}, {&g_70, (void*)0}, {&g_70, (void*)0}, {&g_70, (void*)0}, {&g_70, (void*)0}, {&g_70, (void*)0}}, {{&g_70, (void*)0}, {&g_70, (void*)0}, {&g_70, (void*)0}, {&g_70, (void*)0}, {&g_70, (void*)0}, {&g_70, (void*)0}, {&g_70, (void*)0}, {&g_70, (void*)0}, {&g_70, (void*)0}}};
static int **g_389 = &g_70;
static unsigned short *g_398 = (void*)0;
static unsigned short **g_397 = &g_398;
static short g_441[1][7] = {{1L, 0xC5F8L, 1L, 0xC5F8L, 1L, 0xC5F8L, 1L}};
static unsigned short * const ** volatile g_448 = (void*)0;
static unsigned short * const ** volatile g_449 = (void*)0;
static unsigned short * const *g_451 = &g_398;
static unsigned short * const ** volatile g_450[1] = {&g_451};
static unsigned short * const ** volatile g_452 = &g_451;
static unsigned g_457 = 0x64AA925EL;
static unsigned char g_463 = 251UL;
static int *****g_493 = &g_131;
static short **g_554 = (void*)0;
static int ***g_566 = &g_389;
static int **** const g_565 = &g_566;
static int **** const *g_564 = &g_565;
static int **** const **g_563 = &g_564;
static unsigned short g_579 = 0x9154L;
static int * volatile g_613 = &g_74;



static int func_1(void);
static int ** func_14(int * p_15, int * p_16, char p_17, short p_18, unsigned short p_19);
static int * func_20(short p_21);
static short func_22(char p_23);
static int * func_24(unsigned char p_25, int ** p_26, int * p_27, int p_28);
static int ** func_29(int ** p_30, unsigned short p_31, int * p_32);
static int ** func_33(int ** p_34, unsigned char p_35, int p_36);
static int ** func_37(unsigned short p_38, char p_39, const char p_40, int * p_41);
static char func_46(int ** p_47, char p_48, const int * p_49, int ** p_50);
static int * func_58(int ** p_59, int p_60, unsigned short p_61, unsigned short p_62, int **** p_63);
static int func_1(void)
{
    unsigned l_3 = 0x7CA0029BL;
    int **l_559 = &g_70;
    int l_568 = 0x52D7138FL;
    short l_574 = 0xC007L;
    unsigned l_577 = 0x96FCEE5CL;
    unsigned l_580 = 1UL;
    int ****l_589 = &g_132;
    const int l_606 = 0L;
    int l_609 = 0x7B44950DL;
    unsigned short **l_612 = (void*)0;
    unsigned l_614 = 6UL;
    if ((g_2[6] || l_3))
    {
        char l_4 = 0x0BL;
        int *l_5 = (void*)0;
        int l_13 = 0x72B90F99L;
        unsigned l_553 = 0xEF28413DL;
        int **** const **l_562 = (void*)0;
        (*g_6) = l_4;
        for (l_4 = 0; (l_4 < (-20)); --l_4)
        {
            unsigned char l_10[9] = {0x0DL, 8UL, 0x0DL, 8UL, 0x0DL, 8UL, 0x0DL, 8UL, 0x0DL};
            int *l_12[8][10] = {{&g_7, &g_7, (void*)0, (void*)0, &g_7, &g_7, &g_7, &g_7, (void*)0, &g_7}, {&g_7, &g_7, (void*)0, (void*)0, &g_7, &g_7, &g_7, &g_7, (void*)0, &g_7}, {&g_7, &g_7, (void*)0, (void*)0, &g_7, &g_7, &g_7, &g_7, (void*)0, &g_7}, {&g_7, &g_7, (void*)0, (void*)0, &g_7, &g_7, &g_7, &g_7, (void*)0, &g_7}, {&g_7, &g_7, (void*)0, (void*)0, &g_7, &g_7, &g_7, &g_7, (void*)0, &g_7}, {&g_7, &g_7, (void*)0, (void*)0, &g_7, &g_7, &g_7, &g_7, (void*)0, &g_7}, {&g_7, &g_7, (void*)0, (void*)0, &g_7, &g_7, &g_7, &g_7, (void*)0, &g_7}, {&g_7, &g_7, (void*)0, (void*)0, &g_7, &g_7, &g_7, &g_7, (void*)0, &g_7}};
            int ******l_567[5] = {&g_493, &g_493, &g_493, &g_493, &g_493};
            int i, j;
            l_13 = l_10[2];
        }
        (**g_183) = (void*)0;
        l_568 = l_553;
    }
    else
    {
        (**l_559) = 0x52ECC672L;
    }
    for (g_7 = 0; (g_7 >= 15); g_7 = safe_add_func_int32_t_s_s(g_7, 1))
    {
        int *l_571 = &g_7;
        unsigned short *l_578 = &g_579;
        int ****l_581 = &g_566;
        (*g_389) = l_571;
        (**g_566) = (*g_389);
        for (l_3 = 0; (l_3 != 13); l_3 = safe_add_func_int16_t_s_s(l_3, 8))
        {
            int l_584 = 2L;
            int **l_588 = &l_571;
            l_584 = l_584;
            for (g_285 = 0; g_285 < 7; g_285 += 1)
            {
                for (g_457 = 0; g_457 < 8; g_457 += 1)
                {
                    g_87[g_285][g_457] = &g_268;
                }
            }
            for (l_568 = 4; (l_568 >= 0); l_568 -= 1)
            {
                int **l_585 = &l_571;
                int i;
                if (g_2[(l_568 + 2)])
                    break;
                for (g_308 = 0; (g_308 <= 6); g_308 += 1)
                {
                    unsigned char l_587 = 253UL;
                    int l_590 = 0x3D9A0AAFL;
                    int *l_591 = &l_590;
                    for (l_580 = 0; (l_580 <= 9); l_580 += 1)
                    {
                        int **l_586 = (void*)0;
                        int i;
                        l_584 = g_2[(g_308 + 3)];
                        (***g_565) = (***g_565);
                        l_590 = l_587;
                    }
                    (*l_591) = ((void*)0 != &l_578);
                    (*g_69) = (***l_581);
                    for (l_590 = 0; (l_590 >= 0); l_590 -= 1)
                    {
                        return (*l_571);
                    }
                }
            }
        }
    }
    for (g_88 = (-1); (g_88 == (-28)); g_88--)
    {
        volatile char l_594 = 0L;
        int l_602 = 5L;
        for (g_105 = 0; (g_105 <= 1); g_105 += 1)
        {
            const short l_595 = 0x5DC6L;
            int i;
            l_594 = g_2[(g_105 + 5)];
            if (l_594)
                break;
            for (l_580 = 0; (l_580 <= 1); l_580 += 1)
            {
                unsigned char *l_603 = (void*)0;
                unsigned char *l_604 = (void*)0;
                unsigned char *l_605 = &g_141;
                int i, j, k;
                (****g_564) = func_20(((l_595 & l_595) > (safe_div_func_uint8_t_u_u(((*l_605) = (g_356 = (!(253UL == ((safe_sub_func_int8_t_s_s((((l_595 < (g_308 && 0xA4L)) && l_594) ^ 247UL), (safe_mod_func_int32_t_s_s((l_595 || l_602), (*g_213))))) && g_7))))), l_595))));
            }
        }
        l_568 = 0xC02C5E4CL;
        (*g_69) = (**g_183);
    }
    (*g_613) = ((l_606 | (safe_div_func_int8_t_s_s(l_609, (safe_sub_func_uint16_t_u_u((l_612 == (void*)0), l_609))))) <= g_2[6]);
    return l_614;
}







static int ** func_14(int * p_15, int * p_16, char p_17, short p_18, unsigned short p_19)
{
    int **l_555 = &g_70;
    const int **l_556 = &g_213;
    int *l_558 = (void*)0;
    int **l_557 = &l_558;
    (*p_15) = (func_46(((*g_183) = l_555), ((void*)0 == &g_131), ((*l_556) = (*l_555)), (l_557 = l_555)) && 0x45F05901L);
    return (*g_183);
}







static int * func_20(short p_21)
{
    char l_516 = 0L;
    int *l_517 = (void*)0;
    const unsigned short l_526 = 0x8DC3L;
    int l_528[1];
    int **l_547[1];
    short l_549 = 0x23DEL;
    short l_552 = 0xE80AL;
    int i;
    for (i = 0; i < 1; i++)
        l_528[i] = (-10L);
    for (i = 0; i < 1; i++)
        l_547[i] = &l_517;
    for (p_21 = 0; p_21 < 1; p_21 += 1)
    {
        g_237[p_21] = 0x6793D22FL;
    }
    if (((!(-1L)) | l_516))
    {
        return l_517;
    }
    else
    {
        unsigned char *l_522[9][9] = {{&g_463, (void*)0, &g_356, (void*)0, &g_463, (void*)0, &g_356, (void*)0, &g_463}, {&g_463, (void*)0, &g_356, (void*)0, &g_463, (void*)0, &g_356, (void*)0, &g_463}, {&g_463, (void*)0, &g_356, (void*)0, &g_463, (void*)0, &g_356, (void*)0, &g_463}, {&g_463, (void*)0, &g_356, (void*)0, &g_463, (void*)0, &g_356, (void*)0, &g_463}, {&g_463, (void*)0, &g_356, (void*)0, &g_463, (void*)0, &g_356, (void*)0, &g_463}, {&g_463, (void*)0, &g_356, (void*)0, &g_463, (void*)0, &g_356, (void*)0, &g_463}, {&g_463, (void*)0, &g_356, (void*)0, &g_463, (void*)0, &g_356, (void*)0, &g_463}, {&g_463, (void*)0, &g_356, (void*)0, &g_463, (void*)0, &g_356, (void*)0, &g_463}, {&g_463, (void*)0, &g_356, (void*)0, &g_463, (void*)0, &g_356, (void*)0, &g_463}};
        int l_523 = 0xC51BC57AL;
        int l_524 = 0xE0B57CFEL;
        int **l_525[10] = {&g_70, (void*)0, &g_70, (void*)0, &g_70, (void*)0, &g_70, (void*)0, &g_70, (void*)0};
        char *l_527 = &l_516;
        int l_537[9];
        unsigned short *l_548 = &g_285;
        int i, j;
        for (i = 0; i < 9; i++)
            l_537[i] = 0x8EBC6D4EL;
        l_528[0] = ((*g_6) | ((~(g_305[3] != (((((*l_527) = (safe_div_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s(((l_523 = (!p_21)) | (p_21 || func_46(&l_517, l_524, &l_524, l_525[5]))), p_21)), l_526))) ^ p_21) >= 0x4BL) >= 0xC8B162AEL))) & 0x34L));
        if (p_21)
        {
            for (l_524 = (-8); (l_524 > (-6)); l_524++)
            {
                unsigned char l_531[8] = {1UL, 1UL, 255UL, 1UL, 1UL, 255UL, 1UL, 1UL};
                int i;
                if (l_531[4])
                    break;
            }
        }
        else
        {
            int **l_536[9] = {&g_70, &g_70, (void*)0, &g_70, &g_70, (void*)0, &g_70, &g_70, (void*)0};
            short *l_542 = &g_305[4];
            int i;
            l_528[0] = ((safe_lshift_func_int16_t_s_s(p_21, (((*l_542) = (safe_add_func_uint8_t_u_u(g_7, p_21))) & 0x7AFCL))) == 4294967292UL);
        }
        (*g_69) = &l_528[0];
        l_549 = ((p_21 && p_21) < (safe_add_func_uint16_t_u_u((+((*l_548) = (safe_sub_func_uint8_t_u_u(((func_46(&l_517, p_21, &l_528[0], l_547[0]) || p_21) >= ((g_463 < p_21) != p_21)), p_21)))), p_21)));
    }
    (*g_6) = (safe_mod_func_uint16_t_u_u(0x8B12L, l_552));
    return (*g_69);
}







static short func_22(char p_23)
{
    int *l_43 = &g_7;
    int **l_42 = &l_43;
    int ***l_51 = (void*)0;
    int **l_52 = (void*)0;
    int ***l_53 = (void*)0;
    int *l_57 = &g_7;
    int ** const l_56 = &l_57;
    int ** const *l_55[2][1];
    int ** const **l_54 = &l_55[1][0];
    char l_64 = 0L;
    int ****l_65 = &l_53;
    char *l_76 = &l_64;
    int l_287[1];
    int ***l_501 = &l_42;
    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
            l_55[i][j] = &l_56;
    }
    for (i = 0; i < 1; i++)
        l_287[i] = 0x3C2CC20BL;
    (*l_56) = func_24(g_7, ((*l_501) = func_29(func_33(func_37(((((void*)0 != l_42) > (safe_mod_func_uint16_t_u_u(((void*)0 != &g_7), (((*l_76) = func_46((l_52 = &l_43), (l_53 != ((*l_54) = &l_42)), func_58(&l_43, (*g_6), l_64, g_7, l_65), g_69)) | g_74)))) == p_23), g_74, p_23, &g_7), g_268, l_287[0]), p_23, (*l_56))), (*l_56), (*l_57));
    for (g_463 = (-29); (g_463 < 19); g_463++)
    {
        if ((**l_52))
            break;
    }
    return p_23;
}







static int * func_24(unsigned char p_25, int ** p_26, int * p_27, int p_28)
{
    int *l_502[6];
    char *l_503 = &g_88;
    unsigned short * const l_504 = (void*)0;
    unsigned char l_505 = 0x88L;
    int ***l_506 = &g_389;
    unsigned l_507 = 0x50DF8BCDL;
    unsigned short l_508 = 0x7C09L;
    unsigned short *l_509 = (void*)0;
    unsigned short *l_510[4];
    unsigned *l_511 = &l_507;
    int i;
    for (i = 0; i < 6; i++)
        l_502[i] = &g_7;
    for (i = 0; i < 4; i++)
        l_510[i] = &g_285;
    (**g_183) = l_502[5];
    (*g_69) = func_58(((*l_506) = func_33(func_37((((void*)0 != l_503) & ((*g_397) == l_504)), l_505, p_25, p_27), (g_305[3] | 0x78L), p_28)), l_507, p_28, p_28, &l_506);
    (*p_27) = (p_28 < ((((*l_511) = (((***l_506) = l_508) <= 0x1A95L)) >= ((safe_div_func_int8_t_s_s(2L, p_25)) != 0x5A0AAC9FL)) ^ p_25));
    return (**l_506);
}







static int ** func_29(int ** p_30, unsigned short p_31, int * p_32)
{
    int *l_289[1][4];
    short *l_304 = &g_305[3];
    unsigned *l_306[6] = {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0};
    int **l_307 = &l_289[0][0];
    unsigned **l_314 = &l_306[2];
    unsigned l_321 = 4294967290UL;
    int l_328 = 0L;
    int ****l_329 = &g_132;
    short l_399 = (-3L);
    int l_401 = 5L;
    int l_414 = (-1L);
    unsigned l_416 = 0x75D46DE8L;
    unsigned l_480 = 0x9B5594C2L;
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 4; j++)
            l_289[i][j] = (void*)0;
    }
    (**g_183) = l_289[0][0];
    g_309 = (g_308 = (g_74 = (g_145 ^ (safe_lshift_func_uint16_t_u_u(func_46(&l_289[0][0], (safe_sub_func_int32_t_s_s((safe_add_func_int16_t_s_s((g_7 >= p_31), (+((safe_add_func_int32_t_s_s((safe_div_func_uint32_t_u_u((g_237[0] = (p_31 | (safe_div_func_int32_t_s_s(((safe_sub_func_int8_t_s_s(((g_238 > g_238) == (+((*l_304) = (~p_31)))), func_46(&l_289[0][1], p_31, l_289[0][0], (*g_183)))) != 0xB5C3L), (*g_213))))), g_145)), (*g_213))) && (-1L))))), (*p_32))), l_306[0], l_307), p_31)))));
    l_321 = (safe_sub_func_int32_t_s_s((safe_add_func_int32_t_s_s(((-8L) & (((*l_314) = (void*)0) == &g_237[0])), (*p_32))), ((safe_mod_func_int16_t_s_s(func_46(&l_289[0][3], ((safe_lshift_func_int16_t_s_s((safe_div_func_int16_t_s_s(func_46(&l_289[0][0], p_31, (*g_69), &p_32), 0x5667L)), 0)) >= p_31), p_32, &l_289[0][0]), p_31)) <= 1L)));
    for (g_141 = 0; (g_141 >= 29); ++g_141)
    {
        char l_330 = (-6L);
        const unsigned short *l_331 = &g_285;
        int **l_334[1];
        int **l_335[10] = {&g_70, &g_70, &l_289[0][0], &g_70, &g_70, &l_289[0][0], &g_70, &g_70, &l_289[0][0], &g_70};
        unsigned l_366 = 4294967295UL;
        short *l_372 = &g_145;
        char l_415 = 6L;
        unsigned char l_468 = 0x8DL;
        int ****l_482[4] = {&g_132, &g_183, &g_132, &g_183};
        unsigned char l_494 = 1UL;
        int i;
        for (i = 0; i < 1; i++)
            l_334[i] = &l_289[0][1];
        if ((safe_add_func_uint8_t_u_u((safe_sub_func_int8_t_s_s(l_328, (((l_329 != &g_132) ^ (p_31 >= (((&p_32 != (void*)0) & l_330) ^ (l_331 == &p_31)))) == p_31))), p_31)))
        {
            unsigned short l_348 = 7UL;
            short *l_371[2][3] = {{(void*)0, &g_238, (void*)0}, {(void*)0, &g_238, (void*)0}};
            unsigned **l_378 = &l_306[0];
            unsigned short **l_396 = (void*)0;
            int *l_400[8][10][3] = {{{&g_68, &g_7, (void*)0}, {&g_68, &g_7, (void*)0}, {&g_68, &g_7, (void*)0}, {&g_68, &g_7, (void*)0}, {&g_68, &g_7, (void*)0}, {&g_68, &g_7, (void*)0}, {&g_68, &g_7, (void*)0}, {&g_68, &g_7, (void*)0}, {&g_68, &g_7, (void*)0}, {&g_68, &g_7, (void*)0}}, {{&g_68, &g_7, (void*)0}, {&g_68, &g_7, (void*)0}, {&g_68, &g_7, (void*)0}, {&g_68, &g_7, (void*)0}, {&g_68, &g_7, (void*)0}, {&g_68, &g_7, (void*)0}, {&g_68, &g_7, (void*)0}, {&g_68, &g_7, (void*)0}, {&g_68, &g_7, (void*)0}, {&g_68, &g_7, (void*)0}}, {{&g_68, &g_7, (void*)0}, {&g_68, &g_7, (void*)0}, {&g_68, &g_7, (void*)0}, {&g_68, &g_7, (void*)0}, {&g_68, &g_7, (void*)0}, {&g_68, &g_7, (void*)0}, {&g_68, &g_7, (void*)0}, {&g_68, &g_7, (void*)0}, {&g_68, &g_7, (void*)0}, {&g_68, &g_7, (void*)0}}, {{&g_68, &g_7, (void*)0}, {&g_68, &g_7, (void*)0}, {&g_68, &g_7, (void*)0}, {&g_68, &g_7, (void*)0}, {&g_68, &g_7, (void*)0}, {&g_68, &g_7, (void*)0}, {&g_68, &g_7, (void*)0}, {&g_68, &g_7, (void*)0}, {&g_68, &g_7, (void*)0}, {&g_68, &g_7, (void*)0}}, {{&g_68, &g_7, (void*)0}, {&g_68, &g_7, (void*)0}, {&g_68, &g_7, (void*)0}, {&g_68, &g_7, (void*)0}, {&g_68, &g_7, (void*)0}, {&g_68, &g_7, (void*)0}, {&g_68, &g_7, (void*)0}, {&g_68, &g_7, (void*)0}, {&g_68, &g_7, (void*)0}, {&g_68, &g_7, (void*)0}}, {{&g_68, &g_7, (void*)0}, {&g_68, &g_7, (void*)0}, {&g_68, &g_7, (void*)0}, {&g_68, &g_7, (void*)0}, {&g_68, &g_7, (void*)0}, {&g_68, &g_7, (void*)0}, {&g_68, &g_7, (void*)0}, {&g_68, &g_7, (void*)0}, {&g_68, &g_7, (void*)0}, {&g_68, &g_7, (void*)0}}, {{&g_68, &g_7, (void*)0}, {&g_68, &g_7, (void*)0}, {&g_68, &g_7, (void*)0}, {&g_68, &g_7, (void*)0}, {&g_68, &g_7, (void*)0}, {&g_68, &g_7, (void*)0}, {&g_68, &g_7, (void*)0}, {&g_68, &g_7, (void*)0}, {&g_68, &g_7, (void*)0}, {&g_68, &g_7, (void*)0}}, {{&g_68, &g_7, (void*)0}, {&g_68, &g_7, (void*)0}, {&g_68, &g_7, (void*)0}, {&g_68, &g_7, (void*)0}, {&g_68, &g_7, (void*)0}, {&g_68, &g_7, (void*)0}, {&g_68, &g_7, (void*)0}, {&g_68, &g_7, (void*)0}, {&g_68, &g_7, (void*)0}, {&g_68, &g_7, (void*)0}}};
            int i, j, k;
            for (g_285 = 0; (g_285 >= 56); ++g_285)
            {
                return (*g_183);
            }
            for (l_321 = (-3); (l_321 > 4); ++l_321)
            {
                short l_346 = 0x6592L;
                int l_363 = 0xC012D40EL;
                int **l_383 = &g_70;
                unsigned l_384 = 0x4EEDF3ECL;
            }
            (*p_30) = func_58(func_33(l_335[2], p_31, ((safe_div_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u(p_31, 3)), ((safe_lshift_func_int8_t_s_u(p_31, g_356)) | ((void*)0 != &p_32)))) & (safe_mod_func_uint16_t_u_u(((*p_32) == (safe_lshift_func_uint16_t_u_u((l_414 != p_31), l_415))), p_31)))), (*p_32), p_31, p_31, &g_183);
        }
        else
        {
            if (l_416)
                break;
        }
        for (l_366 = 0; (l_366 <= 0); l_366 += 1)
        {
            int **l_421 = (void*)0;
            int l_428 = (-1L);
            unsigned char l_445 = 0x96L;
            char l_462 = 0xC8L;
            unsigned char l_481[7][9][4] = {{{0x6BL, 3UL, 1UL, 1UL}, {0x6BL, 3UL, 1UL, 1UL}, {0x6BL, 3UL, 1UL, 1UL}, {0x6BL, 3UL, 1UL, 1UL}, {0x6BL, 3UL, 1UL, 1UL}, {0x6BL, 3UL, 1UL, 1UL}, {0x6BL, 3UL, 1UL, 1UL}, {0x6BL, 3UL, 1UL, 1UL}, {0x6BL, 3UL, 1UL, 1UL}}, {{0x6BL, 3UL, 1UL, 1UL}, {0x6BL, 3UL, 1UL, 1UL}, {0x6BL, 3UL, 1UL, 1UL}, {0x6BL, 3UL, 1UL, 1UL}, {0x6BL, 3UL, 1UL, 1UL}, {0x6BL, 3UL, 1UL, 1UL}, {0x6BL, 3UL, 1UL, 1UL}, {0x6BL, 3UL, 1UL, 1UL}, {0x6BL, 3UL, 1UL, 1UL}}, {{0x6BL, 3UL, 1UL, 1UL}, {0x6BL, 3UL, 1UL, 1UL}, {0x6BL, 3UL, 1UL, 1UL}, {0x6BL, 3UL, 1UL, 1UL}, {0x6BL, 3UL, 1UL, 1UL}, {0x6BL, 3UL, 1UL, 1UL}, {0x6BL, 3UL, 1UL, 1UL}, {0x6BL, 3UL, 1UL, 1UL}, {0x6BL, 3UL, 1UL, 1UL}}, {{0x6BL, 3UL, 1UL, 1UL}, {0x6BL, 3UL, 1UL, 1UL}, {0x6BL, 3UL, 1UL, 1UL}, {0x6BL, 3UL, 1UL, 1UL}, {0x6BL, 3UL, 1UL, 1UL}, {0x6BL, 3UL, 1UL, 1UL}, {0x6BL, 3UL, 1UL, 1UL}, {0x6BL, 3UL, 1UL, 1UL}, {0x6BL, 3UL, 1UL, 1UL}}, {{0x6BL, 3UL, 1UL, 1UL}, {0x6BL, 3UL, 1UL, 1UL}, {0x6BL, 3UL, 1UL, 1UL}, {0x6BL, 3UL, 1UL, 1UL}, {0x6BL, 3UL, 1UL, 1UL}, {0x6BL, 3UL, 1UL, 1UL}, {0x6BL, 3UL, 1UL, 1UL}, {0x6BL, 3UL, 1UL, 1UL}, {0x6BL, 3UL, 1UL, 1UL}}, {{0x6BL, 3UL, 1UL, 1UL}, {0x6BL, 3UL, 1UL, 1UL}, {0x6BL, 3UL, 1UL, 1UL}, {0x6BL, 3UL, 1UL, 1UL}, {0x6BL, 3UL, 1UL, 1UL}, {0x6BL, 3UL, 1UL, 1UL}, {0x6BL, 3UL, 1UL, 1UL}, {0x6BL, 3UL, 1UL, 1UL}, {0x6BL, 3UL, 1UL, 1UL}}, {{0x6BL, 3UL, 1UL, 1UL}, {0x6BL, 3UL, 1UL, 1UL}, {0x6BL, 3UL, 1UL, 1UL}, {0x6BL, 3UL, 1UL, 1UL}, {0x6BL, 3UL, 1UL, 1UL}, {0x6BL, 3UL, 1UL, 1UL}, {0x6BL, 3UL, 1UL, 1UL}, {0x6BL, 3UL, 1UL, 1UL}, {0x6BL, 3UL, 1UL, 1UL}}};
            char **l_500 = &g_87[5][0];
            int i, j, k;
            for (g_309 = 0; (g_309 <= 0); g_309 += 1)
            {
                unsigned l_425[5][7][7] = {{{4294967295UL, 4294967291UL, 0x46579028L, 4294967293UL, 0x46579028L, 4294967291UL, 4294967295UL}, {4294967295UL, 4294967291UL, 0x46579028L, 4294967293UL, 0x46579028L, 4294967291UL, 4294967295UL}, {4294967295UL, 4294967291UL, 0x46579028L, 4294967293UL, 0x46579028L, 4294967291UL, 4294967295UL}, {4294967295UL, 4294967291UL, 0x46579028L, 4294967293UL, 0x46579028L, 4294967291UL, 4294967295UL}, {4294967295UL, 4294967291UL, 0x46579028L, 4294967293UL, 0x46579028L, 4294967291UL, 4294967295UL}, {4294967295UL, 4294967291UL, 0x46579028L, 4294967293UL, 0x46579028L, 4294967291UL, 4294967295UL}, {4294967295UL, 4294967291UL, 0x46579028L, 4294967293UL, 0x46579028L, 4294967291UL, 4294967295UL}}, {{4294967295UL, 4294967291UL, 0x46579028L, 4294967293UL, 0x46579028L, 4294967291UL, 4294967295UL}, {4294967295UL, 4294967291UL, 0x46579028L, 4294967293UL, 0x46579028L, 4294967291UL, 4294967295UL}, {4294967295UL, 4294967291UL, 0x46579028L, 4294967293UL, 0x46579028L, 4294967291UL, 4294967295UL}, {4294967295UL, 4294967291UL, 0x46579028L, 4294967293UL, 0x46579028L, 4294967291UL, 4294967295UL}, {4294967295UL, 4294967291UL, 0x46579028L, 4294967293UL, 0x46579028L, 4294967291UL, 4294967295UL}, {4294967295UL, 4294967291UL, 0x46579028L, 4294967293UL, 0x46579028L, 4294967291UL, 4294967295UL}, {4294967295UL, 4294967291UL, 0x46579028L, 4294967293UL, 0x46579028L, 4294967291UL, 4294967295UL}}, {{4294967295UL, 4294967291UL, 0x46579028L, 4294967293UL, 0x46579028L, 4294967291UL, 4294967295UL}, {4294967295UL, 4294967291UL, 0x46579028L, 4294967293UL, 0x46579028L, 4294967291UL, 4294967295UL}, {4294967295UL, 4294967291UL, 0x46579028L, 4294967293UL, 0x46579028L, 4294967291UL, 4294967295UL}, {4294967295UL, 4294967291UL, 0x46579028L, 4294967293UL, 0x46579028L, 4294967291UL, 4294967295UL}, {4294967295UL, 4294967291UL, 0x46579028L, 4294967293UL, 0x46579028L, 4294967291UL, 4294967295UL}, {4294967295UL, 4294967291UL, 0x46579028L, 4294967293UL, 0x46579028L, 4294967291UL, 4294967295UL}, {4294967295UL, 4294967291UL, 0x46579028L, 4294967293UL, 0x46579028L, 4294967291UL, 4294967295UL}}, {{4294967295UL, 4294967291UL, 0x46579028L, 4294967293UL, 0x46579028L, 4294967291UL, 4294967295UL}, {4294967295UL, 4294967291UL, 0x46579028L, 4294967293UL, 0x46579028L, 4294967291UL, 4294967295UL}, {4294967295UL, 4294967291UL, 0x46579028L, 4294967293UL, 0x46579028L, 4294967291UL, 4294967295UL}, {4294967295UL, 4294967291UL, 0x46579028L, 4294967293UL, 0x46579028L, 4294967291UL, 4294967295UL}, {4294967295UL, 4294967291UL, 0x46579028L, 4294967293UL, 0x46579028L, 4294967291UL, 4294967295UL}, {4294967295UL, 4294967291UL, 0x46579028L, 4294967293UL, 0x46579028L, 4294967291UL, 4294967295UL}, {4294967295UL, 4294967291UL, 0x46579028L, 4294967293UL, 0x46579028L, 4294967291UL, 4294967295UL}}, {{4294967295UL, 4294967291UL, 0x46579028L, 4294967293UL, 0x46579028L, 4294967291UL, 4294967295UL}, {4294967295UL, 4294967291UL, 0x46579028L, 4294967293UL, 0x46579028L, 4294967291UL, 4294967295UL}, {4294967295UL, 4294967291UL, 0x46579028L, 4294967293UL, 0x46579028L, 4294967291UL, 4294967295UL}, {4294967295UL, 4294967291UL, 0x46579028L, 4294967293UL, 0x46579028L, 4294967291UL, 4294967295UL}, {4294967295UL, 4294967291UL, 0x46579028L, 4294967293UL, 0x46579028L, 4294967291UL, 4294967295UL}, {4294967295UL, 4294967291UL, 0x46579028L, 4294967293UL, 0x46579028L, 4294967291UL, 4294967295UL}, {4294967295UL, 4294967291UL, 0x46579028L, 4294967293UL, 0x46579028L, 4294967291UL, 4294967295UL}}};
                unsigned l_426 = 4294967294UL;
                char *l_432 = (void*)0;
                int ****l_446 = &g_183;
                unsigned short * const *l_447 = &g_398;
                int **l_483 = &l_289[0][0];
                int l_486 = 1L;
                unsigned l_487[3][9][9] = {{{0x89D0D663L, 7UL, 0x88424730L, 7UL, 0x89D0D663L, 0UL, 0x89D0D663L, 7UL, 0x88424730L}, {0x89D0D663L, 7UL, 0x88424730L, 7UL, 0x89D0D663L, 0UL, 0x89D0D663L, 7UL, 0x88424730L}, {0x89D0D663L, 7UL, 0x88424730L, 7UL, 0x89D0D663L, 0UL, 0x89D0D663L, 7UL, 0x88424730L}, {0x89D0D663L, 7UL, 0x88424730L, 7UL, 0x89D0D663L, 0UL, 0x89D0D663L, 7UL, 0x88424730L}, {0x89D0D663L, 7UL, 0x88424730L, 7UL, 0x89D0D663L, 0UL, 0x89D0D663L, 7UL, 0x88424730L}, {0x89D0D663L, 7UL, 0x88424730L, 7UL, 0x89D0D663L, 0UL, 0x89D0D663L, 7UL, 0x88424730L}, {0x89D0D663L, 7UL, 0x88424730L, 7UL, 0x89D0D663L, 0UL, 0x89D0D663L, 7UL, 0x88424730L}, {0x89D0D663L, 7UL, 0x88424730L, 7UL, 0x89D0D663L, 0UL, 0x89D0D663L, 7UL, 0x88424730L}, {0x89D0D663L, 7UL, 0x88424730L, 7UL, 0x89D0D663L, 0UL, 0x89D0D663L, 7UL, 0x88424730L}}, {{0x89D0D663L, 7UL, 0x88424730L, 7UL, 0x89D0D663L, 0UL, 0x89D0D663L, 7UL, 0x88424730L}, {0x89D0D663L, 7UL, 0x88424730L, 7UL, 0x89D0D663L, 0UL, 0x89D0D663L, 7UL, 0x88424730L}, {0x89D0D663L, 7UL, 0x88424730L, 7UL, 0x89D0D663L, 0UL, 0x89D0D663L, 7UL, 0x88424730L}, {0x89D0D663L, 7UL, 0x88424730L, 7UL, 0x89D0D663L, 0UL, 0x89D0D663L, 7UL, 0x88424730L}, {0x89D0D663L, 7UL, 0x88424730L, 7UL, 0x89D0D663L, 0UL, 0x89D0D663L, 7UL, 0x88424730L}, {0x89D0D663L, 7UL, 0x88424730L, 7UL, 0x89D0D663L, 0UL, 0x89D0D663L, 7UL, 0x88424730L}, {0x89D0D663L, 7UL, 0x88424730L, 7UL, 0x89D0D663L, 0UL, 0x89D0D663L, 7UL, 0x88424730L}, {0x89D0D663L, 7UL, 0x88424730L, 7UL, 0x89D0D663L, 0UL, 0x89D0D663L, 7UL, 0x88424730L}, {0x89D0D663L, 7UL, 0x88424730L, 7UL, 0x89D0D663L, 0UL, 0x89D0D663L, 7UL, 0x88424730L}}, {{0x89D0D663L, 7UL, 0x88424730L, 7UL, 0x89D0D663L, 0UL, 0x89D0D663L, 7UL, 0x88424730L}, {0x89D0D663L, 7UL, 0x88424730L, 7UL, 0x89D0D663L, 0UL, 0x89D0D663L, 7UL, 0x88424730L}, {0x89D0D663L, 7UL, 0x88424730L, 7UL, 0x89D0D663L, 0UL, 0x89D0D663L, 7UL, 0x88424730L}, {0x89D0D663L, 7UL, 0x88424730L, 7UL, 0x89D0D663L, 0UL, 0x89D0D663L, 7UL, 0x88424730L}, {0x89D0D663L, 7UL, 0x88424730L, 7UL, 0x89D0D663L, 0UL, 0x89D0D663L, 7UL, 0x88424730L}, {0x89D0D663L, 7UL, 0x88424730L, 7UL, 0x89D0D663L, 0UL, 0x89D0D663L, 7UL, 0x88424730L}, {0x89D0D663L, 7UL, 0x88424730L, 7UL, 0x89D0D663L, 0UL, 0x89D0D663L, 7UL, 0x88424730L}, {0x89D0D663L, 7UL, 0x88424730L, 7UL, 0x89D0D663L, 0UL, 0x89D0D663L, 7UL, 0x88424730L}, {0x89D0D663L, 7UL, 0x88424730L, 7UL, 0x89D0D663L, 0UL, 0x89D0D663L, 7UL, 0x88424730L}}};
                unsigned l_497 = 0x50E051C7L;
                int i, j, k;
                if ((safe_mod_func_uint16_t_u_u(g_305[l_366], (g_305[(g_309 + 3)] | (safe_lshift_func_uint16_t_u_s(65535UL, 3))))))
                {
                    int **l_422 = &l_289[l_366][l_366];
                    char *l_427[1];
                    int l_429 = (-1L);
                    int i;
                    for (i = 0; i < 1; i++)
                        l_427[i] = (void*)0;
                    l_429 = ((g_305[(g_309 + 3)] | (-3L)) ^ func_46(&p_32, (l_428 = (g_305[(l_366 + 3)] > l_426)), l_306[(l_366 + 5)], l_421));
                    if ((**p_30))
                    {
                        int i;
                        l_428 = (safe_add_func_int8_t_s_s((l_432 == &g_268), p_31));
                        (*l_422) = l_306[(l_366 + 1)];
                        return l_421;
                    }
                    else
                    {
                        int l_433 = 0xE7593958L;
                        l_433 = l_433;
                        if ((*g_6))
                            break;
                        return l_421;
                    }
                }
                else
                {
                    unsigned char l_434 = 0x95L;
                    const int **l_442 = &g_213;
                    int **l_443[5][4] = {{&l_289[l_366][l_366], &g_70, &l_289[l_366][l_366], &l_289[0][0]}, {&l_289[l_366][l_366], &g_70, &l_289[l_366][l_366], &l_289[0][0]}, {&l_289[l_366][l_366], &g_70, &l_289[l_366][l_366], &l_289[0][0]}, {&l_289[l_366][l_366], &g_70, &l_289[l_366][l_366], &l_289[0][0]}, {&l_289[l_366][l_366], &g_70, &l_289[l_366][l_366], &l_289[0][0]}};
                    char *l_458 = &l_330;
                    unsigned char *l_459 = &l_445;
                    const int ***l_461[8][9][1] = {{{&l_442}, {&l_442}, {&l_442}, {&l_442}, {&l_442}, {&l_442}, {&l_442}, {&l_442}, {&l_442}}, {{&l_442}, {&l_442}, {&l_442}, {&l_442}, {&l_442}, {&l_442}, {&l_442}, {&l_442}, {&l_442}}, {{&l_442}, {&l_442}, {&l_442}, {&l_442}, {&l_442}, {&l_442}, {&l_442}, {&l_442}, {&l_442}}, {{&l_442}, {&l_442}, {&l_442}, {&l_442}, {&l_442}, {&l_442}, {&l_442}, {&l_442}, {&l_442}}, {{&l_442}, {&l_442}, {&l_442}, {&l_442}, {&l_442}, {&l_442}, {&l_442}, {&l_442}, {&l_442}}, {{&l_442}, {&l_442}, {&l_442}, {&l_442}, {&l_442}, {&l_442}, {&l_442}, {&l_442}, {&l_442}}, {{&l_442}, {&l_442}, {&l_442}, {&l_442}, {&l_442}, {&l_442}, {&l_442}, {&l_442}, {&l_442}}, {{&l_442}, {&l_442}, {&l_442}, {&l_442}, {&l_442}, {&l_442}, {&l_442}, {&l_442}, {&l_442}}};
                    const int ****l_460 = &l_461[5][8][0];
                    unsigned l_485 = 1UL;
                    int i, j, k;
                    if (((l_434 > 0x547AB530L) >= ((((safe_sub_func_uint16_t_u_u(((((*p_32) < l_434) || p_31) < ((safe_sub_func_uint8_t_u_u(func_46(l_335[2], g_441[0][6], ((*l_442) = (*l_307)), l_443[2][1]), 0xAEL)) & 0UL)), 8UL)) <= (-10L)) | p_31) < p_31)))
                    {
                        int *l_444[8][8][4] = {{{(void*)0, &g_74, &g_74, &l_428}, {(void*)0, &g_74, &g_74, &l_428}, {(void*)0, &g_74, &g_74, &l_428}, {(void*)0, &g_74, &g_74, &l_428}, {(void*)0, &g_74, &g_74, &l_428}, {(void*)0, &g_74, &g_74, &l_428}, {(void*)0, &g_74, &g_74, &l_428}, {(void*)0, &g_74, &g_74, &l_428}}, {{(void*)0, &g_74, &g_74, &l_428}, {(void*)0, &g_74, &g_74, &l_428}, {(void*)0, &g_74, &g_74, &l_428}, {(void*)0, &g_74, &g_74, &l_428}, {(void*)0, &g_74, &g_74, &l_428}, {(void*)0, &g_74, &g_74, &l_428}, {(void*)0, &g_74, &g_74, &l_428}, {(void*)0, &g_74, &g_74, &l_428}}, {{(void*)0, &g_74, &g_74, &l_428}, {(void*)0, &g_74, &g_74, &l_428}, {(void*)0, &g_74, &g_74, &l_428}, {(void*)0, &g_74, &g_74, &l_428}, {(void*)0, &g_74, &g_74, &l_428}, {(void*)0, &g_74, &g_74, &l_428}, {(void*)0, &g_74, &g_74, &l_428}, {(void*)0, &g_74, &g_74, &l_428}}, {{(void*)0, &g_74, &g_74, &l_428}, {(void*)0, &g_74, &g_74, &l_428}, {(void*)0, &g_74, &g_74, &l_428}, {(void*)0, &g_74, &g_74, &l_428}, {(void*)0, &g_74, &g_74, &l_428}, {(void*)0, &g_74, &g_74, &l_428}, {(void*)0, &g_74, &g_74, &l_428}, {(void*)0, &g_74, &g_74, &l_428}}, {{(void*)0, &g_74, &g_74, &l_428}, {(void*)0, &g_74, &g_74, &l_428}, {(void*)0, &g_74, &g_74, &l_428}, {(void*)0, &g_74, &g_74, &l_428}, {(void*)0, &g_74, &g_74, &l_428}, {(void*)0, &g_74, &g_74, &l_428}, {(void*)0, &g_74, &g_74, &l_428}, {(void*)0, &g_74, &g_74, &l_428}}, {{(void*)0, &g_74, &g_74, &l_428}, {(void*)0, &g_74, &g_74, &l_428}, {(void*)0, &g_74, &g_74, &l_428}, {(void*)0, &g_74, &g_74, &l_428}, {(void*)0, &g_74, &g_74, &l_428}, {(void*)0, &g_74, &g_74, &l_428}, {(void*)0, &g_74, &g_74, &l_428}, {(void*)0, &g_74, &g_74, &l_428}}, {{(void*)0, &g_74, &g_74, &l_428}, {(void*)0, &g_74, &g_74, &l_428}, {(void*)0, &g_74, &g_74, &l_428}, {(void*)0, &g_74, &g_74, &l_428}, {(void*)0, &g_74, &g_74, &l_428}, {(void*)0, &g_74, &g_74, &l_428}, {(void*)0, &g_74, &g_74, &l_428}, {(void*)0, &g_74, &g_74, &l_428}}, {{(void*)0, &g_74, &g_74, &l_428}, {(void*)0, &g_74, &g_74, &l_428}, {(void*)0, &g_74, &g_74, &l_428}, {(void*)0, &g_74, &g_74, &l_428}, {(void*)0, &g_74, &g_74, &l_428}, {(void*)0, &g_74, &g_74, &l_428}, {(void*)0, &g_74, &g_74, &l_428}, {(void*)0, &g_74, &g_74, &l_428}}};
                        int i, j, k;
                        (*l_442) = l_444[2][5][2];
                        (*g_69) = func_58((*g_183), l_445, g_2[6], p_31, l_446);
                    }
                    else
                    {
                        (*g_452) = l_447;
                        (**g_183) = (*p_30);
                        (*p_30) = (*p_30);
                        (*g_389) = (*p_30);
                    }
                    (*p_30) = ((*l_307) = func_58(((*g_183) = func_33(func_33((l_334[l_366] = func_33(func_33(func_33(l_443[2][1], g_68, (safe_lshift_func_uint8_t_u_u((g_145 || (safe_lshift_func_uint8_t_u_u(p_31, (g_457 != ((*l_459) = (((*l_458) = p_31) > p_31)))))), 3))), ((l_460 != l_329) || (*p_32)), g_305[3]), g_441[0][2], l_462)), g_237[0], g_457), g_285, g_305[1])), g_463, p_31, p_31, &g_132));
                    (***g_183) = (safe_sub_func_uint8_t_u_u((****l_446), p_31));
                    if (((p_31 <= func_46(func_33(l_443[2][1], g_68, p_31), l_428, (*p_30), l_334[0])) <= 255UL))
                    {
                        unsigned l_469[4];
                        int l_484[4];
                        int i;
                        for (i = 0; i < 4; i++)
                            l_469[i] = 0x86919F33L;
                        for (i = 0; i < 4; i++)
                            l_484[i] = 0x99499EF2L;
                        (***l_460) = func_58((*g_183), (safe_rshift_func_int16_t_s_s(((*l_304) = l_468), l_469[2])), (((safe_lshift_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s((safe_div_func_int8_t_s_s(p_31, 0xC3L)), p_31)), (safe_div_func_int32_t_s_s((safe_lshift_func_uint16_t_u_u(func_46(&p_32, p_31, func_58(func_33(func_33((**l_446), l_480, g_457), g_441[0][6], p_31), l_469[2], p_31, l_481[4][2][2], l_482[2]), l_483), p_31)), (*p_32))))) < p_31) && g_2[7]), p_31, &g_183);
                        l_484[0] = (*p_32);
                        l_485 = (*p_32);
                    }
                    else
                    {
                        int *****l_491[7];
                        int ******l_492[2];
                        int i;
                        for (i = 0; i < 7; i++)
                            l_491[i] = &l_482[2];
                        for (i = 0; i < 2; i++)
                            l_492[i] = (void*)0;
                        l_487[1][0][1] = (l_486 = func_46((*g_183), p_31, (**g_183), (*g_183)));
                        (*g_70) = (safe_sub_func_int8_t_s_s((((-3L) <= (safe_unary_minus_func_uint32_t_u((l_491[6] == (g_493 = &l_446))))) ^ (l_494 != (((&l_330 == l_432) <= g_268) < p_31))), g_308));
                    }
                }
                l_497 = ((g_141 >= (****l_446)) == (((safe_rshift_func_int16_t_s_u(p_31, p_31)) | (*p_32)) && (*p_32)));
            }
            l_428 = ((void*)0 == l_289[l_366][(l_366 + 1)]);
            l_428 = ((0x01L ^ (&l_330 == ((*l_500) = &g_88))) > g_305[(l_366 + 1)]);
        }
    }
    return (*g_183);
}







static int ** func_33(int ** p_34, unsigned char p_35, int p_36)
{
    int **l_288 = &g_70;
    return l_288;
}







static int ** func_37(unsigned short p_38, char p_39, const char p_40, int * p_41)
{
    short l_79 = 0xDCE5L;
    const int *l_80 = &g_7;
    int *l_85 = &g_74;
    int *l_86 = &g_68;
    int ****l_166 = &g_132;
    unsigned l_178 = 4294967295UL;
    unsigned short *l_195 = &g_105;
    const unsigned l_227[3] = {4294967295UL, 4294967295UL, 4294967295UL};
    unsigned short l_230 = 1UL;
    int l_258 = 0x051932FCL;
    unsigned char l_269 = 0x6AL;
    int **l_286 = (void*)0;
    int i;
    if ((safe_sub_func_int32_t_s_s(((*p_41) < ((*l_86) = ((func_46(&p_41, l_79, l_80, &g_70) == (safe_div_func_uint16_t_u_u((safe_add_func_int32_t_s_s(((*l_85) = (-1L)), (*g_6))), p_39))) || 0x594AL))), 0xE926F5D9L)))
    {
        char **l_89 = &g_87[5][0];
        unsigned l_93 = 0x183AA7A6L;
        int **l_97[5] = {&l_86, (void*)0, &l_86, (void*)0, &l_86};
        short *l_120 = &l_79;
        unsigned l_133 = 4294967295UL;
        int i;
        for (g_74 = 0; g_74 < 10; g_74 += 1)
        {
            g_2[g_74] = 0UL;
        }
        (*g_69) = p_41;
        if ((((*l_89) = g_87[5][0]) != (void*)0))
        {
            unsigned l_90 = 1UL;
            const int *l_95 = (void*)0;
            if (((*l_80) & (((void*)0 != (*g_69)) != ((g_88 >= l_90) > ((safe_lshift_func_int16_t_s_s(l_93, 11)) && p_38)))))
            {
                char *l_94[2][2][10] = {{{&g_88, &g_88, &g_88, &g_88, &g_88, &g_88, &g_88, &g_88, &g_88, &g_88}, {&g_88, &g_88, &g_88, &g_88, &g_88, &g_88, &g_88, &g_88, &g_88, &g_88}}, {{&g_88, &g_88, &g_88, &g_88, &g_88, &g_88, &g_88, &g_88, &g_88, &g_88}, {&g_88, &g_88, &g_88, &g_88, &g_88, &g_88, &g_88, &g_88, &g_88, &g_88}}};
                int ***l_96[9] = {&g_69, &g_69, &g_69, &g_69, &g_69, &g_69, &g_69, &g_69, &g_69};
                unsigned short *l_104 = &g_105;
                short *l_106 = (void*)0;
                short *l_107 = (void*)0;
                short *l_108 = &l_79;
                int i, j, k;
                (*l_85) = func_46(&g_70, (p_39 = p_38), l_95, (l_97[2] = (void*)0));
                (*l_85) = (~(g_68 != ((+(safe_sub_func_uint16_t_u_u(((*l_104) = (safe_lshift_func_int8_t_s_u((p_39 ^ p_39), 7))), ((*l_108) = (*l_86))))) >= 0xF9805026L)));
            }
            else
            {
                return &g_70;
            }
            for (g_74 = 7; (g_74 >= 0); g_74 -= 1)
            {
                int l_113 = 0xF2DBD243L;
                int i;
                (*l_86) = (safe_div_func_int16_t_s_s((safe_sub_func_uint32_t_u_u(g_2[g_74], l_113)), g_114));
            }
        }
        else
        {
            int *l_130 = &g_7;
            short *l_143 = &l_79;
            for (g_105 = 0; (g_105 >= 21); g_105++)
            {
                (*l_86) = (*p_41);
                return &g_70;
            }
            for (p_39 = 0; p_39 < 5; p_39 += 1)
            {
                l_97[p_39] = &g_70;
            }
            if (((-5L) <= func_46(&p_41, (p_39 = (*l_86)), (*g_69), &g_70)))
            {
                int *l_117 = &g_7;
                short * const l_121 = &l_79;
                (*g_69) = l_117;
                for (p_38 = (-1); (p_38 > 21); ++p_38)
                {
                    unsigned l_122 = 1UL;
                    char *l_123 = &g_88;
                    int **l_124 = &g_70;
                    unsigned short *l_140[4] = {&g_105, &g_105, &g_105, &g_105};
                    int ****l_142[6][7] = {{&g_132, (void*)0, &g_132, &g_132, (void*)0, &g_132, (void*)0}, {&g_132, (void*)0, &g_132, &g_132, (void*)0, &g_132, (void*)0}, {&g_132, (void*)0, &g_132, &g_132, (void*)0, &g_132, (void*)0}, {&g_132, (void*)0, &g_132, &g_132, (void*)0, &g_132, (void*)0}, {&g_132, (void*)0, &g_132, &g_132, (void*)0, &g_132, (void*)0}, {&g_132, (void*)0, &g_132, &g_132, (void*)0, &g_132, (void*)0}};
                    int i, j;
                    (*l_85) = (l_120 == l_121);
                    if (l_122)
                        continue;
                    if (func_46(&l_117, ((*l_123) = p_38), (*g_69), l_124))
                    {
                        return &g_70;
                    }
                    else
                    {
                        short l_125 = 0x88EAL;
                        (*g_69) = func_58(&g_70, func_46(&g_70, ((l_125 == ((*l_86) = g_88)) <= (safe_lshift_func_uint8_t_u_s(((safe_div_func_int32_t_s_s((((*g_69) = l_130) == p_41), (*l_85))) > ((void*)0 != &p_39)), (*l_117)))), l_85, g_69), g_74, l_125, g_131);
                        (*l_85) = l_133;
                    }
                    if (((p_38 != g_105) && ((((*l_117) || (safe_lshift_func_uint16_t_u_s(((*l_86) = (g_105 = (p_39 > (*p_41)))), 14))) | (*p_41)) >= (-3L))))
                    {
                        return &g_70;
                    }
                    else
                    {
                        return &g_70;
                    }
                }
            }
            else
            {
                (*l_85) = (l_143 == g_144[0]);
            }
        }
    }
    else
    {
        char *l_149 = &g_88;
        const int *l_150 = &g_74;
        int **l_151[6] = {&l_86, &l_86, &l_86, &l_86, &l_86, &l_86};
        unsigned short l_188 = 65535UL;
        short * const l_232 = &g_145;
        short *l_233 = (void*)0;
        unsigned char l_241 = 0xD1L;
        int i;
        (*l_86) = ((*l_85) = func_46(&l_85, (safe_div_func_int16_t_s_s(p_38, (safe_unary_minus_func_int8_t_s(((*l_149) = p_40))))), l_150, &p_41));
        if (((!p_40) != (func_46(l_151[1], (*l_85), (*g_69), &g_70) != g_74)))
        {
            int **l_152 = &g_70;
            if ((*l_85))
            {
                return l_152;
            }
            else
            {
                int **l_157 = &l_85;
                char **l_158[10][10] = {{&l_149, &g_87[5][0], &g_87[5][0], &l_149, &l_149, &g_87[0][4], &l_149, (void*)0, &l_149, &g_87[0][4]}, {&l_149, &g_87[5][0], &g_87[5][0], &l_149, &l_149, &g_87[0][4], &l_149, (void*)0, &l_149, &g_87[0][4]}, {&l_149, &g_87[5][0], &g_87[5][0], &l_149, &l_149, &g_87[0][4], &l_149, (void*)0, &l_149, &g_87[0][4]}, {&l_149, &g_87[5][0], &g_87[5][0], &l_149, &l_149, &g_87[0][4], &l_149, (void*)0, &l_149, &g_87[0][4]}, {&l_149, &g_87[5][0], &g_87[5][0], &l_149, &l_149, &g_87[0][4], &l_149, (void*)0, &l_149, &g_87[0][4]}, {&l_149, &g_87[5][0], &g_87[5][0], &l_149, &l_149, &g_87[0][4], &l_149, (void*)0, &l_149, &g_87[0][4]}, {&l_149, &g_87[5][0], &g_87[5][0], &l_149, &l_149, &g_87[0][4], &l_149, (void*)0, &l_149, &g_87[0][4]}, {&l_149, &g_87[5][0], &g_87[5][0], &l_149, &l_149, &g_87[0][4], &l_149, (void*)0, &l_149, &g_87[0][4]}, {&l_149, &g_87[5][0], &g_87[5][0], &l_149, &l_149, &g_87[0][4], &l_149, (void*)0, &l_149, &g_87[0][4]}, {&l_149, &g_87[5][0], &g_87[5][0], &l_149, &l_149, &g_87[0][4], &l_149, (void*)0, &l_149, &g_87[0][4]}};
                int i, j;
                for (p_39 = 0; (p_39 == (-6)); p_39--)
                {
                    unsigned l_164[7][3][4] = {{{0x4F9EB425L, 0x83122935L, 0xD56EF34DL, 3UL}, {0x4F9EB425L, 0x83122935L, 0xD56EF34DL, 3UL}, {0x4F9EB425L, 0x83122935L, 0xD56EF34DL, 3UL}}, {{0x4F9EB425L, 0x83122935L, 0xD56EF34DL, 3UL}, {0x4F9EB425L, 0x83122935L, 0xD56EF34DL, 3UL}, {0x4F9EB425L, 0x83122935L, 0xD56EF34DL, 3UL}}, {{0x4F9EB425L, 0x83122935L, 0xD56EF34DL, 3UL}, {0x4F9EB425L, 0x83122935L, 0xD56EF34DL, 3UL}, {0x4F9EB425L, 0x83122935L, 0xD56EF34DL, 3UL}}, {{0x4F9EB425L, 0x83122935L, 0xD56EF34DL, 3UL}, {0x4F9EB425L, 0x83122935L, 0xD56EF34DL, 3UL}, {0x4F9EB425L, 0x83122935L, 0xD56EF34DL, 3UL}}, {{0x4F9EB425L, 0x83122935L, 0xD56EF34DL, 3UL}, {0x4F9EB425L, 0x83122935L, 0xD56EF34DL, 3UL}, {0x4F9EB425L, 0x83122935L, 0xD56EF34DL, 3UL}}, {{0x4F9EB425L, 0x83122935L, 0xD56EF34DL, 3UL}, {0x4F9EB425L, 0x83122935L, 0xD56EF34DL, 3UL}, {0x4F9EB425L, 0x83122935L, 0xD56EF34DL, 3UL}}, {{0x4F9EB425L, 0x83122935L, 0xD56EF34DL, 3UL}, {0x4F9EB425L, 0x83122935L, 0xD56EF34DL, 3UL}, {0x4F9EB425L, 0x83122935L, 0xD56EF34DL, 3UL}}};
                    unsigned char l_165 = 0x87L;
                    int i, j, k;
                    for (p_38 = 0; (p_38 != 44); p_38 = safe_add_func_uint8_t_u_u(p_38, 7))
                    {
                        short l_163 = 0x3834L;
                        unsigned char l_177 = 4UL;
                    }
                }
            }
            (*l_152) = (void*)0;
            (*l_85) = ((*l_86) = (*p_41));
        }
        else
        {
            int ***l_181 = &g_69;
            int ****l_182[7] = {&l_181, &l_181, &l_181, &l_181, &l_181, &l_181, &l_181};
            unsigned short *l_191[1][6];
            unsigned short **l_192 = &l_191[0][0];
            unsigned short *l_194 = &g_105;
            unsigned short **l_193[4][9][1] = {{{&l_194}, {&l_194}, {&l_194}, {&l_194}, {&l_194}, {&l_194}, {&l_194}, {&l_194}, {&l_194}}, {{&l_194}, {&l_194}, {&l_194}, {&l_194}, {&l_194}, {&l_194}, {&l_194}, {&l_194}, {&l_194}}, {{&l_194}, {&l_194}, {&l_194}, {&l_194}, {&l_194}, {&l_194}, {&l_194}, {&l_194}, {&l_194}}, {{&l_194}, {&l_194}, {&l_194}, {&l_194}, {&l_194}, {&l_194}, {&l_194}, {&l_194}, {&l_194}}};
            const unsigned char l_200 = 1UL;
            int i, j, k;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 6; j++)
                    l_191[i][j] = &l_188;
            }
            (*g_70) = (safe_div_func_uint32_t_u_u((0x61L != ((g_105 >= p_39) & ((*g_131) != (g_183 = l_181)))), (safe_rshift_func_uint8_t_u_s(g_114, ((safe_sub_func_uint8_t_u_u(p_40, p_39)) <= l_188)))));
            (*l_86) = (safe_sub_func_int16_t_s_s((((l_195 = ((*l_192) = l_191[0][0])) != &g_105) & 0x6894L), (safe_sub_func_int32_t_s_s(func_46(l_151[2], ((safe_sub_func_uint8_t_u_u(p_39, g_105)) & (-1L)), (**g_183), (*g_183)), l_200))));
        }
        for (l_178 = (-23); (l_178 <= 44); l_178++)
        {
            char l_206 = 0xA6L;
            short *l_209[6] = {&l_79, &l_79, &l_79, &l_79, &l_79, &l_79};
            int l_210 = 1L;
            int **l_214 = &l_86;
            int l_231 = 1L;
            short **l_234 = &l_209[3];
            unsigned *l_235 = (void*)0;
            unsigned *l_236 = &g_237[0];
            int i;
        }
    }
    for (g_74 = 0; (g_74 >= 11); g_74 = safe_add_func_uint8_t_u_u(g_74, 4))
    {
        int **l_245 = (void*)0;
        short *l_252 = &g_238;
        int l_257 = 0L;
        int *l_271[5] = {&l_257, &g_68, &l_257, &g_68, &l_257};
        unsigned char *l_284[7] = {&g_141, &g_141, &l_269, &g_141, &g_141, &l_269, &g_141};
        int i;
        (**g_183) = p_41;
        if (((void*)0 != &l_227[1]))
        {
            int **l_259 = (void*)0;
            char *l_266 = &g_88;
            char *l_267 = &g_268;
            (**g_183) = (*g_69);
        }
        else
        {
            int *l_270 = (void*)0;
            l_270 = (l_271[1] = ((*g_69) = l_270));
            for (l_178 = 0; l_178 < 1; l_178 += 1)
            {
                g_237[l_178] = 0x6B7EB918L;
            }
            for (l_258 = 0; (l_258 < (-23)); --l_258)
            {
                p_41 = l_270;
                for (g_88 = 0; (g_88 >= 0); g_88 -= 1)
                {
                    if (p_40)
                        break;
                    for (g_114 = 2; (g_114 <= 6); g_114 += 1)
                    {
                        int l_274 = 0x66CCFA5AL;
                        (*l_86) = l_274;
                    }
                    for (g_238 = 0; (g_238 <= 0); g_238 += 1)
                    {
                        int *l_275 = (void*)0;
                        (*g_69) = l_275;
                    }
                }
                (*g_69) = (p_41 = p_41);
                (**g_183) = (void*)0;
            }
        }
        (*l_86) = (func_46(&p_41, (*l_86), p_41, (*g_183)) | (safe_div_func_uint8_t_u_u((g_285 = (g_74 < (g_141 = (safe_rshift_func_uint8_t_u_u(((g_237[0] <= ((safe_sub_func_uint8_t_u_u(g_114, ((safe_sub_func_uint32_t_u_u(p_38, (*l_85))) > (*l_85)))) <= p_39)) >= p_40), 5))))), p_39)));
    }
    (*l_86) = (-1L);
    return l_286;
}







static char func_46(int ** p_47, char p_48, const int * p_49, int ** p_50)
{
    short l_75 = (-1L);
    (*g_69) = (*p_47);
    for (g_68 = (-13); (g_68 < 3); g_68 = safe_add_func_int16_t_s_s(g_68, 3))
    {
        int *l_73 = &g_74;
        l_73 = (*g_69);
    }
    return l_75;
}







static int * func_58(int ** p_59, int p_60, unsigned short p_61, unsigned short p_62, int **** p_63)
{
    int *l_66 = &g_7;
    int *l_67 = &g_68;
    (*p_59) = l_66;
    l_66 = (void*)0;
    (*p_59) = &g_7;
    (*l_67) = (*g_6);
    return &g_68;
}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_2[i], "g_2[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_68, "g_68", print_hash_value);
    transparent_crc(g_74, "g_74", print_hash_value);
    transparent_crc(g_88, "g_88", print_hash_value);
    transparent_crc(g_105, "g_105", print_hash_value);
    transparent_crc(g_114, "g_114", print_hash_value);
    transparent_crc(g_141, "g_141", print_hash_value);
    transparent_crc(g_145, "g_145", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_237[i], "g_237[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_238, "g_238", print_hash_value);
    transparent_crc(g_268, "g_268", print_hash_value);
    transparent_crc(g_285, "g_285", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_305[i], "g_305[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_308, "g_308", print_hash_value);
    transparent_crc(g_309, "g_309", print_hash_value);
    transparent_crc(g_356, "g_356", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_441[i][j], "g_441[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_457, "g_457", print_hash_value);
    transparent_crc(g_463, "g_463", print_hash_value);
    transparent_crc(g_579, "g_579", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
