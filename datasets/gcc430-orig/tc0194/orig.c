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
   int f0;
   int f1;
};

union U1 {
   char * volatile f0;
};

union U2 {
   int f0;
   short f1;
   volatile unsigned short f2;
};


static char g_21 = (-9L);
static char g_32 = 0x62L;
static char * volatile g_31 = &g_32;
static union U1 g_55 = {0};
static int g_79 = 2L;
static int * volatile g_78 = &g_79;
static unsigned short g_91 = 1UL;
static int *g_94 = &g_79;
static int ** volatile g_93 = &g_94;
static union U2 g_115 = {0x317453A3L};
static union U2 *g_117 = &g_115;
static union U2 ** volatile g_116 = &g_117;
static int g_149 = (-1L);
static union U1 g_190 = {0};
static union U1 g_191 = {0};
static union U1 g_195 = {0};
static char g_218 = 0xF3L;
static union U2 ** volatile g_235 = &g_117;
static volatile union U2 g_240 = {0xF4DB05CAL};
static union U1 *g_257 = &g_190;
static union U1 ** volatile g_256 = &g_257;
static int g_280 = 0xA5F56C54L;
static union U1 g_281 = {0};
static char g_283 = 0x5CL;
static char *g_282 = &g_283;
static union U1 g_304 = {0};
static unsigned char g_307 = 0x4FL;
static int g_310 = (-2L);
static int * volatile g_309 = &g_310;
static volatile union U0 g_325 = {0xAEFF7825L};
static int ** volatile g_326 = &g_94;
static unsigned short *g_334 = (void*)0;
static unsigned short **g_333 = &g_334;
static unsigned short *** volatile g_332 = &g_333;
static volatile union U2 g_342 = {-2L};
static short g_387 = 2L;
static union U0 g_394 = {0xFD47A405L};
static int * volatile g_399 = &g_79;
static volatile unsigned g_402 = 1UL;
static volatile unsigned char g_417 = 0x5DL;
static volatile unsigned char *g_416 = &g_417;
static volatile unsigned char **g_415 = &g_416;
static unsigned g_432 = 4294967288UL;
static int ** volatile g_439 = &g_94;
static volatile union U2 g_450 = {0x73AB003CL};
static unsigned g_466 = 4294967286UL;
static int * volatile g_468 = &g_310;
static volatile union U0 *g_487 = &g_325;
static volatile union U0 **g_486 = &g_487;
static union U1 g_490 = {0};
static union U2 *** volatile g_528 = (void*)0;
static int ** volatile g_531 = &g_94;
static union U1 ** volatile g_536 = &g_257;
static int ** volatile g_571 = (void*)0;
static int ** volatile g_572 = &g_94;
static int ** volatile g_576 = &g_94;
static int ** volatile g_578 = &g_94;
static union U0 g_595 = {0x91B66AF2L};
static int * volatile g_597 = &g_310;
static volatile unsigned **g_616 = (void*)0;
static volatile unsigned *** volatile g_615 = &g_616;
static short g_632 = (-5L);
static volatile short * volatile g_657 = &g_450.f1;
static volatile short * volatile *g_656 = &g_657;
static volatile short * volatile * volatile *g_655 = &g_656;
static unsigned short *** volatile g_682 = &g_333;
static volatile short g_687 = 0x36D5L;
static union U2 g_691 = {0xEB180F38L};
static union U2 *g_693 = (void*)0;
static union U2 g_698 = {1L};
static volatile union U1 g_709 = {0};
static short g_730 = 0x5F4DL;
static int ** volatile g_780 = &g_94;
static volatile union U2 g_791 = {0x0A621B5AL};
static unsigned short g_806 = 0x7119L;



