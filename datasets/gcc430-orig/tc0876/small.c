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
   volatile unsigned short f0;
   unsigned short f1;
   volatile unsigned char f2;
   int f3;
};


static short g_27 = (-1L);
static int g_41 = (-5L);
static int *g_40 = &g_41;
static unsigned short g_53 = 65535UL;
static short g_56 = (-1L);
static unsigned g_78 = 0x003B9FE2L;
static unsigned g_95 = 0x0870E267L;
static int **g_103 = &g_40;
static int *** volatile g_102 = &g_103;
static unsigned short g_113 = 3UL;
static int g_117 = 0x6AA3FDD5L;
static unsigned short *g_122 = &g_53;
static int g_124 = 0x683E25FCL;
static int g_128 = 0xE3964532L;
static unsigned g_142 = 9UL;
static unsigned short g_148 = 65526UL;
static unsigned char g_150 = 0x05L;
static volatile union U0 g_156 = {0x09A2L};
static int g_162 = 0x6DC68BC5L;
static char g_172 = 0x65L;
static union U0 g_190 = {0x07DBL};
static short g_196 = 0x5341L;
static int g_205 = 1L;
static int *g_204 = &g_205;
static int ** volatile g_206 = &g_40;
static char g_223 = 0x7FL;
static union U0 g_225 = {0UL};
static int * volatile g_226 = &g_41;
static volatile unsigned char g_266 = 4UL;
static union U0 g_273 = {0xFA4DL};
static volatile union U0 g_280 = {1UL};
static volatile union U0 g_305 = {1UL};
static unsigned *g_343 = &g_95;
static unsigned * volatile *g_342 = &g_343;
static int g_427 = 1L;
static union U0 *g_503 = &g_225;
static union U0 ** volatile g_502 = &g_503;
static volatile unsigned g_506 = 0xA14F01B3L;
static volatile unsigned *g_505 = &g_506;
static volatile unsigned **g_504 = &g_505;
static union U0 g_514 = {0x2233L};
static short g_533 = 0xA67BL;
static int ** volatile g_537 = &g_204;
static short *g_577 = (void*)0;
static short **g_576 = &g_577;
static char g_592 = 0x02L;
static unsigned g_598 = 8UL;



static char func_1(void);
static int * func_2(int * p_3, int * p_4, int * p_5, int * p_6, int p_7);
static int * func_8(int * p_9, short p_10);
static int * func_11(int * p_12, int * p_13, int * p_14, unsigned short p_15, int * p_16);
static int * func_17(char p_18);
static int func_21(unsigned char p_22);
static union U0 func_28(int * p_29, short p_30, int * p_31);
static int * func_32(unsigned short p_33);
static char func_36(int * p_37, int * p_38, unsigned p_39);
static char func_48(char p_49);
static char func_1(void)
{
    short *l_532 = &g_533;
    int *l_534 = (void*)0;
    int l_535 = 8L;
    int **l_593 = &g_40;
    unsigned **l_594 = (void*)0;
    unsigned ***l_595 = &l_594;
    (*l_593) = func_2(func_8(func_11(func_17((safe_mod_func_int32_t_s_s(func_21((safe_lshift_func_int8_t_s_u(0x6AL, 4))), 8L))), g_343, ((safe_sub_func_uint16_t_u_u((1UL >= 0xDF82L), ((*l_532) ^= 0xB040L))) , l_534), l_535, g_343), g_273.f1), g_343, g_343, g_343, g_225.f1);
    (*g_40) |= 0x130EB746L;
    (*l_595) = l_594;
    (**l_593) = (safe_mod_func_int32_t_s_s((*g_40), ((*g_343) &= 0x53DF97EAL)));
    return g_598;
}







