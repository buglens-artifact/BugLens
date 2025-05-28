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



static int g_25 = 0L;
static unsigned char g_51 = 0xA2L;
static unsigned char g_68 = 0x33L;
static int g_72 = 0xC72FDDD0L;
static int g_84 = 0xED967AACL;
static int *g_93 = &g_84;
static int g_98 = 5L;
static char g_104 = 0x5EL;
static unsigned g_114 = 1UL;
static unsigned g_138 = 4294967295UL;
static unsigned g_140 = 0x12BCECFDL;
static char g_149 = 0x3AL;
static unsigned short g_151 = 65533UL;
static char *g_193 = &g_149;
static char **g_192 = &g_193;
static short g_243 = 0x8394L;
static unsigned char g_271 = 0xB3L;
static short *g_299 = &g_243;
static int *g_316 = &g_72;
static unsigned short **g_323 = (void*)0;
static int g_357 = 0xE0EC4D18L;
static short g_376 = 0x5239L;
static unsigned short g_470 = 0UL;
static unsigned g_497 = 0xEDADBC05L;
static int g_525 = 0x3AA31BCAL;
static short g_542 = 0x045BL;
static int ***g_558 = (void*)0;
static unsigned char g_698 = 1UL;
static char ****g_712 = (void*)0;
static unsigned short g_766 = 7UL;



