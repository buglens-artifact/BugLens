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
   short f0;
   char f1;
   short f2;
};


static short g_24 = 0xDAD8L;
static struct S0 g_46[3] = {{1L,0x03L,0x5D06L}, {1L,0x03L,0x5D06L}, {1L,0x03L,0x5D06L}};
static int g_71[10] = {0x4E93343DL, 0x6FFBBA6FL, 0x4E93343DL, 0x6FFBBA6FL, 0x4E93343DL, 0x6FFBBA6FL, 0x4E93343DL, 0x6FFBBA6FL, 0x4E93343DL, 0x6FFBBA6FL};
static unsigned char g_174 = 0x46L;
static unsigned g_218 = 0x44F4403AL;
static short g_275 = 7L;
static int g_303 = 0L;
static int g_355[1] = {0x9F4AD453L};
static unsigned short g_363 = 0UL;
static unsigned g_503 = 0x6A880586L;
static short g_618 = 0x5326L;
static int g_700[1] = {(-1L)};
static int g_703 = 0xD3D898A2L;
static int g_799[7][2] = {{1L, 7L}, {1L, 7L}, {1L, 7L}, {1L, 7L}, {1L, 7L}, {1L, 7L}, {1L, 7L}};
static unsigned short g_917 = 65527UL;
static struct S0 g_1023 = {5L,-2L,0L};
static unsigned g_1118 = 0xD4D7146FL;



static struct S0 func_1(void);
static unsigned short func_2(int p_3, unsigned short p_4, unsigned short p_5, short p_6);
static int func_7(int p_8);
static unsigned func_11(int p_12, unsigned p_13, int p_14, struct S0 p_15, unsigned char p_16);
static char func_22(unsigned p_23);
static char func_29(unsigned short p_30, unsigned char p_31, int p_32, int p_33, unsigned char p_34);
static unsigned short func_35(struct S0 p_36, short p_37, int p_38);
static short func_40(int p_41, short p_42);
static unsigned char func_43(struct S0 p_44, int p_45);
static char func_52(char p_53, unsigned char p_54, short p_55, unsigned short p_56, int p_57);
static struct S0 func_1(void)
{
    unsigned l_17[6][1][1] = {{{0x566A9272L}}, {{0x566A9272L}}, {{0x566A9272L}}, {{0x566A9272L}}, {{0x566A9272L}}, {{0x566A9272L}}};
    struct S0 l_39 = {0xFBA2L,0L,0xBF7CL};
    int l_1258[7][3][5] = {{{1L, 7L, 1L, (-4L), (-2L)}, {1L, 7L, 1L, (-4L), (-2L)}, {1L, 7L, 1L, (-4L), (-2L)}}, {{1L, 7L, 1L, (-4L), (-2L)}, {1L, 7L, 1L, (-4L), (-2L)}, {1L, 7L, 1L, (-4L), (-2L)}}, {{1L, 7L, 1L, (-4L), (-2L)}, {1L, 7L, 1L, (-4L), (-2L)}, {1L, 7L, 1L, (-4L), (-2L)}}, {{1L, 7L, 1L, (-4L), (-2L)}, {1L, 7L, 1L, (-4L), (-2L)}, {1L, 7L, 1L, (-4L), (-2L)}}, {{1L, 7L, 1L, (-4L), (-2L)}, {1L, 7L, 1L, (-4L), (-2L)}, {1L, 7L, 1L, (-4L), (-2L)}}, {{1L, 7L, 1L, (-4L), (-2L)}, {1L, 7L, 1L, (-4L), (-2L)}, {1L, 7L, 1L, (-4L), (-2L)}}, {{1L, 7L, 1L, (-4L), (-2L)}, {1L, 7L, 1L, (-4L), (-2L)}, {1L, 7L, 1L, (-4L), (-2L)}}};
    unsigned l_1275 = 0xA98AF689L;
    char l_1276 = 0L;
    int i, j, k;
    l_1258[2][0][0] = ((func_2(func_7((safe_sub_func_uint32_t_u_u(func_11(l_17[4][0][0], ((((safe_sub_func_int8_t_s_s((safe_lshift_func_int8_t_s_s(func_22(g_24), 3)), 0x5DL)) & ((safe_rshift_func_uint8_t_u_u((((safe_lshift_func_int8_t_s_s(func_29(func_35(l_39, func_40(g_24, (l_39.f2 > (1L <= func_43(g_46[1], g_24)))), g_703), l_17[3][0][0], g_703, l_17[4][0][0], g_703), l_17[4][0][0])) || g_700[0]) < g_24), l_39.f0)) != (-4L))) <= g_618) && (-8L)), l_39.f1, l_39, l_17[3][0][0]), g_218))), l_39.f0, l_17[5][0][0], l_17[5][0][0]) >= l_1258[2][0][0]) <= l_1258[5][2][0]);
    l_1258[6][2][0] = (func_22(l_17[4][0][0]) == 0L);
    g_700[0] = 0x5D5B992CL;
    l_1258[2][0][3] = func_29((g_275 != func_35(g_46[1], l_39.f2, (safe_mod_func_int32_t_s_s((safe_mul_func_uint32_t_u_u(((-3L) ^ g_46[1].f1), (safe_mod_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s((safe_lshift_func_int8_t_s_s(((l_1258[0][1][4] >= ((((safe_add_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u(g_1118, (safe_lshift_func_uint16_t_u_u(l_39.f1, 2)))), l_1275)) ^ 0x71BDL) <= 4UL) && l_1276)) & g_799[3][0]), l_39.f2)), g_275)), 1UL)))), g_363)))), l_17[4][0][0], g_1023.f2, l_17[4][0][0], l_1276);
    return l_39;
}







static unsigned short func_2(int p_3, unsigned short p_4, unsigned short p_5, short p_6)
{
    char l_1241 = (-1L);
    int l_1248 = 6L;
    struct S0 l_1257[4] = {{-1L,-1L,7L}, {1L,-6L,-6L}, {-1L,-1L,7L}, {1L,-6L,-6L}};
    int i;
    l_1248 = func_29(((((((l_1241 || (safe_rshift_func_int16_t_s_u(((func_40((safe_mul_func_uint16_t_u_u(0xCAB9L, (0x10B7B09CL != (safe_mul_func_int16_t_s_s(p_6, l_1241))))), g_46[1].f0) || (func_35(g_1023, p_3, p_4) | g_24)) > g_275), 7))) < 0xFBE40DA8L) == g_71[2]) > 0x85L) || p_5) < (-3L)), g_799[2][1], p_3, g_700[0], p_3);
    for (g_363 = (-26); (g_363 >= 50); g_363 = safe_add_func_int8_t_s_s(g_363, 5))
    {
        l_1248 = func_35(g_46[1], (g_700[0] != g_1023.f2), func_40(((safe_lshift_func_int8_t_s_s((safe_div_func_uint32_t_u_u(g_799[3][1], 1UL)), 5)) | (safe_lshift_func_int16_t_s_s(0x49A1L, 12))), p_3));
        g_700[0] = g_71[2];
        if (g_618)
            continue;
    }
    l_1257[3] = l_1257[3];
    return g_799[3][1];
}







