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
   const unsigned f0;
};

struct S1 {
   signed f0 : 8;
   signed f1 : 27;
   signed f2 : 8;
};

union U2 {
   const unsigned f0;
};

union U3 {
   unsigned f0;
   char * f1;
   short f2;
   unsigned short f3;
};


static char g_13 = 0L;
static int g_15 = 0xD50F82BAL;
static unsigned short g_20 = 0x9B69L;
static short g_38 = 9L;
static union U3 g_55 = {4UL};
static union U3 *g_61 = &g_55;
static union U3 ** const g_60 = &g_61;
static struct S1 g_71 = {-7,5100,-5};
static union U2 g_75 = {0x23541209L};
static struct S0 * const g_77 = (void*)0;
static struct S0 g_80 = {0x68169B2BL};
static unsigned char g_86 = 247UL;
static struct S0 **g_92 = (void*)0;
static int g_96 = 3L;
static int g_100 = 0x3343DEF5L;
static unsigned short g_112 = 0x3A03L;
static unsigned char *g_149 = &g_86;
static unsigned char **g_148 = &g_149;
static unsigned char ***g_147 = &g_148;
static union U2 *g_171 = &g_75;
static union U2 **g_170 = &g_171;
static struct S0 *g_185 = (void*)0;
static unsigned short *g_191 = &g_112;
static unsigned short **g_190 = &g_191;
static struct S1 g_195 = {7,-8909,6};
static union U2 g_201 = {4294967293UL};
static int *g_214 = (void*)0;
static struct S1 *g_251 = &g_195;
static struct S1 **g_250 = &g_251;
static int g_317 = 6L;
static const char *g_376 = &g_13;
static const char **g_375 = &g_376;
static const union U3 g_437 = {6UL};
static const union U3 *g_436 = &g_437;
static short *g_453 = &g_55.f2;
static struct S1 g_457 = {-4,-9694,12};
static int g_465 = (-5L);
static unsigned char g_475 = 0x09L;
static char g_513 = (-2L);
static struct S0 g_564 = {0x32B09EA1L};
static struct S0 g_568 = {1UL};
static struct S0 g_570 = {4294967294UL};



static unsigned func_1(void);
static char func_2(char * p_3, unsigned char p_4, const char * p_5);
static char * func_6(char * p_7, const int p_8, const char p_9, short p_10, char * p_11);
static const union U3 * func_21(short p_22, union U3 * p_23);
static union U3 * func_26(int * p_27);
static struct S1 * func_29(short p_30, char * p_31, int * p_32, unsigned short p_33);
static char * func_39(struct S1 * p_40);
static struct S1 * func_41(const unsigned p_42, union U3 p_43);
static struct S1 func_45(const union U3 * p_46, int * const p_47, struct S1 * p_48, struct S1 * p_49, union U2 p_50);
static const union U3 * func_51(union U3 * p_52, int * const p_53);
static unsigned func_1(void)
{
    char *l_12 = &g_13;
    int *l_14 = &g_15;
    int l_18 = 0x466BC657L;
    unsigned short *l_19 = &g_20;
    struct S1 l_546 = {7,3929,13};
    struct S0 *l_562 = &g_80;
    unsigned short l_578 = 65535UL;
    if ((func_2(func_6(l_12, ((*l_14) = 0x27213EC7L), ((3L >= (safe_rshift_func_uint16_t_u_u(((*l_19) = l_18), 7))) <= 0x6DAD816FL), g_13, l_12), l_18, (*g_375)) && (*l_14)))
    {
        int *l_541 = &g_96;
        int **l_542 = &l_541;
        (*l_14) = (0xF50E186AL && 4294967295UL);
        (*l_542) = l_541;
        for (g_96 = 22; (g_96 == (-2)); g_96 = safe_sub_func_uint16_t_u_u(g_96, 9))
        {
            int *l_545 = &g_96;
            struct S1 *l_547 = &g_71;
            (*l_542) = l_545;
            (*l_547) = l_546;
        }
    }
    else
    {
        int **l_548 = &g_214;
        char *l_551 = (void*)0;
        unsigned char *l_552 = &g_86;
        unsigned char *l_553 = &g_475;
        unsigned char l_556 = 0xAFL;
        union U3 *l_557 = (void*)0;
        const union U3 **l_558 = &g_436;
        struct S1 *l_559 = &l_546;
        struct S0 *l_563 = &g_564;
        unsigned l_574 = 4294967292UL;
        (*l_548) = &g_15;

        ;
        (*l_559) = func_45(((*l_558) = func_21(((safe_sub_func_int16_t_s_s(func_2(l_551, ((**l_548) < (((*l_553) = ((*l_552) = 0xCEL)) | ((*g_214) >= ((safe_div_func_int16_t_s_s(((*g_214) > g_457.f1), (-9L))) | (0x427DB72CL > func_2(l_551, l_556, (*g_375))))))), (*g_375)), 0xD432L)) < (**l_548)), l_557)), &g_96, &l_546, &l_546, (*g_171));

        ;
        ;
        for (l_18 = 0; (l_18 == (-17)); l_18 = safe_sub_func_int8_t_s_s(l_18, 9))
        {
            struct S0 *l_567 = &g_568;
            int l_575 = 0xF3F2D43CL;
            if (g_20)
            {
                (*l_548) = &g_15;

                ;
            }
            else
            {
                const int *l_565 = &l_18;
                const int **l_566 = &l_565;
                struct S0 *l_569 = &g_570;
                l_563 = l_562;

                ;
                (*l_566) = l_565;
                l_569 = (l_567 = l_562);

                ;
                ;
                (*l_14) = (((safe_add_func_int32_t_s_s((safe_unary_minus_func_uint32_t_u(9UL)), (~(((*g_453) && (**l_566)) == (l_574 <= (l_575 & (*g_453))))))) >= 0xBCF1L) || g_570.f0);
            }

            ;
            for (g_20 = (-14); (g_20 != 51); g_20 = safe_add_func_int16_t_s_s(g_20, 5))
            {
                return l_575;
            }
            (*l_548) = (*l_548);
            (*l_559) = (*l_559);
        }

        ;
    }

    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    return l_578;
}







