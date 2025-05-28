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



static unsigned short g_4 = 0xA53AL;
static int g_46 = 0xB1067DCCL;
static short g_51 = (-1L);
static unsigned short **g_62 = (void*)0;
static unsigned char g_66 = 3UL;
static int g_71 = (-1L);
static int g_73 = (-3L);
static char g_87 = 0x0CL;
static short g_128 = 1L;
static int *g_161 = &g_73;
static int **g_160 = &g_161;
static char g_175 = 8L;
static char g_177 = 0x8FL;
static const int *g_245 = &g_46;
static const int **g_244 = &g_245;
static int g_262 = 0xD8CA7F0EL;
static int g_276 = 0x8B35087BL;
static int g_297 = (-3L);
static const unsigned short g_298 = 65535UL;
static unsigned short g_333 = 1UL;
static unsigned g_335 = 1UL;
static char *g_338 = &g_177;
static char **g_350 = &g_338;
static int g_370 = 0xFC175208L;
static unsigned g_396 = 0x760FD3A3L;
static unsigned short *g_418 = &g_4;
static unsigned g_427 = 0x4A2F87CAL;
static unsigned *g_470 = &g_396;
static unsigned **g_469 = &g_470;
static int *** const g_485 = &g_160;
static int *** const *g_484 = &g_485;
static unsigned short g_493 = 1UL;
static int g_552 = 0L;
static unsigned char *g_574 = &g_66;
static unsigned char **g_573 = &g_574;
static unsigned g_583 = 0x396881C8L;
static unsigned char g_606 = 0xDCL;
static const int *g_607 = &g_297;
static unsigned ***g_624 = &g_469;
static int g_641 = 0x19E941E3L;
static int ***g_716 = &g_160;
static unsigned char g_722 = 9UL;



