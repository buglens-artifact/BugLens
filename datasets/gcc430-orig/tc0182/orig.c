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



static int * volatile g_2 = (void*)0;
static volatile int g_3 = (-1L);
static int g_4 = 0L;
static int g_7 = 0x4768C0AAL;
static int * volatile g_10 = &g_4;
static int * volatile * volatile g_11 = &g_10;
static int g_13 = 1L;
static int * volatile g_12 = &g_13;
static int **g_57 = (void*)0;
static char g_100 = 0L;
static int *** volatile g_106 = &g_57;
static unsigned g_130 = 0x97BD6D72L;
static int * volatile * volatile g_138 = &g_2;
static int *g_141 = &g_13;
static int **g_140 = &g_141;
static char *g_145 = &g_100;
static char **g_144 = &g_145;
static int g_148 = 0x3B576298L;
static short g_167 = 7L;
static unsigned short g_173 = 65530UL;
static unsigned short g_175 = 8UL;
static unsigned g_210 = 0xE21D3D7BL;
static unsigned char g_223 = 255UL;
static unsigned char g_225 = 0xD7L;
static int * volatile g_247 = &g_7;
static int * volatile * volatile g_296 = &g_141;
static int * volatile * volatile g_306 = &g_10;
static volatile unsigned char *g_318 = (void*)0;
static volatile unsigned char * volatile *g_317 = &g_318;
static unsigned *g_339 = &g_130;
static unsigned **g_338 = &g_339;
static int * volatile * volatile g_344 = (void*)0;
static int g_401 = 1L;
static int * volatile g_400 = &g_401;
static unsigned char *g_428 = &g_225;
static unsigned char **g_427 = &g_428;
static char g_481 = 0L;
static char g_484 = 4L;
static int * volatile * volatile g_505 = &g_141;
static char g_510 = 0x1DL;



static short func_1(void);
static int func_14(int * p_15, int * p_16, char p_17, unsigned short p_18);
static int * func_29(int ** p_30, int ** p_31, int ** p_32);
static int func_36(unsigned p_37, char p_38, int ** p_39);
static char func_40(int ** p_41, int ** p_42, unsigned p_43, int * p_44, int * p_45);
static int func_46(int ** p_47, int p_48, int p_49, int p_50, int p_51);
static unsigned char func_54(int ** p_55, int ** p_56);
static int * func_58(int * p_59, unsigned char p_60, char p_61, int ** p_62, unsigned p_63);
static int * func_64(unsigned short p_65, int ** p_66, int ** p_67, int ** p_68, int p_69);
static unsigned func_74(unsigned p_75, int ** p_76, unsigned p_77, unsigned p_78, short p_79);
static short func_1(void)
{
    int *l_19 = &g_13;
    int *l_20 = &g_4;
    int **l_21 = (void*)0;
    int **l_22 = &l_20;
    int **l_112 = &l_19;
    int *l_131 = &g_4;
    char *l_139 = &g_100;
    int **l_217 = &g_141;
    int **l_218 = (void*)0;
    int **l_219 = &l_131;
    int l_220 = 0xAAF50BF5L;
    unsigned char *l_221 = (void*)0;
    unsigned char *l_222 = &g_223;
    unsigned char *l_224 = &g_225;
    short *l_226 = &g_167;
    char l_227 = 8L;
    g_2 = g_2;
    for (g_4 = 26; (g_4 == 27); g_4 = safe_add_func_uint8_t_u_u(g_4, 2))
    {
        for (g_7 = 27; (g_7 != 16); g_7 = safe_sub_func_int16_t_s_s(g_7, 8))
        {
            (*g_11) = g_10;
            (*g_12) = (*g_10);
        }
    }
    (*l_19) = func_14(l_19, ((*l_22) = l_20), (((*l_226) = ((safe_add_func_int8_t_s_s((safe_add_func_uint8_t_u_u(((*l_224) = ((*l_222) = (safe_sub_func_uint16_t_u_u((l_19 != ((*l_219) = func_29(((safe_unary_minus_func_uint16_t_u((safe_sub_func_int32_t_s_s(9L, ((((func_36(g_13, (((void*)0 != (*g_11)) , ((*l_139) = func_40((((((*l_131) = func_46(((g_4 | ((func_54(&l_19, g_57) , l_112) == &l_19)) , (*g_106)), g_13, g_13, g_4, g_4)) >= 0L) , g_7) , &l_19), &l_19, g_13, &g_13, &g_13))), g_140) && (**l_112)) , (void*)0) != &l_19) != (**l_112)))))) , (*g_106)), &l_19, g_140))), l_220)))), 0x47L)), g_210)) < 1UL)) , l_227), g_175);

    ;
    ;



    (**l_22) = ((*l_19) = (*g_10));
    return g_3;
}