static int * func_2(int * p_3, int * p_4, int * p_5, int * p_6, int p_7)
{
    unsigned l_542 = 0x81135BB8L;
    int **l_550 = &g_40;
    short *l_575 = &g_27;
    short **l_574 = &l_575;
    char *l_590 = &g_172;
    for (g_190.f3 = 0; (g_190.f3 > 2); g_190.f3 = safe_add_func_uint32_t_u_u(g_190.f3, 5))
    {
        char l_554 = (-9L);
        int l_571 = 0xDBF1B9D4L;
        if ((*p_3))
        {
            int **l_551 = (void*)0;
            unsigned short *l_552 = &g_190.f1;
            unsigned short **l_553 = &l_552;
            unsigned short *l_567 = &g_514.f1;
            int l_570 = 3L;
            short *l_572 = &g_533;
            (*p_3) &= ((*p_6) |= l_542);
            (*p_5) = (!(safe_mod_func_int8_t_s_s((l_542 > (safe_unary_minus_func_int32_t_s(((safe_add_func_uint16_t_u_u(l_542, (safe_rshift_func_int16_t_s_s(g_273.f2, ((l_550 != (l_551 = &g_204)) | ((p_7 , ((((*l_553) = l_552) == (void*)0) , &g_122)) == (void*)0)))))) != l_554)))), 1UL)));
            (*g_40) = ((safe_sub_func_uint8_t_u_u(((((((*l_572) = ((p_7 != (((safe_sub_func_uint32_t_u_u((((safe_mod_func_uint16_t_u_u((*g_122), func_48(g_95))) ^ (safe_rshift_func_uint16_t_u_s(((l_571 ^= (safe_sub_func_int8_t_s_s(((((*l_567) |= (g_273.f1 = (safe_rshift_func_int16_t_s_s(p_7, 7)))) & (g_148 = l_554)) , (g_223 = (safe_rshift_func_int16_t_s_s((l_554 ^ (l_570 , 0x1BL)), 6)))), 0UL))) != p_7), 13))) == 0UL), (**g_342))) , (**g_342)) && 1L)) < 0x53FDE5F4L)) | p_7) , 0x581A0153L) && p_7) , p_7), (-1L))) , (*p_5));
            if ((*p_4))
                break;
        }
        else
        {
            int *l_573 = &g_205;
            (**g_206) = (*g_226);
            if ((*p_5))
            {
                return l_573;
            }
            else
            {
                char *l_589 = &g_223;
                g_576 = l_574;
                for (g_113 = (-20); (g_113 == 46); g_113++)
                {
                    unsigned char *l_582 = (void*)0;
                    unsigned char *l_583 = &g_150;
                    int l_588 = 1L;
                    short l_591 = (-1L);
                    l_571 &= ((0x74L > (safe_lshift_func_uint8_t_u_u(((*l_583) ^= (**l_550)), g_190.f1))) == ((g_280.f0 || (safe_lshift_func_int16_t_s_s(l_554, 14))) <= (((safe_lshift_func_uint8_t_u_u(l_588, 0)) == ((p_7 != ((**g_342) |= (l_591 ^= (((&l_554 != (l_590 = l_589)) > p_7) && p_7)))) && l_588)) , g_592)));
                }
            }
            (*p_3) ^= ((*p_4) = (-1L));
            (*l_550) = (*l_550);
        }
    }
    (*l_550) = func_8(((*l_550) = (*l_550)), p_7);
    (*g_40) = (**l_550);
    return (*l_550);
}







static int * func_8(int * p_9, short p_10)
{
    unsigned char l_538 = 0x4CL;
    int *l_539 = &g_128;
    (*g_40) ^= l_538;
    return l_539;
}







static int * func_11(int * p_12, int * p_13, int * p_14, unsigned short p_15, int * p_16)
{
    int *l_536 = (void*)0;
    (*g_537) = l_536;
    return p_16;
}