static short func_1(void);
static unsigned char func_8(unsigned short p_9);
static short func_13(unsigned short * p_14, unsigned short * p_15, const unsigned p_16, unsigned short * p_17);
static unsigned short func_20(unsigned short p_21, unsigned p_22);
static unsigned short * func_32(unsigned short * p_33, unsigned char p_34, const int p_35, short p_36, int p_37);
static int func_40(unsigned short * p_41, unsigned short * p_42);
static int * func_74(unsigned short p_75, unsigned p_76, int * p_77, const unsigned short * p_78);
static int func_95(unsigned char * p_96, const unsigned short p_97, int p_98, unsigned short ** p_99);
static char func_109(unsigned p_110);
static unsigned func_120(unsigned char * p_121, int p_122);
static short func_1(void)
{
    unsigned l_2 = 0x73838A1FL;
    unsigned short *l_3 = &g_4;
    char *l_381 = (void*)0;
    const unsigned short *l_397 = &g_4;
    unsigned char *l_438 = &g_66;
    unsigned char **l_437 = &l_438;
    int l_439 = 0x25C39C28L;
    unsigned short *l_490 = (void*)0;
    char l_511 = 0xE6L;
    int ***l_586 = &g_160;
    int ****l_585 = &l_586;
    int *****l_584 = &l_585;
    int *l_611 = &g_262;
    unsigned ***l_623 = (void*)0;
    int l_627 = 0x35E154FAL;
    short l_638 = 0xC7CEL;
    const unsigned char l_639 = 0x05L;
    unsigned char l_658 = 0x95L;
    unsigned short l_663 = 1UL;
    int *l_664 = &g_641;
    int *l_665 = &g_276;
    unsigned short l_670 = 0UL;
    unsigned l_671 = 1UL;
    unsigned char l_672 = 0x6CL;
    int *l_673 = &g_46;
    int l_717 = 0x818634A8L;
    if ((((*l_3) = l_2) <= 0UL))
    {
        char l_10 = 0L;
        short *l_368 = &g_128;
        int *l_369 = &g_370;
        unsigned char *l_373 = &g_66;
        int l_454 = (-1L);
        unsigned char l_455 = 0xDAL;
        char *l_456 = (void*)0;
        char *l_457 = &g_175;
        const unsigned short l_468 = 1UL;
        unsigned ***l_477 = &g_469;
        int l_496 = 3L;
        int *l_522 = &l_496;
        (*l_369) ^= (248UL < ((((*l_368) = ((0xB7BEDEDBL != (safe_div_func_uint16_t_u_u(0UL, (safe_unary_minus_func_uint8_t_u(func_8(l_10)))))) , ((safe_div_func_int16_t_s_s(l_10, func_109((safe_mod_func_int16_t_s_s((~func_109(g_262)), (safe_rshift_func_uint16_t_u_s((safe_mod_func_int16_t_s_s(func_40(l_3, l_3), 65535UL)), g_262))))))) >= l_2))) > 1L) & l_2));

        ;

        for (g_297 = 0; (g_297 <= (-12)); g_297--)
        {
            unsigned short l_380 = 0x8A87L;
            char **l_382 = &l_381;
            int l_416 = 0x2AF1B3B3L;
        }
        l_439 = 0L;
        if (((safe_lshift_func_int16_t_s_s(g_87, ((((*l_457) = (safe_lshift_func_int16_t_s_s((~(safe_div_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s((func_120((((safe_mul_func_uint8_t_u_u(g_71, (safe_mul_func_int8_t_s_s(((((safe_div_func_uint8_t_u_u((*l_369), (*l_369))) == (*l_369)) <= (&l_10 != (((void*)0 != &g_244) , (void*)0))) == l_454), g_51)))) >= g_73) , &g_66), g_51) ^ 255UL), l_455)), (-1L)))), g_87))) & 1L) & g_4))) < (-3L)))
        {
            int *l_463 = &g_276;
            unsigned l_464 = 8UL;
            unsigned *l_465 = (void*)0;
            unsigned *l_466 = (void*)0;
            unsigned *l_467 = &g_427;
            (*g_161) = func_20((g_333 > (l_439 , ((safe_div_func_int8_t_s_s((((*l_3) = 5UL) ^ func_120(((*l_437) = &g_66), ((safe_div_func_uint32_t_u_u(((*l_467) ^= (!(safe_unary_minus_func_int32_t_s(((((+func_120(&g_66, ((*l_463) = ((**g_160) ^ ((*l_369) , func_40(l_3, &g_333)))))) == l_464) & 5L) , 6L))))), l_468)) , g_298))), (*l_369))) | (-6L)))), g_128);
        }
        else
        {
            unsigned ***l_471 = (void*)0;
            unsigned ***l_472 = (void*)0;
            unsigned ***l_473 = (void*)0;
            unsigned ***l_474 = (void*)0;
            unsigned ***l_475 = &g_469;
            int l_476 = 0x4AD92432L;
            unsigned char **l_488 = (void*)0;
            unsigned short *l_492 = &g_4;
            unsigned *l_513 = &g_427;
            int l_519 = 0x4B35B518L;
            (*l_475) = g_469;
            (*g_161) ^= l_476;
            if ((&g_469 == l_477))
            {
                int *** const l_479 = &g_160;
                int *** const *l_478 = &l_479;
                int *** const **l_480 = (void*)0;
                int *** const **l_481 = &l_478;
                int *** const *l_483 = &l_479;
                int *** const **l_482 = &l_483;
                unsigned char ***l_489 = &l_488;
                unsigned l_525 = 4294967295UL;
                unsigned char l_536 = 0x49L;
                unsigned l_537 = 4294967286UL;
                if (((((*l_482) = ((*l_481) = l_478)) == g_484) , (((safe_mul_func_uint16_t_u_u((&l_373 != ((*l_489) = l_488)), g_128)) , (*g_470)) , l_476)))
                {
                    unsigned short *l_491 = &g_4;
                    (*****l_481) &= l_2;
                    (*g_244) = (*g_244);
                    l_496 ^= (((((func_20(l_2, ((g_493 < (((****l_478) = 6L) , (l_439 != ((safe_lshift_func_int8_t_s_u(g_276, 0)) > 65535UL)))) , (**g_469))) && g_51) || 0x4CL) != 249UL) && (*****l_481)) < (*l_369));
                    for (g_396 = 0; (g_396 < 17); g_396 = safe_add_func_uint8_t_u_u(g_396, 6))
                    {
                        return l_476;
                    }
                }
                else
                {
                    short l_508 = (-1L);
                    int l_509 = (-1L);
                    unsigned char *l_510 = (void*)0;
                    for (g_87 = 0; (g_87 <= 25); g_87 = safe_add_func_int32_t_s_s(g_87, 4))
                    {
                        unsigned *l_507 = (void*)0;
                        int *l_512 = &l_496;
                        (*l_512) ^= (safe_lshift_func_int8_t_s_u((((g_396 || (safe_rshift_func_uint16_t_u_s(((safe_mul_func_int8_t_s_s((func_109((((l_508 = (g_427 = (&g_66 != ((*l_437) = (*l_437))))) != ((*****l_482) = (l_439 != func_20(l_509, l_509)))) , ((*l_369) ^ ((*l_437) != l_510)))) || (*l_369)), 0xD7L)) & l_511), g_177))) < l_509) || l_509), l_509));
                        (*l_512) |= (***g_485);
                    }
                    return g_276;
                }
                if ((l_476 > (***g_485)))
                {
                    int l_514 = 0x1867BA51L;
                    unsigned short *l_517 = &g_493;
                    unsigned short *l_518 = &g_4;
                    (*l_369) &= ((func_120(&g_66, ((*g_470) , g_276)) > 1L) == l_2);
                }
                else
                {
                    int * const *l_534 = &g_161;
                    int * const ** const l_533 = &l_534;
                    int * const ** const *l_532 = &l_533;
                    for (l_511 = (-2); (l_511 != 11); l_511 = safe_add_func_uint8_t_u_u(l_511, 6))
                    {
                        unsigned l_535 = 0x13648CB2L;
                        (***g_484) = l_522;

                        ;
                        l_519 &= func_109(((safe_sub_func_uint32_t_u_u((l_525 | (g_66 = (safe_add_func_uint8_t_u_u((+(((***l_479) , (safe_mod_func_uint8_t_u_u((~(l_439 && (((1L == 4294967288UL) && (safe_lshift_func_uint16_t_u_s(0x18B7L, (l_532 != (((l_2 <= (l_476 = l_535)) < l_536) , (void*)0))))) | (***g_485)))), 8UL))) , g_66)), (****l_478))))), 0x4444413DL)) , l_537));
                    }

                    ;
                }

                ;
                (*l_369) &= (****g_484);
                g_350 = &g_338;
            }
            else
            {
                unsigned char l_544 = 0x6AL;
                int l_551 = 0xC1324EDFL;
                const unsigned short *l_553 = &g_493;
                int *l_554 = &l_551;
                l_554 = &l_439;

                ;
            }

            ;
        }

        ;
    }
    else
    {
        int ***l_560 = &g_160;
        int ****l_559 = &l_560;
        int *****l_561 = &l_559;
        char *l_617 = &l_511;
        unsigned char l_621 = 1UL;
        unsigned short *l_625 = &g_333;
        unsigned l_642 = 4294967293UL;
        short *l_650 = &l_638;
        int l_661 = (-1L);
        if (((safe_rshift_func_int8_t_s_s((*g_338), 2)) != (safe_lshift_func_int8_t_s_u(func_109(((((*g_418) = 65531UL) < 0x490FL) != (func_120(&g_66, (&g_485 != ((*l_561) = l_559))) & 0L))), 2))))
        {
            char * const *l_564 = &l_381;
            int l_577 = 0x11B5C619L;
            int **l_618 = (void*)0;
            if (((*g_245) == (((safe_add_func_uint16_t_u_u(l_2, (****l_559))) , &g_338) == l_564)))
            {
                unsigned ***l_565 = &g_469;
                (*l_565) = &g_470;
            }
            else
            {
                short l_568 = 0x4078L;
                unsigned *l_571 = (void*)0;
                unsigned *l_572 = &g_427;
                char *l_580 = &g_175;
                unsigned *l_581 = (void*)0;
                unsigned *l_582 = &g_583;
                unsigned l_604 = 0UL;
                if ((safe_div_func_uint32_t_u_u((((**g_469) = l_568) , func_20((((safe_div_func_uint32_t_u_u(((*l_572) |= (0x435CL && (***l_560))), ((*l_582) |= ((((*l_580) ^= (((g_87 , 9L) , ((g_573 == &g_574) && (safe_add_func_int32_t_s_s(l_577, ((safe_mod_func_int32_t_s_s((**g_160), (*g_161))) != (*g_245)))))) && (*g_338))) < (**g_573)) | 7L)))) , l_584) == &g_484), (*****l_561))), l_577)))
                {
                    short l_595 = 0xF6FAL;
                    unsigned *l_600 = (void*)0;
                    int *l_603 = &g_276;
                    unsigned char *l_605 = &g_606;
                    const int **l_608 = &g_607;
                    (*g_160) = l_600;

                    ;
                    (*l_608) = ((*g_244) = g_607);

                    ;
                    if (g_177)
                        goto lbl_662;
                }
                else
                {
                    for (g_370 = (-22); (g_370 < (-20)); g_370 = safe_add_func_int32_t_s_s(g_370, 6))
                    {
                        int *l_612 = (void*)0;
                        l_612 = l_611;

                        ;
                        (*g_244) = l_612;

                        ;
                    }

                    ;
                }

                ;
                ;
            }

            ;
            ;
            (*l_611) = ((safe_sub_func_uint8_t_u_u(((((**g_244) == (safe_lshift_func_int16_t_s_s(((*l_564) == l_617), 15))) > (((((*l_437) = (*g_573)) == (void*)0) , (**g_484)) == l_618)) <= (((g_427 > (safe_sub_func_uint16_t_u_u(func_120((*g_573), l_577), 0x633DL))) > 5L) >= 0x7CA7L)), (-9L))) | 7L);
        }
        else
        {
            char l_622 = 0xA2L;
            int l_626 = 0L;
            unsigned short **l_637 = &l_625;
            short *l_640 = &g_51;
            l_627 |= (+(func_109((((((*l_611) , (l_622 = func_109(l_621))) , &g_469) != (g_624 = l_623)) <= ((**g_350) <= ((~func_40(((**g_469) , l_625), l_625)) , (**g_573))))) > l_626));

            ;
            (*g_244) = ((****l_561) = (*g_160));

            ;
        }

        ;
        ;
        ;
lbl_662:
        if ((safe_unary_minus_func_uint16_t_u((((*l_650) = ((safe_rshift_func_int16_t_s_u(g_73, (safe_add_func_uint8_t_u_u((safe_sub_func_int8_t_s_s(0x8EL, (2L & 0UL))), (**g_350))))) || (*l_611))) , (*g_418)))))
        {
            unsigned short l_651 = 0x6C11L;
            unsigned short l_652 = 0x36DAL;
            l_652 = (l_651 = (**g_244));
            (*l_611) &= (((0x287245DAL > g_333) <= 1UL) <= 65535UL);
            for (l_621 = 0; (l_621 <= 59); ++l_621)
            {
                if ((*g_245))
                    break;
            }
        }
        else
        {
            for (g_175 = 0; (g_175 > (-19)); g_175 = safe_sub_func_uint16_t_u_u(g_175, 2))
            {
                char l_657 = 1L;
                l_658 = l_657;
                (*l_611) = (-1L);
                (*l_611) = (safe_div_func_uint32_t_u_u(g_71, 0xACAF62CAL));
            }
            return l_661;
        }
        l_661 &= (+(**g_244));
        return g_51;
    }


    ;

    (**g_485) = (((*l_665) ^= ((*l_664) ^= (l_663 >= (*l_611)))) , l_673);

    ;
    (***l_585) = (void*)0;

    ;
    for (l_2 = 0; (l_2 > 2); ++l_2)
    {
        unsigned short *l_676 = &g_333;
        unsigned char *l_687 = &g_606;
        int l_688 = 2L;
        const int *****l_701 = (void*)0;
        int l_703 = 0L;
        unsigned char l_711 = 1UL;
        int ***l_715 = &g_160;
        int ****l_714 = &l_715;
        char *l_731 = &g_87;
        char *l_732 = &g_177;
        int *l_733 = &l_439;
        int *** const *l_743 = (void*)0;
        int *l_744 = (void*)0;
        int *l_745 = &l_688;
        if (func_40(&l_663, l_676))
        {
            short l_677 = 7L;
            unsigned short **l_691 = &g_418;
            short l_693 = (-1L);
            unsigned char l_698 = 0UL;
            char *l_702 = &g_87;
            (***l_585) = (***g_484);
            if ((0xBD9DL | ((&g_418 != &l_490) != l_677)))
            {
                char ***l_678 = &g_350;
                char **l_680 = &l_381;
                char ***l_679 = &l_680;
                int l_692 = 0x84F4D918L;
                if ((((*l_679) = ((*l_678) = &g_338)) != &g_338))
                {
                    unsigned char l_689 = 0UL;
                    unsigned char *l_690 = &l_672;
                    (*l_611) ^= (safe_add_func_uint8_t_u_u((((safe_div_func_int16_t_s_s((((safe_rshift_func_int16_t_s_s(func_120(l_687, (func_20(((*l_676) = ((l_688 = (-9L)) , l_677)), l_689) , g_370)), ((3UL < l_689) != l_689))) != (-1L)) && l_688), l_689)) , g_66) , (*g_574)), l_689));
                    (*l_673) = l_692;
                    (*l_673) = ((*l_611) = l_689);
                }
                else
                {
                    return g_46;
                }

                ;
            }
            else
            {
                l_693 = l_677;
            }
            if ((0xC4L | (safe_rshift_func_int8_t_s_u((safe_mul_func_uint8_t_u_u(((l_688 < l_698) | ((safe_lshift_func_int8_t_s_s(((*l_702) ^= ((*g_574) , (((void*)0 != l_701) | (g_46 ^ (l_693 , l_693))))), 5)) , l_703)), 0x10L)), 4))))
            {
                int l_704 = 1L;
                return l_704;
            }
            else
            {
                (**g_485) = (**l_586);
            }
        }
        else
        {
            const unsigned char l_712 = 0x2EL;
            int l_713 = 3L;
            l_713 = (((0UL < (((((void*)0 == &g_350) , ((safe_rshift_func_uint8_t_u_s(0x33L, (safe_sub_func_int32_t_s_s((((safe_sub_func_int32_t_s_s(((*l_611) |= ((void*)0 == (**g_624))), (l_703 != g_4))) <= (*g_418)) != 0x34246887L), (*g_607))))) <= 9L)) == 65535UL) ^ l_712)) , (*g_607)) , l_712);
        }
    }
    return (*l_673);
}







