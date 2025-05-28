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



static volatile int g_17 = 0xFDBD0176L;
static unsigned short g_18 = 65527UL;
static int g_33 = 0x51C8B9BAL;
static volatile unsigned short g_79 = 0xC22BL;
static int g_84 = (-3L);
static unsigned short g_98 = 1UL;
static int *g_109 = &g_33;
static volatile int ***g_216 = (void*)0;
static int g_230 = 0x647E8494L;
static volatile int g_255 = 8L;
static volatile int *g_254 = &g_255;
static volatile int ** const g_253 = &g_254;
static int g_277 = 0x5A202CF8L;
static const int *g_349 = (void*)0;
static int g_380 = 0x63298DA7L;
static short g_469 = 3L;
static unsigned g_488 = 0x712C3EBBL;



static unsigned short func_1(void);
static int func_2(int p_3, const unsigned p_4, unsigned char p_5, unsigned char p_6, unsigned short p_7);
static int * func_19(unsigned char p_20, const int * p_21, char p_22);
static unsigned char func_29(short p_30);
static unsigned char func_37(int * p_38);
static int * func_39(unsigned p_40);
static int * func_45(int p_46, const int * p_47, int * p_48, unsigned p_49, int * p_50);
static char func_53(unsigned short p_54, int p_55, short p_56, unsigned short p_57);
static unsigned short func_58(unsigned char p_59, short p_60, short p_61);
static unsigned char func_68(unsigned short p_69, int * p_70, int p_71);
static unsigned short func_1(void)
{
    char l_8 = 0x71L;
    int l_720 = (-1L);
    l_720 = (!func_2(l_8, (safe_sub_func_int16_t_s_s(1L, l_8)), l_8, l_8, ((safe_sub_func_int8_t_s_s((+(l_8 & (safe_lshift_func_int8_t_s_s(0x57L, (((safe_mod_func_int32_t_s_s((0xEB59L || ((l_8 > g_17) | 1L)), g_18)) >= 0L) && l_8))))), l_8)) && l_8)));
    g_380 |= (safe_lshift_func_int8_t_s_s((l_720 && 0x680AFD69L), l_8));
    return g_17;
}







static int func_2(int p_3, const unsigned p_4, unsigned char p_5, unsigned char p_6, unsigned short p_7)
{
    unsigned short l_404 = 0x5F63L;
    int *l_405 = &g_277;
    int **l_717 = &l_405;
    int *l_718 = &g_277;
    int l_719 = 0xC1596294L;
    (*l_717) = func_19((((safe_lshift_func_int8_t_s_u(g_18, (safe_rshift_func_uint8_t_u_u(func_29((255UL && p_3)), (4294967287UL & l_404))))) || ((void*)0 == &p_3)) <= (l_405 != (void*)0)), l_405, g_18);
    (*l_718) &= 0xE04254FFL;
    (*l_718) ^= p_4;
    return l_719;
}







