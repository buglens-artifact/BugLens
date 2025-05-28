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
   short f1;
   char f2;
   const int f3;
   const short f4;
};

union U1 {
   char * f0;
};

union U2 {
   char * f0;
   int f1;
};

union U3 {
   const unsigned f0 : 15;
};

union U4 {
   char * f0;
   char * f1;
   const short f2;
};


static int g_5 = 0x5D7249AAL;
static int g_34 = 0xAAC1E0F7L;
static char g_36 = (-6L);
static int g_41 = 0xA6D7D045L;
static unsigned short g_51 = 0x03A7L;
static int g_53 = 0x37718CE6L;
static unsigned short g_73 = 0x425FL;
static unsigned short *g_72 = &g_73;
static int g_81 = 0xE1851AA8L;
static int g_84 = 0x5FA5B821L;
static union U1 g_88 = {0};
static short g_123 = 0xF0F4L;
static short g_137 = 0x5C6BL;
static short g_154 = 0x139CL;
static union U3 g_182 = {3UL};
static char *g_194 = &g_36;
static char **g_193 = &g_194;
static unsigned g_196 = 4294967290UL;
static short *g_200 = &g_137;
static short **g_199 = &g_200;
static union U2 g_238 = {0};
static union U2 *g_237 = &g_238;
static union U0 g_266 = {1L};
static union U0 * const g_265 = &g_266;
static union U0 g_270 = {0L};
static unsigned char g_310 = 7UL;
static unsigned char g_338 = 0xEEL;
static char ***g_341 = &g_193;
static char ****g_340 = &g_341;
static union U2 **g_361 = &g_237;
static union U2 *** const g_360 = &g_361;
static union U0 g_374 = {0x85L};
static union U0 *g_373 = &g_374;
static int *g_379 = (void*)0;
static unsigned char g_398 = 0UL;
static unsigned g_411 = 0x573957DEL;
static int g_421 = 0x642C3FEEL;
static union U3 g_423 = {4294967295UL};



