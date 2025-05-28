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
};


static int g_2 = 0x9714A025L;
static int g_84 = (-10L);
static int g_100 = (-1L);
static int *g_149 = &g_84;
static int **g_148 = &g_149;
static union U0 g_200 = {0xE2F7L};
static const int *g_216 = &g_100;
static int g_226 = 0x75418033L;
static union U0 * const g_316 = &g_200;
static union U0 * const *g_315 = &g_316;
static short g_335 = 0x0449L;
static const unsigned g_655 = 0UL;
static int g_669 = 0x472D2892L;



static int func_1(void);
static unsigned char func_12(unsigned p_13, unsigned p_14, unsigned p_15, char p_16, unsigned short p_17);
static unsigned char func_22(const unsigned char p_23, unsigned p_24, char p_25, unsigned p_26);
static const unsigned char func_32(int p_33, unsigned p_34, unsigned p_35, short p_36, unsigned short p_37);
static int func_42(const unsigned char p_43);
static int func_45(int p_46, int p_47);
static char func_55(int p_56);
static char func_57(unsigned short p_58, unsigned char p_59, const short p_60);
static int * func_62(short p_63);
static int func_70(int p_71);
static int func_1(void)
{
    short l_27 = (-1L);
    int l_664 = 0L;
    int l_674 = 0xDF394F76L;
    const union U0 *l_718 = &g_200;
    unsigned short l_721 = 65535UL;
    int *l_722 = &g_100;
    for (g_2 = 0; (g_2 >= 11); g_2 = safe_add_func_int16_t_s_s(g_2, 8))
    {
        const int l_7 = 0L;
        int *l_668 = &g_669;
    }
    if (l_674)
    {
        const int l_683 = 0L;
        union U0 *l_692 = &g_200;
        union U0 **l_691 = &l_692;
        union U0 ***l_690 = &l_691;
        int * const *l_717 = &g_149;
        int * const **l_716 = &l_717;
        int *l_720 = &g_2;
        if (func_57((func_42(l_683) == (safe_mul_func_uint8_t_u_u((253UL == l_683), ((*g_315) == (void*)0)))), (((l_27 >= (safe_rshift_func_uint16_t_u_s((0x0FL | ((((safe_mul_func_uint16_t_u_u((((&g_315 != l_690) < 0xE03FL) | l_683), g_2)) | g_655) || 0x96L) && l_683)), 12))) > l_27) != (-4L)), l_683))
        {
            return g_100;
        }
        else
        {
            unsigned char l_705 = 1UL;
            if (l_683)
            {
                int *l_693 = &g_226;
                (*l_693) ^= (*g_216);
                if (l_683)
                {
                    (*l_693) ^= (*g_216);
                }
                else
                {
                    unsigned l_698 = 0x281DF852L;
                    (*l_693) &= (*g_216);
                    (*l_693) |= l_705;
                    for (g_335 = (-28); (g_335 >= 21); g_335 = safe_add_func_uint32_t_u_u(g_335, 4))
                    {
                        (*l_693) = 0x35F4DDDEL;
                        (*g_148) = func_62(l_674);
                        if ((*g_216))
                            break;
                        (**g_148) = (*g_216);
                    }
                }
            }
            else
            {
                int *l_719 = &g_100;
                (*l_719) ^= (safe_rshift_func_int8_t_s_u((safe_lshift_func_uint8_t_u_s(l_664, 1)), ((safe_lshift_func_uint8_t_u_s(0xCAL, 5)) <= (safe_lshift_func_uint8_t_u_u(((l_716 != (void*)0) < ((l_718 != (*g_315)) && l_705)), (&g_315 != (void*)0))))));
            }
        }
        (*l_720) ^= (*g_216);
    }
    else
    {
        return l_721;
    }
    (*l_722) = func_70(g_226);
    return (*l_722);
}