static char func_2(char * p_3, unsigned char p_4, const char * p_5)
{
    unsigned l_540 = 5UL;
    return l_540;
}







static char * func_6(char * p_7, const int p_8, const char p_9, short p_10, char * p_11)
{
    int *l_28 = &g_15;
    const union U3 *l_535 = &g_55;
    const struct S0 *l_536 = &g_80;
    const struct S0 **l_537 = (void*)0;
    const struct S0 **l_538 = &l_536;
    char *l_539 = &g_513;
    l_535 = func_21((safe_sub_func_int32_t_s_s(g_20, g_15)), func_26(l_28));

    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    (*l_28) = 0xB79847B0L;
    (*l_538) = l_536;
    return l_539;


}







static const union U3 * func_21(short p_22, union U3 * p_23)
{
    int l_517 = 0x25C39C28L;
    union U2 l_520 = {0xDDDDBC35L};
    int *l_523 = &l_517;
    struct S1 l_524 = {-2,-10012,-6};
    unsigned l_528 = 0x69ECFBADL;
    if (p_22)
    {
        int **l_511 = &g_214;
        int *l_512 = &g_465;
        int *l_514 = &g_100;
        struct S1 l_515 = {-14,-9579,-13};
        (*l_512) = (((*l_511) = (void*)0) != (void*)0);

        ;
        (*l_514) = ((*l_512) = g_513);
        l_515 = l_515;
    }
    else
    {
        char *l_516 = &g_13;
        struct S1 *l_519 = &g_457;
        unsigned short *l_525 = &g_20;
        int l_533 = 0x4922CB8CL;
        int **l_534 = &l_523;
        (*g_250) = (*g_250);
        if (p_22)
        {
            const union U3 *l_518 = &g_437;
            struct S1 l_521 = {7,5179,3};
            int *l_522 = &g_465;
            (*l_519) = l_521;
            l_523 = l_522;

            ;
        }
        else
        {
            (*l_519) = l_524;
        }

        ;
        (*g_214) = (((((*l_525) = ((*g_191) = p_22)) | (l_533 = (((g_71.f0 > (safe_add_func_uint16_t_u_u(l_528, ((*l_523) >= (*l_523))))) ^ ((safe_rshift_func_int8_t_s_u((-1L), 0)) & 0x59L)) & (safe_lshift_func_uint8_t_u_u(l_533, (0UL >= (*l_523))))))) ^ p_22) == (*g_214));
        (*l_534) = &g_465;

        ;
    }

    ;
    ;
    return p_23;


}







