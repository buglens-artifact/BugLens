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
   unsigned short f0;
   int f1;
   short f2;
   unsigned short f3;
   short f4;
   unsigned f5;
   unsigned char f6;
};

struct S1 {
   unsigned f0;
   char f1;
   int f2;
   char f3;
   unsigned f4;
};

struct S2 {
   int f0;
   unsigned f1;
   char f2;
   struct S0 f3;
   int f4;
};

struct S3 {
   unsigned f0;
   unsigned short f1;
   struct S1 f2;
};


static unsigned g_2 = 0x07D7C118L;
static int g_16 = 0x42BE197EL;
static struct S0 g_21 = {0x8FC5L,0x74FA72D5L,0xFA8FL,1UL,0x94DFL,0x99643747L,0x91L};
static struct S3 g_55 = {0xE6DCF67AL,8UL,{1UL,3L,-4L,2L,0UL}};
static int *g_60 = &g_16;
static int **g_59 = &g_60;
static struct S2 g_66 = {0x05739219L,3UL,0x28L,{0x342BL,-1L,0L,0xF731L,-1L,0x5796D0A3L,0xFDL},0x43CBDA12L};
static struct S1 *g_70 = &g_55.f2;
static struct S2 *g_74 = (void*)0;
static struct S2 **g_185 = &g_74;
static struct S2 ***g_184 = &g_185;
static struct S3 g_192 = {1UL,0xDE72L,{1UL,0x73L,-4L,1L,1UL}};
static unsigned char g_218 = 248UL;
static struct S3 **g_279 = (void*)0;
static short g_282 = 1L;
static char g_301 = 0x73L;
static int g_314 = 0x54A62370L;
static int *g_322 = &g_314;
static struct S0 *g_346 = &g_66.f3;
static int *g_381 = (void*)0;



static unsigned func_1(void);
static short func_8(unsigned p_9);
static int * func_10(int * p_11, struct S3 p_12, int p_13, int * p_14);
static struct S3 func_17(struct S0 p_18, int * p_19, int * p_20);
static int * func_22(int * p_23, struct S0 p_24, int * p_25, int * p_26);
static int * func_27(int * p_28, unsigned p_29);
static int * func_30(short p_31, struct S2 p_32, int * p_33);
static struct S2 func_34(struct S0 p_35);
static struct S2 * func_36(unsigned p_37, short p_38);
static short func_42(int * p_43);
static unsigned func_1(void)
{
    int l_7 = 5L;
    (*g_322) = (g_2 | (safe_lshift_func_int8_t_s_s((+(safe_sub_func_int8_t_s_s(l_7, (!(func_8(l_7) > (safe_lshift_func_uint16_t_u_u(((1UL && (l_7 && 0L)) , g_21.f2), 2))))))), 0)));

    ;
    ;
    ;
    ;
    return g_21.f0;
}







static short func_8(unsigned p_9)
{
    int *l_15 = &g_16;
    struct S0 l_310 = {7UL,1L,-8L,0UL,0x72F9L,0x8E63CB0EL,0x13L};
    int *l_311 = (void*)0;
    int *l_313 = &g_314;
    struct S1 *l_378 = &g_55.f2;
    struct S1 **l_379 = &l_378;
    char l_380 = 0x22L;
    struct S2 l_392 = {-6L,0xED43BFEEL,6L,{9UL,0x73744CB7L,5L,0UL,0x77A2L,0xA86136CEL,0x26L},0L};
    struct S3 l_393 = {3UL,7UL,{4294967291UL,3L,0xF26746A2L,6L,1UL}};
    int *l_394 = &g_314;
    (*g_59) = func_10(l_15, func_17(g_21, func_22(func_27(func_30((l_15 != (void*)0), func_34(g_21), l_15), g_2), l_310, l_311, l_311), l_313), p_9, l_313);

    ;
    ;
    ;
    ;
    (*l_379) = l_378;
    (*g_59) = (l_380 , l_394);

    ;
    return g_218;
}







