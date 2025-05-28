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
   volatile int f0;
   short f1;
   unsigned f2;
   unsigned f3;
};


static short g_17 = (-1L);
static char g_31 = 3L;
static volatile int g_55 = 1L;
static volatile int *g_54 = &g_55;
static int g_64 = (-1L);
static int *g_71 = &g_64;
static int **g_70 = &g_71;
static const struct S0 g_95 = {-10L,0xD173L,4294967295UL,0x6C0C90B2L};
static struct S0 g_97 = {0L,0L,0x473F1902L,1UL};
static int *g_126 = &g_64;
static struct S0 g_157 = {0x85FE053DL,-2L,4294967295UL,0x9F58EF41L};
static struct S0 *g_186 = (void*)0;
static volatile struct S0 g_207 = {0x10FA4C86L,1L,4294967295UL,3UL};
static volatile struct S0 g_211 = {0xF2E7E6B1L,3L,1UL,0x1045187FL};
static volatile struct S0 g_212 = {1L,-6L,6UL,0x2F403320L};
static struct S0 g_225 = {1L,0xF469L,0x2AC2E06EL,4294967294UL};
static volatile struct S0 g_243 = {0x72B03FFEL,0xB683L,1UL,0x4508A83BL};
static volatile struct S0 g_258 = {0L,0L,4294967295UL,0x58C9672BL};
static volatile struct S0 g_259 = {0x10C4A4D0L,0xB0D3L,0UL,0x44EE9F14L};
static volatile struct S0 g_266 = {0xFA435C01L,0L,4294967291UL,4294967295UL};
static volatile short g_289 = 0L;
static const volatile struct S0 g_291 = {-1L,1L,0x9A3684EDL,8UL};
static struct S0 g_302 = {-1L,1L,1UL,4294967295UL};
static volatile struct S0 g_329 = {0x83AC69C9L,0x773CL,0xD7DF8042L,0xDC2A12C2L};
static struct S0 g_330 = {-9L,0xBC02L,4294967291UL,0xC37545C5L};
static struct S0 g_375 = {-3L,0x1DF6L,4294967295UL,0x42EC95E6L};
static volatile struct S0 g_394 = {0x2822CC24L,0xD43AL,4294967295UL,0xF27D02BCL};
static const short g_410 = (-1L);
static struct S0 g_435 = {0xA3C633B4L,0x1280L,0UL,4294967290UL};
static volatile struct S0 g_442 = {-4L,0x5E09L,0xC1858E71L,0UL};
static volatile struct S0 g_453 = {0x05A89F3CL,0xECB3L,0UL,0x2F461F9DL};
static struct S0 g_480 = {0xA31BCA2BL,0L,4294967294UL,0xE005B330L};
static short g_502 = 0x5EE2L;