static int func_1(void);
static unsigned char func_4(unsigned p_5, unsigned char p_6);
static unsigned func_7(int p_8, short p_9, char p_10);
static int func_11(unsigned short p_12, char p_13);
static int func_14(char p_15);
static char func_16(int p_17, unsigned p_18, unsigned char p_19, unsigned p_20, int p_21);
static int func_26(int p_27, unsigned p_28);
static unsigned short func_31(short p_32, char p_33);
static short func_38(char p_39, unsigned p_40, int p_41, unsigned p_42, unsigned short p_43);
static char func_54(unsigned char p_55, unsigned short p_56);
static int func_1(void)
{
    short l_22 = (-1L);
    unsigned char *l_50 = &g_51;
    char l_178 = 4L;
    unsigned short *l_501 = &g_151;
    unsigned short **l_500 = &l_501;
    int l_516 = 8L;
    int l_519 = 0x4ED8D266L;
    unsigned short l_523 = 0x41A6L;
    short l_562 = 1L;
    unsigned char l_564 = 1UL;
    unsigned short l_597 = 0xB01DL;
    int **l_625 = &g_93;
    int ***l_624 = &l_625;
    unsigned l_683 = 0x06261C0FL;
    int l_709 = 0xA139A138L;
    unsigned l_715 = 3UL;
    unsigned char l_762 = 0x67L;
    int *l_763 = &g_72;
    short **l_767 = &g_299;
    short **l_769 = &g_299;
    short ***l_768 = &l_769;
    unsigned *l_770 = &g_140;
    int ****l_771 = &l_624;
    short l_772 = 0x2A76L;
    int *l_773 = &g_25;
    if ((safe_add_func_uint8_t_u_u(((*l_50) = func_4(func_7(func_11(((!(func_14(((((0x80L ^ func_16(l_22, (safe_rshift_func_int8_t_s_s(((g_25 & (func_26(g_25, (safe_rshift_func_int8_t_s_s((func_31(l_22, ((l_178 = (safe_sub_func_int8_t_s_s((safe_sub_func_int8_t_s_s((l_22 > func_38((safe_lshift_func_uint16_t_u_s((safe_rshift_func_int16_t_s_s((safe_div_func_uint8_t_u_u(((*l_50) = 1UL), (safe_lshift_func_uint8_t_u_u((l_50 == (void*)0), 5)))), l_22)), 3)), g_25, l_22, g_25, g_25)), g_25)), 0L))) == l_22)) & l_22), 3))) ^ 0x1F00AFDCL)) == (*g_299)), 4)), g_271, g_25, g_25)) ^ 0UL) | l_22) < l_22)) <= 0x5E468437L)) > 4294967287UL), l_22), l_22, l_22), g_470)), 0x4FL)))
    {
        int *l_502 = (void*)0;
        int *l_503 = &g_84;
        (*l_503) &= ((*g_299) || (g_323 == l_500));
    }
    else
    {
        unsigned char l_506 = 1UL;
        int l_509 = 0x100AE58AL;
        short *l_522 = &g_376;
        int *l_524 = &g_525;
        int l_557 = 0xE073B225L;
        int **l_560 = &g_93;
        int ***l_559 = &l_560;
        char l_608 = (-1L);
        l_509 = ((safe_lshift_func_uint16_t_u_u(l_506, 13)) == (65534UL != (safe_rshift_func_uint8_t_u_u(((255UL < 0L) && ((**g_192) |= (l_506 ^ l_22))), 1))));
        (*l_524) ^= ((l_509 = (safe_sub_func_uint16_t_u_u(l_178, (func_38((safe_div_func_int8_t_s_s(((**g_192) = (safe_lshift_func_int8_t_s_u((l_178 < g_357), (l_516 &= g_98)))), func_31(((*g_299) ^= (-8L)), (safe_sub_func_uint8_t_u_u(((func_31(l_178, l_519) < (safe_sub_func_uint8_t_u_u((((*l_522) = ((l_509 >= 0x3E16L) | g_114)) <= l_22), l_519))) ^ l_506), l_519))))), g_72, g_140, l_509, l_509) >= g_271)))) <= l_523);
        for (g_151 = 0; (g_151 == 46); ++g_151)
        {
            char l_533 = (-10L);
            unsigned l_543 = 4UL;
            short *l_577 = (void*)0;
            (*g_93) = (*l_524);
            if (l_22)
            {
                int **l_528 = &g_316;
                unsigned short *l_534 = &g_470;
                unsigned short *l_541 = &l_523;
                (*l_528) = &g_98;
                (*l_524) = ((+(*g_299)) || func_31((safe_rshift_func_int16_t_s_u((*g_299), 12)), (safe_lshift_func_uint8_t_u_u(((*l_50) = ((((*l_534) = l_533) != l_533) >= ((l_543 &= ((g_542 = ((*l_541) ^= (((((*l_522) = func_4(g_25, ((safe_lshift_func_int8_t_s_s((safe_rshift_func_int8_t_s_u((safe_add_func_uint32_t_u_u((((*g_93) = (*g_316)) <= l_516), l_516)), 0)), (*l_524))) ^ (*g_299)))) >= 9UL) >= g_149) >= 0xD8L))) <= (-10L))) < 0x6844L))), g_243))));
            }
            else
            {
                unsigned short l_548 = 0UL;
                int **l_549 = (void*)0;
                int **l_550 = &g_93;
                unsigned short l_563 = 0xA3BDL;
                for (g_84 = 0; (g_84 < (-5)); g_84 = safe_sub_func_uint8_t_u_u(g_84, 2))
                {
                    int **l_546 = (void*)0;
                    int **l_547 = &l_524;
                    (*l_524) = 0x5F4DE50BL;
                    (*l_547) = &g_357;
                    (**l_547) |= l_548;
                }
                (*l_550) = &l_509;
                for (g_25 = 0; (g_25 != 29); ++g_25)
                {
                    unsigned short l_572 = 0xA088L;
                    char ***l_582 = &g_192;
                    char **l_584 = &g_193;
                    char ***l_583 = &l_584;
                    int l_585 = 1L;
                    int l_586 = 0x704FFF94L;
                    unsigned short *l_598 = &l_563;
                    unsigned *l_599 = &g_140;
                    (*g_93) = ((*l_524) = (-1L));
                    if ((((l_533 ^ func_4(l_533, l_533)) != ((func_31((*g_299), func_31((safe_div_func_int16_t_s_s(l_519, (l_516 = ((safe_div_func_uint16_t_u_u((+65533UL), 0x5E64L)) | l_178)))), (*g_193))) != 0L) >= 250UL)) <= l_557))
                    {
                        int ****l_561 = &l_559;
                        (**l_550) = (g_558 == ((*l_561) = l_559));
                        l_562 ^= (****l_561);
                    }
                    else
                    {
                        int ****l_569 = &l_559;
                        (*g_93) = (l_563 || (+(l_564 >= (safe_add_func_uint16_t_u_u(65533UL, ((*g_299) == (safe_sub_func_uint32_t_u_u(0UL, (g_558 != ((*l_569) = &l_550))))))))));
                        (*l_524) ^= l_543;
                        (**l_559) = (***l_569);
                        return g_114;
                    }
                    l_586 &= ((safe_rshift_func_uint8_t_u_s(l_572, func_4(g_25, (((safe_lshift_func_uint16_t_u_u(65532UL, ((safe_div_func_uint32_t_u_u(((void*)0 != l_577), (**l_550))) & (safe_rshift_func_uint8_t_u_s(((l_585 = (safe_lshift_func_uint8_t_u_u((~(((*l_582) = &g_193) == ((*l_583) = &g_193))), 1))) == 4L), 4))))) ^ (**l_560)) <= 0x6199F040L)))) >= l_543);
                    (*l_524) &= ((safe_mod_func_uint32_t_u_u(l_543, 0xEE0FA0BEL)) || (safe_mod_func_int32_t_s_s(0x09172F3FL, (safe_add_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s((((*l_599) &= func_31(func_54(g_542, ((*l_598) &= (safe_add_func_uint8_t_u_u(l_597, ((*g_193) = l_562))))), (func_31(l_533, l_586) | l_523))) & 8UL), 7)), (-1L))))));
                }
                if ((*g_93))
                    continue;
            }
        }
        (*l_524) = (safe_mod_func_int32_t_s_s(((255UL & (l_178 < (*l_524))) < ((safe_add_func_uint16_t_u_u(((safe_rshift_func_uint16_t_u_u(9UL, ((*l_501) = (**l_560)))) || func_26((*l_524), (safe_mod_func_int32_t_s_s((g_114 < func_4(((((func_54((g_271 |= g_149), (l_608 == 65534UL)) > (***l_559)) >= (*g_299)) <= 0xACL) <= (***l_559)), g_84)), g_84)))), (*l_524))) != 0xA6L)), 0xE503A289L));
    }
    if (l_523)
    {
        unsigned short l_627 = 65535UL;
        unsigned short *l_628 = &g_470;
        int l_631 = 0xCBF79E31L;
        int *l_638 = &g_84;
        short l_667 = 0x3010L;
        short l_703 = 0x9B1BL;
        char ***l_726 = (void*)0;
        char ****l_725 = &l_726;
        for (l_564 = 0; (l_564 <= 3); l_564++)
        {
            int *l_611 = &g_98;
            int **l_612 = (void*)0;
            int **l_613 = (void*)0;
            int **l_614 = (void*)0;
            int **l_615 = &l_611;
            unsigned *l_620 = &g_114;
            int ****l_623 = &g_558;
            int ****l_626 = &l_624;
            (*l_615) = l_611;
            l_627 |= ((~((*l_620) ^= (safe_rshift_func_uint8_t_u_s((g_68 |= 255UL), 7)))) >= (0xD926L == ((&g_558 == l_623) != func_4((g_558 != ((*l_626) = l_624)), g_51))));
        }
        if ((((l_628 = l_628) == &l_627) & 0L))
        {
            short l_632 = 0xB38BL;
            int *l_635 = &g_357;
            (*l_635) = (g_497 | g_140);
        }
        else
        {
            unsigned char l_642 = 2UL;
            int l_660 = 0x324222B3L;
            unsigned short *l_663 = &l_627;
            char ****l_711 = (void*)0;
            char *****l_710 = &l_711;
            int *l_713 = &l_631;
            int **l_714 = &g_316;
            if ((safe_add_func_uint32_t_u_u(g_138, g_376)))
            {
                int *l_641 = (void*)0;
                unsigned char **l_655 = &l_50;
                unsigned char ***l_654 = &l_655;
                int l_664 = (-10L);
                int l_674 = (-9L);
                (**l_624) = l_638;
                for (g_470 = 0; (g_470 > 50); g_470 = safe_add_func_int8_t_s_s(g_470, 7))
                {
                    int *l_643 = &g_84;
                    l_638 = l_641;
                    (**l_625) = (+((**l_625) < l_642));
                    (*l_625) = l_643;
                }
                if ((*g_93))
                {
                    unsigned *l_646 = &g_138;
                    unsigned *l_647 = &g_114;
                    int l_656 = (-8L);
                    int *l_657 = &g_98;
                    int l_677 = 0x2DD07B12L;
                    if ((l_631 ^= ((g_525 ^= ((*l_657) = func_26((*g_93), (((***l_654) = (func_54(((((safe_sub_func_int8_t_s_s(func_4(((*l_647) = ((*l_646) = (&l_628 == (void*)0))), ((!(*g_299)) > (((safe_rshift_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u(65528UL, 0xB7A7L)), 7)) <= 0xC939L) == (safe_lshift_func_int8_t_s_u(((void*)0 == l_654), (***l_624)))))), g_151)) | 6UL) != l_656) != (*g_93)), g_25) || (**g_192))) | (*g_193))))) | g_542)))
                    {
                        unsigned char l_665 = 0x35L;
                        unsigned l_666 = 4294967295UL;
                        int *l_668 = (void*)0;
                        int *l_669 = &g_525;
                        (*l_669) &= (((safe_div_func_int32_t_s_s((*l_657), 1L)) && (**l_625)) && l_667);
                        (*l_669) = 0x029BF50BL;
                        l_674 = (!(l_660 &= (safe_rshift_func_int8_t_s_u((((**l_625) >= (safe_add_func_uint16_t_u_u(((*l_501) |= 65535UL), (((*l_669) = l_642) & (***l_624))))) && g_497), 3))));
                        (*l_657) = (safe_sub_func_int16_t_s_s((*l_669), ((*l_628) = l_677)));
                    }
                    else
                    {
                        return g_149;
                    }
                    (*l_624) = &l_657;
                    (*g_93) |= (safe_lshift_func_uint16_t_u_u(((*l_657) && (safe_div_func_int8_t_s_s(((*l_657) = (safe_unary_minus_func_uint8_t_u((l_683 != ((void*)0 == (*g_192)))))), g_376))), 5));
                    (*g_93) |= l_642;
                }
                else
                {
                    int l_690 = 0x4130E585L;
                    for (l_674 = 0; (l_674 == 10); l_674 = safe_add_func_uint32_t_u_u(l_674, 9))
                    {
                        short l_691 = (-1L);
                        int *l_692 = &l_519;
                        unsigned *l_693 = &g_138;
                        char ***l_696 = (void*)0;
                        char ***l_697 = &g_192;
                        (*l_692) &= (safe_add_func_int8_t_s_s((*g_193), (g_542 == (!(safe_lshift_func_uint8_t_u_s(((**g_192) ^ ((-10L) | (((g_357 <= func_31((~(g_497 < g_151)), (l_690 <= func_54(g_25, l_691)))) && g_25) && (**g_192)))), 7))))));
                        (*l_692) |= (0x4FL || (~((((g_140 = ((*l_693) = 0x872DB59CL)) > 0x087F504CL) < (safe_lshift_func_uint16_t_u_s((((*l_697) = &g_193) != (void*)0), (g_698 != (safe_lshift_func_uint16_t_u_u(((safe_div_func_uint16_t_u_u(func_54(((***l_654) &= g_84), g_470), 0x6B54L)) | (**l_625)), g_497)))))) || (*g_93))));
                    }
                }
                (*g_93) = l_703;
            }
            else
            {
                short l_708 = 0xB23CL;
                (*l_638) |= l_708;
                (*l_638) |= l_660;
                (*l_638) ^= l_709;
                (**l_624) = &l_660;
            }
            (*l_713) &= func_26(((*g_93) = (-1L)), (((*l_710) = (void*)0) == g_712));
            (*l_714) = &g_357;
        }
        if (l_715)
        {
            int *l_716 = &g_98;
            char *****l_727 = &g_712;
            unsigned *l_728 = &g_138;
            int *l_737 = &g_357;
            int **l_738 = &g_93;
            (*l_716) ^= l_703;
            (*l_737) |= (func_4((*l_716), func_4((g_98 || (safe_mod_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u((safe_add_func_uint16_t_u_u(func_4(l_667, (((*l_728) |= (safe_lshift_func_int8_t_s_s((((*l_727) = l_725) != &l_726), (*l_716)))) <= ((safe_lshift_func_uint8_t_u_u((safe_sub_func_int32_t_s_s(((((g_271 = g_114) || (*g_193)) | (safe_add_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s(((*l_716) == g_140), 5)), 0xEBL))) > (*g_299)), g_243)), g_84)) & g_72))), (*g_299))), (*l_716))), (*g_299)))), g_84)) != g_151);
            (*l_738) = l_737;
            for (g_357 = 0; (g_357 >= (-10)); --g_357)
            {
                (*l_738) = (void*)0;
            }
        }
        else
        {
            int *l_743 = &l_709;
            for (l_178 = (-6); (l_178 >= 4); l_178 = safe_add_func_uint8_t_u_u(l_178, 6))
            {
                l_743 = (g_93 = &l_631);
                for (l_562 = (-25); (l_562 < 29); ++l_562)
                {
                    int **l_746 = &l_743;
                    (*l_746) = l_743;
                    (*l_743) |= (safe_mod_func_uint16_t_u_u(((*g_193) | (**g_192)), (safe_unary_minus_func_int32_t_s(0x83D21832L))));
                }
            }
            l_638 = &g_72;
            return g_525;
        }
        for (g_151 = 0; (g_151 < 26); g_151 = safe_add_func_int16_t_s_s(g_151, 7))
        {
            for (g_497 = 0; (g_497 == 51); ++g_497)
            {
                unsigned char l_754 = 0x5FL;
                int *l_755 = &g_357;
                (*l_755) = l_754;
            }
        }
    }
    else
    {
        int l_756 = 0x2789E214L;
        int *l_757 = (void*)0;
        int *l_758 = &l_516;
        int *l_759 = &g_525;
        char **l_760 = &g_193;
        char ***l_761 = &g_192;
        (*l_759) = ((*l_758) &= (l_756 = 0x6115D857L));
        (*l_761) = l_760;
        (*l_759) ^= (*l_758);
    }
    (*l_763) ^= l_762;
    (*l_773) = ((*l_763) = (~((!((*l_770) = (safe_add_func_int32_t_s_s(g_766, (l_767 == ((*l_768) = l_767)))))) <= (((g_558 == ((*l_771) = (void*)0)) < ((*g_299) = (*g_299))) || l_772))));
    return (*l_763);
}