static int func_1(void);
static unsigned short func_13(union U2 p_14, char p_15, int * p_16);
static unsigned func_22(const int * p_23, const union U3 p_24);
static int * func_25(char * p_26);
static char * func_27(short p_28, int p_29);
static int func_37(char * p_38);
static union U3 func_54(int * p_55, union U4 p_56, char * p_57, const int * p_58);
static int * func_59(int p_60, union U1 p_61, union U2 p_62, unsigned short p_63, char * p_64);
static unsigned short * func_67(int * p_68, unsigned short p_69);
static int * func_74(int * p_75, int * p_76);
static int func_1(void)
{
    short l_2 = (-3L);
    union U2 l_17 = {0};
    int *l_188 = (void*)0;
    int *l_216 = &l_17.f1;
    char *l_227 = &g_36;
    unsigned *l_263 = &g_196;
    const union U3 l_264 = {1UL};
    union U0 *l_269 = &g_270;
    char ***l_300 = &g_193;
    const short l_371 = 0x843AL;
    unsigned l_432 = 4294967288UL;
    int *l_433 = (void*)0;
    int *l_434 = &g_81;
    if (l_2)
    {
        int l_3 = 0L;
        int *l_4 = &g_5;
        int *l_6 = &l_3;
        union U2 l_89 = {0};
        if (((*l_6) = ((*l_4) ^= (+l_3))))
        {
            char l_30 = 5L;
            unsigned short **l_87 = &g_72;
            union U4 l_125 = {0};
            const int *l_126 = &l_3;
            unsigned *l_228 = &g_196;
            int *l_229 = (void*)0;
            int *l_230 = &g_41;
            union U0 *l_231 = (void*)0;
            union U0 **l_232 = &l_231;
            if (((safe_sub_func_int32_t_s_s(((g_5 | (((g_196 = (((safe_rshift_func_int16_t_s_u((safe_div_func_uint16_t_u_u(func_13(l_17, (safe_sub_func_int8_t_s_s((((safe_lshift_func_int16_t_s_u(g_5, 13)) && 3L) < func_22(func_25(func_27(l_30, g_5)), func_54(func_59((safe_mod_func_uint32_t_u_u(((((*l_87) = func_67(&g_5, g_5)) == (void*)0) < 0xFE6EE091L), g_36)), g_88, l_89, g_36, &g_36), l_125, &g_36, l_126))), 0xE2L)), l_188), g_182.f0)), (*l_126))) && 7UL) & g_36)) < l_2) >= (*l_4))) != 1UL), g_36)) > (*l_6)))
            {
                unsigned l_207 = 0xFEE94D8EL;
                int **l_214 = (void*)0;
                int **l_215 = &l_6;
                for (g_123 = 6; (g_123 < (-1)); g_123 = safe_sub_func_int16_t_s_s(g_123, 8))
                {
                    unsigned l_213 = 0xEB460E39L;
                    if (g_137)
                    {
                        short ***l_201 = &g_199;
                        int *l_208 = &g_84;
                        union U3 *l_210 = (void*)0;
                        union U3 **l_209 = &l_210;
                        (*l_6) ^= g_53;
                        (*l_201) = g_199;
                        (*l_208) |= ((safe_mul_func_uint32_t_u_u((*l_4), 0UL)) <= (!(((safe_unary_minus_func_uint16_t_u((((*l_6) & g_5) || g_34))) != (safe_div_func_uint32_t_u_u(func_37((*g_193)), l_207))) >= (*g_72))));
                        (*l_209) = &g_182;

                        ;
                    }
                    else
                    {
                        (*l_6) = (safe_lshift_func_uint8_t_u_s(l_207, 6));
                        return l_213;
                    }
                }
                (*l_215) = (void*)0;

                ;
                g_53 = ((*l_4) = (g_41 <= g_137));
                return g_36;
            }
            else
            {
                l_216 = (l_188 = &l_3);

                ;
                ;
            }

            ;
            ;
            ;
            ;
            ;
            ;
            (*l_230) |= ((safe_add_func_uint32_t_u_u(9UL, ((*l_228) = (!(+((safe_mul_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u(((safe_mod_func_uint16_t_u_u((*l_188), (*l_4))) ^ ((*l_126) & ((*g_72) = (safe_lshift_func_int8_t_s_u((*g_194), 3))))), func_37(l_227))), func_37(func_27((*l_188), g_36)))) < 65528UL)))))) != (*l_4));
            (*l_232) = l_231;
        }
        else
        {
            (*l_216) = ((*g_194) && ((**g_199) < (safe_mod_func_int8_t_s_s(9L, (**g_193)))));


                    }


        ;
        ;
        ;
        g_41 = 0L;
    }
    else
    {
        unsigned l_248 = 0xAE5AED9FL;
        union U2 l_255 = {0};
        int **l_256 = &l_216;
        short l_257 = 1L;
        int *l_258 = &l_17.f1;
        for (g_41 = (-5); (g_41 <= (-15)); --g_41)
        {
            union U2 **l_239 = &g_237;
            (*l_239) = g_237;

            return g_36;
        }
        g_41 = g_36;
        (*l_216) = ((safe_div_func_int16_t_s_s((**g_199), 0x8171L)) && 0x6573L);


                (*l_258) &= (safe_div_func_uint8_t_u_u(((safe_div_func_int32_t_s_s(((safe_mod_func_uint8_t_u_u(l_248, ((safe_div_func_uint8_t_u_u((7UL <= (safe_add_func_int16_t_s_s(((safe_lshift_func_int8_t_s_s((l_255.f1 = func_13(l_255, (&g_81 != &g_5), func_74(l_188, ((*l_256) = &g_81)))), l_257)) > g_123), (**g_199)))), 0x39L)) & g_137))) ^ g_36), g_53)) >= (-7L)), g_34));

        ;
            }




    if (((-1L) ^ (((safe_add_func_uint32_t_u_u(((safe_sub_func_int32_t_s_s(g_81, (g_5 > ((*l_263) |= func_37(l_227))))) & (func_22(&g_53, l_264) >= ((*g_72) == 1UL))), g_182.f0)) == (*g_72)) < 0x672DL)))
    {
        union U0 **l_267 = (void*)0;
        union U0 **l_268 = (void*)0;
        int l_291 = (-9L);
        int *l_365 = &g_5;
        char *l_367 = &g_266.f0;
        char *l_400 = (void*)0;
        int *l_417 = &g_238.f1;
        int l_420 = 0x60FE3E48L;
        l_269 = g_265;

        ;
        if ((((safe_rshift_func_int8_t_s_u((safe_lshift_func_uint8_t_u_u((((safe_sub_func_int16_t_s_s(((safe_lshift_func_int16_t_s_u(((0xCE89L < ((safe_add_func_uint8_t_u_u(g_5, (safe_mod_func_uint32_t_u_u((safe_mod_func_int32_t_s_s((-1L), ((safe_rshift_func_uint16_t_u_u(((*g_72) = (0x22L | (safe_mul_func_uint8_t_u_u(func_37(func_27(((*g_200) = (safe_mul_func_uint8_t_u_u((0UL < g_81), (func_22(&g_84, g_182) & 1UL)))), g_270.f0)), l_291)))), 14)) || l_291))), 4L)))) > g_154)) != l_291), 11)) == g_266.f0), l_291)) || g_81) && g_270.f2), 0)), 6)) > 9L) ^ l_291))
        {
            int l_292 = 5L;
            union U2 **l_296 = &g_237;
            union U2 ***l_295 = &l_296;
            union U2 **l_297 = &g_237;
            char ****l_301 = &l_300;
            short l_342 = (-1L);
            g_53 = (l_292 <= ((*g_194) ^ l_292));
            if ((((((*g_194) = 0x8BL) && (((*l_295) = &g_237) == l_297)) == (safe_lshift_func_int16_t_s_s((&g_193 != ((*l_301) = l_300)), l_292))) > (safe_sub_func_int16_t_s_s((g_123 ^ (!g_266.f0)), (*g_72)))))
            {
                int l_305 = 0x54CF3BF9L;
                char *****l_306 = (void*)0;
                char ****l_308 = &l_300;
                char *****l_307 = &l_308;
                unsigned char *l_309 = &g_310;
                int *l_311 = &l_291;
                (*l_311) = ((safe_unary_minus_func_uint32_t_u((l_305 >= (l_301 == ((*l_307) = (void*)0))))) ^ ((*l_309) = g_266.f0));

                ;
                (*l_311) = (!((+g_5) >= g_270.f0));
                g_5 = ((l_291 > ((****l_301) = (9UL | g_41))) != (**g_199));
            }
            else
            {
                const int *l_317 = (void*)0;
                const int **l_316 = &l_317;
                char l_368 = 1L;
                const union U0 *l_377 = &g_270;
                if ((((safe_mul_func_int16_t_s_s(((*g_193) != (*g_193)), (+(safe_rshift_func_int8_t_s_u(((void*)0 == &g_238), 6))))) >= ((l_291 |= func_22(((*l_316) = &g_5), g_182)) ^ 0xA2L)) ^ 0x3CL))
                {
                    unsigned char l_339 = 255UL;
                    int l_343 = (-2L);
                    char *l_350 = &g_266.f0;
                    if (func_22(&l_291, g_182))
                    {
                        int *l_318 = &g_84;
                        unsigned char *l_335 = &g_310;
                        unsigned char *l_336 = (void*)0;
                        unsigned char *l_337 = &g_338;
                        int *l_346 = &g_5;
                        (*l_318) = g_123;
                        (*l_318) = (safe_add_func_int32_t_s_s((safe_mul_func_int16_t_s_s(((safe_sub_func_int16_t_s_s(((safe_lshift_func_int8_t_s_u((**g_193), 5)) >= ((safe_sub_func_int8_t_s_s((safe_sub_func_uint16_t_u_u(((*g_72) = (((*l_337) = ((*l_335) = (safe_sub_func_int8_t_s_s(((**g_193) > (**g_193)), l_292)))) <= ((((*l_318) ^ l_339) >= (g_340 == (void*)0)) && (*g_72)))), l_292)), 0UL)) == (-1L))), (**g_199))) && 0x7AL), l_291)), l_342));
                        l_343 ^= (g_84 = g_270.f0);
                        (*l_346) ^= (safe_lshift_func_int8_t_s_u((*l_318), 3));
                    }
                    else
                    {
                        unsigned char *l_347 = &g_338;
                        unsigned char *l_355 = &l_339;
                        unsigned char *l_358 = &g_310;
                        union U2 ****l_359 = &l_295;
                        int l_362 = 5L;
                        int *l_363 = (void*)0;
                        int *l_364 = &g_84;
                        (*l_364) = ((((*l_347) = g_34) & (((safe_lshift_func_int8_t_s_s(l_339, func_37(l_350))) || ((*l_358) = (((*l_355) ^= (safe_div_func_uint32_t_u_u(g_137, l_343))) ^ (safe_rshift_func_uint8_t_u_u(0UL, 4))))) & ((l_343 | (((*l_359) = (void*)0) == g_360)) & l_362))) > (*g_200));

                        ;
                        l_365 = func_25((**g_341));

                        ;
                        (*l_300) = (**g_340);
                        (*l_365) = (!((*l_365) == (*g_200)));
                    }

                    ;
                    ;
                }
                else
                {
                    unsigned short l_366 = 3UL;
                    union U0 *l_372 = &g_266;
                    if ((((((**l_316) <= func_13((**g_361), l_366, &l_291)) | (*g_72)) >= (-1L)) != (func_37(l_367) >= l_368)))
                    {
                        (*l_365) ^= g_182.f0;
                    }
                    else
                    {
                        (*l_316) = (*l_316);
                    }
                    (*l_316) = (*l_316);
                    g_5 = (safe_rshift_func_int8_t_s_u(((**g_193) = (**g_193)), 4));
                    if (((*g_200) > ((*g_72) <= l_371)))
                    {
                        g_373 = l_372;

                        ;
                        return g_53;
                    }
                    else
                    {
                        return (*l_365);
                    }
                }

                ;
                ;
                ;
                for (g_374.f0 = 10; (g_374.f0 > (-5)); --g_374.f0)
                {
                    char *l_380 = &l_368;
                    unsigned char l_399 = 0UL;
                    if (((*g_340) == (void*)0))
                    {
                        const union U0 **l_378 = &l_377;
                        (*l_378) = l_377;
                    }
                    else
                    {
                        int *l_391 = &l_17.f1;
                        int *l_392 = &l_17.f1;
                        int *l_393 = &l_17.f1;
                        int *l_394 = &g_238.f1;
                        int *l_395 = &l_17.f1;
                        int *l_396 = (void*)0;
                        int *l_397 = &l_17.f1;
                        g_379 = &g_81;

                        ;
                        (*l_365) = func_37(func_27((**g_199), func_37(l_380)));
                        g_398 &= (safe_sub_func_int32_t_s_s((*g_379), (func_37((*g_193)) | (safe_rshift_func_uint16_t_u_u((safe_add_func_int16_t_s_s(((safe_lshift_func_int16_t_s_s((func_22(&g_84, g_182) > g_266.f0), 2)) != (safe_mod_func_int16_t_s_s((*l_317), 1L))), 0L)), (*g_72))))));
                        (*l_393) = l_292;


                                            }
                    l_399 = (g_266.f2 & g_84);
                    (*l_365) = (l_400 == (***l_301));
                    (*l_365) &= (safe_div_func_uint8_t_u_u(0x6CL, (safe_rshift_func_int8_t_s_s((**g_193), 2))));
                }

                ;
            }

            ;
            ;
            ;
        }
        else
        {
            union U1 *l_405 = &g_88;
            union U1 **l_406 = &l_405;
            int *l_412 = &g_53;
            int **l_413 = &g_379;
            unsigned char l_414 = 0x8CL;
            (*l_406) = l_405;
            for (g_36 = 0; (g_36 != 10); g_36++)
            {
                const short l_409 = 0x3B14L;
                int **l_410 = &l_188;
                (*l_365) |= l_409;
                (*l_410) = &g_5;

                ;
                g_411 ^= g_266.f2;
            }


            (*l_413) = l_412;

            ;
            l_414 |= (*g_379);
        }


        ;
        ;
        g_421 = (l_420 = (safe_div_func_int32_t_s_s(((*l_417) = ((*l_365) = g_154)), (l_291 &= (g_81 &= (safe_lshift_func_int8_t_s_u(0x96L, 4)))))));

            }
    else
    {
        union U3 *l_422 = &g_423;
        int l_431 = 0x238A7592L;
        l_422 = &g_182;

        ;
        for (g_270.f1 = (-6); (g_270.f1 >= (-17)); g_270.f1 = safe_sub_func_int8_t_s_s(g_270.f1, 1))
        {
            int *l_428 = &g_421;
            union U0 **l_430 = &l_269;
            for (g_398 = 0; (g_398 > 30); ++g_398)
            {
                int **l_429 = (void*)0;
                g_379 = &g_84;

                ;
                g_379 = l_428;

                ;
            }
            (*l_430) = &g_266;

            ;
        }

        ;
        ;
        g_84 = (l_431 | l_431);
    }


    ;
    ;
    (*l_434) = (l_432 >= (-9L));
    return g_154;
}