static unsigned char func_12(unsigned p_13, unsigned p_14, unsigned p_15, char p_16, unsigned short p_17)
{
    short l_665 = (-1L);
    int *l_666 = &g_84;
    int l_667 = 1L;
    (*l_666) = l_665;
    l_667 ^= (g_84 >= (*l_666));
    return p_15;
}







static unsigned char func_22(const unsigned char p_23, unsigned p_24, char p_25, unsigned p_26)
{
    unsigned l_525 = 4294967290UL;
    const int *l_528 = &g_84;
    union U0 *l_531 = &g_200;
    union U0 * const **l_536 = (void*)0;
    int l_553 = (-1L);
    union U0 ** const l_584 = &l_531;
    for (p_25 = 1; (p_25 != (-7)); p_25--)
    {
        unsigned l_533 = 1UL;
        int *l_541 = (void*)0;
        int l_542 = 0L;
        if (l_525)
            break;
        for (g_200.f0 = (-16); (g_200.f0 <= 41); g_200.f0 = safe_add_func_uint16_t_u_u(g_200.f0, 8))
        {
            const int **l_529 = &l_528;
            union U0 *l_530 = (void*)0;
            int l_532 = (-1L);
            (*l_529) = l_528;
            l_532 ^= (p_23 | (**l_529));
        }
        l_542 |= ((((0xCEB34B71L && ((p_26 ^ (l_533 | func_70(p_26))) == (safe_sub_func_int8_t_s_s((&g_315 == l_536), ((safe_mod_func_int32_t_s_s((safe_add_func_uint16_t_u_u(p_23, g_226)), p_24)) == 0x7278C815L))))) | l_533) != p_23) || g_200.f0);
    }
    if ((0x5EL & (*l_528)))
    {
        int l_548 = (-1L);
        int **l_593 = &g_149;
        int *l_606 = &g_84;
        if ((*l_528))
        {
            int l_545 = 6L;
            l_545 = (p_25 >= (safe_rshift_func_uint8_t_u_u(g_335, (p_26 <= (p_24 | ((func_57(func_57(l_545, ((*l_528) != 0L), (safe_mod_func_int8_t_s_s(g_335, 1UL))), g_335, p_25) == (-10L)) | 0x4607L))))));
            (*g_148) = (void*)0;
            if ((p_24 >= p_24))
            {
                int *l_554 = &g_84;
                (*l_554) = l_553;
                if (p_25)
                {
                    l_545 = (safe_lshift_func_int16_t_s_s(0x0DB3L, 8));
                }
                else
                {
                    return g_335;
                }
            }
            else
            {
                for (g_100 = 11; (g_100 >= 29); g_100++)
                {
                    int *l_559 = &l_548;
                    (*l_559) &= (g_335 && 0xA0L);
                    for (p_26 = 10; (p_26 == 54); ++p_26)
                    {
                        int *l_562 = &l_553;
                        (*l_562) ^= l_548;
                        (*l_559) ^= p_23;
                        (*g_148) = (*g_148);
                        (*l_562) ^= (&l_562 == &l_559);
                    }
                }
            }
        }
        else
        {
            union U0 **l_565 = &l_531;
            int l_570 = 4L;
            if (((0x93E1L ^ (p_24 > ((p_25 & (safe_lshift_func_int16_t_s_s(((*g_216) ^ l_548), 2))) < p_23))) >= 0x6AF2D2B8L))
            {
                union U0 *l_573 = &g_200;
                int *l_581 = &g_100;
                for (g_200.f0 = (-24); (g_200.f0 == 23); ++g_200.f0)
                {
                    short l_580 = 0xD348L;
                    if ((((l_570 && (safe_rshift_func_int8_t_s_u(p_26, (+((-1L) || g_335))))) < (*g_216)) && (g_226 & ((safe_lshift_func_uint16_t_u_s((safe_add_func_int32_t_s_s(((g_84 == g_200.f0) ^ p_25), 3L)), p_25)) | 0xDB81L))))
                    {
                        int *l_578 = &l_553;
                        (*l_578) = (*g_216);
                    }
                    else
                    {
                        int *l_579 = &l_548;
                        (*l_579) = ((g_2 || 0xAA05L) || 65535UL);
                        return l_580;
                    }
                }
                (*g_148) = func_62((*l_528));
                (*g_148) = l_581;
            }
            else
            {
                return l_570;
            }
            (**g_148) = (((void*)0 != (*g_148)) & ((p_25 ^ (0L > ((void*)0 == l_584))) <= (safe_add_func_int8_t_s_s((safe_mul_func_int16_t_s_s(0x4515L, 0xE2D1L)), (((safe_mod_func_int8_t_s_s(((&l_548 == &l_548) == g_100), 0x36L)) > (-8L)) == 8UL)))));
        }
        (*l_606) = ((safe_sub_func_int16_t_s_s((&g_216 == l_593), 0L)) >= (safe_mul_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u((*l_528), 11)), (safe_rshift_func_uint16_t_u_s(((((&g_316 == &g_316) & ((safe_unary_minus_func_int32_t_s((&l_553 == (*g_148)))) & (safe_lshift_func_uint8_t_u_u(((safe_mul_func_uint16_t_u_u((safe_unary_minus_func_int32_t_s(p_26)), p_24)) || (*l_528)), 6)))) != g_2) ^ (*g_216)), l_548)))));
        (*g_148) = &l_553;
    }
    else
    {
        short l_613 = 0xFA9CL;
        int *l_614 = &l_553;
        const union U0 *l_625 = &g_200;
        l_553 = (0xBC6118E1L < ((*l_528) & (safe_lshift_func_uint8_t_u_s((safe_mod_func_uint8_t_u_u((safe_mul_func_int8_t_s_s(l_613, (g_2 | (l_614 != &l_553)))), g_335)), (safe_rshift_func_int8_t_s_u(p_24, g_335))))));
        (*l_584) = (*l_584);
        if ((*g_216))
        {
            (*l_614) = p_25;
        }
        else
        {
            const unsigned short l_624 = 0x2D91L;
            int **l_641 = &g_149;
            if (p_25)
            {
                unsigned l_621 = 4294967289UL;
                unsigned char l_640 = 5UL;
                if (func_57((((safe_mod_func_int32_t_s_s(1L, (safe_rshift_func_uint8_t_u_u(1UL, g_226)))) > (*l_528)) ^ ((l_621 > ((*l_614) || (l_624 > l_624))) & p_24)), g_335, l_624))
                {
                    (*l_614) = (l_625 != (void*)0);
                }
                else
                {
                    unsigned l_628 = 4294967295UL;
                    if (((safe_rshift_func_int8_t_s_s((*l_528), g_100)) & ((p_23 < (*l_528)) <= g_100)))
                    {
                        return l_621;
                    }
                    else
                    {
                        unsigned l_629 = 0x3D4CC4C2L;
                        (*l_614) ^= l_629;
                        return g_226;
                    }
                }
                if ((((*l_528) >= 0x06L) >= p_24))
                {
                    unsigned l_639 = 0UL;
                    int *l_642 = &l_553;
                    (*l_614) &= 0L;
                    for (p_25 = 0; (p_25 > (-14)); p_25 = safe_sub_func_int32_t_s_s(p_25, 3))
                    {
                        (*g_148) = func_62((safe_lshift_func_uint16_t_u_u((((safe_unary_minus_func_int16_t_s((((p_24 | (safe_mod_func_int16_t_s_s(p_26, 0xC62FL))) ^ l_624) <= 0x34L))) != p_23) == g_2), 9)));
                        l_641 = &g_149;
                        (*g_148) = l_642;
                    }
                    l_553 = ((func_57(((void*)0 != &l_625), ((safe_rshift_func_int8_t_s_s(g_100, (*l_642))) != ((safe_mul_func_uint8_t_u_u((&l_642 == &g_149), ((safe_sub_func_uint8_t_u_u((*l_528), (g_84 >= g_200.f0))) > 0x837FDD56L))) < 0x09D587CBL)), g_2) != 0x0DL) || p_25);
                }
                else
                {
                    int l_656 = 0L;
                    (*l_614) = (*g_216);
                    (*l_614) &= (l_656 & g_84);
                }
            }
            else
            {
                unsigned char l_657 = 0x15L;
                (*g_148) = func_62(g_335);
                (*l_641) = func_62(p_25);
                (**g_148) = l_657;
                (*l_614) = func_45((**l_641), (safe_mod_func_uint16_t_u_u(((*l_614) & ((**l_641) >= p_26)), (safe_lshift_func_int16_t_s_u((safe_mod_func_uint8_t_u_u(g_2, g_84)), 8)))));
            }
            (*l_641) = (*g_148);
            (*l_641) = func_62(p_25);
        }
    }
    return (*l_528);
}







