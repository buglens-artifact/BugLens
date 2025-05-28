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
   unsigned f1;
   short f2;
   unsigned f3;
   int f4;
   unsigned f5;
   char f6;
   unsigned char f7;
   short f8;
   short f9;
};


static unsigned g_11 = 2UL;
static int g_18 = 8L;
static int *g_17 = &g_18;
static struct S0 g_45 = {0xAC84C923L,0x2B6367AFL,7L,0xCE65C5BCL,0xBF785B8EL,0xB303A67DL,1L,255UL,1L,0x9815L};
static struct S0 g_64 = {1L,4294967295UL,0x516CL,4294967288UL,-10L,0x743E6CB9L,0x64L,247UL,0xE2F7L,2L};
static struct S0 *g_122 = &g_45;
static struct S0 **g_121 = &g_122;
static int g_132 = (-10L);
static unsigned g_149 = 6UL;
static int **g_170 = &g_17;
static int g_188 = 0xB6C139F9L;
static int g_195 = 1L;
static int *g_194 = &g_195;
static unsigned short g_342 = 65528UL;
static int g_398 = 6L;
static unsigned g_422 = 0x99BF2CEEL;
static int *g_446 = &g_18;



static unsigned func_1(void);
static int * func_2(int * p_3, int * p_4);
static int * func_5(struct S0 p_6, int p_7, char p_8, unsigned short p_9, unsigned short p_10);
static struct S0 func_12(int * p_13, int * p_14);
static int * func_15(int * p_16);
static struct S0 func_19(struct S0 p_20, int * p_21, short p_22, char p_23);
static struct S0 func_25(int p_26, int * p_27, int * p_28);
static int func_29(int p_30);
static int func_31(int * p_32);
static struct S0 func_35(int * p_36, unsigned char p_37, int * p_38);
static unsigned func_1(void)
{
    char l_229 = 0L;
    int *l_232 = &g_195;
    short l_233 = 1L;
    int **l_363 = &l_232;
    struct S0 *l_370 = &g_64;
    unsigned l_382 = 1UL;
    short l_396 = 0x28B5L;
    unsigned l_408 = 0xE1D6262DL;
    struct S0 **l_427 = &g_122;
    unsigned char l_430 = 254UL;
    (*l_363) = func_2(func_5((g_11 , func_12(func_15(g_17), g_194)), l_229, (safe_mul_func_uint8_t_u_u(((((void*)0 != l_232) < ((*l_232) > 0x652AL)) , g_11), 0x50L)), g_11, l_233), &g_195);
    if ((safe_sub_func_uint8_t_u_u(((((*l_363) == (*l_363)) && (safe_add_func_int8_t_s_s((g_64.f2 ^ ((*l_363) != (void*)0)), (safe_mod_func_uint32_t_u_u(g_45.f0, 0xE25946A8L))))) & (g_45.f6 | 0x3676L)), 0x7BL)))
    {
        int *l_374 = &g_18;
        int *l_375 = &g_64.f0;
        (*g_121) = l_370;
        for (g_64.f0 = 7; (g_64.f0 != (-25)); g_64.f0--)
        {
            int l_373 = 0L;
            (*l_363) = func_2(func_2(((+(+l_373)) , (*l_363)), l_374), l_374);
        }
        (*l_363) = (*l_363);
    }
    else
    {
        unsigned l_383 = 7UL;
        int **l_395 = &l_232;
        int l_431 = (-1L);
        unsigned short l_445 = 65535UL;
        unsigned l_447 = 0UL;
        for (g_64.f6 = 0; (g_64.f6 <= 9); g_64.f6 = safe_add_func_uint32_t_u_u(g_64.f6, 1))
        {
            struct S0 l_378 = {0L,0x34F60C50L,0x7FC3L,4294967295UL,0xC09B5240L,0x5B9BCCC8L,0x80L,9UL,0x8147L,-2L};
            struct S0 *l_379 = &g_45;
            int *l_423 = (void*)0;
            int *l_432 = (void*)0;
            int *l_434 = &l_378.f0;
            (*l_363) = &g_188;
            (*l_379) = l_378;
            if ((safe_lshift_func_uint16_t_u_u((((l_382 && ((g_64.f3 == (((l_383 == l_378.f0) | (safe_mod_func_int8_t_s_s((**l_363), (safe_mod_func_int32_t_s_s((safe_sub_func_int16_t_s_s(0x954CL, (-9L))), ((safe_unary_minus_func_uint32_t_u((safe_unary_minus_func_int16_t_s(((g_132 , (&g_170 != (void*)0)) < 0xA3L))))) ^ l_378.f3)))))) < g_64.f5)) <= (*l_232))) , l_383) || 0xE3L), 8)))
            {
                struct S0 l_394 = {0x84EC5B80L,3UL,0L,0x1E5F0445L,1L,0x666E2AC3L,0xDFL,0x48L,0x5594L,0xA72AL};
                int **l_397 = (void*)0;
                (**l_395) = (safe_mul_func_uint32_t_u_u((l_394 , (0x7026334DL != (((l_395 == ((l_396 != g_195) , l_397)) && (g_64.f3 , ((g_195 <= (g_45.f2 && 0x67L)) >= g_398))) | (**l_363)))), 0UL));
                if ((g_64.f9 | 0x14L))
                {
                    unsigned l_407 = 1UL;
                    unsigned short l_428 = 0UL;
                    int l_429 = 0x826D0037L;
                    if (((g_64.f0 , g_18) | (safe_add_func_uint32_t_u_u(g_64.f5, ((safe_rshift_func_int16_t_s_s(((((+((((safe_mul_func_uint16_t_u_u(g_188, ((g_64.f0 , ((l_378.f9 == 1L) >= (g_45.f9 , (((safe_sub_func_uint8_t_u_u(g_64.f9, l_407)) , g_45.f4) , g_64.f7)))) & 4294967294UL))) == g_64.f3) && 1L) & 0xDFL)) ^ g_64.f5) > g_64.f8) < (**l_363)), l_408)) , g_45.f9)))))
                    {
                        (**l_395) = (safe_mod_func_uint32_t_u_u((l_407 < 0x83EED2C2L), (safe_unary_minus_func_int8_t_s((((l_407 > (safe_lshift_func_int16_t_s_u(((safe_rshift_func_int16_t_s_u((safe_rshift_func_uint16_t_u_u(g_64.f1, ((&l_370 == (((g_45.f6 , g_45.f0) && (safe_sub_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u((g_45.f3 || g_64.f2), (*l_232))), 0xBABCL))) , &g_122)) , 0x3077L))), g_398)) >= (*l_232)), g_64.f0))) , (**l_395)) ^ (*l_232))))));
                        (*l_395) = func_2((g_45.f5 , (g_422 , l_423)), (*l_395));
                        (*l_395) = (((safe_unary_minus_func_uint32_t_u((((safe_sub_func_uint8_t_u_u(246UL, ((!g_64.f8) <= ((((((&l_397 != (void*)0) != (((void*)0 != &g_17) >= ((((g_45.f3 <= (g_149 != (l_427 != (void*)0))) <= g_64.f6) | g_132) | g_64.f3))) || g_64.f5) & g_45.f7) > g_45.f6) == l_407)))) >= l_428) , l_407))) ^ g_188) , (void*)0);
                        l_429 = l_383;
                    }
                    else
                    {
                        return g_45.f4;
                    }
                }
                else
                {
                    if (l_430)
                        break;
                    if ((*l_232))
                        continue;
                    return g_64.f2;
                }
                if (g_195)
                    break;
                if (l_431)
                    break;
            }
            else
            {
                int *l_433 = &l_378.f0;
                (*l_363) = l_432;
                (*l_433) = 7L;
                g_64.f0 = l_431;
            }
            (*l_434) = (g_11 | g_45.f8);
        }
        (*g_446) = (safe_sub_func_uint16_t_u_u(((safe_add_func_uint32_t_u_u((((g_195 , &l_395) == (g_64.f1 , &g_170)) && (safe_add_func_int8_t_s_s((safe_sub_func_int8_t_s_s((((g_45.f3 , (func_25((((0x93L > (((safe_lshift_func_int16_t_s_s((g_188 <= g_64.f4), (g_45.f8 , g_64.f1))) , 0xA2A0L) <= l_445)) & g_195) ^ g_45.f5), (*l_395), g_446) , g_64.f9)) & g_45.f3) | l_447), 0L)), g_45.f2))), 0x1DA9DD24L)) == g_188), g_45.f0));
    }
    (*l_363) = (*l_363);
    return g_45.f6;
}







