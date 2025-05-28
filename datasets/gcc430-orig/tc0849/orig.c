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
   int f0;
   char f1;
   short f2;
   signed f3 : 15;
};

union U1 {
   unsigned f0 : 7;
   char * f1;
};

union U2 {
   unsigned char f0;
   unsigned char f1;
};

union U3 {
   unsigned char f0;
   unsigned f1 : 16;
   unsigned short f2;
   int f3;
   unsigned f4;
};

union U4 {
   int f0;
   signed f1 : 22;
   unsigned char f2;
   unsigned f3;
   short f4;
};

union U5 {
   unsigned f0;
   signed f1 : 11;
};


static int g_4 = (-10L);
static union U1 g_25 = {0xEA445A8CL};
static int g_36 = 0x54E7F13BL;
static char g_73 = 9L;
static char *g_72 = &g_73;
static union U3 g_76 = {0x62L};
static union U3 *g_75 = &g_76;
static int g_84 = 0x7F9BD85DL;
static union U0 g_86 = {0xBDFAC86EL};
static unsigned g_117 = 0x51CF616DL;
static unsigned g_172 = 2UL;
static short g_181 = (-5L);
static unsigned g_182 = 0UL;
static unsigned short g_185 = 9UL;
static unsigned g_188 = 4294967295UL;
static union U5 g_201 = {4294967293UL};
static union U4 g_231 = {-4L};
static char g_233 = 0x5DL;
static int *g_241 = (void*)0;
static short g_392 = 0xA66EL;
static unsigned g_410 = 0x9A6BD165L;
static char g_413 = 3L;
static short g_414 = 0x0DCBL;
static unsigned g_432 = 4294967295UL;
static int g_507 = (-1L);
static unsigned g_521 = 0xA16ACC42L;
static int g_590 = (-5L);
static unsigned g_602 = 4294967294UL;
static union U1 g_695 = {0xCFDCDEC2L};
static char g_785 = 0xFEL;
static unsigned short g_802 = 0x046BL;
static char g_910 = 0xEFL;
static short g_915 = (-1L);
static unsigned g_931 = 0xA107BAB8L;
static int g_1017 = 0x422A79D0L;
static unsigned char g_1028 = 0xF3L;
static union U5 *g_1122 = &g_201;
static union U2 g_1180 = {0x6DL};
static union U2 *g_1196 = &g_1180;
static union U2 **g_1195 = &g_1196;
static unsigned char g_1321 = 0x68L;
static int g_1525 = 0x99D0C57EL;
static unsigned g_1539 = 1UL;
static char g_1779 = 0L;



static unsigned func_1(void);
static char func_21(int p_22);
static int func_23(union U1 p_24);
static int * func_27(char * p_28, char * p_29, char * p_30, union U3 p_31);
static char * func_32(char * p_33);
static union U1 func_46(unsigned p_47, int * p_48, char * p_49);
static int * func_50(union U0 p_51, char * p_52, union U4 p_53, int * p_54);
static union U0 func_55(char * p_56, unsigned char p_57, char * p_58, union U4 p_59);
static char * func_60(char * p_61, short p_62, int * p_63, int * p_64, char * p_65);
static char * func_66(int * p_67, char * p_68, int * p_69, char * p_70, unsigned char p_71);
static unsigned func_1(void)
{
    int l_2 = 0x17059141L;
    int *l_3 = &g_4;
    int *l_1830 = (void*)0;
    int *l_1831 = &g_84;
    int **l_1832 = &l_1831;
    (*l_3) = l_2;
    (*l_1831) |= ((safe_div_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s((safe_mod_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u((&g_4 == l_3), 6)), (safe_add_func_int16_t_s_s((safe_rshift_func_int8_t_s_u((*l_3), (*l_3))), ((*l_3) | func_21(func_23(g_25))))))), g_1525)), (*l_3))), g_802)), 1L)) == g_117);
    (*l_1832) = l_3;
    return g_188;
}







static char func_21(int p_22)
{
    char *l_34 = (void*)0;
    int *l_1415 = &g_1017;
    char *l_1416 = &g_413;
    union U3 l_1417 = {0x53L};
    int **l_1828 = (void*)0;
    int **l_1829 = &l_1415;
    (*l_1829) = func_27(func_32(l_34), func_66(&g_4, func_66(&p_22, func_66(l_1415, func_66(&g_590, l_34, &g_84, l_34, g_432), &g_4, l_34, (*l_1415)), l_1415, l_34, g_188), l_1415, l_34, g_231.f4), l_1416, l_1417);
    (*l_1829) = (*l_1829);
    return p_22;
}







static int func_23(union U1 p_24)
{
    unsigned char l_26 = 1UL;
    return l_26;
}