static union U3 * func_26(int * p_27)
{
    unsigned l_34 = 2UL;
    short *l_35 = (void*)0;
    short *l_36 = (void*)0;
    short *l_37 = &g_38;
    union U3 l_44 = {0UL};
    struct S1 *l_88 = &g_71;
    int *l_481 = &g_15;
    struct S1 **l_508 = &g_251;
    struct S1 *l_509 = &g_457;
    int **l_510 = &l_481;
    l_509 = ((*l_508) = func_29(((*l_37) = l_34), func_39((l_88 = func_41(l_34, l_44))), l_481, (*l_481)));

    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    (*l_510) = l_481;
    (*l_510) = (void*)0;

    ;
    return (*g_60);


}







static struct S1 * func_29(short p_30, char * p_31, int * p_32, unsigned short p_33)
{
    union U3 l_482 = {0x2BCC292EL};
    struct S1 *l_483 = (void*)0;
    union U2 l_484 = {0UL};
    unsigned char l_489 = 0xAEL;
    short *l_494 = &g_55.f2;
    short *l_495 = (void*)0;
    short *l_496 = (void*)0;
    short *l_497 = (void*)0;
    int l_500 = 0xA4A2F87CL;
    char *l_503 = (void*)0;
    int l_504 = 0xAB4B80B1L;
    int *l_505 = &g_100;
    int **l_506 = (void*)0;
    int **l_507 = &g_214;
    (*g_251) = (*g_251);
    g_71.f0 = (safe_rshift_func_int16_t_s_u(((safe_sub_func_uint32_t_u_u((((l_484.f0 < l_489) || (l_482.f0 > ((safe_div_func_int32_t_s_s((safe_add_func_uint16_t_u_u(l_482.f2, (g_38 = (*g_453)))), (safe_sub_func_uint8_t_u_u(l_500, (safe_add_func_int8_t_s_s((l_504 = 0L), p_33)))))) > (*g_376)))) | (*g_376)), (*p_32))) || 0x90E6L), 0));
    (*l_507) = l_505;

    ;
    (*g_170) = (*g_170);
    return l_483;


}