static short func_1(void);
static unsigned char func_14(char * p_15, char p_16, int p_17, short p_18, char * p_19);
static short func_24(unsigned char p_25, char p_26, unsigned short p_27, int p_28);
static int func_29(char p_30);
static char func_37(char * p_38);
static char * func_39(unsigned char p_40, char * p_41);
static unsigned char func_42(unsigned p_43, char * p_44);
static union U1 func_49(char * p_50, unsigned char p_51, int p_52, unsigned p_53);
static int func_56(unsigned char p_57, int p_58, unsigned char p_59, short p_60);
static char * func_68(unsigned p_69, unsigned char p_70, unsigned p_71, unsigned char p_72, int p_73);
static short func_1(void)
{
    unsigned l_2 = 0x6DEEC541L;
    unsigned l_9 = 4294967290UL;
    char *l_20 = &g_21;
    unsigned l_45 = 0x16E289AAL;
    unsigned char *l_375 = &g_307;
    int l_569 = 0L;
    unsigned char l_606 = 0x34L;
    int l_607 = 0x08942A83L;
    unsigned *l_608 = &g_432;
    unsigned char **l_617 = &l_375;
    union U0 l_620 = {0xB2B44CFBL};
    union U1 *l_621 = (void*)0;
    int *l_635 = &g_79;
    char *l_673 = &g_218;
    unsigned l_713 = 7UL;
    union U0 *l_723 = &g_595;
    unsigned l_735 = 4294967293UL;
    unsigned char l_762 = 5UL;
    int **l_795 = &l_635;
    union U0 l_796 = {0x8ABF4DC7L};
    unsigned char l_799 = 0x86L;
    unsigned l_807 = 0x71D6308FL;
    short l_808 = 0xC402L;
    l_607 = ((l_2 , (((((safe_add_func_uint32_t_u_u((((safe_mul_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u(l_9, (((safe_mul_func_uint16_t_u_u((l_569 = (safe_lshift_func_uint8_t_u_s(func_14(l_20, ((*l_20) = l_2), l_2, (safe_sub_func_uint8_t_u_u(((!(func_24((func_29(((g_31 != l_20) , (safe_mod_func_int8_t_s_s((safe_add_func_int8_t_s_s(func_37(func_39(((*l_375) = (func_42((l_45 > ((safe_unary_minus_func_uint32_t_u((((safe_add_func_int32_t_s_s((func_49(&g_32, g_32, g_32, l_9) , 0x1CD0E785L), g_280)) < g_280) && l_45))) > 0x01L)), g_282) > g_283)), l_20)), 0L)), l_569)))) , 0UL), l_569, l_45, l_9) || l_569)) , (**g_415)), 0xABL)), g_282), l_2))), l_606)) <= l_606) | 0x7900L))), l_45)) ^ l_9) > 0L), 4294967293UL)) && (**g_415)) , (void*)0) != (void*)0) , (**g_572))) && g_240.f2);

    ;
        ;
        if ((((*l_608) = l_569) & (((safe_mod_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u(((((&g_116 == ((((safe_mul_func_int16_t_s_s((((void*)0 != g_615) < (((g_280 > (((*g_415) == ((*l_617) = &l_606)) , l_606)) && 0UL) & g_149)), g_115.f1)) >= g_283) == 0xA835L) , (void*)0)) && l_569) >= l_607) && l_45), g_149)), 0x9818L)) | 0x8FL) && l_569)))
    {
        union U1 *l_618 = &g_490;
        int l_622 = 0xA1C0FA9CL;
        if ((**g_326))
        {
            return g_325.f0;
        }
        else
        {
            union U1 **l_619 = &g_257;
            (*g_94) = (((*l_619) = l_618) == (l_620 , l_621));

            ;
            return l_622;
        }
    }
    else
    {
        char l_625 = 0x83L;
        union U2 *l_690 = &g_691;
        short l_701 = 1L;
        int *l_710 = &g_698.f0;
        int **l_714 = &l_710;
        union U0 *l_721 = &l_620;
        short l_737 = 1L;
        char l_775 = 0x23L;
        for (g_91 = 0; (g_91 != 42); ++g_91)
        {
            unsigned short l_633 = 0x84D4L;
            unsigned *l_662 = &g_432;
            char *l_675 = &g_218;
            int l_702 = 0xC6324CF9L;
            int *l_712 = (void*)0;
            if (l_625)
                break;
        }

        (*l_714) = (*g_578);

        ;
        if ((safe_lshift_func_int8_t_s_u((safe_sub_func_int8_t_s_s((func_42(g_595.f1, l_375) >= (*g_416)), (safe_lshift_func_uint8_t_u_u(g_310, 4)))), ((*l_375) = g_91))))
        {
            union U0 **l_722 = &l_721;
            (*l_722) = l_721;
            l_723 = (void*)0;

            ;
        }
        else
        {
            short l_734 = 3L;
            char *l_740 = (void*)0;
            int *l_742 = (void*)0;
            unsigned l_751 = 0x505505BEL;
            for (l_45 = (-2); (l_45 == 46); l_45 = safe_add_func_int32_t_s_s(l_45, 2))
            {
                unsigned ***l_731 = (void*)0;
                unsigned short *l_736 = &g_91;
                (**l_714) = ((g_432 = (safe_lshift_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s(func_29((g_730 , (((((*l_736) = (((void*)0 == l_731) > (((safe_rshift_func_int8_t_s_u(((4L < l_734) | (**g_656)), 1)) & l_735) , ((**g_486) , (**g_578))))) <= l_737) != (-5L)) ^ 0xF96EL))), g_595.f1)), g_32))) && (*l_710));
            }
            for (l_625 = 0; (l_625 > (-11)); l_625 = safe_sub_func_uint16_t_u_u(l_625, 5))
            {
                (**l_714) = 0x0223DF25L;
            }
            if (((*g_31) && func_14((l_740 = &g_283), (*l_635), (*l_635), (*l_710), &g_283)))
            {
                unsigned *l_741 = &l_9;
                unsigned char l_761 = 0x20L;
                (*l_714) = (((*l_741) = func_29(l_734)) , l_742);

                ;
                for (l_737 = 0; (l_737 < 9); l_737++)
                {
                    char l_756 = 0L;
                    for (g_280 = 0; (g_280 == (-14)); g_280 = safe_sub_func_int32_t_s_s(g_280, 3))
                    {
                        (*g_486) = (*g_486);
                    }
                    if ((safe_mod_func_int8_t_s_s(func_56((**g_415), ((*g_94) = (safe_mul_func_uint8_t_u_u(g_394.f0, ((void*)0 != &g_149)))), l_751, func_42(g_283, l_740)), 1UL)))
                    {
                        union U2 **l_767 = (void*)0;
                        union U2 **l_769 = &g_693;
                        union U2 ***l_768 = &l_769;
                        (**g_326) = (((((((*l_375) = (((void*)0 != &g_333) < (safe_rshift_func_uint16_t_u_s((safe_sub_func_uint32_t_u_u((~(0xEFL > (l_756 , ((safe_mod_func_uint32_t_u_u(l_756, (-1L))) , 1L)))), (safe_add_func_int8_t_s_s((*g_31), func_56(l_761, l_761, g_698.f1, l_756))))), 1)))) ^ (*g_282)) , 1L) >= l_762) >= g_32) != 255UL);
                        (*g_94) = (safe_rshift_func_int8_t_s_u((safe_add_func_int16_t_s_s((**g_656), l_756)), (!(l_767 != ((*l_768) = (void*)0)))));

                        ;
                        if ((**g_572))
                            continue;
                    }
                    else
                    {
                        (*l_635) = (*l_635);
                        if ((*g_399))
                            continue;
                    }
                    return (***g_655);
                }
            }
            else
            {
                int *l_772 = &g_149;
                union U0 **l_776 = &l_721;
                int l_783 = (-6L);
                union U2 *l_792 = &g_115;
                for (l_751 = 1; (l_751 > 5); l_751 = safe_add_func_uint32_t_u_u(l_751, 2))
                {
                    int l_777 = (-1L);
                    unsigned char *l_790 = &l_762;
                    l_772 = l_772;
                }
                (*l_710) = ((**l_714) ^ (g_417 , ((**g_780) != (g_283 || (safe_mul_func_int8_t_s_s((&g_282 == (g_91 , &l_740)), (0L < (g_91 , 0x94L))))))));
            }

            ;
            ;
        }

        ;
        ;
    }

    ;
    ;
    (*l_795) = (*g_531);

    ;
    (**l_795) = (func_42((l_796 , ((g_466 = ((safe_mul_func_uint16_t_u_u(l_799, (*l_635))) && (((((safe_mod_func_int16_t_s_s(0xAC71L, func_42((**l_795), (func_42((**l_795), ((safe_mul_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s((*l_635), 4)), (((&g_332 != ((func_24((**l_795), g_806, (**l_795), l_807) , 248UL) , &g_682)) != (*l_635)) , (*l_635)))) , &g_283)) , (void*)0)))) , &l_795) == (void*)0) , (*l_635)) , (-9L)))) , l_808)), &g_21) & (*g_282));
    return (**l_795);
}







