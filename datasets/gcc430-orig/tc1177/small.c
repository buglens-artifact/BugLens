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
   unsigned f1;
   unsigned f2 : 10;
   unsigned char f3;
   unsigned f4;
   unsigned short f5;
   unsigned short f6;
   char f7;
   unsigned f8;
   unsigned char f9;
};


static int g_6 = 0x66C93EE3L;
static int *g_5 = &g_6;
static int g_52 = 0x025B0D6BL;
static unsigned char g_100 = 0UL;
static char g_115 = 0xB5L;
static char g_117 = 0xD8L;
static char g_122 = 0x19L;
static char g_132 = 0x7FL;
static int g_133 = (-3L);
static int *g_170 = &g_52;
static char g_213 = 1L;
static char g_230 = 0x42L;
static unsigned short g_237 = 0UL;
static short g_256 = 1L;
static unsigned char g_270 = 0x4AL;
static int g_305 = 5L;
static char g_320 = (-1L);
static unsigned char g_327 = 0x63L;
static short g_337 = 0x83A5L;
static short g_342 = 7L;
static short *g_343 = (void*)0;
static int g_347 = 0x2FE7324FL;
static unsigned char g_349 = 1UL;
static struct S0 g_353 = {65535UL,1UL,13,0xA4L,4294967288UL,0UL,3UL,0xA2L,0x5A8C6FE1L,0UL};
static int g_376 = 1L;
static int g_384 = 4L;
static unsigned g_386 = 4294967293UL;
static unsigned g_413 = 0xEEAEBF9CL;
static char g_558 = 0xAAL;
static int g_585 = 0x47D06EC2L;
static unsigned g_586 = 1UL;
static unsigned short g_678 = 0xBAE7L;
static short ***g_686 = (void*)0;
static unsigned *g_713 = &g_353.f8;
static unsigned char g_805 = 0xA8L;
static const unsigned short g_814 = 0xC2E3L;
static short g_820 = 0xF99EL;
static unsigned g_875 = 0x1A573B29L;
static unsigned char g_888 = 250UL;
static struct S0 g_907 = {0xD17DL,4294967295UL,6,0UL,0x7C9F1499L,0x1C26L,0x0854L,0x26L,0x16B38B57L,0xC7L};
static unsigned short g_967 = 0x1033L;
static int g_1121 = (-7L);
static unsigned short g_1128 = 0x9A13L;
static int g_1271 = 3L;
static unsigned short g_1274 = 0xEB05L;



static int func_1(void);
static int func_2(int * p_3, int * p_4);
static int * func_12(const int * p_13, unsigned char p_14, char p_15, int * const p_16, int * const p_17);
static unsigned func_18(short p_19, char p_20);
static short func_23(int * p_24, int * p_25, unsigned short p_26, char p_27, int * p_28);
static int * func_29(short p_30, char p_31, struct S0 p_32);
static const struct S0 func_37(int * p_38, int p_39, int p_40, int * p_41);
static int * func_42(int p_43);
static char func_48(struct S0 p_49);
static unsigned short func_103(int * const * p_104);
static int func_1(void)
{
    const unsigned char l_11 = 1UL;
    int **l_389 = &g_170;
    int *l_390 = (void*)0;
    int l_905 = 0x4E1A5A07L;
    unsigned l_906 = 0UL;
    int l_1132 = (-1L);
    struct S0 l_1295 = {0x78C3L,0UL,5,255UL,4294967290UL,0UL,0x4289L,0x52L,4294967289UL,255UL};
    int **l_1323 = (void*)0;
    int **l_1324 = &g_5;
    unsigned l_1325 = 3UL;
    (*l_389) = (((*g_5) = func_2(g_5, ((safe_sub_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u(l_11, 1)), 0x3809L)) , func_12((func_18(((safe_lshift_func_int16_t_s_s(func_23(func_29(g_6, ((g_6 , l_11) != (safe_div_func_int32_t_s_s((*g_5), ((safe_rshift_func_uint8_t_u_u(((func_37(((*l_389) = func_42((*g_5))), (*g_5), g_384, l_390) , l_905) && g_353.f6), 7)) , l_906)))), g_907), &l_905, g_907.f3, g_907.f2, &g_6), l_1132)) && g_353.f4), g_820) , (void*)0), g_907.f5, l_11, &g_6, &g_1121)))) , &g_52);
    (*g_170) = (*g_170);
    for (g_100 = 20; (g_100 == 42); g_100 = safe_add_func_uint8_t_u_u(g_100, 2))
    {
        unsigned l_1294 = 0x0554A662L;
        for (g_888 = 16; (g_888 >= 18); g_888++)
        {
            char l_1288 = 1L;
            int *l_1296 = (void*)0;
            unsigned char l_1299 = 0x7DL;
            short *l_1310 = &g_337;
            unsigned short *l_1320 = &g_678;
            for (g_586 = (-6); (g_586 <= 55); g_586 = safe_add_func_int8_t_s_s(g_586, 6))
            {
                int l_1289 = 0x81F5ADC0L;
                int *l_1292 = (void*)0;
                int *l_1293 = &g_585;
                short *l_1297 = &g_820;
                char *l_1298 = &g_132;
                (*l_1293) ^= (func_18(l_1288, l_1289) || (safe_sub_func_uint32_t_u_u(g_907.f7, (~(g_353.f3 , g_52)))));
                (*g_5) = (((l_1294 >= func_2(func_29(l_1294, l_1288, l_1295), l_1296)) != g_52) ^ ((*l_1297) = (l_390 != (void*)0)));
                (**l_389) &= (g_907.f8 < ((*l_1298) ^= g_413));
            }
            (*g_5) |= (**l_389);
            if ((*g_5))
            {
                (*g_5) ^= (*g_170);
                return g_256;
            }
            else
            {
                char *l_1311 = (void*)0;
                char *l_1312 = (void*)0;
                char *l_1313 = &g_907.f7;
                (*g_170) ^= func_18(l_1299, (safe_lshift_func_int8_t_s_u(((*l_1313) = (((safe_sub_func_int16_t_s_s((safe_sub_func_int8_t_s_s((g_907.f3 || 0xECL), (safe_mod_func_uint16_t_u_u(g_907.f5, ((~func_18(l_1294, g_907.f2)) ^ (safe_mod_func_uint32_t_u_u(g_907.f6, (*g_5)))))))), l_1294)) , (void*)0) != l_1310)), g_907.f8)));
                for (l_1295.f4 = (-24); (l_1295.f4 <= 14); l_1295.f4 = safe_add_func_uint32_t_u_u(l_1295.f4, 6))
                {
                    for (g_122 = (-1); (g_122 >= (-20)); g_122--)
                    {
                        return g_353.f4;
                    }
                }
            }
            l_1296 = func_29(func_18(l_1294, func_18(g_353.f1, (safe_add_func_int32_t_s_s((l_1320 == ((*g_170) , (void*)0)), (*g_170))))), (g_814 , 7L), g_907);
        }
        for (g_907.f0 = 0; (g_907.f0 >= 32); ++g_907.f0)
        {
            if ((*g_5))
                break;
        }
    }
    (*l_1324) = ((*l_389) = (*l_389));
    return l_1325;
}







static int func_2(int * p_3, int * p_4)
{
    return (*g_5);
}







