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



static short g_11 = 0xB7F3L;
static char g_15 = 0xD9L;
static int g_39 = 0xFAA23240L;
static int *g_38 = &g_39;
static short g_41 = 0xC4F3L;
static short *g_40 = &g_41;
static char *g_77 = (void*)0;
static char g_82 = 7L;
static short g_99 = 5L;
static unsigned char g_106 = 0xC8L;
static unsigned short g_121 = 0xC50AL;
static char g_124 = (-4L);
static unsigned short g_125 = 0xD965L;
static char g_134 = (-1L);
static int g_138 = 0xB119D2B5L;
static unsigned g_171 = 0UL;
static const int g_184 = 0xCF833B27L;
static int *g_190 = &g_39;
static unsigned g_236 = 0UL;
static unsigned char g_284 = 1UL;
static char g_289 = 0x18L;
static short ***g_296 = (void*)0;
static char *** const g_302 = (void*)0;
static unsigned *g_315 = &g_171;
static unsigned **g_314 = &g_315;
static unsigned ***g_313 = &g_314;
static unsigned g_403 = 4294967295UL;
static char **g_412 = &g_77;
static unsigned g_439 = 0xE26C6504L;
static const unsigned char *g_531 = &g_106;
static const unsigned char **g_530 = &g_531;
static unsigned g_562 = 4294967288UL;
static unsigned g_602 = 0xEA9D1F03L;
static unsigned g_609 = 1UL;
static unsigned short g_624 = 0x6B9DL;
static int g_675 = 0x765399F3L;
static const int *g_679 = (void*)0;
static const int *g_708 = &g_138;



