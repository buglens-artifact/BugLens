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
   char f0;
   volatile unsigned short f1;
   char * f2;
};


static unsigned char g_13 = 0x73L;
static char g_15 = 0x34L;
static char *g_14 = &g_15;
static int g_36 = (-1L);
static short g_38 = 0x1C36L;
static short g_48 = 0x0BD9L;
static short *g_47 = &g_48;
static int g_55 = 0x57BC7756L;
static int *g_54 = &g_55;
static int g_63 = 0x58F28D92L;
static int *g_62 = &g_63;
static short g_77 = 0x5BBBL;
static unsigned g_85 = 0x4ABA13E9L;
static char g_112 = (-6L);
static char g_114 = (-2L);
static char g_115 = (-1L);
static union U0 g_127 = {1L};
static union U0 *g_132 = &g_127;
static unsigned char g_134 = 246UL;
static volatile int g_143 = 0xEC4A45BEL;
static unsigned **g_179 = (void*)0;
static char g_194 = 0xAFL;
static short **g_201 = &g_47;
static short ***g_200 = &g_201;
static int g_299 = (-10L);
static volatile unsigned char g_340 = 0xC4L;
static volatile unsigned g_447 = 1UL;
static volatile char g_451 = (-3L);
static volatile char *g_475 = (void*)0;
static volatile char **g_474 = &g_475;
static volatile char ***g_473 = &g_474;
static volatile char g_503 = 0x99L;
static unsigned short g_523 = 0x6C19L;
static unsigned short **g_558 = (void*)0;
static unsigned short ***g_557 = &g_558;



