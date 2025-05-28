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
   char * f0;
};

union U1 {
   char * f0;
};


static const char g_5 = 8L;
static const char *g_4 = &g_5;
static char g_11 = 6L;
static int g_14 = (-1L);
static union U1 g_77 = {0};
static unsigned g_85 = 0UL;
static int g_87 = 0xE2B1956AL;
static unsigned short g_118 = 0x91F6L;
static unsigned g_152 = 4294967288UL;
static int g_157 = 0x441A9D29L;
static int g_162 = 2L;
static int g_169 = 0x3AA3D5FEL;
static unsigned g_186 = 0x3B58279FL;
static unsigned short g_191 = 0xD863L;
static int *g_208 = &g_87;
static int **g_207 = &g_208;
static unsigned short g_235 = 0xC77BL;
static union U0 g_243 = {0};
static union U0 *g_265 = &g_243;
static union U0 **g_264 = &g_265;
static union U1 *g_288 = &g_77;
static union U1 **g_287 = &g_288;
static int g_306 = 1L;
static char g_320 = 0x46L;
static char *g_319 = &g_320;
static unsigned char g_464 = 1UL;
static const unsigned g_500 = 0x59A78E73L;
static char g_513 = 0x2BL;
static union U0 **g_520 = &g_265;



static unsigned short func_1(void);
static union U1 func_6(char * p_7, int p_8, char * p_9);
static char * func_20(char p_21);
static int func_22(unsigned char p_23, unsigned short p_24, short p_25, unsigned char p_26, short p_27);
static unsigned char func_31(short p_32, const short p_33, union U1 p_34, char * p_35);
static char func_36(int * p_37, unsigned p_38, char * p_39, union U0 p_40);
static int * func_41(union U0 p_42, union U0 p_43, union U0 p_44);
static union U0 func_45(unsigned p_46, char * p_47, int p_48);
static unsigned char func_54(char p_55);
static union U1 func_62(unsigned p_63, unsigned p_64, union U1 p_65, char * const p_66, unsigned short p_67);
static unsigned short func_1(void)
{
    char *l_10 = &g_11;
    int *l_598 = &g_306;
    int *l_599 = (void*)0;
    int *l_600 = &g_14;
    int *l_601 = (void*)0;
    int *l_602 = &g_306;
    int *l_603 = &g_157;
    int *l_604 = &g_87;
    int *l_605 = &g_14;
    int *l_606 = (void*)0;
    int *l_607 = &g_157;
    int *l_608 = &g_306;
    int *l_609 = &g_306;
    int *l_610 = &g_306;
    int *l_611 = &g_306;
    int *l_612 = &g_87;
    int *l_613 = (void*)0;
    int *l_614 = &g_157;
    int *l_615 = &g_157;
    int *l_616 = &g_157;
    int *l_617 = &g_162;
    int *l_618 = &g_162;
    int *l_619 = &g_87;
    int *l_620 = &g_157;
    int *l_621 = &g_87;
    int l_622 = (-5L);
    int *l_623 = (void*)0;
    int *l_624 = (void*)0;
    int *l_625 = &l_622;
    int *l_626 = &g_87;
    int *l_627 = (void*)0;
    int *l_628 = &g_306;
    int *l_629 = &l_622;
    int *l_630 = (void*)0;
    int *l_631 = &g_14;
    int *l_632 = &g_14;
    unsigned l_633 = 0x5815A79CL;
    (*l_598) = (safe_sub_func_uint16_t_u_u(((g_4 == &g_5) >= ((((*g_4) , func_6(l_10, g_5, l_10)) , (void*)0) != &g_5)), 0x4330L));

    ;

    ;
    l_633--;
    for (g_14 = (-1); (g_14 <= (-22)); g_14 = safe_sub_func_uint16_t_u_u(g_14, 6))
    {
        int l_638 = 0x5CC3521BL;
        l_638 = 0xFCFB1A5FL;
        (*l_629) = (safe_unary_minus_func_uint8_t_u((0xFFEFL != g_162)));
    }
    return (*l_598);
}







