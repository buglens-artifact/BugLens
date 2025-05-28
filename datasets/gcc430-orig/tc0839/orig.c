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
   unsigned f1;
   const unsigned f2;
};


static unsigned char g_11 = 0UL;
static int * const g_39 = (void*)0;
static int g_44 = 0x14C38D67L;
static int g_48 = 4L;
static int *g_81 = (void*)0;
static int ** const g_80 = &g_81;
static volatile struct S0 g_85 = {0xCD98C7BEL,0x440DB5B4L,0x0DD78FD7L};
static volatile struct S0 *g_84 = &g_85;
static const int *g_94 = &g_48;
static const int ** volatile g_93 = &g_94;
static int **g_116 = (void*)0;
static const int ** volatile g_128 = &g_94;
static int * volatile g_162 = &g_48;
static const unsigned char g_163 = 249UL;
static int *** volatile g_165 = (void*)0;
static unsigned short g_166 = 0xCCC2L;
static volatile char g_174 = 1L;
static int *** volatile g_198 = &g_116;
static int ** const g_203 = &g_81;
static struct S0 g_207 = {0UL,4294967295UL,0x4533268BL};
static struct S0 *g_210 = (void*)0;
static struct S0 **g_209 = &g_210;
static struct S0 *** volatile g_208 = &g_209;
static struct S0 g_253 = {0xA72F8FBEL,0UL,4294967288UL};
static const int ** volatile g_255 = &g_94;
static const int ** volatile g_275 = (void*)0;
static const int ** volatile g_291 = &g_94;
static const int ** volatile g_322 = &g_94;
static const int ** volatile g_323 = (void*)0;
static int g_326 = 0xAA9CE8E0L;
static struct S0 ** volatile g_330 = &g_210;
static int * const volatile g_366 = &g_48;
static const int ** volatile g_368 = (void*)0;
static const int ** volatile g_369 = &g_94;
static struct S0 ** volatile g_391 = (void*)0;
static int * volatile g_428 = &g_326;
static struct S0 ** volatile g_476 = (void*)0;
static volatile unsigned short g_509 = 0x538BL;
static struct S0 g_513 = {4294967288UL,0x71156AD4L,4294967295UL};
static struct S0 *g_512 = &g_513;



