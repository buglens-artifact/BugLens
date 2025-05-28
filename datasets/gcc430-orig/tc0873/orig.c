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



static int g_4 = (-1L);
static short g_42 = 0x422DL;
static int g_66 = 0x97756EB3L;
static int *g_67 = (void*)0;
static unsigned g_78 = 4294967295UL;
static int g_79 = 0x5E2E4BCBL;
static unsigned g_81 = 0x676E3B61L;
static unsigned char g_87 = 0x22L;
static int g_89 = 0x841F9F80L;
static char g_109 = 0x2BL;
static short g_117 = 1L;
static short *g_129 = &g_117;
static short **g_128 = &g_129;
static short ***g_127 = &g_128;
static short ****g_126 = &g_127;
static unsigned g_135 = 4294967294UL;
static unsigned short g_162 = 65535UL;
static int g_171 = 1L;
static unsigned char g_185 = 0xA8L;
static unsigned char g_192 = 0x3BL;
static char g_212 = 0xD4L;
static int **g_220 = (void*)0;
static unsigned short g_264 = 1UL;
static unsigned g_318 = 4294967295UL;
static unsigned **g_368 = (void*)0;
static unsigned g_371 = 0x9782215AL;
static unsigned *g_370 = &g_371;
static unsigned **g_369 = &g_370;
static unsigned g_409 = 6UL;
static char g_495 = 0x59L;
static int g_546 = 0x91A4F8CAL;
static int *g_545 = &g_546;
static char *g_575 = &g_109;
static char **g_574 = &g_575;
static int ***g_585 = &g_220;
static int ****g_584 = &g_585;
static short g_626 = 0xE615L;
static unsigned *g_630 = (void*)0;
static unsigned **g_629 = &g_630;



static short func_1(void);
static int ** func_5(int p_6, int * p_7, short p_8);
static int * func_9(int * p_10, int ** p_11, int ** p_12);
static int * func_13(int ** p_14, unsigned p_15, int * p_16);
static int ** func_17(int p_18);
static int func_29(unsigned p_30, unsigned p_31);
static unsigned func_32(unsigned short p_33, int p_34);
static int func_35(int p_36, unsigned short p_37);
static int func_43(unsigned short p_44);
static int * func_55(int ** p_56, unsigned p_57, unsigned char p_58, unsigned char p_59);
static short func_1(void)
{
    unsigned short l_2 = 9UL;
    int *l_3 = &g_4;
    unsigned l_19 = 0xFE8B0D19L;
    unsigned *l_28 = &l_19;
    char l_38 = 1L;
    unsigned *l_237 = (void*)0;
    unsigned *l_238 = &g_135;
    int ***l_758 = &g_220;
    char l_768 = 8L;
    (*l_3) = l_2;
    (*l_758) = func_5((*l_3), func_9(func_13(func_17((l_19 , (safe_rshift_func_uint16_t_u_s(g_4, (safe_mod_func_uint16_t_u_u(((safe_rshift_func_int16_t_s_s(((void*)0 == &g_4), 12)) <= ((*l_28) = (safe_rshift_func_uint16_t_u_u((*l_3), 11)))), (func_29(g_4, ((*l_238) = func_32(g_4, func_35((*l_3), l_38)))) & (*l_3)))))))), (*l_3), &g_4), &l_3, &l_3), (*l_3));
    for (l_2 = 19; (l_2 != 11); l_2 = safe_sub_func_int32_t_s_s(l_2, 8))
    {
        unsigned char l_775 = 0xE7L;
        int l_778 = 0x5EF37B32L;
        unsigned l_779 = 1UL;
        int l_780 = 0x7B63C334L;
        int **l_781 = &g_67;
        int *l_782 = &g_66;
        for (g_79 = 0; (g_79 >= (-18)); g_79 = safe_sub_func_int16_t_s_s(g_79, 5))
        {
            int *l_763 = &g_89;
            (***g_584) = l_763;
            l_778 = ((****g_584) = (safe_mod_func_uint8_t_u_u(((safe_rshift_func_int16_t_s_u(func_35(l_768, g_409), 11)) , ((safe_sub_func_uint32_t_u_u(((((*g_545) = ((safe_sub_func_int8_t_s_s((((l_780 &= ((*l_28) = ((safe_rshift_func_uint8_t_u_u((l_775 ^= (***l_758)), ((((&g_162 != &g_162) || ((safe_sub_func_uint32_t_u_u(4294967290UL, l_778)) | ((***l_758) < (*l_763)))) , (***g_585)) | (*l_763)))) != l_779))) < 4294967293UL) <= (*l_763)), 0x34L)) >= (*l_3))) , l_780) , (***l_758)), l_779)) < (*l_763))), 1UL)));
        }
        (*l_781) = ((***l_758) , (*l_781));
        (*l_782) |= (*l_3);
    }
    return (*l_3);
}







