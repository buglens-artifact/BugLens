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



static unsigned g_2 = 0x124F01C0L;
static int g_4 = 0x29A3DF60L;
static volatile unsigned g_38 = 4294967295UL;
static unsigned short g_63 = 65530UL;
static int g_66 = 0x387C7A50L;
static short g_68 = 0x3491L;
static unsigned short g_71 = 0xEE8BL;
static char g_78 = 0x70L;
static char g_108 = 3L;
static int g_115 = 0x82C65315L;
static char g_135 = 0x93L;
static char g_139 = 0xCFL;
static int *g_147 = (void*)0;
static unsigned char g_169 = 0xA9L;
static volatile short g_184 = 0x42FAL;
static volatile short *g_183 = &g_184;
static short g_186 = 0xDE48L;
static unsigned short g_247 = 1UL;
static int g_258 = 1L;
static unsigned short g_320 = 1UL;
static int g_363 = (-1L);
static char g_373 = 1L;
static short g_389 = 1L;
static unsigned short g_400 = 0xD4A0L;
static short *g_417 = (void*)0;
static short **g_416 = &g_417;
static char g_475 = 0xEDL;
static int g_502 = 0x8319FEF0L;
static int g_524 = 0x526A48ABL;
static char g_532 = (-9L);
static char g_543 = 0x18L;
static unsigned short g_553 = 0x2E19L;
static unsigned char g_634 = 255UL;
static unsigned char g_750 = 0UL;
static unsigned char g_769 = 255UL;
static unsigned g_795 = 4294967295UL;
static unsigned g_797 = 7UL;
static unsigned g_801 = 1UL;
static int g_807 = 0x239230E0L;
static unsigned char *g_893 = &g_634;
static short g_894 = 1L;
static int g_999 = 0L;
static unsigned short g_1009 = 3UL;
static int g_1092 = (-1L);
static unsigned g_1119 = 1UL;
static int g_1269 = (-1L);
static short g_1273 = 0x7733L;
static int g_1285 = 4L;
static unsigned g_1293 = 0x90BBE034L;
static short g_1325 = 0x6A77L;
static char g_1348 = (-1L);
static int **g_1388 = &g_147;
static volatile char g_1399 = 0L;
static volatile char *g_1398 = &g_1399;
static volatile char **g_1397 = &g_1398;
static char g_1401 = (-1L);
static volatile int g_1425 = 0x4642A132L;
static volatile int * volatile g_1424 = &g_1425;
static volatile int * volatile *g_1423 = &g_1424;
static volatile int * volatile **g_1422 = &g_1423;
static volatile int * volatile ***g_1421 = &g_1422;



static int func_1(void);
static int * func_42(unsigned char p_43, short p_44, unsigned short p_45, int p_46, unsigned p_47);
static unsigned char func_52(int p_53, unsigned char p_54, int * p_55, unsigned short p_56);
static char func_57(unsigned p_58);
static unsigned func_80(int p_81, char p_82);
static int func_83(int p_84, unsigned short p_85, unsigned short * p_86);
static unsigned short * func_88(unsigned p_89, unsigned p_90, int p_91, int * p_92);
static char func_93(unsigned short * p_94, int ** p_95, int * p_96, int p_97);
static unsigned short * func_98(unsigned p_99, int * p_100, char * p_101, char * p_102);
static unsigned short * func_103(unsigned p_104);
static int func_1(void)
{
    int *l_3 = &g_4;
    int *l_5 = &g_4;
    int *l_6 = &g_4;
    int *l_7 = &g_4;
    int l_8 = 0x12491E29L;
    int *l_9 = &l_8;
    int *l_10 = &g_4;
    int *l_11 = &g_4;
    int *l_12 = &g_4;
    int *l_13 = &l_8;
    int *l_14 = &l_8;
    int *l_15 = (void*)0;
    int *l_16 = &g_4;
    int *l_17 = &l_8;
    int *l_18 = &g_4;
    int l_19 = 0x026D8D38L;
    int *l_20 = &g_4;
    int *l_21 = &g_4;
    int *l_22 = (void*)0;
    int *l_23 = &l_19;
    int *l_24 = &g_4;
    int *l_25 = (void*)0;
    int *l_26 = &l_19;
    int *l_27 = &l_8;
    int *l_28 = &l_19;
    int *l_29 = (void*)0;
    int l_30 = 5L;
    int l_31 = 0L;
    int *l_32 = (void*)0;
    int l_33 = 0x8CD54673L;
    int *l_34 = &l_19;
    int *l_35 = (void*)0;
    int *l_36 = &l_31;
    int *l_37 = &l_8;
    int **l_41 = &l_17;
    int **l_48 = (void*)0;
    int l_1451 = 4L;
    (*l_3) = g_2;
    g_38++;
    (*l_41) = &l_19;

    ;
    (*g_1388) = func_42(g_2, (g_38 > ((void*)0 == l_48)), (safe_add_func_int8_t_s_s((((safe_unary_minus_func_int8_t_s((func_52(((**l_41) = (func_57(g_4) | 255UL)), l_1451, &g_1285, g_475) || 0x95L))) && (-9L)) & g_524), 255UL)), (*l_9), g_801);

    ;

    ;
    return (*g_1424);
}







static int * func_42(unsigned char p_43, short p_44, unsigned short p_45, int p_46, unsigned p_47)
{
    unsigned l_1538 = 0UL;
    int *l_1541 = &g_258;
    (*g_1423) = (**g_1422);
    l_1538++;
    return l_1541;


}







static unsigned char func_52(int p_53, unsigned char p_54, int * p_55, unsigned short p_56)
{
    unsigned short l_1456 = 0xDC3EL;
    unsigned short *l_1457 = &g_71;
    int *l_1458 = &g_258;
    int l_1480 = 0xC1DB2590L;
    int l_1495 = 1L;
    int l_1504 = 0x8C7A9767L;
    int l_1514 = 0x8F532E0FL;
    if ((((*g_893) = (safe_lshift_func_int8_t_s_s((safe_lshift_func_int16_t_s_u(l_1456, ((*l_1457) |= p_53))), 1))) != func_93(&p_56, &g_147, l_1458, (safe_add_func_uint16_t_u_u((((*p_55) >= (!((func_83(p_53, (p_56 = p_53), func_103(func_93(&l_1456, &g_147, l_1458, (*l_1458)))) >= l_1456) <= g_769))) < 0x0035L), p_54)))))
    {
        unsigned l_1461 = 0x0BB59B05L;
        int l_1462 = (-1L);
        (*l_1458) &= (p_53 || (1UL != (*g_893)));
        (*g_1388) = &p_53;

        ;
        (*l_1458) = (*g_147);
        l_1462 = l_1461;
    }
    else
    {
        unsigned l_1532 = 0xA0A91122L;
        int *l_1537 = &l_1514;
        for (g_373 = (-14); (g_373 >= 22); g_373 = safe_add_func_int16_t_s_s(g_373, 2))
        {
            short l_1486 = 0x132BL;
            int l_1488 = 0x3C732B1AL;
            int l_1498 = 1L;
            int l_1530 = 0xD71BF60DL;
            for (g_78 = 0; (g_78 >= (-25)); g_78 = safe_sub_func_int16_t_s_s(g_78, 7))
            {
                int *l_1467 = &g_1092;
                int *l_1468 = &g_1092;
                int *l_1469 = &g_4;
                int *l_1470 = (void*)0;
                int l_1471 = 9L;
                int *l_1472 = &g_1269;
                int *l_1473 = (void*)0;
                int *l_1474 = &g_807;
                int *l_1475 = &g_66;
                int *l_1476 = &g_1269;
                int *l_1477 = &g_115;
                int *l_1478 = &g_4;
                int *l_1479 = &g_807;
                int *l_1481 = (void*)0;
                int *l_1482 = &g_1269;
                int *l_1483 = &g_502;
                int *l_1484 = &g_66;
                int *l_1485 = (void*)0;
                int *l_1487 = (void*)0;
                int *l_1489 = &g_1285;
                int *l_1490 = (void*)0;
                int *l_1491 = &g_258;
                int *l_1492 = &g_502;
                int *l_1493 = (void*)0;
                int *l_1494 = &l_1471;
                int *l_1496 = &g_258;
                int *l_1497 = &g_66;
                int *l_1499 = &g_4;
                int *l_1500 = &l_1498;
                int *l_1501 = (void*)0;
                int *l_1502 = &g_66;
                int *l_1503 = (void*)0;
                int *l_1505 = &g_1285;
                int *l_1506 = (void*)0;
                int *l_1507 = &l_1498;
                int l_1508 = (-1L);
                int *l_1509 = &l_1504;
                int *l_1510 = &g_4;
                int *l_1511 = &l_1504;
                int *l_1512 = &g_1285;
                int *l_1513 = &l_1504;
                int *l_1515 = &g_1269;
                int *l_1516 = &g_115;
                int *l_1517 = &l_1508;
                int *l_1518 = &l_1488;
                int *l_1519 = &g_807;
                int *l_1520 = &l_1498;
                int *l_1521 = &l_1498;
                int *l_1522 = &l_1471;
                int *l_1523 = &g_66;
                int *l_1524 = &g_502;
                int *l_1525 = &l_1498;
                int *l_1526 = &l_1471;
                int *l_1527 = &g_807;
                int *l_1528 = &l_1480;
                int *l_1529 = &l_1498;
                int *l_1531 = &l_1514;
                (*g_1388) = (void*)0;

                ;
                l_1532--;
            }
            if (g_1293)
                break;
            for (g_66 = 0; (g_66 > (-11)); g_66 = safe_sub_func_int16_t_s_s(g_66, 1))
            {
                (*g_1388) = &p_53;

                ;
                if ((*p_55))
                    break;
            }
            l_1537 = ((*g_1388) = (*g_1388));

            ;
        }

        ;
        ;
        (*l_1458) = ((*p_55) = (*p_55));
    }

    ;
    (*l_1458) |= (*p_55);
    (*g_1388) = (*g_1388);
    return (*g_893);


}