static unsigned char func_8(unsigned short p_9)
{
    unsigned short *l_18 = &g_4;
    int l_19 = 0x657E3B6FL;
    unsigned short l_31 = 0x9E17L;
    unsigned short *l_48 = &l_31;
    unsigned short **l_47 = &l_48;
    unsigned short *l_50 = &l_31;
    unsigned short **l_49 = &l_50;
    int l_52 = 0xAA9B2235L;
    short l_311 = 0xB6AFL;
    unsigned char *l_345 = (void*)0;
    char **l_349 = (void*)0;
    unsigned *l_353 = &g_335;
    if ((safe_rshift_func_uint8_t_u_u((func_13(&g_4, l_18, (l_19 <= func_20(g_4, ((l_18 != (void*)0) | (safe_sub_func_uint8_t_u_u((safe_add_func_int32_t_s_s(((+(safe_mul_func_int16_t_s_s((l_52 = ((safe_mul_func_uint16_t_u_u(p_9, (l_31 != (((((((g_51 |= (((*l_49) = ((*l_47) = func_32(&l_31, l_31, l_19, l_31, p_9))) == (void*)0)) && 1UL) , (*l_47)) == &p_9) , g_51) != 255UL) & g_4)))) , g_51)), p_9))) | p_9), g_4)), 0x18L))))), &g_4) & l_31), 4)))
    {
        return l_311;
    }
    else
    {
        char l_320 = 0x1DL;
        unsigned short *l_328 = &g_4;
        char **l_337 = (void*)0;
        char *l_340 = &g_175;
        char **l_339 = &l_340;
        const int l_346 = 0xDD19256EL;
        char ***l_348 = &l_337;
        int l_351 = 1L;
        int l_352 = 0x0A0293A8L;
        for (g_276 = 0; (g_276 > 0); ++g_276)
        {
            char l_314 = 0xABL;
            const short l_317 = (-9L);
            unsigned short *l_323 = (void*)0;
            short *l_331 = &g_128;
            short *l_332 = &l_311;
            l_314 = 0xA0711357L;
            if ((~((**g_160) = (safe_mul_func_uint16_t_u_u((((func_109(((l_317 ^ (safe_mul_func_uint16_t_u_u(l_320, (safe_sub_func_uint32_t_u_u(func_40(func_32(func_32(l_323, (safe_div_func_int8_t_s_s(((safe_mul_func_uint16_t_u_u(func_109(((&p_9 != ((*l_47) = func_32(l_328, g_51, (safe_sub_func_int8_t_s_s(((((((*l_331) &= p_9) == (((*l_332) &= l_320) > func_20((l_314 > l_31), p_9))) & l_320) , l_19) , l_314), l_317)), l_320, l_320))) && l_314)), g_262)) || 0x0C94L), g_87)), l_314, p_9, g_298), p_9, p_9, g_262, p_9), l_328), l_52))))) >= p_9)) > 0xF3L) > l_31) | 1UL), 65527UL)))))
            {
                if (p_9)
                    break;
            }
            else
            {
                unsigned *l_334 = &g_335;
                int *l_336 = &g_46;
                (*l_336) |= func_109(((*l_334) = (g_73 ^ g_333)));
            }
            (**g_160) = p_9;
        }
        (**g_160) = (((*l_339) = (g_338 = &l_320)) == (void*)0);

        ;
        ;
        (*g_161) = (safe_lshift_func_uint16_t_u_s(p_9, (l_19 = (((safe_rshift_func_uint16_t_u_s((l_351 ^= ((*l_328) = l_346)), l_352)) , 0x1FL) < g_51))));
    }

    ;
    ;
    ;

    l_349 = &g_338;

    ;
    (**g_160) |= (((((p_9 , g_262) , ((*l_353) = p_9)) , ((void*)0 == l_345)) , &l_19) != (void*)0);
    return g_66;
}