static int func_14(int * p_15, int * p_16, char p_17, unsigned short p_18)
{
    int l_228 = 5L;
    unsigned l_234 = 4294967286UL;
    unsigned char *l_279 = &g_225;
    unsigned l_294 = 8UL;
    int **l_295 = &g_141;
    unsigned *l_336 = &g_130;
    unsigned short l_337 = 0x8A0AL;
    int l_359 = 0xF00737D8L;
    short *l_362 = &g_167;
    int *l_403 = &l_228;
    unsigned ***l_409 = (void*)0;
    unsigned short l_416 = 65535UL;
    if ((+l_228))
    {
        int ***l_244 = &g_57;
        int ****l_243 = &l_244;
        short *l_269 = (void*)0;
        for (l_228 = (-1); (l_228 <= 12); l_228 = safe_add_func_int8_t_s_s(l_228, 1))
        {
            int **l_231 = &g_141;
            int **l_261 = &g_141;
            unsigned char *l_278 = (void*)0;
            unsigned short *l_292 = &g_175;
            (*p_15) = (p_17 , (p_18 && func_36((((*g_145) = (((safe_add_func_int16_t_s_s(0L, p_18)) <= (*g_2)) != g_210)) , g_100), l_234, &g_141)));
            for (g_173 = 7; (g_173 <= 3); --g_173)
            {
                int * volatile *l_248 = &g_141;
                unsigned char *l_249 = &g_225;
                int **l_250 = &g_141;
                unsigned *l_255 = (void*)0;
                unsigned *l_256 = &g_130;
                for (g_130 = 0; (g_130 > 13); ++g_130)
                {
                    short l_246 = 0x7A4DL;
                    (**g_138) = 6L;
                    if (((*p_15) = (*p_15)))
                    {
                        (*p_15) = (*g_10);
                        if (l_228)
                            continue;
                        if ((*p_15))
                            continue;
                    }
                    else
                    {
                        int ****l_245 = &l_244;
                        l_246 = (((safe_rshift_func_int16_t_s_u(((0x66L & (*g_145)) == (safe_mod_func_int8_t_s_s(p_17, ((((g_4 , l_243) == l_245) && (p_18 , p_18)) || (*p_15))))), 13)) , 65535UL) & p_17);
                    }
                    return (**g_11);
                }
                (*l_248) = g_247;

                ;
                (*g_11) = p_16;
                (*p_15) = (~(&l_250 == (((((*g_141) = ((((((*l_256) = g_7) ^ 1UL) ^ p_17) != (safe_mul_func_int16_t_s_s(p_18, (((((((((safe_mul_func_uint16_t_u_u(func_40(l_231, l_261, (safe_mod_func_int8_t_s_s((**l_231), (+(**l_250)))), p_16, p_16), (**l_250))) > 6UL) <= 0x520FL) ^ (**l_261)) | 0xB5L) ^ 0x45AAL) == g_7) ^ p_18) ^ g_13)))) <= (-1L))) , &p_17) != &p_17) , (void*)0)));
            }
            for (g_223 = 0; (g_223 < 17); g_223 = safe_add_func_uint8_t_u_u(g_223, 7))
            {
                int **l_266 = (void*)0;
                int **l_267 = (void*)0;
                int * volatile *l_268 = &g_141;
                short *l_271 = &g_167;
                short **l_270 = &l_271;
                int **l_272 = &g_141;
                unsigned char **l_280 = &l_279;
                (*l_268) = (g_210 , (*g_138));

                ;
                (*l_231) = p_16;
                (*l_261) = p_15;

                ;
                if ((l_278 == ((*l_280) = l_279)))
                {
                    int ***l_281 = &l_261;
                    int ***l_282 = &l_267;
                    unsigned *l_283 = &g_130;
                    unsigned short *l_285 = &g_175;
                    if (((**l_261) ^ ((*l_283) = g_3)))
                    {
                        int *l_284 = &g_13;
                        (*g_141) = ((((*p_16) < p_17) == (*g_247)) | p_17);
                        (*l_268) = ((*p_16) , l_284);
                        (*l_231) = (void*)0;

                        ;
                        (*p_15) = 0xF99BDF1EL;
                    }
                    else
                    {
                        return (**g_11);
                    }

                    ;
                    (*l_261) = p_16;

                    ;
                    (**g_140) = ((**l_272) && ((((*l_285) = g_225) && (safe_sub_func_int32_t_s_s(0xB6DD47E9L, p_18))) , (-8L)));
                }
                else
                {
                    if (((safe_rshift_func_uint16_t_u_s(0x34F9L, 2)) >= (((*p_16) = (safe_lshift_func_uint16_t_u_s(0UL, (l_292 == l_271)))) >= (safe_unary_minus_func_int16_t_s((g_130 != 0x7EL))))))
                    {
                        (*l_268) = (*g_138);

                        ;
                    }
                    else
                    {
                        (*g_140) = p_16;

                        ;
                        if (l_228)
                            goto lbl_402;
                        if ((**l_272))
                            break;
                    }

                    ;
                    (*l_261) = p_16;
                }

                ;
            }
        }


        (*g_296) = (*g_138);

        ;
lbl_402:
        for (g_7 = 0; (g_7 > (-8)); g_7--)
        {
            int **l_299 = &g_141;
            unsigned *l_300 = &l_234;
            unsigned l_373 = 0x35544086L;
        }
        (*g_140) = l_403;

        ;
    }
    else
    {
        unsigned ***l_408 = (void*)0;
        int ***l_410 = &l_295;
        int l_411 = 0x8E751C5CL;
        short *l_413 = &g_167;
        short **l_412 = &l_413;
        unsigned short *l_418 = &l_416;
        unsigned short **l_417 = &l_418;
        int **l_449 = &l_403;
lbl_463:
        (*g_140) = p_16;

        ;
lbl_422:
        p_15 = p_15;
        if (((***l_410) = (safe_lshift_func_uint16_t_u_u(l_416, ((((*l_417) = l_413) == (void*)0) ^ p_18)))))
        {
            int **l_419 = &g_141;
            if (func_54(&l_403, l_419))
            {
                int l_420 = 1L;
                int l_442 = 0L;
                if (l_420)
                {
                    int *l_421 = (void*)0;
                    unsigned char **l_426 = &l_279;
                    unsigned char ***l_425 = &l_426;
                    unsigned char ***l_429 = &g_427;
                    l_421 = l_421;
                    if (g_100)
                        goto lbl_422;
                    (**g_140) = ((((((*l_295) == (void*)0) > ((0xFAL ^ (((*l_425) = &l_279) == ((*l_429) = g_427))) == (((safe_lshift_func_uint8_t_u_s(((safe_add_func_int32_t_s_s((safe_mod_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_s((p_17 < (safe_lshift_func_int8_t_s_s((((safe_sub_func_uint8_t_u_u(0xBDL, (+((*g_145) = (***l_410))))) , p_18) == g_13), 7))), p_18)), p_18)), (*g_339))) , (*g_428)), p_17)) && p_18) && 5L))) || (**l_419)) == (*p_16)) , l_442);
                    return (*p_16);


                }
                else
                {
                    return (*p_15);


                }
            }
            else
            {
                unsigned ***l_443 = &g_338;
                int **l_454 = &g_141;
                int l_455 = 1L;
                (**l_295) = ((*p_15) = (((*p_15) >= (((*l_443) = &g_339) != &g_339)) || g_401));
                for (g_167 = 3; (g_167 > 18); g_167 = safe_add_func_uint8_t_u_u(g_167, 8))
                {
                    for (g_210 = 0; (g_210 > 41); g_210++)
                    {
                        short l_448 = 0x51C4L;
                        return l_448;


                    }
                    (*p_15) = ((***l_410) = (l_449 != (*g_106)));
                    if ((**l_419))
                        continue;
                }
                (*l_403) = ((*p_16) = (~((safe_add_func_uint8_t_u_u(((((**l_419) , &p_16) == ((*g_106) = l_419)) , (safe_mod_func_int16_t_s_s(((**l_412) = (l_443 != &g_338)), ((*g_428) , (func_54(l_419, (l_454 = ((*l_410) = (void*)0))) | p_17))))), l_455)) == (**l_449))));

                ;
                ;
            }

            ;
            (**l_419) = (*p_15);
        }
        else
        {
            int **l_460 = &g_141;
            unsigned l_462 = 0xA5C44A37L;
            unsigned short l_504 = 0xBD3DL;
            for (l_337 = (-22); (l_337 >= 20); l_337 = safe_add_func_uint32_t_u_u(l_337, 4))
            {
                int *l_461 = &g_148;
                int l_479 = (-1L);
                unsigned char **l_506 = &l_279;
                unsigned char ***l_507 = (void*)0;
                unsigned char ***l_508 = (void*)0;
                unsigned char ***l_509 = &g_427;
                if ((safe_rshift_func_int8_t_s_s(func_46(l_460, (*p_15), (*p_16), ((*l_461) = (((**l_449) = (**g_306)) ^ (p_18 || (***l_410)))), p_17), 6)))
                {
                    (**l_410) = (void*)0;

                    ;
                    if (l_462)
                        break;
                }
                else
                {
                    int **l_475 = &g_141;
                    if (p_18)
                        goto lbl_463;
                    (*g_140) = (void*)0;

                    ;
                    if ((*p_16))
                        break;
                    for (l_411 = 0; (l_411 > (-14)); --l_411)
                    {
                        int l_468 = 0x15CF7765L;
                        unsigned *l_478 = &l_462;
                        char *l_480 = &g_481;
                        char *l_482 = (void*)0;
                        char *l_483 = &g_484;
                        int **l_489 = &g_141;
                        (**l_449) = ((((*l_413) = (safe_lshift_func_int8_t_s_s(0x57L, 3))) != (((*g_145) = l_468) > ((*l_483) = ((*l_480) = (g_13 | (safe_mul_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s(p_18, (p_18 <= 0x74L))), 65535UL))))))) , 1L);
                        (*p_16) = (safe_rshift_func_int16_t_s_s((((**g_338) = ((safe_sub_func_int8_t_s_s(((*p_15) , func_46(l_489, (*p_16), ((p_17 , ((safe_lshift_func_int16_t_s_u((safe_mul_func_int8_t_s_s(p_18, (((safe_rshift_func_int8_t_s_s(((safe_mod_func_int32_t_s_s((((((*l_403) = (safe_rshift_func_uint8_t_u_u(p_18, ((*g_428) = 255UL)))) > ((0xE1L & (safe_sub_func_int8_t_s_s(((((safe_add_func_int8_t_s_s(p_18, (*g_145))) < g_13) < (**g_338)) <= (-1L)), p_17))) || 0x6EB1A95BL)) == p_17) | 0xB0EBL), 2L)) || 1L), (*g_145))) , (void*)0) != (void*)0))), 13)) == p_18)) & p_17), g_100, g_173)), p_18)) ^ 0xABEAFFACL)) , g_223), l_504));
                    }
                }

                ;
                (*g_505) = (*g_11);

                ;
                (*p_15) = (&l_279 != ((*l_509) = l_506));

                ;
            }

            ;
        }

        ;
        ;
        ;
        (*l_449) = func_64(p_18, &p_16, (*g_106), &p_15, ((*p_16) = ((*g_145) >= (g_510 || ((void*)0 == l_336)))));

        ;
    }

    ;
    ;
    ;
    ;
    (*g_140) = p_16;

    ;
    return (**g_11);


}