static char func_57(unsigned p_58)
{
    int l_59 = (-1L);
    int l_69 = 0xFD7F7FFFL;
    int **l_808 = (void*)0;
    int *l_820 = &l_69;
    int l_847 = 4L;
    int l_878 = 0x8B28E14CL;
    char *l_900 = (void*)0;
    char **l_899 = &l_900;
    int l_939 = (-9L);
    int l_940 = 1L;
    int l_964 = 0xFF77F35DL;
    unsigned short *l_1017 = &g_553;
    int *l_1020 = &l_878;
    int *l_1021 = &l_69;
    int *l_1022 = &g_807;
    int *l_1023 = &g_66;
    int *l_1024 = &g_258;
    int *l_1025 = (void*)0;
    int *l_1026 = &l_939;
    int *l_1027 = &g_4;
    int *l_1028 = (void*)0;
    int *l_1029 = (void*)0;
    int *l_1030 = &l_940;
    int *l_1031 = (void*)0;
    int *l_1032 = &l_939;
    int *l_1033 = (void*)0;
    int *l_1034 = &l_940;
    int *l_1035 = &l_847;
    int *l_1036 = &g_115;
    int *l_1037 = &l_964;
    int *l_1038 = &l_69;
    int *l_1039 = &g_502;
    int *l_1040 = &g_66;
    int *l_1041 = &g_502;
    int *l_1042 = (void*)0;
    int *l_1043 = &l_964;
    int *l_1044 = (void*)0;
    int *l_1045 = &l_847;
    int *l_1046 = &l_878;
    int *l_1047 = (void*)0;
    int *l_1048 = &l_878;
    int *l_1049 = (void*)0;
    int *l_1050 = &l_878;
    int *l_1051 = &l_878;
    int *l_1052 = &g_66;
    int *l_1053 = &g_502;
    int *l_1054 = &g_66;
    int *l_1055 = (void*)0;
    int *l_1056 = &l_878;
    int l_1057 = 6L;
    int *l_1058 = &l_939;
    int *l_1059 = &g_502;
    int l_1060 = 0x46391254L;
    int *l_1061 = &l_69;
    int *l_1062 = (void*)0;
    int l_1063 = (-4L);
    int *l_1064 = &l_964;
    int *l_1065 = &g_502;
    int l_1066 = 0xE8020F51L;
    int *l_1067 = &l_940;
    int *l_1068 = (void*)0;
    int *l_1069 = &l_1060;
    int *l_1070 = &g_66;
    int *l_1071 = &l_964;
    int *l_1072 = &l_847;
    int *l_1073 = &g_4;
    int *l_1074 = &g_258;
    int *l_1075 = &g_807;
    int *l_1076 = &g_66;
    int *l_1077 = &l_940;
    int *l_1078 = &g_66;
    int l_1079 = (-4L);
    int *l_1080 = &g_258;
    int l_1081 = 1L;
    int *l_1082 = &l_939;
    int *l_1083 = &g_115;
    int *l_1084 = &l_1063;
    int l_1085 = 0x3A9B49C1L;
    int l_1086 = 1L;
    int *l_1087 = &l_1057;
    int *l_1088 = &l_1057;
    int *l_1089 = (void*)0;
    int *l_1090 = &g_502;
    int *l_1091 = &l_69;
    int *l_1093 = (void*)0;
    int *l_1094 = &g_115;
    int *l_1095 = &l_939;
    int *l_1096 = &l_939;
    int *l_1097 = &g_807;
    int *l_1098 = &l_1085;
    int *l_1099 = &g_1092;
    int l_1100 = (-1L);
    int *l_1101 = &l_1057;
    int *l_1102 = &l_939;
    int *l_1103 = (void*)0;
    int *l_1104 = &l_878;
    int l_1105 = 7L;
    int *l_1106 = &l_1060;
    int *l_1107 = &l_878;
    int *l_1108 = &l_1081;
    int *l_1109 = &l_69;
    int *l_1110 = &l_1086;
    int *l_1111 = (void*)0;
    int *l_1112 = &l_1079;
    int *l_1113 = &l_1079;
    int l_1114 = 0xC194C9D0L;
    int *l_1115 = &l_1066;
    int *l_1116 = &l_1114;
    int *l_1117 = (void*)0;
    int l_1118 = 0xDDE00927L;
    unsigned short l_1143 = 0x224EL;
    int l_1371 = 0x35D4D810L;
    int *l_1386 = &l_1118;
    unsigned l_1407 = 0xDAD497E7L;
    if (l_59)
    {
        unsigned short *l_62 = &g_63;
        int *l_64 = &g_4;
        short *l_65 = (void*)0;
        short *l_67 = &g_68;
        unsigned short *l_70 = &g_71;
        char *l_107 = &g_108;
        int l_806 = 0xAD862C61L;
        unsigned l_895 = 1UL;
        if ((g_4 <= (safe_rshift_func_uint16_t_u_u((((*l_62) = g_2) && ((*l_67) = (g_66 &= (((void*)0 == l_64) < (*l_64))))), ((*l_70)--)))))
        {
            int **l_74 = &l_64;
            (*l_74) = l_64;
        }
        else
        {
            char *l_77 = &g_78;
            int l_87 = 0x84814C7CL;
            unsigned short **l_106 = &l_70;
            int **l_189 = &l_64;
            int *l_405 = &g_115;
            int ***l_825 = (void*)0;
            int ****l_824 = &l_825;
            int l_921 = 0x11C98631L;
            int l_925 = (-3L);
            int l_928 = 0xFF34F5CDL;
            int l_954 = 0x124C2BE6L;
            int l_983 = (-1L);
            int l_990 = 0x3160A0A5L;
            if ((safe_add_func_int8_t_s_s(((*l_77) = p_58), (((safe_unary_minus_func_int8_t_s(((func_80(((*l_405) = (func_83(l_87, l_59, ((*l_106) = func_88(p_58, (247UL & func_93(func_98((l_67 == ((*l_106) = func_103(l_87))), l_64, l_107, &g_108), l_189, l_64, g_186)), g_186, &g_258))) != l_59)), g_389) > 1UL) ^ 0xAF3A1AADL))) || l_806) > g_807))))
            {
                l_69 ^= g_532;
                (*l_405) &= l_806;
                (*l_405) &= p_58;
            }
            else
            {
                int ***l_809 = &l_808;
                int *l_818 = &l_69;
                (*l_405) = func_83(p_58, g_389, l_67);
                if (((*l_818) = ((*l_405) = p_58)))
                {
                    int l_819 = 1L;
                    l_819 ^= (*l_818);
                    l_820 = (*l_189);

                    ;
                    (*l_189) = (*l_189);
                }
                else
                {
                    int *l_821 = &l_69;
                    (*l_189) = l_821;

                    ;
                }

                ;
                ;
                g_147 = &g_115;

                ;
            }

            ;


            ;
            if (((safe_add_func_uint16_t_u_u((((*l_824) = &l_808) != &l_808), p_58)) | g_68))
            {
                int l_826 = 0x342A9266L;
                int l_827 = 0x03E0EB51L;
                int *l_828 = &g_807;
                int *l_829 = &l_69;
                int l_830 = (-4L);
                int l_831 = 0x4D24582EL;
                int *l_832 = (void*)0;
                int *l_833 = &l_826;
                int *l_834 = (void*)0;
                int *l_835 = &l_806;
                int *l_836 = (void*)0;
                int *l_837 = &l_830;
                int *l_838 = &g_4;
                int *l_839 = (void*)0;
                int *l_840 = &l_806;
                int *l_841 = (void*)0;
                int *l_842 = &g_258;
                int *l_843 = &g_4;
                int *l_844 = (void*)0;
                int *l_845 = &l_830;
                int *l_846 = &g_4;
                int *l_848 = &g_66;
                int *l_849 = &g_258;
                int *l_850 = &g_66;
                int *l_851 = &g_115;
                int *l_852 = &l_827;
                int *l_853 = &l_826;
                int *l_854 = &l_826;
                int *l_855 = &l_826;
                int *l_856 = &l_87;
                int *l_857 = &l_87;
                int *l_858 = &l_806;
                int l_859 = 0x5F10CFA0L;
                int *l_860 = &l_69;
                int *l_861 = &g_502;
                int *l_862 = &g_4;
                int *l_863 = &l_859;
                int *l_864 = &g_502;
                int *l_865 = &l_831;
                int *l_866 = &l_806;
                int *l_867 = (void*)0;
                int *l_868 = &g_502;
                int *l_869 = &l_806;
                int *l_870 = &g_66;
                int *l_871 = (void*)0;
                int *l_872 = &l_806;
                int *l_873 = &l_847;
                int *l_874 = &l_831;
                int *l_875 = &l_827;
                int *l_876 = &l_806;
                int *l_877 = &g_4;
                int *l_879 = &l_69;
                int *l_880 = (void*)0;
                int *l_881 = &l_826;
                int *l_882 = (void*)0;
                int *l_883 = &l_831;
                int *l_884 = &g_66;
                int *l_885 = &l_878;
                unsigned l_886 = 0xB8F6BA0BL;
                int ****l_892 = &l_825;
                --l_886;
                (*l_858) = (((((safe_add_func_int32_t_s_s((!(safe_unary_minus_func_uint16_t_u(((0x13L ^ ((void*)0 == l_892)) | p_58)))), (g_475 && ((g_893 = l_77) != (void*)0)))) == g_2) >= ((*l_70) = (((((((((0xB1F7L == 0xCA79L) & p_58) >= g_769) > p_58) != g_258) <= 0x0D2A5A22L) <= g_894) == l_895) != (*l_850)))) ^ 252UL) | p_58);

                ;
            }
            else
            {
                unsigned char l_898 = 0UL;
                int *l_904 = &l_69;
                int *l_905 = &g_4;
                int *l_906 = &g_4;
                int *l_907 = &l_878;
                int *l_908 = (void*)0;
                int *l_909 = &g_258;
                int *l_910 = &g_807;
                int *l_911 = &g_115;
                int *l_912 = &l_87;
                int *l_913 = &g_115;
                int *l_914 = &g_807;
                int *l_915 = (void*)0;
                int *l_916 = &l_878;
                int *l_917 = &l_847;
                int *l_918 = &g_4;
                int *l_919 = &g_807;
                int *l_920 = &l_806;
                int *l_922 = (void*)0;
                int *l_923 = &g_502;
                int *l_924 = &l_87;
                int *l_926 = &l_921;
                int *l_927 = (void*)0;
                int *l_929 = &l_806;
                int *l_930 = &g_258;
                int *l_931 = &l_921;
                int *l_932 = (void*)0;
                int *l_933 = &l_878;
                int *l_934 = &g_4;
                int *l_935 = &l_69;
                int *l_936 = &l_921;
                int *l_937 = &l_928;
                int *l_938 = (void*)0;
                int *l_941 = &l_847;
                int *l_942 = &g_115;
                int *l_943 = &g_4;
                int *l_944 = &g_4;
                int l_945 = 9L;
                int *l_946 = &l_928;
                int *l_947 = &l_940;
                int *l_948 = (void*)0;
                int *l_949 = &l_921;
                int *l_950 = &g_258;
                int *l_951 = &g_115;
                int *l_952 = (void*)0;
                int *l_953 = &l_806;
                int *l_955 = (void*)0;
                int *l_956 = (void*)0;
                int *l_957 = &g_4;
                int *l_958 = &g_807;
                int *l_959 = (void*)0;
                int *l_960 = &g_4;
                int *l_961 = &g_502;
                int *l_962 = &g_66;
                int *l_963 = (void*)0;
                int *l_965 = &l_945;
                int *l_966 = &l_954;
                int *l_967 = (void*)0;
                int *l_968 = &l_847;
                int *l_969 = &g_66;
                int *l_970 = &g_502;
                int *l_971 = &l_921;
                int *l_972 = &l_940;
                int *l_973 = (void*)0;
                int l_974 = 0x64719483L;
                int *l_975 = &l_945;
                int *l_976 = &g_66;
                int *l_977 = &l_945;
                int *l_978 = &l_87;
                int *l_979 = &l_878;
                int *l_980 = &l_806;
                int *l_981 = (void*)0;
                int *l_982 = &l_69;
                int *l_984 = (void*)0;
                int *l_985 = &l_925;
                int *l_986 = &g_66;
                int *l_987 = &l_974;
                int *l_988 = (void*)0;
                int *l_989 = &l_847;
                int *l_991 = &g_115;
                int *l_992 = &l_921;
                int l_993 = 5L;
                int *l_994 = (void*)0;
                int *l_995 = &l_940;
                int *l_996 = (void*)0;
                int *l_997 = &l_69;
                int *l_998 = &g_502;
                int *l_1000 = &g_4;
                int *l_1001 = &l_847;
                int *l_1002 = &l_87;
                int *l_1003 = &l_940;
                int *l_1004 = &l_940;
                int *l_1005 = &l_847;
                int *l_1006 = (void*)0;
                int *l_1007 = &g_258;
                int *l_1008 = &g_115;
                if ((((+(-1L)) < (-2L)) >= p_58))
                {
                    for (g_169 = 0; (g_169 != 46); ++g_169)
                    {
                        l_898 = ((*l_405) = 0x674A97AAL);
                        g_115 = p_58;
                    }
                }
                else
                {
                    char ***l_901 = (void*)0;
                    char ***l_902 = (void*)0;
                    char ***l_903 = &l_899;
                    g_147 = &l_806;

                    ;
                    (*l_903) = l_899;
                    return g_139;


                }
                --g_1009;
            }

            ;
            ;
            return p_58;
        }
    }
    else
    {
        for (g_320 = 19; (g_320 <= 26); g_320 = safe_add_func_int16_t_s_s(g_320, 2))
        {
            char l_1014 = 0xF6L;
            if (l_1014)
                break;
        }
    }
    g_807 |= ((7L < (*l_820)) > (((safe_mod_func_int8_t_s_s((*l_820), (*l_820))) | func_83(g_78, g_247, l_1017)) > (((((*g_893) &= (safe_sub_func_uint8_t_u_u((*l_820), 0x4DL))) > (*l_820)) == (*l_820)) && 0L)));

    ;
    g_1119++;
    if ((safe_div_func_int32_t_s_s(g_363, (g_894 | (safe_rshift_func_uint16_t_u_s(0UL, (func_93(l_1017, &g_147, &g_115, p_58) > ((&l_808 != (void*)0) >= g_475))))))))
    {
        unsigned l_1133 = 0UL;
        int *l_1134 = &l_878;
        int l_1158 = (-1L);
        int l_1162 = 0xE5C3C306L;
        int l_1204 = 0xFCA7302AL;
        int l_1225 = 0x13781D60L;
        int l_1234 = 0x31A81972L;
        int l_1284 = 4L;
        int l_1292 = 0x9CD00893L;
        unsigned short *l_1347 = &g_400;
        int **l_1350 = &l_1089;
        (*l_1051) ^= (*l_1106);
        if ((~0x75336A76L))
        {
            char l_1128 = 0L;
            int **l_1135 = (void*)0;
            int **l_1136 = (void*)0;
            int **l_1137 = &l_1082;
            for (g_634 = 0; (g_634 <= 15); g_634 = safe_add_func_uint32_t_u_u(g_634, 7))
            {
                (*l_1040) = ((~l_1128) > (0xBCD6L == ((*l_1017) |= 1UL)));
                (*l_1097) = (safe_add_func_uint16_t_u_u((safe_add_func_uint8_t_u_u(p_58, 0x94L)), l_1133));
                return g_115;
            }
            g_147 = ((*l_1137) = l_1134);

            ;
            ;
        }
        else
        {
            int l_1140 = 1L;
            short l_1146 = 0x296BL;
            unsigned *l_1153 = (void*)0;
            int l_1163 = 0xCEB2D7CFL;
            int l_1164 = 0x46B0B02AL;
            int l_1179 = 1L;
            int l_1183 = 0x7664F26FL;
            int l_1203 = (-10L);
            int l_1241 = 0x56BF9010L;
            int l_1248 = 0xDD9E9FC1L;
            unsigned l_1326 = 0x5BF75DF3L;
            if (((*l_1070) = (safe_lshift_func_uint8_t_u_u((l_1140 = ((l_1140 > (safe_add_func_uint16_t_u_u(((*l_1017) = (*l_1083)), (((((!((*l_1030) & 247UL)) > func_83((*l_1134), l_1143, &g_1009)) < (p_58 >= (*l_1112))) >= 2L) != 4UL)))) > (*g_893))), 1))))
            {
                short l_1154 = 0L;
                int l_1156 = (-2L);
                int l_1157 = 0x5097BD75L;
                int l_1161 = 0x0B213DE7L;
                int l_1165 = (-1L);
                int l_1190 = 0x509B7063L;
                int l_1215 = 2L;
                int l_1274 = (-1L);
                unsigned short *l_1344 = (void*)0;
                if (((*l_1134) = (*l_1134)))
                {
                    unsigned short l_1155 = 1UL;
                    int l_1159 = 0L;
                    int l_1219 = 0L;
                    int l_1226 = (-1L);
                    int l_1296 = 0L;
                    int *l_1297 = (void*)0;
                    int *l_1298 = (void*)0;
                    int *l_1299 = &l_1225;
                    int *l_1300 = (void*)0;
                    int l_1301 = (-1L);
                    int *l_1302 = &l_1203;
                    int *l_1303 = (void*)0;
                    int *l_1304 = (void*)0;
                    int *l_1305 = &l_1159;
                    int *l_1306 = &l_1100;
                    int *l_1307 = &l_1118;
                    int *l_1308 = &l_1165;
                    int *l_1309 = &l_1241;
                    int *l_1310 = &l_939;
                    int *l_1311 = &g_66;
                    int *l_1312 = &l_1158;
                    int *l_1313 = &l_1296;
                    int *l_1314 = &l_964;
                    int *l_1315 = &l_939;
                    int *l_1316 = &g_66;
                    int *l_1317 = &l_1179;
                    int *l_1318 = &l_1157;
                    int *l_1319 = &l_1204;
                    int *l_1320 = &l_1190;
                    int *l_1321 = (void*)0;
                    int *l_1322 = &l_878;
                    int *l_1323 = (void*)0;
                    int *l_1324 = &l_1114;
                    for (l_1118 = 1; (l_1118 != (-2)); --l_1118)
                    {
                        (*l_1106) |= l_1146;
                        if (l_1140)
                            break;
                        (*l_1072) |= (*l_1080);
                    }
                    for (g_68 = 0; (g_68 == (-5)); g_68 = safe_sub_func_int16_t_s_s(g_68, 8))
                    {
                        int *l_1149 = &g_258;
                        int **l_1150 = &l_1025;
                        unsigned *l_1152 = &g_797;
                        unsigned **l_1151 = &l_1152;
                        int l_1160 = (-6L);
                        int *l_1166 = &l_1118;
                        int *l_1167 = (void*)0;
                        int *l_1168 = &g_258;
                        int *l_1169 = &l_1160;
                        int *l_1170 = (void*)0;
                        int *l_1171 = &g_4;
                        int *l_1172 = &l_69;
                        int *l_1173 = &l_1100;
                        int *l_1174 = (void*)0;
                        int *l_1175 = &l_1164;
                        int *l_1176 = &g_502;
                        int *l_1177 = (void*)0;
                        int *l_1178 = &l_1163;
                        int *l_1180 = &l_69;
                        int *l_1181 = &l_1160;
                        int *l_1182 = &g_115;
                        int *l_1184 = &g_807;
                        int *l_1185 = &l_1163;
                        int *l_1186 = &l_1179;
                        int l_1187 = 0xCEAFF3A2L;
                        int *l_1188 = (void*)0;
                        int *l_1189 = &l_1100;
                        int *l_1191 = &l_1057;
                        int *l_1192 = &l_1156;
                        int *l_1193 = &l_939;
                        int *l_1194 = (void*)0;
                        int *l_1195 = &g_4;
                        int *l_1196 = &l_1165;
                        int *l_1197 = &g_115;
                        int *l_1198 = &l_1140;
                        int *l_1199 = (void*)0;
                        int *l_1200 = (void*)0;
                        int *l_1201 = &l_1081;
                        int *l_1202 = &l_1190;
                        int *l_1205 = &l_1105;
                        int *l_1206 = (void*)0;
                        int *l_1207 = &l_1158;
                        int *l_1208 = (void*)0;
                        int *l_1209 = &l_847;
                        int *l_1210 = &l_940;
                        int *l_1211 = &l_940;
                        int *l_1212 = &l_1183;
                        int *l_1213 = &g_66;
                        int *l_1214 = &l_1140;
                        int *l_1216 = &l_1190;
                        int *l_1217 = &l_1165;
                        int *l_1218 = &l_1158;
                        int *l_1220 = (void*)0;
                        int *l_1221 = &l_1057;
                        int *l_1222 = &g_4;
                        int *l_1223 = &l_1163;
                        int *l_1224 = &g_4;
                        int *l_1227 = &l_1085;
                        int *l_1228 = &g_4;
                        int *l_1229 = &l_1157;
                        int *l_1230 = &g_502;
                        int *l_1231 = (void*)0;
                        int *l_1232 = &l_1114;
                        int *l_1233 = &l_847;
                        int *l_1235 = &l_878;
                        int *l_1236 = &l_1161;
                        int *l_1237 = (void*)0;
                        int *l_1238 = &l_1219;
                        int *l_1239 = &l_1164;
                        int *l_1240 = &l_1105;
                        int *l_1242 = &l_847;
                        int l_1243 = 0xEF6D6F02L;
                        int *l_1244 = &l_1234;
                        int *l_1245 = &l_1157;
                        int *l_1246 = &l_1063;
                        int *l_1247 = &l_1114;
                        int *l_1249 = &l_1219;
                        int *l_1250 = &l_1063;
                        int *l_1251 = &l_939;
                        int *l_1252 = &l_847;
                        int *l_1253 = (void*)0;
                        int *l_1254 = &g_4;
                        int l_1255 = 0xB46C042AL;
                        int *l_1256 = &l_1190;
                        int *l_1257 = &l_1159;
                        int *l_1258 = &l_1187;
                        int *l_1259 = &l_1255;
                        int *l_1260 = &l_1158;
                        int *l_1261 = &l_1066;
                        int *l_1262 = &l_1215;
                        int *l_1263 = &l_1234;
                        int *l_1264 = &l_1234;
                        int *l_1265 = &l_1079;
                        int *l_1266 = &g_1092;
                        int *l_1267 = &l_1159;
                        int *l_1268 = &l_1187;
                        int *l_1270 = &l_1248;
                        int *l_1271 = &l_1156;
                        int *l_1272 = (void*)0;
                        int *l_1275 = &l_1161;
                        int *l_1276 = &g_807;
                        int *l_1277 = &l_1241;
                        int *l_1278 = &l_1190;
                        int *l_1279 = &l_1204;
                        int *l_1280 = &g_807;
                        int *l_1281 = (void*)0;
                        int *l_1282 = &l_1079;
                        int *l_1283 = &l_69;
                        int *l_1286 = &l_940;
                        int *l_1287 = &l_1085;
                        int *l_1288 = &l_1219;
                        int *l_1289 = &l_1243;
                        int *l_1290 = (void*)0;
                        int *l_1291 = &l_1215;
                        (*l_1150) = l_1149;

                        ;
                        l_1154 ^= (((*l_1151) = &g_797) != l_1153);
                        l_1155 = (-1L);
                        g_1293++;
                    }

                    ;
                    l_1326++;
                    (*l_1051) = ((safe_add_func_int8_t_s_s((*l_1134), (((*g_893) = (g_750 >= (p_58 | (*g_893)))) && (-6L)))) == 0xEFB791F2L);
                }
                else
                {
                    unsigned l_1334 = 4294967295UL;
                    int *l_1346 = &g_258;
                    for (g_63 = 8; (g_63 == 42); g_63 = safe_add_func_uint8_t_u_u(g_63, 5))
                    {
                        int l_1333 = 0xA993EDD9L;
                        int **l_1337 = (void*)0;
                        int **l_1338 = &l_1052;
                        int **l_1339 = &l_1099;
                        int ***l_1345 = &l_808;
                        (*l_1075) ^= l_1157;
                        l_1334++;
                        (*l_1339) = (g_147 = ((*l_1338) = (void*)0));

                        ;
                        ;
                        ;
                        (*l_1037) |= (safe_add_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_s((func_83(g_634, func_93(l_1344, ((*l_1345) = &l_1101), l_1346, p_58), l_1347) || (l_1241 = p_58)), 8)) != g_1348), g_1285));

                        ;
                        ;
                        ;
                    }

                    ;
                    ;
                    ;
                    ;
                }

                ;
                ;
                ;
                ;
                ;
            }
            else
            {
                int l_1349 = 0x80B08F5DL;
                (*l_820) &= (l_1349 > func_80(p_58, l_1349));



                (*l_1075) ^= p_58;
                return l_1349;
            }

            ;
            ;
            ;
            ;
            ;
            ;
            (*l_1134) = (-1L);
            (*l_1030) = p_58;
        }

        ;
        ;
        ;
        ;
        ;
        ;
        ;
        (*l_1350) = &l_1204;

        ;
        (*l_1350) = &g_502;

        ;
    }
    else
    {
        int *l_1351 = &g_807;
        int **l_1352 = &l_1035;
        int *l_1353 = &l_940;
        unsigned short l_1358 = 0x9D30L;
        unsigned *l_1364 = &g_1293;
        int l_1393 = 1L;
        (*l_1352) = l_1351;

        ;
        l_1353 = &l_1086;

        ;
        for (l_1081 = 9; (l_1081 == 11); l_1081 = safe_add_func_uint32_t_u_u(l_1081, 4))
        {
            unsigned **l_1361 = (void*)0;
            unsigned **l_1362 = (void*)0;
            unsigned **l_1363 = (void*)0;
            int l_1381 = 0xE1AAD818L;
            int **l_1385 = &l_1115;
            int ***l_1420 = &l_808;
            int ****l_1419 = &l_1420;
            unsigned short *l_1440 = (void*)0;
            (*l_1098) = p_58;
        }
    }

    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    return g_524;


}







