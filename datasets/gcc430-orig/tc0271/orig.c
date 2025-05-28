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
static int g_28 = 3L;
static int * volatile g_27 = &g_28;
static unsigned short g_69 = 0xAD33L;
static unsigned short g_71 = 1UL;
static char g_74 = 0x85L;
static unsigned char g_87 = 0xC0L;
static int g_97 = 0xC018302AL;
static short g_167 = (-8L);
static int g_168 = 0x3B863372L;
static unsigned g_170 = 4294967295UL;
static int g_204 = 0x66A50E26L;
static unsigned g_216 = 0xF5847AAFL;
static char g_278 = 0x24L;
static int *g_300 = &g_204;
static int g_360 = (-1L);
static int g_361 = 0x1A44FB71L;
static unsigned g_373 = 0xD764150CL;
static unsigned short g_380 = 65535UL;
static unsigned char g_426 = 0x06L;
static unsigned g_441 = 0xF5DFC347L;
static volatile short g_448 = 0xE70DL;
static volatile short *g_447 = &g_448;
static char g_449 = 0x14L;
static unsigned char *** volatile g_471 = (void*)0;
static unsigned char *g_474 = (void*)0;
static unsigned char **g_473 = &g_474;
static unsigned char *** volatile g_472 = &g_473;
static int ** volatile g_488 = &g_300;
static unsigned short *g_543 = (void*)0;
static unsigned short * volatile *g_542 = &g_543;
static int g_625 = 7L;
static volatile int g_641 = 0x26ADEE3CL;
static unsigned short g_647 = 65535UL;
static int ** volatile g_650 = &g_300;
static int ** volatile g_674 = &g_300;
static volatile unsigned g_693 = 1UL;
static volatile unsigned *g_692 = &g_693;
static volatile unsigned ** volatile g_691 = &g_692;
static volatile unsigned ** volatile * volatile g_694 = (void*)0;
static int ** volatile g_718 = &g_300;
static unsigned char g_976 = 250UL;
static unsigned g_992 = 1UL;
static unsigned g_993 = 0x49847619L;
static int ** volatile g_994 = (void*)0;
static volatile unsigned g_1189 = 0xDCFD8ECBL;
static int ** volatile g_1194 = &g_300;
static int * volatile * volatile g_1199 = &g_27;
static int * volatile * volatile *g_1198 = &g_1199;
static int * volatile * volatile **g_1197 = &g_1198;
static unsigned g_1204 = 0x1CF7DC32L;
static int g_1213 = (-2L);
static int g_1253 = 0xFEB96233L;
static unsigned g_1254 = 0xE1FC813AL;



static int func_1(void);
static int func_2(unsigned p_3);
static unsigned func_9(short p_10, unsigned p_11, int p_12, unsigned p_13);
static short func_14(unsigned p_15);
static unsigned short func_39(unsigned p_40, unsigned p_41, unsigned p_42, int p_43, int * p_44);
static short func_45(int * p_46, int p_47);
static int * func_48(int * p_49, int * p_50, unsigned short p_51, int p_52);
static int * func_54(int p_55, unsigned p_56);
static int func_57(short p_58);
static short func_59(int p_60);
static int func_1(void)
{
    int *l_1252 = &g_1253;
    (*l_1252) &= func_2(g_4);




    (*l_1252) = (*l_1252);
    return g_1254;
}







static int func_2(unsigned p_3)
{
    unsigned char l_16 = 0x15L;
    unsigned *l_1203 = &g_1204;
    int l_1205 = 5L;
    int *l_1212 = &g_1213;
    char *l_1220 = &g_449;
    unsigned short **l_1225 = &g_543;
    unsigned short **l_1226 = &g_543;
    char *l_1229 = &g_74;
    int *l_1230 = &l_1205;
    int l_1244 = (-3L);
    unsigned char l_1249 = 1UL;
    (*l_1212) |= ((****g_1197) = (safe_add_func_int32_t_s_s(((safe_add_func_uint32_t_u_u(func_9((g_4 & ((+func_14(l_16)) > l_16)), ((*l_1203) = (g_361 <= (safe_mul_func_uint16_t_u_u(65530UL, 0UL)))), (l_1205 &= l_16), l_16), l_16)) >= l_16), 0UL)));



    (****g_1197) = (safe_rshift_func_int8_t_s_s(((*l_1229) &= (safe_sub_func_uint8_t_u_u((~(!((((*l_1212) < (*l_1212)) <= (safe_sub_func_int16_t_s_s((((*l_1220) = g_693) && (*l_1212)), ((safe_rshift_func_uint8_t_u_u((safe_sub_func_int32_t_s_s(((l_1225 != l_1226) || (&g_380 != (*l_1226))), (safe_add_func_uint8_t_u_u((*l_1212), g_97)))), 3)) == (*l_1212))))) && 0x2E7C1CEFL))), (*l_1212)))), (*l_1212)));
    (***g_1197) = &l_1205;

    ;
    if (((***g_1198) = (*g_27)))
    {
        int *l_1231 = &g_360;
        (*g_1194) = func_48(l_1230, l_1231, func_45(&l_1205, g_4), g_360);

        ;
    }
    else
    {
        int l_1232 = 1L;
        int l_1233 = 0x3C8556B6L;
        int *l_1234 = &g_28;
        int *l_1235 = &g_204;
        int l_1236 = 0x542B6830L;
        int *l_1237 = (void*)0;
        int *l_1238 = &g_204;
        int *l_1239 = &l_1236;
        int *l_1240 = (void*)0;
        int *l_1241 = (void*)0;
        int *l_1242 = &l_1233;
        int *l_1243 = &g_360;
        int *l_1245 = (void*)0;
        int *l_1246 = &l_1236;
        int *l_1247 = &g_1213;
        int *l_1248 = &l_1233;
        l_1249--;
        return (*l_1243);


    }

    ;
    return (**g_488);


}







static unsigned func_9(short p_10, unsigned p_11, int p_12, unsigned p_13)
{
    unsigned l_1210 = 0xB0CC41EAL;
    int l_1211 = 0x0A9EBC14L;
    l_1210 &= (((safe_mod_func_int32_t_s_s(((***g_1198) |= p_10), (safe_lshift_func_int16_t_s_u(p_12, 4)))) | 0x4521L) != 5L);
    l_1211 ^= (***g_1198);
    return g_380;
}