static short func_13(unsigned short * p_14, unsigned short * p_15, const unsigned p_16, unsigned short * p_17)
{
    char l_83 = (-9L);
    char *l_86 = &g_87;
    unsigned char *l_100 = &g_66;
    unsigned short **l_101 = (void*)0;
    int *l_296 = &g_297;
    short *l_299 = &g_128;
    int ****l_308 = (void*)0;
    int ***l_310 = &g_160;
    int ****l_309 = &l_310;
    (*g_244) = ((*g_160) = func_74(((safe_mul_func_int8_t_s_s(p_16, (safe_rshift_func_uint8_t_u_u((((+((((func_20(l_83, ((((*l_299) = ((safe_mod_func_int8_t_s_s(((*l_86) = (-1L)), (safe_lshift_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u(((-1L) < (*p_15)), g_73)), (safe_unary_minus_func_uint8_t_u(255UL)))))) , (safe_sub_func_int32_t_s_s((((*l_296) &= func_95((l_100 = l_86), ((func_20(func_20((func_20((((p_16 && p_16) > 0x1D3FL) | p_16), g_46) , (*p_17)), g_51), l_83) | 0xB3C28C64L) < g_87), p_16, l_101)) < g_298), 0xCD050AACL)))) <= 1L) < g_298)) != g_298) , (*l_296)) , p_17) == &g_298)) & 0x76L) > 4L), g_298)))) < l_83), g_298, l_296, p_15));

    ;
    ;
    (*g_161) = (safe_sub_func_uint8_t_u_u(0x8EL, (((*l_309) = &g_160) == &g_160)));
    (*g_244) = (void*)0;

    ;
    return g_297;
}