static int * func_29(int ** p_30, int ** p_31, int ** p_32)
{
    for (g_4 = (-28); (g_4 != 4); g_4 = safe_add_func_int8_t_s_s(g_4, 8))
    {
        int *l_216 = (void*)0;
        for (g_13 = 0; (g_13 >= 20); g_13++)
        {
            int *l_215 = &g_13;
            (*p_32) = l_215;

            ;
            (*p_32) = l_216;

            ;
        }
    }


    return (*p_31);


}







static int func_36(unsigned p_37, char p_38, int ** p_39)
{
    char *l_143 = &g_100;
    char **l_142 = &l_143;
    unsigned *l_146 = &g_130;
    int *l_147 = &g_148;
    int *l_149 = (void*)0;
    unsigned char l_156 = 255UL;
    unsigned short *l_174 = &g_175;
    unsigned short l_185 = 65535UL;
    int ***l_202 = &g_57;
    unsigned *l_208 = (void*)0;
    unsigned *l_209 = &g_210;
    g_144 = l_142;

    ;
    l_149 = (((*l_147) = (0x73D59F12L && ((*l_146) = 4294967294UL))) , l_146);

    ;
    for (g_100 = (-14); (g_100 > (-25)); --g_100)
    {
        int *l_152 = &g_4;
        int l_155 = 0L;
        char l_157 = 0xB2L;
        unsigned l_158 = 0xE358E79FL;
        int **l_186 = &g_141;
        unsigned char *l_193 = &l_156;
        unsigned short l_203 = 65534UL;
        (*p_39) = l_152;

        ;
        (*g_140) = (*p_39);
        (**g_140) = func_40(p_39, ((g_13 >= (func_40((*g_106), &l_152, (((5L <= (safe_add_func_int32_t_s_s(((*l_149) == ((&p_39 != (((((*l_152) || (p_37 == l_155)) && (*l_152)) & l_156) , (void*)0)) & g_4)), (**p_39)))) <= l_157) ^ l_158), (*p_39), (*p_39)) ^ (-3L))) , (void*)0), p_38, &l_155, l_147);
        if ((((&g_130 == (l_146 = func_58((*g_140), p_37, (p_38 || (safe_sub_func_int16_t_s_s((g_3 ^ (((!(*l_149)) , (*l_149)) < g_130)), 0x4FB0L))), &g_141, g_100))) > 0x03L) <= 0xF648L))
        {
            int l_165 = 0xD8F4AAFBL;
            short *l_166 = &g_167;
            unsigned short *l_172 = &g_173;
            (**p_39) = (func_46((*g_106), (**p_39), (g_7 || (safe_rshift_func_uint16_t_u_s(0UL, ((*l_166) = (safe_rshift_func_uint16_t_u_u(l_165, (!g_4))))))), (((safe_mul_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s(((*l_172) = p_38), 5)), (l_172 == l_174))) < p_38) , 0x06E961C8L), g_7) , (**p_39));
            (*p_39) = &l_155;

            ;
        }
        else
        {
            unsigned char *l_184 = &l_156;
            unsigned l_189 = 8UL;
            int ***l_201 = &g_140;
            int ****l_200 = &l_201;
            (*l_149) = func_46((*g_106), (safe_sub_func_int32_t_s_s((**p_39), p_37)), (safe_mul_func_int16_t_s_s((g_130 , (p_37 & ((safe_rshift_func_int8_t_s_u((safe_lshift_func_uint8_t_u_s(((*l_184) = (((g_175 ^ (((*l_149) = ((*l_152) || (p_37 || ((((1L && 1UL) & (*g_145)) && (*l_149)) && (*g_145))))) | (*g_141))) && (*l_149)) > p_38)), (*g_145))), 2)) <= 4294967295UL))), l_185)), p_38, p_38);
            (**l_186) = func_46(l_186, (~((**l_186) = (**p_39))), (((safe_add_func_uint32_t_u_u(l_189, (safe_sub_func_int8_t_s_s((safe_unary_minus_func_int8_t_s((l_193 != l_193))), (((l_189 , (+((safe_lshift_func_int8_t_s_s((((*l_200) = (((l_189 || (safe_mod_func_uint32_t_u_u((((safe_mul_func_int8_t_s_s(0L, (p_38 , 0xB9L))) >= p_38) , g_7), 1UL))) , 0xEA47A0FBL) , (void*)0)) == l_202), (**g_144))) <= g_3))) <= 3UL) , l_203))))) , g_148) || (*g_12)), g_148, p_37);

            ;
            (**l_186) = (safe_sub_func_int8_t_s_s(p_37, (safe_lshift_func_uint16_t_u_s(func_46(p_39, (**g_140), (**g_11), (**l_186), p_37), 4))));
            (*p_39) = (*p_39);
        }

        ;
        ;
    }

    ;
    (*l_149) = p_38;
    return (*g_10);


}