static int * func_2(int * p_3, int * p_4)
{
    short l_361 = (-9L);
    int *l_362 = (void*)0;
    (*p_4) = l_361;
    return l_362;
}







static int * func_5(struct S0 p_6, int p_7, char p_8, unsigned short p_9, unsigned short p_10)
{
    struct S0 *l_239 = &g_45;
    struct S0 l_242 = {0xF3AA1B83L,0xC6D80C1CL,1L,4294967295UL,0xF2542F08L,0x8798A2A8L,-8L,7UL,0x8D52L,-7L};
    int *l_281 = (void*)0;
    unsigned l_319 = 0x49A28457L;
    int *l_333 = &g_64.f0;
    struct S0 l_358 = {0L,0x2F0B5B4AL,0xD524L,0x2631DDC3L,0xBEE5E2D7L,0x209384B6L,0xDBL,0x62L,-3L,0L};
    unsigned l_359 = 0x33713C97L;
    for (p_10 = 0; (p_10 != 41); p_10 = safe_add_func_uint8_t_u_u(p_10, 9))
    {
        int l_236 = 8L;
        if (l_236)
            break;
        for (g_64.f4 = 0; (g_64.f4 == (-18)); --g_64.f4)
        {
            int *l_240 = (void*)0;
            int *l_241 = &l_236;
            (*g_121) = l_239;
            (*l_241) = (-7L);
        }
        (*l_239) = l_242;
    }
    if (p_10)
    {
        int *l_243 = (void*)0;
        int **l_244 = (void*)0;
        int **l_245 = &g_17;
        struct S0 **l_251 = (void*)0;
        (*l_245) = l_243;
        for (p_8 = 8; (p_8 >= (-19)); p_8 = safe_sub_func_int8_t_s_s(p_8, 3))
        {
            unsigned char l_248 = 0xC2L;
            int *l_282 = &g_18;
            struct S0 **l_297 = (void*)0;
            unsigned short l_301 = 1UL;
            short l_302 = 0x7ADAL;
            l_248 = p_10;
            for (p_6.f3 = (-6); (p_6.f3 < 18); p_6.f3++)
            {
                int *l_256 = &g_132;
                int ***l_293 = &g_170;
                unsigned char l_294 = 7UL;
                if ((((void*)0 == l_251) <= ((((((safe_sub_func_uint16_t_u_u((safe_add_func_int16_t_s_s((~(func_31(l_256) & (safe_unary_minus_func_uint16_t_u((p_6.f0 > (((0xCB5CL | l_248) , (safe_lshift_func_int8_t_s_u((safe_mul_func_int16_t_s_s(g_45.f9, (safe_rshift_func_int8_t_s_u((safe_mod_func_uint16_t_u_u((safe_mul_func_int8_t_s_s(((safe_mod_func_int8_t_s_s((safe_lshift_func_int8_t_s_u(((*g_121) != (void*)0), 3)), p_6.f5)) <= p_6.f2), g_195)), 0x91FAL)), g_45.f1)))), p_6.f4))) != l_248)))))), 1L)), g_45.f0)) >= g_45.f6) , (void*)0) == (void*)0) >= p_6.f0) != l_242.f0)))
                {
                    int l_274 = 0x320FEFA8L;
                    (*l_256) = (safe_lshift_func_uint8_t_u_u(l_274, ((1UL < (safe_mod_func_uint32_t_u_u(((safe_mod_func_int32_t_s_s(p_7, (l_274 | (*l_256)))) & (safe_mul_func_int8_t_s_s((g_45.f4 ^ p_7), ((g_45.f6 & (((*l_256) , 2UL) , 4L)) , p_6.f3)))), (*l_256)))) == (-1L))));
                    if ((*l_256))
                        break;
                    (*l_256) = ((p_6.f4 , 0x3C1AL) || g_45.f4);
                }
                else
                {
                    return l_281;
                }
                l_294 = (((l_282 == &g_188) && g_11) > ((safe_add_func_uint16_t_u_u(g_64.f1, 1UL)) && p_6.f1));
            }
            (*l_282) = (((safe_mul_func_uint8_t_u_u(p_6.f0, g_45.f6)) && g_64.f1) >= ((*l_282) > ((((p_6.f6 , &l_239) != l_297) >= (((safe_rshift_func_uint8_t_u_s(((safe_unary_minus_func_uint32_t_u((p_9 == ((+((l_301 <= (*l_282)) | l_302)) >= g_45.f5)))) != 4294967295UL), 3)) | (*l_282)) || g_64.f3)) & 0UL)));
        }
        if (l_242.f3)
        {
            struct S0 **l_309 = &l_239;
            int *l_314 = &g_132;
            for (p_7 = 0; (p_7 >= (-23)); p_7--)
            {
                unsigned l_312 = 0x915E2869L;
                int *l_318 = &g_195;
                struct S0 **l_325 = &g_122;
                for (p_6.f8 = (-5); (p_6.f8 != 3); ++p_6.f8)
                {
                    int l_313 = (-1L);
                    l_313 = (((p_6.f5 <= (g_11 != (safe_lshift_func_int8_t_s_s((((void*)0 == l_309) , p_7), 7)))) | ((((safe_mod_func_uint8_t_u_u((0x51L < l_312), l_312)) , (*l_309)) != (void*)0) || g_64.f4)) < 0x1D087DD8L);
                    (*l_239) = func_12(l_281, l_281);
                    (*l_314) = 0x7313F530L;
                    for (g_64.f5 = 0; (g_64.f5 != 11); g_64.f5 = safe_add_func_uint8_t_u_u(g_64.f5, 1))
                    {
                        struct S0 l_317 = {0x6D88AE04L,4294967295UL,1L,0xA870EE55L,5L,1UL,-1L,254UL,0L,0xAC84L};
                        (*l_239) = l_317;
                        g_188 = l_317.f1;
                    }
                }
            }
        }
        else
        {
            int *l_326 = &g_188;
            l_326 = (*l_245);
            (*l_245) = l_326;
            if (((p_6.f0 == (((p_7 | ((p_8 >= (p_6.f6 || ((void*)0 != &g_170))) & ((safe_mul_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s(((p_6.f2 & g_64.f5) != p_10), 7)), p_6.f1)) > g_149))) >= p_6.f9) > 0xCF1DEF63L)) ^ 0xF5L))
            {
                (*l_245) = l_333;
            }
            else
            {
                int *l_343 = &g_188;
                (*l_245) = (((((safe_add_func_uint8_t_u_u((((safe_add_func_uint8_t_u_u(0x64L, g_18)) == (safe_sub_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u((((g_64.f2 , ((g_64.f6 , p_6) , g_188)) == g_64.f7) | g_11), g_342)), p_6.f0))) && g_45.f6), g_132)) != p_6.f9) , (*g_121)) != &p_6) , l_343);
                for (p_6.f5 = 23; (p_6.f5 <= 57); p_6.f5 = safe_add_func_int16_t_s_s(p_6.f5, 3))
                {
                    int *l_347 = &g_132;
                    if ((p_6.f0 < 0x49L))
                    {
                        int *l_346 = (void*)0;
                        (*l_245) = (g_64.f5 , l_346);
                    }
                    else
                    {
                        (*l_245) = (*l_245);
                        if ((*l_343))
                            break;
                        g_194 = l_347;
                    }
                }
                for (g_45.f8 = (-2); (g_45.f8 <= 3); g_45.f8++)
                {
                    unsigned l_356 = 1UL;
                    int l_357 = 0xE118DF4FL;
                }
            }
        }
    }
    else
    {
        int *l_360 = &g_64.f0;
        (*g_121) = (p_6 , &l_358);
    }
    return l_281;
}







