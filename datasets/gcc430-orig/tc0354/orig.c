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
   int f1;
   volatile unsigned f2;
   unsigned f3;
   int f4;
   unsigned f5;
   volatile unsigned short f6;
   unsigned f7;
};


static int g_6 = 1L;
static struct S0 g_65 = {0x78150149L,0xD85D5FCAL,0x4BAB92A1L,4294967288UL,0x9EC499E9L,0xC5348320L,0UL,0UL};
static volatile struct S0 g_71 = {0x834D56B8L,-7L,4294967288UL,0xDE002748L,0xF575434BL,1UL,65531UL,4294967292UL};
static int *g_80 = &g_65.f4;
static int **g_79 = &g_80;
static struct S0 g_81 = {1L,0x933B1518L,0x4E46196CL,0xA5CE7656L,9L,0xCB15B75DL,0x9A04L,0xD4F66362L};
static volatile short g_140 = 0L;
static volatile int g_143 = 1L;
static char g_148 = 0x69L;
static volatile unsigned char g_149 = 0xBBL;
static struct S0 g_152 = {0xD17E59D8L,-6L,0xCF3CB913L,4294967295UL,0x7B18E49BL,0xDBF79CE2L,65526UL,8UL};
static struct S0 g_154 = {0x288A0B6DL,9L,0UL,0x1CA04C89L,0xB4F3EC93L,7UL,0UL,0x8D5F6D39L};
static struct S0 g_155 = {-5L,0xC94048DEL,0x87059067L,0xB532C91DL,2L,4294967295UL,0xBC95L,0x984E575BL};
static struct S0 g_185 = {7L,0L,0UL,0x4F14847BL,-1L,0x6F84042AL,9UL,4294967295UL};
static volatile int g_326 = 0xACA34AA7L;
static short g_344 = 1L;
static volatile int g_346 = 0xE65A498EL;
static unsigned char g_349 = 5UL;
static struct S0 g_587 = {1L,1L,4294967295UL,4294967295UL,-1L,0x5D172392L,0xC041L,0x955DC2D2L};
static volatile struct S0 g_589 = {0L,-2L,0UL,0x5BEB9DF2L,-2L,2UL,65533UL,4294967293UL};



static char func_1(void);
static int func_7(int p_8, unsigned p_9);
static char func_16(int * p_17, int p_18, int * p_19, int * p_20);
static int func_21(unsigned p_22, int * p_23, int * p_24, int p_25, int * p_26);
static int * func_28(int * p_29, int * p_30);
static struct S0 func_31(int * p_32, int p_33, int * p_34, int * p_35, unsigned short p_36);
static int * func_39(short p_40, int * p_41, int p_42, int * p_43, int * p_44);
static int * func_45(int * p_46, char p_47);
static struct S0 func_49(unsigned p_50, short p_51, int * p_52);
static struct S0 * func_57(short p_58, int * p_59, int * p_60, char p_61);
static char func_1(void)
{
    int l_4 = 0xC7A00F47L;
    int *l_5 = &g_6;
    unsigned char l_27 = 255UL;
    unsigned char l_406 = 1UL;
    unsigned short l_596 = 65535UL;
    (*l_5) = (safe_lshift_func_uint16_t_u_s(l_4, 6));
    if (func_7(((safe_lshift_func_int8_t_s_u(g_6, 7)) ^ ((safe_rshift_func_uint8_t_u_s(((g_6 | (&g_6 != &g_6)) == ((safe_rshift_func_int8_t_s_s((-1L), func_16(l_5, func_21(l_27, l_5, func_28(&g_6, &g_6), l_406, l_5), &g_6, l_5))) == 6L)), (*l_5))) != 3L)), g_6))
    {
        int *l_590 = &g_65.f0;
        struct S0 *l_595 = &g_185;
        (*l_590) |= (*l_5);
        (*l_5) = 1L;
        (*l_595) = func_31(&g_6, (safe_sub_func_uint16_t_u_u(func_16(&g_6, (*l_590), l_5, l_5), (*l_5))), func_39(g_81.f5, func_39((safe_lshift_func_int16_t_s_u((4UL > 4L), g_155.f7)), l_5, (*l_5), &g_6, l_590), g_155.f7, l_590, l_5), l_590, (*l_590));


    }
    else
    {
        return g_65.f0;
    }


    l_596++;
    return g_155.f1;
}