static unsigned char func_14(char * p_15, char p_16, int p_17, short p_18, char * p_19)
{
    char l_581 = 0xF1L;
    unsigned l_584 = 8UL;
    unsigned short ***l_592 = &g_333;
    unsigned short ****l_591 = &l_592;
    unsigned short ***l_593 = &g_333;
    union U0 *l_594 = &g_595;
    unsigned char l_596 = 5UL;
    short *l_604 = (void*)0;
    int **l_605 = (void*)0;
    (*g_597) = (safe_add_func_int32_t_s_s(l_581, (safe_mod_func_uint16_t_u_u((func_29(l_584) ^ func_42((safe_mul_func_int8_t_s_s(((safe_lshift_func_int8_t_s_s(((safe_sub_func_int16_t_s_s(p_17, (((p_16 | (((*l_591) = &g_333) == (g_115.f1 , l_593))) > ((p_18 , (*g_486)) == l_594)) == g_283))) > g_280), l_596)) ^ g_310), (*g_282))), &g_218)), p_18))));
    (*g_94) = (safe_mul_func_int8_t_s_s(((g_21 , (**g_572)) | ((l_584 , (func_42((safe_lshift_func_uint16_t_u_s((safe_mod_func_uint32_t_u_u((((func_42((((!((l_604 != (void*)0) | (-10L))) | g_218) , ((p_18 , l_605) == (void*)0)), &g_21) | 1UL) , p_16) < 0x6AA0L), (*g_94))), g_280)), &l_581) ^ g_595.f1)) & 0x3DL)), g_595.f0));
    return p_17;
}







static short func_24(unsigned char p_25, char p_26, unsigned short p_27, int p_28)
{
    int *l_577 = &g_310;
    (*g_578) = l_577;

    ;
    return g_342.f2;
}







static int func_29(char p_30)
{
    int *l_570 = &g_310;
    (*g_572) = l_570;

    ;
    for (g_394.f1 = (-26); (g_394.f1 >= 15); g_394.f1++)
    {
        int *l_575 = &g_79;
        (*g_576) = l_575;

        ;
        (*l_575) = p_30;
    }

    ;
    return (*l_570);
}