static unsigned func_80(int p_81, char p_82)
{
    short *l_415 = &g_389;
    short **l_414 = &l_415;
    int l_418 = 0xADAEAB58L;
    unsigned short *l_419 = &g_400;
    short l_482 = (-2L);
    int l_493 = 0L;
    int l_494 = 1L;
    int l_516 = (-1L);
    char *l_647 = &g_373;
    char **l_646 = &l_647;
    int **l_655 = &g_147;
    short l_778 = 1L;
    unsigned char *l_798 = &g_634;
    int l_804 = (-1L);
    if (func_83((!1L), ((l_418 = (safe_add_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u(0x3A04L, (safe_lshift_func_int16_t_s_u(func_83(((safe_rshift_func_int16_t_s_s(((g_416 = l_414) != &l_415), 15)) >= 0xF62BL), l_418, l_419), 12)))), g_186))) || 0x0B88990DL), l_419))
    {
        int *l_420 = (void*)0;
        int *l_421 = &g_258;
        (*l_421) |= 0x0730238BL;
    }
    else
    {
        char l_424 = 0xD2L;
        int l_495 = 0L;
        int l_541 = 0xA7B99C51L;
        int l_762 = 0x275DC9E8L;
        int l_765 = 5L;
        unsigned short *l_777 = &g_71;
        int *l_779 = &l_495;
        for (g_139 = 20; (g_139 < 22); g_139 = safe_add_func_uint16_t_u_u(g_139, 9))
        {
            unsigned l_425 = 0x2783F5DFL;
            unsigned char l_429 = 9UL;
            int l_442 = (-1L);
            int l_594 = 0xFD493A94L;
            int **l_652 = (void*)0;
            char l_699 = 1L;
            short l_756 = 0L;
            int l_761 = 6L;
            int *l_776 = &g_4;
            if (p_82)
            {
                short l_496 = 8L;
                int l_529 = (-1L);
                int l_701 = 0x6EE4CD44L;
                int l_703 = 2L;
                int l_723 = 0L;
                if (l_424)
                {
                    int *l_426 = &g_4;
                    int l_520 = 5L;
                    int l_548 = 0L;
                    (*l_426) = l_425;
                    (*l_426) &= (safe_mod_func_uint16_t_u_u((g_247 | l_429), (safe_rshift_func_uint8_t_u_s(p_81, 7))));
                    for (l_418 = (-3); (l_418 <= 4); l_418 = safe_add_func_uint16_t_u_u(l_418, 3))
                    {
                        int *l_434 = (void*)0;
                        int *l_435 = &g_66;
                        int *l_436 = (void*)0;
                        int *l_437 = (void*)0;
                        int *l_438 = (void*)0;
                        int *l_439 = (void*)0;
                        int *l_440 = &g_66;
                        int *l_441 = &g_66;
                        int *l_443 = &g_258;
                        int *l_444 = &l_442;
                        int *l_445 = &g_66;
                        int *l_446 = &g_115;
                        int *l_447 = &g_258;
                        int *l_448 = &g_66;
                        int *l_449 = &g_4;
                        int *l_450 = &g_4;
                        int *l_451 = &g_258;
                        int *l_452 = &g_4;
                        int *l_453 = &l_442;
                        int *l_454 = &g_115;
                        int *l_455 = (void*)0;
                        int *l_456 = &g_66;
                        int *l_457 = &g_4;
                        int *l_458 = &l_442;
                        int *l_459 = &g_115;
                        int *l_460 = &g_258;
                        int *l_461 = &g_4;
                        int *l_462 = (void*)0;
                        int *l_463 = &l_442;
                        int *l_464 = &g_115;
                        int *l_465 = &g_115;
                        int *l_466 = &g_4;
                        int *l_467 = &g_4;
                        int *l_468 = &g_115;
                        int *l_469 = &l_442;
                        int *l_470 = &g_115;
                        int *l_471 = &g_258;
                        int *l_472 = (void*)0;
                        int *l_473 = &g_66;
                        int *l_474 = &l_442;
                        int *l_476 = &g_4;
                        int *l_477 = &g_258;
                        int l_478 = 0x138FA426L;
                        int *l_479 = &g_258;
                        int *l_480 = &l_478;
                        int *l_481 = &g_115;
                        int *l_483 = &g_66;
                        int *l_484 = &g_4;
                        int *l_485 = &g_66;
                        int *l_486 = (void*)0;
                        int *l_487 = &l_478;
                        int *l_488 = &g_115;
                        int *l_489 = (void*)0;
                        int *l_490 = &l_442;
                        int *l_491 = &g_115;
                        int *l_492 = &g_66;
                        int *l_497 = (void*)0;
                        int *l_498 = &l_442;
                        int *l_499 = (void*)0;
                        int *l_500 = &l_494;
                        int *l_501 = &l_478;
                        int *l_503 = &g_115;
                        int *l_504 = (void*)0;
                        int *l_505 = &g_66;
                        int *l_506 = &g_115;
                        int *l_507 = &g_115;
                        int *l_508 = (void*)0;
                        int *l_509 = &g_258;
                        int *l_510 = &g_4;
                        int *l_511 = &l_442;
                        int *l_512 = &g_4;
                        int *l_513 = &g_502;
                        int *l_514 = &l_495;
                        int *l_515 = &g_115;
                        int *l_517 = &l_516;
                        int *l_518 = &l_516;
                        int *l_519 = &l_516;
                        int *l_521 = &l_442;
                        int *l_522 = (void*)0;
                        int *l_523 = (void*)0;
                        int *l_525 = &g_502;
                        int *l_526 = &g_115;
                        int *l_527 = &g_66;
                        int *l_528 = &l_478;
                        int *l_530 = &l_493;
                        int *l_531 = &l_493;
                        int *l_533 = &g_115;
                        int *l_534 = &g_66;
                        int *l_535 = &l_478;
                        int *l_536 = &g_66;
                        int *l_537 = &g_4;
                        int *l_538 = (void*)0;
                        int *l_539 = (void*)0;
                        int *l_540 = &l_493;
                        int *l_542 = &l_494;
                        int *l_544 = (void*)0;
                        int *l_545 = (void*)0;
                        int *l_546 = &g_4;
                        int *l_547 = &l_520;
                        int *l_549 = &g_502;
                        int *l_550 = &l_493;
                        int *l_551 = &l_529;
                        int *l_552 = &g_115;
                        int **l_556 = &l_465;
                        ++g_553;
                        (*l_506) |= g_169;
                        (*l_556) = &l_478;

                        ;
                        if (l_529)
                            break;
                    }
                }
                else
                {
                    unsigned short *l_651 = (void*)0;
                    int *l_653 = &l_494;
                    int l_711 = 0L;
                    int l_716 = (-8L);
                    int l_767 = 3L;
                    if ((safe_lshift_func_int16_t_s_s(((safe_add_func_uint8_t_u_u((safe_add_func_int8_t_s_s(p_82, l_529)), ((((-1L) ^ (g_135 == (-1L))) == (safe_lshift_func_uint16_t_u_s(65535UL, 2))) && 1UL))) != p_82), 11)))
                    {
                        int *l_565 = &l_442;
                        int *l_566 = &l_494;
                        int *l_567 = &l_529;
                        int *l_568 = &l_418;
                        int *l_569 = (void*)0;
                        int *l_570 = (void*)0;
                        int *l_571 = &l_529;
                        int *l_572 = &g_258;
                        int *l_573 = &l_495;
                        int *l_574 = &l_493;
                        int *l_575 = &l_541;
                        int *l_576 = &g_502;
                        int *l_577 = &g_502;
                        int *l_578 = &g_502;
                        int *l_579 = &l_541;
                        int *l_580 = &l_418;
                        int *l_581 = &l_541;
                        int *l_582 = &g_66;
                        int *l_583 = &l_516;
                        int *l_584 = &l_493;
                        int *l_585 = &l_495;
                        int *l_586 = &l_495;
                        int *l_587 = (void*)0;
                        int *l_588 = (void*)0;
                        int *l_589 = &l_541;
                        int *l_590 = &l_495;
                        int *l_591 = &l_418;
                        int l_592 = 0x2A51040BL;
                        int *l_593 = (void*)0;
                        int *l_595 = &l_541;
                        int *l_596 = (void*)0;
                        int *l_597 = &l_495;
                        int *l_598 = (void*)0;
                        int *l_599 = &l_493;
                        int *l_600 = (void*)0;
                        int *l_601 = &l_495;
                        int *l_602 = &l_594;
                        int *l_603 = &l_495;
                        int *l_604 = &l_594;
                        int *l_605 = &l_516;
                        int *l_606 = &l_529;
                        int *l_607 = &l_442;
                        int *l_608 = &g_502;
                        int *l_609 = (void*)0;
                        int *l_610 = &l_495;
                        int *l_611 = &l_592;
                        int *l_612 = &l_442;
                        int *l_613 = &l_442;
                        int *l_614 = &g_502;
                        int *l_615 = &g_258;
                        int *l_616 = &l_516;
                        int *l_617 = &g_258;
                        int *l_618 = &l_541;
                        int *l_619 = &l_494;
                        int *l_620 = &g_4;
                        int *l_621 = &l_516;
                        int *l_622 = (void*)0;
                        int *l_623 = &l_493;
                        int *l_624 = &l_495;
                        int *l_625 = &l_516;
                        int *l_626 = &l_495;
                        int *l_627 = &l_495;
                        int *l_628 = &g_502;
                        int *l_629 = &l_493;
                        int *l_630 = &l_541;
                        int *l_631 = (void*)0;
                        int *l_632 = &l_541;
                        int *l_633 = &l_594;
                        unsigned char *l_643 = (void*)0;
                        unsigned char *l_644 = &l_429;
                        unsigned *l_645 = &l_425;
                        g_634++;
                        (*l_614) ^= ((safe_div_func_uint16_t_u_u(p_82, (safe_mod_func_uint8_t_u_u(p_82, (safe_lshift_func_uint8_t_u_s(((*l_644) = l_529), g_373)))))) || ((l_495 = (((*l_645) ^= l_594) > 0xC6176395L)) & p_81));
                    }
                    else
                    {
                        char ***l_648 = &l_646;
                        (*l_648) = l_646;
                    }
                    if (p_81)
                    {
                        unsigned short *l_654 = &g_247;
                        int *l_656 = &l_493;
                        (*l_653) = (safe_mod_func_int32_t_s_s(g_502, 4294967295UL));
                        (*l_655) = l_656;

                        ;
                    }
                    else
                    {
                        int *l_657 = (void*)0;
                        int *l_658 = &l_494;
                        int *l_659 = &l_493;
                        int *l_660 = &g_4;
                        int *l_661 = &g_502;
                        int *l_662 = &l_494;
                        int *l_663 = (void*)0;
                        int *l_664 = &l_541;
                        int *l_665 = &l_495;
                        int *l_666 = &g_115;
                        int *l_667 = (void*)0;
                        int *l_668 = &l_516;
                        int *l_669 = &l_516;
                        int *l_670 = &l_594;
                        int *l_671 = &l_529;
                        int *l_672 = &g_502;
                        int *l_673 = &l_442;
                        int *l_674 = &g_258;
                        int *l_675 = &g_66;
                        int *l_676 = &l_418;
                        int *l_677 = &l_541;
                        int *l_678 = &l_516;
                        int *l_679 = &g_4;
                        int *l_680 = &l_493;
                        int *l_681 = (void*)0;
                        int *l_682 = &l_594;
                        int *l_683 = (void*)0;
                        int *l_684 = &l_529;
                        int *l_685 = &l_594;
                        int *l_686 = &g_115;
                        int *l_687 = &l_494;
                        int *l_688 = (void*)0;
                        int l_689 = 0x6BB7E753L;
                        int *l_690 = (void*)0;
                        int *l_691 = &l_594;
                        int *l_692 = (void*)0;
                        int *l_693 = &l_495;
                        int *l_694 = (void*)0;
                        int *l_695 = &l_529;
                        int *l_696 = &l_493;
                        int *l_697 = &l_516;
                        int *l_698 = (void*)0;
                        int *l_700 = (void*)0;
                        int *l_702 = &g_4;
                        int l_704 = 0xF5F61162L;
                        int *l_705 = &l_704;
                        int *l_706 = &l_689;
                        int *l_707 = (void*)0;
                        int *l_708 = &l_418;
                        int *l_709 = &g_115;
                        int *l_710 = &l_494;
                        int *l_712 = (void*)0;
                        int *l_713 = &g_115;
                        int *l_714 = &l_516;
                        int *l_715 = &l_442;
                        int *l_717 = (void*)0;
                        int *l_718 = &l_442;
                        int *l_719 = &l_689;
                        int *l_720 = &l_493;
                        int *l_721 = &l_594;
                        int *l_722 = &l_689;
                        int *l_724 = &l_701;
                        int l_725 = 1L;
                        int *l_726 = &l_529;
                        int *l_727 = &l_711;
                        int *l_728 = (void*)0;
                        int *l_729 = &l_725;
                        int *l_730 = &l_725;
                        int *l_731 = &g_66;
                        int *l_732 = (void*)0;
                        int *l_733 = &l_701;
                        int *l_734 = &g_66;
                        int *l_735 = &g_115;
                        int *l_736 = &l_723;
                        int *l_737 = &l_516;
                        int *l_738 = &l_541;
                        int *l_739 = &l_701;
                        int *l_740 = &l_493;
                        int *l_741 = &g_66;
                        int *l_742 = &l_711;
                        int *l_743 = (void*)0;
                        int *l_744 = &l_594;
                        int *l_745 = &l_541;
                        int *l_746 = &l_516;
                        int *l_747 = &l_541;
                        int *l_748 = &l_703;
                        int *l_749 = (void*)0;
                        int *l_763 = &g_258;
                        int *l_764 = &l_689;
                        int *l_766 = &l_716;
                        int *l_768 = &l_442;
                        ++g_750;
                        (*l_662) = (safe_unary_minus_func_int8_t_s((safe_add_func_uint8_t_u_u(l_756, (safe_add_func_uint32_t_u_u(g_115, ((safe_add_func_uint32_t_u_u(p_82, g_139)) && (l_424 != (~1UL)))))))));
                        --g_769;
                        if (p_82)
                            break;
                    }
                }
                l_495 ^= l_765;
            }
            else
            {
                return g_400;



            }
            l_765 = (~((l_541 | ((*l_776) = (safe_rshift_func_int8_t_s_u(((*l_647) = (safe_sub_func_int8_t_s_s(p_81, p_82))), l_495)))) && (*l_776)));
            (*l_655) = (*l_655);
            (*l_776) = (&g_553 == l_777);
        }


        (*l_779) = ((g_400 <= (0x761C2720L == g_532)) || (0xEADD43F1L == l_778));
    }


    ;
    if ((safe_lshift_func_uint16_t_u_s((+((void*)0 == l_647)), 8)))
    {
        unsigned l_784 = 0UL;
        unsigned char *l_791 = &g_769;
        unsigned *l_794 = &g_795;
        unsigned *l_796 = &g_797;
        int *l_799 = &l_418;
        int *l_800 = &g_66;
        (*l_800) = ((*l_799) &= (safe_div_func_int32_t_s_s((l_784 | ((*l_419) = ((void*)0 != l_647))), (safe_div_func_uint8_t_u_u(((safe_lshift_func_uint8_t_u_u((g_169 &= (((0x889A8586L | (safe_rshift_func_uint8_t_u_s((++(*l_791)), 6))) & (+((*l_796) = ((*l_794) = p_82)))) ^ l_784)), (4294967290UL ^ (l_798 != (void*)0)))) > g_363), g_320)))));
        (*l_799) |= g_801;
    }
    else
    {
        int *l_805 = &l_494;
        (*l_805) &= (safe_add_func_uint8_t_u_u(l_804, 5L));
    }
    return g_634;



}