static int * func_12(const int * p_13, unsigned char p_14, char p_15, int * const p_16, int * const p_17)
{
    int *l_1152 = &g_133;
    int *l_1153 = (void*)0;
    int *l_1154 = &g_384;
    int l_1155 = 0xEFB579E5L;
    int *l_1156 = &g_384;
    int l_1157 = 0x6275EE18L;
    int *l_1158 = (void*)0;
    int *l_1159 = &g_585;
    int *l_1160 = (void*)0;
    int *l_1161 = &g_347;
    int *l_1162 = &g_52;
    int *l_1163 = &g_384;
    int *l_1164 = (void*)0;
    int *l_1165 = (void*)0;
    int *l_1166 = &g_52;
    int *l_1167 = &g_384;
    int *l_1168 = &g_585;
    char l_1169 = 0xAAL;
    int *l_1170 = &g_384;
    int *l_1171 = &g_347;
    int *l_1172 = (void*)0;
    int *l_1173 = &l_1157;
    int *l_1174 = &g_52;
    int *l_1175 = &g_1121;
    int *l_1176 = &g_6;
    int *l_1177 = &l_1157;
    int *l_1178 = &g_347;
    int l_1179 = (-1L);
    int *l_1180 = &g_347;
    int *l_1181 = &g_1121;
    int *l_1182 = (void*)0;
    int *l_1183 = &g_384;
    int *l_1184 = &l_1155;
    int *l_1185 = (void*)0;
    int *l_1186 = &l_1179;
    int l_1187 = 4L;
    int *l_1188 = &l_1157;
    int *l_1189 = &g_384;
    int *l_1190 = &g_384;
    int *l_1191 = &g_133;
    int *l_1192 = &g_52;
    int *l_1193 = &g_52;
    int *l_1194 = (void*)0;
    int *l_1195 = &g_52;
    int *l_1196 = &g_6;
    int *l_1197 = &l_1187;
    int *l_1198 = &g_347;
    int *l_1199 = &l_1155;
    int *l_1200 = &l_1157;
    int *l_1201 = &g_52;
    int *l_1202 = (void*)0;
    int *l_1203 = &l_1179;
    int *l_1204 = &g_133;
    int *l_1205 = &l_1179;
    int *l_1206 = &g_6;
    int *l_1207 = (void*)0;
    int *l_1208 = &l_1187;
    int *l_1209 = &l_1179;
    int *l_1210 = &l_1155;
    int *l_1211 = &g_133;
    int *l_1212 = &g_1121;
    int l_1213 = 3L;
    int *l_1214 = &g_384;
    int l_1215 = 1L;
    int *l_1216 = &g_347;
    int *l_1217 = &l_1213;
    int *l_1218 = &l_1213;
    int l_1219 = (-1L);
    int *l_1220 = &l_1215;
    int l_1221 = 0x550CDC82L;
    int *l_1222 = (void*)0;
    int *l_1223 = (void*)0;
    int *l_1224 = &g_585;
    int *l_1225 = (void*)0;
    int *l_1226 = (void*)0;
    int l_1227 = (-1L);
    int l_1228 = 1L;
    int *l_1229 = &g_347;
    int *l_1230 = &g_585;
    int *l_1231 = &l_1227;
    int *l_1232 = &l_1213;
    int *l_1233 = &g_384;
    int *l_1234 = &g_585;
    int *l_1235 = &l_1228;
    int *l_1236 = (void*)0;
    int *l_1237 = &l_1179;
    int l_1238 = 0x4958400CL;
    int *l_1239 = &l_1221;
    int l_1240 = (-1L);
    int l_1241 = (-10L);
    int *l_1242 = &l_1240;
    int *l_1243 = &l_1227;
    int *l_1244 = &l_1157;
    int *l_1245 = &g_52;
    int *l_1246 = &l_1219;
    int *l_1247 = (void*)0;
    int *l_1248 = (void*)0;
    int *l_1249 = &l_1221;
    int l_1250 = 1L;
    int l_1251 = 9L;
    int *l_1252 = &g_1121;
    int *l_1253 = &l_1227;
    int l_1254 = (-1L);
    int *l_1255 = &l_1179;
    int *l_1256 = (void*)0;
    int l_1257 = 0xF97976ADL;
    int *l_1258 = &g_1121;
    int l_1259 = (-6L);
    int *l_1260 = (void*)0;
    int *l_1261 = (void*)0;
    int *l_1262 = &l_1254;
    int *l_1263 = &g_384;
    int *l_1264 = &g_384;
    int *l_1265 = &l_1259;
    int l_1266 = 0x53F8E417L;
    int *l_1267 = &l_1251;
    int *l_1268 = &l_1219;
    int *l_1269 = &l_1213;
    int *l_1270 = &l_1251;
    int *l_1272 = &g_585;
    int *l_1273 = &l_1179;
    unsigned l_1279 = 0x7CC4E5BDL;
    g_1274++;
    for (l_1221 = 0; (l_1221 != (-6)); --l_1221)
    {
        return &g_1271;
    }
    l_1279++;
    return &g_585;
}







static unsigned func_18(short p_19, char p_20)
{
    int * const l_1133 = &g_6;
    int *l_1134 = &g_133;
    short *l_1147 = &g_256;
    short *l_1148 = &g_820;
    const int l_1149 = 0x727745DFL;
    unsigned *l_1150 = &g_386;
    l_1134 = l_1133;
    if ((((safe_div_func_uint16_t_u_u((p_19 == 246UL), (*l_1134))) != p_19) || ((g_353.f1 &= (0UL | ((*l_1150) = ((safe_sub_func_int8_t_s_s((g_342 == (safe_div_func_int16_t_s_s(((*l_1148) = (safe_mod_func_uint8_t_u_u((((((*l_1147) = (+(safe_add_func_uint8_t_u_u(p_19, (safe_rshift_func_uint16_t_u_s(p_20, 8)))))) < (-1L)) <= p_19) , 5UL), g_353.f7))), p_20))), (-1L))) <= l_1149)))) > p_19)))
    {
        return p_19;
    }
    else
    {
        unsigned short l_1151 = 0x6983L;
        return l_1151;
    }
}







