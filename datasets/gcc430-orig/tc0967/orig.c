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



static unsigned short g_8[10] = {2UL, 2UL, 2UL, 2UL, 2UL, 2UL, 2UL, 2UL, 2UL, 2UL};
static unsigned char g_24 = 0UL;
static unsigned char *g_23 = &g_24;
static unsigned char *g_61[1][5] = {{(void*)0, (void*)0, (void*)0, (void*)0, (void*)0}};
static unsigned char **g_60 = &g_61[0][4];
static unsigned char g_71 = 0xEFL;
static unsigned short g_77 = 0x1663L;
static int g_79 = (-7L);
static unsigned char g_81 = 0x61L;
static char g_85 = 0xBFL;
static int *g_90[1] = {&g_79};
static int **g_89 = &g_90[0];
static unsigned g_112 = 0x7BDE7BC9L;
static unsigned g_174[6] = {4294967295UL, 6UL, 4294967295UL, 6UL, 4294967295UL, 6UL};
static unsigned short g_176 = 0x5B41L;
static int g_199 = (-1L);
static char g_218 = 6L;
static unsigned **g_225 = (void*)0;
static int g_239 = 1L;
static unsigned short *g_243[1][2] = {{&g_8[1], &g_8[1]}};
static unsigned short **g_242 = &g_243[0][1];
static int g_293 = 0xE6C3BA41L;
static int *g_322 = &g_293;
static unsigned char g_360 = 0xBBL;
static unsigned char g_364 = 252UL;
static short g_423[6] = {0x047BL, 0x047BL, 0xF01AL, 0x047BL, 0x047BL, 0xF01AL};
static int ***g_457 = &g_89;
static int ****g_456 = &g_457;
static unsigned g_458[3][3][7] = {{{0x37E696E4L, 0UL, 0x37E696E4L, 0xB8E31546L, 4294967295UL, 1UL, 0x5DD903A9L}, {0x37E696E4L, 0UL, 0x37E696E4L, 0xB8E31546L, 4294967295UL, 1UL, 0x5DD903A9L}, {0x37E696E4L, 0UL, 0x37E696E4L, 0xB8E31546L, 4294967295UL, 1UL, 0x5DD903A9L}}, {{0x37E696E4L, 0UL, 0x37E696E4L, 0xB8E31546L, 4294967295UL, 1UL, 0x5DD903A9L}, {0x37E696E4L, 0UL, 0x37E696E4L, 0xB8E31546L, 4294967295UL, 1UL, 0x5DD903A9L}, {0x37E696E4L, 0UL, 0x37E696E4L, 0xB8E31546L, 4294967295UL, 1UL, 0x5DD903A9L}}, {{0x37E696E4L, 0UL, 0x37E696E4L, 0xB8E31546L, 4294967295UL, 1UL, 0x5DD903A9L}, {0x37E696E4L, 0UL, 0x37E696E4L, 0xB8E31546L, 4294967295UL, 1UL, 0x5DD903A9L}, {0x37E696E4L, 0UL, 0x37E696E4L, 0xB8E31546L, 4294967295UL, 1UL, 0x5DD903A9L}}};
static char *g_468 = &g_85;
static char **g_467 = &g_468;
static short g_509 = 0xAA07L;
static int g_542 = 0x1CE6D3A4L;
static int *****g_732 = &g_456;
static int ******g_731 = &g_732;
static char *g_755 = &g_85;
static unsigned char g_791 = 0x53L;
static int g_798 = 0xA240D3EAL;
static int g_800 = 0xF893BA43L;
static int *g_808 = &g_79;
static unsigned short g_1034 = 0x20A3L;



