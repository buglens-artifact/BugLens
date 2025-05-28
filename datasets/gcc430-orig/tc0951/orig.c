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
   int f0;
   unsigned char f1;
   int f2;
   unsigned f3;
   unsigned short f4;
   unsigned short f5;
   unsigned f6;
   int f7;
   int f8;
   unsigned short f9;
};


static short g_11 = (-1L);
static short g_45 = 0x0855L;
static int g_66 = 0x1DCEDE6AL;
static char g_73 = (-1L);
static int *g_75 = &g_66;
static unsigned g_78 = 4294967287UL;
static struct S0 g_88 = {-1L,0xE5L,1L,0x6C42336FL,0xEBA0L,65535UL,1UL,1L,3L,65535UL};
static struct S0 *g_87 = &g_88;
static short *g_94 = &g_45;
static int *g_107 = &g_66;
static char **g_131 = (void*)0;
static char g_164 = 0x33L;
static char ***g_185 = (void*)0;
static char ****g_184 = &g_185;
static int g_210 = 0xB7823F57L;
static unsigned char *g_233 = &g_88.f1;
static int g_235 = 0xCA190077L;
static unsigned g_262 = 4294967291UL;
static unsigned *g_275 = &g_88.f3;
static unsigned *g_277 = &g_78;
static unsigned **g_276 = &g_277;
static unsigned short g_379 = 1UL;
static struct S0 **g_382 = &g_87;
static unsigned *g_489 = &g_88.f6;
static unsigned **g_488 = &g_489;
static unsigned g_565 = 9UL;
static unsigned ***g_579 = &g_276;
static unsigned ****g_578 = &g_579;



static char func_1(void);
static int * func_2(struct S0 p_3, unsigned short p_4);
static unsigned short func_6(int * p_7, int p_8, char p_9);
static short func_16(int * p_17, unsigned p_18, unsigned p_19);
static int * func_20(unsigned short p_21, unsigned short p_22);
static unsigned short func_23(int * p_24, int p_25, int * p_26, int * p_27, int * p_28);
static int * func_29(unsigned p_30, unsigned char p_31, unsigned short p_32);
static int func_54(short * p_55, unsigned char p_56, int p_57, unsigned p_58);
static short * func_59(short p_60, int * p_61, short * p_62);
static short * func_67(unsigned p_68, struct S0 p_69);
static char func_1(void)
{
    struct S0 l_5 = {0xFF3DE036L,0xBDL,0x97E780CAL,1UL,0x19C9L,6UL,0UL,0xCDE9E843L,0x31E19E95L,0UL};
    int *l_10 = (void*)0;
    unsigned short l_39 = 0xDFDAL;
    int l_472 = 0L;
    int **l_536 = &l_10;
    char *l_551 = (void*)0;
    char **l_550 = &l_551;
    short l_566 = 0x0CADL;
    unsigned ***l_577 = &g_276;
    unsigned ****l_576 = &l_577;
    (*l_536) = func_2(l_5, func_6(l_10, g_11, (((safe_add_func_uint8_t_u_u((safe_add_func_int16_t_s_s(func_16(func_20(func_23(func_29((safe_lshift_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u(g_11, (safe_sub_func_uint16_t_u_u((((5UL && g_11) || g_11) | g_11), 0x1A01L)))), g_11)), l_39, g_11), g_78, &g_210, &g_210, l_10), g_235), l_472, g_11), g_11)), 249UL)) & l_39) > (-5L))));
    for (g_88.f5 = 0; (g_88.f5 != 37); g_88.f5++)
    {
        unsigned l_543 = 0x67DF072DL;
        short l_546 = 4L;
        char **l_549 = (void*)0;
        struct S0 l_571 = {0x3E66F1F6L,255UL,0x691C61AAL,0x270FFD1BL,0x5F9BL,6UL,1UL,0x9DCD3B71L,0x75B53FB0L,1UL};
        int l_594 = 0x9A6F872AL;
    }
    return (**l_536);
}







