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
   const char * f0;
   char * f1;
   int f2;
   const int f3;
};


static const short g_23 = 0L;
static unsigned char g_26 = 4UL;
static int g_29 = (-9L);
static char g_56 = 7L;
static unsigned short g_83 = 4UL;
static unsigned short g_112 = 0x1534L;
static union U0 g_121 = {0};
static int g_123 = 0x78ED0E11L;
static int *g_122 = &g_123;
static char g_125 = 0L;
static char *g_124 = &g_125;
static int g_148 = (-10L);
static char **g_165 = &g_124;
static unsigned g_168 = 0x3FEA8E8EL;
static int g_181 = 0xB7A5A4E8L;
static int g_194 = 0x72D6ACA7L;
static unsigned char *g_201 = &g_26;
static short g_217 = (-1L);
static char g_230 = 5L;
static unsigned char *g_237 = &g_26;
static unsigned short g_272 = 0xC6A9L;
static unsigned g_312 = 0xEED56E27L;
static unsigned *g_366 = &g_168;
static unsigned **g_365 = &g_366;
static unsigned g_451 = 0xE40A8397L;
static const int g_492 = (-5L);
static unsigned short g_542 = 0UL;
static unsigned short g_552 = 65530UL;
static int g_558 = 0xA5FD6ADEL;
static char g_571 = 0xA0L;
static unsigned short g_580 = 0UL;



static unsigned func_1(void);
static union U0 func_3(unsigned p_4, char * const p_5, union U0 p_6, char * p_7, int p_8);
static union U0 func_9(char * p_10);
static char * func_11(char * p_12, union U0 p_13, unsigned char p_14, char * p_15, char p_16);
static char * func_17(union U0 p_18, const char * p_19, char p_20);
static union U0 func_21(const unsigned char p_22);
static short func_34(int p_35, int * p_36, char * p_37, const unsigned char * p_38, union U0 p_39);
static unsigned char func_53(char * p_54);
static const int * func_57(int p_58, unsigned p_59, unsigned char * p_60, unsigned char * p_61);
static const int func_72(unsigned p_73, char p_74, int * p_75, char * p_76, const unsigned p_77);
static unsigned func_1(void)
{
    const char l_2 = 0xC3L;
    unsigned char *l_24 = (void*)0;
    unsigned char *l_25 = &g_26;
    int *l_180 = &g_181;
    int l_182 = 0x27632A01L;
    union U0 l_407 = {0};
    int l_408 = 1L;
    unsigned short *l_541 = &g_542;
    short *l_556 = &g_217;
    int *l_557 = &g_558;
    const short l_569 = 0x7EB4L;
    char *l_570 = &g_571;
    int *l_572 = &g_123;
    (*l_557) &= ((((*l_556) = ((l_2 , func_3((((*l_541) |= (func_9(func_11(func_17(func_21(((*l_25) = g_23)), (*g_165), ((((*l_180) ^= l_2) , l_182) , (*l_180))), l_407, l_408, l_24, l_182)) , g_121.f2)) <= g_451), g_237, l_407, l_24, l_2)) , 0x7CFAL)) | g_23) , 1L);
    if ((safe_add_func_uint16_t_u_u(((safe_add_func_int16_t_s_s((safe_mul_func_int8_t_s_s((*l_557), (!((g_272 < func_53(((*g_165) = (*g_165)))) || ((**g_365) ^ (*l_557)))))), func_34(((safe_mod_func_uint16_t_u_u((~(safe_rshift_func_int16_t_s_s((((*l_570) ^= ((-1L) || ((((*l_541) = 1UL) ^ (*l_557)) < l_569))) | (*l_557)), g_121.f2))), (*l_180))) != (-1L)), l_572, l_24, g_237, g_121))) | (*l_557)), 3L)))
    {
        short l_575 = 0L;
        for (g_123 = 23; (g_123 != (-7)); g_123 = safe_sub_func_uint32_t_u_u(g_123, 1))
        {
            (*l_557) = (250UL & l_575);
            return (*l_572);
        }
    }
    else
    {
        unsigned l_576 = 0xC8FB845AL;
        if (l_576)
        {
            union U0 *l_578 = &l_407;
            union U0 **l_577 = &l_578;
            int l_579 = 1L;
            (*l_572) |= func_53((*g_165));
            (*l_577) = (void*)0;
            (*l_557) = l_579;
        }
        else
        {
            return l_576;
        }
        (*l_572) = (1L & (0x7DB6L != ((g_580 || 1L) > 0x4FF9L)));
    }
    return (*g_366);
}







