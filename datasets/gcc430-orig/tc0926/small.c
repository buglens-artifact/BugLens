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
   const unsigned char f0;
   unsigned f1;
   unsigned f2;
   short f3;
};


static char g_27 = 0x86L;
static char g_32 = 9L;
static unsigned short g_37 = 0UL;
static int g_60 = 0L;
static unsigned char g_65 = 0x27L;
static char g_85 = (-1L);
static int g_87 = 0xD34E0BB6L;
static union U0 g_99 = {0UL};
static unsigned char g_134 = 0x88L;
static short g_146 = (-10L);
static unsigned g_155 = 0x0C98A995L;
static const unsigned char g_176 = 0x6DL;
static unsigned short g_191 = 0x2C25L;
static unsigned short g_217 = 0x4F42L;
static int **g_218 = (void*)0;
static char g_224 = 0x54L;
static unsigned short g_227 = 6UL;
static union U0 g_264 = {0UL};
static int g_296 = 9L;
static unsigned char *g_298 = &g_65;
static unsigned char **g_297 = &g_298;
static char g_444 = 1L;
static int *g_489 = &g_87;
static int * const * const g_488 = &g_489;
static char *g_556 = &g_444;
static char **g_555 = &g_556;
static short *g_595 = &g_146;
static short **g_594 = &g_595;
static short ***g_593 = &g_594;
static unsigned char g_607 = 0x36L;
static unsigned short ** const g_620 = (void*)0;
static const int g_643 = 0x9847619DL;
static const int *g_642 = &g_643;
static union U0 *g_660 = (void*)0;
static union U0 **g_659 = &g_660;
static union U0 ***g_658 = &g_659;