static char func_40(int ** p_41, int ** p_42, unsigned p_43, int * p_44, int * p_45)
{
    unsigned l_135 = 4294967293UL;
    int *l_137 = (void*)0;
    int **l_136 = &l_137;
    for (p_43 = (-14); (p_43 == 18); p_43 = safe_add_func_uint8_t_u_u(p_43, 9))
    {
        int *l_134 = &g_4;
        (*l_134) = (*p_45);
        if (l_135)
            break;
    }
    (*l_136) = (void*)0;
    (*g_138) = (*g_11);

    ;
    return g_3;
}







static int func_46(int ** p_47, int p_48, int p_49, int p_50, int p_51)
{
    int l_128 = 0L;
    for (g_7 = (-24); (g_7 == (-8)); g_7 = safe_add_func_int16_t_s_s(g_7, 9))
    {
        int l_117 = (-5L);
        unsigned *l_129 = &g_130;
        (*g_10) = ((safe_add_func_uint32_t_u_u((l_117 < (((*l_129) = (safe_mul_func_uint8_t_u_u(p_48, (1L ^ (safe_sub_func_uint16_t_u_u(((safe_rshift_func_uint16_t_u_u(p_48, 0)) || (safe_add_func_int16_t_s_s((p_50 && ((p_47 != ((((g_4 , (safe_mul_func_int8_t_s_s(g_7, p_48))) , (void*)0) != &p_47) , p_47)) | l_117)), l_128))), g_4)))))) , p_50)), 0xFCC65C41L)) , l_117);
        if ((*g_10))
            continue;
    }
    return l_128;
}