static unsigned short func_13(union U2 p_14, char p_15, int * p_16)
{
    int *l_191 = (void*)0;
    int *l_192 = &g_81;
    char ***l_195 = &g_193;
    (*l_192) = (safe_rshift_func_int8_t_s_u(g_154, g_53));
    (*l_195) = g_193;
    return (*g_72);
}







static unsigned func_22(const int * p_23, const union U3 p_24)
{
    char *l_183 = &g_36;
    int *l_185 = &g_41;
    int **l_184 = &l_185;
    (*l_184) = func_25(l_183);
    for (g_84 = 12; (g_84 == (-6)); g_84 = safe_sub_func_int16_t_s_s(g_84, 4))
    {
        return p_24.f0;
    }
    return (**l_184);
}







static int * func_25(char * p_26)
{
    int *l_40 = &g_41;
    char *l_42 = (void*)0;
    unsigned short *l_50 = &g_51;
    int *l_52 = &g_53;
    (*l_40) = func_37(p_26);
    (*l_40) |= func_37(l_42);
    (*l_40) = (+(safe_unary_minus_func_uint16_t_u((safe_div_func_uint16_t_u_u(func_37(&g_36), g_36)))));
    (*l_52) = ((*l_40) = (((safe_sub_func_uint16_t_u_u(((safe_lshift_func_uint16_t_u_s((func_37(&g_36) <= ((*l_50) = ((((*l_40) > (*l_40)) < (((l_42 = func_27(g_36, (*l_40))) != &g_36) ^ ((&g_5 == l_40) | 0xB6377F0AL))) == (*l_40)))), (*l_40))) & (*l_40)), (*l_40))) > (*l_40)) < 0xFAC5ADF6L));

    ;
    return l_40;


}