static unsigned func_1(void);
static int func_4(char p_5);
static unsigned char func_9(const int p_10, unsigned p_11, union U0 p_12, unsigned char p_13);
static unsigned func_16(unsigned short p_17, int p_18, unsigned p_19, int p_20);
static unsigned short func_21(char p_22, const unsigned p_23, unsigned char p_24, unsigned p_25);
static unsigned char func_28(const unsigned short p_29, int p_30, int p_31);
static int * func_38(unsigned short p_39, const unsigned short * p_40, unsigned short p_41);
static const unsigned short * func_42(unsigned p_43, char p_44);
static union U0 func_45(char * p_46, unsigned short * p_47);
static char * func_49(unsigned p_50, int * const p_51, int * const p_52, char * p_53);
static unsigned func_1(void)
{
    const unsigned l_8 = 0x2086BD08L;
    int l_14 = 0L;
    union U0 l_15 = {3UL};
    char *l_26 = &g_27;
    int l_35 = 0x33F29C8DL;
    unsigned short *l_36 = &g_37;
    int l_619 = 0xE4E511B8L;
    unsigned char l_629 = 1UL;
    const int *l_646 = &l_14;
    unsigned l_669 = 0x2A40DF22L;
    if (((safe_sub_func_uint8_t_u_u((func_4((safe_add_func_int8_t_s_s((l_8 ^ func_9((l_14 ^ l_8), l_14, l_15, (func_16(func_21(((*l_26) = 9L), l_15.f0, func_28((g_32 , ((*l_36) = (safe_rshift_func_int16_t_s_s(l_35, 10)))), g_32, l_14), g_176), l_15.f0, g_444, g_444) , (*g_298)))), 1UL))) > l_35), 7UL)) , (**g_488)))
    {
        int l_558 = 0x8702FF14L;
        int **l_580 = (void*)0;
        g_489 = func_38(g_65, &g_227, ((((l_558 <= l_558) ^ (safe_add_func_uint8_t_u_u((g_155 <= l_35), l_15.f0))) & l_35) , l_15.f0));
        if (l_15.f0)
        {
            const unsigned l_572 = 4294967295UL;
            int *l_584 = &g_60;
            union U0 l_596 = {254UL};
            char l_599 = 0xA0L;
            unsigned l_606 = 4294967295UL;
            unsigned *l_608 = &g_264.f1;
            unsigned *l_609 = &l_15.f2;
            unsigned *l_610 = &l_15.f2;
            unsigned *l_611 = (void*)0;
            unsigned *l_612 = &l_15.f2;
            unsigned *l_613 = &l_596.f1;
            unsigned *l_614 = &l_596.f1;
            unsigned *l_615 = &g_264.f1;
            unsigned *l_616 = &g_264.f2;
            unsigned *l_617 = &l_596.f2;
            unsigned *l_618 = &g_264.f1;
            for (g_146 = 0; (g_146 != 1); g_146 = safe_add_func_uint16_t_u_u(g_146, 1))
            {
                unsigned char *l_571 = (void*)0;
                int *l_575 = (void*)0;
                int *l_576 = &l_14;
                unsigned char *l_581 = &g_134;
                (*l_576) ^= ((safe_lshift_func_uint8_t_u_s(((*g_298) |= 0xBBL), ((**g_555) = ((*g_489) || (+(safe_sub_func_int32_t_s_s(((g_264 , (safe_mod_func_int8_t_s_s((safe_mod_func_uint8_t_u_u((g_264.f0 | ((void*)0 != l_571)), l_572)), (safe_add_func_uint16_t_u_u(func_16((l_558 | l_558), (*g_489), l_35, g_87), 3L))))) != 65535UL), l_572))))))) , l_572);
                (**g_488) = ((*l_576) = (safe_unary_minus_func_uint32_t_u(0x12E19136L)));
                (**g_488) = (g_296 == (safe_mod_func_uint16_t_u_u(((l_558 , func_38(func_21(l_558, func_21((((((**g_297) , (*g_298)) | ((((0x8BL == ((*l_581) = (l_580 == (void*)0))) < (g_444 , (*g_489))) , g_146) <= g_155)) != (-1L)) , (*g_556)), g_32, (*g_298), l_8), (**g_297), g_176), &g_217, l_8)) == &l_14), g_296)));
            }
            (*l_584) = ((**g_488) = (safe_sub_func_uint32_t_u_u(l_8, 0x5B08C5ABL)));
            (*l_584) = (safe_lshift_func_int8_t_s_u((*g_556), ((((safe_sub_func_int8_t_s_s((((safe_lshift_func_int16_t_s_u((safe_lshift_func_int8_t_s_s((*l_584), 5)), (((((void*)0 == g_593) || (*l_584)) < 0x7EFEL) == (((l_596 , 0x0D00F2DCL) && ((safe_mul_func_uint16_t_u_u((+0x6D94L), l_8)) , 0L)) , (*g_298))))) , (***g_593)) , l_599), l_558)) <= (**g_297)) & (*l_584)) , (*g_298))));
            (*l_584) = (((4294967293UL & ((safe_mod_func_int8_t_s_s(((*g_556) | 6UL), (**g_555))) < l_35)) && (l_619 &= (0x10425D63L == (g_99 , (l_35 ^= (safe_add_func_int8_t_s_s(((*l_584) != ((func_16((safe_add_func_int16_t_s_s((l_606 = l_14), l_558)), l_14, g_99.f0, g_607) ^ 0L) , 65529UL)), (**g_297)))))))) , l_619);
        }
        else
        {
            unsigned short **l_622 = &l_36;
            unsigned short ***l_621 = &l_622;
            int l_636 = 0x566FA669L;
            int l_639 = (-1L);
            const int **l_640 = (void*)0;
            const int **l_641 = (void*)0;
            const int *l_645 = &g_643;
            const int **l_644 = &l_645;
            (*l_621) = g_620;
            (**g_488) &= l_15.f0;
            l_646 = ((*l_644) = (g_642 = (func_9((safe_lshift_func_uint8_t_u_u((((safe_rshift_func_int8_t_s_s(l_14, 0)) != (-1L)) >= (safe_sub_func_int32_t_s_s((~(**g_488)), g_155))), ((**g_297) = (((*l_36) = l_629) | (safe_mod_func_uint16_t_u_u(((l_636 = ((g_264 , (safe_mul_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s(l_636, l_14)), (safe_mul_func_int16_t_s_s(((l_619 > (**g_488)) < 65535UL), l_636))))) < (*g_298))) < (*g_595)), l_639)))))), g_60, g_264, l_639) , &g_60)));
        }
    }
    else
    {
        unsigned short **l_649 = &l_36;
        unsigned short *l_651 = &g_217;
        unsigned short **l_650 = &l_651;
        unsigned char *l_652 = (void*)0;
        unsigned char *l_653 = &g_607;
        int l_661 = 0xC6C433EDL;
        union U0 ***l_662 = &g_659;
        int *l_670 = (void*)0;
        int *l_671 = &l_14;
        g_489 = &l_619;
        l_619 = ((-9L) >= (safe_mul_func_uint8_t_u_u((**g_297), ((*l_653) = ((((*l_649) = l_36) == ((*l_650) = &g_191)) | 0x594061D5L)))));
        (*g_489) = (safe_add_func_uint16_t_u_u((*l_646), (**g_594)));
        (*l_671) = (((((g_191 , func_21(((**g_555) &= (0xC55755A7L && (safe_lshift_func_uint16_t_u_s((g_658 != (l_661 , l_662)), ((func_9((**g_488), ((safe_lshift_func_uint16_t_u_s(((((safe_mod_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u((!g_227), l_661)), (*l_646))) > (*l_646)) , g_643) <= l_661), 6)) > l_661), l_15, (*l_646)) & l_661) != l_661))))), l_661, g_643, g_27)) == 0x913AL) & (*l_646)) > l_661) | l_669);
    }
    return g_296;
}