static unsigned char func_1(void);
static int func_2(unsigned char p_3, short p_4);
static unsigned short func_19(int p_20, short p_21, short p_22);
static unsigned short func_31(unsigned char * p_32, unsigned char ** p_33);
static unsigned char ** func_38(unsigned char * p_39);
static unsigned char * func_40(unsigned char * p_41, int p_42);
static unsigned char * func_43(unsigned char p_44, int p_45, unsigned p_46);
static int func_53(short p_54, unsigned char * p_55);
static short func_56(unsigned char ** p_57, unsigned short p_58, unsigned p_59);
static unsigned func_62(unsigned char * p_63, unsigned short p_64, int p_65, unsigned char * p_66);
static unsigned char func_1(void)
{
    unsigned char l_7 = 0x3EL;
    unsigned char *l_9[9][7][4] = {{{&l_7, &l_7, &l_7, &l_7}, {&l_7, &l_7, &l_7, &l_7}, {&l_7, &l_7, &l_7, &l_7}, {&l_7, &l_7, &l_7, &l_7}, {&l_7, &l_7, &l_7, &l_7}, {&l_7, &l_7, &l_7, &l_7}, {&l_7, &l_7, &l_7, &l_7}}, {{&l_7, &l_7, &l_7, &l_7}, {&l_7, &l_7, &l_7, &l_7}, {&l_7, &l_7, &l_7, &l_7}, {&l_7, &l_7, &l_7, &l_7}, {&l_7, &l_7, &l_7, &l_7}, {&l_7, &l_7, &l_7, &l_7}, {&l_7, &l_7, &l_7, &l_7}}, {{&l_7, &l_7, &l_7, &l_7}, {&l_7, &l_7, &l_7, &l_7}, {&l_7, &l_7, &l_7, &l_7}, {&l_7, &l_7, &l_7, &l_7}, {&l_7, &l_7, &l_7, &l_7}, {&l_7, &l_7, &l_7, &l_7}, {&l_7, &l_7, &l_7, &l_7}}, {{&l_7, &l_7, &l_7, &l_7}, {&l_7, &l_7, &l_7, &l_7}, {&l_7, &l_7, &l_7, &l_7}, {&l_7, &l_7, &l_7, &l_7}, {&l_7, &l_7, &l_7, &l_7}, {&l_7, &l_7, &l_7, &l_7}, {&l_7, &l_7, &l_7, &l_7}}, {{&l_7, &l_7, &l_7, &l_7}, {&l_7, &l_7, &l_7, &l_7}, {&l_7, &l_7, &l_7, &l_7}, {&l_7, &l_7, &l_7, &l_7}, {&l_7, &l_7, &l_7, &l_7}, {&l_7, &l_7, &l_7, &l_7}, {&l_7, &l_7, &l_7, &l_7}}, {{&l_7, &l_7, &l_7, &l_7}, {&l_7, &l_7, &l_7, &l_7}, {&l_7, &l_7, &l_7, &l_7}, {&l_7, &l_7, &l_7, &l_7}, {&l_7, &l_7, &l_7, &l_7}, {&l_7, &l_7, &l_7, &l_7}, {&l_7, &l_7, &l_7, &l_7}}, {{&l_7, &l_7, &l_7, &l_7}, {&l_7, &l_7, &l_7, &l_7}, {&l_7, &l_7, &l_7, &l_7}, {&l_7, &l_7, &l_7, &l_7}, {&l_7, &l_7, &l_7, &l_7}, {&l_7, &l_7, &l_7, &l_7}, {&l_7, &l_7, &l_7, &l_7}}, {{&l_7, &l_7, &l_7, &l_7}, {&l_7, &l_7, &l_7, &l_7}, {&l_7, &l_7, &l_7, &l_7}, {&l_7, &l_7, &l_7, &l_7}, {&l_7, &l_7, &l_7, &l_7}, {&l_7, &l_7, &l_7, &l_7}, {&l_7, &l_7, &l_7, &l_7}}, {{&l_7, &l_7, &l_7, &l_7}, {&l_7, &l_7, &l_7, &l_7}, {&l_7, &l_7, &l_7, &l_7}, {&l_7, &l_7, &l_7, &l_7}, {&l_7, &l_7, &l_7, &l_7}, {&l_7, &l_7, &l_7, &l_7}, {&l_7, &l_7, &l_7, &l_7}}};
    int l_10 = 1L;
    unsigned char **l_25 = (void*)0;
    unsigned char **l_26 = &l_9[3][3][2];
    unsigned char *l_28[2];
    unsigned char **l_27 = &l_28[1];
    unsigned char *l_34[1][1][6];
    int l_566 = 0L;
    unsigned l_1161 = 0x982AC655L;
    int *l_1163 = (void*)0;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_28[i] = &g_24;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 6; k++)
                l_34[i][j][k] = &g_24;
        }
    }
    g_800 ^= func_2((l_10 = (safe_lshift_func_uint8_t_u_u(l_7, (0x3111738AL < (0x26L >= g_8[1]))))), (safe_mul_func_int8_t_s_s((g_8[1] | g_8[1]), (safe_rshift_func_int8_t_s_u((safe_lshift_func_uint16_t_u_u((safe_mod_func_int32_t_s_s((func_19(((((*l_27) = (g_23 = ((*l_26) = g_23))) != &g_24) > (((safe_lshift_func_uint16_t_u_s(func_31(l_34[0][0][5], &l_34[0][0][5]), g_360)) <= l_7) >= 0x39L)), l_566, l_7) != l_7), l_7)), l_1161)), 5)))));



    return l_1161;
}







static int func_2(unsigned char p_3, short p_4)
{
    unsigned short l_1162 = 65535UL;
    (****g_456) = l_1162;
    return (***g_457);
}







static unsigned short func_19(int p_20, short p_21, short p_22)
{
    int *l_570 = (void*)0;
    int l_571 = 2L;
    unsigned char *l_597 = &g_71;
    unsigned char *l_601 = &g_81;
    unsigned l_667 = 4294967295UL;
    char l_677 = (-5L);
    int *l_685 = &g_239;
    int ****l_740[2][7] = {{&g_457, &g_457, &g_457, (void*)0, &g_457, (void*)0, &g_457}, {&g_457, &g_457, &g_457, (void*)0, &g_457, (void*)0, &g_457}};
    int l_741 = 0x06351BBEL;
    int l_799 = 0xAF803E8BL;
    short l_817 = 0xA410L;
    int ******l_842 = (void*)0;
    short l_852 = 8L;
    unsigned short ***l_888 = (void*)0;
    unsigned char *l_928[7][2][6] = {{{&g_24, &g_360, &g_71, &g_791, &g_71, &g_81}, {&g_24, &g_360, &g_71, &g_791, &g_71, &g_81}}, {{&g_24, &g_360, &g_71, &g_791, &g_71, &g_81}, {&g_24, &g_360, &g_71, &g_791, &g_71, &g_81}}, {{&g_24, &g_360, &g_71, &g_791, &g_71, &g_81}, {&g_24, &g_360, &g_71, &g_791, &g_71, &g_81}}, {{&g_24, &g_360, &g_71, &g_791, &g_71, &g_81}, {&g_24, &g_360, &g_71, &g_791, &g_71, &g_81}}, {{&g_24, &g_360, &g_71, &g_791, &g_71, &g_81}, {&g_24, &g_360, &g_71, &g_791, &g_71, &g_81}}, {{&g_24, &g_360, &g_71, &g_791, &g_71, &g_81}, {&g_24, &g_360, &g_71, &g_791, &g_71, &g_81}}, {{&g_24, &g_360, &g_71, &g_791, &g_71, &g_81}, {&g_24, &g_360, &g_71, &g_791, &g_71, &g_81}}};
    int *l_939 = &g_199;
    int l_950[2][10][6] = {{{0xA717E9B7L, 0x1F7263C8L, 0x8CE95840L, 0x4BF44D04L, 7L, (-1L)}, {0xA717E9B7L, 0x1F7263C8L, 0x8CE95840L, 0x4BF44D04L, 7L, (-1L)}, {0xA717E9B7L, 0x1F7263C8L, 0x8CE95840L, 0x4BF44D04L, 7L, (-1L)}, {0xA717E9B7L, 0x1F7263C8L, 0x8CE95840L, 0x4BF44D04L, 7L, (-1L)}, {0xA717E9B7L, 0x1F7263C8L, 0x8CE95840L, 0x4BF44D04L, 7L, (-1L)}, {0xA717E9B7L, 0x1F7263C8L, 0x8CE95840L, 0x4BF44D04L, 7L, (-1L)}, {0xA717E9B7L, 0x1F7263C8L, 0x8CE95840L, 0x4BF44D04L, 7L, (-1L)}, {0xA717E9B7L, 0x1F7263C8L, 0x8CE95840L, 0x4BF44D04L, 7L, (-1L)}, {0xA717E9B7L, 0x1F7263C8L, 0x8CE95840L, 0x4BF44D04L, 7L, (-1L)}, {0xA717E9B7L, 0x1F7263C8L, 0x8CE95840L, 0x4BF44D04L, 7L, (-1L)}}, {{0xA717E9B7L, 0x1F7263C8L, 0x8CE95840L, 0x4BF44D04L, 7L, (-1L)}, {0xA717E9B7L, 0x1F7263C8L, 0x8CE95840L, 0x4BF44D04L, 7L, (-1L)}, {0xA717E9B7L, 0x1F7263C8L, 0x8CE95840L, 0x4BF44D04L, 7L, (-1L)}, {0xA717E9B7L, 0x1F7263C8L, 0x8CE95840L, 0x4BF44D04L, 7L, (-1L)}, {0xA717E9B7L, 0x1F7263C8L, 0x8CE95840L, 0x4BF44D04L, 7L, (-1L)}, {0xA717E9B7L, 0x1F7263C8L, 0x8CE95840L, 0x4BF44D04L, 7L, (-1L)}, {0xA717E9B7L, 0x1F7263C8L, 0x8CE95840L, 0x4BF44D04L, 7L, (-1L)}, {0xA717E9B7L, 0x1F7263C8L, 0x8CE95840L, 0x4BF44D04L, 7L, (-1L)}, {0xA717E9B7L, 0x1F7263C8L, 0x8CE95840L, 0x4BF44D04L, 7L, (-1L)}, {0xA717E9B7L, 0x1F7263C8L, 0x8CE95840L, 0x4BF44D04L, 7L, (-1L)}}};
    unsigned char *l_951 = &g_791;
    unsigned l_968 = 0x40E09FAEL;
    short ***l_993 = (void*)0;
    unsigned short l_1076 = 0x2AD7L;
    char l_1078 = 0L;
    unsigned l_1160 = 0xCD25CAEFL;
    int i, j, k;
    return (*l_939);
}