static union U0 func_3(unsigned p_4, char * const p_5, union U0 p_6, char * p_7, int p_8)
{
    int l_543 = (-1L);
    int **l_544 = &g_122;
    char *l_551 = &g_56;
    union U0 l_553 = {0};
    int *l_554 = &l_553.f2;
    int *l_555 = &g_29;
    (*g_122) = l_543;
    (*l_544) = &l_543;
    (*l_554) = func_34(p_8, (*l_544), (((safe_mod_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_u((**l_544), (p_8 | p_8))), ((safe_mod_func_uint16_t_u_u((((!(((*p_5) , ((*l_551) &= ((*g_201) , ((**l_544) == ((*p_5) &= (((((*g_366) = ((**l_544) | g_83)) , 0xFCL) | (**l_544)) || 0x70L)))))) , p_4)) != 7L) != p_4), g_552)) | (**l_544)))) == (**l_544)) , (*g_165)), p_7, l_553);
    (*l_555) |= (*l_554);
    return l_553;
}







static union U0 func_9(char * p_10)
{
    unsigned short l_532 = 0x5A77L;
    int *l_533 = &g_121.f2;
    const unsigned char *l_537 = &g_26;
    const unsigned char **l_536 = &l_537;
    union U0 l_540 = {0};
    (*l_533) = ((*g_122) = l_532);
    (*l_533) = ((safe_sub_func_int16_t_s_s((*l_533), (*l_533))) ^ g_83);
    return l_540;
}







static char * func_11(char * p_12, union U0 p_13, unsigned char p_14, char * p_15, char p_16)
{
    int *l_409 = &g_148;
    int **l_410 = (void*)0;
    int **l_411 = &l_409;
    int **l_412 = (void*)0;
    int **l_413 = (void*)0;
    int **l_414 = &g_122;
    int l_419 = 0x7CF645BFL;
    unsigned l_452 = 0xAE7E330EL;
    int l_462 = 0x3D4604ACL;
    union U0 l_466 = {0};
    char *l_531 = &g_230;
    (*l_414) = ((*l_411) = l_409);
    for (g_230 = 0; (g_230 < 8); g_230 = safe_add_func_uint16_t_u_u(g_230, 8))
    {
        char l_422 = 0x3AL;
        int *l_435 = (void*)0;
        const unsigned char *l_476 = &g_26;
    }
    (*l_414) = &g_148;
    (*g_122) &= (-9L);
    return l_531;
}







