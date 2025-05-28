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
   unsigned f0;
   int f1;
   int f2;
   unsigned char f3;
   short f4;
   unsigned short f5;
   volatile unsigned short f6;
};


static char g_7 = 0xA2L;
static struct S0 g_84 = {8UL,-1L,1L,0x7DL,0xB07DL,0xE19CL,0UL};
static struct S0 g_85 = {0x4175C8FEL,1L,0xABDDA6A1L,1UL,7L,1UL,0UL};
static int * volatile g_102 = (void*)0;
static int * volatile g_104 = &g_84.f1;
static int * volatile g_125 = &g_84.f1;
static int * volatile * volatile g_133 = &g_102;
static int * volatile * volatile *g_132 = &g_133;
static volatile char g_158 = (-8L);
static volatile struct S0 g_165 = {1UL,1L,1L,1UL,0xA25EL,65535UL,65531UL};
static volatile struct S0 * volatile g_166 = &g_165;
static volatile struct S0 * volatile g_167 = &g_165;
static struct S0 g_201 = {1UL,1L,3L,0x0AL,-7L,0xD14FL,0UL};
static struct S0 g_202 = {1UL,0L,-1L,0x2FL,0x5193L,65529UL,0UL};
static volatile struct S0 * volatile g_212 = &g_165;
static volatile struct S0 g_246 = {0x964D273EL,0x89767DC1L,0x7583C812L,3UL,0xD7C7L,4UL,0x25ADL};
static struct S0 *g_247 = (void*)0;
static int * volatile g_254 = &g_84.f1;
static volatile struct S0 g_274 = {0x7E03D5CAL,3L,1L,0xEDL,0x71DCL,0xC969L,0x3AF8L};
static volatile struct S0 * volatile g_275 = &g_274;
static volatile struct S0 g_279 = {0xDC54FBD5L,0x872889E0L,0x171D70ADL,250UL,3L,65534UL,0x8F54L};
static struct S0 g_280 = {0x5F3F9DCEL,0x75E038BCL,0L,9UL,-2L,0xD3D7L,1UL};
static struct S0 g_281 = {0xB11EE237L,0xF68FCF27L,0x2CD24F5EL,255UL,0L,0UL,1UL};
static volatile int g_288 = 1L;
static volatile int *g_287 = &g_288;
static struct S0 ** volatile g_290 = &g_247;
static struct S0 g_313 = {0xE7BD0654L,1L,0x9F86B6F2L,0x5EL,0x9AC8L,65535UL,0x69A9L};
static struct S0 g_374 = {0x9272B44AL,0L,-1L,1UL,0xC955L,7UL,0x7894L};
static volatile struct S0 * volatile *g_403 = (void*)0;
static volatile struct S0 * volatile ** volatile g_402 = &g_403;
static struct S0 **g_409 = &g_247;
static struct S0 *** volatile g_408 = &g_409;
static struct S0 g_412 = {4294967292UL,0L,-5L,0x26L,0x10A3L,0x66AFL,0xC158L};
static struct S0 g_413 = {4294967290UL,9L,0x96B5751DL,253UL,0x1C73L,65533UL,0xEA14L};
static struct S0 * volatile g_437 = &g_84;
static short g_490 = (-1L);
static unsigned g_557 = 4294967295UL;
static struct S0 g_558 = {4294967292UL,-1L,0xFF314164L,0x11L,4L,0x9B70L,0xB2C1L};
static struct S0 g_573 = {0xAE9A9C80L,0xCA05D6CAL,0x3B4F3A10L,0xC3L,-1L,65535UL,0xAF81L};
static struct S0 * volatile g_574 = &g_201;
static volatile struct S0 * volatile g_577 = (void*)0;
static volatile struct S0 * volatile g_578 = &g_165;
static volatile struct S0 g_605 = {0x913A26B8L,0xA1D3BAC4L,0x453B229AL,255UL,-1L,0UL,0x014AL};
static short g_627 = 0x4166L;
static volatile struct S0 g_696 = {7UL,6L,0x03E7B43EL,1UL,0x51E6L,65535UL,9UL};
static struct S0 g_700 = {0x110EF242L,-1L,1L,0x24L,0xB8F0L,0xB495L,0xAADAL};
static struct S0 g_701 = {0xD359603BL,2L,0x516C82FBL,0UL,0xF67DL,0x5E6AL,0xD9BAL};



static int func_1(void);
static unsigned short func_8(int p_9, char p_10, unsigned p_11);
static short func_20(unsigned p_21, short p_22, short p_23, int p_24);
static unsigned short func_29(unsigned p_30, short p_31, int p_32, int p_33);
static unsigned short func_38(short p_39, unsigned p_40, int p_41, int p_42, short p_43);
static int func_44(int p_45);
static unsigned short func_48(unsigned p_49, unsigned p_50, short p_51, unsigned short p_52, unsigned p_53);
static int func_66(short p_67, short p_68, unsigned short p_69, unsigned short p_70);
static struct S0 func_73(unsigned p_74, short p_75);
static unsigned func_76(unsigned p_77, int p_78, int p_79, unsigned short p_80, unsigned char p_81);
static int func_1(void)
{
    unsigned short l_2 = 1UL;
    int *l_708 = &g_701.f1;
    (*g_287) = ((((l_2 >= (l_2 == (safe_lshift_func_uint8_t_u_s((safe_mod_func_uint8_t_u_u(g_7, (((((-10L) == (func_8(g_7, l_2, (g_7 != g_7)) <= g_313.f3)) < l_2) && 1L) & g_700.f5))), 2)))) | g_490) <= g_313.f3) == l_2);


    ;
    ;
    (*g_287) = func_38(g_280.f3, ((void*)0 == &g_409), (*g_104), g_490, func_76((safe_lshift_func_int16_t_s_s(((safe_sub_func_uint8_t_u_u(g_412.f1, l_2)) & (safe_mod_func_int8_t_s_s(l_2, func_76(l_2, l_2, l_2, l_2, l_2)))), 11)), g_85.f3, g_701.f1, g_413.f1, l_2));


    (*g_133) = l_708;

    ;
    return g_701.f0;
}