static char func_37(char * p_38)
{
    union U2 *l_537 = &g_115;
    union U2 **l_538 = &l_537;
    unsigned char *l_553 = &g_307;
    unsigned char **l_552 = &l_553;
    char l_555 = 0x55L;
    unsigned short l_556 = 0x3594L;
    int l_563 = 0L;
    union U0 *l_567 = &g_394;
    union U0 **l_568 = &l_567;
    (*l_538) = l_537;
    for (g_283 = 0; (g_283 != 1); g_283 = safe_add_func_uint32_t_u_u(g_283, 7))
    {
        char l_551 = (-1L);
        unsigned char **l_554 = (void*)0;
        int l_557 = 0xEC53A727L;
        unsigned *l_558 = (void*)0;
        unsigned *l_559 = (void*)0;
        unsigned *l_560 = &g_466;
        unsigned short *l_561 = &g_91;
        union U2 **l_562 = &l_537;
        unsigned short *l_564 = (void*)0;
        unsigned short *l_565 = (void*)0;
        unsigned short *l_566 = &l_556;
        (*g_399) = (safe_add_func_uint16_t_u_u(((*l_566) = (safe_mod_func_int32_t_s_s((safe_rshift_func_int8_t_s_u((l_563 = (safe_add_func_int32_t_s_s((safe_mod_func_int16_t_s_s((((((*l_561) = (l_551 <= func_56((func_42(((*l_560) = ((l_552 == (l_554 = &l_553)) ^ ((l_555 > func_42(g_79, ((((*l_553) = l_556) <= l_557) , &g_283))) ^ 0x9DAD21F8L))), &l_551) & 0x63DADC4BL), (*g_78), g_387, g_79))) ^ g_115.f1) , l_562) != &g_117), g_394.f1)), 1UL))), 2)), g_280))), 0x4A98L));

        ;
    }
    (*l_568) = l_567;
    return (*g_282);
}