static int * func_17(char p_18)
{
    short l_233 = 1L;
    int *l_240 = &g_205;
    int ***l_277 = &g_103;
    unsigned l_286 = 0x989333FCL;
    unsigned *l_312 = &g_142;
    unsigned **l_311 = &l_312;
    int **l_329 = &l_240;
    unsigned **l_341 = (void*)0;
    int l_355 = (-4L);
    union U0 *l_366 = &g_190;
    unsigned l_402 = 1UL;
    unsigned l_432 = 4294967295UL;
    unsigned short *l_456 = &g_225.f1;
    unsigned char l_527 = 0x50L;
    for (g_190.f3 = (-21); (g_190.f3 != (-17)); g_190.f3++)
    {
        int l_235 = 0L;
        unsigned *l_246 = &g_78;
        int l_248 = 0x67CF25E2L;
        char l_265 = 0x67L;
        int *l_287 = &g_162;
        for (g_172 = 16; (g_172 <= 22); g_172++)
        {
            unsigned short l_234 = 0x6C8EL;
            int *l_236 = &g_162;
        }
        (*g_204) = (*l_240);
    }
    if ((*l_240))
    {
        int *l_306 = &g_117;
        unsigned *l_308 = &l_286;
        unsigned **l_307 = &l_308;
        unsigned *l_310 = &l_286;
        unsigned **l_309 = &l_310;
        char *l_313 = &g_172;
        short *l_314 = (void*)0;
        short *l_315 = (void*)0;
        short *l_316 = (void*)0;
        short *l_317 = &g_196;
        int l_318 = (-1L);
        (*g_40) ^= (*l_240);
        (*l_306) = (g_305 , p_18);
        l_318 = (((l_311 != (void*)0) >= (0x87L >= ((*l_313) = g_128))) >= (((*l_317) = func_48(g_190.f0)) >= 65531UL));
    }
    else
    {
        short l_340 = 0x2F68L;
        unsigned *l_362 = &g_142;
        unsigned l_384 = 4UL;
        int ****l_409 = &l_277;
        unsigned char *l_447 = &g_150;
        unsigned l_458 = 5UL;
        unsigned l_476 = 0x36D35422L;
        char **l_491 = (void*)0;
        if ((((safe_add_func_int32_t_s_s((-5L), (p_18 != ((func_48((g_190.f0 && ((safe_rshift_func_int16_t_s_u((safe_lshift_func_int16_t_s_s((((safe_add_func_uint8_t_u_u(0x7DL, (((*g_102) = l_329) == (void*)0))) != (((safe_mod_func_uint16_t_u_u((((*l_240) , (g_95 & ((((safe_sub_func_uint32_t_u_u(((safe_add_func_uint32_t_u_u((safe_mod_func_int16_t_s_s((safe_sub_func_int16_t_s_s(l_340, (-3L))), 0x32C3L)), 0x2EA9A851L)) >= 0xA0L), l_340)) , l_341) == g_342) | p_18))) , (*g_122)), p_18)) > (*g_204)) > l_340)) && 0xEDB1L), 1)), p_18)) == p_18))) , p_18) > g_225.f1)))) , &l_233) == &l_233))
        {
            unsigned l_361 = 4294967286UL;
            int l_363 = 9L;
            short l_364 = (-1L);
            unsigned short *l_379 = &g_53;
            unsigned char l_403 = 1UL;
            for (l_286 = 24; (l_286 < 45); l_286 = safe_add_func_uint32_t_u_u(l_286, 6))
            {
                int **l_346 = &l_240;
                int *l_353 = &g_117;
                short *l_354 = &g_56;
                unsigned char *l_356 = &g_150;
                char l_389 = 0x1AL;
                (*g_204) = (func_48(((g_225 , (((*g_204) ^ (func_48((((p_18 != ((**g_342) != ((~249UL) >= p_18))) ^ ((g_305.f0 && ((((((*l_277) = (l_346 = l_346)) == &l_240) , 0UL) < 0xF046L) >= p_18)) > g_225.f1)) , p_18)) < p_18)) & p_18)) < p_18)) != p_18);
                (*g_204) &= (((*l_356) ^= (((((*l_329) = (*l_346)) == (((**g_342) = (((safe_sub_func_int16_t_s_s(((*l_354) = (0xD1L < p_18)), l_355)) | 0xE17C192CL) ^ p_18)) , (*g_206))) & 1UL) ^ 0x71F9L)) <= 0x10L);
            }
            (*l_329) = (((p_18 ^ (l_363 >= (safe_sub_func_int8_t_s_s(((g_156.f1 , (safe_sub_func_int8_t_s_s((safe_sub_func_int8_t_s_s(((0xAEF5L >= (((safe_lshift_func_int16_t_s_u(((((safe_rshift_func_int8_t_s_s(l_364, 1)) | g_223) || ((**g_206) | (safe_add_func_int8_t_s_s(g_124, l_402)))) & 0x6F4876AAL), 2)) >= l_403) , (*g_122))) < g_113), 0xE5L)), l_384))) ^ l_340), l_340)))) | g_41) , (void*)0);
            for (g_196 = 0; (g_196 < 3); g_196 = safe_add_func_uint16_t_u_u(g_196, 1))
            {
                return l_362;
            }
            (*g_204) ^= (g_196 , p_18);
        }
        else
        {
            int ****l_408 = &l_277;
            int l_423 = (-1L);
            unsigned short *l_457 = (void*)0;
            unsigned char l_473 = 253UL;
            int *l_481 = &g_117;
            union U0 *l_501 = (void*)0;
            short l_508 = 1L;
            int l_518 = 1L;
            for (l_286 = 3; (l_286 < 20); ++l_286)
            {
                int l_410 = 0x179949B4L;
                int *l_424 = &g_41;
                if ((l_408 != l_409))
                {
                    unsigned *l_415 = &g_78;
                    short *l_418 = &g_196;
                    int l_421 = 0xC1D93898L;
                    short *l_422 = &l_340;
                    unsigned char *l_425 = (void*)0;
                    unsigned char *l_426 = &g_150;
                    (*g_40) ^= l_410;
                    if ((safe_add_func_int16_t_s_s((((*l_422) = ((safe_sub_func_int8_t_s_s((!(p_18 != ((*l_415) = ((**g_342) = func_48(p_18))))), (safe_add_func_int16_t_s_s(((*l_418) = p_18), (safe_add_func_uint16_t_u_u((*g_122), l_421)))))) >= (((0xF9L > g_148) , (((l_410 & p_18) , g_162) , g_225.f1)) != l_421))) < p_18), p_18)))
                    {
                        (*l_240) = (*g_226);
                        (*l_329) = func_32(l_423);
                        if ((**l_329))
                            break;
                    }
                    else
                    {
                        (*l_329) = l_424;
                    }
                    if ((((*l_426) = (g_156.f2 | 0x0CL)) <= (p_18 > (g_427 = (p_18 , (l_362 != (void*)0))))))
                    {
                        return l_424;
                    }
                    else
                    {
                        if ((**g_206))
                            break;
                    }
                    (*l_329) = func_32((*g_122));
                }
                else
                {
                    (*l_329) = func_32((safe_mod_func_int8_t_s_s(1L, (**l_329))));
                }
                (**l_329) |= ((p_18 , ((safe_lshift_func_int16_t_s_s(p_18, 4)) < ((*g_343) = ((*l_424) ^ 0xBA14L)))) != p_18);
                return l_424;
            }
            (*g_204) = ((p_18 <= (**l_329)) , ((**g_206) = (**g_206)));
            if ((l_432 ^= (((*l_240) < p_18) , (*g_40))))
            {
                short l_433 = 1L;
                char *l_434 = &g_172;
                char **l_435 = &l_434;
                short *l_446 = &l_233;
                short l_478 = 0x3550L;
                int *l_480 = (void*)0;
                l_423 = ((*g_204) = l_433);
                (*g_40) = (((**l_329) , func_48(p_18)) & (g_225.f1 , (((((*l_435) = l_434) == &g_172) | 65532UL) | (g_190.f1 != ((safe_rshift_func_int8_t_s_s(((((*g_122) = (safe_sub_func_int32_t_s_s(l_433, 0xBF75F060L))) >= g_95) & l_433), 0)) & 252UL)))));
                (*l_240) = (((safe_rshift_func_int16_t_s_u((p_18 && (safe_sub_func_uint16_t_u_u((!p_18), ((*l_446) = (safe_sub_func_uint8_t_u_u(g_225.f2, 0x4EL)))))), 13)) , l_447) != l_434);
                if ((g_280.f2 , (safe_mod_func_int8_t_s_s((g_223 = ((*l_434) = p_18)), 0x97L))))
                {
                    char l_459 = 1L;
                    int l_477 = 0x1171E088L;
                    if (((*g_122) && (((safe_mod_func_uint16_t_u_u(p_18, (((p_18 < ((safe_mod_func_uint8_t_u_u(((*l_447) = 0x66L), ((**l_435) = func_48(((((safe_lshift_func_int8_t_s_u(g_190.f1, 1)) , (((g_41 && 8UL) , l_456) != l_457)) , 0x127DL) , l_458))))) , 0x47F2ABCDL)) == p_18) ^ 0xFEC5L))) , (*g_204)) >= l_459)))
                    {
                        char l_460 = 0xE1L;
                        short l_479 = 0xE7EAL;
                        (*l_329) = func_32(func_48(l_460));
                        (*l_329) = func_32(((safe_add_func_uint32_t_u_u(p_18, (((**l_435) = (((safe_lshift_func_int8_t_s_u(g_190.f1, l_460)) , (-1L)) != l_479)) > g_280.f2))) , p_18));
                    }
                    else
                    {
                        (**l_329) = p_18;
                        (**g_206) = 0xF3513F0DL;
                        return l_480;
                    }
                    (**l_329) = (**g_206);
                }
                else
                {
                    int *l_482 = &l_423;
                    l_482 = l_481;
                    if (((-1L) <= ((*l_240) = ((*l_481) == 0x9A40DE49L))))
                    {
                        (*l_481) = p_18;
                        (*l_481) = (safe_lshift_func_int16_t_s_u(p_18, 3));
                        (*l_482) = 0x0296D85FL;
                    }
                    else
                    {
                        int l_485 = 1L;
                        (*g_204) = 1L;
                        (*g_226) = l_485;
                    }
                    (*l_240) = (**l_329);
                }
            }
            else
            {
                int *l_488 = &l_423;
                short l_500 = 0x4836L;
                unsigned **l_507 = &l_312;
                union U0 *l_513 = &g_514;
                char *l_515 = &g_172;
                for (g_117 = 5; (g_117 == 9); g_117 = safe_add_func_int16_t_s_s(g_117, 5))
                {
                    return (*g_206);
                }
                for (g_95 = 0; (g_95 > 22); g_95 = safe_add_func_uint8_t_u_u(g_95, 3))
                {
                    unsigned short **l_496 = &g_122;
                    unsigned *l_497 = &g_78;
                    int l_498 = 0xD2855E01L;
                    char *l_499 = &g_223;
                    (*l_329) = (*l_329);
                    (*l_329) = l_488;
                    (*g_502) = l_501;
                    (*l_329) = func_32(((g_504 == l_507) ^ func_48(p_18)));
                }
                (*l_240) ^= (((*l_515) = (((p_18 >= g_128) , 0xA367L) | 0xD094L)) , (*l_488));
            }
            if (((safe_add_func_int8_t_s_s((p_18 = (((g_280.f1 < ((((*g_122) = ((((((((*g_122) != l_518) & (p_18 >= (2L || (**l_329)))) ^ (safe_unary_minus_func_uint32_t_u((!(safe_rshift_func_int16_t_s_s((safe_sub_func_uint16_t_u_u((safe_mod_func_int8_t_s_s(p_18, 0x41L)), 0xC5DFL)), g_148)))))) , 0x99L) && 255UL) ^ (*l_481)) && (**l_329))) < p_18) , 0xD4EBL)) , 4294967295UL) , p_18)), g_427)) && p_18))
            {
                int *l_526 = &g_41;
                (**l_329) = ((p_18 <= (l_527 || g_514.f1)) , (g_305 , (g_514.f1 , (~(p_18 , (**l_329))))));
            }
            else
            {
                (**l_329) = (safe_lshift_func_int8_t_s_u(p_18, 7));
                (*l_240) |= p_18;
                (**l_329) ^= p_18;
                (*g_40) ^= (*l_481);
            }
        }
    }
    return (*g_206);
}