static int func_7(int p_8)
{
    unsigned l_947 = 4294967291UL;
    int l_959 = (-9L);
    int l_961 = 0x8C4A939DL;
    int l_962 = 0x2AB85803L;
    int l_963 = 0xC2D48C10L;
    int l_967[7][6] = {{(-1L), 0x560CC0F7L, 0xC6285197L, 0xB4A1C09CL, 5L, 0x6122C35CL}, {(-1L), 0x560CC0F7L, 0xC6285197L, 0xB4A1C09CL, 5L, 0x6122C35CL}, {(-1L), 0x560CC0F7L, 0xC6285197L, 0xB4A1C09CL, 5L, 0x6122C35CL}, {(-1L), 0x560CC0F7L, 0xC6285197L, 0xB4A1C09CL, 5L, 0x6122C35CL}, {(-1L), 0x560CC0F7L, 0xC6285197L, 0xB4A1C09CL, 5L, 0x6122C35CL}, {(-1L), 0x560CC0F7L, 0xC6285197L, 0xB4A1C09CL, 5L, 0x6122C35CL}, {(-1L), 0x560CC0F7L, 0xC6285197L, 0xB4A1C09CL, 5L, 0x6122C35CL}};
    struct S0 l_991 = {-1L,0xCCL,0x93B0L};
    unsigned l_1088 = 1UL;
    char l_1236 = 0xC0L;
    int i, j;
    if (l_947)
    {
        short l_948 = 1L;
        int l_949 = 2L;
        unsigned char l_950 = 247UL;
        int l_964 = (-3L);
        int l_968 = 0x67742791L;
        int l_969 = 0xA55320C2L;
        unsigned l_970[7][10] = {{5UL, 0x7CCB0CA1L, 0UL, 1UL, 0UL, 1UL, 0UL, 0x7CCB0CA1L, 5UL, 0xE27E2968L}, {5UL, 0x7CCB0CA1L, 0UL, 1UL, 0UL, 1UL, 0UL, 0x7CCB0CA1L, 5UL, 0xE27E2968L}, {5UL, 0x7CCB0CA1L, 0UL, 1UL, 0UL, 1UL, 0UL, 0x7CCB0CA1L, 5UL, 0xE27E2968L}, {5UL, 0x7CCB0CA1L, 0UL, 1UL, 0UL, 1UL, 0UL, 0x7CCB0CA1L, 5UL, 0xE27E2968L}, {5UL, 0x7CCB0CA1L, 0UL, 1UL, 0UL, 1UL, 0UL, 0x7CCB0CA1L, 5UL, 0xE27E2968L}, {5UL, 0x7CCB0CA1L, 0UL, 1UL, 0UL, 1UL, 0UL, 0x7CCB0CA1L, 5UL, 0xE27E2968L}, {5UL, 0x7CCB0CA1L, 0UL, 1UL, 0UL, 1UL, 0UL, 0x7CCB0CA1L, 5UL, 0xE27E2968L}};
        int i, j;
        --l_950;
        g_71[6] = (safe_mul_func_uint16_t_u_u(l_950, p_8));
        for (l_950 = 0; (l_950 <= 3); ++l_950)
        {
            unsigned l_957 = 0xA59C74F2L;
            int l_958[5];
            int l_966 = 1L;
            int l_973 = 1L;
            int i;
            for (i = 0; i < 5; i++)
                l_958[i] = 0x359B5569L;
            l_958[3] = l_957;
            for (p_8 = 0; (p_8 >= 0); p_8 -= 1)
            {
                int l_960 = 0xC4E5A262L;
                int l_965[7] = {0x96A11A08L, 4L, 0x96A11A08L, 4L, 0x96A11A08L, 4L, 0x96A11A08L};
                int i;
                l_970[2][8]++;
                if (g_700[p_8])
                    break;
                l_973 |= l_958[1];
                for (g_303 = 0; (g_303 <= 2); g_303 += 1)
                {
                    g_700[p_8] |= p_8;
                }
            }
        }
    }
    else
    {
        short l_974 = 0L;
        int l_975 = 0x4F0C8F96L;
        int l_976 = 5L;
        int l_977 = 0xDC3B13BCL;
        int l_978 = 0xCFA17B50L;
        int l_979 = 8L;
        int l_980[4];
        unsigned short l_981 = 0x6F30L;
        struct S0 l_1022 = {0L,1L,0L};
        struct S0 l_1091 = {-1L,1L,0x313FL};
        unsigned short l_1177 = 65533UL;
        int l_1192 = 3L;
        char l_1215 = (-1L);
        unsigned char l_1238 = 7UL;
        int i;
        for (i = 0; i < 4; i++)
            l_980[i] = (-1L);
        --l_981;
        if ((safe_mod_func_uint8_t_u_u(((safe_lshift_func_int8_t_s_s(((safe_mod_func_uint16_t_u_u((((safe_unary_minus_func_uint16_t_u(func_43(l_991, g_275))) && func_22(l_979)) || (safe_rshift_func_int16_t_s_s((safe_unary_minus_func_int8_t_s(g_174)), 15))), ((safe_add_func_uint32_t_u_u(4294967289UL, func_22(((safe_sub_func_int16_t_s_s(((safe_mul_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s(((safe_lshift_func_uint16_t_u_s((((safe_mul_func_uint16_t_u_u((((((((safe_lshift_func_int16_t_s_s((safe_sub_func_uint32_t_u_u(g_799[1][1], (0x4CB54D56L > l_976))), 7)) && 0x5BDB175DL) != 0L) != l_961) != l_947) | l_991.f1) > 0xDF77L), g_799[1][1])) < 4UL) && p_8), 12)) & p_8), g_24)), 12)), p_8)) >= l_980[0]), 0xF7E0L)) | l_977)))) || 0xCDAEL))) || p_8), 0)) && 2L), p_8)))
        {
            unsigned l_1019 = 4294967295UL;
            short l_1034 = 1L;
            struct S0 l_1037 = {0x58CCL,-9L,0x7BEAL};
            int l_1086[9][7] = {{9L, 0xD82B2FF8L, 0xBD23C639L, 0x4646694CL, (-1L), 1L, 0xAD6DA8F0L}, {9L, 0xD82B2FF8L, 0xBD23C639L, 0x4646694CL, (-1L), 1L, 0xAD6DA8F0L}, {9L, 0xD82B2FF8L, 0xBD23C639L, 0x4646694CL, (-1L), 1L, 0xAD6DA8F0L}, {9L, 0xD82B2FF8L, 0xBD23C639L, 0x4646694CL, (-1L), 1L, 0xAD6DA8F0L}, {9L, 0xD82B2FF8L, 0xBD23C639L, 0x4646694CL, (-1L), 1L, 0xAD6DA8F0L}, {9L, 0xD82B2FF8L, 0xBD23C639L, 0x4646694CL, (-1L), 1L, 0xAD6DA8F0L}, {9L, 0xD82B2FF8L, 0xBD23C639L, 0x4646694CL, (-1L), 1L, 0xAD6DA8F0L}, {9L, 0xD82B2FF8L, 0xBD23C639L, 0x4646694CL, (-1L), 1L, 0xAD6DA8F0L}, {9L, 0xD82B2FF8L, 0xBD23C639L, 0x4646694CL, (-1L), 1L, 0xAD6DA8F0L}};
            int i, j;
            if (((safe_lshift_func_int16_t_s_s(g_71[3], 1)) > ((safe_add_func_int32_t_s_s((l_1019 & (safe_div_func_uint16_t_u_u(l_1019, g_355[0]))), g_799[1][1])) | g_503)))
            {
                unsigned char l_1024 = 0xAEL;
                l_963 = (7UL >= 0x33L);
                l_963 |= l_979;
                g_1023 = l_1022;
                l_1024 = (-1L);
            }
            else
            {
                struct S0 l_1025 = {0xB8CAL,0x0FL,0L};
                struct S0 l_1061 = {0xD627L,0x4CL,0xD7DAL};
                int l_1087 = 0x65CE60F5L;
                if ((func_35(l_1025, ((safe_div_func_uint32_t_u_u(g_355[0], 1UL)) >= ((safe_lshift_func_int8_t_s_u((p_8 | (safe_rshift_func_int16_t_s_u(func_35(l_1022, ((p_8 != ((safe_rshift_func_uint16_t_u_s(func_40((p_8 ^ 0UL), func_35(l_1022, p_8, g_275)), g_218)) | g_700[0])) && p_8), g_174), l_1034))), g_1023.f2)) < g_46[1].f2)), p_8) & 0L))
                {
                    struct S0 l_1035 = {6L,1L,-10L};
                    for (l_959 = 0; (l_959 <= 0); l_959 += 1)
                    {
                        struct S0 l_1036 = {0xD35AL,0x6BL,0x139EL};
                        int i;
                        l_1036 = l_1035;
                        l_1037 = l_1025;
                        l_961 |= ((g_700[l_959] ^ (safe_mod_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_s((p_8 || g_71[2]), ((safe_div_func_uint8_t_u_u(g_703, ((0x805B8643L >= func_40(g_917, (safe_unary_minus_func_uint32_t_u((safe_add_func_int16_t_s_s(g_46[1].f2, (((safe_add_func_uint32_t_u_u((safe_mod_func_uint8_t_u_u(((((safe_lshift_func_uint16_t_u_s((safe_mod_func_int16_t_s_s((safe_add_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u(g_799[0][1], p_8)), p_8)), g_1023.f2)), g_46[1].f0)) && g_700[0]) <= 0L) <= p_8), l_1025.f0)), l_978)) || p_8) && 0L))))))) && 0x87F0L))) > p_8))), 0x312A88B4L))) >= 0xF99C9889L);
                    }
                    l_961 = ((0x69156320L > l_947) > (0x9A70L > 5UL));
                }
                else
                {
                    for (g_1023.f1 = 18; (g_1023.f1 < 19); g_1023.f1++)
                    {
                        g_46[2] = g_46[1];
                        g_46[1] = l_1061;
                        return g_799[1][1];
                    }
                }
                l_1086[8][4] = (safe_sub_func_uint8_t_u_u(g_1023.f0, func_22(((safe_sub_func_uint16_t_u_u(l_967[3][4], p_8)) > (safe_sub_func_uint16_t_u_u(((safe_sub_func_uint32_t_u_u((safe_div_func_int8_t_s_s((g_24 ^ (safe_mul_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u((l_991.f1 <= 0xB6L), ((safe_mul_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s((safe_sub_func_int32_t_s_s(l_981, (p_8 >= ((safe_lshift_func_int16_t_s_s((safe_add_func_uint32_t_u_u(p_8, (-1L))), g_174)) == l_947)))), l_1037.f2)), l_980[0])) && 0x38390ADCL))), l_1019))), g_1023.f0)), g_1023.f0)) > l_1025.f1), l_1037.f1))))));
                ++l_1088;
                if (g_275)
                {
                    unsigned char l_1094 = 1UL;
                    if (l_1086[5][1])
                    {
                        l_1087 ^= g_303;
                        g_46[0] = l_1091;
                    }
                    else
                    {
                        return g_46[1].f2;
                    }
                    for (l_974 = 0; (l_974 >= 5); ++l_974)
                    {
                        l_1087 = l_1094;
                    }
                    if (func_11(l_1022.f1, l_947, ((p_8 == ((p_8 | (safe_div_func_uint8_t_u_u(func_11((safe_rshift_func_uint8_t_u_u(g_917, ((p_8 | 0L) != p_8))), ((safe_mod_func_uint16_t_u_u(((safe_mul_func_int16_t_s_s(((~p_8) <= g_71[5]), l_980[0])) > l_1087), g_46[1].f2)) || l_1091.f0), p_8, g_1023, p_8), g_1023.f0))) || l_967[5][5])) > l_963), l_1037, g_1023.f1))
                    {
                        unsigned l_1107[3];
                        struct S0 l_1108 = {0x44B6L,-5L,0x45BBL};
                        int i;
                        for (i = 0; i < 3; i++)
                            l_1107[i] = 8UL;
                        l_1086[8][4] = ((0x9BL | 0xECL) == (func_11(l_1037.f2, ((safe_lshift_func_int16_t_s_u((l_978 <= (0xB1F53585L <= ((0x8A0B70FDL ^ ((safe_rshift_func_uint8_t_u_u((g_363 < 1L), g_1023.f2)) ^ p_8)) != 0x04L))), 2)) | 0x5B831425L), l_1107[0], l_1108, p_8) != 0xB47B2D3BL));
                        l_1087 = p_8;
                        g_1023 = l_1037;
                    }
                    else
                    {
                        struct S0 l_1109 = {0xE7CDL,1L,2L};
                        int l_1119 = 0L;
                        g_700[0] = func_35(l_1109, g_1023.f1, g_703);
                        l_959 = (func_43(l_1022, (+(l_1061.f1 >= g_703))) >= (((safe_mod_func_uint16_t_u_u((safe_mod_func_int32_t_s_s(p_8, (((safe_div_func_int8_t_s_s(func_22((0x1AL & (safe_mul_func_int8_t_s_s(g_1118, p_8)))), 1UL)) || 0x7981577BL) & g_24))), g_703)) && p_8) >= g_1118));
                        l_1119 = 0x3F9E8A10L;
                        l_975 = func_29(g_24, (1UL ^ (safe_add_func_int8_t_s_s(0x3EL, g_1023.f2))), l_963, (safe_lshift_func_uint8_t_u_s((g_1023.f1 > (safe_rshift_func_int8_t_s_u(1L, 0))), (((((((safe_rshift_func_int8_t_s_s(((0UL | l_1119) == l_1025.f0), 2)) == 0xD4L) && 9L) >= 0UL) ^ g_1118) <= g_1023.f2) || g_218))), p_8);
                    }
                    l_975 = (func_52(p_8, g_799[1][1], l_947, p_8, g_46[1].f0) <= (((g_917 | (safe_sub_func_int32_t_s_s(p_8, g_275))) >= p_8) != l_1094));
                }
                else
                {
                    l_1086[8][4] ^= (safe_mul_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s((!0x91L), g_703)), (p_8 || l_959)));
                }
            }
            for (g_363 = 7; (g_363 != 7); g_363 = safe_add_func_int8_t_s_s(g_363, 9))
            {
                unsigned char l_1136 = 255UL;
                if (l_981)
                {
                    g_46[1] = g_46[0];
                }
                else
                {
                    g_1023 = g_46[1];
                    l_1136 = p_8;
                }
                for (l_1034 = 4; (l_1034 >= 1); l_1034 -= 1)
                {
                    int i, j;
                    for (g_1023.f0 = 5; (g_1023.f0 >= 0); g_1023.f0 -= 1)
                    {
                        int i, j;
                        l_1086[(g_1023.f0 + 1)][l_1034] = l_1086[(g_1023.f0 + 1)][l_1034];
                    }
                    l_1086[3][3] = l_1086[l_1034][l_1034];
                    if (l_967[(l_1034 + 1)][(l_1034 + 1)])
                        continue;
                }
                g_703 |= 0x3B8F4F1EL;
                l_967[3][1] &= (g_218 <= p_8);
            }
            g_700[0] = l_1086[6][1];
            for (g_174 = 0; (g_174 <= 2); g_174 += 1)
            {
                l_1086[3][4] &= (safe_mul_func_int8_t_s_s(((safe_add_func_int16_t_s_s((safe_sub_func_uint16_t_u_u(0x7753L, (p_8 || (safe_add_func_uint32_t_u_u(g_363, ((+0xC5C8L) && 0L)))))), (p_8 > 0x2396L))) != (((func_35(g_1023, (((((5UL < p_8) && g_503) & 0x2CL) <= p_8) > p_8), g_46[1].f2) || l_967[5][0]) || p_8) > 0x1CA729DFL)), l_959));
            }
        }
        else
        {
            short l_1147 = 1L;
            int l_1156 = 7L;
            int l_1157[7] = {0x2A7F05C7L, 0x3AAD6CA8L, 0x2A7F05C7L, 0x3AAD6CA8L, 0x2A7F05C7L, 0x3AAD6CA8L, 0x2A7F05C7L};
            int i;
            l_1147 = (-7L);
            l_980[0] ^= (safe_lshift_func_int8_t_s_u(((0x05L & func_22(g_24)) == p_8), 3));
            l_1157[0] = (safe_mul_func_int8_t_s_s((-4L), ((((safe_rshift_func_uint16_t_u_s(((l_1147 > (safe_rshift_func_int16_t_s_s(((p_8 < p_8) || ((+((0L != ((p_8 & (g_46[1].f1 == (func_40(p_8, p_8) && l_981))) == 0x2AL)) == l_1147)) >= 0x596185C9L)), l_1147))) && g_917), g_46[1].f1)) >= l_1156) != l_1156) < l_976)));
        }
        for (g_1118 = 8; (g_1118 >= 31); g_1118++)
        {
            unsigned char l_1160 = 0x65L;
            int l_1194 = 0x01C2458FL;
            int l_1237[6] = {(-2L), 0xCF73DC3DL, (-2L), 0xCF73DC3DL, (-2L), 0xCF73DC3DL};
            int i;
            if (l_1160)
                break;
            if (((((safe_sub_func_uint8_t_u_u(p_8, ((func_43(l_1022, p_8) >= 248UL) ^ (0xAAL | (safe_mod_func_int32_t_s_s((safe_div_func_int32_t_s_s((((safe_mul_func_uint8_t_u_u(func_22(p_8), (!(safe_rshift_func_uint8_t_u_u(0x2BL, l_981))))) < 0x941AL) > l_1160), g_799[2][0])), p_8)))))) ^ p_8) < 0xE04DE8FEL) & 3UL))
            {
                short l_1178[6][7] = {{(-1L), 0x5172L, 1L, 3L, 0x2BDFL, 0x118EL, 0x2BDFL}, {(-1L), 0x5172L, 1L, 3L, 0x2BDFL, 0x118EL, 0x2BDFL}, {(-1L), 0x5172L, 1L, 3L, 0x2BDFL, 0x118EL, 0x2BDFL}, {(-1L), 0x5172L, 1L, 3L, 0x2BDFL, 0x118EL, 0x2BDFL}, {(-1L), 0x5172L, 1L, 3L, 0x2BDFL, 0x118EL, 0x2BDFL}, {(-1L), 0x5172L, 1L, 3L, 0x2BDFL, 0x118EL, 0x2BDFL}};
                struct S0 l_1181 = {1L,0xB4L,-7L};
                int l_1216[10] = {(-7L), 0x433C8B77L, (-7L), 0x433C8B77L, (-7L), 0x433C8B77L, (-7L), 0x433C8B77L, (-7L), 0x433C8B77L};
                int i, j;
                g_700[0] |= (safe_mul_func_int8_t_s_s(func_35(g_1023, (safe_div_func_uint16_t_u_u((g_275 || 0x5A6AL), func_52(g_703, (safe_mod_func_int16_t_s_s(p_8, l_1177)), ((0xBEF5C57EL > 4294967286UL) < (p_8 == g_218)), l_1160, l_1178[1][1]))), p_8), g_1023.f0));
                if ((safe_rshift_func_int8_t_s_u(0L, func_43(l_1181, g_503))))
                {
                    unsigned short l_1193 = 0xB237L;
                    unsigned short l_1217 = 1UL;
                    unsigned char l_1220[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_1220[i] = 0UL;
                    for (l_1022.f2 = (-10); (l_1022.f2 < 26); l_1022.f2++)
                    {
                        unsigned l_1191[10] = {0xA93E248CL, 0x93400090L, 0xA93E248CL, 0x93400090L, 0xA93E248CL, 0x93400090L, 0xA93E248CL, 0x93400090L, 0xA93E248CL, 0x93400090L};
                        int i;
                        g_703 &= func_35(g_46[1], (safe_rshift_func_uint8_t_u_s(((l_976 > (safe_unary_minus_func_uint16_t_u((g_46[1].f1 <= l_1091.f0)))) || ((func_22((l_1181.f0 > (safe_div_func_int32_t_s_s((l_991.f2 < ((((1UL | func_22((g_71[7] && ((func_40((g_46[1].f1 || l_978), l_1191[4]) | l_1192) == 0x9C893883L)))) <= l_1193) || p_8) == l_974)), l_1181.f1)))) != l_1160) || p_8)), 4)), g_618);
                        l_1194 ^= p_8;
                    }
                    if (g_303)
                    {
                        unsigned l_1195 = 0xCC480325L;
                        l_1195 = l_1181.f1;
                    }
                    else
                    {
                        unsigned char l_1208[8] = {1UL, 7UL, 1UL, 7UL, 1UL, 7UL, 1UL, 7UL};
                        struct S0 l_1223[4] = {{0xE241L,0x4AL,4L}, {2L,-1L,1L}, {0xE241L,0x4AL,4L}, {2L,-1L,1L}};
                        int i;
                        l_1194 = (safe_div_func_int32_t_s_s((safe_rshift_func_int16_t_s_u((safe_mul_func_int8_t_s_s(((safe_mul_func_int16_t_s_s((safe_sub_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s((g_503 >= p_8), l_1208[0])), (safe_mul_func_int8_t_s_s(((2L | (0x4E86L <= 1L)) ^ (safe_div_func_uint16_t_u_u(g_174, (safe_rshift_func_int8_t_s_u((((l_1208[0] == l_1022.f2) == l_981) <= p_8), l_1208[0]))))), 0xDFL)))), l_1208[0])) <= l_1177), 0x3EL)), 5)), g_71[2]));
                        ++l_1217;
                        --l_1220[0];
                        g_1023 = l_1223[3];
                    }
                    g_71[4] &= (g_355[0] | 0xC1DBA1E4L);
                    for (l_1022.f1 = 28; (l_1022.f1 <= 6); l_1022.f1 = safe_sub_func_uint8_t_u_u(l_1022.f1, 8))
                    {
                        if (l_980[0])
                            break;
                        return l_1181.f0;
                    }
                }
                else
                {
                    int l_1226 = 0xD697ADF9L;
                    l_1226 = ((l_1160 < l_1216[7]) & 0xAE708978L);
                    for (l_981 = (-15); (l_981 <= 42); l_981 = safe_add_func_int8_t_s_s(l_981, 8))
                    {
                        short l_1229[2][4][3] = {{{(-1L), 4L, 0xA2E7L}, {(-1L), 4L, 0xA2E7L}, {(-1L), 4L, 0xA2E7L}, {(-1L), 4L, 0xA2E7L}}, {{(-1L), 4L, 0xA2E7L}, {(-1L), 4L, 0xA2E7L}, {(-1L), 4L, 0xA2E7L}, {(-1L), 4L, 0xA2E7L}}};
                        struct S0 l_1230 = {0L,7L,0xB100L};
                        int i, j, k;
                        l_1229[1][0][1] &= p_8;
                        l_1230 = l_991;
                    }
                }
            }
            else
            {
                int l_1235[4][8][1] = {{{0L}, {0L}, {0L}, {0L}, {0L}, {0L}, {0L}, {0L}}, {{0L}, {0L}, {0L}, {0L}, {0L}, {0L}, {0L}, {0L}}, {{0L}, {0L}, {0L}, {0L}, {0L}, {0L}, {0L}, {0L}}, {{0L}, {0L}, {0L}, {0L}, {0L}, {0L}, {0L}, {0L}}};
                int i, j, k;
                l_1194 = (((0x68L != p_8) != (safe_mod_func_uint32_t_u_u(g_917, ((safe_lshift_func_uint16_t_u_s(((((l_959 != l_1160) <= p_8) && g_618) < l_1235[0][1][0]), 4)) | (func_29(g_1023.f1, p_8, l_1235[0][1][0], g_355[0], l_1236) != 1L))))) > g_218);
                l_1194 = 0x56E39F98L;
            }
            l_1238--;
            l_1237[1] &= p_8;
        }
        return p_8;
    }
    return p_8;
}