static int func_7(int p_8, unsigned p_9)
{
    unsigned short l_438 = 65528UL;
    int *l_439 = &g_185.f4;
    int ***l_444 = &g_79;
    int *l_459 = &g_81.f0;
    int l_474 = 0x13E9DE08L;
    int l_493 = 1L;
    int l_501 = 0x8BD90C69L;
    int l_511 = 0x834A9D08L;
    int l_550 = 0xE96C8776L;
    int l_565 = 0xE094BE11L;
    int l_572 = 2L;
    int *l_588 = (void*)0;
    (*l_439) |= (l_438 < (1UL | 0x0602L));
    for (g_148 = 0; (g_148 == 6); g_148 = safe_add_func_uint8_t_u_u(g_148, 4))
    {
        struct S0 *l_452 = &g_65;
        struct S0 **l_451 = &l_452;
        int *l_457 = &g_65.f0;
        unsigned char l_458 = 6UL;
        int *l_460 = &g_65.f4;
        int l_471 = 0x1CCCDEBBL;
        int l_479 = 1L;
        int l_489 = 0x382288B6L;
        int l_510 = 0L;
        int l_534 = 1L;
        int l_545 = 1L;
        int l_575 = 1L;
        unsigned l_584 = 0UL;
        (*l_439) = (p_9 ^ ((g_185.f4 != (-4L)) <= (safe_mod_func_uint16_t_u_u(((void*)0 == l_444), (*l_439)))));
        (*l_460) = (0x69L >= (p_9 || (safe_mod_func_int32_t_s_s((safe_lshift_func_int16_t_s_u(((g_152.f1 || ((safe_lshift_func_int16_t_s_u(((void*)0 == l_451), 6)) & (safe_rshift_func_int16_t_s_s(func_21((safe_mod_func_uint32_t_u_u(func_21(g_81.f0, l_457, l_457, l_458, l_459), p_8)), &g_6, l_460, p_8, l_457), g_326)))) || 0xB8E5L), 1)), (*l_457)))));
        if ((safe_sub_func_uint8_t_u_u((1L != 0x2667326EL), 0x85L)))
        {
            (*g_79) = l_460;

            ;
        }
        else
        {
            short l_463 = 0xC97CL;
            int l_464 = 4L;
            int *l_465 = (void*)0;
            int *l_466 = (void*)0;
            int *l_467 = &g_155.f0;
            int *l_468 = &g_152.f4;
            int *l_469 = &g_81.f4;
            int *l_470 = (void*)0;
            int *l_472 = &l_464;
            int *l_473 = &g_6;
            int l_475 = 0x87D273A7L;
            int *l_476 = &g_154.f0;
            int *l_477 = &g_155.f4;
            int *l_478 = &g_81.f4;
            int *l_480 = &g_155.f4;
            int *l_481 = &g_6;
            int *l_482 = &l_464;
            int *l_483 = &g_65.f4;
            int *l_484 = &l_464;
            int *l_485 = (void*)0;
            int *l_486 = (void*)0;
            int *l_487 = &g_185.f4;
            int *l_488 = &l_464;
            int *l_490 = &g_185.f0;
            int *l_491 = &g_154.f0;
            int *l_492 = (void*)0;
            int *l_494 = &l_493;
            int *l_495 = &l_479;
            int *l_496 = &l_471;
            int *l_497 = &l_493;
            int *l_498 = &g_81.f4;
            int *l_499 = &l_493;
            int *l_500 = &l_479;
            int *l_502 = &g_152.f4;
            int *l_503 = &g_185.f0;
            int *l_504 = &l_474;
            int *l_505 = &g_6;
            int *l_506 = &g_81.f0;
            int *l_507 = &l_464;
            int *l_508 = (void*)0;
            int *l_509 = &g_185.f4;
            int *l_512 = &l_464;
            int *l_513 = &g_6;
            int *l_514 = &l_474;
            int *l_515 = (void*)0;
            int *l_516 = &l_479;
            int *l_517 = &l_471;
            int *l_518 = &l_510;
            int *l_519 = &g_65.f4;
            int *l_520 = &g_152.f0;
            int *l_521 = (void*)0;
            int *l_522 = &g_6;
            int *l_523 = &l_501;
            int *l_524 = (void*)0;
            int *l_525 = (void*)0;
            int *l_526 = &g_65.f4;
            int *l_527 = &l_474;
            int l_528 = 0L;
            int *l_529 = &l_493;
            int *l_530 = &g_185.f0;
            int *l_531 = (void*)0;
            int *l_532 = (void*)0;
            int *l_533 = (void*)0;
            int *l_535 = &g_154.f0;
            int *l_536 = &g_154.f0;
            int *l_537 = &g_154.f0;
            int *l_538 = (void*)0;
            int *l_539 = &g_81.f0;
            int *l_540 = &l_464;
            int *l_541 = &l_528;
            int *l_542 = &l_464;
            int *l_543 = &l_464;
            int *l_544 = &l_474;
            int *l_546 = (void*)0;
            int *l_547 = &g_155.f0;
            int *l_548 = &l_464;
            int *l_549 = &g_154.f4;
            int *l_551 = &g_185.f0;
            int *l_552 = &l_534;
            int *l_553 = &g_81.f4;
            int *l_554 = &g_154.f0;
            int *l_555 = (void*)0;
            int *l_556 = &l_475;
            int *l_557 = &g_152.f0;
            int *l_558 = (void*)0;
            int *l_559 = (void*)0;
            int *l_560 = &l_550;
            int *l_561 = &g_81.f4;
            int *l_562 = &g_65.f0;
            int *l_563 = (void*)0;
            int *l_564 = &g_154.f4;
            int *l_566 = (void*)0;
            int *l_567 = &g_65.f4;
            int *l_568 = (void*)0;
            int *l_569 = &l_534;
            int *l_570 = &l_474;
            int *l_571 = &g_65.f4;
            int *l_573 = &l_528;
            int *l_574 = &g_185.f0;
            int *l_576 = (void*)0;
            int *l_577 = &g_154.f0;
            int *l_578 = &l_475;
            int *l_579 = &g_185.f0;
            int *l_580 = (void*)0;
            int *l_581 = &l_501;
            int *l_582 = &l_565;
            int *l_583 = &l_528;
            (*l_439) = p_9;
            (*l_439) = l_463;
            --l_584;
        }
        g_587 = (*l_452);
    }


    g_589 = g_71;
    return (*l_459);
}