static struct S0 func_12(int * p_13, int * p_14)
{
    short l_200 = 0xD400L;
    struct S0 *l_203 = (void*)0;
    struct S0 l_217 = {-1L,0xD2C0B276L,1L,1UL,0xE8423B88L,1UL,0xA2L,0xECL,0xFAA9L,0xD2B0L};
    unsigned l_219 = 0x381F3CD5L;
    struct S0 l_228 = {0x468E9773L,4294967287UL,0L,4294967289UL,0x51691744L,0xEF87003EL,0x03L,0x33L,0xCA1AL,0xB28CL};
    if ((((safe_lshift_func_int8_t_s_s(((g_64.f0 < ((~(safe_mul_func_int16_t_s_s(l_200, g_45.f6))) | (safe_sub_func_int8_t_s_s(l_200, l_200)))) ^ g_45.f7), ((l_200 <= (-7L)) , 0x6AL))) < l_200) , l_200))
    {
        int **l_211 = &g_194;
        (*g_121) = l_203;
        for (g_45.f2 = 28; (g_45.f2 == (-7)); g_45.f2 = safe_sub_func_uint32_t_u_u(g_45.f2, 9))
        {
            int **l_206 = &g_17;
            struct S0 l_207 = {0L,4294967287UL,-2L,1UL,-4L,0x7BF0A0A7L,0x36L,0x6FL,3L,0xF810L};
            (*l_206) = p_14;
            return l_207;
        }
        for (g_64.f5 = 0; (g_64.f5 <= 16); g_64.f5++)
        {
            int *l_210 = (void*)0;
            l_210 = &g_195;
        }
        (*l_211) = (void*)0;
    }
    else
    {
        struct S0 *l_214 = &g_64;
        int l_216 = 0x85674570L;
        unsigned l_218 = 4294967290UL;
        char l_227 = 0x48L;
        for (g_45.f7 = 0; (g_45.f7 >= 60); g_45.f7++)
        {
            int *l_224 = (void*)0;
        }
    }
    return l_228;
}







