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



static int g_10 = 0x3248C66FL;
static int **g_19 = (void*)0;
static unsigned g_24 = 0x6FE23A26L;
static volatile unsigned g_75 = 1UL;
static short g_97 = 0xA51FL;
static unsigned g_137 = 0UL;
static unsigned char g_174 = 0xF0L;
static volatile unsigned *g_198 = &g_75;
static volatile unsigned **g_197 = &g_198;
static short *g_201 = (void*)0;
static int *g_202 = &g_10;
static short g_221 = (-9L);
static unsigned g_222 = 4294967286UL;
static char g_243 = 0x92L;
static char g_248 = 0xE7L;
static int g_251 = (-1L);
static unsigned g_272 = 0x958E107FL;
static int g_293 = 0L;
static unsigned short g_296 = 7UL;
static volatile unsigned g_360 = 0xD2294016L;
static volatile unsigned char g_462 = 0x19L;
static unsigned char *g_473 = &g_174;
static unsigned char **g_472 = &g_473;
static unsigned char g_484 = 0UL;
static unsigned short *g_522 = (void*)0;
static volatile unsigned g_620 = 4294967290UL;
static unsigned char g_638 = 0x9DL;
static unsigned short g_640 = 7UL;
static volatile short g_683 = 0x6776L;
static char g_722 = (-3L);
static volatile unsigned char g_735 = 1UL;
static unsigned char g_762 = 0xE2L;
static int g_779 = 0xF09AB010L;
static volatile unsigned g_780 = 0UL;
static short g_820 = (-1L);
static unsigned g_880 = 9UL;
static unsigned *g_879 = &g_880;
static int *g_881 = &g_293;
static volatile short g_1003 = 0x3869L;
static int g_1013 = 0x5E0455C1L;
static short g_1019 = (-10L);
static unsigned short g_1029 = 65532UL;
static char *g_1037 = &g_243;
static char **g_1036 = &g_1037;
static char ***g_1035 = &g_1036;
static int g_1149 = 0xA0436DDAL;
static unsigned short g_1152 = 8UL;
static volatile unsigned char g_1159 = 0UL;
static unsigned g_1193 = 4294967288UL;
static volatile char g_1262 = 0xEFL;
static short g_1282 = 1L;
static unsigned short g_1311 = 0xA7C2L;
static short **g_1447 = (void*)0;
static short ***g_1446 = &g_1447;
static int g_1521 = 1L;
static unsigned char g_1522 = 0x78L;
static volatile unsigned g_1552 = 4294967295UL;
static unsigned short **g_1559 = &g_522;
static short g_1577 = 0x49CDL;
static volatile int g_1630 = 0x6D8214CAL;
static volatile unsigned g_1660 = 0x4ACA3E0DL;



static short func_1(void);
static int * func_2(int * p_3, unsigned char p_4, unsigned char p_5);
static int * func_6(int * p_7);
static short func_13(int * p_14);
static int * func_15(int ** p_16, int ** p_17, unsigned char p_18);
static int func_85(unsigned * p_86, unsigned char p_87);
static unsigned * func_88(unsigned * p_89, unsigned p_90, unsigned * p_91);
static short func_98(short p_99, short p_100, unsigned * p_101, unsigned p_102);
static int func_105(int p_106, unsigned short p_107);
static unsigned * func_108(short * p_109);
static short func_1(void)
{
    int *l_9 = &g_10;
    int **l_8 = &l_9;
    int l_1183 = (-7L);
    unsigned short *l_1701 = (void*)0;
    int *l_1704 = &g_293;
    int l_1705 = 0L;
    (*l_8) = func_2(func_6(((*l_8) = (void*)0)), l_1183, l_1183);
    (*l_1704) = ((g_1152--) & l_1183);
    (*l_1704) &= l_1705;
    return g_1521;
}







