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
   const int f0;
   const int f1;
   const unsigned f2;
};

union U1 {
   unsigned char f0;
   char * f1;
};


static short g_8 = 0xDFE4L;
static union U0 *g_15 = (void*)0;
static const union U1 g_19 = {0UL};
static char g_25 = 0xBCL;
static int g_31 = 0x7F8B4DFEL;
static unsigned g_45 = 0x18264D92L;
static unsigned g_46 = 0xAE055A24L;
static union U0 g_66 = {1L};
static unsigned char g_81 = 1UL;
static unsigned char g_94 = 0xD1L;
static int g_97 = 3L;
static int *g_96 = &g_97;
static int g_106 = 0x7F84FF3FL;
static int g_114 = (-7L);
static union U0 *g_150 = (void*)0;
static int *g_200 = &g_114;
static int **g_199 = &g_200;
static int ***g_198 = &g_199;
static short g_222 = 0x583EL;
static short g_228 = (-1L);
static int * const *g_237 = &g_96;
static int * const **g_236 = &g_237;
static char g_273 = 0xAAL;
static int g_308 = 0xEE06E931L;
static union U1 g_317 = {255UL};
static union U1 **g_318 = (void*)0;
static unsigned short g_325 = 0x4E06L;
static unsigned short *g_324 = &g_325;
static short *g_399 = (void*)0;
static int **g_423 = &g_96;
static int ***g_422 = &g_423;
static unsigned short g_458 = 0x2605L;
static unsigned g_466 = 4294967286UL;
static char g_576 = 0xDFL;
static char g_582 = 0x3AL;
static char *g_581 = &g_582;
static union U0 **g_600 = &g_150;
static union U0 ***g_599 = &g_600;
static union U0 ****g_598 = &g_599;
static unsigned g_661 = 1UL;



static union U0 func_1(void);
static union U0 * func_2(int p_3, unsigned char p_4, const char * p_5, char * p_6, char * p_7);
static const char * func_10(union U0 * p_11, char * p_12, unsigned char p_13, char * p_14);
static char * func_16(const union U1 p_17, const union U0 * p_18);
static union U0 * func_20(char * p_21, int p_22, char * p_23);
static int func_26(const int p_27);
static const int * func_32(union U0 * p_33, const int * const p_34, char p_35, int p_36);
static union U0 * func_37(unsigned short p_38);
static short func_47(char * p_48, union U0 p_49, int p_50);
static char * func_51(unsigned p_52, char * p_53, unsigned p_54, char p_55, union U1 p_56);
static union U0 func_1(void)
{
    short l_9 = 2L;
    char *l_24 = &g_25;
    int l_29 = 0L;
    short *l_644 = &g_222;
    const int l_657 = (-9L);
    int *l_658 = &g_106;
    unsigned *l_659 = &g_466;
    unsigned *l_660 = &g_661;
    int *l_664 = &g_97;
    union U0 l_665 = {0L};
    (**g_599) = func_2(g_8, l_9, func_10(g_15, func_16(g_19, func_20(l_24, (l_29 = func_26(g_25)), l_24)), l_9, g_581), l_24, &g_582);


    ;
    ;
    l_29 = (l_9 <= (g_46 != (g_25 < (((*l_644) = l_9) && func_26((safe_add_func_uint32_t_u_u(((*l_660) = (func_26((**g_199)) < (l_9 >= (safe_sub_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u((((*l_659) = (l_9 != func_26(((*l_658) = ((safe_lshift_func_uint8_t_u_s((safe_mod_func_uint8_t_u_u((safe_mod_func_int8_t_s_s((func_26(l_657) < 0x94L), l_29)), g_25)), 3)) ^ g_46))))) && l_657), 6UL)), 65529UL))))), 0x08EBED17L)))))));
    (*l_664) = (0x971CL && (safe_add_func_int8_t_s_s(7L, (&g_25 != &g_576))));
    return l_665;

    }