static unsigned func_1(void);
static char func_4(struct S0 p_5, short p_6, short p_7, unsigned char p_8, int p_9);
static unsigned char func_16(unsigned p_17);
static unsigned func_18(struct S0 p_19, unsigned char p_20, unsigned char p_21, unsigned char p_22, int p_23);
static const int func_26(unsigned p_27, unsigned p_28, int ** p_29, int * p_30, int * p_31);
static int ** func_32(int * p_33, int ** p_34, const unsigned short p_35);
static int * func_36(int * const p_37, struct S0 p_38);
static const int * func_41(int * p_42);
static const int * func_52(int * p_53, int ** const p_54, char p_55);
static int ** const func_56(int * p_57, int ** p_58, int ** p_59, char p_60);
static unsigned func_1(void)
{
    struct S0 l_10 = {0xA971867BL,0UL,0x4990069FL};
    int *l_431 = &g_326;
    int *l_438 = (void*)0;
    int l_457 = (-9L);
    const struct S0 *l_480 = &l_10;
    unsigned l_487 = 0x24A886E9L;
    struct S0 l_518 = {4294967295UL,0x098A3ABFL,1UL};
    unsigned char l_539 = 0UL;
    unsigned char l_594 = 0x68L;
    (*g_428) = (safe_lshift_func_uint8_t_u_u((func_4(l_10, g_11, (safe_lshift_func_uint16_t_u_s((l_10.f2 & ((safe_lshift_func_uint8_t_u_u(func_16(func_18(l_10, g_11, l_10.f2, l_10.f0, l_10.f0)), g_253.f1)) & g_253.f2)), 6)), g_207.f1, l_10.f2) < g_163), l_10.f1));
    if (((safe_lshift_func_int8_t_s_u(0xFEL, (l_431 == l_431))) > 0xB6L))
    {
        unsigned short l_434 = 65532UL;
        short l_437 = 0x639AL;
        int *l_439 = &g_44;
        int *l_440 = &g_48;
        short l_441 = 0L;
        int l_442 = 0xC577488DL;
        (*l_431) = 0x26CBD6C7L;
        if ((g_207.f2 && (*l_439)))
        {
            unsigned char l_445 = 0x88L;
            unsigned l_448 = 4294967289UL;
            int * const l_449 = &g_48;
            int *l_450 = &g_44;
            l_440 = l_438;
            l_442 = l_441;
            if ((4294967293UL || ((safe_mod_func_int16_t_s_s(1L, g_207.f0)) | g_207.f1)))
            {
                l_445 = (0x77L | g_85.f0);
                (*l_439) = (safe_mul_func_int16_t_s_s((9UL ^ (6UL != (+g_207.f2))), ((void*)0 == &l_10)));
                (*l_439) = (*g_162);
            }
            else
            {
                (*l_431) = l_448;
                (*g_80) = l_431;
                (*l_449) = (((void*)0 != &g_366) == ((((safe_mod_func_uint16_t_u_u((*l_431), g_207.f0)) | ((*l_431) != (*l_449))) != ((+(*l_449)) && (safe_sub_func_int16_t_s_s(g_163, ((*l_449) >= (*l_439)))))) ^ g_85.f2));
                (*g_203) = l_438;
            }
            (*l_450) = (*l_449);
        }
        else
        {
            unsigned l_460 = 4294967292UL;
            (*l_439) = ((safe_sub_func_int16_t_s_s(l_457, (safe_div_func_uint16_t_u_u(l_460, g_85.f2)))) ^ (!(safe_mul_func_uint8_t_u_u(1UL, (*l_439)))));
        }
    }
    else
    {
        int *l_469 = (void*)0;
        int ***l_474 = &g_116;
        struct S0 *l_477 = (void*)0;
        if ((safe_mul_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u(0x82L, func_26((safe_lshift_func_int16_t_s_s(g_207.f0, (&l_457 != l_469))), (safe_rshift_func_int8_t_s_u((((safe_lshift_func_int8_t_s_u((((*l_431) == (((l_474 == &g_80) == 0L) & (*l_431))) <= 0xFD902092L), g_174)) ^ g_253.f2) & 0x43CC1BD8L), g_253.f1)), &l_438, &l_457, &l_457))), g_163)))
        {
            struct S0 *l_475 = (void*)0;
            struct S0 l_481 = {0x9273867AL,0xABE66CE9L,0xE1AF96DAL};
            int *l_488 = &g_48;
            int l_516 = 1L;
            l_477 = l_475;
            if (((-1L) < (~((safe_sub_func_uint16_t_u_u((l_480 != &l_10), (((l_481.f1 > 0x93L) & l_481.f0) | (-4L)))) && g_326))))
            {
                (*g_80) = l_488;
            }
            else
            {
                int l_491 = 0x3856854BL;
                int l_507 = (-6L);
                int * const l_515 = &l_491;
                l_491 = (safe_mod_func_int8_t_s_s(g_85.f0, ((!l_491) | g_163)));
                (*l_488) = (safe_div_func_uint32_t_u_u(((g_174 <= l_491) || func_26(g_166, (safe_add_func_int32_t_s_s(0L, (1UL || g_174))), &g_81, &l_491, &g_48)), 0x23761DE9L));
                (*g_366) = (safe_mul_func_int16_t_s_s((safe_div_func_uint8_t_u_u(0xDFL, g_166)), (safe_sub_func_int8_t_s_s(((void*)0 != &l_488), g_48))));
                if ((*l_431))
                {
                    unsigned char l_502 = 1UL;
                    struct S0 * const *l_506 = &g_210;
                    struct S0 * const **l_505 = &l_506;
                    const unsigned short l_508 = 65535UL;
                    int *l_510 = &g_326;
                    l_502 = (*l_488);
                    if ((safe_sub_func_uint16_t_u_u((l_508 | g_509), l_507)))
                    {
                        (*l_488) = 0x45244A6CL;
                        (*g_203) = l_510;
                    }
                    else
                    {
                        struct S0 *l_511 = &g_207;
                        int *l_514 = &l_457;
                        g_512 = l_511;
                        (*g_80) = l_514;
                    }
                    (**g_203) = 0x0E8E4600L;
                    (*g_322) = l_515;
                }
                else
                {
                    (*g_80) = &l_491;
                }
            }
            (*l_431) = l_516;
        }
        else
        {
            int l_517 = 0x4503A5F2L;
            struct S0 l_533 = {4294967286UL,0UL,0x29463CFAL};
            unsigned short l_534 = 0xF7D8L;
            int *l_537 = &g_48;
            int *l_538 = &g_44;
            unsigned short l_572 = 0xBBC5L;
            if ((l_517 == 0xD74EL))
            {
                unsigned char l_523 = 4UL;
                int * const l_540 = &g_48;
                if (((l_523 & 0L) <= (*l_431)))
                {
                    (*g_203) = &l_457;
                    for (g_253.f0 = 0; (g_253.f0 <= 7); g_253.f0 = safe_add_func_int8_t_s_s(g_253.f0, 2))
                    {
                        struct S0 **l_526 = &l_477;
                        (*g_80) = (*g_80);
                        (*l_526) = (void*)0;
                    }
                }
                else
                {
                    (*l_538) = (safe_mod_func_uint8_t_u_u(((safe_add_func_uint32_t_u_u((func_26((safe_add_func_uint16_t_u_u(g_207.f2, (0xF1L | l_523))), g_207.f0, &l_431, l_537, l_538) != (*l_431)), (*l_538))) && l_539), g_253.f1));
                    (*l_431) = (*l_431);
                }
                if ((7UL == (*g_162)))
                {
                    struct S0 l_541 = {0x82C6DAD4L,1UL,1UL};
                    int * const l_544 = &g_326;
                    int **l_545 = (void*)0;
                    int *l_551 = &l_457;
                    (*g_291) = l_544;
                    for (l_10.f1 = 0; (l_10.f1 >= 35); l_10.f1 = safe_add_func_uint16_t_u_u(l_10.f1, 8))
                    {
                        char l_548 = 0xCCL;
                        l_548 = (&g_203 == &g_368);
                        (*g_203) = l_538;
                        (*g_366) = ((((safe_mul_func_int8_t_s_s(g_207.f0, g_207.f2)) < (*l_540)) || 0xA2L) & (((&l_545 != &g_368) || (*l_538)) && (g_163 != g_207.f2)));
                    }
                    (*g_203) = l_551;
                    (*l_431) = (safe_add_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s((l_540 != (*g_203)), 0)), g_11));
                }
                else
                {
                    unsigned l_577 = 4294967286UL;
                    struct S0 l_578 = {0xAC1CA34CL,4294967295UL,0x9FBA819CL};
                    int *l_579 = &g_44;
                    (*l_538) = (safe_mod_func_uint32_t_u_u((safe_div_func_uint16_t_u_u(func_16((0x3A68L | ((safe_div_func_int8_t_s_s((safe_mul_func_uint16_t_u_u((safe_add_func_uint32_t_u_u(7UL, (safe_rshift_func_uint16_t_u_u((safe_mul_func_int8_t_s_s((*l_538), g_513.f1)), (safe_div_func_uint8_t_u_u(l_572, (safe_lshift_func_int8_t_s_u((g_207.f0 & func_16((((safe_add_func_int32_t_s_s(l_577, ((void*)0 == &g_366))) <= 0xE506L) && 0x94L))), g_207.f1)))))))), (*l_540))), g_207.f1)) > 5L))), (*l_540))), l_577));
                    (*g_203) = l_579;
                    (*l_431) = 0xD2101117L;
                }
            }
            else
            {
                return g_513.f1;
            }
            (*l_431) = ((&l_431 == &g_81) & ((safe_lshift_func_uint8_t_u_u((safe_mul_func_int8_t_s_s(g_253.f1, (safe_sub_func_int16_t_s_s(0xAD3AL, ((*l_431) && ((void*)0 != &g_428)))))), 5)) != (*l_538)));
            (*l_538) = (safe_sub_func_int16_t_s_s((0xFA75F79AL > (*l_537)), 1UL));
        }
        for (l_539 = (-3); (l_539 > 45); l_539++)
        {
            struct S0 **l_592 = &g_210;
            int l_593 = 0x20D07E12L;
            (*l_592) = &l_10;
            (*l_431) = (*l_431);
            (*g_203) = (void*)0;
            l_593 = 0x678F69DFL;
        }
    }
    return l_594;
}