static int func_83(int p_84, unsigned short p_85, unsigned short * p_86)
{
    volatile short ***l_323 = (void*)0;
    volatile short **l_325 = &g_183;
    volatile short ***l_324 = &l_325;
    int l_329 = (-5L);
    int l_385 = 1L;
    int *l_404 = &g_66;
    (*l_324) = &g_183;
    if (((void*)0 == &g_183))
    {
        for (g_139 = 17; (g_139 >= (-18)); --g_139)
        {
            int **l_328 = &g_147;
            (*l_328) = (void*)0;

            ;
            (*l_328) = &g_115;

            ;
        }
        g_258 = l_329;
        for (p_85 = 0; (p_85 >= 34); p_85 = safe_add_func_uint8_t_u_u(p_85, 6))
        {
            int *l_332 = &g_258;
            short l_333 = 0x90F2L;
            l_332 = (void*)0;

            ;
            return l_333;
        }
    }
    else
    {
        unsigned short l_336 = 1UL;
        int l_355 = 0x9188FDCBL;
        for (p_85 = 27; (p_85 > 50); ++p_85)
        {
            if (l_336)
                break;
            for (g_68 = 0; (g_68 < (-30)); --g_68)
            {
                unsigned l_342 = 0x2E6D70E5L;
                int l_345 = 0xF8E74D01L;
                int l_346 = 0x3623E6BFL;
                for (g_66 = 0; (g_66 < (-18)); g_66--)
                {
                    int *l_341 = &g_258;
                    int *l_347 = &l_346;
                    int *l_348 = &l_345;
                    int *l_349 = &l_345;
                    int *l_350 = &l_329;
                    int *l_351 = &g_258;
                    int *l_352 = &g_258;
                    int *l_353 = (void*)0;
                    int *l_354 = &l_329;
                    int *l_356 = &l_346;
                    int *l_357 = &l_346;
                    int *l_358 = (void*)0;
                    int *l_359 = &g_258;
                    int *l_360 = &g_258;
                    int *l_361 = &g_4;
                    int *l_362 = &g_115;
                    int *l_364 = (void*)0;
                    int *l_365 = &l_329;
                    int *l_366 = &g_115;
                    int *l_367 = &g_115;
                    int *l_368 = &g_115;
                    int *l_369 = &g_4;
                    int *l_370 = &g_115;
                    int *l_371 = &l_346;
                    int *l_372 = &l_346;
                    int *l_374 = &g_115;
                    int *l_375 = (void*)0;
                    int *l_376 = (void*)0;
                    int *l_377 = &g_4;
                    int *l_378 = &l_345;
                    int *l_379 = &l_345;
                    int *l_380 = &l_329;
                    int *l_381 = &l_355;
                    int *l_382 = (void*)0;
                    int l_383 = 0x8ECC7ADDL;
                    int *l_384 = &l_345;
                    int *l_386 = &g_4;
                    int *l_387 = &l_355;
                    int *l_388 = (void*)0;
                    int *l_390 = &l_345;
                    int *l_391 = (void*)0;
                    int *l_392 = (void*)0;
                    int *l_393 = &l_346;
                    int *l_394 = &l_346;
                    int *l_395 = &l_383;
                    int *l_396 = &l_345;
                    int l_397 = 0xEF3CA3E2L;
                    int *l_398 = &l_345;
                    int *l_399 = &l_383;
                    int **l_403 = &l_391;
                    --l_342;
                    g_400++;
                    (*l_403) = &l_329;

                    ;
                }
            }
        }
        l_404 = &l_329;

        ;
        return p_84;
    }
    return (*l_404);
}