static int * func_2(struct S0 p_3, unsigned short p_4)
{
    unsigned l_513 = 1UL;
    int *l_530 = (void*)0;
    int **l_532 = &g_75;
    struct S0 l_533 = {0xF9B4583DL,0x52L,9L,4294967295UL,0UL,65535UL,9UL,1L,0x6E5FCF05L,3UL};
    struct S0 *l_534 = &g_88;
    struct S0 *l_535 = &l_533;
    for (g_164 = 0; (g_164 > 22); ++g_164)
    {
        short *l_495 = &g_45;
        short *l_496 = &g_11;
        char *l_497 = &g_73;
        char l_515 = 0x58L;
        (*g_75) = (((l_495 = l_495) == l_496) || ((*l_497) = p_3.f1));
        for (g_88.f7 = 23; (g_88.f7 >= 27); g_88.f7 = safe_add_func_int16_t_s_s(g_88.f7, 2))
        {
            struct S0 *l_506 = (void*)0;
            int *l_507 = &g_66;
            unsigned short *l_510 = &g_88.f4;
            unsigned short *l_511 = (void*)0;
            unsigned short *l_512 = &g_379;
            int **l_531 = &g_75;
        }
    }
    (*l_532) = l_530;
    (*l_534) = l_533;
    (*l_535) = ((*l_534) = (*l_534));
    return &g_66;
}







static unsigned short func_6(int * p_7, int p_8, char p_9)
{
    unsigned ***l_490 = (void*)0;
    unsigned ***l_491 = &g_488;
    int l_492 = 0xBD7AF2B2L;
    (*l_491) = g_488;
    return l_492;
}







static short func_16(int * p_17, unsigned p_18, unsigned p_19)
{
    struct S0 l_473 = {5L,0x57L,-1L,1UL,0x50DBL,8UL,1UL,0x235C6B1BL,0xEE8E5379L,1UL};
    struct S0 *l_474 = &g_88;
    int **l_475 = (void*)0;
    int **l_476 = (void*)0;
    int **l_477 = &g_75;
    short *l_482 = (void*)0;
    unsigned char *l_483 = &l_473.f1;
    unsigned *l_484 = &l_473.f3;
    char *l_485 = &g_73;
    char *l_486 = &g_164;
    int l_487 = (-9L);
    (*l_474) = l_473;
    (*l_477) = &g_210;
    (*l_477) = p_17;
    return (*g_94);
}







static int * func_20(unsigned short p_21, unsigned short p_22)
{
    unsigned l_444 = 0xA0E8362BL;
    int *l_445 = (void*)0;
    unsigned char *l_451 = &g_88.f1;
    struct S0 l_459 = {0x4D3533CDL,0x0BL,-3L,0x48732D33L,0xDCB6L,0UL,0xD7A7D4E1L,0x64805D4FL,8L,0x6234L};
    int l_463 = 0x1A099435L;
    unsigned *l_466 = (void*)0;
    unsigned **l_465 = &l_466;
    unsigned short *l_469 = &l_459.f5;
    unsigned short *l_470 = &l_459.f9;
    int *l_471 = &g_210;
    if ((safe_add_func_int32_t_s_s((safe_sub_func_uint8_t_u_u(247UL, p_21)), (((safe_unary_minus_func_uint32_t_u(((*g_277) > ((((safe_rshift_func_int16_t_s_s(0L, (*g_94))) < 0xFEA3L) <= p_22) != (l_444 != (0x29L & (*g_233))))))) >= p_21) | 0x2432L))))
    {
        int **l_446 = &g_75;
        unsigned char *l_452 = &g_88.f1;
        unsigned ***l_454 = &g_276;
        unsigned ****l_453 = &l_454;
        struct S0 l_457 = {-1L,6UL,-9L,0x0D733A2CL,5UL,0UL,0x8C2A2C82L,0xCFCAF782L,0xF1843BA7L,1UL};
        short *l_458 = &g_45;
        (*l_446) = l_445;
        (*l_446) = &g_66;
        for (g_235 = 0; (g_235 == 9); g_235++)
        {
            if (p_22)
                break;
            if (p_21)
            {
                struct S0 *l_460 = (void*)0;
                struct S0 *l_461 = &l_459;
                l_457 = l_457;
                (**l_446) = (*g_75);
                (*l_461) = l_459;
            }
            else
            {
                struct S0 *l_462 = &g_88;
                (*g_382) = l_462;
            }
            l_463 = 0x9CF6B4F6L;
        }
        (*l_446) = &g_66;
    }
    else
    {
        int **l_464 = &g_75;
        (*l_464) = (void*)0;
    }
    g_210 = (&g_262 == ((*l_465) = l_445));
    (*l_471) = ((*g_94) || ((*l_470) = ((*l_469) = (safe_lshift_func_uint16_t_u_u(((*g_275) & (l_459.f4 <= (0xD6119B08L == (**g_276)))), 11)))));
    return &g_210;
}