static char func_4(struct S0 p_5, short p_6, short p_7, unsigned char p_8, int p_9)
{
    int **l_345 = &g_81;
    const unsigned short l_365 = 0xCBEDL;
    struct S0 **l_425 = &g_210;
    for (g_207.f0 = 25; (g_207.f0 <= 57); g_207.f0 = safe_add_func_int8_t_s_s(g_207.f0, 3))
    {
        short l_362 = 3L;
        struct S0 *l_390 = &g_253;
        int *l_398 = &g_326;
        const int **l_427 = &g_94;
        if ((!(g_253.f0 && g_85.f1)))
        {
            short l_346 = 0x8A9AL;
            int * const l_395 = &g_326;
            struct S0 l_399 = {0xD5A55B99L,0UL,0x978B2285L};
            struct S0 **l_426 = (void*)0;
            if ((safe_mul_func_uint16_t_u_u(6UL, (l_345 != (void*)0))))
            {
                unsigned l_359 = 0x395141DAL;
                int *l_379 = (void*)0;
                l_346 = func_16(p_5.f2);
                if ((safe_rshift_func_uint16_t_u_s(g_326, ((safe_lshift_func_int8_t_s_u(p_7, 2)) && g_163))))
                {
                    int l_378 = 0L;
                    if ((safe_mul_func_int8_t_s_s((p_5.f0 && 0xAEFCL), p_7)))
                    {
                        int *l_367 = &g_326;
                        (*g_366) = l_365;
                        (*g_369) = func_41(l_367);
                        (*g_366) = ((safe_rshift_func_int16_t_s_s(((safe_div_func_uint32_t_u_u((g_11 ^ ((safe_mod_func_int8_t_s_s(((*g_162) | ((p_9 == g_207.f2) >= g_163)), p_5.f1)) || ((((0xECEBL & (+(func_16((safe_div_func_uint8_t_u_u((l_346 & g_253.f1), g_207.f1))) >= 0xBDAC9935L))) <= l_378) >= 65529UL) ^ p_5.f0))), 0x350C091DL)) ^ g_253.f0), p_5.f1)) == l_378);
                        if ((*g_162))
                            continue;
                    }
                    else
                    {
                        (*g_203) = &l_378;
                        return g_174;
                    }
                    (*l_345) = &p_9;
                    (**g_80) = (safe_add_func_int16_t_s_s(p_7, g_326));
                    if (p_5.f1)
                    {
                        return g_85.f1;
                    }
                    else
                    {
                        p_9 = ((0UL || ((void*)0 == (*g_128))) != (safe_div_func_uint16_t_u_u(p_5.f0, (safe_rshift_func_int16_t_s_u((safe_mul_func_int16_t_s_s((g_48 ^ (~(0xED59L == p_5.f0))), (safe_rshift_func_int8_t_s_u((!p_7), p_7)))), 13)))));
                        return g_44;
                    }
                }
                else
                {
                    struct S0 **l_392 = &l_390;
                    (*l_392) = l_390;
                }
                for (p_5.f1 = 0; (p_5.f1 <= 14); p_5.f1 = safe_add_func_uint32_t_u_u(p_5.f1, 6))
                {
                    int **l_396 = &l_379;
                    (*l_345) = (void*)0;
                    (*l_396) = l_395;
                    (*g_203) = (void*)0;
                }
            }
            else
            {
                struct S0 **l_412 = &g_210;
                (*l_395) = (p_5.f0 && (!((*g_162) & (safe_unary_minus_func_uint32_t_u(((l_395 != l_398) == p_7))))));
                if (p_8)
                {
                    if ((*l_398))
                        break;
                }
                else
                {
                    (*l_345) = (void*)0;
                    (*l_395) = (safe_lshift_func_uint16_t_u_u((safe_add_func_int16_t_s_s(((((void*)0 == l_412) && func_16(((void*)0 == &g_368))) ^ p_5.f0), g_253.f0)), g_44));
                }
                for (g_48 = 0; (g_48 >= (-22)); --g_48)
                {
                    unsigned short l_417 = 1UL;
                    (*l_395) = (safe_mod_func_uint16_t_u_u(g_11, l_417));
                    for (g_11 = 1; (g_11 == 10); g_11++)
                    {
                        unsigned l_420 = 0UL;
                        (*l_398) = l_420;
                    }
                }
                for (l_399.f0 = (-4); (l_399.f0 >= 41); ++l_399.f0)
                {
                    (*g_322) = (*g_255);
                    (*l_345) = &p_9;
                    for (l_362 = 26; (l_362 > 26); l_362 = safe_add_func_int32_t_s_s(l_362, 2))
                    {
                        if (p_5.f0)
                            break;
                        l_426 = l_425;
                        p_9 = 0xF3046392L;
                    }
                }
            }
        }
        else
        {
            return g_326;
        }
        (*l_427) = (*g_322);
        if ((*l_398))
            break;
    }
    return g_253.f1;
}