static union U0 * func_2(int p_3, unsigned char p_4, const char * p_5, char * p_6, char * p_7)
{
    int l_597 = (-1L);
    union U0 ****l_602 = &g_599;
    union U0 *****l_601 = &l_602;
    short *l_603 = &g_228;
    short **l_604 = &g_399;
    int *l_614 = &g_308;
    int *l_615 = &g_308;
    union U1 *l_642 = &g_317;
    union U1 **l_641 = &l_642;
    union U0 *l_643 = (void*)0;
    if (((p_4 < ((((l_597 == func_26(p_4)) <= ((g_598 = g_598) != ((*l_601) = &g_599))) | 0x6CAC4D57L) && (*g_581))) | (((*l_604) = l_603) != l_603)))
    {
        const char l_613 = 4L;
        unsigned char *l_628 = (void*)0;
        unsigned char **l_627 = &l_628;
        union U0 *****l_634 = &g_598;
        const int *l_636 = &g_97;
        const int **l_635 = &l_636;
        int *l_637 = &g_97;
        for (g_46 = 0; (g_46 == 60); ++g_46)
        {
            int *l_607 = &g_308;
            const int *l_631 = (void*)0;
            const int **l_630 = &l_631;
            (*l_607) = 0x4BD88270L;
            (*g_423) = (void*)0;

            ;
            for (g_222 = 0; (g_222 > 23); g_222 = safe_add_func_int32_t_s_s(g_222, 2))
            {
                unsigned short ***l_623 = (void*)0;
                unsigned char ***l_629 = &l_627;
                for (g_45 = (-4); (g_45 <= 35); g_45++)
                {
                    unsigned char l_612 = 0x39L;
                    if (l_612)
                    {
                        short l_618 = (-6L);
                        union U0 l_624 = {-3L};
                        unsigned *l_625 = &g_466;
                        (*l_607) = func_26(l_613);
                        l_615 = l_614;
                        (*l_607) = (safe_mod_func_int16_t_s_s(((l_618 > (*l_614)) > ((*l_614) >= ((*l_607) != (safe_rshift_func_uint16_t_u_u((0x9CCF5684L >= ((*l_625) = ((safe_rshift_func_int8_t_s_s((((void*)0 == l_623) ^ l_612), 5)) | func_26(func_47(p_6, l_624, l_624.f0))))), 6))))), p_4));


                    }
                    else
                    {
                        union U0 *l_626 = &g_66;
                        (**g_599) = l_626;
                        return (**g_599);


                    }


                }


                (*l_629) = l_627;
                return (***g_598);


            }
            (*l_630) = (*l_630);
        }


        (*l_635) = func_32((*g_600), l_614, (((safe_sub_func_uint8_t_u_u(g_31, func_26((***g_198)))) < (((*l_634) = ((*l_601) = (*l_601))) != (void*)0)) > l_613), func_47(&g_273, (**g_600), l_613));



        ;
        ;
        (*l_637) = ((*l_615) = p_4);
    }
    else
    {
        int * const l_638 = &g_97;
        int **l_639 = (void*)0;
        int **l_640 = &g_96;
        (*l_640) = l_638;

        ;
    }



    ;
    (*l_641) = (void*)0;

    ;
    return l_643;


}







static const char * func_10(union U0 * p_11, char * p_12, unsigned char p_13, char * p_14)
{
    unsigned **l_583 = (void*)0;
    char * const * const l_585 = &g_581;
    char * const * const *l_584 = &l_585;
    char * const * const **l_586 = (void*)0;
    char * const * const *l_588 = &l_585;
    char * const * const **l_587 = &l_588;
    const int l_589 = 0L;
    union U0 **l_590 = &g_150;
    int l_593 = 0L;
    const char *l_596 = (void*)0;
    (*l_590) = &g_66;

    ;
    for (g_222 = 0; (g_222 > (-3)); g_222 = safe_sub_func_int8_t_s_s(g_222, 8))
    {
        unsigned short *l_594 = &g_325;
        int *l_595 = &g_308;
        l_593 = (-7L);
        (*l_595) = ((&g_325 == l_594) ^ p_13);
        (**g_422) = l_595;

        ;
    }


    return l_596;


}







static char * func_16(const union U1 p_17, const union U0 * p_18)
{
    for (g_81 = 0; (g_81 == 4); g_81++)
    {
        unsigned short l_579 = 0UL;
        int l_580 = 0x255C3ADDL;
        l_580 = l_579;
        (**g_422) = &l_580;

        ;
    }
    return &g_25;


}







static union U0 * func_20(char * p_21, int p_22, char * p_23)
{
    int *l_30 = &g_31;
    union U0 **l_63 = (void*)0;
    union U0 *l_65 = &g_66;
    union U0 **l_64 = &l_65;
    char *l_67 = &g_25;
    int *l_115 = &g_97;
    const int *l_561 = (void*)0;
    const int **l_560 = &l_561;
    (*l_30) = ((p_22 || g_19.f0) || 0x19L);
    (*l_560) = func_32(func_37((safe_mod_func_uint32_t_u_u((((*l_115) = ((*l_30) = (safe_lshift_func_int8_t_s_u((0x8F1EDD1EL ^ ((func_26(func_26(((safe_sub_func_uint8_t_u_u(((((g_46 = (g_45 = g_31)) | func_47(func_51((safe_rshift_func_int8_t_s_u((func_26((((safe_lshift_func_int8_t_s_u(func_26(((func_26(func_26(p_22)) && ((5UL | ((*l_30) | (safe_rshift_func_int8_t_s_s((g_15 != ((*l_64) = g_15)), 0)))) <= p_22)) >= (*l_30))), 0)) || g_31) >= g_19.f0)) != (*p_21)), 5)), l_67, (*l_30), g_25, g_19), g_66, (*l_30))) && (*p_23)) || g_114), (*l_30))) < p_22))) || (*l_30)) >= p_22)), (*l_30))))) <= g_66.f0), (-4L)))), l_115, g_66.f1, g_273);

    ;