static unsigned short func_23(int * p_24, int p_25, int * p_26, int * p_27, int * p_28)
{
    unsigned char **l_293 = (void*)0;
    struct S0 l_295 = {-1L,2UL,0L,0xF0B190B9L,0xC8A6L,2UL,5UL,0xC998A2E6L,2L,5UL};
    char l_296 = 0x2CL;
    int l_301 = 7L;
    int l_318 = (-1L);
    unsigned char l_356 = 0UL;
    char l_378 = (-1L);
    unsigned l_385 = 0x5990B607L;
    struct S0 l_386 = {0L,0xB6L,0x9C6C137AL,0x457048CEL,0xE4D3L,0x8447L,4294967295UL,0xD8AB89E9L,-4L,4UL};
    char *l_394 = &g_164;
    char **l_393 = &l_394;
    char **l_401 = &l_394;
    unsigned *l_425 = &l_386.f6;
    unsigned **l_433 = &g_277;
    struct S0 *l_434 = &l_295;
    if (((void*)0 != l_293))
    {
        struct S0 l_294 = {-10L,252UL,0xF7BA14FAL,4294967294UL,65534UL,65535UL,1UL,1L,0x6B8C3321L,0x787AL};
        int *l_302 = &l_301;
        int **l_303 = &l_302;
        unsigned char **l_308 = &g_233;
        l_295 = l_294;
        (*l_303) = l_302;
        (*l_303) = &g_66;
        g_66 = (p_25 != ((((3L & ((safe_rshift_func_uint16_t_u_s((+((((safe_add_func_uint16_t_u_u(((&g_233 == l_308) >= ((&p_25 != &p_25) > 0xC1DAE7D1L)), (*g_94))) ^ (!(**l_303))) == g_235) ^ (*p_24))), (*g_94))) | 7UL)) ^ 0xE116L) <= 0x5DL) < p_25));
    }
    else
    {
        struct S0 l_309 = {-8L,0UL,0xBF9C21C5L,4294967290UL,0x67A0L,65531UL,0xB06B825BL,-1L,-2L,0x49ADL};
        int **l_310 = &g_75;
        unsigned short l_311 = 0UL;
        unsigned char l_316 = 1UL;
        short *l_373 = (void*)0;
        short l_376 = 0x5919L;
        unsigned char l_421 = 0x7BL;
        int l_422 = 0L;
        (*g_87) = l_309;
        (*l_310) = &p_25;
        if (l_311)
        {
            unsigned char l_317 = 250UL;
            unsigned short *l_319 = &l_309.f5;
            if ((safe_sub_func_uint16_t_u_u((safe_add_func_int32_t_s_s(0x736F6583L, (l_317 != l_317))), (l_295.f9 < ((*l_319) = l_318)))))
            {
                unsigned char l_338 = 0UL;
                int l_349 = 8L;
                if ((&g_277 != &g_277))
                {
                    unsigned *l_320 = &g_262;
                    (*l_310) = l_320;
                }
                else
                {
                    short l_331 = 0xB37FL;
                    unsigned char *l_339 = &l_295.f1;
                    int l_348 = (-1L);
                    for (l_309.f6 = (-19); (l_309.f6 < 5); l_309.f6++)
                    {
                        (*l_310) = &g_210;
                        (*l_310) = &g_66;
                        (*g_75) = (*g_75);
                        if ((*p_26))
                            continue;
                    }
                    if (((safe_sub_func_int32_t_s_s(0xC5459F6FL, ((safe_lshift_func_uint8_t_u_u(((*g_233) = (p_25 ^ (p_25 || 255UL))), ((*l_339) = (((void*)0 == &l_331) | (g_88.f4 = (safe_lshift_func_uint8_t_u_s(l_338, 5))))))) != (safe_mod_func_uint32_t_u_u(4294967295UL, l_317))))) == p_25))
                    {
                        struct S0 l_342 = {0L,255UL,0x864273B3L,0xDBE0A52FL,0xC25AL,0x0ACDL,0x12F5D233L,0xDB3FD751L,0x76652550L,0x3DB0L};
                        l_342 = l_342;
                        (*l_310) = &p_25;
                        (*l_310) = &g_66;
                    }
                    else
                    {
                        unsigned l_347 = 0xC01637A7L;
                        (**l_310) = (safe_add_func_int16_t_s_s(((*g_94) = l_347), (**l_310)));
                        (*l_310) = (void*)0;
                    }
                    l_349 = ((0x754564A2L == (((-1L) == ((p_25 & l_317) <= ((*p_27) = ((*g_94) <= l_317)))) == (255UL ^ (l_348 = g_164)))) <= g_235);
                }
                (*p_27) = 0xE403E406L;
                for (l_301 = (-26); (l_301 >= (-10)); l_301 = safe_add_func_int8_t_s_s(l_301, 9))
                {
                    (*l_310) = &p_25;
                }
                g_75 = &p_25;
            }
            else
            {
                unsigned short l_354 = 65535UL;
                (**l_310) = (((void*)0 == &g_262) > p_25);
                for (l_309.f5 = (-9); (l_309.f5 == 9); l_309.f5++)
                {
                    (*p_24) = (p_25 & ((((g_11 | (p_25 == p_25)) | 1L) <= l_354) & p_25));
                }
            }
        }
        else
        {
            short *l_355 = (void*)0;
            int l_377 = 7L;
            char **l_395 = &l_394;
            unsigned char **l_410 = (void*)0;
            unsigned ***l_415 = &g_276;
            unsigned *l_426 = &g_262;
            int *l_429 = &l_318;
            if (((*g_94) != 0L))
            {
                (*p_26) = (*g_75);
            }
            else
            {
                int *l_380 = &l_301;
                struct S0 **l_381 = &g_87;
                struct S0 l_384 = {0x6A16CEA2L,249UL,1L,0x05EC8F20L,1UL,0UL,4294967287UL,-1L,-8L,0xD760L};
                (*p_24) = (*p_27);
                l_380 = &p_25;
                if (((g_382 = l_381) == &g_87))
                {
                    struct S0 *l_383 = &g_88;
                    (*l_381) = l_383;
                    (*l_310) = &g_210;
                    (*l_383) = l_384;
                }
                else
                {
                    char **l_400 = &l_394;
                    unsigned short *l_420 = &l_386.f4;
                    if (l_385)
                    {
                        (**l_381) = l_295;
                        (*g_87) = l_386;
                    }
                    else
                    {
                        char ***l_396 = &g_131;
                        char ***l_397 = (void*)0;
                        char ***l_398 = (void*)0;
                        char ***l_399 = &g_131;
                        (*p_27) = (safe_lshift_func_int16_t_s_s((safe_div_func_uint8_t_u_u(2UL, (safe_div_func_uint32_t_u_u((((*g_233) = (l_393 != (l_401 = (l_400 = l_395)))) == ((*l_380) < (((**l_310) > p_25) <= (safe_sub_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_s((safe_mod_func_uint32_t_u_u(((*g_277) = (!(((safe_sub_func_uint32_t_u_u((65535UL != (*g_94)), (l_410 == &g_233))) > (-1L)) >= 1UL))), 4L)), 2)), 0x2A9F0731L))))), 1UL)))), 9));
                    }
                    (*l_380) = (*p_27);
                    (*g_75) = (safe_div_func_uint32_t_u_u(p_25, ((((*g_233) = ((0x4B91443FL ^ l_295.f1) > ((l_415 != (void*)0) >= (4UL ^ ((safe_mod_func_uint16_t_u_u(((*l_420) = (safe_sub_func_int16_t_s_s(p_25, (&l_311 != &g_379)))), 0x263AL)) <= 0L))))) > 255UL) && l_385)));
                }
                (*p_24) = ((~l_421) ^ g_78);
            }
            (*l_310) = (p_24 = &g_66);
            if (((*p_24) = (p_25 >= (((*g_233) = 255UL) < ((g_66 > (((**g_276) = ((l_422 != (safe_rshift_func_int16_t_s_u(((l_425 == l_426) && (safe_add_func_uint8_t_u_u(((((*l_429) = ((*p_26) = (l_377 ^ ((l_386.f1 & (p_25 == p_25)) ^ g_88.f5)))) > (*g_75)) || 4294967295UL), 0xC1L))), 10))) >= (-1L))) != (*g_75))) & 0x66L)))))
            {
                (*p_26) = (l_429 == (void*)0);
                (*l_310) = (*l_310);
                if (l_318)
                {
                    unsigned short *l_432 = &g_88.f4;
                    (*l_310) = (*l_310);
                }
                else
                {
                    (*g_382) = &l_295;
                }
            }
            else
            {
                (*l_415) = l_433;
            }
        }
        return g_88.f2;
    }
    (*l_434) = ((**g_382) = l_295);
    return g_164;
}