static unsigned short * func_88(unsigned p_89, unsigned p_90, int p_91, int * p_92)
{
    int **l_267 = &g_147;
    unsigned short *l_273 = &g_71;
    for (g_186 = 0; (g_186 <= (-10)); --g_186)
    {
        unsigned short l_280 = 0UL;
        int *l_283 = (void*)0;
        int *l_284 = &g_115;
        int l_285 = 7L;
        int *l_286 = &g_258;
        int *l_287 = &g_66;
        int *l_288 = &g_4;
        int *l_289 = &g_115;
        int *l_290 = &g_4;
        int *l_291 = &g_66;
        int *l_292 = &l_285;
        int *l_293 = &g_258;
        int *l_294 = &g_258;
        int *l_295 = &l_285;
        int *l_296 = &g_66;
        int *l_297 = &g_4;
        int *l_298 = &g_115;
        int *l_299 = &g_66;
        int *l_300 = (void*)0;
        int *l_301 = &g_66;
        int *l_302 = &l_285;
        int *l_303 = &g_258;
        int *l_304 = (void*)0;
        int *l_305 = &g_66;
        int *l_306 = &g_66;
        int *l_307 = &g_66;
        int *l_308 = &g_258;
        int *l_309 = &g_66;
        int *l_310 = (void*)0;
        int *l_311 = (void*)0;
        int *l_312 = &g_66;
        int *l_313 = &g_66;
        int *l_314 = (void*)0;
        int *l_315 = (void*)0;
        int *l_316 = &g_66;
        int *l_317 = &g_4;
        int *l_318 = &g_258;
        int *l_319 = &l_285;
        for (g_169 = 0; (g_169 == 38); g_169 = safe_add_func_int32_t_s_s(g_169, 7))
        {
            unsigned short *l_270 = &g_247;
            int l_279 = 8L;
            int ***l_281 = (void*)0;
            int ***l_282 = &l_267;
            (*p_92) = ((*p_92) & (safe_div_func_int8_t_s_s((safe_add_func_int8_t_s_s((l_267 == &p_92), (safe_mod_func_int32_t_s_s((-2L), ((0x425155AEL != ((--(*l_270)) | ((l_279 ^= ((g_258 && (l_273 != &g_71)) && ((safe_unary_minus_func_uint16_t_u((safe_add_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u(g_71, g_169)), g_186)))) | g_4))) | p_91))) | l_280))))), g_2)));
            (*p_92) = (*p_92);
            (*l_282) = &g_147;
        }
        (*p_92) = 0x3254B497L;
        --g_320;
    }
    return l_273;


}