static union U1 func_6(char * p_7, int p_8, char * p_9)
{
    char *l_12 = &g_11;
    int *l_13 = &g_14;
    union U0 l_19 = {0};
    unsigned char l_521 = 0x06L;
    unsigned short l_522 = 0UL;
    union U0 **l_523 = &g_265;
    int l_527 = 0xE358FFBCL;
    int l_531 = 3L;
    int l_550 = 1L;
    int l_562 = (-5L);
    unsigned char l_592 = 8UL;
    union U1 l_597 = {0};
    (*l_13) ^= (l_12 != (void*)0);
    p_8 = (safe_sub_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u(0x393EL, (((l_19 , func_20((*l_13))) == p_7) | (~p_8)))), ((!(l_521 || l_522)) < p_8)));

    ;
    ;

    ;
    if ((l_523 == (l_19 , l_523)))
    {
        int *l_524 = &g_14;
        int *l_525 = &g_87;
        int *l_526 = &g_87;
        int *l_528 = &g_157;
        int *l_529 = &g_157;
        int *l_530 = &g_157;
        int *l_532 = &g_306;
        int *l_533 = &l_531;
        int *l_534 = &l_531;
        int *l_535 = &l_527;
        int *l_536 = &g_306;
        int *l_537 = &l_527;
        int *l_538 = &l_527;
        int *l_539 = &g_162;
        int *l_540 = &g_157;
        int *l_541 = &l_531;
        int *l_542 = (void*)0;
        int *l_543 = (void*)0;
        int *l_544 = &g_87;
        int *l_545 = &l_531;
        int *l_546 = (void*)0;
        int *l_547 = &g_87;
        int *l_548 = &g_87;
        int *l_549 = &l_527;
        int *l_551 = (void*)0;
        int *l_552 = &g_14;
        int *l_553 = &g_162;
        int *l_554 = (void*)0;
        int *l_555 = &l_527;
        int *l_556 = &g_306;
        int *l_557 = &g_162;
        int *l_558 = &g_306;
        int *l_559 = &g_157;
        int *l_560 = &g_87;
        int *l_561 = (void*)0;
        int *l_563 = &g_162;
        int *l_564 = &l_531;
        int *l_565 = &l_531;
        int *l_566 = &g_162;
        int *l_567 = &l_531;
        int l_568 = (-7L);
        int *l_569 = (void*)0;
        int *l_570 = &l_562;
        int *l_571 = &l_527;
        int *l_572 = &l_531;
        int *l_573 = &l_562;
        int *l_574 = &g_157;
        int l_575 = 0L;
        int *l_576 = &g_306;
        int *l_577 = &g_87;
        int l_578 = (-4L);
        int *l_579 = &l_562;
        int *l_580 = &g_306;
        int *l_581 = &l_550;
        int *l_582 = (void*)0;
        int *l_583 = &l_550;
        int *l_584 = &l_531;
        int *l_585 = &g_306;
        int *l_586 = (void*)0;
        int *l_587 = (void*)0;
        int *l_588 = &l_568;
        int *l_589 = (void*)0;
        int *l_590 = &l_531;
        int *l_591 = &l_578;
        l_592++;
    }
    else
    {
        for (g_85 = 0; (g_85 < 9); ++g_85)
        {
            return l_597;


                    }
    }


    return l_597;


    }







