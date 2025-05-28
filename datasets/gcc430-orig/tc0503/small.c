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
   unsigned char f0;
   volatile short f1;
   unsigned f2;
   int f3;
   unsigned char f4;
};

union U1 {
   int f0;
   volatile short f1;
   char f2;
   unsigned f3;
};

union U2 {
   unsigned f0;
};


static unsigned char g_20 = 0xF7L;
static union U2 g_25 = {0x919ADB82L};
static unsigned char g_49 = 0x6BL;
static volatile union U1 g_50 = {0x51FD9AB8L};
static union U2 *g_52 = &g_25;
static union U2 ** volatile g_51 = &g_52;
static int g_56 = 0xAE07DF7DL;
static int *g_58 = (void*)0;
static int ** volatile g_57 = &g_58;
static int g_67 = 1L;
static volatile char g_73 = 0x32L;
static union U1 g_85 = {1L};
static int * volatile g_93 = &g_56;
static int * volatile g_100 = &g_67;
static short g_114 = 0xF876L;
static volatile union U0 g_139 = {0UL};
static union U1 *g_157 = &g_85;
static union U1 ** volatile g_156 = &g_157;
static int * volatile g_167 = &g_56;
static volatile int g_181 = 0x58E251D0L;
static volatile int *g_180 = &g_181;
static volatile int **g_179 = &g_180;
static volatile int ***g_178 = &g_179;
static int g_187 = (-1L);
static union U0 g_252 = {0x7FL};
static union U1 **g_257 = (void*)0;
static union U1 *** volatile g_256 = &g_257;
static volatile unsigned g_277 = 0x1BA7616DL;
static union U1 ** volatile g_281 = &g_157;
static volatile union U0 g_299 = {1UL};
static volatile union U0 g_391 = {255UL};
static union U1 g_393 = {0xE2655488L};
static union U0 g_410 = {0UL};
static int ** volatile g_411 = &g_58;
static volatile union U1 g_423 = {0x30E477EDL};
static int g_430 = 0x82A686B5L;
static union U2 ** volatile g_431 = (void*)0;
static int * volatile g_458 = &g_67;
static int ** volatile g_505 = &g_58;
static union U2 ** volatile g_557 = &g_52;
static union U2 ** volatile g_572 = &g_52;
static volatile union U0 *g_597 = &g_299;
static volatile union U0 ** volatile g_596 = &g_597;
static union U0 g_600 = {255UL};
static union U0 g_602 = {0xEAL};
static int * volatile g_641 = &g_67;



static union U2 func_1(void);
static short func_4(int p_5, int p_6, unsigned p_7);
static unsigned short func_11(int p_12);
static unsigned short func_15(unsigned p_16, unsigned p_17, unsigned char p_18, int p_19);
static unsigned func_21(union U2 p_22, unsigned p_23, union U2 p_24);
static unsigned short func_28(unsigned short p_29, short p_30, unsigned char p_31, unsigned p_32, short p_33);
static unsigned char func_35(int p_36, short p_37);
static short func_38(union U2 p_39, unsigned char p_40);
static union U2 func_41(union U2 p_42);
static union U2 func_43(int p_44, int p_45);
static union U2 func_1(void)
{
    int l_8 = 0xF30CC2FDL;
    (*g_641) = ((safe_lshift_func_int16_t_s_u(func_4((l_8 > 0xA8L), (safe_lshift_func_uint16_t_u_s(func_11(l_8), 3)), (safe_sub_func_int16_t_s_s((-7L), (safe_add_func_uint16_t_u_u((func_21(g_25, l_8, g_25) ^ g_393.f3), l_8))))), g_393.f0)) <= 0x65L);


        ;
    ;
    return (**g_557);

    }