static char func_93(unsigned short * p_94, int ** p_95, int * p_96, int p_97)
{
    unsigned short l_194 = 65534UL;
    int l_212 = 0xC6D1ADB1L;
    int l_230 = 0x8D4CD455L;
    int l_232 = 6L;
    (*p_96) &= (safe_add_func_int8_t_s_s(g_108, ((4294967293UL <= (p_97 < p_97)) && ((g_139 != 0UL) > l_194))));
    (*p_95) = &g_66;


    for (g_115 = 0; (g_115 == 0); ++g_115)
    {
        (*p_95) = (void*)0;


    }


    for (g_135 = 0; (g_135 >= 5); g_135 = safe_add_func_int16_t_s_s(g_135, 4))
    {
        short l_199 = 6L;
        int *l_200 = &g_4;
        int *l_201 = &g_115;
        int *l_202 = &g_115;
        int *l_203 = (void*)0;
        int *l_204 = &g_115;
        int *l_205 = (void*)0;
        int *l_206 = &g_115;
        int *l_207 = &g_66;
        int *l_208 = &g_66;
        int *l_209 = &g_66;
        int *l_210 = (void*)0;
        int *l_211 = &g_115;
        int *l_213 = &l_212;
        int l_214 = (-1L);
        int l_215 = 0x0459850BL;
        int *l_216 = &g_4;
        int *l_217 = &l_215;
        int *l_218 = &l_215;
        int *l_219 = &l_215;
        int *l_220 = &g_4;
        int *l_221 = &g_4;
        int *l_222 = &l_212;
        int *l_223 = &l_215;
        int *l_224 = &l_215;
        int *l_225 = &g_4;
        int *l_226 = &l_212;
        int *l_227 = &l_215;
        int *l_228 = &l_212;
        int *l_229 = (void*)0;
        int *l_231 = &l_215;
        int *l_233 = (void*)0;
        int *l_234 = &l_214;
        int *l_235 = &g_4;
        int *l_236 = &l_230;
        int *l_237 = (void*)0;
        int *l_238 = &g_4;
        int l_239 = 0x2CE05B3DL;
        int *l_240 = &l_239;
        int *l_241 = (void*)0;
        int *l_242 = &l_239;
        int *l_243 = &l_212;
        int l_244 = 0xA7B7964CL;
        int *l_245 = &l_212;
        int *l_246 = &g_4;
        g_247++;
        (*l_242) = (safe_rshift_func_int8_t_s_s((safe_sub_func_int32_t_s_s((255UL > ((safe_lshift_func_uint8_t_u_s(g_66, 1)) != (p_97 || p_97))), (safe_div_func_int8_t_s_s((~g_108), g_169)))), 7));
    }
    return g_258;
}