static unsigned short func_1(void);
static int * func_2(unsigned char p_3, const char p_4, int p_5, unsigned p_6);
static unsigned char func_18(int p_19, int p_20, short * p_21, int * const p_22);
static char func_25(unsigned short p_26);
static unsigned char func_33(int * p_34, short * p_35, char * p_36, int p_37);
static short * func_54(unsigned short p_55, int * const p_56, int p_57, short p_58, int * p_59);
static int * func_60(unsigned p_61, short p_62, short p_63);
static unsigned func_68(char * const p_69, char p_70, char p_71, char * const p_72);
static char * const func_73(int p_74, int * p_75);
static const int func_85(int p_86, char * p_87);
static unsigned short func_1(void)
{
    short *l_12 = &g_11;
    int l_13 = 0x8E1B8814L;
    char *l_14 = &g_15;
    unsigned char *l_452 = &g_106;
    int **l_533 = &g_190;
    const int *l_535 = &g_184;
    const int **l_534 = &l_535;
    const int **l_536 = (void*)0;
    const int **l_537 = (void*)0;
    const int *l_539 = &l_13;
    const int **l_538 = &l_539;
    short l_560 = (-1L);
    short l_629 = 0x6838L;
    unsigned l_646 = 0xD3139D1EL;
    unsigned l_711 = 4294967295UL;
    int l_730 = 0xF371472AL;
    unsigned *l_731 = &g_236;
    (*l_533) = func_2(((safe_rshift_func_uint8_t_u_u(((safe_lshift_func_uint16_t_u_s(1UL, ((*l_12) = (!g_11)))) || ((*l_14) = l_13)), ((*l_452) = (safe_lshift_func_uint16_t_u_s((func_18((l_13 != (safe_sub_func_int8_t_s_s(func_25(((((((0xA0426A76L | (safe_mul_func_int8_t_s_s(1L, l_13))) , (l_13 >= (safe_lshift_func_uint8_t_u_u(((func_33(g_38, g_40, l_14, (*g_38)) && g_41) && 0UL), 6)))) || g_39) ^ l_13) > g_41) <= (*g_38))), 0xA8L))), l_13, &g_41, &l_13) != 0L), g_134))))) , 0UL), l_13, l_13, l_13);
    (*l_538) = ((*l_534) = &g_39);
    if ((func_25((*l_539)) | g_284))
    {
        int l_570 = (-5L);
        int l_583 = 0L;
        short *l_588 = &l_560;
        short *l_607 = (void*)0;
        char *l_608 = &g_289;
        unsigned short *l_615 = &g_121;
        unsigned short **l_614 = &l_615;
        unsigned short *l_617 = &g_125;
        unsigned short **l_616 = &l_617;
        int l_649 = 0x15C31BCFL;
        for (g_121 = 0; (g_121 != 7); ++g_121)
        {
            int *l_544 = &l_13;
            short *l_547 = &g_41;
            unsigned l_557 = 4294967295UL;
            char *l_561 = &g_124;
            unsigned short *l_610 = &g_125;
            char l_611 = 0x94L;
            for (g_138 = 0; (g_138 >= (-29)); --g_138)
            {
                int *l_545 = &g_138;
                int *l_546 = &l_13;
                short *l_550 = (void*)0;
                char *l_567 = &g_124;
                const int * const l_575 = &g_138;
                int *l_598 = &l_570;
                int **l_597 = &l_598;
                (*l_546) = ((l_544 = &g_39) != l_545);
                (*l_544) = func_33(l_545, l_547, (*g_412), (safe_mod_func_uint32_t_u_u(0x13C404A4L, (((**g_530) & (65531UL ^ func_33(l_546, l_550, (*g_412), (*g_190)))) , 1L))));
                if ((safe_mul_func_int16_t_s_s((g_124 && (safe_sub_func_uint8_t_u_u((g_99 || ((g_138 , 0UL) , (safe_add_func_int16_t_s_s(l_557, (*l_539))))), (((safe_rshift_func_uint16_t_u_s(g_439, 11)) == (func_33(((*l_533) = (l_560 , func_60((*g_315), (*l_539), g_99))), &g_41, l_561, (*g_38)) , (*l_546))) == 0x06C4L)))), g_138)))
                {
                    unsigned char *l_563 = (void*)0;
                    short *l_566 = &l_560;
                    unsigned l_568 = 0xEA038C23L;
                    int l_569 = 0xFAD8CC73L;
                    int **l_576 = (void*)0;
                    int **l_577 = &l_546;
                    int l_590 = 0L;
                    (*l_533) = func_60(((((*g_531) == ((g_284 = ((1UL > g_562) == 0x1D7AL)) , (safe_sub_func_int16_t_s_s(((func_33(&g_138, l_566, l_567, (*l_546)) && l_568) == g_106), (*l_545))))) <= 0x058DEC75L) , (*g_315)), (*l_544), g_134);
                    l_569 = (*g_38);
                    (*l_546) = l_570;
                    if ((safe_rshift_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s((*g_531), func_33((*l_533), l_547, (*g_412), (*g_38)))), (l_575 == ((*l_577) = func_60((*l_539), l_570, (**l_534)))))))
                    {
                        int l_582 = 8L;
                        short *l_589 = &g_99;
                        unsigned char **l_591 = &l_563;
                        (*l_544) = ((safe_rshift_func_int16_t_s_u(((*l_588) = ((**l_534) < (!(((safe_mod_func_uint8_t_u_u((*g_531), l_582)) , (l_583 = (*l_539))) > (safe_add_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(func_33(&g_138, l_588, l_563, func_33(func_60(l_570, (*l_544), l_582), l_589, (*g_412), (**l_533))), (*l_575))), l_590)))))), 8)) | (**g_530));
                        (*l_544) = (*g_190);
                        (*l_544) = ((*g_530) != ((*l_591) = &g_284));
                    }
                    else
                    {
                        (*g_313) = (void*)0;
                    }
                }
                else
                {
                    unsigned short l_594 = 1UL;
                    unsigned l_601 = 1UL;
                    (*l_538) = &g_138;
                    if (((safe_lshift_func_uint8_t_u_u(0xFCL, l_594)) , ((safe_lshift_func_uint16_t_u_s((((((((*l_588) = ((void*)0 != l_597)) , (!(l_583 < ((g_121 || (((safe_rshift_func_uint8_t_u_u((((*l_544) >= l_601) <= (*l_544)), (*l_544))) ^ (*g_190)) <= g_602)) < (-9L))))) , l_601) , (*l_575)) , g_236) , g_124), l_594)) != g_134)))
                    {
                        return g_125;
                    }
                    else
                    {
                        return (*l_545);
                    }
                }
            }
            (*l_538) = ((*l_533) = l_544);
            (*l_544) = ((safe_mod_func_uint32_t_u_u(((*g_315) = ((((l_570 , ((*l_610) = ((l_547 == (void*)0) > (((*l_452) = l_570) , (safe_mul_func_uint16_t_u_u(((func_33(l_544, l_607, l_608, (*g_190)) >= (*g_315)) || g_609), g_284)))))) , (*g_38)) != (*l_539)) & l_611)), g_439)) != 0xECL);
        }
        if (((**l_538) != (((func_85(((*l_535) , (safe_mul_func_uint8_t_u_u((((((((*l_616) = ((*l_614) = (void*)0)) != l_12) || (safe_add_func_int32_t_s_s((safe_add_func_int8_t_s_s(l_570, l_570)), 5L))) < ((((((safe_add_func_int32_t_s_s((*g_190), (((l_583 = ((l_570 > (**g_530)) , l_570)) > 0UL) == l_570))) & g_624) > 7UL) <= (*g_190)) < (*g_315)) == (-6L))) ^ 5UL) < l_570), (*g_531)))), (*g_412)) || 65535UL) ^ 0x2D4BL) || g_184)))
        {
            int *l_625 = &l_570;
            int l_626 = 0x5D40BDB5L;
            unsigned *l_627 = (void*)0;
            unsigned *l_628 = &g_562;
            short l_630 = 0x756AL;
            (**l_533) = (*g_38);
            (*g_38) = (*g_38);
            (*l_533) = &g_138;
        }
        else
        {
            short *l_631 = &g_11;
            int l_634 = (-1L);
            char *l_645 = (void*)0;
            (*l_533) = func_60(((((void*)0 != l_631) < (safe_lshift_func_int16_t_s_s(g_138, func_85(func_85(g_184, l_608), (*g_412))))) == ((*l_14) = (func_33((*l_533), &g_41, (*g_412), (*g_190)) <= l_583))), l_634, (**l_538));
            (*g_190) = (safe_mod_func_int8_t_s_s((safe_lshift_func_int16_t_s_u((**l_538), func_33(&g_39, &g_11, ((safe_mul_func_uint16_t_u_u(l_570, (safe_rshift_func_int16_t_s_s(l_634, ((l_570 & ((safe_lshift_func_uint8_t_u_u((**g_530), 5)) , func_33(&g_138, l_588, l_645, l_583))) == l_646))))) , l_14), (*g_38)))), l_634));
            l_583 = (safe_mul_func_uint8_t_u_u((*g_531), l_649));
            for (l_583 = 27; (l_583 >= (-2)); --l_583)
            {
                return g_121;
            }
        }
    }
    else
    {
        int *l_652 = &l_13;
        int *l_653 = (void*)0;
        int *l_654 = &g_39;
        char **l_672 = (void*)0;
        char *l_676 = (void*)0;
        unsigned char * const *l_698 = &l_452;
        unsigned char * const **l_697 = &l_698;
        (*l_654) = ((*l_652) = ((*g_38) = (*g_190)));
        (*l_534) = (g_190 = (*l_533));
        for (g_624 = 0; (g_624 > 29); ++g_624)
        {
            int *l_657 = (void*)0;
            int *l_690 = &l_13;
            l_657 = l_653;
            (*l_538) = l_654;
            for (g_134 = 0; (g_134 <= 10); ++g_134)
            {
                int l_666 = 1L;
                char *l_695 = &g_289;
                char * const l_703 = &g_15;
                int l_707 = (-1L);
                for (g_41 = 0; (g_41 <= (-3)); --g_41)
                {
                    unsigned char l_669 = 0x11L;
                    int l_688 = (-1L);
                    char * const l_696 = &g_134;
                    int l_702 = 0x431E254FL;
                    short *l_706 = &g_99;
                    if ((*g_38))
                    {
                        char ***l_670 = (void*)0;
                        char ***l_671 = &g_412;
                        char ***l_673 = &l_672;
                        int *l_674 = &g_675;
                        short *l_677 = &l_560;
                        int l_678 = 0x04B60548L;
                        unsigned l_680 = 9UL;
                        unsigned short *l_689 = &g_121;
                        (*l_654) = (((((g_679 = func_60(((*g_315) = ((safe_lshift_func_uint16_t_u_s(((((*l_654) != ((safe_rshift_func_uint16_t_u_u((func_33(((*l_533) = (l_657 = func_60(l_666, ((*l_12) = (g_236 > g_41)), ((safe_lshift_func_uint8_t_u_u(l_669, 2)) <= (((*g_315) > (func_85(((*l_674) = ((((*g_38) = (g_121 , ((((*l_671) = &g_77) != ((*l_673) = l_672)) , 0xC6B29A57L))) , (**l_533)) > g_125)), l_676) > l_669)) & 1L))))), l_677, &g_134, g_184) || (**l_534)), l_666)) > (*g_315))) , 0xDE0083D3L) , g_15), l_678)) == l_669)), g_624, l_678)) == (void*)0) == l_669) <= g_624) <= l_680);
                        (*l_538) = ((((*l_452) = (safe_mul_func_uint16_t_u_u((safe_mul_func_int8_t_s_s(0x7FL, 0x9AL)), ((l_669 && (((void*)0 == &g_412) , (func_85((*g_679), (*g_412)) , (safe_rshift_func_uint8_t_u_u(((**g_530) , (*l_657)), (*l_657)))))) <= 8L)))) , (-6L)) , &g_184);
                        (*l_652) = (func_68(func_73((safe_unary_minus_func_uint16_t_u(((*l_689) = l_688))), l_690), func_33(&g_39, l_689, l_452, ((safe_mod_func_int32_t_s_s(((safe_rshift_func_int16_t_s_s(func_33(&g_39, &g_11, l_695, (*g_190)), (*l_535))) == l_666), 0x7D9FB5B1L)) != g_562)), (*l_657), l_696) , (*g_190));
                    }
                    else
                    {
                        int *l_704 = &l_666;
                        int l_705 = 0xAD6694D4L;
                        (*l_534) = func_60((~((0x4CL <= (~(l_697 != (void*)0))) && (safe_unary_minus_func_uint16_t_u(func_33(func_60((*g_315), (safe_mul_func_uint8_t_u_u((*g_531), (!(*g_531)))), (((l_702 ^ (((func_68(l_703, (((*l_704) = (g_675 = (l_688 != l_666))) , 0x34L), l_705, l_695) <= g_39) < 0x2B07L) & l_688)) ^ 2UL) == (*g_531))), l_706, (*g_412), l_705))))), l_707, (*l_652));
                    }
                    return g_675;
                }
                if ((*g_38))
                    break;
            }
            return g_184;
        }
        g_708 = &g_184;
    }
    (**l_533) = func_68(func_73(((*g_38) = 0x3A3FC51CL), g_38), (safe_add_func_int8_t_s_s(l_711, (safe_mul_func_uint16_t_u_u(g_439, ((*g_315) == ((*l_731) = ((*g_315) , ((safe_rshift_func_int16_t_s_s((safe_mul_func_uint16_t_u_u((safe_mod_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s((safe_mod_func_uint32_t_u_u((safe_mod_func_uint8_t_u_u(g_624, (safe_sub_func_int32_t_s_s((safe_rshift_func_int16_t_s_u(0x5EB5L, 12)), l_730)))), g_171)), 7)), g_403)), 65535UL)), g_236)) && g_439)))))))), g_602, (*g_412));
    return g_236;
}