static unsigned short func_31(unsigned char * p_32, unsigned char ** p_33)
{
    unsigned short l_35 = 65532UL;
    unsigned char *l_52[1];
    int l_196[4] = {0x0FFE65D8L, 0xADD7577FL, 0x0FFE65D8L, 0xADD7577FL};
    int l_213 = 1L;
    int *l_219 = &l_196[0];
    int *l_250[10][8][3] = {{{&g_199, &g_239, (void*)0}, {&g_199, &g_239, (void*)0}, {&g_199, &g_239, (void*)0}, {&g_199, &g_239, (void*)0}, {&g_199, &g_239, (void*)0}, {&g_199, &g_239, (void*)0}, {&g_199, &g_239, (void*)0}, {&g_199, &g_239, (void*)0}}, {{&g_199, &g_239, (void*)0}, {&g_199, &g_239, (void*)0}, {&g_199, &g_239, (void*)0}, {&g_199, &g_239, (void*)0}, {&g_199, &g_239, (void*)0}, {&g_199, &g_239, (void*)0}, {&g_199, &g_239, (void*)0}, {&g_199, &g_239, (void*)0}}, {{&g_199, &g_239, (void*)0}, {&g_199, &g_239, (void*)0}, {&g_199, &g_239, (void*)0}, {&g_199, &g_239, (void*)0}, {&g_199, &g_239, (void*)0}, {&g_199, &g_239, (void*)0}, {&g_199, &g_239, (void*)0}, {&g_199, &g_239, (void*)0}}, {{&g_199, &g_239, (void*)0}, {&g_199, &g_239, (void*)0}, {&g_199, &g_239, (void*)0}, {&g_199, &g_239, (void*)0}, {&g_199, &g_239, (void*)0}, {&g_199, &g_239, (void*)0}, {&g_199, &g_239, (void*)0}, {&g_199, &g_239, (void*)0}}, {{&g_199, &g_239, (void*)0}, {&g_199, &g_239, (void*)0}, {&g_199, &g_239, (void*)0}, {&g_199, &g_239, (void*)0}, {&g_199, &g_239, (void*)0}, {&g_199, &g_239, (void*)0}, {&g_199, &g_239, (void*)0}, {&g_199, &g_239, (void*)0}}, {{&g_199, &g_239, (void*)0}, {&g_199, &g_239, (void*)0}, {&g_199, &g_239, (void*)0}, {&g_199, &g_239, (void*)0}, {&g_199, &g_239, (void*)0}, {&g_199, &g_239, (void*)0}, {&g_199, &g_239, (void*)0}, {&g_199, &g_239, (void*)0}}, {{&g_199, &g_239, (void*)0}, {&g_199, &g_239, (void*)0}, {&g_199, &g_239, (void*)0}, {&g_199, &g_239, (void*)0}, {&g_199, &g_239, (void*)0}, {&g_199, &g_239, (void*)0}, {&g_199, &g_239, (void*)0}, {&g_199, &g_239, (void*)0}}, {{&g_199, &g_239, (void*)0}, {&g_199, &g_239, (void*)0}, {&g_199, &g_239, (void*)0}, {&g_199, &g_239, (void*)0}, {&g_199, &g_239, (void*)0}, {&g_199, &g_239, (void*)0}, {&g_199, &g_239, (void*)0}, {&g_199, &g_239, (void*)0}}, {{&g_199, &g_239, (void*)0}, {&g_199, &g_239, (void*)0}, {&g_199, &g_239, (void*)0}, {&g_199, &g_239, (void*)0}, {&g_199, &g_239, (void*)0}, {&g_199, &g_239, (void*)0}, {&g_199, &g_239, (void*)0}, {&g_199, &g_239, (void*)0}}, {{&g_199, &g_239, (void*)0}, {&g_199, &g_239, (void*)0}, {&g_199, &g_239, (void*)0}, {&g_199, &g_239, (void*)0}, {&g_199, &g_239, (void*)0}, {&g_199, &g_239, (void*)0}, {&g_199, &g_239, (void*)0}, {&g_199, &g_239, (void*)0}}};
    unsigned short **l_260 = (void*)0;
    int l_409 = 0xBE769D06L;
    int ***l_432 = &g_89;
    unsigned l_461 = 0UL;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_52[i] = &g_24;
    if (l_35)
    {
        int l_49 = 0x2EFE8E60L;
        unsigned char ***l_194 = &g_60;
        unsigned short *l_195[7];
        int *l_197 = (void*)0;
        int *l_198 = &g_199;
        int i;
        for (i = 0; i < 7; i++)
            l_195[i] = &g_176;
        (*l_198) ^= (safe_lshift_func_int8_t_s_u(((l_196[0] = ((((*l_194) = func_38(((*p_33) = func_40(func_43((safe_sub_func_uint32_t_u_u(l_49, (safe_lshift_func_uint8_t_u_u(0xD3L, (l_35 <= (l_52[0] != (*p_33))))))), func_53(func_56(g_60, g_8[1], func_62((*p_33), (safe_rshift_func_uint8_t_u_u(((((safe_lshift_func_int8_t_s_u(g_24, 1)) != 0x1F3AL) < l_35) | l_35), l_35)), l_49, (*p_33))), (*p_33)), g_24), l_49)))) == &g_61[0][4]) | l_49)) >= g_8[1]), l_35));


        for (g_85 = 0; (g_85 >= 15); g_85 = safe_add_func_int16_t_s_s(g_85, 3))
        {
            int l_202 = 6L;
            return l_202;
        }
        (*l_198) |= l_35;
    }
    else
    {
        int l_212 = (-6L);
        unsigned char **l_226 = &g_61[0][1];
        unsigned *l_234[7] = {&g_112, &g_112, &g_112, &g_112, &g_112, &g_112, &g_112};
        unsigned **l_233 = &l_234[1];
        unsigned short *l_241[4][8] = {{&g_176, &g_8[1], &g_176, &g_8[1], &g_176, &g_77, &g_176, &g_8[1]}, {&g_176, &g_8[1], &g_176, &g_8[1], &g_176, &g_77, &g_176, &g_8[1]}, {&g_176, &g_8[1], &g_176, &g_8[1], &g_176, &g_77, &g_176, &g_8[1]}, {&g_176, &g_8[1], &g_176, &g_8[1], &g_176, &g_77, &g_176, &g_8[1]}};
        unsigned short **l_240[9] = {&l_241[3][3], &l_241[3][3], &l_241[3][3], &l_241[3][3], &l_241[3][3], &l_241[3][3], &l_241[3][3], &l_241[3][3], &l_241[3][3]};
        unsigned short **l_246 = (void*)0;
        int l_264 = 0xA3A9BFCDL;
        int l_292 = (-4L);
        unsigned short l_376 = 0xAC1DL;
        int i, j;
        for (g_24 = 0; (g_24 <= 5); g_24 += 1)
        {
            unsigned char ***l_205 = &g_60;
            int l_214 = 0L;
            unsigned short *l_215 = &l_35;
            char *l_216 = &g_85;
            char *l_217[8][4] = {{&g_218, &g_218, &g_218, &g_218}, {&g_218, &g_218, &g_218, &g_218}, {&g_218, &g_218, &g_218, &g_218}, {&g_218, &g_218, &g_218, &g_218}, {&g_218, &g_218, &g_218, &g_218}, {&g_218, &g_218, &g_218, &g_218}, {&g_218, &g_218, &g_218, &g_218}, {&g_218, &g_218, &g_218, &g_218}};
            unsigned short *l_229 = &g_77;
            unsigned ***l_232 = (void*)0;
            unsigned ***l_235 = (void*)0;
            unsigned ***l_236 = (void*)0;
            unsigned **l_238[6] = {(void*)0, &l_234[1], (void*)0, &l_234[1], (void*)0, &l_234[1]};
            unsigned ***l_237 = &l_238[3];
            int l_281[6][9] = {{(-10L), 1L, 0x0D2C7DCDL, 4L, 0xBDF8DBB8L, 0x9E399D35L, 0xBDF8DBB8L, 4L, 0x0D2C7DCDL}, {(-10L), 1L, 0x0D2C7DCDL, 4L, 0xBDF8DBB8L, 0x9E399D35L, 0xBDF8DBB8L, 4L, 0x0D2C7DCDL}, {(-10L), 1L, 0x0D2C7DCDL, 4L, 0xBDF8DBB8L, 0x9E399D35L, 0xBDF8DBB8L, 4L, 0x0D2C7DCDL}, {(-10L), 1L, 0x0D2C7DCDL, 4L, 0xBDF8DBB8L, 0x9E399D35L, 0xBDF8DBB8L, 4L, 0x0D2C7DCDL}, {(-10L), 1L, 0x0D2C7DCDL, 4L, 0xBDF8DBB8L, 0x9E399D35L, 0xBDF8DBB8L, 4L, 0x0D2C7DCDL}, {(-10L), 1L, 0x0D2C7DCDL, 4L, 0xBDF8DBB8L, 0x9E399D35L, 0xBDF8DBB8L, 4L, 0x0D2C7DCDL}};
            unsigned short *l_346[3];
            int l_361 = 0L;
            unsigned l_395[6] = {4UL, 4UL, 0x792C4643L, 4UL, 4UL, 0x792C4643L};
            int i, j;
            for (i = 0; i < 3; i++)
                l_346[i] = &g_8[9];
        }
    }


    for (g_79 = 0; (g_79 > (-14)); --g_79)
    {
        unsigned l_402 = 1UL;
        int ***l_433[1];
        unsigned l_435[9][1][7] = {{{0x4DBEDE39L, 1UL, 1UL, 0x4DBEDE39L, 0x3F0EB3F9L, 0x437ABF04L, 0UL}}, {{0x4DBEDE39L, 1UL, 1UL, 0x4DBEDE39L, 0x3F0EB3F9L, 0x437ABF04L, 0UL}}, {{0x4DBEDE39L, 1UL, 1UL, 0x4DBEDE39L, 0x3F0EB3F9L, 0x437ABF04L, 0UL}}, {{0x4DBEDE39L, 1UL, 1UL, 0x4DBEDE39L, 0x3F0EB3F9L, 0x437ABF04L, 0UL}}, {{0x4DBEDE39L, 1UL, 1UL, 0x4DBEDE39L, 0x3F0EB3F9L, 0x437ABF04L, 0UL}}, {{0x4DBEDE39L, 1UL, 1UL, 0x4DBEDE39L, 0x3F0EB3F9L, 0x437ABF04L, 0UL}}, {{0x4DBEDE39L, 1UL, 1UL, 0x4DBEDE39L, 0x3F0EB3F9L, 0x437ABF04L, 0UL}}, {{0x4DBEDE39L, 1UL, 1UL, 0x4DBEDE39L, 0x3F0EB3F9L, 0x437ABF04L, 0UL}}, {{0x4DBEDE39L, 1UL, 1UL, 0x4DBEDE39L, 0x3F0EB3F9L, 0x437ABF04L, 0UL}}};
        char *l_465[1];
        char **l_464 = &l_465[0];
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_433[i] = (void*)0;
        for (i = 0; i < 1; i++)
            l_465[i] = &g_218;
        for (g_218 = 0; (g_218 > (-19)); g_218--)
        {
            unsigned l_403 = 0xF54939A4L;
            unsigned char *l_410 = &g_360;
            int l_411 = 0x8774DBBFL;
            l_403 = l_402;
            if (l_402)
                break;
            for (l_402 = 0; (l_402 <= 16); ++l_402)
            {
                unsigned short *l_408[10] = {&g_176, &g_8[1], &l_35, &l_35, &g_8[1], &g_176, &g_8[1], &l_35, &l_35, &g_8[1]};
                int i;
                l_411 ^= func_62(l_52[0], (**g_242), (safe_mul_func_int16_t_s_s(((l_409 = 0x481EL) < 1UL), ((void*)0 != &l_196[1]))), l_410);
            }
            for (g_112 = (-9); (g_112 == 47); g_112++)
            {
                return l_402;
            }
        }
        for (g_71 = (-22); (g_71 == 46); g_71++)
        {
            short l_436[5][3][9] = {{{3L, 1L, 0L, 0xEFF7L, 1L, 1L, 0xEFF7L, 0L, 1L}, {3L, 1L, 0L, 0xEFF7L, 1L, 1L, 0xEFF7L, 0L, 1L}, {3L, 1L, 0L, 0xEFF7L, 1L, 1L, 0xEFF7L, 0L, 1L}}, {{3L, 1L, 0L, 0xEFF7L, 1L, 1L, 0xEFF7L, 0L, 1L}, {3L, 1L, 0L, 0xEFF7L, 1L, 1L, 0xEFF7L, 0L, 1L}, {3L, 1L, 0L, 0xEFF7L, 1L, 1L, 0xEFF7L, 0L, 1L}}, {{3L, 1L, 0L, 0xEFF7L, 1L, 1L, 0xEFF7L, 0L, 1L}, {3L, 1L, 0L, 0xEFF7L, 1L, 1L, 0xEFF7L, 0L, 1L}, {3L, 1L, 0L, 0xEFF7L, 1L, 1L, 0xEFF7L, 0L, 1L}}, {{3L, 1L, 0L, 0xEFF7L, 1L, 1L, 0xEFF7L, 0L, 1L}, {3L, 1L, 0L, 0xEFF7L, 1L, 1L, 0xEFF7L, 0L, 1L}, {3L, 1L, 0L, 0xEFF7L, 1L, 1L, 0xEFF7L, 0L, 1L}}, {{3L, 1L, 0L, 0xEFF7L, 1L, 1L, 0xEFF7L, 0L, 1L}, {3L, 1L, 0L, 0xEFF7L, 1L, 1L, 0xEFF7L, 0L, 1L}, {3L, 1L, 0L, 0xEFF7L, 1L, 1L, 0xEFF7L, 0L, 1L}}};
            int l_443 = 0x1E1C097DL;
            int i, j, k;
            for (g_293 = 0; (g_293 == 21); ++g_293)
            {
                char l_428 = 0x70L;
                char l_434 = 0x80L;
                int l_437 = 0x9D4CF0DBL;
                int ****l_455 = &l_432;
                unsigned char l_462 = 1UL;
                unsigned l_486 = 4294967293UL;
                for (g_77 = (-24); (g_77 > 46); ++g_77)
                {
                    short *l_422 = &g_423[5];
                    int l_429 = 9L;
                    int ***l_431 = &g_89;
                    int ****l_430[4];
                    unsigned *l_442 = &g_174[4];
                    int i;
                    for (i = 0; i < 4; i++)
                        l_430[i] = &l_431;
                    l_437 &= ((safe_rshift_func_int16_t_s_u(((*l_422) = (-1L)), (safe_lshift_func_uint8_t_u_s((((safe_lshift_func_int8_t_s_s((l_428 ^ l_429), func_53(((l_432 = (void*)0) == l_433[0]), (*g_60)))) && 0xF1F1L) ^ ((7UL && l_434) != l_435[7][0][1])), g_71)))) ^ l_436[0][1][2]);

                    ;
                }
            }
        }
        for (g_71 = 0; (g_71 != 54); g_71 = safe_add_func_int16_t_s_s(g_71, 1))
        {
            short l_510 = 0x2AABL;
            unsigned short *l_515 = &l_35;
            int l_516 = 3L;
            l_516 ^= func_53((safe_lshift_func_int16_t_s_u((safe_lshift_func_int16_t_s_u(g_423[5], 9)), ((safe_add_func_uint32_t_u_u(((safe_add_func_uint32_t_u_u((g_509 == 0L), l_510)) | ((*l_515) ^= (func_53((0xE662965DL == ((safe_sub_func_int32_t_s_s(((**g_467) && (*p_32)), (*g_322))) & (safe_sub_func_int16_t_s_s(((**g_242) && g_423[2]), 0x38F6L)))), l_465[0]) & 253UL))), 0x912BDF9BL)) && 65532UL))), (*p_33));
            return (**g_242);
        }
        (*g_322) |= 0L;
    }

    ;
    if (((**g_242) <= 7UL))
    {
        unsigned short l_521[2][7][9] = {{{0x387DL, 0xB759L, 0x387DL, 65535UL, 0xBABCL, 2UL, 0x9181L, 0x7849L, 0UL}, {0x387DL, 0xB759L, 0x387DL, 65535UL, 0xBABCL, 2UL, 0x9181L, 0x7849L, 0UL}, {0x387DL, 0xB759L, 0x387DL, 65535UL, 0xBABCL, 2UL, 0x9181L, 0x7849L, 0UL}, {0x387DL, 0xB759L, 0x387DL, 65535UL, 0xBABCL, 2UL, 0x9181L, 0x7849L, 0UL}, {0x387DL, 0xB759L, 0x387DL, 65535UL, 0xBABCL, 2UL, 0x9181L, 0x7849L, 0UL}, {0x387DL, 0xB759L, 0x387DL, 65535UL, 0xBABCL, 2UL, 0x9181L, 0x7849L, 0UL}, {0x387DL, 0xB759L, 0x387DL, 65535UL, 0xBABCL, 2UL, 0x9181L, 0x7849L, 0UL}}, {{0x387DL, 0xB759L, 0x387DL, 65535UL, 0xBABCL, 2UL, 0x9181L, 0x7849L, 0UL}, {0x387DL, 0xB759L, 0x387DL, 65535UL, 0xBABCL, 2UL, 0x9181L, 0x7849L, 0UL}, {0x387DL, 0xB759L, 0x387DL, 65535UL, 0xBABCL, 2UL, 0x9181L, 0x7849L, 0UL}, {0x387DL, 0xB759L, 0x387DL, 65535UL, 0xBABCL, 2UL, 0x9181L, 0x7849L, 0UL}, {0x387DL, 0xB759L, 0x387DL, 65535UL, 0xBABCL, 2UL, 0x9181L, 0x7849L, 0UL}, {0x387DL, 0xB759L, 0x387DL, 65535UL, 0xBABCL, 2UL, 0x9181L, 0x7849L, 0UL}, {0x387DL, 0xB759L, 0x387DL, 65535UL, 0xBABCL, 2UL, 0x9181L, 0x7849L, 0UL}}};
        unsigned char *l_525 = &g_364;
        int *l_551 = &g_79;
        int i, j, k;
        for (g_85 = 0; (g_85 > (-30)); g_85 = safe_sub_func_uint16_t_u_u(g_85, 6))
        {
            short *l_519[1];
            int l_520 = (-1L);
            int l_522 = 0xF5864B6EL;
            unsigned char l_546 = 252UL;
            int i;
            for (i = 0; i < 1; i++)
                l_519[i] = &g_509;
        }
        return (*l_551);
    }
    else
    {
        char *l_563 = (void*)0;
        char *l_564 = &g_218;
        unsigned char l_565[3][5][1] = {{{6UL}, {6UL}, {6UL}, {6UL}, {6UL}}, {{6UL}, {6UL}, {6UL}, {6UL}, {6UL}}, {{6UL}, {6UL}, {6UL}, {6UL}, {6UL}}};
        int i, j, k;
        (*l_219) = ((safe_mul_func_int8_t_s_s(0x7CL, ((*l_564) = ((**g_467) &= (0L || (-1L)))))) ^ ((**g_89) = (*g_322)));
        return l_565[2][1][0];
    }
}







