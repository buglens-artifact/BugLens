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
   unsigned char f1;
   int f2;
   short f3;
};


static int g_3 = 0x69F4288AL;
static int *g_2 = &g_3;
static struct S0 g_19 = {0xCD9DL,0x54L,0x5732AA61L,1L};
static int g_42 = 0xB1C5ADF8L;
static int g_51 = 7L;
static int g_63[9][10][2] = {{{0xEC3D2506L,3L},{(-1L),(-2L)},{(-7L),0L},{0xD7E7D1C2L,0xB1310F07L},{0x1F62131AL,0xF04FECCDL},{0L,0L},{0xCD027BAEL,0L},{(-2L),0x5C3B3635L},{7L,(-3L)},{0x9275A805L,7L}},{{(-7L),0x1F62131AL},{(-7L),7L},{0x9275A805L,(-3L)},{7L,0x5C3B3635L},{(-2L),0L},{0xCD027BAEL,0L},{0L,0xF04FECCDL},{0x1F62131AL,0xB1310F07L},{0xD7E7D1C2L,0L},{(-7L),(-2L)}},{{(-1L),3L},{0xEC3D2506L,0x9ACCE304L},{0L,1L},{0L,0x9275A805L},{0x13A861D8L,(-1L)},{1L,0L},{3L,0x9ACCE304L},{0L,0x912742E7L},{0x3B720FAEL,(-3L)},{0x967AAC3BL,(-3L)}},{{0x3B720FAEL,0x912742E7L},{0L,0x9ACCE304L},{3L,0L},{1L,(-1L)},{0x13A861D8L,0x9275A805L},{0L,0x5C3B3635L},{0xD78DB584L,(-1L)},{(-2L),7L},{(-1L),0x361AE7D5L},{0x912742E7L,0xAB76A10BL}},{{0L,0L},{0x83D34546L,0xB1310F07L},{7L,7L},{(-1L),0xD78DB584L},{0x361AE7D5L,0x2630673EL},{0xD7E7D1C2L,0x967AAC3BL},{0x9ACCE304L,0xD7E7D1C2L},{0L,0x83D34546L},{0L,0xD7E7D1C2L},{0x9ACCE304L,0x967AAC3BL}},{{0xD7E7D1C2L,0x2630673EL},{0x361AE7D5L,0xD78DB584L},{(-1L),7L},{7L,0xB1310F07L},{0x83D34546L,0L},{0L,0xAB76A10BL},{0x912742E7L,0x361AE7D5L},{(-1L),7L},{(-2L),(-1L)},{0xD78DB584L,0x5C3B3635L}},{{0L,0x9275A805L},{0x13A861D8L,(-1L)},{1L,0L},{3L,0x9ACCE304L},{0L,0x912742E7L},{0x3B720FAEL,(-3L)},{0x967AAC3BL,(-3L)},{0x3B720FAEL,0x912742E7L},{0L,0x9ACCE304L},{3L,0L}},{{1L,0x1F62131AL},{0x3B720FAEL,0x9ACCE304L},{0xD78DB584L,0x2630673EL},{0x13A861D8L,0xF04FECCDL},{0x361AE7D5L,0xCD027BAEL},{0x1F62131AL,1L},{0x5F263070L,0L},{0xAB76A10BL,7L},{3L,0L},{0xD7E7D1C2L,0xD7E7D1C2L}},{{(-3L),0x13A861D8L},{1L,3L},{0L,(-7L)},{(-1L),0L},{0L,3L},{0L,0L},{(-1L),(-7L)},{0L,3L},{1L,0x13A861D8L},{(-3L),0xD7E7D1C2L}}};
static int ***g_66 = (void*)0;
static const int g_74 = 8L;
static int g_82 = (-2L);
static struct S0 g_84 = {65530UL,0x8CL,3L,4L};
static struct S0 g_86 = {65535UL,0xAEL,-7L,0x7E84L};
static int *g_88 = &g_84.f2;
static struct S0 *g_107 = &g_84;
static unsigned short g_140 = 8UL;
static short g_153[10] = {(-3L),(-3L),(-3L),(-3L),(-3L),(-3L),(-3L),(-3L),(-3L),(-3L)};
static unsigned g_177[2][6][9] = {{{0xE50017F8L,0UL,4294967295UL,7UL,4294967290UL,0x3783EF79L,4294967293UL,0x8DD83BD6L,0x97E8E832L},{3UL,0x8A5674EDL,6UL,4294967293UL,0x571BA37EL,0x3B6B2B96L,0x4FEFD13CL,0x38FAA3ACL,0UL},{3UL,0x069160ECL,0x816EFC97L,0x3B6B2B96L,3UL,3UL,0x3B6B2B96L,0x816EFC97L,0x069160ECL},{0xE50017F8L,0x8DD83BD6L,0x571BA37EL,9UL,0xEB32BFE3L,1UL,0x97E8E832L,4294967290UL,5UL},{0UL,0x3783EF79L,0x8A5674EDL,0xA7E2A24FL,0x01866F3FL,4294967295UL,5UL,1UL,0xEB32BFE3L},{1UL,0x8DD83BD6L,0x054A38BFL,0x816EFC97L,0x56E2F054L,0x571BA37EL,0x3C6001B9L,5UL,0x613806CFL}},{{1UL,0xCF8C1653L,0x97E8E832L,0UL,3UL,4294967295UL,0x4FEFD13CL,6UL,0x054A38BFL},{0x0B8F8A4DL,4294967295UL,0x97E8E832L,0x38FAA3ACL,0x01866F3FL,0x56E2F054L,0x56E2F054L,0x01866F3FL,0x38FAA3ACL},{0x054A38BFL,7UL,0x054A38BFL,0x01866F3FL,0x3783EF79L,4294967290UL,0xE50017F8L,0x91631D6AL,0x56E2F054L},{0x01866F3FL,0x17470866L,4294967295UL,9UL,0x054A38BFL,1UL,0xA7E2A24FL,0x38FAA3ACL,0x069160ECL},{0xEB32BFE3L,0x3C6001B9L,0x069160ECL,0x01866F3FL,4294967290UL,0UL,0x0B8F8A4DL,0x97E8E832L,4294967292UL},{3UL,0UL,0xE50017F8L,0x38FAA3ACL,4294967293UL,4294967290UL,4294967290UL,1UL,7UL}}};
static unsigned short **g_193 = (void*)0;
static int **g_194 = &g_2;
static char g_229 = 0x67L;
static char g_231 = 0x5DL;
static const unsigned char g_285 = 255UL;
static struct S0 *g_293 = &g_84;
static int **g_332 = &g_88;
static unsigned g_350 = 0x55B21C62L;
static char *g_357 = (void*)0;
static char **g_356 = &g_357;
static int ****g_500 = &g_66;
static char g_537[10] = {0x28L,0x28L,1L,0x28L,0x28L,1L,0x28L,0x28L,1L,0x28L};
static short g_553 = 0xB8F6L;
static unsigned char *g_607[8][5] = {{&g_19.f1,(void*)0,&g_86.f1,&g_19.f1,&g_84.f1},{&g_86.f1,(void*)0,(void*)0,(void*)0,&g_86.f1},{&g_86.f1,&g_84.f1,(void*)0,&g_84.f1,&g_84.f1},{&g_86.f1,(void*)0,(void*)0,&g_86.f1,&g_19.f1},{&g_19.f1,&g_84.f1,&g_86.f1,&g_84.f1,&g_19.f1},{&g_19.f1,(void*)0,&g_19.f1,(void*)0,(void*)0},{&g_19.f1,&g_86.f1,(void*)0,&g_19.f1,(void*)0},{(void*)0,(void*)0,&g_19.f1,(void*)0,&g_86.f1}};
static unsigned char **g_606 = &g_607[4][1];
static const struct S0 *g_619 = &g_86;
static unsigned g_650 = 0xF8F58ED2L;
static unsigned char g_664 = 0x5FL;
static int g_671 = 0x8F546595L;
static struct S0 g_718 = {9UL,0xF3L,-1L,-1L};
static unsigned **g_734 = (void*)0;
static unsigned ***g_733 = &g_734;
static unsigned * const *g_737 = (void*)0;
static unsigned * const **g_736 = &g_737;
static int ****g_815 = &g_66;
static unsigned short g_849[3] = {0x3615L,0x3615L,0x3615L};
static int *g_854 = &g_63[6][1][1];
static int *g_960 = &g_82;
static unsigned g_971 = 4294967295UL;
static int g_986 = 0L;
static unsigned char g_998 = 1UL;