static short func_1(void);
static int func_2(char * p_3, char * p_4);
static char * func_5(unsigned char p_6, char * p_7, int p_8, unsigned short p_9, int p_10);
static unsigned short func_16(short p_17, short p_18);
static short func_23(unsigned short p_24, unsigned p_25);
static int * func_26(unsigned char p_27, int * p_28);
static int * func_29(short p_30, char * p_31, unsigned p_32);
static char * func_39(int * p_40);
static int * func_41(short * p_42, unsigned char * p_43, int * p_44, char p_45, short * p_46);
static unsigned char * func_49(short * p_50, char * p_51, int * p_52);
static short func_1(void)
{
    int l_11 = (-1L);
    unsigned char *l_12 = &g_13;
    char *l_301 = &g_112;
    char **l_300 = &l_301;
    int *l_325 = &g_55;
    unsigned l_336 = 0x53FD60A1L;
    short *l_345 = &g_38;
    char *l_349 = (void*)0;
    volatile int *l_380 = (void*)0;
    unsigned char l_413 = 0x9AL;
    unsigned short l_444 = 0xA727L;
    unsigned ***l_457 = (void*)0;
    int l_482 = 0x9437D5B3L;
    unsigned l_484 = 4294967286UL;
    unsigned short l_529 = 0UL;
    unsigned *l_539 = &g_85;
    unsigned l_580 = 0xFC993E42L;
    if (func_2(func_5(((*l_12) = l_11), g_14, l_11, l_11, (l_12 != (void*)0)), ((*l_300) = &g_112)))
    {
        l_11 |= (*g_54);
        l_325 = &l_11;

        ;
        (*l_325) = (*g_54);
    }
    else
    {
        unsigned char l_326 = 7UL;
        int **l_329 = &g_54;
        unsigned char **l_337 = &l_12;
        short *l_343 = &g_38;
        int l_367 = 0xD01CEF08L;
        short l_386 = 0x65D3L;
        char **l_388 = (void*)0;
        int *l_439 = &g_55;
        int *l_496 = &g_299;
        int l_524 = 0x9AE614FCL;
        (*l_325) = l_326;
        if ((((safe_rshift_func_uint16_t_u_u(l_326, (l_326 < 0x124FD362L))) > (((void*)0 != l_329) < (**l_329))) <= (*l_325)))
        {
            unsigned char l_338 = 0xCAL;
            int *l_347 = (void*)0;
            char *l_348 = &g_112;
            unsigned short l_351 = 0UL;
            char l_352 = 0x8CL;
            unsigned short *l_377 = &l_351;
            unsigned short **l_376 = &l_377;
            char l_408 = 0xBBL;
            int l_440 = 0x91CC760CL;
            unsigned short l_446 = 65535UL;
            if (((*l_325) = (safe_sub_func_int8_t_s_s((safe_add_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s(l_336, ((((l_337 != (void*)0) ^ g_48) > 0UL) & l_338))), ((safe_unary_minus_func_int32_t_s(func_2(&g_15, &g_114))) | g_36))), g_340))))
            {
                int *l_344 = (void*)0;
                volatile int **l_379 = (void*)0;
                for (g_48 = (-3); (g_48 > (-7)); g_48 = safe_sub_func_uint32_t_u_u(g_48, 3))
                {
                    int *l_346 = (void*)0;
                    char *l_350 = &g_115;
                    int l_368 = 0L;
                    if (((((((*l_350) |= func_2(((*l_300) = (*l_300)), (l_349 = l_348))) && 255UL) > l_351) <= g_77) > l_352))
                    {
                        unsigned l_353 = 0x89A98373L;
                        unsigned short *l_360 = &l_351;
                        int *l_369 = &g_55;
                        l_368 |= (((l_353 & (safe_add_func_uint32_t_u_u(((safe_add_func_uint32_t_u_u((safe_add_func_uint16_t_u_u(0xB396L, ((*l_360) &= g_143))), ((safe_rshift_func_int8_t_s_s(((((-9L) != (*g_47)) ^ func_16((((!(*g_47)) >= (safe_add_func_int8_t_s_s((((*g_54) >= ((+(safe_lshift_func_uint16_t_u_s(func_16(l_367, (*l_325)), (*g_47)))) == 5L)) ^ l_353), (*g_14)))) >= (*g_14)), (*g_47))) <= 0x38L), (*g_14))) <= (**l_329)))) & g_77), 0xADA57ACDL))) || (*g_54)) == (*l_325));
                        (*l_329) = func_26((*l_325), l_369);

                        ;
                        return (*g_47);
                    }
                    else
                    {
                        unsigned short ***l_378 = &l_376;
                        (*l_325) &= (((*l_343) = (safe_lshift_func_int8_t_s_s((safe_sub_func_int32_t_s_s(0L, (~0x696D7F7FL))), 5))) > (safe_div_func_uint32_t_u_u((g_115 < (*g_47)), (-1L))));
                        (*l_325) = (-6L);
                        (*l_378) = l_376;
                    }

                    ;
                }

                ;
                l_380 = &g_143;

                ;
            }
            else
            {
                short l_385 = 7L;
                unsigned short l_407 = 0UL;
                int l_417 = 0x6D6E0960L;
                for (g_85 = 28; (g_85 >= 36); g_85 = safe_add_func_int16_t_s_s(g_85, 8))
                {
                    int l_392 = 0xA7A7B21AL;
                    unsigned *l_416 = &l_336;
                    char l_437 = 0x98L;
                }
                (*l_439) |= (g_340 && (-7L));
                if (((*l_439) = 0xDDE1CF89L))
                {
                    (*l_329) = (void*)0;

                    ;
                }
                else
                {
                    (*l_439) |= (~0x4665E865L);
                }

                ;
                (*l_439) |= l_440;
            }

            ;
            ;
            ;
            if (((safe_unary_minus_func_int32_t_s((safe_sub_func_uint32_t_u_u(l_444, g_134)))) | l_338))
            {
                int l_445 = (-6L);
                int l_450 = (-1L);
                (*l_325) = (((*g_47) < (**g_201)) | func_16((l_445 | ((l_446 < g_447) != l_445)), (*g_47)));
                (*l_439) &= ((void*)0 != (*g_200));
                (*l_329) = func_26((1UL || ((l_445 ^= (***g_200)) <= (l_450 == (!l_450)))), &l_11);

                ;
                (*l_325) |= (*g_54);
            }
            else
            {
                short *l_463 = &g_77;
                int l_480 = 2L;
                if (l_352)
                {
                    unsigned l_459 = 1UL;
                    int *l_460 = &g_63;
                    char l_483 = 0x9AL;
                    if (g_85)
                    {
                        unsigned **l_452 = (void*)0;
                        unsigned ***l_458 = &l_452;
                        g_63 |= func_16((((g_451 ^ (((l_452 = l_452) == g_179) & ((safe_mod_func_int16_t_s_s((***g_200), (***g_200))) | (!g_112)))) && g_13) <= l_459), (*l_325));
                    }
                    else
                    {
                        short *l_464 = &g_48;
                        int l_481 = (-2L);
                        g_62 = l_460;

                        ;
                        (*l_325) = ((safe_sub_func_uint8_t_u_u((((*g_201) = l_463) != l_464), ((safe_add_func_int16_t_s_s(((safe_add_func_uint16_t_u_u(g_134, ((((safe_sub_func_uint16_t_u_u((safe_div_func_uint8_t_u_u(((*l_12) = ((void*)0 == g_473)), (+(((*l_464) = (l_483 = ((*l_343) = (safe_div_func_int32_t_s_s((func_16(((*l_343) ^= ((safe_mod_func_uint32_t_u_u(((l_480 && (g_179 == g_179)) <= l_481), 0xCFF5673DL)) <= l_481)), l_482) | g_115), g_447))))) & (*l_460))))), g_63)) == g_15) && (*l_460)) | (*g_14)))) & l_481), g_127.f0)) != (*g_14)))) < 0xA53CL);

                        ;
                        (*l_329) = (void*)0;

                        ;
                    }

                    ;

                    return (**g_201);
                }
                else
                {
                    return l_484;
                }
            }

            ;
            for (l_338 = 0; (l_338 > 48); l_338 = safe_add_func_uint32_t_u_u(l_338, 2))
            {
                unsigned l_489 = 1UL;
                (**l_329) = ((safe_add_func_int16_t_s_s(0xDC95L, g_127.f0)) ^ ((((*l_439) &= (*g_54)) | 1L) > ((*g_54) <= (l_489 = ((void*)0 == &g_474)))));
                if (l_489)
                    continue;
                return (*g_47);
            }
        }
        else
        {
            short l_492 = 0x5291L;
            unsigned short *l_507 = &l_444;
            int *l_514 = &g_36;
            int l_568 = (-1L);
            char *l_579 = (void*)0;
            for (g_112 = 0; (g_112 < (-9)); g_112--)
            {
                unsigned l_493 = 0xB6751FD9L;
                unsigned char l_504 = 1UL;
                if (l_492)
                    break;
                (*l_329) = l_496;

                ;
                (*l_439) = ((safe_sub_func_int32_t_s_s((((safe_rshift_func_uint8_t_u_s(((*l_12) = g_85), 7)) ^ ((*l_343) = ((safe_add_func_uint8_t_u_u((4294967290UL ^ g_503), (*g_14))) ^ (((*g_54) < l_504) && (l_492 && (*g_14)))))) != (*l_496)), g_115)) != (*l_325));
            }

            ;
            (*l_496) = ((safe_rshift_func_uint16_t_u_u(((*l_507) = (**l_329)), 6)) < ((safe_div_func_int8_t_s_s((*l_325), (safe_sub_func_int32_t_s_s((l_492 | ((*l_345) = (((safe_mod_func_uint32_t_u_u((**l_329), ((*l_514) = (g_63 = (*l_496))))) || (safe_sub_func_uint8_t_u_u((g_13 = (safe_rshift_func_uint8_t_u_s(((safe_sub_func_uint16_t_u_u(g_114, (g_127.f0 || ((((*g_54) == ((safe_rshift_func_uint16_t_u_u((g_523 = g_48), g_127.f0)) < (**g_201))) | 0x40DFL) || (**g_201))))) > 1L), 6))), 5UL))) <= g_114))), (*g_54))))) | 1UL));
            if (l_524)
            {
                char *l_540 = &g_112;
                char *l_545 = &g_194;
                int l_548 = 0L;
                (*l_439) ^= (safe_lshift_func_int8_t_s_s(0xFEL, 3));
                for (g_299 = (-6); (g_299 > (-9)); --g_299)
                {
                    if (l_529)
                        break;
                }
lbl_569:
                for (g_36 = 0; (g_36 <= (-5)); g_36 = safe_sub_func_int8_t_s_s(g_36, 4))
                {
                    short l_532 = (-7L);
                    unsigned *l_538 = &g_85;
                    unsigned **l_537 = &l_538;
                    unsigned char *l_541 = &l_326;
                    int *l_542 = &g_299;
                    (*l_329) = l_542;

                    ;
                    if ((*l_514))
                        continue;
                    if (((*l_514) | (g_77 & (safe_add_func_int32_t_s_s((*l_542), (g_112 == (*g_54)))))))
                    {
                        unsigned l_546 = 4294967294UL;
                        int l_547 = (-5L);
                        (*l_542) = l_546;
                        if (l_367)
                            goto lbl_569;
                        (*l_439) = (*g_54);
                        l_547 = ((*g_54) = (*g_54));
                    }
                    else
                    {
                        (**l_329) = (*l_514);
                        (*l_439) |= (**l_329);
                        if ((*l_542))
                            break;
                        l_548 &= (*g_54);
                    }
                    if ((*l_542))
                    {
                        (*l_329) = (void*)0;

                        ;
                        (*l_325) = (safe_div_func_uint16_t_u_u(65534UL, 0xF560L));
                    }
                    else
                    {
                        unsigned short ****l_559 = (void*)0;
                        unsigned short ****l_560 = &g_557;
                        union U0 **l_566 = &g_132;
                        unsigned *l_567 = &l_336;
                        (*l_329) = &l_548;

                        ;
                        (*l_542) = (safe_lshift_func_int8_t_s_u((((**l_337) = (safe_div_func_int8_t_s_s(0xFEL, ((safe_unary_minus_func_int32_t_s(((*g_54) = ((*l_325) = func_16((l_566 == &g_132), func_16((*l_542), ((**g_201) = (0x0F5DL ^ ((l_496 != l_567) && (*l_514)))))))))) & (-6L))))) & l_568), (*l_496)));
                    }

                    ;
                }

                ;
                for (l_548 = (-1); (l_548 <= 7); l_548 = safe_add_func_int32_t_s_s(l_548, 1))
                {
                    int l_574 = (-8L);
                    (*l_496) |= (safe_rshift_func_int8_t_s_u((l_574 > 0xC90920A8L), 3));
                    for (l_11 = 12; (l_11 < 15); l_11++)
                    {
                        unsigned l_581 = 0xA4D25D8FL;
                        (*l_325) |= (safe_sub_func_int8_t_s_s(((*l_301) &= ((((0xBBL ^ (*g_14)) == func_16((**g_201), l_580)) | l_581) == g_114)), g_115));
                    }
                }
            }
            else
            {
                short *l_582 = &l_386;
                (*l_329) = &g_63;

                ;
                (*l_439) = (safe_lshift_func_int16_t_s_u((((void*)0 != &g_201) <= 7UL), 4));
            }


        }


        ;
        ;
    }



    ;
    ;
    ;
    return (***g_200);
}