static int func_4(char p_5)
{
    int l_553 = (-1L);
    int *l_554 = &g_60;
    char ***l_557 = &g_555;
    (*l_554) = ((**g_488) = l_553);
    (*l_557) = g_555;
    return (*l_554);
}







static unsigned char func_9(const int p_10, unsigned p_11, union U0 p_12, unsigned char p_13)
{
    const unsigned char l_537 = 0xA4L;
    unsigned l_542 = 0UL;
    int l_543 = 0x858B4199L;
    int *l_544 = &g_60;
    if (((((func_28(l_537, ((*g_489) = (safe_rshift_func_int16_t_s_s(func_21(p_10, (g_146 || l_537), ((*g_298) ^= l_537), func_16((func_16(p_13, (*g_489), (~(((safe_mod_func_int32_t_s_s(l_537, l_537)) || l_542) , 0xD998FB7AL)), g_227) > g_37), p_12.f0, p_12.f0, g_32)), g_85))), l_543) , l_543) & 0UL) , p_12.f0) & g_227))
    {
        int l_547 = 1L;
        char l_548 = 1L;
        (*l_544) &= (g_227 < ((((((p_11 == ((void*)0 != l_544)) , p_12.f0) < 1L) <= (safe_sub_func_uint32_t_u_u(g_27, l_547))) | (func_16(((l_548 , p_11) , g_32), p_10, g_191, l_548) ^ 0x39664933L)) <= 0L));
        for (g_264.f3 = (-6); (g_264.f3 >= 13); g_264.f3 = safe_add_func_int8_t_s_s(g_264.f3, 3))
        {
            int l_551 = 0xA7C996EFL;
            (*l_544) = l_551;
        }
    }
    else
    {
        int **l_552 = &g_489;
        (*l_552) = (*g_488);
    }
    (*l_544) = (*l_544);
    (*l_544) |= (*g_489);
    return (**g_297);
}







static unsigned func_16(unsigned short p_17, int p_18, unsigned p_19, int p_20)
{
    (*g_489) = 0L;
    return p_20;
}







static unsigned short func_21(char p_22, const unsigned p_23, unsigned char p_24, unsigned p_25)
{
    union U0 l_379 = {252UL};
    char l_380 = 3L;
    unsigned *l_385 = &g_155;
    short *l_386 = &g_146;
    int l_387 = 0xFE462533L;
    unsigned short *l_388 = &g_191;
    unsigned char *l_389 = &g_134;
    int *l_390 = &g_87;
    int *l_391 = &g_60;
    (*l_391) = (l_379 , ((*l_390) |= ((*g_298) < (l_380 , ((((*l_389) = (safe_rshift_func_uint8_t_u_s((safe_mul_func_uint8_t_u_u(((((*l_388) = (l_387 = ((((((*l_385) = ((g_134 || (g_191 && p_25)) & l_379.f0)) , l_386) != (void*)0) ^ l_380) , l_380))) && p_24) != l_379.f0), p_25)), p_25))) <= l_379.f0) != 255UL)))));
    for (g_37 = 0; (g_37 <= 40); g_37++)
    {
        unsigned l_403 = 6UL;
        int *l_416 = &g_87;
        short **l_527 = &l_386;
        short **l_532 = &l_386;
        (*l_391) = (*l_390);
        for (g_99.f1 = 0; (g_99.f1 >= 35); g_99.f1++)
        {
            unsigned l_398 = 0xD74209ECL;
            int l_399 = (-9L);
            int l_497 = 3L;
            short ***l_528 = (void*)0;
            short ***l_529 = &l_527;
            short **l_531 = (void*)0;
            short ***l_530 = &l_531;
            int *l_535 = (void*)0;
            int *l_536 = &l_387;
        }
        (*l_390) = (**g_488);
        (*l_391) |= ((*g_489) = (l_379 , (*l_390)));
    }
    return g_85;
}