static char * func_17(union U0 p_18, const char * p_19, char p_20)
{
    char *l_187 = &g_125;
    int l_188 = 0L;
    int l_191 = 0xBAA6E91FL;
    union U0 l_195 = {0};
    unsigned char **l_200 = (void*)0;
    int *l_202 = &g_181;
    int *l_203 = &g_148;
    unsigned short l_206 = 0x4814L;
    unsigned short *l_211 = &g_83;
    const int l_235 = 0xB0773BA6L;
    short l_241 = 0xC4ABL;
    const char l_294 = (-1L);
    int l_308 = 1L;
    const unsigned char *l_392 = &g_26;
    char *l_397 = &g_56;
    const unsigned char **l_402 = &l_392;
    short *l_403 = &g_217;
    int *l_404 = &g_121.f2;
    int *l_405 = &l_195.f2;
    int *l_406 = &l_191;
    (*l_203) |= ((*l_202) ^= (((g_201 = (((safe_mod_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u((l_188 &= (~func_53(l_187))), (safe_add_func_int32_t_s_s((func_34(l_191, &l_191, (((((p_20 != (((safe_add_func_uint16_t_u_u(0x062AL, g_194)) , l_195) , ((((safe_add_func_uint8_t_u_u((safe_add_func_int8_t_s_s(0L, g_168)), l_191)) , p_20) , l_200) == l_200))) , l_191) < p_20) , p_20) , (void*)0), g_124, l_195) || l_191), p_20)))), l_191)) ^ l_191) , l_187)) == g_124) , p_20));
    if (((safe_rshift_func_int8_t_s_u(((0x5FL < ((l_206 , ((*l_203) = ((**g_165) = (p_20 > 0xB7L)))) >= (((((g_168 || p_20) & ((*l_211) = (p_20 ^ (func_72(((((safe_lshift_func_int16_t_s_u((safe_sub_func_int8_t_s_s((*l_202), ((0x1CL & (*l_202)) & 0x8545L))), 4)) ^ p_20) <= g_194) , g_23), (*l_202), &l_191, (*g_165), g_112) || 0x68L)))) , p_19) == g_201) >= p_20))) && 4294967292UL), 7)) <= g_181))
    {
        int l_214 = 0xD21E74E0L;
        short *l_215 = (void*)0;
        short *l_216 = &g_217;
        int * const *l_242 = &g_122;
        union U0 l_269 = {0};
        int *l_277 = &l_191;
        char *l_301 = &g_125;
        unsigned *l_309 = (void*)0;
        unsigned *l_310 = (void*)0;
        unsigned *l_311 = &g_312;
        unsigned short l_326 = 0UL;
        char *l_347 = &g_230;
        if ((safe_add_func_int16_t_s_s(((*l_216) |= ((p_18 , (p_20 <= g_194)) > ((*g_201) &= l_214))), ((+0x0EE4L) == g_112))))
        {
            unsigned char *l_236 = (void*)0;
            const int *l_239 = &g_148;
            const int **l_238 = &l_239;
            int **l_240 = &l_203;
            (*l_202) = (safe_lshift_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s(g_123, 13)), ((!(safe_add_func_int8_t_s_s((((*l_211) = p_20) , ((safe_add_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u((!(safe_add_func_int32_t_s_s(g_230, l_214))), ((*g_201) > (*l_203)))), (safe_rshift_func_uint16_t_u_s(((*l_211) = (func_72(g_29, (((*l_216) = ((((safe_mod_func_int16_t_s_s(((((void*)0 == &g_181) > 6UL) > p_20), p_20)) == l_214) && g_83) == 1UL)) < g_56), &l_188, (*g_165), g_194) <= 4294967286UL)), p_20)))) <= l_214)), l_235))) , (*l_202))));
            (*l_238) = func_57(p_20, p_20, l_236, g_237);
            (*l_238) = ((*l_240) = &l_188);
        }
        else
        {
            unsigned char l_245 = 0x65L;
            int *l_260 = &l_191;
            (*l_202) ^= p_20;
            if (l_241)
            {
                char ***l_254 = &g_165;
                const int l_268 = 1L;
                unsigned char *l_271 = (void*)0;
                int *l_279 = &g_29;
                int *l_280 = &l_269.f2;
                int *l_281 = &l_188;
                if ((((void*)0 == l_242) >= ((safe_sub_func_int8_t_s_s(l_245, 4UL)) , (&g_122 != &g_122))))
                {
                    char ****l_255 = (void*)0;
                    char ***l_257 = &g_165;
                    char ****l_256 = &l_257;
                    g_181 &= ((safe_mod_func_int32_t_s_s((((((***l_254) = (safe_lshift_func_uint8_t_u_s(((safe_rshift_func_uint16_t_u_u(g_56, 6)) != ((safe_mod_func_int32_t_s_s(l_245, (p_20 & (l_245 , g_148)))) >= ((l_254 != ((*l_256) = (void*)0)) ^ (safe_lshift_func_int16_t_s_u(p_20, (g_56 <= l_245)))))), 5))) & (*g_237)) != 0x450FL) , g_56), (-5L))) || p_20);
                }
                else
                {
                    int *l_261 = &g_29;
                    l_261 = l_260;
                    return (*g_165);
                }
                for (g_230 = 0; (g_230 <= 19); g_230++)
                {
                    unsigned *l_270 = &g_168;
                    (*l_203) = (safe_sub_func_int32_t_s_s((safe_mod_func_uint32_t_u_u(l_268, ((*l_270) &= func_34(g_83, (l_260 = &l_191), (*g_165), p_19, l_269)))), p_20));
                    (*l_202) = g_168;
                }
                if (((p_20 , (g_272 &= func_53((*g_165)))) & ((safe_mod_func_uint8_t_u_u((*l_260), ((p_20 , ((*l_202) = ((9L && (safe_lshift_func_int16_t_s_s(p_20, 0))) , (func_34(g_181, l_277, (**l_254), g_237, p_18) | (*l_260))))) , 0x2EL))) > g_123)))
                {
                    (*l_202) ^= p_20;
                }
                else
                {
                    char *l_278 = (void*)0;
                    return l_278;
                }
                g_123 |= func_34(((*l_281) &= (((!((l_268 , ((((*l_279) = ((g_23 | func_34(func_72(p_20, ((*l_202) &= (**g_165)), l_279, (*g_165), g_83), &g_148, (*g_165), g_237, g_121)) && (*l_203))) != g_125) == p_20)) >= p_20)) , (*l_277)) >= p_20)), l_279, (*g_165), g_201, g_121);
            }
            else
            {
                int *l_298 = &g_29;
                union U0 l_303 = {0};
                for (g_56 = 7; (g_56 < (-1)); g_56--)
                {
                    int *l_286 = &g_123;
                    union U0 l_302 = {0};
                    for (p_20 = 0; (p_20 == 1); p_20++)
                    {
                        int **l_287 = &l_260;
                        unsigned *l_289 = (void*)0;
                        unsigned **l_288 = &l_289;
                        unsigned ***l_290 = &l_288;
                        (*l_287) = l_286;
                        (*l_290) = l_288;
                        return (*g_165);
                    }
                    if (p_20)
                        break;
                    for (g_29 = 19; (g_29 == (-3)); g_29 = safe_sub_func_uint8_t_u_u(g_29, 7))
                    {
                        int **l_293 = &l_260;
                        unsigned *l_295 = &g_168;
                        const unsigned char *l_299 = &l_245;
                        int *l_300 = &l_214;
                        (*l_293) = (void*)0;
                        (*l_286) &= (func_34(((l_294 ^ (((*l_295) = g_194) ^ (((safe_add_func_uint32_t_u_u(p_20, (((((*l_216) ^= (((func_34(p_20, l_298, &p_20, l_299, ((func_34(((*l_203) = (((*l_300) = (g_148 >= g_83)) , p_20)), &g_181, l_301, p_19, g_121) ^ 9UL) , l_302)) < (*g_201)) , 0x7CED499CL) != g_112)) | p_20) , p_20) > g_181))) == g_125) & (**g_165)))) <= 0UL), &g_181, (*g_165), p_19, l_303) >= 0x2DB29B32L);
                        (*l_203) = p_20;
                    }
                    g_123 |= 0xF076C89BL;
                }
            }
        }
        if ((safe_sub_func_uint32_t_u_u(((*l_277) = (~((*l_311) &= (((((*l_211) = (p_18 , p_20)) , (func_34((*l_202), &l_188, (*g_165), &g_26, (p_20 , func_21(((*l_203) && ((*g_201) = (safe_mod_func_uint16_t_u_u((((p_20 < p_20) ^ 0xBBCD2E24L) , (*l_277)), l_308))))))) ^ p_20)) == 0L) , g_148)))), (-1L))))
        {
            int l_313 = 0x269C6AF2L;
            char *l_322 = &g_230;
            int **l_325 = &l_202;
            const int *l_334 = &g_123;
            unsigned short l_344 = 1UL;
            unsigned * const *l_350 = &l_311;
            (*l_277) |= func_53(((*g_165) = l_301));
            if ((l_313 ^ (safe_sub_func_int32_t_s_s((l_326 |= (g_123 &= ((safe_lshift_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s(((safe_lshift_func_int8_t_s_s(1L, func_53(((*g_165) = l_322)))) != ((safe_rshift_func_int8_t_s_u(((func_34((((65527UL > g_272) ^ func_34(l_313, ((*l_325) = &l_308), &g_125, g_237, p_18)) | 65531UL), l_311, l_301, g_237, g_121) && (*l_203)) , (**l_325)), (*l_277))) , 4294967289UL)), (*l_277))), (*l_277))) ^ g_125))), 0x7264FA59L))))
            {
                unsigned char l_343 = 0xDDL;
                for (l_214 = (-7); (l_214 <= (-30)); l_214--)
                {
                    char ***l_329 = &g_165;
                    if (p_20)
                    {
                        if (p_20)
                            break;
                        return (*g_165);
                    }
                    else
                    {
                        (**l_325) = ((void*)0 == l_329);
                        (**l_325) = p_20;
                    }
                    if (g_230)
                        continue;
                    for (l_313 = 0; (l_313 != 18); l_313 = safe_add_func_uint16_t_u_u(l_313, 7))
                    {
                        const int *l_333 = &l_235;
                        const int **l_332 = &l_333;
                        l_334 = ((*l_332) = (*l_325));
                    }
                }
                for (l_191 = 0; (l_191 <= (-16)); l_191--)
                {
                    unsigned l_345 = 0xBD0C9975L;
                    char *l_346 = &g_125;
                    for (g_125 = 0; (g_125 < 25); g_125++)
                    {
                        (*l_202) = 0xCC0493F1L;
                    }
                    (**l_325) ^= ((safe_lshift_func_int8_t_s_s(((0x84DBL && (((*l_216) = (p_20 , l_343)) && (l_344 , 0UL))) < l_345), 0)) , (func_53(l_346) ^ ((0x1FL == 8UL) | 0xF3F15251L)));
                }
                if (((*l_203) = p_20))
                {
                    return l_347;
                }
                else
                {
                    (*l_203) ^= 1L;
                }
            }
            else
            {
                (*l_202) = (safe_sub_func_uint32_t_u_u(((*l_311) = 0x71355F16L), 0x10878E65L));
                return l_187;
            }
            (*l_203) = (l_350 != ((safe_add_func_int16_t_s_s(g_230, ((safe_mod_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u(g_23, (safe_add_func_uint16_t_u_u((((0xF5DEL | (safe_add_func_int16_t_s_s(p_20, ((*l_211) ^= (*l_334))))) , ((**l_325) >= ((safe_add_func_uint16_t_u_u(g_123, ((g_125 & 4294967291UL) == (-4L)))) , p_20))) , p_20), p_20)))), 0xD1L)), (**l_325))) <= 0xD9155A29L))) , g_365));
        }
        else
        {
            (*l_203) = p_20;
        }
    }
    else
    {
        int *l_370 = &l_188;
        union U0 l_393 = {0};
        if (p_20)
        {
            int **l_367 = (void*)0;
            int **l_368 = &l_203;
            char *l_371 = &g_56;
            short *l_373 = &l_241;
            short **l_372 = &l_373;
            (*l_202) = (!(((*l_368) = &g_181) != ((((p_20 >= p_20) | ((p_18.f2 = ((safe_unary_minus_func_uint32_t_u(0x0C6C97D4L)) & func_72((((~(**g_165)) < ((*g_237) = (((*l_211) = func_34(((((~((*l_211) ^= g_194)) != (((*l_202) > g_23) | func_34(p_20, l_370, l_371, &g_26, g_121))) & (*g_201)) , (*l_202)), &g_29, (*g_165), p_19, g_121)) < p_20))) & p_20), (*l_370), &l_308, (*g_165), (**g_365)))) == p_20)) | 0xBCL) , &l_188)));
            (**l_368) = p_20;
            (*l_202) = ((*l_370) = ((((~(*g_366)) , ((((**g_165) = 0x8BL) || (*g_124)) , 0x2D83L)) && ((*l_211) = (((*l_372) = &g_217) != &g_217))) != p_20));
            for (g_168 = 0; (g_168 > 24); g_168++)
            {
                int l_382 = 0L;
                int l_389 = 0L;
                (*l_368) = ((((((safe_rshift_func_int8_t_s_u((**g_165), 2)) <= 0x12L) <= (((safe_sub_func_uint32_t_u_u(((((**l_368) = ((l_382 < (p_18.f2 != (g_56 = (safe_sub_func_uint16_t_u_u((safe_add_func_uint16_t_u_u(9UL, ((*l_211) = ((*p_19) < ((safe_sub_func_uint32_t_u_u(l_382, l_389)) , (((safe_lshift_func_uint8_t_u_s(func_34(g_125, &l_308, (*g_165), l_392, l_393), (*p_19))) , 0x9695L) > (-8L))))))), 0L))))) >= g_26)) ^ p_18.f2) && 0x72E093A6L), p_18.f3)) >= 0x07E1L) , g_148)) == 0UL) , l_382) , &g_29);
                (**l_368) = (((*g_165) != (void*)0) , (*l_202));
            }
        }
        else
        {
            int **l_394 = &g_122;
            (*l_394) = (void*)0;
        }
    }
    (*l_202) = (((*l_397) |= (((safe_rshift_func_uint8_t_u_u((((*g_237) = (*g_237)) ^ 0UL), 3)) >= (*l_203)) <= (*p_19))) >= (-1L));
    (*l_406) &= (((*l_403) = (g_181 , ((((*g_237) = (*l_202)) ^ ((*g_201) |= (safe_rshift_func_int16_t_s_u((safe_add_func_int16_t_s_s(((p_20 > 0xFA40L) >= (**g_365)), (l_402 == ((*l_203) , &l_392)))), 14)))) | (0xF0A6920EL & g_123)))) != g_230);
    return (*g_165);
}