static const unsigned char func_32(int p_33, unsigned p_34, unsigned p_35, short p_36, unsigned short p_37)
{
    const unsigned short l_44 = 0UL;
    union U0 *l_509 = &g_200;
    union U0 **l_508 = &l_509;
    union U0 ***l_507 = &l_508;
    int l_522 = (-1L);
    if (((safe_mul_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u((func_42(l_44) >= p_36), 12)), ((void*)0 == l_507))) > (((l_44 > g_200.f0) && ((safe_add_func_int8_t_s_s(6L, ((safe_lshift_func_int8_t_s_u((-4L), 2)) ^ 1UL))) < g_2)) | l_44)))
    {
        int *l_514 = (void*)0;
        unsigned short l_515 = 0x80F5L;
        l_515 = 0xE3544E29L;
        l_514 = (*g_148);
    }
    else
    {
        l_522 |= (((safe_mod_func_int16_t_s_s(func_70((safe_sub_func_uint32_t_u_u(((safe_mul_func_int8_t_s_s(p_36, p_36)) || (g_100 != l_44)), g_100))), 0x9DD7L)) && g_84) && p_37);
        (*g_148) = (void*)0;
    }
    return g_335;
}







static int func_42(const unsigned char p_43)
{
    char l_48 = 0x3FL;
    int l_353 = 0x44213E9DL;
    char l_418 = 0x65L;
    unsigned l_423 = 0x9E227387L;
    union U0 *l_474 = &g_200;
    union U0 **l_473 = &l_474;
    union U0 ***l_472 = &l_473;
    l_353 &= func_45(l_48, p_43);
    (*g_148) = (*g_148);
    for (g_84 = (-27); (g_84 != 16); g_84++)
    {
        int *l_356 = &l_353;
        union U0 *l_396 = &g_200;
        union U0 **l_395 = &l_396;
        const int l_449 = 0x97E41263L;
        int l_462 = 0x89859AF5L;
    }
    l_353 = (p_43 > (safe_lshift_func_int8_t_s_s(l_48, 3)));
    return (*g_216);
}