static int * func_15(int * p_16)
{
    unsigned l_24 = 0x4FAF1418L;
    int *l_187 = &g_188;
    int **l_186 = &l_187;
    int ***l_185 = &l_186;
    (*l_187) = ((func_19((l_24 , func_25(func_29(func_31(&g_18)), (((safe_mul_func_int8_t_s_s(l_24, (l_24 != (l_24 && l_24)))) < ((((g_11 || g_11) , l_185) != (void*)0) <= g_188)) , (**l_185)), (**l_185))), (**l_185), (**l_186), g_188) , (**l_186)) != (*l_187));
    return p_16;
}







static struct S0 func_19(struct S0 p_20, int * p_21, short p_22, char p_23)
{
    int l_191 = 0xC9281E62L;
    int *l_192 = &g_188;
    struct S0 *l_193 = &g_64;
    (*l_193) = func_25(l_191, l_192, p_21);
    return (*l_193);
}







static struct S0 func_25(int p_26, int * p_27, int * p_28)
{
    struct S0 l_189 = {-1L,0xC038C3F4L,0x088FL,0x3ABCEACDL,-3L,4294967295UL,8L,0xDDL,0x1883L,0x800AL};
    struct S0 *l_190 = &g_64;
    (*l_190) = l_189;
    (*l_190) = (*l_190);
    return (*l_190);
}