static unsigned char func_28(const unsigned short p_29, int p_30, int p_31)
{
    short l_48 = 0xEFA0L;
    int **l_57 = (void*)0;
    int *l_59 = &g_60;
    int **l_58 = &l_59;
    unsigned char *l_61 = (void*)0;
    unsigned char *l_62 = (void*)0;
    unsigned char *l_63 = (void*)0;
    unsigned char *l_64 = &g_65;
    char **l_69 = (void*)0;
    char *l_71 = &g_32;
    char **l_70 = &l_71;
    unsigned short *l_72 = &g_37;
    const unsigned l_285 = 1UL;
    char l_312 = (-1L);
    unsigned char **l_313 = &g_298;
    unsigned l_358 = 4294967287UL;
    (*l_58) = func_38(g_32, func_42((func_45(((*l_70) = (l_48 , func_49(((((((safe_sub_func_int8_t_s_s(l_48, p_31)) & (safe_unary_minus_func_int16_t_s((l_48 ^ (((*l_58) = &p_30) == (void*)0))))) ^ ((*l_64) |= g_37)) < ((p_29 , p_31) & 0UL)) ^ (-1L)) == g_32), &g_60, &g_60, &g_32))), l_72) , (*l_59)), g_99.f0), g_227);
    if ((p_29 , g_85))
    {
        const unsigned char l_294 = 0xB1L;
        int *l_295 = &g_296;
        unsigned char **l_299 = &l_63;
        char **l_328 = &l_71;
        unsigned char *l_329 = &g_134;
        int l_339 = 0xD11EB618L;
        const int *l_377 = &g_60;
        if ((safe_add_func_int32_t_s_s(((*l_70) == ((p_31 | (safe_lshift_func_uint8_t_u_s(((*g_298) = ((safe_mul_func_uint16_t_u_u(l_285, ((((*l_295) &= (p_30 > (safe_lshift_func_uint16_t_u_u(p_29, (safe_mod_func_uint8_t_u_u(0x93L, (((*l_59) , p_29) ^ (safe_mod_func_int32_t_s_s((safe_rshift_func_int16_t_s_s(l_294, p_30)), p_30))))))))) , g_297) != l_299))) < p_31)), 2))) , &g_32)), 0x283C189DL)))
        {
            unsigned short *l_302 = &g_217;
            int l_308 = 1L;
            unsigned char * const *l_315 = &g_298;
            unsigned char *l_357 = (void*)0;
            int *l_376 = &l_308;
            if (((safe_add_func_uint32_t_u_u((g_65 & ((*l_302) &= ((*l_72) = p_29))), p_30)) || p_30))
            {
                short l_307 = 0xBFACL;
                if (p_30)
                {
lbl_309:
                    for (g_264.f1 = 3; (g_264.f1 < 23); g_264.f1++)
                    {
                        if (p_31)
                            break;
                    }
                    (**l_58) &= p_29;
                }
                else
                {
                    (*l_58) = &p_30;
                    l_308 = ((~(safe_mod_func_int32_t_s_s(p_29, l_307))) == ((*l_59) = ((~p_31) < p_31)));
                    if (g_155)
                        goto lbl_309;
                }
            }
            else
            {
                unsigned char ***l_314 = &l_299;
                unsigned char **l_326 = (void*)0;
                unsigned char **l_327 = &l_64;
                int **l_330 = &l_59;
                char *l_351 = &l_312;
lbl_340:
                (*l_59) |= ((l_312 <= (((*l_314) = l_313) != l_315)) && ((l_308 & (p_30 &= (safe_mul_func_int8_t_s_s((safe_rshift_func_int16_t_s_u((safe_unary_minus_func_uint8_t_u((safe_mod_func_uint16_t_u_u(((((*l_72) = g_99.f0) != p_29) && 0x0783CDB2L), (((safe_unary_minus_func_uint8_t_u(p_29)) != (((safe_lshift_func_uint8_t_u_u((*g_298), (**g_297))) >= 0x2FE954CAL) && g_65)) , g_264.f0))))), p_31)), l_294)))) <= l_294));
                if ((((**l_328) = ((((*l_327) = ((*g_297) = (*g_297))) != (((void*)0 != l_328) , l_329)) > ((g_218 != l_330) > (safe_mod_func_int8_t_s_s(g_99.f0, ((l_294 , (safe_sub_func_uint8_t_u_u(g_65, l_308))) || g_191)))))) == 0x74L))
                {
                    (**l_58) ^= ((*g_298) , (safe_mul_func_uint16_t_u_u(((safe_add_func_int16_t_s_s(g_296, ((l_339 ^= g_60) <= g_32))) <= p_30), (-1L))));
                    if (g_217)
                        goto lbl_340;
                }
                else
                {
                    char *l_354 = &g_32;
                    int l_355 = 0x31E086E9L;
                    short *l_356 = &g_146;
                    int l_370 = 8L;
                    p_30 = (g_217 , ((void*)0 != &g_296));
                    if ((safe_rshift_func_uint16_t_u_s((!(safe_mod_func_int32_t_s_s((safe_mod_func_uint32_t_u_u((((safe_mul_func_uint8_t_u_u((((**g_297) <= (safe_lshift_func_int16_t_s_s((g_264.f3 = ((*l_356) = ((func_45(l_351, l_302) , (safe_sub_func_uint32_t_u_u((g_176 && ((g_264.f0 , func_49(((((((**l_58) = ((p_31 , l_339) | (*l_59))) , p_29) < g_65) == l_294) && (**l_330)), &l_339, &l_308, l_354)) != (*l_313))), l_308))) || l_355))), 5))) | p_30), 255UL)) < g_32) & p_30), 4294967295UL)), p_30))), g_217)))
                    {
                        char l_363 = (-6L);
                        unsigned *l_364 = (void*)0;
                        unsigned *l_365 = &g_99.f1;
                        unsigned *l_366 = (void*)0;
                        unsigned *l_367 = &g_99.f2;
                        unsigned *l_368 = &g_264.f1;
                        unsigned *l_369 = &g_99.f1;
                        int *l_373 = &g_87;
                        (**l_58) = (((0x45F6443CL ^ (((*g_297) == (l_357 = (*g_297))) <= 0x62C57F3EL)) | ((l_358 , (safe_sub_func_uint8_t_u_u((*g_298), ((((l_370 ^= (safe_mul_func_uint16_t_u_u(p_29, (l_355 | ((((**l_330) , p_30) > l_363) < l_294))))) != l_308) , &g_146) != l_356)))) && 0xA9L)) || g_155);
                        l_373 = func_38((safe_rshift_func_int16_t_s_s(l_355, 9)), &p_29, p_31);
                    }
                    else
                    {
                        p_30 = (l_339 = (g_99.f0 >= (safe_mul_func_int8_t_s_s(0xDEL, ((((*l_59) | 0xA1AC6A4DL) ^ l_308) || l_339)))));
                        l_376 = &p_30;
                    }
                }
            }
        }
        else
        {
            const int **l_378 = &l_377;
            (*l_378) = l_377;
        }
    }
    else
    {
        (*l_58) = (void*)0;
    }
    return (**g_297);
}