static unsigned func_11(int p_12, unsigned p_13, int p_14, struct S0 p_15, unsigned char p_16)
{
    unsigned l_852 = 0x78D72894L;
    unsigned short l_884[2][6] = {{0UL, 65530UL, 0UL, 65530UL, 0UL, 65530UL}, {0UL, 65530UL, 0UL, 65530UL, 0UL, 65530UL}};
    int l_889[10] = {0xBADC10D5L, 0xD6D5EEB4L, 0xFF451492L, 0xFF451492L, 0xD6D5EEB4L, 0xBADC10D5L, 0xD6D5EEB4L, 0xFF451492L, 0xFF451492L, 0xD6D5EEB4L};
    unsigned l_901 = 0UL;
    int l_906 = (-1L);
    int l_946 = 3L;
    int i, j;
    if (func_43(p_15, ((l_852 && g_71[2]) ^ 0L)))
    {
        unsigned l_857[1];
        struct S0 l_883 = {1L,0x4DL,0x83E5L};
        int l_890[7];
        int l_893 = 0L;
        unsigned short l_894 = 0x1A7AL;
        int i;
        for (i = 0; i < 1; i++)
            l_857[i] = 4294967295UL;
        for (i = 0; i < 7; i++)
            l_890[i] = (-1L);
        for (g_703 = (-24); (g_703 != (-16)); ++g_703)
        {
            int l_860 = 0x748B435BL;
            for (p_15.f2 = 2; (p_15.f2 >= 0); p_15.f2 -= 1)
            {
                unsigned l_882 = 4294967291UL;
                int i;
                if ((safe_sub_func_uint16_t_u_u((l_857[0] & (safe_add_func_uint8_t_u_u(l_860, g_355[0]))), ((safe_lshift_func_uint16_t_u_s((!(func_22((safe_lshift_func_int8_t_s_s((~(func_22(l_857[0]) & p_16)), 5))) >= g_799[1][1])), (safe_div_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_u((safe_add_func_uint16_t_u_u(((safe_div_func_int32_t_s_s(func_35(g_46[p_15.f2], g_363, g_303), g_503)) > 0xCC22D783L), 0x46F5L)), l_857[0])), 0xA0AEA4E6L)))) <= 0L))))
                {
                    struct S0 l_873 = {-1L,-9L,2L};
                    l_873 = p_15;
                    if (g_218)
                        continue;
                    g_700[0] &= (safe_add_func_uint8_t_u_u(g_363, (safe_mul_func_uint16_t_u_u(func_22(func_22(l_873.f0)), ((safe_sub_func_int32_t_s_s((7L >= g_303), 0x316EFCE9L)) && p_16)))));
                }
                else
                {
                    l_882 = (safe_sub_func_int8_t_s_s(0x16L, func_22(p_12)));
                    if (l_852)
                        continue;
                }
                p_14 &= (p_15.f1 == (((-1L) | (g_355[0] != g_24)) < p_15.f2));
                if (p_15.f0)
                    continue;
            }
            g_46[1] = l_883;
            l_884[0][4] = l_860;
        }
        for (l_883.f2 = 0; (l_883.f2 < 0); l_883.f2++)
        {
            return l_852;
        }
        for (g_24 = 0; (g_24 >= 25); g_24 = safe_add_func_int32_t_s_s(g_24, 3))
        {
            int l_891[4];
            short l_892 = 0x2DDEL;
            short l_902 = 0L;
            unsigned l_903 = 8UL;
            int i;
            for (i = 0; i < 4; i++)
                l_891[i] = 0x38649FCEL;
            --l_894;
            p_14 = (0x70F9F429L != (((func_52(((l_884[0][4] && ((((((safe_div_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u((p_15.f0 > p_15.f0), (l_890[5] && ((0L || 255UL) == (-1L))))), 255UL)) != g_363) ^ g_275) >= g_46[1].f1) ^ l_901) != (-4L))) | 8L), l_889[5], p_15.f0, l_857[0], g_355[0]) != l_894) <= 0L) == p_13));
            for (g_618 = 1; (g_618 <= 9); g_618 += 1)
            {
                int i;
                return l_889[g_618];
            }
            ++l_903;
        }
        l_890[5] = l_906;
    }
    else
    {
        unsigned l_907 = 0xB305C3ECL;
        int l_910[8] = {(-8L), (-8L), (-9L), (-8L), (-8L), (-9L), (-8L), (-8L)};
        int l_924 = 0L;
        char l_925[1][1][7];
        struct S0 l_941 = {0xB52EL,-1L,0xCFC5L};
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 1; j++)
            {
                for (k = 0; k < 7; k++)
                    l_925[i][j][k] = 0xE7L;
            }
        }
        l_907 |= g_799[6][0];
        p_14 ^= (safe_mul_func_int8_t_s_s((func_22(g_275) && l_910[6]), (safe_lshift_func_int8_t_s_u((safe_sub_func_int32_t_s_s((safe_div_func_int32_t_s_s((func_35(g_46[1], func_40((((((((((g_917 > ((g_700[0] > (safe_add_func_int8_t_s_s((((safe_mul_func_uint8_t_u_u(p_15.f0, (safe_sub_func_int8_t_s_s(g_355[0], ((0xADFFL || g_799[1][1]) || p_16))))) || p_13) | l_924), g_700[0]))) ^ 8L)) && 4294967294UL) < 65529UL) > l_907) == 0UL) != p_12) | p_16) < g_46[1].f2) == 0xAAL), l_925[0][0][0]), l_925[0][0][0]) < p_13), l_910[4])), 0L)), l_924))));
        if (p_13)
        {
            p_14 = (safe_sub_func_uint8_t_u_u((safe_div_func_int32_t_s_s(func_40(l_925[0][0][0], g_799[2][0]), ((safe_lshift_func_int8_t_s_s(((1UL > (((safe_div_func_int16_t_s_s(0x9B4EL, (g_46[1].f2 | ((!(safe_sub_func_int32_t_s_s(((safe_lshift_func_int16_t_s_u(g_46[1].f1, (l_925[0][0][0] & g_303))) ^ l_884[0][4]), 0L))) <= g_799[1][1])))) & 1UL) != 0x89CAL)) ^ g_174), g_700[0])) && 9UL))), (-4L)));
            return g_303;
        }
        else
        {
            for (p_15.f1 = 0; (p_15.f1 >= 0); p_15.f1 -= 1)
            {
                struct S0 l_940 = {0x132BL,0xE5L,0x9729L};
                int i;
                if (g_355[p_15.f1])
                {
                    return l_924;
                }
                else
                {
                    for (g_174 = 0; (g_174 <= 9); g_174 += 1)
                    {
                        l_940 = g_46[2];
                    }
                    l_941 = l_940;
                    if ((((-1L) ^ ((+(p_15.f1 > 1L)) != p_15.f2)) == (p_13 == p_13)))
                    {
                        int i;
                        l_889[(p_15.f1 + 1)] = g_355[p_15.f1];
                    }
                    else
                    {
                        p_14 = p_15.f1;
                    }
                    p_14 = g_46[1].f2;
                }
                g_700[0] ^= (!g_799[1][1]);
            }
        }
        g_71[4] ^= (safe_mod_func_uint8_t_u_u((((l_910[6] <= (0x46D1L ^ (l_906 && p_15.f1))) != 0x66L) < l_946), p_14));
    }
    return g_703;
}







static char func_22(unsigned p_23)
{
    return g_24;
}







static char func_29(unsigned short p_30, unsigned char p_31, int p_32, int p_33, unsigned char p_34)
{
    unsigned short l_740 = 0x8747L;
    int l_747 = 1L;
    struct S0 l_750 = {0x083CL,-1L,-2L};
    unsigned l_781 = 4294967295UL;
    int l_790 = 6L;
    struct S0 l_819 = {0xCFE4L,-1L,7L};
    p_33 ^= (safe_sub_func_int8_t_s_s(((safe_add_func_int32_t_s_s((0xE1L ^ (((safe_sub_func_int32_t_s_s(g_46[1].f1, (-4L))) < ((0UL > g_24) & l_740)) <= (safe_rshift_func_uint8_t_u_s((safe_mul_func_uint16_t_u_u(l_740, ((safe_lshift_func_uint16_t_u_u(l_740, 0)) == l_740))), 1)))), l_747)) < g_618), 0x5AL));
    p_32 = (safe_mul_func_int16_t_s_s(func_40(l_747, p_34), 0xC205L));
    if (func_43(l_750, g_46[1].f2))
    {
        char l_751 = 1L;
        g_700[0] ^= l_751;
    }
    else
    {
        int l_771[4] = {(-5L), 0x3FE6EE91L, (-5L), 0x3FE6EE91L};
        struct S0 l_821 = {0x4EA1L,7L,0xBFBAL};
        unsigned l_842[2];
        struct S0 l_851 = {0xBB36L,0x4BL,0x4506L};
        int i;
        for (i = 0; i < 2; i++)
            l_842[i] = 4294967295UL;
        for (p_30 = (-6); (p_30 <= 45); p_30++)
        {
            short l_772 = 0x953BL;
            struct S0 l_791[8] = {{0x17D9L,0x0BL,0x36AAL}, {0x17D9L,0x0BL,0x36AAL}, {0x17D9L,0x0BL,0x36AAL}, {0x17D9L,0x0BL,0x36AAL}, {0x17D9L,0x0BL,0x36AAL}, {0x17D9L,0x0BL,0x36AAL}, {0x17D9L,0x0BL,0x36AAL}, {0x17D9L,0x0BL,0x36AAL}};
            int l_818 = 0xD8E779ABL;
            int i;
            for (l_750.f2 = 25; (l_750.f2 > (-1)); l_750.f2--)
            {
                unsigned l_764[8] = {4294967290UL, 4294967290UL, 0x6480EF25L, 4294967290UL, 4294967290UL, 0x6480EF25L, 4294967290UL, 4294967290UL};
                int l_773 = 0xD1A472C9L;
                int i;
                for (l_750.f1 = (-19); (l_750.f1 > 26); l_750.f1++)
                {
                    int l_782 = 0x6FECE31EL;
                    for (l_747 = 2; (l_747 <= 9); l_747 += 1)
                    {
                        int i;
                        g_703 = (g_71[l_747] || 0xEE70B879L);
                    }
                    if (p_34)
                    {
                        g_700[0] = (safe_add_func_int16_t_s_s((248UL || func_52(g_503, g_700[0], p_33, (safe_rshift_func_int16_t_s_s(g_303, 1)), (safe_div_func_uint8_t_u_u(0x0AL, l_764[1])))), ((safe_rshift_func_int8_t_s_s(((safe_mod_func_uint32_t_u_u(((safe_sub_func_uint32_t_u_u((+p_33), 0xD7DC9CD3L)) | p_33), 7UL)) & p_32), p_34)) >= l_764[1])));
                        l_773 = func_52(l_771[1], p_32, l_772, func_52(l_764[5], p_30, p_30, (p_34 == g_700[0]), g_700[0]), l_771[1]);
                    }
                    else
                    {
                        short l_774[3];
                        int i;
                        for (i = 0; i < 3; i++)
                            l_774[i] = (-9L);
                        l_782 = (l_774[2] >= func_52((safe_add_func_int32_t_s_s((g_174 > (func_22((4294967289UL < p_31)) & (safe_div_func_uint32_t_u_u(0xFA5DE775L, 0x8B1BDCE5L)))), (safe_add_func_int32_t_s_s((p_30 || l_764[1]), p_31)))), l_750.f1, l_781, g_71[2], p_32));
                    }
                    if ((((((p_33 & g_618) >= (((safe_rshift_func_int16_t_s_s(func_43(g_46[1], (l_773 > (safe_unary_minus_func_uint16_t_u(g_703)))), func_22((safe_div_func_uint16_t_u_u((safe_add_func_int16_t_s_s(l_772, (((g_24 & (g_218 | l_782)) <= 0x72F8L) >= p_33))), l_782))))) && p_33) | p_34)) | l_772) < l_790) ^ p_32))
                    {
                        return g_275;
                    }
                    else
                    {
                        short l_798 = 0x67F6L;
                        l_773 |= func_35(l_791[0], (p_30 <= (65535UL ^ (-6L))), (safe_lshift_func_int8_t_s_s(l_782, func_35(g_46[1], l_771[0], l_791[0].f2))));
                        p_33 = l_764[4];
                        g_799[1][1] ^= (p_32 != ((safe_lshift_func_int8_t_s_u(g_700[0], l_798)) <= l_798));
                    }
                }
                l_747 ^= (safe_mul_func_uint8_t_u_u(l_771[3], p_31));
                l_818 &= (((safe_mod_func_uint8_t_u_u(l_791[0].f1, g_355[0])) == func_40(((safe_rshift_func_uint8_t_u_s(p_31, 5)) & (safe_lshift_func_int8_t_s_s((safe_lshift_func_int8_t_s_s((g_46[1].f2 == (!g_71[2])), (safe_rshift_func_int8_t_s_s(p_32, 4)))), (safe_div_func_int8_t_s_s((~(~l_764[1])), (safe_rshift_func_uint16_t_u_s(g_799[2][0], (safe_add_func_int32_t_s_s((65531UL < p_34), 0L))))))))), g_71[2])) ^ 0x66290F73L);
            }
            if (p_31)
            {
                struct S0 l_820 = {1L,0x83L,-1L};
                l_820 = l_819;
                for (l_781 = 0; (l_781 <= 0); l_781 += 1)
                {
                    l_821 = l_819;
                }
                for (l_821.f2 = 5; (l_821.f2 == (-16)); --l_821.f2)
                {
                    unsigned char l_824 = 255UL;
                    for (g_303 = 0; (g_303 <= 2); g_303 += 1)
                    {
                        p_32 = p_34;
                    }
                    if (g_174)
                        break;
                    for (g_363 = 0; (g_363 <= 2); g_363 += 1)
                    {
                        int i;
                        g_71[(g_363 + 5)] = l_820.f2;
                        l_824++;
                        p_33 = func_22(p_33);
                    }
                }
            }
            else
            {
                l_821 = l_821;
                for (g_174 = 0; (g_174 <= 9); g_174 += 1)
                {
                    l_821 = g_46[1];
                    g_703 = (safe_rshift_func_int16_t_s_u((safe_rshift_func_uint16_t_u_u(0xD432L, 14)), 1));
                }
                for (l_790 = 5; (l_790 > 14); l_790 = safe_add_func_uint16_t_u_u(l_790, 9))
                {
                    unsigned l_841 = 0x8E2FFEF6L;
                    p_33 = (p_31 ^ ((g_799[4][1] < (l_791[0].f2 <= (safe_add_func_int32_t_s_s((l_791[0].f1 != (((safe_mod_func_int16_t_s_s(func_22((+l_771[1])), (safe_add_func_uint32_t_u_u((safe_mod_func_int32_t_s_s(((func_40(p_32, l_841) <= p_30) ^ g_355[0]), 0x9BBF40C0L)), l_841)))) < 0UL) > 0xF916L)), g_218)))) == 0UL));
                }
                if (p_30)
                    continue;
            }
            if (p_32)
                continue;
        }
        p_33 = l_842[0];
        for (l_821.f0 = (-13); (l_821.f0 != (-7)); l_821.f0 = safe_add_func_int16_t_s_s(l_821.f0, 2))
        {
            for (l_747 = 0; (l_747 <= 17); l_747 = safe_add_func_int8_t_s_s(l_747, 7))
            {
                g_703 &= g_503;
                return p_34;
            }
        }
        g_71[1] ^= (p_30 & (safe_sub_func_uint16_t_u_u(p_30, (safe_mod_func_int8_t_s_s(p_34, (0x89L && func_35(l_851, p_30, g_799[4][0])))))));
    }
    return p_30;
}







static unsigned short func_35(struct S0 p_36, short p_37, int p_38)
{
    int l_733 = 0x3BA73F45L;
    l_733 |= g_174;
    return p_38;
}







static short func_40(int p_41, short p_42)
{
    short l_722 = 0x030DL;
    unsigned char l_731 = 0xA6L;
    int l_732 = 0x09AF2792L;
    l_732 |= (safe_sub_func_int16_t_s_s(((safe_div_func_int16_t_s_s((g_174 != (l_722 <= g_71[2])), p_41)) && 1L), (safe_mul_func_uint8_t_u_u(((g_700[0] ^ (((safe_mod_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u(l_722, (safe_sub_func_int8_t_s_s(p_41, (l_722 != g_218))))), g_303)) && 0xE0L) > g_355[0])) == l_722), l_731))));
    return l_731;
}