static short func_4(int p_5, int p_6, unsigned p_7)
{
    unsigned l_490 = 4294967290UL;
    union U0 *l_491 = (void*)0;
    union U2 *l_494 = &g_25;
    unsigned l_503 = 0x3A6A89D7L;
    int **l_523 = &g_58;
    int l_526 = 5L;
    int l_527 = 0xE08F61FBL;
    unsigned char l_593 = 0x91L;
    unsigned char l_617 = 247UL;
    int *l_637 = &g_430;
    union U1 **l_640 = &g_157;
    if (((safe_rshift_func_int16_t_s_s(l_490, g_393.f0)) & l_503))
    {
        return p_6;
    }
    else
    {
        int *l_504 = &g_67;
        unsigned l_525 = 2UL;
        union U1 *l_532 = &g_393;
        union U2 l_551 = {4294967295UL};
        int l_588 = 0x0DAF559BL;
        if (l_490)
        {
            unsigned l_508 = 9UL;
            int **l_524 = &l_504;
            union U2 l_541 = {8UL};
            (*g_505) = l_504;

            ;
            l_527 = (((p_6 >= g_25.f0) == (safe_add_func_int32_t_s_s((l_508 != g_277), (safe_rshift_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s((0x44L || (safe_mod_func_int8_t_s_s(((safe_lshift_func_int8_t_s_u(((((((safe_sub_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u(g_25.f0, (((safe_rshift_func_int8_t_s_s(p_6, 3)) , l_523) != l_524))), p_7)) == p_7) < 4UL) ^ (*g_58)) || (*g_58)) && 0xFCC43FD2L), 7)) , (**l_523)), (**l_523)))), (**l_524))), l_525))))) && l_526);
            for (g_85.f3 = 0; (g_85.f3 >= 42); g_85.f3 = safe_add_func_uint8_t_u_u(g_85.f3, 6))
            {
                int l_530 = 0L;
                union U1 *l_531 = &g_85;
                union U1 ***l_542 = &g_257;
                int l_543 = 0xD0E5574AL;
                g_187 ^= (((**l_524) > (l_530 | (l_531 != l_532))) || (((safe_rshift_func_uint8_t_u_u((g_252 , (safe_rshift_func_uint16_t_u_u(func_21((*l_494), ((safe_mod_func_uint8_t_u_u(((p_7 , (((**l_523) < (*g_58)) >= 0xCC8EL)) < 0x0DBA707FL), g_85.f3)) , p_7), l_541), (**l_523)))), 3)) , (void*)0) == l_542));
                l_543 |= (**l_524);
                if ((safe_rshift_func_int8_t_s_s(p_5, 2)))
                {
                    (*g_57) = (*l_523);
                    if (p_6)
                        continue;
                }
                else
                {
                    int *l_546 = &l_526;
                    (*l_546) |= (**l_524);
                }
            }

            l_526 |= (safe_lshift_func_int8_t_s_u(p_6, (safe_lshift_func_int16_t_s_s((p_7 == ((*l_504) || (g_139.f0 & p_6))), p_6))));
        }
        else
        {
            (*l_523) = l_504;

            ;
        }

        ;
        (*l_523) = l_504;
        if ((**l_523))
        {
            union U2 *l_556 = &g_25;
            union U1 *l_570 = (void*)0;
            union U1 ***l_571 = &g_257;
            int l_575 = 0L;
            union U2 l_589 = {4294967292UL};
            unsigned l_605 = 0x68C4AD82L;
            for (g_410.f0 = 0; (g_410.f0 < 7); ++g_410.f0)
            {
                (*g_58) ^= 1L;
                (*g_179) = (void*)0;

                ;
            }
            (*g_557) = l_556;
            for (g_252.f0 = 0; (g_252.f0 > 36); ++g_252.f0)
            {
                union U2 l_560 = {0xE901C2B7L};
                int l_566 = (-9L);
                union U0 *l_582 = &g_410;
                short l_590 = 0xDD03L;
                int ***l_629 = &l_523;
            }
            (*g_58) = ((~(*l_504)) , (**l_523));
        }
        else
        {
            (*l_523) = &l_588;

            ;
        }

        ;
    }


    (*l_637) ^= (*g_93);
    (*l_637) = (safe_add_func_int32_t_s_s(((l_640 == l_640) > (((((g_139.f0 , &l_491) == (void*)0) <= 0x17L) > ((*l_637) < (*l_637))) & 0x40B095D4L)), (*l_637)));
    return (*l_637);
}







static unsigned short func_11(int p_12)
{
    unsigned char l_26 = 0x47L;
    union U2 l_27 = {0x3CB5AF9FL};
    unsigned char l_470 = 9UL;
    unsigned char l_471 = 0xD4L;
    int l_475 = (-10L);
    (*g_458) = (safe_add_func_int32_t_s_s(0xAB2AEE5AL, (func_15(g_20, func_21(g_25, l_26, l_27), (((((+func_35(g_410.f0, (safe_mod_func_uint8_t_u_u(1UL, p_12)))) , g_423.f0) != p_12) & g_393.f3) > g_114), g_67) == 8UL)));

        ;
    for (g_252.f0 = 0; (g_252.f0 == 48); g_252.f0 = safe_add_func_uint32_t_u_u(g_252.f0, 7))
    {
        unsigned char l_461 = 1UL;
        int *l_462 = &g_67;
        (**g_179) &= l_27.f0;
        if (l_461)
            break;
        (*l_462) |= (*g_93);
    }
    if (((g_252 , l_27.f0) >= (p_12 != func_21(l_27, p_12, (*g_52)))))
    {
        int **l_463 = &g_58;
        union U0 *l_464 = &g_252;
        (*l_463) = (p_12 , (*g_57));
        if ((***g_178))
        {
            return g_391.f4;
        }
        else
        {
            union U0 **l_465 = (void*)0;
            union U0 **l_466 = &l_464;
            (*l_466) = l_464;
        }
        (***g_178) = (*g_180);
        (**g_178) = (void*)0;

        ;
    }
    else
    {
        int l_469 = 0xA4BC7448L;
        union U2 l_474 = {0xF70D16FCL};
        (*g_180) = (safe_lshift_func_uint16_t_u_u(l_469, (((l_26 , (g_139.f4 , l_470)) == (p_12 <= l_471)) <= ((safe_lshift_func_int16_t_s_s((l_469 && (func_21(l_474, p_12, l_474) >= l_470)), p_12)) , g_252.f0))));
        (**g_179) = l_475;
        (**g_179) = (safe_sub_func_uint32_t_u_u(func_21(l_474, (g_114 && (&l_474 != (void*)0)), l_474), p_12));
    }

    ;
    return l_471;
}