static char func_16(int * p_17, int p_18, int * p_19, int * p_20)
{
    struct S0 *l_431 = &g_154;
    int l_437 = 0x67D206CCL;
    (*l_431) = g_81;
    for (p_18 = 0; (p_18 < 28); p_18 = safe_add_func_uint8_t_u_u(p_18, 6))
    {
        unsigned char l_434 = 8UL;
        l_434++;
    }
    return l_437;
}







static int func_21(unsigned p_22, int * p_23, int * p_24, int p_25, int * p_26)
{
    int *l_407 = &g_81.f4;
    int *l_408 = &g_152.f0;
    int l_409 = (-1L);
    int *l_410 = &g_154.f0;
    int *l_411 = (void*)0;
    int *l_412 = (void*)0;
    int l_413 = (-1L);
    int l_414 = 0x145919A8L;
    int l_415 = 0x1BE1EE0AL;
    int *l_416 = &g_65.f4;
    int *l_417 = &g_65.f0;
    int *l_418 = &g_185.f4;
    int l_419 = 1L;
    int *l_420 = &l_419;
    int *l_421 = &g_81.f0;
    int *l_422 = &g_152.f0;
    int *l_423 = &g_152.f4;
    int l_424 = (-7L);
    int *l_425 = (void*)0;
    int *l_426 = &g_65.f4;
    unsigned short l_427 = 65535UL;
    int ***l_430 = &g_79;
    (*l_407) &= (*p_26);
    l_427++;
    (*l_430) = &g_80;
    return p_22;
}