static unsigned char func_16(unsigned p_17)
{
    unsigned l_339 = 4294967294UL;
    int *l_340 = &g_326;
    (*l_340) = (((!0x1BL) >= (safe_mod_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_s((g_85.f1 & 0xA82F8B99L), (p_17 && (safe_lshift_func_int8_t_s_u((g_253.f1 < g_326), (safe_rshift_func_uint8_t_u_u(p_17, l_339))))))), p_17))) | p_17);
    return (*l_340);
}







static unsigned func_18(struct S0 p_19, unsigned char p_20, unsigned char p_21, unsigned char p_22, int p_23)
{
    int *l_25 = (void*)0;
    int **l_24 = &l_25;
    struct S0 l_40 = {4294967295UL,0x2249687FL,0UL};
    int *l_325 = &g_326;
    (*l_24) = (void*)0;
    (*l_325) = func_26(g_11, g_11, func_32(func_36(g_39, l_40), g_116, p_20), l_325, (*l_24));
    return g_174;
}







static const int func_26(unsigned p_27, unsigned p_28, int ** p_29, int * p_30, int * p_31)
{
    struct S0 *l_329 = &g_207;
    for (g_48 = (-27); (g_48 == (-3)); g_48 = safe_add_func_int16_t_s_s(g_48, 5))
    {
        (*g_330) = l_329;
    }
    return (*p_30);
}