static unsigned short func_15(unsigned p_16, unsigned p_17, unsigned char p_18, int p_19)
{
    int l_436 = (-4L);
    int **l_438 = &g_58;
    int ***l_437 = &l_438;
    short l_443 = (-2L);
    char l_444 = (-1L);
    union U2 **l_445 = &g_52;
    union U1 ***l_454 = &g_257;
    int l_457 = 0L;
    (***g_178) = ((g_85.f3 & ((((g_50.f0 , ((&g_179 != (l_436 , l_437)) <= 1UL)) , (safe_sub_func_int8_t_s_s((p_16 , (safe_sub_func_int8_t_s_s(0xA9L, (((0x2890L <= g_393.f3) || (*g_180)) >= (-1L))))), l_443))) ^ p_16) || g_187)) || l_444);
    (**g_179) = ((&g_52 != l_445) | (safe_lshift_func_uint8_t_u_s(func_35(p_16, ((safe_sub_func_uint16_t_u_u((g_423.f3 & (safe_sub_func_uint8_t_u_u(((l_443 > g_85.f0) >= p_19), (p_17 != (safe_sub_func_uint32_t_u_u(((l_454 == l_454) ^ g_20), g_393.f2)))))), g_252.f0)) < 0xBE7A95DDL)), 3)));
    (*g_51) = (*g_51);
    g_430 ^= (~(p_19 < (((((*g_51) != (*l_445)) , (0UL <= ((0xF856E487L ^ (((*g_52) , (safe_add_func_int32_t_s_s((g_393.f0 == 0x7E145B06L), func_38((**l_445), l_436)))) & l_457)) || g_277))) ^ 0x9F43L) == p_16)));

        ;
    return p_17;
}







static unsigned func_21(union U2 p_22, unsigned p_23, union U2 p_24)
{
    unsigned char l_34 = 247UL;
    unsigned short l_68 = 65535UL;
    int *l_429 = &g_430;
    union U2 *l_432 = &g_25;
    return p_22.f0;
}







static unsigned short func_28(unsigned short p_29, short p_30, unsigned char p_31, unsigned p_32, short p_33)
{
    int *l_363 = &g_56;
    union U1 **l_400 = (void*)0;
    union U2 **l_424 = &g_52;
    int l_427 = 1L;
    int *l_428 = &g_67;
    l_363 = l_363;
    for (g_49 = 0; (g_49 != 51); g_49++)
    {
        unsigned l_373 = 4UL;
        union U1 **l_399 = (void*)0;
        union U0 *l_408 = (void*)0;
        volatile int *l_416 = &g_181;
        (*g_179) = (**g_178);
        for (g_252.f2 = 20; (g_252.f2 >= 24); g_252.f2 = safe_add_func_uint32_t_u_u(g_252.f2, 9))
        {
            unsigned short l_372 = 1UL;
            unsigned char l_407 = 1UL;
            union U0 *l_409 = &g_410;
            if ((safe_rshift_func_uint16_t_u_s((g_20 , (((safe_rshift_func_uint16_t_u_s((((((!func_35(((void*)0 == &l_363), g_50.f3)) && func_35((g_49 || p_32), g_20)) , 1UL) & l_372) >= 0x1C4FL), (*l_363))) == g_252.f0) <= l_373)), 15)))
            {
                char l_392 = 0L;
                unsigned l_394 = 0x76FA7160L;
                int l_413 = 0xB6894341L;
                (**g_178) = ((func_35(((((*l_363) || (((safe_add_func_uint16_t_u_u((((**g_51) , 255UL) || (func_35((safe_unary_minus_func_int32_t_s((safe_mod_func_int16_t_s_s((safe_sub_func_int32_t_s_s((func_35((p_29 , (safe_mod_func_uint32_t_u_u((((safe_lshift_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s(func_35(l_373, ((*l_363) > ((safe_lshift_func_uint8_t_u_s((safe_rshift_func_uint8_t_u_u((p_33 < (((p_29 >= ((((g_391 , l_372) >= l_373) ^ g_252.f3) , (*g_180))) >= p_32) , p_30)), 6)), 4)) == p_29))), l_392)), g_85.f2)) , g_393) , p_30), l_394))), p_30) & g_114), l_372)), 65535UL)))), g_252.f4) != l_392)), l_373)) | g_25.f0) && g_393.f2)) , 1UL) && g_20), p_33) || g_252.f1) , (*g_179));
                (***g_178) |= ((safe_lshift_func_int8_t_s_s((((safe_rshift_func_int16_t_s_u((p_32 , (l_399 == l_400)), p_29)) | (-1L)) | 8L), 6)) == 0xCA4B3DC0L);
                for (l_373 = 0; (l_373 != 60); l_373 = safe_add_func_int16_t_s_s(l_373, 1))
                {
                    unsigned short l_412 = 0xDD9DL;
                    (*g_180) &= p_29;
                    if (((safe_add_func_int16_t_s_s(g_252.f2, (*l_363))) ^ func_35(g_50.f2, ((safe_add_func_int16_t_s_s(l_407, (g_56 != g_252.f4))) < (((-7L) >= (l_408 != l_409)) > 0x9A887296L)))))
                    {
                        if ((***g_178))
                            break;
                    }
                    else
                    {
                        (*g_411) = l_363;

                        ;
                    }
                    l_413 |= func_35(l_392, l_412);
                }
                (*g_180) = l_394;
            }
            else
            {
                int **l_414 = (void*)0;
                int **l_415 = &g_58;
                (*l_415) = l_363;

                ;
                l_416 = (*g_179);
                return g_410.f0;
            }
            return p_29;
        }

        if ((*g_167))
            break;
        if ((*l_363))
            break;
    }
    (*l_363) = ((*l_363) > p_31);
    (*l_428) ^= (safe_add_func_uint32_t_u_u(((*l_363) <= 1UL), (safe_mod_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s((&g_52 == (g_423 , l_424)), 3)), ((0xD2907BF8L > (safe_lshift_func_uint16_t_u_u(p_31, l_427))) && (((p_31 == g_187) <= 1L) , g_393.f3))))));
    return g_50.f1;
}







