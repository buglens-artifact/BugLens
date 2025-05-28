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



static unsigned g_9[7][1] = {{4UL}, {4UL}, {4UL}, {4UL}, {4UL}, {4UL}, {4UL}};
static int g_66[3] = {(-1L), (-1L), (-1L)};
static int *g_70 = &g_66[2];
static int g_71 = (-1L);
static short g_78 = 0L;
static unsigned char g_85 = 254UL;
static char g_95 = 0x70L;
static unsigned short g_103[3][2] = {{4UL, 4UL}, {4UL, 4UL}, {4UL, 4UL}};
static unsigned short g_114 = 0x6F6AL;
static unsigned short *g_113 = &g_114;
static unsigned short g_117 = 1UL;
static short g_242 = 1L;
static unsigned g_249[9] = {1UL, 4294967293UL, 1UL, 4294967293UL, 1UL, 4294967293UL, 1UL, 4294967293UL, 1UL};
static int **g_269 = &g_70;
static int ***g_268 = &g_269;
static char *g_283 = &g_95;
static char **g_282 = &g_283;
static short *g_286 = &g_242;
static short **g_285 = &g_286;
static unsigned short g_477 = 0UL;
static unsigned char *g_484 = (void*)0;
static unsigned char g_572 = 255UL;
static unsigned char *g_575 = &g_572;
static short g_631 = (-1L);
static short g_712 = (-9L);
static int g_777 = 6L;
static unsigned g_798 = 4294967294UL;
static unsigned g_802 = 8UL;
static unsigned g_808 = 0UL;
static unsigned char **g_839[1][7][7] = {{{&g_484, &g_484, &g_575, &g_484, (void*)0, &g_575, &g_484}, {&g_484, &g_484, &g_575, &g_484, (void*)0, &g_575, &g_484}, {&g_484, &g_484, &g_575, &g_484, (void*)0, &g_575, &g_484}, {&g_484, &g_484, &g_575, &g_484, (void*)0, &g_575, &g_484}, {&g_484, &g_484, &g_575, &g_484, (void*)0, &g_575, &g_484}, {&g_484, &g_484, &g_575, &g_484, (void*)0, &g_575, &g_484}, {&g_484, &g_484, &g_575, &g_484, (void*)0, &g_575, &g_484}}};
static unsigned g_895 = 0UL;
static int *g_901 = (void*)0;
static unsigned g_945 = 0UL;
static unsigned short **g_968 = &g_113;
static unsigned short ***g_967 = &g_968;
static short *g_1022 = (void*)0;
static unsigned *g_1227 = &g_808;
static char g_1335 = 0x87L;
static int g_1384 = 0xFDBFD3A7L;



static unsigned short func_1(void);
static unsigned char func_4(short p_5, int p_6, unsigned p_7, unsigned short p_8);
static unsigned func_10(char p_11, unsigned p_12, int p_13, int p_14, char p_15);
static unsigned char func_17(short p_18, unsigned p_19, unsigned char p_20);
static short func_23(char p_24, unsigned p_25, int p_26, unsigned p_27, unsigned p_28);
static unsigned char func_31(int p_32, unsigned short p_33, char p_34);
static char func_42(int p_43, unsigned short p_44, int p_45, unsigned char p_46);
static unsigned func_49(short p_50, unsigned char p_51);
static unsigned short func_52(unsigned p_53, unsigned p_54, int p_55, short p_56);
static char func_59(unsigned char p_60);
static unsigned short func_1(void)
{
    short l_16 = 0x6C31L;
    char l_856 = 6L;
    int l_919 = 0xD2098C61L;
    unsigned l_925 = 0x40434B34L;
    int *l_1089[3][7] = {{(void*)0, &g_66[1], &g_66[2], &g_66[1], (void*)0, &g_66[1], &g_66[2]}, {(void*)0, &g_66[1], &g_66[2], &g_66[1], (void*)0, &g_66[1], &g_66[2]}, {(void*)0, &g_66[1], &g_66[2], &g_66[1], (void*)0, &g_66[1], &g_66[2]}};
    int *l_1385 = &g_66[2];
    int i, j;
    g_1384 &= (safe_rshift_func_int16_t_s_u((-6L), (func_4((g_9[5][0] <= (func_10(g_9[5][0], l_16, (g_66[2] = (func_17((safe_add_func_int16_t_s_s(func_23((((safe_sub_func_uint32_t_u_u((func_31(g_9[5][0], l_16, ((safe_lshift_func_int8_t_s_u((safe_unary_minus_func_int8_t_s(g_9[4][0])), 5)) < (safe_lshift_func_uint8_t_u_s((safe_add_func_uint16_t_u_u(((((*g_283) = ((l_919 = func_42((safe_add_func_uint32_t_u_u(func_49(g_9[3][0], (func_52(g_9[3][0], l_16, g_9[2][0], g_9[5][0]) | l_16)), l_856)), g_9[2][0], l_856, l_16)) | g_777)) & g_808) >= 0xBAL), l_16)), 5)))) > g_777), l_856)) | l_856) | 0L), l_16, g_9[5][0], l_16, l_925), 65526UL)), g_9[3][0], l_856) & g_9[0][0])), g_9[5][0], g_9[3][0]) != g_798)), g_9[5][0], g_9[5][0], g_798) >= g_798)));
    l_1385 = (l_1089[0][1] = &l_919);
    return (***g_967);
}