static int func_2(char * p_3, char * p_4)
{
    union U0 **l_306 = &g_132;
    int l_307 = 1L;
    int **l_310 = &g_62;
    unsigned short l_314 = 0x5812L;
    char l_322 = (-1L);
    l_307 = ((*g_54) = (safe_mod_func_int16_t_s_s((safe_mod_func_uint16_t_u_u(l_307, l_307)), l_307)));
    l_307 ^= (-1L);
    (*l_310) = &l_307;

    ;
    if ((safe_rshift_func_int8_t_s_u(((*g_14) = ((**l_310) > (**l_310))), 3)))
    {
        int *l_313 = &g_55;
        l_313 = (void*)0;

        ;
        (**l_310) = ((*g_54) &= (**l_310));
        (**l_310) = l_314;
    }
    else
    {
        unsigned short l_315 = 0x0D68L;
        union U0 *l_316 = &g_127;
        int *l_317 = (void*)0;
        unsigned char *l_323 = &g_134;
        int l_324 = 0x0FE7317CL;
        if (l_315)
        {
            l_316 = &g_127;
            (*g_62) ^= l_315;
        }
        else
        {
            unsigned short l_318 = 65535UL;
            int l_319 = 0xE383BDC9L;
            l_317 = &g_63;

            ;
            l_319 &= l_318;
        }

        ;
        l_324 ^= (l_315 || ((*g_14) = ((*p_4) = ((safe_sub_func_uint8_t_u_u(((*l_323) |= l_322), g_77)) && (**l_310)))));
    }
    return (*g_54);


}