static unsigned short func_8(int p_9, char p_10, unsigned p_11)
{
    unsigned char l_149 = 7UL;
    struct S0 **l_478 = &g_247;
    int *l_491 = &g_84.f1;
    int l_528 = 3L;
    char l_636 = 0x81L;
    int l_637 = 0xDABA20A0L;
    for (p_9 = 0; (p_9 == (-24)); p_9 = safe_sub_func_uint16_t_u_u(p_9, 2))
    {
        int l_25 = 1L;
        char l_228 = (-3L);
        int *l_471 = &g_201.f1;
        unsigned l_551 = 0x033496D3L;
        unsigned short l_572 = 0x4930L;
        int *l_586 = &g_412.f1;
        struct S0 *l_595 = &g_85;
        int l_622 = 0xD9E01EE1L;
    }
    if (((~(safe_div_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_u(p_11, 5)) == (*l_491)), (*l_491)))) > ((((*g_408) == l_478) <= (func_76(g_627, g_280.f4, (safe_mod_func_int8_t_s_s((safe_lshift_func_int8_t_s_u(((safe_add_func_int32_t_s_s((p_10 <= ((((safe_div_func_int8_t_s_s((&g_403 == &g_409), p_11)) != (*l_491)) <= 1L) < 4294967290UL)), (*l_491))) > (*l_491)), g_413.f2)), p_11)), (*l_491), (*l_491)) ^ l_636)) & (*l_491))))
    {
        struct S0 *l_638 = &g_412;
        int l_648 = 0x3FFBFF17L;
        (**g_132) = (*g_133);
        (*l_638) = func_73(p_10, l_637);
        if (p_9)
        {
            unsigned short l_649 = 0xA127L;
            int l_664 = 0x9CBFE1E8L;
            for (g_84.f2 = 23; (g_84.f2 > 6); g_84.f2 = safe_sub_func_int16_t_s_s(g_84.f2, 9))
            {
                struct S0 *l_665 = &g_281;
                if (p_9)
                {
                    int l_645 = 0x88F53789L;
                    (*g_287) = ((safe_rshift_func_int8_t_s_u(((((*g_408) != l_478) >= (safe_add_func_uint16_t_u_u((l_645 <= (p_9 & g_313.f0)), (safe_rshift_func_uint8_t_u_s(l_648, (+p_9)))))) <= ((func_76(g_280.f2, g_413.f3, p_11, p_10, g_413.f3) != 0xDBL) | p_9)), 5)) == g_413.f5);
                    (**g_132) = (void*)0;

                    ;
                    return l_649;
                }
                else
                {
                    for (g_558.f0 = 0; (g_558.f0 <= 53); g_558.f0 = safe_add_func_uint16_t_u_u(g_558.f0, 5))
                    {
                        (*l_478) = (**g_408);
                    }
                }
                if ((p_10 <= (safe_add_func_int16_t_s_s((!(((((safe_sub_func_int32_t_s_s((safe_add_func_int32_t_s_s(((void*)0 == (*g_133)), g_202.f2)), (0L == ((*l_491) && ((l_648 | (safe_div_func_int8_t_s_s(g_412.f0, l_649))) >= g_201.f3))))) & g_280.f2) >= 0x62L) | 0x49CFL) | (*l_491))), p_10))))
                {
                    for (g_281.f2 = 3; (g_281.f2 == (-30)); g_281.f2 = safe_sub_func_int32_t_s_s(g_281.f2, 1))
                    {
                        l_664 = (*g_125);
                        (*g_133) = &l_528;

                        ;
                        (**g_132) = (*g_133);
                        (**g_132) = (**g_132);
                    }
                    (*g_287) = ((void*)0 != &l_491);
                }
                else
                {
                    (*l_478) = l_665;

                    ;
                    return l_648;


                }
            }

            ;
            (**g_132) = (**g_132);
            (*l_638) = (*l_638);
        }
        else
        {
            (**g_132) = &l_528;

            ;
        }

        ;
        (*g_287) = 0x25B489AFL;
    }
    else
    {
        unsigned l_666 = 0x6BB3DCFDL;
        struct S0 *l_685 = (void*)0;
        if (func_48(p_11, l_666, ((safe_sub_func_uint16_t_u_u(g_413.f6, ((g_85.f0 >= p_11) ^ g_558.f5))) <= (safe_rshift_func_uint16_t_u_s((safe_mod_func_int32_t_s_s(0L, p_11)), 8))), (+g_84.f3), p_9))
        {
            (*l_491) = func_44(p_11);


            return p_9;
        }
        else
        {
            int *l_673 = &g_84.f1;
            if ((*g_287))
            {
                (*g_133) = l_673;

                ;
            }
            else
            {
                int l_674 = 0L;
                if ((*g_254))
                {
                    (*g_125) = ((*l_673) ^ p_10);
                    (*l_673) = (!(((g_374.f2 >= l_674) > (((safe_add_func_uint32_t_u_u(g_412.f6, (safe_rshift_func_int8_t_s_s(p_10, 0)))) | (safe_mul_func_uint8_t_u_u((*l_673), (safe_mul_func_int8_t_s_s((safe_sub_func_int32_t_s_s((*l_491), ((l_685 != (void*)0) <= p_11))), l_674))))) && (*l_491))) | g_374.f5));
                }
                else
                {
                    return g_202.f1;
                }
            }

            ;
        }

        ;
        if ((safe_div_func_uint8_t_u_u(8UL, ((safe_sub_func_uint32_t_u_u(func_20(p_11, ((safe_mul_func_uint8_t_u_u((~(func_20(p_10, l_666, (func_48(p_11, (safe_mul_func_int8_t_s_s(2L, (8UL < func_29(g_280.f0, (((((safe_rshift_func_int16_t_s_s(g_558.f3, g_605.f2)) > 0x2BL) | l_666) > g_557) <= l_666), (*l_491), l_666)))), p_10, p_10, l_666) > (-6L)), l_666) & g_573.f5)), 0xE0L)) < g_573.f3), l_666, p_11), p_11)) | g_412.f1))))
        {
            struct S0 *l_697 = &g_281;
            g_696 = (*g_167);
            (*g_409) = l_697;

            ;
            (*g_133) = (void*)0;

            ;
        }
        else
        {
            for (g_573.f5 = (-25); (g_573.f5 != 19); g_573.f5 = safe_add_func_uint16_t_u_u(g_573.f5, 8))
            {
                g_701 = g_700;
            }
        }


        ;
        ;
        (**g_132) = (void*)0;

        ;
    }

    ;
    ;
    ;
    (*l_491) = ((void*)0 == &l_528);
    return g_557;


}







