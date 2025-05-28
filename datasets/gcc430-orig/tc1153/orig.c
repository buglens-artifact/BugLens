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



static volatile int g_2 = (-1L);
static volatile int g_3 = 1L;
static volatile int g_4 = 6L;
static int g_5 = 0x4F46DB50L;
static unsigned char g_53 = 255UL;
static volatile unsigned char *g_64 = (void*)0;
static unsigned char g_67 = 0xC8L;
static unsigned char *g_66 = &g_67;
static int g_84 = 1L;
static int g_89 = 3L;
static unsigned g_130 = 0x7EDEBCD5L;
static unsigned g_132 = 0x23AA3630L;
static unsigned short g_157 = 65530UL;
static unsigned char g_167 = 7UL;
static int *g_173 = &g_84;
static unsigned *g_179 = &g_132;
static unsigned **g_178 = &g_179;
static char g_187 = 7L;
static short g_251 = (-3L);
static unsigned g_323 = 0xF2695843L;
static int g_334 = 0xE035A3E3L;
static char g_354 = 0x55L;
static unsigned char g_361 = 253UL;
static const int g_418 = 0L;
static const int *g_445 = &g_84;
static const char *g_449 = &g_354;
static const char **g_448 = &g_449;
static char *g_454 = &g_354;
static char **g_453 = &g_454;
static unsigned ***g_464 = &g_178;
static unsigned ****g_463 = &g_464;
static volatile unsigned short g_488 = 0xCB72L;
static volatile unsigned short *g_487 = &g_488;
static unsigned short g_512 = 0x7628L;
static short g_517 = (-2L);
static unsigned char g_584 = 8UL;
static volatile int *g_615 = &g_2;
static unsigned char **g_682 = &g_66;
static unsigned char **g_683 = &g_66;



static unsigned func_1(void);
static short func_14(char p_15, unsigned char p_16);
static unsigned char func_17(unsigned p_18, int p_19, short p_20);
static int func_25(unsigned short p_26);
static int func_27(unsigned p_28, unsigned short p_29, unsigned char p_30, char p_31);
static unsigned func_38(unsigned char p_39, unsigned p_40);
static unsigned char func_43(int p_44);
static unsigned char func_56(int p_57, short p_58, short p_59, char p_60);
static int func_61(short p_62, unsigned char * p_63);
static int * func_68(const int * p_69, int p_70, int p_71, int * p_72);
static unsigned func_1(void)
{
    short l_605 = 4L;
    char **l_609 = (void*)0;
    int l_669 = 0x540C17C1L;
    unsigned l_670 = 0UL;
    int **l_672 = &g_173;
    unsigned char l_714 = 0x91L;
    for (g_5 = (-28); (g_5 < 18); g_5 = safe_add_func_int8_t_s_s(g_5, 5))
    {
        unsigned l_582 = 1UL;
        unsigned char *l_583 = &g_584;
        int l_608 = 0xD4160C49L;
        unsigned short l_634 = 65530UL;
        char l_730 = 1L;
    }
    (**l_672) = 0x0F5035BCL;
    (*g_173) = (*g_445);
    return (**l_672);
}







static short func_14(char p_15, unsigned char p_16)
{
    int *l_597 = &g_84;
    int *l_598 = &g_334;
    unsigned char *l_599 = &g_167;
    unsigned short l_602 = 0x7086L;
    volatile int *l_604 = &g_4;
    volatile int **l_603 = &l_604;
    (*l_597) = (-8L);
    (*l_603) = &g_2;
    return p_16;
}







static unsigned char func_17(unsigned p_18, int p_19, short p_20)
{
    int l_587 = 0xE9583856L;
    int *l_588 = (void*)0;
    int *l_589 = (void*)0;
    int *l_590 = &g_84;
    unsigned char *l_591 = &g_361;
    char **l_592 = (void*)0;
    char **l_593 = &g_454;
    int **l_594 = &l_589;
    const int *l_596 = &g_84;
    (*l_590) = ((p_18 = (safe_lshift_func_int16_t_s_u(l_587, 5))) & func_27(l_587, p_19, l_587, (*g_449)));
    (*l_590) = (((*g_179) = p_20) && ((((&g_53 != l_591) | ((((*l_593) = l_591) == l_591) > (+g_84))) > (***g_464)) > p_18));
    (*l_594) = &g_84;
    l_596 = &g_418;
    return p_18;
}