static unsigned char func_4(short p_5, int p_6, unsigned p_7, unsigned short p_8)
{
    int *l_1210 = &g_66[1];
    int *l_1211 = &g_777;
    int *l_1212 = &g_66[0];
    int *l_1213 = (void*)0;
    int *l_1214[10] = {&g_66[0], &g_66[2], &g_66[0], &g_66[2], &g_66[0], &g_66[2], &g_66[0], &g_66[2], &g_66[0], &g_66[2]};
    unsigned char l_1215 = 0xF1L;
    unsigned short **l_1242 = &g_113;
    int l_1305 = 0x51BD3F86L;
    short l_1323 = 0L;
    char l_1360 = 0x04L;
    char l_1373 = 0L;
    int i;
    l_1215--;
    for (p_5 = 0; (p_5 > (-19)); p_5 = safe_sub_func_int16_t_s_s(p_5, 1))
    {
        unsigned l_1231 = 4294967290UL;
        unsigned *l_1235[10][9][2] = {{{&g_808, (void*)0}, {&g_808, (void*)0}, {&g_808, (void*)0}, {&g_808, (void*)0}, {&g_808, (void*)0}, {&g_808, (void*)0}, {&g_808, (void*)0}, {&g_808, (void*)0}, {&g_808, (void*)0}}, {{&g_808, (void*)0}, {&g_808, (void*)0}, {&g_808, (void*)0}, {&g_808, (void*)0}, {&g_808, (void*)0}, {&g_808, (void*)0}, {&g_808, (void*)0}, {&g_808, (void*)0}, {&g_808, (void*)0}}, {{&g_808, (void*)0}, {&g_808, (void*)0}, {&g_808, (void*)0}, {&g_808, (void*)0}, {&g_808, (void*)0}, {&g_808, (void*)0}, {&g_808, (void*)0}, {&g_808, (void*)0}, {&g_808, (void*)0}}, {{&g_808, (void*)0}, {&g_808, (void*)0}, {&g_808, (void*)0}, {&g_808, (void*)0}, {&g_808, (void*)0}, {&g_808, (void*)0}, {&g_808, (void*)0}, {&g_808, (void*)0}, {&g_808, (void*)0}}, {{&g_808, (void*)0}, {&g_808, (void*)0}, {&g_808, (void*)0}, {&g_808, (void*)0}, {&g_808, (void*)0}, {&g_808, (void*)0}, {&g_808, (void*)0}, {&g_808, (void*)0}, {&g_808, (void*)0}}, {{&g_808, (void*)0}, {&g_808, (void*)0}, {&g_808, (void*)0}, {&g_808, (void*)0}, {&g_808, (void*)0}, {&g_808, (void*)0}, {&g_808, (void*)0}, {&g_808, (void*)0}, {&g_808, (void*)0}}, {{&g_808, (void*)0}, {&g_808, (void*)0}, {&g_808, (void*)0}, {&g_808, (void*)0}, {&g_808, (void*)0}, {&g_808, (void*)0}, {&g_808, (void*)0}, {&g_808, (void*)0}, {&g_808, (void*)0}}, {{&g_808, (void*)0}, {&g_808, (void*)0}, {&g_808, (void*)0}, {&g_808, (void*)0}, {&g_808, (void*)0}, {&g_808, (void*)0}, {&g_808, (void*)0}, {&g_808, (void*)0}, {&g_808, (void*)0}}, {{&g_808, (void*)0}, {&g_808, (void*)0}, {&g_808, (void*)0}, {&g_808, (void*)0}, {&g_808, (void*)0}, {&g_808, (void*)0}, {&g_808, (void*)0}, {&g_808, (void*)0}, {&g_808, (void*)0}}, {{&g_808, (void*)0}, {&g_808, (void*)0}, {&g_808, (void*)0}, {&g_808, (void*)0}, {&g_808, (void*)0}, {&g_808, (void*)0}, {&g_808, (void*)0}, {&g_808, (void*)0}, {&g_808, (void*)0}}};
        int l_1257[5][7][7] = {{{0x3B73F780L, 0x3B73F780L, 0L, (-9L), 0xD5C38E23L, (-9L), 0L}, {0x3B73F780L, 0x3B73F780L, 0L, (-9L), 0xD5C38E23L, (-9L), 0L}, {0x3B73F780L, 0x3B73F780L, 0L, (-9L), 0xD5C38E23L, (-9L), 0L}, {0x3B73F780L, 0x3B73F780L, 0L, (-9L), 0xD5C38E23L, (-9L), 0L}, {0x3B73F780L, 0x3B73F780L, 0L, (-9L), 0xD5C38E23L, (-9L), 0L}, {0x3B73F780L, 0x3B73F780L, 0L, (-9L), 0xD5C38E23L, (-9L), 0L}, {0x3B73F780L, 0x3B73F780L, 0L, (-9L), 0xD5C38E23L, (-9L), 0L}}, {{0x3B73F780L, 0x3B73F780L, 0L, (-9L), 0xD5C38E23L, (-9L), 0L}, {0x3B73F780L, 0x3B73F780L, 0L, (-9L), 0xD5C38E23L, (-9L), 0L}, {0x3B73F780L, 0x3B73F780L, 0L, (-9L), 0xD5C38E23L, (-9L), 0L}, {0x3B73F780L, 0x3B73F780L, 0L, (-9L), 0xD5C38E23L, (-9L), 0L}, {0x3B73F780L, 0x3B73F780L, 0L, (-9L), 0xD5C38E23L, (-9L), 0L}, {0x3B73F780L, 0x3B73F780L, 0L, (-9L), 0xD5C38E23L, (-9L), 0L}, {0x3B73F780L, 0x3B73F780L, 0L, (-9L), 0xD5C38E23L, (-9L), 0L}}, {{0x3B73F780L, 0x3B73F780L, 0L, (-9L), 0xD5C38E23L, (-9L), 0L}, {0x3B73F780L, 0x3B73F780L, 0L, (-9L), 0xD5C38E23L, (-9L), 0L}, {0x3B73F780L, 0x3B73F780L, 0L, (-9L), 0xD5C38E23L, (-9L), 0L}, {0x3B73F780L, 0x3B73F780L, 0L, (-9L), 0xD5C38E23L, (-9L), 0L}, {0x3B73F780L, 0x3B73F780L, 0L, (-9L), 0xD5C38E23L, (-9L), 0L}, {0x3B73F780L, 0x3B73F780L, 0L, (-9L), 0xD5C38E23L, (-9L), 0L}, {0x3B73F780L, 0x3B73F780L, 0L, (-9L), 0xD5C38E23L, (-9L), 0L}}, {{0x3B73F780L, 0x3B73F780L, 0L, (-9L), 0xD5C38E23L, (-9L), 0L}, {0x3B73F780L, 0x3B73F780L, 0L, (-9L), 0xD5C38E23L, (-9L), 0L}, {0x3B73F780L, 0x3B73F780L, 0L, (-9L), 0xD5C38E23L, (-9L), 0L}, {0x3B73F780L, 0x3B73F780L, 0L, (-9L), 0xD5C38E23L, (-9L), 0L}, {0x3B73F780L, 0x3B73F780L, 0L, (-9L), 0xD5C38E23L, (-9L), 0L}, {0x3B73F780L, 0x3B73F780L, 0L, (-9L), 0xD5C38E23L, (-9L), 0L}, {0x3B73F780L, 0x3B73F780L, 0L, (-9L), 0xD5C38E23L, (-9L), 0L}}, {{0x3B73F780L, 0x3B73F780L, 0L, (-9L), 0xD5C38E23L, (-9L), 0L}, {0x3B73F780L, 0x3B73F780L, 0L, (-9L), 0xD5C38E23L, (-9L), 0L}, {0x3B73F780L, 0x3B73F780L, 0L, (-9L), 0xD5C38E23L, (-9L), 0L}, {0x3B73F780L, 0x3B73F780L, 0L, (-9L), 0xD5C38E23L, (-9L), 0L}, {0x3B73F780L, 0x3B73F780L, 0L, (-9L), 0xD5C38E23L, (-9L), 0L}, {0x3B73F780L, 0x3B73F780L, 0L, (-9L), 0xD5C38E23L, (-9L), 0L}, {0x3B73F780L, 0x3B73F780L, 0L, (-9L), 0xD5C38E23L, (-9L), 0L}}};
        unsigned l_1266 = 4294967295UL;
        char l_1277[6][5][5] = {{{0xEEL, 0xEEL, 0x9DL, 0L, 1L}, {0xEEL, 0xEEL, 0x9DL, 0L, 1L}, {0xEEL, 0xEEL, 0x9DL, 0L, 1L}, {0xEEL, 0xEEL, 0x9DL, 0L, 1L}, {0xEEL, 0xEEL, 0x9DL, 0L, 1L}}, {{0xEEL, 0xEEL, 0x9DL, 0L, 1L}, {0xEEL, 0xEEL, 0x9DL, 0L, 1L}, {0xEEL, 0xEEL, 0x9DL, 0L, 1L}, {0xEEL, 0xEEL, 0x9DL, 0L, 1L}, {0xEEL, 0xEEL, 0x9DL, 0L, 1L}}, {{0xEEL, 0xEEL, 0x9DL, 0L, 1L}, {0xEEL, 0xEEL, 0x9DL, 0L, 1L}, {0xEEL, 0xEEL, 0x9DL, 0L, 1L}, {0xEEL, 0xEEL, 0x9DL, 0L, 1L}, {0xEEL, 0xEEL, 0x9DL, 0L, 1L}}, {{0xEEL, 0xEEL, 0x9DL, 0L, 1L}, {0xEEL, 0xEEL, 0x9DL, 0L, 1L}, {0xEEL, 0xEEL, 0x9DL, 0L, 1L}, {0xEEL, 0xEEL, 0x9DL, 0L, 1L}, {0xEEL, 0xEEL, 0x9DL, 0L, 1L}}, {{0xEEL, 0xEEL, 0x9DL, 0L, 1L}, {0xEEL, 0xEEL, 0x9DL, 0L, 1L}, {0xEEL, 0xEEL, 0x9DL, 0L, 1L}, {0xEEL, 0xEEL, 0x9DL, 0L, 1L}, {0xEEL, 0xEEL, 0x9DL, 0L, 1L}}, {{0xEEL, 0xEEL, 0x9DL, 0L, 1L}, {0xEEL, 0xEEL, 0x9DL, 0L, 1L}, {0xEEL, 0xEEL, 0x9DL, 0L, 1L}, {0xEEL, 0xEEL, 0x9DL, 0L, 1L}, {0xEEL, 0xEEL, 0x9DL, 0L, 1L}}};
        short l_1337[7] = {(-7L), (-7L), (-4L), (-7L), (-7L), (-4L), (-7L)};
        int l_1347 = (-4L);
        int l_1352 = 0x10AD3A4FL;
        unsigned l_1381 = 2UL;
        int i, j, k;
        for (p_6 = 19; (p_6 > 17); p_6 = safe_sub_func_int16_t_s_s(p_6, 4))
        {
            unsigned l_1222 = 0xB73CF126L;
            unsigned short **l_1243 = &g_113;
            int l_1258 = 1L;
            int l_1259 = 0x188B9FC8L;
            int l_1260 = (-10L);
            int l_1262 = (-3L);
            int l_1263 = 0x3FB20A7FL;
            int l_1264 = 0x8BD6B6A0L;
            int l_1265 = 0x89D8727AL;
            if (l_1222)
            {
                unsigned l_1230[6][7] = {{3UL, 0x64B03344L, 3UL, 0x64B03344L, 3UL, 0x64B03344L, 3UL}, {3UL, 0x64B03344L, 3UL, 0x64B03344L, 3UL, 0x64B03344L, 3UL}, {3UL, 0x64B03344L, 3UL, 0x64B03344L, 3UL, 0x64B03344L, 3UL}, {3UL, 0x64B03344L, 3UL, 0x64B03344L, 3UL, 0x64B03344L, 3UL}, {3UL, 0x64B03344L, 3UL, 0x64B03344L, 3UL, 0x64B03344L, 3UL}, {3UL, 0x64B03344L, 3UL, 0x64B03344L, 3UL, 0x64B03344L, 3UL}};
                short l_1234 = 0xC681L;
                int l_1244 = 0x41250D76L;
                short **l_1247 = &g_1022;
                unsigned char ***l_1253 = &g_839[0][5][6];
                int l_1254 = 0x8B4947B1L;
                int l_1261[3][8][7] = {{{7L, 1L, 1L, 0x3D59F39DL, 0x8D08EC84L, 0L, 2L}, {7L, 1L, 1L, 0x3D59F39DL, 0x8D08EC84L, 0L, 2L}, {7L, 1L, 1L, 0x3D59F39DL, 0x8D08EC84L, 0L, 2L}, {7L, 1L, 1L, 0x3D59F39DL, 0x8D08EC84L, 0L, 2L}, {7L, 1L, 1L, 0x3D59F39DL, 0x8D08EC84L, 0L, 2L}, {7L, 1L, 1L, 0x3D59F39DL, 0x8D08EC84L, 0L, 2L}, {7L, 1L, 1L, 0x3D59F39DL, 0x8D08EC84L, 0L, 2L}, {7L, 1L, 1L, 0x3D59F39DL, 0x8D08EC84L, 0L, 2L}}, {{7L, 1L, 1L, 0x3D59F39DL, 0x8D08EC84L, 0L, 2L}, {7L, 1L, 1L, 0x3D59F39DL, 0x8D08EC84L, 0L, 2L}, {7L, 1L, 1L, 0x3D59F39DL, 0x8D08EC84L, 0L, 2L}, {7L, 1L, 1L, 0x3D59F39DL, 0x8D08EC84L, 0L, 2L}, {7L, 1L, 1L, 0x3D59F39DL, 0x8D08EC84L, 0L, 2L}, {7L, 1L, 1L, 0x3D59F39DL, 0x8D08EC84L, 0L, 2L}, {7L, 1L, 1L, 0x3D59F39DL, 0x8D08EC84L, 0L, 2L}, {7L, 1L, 1L, 0x3D59F39DL, 0x8D08EC84L, 0L, 2L}}, {{7L, 1L, 1L, 0x3D59F39DL, 0x8D08EC84L, 0L, 2L}, {7L, 1L, 1L, 0x3D59F39DL, 0x8D08EC84L, 0L, 2L}, {7L, 1L, 1L, 0x3D59F39DL, 0x8D08EC84L, 0L, 2L}, {7L, 1L, 1L, 0x3D59F39DL, 0x8D08EC84L, 0L, 2L}, {7L, 1L, 1L, 0x3D59F39DL, 0x8D08EC84L, 0L, 2L}, {7L, 1L, 1L, 0x3D59F39DL, 0x8D08EC84L, 0L, 2L}, {7L, 1L, 1L, 0x3D59F39DL, 0x8D08EC84L, 0L, 2L}, {7L, 1L, 1L, 0x3D59F39DL, 0x8D08EC84L, 0L, 2L}}};
                int i, j, k;
                for (g_71 = 12; (g_71 >= 12); g_71 = safe_add_func_int32_t_s_s(g_71, 7))
                {
                    unsigned *l_1226 = &g_808;
                    unsigned **l_1225[3][6] = {{&l_1226, &l_1226, &l_1226, &l_1226, &l_1226, &l_1226}, {&l_1226, &l_1226, &l_1226, &l_1226, &l_1226, &l_1226}, {&l_1226, &l_1226, &l_1226, &l_1226, &l_1226, &l_1226}};
                    short ***l_1248 = &g_285;
                    int l_1249[4];
                    unsigned char ***l_1252 = &g_839[0][2][3];
                    int i, j;
                    for (i = 0; i < 4; i++)
                        l_1249[i] = 0x17D28438L;
                    if (((((g_1227 = &g_808) == (void*)0) != ((void*)0 != (*g_282))) != (safe_sub_func_int8_t_s_s(0x1DL, func_17(((255UL & l_1230[1][3]) <= p_7), p_6, p_6)))))
                    {
                        (*l_1210) ^= (-1L);
                        l_1231++;
                    }
                    else
                    {
                        l_1234 &= p_5;
                    }
                    if (p_6)
                        break;
                    (*l_1211) &= ((0x86AE6AF8L < ((l_1235[4][0][1] = &g_808) == (void*)0)) <= (~(safe_div_func_int32_t_s_s(((l_1249[3] = (g_103[2][0] <= (safe_sub_func_uint32_t_u_u(p_6, ((safe_add_func_int16_t_s_s((((*l_1212) = (l_1242 != l_1243)) ^ l_1244), (safe_add_func_uint16_t_u_u((((*l_1248) = l_1247) == l_1247), (*g_286))))) < p_6))))) != (*g_575)), (-10L)))));
                    (*l_1211) ^= (l_1254 = (((**l_1243) = (safe_lshift_func_uint8_t_u_u((*g_575), p_7))) && (l_1252 != l_1253)));
                }
                (*l_1210) = ((*l_1211) = l_1231);
                if (p_8)
                {
                    short l_1255 = (-1L);
                    int l_1256[6][10][4] = {{{(-1L), (-1L), 1L, 7L}, {(-1L), (-1L), 1L, 7L}, {(-1L), (-1L), 1L, 7L}, {(-1L), (-1L), 1L, 7L}, {(-1L), (-1L), 1L, 7L}, {(-1L), (-1L), 1L, 7L}, {(-1L), (-1L), 1L, 7L}, {(-1L), (-1L), 1L, 7L}, {(-1L), (-1L), 1L, 7L}, {(-1L), (-1L), 1L, 7L}}, {{(-1L), (-1L), 1L, 7L}, {(-1L), (-1L), 1L, 7L}, {(-1L), (-1L), 1L, 7L}, {(-1L), (-1L), 1L, 7L}, {(-1L), (-1L), 1L, 7L}, {(-1L), (-1L), 1L, 7L}, {(-1L), (-1L), 1L, 7L}, {(-1L), (-1L), 1L, 7L}, {(-1L), (-1L), 1L, 7L}, {(-1L), (-1L), 1L, 7L}}, {{(-1L), (-1L), 1L, 7L}, {(-1L), (-1L), 1L, 7L}, {(-1L), (-1L), 1L, 7L}, {(-1L), (-1L), 1L, 7L}, {(-1L), (-1L), 1L, 7L}, {(-1L), (-1L), 1L, 7L}, {(-1L), (-1L), 1L, 7L}, {(-1L), (-1L), 1L, 7L}, {(-1L), (-1L), 1L, 7L}, {(-1L), (-1L), 1L, 7L}}, {{(-1L), (-1L), 1L, 7L}, {(-1L), (-1L), 1L, 7L}, {(-1L), (-1L), 1L, 7L}, {(-1L), (-1L), 1L, 7L}, {(-1L), (-1L), 1L, 7L}, {(-1L), (-1L), 1L, 7L}, {(-1L), (-1L), 1L, 7L}, {(-1L), (-1L), 1L, 7L}, {(-1L), (-1L), 1L, 7L}, {(-1L), (-1L), 1L, 7L}}, {{(-1L), (-1L), 1L, 7L}, {(-1L), (-1L), 1L, 7L}, {(-1L), (-1L), 1L, 7L}, {(-1L), (-1L), 1L, 7L}, {(-1L), (-1L), 1L, 7L}, {(-1L), (-1L), 1L, 7L}, {(-1L), (-1L), 1L, 7L}, {(-1L), (-1L), 1L, 7L}, {(-1L), (-1L), 1L, 7L}, {(-1L), (-1L), 1L, 7L}}, {{(-1L), (-1L), 1L, 7L}, {(-1L), (-1L), 1L, 7L}, {(-1L), (-1L), 1L, 7L}, {(-1L), (-1L), 1L, 7L}, {(-1L), (-1L), 1L, 7L}, {(-1L), (-1L), 1L, 7L}, {(-1L), (-1L), 1L, 7L}, {(-1L), (-1L), 1L, 7L}, {(-1L), (-1L), 1L, 7L}, {(-1L), (-1L), 1L, 7L}}};
                    int i, j, k;
                    --l_1266;
                    if (p_8)
                        break;
                    return p_5;
                }
                else
                {
                    l_1259 &= 0x1ADB380DL;
                    for (l_1263 = 0; (l_1263 > (-18)); l_1263--)
                    {
                        (*g_269) = l_1214[7];
                    }
                }
            }
            else
            {
                if (p_8)
                    break;
            }
        }
        for (g_712 = 2; (g_712 >= 0); g_712 -= 1)
        {
            int l_1287 = (-1L);
            int l_1289 = (-4L);
            int l_1294 = 0x7F9BB571L;
            int l_1295 = 9L;
            int l_1296 = 9L;
            int l_1297 = 0L;
            int l_1298 = 0x66CD8443L;
            int l_1299 = (-5L);
            int l_1300 = 0x41BBBB47L;
            char l_1301 = 0x2CL;
            int l_1302 = (-3L);
            int l_1303[5];
            unsigned l_1306 = 0xA882ABC7L;
            int l_1311 = 0L;
            unsigned char ***l_1332 = (void*)0;
            unsigned char ****l_1331 = &l_1332;
            int l_1336 = 0x1079F823L;
            unsigned l_1357 = 0UL;
            int i;
            for (i = 0; i < 5; i++)
                l_1303[i] = 0x655D8E39L;
            (*l_1211) = (&g_66[g_712] != (void*)0);
            l_1257[4][0][4] = g_66[g_712];
            for (p_7 = 0; (p_7 <= 0); p_7 += 1)
            {
                unsigned l_1271[9][10] = {{0x447FD842L, 6UL, 0x9E520AD2L, 0x6AA03DADL, 0x9E520AD2L, 6UL, 0x447FD842L, 0UL, 0xC77FD0E6L, 0x6A060E6EL}, {0x447FD842L, 6UL, 0x9E520AD2L, 0x6AA03DADL, 0x9E520AD2L, 6UL, 0x447FD842L, 0UL, 0xC77FD0E6L, 0x6A060E6EL}, {0x447FD842L, 6UL, 0x9E520AD2L, 0x6AA03DADL, 0x9E520AD2L, 6UL, 0x447FD842L, 0UL, 0xC77FD0E6L, 0x6A060E6EL}, {0x447FD842L, 6UL, 0x9E520AD2L, 0x6AA03DADL, 0x9E520AD2L, 6UL, 0x447FD842L, 0UL, 0xC77FD0E6L, 0x6A060E6EL}, {0x447FD842L, 6UL, 0x9E520AD2L, 0x6AA03DADL, 0x9E520AD2L, 6UL, 0x447FD842L, 0UL, 0xC77FD0E6L, 0x6A060E6EL}, {0x447FD842L, 6UL, 0x9E520AD2L, 0x6AA03DADL, 0x9E520AD2L, 6UL, 0x447FD842L, 0UL, 0xC77FD0E6L, 0x6A060E6EL}, {0x447FD842L, 6UL, 0x9E520AD2L, 0x6AA03DADL, 0x9E520AD2L, 6UL, 0x447FD842L, 0UL, 0xC77FD0E6L, 0x6A060E6EL}, {0x447FD842L, 6UL, 0x9E520AD2L, 0x6AA03DADL, 0x9E520AD2L, 6UL, 0x447FD842L, 0UL, 0xC77FD0E6L, 0x6A060E6EL}, {0x447FD842L, 6UL, 0x9E520AD2L, 0x6AA03DADL, 0x9E520AD2L, 6UL, 0x447FD842L, 0UL, 0xC77FD0E6L, 0x6A060E6EL}};
                short l_1284 = (-1L);
                int l_1285 = 0L;
                int l_1286 = 0xED94478BL;
                int l_1290 = (-1L);
                int l_1292 = 0xC5EA195AL;
                int l_1293[9][10][1] = {{{(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}}, {{(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}}, {{(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}}, {{(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}}, {{(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}}, {{(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}}, {{(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}}, {{(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}}, {{(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}}};
                char *l_1320 = &l_1277[0][3][2];
                char *l_1322 = &l_1277[0][3][2];
                int i, j, k;
                ++l_1271[4][6];
                if (g_103[p_7][p_7])
                    continue;
                for (p_6 = 0; (p_6 <= 0); p_6 += 1)
                {
                    int *l_1274 = &g_71;
                    int i, j;
                    (**g_268) = l_1274;
                    l_1257[0][0][2] &= ((*l_1212) = ((**g_269) &= g_9[(g_712 + 4)][p_6]));
                    if ((((safe_rshift_func_uint8_t_u_s((g_9[p_6][p_7] == (g_9[(p_6 + 1)][p_7] > ((l_1284 == 0x8CL) & (-7L)))), 5)) > (**g_968)) | 0x4D23EBF8L))
                    {
                        (*g_269) = (**g_268);
                        (*l_1212) = (0L ^ (0xE2FDL == (((*g_286) = ((0x57BDL >= (*g_286)) && (p_7 < 0UL))) <= l_1271[4][6])));
                        if ((*g_70))
                            continue;
                        (**g_268) = (void*)0;
                    }
                    else
                    {
                        return g_66[g_712];
                    }
                }
                for (p_8 = 0; (p_8 <= 4); p_8 += 1)
                {
                    int l_1288 = 0x56AD6FFCL;
                    int l_1291[4][9] = {{(-1L), 0x54A3C33BL, 0xCA14A81AL, 0x54A3C33BL, (-1L), 0x54A3C33BL, 0xCA14A81AL, 0x54A3C33BL, (-1L)}, {(-1L), 0x54A3C33BL, 0xCA14A81AL, 0x54A3C33BL, (-1L), 0x54A3C33BL, 0xCA14A81AL, 0x54A3C33BL, (-1L)}, {(-1L), 0x54A3C33BL, 0xCA14A81AL, 0x54A3C33BL, (-1L), 0x54A3C33BL, 0xCA14A81AL, 0x54A3C33BL, (-1L)}, {(-1L), 0x54A3C33BL, 0xCA14A81AL, 0x54A3C33BL, (-1L), 0x54A3C33BL, 0xCA14A81AL, 0x54A3C33BL, (-1L)}};
                    int l_1304 = 0x87C39E29L;
                    char **l_1321 = &l_1320;
                    unsigned l_1324 = 6UL;
                    int i, j, k;
                    for (p_6 = 0; (p_6 <= 0); p_6 += 1)
                    {
                        int i, j, k;
                        (**g_268) = l_1235[(p_7 + 4)][g_712][p_6];
                    }
                    l_1306++;
                    if ((safe_sub_func_int16_t_s_s(l_1277[(p_7 + 2)][(p_7 + 3)][p_8], ((l_1277[(p_7 + 4)][p_8][p_7] <= (l_1311 && ((safe_mod_func_int8_t_s_s((l_1291[0][8] &= (**g_282)), func_31((l_1323 = (((safe_add_func_int32_t_s_s((safe_sub_func_int32_t_s_s((p_8 <= (+0x1BL)), ((*l_1210) = (p_6 | (safe_sub_func_uint16_t_u_u(((((*l_1321) = l_1320) != l_1322) ^ l_1277[2][4][3]), 0xDC7DL)))))), l_1304)) && 0xB9L) <= (*g_286))), l_1294, (**g_282)))) & l_1231))) && (**g_282)))))
                    {
                        int i, j, k;
                        (**g_268) = l_1235[p_8][p_8][(p_7 + 1)];
                        if (p_7)
                            continue;
                        ++l_1324;
                    }
                    else
                    {
                        (**g_268) = &l_1305;
                    }
                }
            }
            if ((p_8 < p_6))
            {
                unsigned char l_1345 = 0x98L;
                int l_1346 = (-1L);
                int l_1349 = 0xE4C8F1C4L;
                int l_1351 = 0x868A40A0L;
                int l_1354[10] = {0xD7D85FECL, 0xD7D85FECL, 1L, 0xD7D85FECL, 0xD7D85FECL, 1L, 0xD7D85FECL, 0xD7D85FECL, 1L, 0xD7D85FECL};
                int l_1371 = 0L;
                short l_1372 = 0L;
                unsigned char l_1374 = 0x8DL;
                int i;
                for (g_777 = 0; (g_777 >= 0); g_777 -= 1)
                {
                    unsigned l_1338 = 4294967287UL;
                    unsigned *l_1343 = &g_895;
                    int *l_1344 = (void*)0;
                    int l_1348[9][7][2] = {{{4L, 1L}, {4L, 1L}, {4L, 1L}, {4L, 1L}, {4L, 1L}, {4L, 1L}, {4L, 1L}}, {{4L, 1L}, {4L, 1L}, {4L, 1L}, {4L, 1L}, {4L, 1L}, {4L, 1L}, {4L, 1L}}, {{4L, 1L}, {4L, 1L}, {4L, 1L}, {4L, 1L}, {4L, 1L}, {4L, 1L}, {4L, 1L}}, {{4L, 1L}, {4L, 1L}, {4L, 1L}, {4L, 1L}, {4L, 1L}, {4L, 1L}, {4L, 1L}}, {{4L, 1L}, {4L, 1L}, {4L, 1L}, {4L, 1L}, {4L, 1L}, {4L, 1L}, {4L, 1L}}, {{4L, 1L}, {4L, 1L}, {4L, 1L}, {4L, 1L}, {4L, 1L}, {4L, 1L}, {4L, 1L}}, {{4L, 1L}, {4L, 1L}, {4L, 1L}, {4L, 1L}, {4L, 1L}, {4L, 1L}, {4L, 1L}}, {{4L, 1L}, {4L, 1L}, {4L, 1L}, {4L, 1L}, {4L, 1L}, {4L, 1L}, {4L, 1L}}, {{4L, 1L}, {4L, 1L}, {4L, 1L}, {4L, 1L}, {4L, 1L}, {4L, 1L}, {4L, 1L}}};
                    int i, j, k;
                    l_1338++;
                    if (func_31(l_1266, ((**l_1242) = func_42((safe_sub_func_int16_t_s_s(p_7, (1UL > ((*l_1343) &= g_9[5][0])))), p_6, (l_1345 = 0x0466C842L), (0x98L & l_1346))), g_103[0][1]))
                    {
                        l_1347 = (+((*l_1210) = p_6));
                    }
                    else
                    {
                        int l_1350 = 0x0642E210L;
                        int l_1353 = 0x5346E712L;
                        int l_1355 = 0xE662CDF9L;
                        int l_1356 = 1L;
                        short *l_1370 = &g_78;
                        l_1357++;
                        (*l_1210) = l_1360;
                        l_1354[0] = (((((*l_1370) |= (p_5 && ((0x0FL >= (safe_lshift_func_uint8_t_u_s(l_1337[5], (safe_mod_func_int32_t_s_s(((safe_lshift_func_uint16_t_u_u((***g_967), ((((*g_286) &= (safe_mod_func_uint32_t_u_u(4294967295UL, p_7))) >= l_1356) && (*g_283)))) <= l_1349), (-5L)))))) != p_8))) ^ l_1356) == g_9[(g_712 + 2)][g_777]) && p_7);
                    }
                }
                ++l_1374;
            }
            else
            {
                (*l_1212) ^= (l_1297 < p_8);
            }
        }
        if ((safe_mod_func_uint8_t_u_u(0x0BL, (safe_sub_func_uint8_t_u_u(((***g_967) > (p_6 & 1L)), ((*g_575) = l_1381))))))
        {
            return p_7;
        }
        else
        {
            for (p_7 = 0; (p_7 < 28); ++p_7)
            {
                return l_1266;
            }
        }
    }
    return (*g_575);
}







static unsigned func_10(char p_11, unsigned p_12, int p_13, int p_14, char p_15)
{
    char ***l_1092 = &g_282;
    int *l_1095 = &g_66[0];
    char l_1098 = 0xF6L;
    unsigned char *l_1106[2];
    unsigned char l_1121 = 0x4FL;
    int l_1143 = (-1L);
    int l_1174 = 0x5E81A581L;
    int l_1176 = 1L;
    int l_1177 = (-1L);
    int l_1179 = 0xFAA487A7L;
    int l_1181 = 0x60B37C71L;
    int l_1182 = 0xAC96A886L;
    int l_1183 = 0xDCBAB73AL;
    int l_1184 = 1L;
    int l_1185 = (-6L);
    int l_1186 = (-1L);
    unsigned *l_1196 = &g_945;
    unsigned **l_1195[8] = {&l_1196, &l_1196, &l_1196, &l_1196, &l_1196, &l_1196, &l_1196, &l_1196};
    unsigned char l_1207 = 0UL;
    int i;
    for (i = 0; i < 2; i++)
        l_1106[i] = &g_85;
    (*l_1095) ^= (safe_lshift_func_int8_t_s_u((l_1092 == (void*)0), (safe_sub_func_int16_t_s_s(p_15, p_12))));
    if (((safe_sub_func_int8_t_s_s((l_1098 == (safe_lshift_func_int8_t_s_u((safe_rshift_func_int8_t_s_u((*l_1095), 7)), 3))), ((safe_lshift_func_int8_t_s_u(((void*)0 != (*g_967)), ((*g_575) = (p_11 || (((**g_285) = (((8L > (*l_1095)) ^ (0x38EA15F9L < (*l_1095))) >= g_66[2])) && (**g_968)))))) ^ 0xAD38L))) < 0x6BEA03B8L))
    {
        unsigned char *l_1105 = &g_572;
        char **l_1117 = &g_283;
        int l_1118 = 0x9433064FL;
        unsigned short *l_1119 = &g_103[2][0];
        unsigned *l_1120 = &g_802;
        int *l_1139 = (void*)0;
        if ((l_1121 = ((*g_283) >= (65527UL > func_31(((l_1105 = l_1105) == l_1106[1]), (safe_rshift_func_uint16_t_u_u((safe_div_func_uint8_t_u_u((safe_sub_func_int8_t_s_s(((safe_rshift_func_uint8_t_u_s(0x6EL, 4)) <= ((*l_1120) ^= (((*l_1119) = (((0x926353F6L ^ (safe_sub_func_int32_t_s_s(((*l_1092) != l_1117), ((((*g_113) = l_1118) & p_12) < p_12)))) & 0xEBL) & (**g_285))) == p_13))), p_13)), 0x68L)), (*l_1095))), p_13)))))
        {
            (*g_967) = (*g_967);
        }
        else
        {
            unsigned short l_1132 = 65527UL;
            char l_1137[3];
            int l_1142 = 0x08408E07L;
            unsigned char l_1158 = 0xB8L;
            int i;
            for (i = 0; i < 3; i++)
                l_1137[i] = 0x7BL;
            l_1118 &= (*l_1095);
            for (g_945 = 0; (g_945 <= 0); g_945 += 1)
            {
                int i;
                (*l_1095) |= func_31(g_249[(g_945 + 7)], (***g_967), l_1118);
                if (p_13)
                    break;
                if (((p_11 < (g_249[(g_945 + 5)] = l_1118)) & (safe_add_func_uint32_t_u_u((func_31(p_12, (!(safe_sub_func_int16_t_s_s(0xA494L, (*g_286)))), func_31(((**g_282) <= ((((*l_1119) ^= (safe_add_func_uint16_t_u_u((***g_967), (safe_add_func_int8_t_s_s((p_15 &= (safe_add_func_uint16_t_u_u((g_572 < p_12), l_1132))), p_13))))) || l_1132) >= 4L)), (***g_967), l_1118)) <= p_14), g_66[2]))))
                {
                    for (g_117 = 0; (g_117 <= 0); g_117 += 1)
                    {
                        (*l_1095) |= p_12;
                        l_1137[1] &= (p_14 <= (safe_lshift_func_uint8_t_u_u(((safe_rshift_func_uint8_t_u_s(9UL, 6)) == p_13), 0)));
                    }
                    if ((!((void*)0 != &p_14)))
                    {
                        return l_1118;
                    }
                    else
                    {
                        int **l_1138[8] = {(void*)0, &l_1095, (void*)0, &l_1095, (void*)0, &l_1095, (void*)0, &l_1095};
                        int i;
                        l_1139 = ((*g_269) = &p_13);
                    }
                }
                else
                {
                    unsigned short l_1141[1][3][6] = {{{65531UL, 0x68D8L, 65531UL, 0x68D8L, 65531UL, 0x68D8L}, {65531UL, 0x68D8L, 65531UL, 0x68D8L, 65531UL, 0x68D8L}, {65531UL, 0x68D8L, 65531UL, 0x68D8L, 65531UL, 0x68D8L}}};
                    int i, j, k;
                    (*l_1095) = (-1L);
                    for (p_15 = 0; (p_15 >= 0); p_15 -= 1)
                    {
                        int *l_1140 = &g_66[1];
                        l_1140 = &p_13;
                        (*l_1140) = p_12;
                    }
                    l_1141[0][0][2] = 0x81550CBDL;
                    return p_14;
                }
                for (g_85 = 0; (g_85 <= 0); g_85 += 1)
                {
                    unsigned short *l_1154 = &g_117;
                    int l_1157[8] = {0xC84EEABCL, 0xDB8F8DCEL, 0xC84EEABCL, 0xDB8F8DCEL, 0xC84EEABCL, 0xDB8F8DCEL, 0xC84EEABCL, 0xDB8F8DCEL};
                    int i;
                    l_1142 ^= (p_14 != (***g_967));
                    for (g_78 = 0; (g_78 <= 0); g_78 += 1)
                    {
                        char *l_1159 = &l_1098;
                        if (l_1143)
                            break;
                        (*l_1139) = (p_13 <= (0UL < (safe_div_func_int8_t_s_s(func_42(func_42(func_42((safe_rshift_func_int8_t_s_s((*g_283), 5)), (*g_113), (safe_add_func_uint8_t_u_u(l_1137[1], (safe_lshift_func_uint8_t_u_u((((void*)0 != l_1154) && ((l_1157[1] < (((*l_1159) ^= func_31(g_249[(g_945 + 7)], p_12, l_1158)) < 1L)) ^ p_13)), 0)))), (*g_575)), p_11, g_249[8], p_11), p_15, p_15, (*l_1139)), (*g_575)))));
                        (**g_268) = &p_13;
                        return g_249[(g_945 + 5)];
                    }
                }
            }
            l_1142 ^= ((!(**g_282)) >= (safe_div_func_int16_t_s_s((*l_1095), (**g_285))));
            (*l_1095) = p_12;
        }
        for (g_572 = (-24); (g_572 < 42); g_572 = safe_add_func_uint8_t_u_u(g_572, 7))
        {
            for (g_114 = 20; (g_114 == 25); g_114++)
            {
                return g_895;
            }
        }
    }
    else
    {
        int *l_1166 = &g_66[2];
        int l_1167 = 0x48422ADCL;
        (*g_269) = l_1166;
        return l_1167;
    }
    if ((*l_1095))
    {
        char l_1175 = (-1L);
        int l_1178 = 0x53623BF5L;
        int l_1180[6][8][3] = {{{0xC96DAE5EL, (-3L), 7L}, {0xC96DAE5EL, (-3L), 7L}, {0xC96DAE5EL, (-3L), 7L}, {0xC96DAE5EL, (-3L), 7L}, {0xC96DAE5EL, (-3L), 7L}, {0xC96DAE5EL, (-3L), 7L}, {0xC96DAE5EL, (-3L), 7L}, {0xC96DAE5EL, (-3L), 7L}}, {{0xC96DAE5EL, (-3L), 7L}, {0xC96DAE5EL, (-3L), 7L}, {0xC96DAE5EL, (-3L), 7L}, {0xC96DAE5EL, (-3L), 7L}, {0xC96DAE5EL, (-3L), 7L}, {0xC96DAE5EL, (-3L), 7L}, {0xC96DAE5EL, (-3L), 7L}, {0xC96DAE5EL, (-3L), 7L}}, {{0xC96DAE5EL, (-3L), 7L}, {0xC96DAE5EL, (-3L), 7L}, {0xC96DAE5EL, (-3L), 7L}, {0xC96DAE5EL, (-3L), 7L}, {0xC96DAE5EL, (-3L), 7L}, {0xC96DAE5EL, (-3L), 7L}, {0xC96DAE5EL, (-3L), 7L}, {0xC96DAE5EL, (-3L), 7L}}, {{0xC96DAE5EL, (-3L), 7L}, {0xC96DAE5EL, (-3L), 7L}, {0xC96DAE5EL, (-3L), 7L}, {0xC96DAE5EL, (-3L), 7L}, {0xC96DAE5EL, (-3L), 7L}, {0xC96DAE5EL, (-3L), 7L}, {0xC96DAE5EL, (-3L), 7L}, {0xC96DAE5EL, (-3L), 7L}}, {{0xC96DAE5EL, (-3L), 7L}, {0xC96DAE5EL, (-3L), 7L}, {0xC96DAE5EL, (-3L), 7L}, {0xC96DAE5EL, (-3L), 7L}, {0xC96DAE5EL, (-3L), 7L}, {0xC96DAE5EL, (-3L), 7L}, {0xC96DAE5EL, (-3L), 7L}, {0xC96DAE5EL, (-3L), 7L}}, {{0xC96DAE5EL, (-3L), 7L}, {0xC96DAE5EL, (-3L), 7L}, {0xC96DAE5EL, (-3L), 7L}, {0xC96DAE5EL, (-3L), 7L}, {0xC96DAE5EL, (-3L), 7L}, {0xC96DAE5EL, (-3L), 7L}, {0xC96DAE5EL, (-3L), 7L}, {0xC96DAE5EL, (-3L), 7L}}};
        unsigned char l_1187 = 0xA0L;
        int *l_1206[6] = {&l_1179, &l_1180[0][0][2], &l_1179, &l_1180[0][0][2], &l_1179, &l_1180[0][0][2]};
        int i, j, k;
        if ((p_15 != (***g_967)))
        {
            int *l_1168 = &g_66[2];
            int *l_1169 = &l_1143;
            int *l_1170 = &g_777;
            int *l_1171 = &g_71;
            int *l_1172 = &g_71;
            int *l_1173[4] = {&g_71, &g_66[2], &g_71, &g_66[2]};
            int i;
            --l_1187;
        }
        else
        {
            unsigned char *l_1194 = &l_1187;
            for (p_15 = 0; (p_15 != (-8)); p_15 = safe_sub_func_int32_t_s_s(p_15, 1))
            {
                unsigned l_1200 = 1UL;
                short ***l_1204 = (void*)0;
                (*l_1095) = 0L;
                if (p_12)
                {
                    (*g_268) = (*g_268);
                    if (p_14)
                        break;
                    if (((safe_lshift_func_int16_t_s_s((&l_1187 == l_1194), 4)) > ((void*)0 == l_1195[6])))
                    {
                        return p_15;
                    }
                    else
                    {
                        return p_13;
                    }
                }
                else
                {
                    short l_1197[5];
                    int i;
                    for (i = 0; i < 5; i++)
                        l_1197[i] = 0xDE07L;
                    if (((*g_283) ^ ((*g_575)--)))
                    {
                        (**g_268) = &l_1185;
                        (*g_70) &= (l_1200 > ((*l_1095) = p_15));
                        (**g_269) = 0x2B899CC9L;
                    }
                    else
                    {
                        int *l_1201 = &l_1181;
                        (*l_1201) |= ((*l_1095) = 0x806BAF0CL);
                        (**g_268) = &p_14;
                        (*g_70) |= (safe_lshift_func_int16_t_s_s((0x6D7BC70BL ^ ((void*)0 != l_1204)), 14));
                    }
                }
                for (l_1183 = 7; (l_1183 >= 2); l_1183 -= 1)
                {
                    int *l_1205 = &l_1185;
                    (*g_70) = ((void*)0 == (**g_268));
                    (*g_269) = &p_14;
                    (**g_268) = l_1205;
                    for (l_1175 = 2; (l_1175 >= 0); l_1175 -= 1)
                    {
                        return g_249[1];
                    }
                }
            }
        }
        l_1207++;
    }
    else
    {
        for (g_477 = 3; (g_477 <= 8); g_477 += 1)
        {
            (*g_269) = &l_1177;
            for (l_1185 = 6; (l_1185 >= 0); l_1185 -= 1)
            {
                if (p_13)
                    break;
                for (g_95 = 8; (g_95 >= 0); g_95 -= 1)
                {
                    return (*l_1095);
                }
                if ((*l_1095))
                    break;
            }
            (**g_268) = &p_14;
            for (g_777 = 5; (g_777 >= 0); g_777 -= 1)
            {
                if (p_15)
                    break;
            }
        }
        (**g_268) = (void*)0;
    }
    (*l_1095) = (&g_283 == (void*)0);
    return p_15;
}







static unsigned char func_17(short p_18, unsigned p_19, unsigned char p_20)
{
    int l_953 = (-1L);
    int l_956 = (-1L);
    int **l_957 = &g_901;
    int l_1008 = 0x1411E907L;
    int l_1011 = 0xDECAACFBL;
    int l_1029 = 0xDE8FA727L;
    int l_1030 = 0x5D821F94L;
    int l_1031 = 1L;
    int l_1032 = 0x4C5D90E2L;
    int l_1034 = 0x2DBBDED7L;
    int l_1037 = (-1L);
    int l_1038 = (-5L);
    int l_1041[10] = {0L, 0L, (-1L), 0L, 0L, (-1L), 0L, 0L, (-1L), 0L};
    unsigned *l_1059[2][9][7] = {{{&g_945, (void*)0, &g_945, (void*)0, &g_945, &g_945, &g_945}, {&g_945, (void*)0, &g_945, (void*)0, &g_945, &g_945, &g_945}, {&g_945, (void*)0, &g_945, (void*)0, &g_945, &g_945, &g_945}, {&g_945, (void*)0, &g_945, (void*)0, &g_945, &g_945, &g_945}, {&g_945, (void*)0, &g_945, (void*)0, &g_945, &g_945, &g_945}, {&g_945, (void*)0, &g_945, (void*)0, &g_945, &g_945, &g_945}, {&g_945, (void*)0, &g_945, (void*)0, &g_945, &g_945, &g_945}, {&g_945, (void*)0, &g_945, (void*)0, &g_945, &g_945, &g_945}, {&g_945, (void*)0, &g_945, (void*)0, &g_945, &g_945, &g_945}}, {{&g_945, (void*)0, &g_945, (void*)0, &g_945, &g_945, &g_945}, {&g_945, (void*)0, &g_945, (void*)0, &g_945, &g_945, &g_945}, {&g_945, (void*)0, &g_945, (void*)0, &g_945, &g_945, &g_945}, {&g_945, (void*)0, &g_945, (void*)0, &g_945, &g_945, &g_945}, {&g_945, (void*)0, &g_945, (void*)0, &g_945, &g_945, &g_945}, {&g_945, (void*)0, &g_945, (void*)0, &g_945, &g_945, &g_945}, {&g_945, (void*)0, &g_945, (void*)0, &g_945, &g_945, &g_945}, {&g_945, (void*)0, &g_945, (void*)0, &g_945, &g_945, &g_945}, {&g_945, (void*)0, &g_945, (void*)0, &g_945, &g_945, &g_945}}};
    int l_1080 = 0L;
    int i, j, k;
    for (g_85 = 2; (g_85 <= 8); g_85 += 1)
    {
        int *l_954[7] = {&g_71, &g_71, &g_777, &g_71, &g_71, &g_777, &g_71};
        short l_955[4][10];
        int i, j;
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 10; j++)
                l_955[i][j] = (-7L);
        }
        l_953 = 1L;
        l_954[5] = l_954[6];
        l_956 |= (((&g_113 != (void*)0) <= ((void*)0 != &g_286)) >= ((+g_249[g_85]) || (p_19 >= l_955[0][1])));
        return (*g_575);
    }
    (*l_957) = ((**g_268) = &l_956);
    for (l_953 = 3; (l_953 <= 8); l_953 += 1)
    {
        int i;
        return g_249[l_953];
    }
    for (g_945 = 0; (g_945 != 48); g_945++)
    {
        unsigned l_964 = 0xC293C0FCL;
        unsigned short **l_966[2][1][5] = {{{&g_113, &g_113, &g_113, &g_113, &g_113}}, {{&g_113, &g_113, &g_113, &g_113, &g_113}}};
        unsigned short ***l_965 = &l_966[0][0][1];
        char ***l_973 = &g_282;
        int *l_974 = &g_71;
        unsigned char *l_990[6][5] = {{&g_572, &g_85, &g_572, &g_85, &g_85}, {&g_572, &g_85, &g_572, &g_85, &g_85}, {&g_572, &g_85, &g_572, &g_85, &g_85}, {&g_572, &g_85, &g_572, &g_85, &g_85}, {&g_572, &g_85, &g_572, &g_85, &g_85}, {&g_572, &g_85, &g_572, &g_85, &g_85}};
        short l_1009 = 6L;
        int l_1015 = 0x9AB386A7L;
        int *l_1023 = (void*)0;
        int l_1033 = 0x1AF2F0AEL;
        int l_1036 = (-3L);
        int l_1040 = 0L;
        int l_1042 = (-1L);
        short l_1050 = (-8L);
        unsigned l_1062 = 7UL;
        int l_1066 = 0x23F47F49L;
        unsigned l_1067[7][7][5] = {{{0x713DBC6EL, 0xD98FB0ACL, 0x713DBC6EL, 0xD98FB0ACL, 0x713DBC6EL}, {0x713DBC6EL, 0xD98FB0ACL, 0x713DBC6EL, 0xD98FB0ACL, 0x713DBC6EL}, {0x713DBC6EL, 0xD98FB0ACL, 0x713DBC6EL, 0xD98FB0ACL, 0x713DBC6EL}, {0x713DBC6EL, 0xD98FB0ACL, 0x713DBC6EL, 0xD98FB0ACL, 0x713DBC6EL}, {0x713DBC6EL, 0xD98FB0ACL, 0x713DBC6EL, 0xD98FB0ACL, 0x713DBC6EL}, {0x713DBC6EL, 0xD98FB0ACL, 0x713DBC6EL, 0xD98FB0ACL, 0x713DBC6EL}, {0x713DBC6EL, 0xD98FB0ACL, 0x713DBC6EL, 0xD98FB0ACL, 0x713DBC6EL}}, {{0x713DBC6EL, 0xD98FB0ACL, 0x713DBC6EL, 0xD98FB0ACL, 0x713DBC6EL}, {0x713DBC6EL, 0xD98FB0ACL, 0x713DBC6EL, 0xD98FB0ACL, 0x713DBC6EL}, {0x713DBC6EL, 0xD98FB0ACL, 0x713DBC6EL, 0xD98FB0ACL, 0x713DBC6EL}, {0x713DBC6EL, 0xD98FB0ACL, 0x713DBC6EL, 0xD98FB0ACL, 0x713DBC6EL}, {0x713DBC6EL, 0xD98FB0ACL, 0x713DBC6EL, 0xD98FB0ACL, 0x713DBC6EL}, {0x713DBC6EL, 0xD98FB0ACL, 0x713DBC6EL, 0xD98FB0ACL, 0x713DBC6EL}, {0x713DBC6EL, 0xD98FB0ACL, 0x713DBC6EL, 0xD98FB0ACL, 0x713DBC6EL}}, {{0x713DBC6EL, 0xD98FB0ACL, 0x713DBC6EL, 0xD98FB0ACL, 0x713DBC6EL}, {0x713DBC6EL, 0xD98FB0ACL, 0x713DBC6EL, 0xD98FB0ACL, 0x713DBC6EL}, {0x713DBC6EL, 0xD98FB0ACL, 0x713DBC6EL, 0xD98FB0ACL, 0x713DBC6EL}, {0x713DBC6EL, 0xD98FB0ACL, 0x713DBC6EL, 0xD98FB0ACL, 0x713DBC6EL}, {0x713DBC6EL, 0xD98FB0ACL, 0x713DBC6EL, 0xD98FB0ACL, 0x713DBC6EL}, {0x713DBC6EL, 0xD98FB0ACL, 0x713DBC6EL, 0xD98FB0ACL, 0x713DBC6EL}, {0x713DBC6EL, 0xD98FB0ACL, 0x713DBC6EL, 0xD98FB0ACL, 0x713DBC6EL}}, {{0x713DBC6EL, 0xD98FB0ACL, 0x713DBC6EL, 0xD98FB0ACL, 0x713DBC6EL}, {0x713DBC6EL, 0xD98FB0ACL, 0x713DBC6EL, 0xD98FB0ACL, 0x713DBC6EL}, {0x713DBC6EL, 0xD98FB0ACL, 0x713DBC6EL, 0xD98FB0ACL, 0x713DBC6EL}, {0x713DBC6EL, 0xD98FB0ACL, 0x713DBC6EL, 0xD98FB0ACL, 0x713DBC6EL}, {0x713DBC6EL, 0xD98FB0ACL, 0x713DBC6EL, 0xD98FB0ACL, 0x713DBC6EL}, {0x713DBC6EL, 0xD98FB0ACL, 0x713DBC6EL, 0xD98FB0ACL, 0x713DBC6EL}, {0x713DBC6EL, 0xD98FB0ACL, 0x713DBC6EL, 0xD98FB0ACL, 0x713DBC6EL}}, {{0x713DBC6EL, 0xD98FB0ACL, 0x713DBC6EL, 0xD98FB0ACL, 0x713DBC6EL}, {0x713DBC6EL, 0xD98FB0ACL, 0x713DBC6EL, 0xD98FB0ACL, 0x713DBC6EL}, {0x713DBC6EL, 0xD98FB0ACL, 0x713DBC6EL, 0xD98FB0ACL, 0x713DBC6EL}, {0x713DBC6EL, 0xD98FB0ACL, 0x713DBC6EL, 0xD98FB0ACL, 0x713DBC6EL}, {0x713DBC6EL, 0xD98FB0ACL, 0x713DBC6EL, 0xD98FB0ACL, 0x713DBC6EL}, {0x713DBC6EL, 0xD98FB0ACL, 0x713DBC6EL, 0xD98FB0ACL, 0x713DBC6EL}, {0x713DBC6EL, 0xD98FB0ACL, 0x713DBC6EL, 0xD98FB0ACL, 0x713DBC6EL}}, {{0x713DBC6EL, 0xD98FB0ACL, 0x713DBC6EL, 0xD98FB0ACL, 0x713DBC6EL}, {0x713DBC6EL, 0xD98FB0ACL, 0x713DBC6EL, 0xD98FB0ACL, 0x713DBC6EL}, {0x713DBC6EL, 0xD98FB0ACL, 0x713DBC6EL, 0xD98FB0ACL, 0x713DBC6EL}, {0x713DBC6EL, 0xD98FB0ACL, 0x713DBC6EL, 0xD98FB0ACL, 0x713DBC6EL}, {0x713DBC6EL, 0xD98FB0ACL, 0x713DBC6EL, 0xD98FB0ACL, 0x713DBC6EL}, {0x713DBC6EL, 0xD98FB0ACL, 0x713DBC6EL, 0xD98FB0ACL, 0x713DBC6EL}, {0x713DBC6EL, 0xD98FB0ACL, 0x713DBC6EL, 0xD98FB0ACL, 0x713DBC6EL}}, {{0x713DBC6EL, 0xD98FB0ACL, 0x713DBC6EL, 0xD98FB0ACL, 0x713DBC6EL}, {0x713DBC6EL, 0xD98FB0ACL, 0x713DBC6EL, 0xD98FB0ACL, 0x713DBC6EL}, {0x713DBC6EL, 0xD98FB0ACL, 0x713DBC6EL, 0xD98FB0ACL, 0x713DBC6EL}, {0x713DBC6EL, 0xD98FB0ACL, 0x713DBC6EL, 0xD98FB0ACL, 0x713DBC6EL}, {0x713DBC6EL, 0xD98FB0ACL, 0x713DBC6EL, 0xD98FB0ACL, 0x713DBC6EL}, {0x713DBC6EL, 0xD98FB0ACL, 0x713DBC6EL, 0xD98FB0ACL, 0x713DBC6EL}, {0x713DBC6EL, 0xD98FB0ACL, 0x713DBC6EL, 0xD98FB0ACL, 0x713DBC6EL}}};
        int l_1083 = 0L;
        int l_1084 = 0xEFA2F31BL;
        int l_1085[4][5][2] = {{{2L, 0x558D00B6L}, {2L, 0x558D00B6L}, {2L, 0x558D00B6L}, {2L, 0x558D00B6L}, {2L, 0x558D00B6L}}, {{2L, 0x558D00B6L}, {2L, 0x558D00B6L}, {2L, 0x558D00B6L}, {2L, 0x558D00B6L}, {2L, 0x558D00B6L}}, {{2L, 0x558D00B6L}, {2L, 0x558D00B6L}, {2L, 0x558D00B6L}, {2L, 0x558D00B6L}, {2L, 0x558D00B6L}}, {{2L, 0x558D00B6L}, {2L, 0x558D00B6L}, {2L, 0x558D00B6L}, {2L, 0x558D00B6L}, {2L, 0x558D00B6L}}};
        unsigned char l_1086[10][1];
        int i, j, k;
        for (i = 0; i < 10; i++)
        {
            for (j = 0; j < 1; j++)
                l_1086[i][j] = 0xF6L;
        }
        (**g_268) = (*g_269);
        (**l_957) = ((!(g_71 & 0x0BB30585L)) ^ (safe_sub_func_uint32_t_u_u((((p_20 > (safe_rshift_func_int8_t_s_u((**g_282), 2))) == l_964) | (l_965 != g_967)), (safe_rshift_func_int8_t_s_u(0x7EL, 0)))));
        for (l_964 = (-24); (l_964 <= 50); l_964++)
        {
            for (g_85 = 0; (g_85 <= 2); g_85 += 1)
            {
                int i;
                g_66[g_85] ^= ((l_973 = &g_282) != &g_282);
            }
            (*l_957) = (*l_957);
        }
        for (g_712 = 0; (g_712 <= 8); g_712 += 1)
        {
            int *l_975 = (void*)0;
            short *l_976 = &g_631;
            short *l_977 = &g_78;
            unsigned char *l_991 = (void*)0;
            int l_1010 = 1L;
            int l_1014[4][3][7] = {{{2L, 0x196254BBL, 1L, (-1L), 0x27E23805L, (-8L), 1L}, {2L, 0x196254BBL, 1L, (-1L), 0x27E23805L, (-8L), 1L}, {2L, 0x196254BBL, 1L, (-1L), 0x27E23805L, (-8L), 1L}}, {{2L, 0x196254BBL, 1L, (-1L), 0x27E23805L, (-8L), 1L}, {2L, 0x196254BBL, 1L, (-1L), 0x27E23805L, (-8L), 1L}, {2L, 0x196254BBL, 1L, (-1L), 0x27E23805L, (-8L), 1L}}, {{2L, 0x196254BBL, 1L, (-1L), 0x27E23805L, (-8L), 1L}, {2L, 0x196254BBL, 1L, (-1L), 0x27E23805L, (-8L), 1L}, {2L, 0x196254BBL, 1L, (-1L), 0x27E23805L, (-8L), 1L}}, {{2L, 0x196254BBL, 1L, (-1L), 0x27E23805L, (-8L), 1L}, {2L, 0x196254BBL, 1L, (-1L), 0x27E23805L, (-8L), 1L}, {2L, 0x196254BBL, 1L, (-1L), 0x27E23805L, (-8L), 1L}}};
            unsigned l_1016 = 0x9DBD1D53L;
            char **l_1046 = &g_283;
            unsigned char l_1065 = 1UL;
            unsigned l_1074 = 1UL;
            int i, j, k;
            l_975 = l_974;
        }
    }
    return p_18;
}







static short func_23(char p_24, unsigned p_25, int p_26, unsigned p_27, unsigned p_28)
{
    int *l_932 = (void*)0;
    int *l_933 = (void*)0;
    int *l_934 = &g_777;
    int *l_935 = &g_66[2];
    int *l_936 = &g_71;
    int *l_937 = &g_66[2];
    int *l_938 = &g_66[1];
    int *l_939 = &g_71;
    int *l_940 = (void*)0;
    int *l_941 = &g_777;
    int *l_942 = &g_71;
    int *l_943 = &g_66[2];
    int *l_944[8] = {&g_777, (void*)0, &g_777, (void*)0, &g_777, (void*)0, &g_777, (void*)0};
    short **l_948 = &g_286;
    int i;
    for (g_242 = (-12); (g_242 <= 14); g_242++)
    {
        unsigned l_928 = 0x4616F85BL;
        int *l_929 = &g_71;
        l_928 = 0x5F455E40L;
        (**g_268) = l_929;
        for (g_712 = 6; (g_712 >= (-18)); g_712 = safe_sub_func_uint16_t_u_u(g_712, 6))
        {
            (**g_268) = (**g_268);
        }
    }
    g_945--;
    (*l_939) ^= (*l_937);
    for (g_95 = 8; (g_95 > 27); g_95 = safe_add_func_uint16_t_u_u(g_95, 6))
    {
        if ((*l_935))
            break;
        (*l_941) = p_25;
    }
    return p_25;
}







static unsigned char func_31(int p_32, unsigned short p_33, char p_34)
{
    int *l_920[3];
    short l_921[4][4][10] = {{{0xBCF2L, 0x5538L, 1L, 1L, 0x5538L, 0xBCF2L, 8L, 0x699CL, 0x6F1CL, 1L}, {0xBCF2L, 0x5538L, 1L, 1L, 0x5538L, 0xBCF2L, 8L, 0x699CL, 0x6F1CL, 1L}, {0xBCF2L, 0x5538L, 1L, 1L, 0x5538L, 0xBCF2L, 8L, 0x699CL, 0x6F1CL, 1L}, {0xBCF2L, 0x5538L, 1L, 1L, 0x5538L, 0xBCF2L, 8L, 0x699CL, 0x6F1CL, 1L}}, {{0xBCF2L, 0x5538L, 1L, 1L, 0x5538L, 0xBCF2L, 8L, 0x699CL, 0x6F1CL, 1L}, {0xBCF2L, 0x5538L, 1L, 1L, 0x5538L, 0xBCF2L, 8L, 0x699CL, 0x6F1CL, 1L}, {0xBCF2L, 0x5538L, 1L, 1L, 0x5538L, 0xBCF2L, 8L, 0x699CL, 0x6F1CL, 1L}, {0xBCF2L, 0x5538L, 1L, 1L, 0x5538L, 0xBCF2L, 8L, 0x699CL, 0x6F1CL, 1L}}, {{0xBCF2L, 0x5538L, 1L, 1L, 0x5538L, 0xBCF2L, 8L, 0x699CL, 0x6F1CL, 1L}, {0xBCF2L, 0x5538L, 1L, 1L, 0x5538L, 0xBCF2L, 8L, 0x699CL, 0x6F1CL, 1L}, {0xBCF2L, 0x5538L, 1L, 1L, 0x5538L, 0xBCF2L, 8L, 0x699CL, 0x6F1CL, 1L}, {0xBCF2L, 0x5538L, 1L, 1L, 0x5538L, 0xBCF2L, 8L, 0x699CL, 0x6F1CL, 1L}}, {{0xBCF2L, 0x5538L, 1L, 1L, 0x5538L, 0xBCF2L, 8L, 0x699CL, 0x6F1CL, 1L}, {0xBCF2L, 0x5538L, 1L, 1L, 0x5538L, 0xBCF2L, 8L, 0x699CL, 0x6F1CL, 1L}, {0xBCF2L, 0x5538L, 1L, 1L, 0x5538L, 0xBCF2L, 8L, 0x699CL, 0x6F1CL, 1L}, {0xBCF2L, 0x5538L, 1L, 1L, 0x5538L, 0xBCF2L, 8L, 0x699CL, 0x6F1CL, 1L}}};
    unsigned short l_922[3][8][3] = {{{1UL, 0UL, 0UL}, {1UL, 0UL, 0UL}, {1UL, 0UL, 0UL}, {1UL, 0UL, 0UL}, {1UL, 0UL, 0UL}, {1UL, 0UL, 0UL}, {1UL, 0UL, 0UL}, {1UL, 0UL, 0UL}}, {{1UL, 0UL, 0UL}, {1UL, 0UL, 0UL}, {1UL, 0UL, 0UL}, {1UL, 0UL, 0UL}, {1UL, 0UL, 0UL}, {1UL, 0UL, 0UL}, {1UL, 0UL, 0UL}, {1UL, 0UL, 0UL}}, {{1UL, 0UL, 0UL}, {1UL, 0UL, 0UL}, {1UL, 0UL, 0UL}, {1UL, 0UL, 0UL}, {1UL, 0UL, 0UL}, {1UL, 0UL, 0UL}, {1UL, 0UL, 0UL}, {1UL, 0UL, 0UL}}};
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_920[i] = (void*)0;
    l_922[2][5][0]++;
    return p_34;
}







static char func_42(int p_43, unsigned short p_44, int p_45, unsigned char p_46)
{
    short l_859[8] = {0x24ACL, 0x24ACL, 0x65DCL, 0x24ACL, 0x24ACL, 0x65DCL, 0x24ACL, 0x24ACL};
    int *l_860 = (void*)0;
    int *l_861[6][3][4] = {{{&g_71, &g_777, &g_777, &g_777}, {&g_71, &g_777, &g_777, &g_777}, {&g_71, &g_777, &g_777, &g_777}}, {{&g_71, &g_777, &g_777, &g_777}, {&g_71, &g_777, &g_777, &g_777}, {&g_71, &g_777, &g_777, &g_777}}, {{&g_71, &g_777, &g_777, &g_777}, {&g_71, &g_777, &g_777, &g_777}, {&g_71, &g_777, &g_777, &g_777}}, {{&g_71, &g_777, &g_777, &g_777}, {&g_71, &g_777, &g_777, &g_777}, {&g_71, &g_777, &g_777, &g_777}}, {{&g_71, &g_777, &g_777, &g_777}, {&g_71, &g_777, &g_777, &g_777}, {&g_71, &g_777, &g_777, &g_777}}, {{&g_71, &g_777, &g_777, &g_777}, {&g_71, &g_777, &g_777, &g_777}, {&g_71, &g_777, &g_777, &g_777}}};
    unsigned char l_862 = 2UL;
    int *l_867 = &g_66[2];
    int **l_917[3];
    short l_918 = 3L;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_917[i] = (void*)0;
    l_862 ^= (p_43 = (!(p_46 && (safe_rshift_func_int8_t_s_s((*g_283), (**g_282))))));
    for (g_631 = 0; (g_631 <= 28); g_631 = safe_add_func_uint32_t_u_u(g_631, 3))
    {
        int l_886 = 4L;
        int l_887[6];
        char **l_905 = &g_283;
        unsigned char **l_912 = (void*)0;
        unsigned char **l_913 = &g_484;
        int i;
        for (i = 0; i < 6; i++)
            l_887[i] = 0L;
        for (g_117 = 8; (g_117 < 47); g_117 = safe_add_func_int16_t_s_s(g_117, 1))
        {
            int l_892 = (-8L);
            int l_894 = 0x0F729AAFL;
            (**g_268) = l_867;
            (*g_70) &= (safe_rshift_func_uint16_t_u_u(p_45, 1));
            for (g_71 = 15; (g_71 < 12); --g_71)
            {
                char l_888 = 1L;
                int l_890 = 0x5688E08CL;
                int l_891 = 8L;
            }
            for (g_242 = (-4); (g_242 != 18); ++g_242)
            {
                return (**g_282);
            }
        }
        p_43 &= (((safe_lshift_func_uint8_t_u_s((safe_sub_func_uint8_t_u_u((*g_575), (&l_859[5] == (*g_285)))), 6)) || ((**g_282) = (&p_46 == ((*l_913) = &p_46)))) < (*l_867));
        for (g_114 = 0; (g_114 >= 12); g_114 = safe_add_func_uint8_t_u_u(g_114, 5))
        {
            unsigned l_916 = 0xBFA1B9EEL;
            (*l_867) = l_916;
            for (g_477 = 0; (g_477 <= 1); g_477 += 1)
            {
                return p_43;
            }
        }
    }
    g_901 = ((**g_268) = &g_71);
    return l_918;
}







static unsigned func_49(short p_50, unsigned char p_51)
{
    unsigned l_595 = 4294967295UL;
    int l_599 = 0x6884920CL;
    int l_600 = (-6L);
    unsigned char l_612[3][3][9] = {{{0xAEL, 0xAEL, 1UL, 0UL, 0UL, 0UL, 1UL, 0xAEL, 0xAEL}, {0xAEL, 0xAEL, 1UL, 0UL, 0UL, 0UL, 1UL, 0xAEL, 0xAEL}, {0xAEL, 0xAEL, 1UL, 0UL, 0UL, 0UL, 1UL, 0xAEL, 0xAEL}}, {{0xAEL, 0xAEL, 1UL, 0UL, 0UL, 0UL, 1UL, 0xAEL, 0xAEL}, {0xAEL, 0xAEL, 1UL, 0UL, 0UL, 0UL, 1UL, 0xAEL, 0xAEL}, {0xAEL, 0xAEL, 1UL, 0UL, 0UL, 0UL, 1UL, 0xAEL, 0xAEL}}, {{0xAEL, 0xAEL, 1UL, 0UL, 0UL, 0UL, 1UL, 0xAEL, 0xAEL}, {0xAEL, 0xAEL, 1UL, 0UL, 0UL, 0UL, 1UL, 0xAEL, 0xAEL}, {0xAEL, 0xAEL, 1UL, 0UL, 0UL, 0UL, 1UL, 0xAEL, 0xAEL}}};
    unsigned char l_624 = 0x3DL;
    unsigned short l_632 = 65535UL;
    int l_644 = 5L;
    int l_649 = 4L;
    int l_651 = 5L;
    int l_655 = (-3L);
    int l_664 = 1L;
    int l_666 = 1L;
    int l_667 = 0xDD5776D7L;
    int l_668 = 5L;
    unsigned char **l_745 = &g_575;
    int l_828 = 0L;
    unsigned char l_829 = 1UL;
    unsigned l_854 = 3UL;
    int i, j, k;
    for (p_51 = 0; (p_51 != 2); p_51 = safe_add_func_uint16_t_u_u(p_51, 5))
    {
        int **l_587[9];
        int l_645[6][8] = {{0x6B805143L, 0x4DEDD979L, 0x6B805143L, 0x4DEDD979L, 0x6B805143L, 0x4DEDD979L, 0x6B805143L, 0x4DEDD979L}, {0x6B805143L, 0x4DEDD979L, 0x6B805143L, 0x4DEDD979L, 0x6B805143L, 0x4DEDD979L, 0x6B805143L, 0x4DEDD979L}, {0x6B805143L, 0x4DEDD979L, 0x6B805143L, 0x4DEDD979L, 0x6B805143L, 0x4DEDD979L, 0x6B805143L, 0x4DEDD979L}, {0x6B805143L, 0x4DEDD979L, 0x6B805143L, 0x4DEDD979L, 0x6B805143L, 0x4DEDD979L, 0x6B805143L, 0x4DEDD979L}, {0x6B805143L, 0x4DEDD979L, 0x6B805143L, 0x4DEDD979L, 0x6B805143L, 0x4DEDD979L, 0x6B805143L, 0x4DEDD979L}, {0x6B805143L, 0x4DEDD979L, 0x6B805143L, 0x4DEDD979L, 0x6B805143L, 0x4DEDD979L, 0x6B805143L, 0x4DEDD979L}};
        short **l_769 = &g_286;
        unsigned short l_783 = 0UL;
        int l_825 = 2L;
        int i, j;
        for (i = 0; i < 9; i++)
            l_587[i] = &g_70;
        if (p_50)
        {
            int l_586[6] = {(-1L), 1L, (-1L), 1L, (-1L), 1L};
            int i;
            if (l_586[5])
                break;
            l_586[5] |= ((void*)0 != l_587[6]);
            if (p_51)
                break;
        }
        else
        {
            unsigned *l_590 = &g_249[1];
            int l_598[5] = {(-8L), 0L, (-8L), 0L, (-8L)};
            unsigned short l_601 = 65535UL;
            int l_629 = 0x559FD597L;
            char l_665 = 7L;
            unsigned short l_670 = 0x24F7L;
            unsigned char **l_713 = &g_484;
            int i;
            if ((((*g_113) != (safe_add_func_uint32_t_u_u(((*l_590) = (p_51 > ((void*)0 != &g_484))), ((*g_575) == (*g_575))))) | ((g_71 = (((((l_600 &= ((safe_div_func_int16_t_s_s(7L, (safe_mod_func_uint16_t_u_u(l_595, (l_599 ^= (safe_mod_func_int32_t_s_s(p_50, l_598[4]))))))) > p_51)) != p_51) >= l_601) ^ p_50) > 0x6EL)) | 1UL)))
            {
                int **l_604 = (void*)0;
                g_66[1] = (((*g_113) = ((((*g_286) = (*g_286)) ^ ((void*)0 == l_604)) && l_600)) == (g_66[2] ^ ((*l_590)--)));
                for (g_85 = 23; (g_85 != 2); g_85 = safe_sub_func_uint32_t_u_u(g_85, 4))
                {
                    unsigned l_609[4] = {9UL, 1UL, 9UL, 1UL};
                    int l_617 = (-5L);
                    int i;
                    if (p_51)
                    {
                        --l_609[3];
                        g_66[0] |= (l_612[2][2][0] == (*g_113));
                        if (p_51)
                            break;
                    }
                    else
                    {
                        l_617 = (safe_div_func_uint16_t_u_u((0L <= (g_103[1][0] & (0x1422L | (safe_lshift_func_int16_t_s_u(p_51, 10))))), p_51));
                        return p_50;
                    }
                    for (g_114 = 0; (g_114 > 5); g_114 = safe_add_func_uint16_t_u_u(g_114, 4))
                    {
                        (**g_268) = &l_617;
                        (**g_269) |= p_50;
                    }
                    for (g_117 = 0; (g_117 <= 8); g_117++)
                    {
                        unsigned short l_622 = 1UL;
                        l_622 |= g_477;
                    }
                }
            }
            else
            {
                unsigned char **l_623[7] = {&g_575, &g_575, (void*)0, &g_575, &g_575, (void*)0, &g_575};
                int l_630 = 0xE764F48FL;
                int l_639 = 0x7E8E3D09L;
                int l_643 = 1L;
                int l_648 = 0x475B8645L;
                int l_652 = (-1L);
                int l_653[7][10] = {{0x5F7A22C3L, 0xAD4456D9L, 0x210719D2L, 0x667DDFDBL, 0x5F7A22C3L, 1L, (-2L), 1L, 0x5F7A22C3L, 0x667DDFDBL}, {0x5F7A22C3L, 0xAD4456D9L, 0x210719D2L, 0x667DDFDBL, 0x5F7A22C3L, 1L, (-2L), 1L, 0x5F7A22C3L, 0x667DDFDBL}, {0x5F7A22C3L, 0xAD4456D9L, 0x210719D2L, 0x667DDFDBL, 0x5F7A22C3L, 1L, (-2L), 1L, 0x5F7A22C3L, 0x667DDFDBL}, {0x5F7A22C3L, 0xAD4456D9L, 0x210719D2L, 0x667DDFDBL, 0x5F7A22C3L, 1L, (-2L), 1L, 0x5F7A22C3L, 0x667DDFDBL}, {0x5F7A22C3L, 0xAD4456D9L, 0x210719D2L, 0x667DDFDBL, 0x5F7A22C3L, 1L, (-2L), 1L, 0x5F7A22C3L, 0x667DDFDBL}, {0x5F7A22C3L, 0xAD4456D9L, 0x210719D2L, 0x667DDFDBL, 0x5F7A22C3L, 1L, (-2L), 1L, 0x5F7A22C3L, 0x667DDFDBL}, {0x5F7A22C3L, 0xAD4456D9L, 0x210719D2L, 0x667DDFDBL, 0x5F7A22C3L, 1L, (-2L), 1L, 0x5F7A22C3L, 0x667DDFDBL}};
                int l_659[5][8] = {{0L, 1L, 0x115728AAL, 1L, 0L, 1L, 0x115728AAL, 1L}, {0L, 1L, 0x115728AAL, 1L, 0L, 1L, 0x115728AAL, 1L}, {0L, 1L, 0x115728AAL, 1L, 0L, 1L, 0x115728AAL, 1L}, {0L, 1L, 0x115728AAL, 1L, 0L, 1L, 0x115728AAL, 1L}, {0L, 1L, 0x115728AAL, 1L, 0L, 1L, 0x115728AAL, 1L}};
                unsigned l_661 = 4UL;
                int i, j;
                if (g_631)
                {
                    l_632 = (-9L);
                }
                else
                {
                    short l_634 = 0x5808L;
                    int l_637 = (-9L);
                    int l_638 = 0xAC00481EL;
                    int l_640 = 1L;
                    int l_650 = (-6L);
                    int l_654 = (-7L);
                    int l_656 = 0x56C80894L;
                    int l_657 = 1L;
                    int l_658 = (-3L);
                    int l_660 = 0xABF4CADDL;
                    int l_669 = 0L;
                    for (p_50 = 0; (p_50 <= 2); p_50 += 1)
                    {
                        int l_633 = 1L;
                        int l_635 = (-1L);
                        int l_636 = 0x68BB09E1L;
                        int l_641 = 1L;
                        int l_642 = 0L;
                        int l_646 = 0x6FF4F698L;
                        int l_647 = (-1L);
                        int i;
                        (*g_269) = &l_630;
                        l_661++;
                    }
                    ++l_670;
                }
                return l_632;
            }
            if (p_50)
            {
                int **l_697[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_697[i] = (void*)0;
                (**g_268) = (void*)0;
                for (l_644 = 0; (l_644 < (-20)); l_644 = safe_sub_func_int8_t_s_s(l_644, 8))
                {
                    int l_688 = (-5L);
                    for (l_665 = 20; (l_665 > 13); l_665--)
                    {
                        int l_687 = 0L;
                        l_629 = l_687;
                        if (l_688)
                            break;
                        (*g_269) = &l_688;
                    }
                }
                g_66[1] = p_51;
                if ((safe_add_func_int32_t_s_s(l_612[2][2][0], p_50)))
                {
                    int l_693 = (-9L);
                    unsigned char **l_714 = &g_575;
                    unsigned char ***l_715 = &l_714;
                    for (l_651 = 2; (l_651 >= 0); l_651 -= 1)
                    {
                        int i;
                        (*g_269) = &g_66[l_651];
                    }
                    l_600 = (g_66[2] = p_50);
                    for (g_85 = 2; (g_85 >= 31); ++g_85)
                    {
                        int ***l_696 = &l_587[6];
                        l_693 &= (p_50 & (*g_113));
                        g_71 = (safe_mod_func_uint32_t_u_u((g_712 = ((*l_590) = ((((((*l_696) = ((*g_268) = (*g_268))) == l_697[1]) | l_649) ^ ((*g_575) < 0x89L)) ^ (safe_sub_func_uint8_t_u_u(((safe_lshift_func_uint16_t_u_u((~(l_629 ^ (safe_mod_func_uint16_t_u_u(((void*)0 != &l_665), (safe_rshift_func_int8_t_s_u((safe_rshift_func_int16_t_s_s((((safe_sub_func_int32_t_s_s((safe_sub_func_uint8_t_u_u(((g_268 == g_268) == (-1L)), 252UL)), 0xC8AA4D7EL)) >= p_51) > (**g_285)), (*g_286))), (*g_575))))))), 15)) != 0xD0B6L), p_50))))), p_50));
                        g_66[1] |= (p_50 | p_51);
                    }
                    if ((l_713 != ((*l_715) = l_714)))
                    {
                        if (p_51)
                            break;
                    }
                    else
                    {
                        l_598[4] |= ((safe_rshift_func_uint8_t_u_u(((*g_575) ^= l_665), (((p_50 & (g_71 = p_50)) & (**g_282)) == p_51))) & ((*l_590) = 0x230A62F0L));
                        if (p_51)
                            continue;
                        (*g_269) = &l_598[4];
                    }
                }
                else
                {
                    unsigned short *l_732 = &l_670;
                    int l_733 = 0xC0C6656DL;
                    unsigned l_758 = 0UL;
                    int l_765 = 0xC2014C16L;
                    if ((l_598[0] = ((p_50 ^ ((safe_rshift_func_uint8_t_u_u(p_51, l_595)) > p_50)) > (**g_282))))
                    {
                        unsigned short l_734 = 0xEAB6L;
                        int l_735 = (-1L);
                        int l_736[9];
                        unsigned short l_737 = 9UL;
                        unsigned *l_751 = &l_595;
                        int i;
                        for (i = 0; i < 9; i++)
                            l_736[i] = 0x77989B8FL;
                        l_644 = p_51;
                        l_737--;
                        l_736[4] &= (((**g_282) & (safe_mod_func_int32_t_s_s((safe_unary_minus_func_uint16_t_u(p_50)), ((*l_590) = g_66[0])))) > (((safe_sub_func_uint16_t_u_u(((void*)0 != l_745), (safe_sub_func_uint16_t_u_u(((0xB640B251L <= ((*l_751) |= (safe_unary_minus_func_uint8_t_u(p_51)))) >= ((safe_lshift_func_uint16_t_u_u((safe_add_func_uint8_t_u_u(((safe_mod_func_uint16_t_u_u((*g_113), (*g_113))) != 4294967290UL), (*g_575))), 10)) >= (*g_286))), (*g_286))))) > l_665) == 7UL));
                    }
                    else
                    {
                        short l_761 = 0x1053L;
                        char l_764 = 0x89L;
                        (*g_269) = &l_629;
                        --l_758;
                        (*g_70) |= l_761;
                        l_764 = ((*g_286) <= (*g_113));
                    }
                    l_765 = (l_733 = p_50);
                    for (l_600 = 0; (l_600 > (-22)); l_600 = safe_sub_func_int8_t_s_s(l_600, 1))
                    {
                        unsigned l_768 = 0xA5DCD60CL;
                        short ***l_770 = &g_285;
                        l_768 = 0L;
                        (*l_770) = l_769;
                        if (p_50)
                            continue;
                    }
                    for (g_631 = 0; (g_631 > (-12)); g_631 = safe_sub_func_int16_t_s_s(g_631, 3))
                    {
                        unsigned char *l_778 = (void*)0;
                        unsigned char *l_779 = &g_85;
                        l_629 = ((safe_lshift_func_uint16_t_u_s((((void*)0 != (*g_285)) > ((-10L) > ((void*)0 == &g_575))), (safe_mod_func_int8_t_s_s(g_777, ((*g_575) = ((*l_779) ^= (*g_575))))))) != p_50);
                        return l_664;
                    }
                }
            }
            else
            {
                return g_249[2];
            }
            for (l_644 = 0; (l_644 <= 1); l_644 += 1)
            {
                char l_780 = (-7L);
                int l_781 = 0L;
                int l_782 = 9L;
                if (l_780)
                    break;
                ++l_783;
                l_598[4] |= p_51;
            }
        }
        for (l_595 = 0; (l_595 != 27); l_595++)
        {
            unsigned char **l_790 = &g_575;
            int l_796 = (-8L);
            int l_816 = (-1L);
            int l_817 = 5L;
            int l_818 = 0xC30B3575L;
            int l_819 = 0xC9E797C9L;
            unsigned l_820[7][9] = {{4294967295UL, 0xCD83C372L, 1UL, 0x404F719AL, 0xCD83C372L, 1UL, 0xCD83C372L, 0x404F719AL, 1UL}, {4294967295UL, 0xCD83C372L, 1UL, 0x404F719AL, 0xCD83C372L, 1UL, 0xCD83C372L, 0x404F719AL, 1UL}, {4294967295UL, 0xCD83C372L, 1UL, 0x404F719AL, 0xCD83C372L, 1UL, 0xCD83C372L, 0x404F719AL, 1UL}, {4294967295UL, 0xCD83C372L, 1UL, 0x404F719AL, 0xCD83C372L, 1UL, 0xCD83C372L, 0x404F719AL, 1UL}, {4294967295UL, 0xCD83C372L, 1UL, 0x404F719AL, 0xCD83C372L, 1UL, 0xCD83C372L, 0x404F719AL, 1UL}, {4294967295UL, 0xCD83C372L, 1UL, 0x404F719AL, 0xCD83C372L, 1UL, 0xCD83C372L, 0x404F719AL, 1UL}, {4294967295UL, 0xCD83C372L, 1UL, 0x404F719AL, 0xCD83C372L, 1UL, 0xCD83C372L, 0x404F719AL, 1UL}};
            int l_824[9][9] = {{0x0C2711A3L, 0x0C2711A3L, (-3L), 0x0C2711A3L, 0x0C2711A3L, (-3L), 0x0C2711A3L, 0x0C2711A3L, (-3L)}, {0x0C2711A3L, 0x0C2711A3L, (-3L), 0x0C2711A3L, 0x0C2711A3L, (-3L), 0x0C2711A3L, 0x0C2711A3L, (-3L)}, {0x0C2711A3L, 0x0C2711A3L, (-3L), 0x0C2711A3L, 0x0C2711A3L, (-3L), 0x0C2711A3L, 0x0C2711A3L, (-3L)}, {0x0C2711A3L, 0x0C2711A3L, (-3L), 0x0C2711A3L, 0x0C2711A3L, (-3L), 0x0C2711A3L, 0x0C2711A3L, (-3L)}, {0x0C2711A3L, 0x0C2711A3L, (-3L), 0x0C2711A3L, 0x0C2711A3L, (-3L), 0x0C2711A3L, 0x0C2711A3L, (-3L)}, {0x0C2711A3L, 0x0C2711A3L, (-3L), 0x0C2711A3L, 0x0C2711A3L, (-3L), 0x0C2711A3L, 0x0C2711A3L, (-3L)}, {0x0C2711A3L, 0x0C2711A3L, (-3L), 0x0C2711A3L, 0x0C2711A3L, (-3L), 0x0C2711A3L, 0x0C2711A3L, (-3L)}, {0x0C2711A3L, 0x0C2711A3L, (-3L), 0x0C2711A3L, 0x0C2711A3L, (-3L), 0x0C2711A3L, 0x0C2711A3L, (-3L)}, {0x0C2711A3L, 0x0C2711A3L, (-3L), 0x0C2711A3L, 0x0C2711A3L, (-3L), 0x0C2711A3L, 0x0C2711A3L, (-3L)}};
            int i, j;
            if ((safe_add_func_int16_t_s_s((l_790 != (void*)0), (*g_286))))
            {
                return p_51;
            }
            else
            {
                int l_791 = 0xEA2E09FBL;
                unsigned *l_797 = &g_798;
                unsigned l_799 = 0x0ED3CAD6L;
                unsigned *l_801[6] = {&g_249[6], &g_802, &g_249[6], &g_802, &g_249[6], &g_802};
                unsigned *l_807 = &g_808;
                int l_809 = 7L;
                int i;
                l_809 = (l_791 <= ((**g_285) | 8L));
            }
            for (p_50 = 0; (p_50 < 7); ++p_50)
            {
                unsigned short l_812 = 0UL;
                int l_815[1][5][1] = {{{(-10L)}, {(-10L)}, {(-10L)}, {(-10L)}, {(-10L)}}};
                short l_823 = 9L;
                int l_826 = 0xD0B50846L;
                short l_827 = 0xA318L;
                int i, j, k;
                --l_812;
                l_820[5][4]--;
                l_829--;
            }
        }
        g_66[2] &= p_51;
    }
    if (p_50)
    {
        unsigned char ***l_838[2][3][9] = {{{(void*)0, &l_745, &l_745, &l_745, &l_745, &l_745, (void*)0, &l_745, &l_745}, {(void*)0, &l_745, &l_745, &l_745, &l_745, &l_745, (void*)0, &l_745, &l_745}, {(void*)0, &l_745, &l_745, &l_745, &l_745, &l_745, (void*)0, &l_745, &l_745}}, {{(void*)0, &l_745, &l_745, &l_745, &l_745, &l_745, (void*)0, &l_745, &l_745}, {(void*)0, &l_745, &l_745, &l_745, &l_745, &l_745, (void*)0, &l_745, &l_745}, {(void*)0, &l_745, &l_745, &l_745, &l_745, &l_745, (void*)0, &l_745, &l_745}}};
        unsigned *l_840 = &g_802;
        unsigned *l_843 = &l_595;
        int l_848 = 0x7F47BB8DL;
        int l_849 = (-1L);
        int l_850 = 0x3806ED0CL;
        int i, j, k;
        l_850 ^= (safe_lshift_func_uint16_t_u_u(((safe_add_func_int32_t_s_s(((safe_rshift_func_uint8_t_u_u((((g_839[0][5][6] = (void*)0) == l_745) == (++(*l_840))), (((*l_843)--) && g_798))) == (safe_mod_func_int8_t_s_s((**g_282), (l_848 ^= (l_655 > (**g_282)))))), (((0xC2L && ((((**g_285) = (0x25L | p_51)) || l_849) >= g_95)) <= p_51) && l_849))) < p_50), 0));
        l_666 ^= l_651;
    }
    else
    {
        unsigned l_851 = 4294967290UL;
        int *l_855[9][1][4] = {{{&l_664, &l_828, &l_664, &l_828}}, {{&l_664, &l_828, &l_664, &l_828}}, {{&l_664, &l_828, &l_664, &l_828}}, {{&l_664, &l_828, &l_664, &l_828}}, {{&l_664, &l_828, &l_664, &l_828}}, {{&l_664, &l_828, &l_664, &l_828}}, {{&l_664, &l_828, &l_664, &l_828}}, {{&l_664, &l_828, &l_664, &l_828}}, {{&l_664, &l_828, &l_664, &l_828}}};
        int i, j, k;
        g_66[2] ^= (l_851 == (~(safe_add_func_int32_t_s_s((((*g_113) ^= (l_651 && l_829)) ^ (**g_285)), ((*g_283) >= p_51)))));
        return l_666;
    }
    return g_95;
}







static unsigned short func_52(unsigned p_53, unsigned p_54, int p_55, short p_56)
{
    unsigned char *l_571 = &g_572;
    unsigned char *l_574 = &g_572;
    unsigned char **l_573[7] = {(void*)0, &l_574, (void*)0, &l_574, (void*)0, &l_574, (void*)0};
    int l_582 = 0x275E06DAL;
    int *l_583[2];
    int i;
    for (i = 0; i < 2; i++)
        l_583[i] = &l_582;
    g_66[0] = ((func_59(p_55) <= (0x38FDL > (l_571 == (g_575 = &g_572)))) != (safe_mod_func_uint32_t_u_u((safe_sub_func_uint32_t_u_u((safe_sub_func_int8_t_s_s(p_56, p_54)), l_582)), p_56)));
    return p_53;
}







static char func_59(unsigned char p_60)
{
    int l_104 = (-1L);
    unsigned short *l_140 = &g_114;
    int l_150[10];
    unsigned char l_167 = 255UL;
    int l_218[10][9] = {{1L, 0x1387A817L, 0x2719FA18L, 3L, 0x28FB1941L, 0x70173F83L, 0x438BB68FL, 0x1387A817L, (-1L)}, {1L, 0x1387A817L, 0x2719FA18L, 3L, 0x28FB1941L, 0x70173F83L, 0x438BB68FL, 0x1387A817L, (-1L)}, {1L, 0x1387A817L, 0x2719FA18L, 3L, 0x28FB1941L, 0x70173F83L, 0x438BB68FL, 0x1387A817L, (-1L)}, {1L, 0x1387A817L, 0x2719FA18L, 3L, 0x28FB1941L, 0x70173F83L, 0x438BB68FL, 0x1387A817L, (-1L)}, {1L, 0x1387A817L, 0x2719FA18L, 3L, 0x28FB1941L, 0x70173F83L, 0x438BB68FL, 0x1387A817L, (-1L)}, {1L, 0x1387A817L, 0x2719FA18L, 3L, 0x28FB1941L, 0x70173F83L, 0x438BB68FL, 0x1387A817L, (-1L)}, {1L, 0x1387A817L, 0x2719FA18L, 3L, 0x28FB1941L, 0x70173F83L, 0x438BB68FL, 0x1387A817L, (-1L)}, {1L, 0x1387A817L, 0x2719FA18L, 3L, 0x28FB1941L, 0x70173F83L, 0x438BB68FL, 0x1387A817L, (-1L)}, {1L, 0x1387A817L, 0x2719FA18L, 3L, 0x28FB1941L, 0x70173F83L, 0x438BB68FL, 0x1387A817L, (-1L)}, {1L, 0x1387A817L, 0x2719FA18L, 3L, 0x28FB1941L, 0x70173F83L, 0x438BB68FL, 0x1387A817L, (-1L)}};
    short **l_289 = &g_286;
    int l_310 = 0xD9E2DF7FL;
    unsigned l_340 = 0x124FF22BL;
    char l_343 = 0x76L;
    int *l_359 = &g_66[2];
    unsigned short l_360 = 1UL;
    int ***l_487 = &g_269;
    char l_548 = (-1L);
    unsigned char l_557 = 255UL;
    int *l_569 = (void*)0;
    int *l_570 = &l_150[7];
    int i, j;
    for (i = 0; i < 10; i++)
        l_150[i] = 0x1B9A7350L;
    if (((safe_rshift_func_int16_t_s_u(p_60, 9)) < g_9[5][0]))
    {
        int *l_65 = &g_66[2];
        unsigned l_131 = 0x8E649E9AL;
        unsigned short *l_141 = &g_103[2][0];
        int l_166[10] = {0x0E8D41E4L, 0x2B020459L, 0x0E8D41E4L, 0x2B020459L, 0x0E8D41E4L, 0x2B020459L, 0x0E8D41E4L, 0x2B020459L, 0x0E8D41E4L, 0x2B020459L};
        unsigned short l_201 = 0x7395L;
        char *l_240[9][3] = {{&g_95, &g_95, &g_95}, {&g_95, &g_95, &g_95}, {&g_95, &g_95, &g_95}, {&g_95, &g_95, &g_95}, {&g_95, &g_95, &g_95}, {&g_95, &g_95, &g_95}, {&g_95, &g_95, &g_95}, {&g_95, &g_95, &g_95}, {&g_95, &g_95, &g_95}};
        short *l_241[5] = {&g_242, &g_242, &g_242, &g_242, &g_242};
        int ***l_270 = &g_269;
        int i, j;
        for (p_60 = 0; (p_60 >= 57); p_60 = safe_add_func_int16_t_s_s(p_60, 9))
        {
            int **l_67 = &l_65;
            int *l_69 = &g_66[2];
            int **l_68[1];
            int i;
            for (i = 0; i < 1; i++)
                l_68[i] = &l_69;
            g_70 = ((*l_67) = l_65);
            for (g_71 = 0; (g_71 <= 0); g_71 += 1)
            {
                int i;
                if ((*l_65))
                    break;
            }
        }
        l_65 = &g_66[0];
        if (((*g_70) &= p_60))
        {
            int *l_72[8] = {&g_66[2], &g_66[2], &g_71, &g_66[2], &g_66[2], &g_71, &g_66[2], &g_66[2]};
            unsigned *l_163 = (void*)0;
            unsigned *l_164 = &l_131;
            int i;
            l_65 = &g_66[2];
            g_70 = l_72[5];
            for (g_71 = (-22); (g_71 >= (-8)); g_71 = safe_add_func_int8_t_s_s(g_71, 4))
            {
                unsigned l_123[9][1][4] = {{{0x03EC6B4EL, 0x2DD2E1BDL, 8UL, 0xE6801B04L}}, {{0x03EC6B4EL, 0x2DD2E1BDL, 8UL, 0xE6801B04L}}, {{0x03EC6B4EL, 0x2DD2E1BDL, 8UL, 0xE6801B04L}}, {{0x03EC6B4EL, 0x2DD2E1BDL, 8UL, 0xE6801B04L}}, {{0x03EC6B4EL, 0x2DD2E1BDL, 8UL, 0xE6801B04L}}, {{0x03EC6B4EL, 0x2DD2E1BDL, 8UL, 0xE6801B04L}}, {{0x03EC6B4EL, 0x2DD2E1BDL, 8UL, 0xE6801B04L}}, {{0x03EC6B4EL, 0x2DD2E1BDL, 8UL, 0xE6801B04L}}, {{0x03EC6B4EL, 0x2DD2E1BDL, 8UL, 0xE6801B04L}}};
                int l_162 = 0x8C9B47AFL;
                int i, j, k;
                for (p_60 = 27; (p_60 != 4); p_60 = safe_sub_func_int16_t_s_s(p_60, 8))
                {
                    short *l_77 = &g_78;
                    int l_149[1][10] = {{0x85E6FA96L, 0x85E6FA96L, 5L, 0x85E6FA96L, 0x85E6FA96L, 5L, 0x85E6FA96L, 0x85E6FA96L, 5L, 0x85E6FA96L}};
                    unsigned char *l_155 = (void*)0;
                    unsigned char *l_156[2][8] = {{&g_85, &g_85, &g_85, &g_85, &g_85, &g_85, &g_85, &g_85}, {&g_85, &g_85, &g_85, &g_85, &g_85, &g_85, &g_85, &g_85}};
                    int i, j;
                    if ((1UL != ((*l_77) |= p_60)))
                    {
                        unsigned char *l_83 = (void*)0;
                        unsigned char *l_84 = &g_85;
                        char *l_94 = &g_95;
                        unsigned short *l_102[10][2][8] = {{{(void*)0, &g_103[2][0], (void*)0, &g_103[1][0], &g_103[1][0], &g_103[2][1], &g_103[2][0], &g_103[2][0]}, {(void*)0, &g_103[2][0], (void*)0, &g_103[1][0], &g_103[1][0], &g_103[2][1], &g_103[2][0], &g_103[2][0]}}, {{(void*)0, &g_103[2][0], (void*)0, &g_103[1][0], &g_103[1][0], &g_103[2][1], &g_103[2][0], &g_103[2][0]}, {(void*)0, &g_103[2][0], (void*)0, &g_103[1][0], &g_103[1][0], &g_103[2][1], &g_103[2][0], &g_103[2][0]}}, {{(void*)0, &g_103[2][0], (void*)0, &g_103[1][0], &g_103[1][0], &g_103[2][1], &g_103[2][0], &g_103[2][0]}, {(void*)0, &g_103[2][0], (void*)0, &g_103[1][0], &g_103[1][0], &g_103[2][1], &g_103[2][0], &g_103[2][0]}}, {{(void*)0, &g_103[2][0], (void*)0, &g_103[1][0], &g_103[1][0], &g_103[2][1], &g_103[2][0], &g_103[2][0]}, {(void*)0, &g_103[2][0], (void*)0, &g_103[1][0], &g_103[1][0], &g_103[2][1], &g_103[2][0], &g_103[2][0]}}, {{(void*)0, &g_103[2][0], (void*)0, &g_103[1][0], &g_103[1][0], &g_103[2][1], &g_103[2][0], &g_103[2][0]}, {(void*)0, &g_103[2][0], (void*)0, &g_103[1][0], &g_103[1][0], &g_103[2][1], &g_103[2][0], &g_103[2][0]}}, {{(void*)0, &g_103[2][0], (void*)0, &g_103[1][0], &g_103[1][0], &g_103[2][1], &g_103[2][0], &g_103[2][0]}, {(void*)0, &g_103[2][0], (void*)0, &g_103[1][0], &g_103[1][0], &g_103[2][1], &g_103[2][0], &g_103[2][0]}}, {{(void*)0, &g_103[2][0], (void*)0, &g_103[1][0], &g_103[1][0], &g_103[2][1], &g_103[2][0], &g_103[2][0]}, {(void*)0, &g_103[2][0], (void*)0, &g_103[1][0], &g_103[1][0], &g_103[2][1], &g_103[2][0], &g_103[2][0]}}, {{(void*)0, &g_103[2][0], (void*)0, &g_103[1][0], &g_103[1][0], &g_103[2][1], &g_103[2][0], &g_103[2][0]}, {(void*)0, &g_103[2][0], (void*)0, &g_103[1][0], &g_103[1][0], &g_103[2][1], &g_103[2][0], &g_103[2][0]}}, {{(void*)0, &g_103[2][0], (void*)0, &g_103[1][0], &g_103[1][0], &g_103[2][1], &g_103[2][0], &g_103[2][0]}, {(void*)0, &g_103[2][0], (void*)0, &g_103[1][0], &g_103[1][0], &g_103[2][1], &g_103[2][0], &g_103[2][0]}}, {{(void*)0, &g_103[2][0], (void*)0, &g_103[1][0], &g_103[1][0], &g_103[2][1], &g_103[2][0], &g_103[2][0]}, {(void*)0, &g_103[2][0], (void*)0, &g_103[1][0], &g_103[1][0], &g_103[2][1], &g_103[2][0], &g_103[2][0]}}};
                        int i, j, k;
                        (*l_65) = (*g_70);
                        g_117 &= (safe_rshift_func_uint8_t_u_u(((++(*l_84)) && (((((((safe_sub_func_int16_t_s_s((safe_div_func_int16_t_s_s(g_71, ((safe_lshift_func_uint8_t_u_s(g_78, 0)) || (((*l_94) = g_71) == ((safe_sub_func_int32_t_s_s(((0L != (safe_lshift_func_int16_t_s_u((safe_div_func_uint16_t_u_u(p_60, (g_103[2][0]--))), 2))) > (safe_rshift_func_int16_t_s_u((safe_div_func_int8_t_s_s(p_60, (safe_sub_func_int8_t_s_s((g_113 != &g_114), ((safe_lshift_func_uint8_t_u_s(0UL, 0)) && p_60))))), p_60))), 0UL)) && (*l_65)))))), p_60)) < (*l_65)) ^ p_60) & p_60) && (*l_65)) ^ p_60) < p_60)), g_66[0]));
                        if (p_60)
                            continue;
                    }
                    else
                    {
                        int l_122 = 0xBC0716CFL;
                        unsigned char *l_129 = &g_85;
                        char l_130[9][3] = {{0x8EL, 0x8EL, 2L}, {0x8EL, 0x8EL, 2L}, {0x8EL, 0x8EL, 2L}, {0x8EL, 0x8EL, 2L}, {0x8EL, 0x8EL, 2L}, {0x8EL, 0x8EL, 2L}, {0x8EL, 0x8EL, 2L}, {0x8EL, 0x8EL, 2L}, {0x8EL, 0x8EL, 2L}};
                        int l_148 = 0x26F4C769L;
                        int i, j;
                        (*l_65) = (safe_rshift_func_uint8_t_u_s(((safe_add_func_int16_t_s_s(((*l_77) = (l_122 >= l_123[2][0][2])), ((safe_div_func_int8_t_s_s(g_66[2], (safe_sub_func_int16_t_s_s((((((*l_129) &= (((safe_unary_minus_func_int32_t_s((-8L))) & 0x5878DFE8L) | (*g_70))) == ((l_122 >= ((l_123[2][0][2] != (g_9[1][0] & l_122)) || l_130[3][0])) ^ 0x6CBAL)) ^ (*l_65)) <= 1L), (-9L))))) < g_9[4][0]))) && l_131), 6));
                        (*l_65) = (safe_div_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s(((*l_129)++), 1)), (safe_lshift_func_uint8_t_u_s((g_66[2] == ((l_140 == l_141) >= (*g_113))), (g_78 & ((g_9[6][0] == ((+(l_149[0][9] = (safe_div_func_uint32_t_u_u((safe_div_func_int16_t_s_s(((void*)0 == &p_60), 0xAC02L)), l_148)))) == g_78)) >= p_60))))));
                        (*l_65) ^= l_123[2][0][2];
                        l_150[7] &= p_60;
                    }
                    for (g_117 = 0; (g_117 < 34); g_117++)
                    {
                        return p_60;
                    }
                    if ((safe_lshift_func_uint8_t_u_s((g_103[0][1] ^ (g_85 = 255UL)), 5)))
                    {
                        g_66[1] = 1L;
                    }
                    else
                    {
                        short l_159 = 1L;
                        l_149[0][9] |= (+(0x2FA0D639L < (safe_rshift_func_int8_t_s_s((l_159 ^ (p_60 >= ((*g_113) = p_60))), 4))));
                        if (p_60)
                            continue;
                        l_162 |= ((safe_add_func_uint32_t_u_u(0UL, g_103[2][0])) < g_66[2]);
                    }
                    return p_60;
                }
                if (p_60)
                    break;
            }
            (*l_65) ^= (l_150[1] &= (((p_60 || ((*l_164) = 0xB9AC8AADL)) & p_60) && p_60));
        }
        else
        {
            int *l_165[3];
            unsigned l_220 = 3UL;
            char *l_236 = &g_95;
            short *l_274 = &g_78;
            int i;
            for (i = 0; i < 3; i++)
                l_165[i] = (void*)0;
            --l_167;
            for (l_104 = 0; (l_104 > 16); l_104++)
            {
                unsigned char l_180 = 0x7BL;
                int l_181[4][5] = {{0L, (-5L), (-5L), (-1L), (-6L)}, {0L, (-5L), (-5L), (-1L), (-6L)}, {0L, (-5L), (-5L), (-1L), (-6L)}, {0L, (-5L), (-5L), (-1L), (-6L)}};
                unsigned *l_182 = &l_131;
                int **l_183 = &l_165[0];
                int i, j;
                (*l_65) = ((safe_sub_func_int16_t_s_s((*l_65), (((*l_140) = (*g_113)) != ((&l_65 != &l_165[2]) <= ((l_181[0][1] |= (safe_mod_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u((l_104 < p_60), l_180)), ((*l_141) = p_60)))) != ((*l_182) = p_60)))))) || p_60);
                (*l_183) = &l_150[5];
                return p_60;
            }
            for (g_117 = 0; (g_117 <= 54); ++g_117)
            {
                char l_188[3];
                int l_190 = (-1L);
                int l_191 = 0xF2121E25L;
                int l_192 = 0xA518F3EDL;
                int l_193 = 0x4115E00DL;
                int l_194 = 0x44B8B315L;
                int l_196 = (-1L);
                int l_198 = 6L;
                int **l_210 = (void*)0;
                int i;
                for (i = 0; i < 3; i++)
                    l_188[i] = (-8L);
                for (l_104 = 2; (l_104 >= 0); l_104 -= 1)
                {
                    int l_186 = 0x9EB336D3L;
                    char l_187 = (-1L);
                    int l_189 = 9L;
                    int l_195 = (-8L);
                    int l_197 = 8L;
                    int l_199 = 0x33E68E44L;
                    int l_200[9] = {0L, 0L, 0xF5BA5010L, 0L, 0L, 0xF5BA5010L, 0L, 0L, 0xF5BA5010L};
                    int i;
                    l_165[l_104] = l_165[l_104];
                    l_201++;
                }
                for (g_95 = 2; (g_95 <= (-13)); --g_95)
                {
                    int l_216 = 0x5227E044L;
                    int l_219 = 0x0A6FF864L;
                    if ((safe_div_func_int32_t_s_s(0x1E6F47C9L, (-3L))))
                    {
                        int **l_208 = &l_165[0];
                        int **l_209 = &l_65;
                        int ***l_211 = &l_209;
                        (*g_70) |= 0x6CA7198EL;
                        (*l_209) = ((*l_208) = &g_66[2]);
                        (*l_65) = (*l_65);
                        (*l_211) = l_210;
                    }
                    else
                    {
                        unsigned char *l_214 = &l_167;
                        int l_215 = 0L;
                        int l_217[5];
                        int i;
                        for (i = 0; i < 5; i++)
                            l_217[i] = 1L;
                        l_166[7] &= ((*l_65) = ((*l_65) & (safe_div_func_int8_t_s_s((((*l_214) &= p_60) != g_78), 0x7EL))));
                        if (p_60)
                            continue;
                        --l_220;
                    }
                    if ((*g_70))
                        break;
                }
                if ((*g_70))
                    continue;
            }
            for (l_104 = 1; (l_104 >= 0); l_104 -= 1)
            {
                unsigned l_245 = 1UL;
                int l_250[4][2];
                int i, j;
                for (i = 0; i < 4; i++)
                {
                    for (j = 0; j < 2; j++)
                        l_250[i][j] = 0xDE149198L;
                }
            }
        }
    }
    else
    {
        int *l_301 = (void*)0;
        short l_324[9][8] = {{0x75EFL, (-1L), 0xE660L, 0x9331L, (-1L), 0x333BL, (-1L), 0x9331L}, {0x75EFL, (-1L), 0xE660L, 0x9331L, (-1L), 0x333BL, (-1L), 0x9331L}, {0x75EFL, (-1L), 0xE660L, 0x9331L, (-1L), 0x333BL, (-1L), 0x9331L}, {0x75EFL, (-1L), 0xE660L, 0x9331L, (-1L), 0x333BL, (-1L), 0x9331L}, {0x75EFL, (-1L), 0xE660L, 0x9331L, (-1L), 0x333BL, (-1L), 0x9331L}, {0x75EFL, (-1L), 0xE660L, 0x9331L, (-1L), 0x333BL, (-1L), 0x9331L}, {0x75EFL, (-1L), 0xE660L, 0x9331L, (-1L), 0x333BL, (-1L), 0x9331L}, {0x75EFL, (-1L), 0xE660L, 0x9331L, (-1L), 0x333BL, (-1L), 0x9331L}, {0x75EFL, (-1L), 0xE660L, 0x9331L, (-1L), 0x333BL, (-1L), 0x9331L}};
        unsigned char l_325 = 250UL;
        int l_334 = 0L;
        int l_335 = 8L;
        int l_337 = 0x46B96777L;
        int l_346 = 0L;
        unsigned short l_373 = 1UL;
        char *l_397 = (void*)0;
        char *l_398 = &l_343;
        int *l_399[8] = {&l_150[4], &l_150[1], &l_150[4], &l_150[1], &l_150[4], &l_150[1], &l_150[4], &l_150[1]};
        int l_405 = 0xBD75908BL;
        int l_424 = 0xDD9E9FC1L;
        short l_435 = 0x09C9L;
        unsigned l_449 = 4294967291UL;
        unsigned l_554 = 4294967295UL;
        int i, j;
        if (((*l_289) != (void*)0))
        {
            unsigned *l_296 = (void*)0;
            int l_300 = 0x21FF38C2L;
            int l_330 = 0xE9826A32L;
            int l_332 = 0L;
            int l_333 = 0x46DEBED0L;
            int l_336 = 0xE44B9215L;
            char ***l_367[5] = {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0};
            unsigned char *l_390 = &g_85;
            int i;
            (**g_269) = ((**g_285) == ((*g_113) ^= ((!((**g_269) <= p_60)) || p_60)));
            (**g_269) = (*g_70);
            (***g_268) = p_60;
            if ((*g_70))
            {
                unsigned l_311 = 0xF52E79B3L;
                char *l_321 = &g_95;
                int l_338 = 0x46D76933L;
                int l_339 = 0L;
                unsigned l_364 = 0x94A0810EL;
                for (g_114 = 3; (g_114 <= 8); g_114 += 1)
                {
                    int *l_314 = &l_218[4][7];
                    int i;
                    for (l_167 = 0; (l_167 <= 2); l_167 += 1)
                    {
                        int i;
                        g_66[l_167] = ((*g_268) == (void*)0);
                        if (g_249[(l_167 + 4)])
                            continue;
                        return (**g_282);
                    }
                }
                if ((p_60 ^ (l_140 != &g_103[2][0])))
                {
                    int *l_322 = &l_150[6];
                    unsigned *l_323 = &g_249[7];
                    int l_331[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_331[i] = 1L;
                    l_310 ^= ((safe_add_func_uint16_t_u_u((safe_div_func_int16_t_s_s((g_117 == (safe_add_func_uint16_t_u_u((l_321 == (void*)0), (((**g_282) < (((((*l_323) = (((*l_322) &= (*g_70)) < (l_167 >= ((((void*)0 == (*g_285)) & (*g_286)) ^ p_60)))) == p_60) > l_324[8][7]) == l_325)) & l_311)))), p_60)), p_60)) <= 0x628FL);
                    for (l_311 = (-6); (l_311 > 40); l_311 = safe_add_func_uint8_t_u_u(l_311, 7))
                    {
                        int *l_328 = &l_310;
                        int *l_329[5] = {&g_66[2], &g_71, &g_66[2], &g_71, &g_66[2]};
                        int i;
                        ++l_340;
                    }
                }
                else
                {
                    unsigned char l_347 = 0x52L;
                    int *l_363[8][7][4] = {{{&l_300, &l_218[4][7], &l_337, &l_330}, {&l_300, &l_218[4][7], &l_337, &l_330}, {&l_300, &l_218[4][7], &l_337, &l_330}, {&l_300, &l_218[4][7], &l_337, &l_330}, {&l_300, &l_218[4][7], &l_337, &l_330}, {&l_300, &l_218[4][7], &l_337, &l_330}, {&l_300, &l_218[4][7], &l_337, &l_330}}, {{&l_300, &l_218[4][7], &l_337, &l_330}, {&l_300, &l_218[4][7], &l_337, &l_330}, {&l_300, &l_218[4][7], &l_337, &l_330}, {&l_300, &l_218[4][7], &l_337, &l_330}, {&l_300, &l_218[4][7], &l_337, &l_330}, {&l_300, &l_218[4][7], &l_337, &l_330}, {&l_300, &l_218[4][7], &l_337, &l_330}}, {{&l_300, &l_218[4][7], &l_337, &l_330}, {&l_300, &l_218[4][7], &l_337, &l_330}, {&l_300, &l_218[4][7], &l_337, &l_330}, {&l_300, &l_218[4][7], &l_337, &l_330}, {&l_300, &l_218[4][7], &l_337, &l_330}, {&l_300, &l_218[4][7], &l_337, &l_330}, {&l_300, &l_218[4][7], &l_337, &l_330}}, {{&l_300, &l_218[4][7], &l_337, &l_330}, {&l_300, &l_218[4][7], &l_337, &l_330}, {&l_300, &l_218[4][7], &l_337, &l_330}, {&l_300, &l_218[4][7], &l_337, &l_330}, {&l_300, &l_218[4][7], &l_337, &l_330}, {&l_300, &l_218[4][7], &l_337, &l_330}, {&l_300, &l_218[4][7], &l_337, &l_330}}, {{&l_300, &l_218[4][7], &l_337, &l_330}, {&l_300, &l_218[4][7], &l_337, &l_330}, {&l_300, &l_218[4][7], &l_337, &l_330}, {&l_300, &l_218[4][7], &l_337, &l_330}, {&l_300, &l_218[4][7], &l_337, &l_330}, {&l_300, &l_218[4][7], &l_337, &l_330}, {&l_300, &l_218[4][7], &l_337, &l_330}}, {{&l_300, &l_218[4][7], &l_337, &l_330}, {&l_300, &l_218[4][7], &l_337, &l_330}, {&l_300, &l_218[4][7], &l_337, &l_330}, {&l_300, &l_218[4][7], &l_337, &l_330}, {&l_300, &l_218[4][7], &l_337, &l_330}, {&l_300, &l_218[4][7], &l_337, &l_330}, {&l_300, &l_218[4][7], &l_337, &l_330}}, {{&l_300, &l_218[4][7], &l_337, &l_330}, {&l_300, &l_218[4][7], &l_337, &l_330}, {&l_300, &l_218[4][7], &l_337, &l_330}, {&l_300, &l_218[4][7], &l_337, &l_330}, {&l_300, &l_218[4][7], &l_337, &l_330}, {&l_300, &l_218[4][7], &l_337, &l_330}, {&l_300, &l_218[4][7], &l_337, &l_330}}, {{&l_300, &l_218[4][7], &l_337, &l_330}, {&l_300, &l_218[4][7], &l_337, &l_330}, {&l_300, &l_218[4][7], &l_337, &l_330}, {&l_300, &l_218[4][7], &l_337, &l_330}, {&l_300, &l_218[4][7], &l_337, &l_330}, {&l_300, &l_218[4][7], &l_337, &l_330}, {&l_300, &l_218[4][7], &l_337, &l_330}}};
                    int i, j, k;
                    if (((*g_70) &= ((**g_268) != (void*)0)))
                    {
                        int *l_344 = &l_330;
                        int *l_345[5][1][10] = {{{&l_337, &l_310, &l_337, &l_337, &l_310, &l_337, &l_310, &l_337, &l_337, &l_310}}, {{&l_337, &l_310, &l_337, &l_337, &l_310, &l_337, &l_310, &l_337, &l_337, &l_310}}, {{&l_337, &l_310, &l_337, &l_337, &l_310, &l_337, &l_310, &l_337, &l_337, &l_310}}, {{&l_337, &l_310, &l_337, &l_337, &l_310, &l_337, &l_310, &l_337, &l_337, &l_310}}, {{&l_337, &l_310, &l_337, &l_337, &l_310, &l_337, &l_310, &l_337, &l_337, &l_310}}};
                        unsigned *l_352 = (void*)0;
                        unsigned *l_353 = &g_249[3];
                        unsigned char *l_354 = &g_85;
                        char **l_357 = &g_283;
                        int i, j, k;
                        ++l_347;
                        (*g_70) = (safe_add_func_uint32_t_u_u((3UL | (((*l_353) = (p_60 <= (!((g_9[0][0] > (!(*g_283))) && l_338)))) && (((*l_354) |= g_114) && (safe_add_func_uint8_t_u_u((p_60 & (**g_285)), ((((((((l_357 = &g_283) != &g_283) >= g_117) <= (-7L)) | 1UL) & p_60) | (*g_286)) >= 4L)))))), p_60));
                    }
                    else
                    {
                        int **l_358[8];
                        int i;
                        for (i = 0; i < 8; i++)
                            l_358[i] = &l_301;
                        l_359 = ((*g_269) = (**g_268));
                        ++l_360;
                        (**g_269) = (*l_359);
                        (**g_269) = 0x73D424FFL;
                    }
                    --l_364;
                }
            }
            else
            {
                int *l_368 = &l_310;
                if ((l_367[0] != (void*)0))
                {
                    (*g_269) = l_368;
                    for (g_242 = (-15); (g_242 != 2); g_242++)
                    {
                        char l_371[8] = {0x74L, 0x58L, 0x74L, 0x58L, 0x74L, 0x58L, 0x74L, 0x58L};
                        int i;
                        (*g_269) = &l_333;
                        (**g_268) = (*g_269);
                        return l_371[1];
                    }
                }
                else
                {
                    short l_372 = 8L;
                    int l_381[2][6][4] = {{{0L, 0xDDE00927L, 0x89CEA372L, 0xDDE00927L}, {0L, 0xDDE00927L, 0x89CEA372L, 0xDDE00927L}, {0L, 0xDDE00927L, 0x89CEA372L, 0xDDE00927L}, {0L, 0xDDE00927L, 0x89CEA372L, 0xDDE00927L}, {0L, 0xDDE00927L, 0x89CEA372L, 0xDDE00927L}, {0L, 0xDDE00927L, 0x89CEA372L, 0xDDE00927L}}, {{0L, 0xDDE00927L, 0x89CEA372L, 0xDDE00927L}, {0L, 0xDDE00927L, 0x89CEA372L, 0xDDE00927L}, {0L, 0xDDE00927L, 0x89CEA372L, 0xDDE00927L}, {0L, 0xDDE00927L, 0x89CEA372L, 0xDDE00927L}, {0L, 0xDDE00927L, 0x89CEA372L, 0xDDE00927L}, {0L, 0xDDE00927L, 0x89CEA372L, 0xDDE00927L}}};
                    int i, j, k;
                    l_373--;
                    for (l_372 = 0; (l_372 >= 15); l_372++)
                    {
                        unsigned char *l_378 = &l_167;
                        unsigned l_388 = 0xFDCD9137L;
                        int *l_389 = &l_150[5];
                        (**g_269) = (p_60 && (((((p_60 == (-4L)) >= 0xD3L) < ((*l_368) == ((l_381[1][1][0] = ((*l_378)++)) >= (*l_359)))) & (safe_div_func_int8_t_s_s((((~(p_60 && (!(++(*l_140))))) ^ ((((safe_lshift_func_int16_t_s_s(p_60, (&g_269 == (void*)0))) < (-1L)) <= l_372) | l_388)) < 0x45DEBCD6L), p_60))) != 0x9444L));
                        (**g_268) = l_389;
                        (**g_268) = &l_332;
                        (*l_359) = (!(&p_60 != l_390));
                    }
                }
                (**g_269) = ((void*)0 == &g_117);
                if ((*l_359))
                {
                    unsigned short l_391 = 4UL;
                    return l_391;
                }
                else
                {
                    return p_60;
                }
            }
        }
        else
        {
            unsigned char l_392 = 0x00L;
            (***g_268) &= ((**g_285) && ((*g_113) ^ l_392));
        }
        if (((safe_add_func_int32_t_s_s(((0x7EB5L ^ (safe_rshift_func_int8_t_s_s(((*g_283) | g_103[1][0]), ((*l_398) = ((**g_269) ^ (*l_359)))))) < p_60), (g_71 = (-1L)))) >= ((*g_283) & (safe_add_func_uint16_t_u_u((((*g_286) == (*g_113)) | p_60), (*g_113))))))
        {
            int l_418 = 0xFD102C89L;
            int l_425 = 0xF6E0CDCBL;
            int l_426 = 0L;
            int l_427 = (-3L);
            int l_428 = 0L;
            int l_429[3];
            unsigned l_432[9][4][7] = {{{4294967295UL, 0x4D1A898FL, 1UL, 0x55D3F1F1L, 4294967295UL, 0x1D07DF94L, 0x26437566L}, {4294967295UL, 0x4D1A898FL, 1UL, 0x55D3F1F1L, 4294967295UL, 0x1D07DF94L, 0x26437566L}, {4294967295UL, 0x4D1A898FL, 1UL, 0x55D3F1F1L, 4294967295UL, 0x1D07DF94L, 0x26437566L}, {4294967295UL, 0x4D1A898FL, 1UL, 0x55D3F1F1L, 4294967295UL, 0x1D07DF94L, 0x26437566L}}, {{4294967295UL, 0x4D1A898FL, 1UL, 0x55D3F1F1L, 4294967295UL, 0x1D07DF94L, 0x26437566L}, {4294967295UL, 0x4D1A898FL, 1UL, 0x55D3F1F1L, 4294967295UL, 0x1D07DF94L, 0x26437566L}, {4294967295UL, 0x4D1A898FL, 1UL, 0x55D3F1F1L, 4294967295UL, 0x1D07DF94L, 0x26437566L}, {4294967295UL, 0x4D1A898FL, 1UL, 0x55D3F1F1L, 4294967295UL, 0x1D07DF94L, 0x26437566L}}, {{4294967295UL, 0x4D1A898FL, 1UL, 0x55D3F1F1L, 4294967295UL, 0x1D07DF94L, 0x26437566L}, {4294967295UL, 0x4D1A898FL, 1UL, 0x55D3F1F1L, 4294967295UL, 0x1D07DF94L, 0x26437566L}, {4294967295UL, 0x4D1A898FL, 1UL, 0x55D3F1F1L, 4294967295UL, 0x1D07DF94L, 0x26437566L}, {4294967295UL, 0x4D1A898FL, 1UL, 0x55D3F1F1L, 4294967295UL, 0x1D07DF94L, 0x26437566L}}, {{4294967295UL, 0x4D1A898FL, 1UL, 0x55D3F1F1L, 4294967295UL, 0x1D07DF94L, 0x26437566L}, {4294967295UL, 0x4D1A898FL, 1UL, 0x55D3F1F1L, 4294967295UL, 0x1D07DF94L, 0x26437566L}, {4294967295UL, 0x4D1A898FL, 1UL, 0x55D3F1F1L, 4294967295UL, 0x1D07DF94L, 0x26437566L}, {4294967295UL, 0x4D1A898FL, 1UL, 0x55D3F1F1L, 4294967295UL, 0x1D07DF94L, 0x26437566L}}, {{4294967295UL, 0x4D1A898FL, 1UL, 0x55D3F1F1L, 4294967295UL, 0x1D07DF94L, 0x26437566L}, {4294967295UL, 0x4D1A898FL, 1UL, 0x55D3F1F1L, 4294967295UL, 0x1D07DF94L, 0x26437566L}, {4294967295UL, 0x4D1A898FL, 1UL, 0x55D3F1F1L, 4294967295UL, 0x1D07DF94L, 0x26437566L}, {4294967295UL, 0x4D1A898FL, 1UL, 0x55D3F1F1L, 4294967295UL, 0x1D07DF94L, 0x26437566L}}, {{4294967295UL, 0x4D1A898FL, 1UL, 0x55D3F1F1L, 4294967295UL, 0x1D07DF94L, 0x26437566L}, {4294967295UL, 0x4D1A898FL, 1UL, 0x55D3F1F1L, 4294967295UL, 0x1D07DF94L, 0x26437566L}, {4294967295UL, 0x4D1A898FL, 1UL, 0x55D3F1F1L, 4294967295UL, 0x1D07DF94L, 0x26437566L}, {4294967295UL, 0x4D1A898FL, 1UL, 0x55D3F1F1L, 4294967295UL, 0x1D07DF94L, 0x26437566L}}, {{4294967295UL, 0x4D1A898FL, 1UL, 0x55D3F1F1L, 4294967295UL, 0x1D07DF94L, 0x26437566L}, {4294967295UL, 0x4D1A898FL, 1UL, 0x55D3F1F1L, 4294967295UL, 0x1D07DF94L, 0x26437566L}, {4294967295UL, 0x4D1A898FL, 1UL, 0x55D3F1F1L, 4294967295UL, 0x1D07DF94L, 0x26437566L}, {4294967295UL, 0x4D1A898FL, 1UL, 0x55D3F1F1L, 4294967295UL, 0x1D07DF94L, 0x26437566L}}, {{4294967295UL, 0x4D1A898FL, 1UL, 0x55D3F1F1L, 4294967295UL, 0x1D07DF94L, 0x26437566L}, {4294967295UL, 0x4D1A898FL, 1UL, 0x55D3F1F1L, 4294967295UL, 0x1D07DF94L, 0x26437566L}, {4294967295UL, 0x4D1A898FL, 1UL, 0x55D3F1F1L, 4294967295UL, 0x1D07DF94L, 0x26437566L}, {4294967295UL, 0x4D1A898FL, 1UL, 0x55D3F1F1L, 4294967295UL, 0x1D07DF94L, 0x26437566L}}, {{4294967295UL, 0x4D1A898FL, 1UL, 0x55D3F1F1L, 4294967295UL, 0x1D07DF94L, 0x26437566L}, {4294967295UL, 0x4D1A898FL, 1UL, 0x55D3F1F1L, 4294967295UL, 0x1D07DF94L, 0x26437566L}, {4294967295UL, 0x4D1A898FL, 1UL, 0x55D3F1F1L, 4294967295UL, 0x1D07DF94L, 0x26437566L}, {4294967295UL, 0x4D1A898FL, 1UL, 0x55D3F1F1L, 4294967295UL, 0x1D07DF94L, 0x26437566L}}};
            int l_444 = 7L;
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_429[i] = 0xF57F61D5L;
            for (p_60 = (-19); (p_60 >= 16); p_60++)
            {
                char l_404 = 0L;
                int l_408 = 0xD18BC3ACL;
                int l_416 = 2L;
                int l_417 = 0x6725D78AL;
                int l_431 = (-5L);
                int l_441 = 0x5AEB7DCFL;
                int l_442 = 0x2A5BDAD4L;
                int l_445 = 0xF6FA5A42L;
                int l_447 = 1L;
                int l_448[4];
                int i;
                for (i = 0; i < 4; i++)
                    l_448[i] = 0xB7FCD5A7L;
                l_404 ^= ((*l_359) = (*l_359));
                if ((l_405 | 0x7EL))
                {
                    unsigned char l_410 = 0xDFL;
                    int l_415 = (-10L);
                    int l_422 = 0xD0C87BEAL;
                    int l_423[6][2] = {{1L, 1L}, {1L, 1L}, {1L, 1L}, {1L, 1L}, {1L, 1L}, {1L, 1L}};
                    int l_430 = 0xF635C4C8L;
                    int i, j;
                    if ((safe_div_func_int32_t_s_s(1L, p_60)))
                    {
                        unsigned short l_409 = 0x07DCL;
                        l_408 = (p_60 != p_60);
                        (*g_70) &= (l_409 & 0x46L);
                        --l_410;
                        if (p_60)
                            break;
                    }
                    else
                    {
                        (**g_269) &= l_404;
                        return p_60;
                    }
                    for (l_404 = 5; (l_404 < 10); l_404++)
                    {
                        unsigned l_419[4][7] = {{0x3EEFF37AL, 0xAAF6DE81L, 0x2DCF4EA9L, 4294967291UL, 0xBEDB2E7EL, 4294967294UL, 0xBEDB2E7EL}, {0x3EEFF37AL, 0xAAF6DE81L, 0x2DCF4EA9L, 4294967291UL, 0xBEDB2E7EL, 4294967294UL, 0xBEDB2E7EL}, {0x3EEFF37AL, 0xAAF6DE81L, 0x2DCF4EA9L, 4294967291UL, 0xBEDB2E7EL, 4294967294UL, 0xBEDB2E7EL}, {0x3EEFF37AL, 0xAAF6DE81L, 0x2DCF4EA9L, 4294967291UL, 0xBEDB2E7EL, 4294967294UL, 0xBEDB2E7EL}};
                        int i, j;
                        l_359 = (**g_268);
                        l_150[5] ^= ((*g_70) = (*l_359));
                        l_419[3][3]--;
                    }
                    l_432[5][3][2]--;
                }
                else
                {
                    int l_437 = (-5L);
                    int l_438[10][3] = {{2L, 0x06DB59A0L, 2L}, {2L, 0x06DB59A0L, 2L}, {2L, 0x06DB59A0L, 2L}, {2L, 0x06DB59A0L, 2L}, {2L, 0x06DB59A0L, 2L}, {2L, 0x06DB59A0L, 2L}, {2L, 0x06DB59A0L, 2L}, {2L, 0x06DB59A0L, 2L}, {2L, 0x06DB59A0L, 2L}, {2L, 0x06DB59A0L, 2L}};
                    unsigned short l_454 = 9UL;
                    int i, j;
                    if (l_435)
                    {
                        int l_436 = 0x83B44181L;
                        int l_439 = 0x54E0DD61L;
                        int l_440 = 0L;
                        int l_443 = 0L;
                        int l_446[10][9] = {{0x5D418040L, 1L, 1L, 0xC8287A42L, 0x933D4CAEL, 0L, 7L, 0L, 0xCE16115AL}, {0x5D418040L, 1L, 1L, 0xC8287A42L, 0x933D4CAEL, 0L, 7L, 0L, 0xCE16115AL}, {0x5D418040L, 1L, 1L, 0xC8287A42L, 0x933D4CAEL, 0L, 7L, 0L, 0xCE16115AL}, {0x5D418040L, 1L, 1L, 0xC8287A42L, 0x933D4CAEL, 0L, 7L, 0L, 0xCE16115AL}, {0x5D418040L, 1L, 1L, 0xC8287A42L, 0x933D4CAEL, 0L, 7L, 0L, 0xCE16115AL}, {0x5D418040L, 1L, 1L, 0xC8287A42L, 0x933D4CAEL, 0L, 7L, 0L, 0xCE16115AL}, {0x5D418040L, 1L, 1L, 0xC8287A42L, 0x933D4CAEL, 0L, 7L, 0L, 0xCE16115AL}, {0x5D418040L, 1L, 1L, 0xC8287A42L, 0x933D4CAEL, 0L, 7L, 0L, 0xCE16115AL}, {0x5D418040L, 1L, 1L, 0xC8287A42L, 0x933D4CAEL, 0L, 7L, 0L, 0xCE16115AL}, {0x5D418040L, 1L, 1L, 0xC8287A42L, 0x933D4CAEL, 0L, 7L, 0L, 0xCE16115AL}};
                        int i, j;
                        l_449--;
                        (***g_268) |= p_60;
                    }
                    else
                    {
                        unsigned short l_452 = 65529UL;
                        int *l_453 = (void*)0;
                        l_452 = (**g_269);
                        (*g_269) = (*g_269);
                        l_453 = &l_405;
                        return p_60;
                    }
                    l_438[8][0] = (*g_70);
                    (*l_359) = (l_454 ^ (&l_289 == (void*)0));
                }
                (*g_70) &= p_60;
            }
            (*g_269) = (*g_269);
        }
        else
        {
            int *l_455 = (void*)0;
            int l_516[8];
            unsigned char l_544 = 0x1DL;
            int i;
            for (i = 0; i < 8; i++)
                l_516[i] = 4L;
            if (((**g_268) == l_455))
            {
                int *l_499 = &l_150[4];
                if ((((*l_140) = p_60) | (safe_add_func_uint16_t_u_u(p_60, 65535UL))))
                {
                    return p_60;
                }
                else
                {
                    unsigned l_466 = 1UL;
                    int ***l_498 = &g_269;
                    for (l_325 = 0; (l_325 < 29); ++l_325)
                    {
                        unsigned *l_474 = &g_249[2];
                        unsigned short *l_475 = &g_103[1][0];
                        unsigned char *l_476 = (void*)0;
                        int l_480[7][7][5] = {{{0xF19C642FL, 0x3ABCB84DL, 0x54D4107DL, 0x3ABCB84DL, 0xF19C642FL}, {0xF19C642FL, 0x3ABCB84DL, 0x54D4107DL, 0x3ABCB84DL, 0xF19C642FL}, {0xF19C642FL, 0x3ABCB84DL, 0x54D4107DL, 0x3ABCB84DL, 0xF19C642FL}, {0xF19C642FL, 0x3ABCB84DL, 0x54D4107DL, 0x3ABCB84DL, 0xF19C642FL}, {0xF19C642FL, 0x3ABCB84DL, 0x54D4107DL, 0x3ABCB84DL, 0xF19C642FL}, {0xF19C642FL, 0x3ABCB84DL, 0x54D4107DL, 0x3ABCB84DL, 0xF19C642FL}, {0xF19C642FL, 0x3ABCB84DL, 0x54D4107DL, 0x3ABCB84DL, 0xF19C642FL}}, {{0xF19C642FL, 0x3ABCB84DL, 0x54D4107DL, 0x3ABCB84DL, 0xF19C642FL}, {0xF19C642FL, 0x3ABCB84DL, 0x54D4107DL, 0x3ABCB84DL, 0xF19C642FL}, {0xF19C642FL, 0x3ABCB84DL, 0x54D4107DL, 0x3ABCB84DL, 0xF19C642FL}, {0xF19C642FL, 0x3ABCB84DL, 0x54D4107DL, 0x3ABCB84DL, 0xF19C642FL}, {0xF19C642FL, 0x3ABCB84DL, 0x54D4107DL, 0x3ABCB84DL, 0xF19C642FL}, {0xF19C642FL, 0x3ABCB84DL, 0x54D4107DL, 0x3ABCB84DL, 0xF19C642FL}, {0xF19C642FL, 0x3ABCB84DL, 0x54D4107DL, 0x3ABCB84DL, 0xF19C642FL}}, {{0xF19C642FL, 0x3ABCB84DL, 0x54D4107DL, 0x3ABCB84DL, 0xF19C642FL}, {0xF19C642FL, 0x3ABCB84DL, 0x54D4107DL, 0x3ABCB84DL, 0xF19C642FL}, {0xF19C642FL, 0x3ABCB84DL, 0x54D4107DL, 0x3ABCB84DL, 0xF19C642FL}, {0xF19C642FL, 0x3ABCB84DL, 0x54D4107DL, 0x3ABCB84DL, 0xF19C642FL}, {0xF19C642FL, 0x3ABCB84DL, 0x54D4107DL, 0x3ABCB84DL, 0xF19C642FL}, {0xF19C642FL, 0x3ABCB84DL, 0x54D4107DL, 0x3ABCB84DL, 0xF19C642FL}, {0xF19C642FL, 0x3ABCB84DL, 0x54D4107DL, 0x3ABCB84DL, 0xF19C642FL}}, {{0xF19C642FL, 0x3ABCB84DL, 0x54D4107DL, 0x3ABCB84DL, 0xF19C642FL}, {0xF19C642FL, 0x3ABCB84DL, 0x54D4107DL, 0x3ABCB84DL, 0xF19C642FL}, {0xF19C642FL, 0x3ABCB84DL, 0x54D4107DL, 0x3ABCB84DL, 0xF19C642FL}, {0xF19C642FL, 0x3ABCB84DL, 0x54D4107DL, 0x3ABCB84DL, 0xF19C642FL}, {0xF19C642FL, 0x3ABCB84DL, 0x54D4107DL, 0x3ABCB84DL, 0xF19C642FL}, {0xF19C642FL, 0x3ABCB84DL, 0x54D4107DL, 0x3ABCB84DL, 0xF19C642FL}, {0xF19C642FL, 0x3ABCB84DL, 0x54D4107DL, 0x3ABCB84DL, 0xF19C642FL}}, {{0xF19C642FL, 0x3ABCB84DL, 0x54D4107DL, 0x3ABCB84DL, 0xF19C642FL}, {0xF19C642FL, 0x3ABCB84DL, 0x54D4107DL, 0x3ABCB84DL, 0xF19C642FL}, {0xF19C642FL, 0x3ABCB84DL, 0x54D4107DL, 0x3ABCB84DL, 0xF19C642FL}, {0xF19C642FL, 0x3ABCB84DL, 0x54D4107DL, 0x3ABCB84DL, 0xF19C642FL}, {0xF19C642FL, 0x3ABCB84DL, 0x54D4107DL, 0x3ABCB84DL, 0xF19C642FL}, {0xF19C642FL, 0x3ABCB84DL, 0x54D4107DL, 0x3ABCB84DL, 0xF19C642FL}, {0xF19C642FL, 0x3ABCB84DL, 0x54D4107DL, 0x3ABCB84DL, 0xF19C642FL}}, {{0xF19C642FL, 0x3ABCB84DL, 0x54D4107DL, 0x3ABCB84DL, 0xF19C642FL}, {0xF19C642FL, 0x3ABCB84DL, 0x54D4107DL, 0x3ABCB84DL, 0xF19C642FL}, {0xF19C642FL, 0x3ABCB84DL, 0x54D4107DL, 0x3ABCB84DL, 0xF19C642FL}, {0xF19C642FL, 0x3ABCB84DL, 0x54D4107DL, 0x3ABCB84DL, 0xF19C642FL}, {0xF19C642FL, 0x3ABCB84DL, 0x54D4107DL, 0x3ABCB84DL, 0xF19C642FL}, {0xF19C642FL, 0x3ABCB84DL, 0x54D4107DL, 0x3ABCB84DL, 0xF19C642FL}, {0xF19C642FL, 0x3ABCB84DL, 0x54D4107DL, 0x3ABCB84DL, 0xF19C642FL}}, {{0xF19C642FL, 0x3ABCB84DL, 0x54D4107DL, 0x3ABCB84DL, 0xF19C642FL}, {0xF19C642FL, 0x3ABCB84DL, 0x54D4107DL, 0x3ABCB84DL, 0xF19C642FL}, {0xF19C642FL, 0x3ABCB84DL, 0x54D4107DL, 0x3ABCB84DL, 0xF19C642FL}, {0xF19C642FL, 0x3ABCB84DL, 0x54D4107DL, 0x3ABCB84DL, 0xF19C642FL}, {0xF19C642FL, 0x3ABCB84DL, 0x54D4107DL, 0x3ABCB84DL, 0xF19C642FL}, {0xF19C642FL, 0x3ABCB84DL, 0x54D4107DL, 0x3ABCB84DL, 0xF19C642FL}, {0xF19C642FL, 0x3ABCB84DL, 0x54D4107DL, 0x3ABCB84DL, 0xF19C642FL}}};
                        int i, j, k;
                        g_477 = (((safe_div_func_int8_t_s_s(p_60, (((safe_rshift_func_int8_t_s_s((safe_mod_func_int32_t_s_s(((*l_359) &= ((*g_113) > p_60)), g_242)), 1)) < 0UL) ^ (l_466 < (g_85 = (((*l_475) = (((safe_lshift_func_int8_t_s_u((*g_283), 2)) ^ p_60) || (safe_rshift_func_int8_t_s_s((safe_div_func_int32_t_s_s((safe_unary_minus_func_int16_t_s(((void*)0 == l_474))), l_466)), 7)))) >= 0x935EL)))))) | 0xAC169D53L) ^ 0x0361609DL);
                        (*g_70) &= (safe_div_func_uint8_t_u_u(247UL, 0x70L));
                        if ((**g_269))
                            continue;
                        (***g_268) ^= l_480[5][4][0];
                    }
                    (**g_269) |= ((p_60 != (*g_286)) < (0UL >= (p_60 < (*g_113))));
                    for (l_449 = 0; (l_449 <= 7); l_449 += 1)
                    {
                        unsigned l_483 = 0x6645BF39L;
                        int l_488 = 1L;
                        unsigned *l_495 = &l_466;
                        if (p_60)
                            break;
                        l_218[8][2] ^= (safe_add_func_int16_t_s_s(((l_483 == (&p_60 == g_484)) > (safe_rshift_func_int16_t_s_s((p_60 < (l_487 != (void*)0)), 12))), (((((*l_359) &= (((g_114 <= (l_488 <= (6UL <= p_60))) && l_483) ^ 1L)) & g_95) && p_60) && (-1L))));
                        g_71 ^= (p_60 >= (0x63L & (safe_add_func_int16_t_s_s((safe_mod_func_uint32_t_u_u(((safe_div_func_int8_t_s_s((((*l_495) |= g_477) || (safe_add_func_uint16_t_u_u(((((void*)0 != l_498) != (l_499 == (*g_269))) | (safe_rshift_func_int16_t_s_u(1L, (safe_sub_func_int8_t_s_s(((safe_add_func_uint32_t_u_u(((void*)0 == (*g_268)), 6UL)) < p_60), (***l_498)))))), p_60))), 1L)) ^ 4294967295UL), 0x298D78DCL)), (**g_285)))));
                        (**l_498) = (**g_268);
                    }
                    (*l_499) = (-9L);
                }
                return p_60;
            }
            else
            {
                unsigned l_506 = 0xDC7144C3L;
                l_506++;
                for (l_346 = 2; (l_346 >= 0); l_346 -= 1)
                {
                    int i;
                    return g_66[l_346];
                }
                g_71 |= (*g_70);
                (**g_268) = l_455;
            }
            if ((safe_lshift_func_uint16_t_u_s((*g_113), (**g_285))))
            {
                int l_517 = 0x2AD4C22CL;
                int l_519 = 1L;
                int l_521 = 0xE4B5C3B3L;
                int l_527 = (-2L);
                int l_528 = 0x1F345D00L;
                int l_529 = (-4L);
                int l_530 = 0x2BC16F3DL;
                int l_534[4][8][8] = {{{0L, (-9L), 0x233594D5L, 0x71F0A3A4L, 0L, 0x50B8F0FEL, 0xBC04C2CAL, (-6L)}, {0L, (-9L), 0x233594D5L, 0x71F0A3A4L, 0L, 0x50B8F0FEL, 0xBC04C2CAL, (-6L)}, {0L, (-9L), 0x233594D5L, 0x71F0A3A4L, 0L, 0x50B8F0FEL, 0xBC04C2CAL, (-6L)}, {0L, (-9L), 0x233594D5L, 0x71F0A3A4L, 0L, 0x50B8F0FEL, 0xBC04C2CAL, (-6L)}, {0L, (-9L), 0x233594D5L, 0x71F0A3A4L, 0L, 0x50B8F0FEL, 0xBC04C2CAL, (-6L)}, {0L, (-9L), 0x233594D5L, 0x71F0A3A4L, 0L, 0x50B8F0FEL, 0xBC04C2CAL, (-6L)}, {0L, (-9L), 0x233594D5L, 0x71F0A3A4L, 0L, 0x50B8F0FEL, 0xBC04C2CAL, (-6L)}, {0L, (-9L), 0x233594D5L, 0x71F0A3A4L, 0L, 0x50B8F0FEL, 0xBC04C2CAL, (-6L)}}, {{0L, (-9L), 0x233594D5L, 0x71F0A3A4L, 0L, 0x50B8F0FEL, 0xBC04C2CAL, (-6L)}, {0L, (-9L), 0x233594D5L, 0x71F0A3A4L, 0L, 0x50B8F0FEL, 0xBC04C2CAL, (-6L)}, {0L, (-9L), 0x233594D5L, 0x71F0A3A4L, 0L, 0x50B8F0FEL, 0xBC04C2CAL, (-6L)}, {0L, (-9L), 0x233594D5L, 0x71F0A3A4L, 0L, 0x50B8F0FEL, 0xBC04C2CAL, (-6L)}, {0L, (-9L), 0x233594D5L, 0x71F0A3A4L, 0L, 0x50B8F0FEL, 0xBC04C2CAL, (-6L)}, {0L, (-9L), 0x233594D5L, 0x71F0A3A4L, 0L, 0x50B8F0FEL, 0xBC04C2CAL, (-6L)}, {0L, (-9L), 0x233594D5L, 0x71F0A3A4L, 0L, 0x50B8F0FEL, 0xBC04C2CAL, (-6L)}, {0L, (-9L), 0x233594D5L, 0x71F0A3A4L, 0L, 0x50B8F0FEL, 0xBC04C2CAL, (-6L)}}, {{0L, (-9L), 0x233594D5L, 0x71F0A3A4L, 0L, 0x50B8F0FEL, 0xBC04C2CAL, (-6L)}, {0L, (-9L), 0x233594D5L, 0x71F0A3A4L, 0L, 0x50B8F0FEL, 0xBC04C2CAL, (-6L)}, {0L, (-9L), 0x233594D5L, 0x71F0A3A4L, 0L, 0x50B8F0FEL, 0xBC04C2CAL, (-6L)}, {0L, (-9L), 0x233594D5L, 0x71F0A3A4L, 0L, 0x50B8F0FEL, 0xBC04C2CAL, (-6L)}, {0L, (-9L), 0x233594D5L, 0x71F0A3A4L, 0L, 0x50B8F0FEL, 0xBC04C2CAL, (-6L)}, {0L, (-9L), 0x233594D5L, 0x71F0A3A4L, 0L, 0x50B8F0FEL, 0xBC04C2CAL, (-6L)}, {0L, (-9L), 0x233594D5L, 0x71F0A3A4L, 0L, 0x50B8F0FEL, 0xBC04C2CAL, (-6L)}, {0L, (-9L), 0x233594D5L, 0x71F0A3A4L, 0L, 0x50B8F0FEL, 0xBC04C2CAL, (-6L)}}, {{0L, (-9L), 0x233594D5L, 0x71F0A3A4L, 0L, 0x50B8F0FEL, 0xBC04C2CAL, (-6L)}, {0L, (-9L), 0x233594D5L, 0x71F0A3A4L, 0L, 0x50B8F0FEL, 0xBC04C2CAL, (-6L)}, {0L, (-9L), 0x233594D5L, 0x71F0A3A4L, 0L, 0x50B8F0FEL, 0xBC04C2CAL, (-6L)}, {0L, (-9L), 0x233594D5L, 0x71F0A3A4L, 0L, 0x50B8F0FEL, 0xBC04C2CAL, (-6L)}, {0L, (-9L), 0x233594D5L, 0x71F0A3A4L, 0L, 0x50B8F0FEL, 0xBC04C2CAL, (-6L)}, {0L, (-9L), 0x233594D5L, 0x71F0A3A4L, 0L, 0x50B8F0FEL, 0xBC04C2CAL, (-6L)}, {0L, (-9L), 0x233594D5L, 0x71F0A3A4L, 0L, 0x50B8F0FEL, 0xBC04C2CAL, (-6L)}, {0L, (-9L), 0x233594D5L, 0x71F0A3A4L, 0L, 0x50B8F0FEL, 0xBC04C2CAL, (-6L)}}};
                int i, j, k;
                for (g_95 = 0; g_95 < 8; g_95 += 1)
                {
                    l_399[g_95] = &l_218[4][7];
                }
                if ((0x19L < (**g_282)))
                {
                    int l_514 = 0x8DBB6529L;
                    int l_515 = 1L;
                    int l_520 = 0L;
                    int l_522 = 2L;
                    int l_523 = 0xA80C45D1L;
                    int l_526 = (-1L);
                    int l_531 = 0xBE9508D8L;
                    int l_532 = 1L;
                    int l_533 = 0x04EA0B4CL;
                    int l_535 = 0xDA74F73DL;
                    int l_538 = 0L;
                    int l_539 = (-1L);
                    int l_540[2][10] = {{(-1L), 1L, 0x33AEE470L, 0x33AEE470L, 1L, (-1L), 1L, 0x33AEE470L, 0x33AEE470L, 1L}, {(-1L), 1L, 0x33AEE470L, 0x33AEE470L, 1L, (-1L), 1L, 0x33AEE470L, 0x33AEE470L, 1L}};
                    unsigned char l_541[9];
                    int i, j;
                    for (i = 0; i < 9; i++)
                        l_541[i] = 0xD0L;
                    (*l_359) |= p_60;
                    for (l_373 = (-24); (l_373 <= 36); ++l_373)
                    {
                        int l_513 = 6L;
                        int l_518 = 0x5E38BBD9L;
                        int l_524 = (-1L);
                        int l_525 = (-1L);
                        int l_536 = 0x139A74CEL;
                        int l_537[6][7] = {{0x72C2459CL, 1L, 0x72C2459CL, 1L, 0x72C2459CL, 1L, 0x72C2459CL}, {0x72C2459CL, 1L, 0x72C2459CL, 1L, 0x72C2459CL, 1L, 0x72C2459CL}, {0x72C2459CL, 1L, 0x72C2459CL, 1L, 0x72C2459CL, 1L, 0x72C2459CL}, {0x72C2459CL, 1L, 0x72C2459CL, 1L, 0x72C2459CL, 1L, 0x72C2459CL}, {0x72C2459CL, 1L, 0x72C2459CL, 1L, 0x72C2459CL, 1L, 0x72C2459CL}, {0x72C2459CL, 1L, 0x72C2459CL, 1L, 0x72C2459CL, 1L, 0x72C2459CL}};
                        int i, j;
                        ++l_541[7];
                    }
                }
                else
                {
                    short l_547 = 0x3968L;
                    int l_549 = 0x31CA4117L;
                    int l_550 = 6L;
                    int l_551 = (-1L);
                    int l_552 = 0x50E06EF1L;
                    int l_553 = 0x2CBBFEC5L;
                    --l_544;
                    --l_554;
                }
                l_557 = 1L;
            }
            else
            {
                int *l_558 = &l_405;
                short ***l_561 = &l_289;
                int *l_562 = (void*)0;
                l_558 = ((**g_268) = (**g_268));
                (**l_487) = (**g_268);
                if ((1L ^ ((safe_mod_func_uint8_t_u_u(g_242, (p_60 & (((((*g_269) != &l_405) != p_60) ^ ((*l_398) &= (*g_283))) && p_60)))) && (&l_289 != l_561))))
                {
                    short l_566 = 0L;
                    int *l_567 = &g_66[2];
                    int **l_568 = &l_399[5];
                    if (p_60)
                    {
                        l_562 = ((*g_269) = (**g_268));
                    }
                    else
                    {
                        unsigned short l_565 = 0UL;
                        l_566 &= (safe_rshift_func_int16_t_s_u((**g_285), l_565));
                        (**g_268) = l_562;
                    }
                    (*l_568) = ((**g_268) = l_567);
                }
                else
                {
                    return p_60;
                }
            }
            return (**g_282);
        }
    }
    (*g_70) = (*l_359);
    (*l_570) = ((*g_70) = p_60);
    return p_60;
}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_9[i][j], "g_9[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_66[i], "g_66[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_71, "g_71", print_hash_value);
    transparent_crc(g_78, "g_78", print_hash_value);
    transparent_crc(g_85, "g_85", print_hash_value);
    transparent_crc(g_95, "g_95", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_103[i][j], "g_103[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_114, "g_114", print_hash_value);
    transparent_crc(g_117, "g_117", print_hash_value);
    transparent_crc(g_242, "g_242", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_249[i], "g_249[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_477, "g_477", print_hash_value);
    transparent_crc(g_572, "g_572", print_hash_value);
    transparent_crc(g_631, "g_631", print_hash_value);
    transparent_crc(g_712, "g_712", print_hash_value);
    transparent_crc(g_777, "g_777", print_hash_value);
    transparent_crc(g_798, "g_798", print_hash_value);
    transparent_crc(g_802, "g_802", print_hash_value);
    transparent_crc(g_808, "g_808", print_hash_value);
    transparent_crc(g_895, "g_895", print_hash_value);
    transparent_crc(g_945, "g_945", print_hash_value);
    transparent_crc(g_1335, "g_1335", print_hash_value);
    transparent_crc(g_1384, "g_1384", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