static int func_45(int p_46, int p_47)
{
    unsigned l_172 = 4294967292UL;
    unsigned char l_217 = 0x86L;
    union U0 *l_239 = &g_200;
    int *l_265 = (void*)0;
    unsigned char l_281 = 3UL;
    int l_347 = (-7L);
    for (p_47 = 0; (p_47 >= 22); p_47 = safe_add_func_int32_t_s_s(p_47, 1))
    {
        int l_61 = 1L;
        int l_170 = 0L;
        int *l_173 = &g_100;
    }
    if (((((g_84 < (g_2 | (safe_add_func_int8_t_s_s((safe_mul_func_uint8_t_u_u((g_84 || p_47), (1UL <= (*g_149)))), g_84)))) & (+(safe_sub_func_uint8_t_u_u(l_172, (safe_mod_func_uint8_t_u_u(255UL, (-1L))))))) || 0xDFFA464FL) != 0x6F84042AL))
    {
        const unsigned l_182 = 5UL;
        union U0 *l_199 = &g_200;
        const int *l_214 = &g_84;
        (*g_148) = (void*)0;
        if (l_182)
        {
            int *l_192 = &g_84;
            const unsigned l_221 = 0x7FBD4062L;
            unsigned l_222 = 0x524C0835L;
            const unsigned l_246 = 4294967295UL;
            for (p_46 = 0; (p_46 <= (-27)); p_46--)
            {
                int l_194 = 0x563165A2L;
                if (p_47)
                {
                    const unsigned l_189 = 1UL;
                    const int **l_215 = (void*)0;
                    if (((safe_mul_func_int16_t_s_s(func_70((safe_sub_func_int16_t_s_s(func_57(g_84, (l_189 == (((safe_sub_func_uint16_t_u_u(p_46, l_182)) >= g_2) > (g_84 | 0x24E53AA9L))), g_2), 0xE058L))), g_2)) <= p_46))
                    {
                        unsigned short l_193 = 0x75DDL;
                        (*l_192) = (((*g_148) == l_192) > p_47);
                        return l_193;
                    }
                    else
                    {
                        int ** const l_197 = (void*)0;
                        int *l_198 = &g_100;
                        union U0 **l_201 = &l_199;
                        (*l_192) &= l_194;
                        (*l_198) |= (safe_sub_func_uint16_t_u_u(((l_197 == &g_149) || p_46), (*l_192)));
                        (*l_201) = l_199;
                        (*l_198) = ((safe_sub_func_int32_t_s_s(func_57((safe_lshift_func_uint16_t_u_u((((safe_add_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u((+(safe_rshift_func_uint16_t_u_s((&g_149 == &g_149), 3))), (l_182 & ((func_57(p_47, (g_84 & (-6L)), l_182) == 0xC801A31DL) != p_47)))), p_47)) == p_47) || g_2), g_2)), g_2, p_46), p_47)) && g_84);
                    }
                    g_216 = l_214;
                    (*l_192) = p_46;
                }
                else
                {
                    const unsigned short l_218 = 1UL;
                    int *l_225 = &g_226;
                    l_222 &= (((func_70(l_217) | l_218) == ((safe_rshift_func_int8_t_s_u(g_200.f0, (0xB2CCD057L <= l_221))) != (g_2 & ((g_200.f0 != l_194) | g_200.f0)))) | l_194);
                    (*l_225) &= (safe_sub_func_uint32_t_u_u((0x5C67L >= ((void*)0 != (*g_148))), func_70(g_2)));
                    for (l_172 = (-27); (l_172 == 48); l_172 = safe_add_func_int16_t_s_s(l_172, 7))
                    {
                        union U0 **l_229 = &l_199;
                        (*l_192) = func_70((*l_192));
                        (*l_229) = &g_200;
                        (*l_225) = ((safe_rshift_func_uint8_t_u_s(g_2, (((safe_mul_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u(((*l_192) <= 0xA24AL), 2)), (*l_214))) || (g_100 <= (safe_mul_func_uint16_t_u_u(g_100, (*l_225))))) <= (0xC0B64EB7L ^ p_47)))) & p_47);
                        (*l_192) &= (safe_unary_minus_func_uint32_t_u(1UL));
                    }
                }
            }
            (*l_192) = (l_239 == (void*)0);
            (*l_192) = (0x6EL <= ((safe_sub_func_int32_t_s_s((safe_mod_func_uint8_t_u_u(((((safe_add_func_uint8_t_u_u(g_100, l_246)) > g_2) < (safe_lshift_func_uint16_t_u_u(((safe_lshift_func_int8_t_s_u((safe_mod_func_int16_t_s_s(p_46, 0x2194L)), ((safe_mod_func_int8_t_s_s(((p_47 & p_46) >= (~(safe_add_func_int32_t_s_s(p_46, p_47)))), p_46)) == p_47))) < 0x33L), 1))) || 0xC7061189L), g_100)), (*g_216))) | 4L));
        }
        else
        {
            unsigned short l_257 = 0x03C0L;
            l_257 = 7L;
        }
    }
    else
    {
        char l_264 = 7L;
        int *l_266 = &g_84;
        (*g_149) = (g_200.f0 == func_57((p_47 == (safe_mul_func_uint16_t_u_u(g_2, (safe_lshift_func_uint16_t_u_s(g_84, (g_2 | (safe_add_func_int8_t_s_s((p_46 > 0xE9ABL), l_264)))))))), (p_47 >= 0L), l_264));
        l_266 = l_265;
    }
    (*g_148) = (*g_148);
    for (g_84 = 0; (g_84 < 28); g_84 = safe_add_func_int8_t_s_s(g_84, 1))
    {
        unsigned l_275 = 4294967295UL;
        int *l_278 = &g_100;
        unsigned char l_334 = 255UL;
        for (l_172 = 0; (l_172 < 17); l_172++)
        {
            union U0 *l_271 = &g_200;
            union U0 **l_272 = &l_239;
            char l_273 = 0x3AL;
            int *l_274 = &g_100;
            int l_322 = 0x06CC4AA5L;
            int l_323 = 0L;
            (*l_272) = l_271;
            (*l_274) = l_273;
            (*l_274) = l_275;
            if ((*g_216))
            {
                int *l_282 = &g_2;
                if (p_46)
                {
                    unsigned short l_283 = 1UL;
                    for (p_46 = 0; (p_46 >= (-17)); p_46 = safe_sub_func_uint32_t_u_u(p_46, 1))
                    {
                        (*g_148) = l_278;
                        (*g_148) = (void*)0;
                        (*l_274) = (safe_mul_func_uint16_t_u_u(l_281, p_47));
                        (*g_148) = l_282;
                    }
                    if (l_283)
                        break;
                }
                else
                {
                    unsigned short l_286 = 65535UL;
                    (*l_274) = ((safe_mul_func_int16_t_s_s(g_200.f0, l_286)) > p_47);
                    if ((((p_46 ^ (safe_mul_func_int8_t_s_s(g_200.f0, (safe_sub_func_int8_t_s_s(((p_47 >= ((safe_add_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u(((0UL < (safe_rshift_func_int8_t_s_s((g_200.f0 != p_47), g_226))) && ((safe_mul_func_uint8_t_u_u(p_47, (((safe_lshift_func_int16_t_s_u((safe_mod_func_uint16_t_u_u(p_46, p_46)), 3)) || p_46) <= 0x00L))) < p_46)), g_200.f0)), p_47)) | (*l_282))) & g_2), p_46))))) | 0x7DA01E1DL) && (*l_278)))
                    {
                        (*l_278) = (safe_add_func_uint8_t_u_u((g_84 < g_2), (safe_add_func_uint16_t_u_u(g_2, (safe_mod_func_int32_t_s_s(0L, ((((safe_rshift_func_uint16_t_u_s(65535UL, 5)) && g_226) <= ((safe_mod_func_uint16_t_u_u((*l_282), p_46)) != (*l_282))) | g_84)))))));
                    }
                    else
                    {
                        (*g_148) = (*g_148);
                        (*l_278) = p_46;
                    }
                }
                (*l_278) = (g_315 != &g_316);
                for (l_273 = (-29); (l_273 > (-18)); ++l_273)
                {
                    union U0 ***l_319 = &l_272;
                    (*l_319) = (void*)0;
                    (*g_148) = (void*)0;
                    if (p_46)
                    {
                        l_323 &= (((*g_315) == (*g_315)) < (safe_mul_func_uint8_t_u_u(l_322, g_100)));
                    }
                    else
                    {
                        int *l_324 = &l_323;
                        (*l_324) |= (*g_216);
                        if ((*l_282))
                            break;
                        (*g_148) = (*g_148);
                        return (*g_216);
                    }
                    (*l_278) = (p_47 > (safe_mod_func_uint16_t_u_u(((*l_274) >= 4L), g_2)));
                }
                g_335 ^= ((0x04L > (safe_sub_func_int16_t_s_s(((-1L) || (safe_rshift_func_int16_t_s_u(((safe_sub_func_int32_t_s_s(p_46, g_226)) && (((p_47 > (safe_unary_minus_func_uint32_t_u(g_2))) == (g_200.f0 ^ g_100)) <= ((l_334 & 0xBAD667D2L) || 0x03B2L))), p_47))), p_46))) < g_2);
            }
            else
            {
                if ((*g_216))
                    break;
            }
        }
        l_347 |= ((*l_278) <= (safe_add_func_int16_t_s_s(0xA836L, (0xCEL > (safe_sub_func_uint16_t_u_u(((*l_278) | (safe_unary_minus_func_int8_t_s(((*l_278) & (safe_mul_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u(((0L && (safe_add_func_int8_t_s_s(0L, ((void*)0 == (*g_315))))) <= 4294967295UL), g_2)), p_46)))))), p_46))))));
        for (p_46 = (-24); (p_46 < 11); ++p_46)
        {
            char l_352 = 1L;
            for (l_281 = 18; (l_281 != 32); l_281++)
            {
                (*l_278) &= p_46;
            }
            l_352 = ((void*)0 != &g_316);
        }
    }
    return p_46;
}