static int * func_2(int * p_3, unsigned char p_4, unsigned char p_5)
{
    int l_1198 = 0x7A07D52DL;
    int l_1263 = 1L;
    int l_1278 = (-1L);
    int l_1321 = 0x9F22D7F3L;
    short l_1335 = 0xD8B4L;
    unsigned short l_1411 = 0UL;
    short ****l_1574 = &g_1446;
    unsigned **l_1677 = &g_879;
    unsigned short l_1682 = 0x33A4L;
    unsigned l_1690 = 0xADE3933EL;
    if (p_5)
    {
        int *l_1203 = &g_251;
        unsigned short l_1330 = 1UL;
        int l_1376 = 1L;
        int l_1378 = 0L;
        unsigned l_1387 = 4294967286UL;
        int ***l_1444 = &g_19;
        int l_1518 = 0x3C7BB470L;
        unsigned short **l_1558 = &g_522;
        int l_1629 = 8L;
        int l_1633 = 0xF5472665L;
        int l_1634 = 0xE29C1D29L;
        if ((*g_202))
        {
            short *l_1215 = &g_1019;
            int l_1216 = (-3L);
            int l_1274 = (-6L);
            int l_1276 = 5L;
            unsigned l_1399 = 0xE695375EL;
            for (g_1029 = 2; (g_1029 != 15); g_1029++)
            {
                unsigned short l_1188 = 0xF50CL;
                unsigned short *l_1201 = &g_640;
                int *l_1202 = &g_10;
                int l_1222 = 0xA43F176FL;
                int l_1254 = 0xE1369F4AL;
                short l_1318 = 0x6B0BL;
                short l_1332 = (-1L);
                (*l_1202) &= (safe_lshift_func_uint16_t_u_u((((*g_1037) <= (3L > (-1L))) < l_1188), ((*l_1201) = (safe_lshift_func_uint16_t_u_s(((safe_sub_func_int32_t_s_s(((*g_202) = (g_1193 ^ ((g_462 ^ p_4) && (--(*g_879))))), (safe_add_func_uint32_t_u_u((l_1198 ^ (safe_mul_func_int8_t_s_s(p_4, l_1198))), l_1198)))) ^ l_1198), 5)))));
            }
        }
        else
        {
            int **l_1404 = &g_202;
            int *l_1405 = &l_1376;
            unsigned l_1406 = 0x5A3E357BL;
            (*l_1404) = p_3;
            l_1406--;
            (*l_1405) &= (-6L);
            if (((safe_add_func_int16_t_s_s((-1L), l_1411)) ^ (((*g_879) &= (p_5 | (***g_1035))) && 0x7D896982L)))
            {
                (*l_1405) &= ((*l_1203) = 1L);
            }
            else
            {
                for (l_1335 = (-8); (l_1335 != (-24)); l_1335 = safe_sub_func_int16_t_s_s(l_1335, 3))
                {
                    if ((254UL && p_5))
                    {
                        (*l_1404) = p_3;
                        (*l_1404) = (*l_1404);
                        (*l_1404) = p_3;
                    }
                    else
                    {
                        short l_1416 = 1L;
                        (*l_1405) &= (((void*)0 != (*g_197)) >= (l_1416 = ((p_4 = ((*g_473)--)) != 6UL)));
                    }
                }
            }
        }
        if (p_5)
        {
            short *l_1419 = (void*)0;
            short *l_1420 = &g_820;
            int l_1427 = 0xCCB70FBEL;
            short l_1436 = 0xA058L;
            int ***l_1445 = (void*)0;
            short ***l_1448 = &g_1447;
            int l_1486 = 1L;
            int l_1502 = 0x4F2AAB10L;
            int l_1519 = 1L;
            (*l_1203) = ((safe_add_func_int8_t_s_s((((((*l_1420) = (-7L)) & (safe_rshift_func_int8_t_s_s((***g_1035), 3))) < (((&g_473 != (void*)0) & ((*g_879) |= func_105((safe_lshift_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s(l_1427, ((*l_1203) = l_1321))), 5)), p_5))) > (safe_sub_func_uint8_t_u_u(((**g_472) = 251UL), 252UL)))) >= 6L), (*g_1037))) | p_4);
lbl_1666:
            if ((safe_sub_func_uint32_t_u_u((safe_mod_func_uint32_t_u_u((safe_sub_func_uint16_t_u_u((l_1427 = (((void*)0 == &p_5) || l_1335)), (l_1198 ^= g_1152))), l_1436)), (safe_rshift_func_int8_t_s_u(((*g_1037) &= l_1278), 7)))))
            {
                unsigned **l_1442 = (void*)0;
                unsigned ***l_1441 = &l_1442;
                int ***l_1443 = (void*)0;
                short ****l_1449 = &l_1448;
                int l_1452 = 9L;
                int **l_1578 = &g_202;
                (*l_1203) ^= (safe_mul_func_int16_t_s_s((((***g_1035) = (func_98(((*l_1420) = func_105(((l_1441 != (void*)0) ^ (l_1443 == (l_1445 = l_1444))), (p_4 < (g_1446 != ((*l_1449) = l_1448))))), p_5, &g_222, p_5) > 1L)) == 247UL), l_1436));
                if ((safe_rshift_func_uint8_t_u_u(5UL, (p_4 | l_1198))))
                {
                    int *l_1453 = (void*)0;
                    int *l_1454 = &l_1278;
                    int *l_1455 = &g_779;
                    int *l_1456 = &g_10;
                    int *l_1457 = &l_1321;
                    int *l_1458 = &l_1427;
                    int *l_1459 = (void*)0;
                    int *l_1460 = &l_1278;
                    int *l_1461 = &l_1378;
                    int *l_1462 = (void*)0;
                    int *l_1463 = &l_1452;
                    int *l_1464 = &l_1278;
                    int *l_1465 = &l_1263;
                    int *l_1466 = &l_1263;
                    int *l_1467 = &l_1278;
                    int *l_1468 = &g_251;
                    int *l_1469 = &l_1378;
                    int *l_1470 = &l_1263;
                    int *l_1471 = &g_779;
                    int *l_1472 = &g_779;
                    int *l_1473 = &g_779;
                    int *l_1474 = &l_1452;
                    int *l_1475 = (void*)0;
                    int *l_1476 = (void*)0;
                    int *l_1477 = (void*)0;
                    int *l_1478 = &g_293;
                    int *l_1479 = &l_1263;
                    int *l_1480 = &l_1278;
                    int *l_1481 = &l_1278;
                    int *l_1482 = &l_1376;
                    int *l_1483 = &l_1427;
                    int *l_1484 = &l_1198;
                    int l_1485 = (-1L);
                    int *l_1487 = &l_1485;
                    int *l_1488 = &l_1485;
                    int *l_1489 = &g_779;
                    int *l_1490 = &g_779;
                    int *l_1491 = &l_1321;
                    int *l_1492 = &g_10;
                    int *l_1493 = &l_1485;
                    int *l_1494 = &l_1198;
                    int *l_1495 = &l_1452;
                    int *l_1496 = &l_1378;
                    int *l_1497 = &l_1486;
                    int *l_1498 = (void*)0;
                    int *l_1499 = &l_1452;
                    int *l_1500 = &g_10;
                    int *l_1501 = (void*)0;
                    int *l_1503 = &l_1486;
                    int *l_1504 = &g_293;
                    int *l_1505 = &l_1452;
                    int *l_1506 = &l_1278;
                    int *l_1507 = &l_1378;
                    int *l_1508 = &l_1452;
                    int *l_1509 = &l_1278;
                    int *l_1510 = &l_1263;
                    int *l_1511 = &l_1485;
                    int *l_1512 = &l_1486;
                    int *l_1513 = &l_1278;
                    int *l_1514 = (void*)0;
                    int *l_1515 = (void*)0;
                    int *l_1516 = &l_1502;
                    int l_1517 = (-5L);
                    int *l_1520 = &g_293;
                    g_1522--;
                }
                else
                {
                    int *l_1525 = &g_779;
                    int *l_1526 = &l_1198;
                    int *l_1527 = &l_1452;
                    int *l_1528 = (void*)0;
                    int *l_1529 = &g_293;
                    int *l_1530 = (void*)0;
                    int *l_1531 = &l_1378;
                    int *l_1532 = &l_1519;
                    int *l_1533 = &l_1427;
                    int *l_1534 = &g_10;
                    int *l_1535 = (void*)0;
                    int *l_1536 = &g_779;
                    int *l_1537 = &l_1376;
                    int *l_1538 = &l_1198;
                    int *l_1539 = &l_1486;
                    int *l_1540 = (void*)0;
                    int *l_1541 = &g_779;
                    int *l_1542 = &l_1263;
                    int *l_1543 = &l_1376;
                    int *l_1544 = &l_1502;
                    int *l_1545 = &l_1376;
                    int *l_1546 = &l_1198;
                    int *l_1547 = (void*)0;
                    int *l_1548 = &l_1502;
                    int *l_1549 = &l_1486;
                    int *l_1550 = &l_1278;
                    int *l_1551 = (void*)0;
                    ++g_1552;
                }
                for (g_1193 = 0; (g_1193 != 23); ++g_1193)
                {
                    short l_1557 = (-1L);
                    (*l_1203) = l_1557;
                    g_1559 = l_1558;
                    if ((*g_202))
                    {
                        unsigned short **l_1560 = &g_522;
                        int l_1565 = (-8L);
                        int l_1566 = 0xB29874D8L;
                        short *l_1567 = &g_1282;
                        int *l_1575 = &l_1486;
                        (*l_1575) ^= ((((*l_1203) = ((l_1558 == l_1560) >= (safe_rshift_func_int16_t_s_s(((*l_1567) = (l_1566 ^= (l_1565 = ((safe_div_func_int16_t_s_s(((*l_1420) = p_4), (0x83L && (**g_1036)))) > l_1263)))), 1)))) > l_1278) & (!(safe_div_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u((safe_div_func_int8_t_s_s((((*g_202) |= ((void*)0 != l_1574)) < (-9L)), l_1557)), p_5)), p_5))));
                    }
                    else
                    {
                        int l_1576 = 0x6EAC8A40L;
                        if (p_4)
                            break;
                        if (l_1576)
                            continue;
                        if (g_1577)
                            break;
                    }
                }
                (*l_1578) = p_3;
            }
            else
            {
                int *l_1579 = &l_1378;
                int l_1580 = (-1L);
                int l_1581 = 3L;
                int *l_1582 = &l_1581;
                int *l_1583 = &l_1376;
                int *l_1584 = &l_1519;
                int *l_1585 = &l_1502;
                int *l_1586 = (void*)0;
                int *l_1587 = &l_1278;
                int *l_1588 = (void*)0;
                int *l_1589 = (void*)0;
                int *l_1590 = &g_10;
                int *l_1591 = &l_1263;
                int *l_1592 = &l_1581;
                int *l_1593 = &l_1263;
                int *l_1594 = &l_1580;
                int *l_1595 = &g_10;
                int *l_1596 = &l_1427;
                int *l_1597 = &g_251;
                int *l_1598 = &l_1427;
                int *l_1599 = &l_1580;
                int *l_1600 = &l_1378;
                int *l_1601 = &l_1378;
                int *l_1602 = &l_1376;
                int *l_1603 = &l_1581;
                int *l_1604 = (void*)0;
                int *l_1605 = &l_1321;
                int *l_1606 = &g_251;
                int *l_1607 = (void*)0;
                int *l_1608 = (void*)0;
                int *l_1609 = (void*)0;
                int *l_1610 = &l_1502;
                int *l_1611 = &l_1580;
                int *l_1612 = &l_1278;
                int *l_1613 = &l_1502;
                int *l_1614 = &l_1519;
                int *l_1615 = (void*)0;
                int *l_1616 = &l_1278;
                int *l_1617 = (void*)0;
                int *l_1618 = &l_1427;
                int *l_1619 = &g_293;
                int l_1620 = 0L;
                int *l_1621 = &l_1321;
                int *l_1622 = &l_1519;
                int *l_1623 = (void*)0;
                int *l_1624 = (void*)0;
                int *l_1625 = (void*)0;
                int *l_1626 = &l_1486;
                int *l_1627 = &l_1378;
                int *l_1628 = &l_1321;
                int *l_1631 = &l_1629;
                int *l_1632 = &g_779;
                int *l_1635 = &l_1629;
                int *l_1636 = &l_1278;
                int *l_1637 = &g_10;
                int *l_1638 = (void*)0;
                int *l_1639 = &l_1278;
                int *l_1640 = &l_1629;
                int *l_1641 = &l_1263;
                int *l_1642 = &l_1376;
                int *l_1643 = &l_1427;
                int *l_1644 = &g_251;
                int *l_1645 = &l_1580;
                int *l_1646 = &l_1378;
                int *l_1647 = &l_1519;
                int *l_1648 = &l_1502;
                int *l_1649 = &l_1376;
                int *l_1650 = &l_1486;
                int *l_1651 = &l_1519;
                int *l_1652 = &l_1376;
                int *l_1653 = &g_779;
                int *l_1654 = &l_1378;
                int *l_1655 = &l_1378;
                int *l_1656 = &l_1376;
                int *l_1657 = &l_1634;
                int *l_1658 = &l_1519;
                int *l_1659 = (void*)0;
                int **l_1663 = &l_1656;
                ++g_1660;
                (*l_1663) = &g_293;
            }
            for (l_1634 = 0; (l_1634 != 19); l_1634 = safe_add_func_uint16_t_u_u(l_1634, 6))
            {
                return p_3;
            }
            if (l_1278)
            {
                return p_3;
            }
            else
            {
                int **l_1667 = &l_1203;
                unsigned short *l_1670 = (void*)0;
                unsigned short *l_1671 = (void*)0;
                unsigned short *l_1672 = &g_1029;
                if (g_222)
                    goto lbl_1666;
                (*l_1667) = p_3;
                l_1378 = (safe_rshift_func_int16_t_s_s((l_1263 & ((*l_1672) = p_4)), 11));
            }
        }
        else
        {
            l_1198 ^= l_1278;
        }
    }
    else
    {
        int *l_1673 = &l_1321;
        (*l_1673) = ((*g_202) &= ((void*)0 != &g_19));
    }
    for (g_1013 = 0; (g_1013 <= (-4)); g_1013 = safe_sub_func_int16_t_s_s(g_1013, 4))
    {
        short l_1676 = 5L;
        if (p_4)
            break;
        if (l_1676)
            break;
    }
    if (l_1335)
    {
        short *l_1678 = &g_820;
        int **l_1679 = &g_202;
        (*l_1679) = p_3;
    }
    else
    {
        char *l_1683 = &g_722;
        int l_1686 = 2L;
        unsigned char *l_1687 = (void*)0;
        unsigned char *l_1688 = &g_762;
        int *l_1689 = &l_1263;
        char ***l_1695 = &g_1036;
        char ****l_1696 = &g_1035;
        short *l_1697 = &g_1282;
        int **l_1700 = &g_202;
        l_1690 = ((*l_1689) &= (safe_add_func_int8_t_s_s(((*l_1683) = ((*g_1037) = l_1682)), ((*l_1688) &= (func_105((((*g_473) = (safe_add_func_uint8_t_u_u(5UL, func_105(l_1686, p_5)))) && (0xD85BL >= p_5)), g_222) > (*g_879))))));
        (*l_1689) = ((safe_sub_func_uint32_t_u_u(func_13(p_3), (*g_879))) & ((*l_1697) = (((*l_1696) = l_1695) != l_1695)));
        (*l_1689) = ((((**g_1036) | l_1690) >= (safe_lshift_func_int8_t_s_s(0L, 1))) < 0x5B2AL);
        (*l_1700) = (void*)0;
    }
    return p_3;
}