static short func_23(int * p_24, int * p_25, unsigned short p_26, char p_27, int * p_28)
{
    int l_981 = 0x1D27235BL;
    int l_993 = (-3L);
    int l_996 = 1L;
    int l_1040 = 0x244C800CL;
    int l_1065 = 2L;
    int l_1081 = (-1L);
    int l_1083 = (-1L);
    int l_1084 = 0xBF87E6ECL;
    int l_1118 = 0L;
    int **l_1131 = &g_170;
    if (func_103(&p_28))
    {
        int **l_971 = &g_170;
        (*l_971) = (void*)0;
        for (g_907.f1 = 0; (g_907.f1 > 56); ++g_907.f1)
        {
            short l_974 = 0xF324L;
            return l_974;
        }
    }
    else
    {
        struct S0 l_975 = {0xEC12L,0x7BB83BD0L,19,0x23L,0xA440149DL,0x7613L,0x2537L,0x9FL,1UL,0x7EL};
        struct S0 *l_976 = (void*)0;
        struct S0 *l_977 = (void*)0;
        struct S0 *l_978 = (void*)0;
        int *l_982 = &g_6;
        int *l_983 = &g_6;
        int l_984 = (-3L);
        int *l_985 = &g_347;
        int *l_986 = &g_347;
        int *l_987 = (void*)0;
        int *l_988 = &g_6;
        int l_989 = 0xCCCAC50BL;
        int *l_990 = &g_585;
        int *l_991 = &g_133;
        int *l_992 = &g_347;
        int *l_994 = &l_984;
        int *l_995 = &g_52;
        int *l_997 = (void*)0;
        int *l_998 = &l_996;
        int *l_999 = &l_996;
        int *l_1000 = &g_6;
        int *l_1001 = (void*)0;
        int *l_1002 = &l_996;
        int *l_1003 = &g_384;
        int l_1004 = (-3L);
        int *l_1005 = &g_347;
        int *l_1006 = &l_984;
        int *l_1007 = (void*)0;
        int *l_1008 = &g_347;
        int *l_1009 = (void*)0;
        int *l_1010 = &g_52;
        int *l_1011 = &g_585;
        int *l_1012 = &l_984;
        int *l_1013 = (void*)0;
        int *l_1014 = &l_989;
        int *l_1015 = &l_984;
        int *l_1016 = &l_996;
        int *l_1017 = (void*)0;
        int *l_1018 = &l_1004;
        int *l_1019 = &l_984;
        int *l_1020 = &g_6;
        int *l_1021 = &g_384;
        int *l_1022 = (void*)0;
        int *l_1023 = &l_984;
        int *l_1024 = &l_1004;
        int *l_1025 = (void*)0;
        int *l_1026 = (void*)0;
        int *l_1027 = &l_984;
        int l_1028 = 0x7FB8F0CBL;
        int *l_1029 = &l_981;
        int *l_1030 = &l_993;
        int *l_1031 = &l_996;
        int *l_1032 = &g_384;
        int *l_1033 = &l_984;
        int *l_1034 = &l_984;
        int *l_1035 = &g_133;
        int *l_1036 = &l_981;
        int l_1037 = 5L;
        int *l_1038 = &l_1028;
        int *l_1039 = &g_52;
        int *l_1041 = &g_347;
        int *l_1042 = &l_1004;
        int *l_1043 = &g_133;
        int *l_1044 = &l_989;
        int *l_1045 = &l_1037;
        int *l_1046 = &g_6;
        int *l_1047 = &l_1004;
        int l_1048 = 1L;
        int *l_1049 = &l_993;
        int *l_1050 = &l_1028;
        int *l_1051 = (void*)0;
        int *l_1052 = &l_1040;
        int l_1053 = 0xF10FA94CL;
        int *l_1054 = &l_984;
        int *l_1055 = &g_6;
        int *l_1056 = (void*)0;
        int *l_1057 = (void*)0;
        int *l_1058 = &l_1004;
        int *l_1059 = (void*)0;
        int l_1060 = 1L;
        int *l_1061 = &g_347;
        int *l_1062 = &l_1048;
        int *l_1063 = &l_1028;
        int *l_1064 = &g_52;
        int *l_1066 = &g_585;
        int *l_1067 = &l_984;
        int *l_1068 = &l_996;
        int *l_1069 = &g_384;
        int *l_1070 = &g_384;
        int *l_1071 = &l_1048;
        int *l_1072 = &l_984;
        int *l_1073 = &l_1060;
        int *l_1074 = &g_6;
        int *l_1075 = &g_52;
        int *l_1076 = (void*)0;
        int *l_1077 = &l_1004;
        int *l_1078 = &l_1004;
        int *l_1079 = (void*)0;
        int *l_1080 = &g_585;
        int *l_1082 = (void*)0;
        int *l_1085 = &g_6;
        int *l_1086 = &l_1040;
        int *l_1087 = &l_981;
        int *l_1088 = (void*)0;
        int *l_1089 = &l_993;
        int *l_1090 = &g_585;
        int *l_1091 = &l_1004;
        int *l_1092 = &g_384;
        int *l_1093 = &l_1081;
        int *l_1094 = (void*)0;
        int *l_1095 = &g_347;
        int *l_1096 = &l_1060;
        int *l_1097 = (void*)0;
        int *l_1098 = &l_1060;
        int *l_1099 = (void*)0;
        int *l_1100 = &l_981;
        int *l_1101 = &l_989;
        int *l_1102 = (void*)0;
        int *l_1103 = &l_989;
        int *l_1104 = &l_993;
        int *l_1105 = &l_1084;
        int *l_1106 = &l_1081;
        int *l_1107 = (void*)0;
        int *l_1108 = &g_585;
        int *l_1109 = &g_133;
        int *l_1110 = &l_1040;
        int *l_1111 = (void*)0;
        int l_1112 = 0xFD1A9B3BL;
        int *l_1113 = &l_993;
        int *l_1114 = &l_1081;
        int *l_1115 = &g_347;
        int *l_1116 = &l_1060;
        int *l_1117 = &g_52;
        int *l_1119 = &g_347;
        int *l_1120 = (void*)0;
        int *l_1122 = &l_1084;
        int *l_1123 = &g_347;
        int *l_1124 = &l_1004;
        int *l_1125 = &l_1040;
        int *l_1126 = &g_384;
        int *l_1127 = &l_1118;
        l_975 = l_975;
        (*p_24) &= (safe_sub_func_uint8_t_u_u(0x00L, p_27));
        g_1128--;
    }
    (*l_1131) = &l_993;
    return p_26;
}







static int * func_29(short p_30, char p_31, struct S0 p_32)
{
    int *l_908 = &g_585;
    int **l_909 = &l_908;
    int l_926 = (-3L);
    (*l_909) = l_908;
    for (p_32.f7 = 5; (p_32.f7 > 0); p_32.f7 = safe_sub_func_int32_t_s_s(p_32.f7, 2))
    {
        int *l_912 = (void*)0;
        int *l_913 = &g_6;
        int *l_914 = &g_6;
        int *l_915 = &g_585;
        int *l_916 = (void*)0;
        int l_917 = 2L;
        int *l_918 = (void*)0;
        int *l_919 = (void*)0;
        int *l_920 = (void*)0;
        int *l_921 = &g_585;
        int *l_922 = &g_347;
        int *l_923 = (void*)0;
        int *l_924 = (void*)0;
        int *l_925 = &g_52;
        int *l_927 = &g_6;
        int *l_928 = &g_133;
        int *l_929 = (void*)0;
        int *l_930 = &l_917;
        int *l_931 = &l_926;
        int *l_932 = &g_384;
        int *l_933 = &l_917;
        int *l_934 = &l_926;
        int *l_935 = &g_6;
        int *l_936 = &l_917;
        int l_937 = 0xEA740972L;
        int *l_938 = &l_926;
        int *l_939 = &g_133;
        int *l_940 = &g_52;
        int *l_941 = (void*)0;
        int *l_942 = &l_926;
        int *l_943 = &l_937;
        int *l_944 = &l_926;
        int *l_945 = &g_384;
        int *l_946 = (void*)0;
        int *l_947 = &l_926;
        int *l_948 = &g_133;
        int *l_949 = &l_926;
        int *l_950 = &g_52;
        int *l_951 = &l_937;
        int l_952 = 6L;
        int *l_953 = &g_347;
        int *l_954 = &l_926;
        int *l_955 = &g_6;
        int *l_956 = &g_347;
        int *l_957 = &g_52;
        int *l_958 = &g_347;
        int *l_959 = (void*)0;
        int *l_960 = &g_133;
        int *l_961 = &g_6;
        int *l_962 = &g_585;
        int *l_963 = &g_52;
        int *l_964 = &g_585;
        int *l_965 = &g_384;
        int l_966 = 0x89339EB7L;
        struct S0 l_970 = {0x5F34L,0xB5F4A50EL,17,9UL,5UL,0UL,1UL,1L,1UL,255UL};
        (*l_909) = (void*)0;
        g_967--;
        (*l_932) = (*g_5);
    }
    return &g_52;
}