static short func_14(unsigned p_15)
{
    unsigned l_17 = 4294967289UL;
    unsigned l_24 = 0xDBC9B780L;
    int *l_25 = (void*)0;
    int *l_26 = (void*)0;
    int *l_459 = &g_97;
    int l_460 = 0x1C7C4E01L;
    char *l_463 = &g_74;
    unsigned char l_513 = 0xCEL;
    short l_539 = 0xD74FL;
    int *l_547 = &g_360;
    int l_615 = 0x236715A5L;
    short l_707 = 0L;
    unsigned l_979 = 0UL;
    int l_1027 = 0x669E8D7BL;
    int l_1029 = (-1L);
    int l_1052 = (-1L);
    int l_1059 = 0x7D162F49L;
    int l_1072 = 5L;
    int l_1073 = 0L;
    int l_1074 = 0x6D742D97L;
    int l_1097 = (-10L);
    int l_1145 = 0x1AA11F2EL;
    int l_1162 = 0x86DE7474L;
    int l_1170 = 0x5E2ECF68L;
    int ****l_1200 = (void*)0;
    (*g_27) = (((l_17 & (safe_add_func_uint32_t_u_u(0xC1D6B3BFL, (safe_lshift_func_uint8_t_u_s(((safe_lshift_func_int8_t_s_u((!((g_4 != (0xBBL != g_4)) >= l_17)), 1)) && ((0x8DDAC0FAL & (l_24 < p_15)) ^ g_4)), p_15))))) != g_4) || 1UL);
    l_460 = ((*l_459) = ((((~((*g_27) | (safe_rshift_func_int16_t_s_s((-3L), (safe_mod_func_int8_t_s_s(((g_360 |= (safe_rshift_func_uint8_t_u_s((safe_sub_func_int8_t_s_s((((safe_lshift_func_uint8_t_u_s(p_15, 7)) > func_39(g_28, p_15, (((p_15 | func_45(l_26, g_28)) < 0xB1FCL) < 0xC389L), p_15, l_26)) < g_380), 1L)), l_17))) ^ 1L), p_15)))))) <= (-1L)) == 0xE9AC76D7L) ^ g_28));


    if ((4294967292UL >= (safe_sub_func_int8_t_s_s(((*l_463) = func_57(p_15)), p_15))))
    {
        int *l_481 = &g_4;
        unsigned char l_510 = 0UL;
        short *l_531 = &g_167;
        int l_584 = 0L;
        int l_589 = 0L;
        int l_592 = 0xF2415FE0L;
        char l_708 = 0x28L;
        unsigned l_709 = 1UL;
        if ((safe_mod_func_uint32_t_u_u((0x01F1CFE9L <= 0L), g_170)))
        {
            int l_466 = 0x2844F21BL;
            if (l_466)
            {
                unsigned short l_483 = 65535UL;
                short *l_505 = &g_167;
                for (g_167 = 0; (g_167 < (-15)); g_167 = safe_sub_func_uint8_t_u_u(g_167, 6))
                {
                    unsigned char *l_470 = (void*)0;
                    unsigned char **l_469 = &l_470;
                    unsigned l_478 = 4294967295UL;
                    int *l_486 = &g_204;
                    if ((*g_27))
                    {
                        (*g_472) = l_469;

                        ;
                    }
                    else
                    {
                        int *l_475 = (void*)0;
                        int *l_476 = &g_97;
                        int *l_477 = &g_28;
                        (*l_459) = ((*g_27) = (*g_27));
                        (*l_459) = (*g_27);
                        l_478++;
                        (*l_476) = func_57(p_15);
                    }


                    if (p_15)
                    {
                        int **l_482 = &l_26;
                        (*l_482) = l_481;

                        ;
                        if ((*g_27))
                            continue;

                    }
                    else
                    {
                        if (l_483)
                            break;

                    }
                    for (l_466 = 0; (l_466 != 1); ++l_466)
                    {
                        int *l_487 = &g_28;
                        l_487 = l_486;

                        ;
                        (*l_486) = (249UL || p_15);
                    }
                    (*l_459) |= (0x87L > 0xB4L);
                }

                ;

                (*g_27) = ((*l_459) = func_59(l_483));
                (*g_488) = func_54(g_426, p_15);

                ;
                (*l_459) = (safe_lshift_func_int16_t_s_u(((*l_505) = (safe_lshift_func_int8_t_s_u((0L ^ (safe_add_func_uint8_t_u_u((((void*)0 == &g_373) == (p_15 > (safe_add_func_int16_t_s_s(((safe_rshift_func_int8_t_s_u((~g_28), (safe_mod_func_int8_t_s_s(func_59((((safe_mod_func_uint16_t_u_u(g_360, (g_167 | ((((safe_sub_func_int32_t_s_s(((void*)0 != &g_74), g_97)) || 0x24F5L) < g_71) > 0xA0EFF4E2L)))) | g_360) ^ p_15)), (*l_481))))) & (*l_481)), (*l_481))))), 0xF0L))), 6))), (*l_481)));


            }
            else
            {
                unsigned short *l_506 = &g_71;
                int *l_537 = &g_204;
                int *l_540 = (void*)0;
                unsigned *l_541 = &l_24;
                if ((((&g_71 != l_506) & func_57(p_15)) & ((func_39((((safe_unary_minus_func_int16_t_s(func_39(p_15, (*l_481), (safe_mod_func_uint8_t_u_u(0UL, 0x3FL)), ((*g_27) ^ 0x1E737EF2L), &g_360))) > l_466) | l_510), (*l_481), p_15, (*l_481), &l_466) != l_466) ^ 0x476FL)))
                {
                    unsigned *l_511 = &g_441;
                    int l_512 = 0xB6B59156L;
                    int **l_520 = &l_25;
                    (*l_520) = func_54(((void*)0 != &g_473), (((*l_511) |= p_15) != ((l_512 > (~l_513)) ^ (safe_lshift_func_int16_t_s_s((func_39((safe_lshift_func_uint8_t_u_s((safe_unary_minus_func_int8_t_s((safe_unary_minus_func_uint32_t_u(g_449)))), 5)), g_97, g_449, (func_57((0x442A286EL != p_15)) < p_15), &l_466) < 0x5DL), 0)))));

                    ;
                    (*l_520) = (void*)0;

                    ;
                    (*l_459) = 0xAF2070FDL;
                }
                else
                {
                    int *l_523 = &g_360;
                    unsigned l_530 = 1UL;
                    unsigned char l_534 = 255UL;
                    for (g_97 = 0; (g_97 >= 6); g_97 = safe_add_func_int16_t_s_s(g_97, 1))
                    {
                        int **l_524 = &g_300;
                        (*l_524) = l_523;

                        ;
                        (**l_524) ^= (l_466 == 9L);
                        (*l_524) = func_48((*l_524), (*l_524), ((p_15 > (((p_15 || (4UL >= (safe_unary_minus_func_int32_t_s(func_57(p_15))))) != ((((safe_mod_func_int8_t_s_s(((*l_463) = g_361), (safe_sub_func_int8_t_s_s(l_530, 255UL)))) != g_449) < (*l_523)) >= p_15)) && 0x6E7AL)) & 0x60L), g_278);

                        ;
                        (*l_523) &= ((((*l_481) < (&g_167 == l_531)) != func_57((*g_447))) && (((safe_mod_func_uint32_t_u_u(g_204, (func_57(((l_466 != func_57(l_466)) ^ 0x1EL)) || g_69))) <= l_534) | 0UL));
                    }


                    (*g_27) = (safe_rshift_func_uint16_t_u_s(func_45(l_537, l_466), 14));
                    (*l_537) ^= ((*l_523) = (*l_481));
                    (*l_523) = p_15;
                }


                (*l_459) = (p_15 || ((g_216 < (safe_unary_minus_func_int16_t_s(1L))) || func_39(p_15, func_39(l_539, p_15, ((*l_541) = func_45(l_540, (*l_537))), (*g_27), &g_28), g_28, l_466, &l_466)));
                (*l_537) |= (((void*)0 != (**g_472)) > (1UL ^ (g_542 != &l_506)));
            }

            ;


        }
        else
        {
            char l_572 = (-4L);
            int l_590 = 9L;
            volatile unsigned ** volatile l_695 = &g_692;
            int ***l_697 = (void*)0;
            int ****l_698 = &l_697;
            int l_737 = 7L;
            int l_787 = 1L;
            int l_843 = (-9L);
            int l_855 = 0xDB32BBC0L;
            int l_926 = 0L;
            int l_928 = 0x241BF66CL;
            int l_971 = 0xDEF7B2CDL;
            int l_975 = (-7L);
            int *l_995 = &l_843;
            if (func_45(l_481, p_15))
            {
                (*l_459) = (p_15 < p_15);
            }
            else
            {
                unsigned l_554 = 0x94F41C55L;
                int l_644 = (-2L);
                int **l_696 = &l_481;
                (*l_459) ^= (safe_mod_func_int8_t_s_s((-1L), (~(safe_unary_minus_func_uint8_t_u(func_57(((void*)0 != l_547)))))));
                if ((*g_27))
                {
                    unsigned short *l_550 = &g_380;
                    unsigned char *l_551 = &l_513;
                    int l_567 = 7L;
                    if ((g_361 && (safe_add_func_uint16_t_u_u(((*l_550) = (&g_473 != &g_473)), (((&l_513 != l_551) && p_15) ^ (safe_rshift_func_int16_t_s_u(0L, (func_59(g_373) && l_554))))))))
                    {
                        int *l_568 = &g_28;
                        int *l_569 = &g_360;
                        int *l_570 = &g_204;
                        int *l_571 = &l_567;
                        int *l_573 = &l_567;
                        int *l_574 = &g_97;
                        int *l_575 = &l_567;
                        int *l_576 = &g_28;
                        int *l_577 = &g_204;
                        int *l_578 = &g_360;
                        int *l_579 = (void*)0;
                        int *l_580 = &g_97;
                        int *l_581 = &l_567;
                        int *l_582 = (void*)0;
                        int *l_583 = &l_460;
                        int *l_585 = &g_97;
                        int *l_586 = &l_460;
                        int *l_587 = &g_97;
                        int *l_588 = &l_567;
                        int *l_591 = &l_584;
                        int *l_593 = &l_589;
                        int *l_594 = &l_584;
                        int *l_595 = &l_567;
                        int *l_596 = &l_589;
                        int *l_597 = (void*)0;
                        int *l_598 = &g_360;
                        int *l_599 = &l_584;
                        int *l_600 = (void*)0;
                        int *l_601 = &g_97;
                        int *l_602 = (void*)0;
                        int *l_603 = &l_584;
                        int *l_604 = &l_567;
                        int *l_605 = &l_567;
                        int *l_606 = &l_460;
                        int *l_607 = &l_590;
                        int *l_608 = (void*)0;
                        int *l_609 = &g_97;
                        int *l_610 = &l_589;
                        int *l_611 = &l_590;
                        int *l_612 = &l_460;
                        int *l_613 = &g_360;
                        int *l_614 = (void*)0;
                        int l_616 = 0x893A71CEL;
                        int l_617 = 2L;
                        int *l_618 = &l_584;
                        int *l_619 = &l_460;
                        int *l_620 = &l_616;
                        int *l_621 = &g_28;
                        int *l_622 = &l_589;
                        int *l_623 = (void*)0;
                        int *l_624 = &l_616;
                        int *l_626 = (void*)0;
                        int *l_627 = &l_616;
                        int *l_628 = &l_567;
                        int *l_629 = &l_617;
                        int *l_630 = &l_615;
                        int *l_631 = &g_28;
                        int *l_632 = &l_589;
                        int *l_633 = &g_28;
                        int *l_634 = &l_589;
                        int *l_635 = &l_584;
                        int *l_636 = &l_590;
                        int *l_637 = (void*)0;
                        int *l_638 = &l_592;
                        int *l_639 = &l_616;
                        int *l_640 = &g_360;
                        int *l_642 = &g_204;
                        int *l_643 = &g_360;
                        int *l_645 = &l_644;
                        int *l_646 = &l_615;
                        l_568 = func_54(func_59((safe_sub_func_int8_t_s_s(p_15, ((safe_lshift_func_int8_t_s_s((-1L), 4)) > p_15)))), (((((*l_547) = (*g_27)) <= (safe_add_func_int32_t_s_s((safe_add_func_uint16_t_u_u(((g_373 ^ 0x1ECDL) != g_449), (((safe_sub_func_uint16_t_u_u((safe_add_func_int32_t_s_s(l_567, g_28)), p_15)) == l_567) | p_15))), p_15))) < 65531UL) | g_168));
                        --g_647;
                        (*l_613) = (*g_27);
                        (*g_650) = &l_644;

                        ;
                    }
                    else
                    {
                        char l_651 = (-2L);
                        l_567 = l_651;
                        (*l_459) |= (p_15 > (((safe_sub_func_uint16_t_u_u(((l_590 <= l_590) == (((safe_mod_func_uint32_t_u_u(((-8L) <= 0xA1L), 5L)) >= p_15) >= (safe_unary_minus_func_int32_t_s((-1L))))), ((&g_441 != &p_15) ^ 0UL))) == p_15) == (*l_547)));
                        return (*g_447);
                    }

                    ;
                    return p_15;


                }
                else
                {
                    short **l_663 = (void*)0;
                    short **l_664 = &l_531;
                    short *l_665 = &g_167;
                    unsigned char *l_670 = &l_510;
                    int *l_673 = &l_615;
                    int l_676 = 0x372DB749L;
                    unsigned l_688 = 4294967295UL;
                    (*l_547) ^= (safe_mod_func_int32_t_s_s((((&g_170 == &g_216) || (0x1FC3L != (*g_447))) == (p_15 > ((0UL <= (safe_rshift_func_uint16_t_u_u(func_57(((*l_665) = (((*l_664) = l_531) == &g_167))), l_644))) <= g_449))), p_15));
                    if ((safe_lshift_func_int8_t_s_u((safe_rshift_func_uint8_t_u_u((++(*l_670)), p_15)), 4)))
                    {
                        int **l_675 = &l_481;
                        (*g_674) = l_673;

                        ;
                        (*l_675) = (*g_674);

                        ;
                    }
                    else
                    {
                        int *l_677 = &g_360;
                        int *l_678 = (void*)0;
                        int *l_679 = &l_644;
                        int *l_680 = &g_28;
                        int *l_681 = &l_460;
                        int *l_682 = &l_589;
                        int *l_683 = &l_584;
                        int *l_684 = &g_204;
                        int *l_685 = &l_676;
                        int *l_686 = &l_460;
                        int *l_687 = &g_28;
                        l_688++;
                    }


                    ;
                    l_695 = g_691;
                    l_481 = &l_460;

                    ;
                }


                ;
                (*l_696) = &l_584;

                ;
                (*l_696) = &l_592;

                ;
            }


            ;
            (*l_547) = ((p_15 && (((((*l_698) = l_697) == (void*)0) != 0x07L) ^ (safe_rshift_func_int8_t_s_u(((*l_463) = (safe_rshift_func_uint16_t_u_s(func_57(((safe_lshift_func_int8_t_s_u(((safe_add_func_int32_t_s_s((l_707 ^ func_45(func_48(&l_615, &l_592, p_15, (p_15 ^ l_708)), p_15)), 0x5C95E53CL)) && p_15), l_590)) < l_709)), p_15))), 7)))) && (*l_459));
            for (l_590 = 0; (l_590 == (-16)); l_590 = safe_sub_func_int8_t_s_s(l_590, 1))
            {
                int *l_714 = &g_28;
                unsigned char l_732 = 0xFBL;
                int l_735 = 0xCDCAEE7EL;
                int l_854 = 1L;
                int l_872 = 0x698ECC28L;
                int l_969 = (-1L);
                int **l_996 = &l_547;
                for (l_510 = 0; (l_510 != 41); l_510 = safe_add_func_uint16_t_u_u(l_510, 4))
                {
                    int *l_715 = &l_584;
                    unsigned char *l_728 = (void*)0;
                    unsigned char *l_729 = &l_513;
                    int l_885 = 0L;
                    int l_897 = 0x22AE68F0L;
                    int l_908 = 0x9C4CCF5BL;
                    if (p_15)
                        break;
                    l_715 = l_714;

                    ;
                    for (g_360 = 0; (g_360 >= (-1)); --g_360)
                    {
                        unsigned *l_719 = &g_441;
                        int l_720 = (-4L);
                        int **l_721 = &l_547;
                        (*g_718) = l_714;

                        ;
                        (*l_715) = (1L != (&l_714 != (void*)0));
                        (*l_721) = func_48((*g_718), &g_4, func_39((((((0x143DDFEFL == (((0L == (*g_300)) && ((*l_481) >= (((*l_719) = (*l_714)) | 0L))) & g_647)) ^ g_361) | p_15) >= 0L) ^ p_15), g_426, l_720, p_15, l_714), (*l_715));

                        ;
                    }
                    if (((safe_rshift_func_int8_t_s_u(((safe_add_func_uint8_t_u_u(((*l_714) = ((*l_729) = (safe_lshift_func_uint8_t_u_s((*l_714), (g_380 ^ 0x07L))))), g_167)) ^ (0x35L <= 0x45L)), p_15)) <= func_57((0x28L >= (safe_rshift_func_int16_t_s_s((0x92157995L != 7UL), 1))))))
                    {
                        (*l_715) = 0x69DC55CDL;
                        if (p_15)
                            continue;
                        l_732--;
                    }
                    else
                    {
                        int *l_736 = &g_204;
                        int *l_738 = &l_615;
                        int *l_739 = &l_615;
                        int *l_740 = (void*)0;
                        int *l_741 = (void*)0;
                        int *l_742 = &l_584;
                        int *l_743 = (void*)0;
                        int *l_744 = &l_592;
                        int *l_745 = &g_360;
                        int *l_746 = &l_592;
                        int *l_747 = &g_204;
                        int *l_748 = &g_204;
                        int *l_749 = &l_737;
                        int *l_750 = &l_460;
                        int *l_751 = (void*)0;
                        int *l_752 = &l_460;
                        int *l_753 = &l_589;
                        int *l_754 = (void*)0;
                        int *l_755 = &l_460;
                        int *l_756 = (void*)0;
                        int *l_757 = &l_589;
                        int *l_758 = &l_735;
                        int *l_759 = (void*)0;
                        int *l_760 = &g_360;
                        int *l_761 = &l_737;
                        int *l_762 = &g_28;
                        int l_763 = 1L;
                        int *l_764 = &l_592;
                        int *l_765 = &g_97;
                        int *l_766 = &l_737;
                        int *l_767 = &l_735;
                        int *l_768 = &g_28;
                        int *l_769 = (void*)0;
                        int *l_770 = &l_584;
                        int *l_771 = (void*)0;
                        int *l_772 = (void*)0;
                        int *l_773 = &g_97;
                        int *l_774 = &g_360;
                        int *l_775 = &l_592;
                        int *l_776 = &l_589;
                        int *l_777 = (void*)0;
                        int *l_778 = &l_592;
                        int *l_779 = (void*)0;
                        int *l_780 = (void*)0;
                        int *l_781 = (void*)0;
                        int *l_782 = &g_28;
                        int *l_783 = &l_737;
                        int *l_784 = (void*)0;
                        int *l_785 = &g_28;
                        int l_786 = 4L;
                        int *l_788 = &l_615;
                        int *l_789 = &l_737;
                        int *l_790 = &l_763;
                        int *l_791 = &l_737;
                        int *l_792 = &l_592;
                        int *l_793 = &l_460;
                        int *l_794 = &l_460;
                        int *l_795 = &l_592;
                        int *l_796 = (void*)0;
                        int *l_797 = &g_204;
                        int *l_798 = &l_737;
                        int *l_799 = &l_584;
                        int *l_800 = &g_97;
                        int *l_801 = (void*)0;
                        int *l_802 = &l_787;
                        int *l_803 = &l_735;
                        int *l_804 = &g_28;
                        int *l_805 = &g_204;
                        int *l_806 = &g_204;
                        int *l_807 = (void*)0;
                        int *l_808 = &l_787;
                        int *l_809 = (void*)0;
                        int *l_810 = &l_460;
                        int l_811 = 4L;
                        int *l_812 = &g_97;
                        int *l_813 = &l_460;
                        int *l_814 = (void*)0;
                        int *l_815 = (void*)0;
                        int *l_816 = (void*)0;
                        int *l_817 = &l_584;
                        int *l_818 = (void*)0;
                        int *l_819 = (void*)0;
                        int *l_820 = &l_787;
                        int *l_821 = &l_786;
                        int *l_822 = &g_97;
                        int *l_823 = &l_737;
                        int *l_824 = &l_589;
                        int *l_825 = &l_786;
                        int *l_826 = (void*)0;
                        int *l_827 = (void*)0;
                        int *l_828 = &l_584;
                        int *l_829 = &l_589;
                        int *l_830 = &l_737;
                        int *l_831 = (void*)0;
                        int *l_832 = &g_360;
                        int *l_833 = (void*)0;
                        int *l_834 = (void*)0;
                        int *l_835 = (void*)0;
                        int *l_836 = &g_204;
                        int *l_837 = &g_97;
                        int *l_838 = (void*)0;
                        int *l_839 = &l_584;
                        int *l_840 = (void*)0;
                        int *l_841 = &l_787;
                        int *l_842 = &l_615;
                        int *l_844 = &l_843;
                        int *l_845 = &g_360;
                        int *l_846 = &g_97;
                        int *l_847 = &l_843;
                        int *l_848 = &l_735;
                        int *l_849 = &l_735;
                        int *l_850 = &l_615;
                        int *l_851 = &l_763;
                        int *l_852 = &l_584;
                        int *l_853 = &l_787;
                        int *l_856 = &l_592;
                        int *l_857 = (void*)0;
                        int l_858 = 0xB254E173L;
                        int *l_859 = (void*)0;
                        int *l_860 = &l_787;
                        int *l_861 = &g_360;
                        int *l_862 = &l_787;
                        int *l_863 = &l_811;
                        int *l_864 = &l_858;
                        int *l_865 = &l_589;
                        int *l_866 = &l_858;
                        int *l_867 = &l_843;
                        int *l_868 = &l_735;
                        int *l_869 = &g_360;
                        int *l_870 = &l_737;
                        int *l_871 = &l_592;
                        int *l_873 = &g_97;
                        int *l_874 = &l_811;
                        int *l_875 = &l_786;
                        int *l_876 = (void*)0;
                        int *l_877 = &g_360;
                        int *l_878 = (void*)0;
                        int *l_879 = &l_843;
                        int *l_880 = &l_589;
                        int *l_881 = &l_460;
                        int *l_882 = (void*)0;
                        int *l_883 = &l_584;
                        int *l_884 = &g_28;
                        int *l_886 = &l_872;
                        int *l_887 = &l_872;
                        int *l_888 = &l_589;
                        int *l_889 = &g_97;
                        int *l_890 = &l_592;
                        int *l_891 = &l_592;
                        int *l_892 = (void*)0;
                        int *l_893 = &g_360;
                        int *l_894 = (void*)0;
                        int *l_895 = &l_885;
                        int *l_896 = &l_854;
                        int *l_898 = &l_592;
                        int *l_899 = &l_811;
                        int *l_900 = &l_885;
                        int *l_901 = &l_897;
                        int *l_902 = &l_615;
                        int *l_903 = &g_204;
                        int *l_904 = &l_737;
                        int *l_905 = &g_360;
                        int *l_906 = &l_897;
                        int *l_907 = &l_854;
                        int *l_909 = &l_592;
                        int *l_910 = &l_615;
                        int *l_911 = &l_592;
                        int *l_912 = &l_763;
                        int *l_913 = (void*)0;
                        int *l_914 = &g_360;
                        int *l_915 = &g_360;
                        int *l_916 = &l_786;
                        int *l_917 = &g_28;
                        int *l_918 = &l_584;
                        int *l_919 = (void*)0;
                        int *l_920 = (void*)0;
                        int *l_921 = &l_787;
                        int *l_922 = &l_460;
                        int *l_923 = &l_592;
                        int *l_924 = &l_737;
                        int *l_925 = (void*)0;
                        int *l_927 = (void*)0;
                        int *l_929 = (void*)0;
                        int *l_930 = (void*)0;
                        int *l_931 = (void*)0;
                        int *l_932 = &l_855;
                        int *l_933 = &l_858;
                        int *l_934 = &l_928;
                        int *l_935 = &l_735;
                        int *l_936 = &l_858;
                        int *l_937 = (void*)0;
                        int *l_938 = &l_615;
                        int *l_939 = &l_584;
                        int *l_940 = (void*)0;
                        int *l_941 = &l_843;
                        int *l_942 = &l_763;
                        int *l_943 = &l_460;
                        int *l_944 = (void*)0;
                        int *l_945 = &l_872;
                        int *l_946 = (void*)0;
                        int *l_947 = &l_460;
                        int *l_948 = &l_763;
                        int *l_949 = &l_735;
                        int *l_950 = (void*)0;
                        int *l_951 = (void*)0;
                        int *l_952 = &l_872;
                        int *l_953 = &l_908;
                        int *l_954 = &g_204;
                        int *l_955 = &l_872;
                        int *l_956 = &l_787;
                        int *l_957 = &l_926;
                        int *l_958 = &l_589;
                        int *l_959 = &l_855;
                        int *l_960 = (void*)0;
                        int *l_961 = &l_615;
                        int *l_962 = &l_763;
                        int *l_963 = &l_908;
                        int *l_964 = &l_855;
                        int *l_965 = &l_872;
                        int *l_966 = &l_843;
                        int *l_967 = &l_589;
                        int *l_968 = &l_897;
                        int *l_970 = (void*)0;
                        int *l_972 = &l_908;
                        int *l_973 = &l_928;
                        int *l_974 = &l_908;
                        ++g_976;
                        ++l_979;
                    }
                }


                (*l_459) = (p_15 != 0L);
                l_995 = func_48(&l_969, &l_460, (safe_sub_func_uint8_t_u_u(func_45(&l_615, (safe_mod_func_uint32_t_u_u((safe_rshift_func_int8_t_s_s(((*g_447) <= func_39(p_15, ((safe_add_func_uint8_t_u_u((safe_sub_func_int16_t_s_s(g_216, p_15)), ((*l_463) = 0x8DL))) || 4UL), (*l_714), g_992, &l_615)), g_28)), g_993))), p_15)), p_15);

                ;
                (*l_996) = &l_969;

                ;
            }



            ;
        }

        ;


        ;

    }
    else
    {
        unsigned *l_997 = &l_979;
        short *l_998 = &l_707;
        int l_1001 = 0x9CCF33A9L;
        int l_1046 = (-7L);
        int l_1116 = 8L;
        int l_1117 = 0x3F1C1A73L;
        int l_1156 = (-10L);
        int l_1160 = 0xEA973CF5L;
        if (((p_15 > ((func_59(g_426) < p_15) == (&g_993 == l_997))) == ((((*l_998) = (*g_447)) != (safe_sub_func_uint16_t_u_u(l_1001, l_1001))) || g_448)))
        {
            int *l_1002 = &l_460;
            int *l_1003 = &g_360;
            int *l_1004 = &l_460;
            int *l_1005 = &l_460;
            int *l_1006 = (void*)0;
            int *l_1007 = &l_1001;
            int *l_1008 = &l_460;
            int *l_1009 = &l_615;
            int *l_1010 = &l_1001;
            int *l_1011 = (void*)0;
            int *l_1012 = (void*)0;
            int *l_1013 = &g_204;
            int *l_1014 = (void*)0;
            int *l_1015 = &l_1001;
            int *l_1016 = &g_360;
            int *l_1017 = &l_460;
            int *l_1018 = &g_204;
            int *l_1019 = (void*)0;
            int l_1020 = 0x612B5FDAL;
            int *l_1021 = &l_615;
            int *l_1022 = &g_28;
            int *l_1023 = &l_460;
            int *l_1024 = &l_1001;
            int *l_1025 = &l_615;
            int *l_1026 = &l_1020;
            int *l_1028 = &l_1001;
            int *l_1030 = &l_1027;
            int *l_1031 = (void*)0;
            int *l_1032 = (void*)0;
            int *l_1033 = &g_204;
            int *l_1034 = (void*)0;
            int *l_1035 = &g_360;
            int *l_1036 = &g_360;
            int *l_1037 = &l_1001;
            int *l_1038 = &l_1029;
            int *l_1039 = &l_1020;
            int *l_1040 = &l_460;
            int *l_1041 = &l_1029;
            int *l_1042 = &l_460;
            int *l_1043 = (void*)0;
            int *l_1044 = &g_97;
            int *l_1045 = &g_204;
            int *l_1047 = &l_1029;
            int *l_1048 = &l_1020;
            int *l_1049 = (void*)0;
            int *l_1050 = &g_360;
            int *l_1051 = &l_1029;
            int *l_1053 = &g_28;
            int *l_1054 = &l_1001;
            int *l_1055 = (void*)0;
            int l_1056 = (-4L);
            int *l_1057 = &l_460;
            int *l_1058 = &g_28;
            int *l_1060 = &l_1001;
            int *l_1061 = &l_1029;
            int *l_1062 = (void*)0;
            int l_1063 = (-1L);
            int *l_1064 = &l_1052;
            int *l_1065 = (void*)0;
            int *l_1066 = &l_1027;
            int *l_1067 = (void*)0;
            int *l_1068 = &l_615;
            int *l_1069 = &l_1001;
            int *l_1070 = &l_1046;
            int *l_1071 = (void*)0;
            int *l_1075 = (void*)0;
            int *l_1076 = (void*)0;
            int *l_1077 = &l_1072;
            int *l_1078 = &l_1052;
            int *l_1079 = &l_1001;
            int *l_1080 = &l_1059;
            int *l_1081 = &l_1074;
            int *l_1082 = &l_1052;
            int *l_1083 = (void*)0;
            int *l_1084 = &l_1059;
            int *l_1085 = (void*)0;
            int *l_1086 = &l_1052;
            int *l_1087 = &l_1020;
            int *l_1088 = &l_1073;
            int *l_1089 = (void*)0;
            int *l_1090 = &g_28;
            int *l_1091 = &l_1001;
            int *l_1092 = (void*)0;
            int *l_1093 = &l_1027;
            int l_1094 = (-9L);
            int *l_1095 = &l_1094;
            int *l_1096 = &l_1063;
            int *l_1098 = &l_1073;
            int *l_1099 = (void*)0;
            int l_1100 = 0x2AF45977L;
            int *l_1101 = &l_460;
            int *l_1102 = &l_1074;
            int *l_1103 = &l_460;
            int *l_1104 = &g_360;
            int *l_1105 = &l_1059;
            int l_1106 = (-4L);
            int *l_1107 = &l_615;
            int *l_1108 = &g_204;
            int *l_1109 = &l_1027;
            int *l_1110 = (void*)0;
            int *l_1111 = (void*)0;
            int *l_1112 = &g_97;
            int *l_1113 = &l_1097;
            int *l_1114 = &l_1027;
            int *l_1115 = &l_1073;
            int *l_1118 = (void*)0;
            int *l_1119 = (void*)0;
            int *l_1120 = (void*)0;
            int *l_1121 = &g_204;
            int *l_1122 = &l_1056;
            int *l_1123 = &l_1094;
            int *l_1124 = (void*)0;
            int *l_1125 = &l_1073;
            int *l_1126 = &g_360;
            int *l_1127 = (void*)0;
            int *l_1128 = (void*)0;
            int *l_1129 = (void*)0;
            int *l_1130 = &l_1029;
            int *l_1131 = &l_1001;
            int *l_1132 = &l_1059;
            int *l_1133 = (void*)0;
            int *l_1134 = &l_1063;
            int *l_1135 = &l_1029;
            int *l_1136 = &g_28;
            int *l_1137 = &l_1074;
            int *l_1138 = &l_1063;
            int *l_1139 = &l_1072;
            int l_1140 = 1L;
            int *l_1141 = &g_204;
            int *l_1142 = &l_1074;
            int *l_1143 = &l_615;
            int *l_1144 = &l_1046;
            int l_1146 = 0L;
            int *l_1147 = &g_360;
            int *l_1148 = &l_1100;
            int *l_1149 = &l_460;
            int *l_1150 = &g_97;
            int *l_1151 = &l_1097;
            int *l_1152 = &l_1094;
            int *l_1153 = &g_204;
            int *l_1154 = &l_1059;
            int *l_1155 = &l_460;
            int *l_1157 = (void*)0;
            int *l_1158 = (void*)0;
            int *l_1159 = &l_1146;
            int *l_1161 = &g_97;
            int *l_1163 = &l_1094;
            int *l_1164 = &g_28;
            int *l_1165 = (void*)0;
            int *l_1166 = &l_1029;
            int *l_1167 = &l_1056;
            int *l_1168 = &l_1074;
            int *l_1169 = &l_1162;
            int *l_1171 = &l_1145;
            int *l_1172 = &l_1074;
            int *l_1173 = &g_204;
            int *l_1174 = (void*)0;
            int *l_1175 = &l_1146;
            int *l_1176 = (void*)0;
            int *l_1177 = &l_1027;
            int *l_1178 = &l_1027;
            int *l_1179 = &l_1063;
            int *l_1180 = &l_1001;
            int *l_1181 = &g_204;
            int *l_1182 = &g_97;
            int *l_1183 = &g_360;
            int l_1184 = (-1L);
            int *l_1185 = &l_1184;
            int l_1186 = 0xDF27189AL;
            int *l_1187 = (void*)0;
            int *l_1188 = &l_1145;
            unsigned *l_1192 = &l_17;
            int **l_1193 = (void*)0;
            --g_1189;
            (*g_1194) = func_48(func_48(&l_1140, &l_1059, g_693, p_15), &l_1020, (g_380 = func_39((p_15 < (func_39(((*l_997) = g_993), ((*l_1192) |= (*l_459)), p_15, p_15, &l_1156) ^ g_168)), g_278, p_15, l_1001, &g_28)), p_15);

            ;
        }
        else
        {
            (*l_547) ^= (safe_add_func_uint32_t_u_u(p_15, func_45(func_54(p_15, (g_441 = ((*l_997) ^= (g_1197 != l_1200)))), g_373)));
        }


    }

    ;



    (*l_459) |= p_15;
    return p_15;


}