static int * func_28(int * p_29, int * p_30)
{
    int *l_37 = &g_6;
    int *l_38 = (void*)0;
    int *l_48 = (void*)0;
    struct S0 *l_366 = &g_185;
    int *l_367 = &g_152.f0;
    int l_368 = 1L;
    int *l_369 = &g_185.f4;
    int *l_370 = &g_154.f4;
    int *l_371 = (void*)0;
    int l_372 = 1L;
    int *l_373 = &g_65.f4;
    int *l_374 = &g_185.f0;
    int *l_375 = &l_368;
    int *l_376 = &g_185.f0;
    int *l_377 = &g_152.f4;
    int *l_378 = &l_368;
    int *l_379 = &g_81.f4;
    int *l_380 = &l_372;
    int *l_381 = &g_65.f4;
    int *l_382 = (void*)0;
    int *l_383 = (void*)0;
    int *l_384 = &g_65.f4;
    int *l_385 = &g_154.f0;
    int *l_386 = &g_185.f0;
    int *l_387 = &g_81.f4;
    int *l_388 = &g_152.f0;
    int *l_389 = &g_65.f4;
    int l_390 = (-2L);
    int *l_391 = &l_368;
    int *l_392 = &g_65.f4;
    int *l_393 = &g_155.f4;
    int *l_394 = (void*)0;
    int *l_395 = &g_155.f4;
    int *l_396 = &g_185.f4;
    int l_397 = 4L;
    int *l_398 = &g_185.f4;
    int l_399 = (-4L);
    int *l_400 = &g_185.f4;
    unsigned char l_401 = 2UL;
    (*l_366) = func_31(l_37, (*p_29), l_38, func_39(g_6, func_45(l_48, (*l_37)), g_185.f3, l_38, p_30), g_185.f7);


    --l_401;
    (*l_376) = ((safe_sub_func_int16_t_s_s(g_81.f2, 0xCB61L)) == (0UL & g_81.f0));
    (*g_79) = &l_372;

    ;
    return p_29;



}







static struct S0 func_31(int * p_32, int p_33, int * p_34, int * p_35, unsigned short p_36)
{
    char l_352 = 0x19L;
    int *l_353 = &g_185.f4;
    unsigned short l_354 = 0xABC4L;
    struct S0 *l_361 = &g_81;
    unsigned l_365 = 4294967291UL;
    --l_354;
    for (g_154.f0 = 0; (g_154.f0 < 3); g_154.f0 = safe_add_func_uint16_t_u_u(g_154.f0, 6))
    {
        struct S0 *l_362 = &g_152;
        g_71.f0 = (safe_sub_func_uint32_t_u_u((0xFCL | (*l_353)), (*l_353)));
        (*l_353) = ((l_361 == l_362) & (safe_add_func_int32_t_s_s(0xF5735543L, ((p_33 >= l_365) >= p_33))));
    }
    return g_81;
}







