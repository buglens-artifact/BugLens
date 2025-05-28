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
   unsigned f0;
   short f1;
   int f2;
   char f3;
   unsigned short f4;
   int f5;
   short f6;
   short f7;
};

struct S1 {
   unsigned f0;
   unsigned f1;
   short f2;
   unsigned short f3;
   short f4;
};

struct S2 {
   char f0;
   unsigned char f1;
   unsigned short f2;
   short f3;
   unsigned f4;
   unsigned short f5;
   struct S0 f6;
};


static struct S1 g_16 = {1UL,0x37280DDAL,0L,0x42FAL,1L};
static char g_36 = 0xCAL;
static short g_53 = 0xE175L;
static int g_67 = 0x4CA839EFL;
static char g_73 = 6L;
static unsigned *g_82 = &g_16.f0;
static int g_86 = 0x237583F0L;
static unsigned g_91 = 0UL;
static short g_97 = 0x1705L;
static unsigned short g_133 = 0xCC27L;
static unsigned char g_184 = 255UL;
static unsigned short g_236 = 0xEC3DL;
static unsigned short g_258 = 0xC95DL;
static unsigned short g_267 = 6UL;
static struct S2 g_296 = {0x55L,0x7EL,65535UL,0L,4294967295UL,65529UL,{0xFF3143DFL,0L,0L,-2L,0x2E43L,-8L,0xD057L,0xE0C2L}};
static struct S2 *g_295 = &g_296;
static int g_302 = 0x24A96F26L;
static struct S0 *g_307 = &g_296.f6;
static struct S1 *g_324 = &g_16;
static struct S1 **g_323 = &g_324;
static int g_363 = 0xEC06C289L;
static unsigned short g_382 = 7UL;
static int g_438 = (-8L);
static unsigned short *g_481 = &g_382;
static int g_534 = 0x3F1C36ACL;
static unsigned g_538 = 7UL;
static unsigned g_599 = 0x197DC2ECL;
static char g_674 = 0xC1L;
static short g_689 = 5L;
static short g_693 = 0xE0BEL;
static int g_723 = 0x778A3A3BL;
static int g_736 = (-4L);
static char g_737 = 8L;
static unsigned g_748 = 0x0147E3C7L;
static int g_792 = 0x1B014DF7L;
static int *g_797 = &g_67;
static unsigned char g_823 = 0x9DL;
static unsigned *g_827 = &g_91;
static char g_909 = 1L;
static int g_928 = 0x250F0BB9L;
static int g_942 = 9L;
static int g_943 = (-6L);
static unsigned short g_984 = 0xEAC8L;
static unsigned g_1149 = 1UL;
static struct S2 g_1155 = {0x6DL,0xC7L,0xA11BL,-7L,0xF1FD7BD9L,65530UL,{0xE9351763L,-1L,0x70DA5516L,6L,1UL,0xDBEE4E1EL,0xF216L,0x39D5L}};
static short g_1268 = 0x9F31L;
static unsigned char g_1290 = 0x3AL;
static char *g_1297 = &g_737;
static char **g_1296 = &g_1297;
static short g_1307 = 0x748FL;
static unsigned g_1342 = 0x63A0AE56L;
static unsigned short g_1463 = 0x3861L;
static int g_1471 = 7L;



static unsigned short func_1(void);
static short func_2(unsigned p_3, struct S1 p_4, struct S2 p_5, int p_6);
static struct S1 func_8(struct S2 p_9, unsigned short p_10, unsigned p_11, unsigned short p_12, unsigned char p_13);
static struct S2 func_14(struct S1 p_15);
static unsigned func_20(unsigned p_21, int p_22);
static struct S2 func_26(struct S0 p_27, unsigned * p_28);
static struct S0 func_29(unsigned p_30, unsigned * p_31, int p_32);
static char func_37(struct S0 p_38, unsigned * p_39, char * p_40);
static struct S0 func_41(unsigned short p_42, unsigned * p_43, struct S0 p_44, int p_45, struct S0 p_46);
static struct S0 func_47(char p_48, int p_49, char p_50);
static unsigned short func_1(void)
{
    int l_7 = 0x02314AF1L;
    unsigned char *l_822 = &g_823;
    int *l_1472 = &g_438;
    char **l_1473 = &g_1297;
    g_1471 |= (0xA66EL > (func_2(l_7, func_8(func_14(g_16), g_736, l_7, (g_736 ^ 4L), ((*l_822) = g_693)), g_1155, g_1155.f6.f4) < g_693));

    ;

    ;

    (*l_1472) = l_7;
    (*l_1472) ^= (l_1473 != l_1473);
    return (*l_1472);
}