static int * func_27(char * p_28, char * p_29, char * p_30, union U3 p_31)
{
    union U4 *l_1420 = &g_231;
    int *l_1421 = &g_507;
    int *l_1426 = (void*)0;
    int *l_1427 = &g_1017;
    int l_1444 = 0xDFCC8753L;
    int l_1476 = 0L;
    int l_1491 = 0x9F8E03CEL;
    int l_1503 = 0L;
    int l_1506 = 5L;
    int l_1512 = (-2L);
    (*l_1421) = ((safe_sub_func_uint32_t_u_u((&g_231 == l_1420), 0xAD882D6AL)) | (&g_72 != &g_72));
    (*l_1427) |= (safe_add_func_int32_t_s_s((safe_add_func_int8_t_s_s(((*l_1421) && (-4L)), ((*l_1421) ^ 0xD7L))), (g_188 == p_31.f0)));
    if ((g_172 == (*l_1427)))
    {
        int *l_1428 = &g_84;
        int *l_1429 = &g_590;
        int *l_1430 = (void*)0;
        int *l_1431 = &g_36;
        int *l_1432 = &g_36;
        int *l_1433 = &g_1017;
        int *l_1434 = &g_1017;
        int l_1435 = 0L;
        int *l_1436 = &g_590;
        int *l_1437 = &g_36;
        int *l_1438 = &l_1435;
        int *l_1439 = &g_36;
        int *l_1440 = &g_507;
        int *l_1441 = &l_1435;
        int *l_1442 = &g_1017;
        int *l_1443 = &g_507;
        int *l_1445 = &g_84;
        int *l_1446 = (void*)0;
        int *l_1447 = &g_84;
        int *l_1448 = &g_1017;
        int *l_1449 = &g_507;
        int *l_1450 = &g_1017;
        int *l_1451 = &g_84;
        int *l_1452 = &l_1435;
        int *l_1453 = &g_1017;
        int *l_1454 = &g_36;
        int *l_1455 = &l_1435;
        int *l_1456 = (void*)0;
        int *l_1457 = &l_1444;
        int *l_1458 = &l_1435;
        int *l_1459 = &g_1017;
        int *l_1460 = &g_507;
        int *l_1461 = (void*)0;
        int *l_1462 = (void*)0;
        int *l_1463 = (void*)0;
        int *l_1464 = &g_507;
        int *l_1465 = &g_36;
        int *l_1466 = (void*)0;
        int *l_1467 = &g_36;
        int *l_1468 = &g_590;
        int *l_1469 = &g_84;
        int *l_1470 = &l_1435;
        int *l_1471 = &l_1444;
        int *l_1472 = &l_1435;
        int l_1473 = 0x5CD86355L;
        int *l_1474 = &l_1444;
        int *l_1475 = &l_1473;
        int *l_1477 = &g_36;
        int *l_1478 = &g_36;
        int l_1479 = 0xB0278951L;
        int *l_1480 = &g_84;
        int *l_1481 = &g_1017;
        int *l_1482 = &g_507;
        int *l_1483 = (void*)0;
        int *l_1484 = &l_1473;
        int *l_1485 = &l_1473;
        int l_1486 = 0x0D55B926L;
        int *l_1487 = &g_590;
        short l_1488 = 1L;
        int *l_1489 = (void*)0;
        int *l_1490 = (void*)0;
        int *l_1492 = &g_507;
        int *l_1493 = (void*)0;
        int *l_1494 = &g_590;
        int *l_1495 = (void*)0;
        int *l_1496 = (void*)0;
        int l_1497 = 0x8A925B99L;
        int *l_1498 = &l_1444;
        int *l_1499 = &l_1486;
        int *l_1500 = &l_1479;
        int *l_1501 = &g_507;
        int *l_1502 = &l_1479;
        int *l_1504 = &g_36;
        int *l_1505 = &l_1435;
        int *l_1507 = &l_1497;
        int *l_1508 = &g_36;
        int *l_1509 = &l_1473;
        int *l_1510 = &l_1497;
        int *l_1511 = &l_1506;
        int *l_1513 = &g_84;
        int *l_1514 = &g_36;
        int *l_1515 = &l_1503;
        int l_1516 = 0xFA7BBCC7L;
        int *l_1517 = &l_1516;
        int *l_1518 = (void*)0;
        int *l_1519 = &g_507;
        int *l_1520 = &l_1435;
        int *l_1521 = &g_36;
        int *l_1522 = (void*)0;
        int *l_1523 = &g_507;
        int *l_1524 = &l_1476;
        int l_1526 = 0L;
        int *l_1527 = (void*)0;
        int *l_1528 = &l_1476;
        int l_1529 = 0xB5F940EFL;
        int *l_1530 = (void*)0;
        int *l_1531 = &l_1506;
        int *l_1532 = &l_1444;
        int l_1533 = 0xB5232DBBL;
        int *l_1534 = &l_1444;
        int *l_1535 = &l_1473;
        int *l_1536 = (void*)0;
        int *l_1537 = (void*)0;
        int *l_1538 = (void*)0;
        union U2 *l_1544 = &g_1180;
        g_1539--;
        (*l_1468) ^= (safe_sub_func_uint32_t_u_u((0UL || ((l_1544 == l_1544) & (safe_div_func_int8_t_s_s(4L, (*g_72))))), (*l_1484)));
    }
    else
    {
        int l_1549 = (-1L);
        union U1 l_1565 = {0x64DDDEF3L};
        int l_1635 = 7L;
        int l_1665 = 1L;
        union U0 *l_1712 = &g_86;
        int *l_1714 = &l_1491;
        int *l_1715 = &g_84;
        int *l_1716 = (void*)0;
        int *l_1717 = (void*)0;
        int *l_1718 = &l_1665;
        int *l_1719 = &g_590;
        int *l_1720 = &g_590;
        int *l_1721 = &g_590;
        int *l_1722 = &l_1665;
        int *l_1723 = &l_1635;
        int *l_1724 = (void*)0;
        int *l_1725 = (void*)0;
        int *l_1726 = &g_590;
        int *l_1727 = (void*)0;
        int *l_1728 = &l_1512;
        int *l_1729 = &g_507;
        int *l_1730 = (void*)0;
        int *l_1731 = &g_1525;
        int *l_1732 = &g_590;
        int *l_1733 = &g_84;
        int *l_1734 = &g_507;
        int *l_1735 = &g_1017;
        int *l_1736 = &l_1491;
        int *l_1737 = &l_1444;
        int *l_1738 = &l_1512;
        int *l_1739 = &g_507;
        int *l_1740 = (void*)0;
        int *l_1741 = &l_1444;
        int *l_1742 = &g_1525;
        int *l_1743 = &g_1017;
        int *l_1744 = &g_1017;
        int *l_1745 = &l_1491;
        int *l_1746 = &g_507;
        int *l_1747 = &g_36;
        int *l_1748 = &g_1525;
        int *l_1749 = &l_1512;
        int *l_1750 = &l_1444;
        int *l_1751 = &l_1665;
        int *l_1752 = &l_1476;
        int *l_1753 = &g_1525;
        int *l_1754 = &g_1017;
        int *l_1755 = &g_1017;
        int *l_1756 = &g_36;
        int *l_1757 = &l_1444;
        int *l_1758 = (void*)0;
        int *l_1759 = &g_36;
        int *l_1760 = (void*)0;
        int *l_1761 = (void*)0;
        int *l_1762 = &l_1444;
        int *l_1763 = (void*)0;
        int *l_1764 = &l_1503;
        int *l_1765 = &g_1017;
        int *l_1766 = &l_1476;
        int l_1767 = (-1L);
        int *l_1768 = &g_84;
        int l_1769 = 0xF678EB10L;
        int *l_1770 = &l_1476;
        int *l_1771 = &l_1665;
        int *l_1772 = &l_1665;
        int l_1773 = 0x41D01299L;
        int *l_1774 = &l_1506;
        int *l_1775 = &l_1773;
        int *l_1776 = &l_1769;
        int *l_1777 = &g_590;
        int *l_1778 = &l_1512;
        int *l_1780 = &l_1665;
        int *l_1781 = &l_1476;
        int *l_1782 = &g_507;
        int *l_1783 = (void*)0;
        int *l_1784 = &g_36;
        int *l_1785 = &l_1503;
        int *l_1786 = &l_1476;
        int l_1787 = 0x4B8D6D6CL;
        int *l_1788 = &l_1503;
        int *l_1789 = &g_36;
        int *l_1790 = (void*)0;
        int *l_1791 = &l_1444;
        int *l_1792 = &l_1512;
        int *l_1793 = &l_1506;
        int *l_1794 = &l_1512;
        int *l_1795 = &l_1773;
        int *l_1796 = &g_507;
        int *l_1797 = &l_1512;
        int *l_1798 = &g_84;
        int *l_1799 = &g_507;
        int *l_1800 = &l_1767;
        int *l_1801 = &l_1665;
        int *l_1802 = &g_84;
        int *l_1803 = &g_84;
        int *l_1804 = &l_1773;
        int *l_1805 = &l_1476;
        int *l_1806 = &l_1665;
        int *l_1807 = &l_1665;
        int *l_1808 = &l_1476;
        int *l_1809 = &l_1767;
        int *l_1810 = &l_1769;
        int *l_1811 = &l_1491;
        int *l_1812 = &l_1503;
        int *l_1813 = &l_1773;
        int *l_1814 = (void*)0;
        int *l_1815 = (void*)0;
        int *l_1816 = &l_1635;
        int *l_1817 = &g_84;
        int *l_1818 = &l_1665;
        int *l_1819 = &l_1665;
        int *l_1820 = &l_1476;
        int *l_1821 = (void*)0;
        int *l_1822 = &l_1444;
        int *l_1823 = &g_1017;
        int *l_1824 = (void*)0;
        unsigned short l_1825 = 0xDF8DL;
        if ((safe_lshift_func_uint16_t_u_u(l_1549, (g_910 ^ l_1549))))
        {
            int l_1590 = 0xAFDD1DA2L;
            int l_1649 = 0xE3216C0AL;
            char l_1673 = 0x61L;
            (*l_1421) ^= 0x44DDBEE4L;
            for (g_602 = (-20); (g_602 < 54); ++g_602)
            {
                char l_1556 = (-2L);
                union U1 l_1566 = {0x8A7B10B7L};
                if ((safe_rshift_func_uint8_t_u_u((7UL > (&g_72 == &g_72)), (safe_rshift_func_uint8_t_u_u((0x3DB57018L == l_1556), 6)))))
                {
                    (*l_1427) ^= (safe_mul_func_uint8_t_u_u((safe_mul_func_int8_t_s_s((safe_add_func_uint16_t_u_u(p_31.f0, (safe_sub_func_int32_t_s_s((func_23(l_1565) >= l_1565.f0), g_117)))), (g_231.f4 <= func_23(l_1566)))), (safe_mul_func_uint16_t_u_u(p_31.f0, g_931))));
                    (*l_1421) = 0xCA453472L;
                }
                else
                {
                    (*l_1421) |= p_31.f0;
                }
            }
            for (g_73 = 0; (g_73 < (-17)); --g_73)
            {
                int *l_1571 = &g_1525;
                int *l_1572 = &l_1491;
                int *l_1573 = &g_1525;
                int *l_1574 = &l_1512;
                int *l_1575 = (void*)0;
                int *l_1576 = &g_84;
                int *l_1577 = &g_590;
                int *l_1578 = &g_84;
                int *l_1579 = &l_1506;
                int *l_1580 = &g_507;
                int *l_1581 = &l_1506;
                int l_1582 = 0x9E6E6250L;
                int *l_1583 = (void*)0;
                int *l_1584 = &g_1525;
                int *l_1585 = &l_1476;
                int *l_1586 = (void*)0;
                int *l_1587 = (void*)0;
                int *l_1588 = (void*)0;
                int *l_1589 = &l_1503;
                int *l_1591 = &l_1512;
                int *l_1592 = &g_36;
                int *l_1593 = (void*)0;
                int *l_1594 = &l_1476;
                int *l_1595 = &g_84;
                int *l_1596 = &g_36;
                int *l_1597 = &l_1506;
                int *l_1598 = &g_1017;
                int *l_1599 = (void*)0;
                int *l_1600 = &g_1017;
                int *l_1601 = &g_507;
                int *l_1602 = &l_1506;
                int *l_1603 = &g_84;
                int *l_1604 = &l_1512;
                int *l_1605 = &g_84;
                int *l_1606 = &g_1017;
                int *l_1607 = &g_36;
                int *l_1608 = &l_1590;
                int *l_1609 = (void*)0;
                int *l_1610 = &g_1017;
                int *l_1611 = &g_507;
                int *l_1612 = &l_1503;
                int *l_1613 = &g_1525;
                int *l_1614 = &l_1512;
                int *l_1615 = &g_1017;
                int *l_1616 = (void*)0;
                int l_1617 = 1L;
                int *l_1618 = &g_36;
                int *l_1619 = &l_1590;
                int *l_1620 = (void*)0;
                int *l_1621 = &l_1444;
                int *l_1622 = &l_1476;
                int *l_1623 = &l_1582;
                int *l_1624 = &l_1506;
                int *l_1625 = &l_1590;
                int *l_1626 = &l_1491;
                int *l_1627 = &g_590;
                int *l_1628 = &l_1476;
                int *l_1629 = &l_1476;
                int *l_1630 = (void*)0;
                int *l_1631 = &l_1506;
                int *l_1632 = (void*)0;
                int *l_1633 = &l_1503;
                int *l_1634 = &g_84;
                int *l_1636 = &l_1506;
                int *l_1637 = &g_36;
                int *l_1638 = (void*)0;
                int *l_1639 = &l_1506;
                int *l_1640 = (void*)0;
                int *l_1641 = (void*)0;
                int *l_1642 = &g_590;
                int *l_1643 = &l_1476;
                int *l_1644 = &l_1635;
                int *l_1645 = &l_1617;
                int *l_1646 = (void*)0;
                int *l_1647 = &g_1525;
                int *l_1648 = &l_1617;
                int *l_1650 = &l_1506;
                int *l_1651 = &g_507;
                int *l_1652 = &l_1506;
                int *l_1653 = &g_1017;
                int *l_1654 = &g_1017;
                int *l_1655 = &l_1635;
                int *l_1656 = (void*)0;
                int *l_1657 = &g_84;
                int *l_1658 = (void*)0;
                int *l_1659 = &g_590;
                int *l_1660 = &l_1649;
                int *l_1661 = &g_36;
                int *l_1662 = &g_590;
                int *l_1663 = &g_1525;
                int *l_1664 = (void*)0;
                int *l_1666 = (void*)0;
                int *l_1667 = &l_1617;
                int *l_1668 = &l_1617;
                int *l_1669 = (void*)0;
                int l_1670 = 0L;
                int *l_1671 = &g_507;
                int *l_1672 = &g_507;
                int *l_1674 = &l_1444;
                int *l_1675 = &l_1444;
                int *l_1676 = &l_1635;
                int *l_1677 = (void*)0;
                int *l_1678 = &l_1617;
                int *l_1679 = &l_1503;
                int *l_1680 = (void*)0;
                int *l_1681 = (void*)0;
                int *l_1682 = &l_1670;
                int *l_1683 = &l_1503;
                int *l_1684 = &l_1444;
                int *l_1685 = &l_1444;
                int *l_1686 = &l_1512;
                int *l_1687 = &g_590;
                int *l_1688 = (void*)0;
                int *l_1689 = &l_1665;
                int *l_1690 = &l_1582;
                int *l_1691 = &l_1503;
                int *l_1692 = &g_1017;
                int *l_1693 = (void*)0;
                int *l_1694 = &g_36;
                int *l_1695 = &l_1590;
                int *l_1696 = &l_1590;
                int *l_1697 = &g_1525;
                int *l_1698 = &l_1649;
                int *l_1699 = &l_1590;
                int *l_1700 = &l_1665;
                int *l_1701 = (void*)0;
                int *l_1702 = &g_36;
                int *l_1703 = (void*)0;
                int *l_1704 = &l_1476;
                int *l_1705 = &g_507;
                int *l_1706 = &g_507;
                int *l_1707 = &l_1617;
                unsigned short l_1708 = 65535UL;
                union U4 **l_1711 = &l_1420;
                union U0 **l_1713 = &l_1712;
                --l_1708;
                (*l_1711) = &g_231;
                (*l_1713) = l_1712;
            }
        }
        else
        {
            (*l_1427) ^= p_31.f0;
        }
        l_1825++;
    }
    return &g_4;
}