static unsigned short func_39(unsigned p_40, unsigned p_41, unsigned p_42, int p_43, int * p_44)
{
    unsigned char *l_454 = &g_87;
    unsigned char *l_456 = &g_87;
    unsigned char **l_455 = &l_456;
    int l_457 = 0L;
    int *l_458 = &g_97;
    (*l_458) = ((safe_add_func_int32_t_s_s(8L, (l_454 != ((*l_455) = &g_87)))) | l_457);
    return (*l_458);
}







static short func_45(int * p_46, int p_47)
{
    int *l_53 = &g_4;
    unsigned short *l_379 = &g_380;
    unsigned short **l_378 = &l_379;
    unsigned short **l_381 = &l_379;
    int **l_451 = &l_53;
    (*l_451) = func_48(l_53, func_54(func_57(func_59(p_47)), ((safe_lshift_func_int16_t_s_s(((p_47 && (l_378 == (l_381 = l_381))) & (safe_mod_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_u(p_47, 6)) != g_361), (*l_53)))), (*l_53))) | g_168)), p_47, g_380);
    return g_449;
}







static int * func_48(int * p_49, int * p_50, unsigned short p_51, int p_52)
{
    unsigned char l_430 = 249UL;
    int l_431 = 0L;
    unsigned *l_434 = (void*)0;
    unsigned *l_435 = &g_373;
    unsigned *l_440 = &g_441;
    char l_444 = 0x25L;
    short *l_445 = &g_167;
    int l_446 = 0xD53DA7A3L;
    int *l_450 = &g_204;
    l_431 ^= l_430;
    (*l_450) ^= (safe_lshift_func_uint8_t_u_u(((((g_87 = (g_426 = (p_52 < ((*l_435)--)))) >= (safe_rshift_func_int16_t_s_s(((~((*l_440)--)) > ((!(l_431 |= (p_51 | p_52))) == (l_430 | ((p_51 && ((*l_445) = (l_444 & p_51))) > (g_449 = ((l_446 = g_69) & (((void*)0 == g_447) >= (-1L)))))))), 7))) ^ p_52) & l_430), g_4));
    return &g_4;


}