static int func_21(unsigned char p_22)
{
    int *l_42 = (void*)0;
    int l_43 = (-4L);
    int *l_227 = &g_41;
    int **l_228 = &g_40;
    (*g_226) = (safe_lshift_func_int16_t_s_s(((!(g_27 , ((*g_204) = (p_22 ^ ((func_28(func_32(((safe_rshift_func_uint8_t_u_u(255UL, (l_43 = (func_36(g_40, l_42, l_43) ^ 0xC1L)))) & (safe_sub_func_int32_t_s_s((safe_mod_func_int32_t_s_s(((void*)0 != g_40), g_78)), 0x7A2FDF83L)))), p_22, g_204) , g_41) , 65527UL))))) == p_22), 3));
    (*l_228) = l_227;
    return p_22;
}







static union U0 func_28(int * p_29, short p_30, int * p_31)
{
    int l_212 = 0x4418FD7AL;
    short *l_218 = &g_196;
    short **l_217 = &l_218;
    int **l_221 = &g_40;
    char *l_222 = &g_223;
    int *l_224 = &g_128;
    (*g_206) = func_32((*g_122));
    for (g_78 = (-21); (g_78 > 41); g_78 = safe_add_func_uint32_t_u_u(g_78, 5))
    {
        int l_211 = 0x2E3D4A9BL;
        l_211 &= ((*g_204) = (safe_rshift_func_int16_t_s_u(g_196, 5)));
        if (l_212)
            break;
        (*g_206) = &l_212;
    }
    (*l_224) ^= (g_53 , (((*l_222) |= (safe_lshift_func_uint8_t_u_u((((g_56 == ((l_212 >= p_30) ^ (safe_rshift_func_int8_t_s_s((((*l_217) = &p_30) != (void*)0), 1)))) > ((safe_sub_func_int16_t_s_s(p_30, ((((*l_221) = p_29) != (((((l_212 || g_156.f2) ^ g_172) < 3UL) ^ (*g_204)) , p_31)) , (-8L)))) <= g_41)) < g_117), 2))) || (**l_221)));
    (*g_204) = (*p_31);
    return g_225;
}