static union U0 func_21(const unsigned char p_22)
{
    unsigned char l_27 = 0xFDL;
    int *l_28 = &g_29;
    union U0 l_138 = {0};
    char **l_162 = &g_124;
    char **l_166 = &g_124;
    const int *l_169 = &g_121.f2;
    int *l_172 = (void*)0;
    int *l_173 = &g_148;
    unsigned char *l_178 = &g_26;
    int l_179 = 0x4F715319L;
    (*l_28) |= (l_27 == p_22);
    for (l_27 = 0; (l_27 != 48); ++l_27)
    {
        int l_42 = 0L;
        char *l_55 = &g_56;
        char *l_134 = (void*)0;
        union U0 l_136 = {0};
        union U0 l_157 = {0};
        char ***l_163 = (void*)0;
        char ***l_164 = &l_162;
        unsigned *l_167 = &g_168;
        if ((safe_rshift_func_uint8_t_u_s((g_23 != func_34((safe_sub_func_uint32_t_u_u(l_42, (safe_sub_func_uint8_t_u_u(((safe_sub_func_int16_t_s_s(p_22, (safe_sub_func_uint32_t_u_u(p_22, ((safe_mod_func_int8_t_s_s((safe_mod_func_uint16_t_u_u(((((func_53(l_55) && l_42) , (safe_rshift_func_int8_t_s_u((*l_28), ((g_121 , (-1L)) < (*l_28))))) , &p_22) == &p_22), l_42)), 0xC6L)) != p_22))))) <= 0xCFDDL), g_23)))), g_122, g_124, g_124, g_121)), 7)))
        {
            unsigned char l_140 = 0x22L;
            union U0 l_145 = {0};
            const short l_146 = (-1L);
            char *l_147 = &g_56;
            const int *l_150 = &g_148;
            const int **l_149 = &l_150;
            for (g_29 = 0; (g_29 <= 7); ++g_29)
            {
                const unsigned char *l_135 = &l_27;
                int l_137 = 0xCB50322CL;
                int *l_139 = &l_42;
                union U0 l_141 = {0};
                char *l_144 = &g_125;
                (*l_139) = (0x0FEFL >= (func_34((((p_22 >= (((safe_sub_func_uint32_t_u_u((safe_lshift_func_int16_t_s_u((((g_123 & (g_29 , func_34((*l_28), l_28, l_134, l_135, g_121))) != (-5L)) && 0x56L), (*l_28))), p_22)) , l_136) , l_137)) || p_22) < l_137), &g_123, &g_125, l_135, l_138) != 0x3E67L));
                if (l_140)
                    continue;
                (*l_139) |= func_34(((l_141 , (((safe_rshift_func_int16_t_s_u(l_140, 4)) & g_29) == (func_34(p_22, &l_137, l_144, l_55, l_145) > l_146))) >= g_23), l_28, l_147, &l_140, l_141);
            }
            (*l_28) ^= p_22;
            (*l_149) = func_57((g_123 , (-1L)), (g_148 = 4294967291UL), &l_27, &g_26);
        }
        else
        {
            for (g_148 = (-14); (g_148 < (-7)); g_148++)
            {
                (*l_28) ^= p_22;
                if (g_148)
                    continue;
            }
            for (g_123 = (-5); (g_123 <= 24); g_123++)
            {
                (*l_28) &= p_22;
            }
        }
        l_169 = func_57(l_42, ((*l_167) = (safe_rshift_func_int16_t_s_u(p_22, p_22))), l_134, l_134);
    }
    (*l_173) = (((*l_28) == (func_34((p_22 , ((((p_22 , (p_22 | ((*l_173) &= (8UL == ((&g_29 != &g_29) == (p_22 > ((((safe_mod_func_uint8_t_u_u(((+p_22) && 0xA0C82433L), (-1L))) && p_22) || 4294967286UL) , 4294967295UL))))))) != 1L) <= p_22) < (*l_28))), l_172, (*l_162), &g_26, l_138) > (*l_28))) || (*l_28));
    l_179 ^= (safe_sub_func_uint8_t_u_u((safe_add_func_uint16_t_u_u((65530UL || (*l_173)), (((((*g_124) ^ ((l_28 == l_28) , ((((*l_173) , p_22) | ((*l_178) = 0x51L)) < (*l_28)))) != 0L) >= 0x2DC1L) , (*l_28)))), (*l_173)));
    return g_121;
}