static const struct S0 func_37(int * p_38, int p_39, int p_40, int * p_41)
{
    struct S0 *l_391 = &g_353;
    unsigned *l_394 = &g_353.f8;
    int l_396 = 0x6EC82406L;
    int l_410 = 0x08AB74A1L;
    int l_550 = 0xD3679061L;
    unsigned char l_601 = 0x53L;
    short **l_635 = &g_343;
    int * const *l_696 = &g_5;
    int l_860 = (-1L);
    int l_870 = 0x1A6E7CCFL;
    unsigned short l_900 = 0x3B77L;
    unsigned char *l_903 = &g_353.f9;
    unsigned char **l_902 = &l_903;
    int *l_904 = &g_384;
    (*l_391) = g_353;
    if ((safe_rshift_func_uint16_t_u_s(((void*)0 == l_394), func_103(&p_38))))
    {
        int **l_395 = &g_170;
        int *l_397 = &g_52;
        int *l_398 = &g_384;
        int *l_399 = &g_52;
        int *l_400 = &g_52;
        int *l_401 = &g_52;
        int *l_402 = &g_347;
        int *l_403 = &g_347;
        int *l_404 = &g_52;
        int *l_405 = &g_384;
        int *l_406 = &l_396;
        int l_407 = 0xA7869C72L;
        int *l_408 = &l_396;
        int *l_409 = &l_407;
        int *l_411 = &l_407;
        int *l_412 = (void*)0;
        short *l_430 = &g_342;
        unsigned short l_441 = 65535UL;
        unsigned short l_450 = 0x5AFCL;
        int l_542 = 0xA7C95BA0L;
        char l_710 = 0x5AL;
        (*l_395) = (void*)0;
        (*l_397) = ((*g_5) ^ l_396);
        --g_413;
        if (func_103(&l_405))
        {
            int *l_418 = &l_410;
            int l_485 = (-1L);
            const struct S0 l_590 = {0x0920L,6UL,22,255UL,0x8F590AF4L,7UL,0xD5BAL,0x78L,0UL,0xCCL};
            int l_613 = 0xA9EA06C3L;
            const unsigned char *l_699 = &l_590.f9;
            short ***l_702 = &l_635;
            for (g_115 = 0; (g_115 >= 11); g_115 = safe_add_func_int16_t_s_s(g_115, 6))
            {
                unsigned l_425 = 0x2B2063B9L;
                int l_456 = 0x078140ACL;
                int l_494 = 0xDD8F4488L;
                int l_539 = 0L;
                struct S0 l_589 = {0UL,0UL,12,1UL,0x43A7C1BFL,0x7D02L,0xC70BL,0x79L,0xFA52F59CL,255UL};
                unsigned short l_630 = 0x26F5L;
                p_38 = l_418;
                if (l_410)
                    break;
                for (g_117 = 0; (g_117 > (-14)); g_117--)
                {
                    short *l_431 = &g_342;
                    int ***l_443 = &l_395;
                    unsigned char *l_454 = &g_270;
                    unsigned char **l_453 = &l_454;
                    unsigned *l_455 = &g_386;
                    int l_548 = (-1L);
                    int *l_604 = &l_548;
                    int *l_605 = &g_347;
                    int *l_606 = &g_133;
                    int *l_607 = (void*)0;
                    int *l_608 = &g_52;
                    int *l_609 = &l_542;
                    int *l_610 = &g_347;
                    int *l_611 = &l_485;
                    int *l_612 = &l_407;
                    int *l_614 = &l_410;
                    int *l_615 = (void*)0;
                    int *l_616 = &l_613;
                    int *l_617 = &l_539;
                    int *l_618 = (void*)0;
                    int *l_619 = &l_396;
                    int *l_620 = &l_456;
                    int *l_621 = &l_485;
                    int *l_622 = &g_585;
                    int *l_623 = &g_585;
                    int *l_624 = (void*)0;
                    int *l_625 = &g_384;
                    int *l_626 = (void*)0;
                    int *l_627 = &l_494;
                    int *l_628 = &l_550;
                    int *l_629 = &l_550;
                    for (g_327 = (-15); (g_327 <= 36); g_327++)
                    {
                        unsigned short *l_434 = &g_237;
                        (*l_402) |= (((safe_mod_func_int32_t_s_s((l_425 <= (safe_div_func_uint32_t_u_u(l_425, ((*l_409) = (*p_38))))), (*g_5))) <= (safe_sub_func_int32_t_s_s((((g_343 = l_430) != l_431) <= ((*l_397) ^= ((safe_mod_func_uint16_t_u_u(g_353.f7, (--(*l_434)))) , 0xC7567B0EL))), (safe_add_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s(l_396, g_353.f7)), l_425))))) >= g_353.f3);
                        (*p_38) ^= l_441;
                    }
                    if ((((safe_unary_minus_func_int8_t_s(((((*l_443) = (((*l_404) = ((*l_430) = (*l_418))) , &l_399)) == ((safe_sub_func_int16_t_s_s((0x47E7AD45L >= (safe_add_func_uint16_t_u_u((safe_sub_func_int32_t_s_s(l_450, (((safe_add_func_int16_t_s_s(p_40, l_396)) , ((*l_455) ^= (0xDAL & ((((((*l_453) = &g_327) == (void*)0) , p_40) == l_410) > 0x2EL)))) , l_425))), p_40))), g_353.f8)) , &l_418)) , g_353.f7))) <= p_39) && g_353.f7))
                    {
                        int *l_457 = &g_133;
                        int *l_458 = &g_384;
                        int *l_459 = &l_396;
                        int *l_460 = &g_52;
                        int *l_461 = &l_456;
                        int *l_462 = &l_456;
                        int *l_463 = &g_384;
                        int *l_464 = &g_384;
                        int *l_465 = &g_133;
                        int *l_466 = &g_347;
                        int *l_467 = &g_384;
                        int *l_468 = &l_396;
                        int *l_469 = &g_384;
                        int *l_470 = &l_456;
                        int *l_471 = &l_396;
                        int *l_472 = &g_52;
                        int *l_473 = (void*)0;
                        int *l_474 = &g_347;
                        int *l_475 = &g_384;
                        int *l_476 = &g_347;
                        int *l_477 = &l_407;
                        int *l_478 = &g_347;
                        int *l_479 = &g_52;
                        int *l_480 = &g_384;
                        int *l_481 = &g_52;
                        int *l_482 = (void*)0;
                        int *l_483 = &g_52;
                        int *l_484 = (void*)0;
                        int *l_486 = &l_410;
                        int *l_487 = &l_396;
                        int *l_488 = &l_410;
                        int *l_489 = &g_347;
                        int *l_490 = &l_410;
                        int *l_491 = &l_410;
                        int *l_492 = (void*)0;
                        int *l_493 = &g_347;
                        int *l_495 = &l_494;
                        int *l_496 = &l_456;
                        int *l_497 = &g_384;
                        int *l_498 = &l_494;
                        int *l_499 = (void*)0;
                        int *l_500 = &l_485;
                        int *l_501 = &g_347;
                        int *l_502 = &l_456;
                        int l_503 = 0x4B90360CL;
                        int *l_504 = &g_133;
                        int *l_505 = (void*)0;
                        int *l_506 = &g_347;
                        int *l_507 = &l_456;
                        int *l_508 = &l_503;
                        int *l_509 = (void*)0;
                        int *l_510 = &l_485;
                        int *l_511 = &l_503;
                        int *l_512 = (void*)0;
                        int *l_513 = &g_384;
                        int *l_514 = &l_485;
                        int *l_515 = &l_410;
                        int *l_516 = (void*)0;
                        int *l_517 = &g_133;
                        int *l_518 = (void*)0;
                        int *l_519 = (void*)0;
                        int *l_520 = (void*)0;
                        int *l_521 = &l_407;
                        int *l_522 = &l_503;
                        int *l_523 = &g_133;
                        int *l_524 = (void*)0;
                        int *l_525 = &l_503;
                        int *l_526 = (void*)0;
                        int *l_527 = &l_503;
                        int *l_528 = &l_456;
                        int *l_529 = &g_133;
                        int *l_530 = &g_52;
                        int *l_531 = &l_494;
                        int *l_532 = (void*)0;
                        int *l_533 = &g_384;
                        int *l_534 = &l_407;
                        int *l_535 = &g_347;
                        int *l_536 = &l_396;
                        int *l_537 = &l_503;
                        int *l_538 = &g_384;
                        int *l_540 = &l_407;
                        int *l_541 = &g_347;
                        int *l_543 = &l_456;
                        int *l_544 = &g_347;
                        int *l_545 = &l_456;
                        int *l_546 = &l_410;
                        int *l_547 = &l_485;
                        int *l_549 = &l_548;
                        int *l_551 = &l_410;
                        int *l_552 = &g_52;
                        int *l_553 = &g_52;
                        int *l_554 = &l_539;
                        int *l_555 = &l_410;
                        int *l_556 = &l_396;
                        int *l_557 = &l_494;
                        int *l_559 = &g_384;
                        int *l_560 = &l_494;
                        int *l_561 = &l_503;
                        int *l_562 = (void*)0;
                        int *l_563 = &l_548;
                        int *l_564 = &g_52;
                        int *l_565 = &l_456;
                        int *l_566 = &g_347;
                        int *l_567 = &l_396;
                        int *l_568 = &l_407;
                        int *l_569 = &g_347;
                        int *l_570 = &l_548;
                        int *l_571 = &g_133;
                        int *l_572 = &l_548;
                        int *l_573 = &l_407;
                        int *l_574 = (void*)0;
                        int *l_575 = &l_396;
                        int *l_576 = &l_407;
                        int *l_577 = (void*)0;
                        int *l_578 = &g_347;
                        int *l_579 = &l_485;
                        int *l_580 = &l_550;
                        int *l_581 = &l_550;
                        int *l_582 = &g_347;
                        int *l_583 = (void*)0;
                        int *l_584 = &l_494;
                        (*l_395) = &g_133;
                        g_586--;
                        (*l_391) = g_353;
                        g_353 = (p_40 , l_589);
                    }
                    else
                    {
                        return l_590;
                    }
                    for (l_441 = 0; (l_441 == 45); ++l_441)
                    {
                        int *l_593 = &g_133;
                        int *l_594 = &l_485;
                        int *l_595 = &l_550;
                        int *l_596 = &l_456;
                        int *l_597 = &g_585;
                        int *l_598 = (void*)0;
                        int *l_599 = &g_585;
                        int *l_600 = &l_548;
                        (*l_395) = (void*)0;
                        l_601++;
                        (*l_406) |= (*l_397);
                    }
                    l_630--;
                }
            }
            for (g_353.f4 = 10; (g_353.f4 > 55); g_353.f4++)
            {
                short ***l_636 = (void*)0;
                short ***l_637 = (void*)0;
                short ***l_638 = &l_635;
                int l_671 = 6L;
                unsigned char l_700 = 0xDBL;
                struct S0 l_701 = {65535UL,0x7F19A99BL,7,0UL,1UL,0UL,65535UL,0x45L,0x04719DABL,0xDAL};
                (*l_638) = l_635;
                for (l_410 = 0; (l_410 <= 25); l_410 = safe_add_func_int16_t_s_s(l_410, 7))
                {
                    int *l_641 = &l_485;
                    int *l_642 = &g_133;
                    int *l_643 = &g_347;
                    int *l_644 = &l_550;
                    int *l_645 = (void*)0;
                    int *l_646 = &l_550;
                    int *l_647 = &g_347;
                    int *l_648 = &g_384;
                    int *l_649 = &g_133;
                    int *l_650 = &g_133;
                    int *l_651 = &l_613;
                    int *l_652 = &g_585;
                    int *l_653 = &g_585;
                    int *l_654 = &l_542;
                    int *l_655 = (void*)0;
                    int *l_656 = &g_585;
                    int *l_657 = &g_52;
                    int *l_658 = &g_52;
                    int *l_659 = &g_133;
                    int *l_660 = &g_133;
                    int *l_661 = &l_396;
                    int *l_662 = (void*)0;
                    int *l_663 = &l_550;
                    int *l_664 = &g_347;
                    int *l_665 = &g_52;
                    int *l_666 = (void*)0;
                    int *l_667 = &g_52;
                    int *l_668 = &l_542;
                    int *l_669 = &l_396;
                    int *l_670 = &l_550;
                    int *l_672 = &l_485;
                    int *l_673 = &g_52;
                    int *l_674 = &g_585;
                    int *l_675 = &g_347;
                    int *l_676 = &l_407;
                    int *l_677 = &g_384;
                    unsigned short * const l_685 = &g_353.f5;
                    short ****l_687 = &l_636;
                    --g_678;
                    (*l_656) &= (safe_rshift_func_uint16_t_u_u(((*l_663) | p_39), (safe_mod_func_int32_t_s_s((((*l_687) = ((g_586 , ((void*)0 != l_685)) , g_686)) != (void*)0), (((((*l_685) = ((*p_38) ^ (p_39 && 0xEB44L))) | p_40) , 0x1D61L) || p_40)))));
                    p_41 = ((*l_395) = ((safe_rshift_func_int8_t_s_u((safe_mod_func_uint8_t_u_u(p_39, (((((-1L) & ((safe_add_func_int8_t_s_s((safe_sub_func_uint16_t_u_u((*l_670), (2UL > 0xD2L))), (*l_653))) > func_103(l_696))) > ((safe_mod_func_uint8_t_u_u(((((&g_327 == l_699) , p_40) , p_39) && l_700), p_40)) > 0xA8EF3326L)) ^ p_40) && 0x93A5E453L))), 6)) , l_676));
                }
                if ((((*p_38) == (g_353.f0 <= (g_384 , ((**l_696) , (p_39 & (g_384 & (((g_349 , g_256) < g_353.f7) && g_52))))))) == 2L))
                {
                    if ((*p_38))
                        break;
                }
                else
                {
                    return g_353;
                }
            }
            (*l_702) = l_635;
            return g_353;
        }
        else
        {
            unsigned short *l_707 = &l_450;
            struct S0 l_711 = {0UL,5UL,18,255UL,0UL,0x5A4EL,0x5993L,0L,4294967294UL,250UL};
            unsigned **l_712 = &l_394;
            (*l_395) = (void*)0;
            (*l_395) = ((((safe_sub_func_int8_t_s_s((safe_mul_func_uint16_t_u_u(((*l_707) &= p_40), (!(**l_696)))), g_100)) || g_353.f4) > ((*l_402) ^= (-5L))) , &g_585);
            (*g_170) &= (~((g_713 = (l_711 , ((*l_712) = p_41))) == (void*)0));
        }
    }
    else
    {
        int *l_714 = &l_396;
        short l_724 = (-1L);
        int l_742 = 0x2CC0F150L;
        int l_830 = (-1L);
        int l_865 = (-8L);
        unsigned char *l_881 = &g_327;
        char *l_889 = &g_353.f7;
        int l_894 = 0xA440BE90L;
        short *l_895 = (void*)0;
        unsigned l_901 = 0x351C4A36L;
        if (((*l_714) &= ((**l_696) | (*p_38))))
        {
            int *l_722 = (void*)0;
            int l_731 = 2L;
            int l_749 = (-1L);
            int **l_808 = &l_722;
            for (g_115 = 0; (g_115 == 6); g_115 = safe_add_func_uint32_t_u_u(g_115, 7))
            {
                int **l_723 = &g_170;
                int *l_725 = (void*)0;
                int *l_726 = &l_550;
                int *l_727 = (void*)0;
                int *l_728 = &g_585;
                int *l_729 = &g_384;
                int *l_730 = (void*)0;
                int *l_732 = &l_396;
                int *l_733 = &l_731;
                int *l_734 = &g_347;
                int *l_735 = &g_384;
                int *l_736 = &l_550;
                int *l_737 = &l_731;
                int *l_738 = &l_410;
                int *l_739 = &l_731;
                int *l_740 = &g_52;
                int *l_741 = &g_347;
                int l_743 = 1L;
                int *l_744 = (void*)0;
                int l_745 = 3L;
                int *l_746 = &l_742;
                int *l_747 = &g_585;
                int *l_748 = &l_396;
                int *l_750 = &l_745;
                int *l_751 = &l_743;
                int *l_752 = &l_749;
                int *l_753 = &l_745;
                int *l_754 = &l_550;
                int *l_755 = &l_396;
                int *l_756 = &l_410;
                int *l_757 = &l_410;
                int *l_758 = &g_585;
                int *l_759 = &l_743;
                int *l_760 = &g_384;
                int *l_761 = &l_742;
                int *l_762 = &l_745;
                int *l_763 = (void*)0;
                int *l_764 = &l_550;
                int *l_765 = &l_410;
                int *l_766 = &l_410;
                int *l_767 = &l_731;
                int *l_768 = &l_745;
                int *l_769 = (void*)0;
                int *l_770 = (void*)0;
                int *l_771 = &g_347;
                int *l_772 = &l_550;
                int *l_773 = &g_384;
                int *l_774 = &g_52;
                int *l_775 = &l_745;
                int *l_776 = &l_745;
                int *l_777 = &l_749;
                int l_778 = 1L;
                int *l_779 = &l_743;
                int *l_780 = &l_743;
                int *l_781 = &l_396;
                int *l_782 = &l_410;
                int *l_783 = &l_410;
                int *l_784 = &l_410;
                int *l_785 = &g_585;
                int *l_786 = &g_384;
                int *l_787 = &l_743;
                int *l_788 = &g_585;
                int *l_789 = &l_745;
                int *l_790 = &l_742;
                int *l_791 = &g_384;
                int *l_792 = (void*)0;
                int *l_793 = (void*)0;
                int *l_794 = &g_384;
                int *l_795 = (void*)0;
                int *l_796 = &l_742;
                int *l_797 = &l_743;
                int *l_798 = &g_347;
                int *l_799 = &l_749;
                int *l_800 = &l_550;
                int l_801 = (-1L);
                int *l_802 = &l_410;
                int *l_803 = &g_347;
                int *l_804 = &l_731;
                for (g_558 = 0; (g_558 != (-4)); g_558 = safe_sub_func_int32_t_s_s(g_558, 3))
                {
                    for (g_100 = 11; (g_100 <= 56); g_100 = safe_add_func_int16_t_s_s(g_100, 3))
                    {
                        int **l_721 = &g_170;
                        (*l_721) = &g_6;
                    }
                }
                (*l_723) = l_722;
                ++g_805;
                (*l_723) = &g_347;
            }
            (*l_808) = &p_39;
        }
        else
        {
            struct S0 l_809 = {0x5FADL,0xC12D24E1L,10,0x01L,1UL,6UL,0xA30CL,0x36L,0xC207D0D2L,1UL};
            unsigned char *l_810 = &g_805;
            unsigned char **l_811 = &l_810;
            const unsigned short *l_813 = &g_814;
            const unsigned short **l_812 = &l_813;
            short *l_815 = (void*)0;
            short *l_816 = &g_337;
            unsigned char *l_818 = &g_349;
            unsigned char **l_817 = &l_818;
            int *l_819 = &g_347;
            int *l_821 = &g_52;
            int *l_822 = &g_384;
            int *l_823 = &l_550;
            int *l_824 = &l_550;
            int *l_825 = &g_585;
            int *l_826 = &l_550;
            int *l_827 = &g_52;
            int *l_828 = &l_410;
            int *l_829 = &g_52;
            int *l_831 = &g_347;
            int *l_832 = &l_550;
            int *l_833 = &g_133;
            int *l_834 = &g_133;
            int *l_835 = &l_410;
            int *l_836 = &l_550;
            int *l_837 = &l_550;
            int *l_838 = &g_347;
            int *l_839 = &l_410;
            int *l_840 = &g_585;
            int *l_841 = &g_52;
            int *l_842 = &g_585;
            int *l_843 = &l_410;
            int *l_844 = &g_585;
            int *l_845 = &g_347;
            int *l_846 = &g_347;
            int *l_847 = &g_585;
            int *l_848 = &g_347;
            int *l_849 = &l_550;
            int *l_850 = &l_830;
            int *l_851 = &l_550;
            int *l_852 = &l_742;
            int *l_853 = (void*)0;
            int *l_854 = &g_585;
            int *l_855 = &l_410;
            int *l_856 = (void*)0;
            int *l_857 = &l_742;
            int *l_858 = (void*)0;
            int *l_859 = &l_550;
            int *l_861 = &g_133;
            int *l_862 = &l_550;
            int *l_863 = &l_410;
            int *l_864 = &g_52;
            int *l_866 = &l_396;
            int *l_867 = &l_742;
            int *l_868 = &l_860;
            int *l_869 = (void*)0;
            int *l_871 = &l_865;
            int *l_872 = (void*)0;
            int *l_873 = &g_347;
            int *l_874 = &g_585;
            (*l_819) |= ((((*l_811) = (l_809 , l_810)) != ((*l_817) = (((*l_714) , ((*l_816) |= ((((void*)0 != l_811) , &g_237) != ((*l_812) = &g_237)))) , (void*)0))) == 0xF0B85757L);
            g_875++;
        }
        g_585 |= ((safe_sub_func_uint32_t_u_u((safe_unary_minus_func_int32_t_s(func_103(&p_41))), p_39)) , (((p_39 , (--(*l_881))) , ((*l_889) = ((*l_714) ^ (safe_div_func_uint16_t_u_u(g_353.f1, g_353.f5))))) && 255UL));
        (*l_714) &= (func_103(&l_714) || (0xA7L <= (((((safe_mod_func_int32_t_s_s(((safe_lshift_func_uint8_t_u_s(((((((void*)0 == &g_170) & (l_900 |= ((g_342 ^= (g_337 = l_894)) || (4UL == (safe_sub_func_int16_t_s_s(((-1L) & ((1UL < (**l_696)) != 0xB778EB83L)), p_40)))))) < p_40) & p_40) >= g_888), p_39)) >= (**l_696)), l_901)) , 0x4090L) , l_902) != (void*)0) & p_39)));
    }
    (*l_904) = (*g_5);
    return g_353;
}