static unsigned char func_35(int p_36, short p_37)
{
    int l_362 = 0x523CCB4FL;
    (**g_179) = (**g_179);
    (***g_178) ^= (!p_36);
    return l_362;
}







static short func_38(union U2 p_39, unsigned char p_40)
{
    unsigned l_131 = 0xF025C2D4L;
    int *l_138 = &g_67;
    int **l_223 = &l_138;
    int ***l_222 = &l_223;
    char l_264 = (-6L);
    int l_294 = 0x7D4A49A0L;
    unsigned l_328 = 0xB7C3FB7BL;
    short l_361 = 0x628FL;
    if ((l_131 >= l_131))
    {
        char l_132 = 0x62L;
        int *l_137 = &g_56;
        (*l_137) = ((l_132 & (l_132 || ((safe_add_func_int32_t_s_s(l_131, p_40)) == ((!(p_40 != g_49)) | (safe_mod_func_uint32_t_u_u((l_132 && l_131), p_39.f0)))))) >= g_85.f1);
    }
    else
    {
        unsigned l_183 = 0UL;
        int *l_188 = &g_56;
        int ***l_225 = &l_223;
        int l_316 = 0x584FAC85L;
        union U0 *l_317 = &g_252;
        unsigned l_318 = 0xAD62F63DL;
        l_138 = (void*)0;

        ;
        if ((!(g_139 , ((void*)0 != &l_138))))
        {
            unsigned l_147 = 4294967289UL;
            short l_153 = 0xEAB1L;
            union U0 *l_191 = (void*)0;
            for (g_67 = 0; (g_67 <= 23); ++g_67)
            {
                int l_144 = 0xA8D7FAAEL;
                int l_152 = (-5L);
                int **l_154 = &l_138;
                union U0 **l_192 = (void*)0;
                union U0 **l_193 = &l_191;
                if (((safe_sub_func_uint32_t_u_u(l_144, p_39.f0)) && ((safe_add_func_int16_t_s_s(l_147, (safe_rshift_func_int8_t_s_s(g_139.f0, (safe_rshift_func_uint16_t_u_s(p_40, (l_152 & (((((l_144 && l_147) , (g_85.f2 && g_85.f2)) || 8L) == l_147) >= g_67)))))))) | l_153)))
                {
                    int ***l_155 = &l_154;
                    int l_160 = 0x428438D7L;
                    (*l_155) = l_154;
                    (*g_156) = &g_85;
                    for (l_152 = 1; (l_152 <= (-2)); --l_152)
                    {
                        l_160 = (*g_93);
                        (**l_155) = (*g_57);
                        (*g_167) = ((safe_rshift_func_uint16_t_u_u(p_39.f0, ((+65528UL) || (g_50.f3 , ((safe_add_func_uint32_t_u_u(g_50.f2, (0xFA607CF5L && p_40))) < (-6L)))))) , (safe_lshift_func_int8_t_s_s(g_85.f2, 7)));
                    }
                    (*g_167) |= 0x9843EB03L;
                }
                else
                {
                    int ***l_182 = (void*)0;
                    int *l_184 = (void*)0;
                    int *l_185 = (void*)0;
                    int *l_186 = &g_187;
                    (*l_186) |= (safe_lshift_func_int16_t_s_s((((safe_mod_func_int32_t_s_s(((*g_51) != &p_39), g_114)) , (((*g_167) ^ (((safe_add_func_int16_t_s_s(0x8A33L, (((&g_52 != (void*)0) , (safe_add_func_uint32_t_u_u(((((void*)0 != g_178) >= p_39.f0) >= l_153), l_153))) != g_49))) , l_182) == (void*)0)) ^ l_183)) , p_39.f0), g_25.f0));
                    (*l_154) = l_188;

                    ;
                    (**g_179) = (safe_sub_func_uint8_t_u_u(g_85.f0, p_39.f0));
                    return p_40;
                }
                (*g_180) &= 0xDB20BFABL;
                (*l_193) = l_191;
                (**g_179) &= 0L;
            }

            ;
        }
        else
        {
            short l_196 = (-1L);
            union U2 **l_231 = &g_52;
            int *l_235 = &g_67;
            union U0 *l_251 = &g_252;
            union U0 **l_250 = &l_251;
            unsigned l_267 = 0x9DE4D3E2L;
            union U1 *l_279 = &g_85;
            volatile int *l_284 = &g_181;
            if ((safe_sub_func_int8_t_s_s(l_196, 0xA9L)))
            {
                union U2 **l_201 = &g_52;
                union U1 **l_255 = &g_157;
                int l_259 = 0x0F9FA3D0L;
                if ((safe_sub_func_int32_t_s_s(p_39.f0, ((*l_188) <= 251UL))))
                {
                    union U2 l_224 = {0x9E0A6E09L};
                    if ((safe_sub_func_int16_t_s_s((&g_52 == l_201), 0xA0BEL)))
                    {
                        (**g_179) = 0xF8DB93C2L;
                        return g_67;
                    }
                    else
                    {
                        short l_202 = 0L;
                        int l_205 = 0x45AC62A2L;
                        (*l_188) ^= l_202;
                        (*l_188) = (*g_167);
                        (*l_188) &= (((safe_rshift_func_int16_t_s_s((p_40 >= (l_205 || (safe_sub_func_uint32_t_u_u(p_39.f0, (~(g_139 , (((l_201 != &g_52) , p_39.f0) , 0L))))))), 0)) ^ p_40) , 0x3F684F3EL);
                    }
                    for (g_85.f3 = (-14); (g_85.f3 > 16); g_85.f3++)
                    {
                        unsigned char l_226 = 0x52L;
                        (**g_179) = p_40;
                        (***g_178) |= (safe_add_func_int8_t_s_s(p_40, 4UL));
                        g_187 |= (safe_add_func_uint16_t_u_u((g_67 < g_56), (p_39.f0 != ((((safe_mod_func_int8_t_s_s(((safe_lshift_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u((g_85.f1 >= (l_222 != (l_224 , l_225))), 4)), (l_226 | (((g_85.f2 ^ 0x78EFL) ^ p_40) & g_85.f0)))), 7)) || p_39.f0), g_67)) <= p_39.f0) > l_226) == p_39.f0))));
                        (*l_188) ^= (safe_sub_func_uint32_t_u_u((safe_add_func_uint16_t_u_u(0xD743L, (l_231 != &g_52))), (**g_179)));
                    }

                                        (**l_222) = (*g_57);

                    ;
                    if ((**g_179))
                    {
                        (*l_188) |= ((safe_sub_func_uint8_t_u_u(p_39.f0, l_224.f0)) && g_85.f1);
                        (**g_178) = (*g_179);
                        return g_85.f0;
                    }
                    else
                    {
                        unsigned short l_234 = 0UL;
                        (*g_180) ^= l_234;
                        (*l_188) ^= p_40;
                    }
                }
                else
                {
                    (**l_222) = l_235;

                    ;
                }

                                ;
                for (p_40 = 0; (p_40 <= 36); p_40++)
                {
                    unsigned char l_242 = 255UL;
                    (*g_180) = ((-3L) < (*g_180));
                    (*g_180) = (safe_mod_func_int16_t_s_s((safe_rshift_func_int8_t_s_u((0xE0FD6618L & l_242), p_40)), ((*l_235) || (g_139 , (*g_100)))));
                }
                if ((**g_179))
                {
                    int l_245 = 0x5C2BE574L;
                    (*l_188) = ((safe_add_func_int32_t_s_s((l_245 , p_39.f0), (*l_188))) < (((+((g_20 <= ((g_114 ^ (safe_add_func_uint16_t_u_u(((safe_rshift_func_int16_t_s_u((((g_85.f0 > (l_245 && ((void*)0 != l_250))) , (*g_100)) ^ p_40), (*l_235))) && g_85.f0), p_39.f0))) < p_39.f0)) <= p_40)) & g_252.f4) & 0L));
                    return g_20;
                }
                else
                {
                    unsigned l_258 = 0x9297C0A9L;
                    for (l_183 = 0; (l_183 >= 20); l_183 = safe_add_func_int32_t_s_s(l_183, 8))
                    {
                        (*g_256) = l_255;

                        ;
                        l_259 = ((1L | p_39.f0) != l_258);
                        (**g_179) = l_258;
                    }

                    ;
                    (**l_222) = l_235;

                    ;
                }

                ;
                ;
                (***g_178) = (*g_180);
            }
            else
            {
                unsigned char l_278 = 0xFCL;
                int l_302 = (-6L);
                if (((safe_add_func_uint16_t_u_u((g_252 , (safe_sub_func_uint8_t_u_u(254UL, p_39.f0))), l_264)) | (p_39 , (safe_sub_func_uint16_t_u_u(((*l_235) ^ l_267), (((safe_lshift_func_uint16_t_u_s(g_56, g_252.f0)) > 1L) != g_20))))))
                {
lbl_315:
                    (*l_188) |= (p_39.f0 , (-7L));
                    return g_114;
                }
                else
                {
                    int l_285 = 0L;
                    if ((safe_rshift_func_uint8_t_u_u((*l_188), ((safe_rshift_func_uint16_t_u_s((safe_sub_func_int16_t_s_s(p_40, (*l_235))), 14)) ^ 0x0FF7L))))
                    {
                        (*l_235) &= ((((safe_unary_minus_func_uint8_t_u(p_40)) <= g_56) > g_277) > l_278);
                        (*l_235) &= 1L;
                        (*g_179) = (**g_178);
                    }
                    else
                    {
                        union U1 **l_280 = (void*)0;
                        (*g_281) = l_279;
                        (*l_188) = (safe_mod_func_int8_t_s_s(l_278, p_40));
                        l_284 = (*g_179);
                        (*g_180) = l_285;
                    }
                }
                for (p_40 = (-6); (p_40 == 33); p_40++)
                {
                    for (g_85.f2 = 0; (g_85.f2 == 13); g_85.f2 = safe_add_func_uint8_t_u_u(g_85.f2, 5))
                    {
                        (*l_235) ^= (g_139 , 0L);
                    }
                    for (g_252.f2 = (-21); (g_252.f2 != 9); g_252.f2 = safe_add_func_int8_t_s_s(g_252.f2, 8))
                    {
                        int **l_296 = &l_138;
                        l_302 = ((safe_add_func_int16_t_s_s((l_294 >= (((safe_unary_minus_func_uint32_t_u((l_296 == (void*)0))) >= (safe_add_func_uint16_t_u_u((g_299 , 0UL), ((safe_rshift_func_uint16_t_u_s(p_40, 14)) <= 0xCA8741E0L)))) < l_278)), (0x25L || p_39.f0))) <= g_25.f0);
                        (*g_180) |= (safe_sub_func_uint8_t_u_u((g_252.f3 , (p_39.f0 > p_39.f0)), (safe_sub_func_uint16_t_u_u(5UL, (*l_188)))));
                        g_56 &= (((safe_add_func_uint16_t_u_u((safe_add_func_int8_t_s_s(l_302, ((safe_sub_func_uint8_t_u_u((safe_sub_func_int8_t_s_s(0xB2L, (p_39.f0 && p_39.f0))), (l_302 != g_252.f2))) | 8L))), (p_39.f0 && (g_252.f3 != g_73)))) >= g_20) , p_39.f0);
                    }

                                        if (g_252.f3)
                        goto lbl_315;
                }

                            }

                        ;
            ;
            (*l_284) = ((l_316 , g_252.f0) , ((l_317 == (void*)0) > 0UL));
            (**g_179) &= (g_25.f0 == 255UL);
            (**l_222) = ((*g_157) , (void*)0);

            ;
        }

                ;
        ;
        if ((*g_100))
        {
            int l_319 = 0x69C0D2D9L;
            union U0 *l_354 = &g_252;
            if ((~l_318))
            {
                (**l_225) = (*g_57);
                if (g_187)
                    goto lbl_320;
lbl_320:
                l_319 ^= (*g_93);
                if ((safe_lshift_func_uint16_t_u_u(l_319, (((((safe_mod_func_int16_t_s_s(g_49, (safe_lshift_func_int16_t_s_u(p_39.f0, 3)))) <= g_139.f0) , (void*)0) != ((safe_unary_minus_func_int16_t_s((1UL != (p_40 & (*l_188))))) , (**g_178))) < p_40))))
                {
                    l_328 = l_319;
                }
                else
                {
                    return p_39.f0;
                }
                (*l_223) = (**l_222);
            }
            else
            {
                int *l_334 = &g_67;
                union U2 l_339 = {0UL};
                if (p_39.f0)
                {
                    unsigned l_331 = 0xC5688E5AL;
                    if ((safe_sub_func_uint8_t_u_u(g_20, g_49)))
                    {
                        unsigned l_340 = 0xE2A13883L;
                        (*g_100) = (*l_188);
                        (*l_188) &= ((l_331 , g_49) & ((*g_179) == ((1L >= (l_319 != ((safe_add_func_uint8_t_u_u(p_40, ((+0L) >= (~((&g_52 != &g_52) >= l_331))))) || l_331))) , l_334)));
                        (***g_178) = (((0x13L <= g_49) | p_39.f0) || (((safe_mod_func_uint16_t_u_u((((((safe_lshift_func_int16_t_s_s(((p_39.f0 > (l_339 , g_20)) | ((*l_188) ^ (l_340 >= ((g_139.f0 | 0UL) != (*l_334))))), p_39.f0)) & g_20) <= g_187) , &g_179) == &l_223), g_56)) == l_331) <= 0x93D0L));
                    }
                    else
                    {
                        int *l_341 = (void*)0;
                        (**l_222) = l_341;

                        ;
                        (***g_178) &= 7L;
                    }
                    for (g_49 = 5; (g_49 == 6); g_49 = safe_add_func_uint16_t_u_u(g_49, 4))
                    {
                        (*g_167) = ((safe_lshift_func_int8_t_s_u((safe_sub_func_uint8_t_u_u(((safe_sub_func_uint16_t_u_u((g_139 , (0L != p_39.f0)), (((g_25.f0 , (p_39.f0 , (p_39.f0 & ((safe_mod_func_int16_t_s_s(p_39.f0, (safe_sub_func_int32_t_s_s(l_319, p_39.f0)))) >= p_40)))) < g_20) ^ p_40))) > g_187), 0x9CL)), 1)) || l_319);
                        (*l_223) = (*l_223);
                    }
                    (*l_188) &= (l_354 == (void*)0);
                }
                else
                {
                    for (g_252.f3 = 0; (g_252.f3 == 28); g_252.f3++)
                    {
                        return g_50.f1;
                    }

                                        (**l_222) = l_334;

                    ;
                }

                ;
            }

            ;
        }
        else
        {
            int *l_359 = &g_56;
            (*g_180) &= ((void*)0 == &g_52);
            (**l_222) = (*g_57);
            for (g_252.f3 = 0; (g_252.f3 >= (-10)); g_252.f3 = safe_sub_func_int32_t_s_s(g_252.f3, 1))
            {
                unsigned l_360 = 1UL;
                (*l_223) = l_359;

                ;
                (*g_179) = (*g_179);
                l_360 &= ((((*l_359) & (g_139.f4 == ((((*l_359) < 0x82L) >= p_40) ^ ((**l_223) < g_20)))) ^ (0x47L < ((void*)0 == l_225))) , (***l_225));
                (**g_178) = (*g_179);
            }

                    }

        ;
    }

        ;
    ;
    l_361 ^= (p_39.f0 == (p_40 | p_40));
    return p_39.f0;
}