static int * func_38(unsigned short p_39, const unsigned short * p_40, unsigned short p_41)
{
    int *l_269 = (void*)0;
    int *l_270 = &g_60;
    int *l_271 = &g_87;
    unsigned char *l_278 = &g_65;
    (*l_271) = ((*l_270) &= (~0L));
    (*l_271) = ((0UL == (safe_add_func_int32_t_s_s((*l_270), (safe_add_func_uint16_t_u_u((0xB197DBADL >= 0x01AB67E0L), (g_217 = (((safe_rshift_func_uint8_t_u_u(((*l_270) && 0x77L), ((*l_278) &= p_41))) <= (*l_271)) > p_39))))))) , (*l_271));
    return l_271;
}







static const unsigned short * func_42(unsigned p_43, char p_44)
{
    unsigned l_111 = 4294967295UL;
    int *l_114 = &g_60;
    int *l_197 = &g_60;
    char *l_249 = &g_224;
    unsigned short l_251 = 0x6DA4L;
    short *l_259 = &g_146;
    int l_266 = 6L;
    if (((p_44 , g_85) ^ l_111))
    {
        char *l_113 = &g_85;
        char **l_112 = &l_113;
        int l_129 = 0xF5FC6D38L;
        int **l_131 = &l_114;
        int ***l_130 = &l_131;
        l_112 = l_112;
        l_114 = l_114;
        (*l_130) = ((safe_sub_func_uint16_t_u_u(g_65, ((safe_mul_func_uint8_t_u_u((safe_add_func_int32_t_s_s(g_99.f0, ((safe_sub_func_uint16_t_u_u(((safe_rshift_func_int16_t_s_u(((*l_114) , (safe_mod_func_uint32_t_u_u((safe_rshift_func_int8_t_s_u(1L, 6)), ((*l_114) = p_44)))), (l_129 > (~0x29L)))) ^ g_32), (((g_32 < l_129) , (-8L)) | g_85))) , 0L))), g_87)) , 0x5EF5L))) , &l_114);
    }
    else
    {
        char *l_132 = &g_32;
        unsigned char *l_133 = &g_134;
        int l_141 = 0xAA3B2A51L;
        unsigned l_201 = 0x8B811774L;
        short *l_203 = &g_146;
        if ((((*l_133) ^= ((func_45(l_132, &g_37) , (9UL <= ((-1L) != g_60))) != 0xA2C1E63FL)) < p_43))
        {
            int l_171 = 3L;
            int **l_202 = (void*)0;
            unsigned l_245 = 0xDD45D5CCL;
            if (g_37)
            {
                unsigned *l_142 = &l_111;
                char *l_143 = &g_85;
                unsigned *l_144 = &g_99.f2;
                short *l_145 = &g_146;
                int *l_149 = &g_87;
                if (((*l_149) = (safe_mod_func_uint8_t_u_u(((safe_mul_func_int16_t_s_s(((*l_145) = (((*l_144) = (safe_mul_func_int8_t_s_s((p_43 & l_141), ((*l_143) = ((0xD52AEB3CL ^ ((*l_142) &= (g_87 < p_44))) > p_43))))) < ((*l_114) = p_44))), g_65)) > (safe_mod_func_uint32_t_u_u(g_37, p_44))), 0x28L))))
                {
                    char *l_156 = &g_85;
                    int l_185 = 0xCA2BCDE2L;
                    if (((*l_114) == ((safe_add_func_int8_t_s_s((safe_unary_minus_func_int8_t_s(((safe_add_func_uint8_t_u_u(g_155, l_141)) ^ (~((l_143 != l_156) , ((*l_145) = g_134)))))), ((*l_143) |= 0L))) & (*l_114))))
                    {
                        unsigned short *l_165 = &g_37;
                        int l_170 = 0xA81E3AF2L;
                        unsigned *l_172 = (void*)0;
                        unsigned *l_173 = &g_155;
                        const unsigned char *l_175 = &g_176;
                        const unsigned char **l_174 = &l_175;
                        (*l_114) ^= (safe_lshift_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_s((safe_sub_func_int16_t_s_s((p_44 > (g_65 ^ (safe_rshift_func_int16_t_s_u(g_155, g_32)))), ((l_165 == ((safe_rshift_func_int16_t_s_s((*l_149), p_44)) , ((l_141 == ((safe_sub_func_int8_t_s_s((&l_156 == &l_156), 0UL)) && 0L)) , (void*)0))) ^ l_141))), g_85)) == p_43), 13));
                        (*l_149) = ((((*l_173) &= (((*l_145) = (l_170 ^ (*l_149))) | ((p_44 != l_171) , (+(g_99.f3 |= 0x1C06L))))) , &g_65) == ((*l_174) = func_49((*l_149), &l_141, l_149, &g_85)));
                    }
                    else
                    {
                        unsigned short *l_186 = &g_37;
                        int l_189 = 0L;
                        unsigned short *l_190 = &g_191;
                        int *l_192 = &l_141;
                        (*l_149) = (~((g_99.f1 & ((*l_149) <= g_87)) == (p_43 , p_43)));
                        (*l_192) &= (safe_rshift_func_uint16_t_u_s(((g_99.f2 && (*l_114)) & ((safe_add_func_int8_t_s_s(0L, (*l_149))) , ((*l_190) &= (((safe_sub_func_int8_t_s_s((-1L), (((((safe_rshift_func_uint16_t_u_s(((*l_186) = l_185), (safe_rshift_func_uint8_t_u_u((l_189 && ((*l_142) ^= l_185)), ((*l_149) & l_171))))) ^ p_43) , l_185) , p_43) , p_44))) != 0x78FAL) != l_185)))), g_65));
                    }
                    if (((*l_149) = p_44))
                    {
                        int **l_193 = &l_114;
                        (*l_193) = l_142;
                    }
                    else
                    {
                        int **l_194 = &l_149;
                        unsigned short *l_195 = &g_191;
                        unsigned short *l_196 = &g_37;
                        (*l_114) = ((9L > ((*l_142) = 1UL)) <= ((((*l_196) = ((*l_195) |= (l_114 != ((*l_194) = &l_141)))) == p_44) || p_43));
                    }
                }
                else
                {
                    unsigned l_225 = 0x255381E5L;
                    int l_226 = (-7L);
                    int l_236 = 0L;
                    int *l_237 = &l_226;
                    if (p_43)
                    {
                        int **l_198 = (void*)0;
                        int **l_199 = &l_197;
                        (*l_199) = l_197;
                    }
                    else
                    {
                        int **l_200 = &l_114;
                        (*l_200) = &g_60;
                    }
                    if (((((((l_141 , l_201) & l_171) , l_202) != &l_149) , (&g_146 != (((*l_149) , g_99) , l_203))) || g_99.f0))
                    {
                        int *l_216 = &l_171;
                        g_217 |= ((0x93586B99L && p_43) == ((g_60 == (~0UL)) != (((*l_145) = (((*l_216) |= (safe_rshift_func_uint8_t_u_s((safe_sub_func_int32_t_s_s((g_99.f1 , (g_32 <= 5L)), (safe_mod_func_int8_t_s_s(l_141, (safe_sub_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s((safe_mod_func_uint8_t_u_u(((p_43 != l_201) <= 0xAEE7L), p_44)), g_87)), g_134)))))), (*l_149)))) , 0L)) == p_43)));
                        (*l_114) = (((*l_145) = (g_218 == g_218)) >= g_155);
                    }
                    else
                    {
                        char *l_223 = &g_224;
                        unsigned char *l_228 = &g_65;
                        int l_229 = (-1L);
                        unsigned short l_235 = 1UL;
                        (*l_149) |= (safe_unary_minus_func_uint8_t_u((safe_unary_minus_func_int32_t_s(p_44))));
                        (*l_149) = ((((g_99.f0 , (p_43 >= ((*l_228) = ((((*l_223) = ((*l_143) |= (-1L))) > (l_226 = ((*l_133) = ((*l_197) != l_225)))) , g_227)))) || (l_229 , (safe_sub_func_int8_t_s_s((safe_mod_func_int8_t_s_s((safe_unary_minus_func_int8_t_s(((g_227 >= (*l_149)) | l_235))), l_236)), g_99.f3)))) & 0L) , (*l_149));
                        l_237 = l_149;
                        (*l_197) |= g_146;
                    }
                    return &g_191;
                }
            }
            else
            {
                int ***l_244 = &l_202;
                char *l_246 = (void*)0;
                char *l_247 = (void*)0;
                char *l_248 = &g_85;
                unsigned short *l_250 = &g_191;
                (*l_114) = (safe_sub_func_int32_t_s_s(((safe_sub_func_int8_t_s_s(((p_43 && ((*l_250) |= ((((g_37 , (((g_217 , ((safe_rshift_func_int16_t_s_s(g_37, 13)) || ((*l_248) = (((p_43 > (p_44 & ((l_244 != l_244) <= ((g_65 , p_44) | g_176)))) >= l_245) ^ p_43)))) , p_43) && g_155)) , l_249) == l_132) ^ p_43))) || p_43), 0xCFL)) ^ l_141), p_43));
                (*l_197) &= l_251;
            }
        }
        else
        {
            short *l_260 = &g_146;
            (*l_197) ^= p_43;
            for (g_85 = (-28); (g_85 != 20); g_85++)
            {
                int *l_254 = (void*)0;
                int **l_255 = (void*)0;
                int **l_256 = &l_114;
                unsigned l_257 = 0xD0DCD383L;
                const unsigned short *l_258 = &g_217;
            }
            (*l_114) &= p_43;
        }
    }
    (*l_197) = ((l_266 , g_37) < (((0xA9A4L < (0x8330L == g_155)) ^ ((void*)0 == &p_44)) >= (*l_197)));
    return &g_227;
}







