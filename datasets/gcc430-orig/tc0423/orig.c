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
   int f2;
   unsigned f3;
};

struct S1 {
   unsigned f0;
   unsigned short f1;
   unsigned short f2;
   int f3;
   char f4;
   unsigned f5;
   unsigned f6;
   unsigned f7;
   unsigned short f8;
};

struct S2 {
   unsigned char f0;
   struct S1 f1;
   unsigned short f2;
   struct S0 f3;
   unsigned short f4;
   char f5;
   int f6;
   int f7;
};


static int g_32 = 1L;
static unsigned g_33 = 4294967295UL;
static struct S0 g_38 = {0xBF199737L,0xB242CFF4L,0L,0x2CD4B48EL};
static int g_53 = 0L;
static int g_62 = 0xA2C1E63FL;
static unsigned char g_104 = 0x64L;
static struct S1 g_114 = {0x1B5AB6CAL,0x88EEL,0x078BL,2L,0L,0xD21B86E8L,0x9CBCCD54L,0x9F286226L,0x5125L};
static unsigned g_131 = 4294967295UL;
static int *g_138 = (void*)0;
static struct S2 g_142 = {0xF5L,{0x2920A84AL,9UL,0xDF45L,1L,0x6CL,0x3F44D478L,0x2723F935L,1UL,5UL},0xC8DDL,{4L,0xD3C435FAL,1L,0x4ECE7258L},65535UL,0x3BL,1L,-1L};
static unsigned g_205 = 1UL;
static int g_349 = (-1L);
static unsigned char g_354 = 0xE9L;
static int ***g_360 = (void*)0;
static int ***g_372 = (void*)0;
static struct S0 g_406 = {-7L,3L,-1L,0xEC37B445L};
static short g_438 = (-1L);
static unsigned g_599 = 0UL;
static int g_616 = (-6L);
static char g_632 = 3L;
static unsigned g_807 = 4UL;
static unsigned short g_892 = 65535UL;
static int *g_913 = &g_142.f1.f3;



static struct S1 func_1(void);
static int * func_2(int * p_3, unsigned p_4, int * p_5, struct S2 p_6, struct S1 p_7);
static int * func_8(int * p_9, int * p_10);
static int * func_11(int p_12, struct S2 p_13, unsigned p_14, int * p_15, char p_16);
static int * func_17(struct S2 p_18, unsigned p_19, int * p_20, int p_21, int * p_22);
static struct S2 func_23(int * p_24);
static int * func_25(int p_26, unsigned p_27, unsigned p_28);
static unsigned func_34(struct S0 p_35, int p_36, struct S0 p_37);
static int func_42(int * p_43);
static int * func_44(int * p_45, int * p_46, int p_47, int * p_48);
static struct S1 func_1(void)
{
    short l_30 = 0xF663L;
    int *l_31 = &g_32;
    struct S0 l_39 = {0x88CB35B2L,0xFF541EDFL,0xCFEAA3CEL,1UL};
    int *l_135 = &l_39.f2;
    int **l_136 = &l_135;
    short l_137 = 0x2376L;
    unsigned short l_143 = 0x6A04L;
    struct S2 l_206 = {1UL,{1UL,0xBB4AL,0x2B9EL,0xA366A91BL,6L,4294967295UL,0x096A69D1L,0x7C047C51L,4UL},0xD161L,{0x44FB7190L,0xC9CCB98CL,0x23E5249EL,0xE0AAE0DDL},3UL,0xCCL,-1L,-6L};
    unsigned short l_449 = 0xD1AEL;
    unsigned short l_493 = 9UL;
    unsigned *l_497 = &g_205;
    unsigned **l_496 = &l_497;
    int l_514 = 0x3BDB61C8L;
    int l_567 = 0x46925A65L;
    char l_684 = 0xBDL;
    int l_829 = 6L;
    int l_873 = 0L;
    (*l_136) = func_2(func_8(((*l_136) = func_11((((*l_136) = func_17(func_23(func_25((safe_unary_minus_func_int32_t_s(((*l_31) &= (l_30 = 0x04811E35L)))), g_33, func_34(g_38, g_38.f3, l_39))), (((*l_136) = l_135) == l_31), l_31, l_137, g_138)) != g_138), g_142, l_143, g_138, g_142.f6)), g_138), g_205, g_138, l_206, l_206.f1);

    ;
    ;