static char * func_20(char p_21)
{
    unsigned char l_291 = 1UL;
    union U0 l_298 = {0};
    short l_394 = 5L;
    const int l_398 = 0L;
    union U1 l_408 = {0};
    char *l_409 = &g_320;
    const int *l_415 = (void*)0;
    const int **l_414 = &l_415;
    int **l_420 = &g_208;
    unsigned short l_440 = 0x1757L;
    const char l_446 = 1L;
    int l_453 = (-6L);
    char *l_501 = &g_320;
    if (func_22((0x84C6L | ((g_5 <= (safe_unary_minus_func_uint8_t_u(((safe_rshift_func_uint8_t_u_s((((((func_31((func_36(func_41(func_45((safe_rshift_func_uint16_t_u_s(((safe_unary_minus_func_int32_t_s((~(safe_sub_func_uint8_t_u_u(func_54(p_21), (p_21 && (0x74C3L <= g_5))))))) | l_291), 1)), &p_21, p_21), l_298, l_298), l_291, g_319, (*g_265)) > g_320), p_21, (**g_287), &g_320) && p_21) < p_21) | l_291) > (-1L)) <= l_291), l_291)) < 1L)))) | p_21)), l_291, l_394, l_394, l_394))
    {
        short l_404 = 0xEA3FL;
        union U1 l_407 = {0};
        int *l_411 = &g_306;
        for (g_152 = 0; (g_152 < 7); g_152++)
        {
            unsigned l_403 = 4294967295UL;
            int *l_410 = &g_87;
            (*l_410) = (((*g_265) , l_398) || ((safe_lshift_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s(((l_398 >= 0x5344E310L) < l_403), func_22(func_31(((l_298 , (l_404 <= l_291)) != (((safe_rshift_func_int8_t_s_s(func_31(func_31(g_235, g_118, l_407, &g_320), g_152, l_408, l_409), 0)) < 0x38A4L) , 0x522EE653L)), l_404, l_407, &g_320), g_5, g_157, l_291, p_21))), 1)) || (-1L)));
        }



        (*l_411) &= (l_291 != g_87);
        (*g_207) = (void*)0;

        ;
    }
    else
    {
        unsigned char l_421 = 0x85L;
        const int *l_424 = &g_87;
        union U1 l_432 = {0};
        union U0 l_436 = {0};
        union U0 *l_452 = &l_436;
        char *l_454 = &g_11;
        int l_466 = 0L;
        const int ***l_490 = &l_414;
        char *l_499 = (void*)0;
        unsigned char l_517 = 0x1FL;
        if (((((safe_add_func_int16_t_s_s((&g_208 != l_414), g_162)) <= (((safe_add_func_int8_t_s_s((safe_mod_func_int32_t_s_s(p_21, func_31(g_157, p_21, l_408, (((((((g_191 , l_420) != &g_208) & l_421) == 0UL) , p_21) <= p_21) , &g_11)))), p_21)) != p_21) == p_21)) != g_5) | l_421))
        {
            unsigned l_422 = 0x04E641A2L;
            int *l_425 = &g_157;
            char *l_449 = &g_320;
            if (l_422)
            {
                const int *l_423 = &g_162;
                l_424 = l_423;

                ;
            }
            else
            {
                char l_435 = 0x94L;
                int *l_437 = &g_306;
                union U0 **l_441 = &g_265;
                (*l_420) = l_425;

                ;
                l_437 = ((((((safe_lshift_func_uint8_t_u_s(((safe_rshift_func_int16_t_s_u(func_22((((((((void*)0 != (*l_414)) && (safe_sub_func_uint8_t_u_u(((*l_424) != p_21), (l_432 , ((p_21 == 0x0106L) == (safe_rshift_func_uint16_t_u_u((0xF051L && (~(func_31(p_21, g_157, (**g_287), &g_11) >= p_21))), (*l_425)))))))) || g_5) < g_191) >= l_435) , p_21), p_21, p_21, l_435, p_21), (*l_424))) != 0UL), 3)) && p_21) || g_157) ^ 0x7CE28116L) , l_436) , (void*)0);


                ;
                ;
                (*g_208) = (safe_mod_func_int32_t_s_s(l_440, (~((&g_265 != l_441) == ((!p_21) > ((void*)0 != &p_21))))));
                (**g_207) = p_21;
            }

            ;
            ;

            ;
            if (func_31((*l_424), ((((safe_rshift_func_int8_t_s_u((p_21 && (p_21 , (0xD1C99333L < (safe_sub_func_int16_t_s_s(func_22(g_235, ((*l_425) & ((~(*l_425)) < (((*l_424) & 1UL) ^ p_21))), p_21, p_21, (*l_425)), (*l_425)))))), 5)) & (*l_424)) | 0x7DADCA18L) > p_21), l_432, &g_11))
            {
                l_425 = (void*)0;

                ;
                (*l_414) = l_425;
            }
            else
            {
                (*l_425) ^= l_446;
                for (g_11 = 0; (g_11 < 13); g_11++)
                {
                    return l_449;


                }
            }

            ;
            for (g_320 = (-26); (g_320 > 27); g_320 = safe_add_func_int32_t_s_s(g_320, 1))
            {
                unsigned char l_461 = 0x20L;
                (*g_264) = l_452;

                ;
                g_464 ^= (func_36((*g_207), l_453, l_454, l_298) | (func_22((safe_add_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u(g_169, (safe_lshift_func_uint16_t_u_s(p_21, 14)))), l_461)), (safe_add_func_uint16_t_u_u(p_21, 0x5C94L)), l_461, g_169, g_320) || 0xFCL));
            }

            ;
        }
        else
        {
            short l_465 = 8L;
            char *l_473 = (void*)0;
            union U1 l_485 = {0};
            l_466 &= l_465;
            for (g_235 = 0; (g_235 > 11); g_235++)
            {
                int l_476 = 1L;
                union U1 l_481 = {0};
                int *l_482 = (void*)0;
                char *l_486 = &g_11;
                short l_489 = 0xEEE1L;
                int *l_491 = &l_466;
                for (g_85 = 0; (g_85 < 51); g_85 = safe_add_func_int8_t_s_s(g_85, 4))
                {
                    for (g_464 = 0; (g_464 != 49); g_464++)
                    {
                        return l_473;


                    }
                }
                g_306 ^= (0x20L > ((((g_191 && ((safe_rshift_func_uint8_t_u_s(p_21, l_476)) , g_5)) == g_118) | (safe_add_func_int8_t_s_s(l_476, ((safe_rshift_func_int8_t_s_s((*g_4), func_31(l_465, g_157, l_481, &g_320))) ^ (*l_424))))) , 0L));

                ;
                if (p_21)
                    continue;
                (*l_491) ^= func_22(l_465, (((safe_rshift_func_uint8_t_u_u(((((*l_424) <= ((func_31(p_21, p_21, l_485, l_486) == (safe_mod_func_uint16_t_u_u((l_489 < (&l_414 != l_490)), (*l_424)))) < g_85)) , g_320) || 0xBE03L), p_21)) , (*g_287)) == (*g_287)), g_118, g_5, l_465);

                ;
            }

            ;
        }

        ;
        ;
        ;

        ;
        for (g_157 = 0; (g_157 == 7); g_157 = safe_add_func_int16_t_s_s(g_157, 1))
        {
            g_162 = p_21;
        }
        if ((func_31(((((g_87 != ((safe_lshift_func_uint16_t_u_u(0x060CL, ((((safe_unary_minus_func_uint8_t_u((safe_add_func_uint16_t_u_u((p_21 , g_464), ((func_31(g_5, g_152, (l_408 , ((g_5 | p_21) , l_408)), l_499) ^ g_118) || p_21))))) || 65530UL) , p_21) >= 3UL))) & 0x9140009AL)) <= 0xF3L) != (*g_319)) , p_21), g_500, l_408, l_501) > 0L))
        {
            const unsigned l_510 = 4294967289UL;
            g_157 |= (safe_mod_func_int8_t_s_s(((safe_lshift_func_uint16_t_u_s(p_21, 5)) > (safe_rshift_func_uint8_t_u_u((((*g_319) & p_21) > (((((0x17C04BF7L & (safe_add_func_int32_t_s_s((*l_424), l_510))) != ((~func_22((((safe_sub_func_uint32_t_u_u(g_14, p_21)) & p_21) > l_510), p_21, g_118, l_510, p_21)) >= g_162)) >= (*l_424)) , g_306) || p_21)), g_513))), g_191));
            (**l_490) = (*g_207);

            ;
        }
        else
        {
            unsigned l_516 = 0xEABCBB65L;
            int l_518 = 0x32043E40L;
            char *l_519 = &g_513;
            l_518 ^= func_22(((**g_264) , ((safe_mod_func_int32_t_s_s(p_21, l_516)) || l_516)), p_21, g_162, func_22(p_21, func_22(g_87, g_14, g_513, l_517, p_21), g_306, p_21, p_21), g_87);
            (**l_490) = func_41((**g_264), (*g_265), func_45(p_21, l_519, g_464));

            ;
        }

        ;
    }

    ;

    ;

    ;
    (*l_420) = (*l_420);
    (*g_207) = (*l_420);
    g_520 = (void*)0;

    ;
    return &g_11;


}