static char * func_32(char * p_33)
{
    int *l_35 = &g_36;
    int l_1331 = 0x3640EFE1L;
    int l_1340 = 0x35D65166L;
    char l_1359 = 0L;
    int l_1362 = 6L;
    int l_1372 = (-9L);
    int l_1377 = 0x3E002ECAL;
    int l_1384 = 0x6ED9E7EAL;
    int l_1385 = 1L;
    int l_1391 = 0x78FD8CC4L;
    int l_1410 = (-1L);
    l_35 = &g_4;
    for (g_36 = (-25); (g_36 >= 27); g_36++)
    {
        short l_43 = 3L;
        int *l_74 = (void*)0;
        char *l_80 = &g_73;
        union U4 l_607 = {0x0A651410L};
        int *l_1324 = &g_84;
        int *l_1325 = &g_507;
        int *l_1326 = &g_507;
        int *l_1327 = &g_507;
        int *l_1328 = (void*)0;
        int *l_1329 = &g_507;
        int *l_1330 = &g_590;
        int l_1332 = 7L;
        int l_1333 = 0xD1A51D5DL;
        int *l_1334 = &g_507;
        int *l_1335 = (void*)0;
        int *l_1336 = &l_1331;
        int *l_1337 = &l_1332;
        int l_1338 = (-9L);
        int *l_1339 = &g_590;
        int *l_1341 = &g_590;
        int *l_1342 = &l_1332;
        int *l_1343 = &g_84;
        int *l_1344 = (void*)0;
        int *l_1345 = &g_590;
        int l_1346 = 0L;
        int *l_1347 = &l_1340;
        int *l_1348 = &g_507;
        int *l_1349 = (void*)0;
        int *l_1350 = &l_1346;
        int *l_1351 = &g_507;
        int *l_1352 = &g_1017;
        int *l_1353 = &g_84;
        int *l_1354 = &g_590;
        int *l_1355 = &g_507;
        int *l_1356 = &l_1332;
        int *l_1357 = &l_1340;
        int *l_1358 = &g_84;
        int *l_1360 = (void*)0;
        int *l_1361 = (void*)0;
        int *l_1363 = &g_507;
        int *l_1364 = (void*)0;
        int l_1365 = 0x516F5BABL;
        int *l_1366 = &g_84;
        int *l_1367 = (void*)0;
        int *l_1368 = (void*)0;
        int l_1369 = 0L;
        int *l_1370 = &l_1365;
        int *l_1371 = &l_1340;
        int *l_1373 = &l_1365;
        int *l_1374 = &g_507;
        int *l_1375 = &g_1017;
        int *l_1376 = &l_1338;
        int *l_1378 = (void*)0;
        int *l_1379 = &g_507;
        int *l_1380 = (void*)0;
        int l_1381 = 0xF237663BL;
        int *l_1382 = &l_1372;
        int *l_1383 = (void*)0;
        int l_1386 = 0x1160A96AL;
        int *l_1387 = &g_1017;
        int *l_1388 = &l_1332;
        int *l_1389 = &g_590;
        int *l_1390 = (void*)0;
        int *l_1392 = &l_1338;
        int *l_1393 = &g_1017;
        int *l_1394 = &l_1385;
        int *l_1395 = &l_1391;
        int *l_1396 = (void*)0;
        int l_1397 = 0L;
        int *l_1398 = &g_1017;
        int *l_1399 = &g_1017;
        int *l_1400 = &g_507;
        int *l_1401 = &l_1384;
        int l_1402 = (-7L);
        int l_1403 = 0x5654EBEAL;
        int *l_1404 = (void*)0;
        int *l_1405 = (void*)0;
        int *l_1406 = &l_1340;
        int *l_1407 = &g_84;
        int *l_1408 = (void*)0;
        int *l_1409 = &g_507;
        int *l_1411 = &l_1385;
        unsigned l_1412 = 0xD1626BA1L;
    }
    return &g_73;
}