static char func_55(int p_56)
{
    int *l_132 = (void*)0;
    int *l_133 = &g_84;
    int **l_134 = &l_133;
    char l_145 = 1L;
    int *l_162 = &g_84;
    (*l_133) = 0x6FF5FBB4L;
    (*l_134) = &g_2;
    if (((**l_134) ^ 0xB30FD8B1L))
    {
        unsigned l_139 = 6UL;
        int * const l_150 = (void*)0;
        int **l_151 = &g_149;
        int *l_160 = &g_84;
        for (g_100 = 0; (g_100 < 9); ++g_100)
        {
            char l_140 = 8L;
            if ((g_2 > (p_56 && (safe_add_func_uint32_t_u_u(p_56, l_139)))))
            {
                if (l_140)
                    break;
            }
            else
            {
                int *l_141 = (void*)0;
                int *l_142 = &g_84;
                (*l_142) = (+g_84);
            }
            (*g_149) ^= ((safe_sub_func_uint8_t_u_u(0x31L, l_145)) | ((safe_sub_func_uint8_t_u_u((((l_140 && (g_148 != &g_149)) | 1UL) == l_140), 0xCBL)) == ((*g_148) == l_150)));
        }
        (*l_151) = l_150;
        (*l_160) = ((safe_sub_func_uint8_t_u_u(p_56, p_56)) >= (safe_mod_func_uint32_t_u_u((safe_add_func_int16_t_s_s((safe_rshift_func_int16_t_s_s(p_56, 12)), (-3L))), 0x55C24141L)));
    }
    else
    {
        int *l_161 = (void*)0;
        l_161 = func_62((*l_133));
        (*g_149) ^= (p_56 && g_2);
        return g_84;
    }
    (*l_162) = func_57((*l_133), p_56, ((g_100 && g_100) <= 0xB4F3EC93L));
    return (*l_133);
}