static char * func_39(unsigned char p_40, char * p_41)
{
    unsigned char l_378 = 0x5AL;
    unsigned short *l_379 = &g_91;
    unsigned short l_397 = 0UL;
    int *l_400 = &g_149;
    int l_423 = 0x51A9A1EEL;
    union U1 *l_424 = &g_190;
    unsigned short l_430 = 0UL;
    unsigned short ***l_436 = &g_333;
    unsigned short ***l_437 = &g_333;
    union U0 l_444 = {0L};
    unsigned char *l_460 = &l_378;
    unsigned char **l_459 = &l_460;
    (*g_78) = (safe_mul_func_int8_t_s_s((p_40 & g_240.f1), (l_378 >= (l_379 == (*g_333)))));
    for (g_218 = 2; (g_218 > (-15)); --g_218)
    {
        int **l_384 = (void*)0;
        int ***l_385 = &l_384;
        short *l_386 = &g_387;
        union U0 *l_393 = &g_394;
        union U0 **l_395 = &l_393;
        int *l_396 = (void*)0;
        int *l_398 = (void*)0;
        char *l_401 = &g_32;
        (*g_399) = ((safe_lshift_func_int16_t_s_u(func_56((((*l_385) = l_384) == &g_78), (*g_78), g_115.f0, ((*l_386) = p_40)), (safe_rshift_func_int8_t_s_u((safe_add_func_int16_t_s_s((safe_unary_minus_func_int8_t_s((((p_40 > 0x5BC0205DL) & ((g_310 = (((*l_395) = l_393) != (void*)0)) != l_397)) <= 0x20L))), p_40)), g_394.f0)))) && g_342.f2);
        (*g_93) = l_400;

        ;
        (*g_94) = p_40;
        return l_401;


    }
    (*l_400) = (((*l_379) = (p_40 || g_402)) , 0x4B3DB909L);
    if (((0xC3L && g_115.f2) > (*l_400)))
    {
        unsigned char *l_414 = (void*)0;
        unsigned char **l_413 = &l_414;
        int l_421 = (-1L);
        short l_422 = 0x8C0DL;
        union U1 **l_425 = &g_257;
        unsigned *l_431 = &g_432;
        short *l_435 = &g_115.f1;
        l_423 = ((safe_mod_func_int16_t_s_s(((p_40 ^ (safe_sub_func_uint16_t_u_u(((safe_sub_func_int16_t_s_s(((safe_mul_func_int16_t_s_s(((p_40 >= g_32) < ((*l_400) = (l_413 != g_415))), g_280)) || g_342.f2), func_56(((safe_unary_minus_func_uint16_t_u(p_40)) >= (safe_rshift_func_uint8_t_u_s(g_115.f0, 7))), g_310, l_421, g_115.f0))) > p_40), 4L))) , 0x156BL), l_422)) , 0x96BEF712L);
        (*l_425) = l_424;

        ;
        if (((safe_rshift_func_int16_t_s_u(((safe_rshift_func_int8_t_s_u(l_430, 0)) == ((!(((*l_431) = ((void*)0 == &g_332)) > (safe_mod_func_int32_t_s_s(p_40, (((*l_435) = 0L) || (l_436 == (l_437 = l_436))))))) >= p_40)), 7)) && g_240.f0))
        {
            int *l_438 = &g_149;
            (*g_439) = l_438;

            ;
            (*l_438) = 0xBD0D2E66L;
        }
        else
        {
            int **l_440 = &l_400;
            (*l_440) = (void*)0;

            ;
            (*l_440) = &l_423;

            ;
        }


        ;
    }
    else
    {
        unsigned l_453 = 3UL;
        unsigned short ****l_477 = &l_437;
        short l_491 = 0x57A7L;
        int *l_506 = &g_115.f0;
        int *l_530 = &g_310;
        if (p_40)
        {
            short l_441 = (-6L);
            l_441 = ((*l_400) = p_40);
            (*l_400) = (safe_sub_func_uint32_t_u_u(g_342.f1, (*l_400)));
        }
        else
        {
            union U0 *l_445 = &g_394;
            int l_454 = (-10L);
            unsigned *l_464 = (void*)0;
            unsigned *l_465 = &g_466;
            char *l_467 = &g_218;
            short *l_473 = &g_387;
            int l_474 = (-7L);
            (*g_468) = ((*l_400) = (((*l_445) = l_444) , (safe_rshift_func_uint16_t_u_s(((safe_mul_func_uint8_t_u_u((g_450 , (safe_rshift_func_int16_t_s_s(l_453, (func_42((l_454 , ((*l_465) = (((*l_379) = (((((*l_400) = (safe_mod_func_int8_t_s_s((safe_mul_func_uint8_t_u_u(((l_459 == &l_460) , (((*g_415) == (((safe_unary_minus_func_uint32_t_u((~((safe_sub_func_uint16_t_u_u(p_40, (1UL & p_40))) > g_115.f1)))) || l_453) , &p_40)) , p_40)), 252UL)), 0xE8L))) != g_432) | l_454) <= (*g_416))) <= p_40))), l_467) ^ 0xB5618F28L)))), (*g_282))) == 253UL), p_40))));
            if ((l_454 & (safe_lshift_func_int16_t_s_s((func_56((((*l_400) | ((((safe_lshift_func_int16_t_s_u((l_474 = ((**g_256) , ((*l_473) = 0x3287L))), 10)) > (*l_400)) & (safe_rshift_func_int16_t_s_s(((l_477 == ((((p_40 && 0xCD8F6BCCL) , (g_394 , (*l_400))) ^ 1UL) , &l_436)) , p_40), g_307))) & g_79)) , (*g_416)), (*l_400), p_40, p_40) != p_40), g_394.f0))))
            {
lbl_507:
                for (g_91 = 8; (g_91 <= 17); ++g_91)
                {
                    (*l_400) = p_40;
                    if (p_40)
                        continue;
                    if (l_453)
                        continue;
                }
                return p_41;


            }
            else
            {
                int *l_480 = (void*)0;
                int **l_481 = (void*)0;
                int **l_482 = (void*)0;
                int **l_483 = &l_480;
                union U0 l_499 = {0x505C9C2BL};
                (*l_483) = l_480;
                if (g_310)
                    goto lbl_492;
lbl_492:
                l_454 = ((p_40 , ((*l_424) , l_473)) != (void*)0);
                if (((safe_add_func_int8_t_s_s(0x03L, (*g_416))) || (safe_rshift_func_uint8_t_u_s((((*g_282) = func_56(((*l_400) , p_40), (safe_rshift_func_int16_t_s_u((l_499 , (0xDCDECD84L > g_325.f0)), 13)), (safe_mul_func_int16_t_s_s((safe_lshift_func_int8_t_s_s((*l_400), (safe_rshift_func_int8_t_s_u((l_454 = (p_40 >= l_454)), 2)))), p_40)), g_115.f0)) > 0xE7L), l_453))))
                {
                    (*l_483) = l_506;

                    ;
                    if (g_115.f0)
                        goto lbl_507;
                }
                else
                {
                    int *l_517 = &g_79;
                    (*l_400) = ((*g_78) = ((l_444 , &g_309) == &g_399));
                    (*l_483) = &l_423;

                    ;
                    if (((safe_rshift_func_uint8_t_u_s((+((l_400 != (void*)0) , func_56((9L > ((safe_add_func_int16_t_s_s(((*l_400) == ((safe_sub_func_int32_t_s_s((safe_unary_minus_func_uint32_t_u(g_417)), ((*l_400) ^ ((((*l_473) = (-1L)) != ((g_149 > p_40) , 0x4770L)) == p_40)))) , l_454)), (*l_506))) ^ (*l_506))), p_40, g_91, p_40))), 3)) != 1UL))
                    {
                        union U1 *l_515 = &g_304;
                        union U1 **l_516 = &g_257;
                        (*l_516) = l_515;

                        ;
                    }
                    else
                    {
                        (*l_483) = l_517;

                        ;
                    }

                    ;
                    ;
                }

                ;
                ;
                for (g_91 = (-18); (g_91 == 48); g_91 = safe_add_func_int16_t_s_s(g_91, 2))
                {
                    unsigned **l_521 = &l_464;
                    unsigned ***l_520 = &l_521;
                    int *l_522 = &g_310;
                    (*l_520) = (void*)0;

                    ;
                    (*g_439) = l_522;

                    ;
                }


            }


            ;
            if (l_474)
            {
                union U2 **l_527 = &g_117;
                for (l_423 = (-10); (l_423 != (-11)); --l_423)
                {
                    for (g_149 = 0; (g_149 < 25); g_149++)
                    {
                        union U2 ***l_529 = &l_527;
                        (*l_529) = l_527;
                    }
                    (*l_400) = p_40;
                    (*g_531) = (l_530 = &g_149);

                    ;
                    ;
                    if ((*g_399))
                        break;
                }


                ;
                (*l_506) = (safe_lshift_func_uint16_t_u_u(0x0C4CL, 8));
            }
            else
            {
                l_474 = ((safe_lshift_func_uint8_t_u_u((*g_416), 6)) , (*l_506));
            }


            ;
            (*l_506) = ((*l_530) | (*l_530));
        }


        ;
        ;
        (*g_536) = l_424;

        ;
        (*l_400) = (-1L);
    }


    ;
    ;
    return &g_218;


}