static int * func_29(unsigned p_30, unsigned char p_31, unsigned short p_32)
{
    unsigned l_42 = 4294967290UL;
    unsigned l_43 = 4294967295UL;
    short *l_44 = &g_45;
    int l_213 = 0x00169846L;
    struct S0 l_237 = {0xD56AB969L,0x6FL,5L,5UL,0x2E35L,0xED16L,4UL,0L,-2L,0x6BBEL};
    unsigned *l_264 = &l_42;
    unsigned **l_263 = &l_264;
    char ****l_287 = &g_185;
    struct S0 **l_290 = &g_87;
    int l_291 = 0x4B2F69E9L;
    int *l_292 = (void*)0;
    if ((safe_rshift_func_uint8_t_u_u(l_42, (((*l_44) = l_43) && g_45))))
    {
        int *l_65 = &g_66;
        struct S0 l_74 = {5L,255UL,0L,3UL,0x1843L,0xBB57L,4294967293UL,1L,0x7E410F71L,0x50D5L};
        unsigned l_246 = 1UL;
        unsigned char l_249 = 0UL;
        short *l_255 = &g_45;
        unsigned *l_288 = &l_74.f3;
        int *l_289 = &l_213;
        for (p_32 = 0; (p_32 >= 5); p_32++)
        {
            unsigned *l_72 = &l_42;
            unsigned short l_95 = 0xE0A7L;
            struct S0 *l_222 = (void*)0;
            int l_234 = (-4L);
            char *l_243 = &g_164;
            char **l_242 = &l_243;
            unsigned short *l_250 = (void*)0;
            unsigned short *l_251 = &l_74.f5;
            short *l_256 = &g_45;
            int *l_261 = &g_66;
        }
        (*l_289) = (safe_mod_func_uint32_t_u_u((safe_add_func_uint16_t_u_u(g_88.f6, (g_88.f2 >= (safe_rshift_func_int8_t_s_u(0x11L, 7))))), (((*g_277) <= ((*l_288) = ((*g_275) = ((*l_264) = ((l_287 != (void*)0) != (((*g_107) || ((*g_75) = (-9L))) && (&l_237 != &l_74))))))) | 0UL)));
    }
    else
    {
        l_213 = func_54(&g_11, (l_290 != &g_87), (*g_75), (**g_276));
    }
    l_213 = l_291;
    g_75 = &l_213;
    return &g_66;
}