    --l_449;
    if (((*l_31) = (safe_add_func_uint16_t_u_u(((safe_sub_func_int16_t_s_s(g_142.f6, g_38.f2)) != (safe_lshift_func_uint8_t_u_s(g_114.f3, ((safe_sub_func_int8_t_s_s(g_114.f0, (((*l_31) ^ ((func_42((*l_136)) || g_114.f1) <= g_142.f1.f3)) | g_142.f3.f2))) < g_114.f4)))), g_38.f1))))
    {
        int *l_460 = &g_114.f3;
        int *l_461 = (void*)0;
        int *l_462 = &l_39.f2;
        int *l_463 = &l_206.f3.f0;
        int *l_464 = &g_142.f3.f0;
        int *l_465 = &g_406.f2;
        int *l_466 = &l_206.f1.f3;
        int *l_467 = &l_39.f2;
        int l_468 = (-10L);
        int *l_469 = (void*)0;
        int *l_470 = &l_39.f2;
        int *l_471 = &g_62;
        int *l_472 = &g_142.f6;
        int *l_473 = &l_468;
        int *l_474 = &g_53;
        int *l_475 = &g_406.f0;
        int *l_476 = &g_142.f1.f3;
        int *l_477 = &l_468;
        int *l_478 = &g_406.f0;
        int *l_479 = (void*)0;
        int *l_480 = &g_38.f2;
        int *l_481 = &g_114.f3;
        int *l_482 = &g_406.f2;
        int *l_483 = (void*)0;
        int *l_484 = (void*)0;
        int *l_485 = &g_142.f6;
        int *l_486 = &g_142.f1.f3;
        int *l_487 = &l_206.f1.f3;
        int *l_488 = &l_39.f2;
        int *l_489 = &g_38.f0;
        int l_490 = 1L;
        int *l_491 = (void*)0;
        int *l_492 = (void*)0;
        unsigned char *l_498 = &g_354;
        int l_502 = 9L;
        struct S1 l_516 = {0xD97D366DL,0x7AEBL,7UL,0L,0xADL,0x75AD1371L,0x69283143L,0xDFEFCE86L,0x7399L};
        unsigned char *l_610 = &g_354;
        int l_717 = 0xEC590E7AL;
        int l_781 = 0x052F4E06L;
        int l_803 = 0xC8FA5B69L;
        struct S2 *l_819 = &g_142;
        unsigned char l_821 = 0x74L;
        char l_828 = 0x12L;
        int l_845 = 0x13F1C1A7L;
        --l_493;
        (*l_470) = (*l_467);
        if ((g_406.f1 ^ ((*l_498) = (l_496 != &l_497))))
        {
            unsigned l_499 = 0xD93FB0A9L;
            int *l_500 = &g_406.f0;
            short *l_501 = &l_30;
            int l_519 = (-5L);
            int l_592 = 0xCB5F9788L;
            unsigned l_615 = 4294967295UL;
            unsigned char l_618 = 0x91L;
            int ***l_625 = &l_136;
            int *l_633 = &l_206.f3.f0;
            int *l_634 = &g_142.f3.f2;
            int *l_635 = &l_39.f2;
            int *l_636 = &l_516.f3;
            int *l_637 = &g_142.f1.f3;
            int *l_638 = &g_62;
            int *l_639 = &l_206.f3.f2;
            int *l_640 = (void*)0;
            int *l_641 = &g_142.f3.f2;
            int *l_642 = &l_468;
            int *l_643 = &l_514;
            int *l_644 = &l_206.f6;
            int *l_645 = (void*)0;
            int *l_646 = (void*)0;
            int *l_647 = &l_468;
            int *l_648 = (void*)0;
            int *l_649 = &g_32;
            int *l_650 = &g_53;
            int *l_651 = &g_142.f3.f0;
            int *l_652 = &g_32;
            int *l_653 = &g_406.f0;
            int *l_654 = &g_142.f3.f2;
            int *l_655 = &g_38.f2;
            int *l_656 = &g_406.f0;
            int *l_657 = &g_406.f2;
            int *l_658 = &g_32;
            int *l_659 = &l_490;
            int *l_660 = (void*)0;
            int *l_661 = &l_206.f1.f3;
            int *l_662 = &l_592;
            int *l_663 = &g_38.f0;
            int *l_664 = &l_206.f3.f0;
            int *l_665 = &g_38.f2;
            int *l_666 = &l_206.f3.f0;
            int *l_667 = &l_516.f3;
            int *l_668 = &g_406.f0;
            int *l_669 = &l_206.f1.f3;
            int *l_670 = &g_142.f3.f0;
            int *l_671 = &g_142.f1.f3;
            int *l_672 = &l_516.f3;
            int *l_673 = &l_39.f2;
            int *l_674 = &g_62;
            int *l_675 = (void*)0;
            int *l_676 = (void*)0;
            int *l_677 = (void*)0;
            int *l_678 = &l_468;
            int *l_679 = (void*)0;
            int *l_680 = &g_62;
            int *l_681 = &l_206.f3.f2;
            int *l_682 = &g_38.f2;
            int *l_683 = &g_142.f6;
            int *l_685 = &g_142.f3.f2;
            int *l_686 = (void*)0;
            int *l_687 = (void*)0;
            int *l_688 = &g_142.f6;
            int *l_689 = (void*)0;
            int *l_690 = &g_406.f2;
            int *l_691 = &g_38.f0;
            int *l_692 = (void*)0;
            int *l_693 = &l_39.f2;
            int *l_694 = &l_567;
            int *l_695 = &g_142.f1.f3;
            int *l_696 = &g_114.f3;
            int l_697 = 0xEF6AE49DL;
            int *l_698 = &g_142.f1.f3;
            int *l_699 = (void*)0;
            int *l_700 = &g_38.f2;
            int *l_701 = &l_697;
            int *l_702 = &l_567;
            int *l_703 = &l_206.f3.f2;
            int *l_704 = &g_142.f3.f2;
            int *l_705 = &l_206.f3.f2;
            int *l_706 = &g_32;
            int *l_707 = &g_62;
            int *l_708 = &g_38.f0;
            int *l_709 = &g_406.f0;
            int *l_710 = &l_39.f2;
            int *l_711 = &l_519;
            int *l_712 = &l_39.f2;
            int *l_713 = &l_206.f1.f3;
            int *l_714 = &g_142.f6;
            int *l_715 = (void*)0;
            int *l_716 = (void*)0;
            int *l_718 = &l_206.f6;
            int *l_719 = (void*)0;
            int *l_720 = &g_32;
            int *l_721 = &g_142.f6;
            int *l_722 = &g_406.f0;
            int *l_723 = &g_142.f6;
            int *l_724 = &g_32;
            int *l_725 = &l_468;
            int *l_726 = &g_142.f1.f3;
            int *l_727 = (void*)0;
            int *l_728 = &l_468;
            int *l_729 = (void*)0;
            int *l_730 = &g_406.f0;
            int *l_731 = &g_38.f2;
            int *l_732 = &l_490;
            int *l_733 = &g_62;
            int *l_734 = &l_592;
            int *l_735 = &g_142.f6;
            int *l_736 = (void*)0;
            int *l_737 = (void*)0;
            int *l_738 = &g_114.f3;
            int *l_739 = &l_717;
            int *l_740 = (void*)0;
            int *l_741 = (void*)0;
            int *l_742 = &g_38.f2;
            int *l_743 = (void*)0;
            int *l_744 = &g_53;
            int *l_745 = &g_53;
            int *l_746 = (void*)0;
            int *l_747 = &l_468;
            int *l_748 = &g_53;
            int *l_749 = &g_38.f2;
            int *l_750 = &l_567;
            int *l_751 = &l_514;
            int *l_752 = &l_206.f1.f3;
            int *l_753 = &l_516.f3;
            int *l_754 = &l_39.f2;
            int *l_755 = &g_406.f0;
            int *l_756 = &l_490;
            int *l_757 = &g_38.f0;
            int *l_758 = &l_206.f6;
            int *l_759 = &l_206.f3.f0;
            int l_760 = (-1L);
            int *l_761 = &g_32;
            int *l_762 = &g_142.f6;
            int *l_763 = &g_53;
            int *l_764 = &g_32;
            int *l_765 = &g_38.f2;
            int *l_766 = &l_490;
            int *l_767 = &l_592;
            int *l_768 = &l_206.f6;
            int *l_769 = (void*)0;
            int *l_770 = &l_206.f3.f2;
            int *l_771 = &l_206.f1.f3;
            int *l_772 = &l_468;
            int *l_773 = &g_38.f0;
            int *l_774 = &l_760;
            int *l_775 = &g_38.f0;
            int *l_776 = &l_514;
            int *l_777 = &l_206.f3.f0;
            int *l_778 = &l_697;
            int *l_779 = &g_62;
            int *l_780 = &g_32;
            int *l_782 = &l_516.f3;
            int *l_783 = &l_468;
            int *l_784 = &l_206.f3.f2;
            int *l_785 = (void*)0;
            int *l_786 = &l_39.f2;
            int *l_787 = &g_62;
            int *l_788 = &l_697;
            int *l_789 = &l_717;
            int *l_790 = &g_142.f3.f2;
            int *l_791 = &g_142.f3.f2;
            int *l_792 = &g_142.f1.f3;
            int *l_793 = &g_114.f3;
            int *l_794 = &l_206.f3.f0;
            int *l_795 = &l_514;
            int *l_796 = &g_62;
            int *l_797 = &g_62;
            int *l_798 = (void*)0;
            int *l_799 = &l_519;
            int *l_800 = &l_468;
            int *l_801 = &g_53;
            int *l_802 = &g_142.f6;
            int *l_804 = &l_516.f3;
            int *l_805 = &l_760;
            int *l_806 = &l_697;
            (*l_136) = func_11(l_499, func_23(l_500), (*l_500), (*l_136), (((*l_501) |= (g_142.f3.f0 == ((*l_478) > g_142.f1.f4))) & l_502));
            for (g_142.f1.f7 = 0; (g_142.f1.f7 < 16); g_142.f1.f7 = safe_add_func_int16_t_s_s(g_142.f1.f7, 9))
            {
                int *l_507 = &l_490;
                int *l_512 = (void*)0;
                int *l_513 = &l_39.f1;
                int l_524 = 1L;
                int l_539 = 0x46EA1B7AL;
                struct S0 l_606 = {1L,0L,0xCF14F4EBL,4294967294UL};
                unsigned char *l_609 = &l_206.f0;
                int ***l_623 = (void*)0;
                if ((g_142.f3.f0 && func_42(func_44(func_44(func_17(g_142, (++g_114.f0), &g_62, func_42(l_507), func_25((*l_31), g_114.f7, ((safe_lshift_func_int16_t_s_s(g_53, ((~(safe_lshift_func_int8_t_s_s(func_42(func_11(((*l_513) = g_406.f2), g_142, l_514, &l_490, g_142.f2)), g_131))) || 1L))) < 1L))), l_507, g_142.f1.f5, l_500), l_500, (*l_475), l_500))))
                {
                    char l_515 = 0x81L;
                    int l_520 = 0x0AB8EF6BL;
                    int l_521 = 0x5D2BDD0BL;
                    int l_545 = 0x54ADD49BL;
                    if (((*l_500) = func_42(((*l_136) = func_2(l_507, l_515, (*l_136), func_23(&g_53), l_516)))))
                    {
                        (*l_470) ^= func_34(g_142.f3, ((*l_513) ^= g_38.f2), l_206.f3);
                    }
                    else
                    {
                        (*l_136) = &l_490;

                        ;
                    }
                    if (((*l_473) = (safe_add_func_uint8_t_u_u(((*l_472) >= 0UL), g_114.f3))))
                    {
                        int *l_522 = &l_206.f1.f3;
                        int *l_523 = &l_514;
                        int *l_525 = &l_206.f3.f2;
                        int *l_526 = &g_142.f6;
                        int *l_527 = &g_62;
                        int l_528 = 1L;
                        int *l_529 = &g_406.f2;
                        int *l_530 = &g_142.f3.f2;
                        int *l_531 = &g_406.f0;
                        int *l_532 = &g_38.f0;
                        int *l_533 = &g_53;
                        int *l_534 = (void*)0;
                        int *l_535 = &g_38.f2;
                        int *l_536 = (void*)0;
                        int *l_537 = (void*)0;
                        int *l_538 = &g_142.f1.f3;
                        int *l_540 = (void*)0;
                        int *l_541 = &l_39.f2;
                        int *l_542 = &l_539;
                        int *l_543 = &g_32;
                        int *l_544 = &l_39.f2;
                        int *l_546 = &l_524;
                        int *l_547 = (void*)0;
                        int *l_548 = &l_520;
                        int *l_549 = &l_519;
                        int *l_550 = &l_520;
                        int *l_551 = &g_142.f6;
                        int *l_552 = &l_520;
                        int *l_553 = &l_468;
                        int *l_554 = &l_206.f3.f2;
                        int *l_555 = &l_520;
                        int *l_556 = &l_514;
                        int *l_557 = &g_142.f3.f0;
                        int *l_558 = (void*)0;
                        int *l_559 = &g_406.f0;
                        int *l_560 = (void*)0;
                        int *l_561 = &l_521;
                        int *l_562 = &l_206.f1.f3;
                        int *l_563 = &g_53;
                        int *l_564 = &l_206.f3.f2;
                        int *l_565 = (void*)0;
                        int *l_566 = &g_142.f6;
                        int *l_568 = (void*)0;
                        int *l_569 = &g_406.f2;
                        int *l_570 = &l_528;
                        int *l_571 = (void*)0;
                        int *l_572 = &l_206.f6;
                        int *l_573 = (void*)0;
                        int *l_574 = &g_142.f3.f2;
                        int *l_575 = &g_62;
                        int *l_576 = &g_53;
                        int *l_577 = &l_490;
                        int *l_578 = (void*)0;
                        int *l_579 = &l_516.f3;
                        int *l_580 = (void*)0;
                        int *l_581 = &g_32;
                        int *l_582 = &l_520;
                        int *l_583 = &l_206.f3.f2;
                        int *l_584 = &l_514;
                        int *l_585 = (void*)0;
                        int *l_586 = (void*)0;
                        int *l_587 = &l_524;
                        int *l_588 = &l_567;
                        int *l_589 = &l_520;
                        int *l_590 = (void*)0;
                        int *l_591 = (void*)0;
                        int *l_593 = &l_206.f3.f0;
                        int *l_594 = &l_539;
                        int *l_595 = &g_142.f1.f3;
                        int *l_596 = &g_32;
                        int *l_597 = &g_53;
                        int *l_598 = &g_406.f0;
                        (*l_136) = l_513;

                        ;
                        g_599--;
                        (*l_596) ^= (safe_sub_func_uint8_t_u_u((safe_sub_func_int32_t_s_s(func_42(&l_528), func_34(l_606, ((*l_507) &= ((&l_592 == &l_519) == (*l_135))), g_38))), ((*l_498) = g_142.f1.f4)));
                        (*l_136) = &g_53;

                        ;
                    }
                    else
                    {
                        unsigned char **l_611 = &l_610;
                        struct S1 l_612 = {0xBED963F0L,0x2C81L,0x13B8L,0xAD088C57L,0L,1UL,1UL,0x884F4C1FL,1UL};
                        (*l_462) = ((l_520 != (+(l_609 != ((*l_611) = l_610)))) || 0UL);
                        if ((*l_489))
                            break;
                        l_612 = g_114;
                        g_616 &= (safe_sub_func_int32_t_s_s(func_34(l_606, (func_34(g_38, l_615, (l_206.f3 = g_142.f3)) <= 0x79BEL), g_142.f3), 4294967293UL));
                    }
                    if (l_520)
                        break;
                }
                else
                {
                    struct S0 l_617 = {0xED8BB31AL,0L,9L,4294967286UL};
                    int ***l_624 = (void*)0;
                    int ****l_626 = &l_625;
                    unsigned char l_627 = 254UL;
                    (*l_487) = func_34(l_617, l_617.f1, g_142.f3);
                    (*l_462) ^= (l_617.f0 != g_114.f1);
                    --l_618;
                    l_627 = (!(0UL | (((*l_481) <= (l_489 != &g_205)) && (safe_rshift_func_int16_t_s_u((((l_624 = l_623) != ((*l_626) = l_625)) >= func_34(l_206.f3, (g_142.f7 |= (g_142.f3.f0 <= (~(*l_500)))), l_39)), (*l_467))))));
                }
                (*l_474) |= ((*l_31) || (*l_31));
            }

            ;
            ;
            (*l_481) = (safe_lshift_func_int16_t_s_s(((*l_501) = (((safe_rshift_func_int8_t_s_s(g_142.f1.f6, 3)) != (*l_485)) | (*l_31))), g_632));
            g_807--;
        }
        else
        {
            unsigned l_810 = 1UL;
            ++l_810;
            return g_142.f1;
        }

        ;
        ;
        if ((*l_31))
        {
            for (l_39.f3 = 0; (l_39.f3 == 21); l_39.f3 = safe_add_func_uint16_t_u_u(l_39.f3, 4))
            {
                if (((*l_473) ^= (safe_rshift_func_uint8_t_u_u(g_142.f1.f4, g_142.f6))))
                {
                    for (l_206.f1.f2 = 0; (l_206.f1.f2 != 12); l_206.f1.f2++)
                    {
                        (*l_467) = 0xF5A3A1EEL;
                        l_819 = (void*)0;

                        ;
                    }
                }
                else
                {
                    char l_820 = (-6L);
                    l_821++;
                }
            }

            ;
        }
        else
        {
            short l_824 = 0xE45AL;
            int *l_825 = &g_62;
            int *l_826 = &l_803;
            int *l_827 = (void*)0;
            int *l_830 = &g_142.f3.f2;
            int *l_831 = &g_142.f6;
            int *l_832 = (void*)0;
            int *l_833 = &l_206.f1.f3;
            int *l_834 = (void*)0;
            int *l_835 = &g_406.f2;
            int *l_836 = (void*)0;
            int *l_837 = &g_62;
            int *l_838 = &g_406.f2;
            int *l_839 = &l_206.f1.f3;
            int *l_840 = (void*)0;
            int *l_841 = &g_62;
            int *l_842 = &l_206.f1.f3;
            int *l_843 = &l_468;
            int *l_844 = &g_142.f3.f0;
            int *l_846 = &g_142.f1.f3;
            int *l_847 = (void*)0;
            int *l_848 = (void*)0;
            int *l_849 = &l_39.f0;
            int *l_850 = (void*)0;
            int *l_851 = &l_514;
            int *l_852 = &g_142.f1.f3;
            int *l_853 = &l_490;
            int *l_854 = &g_38.f0;
            int *l_855 = &l_781;
            int *l_856 = &g_406.f2;
            int *l_857 = (void*)0;
            int *l_858 = &l_206.f6;
            int *l_859 = &g_38.f2;
            int *l_860 = &g_38.f2;
            int *l_861 = &g_406.f2;
            int *l_862 = &g_32;
            int *l_863 = &l_468;
            int *l_864 = &l_206.f6;
            int *l_865 = &l_516.f3;
            int l_866 = 0x5A02607BL;
            int *l_867 = (void*)0;
            int *l_868 = &g_53;
            int *l_869 = (void*)0;
            int *l_870 = &g_114.f3;
            int *l_871 = &l_206.f3.f0;
            int *l_872 = &g_114.f3;
            int *l_874 = &g_62;
            int *l_875 = &g_62;
            int *l_876 = &l_866;
            int *l_877 = &g_142.f1.f3;
            int *l_878 = &g_62;
            int *l_879 = &g_142.f3.f2;
            int *l_880 = &l_866;
            int *l_881 = &l_873;
            int *l_882 = &g_406.f2;
            int *l_883 = &l_206.f1.f3;
            int *l_884 = &g_38.f0;
            int *l_885 = &l_866;
            int *l_886 = &g_114.f3;
            int *l_887 = &l_206.f3.f0;
            int *l_888 = &g_406.f0;
            int *l_889 = &g_38.f0;
            int *l_890 = &l_845;
            int *l_891 = &l_206.f3.f2;
            unsigned l_895 = 0x12D960DBL;
            ++g_892;
            if ((g_632 == (l_895 < g_599)))
            {
                (*l_136) = (void*)0;

                ;
            }
            else
            {
                int *l_907 = &g_142.f3.f2;
                char *l_912 = &l_206.f5;
                struct S1 *l_914 = &l_516;
                struct S2 **l_915 = (void*)0;
                struct S2 **l_916 = &l_819;
                for (g_114.f0 = 0; (g_114.f0 != 22); g_114.f0++)
                {
                    char *l_900 = &l_684;
                    struct S0 *l_901 = &l_39;
                    int l_906 = (-1L);
                    (*l_871) &= ((*l_862) |= (safe_sub_func_int8_t_s_s(((*l_900) |= 1L), func_34(((*l_901) = g_142.f3), (safe_rshift_func_int16_t_s_s(0x09B5L, (*l_839))), g_406))));
                    for (l_516.f1 = 0; (l_516.f1 != 50); l_516.f1++)
                    {
                        (*l_870) = (*l_31);
                    }
                    (*l_859) = (l_906 < g_406.f1);
                    (*l_826) = (*l_460);
                }
                (*l_136) = func_8(func_2(func_8(&g_32, l_907), (((safe_mod_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_s((((*l_907) || (*l_480)) > (*l_907)), ((*l_912) = (65535UL ^ 0xE1F2L)))), ((*l_463) = func_42((*l_136))))) == 0xC75EL) ^ (*l_907)), l_907, g_142, g_142.f1), g_913);

                ;
                ;
                (*l_914) = g_142.f1;
                (*l_916) = &g_142;
            }