static char func_57(unsigned short p_58, unsigned char p_59, const short p_60)
{
    short l_66 = 0L;
    unsigned char l_69 = 0x59L;
    const int *l_76 = &g_2;
    int *l_116 = &g_2;
    int **l_115 = &l_116;
    int *l_119 = &g_2;
    (*l_115) = func_62((safe_mul_func_uint16_t_u_u((l_66 | ((safe_sub_func_uint32_t_u_u(l_69, func_70((g_2 && ((safe_mod_func_uint32_t_u_u((safe_mul_func_int8_t_s_s((&g_2 != l_76), ((g_2 && (safe_rshift_func_int8_t_s_s(((0x0AE7L < (safe_mod_func_int8_t_s_s((safe_rshift_func_int16_t_s_s((+((p_59 <= g_2) > 0x9EL)), g_2)), p_59))) | (*l_76)), g_2))) == (-8L)))), (*l_76))) && 0xA51CL))))) == g_2)), (*l_76))));
    (*l_116) ^= (safe_add_func_int8_t_s_s(((void*)0 != l_119), p_59));
    if (((safe_unary_minus_func_int32_t_s((safe_rshift_func_uint8_t_u_u((safe_mod_func_int8_t_s_s((0x8DL ^ g_100), ((0UL >= (safe_sub_func_uint32_t_u_u(p_59, (((g_100 && g_100) | (~((g_100 <= ((safe_add_func_uint32_t_u_u(((void*)0 == (*l_115)), 4294967295UL)) == g_2)) >= g_2))) < g_84)))) || (*l_116)))), 0)))) < 253UL))
    {
        (**l_115) &= 0xB54DF119L;
    }
    else
    {
        short l_129 = 0x1AFCL;
        (**l_115) = (p_60 >= ((0x25FAL || (**l_115)) != (l_129 | (safe_add_func_uint8_t_u_u((g_100 > p_58), p_58)))));
        return g_2;
    }
    return p_60;
}