static unsigned short func_20(unsigned short p_21, unsigned p_22)
{
    unsigned short *l_61 = &g_4;
    unsigned char *l_65 = &g_66;
    int l_67 = 1L;
    unsigned l_68 = 0UL;
    unsigned char l_69 = 1UL;
    char *l_70 = (void*)0;
    int *l_72 = &g_73;
    (*l_72) ^= (safe_div_func_int8_t_s_s((safe_lshift_func_int8_t_s_s((g_71 = (safe_add_func_int8_t_s_s((((safe_add_func_int32_t_s_s(func_40(func_32(l_61, (func_40(func_32(&g_4, g_4, (((p_21 , (p_22 & ((g_62 != &l_61) , ((*l_65) = (safe_add_func_int16_t_s_s(((g_4 , ((0x7676E3B6L ^ g_46) , p_21)) < 0xA8L), p_22)))))) < l_67) , p_21), l_67, l_67), l_61) , l_67), p_21, l_68, l_69), l_61), 0x31B53A2AL)) > 0x485393F1L) < g_51), 0xF2L))), 7)), 1UL));
    return (*l_72);
}







static unsigned short * func_32(unsigned short * p_33, unsigned char p_34, const int p_35, short p_36, int p_37)
{
    unsigned short *l_43 = (void*)0;
    for (p_34 = 0; (p_34 <= 47); ++p_34)
    {
        int *l_45 = &g_46;
        (*l_45) = func_40(l_43, &g_4);
    }
    return &g_4;


}