static int * func_2(unsigned char p_3, const char p_4, int p_5, unsigned p_6)
{
    int l_469 = 6L;
    int l_507 = 0x2CF4FF97L;
    char *l_524 = &g_15;
    const unsigned char ***l_532 = &g_530;
    for (g_41 = 28; (g_41 >= (-19)); g_41 = safe_sub_func_uint8_t_u_u(g_41, 8))
    {
        short l_455 = 0xA54EL;
        int *l_458 = &g_138;
        int *l_500 = &g_39;
        (*g_190) = l_455;
        for (g_171 = 0; (g_171 >= 24); g_171 = safe_add_func_int32_t_s_s(g_171, 1))
        {
            short l_476 = 0x616EL;
            char *l_495 = &g_289;
            if (p_3)
            {
                (*g_190) = 0x2267AD00L;
                return l_458;
            }
            else
            {
                int l_461 = 0x502451BBL;
                char *l_486 = &g_15;
                unsigned l_496 = 0x542FD697L;
                for (p_5 = 0; (p_5 <= 5); p_5 = safe_add_func_int32_t_s_s(p_5, 6))
                {
                    short *l_462 = &g_11;
                    int l_466 = 0xFD52D6ABL;
                    char **l_473 = &g_77;
                    char ***l_477 = (void*)0;
                    unsigned *l_481 = &g_236;
                    int **l_482 = &l_458;
                    (*l_458) = (((*l_462) = (l_461 & (-10L))) != (p_3 , p_4));
                    for (g_138 = 0; (g_138 == 3); g_138 = safe_add_func_int32_t_s_s(g_138, 8))
                    {
                        int *l_465 = &g_39;
                        const char * const *l_472 = (void*)0;
                        char ***l_474 = &g_412;
                        int **l_475 = &l_465;
                        int *l_478 = &g_39;
                        (*l_465) = (!5L);
                        (*l_475) = func_60((p_3 && ((p_3 <= l_466) >= p_5)), (safe_add_func_int32_t_s_s(((l_469 = (g_106 , (0L <= p_3))) == (~(((g_236 = ((safe_lshift_func_uint8_t_u_u(((l_472 == ((*l_474) = l_473)) >= 0L), 7)) || 0xBEE77EDEL)) , (*g_315)) == (*g_190)))), 5UL)), p_6);
                        l_476 = 0xAD22CCE8L;
                        (*l_478) = (&l_473 != l_477);
                    }
                    (*l_482) = func_60(((*l_481) = (safe_sub_func_uint32_t_u_u(l_466, ((*l_458) = (*g_190))))), p_6, ((*l_462) = l_461));
                }
                if (p_5)
                    continue;
                for (g_289 = 0; (g_289 <= 15); ++g_289)
                {
                    unsigned short *l_491 = &g_125;
                    const int *l_493 = (void*)0;
                    const int **l_492 = &l_493;
                    int *l_494 = &g_39;
                    int **l_497 = &l_494;
                    (*l_497) = func_60(((func_33(((safe_unary_minus_func_uint32_t_u(0x2FCB4E69L)) , &g_39), (func_85(p_6, l_486) , func_54((l_461 , (((*l_492) = func_60(p_3, l_476, (safe_mul_func_uint16_t_u_u(((*l_491) = ((safe_sub_func_uint8_t_u_u((((g_284 , &p_5) == (void*)0) >= p_5), 1L)) < p_4)), p_5)))) == (void*)0)), &g_39, p_3, p_4, l_494)), l_495, l_476) ^ g_11) , l_496), (*l_458), (*l_458));
                }
            }
        }
        (*l_500) = (p_5 = ((*l_458) = (safe_sub_func_int32_t_s_s(p_6, (-10L)))));
        return l_500;
    }
    for (g_289 = 0; (g_289 == 1); g_289++)
    {
        int **l_508 = (void*)0;
        int * const *l_509 = (void*)0;
        unsigned char *l_510 = &g_106;
        const short *l_519 = &g_99;
        const short **l_518 = &l_519;
        int l_529 = 0x6B0734E1L;
        g_38 = ((safe_mul_func_uint8_t_u_u(p_4, (safe_mul_func_uint16_t_u_u(g_15, (l_507 = 4L))))) , &l_507);
        if ((((*l_510) = (l_509 == (void*)0)) >= ((func_68((l_507 , l_510), p_3, p_5, (*g_412)) || (safe_sub_func_uint32_t_u_u(0x0705C01AL, (*g_315)))) != l_469)))
        {
            int *l_513 = &g_39;
            return l_513;
        }
        else
        {
            short **l_521 = &g_40;
            short ***l_520 = &l_521;
            (*g_190) = (((((safe_rshift_func_uint16_t_u_s(g_403, 14)) ^ (((safe_rshift_func_int16_t_s_s((l_518 != ((*l_520) = &g_40)), 10)) , (safe_add_func_uint32_t_u_u(func_85(g_82, l_524), (safe_add_func_int16_t_s_s((safe_add_func_uint32_t_u_u(1UL, (((**l_520) == (*l_518)) > (*g_190)))), g_284))))) == (-1L))) < 0x07L) && 0x07L) ^ l_529);
        }
    }
    (*l_532) = g_530;
    return &g_39;
}