static int func_29(int p_30)
{
    int **l_154 = &g_17;
    struct S0 l_157 = {-1L,0x33A2BCBEL,0xFDDEL,0xF1B1ED08L,0L,4294967292UL,0x57L,0xD6L,0x5B7CL,0x1603L};
    int *l_158 = &g_18;
    (*l_154) = (void*)0;
    (**g_121) = ((safe_mul_func_int16_t_s_s((func_31(&g_18) | g_45.f0), 0xDEE4L)) , l_157);
    (*l_158) = (!(p_30 ^ (!0x2C47L)));
    if (((safe_mul_func_uint8_t_u_u(((*l_154) != (void*)0), p_30)) < p_30))
    {
        int *l_161 = (void*)0;
        struct S0 **l_169 = &g_122;
        (*l_154) = l_161;
        for (g_64.f0 = 0; (g_64.f0 < 14); g_64.f0++)
        {
            struct S0 *l_164 = (void*)0;
            (*g_121) = l_164;
            if ((*l_158))
            {
                for (g_64.f7 = 0; (g_64.f7 > 28); g_64.f7 = safe_add_func_uint32_t_u_u(g_64.f7, 8))
                {
                    return (*l_158);
                }
                (*l_158) = 0x4A638037L;
                if ((*l_158))
                    continue;
                (*l_154) = l_161;
            }
            else
            {
                (*l_154) = (void*)0;
                (*l_154) = l_161;
            }
        }
        if (func_31(&g_18))
        {
            int l_167 = 0L;
            if (l_167)
            {
                struct S0 l_168 = {1L,4294967287UL,-8L,0x2A35ED49L,0L,0xCDD60A0AL,-1L,253UL,1L,-10L};
                l_168 = func_35(&l_167, (g_64.f1 , ((p_30 , (*l_158)) , g_64.f6)), &g_18);
                (*l_154) = (*l_154);
                (*g_121) = (l_167 , (*g_121));
                p_30 = ((void*)0 == l_169);
            }
            else
            {
                g_170 = &g_17;
            }
            if (((-8L) ^ l_167))
            {
                (*l_158) = ((void*)0 == (*g_121));
                (*l_154) = (*l_154);
            }
            else
            {
                int *l_174 = &g_18;
                for (g_149 = 6; (g_149 <= 56); g_149++)
                {
                    unsigned char l_173 = 9UL;
                    if (l_173)
                        break;
                    (*g_170) = l_174;
                    (*l_154) = (void*)0;
                    (*l_154) = &p_30;
                }
                return p_30;
            }
            (*l_154) = &p_30;
        }
        else
        {
            int ***l_175 = &g_170;
            (*l_175) = &l_161;
            (**l_175) = &p_30;
        }
    }
    else
    {
        int *l_176 = &g_64.f0;
        struct S0 l_177 = {0L,4UL,6L,1UL,0x8ED02343L,0UL,0x45L,0UL,1L,0xE0BAL};
        l_177 = (*g_122);
        (*l_158) = (safe_unary_minus_func_uint16_t_u((safe_mul_func_int8_t_s_s((((*g_170) == (*g_170)) , (((g_64.f8 || p_30) ^ (*l_176)) || ((g_64.f2 ^ (+((*l_176) > ((safe_mul_func_int8_t_s_s(p_30, g_11)) < (*l_158))))) <= p_30))), 255UL))));
    }
    return (*l_158);
}