static unsigned char func_43(struct S0 p_44, int p_45)
{
    unsigned short l_62[3][9][9] = {{{65535UL, 6UL, 0UL, 0x09F3L, 1UL, 7UL, 0x24E1L, 0x9335L, 0x3BC6L}, {65535UL, 6UL, 0UL, 0x09F3L, 1UL, 7UL, 0x24E1L, 0x9335L, 0x3BC6L}, {65535UL, 6UL, 0UL, 0x09F3L, 1UL, 7UL, 0x24E1L, 0x9335L, 0x3BC6L}, {65535UL, 6UL, 0UL, 0x09F3L, 1UL, 7UL, 0x24E1L, 0x9335L, 0x3BC6L}, {65535UL, 6UL, 0UL, 0x09F3L, 1UL, 7UL, 0x24E1L, 0x9335L, 0x3BC6L}, {65535UL, 6UL, 0UL, 0x09F3L, 1UL, 7UL, 0x24E1L, 0x9335L, 0x3BC6L}, {65535UL, 6UL, 0UL, 0x09F3L, 1UL, 7UL, 0x24E1L, 0x9335L, 0x3BC6L}, {65535UL, 6UL, 0UL, 0x09F3L, 1UL, 7UL, 0x24E1L, 0x9335L, 0x3BC6L}, {65535UL, 6UL, 0UL, 0x09F3L, 1UL, 7UL, 0x24E1L, 0x9335L, 0x3BC6L}}, {{65535UL, 6UL, 0UL, 0x09F3L, 1UL, 7UL, 0x24E1L, 0x9335L, 0x3BC6L}, {65535UL, 6UL, 0UL, 0x09F3L, 1UL, 7UL, 0x24E1L, 0x9335L, 0x3BC6L}, {65535UL, 6UL, 0UL, 0x09F3L, 1UL, 7UL, 0x24E1L, 0x9335L, 0x3BC6L}, {65535UL, 6UL, 0UL, 0x09F3L, 1UL, 7UL, 0x24E1L, 0x9335L, 0x3BC6L}, {65535UL, 6UL, 0UL, 0x09F3L, 1UL, 7UL, 0x24E1L, 0x9335L, 0x3BC6L}, {65535UL, 6UL, 0UL, 0x09F3L, 1UL, 7UL, 0x24E1L, 0x9335L, 0x3BC6L}, {65535UL, 6UL, 0UL, 0x09F3L, 1UL, 7UL, 0x24E1L, 0x9335L, 0x3BC6L}, {65535UL, 6UL, 0UL, 0x09F3L, 1UL, 7UL, 0x24E1L, 0x9335L, 0x3BC6L}, {65535UL, 6UL, 0UL, 0x09F3L, 1UL, 7UL, 0x24E1L, 0x9335L, 0x3BC6L}}, {{65535UL, 6UL, 0UL, 0x09F3L, 1UL, 7UL, 0x24E1L, 0x9335L, 0x3BC6L}, {65535UL, 6UL, 0UL, 0x09F3L, 1UL, 7UL, 0x24E1L, 0x9335L, 0x3BC6L}, {65535UL, 6UL, 0UL, 0x09F3L, 1UL, 7UL, 0x24E1L, 0x9335L, 0x3BC6L}, {65535UL, 6UL, 0UL, 0x09F3L, 1UL, 7UL, 0x24E1L, 0x9335L, 0x3BC6L}, {65535UL, 6UL, 0UL, 0x09F3L, 1UL, 7UL, 0x24E1L, 0x9335L, 0x3BC6L}, {65535UL, 6UL, 0UL, 0x09F3L, 1UL, 7UL, 0x24E1L, 0x9335L, 0x3BC6L}, {65535UL, 6UL, 0UL, 0x09F3L, 1UL, 7UL, 0x24E1L, 0x9335L, 0x3BC6L}, {65535UL, 6UL, 0UL, 0x09F3L, 1UL, 7UL, 0x24E1L, 0x9335L, 0x3BC6L}, {65535UL, 6UL, 0UL, 0x09F3L, 1UL, 7UL, 0x24E1L, 0x9335L, 0x3BC6L}}};
    int l_451 = (-3L);
    int l_470 = (-1L);
    int l_471 = 0xA47AF283L;
    int l_473 = (-3L);
    int l_480 = 0x100C7D1CL;
    int l_482 = 0x8E5C578DL;
    int l_483 = 0x46B111D1L;
    struct S0 l_512 = {0x717BL,0x51L,3L};
    unsigned l_524 = 1UL;
    int l_525 = (-4L);
    int l_526 = 0xB34183E6L;
    int l_527 = 0xB4E82D96L;
    int l_528[2];
    unsigned l_529 = 3UL;
    unsigned l_570 = 5UL;
    short l_581 = 8L;
    int l_617 = 0x3B9253CDL;
    struct S0 l_716 = {0x9506L,7L,0xA743L};
    struct S0 l_717 = {0x4DB0L,0x64L,0L};
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_528[i] = (-1L);
    if (((((safe_mul_func_int8_t_s_s(((safe_add_func_uint16_t_u_u(((((safe_unary_minus_func_uint32_t_u(1UL)) & func_52((safe_add_func_int32_t_s_s(0x2BE76DCBL, (p_45 || p_44.f2))), g_24, p_45, g_46[1].f1, (safe_rshift_func_int8_t_s_u((-1L), l_62[1][6][0])))) <= g_275) != l_62[1][6][0]), p_44.f2)) & 0x4882L), 0L)) == p_44.f0) == 0xF58EE165L) > g_24))
    {
        char l_434[3][9][9] = {{{(-3L), 0x2DL, 0x58L, 0xF9L, 0x77L, 0x03L, 1L, 0L, (-5L)}, {(-3L), 0x2DL, 0x58L, 0xF9L, 0x77L, 0x03L, 1L, 0L, (-5L)}, {(-3L), 0x2DL, 0x58L, 0xF9L, 0x77L, 0x03L, 1L, 0L, (-5L)}, {(-3L), 0x2DL, 0x58L, 0xF9L, 0x77L, 0x03L, 1L, 0L, (-5L)}, {(-3L), 0x2DL, 0x58L, 0xF9L, 0x77L, 0x03L, 1L, 0L, (-5L)}, {(-3L), 0x2DL, 0x58L, 0xF9L, 0x77L, 0x03L, 1L, 0L, (-5L)}, {(-3L), 0x2DL, 0x58L, 0xF9L, 0x77L, 0x03L, 1L, 0L, (-5L)}, {(-3L), 0x2DL, 0x58L, 0xF9L, 0x77L, 0x03L, 1L, 0L, (-5L)}, {(-3L), 0x2DL, 0x58L, 0xF9L, 0x77L, 0x03L, 1L, 0L, (-5L)}}, {{(-3L), 0x2DL, 0x58L, 0xF9L, 0x77L, 0x03L, 1L, 0L, (-5L)}, {(-3L), 0x2DL, 0x58L, 0xF9L, 0x77L, 0x03L, 1L, 0L, (-5L)}, {(-3L), 0x2DL, 0x58L, 0xF9L, 0x77L, 0x03L, 1L, 0L, (-5L)}, {(-3L), 0x2DL, 0x58L, 0xF9L, 0x77L, 0x03L, 1L, 0L, (-5L)}, {(-3L), 0x2DL, 0x58L, 0xF9L, 0x77L, 0x03L, 1L, 0L, (-5L)}, {(-3L), 0x2DL, 0x58L, 0xF9L, 0x77L, 0x03L, 1L, 0L, (-5L)}, {(-3L), 0x2DL, 0x58L, 0xF9L, 0x77L, 0x03L, 1L, 0L, (-5L)}, {(-3L), 0x2DL, 0x58L, 0xF9L, 0x77L, 0x03L, 1L, 0L, (-5L)}, {(-3L), 0x2DL, 0x58L, 0xF9L, 0x77L, 0x03L, 1L, 0L, (-5L)}}, {{(-3L), 0x2DL, 0x58L, 0xF9L, 0x77L, 0x03L, 1L, 0L, (-5L)}, {(-3L), 0x2DL, 0x58L, 0xF9L, 0x77L, 0x03L, 1L, 0L, (-5L)}, {(-3L), 0x2DL, 0x58L, 0xF9L, 0x77L, 0x03L, 1L, 0L, (-5L)}, {(-3L), 0x2DL, 0x58L, 0xF9L, 0x77L, 0x03L, 1L, 0L, (-5L)}, {(-3L), 0x2DL, 0x58L, 0xF9L, 0x77L, 0x03L, 1L, 0L, (-5L)}, {(-3L), 0x2DL, 0x58L, 0xF9L, 0x77L, 0x03L, 1L, 0L, (-5L)}, {(-3L), 0x2DL, 0x58L, 0xF9L, 0x77L, 0x03L, 1L, 0L, (-5L)}, {(-3L), 0x2DL, 0x58L, 0xF9L, 0x77L, 0x03L, 1L, 0L, (-5L)}, {(-3L), 0x2DL, 0x58L, 0xF9L, 0x77L, 0x03L, 1L, 0L, (-5L)}}};
        int l_468 = 0x43964D85L;
        int l_472[1];
        unsigned l_523[7][1] = {{4294967294UL}, {4294967294UL}, {4294967294UL}, {4294967294UL}, {4294967294UL}, {4294967294UL}, {4294967294UL}};
        unsigned short l_535 = 0xC7DCL;
        struct S0 l_588 = {0L,0x18L,0x6E77L};
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_472[i] = 0xBABC1C82L;
        if (((safe_lshift_func_uint8_t_u_u((safe_mul_func_int16_t_s_s(l_62[1][6][0], (p_44.f2 == ((l_434[2][6][3] ^ 0UL) < (!0x32L))))), 1)) ^ (safe_rshift_func_uint8_t_u_s(g_275, l_62[1][6][0]))))
        {
            short l_440 = 0L;
            int l_474 = (-1L);
            int l_476[10] = {0x8C5BE1E5L, 0xDDAE5411L, 0x8C5BE1E5L, 0xDDAE5411L, 0x8C5BE1E5L, 0xDDAE5411L, 0x8C5BE1E5L, 0xDDAE5411L, 0x8C5BE1E5L, 0xDDAE5411L};
            int i;
            if (g_363)
            {
                unsigned l_437[1][10][10] = {{{0x595B1DCFL, 0UL, 0x244248F9L, 0xC9D43066L, 4294967295UL, 0xC9D43066L, 0x244248F9L, 0UL, 0x595B1DCFL, 0x22B0D939L}, {0x595B1DCFL, 0UL, 0x244248F9L, 0xC9D43066L, 4294967295UL, 0xC9D43066L, 0x244248F9L, 0UL, 0x595B1DCFL, 0x22B0D939L}, {0x595B1DCFL, 0UL, 0x244248F9L, 0xC9D43066L, 4294967295UL, 0xC9D43066L, 0x244248F9L, 0UL, 0x595B1DCFL, 0x22B0D939L}, {0x595B1DCFL, 0UL, 0x244248F9L, 0xC9D43066L, 4294967295UL, 0xC9D43066L, 0x244248F9L, 0UL, 0x595B1DCFL, 0x22B0D939L}, {0x595B1DCFL, 0UL, 0x244248F9L, 0xC9D43066L, 4294967295UL, 0xC9D43066L, 0x244248F9L, 0UL, 0x595B1DCFL, 0x22B0D939L}, {0x595B1DCFL, 0UL, 0x244248F9L, 0xC9D43066L, 4294967295UL, 0xC9D43066L, 0x244248F9L, 0UL, 0x595B1DCFL, 0x22B0D939L}, {0x595B1DCFL, 0UL, 0x244248F9L, 0xC9D43066L, 4294967295UL, 0xC9D43066L, 0x244248F9L, 0UL, 0x595B1DCFL, 0x22B0D939L}, {0x595B1DCFL, 0UL, 0x244248F9L, 0xC9D43066L, 4294967295UL, 0xC9D43066L, 0x244248F9L, 0UL, 0x595B1DCFL, 0x22B0D939L}, {0x595B1DCFL, 0UL, 0x244248F9L, 0xC9D43066L, 4294967295UL, 0xC9D43066L, 0x244248F9L, 0UL, 0x595B1DCFL, 0x22B0D939L}, {0x595B1DCFL, 0UL, 0x244248F9L, 0xC9D43066L, 4294967295UL, 0xC9D43066L, 0x244248F9L, 0UL, 0x595B1DCFL, 0x22B0D939L}}};
                int i, j, k;
                return l_437[0][2][4];
            }
            else
            {
                short l_466 = 0L;
                int l_469 = 0x245DA1EAL;
                int l_475 = 0x7935D3C5L;
                int l_478 = 0x64A99CD7L;
                int l_481 = (-7L);
                int l_484 = 0xBDBC0046L;
                unsigned l_492 = 0x3F8CB9DBL;
                if ((safe_sub_func_uint8_t_u_u((func_22(p_44.f2) & l_440), ((safe_sub_func_uint8_t_u_u(g_355[0], (safe_add_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_s(((safe_lshift_func_int16_t_s_s(((((safe_lshift_func_int16_t_s_u(l_62[1][6][0], 12)) < (func_22(g_363) == 0L)) && ((p_45 > p_44.f0) != l_451)) < 4294967295UL), 12)) || l_434[1][1][1]), l_62[1][6][0])), 0UL)))) > p_44.f0))))
                {
                    return g_355[0];
                }
                else
                {
                    int l_465 = 0L;
                    int l_477 = 1L;
                    int l_479[4][1][9] = {{{1L, (-1L), 0x14A1338BL, 0x14A1338BL, (-1L), 1L, (-1L), 0x14A1338BL, 0x14A1338BL}}, {{1L, (-1L), 0x14A1338BL, 0x14A1338BL, (-1L), 1L, (-1L), 0x14A1338BL, 0x14A1338BL}}, {{1L, (-1L), 0x14A1338BL, 0x14A1338BL, (-1L), 1L, (-1L), 0x14A1338BL, 0x14A1338BL}}, {{1L, (-1L), 0x14A1338BL, 0x14A1338BL, (-1L), 1L, (-1L), 0x14A1338BL, 0x14A1338BL}}};
                    int i, j, k;
                    if ((safe_lshift_func_int8_t_s_s((p_44.f1 == ((g_303 || 0x3AL) < func_22((!p_45)))), (safe_sub_func_uint16_t_u_u(g_303, (safe_sub_func_int16_t_s_s((g_71[2] && (safe_mod_func_int8_t_s_s(0xD7L, (safe_rshift_func_int16_t_s_s((safe_mul_func_int16_t_s_s(p_44.f2, l_440)), 2))))), g_355[0])))))))
                    {
                        g_71[2] = l_434[2][6][3];
                        g_71[0] = 0L;
                        return g_46[1].f2;
                    }
                    else
                    {
                        int l_464 = 0xBB7C56CBL;
                        int l_467[1][4] = {{0x6BC236DAL, (-6L), 0x6BC236DAL, (-6L)}};
                        unsigned short l_485 = 9UL;
                        int i, j;
                        ++l_485;
                    }
                    g_71[2] = (func_22(l_479[1][0][8]) & p_45);
                    for (l_470 = (-7); (l_470 == 14); l_470 = safe_add_func_uint8_t_u_u(l_470, 2))
                    {
                        return p_44.f0;
                    }
                    for (p_44.f1 = 0; (p_44.f1 <= (-26)); --p_44.f1)
                    {
                        l_492 = 1L;
                    }
                }
                for (p_45 = 0; (p_45 <= 0); p_45 += 1)
                {
                    int i;
                    l_472[p_45] &= (safe_rshift_func_uint8_t_u_u(0x66L, 5));
                    if ((safe_rshift_func_uint16_t_u_u((((safe_add_func_int16_t_s_s((safe_lshift_func_int8_t_s_s((-1L), (safe_mul_func_uint8_t_u_u((g_71[(p_45 + 9)] & g_355[p_45]), p_45)))), g_218)) || (((+g_71[2]) == 0xB134L) == (p_44.f0 <= func_22(p_45)))) < p_45), 13)))
                    {
                        short l_511[10] = {0x095BL, (-8L), 0x095BL, (-8L), 0x095BL, (-8L), 0x095BL, (-8L), 0x095BL, (-8L)};
                        int i;
                        g_503 |= (g_71[2] & 65526UL);
                        p_44 = g_46[0];
                        l_472[p_45] = (safe_mul_func_uint8_t_u_u((g_355[p_45] | (l_466 > (safe_lshift_func_uint16_t_u_u((safe_unary_minus_func_int32_t_s(((safe_mul_func_int8_t_s_s(p_44.f1, g_46[1].f0)) || func_22(l_481)))), 15)))), 0xC1L));
                        if (l_511[3])
                            break;
                    }
                    else
                    {
                        l_512 = p_44;
                        l_474 = 9L;
                    }
                    for (p_44.f0 = 20; (p_44.f0 < 28); p_44.f0++)
                    {
                        char l_517 = 0xD8L;
                        l_468 = (g_24 & (safe_add_func_int16_t_s_s((p_44.f2 <= (~l_517)), func_22(l_483))));
                    }
                }
            }
        }
        else
        {
            struct S0 l_518[8] = {{-1L,0L,0x44EEL}, {-1L,0L,0x44EEL}, {0x9FE0L,-1L,5L}, {-1L,0L,0x44EEL}, {-1L,0L,0x44EEL}, {0x9FE0L,-1L,5L}, {-1L,0L,0x44EEL}, {-1L,0L,0x44EEL}};
            int i;
            for (l_473 = 0; (l_473 <= 2); l_473 += 1)
            {
                for (l_483 = 2; (l_483 >= 0); l_483 -= 1)
                {
                    for (l_451 = 0; (l_451 <= 2); l_451 += 1)
                    {
                        return p_44.f0;
                    }
                    p_44 = g_46[1];
                    p_45 = 0xD6788AE8L;
                    for (g_275 = 2; (g_275 >= 0); g_275 -= 1)
                    {
                        return g_275;
                    }
                    for (g_275 = 0; (g_275 <= 2); g_275 += 1)
                    {
                        if (g_503)
                            break;
                        g_46[1] = l_518[3];
                        return g_174;
                    }
                }
                return g_303;
            }
            l_525 = (func_22(g_355[0]) | (safe_lshift_func_uint16_t_u_s(p_44.f1, (safe_add_func_uint32_t_u_u(l_523[3][0], (((6UL == l_524) & (p_44.f1 == func_22(func_22(p_45)))) == g_71[2]))))));
        }
        l_529++;
        if (p_44.f0)
        {
            return l_523[3][0];
        }
        else
        {
            unsigned l_541 = 0x9F30CE9AL;
            for (l_512.f2 = 0; (l_512.f2 <= 0); l_512.f2 += 1)
            {
                for (g_303 = 0; (g_303 <= 0); g_303 += 1)
                {
                    unsigned l_532 = 1UL;
                    int i, j;
                    for (g_174 = 0; (g_174 <= 0); g_174 += 1)
                    {
                        int i, j;
                        g_46[(g_174 + 1)] = g_46[g_303];
                        p_45 |= l_523[g_303][g_303];
                        l_532++;
                    }
                    if (l_523[(l_512.f2 + 6)][l_512.f2])
                        break;
                    l_535 = 0L;
                }
                for (l_451 = 0; (l_451 <= 2); l_451 += 1)
                {
                    unsigned char l_538 = 1UL;
                    g_71[0] = (safe_mul_func_int16_t_s_s(l_538, ((safe_sub_func_uint8_t_u_u(g_174, 4UL)) >= ((func_22(l_541) ^ func_22(p_44.f0)) <= (-7L)))));
                }
            }
            for (l_482 = 0; (l_482 <= 4); ++l_482)
            {
                return g_46[1].f0;
            }
            l_528[0] = ((l_483 <= ((safe_add_func_int8_t_s_s(p_44.f1, (((!(safe_mul_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u((1L && g_303), (safe_mod_func_uint32_t_u_u(4294967292UL, (-1L))))), ((safe_sub_func_uint32_t_u_u(((safe_div_func_uint16_t_u_u(0x1510L, (l_525 | (1L | g_71[2])))) < g_46[1].f1), l_434[2][6][3])) | 0xDEB069CEL)))) >= 0L) & p_44.f1))) != 0L)) > 0x1DL);
            for (p_44.f1 = (-30); (p_44.f1 != (-1)); p_44.f1 = safe_add_func_int16_t_s_s(p_44.f1, 4))
            {
                struct S0 l_564 = {0x0304L,-3L,6L};
                for (l_525 = 0; (l_525 < 24); l_525 = safe_add_func_int16_t_s_s(l_525, 8))
                {
                    g_71[2] = g_71[0];
                    for (l_471 = 0; (l_471 != 21); l_471 = safe_add_func_uint32_t_u_u(l_471, 4))
                    {
                        l_564 = p_44;
                        g_71[2] ^= (((((safe_unary_minus_func_uint16_t_u((!g_46[1].f0))) <= (safe_mod_func_uint32_t_u_u(3UL, func_22(func_22(g_355[0]))))) && l_541) > ((((~3UL) ^ (-10L)) != (((safe_rshift_func_int16_t_s_s((g_355[0] ^ g_303), 9)) != 0xFB33L) >= 0x6BA5699BL)) | 0x6DBDL)) < 0L);
                        ++l_570;
                    }
                    for (l_527 = 0; (l_527 == (-18)); --l_527)
                    {
                        g_46[1] = g_46[1];
                        if (l_564.f2)
                            break;
                        p_45 &= (g_275 <= (p_44.f1 != l_564.f1));
                        p_45 = (0xC741L ^ (safe_sub_func_int8_t_s_s((safe_div_func_uint8_t_u_u(0xE6L, func_52((safe_lshift_func_uint8_t_u_u(g_218, 6)), g_71[2], l_523[3][0], p_44.f1, (l_581 == (safe_sub_func_int16_t_s_s(((safe_mod_func_uint8_t_u_u((safe_div_func_int32_t_s_s((g_303 == ((0x2789L <= g_46[1].f1) || 0x1BD2L)), g_71[2])), p_44.f2)) >= p_44.f1), p_44.f0)))))), 0x05L)));
                    }
                }
                return p_44.f1;
            }
        }
        p_44 = l_588;
    }
    else
    {
        int l_593 = 1L;
        int l_645 = 1L;
        char l_656 = 0L;
        l_593 = (safe_rshift_func_uint16_t_u_s(p_44.f2, ((g_355[0] == l_593) & (l_593 >= func_22(g_503)))));
        for (p_44.f0 = 0; (p_44.f0 < 19); p_44.f0 = safe_add_func_uint8_t_u_u(p_44.f0, 8))
        {
            short l_596[3][9] = {{(-3L), 0L, (-3L), 0L, (-3L), 0L, (-3L), 0L, (-3L)}, {(-3L), 0L, (-3L), 0L, (-3L), 0L, (-3L), 0L, (-3L)}, {(-3L), 0L, (-3L), 0L, (-3L), 0L, (-3L), 0L, (-3L)}};
            char l_597 = (-6L);
            int i, j;
            if (l_596[1][3])
            {
                l_597 &= p_45;
            }
            else
            {
                if ((p_45 ^ (g_303 || ((p_45 && l_593) <= (safe_rshift_func_int8_t_s_u(l_597, 5))))))
                {
                    g_71[8] &= func_22((p_45 == ((safe_mul_func_uint8_t_u_u(func_22(g_46[1].f1), (p_44.f2 >= 0x12C65612L))) || (l_524 < g_363))));
                    l_593 &= ((p_44.f1 <= (-1L)) | g_303);
                }
                else
                {
                    for (l_597 = 0; (l_597 != 27); l_597++)
                    {
                        return l_593;
                    }
                }
                return p_45;
            }
            return g_363;
        }
        p_45 = (g_46[1].f0 < func_22(((safe_mod_func_int16_t_s_s((((((safe_mod_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u(((safe_unary_minus_func_int32_t_s((l_512.f2 <= l_482))) > (safe_lshift_func_int8_t_s_u((safe_sub_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u((0xB743L <= 65535UL), l_617)), func_22(g_618))), 4))), (g_355[0] <= l_593))), (-1L))) ^ p_45) <= 1UL) >= g_46[1].f2) | p_44.f0), p_44.f1)) > 4UL)));
        if (func_22(((g_503 >= (safe_mod_func_int32_t_s_s(g_174, func_22(g_46[1].f2)))) < (safe_rshift_func_uint8_t_u_s(func_22((safe_sub_func_int16_t_s_s(l_528[0], (((safe_sub_func_uint16_t_u_u((((safe_sub_func_int16_t_s_s((safe_add_func_int16_t_s_s((safe_div_func_int32_t_s_s(((~g_174) | g_275), 0x98C4CC30L)), p_44.f0)), 0x2F26L)) <= g_46[1].f0) && 0x81BAL), p_45)) > g_71[6]) | 0xDDABL)))), p_44.f2)))))
        {
            unsigned l_637 = 0x48175EF3L;
            char l_644[6][7] = {{0xA2L, 0xC4L, 0L, 9L, 0xC4L, 0x40L, 0xC4L}, {0xA2L, 0xC4L, 0L, 9L, 0xC4L, 0x40L, 0xC4L}, {0xA2L, 0xC4L, 0L, 9L, 0xC4L, 0x40L, 0xC4L}, {0xA2L, 0xC4L, 0L, 9L, 0xC4L, 0x40L, 0xC4L}, {0xA2L, 0xC4L, 0L, 9L, 0xC4L, 0x40L, 0xC4L}, {0xA2L, 0xC4L, 0L, 9L, 0xC4L, 0x40L, 0xC4L}};
            struct S0 l_657 = {-1L,0xE2L,0x0CE2L};
            int i, j;
            l_645 |= (+(safe_div_func_int32_t_s_s((safe_rshift_func_int8_t_s_u(l_637, (g_24 || l_593))), func_52((((!p_45) | ((p_45 | (safe_div_func_uint32_t_u_u(4294967288UL, 1UL))) != (safe_rshift_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s(255UL, 2)), func_22((g_71[9] > 0x5BL)))))) < p_44.f0), p_44.f1, l_644[1][2], g_618, g_303))));
            l_656 = (safe_mod_func_uint32_t_u_u(g_71[2], (safe_rshift_func_uint8_t_u_u((((safe_sub_func_uint8_t_u_u((l_62[1][6][0] ^ func_22((p_44.f0 >= func_22(g_24)))), func_22(((safe_rshift_func_int8_t_s_s((safe_rshift_func_int8_t_s_s(l_644[1][2], 0)), (g_71[3] <= g_503))) >= 8L)))) < 0x12L) >= l_645), 1))));
            l_512 = l_657;
        }
        else
        {
            l_471 = (~g_174);
        }
    }
    for (l_529 = 0; (l_529 <= 40); l_529++)
    {
        unsigned l_664 = 0x97B196A9L;
        int l_676 = (-7L);
        for (l_527 = 0; (l_527 <= (-10)); l_527 = safe_sub_func_uint16_t_u_u(l_527, 6))
        {
            unsigned l_679 = 9UL;
            for (l_470 = 0; (l_470 != 14); l_470++)
            {
                unsigned char l_675 = 6UL;
                int l_677[5][4] = {{9L, 0x5DE4AFCBL, 0xB8C8D204L, 0x5DE4AFCBL}, {9L, 0x5DE4AFCBL, 0xB8C8D204L, 0x5DE4AFCBL}, {9L, 0x5DE4AFCBL, 0xB8C8D204L, 0x5DE4AFCBL}, {9L, 0x5DE4AFCBL, 0xB8C8D204L, 0x5DE4AFCBL}, {9L, 0x5DE4AFCBL, 0xB8C8D204L, 0x5DE4AFCBL}};
                char l_678[3];
                int i, j;
                for (i = 0; i < 3; i++)
                    l_678[i] = (-1L);
                l_676 |= ((func_52(l_664, (0x5BF3DE98L ^ (p_44.f0 && g_24)), p_45, (safe_mod_func_uint32_t_u_u(((safe_add_func_int16_t_s_s((safe_rshift_func_int8_t_s_s((safe_sub_func_uint8_t_u_u(func_22((safe_rshift_func_int16_t_s_s((g_503 >= g_71[2]), (func_22(g_46[1].f0) >= g_355[0])))), 0x49L)), p_45)), 65535UL)) == l_675), l_664)), l_664) <= 0L) <= 1L);
                ++l_679;
            }
            p_45 |= p_44.f0;
            for (p_45 = 0; (p_45 != (-15)); p_45--)
            {
                short l_714[5][8];
                int i, j;
                for (i = 0; i < 5; i++)
                {
                    for (j = 0; j < 8; j++)
                        l_714[i][j] = 0x713BL;
                }
                if (g_24)
                    break;
                for (g_174 = 3; (g_174 <= 9); g_174 += 1)
                {
                    int i;
                    if (g_71[g_174])
                        break;
                    for (p_44.f1 = 2; (p_44.f1 >= 0); p_44.f1 -= 1)
                    {
                        int i;
                        g_71[g_174] = (safe_lshift_func_int16_t_s_u((g_71[(p_44.f1 + 5)] >= (safe_add_func_int32_t_s_s((safe_mod_func_int8_t_s_s((0xFCL <= (!g_275)), (safe_sub_func_uint32_t_u_u(((safe_mul_func_uint8_t_u_u(p_44.f2, l_470)) > p_44.f1), g_218)))), (safe_sub_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u((safe_add_func_uint16_t_u_u(g_71[7], 2L)), g_71[1])), l_570))))), 5));
                    }
                    for (l_679 = 0; (l_679 <= 2); l_679 += 1)
                    {
                        int l_715 = 0L;
                        g_700[0] = l_679;
                        l_715 = func_22((safe_mul_func_int8_t_s_s((g_703 ^ p_44.f2), ((safe_rshift_func_int16_t_s_s(func_22(l_528[1]), (safe_sub_func_int32_t_s_s((safe_mul_func_uint8_t_u_u(p_45, (safe_lshift_func_int16_t_s_s((safe_add_func_int32_t_s_s(g_71[g_174], (p_44.f0 | (p_44.f2 | ((l_714[1][4] ^ g_46[1].f2) != 0x29L))))), 14)))), 4294967295UL)))) & p_45))));
                    }
                }
            }
        }
        l_717 = l_716;
    }
    return p_44.f1;
}