static unsigned char func_18(int p_19, int p_20, short * p_21, int * const p_22)
{
    short *l_153 = (void*)0;
    short *l_154 = &g_99;
    int **l_161 = &g_38;
    char *l_189 = &g_82;
    int l_255 = 0x095CEBA1L;
    int l_278 = 0x4544C11FL;
    int l_329 = 0L;
    int *l_436 = (void*)0;
    unsigned **l_440 = (void*)0;
    unsigned **l_442 = &g_315;
    if ((p_19 <= ((*l_154) = ((*p_21) = (safe_sub_func_int32_t_s_s(((*g_38) = (g_134 > ((void*)0 != &g_124))), p_20))))))
    {
        char l_157 = (-6L);
        char l_158 = 3L;
        unsigned char *l_159 = &g_106;
        short *l_166 = &g_41;
        int l_215 = 0x99574A33L;
        short *l_266 = &g_41;
        unsigned ***l_316 = (void*)0;
        int l_318 = (-5L);
        int *l_347 = &l_215;
        const int *l_353 = &l_318;
        char l_364 = 0x06L;
        char **l_384 = &l_189;
        short **l_391 = &g_40;
        unsigned l_396 = 0x7380DA34L;
        if (((((*l_159) = (((safe_add_func_int8_t_s_s(((l_157 == 0x39L) > p_19), g_41)) || l_158) && (*p_22))) , g_106) & (((*g_38) = (*p_22)) , g_124)))
        {
            int **l_160 = &g_38;
            char *l_167 = &g_82;
            unsigned *l_170 = &g_171;
            int *l_172 = &g_39;
            const unsigned l_181 = 4294967294UL;
            const int *l_183 = &g_184;
            const int **l_182 = &l_183;
            const int *l_186 = &g_184;
            const int **l_185 = &l_186;
            (*l_172) = ((l_160 != l_161) > ((*l_170) = ((**l_161) = (safe_sub_func_int8_t_s_s((((safe_rshift_func_int16_t_s_u(l_157, ((func_33((*l_160), l_166, l_167, (*p_22)) && ((safe_rshift_func_int16_t_s_s((*p_21), l_157)) , (*g_38))) , 1UL))) , (void*)0) != &p_21), g_106)))));
            g_190 = ((*l_161) = func_60((**l_161), ((*l_154) = (safe_lshift_func_int8_t_s_s((-5L), 3))), ((+((safe_add_func_uint16_t_u_u(8UL, (+(safe_sub_func_int8_t_s_s(func_33(((g_134 ^ (safe_mul_func_uint8_t_u_u(0x35L, l_181))) , func_60(((*l_161) != ((*l_185) = ((*l_182) = &g_39))), (safe_lshift_func_uint16_t_u_s(((**l_161) , p_20), 6)), (*p_21))), &g_41, l_189, (*g_38)), g_138))))) , (*p_22))) <= 0L)));
            (**l_160) = (p_20 || (g_82 , 1L));
        }
        else
        {
            const unsigned l_193 = 0x0F193884L;
            char * const l_214 = &l_158;
            char **l_239 = (void*)0;
            unsigned l_254 = 0xD4906CFEL;
            short *l_256 = &g_99;
            int * const l_277 = &g_138;
            char *l_331 = &l_157;
            int *l_356 = (void*)0;
            for (g_41 = 29; (g_41 < 24); g_41 = safe_sub_func_uint8_t_u_u(g_41, 7))
            {
                char **l_194 = &g_77;
                int l_208 = (-3L);
                unsigned *l_258 = &g_171;
                unsigned **l_257 = &l_258;
                unsigned char l_276 = 0xEFL;
                short *l_330 = &g_99;
                unsigned char l_350 = 251UL;
            }
            if ((safe_rshift_func_int16_t_s_s((5L || (*l_347)), func_25(g_125))))
            {
                int l_369 = 0x1E34F487L;
                unsigned l_370 = 4294967292UL;
                unsigned short l_387 = 0UL;
                l_356 = &g_39;
                if ((**l_161))
                {
                    int l_357 = 0x54B698C0L;
                    (*l_161) = func_60(((void*)0 == p_21), (**l_161), l_357);
                    (*l_356) = (~func_25((safe_rshift_func_int16_t_s_s(l_357, (*p_21)))));
                    (*l_161) = &p_19;
                }
                else
                {
                    short *l_365 = (void*)0;
                    int l_368 = 0xF82B2137L;
                    (*l_161) = func_60((safe_rshift_func_int16_t_s_s((-1L), (l_369 = (((**l_161) , (safe_add_func_uint16_t_u_u(0UL, ((*l_256) = (l_364 , func_25(g_134)))))) < func_33(g_190, l_365, (((safe_add_func_uint16_t_u_u(((*l_353) < 7UL), l_368)) , g_134) , (void*)0), (*p_22)))))), (*p_21), l_370);
                    return p_19;
                }
                (*l_161) = (void*)0;
                for (g_236 = 0; (g_236 < 19); ++g_236)
                {
                    char **l_385 = &l_189;
                    const short *l_389 = (void*)0;
                    const short **l_388 = &l_389;
                    int l_404 = 1L;
                }
            }
            else
            {
                return g_125;
            }
            return g_134;
        }
    }
    else
    {
        unsigned char l_437 = 0xF4L;
        for (g_289 = 0; (g_289 == (-2)); g_289 = safe_sub_func_uint16_t_u_u(g_289, 2))
        {
            int *l_421 = &l_255;
            (*l_161) = l_421;
            (*l_161) = l_421;
        }
        for (g_125 = 0; (g_125 >= 11); g_125 = safe_add_func_int32_t_s_s(g_125, 1))
        {
            unsigned char *l_432 = &g_106;
            unsigned char **l_435 = &l_432;
            int *l_438 = &l_329;
            unsigned ***l_441 = &l_440;
            int l_443 = (-1L);
            (*l_161) = func_60((((safe_sub_func_int16_t_s_s((*p_21), (safe_mod_func_int16_t_s_s((((*l_441) = ((*g_313) = ((g_439 = ((&g_121 == (void*)0) , ((*l_438) = (((safe_mod_func_int8_t_s_s(5L, (safe_rshift_func_uint8_t_u_s(((*l_432) = 0x8DL), 7)))) , (((safe_mod_func_int8_t_s_s((((((*l_435) = &g_284) != (void*)0) , (l_436 = func_60((*g_315), ((*l_154) = (**l_161)), (*p_21)))) == (void*)0), 7UL)) && l_437) | l_437)) >= (**l_161))))) , l_440))) != l_442), p_20)))) < 0L) | g_403), (*p_21), (*p_21));
            return l_443;
        }
    }
    (*g_190) = (p_19 != ((**l_161) && (((safe_rshift_func_uint8_t_u_u((0xEC8DL >= ((((**l_161) , g_99) , ((safe_mod_func_uint8_t_u_u(func_85((safe_mod_func_int16_t_s_s((((func_25((safe_add_func_uint32_t_u_u((**l_161), (((*p_21) , g_184) <= g_138)))) , g_99) & 0L) >= (*g_315)), g_284)), l_189), 0xF7L)) >= p_20)) == 0x92L)), 7)) , 0L) & (*g_315))));
    (*g_190) = (**l_161);
    return p_19;
}