static unsigned char func_4(unsigned p_5, unsigned char p_6)
{
    int *l_499 = &g_72;
    (*l_499) = 0xB12AE87CL;
    return g_84;
}







static unsigned func_7(int p_8, short p_9, char p_10)
{
    unsigned l_489 = 0xF5153724L;
    short *l_494 = &g_376;
    unsigned l_495 = 0UL;
    unsigned *l_496 = &g_140;
    int l_498 = 0x55F46D18L;
    if (func_11((safe_mod_func_uint32_t_u_u(g_151, l_489)), l_489))
    {
        int **l_490 = &g_93;
        (*l_490) = &p_8;
    }
    else
    {
        int **l_491 = &g_316;
        (*l_491) = &p_8;
    }
    g_497 ^= (((func_14(p_8) && (safe_div_func_int8_t_s_s((*g_193), (l_495 &= ((void*)0 != l_494))))) | ((*l_496) = (l_489 <= l_489))) && 0UL);
    p_8 = (*g_93);
    (*g_316) = ((-9L) != (l_498 |= (255UL & 0x8FL)));
    return p_8;
}







static int func_11(unsigned short p_12, char p_13)
{
    char l_423 = 0x5DL;
    unsigned short *l_424 = &g_151;
    int l_429 = 0x3747EDB3L;
    int **l_443 = &g_316;
    int l_444 = (-1L);
    char l_485 = (-1L);
    int *l_486 = &l_429;
    (*g_316) ^= (((*g_299) |= 0x90AFL) > ((*l_424) = l_423));
    for (g_104 = (-29); (g_104 <= (-6)); g_104 = safe_add_func_int8_t_s_s(g_104, 4))
    {
        unsigned char *l_432 = (void*)0;
        unsigned char **l_431 = &l_432;
        unsigned char ***l_430 = &l_431;
        int l_435 = 1L;
        unsigned char *l_438 = &g_271;
        int *l_442 = &g_72;
        char *l_455 = &l_423;
        l_429 |= (safe_lshift_func_int8_t_s_u(2L, g_138));
        (*l_430) = (void*)0;
        l_444 ^= ((~(!(((safe_sub_func_int8_t_s_s(l_435, (safe_rshift_func_uint8_t_u_u(((*l_438) = g_271), (safe_unary_minus_func_int8_t_s((l_423 == g_151))))))) < ((l_429 &= func_54(((250UL ^ (((*l_442) = (((*g_93) = (*g_316)) || l_423)) <= (l_443 == &l_442))) > p_12), p_12)) >= 0x3E7B37B4L)) != (**g_192)))) ^ p_13);
        (*g_316) = ((safe_rshift_func_int8_t_s_u((~(safe_sub_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u(0x21L, 0)), (0x63ADL <= (*l_442))))), 2)) <= (((*l_455) = ((**g_192) = (safe_mod_func_int32_t_s_s(((*l_442) | (((~g_72) <= 0UL) > ((safe_rshift_func_int16_t_s_u((*g_299), p_12)) <= p_12))), 0x191E2DD5L)))) < 0x7AL));
    }
    for (p_12 = 2; (p_12 >= 31); p_12++)
    {
        int l_462 = 9L;
        int *l_466 = &g_84;
        int *l_467 = &g_357;
        int *l_468 = &l_429;
        int ***l_469 = &l_443;
    }
    (*l_486) &= (g_470 || (safe_rshift_func_int8_t_s_u(func_16(((safe_lshift_func_int16_t_s_s(p_13, (p_13 ^ ((((*l_424) = func_31((safe_sub_func_uint32_t_u_u(((g_104 == (safe_lshift_func_int16_t_s_s((safe_mod_func_uint16_t_u_u((**l_443), ((!1UL) ^ ((safe_add_func_int16_t_s_s(((safe_div_func_int32_t_s_s((*g_93), (((*g_299) && p_13) && (*g_316)))) && p_13), p_13)) > (**l_443))))), 15))) || 0xDAFDL), 0x3E474658L)), (**l_443))) > p_13) & p_12)))) || 3L), p_12, p_13, g_470, p_13), l_485)));
    return (*g_316);
}