static int * func_19(unsigned char p_20, const int * p_21, char p_22)
{
    int *l_406 = (void*)0;
    int * const *l_485 = &l_406;
    int * const **l_484 = &l_485;
    unsigned char l_511 = 0x0AL;
    short l_543 = (-1L);
    unsigned l_713 = 4294967290UL;
    const unsigned char l_715 = 0x91L;
    int *l_716 = &g_84;
    if ((!0xC9A39457L))
    {
        int **l_407 = &l_406;
        (*l_407) = l_406;
    }
    else
    {
        int l_408 = 2L;
        unsigned l_458 = 0xB02ADAA4L;
        int **l_475 = &l_406;
        int ***l_474 = &l_475;
        int l_489 = 0xE052DF01L;
        int **l_504 = &l_406;
        int * const l_538 = &g_33;
        const char l_608 = 0x5BL;
        unsigned char l_612 = 0x01L;
        char l_635 = 0L;
        if (l_408)
        {
            int l_412 = 0xB7D21AC2L;
            int *l_445 = &g_33;
            unsigned l_497 = 4294967288UL;
            for (g_230 = 0; (g_230 < (-15)); g_230 = safe_sub_func_int16_t_s_s(g_230, 3))
            {
                unsigned l_423 = 0UL;
                int *l_424 = &g_84;
                const int **l_446 = (void*)0;
                const int **l_447 = &g_349;
                if (func_53(g_98, (safe_unary_minus_func_uint8_t_u((((g_255 || p_20) & l_412) | p_22))), l_408, ((((safe_div_func_uint8_t_u_u(((safe_add_func_uint8_t_u_u((((safe_mod_func_uint32_t_u_u(l_412, (((safe_lshift_func_uint8_t_u_u((safe_add_func_uint16_t_u_u((func_53(p_20, (*p_21), g_33, g_84) || g_230), p_22)), l_408)) >= l_408) && l_423))) == 65535UL) || l_423), g_98)) ^ l_412), 1UL)) & (*p_21)) <= p_22) != g_84)))
                {
                    const int **l_431 = &g_349;
                    if ((**g_253))
                    {
                        l_408 = (*p_21);
                        return l_424;
                    }
                    else
                    {
                        (*l_424) = (**g_253);
                        (*l_424) = (*l_424);
                        (*g_254) &= ((*l_424) && ((safe_lshift_func_int8_t_s_u(((0xB8L || 1UL) < (0xD6L && (safe_add_func_int8_t_s_s((-1L), (0xF866L != (+l_412)))))), 1)) ^ 9L));
                    }
                    (*l_424) ^= ((g_18 & ((void*)0 == p_21)) < (safe_rshift_func_uint16_t_u_s(((void*)0 == l_431), (safe_add_func_int8_t_s_s(((void*)0 == &g_253), p_20)))));
                }
                else
                {
                    int **l_436 = &l_424;
                    (*l_424) = ((&l_408 == &l_408) < ((safe_add_func_int8_t_s_s((l_424 == p_21), 0UL)) && g_380));
                    (*l_436) = l_424;
                }
                (*l_447) = p_21;
                (*g_254) = (*l_445);
                if (((safe_add_func_uint32_t_u_u(((((safe_lshift_func_int16_t_s_u(func_58((!g_255), p_20, g_84), 0)) >= p_22) < (safe_add_func_int16_t_s_s(g_98, (!(safe_rshift_func_int8_t_s_u((((safe_lshift_func_uint16_t_u_u((&l_424 == (void*)0), 11)) > l_408) <= (*p_21)), 1)))))) && 0xA1F8846DL), (*g_349))) | l_458))
                {
                    return l_406;
                }
                else
                {
                    int **l_464 = &l_445;
                    int ***l_463 = &l_464;
                    if ((((*p_21) == (1L & (safe_sub_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u(p_22, g_79)), (((p_22 != func_53(((void*)0 != l_463), (safe_add_func_uint32_t_u_u(0UL, (safe_add_func_uint32_t_u_u(p_20, g_98)))), g_230, g_84)) | 0x757385F6L) >= 0xB600L))))) & p_20))
                    {
                        if ((**g_253))
                            break;
                    }
                    else
                    {
                        (*l_445) = (**g_253);
                        return l_424;
                    }
                    (**g_253) = (*p_21);
                    if (g_469)
                        continue;
                }
            }
            if ((safe_div_func_int32_t_s_s(((safe_lshift_func_int16_t_s_u(p_22, 15)) < l_458), g_277)))
            {
                int ***l_476 = &l_475;
                int l_477 = 0x008372FFL;
                unsigned l_520 = 4294967295UL;
                int l_530 = 0x4C0C42F9L;
                (*l_445) &= (l_474 != l_476);
                if (func_58((+0xB0L), p_22, func_29(l_477)))
                {
                    int *l_494 = &g_84;
                    (*l_445) = (p_22 | (safe_lshift_func_int8_t_s_s(g_230, ((safe_mod_func_int32_t_s_s((*l_445), (((((safe_div_func_uint8_t_u_u((((void*)0 != l_484) && (((safe_rshift_func_int16_t_s_u(p_20, g_255)) != ((g_277 != (p_20 > g_18)) != 0x1980L)) >= g_469)), 255UL)) ^ (*p_21)) && p_20) <= p_22) & g_488))) ^ g_380))));
                    l_489 = 0xCF7B42C4L;
                    for (g_488 = 20; (g_488 >= 7); g_488--)
                    {
                        (*g_254) &= (*p_21);
                        l_497 ^= ((safe_add_func_uint8_t_u_u(func_37(l_494), g_488)) == (safe_add_func_uint8_t_u_u(g_469, g_277)));
                    }
                    if ((0xA7L < (safe_add_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u((((((p_20 == 0x56L) > (safe_add_func_uint32_t_u_u(g_84, (l_504 == (void*)0)))) | p_20) > (&g_349 != (void*)0)) == 0xFCEB195BL), (*l_445))), 0x0932L))))
                    {
                        (*l_475) = func_45((p_22 & p_20), &g_84, &g_230, g_255, &g_230);
                        (**l_485) = (-1L);
                        (*l_494) = (-8L);
                        g_349 = func_39(p_22);
                    }
                    else
                    {
                        (*l_494) = (*p_21);
                    }
                }
                else
                {
                    unsigned l_516 = 0x248C6599L;
                    for (p_20 = 0; (p_20 > 5); p_20++)
                    {
                        unsigned l_517 = 4294967295UL;
                        g_380 &= (safe_div_func_uint32_t_u_u(((((safe_lshift_func_uint8_t_u_s((g_277 == (l_511 == (safe_sub_func_uint32_t_u_u(0x552AB017L, (safe_mod_func_int16_t_s_s((l_516 < (func_37(&g_277) && g_18)), l_517)))))), 6)) >= 65527UL) | l_520) == l_517), (-1L)));
                    }
                    g_230 |= (1L == ((g_255 != (((void*)0 != (*l_484)) ^ (func_53(l_516, func_53(((*p_21) & ((safe_unary_minus_func_int32_t_s(func_53(g_33, (*p_21), (g_33 > g_277), (*l_445)))) <= (-2L))), (*p_21), g_18, g_488), p_22, g_277) || (*p_21)))) || 0xB69CL));
                    for (p_22 = 18; (p_22 <= 9); p_22 = safe_sub_func_uint8_t_u_u(p_22, 8))
                    {
                        (*l_445) = (safe_lshift_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s(p_20, l_516)), 3)), 15));
                        (**g_253) = (*p_21);
                    }
                }
                (**g_253) = (*p_21);
                l_530 &= (**g_253);
            }
            else
            {
                char l_541 = 0x47L;
                int *l_542 = (void*)0;
                int *l_548 = &g_84;
                for (g_469 = 0; (g_469 <= (-22)); g_469 = safe_sub_func_int32_t_s_s(g_469, 2))
                {
                    int * const *l_537 = &g_109;
                    if ((*p_21))
                        break;
                }
                if (func_53(g_17, (*p_21), g_84, l_543))
                {
                    const short l_544 = 0x91AEL;
                    (*l_445) = l_544;
                    (**l_474) = l_445;
                    (*l_484) = (void*)0;
                    if ((&p_21 != &p_21))
                    {
                        int *l_545 = &g_84;
                        const int **l_546 = (void*)0;
                        const int **l_547 = &g_349;
                        (*l_504) = l_545;
                        (*l_547) = p_21;
                    }
                    else
                    {
                        char l_557 = 0x34L;
                        (*l_475) = l_548;
                        g_380 ^= ((func_68((safe_div_func_int32_t_s_s((safe_rshift_func_uint8_t_u_u((0x8A7BA593L != 4294967295UL), 6)), (safe_rshift_func_uint16_t_u_u(l_557, 13)))), (**l_474), (*p_21)) > (p_22 < g_18)) | g_230);
                    }
                }
                else
                {
                    int *l_558 = &l_489;
                    (*l_504) = func_39(p_22);
lbl_561:
                    (*l_406) = (3UL ^ 0xBEL);
                    (*l_504) = func_39((*l_445));
                    if ((*g_254))
                    {
                        const int **l_559 = (void*)0;
                        const int **l_560 = &g_349;
                        l_558 = func_39(g_98);
                        (*l_548) = (-9L);
                        (*l_560) = p_21;
                    }
                    else
                    {
                        if (l_458)
                            goto lbl_561;
                    }
                }
                (*l_548) |= ((g_380 & (p_22 > (*l_445))) | ((!(8L ^ (safe_mod_func_uint8_t_u_u(g_230, 1L)))) >= p_20));
                (**l_474) = (void*)0;
            }
            (**g_253) = (*p_21);
            for (l_408 = 0; (l_408 > 28); l_408++)
            {
                const int l_570 = 0xC1698E56L;
                unsigned short l_592 = 0x45EAL;
                for (l_489 = 0; (l_489 != (-2)); --l_489)
                {
                    (*l_538) = l_570;
                    (*l_445) = (*g_254);
                    if ((*p_21))
                        break;
                }
                for (g_380 = (-17); (g_380 <= (-17)); ++g_380)
                {
                    int * const l_575 = &g_33;
                    int *l_579 = &l_489;
                    for (l_412 = 0; (l_412 > 0); l_412 = safe_add_func_int8_t_s_s(l_412, 1))
                    {
                        const int **l_576 = &g_349;
                        (*l_445) = 0x401BF220L;
                        g_109 = l_575;
                        (*l_576) = p_21;
                        (*l_576) = p_21;
                    }
                    (*l_445) = (safe_mod_func_int8_t_s_s((-1L), func_58(g_488, g_380, (*l_445))));
                    (*l_504) = func_39(((*g_254) && (safe_mod_func_int16_t_s_s(((safe_lshift_func_int16_t_s_u((p_20 >= (&l_445 != (void*)0)), 7)) | func_53(p_22, ((void*)0 == &p_21), (safe_add_func_int16_t_s_s((((safe_div_func_uint16_t_u_u((safe_mod_func_int32_t_s_s(1L, g_98)), g_488)) != p_20) != 0x18AAL), p_20)), l_592)), 0x8837L))));
                }
            }
        }
        else
        {
            unsigned char l_611 = 6UL;
            int l_634 = 0x52155AC5L;
            int **l_686 = &l_406;
            int l_689 = 0x38DAE119L;
            const int *l_694 = &l_489;
            if ((((g_469 != ((((g_230 & func_58(p_22, (safe_rshift_func_int16_t_s_u(func_53(((*g_253) == (void*)0), (safe_unary_minus_func_int32_t_s((safe_rshift_func_uint16_t_u_s((safe_lshift_func_uint8_t_u_u(5UL, ((void*)0 != &p_21))), 9)))), p_22, p_20), 0)), p_20)) & p_22) || (*p_21)) | g_230)) < g_18) | g_18))
            {
                unsigned l_613 = 4294967295UL;
                short l_616 = 0x3287L;
                int ***l_678 = &l_504;
                l_613 = (safe_mul_func_uint16_t_u_u((safe_add_func_uint32_t_u_u(g_277, (*p_21))), ((safe_lshift_func_int8_t_s_s((g_255 >= ((**l_484) == (void*)0)), (safe_lshift_func_int8_t_s_s((+l_608), (p_22 > (safe_lshift_func_int16_t_s_s((func_53((l_611 | l_612), l_611, p_20, g_33) && (-5L)), p_20))))))) >= g_84)));
                if ((safe_mod_func_uint16_t_u_u(l_616, (safe_lshift_func_int8_t_s_u(((p_21 != (**l_474)) < 9UL), 3)))))
                {
                    (**l_474) = func_39(p_22);
                    l_406 = (void*)0;
                    (*g_253) = (void*)0;
                    (*l_538) &= (*p_21);
                }
                else
                {
                    const int *l_619 = &l_408;
                    int *l_620 = &g_84;
                    (**l_474) = func_45((*p_21), &g_277, l_620, (safe_sub_func_int8_t_s_s((safe_sub_func_int16_t_s_s(((6L <= p_20) < 1L), (*l_538))), g_84)), &g_230);
                }
                for (l_611 = (-3); (l_611 >= 17); l_611++)
                {
                    unsigned l_664 = 4294967295UL;
                    if (l_613)
                    {
                        int l_627 = 0x34AECBBBL;
                        l_627 = l_616;
                        l_634 |= (safe_div_func_uint32_t_u_u(g_488, (p_20 && (safe_lshift_func_uint16_t_u_u((safe_div_func_uint16_t_u_u((1UL | 0x9536990EL), g_255)), func_53(p_20, (*p_21), g_230, g_380))))));
                        l_635 &= (l_616 ^ g_230);
                        if (l_634)
                            continue;
                    }
                    else
                    {
                        short l_646 = 1L;
                        (*l_538) |= ((((((safe_mod_func_int16_t_s_s((!(safe_sub_func_int32_t_s_s(((7L >= 0x0FBFL) & 247UL), (safe_add_func_uint8_t_u_u(255UL, ((safe_sub_func_int8_t_s_s(g_277, l_613)) | g_380)))))), (safe_mod_func_uint16_t_u_u(p_20, (0xE05CL | 4L))))) < 8UL) > p_22) != p_20) < g_488) < 0xF687A4CCL);
                        l_646 &= (-2L);
                    }
                    (*l_538) = (l_634 == (((+8L) && ((safe_lshift_func_uint16_t_u_s(((safe_sub_func_uint16_t_u_u((safe_unary_minus_func_int32_t_s((*p_21))), (p_21 == p_21))) < (((safe_sub_func_uint8_t_u_u((safe_div_func_int32_t_s_s((*p_21), (*p_21))), ((*p_21) > 0x69142EFFL))) && (-1L)) == (*p_21))), g_277)) & (-1L))) >= 247UL));
                    if ((safe_mod_func_int32_t_s_s(((*p_21) && (((l_613 ^ func_37(&g_33)) & l_611) >= g_380)), l_611)))
                    {
                        char l_669 = 0x7CL;
                        int l_670 = (-1L);
                        l_669 &= (safe_lshift_func_uint8_t_u_s(p_22, (((((((g_488 > 0x5B3BC9B2L) == g_469) ^ (safe_mod_func_int32_t_s_s((-8L), l_664))) & ((p_20 >= g_488) || (safe_lshift_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s(g_380, 7)), 5)))) ^ 0xF1L) == 0x1EB4C1AEL) != l_611)));
                        l_670 = (*p_21);
                        if ((*p_21))
                            continue;
                    }
                    else
                    {
                        const int *l_673 = (void*)0;
                        (*l_475) = func_45((*p_21), &g_84, &l_634, l_634, &g_380);
                        return &g_33;
                    }
                }
                p_21 = func_39(((*l_538) < (p_22 < (&l_504 != l_678))));
            }
            else
            {
                unsigned l_690 = 0xB398FE90L;
                unsigned short l_691 = 0x7474L;
                const int **l_692 = &g_349;
                g_230 ^= ((safe_lshift_func_int8_t_s_u((safe_unary_minus_func_uint8_t_u(((safe_mod_func_int8_t_s_s(p_20, ((&p_21 == l_686) ^ ((safe_rshift_func_uint8_t_u_s(0xF1L, (func_68(g_469, l_406, l_691) || 65535UL))) < l_691)))) | p_20))), g_469)) || g_84);
                if (l_612)
                    goto lbl_693;
lbl_693:
                (*l_692) = p_21;
                p_21 = (void*)0;
                l_694 = p_21;
            }
        }
        (*l_538) &= ((safe_add_func_uint16_t_u_u(0xBEF9L, (safe_rshift_func_int16_t_s_u((safe_rshift_func_uint16_t_u_s(((p_22 >= ((((void*)0 == (*l_474)) != (safe_sub_func_uint32_t_u_u((safe_mod_func_int8_t_s_s((safe_mod_func_uint32_t_u_u((safe_lshift_func_int16_t_s_s(((-1L) == (((void*)0 == p_21) >= (p_20 < g_469))), p_22)), p_22)), 6UL)), p_20))) > l_713)) != g_469), 14)), p_22)))) && 1L);
    }
    (*l_716) = ((safe_unary_minus_func_int8_t_s(func_37(&g_84))) > l_715);
    (*l_716) = (*l_716);
    (*l_716) = (*l_716);
    return &g_33;
}