static unsigned char func_42(unsigned p_43, char * p_44)
{
    unsigned short l_284 = 0UL;
    int l_285 = 0x15A1ACACL;
    l_285 = l_284;
    for (g_149 = 0; (g_149 == 2); ++g_149)
    {
        char l_311 = (-1L);
        union U1 *l_313 = &g_55;
        int *l_335 = &g_115.f0;
        unsigned l_354 = 4294967291UL;
        unsigned char *l_373 = (void*)0;
        unsigned char **l_372 = &l_373;
    }
    return l_284;
}







static union U1 func_49(char * p_50, unsigned char p_51, int p_52, unsigned p_53)
{
    short l_54 = (-3L);
    unsigned char l_76 = 9UL;
    unsigned char l_77 = 1UL;
    unsigned short l_84 = 0x634CL;
    unsigned short **l_166 = (void*)0;
    unsigned short ***l_165 = &l_166;
    int l_205 = (-1L);
    int **l_258 = &g_94;
    if ((((g_32 && p_51) > l_54) && 0x3BECL))
    {
        return g_55;


            }
    else
    {
        short l_67 = 0xAE22L;
        int *l_83 = &g_79;
lbl_95:
        if (func_56((safe_mod_func_int8_t_s_s((((*l_83) = ((p_52 ^ (((+(safe_lshift_func_int16_t_s_s((((safe_add_func_int8_t_s_s((((0x1140AE77L <= l_67) , func_68((p_52 >= l_54), (((&g_32 == p_50) == g_32) && (((safe_add_func_int32_t_s_s((l_54 ^ g_32), p_53)) > l_54) , l_76)), g_32, p_52, l_77)) == (void*)0), 9L)) | g_32) , 0xB722L), 1))) || l_77) != l_67)) , (*g_78))) , 0L), g_32)), l_54, g_32, l_84))
        {
            (*l_83) = ((-1L) & p_52);
            if (l_67)
                goto lbl_95;
        }
        else
        {
            (*g_93) = &p_52;

            ;
        }

        ;
        p_52 = p_51;
    }

    ;
    if (l_76)
    {
        short l_107 = 0x13C5L;
        unsigned short *l_110 = &l_84;
        for (l_54 = 0; (l_54 <= (-18)); l_54 = safe_sub_func_uint32_t_u_u(l_54, 6))
        {
            unsigned short **l_100 = (void*)0;
            for (l_76 = 15; (l_76 == 58); l_76 = safe_add_func_int8_t_s_s(l_76, 7))
            {
                unsigned short ***l_101 = (void*)0;
                unsigned short ***l_102 = &l_100;
                (*l_102) = l_100;
            }
        }
        (*g_94) = ((-8L) & (safe_lshift_func_uint8_t_u_s(g_91, (safe_add_func_uint8_t_u_u((((*p_50) <= (l_107 , (&l_84 != (void*)0))) >= ((((*l_110) = (safe_rshift_func_uint16_t_u_u(p_53, ((**g_93) == l_107)))) , 1L) , p_51)), 250UL)))));
    }
    else
    {
        int l_113 = 0x8FA76005L;
        union U2 *l_114 = &g_115;
        union U0 l_138 = {0xEB153474L};
        unsigned short ***l_177 = &l_166;
        unsigned char *l_207 = &l_77;
        unsigned char **l_206 = &l_207;
        unsigned l_208 = 1UL;
        int *l_216 = &g_115.f0;
        unsigned char l_244 = 0xA9L;
        short *l_249 = &g_115.f1;
        short *l_251 = (void*)0;
        union U1 *l_254 = &g_55;
        union U1 **l_255 = (void*)0;
        if ((safe_rshift_func_uint8_t_u_u(((g_79 , ((*g_94) = 0x796DE0D7L)) >= p_51), l_113)))
        {
            (*g_78) = (*g_78);
            if (l_113)
                goto lbl_118;
            (*g_116) = l_114;
lbl_118:
            (*g_94) = 0L;
            return g_55;



                    }
        else
        {
            int **l_119 = &g_94;
            unsigned short *l_123 = &g_91;
            unsigned short **l_122 = &l_123;
            int l_189 = (-5L);
            union U2 *l_198 = (void*)0;
            unsigned short l_209 = 1UL;
            unsigned l_210 = 0x547D1AE7L;
            (*l_119) = (*g_93);
            if (((safe_lshift_func_uint8_t_u_u((((*l_122) = (void*)0) == (void*)0), (**l_119))) , (**g_93)))
            {
                char l_126 = 0x0BL;
                unsigned char *l_129 = &l_77;
                unsigned char *l_140 = &l_76;
                unsigned char **l_139 = &l_140;
                unsigned short l_141 = 0UL;
                unsigned short *l_142 = &g_91;
                unsigned short ***l_164 = &l_122;
                unsigned short ****l_178 = &l_177;
                int l_179 = 0x6C188A16L;
                (**l_119) = (safe_mod_func_int16_t_s_s(0xF119L, ((*l_142) = func_56(l_126, (safe_sub_func_int32_t_s_s(func_56((+(1L > 0xCAL)), ((**l_119) = ((((((*l_129) = g_115.f2) && l_77) >= (safe_mul_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u((g_115.f0 != l_113), (+(safe_mod_func_int8_t_s_s((safe_mod_func_int16_t_s_s((((((*l_139) = (l_138 , (void*)0)) == &l_76) && g_91) || g_79), 0x9C67L)), (**l_119)))))), 0xF5L))) && l_141) , p_52)), g_32, p_51), p_51)), l_141, p_53))));

                ;
                for (l_141 = 0; (l_141 == 13); l_141++)
                {
                    int l_157 = 0xB75A479CL;
                    for (p_52 = (-2); (p_52 > (-20)); p_52--)
                    {
                        char *l_156 = &l_126;
                        int l_160 = 0x5C24141EL;
                        int *l_161 = &g_79;
                        l_157 = (safe_add_func_int32_t_s_s((((g_149 = g_32) == (safe_add_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u(p_53, (l_138.f1 && ((*l_156) = ((*p_50) , ((safe_add_func_uint32_t_u_u(g_115.f2, l_141)) <= (**l_119))))))), ((p_52 <= (&g_117 == (void*)0)) , 255UL)))) == 0xCE2CL), (*g_94)));
                        (*l_161) = (safe_lshift_func_int8_t_s_s(l_160, 2));
                    }
                    (*g_94) = ((safe_mul_func_int16_t_s_s(((l_164 != l_165) | (((safe_mod_func_uint16_t_u_u((func_56((**l_119), (((*l_129) = (safe_lshift_func_uint8_t_u_u(l_54, ((p_51 || g_115.f2) || ((*p_50) , l_84))))) == (0x3620L || g_149)), l_126, g_115.f0) & l_126), p_52)) & 0x5E9BC940L) , 0xE8705906L)), 65535UL)) | 0x91DFL);
                    if (l_141)
                        goto lbl_192;
                    if (p_51)
                        break;
                    if (l_113)
                        continue;
                }