static int * func_32(unsigned short p_33)
{
    unsigned l_133 = 1UL;
    int *l_134 = &g_128;
    unsigned *l_141 = &g_142;
    unsigned **l_140 = &l_141;
    short l_151 = 0xD045L;
    unsigned char l_152 = 252UL;
    unsigned char l_159 = 0x0EL;
    int **l_203 = &g_40;
    if (((func_48(l_133) , l_134) != l_134))
    {
        int *l_137 = &g_117;
        unsigned **l_143 = &l_141;
        int **l_147 = &l_134;
        unsigned char *l_149 = &g_150;
        int *l_153 = &g_128;
        int *l_160 = &g_124;
        char *l_161 = (void*)0;
        (**l_147) = (safe_sub_func_uint32_t_u_u(((!l_152) ^ (*g_122)), (**l_147)));
        l_153 = (*l_147);
        if ((p_33 , (safe_add_func_int8_t_s_s((g_162 = (((((g_156 , ((*l_160) = ((*l_134) = (safe_add_func_int16_t_s_s(((p_33 & (l_159 , g_95)) < (*l_153)), (*l_153)))))) , 0UL) > ((void*)0 == g_40)) , (void*)0) == &g_78)), g_150))))
        {
            short *l_170 = &g_56;
            char *l_171 = &g_172;
            short *l_175 = &g_27;
            int l_176 = 0xEC180189L;
            short *l_177 = &l_151;
            (*l_137) ^= ((*g_40) == (safe_unary_minus_func_uint8_t_u((safe_sub_func_uint8_t_u_u((safe_add_func_uint8_t_u_u((((*l_171) |= (safe_rshift_func_int8_t_s_s((&l_151 != &g_56), (((*l_170) = ((*g_40) ^ 2L)) != p_33)))) >= ((safe_sub_func_int16_t_s_s((((*l_175) |= 0x3918L) & (0x75ADL >= ((*l_177) = (((*g_122) = (l_176 , p_33)) && p_33)))), 8L)) == p_33)), g_41)), 0x67L)))));
            (**l_147) &= 0x48C05A14L;
            (**l_147) ^= func_48((l_176 = ((void*)0 != (*l_140))));
        }
        else
        {
            (*l_147) = (*l_147);
        }
        (*l_134) = (((g_113 | (+(((safe_mod_func_int16_t_s_s((*l_134), (*l_153))) < 0x6F68L) == (*l_134)))) == ((*l_137) <= g_148)) | (p_33 <= p_33));
    }
    else
    {
        unsigned char *l_186 = &l_152;
        int *l_187 = &g_117;
        int **l_188 = (void*)0;
        int **l_189 = &l_187;
        unsigned char *l_195 = &g_150;
        short *l_197 = &g_56;
        int **l_198 = &l_134;
        (*l_198) = (((((*l_197) = (safe_sub_func_int8_t_s_s(((g_196 |= ((safe_mod_func_uint8_t_u_u(((*l_195) = ((((safe_sub_func_uint32_t_u_u((((((*l_186) &= (*l_134)) , ((*l_189) = l_187)) != l_134) >= (*g_40)), 4294967291UL)) , g_190) , (*l_134)) , ((safe_sub_func_int32_t_s_s(((**l_189) = 1L), ((safe_sub_func_int32_t_s_s(0L, 0x8F89870FL)) & (*l_134)))) , 255UL))), (*l_134))) == 0UL)) , p_33), (*l_134)))) | g_27) > (*l_134)) , (*l_189));
        for (l_133 = 16; (l_133 >= 54); ++l_133)
        {
            int *l_201 = &g_124;
            int l_202 = (-1L);
            (**l_198) = (((g_190.f2 , l_141) == l_201) > (g_78 & ((*l_197) = l_202)));
        }
        (*l_198) = l_141;
    }
    (*g_40) &= p_33;
    (*l_203) = l_141;
    return (*l_203);
}