static unsigned char ** func_38(unsigned char * p_39)
{
    int **l_191[10][3] = {{(void*)0, (void*)0, &g_90[0]}, {(void*)0, (void*)0, &g_90[0]}, {(void*)0, (void*)0, &g_90[0]}, {(void*)0, (void*)0, &g_90[0]}, {(void*)0, (void*)0, &g_90[0]}, {(void*)0, (void*)0, &g_90[0]}, {(void*)0, (void*)0, &g_90[0]}, {(void*)0, (void*)0, &g_90[0]}, {(void*)0, (void*)0, &g_90[0]}, {(void*)0, (void*)0, &g_90[0]}};
    int i, j;
    for (g_24 = 0; (g_24 == 36); ++g_24)
    {
        int ***l_192 = (void*)0;
        int ***l_193[5] = {&l_191[4][1], &l_191[2][1], &l_191[4][1], &l_191[2][1], &l_191[4][1]};
        int i;
        l_191[3][1] = l_191[9][1];
    }
    (*g_89) = (*g_89);
    return &g_61[0][4];


}







static unsigned char * func_40(unsigned char * p_41, int p_42)
{
    unsigned char *l_150 = (void*)0;
    int l_156 = 4L;
    if (p_42)
    {
        int *l_149 = &g_79;
        (*g_89) = l_149;
        (*g_89) = (*g_89);
    }
    else
    {
        return l_150;


    }
    for (p_42 = 0; (p_42 >= 0); p_42 -= 1)
    {
        unsigned char *l_157 = &g_71;
        unsigned char l_175 = 1UL;
        int i;
        g_90[p_42] = g_90[p_42];
        for (g_24 = 0; (g_24 <= 0); g_24 += 1)
        {
            unsigned char *l_169 = &g_24;
            int l_179[8][9] = {{0x6E7BBDDAL, (-1L), 1L, 0L, 1L, (-1L), 0x6E7BBDDAL, 0L, 8L}, {0x6E7BBDDAL, (-1L), 1L, 0L, 1L, (-1L), 0x6E7BBDDAL, 0L, 8L}, {0x6E7BBDDAL, (-1L), 1L, 0L, 1L, (-1L), 0x6E7BBDDAL, 0L, 8L}, {0x6E7BBDDAL, (-1L), 1L, 0L, 1L, (-1L), 0x6E7BBDDAL, 0L, 8L}, {0x6E7BBDDAL, (-1L), 1L, 0L, 1L, (-1L), 0x6E7BBDDAL, 0L, 8L}, {0x6E7BBDDAL, (-1L), 1L, 0L, 1L, (-1L), 0x6E7BBDDAL, 0L, 8L}, {0x6E7BBDDAL, (-1L), 1L, 0L, 1L, (-1L), 0x6E7BBDDAL, 0L, 8L}, {0x6E7BBDDAL, (-1L), 1L, 0L, 1L, (-1L), 0x6E7BBDDAL, 0L, 8L}};
            int i, j;
        }
    }
    (**g_89) = p_42;
    return (*g_60);


}