static int func_14(char p_15)
{
    unsigned l_406 = 0x0E0B8F0DL;
    char **l_409 = &g_193;
    unsigned char l_411 = 255UL;
    int *l_416 = (void*)0;
    int *l_417 = (void*)0;
    int *l_422 = &g_72;
    l_406 = ((*g_316) = (safe_sub_func_uint32_t_u_u((g_151 >= (((void*)0 == &g_316) & (**g_192))), ((void*)0 == (*g_192)))));
    if (l_406)
    {
        return l_406;
    }
    else
    {
        unsigned short l_407 = 0xAADCL;
        unsigned short *l_408 = &l_407;
        unsigned char *l_410 = &g_51;
        int l_412 = (-3L);
        int l_413 = (-1L);
        int *l_414 = (void*)0;
        int *l_415 = &g_84;
        (*l_415) |= func_16(p_15, (((((*l_408) = (p_15 >= 0xFCL)) ^ (l_412 = (((*l_410) |= (((void*)0 == l_409) ^ 0x46B9L)) | l_411))) < 0x4AL) && 0x20L), l_413, p_15, l_411);
        l_416 = &g_357;
        l_417 = l_416;
    }
    g_316 = l_417;
    (*l_422) |= ((safe_sub_func_uint16_t_u_u((g_149 == ((*l_416) <= (*l_416))), ((*g_299) ^= (safe_lshift_func_int8_t_s_u((**g_192), 7))))) < ((*g_93) || (!(*l_416))));
    return (*g_93);
}