static int * func_6(int * p_7)
{
    int *l_21 = &g_10;
    int **l_20 = &l_21;
    unsigned *l_22 = (void*)0;
    unsigned *l_23 = &g_24;
    int l_25 = 9L;
    unsigned char *l_800 = &g_762;
    int *l_805 = &g_251;
    int l_821 = 0x3224B0CDL;
    unsigned char l_867 = 0x45L;
    unsigned char l_871 = 254UL;
    int l_878 = 4L;
    unsigned char l_940 = 0x41L;
    unsigned l_1000 = 0x0522D791L;
    unsigned **l_1043 = &g_879;
    unsigned ***l_1042 = &l_1043;
    short **l_1059 = &g_201;
    unsigned short *l_1073 = &g_640;
    if (((*l_805) = (safe_mul_func_int16_t_s_s(func_13(func_15(g_19, l_20, (((*l_23) = (((*l_20) = p_7) == (void*)0)) < l_25))), (g_638 && ((((*l_800)++) < (safe_mul_func_uint8_t_u_u((l_800 == l_800), g_640))) != l_25))))))
    {
        int l_808 = 9L;
        unsigned **l_816 = &l_22;
        unsigned ***l_815 = &l_816;
        unsigned char l_819 = 1UL;
        char *l_950 = &g_243;
        char **l_949 = &l_950;
        unsigned short l_1046 = 0x79E3L;
        (*l_805) &= (*g_202);
        (*l_20) = p_7;
        (*g_202) ^= (safe_add_func_int16_t_s_s(0x79FCL, l_808));
        if ((safe_rshift_func_int8_t_s_u(0x7FL, (safe_add_func_uint8_t_u_u((l_808 <= (+(safe_add_func_int8_t_s_s(((void*)0 == l_815), (safe_lshift_func_uint16_t_u_u(func_13(&l_808), (*l_805))))))), ((!(g_820 &= (((*l_805) == (l_808 & l_819)) >= l_808))) >= l_821))))))
        {
            int *l_828 = &g_779;
            int l_830 = (-1L);
            int l_931 = 0x1B4BBBE6L;
            char ***l_951 = (void*)0;
            int l_996 = 0xE577CF98L;
            int l_1020 = 0xAAD10DB9L;
            short *l_1034 = (void*)0;
            unsigned short *l_1061 = &g_640;
            int *l_1068 = &l_996;
            for (g_722 = 25; (g_722 <= 14); --g_722)
            {
                int l_829 = (-3L);
                int l_921 = 1L;
                if ((safe_div_func_int8_t_s_s((safe_div_func_int16_t_s_s((((((((g_638 == func_13(l_828)) >= g_248) >= l_829) && 0xA3F8FA77L) & l_830) > (safe_div_func_uint32_t_u_u(((*l_805) || l_829), 0xEE978D43L))) | l_829), g_640)), g_820)))
                {
                    char l_845 = 0xF8L;
                    unsigned l_848 = 0x905D4C12L;
                    int *l_854 = (void*)0;
                    int ***l_859 = &l_20;
                    for (l_819 = 14; (l_819 != 28); ++l_819)
                    {
                        unsigned short l_841 = 0x9CD1L;
                        short *l_842 = &g_97;
                        int *l_849 = &l_830;
                        (*l_805) = func_105((*g_202), (((*l_842) = (safe_mod_func_uint32_t_u_u((((*g_473) = func_105(((*l_805) = (safe_lshift_func_int16_t_s_s((g_221 &= (safe_sub_func_int16_t_s_s(l_841, ((*l_805) && (**g_197))))), 2))), (*l_828))) >= (*l_828)), (((*l_800) = (*l_828)) & (*l_828))))) >= l_841));
                        (*l_805) = (*g_202);
                        (*l_849) |= (safe_div_func_int8_t_s_s(func_85(((*l_816) = &g_272), (l_808 != (l_845 || ((safe_lshift_func_int8_t_s_u(((((0x4455F90AL && (-8L)) < ((**g_197) <= (-4L))) > l_848) ^ 0x4AL), 6)) && 0xE9815BADL)))), (*l_828)));
                        (*l_805) &= ((safe_div_func_int8_t_s_s((*l_828), g_762)) ^ l_829);
                    }
                    for (l_821 = 0; (l_821 >= 10); l_821 = safe_add_func_uint16_t_u_u(l_821, 1))
                    {
                        char l_866 = 0L;
                        short *l_868 = &g_97;
                        unsigned short *l_869 = &g_640;
                        (*g_202) = 7L;
                        l_854 = ((*l_20) = (void*)0);
                        (*l_805) = (safe_sub_func_uint16_t_u_u((l_829 ^ ((*l_828) && l_819)), (safe_div_func_uint16_t_u_u(((*l_869) = ((l_859 != (void*)0) || (safe_sub_func_uint8_t_u_u((safe_add_func_int8_t_s_s(((safe_mod_func_int32_t_s_s(func_98(((*l_868) |= l_867), g_722, l_23, g_820), l_808)) == 0x51L), l_808)), l_829)))), 0xFF6FL))));
                    }
                    if (((*l_828) = l_819))
                    {
                        return p_7;
                    }
                    else
                    {
                        char l_870 = 1L;
                        l_871 ^= l_870;
                        if ((*g_202))
                            break;
                        (*l_805) |= (!(*l_828));
                    }
                    g_881 = p_7;
                }
                else
                {
                    int *l_882 = (void*)0;
                    int *l_883 = &g_10;
                    int *l_884 = &g_293;
                    int *l_885 = &l_829;
                    int *l_886 = (void*)0;
                    int *l_887 = &l_808;
                    int *l_888 = &g_293;
                    int *l_889 = (void*)0;
                    int *l_890 = &g_251;
                    int *l_891 = &l_878;
                    int *l_892 = &l_808;
                    int *l_893 = &g_779;
                    int *l_894 = &l_878;
                    int *l_895 = &l_829;
                    int *l_896 = &l_821;
                    int *l_897 = &l_830;
                    int *l_898 = &g_251;
                    int *l_899 = &g_251;
                    int *l_900 = &g_293;
                    int *l_901 = &g_293;
                    int *l_902 = (void*)0;
                    int *l_903 = &l_821;
                    int *l_904 = &l_25;
                    int *l_905 = &g_779;
                    int *l_906 = &g_779;
                    int *l_907 = (void*)0;
                    int *l_908 = &g_779;
                    int *l_909 = (void*)0;
                    int *l_910 = &l_808;
                    int *l_911 = &l_808;
                    int *l_912 = (void*)0;
                    int *l_913 = &g_779;
                    int *l_914 = &g_293;
                    int *l_915 = &g_10;
                    int *l_916 = &l_878;
                    int *l_917 = &l_808;
                    int *l_918 = &g_251;
                    int *l_919 = &l_821;
                    int *l_920 = &l_808;
                    int l_922 = 0xA9D26E6DL;
                    int *l_923 = (void*)0;
                    int *l_924 = &l_921;
                    int *l_925 = &g_293;
                    int *l_926 = (void*)0;
                    int *l_927 = (void*)0;
                    int *l_928 = (void*)0;
                    int *l_929 = &l_922;
                    int *l_930 = &g_779;
                    int *l_932 = &l_922;
                    int *l_933 = &l_821;
                    int *l_934 = &l_931;
                    int *l_935 = &l_921;
                    int *l_936 = &g_293;
                    int *l_937 = &g_779;
                    int *l_938 = &g_293;
                    int *l_939 = &g_779;
                    unsigned l_943 = 0xD6EC7CFEL;
                    l_940++;
                    if (l_819)
                        break;
                    ++l_943;
                }
                (*l_20) = p_7;
                (*l_20) = p_7;
                (*l_805) = (g_762 < (l_951 == l_951));
            }
            for (g_97 = 0; (g_97 > (-13)); g_97 = safe_sub_func_uint16_t_u_u(g_97, 4))
            {
                int *l_954 = &g_779;
                int *l_955 = &l_878;
                int *l_956 = (void*)0;
                int *l_957 = &g_10;
                int *l_958 = &l_931;
                int *l_959 = (void*)0;
                int *l_960 = (void*)0;
                int *l_961 = &g_293;
                int *l_962 = &l_931;
                int *l_963 = &g_293;
                int *l_964 = &l_931;
                int *l_965 = (void*)0;
                int *l_966 = &g_779;
                int *l_967 = &l_808;
                int *l_968 = (void*)0;
                int *l_969 = &l_830;
                int *l_970 = &l_821;
                int *l_971 = &l_808;
                int *l_972 = &l_878;
                int *l_973 = &l_931;
                int *l_974 = &g_293;
                int *l_975 = &l_931;
                int *l_976 = (void*)0;
                int *l_977 = &g_293;
                int *l_978 = &l_830;
                int *l_979 = (void*)0;
                int *l_980 = &l_830;
                int *l_981 = &g_251;
                int *l_982 = (void*)0;
                int *l_983 = &l_931;
                int *l_984 = (void*)0;
                int *l_985 = &l_878;
                int *l_986 = &l_878;
                int *l_987 = (void*)0;
                int *l_988 = (void*)0;
                int *l_989 = &l_821;
                int *l_990 = &g_10;
                int *l_991 = &l_931;
                int *l_992 = &l_830;
                int *l_993 = &g_251;
                int *l_994 = &g_293;
                int *l_995 = &g_251;
                int *l_997 = &l_808;
                int *l_998 = &l_25;
                int *l_999 = &g_293;
                int *l_1004 = &l_25;
                int *l_1005 = &g_10;
                int *l_1006 = &l_830;
                int *l_1007 = &l_830;
                int l_1008 = 0xD0A279ABL;
                int *l_1009 = &g_779;
                int *l_1010 = &g_779;
                int *l_1011 = (void*)0;
                int *l_1012 = &g_779;
                int *l_1014 = &l_821;
                int *l_1015 = &g_251;
                int *l_1016 = &l_25;
                int *l_1017 = (void*)0;
                int *l_1018 = &l_821;
                int *l_1021 = &l_1020;
                int *l_1022 = &l_830;
                int *l_1023 = &g_293;
                int *l_1024 = &g_779;
                int *l_1025 = &l_808;
                int *l_1026 = &l_931;
                int *l_1027 = &l_25;
                int *l_1028 = (void*)0;
                unsigned short *l_1032 = (void*)0;
                unsigned short *l_1033 = &g_1029;
                --l_1000;
                --g_1029;
                if (func_105((*l_990), ((*l_1033) = ((*g_879) != l_819))))
                {
                    l_828 = func_108(l_1034);
                }
                else
                {
                    (*l_1004) = (((*g_202) | ((void*)0 == g_1035)) || (safe_add_func_int32_t_s_s(1L, ((*l_994) = (safe_sub_func_int16_t_s_s((l_808 = ((*l_993) ^ 6L)), (l_1042 != (void*)0)))))));
                }
            }
            if ((safe_rshift_func_uint16_t_u_u(0x36FAL, l_1046)))
            {
lbl_1058:
                for (g_762 = (-29); (g_762 >= 58); ++g_762)
                {
                    short l_1057 = 0xF646L;
                    (*l_828) = (safe_lshift_func_uint16_t_u_s((~(safe_rshift_func_uint8_t_u_s((&l_1043 != &g_197), (safe_add_func_int16_t_s_s((safe_add_func_int8_t_s_s(l_1057, 253UL)), l_1046))))), 6));
                }
            }
            else
            {
                short ***l_1060 = &l_1059;
                if (g_293)
                    goto lbl_1058;
                (*l_1060) = l_1059;
            }
            (*l_1068) ^= func_98((*l_828), func_105((*l_828), ((*l_1061)++)), &g_272, (safe_div_func_int8_t_s_s((*l_805), (safe_add_func_uint8_t_u_u(0x81L, 0UL)))));
        }
        else
        {
            int l_1069 = (-1L);
            unsigned short *l_1070 = &l_1046;
            (*g_881) |= (((void*)0 == (*g_472)) > ((*l_1070) = (!l_1069)));
            return &g_251;
        }
    }
    else
    {
        unsigned l_1080 = 0xE40B8747L;
        int l_1094 = 0x3E527D7FL;
        unsigned short l_1162 = 0xE67EL;
        unsigned short l_1165 = 0x358DL;
        short **l_1175 = (void*)0;
        int ***l_1176 = (void*)0;
        int l_1177 = 0xD671444BL;
        for (l_871 = 0; (l_871 >= 14); ++l_871)
        {
            int l_1076 = 1L;
            int l_1077 = (-4L);
            (*l_805) = ((void*)0 == l_1073);
            for (g_779 = 23; (g_779 != (-25)); g_779 = safe_sub_func_int16_t_s_s(g_779, 4))
            {
                int *l_1078 = &l_25;
                int *l_1079 = (void*)0;
                unsigned short l_1086 = 7UL;
                int l_1121 = 0xD3616AAEL;
                int l_1125 = 0L;
                int l_1151 = 0xDACBE4A6L;
                short *l_1166 = &g_97;
                --l_1080;
                for (g_722 = 21; (g_722 != (-27)); g_722--)
                {
                    int l_1085 = 0x174BC46BL;
                    int l_1112 = 0xCCCA1DE5L;
                    int l_1115 = 0xD4347E3FL;
                    if (l_1085)
                        break;
                    if (l_1086)
                    {
                        unsigned short l_1087 = 0x792FL;
                        l_1087--;
                        l_1094 = ((l_1077 == ((*g_881) & (safe_add_func_uint32_t_u_u(((*l_805) >= 250UL), ((safe_mul_func_uint8_t_u_u((**g_472), ((void*)0 != &l_1087))) >= 0x5EL))))) | l_1085);
                    }
                    else
                    {
                        int *l_1095 = &g_293;
                        int *l_1096 = &l_1076;
                        int *l_1097 = &l_1076;
                        int *l_1098 = &g_293;
                        int *l_1099 = &l_1077;
                        int *l_1100 = &g_251;
                        int *l_1101 = &l_821;
                        int *l_1102 = (void*)0;
                        int *l_1103 = &g_251;
                        int *l_1104 = &l_25;
                        int *l_1105 = (void*)0;
                        int *l_1106 = &l_821;
                        int *l_1107 = &g_251;
                        int *l_1108 = &l_1077;
                        int *l_1109 = (void*)0;
                        int *l_1110 = &l_821;
                        int *l_1111 = (void*)0;
                        int *l_1113 = &l_1077;
                        int *l_1114 = &g_251;
                        int *l_1116 = &l_1076;
                        int *l_1117 = &g_10;
                        int l_1118 = 0x2E4C1A70L;
                        int *l_1119 = &l_1076;
                        int *l_1120 = (void*)0;
                        int *l_1122 = &l_878;
                        int *l_1123 = &g_10;
                        int *l_1124 = (void*)0;
                        int *l_1126 = (void*)0;
                        int *l_1127 = &l_25;
                        int *l_1128 = &l_25;
                        int *l_1129 = (void*)0;
                        int *l_1130 = (void*)0;
                        int *l_1131 = &l_1121;
                        int *l_1132 = &l_878;
                        int *l_1133 = (void*)0;
                        int *l_1134 = &l_1121;
                        int *l_1135 = (void*)0;
                        int *l_1136 = (void*)0;
                        int *l_1137 = &l_1076;
                        int *l_1138 = (void*)0;
                        int *l_1139 = &l_1094;
                        int *l_1140 = &g_251;
                        int *l_1141 = &l_1112;
                        int *l_1142 = &l_1115;
                        int *l_1143 = &l_25;
                        int *l_1144 = &l_1077;
                        int *l_1145 = (void*)0;
                        int *l_1146 = &g_293;
                        int *l_1147 = &g_251;
                        int *l_1148 = (void*)0;
                        int *l_1150 = &l_878;
                        ++g_1152;
                    }
                }
                (*l_805) = (safe_add_func_int8_t_s_s(((safe_rshift_func_int16_t_s_s(g_1159, ((*g_197) == &l_1080))) || (*l_1078)), (((l_1162--) & (g_221 == ((*l_1166) = l_1165))) != ((safe_add_func_uint8_t_u_u((*l_1078), ((*l_805) < ((safe_sub_func_int16_t_s_s(g_174, l_1077)) >= l_1165)))) <= l_1077))));
            }
        }
        (*g_881) = (safe_rshift_func_int16_t_s_u((safe_mod_func_int16_t_s_s(((((void*)0 == l_1175) < ((void*)0 == l_1176)) | l_1162), ((*l_805) || ((*g_202) |= ((*l_805) = (l_1177 >= ((*g_1037) > ((*l_805) && (*l_805))))))))), 1));
        return p_7;
    }
    for (g_820 = 0; (g_820 > (-12)); g_820 = safe_sub_func_uint16_t_u_u(g_820, 8))
    {
        unsigned char *l_1182 = &l_871;
        (*l_805) = ((0xD9L < func_13(p_7)) | (safe_add_func_uint8_t_u_u(((void*)0 != l_1182), (!(-3L)))));
    }
    return p_7;
}