static short func_2(unsigned p_3, struct S1 p_4, struct S2 p_5, int p_6)
{
    int *l_1159 = (void*)0;
    struct S0 l_1160 = {4294967295UL,0x5893L,-1L,0xF8L,5UL,1L,-1L,4L};
    int l_1175 = 0xCE3FB34EL;
    struct S0 **l_1178 = &g_307;
    short *l_1181 = &g_97;
    char *l_1186 = &g_296.f0;
    unsigned l_1187 = 2UL;
    int l_1308 = (-1L);
    unsigned l_1337 = 4294967295UL;
    struct S1 **l_1365 = &g_324;
    struct S2 *l_1467 = &g_1155;
    for (g_36 = (-5); (g_36 == 22); g_36++)
    {
        int **l_1158 = (void*)0;
        l_1159 = &g_86;

        ;
    }

    ;
    (**g_323) = func_8((p_5 = p_5), func_37(l_1160, l_1159, &g_36), p_6, p_4.f4, (!(safe_sub_func_uint16_t_u_u(0UL, p_6))));
    if (p_3)
    {
        char l_1166 = 0x2CL;
        short l_1167 = 0xBB19L;
        int **l_1172 = (void*)0;
        unsigned *l_1173 = (void*)0;
        struct S0 l_1183 = {0x89D0DB8EL,3L,-1L,0x54L,0xAF38L,0x1BC56219L,0x2812L,0x7269L};
        unsigned char l_1185 = 0xF8L;
        int l_1212 = 9L;
        int l_1226 = 0x79D07456L;
        int l_1249 = 0L;
        int l_1282 = 1L;
        int **l_1309 = &g_797;
        int l_1466 = 0x8724964FL;
        if (((safe_mod_func_uint32_t_u_u((safe_unary_minus_func_uint16_t_u((l_1166 || l_1167))), (safe_rshift_func_uint8_t_u_u(((l_1166 | p_5.f4) && ((*g_797) = (((*g_481)--) && ((((void*)0 == l_1172) & (g_943 <= p_3)) == 0xF57CL)))), p_6)))) >= 6L))
        {
            struct S2 *l_1174 = &g_1155;
            (*l_1174) = p_5;
        }
        else
        {
            short *l_1180 = &g_1155.f6.f1;
            short **l_1179 = &l_1180;
            short **l_1182 = &l_1181;
            unsigned l_1184 = 0x9D8F10FAL;
            struct S0 l_1197 = {4294967295UL,1L,-1L,1L,0x0B18L,0x858FDE4DL,0xD5D6L,0xBD52L};
            int l_1201 = 0xB5434D48L;
            char *l_1304 = &g_737;
            l_1175 &= ((*g_797) ^= p_5.f1);
            g_928 |= ((safe_mod_func_uint8_t_u_u((((void*)0 == l_1178) >= (func_37((p_5.f6 = func_41(((*g_481) |= (((*l_1179) = &g_693) == ((*l_1182) = l_1181))), &g_91, l_1183, (*g_797), func_47(l_1184, p_4.f4, l_1185))), &l_1184, l_1186) == p_6)), g_674)) && (*g_82));

            ;
            (*g_797) = (l_1187 <= 0xCF8D02A4L);
            if ((((*g_797) && p_4.f4) == (*g_82)))
            {
                int l_1198 = 0xB5CB826EL;
                int l_1200 = 0x340BD438L;
                unsigned *l_1295 = (void*)0;
                for (g_1155.f0 = 0; (g_1155.f0 != (-9)); g_1155.f0 = safe_sub_func_int16_t_s_s(g_1155.f0, 5))
                {
                    int **l_1190 = &l_1159;
                    unsigned char *l_1199 = &l_1185;
                    int l_1215 = 0L;
                    int l_1218 = 0xADFA2217L;
                    int l_1233 = 0x0A188DBAL;
                    (*l_1190) = &g_736;

                    ;
                    (**l_1190) &= ((safe_rshift_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u(p_4.f4, ((*g_481)++))), func_37(l_1197, &g_91, &g_737))) ^ (*g_82));
                    if ((l_1198 ^ (((*l_1199) = g_599) >= 0x63L)))
                    {
                        int *l_1202 = &g_363;
                        int *l_1203 = &g_438;
                        int *l_1204 = &g_942;
                        int *l_1205 = (void*)0;
                        int *l_1206 = (void*)0;
                        int *l_1207 = (void*)0;
                        int *l_1208 = &g_363;
                        int *l_1209 = &l_1200;
                        int *l_1210 = &l_1200;
                        int *l_1211 = (void*)0;
                        int *l_1213 = (void*)0;
                        int *l_1214 = &l_1212;
                        int *l_1216 = &g_67;
                        int *l_1217 = &l_1201;
                        int *l_1219 = &g_928;
                        int *l_1220 = &g_438;
                        int *l_1221 = &g_363;
                        int *l_1222 = &g_438;
                        int *l_1223 = &l_1215;
                        int *l_1224 = &g_928;
                        int *l_1225 = (void*)0;
                        int *l_1227 = &g_942;
                        int *l_1228 = &g_363;
                        int *l_1229 = &l_1226;
                        int *l_1230 = &g_67;
                        int *l_1231 = &g_928;
                        int *l_1232 = &l_1175;
                        int *l_1234 = &l_1226;
                        int *l_1235 = &g_942;
                        int *l_1236 = &l_1200;
                        int *l_1237 = &g_67;
                        int *l_1238 = &g_928;
                        int *l_1239 = &l_1233;
                        int *l_1240 = &g_67;
                        int *l_1241 = &l_1215;
                        int *l_1242 = &g_67;
                        int *l_1243 = &g_928;
                        int *l_1244 = &g_363;
                        int *l_1245 = &l_1218;
                        int *l_1246 = (void*)0;
                        int *l_1247 = &l_1200;
                        int *l_1248 = &g_736;
                        int *l_1250 = &g_67;
                        int *l_1251 = &g_928;
                        int *l_1252 = &g_363;
                        int *l_1253 = &l_1226;
                        int *l_1254 = (void*)0;
                        int *l_1255 = (void*)0;
                        int *l_1256 = &g_928;
                        int *l_1257 = &g_942;
                        int *l_1258 = &g_942;
                        int *l_1259 = &l_1233;
                        int *l_1260 = &l_1201;
                        int *l_1261 = &g_942;
                        int *l_1262 = (void*)0;
                        int *l_1263 = &l_1215;
                        int *l_1264 = &l_1233;
                        int *l_1265 = &g_363;
                        int *l_1266 = &l_1200;
                        int *l_1267 = &l_1175;
                        int *l_1269 = &l_1233;
                        int *l_1270 = &l_1218;
                        int *l_1271 = &g_928;
                        int *l_1272 = &l_1215;
                        int *l_1273 = (void*)0;
                        int *l_1274 = &l_1226;
                        int *l_1275 = &g_67;
                        int *l_1276 = &l_1218;
                        int *l_1277 = &l_1200;
                        int *l_1278 = (void*)0;
                        int *l_1279 = &l_1201;
                        int *l_1280 = &g_86;
                        int *l_1281 = &l_1226;
                        int *l_1283 = (void*)0;
                        int *l_1284 = (void*)0;
                        int *l_1285 = &g_942;
                        int *l_1286 = (void*)0;
                        int *l_1287 = &l_1226;
                        int *l_1288 = (void*)0;
                        int *l_1289 = &l_1226;
                        (*l_1178) = (*l_1178);
                        l_1201 ^= l_1200;
                        --g_1290;
                    }
                    else
                    {
                        if (l_1184)
                            break;
                        (*g_797) ^= (safe_lshift_func_uint16_t_u_s(func_37(p_5.f6, &g_538, l_1199), p_5.f3));
                        (*g_797) &= func_37(g_1155.f6, &g_748, &g_909);
                        (*l_1190) = (*l_1190);
                    }
                }

                ;
                return g_91;
            }
            else
            {
                char ***l_1298 = (void*)0;
                char ***l_1299 = (void*)0;
                char ***l_1300 = &g_1296;
                struct S1 l_1301 = {4294967294UL,0xBFD057ABL,0x8260L,5UL,0x9A77L};
                struct S0 l_1302 = {0xEA7DCBE3L,0xC43CL,-1L,0x39L,8UL,-7L,0x859FL,-1L};
                unsigned **l_1303 = &l_1173;
                (*l_1178) = (void*)0;

                ;
                (*g_797) &= (((*l_1300) = g_1296) != &g_1297);
                l_1301 = l_1301;
                l_1308 = (((func_37(l_1302, ((*l_1303) = &g_91), l_1304) == 3UL) <= p_4.f0) != (p_5.f6.f3 ^ (safe_rshift_func_uint8_t_u_s((g_1307 <= (-6L)), 3))));

                ;
            }

            ;
            ;
        }

        ;
        (*l_1309) = &l_1308;

        ;
        for (g_382 = 0; (g_382 != 25); g_382 = safe_add_func_uint16_t_u_u(g_382, 1))
        {
            int *l_1312 = &l_1282;
            int *l_1313 = &l_1308;
            int *l_1314 = &g_438;
            int *l_1315 = &l_1175;
            int *l_1316 = &g_942;
            int *l_1317 = &g_363;
            int *l_1318 = &g_438;
            int *l_1319 = &g_928;
            int *l_1320 = &g_736;
            int *l_1321 = &l_1226;
            int *l_1322 = &g_363;
            int *l_1323 = &g_67;
            int *l_1324 = &l_1175;
            int *l_1325 = &g_736;
            int *l_1326 = &l_1175;
            int *l_1327 = &l_1308;
            int *l_1328 = &g_86;
            int *l_1329 = &l_1249;
            int l_1330 = 0x0703D941L;
            int *l_1331 = &g_928;
            int *l_1332 = (void*)0;
            int *l_1333 = &l_1249;
            int *l_1334 = &g_942;
            int *l_1335 = (void*)0;
            int *l_1336 = (void*)0;
            char **l_1343 = &g_1297;
            ++l_1337;
            for (p_6 = 0; (p_6 == (-30)); --p_6)
            {
                (*l_1325) &= ((*l_1318) = (*g_797));
                (*l_1309) = &l_1175;

                ;
                if (g_1342)
                    break;
            }
            l_1343 = (void*)0;

            ;
        }

        ;
        if ((safe_sub_func_int32_t_s_s((*g_797), (*g_827))))
        {
            struct S2 **l_1350 = &g_295;
            for (p_5.f4 = (-10); (p_5.f4 <= 37); ++p_5.f4)
            {
                (**l_1309) = p_4.f3;
                for (p_5.f6.f4 = 2; (p_5.f6.f4 <= 59); p_5.f6.f4 = safe_add_func_uint8_t_u_u(p_5.f6.f4, 2))
                {
                    g_295 = &p_5;

                    ;
                }
            }

            ;
            g_942 ^= (*g_797);
            for (l_1185 = 0; (l_1185 < 22); l_1185 = safe_add_func_int32_t_s_s(l_1185, 4))
            {
                return g_16.f3;



            }
            (*g_797) &= p_4.f1;
        }
        else
        {
            struct S0 *l_1366 = &l_1183;
            short l_1369 = (-9L);
            unsigned short l_1374 = 65531UL;
            int l_1411 = 0x5E0358EFL;
            int l_1450 = 0x459C5209L;
            unsigned l_1460 = 4294967295UL;
            if (l_1308)
            {
                return g_1268;


            }
            else
            {
                struct S0 l_1359 = {0x70CE399AL,1L,0xFB04E232L,0L,65535UL,0x9099F748L,-6L,0x1C75L};
                for (g_296.f6.f0 = 0; (g_296.f6.f0 > 23); g_296.f6.f0++)
                {
                    unsigned l_1362 = 4294967291UL;
                    if (((**l_1309) = (((safe_mod_func_int32_t_s_s(((+((func_37(l_1359, &g_91, (*g_1296)) < (0x4A731513L != (safe_add_func_uint8_t_u_u(l_1362, (0x1E3687A8L | (0xA0CD9A16L != ((*g_82) = (*g_82)))))))) || g_1155.f4)) & 4294967295UL), 0x0C55058EL)) > (*g_481)) && 1L)))
                    {
                        (*l_1309) = &g_67;

                        ;
                    }
                    else
                    {
                        g_797 = &g_363;

                        ;
                    }

                    ;
                }

                ;
                (*l_1309) = &g_67;

                ;
                l_1365 = &g_324;
            }

            ;
            (*l_1366) = p_5.f6;
            if (p_5.f6.f4)
            {
                unsigned *l_1372 = &g_1342;
                struct S0 l_1373 = {0UL,5L,0x7CDE46CBL,0xC0L,4UL,0x3978EFB2L,0x6FF9L,0xDDBFL};
                (**l_1309) ^= (safe_add_func_uint16_t_u_u(p_5.f0, ((safe_rshift_func_uint8_t_u_u(((p_5.f6.f1 | (0x7E1FCD6AL != 9UL)) >= p_4.f0), p_5.f6.f6)) | l_1373.f2)));
            }
            else
            {
                int *l_1375 = &l_1212;
                int *l_1376 = &g_438;
                int *l_1377 = &l_1226;
                int *l_1378 = &g_942;
                int *l_1379 = &l_1175;
                int *l_1380 = &l_1282;
                int *l_1381 = &g_942;
                int *l_1382 = &g_363;
                int *l_1383 = &g_363;
                int *l_1384 = &g_942;
                int *l_1385 = &g_67;
                int *l_1386 = (void*)0;
                int *l_1387 = &g_86;
                int *l_1388 = &l_1175;
                int *l_1389 = &g_736;
                int *l_1390 = &g_438;
                int *l_1391 = &l_1282;
                int *l_1392 = &g_928;
                int *l_1393 = &l_1249;
                int *l_1394 = &g_736;
                int *l_1395 = &g_736;
                int *l_1396 = &l_1249;
                int *l_1397 = &g_928;
                int *l_1398 = &l_1308;
                int *l_1399 = &l_1175;
                int *l_1400 = &l_1249;
                int *l_1401 = &g_928;
                int *l_1402 = &l_1308;
                int *l_1403 = &g_438;
                int *l_1404 = &l_1249;
                int l_1405 = 2L;
                int *l_1406 = &l_1212;
                int *l_1407 = &l_1226;
                int *l_1408 = &g_928;
                int *l_1409 = &l_1249;
                int l_1410 = 0x73FA993FL;
                int *l_1412 = &g_67;
                int *l_1413 = &g_928;
                int *l_1414 = &l_1175;
                int *l_1415 = &l_1410;
                int *l_1416 = &g_942;
                int *l_1417 = &l_1405;
                int *l_1418 = &g_736;
                int *l_1419 = &l_1212;
                int *l_1420 = &g_438;
                int *l_1421 = &g_67;
                int *l_1422 = (void*)0;
                int *l_1423 = (void*)0;
                int *l_1424 = &g_86;
                int *l_1425 = (void*)0;
                int *l_1426 = (void*)0;
                int *l_1427 = (void*)0;
                int *l_1428 = &g_942;
                int *l_1429 = &l_1282;
                int *l_1430 = &g_736;
                int *l_1431 = (void*)0;
                int *l_1432 = &g_736;
                int *l_1433 = &g_86;
                int *l_1434 = &l_1212;
                int *l_1435 = &l_1175;
                int *l_1436 = &g_438;
                int *l_1437 = &l_1411;
                int *l_1438 = &l_1249;
                int *l_1439 = &g_363;
                int *l_1440 = &l_1249;
                int *l_1441 = (void*)0;
                int *l_1442 = (void*)0;
                int *l_1443 = &l_1405;
                int *l_1444 = &l_1212;
                int *l_1445 = &l_1411;
                int *l_1446 = (void*)0;
                int *l_1447 = &l_1308;
                int *l_1448 = &g_928;
                int *l_1449 = &l_1411;
                int *l_1451 = &l_1175;
                int *l_1452 = &l_1308;
                int *l_1453 = &l_1308;
                int *l_1454 = &l_1249;
                int *l_1455 = &g_67;
                int *l_1456 = &l_1175;
                int *l_1457 = &l_1212;
                int *l_1458 = &l_1411;
                int *l_1459 = &l_1411;
                l_1460--;
                (*l_1419) = (*g_797);
                --g_1463;
            }
            l_1450 &= (l_1466 != 0x6FL);
        }

        ;
        ;
    }
    else
    {
        if (p_5.f6.f0)
        {
            return p_5.f6.f6;
        }
        else
        {
            l_1467 = &p_5;

            ;
        }

        ;
    }

    ;
    ;
    ;
    for (l_1175 = 25; (l_1175 > (-7)); l_1175 = safe_sub_func_int8_t_s_s(l_1175, 1))
    {
        unsigned l_1470 = 4294967287UL;
        return l_1470;



    }
    return p_5.f6.f3;



}