static char func_16(int p_17, unsigned p_18, unsigned char p_19, unsigned p_20, int p_21)
{
    int *l_314 = &g_98;
    unsigned char l_319 = 0UL;
    unsigned short **l_322 = (void*)0;
    char **l_326 = &g_193;
    char ***l_351 = &l_326;
    char ****l_350 = &l_351;
    for (p_19 = 0; (p_19 < 25); p_19 = safe_add_func_uint32_t_u_u(p_19, 8))
    {
        int **l_315 = &g_93;
        unsigned short *l_327 = &g_151;
        int *l_403 = &g_357;
        g_316 = ((*l_315) = l_314);
        if ((safe_lshift_func_int16_t_s_s(((*g_299) != l_319), (g_271 & ((*l_327) = (p_20 > (safe_sub_func_uint32_t_u_u((l_322 == g_323), ((safe_sub_func_int16_t_s_s(0x6465L, (l_326 == (void*)0))) < 0x76L)))))))))
        {
            (*l_315) = &g_25;
            (*l_315) = (*l_315);
            (*l_315) = &g_25;
        }
        else
        {
            g_72 |= (*g_93);
        }
        for (l_319 = 24; (l_319 == 49); l_319 = safe_add_func_uint8_t_u_u(l_319, 2))
        {
            unsigned short l_373 = 0xC44AL;
            int *l_392 = &g_357;
            short **l_397 = &g_299;
            for (g_114 = 11; (g_114 < 12); g_114 = safe_add_func_uint8_t_u_u(g_114, 1))
            {
                unsigned short l_334 = 0UL;
                int *l_360 = (void*)0;
                int l_390 = 0x1E0DFF42L;
            }
        }
        (*l_403) &= (safe_add_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u((g_68 || (**g_192)), 2)), (*l_314)));
    }
    p_17 ^= ((*g_316) = (*l_314));
    return (**g_192);
}