static short func_13(int * p_14)
{
    int l_788 = 0x9174981BL;
    int *l_789 = &g_779;
    int *l_790 = (void*)0;
    int *l_796 = (void*)0;
    int *l_797 = &g_293;
    short *l_798 = &g_97;
    int *l_799 = &l_788;
    g_10 ^= ((*l_789) |= l_788);
    (*l_799) &= func_98((*l_789), (((*l_798) |= ((*l_789) >= (safe_add_func_uint32_t_u_u((safe_sub_func_uint8_t_u_u((*l_789), ((+(0x15L && (safe_unary_minus_func_int8_t_s(((**g_472) != ((*l_789) < 0UL)))))) && (!((*l_797) &= (*l_789)))))), (*l_789))))) < 0x4DCAL), &g_222, g_462);
    return (*l_789);
}







static int * func_15(int ** p_16, int ** p_17, unsigned char p_18)
{
    unsigned l_26 = 0UL;
    int l_29 = (-1L);
    int *l_30 = &l_29;
    int *l_31 = &l_29;
    int *l_32 = &l_29;
    int l_33 = 0x2717F403L;
    int *l_34 = &l_29;
    int l_35 = (-5L);
    int *l_36 = &g_10;
    int *l_37 = (void*)0;
    int *l_38 = &l_35;
    int *l_39 = &g_10;
    int *l_40 = (void*)0;
    int *l_41 = &l_33;
    int l_42 = 0xB0866193L;
    int *l_43 = &l_42;
    int *l_44 = &g_10;
    int *l_45 = &l_29;
    int *l_46 = (void*)0;
    int *l_47 = &g_10;
    int *l_48 = &g_10;
    int *l_49 = &l_35;
    int *l_50 = &l_29;
    int *l_51 = &l_42;
    int *l_52 = &l_35;
    int l_53 = 0xAD7494DFL;
    int *l_54 = &l_29;
    int *l_55 = &l_33;
    int *l_56 = &g_10;
    int *l_57 = &l_29;
    int *l_58 = (void*)0;
    int *l_59 = &l_33;
    int l_60 = 0x35DD253DL;
    int *l_61 = &l_29;
    int *l_62 = &l_35;
    int *l_63 = &l_53;
    int l_64 = 0x39150040L;
    int *l_65 = &l_29;
    int *l_66 = &l_29;
    int *l_67 = &l_53;
    int *l_68 = &l_29;
    int *l_69 = &l_33;
    int *l_70 = &l_35;
    int *l_71 = &l_35;
    int *l_72 = &g_10;
    int *l_73 = (void*)0;
    int *l_74 = (void*)0;
    unsigned *l_92 = &l_26;
    unsigned **l_642 = &l_92;
    unsigned ***l_641 = &l_642;
    char *l_651 = &g_243;
    char **l_739 = (void*)0;
    char ***l_738 = &l_739;
    short *l_761 = &g_221;
    unsigned l_785 = 0xA3EE318FL;
    ++l_26;
    l_29 = l_26;
    g_75--;
    for (l_42 = 14; (l_42 != 6); l_42 = safe_sub_func_uint16_t_u_u(l_42, 1))
    {
        unsigned char l_82 = 0UL;
        int l_681 = 1L;
        int l_783 = 0x8872C66EL;
        l_59 = (*p_17);
        for (g_24 = 0; (g_24 >= 38); g_24++)
        {
            (*l_44) ^= (p_18 | l_82);
        }
        if ((*l_55))
        {
            return (*p_17);
        }
        else
        {
            unsigned l_639 = 4294967295UL;
            int l_645 = 0xC2CBC234L;
            int *l_652 = &g_251;
            int l_679 = 0xBFDF325FL;
            int l_688 = 0L;
            int l_697 = 1L;
            int l_698 = 0x71C5CC86L;
            char l_708 = 1L;
            int l_731 = 0xA618006FL;
            short *l_760 = &g_97;
            if (((func_85(func_88(&l_26, (*l_39), l_92), p_18) <= (g_638 > ((l_639 || g_638) == g_640))) ^ g_638))
            {
                (*l_57) |= ((*g_202) = (&g_197 != l_641));
            }
            else
            {
                int l_646 = 0x9D0CF3FBL;
                int l_647 = 1L;
                int l_784 = (-1L);
                (*p_17) = (void*)0;
                for (l_64 = 20; (l_64 != (-23)); l_64 = safe_sub_func_int8_t_s_s(l_64, 6))
                {
                    unsigned l_648 = 0x0BEB1297L;
                    int l_653 = (-1L);
                    int l_677 = 8L;
                    int l_696 = 0x9B08B18FL;
                    --l_648;
                }
            }
        }
        if (p_18)
            break;
    }
    return (*p_17);
}