static int func_1(void);
static int func_2(int p_3, unsigned short p_4);
static unsigned char func_7(int p_8, const unsigned p_9);
static char func_20(unsigned short p_21, int p_22, unsigned char p_23, unsigned p_24, int p_25);
static unsigned short func_26(unsigned p_27, unsigned char p_28, unsigned short p_29, unsigned p_30);
static int func_33(unsigned short p_34, int p_35, unsigned short p_36, int p_37);
static unsigned short func_47(int p_48, unsigned p_49, char p_50, char p_51);
static int func_66(unsigned p_67, int ** p_68);
static int func_73(int * p_74, unsigned short p_75, char p_76, int p_77);
static int * func_78(const unsigned char p_79, int ** const p_80, char p_81);
static int func_1(void)
{
    unsigned char l_32 = 6UL;
    char l_438 = 0xA7L;
    unsigned char l_496 = 0x51L;
    short l_501 = 0xF5CBL;
    if ((func_2((safe_lshift_func_uint8_t_u_u(func_7((safe_rshift_func_int8_t_s_s(0L, (safe_unary_minus_func_int32_t_s((-1L))))), (safe_mod_func_uint32_t_u_u((safe_sub_func_int32_t_s_s((g_17 != (safe_add_func_int32_t_s_s(g_17, ((((0x95L >= func_20(func_26(g_31, l_32, g_31, l_32), l_438, g_95.f1, g_375.f1, g_410)) <= 0x51L) > l_32) && 0x6B34L)))), 0L)), l_32))), g_97.f1)), l_32) == l_438))
    {
        struct S0 **l_485 = &g_186;
        (*l_485) = &g_480;

        ;
    }
    else
    {
        struct S0 *l_486 = &g_330;
        int l_489 = (-3L);
        (*l_486) = g_435;
        (**g_70) = (safe_mod_func_uint32_t_u_u(l_489, l_438));
        if ((safe_sub_func_int8_t_s_s(func_2((l_32 > l_438), (safe_mul_func_int8_t_s_s((safe_add_func_uint32_t_u_u(func_33(g_266.f1, func_33(l_32, l_438, g_157.f1, l_496), (safe_add_func_int8_t_s_s((safe_rshift_func_int16_t_s_s(((0L || l_501) > 1L), g_64)), 0x30L)), g_97.f2), g_375.f2)), g_97.f1))), g_502)))
        {
            const unsigned short l_503 = 0xA261L;
            (*g_70) = (*g_70);
            (**g_70) = (g_375.f1 >= l_503);
        }
        else
        {
            return (*g_126);
        }
    }

    ;
    ;
    return (*g_71);
}







static int func_2(int p_3, unsigned short p_4)
{
    int *l_484 = &g_64;
    (*g_70) = l_484;

    ;
    (*l_484) = (func_73(l_484, (g_394.f0 && g_258.f1), func_73(l_484, (*l_484), ((*l_484) | ((void*)0 == &g_70)), g_302.f3), g_302.f3) <= (*l_484));
    return (*l_484);
}







static unsigned char func_7(int p_8, const unsigned p_9)
{
    int *l_441 = &g_64;
    unsigned char l_447 = 0x8AL;
    struct S0 *l_477 = &g_225;
    (*g_70) = l_441;

    ;
    if ((*g_126))
    {
        volatile struct S0 *l_443 = (void*)0;
        volatile struct S0 *l_444 = &g_394;
        int l_448 = 1L;
        int ** const l_476 = &g_126;
        (*l_444) = g_442;
        if ((safe_mod_func_uint8_t_u_u((p_8 && l_447), func_47(l_448, p_9, (safe_lshift_func_uint8_t_u_s(1UL, g_157.f2)), (((*l_441) == (safe_mul_func_uint8_t_u_u((p_9 != (((g_243.f0 || l_448) != l_448) < (*l_441))), p_9))) <= 1UL)))))
        {
            int l_454 = 0x327BCB12L;
            int *l_469 = &l_448;
            (*l_444) = g_453;
            if (l_454)
            {
                unsigned char l_466 = 253UL;
                for (g_435.f3 = 0; (g_435.f3 > 34); ++g_435.f3)
                {
                    unsigned char l_457 = 0x35L;
                    struct S0 * const *l_459 = (void*)0;
                    struct S0 * const **l_458 = &l_459;
                    if ((*g_71))
                        break;
                    (*l_444) = g_212;
                    (*g_126) = (func_73((*g_70), (l_457 || ((void*)0 != l_458)), g_258.f0, (*l_441)) & (safe_mod_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_u((g_375.f1 & (safe_mod_func_int8_t_s_s(func_47(((-1L) || p_8), g_225.f3, l_466, g_97.f1), 0xF9L))), g_302.f2)) < (*g_71)), l_466)));
                    (*g_70) = &p_8;

                    ;
                }

                ;
                (*g_71) = ((void*)0 != l_477);
                (*g_126) = (-1L);
            }
            else
            {
                return p_8;
            }

            ;
        }
        else
        {
            for (g_157.f3 = (-4); (g_157.f3 == 38); g_157.f3 = safe_add_func_uint32_t_u_u(g_157.f3, 1))
            {
                (*l_477) = (*l_477);
                if (p_9)
                    continue;
            }
        }

        ;
        (*l_477) = (*l_477);
    }
    else
    {
        short l_481 = (-9L);
        (*l_477) = g_480;
        (*g_71) = l_481;
    }

    ;
    (*l_477) = (*l_477);
    return p_8;


}