    ;
    (*l_115) = (*l_115);
    for (p_22 = 0; (p_22 != 14); p_22++)
    {
        unsigned *l_568 = &g_46;
        unsigned **l_567 = &l_568;
        unsigned ***l_566 = &l_567;
        int l_571 = 0xADA3C97FL;
        char *l_572 = &g_273;
        char *l_575 = &g_576;
        l_571 = (((p_22 >= 2UL) <= (safe_lshift_func_int8_t_s_s(((*p_23) < ((((*l_566) = (void*)0) == (void*)0) > (safe_rshift_func_int16_t_s_s(((*l_30) & ((*l_572) = l_571)), g_222)))), ((*l_575) = (safe_sub_func_uint8_t_u_u(p_22, g_46)))))) ^ 0UL);

        ;
        if ((*l_115))
            break;
    }
    return &g_66;


}







static int func_26(const int p_27)
{
    unsigned l_28 = 4294967290UL;
    return l_28;
}







static const int * func_32(union U0 * p_33, const int * const p_34, char p_35, int p_36)
{
    char *l_278 = (void*)0;
    union U0 l_279 = {0xAB5394E2L};
    unsigned l_280 = 0UL;
    int *l_281 = &g_31;
    const int *l_335 = &g_308;
    int l_343 = 0x41C3956DL;
    union U0 **l_386 = &g_15;
    union U0 ***l_385 = &l_386;
    union U1 l_435 = {0x6DL};
    unsigned short l_437 = 0x8137L;
    unsigned short **l_542 = &g_324;
    const unsigned *l_557 = (void*)0;
    const unsigned **l_556 = &l_557;
    int *l_558 = (void*)0;
    int *l_559 = &g_31;
    if (((*l_281) = ((safe_mod_func_uint32_t_u_u((safe_add_func_int16_t_s_s(g_273, 0x430BL)), g_222)) != ((l_279.f0 && 0xC6613806L) == l_280))))
    {
        int *l_282 = (void*)0;
        int **l_283 = (void*)0;
        short *l_290 = &g_222;
        int l_293 = (-1L);
        union U0 l_301 = {0x8AD40829L};
        int *l_362 = &g_97;
        unsigned l_367 = 1UL;
        l_282 = (g_96 = l_282);

        ;
        if ((safe_add_func_uint32_t_u_u((safe_add_func_uint16_t_u_u(((safe_sub_func_int8_t_s_s((p_35 = ((65532UL > func_47(&g_25, l_279, (l_293 = ((*l_281) = ((p_35 >= ((*l_290) = g_45)) < (0xABL >= ((g_19.f0 <= (safe_mod_func_int16_t_s_s(g_46, func_26((((void*)0 != p_34) > 0xCCD7L))))) ^ 0xEB260A6FL))))))) >= 0L)), 0xDCL)) == 1L), 6UL)), (*p_34))))
        {
            int *l_294 = &g_97;
            unsigned short *l_326 = &g_325;
            union U0 *l_332 = &l_279;
            int *l_339 = (void*)0;
            l_294 = &g_31;

            ;
            if ((((*l_281) || (safe_add_func_uint8_t_u_u(p_35, (safe_sub_func_int8_t_s_s((safe_lshift_func_int8_t_s_u(0x2DL, (!g_8))), 8L))))) != (*l_281)))
            {
                return l_294;


            }
            else
            {
                short l_314 = (-6L);
                union U1 l_345 = {254UL};
                int *l_350 = &g_97;
                const int *l_363 = &l_293;
                for (g_106 = 0; (g_106 > 22); g_106 = safe_add_func_uint16_t_u_u(g_106, 3))
                {
                    int l_311 = 0x4F06660DL;
                    union U1 *l_316 = &g_317;
                    union U1 **l_315 = &l_316;
                    union U1 ***l_319 = &g_318;
                    const int *l_323 = &l_279.f0;
                    const int **l_322 = &l_323;
                    unsigned short **l_327 = (void*)0;
                    unsigned short **l_328 = &l_326;
                    if ((l_311 != (safe_rshift_func_uint8_t_u_u((p_36 && l_314), (func_26((l_315 != ((*l_319) = g_318))) >= 0x522D6161L)))))
                    {
                        const int *l_321 = &l_279.f0;
                        const int **l_320 = &l_321;
                        (*l_320) = p_34;

                        ;
                    }
                    else
                    {
                        return &g_308;



                    }
                    (*l_322) = p_34;

                    ;
                    if ((((p_35 > (((func_26(p_36) < (g_324 != ((*l_328) = l_326))) | func_26(l_314)) ^ (((*l_281) = (safe_rshift_func_uint8_t_u_s(((((*l_290) = (*l_294)) && 0x35AFL) > 2UL), p_36))) <= (-1L)))) == 0x4E193FF4L) != p_35))
                    {
                        union U0 **l_331 = &g_150;
                        (*l_281) = (*p_34);
                        (*l_331) = (void*)0;

                        ;
                        (*l_331) = l_332;

                        ;
                    }
                    else
                    {
                        (*l_281) = (*l_294);
                        return &g_31;



                    }

                    ;
                }

                ;
                if (((void*)0 == &g_317))
                {
                    const int *l_333 = &g_66.f1;
                    const int *l_337 = &g_97;
                    int **l_338 = (void*)0;
                    if ((*p_34))
                    {
                        return l_333;



                    }
                    else
                    {
                        unsigned char l_334 = 0x2EL;
                        const int **l_336 = &l_333;
                        (*l_281) = (*p_34);
                        l_334 = (-5L);
                        l_335 = p_34;

                        ;
                        l_337 = ((*l_336) = &g_97);

                        ;
                    }

                    ;
                    ;
                    l_339 = l_281;

                    ;
                    for (g_325 = 0; (g_325 < 18); g_325 = safe_add_func_uint8_t_u_u(g_325, 6))
                    {
                        int **l_342 = &l_281;
                        unsigned short *l_344 = (void*)0;
                        (*l_342) = l_294;
                        l_343 = ((((*l_339) = (*g_324)) >= g_94) == (*l_333));
                        (*l_281) = ((((*p_34) != func_47(func_51((l_314 & (*l_281)), &g_273, g_8, (p_35 = (p_36 & (&g_325 != l_344))), l_345), l_279, (*l_339))) > (-5L)) & p_36);
                    }
                }
                else
                {
                    int l_351 = 0L;
                    int **l_361 = &l_294;
                    if (((*l_281) = (p_35 ^ ((void*)0 != &l_279))))
                    {
                        const int **l_346 = &l_335;
                        (*l_346) = p_34;

                        ;
                    }
                    else
                    {
                        int **l_347 = (void*)0;
                        int **l_348 = &l_339;
                        int *l_349 = &g_31;
                        (*l_348) = (void*)0;
                        l_350 = l_349;

                        ;
                        l_351 = l_351;
                    }

                    ;
                    ;
                    for (g_31 = (-28); (g_31 > (-25)); g_31 = safe_add_func_uint32_t_u_u(g_31, 1))
                    {
                        int *l_358 = (void*)0;
                        int *l_359 = &l_293;
                        int **l_360 = &l_339;
                        (*l_359) = (safe_mod_func_int8_t_s_s((safe_add_func_int32_t_s_s((*p_34), g_45)), g_66.f2));
                        (*l_360) = l_359;

                        ;
                    }

                    ;
                    (*l_361) = l_350;

                    ;
                    (*l_361) = l_362;

                    ;
                }

                ;
                ;
                ;
                ;
                l_363 = p_34;

                ;
                return l_363;



            }
        }
        else
        {
            const int **l_364 = &l_335;
            const int *l_366 = &g_66.f0;
            const int **l_365 = &l_366;
            (*l_364) = p_34;

            ;
            (*l_365) = ((*l_364) = &g_31);

            ;
            ;
        }


        ;
        l_367 = ((*l_281) = (l_278 != (void*)0));
    }
    else
    {
        int **l_368 = &g_200;
        char *l_369 = &g_273;
        int *l_370 = (void*)0;
        int *l_371 = &g_106;
        const int l_372 = 0x87824023L;
        union U0 ***l_394 = &l_386;
        short l_406 = 0xB421L;
        int *l_414 = (void*)0;
        unsigned char l_438 = 0xACL;
        const int *l_490 = &g_308;
        union U0 l_511 = {0L};
        unsigned l_516 = 1UL;
        (*l_281) = func_26(p_35);
        if (((((*g_324) = func_26((p_35 == (*l_281)))) != (0x8CL < (func_26(((**g_199) = ((*l_371) = (func_26((((*l_335) > 1L) || g_114)) >= (*p_34))))) | l_372))) >= 0UL))
        {
            short l_382 = 3L;
            union U0 **l_384 = &g_150;
            union U0 *** const l_383 = &l_384;
            union U0 ***l_387 = (void*)0;
            int * const l_412 = (void*)0;
            int *l_413 = &g_97;
            int **l_415 = &l_413;
            int **l_416 = &l_281;
            int *l_417 = &g_31;
            int **l_418 = &g_96;
            (*l_281) = (safe_add_func_int32_t_s_s((((0xB1L && 1L) < (safe_lshift_func_int8_t_s_s((((*g_324) && (((safe_rshift_func_uint8_t_u_s(g_66.f2, ((*l_369) = ((*g_324) | (p_36 < (g_308 <= l_372)))))) <= (g_19.f0 < 0x42L)) >= 0x41L)) ^ (*p_34)), 7))) || 0xD3L), (*l_281)));
            if (((*l_281) = (*p_34)))
            {
                unsigned char *l_379 = &g_81;
                (*l_281) = ((0L == (g_66.f0 & (+(func_26((*l_335)) && (((*l_379) = 3UL) | (((safe_mod_func_uint16_t_u_u(p_36, l_382)) > (-1L)) >= (~l_372))))))) == 0xF9L);
                (*l_281) = (((l_372 > g_308) || g_25) >= (l_382 >= (l_383 != (l_387 = l_385))));

                ;
            }
            else
            {
                union U0 ****l_395 = &l_385;
                union U0 ****l_396 = &l_387;
                short *l_398 = &g_222;
                short **l_397 = &l_398;
                unsigned *l_407 = &l_280;
                short *l_410 = &g_228;
                int l_411 = 0x97996149L;
                (*l_384) = &g_66;

                ;
                g_150 = &g_66;
                (*l_281) = (safe_sub_func_int32_t_s_s(l_382, (safe_sub_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s((&l_386 != ((*l_396) = ((*l_395) = l_394))), 2)), p_36))));

                ;
                (*l_281) = ((-4L) || (((g_399 = ((*l_397) = (void*)0)) != &g_222) != ((((safe_mod_func_int32_t_s_s((*p_34), (safe_lshift_func_int16_t_s_s((l_406 <= ((((*l_407) = (*l_335)) && (safe_rshift_func_int16_t_s_u(l_382, 9))) != ((((*l_410) = g_66.f2) || p_35) || 7UL))), p_35)))) | l_382) & g_273) >= l_411)));

                ;
            }

            ;
            l_413 = l_412;

            ;
            (*l_418) = (l_417 = ((*l_416) = ((*l_415) = l_414)));

            ;
            ;
            ;
        }
        else
        {
            union U0 ***l_425 = &l_386;
            const int *l_428 = &g_31;
            const int *l_443 = (void*)0;
            int l_465 = 8L;
            const int **l_491 = &l_490;
            for (l_280 = (-26); (l_280 >= 45); l_280 = safe_add_func_uint32_t_u_u(l_280, 1))
            {
                union U0 l_436 = {0xD38E3FF0L};
                const int *l_442 = &l_343;
                int l_467 = 0x63FC42F5L;
            }
            (*l_491) = p_34;

            ;
        }


        ;
        ;
        if ((safe_rshift_func_int16_t_s_u((safe_lshift_func_uint8_t_u_s((safe_mod_func_int8_t_s_s(p_35, 9UL)), 0)), 10)))
        {
            const int **l_498 = (void*)0;
            const int **l_499 = (void*)0;
            const int **l_500 = &l_490;
            (*l_500) = p_34;
        }
        else
        {
            const int **l_501 = &l_335;
            const int **l_502 = (void*)0;
            const int **l_503 = (void*)0;
            const int **l_504 = &l_335;
            char **l_506 = &l_278;
            char ***l_505 = &l_506;
            (**g_422) = (void*)0;

            ;
            (*l_501) = p_34;

            ;
            (*l_504) = p_34;
            (*l_505) = &l_278;
        }

        ;
        if (((safe_sub_func_uint32_t_u_u(p_35, (safe_lshift_func_uint16_t_u_s(func_47(&p_35, l_511, (safe_add_func_uint8_t_u_u((8L && (safe_lshift_func_uint16_t_u_s((*l_335), p_36))), l_516))), g_81)))) != (*g_324)))
        {
            int *l_520 = &g_31;
            int *l_527 = (void*)0;
            int *l_528 = &g_114;
            union U0 l_529 = {1L};
            unsigned char *l_536 = &g_94;
            int *l_539 = &l_343;
            (*l_520) = (safe_unary_minus_func_uint32_t_u((safe_rshift_func_int8_t_s_s(0L, 4))));
            (*l_520) = (((safe_mod_func_int32_t_s_s((((+0x50C1L) | 65529UL) & (safe_sub_func_uint8_t_u_u((*l_520), ((*l_536) = (safe_rshift_func_uint16_t_u_u(func_26(((*l_528) = (+0x1F78BCFDL))), (p_35 > func_47(&g_273, l_529, (safe_sub_func_uint8_t_u_u(((safe_add_func_int8_t_s_s((safe_rshift_func_int16_t_s_s(0x273BL, g_66.f0)), p_36)) >= 9L), 0xF5L)))))))))), (*l_490))) >= 0L) == p_35);
            (*l_539) = ((*l_520) = ((*l_520) > (safe_rshift_func_uint16_t_u_u((*g_324), 3))));
        }
        else
        {
            unsigned short **l_544 = &g_324;
            unsigned short ***l_543 = &l_544;
            const int **l_545 = &l_335;
            unsigned l_546 = 0UL;
            l_343 = (safe_add_func_int8_t_s_s(((*l_335) | (l_542 == ((*l_543) = (void*)0))), 253UL));

            ;
            (*l_545) = &l_372;

            ;
            g_97 = (((*g_324) = l_546) != (p_36 >= (**l_545)));
        }


        ;
    }


    ;

    for (l_437 = (-12); (l_437 == 28); l_437 = safe_add_func_int32_t_s_s(l_437, 1))
    {
        const int **l_549 = &l_335;
        (*l_549) = p_34;

        ;
        (**g_422) = (void*)0;

        ;
    }


    (*l_559) = (safe_add_func_uint8_t_u_u((func_47(&p_35, g_66, (l_343 = (safe_lshift_func_uint16_t_u_u(0x0869L, 8)))) || (&g_273 != &p_35)), (safe_sub_func_int8_t_s_s((func_26(p_35) & (((*l_556) = &l_280) == p_34)), p_36))));


    ;
    (*l_559) = (*p_34);
    return &g_97;


}