static int func_85(unsigned * p_86, unsigned char p_87)
{
    int *l_594 = &g_10;
    int *l_595 = &g_10;
    int l_596 = 0x131A39DEL;
    int *l_597 = &l_596;
    int *l_598 = (void*)0;
    int *l_599 = &g_251;
    int *l_600 = &g_251;
    int *l_601 = &g_293;
    int *l_602 = &g_10;
    int *l_603 = &g_293;
    int *l_604 = &g_251;
    int *l_605 = (void*)0;
    int *l_606 = &g_251;
    int *l_607 = (void*)0;
    int l_608 = (-5L);
    int l_609 = 0x60089F56L;
    int l_610 = 0x3399B6C0L;
    int *l_611 = &l_608;
    int *l_612 = &l_609;
    int *l_613 = (void*)0;
    int *l_614 = &g_293;
    int *l_615 = &l_609;
    int *l_616 = &g_10;
    int l_617 = 0x026E7F9DL;
    int *l_618 = &l_596;
    int *l_619 = &l_608;
    unsigned char l_626 = 0x57L;
    int *l_632 = (void*)0;
    char *l_636 = &g_248;
    char **l_635 = &l_636;
    --g_620;
    if (((void*)0 != p_86))
    {
        unsigned *l_624 = (void*)0;
        unsigned **l_623 = &l_624;
        unsigned *l_625 = &g_24;
        unsigned *l_630 = &g_222;
        unsigned **l_629 = &l_630;
        int **l_631 = &l_599;
        (*l_631) = func_88((l_625 = ((*l_623) = &g_222)), (l_626 >= (safe_div_func_int32_t_s_s((-1L), (g_221 || p_87)))), ((*l_629) = &g_272));
        (*l_631) = l_632;
        return p_87;
    }
    else
    {
        for (g_97 = 26; (g_97 == 1); --g_97)
        {
            char ***l_637 = &l_635;
            (*l_637) = l_635;
            if ((*g_202))
                continue;
        }
    }
    return p_87;
}