static int func_40(unsigned short * p_41, unsigned short * p_42)
{
    unsigned short l_44 = 65527UL;
    l_44 |= (&g_4 != p_42);
    return l_44;
}







static int * func_74(unsigned short p_75, unsigned p_76, int * p_77, const unsigned short * p_78)
{
    int *l_300 = &g_73;
    char *l_305 = &g_175;
    (*l_300) ^= (*p_77);
    (*g_160) = ((safe_mod_func_int8_t_s_s(g_66, (safe_mul_func_uint16_t_u_u(((+p_76) != 7L), (p_75 > ((*l_305) = p_76)))))) , &g_73);

    ;
    return l_300;


}







static int func_95(unsigned char * p_96, const unsigned short p_97, int p_98, unsigned short ** p_99)
{
    int *l_102 = &g_46;
    int l_163 = (-3L);
    unsigned short *l_166 = (void*)0;
    unsigned short **l_192 = (void*)0;
    char *l_222 = (void*)0;
    int **l_242 = (void*)0;
    (*l_102) = (g_73 &= g_51);
    if ((safe_mod_func_uint32_t_u_u((&p_98 != ((safe_div_func_int16_t_s_s(((*l_102) = ((*l_102) <= (*l_102))), 65532UL)) , (void*)0)), (l_163 ^= (safe_rshift_func_int8_t_s_s((g_71 & func_109(g_71)), (&l_102 == (void*)0)))))))
    {
        return (*l_102);
    }
    else
    {
        char l_193 = 0xC1L;
        unsigned short *l_199 = &g_4;
        int l_277 = 0xC35BFF91L;
        for (g_73 = 0; (g_73 == (-14)); g_73 = safe_sub_func_uint16_t_u_u(g_73, 9))
        {
            unsigned char l_167 = 0x9CL;
            int l_196 = 0xD1CFCE02L;
            unsigned short *l_206 = (void*)0;
            unsigned l_230 = 0x86712C95L;
            const int **l_246 = &g_245;
            if (func_40(l_166, func_32(&g_4, (*p_96), p_98, l_167, (p_98 , (((safe_mod_func_uint16_t_u_u(func_40(&g_4, &g_4), g_87)) & l_167) || l_167)))))
            {
                unsigned short l_194 = 0UL;
                char l_219 = (-2L);
                unsigned short **l_220 = &l_166;
                unsigned short *l_221 = &l_194;
                if (l_167)
                {
                    char *l_173 = &g_87;
                    char *l_174 = &g_175;
                    char *l_176 = &g_177;
                    unsigned short **l_200 = (void*)0;
                    unsigned short **l_201 = &l_166;
                    unsigned short *l_207 = &l_194;
                    char l_208 = 0xA5L;
                    if ((safe_unary_minus_func_int32_t_s((safe_mod_func_int8_t_s_s(((*l_176) = ((*l_174) |= ((*l_173) = p_98))), 1L)))))
                    {
                        short *l_195 = &g_51;
                        (*g_160) = &l_163;

                        ;
                        (**g_160) |= (safe_mul_func_uint8_t_u_u((((*l_195) &= ((safe_add_func_uint8_t_u_u(((0x21L == g_177) <= (safe_mul_func_uint16_t_u_u(l_167, ((((safe_mul_func_int16_t_s_s((safe_lshift_func_int16_t_s_s((safe_rshift_func_int8_t_s_u(((p_98 < (g_62 != ((safe_add_func_uint16_t_u_u(65526UL, g_46)) , l_192))) , g_4), l_193)), l_194)), g_73)) , l_195) != &g_128) == l_194)))), p_98)) <= p_98)) == g_87), 0L));
                    }
                    else
                    {
                        (*g_160) = (*g_160);
                        l_196 &= p_98;
                    }
                    if (((safe_mul_func_uint8_t_u_u((p_98 ^ (*l_102)), 0x74L)) , func_40(l_199, ((*l_201) = &g_4))))
                    {
                        unsigned short *l_202 = (void*)0;
                        int *l_203 = (void*)0;
                        int *l_204 = (void*)0;
                        int *l_205 = &l_163;
                        (*l_205) ^= ((func_40(l_202, &l_194) < g_46) , 0x73F18804L);
                        (*l_102) = (func_40((p_97 , func_32(&l_194, ((*p_96) = (func_40(l_202, l_206) <= func_40((p_97 , l_207), &g_4))), (*l_102), p_97, g_71)), &g_4) , l_208);
                    }
                    else
                    {
                        (*l_102) = (((safe_div_func_uint8_t_u_u(l_193, 1L)) != l_208) , ((l_208 >= l_194) , l_196));
                        return p_97;



                    }

                    ;
                }
                else
                {
                    (*g_160) = (*g_160);
                }
                (*l_102) = (~(((safe_sub_func_int32_t_s_s(((safe_add_func_int8_t_s_s((p_97 , (safe_div_func_int8_t_s_s((((((safe_add_func_int8_t_s_s(((65528UL | 65532UL) >= 255UL), p_98)) != (!0UL)) , (*p_96)) , ((func_40(func_32((l_221 = ((*l_220) = func_32(func_32(func_32(&g_4, (!((l_194 <= p_98) & g_46)), g_46, g_71, (*l_102)), l_194, g_87, p_98, g_128), l_219, l_194, p_98, p_98))), l_194, g_51, g_73, l_194), l_199) == l_193) , p_97)) <= p_98), l_219))), l_219)) & l_193), l_193)) <= l_193) == l_167));

                ;
                ;
                if ((0x6CFDL & l_167))
                {
                    short *l_229 = &g_128;
                    int l_237 = 0x2C6987CFL;
                    (*l_102) |= ((void*)0 != l_222);
                    p_98 = (l_196 != (((safe_mul_func_int16_t_s_s(g_51, (((*l_229) ^= ((safe_add_func_uint8_t_u_u((*p_96), g_177)) >= g_175)) <= l_230))) , (*g_161)) , ((safe_sub_func_uint8_t_u_u((*p_96), (safe_lshift_func_uint8_t_u_u(l_237, 7)))) > 0UL)));
                    (*l_102) = func_40((*l_220), (*l_220));
                }
                else
                {
                    if (p_97)
                        break;
                }
            }
            else
            {
                int ***l_243 = &l_242;
                const int l_265 = 1L;
                if ((safe_div_func_int32_t_s_s(p_97, func_40(l_206, ((((safe_sub_func_int16_t_s_s(((((*l_243) = l_242) != (l_246 = g_244)) , p_98), func_40(l_199, l_206))) | (safe_lshift_func_uint16_t_u_u(l_196, g_177))) <= p_98) , (void*)0)))))
                {
                    unsigned short *l_251 = &g_4;
                    unsigned short *l_258 = (void*)0;
                    int *l_266 = &l_163;
                    if (((void*)0 != l_246))
                    {
                        unsigned short *l_252 = &g_4;
                        unsigned char *l_255 = &l_167;
                        const int l_256 = 0x58A3B074L;
                        unsigned short **l_257 = (void*)0;
                        int *l_259 = &l_163;
                        int *l_260 = &l_196;
                        int *l_261 = &g_262;
                        (*l_261) ^= ((*l_260) = ((*l_259) = ((*l_102) = (p_98 = (((safe_sub_func_uint32_t_u_u(((*p_96) || (g_66 = func_40(l_251, l_252))), ((*l_102) && (safe_rshift_func_int16_t_s_s(func_40((l_258 = func_32(func_32(l_199, ((*l_255) ^= (p_98 | (p_98 && (func_40(l_251, l_252) , 4294967295UL)))), l_256, p_98, p_98), g_73, p_97, g_87, p_97)), l_199), p_97))))) & g_87) & l_256)))));

                        ;
                        (*l_259) = (safe_sub_func_uint8_t_u_u(254UL, (p_96 != ((g_66 == 0x43L) , (void*)0))));
                        (*l_260) &= l_265;
                    }
                    else
                    {
                        unsigned short *l_275 = &g_4;
                        (*l_246) = (*g_160);

                        ;
                        l_266 = &p_98;

                        ;
                        if ((**l_246))
                            continue;
                        l_277 &= (safe_mul_func_uint16_t_u_u(((*l_266) || (0x6DL || ((safe_add_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u((g_276 ^= (((safe_mul_func_uint16_t_u_u(((((*l_102) = (**g_160)) , 0x39D1L) , (g_128 ^ (p_98 & p_98))), func_40(l_206, (l_275 = l_251)))) <= 2L) | l_193)), 0x648319B6L)), 1L)) , p_97))), g_71));
                    }

                    ;
                    ;
                    return p_98;



                }
                else
                {
                    return p_98;



                }
            }

            ;
        }

        ;
        ;
        ;
    }

    ;
    ;
    ;
    if ((**g_160))
    {
        char *l_280 = (void*)0;
        char *l_281 = &g_87;
        short l_283 = 0x04EDL;
        const int ***l_286 = (void*)0;
        const int ****l_287 = &l_286;
        unsigned short *l_290 = &g_4;
        unsigned char *l_291 = &g_66;
        int *l_292 = &g_262;
        (*l_292) ^= (((safe_rshift_func_int8_t_s_s(((*l_281) |= p_97), 1)) , (((!g_46) & ((((safe_unary_minus_func_uint16_t_u((l_283 , (safe_lshift_func_uint8_t_u_u(((*l_291) = (0xB0L <= (((*l_281) = ((g_66 >= ((((*l_287) = l_286) != &g_244) >= (+(safe_rshift_func_int16_t_s_s(2L, (((*l_290) = (p_97 && (*g_245))) & g_276)))))) != (-3L))) ^ 0xFBL))), g_46))))) <= 0x71L) , 0xB4653DA8L) , (-1L))) <= l_283)) == 0x47CAE223L);
    }
    else
    {
        (*g_160) = (void*)0;

        ;
        for (g_46 = 2; (g_46 == 0); g_46 = safe_sub_func_int8_t_s_s(g_46, 3))
        {
            int l_295 = 0L;
            return l_295;


        }
    }

    ;
    return p_98;



}