static int * func_54(int p_55, unsigned p_56)
{
    int *l_386 = &g_360;
    int *l_387 = (void*)0;
    int *l_388 = &g_204;
    int *l_389 = &g_360;
    int *l_390 = &g_97;
    int *l_391 = &g_360;
    int *l_392 = &g_360;
    int *l_393 = (void*)0;
    int l_394 = 0x25CEF9BDL;
    int *l_395 = (void*)0;
    int *l_396 = &g_204;
    int *l_397 = &g_97;
    int *l_398 = &g_204;
    int *l_399 = &g_97;
    int *l_400 = &g_204;
    int *l_401 = &g_97;
    int l_402 = 1L;
    int *l_403 = &l_402;
    int *l_404 = &g_360;
    int *l_405 = (void*)0;
    int *l_406 = &l_402;
    int *l_407 = &g_204;
    int *l_408 = (void*)0;
    int l_409 = 0x57DBE0CDL;
    int *l_410 = &l_394;
    int *l_411 = &l_402;
    int *l_412 = &l_402;
    int *l_413 = &l_394;
    int *l_414 = &l_402;
    int *l_415 = &g_97;
    int *l_416 = (void*)0;
    int *l_417 = (void*)0;
    int *l_418 = &l_402;
    int *l_419 = (void*)0;
    int *l_420 = &l_394;
    int *l_421 = &l_402;
    int l_422 = 0x8D88053DL;
    int *l_423 = &l_402;
    int *l_424 = (void*)0;
    int *l_425 = (void*)0;
    int *l_429 = &l_409;
    --g_426;
    return &g_28;


}