static union U1 func_46(unsigned p_47, int * p_48, char * p_49)
{
    char l_813 = 9L;
    int *l_814 = &g_507;
    int **l_815 = &l_814;
    short l_816 = 0x0880L;
    int l_835 = 0x155E2C9FL;
    int l_869 = (-1L);
    int l_878 = 9L;
    int l_901 = 1L;
    int l_911 = 0x432EED17L;
    union U3 *l_937 = &g_76;
    union U5 *l_1041 = &g_201;
    union U4 **l_1106 = (void*)0;
    unsigned l_1152 = 4294967295UL;
    union U0 *l_1199 = &g_86;
    union U0 **l_1198 = &l_1199;
    union U1 l_1233 = {4294967287UL};
    short l_1301 = 0xAFCCL;
    (*l_814) = (safe_add_func_uint8_t_u_u((safe_sub_func_int16_t_s_s(func_23(g_25), l_813)), (*g_72)));
    (*l_815) = p_48;
    if (((void*)0 != &g_76))
    {
        union U1 l_819 = {4294967294UL};
        int l_829 = 0x88FE78D9L;
        int l_848 = (-10L);
        int l_859 = 0x34C6CB84L;
        int l_866 = 0x7DDFD428L;
        int l_887 = 0L;
        int l_922 = 0x9416D9D7L;
        int l_927 = 0x21759A17L;
        l_816 = (*g_241);
        if ((safe_rshift_func_int16_t_s_s(((0x47E0L >= g_413) ^ g_73), 0)))
        {
            return l_819;
        }
        else
        {
            int *l_820 = &g_84;
            union U3 *l_821 = (void*)0;
            union U3 **l_822 = &g_75;
            int *l_823 = &g_507;
            int *l_824 = (void*)0;
            int *l_825 = &g_84;
            int *l_826 = &g_507;
            int *l_827 = &g_507;
            int *l_828 = (void*)0;
            int *l_830 = &g_84;
            int *l_831 = (void*)0;
            int *l_832 = &g_590;
            int *l_833 = &g_507;
            int *l_834 = &g_590;
            int *l_836 = &g_84;
            int *l_837 = &l_835;
            int *l_838 = &g_84;
            int l_839 = (-1L);
            int *l_840 = &g_590;
            int l_841 = 0L;
            int *l_842 = &l_829;
            int *l_843 = &l_839;
            int *l_844 = &l_835;
            int *l_845 = &g_84;
            int *l_846 = (void*)0;
            int *l_847 = &g_590;
            int l_849 = 0x816B9793L;
            int *l_850 = &l_839;
            int *l_851 = &l_841;
            int *l_852 = &l_848;
            int *l_853 = &g_590;
            int *l_854 = (void*)0;
            int *l_855 = &g_590;
            int *l_856 = &g_84;
            int *l_857 = (void*)0;
            int *l_858 = &l_829;
            int *l_860 = &l_859;
            int *l_861 = &l_859;
            int *l_862 = &l_835;
            int *l_863 = &l_859;
            int *l_864 = (void*)0;
            int *l_865 = &l_848;
            int *l_867 = &g_507;
            int *l_868 = (void*)0;
            int *l_870 = (void*)0;
            int *l_871 = (void*)0;
            int *l_872 = &g_507;
            int *l_873 = &g_84;
            int l_874 = 1L;
            int *l_875 = (void*)0;
            int *l_876 = &l_874;
            int *l_877 = &l_848;
            int *l_879 = &l_859;
            int *l_880 = &l_835;
            int *l_881 = &l_829;
            int *l_882 = &l_869;
            int *l_883 = &l_866;
            int *l_884 = &g_84;
            int *l_885 = &l_829;
            int *l_886 = (void*)0;
            int *l_888 = &g_590;
            int *l_889 = &l_849;
            int *l_890 = &l_887;
            int *l_891 = &l_866;
            int *l_892 = &l_835;
            int l_893 = 0x81FFB4F0L;
            int *l_894 = &l_829;
            int *l_895 = &l_859;
            int *l_896 = &g_507;
            int *l_897 = &l_835;
            int *l_898 = &l_869;
            int l_899 = 0xE6C36370L;
            int *l_900 = &g_590;
            int *l_902 = &l_859;
            int *l_903 = &g_507;
            int *l_904 = &l_829;
            int *l_905 = &l_866;
            int *l_906 = &l_841;
            int *l_907 = (void*)0;
            int *l_908 = (void*)0;
            int l_909 = 0xC73E7E94L;
            int *l_912 = &l_901;
            int l_913 = 0x4A5B41A4L;
            int *l_914 = &l_829;
            int *l_916 = &l_899;
            int *l_917 = &l_913;
            int *l_918 = &l_899;
            int *l_919 = &l_829;
            int *l_920 = &l_829;
            int *l_921 = &l_899;
            int *l_923 = (void*)0;
            int *l_924 = &l_869;
            int *l_925 = &l_835;
            int *l_926 = &l_878;
            int *l_928 = &l_887;
            int *l_929 = &l_874;
            int *l_930 = &l_911;
            (*l_820) |= 0x82385C40L;
            (*l_822) = l_821;
            g_931--;
        }
        return g_25;
    }
    else
    {
        int *l_934 = &l_869;
        union U1 l_938 = {0x5D215F1DL};
        int l_997 = 5L;
        int l_999 = 0x56AF3003L;
        int l_1010 = 0L;
        union U1 l_1098 = {4294967295UL};
        char l_1103 = 0L;
        union U5 *l_1121 = &g_201;
        (*l_934) = (*g_241);
        if ((safe_add_func_uint16_t_u_u(((*g_72) >= (l_937 == &g_76)), func_23(l_938))))
        {
            int l_980 = 0L;
            unsigned short l_1038 = 0x67E4L;
            int l_1050 = 0x8F9A72F8L;
            int l_1083 = 3L;
            (*l_934) |= (*g_241);
            if ((*p_48))
            {
                int *l_939 = &l_901;
                int l_940 = 0x43F70AA8L;
                int *l_941 = &g_84;
                int *l_942 = (void*)0;
                int *l_943 = &l_940;
                int *l_944 = &g_590;
                int *l_945 = &g_507;
                int *l_946 = &l_901;
                int *l_947 = &l_835;
                int *l_948 = &l_835;
                int *l_949 = (void*)0;
                int *l_950 = (void*)0;
                int *l_951 = &l_878;
                int *l_952 = &l_878;
                int *l_953 = &l_901;
                int *l_954 = (void*)0;
                int *l_955 = (void*)0;
                int *l_956 = (void*)0;
                int *l_957 = &l_835;
                int *l_958 = &g_590;
                int *l_959 = &g_590;
                int *l_960 = &l_901;
                int *l_961 = &g_507;
                int *l_962 = (void*)0;
                int *l_963 = &l_878;
                int *l_964 = &g_590;
                int *l_965 = &g_590;
                int *l_966 = (void*)0;
                int *l_967 = &g_84;
                int *l_968 = &l_901;
                int *l_969 = &l_901;
                int *l_970 = &l_878;
                int *l_971 = &l_940;
                int *l_972 = &g_590;
                int *l_973 = &l_869;
                int *l_974 = &l_878;
                int *l_975 = &l_878;
                int *l_976 = &l_901;
                int *l_977 = &l_911;
                int *l_978 = &g_84;
                int *l_979 = (void*)0;
                int *l_981 = &l_878;
                int *l_982 = &l_940;
                int *l_983 = &l_901;
                int *l_984 = &g_590;
                int *l_985 = (void*)0;
                int *l_986 = (void*)0;
                int *l_987 = &l_901;
                int *l_988 = &l_869;
                int *l_989 = &l_901;
                int *l_990 = (void*)0;
                int *l_991 = &g_507;
                int *l_992 = &l_911;
                int *l_993 = (void*)0;
                int *l_994 = &l_878;
                int *l_995 = &g_84;
                int *l_996 = &g_507;
                int *l_998 = &l_901;
                int *l_1000 = &g_84;
                int *l_1001 = &l_911;
                int *l_1002 = &l_869;
                int *l_1003 = &l_997;
                int *l_1004 = (void*)0;
                int *l_1005 = &g_590;
                int *l_1006 = &l_878;
                int *l_1007 = &l_835;
                int *l_1008 = &g_84;
                int *l_1009 = &g_84;
                int *l_1011 = &g_590;
                int *l_1012 = &l_835;
                int *l_1013 = &l_1010;
                int *l_1014 = &l_1010;
                int *l_1015 = &g_507;
                int *l_1016 = &g_507;
                int *l_1018 = &l_901;
                int *l_1019 = &g_507;
                int *l_1020 = &l_940;
                int *l_1021 = &l_878;
                int *l_1022 = &g_1017;
                int *l_1023 = &l_1010;
                int *l_1024 = &l_1010;
                int *l_1025 = &l_869;
                int *l_1026 = &l_1010;
                int *l_1027 = &l_901;
                g_1028--;
            }
            else
            {
                union U5 *l_1033 = &g_201;
                union U1 l_1045 = {0xEE5A731DL};
                int l_1048 = 1L;
                int l_1058 = 0L;
                short l_1068 = 1L;
                int l_1085 = 0x5D9433F0L;
                for (g_182 = 0; (g_182 != 23); g_182++)
                {
                    (*l_934) = (l_1033 != (void*)0);
                }
                if (((*l_934) || (safe_rshift_func_uint16_t_u_s((((g_1017 || (safe_mul_func_uint16_t_u_u(0x83DAL, p_47))) != l_980) == (*g_241)), l_1038))))
                {
                    (*l_934) = (l_980 && (**l_815));
                }
                else
                {
                    unsigned l_1044 = 0x79DDA993L;
                    int *l_1049 = &g_507;
                    int *l_1051 = &l_1050;
                    int *l_1052 = &g_84;
                    int *l_1053 = &l_997;
                    int *l_1054 = &l_1010;
                    int *l_1055 = &l_1010;
                    int *l_1056 = &l_878;
                    int l_1057 = 0x19C7A6E1L;
                    int *l_1059 = &l_1010;
                    int *l_1060 = &l_1048;
                    int *l_1061 = &l_1010;
                    int *l_1062 = &l_999;
                    int *l_1063 = (void*)0;
                    int *l_1064 = &l_1050;
                    int *l_1065 = &l_1058;
                    int *l_1066 = (void*)0;
                    int *l_1067 = &l_1050;
                    int *l_1069 = &l_878;
                    int *l_1070 = &g_1017;
                    int *l_1071 = &l_869;
                    int *l_1072 = &l_1010;
                    int *l_1073 = &l_1048;
                    int *l_1074 = &l_1057;
                    int *l_1075 = &l_1048;
                    int *l_1076 = &l_1058;
                    int *l_1077 = &l_901;
                    int *l_1078 = &l_1058;
                    int *l_1079 = &l_997;
                    int *l_1080 = &l_1010;
                    int *l_1081 = &l_911;
                    int *l_1082 = &l_1010;
                    int *l_1084 = &l_1048;
                    int *l_1086 = &l_997;
                    unsigned short l_1087 = 65535UL;
                    for (g_602 = 0; (g_602 >= 4); g_602 = safe_add_func_uint16_t_u_u(g_602, 8))
                    {
                        l_1041 = &g_201;
                    }
                    (*l_934) = (*p_48);
                    (*l_934) = (((safe_lshift_func_int16_t_s_u(l_1044, func_23(l_1045))) < (!(**l_815))) < (safe_div_func_uint8_t_u_u(0x94L, (~255UL))));
                    l_1087--;
                }
                (*l_934) &= ((*g_241) && (g_25.f0 <= ((safe_mul_func_uint8_t_u_u((((+((safe_mul_func_uint16_t_u_u((0x8A33L && ((((((((&g_72 != &p_49) > l_1085) > 1L) == (safe_sub_func_int32_t_s_s((*p_48), ((((void*)0 != &p_49) | l_980) == p_47)))) < p_47) || g_25.f0) | (-4L)) <= p_47)), g_25.f0)) | 9UL)) <= 0L) < 0xE7B4L), g_185)) >= 0x24D897ECL)));
            }
        }
        else
        {
            return g_25;
        }
        (*l_934) = (func_23(l_1098) <= (!(safe_mul_func_int8_t_s_s((safe_rshift_func_int8_t_s_u((g_181 | l_1103), ((*l_934) <= (g_521 < (safe_add_func_uint16_t_u_u((*l_934), 1L)))))), (((void*)0 != l_1106) | p_47)))));
        for (p_47 = 0; (p_47 != 28); ++p_47)
        {
            unsigned l_1120 = 0UL;
            union U4 l_1126 = {-10L};
            union U1 l_1142 = {0xBF01A9FDL};
            int *l_1155 = &l_869;
            if (((*l_814) == (safe_mul_func_int8_t_s_s((safe_unary_minus_func_uint16_t_u(((safe_div_func_uint32_t_u_u(((2UL | (!(*g_72))) && ((((g_910 > ((safe_div_func_uint16_t_u_u(p_47, (safe_lshift_func_int16_t_s_u((safe_mul_func_uint16_t_u_u(((void*)0 == &g_241), g_802)), ((*l_934) & p_47))))) > 0x6B76L)) <= l_1120) || (*l_934)) | (*l_934))), (*g_241))) && g_185))), (**l_815)))))
            {
                unsigned l_1143 = 1UL;
                g_1122 = l_1121;
                for (g_201.f0 = 12; (g_201.f0 == 1); g_201.f0 = safe_sub_func_uint16_t_u_u(g_201.f0, 6))
                {
                    char *l_1125 = &l_813;
                    (*l_815) = func_50(func_55(l_1125, (p_47 ^ (-1L)), &g_785, g_231), &g_910, l_1126, &g_84);
                }
                for (g_233 = 0; (g_233 == 17); g_233 = safe_add_func_uint16_t_u_u(g_233, 3))
                {
                    (*l_815) = p_48;
                    (*l_815) = &g_590;
                }
                l_1143 ^= ((safe_add_func_uint8_t_u_u((0x2CL == (safe_mod_func_int32_t_s_s((safe_add_func_int8_t_s_s((&g_201 == l_1121), (safe_add_func_uint16_t_u_u(((safe_add_func_uint16_t_u_u((**l_815), ((safe_unary_minus_func_int16_t_s((*l_934))) ^ (1L & func_23(l_1142))))) & ((g_785 && 0x9B98D9EFL) < (**l_815))), p_47)))), 1L))), (*g_72))) & 0xE9F3L);
            }
            else
            {
                int *l_1144 = (void*)0;
                int *l_1145 = (void*)0;
                int *l_1146 = &l_878;
                int *l_1147 = &l_869;
                int *l_1148 = &l_878;
                int *l_1149 = &l_997;
                int *l_1150 = &l_869;
                int *l_1151 = &l_1010;
                l_1152--;
                (*l_815) = (void*)0;
            }
            (*l_815) = l_1155;
        }
    }
    if (((g_392 < g_785) <= (*g_72)))
    {
        for (g_233 = 0; (g_233 <= (-2)); g_233--)
        {
            union U1 l_1158 = {6UL};
            return l_1158;
        }
    }
    else
    {
        unsigned char l_1165 = 0x95L;
        union U2 *l_1179 = &g_1180;
        union U5 *l_1205 = &g_201;
        int l_1216 = (-1L);
        int l_1226 = (-1L);
        unsigned l_1230 = 0x201015F6L;
        int l_1245 = 0L;
        int l_1247 = 0xFD928D26L;
        int l_1252 = 6L;
        int l_1279 = 0x07F14B37L;
        int l_1290 = 1L;
        int l_1294 = (-1L);
        for (g_231.f3 = 26; (g_231.f3 > 12); g_231.f3--)
        {
            int *l_1161 = &l_878;
            int *l_1162 = &l_878;
            int l_1163 = 0x235A545EL;
            int *l_1164 = &l_901;
            union U4 *l_1168 = &g_231;
            ++l_1165;
            l_1168 = l_1168;
        }
        (*l_815) = &g_1017;
        for (g_410 = (-23); (g_410 == 54); g_410 = safe_add_func_int8_t_s_s(g_410, 3))
        {
            for (g_392 = (-15); (g_392 < 21); g_392 = safe_add_func_int16_t_s_s(g_392, 1))
            {
                union U1 l_1176 = {4294967294UL};
                union U0 **l_1201 = &l_1199;
                int *l_1202 = &g_1017;
                for (g_432 = 0; (g_432 != 38); g_432++)
                {
                    char l_1175 = (-4L);
                    (*l_814) ^= 4L;
                    if (l_1175)
                        break;
                    if ((*p_48))
                        continue;
                    if ((*g_241))
                        break;
                }
                if ((func_23(l_1176) < 0x5EL))
                {
                    for (g_231.f2 = 0; (g_231.f2 != 30); g_231.f2 = safe_add_func_uint16_t_u_u(g_231.f2, 6))
                    {
                        (**l_815) = (*g_241);
                    }
                }
                else
                {
                    union U2 **l_1181 = &l_1179;
                    (*l_814) |= (*g_241);
                    (*l_1181) = l_1179;
                }
                for (g_1180.f1 = 8; (g_1180.f1 >= 43); g_1180.f1 = safe_add_func_int32_t_s_s(g_1180.f1, 6))
                {
                    union U2 **l_1194 = &l_1179;
                    int l_1197 = 0x12611FAAL;
                }
            }
        }
        for (l_1152 = 0; (l_1152 < 52); ++l_1152)
        {
            union U5 **l_1206 = &l_1041;
            int l_1209 = 0L;
            int l_1215 = (-1L);
            int l_1218 = (-1L);
            int l_1225 = (-9L);
            int *l_1234 = &l_1216;
            int *l_1235 = (void*)0;
            int *l_1236 = &l_1218;
            int *l_1237 = &l_1209;
            int *l_1238 = &l_911;
            int *l_1239 = (void*)0;
            int *l_1240 = &l_1209;
            int *l_1241 = &l_1218;
            int *l_1242 = &l_878;
            int *l_1243 = &l_1218;
            int *l_1244 = &l_1218;
            int *l_1246 = (void*)0;
            int *l_1248 = (void*)0;
            int *l_1249 = &g_590;
            int *l_1250 = (void*)0;
            int *l_1251 = (void*)0;
            int *l_1253 = (void*)0;
            int *l_1254 = &l_1209;
            int *l_1255 = &l_911;
            int *l_1256 = &l_1215;
            int *l_1257 = &l_1226;
            int *l_1258 = &l_1247;
            int *l_1259 = (void*)0;
            int *l_1260 = &g_1017;
            int *l_1261 = &l_1218;
            int *l_1262 = &l_1225;
            int *l_1263 = &l_1226;
            int *l_1264 = &l_1215;
            int *l_1265 = &l_835;
            int *l_1266 = &g_84;
            int *l_1267 = (void*)0;
            int *l_1268 = (void*)0;
            int *l_1269 = &l_835;
            int *l_1270 = &g_1017;
            int *l_1271 = &g_1017;
            int *l_1272 = &l_878;
            int *l_1273 = &g_507;
            int *l_1274 = (void*)0;
            int *l_1275 = &g_1017;
            int *l_1276 = &g_1017;
            int *l_1277 = &g_84;
            int *l_1278 = (void*)0;
            int *l_1280 = &l_1252;
            int *l_1281 = &l_1225;
            int *l_1282 = &l_878;
            int *l_1283 = (void*)0;
            int *l_1284 = &l_1226;
            int *l_1285 = &l_901;
            int *l_1286 = &l_1215;
            int *l_1287 = &g_507;
            int *l_1288 = &l_1279;
            int *l_1289 = (void*)0;
            int *l_1291 = (void*)0;
            int *l_1292 = &g_1017;
            int *l_1293 = &l_1290;
            int *l_1295 = &l_1209;
            int *l_1296 = &l_1252;
            int *l_1297 = (void*)0;
            int *l_1298 = (void*)0;
            int *l_1299 = &g_1017;
            int *l_1300 = &g_84;
            int *l_1302 = &l_1216;
            int *l_1303 = &l_1290;
            int *l_1304 = &l_1218;
            int *l_1305 = (void*)0;
            int *l_1306 = &l_1294;
            int *l_1307 = &l_869;
            int *l_1308 = &l_1209;
            int *l_1309 = &l_1225;
            int *l_1310 = &l_1226;
            int *l_1311 = &l_1252;
            int *l_1312 = (void*)0;
            int *l_1313 = &l_835;
            int *l_1314 = (void*)0;
            int *l_1315 = &l_1247;
            int *l_1316 = (void*)0;
            int *l_1317 = (void*)0;
            int *l_1318 = &l_1252;
            int *l_1319 = (void*)0;
            int *l_1320 = &l_1225;
            (*l_814) ^= (*p_48);
            (*l_1206) = l_1205;
            if ((**l_815))
            {
                int *l_1207 = (void*)0;
                int *l_1208 = &g_507;
                int *l_1210 = &l_901;
                int *l_1211 = &l_878;
                int *l_1212 = (void*)0;
                int *l_1213 = &l_901;
                int *l_1214 = &g_590;
                int l_1217 = 0x6D6071C2L;
                int *l_1219 = &l_1215;
                int *l_1220 = &l_835;
                int *l_1221 = (void*)0;
                int *l_1222 = &g_1017;
                int *l_1223 = (void*)0;
                int *l_1224 = &l_1216;
                int *l_1227 = &l_878;
                int *l_1228 = &g_1017;
                int *l_1229 = &l_1215;
                (*l_814) = (-1L);
                (**l_815) = (*g_241);
                l_1230--;
                if ((*g_241))
                    continue;
            }
            else
            {
                return l_1233;
            }
            g_1321++;
        }
    }
    return l_1233;
}