static struct S1 func_8(struct S2 p_9, unsigned short p_10, unsigned p_11, unsigned short p_12, unsigned char p_13)
{
    char *l_825 = (void*)0;
    int l_826 = 0x03A5248FL;
    struct S0 l_834 = {0UL,0x816EL,0xD36302C9L,0x8EL,0x318BL,0xDF598A1CL,0xD3CFL,0x2B17L};
    struct S0 l_838 = {0x3B222DCCL,0xA3A1L,8L,0xB5L,0xA42EL,0L,0L,0xC3A4L};
    char l_865 = 0xE5L;
    int l_889 = (-10L);
    int l_902 = (-10L);
    int l_914 = (-6L);
    short l_934 = 5L;
    int l_938 = 7L;
    int l_955 = 0x44288043L;
    int l_976 = 0xB3CEBEA7L;
    unsigned *l_1000 = (void*)0;
    unsigned **l_1034 = &g_82;
    unsigned ***l_1033 = &l_1034;
    int l_1064 = (-6L);
    int l_1065 = 0x0BE524BBL;
    int l_1067 = 4L;
    int l_1069 = 0x26DDBD07L;
    int l_1108 = 0xD09F8E03L;
    int l_1128 = 0xE5E0293EL;
    int l_1148 = 0x166529EAL;
    struct S1 l_1154 = {0xEE900A2DL,4294967295UL,0xA1B1L,65535UL,0xF890L};
    if ((safe_unary_minus_func_int32_t_s((+((*g_797) = (((p_9.f0 = 4L) >= l_826) & func_37(p_9.f6, g_827, l_825)))))))
    {
        unsigned char l_828 = 248UL;
        char *l_835 = &g_296.f0;
        unsigned *l_836 = &g_748;
        struct S0 l_837 = {0x4705D081L,0x0C54L,0x45E8C4A1L,-1L,65535UL,0L,-2L,-1L};
        int *l_839 = (void*)0;
        int *l_840 = &g_363;
        int *l_841 = &g_363;
        int *l_842 = &g_67;
        int *l_843 = (void*)0;
        int *l_844 = &g_363;
        int *l_845 = &g_736;
        int l_846 = 0x97FAA61FL;
        int *l_847 = (void*)0;
        int *l_848 = &l_826;
        int *l_849 = &g_736;
        int *l_850 = &g_438;
        int *l_851 = &l_826;
        int *l_852 = &l_826;
        int *l_853 = &g_67;
        int *l_854 = &g_86;
        int *l_855 = (void*)0;
        int *l_856 = (void*)0;
        int *l_857 = &g_736;
        int *l_858 = &g_736;
        int *l_859 = &l_826;
        int *l_860 = &g_438;
        int *l_861 = (void*)0;
        int *l_862 = (void*)0;
        int *l_863 = (void*)0;
        int *l_864 = &l_826;
        int *l_866 = &l_846;
        int l_867 = 5L;
        int *l_868 = (void*)0;
        int *l_869 = &g_86;
        int *l_870 = &g_438;
        int *l_871 = &l_846;
        int *l_872 = &g_67;
        int l_873 = 0x0E40A744L;
        int *l_874 = &g_438;
        int *l_875 = &g_67;
        int *l_876 = &l_846;
        int *l_877 = &l_846;
        int *l_878 = &l_867;
        int *l_879 = &l_873;
        int *l_880 = (void*)0;
        int *l_881 = &g_67;
        int *l_882 = &l_846;
        int *l_883 = &g_363;
        int *l_884 = (void*)0;
        int *l_885 = &l_867;
        int *l_886 = (void*)0;
        int *l_887 = &l_846;
        int *l_888 = &l_867;
        int *l_890 = &l_873;
        int *l_891 = (void*)0;
        int *l_892 = (void*)0;
        int l_893 = 0x263E7514L;
        int *l_894 = &l_826;
        int *l_895 = (void*)0;
        int *l_896 = &g_363;
        int *l_897 = &l_846;
        int *l_898 = &g_67;
        int *l_899 = &l_867;
        int *l_900 = &g_67;
        int *l_901 = (void*)0;
        int *l_903 = &l_846;
        int *l_904 = &g_86;
        int *l_905 = (void*)0;
        int l_906 = 2L;
        int *l_907 = &g_736;
        int *l_908 = &l_906;
        int l_910 = 0L;
        int *l_911 = &l_893;
        int *l_912 = &l_826;
        int *l_913 = &l_906;
        int *l_915 = &l_873;
        int *l_916 = (void*)0;
        int *l_917 = &l_914;
        int *l_918 = &l_889;
        int *l_919 = &l_902;
        int *l_920 = &g_736;
        int l_921 = 0x8BE7CCB0L;
        int *l_922 = &l_921;
        int *l_923 = &g_438;
        int *l_924 = &l_826;
        int *l_925 = &l_873;
        int *l_926 = &l_902;
        int *l_927 = &l_893;
        int *l_929 = &g_363;
        int *l_930 = &l_910;
        int *l_931 = &l_906;
        int *l_932 = &l_893;
        int *l_933 = &g_928;
        int *l_935 = &l_902;
        int *l_936 = &l_846;
        int *l_937 = &l_846;
        int *l_939 = &l_826;
        int *l_940 = &l_914;
        int *l_941 = &l_902;
        int *l_944 = &l_921;
        int *l_945 = &g_942;
        int *l_946 = (void*)0;
        int *l_947 = &g_67;
        int *l_948 = &g_438;
        int *l_949 = &g_67;
        int *l_950 = &l_906;
        int l_951 = (-1L);
        int *l_952 = &l_921;
        int *l_953 = (void*)0;
        int *l_954 = &g_942;
        int *l_956 = &l_906;
        int *l_957 = &l_938;
        int *l_958 = (void*)0;
        int *l_959 = &l_889;
        int *l_960 = &l_951;
        int l_961 = 0xB617BA65L;
        int l_962 = 0x4C77029BL;
        int *l_963 = &g_942;
        int *l_964 = (void*)0;
        int *l_965 = &l_910;
        int *l_966 = &g_438;
        int *l_967 = (void*)0;
        int *l_968 = &l_955;
        int *l_969 = &l_961;
        int *l_970 = &g_736;
        int *l_971 = &g_86;
        int *l_972 = &g_928;
        int *l_973 = (void*)0;
        int *l_974 = (void*)0;
        int *l_975 = (void*)0;
        int *l_977 = (void*)0;
        int *l_978 = &l_902;
        int *l_979 = (void*)0;
        int *l_980 = &l_889;
        int *l_981 = &g_736;
        int *l_982 = &g_928;
        int *l_983 = &l_893;
        unsigned *l_993 = &l_834.f0;
        l_838 = l_837;
        ++g_984;
        if ((safe_rshift_func_uint16_t_u_u((((((((*l_978) == (*g_797)) && ((*g_481) = p_9.f6.f6)) || (safe_rshift_func_int16_t_s_s(((*g_797) < p_9.f6.f2), 0))) && 0UL) & l_838.f1) <= (*g_797)), 6)))
        {
            struct S0 l_999 = {0xA37BEC88L,0xB0C1L,-1L,8L,1UL,-2L,0xD522L,3L};
            short *l_1009 = &l_837.f7;
            int *l_1016 = &l_906;
            char ***l_1022 = (void*)0;
            char **l_1024 = &l_835;
            char ***l_1023 = &l_1024;
            struct S2 **l_1029 = (void*)0;
            struct S2 **l_1030 = (void*)0;
            struct S2 **l_1031 = &g_295;
            (*g_797) = (safe_lshift_func_int8_t_s_u((safe_lshift_func_int16_t_s_u((-1L), 10)), func_37(l_999, l_1000, &g_36)));
            if ((safe_lshift_func_uint8_t_u_s(0x38L, ((g_73 = ((*l_835) = g_296.f6.f7)) == (func_37(func_47((safe_rshift_func_uint16_t_u_s(0x9B52L, (0UL & (safe_add_func_int32_t_s_s((p_9.f6.f6 < (((*l_1009) ^= (safe_add_func_uint16_t_u_u(((((*g_481) = (l_838.f5 ^ (!(p_11 & ((*l_978) = ((*g_797) > p_9.f6.f0)))))) < 0x1743L) <= 0x7B4181C5L), g_736))) || l_999.f2)), (*g_82)))))), (*g_797), (*l_933)), &g_748, l_835) | 0xF237L)))))
            {
                int l_1012 = (-8L);
                (*l_963) = (safe_add_func_int32_t_s_s(((l_999.f6 == l_1012) != l_999.f0), (*g_797)));
                return (*g_324);
            }
            else
            {
                int *l_1017 = &l_867;
                (*l_913) |= (*g_797);
                for (l_865 = 14; (l_865 > 27); l_865 = safe_add_func_uint32_t_u_u(l_865, 4))
                {
                    unsigned l_1015 = 4294967295UL;
                    if (l_1015)
                        break;
                }
                l_1017 = l_1016;

                ;
                (*l_1016) = (((*l_1009) = (safe_add_func_int32_t_s_s((safe_add_func_uint32_t_u_u((*l_1016), p_9.f1)), ((*l_1017) & (*g_797))))) <= 1L);
            }
            if ((&l_835 != ((*l_1023) = &l_825)))
            {
                (*l_885) ^= ((safe_add_func_int32_t_s_s((safe_rshift_func_uint8_t_u_s((*l_1016), 4)), (*g_827))) ^ ((((*l_966) ^= p_9.f3) < 0xE3B71D9BL) && g_984));
                return (**g_323);
            }
            else
            {
                (*l_879) = (0L > ((*l_1016) <= 0x19L));
            }

            ;
            (*l_944) = (((*l_1031) = &g_296) == &p_9);

            ;
        }
        else
        {
            unsigned l_1032 = 3UL;
            int **l_1035 = &l_883;
            (*g_797) &= l_1032;
            (*l_956) = ((*g_797) = ((((void*)0 == l_1033) && l_1032) & 0x56F9L));
            (*l_1035) = &l_867;

            ;
        }

        ;
    }
    else
    {
        int *l_1036 = &l_955;
        int *l_1037 = &g_363;
        int *l_1038 = &g_736;
        int *l_1039 = &l_902;
        int *l_1040 = (void*)0;
        int l_1041 = 0x7E2B3434L;
        int *l_1042 = (void*)0;
        int *l_1043 = &l_889;
        int *l_1044 = &g_928;
        int *l_1045 = (void*)0;
        int *l_1046 = &l_1041;
        int *l_1047 = (void*)0;
        int *l_1048 = &l_976;
        int *l_1049 = &g_438;
        int *l_1050 = &l_914;
        int *l_1051 = &l_889;
        int l_1052 = 0L;
        int *l_1053 = (void*)0;
        int *l_1054 = (void*)0;
        int *l_1055 = &g_86;
        int *l_1056 = &l_955;
        int *l_1057 = &g_86;
        int *l_1058 = &g_438;
        int *l_1059 = &l_938;
        int *l_1060 = &l_1041;
        int l_1061 = (-10L);
        int *l_1062 = &g_67;
        int *l_1063 = &l_826;
        int *l_1066 = &g_438;
        int *l_1068 = &l_826;
        int *l_1070 = &l_826;
        int *l_1071 = &g_363;
        int *l_1072 = &g_942;
        int *l_1073 = (void*)0;
        int *l_1074 = &g_67;
        int *l_1075 = &l_889;
        int *l_1076 = &g_942;
        int *l_1077 = &g_86;
        int *l_1078 = &l_1065;
        int *l_1079 = &l_1067;
        int *l_1080 = (void*)0;
        int *l_1081 = &g_363;
        int *l_1082 = &l_1061;
        int *l_1083 = &l_1041;
        int l_1084 = 1L;
        int *l_1085 = (void*)0;
        int *l_1086 = &l_1041;
        int *l_1087 = &l_1052;
        int *l_1088 = &l_1052;
        int *l_1089 = &l_889;
        int *l_1090 = &l_902;
        int *l_1091 = &l_1069;
        int *l_1092 = &g_438;
        int *l_1093 = &l_889;
        int *l_1094 = (void*)0;
        int *l_1095 = &l_1041;
        int l_1096 = 9L;
        int *l_1097 = (void*)0;
        int *l_1098 = &g_67;
        int *l_1099 = &g_67;
        int *l_1100 = &l_826;
        int *l_1101 = &l_938;
        int *l_1102 = (void*)0;
        short l_1103 = 0x261CL;
        int *l_1104 = &g_928;
        int *l_1105 = (void*)0;
        int *l_1106 = &g_363;
        int *l_1107 = &l_902;
        int *l_1109 = &g_67;
        int *l_1110 = &l_1108;
        int *l_1111 = &l_1064;
        int *l_1112 = (void*)0;
        int *l_1113 = &l_1069;
        int *l_1114 = &l_889;
        int *l_1115 = &l_1096;
        int *l_1116 = &l_1067;
        int *l_1117 = (void*)0;
        int *l_1118 = &g_942;
        int *l_1119 = &g_928;
        int *l_1120 = (void*)0;
        int *l_1121 = &g_86;
        int *l_1122 = &g_363;
        int *l_1123 = (void*)0;
        int l_1124 = 1L;
        int *l_1125 = (void*)0;
        int *l_1126 = &l_938;
        int *l_1127 = (void*)0;
        int *l_1129 = &l_1052;
        int *l_1130 = (void*)0;
        int *l_1131 = &l_1124;
        int *l_1132 = &l_976;
        int l_1133 = 0xFA7BBCC7L;
        int *l_1134 = (void*)0;
        int *l_1135 = &l_938;
        int *l_1136 = &l_976;
        int *l_1137 = &l_955;
        int *l_1138 = &l_1108;
        int *l_1139 = &l_1064;
        int *l_1140 = (void*)0;
        int *l_1141 = &l_1067;
        int l_1142 = 1L;
        int *l_1143 = &l_1069;
        int *l_1144 = &l_976;
        int *l_1145 = (void*)0;
        int *l_1146 = &l_902;
        int *l_1147 = (void*)0;
        struct S1 l_1152 = {4294967293UL,0x214EE00BL,1L,0x24FFL,2L};
        int **l_1153 = &l_1129;
        ++g_1149;
        (*g_324) = l_1152;
        (*l_1153) = &l_1142;

        ;
    }
    return l_1154;
}