static int ** func_5(int p_6, int * p_7, short p_8)
{
    int ***l_720 = &g_220;
    unsigned char *l_723 = (void*)0;
    unsigned **l_744 = &g_630;
    char l_753 = 0xC1L;
    int l_756 = 1L;
    int **l_757 = &g_67;
    (*p_7) = func_43(func_43((((((safe_mod_func_uint16_t_u_u((l_720 != ((*g_584) = (*g_584))), p_8)) < p_8) & ((((safe_mod_func_uint8_t_u_u(((void*)0 != l_723), g_87)) , func_43(((*g_545) , g_79))) , 1L) > 248UL)) , (*g_129)) , g_212)));
    for (g_81 = 1; (g_81 != 19); ++g_81)
    {
        unsigned l_730 = 4294967295UL;
        int l_736 = 2L;
        unsigned char *l_737 = (void*)0;
        unsigned char *l_738 = &g_185;
        unsigned char *l_739 = &g_192;
        int l_740 = 0x4414A183L;
        unsigned *l_745 = &g_135;
        unsigned *l_746 = &g_409;
        unsigned short *l_749 = (void*)0;
        unsigned short *l_750 = &g_162;
        int **l_751 = &g_67;
        int *l_752 = &l_740;
        (*p_7) = (l_740 |= (safe_sub_func_int32_t_s_s(((*g_129) , (*p_7)), (safe_sub_func_int8_t_s_s((g_79 > l_730), (((*g_545) , (safe_add_func_uint8_t_u_u((safe_unary_minus_func_uint32_t_u(l_730)), ((*l_739) &= (((func_35(((safe_rshift_func_int16_t_s_u((l_736 ^ ((*l_738) = g_66)), ((*p_7) ^ (*p_7)))) , (*g_545)), p_8) | p_6) > (-2L)) , g_626))))) != p_6))))));
        for (g_109 = 0; (g_109 > 21); ++g_109)
        {
            int *l_743 = &g_66;
            (*l_743) = ((*p_7) = (-9L));
            if ((*l_743))
                break;
        }
        (*l_751) = (((func_35(l_736, g_66) , ((*l_746) = ((*l_745) = (l_740 &= (&g_630 == l_744))))) , (l_740 = ((*l_750) ^= (safe_lshift_func_uint16_t_u_s(l_740, 1))))) , p_7);
        (*l_751) = l_752;
    }
    (*l_757) = func_55(&p_7, (safe_sub_func_int16_t_s_s(p_8, p_6)), (g_371 < (l_756 &= (g_89 < p_8))), p_8);
    (*g_67) = (-1L);
    return l_757;
}







static int * func_9(int * p_10, int ** p_11, int ** p_12)
{
    int *l_717 = &g_171;
    return l_717;
}