static int * func_39(short p_40, int * p_41, int p_42, int * p_43, int * p_44)
{
    int *l_187 = (void*)0;
    int l_188 = 9L;
    int *l_189 = &g_65.f4;
    int *l_190 = &g_154.f0;
    int *l_191 = (void*)0;
    int *l_192 = &g_185.f4;
    int l_193 = 1L;
    int *l_194 = &g_185.f0;
    int *l_195 = (void*)0;
    int *l_196 = (void*)0;
    int *l_197 = &l_188;
    int *l_198 = &g_154.f0;
    int *l_199 = &g_152.f0;
    int *l_200 = &g_152.f0;
    int l_201 = 0x544D90D5L;
    int *l_202 = &g_152.f4;
    int *l_203 = &g_154.f0;
    int l_204 = 0x563165A2L;
    int *l_205 = &g_152.f4;
    int *l_206 = &g_155.f0;
    int *l_207 = &g_185.f0;
    int *l_208 = &g_154.f0;
    int *l_209 = (void*)0;
    int *l_210 = &g_155.f4;
    int *l_211 = &l_204;
    int *l_212 = &g_154.f4;
    int *l_213 = &g_185.f4;
    int *l_214 = &g_81.f4;
    int l_215 = 1L;
    int *l_216 = &g_81.f4;
    int *l_217 = &l_193;
    int l_218 = 1L;
    int *l_219 = (void*)0;
    int *l_220 = (void*)0;
    int l_221 = 0L;
    int *l_222 = &g_152.f4;
    int *l_223 = (void*)0;
    int *l_224 = &l_193;
    int *l_225 = &l_218;
    int *l_226 = &g_154.f0;
    int l_227 = 1L;
    int *l_228 = &g_185.f0;
    int *l_229 = &l_193;
    int *l_230 = (void*)0;
    int *l_231 = &g_185.f4;
    int *l_232 = &g_154.f0;
    int l_233 = 0x44ED3489L;
    int *l_234 = &g_155.f4;
    int *l_235 = (void*)0;
    int *l_236 = (void*)0;
    int *l_237 = (void*)0;
    int *l_238 = &g_81.f4;
    int *l_239 = (void*)0;
    int *l_240 = &l_204;
    int *l_241 = &l_201;
    int *l_242 = (void*)0;
    int *l_243 = &g_155.f4;
    int *l_244 = (void*)0;
    int *l_245 = &g_152.f0;
    int *l_246 = &g_154.f0;
    int *l_247 = &g_185.f0;
    int *l_248 = &l_233;
    int *l_249 = &g_152.f4;
    int *l_250 = &g_154.f4;
    int *l_251 = &g_65.f4;
    int *l_252 = &l_221;
    int *l_253 = &g_185.f4;
    int *l_254 = &g_81.f4;
    int *l_255 = (void*)0;
    int l_256 = 0x2AF547D1L;
    int *l_257 = &g_185.f4;
    int l_258 = 0x86C0DB86L;
    int *l_259 = &g_152.f4;
    int *l_260 = &l_218;
    int l_261 = 0x07638477L;
    int *l_262 = (void*)0;
    int *l_263 = (void*)0;
    int *l_264 = &g_65.f4;
    int *l_265 = &g_81.f0;
    int *l_266 = &g_65.f0;
    int *l_267 = &l_188;
    int *l_268 = &l_218;
    int *l_269 = &l_218;
    int *l_270 = &l_193;
    int *l_271 = &l_201;
    int *l_272 = &g_65.f4;
    int *l_273 = &l_218;
    int *l_274 = &g_81.f4;
    int *l_275 = &l_261;
    int *l_276 = &g_185.f0;
    int *l_277 = (void*)0;
    int *l_278 = &l_261;
    int *l_279 = (void*)0;
    int *l_280 = &g_155.f4;
    int *l_281 = &l_188;
    int *l_282 = &g_65.f4;
    int l_283 = 0x790059E3L;
    int *l_284 = (void*)0;
    int *l_285 = &l_204;
    int *l_286 = (void*)0;
    int *l_287 = &g_185.f4;
    int *l_288 = &l_218;
    int *l_289 = &g_185.f0;
    int *l_290 = (void*)0;
    int l_291 = 0L;
    int *l_292 = &l_188;
    int *l_293 = &l_256;
    int *l_294 = &g_185.f0;
    int *l_295 = &g_154.f0;
    int *l_296 = &l_283;
    int l_297 = (-1L);
    int *l_298 = &g_152.f0;
    int *l_299 = &g_185.f0;
    int *l_300 = (void*)0;
    int *l_301 = &l_201;
    int *l_302 = (void*)0;
    int *l_303 = &l_297;
    int *l_304 = &l_215;
    int *l_305 = &l_188;
    int *l_306 = &g_185.f0;
    int *l_307 = &l_233;
    int *l_308 = (void*)0;
    int *l_309 = &l_233;
    int l_310 = 8L;
    int l_311 = 0x9E602455L;
    int *l_312 = &g_81.f0;
    int l_313 = 0x228B1238L;
    int *l_314 = (void*)0;
    int l_315 = (-3L);
    int *l_316 = &g_81.f0;
    int *l_317 = (void*)0;
    int *l_318 = (void*)0;
    int *l_319 = &l_258;
    int *l_320 = &g_154.f4;
    int *l_321 = &l_291;
    int *l_322 = &l_204;
    int *l_323 = &g_152.f0;
    int *l_324 = (void*)0;
    int *l_325 = (void*)0;
    int l_327 = (-1L);
    int l_328 = 1L;
    int *l_329 = &l_215;
    int *l_330 = &l_201;
    int *l_331 = &g_65.f4;
    int *l_332 = &l_297;
    int l_333 = 0xB8A3AA65L;
    int l_334 = 0x9940DB3FL;
    int *l_335 = &l_215;
    int *l_336 = &l_221;
    int *l_337 = &l_334;
    int *l_338 = &g_155.f4;
    int *l_339 = &g_152.f4;
    int *l_340 = (void*)0;
    int l_341 = (-10L);
    int *l_342 = &g_154.f0;
    int *l_343 = &l_188;
    int l_345 = 0xEB26E683L;
    int *l_347 = &l_283;
    int *l_348 = (void*)0;
    g_349++;
    (*g_79) = &l_215;

    ;
    return p_41;



}