static char func_25(unsigned short p_26)
{
    unsigned short l_47 = 0UL;
    int l_48 = 0xF0E77DA1L;
    int *l_53 = &g_39;
    char *l_78 = (void*)0;
    char **l_79 = (void*)0;
    char *l_81 = &g_82;
    char **l_80 = &l_81;
    char * const l_133 = &g_134;
    int l_141 = 0xED7563F1L;
    int **l_145 = &g_38;
    char *l_148 = (void*)0;
    short * const l_149 = (void*)0;
    int *l_150 = &g_138;
    (*l_150) = ((*l_53) = ((safe_lshift_func_int16_t_s_s(((safe_mod_func_uint16_t_u_u(((((l_48 = l_47) ^ (safe_mul_func_uint8_t_u_u(l_47, (safe_lshift_func_uint8_t_u_u(func_33(l_53, func_54(g_41, ((*l_145) = func_60(g_39, (safe_mod_func_int32_t_s_s(((safe_sub_func_uint32_t_u_u((g_39 < ((l_141 = ((((0xEAA4L >= (func_68(func_73((safe_unary_minus_func_int8_t_s(((((g_77 == ((*l_80) = (l_78 = g_77))) >= 0x78404D08L) , g_39) || p_26))), l_53), g_39, p_26, l_133) > g_134)) < p_26) > p_26) <= p_26)) ^ (*l_53))), (-7L))) != g_134), g_39)), (*l_53))), g_41, g_41, &g_39), l_148, g_134), 2))))) , (void*)0) == l_149), g_41)) , (**l_145)), 0)) , p_26));
    return (*l_150);
}