static unsigned char func_29(short p_30)
{
    int *l_31 = (void*)0;
    int *l_32 = &g_33;
    char l_41 = 0L;
    const int *l_383 = (void*)0;
    const unsigned l_399 = 0x9DA63426L;
    int **l_402 = (void*)0;
    int ***l_401 = &l_402;
    int *l_403 = &g_380;
    (*l_32) = p_30;
    for (p_30 = 0; (p_30 == (-23)); p_30 = safe_sub_func_uint16_t_u_u(p_30, 2))
    {
        short l_373 = 0x7E8BL;
        int *l_379 = &g_380;
        (*l_379) ^= (((safe_unary_minus_func_uint8_t_u(func_37(func_39(l_41)))) < ((safe_sub_func_int8_t_s_s(l_373, l_373)) < ((safe_lshift_func_uint8_t_u_s(((safe_unary_minus_func_int32_t_s(0L)) != g_18), (safe_lshift_func_int16_t_s_s(((void*)0 != (*g_253)), l_373)))) != 1UL))) > p_30);
        for (l_41 = (-21); (l_41 == (-11)); l_41 = safe_add_func_int16_t_s_s(l_41, 5))
        {
            const int **l_384 = &l_383;
            (*l_384) = l_383;
        }
        (*g_254) = (safe_lshift_func_uint8_t_u_u(g_230, ((-1L) >= ((**g_253) & ((g_33 >= (g_33 < (safe_mod_func_int32_t_s_s(((void*)0 != l_383), (safe_rshift_func_int16_t_s_u((&l_379 != (void*)0), 3)))))) && g_84)))));
    }
    (*l_403) ^= (func_37(func_39((safe_lshift_func_uint16_t_u_u(p_30, ((safe_add_func_int32_t_s_s((safe_rshift_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u(246UL, (l_399 || ((safe_unary_minus_func_uint32_t_u(0x31A4B75BL)) & 246UL)))), (l_401 == (void*)0))), (g_84 > p_30))) || g_255))))) || p_30);
    return g_380;
}