static int * func_13(int ** p_14, unsigned p_15, int * p_16)
{
    unsigned l_280 = 4294967291UL;
    char *l_283 = (void*)0;
    char *l_284 = &g_212;
    short ****l_324 = &g_127;
    int l_337 = 0xBAA813B8L;
    unsigned *l_352 = &g_135;
    unsigned **l_351 = &l_352;
    unsigned short *l_455 = &g_264;
    unsigned l_494 = 0x24B5B738L;
    int ***l_544 = &g_220;
    char l_644 = 0x21L;
    int *l_658 = &l_337;
    int **l_687 = (void*)0;
    int *l_716 = &l_337;
    if ((func_43(((1UL > func_29((l_280 ^ (**g_128)), l_280)) && (((*l_284) = (l_280 , ((safe_add_func_uint32_t_u_u((p_15 , ((l_280 != 0L) >= 9UL)), 0x3547ADA8L)) > 4294967295UL))) , 0x9D31CD22L))) | 0x70L))
    {
        int l_285 = 0x747B503CL;
        char *l_290 = &g_212;
        unsigned char *l_293 = &g_192;
        (*p_14) = (*p_14);
        if ((((l_285 <= (safe_add_func_int8_t_s_s((~(65529UL | ((safe_lshift_func_int16_t_s_s(((((void*)0 != l_290) == (**g_128)) == ((safe_add_func_int16_t_s_s((((*l_293) = p_15) ^ p_15), (((func_35(l_280, l_280) , 0x92DA7043L) , (*p_16)) ^ l_280))) && l_285)), 12)) , l_280))), l_280))) != p_15) > l_280))
        {
            unsigned l_296 = 0xEF38C47EL;
            int l_355 = 0x150271E2L;
            int *l_432 = &g_66;
            if (l_280)
            {
                unsigned char *l_313 = &g_87;
                int l_322 = 0x1241E3A8L;
                for (g_135 = 0; (g_135 > 31); g_135 = safe_add_func_int32_t_s_s(g_135, 5))
                {
                    unsigned char l_306 = 0x39L;
                    int l_307 = 0xEE091D02L;
                    unsigned short *l_314 = (void*)0;
                    unsigned short *l_315 = &g_264;
                    unsigned *l_316 = (void*)0;
                    unsigned *l_317 = &g_318;
                    int *l_323 = &g_89;
                    if ((*p_16))
                        break;
                    if (l_296)
                    {
                        (*p_14) = (*p_14);
                    }
                    else
                    {
                        unsigned short *l_303 = &g_162;
                        int l_304 = 0x17AC4D62L;
                        unsigned short *l_305 = &g_264;
                        int *l_308 = &g_89;
                        (*l_308) = ((safe_rshift_func_uint8_t_u_u((l_307 |= (((func_35(g_81, g_78) && (safe_add_func_uint32_t_u_u((l_280 == (((**g_127) == (void*)0) != (((((*l_303) = (safe_rshift_func_int8_t_s_s(0L, 5))) ^ ((*g_129) &= (((*l_305) = l_304) , func_35(p_15, g_171)))) <= l_296) == l_306))), l_304))) , 9L) , l_304)), 6)) , 0x022EB11DL);
                        return &g_89;
                    }
                    (*l_323) = ((safe_lshift_func_int16_t_s_s(((((safe_div_func_int16_t_s_s(((l_313 == l_293) & l_296), (g_66 , 8L))) ^ (((((*l_317) = func_35(p_15, ((*l_315) = l_307))) , (safe_rshift_func_uint8_t_u_s(((safe_unary_minus_func_int16_t_s(((*g_129) &= p_15))) > l_296), l_296))) <= p_15) , l_306)) || p_15) != g_78), 3)) ^ l_322);
                    if (func_35(((0xD5L <= p_15) <= l_322), ((((((void*)0 == l_324) , (safe_sub_func_uint32_t_u_u((g_109 , l_285), l_296))) >= 0x98256006L) ^ p_15) | l_285)))
                    {
                        int *l_327 = (void*)0;
                        l_327 = &l_322;
                        return &g_66;
                    }
                    else
                    {
                        short l_330 = (-9L);
                        int *l_333 = &g_79;
                        unsigned **l_336 = &l_317;
                        (*l_323) &= (((safe_lshift_func_int16_t_s_u(l_330, l_280)) & g_4) , ((*p_16) | l_285));
                        (*p_14) = (*p_14);
                        l_337 = ((*l_323) = func_35((safe_div_func_int8_t_s_s(0x4DL, func_35(((*l_333) = g_42), ((*l_315) = 9UL)))), (func_35((safe_rshift_func_int8_t_s_u((((((**l_324) != (void*)0) || (((*l_336) = p_16) != ((~((&p_16 != &p_16) && 1L)) , (void*)0))) && p_15) & (-1L)), g_66)), p_15) >= (***g_127))));
                        return (*p_14);
                    }
                }
                return &g_171;
            }
            else
            {
                int ***l_338 = &g_220;
                int *l_353 = (void*)0;
                int *l_354 = (void*)0;
                int l_452 = (-1L);
                int *l_453 = &l_452;
                int *l_454 = (void*)0;
                (*l_338) = &p_16;
                if ((l_355 = (func_32(p_15, (safe_lshift_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u(func_29(g_162, ((g_135 = (g_318 <= l_285)) , func_35(g_162, (safe_mod_func_int16_t_s_s((safe_div_func_uint16_t_u_u((~(((safe_rshift_func_uint8_t_u_s((!((safe_rshift_func_int16_t_s_s(((&g_127 != (void*)0) == (((((p_15 | ((l_351 == (void*)0) , p_15)) & (***l_338)) , &g_79) != l_353) ^ l_285)), l_296)) | 65535UL)), l_285)) >= g_109) ^ g_78)), l_280)), 65535UL))))), 0)), 5))) , 0xD99A783EL)))
                {
                    int *l_356 = &l_355;
                    unsigned char *l_372 = &g_87;
                    l_355 &= ((void*)0 == &g_264);
                    (*l_356) &= (-4L);
                    for (g_185 = 0; (g_185 != 17); ++g_185)
                    {
                        short l_359 = 0L;
                        int l_360 = 0x4A8C5B16L;
                        unsigned *l_361 = &l_280;
                        l_359 = 0x4E4512E5L;
                        l_285 = (func_29(l_296, ((**l_351) ^= (l_360 = l_359))) < ((l_285 && ((*l_361) = 0x839F9090L)) , (safe_lshift_func_uint16_t_u_s((safe_add_func_uint32_t_u_u(((safe_mod_func_int32_t_s_s(l_296, ((*l_356) = g_171))) ^ ((g_368 == (g_369 = g_368)) > 65535UL)), l_296)), 3))));
                    }
                    if (((((*g_129) = func_35(p_15, (p_15 == ((*l_293) |= p_15)))) < (((*l_372) = (l_285 , ((void*)0 == &g_127))) | p_15)) , (*p_16)))
                    {
                        int *l_389 = &g_79;
                        int l_390 = 0xE7710A52L;
                        char *l_391 = (void*)0;
                        l_285 = (((l_355 = (l_280 == (safe_lshift_func_int8_t_s_s(((*l_284) = (safe_div_func_int32_t_s_s(((((safe_mod_func_int8_t_s_s((0x4DL > func_29((*l_356), (safe_div_func_uint8_t_u_u(func_35(((*l_389) = (g_264 >= (safe_div_func_uint32_t_u_u((((*p_16) , 0xC8L) , (safe_add_func_uint8_t_u_u(((*l_356) ^ (safe_sub_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_u(g_185, 2)), ((*g_370) = p_15)))), 254UL))), (*p_16))))), p_15), l_390)))), g_318)) , (void*)0) == &l_355) || g_81), l_280))), 4)))) && 0x24L) , (-8L));
                        return (*p_14);
                    }
                    else
                    {
                        unsigned short l_414 = 65531UL;
                        int *l_415 = &g_89;
                        (*p_14) = func_55(((*l_338) = func_17((safe_div_func_int8_t_s_s(((l_296 < (safe_add_func_int16_t_s_s(0x99FDL, (safe_mod_func_uint8_t_u_u((g_192 = (safe_unary_minus_func_int32_t_s(((*l_415) = ((*l_356) = (safe_rshift_func_uint8_t_u_s((p_15 , (safe_div_func_uint16_t_u_u(g_162, (safe_add_func_int8_t_s_s(g_79, (~(safe_mod_func_uint32_t_u_u((safe_lshift_func_int8_t_s_u(((g_409 = p_15) | (g_212 < (safe_rshift_func_uint16_t_u_s(((((g_89 > (safe_lshift_func_int8_t_s_s((l_414 ^ 0xFD6FL), p_15))) & g_318) , 1UL) != 247UL), 5)))), 5)), (*l_356))))))))), 1))))))), g_79))))) <= 0xC57EL), g_185)))), g_4, g_318, l_285);
                        (**l_324) = (**l_324);
                    }
                }
                else
                {
                    (*p_14) = &l_285;
                }
                if (((safe_sub_func_uint16_t_u_u(p_15, ((l_337 = ((*l_284) = g_162)) | ((~(safe_lshift_func_int8_t_s_u((func_35((0x27L <= ((*l_293) = g_371)), g_4) , (g_109 = (g_264 , g_4))), 3))) && (safe_mod_func_uint8_t_u_u(((safe_rshift_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u(((safe_lshift_func_int8_t_s_u(p_15, g_185)) && l_296), 3)), 7)) == 255UL), l_296)))))) , 0xD1F37000L))
                {
                    int *l_428 = &l_355;
                    int *l_429 = &g_66;
                    return l_429;
                }
                else
                {
                    int *l_431 = &l_355;
                    if (func_35(g_264, g_171))
                    {
                        int *l_430 = &l_285;
                        return l_432;
                    }
                    else
                    {
                        char l_441 = (-1L);
                        (*l_431) &= (safe_div_func_int16_t_s_s(((**g_128) |= (safe_div_func_int16_t_s_s(p_15, 65529UL))), 0x3FA9L));
                        l_452 = ((((safe_mod_func_uint32_t_u_u(l_285, p_15)) | ((p_15 & (l_280 != 0x625CL)) > ((l_441 & (g_4 , (((((safe_sub_func_uint16_t_u_u(((safe_mod_func_int16_t_s_s(((****l_324) = (*g_129)), ((safe_lshift_func_int8_t_s_u((safe_add_func_uint32_t_u_u((safe_mod_func_uint32_t_u_u(p_15, 0x7AD23072L)), 1L)), 4)) ^ l_285))) == l_441), l_441)) , (*l_432)) ^ 0xD5L) != (-1L)) >= p_15))) <= 0xF6L))) && (*g_370)) & 0L);
                        return l_454;
                    }
                }
            }
        }
        else
        {
            (*p_14) = &l_285;
            return &g_4;
        }
    }
    else
    {
        unsigned short *l_456 = &g_264;
        int l_467 = 0x2539A142L;
        int l_468 = 6L;
        short **l_472 = (void*)0;
        unsigned char *l_487 = (void*)0;
        unsigned char *l_488 = &g_192;
        unsigned l_492 = 4UL;
        int *l_493 = &g_79;
        int **l_560 = &g_67;
        int *l_602 = &l_467;
        unsigned l_610 = 0UL;
        l_337 |= (!(l_468 ^= ((l_455 != (l_456 = (((void*)0 != &g_192) , l_455))) & (p_15 , ((safe_sub_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u(l_280, 6)), ((*g_129) ^ (safe_div_func_uint8_t_u_u((safe_sub_func_int32_t_s_s((p_15 , (g_135 , g_264)), p_15)), g_162))))), g_409)) , l_467)))));
        for (g_66 = 2; (g_66 == 4); g_66++)
        {
            unsigned char l_471 = 0x03L;
        }
        g_495 |= (safe_mod_func_uint32_t_u_u(((safe_sub_func_uint16_t_u_u((g_318 | ((safe_lshift_func_int16_t_s_u((l_494 ^= (l_337 = ((safe_sub_func_uint32_t_u_u(func_29(func_35((g_87 , ((*l_493) = (safe_div_func_int16_t_s_s(func_43(func_43(g_185)), (safe_rshift_func_uint8_t_u_u(func_35(p_15, (((safe_add_func_int8_t_s_s(((func_35((((l_492 = (((*l_488) = 254UL) | ((safe_lshift_func_uint8_t_u_s((((safe_unary_minus_func_uint8_t_u((g_171 , (l_467 = (!l_337))))) , (void*)0) != (void*)0), 4)) == 0x185AL))) < p_15) < g_409), g_42) , 6L) || l_280), 0L)) , 255UL) || 1L)), 5)))))), p_15), g_42), l_280)) ^ 0x36L))), g_371)) , 0xB468L)), l_468)) <= l_280), (*p_16)));
        if ((+(((&g_370 == (void*)0) , p_15) & 0x3C9AL)))
        {
            int *l_500 = &g_89;
            unsigned short l_505 = 0UL;
            unsigned short *l_513 = &l_505;
            int **l_514 = &l_500;
            int *l_515 = (void*)0;
            for (g_81 = 22; (g_81 <= 12); g_81 = safe_sub_func_int32_t_s_s(g_81, 8))
            {
                unsigned short **l_503 = (void*)0;
                unsigned short *l_504 = &g_264;
                int *l_506 = &g_171;
                for (g_79 = 24; (g_79 < 1); --g_79)
                {
                    g_66 = 0L;
                    (*p_14) = l_500;
                    (*p_14) = ((*p_16) , &l_468);
                    (*p_14) = (*p_14);
                }
                (*l_500) = (*p_16);
                (*l_506) |= func_35((l_505 &= (safe_lshift_func_uint8_t_u_u((((l_504 = &g_264) != (void*)0) | ((*l_500) = ((void*)0 == &l_352))), 7))), g_81);
                (*p_14) = (*p_14);
            }
            (*l_514) = ((*p_14) = func_55(&g_67, (g_185 , func_35(func_43(((*l_513) |= ((*l_455) ^= func_35((safe_add_func_uint16_t_u_u(((l_337 <= (*p_16)) | (l_468 & (p_15 < (safe_add_func_int8_t_s_s((safe_rshift_func_int16_t_s_s(p_15, 9)), (p_15 && g_371)))))), g_185)), g_4)))), p_15)), g_185, g_42));
            l_337 = g_185;
        }
        else
        {
            char l_520 = (-1L);
            int l_536 = 0xFCE7D17FL;
            int **l_537 = (void*)0;
            short l_556 = 0xB16DL;
            short ***l_559 = (void*)0;
            int l_572 = 0x2AD04589L;
            int l_581 = 1L;
            int l_586 = 0xD3DAF2A1L;
            if (func_43((safe_rshift_func_uint16_t_u_u((((safe_sub_func_int16_t_s_s(p_15, l_494)) && (l_520 & ((safe_rshift_func_uint16_t_u_u(((p_15 < (safe_mod_func_uint16_t_u_u((g_212 ^ (((safe_unary_minus_func_uint8_t_u((safe_rshift_func_int8_t_s_s(func_43((0xF1L && (l_536 = (((safe_sub_func_int8_t_s_s(1L, (-1L))) != (safe_mod_func_int16_t_s_s((safe_add_func_uint32_t_u_u(func_35(p_15, l_492), l_337)), l_468))) > l_520)))), g_171)))) , p_15) , g_409)), p_15))) <= 4294967294UL), 9)) <= (*p_16)))) && (*p_16)), 11))))
            {
                int ***l_538 = &l_537;
                int *l_541 = &l_337;
                int ***l_543 = &g_220;
                int ****l_542 = &l_543;
                int *l_548 = &g_546;
                int **l_547 = &l_548;
                unsigned short *l_555 = &g_162;
lbl_588:
                (*l_538) = l_537;
                g_171 &= (func_35(func_29(g_4, (((safe_mod_func_uint32_t_u_u((((*l_541) = g_81) != 7UL), 6UL)) , ((*l_542) = &g_220)) != l_544)), (((l_493 = g_370) == ((*l_547) = (g_545 = g_370))) || g_318)) >= (*p_16));
                if ((func_35((p_15 | ((((*l_541) = (safe_add_func_uint8_t_u_u(250UL, ((safe_rshift_func_int8_t_s_s(g_546, (func_35((*g_545), g_89) >= ((((safe_mod_func_uint8_t_u_u(func_35((*g_545), (l_455 != l_555)), g_162)) != 7L) < p_15) >= 0L)))) > 0xB7L)))) ^ 0xBD3278CBL) , l_556)), g_89) && (*g_370)))
                {
                    unsigned short l_565 = 0x0BAEL;
                    char ***l_573 = (void*)0;
                    g_66 = (safe_div_func_int32_t_s_s(((void*)0 != l_559), ((*l_541) |= ((void*)0 == (***l_324)))));
                    (*l_560) = func_55(l_560, ((safe_mod_func_uint16_t_u_u((g_162 = g_4), ((((safe_mod_func_int8_t_s_s(1L, g_546)) < ((**g_369) = func_35(p_15, l_565))) >= ((l_536 = (safe_mod_func_uint32_t_u_u((safe_sub_func_int32_t_s_s((g_192 <= ((((*l_284) = (((*l_456) = (safe_add_func_uint8_t_u_u((((p_15 , 0x1D57L) < p_15) || l_572), (-1L)))) | p_15)) && 248UL) == 0xE434L)), 1UL)), 0x1E346EB7L))) , l_572)) , 0x1258L))) || (*p_16)), g_78, g_171);
                    g_574 = (void*)0;
                }
                else
                {
                    unsigned l_578 = 0xE6014ED6L;
                    int l_587 = 0xF47C104EL;
                    (*l_541) &= (safe_rshift_func_uint8_t_u_u((l_578 ^ l_578), 0));
                    l_587 ^= (l_572 , ((safe_div_func_uint8_t_u_u((+func_29(((**l_351) = (p_15 < (l_581 , (((safe_lshift_func_uint8_t_u_u((g_584 == &g_585), 4)) <= p_15) & (func_32(p_15, (*p_16)) ^ l_586))))), g_495)), g_371)) , 1L));
                }
                if ((*p_16))
                {
                    short l_595 = 0xEE44L;
                    if (l_581)
                        goto lbl_588;
                    (*l_541) = (((*g_545) , (safe_mod_func_int16_t_s_s((&l_493 != &l_493), (l_581 = (safe_mod_func_uint16_t_u_u(func_29((((safe_lshift_func_int16_t_s_u(0x016AL, l_595)) | (*p_16)) , (((l_586 == (safe_lshift_func_int8_t_s_s(((((*g_575) ^ (safe_rshift_func_uint8_t_u_u(((*l_488) = func_35(((((safe_sub_func_uint32_t_u_u((*g_370), (*p_16))) == (*p_16)) | 0x5D0741B0L) || l_520), (*l_541))), p_15))) > 0x6FL) < 2UL), p_15))) == g_495) , g_162)), p_15), p_15)))))) < 0xE3L);
                    return (*p_14);
                }
                else
                {
                    unsigned l_609 = 0x70671AC4L;
                    (*p_14) = ((((func_43(l_581) != func_35((((safe_div_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u((func_35((*g_545), g_185) <= ((safe_sub_func_uint32_t_u_u((!0xB93BDE2CL), (((g_546 = ((((p_15 & func_35(p_15, g_171)) > 0xAC68343BL) < 9L) & 4294967295UL)) , g_4) <= p_15))) && l_586)), p_15)), p_15)) && (-6L)) > g_4), l_609)) <= p_15) & l_610) , (*p_14));
                }
            }
            else
            {
                int *l_611 = (void*)0;
                return l_611;
            }
        }
    }
    if (l_280)
    {
        char *l_618 = &g_109;
        unsigned char *l_621 = (void*)0;
        unsigned char *l_622 = &g_87;
        int *l_623 = &g_66;
        int *l_631 = &g_171;
        int l_645 = (-1L);
        char l_682 = 0x10L;
        (*l_623) = (safe_mul_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_s((safe_rshift_func_uint16_t_u_u(p_15, 13)), 4)), (p_15 >= ((((*l_622) = (((void*)0 != l_618) < (((((p_15 ^ ((g_192 = (((p_15 != (safe_div_func_int32_t_s_s((0x7FE0L != g_212), (*g_370)))) <= 0L) && (*g_370))) & (*g_575))) , (void*)0) == &g_171) , 0xE4DCL) && (***g_127)))) == p_15) , 4294967293UL))));
        (*l_623) ^= 1L;
        (*l_631) &= (safe_lshift_func_uint16_t_u_u((p_15 >= ((*g_128) == (g_626 , (((*l_623) ^ (p_15 | ((((*g_129) > (func_35((*g_545), (((g_78 = (safe_div_func_int8_t_s_s((g_629 != &g_630), 0x18L))) == (*l_623)) || (*p_16))) ^ 0x04L)) | (*l_623)) ^ 0xDA6D2872L))) , (**g_127))))), p_15));
        if ((((*l_455) = (((((safe_lshift_func_uint16_t_u_s(g_87, (*l_623))) ^ (safe_add_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u(((*p_16) <= ((safe_lshift_func_int16_t_s_u((((((safe_rshift_func_int16_t_s_u(((func_35((p_15 , ((func_35((((((*l_631) = (*p_16)) , ((p_15 < 65535UL) || ((void*)0 == l_623))) > p_15) , p_15), p_15) , 249UL) || l_644)), p_15) >= 0xECA3DA52L) , 8L), p_15)) , g_626) || p_15) <= 0xEAL) , (**g_128)), 7)) >= (**g_369))), g_318)), 1L))) , p_15) ^ p_15) || l_645)) , 0xAB4019FCL))
        {
            int l_654 = 0x4628319CL;
            int l_655 = (-7L);
            int l_695 = (-10L);
            unsigned short *l_696 = &g_162;
            char ***l_697 = &g_574;
            if (((*p_16) <= 0UL))
            {
                (*l_631) = (safe_rshift_func_int8_t_s_s((-1L), 0));
                (*p_14) = l_658;
            }
            else
            {
                unsigned l_659 = 4294967295UL;
                int l_686 = 1L;
                (*l_658) = (*p_16);
                if (l_659)
                {
                    (*l_658) ^= func_43(((*l_455) = func_35(((g_409 ^ g_66) , (-1L)), g_4)));
                }
                else
                {
                    (*l_658) = l_659;
                    return p_16;
                }
                if ((safe_rshift_func_uint8_t_u_s(((void*)0 != &g_79), 6)))
                {
                    (*l_623) &= (*l_631);
                }
                else
                {
                    unsigned short *l_683 = &g_162;
                    unsigned char *l_684 = (void*)0;
                    unsigned char *l_685 = &g_185;
                    l_686 ^= (safe_lshift_func_uint8_t_u_u(((safe_lshift_func_uint8_t_u_s(((*l_622) = g_135), ((safe_sub_func_int8_t_s_s((((*l_685) = (safe_sub_func_int16_t_s_s(p_15, ((safe_lshift_func_int8_t_s_u(((((*l_683) = ((*l_455) ^= ((safe_div_func_uint16_t_u_u(((0xFD2DB94DL | (((void*)0 != &g_574) || (((*l_658) == (0x44EEL != (((safe_mod_func_int16_t_s_s(((p_15 | (safe_rshift_func_int16_t_s_s(((l_654 >= p_15) == p_15), (*g_129)))) & p_15), g_185)) , p_15) , 0x7308L))) ^ 0xEE50L))) != l_682), p_15)) == 0x027FEC2BL))) , (*l_631)) , p_15), (*l_658))) >= p_15)))) , 0L), (*l_623))) >= 0x9EDDL))) == p_15), g_42));
                    (*l_623) = ((void*)0 != l_687);
                    (*l_658) = (*p_16);
                    for (g_626 = (-10); (g_626 < 23); g_626 = safe_add_func_int32_t_s_s(g_626, 7))
                    {
                        int *l_692 = &g_79;
                        short *l_693 = (void*)0;
                        short *l_694 = (void*)0;
                        (*p_14) = &l_645;
                        (*l_623) = (0x68L ^ ((+(safe_sub_func_int8_t_s_s(((((*p_16) , (l_655 ^ (((*l_692) = ((*g_545) &= p_15)) , ((((***g_127) = (l_695 ^= (**g_128))) | ((((*g_67) = 1L) , l_685) == (void*)0)) ^ 251UL)))) < p_15) , p_15), l_654))) > p_15));
                    }
                }
            }
            (*l_623) = func_43(((((****l_324) = p_15) | ((((*l_696) ^= ((*l_455) = 65533UL)) , ((*l_697) = (void*)0)) != (void*)0)) , (p_15 ^ ((*l_631) || (safe_lshift_func_int8_t_s_u(((*l_631) |= 0xC0L), func_43((((((0xC5E8L & ((*l_623) = (safe_rshift_func_uint16_t_u_s((safe_mod_func_int16_t_s_s(((*p_16) > (*l_658)), 0x0F28L)), 11)))) >= (*g_575)) < 4L) , 0xBA1D3AFFL) , p_15))))))));
        }
        else
        {
            int **l_704 = (void*)0;
            (*p_14) = &g_171;
        }
    }
    else
    {
        char l_705 = 6L;
        (*l_658) = (*p_16);
        l_705 &= 0x24EE6B65L;
        for (g_78 = 0; (g_78 != 25); ++g_78)
        {
            short l_712 = 0x2A42L;
            unsigned short l_713 = 65529UL;
            unsigned char *l_714 = &g_185;
            int *l_715 = &g_66;
            (*l_715) &= (((((((*g_575) = (safe_div_func_int16_t_s_s(((g_79 || (l_712 == (((*l_714) ^= (((*l_351) = (*g_629)) == (l_713 , (*g_629)))) != func_35(p_15, p_15)))) | g_626), 1L))) || 0x5DL) > (*l_658)) == l_705) || p_15) < l_713);
            return p_16;
        }
        (*p_14) = l_716;
    }
    return &g_171;
}