static unsigned * func_88(unsigned * p_89, unsigned p_90, unsigned * p_91)
{
    int l_95 = 0x64292628L;
    short *l_96 = &g_97;
    unsigned *l_144 = &g_24;
    unsigned **l_143 = &l_144;
    unsigned *l_146 = &g_24;
    unsigned **l_145 = &l_146;
    int *l_147 = &g_10;
    int ***l_167 = &g_19;
    unsigned short *l_488 = &g_296;
    unsigned char **l_510 = &g_473;
    char l_592 = (-4L);
    unsigned char l_593 = 0x34L;
lbl_551:
    (*l_147) = ((safe_add_func_uint32_t_u_u(((((*l_96) = l_95) < ((*l_488) = (func_98((safe_add_func_uint32_t_u_u((func_105(((*l_147) = (((*l_145) = ((*l_143) = func_108(l_96))) == &g_75)), g_24) && ((*p_89) = (safe_mod_func_int32_t_s_s((((*l_167) = g_19) != (void*)0), ((*l_147) = (g_137 & (*l_147))))))), p_90)), p_90, &g_24, l_95) < 0xC128L))) >= 5UL), 0x3E55E6CBL)) < g_272);
    if (((safe_mod_func_int8_t_s_s((safe_mul_func_uint16_t_u_u((safe_sub_func_int16_t_s_s((safe_rshift_func_int16_t_s_u(func_98(((safe_rshift_func_uint16_t_u_u((safe_add_func_uint8_t_u_u(0x35L, ((func_105(p_90, (((*l_488) &= g_272) >= (safe_unary_minus_func_int32_t_s((!(g_97 ^ p_90)))))) ^ p_90) || (*g_473)))), 5)) == (p_90 != 1L)), g_272, &g_24, g_251), p_90)), l_95)), 0x1E09L)), p_90)) <= 1L))
    {
        unsigned char l_524 = 0x90L;
        int l_543 = 0xC3E4EA62L;
        unsigned *l_546 = &g_24;
        short *l_547 = &g_97;
        int *l_561 = &g_293;
        char *l_564 = &g_243;
        for (g_248 = 19; (g_248 >= (-28)); g_248--)
        {
            char l_511 = 0x4DL;
            int l_523 = 7L;
            unsigned *l_545 = (void*)0;
            int *l_548 = &g_10;
            short *l_570 = &g_221;
            (*l_147) = (safe_div_func_int32_t_s_s((((safe_mul_func_int8_t_s_s(func_105((safe_sub_func_uint8_t_u_u(((*l_147) || (l_510 == (void*)0)), 2UL)), p_90), l_511)) <= (~(safe_rshift_func_uint16_t_u_u(((safe_mod_func_uint8_t_u_u(((**g_472) = p_90), 0x7EL)) < p_90), p_90)))) | g_221), l_511));
            if (((*l_147) = func_105(p_90, p_90)))
            {
                int l_519 = 9L;
                unsigned *l_525 = &g_222;
                unsigned *l_526 = &g_222;
                for (g_24 = (-14); (g_24 > 1); g_24 = safe_add_func_uint8_t_u_u(g_24, 6))
                {
                    int *l_518 = &g_251;
                    if ((*g_202))
                        break;
                    (*l_518) |= ((*l_147) = ((void*)0 == &g_202));
                }
                (*l_147) = (*g_202);
                if (l_519)
                    break;
                if ((safe_add_func_int32_t_s_s((((l_519 & ((*l_96) &= 0x3E18L)) == (((g_522 = &g_296) == (void*)0) >= ((!0UL) & func_98(((!((*g_473) = ((((g_137 || (l_523 &= p_90)) == 0xE5EFL) && 0x59L) < (-3L)))) && l_519), l_524, l_525, g_272)))) > g_222), 0x4DE006D2L)))
                {
                    return l_526;
                }
                else
                {
                    unsigned l_527 = 0x967EEF1BL;
                    unsigned char *l_539 = &g_174;
                    unsigned char *l_540 = (void*)0;
                    if (l_511)
                    {
                        ++l_527;
                    }
                    else
                    {
                        int l_544 = 0L;
                        (*l_147) = l_524;
                        (*g_202) = (safe_add_func_int8_t_s_s(8L, (safe_mul_func_int8_t_s_s((~((*l_147) & ((l_544 = ((safe_unary_minus_func_int32_t_s((0L != (((*l_539) ^= (safe_lshift_func_uint8_t_u_s((((((*l_510) = l_539) != (l_540 = &l_524)) || 0xF0L) | ((1UL && (1L != (safe_add_func_int16_t_s_s(p_90, p_90)))) > l_543)), 3))) ^ p_90)))) > (*g_522))) != 9UL))), 0x31L))));
                        return l_545;
                    }
                    if (p_90)
                        break;
                }
            }
            else
            {
                (*l_147) = p_90;
                return l_546;
            }
            if (p_90)
            {
                unsigned l_560 = 4294967287UL;
                l_548 = func_108(l_547);
                if (p_90)
                {
                    int l_554 = 1L;
                    int **l_556 = &g_202;
                    for (l_511 = (-16); (l_511 < 16); l_511 = safe_add_func_uint16_t_u_u(l_511, 1))
                    {
                        int *l_555 = &g_293;
                        if (g_221)
                            goto lbl_551;
                        if ((*l_147))
                            break;
                        (*l_555) |= func_98(p_90, (safe_mul_func_int16_t_s_s(l_524, (l_554 = 0x07FCL))), func_108(l_96), g_75);
                    }
                    (*l_556) = (void*)0;
                }
                else
                {
                    int *l_562 = &g_10;
                    if (p_90)
                    {
                        (*g_202) |= (-1L);
                        (*l_147) = (-6L);
                        (*l_548) = (safe_unary_minus_func_int16_t_s((+((*p_91) || func_105((safe_lshift_func_uint16_t_u_u(((l_560 | ((**g_197) && 0x8EC09F5AL)) || g_10), 13)), p_90)))));
                    }
                    else
                    {
                        l_561 = func_108(&g_221);
                        (*l_548) = ((*p_91) <= (*g_202));
                        l_562 = func_108(&g_97);
                    }
                    (*l_562) ^= p_90;
                }
                g_202 = p_91;
            }
            else
            {
                char *l_565 = &g_243;
                int l_571 = 0x0A2A0B72L;
                if ((*l_147))
                {
                    unsigned ***l_563 = &l_145;
                    (*l_563) = &p_89;
                    (*l_561) = ((*g_202) = (l_564 == l_565));
                }
                else
                {
                    int l_585 = 1L;
                    if ((l_571 ^= ((9L || ((safe_rshift_func_uint16_t_u_s((*g_522), (*l_147))) < (safe_add_func_uint16_t_u_u(((void*)0 != &g_19), (l_547 == l_570))))) && ((*l_548) <= g_24))))
                    {
                        unsigned l_576 = 1UL;
                        unsigned char **l_579 = &g_473;
                        unsigned char **l_580 = &g_473;
                        (*l_548) = func_98((*l_548), (safe_sub_func_uint8_t_u_u(p_90, (safe_mod_func_int32_t_s_s(l_576, (safe_mul_func_int8_t_s_s(((l_579 = l_510) == l_580), (safe_sub_func_int32_t_s_s(((((**g_472) |= (((*p_89) = (*p_91)) && (*l_147))) ^ p_90) <= ((((safe_div_func_int16_t_s_s((l_565 == &g_248), (*g_522))) ^ (-6L)) < l_585) != 0xD1EDL)), 2L)))))))), &g_272, p_90);
                        if (l_576)
                            continue;
                        g_202 = func_108(l_488);
                        if (l_576)
                            continue;
                    }
                    else
                    {
                        return &g_272;
                    }
                }
                if ((*l_561))
                    continue;
                (*g_202) = (-1L);
            }
        }
        (*l_147) = (*g_202);
        (*g_202) = 0x643F7BD0L;
    }
    else
    {
        unsigned *l_586 = (void*)0;
        return l_586;
    }
    (*l_147) = (safe_add_func_uint16_t_u_u(p_90, ((safe_rshift_func_uint16_t_u_u((func_98(p_90, ((void*)0 == l_96), ((*l_143) = &g_222), ((safe_unary_minus_func_uint8_t_u(((**g_472) = func_105((*l_147), l_592)))) < ((g_221 != 255UL) >= p_90))) >= p_90), l_593)) && 0x96E35F7FL)));
    return &g_222;
}