static union U2 func_41(union U2 p_42)
{
    union U2 *l_76 = &g_25;
    short l_81 = 7L;
    int **l_82 = &g_58;
    unsigned l_88 = 4294967295UL;
    char l_109 = (-1L);
    int l_121 = 0xD930511CL;
    if ((safe_sub_func_uint32_t_u_u((((void*)0 == l_76) < ((safe_mod_func_uint16_t_u_u(g_67, (safe_rshift_func_uint16_t_u_u((((((g_25.f0 , (((((l_81 ^ 0x62L) & p_42.f0) == ((&l_76 == (void*)0) ^ (-3L))) >= 0L) < g_50.f0)) , (void*)0) == l_82) | l_81) >= l_81), g_20)))) , g_56)), 0x54B5300FL)))
    {
        unsigned l_91 = 0xF6575EB9L;
        int *l_92 = (void*)0;
        char l_120 = 0xF7L;
        union U2 l_124 = {0x7C2336C4L};
        (*g_93) = ((safe_add_func_int16_t_s_s(((g_85 , (*g_51)) == (void*)0), (((p_42.f0 , (safe_add_func_uint8_t_u_u(l_88, 1L))) && (+g_85.f3)) == (((((*g_52) , (safe_lshift_func_uint16_t_u_s(g_85.f2, 12))) || g_67) && 4294967293UL) == l_91)))) <= g_25.f0);
        for (l_81 = 0; (l_81 != (-18)); l_81 = safe_sub_func_uint32_t_u_u(l_81, 1))
        {
            union U2 *l_98 = &g_25;
            int *l_99 = &g_56;
            (*l_99) = ((0x3CACL <= 5UL) & (((safe_rshift_func_uint8_t_u_s(p_42.f0, 5)) , l_98) == (void*)0));
            (*g_100) &= (*l_99);
            if ((safe_sub_func_uint16_t_u_u(0x7816L, p_42.f0)))
            {
                char l_110 = 0xDFL;
                int *l_117 = &g_56;
                for (l_91 = (-4); (l_91 <= 47); l_91 = safe_add_func_uint32_t_u_u(l_91, 3))
                {
                    (*l_82) = (*l_82);
                }
                if ((~((((safe_mod_func_int16_t_s_s((p_42.f0 > g_49), ((safe_mod_func_int32_t_s_s((((p_42.f0 == g_25.f0) >= (p_42.f0 && ((*g_51) == (void*)0))) , ((&p_42 == (p_42.f0 , &p_42)) <= 0xAF4792CDL)), 0x991E3C28L)) , p_42.f0))) & l_109) && l_110) == 0xA6A1L)))
                {
                    (*l_99) = (safe_unary_minus_func_uint16_t_u(((((*l_99) , 4294967288UL) == p_42.f0) >= (p_42.f0 | g_50.f3))));
                    g_56 &= (safe_add_func_int8_t_s_s((g_114 , ((safe_lshift_func_uint8_t_u_s((l_117 != (void*)0), 7)) , (safe_rshift_func_int8_t_s_u(0L, 0)))), g_50.f2));
                }
                else
                {
                    (*l_99) = 6L;
                }
            }
            else
            {
                l_120 |= (g_85.f2 , (*g_93));
                (*l_99) = (((p_42.f0 || 1UL) > l_121) | (safe_add_func_int16_t_s_s(g_50.f1, p_42.f0)));
                (*l_99) = (~p_42.f0);
            }
            (*l_99) = p_42.f0;
        }
        return l_124;

            }
    else
    {
        char l_128 = (-2L);
        int *l_129 = &g_56;
        short l_130 = 2L;
        (*l_129) = (((l_82 != (((((safe_unary_minus_func_int8_t_s((func_43(l_128, l_128) , g_85.f3))) & ((p_42.f0 , p_42.f0) < g_56)) != 0L) & 0xD4EDL) , (void*)0)) | 0L) , 0x714E362FL);
        l_130 &= (*l_129);
    }
    return p_42;

    }