static short func_34(int p_35, int * p_36, char * p_37, const unsigned char * p_38, union U0 p_39)
{
    int *l_126 = (void*)0;
    int **l_127 = &g_122;
    (*l_127) = l_126;
    return g_56;
}







static unsigned char func_53(char * p_54)
{
    int *l_62 = &g_29;
    int **l_63 = &l_62;
    int *l_64 = &g_29;
    int l_65 = (-1L);
    const int *l_100 = &g_29;
    const int **l_99 = &l_100;
    unsigned char **l_101 = (void*)0;
    unsigned char **l_102 = (void*)0;
    unsigned char *l_103 = &g_26;
    char **l_108 = (void*)0;
    char *l_110 = &g_56;
    char **l_109 = &l_110;
    int *l_113 = (void*)0;
    int *l_114 = (void*)0;
    int *l_115 = (void*)0;
    int *l_116 = (void*)0;
    int *l_117 = (void*)0;
    int *l_118 = &l_65;
    (*l_99) = func_57((((*l_63) = l_62) != l_64), l_65, p_54, &g_26);
    (*l_64) ^= (p_54 == (l_103 = (void*)0));
    g_112 &= (((((*p_54) = (**l_99)) , (((((g_56 , (-2L)) >= ((**l_99) , 0L)) || (safe_lshift_func_int8_t_s_s(((safe_rshift_func_int8_t_s_s(g_56, 0)) ^ ((p_54 = ((*l_109) = l_103)) != &g_56)), (safe_unary_minus_func_uint32_t_u((**l_63)))))) <= (*l_64)) > (*l_62))) & 1L) > (*l_62));
    (*l_118) = ((**l_63) = 0L);
    return g_29;
}