static int func_26(int p_27, unsigned p_28)
{
    short l_282 = 0x4CDBL;
    int l_300 = 0x0AD43505L;
    int l_310 = (-8L);
    if ((p_28 < ((safe_add_func_int16_t_s_s((g_98 && l_282), g_84)) && func_31((((l_282 > ((*g_93) = (safe_sub_func_uint32_t_u_u(4294967289UL, p_27)))) >= (0x29L ^ (safe_mod_func_int32_t_s_s((l_282 || l_282), g_25)))) | 7L), (**g_192)))))
    {
        unsigned l_289 = 0UL;
        unsigned short *l_294 = &g_151;
        short **l_295 = (void*)0;
        short **l_296 = (void*)0;
        short *l_298 = (void*)0;
        short **l_297 = &l_298;
        unsigned *l_301 = (void*)0;
        unsigned *l_302 = &g_114;
        (*g_93) = (((l_289 = ((**g_192) = (safe_rshift_func_int8_t_s_u(6L, 0)))) ^ ((safe_lshift_func_uint8_t_u_s(0x97L, (((*l_302) = ((l_300 = (((*l_294) = (p_28 & (safe_lshift_func_int16_t_s_s(((l_282 | (l_294 == (void*)0)) || 4294967286UL), ((((*l_297) = l_294) == g_299) < 65528UL))))) > 0xE7C3L)) || p_27)) | 0UL))) || 0xD7L)) == 0x7973L);
    }
    else
    {
        unsigned l_303 = 0x39A9A80CL;
        unsigned char *l_306 = &g_68;
        unsigned *l_309 = &g_138;
        int *l_311 = &g_98;
        p_27 = (p_28 && func_31(l_303, (*g_193)));
        p_27 ^= (*g_93);
        (*l_311) ^= (0L != (safe_sub_func_int32_t_s_s(p_28, func_54(((*l_306) = g_243), (safe_add_func_int8_t_s_s(func_31(((p_28 < (p_28 >= g_72)) != ((*l_309) |= l_282)), p_27), l_310))))));
    }
    (*g_93) = p_27;
    return l_282;
}