static char * func_5(unsigned char p_6, char * p_7, int p_8, unsigned short p_9, int p_10)
{
    unsigned short l_22 = 65535UL;
    int *l_298 = &g_299;
    (*l_298) |= (func_16(p_8, p_9) && (p_9 != ((safe_rshift_func_int16_t_s_u(p_9, p_10)) < (func_16(l_22, func_23(p_9, g_15)) < p_9))));

    ;
    return &g_112;


}







static unsigned short func_16(short p_17, short p_18)
{
    short l_19 = 0xF3F7L;
    return l_19;
}







static short func_23(unsigned short p_24, unsigned p_25)
{
    int *l_35 = &g_36;
    short *l_37 = &g_38;
    char *l_53 = &g_15;
    int **l_290 = &g_62;
    (*l_290) = func_26(g_13, (l_35 = func_29(((*l_37) = (safe_lshift_func_uint8_t_u_u((g_13 & ((*l_35) = p_25)), p_25))), (l_53 = func_39(func_41(g_47, func_49(l_37, l_53, g_54), g_62, (*g_14), &g_48))), g_77)));

    ;
    ;
    ;
    for (g_48 = 26; (g_48 == 11); g_48--)
    {
        unsigned l_295 = 0x7C16147BL;
        for (p_25 = 0; (p_25 != 36); p_25 = safe_add_func_int8_t_s_s(p_25, 7))
        {
            return l_295;
        }
        (*g_62) ^= (safe_mod_func_int8_t_s_s((*l_35), (l_295 | l_295)));
    }
    return (*l_35);
}