static int ** func_32(int * p_33, int ** p_34, const unsigned short p_35)
{
    short l_117 = 7L;
    int l_118 = (-1L);
    struct S0 **l_133 = (void*)0;
    int l_156 = 0x3DD5295BL;
    int l_160 = 0xC06464BDL;
    int **l_164 = &g_81;
    unsigned l_200 = 4294967288UL;
    const int *l_204 = &l_118;
    l_118 = ((l_117 == l_117) <= g_85.f2);
    for (g_44 = (-24); (g_44 != (-5)); ++g_44)
    {
        unsigned short l_123 = 0UL;
        int *l_125 = &l_118;
        int *l_126 = &l_118;
        l_123 = (safe_mul_func_int16_t_s_s(0L, 0UL));
        if (l_118)
        {
            int *l_124 = &g_44;
            l_125 = l_124;
            if ((*l_124))
                break;
            if ((*l_125))
                break;
        }
        else
        {
            int ** const l_127 = &g_81;
            (*g_128) = func_52(l_126, l_127, (~p_35));
        }
    }
    if ((safe_unary_minus_func_uint8_t_u((g_85.f2 || (safe_unary_minus_func_int32_t_s((l_117 ^ (safe_rshift_func_int16_t_s_u((+(g_85.f0 <= (((&l_118 == (void*)0) != ((l_133 != l_133) < (safe_sub_func_uint16_t_u_u((safe_mod_func_int32_t_s_s(((p_35 <= ((g_48 & (-3L)) | 0UL)) >= g_44), l_118)), l_117)))) < p_35))), 14)))))))))
    {
        int *l_138 = &g_48;
        (*l_138) = l_118;
        for (l_117 = 18; (l_117 <= 3); l_117 = safe_sub_func_int16_t_s_s(l_117, 8))
        {
            char l_151 = 0x8DL;
            (*l_138) = ((((safe_lshift_func_uint8_t_u_s(g_48, ((*l_138) != p_35))) <= ((*l_138) && (safe_add_func_uint8_t_u_u(255UL, ((safe_lshift_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s(g_85.f0, 5)), 4)) >= p_35))))) || g_11) == ((safe_lshift_func_uint16_t_u_s(1UL, l_151)) == (*l_138)));
        }
        l_138 = p_33;
        for (l_118 = (-16); (l_118 > 10); l_118++)
        {
            unsigned l_161 = 4294967292UL;
            for (g_44 = (-9); (g_44 > 14); g_44 = safe_add_func_uint16_t_u_u(g_44, 9))
            {
                int *l_157 = &g_48;
                (*l_157) = l_156;
            }
            for (l_117 = 0; (l_117 < (-5)); l_117 = safe_sub_func_uint16_t_u_u(l_117, 3))
            {
                if (l_160)
                {
                    (*g_162) = ((+p_35) >= (((void*)0 == (*g_93)) >= (l_161 != 0UL)));
                }
                else
                {
                    (*g_80) = (*g_80);
                }
                if (p_35)
                    break;
                (*g_162) = g_163;
                (*g_128) = (void*)0;
            }
            g_116 = l_164;
        }
    }
    else
    {
        (*l_164) = (*l_164);
    }
    if ((&g_84 == (void*)0))
    {
        short l_173 = 0x4E1FL;
        if ((((g_85.f2 | 0xE8L) != (((g_166 < 0xD9L) && (0UL | ((safe_lshift_func_int8_t_s_u(((safe_div_func_uint32_t_u_u((safe_div_func_int8_t_s_s(l_173, 0x4EL)), 4294967295UL)) ^ p_35), p_35)) & 0xF8L))) > p_35)) == g_166))
        {
            unsigned l_177 = 0xC3EA9617L;
            g_174 = 0xCDFB547BL;
            l_177 = (~(safe_lshift_func_uint8_t_u_u((p_33 == (*g_93)), 1)));
            (*g_162) = (safe_sub_func_int16_t_s_s(l_173, g_174));
        }
        else
        {
            return &g_81;
        }
    }
    else
    {
        unsigned short l_180 = 0xF0A5L;
        short l_186 = 0xE779L;
        int *l_191 = &g_44;
        const int *l_321 = &g_48;
        const int **l_324 = &g_94;
        (*g_80) = (*l_164);
        if ((*g_162))
        {
            const unsigned char l_185 = 0xEAL;
            const int *l_190 = &g_44;
            struct S0 l_251 = {0x9A7C4AD1L,0xBBA7C666L,0UL};
            const struct S0 *l_299 = &g_207;
            const struct S0 **l_298 = &l_299;
            const struct S0 ** const *l_297 = &l_298;
            unsigned short l_304 = 0x1239L;
            if (l_180)
            {
                int ** const l_184 = (void*)0;
                unsigned short l_199 = 0x7C3CL;
                struct S0 *l_206 = &g_207;
                struct S0 ** const l_205 = &l_206;
                for (g_48 = 0; (g_48 <= (-4)); g_48 = safe_sub_func_int32_t_s_s(g_48, 7))
                {
                    int *l_183 = &l_118;
                    const int **l_187 = &g_94;
                    (*l_187) = (*g_93);
                    if (l_180)
                        continue;
                    if ((safe_rshift_func_uint8_t_u_u(0xF5L, g_11)))
                    {
                        const unsigned char l_197 = 255UL;
                        (*l_191) = (((g_163 || (l_190 == l_191)) & (safe_add_func_uint16_t_u_u((safe_unary_minus_func_int32_t_s((safe_add_func_uint32_t_u_u(g_85.f0, p_35)))), (l_191 != (void*)0)))) > (*l_183));
                        (*l_183) = l_197;
                        (*g_198) = &p_33;
                    }
                    else
                    {
                        (*l_191) = (*l_191);
                        g_84 = &g_85;
                    }
                    if ((l_199 || p_35))
                    {
                        unsigned short l_201 = 0xD019L;
                        const int *l_202 = &l_118;
                        l_200 = (&p_33 != l_184);
                        l_201 = p_35;
                        (*l_187) = l_202;
                    }
                    else
                    {
                        int ** const l_211 = &g_81;
                        l_204 = func_52(p_33, g_203, p_35);
                        (*g_208) = l_205;
                        (*l_187) = func_52((*g_203), l_211, ((*l_183) ^ (safe_mul_func_int16_t_s_s((safe_mul_func_int16_t_s_s(((safe_rshift_func_uint8_t_u_s(p_35, 2)) | p_35), (*l_190))), (safe_lshift_func_int16_t_s_u(p_35, 15))))));
                        if ((*l_183))
                            continue;
                    }
                }
                (*l_191) = (safe_rshift_func_int8_t_s_s((safe_mod_func_uint16_t_u_u((safe_mul_func_int16_t_s_s((g_48 == (((((safe_add_func_uint32_t_u_u(((((safe_mod_func_uint8_t_u_u((safe_mul_func_int16_t_s_s(p_35, (0L || g_166))), g_85.f0)) | 0x1E6AL) >= (~65535UL)) != g_207.f0), 1L)) && 9UL) ^ p_35) != 0x620B5F74L) && (*l_190))), p_35)), p_35)), g_207.f0));
                if ((((((safe_sub_func_uint32_t_u_u((*l_191), 0xF8B66003L)) >= (safe_sub_func_uint8_t_u_u((*l_190), 252UL))) & ((safe_unary_minus_func_uint32_t_u(p_35)) && ((0x8B57L | (p_35 || (&l_205 == (void*)0))) > p_35))) && (*l_191)) == l_199))
                {
                    for (l_200 = (-14); (l_200 == 59); l_200 = safe_add_func_int16_t_s_s(l_200, 3))
                    {
                        (*l_191) = (*g_162);
                    }
                    for (g_48 = 0; (g_48 != 2); g_48 = safe_add_func_uint16_t_u_u(g_48, 8))
                    {
                        (*l_191) = ((safe_lshift_func_int8_t_s_s(g_207.f1, 3)) == p_35);
                    }
                }
                else
                {
                    (*l_191) = (*g_162);
                    (*l_191) = (*l_190);
                }
                for (g_166 = 28; (g_166 <= 10); g_166--)
                {
                    char l_247 = 1L;
                    struct S0 l_252 = {7UL,0x322C8E7EL,0x02831344L};
                    int *l_254 = &g_48;
                    for (l_186 = 6; (l_186 == (-7)); l_186 = safe_sub_func_int8_t_s_s(l_186, 5))
                    {
                        unsigned l_248 = 9UL;
                        (*l_164) = p_33;
                        l_248 = l_247;
                        (*l_191) = (safe_mod_func_int16_t_s_s(0xEC3FL, g_48));
                        (*l_191) = (-1L);
                    }
                    (*l_164) = l_254;
                    (**g_80) = (0x0CL <= p_35);
                    (*g_255) = l_190;
                }
            }
            else
            {
                (*l_191) = (((*l_191) || (g_207.f1 | (*l_191))) > (safe_rshift_func_int16_t_s_u(0xAD61L, 5)));
            }
            if ((*l_190))
            {
                short l_262 = 0L;
                (*l_191) = ((~((safe_lshift_func_uint16_t_u_s((*l_190), 4)) | (safe_lshift_func_uint16_t_u_u(((l_262 || (safe_lshift_func_int16_t_s_s(((((g_85.f2 <= 0x44E3L) | p_35) | ((g_11 & l_262) <= ((~(*l_191)) & p_35))) & p_35), p_35))) | 0x97L), (*l_191))))) && p_35);
                (*g_162) = 0x43BD0F48L;
            }
            else
            {
                int l_265 = 0x5F2BC740L;
                unsigned char l_288 = 0UL;
                int l_305 = 1L;
                unsigned l_316 = 4294967295UL;
                if (l_265)
                {
                    int *l_266 = &g_48;
                    (*g_203) = l_266;
                    (**g_203) = (safe_sub_func_uint8_t_u_u((((4294967295UL || ((((safe_add_func_int8_t_s_s(((~(safe_lshift_func_uint16_t_u_u(p_35, p_35))) && g_44), ((((0x3D79FE80L && ((*l_190) < ((void*)0 != (*g_255)))) ^ (!g_166)) & p_35) == 0x930371CFL))) ^ 0x0E3EL) | (**l_164)) != g_11)) >= (*l_190)) <= l_265), g_253.f2));
                    for (l_156 = 0; (l_156 != 19); ++l_156)
                    {
                        const int **l_276 = (void*)0;
                        const int **l_277 = &l_204;
                        (*l_277) = l_190;
                    }
                    (**g_80) = (*l_266);
                }
                else
                {
                    int *l_289 = &g_44;
                    const int *l_293 = &g_48;
                    struct S0 ***l_296 = (void*)0;
                    (*g_203) = (void*)0;
                    if ((safe_mod_func_uint32_t_u_u(p_35, (safe_div_func_uint16_t_u_u(p_35, (safe_mod_func_uint32_t_u_u((safe_mod_func_uint32_t_u_u((p_35 && g_85.f2), (safe_sub_func_int16_t_s_s((((*l_190) > ((p_35 != ((g_11 && ((*l_191) >= l_288)) > 0x80L)) < g_44)) < 0x9EDDL), 0x2704L)))), p_35)))))))
                    {
                        const int **l_290 = (void*)0;
                        (*l_164) = l_289;
                        (*g_291) = l_190;
                    }
                    else
                    {
                        const int **l_292 = &l_204;
                        (*l_292) = (*g_291);
                        l_293 = func_52(l_289, &p_33, ((((*l_191) | g_85.f2) || g_174) || (*l_190)));
                        (*l_191) = 0xAE71CA87L;
                        (*l_292) = (*l_292);
                    }
                    l_305 = (((safe_mul_func_int16_t_s_s(0xAC5DL, 65532UL)) && (l_296 == l_297)) >= (0x78792005L < (safe_mul_func_uint8_t_u_u(((g_85.f1 || 0UL) && l_304), 255UL))));
                    (*l_191) = ((safe_sub_func_uint32_t_u_u((safe_div_func_int32_t_s_s((safe_sub_func_int32_t_s_s(((safe_lshift_func_uint8_t_u_s(((l_288 || g_85.f1) & p_35), (*l_191))) < (0x67L ^ ((&l_133 == &g_209) | (safe_add_func_int8_t_s_s(((*l_289) & 0xAF64L), p_35))))), p_35)), l_316)), 0x1F7841CAL)) >= 4L);
                }
            }
            for (l_251.f1 = 0; (l_251.f1 < 10); l_251.f1 = safe_add_func_uint16_t_u_u(l_251.f1, 9))
            {
                (*l_164) = p_33;
                (*l_164) = func_36((*l_164), (**l_298));
            }
        }
        else
        {
            const int *l_319 = &l_118;
            const int **l_320 = &g_94;
            (*l_320) = l_319;
            (*l_320) = (*g_93);
        }
        (*g_322) = l_321;
        (*l_324) = (*g_255);
    }
    return l_164;
}