static short func_20(unsigned p_21, short p_22, short p_23, int p_24)
{
    int l_340 = 0xBE23E90BL;
    int *l_347 = (void*)0;
    int l_398 = 0x939FF2ADL;
    struct S0 **l_407 = &g_247;
    (*g_287) = ((safe_mul_func_int8_t_s_s(func_44(l_340), ((safe_mod_func_int8_t_s_s(l_340, l_340)) ^ (func_76(g_281.f5, (safe_lshift_func_int16_t_s_s(l_340, (l_340 && ((l_340 & (l_347 == g_287)) | 0L)))), p_23, g_313.f3, g_281.f1) == 255UL)))) || p_24);
    if (p_21)
    {
        int l_357 = (-7L);
        unsigned char l_362 = 248UL;
        (*g_287) = func_44(p_21);
        (*g_287) = ((~((safe_rshift_func_uint8_t_u_u(((&g_133 != (void*)0) >= (safe_mod_func_int16_t_s_s(func_66(g_84.f1, (safe_unary_minus_func_int8_t_s((safe_sub_func_int16_t_s_s(5L, (p_23 != p_24))))), ((safe_sub_func_uint8_t_u_u(func_48(l_357, ((safe_lshift_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u(p_21, 7)), 6)) <= p_21), p_23, p_22, g_279.f4), g_280.f4)) && 0x70D1L), p_21), l_362))), 5)) ^ p_24)) || l_357);

        ;
    }
    else
    {
        short l_372 = 0x98B3L;
        struct S0 ***l_410 = &l_407;
        int l_411 = 0x36461E4DL;
        unsigned l_456 = 0UL;
        for (g_202.f3 = 4; (g_202.f3 == 47); g_202.f3 = safe_add_func_uint16_t_u_u(g_202.f3, 4))
        {
            char l_373 = 0xC2L;
            int **l_385 = &l_347;
            int ***l_384 = &l_385;
            for (g_201.f3 = 19; (g_201.f3 == 45); ++g_201.f3)
            {
                struct S0 *l_369 = &g_202;
                (**g_132) = &p_24;

                ;
                for (g_313.f2 = 0; (g_313.f2 > (-2)); g_313.f2 = safe_sub_func_uint32_t_u_u(g_313.f2, 7))
                {
                    struct S0 **l_370 = (void*)0;
                    struct S0 **l_371 = &g_247;
                    (*l_371) = l_369;

                    ;
                    g_374 = func_73(l_372, l_373);
                }
                if ((***g_132))
                    continue;
            }
            if (l_372)
            {
                unsigned short l_388 = 9UL;
                unsigned l_399 = 1UL;
                struct S0 *l_406 = &g_280;
                for (p_24 = 0; (p_24 < (-18)); p_24 = safe_sub_func_int8_t_s_s(p_24, 6))
                {
                    int l_387 = 6L;
                    struct S0 **l_393 = &g_247;
                    if ((!(*g_104)))
                    {
                        struct S0 *l_377 = &g_281;
                        (*l_377) = func_73(l_373, p_23);
                    }
                    else
                    {
                        struct S0 *l_386 = &g_280;
                        (*l_386) = func_73(g_85.f3, (safe_rshift_func_int16_t_s_u(((safe_rshift_func_uint16_t_u_s(g_246.f3, 10)) <= ((safe_add_func_uint32_t_u_u((l_384 != (void*)0), 0x006A17E1L)) == l_372)), 15)));
                        (*g_287) = ((p_22 && (~(l_372 > l_387))) == l_388);
                        (*g_287) = (((~((*g_290) == (void*)0)) != func_76(((safe_sub_func_int8_t_s_s(g_85.f2, (l_388 != (safe_lshift_func_int16_t_s_s((&l_386 != l_393), p_24))))) || ((!(safe_add_func_int8_t_s_s((safe_add_func_uint32_t_u_u(func_76((l_398 > (l_399 != 1L)), l_387, p_22, p_24, g_202.f5), 0UL)), l_399))) <= p_23)), l_387, l_387, p_24, g_281.f2)) < p_23);
                        if ((*g_104))
                            continue;
                    }
                    for (g_84.f5 = (-30); (g_84.f5 == 30); g_84.f5++)
                    {
                        (**g_132) = &p_24;

                        ;
                    }
                    (*g_402) = &g_166;

                    ;
                    for (g_374.f2 = 25; (g_374.f2 > (-13)); --g_374.f2)
                    {
                        if (p_23)
                            break;
                        (*l_393) = l_406;

                        ;
                        (*g_408) = l_407;
                    }
                }
                l_411 = (l_410 == &g_409);
                (*l_385) = (*l_385);
            }
            else
            {
                unsigned char l_418 = 0x2FL;
                g_413 = g_412;
                p_24 = (safe_add_func_uint32_t_u_u(func_76((((safe_lshift_func_int8_t_s_s(l_418, 2)) | (safe_unary_minus_func_uint32_t_u((p_21 != (g_246.f2 ^ 0L))))) > (safe_lshift_func_int8_t_s_s((safe_add_func_int32_t_s_s(6L, (safe_unary_minus_func_int32_t_s((safe_sub_func_uint8_t_u_u((((((safe_mod_func_int8_t_s_s((((~((l_372 < ((g_202.f4 && (safe_mod_func_int32_t_s_s(((((safe_rshift_func_int8_t_s_u((safe_rshift_func_int16_t_s_u(func_76(l_418, l_411, p_21, p_22, g_84.f1), 13)), g_412.f1)) == g_201.f4) ^ (-1L)) <= l_411), p_21))) || 0L)) ^ g_85.f4)) ^ p_24) < 0xBBD7L), p_24)) <= p_21) || g_201.f0) >= 255UL) >= p_23), l_372)))))), 1))), g_280.f1, g_313.f2, g_281.f4, l_418), 0x852D1D08L));
            }
        }


        (*g_287) = ((g_313.f0 == p_22) && g_279.f3);
        for (g_413.f5 = 0; (g_413.f5 > 19); g_413.f5++)
        {
            if ((*g_104))
                break;
            if ((((*g_402) != (void*)0) < ((&g_287 == &l_347) || ((void*)0 != &g_403))))
            {
                short l_450 = 1L;
                (*g_437) = func_73((g_201.f6 & ((-1L) != 0UL)), l_411);
                (**g_132) = l_347;

                ;
                l_450 = ((safe_mod_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u(((safe_rshift_func_uint16_t_u_s(g_7, 5)) < g_201.f1), (safe_sub_func_uint8_t_u_u((safe_sub_func_int8_t_s_s(p_24, ((g_246.f1 || l_411) < 2UL))), ((+l_411) && g_413.f1))))), (safe_sub_func_int8_t_s_s((g_280.f2 <= (-1L)), g_281.f2)))) & 0xCA18L);
                (*g_287) = ((safe_mod_func_int32_t_s_s(l_450, (0x5662L & l_450))) | 0UL);
            }
            else
            {
                unsigned l_453 = 0x9036AB27L;
                if (l_453)
                    break;
                (*g_287) = 0xCAA7F815L;
            }
        }
        (*g_287) = (safe_div_func_int32_t_s_s(func_38((l_411 || l_456), p_24, (safe_sub_func_int32_t_s_s(((safe_div_func_int16_t_s_s(l_411, g_413.f4)) >= (safe_rshift_func_uint8_t_u_u((((safe_sub_func_int8_t_s_s((((((safe_mul_func_uint8_t_u_u(p_21, (safe_div_func_uint8_t_u_u(0UL, (safe_lshift_func_int16_t_s_s(((0xC148EE5AL == func_76((~g_201.f6), p_21, p_23, g_281.f0, l_398)) || g_85.f0), 8)))))) & g_85.f2) && p_21) > p_24) > g_201.f4), 0x25L)) ^ g_201.f5) || l_372), g_374.f4))), (-1L))), l_411, p_23), p_23));


    }


    return g_201.f0;
}