static struct S2 func_14(struct S1 p_15)
{
    unsigned short l_19 = 0xD5D5L;
    unsigned *l_25 = &g_16.f0;
    short *l_816 = &g_689;
    char *l_817 = (void*)0;
    char *l_818 = (void*)0;
    char *l_819 = &g_737;
    struct S2 l_821 = {-2L,0x4EL,65527UL,0x3FBFL,8UL,65535UL,{0UL,0x6E8EL,0x4EF5AFA5L,1L,0UL,0xD9B98D9EL,1L,0L}};
    if (((safe_sub_func_int32_t_s_s((246UL && l_19), func_20(g_16.f3, (((*l_25) = (safe_rshift_func_int16_t_s_s(p_15.f4, 6))) || ((*l_25) |= (g_16.f1 > 0x6CL)))))) < (safe_add_func_int8_t_s_s(0x23L, ((*l_819) = (((*l_816) &= (0xC7D3L ^ l_19)) & g_723))))))
    {
        struct S2 l_820 = {-2L,0x21L,65532UL,-5L,4294967295UL,6UL,{4294967293UL,7L,3L,0x5AL,3UL,2L,0xEF60L,0xE6D7L}};
        return l_820;
    }
    else
    {
        (*g_797) = p_15.f1;
        return l_821;
    }
}







static unsigned func_20(unsigned p_21, int p_22)
{
    unsigned *l_33 = &g_16.f0;
    int l_34 = 2L;
    char *l_35 = &g_36;
    unsigned char l_51 = 0UL;
    struct S0 l_55 = {0x66F1EAACL,1L,0x4A01C31EL,0x24L,0UL,0x6CD8D4AEL,0L,0x1240L};
    struct S2 *l_773 = (void*)0;
    struct S2 *l_774 = &g_296;
    struct S1 *l_791 = &g_16;
    (*l_774) = func_26((l_55 = func_29(p_21, l_33, ((l_34 == (((*l_35) = l_34) || func_37(func_41(g_16.f1, l_33, func_47(l_34, g_16.f2, l_51), p_22, l_55), l_33, l_35))) || 0xE0L))), g_82);

    ;
    ;
    ;
    for (g_184 = 1; (g_184 <= 7); g_184++)
    {
        int *l_777 = &g_438;
        struct S1 l_795 = {1UL,8UL,0L,0x2A23L,0L};
        struct S0 l_812 = {0x6D475D08L,0x9677L,0x45E554DFL,0x28L,0UL,0xF59F8796L,0x761AL,0x8225L};
        struct S0 *l_813 = &l_55;
        if ((g_86 = ((*l_777) |= 1L)))
        {
            char *l_778 = &g_36;
            unsigned char *l_804 = &g_296.f1;
            short *l_811 = &l_795.f2;
            (*g_324) = (**g_323);
            if (func_37(g_296.f6, &g_91, l_778))
            {
                struct S0 **l_779 = &g_307;
                int l_784 = 0x44A19EF5L;
                int *l_800 = &l_784;
                (*l_777) = 1L;
                if (((&g_307 == l_779) ^ (safe_sub_func_int32_t_s_s((safe_add_func_int8_t_s_s(l_784, g_723)), 0xF045B80AL))))
                {
                    for (g_296.f6.f4 = (-2); (g_296.f6.f4 >= 23); g_296.f6.f4 = safe_add_func_uint8_t_u_u(g_296.f6.f4, 9))
                    {
                        int **l_787 = (void*)0;
                        int **l_788 = &l_777;
                        int *l_790 = &g_86;
                        int **l_789 = &l_790;
                        (*l_789) = ((*l_788) = &p_22);

                        ;
                        ;
                        (*g_323) = l_791;
                        return p_22;
                    }
                    if (g_792)
                        continue;
                    for (g_674 = 0; (g_674 >= (-14)); g_674--)
                    {
                        (*g_324) = l_795;
                    }
                }
                else
                {
                    int **l_796 = (void*)0;
                    g_797 = &g_67;
                    for (g_267 = 0; (g_267 <= 59); g_267 = safe_add_func_int8_t_s_s(g_267, 3))
                    {
                        l_800 = &g_67;

                        ;
                        (*g_797) &= p_21;
                        return (*g_82);
                    }
                }
            }
            else
            {
                unsigned l_801 = 0xFCBBD7D8L;
                (*l_777) |= (l_801 | 0UL);
            }
            (*l_777) = (safe_add_func_int16_t_s_s((((*l_804) = 0x24L) >= (safe_add_func_int16_t_s_s((((p_21 ^ func_37(func_47((g_73 = l_55.f6), (((safe_rshift_func_uint16_t_u_u((safe_mod_func_int32_t_s_s((((*g_797) == ((*l_777) &= (-1L))) ^ g_296.f6.f1), (g_86 = (((*l_811) = (g_16.f4 ^= (((4294967294UL < p_21) >= l_55.f4) >= l_51))) | p_21)))), p_21)) ^ (*g_481)) < 0x0F7A78EEL), p_22), &g_91, &g_737)) <= p_22) >= (-1L)), 0x0207L))), (*g_481)));
        }
        else
        {
            (*l_774) = g_296;
            (*l_777) ^= (*g_797);
            (*g_797) = p_22;
        }
        (*l_813) = l_812;
    }
    (*g_797) = ((void*)0 != &g_296);
    return l_55.f1;
}