static int func_25(unsigned short p_26)
{
    unsigned short l_47 = 0x955AL;
    unsigned char *l_52 = &g_53;
    int *l_574 = &g_84;
    int l_575 = 0x488DAA7BL;
    short *l_581 = &g_517;
    short **l_580 = &l_581;
    (*l_574) = (!func_27(g_5, ((safe_rshift_func_int8_t_s_s((p_26 < (safe_lshift_func_int16_t_s_s(g_5, 8))), (8UL ^ (safe_lshift_func_int8_t_s_s((((func_38((safe_add_func_uint8_t_u_u(func_43(((safe_rshift_func_uint16_t_u_s(l_47, (safe_add_func_uint32_t_u_u((+(safe_add_func_int8_t_s_s(g_5, ((*l_52) = 0xD0L)))), (safe_div_func_uint32_t_u_u((func_56(p_26, l_47, p_26, g_5) == g_334), l_47)))))) | g_323)), 6UL)), p_26) && 4L) ^ l_47) != g_5), 6))))) | g_5), g_418, p_26));
    (*l_574) = (*l_574);
    return (*l_574);
}







static int func_27(unsigned p_28, unsigned short p_29, unsigned char p_30, char p_31)
{
    int *l_568 = &g_89;
    int l_573 = 0x3858311BL;
    (*l_568) = (p_30 ^ (safe_unary_minus_func_uint16_t_u(0x8F16L)));
    l_573 = ((*l_568) = (safe_sub_func_uint32_t_u_u((g_67 == (*l_568)), (safe_add_func_uint16_t_u_u(((p_28 || (*l_568)) < (*l_568)), (*l_568))))));
    return (*l_568);
}







static unsigned func_38(unsigned char p_39, unsigned p_40)
{
    int *l_557 = &g_89;
    const int **l_558 = &g_445;
    int **l_559 = &l_557;
    short *l_560 = &g_517;
    short *l_561 = &g_251;
    int *l_564 = (void*)0;
    int *l_565 = (void*)0;
    int *l_566 = &g_84;
    (*l_557) = ((void*)0 != &g_454);
    (*l_558) = &g_418;
    (*l_558) = ((*l_559) = (void*)0);
    (*l_566) = (g_53 > p_40);
    return p_39;
}







static unsigned char func_43(int p_44)
{
    unsigned char *l_529 = &g_53;
    const int l_536 = 0xDE88017DL;
    unsigned ** const *l_550 = &g_178;
    int *l_556 = &g_84;
    p_44 = ((0x03L > (&g_67 == l_529)) != (safe_mul_func_uint16_t_u_u(g_67, p_44)));
    p_44 = ((safe_div_func_uint32_t_u_u(4294967287UL, (**g_178))) && (safe_add_func_int32_t_s_s((*g_445), l_536)));
    for (g_354 = 0; (g_354 < (-12)); g_354--)
    {
        unsigned l_539 = 0x58AE6F71L;
        unsigned ** const **l_551 = (void*)0;
        unsigned ** const **l_552 = &l_550;
        g_84 = (((p_44 | ((***g_464) >= l_539)) ^ ((g_187 = (safe_mod_func_uint8_t_u_u(0xDEL, p_44))) >= (safe_mul_func_uint8_t_u_u(((*l_529) = (safe_add_func_uint32_t_u_u(p_44, (safe_sub_func_int16_t_s_s((+g_132), (safe_div_func_int8_t_s_s(((*g_463) == ((*l_552) = l_550)), 0x19L))))))), l_536)))) && 0x4C7D2C49L);
    }
    (*l_556) = (safe_mod_func_uint8_t_u_u(l_536, (safe_unary_minus_func_int32_t_s((-4L)))));
    return g_53;
}