static char func_109(unsigned p_110)
{
    unsigned short *l_126 = &g_4;
    int l_131 = 0L;
    char *l_145 = &g_87;
    unsigned char *l_157 = &g_66;
    unsigned char **l_156 = &l_157;
    int *l_162 = &l_131;
    for (g_51 = 0; (g_51 != (-24)); --g_51)
    {
        unsigned short *l_125 = &g_4;
        int *l_150 = (void*)0;
        int *l_151 = &l_131;
        for (p_110 = 17; (p_110 != 42); p_110 = safe_add_func_int16_t_s_s(p_110, 1))
        {
            unsigned l_117 = 1UL;
            unsigned short *l_118 = (void*)0;
            unsigned short *l_119 = &g_4;
            short *l_127 = &g_128;
            unsigned char *l_130 = &g_66;
            unsigned char **l_129 = &l_130;
            int *l_134 = (void*)0;
            int *l_135 = &l_131;
            int *l_136 = &g_73;
            (*l_135) = ((((safe_sub_func_uint8_t_u_u(255UL, (((*l_119) = l_117) , (l_117 || func_120(((*l_129) = ((safe_mul_func_int16_t_s_s(((*l_127) ^= ((((func_40(l_125, l_126) > 0x6DF2D4CEL) | 1L) | 1L) , p_110)), (-1L))) , &g_66)), l_131))))) > l_131) | g_51) || g_128);
            (*l_136) ^= ((*l_135) = p_110);
            l_135 = ((safe_lshift_func_int8_t_s_s((safe_rshift_func_int8_t_s_s((g_71 != (safe_div_func_uint8_t_u_u(0xC5L, (safe_lshift_func_int8_t_s_u((p_110 , (l_145 != &g_87)), (p_110 , g_73)))))), 1)), 2)) , &g_73);

            ;
        }
        (*l_151) |= (((safe_rshift_func_int8_t_s_s(p_110, (!0L))) >= (safe_sub_func_int8_t_s_s(g_66, g_87))) == ((+((p_110 , ((*l_125) = func_40(l_125, l_125))) > g_66)) ^ p_110));
        return l_131;
    }
    (*l_162) = ((*g_161) = ((((safe_mod_func_uint8_t_u_u(((+(safe_sub_func_uint32_t_u_u((0x4CD19B67L | (l_156 == (void*)0)), p_110))) || (g_128 , ((safe_rshift_func_int8_t_s_s(0xBCL, 3)) , func_40(l_126, l_126)))), (-1L))) , (void*)0) != g_160) < p_110));
    return p_110;
}