static unsigned char func_33(int * p_34, short * p_35, char * p_36, int p_37)
{
    unsigned l_42 = 1UL;
    return l_42;
}







static short * func_54(unsigned short p_55, int * const p_56, int p_57, short p_58, int * p_59)
{
    (*p_59) = (safe_add_func_uint32_t_u_u(g_134, ((4294967287UL != g_106) == (8UL || g_121))));
    return &g_41;
}







static int * func_60(unsigned p_61, short p_62, short p_63)
{
    short **l_143 = (void*)0;
    short ***l_142 = &l_143;
    int *l_144 = &g_138;
    (*l_142) = &g_40;
    return l_144;
}







static unsigned func_68(char * const p_69, char p_70, char p_71, char * const p_72)
{
    unsigned l_135 = 0x868CE927L;
    int *l_136 = (void*)0;
    int *l_137 = &g_138;
    int **l_139 = &l_137;
    int **l_140 = &g_38;
    (*l_137) = (l_135 || l_135);
    (*l_140) = (l_136 = ((*l_139) = l_137));
    return p_71;
}







static char * const func_73(int p_74, int * p_75)
{
    int l_89 = 4L;
    short *l_90 = (void*)0;
    short **l_93 = &l_90;
    short *l_94 = &g_41;
    char **l_95 = &g_77;
    int l_96 = 0x8C4B1E4FL;
    unsigned char l_97 = 249UL;
    int *l_127 = &l_96;
    (*l_127) = ((l_89 = ((safe_sub_func_uint16_t_u_u((g_41 , 0UL), ((func_33((func_85(((safe_unary_minus_func_uint16_t_u(l_89)) == l_89), ((((((l_96 = (((((!(((g_40 = l_90) == (void*)0) <= p_74)) , ((safe_mul_func_uint8_t_u_u(g_41, (((*l_93) = &g_41) != l_94))) & g_41)) , &g_77) != l_95) ^ p_74)) , l_97) , l_97) <= p_74) < l_97) , (void*)0)) , &g_39), l_94, (*l_95), (*p_75)) > g_39) | 4294967295UL))) , p_74)) == 4UL);
    (*l_127) = ((safe_rshift_func_int16_t_s_s(((((safe_mul_func_uint16_t_u_u((!(*l_127)), 65526UL)) != 0x59L) == ((*l_127) , (*p_75))) , (*l_127)), 14)) && ((g_41 && (((safe_unary_minus_func_int32_t_s((*p_75))) , l_94) == &g_121)) <= (*l_127)));
    return (*l_95);
}