static int * func_50(union U0 p_51, char * p_52, union U4 p_53, int * p_54)
{
    unsigned short l_693 = 1UL;
    union U0 **l_704 = (void*)0;
    int l_711 = 6L;
    int l_741 = (-9L);
    int l_747 = (-1L);
    int l_750 = 0x9D19148BL;
    int l_765 = 0xD93B574CL;
    int l_782 = (-1L);
    union U1 l_805 = {0UL};
    if ((l_693 < g_233))
    {
        union U1 *l_694 = &g_695;
        int l_705 = (-1L);
        int l_732 = 0x7FC2DDF0L;
        int l_752 = 9L;
        int l_763 = (-10L);
        int l_772 = 1L;
        int l_778 = 0xF455FC12L;
        int l_793 = 0x686E4F01L;
        l_694 = &g_25;
        if ((safe_div_func_uint16_t_u_u((+(safe_add_func_uint8_t_u_u(((((((safe_div_func_int8_t_s_s(0x68L, func_23(g_25))) < (l_693 >= func_23((*l_694)))) & (0x3C61F99BL != (l_704 == l_704))) < (-8L)) ^ 0L) != l_705), 0x7DL))), g_172)))
        {
            int *l_706 = &g_36;
            g_241 = l_706;
            return p_54;
        }
        else
        {
            int *l_707 = (void*)0;
            int l_708 = 0xB1FA4407L;
            int *l_709 = &g_590;
            int *l_710 = &l_708;
            int *l_712 = &g_84;
            int *l_713 = (void*)0;
            int *l_714 = &g_590;
            int *l_715 = (void*)0;
            int *l_716 = &g_84;
            int *l_717 = &l_705;
            int *l_718 = &l_711;
            int *l_719 = &l_708;
            int *l_720 = &l_705;
            int *l_721 = &l_711;
            int *l_722 = (void*)0;
            int *l_723 = &g_590;
            int *l_724 = &l_705;
            int *l_725 = (void*)0;
            int *l_726 = &g_590;
            int *l_727 = (void*)0;
            int *l_728 = &g_84;
            int *l_729 = &l_708;
            int *l_730 = (void*)0;
            int *l_731 = &g_590;
            int *l_733 = &g_507;
            int *l_734 = &l_705;
            int *l_735 = &l_711;
            int *l_736 = (void*)0;
            int *l_737 = &g_590;
            int *l_738 = &l_705;
            int *l_739 = &l_732;
            int *l_740 = &g_590;
            int *l_742 = (void*)0;
            int *l_743 = &l_708;
            int *l_744 = &g_507;
            int *l_745 = &l_741;
            int *l_746 = (void*)0;
            int *l_748 = (void*)0;
            int *l_749 = (void*)0;
            int *l_751 = (void*)0;
            int *l_753 = &l_752;
            int *l_754 = &l_750;
            int *l_755 = &l_732;
            int *l_756 = &l_750;
            int *l_757 = &l_705;
            int *l_758 = &g_507;
            int *l_759 = &l_705;
            int *l_760 = &l_711;
            int *l_761 = &l_705;
            int *l_762 = (void*)0;
            int *l_764 = &l_750;
            int *l_766 = (void*)0;
            int l_767 = 4L;
            int *l_768 = &l_765;
            int *l_769 = &g_507;
            int *l_770 = &g_84;
            int *l_771 = &l_705;
            int *l_773 = &l_708;
            int *l_774 = &g_84;
            int *l_775 = &l_750;
            int *l_776 = &g_590;
            int l_777 = 0x7840E07AL;
            int *l_779 = &l_765;
            int *l_780 = &g_507;
            int *l_781 = &l_777;
            int *l_783 = (void*)0;
            int *l_784 = &l_752;
            int *l_786 = &l_782;
            int *l_787 = (void*)0;
            int *l_788 = (void*)0;
            int *l_789 = (void*)0;
            int *l_790 = &l_705;
            int *l_791 = &l_765;
            int *l_792 = &l_747;
            int *l_794 = (void*)0;
            int l_795 = 0L;
            int *l_796 = &l_763;
            int *l_797 = &l_795;
            int *l_798 = &l_782;
            int l_799 = (-1L);
            int *l_800 = &l_767;
            int *l_801 = &l_767;
            l_708 ^= (*g_241);
            ++g_802;
            (*l_754) = l_732;
            return &g_36;
        }
    }
    else
    {
        if (func_23(l_805))
        {
            return &g_507;
        }
        else
        {
            unsigned l_808 = 0x7E9293A9L;
            g_231.f1 = (safe_add_func_int16_t_s_s(p_53.f3, l_808));
        }
    }
    return &g_590;
}