static int * func_36(int * const p_37, struct S0 p_38)
{
    int *l_43 = &g_44;
    const int **l_115 = &g_94;
    (*l_115) = func_41(l_43);
    return (*g_80);
}







static const int * func_41(int * p_42)
{
    int l_49 = (-1L);
    int *l_87 = &g_44;
    const int *l_112 = &g_48;
    for (g_44 = 0; (g_44 == (-1)); --g_44)
    {
        int *l_47 = &g_48;
        char l_82 = 0x14L;
        const int *l_83 = &g_48;
        (*l_47) = (*p_42);
        if (l_49)
        {
            int *l_61 = (void*)0;
            int l_78 = 0L;
            unsigned l_109 = 0x0E7FB9BEL;
            for (l_49 = (-13); (l_49 > 2); l_49 = safe_add_func_int8_t_s_s(l_49, 5))
            {
                unsigned char l_70 = 0x82L;
                unsigned short l_77 = 65534UL;
                volatile struct S0 **l_86 = &g_84;
                l_83 = func_52(&g_48, func_56(l_61, &p_42, &p_42, ((~((safe_mul_func_int8_t_s_s((*l_47), (safe_mul_func_uint16_t_u_u(((safe_add_func_uint8_t_u_u((safe_div_func_uint32_t_u_u(l_70, g_44)), (g_44 <= (safe_add_func_int8_t_s_s((safe_div_func_int16_t_s_s((((safe_sub_func_int8_t_s_s(g_48, g_11)) <= 0xAAC01277L) & g_48), l_77)), l_78))))) > l_49), g_44)))) | g_44)) & (*l_47))), l_82);
                (*p_42) = g_44;
                (*l_86) = g_84;
                (*l_86) = (*l_86);
            }
            if ((0UL == ((void*)0 != &l_78)))
            {
                l_83 = (*g_80);
                l_78 = (*p_42);
            }
            else
            {
                unsigned l_90 = 0xE668196EL;
                (*g_93) = func_52(l_87, &l_61, (safe_sub_func_uint8_t_u_u(l_90, (safe_lshift_func_int16_t_s_u(g_85.f1, (*l_87))))));
                (*l_47) = (((g_48 > (safe_mod_func_int8_t_s_s(((&p_42 == (void*)0) != l_90), ((safe_add_func_int16_t_s_s(g_85.f2, (((*l_87) <= (*l_87)) <= (safe_mul_func_int16_t_s_s(((safe_rshift_func_int8_t_s_u(g_44, 6)) >= g_44), 0x30EDL))))) | g_11)))) > g_48) | (*l_87));
            }
            if ((*p_42))
            {
                (*l_47) = (safe_mul_func_int16_t_s_s((safe_sub_func_int16_t_s_s((!g_48), (((safe_lshift_func_int16_t_s_s((*l_47), 0)) != l_109) > g_44))), (*l_87)));
            }
            else
            {
                if ((*l_87))
                    break;
                (*g_93) = (*g_80);
            }
            return (*g_93);
        }
        else
        {
            for (g_48 = 15; (g_48 < (-1)); g_48 = safe_sub_func_uint8_t_u_u(g_48, 2))
            {
                (*g_80) = p_42;
            }
            return l_112;
        }
    }
    (*l_87) = ((g_85.f2 == (*l_87)) <= (safe_lshift_func_uint16_t_u_s(g_11, 8)));
    return p_42;
}