            ;
            ;
        }

        ;
        ;
        ;
    }
    else
    {
        short l_917 = 0L;
        (*l_31) &= l_917;
    }



    return g_142.f1;
}







static int * func_2(int * p_3, unsigned p_4, int * p_5, struct S2 p_6, struct S1 p_7)
{
    unsigned l_207 = 7UL;
    int *l_209 = &g_32;
    int l_214 = 0xB820AD96L;
    int l_230 = 0x3E18173DL;
    int l_231 = 1L;
    int l_234 = 0x8D88053DL;
    int l_299 = 0x45C0E92FL;
    int l_307 = 0x2E01831FL;
    int l_341 = 6L;
    int l_342 = (-10L);
    int **l_362 = &g_138;
    int ***l_361 = &l_362;
    struct S1 *l_364 = &g_114;
    unsigned l_374 = 0UL;
    unsigned short l_422 = 0x5871L;
    unsigned short l_424 = 0xE772L;
    unsigned l_429 = 4294967286UL;
    struct S0 l_432 = {9L,-1L,0x918BFD08L,0x2C7EFDA6L};
    if (l_207)
    {
        int **l_208 = (void*)0;
        int *l_210 = &g_32;
        int *l_211 = &g_62;
        int *l_212 = &g_114.f3;
        int *l_213 = (void*)0;
        int *l_215 = &g_62;
        int l_216 = 0L;
        int *l_217 = (void*)0;
        int *l_218 = &l_214;
        int *l_219 = &g_142.f6;
        int *l_220 = &g_38.f0;
        int *l_221 = &l_214;
        int *l_222 = &g_38.f2;
        int *l_223 = &g_38.f0;
        int *l_224 = &g_142.f6;
        int *l_225 = &l_214;
        int *l_226 = (void*)0;
        int *l_227 = &g_32;
        int *l_228 = &l_216;
        int *l_229 = &g_32;
        int *l_232 = &g_142.f6;
        int *l_233 = &g_32;
        int *l_235 = (void*)0;
        int *l_236 = &g_114.f3;
        int *l_237 = &g_62;
        int *l_238 = &g_32;
        int *l_239 = (void*)0;
        int *l_240 = &g_114.f3;
        int *l_241 = &g_53;
        int *l_242 = (void*)0;
        int *l_243 = (void*)0;
        int *l_244 = &g_142.f3.f0;
        int *l_245 = &g_62;
        int *l_246 = (void*)0;
        int *l_247 = &g_142.f6;
        int *l_248 = &l_216;
        int *l_249 = &g_142.f3.f2;
        int *l_250 = &l_231;
        int l_251 = 0x775F1AE5L;
        int *l_252 = (void*)0;
        int *l_253 = &g_38.f0;
        int *l_254 = &l_230;
        int *l_255 = &g_38.f0;
        int *l_256 = &g_142.f1.f3;
        int *l_257 = &l_231;
        int *l_258 = &l_231;
        int *l_259 = &l_231;
        int l_260 = (-1L);
        int *l_261 = &g_38.f0;
        int *l_262 = &g_38.f0;
        int *l_263 = &l_260;
        int *l_264 = &l_251;
        int *l_265 = &g_142.f3.f0;
        int *l_266 = &g_32;
        int *l_267 = &g_142.f1.f3;
        int *l_268 = &g_53;
        int *l_269 = &g_142.f3.f0;
        int l_270 = 0x5A83E09CL;
        int *l_271 = &l_260;
        int *l_272 = &g_53;
        int *l_273 = &l_216;
        int *l_274 = (void*)0;
        int *l_275 = &g_32;
        int *l_276 = &g_53;
        int *l_277 = &l_260;
        int l_278 = 0x5C56BA33L;
        int *l_279 = (void*)0;
        int *l_280 = &l_270;
        int *l_281 = &l_270;
        int *l_282 = &g_62;
        int *l_283 = &g_38.f2;
        int *l_284 = &l_231;
        int *l_285 = &g_142.f6;
        int *l_286 = &l_230;
        int l_287 = 0x96C70B44L;
        int *l_288 = &l_231;
        int l_289 = (-1L);
        int *l_290 = &g_32;
        int *l_291 = &g_142.f1.f3;
        int *l_292 = &g_142.f1.f3;
        int *l_293 = &l_214;
        int *l_294 = &g_38.f0;
        int *l_295 = (void*)0;
        int *l_296 = &g_38.f2;
        int *l_297 = &g_32;
        int *l_298 = &l_251;
        int *l_300 = &l_270;
        int *l_301 = (void*)0;
        int *l_302 = &g_38.f2;
        int *l_303 = (void*)0;
        int *l_304 = (void*)0;
        int *l_305 = &g_38.f2;
        int l_306 = (-3L);
        int *l_308 = &l_270;
        int *l_309 = (void*)0;
        int *l_310 = &g_53;
        int l_311 = 0x9D389A2BL;
        int *l_312 = &l_299;
        int l_313 = 0x1735F61BL;
        int *l_314 = &g_38.f2;
        int *l_315 = (void*)0;
        int *l_316 = &g_53;
        int *l_317 = &l_214;
        int *l_318 = &g_53;
        int *l_319 = &l_214;
        int *l_320 = &g_38.f0;
        int *l_321 = &g_32;
        int *l_322 = &l_270;
        int *l_323 = &l_287;
        int *l_324 = &l_306;
        int *l_325 = &l_289;
        int *l_326 = &l_214;
        int *l_327 = &l_311;
        int *l_328 = &g_38.f0;
        int *l_329 = &l_299;
        int *l_330 = (void*)0;
        int l_331 = 5L;
        int *l_332 = &l_251;
        int *l_333 = &l_313;
        int *l_334 = &l_299;
        int *l_335 = &l_306;
        int *l_336 = &l_313;
        int *l_337 = &l_214;
        int *l_338 = &g_114.f3;
        int *l_339 = &l_289;
        int *l_340 = &g_114.f3;
        int *l_343 = (void*)0;
        int *l_344 = &g_142.f3.f0;
        int *l_345 = &l_306;
        int *l_346 = &l_306;
        int *l_347 = &g_38.f0;
        int *l_348 = &l_341;
        int *l_350 = &g_142.f6;
        int *l_351 = (void*)0;
        int *l_352 = (void*)0;
        int *l_353 = &g_62;
        int *l_359 = &g_349;
        struct S1 *l_363 = &g_142.f1;
        char *l_398 = &g_142.f1.f4;
        int *l_415 = &g_142.f7;
        unsigned short *l_435 = &g_142.f4;
        struct S0 l_436 = {0L,0x36715A55L,3L,0x2893A71CL};
        short *l_437 = &g_438;
        unsigned l_439 = 8UL;
        l_209 = p_3;


        ++g_354;
        if ((!(safe_rshift_func_int8_t_s_u(func_34(g_38, ((*l_359) = (*l_326)), p_6.f3), 1))))
        {
            struct S1 **l_365 = (void*)0;
            struct S1 **l_366 = &l_364;
            unsigned char *l_367 = &g_142.f0;
            unsigned short *l_370 = (void*)0;
            int l_371 = 0x12B00796L;
            int ***l_373 = (void*)0;
            struct S0 l_402 = {0L,0x1FFD86D6L,8L,4294967288UL};
            if (((*l_263) = (0x74L && ((((g_114.f3 > ((g_360 == l_361) | (((*l_367) = (l_363 != ((*l_366) = l_364))) != (((((safe_sub_func_uint16_t_u_u((l_371 |= g_38.f2), g_131)) && (((l_373 = (g_372 = &l_208)) == (void*)0) | l_374)) > p_6.f1.f0) > g_142.f3.f2) & 1L)))) || p_6.f1.f5) != g_32) ^ g_142.f5))))
            {
                for (p_6.f1.f4 = (-11); (p_6.f1.f4 != (-17)); p_6.f1.f4--)
                {
                    unsigned short *l_377 = &g_142.f1.f1;
                    char *l_382 = &g_142.f5;
                    (*l_305) = ((g_142.f3.f2 < ((((*l_377) = g_114.f6) & g_38.f1) > ((safe_rshift_func_uint8_t_u_s(p_6.f1.f6, 1)) & (((((*l_382) = (safe_sub_func_int16_t_s_s(((*l_297) == g_142.f3.f0), p_6.f1.f3))) == p_7.f3) || 4L) | (*l_285))))) || g_131);
                }
                return p_5;



            }
            else
            {
                int *l_385 = &g_62;
                int l_394 = 0x7B7AF791L;
                (*l_362) = p_3;


                if ((safe_rshift_func_uint8_t_u_s(((65535UL || 0UL) || func_42(func_44(l_385, l_385, (g_349 = ((safe_lshift_func_int16_t_s_u(g_142.f3.f0, 7)) < (*l_385))), p_3))), 1)))
                {
                    unsigned l_392 = 0xFB665E9EL;
                    struct S0 *l_393 = &g_142.f3;
                    (*l_276) = ((safe_add_func_uint8_t_u_u(func_42((**l_361)), (safe_rshift_func_int16_t_s_u(((~0x2382L) || (l_392 != ((*l_308) = p_6.f7))), (0x46F6L > 1UL))))) | l_392);
                    (*l_393) = p_6.f3;
                    (*l_225) = 5L;
                }
                else
                {
                    unsigned char l_395 = 0x4AL;
                    unsigned *l_399 = &g_131;
                    l_395--;
                    if (((((*l_399) = ((void*)0 == l_398)) > (safe_mod_func_int16_t_s_s((*l_348), 65535UL))) > g_142.f1.f5))
                    {
                        struct S0 *l_405 = &g_142.f3;
                        (*l_222) |= p_7.f1;
                        (*l_221) |= func_34(l_402, ((((safe_mod_func_int16_t_s_s(((p_6.f3.f2 ^ ((-1L) <= func_34(((*l_405) = p_6.f3), func_42(&l_394), l_402))) ^ 0xAD69L), g_142.f1.f5)) < p_6.f1.f7) > p_6.f3.f1) & 65531UL), g_406);
                        return p_3;



                    }
                    else
                    {
                        struct S0 *l_407 = &g_38;
                        struct S0 *l_408 = (void*)0;
                        struct S0 *l_409 = &l_402;
                        (*l_409) = ((*l_407) = g_406);
                    }
                }
                for (g_38.f3 = 24; (g_38.f3 > 52); g_38.f3 = safe_add_func_int8_t_s_s(g_38.f3, 9))
                {
                    int *l_412 = &g_142.f3.f0;
                    unsigned *l_414 = (void*)0;
                    unsigned **l_413 = &l_414;
                    unsigned short l_423 = 0xF41CL;
                    (*l_348) ^= ((((*l_413) = func_44(p_5, l_412, g_142.f3.f0, l_412)) == &p_4) == ((((p_5 != l_415) && g_142.f6) >= 0xB12114B6L) ^ g_142.f5));

                    ;
                    (*l_212) |= (*l_412);
                    (*l_219) |= ((safe_sub_func_int32_t_s_s(((0UL >= ((*l_269) != (safe_mod_func_uint16_t_u_u(0UL, (safe_add_func_int8_t_s_s(((((*l_367) = (((p_6.f5 |= ((*l_398) ^= ((+(*l_412)) && (func_34(g_38, (*l_385), g_38) != g_114.f2)))) <= p_6.f3.f3) != l_422)) & l_423) && g_114.f4), g_349)))))) > g_114.f8), g_205)) < p_6.f3.f3);
                    (*l_412) = (&g_138 == ((*l_361) = &p_3));

                    ;
                }

                ;
            }


            ;

            ;
        }
        else
        {
            (*l_272) = ((*l_283) = 0xDB1B38B6L);
            (*l_257) &= ((*l_293) = 0xCC017599L);
            l_424--;
            (*l_337) &= (*l_350);
        }


        ;

        (*l_247) = (((*l_437) ^= ((safe_rshift_func_int8_t_s_s(((*l_398) = ((l_429 || (-10L)) & (func_42((**l_361)) >= (safe_lshift_func_int8_t_s_u((func_34(l_432, ((*l_415) &= (((*l_435) = (safe_lshift_func_uint8_t_u_s(((p_6.f1.f0 && 1UL) ^ (0xC2L >= (g_142.f1.f1 && (-1L)))), 4))) >= 0xDA85L)), l_436) < p_7.f0), (*l_233)))))), (*l_269))) < p_7.f4)) < l_439);
    }
    else
    {
        struct S1 **l_444 = (void*)0;
        int l_447 = (-9L);
        p_3 = &g_62;

        ;
        for (g_62 = (-10); (g_62 != (-24)); g_62 = safe_sub_func_uint32_t_u_u(g_62, 6))
        {
            return p_5;


        }
        for (g_142.f1.f2 = 0; (g_142.f1.f2 == 45); g_142.f1.f2++)
        {
            unsigned short *l_448 = &l_422;
            (*p_3) = ((l_444 != l_444) >= (safe_lshift_func_int16_t_s_u(g_142.f1.f4, (l_447 < ((*l_448) ^= p_6.f1.f4)))));
            (*l_209) &= (*p_3);
        }
    }




    ;
    (**l_361) = (*l_362);
    (*l_362) = (void*)0;
    return &g_53;


}