static int func_22(unsigned char p_23, unsigned short p_24, short p_25, unsigned char p_26, short p_27)
{
    char l_395 = 0xA5L;
    return l_395;
}







static unsigned char func_31(short p_32, const short p_33, union U1 p_34, char * p_35)
{
    return p_32;
}







static char func_36(int * p_37, unsigned p_38, char * p_39, union U0 p_40)
{
    int *l_321 = &g_162;
    int *l_322 = &g_87;
    int l_323 = 0xE07166BAL;
    int *l_324 = &l_323;
    int l_325 = (-1L);
    int *l_326 = (void*)0;
    int *l_327 = &g_157;
    int *l_328 = &g_87;
    int *l_329 = &g_157;
    int *l_330 = (void*)0;
    int *l_331 = &l_323;
    int *l_332 = &g_306;
    int l_333 = 7L;
    int *l_334 = &g_157;
    int *l_335 = (void*)0;
    int *l_336 = &l_325;
    int *l_337 = &g_14;
    int *l_338 = &g_306;
    int *l_339 = &l_323;
    int *l_340 = &g_306;
    int *l_341 = &l_323;
    int *l_342 = (void*)0;
    int *l_343 = &l_325;
    int *l_344 = &l_323;
    int *l_345 = &l_325;
    int *l_346 = &l_323;
    int *l_347 = &g_14;
    int *l_348 = &l_333;
    int *l_349 = (void*)0;
    int *l_350 = &g_162;
    int *l_351 = &l_333;
    int *l_352 = &l_325;
    int l_353 = 0x0856D30AL;
    int *l_354 = &g_14;
    int *l_355 = &g_87;
    int *l_356 = (void*)0;
    int *l_357 = (void*)0;
    int l_358 = 0x9045E980L;
    int *l_359 = (void*)0;
    int *l_360 = &g_157;
    int *l_361 = (void*)0;
    int *l_362 = &l_333;
    int *l_363 = (void*)0;
    int *l_364 = &g_157;
    int *l_365 = &l_358;
    int *l_366 = &g_306;
    int *l_367 = &g_14;
    int *l_368 = &g_87;
    int *l_369 = &l_358;
    int *l_370 = &g_14;
    int l_371 = 0x84C6D96FL;
    int l_372 = 0xD52DF08DL;
    int *l_373 = &g_87;
    int *l_374 = &l_323;
    int *l_375 = &g_162;
    int *l_376 = &g_14;
    int *l_377 = &l_371;
    int *l_378 = &g_162;
    int *l_379 = &g_162;
    int l_380 = 1L;
    int *l_381 = &l_372;
    int *l_382 = (void*)0;
    int *l_383 = &l_325;
    int *l_384 = &l_353;
    int *l_385 = &g_162;
    int *l_386 = &l_380;
    unsigned short l_387 = 1UL;
    union U0 l_390 = {0};
    int **l_391 = (void*)0;
    int **l_392 = (void*)0;
    int **l_393 = &l_382;
    ++l_387;
    l_356 = &l_358;

    ;
    (*l_393) = func_41(p_40, p_40, l_390);

    ;
    ;
    return (*l_355);
}