static char func_20(unsigned short p_21, int p_22, unsigned char p_23, unsigned p_24, int p_25)
{
    int **l_439 = &g_71;
    int ***l_440 = &l_439;
    (*l_440) = l_439;
    (*g_70) = &p_25;

    ;
    (**l_439) = (&l_439 != &g_70);
    return p_21;


}







static unsigned short func_26(unsigned p_27, unsigned char p_28, unsigned short p_29, unsigned p_30)
{
    short l_46 = 0L;
    struct S0 *l_357 = &g_157;
    int *l_370 = &g_64;
    unsigned short l_429 = 65528UL;
    if (func_33(g_17, (safe_lshift_func_int16_t_s_u((safe_sub_func_int16_t_s_s(p_30, (safe_mul_func_int8_t_s_s((safe_lshift_func_int8_t_s_u((p_27 && 0xEDD1EDB6L), 7)), (l_46 >= ((func_47(p_29, (((safe_mul_func_uint8_t_u_u(g_17, 0xB8L)) >= l_46) & l_46), l_46, g_31) & g_225.f0) ^ 0UL)))))), 3)), l_46, g_97.f3))
    {
        int ** const l_350 = &g_126;
        struct S0 *l_369 = (void*)0;
        int **l_391 = &l_370;
        (*g_70) = (*l_350);
        if (p_28)
        {
            int *l_352 = &g_64;
            struct S0 **l_364 = &l_357;
            struct S0 ***l_363 = &l_364;
            (*g_71) = p_29;
            if (p_27)
            {
                int *l_351 = &g_64;
                struct S0 *l_353 = &g_302;
                struct S0 **l_354 = &l_353;
                (*g_126) = (-1L);
                l_352 = l_351;
                (*l_354) = l_353;
            }
            else
            {
                (*l_350) = (*l_350);
                for (l_46 = 24; (l_46 <= (-2)); l_46 = safe_sub_func_uint8_t_u_u(l_46, 1))
                {
                    struct S0 **l_358 = &g_186;
                    if (l_46)
                        break;
                    (*l_358) = l_357;

                    ;
                    if ((**g_70))
                        continue;
                    if (p_27)
                        break;
                }

                ;
            }

            ;
            (*g_71) = (safe_rshift_func_uint8_t_u_u(((p_28 < (p_30 != ((void*)0 == (*g_70)))) && (safe_lshift_func_uint8_t_u_u((0L & ((void*)0 != l_363)), (safe_mul_func_int8_t_s_s(0x6AL, (safe_sub_func_int8_t_s_s((l_369 != &g_157), p_28))))))), (*l_352)));
            l_370 = (*l_350);
        }
        else
        {
            for (p_29 = (-20); (p_29 < 16); p_29 = safe_add_func_uint16_t_u_u(p_29, 3))
            {
                int l_382 = 0x21E8FC48L;
                for (g_157.f3 = 25; (g_157.f3 >= 43); g_157.f3 = safe_add_func_int16_t_s_s(g_157.f3, 2))
                {
                    g_258 = g_375;
                    for (g_31 = 0; (g_31 > (-19)); g_31 = safe_sub_func_uint8_t_u_u(g_31, 9))
                    {
                        if ((*l_370))
                            break;
                        if (p_27)
                            break;
                    }
                }
                (**l_350) = ((~(p_28 | g_291.f1)) ^ ((*l_370) & (&g_126 == l_350)));
                if ((safe_lshift_func_uint16_t_u_u(65535UL, (safe_rshift_func_uint16_t_u_u(l_382, 9)))))
                {
                    int * const l_387 = &l_382;
                    (*g_126) = (safe_lshift_func_uint8_t_u_u(1UL, ((p_29 <= 0xE27EL) < (safe_add_func_uint8_t_u_u(((l_387 != (*l_350)) <= 9UL), g_302.f3)))));
                    if ((**g_70))
                        continue;
                    for (l_382 = 0; (l_382 != (-11)); l_382 = safe_sub_func_uint16_t_u_u(l_382, 8))
                    {
                        short l_390 = (-1L);
                        (*g_126) = ((*l_370) && (-1L));
                    }
                }
                else
                {
                    (*l_391) = (*l_350);
                }
                (*l_357) = (*l_357);
            }
        }

        ;
    }
    else
    {
        char l_395 = 0xF5L;
        int ** const l_397 = &g_126;
        for (l_46 = (-14); (l_46 == 8); l_46 = safe_add_func_uint16_t_u_u(l_46, 1))
        {
            (*l_357) = g_394;
        }
        (*g_126) = 1L;
        (*g_126) = ((func_33(p_30, (*l_370), p_27, l_395) > (*l_370)) || (safe_unary_minus_func_uint32_t_u((*l_370))));
        (*l_397) = (*g_70);
    }

    ;
    ;
    for (g_31 = 0; (g_31 >= (-15)); g_31--)
    {
        int **l_400 = &g_126;
        unsigned l_401 = 4294967287UL;
        (**l_400) = ((l_400 == (void*)0) ^ g_302.f1);
    }
    (*g_126) = (((-1L) >= (*l_370)) & (safe_sub_func_uint32_t_u_u(0xDFCA66D8L, (*l_370))));
    return (*l_370);
}