lbl_192:
                if ((p_53 == ((func_56((safe_rshift_func_uint8_t_u_u((((safe_mod_func_uint16_t_u_u(((l_179 = (p_51 = (((&g_94 != l_119) && (func_56(((**g_116) , (func_56(g_115.f0, (((func_56((((*l_142) = (&l_166 == ((*l_178) = l_177))) < (((**l_119) || l_84) , l_126)), p_53, p_51, g_79) & l_126) > g_149) & 9UL), p_53, p_51) > p_53)), l_126, l_138.f1, l_138.f0) != 3UL)) > l_126))) != g_115.f0), g_32)) <= p_53) < (*p_50)), 0)), g_115.f1, p_52, p_53) , (void*)0) != &l_166)))
                {
                    unsigned short l_186 = 65533UL;
                    if ((l_126 ^ ((((*l_114) , (safe_rshift_func_int16_t_s_s(0L, (safe_rshift_func_uint8_t_u_s((safe_mul_func_uint16_t_u_u((l_186 || l_138.f1), (((l_54 , (**l_119)) & (((safe_lshift_func_uint16_t_u_u(p_53, p_52)) ^ 0xA292L) ^ 7L)) < l_189))), 6))))) < (-2L)) , (*p_50))))
                    {
                        return g_190;



                                            }
                    else
                    {
                        return g_191;



                                            }
                }
                else
                {
                    (*l_119) = (*g_93);
                }
                for (g_32 = 0; (g_32 > (-2)); g_32--)
                {
                    (*g_93) = &p_52;

                    ;
                    return g_195;



                                    }
            }
            else
            {
                unsigned l_204 = 4294967295UL;
                short *l_211 = &l_54;
                int *l_215 = &g_149;
                union U2 *l_232 = (void*)0;
                short *l_252 = &l_54;
                if ((((*l_211) = (~((safe_add_func_int16_t_s_s(((p_52 || ((!0UL) >= ((l_198 != (*g_116)) >= (((safe_lshift_func_uint8_t_u_s(func_56(func_56(((safe_mul_func_int8_t_s_s(g_115.f0, (safe_unary_minus_func_uint32_t_u(func_56(l_204, (l_209 = func_56(p_52, ((+((((((l_205 = (&p_52 != &g_79)) , 0x0D05L) , l_206) == (void*)0) == l_208) != (*p_50))) , 0x25B180E9L), g_149, l_84)), g_115.f1, l_210))))) <= (*p_50)), g_115.f0, p_53, l_204), l_204, g_115.f0, g_115.f1), 3)) , p_51) || 0L)))) | g_115.f0), g_149)) == g_115.f0))) && 0x62B2L))
                {
                    unsigned char l_214 = 1UL;
                    int *l_217 = &g_115.f0;
                    unsigned short *l_220 = &g_91;
                    unsigned short **l_219 = &l_220;
                    for (l_210 = 0; (l_210 >= 40); l_210 = safe_add_func_uint8_t_u_u(l_210, 1))
                    {
                        if (l_214)
                            break;
                        (*l_119) = l_215;

                        ;
                        if ((**l_119))
                            break;
                        (*l_119) = l_216;

                        ;
                    }

                    ;
                    (*l_119) = l_217;

                    ;
                    (*l_215) = (*g_94);
                    (*g_94) = (((*l_215) , &g_91) == ((*l_219) = ((*l_122) = ((((g_218 = (*l_215)) >= (*l_217)) <= p_52) , &g_91))));

                    ;
                }
                else
                {
                    return g_190;



                                    }

                ;
                ;
                for (g_79 = (-4); (g_79 > 18); g_79 = safe_add_func_int32_t_s_s(g_79, 3))
                {
                    unsigned short l_231 = 2UL;
                    int *l_248 = &g_79;
                    short **l_250 = &l_249;
                    short **l_253 = &l_211;
                }
            }

            ;
            ;
        }

        ;
        (*g_256) = l_254;

        ;
        return (**g_256);



            }

    (*l_258) = (*g_93);
    for (l_205 = 0; (l_205 == 15); l_205 = safe_add_func_uint8_t_u_u(l_205, 1))
    {
        unsigned char *l_277 = &l_77;
        short *l_278 = (void*)0;
        int l_279 = 0xA8C1EE95L;
        (*g_78) = ((func_56(g_240.f2, ((((**l_258) = (safe_mul_func_int8_t_s_s((((safe_rshift_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_s((safe_rshift_func_int8_t_s_s((safe_sub_func_uint8_t_u_u(p_51, (((safe_mul_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u((!((*l_277) = (0x7166L && (safe_mod_func_int32_t_s_s((~p_51), g_218))))), ((void*)0 != l_278))), l_279)) <= ((((void*)0 == &l_277) ^ 0xBCL) && g_280)) , p_53))), (*p_50))), 1)) <= g_32), p_51)) > p_53) < g_149), 0x6AL))) && 0x0EF8BEE2L) , p_51), g_115.f1, g_115.f0) < g_115.f0) != 4UL);
        (*l_258) = (*g_93);
        (**l_258) = 0x4F9FC258L;
    }
    return g_281;



    }