static char * func_39(struct S1 * p_40)
{
    const int l_89 = 1L;
    union U2 *l_127 = &g_75;
    unsigned short *l_168 = (void*)0;
    int *l_198 = &g_96;
    union U3 *l_202 = &g_55;
    struct S0 **l_232 = &g_185;
    short l_245 = 0x9296L;
    struct S1 **l_252 = &g_251;
    unsigned char l_274 = 0x86L;
    char *l_281 = &g_13;
    unsigned l_314 = 0x79A5ECE6L;
    int *l_328 = &g_15;
    short **l_431 = (void*)0;
    short ***l_430 = &l_431;
    if (l_89)
    {
        char l_110 = 0x97L;
        int *l_174 = &g_15;
        struct S0 *l_181 = &g_80;
        unsigned short *l_234 = &g_55.f3;
        union U3 *l_244 = &g_55;
        int **l_273 = &l_174;
        for (g_86 = 0; (g_86 > 42); ++g_86)
        {
            struct S0 ***l_93 = &g_92;
            unsigned char *l_125 = (void*)0;
            unsigned char * const *l_124 = &l_125;
            int l_139 = (-8L);
            struct S1 *l_172 = &g_71;
            int **l_183 = &l_174;
        }
        if ((g_15 != g_55.f0))
        {
            struct S0 *l_184 = (void*)0;
            struct S0 **l_186 = &l_181;
            struct S0 **l_187 = &g_185;
            (*l_186) = (g_185 = l_184);

            ;
            (*g_60) = (*g_60);
            (*l_187) = ((*l_186) = (*l_186));
        }
        else
        {
            union U2 *l_200 = &g_201;
            int l_203 = 0x6A24D725L;
            union U3 *l_235 = &g_55;
            struct S1 *l_236 = &g_71;
            for (l_110 = (-25); (l_110 >= (-21)); l_110 = safe_add_func_uint16_t_u_u(l_110, 2))
            {
                unsigned short ***l_192 = &g_190;
                (*l_192) = g_190;
                if (((void*)0 != (**g_147)))
                {
                    for (g_86 = 0; (g_86 < 8); g_86++)
                    {
                        (*p_40) = g_195;
                    }
                }
                else
                {
                    for (g_112 = 16; (g_112 < 16); ++g_112)
                    {
                        int **l_199 = &l_198;
                        (*l_199) = l_198;
                    }
                }
            }
            l_200 = (void*)0;

            ;
            if ((*l_174))
            {
                int l_219 = 0L;
                int l_229 = 0xE786C87CL;
                char *l_237 = (void*)0;
                union U3 *l_238 = &g_55;
                short *l_264 = &g_55.f2;
                short ** const l_263 = &l_264;
                (*g_60) = l_202;
                if (l_203)
                {
                    int l_206 = 1L;
                    int *l_209 = (void*)0;
                    int *l_210 = &l_203;
                    struct S0 ***l_233 = &g_92;
                    if ((safe_rshift_func_uint8_t_u_s(((((((*l_198) && (*l_198)) | l_206) == (l_206 || (*l_174))) | ((*g_191) = (*g_191))) != ((*l_210) = (safe_add_func_uint8_t_u_u(l_206, 0x00L)))), ((*l_174) <= (*l_174)))))
                    {
                        struct S1 *l_212 = &g_71;
                        struct S1 **l_211 = &l_212;
                        int **l_213 = &l_198;
                        (*l_211) = &g_195;

                        ;
                        (*l_213) = &g_96;
                        g_214 = &g_15;

                        ;
                        (*l_213) = &g_96;
                    }
                    else
                    {
                        const unsigned char l_226 = 0UL;
                        struct S1 *l_231 = &g_71;
                        struct S1 **l_230 = &l_231;
                        (*l_210) = ((*l_198) ^ (safe_add_func_uint32_t_u_u(((safe_sub_func_uint8_t_u_u(l_219, (((!(!l_219)) ^ (l_229 = ((safe_sub_func_int32_t_s_s(((0x94L || (*g_149)) < (safe_sub_func_uint8_t_u_u((0xDA66L > (safe_add_func_int32_t_s_s((l_226 >= (safe_lshift_func_uint16_t_u_u((*l_174), 2))), 0x51642E74L))), (*l_198)))), (-1L))) == l_226))) > (*l_198)))) < (*l_210)), 0xCC771BE4L)));
                        (*l_230) = (void*)0;

                        ;
                    }

                    ;
                    l_203 = ((*l_198) = (*l_174));
                    g_71.f0 = (l_203 != (g_20 && l_203));
                    (*l_233) = l_232;

                    ;
                }
                else
                {
                    int l_243 = 0xE2B228E0L;
                    if ((0xDCL >= ((*g_190) == l_234)))
                    {
                        (*p_40) = func_45(func_51(l_235, &g_15), &g_100, p_40, l_236, (*l_127));
                        return l_237;


                    }
                    else
                    {
                        int *l_239 = &g_96;
                        int **l_240 = &l_174;
                        g_214 = &l_203;

                        ;
                        l_238 = ((*g_60) = l_202);
                        (*l_240) = (g_214 = l_239);

                        ;
                        ;
                        (*g_60) = (*g_60);
                    }

                    ;
                    ;
                    if (((safe_sub_func_int8_t_s_s(l_243, ((void*)0 != l_244))) == l_245))
                    {
                        return &g_13;


                    }
                    else
                    {
                        unsigned *l_258 = &g_55.f0;
                        unsigned l_261 = 0x6AC008CEL;
                        int *l_262 = &l_203;
                        short **l_266 = &l_264;
                        short ***l_265 = &l_266;
                        (*l_262) = (safe_add_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u(((l_229 || ((((*l_198) = ((g_250 = g_250) == (l_252 = &p_40))) | ((*l_258) = ((safe_unary_minus_func_uint32_t_u((safe_sub_func_int32_t_s_s(l_243, l_203)))) > (safe_add_func_int32_t_s_s((-2L), g_195.f1))))) && (safe_div_func_uint8_t_u_u(0xB3L, l_261)))) < l_243), 15)), l_110));

                        ;
                        (*l_265) = l_263;
                    }

                    ;
                    (*l_198) = l_229;
                    (*l_198) = (l_243 != l_203);
                }

                ;
                ;
                ;
                ;
            }
            else
            {
                for (g_100 = (-9); (g_100 >= (-19)); g_100 = safe_sub_func_int16_t_s_s(g_100, 8))
                {
                    unsigned short * const l_269 = &g_55.f3;
                    int **l_270 = &l_198;
                    g_71.f1 = ((*l_174) ^ (l_168 == l_269));
                    (*l_270) = l_198;
                    for (l_110 = 0; (l_110 >= (-15)); --l_110)
                    {
                        if ((*l_198))
                            break;
                        (*g_60) = l_235;
                    }
                }
            }

            ;
            ;
            ;
            ;
        }

        ;
        ;
        ;
        ;
        ;
        (*l_273) = &g_100;

        ;
    }
    else
    {
        int l_286 = 0L;
        union U2 *l_292 = &g_75;
        int *l_297 = (void*)0;
        struct S1 *l_299 = &g_71;
        int l_310 = 0x48E66924L;
        if (l_274)
        {
            char l_275 = 0xEFL;
            char *l_280 = &l_275;
            (*l_198) = (*l_198);
            if ((l_275 = 0x5DAE69F5L))
            {
                int **l_284 = &l_198;
                (*p_40) = (*g_251);
                for (g_96 = 0; (g_96 < (-11)); --g_96)
                {
                    if ((safe_mod_func_int8_t_s_s(g_75.f0, (*l_198))))
                    {
                        return l_281;


                    }
                    else
                    {
                        int *l_282 = &g_96;
                        int **l_283 = &l_198;
                        (*l_283) = l_282;
                    }
                    return &g_13;


                }
                (*l_284) = &g_100;

                ;
            }
            else
            {
                int **l_285 = &g_214;
                (*l_285) = (void*)0;
                return &g_13;


            }

            ;
            (*l_198) = l_286;
            if ((&g_100 != &g_15))
            {
                int **l_298 = &g_214;
                for (g_86 = 4; (g_86 == 47); g_86 = safe_add_func_uint16_t_u_u(g_86, 7))
                {
                    char *l_296 = &l_275;
                    for (g_112 = 0; (g_112 != 52); g_112 = safe_add_func_int16_t_s_s(g_112, 7))
                    {
                        char l_291 = (-1L);
                        int **l_293 = &l_198;
                        (*p_40) = (**l_252);
                        (*l_198) = l_291;
                        (*g_170) = l_292;
                        (*l_293) = &g_100;
                    }
                    for (g_13 = 0; (g_13 >= 23); g_13 = safe_add_func_int16_t_s_s(g_13, 2))
                    {
                        return &g_13;


                    }
                    (*l_198) = (l_286 < ((-2L) && (*l_198)));
                }
                (*l_298) = l_297;
            }
            else
            {
                struct S1 l_300 = {9,9702,-10};
                int **l_301 = &g_214;
                (*l_299) = func_45(l_202, l_198, l_299, (*g_250), (*l_292));
                (*l_299) = l_300;
                (*l_301) = &g_15;

                ;
            }

            ;
        }
        else
        {
            return &g_13;


        }

        ;
        ;
        if ((*l_198))
        {
            unsigned short l_302 = 1UL;
            char *l_307 = &g_13;
            char **l_308 = &l_281;
            unsigned char ***l_309 = &g_148;
            (*l_198) = l_302;
            if (((*l_198) = ((safe_sub_func_uint32_t_u_u((safe_div_func_uint16_t_u_u((0xCC039EE5L >= (*l_198)), ((l_307 != ((*l_308) = &g_13)) || g_15))), (l_309 != (void*)0))) >= (l_310 ^ 0xAA5C5DEAL))))
            {
                for (g_100 = 0; (g_100 < 27); ++g_100)
                {
                    return &g_13;


                }
            }
            else
            {
                int **l_313 = &g_214;
                (*l_313) = (void*)0;

                ;
                (*l_198) = (*l_198);
            }
            l_314 = l_302;
        }
        else
        {
            int l_320 = 9L;
            int l_325 = 0L;
            short *l_326 = (void*)0;
            int l_327 = (-1L);
            (*l_198) = (safe_mul_func_uint8_t_u_u(((***g_147) = ((**g_190) <= g_317)), ((safe_mod_func_uint32_t_u_u((+l_320), (*l_198))) > (l_320 | (l_327 = (l_320 != (l_325 = ((safe_div_func_int32_t_s_s((*l_198), (*l_198))) != g_112))))))));
            (*g_147) = (void*)0;

            ;
        }

        ;
        l_297 = l_328;

        ;
    }

    ;
    ;
    ;
    ;
    ;
    (*l_198) = (*l_328);
    if (((0x08BFL ^ 7UL) != (safe_lshift_func_int16_t_s_s(g_71.f0, 3))))
    {
        const int l_335 = 0xB04EDA8FL;
        int l_338 = 0x9DDA32BFL;
        struct S1 l_339 = {-0,10554,-1};
        int **l_353 = &l_198;
        const char * const *l_407 = &g_376;
        struct S0 * const * const l_412 = (void*)0;
        struct S0 * const * const *l_411 = &l_412;
        (*g_170) = (*g_170);
        (*l_198) = (-10L);
        if ((((safe_mod_func_uint8_t_u_u((*l_328), (safe_add_func_uint16_t_u_u((*l_198), (*g_191))))) | 0x47L) || ((*l_198) = (l_338 = (l_335 | (l_335 >= (l_335 & (((**g_190) = (safe_rshift_func_int8_t_s_s((*l_328), (l_335 == (*l_328))))) || 0UL))))))))
        {
            int **l_340 = &l_328;
            unsigned char * const l_347 = (void*)0;
            const int **l_355 = (void*)0;
            int l_357 = 0xA7043D30L;
            const char **l_374 = (void*)0;
            (**g_250) = l_339;
            (*l_198) = l_339.f1;
            (*l_340) = (void*)0;

            ;
            for (g_86 = 8; (g_86 < 7); --g_86)
            {
                int l_351 = 0x5358D98CL;
                unsigned l_356 = 0xBEAF90EEL;
                for (g_317 = 0; (g_317 != (-11)); g_317--)
                {
                    unsigned char **l_348 = &g_149;
                    int l_352 = 1L;
                    int ***l_354 = &l_340;
                    char l_367 = 3L;
                    l_357 = (g_80.f0 | (safe_div_func_uint16_t_u_u(((l_347 == ((*l_348) = (void*)0)) >= (safe_lshift_func_int8_t_s_s((((g_80.f0 > (l_339.f2 = ((-1L) || (l_351 == l_352)))) <= (((*l_354) = l_353) != l_355)) == g_112), 4))), l_356)));

                    ;
                    ;
                }
                (*l_232) = (void*)0;
            }

            ;
            ;
        }
        else
        {
            unsigned l_403 = 8UL;
            unsigned *l_404 = &g_55.f0;
            char l_408 = 0x3FL;
            unsigned *l_409 = &l_403;
            int l_410 = 0x7C7B12A1L;
            l_410 = (safe_lshift_func_int16_t_s_s(((g_191 == (void*)0) && 0x6359L), ((((*l_404) = l_403) && ((*l_409) = (safe_rshift_func_int8_t_s_s(((void*)0 == l_407), (1L ^ (((((*l_404) = l_403) | l_403) < 3UL) > l_408)))))) || g_71.f2)));
        }

        ;
        ;
        if (((**l_353) = (*l_198)))
        {
            unsigned *l_423 = &g_55.f0;
            int l_434 = 0x0FCD6BA3L;
            int *l_435 = &l_434;
            (*l_198) = (((*g_191) = (&g_92 != l_411)) != (safe_rshift_func_int8_t_s_u((**l_353), (**l_353))));
            g_214 = l_328;

            ;
            (**l_353) = ((safe_lshift_func_uint16_t_u_s((*g_191), 3)) < (safe_sub_func_uint32_t_u_u(((safe_add_func_uint32_t_u_u(((*l_423) = (safe_rshift_func_uint16_t_u_s((**l_353), g_100))), ((safe_sub_func_uint8_t_u_u((!(**l_353)), ((safe_add_func_int32_t_s_s((safe_rshift_func_int8_t_s_s((*g_376), 0)), g_71.f1)) || ((*l_435) = ((((void*)0 != l_430) && (safe_add_func_int32_t_s_s(((*l_198) & l_434), g_15))) || (-6L)))))) != 0x97L))) || 0x9FL), 0x115DCBFCL)));
        }
        else
        {
            (*p_40) = func_45((g_436 = (void*)0), &g_15, ((*g_250) = func_41(g_80.f0, (*g_61))), p_40, (**g_170));

            ;
            ;
        }

        ;
        ;
    }
    else
    {
        const unsigned char l_452 = 0x8EL;
        int *l_466 = (void*)0;
        int **l_479 = &l_466;
        int **l_480 = &l_198;
        for (g_13 = 5; (g_13 > (-2)); g_13--)
        {
            int l_442 = (-1L);
            if (((*l_198) = g_195.f0))
            {
                struct S1 *l_446 = &g_195;
                struct S1 l_451 = {-14,-2088,-5};
                for (l_274 = 0; (l_274 >= 22); ++l_274)
                {
                    return &g_13;


                }
                if (l_442)
                {
                    struct S0 *l_443 = &g_80;
                    int l_444 = (-1L);
                    g_185 = l_443;

                    ;
                    (*l_198) = (l_444 = ((0x02C2L && l_444) & l_442));
                }
                else
                {
                    const union U3 *l_445 = (void*)0;
                    (*g_251) = func_45(l_445, l_328, p_40, l_446, (*g_171));
                    (**g_250) = (*p_40);
                    (*g_170) = (*g_170);
                }
                for (g_86 = 0; (g_86 <= 39); g_86 = safe_add_func_uint32_t_u_u(g_86, 9))
                {
                    for (l_442 = 0; (l_442 == (-4)); --l_442)
                    {
                        (*p_40) = l_451;
                        if (l_452)
                            continue;
                        (**g_250) = (*p_40);
                    }
                    (**l_252) = (*p_40);
                }
            }
            else
            {
                if ((g_191 != (g_453 = g_191)))
                {
                    (*l_198) = l_452;
                }
                else
                {
                    g_195.f2 = g_15;
                }

                ;
                (*l_232) = (*l_232);
                for (l_314 = 23; (l_314 != 12); l_314--)
                {
                    struct S1 *l_456 = &g_457;
                    (*l_456) = ((**l_252) = (*p_40));
                    (*l_198) = (&g_436 != (void*)0);
                }
            }
        }

        ;
        ;
        for (g_86 = 0; (g_86 == 34); g_86 = safe_add_func_uint8_t_u_u(g_86, 7))
        {
            short l_462 = 2L;
            int *l_470 = &g_465;
            (*l_198) = (l_452 == ((-1L) != l_452));
            if ((*l_328))
                continue;
            if (l_452)
            {
                int **l_476 = &l_466;
                for (l_245 = 0; (l_245 != (-28)); l_245 = safe_sub_func_uint16_t_u_u(l_245, 7))
                {
                    int *l_463 = (void*)0;
                    int *l_464 = &g_465;
                    if (l_452)
                        break;
                    (*l_464) = ((*l_198) = ((l_462 && (l_452 != (-2L))) && l_452));
                    if (l_452)
                    {
                        int **l_467 = (void*)0;
                        int **l_468 = &g_214;
                        short l_469 = 0xCF66L;
                        (*l_468) = l_466;

                        ;
                        if (l_469)
                            break;
                        (*l_198) = g_100;
                        (*l_468) = l_470;

                        ;
                    }
                    else
                    {
                        short l_472 = (-7L);
                        unsigned char *l_473 = &l_274;
                        unsigned char *l_474 = &g_475;
                        (*l_464) = (safe_unary_minus_func_uint8_t_u(((*l_474) = ((*l_473) = l_472))));
                        return l_281;


                    }

                    ;
                }
                (*l_476) = l_466;
            }
            else
            {
                int **l_477 = &l_466;
                int l_478 = 0x5A39968EL;
                (*l_477) = &g_15;

                ;
                l_478 = ((*l_198) = (-1L));
                if ((*l_328))
                    break;
            }
            l_470 = l_328;

            ;
        }

        ;
        ;
        (*l_480) = ((*l_479) = &g_96);

        ;
        ;
    }

    ;
    ;
    ;
    ;
    ;
    ;
    ;
    (**l_252) = (*p_40);
    return l_281;


}