static unsigned char func_56(int p_57, short p_58, short p_59, char p_60)
{
    unsigned char *l_65 = (void*)0;
    unsigned char *l_215 = (void*)0;
    int l_227 = (-1L);
    unsigned l_426 = 0x72399D5EL;
    char *l_452 = &g_354;
    char **l_451 = &l_452;
    int l_455 = (-1L);
    unsigned ***l_458 = &g_178;
    int *l_495 = (void*)0;
    short l_520 = 8L;
    int *l_527 = &l_455;
    int **l_528 = &l_495;
    if (func_61((g_64 == l_65), g_66))
    {
        char *l_200 = &g_187;
        int *l_201 = &g_89;
        int *l_202 = &g_84;
        unsigned short *l_346 = (void*)0;
        unsigned char **l_395 = &l_65;
        if (((*l_202) = ((*l_201) = ((void*)0 != l_200))))
        {
            int l_207 = 0x8C290DB8L;
            unsigned char **l_214 = &g_66;
            int *l_230 = (void*)0;
            int **l_281 = &g_173;
            if ((safe_mod_func_int8_t_s_s(((safe_div_func_uint16_t_u_u(l_207, func_61((safe_lshift_func_int16_t_s_s(g_132, 7)), l_65))) && (safe_sub_func_uint8_t_u_u((safe_div_func_uint16_t_u_u(5UL, ((+l_207) | (((((*l_214) = l_65) != (l_215 = (void*)0)) != (safe_div_func_uint32_t_u_u(4UL, p_57))) || p_60)))), 254UL))), (-1L))))
            {
                unsigned char l_229 = 1UL;
                char * const l_235 = &g_187;
                for (l_207 = 0; (l_207 > 11); l_207 = safe_add_func_uint16_t_u_u(l_207, 9))
                {
                    char l_220 = 0xF3L;
                    unsigned char *l_228 = (void*)0;
                    int l_236 = 0xEFFE84F9L;
                }
            }
            else
            {
                unsigned l_259 = 0UL;
                int *l_260 = &l_227;
                int **l_276 = &l_202;
                for (l_207 = 13; (l_207 == 17); ++l_207)
                {
                    int l_241 = (-1L);
                    const int *l_253 = &g_84;
                    if (((*l_201) = ((l_241 = g_67) & (*l_202))))
                    {
                        unsigned short *l_242 = &g_157;
                        short *l_249 = (void*)0;
                        short *l_250 = &g_251;
                        unsigned l_252 = 0UL;
                        g_173 = &g_84;
                        (*l_201) = ((((((&g_157 != l_242) & (g_167 < (safe_sub_func_uint16_t_u_u(p_60, (safe_mod_func_int32_t_s_s((*g_173), ((safe_rshift_func_int16_t_s_s(((*l_250) = (g_157 != (p_59 > l_227))), ((g_67 & l_227) > l_227))) || (*l_202)))))))) ^ l_252) || (**g_178)) <= (*g_173)) ^ 0x72L);
                        if (l_227)
                            break;
                    }
                    else
                    {
                        const int **l_254 = &l_253;
                        short *l_257 = &g_251;
                        unsigned char *l_258 = &g_167;
                        int **l_261 = &l_230;
                        (*l_261) = l_230;
                    }
                    if ((*l_260))
                        break;
                }
                (*l_260) = (((g_251 <= (safe_lshift_func_int8_t_s_s((safe_rshift_func_int8_t_s_s((safe_mod_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s((safe_sub_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u((*l_260), 9)), l_227)), g_157)), (-8L))), 2)), p_60))) | 0x98L) & (*l_202));
                (*l_276) = (void*)0;
                (*l_201) = (safe_mul_func_uint16_t_u_u(g_167, p_58));
            }
            for (p_60 = 0; (p_60 <= (-30)); p_60 = safe_sub_func_int32_t_s_s(p_60, 2))
            {
                (*l_201) = p_58;
            }
            (*l_281) = l_230;
        }
        else
        {
            int l_324 = 1L;
            unsigned char *l_366 = &g_361;
            int **l_398 = &l_202;
            int *l_401 = &g_84;
            if (((*l_201) = func_61(((safe_div_func_int8_t_s_s(((*g_66) ^ (*l_202)), 255UL)) == ((void*)0 != &g_167)), l_200)))
            {
                unsigned l_288 = 0xDAA4619CL;
                const int *l_309 = (void*)0;
                int l_335 = (-9L);
                int **l_362 = &l_202;
                if (((((*l_202) = p_57) < ((l_227 >= (((safe_rshift_func_int8_t_s_s(((*l_200) = ((!g_132) <= l_227)), (safe_add_func_uint32_t_u_u(l_227, (l_288 = 0x4F8DB93CL))))) && ((*l_201) && (safe_mul_func_uint8_t_u_u(0x63L, (p_58 ^ p_60))))) >= (*l_201))) ^ p_59)) && 0x1CA7L))
                {
                    const int *l_292 = &g_89;
                    const int **l_291 = &l_292;
                    g_173 = l_202;
                    (*l_291) = (void*)0;
                }
                else
                {
                    unsigned l_297 = 7UL;
                    int *l_298 = (void*)0;
                    int **l_299 = (void*)0;
                    int **l_300 = &l_201;
                    if ((*l_202))
                    {
                        (*l_202) = (*g_173);
                        (*l_202) = (safe_mul_func_int16_t_s_s((-1L), ((safe_mul_func_uint16_t_u_u((4294967295UL ^ p_60), (g_157 | ((*l_200) = l_297)))) < 255UL)));
                    }
                    else
                    {
                        (*l_202) = (-4L);
                    }
                    (*l_300) = l_298;
                    g_173 = &g_84;
                }
                (*g_173) = (*g_173);
                if ((safe_mod_func_int8_t_s_s(0xDEL, p_57)))
                {
                    unsigned l_305 = 1UL;
                    (*g_173) = (0xD9L | p_57);
                    for (p_59 = 0; (p_59 != (-8)); --p_59)
                    {
                        int **l_308 = &l_202;
                        const int **l_310 = (void*)0;
                        const int **l_311 = (void*)0;
                        const int **l_312 = &l_309;
                        short *l_321 = (void*)0;
                        short *l_322 = &g_251;
                        unsigned *l_327 = &g_323;
                    }
                }
                else
                {
                    int l_349 = (-1L);
                    int l_352 = 0x3D589764L;
                    char *l_353 = &g_354;
                    (*g_173) = (p_60 & (((safe_lshift_func_int8_t_s_u(((*l_200) = p_58), (safe_sub_func_uint8_t_u_u((safe_sub_func_int8_t_s_s((g_84 != ((safe_lshift_func_uint8_t_u_s(((*g_66) = (safe_mod_func_int8_t_s_s((l_346 == (void*)0), (safe_mul_func_uint8_t_u_u(((l_324 || ((!((l_349 == ((*l_353) = (((safe_add_func_uint8_t_u_u(p_58, (l_352 = 0x9BL))) || p_60) >= l_349))) != 0x8ED0L)) | g_157)) >= l_335), 0xC0L))))), g_84)) & p_60)), 0x28L)), p_57)))) > (*l_202)) <= g_157));
                    (*l_202) = (0UL < ((*g_66) && (safe_div_func_int16_t_s_s(p_60, (safe_div_func_uint32_t_u_u((func_61(g_89, &g_167) & 254UL), (l_324 && (g_361 = (+((safe_mod_func_uint16_t_u_u(0x949DL, 1L)) & g_354))))))))));
                }
                (*l_362) = (void*)0;
            }
            else
            {
                unsigned char *l_363 = &g_167;
                unsigned char **l_364 = (void*)0;
                unsigned char **l_365 = &l_215;
                const short l_380 = 0x65CFL;
                (*l_202) = ((-9L) == func_61((g_323 == (l_363 == ((*l_365) = l_363))), l_366));
                for (p_58 = (-28); (p_58 >= (-21)); p_58++)
                {
                    unsigned short l_369 = 0xFF72L;
                    int *l_370 = &l_324;
                    int **l_371 = &l_370;
                    int **l_372 = &l_201;
                    if (l_369)
                        break;
                    (*l_202) = p_59;
                    (*l_372) = ((*l_371) = l_370);
                    (*l_371) = (void*)0;
                }
                for (l_227 = 0; (l_227 == (-4)); --l_227)
                {
                    char **l_387 = &l_200;
                    unsigned short *l_388 = &g_157;
                    int l_389 = 0xBC523401L;
                    int *l_390 = &g_89;
                    for (g_84 = (-12); (g_84 == 25); g_84++)
                    {
                        int **l_377 = &l_201;
                        (*l_377) = &l_324;
                    }
                    (*l_390) = ((*l_202) = (l_324 = (safe_mul_func_uint8_t_u_u(l_380, ((func_61((safe_div_func_int16_t_s_s((safe_sub_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u(((*l_388) = (l_387 == l_387)), p_59)), (l_389 && (*g_173)))), g_130)), &g_361) != p_57) ^ l_380)))));
                    if ((*g_173))
                    {
                        unsigned char **l_396 = &l_363;
                        int l_397 = 0xC3DDF135L;
                        l_397 = (safe_rshift_func_uint8_t_u_u((((-1L) < (g_334 >= (safe_rshift_func_int8_t_s_u((&g_66 == (l_396 = l_395)), 3)))) && 1L), p_59));
                        return (*g_66);
                    }
                    else
                    {
                        (*l_390) = (*g_173);
                        (*l_201) = ((0x92EE9E64L > (*l_390)) ^ (*g_66));
                    }
                    return p_57;
                }
            }
            (*l_398) = &g_89;
            (*l_401) = ((*l_202) = (((safe_lshift_func_uint16_t_u_u((((*l_200) = (func_61((*l_202), &g_67) != g_361)) & l_227), p_60)) == l_227) == p_58));
        }
    }
    else
    {
        unsigned short l_408 = 0x7377L;
        unsigned char *l_413 = (void*)0;
        int *l_414 = (void*)0;
        int *l_415 = &l_227;
        unsigned char **l_416 = &l_413;
        const int *l_417 = &g_418;
        (*l_415) = (safe_mul_func_uint16_t_u_u(((l_227 > (safe_lshift_func_int8_t_s_u(((safe_lshift_func_uint16_t_u_u(((l_408 = (*g_173)) < ((*g_179) = ((-1L) && 0xF28A0E0DL))), p_58)) || (safe_lshift_func_uint8_t_u_s(((func_61((~func_61((safe_lshift_func_int8_t_s_u(p_59, l_408)), l_413)), &g_361) == g_334) < (-5L)), l_408))), g_334))) && (*g_173)), g_354));
        (*l_415) = p_60;
        l_227 = 0x6D65B00DL;
        if (func_61(p_60, ((*l_416) = l_65)))
        {
            const int *l_419 = &g_5;
            short *l_422 = &g_251;
            int **l_423 = &g_173;
            char **l_429 = (void*)0;
            char *l_431 = &g_354;
            char **l_430 = &l_431;
            char *l_432 = &g_354;
            int l_460 = 7L;
            (*l_423) = func_68(l_419, p_58, (safe_mul_func_int16_t_s_s(((*l_422) = func_61(p_59, &g_67)), 0xD057L)), l_415);
            if ((safe_div_func_int32_t_s_s((l_426 ^ (((*l_432) = ((+(safe_sub_func_int16_t_s_s(g_89, g_334))) <= (+(&g_354 != ((*l_430) = &g_354))))) && (((*l_415) = ((safe_add_func_uint16_t_u_u(((safe_sub_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s((+(safe_sub_func_int8_t_s_s(g_418, (safe_add_func_int32_t_s_s((*g_173), p_60))))), (safe_div_func_uint16_t_u_u((0L && (*l_419)), g_67)))), p_59)) && (*g_173)), 0x46E4L)) | 1L)) || p_57))), (*l_419))))
            {
                return (*g_66);
            }
            else
            {
                g_445 = &g_418;
                if (p_60)
                {
                    const char ***l_450 = &g_448;
                    l_455 = (safe_mod_func_int32_t_s_s(func_61((((*l_450) = g_448) == (g_453 = l_451)), (*l_416)), p_60));
                    return p_58;
                }
                else
                {
                    unsigned ****l_459 = &l_458;
                    l_460 = (((*l_432) = p_59) > ((safe_lshift_func_uint8_t_u_s((p_58 && (((*g_66) > (g_361 = (((*l_459) = l_458) == &g_178))) >= (*l_419))), 3)) || g_67));
                    return l_426;
                }
            }
        }
        else
        {
            char l_486 = (-1L);
            int *l_489 = &g_5;
            unsigned char *l_519 = &g_361;
            int **l_525 = (void*)0;
            int **l_526 = &l_495;
            if ((*g_173))
            {
                unsigned **** const l_465 = &g_464;
                int l_468 = 1L;
                unsigned char *l_478 = &g_67;
                if (((*l_415) = func_61(((safe_lshift_func_int8_t_s_u(((g_463 != l_465) >= p_60), 0)) && (-1L)), &g_361)))
                {
                    unsigned ** const *l_466 = &g_178;
                    unsigned ** const **l_467 = &l_466;
                    l_468 = ((*l_415) = (((*l_467) = l_466) != (void*)0));
                }
                else
                {
                    int l_473 = 0x7A8BFFB3L;
                    unsigned char *l_479 = &g_361;
                    int l_480 = 1L;
                    unsigned *****l_483 = &g_463;
                    int **l_490 = &g_173;
                    l_473 = (safe_add_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u((***g_464), l_468)), p_60));
                    l_480 = func_61((safe_div_func_uint16_t_u_u(p_58, (safe_mod_func_uint16_t_u_u(0x1295L, g_89)))), (l_479 = l_478));
                    (*l_490) = func_68(func_68(func_68(&l_480, p_60, ((*l_415) = ((safe_mul_func_uint16_t_u_u((&g_464 != ((*l_483) = &g_464)), (safe_mul_func_int16_t_s_s(func_61(l_486, (*l_416)), ((void*)0 != g_487))))) != g_354)), l_414), p_60, l_468, l_489), p_57, l_473, &g_5);
                }
            }
            else
            {
                unsigned char l_513 = 0xEEL;
                l_495 = func_68(l_489, ((safe_div_func_uint32_t_u_u((p_60 >= ((void*)0 != &p_59)), p_60)) <= (*g_173)), (safe_lshift_func_uint16_t_u_u((p_60 && (*g_445)), ((p_58 == p_57) && p_60))), &g_84);
                if ((safe_div_func_int8_t_s_s(0xFEL, 0xD3L)))
                {
                    int l_498 = (-1L);
                    int *l_499 = (void*)0;
                    int **l_500 = &l_414;
                    unsigned short *l_503 = &g_157;
                    unsigned short *l_510 = &l_408;
                    unsigned short *l_511 = &g_512;
                    (*l_500) = func_68(l_415, g_334, l_498, l_499);
                    if ((safe_mul_func_int8_t_s_s((((*l_503) = g_130) < (0x9923L != (((**g_453) = (!(safe_mod_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u(0xBE13L, ((*l_511) = ((*l_417) == ((*l_510) = g_130))))), 0xB505L)))) > ((&l_415 != (void*)0) && (0x4FL && l_513))))), (*g_66))))
                    {
                        short *l_516 = &g_517;
                        int l_518 = 0x33E59652L;
                        l_518 = (0x33L || (safe_mod_func_uint16_t_u_u(g_251, ((*l_516) = (-9L)))));
                        (*l_415) = (~func_61(g_167, l_519));
                        (*l_415) = func_61(g_157, &g_67);
                    }
                    else
                    {
                        (*l_415) = (*g_445);
                        (*l_415) = (*g_445);
                        (*l_415) = p_57;
                    }
                }
                else
                {
                    (*l_415) = (*g_445);
                    (*l_415) = l_520;
                }
            }
            if ((*g_445))
            {
                return p_59;
            }
            else
            {
                int *l_523 = (void*)0;
                int *l_524 = &g_89;
                for (l_455 = 12; (l_455 != (-10)); l_455--)
                {
                    (*l_415) = (*g_445);
                }
                (*l_524) = ((*l_415) = func_61(p_58, l_519));
                (*l_415) = (*l_415);
            }
            (*l_526) = &g_5;
        }
    }
    (*l_527) = 0xE9CBC892L;
    (*l_528) = (void*)0;
    return p_58;
}