static char func_52(char p_53, unsigned char p_54, short p_55, unsigned short p_56, int p_57)
{
    unsigned char l_72 = 1UL;
    int l_94[10][10][2] = {{{9L, 0L}, {9L, 0L}, {9L, 0L}, {9L, 0L}, {9L, 0L}, {9L, 0L}, {9L, 0L}, {9L, 0L}, {9L, 0L}, {9L, 0L}}, {{9L, 0L}, {9L, 0L}, {9L, 0L}, {9L, 0L}, {9L, 0L}, {9L, 0L}, {9L, 0L}, {9L, 0L}, {9L, 0L}, {9L, 0L}}, {{9L, 0L}, {9L, 0L}, {9L, 0L}, {9L, 0L}, {9L, 0L}, {9L, 0L}, {9L, 0L}, {9L, 0L}, {9L, 0L}, {9L, 0L}}, {{9L, 0L}, {9L, 0L}, {9L, 0L}, {9L, 0L}, {9L, 0L}, {9L, 0L}, {9L, 0L}, {9L, 0L}, {9L, 0L}, {9L, 0L}}, {{9L, 0L}, {9L, 0L}, {9L, 0L}, {9L, 0L}, {9L, 0L}, {9L, 0L}, {9L, 0L}, {9L, 0L}, {9L, 0L}, {9L, 0L}}, {{9L, 0L}, {9L, 0L}, {9L, 0L}, {9L, 0L}, {9L, 0L}, {9L, 0L}, {9L, 0L}, {9L, 0L}, {9L, 0L}, {9L, 0L}}, {{9L, 0L}, {9L, 0L}, {9L, 0L}, {9L, 0L}, {9L, 0L}, {9L, 0L}, {9L, 0L}, {9L, 0L}, {9L, 0L}, {9L, 0L}}, {{9L, 0L}, {9L, 0L}, {9L, 0L}, {9L, 0L}, {9L, 0L}, {9L, 0L}, {9L, 0L}, {9L, 0L}, {9L, 0L}, {9L, 0L}}, {{9L, 0L}, {9L, 0L}, {9L, 0L}, {9L, 0L}, {9L, 0L}, {9L, 0L}, {9L, 0L}, {9L, 0L}, {9L, 0L}, {9L, 0L}}, {{9L, 0L}, {9L, 0L}, {9L, 0L}, {9L, 0L}, {9L, 0L}, {9L, 0L}, {9L, 0L}, {9L, 0L}, {9L, 0L}, {9L, 0L}}};
    short l_155[5][3] = {{0xE960L, 0xE960L, 4L}, {0xE960L, 0xE960L, 4L}, {0xE960L, 0xE960L, 4L}, {0xE960L, 0xE960L, 4L}, {0xE960L, 0xE960L, 4L}};
    struct S0 l_202 = {0xE646L,0xBAL,0x167AL};
    unsigned short l_262[10][1] = {{0x0CF0L}, {0x0CF0L}, {0x0CF0L}, {0x0CF0L}, {0x0CF0L}, {0x0CF0L}, {0x0CF0L}, {0x0CF0L}, {0x0CF0L}, {0x0CF0L}};
    unsigned short l_281[2];
    short l_288 = 6L;
    int l_328 = 2L;
    char l_356 = 9L;
    int l_426 = 0xE6E78B14L;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_281[i] = 1UL;
    p_57 = (safe_mul_func_int16_t_s_s((safe_mod_func_int8_t_s_s(0xC2L, p_54)), 0x01DCL));
    for (p_57 = (-2); (p_57 < 10); p_57++)
    {
        unsigned l_82 = 4UL;
        int l_100 = 0x18804D59L;
        int l_130 = 0x9A663178L;
        int l_237 = (-1L);
        int l_276 = 0L;
        int l_277 = 0x968E064FL;
        int l_278[8] = {4L, 0L, 4L, 0L, 4L, 0L, 4L, 0L};
        struct S0 l_425 = {3L,1L,0xD81BL};
        unsigned char l_427[3][9][1] = {{{1UL}, {1UL}, {1UL}, {1UL}, {1UL}, {1UL}, {1UL}, {1UL}, {1UL}}, {{1UL}, {1UL}, {1UL}, {1UL}, {1UL}, {1UL}, {1UL}, {1UL}, {1UL}}, {{1UL}, {1UL}, {1UL}, {1UL}, {1UL}, {1UL}, {1UL}, {1UL}, {1UL}}};
        int i, j, k;
        g_71[2] = (safe_rshift_func_uint8_t_u_u(p_53, 3));
        if ((l_72 >= ((safe_add_func_int16_t_s_s(2L, p_56)) ^ ((p_54 >= (g_24 && g_46[1].f0)) == (0x5DA298B2L ^ 4294967289UL)))))
        {
            int l_75 = 0xE4D73BB8L;
            int l_81 = 0x07283BD0L;
            int l_92 = (-4L);
            if (l_75)
            {
                unsigned char l_78[10][7][3] = {{{0x33L, 246UL, 0xD0L}, {0x33L, 246UL, 0xD0L}, {0x33L, 246UL, 0xD0L}, {0x33L, 246UL, 0xD0L}, {0x33L, 246UL, 0xD0L}, {0x33L, 246UL, 0xD0L}, {0x33L, 246UL, 0xD0L}}, {{0x33L, 246UL, 0xD0L}, {0x33L, 246UL, 0xD0L}, {0x33L, 246UL, 0xD0L}, {0x33L, 246UL, 0xD0L}, {0x33L, 246UL, 0xD0L}, {0x33L, 246UL, 0xD0L}, {0x33L, 246UL, 0xD0L}}, {{0x33L, 246UL, 0xD0L}, {0x33L, 246UL, 0xD0L}, {0x33L, 246UL, 0xD0L}, {0x33L, 246UL, 0xD0L}, {0x33L, 246UL, 0xD0L}, {0x33L, 246UL, 0xD0L}, {0x33L, 246UL, 0xD0L}}, {{0x33L, 246UL, 0xD0L}, {0x33L, 246UL, 0xD0L}, {0x33L, 246UL, 0xD0L}, {0x33L, 246UL, 0xD0L}, {0x33L, 246UL, 0xD0L}, {0x33L, 246UL, 0xD0L}, {0x33L, 246UL, 0xD0L}}, {{0x33L, 246UL, 0xD0L}, {0x33L, 246UL, 0xD0L}, {0x33L, 246UL, 0xD0L}, {0x33L, 246UL, 0xD0L}, {0x33L, 246UL, 0xD0L}, {0x33L, 246UL, 0xD0L}, {0x33L, 246UL, 0xD0L}}, {{0x33L, 246UL, 0xD0L}, {0x33L, 246UL, 0xD0L}, {0x33L, 246UL, 0xD0L}, {0x33L, 246UL, 0xD0L}, {0x33L, 246UL, 0xD0L}, {0x33L, 246UL, 0xD0L}, {0x33L, 246UL, 0xD0L}}, {{0x33L, 246UL, 0xD0L}, {0x33L, 246UL, 0xD0L}, {0x33L, 246UL, 0xD0L}, {0x33L, 246UL, 0xD0L}, {0x33L, 246UL, 0xD0L}, {0x33L, 246UL, 0xD0L}, {0x33L, 246UL, 0xD0L}}, {{0x33L, 246UL, 0xD0L}, {0x33L, 246UL, 0xD0L}, {0x33L, 246UL, 0xD0L}, {0x33L, 246UL, 0xD0L}, {0x33L, 246UL, 0xD0L}, {0x33L, 246UL, 0xD0L}, {0x33L, 246UL, 0xD0L}}, {{0x33L, 246UL, 0xD0L}, {0x33L, 246UL, 0xD0L}, {0x33L, 246UL, 0xD0L}, {0x33L, 246UL, 0xD0L}, {0x33L, 246UL, 0xD0L}, {0x33L, 246UL, 0xD0L}, {0x33L, 246UL, 0xD0L}}, {{0x33L, 246UL, 0xD0L}, {0x33L, 246UL, 0xD0L}, {0x33L, 246UL, 0xD0L}, {0x33L, 246UL, 0xD0L}, {0x33L, 246UL, 0xD0L}, {0x33L, 246UL, 0xD0L}, {0x33L, 246UL, 0xD0L}}};
                int i, j, k;
                l_78[1][5][0] ^= (safe_rshift_func_uint16_t_u_s(0x9D74L, 15));
            }
            else
            {
                short l_86 = 0xA9E3L;
                int l_95 = 0xD3EF5034L;
                int l_98 = 0x50A2DCC7L;
                int l_99 = 0xE7BB6F39L;
                int l_101 = 0xBBD4C003L;
                int l_120 = 0x14ADC3B9L;
                if ((func_22(p_53) && 0x5CE9E3C4L))
                {
                    unsigned l_88[5][8][6] = {{{0xB9CE0359L, 4294967293UL, 0x99FC8002L, 0x43182763L, 0xD840C936L, 0xB438E4B9L}, {0xB9CE0359L, 4294967293UL, 0x99FC8002L, 0x43182763L, 0xD840C936L, 0xB438E4B9L}, {0xB9CE0359L, 4294967293UL, 0x99FC8002L, 0x43182763L, 0xD840C936L, 0xB438E4B9L}, {0xB9CE0359L, 4294967293UL, 0x99FC8002L, 0x43182763L, 0xD840C936L, 0xB438E4B9L}, {0xB9CE0359L, 4294967293UL, 0x99FC8002L, 0x43182763L, 0xD840C936L, 0xB438E4B9L}, {0xB9CE0359L, 4294967293UL, 0x99FC8002L, 0x43182763L, 0xD840C936L, 0xB438E4B9L}, {0xB9CE0359L, 4294967293UL, 0x99FC8002L, 0x43182763L, 0xD840C936L, 0xB438E4B9L}, {0xB9CE0359L, 4294967293UL, 0x99FC8002L, 0x43182763L, 0xD840C936L, 0xB438E4B9L}}, {{0xB9CE0359L, 4294967293UL, 0x99FC8002L, 0x43182763L, 0xD840C936L, 0xB438E4B9L}, {0xB9CE0359L, 4294967293UL, 0x99FC8002L, 0x43182763L, 0xD840C936L, 0xB438E4B9L}, {0xB9CE0359L, 4294967293UL, 0x99FC8002L, 0x43182763L, 0xD840C936L, 0xB438E4B9L}, {0xB9CE0359L, 4294967293UL, 0x99FC8002L, 0x43182763L, 0xD840C936L, 0xB438E4B9L}, {0xB9CE0359L, 4294967293UL, 0x99FC8002L, 0x43182763L, 0xD840C936L, 0xB438E4B9L}, {0xB9CE0359L, 4294967293UL, 0x99FC8002L, 0x43182763L, 0xD840C936L, 0xB438E4B9L}, {0xB9CE0359L, 4294967293UL, 0x99FC8002L, 0x43182763L, 0xD840C936L, 0xB438E4B9L}, {0xB9CE0359L, 4294967293UL, 0x99FC8002L, 0x43182763L, 0xD840C936L, 0xB438E4B9L}}, {{0xB9CE0359L, 4294967293UL, 0x99FC8002L, 0x43182763L, 0xD840C936L, 0xB438E4B9L}, {0xB9CE0359L, 4294967293UL, 0x99FC8002L, 0x43182763L, 0xD840C936L, 0xB438E4B9L}, {0xB9CE0359L, 4294967293UL, 0x99FC8002L, 0x43182763L, 0xD840C936L, 0xB438E4B9L}, {0xB9CE0359L, 4294967293UL, 0x99FC8002L, 0x43182763L, 0xD840C936L, 0xB438E4B9L}, {0xB9CE0359L, 4294967293UL, 0x99FC8002L, 0x43182763L, 0xD840C936L, 0xB438E4B9L}, {0xB9CE0359L, 4294967293UL, 0x99FC8002L, 0x43182763L, 0xD840C936L, 0xB438E4B9L}, {0xB9CE0359L, 4294967293UL, 0x99FC8002L, 0x43182763L, 0xD840C936L, 0xB438E4B9L}, {0xB9CE0359L, 4294967293UL, 0x99FC8002L, 0x43182763L, 0xD840C936L, 0xB438E4B9L}}, {{0xB9CE0359L, 4294967293UL, 0x99FC8002L, 0x43182763L, 0xD840C936L, 0xB438E4B9L}, {0xB9CE0359L, 4294967293UL, 0x99FC8002L, 0x43182763L, 0xD840C936L, 0xB438E4B9L}, {0xB9CE0359L, 4294967293UL, 0x99FC8002L, 0x43182763L, 0xD840C936L, 0xB438E4B9L}, {0xB9CE0359L, 4294967293UL, 0x99FC8002L, 0x43182763L, 0xD840C936L, 0xB438E4B9L}, {0xB9CE0359L, 4294967293UL, 0x99FC8002L, 0x43182763L, 0xD840C936L, 0xB438E4B9L}, {0xB9CE0359L, 4294967293UL, 0x99FC8002L, 0x43182763L, 0xD840C936L, 0xB438E4B9L}, {0xB9CE0359L, 4294967293UL, 0x99FC8002L, 0x43182763L, 0xD840C936L, 0xB438E4B9L}, {0xB9CE0359L, 4294967293UL, 0x99FC8002L, 0x43182763L, 0xD840C936L, 0xB438E4B9L}}, {{0xB9CE0359L, 4294967293UL, 0x99FC8002L, 0x43182763L, 0xD840C936L, 0xB438E4B9L}, {0xB9CE0359L, 4294967293UL, 0x99FC8002L, 0x43182763L, 0xD840C936L, 0xB438E4B9L}, {0xB9CE0359L, 4294967293UL, 0x99FC8002L, 0x43182763L, 0xD840C936L, 0xB438E4B9L}, {0xB9CE0359L, 4294967293UL, 0x99FC8002L, 0x43182763L, 0xD840C936L, 0xB438E4B9L}, {0xB9CE0359L, 4294967293UL, 0x99FC8002L, 0x43182763L, 0xD840C936L, 0xB438E4B9L}, {0xB9CE0359L, 4294967293UL, 0x99FC8002L, 0x43182763L, 0xD840C936L, 0xB438E4B9L}, {0xB9CE0359L, 4294967293UL, 0x99FC8002L, 0x43182763L, 0xD840C936L, 0xB438E4B9L}, {0xB9CE0359L, 4294967293UL, 0x99FC8002L, 0x43182763L, 0xD840C936L, 0xB438E4B9L}}};
                    int l_96 = 0xFEB66E78L;
                    int l_97 = 0L;
                    int i, j, k;
                    if (g_46[1].f0)
                    {
                        unsigned l_85[8][7] = {{0xE519B986L, 0x9D875717L, 0x5C7436F4L, 5UL, 0xDCAC19DAL, 4294967288UL, 4294967295UL}, {0xE519B986L, 0x9D875717L, 0x5C7436F4L, 5UL, 0xDCAC19DAL, 4294967288UL, 4294967295UL}, {0xE519B986L, 0x9D875717L, 0x5C7436F4L, 5UL, 0xDCAC19DAL, 4294967288UL, 4294967295UL}, {0xE519B986L, 0x9D875717L, 0x5C7436F4L, 5UL, 0xDCAC19DAL, 4294967288UL, 4294967295UL}, {0xE519B986L, 0x9D875717L, 0x5C7436F4L, 5UL, 0xDCAC19DAL, 4294967288UL, 4294967295UL}, {0xE519B986L, 0x9D875717L, 0x5C7436F4L, 5UL, 0xDCAC19DAL, 4294967288UL, 4294967295UL}, {0xE519B986L, 0x9D875717L, 0x5C7436F4L, 5UL, 0xDCAC19DAL, 4294967288UL, 4294967295UL}, {0xE519B986L, 0x9D875717L, 0x5C7436F4L, 5UL, 0xDCAC19DAL, 4294967288UL, 4294967295UL}};
                        int i, j;
                        l_81 = (g_71[2] ^ 0L);
                        ++l_82;
                        l_85[1][3] = 0x2706978BL;
                        return l_81;
                    }
                    else
                    {
                        int l_87 = 0xD9B4DC16L;
                        int l_91 = (-2L);
                        int l_93[1];
                        unsigned l_102 = 0xAC349C08L;
                        int i;
                        for (i = 0; i < 1; i++)
                            l_93[i] = 0x7DF7C478L;
                        --l_88[1][3][2];
                        l_102++;
                    }
                }
                else
                {
                    int l_105 = 0x4784E495L;
                    l_100 |= ((p_54 <= 0x91L) & (l_105 || ((safe_lshift_func_int16_t_s_s(p_54, l_86)) && ((safe_lshift_func_uint16_t_u_s(((safe_div_func_int8_t_s_s((safe_sub_func_int32_t_s_s(1L, func_22((safe_mul_func_uint8_t_u_u(l_95, ((safe_rshift_func_int16_t_s_s((0x57L == (safe_div_func_int32_t_s_s((((p_56 || 0xBFC7L) && p_54) != 0UL), p_53))), 8)) <= 0x54C286E7L)))))), l_120)) & 65528UL), 6)) >= p_55))));
                }
                if (func_22(l_72))
                {
                    unsigned char l_127 = 0xF5L;
                    l_127 |= ((g_46[1].f2 && (0xDEL <= (safe_lshift_func_int16_t_s_s((safe_add_func_int32_t_s_s((safe_lshift_func_int8_t_s_s(p_55, 3)), (~func_22((g_46[1].f1 ^ g_71[9]))))), l_92)))) != p_56);
                    g_71[2] = l_82;
                    if ((p_54 != l_72))
                    {
                        return p_53;
                    }
                    else
                    {
                        l_100 |= func_22(((safe_rshift_func_int8_t_s_s((g_24 && p_53), 0)) && 0UL));
                        return l_130;
                    }
                }
                else
                {
                    return l_81;
                }
            }
            if (l_100)
            {
                for (l_75 = 2; (l_75 >= 0); l_75 -= 1)
                {
                    unsigned l_135 = 0xE8A5D0D5L;
                    l_130 = ((safe_mod_func_uint8_t_u_u(g_46[1].f1, (safe_lshift_func_int8_t_s_u(l_135, 7)))) | ((((func_22(g_46[1].f2) > ((safe_div_func_uint8_t_u_u(g_24, (safe_div_func_uint32_t_u_u(l_135, g_71[8])))) || p_57)) > 4UL) & (-5L)) | p_53));
                }
            }
            else
            {
                int l_140 = 0xA086712CL;
                int l_141 = 0xF4FEEF6EL;
                unsigned short l_178 = 1UL;
                l_81 ^= l_140;
                l_141 ^= 0xF4295DAEL;
                for (p_56 = 0; (p_56 > 8); p_56 = safe_add_func_uint8_t_u_u(p_56, 6))
                {
                    unsigned char l_154[10] = {255UL, 1UL, 0UL, 0UL, 1UL, 255UL, 1UL, 0UL, 0UL, 1UL};
                    int l_176 = 0x749A3EB6L;
                    int l_191 = 0xC4D48E72L;
                    int i;
                    l_155[4][1] |= (1UL ^ func_22((func_22(p_56) || ((p_56 < (((safe_add_func_uint8_t_u_u(g_71[0], p_54)) < 65535UL) && (safe_sub_func_int8_t_s_s(((safe_rshift_func_int8_t_s_s(((safe_lshift_func_uint16_t_u_u(p_56, 8)) != ((func_22(((safe_mod_func_uint32_t_u_u((~l_81), l_154[4])) >= p_54)) >= g_24) != 3L)), g_71[2])) & 1UL), g_46[1].f1)))) & 0x48D875F7L))));
                    for (l_72 = 29; (l_72 >= 15); l_72 = safe_sub_func_uint16_t_u_u(l_72, 2))
                    {
                        return l_100;
                    }
                    if ((safe_lshift_func_int8_t_s_s(0x56L, ((safe_lshift_func_uint16_t_u_u(0x1B87L, ((~((safe_mul_func_int8_t_s_s((safe_div_func_int16_t_s_s(g_24, (safe_rshift_func_int8_t_s_u(((p_54 & (safe_add_func_uint16_t_u_u((((l_82 < p_57) != (p_53 > l_92)) < (func_22(((((p_55 == 0xF0L) > l_100) & (-6L)) & 1UL)) < 2UL)), g_24))) >= g_46[1].f1), l_154[4])))), l_155[4][1])) >= g_71[2])) ^ g_174))) > g_46[1].f0))))
                    {
                        int l_175 = 6L;
                        int l_177[10][7] = {{(-2L), 0xF3D353F1L, (-6L), (-6L), (-5L), 0x941C906FL, 0x9E727854L}, {(-2L), 0xF3D353F1L, (-6L), (-6L), (-5L), 0x941C906FL, 0x9E727854L}, {(-2L), 0xF3D353F1L, (-6L), (-6L), (-5L), 0x941C906FL, 0x9E727854L}, {(-2L), 0xF3D353F1L, (-6L), (-6L), (-5L), 0x941C906FL, 0x9E727854L}, {(-2L), 0xF3D353F1L, (-6L), (-6L), (-5L), 0x941C906FL, 0x9E727854L}, {(-2L), 0xF3D353F1L, (-6L), (-6L), (-5L), 0x941C906FL, 0x9E727854L}, {(-2L), 0xF3D353F1L, (-6L), (-6L), (-5L), 0x941C906FL, 0x9E727854L}, {(-2L), 0xF3D353F1L, (-6L), (-6L), (-5L), 0x941C906FL, 0x9E727854L}, {(-2L), 0xF3D353F1L, (-6L), (-6L), (-5L), 0x941C906FL, 0x9E727854L}, {(-2L), 0xF3D353F1L, (-6L), (-6L), (-5L), 0x941C906FL, 0x9E727854L}};
                        int i, j;
                        --l_178;
                    }
                    else
                    {
                        l_92 = (safe_rshift_func_int16_t_s_s(p_54, g_71[2]));
                        if (p_56)
                            continue;
                        g_71[2] = (-4L);
                        g_71[2] = (safe_mod_func_int32_t_s_s((safe_lshift_func_int16_t_s_s(0xAB88L, p_57)), (safe_sub_func_uint16_t_u_u(((g_46[1].f2 | (func_22(l_178) > (~(((func_22(g_46[1].f1) ^ (safe_div_func_uint16_t_u_u(p_55, l_191))) && 4294967294UL) < l_178)))) || g_46[1].f1), l_92))));
                    }
                }
            }
            for (l_81 = 0; (l_81 <= 2); l_81 += 1)
            {
                int i;
                l_100 &= g_71[(l_81 + 4)];
                l_94[4][6][1] |= (((safe_div_func_uint32_t_u_u(4294967295UL, (((6L != (g_71[(l_81 + 4)] != (-10L))) ^ p_54) | (+p_55)))) == func_22(p_56)) < p_57);
                l_94[4][0][0] ^= ((safe_sub_func_uint32_t_u_u((safe_mul_func_int16_t_s_s(g_71[2], g_46[1].f0)), 0xF5D82354L)) != ((0xDA89D31CL != ((l_92 && (safe_lshift_func_uint8_t_u_u((((g_71[(l_81 + 4)] >= p_55) | 6UL) == (g_71[(l_81 + 4)] < 0x0FL)), 7))) | g_71[(l_81 + 4)])) > 0UL));
                for (g_174 = 0; (g_174 <= 2); g_174 += 1)
                {
                    int l_204 = 2L;
                    for (p_56 = 0; (p_56 <= 2); p_56 += 1)
                    {
                        short l_203 = 0x043DL;
                        int i;
                        l_202 = g_46[p_56];
                        if (l_203)
                            break;
                        if (g_71[2])
                            continue;
                    }
                    l_204 |= (-1L);
                }
            }
        }
        else
        {
            unsigned short l_227 = 1UL;
            int l_228 = 0x82091717L;
            int l_229 = 0xDAC5E5D6L;
            int l_230 = (-1L);
            int l_233[10][4] = {{0xCE4241E0L, (-4L), 3L, 1L}, {0xCE4241E0L, (-4L), 3L, 1L}, {0xCE4241E0L, (-4L), 3L, 1L}, {0xCE4241E0L, (-4L), 3L, 1L}, {0xCE4241E0L, (-4L), 3L, 1L}, {0xCE4241E0L, (-4L), 3L, 1L}, {0xCE4241E0L, (-4L), 3L, 1L}, {0xCE4241E0L, (-4L), 3L, 1L}, {0xCE4241E0L, (-4L), 3L, 1L}, {0xCE4241E0L, (-4L), 3L, 1L}};
            struct S0 l_241[5][9][5] = {{{{0x3580L,-6L,0xF09FL}, {-9L,0x96L,1L}, {0xE09FL,0L,0x1ABCL}, {1L,1L,0x09BEL}, {-1L,7L,0L}}, {{0x3580L,-6L,0xF09FL}, {-9L,0x96L,1L}, {0xE09FL,0L,0x1ABCL}, {1L,1L,0x09BEL}, {-1L,7L,0L}}, {{0x3580L,-6L,0xF09FL}, {-9L,0x96L,1L}, {0xE09FL,0L,0x1ABCL}, {1L,1L,0x09BEL}, {-1L,7L,0L}}, {{0x3580L,-6L,0xF09FL}, {-9L,0x96L,1L}, {0xE09FL,0L,0x1ABCL}, {1L,1L,0x09BEL}, {-1L,7L,0L}}, {{0x3580L,-6L,0xF09FL}, {-9L,0x96L,1L}, {0xE09FL,0L,0x1ABCL}, {1L,1L,0x09BEL}, {-1L,7L,0L}}, {{0x3580L,-6L,0xF09FL}, {-9L,0x96L,1L}, {0xE09FL,0L,0x1ABCL}, {1L,1L,0x09BEL}, {-1L,7L,0L}}, {{0x3580L,-6L,0xF09FL}, {-9L,0x96L,1L}, {0xE09FL,0L,0x1ABCL}, {1L,1L,0x09BEL}, {-1L,7L,0L}}, {{0x3580L,-6L,0xF09FL}, {-9L,0x96L,1L}, {0xE09FL,0L,0x1ABCL}, {1L,1L,0x09BEL}, {-1L,7L,0L}}, {{0x3580L,-6L,0xF09FL}, {-9L,0x96L,1L}, {0xE09FL,0L,0x1ABCL}, {1L,1L,0x09BEL}, {-1L,7L,0L}}}, {{{0x3580L,-6L,0xF09FL}, {-9L,0x96L,1L}, {0xE09FL,0L,0x1ABCL}, {1L,1L,0x09BEL}, {-1L,7L,0L}}, {{0x3580L,-6L,0xF09FL}, {-9L,0x96L,1L}, {0xE09FL,0L,0x1ABCL}, {1L,1L,0x09BEL}, {-1L,7L,0L}}, {{0x3580L,-6L,0xF09FL}, {-9L,0x96L,1L}, {0xE09FL,0L,0x1ABCL}, {1L,1L,0x09BEL}, {-1L,7L,0L}}, {{0x3580L,-6L,0xF09FL}, {-9L,0x96L,1L}, {0xE09FL,0L,0x1ABCL}, {1L,1L,0x09BEL}, {-1L,7L,0L}}, {{0x3580L,-6L,0xF09FL}, {-9L,0x96L,1L}, {0xE09FL,0L,0x1ABCL}, {1L,1L,0x09BEL}, {-1L,7L,0L}}, {{0x3580L,-6L,0xF09FL}, {-9L,0x96L,1L}, {0xE09FL,0L,0x1ABCL}, {1L,1L,0x09BEL}, {-1L,7L,0L}}, {{0x3580L,-6L,0xF09FL}, {-9L,0x96L,1L}, {0xE09FL,0L,0x1ABCL}, {1L,1L,0x09BEL}, {-1L,7L,0L}}, {{0x3580L,-6L,0xF09FL}, {-9L,0x96L,1L}, {0xE09FL,0L,0x1ABCL}, {1L,1L,0x09BEL}, {-1L,7L,0L}}, {{0x3580L,-6L,0xF09FL}, {-9L,0x96L,1L}, {0xE09FL,0L,0x1ABCL}, {1L,1L,0x09BEL}, {-1L,7L,0L}}}, {{{0x3580L,-6L,0xF09FL}, {-9L,0x96L,1L}, {0xE09FL,0L,0x1ABCL}, {1L,1L,0x09BEL}, {-1L,7L,0L}}, {{0x3580L,-6L,0xF09FL}, {-9L,0x96L,1L}, {0xE09FL,0L,0x1ABCL}, {1L,1L,0x09BEL}, {-1L,7L,0L}}, {{0x3580L,-6L,0xF09FL}, {-9L,0x96L,1L}, {0xE09FL,0L,0x1ABCL}, {1L,1L,0x09BEL}, {-1L,7L,0L}}, {{0x3580L,-6L,0xF09FL}, {-9L,0x96L,1L}, {0xE09FL,0L,0x1ABCL}, {1L,1L,0x09BEL}, {-1L,7L,0L}}, {{0x3580L,-6L,0xF09FL}, {-9L,0x96L,1L}, {0xE09FL,0L,0x1ABCL}, {1L,1L,0x09BEL}, {-1L,7L,0L}}, {{0x3580L,-6L,0xF09FL}, {-9L,0x96L,1L}, {0xE09FL,0L,0x1ABCL}, {1L,1L,0x09BEL}, {-1L,7L,0L}}, {{0x3580L,-6L,0xF09FL}, {-9L,0x96L,1L}, {0xE09FL,0L,0x1ABCL}, {1L,1L,0x09BEL}, {-1L,7L,0L}}, {{0x3580L,-6L,0xF09FL}, {-9L,0x96L,1L}, {0xE09FL,0L,0x1ABCL}, {1L,1L,0x09BEL}, {-1L,7L,0L}}, {{0x3580L,-6L,0xF09FL}, {-9L,0x96L,1L}, {0xE09FL,0L,0x1ABCL}, {1L,1L,0x09BEL}, {-1L,7L,0L}}}, {{{0x3580L,-6L,0xF09FL}, {-9L,0x96L,1L}, {0xE09FL,0L,0x1ABCL}, {1L,1L,0x09BEL}, {-1L,7L,0L}}, {{0x3580L,-6L,0xF09FL}, {-9L,0x96L,1L}, {0xE09FL,0L,0x1ABCL}, {1L,1L,0x09BEL}, {-1L,7L,0L}}, {{0x3580L,-6L,0xF09FL}, {-9L,0x96L,1L}, {0xE09FL,0L,0x1ABCL}, {1L,1L,0x09BEL}, {-1L,7L,0L}}, {{0x3580L,-6L,0xF09FL}, {-9L,0x96L,1L}, {0xE09FL,0L,0x1ABCL}, {1L,1L,0x09BEL}, {-1L,7L,0L}}, {{0x3580L,-6L,0xF09FL}, {-9L,0x96L,1L}, {0xE09FL,0L,0x1ABCL}, {1L,1L,0x09BEL}, {-1L,7L,0L}}, {{0x3580L,-6L,0xF09FL}, {-9L,0x96L,1L}, {0xE09FL,0L,0x1ABCL}, {1L,1L,0x09BEL}, {-1L,7L,0L}}, {{0x3580L,-6L,0xF09FL}, {-9L,0x96L,1L}, {0xE09FL,0L,0x1ABCL}, {1L,1L,0x09BEL}, {-1L,7L,0L}}, {{0x3580L,-6L,0xF09FL}, {-9L,0x96L,1L}, {0xE09FL,0L,0x1ABCL}, {1L,1L,0x09BEL}, {-1L,7L,0L}}, {{0x3580L,-6L,0xF09FL}, {-9L,0x96L,1L}, {0xE09FL,0L,0x1ABCL}, {1L,1L,0x09BEL}, {-1L,7L,0L}}}, {{{0x3580L,-6L,0xF09FL}, {-9L,0x96L,1L}, {0xE09FL,0L,0x1ABCL}, {1L,1L,0x09BEL}, {-1L,7L,0L}}, {{0x3580L,-6L,0xF09FL}, {-9L,0x96L,1L}, {0xE09FL,0L,0x1ABCL}, {1L,1L,0x09BEL}, {-1L,7L,0L}}, {{0x3580L,-6L,0xF09FL}, {-9L,0x96L,1L}, {0xE09FL,0L,0x1ABCL}, {1L,1L,0x09BEL}, {-1L,7L,0L}}, {{0x3580L,-6L,0xF09FL}, {-9L,0x96L,1L}, {0xE09FL,0L,0x1ABCL}, {1L,1L,0x09BEL}, {-1L,7L,0L}}, {{0x3580L,-6L,0xF09FL}, {-9L,0x96L,1L}, {0xE09FL,0L,0x1ABCL}, {1L,1L,0x09BEL}, {-1L,7L,0L}}, {{0x3580L,-6L,0xF09FL}, {-9L,0x96L,1L}, {0xE09FL,0L,0x1ABCL}, {1L,1L,0x09BEL}, {-1L,7L,0L}}, {{0x3580L,-6L,0xF09FL}, {-9L,0x96L,1L}, {0xE09FL,0L,0x1ABCL}, {1L,1L,0x09BEL}, {-1L,7L,0L}}, {{0x3580L,-6L,0xF09FL}, {-9L,0x96L,1L}, {0xE09FL,0L,0x1ABCL}, {1L,1L,0x09BEL}, {-1L,7L,0L}}, {{0x3580L,-6L,0xF09FL}, {-9L,0x96L,1L}, {0xE09FL,0L,0x1ABCL}, {1L,1L,0x09BEL}, {-1L,7L,0L}}}};
            int l_280 = 0x8213E1AAL;
            unsigned l_401 = 0x084A3BBFL;
            int i, j, k;
            if (l_130)
            {
                unsigned l_213 = 0xE9F7C02CL;
                int l_232 = 0x7ABB9593L;
                int l_234 = (-1L);
                int l_235 = 0x4624F099L;
                unsigned l_255 = 0xAF0FEC2AL;
                if (g_174)
                {
                    int l_236[1][3];
                    unsigned l_238 = 0xEF4EA062L;
                    int i, j;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 3; j++)
                            l_236[i][j] = (-10L);
                    }
                    for (l_202.f2 = 0; (l_202.f2 == (-17)); l_202.f2--)
                    {
                        char l_231 = 0xEFL;
                        l_130 = ((-1L) <= g_174);
                        if (g_71[5])
                            continue;
                        g_71[2] = (~((safe_rshift_func_uint8_t_u_s((safe_rshift_func_int16_t_s_s((safe_add_func_uint8_t_u_u(((l_213 < g_46[1].f2) <= (safe_div_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_s(g_218, ((g_24 || func_22((safe_mul_func_uint16_t_u_u((0xABL >= (((safe_lshift_func_uint16_t_u_s(g_218, (func_22(g_174) | ((safe_lshift_func_uint16_t_u_u((safe_sub_func_int16_t_s_s(0xB939L, 1L)), p_56)) == 0x091D02A6L)))) ^ l_227) >= g_46[1].f1)), p_55)))) ^ p_57))), (-1L)))), 0x08L)), g_46[1].f2)), 7)) | 0xA75BCBD6L));
                        l_238--;
                    }
                    l_202 = l_241[3][2][2];
                    if (p_57)
                    {
                        unsigned char l_254 = 1UL;
                        l_100 = (safe_mod_func_uint16_t_u_u((g_24 > (g_71[6] & (safe_mul_func_uint8_t_u_u((p_55 | (safe_rshift_func_uint8_t_u_s(0x1EL, ((((((safe_div_func_int8_t_s_s(p_54, 0x44L)) ^ p_55) | (((safe_add_func_int16_t_s_s(l_228, (safe_mul_func_uint16_t_u_u(6UL, l_232)))) | g_24) > 65531UL)) != l_254) == 65535UL) <= l_255)))), (-1L))))), p_56));
                        if (l_155[4][1])
                            continue;
                        l_236[0][1] ^= ((safe_rshift_func_int16_t_s_u(l_233[8][3], p_55)) && ((safe_mul_func_uint8_t_u_u(1UL, g_24)) || (safe_rshift_func_int8_t_s_s(g_71[9], ((l_238 && (l_232 == ((g_46[1].f0 != 0L) > 255UL))) & g_218)))));
                    }
                    else
                    {
                        l_262[7][0]--;
                    }
                }
                else
                {
                    g_71[2] = l_155[0][1];
                }
                g_71[2] = (l_94[2][8][0] < (!p_53));
                g_46[1] = g_46[0];
            }
            else
            {
                unsigned l_272 = 0xDA96A55CL;
                int l_273 = 0xB0A4C5BDL;
                int l_274[6][4] = {{7L, 6L, 7L, 6L}, {7L, 6L, 7L, 6L}, {7L, 6L, 7L, 6L}, {7L, 6L, 7L, 6L}, {7L, 6L, 7L, 6L}, {7L, 6L, 7L, 6L}};
                int l_279 = (-1L);
                int i, j;
                for (l_227 = 0; (l_227 > 18); ++l_227)
                {
                    unsigned l_269 = 3UL;
                    for (p_55 = 0; (p_55 > 9); p_55 = safe_add_func_int8_t_s_s(p_55, 8))
                    {
                        g_71[0] = l_233[8][3];
                        l_273 &= (g_71[2] | ((0x32L || (l_269 | l_229)) >= (((0x83L == l_100) | func_22((p_57 < ((g_46[1].f0 ^ ((safe_mod_func_int16_t_s_s(0x2543L, 9L)) >= l_272)) ^ p_53)))) && p_53)));
                        g_46[0] = l_241[3][2][2];
                    }
                }
                --l_281[0];
            }
            g_46[1] = g_46[1];
            l_202 = l_241[1][8][3];
            if (((func_22((safe_sub_func_int8_t_s_s((safe_mod_func_int32_t_s_s(p_57, 0x800E8F71L)), l_288))) > (safe_mul_func_int16_t_s_s(((p_56 | (safe_mod_func_uint16_t_u_u(l_227, func_22(((safe_sub_func_uint32_t_u_u((((p_55 == (safe_mul_func_int16_t_s_s((safe_div_func_int32_t_s_s((safe_rshift_func_int8_t_s_u((safe_mul_func_int16_t_s_s((0x1DA4L == g_303), 1L)), g_174)), p_56)), 5L))) <= 0UL) && g_71[5]), g_275)) | 1UL))))) | l_281[0]), l_202.f1))) != l_227))
            {
                if (l_262[8][0])
                    break;
                l_280 &= g_71[0];
                if (g_174)
                {
                    return g_275;
                }
                else
                {
                    unsigned short l_310 = 0x69ECL;
                    short l_313[4];
                    int i;
                    for (i = 0; i < 4; i++)
                        l_313[i] = 0x4922L;
                    l_313[0] = ((-1L) == ((safe_div_func_int16_t_s_s((((g_46[1].f2 != (safe_mod_func_int16_t_s_s(g_71[3], l_229))) < p_53) & (safe_sub_func_int8_t_s_s(l_310, p_54))), 9L)) < (~((safe_mod_func_int8_t_s_s((p_54 & p_54), 249UL)) >= p_55))));
                    for (l_100 = (-11); (l_100 <= 8); l_100 = safe_add_func_int8_t_s_s(l_100, 7))
                    {
                        unsigned l_316 = 4UL;
                        int l_317 = 7L;
                        l_278[5] = p_54;
                        l_317 = (l_316 && g_71[2]);
                        g_71[2] = (safe_div_func_int8_t_s_s(p_57, (safe_sub_func_uint16_t_u_u((safe_mul_func_int8_t_s_s((((safe_mul_func_int16_t_s_s(l_227, 1UL)) != (func_22(p_54) == l_227)) | p_53), ((safe_lshift_func_uint16_t_u_u((l_328 >= l_316), 14)) > p_53))), l_316))));
                        g_71[4] |= l_241[3][2][2].f2;
                    }
                    for (g_174 = 0; (g_174 == 36); g_174 = safe_add_func_int16_t_s_s(g_174, 9))
                    {
                        return l_202.f0;
                    }
                }
            }
            else
            {
                char l_340 = 0xA0L;
                int l_343 = (-1L);
                int l_359 = 0xE2F96E44L;
                int l_360 = 0x276A1948L;
                int l_361 = 0x7EC87FE9L;
                int l_362 = (-5L);
                int l_379 = 1L;
                unsigned short l_421 = 65531UL;
                if (p_57)
                {
                    unsigned l_337 = 0x427DB72CL;
                    int l_341 = 0x41123631L;
                    int l_342 = 4L;
                    if ((g_275 > (safe_lshift_func_uint8_t_u_u(((p_55 < (p_55 >= ((safe_lshift_func_uint16_t_u_s(g_24, 12)) | ((g_218 || ((func_22((p_56 == (safe_lshift_func_int8_t_s_s(((p_54 != (l_337 ^ ((safe_lshift_func_uint8_t_u_u((1L && 0UL), 4)) >= p_53))) && 0L), l_337)))) > g_71[2]) || 4294967286UL)) != 0xD4L)))) || g_71[9]), 5))))
                    {
                        l_94[4][0][0] = p_56;
                        l_276 = p_56;
                        return l_340;
                    }
                    else
                    {
                        unsigned l_344 = 0xB8C98FD1L;
                        l_344++;
                        g_355[0] ^= (+(safe_lshift_func_uint16_t_u_u((l_130 == (func_22((safe_div_func_uint8_t_u_u((0x7DL <= ((~0xFDL) == g_218)), 255UL))) && (safe_div_func_uint16_t_u_u(((-1L) || ((p_55 | (func_22((65526UL & g_218)) == 0xAA02L)) != l_344)), g_71[2])))), 14)));
                        return l_280;
                    }
                }
                else
                {
                    short l_357[10][5][3] = {{{(-5L), (-3L), (-10L)}, {(-5L), (-3L), (-10L)}, {(-5L), (-3L), (-10L)}, {(-5L), (-3L), (-10L)}, {(-5L), (-3L), (-10L)}}, {{(-5L), (-3L), (-10L)}, {(-5L), (-3L), (-10L)}, {(-5L), (-3L), (-10L)}, {(-5L), (-3L), (-10L)}, {(-5L), (-3L), (-10L)}}, {{(-5L), (-3L), (-10L)}, {(-5L), (-3L), (-10L)}, {(-5L), (-3L), (-10L)}, {(-5L), (-3L), (-10L)}, {(-5L), (-3L), (-10L)}}, {{(-5L), (-3L), (-10L)}, {(-5L), (-3L), (-10L)}, {(-5L), (-3L), (-10L)}, {(-5L), (-3L), (-10L)}, {(-5L), (-3L), (-10L)}}, {{(-5L), (-3L), (-10L)}, {(-5L), (-3L), (-10L)}, {(-5L), (-3L), (-10L)}, {(-5L), (-3L), (-10L)}, {(-5L), (-3L), (-10L)}}, {{(-5L), (-3L), (-10L)}, {(-5L), (-3L), (-10L)}, {(-5L), (-3L), (-10L)}, {(-5L), (-3L), (-10L)}, {(-5L), (-3L), (-10L)}}, {{(-5L), (-3L), (-10L)}, {(-5L), (-3L), (-10L)}, {(-5L), (-3L), (-10L)}, {(-5L), (-3L), (-10L)}, {(-5L), (-3L), (-10L)}}, {{(-5L), (-3L), (-10L)}, {(-5L), (-3L), (-10L)}, {(-5L), (-3L), (-10L)}, {(-5L), (-3L), (-10L)}, {(-5L), (-3L), (-10L)}}, {{(-5L), (-3L), (-10L)}, {(-5L), (-3L), (-10L)}, {(-5L), (-3L), (-10L)}, {(-5L), (-3L), (-10L)}, {(-5L), (-3L), (-10L)}}, {{(-5L), (-3L), (-10L)}, {(-5L), (-3L), (-10L)}, {(-5L), (-3L), (-10L)}, {(-5L), (-3L), (-10L)}, {(-5L), (-3L), (-10L)}}};
                    int l_358[3][1][4] = {{{(-5L), (-1L), (-1L), (-1L)}}, {{(-5L), (-1L), (-1L), (-1L)}}, {{(-5L), (-1L), (-1L), (-1L)}}};
                    int i, j, k;
                    if (g_46[1].f1)
                        break;
                    l_343 ^= (-1L);
                    --g_363;
                    g_46[1] = g_46[1];
                }
                if (p_53)
                {
                    if (p_54)
                        break;
                }
                else
                {
                    struct S0 l_369[7] = {{1L,0x28L,-1L}, {1L,0x28L,-1L}, {-7L,-1L,0L}, {1L,0x28L,-1L}, {1L,0x28L,-1L}, {-7L,-1L,0L}, {1L,0x28L,-1L}};
                    int l_380 = 9L;
                    int i;
                    for (g_303 = 0; (g_303 < 10); ++g_303)
                    {
                        struct S0 l_368 = {5L,-1L,0L};
                        g_46[2] = l_368;
                        g_46[1] = l_369[5];
                        l_94[4][0][0] = ((-1L) < l_340);
                        l_94[4][0][0] = 0L;
                    }
                    if ((p_55 || p_57))
                    {
                        int l_374[9][10][2] = {{{0x64444413L, 0x8A442086L}, {0x64444413L, 0x8A442086L}, {0x64444413L, 0x8A442086L}, {0x64444413L, 0x8A442086L}, {0x64444413L, 0x8A442086L}, {0x64444413L, 0x8A442086L}, {0x64444413L, 0x8A442086L}, {0x64444413L, 0x8A442086L}, {0x64444413L, 0x8A442086L}, {0x64444413L, 0x8A442086L}}, {{0x64444413L, 0x8A442086L}, {0x64444413L, 0x8A442086L}, {0x64444413L, 0x8A442086L}, {0x64444413L, 0x8A442086L}, {0x64444413L, 0x8A442086L}, {0x64444413L, 0x8A442086L}, {0x64444413L, 0x8A442086L}, {0x64444413L, 0x8A442086L}, {0x64444413L, 0x8A442086L}, {0x64444413L, 0x8A442086L}}, {{0x64444413L, 0x8A442086L}, {0x64444413L, 0x8A442086L}, {0x64444413L, 0x8A442086L}, {0x64444413L, 0x8A442086L}, {0x64444413L, 0x8A442086L}, {0x64444413L, 0x8A442086L}, {0x64444413L, 0x8A442086L}, {0x64444413L, 0x8A442086L}, {0x64444413L, 0x8A442086L}, {0x64444413L, 0x8A442086L}}, {{0x64444413L, 0x8A442086L}, {0x64444413L, 0x8A442086L}, {0x64444413L, 0x8A442086L}, {0x64444413L, 0x8A442086L}, {0x64444413L, 0x8A442086L}, {0x64444413L, 0x8A442086L}, {0x64444413L, 0x8A442086L}, {0x64444413L, 0x8A442086L}, {0x64444413L, 0x8A442086L}, {0x64444413L, 0x8A442086L}}, {{0x64444413L, 0x8A442086L}, {0x64444413L, 0x8A442086L}, {0x64444413L, 0x8A442086L}, {0x64444413L, 0x8A442086L}, {0x64444413L, 0x8A442086L}, {0x64444413L, 0x8A442086L}, {0x64444413L, 0x8A442086L}, {0x64444413L, 0x8A442086L}, {0x64444413L, 0x8A442086L}, {0x64444413L, 0x8A442086L}}, {{0x64444413L, 0x8A442086L}, {0x64444413L, 0x8A442086L}, {0x64444413L, 0x8A442086L}, {0x64444413L, 0x8A442086L}, {0x64444413L, 0x8A442086L}, {0x64444413L, 0x8A442086L}, {0x64444413L, 0x8A442086L}, {0x64444413L, 0x8A442086L}, {0x64444413L, 0x8A442086L}, {0x64444413L, 0x8A442086L}}, {{0x64444413L, 0x8A442086L}, {0x64444413L, 0x8A442086L}, {0x64444413L, 0x8A442086L}, {0x64444413L, 0x8A442086L}, {0x64444413L, 0x8A442086L}, {0x64444413L, 0x8A442086L}, {0x64444413L, 0x8A442086L}, {0x64444413L, 0x8A442086L}, {0x64444413L, 0x8A442086L}, {0x64444413L, 0x8A442086L}}, {{0x64444413L, 0x8A442086L}, {0x64444413L, 0x8A442086L}, {0x64444413L, 0x8A442086L}, {0x64444413L, 0x8A442086L}, {0x64444413L, 0x8A442086L}, {0x64444413L, 0x8A442086L}, {0x64444413L, 0x8A442086L}, {0x64444413L, 0x8A442086L}, {0x64444413L, 0x8A442086L}, {0x64444413L, 0x8A442086L}}, {{0x64444413L, 0x8A442086L}, {0x64444413L, 0x8A442086L}, {0x64444413L, 0x8A442086L}, {0x64444413L, 0x8A442086L}, {0x64444413L, 0x8A442086L}, {0x64444413L, 0x8A442086L}, {0x64444413L, 0x8A442086L}, {0x64444413L, 0x8A442086L}, {0x64444413L, 0x8A442086L}, {0x64444413L, 0x8A442086L}}};
                        int i, j, k;
                        l_233[8][3] |= (p_53 != (!l_369[5].f2));
                        l_380 = ((safe_lshift_func_int8_t_s_s(((safe_rshift_func_uint16_t_u_u(((l_374[2][9][1] || (l_343 && l_155[1][1])) || ((-8L) & (p_57 > p_53))), (func_22(g_46[1].f0) ^ ((safe_rshift_func_uint16_t_u_s((((!((g_46[1].f0 > 0UL) > p_53)) && g_46[1].f1) >= l_72), l_361)) <= p_55)))) && g_46[1].f1), 5)) && l_379);
                        return l_369[5].f1;
                    }
                    else
                    {
                        unsigned l_381 = 0x8A0DB7DFL;
                        l_381++;
                        if (l_379)
                            break;
                    }
                    if (((safe_rshift_func_int8_t_s_s(func_22(g_355[0]), (l_340 | (0xE2L > g_303)))) != (((safe_sub_func_uint32_t_u_u(0x6BDD7E7FL, l_72)) < ((safe_mod_func_int32_t_s_s((safe_lshift_func_uint16_t_u_s((safe_div_func_uint8_t_u_u(0x24L, g_355[0])), 9)), g_24)) || 0x7335DAB8L)) >= p_56)))
                    {
                        l_202 = g_46[2];
                        if (p_54)
                            continue;
                        l_278[4] = p_55;
                    }
                    else
                    {
                        unsigned l_400 = 0x2A9BC05BL;
                        int l_404 = 4L;
                        g_71[2] = (safe_mul_func_int8_t_s_s((g_275 < ((func_22(g_174) || ((g_46[1].f0 != l_369[5].f2) <= (safe_add_func_uint16_t_u_u(1UL, (safe_add_func_uint16_t_u_u((func_22(p_53) != func_22(g_46[1].f1)), l_400)))))) || l_380)), 0L));
                        l_401++;
                        if (g_46[1].f0)
                            continue;
                        l_404 |= l_241[3][2][2].f0;
                    }
                    l_380 = g_46[1].f0;
                }
                for (l_280 = 17; (l_280 < 25); l_280 = safe_add_func_int8_t_s_s(l_280, 8))
                {
                    unsigned l_409[3];
                    int l_417 = 0x5808AF6EL;
                    int l_418 = (-7L);
                    int l_420[1];
                    struct S0 l_424 = {0xC9B7L,0xCFL,0L};
                    int i;
                    for (i = 0; i < 3; i++)
                        l_409[i] = 4294967289UL;
                    for (i = 0; i < 1; i++)
                        l_420[i] = 0L;
                    for (l_362 = 0; (l_362 >= (-6)); l_362 = safe_sub_func_int8_t_s_s(l_362, 2))
                    {
                        l_94[4][0][0] ^= func_22(l_409[2]);
                        l_229 ^= (safe_lshift_func_int16_t_s_u((((0x68B0L != 0x2AE5L) || g_46[1].f2) && func_22(g_174)), ((((0xEDL ^ (g_46[1].f2 != (-6L))) && (((-6L) && 9UL) && p_54)) == p_53) ^ p_57)));
                        return l_409[2];
                    }
                    for (l_379 = 0; (l_379 != 27); l_379++)
                    {
                        unsigned l_414 = 4294967295UL;
                        int l_419 = 0x5068A105L;
                        l_360 = (g_303 && (((p_54 <= ((l_414 || ((safe_sub_func_int16_t_s_s(g_355[0], p_55)) >= ((0x95L > ((-10L) > ((-3L) <= 1L))) && 4294967293UL))) == l_414)) <= 0L) != g_218));
                        l_421--;
                    }
                    l_425 = l_424;
                    return g_46[1].f1;
                }
            }
        }
        l_427[2][7][0]++;
        if (p_56)
            continue;
    }
    l_202 = l_202;
    return g_24;
}





int main (void)
{
    int i, j;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_24, "g_24", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_46[i].f0, "g_46[i].f0", print_hash_value);
        transparent_crc(g_46[i].f1, "g_46[i].f1", print_hash_value);
        transparent_crc(g_46[i].f2, "g_46[i].f2", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_71[i], "g_71[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_174, "g_174", print_hash_value);
    transparent_crc(g_218, "g_218", print_hash_value);
    transparent_crc(g_275, "g_275", print_hash_value);
    transparent_crc(g_303, "g_303", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_355[i], "g_355[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_363, "g_363", print_hash_value);
    transparent_crc(g_503, "g_503", print_hash_value);
    transparent_crc(g_618, "g_618", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_700[i], "g_700[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_703, "g_703", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_799[i][j], "g_799[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_917, "g_917", print_hash_value);
    transparent_crc(g_1023.f0, "g_1023.f0", print_hash_value);
    transparent_crc(g_1023.f1, "g_1023.f1", print_hash_value);
    transparent_crc(g_1023.f2, "g_1023.f2", print_hash_value);
    transparent_crc(g_1118, "g_1118", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