static const int * func_57(int p_58, unsigned p_59, unsigned char * p_60, unsigned char * p_61)
{
    int *l_66 = &g_29;
    int l_67 = 0x4938140AL;
    unsigned short l_78 = 0xC1B2L;
    union U0 l_79 = {0};
    const int *l_98 = &g_29;
    l_67 |= ((*l_66) = p_58);
    (*l_66) = (g_26 , ((0x649D9592L ^ ((((safe_mod_func_int32_t_s_s((safe_rshift_func_int16_t_s_s((0xC0C84A4EL == func_72(g_56, (g_26 >= (l_78 == ((65535UL | g_23) < ((l_79 , (void*)0) == (void*)0)))), &g_29, p_60, (*l_66))), 11)), g_23)) | g_23) != g_23) && (-1L))) && g_56));
    return l_98;
}







static const int func_72(unsigned p_73, char p_74, int * p_75, char * p_76, const unsigned p_77)
{
    unsigned short *l_82 = &g_83;
    union U0 l_86 = {0};
    int l_87 = (-2L);
    int l_88 = 6L;
    unsigned char *l_95 = &g_26;
    int *l_97 = &l_87;
    int **l_96 = &l_97;
    (*p_75) = (safe_sub_func_uint16_t_u_u(((*l_82) = g_23), ((((safe_lshift_func_int8_t_s_u((l_86 , 0x67L), ((l_87 | (l_87 != ((*l_95) ^= (l_88 ^ ((safe_lshift_func_int16_t_s_s((safe_sub_func_int16_t_s_s((((((safe_rshift_func_uint16_t_u_s(l_87, 7)) , (g_56 , (*p_75))) < g_29) == p_74) ^ 0x91A13C53L), l_88)), 12)) , (*p_75)))))) || p_73))) != g_56) ^ l_87) != p_77)));
    (*l_96) = &g_29;
    return (*p_75);
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_23, "g_23", print_hash_value);
    transparent_crc(g_26, "g_26", print_hash_value);
    transparent_crc(g_29, "g_29", print_hash_value);
    transparent_crc(g_56, "g_56", print_hash_value);
    transparent_crc(g_83, "g_83", print_hash_value);
    transparent_crc(g_112, "g_112", print_hash_value);
    transparent_crc(g_121.f2, "g_121.f2", print_hash_value);
    transparent_crc(g_121.f3, "g_121.f3", print_hash_value);
    transparent_crc(g_123, "g_123", print_hash_value);
    transparent_crc(g_125, "g_125", print_hash_value);
    transparent_crc(g_148, "g_148", print_hash_value);
    transparent_crc(g_168, "g_168", print_hash_value);
    transparent_crc(g_181, "g_181", print_hash_value);
    transparent_crc(g_194, "g_194", print_hash_value);
    transparent_crc(g_217, "g_217", print_hash_value);
    transparent_crc(g_230, "g_230", print_hash_value);
    transparent_crc(g_272, "g_272", print_hash_value);
    transparent_crc(g_312, "g_312", print_hash_value);
    transparent_crc(g_451, "g_451", print_hash_value);
    transparent_crc(g_492, "g_492", print_hash_value);
    transparent_crc(g_542, "g_542", print_hash_value);
    transparent_crc(g_552, "g_552", print_hash_value);
    transparent_crc(g_558, "g_558", print_hash_value);
    transparent_crc(g_571, "g_571", print_hash_value);
    transparent_crc(g_580, "g_580", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