static unsigned short func_29(unsigned p_30, short p_31, int p_32, int p_33)
{
    int *l_249 = (void*)0;
    int *l_250 = (void*)0;
    int l_251 = 6L;
    l_251 = 1L;
    for (g_202.f0 = 0; (g_202.f0 < 32); g_202.f0++)
    {
        (*g_254) = p_32;
        (**g_132) = &p_32;

        ;
    }


    if ((g_165.f1 & 2UL))
    {
        int *l_267 = &g_85.f1;
        unsigned char l_284 = 0x2EL;
        struct S0 *l_289 = &g_85;
        if (p_33)
        {
            for (l_251 = 14; (l_251 != (-16)); l_251 = safe_sub_func_int32_t_s_s(l_251, 7))
            {
                (**g_132) = &p_32;

                ;
                p_32 = (p_32 < (~(safe_sub_func_uint16_t_u_u(g_201.f4, ((safe_mul_func_uint16_t_u_u(func_44(p_30), func_76(p_33, g_201.f2, (safe_mul_func_uint16_t_u_u(func_76(g_85.f4, p_30, p_33, p_32, g_201.f5), p_31)), g_7, g_85.f5))) != 1L)))));


            }
        }
        else
        {
            short l_265 = 0xDBE4L;
            char l_266 = 0x37L;
            int *l_297 = &l_251;
            if (func_66((65529UL > (safe_sub_func_int8_t_s_s(func_44(p_30), (l_265 || 0xC9L)))), l_266, g_85.f5, g_201.f3))
            {
                l_267 = &l_251;

                ;
            }
            else
            {
                (**g_132) = &p_32;

                ;
            }

            ;
            for (g_201.f4 = (-17); (g_201.f4 >= (-12)); ++g_201.f4)
            {
                unsigned l_300 = 0x19A207B8L;
                if ((g_201.f1 <= g_202.f3))
                {
                    if (p_31)
                    {
                        unsigned l_270 = 4294967295UL;
                        l_270 = (*g_125);
                    }
                    else
                    {
                        (*l_267) = (*g_125);
                    }
                    if ((safe_div_func_uint16_t_u_u((!g_202.f2), 65535UL)))
                    {
                        struct S0 **l_273 = &g_247;
                        (**g_132) = l_267;

                        ;
                        (*l_273) = (void*)0;

                        ;
                        if ((*g_254))
                            continue;
                        return p_31;


                    }
                    else
                    {
                        unsigned char l_276 = 0x51L;
                        (*g_275) = g_274;
                        if (l_276)
                            break;
                    }
                    if (p_31)
                        continue;
                    (*l_267) = ((65534UL && (safe_lshift_func_int8_t_s_s(l_266, 7))) <= g_202.f3);
                }
                else
                {
                    (*l_267) = (*l_267);
                    if ((p_30 < ((*g_254) && g_84.f2)))
                    {
                        (*l_267) = (-7L);
                    }
                    else
                    {
                        (**g_132) = &l_251;

                        ;
                        (*g_166) = g_279;
                        g_281 = g_280;
                    }
                    (*l_267) = (((safe_lshift_func_uint8_t_u_u((l_284 | (func_66((safe_mul_func_int8_t_s_s((g_165.f2 > g_280.f3), ((void*)0 != g_287))), g_201.f0, p_33, p_30) >= g_201.f2)), p_31)) && p_32) >= g_85.f0);
                }
                (*g_290) = l_289;

                ;
                (*l_267) = (safe_sub_func_uint32_t_u_u(((safe_mod_func_int16_t_s_s(((safe_add_func_int16_t_s_s((l_297 == (void*)0), 0UL)) || g_165.f2), (safe_add_func_uint16_t_u_u((p_32 >= l_300), g_7)))) | (&g_287 == &g_287)), (*l_267)));
                if (p_32)
                {
                    (*g_287) = (safe_div_func_int8_t_s_s(g_201.f1, ((!(safe_mul_func_int16_t_s_s(0x851BL, g_165.f4))) | ((safe_sub_func_int8_t_s_s(6L, 0L)) < (safe_mod_func_int32_t_s_s((!(*l_297)), g_201.f0))))));
                    if (p_30)
                        continue;
                    for (p_33 = (-21); (p_33 < 5); ++p_33)
                    {
                        (*g_166) = g_313;
                        l_267 = &p_32;

                        ;
                    }
                    (**g_132) = &p_32;

                    ;
                }
                else
                {
                    unsigned char l_320 = 254UL;
                    (**g_132) = &p_32;

                    ;
                    for (g_280.f5 = 0; (g_280.f5 != 7); g_280.f5++)
                    {
                        (**g_132) = (void*)0;

                        ;
                        p_33 = ((((*g_290) == g_247) | (safe_div_func_int32_t_s_s(((((p_32 > l_300) >= ((void*)0 == &p_32)) | (*l_297)) == ((safe_mul_func_uint16_t_u_u(g_84.f0, l_320)) && l_300)), (*l_267)))) < p_33);
                    }

                    ;
                }

                ;
            }


            ;
        }


        ;
        return p_33;


    }
    else
    {
        int *l_321 = &g_313.f1;
        struct S0 *l_324 = &g_281;
        (**g_132) = l_321;

        ;
        (*l_324) = func_73((safe_rshift_func_uint16_t_u_u(g_274.f1, (g_201.f3 == g_7))), g_280.f2);
        for (g_281.f0 = (-14); (g_281.f0 != 9); g_281.f0++)
        {
            (*l_321) = (safe_div_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_u(g_280.f1, 10)), (**g_133)));
        }
        (**g_132) = l_321;
    }

    ;
    for (g_84.f3 = 0; (g_84.f3 == 4); g_84.f3 = safe_add_func_uint16_t_u_u(g_84.f3, 1))
    {
        unsigned l_337 = 0x19678BD9L;
        (***g_132) = (safe_mul_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(0UL, 5L)), g_280.f3));
        if ((*g_254))
            continue;
        (***g_132) = l_337;
        (*g_133) = &p_32;

        ;
    }

    ;
    return p_30;


}