static int ** func_17(int p_18)
{
    unsigned short l_260 = 0x1DC7L;
    unsigned short *l_263 = &g_264;
    unsigned short l_267 = 0xB765L;
    int *l_268 = &g_66;
    int *l_269 = (void*)0;
    int *l_270 = &g_89;
    unsigned char *l_273 = &g_185;
    p_18 = (func_35(func_29((+l_260), g_185), l_260) , 0xA2BBC161L);
    (*l_270) = ((*l_268) = ((safe_div_func_uint8_t_u_u(func_43((g_79 , l_260)), func_35(g_212, ((*l_263) ^= 0UL)))) , (safe_div_func_int32_t_s_s((l_267 = ((p_18 || (l_263 != (**g_127))) && g_212)), g_212))));
    (*l_270) &= (safe_add_func_int16_t_s_s((((((g_81 , &g_87) == l_273) == (*g_129)) >= p_18) ^ (safe_rshift_func_int8_t_s_s(0xC8L, 4))), (func_35(p_18, (safe_add_func_int16_t_s_s(func_35((*l_268), (&l_260 == &l_260)), p_18))) > p_18)));
    for (g_185 = 0; (g_185 != 48); ++g_185)
    {
        if (p_18)
            break;
    }
    return &g_67;
}







static int func_29(unsigned p_30, unsigned p_31)
{
    int **l_239 = &g_67;
    int **l_241 = (void*)0;
    int *l_243 = &g_89;
    int **l_242 = &l_243;
    int *l_244 = &g_89;
    char *l_245 = &g_109;
    char *l_246 = &g_212;
    unsigned short l_255 = 0x3866L;
    unsigned short *l_256 = (void*)0;
    unsigned short *l_257 = &g_162;
    unsigned short l_258 = 0x88D5L;
    int *l_259 = &g_89;
    (*l_242) = ((*l_239) = func_55(l_239, g_66, (3L | (safe_unary_minus_func_int32_t_s(0xBCD35E6BL))), (g_162 >= (g_4 <= p_31))));
    l_244 = (void*)0;
    (*l_239) = func_55(&l_244, (((p_31 || p_31) | p_30) , g_78), g_81, g_79);
    (*l_259) = ((p_30 ^ 4UL) >= (+((((((l_245 != l_246) < g_109) >= (((g_81 = (safe_mod_func_int8_t_s_s((((safe_rshift_func_int8_t_s_s(((*l_246) = (safe_rshift_func_uint16_t_u_u(((*l_257) = (func_35(((safe_div_func_uint16_t_u_u(0xAD94L, l_255)) == p_31), ((((void*)0 == &g_79) & p_31) > p_31)) , 65535UL)), g_78))), 6)) >= 3UL) < p_31), p_30))) && p_31) && l_258)) , 0x3F2CL) < p_31) , 0xEB63L)));
    return p_31;
}