static unsigned char func_54(int ** p_55, int ** p_56)
{
    short l_70 = 0x376EL;
    int *l_72 = &g_4;
    int **l_71 = &l_72;
    int l_111 = 0xC81C9D71L;
    (*l_71) = func_58(func_64((l_70 , l_70), l_71, g_57, p_55, (*g_10)), g_13, (**l_71), &l_72, g_13);

    ;
    l_111 = ((safe_sub_func_uint32_t_u_u(0x2A3B4A04L, 2UL)) >= (safe_sub_func_uint8_t_u_u((0xD4L < ((**l_71) , 0L)), 0UL)));
    (*l_71) = (*l_71);
    return g_13;
}







static int * func_58(int * p_59, unsigned char p_60, char p_61, int ** p_62, unsigned p_63)
{
    int **l_105 = (void*)0;
    (*p_62) = (*p_62);
    (*g_106) = l_105;

    ;
    return &g_4;


}







static int * func_64(unsigned short p_65, int ** p_66, int ** p_67, int ** p_68, int p_69)
{
    int l_80 = 0xA498A597L;
    int *l_86 = &l_80;
    int **l_85 = &l_86;
    (*l_86) = (safe_unary_minus_func_int8_t_s((((((**g_11) >= func_74((g_4 && (g_7 = ((~(l_80 , (g_13 , (9UL ^ 0L)))) & (((safe_add_func_int16_t_s_s((~g_4), ((((((-1L) || (((safe_mod_func_uint8_t_u_u((g_57 != l_85), 0xA0L)) != p_69) & g_13)) , (*l_86)) , p_69) , 0x4DL) && (*l_86)))) < g_7) > 1UL)))), p_68, g_13, (*l_86), g_4)) , (*l_86)) & 0xF80B5C32L) && 0UL)));
    return (*p_66);


}