static int * func_26(unsigned char p_27, int * p_28)
{
    unsigned char l_279 = 0x67L;
    int l_280 = 0x5C74EEC1L;
    char *l_281 = &g_15;
    char **l_282 = &g_14;
    char l_283 = 0x27L;
    volatile int *l_286 = &g_143;
    int *l_289 = &g_36;
    l_286 = &g_143;
    (*l_286) = (safe_rshift_func_int8_t_s_u(0xA2L, 6));
    return l_289;


}







static int * func_29(short p_30, char * p_31, unsigned p_32)
{
    volatile int *l_199 = &g_143;
    volatile int **l_198 = &l_199;
    short ***l_202 = &g_201;
    int l_211 = 0xEC59EFA1L;
    unsigned char *l_212 = &g_134;
    short l_223 = (-5L);
    union U0 *l_231 = &g_127;
    char l_235 = 0xB3L;
    (*l_198) = &g_143;
    (*l_199) = ((((*l_212) = ((g_200 == l_202) < (safe_mod_func_uint32_t_u_u((((*p_31) & (*p_31)) & 0x99L), (func_16((safe_lshift_func_int16_t_s_s((((*l_212) = (func_16(((-1L) <= (((*g_54) < (**l_198)) > ((*g_47) = (safe_div_func_int8_t_s_s((&g_15 == (void*)0), (*g_14)))))), l_211) & p_30)) < l_211), l_211)), p_30) & p_30))))) ^ g_55) >= l_211);
    (*l_198) = (*l_198);
    for (g_115 = 0; (g_115 < 10); ++g_115)
    {
        unsigned char *l_219 = &g_13;
        int l_220 = 4L;
        short l_257 = 0x96D1L;
        union U0 *l_272 = &g_127;
        if ((safe_rshift_func_uint16_t_u_s(func_16((safe_mul_func_int32_t_s_s(((void*)0 == l_219), ((p_32 < (l_220 && (safe_div_func_int32_t_s_s((*g_62), 0xE0DDAC54L)))) == (l_223 || (safe_mod_func_int32_t_s_s((safe_lshift_func_int8_t_s_u((*p_31), 1)), 0x1E382ABCL)))))), l_220), 11)))
        {
            unsigned l_241 = 0x7E9F5D49L;
            char l_244 = 0L;
            for (p_32 = 0; (p_32 > 4); p_32 = safe_add_func_uint32_t_u_u(p_32, 8))
            {
                unsigned short l_230 = 0xEDE0L;
                unsigned char **l_245 = &l_212;
                short l_252 = 0L;
                int **l_258 = &g_54;
            }
        }
        else
        {
            int l_269 = (-8L);
            union U0 **l_270 = &g_132;
            union U0 **l_271 = &l_231;
            int l_273 = 8L;
            int *l_276 = &g_63;
            (*l_276) ^= (safe_sub_func_int8_t_s_s(((+(safe_rshift_func_int8_t_s_u((l_211 |= ((safe_sub_func_int16_t_s_s(((((safe_add_func_uint32_t_u_u((safe_add_func_int32_t_s_s((l_269 <= ((l_273 = ((*l_212) = (((*l_271) = ((*l_270) = l_231)) != l_272))) == (safe_sub_func_int8_t_s_s(((*p_31) = (*g_14)), (*g_14))))), (*l_199))), (((l_235 == l_269) >= (*g_62)) > p_30))) != p_30) > p_30) == g_15), p_30)) | (*g_54))), l_257))) >= (*g_47)), p_32));
        }
    }
    return &g_63;


}