static short func_98(short p_99, short p_100, unsigned * p_101, unsigned p_102)
{
    int ***l_172 = (void*)0;
    int l_196 = (-1L);
    unsigned l_214 = 0x057ECED5L;
    short *l_274 = &g_221;
    int l_354 = 1L;
    int l_391 = (-5L);
    int l_401 = 1L;
    int l_407 = 0xAFD5ADA9L;
    int l_420 = 0x1CBBB26BL;
    int l_421 = 0L;
    int *l_465 = &l_407;
    int **l_466 = &g_202;
    for (g_24 = 23; (g_24 >= 38); g_24 = safe_add_func_uint8_t_u_u(g_24, 7))
    {
        unsigned char *l_173 = &g_174;
        char l_207 = 3L;
        int l_219 = 0xDAE681B6L;
        int **l_257 = (void*)0;
        int l_347 = 1L;
        int *l_363 = &l_219;
        int *l_364 = &g_10;
        int *l_365 = &l_196;
        int *l_366 = &l_196;
        int *l_367 = (void*)0;
        int *l_368 = &l_347;
        int *l_369 = &l_347;
        int *l_370 = &l_354;
        int l_371 = 1L;
        int *l_372 = &l_196;
        int l_373 = 1L;
        int *l_374 = &l_196;
        int *l_375 = &l_347;
        int *l_376 = &l_354;
        int *l_377 = (void*)0;
        int *l_378 = &l_354;
        int *l_379 = &l_371;
        int l_380 = 0x507BA803L;
        int *l_381 = &g_10;
        int l_382 = 4L;
        int *l_383 = &l_196;
        int *l_384 = &l_371;
        int *l_385 = &g_10;
        int *l_386 = (void*)0;
        int *l_387 = &g_293;
        int *l_388 = (void*)0;
        int *l_389 = &l_371;
        int *l_390 = &l_347;
        int *l_392 = &g_293;
        int *l_393 = &l_219;
        int *l_394 = (void*)0;
        int *l_395 = &l_380;
        int *l_396 = &l_382;
        int *l_397 = &l_354;
        int *l_398 = (void*)0;
        int *l_399 = (void*)0;
        int *l_400 = &g_251;
        int *l_402 = &l_391;
        int *l_403 = &g_10;
        int *l_404 = &g_10;
        int *l_405 = &l_380;
        int *l_406 = &l_373;
        int *l_408 = (void*)0;
        int *l_409 = (void*)0;
        int *l_410 = &g_293;
        int *l_411 = &l_382;
        int *l_412 = &l_407;
        int *l_413 = (void*)0;
        int *l_414 = &l_347;
        int *l_415 = &l_391;
        int *l_416 = &g_10;
        int *l_417 = &l_196;
        int *l_418 = &l_407;
        int *l_419 = &l_196;
        int *l_422 = (void*)0;
        int *l_423 = &l_421;
        int *l_424 = &l_382;
        int *l_425 = &g_251;
        int *l_426 = &l_219;
        int *l_427 = &l_391;
        int *l_428 = &l_196;
        int *l_429 = &l_382;
        int *l_430 = &l_196;
        int *l_431 = &l_347;
        int *l_432 = &l_420;
        int *l_433 = (void*)0;
        int *l_434 = (void*)0;
        int *l_435 = &l_382;
        int *l_436 = &l_401;
        int *l_437 = &l_354;
        int *l_438 = &g_10;
        int *l_439 = &g_251;
        int *l_440 = &l_354;
        int *l_441 = &g_10;
        int *l_442 = &l_391;
        int *l_443 = (void*)0;
        int *l_444 = &l_219;
        int *l_445 = &g_10;
        int *l_446 = &l_380;
        int *l_447 = &l_371;
        int *l_448 = &l_421;
        int *l_449 = &l_219;
        int *l_450 = &l_401;
        int *l_451 = &g_293;
        int *l_452 = &l_407;
        int *l_453 = &l_373;
        int *l_454 = &g_10;
        int *l_455 = (void*)0;
        int *l_456 = &l_421;
        int *l_457 = &l_196;
        int *l_458 = &l_391;
        int *l_459 = &l_401;
        int l_460 = (-1L);
        int *l_461 = &l_371;
    }
    (*l_466) = p_101;
    for (g_174 = 11; (g_174 <= 12); g_174 = safe_add_func_int16_t_s_s(g_174, 1))
    {
        int l_474 = 0xF2E3D422L;
        unsigned char *l_483 = &g_484;
        char *l_485 = (void*)0;
        char *l_486 = &g_243;
        int l_487 = 0L;
        l_487 &= (func_105((0L > (safe_lshift_func_int8_t_s_s(((*l_486) = (((safe_unary_minus_func_int16_t_s(((void*)0 != g_472))) >= (((*l_274) ^= ((**l_466) > (*g_202))) & l_474)) | func_105(p_100, (safe_sub_func_int16_t_s_s((safe_sub_func_int16_t_s_s((**l_466), (safe_lshift_func_uint8_t_u_u(((((safe_mul_func_int8_t_s_s((((*l_483) |= (**g_472)) != (**g_472)), (*g_473))) < 0xC08B2C5EL) != 1UL) > (*g_198)), (*g_473))))), (**l_466)))))), l_474))), (*l_465)) != l_474);
    }
    return (**l_466);
}