static const int func_85(int p_86, char * p_87)
{
    int **l_98 = &g_38;
    char *l_102 = (void*)0;
    char *l_103 = (void*)0;
    char *l_104 = &g_82;
    unsigned char *l_105 = &g_106;
    const int l_117 = 0xD792BF48L;
    (*l_98) = &g_39;
    if (((g_99 = (**l_98)) != (((safe_add_func_uint16_t_u_u((((*l_104) = g_41) == ((*l_105) = p_86)), (((1UL || (((**l_98) == g_39) , (**l_98))) != g_39) || (safe_add_func_int8_t_s_s(((**l_98) | 0xC5FDL), (**l_98)))))) , (**l_98)) > p_86)))
    {
        int *l_116 = &g_39;
        unsigned short *l_120 = &g_121;
        char *l_122 = (void*)0;
        char *l_123 = &g_124;
        g_125 = (((safe_add_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(g_41, (safe_unary_minus_func_uint8_t_u((((*l_104) = (safe_sub_func_uint32_t_u_u((&g_39 == ((*l_98) = l_116)), l_117))) != (((*l_123) = ((0x349DL && g_39) <= ((*l_120) = ((p_86 <= (l_117 & ((safe_mod_func_uint8_t_u_u(((*l_105) = p_86), (*l_116))) >= 3L))) == p_86)))) < (-10L))))))), 65535UL)) & p_86) > 0xB755L);
    }
    else
    {
        int *l_126 = &g_39;
        (*l_98) = l_126;
    }
    return p_86;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_11, "g_11", print_hash_value);
    transparent_crc(g_15, "g_15", print_hash_value);
    transparent_crc(g_39, "g_39", print_hash_value);
    transparent_crc(g_41, "g_41", print_hash_value);
    transparent_crc(g_82, "g_82", print_hash_value);
    transparent_crc(g_99, "g_99", print_hash_value);
    transparent_crc(g_106, "g_106", print_hash_value);
    transparent_crc(g_121, "g_121", print_hash_value);
    transparent_crc(g_124, "g_124", print_hash_value);
    transparent_crc(g_125, "g_125", print_hash_value);
    transparent_crc(g_134, "g_134", print_hash_value);
    transparent_crc(g_138, "g_138", print_hash_value);
    transparent_crc(g_171, "g_171", print_hash_value);
    transparent_crc(g_184, "g_184", print_hash_value);
    transparent_crc(g_236, "g_236", print_hash_value);
    transparent_crc(g_284, "g_284", print_hash_value);
    transparent_crc(g_289, "g_289", print_hash_value);
    transparent_crc(g_403, "g_403", print_hash_value);
    transparent_crc(g_439, "g_439", print_hash_value);
    transparent_crc(g_562, "g_562", print_hash_value);
    transparent_crc(g_602, "g_602", print_hash_value);
    transparent_crc(g_609, "g_609", print_hash_value);
    transparent_crc(g_624, "g_624", print_hash_value);
    transparent_crc(g_675, "g_675", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