static int * func_8(int * p_9, int * p_10)
{
    return p_9;


}







static int * func_11(int p_12, struct S2 p_13, unsigned p_14, int * p_15, char p_16)
{
    int *l_144 = &g_53;
    int *l_145 = &g_38.f0;
    int l_146 = 4L;
    int *l_147 = &g_142.f6;
    int *l_148 = &g_53;
    int *l_149 = &g_142.f6;
    int *l_150 = (void*)0;
    int *l_151 = &g_53;
    int *l_152 = &g_62;
    int *l_153 = (void*)0;
    int *l_154 = &g_38.f2;
    int *l_155 = (void*)0;
    int *l_156 = &g_38.f0;
    int *l_157 = (void*)0;
    int *l_158 = (void*)0;
    int *l_159 = &g_38.f2;
    int *l_160 = &g_38.f2;
    int *l_161 = &g_53;
    int *l_162 = (void*)0;
    int *l_163 = &g_62;
    int l_164 = 8L;
    int *l_165 = &l_146;
    int *l_166 = &g_114.f3;
    int *l_167 = &g_62;
    int *l_168 = (void*)0;
    int *l_169 = (void*)0;
    int *l_170 = &g_142.f1.f3;
    int *l_171 = &g_32;
    int *l_172 = &g_114.f3;
    int *l_173 = &g_62;
    int *l_174 = &g_142.f1.f3;
    int *l_175 = (void*)0;
    int *l_176 = &g_142.f3.f2;
    int *l_177 = &g_142.f3.f2;
    int *l_178 = (void*)0;
    int *l_179 = (void*)0;
    int *l_180 = &g_142.f3.f0;
    int *l_181 = &g_62;
    int *l_182 = (void*)0;
    int *l_183 = &g_53;
    int *l_184 = &g_38.f0;
    int *l_185 = &g_142.f1.f3;
    int *l_186 = &g_142.f3.f0;
    int *l_187 = &g_142.f3.f2;
    int *l_188 = &g_62;
    int *l_189 = &l_146;
    int *l_190 = (void*)0;
    int *l_191 = &g_32;
    int *l_192 = &g_142.f3.f2;
    int *l_193 = &g_32;
    int *l_194 = (void*)0;
    int *l_195 = &g_142.f6;
    int l_196 = 0x6704F707L;
    int *l_197 = &g_62;
    int *l_198 = &g_142.f1.f3;
    int *l_199 = &g_142.f1.f3;
    int *l_200 = &g_142.f3.f2;
    unsigned l_201 = 4294967286UL;
    --l_201;
    if (g_142.f3.f3)
    {
        return p_15;


    }
    else
    {
        int *l_204 = &g_38.f0;
        return l_204;


    }
}