static char * func_27(short p_28, int p_29)
{
    const unsigned l_33 = 0x84132D38L;
    char *l_35 = &g_36;
    g_34 |= (safe_rshift_func_uint16_t_u_u(g_5, l_33));
    return l_35;


}







static int func_37(char * p_38)
{
    int l_39 = 0L;
    return l_39;
}







static union U3 func_54(int * p_55, union U4 p_56, char * p_57, const int * p_58)
{
    unsigned short *l_127 = &g_73;
    int l_128 = 0x52E1657FL;
    int l_145 = 0x3782E33FL;
    int *l_173 = &l_128;
    int **l_172 = &l_173;
    unsigned short **l_176 = &g_72;
    unsigned short l_181 = 9UL;
    if ((g_84 != ((void*)0 == l_127)))
    {
        int *l_129 = &l_128;
        (*l_129) = l_128;
        l_128 = (((*l_129) >= l_128) > (*g_72));
    }
    else
    {
        const unsigned char l_144 = 0x03L;
        int *l_175 = &g_84;
        for (g_123 = (-9); (g_123 != (-18)); g_123 = safe_sub_func_uint16_t_u_u(g_123, 5))
        {
            const int *l_133 = &g_84;
            const int **l_132 = &l_133;
            short *l_136 = &g_137;
            unsigned l_146 = 0x5305F713L;
            int *l_149 = &l_128;
            (*l_132) = p_58;


            if ((((*l_136) = (safe_rshift_func_uint8_t_u_s(1UL, 5))) <= ((*p_55) > ((safe_add_func_uint8_t_u_u(((safe_sub_func_uint16_t_u_u((((*p_57) & (*l_133)) & (&p_58 != &p_55)), (**l_132))) >= (safe_mul_func_int16_t_s_s((l_144 & (g_5 == g_73)), 0L))), l_145)) && 0xDEL))))
            {
                if (l_146)
                    break;
                if (l_144)
                    break;
            }
            else
            {
                int *l_147 = (void*)0;
                int *l_148 = &g_81;
                (*l_148) &= 1L;
            }
            (*l_132) = func_74(&g_5, l_149);

            ;
        }
        for (l_128 = (-16); (l_128 == 10); l_128++)
        {
            int *l_152 = &g_84;
            int *l_153 = &g_81;
            int **l_155 = &l_153;
            union U3 l_158 = {4294967295UL};
            char *l_161 = &g_36;
            g_154 = ((*l_153) = ((*l_152) |= 0x8015DFABL));
            (*l_155) = l_153;
            if ((*p_55))
            {
                char **l_162 = &l_161;
                for (g_81 = 0; (g_81 < (-7)); g_81--)
                {
                    return l_158;

                                    }
                (*l_152) = 0x65D34479L;
                (**l_155) |= 0L;
                (*l_153) = (safe_mul_func_uint8_t_u_u((((*l_162) = l_161) != (p_57 = p_57)), l_128));
            }
            else
            {
                if ((safe_unary_minus_func_int32_t_s((*p_58))))
                {
                    (*l_153) &= (safe_sub_func_int8_t_s_s((*p_57), 0xD0L));
                }
                else
                {
                    for (g_84 = 0; (g_84 > (-25)); --g_84)
                    {
                        int **l_174 = &l_152;
                        (*l_153) = (((safe_lshift_func_uint16_t_u_s((!(*g_72)), (g_137 || (safe_mul_func_int8_t_s_s((*l_152), 0xE0L))))) <= (l_172 != l_174)) > 0xC5L);
                        (*l_172) = l_175;

                        ;
                    }
                }
                (*l_172) = ((*l_155) = func_74(p_55, p_55));

                ;
                ;
            }

            ;
        }

        ;
    }