static int func_31(int * p_32)
{
    unsigned char l_39 = 0x76L;
    (*p_32) = ((void*)0 != p_32);
    (*p_32) = (((safe_lshift_func_uint16_t_u_u((func_35(&g_18, ((*p_32) == l_39), &g_18) , ((safe_sub_func_uint8_t_u_u(((-3L) && g_149), (+(safe_add_func_uint32_t_u_u(0x559A8912L, (safe_sub_func_uint32_t_u_u((l_39 , l_39), 0x46744D27L))))))) || 0x5C39C69AL)), l_39)) != l_39) , 0x000AD52DL);
    return (*p_32);
}







static struct S0 func_35(int * p_36, unsigned char p_37, int * p_38)
{
    int **l_40 = (void*)0;
    int **l_41 = &g_17;
    struct S0 l_50 = {0x67733019L,0x7FBCB15EL,1L,0xBF9D45AAL,0x75BEB379L,0xE568C3B0L,0x3FL,255UL,0xBA70L,0x9510L};
    int *l_108 = &g_64.f0;
    (*l_41) = &g_18;
    for (g_18 = 16; (g_18 == 22); g_18++)
    {
        struct S0 *l_44 = &g_45;
        struct S0 **l_46 = &l_44;
        int l_57 = (-1L);
        int **l_86 = &g_17;
        (*l_46) = l_44;
        for (g_45.f3 = 0; (g_45.f3 <= 33); ++g_45.f3)
        {
            struct S0 l_73 = {0x103D800CL,0xE564DE9AL,0x57C7L,4294967295UL,0x0B88CC77L,7UL,-1L,0x7CL,0xF228L,0xFB98L};
            int *l_97 = (void*)0;
            if ((*g_17))
            {
                struct S0 l_49 = {-1L,4294967293UL,-9L,4UL,1L,0x51158E58L,0x09L,0x78L,0x5337L,0xC164L};
                (*l_41) = (*l_41);
                if ((*p_38))
                {
                    struct S0 l_52 = {2L,1UL,-1L,1UL,0x99451619L,0xE9ABA4A7L,0x2FL,0x45L,0x746EL,0x3855L};
                    if ((g_11 != g_45.f6))
                    {
                        (*l_41) = (*l_41);
                        (*l_41) = &g_18;
                        l_50 = l_49;
                        if (l_49.f2)
                            break;
                    }
                    else
                    {
                        int *l_51 = &l_50.f0;
                        (*l_51) = (g_45.f7 > (p_37 < l_49.f5));
                    }
                    (*l_41) = &g_18;
                    (*l_41) = (l_52 , &g_18);
                }
                else
                {
                    unsigned l_53 = 0x8E71DF66L;
                    struct S0 l_58 = {0x5A0A6BD2L,0x779239A8L,0x2A6FL,0xD69053DEL,0x4C941E8EL,6UL,0x34L,0x3DL,0x1155L,-7L};
                    (*l_41) = (l_49 , p_38);
                    l_53 = (*g_17);
                    (*l_41) = p_38;
                    for (l_50.f8 = 7; (l_50.f8 < (-7)); l_50.f8 = safe_sub_func_uint8_t_u_u(l_50.f8, 1))
                    {
                        int *l_56 = &l_49.f0;
                        struct S0 *l_59 = &l_49;
                        (*l_41) = p_36;
                        (*l_56) = (0x5D21L & (g_45.f5 < p_37));
                        l_57 = (g_45.f2 == 0xE8L);
                        (*l_59) = l_58;
                    }
                }
            }
            else
            {
                if ((*g_17))
                    break;
                (*l_41) = (void*)0;
            }
            (*l_41) = &g_18;
            (*l_41) = p_38;
            for (l_50.f9 = (-16); (l_50.f9 != (-17)); --l_50.f9)
            {
                char l_62 = 0xD7L;
                struct S0 *l_63 = &g_64;
                (*l_63) = ((p_37 , l_62) , (*l_44));
                if (((safe_add_func_uint16_t_u_u(65532UL, (65532UL && l_57))) == (((safe_mod_func_int16_t_s_s(((*l_41) == &g_18), 0x1B12L)) || (safe_rshift_func_int8_t_s_u((((l_57 >= g_64.f5) , ((**l_41) >= 0UL)) == p_37), 4))) == 0x1FL)))
                {
                    (*l_41) = (void*)0;
                    for (l_62 = 0; (l_62 == (-15)); l_62 = safe_sub_func_int32_t_s_s(l_62, 3))
                    {
                        l_73 = (*l_63);
                    }
                    g_64.f0 = (safe_sub_func_uint8_t_u_u(((p_37 , (safe_sub_func_uint32_t_u_u((safe_sub_func_uint8_t_u_u((p_37 , g_45.f9), (safe_mul_func_uint8_t_u_u((0x83639C8BL | (p_37 == g_64.f8)), (safe_add_func_uint32_t_u_u((g_45.f0 && g_45.f4), (safe_sub_func_uint8_t_u_u(((&p_38 == l_86) | g_64.f8), p_37)))))))), 0x67933A92L))) ^ 1UL), (-6L)));
                }
                else
                {
                    struct S0 l_99 = {-10L,0UL,0L,0x601A515FL,-1L,4294967290UL,0xE4L,0x71L,0xE7DAL,0xA0B5L};
                    for (g_45.f4 = 0; (g_45.f4 == 18); g_45.f4 = safe_add_func_int8_t_s_s(g_45.f4, 4))
                    {
                        int *l_98 = &g_64.f0;
                        (*l_98) = (safe_mul_func_uint16_t_u_u((safe_mod_func_int16_t_s_s(g_45.f4, p_37)), (((+(((safe_sub_func_int16_t_s_s((((0xAE05L >= (+(+l_62))) , ((safe_sub_func_int32_t_s_s(((l_97 != &g_18) >= g_64.f1), 0x11B9A2A7L)) < (&g_17 == (void*)0))) , 0x850CL), 0UL)) != 0xEFAAD5B6L) | p_37)) != l_62) > (-6L))));
                    }
                    return l_99;
                }
                (*l_41) = (l_50 , &g_18);
            }
        }
    }
    if ((safe_rshift_func_uint16_t_u_u(((safe_lshift_func_uint16_t_u_s(p_37, (**l_41))) & ((safe_mod_func_uint8_t_u_u((l_50 , (safe_mod_func_int8_t_s_s(g_64.f0, g_64.f6))), (g_45.f8 , p_37))) == ((p_37 & (**l_41)) && g_64.f5))), 8)))
    {
        l_108 = (*l_41);
    }
    else
    {
        int *l_109 = (void*)0;
        int l_146 = 0L;
        (*l_41) = p_38;
        (*l_41) = l_109;
        l_50 = g_45;
        if (g_45.f9)
        {
            unsigned l_118 = 4294967295UL;
            struct S0 l_127 = {-1L,0x71BF8528L,0L,0x087EC753L,-6L,0x0A1B9E14L,0x8CL,0xCFL,-1L,0x89A5L};
            for (g_45.f8 = 0; (g_45.f8 < (-18)); g_45.f8--)
            {
                unsigned char l_117 = 249UL;
                struct S0 l_129 = {3L,0x365E47C5L,0x6E72L,0x9FE98CDCL,0x599D76A8L,1UL,0xAEL,255UL,0xE72BL,3L};
                int *l_135 = &g_45.f0;
                for (g_64.f4 = 0; (g_64.f4 != (-26)); g_64.f4 = safe_sub_func_uint32_t_u_u(g_64.f4, 8))
                {
                    unsigned short l_114 = 0xFD4BL;
                    struct S0 *l_128 = (void*)0;
                    (*p_38) = (((((l_114 > (safe_mul_func_int8_t_s_s((p_37 != l_114), (l_117 & (p_37 | l_118))))) && ((0x1389L & (safe_add_func_int8_t_s_s(p_37, ((g_64 , g_45.f4) & g_45.f1)))) , 1L)) , g_121) == (void*)0) & (*p_36));
                    (*p_36) = ((safe_add_func_int16_t_s_s((l_114 | (l_114 == (l_50 , 1UL))), ((+p_37) , (((safe_mod_func_uint32_t_u_u(((((g_45.f0 , p_37) || (p_37 == g_64.f9)) ^ 0x37L) || g_45.f0), 4294967286UL)) | g_45.f8) , (-1L))))) && p_37);
                    l_129 = l_127;
                }
                g_132 = ((safe_rshift_func_uint16_t_u_s(g_132, p_37)) || (((safe_lshift_func_int16_t_s_u(g_45.f9, p_37)) || p_37) || (g_64.f3 && 0x16229581L)));
                (*l_41) = l_135;
            }
            if (((((((safe_mod_func_uint8_t_u_u(g_64.f0, (safe_add_func_int8_t_s_s((g_64.f8 , g_11), (p_37 <= (0xF0L == (g_64.f3 & g_45.f8))))))) & (safe_rshift_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u(0x5997L, 11)), 15))) <= ((safe_mod_func_int32_t_s_s((&l_50 != (*g_121)), p_37)) != p_37)) & l_127.f8) <= 0x8B09L) , 0x83FB5D41L))
            {
                (*p_36) = l_146;
            }
            else
            {
                (*l_41) = &g_18;
                g_17 = p_38;
            }
            (*l_41) = (void*)0;
            (*p_36) = l_127.f0;
        }
        else
        {
            (*l_41) = (void*)0;
        }
    }
    return l_50;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_11, "g_11", print_hash_value);
    transparent_crc(g_18, "g_18", print_hash_value);
    transparent_crc(g_45.f0, "g_45.f0", print_hash_value);
    transparent_crc(g_45.f1, "g_45.f1", print_hash_value);
    transparent_crc(g_45.f2, "g_45.f2", print_hash_value);
    transparent_crc(g_45.f3, "g_45.f3", print_hash_value);
    transparent_crc(g_45.f4, "g_45.f4", print_hash_value);
    transparent_crc(g_45.f5, "g_45.f5", print_hash_value);
    transparent_crc(g_45.f6, "g_45.f6", print_hash_value);
    transparent_crc(g_45.f7, "g_45.f7", print_hash_value);
    transparent_crc(g_45.f8, "g_45.f8", print_hash_value);
    transparent_crc(g_45.f9, "g_45.f9", print_hash_value);
    transparent_crc(g_64.f0, "g_64.f0", print_hash_value);
    transparent_crc(g_64.f1, "g_64.f1", print_hash_value);
    transparent_crc(g_64.f2, "g_64.f2", print_hash_value);
    transparent_crc(g_64.f3, "g_64.f3", print_hash_value);
    transparent_crc(g_64.f4, "g_64.f4", print_hash_value);
    transparent_crc(g_64.f5, "g_64.f5", print_hash_value);
    transparent_crc(g_64.f6, "g_64.f6", print_hash_value);
    transparent_crc(g_64.f7, "g_64.f7", print_hash_value);
    transparent_crc(g_64.f8, "g_64.f8", print_hash_value);
    transparent_crc(g_64.f9, "g_64.f9", print_hash_value);
    transparent_crc(g_132, "g_132", print_hash_value);
    transparent_crc(g_149, "g_149", print_hash_value);
    transparent_crc(g_188, "g_188", print_hash_value);
    transparent_crc(g_195, "g_195", print_hash_value);
    transparent_crc(g_342, "g_342", print_hash_value);
    transparent_crc(g_398, "g_398", print_hash_value);
    transparent_crc(g_422, "g_422", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