static int * func_17(struct S2 p_18, unsigned p_19, int * p_20, int p_21, int * p_22)
{
    int ***l_139 = (void*)0;
    int **l_140 = &g_138;
    int l_141 = (-1L);
    (*p_20) = 0xCB9073E8L;
    l_140 = &p_22;

    ;
    l_141 |= (*p_20);
    return &g_62;


}







static struct S2 func_23(int * p_24)
{
    int *l_75 = &g_53;
    int **l_74 = &l_75;
    int *l_76 = &g_38.f2;
    int l_77 = 1L;
    int *l_78 = &g_38.f0;
    int l_79 = 0xE8E9F827L;
    int *l_80 = &l_79;
    int *l_81 = &g_53;
    int l_82 = 0L;
    int *l_83 = &g_32;
    int *l_84 = &l_77;
    int *l_85 = &g_62;
    int *l_86 = &l_77;
    int *l_87 = &g_38.f2;
    int *l_88 = &g_38.f2;
    int *l_89 = &g_38.f2;
    int *l_90 = &g_53;
    int *l_91 = &l_82;
    int *l_92 = &g_32;
    int *l_93 = &g_62;
    int *l_94 = (void*)0;
    int *l_95 = &l_79;
    int *l_96 = &l_79;
    int l_97 = 0L;
    int *l_98 = &g_32;
    int *l_99 = &l_97;
    int *l_100 = &l_79;
    int *l_101 = (void*)0;
    int *l_102 = &l_82;
    int *l_103 = &l_79;
    struct S1 *l_113 = &g_114;
    struct S1 *l_116 = &g_114;
    struct S1 **l_115 = &l_116;
    struct S2 l_134 = {0x37L,{0x70156936L,8UL,65526UL,0x7245343EL,0x78L,4UL,4294967292UL,3UL,0x3BA3L},65535UL,{0L,-9L,0xA6A51F09L,0x456AEA00L},65535UL,0x1DL,-7L,0x76FE4188L};
    (*l_74) = &g_53;
    --g_104;
    if ((safe_mod_func_int32_t_s_s(((safe_lshift_func_int16_t_s_u(((safe_add_func_int8_t_s_s(g_38.f3, (*l_102))) & ((*l_81) < ((l_113 = l_113) != ((*l_115) = &g_114)))), ((*l_85) && g_114.f1))) ^ g_38.f1), (safe_add_func_int8_t_s_s(((func_42(func_25((*p_24), g_38.f3, g_114.f1)) ^ 0x4D413902L) && (*l_92)), (*l_100))))))
    {
        unsigned char l_119 = 1UL;
        int *l_122 = &g_32;
        int *l_123 = (void*)0;
        int *l_124 = &g_32;
        int l_125 = (-4L);
        int *l_126 = &g_114.f3;
        int *l_127 = &l_77;
        int *l_128 = &g_114.f3;
        int *l_129 = &g_53;
        int *l_130 = &l_82;
        l_119++;
        g_131++;
        return l_134;
    }
    else
    {
        return l_134;
    }
}