static int * func_10(int * p_11, struct S3 p_12, int p_13, int * p_14)
{
    int *l_317 = &g_314;
    struct S0 l_318 = {0x75F3L,0xC964AADFL,-10L,0UL,0x907DL,0UL,0xCBL};
    struct S3 l_319 = {4294967295UL,7UL,{8UL,0xEFL,0L,1L,0x153C9033L}};
    struct S2 l_320 = {0x1EE3AD7CL,0x4DFFC005L,0x2FL,{0x5F6FL,0xA2F73B9AL,-1L,0xB5A1L,-1L,1UL,0x85L},7L};
    int *l_321 = &g_314;
    int *l_323 = (void*)0;
    struct S0 **l_325 = (void*)0;
    struct S0 ***l_324 = &l_325;
    struct S2 l_342 = {0L,0xCBDF15A0L,0xB1L,{5UL,0xEAB35379L,0xB449L,6UL,0x3D18L,0x33212FACL,0UL},7L};
    struct S2 *l_343 = &l_320;
    (*g_59) = (g_192.f1 , func_22(l_317, l_318, (func_17(g_21, func_30((((l_319 , (*l_317)) , p_12.f2.f2) && (p_12 , (+0xB654L))), l_320, l_321), p_11) , (*g_59)), g_322));

    ;
    if ((((*l_321) == ((l_319.f2 , (g_66.f3.f4 > (((p_12.f2.f2 ^ (g_66.f3.f3 , (&l_320 == &l_320))) , l_324) == (void*)0))) != (*g_60))) | g_66.f4))
    {
        unsigned short l_330 = 0xCE1AL;
        int *l_339 = (void*)0;
        if ((safe_mul_func_int8_t_s_s((((safe_sub_func_int32_t_s_s(l_330, l_330)) == (*l_321)) != l_330), (safe_mod_func_int8_t_s_s((l_330 && (((*p_14) || (l_330 <= g_55.f2.f2)) & l_330)), l_330)))))
        {
            struct S2 *l_341 = &g_66;
            for (p_12.f0 = 0; (p_12.f0 != 58); p_12.f0++)
            {
                int l_340 = (-1L);
                for (p_12.f1 = 0; (p_12.f1 < 24); ++p_12.f1)
                {
                    (*g_59) = p_14;

                    ;
                }
                (*g_322) = ((((p_12.f2.f2 < (safe_mul_func_int8_t_s_s(((p_12.f0 == (*p_14)) == (((*g_60) | g_2) <= g_2)), p_12.f0))) < l_340) || 0xD271L) , (*g_322));
                (*g_185) = l_341;

                ;
            }

            ;
            ;
            return (*g_59);


        }
        else
        {
            (*g_59) = (void*)0;

            ;
        }

        ;
    }
    else
    {
        (*g_59) = (*g_59);
    }

    ;
    (*l_343) = (((((*l_321) == 1UL) != g_192.f2.f1) & (*l_317)) , l_342);
    for (l_342.f3.f2 = 0; (l_342.f3.f2 != 2); ++l_342.f3.f2)
    {
        unsigned l_356 = 4294967295UL;
        struct S0 l_372 = {0x302BL,9L,1L,0x860CL,7L,0x0E947550L,252UL};
        struct S2 l_374 = {0x3C6F0DF8L,0xC2A5C860L,4L,{65535UL,8L,0x4DCAL,65533UL,0xB422L,0xDD11894EL,0x7AL},0L};
        g_346 = &g_21;

        ;
        for (l_320.f0 = 0; (l_320.f0 < 20); ++l_320.f0)
        {
            struct S2 l_363 = {0x4C57A7CAL,0xF859E742L,0x04L,{0xB7BDL,-1L,0x215FL,0x69B9L,0xA681L,1UL,246UL},0xA717AF10L};
            int *l_375 = (void*)0;
            int l_376 = (-5L);
            for (p_12.f2.f1 = 14; (p_12.f2.f1 <= 17); p_12.f2.f1 = safe_add_func_int32_t_s_s(p_12.f2.f1, 2))
            {
                unsigned char l_355 = 0x93L;
                struct S2 l_357 = {0L,0xCB97E76AL,0xAAL,{65527UL,0xE79639F5L,0L,1UL,0xC1B4L,0x75346E92L,7UL},0xE23EE42AL};
                int *l_373 = &g_66.f4;
                struct S3 l_377 = {4294967291UL,7UL,{0xB4B37A56L,0x2EL,7L,-1L,4294967295UL}};
                (*g_59) = (*g_59);
                if ((*g_322))
                {
                    struct S1 **l_351 = &g_70;
                    int *l_352 = &l_320.f4;
                    (*l_351) = g_70;
                    return (*g_59);


                }
                else
                {
                    int *l_364 = (void*)0;
                    struct S1 *l_365 = &l_319.f2;
                    for (l_342.f3.f0 = 20; (l_342.f3.f0 <= 19); l_342.f3.f0--)
                    {
                        int l_358 = 0xE2E2E6C8L;
                        if ((*p_14))
                            break;
                        if (l_355)
                            break;
                        (*g_59) = func_30(((*l_317) != l_356), l_357, func_30((l_358 & ((*l_317) & ((safe_mul_func_uint16_t_u_u((((safe_mul_func_uint8_t_u_u(((g_192.f2.f2 < (!l_357.f4)) & p_12.f2.f4), g_16)) | g_192.f2.f0) <= 0xFEEBL), 7L)) && p_12.f2.f2))), l_363, (*g_59)));

                        ;
                        (*p_14) = l_358;
                    }
                    (*l_365) = p_12.f2;
                }
                (*l_317) = (g_66.f3.f2 | l_376);
                l_377 = (l_363.f3 , (l_357.f3 , p_12));
            }
            (*g_59) = func_30((*l_321), l_374, (*g_59));

            ;
            (*g_60) = (p_12.f0 <= p_13);
        }

        ;
        return (*g_59);


    }
    return (*g_59);


}