static int func_57(short p_58)
{
    int l_308 = 0xADE16A3EL;
    int *l_309 = &g_204;
    int *l_310 = &g_97;
    int *l_311 = &g_204;
    int *l_312 = &g_97;
    int *l_313 = (void*)0;
    int *l_314 = &g_204;
    int *l_315 = (void*)0;
    int *l_316 = &g_204;
    int l_317 = 0L;
    int *l_318 = (void*)0;
    int *l_319 = &g_204;
    int *l_320 = &g_204;
    int *l_321 = &g_204;
    int *l_322 = &g_204;
    int *l_323 = &l_317;
    int l_324 = 0L;
    int *l_325 = (void*)0;
    int *l_326 = &l_324;
    int *l_327 = &l_317;
    int *l_328 = &l_317;
    int *l_329 = &g_204;
    int *l_330 = (void*)0;
    int *l_331 = &l_317;
    int *l_332 = &l_317;
    int l_333 = 0x182F14A8L;
    int l_334 = 0L;
    int *l_335 = &l_324;
    int *l_336 = &g_97;
    int l_337 = 0x82A6E03DL;
    int *l_338 = &l_317;
    int l_339 = 0xC0A88286L;
    int l_340 = 1L;
    int *l_341 = &l_339;
    int *l_342 = &l_334;
    int *l_343 = (void*)0;
    int *l_344 = &l_334;
    int l_345 = (-9L);
    int *l_346 = (void*)0;
    int *l_347 = &l_339;
    int *l_348 = &l_340;
    int *l_349 = &l_333;
    int l_350 = 0x9D2C0AA6L;
    int l_351 = 0xDFCDAD93L;
    int l_352 = 1L;
    int *l_353 = &l_324;
    int *l_354 = &l_345;
    int *l_355 = &l_334;
    int l_356 = (-1L);
    int *l_357 = &l_339;
    int *l_358 = (void*)0;
    int *l_359 = &l_333;
    int *l_362 = &l_324;
    int *l_363 = &g_97;
    int *l_364 = &g_97;
    int *l_365 = (void*)0;
    int *l_366 = &l_324;
    int *l_367 = &l_350;
    int *l_368 = (void*)0;
    int *l_369 = &l_351;
    int *l_370 = &l_333;
    int *l_371 = (void*)0;
    int *l_372 = &l_339;
    l_308 = 1L;
    ++g_373;
    return g_204;
}