static int func_61(short p_62, unsigned char * p_63)
{
    const int *l_73 = &g_5;
    int *l_74 = &g_5;
    int **l_174 = (void*)0;
    int **l_175 = &g_173;
    int *l_183 = &g_84;
    char *l_186 = &g_187;
    unsigned l_198 = 0x40C85F22L;
    int *l_199 = &g_89;
    (*l_175) = func_68(l_73, g_67, p_62, l_74);
    for (g_132 = (-19); (g_132 > 29); ++g_132)
    {
        unsigned ***l_180 = &g_178;
        unsigned l_181 = 0UL;
        int *l_182 = &g_84;
        (*l_180) = g_178;
        (*l_182) = l_181;
    }
    (*l_183) = p_62;
    (*l_199) = ((*l_183) = (safe_add_func_int8_t_s_s(((*l_186) = g_67), (((safe_lshift_func_uint16_t_u_u(((((safe_rshift_func_uint16_t_u_u(p_62, 8)) < (**l_175)) ^ (safe_div_func_int8_t_s_s((safe_add_func_int32_t_s_s((-9L), ((*g_66) > (safe_mul_func_uint8_t_u_u(l_198, (p_62 | ((*g_66) & g_67))))))), g_157))) != 0x87L), 5)) >= p_62) | 0UL))));
    return (*l_183);
}