static union U0 func_45(char * p_46, unsigned short * p_47)
{
    int **l_75 = (void*)0;
    int *l_77 = &g_60;
    int **l_76 = &l_77;
    unsigned char l_78 = 1UL;
    char l_81 = 0x66L;
    char *l_84 = &g_85;
    int *l_86 = &g_87;
    union U0 l_92 = {0UL};
    unsigned char l_106 = 0UL;
    (*l_86) &= (safe_sub_func_uint32_t_u_u(g_60, (((((((*l_76) = &g_60) != &g_60) < l_78) > (0x2E18E6F9L != ((((safe_sub_func_uint8_t_u_u(l_81, g_37)) | (safe_add_func_int8_t_s_s(((*l_84) = (*p_46)), g_32))) > g_65) && 0UL))) , 4294967288UL) ^ g_65)));
    if (((*p_46) == (((safe_sub_func_uint32_t_u_u((safe_mul_func_uint16_t_u_u((*p_47), g_37)), g_87)) , (g_60 >= (*l_86))) , (((*p_46) , l_92) , (*l_77)))))
    {
        short *l_100 = (void*)0;
        short *l_101 = &l_92.f3;
        const int l_109 = 1L;
        (**l_76) &= (safe_rshift_func_uint16_t_u_s((safe_mul_func_int16_t_s_s((((safe_lshift_func_int8_t_s_s((0x38ADL == ((*l_86) <= (g_99 , g_87))), 7)) <= (*p_47)) != ((((*l_101) = g_32) >= (safe_sub_func_int8_t_s_s((safe_add_func_int8_t_s_s(l_106, g_99.f0)), (safe_rshift_func_int8_t_s_u((g_87 , l_109), 4))))) , g_85)), 1UL)), 11));
        (*l_77) &= 2L;
    }
    else
    {
        int *l_110 = &g_60;
        (*l_76) = l_110;
    }
    return g_99;
}