static unsigned short * func_98(unsigned p_99, int * p_100, char * p_101, char * p_102)
{
    short *l_114 = (void*)0;
    int l_120 = (-1L);
    unsigned short *l_133 = &g_71;
    char *l_134 = &g_135;
    char *l_136 = (void*)0;
    char *l_137 = (void*)0;
    char *l_138 = &g_139;
    int l_140 = 1L;
    int *l_141 = (void*)0;
    int l_142 = 0L;
    unsigned l_155 = 7UL;
    unsigned l_180 = 0x97827EA9L;
    unsigned l_187 = 6UL;
    for (g_63 = 7; (g_63 < 59); g_63 = safe_add_func_int16_t_s_s(g_63, 7))
    {
        unsigned l_111 = 0xA47BFE1AL;
        l_111 = (*p_100);
        (*p_100) = g_66;
        (*p_100) ^= ((0x7EL < (g_115 = (g_63 | ((*p_102) = (l_114 != l_114))))) < g_71);
    }
    g_66 |= (l_142 |= (safe_div_func_uint8_t_u_u((safe_sub_func_int16_t_s_s(p_99, (l_120 < g_115))), (safe_add_func_int16_t_s_s((((safe_rshift_func_int8_t_s_u(((*l_138) |= ((*l_134) = ((*p_101) = (safe_sub_func_int32_t_s_s(g_68, ((safe_mod_func_uint16_t_u_u((p_99 >= (safe_div_func_int32_t_s_s(0x71C63CC5L, (g_63 ^ ((safe_lshift_func_uint16_t_u_s(((*l_133) |= 1UL), (g_4 >= g_2))) > 4UL))))), 0x9889L)) >= p_99)))))), 3)) < 1L) ^ l_120), l_140)))));
    if (((g_4 >= (safe_lshift_func_int8_t_s_u((safe_rshift_func_int16_t_s_u(g_4, 6)), 3))) != 0UL))
    {
        int *l_148 = (void*)0;
        int **l_149 = (void*)0;
        int **l_150 = &g_147;
        g_147 = &g_4;

        ;
        (*l_150) = l_148;

        ;
    }
    else
    {
        unsigned char l_151 = 8UL;
        l_151 = 0L;
        (*p_100) = (*p_100);
    }
    if (g_108)
    {
        unsigned char l_156 = 0x99L;
        int l_157 = 1L;
        unsigned char *l_168 = &g_169;
        int **l_174 = &l_141;
        (*p_100) = (safe_mod_func_uint8_t_u_u((l_156 = (safe_unary_minus_func_uint32_t_u((0xD66CL ^ ((&g_147 != &p_100) | (l_155 ^= 4294967294UL)))))), ((*l_138) &= l_157)));
        if (((safe_add_func_uint8_t_u_u(p_99, ((*l_168) &= (g_135 != (g_71 | (safe_rshift_func_uint8_t_u_u((safe_sub_func_int32_t_s_s(g_115, (g_2 >= (((safe_sub_func_uint8_t_u_u(g_4, g_115)) != (safe_add_func_uint16_t_u_u(g_4, (p_99 > l_156)))) > p_99)))), 5))))))) | (*p_101)))
        {
            int *l_172 = &g_66;
            (*p_100) &= (p_99 ^ (safe_lshift_func_int8_t_s_u((*p_102), 7)));
            (*l_172) |= (*p_100);
            l_141 = &l_142;

            ;
            (*l_172) |= ((*l_141) < 4294967290UL);
        }
        else
        {
            unsigned short *l_173 = (void*)0;
            return l_173;


        }

        ;
        (*l_174) = &l_157;

        ;
    }
    else
    {
        unsigned *l_175 = &l_155;
        short *l_185 = &g_186;
        int l_188 = 1L;
        l_142 ^= ((g_108 | (((g_68 = (((*l_175) |= 1UL) == (safe_div_func_uint16_t_u_u(g_135, ((safe_mod_func_int16_t_s_s(l_180, (safe_rshift_func_int16_t_s_s(0x1AA4L, 14)))) & 0x81L))))) == ((*l_133) = ((((g_71 ^ (g_183 != l_185)) & l_187) > (*p_100)) < 0xECL))) & l_188)) < g_66);
    }


    return l_133;


}