static int func_54(short * p_55, unsigned char p_56, int p_57, unsigned p_58)
{
    char *l_98 = &g_73;
    int l_99 = 0x6224A103L;
    struct S0 l_120 = {0xA980D529L,246UL,0xA5ABFD0BL,0x8A1103C6L,65534UL,0xE8BCL,4294967295UL,-1L,6L,65535UL};
    int *l_130 = &l_99;
    char ****l_186 = &g_185;
    int **l_201 = &g_107;
    if (((safe_add_func_uint32_t_u_u((l_98 == &g_73), l_99)) ^ 0x894BL))
    {
        int *l_100 = &l_99;
        char *l_115 = (void*)0;
        unsigned l_116 = 0x9E842908L;
        unsigned *l_123 = &l_120.f3;
        unsigned **l_122 = &l_123;
        unsigned ***l_121 = &l_122;
        char ***l_142 = &g_131;
        struct S0 l_157 = {1L,0xB4L,0xB50DB93FL,4294967288UL,0x617CL,0x2CAAL,0x7E9AD554L,0x1A662571L,-1L,65529UL};
        (*l_100) = ((*g_75) = p_57);
        if (l_99)
        {
            for (g_88.f6 = (-26); (g_88.f6 >= 37); ++g_88.f6)
            {
                unsigned l_112 = 0x0B167AC4L;
                struct S0 l_119 = {0x2562E968L,1UL,0L,0xF5D8E54FL,0x1927L,0x6A81L,0x3A0DB06FL,0xC0CD63D7L,0x5F07B865L,9UL};
                for (g_45 = 0; (g_45 != (-15)); g_45--)
                {
                    unsigned char *l_105 = &g_88.f1;
                    int **l_106 = &g_75;
                    (*g_75) = (((*l_105) = 0xEBL) > 0L);
                    (*l_106) = &g_66;
                    (*l_106) = g_107;
                }
                for (g_88.f9 = (-6); (g_88.f9 > 25); g_88.f9 = safe_add_func_int32_t_s_s(g_88.f9, 8))
                {
                    if (((safe_add_func_uint32_t_u_u(l_112, 0x544DDB76L)) != ((((safe_add_func_uint16_t_u_u(((void*)0 == l_115), p_57)) <= g_88.f9) < p_56) || l_116)))
                    {
                        int **l_117 = &g_107;
                        (*g_107) = p_57;
                        (*l_117) = (void*)0;
                        (*g_75) = (*g_75);
                        (*l_117) = &p_57;
                    }
                    else
                    {
                        int **l_118 = &g_75;
                        if (p_57)
                            break;
                        (*l_118) = &p_57;
                    }
                    l_120 = l_119;
                }
                (*g_75) = 0L;
            }
        }
        else
        {
            char l_128 = (-1L);
            char ***l_141 = (void*)0;
            int *l_145 = (void*)0;
            unsigned char l_163 = 9UL;
            if ((g_88.f0 == 0x8DL))
            {
                unsigned ***l_124 = (void*)0;
                int l_138 = (-3L);
                if ((l_121 == l_124))
                {
                    if ((0xD9AFL < (0x3FC00924L | ((*g_107) & (-10L)))))
                    {
                        int **l_125 = (void*)0;
                        int **l_126 = &g_107;
                        (*l_126) = (void*)0;
                    }
                    else
                    {
                        int *l_127 = &l_99;
                        l_127 = &g_66;
                        return l_128;
                    }
                }
                else
                {
                    char l_129 = 8L;
                    struct S0 *l_139 = &l_120;
                    char ****l_143 = (void*)0;
                    char ****l_144 = &l_142;
                    if (p_56)
                    {
                        char ***l_132 = &g_131;
                        (*g_75) = l_129;
                        l_130 = &p_57;
                        (*l_132) = g_131;
                    }
                    else
                    {
                        int **l_133 = &g_75;
                        (*l_133) = (void*)0;
                    }
                    if (((*l_130) = (safe_div_func_int8_t_s_s(((safe_lshift_func_uint8_t_u_s(0xC6L, 6)) || (p_56 > g_11)), g_45))))
                    {
                        return l_138;
                    }
                    else
                    {
                        struct S0 **l_140 = &l_139;
                        (*l_140) = l_139;
                        (*l_100) = p_58;
                        (*l_140) = (void*)0;
                    }
                    if ((l_141 != ((*l_144) = l_142)))
                    {
                        l_138 = ((*g_107) = ((*l_100) = (*l_130)));
                        g_75 = l_145;
                        l_100 = &g_66;
                    }
                    else
                    {
                        int **l_146 = &g_107;
                        (*l_146) = &g_66;
                        (*l_146) = &p_57;
                    }
                }
                return p_58;
            }
            else
            {
                short l_151 = 4L;
                char **l_155 = &l_98;
                int **l_156 = &l_130;
                (*l_130) = (*g_107);
                if (((*g_75) = p_56))
                {
                    int **l_147 = &g_75;
                    int **l_148 = &l_100;
                    (*l_148) = ((*l_147) = (void*)0);
                    for (l_120.f2 = 25; (l_120.f2 != 12); l_120.f2 = safe_sub_func_uint16_t_u_u(l_120.f2, 8))
                    {
                        g_107 = ((*l_147) = &p_57);
                        (*l_130) = ((*g_75) = (6L > (l_151 == 0xD10AL)));
                        if ((*g_107))
                            break;
                    }
                }
                else
                {
                    int **l_152 = &g_75;
                    (*g_107) = 1L;
                    g_75 = &p_57;
                    (*l_152) = &g_66;
                    for (p_58 = 0; (p_58 != 2); p_58++)
                    {
                        (*l_142) = l_155;
                        (*l_130) = p_57;
                    }
                }
                (*l_156) = &p_57;
            }
            l_157 = (*g_87);
            if (p_56)
            {
                int **l_158 = &g_107;
                (*l_158) = &p_57;
                (**l_158) = (*g_107);
            }
            else
            {
                int **l_159 = (void*)0;
                int **l_160 = &g_75;
                (*l_160) = l_145;
            }
            if ((safe_lshift_func_uint8_t_u_u(l_163, g_164)))
            {
                int **l_165 = &l_130;
                struct S0 l_166 = {0x8165E96AL,0xB7L,0x3AE84E38L,0UL,65528UL,0x8F73L,4294967295UL,1L,1L,0UL};
                (*l_165) = l_100;
                l_166 = l_157;
            }
            else
            {
                struct S0 l_168 = {0xF98853BCL,247UL,7L,0x47D6BF53L,0xCC87L,0x9332L,0xA1A25AEDL,0x211E9822L,0x916BB261L,0x9612L};
                if ((*g_107))
                {
                    int **l_167 = &l_100;
                    struct S0 *l_169 = &l_157;
                    (*l_167) = &p_57;
                    (*l_169) = ((*g_87) = l_168);
                    for (p_56 = 0; (p_56 > 59); p_56 = safe_add_func_uint32_t_u_u(p_56, 9))
                    {
                        return p_57;
                    }
                }
                else
                {
                    int **l_179 = &l_145;
                    (*l_130) = p_57;
                    for (l_120.f3 = 0; (l_120.f3 >= 47); l_120.f3 = safe_add_func_int8_t_s_s(l_120.f3, 8))
                    {
                        int **l_174 = (void*)0;
                        int **l_175 = &l_100;
                        (*l_175) = &g_66;
                    }
                    for (l_120.f8 = (-25); (l_120.f8 != (-20)); l_120.f8 = safe_add_func_uint16_t_u_u(l_120.f8, 1))
                    {
                        int **l_178 = &l_145;
                        (*l_178) = (void*)0;
                        (*g_87) = l_120;
                    }
                    (*l_179) = &p_57;
                }
            }
        }
    }
    else
    {
        unsigned *l_191 = &l_120.f3;
        unsigned **l_190 = &l_191;
        unsigned ***l_189 = &l_190;
        int l_198 = (-1L);
        int **l_199 = &g_75;
        if (p_57)
        {
            (*l_130) = p_57;
            (*g_87) = (*g_87);
        }
        else
        {
            unsigned short *l_192 = &l_120.f9;
            char *l_195 = &g_164;
            unsigned char *l_196 = &g_88.f1;
            int l_197 = (-7L);
            (*l_130) = ((*g_75) = (safe_rshift_func_int8_t_s_u(((safe_div_func_int8_t_s_s((g_184 == l_186), ((*l_196) = (safe_add_func_int16_t_s_s((((((*l_192) = (l_189 != (void*)0)) > 0xF70AL) & g_88.f4) && 4294967292UL), (0xCAL & (safe_lshift_func_int8_t_s_u(((*l_195) = ((*l_98) = p_56)), g_88.f1)))))))) ^ l_197), g_88.f3)));
            (*g_107) = l_198;
        }
        (*l_199) = &g_66;
        if (((*g_75) = (-1L)))
        {
            int *l_200 = &g_66;
            (*l_199) = l_200;
        }
        else
        {
            return p_58;
        }
    }
    (*l_201) = &p_57;
    return p_58;
}