static int * func_25(int p_26, unsigned p_27, unsigned p_28)
{
    int *l_73 = &g_32;
    return l_73;


}







static unsigned func_34(struct S0 p_35, int p_36, struct S0 p_37)
{
    int *l_49 = &g_38.f0;
    struct S1 l_71 = {0UL,1UL,5UL,0x05D52AEBL,-8L,0xA8E5F853L,4294967292UL,0x361F4973L,7UL};
    for (g_38.f2 = 0; (g_38.f2 > (-8)); g_38.f2 = safe_sub_func_uint32_t_u_u(g_38.f2, 4))
    {
        int *l_68 = &g_62;
        if (func_42(func_44(l_49, l_49, p_36, l_49)))
        {
            int *l_67 = &g_38.f2;
            (*l_68) |= (safe_sub_func_int16_t_s_s(func_42(l_67), func_42(l_68)));
            return g_62;
        }
        else
        {
            struct S1 *l_72 = &l_71;
            (*l_49) ^= g_38.f3;
            (*l_68) |= (safe_lshift_func_int16_t_s_s(func_42(&g_53), 3));
            (*l_72) = l_71;
            return p_37.f0;
        }
    }
    return (*l_49);
}







static int func_42(int * p_43)
{
    return g_38.f1;
}







static int * func_44(int * p_45, int * p_46, int p_47, int * p_48)
{
    short l_54 = 0x7114L;
    unsigned l_59 = 0xCB16C627L;
    int *l_63 = &g_53;
    int **l_64 = &l_63;
    for (g_38.f0 = (-14); (g_38.f0 < 23); g_38.f0 = safe_add_func_int16_t_s_s(g_38.f0, 7))
    {
        int *l_52 = &g_53;
        unsigned char l_60 = 3UL;
        int *l_61 = &g_62;
        (*l_52) &= 0x6B6B07C1L;
        (*l_61) ^= ((((((((l_54 < (safe_lshift_func_int8_t_s_u(((((0xCF5FC6D3L >= ((&g_53 != &g_53) && (safe_sub_func_uint32_t_u_u(g_38.f2, p_47)))) > l_54) >= l_59) ^ g_38.f2), g_38.f1))) == l_60) ^ l_54) <= g_38.f0) <= 0xEF91DD11L) ^ 0UL) ^ g_38.f1) && (*l_52));
        return l_63;


    }
    (*l_64) = l_63;
    return &g_62;


}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_32, "g_32", print_hash_value);
    transparent_crc(g_33, "g_33", print_hash_value);
    transparent_crc(g_38.f0, "g_38.f0", print_hash_value);
    transparent_crc(g_38.f1, "g_38.f1", print_hash_value);
    transparent_crc(g_38.f2, "g_38.f2", print_hash_value);
    transparent_crc(g_38.f3, "g_38.f3", print_hash_value);
    transparent_crc(g_53, "g_53", print_hash_value);
    transparent_crc(g_62, "g_62", print_hash_value);
    transparent_crc(g_104, "g_104", print_hash_value);
    transparent_crc(g_114.f0, "g_114.f0", print_hash_value);
    transparent_crc(g_114.f1, "g_114.f1", print_hash_value);
    transparent_crc(g_114.f2, "g_114.f2", print_hash_value);
    transparent_crc(g_114.f3, "g_114.f3", print_hash_value);
    transparent_crc(g_114.f4, "g_114.f4", print_hash_value);
    transparent_crc(g_114.f5, "g_114.f5", print_hash_value);
    transparent_crc(g_114.f6, "g_114.f6", print_hash_value);
    transparent_crc(g_114.f7, "g_114.f7", print_hash_value);
    transparent_crc(g_114.f8, "g_114.f8", print_hash_value);
    transparent_crc(g_131, "g_131", print_hash_value);
    transparent_crc(g_142.f0, "g_142.f0", print_hash_value);
    transparent_crc(g_142.f1.f0, "g_142.f1.f0", print_hash_value);
    transparent_crc(g_142.f1.f1, "g_142.f1.f1", print_hash_value);
    transparent_crc(g_142.f1.f2, "g_142.f1.f2", print_hash_value);
    transparent_crc(g_142.f1.f3, "g_142.f1.f3", print_hash_value);
    transparent_crc(g_142.f1.f4, "g_142.f1.f4", print_hash_value);
    transparent_crc(g_142.f1.f5, "g_142.f1.f5", print_hash_value);
    transparent_crc(g_142.f1.f6, "g_142.f1.f6", print_hash_value);
    transparent_crc(g_142.f1.f7, "g_142.f1.f7", print_hash_value);
    transparent_crc(g_142.f1.f8, "g_142.f1.f8", print_hash_value);
    transparent_crc(g_142.f2, "g_142.f2", print_hash_value);
    transparent_crc(g_142.f3.f0, "g_142.f3.f0", print_hash_value);
    transparent_crc(g_142.f3.f1, "g_142.f3.f1", print_hash_value);
    transparent_crc(g_142.f3.f2, "g_142.f3.f2", print_hash_value);
    transparent_crc(g_142.f3.f3, "g_142.f3.f3", print_hash_value);
    transparent_crc(g_142.f4, "g_142.f4", print_hash_value);
    transparent_crc(g_142.f5, "g_142.f5", print_hash_value);
    transparent_crc(g_142.f6, "g_142.f6", print_hash_value);
    transparent_crc(g_142.f7, "g_142.f7", print_hash_value);
    transparent_crc(g_205, "g_205", print_hash_value);
    transparent_crc(g_349, "g_349", print_hash_value);
    transparent_crc(g_354, "g_354", print_hash_value);
    transparent_crc(g_406.f0, "g_406.f0", print_hash_value);
    transparent_crc(g_406.f1, "g_406.f1", print_hash_value);
    transparent_crc(g_406.f2, "g_406.f2", print_hash_value);
    transparent_crc(g_406.f3, "g_406.f3", print_hash_value);
    transparent_crc(g_438, "g_438", print_hash_value);
    transparent_crc(g_599, "g_599", print_hash_value);
    transparent_crc(g_616, "g_616", print_hash_value);
    transparent_crc(g_632, "g_632", print_hash_value);
    transparent_crc(g_807, "g_807", print_hash_value);
    transparent_crc(g_892, "g_892", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