    ;
    g_84 = (l_127 == ((*l_176) = l_127));
    p_55 = func_74(&g_81, (*l_172));

    ;
    for (l_145 = (-18); (l_145 <= 23); l_145 = safe_add_func_uint16_t_u_u(l_145, 5))
    {
        short l_179 = 0x7094L;
        int *l_180 = &l_128;
        (*l_172) = (*l_172);
        if (l_179)
            continue;
        (*l_180) ^= l_179;
        if (l_181)
            continue;
    }
    return g_182;

    }







static int * func_59(int p_60, union U1 p_61, union U2 p_62, unsigned short p_63, char * p_64)
{
    int *l_90 = &g_81;
    int *l_91 = &g_84;
    char *l_94 = &g_36;
    char *l_108 = &g_36;
    char *l_111 = &g_36;
    (*l_90) |= p_63;
    (*l_91) &= (g_81 = (&g_81 == l_90));
    for (p_60 = 14; (p_60 > 15); p_60 = safe_add_func_uint32_t_u_u(p_60, 5))
    {
        (*l_90) |= func_37(p_64);
        (*l_90) = func_37(l_94);
    }
    if ((*l_91))
    {
        int *l_95 = &g_5;
        return l_95;


    }
    else
    {
        int *l_115 = &g_5;
        unsigned short **l_118 = &g_72;
        short *l_121 = (void*)0;
        short *l_122 = &g_123;
        unsigned l_124 = 0xA1361802L;
        for (g_84 = 13; (g_84 > 26); g_84++)
        {
            unsigned l_109 = 0x721BC9AFL;
            int l_110 = 1L;
            for (g_73 = 0; (g_73 > 5); ++g_73)
            {
                (*l_90) = (p_60 != (!p_60));
            }
            l_110 &= ((safe_div_func_uint8_t_u_u((g_84 | ((safe_mod_func_uint16_t_u_u((safe_div_func_uint16_t_u_u(func_37(&g_36), (func_37(&g_36) ^ ((((+((safe_add_func_uint32_t_u_u(((0xD6319DC0L <= func_37(l_108)) == (*l_90)), l_109)) == (*l_91))) <= p_60) != 0xF3B42422L) && p_60)))), p_63)) <= 4294967293UL)), 6L)) <= (*l_91));
            if (p_60)
                break;
        }
        (*l_91) |= 0x9F8C36B4L;
        if (func_37(l_111))
        {
            int l_114 = 0x09E5C5CBL;
            l_114 &= (safe_sub_func_uint16_t_u_u(((*l_91) &= 65535UL), 0L));
        }
        else
        {
            return l_115;


        }
        l_124 |= ((safe_mul_func_uint8_t_u_u(((func_37(l_94) != (&p_63 != ((*l_118) = func_67(func_74(l_91, &g_5), p_60)))) ^ (safe_mod_func_int32_t_s_s((((*l_122) = (-8L)) ^ 0xC33AL), p_63))), (*l_115))) <= 65533UL);
    }
    return &g_84;


}