static struct S3 func_17(struct S0 p_18, int * p_19, int * p_20)
{
    unsigned short l_315 = 0xFD7BL;
    struct S3 l_316 = {0xD01A9C0DL,1UL,{0x87FC44B1L,4L,7L,-1L,0x442C3B54L}};
    (*p_19) = (g_55.f2.f0 <= l_315);
    (*g_59) = func_27(p_19, p_18.f5);
    (*p_20) = (*p_20);
    (*p_20) = (g_66.f1 <= (p_18.f1 == 0x31D8L));
    return l_316;
}







static int * func_22(int * p_23, struct S0 p_24, int * p_25, int * p_26)
{
    int *l_312 = &g_66.f4;
    return l_312;


}







static int * func_27(int * p_28, unsigned p_29)
{
    int l_305 = 0x6F006D62L;
    (*p_28) = l_305;
    for (g_218 = 0; (g_218 == 30); g_218 = safe_add_func_uint8_t_u_u(g_218, 3))
    {
        struct S2 l_308 = {-5L,0x0089F56BL,-10L,{0x4339L,-4L,0x0843L,65530UL,1L,0x12908653L,0UL},0xADB77967L};
        struct S2 *l_309 = &g_66;
        (*l_309) = l_308;
    }
    return (*g_59);


}







static int * func_30(short p_31, struct S2 p_32, int * p_33)
{
    int *l_304 = &g_16;
    return l_304;


}







static struct S2 func_34(struct S0 p_35)
{
    unsigned short l_41 = 65527UL;
    int *l_44 = &g_16;
    unsigned l_300 = 8UL;
    short l_302 = 0xD04EL;
    struct S2 l_303 = {0L,4294967295UL,1L,{0xA961L,1L,0L,0x2D2DL,0x6E35L,1UL,0x3CL},6L};
    (**g_184) = func_36((safe_sub_func_uint8_t_u_u(4UL, l_41)), func_42(l_44));

    ;
    ;
    g_16 = (safe_rshift_func_int16_t_s_u(((!(((safe_lshift_func_int16_t_s_s((safe_mul_func_uint8_t_u_u((*l_44), ((safe_mod_func_int16_t_s_s((-1L), p_35.f4)) || ((safe_sub_func_int32_t_s_s((*l_44), p_35.f5)) < ((((safe_add_func_uint16_t_u_u((*l_44), ((((65535UL | (l_300 , g_66.f1)) , (*g_59)) == l_44) == (*l_44)))) >= p_35.f6) , &p_35) != (void*)0))))), 4)) > p_35.f0) > g_301)) | 0L), l_302));
    return l_303;
}







static struct S2 * func_36(unsigned p_37, short p_38)
{
    struct S1 *l_285 = (void*)0;
    struct S1 **l_286 = &g_70;
    struct S2 *l_287 = (void*)0;
    (*l_286) = l_285;

    ;
    return l_287;


}