static int * func_42(int p_43)
{
    int *l_47 = &g_6;
    int **l_46 = &l_47;
    struct S0 l_50 = {0xA1BAL,0x0C3E5F88L,5,0x28L,0x0CC74BF7L,1UL,0x397BL,-9L,0x56BE8236L,0x11L};
    int *l_352 = &g_347;
    int *l_354 = &g_133;
    int l_355 = 0x8CFFD04AL;
    int *l_356 = &l_355;
    int *l_357 = (void*)0;
    int l_358 = 9L;
    int *l_359 = (void*)0;
    int l_360 = 0x180E2AD8L;
    int *l_361 = (void*)0;
    int l_362 = 0xE5552EE5L;
    int *l_363 = &g_133;
    int *l_364 = &g_52;
    int *l_365 = &g_347;
    int *l_366 = &g_347;
    int *l_367 = &g_52;
    int *l_368 = &g_52;
    int *l_369 = &g_347;
    int *l_370 = &g_133;
    int *l_371 = (void*)0;
    int *l_372 = &g_52;
    int *l_373 = (void*)0;
    int *l_374 = &l_360;
    int *l_375 = &g_133;
    int *l_377 = &l_362;
    int *l_378 = &g_347;
    int l_379 = (-1L);
    int *l_380 = &l_355;
    int *l_381 = &g_133;
    int *l_382 = &l_379;
    int *l_383 = &l_379;
    int *l_385 = (void*)0;
    (*l_352) ^= (safe_sub_func_uint8_t_u_u((&g_6 != ((*l_46) = &g_6)), (0x32L && func_48(l_50))));
    g_353 = l_50;
    ++g_386;
    return &g_6;
}