static struct S2 func_26(struct S0 p_27, unsigned * p_28)
{
    int l_575 = 3L;
    int *l_576 = (void*)0;
    int l_577 = 0xDDEA6053L;
    int *l_578 = &g_438;
    struct S0 l_583 = {0x7A8616AAL,0xC15EL,7L,-1L,0xFE8BL,0x15A9018EL,0x9AA0L,0xC460L};
    unsigned char l_584 = 0xD1L;
    int *l_585 = &l_577;
    int *l_586 = (void*)0;
    int *l_587 = &g_363;
    int *l_588 = &g_438;
    int *l_589 = &g_67;
    int *l_590 = &g_86;
    int l_591 = 4L;
    int *l_592 = &g_438;
    int *l_593 = &g_363;
    int *l_594 = (void*)0;
    int *l_595 = &g_86;
    int *l_596 = &g_438;
    int l_597 = 8L;
    int *l_598 = &g_438;
    int l_744 = (-8L);
    char *l_771 = &g_36;
    struct S2 l_772 = {0L,0UL,0UL,-1L,4294967286UL,65530UL,{0xE7A2E879L,0x98F9L,-8L,0x8EL,0x758EL,1L,0x8E9EL,0xC3A1L}};
    (*l_578) &= (l_577 ^= l_575);
    (*l_585) &= (safe_rshift_func_int8_t_s_s(func_37(func_47(p_27.f5, ((safe_sub_func_int32_t_s_s(func_37(func_41(p_27.f5, &g_538, (g_296.f6 = p_27), ((*l_578) &= p_27.f3), l_583), g_82, &g_36), l_584)) == 0UL), g_53), p_28, &g_36), p_27.f3));
    g_599--;
    for (g_296.f6.f2 = (-28); (g_296.f6.f2 < 26); g_296.f6.f2 = safe_add_func_uint32_t_u_u(g_296.f6.f2, 5))
    {
        unsigned l_629 = 4294967294UL;
        unsigned *l_635 = &g_16.f0;
        int *l_668 = &l_591;
        int l_673 = 0xB43F70AAL;
        struct S1 *l_762 = &g_16;
        struct S0 l_768 = {0UL,0x9346L,0x06DBF1C6L,0xD8L,0xEB84L,0xA9BF5B1FL,0x997EL,1L};
        for (g_296.f2 = 0; (g_296.f2 < 56); g_296.f2 = safe_add_func_uint8_t_u_u(g_296.f2, 4))
        {
            unsigned char l_608 = 0xF3L;
            int l_619 = (-7L);
            char *l_633 = &g_296.f6.f3;
            if (((*l_592) = ((*l_587) |= (((void*)0 == &g_184) >= g_296.f0))))
            {
                int **l_606 = (void*)0;
                int *l_607 = &l_577;
                l_607 = p_28;

                ;
                (*l_593) = 0x909B225CL;
                g_67 &= p_27.f5;
            }
            else
            {
                struct S0 l_611 = {0x3B27CE14L,3L,-2L,1L,0xB6A7L,-7L,1L,0x4DE4L};
                char *l_612 = &l_611.f3;
                int l_725 = 0xC56AF300L;
                int l_745 = 0L;
                int l_746 = (-1L);
                int l_760 = 1L;
                struct S1 **l_763 = (void*)0;
                struct S1 *l_764 = &g_16;
                if (p_27.f0)
                {
                    unsigned char *l_613 = &l_608;
                    int l_614 = 0xC9F4D5DAL;
                    short *l_617 = (void*)0;
                    short *l_618 = &g_16.f4;
                    if (l_608)
                        break;
                    if ((safe_sub_func_uint32_t_u_u((((*g_82) != func_37(l_611, &g_91, l_612)) < (((l_613 != (void*)0) > l_614) == ((*l_618) &= (safe_add_func_int16_t_s_s(((void*)0 != g_307), (*g_481)))))), 0UL)))
                    {
                        int *l_620 = &l_577;
                        int *l_621 = &l_619;
                        int *l_622 = &l_597;
                        int l_623 = 0x744EF900L;
                        int *l_624 = &l_623;
                        int *l_625 = &g_86;
                        int *l_626 = &l_619;
                        int *l_627 = &g_363;
                        int *l_628 = (void*)0;
                        struct S0 l_632 = {0x428D75F4L,0xC46EL,1L,1L,0x4EB8L,0xB96E72EEL,0x0030L,0L};
                        char **l_634 = &l_612;
                        unsigned short *l_642 = &g_267;
                        (*g_323) = (*g_323);
                        --l_629;
                        (*l_596) ^= (func_37(func_41(func_37(l_632, &g_538, ((*l_634) = l_633)), l_635, l_583, ((*l_621) &= (safe_rshift_func_uint16_t_u_u(((*l_642) &= ((*g_481) = (safe_add_func_uint32_t_u_u((*g_82), (safe_sub_func_int16_t_s_s((&g_324 != (void*)0), 0x6C36L)))))), p_27.f2))), p_27), &g_538, &g_36) <= 5UL);

                        ;
                    }
                    else
                    {
                        l_619 &= l_614;
                        (*l_587) ^= l_614;
                    }

                    ;
                }
                else
                {
                    unsigned l_658 = 1UL;
                    for (p_27.f7 = 0; (p_27.f7 <= (-9)); p_27.f7 = safe_sub_func_uint16_t_u_u(p_27.f7, 2))
                    {
                        unsigned l_657 = 4294967290UL;
                        unsigned char *l_663 = &l_608;
                        (*l_587) = (safe_add_func_uint32_t_u_u((g_16.f4 < (safe_sub_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s((safe_add_func_int32_t_s_s(((l_619 = (safe_sub_func_uint32_t_u_u(1UL, l_629))) != func_37(l_611, &g_538, &g_36)), 3UL)), 4)), (p_28 == p_28))), l_608))), (*g_82)));
                        l_658 = (l_657 || (*p_28));
                        (*l_587) = (safe_rshift_func_uint8_t_u_s((safe_add_func_int8_t_s_s((~p_27.f4), ((*l_663)--))), ((*g_82) ^ func_37(p_27, &g_538, &g_36))));
                    }
                }

                ;
                for (g_363 = (-15); (g_363 > (-18)); g_363 = safe_sub_func_uint32_t_u_u(g_363, 8))
                {
                    int **l_669 = &l_595;
                    struct S0 *l_670 = &l_583;
                    unsigned char *l_671 = &g_184;
                    int l_686 = 0x4835735EL;
                    struct S0 *l_761 = &l_583;
                    (*l_669) = (l_668 = l_668);

                    ;
                    l_670 = &p_27;

                    ;
                    if (p_27.f5)
                        continue;
                    if ((((*l_671) = 254UL) || p_27.f6))
                    {
                        int l_672 = 0xDC13E8D4L;
                        int *l_675 = &l_619;
                        int *l_676 = &l_591;
                        int *l_677 = &g_67;
                        int *l_678 = &g_438;
                        int *l_679 = &g_67;
                        int *l_680 = &l_673;
                        int *l_681 = (void*)0;
                        int *l_682 = &l_591;
                        int *l_683 = &l_591;
                        int *l_684 = &g_67;
                        int *l_685 = (void*)0;
                        int *l_687 = &l_686;
                        int *l_688 = &l_672;
                        int *l_690 = &l_591;
                        int *l_691 = &l_591;
                        int *l_692 = &l_597;
                        int *l_694 = (void*)0;
                        int *l_695 = &l_672;
                        int *l_696 = &l_591;
                        int *l_697 = &g_67;
                        int *l_698 = &l_597;
                        int *l_699 = &g_86;
                        int *l_700 = &g_438;
                        int *l_701 = &l_672;
                        int *l_702 = (void*)0;
                        int *l_703 = &l_577;
                        int *l_704 = &l_577;
                        int *l_705 = (void*)0;
                        int *l_706 = &l_577;
                        int *l_707 = &l_686;
                        int *l_708 = &l_597;
                        int *l_709 = &g_438;
                        int *l_710 = &l_672;
                        int l_711 = 0x628200B9L;
                        int *l_712 = (void*)0;
                        int *l_713 = &l_686;
                        int *l_714 = &g_86;
                        int *l_715 = &l_597;
                        int *l_716 = &l_673;
                        int *l_717 = &l_711;
                        int *l_718 = &l_711;
                        int *l_719 = &l_597;
                        int *l_720 = &l_577;
                        int *l_721 = &g_67;
                        int *l_722 = &g_86;
                        int *l_724 = &g_67;
                        int *l_726 = (void*)0;
                        int *l_727 = (void*)0;
                        int *l_728 = &g_86;
                        int *l_729 = &g_438;
                        int *l_730 = &l_619;
                        int *l_731 = &l_577;
                        int *l_732 = &l_619;
                        int *l_733 = &l_673;
                        int l_734 = (-1L);
                        int *l_735 = &g_67;
                        int *l_738 = &g_67;
                        int *l_739 = &l_725;
                        int *l_740 = &l_711;
                        int *l_741 = &l_597;
                        int *l_742 = &l_619;
                        int *l_743 = (void*)0;
                        int *l_747 = &l_711;
                        (*l_595) ^= p_27.f0;
                        --g_748;
                        l_619 &= (~(safe_lshift_func_uint16_t_u_u((*g_481), 8)));
                    }
                    else
                    {
                        int **l_759 = &l_668;
                        if (g_296.f6.f5)
                            break;
                        l_725 |= (0L ^ (((!3UL) >= (safe_mod_func_int8_t_s_s(g_16.f0, (safe_sub_func_uint16_t_u_u((*g_481), ((*l_668) & ((*l_671) = p_27.f5))))))) && (safe_lshift_func_uint8_t_u_u(((void*)0 == l_759), l_760))));
                        (*l_592) = ((void*)0 == l_761);
                        return g_296;
                    }
                }

                ;
                l_764 = ((*g_323) = l_762);
                for (g_438 = 0; (g_438 > 26); ++g_438)
                {
                    int l_767 = 0L;
                    unsigned *l_769 = &g_91;
                    unsigned **l_770 = &g_82;
                    if (p_27.f5)
                        break;
                    if (l_767)
                        continue;
                    l_746 ^= func_37(l_768, ((*l_770) = l_769), l_771);

                    ;
                }

                ;
            }

            ;
            ;
            return l_772;
        }
        if ((*l_668))
            continue;
    }
    return l_772;
}