static unsigned char func_37(int * p_38)
{
    short l_211 = 0L;
    int *l_225 = &g_33;
    unsigned l_249 = 0x164FAC58L;
    unsigned char l_332 = 0x02L;
    int **l_353 = &g_109;
    int ***l_352 = &l_353;
    int *l_370 = &g_230;
    for (g_33 = 22; (g_33 < 5); g_33 = safe_sub_func_int32_t_s_s(g_33, 1))
    {
        unsigned l_213 = 1UL;
        int *l_250 = &g_84;
        unsigned l_309 = 0x2A58B849L;
        if ((*p_38))
        {
            int *l_212 = &g_84;
            char l_224 = 0x01L;
            int *l_226 = &g_84;
            (*l_212) |= l_211;
            if ((((l_213 && (*p_38)) | (safe_rshift_func_int16_t_s_s(g_84, ((g_216 != (void*)0) && l_211)))) | ((((g_98 == 0UL) || (*l_212)) != l_211) && l_213)))
            {
                return g_17;
            }
            else
            {
                int ** const l_223 = &l_212;
                if (l_213)
                {
                    if (((g_33 >= (((-1L) && (safe_add_func_int8_t_s_s(((0xF1L && (-7L)) & (l_211 ^ (safe_div_func_int8_t_s_s(((safe_sub_func_uint16_t_u_u(((void*)0 != &p_38), ((void*)0 == l_223))) > l_224), g_84)))), g_98))) | 0x3A487DCEL)) >= 8L))
                    {
                        (**l_223) = (*p_38);
                        g_84 ^= (0x36E75569L >= (((void*)0 == l_225) & 0xA7L));
                    }
                    else
                    {
                        if ((*p_38))
                            break;
                    }
                    p_38 = l_226;
                }
                else
                {
                    if ((**l_223))
                    {
                        int **l_228 = &g_109;
                        int ***l_227 = &l_228;
                        (*l_227) = l_223;
                    }
                    else
                    {
                        int *l_229 = &g_230;
                        (*l_229) |= (*l_212);
                    }
                    for (g_230 = 0; (g_230 != (-3)); --g_230)
                    {
                        char l_233 = 0x27L;
                        if ((*p_38))
                            break;
                        if (l_233)
                            break;
                    }
                }
            }
        }
        else
        {
            int *l_236 = &g_84;
            (*l_236) = (0xBEL && (safe_add_func_uint16_t_u_u(9UL, 0xD7B9L)));
        }
        (*l_250) = (((safe_div_func_uint32_t_u_u(((*l_225) > (((*l_225) < 0xD818L) >= (*l_225))), (*l_225))) != ((*l_225) != (((safe_add_func_uint16_t_u_u(l_213, (l_213 <= (safe_rshift_func_uint16_t_u_s(((safe_rshift_func_int16_t_s_u((safe_div_func_uint16_t_u_u(((0xACL || g_33) == 0x4FL), g_230)), 7)) != l_249), (*l_225)))))) >= 0xABBAL) >= 0x0C91F963L))) <= (*p_38));
    }
    (*l_353) = p_38;
    (*l_370) &= (((*l_225) | ((safe_mod_func_uint8_t_u_u(((safe_sub_func_int8_t_s_s((safe_rshift_func_int16_t_s_u((-4L), 11)), (**l_353))) >= (***l_352)), g_277)) >= (safe_lshift_func_int8_t_s_s((safe_div_func_int8_t_s_s(((**l_353) ^ 0UL), (safe_mod_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u(g_79, 0)), (**l_353))))), 3)))) <= 0xA417L);
    (*l_225) = func_68((*l_370), p_38, (*p_38));
    return (*l_370);
}