static int * func_68(const int * p_69, int p_70, int p_71, int * p_72)
{
    unsigned l_75 = 4294967293UL;
    int l_126 = 0x61F0846DL;
    unsigned short *l_155 = (void*)0;
    unsigned short *l_156 = &g_157;
    int l_158 = 0x205443EFL;
    unsigned char *l_165 = (void*)0;
    unsigned char *l_166 = &g_167;
    int l_168 = 0x8D59668CL;
    l_75 = g_5;
    for (l_75 = 28; (l_75 >= 7); l_75--)
    {
        int *l_115 = (void*)0;
        int *l_127 = &g_84;
        unsigned *l_128 = (void*)0;
        unsigned *l_129 = &g_130;
        unsigned *l_131 = &g_132;
        for (p_71 = 0; (p_71 == 25); ++p_71)
        {
            unsigned l_93 = 0x6E0AEE48L;
            unsigned char *l_109 = &g_67;
            for (g_67 = 14; (g_67 < 47); ++g_67)
            {
                unsigned l_101 = 4294967287UL;
                unsigned char *l_108 = &g_67;
                int * const l_114 = &g_84;
                for (p_70 = (-8); (p_70 <= 0); ++p_70)
                {
                    char l_90 = 3L;
                    int *l_94 = &g_89;
                    for (g_84 = 20; (g_84 != 7); g_84 = safe_sub_func_int32_t_s_s(g_84, 8))
                    {
                        int **l_87 = (void*)0;
                        int *l_88 = &g_89;
                        l_88 = &p_71;
                        if (l_90)
                            break;
                    }
                    (*l_94) = ((p_70 || (safe_lshift_func_int8_t_s_s(l_93, g_89))) ^ p_70);
                    (*l_94) = (safe_mod_func_int16_t_s_s((safe_add_func_uint8_t_u_u((*l_94), p_70)), p_70));
                    for (l_90 = 0; (l_90 > (-21)); l_90 = safe_sub_func_int16_t_s_s(l_90, 6))
                    {
                        unsigned char **l_110 = &g_66;
                        int l_111 = 0L;
                        (*l_94) = (l_101 <= (safe_mod_func_uint16_t_u_u((l_111 = (safe_sub_func_uint16_t_u_u(g_89, (p_71 == (safe_rshift_func_uint16_t_u_s((l_108 == ((*l_110) = l_109)), 8)))))), p_70)));
                    }
                }
                for (p_70 = 0; (p_70 > (-20)); p_70--)
                {
                    l_115 = l_114;
                }
            }
            if (g_89)
                continue;
        }
        (*l_127) = ((safe_div_func_uint16_t_u_u((safe_div_func_int32_t_s_s((*p_69), 4294967295UL)), (safe_rshift_func_uint16_t_u_s((safe_mul_func_uint16_t_u_u((l_126 = (safe_lshift_func_int16_t_s_u(g_67, 15))), 65533UL)), 10)))) | (*g_66));
        p_72 = &l_126;
        if ((((*l_129) = p_71) ^ ((*l_131) = l_75)))
        {
            int **l_133 = &l_115;
            (*l_133) = l_129;
            (*l_133) = (*l_133);
        }
        else
        {
            if (g_130)
                break;
            for (p_71 = 29; (p_71 != 23); p_71 = safe_sub_func_uint8_t_u_u(p_71, 6))
            {
                int **l_140 = (void*)0;
                int **l_141 = &l_115;
                for (g_130 = (-10); (g_130 != 12); g_130 = safe_add_func_int8_t_s_s(g_130, 6))
                {
                    for (g_67 = 0; (g_67 <= 15); g_67 = safe_add_func_int8_t_s_s(g_67, 6))
                    {
                        (*p_72) = (*p_69);
                    }
                }
                (*l_141) = &g_5;
                for (g_132 = 0; (g_132 == 6); g_132++)
                {
                    short l_144 = 0L;
                    (*p_72) = l_144;
                }
                (*l_141) = &g_84;
            }
            if (g_132)
                break;
        }
    }
    if ((safe_lshift_func_uint8_t_u_u((safe_mul_func_uint32_t_u_u(0x6FFD3C4FL, ((safe_rshift_func_uint8_t_u_u((safe_sub_func_int32_t_s_s(l_126, ((((safe_sub_func_uint16_t_u_u(g_89, ((((*l_156) = g_67) == (l_158 = g_89)) <= (safe_rshift_func_int8_t_s_u((l_126 < (safe_lshift_func_uint8_t_u_s(((safe_div_func_uint8_t_u_u(0UL, ((*l_166) = (g_132 || (0xBE1704BEL | l_126))))) < l_126), 3))), 5))))) > (-4L)) >= 247UL) == l_75))), l_168)) == p_71))), 5)))
    {
        int *l_169 = &l_126;
        int **l_170 = &l_169;
        g_84 = ((*l_169) = (p_71 == g_5));
        (*l_170) = &p_71;
    }
    else
    {
        int *l_172 = &l_126;
        int **l_171 = &l_172;
        (*l_171) = &p_71;
        (**l_171) = 4L;
    }
    g_173 = (void*)0;
    return &g_5;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_53, "g_53", print_hash_value);
    transparent_crc(g_67, "g_67", print_hash_value);
    transparent_crc(g_84, "g_84", print_hash_value);
    transparent_crc(g_89, "g_89", print_hash_value);
    transparent_crc(g_130, "g_130", print_hash_value);
    transparent_crc(g_132, "g_132", print_hash_value);
    transparent_crc(g_157, "g_157", print_hash_value);
    transparent_crc(g_167, "g_167", print_hash_value);
    transparent_crc(g_187, "g_187", print_hash_value);
    transparent_crc(g_251, "g_251", print_hash_value);
    transparent_crc(g_323, "g_323", print_hash_value);
    transparent_crc(g_334, "g_334", print_hash_value);
    transparent_crc(g_354, "g_354", print_hash_value);
    transparent_crc(g_361, "g_361", print_hash_value);
    transparent_crc(g_418, "g_418", print_hash_value);
    transparent_crc(g_488, "g_488", print_hash_value);
    transparent_crc(g_512, "g_512", print_hash_value);
    transparent_crc(g_517, "g_517", print_hash_value);
    transparent_crc(g_584, "g_584", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