static int * func_45(int * p_46, char p_47)
{
    int *l_53 = (void*)0;
    struct S0 *l_186 = &g_152;
    (*l_186) = func_49((l_53 != (void*)0), p_47, l_53);


    (*l_186) = (*l_186);
    (*l_186) = (*l_186);
    return p_46;


}







static struct S0 func_49(unsigned p_50, short p_51, int * p_52)
{
    unsigned short l_54 = 65529UL;
    struct S0 *l_83 = &g_65;
    int l_93 = 0L;
    int l_125 = (-1L);
    int l_180 = 0x12B70BD8L;
    int l_181 = (-1L);
    if (l_54)
    {
        int l_73 = 1L;
        struct S0 *l_90 = &g_81;
        int *l_91 = &g_81.f0;
        unsigned short l_96 = 2UL;
        int l_130 = 0L;
        for (p_50 = 3; (p_50 > 58); p_50 = safe_add_func_int16_t_s_s(p_50, 6))
        {
            int *l_69 = &g_6;
            int *l_74 = (void*)0;
            int *l_75 = &g_65.f0;
            int **l_76 = &l_74;
            if (((0xFDL != (1UL != p_50)) < p_50))
            {
                int *l_62 = &g_6;
                int l_63 = 0x40AE7762L;
                struct S0 *l_67 = (void*)0;
                struct S0 **l_66 = &l_67;
                (*l_66) = func_57(p_50, l_62, &g_6, (l_63 || p_51));

                ;
            }
            else
            {
                if (g_65.f3)
                {
                    int *l_68 = &g_65.f0;
                    (*l_68) |= g_65.f4;
                }
                else
                {
                    int **l_70 = &l_69;
                    volatile struct S0 *l_72 = &g_71;
                    (*l_70) = l_69;
                    (*l_72) = g_71;
                }
                return g_71;
            }
            (*l_75) |= l_73;
            (*l_76) = p_52;
            if (g_65.f6)
                break;
        }
        if ((g_71.f5 && (g_79 == (void*)0)))
        {
            return g_81;
        }
        else
        {
            struct S0 *l_82 = &g_81;
            int l_92 = 0x5BF03BE9L;
            int l_142 = 0xA9C7313BL;
            (*g_80) |= (l_82 == l_83);
            if (p_51)
            {
                (*g_80) = (**g_79);
                for (p_51 = 0; (p_51 == (-12)); --p_51)
                {
                    (*g_79) = (*g_79);
                }
                (*l_91) ^= (safe_add_func_int32_t_s_s((safe_sub_func_int8_t_s_s(l_54, ((((void*)0 != l_90) >= 0x4D3AL) >= (-4L)))), (((l_54 || ((void*)0 == l_91)) > (p_50 < 65530UL)) || p_51)));
                l_92 &= (**g_79);
            }
            else
            {
                int *l_97 = &g_65.f0;
                int l_110 = 0xBB4CDDCCL;
                (*g_80) = (*g_80);
                l_93 = ((*g_80) & p_50);
                (*g_80) = 0x097499C9L;
                if ((safe_rshift_func_uint8_t_u_s(g_81.f1, 7)))
                {
                    short l_100 = 0x25FAL;
                    if (l_96)
                    {
                        (*g_79) = l_97;

                        ;
                        return (*l_90);
                    }
                    else
                    {
                        int l_98 = 0xB1179EF6L;
                        int *l_99 = &g_65.f0;
                        int *l_101 = &g_65.f0;
                        int *l_102 = &g_65.f0;
                        int *l_103 = &g_65.f0;
                        int *l_104 = &l_93;
                        int *l_105 = &g_65.f4;
                        int *l_106 = &l_92;
                        int *l_107 = &g_65.f4;
                        int *l_108 = &l_93;
                        int *l_109 = &g_65.f4;
                        int *l_111 = &l_92;
                        int *l_112 = &l_92;
                        int *l_113 = &l_110;
                        int *l_114 = (void*)0;
                        int *l_115 = &l_93;
                        int *l_116 = &g_65.f0;
                        int *l_117 = &l_92;
                        int *l_118 = &l_110;
                        int *l_119 = &l_93;
                        int *l_120 = (void*)0;
                        int *l_121 = (void*)0;
                        int *l_122 = &l_110;
                        int *l_123 = (void*)0;
                        int *l_124 = &g_65.f4;
                        int *l_126 = &g_65.f0;
                        int *l_127 = &g_65.f0;
                        int *l_128 = &l_125;
                        int *l_129 = &l_110;
                        int *l_131 = &l_130;
                        int *l_132 = &l_92;
                        int *l_133 = &l_110;
                        int *l_134 = &g_81.f0;
                        int *l_135 = (void*)0;
                        int *l_136 = &g_81.f4;
                        int *l_137 = (void*)0;
                        int *l_138 = &g_65.f4;
                        int *l_139 = &l_130;
                        int *l_141 = &g_65.f0;
                        int l_144 = (-7L);
                        int *l_145 = &l_144;
                        int *l_146 = &l_125;
                        int *l_147 = &l_93;
                        (*l_83) = (*l_83);
                        g_149--;
                        return g_152;
                    }
                }
                else
                {
                    int **l_153 = &g_80;
                    (*g_79) = &l_92;

                    ;
                    (*g_79) = &l_110;

                    ;
                    if ((l_153 == (void*)0))
                    {
                        (*l_90) = g_154;
                        (*g_79) = &l_92;

                        ;
                        (*l_91) = 0x11143083L;
                    }
                    else
                    {
                        return g_155;


                    }

                    ;
                }

                ;
            }

            ;
            return (*l_82);


        }
    }
    else
    {
        int *l_156 = &g_81.f4;
        int *l_157 = &g_154.f0;
        int *l_158 = &g_65.f4;
        int *l_159 = &g_155.f0;
        int *l_160 = &g_65.f0;
        int *l_161 = &g_81.f0;
        int *l_162 = &g_152.f4;
        int *l_163 = (void*)0;
        int *l_164 = (void*)0;
        int *l_165 = &g_155.f0;
        int *l_166 = &l_93;
        int *l_167 = &g_81.f0;
        int *l_168 = &g_154.f4;
        int *l_169 = &l_93;
        int *l_170 = &g_155.f0;
        int *l_171 = &g_155.f0;
        int l_172 = (-2L);
        int *l_173 = &g_154.f0;
        int *l_174 = &g_152.f4;
        int *l_175 = &g_154.f4;
        int l_176 = (-3L);
        int *l_177 = &g_155.f0;
        int *l_178 = &g_155.f0;
        int *l_179 = &g_81.f0;
        unsigned char l_182 = 1UL;
        ++l_182;
        return g_185;
    }
}