static unsigned short func_38(short p_39, unsigned p_40, int p_41, int p_42, short p_43)
{
    int l_229 = 0x49593A49L;
    int l_232 = 1L;
    int *l_233 = &g_202.f1;
    unsigned char l_248 = 7UL;
    (*g_212) = func_73(l_229, (safe_mod_func_int8_t_s_s(l_229, ((*g_125) && func_66(g_85.f5, (l_229 & (((l_229 & func_66(g_85.f5, p_43, l_229, l_232)) < l_232) || p_40)), g_202.f1, g_202.f5)))));
    (**g_132) = l_233;

    ;
    (**g_132) = &p_41;

    ;
    for (g_201.f0 = 0; (g_201.f0 != 3); g_201.f0 = safe_add_func_int32_t_s_s(g_201.f0, 9))
    {
        int *l_238 = &g_202.f1;
        for (g_201.f4 = 0; (g_201.f4 < (-6)); g_201.f4 = safe_sub_func_int32_t_s_s(g_201.f4, 9))
        {
            unsigned l_239 = 1UL;
        }
        g_246 = (*g_167);
        g_247 = &g_201;

        ;
        return l_248;


    }
    return p_43;


}







static int func_44(int p_45)
{
    int l_159 = 1L;
    int *l_164 = &g_84.f1;
    int **l_163 = &l_164;
    int ***l_162 = &l_163;
    unsigned short l_180 = 0xD1A9L;
    short l_211 = 0L;
    if (((safe_sub_func_int16_t_s_s(((g_158 ^ func_76(p_45, l_159, p_45, (safe_lshift_func_uint16_t_u_u(g_7, p_45)), ((g_85.f0 < p_45) & (func_76((g_132 == l_162), (**l_163), (**l_163), (*l_164), (**l_163)) != p_45)))) || (*l_164)), 0xE1F0L)) >= (*l_164)))
    {
        (*g_166) = g_165;
        (*l_163) = &p_45;

        ;
        return p_45;
    }
    else
    {
        int l_175 = (-5L);
        int l_225 = 0x71171D35L;
        if (((*g_125) == (3UL < 0x52L)))
        {
            (*g_132) = (*g_132);
            (***l_162) = p_45;
            (*g_167) = (*g_166);
        }
        else
        {
            unsigned char l_174 = 0UL;
            unsigned l_181 = 0x2D572512L;
            int *l_203 = &g_202.f1;
            if (((!(((safe_div_func_uint16_t_u_u(((safe_add_func_uint16_t_u_u((func_48((safe_div_func_int8_t_s_s(func_76(g_84.f0, (l_174 == (l_175 == 65532UL)), (*g_104), ((safe_lshift_func_uint8_t_u_s((safe_mod_func_int32_t_s_s((func_76(g_85.f5, g_84.f1, l_180, l_174, l_174) ^ g_84.f4), (-1L))), 2)) || g_84.f4), p_45), 0xC8L)), g_84.f5, l_175, l_181, p_45) ^ (-1L)), p_45)) != g_85.f0), p_45)) | 0xC200L) ^ (***l_162))) || p_45))
            {
                short l_199 = 0L;
                int *l_200 = &g_85.f1;
                int *l_204 = &g_202.f1;
                if (((l_175 == ((void*)0 != &g_133)) && g_85.f6))
                {
                    int l_186 = 0xB977FD1FL;
                    (*l_164) = (safe_div_func_int8_t_s_s(l_186, (safe_mul_func_uint8_t_u_u(255UL, (0x6DL >= (safe_rshift_func_int16_t_s_s((g_85.f3 | p_45), (p_45 || l_174))))))));
                    if ((safe_rshift_func_int8_t_s_s(((((safe_sub_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_s(254UL, 4)), 0xE10D4F07L)) ^ g_84.f1) || (safe_mod_func_int8_t_s_s(g_165.f1, l_186))) ^ l_199), 4)))
                    {
                        (*l_164) = l_175;
                    }
                    else
                    {
                        (**l_163) = (-1L);
                    }
                    (**l_162) = l_200;

                    ;
                }
                else
                {
                    g_202 = g_201;
                }

                ;
                if ((*g_125))
                {
                    (**g_132) = (*g_133);
                    (**g_132) = (*g_133);
                }
                else
                {
                    (***l_162) = 0x21FBBDD6L;
                    (**l_162) = l_203;

                    ;
                    l_204 = l_203;
                    (*g_167) = func_73(p_45, (safe_sub_func_int16_t_s_s(func_66(g_85.f5, g_84.f1, p_45, (safe_mod_func_int32_t_s_s((***l_162), (-7L)))), (safe_add_func_int16_t_s_s(func_76(g_202.f3, ((0x3CB6L < 0x33AEL) || p_45), l_211, g_202.f4, g_202.f3), 0x6622L)))));
                }

                ;
            }
            else
            {
                (**l_162) = &p_45;

                ;
                (*g_212) = (*g_167);
            }

            ;
            ;
            (*l_164) = (safe_sub_func_uint32_t_u_u((l_175 >= (((((&g_85 == (void*)0) | (safe_rshift_func_int16_t_s_s(0x4F28L, 10))) >= (*l_203)) > p_45) | (safe_sub_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u(((safe_mul_func_int8_t_s_s((safe_add_func_uint32_t_u_u(func_66((*l_203), (func_48(p_45, g_201.f4, g_202.f1, g_202.f3, (*l_203)) | p_45), g_84.f2, p_45), p_45)), l_225)) != (*l_203)), p_45)), (*l_203))))), (*l_203)));
            (**g_132) = &l_175;

            ;
            (**l_163) = p_45;
        }


        ;
        (*l_164) = p_45;
        for (l_225 = 29; (l_225 > 1); l_225 = safe_sub_func_uint16_t_u_u(l_225, 8))
        {
            (*l_162) = (*l_162);
        }
    }

    ;
    return p_45;
}