static const int func_1(void);
static int * func_11(int * p_12);
static int * func_13(const int * p_14, char p_15, int * const p_16);
static int * func_17(struct S0 p_18);
static unsigned char func_27(unsigned p_28, int * p_29, char p_30);
static char func_32(unsigned p_33);
static const unsigned func_36(const unsigned p_37, int * p_38);
static int func_43(short p_44, int ** p_45, int ** p_46, unsigned p_47, int p_48);
static int ** func_49(int * const p_50);
static int * func_55(int * p_56);
static const int func_1(void)
{
    int *l_4 = (void*)0;
    int **l_961 = (void*)0;
    int **l_962 = &g_854;
    int l_963 = 0x03687C5AL;
    int l_964[2];
    unsigned short l_983 = 0xFD85L;
    char l_988 = 0xBDL;
    int i;
    for (i = 0; i < 2; i++)
        l_964[i] = (-10L);
    l_4 = g_2;
    if (((*l_4) = (safe_lshift_func_int8_t_s_s((safe_mod_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_s((((*g_332) = func_11(func_13(func_17(g_19), g_86.f1, (*g_194)))) == ((*l_962) = (*g_194))), g_537[0])), l_963)), l_964[1]))))
    {
        (*g_88) = (safe_mod_func_int8_t_s_s((**l_962), g_849[2]));
        (*g_332) = (*g_332);
    }
    else
    {
        int *l_967[2];
        int **l_979 = &g_854;
        unsigned char l_999 = 0x75L;
        short l_1000 = 1L;
        int i;
        for (i = 0; i < 2; i++)
            l_967[i] = &g_63[1][2][0];
        l_967[0] = func_11((*g_332));
        for (g_86.f3 = 1; (g_86.f3 >= 0); g_86.f3 -= 1)
        {
            int *l_968 = (void*)0;
            unsigned l_990 = 4294967289UL;
            int **l_996 = &g_854;
            (*g_107) = (*g_293);
            (*l_962) = l_968;
            for (g_3 = 0; (g_3 <= 1); g_3 += 1)
            {
                short ***l_969 = (void*)0;
                int l_972 = 0xFF7D0FBDL;
                const short **l_978 = (void*)0;
                int ***l_982 = &l_961;
                unsigned short l_984 = 0UL;
                unsigned *l_985 = &g_177[1][0][6];
                int l_987[9][5] = {{(-8L),(-8L),(-8L),(-8L),(-8L)},{(-8L),(-8L),(-8L),(-8L),(-8L)},{(-8L),(-8L),(-8L),(-8L),(-8L)},{(-8L),(-8L),(-8L),(-8L),(-8L)},{(-8L),(-8L),(-8L),(-8L),(-8L)},{(-8L),(-8L),(-8L),(-8L),(-8L)},{(-8L),(-8L),(-8L),(-8L),(-8L)},{(-8L),(-8L),(-8L),(-8L),(-8L)},{(-8L),(-8L),(-8L),(-8L),(-8L)}};
                unsigned char *l_989 = &g_718.f1;
                short l_991[3][1];
                int * const l_993 = &g_84.f2;
                int i, j;
                for (i = 0; i < 3; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_991[i][j] = 1L;
                }
                if ((**g_194))
                    break;
                for (g_84.f2 = 0; (g_84.f2 <= 1); g_84.f2 += 1)
                {
                    int *l_973 = (void*)0;
                    int i, j, k;
                    if (g_63[(g_84.f2 + 6)][(g_86.f3 + 2)][g_84.f2])
                    {
                        char *l_970 = &g_229;
                        int i, j, k;
                        g_63[(g_84.f2 + 1)][(g_86.f3 + 2)][g_84.f2] = ((((*l_970) = (((*g_88) = 2L) != (l_969 != (void*)0))) && g_63[(g_84.f2 + 4)][(g_84.f2 + 4)][g_3]) >= g_63[(g_84.f2 + 1)][(g_86.f3 + 2)][g_84.f2]);
                    }
                    else
                    {
                        (*g_88) = (g_971 <= l_972);
                        l_973 = &g_63[(g_84.f2 + 6)][(g_86.f3 + 2)][g_84.f2];
                    }
                    (*g_960) = (**g_332);
                    if (l_972)
                        continue;
                }
                l_990 = ((**g_332) = (safe_sub_func_int32_t_s_s((safe_mod_func_int8_t_s_s((l_978 == (void*)0), ((*l_989) = l_988))), (**g_194))));
                l_991[2][0] = 0L;
                for (g_718.f0 = 0; (g_718.f0 <= 1); g_718.f0 += 1)
                {
                    unsigned short *l_997[7][5][6] = {{{(void*)0,&g_140,&l_984,&g_86.f0,&g_86.f0,&g_86.f0},{&l_984,(void*)0,&l_984,(void*)0,(void*)0,(void*)0},{&g_140,&g_86.f0,(void*)0,(void*)0,(void*)0,&g_84.f0},{(void*)0,&g_86.f0,&g_86.f0,(void*)0,&g_86.f0,(void*)0},{&g_140,(void*)0,&g_84.f0,(void*)0,&g_86.f0,(void*)0}},{{&l_984,&g_849[1],&g_19.f0,(void*)0,&g_84.f0,&g_86.f0},{&g_86.f0,&l_983,(void*)0,&g_84.f0,&g_86.f0,&g_86.f0},{&g_84.f0,&g_86.f0,&g_849[2],(void*)0,(void*)0,&g_849[2]},{&g_86.f0,&g_86.f0,&g_84.f0,&g_140,&g_86.f0,&g_140},{(void*)0,&g_86.f0,(void*)0,(void*)0,(void*)0,&g_84.f0}},{{(void*)0,(void*)0,(void*)0,(void*)0,&g_86.f0,&g_140},{&g_86.f0,(void*)0,&g_84.f0,&g_849[2],(void*)0,&g_849[2]},{&g_849[2],(void*)0,&g_849[2],&g_140,&l_984,&g_86.f0},{(void*)0,(void*)0,(void*)0,&g_86.f0,&g_140,&g_86.f0},{&g_140,&g_84.f0,&g_19.f0,(void*)0,&g_19.f0,&g_84.f0}},{{&g_84.f0,&g_86.f0,&g_849[1],&l_984,&g_140,&g_140},{&l_984,&g_19.f0,(void*)0,&g_86.f0,&g_84.f0,(void*)0},{&g_86.f0,&g_19.f0,(void*)0,(void*)0,&g_140,&g_140},{&g_849[2],&g_86.f0,(void*)0,&g_849[1],&g_19.f0,(void*)0},{(void*)0,&g_84.f0,&l_983,&g_19.f0,&g_140,&g_19.f0}},{{&g_86.f0,(void*)0,&l_984,&g_84.f0,&l_984,(void*)0},{&g_86.f0,&g_86.f0,&g_140,&g_140,&g_86.f0,&g_86.f0},{&g_84.f0,&g_86.f0,&g_19.f0,(void*)0,&g_849[2],&g_86.f0},{&l_984,(void*)0,&g_849[2],&g_86.f0,(void*)0,(void*)0},{&l_984,(void*)0,&g_86.f0,(void*)0,&g_84.f0,(void*)0}},{{&g_84.f0,&g_849[2],&g_86.f0,&g_140,&g_140,(void*)0},{&g_86.f0,&g_140,&g_84.f0,&g_84.f0,(void*)0,(void*)0},{&g_140,(void*)0,&g_84.f0,&g_86.f0,&g_84.f0,&g_84.f0},{&g_140,&g_86.f0,&g_84.f0,&g_86.f0,&g_140,&g_86.f0},{(void*)0,(void*)0,&g_849[2],&g_86.f0,&g_86.f0,&g_19.f0}},{{&g_849[2],&g_84.f0,&g_86.f0,(void*)0,&g_86.f0,&g_19.f0},{&g_19.f0,&g_84.f0,&g_849[2],&g_84.f0,(void*)0,&g_86.f0},{&g_86.f0,&g_140,&g_84.f0,(void*)0,&g_84.f0,&g_84.f0},{&g_86.f0,(void*)0,&g_84.f0,&g_86.f0,&g_849[2],(void*)0},{(void*)0,&l_984,&g_84.f0,&l_984,(void*)0,(void*)0}}};
                    int i, j, k;
                    if (g_63[(g_718.f0 + 1)][(g_86.f3 + 4)][g_3])
                    {
                        struct S0 **l_992 = &g_107;
                        (*l_992) = &g_718;
                    }
                    else
                    {
                        (*g_332) = func_55(&g_63[(g_718.f0 + 1)][(g_86.f3 + 4)][g_3]);
                        return (*g_2);
                    }
                    (*g_194) = func_13(func_13(func_13(func_11((*g_332)), (*l_4), l_993), ((safe_add_func_int16_t_s_s(((((+((g_998 = (((*l_985) = ((l_996 = &l_968) == &l_968)) < (*l_993))) ^ g_718.f0)) && 65529UL) == l_999) <= 0xAB034A6DL), g_553)) < l_1000), (*g_194)), g_3, (*g_194));
                    (*l_996) = &g_63[(g_718.f0 + 1)][(g_86.f3 + 4)][g_3];
                    (*g_293) = (*g_619);
                }
            }
        }
        return (**g_332);
    }
    return (*l_4);
}