static int func_105(int p_106, unsigned short p_107)
{
    unsigned l_152 = 1UL;
    int *l_163 = &g_10;
    int **l_164 = &l_163;
    (*l_163) = (safe_sub_func_int8_t_s_s(((p_107 & (safe_rshift_func_uint8_t_u_u((252UL & p_106), l_152))) ^ (safe_add_func_uint32_t_u_u((safe_mul_func_uint16_t_u_u(l_152, l_152)), ((safe_lshift_func_uint8_t_u_s((l_152 ^ (safe_mod_func_int8_t_s_s(g_75, (safe_sub_func_int16_t_s_s((p_107 <= p_107), g_24))))), p_107)) || 0UL)))), 255UL));
    (*l_164) = &g_10;
    return p_106;
}







static unsigned * func_108(short * p_109)
{
    unsigned l_114 = 0UL;
    int *l_115 = &g_10;
    int *l_116 = &g_10;
    int *l_117 = &g_10;
    int *l_118 = &g_10;
    int *l_119 = &g_10;
    int l_120 = 0x239B7597L;
    int *l_121 = &l_120;
    int *l_122 = &g_10;
    int *l_123 = &l_120;
    int *l_124 = &l_120;
    int l_125 = 0xA5B821BFL;
    int *l_126 = &g_10;
    int *l_127 = (void*)0;
    int *l_128 = &g_10;
    int *l_129 = &l_120;
    int l_130 = 8L;
    int *l_131 = &g_10;
    int *l_132 = (void*)0;
    int *l_133 = (void*)0;
    int *l_134 = (void*)0;
    int *l_135 = (void*)0;
    int *l_136 = &l_130;
    unsigned *l_140 = &l_114;
    l_114 ^= (safe_rshift_func_uint16_t_u_s((safe_rshift_func_int8_t_s_u(g_10, 3)), 4));
    ++g_137;
    (*l_136) = ((++(*l_140)) ^ (*l_116));
    return &g_24;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_10, "g_10", print_hash_value);
    transparent_crc(g_24, "g_24", print_hash_value);
    transparent_crc(g_75, "g_75", print_hash_value);
    transparent_crc(g_97, "g_97", print_hash_value);
    transparent_crc(g_137, "g_137", print_hash_value);
    transparent_crc(g_174, "g_174", print_hash_value);
    transparent_crc(g_221, "g_221", print_hash_value);
    transparent_crc(g_222, "g_222", print_hash_value);
    transparent_crc(g_243, "g_243", print_hash_value);
    transparent_crc(g_248, "g_248", print_hash_value);
    transparent_crc(g_251, "g_251", print_hash_value);
    transparent_crc(g_272, "g_272", print_hash_value);
    transparent_crc(g_293, "g_293", print_hash_value);
    transparent_crc(g_296, "g_296", print_hash_value);
    transparent_crc(g_360, "g_360", print_hash_value);
    transparent_crc(g_462, "g_462", print_hash_value);
    transparent_crc(g_484, "g_484", print_hash_value);
    transparent_crc(g_620, "g_620", print_hash_value);
    transparent_crc(g_638, "g_638", print_hash_value);
    transparent_crc(g_640, "g_640", print_hash_value);
    transparent_crc(g_683, "g_683", print_hash_value);
    transparent_crc(g_722, "g_722", print_hash_value);
    transparent_crc(g_735, "g_735", print_hash_value);
    transparent_crc(g_762, "g_762", print_hash_value);
    transparent_crc(g_779, "g_779", print_hash_value);
    transparent_crc(g_780, "g_780", print_hash_value);
    transparent_crc(g_820, "g_820", print_hash_value);
    transparent_crc(g_880, "g_880", print_hash_value);
    transparent_crc(g_1003, "g_1003", print_hash_value);
    transparent_crc(g_1013, "g_1013", print_hash_value);
    transparent_crc(g_1019, "g_1019", print_hash_value);
    transparent_crc(g_1029, "g_1029", print_hash_value);
    transparent_crc(g_1149, "g_1149", print_hash_value);
    transparent_crc(g_1152, "g_1152", print_hash_value);
    transparent_crc(g_1159, "g_1159", print_hash_value);
    transparent_crc(g_1193, "g_1193", print_hash_value);
    transparent_crc(g_1262, "g_1262", print_hash_value);
    transparent_crc(g_1282, "g_1282", print_hash_value);
    transparent_crc(g_1311, "g_1311", print_hash_value);
    transparent_crc(g_1521, "g_1521", print_hash_value);
    transparent_crc(g_1522, "g_1522", print_hash_value);
    transparent_crc(g_1552, "g_1552", print_hash_value);
    transparent_crc(g_1577, "g_1577", print_hash_value);
    transparent_crc(g_1630, "g_1630", print_hash_value);
    transparent_crc(g_1660, "g_1660", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