static int func_56(unsigned char p_57, int p_58, unsigned char p_59, short p_60)
{
    union U0 l_85 = {0x5732B805L};
    int *l_87 = (void*)0;
    int **l_86 = &l_87;
    unsigned short *l_90 = &g_91;
    short l_92 = 0x854EL;
    (*l_86) = (p_58 , (l_85 , &g_79));

    ;
    (**l_86) = (safe_lshift_func_uint16_t_u_u(((*l_90) = (**l_86)), 11));
    return l_92;
}







static char * func_68(unsigned p_69, unsigned char p_70, unsigned p_71, unsigned char p_72, int p_73)
{
    int l_80 = 0x488F5754L;
    (*g_78) = g_32;
    l_80 = p_72;
    (*g_78) = (safe_rshift_func_uint16_t_u_u(l_80, g_79));
    return &g_32;


}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_21, "g_21", print_hash_value);
    transparent_crc(g_32, "g_32", print_hash_value);
    transparent_crc(g_79, "g_79", print_hash_value);
    transparent_crc(g_91, "g_91", print_hash_value);
    transparent_crc(g_115.f1, "g_115.f1", print_hash_value);
    transparent_crc(g_115.f2, "g_115.f2", print_hash_value);
    transparent_crc(g_149, "g_149", print_hash_value);
    transparent_crc(g_218, "g_218", print_hash_value);
    transparent_crc(g_240.f0, "g_240.f0", print_hash_value);
    transparent_crc(g_240.f1, "g_240.f1", print_hash_value);
    transparent_crc(g_240.f2, "g_240.f2", print_hash_value);
    transparent_crc(g_280, "g_280", print_hash_value);
    transparent_crc(g_283, "g_283", print_hash_value);
    transparent_crc(g_307, "g_307", print_hash_value);
    transparent_crc(g_310, "g_310", print_hash_value);
    transparent_crc(g_325.f0, "g_325.f0", print_hash_value);
    transparent_crc(g_325.f1, "g_325.f1", print_hash_value);
    transparent_crc(g_342.f0, "g_342.f0", print_hash_value);
    transparent_crc(g_342.f1, "g_342.f1", print_hash_value);
    transparent_crc(g_342.f2, "g_342.f2", print_hash_value);
    transparent_crc(g_387, "g_387", print_hash_value);
    transparent_crc(g_394.f0, "g_394.f0", print_hash_value);
    transparent_crc(g_394.f1, "g_394.f1", print_hash_value);
    transparent_crc(g_402, "g_402", print_hash_value);
    transparent_crc(g_417, "g_417", print_hash_value);
    transparent_crc(g_432, "g_432", print_hash_value);
    transparent_crc(g_450.f0, "g_450.f0", print_hash_value);
    transparent_crc(g_450.f1, "g_450.f1", print_hash_value);
    transparent_crc(g_450.f2, "g_450.f2", print_hash_value);
    transparent_crc(g_466, "g_466", print_hash_value);
    transparent_crc(g_595.f0, "g_595.f0", print_hash_value);
    transparent_crc(g_595.f1, "g_595.f1", print_hash_value);
    transparent_crc(g_632, "g_632", print_hash_value);
    transparent_crc(g_687, "g_687", print_hash_value);
    transparent_crc(g_691.f0, "g_691.f0", print_hash_value);
    transparent_crc(g_691.f1, "g_691.f1", print_hash_value);
    transparent_crc(g_691.f2, "g_691.f2", print_hash_value);
    transparent_crc(g_698.f0, "g_698.f0", print_hash_value);
    transparent_crc(g_698.f1, "g_698.f1", print_hash_value);
    transparent_crc(g_698.f2, "g_698.f2", print_hash_value);
    transparent_crc(g_730, "g_730", print_hash_value);
    transparent_crc(g_791.f0, "g_791.f0", print_hash_value);
    transparent_crc(g_791.f1, "g_791.f1", print_hash_value);
    transparent_crc(g_791.f2, "g_791.f2", print_hash_value);
    transparent_crc(g_806, "g_806", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