static int * func_11(int * p_12)
{
    int * const l_632[10][8] = {{&g_63[3][3][1],&g_63[2][9][1],&g_82,&g_63[2][9][1],&g_63[3][3][1],&g_63[3][3][1],&g_63[2][9][1],&g_82},{&g_63[3][3][1],&g_63[3][3][1],&g_63[2][9][1],&g_82,&g_63[3][3][1],&g_63[4][2][1],&g_63[4][2][1],&g_63[3][3][1]},{&g_63[2][9][1],&g_63[3][3][1],&g_63[3][3][1],&g_63[2][9][1],&g_82,&g_63[2][9][1],&g_63[3][3][1],&g_63[3][3][1]},{&g_63[3][3][1],&g_82,&g_63[6][1][1],&g_63[6][1][1],&g_82,&g_63[3][3][1],&g_82,&g_63[6][1][1]},{&g_63[2][9][1],&g_82,&g_63[2][9][1],&g_63[3][3][1],&g_63[3][3][1],&g_63[2][9][1],&g_82,&g_63[2][9][1]},{&g_63[4][2][1],&g_63[3][3][1],&g_63[6][1][1],&g_63[3][3][1],&g_63[4][2][1],&g_63[4][2][1],&g_63[3][3][1],&g_63[6][1][1]},{&g_63[4][2][1],&g_63[4][2][1],&g_63[3][3][1],&g_63[6][1][1],&g_63[3][3][1],&g_63[4][2][1],&g_63[4][2][1],&g_63[3][3][1]},{&g_63[2][9][1],&g_63[3][3][1],&g_63[3][3][1],&g_63[2][9][1],&g_82,&g_63[2][9][1],&g_63[3][3][1],&g_63[3][3][1]},{&g_63[3][3][1],&g_82,&g_63[6][1][1],&g_63[6][1][1],&g_82,&g_63[3][3][1],&g_82,&g_63[6][1][1]},{&g_63[2][9][1],&g_82,&g_63[2][9][1],&g_63[3][3][1],&g_63[3][3][1],&g_63[2][9][1],&g_82,&g_63[2][9][1]}};
    short l_651 = 0xA4EFL;
    int l_706 = 0x453534AEL;
    int **l_708[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    unsigned ****l_735 = &g_733;
    unsigned * const ***l_738[5][1][8] = {{{&g_736,&g_736,(void*)0,&g_736,&g_736,&g_736,&g_736,(void*)0}},{{&g_736,&g_736,&g_736,(void*)0,&g_736,&g_736,&g_736,&g_736}},{{(void*)0,&g_736,&g_736,(void*)0,&g_736,(void*)0,&g_736,(void*)0}},{{(void*)0,&g_736,&g_736,&g_736,&g_736,(void*)0,&g_736,&g_736}},{{&g_736,&g_736,&g_736,(void*)0,(void*)0,&g_736,&g_736,&g_736}}};
    unsigned l_739 = 0x4930A7A2L;
    unsigned l_746 = 0x02DCAB6DL;
    unsigned char l_747 = 0xBBL;
    int *l_748 = &g_86.f2;
    char ***l_801 = &g_356;
    unsigned char ***l_825 = &g_606;
    const unsigned l_850 = 4294967287UL;
    unsigned l_864 = 4294967286UL;
    struct S0 l_869 = {65533UL,0UL,0x1E0BF2B6L,-1L};
    struct S0 *l_875[4];
    short l_892 = 5L;
    const int *l_900 = (void*)0;
    int *l_958 = &l_869.f2;
    int *l_959 = &g_51;
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_875[i] = &g_19;
    for (g_51 = 2; (g_51 < 5); g_51 = safe_add_func_int32_t_s_s(g_51, 4))
    {
        char l_630 = 0xF1L;
        int *l_633 = &g_82;
        struct S0 l_640 = {0x0927L,0xC0L,0x3047E855L,-9L};
        const unsigned char *l_656 = &l_640.f1;
        const unsigned char **l_655 = &l_656;
        const unsigned char ***l_654 = &l_655;
        int **l_660 = &g_88;
        char l_667[7][10] = {{1L,1L,0xD3L,0L,8L,0xD3L,0x5CL,0x41L,1L,0x11L},{0xF8L,0x53L,8L,5L,(-1L),0xD3L,0xD3L,(-1L),5L,8L},{1L,1L,4L,(-1L),0x7AL,(-9L),0L,1L,(-1L),0L},{0x53L,0xF8L,0xD3L,0x11L,0xF8L,5L,0L,5L,0xF8L,0x11L},{1L,1L,1L,0xD3L,0L,8L,0xD3L,0x5CL,0x41L,1L},{0x5CL,0x53L,(-1L),(-1L),1L,1L,0x5CL,0x5CL,1L,1L},{0x53L,1L,1L,0x53L,0x41L,0xF8L,1L,5L,1L,0x5CL}};
        unsigned *l_699 = &g_177[1][4][0];
        unsigned **l_698 = &l_699;
        unsigned *** const l_697[9][3] = {{&l_698,&l_698,&l_698},{&l_698,&l_698,&l_698},{&l_698,&l_698,&l_698},{&l_698,&l_698,&l_698},{&l_698,&l_698,&l_698},{&l_698,&l_698,&l_698},{&l_698,&l_698,&l_698},{&l_698,&l_698,&l_698},{&l_698,&l_698,&l_698}};
        unsigned short l_707 = 1UL;
        int i, j;
        for (g_19.f2 = 2; (g_19.f2 <= 9); g_19.f2 += 1)
        {
            unsigned *l_627[8] = {&g_177[0][4][8],&g_177[0][4][8],&g_177[0][4][8],&g_177[0][4][8],&g_177[0][4][8],&g_177[0][4][8],&g_177[0][4][8],&g_177[0][4][8]};
            int **l_646 = &g_2;
            unsigned char ***l_653 = (void*)0;
            int i;
        }
        (*g_332) = func_13(p_12, ((void*)0 != p_12), p_12);
    }
    return g_960;
}







static int * func_13(const int * p_14, char p_15, int * const p_16)
{
    const struct S0 *l_617 = &g_19;
    const struct S0 **l_618[6] = {&l_617,&l_617,&l_617,&l_617,&l_617,&l_617};
    int *l_620 = &g_86.f2;
    int i;
    g_619 = l_617;
    return l_620;
}







static int * func_17(struct S0 p_18)
{
    int *l_616 = &g_19.f2;
    for (g_19.f3 = 0; (g_19.f3 == 26); g_19.f3 = safe_add_func_uint16_t_u_u(g_19.f3, 3))
    {
        struct S0 l_22 = {1UL,255UL,-1L,3L};
        if ((*g_2))
            break;
        p_18.f2 = p_18.f1;
        l_22 = g_19;
        (*g_2) = (*g_2);
    }
    for (p_18.f3 = 0; (p_18.f3 > 19); p_18.f3 = safe_add_func_int32_t_s_s(p_18.f3, 5))
    {
        int *l_614[10] = {(void*)0,&g_51,&g_51,(void*)0,&g_84.f2,(void*)0,&g_51,&g_51,(void*)0,&g_84.f2};
        int i;
        (*g_2) = (0L || g_19.f3);
    }
    return l_616;
}







static unsigned char func_27(unsigned p_28, int * p_29, char p_30)
{
    int l_31 = 0x981C5860L;
    (*g_2) = l_31;
    g_19.f2 = ((*g_2) = l_31);
    return p_28;
}







static char func_32(unsigned p_33)
{
    unsigned short *l_424 = &g_86.f0;
    unsigned short **l_423 = &l_424;
    int *l_425[7][5][7] = {{{&g_82,(void*)0,&g_82,&g_63[6][1][1],&g_63[6][1][1],(void*)0,&g_63[6][7][1]},{&g_51,&g_84.f2,&g_42,&g_82,&g_63[6][1][1],&g_42,(void*)0},{(void*)0,&g_63[1][7][0],&g_63[6][1][1],&g_63[6][1][1],&g_63[1][7][0],(void*)0,(void*)0},{&g_51,(void*)0,&g_63[6][1][1],&g_63[1][4][1],&g_63[6][1][1],&g_82,(void*)0},{&g_63[6][1][1],(void*)0,&g_42,&g_63[6][7][1],&g_51,&g_63[6][7][1],&g_42}},{{&g_42,(void*)0,(void*)0,&g_42,(void*)0,&g_51,(void*)0},{(void*)0,&g_63[1][7][0],&g_63[6][1][1],&g_84.f2,&g_42,&g_63[6][1][1],&g_63[6][1][1]},{(void*)0,&g_84.f2,&g_63[8][4][1],(void*)0,&g_63[6][1][1],&g_84.f2,&g_84.f2},{(void*)0,&g_63[6][1][1],&g_84.f2,&g_63[6][1][1],(void*)0,&g_42,&g_63[6][7][1]},{&g_63[8][4][1],&g_42,(void*)0,&g_63[6][1][1],(void*)0,&g_82,(void*)0}},{{(void*)0,&g_63[6][1][1],&g_63[6][1][1],&g_86.f2,&g_63[6][1][1],&g_63[3][0][1],&g_51},{&g_63[6][1][1],&g_63[1][4][1],&g_63[6][1][1],(void*)0,&g_51,&g_63[6][1][1],&g_51},{&g_86.f2,&g_63[1][7][0],&g_63[1][7][0],&g_86.f2,&g_82,&g_51,&g_84.f2},{&g_42,&g_86.f2,&g_63[6][1][1],&g_63[6][1][1],&g_63[6][1][1],&g_51,(void*)0},{&g_84.f2,&g_63[6][1][1],&g_51,&g_63[6][1][1],&g_51,&g_63[6][1][1],&g_84.f2}},{{&g_63[6][1][1],&g_86.f2,(void*)0,(void*)0,&g_42,&g_42,&g_51},{&g_63[6][7][1],(void*)0,&g_42,&g_51,(void*)0,(void*)0,&g_51},{(void*)0,&g_42,(void*)0,&g_82,&g_51,&g_82,(void*)0},{&g_63[6][1][1],(void*)0,&g_51,(void*)0,&g_63[1][7][0],&g_63[6][1][1],&g_63[6][7][1]},{&g_42,&g_42,&g_63[6][1][1],&g_82,&g_63[6][1][1],&g_82,&g_84.f2}},{{&g_63[6][1][1],&g_51,&g_63[1][7][0],&g_84.f2,&g_42,(void*)0,&g_82},{&g_42,&g_84.f2,&g_63[6][1][1],(void*)0,&g_42,(void*)0,&g_63[6][1][1]},{&g_63[6][1][1],&g_63[6][1][1],&g_63[6][7][1],&g_63[1][7][0],&g_82,&g_63[6][1][1],&g_84.f2},{(void*)0,&g_86.f2,&g_51,&g_86.f2,&g_63[6][1][1],&g_42,(void*)0},{&g_82,&g_84.f2,&g_86.f2,&g_84.f2,&g_82,&g_63[6][1][1],&g_63[3][0][1]}},{{&g_63[6][1][1],&g_82,&g_84.f2,&g_84.f2,&g_42,&g_63[1][4][1],&g_42},{(void*)0,(void*)0,&g_63[1][7][0],&g_63[6][1][1],&g_63[6][1][1],&g_63[1][7][0],(void*)0},{&g_63[6][1][1],&g_84.f2,&g_42,&g_82,&g_63[6][1][1],&g_86.f2,&g_63[8][4][1]},{&g_82,&g_63[6][1][1],&g_84.f2,&g_86.f2,&g_42,&g_63[6][1][1],&g_42},{(void*)0,&g_63[6][1][1],(void*)0,&g_82,(void*)0,&g_86.f2,&g_84.f2}},{{&g_63[6][1][1],&g_42,&g_82,&g_63[6][1][1],&g_63[6][1][1],(void*)0,&g_84.f2},{&g_84.f2,&g_42,&g_63[8][4][1],&g_84.f2,&g_63[8][4][1],&g_42,&g_84.f2},{&g_84.f2,(void*)0,&g_63[6][1][1],&g_84.f2,&g_63[6][1][1],(void*)0,&g_42},{&g_42,(void*)0,(void*)0,&g_86.f2,&g_63[6][1][1],&g_42,&g_63[8][4][1]},{&g_63[6][1][1],&g_63[6][7][1],&g_63[6][1][1],&g_63[1][7][0],(void*)0,(void*)0,&g_63[6][7][1]}}};
    int l_429 = 1L;
    unsigned l_430 = 1UL;
    const unsigned l_434 = 4294967295UL;
    char *l_442[8] = {(void*)0,&g_231,(void*)0,&g_231,(void*)0,&g_231,(void*)0,&g_231};
    unsigned short l_452 = 0xEB70L;
    short l_456[7] = {0xDAB7L,0xDAB7L,(-7L),0xDAB7L,0xDAB7L,(-7L),0xDAB7L};
    int l_468 = 0x80F0B4A7L;
    unsigned l_470 = 0x6406D5D5L;
    unsigned l_474 = 4294967293UL;
    int *l_479 = &g_63[6][1][1];
    int *l_480 = (void*)0;
    int *l_481 = &g_86.f2;
    int *l_482 = &l_429;
    int *l_483 = &g_84.f2;
    int *l_484 = &g_84.f2;
    unsigned char l_486 = 246UL;
    struct S0 l_489 = {1UL,0x76L,-4L,0xC3C6L};
    struct S0 l_490[6][7][1] = {{{{0x17A1L,0x0DL,1L,0L}},{{0x17A1L,0x0DL,1L,0L}},{{0x55BFL,0UL,0L,0x6987L}},{{65535UL,0x0EL,0x85CE4D9BL,0x1E3EL}},{{0x55BFL,0UL,0L,0x6987L}},{{0x17A1L,0x0DL,1L,0L}},{{0x17A1L,0x0DL,1L,0L}}},{{{0x55BFL,0UL,0L,0x6987L}},{{65535UL,0x0EL,0x85CE4D9BL,0x1E3EL}},{{0x55BFL,0UL,0L,0x6987L}},{{0x17A1L,0x0DL,1L,0L}},{{0x17A1L,0x0DL,1L,0L}},{{0x55BFL,0UL,0L,0x6987L}},{{65535UL,0x0EL,0x85CE4D9BL,0x1E3EL}}},{{{0x55BFL,0UL,0L,0x6987L}},{{0x17A1L,0x0DL,1L,0L}},{{0x17A1L,0x0DL,1L,0L}},{{0x55BFL,0UL,0L,0x6987L}},{{65535UL,0x0EL,0x85CE4D9BL,0x1E3EL}},{{0x55BFL,0UL,0L,0x6987L}},{{0x17A1L,0x0DL,1L,0L}}},{{{0x17A1L,0x0DL,1L,0L}},{{0x55BFL,0UL,0L,0x6987L}},{{65535UL,0x0EL,0x85CE4D9BL,0x1E3EL}},{{0x55BFL,0UL,0L,0x6987L}},{{0x17A1L,0x0DL,1L,0L}},{{0x17A1L,0x0DL,1L,0L}},{{0x55BFL,0UL,0L,0x6987L}}},{{{65535UL,0x0EL,0x85CE4D9BL,0x1E3EL}},{{0x55BFL,0UL,0L,0x6987L}},{{0x17A1L,0x0DL,1L,0L}},{{0x17A1L,0x0DL,1L,0L}},{{0x55BFL,0UL,0L,0x6987L}},{{65535UL,0x0EL,0x85CE4D9BL,0x1E3EL}},{{0x55BFL,0UL,0L,0x6987L}}},{{{0x17A1L,0x0DL,1L,0L}},{{0x17A1L,0x0DL,1L,0L}},{{0x55BFL,0UL,0L,0x6987L}},{{65535UL,0x0EL,0x85CE4D9BL,0x1E3EL}},{{0x55BFL,0UL,0L,0x6987L}},{{0x17A1L,0x0DL,1L,0L}},{{0x17A1L,0x0DL,1L,0L}}}};
    struct S0 l_491 = {0x1C4FL,0x5DL,0L,-1L};
    struct S0 l_492 = {0xDB71L,0x40L,0x8F087F50L,0xC7E5L};
    struct S0 **l_494 = (void*)0;
    struct S0 ***l_493 = &l_494;
    int **** const l_497 = &g_66;
    int ****l_498 = &g_66;
    int *****l_499[5];
    unsigned char *l_501[9] = {&l_492.f1,&l_492.f1,&l_492.f1,&l_492.f1,&l_492.f1,&l_492.f1,&l_492.f1,&l_492.f1,&l_492.f1};
    int **l_502[1];
    unsigned *l_527 = &g_350;
    unsigned **l_526 = &l_527;
    short l_564[10] = {0xECBCL,0x6B1DL,0xECBCL,0x5680L,0x5680L,0xECBCL,0x6B1DL,0xECBCL,0x5680L,0x5680L};
    unsigned short l_565 = 65527UL;
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_499[i] = &l_498;
    for (i = 0; i < 1; i++)
        l_502[i] = &l_425[0][2][6];
    if ((safe_sub_func_uint32_t_u_u(func_36(g_19.f0, g_2), (l_423 == (void*)0))))
    {
lbl_431:
        (*g_332) = l_425[0][2][6];
        if (g_86.f3)
            goto lbl_426;
    }
    else
    {
        if (p_33)
        {
lbl_426:
            (*g_107) = (*g_293);
            (*g_332) = (*g_332);
lbl_457:
            (*g_293) = (*g_107);
            if ((1L == (safe_lshift_func_uint8_t_u_u(l_429, l_430))))
            {
                int l_435 = 0x2D477318L;
                char *l_441 = &g_229;
                int *l_478 = &g_86.f2;
                for (p_33 = 0; (p_33 <= 9); p_33 += 1)
                {
                    int *l_436 = &g_82;
                    for (g_19.f3 = 7; (g_19.f3 >= 1); g_19.f3 -= 1)
                    {
                        unsigned char *l_443 = (void*)0;
                        unsigned char *l_444 = &g_84.f1;
                        int ***l_449 = &g_194;
                        unsigned short *l_453 = &g_140;
                        unsigned short *l_454 = &g_84.f0;
                        int l_455 = 0x343B5F4AL;
                        if (p_33)
                            goto lbl_431;
                        l_435 = (safe_sub_func_uint8_t_u_u(g_84.f0, l_434));
                        (*g_332) = l_436;
                        l_456[0] = (safe_add_func_int16_t_s_s((safe_sub_func_uint16_t_u_u(((*l_454) = ((*l_453) = ((*l_424) = (((*l_444) = (((*g_356) = l_441) == l_442[2])) > (safe_div_func_uint32_t_u_u((g_153[2] | (+(safe_div_func_uint8_t_u_u((((*l_449) = (void*)0) != (void*)0), g_86.f0)))), (safe_rshift_func_int16_t_s_u(l_452, 10)))))))), g_74)), l_455));
                    }
                    if ((*l_436))
                        continue;
                    for (g_51 = 9; (g_51 >= 0); g_51 -= 1)
                    {
                        int l_469 = 5L;
                        short *l_471 = &g_19.f3;
                        int l_472 = 0L;
                        unsigned *l_473[10] = {&g_177[0][1][3],&g_177[0][1][0],&g_177[0][1][3],&g_177[0][1][3],&g_177[0][1][0],&g_177[0][1][3],&g_177[0][1][3],&g_177[0][1][0],&g_177[0][1][3],&g_177[0][1][3]};
                        int i;
                        if (g_86.f0)
                            goto lbl_457;
                        (*l_436) = (-1L);
                        (*l_436) = ((safe_div_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s(((g_177[0][0][5] = (((((safe_rshift_func_int16_t_s_s(((*l_471) = (safe_div_func_uint32_t_u_u(((0xC12C7BB8L >= 0xD03F238AL) && (l_469 = (((((+p_33) <= g_51) == g_63[0][7][0]) > (p_33 != (safe_sub_func_uint8_t_u_u(l_468, ((*l_441) = ((p_33 | ((g_153[p_33] = p_33) | l_469)) || g_63[1][0][1])))))) && l_470))), (-10L)))), p_33)) & g_177[0][5][6]) ^ g_140) | l_472) == (*l_436))) | g_350), g_63[6][1][1])), 0x25L)) || g_153[p_33]);
                        if (l_474)
                            continue;
                    }
                }
                if (l_474)
                    goto lbl_475;
lbl_475:
                (*g_332) = (*g_332);
                for (l_435 = 0; (l_435 >= (-10)); --l_435)
                {
                    unsigned l_485 = 1UL;
                    (*g_332) = &l_429;
                    (*g_332) = func_55(l_484);
                    (*g_332) = l_478;
                    l_486 = ((l_485 = p_33) | p_33);
                }
            }
            else
            {
                for (g_19.f0 = 27; (g_19.f0 >= 19); g_19.f0 = safe_sub_func_int16_t_s_s(g_19.f0, 8))
                {
                    (*g_293) = l_489;
                }
            }
        }
        else
        {
lbl_612:
            l_490[0][2][0] = l_489;
        }
        (*g_293) = l_491;
        (*g_107) = l_492;
    }
    (*l_481) = (((5L & 0xD2C9E072L) & ((void*)0 == l_493)) & (((-1L) >= (p_33 == ((safe_mod_func_uint32_t_u_u((l_497 != (g_500 = l_498)), p_33)) == p_33))) && (-1L)));
    (*l_482) = (*l_481);
    if ((&l_490[0][2][0] == &l_489))
    {
        for (g_19.f0 = 1; (g_19.f0 <= 4); g_19.f0 += 1)
        {
            int *l_503 = &g_82;
            struct S0 l_504 = {0x11C1L,0xA2L,0xD02CED5BL,0x0840L};
            (*g_332) = l_503;
            (*g_107) = l_504;
        }
    }
    else
    {
        int *l_516[7][1] = {{&l_492.f2},{&l_491.f2},{&l_492.f2},{&l_491.f2},{&l_492.f2},{&l_491.f2},{&l_492.f2}};
        const unsigned *l_531 = &l_430;
        const unsigned ** const l_530 = &l_531;
        int ***l_540 = &g_194;
        struct S0 *l_542[9] = {&l_490[4][0][0],&l_490[5][5][0],&l_490[5][5][0],&l_490[4][0][0],&l_490[5][5][0],&l_490[5][5][0],&l_490[4][0][0],&l_490[5][5][0],&l_490[5][5][0]};
        struct S0 l_545 = {0UL,0UL,-1L,0xA762L};
        short l_579 = (-1L);
        int *l_582 = &l_492.f2;
        unsigned char *l_588 = &g_84.f1;
        int i, j;
        for (g_82 = 17; (g_82 > (-14)); g_82 = safe_sub_func_int8_t_s_s(g_82, 5))
        {
            if ((*l_484))
                break;
        }
        for (l_468 = 0; (l_468 < 16); ++l_468)
        {
            short *l_510[2];
            short *l_513[5] = {&g_153[9],&g_153[9],&g_153[9],&g_153[9],&g_153[9]};
            int *l_532[4];
            struct S0 *l_541 = &l_492;
            int i;
            for (i = 0; i < 2; i++)
                l_510[i] = &l_490[0][2][0].f3;
            for (i = 0; i < 4; i++)
                l_532[i] = &g_82;
            if ((+(!(safe_unary_minus_func_uint32_t_u(4294967294UL)))))
            {
                short *l_512 = &g_84.f3;
                short **l_511[5][1];
                int l_525 = 0x14A1D242L;
                unsigned **l_529 = &l_527;
                int ***l_539 = &g_194;
                int i, j;
                for (i = 0; i < 5; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_511[i][j] = &l_512;
                }
                if (((l_510[0] = (void*)0) == (l_513[3] = &g_153[2])))
                {
                    int *l_520[5] = {&l_489.f2,&l_489.f2,&l_489.f2,&l_489.f2,&l_489.f2};
                    unsigned ***l_528[6][2][2] = {{{&l_526,&l_526},{&l_526,&l_526}},{{&l_526,&l_526},{&l_526,&l_526}},{{&l_526,&l_526},{&l_526,&l_526}},{{&l_526,&l_526},{&l_526,&l_526}},{{&l_526,&l_526},{&l_526,&l_526}},{{&l_526,&l_526},{&l_526,&l_526}}};
                    int i, j, k;
                    (*g_293) = (*g_107);
                    for (l_429 = 4; (l_429 > 10); l_429 = safe_add_func_int32_t_s_s(l_429, 1))
                    {
                        int * const l_517[1][1][5] = {{{&g_42,&g_42,&g_42,&g_42,&g_42}}};
                        int **l_518 = (void*)0;
                        int **l_519 = &g_88;
                        int i, j, k;
                        (*l_519) = l_517[0][0][0];
                        (*l_519) = l_516[4][0];
                    }
                    if ((safe_rshift_func_uint8_t_u_s((((l_525 | ((((l_529 = l_526) == l_530) && (((*l_483) = func_36(p_33, l_532[1])) == (((g_537[3] = ((((safe_lshift_func_uint16_t_u_s(0x6CB3L, 12)) ^ (((*l_482) = p_33) != ((((0xCC73L | p_33) > p_33) >= p_33) >= (*l_479)))) || l_525) == 0xA9AEL)) >= 0x63L) & g_153[8]))) < p_33)) & 6L) >= 0x214BL), 1)))
                    {
                        return p_33;
                    }
                    else
                    {
                        int *l_538[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                        int i;
                        l_532[2] = &l_525;
                    }
                    if (p_33)
                        break;
                }
                else
                {
                    if ((l_539 == l_540))
                    {
                        if (p_33)
                            break;
                        (*g_293) = (*g_293);
                    }
                    else
                    {
                        l_542[3] = l_541;
                    }
                    if (p_33)
                        continue;
                }
            }
            else
            {
                (*l_481) = p_33;
            }
        }
        for (g_229 = (-30); (g_229 <= 0); g_229 = safe_add_func_int16_t_s_s(g_229, 4))
        {
            int *l_550 = &l_492.f2;
            for (l_489.f2 = 6; (l_489.f2 >= 2); l_489.f2 -= 1)
            {
                (*l_483) = (-3L);
                (*g_293) = l_545;
            }
        }
        for (l_545.f3 = 0; (l_545.f3 <= 0); l_545.f3 += 1)
        {
            int l_592 = 1L;
            struct S0 l_611 = {0xC335L,0x4EL,0x2EE6366FL,5L};
            int i;
            (*l_493) = (*l_493);
            (*l_484) = (safe_add_func_uint32_t_u_u((safe_add_func_int32_t_s_s(((&g_285 != l_588) == (g_153[(l_545.f3 + 5)] >= g_153[l_545.f3])), (g_153[(l_545.f3 + 4)] >= (((*l_424) = g_153[(l_545.f3 + 5)]) || g_177[0][2][7])))), (*l_582)));
            for (l_491.f0 = 0; (l_491.f0 <= 0); l_491.f0 += 1)
            {
                int *l_589 = &g_42;
                struct S0 **l_613 = &l_542[3];
                for (g_84.f2 = 9; (g_84.f2 >= 0); g_84.f2 -= 1)
                {
                    int l_599[9] = {(-9L),(-9L),(-9L),(-9L),(-9L),(-9L),(-9L),(-9L),(-9L)};
                    int i, j, k;
                    (*g_332) = l_589;
                    if ((((g_153[(l_491.f0 + 1)] = (-4L)) >= ((safe_rshift_func_int8_t_s_s(p_33, 7)) | ((p_33 == l_592) != (safe_add_func_int8_t_s_s((safe_div_func_uint8_t_u_u((safe_div_func_int32_t_s_s(((-1L) | (l_456[(l_491.f0 + 2)] = l_599[7])), g_63[6][1][1])), (safe_rshift_func_uint16_t_u_u(((**l_423) = ((safe_add_func_uint16_t_u_u((0xBC69L || ((safe_lshift_func_uint8_t_u_s(g_231, 0)) <= 1UL)), (-4L))) && p_33)), l_592)))), p_33))))) >= g_140))
                    {
                        (*g_332) = l_589;
                    }
                    else
                    {
                        unsigned char ***l_608 = &g_606;
                        (*g_332) = l_589;
                        (*l_608) = g_606;
                    }
                    g_86 = l_490[(l_491.f0 + 5)][(l_545.f3 + 5)][l_545.f3];
                    (**g_332) = 0x2183AA12L;
                }
                for (g_19.f3 = 0; (g_19.f3 != 22); ++g_19.f3)
                {
                    (*l_582) = p_33;
                    (*g_107) = l_611;
                    if (l_430)
                        goto lbl_612;
                }
                (*l_613) = (void*)0;
            }
        }
    }
    return p_33;
}