static union U0 func_55(char * p_56, unsigned char p_57, char * p_58, union U4 p_59)
{
    int *l_608 = &g_36;
    int **l_609 = &g_241;
    int *l_610 = &g_84;
    int *l_611 = &g_507;
    int *l_612 = &g_507;
    int *l_613 = (void*)0;
    int *l_614 = &g_590;
    int *l_615 = (void*)0;
    int *l_616 = &g_590;
    int *l_617 = &g_507;
    int *l_618 = (void*)0;
    int l_619 = (-1L);
    int *l_620 = &l_619;
    int *l_621 = &g_507;
    int *l_622 = (void*)0;
    int *l_623 = (void*)0;
    int *l_624 = &g_84;
    int *l_625 = &l_619;
    int *l_626 = (void*)0;
    int *l_627 = &g_84;
    int *l_628 = (void*)0;
    int *l_629 = (void*)0;
    int *l_630 = &g_590;
    int *l_631 = &g_84;
    int *l_632 = &g_590;
    int *l_633 = &g_507;
    int *l_634 = (void*)0;
    int *l_635 = &l_619;
    int *l_636 = &g_507;
    int *l_637 = &g_84;
    int l_638 = 0xA830BBB3L;
    int *l_639 = (void*)0;
    int *l_640 = &l_619;
    int *l_641 = (void*)0;
    int l_642 = 1L;
    int *l_643 = (void*)0;
    int *l_644 = &l_642;
    int *l_645 = &l_642;
    int *l_646 = (void*)0;
    int *l_647 = (void*)0;
    int *l_648 = &g_507;
    int *l_649 = (void*)0;
    int *l_650 = &l_619;
    int l_651 = 4L;
    int l_652 = (-1L);
    int *l_653 = &g_84;
    int l_654 = 0xD771850EL;
    int *l_655 = &g_84;
    int *l_656 = (void*)0;
    int *l_657 = (void*)0;
    int *l_658 = &g_84;
    int *l_659 = &l_652;
    int *l_660 = &g_590;
    int *l_661 = &g_84;
    int *l_662 = &l_619;
    int *l_663 = &g_590;
    int l_664 = 1L;
    int *l_665 = &l_664;
    int *l_666 = &l_638;
    int *l_667 = &l_652;
    int *l_668 = &l_642;
    int *l_669 = &g_507;
    int l_670 = 0x228245F9L;
    int *l_671 = &l_642;
    int l_672 = 0xFD95FEEDL;
    int *l_673 = (void*)0;
    int *l_674 = (void*)0;
    int *l_675 = &l_652;
    int *l_676 = &l_638;
    int *l_677 = &l_619;
    int *l_678 = &l_672;
    int *l_679 = &l_670;
    int *l_680 = &g_590;
    int l_681 = 0xA0DB3100L;
    int *l_682 = &l_638;
    int *l_683 = &l_642;
    int *l_684 = &l_672;
    int *l_685 = (void*)0;
    int *l_686 = &l_638;
    int l_687 = 2L;
    int *l_688 = (void*)0;
    int *l_689 = (void*)0;
    unsigned l_690 = 0x615E9AC7L;
    (*l_609) = l_608;
    l_690++;
    return g_86;
}