static char func_48(struct S0 p_49)
{
    int *l_51 = &g_52;
    int l_53 = (-1L);
    int *l_54 = &g_52;
    int *l_55 = &g_52;
    int *l_56 = (void*)0;
    int *l_57 = &l_53;
    int *l_58 = (void*)0;
    int *l_59 = &g_52;
    int *l_60 = &l_53;
    int *l_61 = &l_53;
    int *l_62 = &g_52;
    int *l_63 = &g_52;
    int *l_64 = &l_53;
    int *l_65 = &l_53;
    int *l_66 = &l_53;
    int l_67 = (-1L);
    int *l_68 = &l_67;
    int *l_69 = &g_52;
    int *l_70 = (void*)0;
    int *l_71 = &g_52;
    int *l_72 = &g_52;
    int *l_73 = (void*)0;
    int *l_74 = &l_53;
    int *l_75 = &l_67;
    int *l_76 = &g_52;
    int *l_77 = &l_67;
    int *l_78 = &l_53;
    int *l_79 = (void*)0;
    int *l_80 = &l_67;
    int *l_81 = &g_52;
    int *l_82 = &g_52;
    int *l_83 = (void*)0;
    int *l_84 = &l_67;
    int *l_85 = &l_53;
    int *l_86 = &g_52;
    int *l_87 = &l_67;
    int l_88 = 0xF077D7E7L;
    int *l_89 = &l_88;
    int *l_90 = &l_88;
    int *l_91 = &l_67;
    int l_92 = 1L;
    int *l_93 = (void*)0;
    int *l_94 = &l_92;
    int *l_95 = &g_52;
    int *l_96 = (void*)0;
    int *l_97 = (void*)0;
    int *l_98 = &l_67;
    int *l_99 = &l_53;
    struct S0 l_144 = {65527UL,1UL,15,250UL,0UL,0UL,0x5700L,0x6BL,0x38A8812EL,0xE4L};
    short *l_263 = (void*)0;
    int l_276 = 0xDE3E9214L;
    struct S0 *l_346 = &l_144;
    short l_348 = 6L;
    ++g_100;
    if ((func_103(&g_5) < (&l_93 == (void*)0)))
    {
        char *l_149 = &g_115;
        int * const *l_150 = &l_83;
        unsigned char l_155 = 1UL;
        int l_173 = 0xFA85FE05L;
        int l_175 = 0xCAF6BF14L;
        unsigned *l_250 = (void*)0;
        int *l_258 = (void*)0;
        char l_278 = (-2L);
        short *l_341 = &g_342;
        (*l_61) = ((0UL > g_117) ^ g_122);
        if ((safe_mod_func_uint32_t_u_u((g_52 && (safe_rshift_func_uint8_t_u_u(g_6, p_49.f2))), p_49.f6)))
        {
            int l_131 = 0xB9F09720L;
            l_131 = ((4294967295UL & p_49.f5) & (safe_add_func_int8_t_s_s(p_49.f5, g_115)));
        }
        else
        {
            unsigned l_134 = 9UL;
            struct S0 l_154 = {65535UL,3UL,9,255UL,0xB322AC55L,0UL,0UL,1L,0x88F66F91L,0xAAL};
            unsigned l_246 = 0x5E185815L;
            ++l_134;
            for (l_92 = 13; (l_92 >= 6); l_92 = safe_sub_func_int32_t_s_s(l_92, 6))
            {
                unsigned char *l_139 = &g_100;
                int l_158 = (-1L);
                int * const *l_245 = &l_84;
                int *l_257 = &l_92;
                (*l_91) |= (((*l_139) = 5UL) ^ g_115);
                (*l_91) = (safe_div_func_int32_t_s_s((*l_75), (safe_add_func_uint8_t_u_u(p_49.f3, (l_144 , ((0x66B6F1F2L == (safe_add_func_int16_t_s_s((safe_div_func_int16_t_s_s(p_49.f5, (g_132 | p_49.f6))), ((l_149 != (void*)0) < 0x7089L)))) | g_115))))));
                if (func_103(l_150))
                {
                    int l_153 = 0x1F030062L;
                    int *l_169 = &l_67;
                    if (((safe_rshift_func_int8_t_s_u(func_103(&l_58), l_153)) != 0xAFL))
                    {
                        (*l_57) &= ((l_154 , ((p_49.f8 & (p_49.f3 ^ 0L)) || l_153)) >= g_52);
                        if ((*g_5))
                            continue;
                    }
                    else
                    {
                        unsigned char *l_172 = &l_144.f3;
                        int l_174 = 1L;
                        int *l_176 = &g_133;
                        int *l_177 = &l_158;
                        int *l_178 = &l_67;
                        int *l_179 = &l_53;
                        int *l_180 = &l_174;
                        int *l_181 = &l_158;
                        int *l_182 = &l_174;
                        int *l_183 = (void*)0;
                        int *l_184 = &l_158;
                        int *l_185 = &g_52;
                        int *l_186 = &l_175;
                        int *l_187 = &l_175;
                        int *l_188 = &l_174;
                        int *l_189 = &g_52;
                        int *l_190 = &l_173;
                        int *l_191 = &l_173;
                        int *l_192 = &l_53;
                        int *l_193 = &l_67;
                        int *l_194 = &l_67;
                        int *l_195 = &l_175;
                        int *l_196 = &l_88;
                        int *l_197 = &l_173;
                        int *l_198 = &l_173;
                        int *l_199 = (void*)0;
                        int *l_200 = &l_173;
                        int *l_201 = &g_52;
                        int *l_202 = (void*)0;
                        int *l_203 = &l_67;
                        int *l_204 = &l_158;
                        int *l_205 = (void*)0;
                        int *l_206 = (void*)0;
                        int *l_207 = &g_52;
                        int l_208 = 0L;
                        int *l_209 = &l_175;
                        int *l_210 = &l_175;
                        int *l_211 = &l_88;
                        int *l_212 = &l_67;
                        int *l_214 = (void*)0;
                        int *l_215 = &l_158;
                        int *l_216 = (void*)0;
                        int *l_217 = (void*)0;
                        int *l_218 = (void*)0;
                        int *l_219 = &l_88;
                        int *l_220 = &l_67;
                        int *l_221 = &l_175;
                        int *l_222 = &l_53;
                        int *l_223 = (void*)0;
                        int *l_224 = &l_174;
                        int *l_225 = &g_52;
                        int *l_226 = (void*)0;
                        int *l_227 = &l_174;
                        int *l_228 = &l_175;
                        int *l_229 = (void*)0;
                        int *l_231 = &g_52;
                        int *l_232 = &l_53;
                        int *l_233 = &g_133;
                        int *l_234 = &l_174;
                        int *l_235 = (void*)0;
                        int *l_236 = (void*)0;
                        (*l_66) &= (((l_155 , (safe_lshift_func_int8_t_s_s(l_158, 5))) || func_103(&g_5)) ^ g_132);
                        (*l_99) = (safe_rshift_func_uint16_t_u_u(65532UL, (((*l_172) = ((safe_add_func_uint8_t_u_u((g_100 = l_153), (safe_sub_func_int16_t_s_s((safe_sub_func_int16_t_s_s(g_115, ((l_154.f5 > (*g_5)) , l_154.f3))), (safe_rshift_func_uint8_t_u_u(((g_170 = l_169) != (void*)0), 2)))))) == ((safe_unary_minus_func_uint32_t_u(g_115)) , p_49.f2))) , 1UL)));
                        ++g_237;
                    }
                }
                else
                {
                    int * const **l_242 = &l_150;
                    unsigned *l_243 = &l_154.f8;
                    short *l_255 = &g_256;
                    if (((*l_57) ^= ((((+(0xDC72L <= ((safe_lshift_func_int16_t_s_u(((*l_98) == (((*l_243) = func_103(((*l_242) = &g_5))) , (func_103((*l_242)) , (5UL <= ((func_103(&g_5) < (-1L)) , 5UL))))), (*l_54))) && g_52))) | (-4L)) <= p_49.f5) , p_49.f8)))
                    {
                        unsigned l_244 = 0x012FDBCCL;
                        (*l_91) = (l_244 | (-7L));
                        return g_237;
                    }
                    else
                    {
                        int **l_247 = &l_76;
                        l_246 &= ((*l_81) = func_103(l_245));
                        (*l_247) = &l_92;
                        (*l_95) = (**l_150);
                        (*l_247) = ((safe_lshift_func_uint16_t_u_u((***l_242), 15)) , &l_88);
                    }
                    l_258 = (((*l_61) ^= ((g_132 ^ (p_49.f2 == (l_250 != &l_246))) , (((*l_255) = ((safe_add_func_uint8_t_u_u(p_49.f5, (p_49.f6 , l_154.f0))) < (safe_div_func_uint16_t_u_u(((((*l_51) = 6L) ^ (g_132 && 0xC8L)) || p_49.f3), 0x765AL)))) ^ p_49.f1))) , l_257);
                    (*l_62) |= (safe_add_func_uint32_t_u_u(((((*l_89) = ((*l_99) = ((safe_rshift_func_int8_t_s_s(p_49.f0, g_6)) , (((void*)0 == l_263) <= (((safe_sub_func_int16_t_s_s(((0xE7L >= (safe_lshift_func_uint8_t_u_u((g_133 < (safe_sub_func_int16_t_s_s(g_117, (p_49.f5 | 1L)))), p_49.f1))) , (***l_242)), p_49.f2)) , g_100) != 0xEB71L))))) || g_100) && 0xC7166182L), g_133));
                    if ((*g_5))
                        break;
                }
                (*l_72) = l_154.f9;
            }
        }
        (*l_85) = (-2L);
        if (((*l_95) &= g_270))
        {
            int **l_271 = &l_51;
            int l_277 = (-4L);
            int l_296 = 4L;
            short *l_340 = (void*)0;
            (*l_271) = &g_52;
            (*l_94) = 0x8D2D0EFEL;
            (*l_98) |= p_49.f7;
            if ((((safe_add_func_int8_t_s_s(p_49.f3, (0x2E06E0E4L < (safe_div_func_int16_t_s_s(((*l_87) |= func_103(((+(((l_276 , 0x45D7L) , &g_52) == &g_133)) , &l_72))), (0xA9D5L ^ 0xCE01L)))))) <= 0x00L) >= g_6))
            {
                return g_122;
            }
            else
            {
                int l_279 = 0x4D074B32L;
                int *l_280 = (void*)0;
                int *l_281 = &l_277;
                int *l_282 = &l_175;
                int *l_283 = &l_173;
                int *l_284 = (void*)0;
                int *l_285 = (void*)0;
                int *l_286 = &l_67;
                int *l_287 = &l_53;
                int *l_288 = (void*)0;
                int *l_289 = &l_277;
                int *l_290 = (void*)0;
                int *l_291 = &l_92;
                int *l_292 = &l_67;
                int *l_293 = &l_92;
                int *l_294 = &l_175;
                int *l_295 = &l_277;
                int *l_297 = &l_67;
                int *l_298 = &l_296;
                int *l_299 = &l_277;
                int *l_300 = &g_133;
                int *l_301 = &l_296;
                int *l_302 = &g_52;
                int *l_303 = &l_277;
                int *l_304 = (void*)0;
                int *l_306 = &l_67;
                int *l_307 = &l_296;
                int *l_308 = &l_53;
                int *l_309 = &l_276;
                int *l_310 = &l_67;
                int *l_311 = &l_276;
                int *l_312 = &l_175;
                int *l_313 = (void*)0;
                int *l_314 = (void*)0;
                int *l_315 = (void*)0;
                int *l_316 = &l_92;
                int *l_317 = &l_276;
                int *l_318 = &l_276;
                int *l_319 = &g_52;
                int *l_321 = &g_52;
                int *l_322 = &l_92;
                int *l_323 = &l_276;
                int *l_324 = &l_175;
                int *l_325 = (void*)0;
                int *l_326 = &g_133;
                unsigned short l_332 = 0x695CL;
                short *l_335 = (void*)0;
                short *l_336 = &g_337;
                g_327--;
                (*l_62) |= (safe_sub_func_uint16_t_u_u(l_332, (*l_282)));
                (*g_170) = (((safe_lshift_func_int16_t_s_u(p_49.f7, (((g_256 = func_103(&l_54)) < ((*l_336) = g_270)) >= (g_270 & (*l_84))))) & (0xE861B128L >= (safe_rshift_func_int8_t_s_u(((((l_341 = (l_340 = l_263)) == (g_343 = (((*l_326) = ((**l_271) , 0xE3DCAB47L)) , (void*)0))) != 65535UL) && p_49.f4), (*l_59))))) , p_49.f4);
                (*l_271) = &l_92;
            }
        }
        else
        {
            struct S0 *l_345 = &l_144;
            struct S0 **l_344 = &l_345;
            (*l_344) = (((g_320 ^ ((*l_66) = func_103(&g_5))) == (*l_81)) , (void*)0);
        }
    }
    else
    {
        return g_213;
    }
    (*l_346) = l_144;
    g_349++;
    return g_305;
}