static unsigned short * func_67(int * p_68, unsigned short p_69)
{
    int *l_86 = (void*)0;
    int **l_85 = &l_86;
    for (p_69 = 0; (p_69 >= 11); p_69 = safe_add_func_uint32_t_u_u(p_69, 4))
    {
        return g_72;


    }
    (*l_85) = func_74(&g_5, &g_5);

    ;
    g_84 = (*p_68);
    return &g_73;


}







static int * func_74(int * p_75, int * p_76)
{
    int l_77 = 0L;
    int *l_78 = (void*)0;
    int *l_79 = (void*)0;
    int *l_80 = &g_81;
    char *l_82 = (void*)0;
    int *l_83 = &g_84;
    (*l_80) |= (((*g_72) = func_37(&g_36)) | l_77);
    (*l_80) ^= (l_82 != (void*)0);
    (*l_83) ^= (g_5 == (*l_80));
    return p_76;


}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_34, "g_34", print_hash_value);
    transparent_crc(g_36, "g_36", print_hash_value);
    transparent_crc(g_41, "g_41", print_hash_value);
    transparent_crc(g_51, "g_51", print_hash_value);
    transparent_crc(g_53, "g_53", print_hash_value);
    transparent_crc(g_73, "g_73", print_hash_value);
    transparent_crc(g_81, "g_81", print_hash_value);
    transparent_crc(g_84, "g_84", print_hash_value);
    transparent_crc(g_123, "g_123", print_hash_value);
    transparent_crc(g_137, "g_137", print_hash_value);
    transparent_crc(g_154, "g_154", print_hash_value);
    transparent_crc(g_182.f0, "g_182.f0", print_hash_value);
    transparent_crc(g_196, "g_196", print_hash_value);
    transparent_crc(g_266.f0, "g_266.f0", print_hash_value);
    transparent_crc(g_266.f2, "g_266.f2", print_hash_value);
    transparent_crc(g_270.f0, "g_270.f0", print_hash_value);
    transparent_crc(g_270.f2, "g_270.f2", print_hash_value);
    transparent_crc(g_310, "g_310", print_hash_value);
    transparent_crc(g_338, "g_338", print_hash_value);
    transparent_crc(g_374.f0, "g_374.f0", print_hash_value);
    transparent_crc(g_374.f2, "g_374.f2", print_hash_value);
    transparent_crc(g_398, "g_398", print_hash_value);
    transparent_crc(g_411, "g_411", print_hash_value);
    transparent_crc(g_421, "g_421", print_hash_value);
    transparent_crc(g_423.f0, "g_423.f0", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