static int * func_39(unsigned p_40)
{
    int *l_44 = (void*)0;
    int l_72 = (-1L);
    int **l_208 = &l_44;
    for (p_40 = 20; (p_40 == 7); p_40 = safe_sub_func_uint32_t_u_u(p_40, 9))
    {
        return &g_33;
    }
    g_33 |= (p_40 > (p_40 <= (!0L)));
    (*l_208) = func_45((g_17 || (safe_div_func_int8_t_s_s(func_53((~1UL), p_40, g_18, (func_58((((safe_mod_func_int16_t_s_s(7L, (safe_mod_func_uint8_t_u_u((g_18 >= (func_68(g_17, l_44, (l_72 | (-7L))) == g_18)), p_40)))) >= 0UL) | g_98), g_98, l_72) >= 0x8EC6L)), p_40))), &l_72, &l_72, g_98, &l_72);
    return &g_84;
}







static int * func_45(int p_46, const int * p_47, int * p_48, unsigned p_49, int * p_50)
{
    unsigned l_148 = 0xF2FF10FDL;
    int ***l_150 = (void*)0;
    for (g_33 = (-27); (g_33 < 14); g_33++)
    {
        int **l_134 = &g_109;
        short l_184 = 3L;
        int *l_205 = &g_33;
        (*l_134) = (void*)0;
        for (g_98 = 9; (g_98 < 6); g_98 = safe_sub_func_uint16_t_u_u(g_98, 7))
        {
            char l_137 = 0xFAL;
            const int ***l_151 = (void*)0;
            int * const *l_171 = &g_109;
            int *l_185 = &g_84;
            (*p_48) |= (-1L);
            if (l_137)
            {
                int l_155 = 0xD71A0F86L;
                unsigned short l_168 = 0UL;
                if ((+(~(((safe_sub_func_uint32_t_u_u(g_84, (*p_48))) < 4294967295UL) ^ (((l_137 != (&g_109 == &g_109)) && (0x7FECL < l_137)) ^ (0xE3L || g_17))))))
                {
                    int *l_149 = &g_84;
                    for (p_49 = (-13); (p_49 > 13); p_49++)
                    {
                        char l_152 = 0x37L;
                        (*l_149) = ((g_84 || (((safe_mod_func_int8_t_s_s((safe_div_func_int16_t_s_s((!(safe_div_func_int16_t_s_s(g_17, l_148))), ((((void*)0 != l_149) > (&l_134 != l_150)) ^ (((void*)0 == l_151) | l_152)))), p_46)) <= 3UL) || g_17)) > 6UL);
                        (*p_48) = (*p_50);
                        return &g_33;
                    }
                    (*l_134) = &p_46;
                }
                else
                {
                    if (g_17)
                        break;
                    for (p_46 = (-28); (p_46 == (-20)); ++p_46)
                    {
                        (*p_48) &= g_79;
                    }
                    (*p_50) = g_84;
                }
                if ((0x25D3E5ECL || l_155))
                {
                    l_155 = (!((p_46 >= g_18) ^ (((g_84 || ((safe_add_func_uint8_t_u_u(((((g_79 != (3UL == ((safe_add_func_int32_t_s_s(((((safe_div_func_int16_t_s_s(((*p_50) & ((safe_add_func_int32_t_s_s((safe_div_func_int8_t_s_s((safe_lshift_func_int16_t_s_u(g_33, p_49)), g_98)), g_33)) & p_49)), l_155)) || p_49) | (-1L)) ^ 5L), l_155)) ^ 0xA5L))) ^ g_18) <= 0x2EC4E0F5L) || (*p_48)), g_84)) || (*p_50))) | g_33) < g_33)));
                    l_168 |= (*p_47);
                    (*p_50) = ((void*)0 != &g_84);
                }
                else
                {
                    char l_183 = 0L;
                    int *l_186 = &g_84;
                    if ((((&p_48 == l_171) != p_49) > ((!(safe_mod_func_uint8_t_u_u(((safe_sub_func_int16_t_s_s(((p_49 || (g_33 | (*p_47))) > p_49), (safe_lshift_func_uint8_t_u_s((safe_unary_minus_func_int16_t_s(l_168)), ((safe_sub_func_int32_t_s_s((((~(safe_rshift_func_int8_t_s_s(4L, 2))) > 0x9CL) >= l_183), l_184)) < 4294967290UL))))) | (*p_48)), (-1L)))) <= 0xC7L)))
                    {
                        (*l_134) = &g_84;
                        l_185 = &p_46;
                        (*g_109) &= (*p_50);
                    }
                    else
                    {
                        (*l_134) = l_186;
                        (*p_48) = (*g_109);
                    }
                    (**l_134) = (safe_lshift_func_int16_t_s_u(0xDEF9L, ((void*)0 == &l_134)));
                    if (((*g_109) < (*l_185)))
                    {
                        (**l_134) = 1L;
                    }
                    else
                    {
                        (*l_185) = (*p_48);
                    }
                    l_155 &= 0xEA376DD0L;
                }
            }
            else
            {
                for (l_148 = 0; (l_148 > 39); l_148 = safe_add_func_int32_t_s_s(l_148, 9))
                {
                    (*p_48) &= 0xC662F218L;
                    return &g_33;
                }
                (*p_48) ^= 0x813BED6CL;
                (*p_50) ^= (safe_sub_func_uint32_t_u_u(((((safe_sub_func_uint16_t_u_u((safe_div_func_uint32_t_u_u(p_49, 0x6FFF882CL)), (g_33 ^ g_33))) == ((safe_rshift_func_uint8_t_u_s(p_46, (safe_sub_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s((g_84 > (safe_lshift_func_uint16_t_u_u((l_205 == (void*)0), (safe_div_func_int32_t_s_s((g_17 > p_49), g_18))))), p_49)), g_18)))) == g_84)) || 0x6E852C7DL) || 0xA8C6L), g_98));
            }
            (*p_48) |= 1L;
        }
    }
    return &g_33;
}