static int func_33(unsigned short p_34, int p_35, unsigned short p_36, int p_37)
{
    int l_349 = (-4L);
    (*g_70) = (*g_70);
    return l_349;
}







static unsigned short func_47(int p_48, unsigned p_49, char p_50, char p_51)
{
    unsigned l_69 = 0x870B1B9BL;
    struct S0 *l_333 = &g_97;
    g_54 = (void*)0;

    ;
    for (g_31 = 0; (g_31 > 14); ++g_31)
    {
        int **l_269 = &g_71;
        int *l_347 = (void*)0;
        int *l_348 = &g_64;
        for (p_50 = 0; (p_50 <= 6); ++p_50)
        {
            unsigned short l_65 = 0xE515L;
            for (p_49 = 0; (p_49 < 40); ++p_49)
            {
                int *l_63 = &g_64;
                int **l_62 = &l_63;
                if (p_51)
                    break;
                (*l_62) = (void*)0;

                ;
                return l_65;
            }
        }
    }
    return l_69;
}







static int func_66(unsigned p_67, int ** p_68)
{
    int l_72 = 0x069719EFL;
    int *l_169 = &g_64;
    int l_181 = (-9L);
    struct S0 **l_255 = (void*)0;
    struct S0 ***l_254 = &l_255;
    (**g_70) = (+(&g_71 == &g_71));
    if (((0UL > l_72) <= (l_72 >= (0x8C6AL & g_64))))
    {
        (*p_68) = (*p_68);
    }
    else
    {
        unsigned char l_191 = 0UL;
        int ** const l_214 = (void*)0;
        unsigned l_216 = 0UL;
        int *l_241 = &g_64;
        if ((0xE6D99275L != l_72))
        {
            int l_167 = 0x47B8CF32L;
            (*g_126) = func_73(func_78(p_67, &g_71, (safe_add_func_uint32_t_u_u(0xAED967AAL, ((**p_68) > (safe_lshift_func_uint16_t_u_s((0x58L && p_67), ((((((((safe_rshift_func_uint16_t_u_u(((safe_lshift_func_uint16_t_u_u(g_55, 3)) > ((safe_mul_func_int8_t_s_s(p_67, (0x40L | 0x7CL))) & 1UL)), g_31)) || p_67) > 0UL) >= (-3L)) && 0x83L) & 1L) & l_72) != p_67))))))), l_167, p_67, p_67);



            (*p_68) = l_169;

            ;
        }
        else
        {
            int l_180 = (-7L);
            int **l_223 = &g_71;
            int *l_244 = &l_180;
            if ((((safe_sub_func_int32_t_s_s((safe_mul_func_int16_t_s_s((func_73((*g_70), g_97.f0, ((p_68 != p_68) ^ ((p_67 != ((safe_sub_func_uint16_t_u_u(65528UL, (safe_add_func_int8_t_s_s(p_67, (!(safe_rshift_func_uint8_t_u_s(l_180, 1))))))) ^ ((((((*l_169) ^ 0x0BL) <= (*l_169)) | g_95.f1) != 1UL) | l_180))) || (*l_169))), p_67) ^ l_181), 1UL)), 0x45D28D44L)) ^ g_157.f3) == p_67))
            {
                unsigned char l_203 = 0x49L;
                const short l_206 = 0xD1B1L;
                volatile struct S0 *l_208 = &g_207;
                for (g_97.f2 = 22; (g_97.f2 < 25); g_97.f2 = safe_add_func_int8_t_s_s(g_97.f2, 8))
                {
                    struct S0 *l_184 = &g_157;
                    int l_200 = 0L;
                }
                (*g_126) = func_73((*g_70), l_191, func_73((*g_70), (safe_add_func_int8_t_s_s(l_203, 0x32L)), ((safe_sub_func_int8_t_s_s(l_206, g_157.f1)) | (+(&g_186 != &g_186))), p_67), p_67);
                (*l_208) = g_207;
            }
            else
            {
                struct S0 *l_213 = &g_97;
                int l_240 = 0x635C2736L;
                int *l_242 = (void*)0;
                if ((**p_68))
                {
                    const struct S0 *l_210 = (void*)0;
                    const struct S0 **l_209 = &l_210;
                    (*l_209) = (void*)0;
                    g_212 = g_211;
                }
                else
                {
                    int l_215 = 2L;
                    int *l_224 = &l_180;
                    (*g_70) = (*g_70);
                    l_224 = func_78(p_67, p_68, ((safe_mod_func_uint32_t_u_u((safe_sub_func_int16_t_s_s(g_157.f3, (safe_mod_func_int16_t_s_s((l_223 == l_223), 0x8D44L)))), (((void*)0 == &p_68) & (-4L)))) <= l_215));



                    ;
                    (*l_213) = g_225;
                    if ((p_67 != ((*l_169) ^ (safe_rshift_func_uint8_t_u_u((((+(*l_224)) | ((((safe_lshift_func_int8_t_s_s(((void*)0 == &p_68), ((safe_lshift_func_int16_t_s_s(0xF79CL, 3)) > 0xF0L))) == ((*g_126) >= ((safe_mod_func_uint32_t_u_u((safe_add_func_uint32_t_u_u((safe_mod_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_s(p_67, l_240)), p_67)), g_157.f1)), (*l_224))) < g_17))) >= (*g_126)) > 1L)) | 0x38L), 7)))))
                    {
                        l_241 = &l_240;

                        ;
                        (*p_68) = l_242;

                        ;
                        (*l_213) = g_243;
                    }
                    else
                    {
                        int ** const l_249 = (void*)0;
                        (*l_223) = l_244;

                        ;
                        (**p_68) = (*l_224);
                        (*p_68) = (*p_68);
                    }

                    ;
                    ;
                }

                ;

                ;
            }

            ;


            (*l_169) = (!p_67);
            for (g_157.f3 = 23; (g_157.f3 >= 36); g_157.f3 = safe_add_func_int8_t_s_s(g_157.f3, 4))
            {
                char l_252 = (-5L);
                int *l_253 = &l_180;
                (*g_126) = ((-2L) && p_67);
                (*g_126) = func_73(&l_181, (8UL <= (1UL && l_252)), g_207.f1, p_67);
                l_253 = (*p_68);

                ;
            }
        }




    }



    (*l_254) = &g_186;

    ;
    return (*l_169);
}