static const int * func_52(int * p_53, int ** const p_54, char p_55)
{
    (*p_54) = (*p_54);
    return (*g_80);
}







static int ** const func_56(int * p_57, int ** p_58, int ** p_59, char p_60)
{
    int *l_79 = &g_48;
    l_79 = l_79;
    g_48 = (*l_79);
    (*p_58) = l_79;
    return g_80;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_11, "g_11", print_hash_value);
    transparent_crc(g_44, "g_44", print_hash_value);
    transparent_crc(g_48, "g_48", print_hash_value);
    transparent_crc(g_85.f0, "g_85.f0", print_hash_value);
    transparent_crc(g_85.f1, "g_85.f1", print_hash_value);
    transparent_crc(g_85.f2, "g_85.f2", print_hash_value);
    transparent_crc(g_163, "g_163", print_hash_value);
    transparent_crc(g_166, "g_166", print_hash_value);
    transparent_crc(g_174, "g_174", print_hash_value);
    transparent_crc(g_207.f0, "g_207.f0", print_hash_value);
    transparent_crc(g_207.f1, "g_207.f1", print_hash_value);
    transparent_crc(g_207.f2, "g_207.f2", print_hash_value);
    transparent_crc(g_253.f0, "g_253.f0", print_hash_value);
    transparent_crc(g_253.f1, "g_253.f1", print_hash_value);
    transparent_crc(g_253.f2, "g_253.f2", print_hash_value);
    transparent_crc(g_326, "g_326", print_hash_value);
    transparent_crc(g_509, "g_509", print_hash_value);
    transparent_crc(g_513.f0, "g_513.f0", print_hash_value);
    transparent_crc(g_513.f1, "g_513.f1", print_hash_value);
    transparent_crc(g_513.f2, "g_513.f2", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