static struct S1 * func_41(const unsigned p_42, union U3 p_43)
{
    union U3 *l_54 = &g_55;
    int * const l_69 = &g_15;
    struct S1 *l_70 = &g_71;
    struct S1 **l_72 = &l_70;
    struct S1 *l_74 = (void*)0;
    struct S1 **l_73 = &l_74;
    struct S1 l_87 = {12,7599,6};
    l_87 = func_45(func_51(l_54, &g_15), l_69, ((*l_73) = ((*l_72) = l_70)), &g_71, g_75);

    ;
    return &g_71;


}







static struct S1 func_45(const union U3 * p_46, int * const p_47, struct S1 * p_48, struct S1 * p_49, union U2 p_50)
{
    struct S1 l_76 = {2,-2838,11};
    struct S0 **l_78 = (void*)0;
    struct S0 *l_79 = &g_80;
    unsigned char *l_85 = &g_86;
    (*p_48) = g_71;
    (*p_49) = l_76;
    l_79 = g_77;

    ;
    l_76.f0 = (safe_rshift_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u((((*l_85) = (1UL != g_13)) && ((*l_85) = p_50.f0)), 4)), g_80.f0));
    return (*p_49);
}







static const union U3 * func_51(union U3 * p_52, int * const p_53)
{
    struct S1 l_56 = {-1,10403,-3};
    struct S1 *l_57 = &l_56;
    union U3 ***l_65 = (void*)0;
    union U3 ***l_66 = (void*)0;
    union U3 **l_68 = &g_61;
    union U3 ***l_67 = &l_68;
    (*l_57) = l_56;
    for (g_13 = (-4); (g_13 > (-7)); g_13 = safe_sub_func_uint16_t_u_u(g_13, 1))
    {
        union U3 ***l_62 = (void*)0;
        union U3 **l_64 = &g_61;
        union U3 ***l_63 = &l_64;
        (*l_63) = g_60;
    }
    (*l_67) = &p_52;

    ;
    return (*g_60);


}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_13, "g_13", print_hash_value);
    transparent_crc(g_15, "g_15", print_hash_value);
    transparent_crc(g_20, "g_20", print_hash_value);
    transparent_crc(g_38, "g_38", print_hash_value);
    transparent_crc(g_55.f0, "g_55.f0", print_hash_value);
    transparent_crc(g_55.f2, "g_55.f2", print_hash_value);
    transparent_crc(g_55.f3, "g_55.f3", print_hash_value);
    transparent_crc(g_71.f0, "g_71.f0", print_hash_value);
    transparent_crc(g_71.f1, "g_71.f1", print_hash_value);
    transparent_crc(g_71.f2, "g_71.f2", print_hash_value);
    transparent_crc(g_75.f0, "g_75.f0", print_hash_value);
    transparent_crc(g_80.f0, "g_80.f0", print_hash_value);
    transparent_crc(g_86, "g_86", print_hash_value);
    transparent_crc(g_96, "g_96", print_hash_value);
    transparent_crc(g_100, "g_100", print_hash_value);
    transparent_crc(g_112, "g_112", print_hash_value);
    transparent_crc(g_195.f0, "g_195.f0", print_hash_value);
    transparent_crc(g_195.f1, "g_195.f1", print_hash_value);
    transparent_crc(g_195.f2, "g_195.f2", print_hash_value);
    transparent_crc(g_201.f0, "g_201.f0", print_hash_value);
    transparent_crc(g_317, "g_317", print_hash_value);
    transparent_crc(g_437.f0, "g_437.f0", print_hash_value);
    transparent_crc(g_437.f2, "g_437.f2", print_hash_value);
    transparent_crc(g_437.f3, "g_437.f3", print_hash_value);
    transparent_crc(g_457.f0, "g_457.f0", print_hash_value);
    transparent_crc(g_457.f1, "g_457.f1", print_hash_value);
    transparent_crc(g_457.f2, "g_457.f2", print_hash_value);
    transparent_crc(g_465, "g_465", print_hash_value);
    transparent_crc(g_475, "g_475", print_hash_value);
    transparent_crc(g_513, "g_513", print_hash_value);
    transparent_crc(g_564.f0, "g_564.f0", print_hash_value);
    transparent_crc(g_568.f0, "g_568.f0", print_hash_value);
    transparent_crc(g_570.f0, "g_570.f0", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