static int * func_41(union U0 p_42, union U0 p_43, union U0 p_44)
{
    short l_299 = 0xCC7DL;
    int *l_304 = (void*)0;
    union U0 **l_312 = &g_265;
    int l_317 = (-9L);
    int *l_318 = &g_157;
    l_299 = (p_42 , 0x2E1121B7L);
    if (func_54(l_299))
    {
        union U1 l_300 = {0};
        int l_301 = 0x1989E602L;
        int *l_305 = &g_306;
        (*l_305) ^= (l_300 , ((((func_54(l_299) , (l_301 , l_301)) && (((safe_add_func_int32_t_s_s(0L, (1L ^ (func_54((*g_4)) | g_5)))) < (-6L)) || l_299)) , l_304) == (void*)0));

        ;
        for (l_299 = 7; (l_299 < 29); l_299 = safe_add_func_uint16_t_u_u(l_299, 4))
        {
            (*g_207) = l_304;

            ;
        }
        (*l_305) &= (g_162 & (!g_162));
    }
    else
    {
        int *l_309 = &g_87;
        (*g_207) = (*g_207);
        (*l_309) = ((*g_265) , l_299);
        (*l_309) = (*l_309);
    }
    l_317 ^= (((g_85 < 0xF473L) | (safe_add_func_uint32_t_u_u((l_312 != (((void*)0 != &g_265) , (((~(((void*)0 != l_312) >= l_299)) , (safe_add_func_uint16_t_u_u(((safe_sub_func_int32_t_s_s(((g_152 ^ l_299) < g_169), 0xEE45CAA3L)) == g_5), l_299))) , &g_265))), 4294967295UL))) >= g_14);
    l_318 = &l_317;

    ;
    return (*g_207);


}