static const unsigned func_36(const unsigned p_37, int * p_38)
{
    unsigned l_39[2][1][8] = {{{4294967289UL,4294967289UL,0x44BB323FL,4294967295UL,0x44BB323FL,4294967289UL,4294967289UL,0x44BB323FL}},{{0x9DFEEE83L,0x44BB323FL,0x44BB323FL,0x9DFEEE83L,4294967295UL,0x9DFEEE83L,0x44BB323FL,0x44BB323FL}}};
    char *l_300 = &g_231;
    char **l_299[8];
    struct S0 l_326 = {0x4468L,0UL,0xBF47646FL,1L};
    char l_373 = 0x63L;
    int *l_374 = &l_326.f2;
    unsigned *l_391[2];
    unsigned **l_390 = &l_391[1];
    int l_422 = 0x078A14CAL;
    int i, j, k;
    for (i = 0; i < 8; i++)
        l_299[i] = &l_300;
    for (i = 0; i < 2; i++)
        l_391[i] = &g_177[1][4][6];
    for (g_19.f0 = 0; (g_19.f0 <= 0); g_19.f0 += 1)
    {
        int *l_41 = &g_42;
        int **l_40 = &l_41;
        char **l_302 = &l_300;
        struct S0 l_305 = {65526UL,9UL,0x2EF9B219L,0xC28BL};
        unsigned char *l_317 = &g_84.f1;
        short *l_406 = &g_153[4];
        short ** const l_405 = &l_406;
        struct S0 **l_418[7][8] = {{&g_293,&g_107,&g_107,(void*)0,(void*)0,&g_107,&g_107,&g_293},{&g_107,&g_293,&g_293,&g_107,&g_293,&g_293,&g_107,&g_107},{&g_293,&g_107,&g_107,&g_107,&g_107,&g_293,&g_107,&g_293},{&g_107,&g_293,&g_107,&g_293,&g_107,&g_107,&g_107,&g_107},{&g_293,&g_293,&g_293,&g_293,(void*)0,&g_107,(void*)0,&g_293},{&g_293,(void*)0,&g_293,&g_107,&g_107,&g_107,&g_107,&g_293},{(void*)0,(void*)0,&g_107,&g_107,&g_293,&g_107,&g_107,(void*)0}};
        struct S0 ***l_417 = &l_418[6][6];
        int i, j;
        (*l_40) = (void*)0;
        for (g_19.f3 = 0; (g_19.f3 <= 0); g_19.f3 += 1)
        {
            int ***l_258 = (void*)0;
            int ***l_259 = &g_194;
            unsigned short *l_260 = &g_140;
            int l_319[7] = {0x8A727F94L,0xFC8A1530L,0x8A727F94L,0x8A727F94L,0xFC8A1530L,0x8A727F94L,0x8A727F94L};
            struct S0 *l_325 = (void*)0;
            int i;
        }
        for (g_19.f3 = 0; (g_19.f3 >= 0); g_19.f3 -= 1)
        {
            return p_37;
        }
        for (l_305.f3 = 0; (l_305.f3 <= 0); l_305.f3 += 1)
        {
            unsigned l_346[4] = {0xCA225149L,0xCA225149L,0xCA225149L,0xCA225149L};
            int **l_371[5][5] = {{&g_88,&l_41,&g_88,&g_88,&g_88},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_88,&g_88,&g_88,&l_41,&g_88},{(void*)0,&g_2,&g_2,(void*)0,&g_2},{&g_88,&g_88,(void*)0,&g_88,&g_88}};
            unsigned l_372 = 0x0E5EE258L;
            int *l_393[2][2] = {{&g_63[3][9][1],&g_63[3][9][1]},{&g_63[3][9][1],&g_63[3][9][1]}};
            short * const l_398 = &g_84.f3;
            int i, j;
            for (g_231 = 0; (g_231 >= 0); g_231 -= 1)
            {
                int l_335 = 2L;
                int l_353[5][6][2] = {{{0xAD9A669BL,0x4CDCEC3EL},{0x4CDCEC3EL,2L},{(-3L),0xAD9A669BL},{0x3C8F3659L,0x59CC5A87L},{0xD55992B2L,0x59CC5A87L},{0x3C8F3659L,0xAD9A669BL}},{{(-3L),2L},{0x4CDCEC3EL,0xD55992B2L},{0x5918745FL,0L},{0xAD9A669BL,0x3C8F3659L},{5L,8L},{1L,5L}},{{(-3L),0x4CDCEC3EL},{(-3L),5L},{1L,8L},{5L,0x3C8F3659L},{0xAD9A669BL,0L},{0x5918745FL,0xD55992B2L}},{{0xD55992B2L,0x7F32D723L},{0x19CA9C73L,0x5918745FL},{0x4CDCEC3EL,0x3AAC7521L},{0L,0x3AAC7521L},{0x4CDCEC3EL,0x5918745FL},{0x19CA9C73L,0x7F32D723L}},{{0xD55992B2L,0xD55992B2L},{0x5918745FL,0L},{0xAD9A669BL,0x3C8F3659L},{5L,8L},{1L,5L},{(-3L),0x4CDCEC3EL}}};
                unsigned *l_375 = &l_346[1];
                int i, j, k;
                if (l_335)
                    break;
                for (g_19.f3 = 0; (g_19.f3 <= 0); g_19.f3 += 1)
                {
                    unsigned short l_344[1][10];
                    unsigned char *l_345 = &g_86.f1;
                    unsigned *l_349 = &g_350;
                    char l_351[2];
                    int l_352 = 1L;
                    char **l_368 = &g_357;
                    int i, j;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 10; j++)
                            l_344[i][j] = 0x9348L;
                    }
                    for (i = 0; i < 2; i++)
                        l_351[i] = 0x52L;
                    (*g_332) = p_38;
                    (*g_332) = (*g_332);
                    if (l_346[1])
                    {
                        l_353[2][2][0] = p_37;
                    }
                    else
                    {
                        short *l_369 = &g_153[2];
                        int **l_370[3];
                        int i;
                        for (i = 0; i < 3; i++)
                            l_370[i] = &l_41;
                        l_326.f2 = ((safe_div_func_uint16_t_u_u((!(g_285 == (((0x9EDBL > ((g_356 != (void*)0) >= (0x1AL && (safe_add_func_uint32_t_u_u((((p_37 == p_37) && p_37) > p_37), g_74))))) >= p_37) < p_37))), g_82)) & l_373);
                        (*g_107) = (*g_107);
                    }
                }
                l_374 = &l_353[2][2][0];
                l_353[2][2][0] = (g_82 != ((*l_375) = g_153[2]));
            }
            if ((0x5C3ADD51L || g_231))
            {
                const unsigned char l_376 = 0xD7L;
                return l_376;
            }
            else
            {
                int **l_389 = (void*)0;
                g_51 = (safe_mod_func_int32_t_s_s((safe_rshift_func_int16_t_s_s(p_37, 1)), (safe_lshift_func_int8_t_s_s(p_37, 2))));
                (*g_332) = p_38;
                for (g_86.f1 = 0; (g_86.f1 <= 0); g_86.f1 += 1)
                {
                    short l_387 = 1L;
                    int ***l_388[6];
                    unsigned ***l_392 = &l_390;
                    int i;
                    for (i = 0; i < 6; i++)
                        l_388[i] = &l_371[4][0];
                    l_305.f2 = ((safe_mod_func_uint32_t_u_u(g_63[3][8][1], (l_387 = (safe_rshift_func_uint8_t_u_s(0xE3L, 2))))) & (1L != (((g_74 && p_37) == p_37) & ((l_389 = l_371[1][1]) != l_371[1][1]))));
                    (*l_392) = l_390;
                }
            }
            for (g_231 = 0; (g_231 <= 0); g_231 += 1)
            {
                unsigned short *l_394[9] = {&l_305.f0,&l_305.f0,&g_140,&l_305.f0,&l_305.f0,&g_140,&l_305.f0,&l_305.f0,&g_140};
                int l_395 = (-3L);
                int l_399 = 0L;
                int i;
                (*g_332) = p_38;
                if (((l_395 = g_51) != ((+(+(safe_div_func_int32_t_s_s((l_398 != &g_153[2]), (l_305.f2 = p_37))))) && (l_399 = l_399))))
                {
                    struct S0 l_400 = {0xDEE8L,0xAEL,0x675AA743L,1L};
                    unsigned short l_404 = 0xFAAAL;
                    if ((p_37 <= ((**l_390) = g_19.f3)))
                    {
                        struct S0 l_401 = {0UL,1UL,0xEC49CCF5L,0x84AAL};
                        short ***l_407 = (void*)0;
                        short **l_409 = &l_406;
                        short ***l_408 = &l_409;
                        l_401 = l_400;
                        l_404 = (safe_rshift_func_uint8_t_u_s((g_86.f3 != p_37), 2));
                        (*l_408) = l_405;
                    }
                    else
                    {
                        (*g_332) = (*g_332);
                        (*g_293) = (*g_107);
                    }
                }
                else
                {
                    return g_84.f1;
                }
                for (g_84.f2 = 0; (g_84.f2 <= 0); g_84.f2 += 1)
                {
                    l_305.f2 = (p_37 && (safe_sub_func_uint32_t_u_u(l_395, l_326.f0)));
                }
            }
        }
        for (g_86.f1 = 0; (g_86.f1 <= 0); g_86.f1 += 1)
        {
            int *l_416[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            const struct S0 l_420 = {65526UL,1UL,0xA33B7725L,1L};
            int i;
            g_84.f2 = (safe_lshift_func_int16_t_s_s((safe_rshift_func_int16_t_s_s((g_19.f3 = p_37), 4)), 15));
            for (g_82 = 0; (g_82 <= 0); g_82 += 1)
            {
                struct S0 ** const * const l_419 = &l_418[6][5];
                if ((l_417 != l_419))
                {
                    (*g_332) = l_391[1];
                    (*g_293) = l_420;
                    for (g_84.f1 = 0; (g_84.f1 <= 0); g_84.f1 += 1)
                    {
                        unsigned short l_421 = 65526UL;
                        (**g_332) = l_421;
                        return g_19.f1;
                    }
                }
                else
                {
                    for (g_84.f2 = 0; (g_84.f2 >= 0); g_84.f2 -= 1)
                    {
                        (*g_332) = (*g_332);
                        if (l_422)
                            continue;
                        (*g_332) = p_38;
                    }
                }
            }
        }
    }
    return g_231;
}