static char * func_60(char * p_61, short p_62, int * p_63, int * p_64, char * p_65)
{
    int *l_81 = (void*)0;
    int **l_82 = &l_81;
    union U0 *l_85 = &g_86;
    int l_113 = 7L;
    int l_156 = (-8L);
    unsigned l_175 = 5UL;
    char **l_190 = &g_72;
    char ***l_189 = &l_190;
    union U4 *l_284 = &g_231;
    union U4 **l_283 = &l_284;
    int l_372 = 0x8A3908BBL;
    (*l_82) = l_81;
    if ((*p_64))
    {
        int *l_83 = &g_84;
        union U0 **l_87 = &l_85;
        int l_123 = 0x29A0C815L;
        int l_160 = 0x6D4EB3E5L;
        (*l_83) = g_36;
        (*l_87) = l_85;
        for (g_76.f2 = 0; (g_76.f2 <= 10); g_76.f2 = safe_add_func_uint32_t_u_u(g_76.f2, 7))
        {
            int l_92 = (-1L);
            int l_103 = 0xE226996DL;
            if (g_25.f0)
                break;
            for (g_86.f2 = 23; (g_86.f2 == (-6)); g_86.f2--)
            {
                int *l_93 = &l_92;
                int *l_94 = &l_92;
                int *l_95 = &l_92;
                int *l_96 = &l_92;
                int *l_97 = &g_84;
                int *l_98 = &g_84;
                int *l_99 = &g_84;
                int *l_100 = &l_92;
                int *l_101 = &l_92;
                int *l_102 = &g_84;
                int l_104 = 1L;
                int *l_105 = &l_92;
                int *l_106 = (void*)0;
                int *l_107 = &l_103;
                int *l_108 = &g_84;
                int *l_109 = &g_84;
                int *l_110 = (void*)0;
                int *l_111 = &l_104;
                int *l_112 = (void*)0;
                int *l_114 = &l_103;
                int *l_115 = &l_104;
                int *l_116 = &l_104;
                unsigned l_120 = 0x6ABB25A5L;
                int l_139 = 0xE5885267L;
                int l_169 = 0x3F479F84L;
                g_117++;
                (*l_82) = &g_4;
                if (l_120)
                    continue;
                for (l_104 = 0; (l_104 <= 0); l_104 = safe_add_func_uint32_t_u_u(l_104, 2))
                {
                    int *l_124 = &g_84;
                    int *l_125 = (void*)0;
                    int *l_126 = &g_84;
                    int *l_127 = &g_84;
                    int *l_128 = (void*)0;
                    int *l_129 = &l_123;
                    int *l_130 = (void*)0;
                    int *l_131 = &l_92;
                    int *l_132 = &g_84;
                    int *l_133 = &l_123;
                    int *l_134 = &l_123;
                    int *l_135 = &l_103;
                    int *l_136 = (void*)0;
                    int *l_137 = &l_103;
                    int *l_138 = &l_113;
                    int *l_140 = &g_84;
                    int *l_141 = &l_113;
                    int *l_142 = (void*)0;
                    int *l_143 = &g_84;
                    int *l_144 = &l_92;
                    int *l_145 = (void*)0;
                    int *l_146 = &l_139;
                    int l_147 = 0xC2412408L;
                    int *l_148 = (void*)0;
                    int *l_149 = (void*)0;
                    int *l_150 = &g_84;
                    int *l_151 = &l_92;
                    int l_152 = 0x994F54D6L;
                    int *l_153 = &g_84;
                    int *l_154 = &l_147;
                    int *l_155 = &l_123;
                    int *l_157 = &l_139;
                    int *l_158 = &l_139;
                    int *l_159 = &l_92;
                    int *l_161 = (void*)0;
                    int *l_162 = &l_152;
                    int *l_163 = &l_160;
                    int *l_164 = &l_147;
                    int *l_165 = &l_160;
                    int *l_166 = (void*)0;
                    int *l_167 = &l_103;
                    int *l_168 = (void*)0;
                    int *l_170 = (void*)0;
                    int *l_171 = &l_152;
                    union U1 l_180 = {3UL};
                    ++g_172;
                    ++l_175;
                    if (g_73)
                        break;
                    if ((safe_add_func_uint32_t_u_u((0x6470AD0CL ^ ((!g_73) <= g_86.f1)), g_73)))
                    {
                        (*l_98) = func_23(l_180);
                        (*l_129) = (*l_81);
                    }
                    else
                    {
                        (*l_82) = p_64;
                        ++g_182;
                        ++g_185;
                    }
                }
            }
        }
        (*l_83) = (*l_83);
    }
    else
    {
        unsigned short l_261 = 0xA46DL;
        union U1 l_271 = {0UL};
        int l_396 = 0xFB9728FAL;
        int l_398 = (-1L);
        int l_399 = 0x7199E994L;
        char *l_439 = &g_86.f1;
        int l_573 = 0xBB951112L;
        int l_584 = 8L;
        int l_598 = (-1L);
        int l_601 = 8L;
        g_188 ^= g_172;
        (*l_82) = p_63;
        if (((void*)0 != l_189))
        {
            unsigned char l_196 = 255UL;
            int l_224 = 0xB3CF24B4L;
            union U4 *l_230 = &g_231;
            int l_264 = 0x244BBC70L;
            union U1 l_280 = {4294967295UL};
            int l_340 = 0x51C16617L;
            int l_348 = 0x7550297CL;
            if (g_182)
            {
                int *l_191 = &l_156;
                (*l_191) ^= g_182;
                return p_65;
            }
            else
            {
                char l_192 = 0L;
                unsigned char l_227 = 1UL;
                int l_238 = 0L;
                union U1 l_279 = {0xAD2651A9L};
                int l_365 = 1L;
                g_86.f3 |= (*p_64);
                if (g_185)
                {
                    int l_195 = (-9L);
                    union U5 *l_200 = &g_201;
                    int *l_205 = (void*)0;
                    g_84 ^= l_192;
                    for (g_181 = 0; (g_181 < (-9)); g_181 = safe_sub_func_int8_t_s_s(g_181, 4))
                    {
                        int l_199 = 0x92664082L;
                        l_196--;
                        if (l_199)
                            continue;
                    }
                    if (g_117)
                    {
                        union U5 **l_202 = &l_200;
                        (*l_202) = l_200;
                    }
                    else
                    {
                        int *l_203 = &l_113;
                        union U1 l_204 = {0x1DFB6871L};
                        (*l_203) = g_25.f0;
                        (*l_203) = func_23(l_204);
                        p_64 = l_205;
                        return &g_73;
                    }
                    for (l_195 = 0; (l_195 > (-19)); l_195 = safe_sub_func_int16_t_s_s(l_195, 1))
                    {
                        int *l_208 = (void*)0;
                        int *l_209 = (void*)0;
                        int *l_210 = (void*)0;
                        int *l_211 = &g_84;
                        int *l_212 = (void*)0;
                        int *l_213 = &l_113;
                        int *l_214 = &l_156;
                        int *l_215 = &g_84;
                        int *l_216 = &l_113;
                        int *l_217 = (void*)0;
                        int *l_218 = &l_113;
                        int *l_219 = &l_156;
                        int *l_220 = &l_156;
                        int l_221 = 0x040387E0L;
                        int *l_222 = &l_113;
                        int *l_223 = (void*)0;
                        int *l_225 = (void*)0;
                        int *l_226 = &l_113;
                        ++l_227;
                        if (g_76.f0)
                            continue;
                        (*l_222) |= g_84;
                    }
                }
                else
                {
                    union U4 **l_232 = &l_230;
                    (*l_232) = l_230;
                }
                if (g_233)
                {
                    short l_272 = 1L;
                    int *l_273 = &l_156;
                    for (g_76.f3 = 0; (g_76.f3 != 6); g_76.f3 = safe_add_func_int32_t_s_s(g_76.f3, 1))
                    {
                        l_238 ^= (((l_196 < (safe_add_func_uint32_t_u_u(0xBBA81456L, g_4))) & (+0x9FL)) < 0x174F72E7L);
                        if (g_185)
                            break;
                    }
                    if ((safe_rshift_func_uint16_t_u_u((&g_76 != (void*)0), 12)))
                    {
                        int *l_242 = &l_224;
                        int *l_243 = &l_224;
                        int *l_244 = &l_224;
                        int *l_245 = &l_156;
                        int *l_246 = (void*)0;
                        int *l_247 = &g_84;
                        int *l_248 = &g_84;
                        int *l_249 = &l_224;
                        int *l_250 = &l_156;
                        int *l_251 = &l_113;
                        int *l_252 = (void*)0;
                        unsigned short l_253 = 0xE9F4L;
                        g_241 = &g_84;
                        l_253--;
                    }
                    else
                    {
                        short l_256 = 0x992EL;
                        int *l_257 = (void*)0;
                        int *l_258 = &l_224;
                        int *l_259 = &g_84;
                        int *l_260 = &l_156;
                        --l_261;
                    }
                    l_264 = l_224;
                    (*l_273) |= ((((safe_rshift_func_uint16_t_u_u(p_62, (safe_add_func_int16_t_s_s(l_261, g_76.f0)))) < p_62) && ((safe_lshift_func_int8_t_s_s(l_238, 2)) == func_23(l_271))) && l_272);
                }
                else
                {
                    union U4 *l_278 = &g_231;
                    union U1 l_296 = {4294967294UL};
                    int l_306 = (-1L);
                    int l_311 = 0L;
                    int l_313 = 0x62F756BAL;
                    unsigned char l_314 = 4UL;
                    int *l_317 = (void*)0;
                    int *l_318 = &l_313;
                    int *l_319 = &l_156;
                    int *l_320 = &l_224;
                    int *l_321 = &g_84;
                    int *l_322 = &g_84;
                    int *l_323 = &l_311;
                    int *l_324 = &l_224;
                    int *l_325 = &l_311;
                    int *l_326 = &l_156;
                    int *l_327 = &l_238;
                    int *l_328 = &g_84;
                    int *l_329 = &l_238;
                    int *l_330 = &l_238;
                    int *l_331 = &l_224;
                    int *l_332 = &l_306;
                    int *l_333 = &l_224;
                    int *l_334 = &l_113;
                    int *l_335 = &l_313;
                    int *l_336 = &l_238;
                    int *l_337 = &l_224;
                    int *l_338 = (void*)0;
                    int *l_339 = &l_311;
                    int *l_341 = (void*)0;
                    int *l_342 = (void*)0;
                    int *l_343 = &l_340;
                    int *l_344 = (void*)0;
                    int *l_345 = (void*)0;
                    int *l_346 = (void*)0;
                    int *l_347 = &l_238;
                    int *l_349 = &l_348;
                    int *l_350 = &g_84;
                    int *l_351 = &l_313;
                    int *l_352 = &l_306;
                    int *l_353 = &l_238;
                    int *l_354 = (void*)0;
                    int *l_355 = &l_348;
                    int *l_356 = &l_313;
                    int *l_357 = &l_113;
                    int *l_358 = &l_224;
                    int *l_359 = &l_238;
                    int *l_360 = &l_156;
                    int *l_361 = &l_238;
                    int *l_362 = &l_340;
                    int *l_363 = (void*)0;
                    int *l_364 = &l_348;
                    int *l_366 = &l_238;
                    int *l_367 = (void*)0;
                    int *l_368 = &l_348;
                    int *l_369 = &l_311;
                    int *l_370 = (void*)0;
                    int *l_371 = (void*)0;
                    int *l_373 = &l_348;
                    int *l_374 = &l_365;
                    int *l_375 = &l_311;
                    int *l_376 = &l_306;
                    int *l_377 = &l_348;
                    int *l_378 = &l_365;
                    int *l_379 = &l_348;
                    int *l_380 = &l_113;
                    int *l_381 = (void*)0;
                    int *l_382 = (void*)0;
                    int *l_383 = &g_84;
                    int *l_384 = &g_84;
                    int *l_385 = &g_84;
                    int *l_386 = &l_224;
                    int *l_387 = (void*)0;
                    int *l_388 = &l_365;
                    int *l_389 = &l_224;
                    int *l_390 = &l_113;
                    int *l_391 = &l_313;
                    int *l_393 = &l_372;
                    int *l_394 = &l_156;
                    int *l_395 = (void*)0;
                    int *l_397 = &l_224;
                    int *l_400 = (void*)0;
                    int *l_401 = &l_313;
                    int *l_402 = &l_372;
                    int *l_403 = &l_306;
                    int *l_404 = &l_313;
                    int *l_405 = (void*)0;
                    int *l_406 = (void*)0;
                    int *l_407 = &g_84;
                    int *l_408 = (void*)0;
                    int *l_409 = (void*)0;
                    int *l_415 = &l_365;
                    int *l_416 = &l_399;
                    int *l_417 = &l_365;
                    int *l_418 = (void*)0;
                    int *l_419 = &l_365;
                    int *l_420 = &l_399;
                    int *l_421 = &l_311;
                    int *l_422 = &l_348;
                    int *l_423 = &l_340;
                    int *l_424 = &l_398;
                    int *l_425 = &l_365;
                    int *l_426 = &l_348;
                    int *l_427 = &l_311;
                    int *l_428 = &g_84;
                    int *l_429 = &l_348;
                    int *l_430 = &l_313;
                    int *l_431 = &l_306;
                    for (l_156 = 0; (l_156 > (-30)); --l_156)
                    {
                        unsigned short l_276 = 1UL;
                        int *l_277 = &l_113;
                        (*l_277) = l_276;
                        l_278 = l_278;
                        (*l_277) = (*p_64);
                        if ((*p_64))
                            continue;
                    }
                    if ((((g_4 ^ (func_23(l_279) < l_192)) ^ func_23(l_280)) > func_23(g_25)))
                    {
                        return p_65;
                    }
                    else
                    {
                        unsigned char l_287 = 1UL;
                        int *l_303 = (void*)0;
                        int *l_304 = (void*)0;
                        int *l_305 = &l_224;
                        int *l_307 = (void*)0;
                        int *l_308 = (void*)0;
                        int l_309 = 0x02258E79L;
                        int *l_310 = &g_84;
                        int *l_312 = &l_156;
                        (*l_82) = p_63;
                        (*l_305) = (safe_div_func_int8_t_s_s((l_283 == &l_278), (safe_mod_func_uint16_t_u_u((l_287 < (safe_div_func_int16_t_s_s((safe_div_func_int32_t_s_s((safe_lshift_func_int8_t_s_u((*g_72), (safe_div_func_int32_t_s_s(func_23(l_296), ((6UL < (safe_mul_func_uint8_t_u_u(((safe_mul_func_int16_t_s_s(l_238, (safe_lshift_func_uint8_t_u_u(g_86.f3, l_296.f0)))) < l_264), l_261))) & (*g_72)))))), l_287)), p_62))), 0x5C8CL))));
                        l_314--;
                    }
                    g_410++;
                    g_432++;
                }
            }
        }
        else
        {
            unsigned l_452 = 4294967289UL;
            int l_453 = (-1L);
            int l_454 = 0xA7AF2F1AL;
            int l_526 = 0x26045AEAL;
            int l_531 = 0L;
            int l_548 = 0x4C85C1D9L;
            int l_567 = (-1L);
            int l_581 = 5L;
            for (g_84 = 0; (g_84 >= (-21)); --g_84)
            {
                short l_442 = 0xA657L;
                int *l_444 = &l_156;
                int *l_445 = &l_396;
                int ***l_446 = (void*)0;
                int ***l_447 = &l_82;
                for (g_231.f4 = 0; (g_231.f4 != 29); g_231.f4++)
                {
                }
                (*l_444) = ((g_185 && ((l_439 == (*l_190)) > (safe_mod_func_int8_t_s_s((l_442 || func_23(g_25)), 2L)))) && ((safe_unary_minus_func_int8_t_s(1L)) && 0L));
                (*l_82) = l_445;
                (*l_447) = &p_64;
            }
            for (g_172 = 27; (g_172 <= 5); --g_172)
            {
                union U3 **l_455 = &g_75;
                l_453 = (safe_mul_func_int8_t_s_s((l_452 != (-1L)), (*g_72)));
                l_454 ^= g_181;
                if ((*p_64))
                    break;
                (*l_455) = &g_76;
            }
            if ((((safe_mul_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s(func_23(g_25), g_231.f2)), (func_23(l_271) > (safe_div_func_int8_t_s_s((g_432 >= (safe_sub_func_uint32_t_u_u(g_73, g_182))), (*p_65)))))) >= g_4) != p_62))
            {
                union U1 *l_465 = &g_25;
                union U1 **l_464 = &l_465;
                int *l_466 = &l_396;
                int *l_467 = &l_372;
                int *l_468 = &l_454;
                int *l_469 = &g_84;
                int *l_470 = &l_398;
                int *l_471 = &g_84;
                int *l_472 = &g_84;
                int *l_473 = &l_113;
                int *l_474 = (void*)0;
                int *l_475 = (void*)0;
                int *l_476 = &l_399;
                int *l_477 = &l_396;
                int *l_478 = &l_399;
                int *l_479 = &l_398;
                int *l_480 = &l_398;
                int *l_481 = (void*)0;
                int *l_482 = &l_372;
                int *l_483 = &l_398;
                int *l_484 = &g_84;
                int *l_485 = &l_454;
                int *l_486 = &l_398;
                int *l_487 = (void*)0;
                int *l_488 = &l_398;
                int *l_489 = &l_399;
                int l_490 = 0x93EC06C2L;
                int *l_491 = &l_372;
                int *l_492 = (void*)0;
                int *l_493 = &l_453;
                int *l_494 = &l_396;
                int *l_495 = &l_453;
                int *l_496 = &l_113;
                int *l_497 = (void*)0;
                int *l_498 = &l_454;
                int *l_499 = (void*)0;
                int *l_500 = &l_372;
                int *l_501 = &l_396;
                int *l_502 = &l_453;
                int *l_503 = &l_372;
                int *l_504 = (void*)0;
                int *l_505 = &l_490;
                int *l_506 = &l_398;
                int *l_508 = &l_454;
                int *l_509 = &g_84;
                int *l_510 = (void*)0;
                int *l_511 = &l_399;
                int *l_512 = &l_156;
                int *l_513 = (void*)0;
                int *l_514 = &l_398;
                int *l_515 = &l_113;
                int *l_516 = (void*)0;
                int *l_517 = &l_454;
                int *l_518 = &l_156;
                int *l_519 = &l_113;
                int *l_520 = &l_113;
                int l_527 = 0L;
                int *l_528 = (void*)0;
                int *l_529 = &l_398;
                int *l_530 = &l_396;
                int *l_532 = &l_399;
                int *l_533 = (void*)0;
                int *l_534 = &g_507;
                int *l_535 = &l_372;
                int *l_536 = &l_398;
                int *l_537 = &l_113;
                int *l_538 = &l_399;
                int *l_539 = &l_453;
                int *l_540 = &l_396;
                int *l_541 = &l_531;
                int *l_542 = &l_527;
                int *l_543 = &l_156;
                int *l_544 = &l_396;
                int *l_545 = &l_396;
                int *l_546 = &l_156;
                int *l_547 = (void*)0;
                int *l_549 = &g_84;
                int *l_550 = &l_454;
                int *l_551 = (void*)0;
                int *l_552 = &g_507;
                int *l_553 = &l_490;
                int *l_554 = &l_531;
                int *l_555 = &g_84;
                int *l_556 = &g_507;
                int *l_557 = &l_548;
                int *l_558 = (void*)0;
                int *l_559 = &l_454;
                int *l_560 = &l_398;
                int *l_561 = &l_548;
                int *l_562 = &l_398;
                int *l_563 = &g_84;
                int *l_564 = &g_84;
                int *l_565 = &l_396;
                int *l_566 = (void*)0;
                int *l_568 = (void*)0;
                int *l_569 = &l_399;
                int *l_570 = &l_453;
                int *l_571 = &l_454;
                int *l_572 = &l_156;
                int *l_574 = &l_527;
                int *l_575 = (void*)0;
                int *l_576 = &l_396;
                int *l_577 = &l_398;
                int *l_578 = &g_507;
                int *l_579 = &g_507;
                int *l_580 = &g_507;
                int *l_582 = &l_396;
                int *l_583 = &l_398;
                int *l_585 = &l_396;
                int *l_586 = &l_581;
                int *l_587 = &l_531;
                int *l_588 = (void*)0;
                int *l_589 = &g_84;
                int *l_591 = &l_156;
                int *l_592 = &l_490;
                int *l_593 = &g_84;
                int *l_594 = &l_581;
                int *l_595 = &l_581;
                int *l_596 = &l_453;
                int *l_597 = &g_84;
                int *l_599 = &l_531;
                int *l_600 = &l_398;
                (*l_464) = &g_25;
                g_521++;
                (*l_484) = (safe_mul_func_int16_t_s_s(l_526, l_527));
                ++g_602;
            }
            else
            {
                int l_605 = 0L;
                int *l_606 = &g_84;
                l_531 = (l_605 || g_521);
                (*l_606) ^= (*p_64);
                (*l_606) &= (*p_64);
            }
        }
    }
    l_372 = (0x38FFL || func_23(g_25));
    return (**l_189);
}