static unsigned func_32(unsigned short p_33, int p_34)
{
    char l_39 = 4L;
    short *l_40 = (void*)0;
    short *l_41 = &g_42;
    int l_45 = 0L;
    int *l_170 = &g_171;
    int **l_173 = &l_170;
    int ***l_172 = &l_173;
    short ***l_197 = &g_128;
    short ***l_198 = &g_128;
    unsigned *l_200 = &g_78;
    char l_211 = 0x95L;
    if (((func_35(p_33, l_39) ^ (((*l_41) = g_4) < (func_43((l_45 = g_4)) <= ((*l_170) = (safe_sub_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s(5L, 3)), g_4)))))) < (((*l_172) = &l_170) == (void*)0)))
    {
        unsigned *l_175 = &g_78;
        unsigned **l_174 = &l_175;
        int l_182 = 6L;
        unsigned char *l_183 = &g_87;
        unsigned char *l_184 = &g_185;
        short *l_188 = (void*)0;
        int l_189 = 0L;
        unsigned char *l_190 = (void*)0;
        unsigned char *l_191 = &g_192;
        int *l_193 = (void*)0;
        int *l_194 = &g_79;
        short ***l_195 = &g_128;
        short ****l_196 = &l_195;
        char l_199 = 2L;
        (*l_170) &= (((*l_174) = &g_81) == (l_200 = &g_78));
        return p_33;
    }
    else
    {
        unsigned char l_205 = 255UL;
        short *l_210 = &g_42;
        int *l_213 = (void*)0;
        int *l_214 = (void*)0;
lbl_228:
        l_45 = (safe_div_func_uint16_t_u_u((+((safe_div_func_int32_t_s_s((((((***l_197) = (l_205 > (g_109 , ((**l_173) |= (**g_128))))) , p_33) , 0x11D5L) & (safe_add_func_uint32_t_u_u((((safe_sub_func_uint32_t_u_u((p_33 < (((*l_200) = ((((l_210 == (**g_127)) > 0xFCL) <= p_33) <= g_42)) || g_89)), l_211)) > p_34) && p_34), g_79))), p_33)) < p_34)), g_212));
        for (g_192 = 0; (g_192 == 37); ++g_192)
        {
            unsigned l_227 = 0x5FCFD512L;
            if (g_66)
                break;
            for (p_34 = 0; (p_34 == 22); p_34 = safe_add_func_uint8_t_u_u(p_34, 5))
            {
                int **l_219 = &l_214;
                if (g_109)
                    break;
                (*l_219) = func_55((g_220 = l_219), (g_66 <= (safe_rshift_func_uint16_t_u_s(((func_35(p_33, (4UL | (((g_87 == p_34) && (0xC8L && (safe_rshift_func_uint8_t_u_u(((func_35(l_227, p_33) , g_171) , 0x48L), 4)))) != g_87))) && l_227) ^ l_227), 12))), p_34, g_135);
                if (g_162)
                    goto lbl_228;
                (*l_219) = (void*)0;
            }
            (***l_172) = ((safe_lshift_func_int16_t_s_u(((((safe_rshift_func_int16_t_s_u((g_66 & g_81), 9)) >= (((safe_rshift_func_uint8_t_u_s(p_34, (safe_rshift_func_int8_t_s_s(((p_33 && ((*l_170) == (-6L))) >= (p_34 , p_33)), g_117)))) , &p_34) == (void*)0)) | 0xCEC6276AL) , p_33), 12)) , 0xD3951EFEL);
            p_34 ^= 0x8F125701L;
        }
    }
    return p_34;
}