static char func_53(unsigned short p_54, int p_55, short p_56, unsigned short p_57)
{
    short l_130 = 0x8E2AL;
    int *l_131 = &g_33;
    (*l_131) = (((safe_rshift_func_int8_t_s_u((0x7715L & (((safe_add_func_int16_t_s_s(p_56, (l_130 != p_56))) <= p_56) && p_56)), 1)) ^ ((((void*)0 != &p_55) > g_33) < 0x4E36L)) == (-6L));
    return g_18;
}







static unsigned short func_58(unsigned char p_59, short p_60, short p_61)
{
    int *l_103 = &g_84;
    int *l_106 = (void*)0;
    int l_107 = (-1L);
    int ***l_117 = (void*)0;
    l_107 |= (safe_sub_func_uint32_t_u_u((+(g_18 < (p_59 <= ((void*)0 != l_103)))), func_68((+(((func_68((((safe_mod_func_uint16_t_u_u((*l_103), (-10L))) & (0x2727C38DL ^ (((*l_103) != (*l_103)) <= p_60))) & (*l_103)), &g_33, p_59) | 0x6C032BE6L) < 0x1B20L) <= g_98)), l_103, p_61)));
    if (g_18)
    {
        int *l_108 = &l_107;
        int l_110 = (-8L);
        g_109 = l_108;
        (*l_108) = l_110;
    }
    else
    {
        return g_79;
    }
    if ((p_59 == (safe_mod_func_int16_t_s_s((&g_84 == (void*)0), (safe_div_func_uint32_t_u_u(0xE7287D28L, p_61))))))
    {
        (*g_109) = ((safe_lshift_func_uint16_t_u_s(func_68((l_117 == (void*)0), &g_33, (*g_109)), 11)) == ((!g_98) == p_60));
        for (l_107 = 0; (l_107 > 20); ++l_107)
        {
            const int *l_120 = &g_84;
            const int **l_121 = (void*)0;
            const int **l_122 = &l_120;
            (*l_122) = l_120;
            for (g_84 = (-19); (g_84 == 23); g_84++)
            {
                return g_18;
            }
        }
    }
    else
    {
        int *l_125 = &g_33;
        (*g_109) ^= 0xB263C45FL;
        l_125 = l_125;
    }
    l_103 = &l_107;
    return p_59;
}