static short * func_59(short p_60, int * p_61, short * p_62)
{
    int **l_92 = (void*)0;
    short *l_93 = (void*)0;
    g_75 = p_61;
    return l_93;
}







static short * func_67(unsigned p_68, struct S0 p_69)
{
    unsigned *l_77 = &g_78;
    unsigned **l_76 = &l_77;
    unsigned ***l_79 = &l_76;
    struct S0 l_80 = {1L,0xD9L,1L,1UL,0x2A1BL,0x3346L,0xEB7F0427L,-8L,-1L,6UL};
    struct S0 *l_81 = &l_80;
    g_75 = (void*)0;
    (*l_79) = l_76;
    (*l_81) = l_80;
    for (p_69.f8 = (-30); (p_69.f8 <= 1); p_69.f8 = safe_add_func_uint8_t_u_u(p_69.f8, 2))
    {
        int l_86 = 0x0CD947E9L;
        char *l_89 = &g_73;
        int l_90 = 0x85D54DBCL;
        int **l_91 = &g_75;
        l_90 = (((safe_lshift_func_int16_t_s_u(g_78, 13)) | (l_86 > (((void*)0 == g_87) | g_88.f5))) && ((*l_89) = ((void*)0 == (**l_79))));
        (*l_91) = &l_90;
    }
    return &g_11;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_11, "g_11", print_hash_value);
    transparent_crc(g_45, "g_45", print_hash_value);
    transparent_crc(g_66, "g_66", print_hash_value);
    transparent_crc(g_73, "g_73", print_hash_value);
    transparent_crc(g_78, "g_78", print_hash_value);
    transparent_crc(g_88.f0, "g_88.f0", print_hash_value);
    transparent_crc(g_88.f1, "g_88.f1", print_hash_value);
    transparent_crc(g_88.f2, "g_88.f2", print_hash_value);
    transparent_crc(g_88.f3, "g_88.f3", print_hash_value);
    transparent_crc(g_88.f4, "g_88.f4", print_hash_value);
    transparent_crc(g_88.f5, "g_88.f5", print_hash_value);
    transparent_crc(g_88.f6, "g_88.f6", print_hash_value);
    transparent_crc(g_88.f7, "g_88.f7", print_hash_value);
    transparent_crc(g_88.f8, "g_88.f8", print_hash_value);
    transparent_crc(g_88.f9, "g_88.f9", print_hash_value);
    transparent_crc(g_164, "g_164", print_hash_value);
    transparent_crc(g_210, "g_210", print_hash_value);
    transparent_crc(g_235, "g_235", print_hash_value);
    transparent_crc(g_262, "g_262", print_hash_value);
    transparent_crc(g_379, "g_379", print_hash_value);
    transparent_crc(g_565, "g_565", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