static char * func_66(int * p_67, char * p_68, int * p_69, char * p_70, unsigned char p_71)
{
    union U3 **l_77 = &g_75;
    char **l_79 = &g_72;
    char ***l_78 = &l_79;
    (*l_77) = g_75;
    (*l_78) = &p_68;
    return &g_73;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_25.f0, "g_25.f0", print_hash_value);
    transparent_crc(g_36, "g_36", print_hash_value);
    transparent_crc(g_73, "g_73", print_hash_value);
    transparent_crc(g_76.f0, "g_76.f0", print_hash_value);
    transparent_crc(g_84, "g_84", print_hash_value);
    transparent_crc(g_86.f0, "g_86.f0", print_hash_value);
    transparent_crc(g_86.f1, "g_86.f1", print_hash_value);
    transparent_crc(g_86.f2, "g_86.f2", print_hash_value);
    transparent_crc(g_86.f3, "g_86.f3", print_hash_value);
    transparent_crc(g_117, "g_117", print_hash_value);
    transparent_crc(g_172, "g_172", print_hash_value);
    transparent_crc(g_181, "g_181", print_hash_value);
    transparent_crc(g_182, "g_182", print_hash_value);
    transparent_crc(g_185, "g_185", print_hash_value);
    transparent_crc(g_188, "g_188", print_hash_value);
    transparent_crc(g_201.f0, "g_201.f0", print_hash_value);
    transparent_crc(g_201.f1, "g_201.f1", print_hash_value);
    transparent_crc(g_231.f0, "g_231.f0", print_hash_value);
    transparent_crc(g_231.f1, "g_231.f1", print_hash_value);
    transparent_crc(g_231.f2, "g_231.f2", print_hash_value);
    transparent_crc(g_231.f3, "g_231.f3", print_hash_value);
    transparent_crc(g_231.f4, "g_231.f4", print_hash_value);
    transparent_crc(g_233, "g_233", print_hash_value);
    transparent_crc(g_392, "g_392", print_hash_value);
    transparent_crc(g_410, "g_410", print_hash_value);
    transparent_crc(g_413, "g_413", print_hash_value);
    transparent_crc(g_414, "g_414", print_hash_value);
    transparent_crc(g_432, "g_432", print_hash_value);
    transparent_crc(g_507, "g_507", print_hash_value);
    transparent_crc(g_521, "g_521", print_hash_value);
    transparent_crc(g_590, "g_590", print_hash_value);
    transparent_crc(g_602, "g_602", print_hash_value);
    transparent_crc(g_695.f0, "g_695.f0", print_hash_value);
    transparent_crc(g_785, "g_785", print_hash_value);
    transparent_crc(g_802, "g_802", print_hash_value);
    transparent_crc(g_910, "g_910", print_hash_value);
    transparent_crc(g_915, "g_915", print_hash_value);
    transparent_crc(g_931, "g_931", print_hash_value);
    transparent_crc(g_1017, "g_1017", print_hash_value);
    transparent_crc(g_1028, "g_1028", print_hash_value);
    transparent_crc(g_1180.f0, "g_1180.f0", print_hash_value);
    transparent_crc(g_1180.f1, "g_1180.f1", print_hash_value);
    transparent_crc(g_1321, "g_1321", print_hash_value);
    transparent_crc(g_1525, "g_1525", print_hash_value);
    transparent_crc(g_1539, "g_1539", print_hash_value);
    transparent_crc(g_1779, "g_1779", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