static int func_43(short p_44, int ** p_45, int ** p_46, unsigned p_47, int p_48)
{
    int l_263 = (-3L);
    struct S0 l_264[4][10] = {{{0xB178L,0xECL,-1L,1L},{65535UL,0x11L,1L,-1L},{0xB178L,0xECL,-1L,1L},{0x9420L,1UL,-1L,-1L},{0x9420L,1UL,-1L,-1L},{0xB178L,0xECL,-1L,1L},{65535UL,0x11L,1L,-1L},{0xB178L,0xECL,-1L,1L},{0x9420L,1UL,-1L,-1L},{0x9420L,1UL,-1L,-1L}},{{0xB178L,0xECL,-1L,1L},{65535UL,0x11L,1L,-1L},{0xB178L,0xECL,-1L,1L},{0x9420L,1UL,-1L,-1L},{0x9420L,1UL,-1L,-1L},{0xB178L,0xECL,-1L,1L},{65535UL,0x11L,1L,-1L},{0xB178L,0xECL,-1L,1L},{0x9420L,1UL,-1L,-1L},{0x9420L,1UL,-1L,-1L}},{{0xB178L,0xECL,-1L,1L},{65535UL,0x11L,1L,-1L},{0xB178L,0xECL,-1L,1L},{0x9420L,1UL,-1L,-1L},{0x9420L,1UL,-1L,-1L},{0xB178L,0xECL,-1L,1L},{65535UL,0x11L,1L,-1L},{0xB178L,0xECL,-1L,1L},{0x9420L,1UL,-1L,-1L},{0x9420L,1UL,-1L,-1L}},{{0xB178L,0xECL,-1L,1L},{65535UL,0x11L,1L,-1L},{0xB178L,0xECL,-1L,1L},{0xC5ACL,1UL,5L,0x21E0L},{0xC5ACL,1UL,5L,0x21E0L},{65535UL,0x11L,1L,-1L},{0x9420L,1UL,-1L,-1L},{65535UL,0x11L,1L,-1L},{0xC5ACL,1UL,5L,0x21E0L},{0xC5ACL,1UL,5L,0x21E0L}}};
    int ****l_287 = &g_66;
    int ***** const l_286 = &l_287;
    char l_288 = (-1L);
    int i, j;
    for (g_86.f2 = 12; (g_86.f2 <= 21); g_86.f2 = safe_add_func_uint16_t_u_u(g_86.f2, 1))
    {
        (*g_88) = (*g_88);
        return l_263;
    }
    l_264[2][4] = l_264[2][4];
    for (g_86.f2 = (-1); (g_86.f2 >= (-26)); g_86.f2--)
    {
        struct S0 **l_267 = &g_107;
        int l_270 = 0x8E9E6E95L;
        (*l_267) = &l_264[2][4];
        for (g_86.f0 = 0; (g_86.f0 > 7); g_86.f0++)
        {
            const struct S0 l_271 = {0x19D7L,0xF9L,0xF6C1AABAL,0xB2CCL};
            char *l_277[3];
            int i;
            for (i = 0; i < 3; i++)
                l_277[i] = (void*)0;
            if (l_270)
            {
                (**l_267) = l_271;
            }
            else
            {
                (*g_88) = l_270;
            }
            if (p_47)
            {
                int ***l_272 = &g_194;
                (*l_272) = &g_88;
                for (g_84.f0 = 0; (g_84.f0 <= 1); g_84.f0 += 1)
                {
                    int i, j, k;
                    for (p_44 = 1; (p_44 >= 0); p_44 -= 1)
                    {
                        int i, j, k;
                        (**l_267) = (*g_107);
                        return g_177[g_84.f0][(g_84.f0 + 4)][(p_44 + 5)];
                    }
                    (*g_194) = &g_63[(g_84.f0 + 5)][(g_84.f0 + 3)][g_84.f0];
                    for (g_86.f1 = 0; (g_86.f1 <= 1); g_86.f1 += 1)
                    {
                        return (***l_272);
                    }
                }
                for (p_44 = (-13); (p_44 < (-11)); ++p_44)
                {
                    for (g_86.f1 = 0; (g_86.f1 == 55); ++g_86.f1)
                    {
                        char l_284 = (-5L);
                    }
                    for (l_263 = 2; (l_263 >= 0); l_263 -= 1)
                    {
                        int i, j;
                        (*g_88) = (***l_272);
                        (*g_194) = (*g_194);
                        if (l_263)
                            continue;
                        l_264[l_263][(l_263 + 7)] = l_264[l_263][(l_263 + 2)];
                    }
                }
            }
            else
            {
                return l_271.f2;
            }
            (*g_194) = (*g_194);
        }
    }
    (*g_88) = ((void*)0 == l_286);
    return l_288;
}