static unsigned char * func_43(unsigned char p_44, int p_45, unsigned p_46)
{
    int **l_144 = &g_90[0];
    int ***l_145[7] = {&g_89, &g_89, &g_89, &g_89, &g_89, &g_89, &g_89};
    unsigned *l_146 = &g_112;
    unsigned **l_147 = &l_146;
    unsigned char *l_148 = &g_71;
    int i;
    (**l_144) ^= ((((g_89 = l_144) != &g_90[0]) ^ (((*l_147) = l_146) != (void*)0)) & p_44);

    ;
    return l_148;


}







static int func_53(short p_54, unsigned char * p_55)
{
    return g_77;
}







static short func_56(unsigned char ** p_57, unsigned short p_58, unsigned p_59)
{
    int *l_78[9] = {&g_79, &g_79, &g_79, &g_79, &g_79, &g_79, &g_79, &g_79, &g_79};
    int **l_80 = &l_78[5];
    int l_94 = 9L;
    unsigned char *l_129 = (void*)0;
    unsigned l_133 = 4294967286UL;
    int i;
lbl_114:
    (*l_80) = l_78[0];
    for (g_79 = 0; (g_79 <= 0); g_79 += 1)
    {
        char *l_84[3][8][7] = {{{&g_85, &g_85, &g_85, &g_85, &g_85, &g_85, (void*)0}, {&g_85, &g_85, &g_85, &g_85, &g_85, &g_85, (void*)0}, {&g_85, &g_85, &g_85, &g_85, &g_85, &g_85, (void*)0}, {&g_85, &g_85, &g_85, &g_85, &g_85, &g_85, (void*)0}, {&g_85, &g_85, &g_85, &g_85, &g_85, &g_85, (void*)0}, {&g_85, &g_85, &g_85, &g_85, &g_85, &g_85, (void*)0}, {&g_85, &g_85, &g_85, &g_85, &g_85, &g_85, (void*)0}, {&g_85, &g_85, &g_85, &g_85, &g_85, &g_85, (void*)0}}, {{&g_85, &g_85, &g_85, &g_85, &g_85, &g_85, (void*)0}, {&g_85, &g_85, &g_85, &g_85, &g_85, &g_85, (void*)0}, {&g_85, &g_85, &g_85, &g_85, &g_85, &g_85, (void*)0}, {&g_85, &g_85, &g_85, &g_85, &g_85, &g_85, (void*)0}, {&g_85, &g_85, &g_85, &g_85, &g_85, &g_85, (void*)0}, {&g_85, &g_85, &g_85, &g_85, &g_85, &g_85, (void*)0}, {&g_85, &g_85, &g_85, &g_85, &g_85, &g_85, (void*)0}, {&g_85, &g_85, &g_85, &g_85, &g_85, &g_85, (void*)0}}, {{&g_85, &g_85, &g_85, &g_85, &g_85, &g_85, (void*)0}, {&g_85, &g_85, &g_85, &g_85, &g_85, &g_85, (void*)0}, {&g_85, &g_85, &g_85, &g_85, &g_85, &g_85, (void*)0}, {&g_85, &g_85, &g_85, &g_85, &g_85, &g_85, (void*)0}, {&g_85, &g_85, &g_85, &g_85, &g_85, &g_85, (void*)0}, {&g_85, &g_85, &g_85, &g_85, &g_85, &g_85, (void*)0}, {&g_85, &g_85, &g_85, &g_85, &g_85, &g_85, (void*)0}, {&g_85, &g_85, &g_85, &g_85, &g_85, &g_85, (void*)0}}};
        int l_86 = 1L;
        int ***l_91 = &g_89;
        unsigned char *l_95[1][4];
        int l_96 = 0x13D96440L;
        int l_97[10][3][6] = {{{8L, 0x2D756AA3L, 0x37C05799L, (-8L), 0x4720AF82L, (-2L)}, {8L, 0x2D756AA3L, 0x37C05799L, (-8L), 0x4720AF82L, (-2L)}, {8L, 0x2D756AA3L, 0x37C05799L, (-8L), 0x4720AF82L, (-2L)}}, {{8L, 0x2D756AA3L, 0x37C05799L, (-8L), 0x4720AF82L, (-2L)}, {8L, 0x2D756AA3L, 0x37C05799L, (-8L), 0x4720AF82L, (-2L)}, {8L, 0x2D756AA3L, 0x37C05799L, (-8L), 0x4720AF82L, (-2L)}}, {{8L, 0x2D756AA3L, 0x37C05799L, (-8L), 0x4720AF82L, (-2L)}, {8L, 0x2D756AA3L, 0x37C05799L, (-8L), 0x4720AF82L, (-2L)}, {8L, 0x2D756AA3L, 0x37C05799L, (-8L), 0x4720AF82L, (-2L)}}, {{8L, 0x2D756AA3L, 0x37C05799L, (-8L), 0x4720AF82L, (-2L)}, {8L, 0x2D756AA3L, 0x37C05799L, (-8L), 0x4720AF82L, (-2L)}, {8L, 0x2D756AA3L, 0x37C05799L, (-8L), 0x4720AF82L, (-2L)}}, {{8L, 0x2D756AA3L, 0x37C05799L, (-8L), 0x4720AF82L, (-2L)}, {8L, 0x2D756AA3L, 0x37C05799L, (-8L), 0x4720AF82L, (-2L)}, {8L, 0x2D756AA3L, 0x37C05799L, (-8L), 0x4720AF82L, (-2L)}}, {{8L, 0x2D756AA3L, 0x37C05799L, (-8L), 0x4720AF82L, (-2L)}, {8L, 0x2D756AA3L, 0x37C05799L, (-8L), 0x4720AF82L, (-2L)}, {8L, 0x2D756AA3L, 0x37C05799L, (-8L), 0x4720AF82L, (-2L)}}, {{8L, 0x2D756AA3L, 0x37C05799L, (-8L), 0x4720AF82L, (-2L)}, {8L, 0x2D756AA3L, 0x37C05799L, (-8L), 0x4720AF82L, (-2L)}, {8L, 0x2D756AA3L, 0x37C05799L, (-8L), 0x4720AF82L, (-2L)}}, {{8L, 0x2D756AA3L, 0x37C05799L, (-8L), 0x4720AF82L, (-2L)}, {8L, 0x2D756AA3L, 0x37C05799L, (-8L), 0x4720AF82L, (-2L)}, {8L, 0x2D756AA3L, 0x37C05799L, (-8L), 0x4720AF82L, (-2L)}}, {{8L, 0x2D756AA3L, 0x37C05799L, (-8L), 0x4720AF82L, (-2L)}, {8L, 0x2D756AA3L, 0x37C05799L, (-8L), 0x4720AF82L, (-2L)}, {8L, 0x2D756AA3L, 0x37C05799L, (-8L), 0x4720AF82L, (-2L)}}, {{8L, 0x2D756AA3L, 0x37C05799L, (-8L), 0x4720AF82L, (-2L)}, {8L, 0x2D756AA3L, 0x37C05799L, (-8L), 0x4720AF82L, (-2L)}, {8L, 0x2D756AA3L, 0x37C05799L, (-8L), 0x4720AF82L, (-2L)}}};
        int l_98 = 7L;
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 4; j++)
                l_95[i][j] = &g_81;
        }
        (*l_80) = (*l_80);
        g_81 &= g_8[1];
        if ((l_98 = (safe_rshift_func_int8_t_s_u((l_86 = 0x85L), (safe_rshift_func_uint16_t_u_s((((g_85 = ((&l_78[7] == ((*l_91) = g_89)) > g_24)) >= p_59) != (((l_97[7][2][3] = (l_96 = (p_59 > ((safe_add_func_int32_t_s_s(((p_59 & g_79) || 1L), l_94)) ^ p_59)))) || (**l_80)) ^ 0xF2L)), p_59))))))
        {
            char *l_109[8] = {&g_85, &g_85, &g_85, &g_85, &g_85, &g_85, &g_85, &g_85};
            int l_113 = 1L;
            int i;
            for (l_94 = 0; (l_94 <= 0); l_94 += 1)
            {
                int l_110 = 7L;
                unsigned *l_111 = &g_112;
                int i, j;
                if (p_58)
                    break;
                if (p_58)
                    break;
                l_98 = (p_58 | (((safe_add_func_int8_t_s_s((safe_sub_func_int16_t_s_s(g_71, ((**g_89) & ((*l_111) = (safe_mod_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_s(g_71, 6)), (safe_mul_func_uint8_t_u_u((***l_91), ((&g_85 == l_109[1]) & l_110))))))))), p_58)) == 0x825BL) < p_59));
                if (l_113)
                    break;
            }
            if (p_59)
                continue;
            l_113 = (**l_80);
        }
        else
        {
            if (l_94)
                goto lbl_114;
        }
        l_97[7][2][3] = (***l_91);
    }
    (**l_80) |= (!((g_85 == (!p_58)) || g_24));
    if ((**g_89))
    {
        unsigned l_117 = 0UL;
        (**l_80) &= (safe_rshift_func_int8_t_s_u(g_77, l_117));
        return p_58;
    }
    else
    {
        char l_118 = 0x06L;
        unsigned short l_130 = 65526UL;
        int l_131 = 0x17AE6F46L;
        unsigned *l_132 = &g_112;
        int l_134 = 7L;
        char *l_143[3][3];
        int i, j;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
                l_143[i][j] = &g_85;
        }
        l_134 = (((l_118 < (((!(p_58 > ((*l_132) = (safe_sub_func_uint8_t_u_u((safe_add_func_uint8_t_u_u(l_118, ((safe_mul_func_uint16_t_u_u(g_85, g_8[4])) | (safe_mul_func_int8_t_s_s(((l_131 |= ((safe_mul_func_uint16_t_u_u((((**l_80) = p_59) & (func_62((*p_57), p_58, p_59, l_129) || l_118)), g_8[5])) || l_130)) | l_118), l_118))))), l_130))))) | l_133) < 9UL)) & g_8[1]) > 0x5E24L);
        l_131 = (safe_add_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s((safe_mod_func_int8_t_s_s(((**l_80) = ((safe_sub_func_uint8_t_u_u(((g_77 >= l_134) || (func_62((*g_60), func_62((*g_60), p_59, l_134, (*p_57)), ((**g_89) &= (((&l_134 == &l_131) || l_134) >= 0xF1547C54L)), (*g_60)) ^ l_118)), (-1L))) || l_130)), 0xC8L)), 3)), p_58));
        return l_118;
    }
}