static unsigned short func_31(short p_32, char p_33)
{
    int l_233 = 0xA7F8D447L;
    int l_246 = (-5L);
    unsigned char l_269 = 0UL;
    int **l_279 = &g_93;
    for (g_104 = 10; (g_104 == 26); ++g_104)
    {
        unsigned char *l_182 = &g_68;
        unsigned char **l_181 = &l_182;
        int *l_195 = &g_25;
        char ***l_265 = &g_192;
        int *l_274 = &g_72;
        short *l_277 = (void*)0;
        short *l_278 = &g_243;
    }
    l_246 = (1L | l_233);
    (*l_279) = &g_84;
    return (**l_279);
}







static short func_38(char p_39, unsigned p_40, int p_41, unsigned p_42, unsigned short p_43)
{
    unsigned char *l_57 = &g_51;
    unsigned char **l_58 = &l_57;
    int l_63 = 0xE5156BE8L;
    unsigned char *l_66 = &g_51;
    unsigned char *l_67 = &g_68;
    int l_163 = 0xCA8B6AEBL;
    unsigned *l_172 = &g_114;
    int **l_173 = (void*)0;
    unsigned *l_176 = (void*)0;
    unsigned *l_177 = &g_140;
    if ((func_54(((*l_67) = ((*l_66) = ((((*l_58) = l_57) != (void*)0) ^ ((safe_div_func_uint16_t_u_u(((safe_lshift_func_int16_t_s_s((+0xC74BL), 7)) >= l_63), (255UL ^ (g_25 | (l_63 ^ (safe_lshift_func_uint8_t_u_u(l_63, 5))))))) & g_25)))), p_39) <= (-3L)))
    {
        unsigned short l_97 = 4UL;
        int l_105 = 0xF0CFC201L;
        if ((safe_add_func_int8_t_s_s((p_43 > (~(((*g_93) && (((safe_unary_minus_func_int16_t_s(l_97)) < func_54(g_98, p_41)) <= p_39)) == p_42))), (safe_sub_func_uint8_t_u_u(p_42, p_42)))))
        {
            char *l_103 = &g_104;
            int l_106 = 0xB8BBD03CL;
            (*g_93) ^= func_54((safe_rshift_func_int16_t_s_s(((p_41 >= func_54((((p_39 <= 0x02L) != (l_105 = ((*l_103) = ((void*)0 == &g_25)))) | (l_106 == l_97)), l_63)) && g_68), 14)), l_63);
        }
        else
        {
            int l_107 = 0L;
            (*g_93) = (0L | (&g_93 == (void*)0));
            (*g_93) = (l_107 = (p_41 < p_43));
        }
    }
    else
    {
        char *l_110 = &g_104;
        char **l_109 = &l_110;
        char ***l_108 = &l_109;
        int *l_111 = &g_84;
        int **l_112 = &l_111;
        unsigned *l_113 = &g_114;
        (*l_108) = (void*)0;
        (*l_112) = l_111;
        if ((((*l_113) &= 0x957FAA68L) <= ((2L & (safe_mod_func_int8_t_s_s(1L, (func_54(g_51, ((safe_rshift_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_s(l_63, g_68)) < p_42), 7)) & p_43)) ^ l_63)))) != g_25)))
        {
            int *l_129 = &l_63;
            for (g_68 = 14; (g_68 < 41); g_68 = safe_add_func_uint8_t_u_u(g_68, 5))
            {
                if ((*g_93))
                {
                    (*l_111) = 1L;
                }
                else
                {
                    char l_123 = 1L;
                    if ((p_40 > (p_40 == l_63)))
                    {
                        l_123 = (*g_93);
                        (*g_93) = (*g_93);
                    }
                    else
                    {
                        (*g_93) = 0L;
                        (**l_112) = (safe_add_func_int16_t_s_s(p_43, (-1L)));
                    }
                    for (g_114 = 0; (g_114 <= 50); g_114 = safe_add_func_uint8_t_u_u(g_114, 7))
                    {
                        int *l_128 = &g_98;
                        unsigned l_136 = 5UL;
                        unsigned *l_137 = (void*)0;
                        unsigned *l_139 = &g_140;
                        unsigned l_143 = 0UL;
                        l_129 = l_128;
                        (*l_112) = l_129;
                        (*l_111) = (*g_93);
                        l_143 &= (safe_div_func_uint32_t_u_u(((safe_mod_func_int8_t_s_s(((*l_110) |= ((((((safe_lshift_func_int8_t_s_u((l_136 || p_43), 0)) >= ((g_138 &= p_42) | (*l_111))) ^ g_68) & ((*l_139) = (**l_112))) ^ p_43) ^ 0xAF60L)), (safe_lshift_func_uint16_t_u_s(0xD9FCL, 12)))) != (*l_128)), 6L));
                    }
                }
            }
            (*g_93) ^= 1L;
            return p_40;
        }
        else
        {
            unsigned short l_146 = 4UL;
            int l_158 = 0x946F2EC8L;
            if ((*g_93))
            {
                char *l_147 = (void*)0;
                char *l_148 = &g_149;
                unsigned short *l_150 = &g_151;
                if ((((safe_mod_func_int8_t_s_s(p_39, ((*l_148) &= ((*l_110) ^= l_146)))) < ((*l_150) = 0xFC28L)) == (!((g_68 > p_42) & (!(l_63 ^ l_146))))))
                {
                    unsigned l_152 = 1UL;
                    l_152 = (-1L);
                    return p_41;
                }
                else
                {
                    unsigned char l_155 = 255UL;
                    (*g_93) = (g_151 & p_39);
                    for (g_149 = 5; (g_149 == 20); g_149 = safe_add_func_uint16_t_u_u(g_149, 9))
                    {
                        if (l_155)
                            break;
                    }
                    (*g_93) |= 1L;
                }
                l_63 ^= (p_43 & g_149);
                l_158 |= ((0xC084L && (safe_mul_func_int8_t_s_s(((*l_110) = g_114), (&g_72 == (*l_112))))) || (p_43 == 0xF1L));
                (*l_111) = (+(*g_93));
            }
            else
            {
                return g_149;
            }
        }
        (*l_112) = &g_25;
    }
    (*g_93) = (p_42 || (g_72 & (safe_mod_func_int16_t_s_s(((p_40 <= (safe_div_func_int16_t_s_s(g_72, 65529UL))) | (~(l_163 < ((-5L) > p_40)))), g_84))));
    (*g_93) = (safe_mod_func_int32_t_s_s((safe_sub_func_int16_t_s_s(0L, g_151)), ((*l_177) &= ((*l_172) = (g_138 ^= (!(p_41 & (func_54(((safe_sub_func_uint16_t_u_u((safe_div_func_int32_t_s_s((*g_93), ((*l_172) = p_42))), (((l_173 != (void*)0) ^ ((safe_rshift_func_uint8_t_u_s((&l_66 == &l_66), 0)) > p_41)) < p_43))) == p_39), g_25) <= p_39))))))));
    return p_43;
}