static int func_35(int p_36, unsigned short p_37)
{
    return p_37;
}







static int func_43(unsigned short p_44)
{
    int *l_47 = (void*)0;
    int **l_46 = &l_47;
    int **l_48 = (void*)0;
    int **l_49 = (void*)0;
    int **l_50 = (void*)0;
    int **l_51 = (void*)0;
    int **l_52 = (void*)0;
    int **l_53 = (void*)0;
    int **l_54 = &l_47;
    int l_64 = 0x772BE76DL;
    int l_165 = 0x69263B3EL;
    l_46 = (void*)0;
    (*l_54) = l_47;
    (*l_54) = func_55(&l_47, g_4, g_4, (g_4 , ((g_4 , p_44) ^ ((safe_div_func_int16_t_s_s((p_44 <= (safe_div_func_uint16_t_u_u(g_4, func_35((p_44 , g_4), l_64)))), p_44)) >= (-1L)))));
    return l_165;
}







static int * func_55(int ** p_56, unsigned p_57, unsigned char p_58, unsigned char p_59)
{
    int l_70 = (-3L);
    int l_85 = 0xCA0F9639L;
    int *l_91 = &g_89;
    short *l_116 = &g_117;
    short *l_119 = &g_117;
    short **l_118 = &l_119;
    short *l_121 = &g_117;
    short **l_120 = &l_121;
    unsigned short l_136 = 0xD9B7L;
    unsigned short *l_160 = &l_136;
    unsigned short *l_161 = &g_162;
    unsigned *l_163 = (void*)0;
    unsigned *l_164 = &g_78;
    if ((g_4 & p_57))
    {
        int *l_65 = &g_66;
        (*l_65) ^= (-1L);
        g_67 = &g_4;
    }
    else
    {
        int l_75 = (-1L);
        int *l_80 = (void*)0;
        int *l_82 = &l_70;
        unsigned char *l_86 = &g_87;
        int *l_88 = &g_89;
        int *l_90 = &g_66;
        unsigned l_103 = 0UL;
        short ***l_112 = (void*)0;
        for (p_59 = 10; (p_59 == 39); p_59 = safe_add_func_uint8_t_u_u(p_59, 1))
        {
            return &g_4;
        }
        l_70 = p_57;
        if ((safe_sub_func_int16_t_s_s(g_66, ((func_35(g_4, func_35((safe_mod_func_int32_t_s_s(l_75, ((*l_88) |= (func_35((safe_rshift_func_uint8_t_u_s((g_79 = (g_78 |= l_75)), (((*l_82) ^= (g_81 |= p_58)) > (safe_mod_func_uint8_t_u_u(p_59, g_4))))), (g_66 == ((*l_86) = l_85))) || g_78)))), g_66)) && g_81) >= g_4))))
        {
            l_91 = l_90;
        }
        else
        {
            short *l_94 = (void*)0;
            short **l_93 = &l_94;
            short ***l_92 = &l_93;
            int l_106 = 0x93AA688EL;
            (*p_56) = &g_4;
            (*l_92) = (void*)0;
            (*l_91) ^= 4L;
            for (g_78 = 10; (g_78 > 21); g_78++)
            {
                short l_102 = 0x4211L;
                (*l_82) ^= (((safe_lshift_func_uint8_t_u_u(((safe_unary_minus_func_int32_t_s(((*l_90) = (**p_56)))) != 0L), p_59)) | g_81) < ((g_89 , ((+(*l_91)) , &g_4)) == &g_89));
                (*p_56) = (*p_56);
                (*p_56) = &g_66;
                (**p_56) ^= (((func_35((((+((safe_sub_func_uint8_t_u_u(((p_57 , l_102) || p_57), g_79)) != g_89)) ^ l_103) != (!(safe_add_func_uint16_t_u_u(l_106, (safe_lshift_func_int8_t_s_u(((g_109 = (g_89 > 0UL)) & g_87), 5)))))), g_78) <= 0UL) < 0UL) ^ p_58);
            }
        }
        for (g_87 = (-21); (g_87 == 11); ++g_87)
        {
            short ****l_113 = &l_112;
            (*l_91) = (((*l_113) = l_112) == (void*)0);
        }
    }
    (*l_91) &= (safe_sub_func_uint16_t_u_u((l_116 == ((*l_120) = ((*l_118) = l_116))), p_58));
    if (((p_58 || 0xD2E8L) <= (((((*l_119) |= (g_89 >= (safe_rshift_func_int16_t_s_u((*l_91), 3)))) <= 0xD875L) > (func_35(g_79, (p_57 , (&l_70 != &l_70))) >= 5L)) >= 0xD2A9L)))
    {
        short ***l_125 = &l_120;
        short ****l_124 = &l_125;
        short l_130 = 7L;
        int *l_133 = (void*)0;
        int l_134 = 0x926F2DC1L;
        g_135 &= (l_134 |= ((func_35(func_35((((*l_91) |= (l_124 != (g_126 = (void*)0))) , (*l_91)), l_130), p_57) || (g_89 > (safe_mod_func_uint32_t_u_u((((**l_124) = (*g_127)) != &l_116), (*l_91))))) , (-1L)));
        (*l_91) = l_136;
        (*p_56) = (*p_56);
    }
    else
    {
        unsigned *l_141 = &g_78;
        int l_142 = 0x9E31D749L;
        char *l_143 = &g_109;
        int *l_144 = (void*)0;
        int *l_145 = &l_85;
        (*l_145) |= func_35((((*p_56) = &g_66) == &g_4), ((safe_rshift_func_int8_t_s_s((safe_sub_func_int8_t_s_s(func_35(p_59, ((void*)0 != l_141)), ((*l_143) = (((*l_91) > 4UL) && (((1UL != g_79) || g_4) == l_142))))), g_89)) & p_58));
        return &g_89;
    }
    if ((((***g_127) = ((safe_rshift_func_int8_t_s_u(((safe_div_func_int16_t_s_s(((safe_rshift_func_uint8_t_u_u(((safe_rshift_func_uint16_t_u_s((!(((void*)0 != &g_127) < (safe_lshift_func_uint16_t_u_u(((((*l_91) = ((*l_164) = ((((*l_161) |= (((((***g_127) , g_117) , &g_127) == (((void*)0 != &g_109) , &g_127)) , ((*l_160) ^= (safe_div_func_int8_t_s_s((safe_add_func_int8_t_s_s(p_58, 7L)), p_57))))) , p_58) > g_87))) , &p_58) != &p_59), g_81)))), 14)) || (*l_91)), 4)) == p_58), p_59)) > l_70), 3)) < 0x96L)) <= (-6L)))
    {
        return &g_89;
    }
    else
    {
        return (*p_56);
    }
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_42, "g_42", print_hash_value);
    transparent_crc(g_66, "g_66", print_hash_value);
    transparent_crc(g_78, "g_78", print_hash_value);
    transparent_crc(g_79, "g_79", print_hash_value);
    transparent_crc(g_81, "g_81", print_hash_value);
    transparent_crc(g_87, "g_87", print_hash_value);
    transparent_crc(g_89, "g_89", print_hash_value);
    transparent_crc(g_109, "g_109", print_hash_value);
    transparent_crc(g_117, "g_117", print_hash_value);
    transparent_crc(g_135, "g_135", print_hash_value);
    transparent_crc(g_162, "g_162", print_hash_value);
    transparent_crc(g_171, "g_171", print_hash_value);
    transparent_crc(g_185, "g_185", print_hash_value);
    transparent_crc(g_192, "g_192", print_hash_value);
    transparent_crc(g_212, "g_212", print_hash_value);
    transparent_crc(g_264, "g_264", print_hash_value);
    transparent_crc(g_318, "g_318", print_hash_value);
    transparent_crc(g_371, "g_371", print_hash_value);
    transparent_crc(g_409, "g_409", print_hash_value);
    transparent_crc(g_495, "g_495", print_hash_value);
    transparent_crc(g_546, "g_546", print_hash_value);
    transparent_crc(g_626, "g_626", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