static unsigned short func_48(unsigned p_49, unsigned p_50, short p_51, unsigned short p_52, unsigned p_53)
{
    int *l_150 = (void*)0;
    int *l_155 = &g_85.f1;
    (**g_132) = l_150;

    ;
    (*l_155) = (p_53 > (safe_add_func_uint32_t_u_u((p_49 < (safe_lshift_func_uint8_t_u_u(p_50, 4))), (g_84.f6 < p_49))));
    return (*l_155);
}







static int func_66(short p_67, short p_68, unsigned short p_69, unsigned short p_70)
{
    int l_82 = 1L;
    struct S0 *l_86 = (void*)0;
    struct S0 *l_87 = &g_84;
    int *l_106 = &g_85.f1;
    int **l_105 = &l_106;
    g_84 = func_73(func_76(g_7, g_7, l_82, g_7, g_7), p_69);
    (*l_87) = g_85;
    for (g_85.f1 = 0; (g_85.f1 >= 27); ++g_85.f1)
    {
        unsigned l_94 = 1UL;
        int l_112 = 0x76582894L;
        for (p_70 = 0; (p_70 != 51); p_70 = safe_add_func_uint8_t_u_u(p_70, 5))
        {
            if (g_85.f3)
                break;
            if (g_85.f4)
                break;
            (*l_87) = func_73(g_84.f5, func_76(p_68, func_76(g_84.f2, ((!func_76((safe_add_func_int8_t_s_s(p_69, ((&g_84 != &g_85) ^ 65532UL))), l_82, p_67, g_84.f2, l_82)) | l_94), p_67, p_67, g_85.f1), p_69, l_94, p_68));
        }
        if (g_85.f3)
            continue;
        if (p_69)
        {
            unsigned l_101 = 0x05BEA629L;
            int *l_103 = (void*)0;
            (*g_104) = (p_69 > (safe_sub_func_int32_t_s_s((safe_add_func_int16_t_s_s(g_84.f3, p_70)), ((safe_div_func_uint32_t_u_u(0UL, l_101)) > (!g_84.f2)))));
        }
        else
        {
            int ***l_107 = &l_105;
            g_102 = (void*)0;

            ;
            if (p_68)
                continue;
            (*l_107) = l_105;
            if (p_67)
            {
                int l_123 = 0x3B079467L;
                int *l_124 = (void*)0;
                (*g_125) = ((safe_div_func_uint8_t_u_u(g_84.f4, func_76(((safe_lshift_func_int16_t_s_u(((void*)0 != &g_84), 0)) < ((g_84.f3 <= (l_112 > (*l_106))) && (safe_rshift_func_int8_t_s_u((safe_add_func_uint32_t_u_u(0x97B4E6B2L, (safe_mul_func_int8_t_s_s((safe_add_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_u(p_69, l_94)), 4294967291UL)), l_94)))), 3)))), (***l_107), l_123, g_84.f1, g_85.f3))) ^ g_85.f3);
            }
            else
            {
                for (g_85.f2 = 0; (g_85.f2 == 23); g_85.f2 = safe_add_func_int16_t_s_s(g_85.f2, 6))
                {
                    int ***l_134 = &l_105;
                    (*g_125) = (safe_mod_func_uint8_t_u_u(func_76((safe_rshift_func_uint8_t_u_s(g_7, (g_132 == l_134))), (((safe_mul_func_uint8_t_u_u((safe_add_func_uint32_t_u_u(g_85.f1, (safe_lshift_func_int16_t_s_s(g_84.f0, ((-6L) != (((safe_add_func_int16_t_s_s(func_76(p_68, g_85.f6, (((((safe_mod_func_int32_t_s_s((safe_div_func_uint16_t_u_u((2L | p_67), (-2L))), g_85.f0)) || g_84.f4) | g_85.f2) > 255UL) <= g_85.f3), g_85.f1, g_85.f3), 0x3DF3L)) & g_85.f1) & p_67)))))), g_84.f0)) != (**l_105)) || p_69), p_69, g_84.f3, (**l_105)), 7L));
                }
                if ((*g_104))
                    continue;
                for (g_85.f3 = 15; (g_85.f3 < 6); --g_85.f3)
                {
                    (**g_132) = (*g_133);
                }
            }
        }
    }
    (*l_87) = (*l_87);
    return (**l_105);
}