static char func_54(unsigned char p_55, unsigned short p_56)
{
    int *l_69 = &g_25;
    int **l_70 = &l_69;
    int *l_71 = &g_72;
    (*l_70) = l_69;
    (*l_71) ^= g_51;
    (*l_71) = (safe_lshift_func_int8_t_s_u((*l_69), 3));
    for (g_68 = (-30); (g_68 > 54); g_68 = safe_add_func_uint8_t_u_u(g_68, 4))
    {
        for (p_55 = (-5); (p_55 < 35); p_55 = safe_add_func_int8_t_s_s(p_55, 3))
        {
            int *l_83 = &g_84;
        }
    }
    return (*l_69);
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_25, "g_25", print_hash_value);
    transparent_crc(g_51, "g_51", print_hash_value);
    transparent_crc(g_68, "g_68", print_hash_value);
    transparent_crc(g_72, "g_72", print_hash_value);
    transparent_crc(g_84, "g_84", print_hash_value);
    transparent_crc(g_98, "g_98", print_hash_value);
    transparent_crc(g_104, "g_104", print_hash_value);
    transparent_crc(g_114, "g_114", print_hash_value);
    transparent_crc(g_138, "g_138", print_hash_value);
    transparent_crc(g_140, "g_140", print_hash_value);
    transparent_crc(g_149, "g_149", print_hash_value);
    transparent_crc(g_151, "g_151", print_hash_value);
    transparent_crc(g_243, "g_243", print_hash_value);
    transparent_crc(g_271, "g_271", print_hash_value);
    transparent_crc(g_357, "g_357", print_hash_value);
    transparent_crc(g_376, "g_376", print_hash_value);
    transparent_crc(g_470, "g_470", print_hash_value);
    transparent_crc(g_497, "g_497", print_hash_value);
    transparent_crc(g_525, "g_525", print_hash_value);
    transparent_crc(g_542, "g_542", print_hash_value);
    transparent_crc(g_698, "g_698", print_hash_value);
    transparent_crc(g_766, "g_766", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