static int * func_62(short p_63)
{
    char l_103 = (-5L);
    int *l_107 = &g_84;
    const int *l_111 = &g_100;
    int **l_114 = &l_107;
    if ((safe_sub_func_uint8_t_u_u(l_103, (((!g_100) | g_84) > (&g_84 != (void*)0)))))
    {
        int **l_108 = (void*)0;
        int **l_109 = (void*)0;
        for (l_103 = 17; (l_103 >= (-18)); l_103 = safe_sub_func_int32_t_s_s(l_103, 2))
        {
            int *l_106 = &g_100;
            (*l_106) ^= 0L;
        }
        l_107 = l_107;
    }
    else
    {
        const int *l_110 = &g_2;
        const int **l_112 = (void*)0;
        const int **l_113 = &l_111;
        l_111 = l_110;
        (*l_113) = l_111;
        (*l_107) ^= p_63;
    }
    (*l_107) ^= p_63;
    (*l_114) = l_107;
    return &g_100;
}







static int func_70(int p_71)
{
    int *l_83 = &g_84;
    int *l_99 = &g_100;
    (*l_83) = g_2;
    (*l_99) |= (safe_mod_func_int16_t_s_s((p_71 || (safe_lshift_func_int8_t_s_u((g_2 == (((p_71 || (safe_mod_func_int16_t_s_s((+(safe_rshift_func_int16_t_s_u((*l_83), 8))), (*l_83)))) || (~((safe_lshift_func_int8_t_s_s((safe_lshift_func_int16_t_s_u(((((*l_83) <= (*l_83)) | (safe_rshift_func_uint8_t_u_s(((0UL || g_84) == p_71), p_71))) > g_84), 4)), (*l_83))) | g_84))) < p_71)), 4))), 0x73CBL));
    return g_84;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_84, "g_84", print_hash_value);
    transparent_crc(g_100, "g_100", print_hash_value);
    transparent_crc(g_200.f0, "g_200.f0", print_hash_value);
    transparent_crc(g_226, "g_226", print_hash_value);
    transparent_crc(g_335, "g_335", print_hash_value);
    transparent_crc(g_655, "g_655", print_hash_value);
    transparent_crc(g_669, "g_669", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