static unsigned func_74(unsigned p_75, int ** p_76, unsigned p_77, unsigned p_78, short p_79)
{
    unsigned short l_89 = 0UL;
    int l_90 = 0xCB567DFBL;
    unsigned l_95 = 1UL;
    unsigned l_98 = 0xD7A23289L;
    unsigned short *l_99 = &l_89;
    int *l_101 = (void*)0;
    int *l_102 = &g_7;
    (*l_102) = ((1UL != g_7) != (g_100 = ((safe_sub_func_int32_t_s_s((((l_90 = l_89) && ((*l_99) = ((safe_add_func_int32_t_s_s((l_90 < (((&l_90 != (void*)0) , (safe_mul_func_int8_t_s_s(l_95, ((p_75 ^ (safe_rshift_func_uint8_t_u_s((((**p_76) != l_98) ^ p_78), g_13))) || g_4)))) != l_98)), (**p_76))) <= 0UL))) & 2L), (-1L))) , 0x6858L)));
    (*l_102) = (**p_76);
    (*l_102) = (safe_sub_func_uint32_t_u_u(g_4, 0xC870D184L));
    return g_4;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_13, "g_13", print_hash_value);
    transparent_crc(g_100, "g_100", print_hash_value);
    transparent_crc(g_130, "g_130", print_hash_value);
    transparent_crc(g_148, "g_148", print_hash_value);
    transparent_crc(g_167, "g_167", print_hash_value);
    transparent_crc(g_173, "g_173", print_hash_value);
    transparent_crc(g_175, "g_175", print_hash_value);
    transparent_crc(g_210, "g_210", print_hash_value);
    transparent_crc(g_223, "g_223", print_hash_value);
    transparent_crc(g_225, "g_225", print_hash_value);
    transparent_crc(g_401, "g_401", print_hash_value);
    transparent_crc(g_481, "g_481", print_hash_value);
    transparent_crc(g_484, "g_484", print_hash_value);
    transparent_crc(g_510, "g_510", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