static int ** func_49(int * const p_50)
{
    int **l_124 = (void*)0;
    struct S0 l_125 = {0xB264L,0xA2L,0x5D31D5B2L,0L};
    struct S0 **l_154[2];
    int *l_255 = (void*)0;
    int **l_257 = (void*)0;
    int i;
    for (i = 0; i < 2; i++)
        l_154[i] = &g_107;
    for (g_51 = (-2); (g_51 == (-10)); g_51--)
    {
        unsigned char l_54 = 0xE3L;
        int *l_118 = (void*)0;
        unsigned l_119[9];
        struct S0 *l_164 = &l_125;
        unsigned short *l_192 = &g_19.f0;
        unsigned short **l_191 = &l_192;
        int **l_256 = &g_88;
        int i;
        for (i = 0; i < 9; i++)
            l_119[i] = 4294967295UL;
    }
    return l_257;
}







static int * func_55(int * p_56)
{
    int **l_57 = &g_2;
    int ***l_58 = (void*)0;
    int ***l_59 = &l_57;
    int *l_61 = (void*)0;
    int **l_60 = &l_61;
    char l_62[2];
    const int *l_80 = &g_63[2][0][0];
    const int **l_79 = &l_80;
    const int *** const l_78[4] = {&l_79,&l_79,&l_79,&l_79};
    const int *** const *l_77 = &l_78[0];
    int i;
    for (i = 0; i < 2; i++)
        l_62[i] = 0x07L;
    (*l_59) = l_57;
    p_56 = ((*l_60) = (void*)0);
    for (g_63[6][1][1] = 0; (g_63[6][1][1] <= 1); g_63[6][1][1] += 1)
    {
        const int ***l_67 = (void*)0;
        const int ****l_68 = (void*)0;
        const int ****l_69 = &l_67;
        const int *l_73 = &g_74;
        const int **l_72 = &l_73;
        const int ***l_71 = &l_72;
        const int ****l_70 = &l_71;
        const int *** const **l_81 = &l_77;
        struct S0 l_92 = {0x77DDL,0UL,-4L,0xA610L};
        unsigned l_98 = 9UL;
        if ((safe_lshift_func_uint16_t_u_s((g_51 && ((g_66 != ((*l_70) = ((*l_69) = l_67))) >= ((safe_mod_func_uint16_t_u_u(((void*)0 == &g_2), (-1L))) == (((*l_81) = l_77) == &l_78[1])))), 15)))
        {
            int l_90 = 0xC01934DBL;
            struct S0 l_99 = {0xD659L,0UL,0x6D350633L,0x8849L};
            char l_108 = 0x89L;
            for (g_82 = 1; (g_82 >= 0); g_82 -= 1)
            {
                char l_83 = 6L;
                int *** const *l_89 = &l_59;
                int *l_91 = &g_51;
            }
        }
        else
        {
            (*g_88) = (-1L);
        }
    }
    return &g_51;
}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_19.f0, "g_19.f0", print_hash_value);
    transparent_crc(g_19.f1, "g_19.f1", print_hash_value);
    transparent_crc(g_19.f2, "g_19.f2", print_hash_value);
    transparent_crc(g_19.f3, "g_19.f3", print_hash_value);
    transparent_crc(g_42, "g_42", print_hash_value);
    transparent_crc(g_51, "g_51", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 10; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_63[i][j][k], "g_63[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_74, "g_74", print_hash_value);
    transparent_crc(g_82, "g_82", print_hash_value);
    transparent_crc(g_84.f0, "g_84.f0", print_hash_value);
    transparent_crc(g_84.f1, "g_84.f1", print_hash_value);
    transparent_crc(g_84.f2, "g_84.f2", print_hash_value);
    transparent_crc(g_84.f3, "g_84.f3", print_hash_value);
    transparent_crc(g_86.f0, "g_86.f0", print_hash_value);
    transparent_crc(g_86.f1, "g_86.f1", print_hash_value);
    transparent_crc(g_86.f2, "g_86.f2", print_hash_value);
    transparent_crc(g_86.f3, "g_86.f3", print_hash_value);
    transparent_crc(g_140, "g_140", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_153[i], "g_153[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 9; k++)
            {
                transparent_crc(g_177[i][j][k], "g_177[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_229, "g_229", print_hash_value);
    transparent_crc(g_231, "g_231", print_hash_value);
    transparent_crc(g_285, "g_285", print_hash_value);
    transparent_crc(g_350, "g_350", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_537[i], "g_537[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_553, "g_553", print_hash_value);
    transparent_crc(g_650, "g_650", print_hash_value);
    transparent_crc(g_664, "g_664", print_hash_value);
    transparent_crc(g_671, "g_671", print_hash_value);
    transparent_crc(g_718.f0, "g_718.f0", print_hash_value);
    transparent_crc(g_718.f1, "g_718.f1", print_hash_value);
    transparent_crc(g_718.f2, "g_718.f2", print_hash_value);
    transparent_crc(g_718.f3, "g_718.f3", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_849[i], "g_849[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_971, "g_971", print_hash_value);
    transparent_crc(g_986, "g_986", print_hash_value);
    transparent_crc(g_998, "g_998", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