static unsigned short * func_103(unsigned p_104)
{
    unsigned short *l_105 = (void*)0;
    return l_105;


}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_38, "g_38", print_hash_value);
    transparent_crc(g_63, "g_63", print_hash_value);
    transparent_crc(g_66, "g_66", print_hash_value);
    transparent_crc(g_68, "g_68", print_hash_value);
    transparent_crc(g_71, "g_71", print_hash_value);
    transparent_crc(g_78, "g_78", print_hash_value);
    transparent_crc(g_108, "g_108", print_hash_value);
    transparent_crc(g_115, "g_115", print_hash_value);
    transparent_crc(g_135, "g_135", print_hash_value);
    transparent_crc(g_139, "g_139", print_hash_value);
    transparent_crc(g_169, "g_169", print_hash_value);
    transparent_crc(g_184, "g_184", print_hash_value);
    transparent_crc(g_186, "g_186", print_hash_value);
    transparent_crc(g_247, "g_247", print_hash_value);
    transparent_crc(g_258, "g_258", print_hash_value);
    transparent_crc(g_320, "g_320", print_hash_value);
    transparent_crc(g_363, "g_363", print_hash_value);
    transparent_crc(g_373, "g_373", print_hash_value);
    transparent_crc(g_389, "g_389", print_hash_value);
    transparent_crc(g_400, "g_400", print_hash_value);
    transparent_crc(g_475, "g_475", print_hash_value);
    transparent_crc(g_502, "g_502", print_hash_value);
    transparent_crc(g_524, "g_524", print_hash_value);
    transparent_crc(g_532, "g_532", print_hash_value);
    transparent_crc(g_543, "g_543", print_hash_value);
    transparent_crc(g_553, "g_553", print_hash_value);
    transparent_crc(g_634, "g_634", print_hash_value);
    transparent_crc(g_750, "g_750", print_hash_value);
    transparent_crc(g_769, "g_769", print_hash_value);
    transparent_crc(g_795, "g_795", print_hash_value);
    transparent_crc(g_797, "g_797", print_hash_value);
    transparent_crc(g_801, "g_801", print_hash_value);
    transparent_crc(g_807, "g_807", print_hash_value);
    transparent_crc(g_894, "g_894", print_hash_value);
    transparent_crc(g_999, "g_999", print_hash_value);
    transparent_crc(g_1009, "g_1009", print_hash_value);
    transparent_crc(g_1092, "g_1092", print_hash_value);
    transparent_crc(g_1119, "g_1119", print_hash_value);
    transparent_crc(g_1269, "g_1269", print_hash_value);
    transparent_crc(g_1273, "g_1273", print_hash_value);
    transparent_crc(g_1285, "g_1285", print_hash_value);
    transparent_crc(g_1293, "g_1293", print_hash_value);
    transparent_crc(g_1325, "g_1325", print_hash_value);
    transparent_crc(g_1348, "g_1348", print_hash_value);
    transparent_crc(g_1399, "g_1399", print_hash_value);
    transparent_crc(g_1401, "g_1401", print_hash_value);
    transparent_crc(g_1425, "g_1425", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