static union U0 func_45(unsigned p_46, char * p_47, int p_48)
{
    unsigned l_295 = 0UL;
    int *l_296 = &g_14;
    union U0 l_297 = {0};
    for (p_46 = 0; (p_46 != 53); ++p_46)
    {
        union U0 l_294 = {0};
        return l_294;


            }
    (*l_296) = func_54(l_295);
    return l_297;


    }







static unsigned char func_54(char p_55)
{
    unsigned l_72 = 0UL;
    char * const l_78 = &g_11;
    int l_135 = (-10L);
    int l_137 = (-10L);
    union U0 *l_242 = &g_243;
    union U1 *l_286 = &g_77;
    union U1 **l_285 = &l_286;
    for (g_11 = 0; (g_11 > 14); ++g_11)
    {
        short l_75 = 1L;
        int *l_126 = (void*)0;
        int l_163 = 0x1D76F079L;
        int l_174 = 1L;
        int l_233 = 0xCC6E09C6L;
        int l_270 = 0xC8B4DF1DL;
        const union U1 *l_277 = &g_77;
        char l_284 = 0xCBL;
        for (g_14 = 0; (g_14 < 27); g_14 = safe_add_func_uint32_t_u_u(g_14, 6))
        {
            int *l_76 = &g_14;
            int l_158 = 0x4A777CC8L;
            unsigned l_194 = 4294967295UL;
            unsigned l_255 = 0UL;
            if (((safe_mod_func_uint32_t_u_u(((((func_62((((safe_lshift_func_int16_t_s_s(g_11, 3)) , g_5) > (((0x1140AE77L && ((safe_lshift_func_int8_t_s_s((l_72 != ((safe_lshift_func_uint8_t_u_u(0x34L, 3)) && p_55)), l_75)) , (-1L))) || (l_76 == (void*)0)) < p_55)), (*l_76), g_77, l_78, p_55) , l_72) <= p_55) , g_11) & (*l_76)), 0xEC70922BL)) | 0xE340L))
            {
                const int l_127 = 1L;
                int *l_131 = (void*)0;
                int *l_132 = &g_87;
                int *l_133 = &g_87;
                int *l_134 = (void*)0;
                int *l_136 = &g_87;
                int *l_138 = &l_137;
                int *l_139 = &g_87;
                int *l_140 = &g_87;
                int *l_141 = &l_135;
                int *l_142 = &l_135;
                int *l_143 = &g_87;
                int *l_144 = (void*)0;
                int *l_145 = (void*)0;
                int *l_146 = &g_87;
                short l_147 = (-7L);
                int *l_148 = (void*)0;
                int *l_149 = (void*)0;
                int *l_150 = (void*)0;
                int *l_151 = &g_87;
                int *l_155 = (void*)0;
                int *l_156 = &g_87;
                int *l_159 = (void*)0;
                int *l_160 = &l_137;
                int *l_161 = &l_158;
                int *l_164 = &g_87;
                int *l_165 = &l_135;
                int *l_166 = &g_162;
                int *l_167 = &g_87;
                int l_168 = 0L;
                int *l_170 = &l_158;
                int *l_171 = &g_87;
                int *l_172 = (void*)0;
                int *l_173 = &g_157;
                int *l_175 = &g_157;
                int *l_176 = &l_135;
                int *l_177 = &l_135;
                int *l_178 = &g_157;
                int *l_179 = &g_157;
                int *l_180 = &l_174;
                int *l_181 = &g_157;
                int *l_182 = &l_135;
                int *l_183 = &l_168;
                int *l_184 = &l_135;
                int *l_185 = &l_163;
                for (l_75 = 0; (l_75 < (-25)); --l_75)
                {
                    for (p_55 = 0; (p_55 > 5); ++p_55)
                    {
                        int **l_125 = &l_76;
                        int *l_130 = &g_87;
                        (*l_125) = l_76;
                        (*l_130) = ((g_118 | ((((65534UL ^ 0xB590L) || ((l_126 != &g_14) , l_127)) , ((safe_rshift_func_uint8_t_u_u(0x98L, ((((**l_125) | 0xA8980DF3L) & 1L) , p_55))) > p_55)) || g_85)) , p_55);
                        (*l_130) |= (*l_76);
                    }
                }
                g_152++;
                ++g_186;
                for (g_87 = 0; (g_87 <= 19); g_87++)
                {
                    int *l_195 = &l_135;
                    (*l_166) ^= g_5;
                    g_191++;
                    if (l_194)
                    {
                        g_162 = ((g_191 , (void*)0) != &l_135);
                    }
                    else
                    {
                        int *l_196 = &l_174;
                        l_196 = l_195;

                        ;
                        (*l_195) = (!0xE665D24BL);
                        (*l_195) = (g_14 , ((((safe_sub_func_int32_t_s_s(p_55, (safe_sub_func_uint8_t_u_u(g_14, ((((void*)0 != &g_11) >= (~p_55)) , (*l_195)))))) != (safe_add_func_uint32_t_u_u(((g_87 , l_195) == &l_158), (-3L)))) , p_55) , 0L));
                    }
                }
            }
            else
            {
                char l_213 = (-8L);
                int l_216 = 0xE7EE7FC0L;
                for (p_55 = (-23); (p_55 <= 6); p_55 = safe_add_func_uint32_t_u_u(p_55, 9))
                {
                    int l_222 = 0x5E70CA4AL;
                    for (g_157 = 0; (g_157 < 17); g_157 = safe_add_func_uint8_t_u_u(g_157, 8))
                    {
                        int ***l_209 = &g_207;
                        (*l_209) = g_207;
                    }
                    if (((p_55 && (safe_rshift_func_int8_t_s_s((func_62((*l_76), (+0xC0BC95C9L), g_77, &g_11, (*l_76)) , (g_87 == 1UL)), l_72))) ^ g_186))
                    {
                        int *l_212 = &l_135;
                        int *l_214 = &l_135;
                        int *l_215 = &l_137;
                        int *l_217 = (void*)0;
                        int *l_218 = &l_216;
                        int *l_219 = &l_163;
                        int *l_220 = &l_163;
                        int *l_221 = &l_216;
                        int *l_223 = &l_135;
                        int *l_224 = &l_158;
                        int *l_225 = &g_87;
                        int *l_226 = &l_135;
                        int *l_227 = &l_137;
                        int *l_228 = &g_87;
                        int *l_229 = &l_137;
                        int *l_230 = &l_135;
                        int *l_231 = &g_157;
                        int *l_232 = &l_135;
                        int *l_234 = &l_216;
                        g_235++;
                    }
                    else
                    {
                        (*g_207) = (g_157 , (void*)0);

                        ;
                    }
                    l_216 |= (safe_mod_func_uint8_t_u_u(p_55, (*g_4)));
                    if (g_152)
                    {
                        union U1 *l_241 = (void*)0;
                        union U1 **l_240 = &l_241;
                        union U0 **l_244 = &l_242;
                        int l_245 = (-9L);
                        (*l_240) = &g_77;

                        ;
                        (*l_244) = l_242;

                        l_245 = 0x9AA0F799L;
                    }
                    else
                    {
                        char l_254 = 0x72L;
                        l_158 = ((safe_rshift_func_uint8_t_u_s(((safe_lshift_func_uint16_t_u_u((p_55 > ((*g_4) != (safe_rshift_func_uint16_t_u_u(((((safe_sub_func_int32_t_s_s(9L, ((p_55 <= l_72) , (&g_77 == (void*)0)))) || ((l_254 | (p_55 == (-5L))) > l_254)) , l_222) , 0x4C5AL), 4)))), 6)) == p_55), 3)) > g_235);
                        l_255 ^= (l_213 || p_55);
                    }
                }
                l_270 &= ((safe_add_func_uint16_t_u_u((g_191 >= (safe_mod_func_uint32_t_u_u((((g_5 || (safe_mod_func_int32_t_s_s((p_55 ^ (safe_lshift_func_uint8_t_u_u((g_264 != &g_265), 7))), g_162))) >= ((safe_rshift_func_uint8_t_u_u((safe_sub_func_int32_t_s_s(1L, ((g_5 ^ (0xB0B2L & g_186)) , g_11))), 1)) || p_55)) > p_55), l_137))), p_55)) || g_87);
            }
        }
        g_87 &= (((safe_lshift_func_uint16_t_u_s(g_5, (l_72 <= (safe_mod_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u((&g_77 == (g_14 , l_277)), ((*g_4) , (safe_mod_func_uint16_t_u_u(g_85, ((safe_add_func_int8_t_s_s(p_55, (((l_135 || p_55) > g_118) & 0L))) , l_284)))))), p_55))))) , l_285) != g_287);
    }

    return g_169;
}