static unsigned short func_103(int * const * p_104)
{
    int l_124 = (-6L);
    for (g_100 = 27; (g_100 != 29); g_100 = safe_add_func_uint16_t_u_u(g_100, 5))
    {
        unsigned short l_109 = 0UL;
        char *l_114 = &g_115;
        char *l_116 = &g_117;
        char *l_118 = (void*)0;
        char *l_119 = (void*)0;
        char *l_120 = (void*)0;
        char *l_121 = &g_122;
        int l_123 = 0L;
        l_109 = (safe_sub_func_uint32_t_u_u(g_100, 0x7F9695FFL));
        l_123 |= (safe_mod_func_int32_t_s_s((g_52 >= (safe_rshift_func_int8_t_s_u(((*l_121) ^= ((*l_116) = ((*l_114) = g_52))), 0))), 4294967295UL));
    }
    return l_124;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_6, "g_6", print_hash_value);
    transparent_crc(g_52, "g_52", print_hash_value);
    transparent_crc(g_100, "g_100", print_hash_value);
    transparent_crc(g_115, "g_115", print_hash_value);
    transparent_crc(g_117, "g_117", print_hash_value);
    transparent_crc(g_122, "g_122", print_hash_value);
    transparent_crc(g_132, "g_132", print_hash_value);
    transparent_crc(g_133, "g_133", print_hash_value);
    transparent_crc(g_213, "g_213", print_hash_value);
    transparent_crc(g_230, "g_230", print_hash_value);
    transparent_crc(g_237, "g_237", print_hash_value);
    transparent_crc(g_256, "g_256", print_hash_value);
    transparent_crc(g_270, "g_270", print_hash_value);
    transparent_crc(g_305, "g_305", print_hash_value);
    transparent_crc(g_320, "g_320", print_hash_value);
    transparent_crc(g_327, "g_327", print_hash_value);
    transparent_crc(g_337, "g_337", print_hash_value);
    transparent_crc(g_342, "g_342", print_hash_value);
    transparent_crc(g_347, "g_347", print_hash_value);
    transparent_crc(g_349, "g_349", print_hash_value);
    transparent_crc(g_353.f0, "g_353.f0", print_hash_value);
    transparent_crc(g_353.f1, "g_353.f1", print_hash_value);
    transparent_crc(g_353.f2, "g_353.f2", print_hash_value);
    transparent_crc(g_353.f3, "g_353.f3", print_hash_value);
    transparent_crc(g_353.f4, "g_353.f4", print_hash_value);
    transparent_crc(g_353.f5, "g_353.f5", print_hash_value);
    transparent_crc(g_353.f6, "g_353.f6", print_hash_value);
    transparent_crc(g_353.f7, "g_353.f7", print_hash_value);
    transparent_crc(g_353.f8, "g_353.f8", print_hash_value);
    transparent_crc(g_353.f9, "g_353.f9", print_hash_value);
    transparent_crc(g_376, "g_376", print_hash_value);
    transparent_crc(g_384, "g_384", print_hash_value);
    transparent_crc(g_386, "g_386", print_hash_value);
    transparent_crc(g_413, "g_413", print_hash_value);
    transparent_crc(g_558, "g_558", print_hash_value);
    transparent_crc(g_585, "g_585", print_hash_value);
    transparent_crc(g_586, "g_586", print_hash_value);
    transparent_crc(g_678, "g_678", print_hash_value);
    transparent_crc(g_805, "g_805", print_hash_value);
    transparent_crc(g_814, "g_814", print_hash_value);
    transparent_crc(g_820, "g_820", print_hash_value);
    transparent_crc(g_875, "g_875", print_hash_value);
    transparent_crc(g_888, "g_888", print_hash_value);
    transparent_crc(g_907.f0, "g_907.f0", print_hash_value);
    transparent_crc(g_907.f1, "g_907.f1", print_hash_value);
    transparent_crc(g_907.f2, "g_907.f2", print_hash_value);
    transparent_crc(g_907.f3, "g_907.f3", print_hash_value);
    transparent_crc(g_907.f4, "g_907.f4", print_hash_value);
    transparent_crc(g_907.f5, "g_907.f5", print_hash_value);
    transparent_crc(g_907.f6, "g_907.f6", print_hash_value);
    transparent_crc(g_907.f7, "g_907.f7", print_hash_value);
    transparent_crc(g_907.f8, "g_907.f8", print_hash_value);
    transparent_crc(g_907.f9, "g_907.f9", print_hash_value);
    transparent_crc(g_967, "g_967", print_hash_value);
    transparent_crc(g_1121, "g_1121", print_hash_value);
    transparent_crc(g_1128, "g_1128", print_hash_value);
    transparent_crc(g_1271, "g_1271", print_hash_value);
    transparent_crc(g_1274, "g_1274", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