static struct S0 * func_57(short p_58, int * p_59, int * p_60, char p_61)
{
    struct S0 *l_64 = &g_65;
    return l_64;


}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_6, "g_6", print_hash_value);
    transparent_crc(g_65.f0, "g_65.f0", print_hash_value);
    transparent_crc(g_65.f1, "g_65.f1", print_hash_value);
    transparent_crc(g_65.f2, "g_65.f2", print_hash_value);
    transparent_crc(g_65.f3, "g_65.f3", print_hash_value);
    transparent_crc(g_65.f4, "g_65.f4", print_hash_value);
    transparent_crc(g_65.f5, "g_65.f5", print_hash_value);
    transparent_crc(g_65.f6, "g_65.f6", print_hash_value);
    transparent_crc(g_65.f7, "g_65.f7", print_hash_value);
    transparent_crc(g_71.f0, "g_71.f0", print_hash_value);
    transparent_crc(g_71.f1, "g_71.f1", print_hash_value);
    transparent_crc(g_71.f2, "g_71.f2", print_hash_value);
    transparent_crc(g_71.f3, "g_71.f3", print_hash_value);
    transparent_crc(g_71.f4, "g_71.f4", print_hash_value);
    transparent_crc(g_71.f5, "g_71.f5", print_hash_value);
    transparent_crc(g_71.f6, "g_71.f6", print_hash_value);
    transparent_crc(g_71.f7, "g_71.f7", print_hash_value);
    transparent_crc(g_81.f0, "g_81.f0", print_hash_value);
    transparent_crc(g_81.f1, "g_81.f1", print_hash_value);
    transparent_crc(g_81.f2, "g_81.f2", print_hash_value);
    transparent_crc(g_81.f3, "g_81.f3", print_hash_value);
    transparent_crc(g_81.f4, "g_81.f4", print_hash_value);
    transparent_crc(g_81.f5, "g_81.f5", print_hash_value);
    transparent_crc(g_81.f6, "g_81.f6", print_hash_value);
    transparent_crc(g_81.f7, "g_81.f7", print_hash_value);
    transparent_crc(g_140, "g_140", print_hash_value);
    transparent_crc(g_143, "g_143", print_hash_value);
    transparent_crc(g_148, "g_148", print_hash_value);
    transparent_crc(g_149, "g_149", print_hash_value);
    transparent_crc(g_152.f0, "g_152.f0", print_hash_value);
    transparent_crc(g_152.f1, "g_152.f1", print_hash_value);
    transparent_crc(g_152.f2, "g_152.f2", print_hash_value);
    transparent_crc(g_152.f3, "g_152.f3", print_hash_value);
    transparent_crc(g_152.f4, "g_152.f4", print_hash_value);
    transparent_crc(g_152.f5, "g_152.f5", print_hash_value);
    transparent_crc(g_152.f6, "g_152.f6", print_hash_value);
    transparent_crc(g_152.f7, "g_152.f7", print_hash_value);
    transparent_crc(g_154.f0, "g_154.f0", print_hash_value);
    transparent_crc(g_154.f1, "g_154.f1", print_hash_value);
    transparent_crc(g_154.f2, "g_154.f2", print_hash_value);
    transparent_crc(g_154.f3, "g_154.f3", print_hash_value);
    transparent_crc(g_154.f4, "g_154.f4", print_hash_value);
    transparent_crc(g_154.f5, "g_154.f5", print_hash_value);
    transparent_crc(g_154.f6, "g_154.f6", print_hash_value);
    transparent_crc(g_154.f7, "g_154.f7", print_hash_value);
    transparent_crc(g_155.f0, "g_155.f0", print_hash_value);
    transparent_crc(g_155.f1, "g_155.f1", print_hash_value);
    transparent_crc(g_155.f2, "g_155.f2", print_hash_value);
    transparent_crc(g_155.f3, "g_155.f3", print_hash_value);
    transparent_crc(g_155.f4, "g_155.f4", print_hash_value);
    transparent_crc(g_155.f5, "g_155.f5", print_hash_value);
    transparent_crc(g_155.f6, "g_155.f6", print_hash_value);
    transparent_crc(g_155.f7, "g_155.f7", print_hash_value);
    transparent_crc(g_185.f0, "g_185.f0", print_hash_value);
    transparent_crc(g_185.f1, "g_185.f1", print_hash_value);
    transparent_crc(g_185.f2, "g_185.f2", print_hash_value);
    transparent_crc(g_185.f3, "g_185.f3", print_hash_value);
    transparent_crc(g_185.f4, "g_185.f4", print_hash_value);
    transparent_crc(g_185.f5, "g_185.f5", print_hash_value);
    transparent_crc(g_185.f6, "g_185.f6", print_hash_value);
    transparent_crc(g_185.f7, "g_185.f7", print_hash_value);
    transparent_crc(g_326, "g_326", print_hash_value);
    transparent_crc(g_344, "g_344", print_hash_value);
    transparent_crc(g_346, "g_346", print_hash_value);
    transparent_crc(g_349, "g_349", print_hash_value);
    transparent_crc(g_587.f0, "g_587.f0", print_hash_value);
    transparent_crc(g_587.f1, "g_587.f1", print_hash_value);
    transparent_crc(g_587.f2, "g_587.f2", print_hash_value);
    transparent_crc(g_587.f3, "g_587.f3", print_hash_value);
    transparent_crc(g_587.f4, "g_587.f4", print_hash_value);
    transparent_crc(g_587.f5, "g_587.f5", print_hash_value);
    transparent_crc(g_587.f6, "g_587.f6", print_hash_value);
    transparent_crc(g_587.f7, "g_587.f7", print_hash_value);
    transparent_crc(g_589.f0, "g_589.f0", print_hash_value);
    transparent_crc(g_589.f1, "g_589.f1", print_hash_value);
    transparent_crc(g_589.f2, "g_589.f2", print_hash_value);
    transparent_crc(g_589.f3, "g_589.f3", print_hash_value);
    transparent_crc(g_589.f4, "g_589.f4", print_hash_value);
    transparent_crc(g_589.f5, "g_589.f5", print_hash_value);
    transparent_crc(g_589.f6, "g_589.f6", print_hash_value);
    transparent_crc(g_589.f7, "g_589.f7", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