static union U1 func_62(unsigned p_63, unsigned p_64, union U1 p_65, char * const p_66, unsigned short p_67)
{
    char l_83 = 0x27L;
    const unsigned l_84 = 0xBB1B2B15L;
    int *l_86 = &g_87;
    int *l_88 = &g_87;
    int *l_89 = &g_87;
    int *l_90 = &g_87;
    int *l_91 = &g_87;
    int *l_92 = &g_87;
    int *l_93 = &g_87;
    int *l_94 = &g_87;
    int *l_95 = &g_87;
    int *l_96 = &g_87;
    int *l_97 = (void*)0;
    int *l_98 = &g_87;
    int *l_99 = &g_87;
    int *l_100 = &g_87;
    int *l_101 = &g_87;
    int *l_102 = &g_87;
    int *l_103 = &g_87;
    int *l_104 = (void*)0;
    int *l_105 = &g_87;
    int *l_106 = (void*)0;
    int *l_107 = &g_87;
    int *l_108 = &g_87;
    int *l_109 = &g_87;
    int *l_110 = &g_87;
    int *l_111 = &g_87;
    int *l_112 = &g_87;
    int *l_113 = &g_87;
    int *l_114 = &g_87;
    int *l_115 = (void*)0;
    int *l_116 = &g_87;
    int *l_117 = &g_87;
    for (p_64 = (-11); (p_64 != 5); p_64 = safe_add_func_int8_t_s_s(p_64, 5))
    {
        return g_77;


            }
    g_85 = ((65532UL < (safe_lshift_func_uint16_t_u_u(1UL, 5))) , ((g_5 & l_83) , l_84));
    g_118--;
    return g_77;


    }





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_11, "g_11", print_hash_value);
    transparent_crc(g_14, "g_14", print_hash_value);
    transparent_crc(g_85, "g_85", print_hash_value);
    transparent_crc(g_87, "g_87", print_hash_value);
    transparent_crc(g_118, "g_118", print_hash_value);
    transparent_crc(g_152, "g_152", print_hash_value);
    transparent_crc(g_157, "g_157", print_hash_value);
    transparent_crc(g_162, "g_162", print_hash_value);
    transparent_crc(g_169, "g_169", print_hash_value);
    transparent_crc(g_186, "g_186", print_hash_value);
    transparent_crc(g_191, "g_191", print_hash_value);
    transparent_crc(g_235, "g_235", print_hash_value);
    transparent_crc(g_306, "g_306", print_hash_value);
    transparent_crc(g_320, "g_320", print_hash_value);
    transparent_crc(g_464, "g_464", print_hash_value);
    transparent_crc(g_500, "g_500", print_hash_value);
    transparent_crc(g_513, "g_513", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