static char func_36(int * p_37, int * p_38, unsigned p_39)
{
    char l_106 = 1L;
    int **l_111 = (void*)0;
    unsigned short *l_112 = &g_113;
    unsigned *l_115 = (void*)0;
    unsigned **l_114 = &l_115;
    int *l_116 = &g_117;
    int *l_123 = &g_124;
    int ***l_125 = (void*)0;
    int ***l_126 = (void*)0;
    int ***l_127 = (void*)0;
    (*l_116) |= (safe_sub_func_uint32_t_u_u(((safe_sub_func_int8_t_s_s(func_48(g_27), (p_39 , (-1L)))) , (((((*p_37) = (safe_lshift_func_uint16_t_u_u(func_48(l_106), (safe_sub_func_uint16_t_u_u(((safe_lshift_func_int8_t_s_u((((*l_114) = ((((void*)0 == l_111) != ((*l_112) |= p_39)) , (void*)0)) != (void*)0), 1)) , g_78), g_95))))) , &g_103) != (void*)0) < l_106)), g_78));
    (*l_116) &= (***g_102);
    g_128 ^= (safe_rshift_func_uint16_t_u_s(g_78, (safe_sub_func_uint32_t_u_u((l_112 != (g_122 = l_112)), ((*l_116) , (((*g_102) = (((*l_123) = func_48(p_39)) , (void*)0)) != &g_40))))));
    return p_39;
}