static char * func_39(int * p_40)
{
    short *l_191 = &g_48;
    unsigned char *l_192 = &g_134;
    int *l_193 = &g_55;
    char *l_195 = &g_114;
    int **l_196 = (void*)0;
    int **l_197 = &g_62;
    (*l_197) = func_41(l_191, l_192, func_41(&g_77, l_192, l_193, (*l_193), l_191), ((*l_195) |= (g_194 = (0x8BD18442L >= 0UL))), l_191);

    ;
    return l_195;


}







static int * func_41(short * p_42, unsigned char * p_43, int * p_44, char p_45, short * p_46)
{
    unsigned char l_70 = 7UL;
    unsigned l_155 = 0xC67DCA9EL;
    int *l_162 = &g_55;
    (*g_62) = (func_16(func_16((*p_42), (*g_47)), (safe_rshift_func_uint16_t_u_s((safe_sub_func_int8_t_s_s((safe_sub_func_uint8_t_u_u(g_55, p_45)), (*g_14))), 9))) & l_70);
    for (p_45 = 0; (p_45 != (-22)); p_45 = safe_sub_func_uint16_t_u_u(p_45, 3))
    {
        int *l_78 = &g_63;
        int l_92 = 0xFEE22E7EL;
        short l_110 = (-6L);
        unsigned l_122 = 0x51224176L;
        int **l_141 = (void*)0;
        int **l_142 = &g_54;
    }
    return &g_55;


}







static unsigned char * func_49(short * p_50, char * p_51, int * p_52)
{
    int **l_59 = &g_54;
    short *l_61 = (void*)0;
    short **l_60 = &l_61;
    for (g_55 = (-6); (g_55 > 27); g_55++)
    {
        int l_58 = 5L;
        l_58 = (*g_54);
    }
    (*l_59) = p_52;
    (**l_59) = (&g_48 == ((*l_60) = p_50));

    ;
    return &g_13;


}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_13, "g_13", print_hash_value);
    transparent_crc(g_15, "g_15", print_hash_value);
    transparent_crc(g_36, "g_36", print_hash_value);
    transparent_crc(g_38, "g_38", print_hash_value);
    transparent_crc(g_48, "g_48", print_hash_value);
    transparent_crc(g_55, "g_55", print_hash_value);
    transparent_crc(g_63, "g_63", print_hash_value);
    transparent_crc(g_77, "g_77", print_hash_value);
    transparent_crc(g_85, "g_85", print_hash_value);
    transparent_crc(g_112, "g_112", print_hash_value);
    transparent_crc(g_114, "g_114", print_hash_value);
    transparent_crc(g_115, "g_115", print_hash_value);
    transparent_crc(g_127.f0, "g_127.f0", print_hash_value);
    transparent_crc(g_134, "g_134", print_hash_value);
    transparent_crc(g_143, "g_143", print_hash_value);
    transparent_crc(g_194, "g_194", print_hash_value);
    transparent_crc(g_299, "g_299", print_hash_value);
    transparent_crc(g_340, "g_340", print_hash_value);
    transparent_crc(g_447, "g_447", print_hash_value);
    transparent_crc(g_451, "g_451", print_hash_value);
    transparent_crc(g_503, "g_503", print_hash_value);
    transparent_crc(g_523, "g_523", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