static union U0 * func_37(unsigned short p_38)
{
    const union U0 *l_116 = &g_66;
    int *l_117 = &g_97;
    int **l_118 = &l_117;
    union U0 **l_141 = (void*)0;
    union U0 ***l_140 = &l_141;
    union U1 *l_147 = (void*)0;
    int l_157 = (-4L);
    unsigned char *l_164 = &g_81;
    int *l_165 = &g_31;
    int **l_169 = (void*)0;
    int l_268 = 4L;
    union U0 *l_272 = &g_66;
    (*l_117) = (&g_66 == l_116);
    (*l_118) = l_117;
    for (g_45 = 0; (g_45 == 55); g_45++)
    {
        union U0 *l_121 = &g_66;
        union U0 **l_122 = (void*)0;
        union U0 *l_124 = &g_66;
        union U0 **l_123 = &l_124;
        int l_130 = 0xA8E06435L;
        union U1 **l_148 = (void*)0;
        union U1 **l_149 = &l_147;
        if ((l_121 == ((*l_123) = l_121)))
        {
            unsigned short l_125 = 6UL;
            (**l_118) = (p_38 ^ (g_66.f2 > (((2L == (l_125 && p_38)) >= (-1L)) & (safe_rshift_func_uint16_t_u_u((*l_117), func_47(&g_25, (*l_116), p_38))))));


            l_130 = (safe_rshift_func_int8_t_s_s(0x35L, l_130));
            g_31 = ((**l_118) = (func_26(p_38) != (safe_lshift_func_uint8_t_u_s(p_38, 3))));
        }
        else
        {
            union U0 *l_134 = (void*)0;
            union U1 l_144 = {254UL};
            int *l_146 = &g_31;
            if (l_130)
            {
                union U0 *l_133 = &g_66;
                if (p_38)
                {
                    return l_133;


                }
                else
                {
                    (**l_118) = func_26(g_25);
                }
                (*l_118) = &g_31;

                ;
                return l_134;


            }
            else
            {
                union U0 ***l_135 = &l_122;
                union U0 l_145 = {0x14FE225AL};
                (*l_135) = &l_134;

                ;
                (*l_118) = &g_97;
                (*l_117) = ((safe_mod_func_int8_t_s_s((!(safe_rshift_func_int16_t_s_s(((void*)0 == l_140), (1UL > func_47(func_51((safe_sub_func_uint16_t_u_u(g_66.f2, (**l_118))), &g_25, g_81, (**l_118), l_144), l_145, p_38))))), p_38)) < 0x28L);


            }


            ;
            if (l_130)
                continue;
            (*l_118) = l_146;

            ;
        }


        ;

        (*l_149) = l_147;
        return g_150;


    }
    if ((((safe_rshift_func_int16_t_s_u((**l_118), (safe_add_func_uint32_t_u_u((safe_sub_func_uint8_t_u_u(func_26(g_25), p_38)), ((*l_165) = (((*l_164) = ((l_157 == (-1L)) > (safe_lshift_func_int16_t_s_s(((**l_118) ^ (safe_sub_func_uint16_t_u_u(((((safe_rshift_func_int16_t_s_u((*l_117), 9)) ^ p_38) | 0x26FAL) || g_94), g_106))), g_66.f2)))) >= 0x46L)))))) == (*l_117)) && 1L))
    {
        int *l_167 = &l_157;
        int **l_166 = &l_167;
        int ***l_168 = &l_166;
        int *l_172 = &g_31;
        union U0 *l_173 = &g_66;
        l_169 = ((*l_168) = l_166);

        ;
        for (p_38 = 0; (p_38 != 41); ++p_38)
        {
            union U0 **l_174 = (void*)0;
            union U0 **l_175 = &g_150;
            int l_176 = 1L;
            l_172 = ((*l_118) = (void*)0);

            ;
            ;
            (*l_118) = (void*)0;
            (*l_175) = l_173;

            ;
            (*l_165) = l_176;
        }

        ;
        ;
        (*l_118) = &g_97;

        ;
    }
    else
    {
        int l_193 = 0x140D6580L;
        union U0 *l_197 = &g_66;
        const int *l_201 = (void*)0;
        int l_239 = 1L;
        int l_269 = 0x69A7E2A2L;
        for (g_46 = 0; (g_46 > 60); g_46 = safe_add_func_uint16_t_u_u(g_46, 2))
        {
            unsigned l_179 = 0x9FB5A3AAL;
            if (l_179)
                break;
            g_96 = &g_31;

            ;
        }
        for (g_114 = 27; (g_114 == 10); g_114 = safe_sub_func_int16_t_s_s(g_114, 1))
        {
            short l_188 = 0L;
            const union U1 *l_217 = &g_19;
            const union U1 **l_216 = &l_217;
            int *l_224 = &g_31;
            for (g_97 = (-6); (g_97 >= (-9)); g_97--)
            {
                union U0 l_194 = {0L};
                int *l_204 = &g_31;
                if (p_38)
                    break;
                if (((safe_lshift_func_int8_t_s_s(((safe_sub_func_int16_t_s_s(l_188, g_66.f2)) ^ p_38), (safe_sub_func_int32_t_s_s(1L, (safe_rshift_func_int16_t_s_u(((l_193 = 1L) && 2L), 3)))))) <= func_26(func_47(l_164, l_194, g_114))))
                {
                    union U0 * const l_195 = &l_194;
                    union U0 **l_196 = &g_150;
                    (*l_196) = l_195;

                    ;
                    g_150 = l_197;

                    ;
                }
                else
                {
                    (*l_165) = l_188;
                }


                if ((((void*)0 == g_198) || ((*l_165) == 7L)))
                {
                    const int **l_202 = (void*)0;
                    const int **l_203 = &l_201;
                    (*l_203) = l_201;
                    (*l_203) = ((*l_118) = l_204);

                    ;
                    ;
                    for (g_94 = 0; (g_94 > 53); g_94 = safe_add_func_uint16_t_u_u(g_94, 3))
                    {
                        unsigned l_207 = 4294967295UL;
                        l_197 = &g_66;
                        (**l_118) = l_207;
                        (*l_117) = (**l_118);
                    }
                    for (g_81 = 0; (g_81 <= 36); g_81 = safe_add_func_uint8_t_u_u(g_81, 7))
                    {
                        union U1 **l_218 = &l_147;
                        short *l_221 = &g_222;
                        int l_223 = (-2L);
                        (**l_118) = (safe_sub_func_int32_t_s_s((safe_lshift_func_uint16_t_u_s(0UL, (((g_106 && (safe_lshift_func_uint16_t_u_u(g_94, 12))) | l_188) & (((l_216 == l_218) ^ (l_188 & ((*l_221) = (safe_lshift_func_uint16_t_u_s(p_38, 1))))) < p_38)))), (-1L)));
                        if (l_223)
                            continue;
                    }
                }
                else
                {
                    (*l_118) = l_224;

                    ;
                }

                ;
            }
        }

        ;
        ;
        if (g_106)
        {
            unsigned short l_225 = 1UL;
            int *l_229 = &g_31;
            unsigned l_241 = 0x3EB71E6FL;
            char *l_249 = (void*)0;
            (**l_118) = l_225;
            if ((safe_lshift_func_uint8_t_u_u(g_228, p_38)))
            {
                int *l_230 = (void*)0;
                int ***l_231 = &l_118;
                l_230 = ((*l_118) = l_229);

                ;
                ;
                if ((((void*)0 != &l_197) > ((((((*l_231) = &g_96) != (void*)0) >= (safe_rshift_func_uint16_t_u_u(g_46, ((-6L) ^ 251UL)))) < p_38) & (((~p_38) & p_38) >= p_38))))
                {
                    union U0 l_251 = {0x3D2B0BF1L};
                    if ((&g_19 == (void*)0))
                    {
                        unsigned short *l_238 = &l_225;
                        int l_240 = (-1L);
                        g_97 = (((*l_230) = (safe_add_func_uint16_t_u_u(((*l_238) = (g_236 != &l_118)), ((((l_239 = g_25) | func_26((*l_230))) ^ l_240) <= (((g_114 == l_241) | (*l_230)) <= 4294967293UL))))) | 0x6187993AL);
                        (**l_231) = &g_97;

                        ;
                        (**l_231) = &l_239;

                        ;
                    }
                    else
                    {
                        int *l_242 = &l_157;
                        (*l_229) = (*l_229);
                        (*l_230) = (g_106 > func_26(((*l_242) = (func_26(p_38) <= g_31))));
                    }


                    (**l_231) = l_229;

                    ;
                    if ((*l_229))
                    {
                        char **l_250 = &l_249;
                        short *l_252 = &g_228;
                        (*l_165) = (safe_sub_func_uint8_t_u_u((0UL > (safe_rshift_func_uint8_t_u_u((((safe_sub_func_int16_t_s_s(((*l_252) = p_38), p_38)) & (safe_mod_func_uint16_t_u_u(0xA800L, (safe_rshift_func_int8_t_s_u(p_38, g_19.f0))))) | 0UL), p_38))), (*l_229)));
                        (*l_229) = (***l_231);
                    }
                    else
                    {
                        return &g_66;


                    }
                }
                else
                {
                    (**l_231) = &l_239;

                    ;
                    (*g_96) = (**g_237);
                    (**l_118) = 0xB0A74A4EL;
                    (*l_118) = (*l_118);
                }

                ;
                ;
            }
            else
            {
                return &g_66;


            }

            ;
            ;
            ;
        }
        else
        {
            union U0 **l_267 = &g_15;
            const int *l_270 = &l_239;
            if (((safe_add_func_int16_t_s_s((safe_add_func_uint8_t_u_u((0x36L < (safe_add_func_int8_t_s_s((safe_add_func_int16_t_s_s(g_46, (!l_193))), 255UL))), ((*l_164) = 0x34L))), (safe_mod_func_uint32_t_u_u((((&l_169 == &l_169) && ((void*)0 == l_267)) != l_268), g_19.f0)))) & l_269))
            {
                const int *l_271 = &g_31;
                l_271 = l_270;

                ;
            }
            else
            {
                g_96 = ((*l_118) = &g_97);

                ;
                ;
                (***g_236) = (&g_228 != (void*)0);
            }
        }


        ;
    }