static char func_48(char p_49)
{
    unsigned short *l_52 = &g_53;
    int l_54 = 0xDE30ECA6L;
    short *l_55 = &g_56;
    (*g_40) = 0x2A67F6A1L;
    (*g_40) &= 0xCDD711A5L;
    if ((safe_mod_func_uint16_t_u_u(g_27, ((*l_55) = (((*l_52) = 0x6D20L) | (l_54 = ((void*)0 == &g_41)))))))
    {
        int l_75 = 0xA53AA480L;
        int l_76 = 1L;
        (*g_40) |= (safe_mod_func_int32_t_s_s((safe_add_func_uint8_t_u_u((&g_41 == (void*)0), p_49)), l_54));
        (*g_40) |= p_49;
        for (g_53 = 0; (g_53 == 31); ++g_53)
        {
            int *l_69 = &l_54;
            unsigned *l_74 = (void*)0;
            unsigned *l_77 = &g_78;
            short *l_83 = (void*)0;
            short *l_84 = &g_27;
        }
    }
    else
    {
        unsigned l_101 = 6UL;
        (*g_40) ^= l_101;
        (*g_102) = &g_40;
    }
    return p_49;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_27, "g_27", print_hash_value);
    transparent_crc(g_41, "g_41", print_hash_value);
    transparent_crc(g_53, "g_53", print_hash_value);
    transparent_crc(g_56, "g_56", print_hash_value);
    transparent_crc(g_78, "g_78", print_hash_value);
    transparent_crc(g_95, "g_95", print_hash_value);
    transparent_crc(g_113, "g_113", print_hash_value);
    transparent_crc(g_117, "g_117", print_hash_value);
    transparent_crc(g_124, "g_124", print_hash_value);
    transparent_crc(g_128, "g_128", print_hash_value);
    transparent_crc(g_142, "g_142", print_hash_value);
    transparent_crc(g_148, "g_148", print_hash_value);
    transparent_crc(g_150, "g_150", print_hash_value);
    transparent_crc(g_156.f0, "g_156.f0", print_hash_value);
    transparent_crc(g_156.f1, "g_156.f1", print_hash_value);
    transparent_crc(g_156.f2, "g_156.f2", print_hash_value);
    transparent_crc(g_162, "g_162", print_hash_value);
    transparent_crc(g_172, "g_172", print_hash_value);
    transparent_crc(g_190.f0, "g_190.f0", print_hash_value);
    transparent_crc(g_190.f1, "g_190.f1", print_hash_value);
    transparent_crc(g_190.f2, "g_190.f2", print_hash_value);
    transparent_crc(g_190.f3, "g_190.f3", print_hash_value);
    transparent_crc(g_196, "g_196", print_hash_value);
    transparent_crc(g_205, "g_205", print_hash_value);
    transparent_crc(g_223, "g_223", print_hash_value);
    transparent_crc(g_225.f0, "g_225.f0", print_hash_value);
    transparent_crc(g_225.f1, "g_225.f1", print_hash_value);
    transparent_crc(g_225.f2, "g_225.f2", print_hash_value);
    transparent_crc(g_266, "g_266", print_hash_value);
    transparent_crc(g_273.f0, "g_273.f0", print_hash_value);
    transparent_crc(g_273.f1, "g_273.f1", print_hash_value);
    transparent_crc(g_273.f2, "g_273.f2", print_hash_value);
    transparent_crc(g_280.f0, "g_280.f0", print_hash_value);
    transparent_crc(g_280.f1, "g_280.f1", print_hash_value);
    transparent_crc(g_280.f2, "g_280.f2", print_hash_value);
    transparent_crc(g_305.f0, "g_305.f0", print_hash_value);
    transparent_crc(g_305.f1, "g_305.f1", print_hash_value);
    transparent_crc(g_305.f2, "g_305.f2", print_hash_value);
    transparent_crc(g_427, "g_427", print_hash_value);
    transparent_crc(g_506, "g_506", print_hash_value);
    transparent_crc(g_514.f0, "g_514.f0", print_hash_value);
    transparent_crc(g_514.f1, "g_514.f1", print_hash_value);
    transparent_crc(g_514.f2, "g_514.f2", print_hash_value);
    transparent_crc(g_533, "g_533", print_hash_value);
    transparent_crc(g_592, "g_592", print_hash_value);
    transparent_crc(g_598, "g_598", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