static struct S0 func_29(unsigned p_30, unsigned * p_31, int p_32)
{
    short l_472 = (-1L);
    unsigned short **l_485 = &g_481;
    int l_495 = 0x3D05E369L;
    int l_531 = 0xDADD87B5L;
    struct S2 l_548 = {0x87L,253UL,0xD17CL,-6L,4294967295UL,0x8B62L,{0xE1638DAEL,-1L,0L,1L,0xEC81L,0x7D088855L,4L,0xD061L}};
    unsigned *l_562 = &g_91;
    struct S1 l_573 = {0x0C09D12EL,3UL,0xFAB7L,7UL,-1L};
    int *l_574 = &g_363;
    if (p_30)
    {
        unsigned char l_476 = 254UL;
        unsigned short *l_480 = &g_296.f6.f4;
        int l_501 = 0xC4BA0DC9L;
        int l_511 = 0x0178CA02L;
        int l_526 = 0xFB3B2536L;
        int l_537 = 1L;
        if (l_472)
        {
            unsigned short **l_479 = (void*)0;
            int *l_483 = &g_86;
            char *l_484 = &g_36;
            unsigned short ***l_486 = &l_479;
            g_67 &= (safe_unary_minus_func_uint16_t_u((!(+(p_30 && (safe_sub_func_uint16_t_u_u(((((-1L) > l_476) == (l_476 || (safe_add_func_uint32_t_u_u(((l_480 = &g_258) != (g_481 = &g_382)), (safe_unary_minus_func_uint8_t_u(0x13L)))))) && 0x76456B29L), 0x14F7L)))))));

            ;
            (*l_483) = 0x2272EF4EL;
            (*l_483) = func_37(func_47(((*l_484) = 0xD9L), g_296.f6.f7, (g_296.f1 <= ((*g_481) ^= func_37((*g_307), &g_91, &g_73)))), &g_91, l_484);
            (*l_486) = l_485;

            ;
        }
        else
        {
            int *l_489 = &g_67;
            int *l_490 = &g_438;
            int *l_491 = &g_67;
            int *l_492 = &g_363;
            int *l_493 = &g_86;
            int *l_494 = &g_438;
            int *l_496 = &g_67;
            int *l_497 = &g_438;
            int *l_498 = (void*)0;
            int *l_499 = &g_67;
            int *l_500 = &l_495;
            int *l_502 = &g_438;
            int *l_503 = &g_67;
            int *l_504 = &l_501;
            int *l_505 = &g_363;
            int *l_506 = &g_438;
            int *l_507 = &l_501;
            int *l_508 = &l_495;
            int *l_509 = &g_438;
            int *l_510 = &g_67;
            int *l_512 = &g_438;
            int *l_513 = &g_86;
            int l_514 = 0x792E09EFL;
            int *l_515 = &g_438;
            int *l_516 = &l_501;
            int *l_517 = &g_86;
            int *l_518 = &l_511;
            int *l_519 = &l_511;
            int *l_520 = (void*)0;
            int *l_521 = &l_501;
            int *l_522 = &l_511;
            int *l_523 = &g_438;
            int *l_524 = &l_511;
            int *l_525 = &g_86;
            int *l_527 = &g_67;
            int *l_528 = &l_511;
            int *l_529 = &g_438;
            int *l_530 = &g_86;
            int *l_532 = (void*)0;
            int *l_533 = &g_86;
            int *l_535 = &l_501;
            int *l_536 = &g_438;
            for (g_296.f6.f0 = (-10); (g_296.f6.f0 == 1); g_296.f6.f0 = safe_add_func_int32_t_s_s(g_296.f6.f0, 7))
            {
                if (l_472)
                    break;
            }
            g_538--;
        }

        ;
    }
    else
    {
        struct S0 *l_544 = &g_296.f6;
        int l_545 = 3L;
        unsigned l_563 = 0x6C0247A3L;
        for (g_534 = (-15); (g_534 >= 7); g_534 = safe_add_func_int32_t_s_s(g_534, 1))
        {
            int *l_543 = &l_495;
            (*l_543) ^= g_16.f1;
            l_545 ^= ((g_307 = (void*)0) != l_544);

            ;
        }

        ;
        if (p_32)
        {
            int *l_546 = (void*)0;
            int *l_547 = &g_86;
            struct S2 *l_549 = (void*)0;
            struct S2 *l_550 = &l_548;
            struct S0 l_561 = {0x760B1892L,-9L,-1L,0xAFL,0x41B1L,-1L,0x95E4L,-1L};
            int *l_564 = &l_495;
            (*l_547) ^= l_545;
            (*l_550) = l_548;
            (*l_564) ^= ((((safe_add_func_int8_t_s_s((0x6597L ^ (safe_add_func_uint32_t_u_u((((safe_rshift_func_int16_t_s_u(0x15D2L, (*g_481))) || ((safe_lshift_func_int8_t_s_u(g_97, (func_37(l_561, l_562, &g_36) | (1UL ^ (*g_481))))) > p_32)) && 0x100D9878L), p_32))), l_563)) | p_32) || (*g_82)) | l_548.f6.f0);
        }
        else
        {
            struct S0 l_567 = {0x0B79CE89L,0xF902L,0x6CD2CA98L,0xF8L,0xD5CDL,0x068BC98FL,0xD962L,0x8DF7L};
            unsigned *l_568 = &g_16.f0;
            int *l_569 = &l_495;
            short *l_572 = &l_548.f6.f1;
            (*l_569) = (safe_mod_func_uint32_t_u_u(func_37(l_567, l_568, &g_73), l_548.f6.f2));
            g_363 &= (safe_add_func_int16_t_s_s(((*l_572) = (*l_569)), p_32));
        }
    }

    ;
    (**g_323) = l_573;
    (*l_574) |= g_16.f4;
    return l_548.f6;
}







static char func_37(struct S0 p_38, unsigned * p_39, char * p_40)
{
    short l_387 = 5L;
    int *l_388 = &g_86;
    int *l_389 = &g_363;
    int *l_390 = &g_67;
    int *l_391 = &g_86;
    int *l_392 = &g_86;
    int *l_393 = &g_86;
    int *l_394 = &g_86;
    int *l_395 = &g_363;
    int *l_396 = (void*)0;
    int *l_397 = &g_67;
    int *l_398 = (void*)0;
    int *l_399 = &g_67;
    int *l_400 = &g_86;
    int *l_401 = &g_363;
    int *l_402 = &g_67;
    int *l_403 = &g_363;
    int *l_404 = &g_363;
    int *l_405 = &g_363;
    int l_406 = 0x316402E3L;
    int *l_407 = &g_67;
    int *l_408 = (void*)0;
    int *l_409 = &l_406;
    int *l_410 = &g_86;
    int *l_411 = &g_67;
    int l_412 = 0xE071E889L;
    int *l_413 = &g_363;
    int *l_414 = &g_86;
    int *l_415 = &g_67;
    int *l_416 = &g_363;
    int *l_417 = &l_406;
    int l_418 = 0x3D91A404L;
    int *l_419 = &l_418;
    int *l_420 = &g_67;
    int *l_421 = (void*)0;
    int *l_422 = &g_86;
    int *l_423 = &g_67;
    int *l_424 = &g_67;
    int *l_425 = &g_363;
    int *l_426 = &g_67;
    int *l_427 = (void*)0;
    int *l_428 = &g_67;
    int *l_429 = &l_418;
    int *l_430 = &g_67;
    int *l_431 = &l_418;
    int *l_432 = &l_418;
    int *l_433 = &g_67;
    int *l_434 = &g_67;
    int *l_435 = &g_67;
    int *l_436 = &l_406;
    int *l_437 = &l_418;
    int *l_439 = &g_363;
    int l_440 = (-1L);
    int *l_441 = (void*)0;
    int *l_442 = &g_67;
    int *l_443 = (void*)0;
    int *l_444 = &l_440;
    int *l_445 = &l_412;
    int *l_446 = &l_418;
    int *l_447 = &g_363;
    int *l_448 = &g_86;
    int *l_449 = &l_418;
    int *l_450 = (void*)0;
    int *l_451 = &g_86;
    int *l_452 = &l_406;
    int *l_453 = &l_440;
    int *l_454 = &l_406;
    int l_455 = 0x89E9D286L;
    int *l_456 = &g_438;
    int l_457 = (-7L);
    int *l_458 = (void*)0;
    int *l_459 = &g_363;
    int *l_460 = &l_440;
    int *l_461 = &g_363;
    unsigned l_462 = 0xE1574A67L;
    unsigned **l_467 = &g_82;
    unsigned short l_468 = 3UL;
    (*l_388) = (+l_387);
    l_462--;
    if ((safe_add_func_uint32_t_u_u(0xEA8D5DC9L, (&g_82 == l_467))))
    {
        g_295 = (void*)0;

        ;
        l_468++;
    }
    else
    {
        int **l_471 = &l_391;
        (*l_471) = p_39;


    }


    return g_296.f6.f1;
}