static char * func_49(unsigned p_50, int * const p_51, int * const p_52, char * p_53)
{
    unsigned char l_68 = 0xD6L;
    (*p_51) = (safe_mod_func_int32_t_s_s(l_68, p_50));
    return p_53;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_27, "g_27", print_hash_value);
    transparent_crc(g_32, "g_32", print_hash_value);
    transparent_crc(g_37, "g_37", print_hash_value);
    transparent_crc(g_60, "g_60", print_hash_value);
    transparent_crc(g_65, "g_65", print_hash_value);
    transparent_crc(g_85, "g_85", print_hash_value);
    transparent_crc(g_87, "g_87", print_hash_value);
    transparent_crc(g_99.f0, "g_99.f0", print_hash_value);
    transparent_crc(g_134, "g_134", print_hash_value);
    transparent_crc(g_146, "g_146", print_hash_value);
    transparent_crc(g_155, "g_155", print_hash_value);
    transparent_crc(g_176, "g_176", print_hash_value);
    transparent_crc(g_191, "g_191", print_hash_value);
    transparent_crc(g_217, "g_217", print_hash_value);
    transparent_crc(g_224, "g_224", print_hash_value);
    transparent_crc(g_227, "g_227", print_hash_value);
    transparent_crc(g_264.f0, "g_264.f0", print_hash_value);
    transparent_crc(g_296, "g_296", print_hash_value);
    transparent_crc(g_444, "g_444", print_hash_value);
    transparent_crc(g_607, "g_607", print_hash_value);
    transparent_crc(g_643, "g_643", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