static int func_73(int * p_74, unsigned short p_75, char p_76, int p_77)
{
    unsigned l_168 = 1UL;
    l_168 = (*g_126);
    return (*p_74);
}







static int * func_78(const unsigned char p_79, int ** const p_80, char p_81)
{
    unsigned l_92 = 0xA6552259L;
    int *l_109 = &g_64;
    int *l_166 = &g_64;
    if (l_92)
    {
        int l_100 = (-7L);
        if ((**p_80))
        {
            struct S0 *l_96 = &g_97;
            for (g_64 = 0; (g_64 >= 1); g_64 = safe_add_func_int16_t_s_s(g_64, 7))
            {
            }
            (*l_96) = g_95;
        }
        else
        {
            if ((safe_lshift_func_int8_t_s_u((l_100 || (safe_sub_func_uint16_t_u_u(p_79, ((safe_mod_func_uint8_t_u_u(l_100, (safe_lshift_func_int16_t_s_s((safe_mul_func_uint8_t_u_u((p_79 >= (((g_64 && (l_92 & (((*g_70) != (*g_70)) & p_79))) == 1UL) <= l_92)), l_92)), 5)))) != (*g_71))))), 6)))
            {
                (*p_80) = l_109;
                (**p_80) = 9L;
            }
            else
            {
                int **l_110 = &l_109;
                struct S0 *l_129 = &g_97;
                if (((p_80 != l_110) & (safe_sub_func_uint16_t_u_u((((4L > (safe_add_func_int8_t_s_s(p_81, (*l_109)))) ^ (safe_mod_func_int8_t_s_s((safe_rshift_func_int8_t_s_s(0x81L, ((safe_sub_func_uint16_t_u_u(g_97.f1, ((0x5AB2L <= g_95.f2) || g_95.f2))) >= g_97.f1))), g_64))) || p_81), l_100))))
                {
                    int *l_121 = &l_100;
                    (*l_110) = (*p_80);
                    (*l_110) = l_121;

                    ;
                    (*l_121) = (*g_71);
                    for (g_97.f2 = 27; (g_97.f2 > 54); g_97.f2 = safe_add_func_int16_t_s_s(g_97.f2, 7))
                    {
                        struct S0 *l_125 = &g_97;
                        struct S0 **l_124 = &l_125;
                        (*p_80) = (*g_70);
                        (*l_124) = &g_97;
                        (*p_80) = (*p_80);
                        (*g_70) = g_126;
                    }
                }
                else
                {
                    (*g_70) = (void*)0;

                    ;
                }

                ;
                ;
                (*l_109) = (safe_mul_func_uint16_t_u_u(g_95.f3, (p_79 && g_95.f0)));
                (*l_129) = g_97;
            }

            ;
            ;
        }

        ;
        ;
        for (g_97.f2 = 0; (g_97.f2 >= 4); ++g_97.f2)
        {
            unsigned char l_134 = 0UL;
            for (g_97.f1 = (-2); (g_97.f1 < 26); ++g_97.f1)
            {
                l_134 = (*l_109);
                (*l_109) = (0x61587F35L != (safe_mul_func_uint8_t_u_u((p_81 != l_134), g_95.f0)));
                (*p_80) = &l_100;
            }
            for (g_97.f3 = 0; (g_97.f3 >= 21); g_97.f3++)
            {
                unsigned char l_141 = 0UL;
                struct S0 *l_158 = &g_157;
                if ((*g_126))
                {
                    short l_156 = 0x1032L;
                    (*l_109) = (safe_sub_func_uint8_t_u_u((l_141 > ((safe_sub_func_uint32_t_u_u((safe_mul_func_int8_t_s_s(((safe_rshift_func_int16_t_s_u((p_80 == (void*)0), 4)) == (safe_lshift_func_int16_t_s_s(l_134, 12))), (safe_add_func_uint16_t_u_u(1UL, ((safe_lshift_func_uint8_t_u_s(g_95.f0, 3)) < (((((safe_rshift_func_uint16_t_u_u(p_79, 13)) >= (l_156 ^ l_156)) > p_79) || (-4L)) || p_81)))))), (*l_109))) | g_97.f2)), (*l_109)));
                }
                else
                {
                    (*p_80) = (*g_70);
                }
                (*g_70) = (void*)0;

                ;
                (*l_158) = g_157;
            }
            l_100 = 0xAF6BF143L;
        }

        ;
    }
    else
    {
        int ***l_159 = (void*)0;
        int ***l_160 = &g_70;
        (*l_160) = &l_109;

        ;
        for (g_64 = 22; (g_64 < 1); --g_64)
        {
            (*g_70) = (*p_80);
        }
    }


    ;

    for (g_157.f2 = 6; (g_157.f2 > 40); ++g_157.f2)
    {
        struct S0 *l_165 = &g_97;
        (*l_165) = g_95;
    }
    return l_166;



}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_17, "g_17", print_hash_value);
    transparent_crc(g_31, "g_31", print_hash_value);
    transparent_crc(g_55, "g_55", print_hash_value);
    transparent_crc(g_64, "g_64", print_hash_value);
    transparent_crc(g_95.f0, "g_95.f0", print_hash_value);
    transparent_crc(g_95.f1, "g_95.f1", print_hash_value);
    transparent_crc(g_95.f2, "g_95.f2", print_hash_value);
    transparent_crc(g_95.f3, "g_95.f3", print_hash_value);
    transparent_crc(g_97.f0, "g_97.f0", print_hash_value);
    transparent_crc(g_97.f1, "g_97.f1", print_hash_value);
    transparent_crc(g_97.f2, "g_97.f2", print_hash_value);
    transparent_crc(g_97.f3, "g_97.f3", print_hash_value);
    transparent_crc(g_157.f0, "g_157.f0", print_hash_value);
    transparent_crc(g_157.f1, "g_157.f1", print_hash_value);
    transparent_crc(g_157.f2, "g_157.f2", print_hash_value);
    transparent_crc(g_157.f3, "g_157.f3", print_hash_value);
    transparent_crc(g_207.f0, "g_207.f0", print_hash_value);
    transparent_crc(g_207.f1, "g_207.f1", print_hash_value);
    transparent_crc(g_207.f2, "g_207.f2", print_hash_value);
    transparent_crc(g_207.f3, "g_207.f3", print_hash_value);
    transparent_crc(g_211.f0, "g_211.f0", print_hash_value);
    transparent_crc(g_211.f1, "g_211.f1", print_hash_value);
    transparent_crc(g_211.f2, "g_211.f2", print_hash_value);
    transparent_crc(g_211.f3, "g_211.f3", print_hash_value);
    transparent_crc(g_212.f0, "g_212.f0", print_hash_value);
    transparent_crc(g_212.f1, "g_212.f1", print_hash_value);
    transparent_crc(g_212.f2, "g_212.f2", print_hash_value);
    transparent_crc(g_212.f3, "g_212.f3", print_hash_value);
    transparent_crc(g_225.f0, "g_225.f0", print_hash_value);
    transparent_crc(g_225.f1, "g_225.f1", print_hash_value);
    transparent_crc(g_225.f2, "g_225.f2", print_hash_value);
    transparent_crc(g_225.f3, "g_225.f3", print_hash_value);
    transparent_crc(g_243.f0, "g_243.f0", print_hash_value);
    transparent_crc(g_243.f1, "g_243.f1", print_hash_value);
    transparent_crc(g_243.f2, "g_243.f2", print_hash_value);
    transparent_crc(g_243.f3, "g_243.f3", print_hash_value);
    transparent_crc(g_258.f0, "g_258.f0", print_hash_value);
    transparent_crc(g_258.f1, "g_258.f1", print_hash_value);
    transparent_crc(g_258.f2, "g_258.f2", print_hash_value);
    transparent_crc(g_258.f3, "g_258.f3", print_hash_value);
    transparent_crc(g_259.f0, "g_259.f0", print_hash_value);
    transparent_crc(g_259.f1, "g_259.f1", print_hash_value);
    transparent_crc(g_259.f2, "g_259.f2", print_hash_value);
    transparent_crc(g_259.f3, "g_259.f3", print_hash_value);
    transparent_crc(g_266.f0, "g_266.f0", print_hash_value);
    transparent_crc(g_266.f1, "g_266.f1", print_hash_value);
    transparent_crc(g_266.f2, "g_266.f2", print_hash_value);
    transparent_crc(g_266.f3, "g_266.f3", print_hash_value);
    transparent_crc(g_289, "g_289", print_hash_value);
    transparent_crc(g_291.f0, "g_291.f0", print_hash_value);
    transparent_crc(g_291.f1, "g_291.f1", print_hash_value);
    transparent_crc(g_291.f2, "g_291.f2", print_hash_value);
    transparent_crc(g_291.f3, "g_291.f3", print_hash_value);
    transparent_crc(g_302.f0, "g_302.f0", print_hash_value);
    transparent_crc(g_302.f1, "g_302.f1", print_hash_value);
    transparent_crc(g_302.f2, "g_302.f2", print_hash_value);
    transparent_crc(g_302.f3, "g_302.f3", print_hash_value);
    transparent_crc(g_329.f0, "g_329.f0", print_hash_value);
    transparent_crc(g_329.f1, "g_329.f1", print_hash_value);
    transparent_crc(g_329.f2, "g_329.f2", print_hash_value);
    transparent_crc(g_329.f3, "g_329.f3", print_hash_value);
    transparent_crc(g_330.f0, "g_330.f0", print_hash_value);
    transparent_crc(g_330.f1, "g_330.f1", print_hash_value);
    transparent_crc(g_330.f2, "g_330.f2", print_hash_value);
    transparent_crc(g_330.f3, "g_330.f3", print_hash_value);
    transparent_crc(g_375.f0, "g_375.f0", print_hash_value);
    transparent_crc(g_375.f1, "g_375.f1", print_hash_value);
    transparent_crc(g_375.f2, "g_375.f2", print_hash_value);
    transparent_crc(g_375.f3, "g_375.f3", print_hash_value);
    transparent_crc(g_394.f0, "g_394.f0", print_hash_value);
    transparent_crc(g_394.f1, "g_394.f1", print_hash_value);
    transparent_crc(g_394.f2, "g_394.f2", print_hash_value);
    transparent_crc(g_394.f3, "g_394.f3", print_hash_value);
    transparent_crc(g_410, "g_410", print_hash_value);
    transparent_crc(g_435.f0, "g_435.f0", print_hash_value);
    transparent_crc(g_435.f1, "g_435.f1", print_hash_value);
    transparent_crc(g_435.f2, "g_435.f2", print_hash_value);
    transparent_crc(g_435.f3, "g_435.f3", print_hash_value);
    transparent_crc(g_442.f0, "g_442.f0", print_hash_value);
    transparent_crc(g_442.f1, "g_442.f1", print_hash_value);
    transparent_crc(g_442.f2, "g_442.f2", print_hash_value);
    transparent_crc(g_442.f3, "g_442.f3", print_hash_value);
    transparent_crc(g_453.f0, "g_453.f0", print_hash_value);
    transparent_crc(g_453.f1, "g_453.f1", print_hash_value);
    transparent_crc(g_453.f2, "g_453.f2", print_hash_value);
    transparent_crc(g_453.f3, "g_453.f3", print_hash_value);
    transparent_crc(g_480.f0, "g_480.f0", print_hash_value);
    transparent_crc(g_480.f1, "g_480.f1", print_hash_value);
    transparent_crc(g_480.f2, "g_480.f2", print_hash_value);
    transparent_crc(g_480.f3, "g_480.f3", print_hash_value);
    transparent_crc(g_502, "g_502", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