static short func_42(int * p_43)
{
    struct S0 l_45 = {65533UL,5L,7L,0xE963L,0x9BECL,1UL,0xF8L};
    struct S0 l_50 = {0x7E6EL,7L,-8L,1UL,0L,1UL,0x1AL};
    struct S0 *l_52 = (void*)0;
    struct S0 *l_53 = (void*)0;
    struct S2 *l_96 = &g_66;
    int *l_99 = &g_16;
    struct S1 **l_104 = &g_70;
    int **l_115 = (void*)0;
    struct S2 *l_117 = &g_66;
    struct S1 **l_149 = (void*)0;
    int *l_219 = &g_16;
    int *l_261 = (void*)0;
    struct S3 **l_280 = (void*)0;
    int *l_284 = &g_16;
    l_45 = g_21;
    for (l_45.f6 = 0; (l_45.f6 < 47); l_45.f6 = safe_add_func_uint8_t_u_u(l_45.f6, 7))
    {
        int *l_49 = &g_16;
        int **l_48 = &l_49;
        struct S0 *l_51 = &l_50;
        (*l_48) = p_43;
        (*l_48) = p_43;
        (*l_51) = l_50;
    }
    l_45 = g_21;
    if (g_2)
    {
        unsigned l_54 = 0x21BFDB9CL;
        struct S0 *l_57 = &l_45;
        struct S2 *l_65 = &g_66;
        struct S2 **l_64 = &l_65;
        struct S2 *l_73 = (void*)0;
        int *l_79 = &g_16;
        struct S3 l_135 = {4294967290UL,0x85B2L,{4294967288UL,0x1EL,9L,0xFEL,1UL}};
        short l_142 = 8L;
        unsigned char l_255 = 1UL;
        struct S3 l_269 = {0xCB74F963L,4UL,{4294967288UL,6L,0xDDEBC724L,0xF0L,1UL}};
        if (l_54)
        {
            struct S0 *l_58 = (void*)0;
            int l_61 = (-9L);
            struct S2 ***l_67 = &l_64;
            struct S1 **l_71 = (void*)0;
            struct S1 **l_72 = &g_70;
            (*l_67) = ((+((g_55 , (safe_unary_minus_func_uint16_t_u((((l_57 != (l_54 , l_58)) || (g_59 != (void*)0)) , ((l_61 >= (l_61 , (safe_mod_func_uint32_t_u_u(l_61, g_21.f6)))) != l_61))))) > l_61)) , l_64);
            (*p_43) = (safe_sub_func_int32_t_s_s(0x691369F8L, g_66.f4));
            (*l_72) = g_70;
        }
        else
        {
            g_74 = l_73;
        }
        if ((safe_mul_func_int16_t_s_s((-1L), ((0x8FL ^ 0L) > 1L))))
        {
            struct S1 l_84 = {4294967291UL,0x18L,1L,4L,2UL};
            struct S2 **l_85 = (void*)0;
            (*g_59) = l_79;
            if ((safe_lshift_func_uint16_t_u_u(l_50.f0, (safe_mul_func_uint8_t_u_u((((l_84 , ((void*)0 == l_85)) | 0x33D27CF1L) <= (**g_59)), (0x16L | (+(safe_mul_func_int8_t_s_s(l_45.f5, (g_66.f3 , l_84.f4))))))))))
            {
                unsigned l_95 = 0x45F43875L;
                (*l_79) = (*p_43);
                for (g_55.f2.f4 = 8; (g_55.f2.f4 <= 26); g_55.f2.f4 = safe_add_func_uint16_t_u_u(g_55.f2.f4, 3))
                {
                    struct S1 *l_90 = &l_84;
                    (*l_90) = (*g_70);
                    for (g_55.f2.f1 = 0; (g_55.f2.f1 >= (-5)); g_55.f2.f1 = safe_sub_func_uint16_t_u_u(g_55.f2.f1, 2))
                    {
                        if ((*g_60))
                            break;
                        (*l_64) = (void*)0;

                        ;
                        (*l_64) = (void*)0;
                        return l_45.f4;
                    }
                    for (l_45.f5 = 8; (l_45.f5 != 9); l_45.f5++)
                    {
                        return l_95;
                    }
                }
                (*l_64) = l_96;
                for (l_84.f0 = 2; (l_84.f0 < 5); ++l_84.f0)
                {
                    unsigned l_107 = 0xDDE4D78BL;
                    struct S0 l_112 = {0x8BF8L,0L,0xBE4CL,65535UL,0xB02FL,0UL,255UL};
                    int ***l_116 = &l_115;
                    (*g_59) = l_99;
                    if ((safe_mul_func_uint16_t_u_u((~(safe_add_func_uint8_t_u_u(((l_104 == &g_70) , g_66.f3.f3), (((*l_79) <= (safe_sub_func_uint32_t_u_u((l_107 < ((safe_lshift_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u(((*l_79) , (l_112 , l_112.f4)), ((((safe_sub_func_int32_t_s_s((*p_43), (*p_43))) >= l_112.f0) | 0xA988L) , l_95))), g_55.f1)) != 2UL)), g_66.f3.f1))) , l_112.f0)))), 1UL)))
                    {
                        (*l_64) = &g_66;
                        (*g_59) = (*g_59);
                    }
                    else
                    {
                        if (l_84.f1)
                            break;
                        (*g_60) = (*p_43);
                    }
                    (*l_116) = l_115;
                    (*g_59) = (*g_59);
                }
            }
            else
            {
                (*l_64) = l_117;
            }
            (*g_59) = (l_84.f1 , p_43);
            for (g_55.f2.f0 = 0; (g_55.f2.f0 <= 37); g_55.f2.f0 = safe_add_func_uint16_t_u_u(g_55.f2.f0, 4))
            {
                struct S2 *l_123 = (void*)0;
                int l_124 = (-1L);
                for (l_45.f1 = 0; (l_45.f1 >= 19); l_45.f1++)
                {
                    struct S2 *l_122 = &g_66;
                    struct S0 l_127 = {0x0416L,-2L,0x7C7CL,1UL,3L,4294967295UL,0xCFL};
                    (*l_99) = (((l_122 != l_123) <= 0xCBAD6A7FL) && ((g_16 < 254UL) ^ l_124));
                    (*l_104) = g_70;
                    for (g_55.f2.f4 = 0; (g_55.f2.f4 == 7); ++g_55.f2.f4)
                    {
                        struct S0 *l_128 = &l_127;
                        (*l_128) = l_127;
                        return l_124;
                    }
                    (*l_65) = (*l_122);
                }
                for (g_66.f4 = 0; (g_66.f4 <= (-6)); g_66.f4 = safe_sub_func_uint32_t_u_u(g_66.f4, 5))
                {
                    p_43 = (*g_59);
                    (*g_59) = &l_124;

                    ;
                    (*g_59) = (void*)0;

                    ;
                }
                (*l_79) = (safe_add_func_uint8_t_u_u((*l_99), (safe_mod_func_int32_t_s_s((g_66 , l_84.f0), g_21.f3))));
            }

            ;
            ;
        }
        else
        {
            struct S3 *l_136 = &g_55;
            (*l_136) = l_135;
            return g_16;
        }

        ;
        ;
        if ((safe_lshift_func_int8_t_s_u((*l_79), 2)))
        {
            unsigned char l_139 = 2UL;
            struct S2 l_140 = {0xBB5F2842L,0xFFA37D7AL,0L,{0x5CC4L,0x19D74962L,-9L,4UL,0xAF6FL,0x1804477DL,246UL},0xDAFE078DL};
            if (l_139)
            {
                struct S2 l_141 = {1L,0UL,0xD8L,{65531UL,0L,0x76AAL,4UL,0L,0x88A45519L,1UL},-1L};
                l_52 = &g_21;

                ;
                l_141 = l_140;
                (*g_59) = (*g_59);
            }
            else
            {
                struct S1 *l_146 = (void*)0;
                if (l_142)
                {
                    return g_66.f3.f4;
                }
                else
                {
                    unsigned l_143 = 0xD06AD958L;
                    (*l_79) = l_143;
                    for (l_140.f3.f1 = 0; (l_140.f3.f1 == (-28)); l_140.f3.f1 = safe_sub_func_int32_t_s_s(l_140.f3.f1, 6))
                    {
                        return g_21.f6;
                    }
                    (*l_104) = l_146;

                    ;
                }

                ;
            }

            ;
            ;
        }
        else
        {
            unsigned short l_165 = 0x3188L;
            int *l_208 = &g_66.f4;
            struct S0 l_225 = {1UL,9L,-4L,0x7C2BL,0L,4294967286UL,255UL};
            struct S2 l_235 = {0x20FC968BL,0x351F7D06L,-1L,{0xC5ADL,0L,-1L,0xDD9BL,0L,0x29903A52L,0x24L},0x5146EA9AL};
            struct S2 **l_242 = &g_74;
            (*l_79) = (((((safe_mul_func_int8_t_s_s((((*l_99) != (*l_79)) , (*l_99)), (l_149 == &g_70))) , g_66.f3.f5) >= 0x03L) && (safe_lshift_func_uint8_t_u_s(4UL, 2))) > 0xA2L);
            if (((safe_lshift_func_uint16_t_u_u((*l_99), g_21.f6)) == (safe_rshift_func_int16_t_s_u(((((g_55 , (safe_sub_func_int32_t_s_s((((safe_lshift_func_int8_t_s_s((safe_unary_minus_func_int8_t_s((safe_add_func_uint8_t_u_u((safe_mod_func_int8_t_s_s(l_165, l_165)), l_165)))), (safe_mul_func_int16_t_s_s(((*l_79) != (safe_mod_func_uint8_t_u_u(((*g_70) , (safe_rshift_func_uint8_t_u_s(g_66.f3.f4, l_165))), (*l_79)))), 65531UL)))) , 0L) != l_165), l_165))) >= 0x5AL) <= (*l_99)) ^ (-10L)), g_66.f3.f1))))
            {
                struct S3 *l_183 = &l_135;
                struct S2 l_186 = {0L,0x23EFB9AAL,0x88L,{65535UL,0L,0x558EL,65531UL,-1L,0xB9365FCBL,5UL},0xEDED3E82L};
                short l_232 = (-1L);
                for (l_45.f4 = (-13); (l_45.f4 > (-1)); l_45.f4 = safe_add_func_int32_t_s_s(l_45.f4, 1))
                {
                    short l_182 = (-2L);
                    if (((safe_mod_func_int32_t_s_s((g_21.f3 & (safe_sub_func_uint8_t_u_u(((safe_mul_func_uint8_t_u_u((((safe_mul_func_int16_t_s_s(l_182, (&l_135 != l_183))) & (g_184 == ((*l_65) , (void*)0))) , (((8L < (1L == 0L)) < 9L) == g_55.f2.f4)), 250UL)) <= (*l_99)), g_55.f2.f0))), g_55.f2.f3)) , (*l_99)))
                    {
                        (*g_59) = ((l_79 == (l_186 , (void*)0)) , (*g_59));
                        (*l_183) = (((((safe_unary_minus_func_uint8_t_u(0x89L)) >= ((safe_rshift_func_int8_t_s_u((g_55.f1 > (l_182 && 0x34L)), g_66.f3.f5)) , ((-2L) == (((*l_99) & ((safe_mod_func_int32_t_s_s(l_165, g_66.f4)) , 1UL)) & 0xD6L)))) , 2UL) != g_66.f1) , g_55);
                        (*g_59) = p_43;
                        g_66.f3 = (g_192 , g_21);
                    }
                    else
                    {
                        struct S3 **l_193 = &l_183;
                        (*l_193) = &l_135;
                        return l_186.f3.f2;
                    }
                    (*l_99) = (*l_99);
                    if ((safe_add_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s(((l_182 >= (safe_rshift_func_int16_t_s_s((l_165 && g_66.f1), (g_55.f2.f4 | ((0x75DFA5EDL | ((safe_lshift_func_uint16_t_u_u((*l_79), 0)) || (safe_mod_func_int16_t_s_s((l_186.f3.f1 ^ ((safe_lshift_func_int8_t_s_u((l_186.f3.f5 | ((safe_lshift_func_uint8_t_u_s((*l_99), g_21.f4)) ^ l_165)), g_21.f2)) | g_66.f1)), 1UL)))) < l_165))))) | 7L), 11)), (*l_79))))
                    {
                        int *l_209 = &g_16;
                        l_209 = l_208;

                        ;
                    }
                    else
                    {
                        struct S3 **l_210 = &l_183;
                        int l_215 = (-8L);
                        (*g_59) = l_79;

                        ;
                        (*l_210) = l_183;
                        (**g_184) = l_117;

                        ;
                        (*l_208) = ((((safe_mod_func_int8_t_s_s((safe_sub_func_int8_t_s_s(g_192.f2.f0, (g_21.f5 , ((*g_74) , (l_215 != l_182))))), (*l_208))) ^ g_66.f3.f0) && (safe_rshift_func_uint16_t_u_s(((*l_208) | (*l_79)), (*l_79)))) | l_186.f1);
                    }
                }

                ;
                (*l_99) = g_218;
                (*g_59) = l_219;

                ;
                for (g_192.f2.f2 = (-25); (g_192.f2.f2 >= 17); g_192.f2.f2 = safe_add_func_int32_t_s_s(g_192.f2.f2, 4))
                {
                    char l_229 = 6L;
                    struct S2 **l_243 = &l_96;
                    struct S2 l_246 = {0x4568527EL,0xB843A238L,0xE4L,{0x64B0L,0L,0x37CEL,65535UL,0x885CL,0x25C67197L,0UL},-1L};
                    if (((*l_79) ^ (safe_unary_minus_func_int16_t_s((safe_mod_func_uint16_t_u_u(g_21.f5, g_21.f6))))))
                    {
                        unsigned l_228 = 4294967295UL;
                        char l_233 = 0xC2L;
                        struct S2 ***l_234 = (void*)0;
                        (*l_57) = l_225;
                        (**g_59) = ((((safe_mod_func_int32_t_s_s(((((((((l_228 >= 0xD603L) != (g_55.f2.f3 < (l_229 & (((safe_mul_func_uint8_t_u_u((!(l_232 , (l_233 >= ((*l_79) ^ g_55.f0)))), (*l_79))) && (*l_79)) & 250UL)))) ^ 3L) <= (*l_79)) || 0x38847EDAL) , l_234) == (void*)0) ^ 0x2E4B5579L), (**g_59))) , (void*)0) == &g_185) >= 1UL);
                        (*l_208) = 0x33F5BE08L;
                        (*l_117) = l_235;
                    }
                    else
                    {
                        (*l_79) = (safe_add_func_int32_t_s_s((safe_mod_func_int32_t_s_s(((**g_59) | (**g_59)), (*l_79))), ((*g_60) , (-1L))));
                        (*g_60) = 0xBFFA6FDFL;
                        (*l_219) = (g_66.f0 , (safe_rshift_func_int16_t_s_s((l_242 == l_243), 12)));
                        (*g_59) = ((safe_mul_func_uint8_t_u_u(0x87L, (*l_79))) , (*g_59));
                    }
                    (**l_64) = l_246;
                    if (((((*l_99) && ((*l_79) , g_218)) || (safe_add_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u(g_21.f3, (*l_99))), ((safe_lshift_func_int16_t_s_s((safe_mul_func_int8_t_s_s((((l_246.f0 < l_186.f3.f0) || l_246.f4) & (((*l_208) > l_186.f2) , l_186.f3.f4)), (*l_79))), l_255)) && (*l_219))))) & (*l_208)))
                    {
                        struct S1 l_256 = {4294967295UL,3L,6L,0xD3L,0xC07B4E46L};
                        (**l_104) = l_256;
                        p_43 = (*g_59);

                        ;
                    }
                    else
                    {
                        (*g_59) = l_208;

                        ;
                        return (*l_99);
                    }

                    ;
                }
            }
            else
            {
                char l_259 = 0L;
                struct S2 l_264 = {0x9B879C42L,0x0134D324L,0L,{1UL,0xDEBA7D99L,-1L,7UL,-1L,0xBF56E5E3L,1UL},0xB5B5E61DL};
                struct S1 l_271 = {0x3A403BB1L,1L,0x5588FFD9L,0x7FL,4294967295UL};
                for (l_50.f1 = 16; (l_50.f1 < (-3)); --l_50.f1)
                {
                    struct S1 *l_260 = &g_55.f2;
                    struct S0 *l_270 = &l_45;
                    if (l_259)
                    {
                        struct S0 **l_262 = (void*)0;
                        struct S0 ***l_263 = &l_262;
                        (*l_104) = l_260;
                        (*g_59) = l_261;

                        ;
                        (*l_263) = ((*g_70) , l_262);
                    }
                    else
                    {
                        (*l_117) = l_264;
                        (*g_59) = (*g_59);
                        (*l_208) = ((**l_64) , ((safe_mod_func_int16_t_s_s(0x2C3FL, g_66.f3.f5)) & ((g_21.f5 == (*l_219)) ^ (safe_rshift_func_uint16_t_u_u((g_192.f1 | (l_269 , (l_270 == (void*)0))), 13)))));
                        (*l_96) = l_264;
                    }
                    (*g_59) = (void*)0;

                    ;
                    (*l_260) = l_271;
                }
                (*g_59) = p_43;
            }

            ;
            for (g_66.f3.f3 = 0; (g_66.f3.f3 == 45); g_66.f3.f3++)
            {
                struct S2 **l_276 = (void*)0;
                struct S1 l_278 = {0x84819556L,-1L,-7L,1L,7UL};
                int *l_281 = &l_235.f4;
                (*l_219) = (*l_79);
                if ((*l_208))
                {
                    if ((*l_219))
                        break;
                    (*g_59) = (*g_59);
                    if (g_66.f3.f6)
                        break;
                }
                else
                {
                    unsigned short l_277 = 65535UL;
                    for (l_225.f3 = 29; (l_225.f3 >= 1); l_225.f3 = safe_sub_func_int8_t_s_s(l_225.f3, 8))
                    {
                        l_277 = ((void*)0 == l_276);
                        (*g_59) = (*g_59);
                    }
                    (*g_70) = l_278;
                    (*g_59) = ((l_278.f4 , (((g_279 == l_280) != (l_278.f0 | (*l_208))) < (*l_79))) , (void*)0);

                    ;
                    (*g_59) = l_281;

                    ;
                }
                (*l_99) = 0x87F49181L;
            }

            ;
            (*l_99) = g_282;
        }

        ;

        ;
        ;
        (*g_59) = l_79;

        ;
    }
    else
    {
        struct S0 *l_283 = &l_50;
        l_283 = &g_21;

        ;
        p_43 = p_43;
        (**g_184) = (*g_185);
        p_43 = l_284;
    }

    ;
    ;
    ;
    ;
    return g_55.f0;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_16, "g_16", print_hash_value);
    transparent_crc(g_21.f0, "g_21.f0", print_hash_value);
    transparent_crc(g_21.f1, "g_21.f1", print_hash_value);
    transparent_crc(g_21.f2, "g_21.f2", print_hash_value);
    transparent_crc(g_21.f3, "g_21.f3", print_hash_value);
    transparent_crc(g_21.f4, "g_21.f4", print_hash_value);
    transparent_crc(g_21.f5, "g_21.f5", print_hash_value);
    transparent_crc(g_21.f6, "g_21.f6", print_hash_value);
    transparent_crc(g_55.f0, "g_55.f0", print_hash_value);
    transparent_crc(g_55.f1, "g_55.f1", print_hash_value);
    transparent_crc(g_55.f2.f0, "g_55.f2.f0", print_hash_value);
    transparent_crc(g_55.f2.f1, "g_55.f2.f1", print_hash_value);
    transparent_crc(g_55.f2.f2, "g_55.f2.f2", print_hash_value);
    transparent_crc(g_55.f2.f3, "g_55.f2.f3", print_hash_value);
    transparent_crc(g_55.f2.f4, "g_55.f2.f4", print_hash_value);
    transparent_crc(g_66.f0, "g_66.f0", print_hash_value);
    transparent_crc(g_66.f1, "g_66.f1", print_hash_value);
    transparent_crc(g_66.f2, "g_66.f2", print_hash_value);
    transparent_crc(g_66.f3.f0, "g_66.f3.f0", print_hash_value);
    transparent_crc(g_66.f3.f1, "g_66.f3.f1", print_hash_value);
    transparent_crc(g_66.f3.f2, "g_66.f3.f2", print_hash_value);
    transparent_crc(g_66.f3.f3, "g_66.f3.f3", print_hash_value);
    transparent_crc(g_66.f3.f4, "g_66.f3.f4", print_hash_value);
    transparent_crc(g_66.f3.f5, "g_66.f3.f5", print_hash_value);
    transparent_crc(g_66.f3.f6, "g_66.f3.f6", print_hash_value);
    transparent_crc(g_66.f4, "g_66.f4", print_hash_value);
    transparent_crc(g_192.f0, "g_192.f0", print_hash_value);
    transparent_crc(g_192.f1, "g_192.f1", print_hash_value);
    transparent_crc(g_192.f2.f0, "g_192.f2.f0", print_hash_value);
    transparent_crc(g_192.f2.f1, "g_192.f2.f1", print_hash_value);
    transparent_crc(g_192.f2.f2, "g_192.f2.f2", print_hash_value);
    transparent_crc(g_192.f2.f3, "g_192.f2.f3", print_hash_value);
    transparent_crc(g_192.f2.f4, "g_192.f2.f4", print_hash_value);
    transparent_crc(g_218, "g_218", print_hash_value);
    transparent_crc(g_282, "g_282", print_hash_value);
    transparent_crc(g_301, "g_301", print_hash_value);
    transparent_crc(g_314, "g_314", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