    ;
    ;

    return l_272;


}







static short func_47(char * p_48, union U0 p_49, int p_50)
{
    char l_109 = 1L;
    int l_113 = 0xAE6FB37EL;
    g_96 = &p_50;

    ;
    if (p_49.f2)
    {
        int **l_98 = (void*)0;
        g_96 = &g_31;

        ;
    }
    else
    {
        int *l_105 = &g_106;
        int **l_112 = &g_96;
        (*g_96) = (safe_sub_func_int8_t_s_s(((safe_mod_func_uint32_t_u_u(p_49.f1, (~((safe_mod_func_uint32_t_u_u(((*p_48) ^ func_26(((*l_105) = 0L))), (safe_lshift_func_uint16_t_u_u(func_26(g_25), 12)))) != (0x47L ^ l_109))))) < (safe_rshift_func_uint8_t_u_s(0x5DL, l_109))), 1UL));
        (*l_112) = &p_50;
        return p_49.f0;


    }

    ;
    return l_113;
}







static char * func_51(unsigned p_52, char * p_53, unsigned p_54, char p_55, union U1 p_56)
{
    const int l_68 = 5L;
    char *l_71 = &g_25;
    int l_73 = 0xCD027BAEL;
    int *l_87 = &l_73;
    unsigned l_90 = 0x2591552DL;
    int l_91 = (-5L);
    int *l_92 = (void*)0;
    int *l_93 = &l_73;
    char *l_95 = &g_25;
    if ((0x94L | func_26(l_68)))
    {
        char l_69 = 0x4FL;
        int **l_82 = (void*)0;
        int *l_84 = &l_73;
        int **l_83 = &l_84;
        if (func_26(l_68))
        {
            int l_70 = 0x93AB76A1L;
            l_70 = l_69;
        }
        else
        {
            int *l_80 = &l_73;
            if (g_66.f0)
            {
                return l_71;


            }
            else
            {
                int *l_72 = (void*)0;
                union U0 *l_74 = &g_66;
                if ((l_73 = 0x36352B72L))
                {
                    union U0 **l_75 = &l_74;
                    int **l_76 = &l_72;
                    (*l_75) = l_74;
                    (*l_76) = (void*)0;
                }
                else
                {
                    for (g_25 = 0; (g_25 >= (-15)); --g_25)
                    {
                        union U0 **l_79 = &l_74;
                        (*l_79) = l_74;
                    }
                    g_81 = (((void*)0 != l_80) == l_73);
                }
            }
        }
        (*l_83) = &g_31;

        ;
    }
    else
    {
        int *l_85 = (void*)0;
        int *l_86 = &l_73;
        (*l_86) = (0xD7F9B64AL || g_19.f0);
        l_87 = &g_31;

        ;
    }

    ;
    (*l_93) = (l_91 = (safe_sub_func_uint16_t_u_u((*l_87), (p_55 & func_26(((~(p_56.f0 || (*l_87))) >= ((*p_53) = l_90)))))));
    g_94 = (0x8A32L > p_55);
    return l_95;


}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_8, "g_8", print_hash_value);
    transparent_crc(g_19.f0, "g_19.f0", print_hash_value);
    transparent_crc(g_25, "g_25", print_hash_value);
    transparent_crc(g_31, "g_31", print_hash_value);
    transparent_crc(g_45, "g_45", print_hash_value);
    transparent_crc(g_46, "g_46", print_hash_value);
    transparent_crc(g_66.f0, "g_66.f0", print_hash_value);
    transparent_crc(g_66.f1, "g_66.f1", print_hash_value);
    transparent_crc(g_66.f2, "g_66.f2", print_hash_value);
    transparent_crc(g_81, "g_81", print_hash_value);
    transparent_crc(g_94, "g_94", print_hash_value);
    transparent_crc(g_97, "g_97", print_hash_value);
    transparent_crc(g_106, "g_106", print_hash_value);
    transparent_crc(g_114, "g_114", print_hash_value);
    transparent_crc(g_222, "g_222", print_hash_value);
    transparent_crc(g_228, "g_228", print_hash_value);
    transparent_crc(g_273, "g_273", print_hash_value);
    transparent_crc(g_308, "g_308", print_hash_value);
    transparent_crc(g_317.f0, "g_317.f0", print_hash_value);
    transparent_crc(g_325, "g_325", print_hash_value);
    transparent_crc(g_458, "g_458", print_hash_value);
    transparent_crc(g_466, "g_466", print_hash_value);
    transparent_crc(g_576, "g_576", print_hash_value);
    transparent_crc(g_582, "g_582", print_hash_value);
    transparent_crc(g_661, "g_661", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