static struct S0 func_41(unsigned short p_42, unsigned * p_43, struct S0 p_44, int p_45, struct S0 p_46)
{
    int *l_66 = &g_67;
    unsigned *l_68 = (void*)0;
    int l_69 = 0xF479F84CL;
    unsigned l_70 = 4294967295UL;
    char *l_71 = (void*)0;
    char *l_72 = &g_73;
    int *l_74 = &g_67;
    int l_112 = (-1L);
    int l_129 = 0L;
    short l_266 = 0x6B89L;
    char l_356 = 0x82L;
    struct S2 *l_385 = &g_296;
    struct S0 l_386 = {0x03D3E313L,-4L,0L,0xDAL,0x8017L,0x1C8523BBL,-1L,-1L};
    (*l_74) = (safe_rshift_func_uint16_t_u_s((safe_rshift_func_uint16_t_u_u((g_36 != ((((safe_sub_func_int8_t_s_s(((l_66 = l_66) == &g_67), p_44.f2)) | (p_43 == l_68)) >= ((*p_43) |= l_69)) <= (l_70 ^ ((*l_72) = (l_70 != g_16.f2))))), p_46.f3)), 3));
    for (g_16.f0 = 0; (g_16.f0 < 10); g_16.f0 = safe_add_func_uint8_t_u_u(g_16.f0, 6))
    {
        char l_77 = 0x4FL;
        unsigned short *l_83 = &g_16.f3;
        if (l_77)
            break;
        (*l_74) |= (safe_rshift_func_uint16_t_u_u((((safe_sub_func_uint16_t_u_u((g_82 == (void*)0), ((*l_83) = 65529UL))) <= (((p_44.f6 && ((void*)0 != l_72)) >= 0UL) | p_44.f0)) <= g_16.f0), 1));
        for (p_44.f2 = 0; (p_44.f2 < (-26)); p_44.f2 = safe_sub_func_int8_t_s_s(p_44.f2, 2))
        {
            int l_87 = 0x1E9F44AAL;
            int *l_88 = (void*)0;
            int *l_89 = (void*)0;
            int *l_90 = &l_69;
            int *l_94 = &l_69;
            int *l_95 = &g_67;
            int *l_96 = &g_86;
            int *l_98 = &g_86;
            int *l_99 = (void*)0;
            int *l_100 = &g_67;
            int *l_101 = &g_67;
            int *l_102 = (void*)0;
            int *l_103 = &l_87;
            int *l_104 = &g_67;
            int *l_105 = &l_87;
            int *l_106 = &l_69;
            int *l_107 = (void*)0;
            int l_108 = 0xAB74881AL;
            int *l_109 = &g_67;
            int *l_110 = &l_108;
            int l_111 = 0xE3A4418BL;
            int *l_113 = &g_86;
            int l_114 = (-1L);
            int *l_115 = &l_87;
            int *l_116 = &l_108;
            int *l_117 = &l_87;
            int l_118 = 9L;
            int *l_119 = &l_112;
            int *l_120 = &l_69;
            int *l_121 = &g_67;
            int *l_122 = &l_69;
            int *l_123 = &g_86;
            int *l_124 = &l_69;
            int *l_125 = &g_67;
            int *l_126 = &l_114;
            int *l_127 = &g_86;
            int *l_128 = (void*)0;
            int *l_130 = &l_114;
            int *l_131 = &l_112;
            int *l_132 = (void*)0;
            g_91++;
            ++g_133;
        }
    }
    if (p_44.f2)
    {
        int *l_136 = &g_86;
        int *l_137 = &l_69;
        int *l_138 = &g_67;
        int *l_139 = (void*)0;
        int *l_140 = (void*)0;
        int *l_141 = (void*)0;
        int l_142 = 1L;
        int *l_143 = &g_67;
        int *l_144 = &g_86;
        int *l_145 = &l_129;
        int *l_146 = &l_129;
        int *l_147 = (void*)0;
        int *l_148 = &l_112;
        int *l_149 = &g_86;
        int *l_150 = &g_67;
        int *l_151 = &l_142;
        int *l_152 = &l_142;
        int *l_153 = &g_86;
        int *l_154 = &l_69;
        int *l_155 = &l_129;
        int *l_156 = &g_86;
        int *l_157 = &g_86;
        int *l_158 = &l_112;
        int l_159 = 0xD9FCA902L;
        int *l_160 = &g_86;
        int *l_161 = &l_142;
        int *l_162 = &g_86;
        int *l_163 = &l_142;
        int *l_164 = &l_112;
        int *l_165 = &l_112;
        int *l_166 = &l_142;
        int *l_167 = &l_112;
        int *l_168 = &l_129;
        int *l_169 = &g_86;
        int *l_170 = &g_86;
        int *l_171 = &g_86;
        int *l_172 = &l_159;
        int *l_173 = &l_159;
        int *l_174 = &l_142;
        int *l_175 = &l_112;
        int *l_176 = &l_129;
        int *l_177 = &g_67;
        int *l_178 = (void*)0;
        int l_179 = 0x0C1F7DF8L;
        int *l_180 = &l_179;
        int *l_181 = (void*)0;
        int *l_182 = &l_159;
        int *l_183 = &l_112;
        unsigned short l_197 = 65530UL;
        struct S2 *l_297 = &g_296;
        g_184++;
        if ((*l_66))
        {
            short *l_189 = &g_16.f4;
            int l_194 = 0x92EEADF9L;
            int l_212 = 9L;
            int l_214 = 0x13724E75L;
            int l_235 = (-1L);
            char *l_280 = &g_36;
            (*l_151) ^= ((safe_sub_func_int16_t_s_s(((*l_189) = (*l_148)), (*l_182))) | ((safe_sub_func_uint32_t_u_u((safe_mod_func_uint16_t_u_u(g_91, g_86)), ((l_194 || 6UL) != ((safe_lshift_func_int8_t_s_s((0x60L > g_16.f3), 6)) || p_44.f3)))) | (*g_82)));
            l_197 = g_91;
            if (((void*)0 == l_72))
            {
                int l_213 = 0x212F535EL;
                int l_242 = 0x2258E794L;
                struct S0 l_281 = {0x61ECBF7EL,0x150FL,0x4D6F5489L,0x88L,1UL,-2L,5L,-3L};
                for (p_44.f4 = 12; (p_44.f4 <= 23); ++p_44.f4)
                {
                    unsigned short *l_203 = &l_197;
                    unsigned short **l_202 = &l_203;
                    unsigned short *l_205 = &g_133;
                    unsigned short **l_204 = &l_205;
                    int l_210 = 0x85FA97D6L;
                    int l_247 = 0x74453018L;
                    int l_248 = 0L;
                    struct S1 *l_261 = &g_16;
                    struct S1 **l_262 = &l_261;
                    int l_264 = 0xCE32B38BL;
                    if ((g_86 = (safe_rshift_func_int16_t_s_s((((*l_204) = ((*l_202) = &g_133)) == &p_42), (safe_mod_func_uint8_t_u_u((safe_add_func_uint16_t_u_u((0xC6B045E1L <= l_210), 65535UL)), g_86))))))
                    {
                        int l_211 = 1L;
                        int *l_215 = &g_67;
                        int l_216 = 0x373EA232L;
                        int *l_217 = &l_142;
                        int *l_218 = &l_194;
                        int *l_219 = (void*)0;
                        int *l_220 = (void*)0;
                        int *l_221 = &g_86;
                        int *l_222 = (void*)0;
                        int *l_223 = &l_214;
                        int *l_224 = &l_210;
                        int *l_225 = &l_69;
                        int *l_226 = &l_213;
                        int *l_227 = &l_212;
                        int *l_228 = &l_194;
                        int *l_229 = &l_216;
                        int *l_230 = &l_112;
                        int *l_231 = &l_213;
                        int *l_232 = (void*)0;
                        int *l_233 = &l_159;
                        int *l_234 = &g_67;
                        int **l_239 = &l_150;
                        (*l_162) ^= (&g_133 == &g_133);
                        ++g_236;
                        (*l_137) ^= 2L;
                        (*l_239) = &l_142;

                        ;
                    }
                    else
                    {
                        struct S1 *l_241 = &g_16;
                        struct S1 **l_240 = &l_241;
                        int l_243 = 0x8C3317FEL;
                        int *l_244 = &l_69;
                        int *l_245 = &g_86;
                        int *l_246 = &l_179;
                        int *l_249 = &l_213;
                        int *l_250 = &l_243;
                        int *l_251 = &g_86;
                        int *l_252 = &l_210;
                        int *l_253 = &l_159;
                        int *l_254 = &l_69;
                        int *l_255 = &l_235;
                        int *l_256 = &l_210;
                        int *l_257 = (void*)0;
                        (*l_240) = &g_16;
                        g_258++;
                    }

                    ;
                    (*l_262) = l_261;
                    if (p_44.f5)
                    {
                        struct S1 l_263 = {8UL,0x6FE15A51L,1L,0x1776L,-1L};
                        (*l_261) = l_263;
                        (*l_175) &= g_16.f2;
                    }
                    else
                    {
                        l_266 ^= (p_46.f3 > (l_264 & (safe_unary_minus_func_uint32_t_u(((((*l_262) == &g_16) && (*l_174)) & (*g_82))))));
                        ++g_267;
                    }
                }

                ;
                for (g_97 = 0; (g_97 == (-26)); --g_97)
                {
                    unsigned short *l_277 = &g_258;
                    unsigned short **l_276 = &l_277;
                    g_86 = ((safe_add_func_uint8_t_u_u(g_91, (g_184 < (safe_sub_func_uint8_t_u_u((l_214 == ((*g_82) <= ((void*)0 == l_276))), (((safe_sub_func_uint16_t_u_u(g_91, ((*l_189) = g_16.f4))) ^ (l_280 == (void*)0)) != p_44.f3)))))) <= 0x99L);
                }
                return l_281;
            }
            else
            {
                int *l_282 = &l_214;
                int **l_283 = (void*)0;
                int **l_284 = &l_160;
                (*l_284) = (l_282 = &p_45);

                ;
                ;
                g_86 = g_86;
                (*l_149) ^= g_236;
                for (p_44.f3 = 0; (p_44.f3 <= (-22)); --p_44.f3)
                {
                    struct S0 l_287 = {0UL,0L,-6L,0L,0UL,0x3F6EE530L,-5L,0xFAEFL};
                    struct S0 *l_288 = &l_287;
                    (*l_288) = l_287;
                }
            }

            ;
        }
        else
        {
            unsigned char l_293 = 0x07L;
            if ((*l_136))
            {
                for (g_16.f0 = 29; (g_16.f0 > 48); g_16.f0++)
                {
                    (*l_180) = (safe_lshift_func_int8_t_s_u(g_184, 2));
                    if (g_73)
                        continue;
                }
                l_293 ^= g_16.f3;
                return p_44;
            }
            else
            {
                int **l_294 = &l_158;
                (*l_294) = &l_69;

                ;
            }

            ;
            l_297 = g_295;

            ;
        }

        ;
        ;
        ;
        l_74 = &p_45;

        ;
    }
    else
    {
        struct S0 *l_300 = (void*)0;
        int l_301 = 8L;
        for (p_44.f7 = 0; (p_44.f7 < 7); p_44.f7 = safe_add_func_uint32_t_u_u(p_44.f7, 8))
        {
            struct S0 *l_309 = (void*)0;
            struct S0 **l_308 = &l_309;
            int l_312 = 5L;
            unsigned char *l_315 = &g_184;
            (*l_66) |= ((l_300 == (void*)0) == ((l_301 <= g_302) && ((safe_add_func_int8_t_s_s((9L < (g_307 != ((*l_308) = g_307))), p_44.f1)) == ((*g_82) > (*p_43)))));

            ;
            if ((g_258 != (safe_add_func_uint8_t_u_u(l_312, ((safe_rshift_func_uint8_t_u_s(((*l_315) |= p_46.f4), 2)) && 4L)))))
            {
                return p_46;
            }
            else
            {
                unsigned char l_318 = 0x7EL;
                (*l_66) ^= (safe_rshift_func_int8_t_s_u((p_46.f3 & l_318), p_46.f6));
                return p_46;
            }
        }
        for (l_112 = 0; (l_112 > 29); l_112 = safe_add_func_uint32_t_u_u(l_112, 4))
        {
            int **l_330 = &l_74;
            int *l_331 = &l_129;
            int *l_332 = &l_69;
            int *l_333 = &l_301;
            int *l_334 = &l_129;
            int *l_335 = (void*)0;
            int *l_336 = &g_86;
            int *l_337 = &g_67;
            int *l_338 = (void*)0;
            int *l_339 = &g_86;
            int *l_340 = &l_69;
            int *l_341 = (void*)0;
            int *l_342 = &g_86;
            int *l_343 = &g_67;
            int *l_344 = &g_86;
            int *l_345 = &l_69;
            int *l_346 = &g_67;
            int *l_347 = (void*)0;
            int *l_348 = &g_86;
            int *l_349 = (void*)0;
            int *l_350 = &g_86;
            int *l_351 = &l_129;
            int *l_352 = (void*)0;
            int *l_353 = &g_67;
            int *l_354 = (void*)0;
            int *l_355 = &l_129;
            int *l_357 = &g_67;
            int *l_358 = &l_69;
            int *l_359 = &l_129;
            int *l_360 = &g_67;
            int *l_361 = &l_69;
            int *l_362 = (void*)0;
            int *l_364 = &l_69;
            int *l_365 = &g_363;
            int *l_366 = (void*)0;
            int *l_367 = (void*)0;
            int *l_368 = &l_129;
            int *l_369 = &l_301;
            int l_370 = 0x791ECBDFL;
            int *l_371 = &g_86;
            int *l_372 = &g_67;
            int *l_373 = &g_363;
            int *l_374 = &l_301;
            int *l_375 = &l_301;
            int *l_376 = &l_301;
            int *l_377 = &g_86;
            int *l_378 = &g_86;
            int *l_379 = &l_69;
            int *l_380 = &l_129;
            int *l_381 = &l_69;
            for (g_296.f6.f6 = 23; (g_296.f6.f6 < 16); g_296.f6.f6--)
            {
                struct S1 ***l_325 = &g_323;
                unsigned ***l_326 = (void*)0;
                unsigned **l_328 = &g_82;
                unsigned ***l_327 = &l_328;
                int **l_329 = &l_66;
                (*l_325) = g_323;
                (*l_327) = &p_43;

                ;
                (*l_74) &= (g_296.f6.f1 == (*g_82));
                l_330 = l_329;

                ;
            }

            ;
            g_382--;
        }
    }