static union U2 func_43(int p_44, int p_45)
{
    unsigned short l_46 = 65529UL;
    int *l_55 = &g_56;
    union U2 **l_61 = (void*)0;
    int *l_66 = &g_67;
    g_49 = (l_46 ^ (g_20 == (safe_rshift_func_int16_t_s_u((-6L), 6))));
    (*g_51) = (g_50 , &g_25);
    for (g_49 = 0; (g_49 >= 23); ++g_49)
    {
        (*g_57) = l_55;

        ;
    }
    (*l_66) ^= (0x4AL != (safe_sub_func_int16_t_s_s(((((-10L) < (((((void*)0 != l_61) & p_44) | (((p_45 , (safe_sub_func_uint8_t_u_u((!(safe_add_func_uint16_t_u_u(p_44, ((g_50.f0 , (*l_55)) <= p_45)))), g_25.f0))) <= 0x04L) , g_50.f2)) ^ p_45)) < p_45) | 0x77FC3FE7L), 0L)));
    return (**g_51);

    }





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_20, "g_20", print_hash_value);
    transparent_crc(g_25.f0, "g_25.f0", print_hash_value);
    transparent_crc(g_49, "g_49", print_hash_value);
    transparent_crc(g_50.f0, "g_50.f0", print_hash_value);
    transparent_crc(g_50.f1, "g_50.f1", print_hash_value);
    transparent_crc(g_50.f2, "g_50.f2", print_hash_value);
    transparent_crc(g_50.f3, "g_50.f3", print_hash_value);
    transparent_crc(g_56, "g_56", print_hash_value);
    transparent_crc(g_67, "g_67", print_hash_value);
    transparent_crc(g_73, "g_73", print_hash_value);
    transparent_crc(g_85.f2, "g_85.f2", print_hash_value);
    transparent_crc(g_114, "g_114", print_hash_value);
    transparent_crc(g_139.f0, "g_139.f0", print_hash_value);
    transparent_crc(g_139.f4, "g_139.f4", print_hash_value);
    transparent_crc(g_181, "g_181", print_hash_value);
    transparent_crc(g_187, "g_187", print_hash_value);
    transparent_crc(g_252.f0, "g_252.f0", print_hash_value);
    transparent_crc(g_252.f4, "g_252.f4", print_hash_value);
    transparent_crc(g_277, "g_277", print_hash_value);
    transparent_crc(g_299.f0, "g_299.f0", print_hash_value);
    transparent_crc(g_299.f4, "g_299.f4", print_hash_value);
    transparent_crc(g_391.f0, "g_391.f0", print_hash_value);
    transparent_crc(g_391.f4, "g_391.f4", print_hash_value);
    transparent_crc(g_393.f0, "g_393.f0", print_hash_value);
    transparent_crc(g_393.f1, "g_393.f1", print_hash_value);
    transparent_crc(g_393.f2, "g_393.f2", print_hash_value);
    transparent_crc(g_393.f3, "g_393.f3", print_hash_value);
    transparent_crc(g_410.f0, "g_410.f0", print_hash_value);
    transparent_crc(g_410.f4, "g_410.f4", print_hash_value);
    transparent_crc(g_423.f0, "g_423.f0", print_hash_value);
    transparent_crc(g_423.f1, "g_423.f1", print_hash_value);
    transparent_crc(g_423.f2, "g_423.f2", print_hash_value);
    transparent_crc(g_423.f3, "g_423.f3", print_hash_value);
    transparent_crc(g_430, "g_430", print_hash_value);
    transparent_crc(g_600.f0, "g_600.f0", print_hash_value);
    transparent_crc(g_600.f4, "g_600.f4", print_hash_value);
    transparent_crc(g_602.f0, "g_602.f0", print_hash_value);
    transparent_crc(g_602.f4, "g_602.f4", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