static struct S0 func_73(unsigned p_74, short p_75)
{
    return g_84;
}







static unsigned func_76(unsigned p_77, int p_78, int p_79, unsigned short p_80, unsigned char p_81)
{
    int l_83 = (-7L);
    return l_83;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_84.f0, "g_84.f0", print_hash_value);
    transparent_crc(g_84.f1, "g_84.f1", print_hash_value);
    transparent_crc(g_84.f2, "g_84.f2", print_hash_value);
    transparent_crc(g_84.f3, "g_84.f3", print_hash_value);
    transparent_crc(g_84.f4, "g_84.f4", print_hash_value);
    transparent_crc(g_84.f5, "g_84.f5", print_hash_value);
    transparent_crc(g_84.f6, "g_84.f6", print_hash_value);
    transparent_crc(g_85.f0, "g_85.f0", print_hash_value);
    transparent_crc(g_85.f1, "g_85.f1", print_hash_value);
    transparent_crc(g_85.f2, "g_85.f2", print_hash_value);
    transparent_crc(g_85.f3, "g_85.f3", print_hash_value);
    transparent_crc(g_85.f4, "g_85.f4", print_hash_value);
    transparent_crc(g_85.f5, "g_85.f5", print_hash_value);
    transparent_crc(g_85.f6, "g_85.f6", print_hash_value);
    transparent_crc(g_158, "g_158", print_hash_value);
    transparent_crc(g_165.f0, "g_165.f0", print_hash_value);
    transparent_crc(g_165.f1, "g_165.f1", print_hash_value);
    transparent_crc(g_165.f2, "g_165.f2", print_hash_value);
    transparent_crc(g_165.f3, "g_165.f3", print_hash_value);
    transparent_crc(g_165.f4, "g_165.f4", print_hash_value);
    transparent_crc(g_165.f5, "g_165.f5", print_hash_value);
    transparent_crc(g_165.f6, "g_165.f6", print_hash_value);
    transparent_crc(g_201.f0, "g_201.f0", print_hash_value);
    transparent_crc(g_201.f1, "g_201.f1", print_hash_value);
    transparent_crc(g_201.f2, "g_201.f2", print_hash_value);
    transparent_crc(g_201.f3, "g_201.f3", print_hash_value);
    transparent_crc(g_201.f4, "g_201.f4", print_hash_value);
    transparent_crc(g_201.f5, "g_201.f5", print_hash_value);
    transparent_crc(g_201.f6, "g_201.f6", print_hash_value);
    transparent_crc(g_202.f0, "g_202.f0", print_hash_value);
    transparent_crc(g_202.f1, "g_202.f1", print_hash_value);
    transparent_crc(g_202.f2, "g_202.f2", print_hash_value);
    transparent_crc(g_202.f3, "g_202.f3", print_hash_value);
    transparent_crc(g_202.f4, "g_202.f4", print_hash_value);
    transparent_crc(g_202.f5, "g_202.f5", print_hash_value);
    transparent_crc(g_202.f6, "g_202.f6", print_hash_value);
    transparent_crc(g_246.f0, "g_246.f0", print_hash_value);
    transparent_crc(g_246.f1, "g_246.f1", print_hash_value);
    transparent_crc(g_246.f2, "g_246.f2", print_hash_value);
    transparent_crc(g_246.f3, "g_246.f3", print_hash_value);
    transparent_crc(g_246.f4, "g_246.f4", print_hash_value);
    transparent_crc(g_246.f5, "g_246.f5", print_hash_value);
    transparent_crc(g_246.f6, "g_246.f6", print_hash_value);
    transparent_crc(g_274.f0, "g_274.f0", print_hash_value);
    transparent_crc(g_274.f1, "g_274.f1", print_hash_value);
    transparent_crc(g_274.f2, "g_274.f2", print_hash_value);
    transparent_crc(g_274.f3, "g_274.f3", print_hash_value);
    transparent_crc(g_274.f4, "g_274.f4", print_hash_value);
    transparent_crc(g_274.f5, "g_274.f5", print_hash_value);
    transparent_crc(g_274.f6, "g_274.f6", print_hash_value);
    transparent_crc(g_279.f0, "g_279.f0", print_hash_value);
    transparent_crc(g_279.f1, "g_279.f1", print_hash_value);
    transparent_crc(g_279.f2, "g_279.f2", print_hash_value);
    transparent_crc(g_279.f3, "g_279.f3", print_hash_value);
    transparent_crc(g_279.f4, "g_279.f4", print_hash_value);
    transparent_crc(g_279.f5, "g_279.f5", print_hash_value);
    transparent_crc(g_279.f6, "g_279.f6", print_hash_value);
    transparent_crc(g_280.f0, "g_280.f0", print_hash_value);
    transparent_crc(g_280.f1, "g_280.f1", print_hash_value);
    transparent_crc(g_280.f2, "g_280.f2", print_hash_value);
    transparent_crc(g_280.f3, "g_280.f3", print_hash_value);
    transparent_crc(g_280.f4, "g_280.f4", print_hash_value);
    transparent_crc(g_280.f5, "g_280.f5", print_hash_value);
    transparent_crc(g_280.f6, "g_280.f6", print_hash_value);
    transparent_crc(g_281.f0, "g_281.f0", print_hash_value);
    transparent_crc(g_281.f1, "g_281.f1", print_hash_value);
    transparent_crc(g_281.f2, "g_281.f2", print_hash_value);
    transparent_crc(g_281.f3, "g_281.f3", print_hash_value);
    transparent_crc(g_281.f4, "g_281.f4", print_hash_value);
    transparent_crc(g_281.f5, "g_281.f5", print_hash_value);
    transparent_crc(g_281.f6, "g_281.f6", print_hash_value);
    transparent_crc(g_288, "g_288", print_hash_value);
    transparent_crc(g_313.f0, "g_313.f0", print_hash_value);
    transparent_crc(g_313.f1, "g_313.f1", print_hash_value);
    transparent_crc(g_313.f2, "g_313.f2", print_hash_value);
    transparent_crc(g_313.f3, "g_313.f3", print_hash_value);
    transparent_crc(g_313.f4, "g_313.f4", print_hash_value);
    transparent_crc(g_313.f5, "g_313.f5", print_hash_value);
    transparent_crc(g_313.f6, "g_313.f6", print_hash_value);
    transparent_crc(g_374.f0, "g_374.f0", print_hash_value);
    transparent_crc(g_374.f1, "g_374.f1", print_hash_value);
    transparent_crc(g_374.f2, "g_374.f2", print_hash_value);
    transparent_crc(g_374.f3, "g_374.f3", print_hash_value);
    transparent_crc(g_374.f4, "g_374.f4", print_hash_value);
    transparent_crc(g_374.f5, "g_374.f5", print_hash_value);
    transparent_crc(g_374.f6, "g_374.f6", print_hash_value);
    transparent_crc(g_412.f0, "g_412.f0", print_hash_value);
    transparent_crc(g_412.f1, "g_412.f1", print_hash_value);
    transparent_crc(g_412.f2, "g_412.f2", print_hash_value);
    transparent_crc(g_412.f3, "g_412.f3", print_hash_value);
    transparent_crc(g_412.f4, "g_412.f4", print_hash_value);
    transparent_crc(g_412.f5, "g_412.f5", print_hash_value);
    transparent_crc(g_412.f6, "g_412.f6", print_hash_value);
    transparent_crc(g_413.f0, "g_413.f0", print_hash_value);
    transparent_crc(g_413.f1, "g_413.f1", print_hash_value);
    transparent_crc(g_413.f2, "g_413.f2", print_hash_value);
    transparent_crc(g_413.f3, "g_413.f3", print_hash_value);
    transparent_crc(g_413.f4, "g_413.f4", print_hash_value);
    transparent_crc(g_413.f5, "g_413.f5", print_hash_value);
    transparent_crc(g_413.f6, "g_413.f6", print_hash_value);
    transparent_crc(g_490, "g_490", print_hash_value);
    transparent_crc(g_557, "g_557", print_hash_value);
    transparent_crc(g_558.f0, "g_558.f0", print_hash_value);
    transparent_crc(g_558.f1, "g_558.f1", print_hash_value);
    transparent_crc(g_558.f2, "g_558.f2", print_hash_value);
    transparent_crc(g_558.f3, "g_558.f3", print_hash_value);
    transparent_crc(g_558.f4, "g_558.f4", print_hash_value);
    transparent_crc(g_558.f5, "g_558.f5", print_hash_value);
    transparent_crc(g_558.f6, "g_558.f6", print_hash_value);
    transparent_crc(g_573.f0, "g_573.f0", print_hash_value);
    transparent_crc(g_573.f1, "g_573.f1", print_hash_value);
    transparent_crc(g_573.f2, "g_573.f2", print_hash_value);
    transparent_crc(g_573.f3, "g_573.f3", print_hash_value);
    transparent_crc(g_573.f4, "g_573.f4", print_hash_value);
    transparent_crc(g_573.f5, "g_573.f5", print_hash_value);
    transparent_crc(g_573.f6, "g_573.f6", print_hash_value);
    transparent_crc(g_605.f0, "g_605.f0", print_hash_value);
    transparent_crc(g_605.f1, "g_605.f1", print_hash_value);
    transparent_crc(g_605.f2, "g_605.f2", print_hash_value);
    transparent_crc(g_605.f3, "g_605.f3", print_hash_value);
    transparent_crc(g_605.f4, "g_605.f4", print_hash_value);
    transparent_crc(g_605.f5, "g_605.f5", print_hash_value);
    transparent_crc(g_605.f6, "g_605.f6", print_hash_value);
    transparent_crc(g_627, "g_627", print_hash_value);
    transparent_crc(g_696.f0, "g_696.f0", print_hash_value);
    transparent_crc(g_696.f1, "g_696.f1", print_hash_value);
    transparent_crc(g_696.f2, "g_696.f2", print_hash_value);
    transparent_crc(g_696.f3, "g_696.f3", print_hash_value);
    transparent_crc(g_696.f4, "g_696.f4", print_hash_value);
    transparent_crc(g_696.f5, "g_696.f5", print_hash_value);
    transparent_crc(g_696.f6, "g_696.f6", print_hash_value);
    transparent_crc(g_700.f0, "g_700.f0", print_hash_value);
    transparent_crc(g_700.f1, "g_700.f1", print_hash_value);
    transparent_crc(g_700.f2, "g_700.f2", print_hash_value);
    transparent_crc(g_700.f3, "g_700.f3", print_hash_value);
    transparent_crc(g_700.f4, "g_700.f4", print_hash_value);
    transparent_crc(g_700.f5, "g_700.f5", print_hash_value);
    transparent_crc(g_700.f6, "g_700.f6", print_hash_value);
    transparent_crc(g_701.f0, "g_701.f0", print_hash_value);
    transparent_crc(g_701.f1, "g_701.f1", print_hash_value);
    transparent_crc(g_701.f2, "g_701.f2", print_hash_value);
    transparent_crc(g_701.f3, "g_701.f3", print_hash_value);
    transparent_crc(g_701.f4, "g_701.f4", print_hash_value);
    transparent_crc(g_701.f5, "g_701.f5", print_hash_value);
    transparent_crc(g_701.f6, "g_701.f6", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