    ;
    l_385 = l_385;
    return l_386;
}







static struct S0 func_47(char p_48, int p_49, char p_50)
{
    int *l_52 = (void*)0;
    struct S0 l_54 = {0x358CEDF6L,9L,0x780BBC09L,5L,0xD967L,-1L,0L,0x2FBAL};
    g_53 ^= 0x0D70F0D5L;
    return l_54;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_16.f0, "g_16.f0", print_hash_value);
    transparent_crc(g_16.f1, "g_16.f1", print_hash_value);
    transparent_crc(g_16.f2, "g_16.f2", print_hash_value);
    transparent_crc(g_16.f3, "g_16.f3", print_hash_value);
    transparent_crc(g_16.f4, "g_16.f4", print_hash_value);
    transparent_crc(g_36, "g_36", print_hash_value);
    transparent_crc(g_53, "g_53", print_hash_value);
    transparent_crc(g_67, "g_67", print_hash_value);
    transparent_crc(g_73, "g_73", print_hash_value);
    transparent_crc(g_86, "g_86", print_hash_value);
    transparent_crc(g_91, "g_91", print_hash_value);
    transparent_crc(g_97, "g_97", print_hash_value);
    transparent_crc(g_133, "g_133", print_hash_value);
    transparent_crc(g_184, "g_184", print_hash_value);
    transparent_crc(g_236, "g_236", print_hash_value);
    transparent_crc(g_258, "g_258", print_hash_value);
    transparent_crc(g_267, "g_267", print_hash_value);
    transparent_crc(g_296.f0, "g_296.f0", print_hash_value);
    transparent_crc(g_296.f1, "g_296.f1", print_hash_value);
    transparent_crc(g_296.f2, "g_296.f2", print_hash_value);
    transparent_crc(g_296.f3, "g_296.f3", print_hash_value);
    transparent_crc(g_296.f4, "g_296.f4", print_hash_value);
    transparent_crc(g_296.f5, "g_296.f5", print_hash_value);
    transparent_crc(g_296.f6.f0, "g_296.f6.f0", print_hash_value);
    transparent_crc(g_296.f6.f1, "g_296.f6.f1", print_hash_value);
    transparent_crc(g_296.f6.f2, "g_296.f6.f2", print_hash_value);
    transparent_crc(g_296.f6.f3, "g_296.f6.f3", print_hash_value);
    transparent_crc(g_296.f6.f4, "g_296.f6.f4", print_hash_value);
    transparent_crc(g_296.f6.f5, "g_296.f6.f5", print_hash_value);
    transparent_crc(g_296.f6.f6, "g_296.f6.f6", print_hash_value);
    transparent_crc(g_296.f6.f7, "g_296.f6.f7", print_hash_value);
    transparent_crc(g_302, "g_302", print_hash_value);
    transparent_crc(g_363, "g_363", print_hash_value);
    transparent_crc(g_382, "g_382", print_hash_value);
    transparent_crc(g_438, "g_438", print_hash_value);
    transparent_crc(g_534, "g_534", print_hash_value);
    transparent_crc(g_538, "g_538", print_hash_value);
    transparent_crc(g_599, "g_599", print_hash_value);
    transparent_crc(g_674, "g_674", print_hash_value);
    transparent_crc(g_689, "g_689", print_hash_value);
    transparent_crc(g_693, "g_693", print_hash_value);
    transparent_crc(g_723, "g_723", print_hash_value);
    transparent_crc(g_736, "g_736", print_hash_value);
    transparent_crc(g_737, "g_737", print_hash_value);
    transparent_crc(g_748, "g_748", print_hash_value);
    transparent_crc(g_792, "g_792", print_hash_value);
    transparent_crc(g_823, "g_823", print_hash_value);
    transparent_crc(g_909, "g_909", print_hash_value);
    transparent_crc(g_928, "g_928", print_hash_value);
    transparent_crc(g_942, "g_942", print_hash_value);
    transparent_crc(g_943, "g_943", print_hash_value);
    transparent_crc(g_984, "g_984", print_hash_value);
    transparent_crc(g_1149, "g_1149", print_hash_value);
    transparent_crc(g_1155.f0, "g_1155.f0", print_hash_value);
    transparent_crc(g_1155.f1, "g_1155.f1", print_hash_value);
    transparent_crc(g_1155.f2, "g_1155.f2", print_hash_value);
    transparent_crc(g_1155.f3, "g_1155.f3", print_hash_value);
    transparent_crc(g_1155.f4, "g_1155.f4", print_hash_value);
    transparent_crc(g_1155.f5, "g_1155.f5", print_hash_value);
    transparent_crc(g_1155.f6.f0, "g_1155.f6.f0", print_hash_value);
    transparent_crc(g_1155.f6.f1, "g_1155.f6.f1", print_hash_value);
    transparent_crc(g_1155.f6.f2, "g_1155.f6.f2", print_hash_value);
    transparent_crc(g_1155.f6.f3, "g_1155.f6.f3", print_hash_value);
    transparent_crc(g_1155.f6.f4, "g_1155.f6.f4", print_hash_value);
    transparent_crc(g_1155.f6.f5, "g_1155.f6.f5", print_hash_value);
    transparent_crc(g_1155.f6.f6, "g_1155.f6.f6", print_hash_value);
    transparent_crc(g_1155.f6.f7, "g_1155.f6.f7", print_hash_value);
    transparent_crc(g_1268, "g_1268", print_hash_value);
    transparent_crc(g_1290, "g_1290", print_hash_value);
    transparent_crc(g_1307, "g_1307", print_hash_value);
    transparent_crc(g_1342, "g_1342", print_hash_value);
    transparent_crc(g_1463, "g_1463", print_hash_value);
    transparent_crc(g_1471, "g_1471", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