static unsigned char func_68(unsigned short p_69, int * p_70, int p_71)
{
    int l_96 = 0L;
    for (g_33 = (-22); (g_33 == (-28)); g_33--)
    {
        int *l_82 = (void*)0;
        int *l_83 = &g_84;
        short l_91 = 0x849EL;
        char l_97 = (-1L);
        (*l_83) = (safe_sub_func_uint16_t_u_u(((safe_div_func_int32_t_s_s((p_69 && g_79), 0xD90C37C5L)) | ((void*)0 == &g_33)), (safe_add_func_int32_t_s_s((-3L), p_71))));
        if ((safe_lshift_func_uint8_t_u_u(g_33, 2)))
        {
            int **l_87 = &l_82;
            int ***l_88 = &l_87;
            (*l_88) = l_87;
            g_84 ^= (safe_div_func_int16_t_s_s((g_18 && (l_91 >= (g_18 < (safe_mod_func_int16_t_s_s(((safe_mod_func_uint16_t_u_u(p_71, (~g_17))) != ((p_71 >= g_18) <= (l_96 >= l_97))), l_96))))), p_69));
        }
        else
        {
            if (l_96)
                break;
            (*l_83) = 1L;
        }
    }
    return p_69;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_17, "g_17", print_hash_value);
    transparent_crc(g_18, "g_18", print_hash_value);
    transparent_crc(g_33, "g_33", print_hash_value);
    transparent_crc(g_79, "g_79", print_hash_value);
    transparent_crc(g_84, "g_84", print_hash_value);
    transparent_crc(g_98, "g_98", print_hash_value);
    transparent_crc(g_230, "g_230", print_hash_value);
    transparent_crc(g_255, "g_255", print_hash_value);
    transparent_crc(g_277, "g_277", print_hash_value);
    transparent_crc(g_380, "g_380", print_hash_value);
    transparent_crc(g_469, "g_469", print_hash_value);
    transparent_crc(g_488, "g_488", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