static unsigned func_120(unsigned char * p_121, int p_122)
{
    int *l_132 = &g_73;
    int **l_133 = &l_132;
    (*l_133) = l_132;
    (**l_133) &= g_128;
    (*l_133) = (*l_133);
    return p_122;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_46, "g_46", print_hash_value);
    transparent_crc(g_51, "g_51", print_hash_value);
    transparent_crc(g_66, "g_66", print_hash_value);
    transparent_crc(g_71, "g_71", print_hash_value);
    transparent_crc(g_73, "g_73", print_hash_value);
    transparent_crc(g_87, "g_87", print_hash_value);
    transparent_crc(g_128, "g_128", print_hash_value);
    transparent_crc(g_175, "g_175", print_hash_value);
    transparent_crc(g_177, "g_177", print_hash_value);
    transparent_crc(g_262, "g_262", print_hash_value);
    transparent_crc(g_276, "g_276", print_hash_value);
    transparent_crc(g_297, "g_297", print_hash_value);
    transparent_crc(g_298, "g_298", print_hash_value);
    transparent_crc(g_333, "g_333", print_hash_value);
    transparent_crc(g_335, "g_335", print_hash_value);
    transparent_crc(g_370, "g_370", print_hash_value);
    transparent_crc(g_396, "g_396", print_hash_value);
    transparent_crc(g_427, "g_427", print_hash_value);
    transparent_crc(g_493, "g_493", print_hash_value);
    transparent_crc(g_552, "g_552", print_hash_value);
    transparent_crc(g_583, "g_583", print_hash_value);
    transparent_crc(g_606, "g_606", print_hash_value);
    transparent_crc(g_641, "g_641", print_hash_value);
    transparent_crc(g_722, "g_722", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