static unsigned func_62(unsigned char * p_63, unsigned short p_64, int p_65, unsigned char * p_66)
{
    int l_72 = 0x7552F0C8L;
    unsigned *l_75 = (void*)0;
    int l_76 = 0xF5427E55L;
    g_71 |= p_64;
    l_72 = (p_66 == p_66);
    g_77 = (safe_add_func_uint32_t_u_u((l_76 &= (p_65 >= l_72)), (l_72 > (&g_61[0][4] != &p_63))));
    return g_8[0];
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_8[i], "g_8[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_24, "g_24", print_hash_value);
    transparent_crc(g_71, "g_71", print_hash_value);
    transparent_crc(g_77, "g_77", print_hash_value);
    transparent_crc(g_79, "g_79", print_hash_value);
    transparent_crc(g_81, "g_81", print_hash_value);
    transparent_crc(g_85, "g_85", print_hash_value);
    transparent_crc(g_112, "g_112", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_174[i], "g_174[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_176, "g_176", print_hash_value);
    transparent_crc(g_199, "g_199", print_hash_value);
    transparent_crc(g_218, "g_218", print_hash_value);
    transparent_crc(g_239, "g_239", print_hash_value);
    transparent_crc(g_293, "g_293", print_hash_value);
    transparent_crc(g_360, "g_360", print_hash_value);
    transparent_crc(g_364, "g_364", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_423[i], "g_423[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(g_458[i][j][k], "g_458[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_509, "g_509", print_hash_value);
    transparent_crc(g_542, "g_542", print_hash_value);
    transparent_crc(g_791, "g_791", print_hash_value);
    transparent_crc(g_798, "g_798", print_hash_value);
    transparent_crc(g_800, "g_800", print_hash_value);
    transparent_crc(g_1034, "g_1034", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