static short func_59(int p_60)
{
    int l_63 = (-6L);
    unsigned l_64 = 0UL;
    unsigned short *l_68 = &g_69;
    unsigned short *l_70 = &g_71;
    unsigned short **l_72 = &l_70;
    unsigned short *l_73 = &g_71;
    int l_100 = 0xDC1C47F9L;
    int *l_120 = &l_100;
    int l_234 = 0xFD22C8C0L;
    int l_249 = 1L;
    unsigned l_299 = 1UL;
    int **l_305 = (void*)0;
    if ((g_28 != (safe_sub_func_int32_t_s_s((l_64 = l_63), (0UL == ((+g_4) == (l_63 != (safe_unary_minus_func_int16_t_s((((safe_lshift_func_uint16_t_u_u(((*l_68) &= p_60), ((*l_73) ^= ((((*l_72) = l_70) == &g_71) <= (p_60 == 0x2595L))))) && 0x1A7DFAE3L) | g_28))))))))))
    {
        int l_75 = (-1L);
        char l_82 = 0xB2L;
        char *l_83 = &l_82;
        unsigned char *l_85 = (void*)0;
        unsigned char *l_86 = &g_87;
        unsigned char l_116 = 4UL;
        int **l_119 = (void*)0;
        int l_127 = 4L;
        int l_163 = 0x16D361F4L;
        int l_223 = (-1L);
        unsigned l_263 = 0x38B5D02CL;
        g_74 = (l_63 | (0x33C9E489L || g_4));
        if (((((((*l_72) = (void*)0) != l_68) > ((l_75 < ((safe_sub_func_uint16_t_u_u(((!((safe_lshift_func_uint8_t_u_s(((*l_86) ^= (safe_mod_func_uint32_t_u_u(p_60, (((*l_68) |= ((g_71 ^ l_82) || (p_60 && ((*l_83) = p_60)))) | (safe_unary_minus_func_uint16_t_u(p_60)))))), g_74)) || l_75)) & p_60), l_75)) != l_63)) && l_64)) ^ p_60) >= g_71))
        {
            int *l_90 = &l_63;
            (*l_90) ^= (safe_sub_func_int32_t_s_s(p_60, 2UL));
        }
        else
        {
            for (l_63 = (-11); (l_63 > (-6)); ++l_63)
            {
                int *l_94 = &g_28;
                int **l_93 = &l_94;
                int *l_95 = (void*)0;
                int *l_96 = &g_97;
                int *l_98 = (void*)0;
                int *l_99 = &g_97;
                int *l_101 = (void*)0;
                int *l_102 = (void*)0;
                int *l_103 = &g_97;
                int l_104 = 0L;
                int *l_105 = &l_100;
                int *l_106 = &l_104;
                int *l_107 = &l_100;
                int *l_108 = &l_100;
                int *l_109 = &l_104;
                int *l_110 = &g_97;
                int *l_111 = &l_104;
                int *l_112 = &l_104;
                int *l_113 = (void*)0;
                int *l_114 = (void*)0;
                int *l_115 = &l_104;
                (*l_93) = &g_4;

                ;
                --l_116;
                (*l_112) = p_60;
            }
        }

        ;
        l_120 = &l_100;
        if (g_87)
        {
            short l_151 = 0x8C46L;
            int l_198 = 0x2B7543FBL;
            int l_214 = (-1L);
            int **l_226 = &l_120;
            int l_242 = 0xAB669172L;
            int l_259 = 2L;
            unsigned l_283 = 0xA3C17D6EL;
            for (l_75 = (-10); (l_75 < (-25)); l_75 = safe_sub_func_int8_t_s_s(l_75, 4))
            {
                int *l_173 = (void*)0;
                int *l_174 = (void*)0;
                int *l_175 = &g_97;
                int *l_176 = &l_100;
                int *l_177 = (void*)0;
                int *l_178 = &l_127;
                int *l_179 = &l_127;
                int *l_180 = &l_163;
                int *l_181 = &l_100;
                int l_182 = 0L;
                int *l_183 = &l_63;
                int l_184 = 0xC353B009L;
                int *l_185 = &l_184;
                int *l_186 = &l_182;
                int *l_187 = &g_97;
                int *l_188 = &l_163;
                int *l_189 = &l_63;
                int *l_190 = &l_100;
                int *l_191 = &g_97;
                int l_192 = 0xCC8AA120L;
                int *l_193 = &l_182;
                int *l_194 = &g_97;
                int *l_195 = (void*)0;
                int *l_196 = &l_182;
                int *l_197 = &g_97;
                int *l_199 = (void*)0;
                int *l_200 = (void*)0;
                int *l_201 = &l_182;
                int *l_202 = (void*)0;
                int *l_203 = &l_184;
                int *l_205 = (void*)0;
                int *l_206 = &l_192;
                int *l_207 = &g_97;
                int *l_208 = &l_63;
                int *l_209 = &l_100;
                int *l_210 = &l_63;
                int *l_211 = &l_63;
                int *l_212 = &l_163;
                int l_213 = 0L;
                int *l_215 = &l_182;
                unsigned char l_268 = 0x0CL;
                for (l_82 = (-9); (l_82 == (-3)); l_82++)
                {
                    for (l_116 = 0; (l_116 <= 36); l_116 = safe_add_func_int8_t_s_s(l_116, 9))
                    {
                        int *l_128 = (void*)0;
                        int *l_129 = (void*)0;
                        int *l_130 = &l_127;
                        int *l_131 = (void*)0;
                        int *l_132 = &g_97;
                        int *l_133 = &g_97;
                        int *l_134 = &g_97;
                        int *l_135 = &l_100;
                        int *l_136 = &l_127;
                        int *l_137 = &l_100;
                        int *l_138 = &l_100;
                        int *l_139 = &g_97;
                        int *l_140 = &l_100;
                        int *l_141 = &l_127;
                        int *l_142 = &g_97;
                        int *l_143 = &g_97;
                        int *l_144 = (void*)0;
                        int l_145 = 0x83588D28L;
                        int *l_146 = &l_63;
                        int *l_147 = &l_63;
                        int *l_148 = &g_97;
                        int l_149 = 0xFFCED716L;
                        int *l_150 = &l_100;
                        int *l_152 = &l_100;
                        int *l_153 = &l_63;
                        int *l_154 = (void*)0;
                        int *l_155 = &l_127;
                        int *l_156 = (void*)0;
                        int *l_157 = &l_149;
                        int *l_158 = &l_63;
                        int *l_159 = &l_145;
                        int *l_160 = &l_100;
                        int *l_161 = &l_149;
                        int *l_162 = &l_100;
                        int l_164 = 0L;
                        int *l_165 = &l_127;
                        int *l_166 = &l_163;
                        int *l_169 = &l_127;
                        (*l_120) ^= p_60;
                        if (p_60)
                            break;
                        g_170++;
                        (*l_137) ^= p_60;
                    }
                    if (p_60)
                        break;
                    (*l_120) = g_69;
                }
                g_216++;
                (*l_208) |= (safe_sub_func_uint32_t_u_u((*l_120), (safe_rshift_func_int16_t_s_s(l_223, 6))));
                if ((*l_120))
                {
                    int *l_228 = &l_63;
                    int l_252 = 0x83A0B3D9L;
                    if ((safe_mod_func_uint8_t_u_u((g_167 <= ((*l_83) = g_71)), (~g_69))))
                    {
                        int ***l_227 = &l_119;
                        (*l_227) = l_226;

                        ;
                        (*l_227) = &l_177;

                        ;
                        if ((*l_120))
                            continue;

                    }
                    else
                    {
                        int *l_229 = &l_182;
                        int *l_230 = &l_127;
                        int *l_231 = &l_213;
                        int *l_232 = (void*)0;
                        int *l_233 = (void*)0;
                        int *l_235 = &l_214;
                        int *l_236 = (void*)0;
                        int *l_237 = &l_127;
                        int *l_238 = (void*)0;
                        int *l_239 = &l_192;
                        int *l_240 = &l_100;
                        int *l_241 = &l_63;
                        int *l_243 = &l_213;
                        int *l_244 = (void*)0;
                        int *l_245 = &g_204;
                        int *l_246 = &l_127;
                        int *l_247 = &l_163;
                        int *l_248 = &l_100;
                        int *l_250 = &l_63;
                        int *l_251 = &l_198;
                        int *l_253 = &l_213;
                        int *l_254 = &l_234;
                        int *l_255 = (void*)0;
                        int *l_256 = (void*)0;
                        int *l_257 = &l_198;
                        int *l_258 = &l_182;
                        int *l_260 = &l_234;
                        int *l_261 = &l_163;
                        int *l_262 = &l_192;
                        l_228 = (*l_226);

                        ;
                        ++l_263;
                    }


                    ;
                    for (l_263 = (-24); (l_263 >= 46); ++l_263)
                    {
                        (*l_196) &= (-9L);
                    }
                    return l_268;
                }
                else
                {
                    unsigned *l_281 = &l_263;
                    int l_282 = (-1L);
                    (*l_120) = (safe_add_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s(p_60, (safe_add_func_uint32_t_u_u(g_167, ((&g_87 != &l_268) | (safe_unary_minus_func_int8_t_s((p_60 || (safe_rshift_func_int16_t_s_s((g_278 = (0x9BL != (g_74 |= (g_4 <= (*l_212))))), ((((*l_281) = (safe_lshift_func_int8_t_s_s((**l_226), g_168))) <= p_60) && (*l_120)))))))))))), g_97));
                    l_282 ^= ((*l_209) = 0x86D33B1CL);
                    if (l_282)
                        break;
                    (*l_201) = 0x11774B49L;
                }
            }


            (**l_226) &= l_283;
        }
        else
        {
            int *l_284 = (void*)0;
            int l_285 = 0x723F9358L;
            l_120 = l_284;

            ;
            l_285 = (g_97 > 6UL);
        }


        ;
    }
    else
    {
        int l_286 = 0xE7258F31L;
        short *l_289 = &g_167;
        g_97 |= ((l_286 >= p_60) <= ((safe_add_func_int16_t_s_s(((*l_289) = p_60), (safe_unary_minus_func_uint32_t_u((*l_120))))) | (safe_mod_func_int8_t_s_s(((p_60 < (2UL < (g_4 && ((l_286 < p_60) | l_286)))) < g_71), (*l_120)))));
        if (l_286)
        {
            (*l_120) |= (-1L);
        }
        else
        {
            for (g_74 = 0; (g_74 != (-16)); --g_74)
            {
                int **l_295 = (void*)0;
                int **l_296 = &l_120;
                int *l_298 = &g_28;
                int **l_297 = &l_298;
                (*l_297) = ((*l_296) = &l_63);

                ;
                ;
                if (l_286)
                    continue;
                (*l_120) ^= l_299;
                (*l_120) = p_60;
            }

            ;
        }

        ;
        g_204 &= 4L;
    }

    ;
    ;
    g_300 = &l_100;

    ;
    for (l_100 = 0; (l_100 < (-22)); --l_100)
    {
        int ***l_303 = (void*)0;
        int **l_304 = &l_120;
        int ***l_306 = (void*)0;
        int **l_307 = (void*)0;
        l_307 = (l_305 = (l_304 = (void*)0));

        ;
        g_300 = &l_63;

        ;
        return g_170;


    }
    return g_71;


}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_28, "g_28", print_hash_value);
    transparent_crc(g_69, "g_69", print_hash_value);
    transparent_crc(g_71, "g_71", print_hash_value);
    transparent_crc(g_74, "g_74", print_hash_value);
    transparent_crc(g_87, "g_87", print_hash_value);
    transparent_crc(g_97, "g_97", print_hash_value);
    transparent_crc(g_167, "g_167", print_hash_value);
    transparent_crc(g_168, "g_168", print_hash_value);
    transparent_crc(g_170, "g_170", print_hash_value);
    transparent_crc(g_204, "g_204", print_hash_value);
    transparent_crc(g_216, "g_216", print_hash_value);
    transparent_crc(g_278, "g_278", print_hash_value);
    transparent_crc(g_360, "g_360", print_hash_value);
    transparent_crc(g_361, "g_361", print_hash_value);
    transparent_crc(g_373, "g_373", print_hash_value);
    transparent_crc(g_380, "g_380", print_hash_value);
    transparent_crc(g_426, "g_426", print_hash_value);
    transparent_crc(g_441, "g_441", print_hash_value);
    transparent_crc(g_448, "g_448", print_hash_value);
    transparent_crc(g_449, "g_449", print_hash_value);
    transparent_crc(g_625, "g_625", print_hash_value);
    transparent_crc(g_641, "g_641", print_hash_value);
    transparent_crc(g_647, "g_647", print_hash_value);
    transparent_crc(g_693, "g_693", print_hash_value);
    transparent_crc(g_976, "g_976", print_hash_value);
    transparent_crc(g_992, "g_992", print_hash_value);
    transparent_crc(g_993, "g_993", print_hash_value);
    transparent_crc(g_1189, "g_1189", print_hash_value);
    transparent_crc(g_1204, "g_1204", print_hash_value);
    transparent_crc(g_1213, "g_1213", print_hash_value);
    transparent_crc(g_1253, "g_1253", print_hash_value);
    transparent_crc(g_1254, "g_1254", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
