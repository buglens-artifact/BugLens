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
   char f1;
   unsigned f2;
   int f3;
   unsigned f4;
   char f5;
   const int f6;
   unsigned f7;
   short f8;
};

struct S1 {
   int f0;
   int f1;
   short f2;
   char f3;
};

struct S2 {
   int f0;
   unsigned short f1;
   const unsigned f2;
   short f3;
   const unsigned f4;
   unsigned f5;
   unsigned short f6;
   int f7;
   const int f8;
};

struct S3 {
   char f0;
   int f1;
   struct S2 f2;
   struct S2 f3;
   struct S1 f4;
   char f5;
   short f6;
   struct S2 f7;
};

union U4 {
   unsigned f0;
   int f1;
   unsigned f2;
   char f3;
   const unsigned f4;
};


static const char g_2 = 0x05L;
static struct S2 g_18 = {-1L,0x13B1L,0x67DCC359L,-3L,1UL,0xD707D8EBL,0xBFBCL,1L,0L};
static struct S0 g_42 = {0xF80411BCL,0x1BL,4294967288UL,-1L,4294967295UL,-1L,1L,0x3F1BFD6FL,0xBBA6L};
static unsigned short g_48 = 65535UL;
static unsigned g_70 = 1UL;
static struct S3 g_89 = {1L,-6L,{0xD9254FF3L,1UL,0xFB5D179AL,0x3412L,4UL,0x41FC1B3DL,65535UL,1L,-2L},{-7L,1UL,4294967295UL,1L,0xC8F7CEBBL,1UL,65535UL,0x0C385723L,4L},{1L,0x07506916L,0L,0x99L},0L,1L,{0L,0xB671L,0x96D9F78EL,0x2920L,0x5BDF5850L,1UL,0x5D71L,0xEF146544L,5L}};
static char g_118 = 0xD7L;
static unsigned g_120 = 1UL;
static unsigned short g_138 = 0xF5B7L;
static int g_186 = 0x8DE40D1DL;
static int g_206 = 9L;
static unsigned g_207 = 4294967292UL;
static short g_245 = 9L;
static unsigned g_246 = 2UL;
static int g_252 = (-1L);
static struct S1 g_258 = {-1L,0x2884712AL,0x38AAL,0x2EL};
static int g_274 = 0xE2CBAFA0L;
static unsigned g_275 = 4294967290UL;
static unsigned g_286 = 4294967288UL;
static int g_306 = 0x98390252L;
static struct S1 g_346 = {0L,0xFF14AEFDL,0x36A2L,0L};
static unsigned g_356 = 0xA6749FE2L;
static unsigned short g_369 = 0UL;
static unsigned char g_370 = 1UL;
static unsigned char g_379 = 0UL;
static char g_389 = (-2L);
static char g_394 = 0x22L;
static short g_398 = (-10L);
static int g_400 = (-1L);
static char g_401 = 4L;
static unsigned short g_403 = 0xAAA4L;
static union U4 g_428 = {0UL};
static unsigned short g_515 = 3UL;
static struct S3 g_584 = {1L,0xA26505FBL,{0xC2A42968L,0x4158L,4294967291UL,0x6EDAL,0x6873DC52L,0xEAA50EE8L,0x694EL,0xB6CB277DL,0L},{0x81325807L,65535UL,0xD82C7D40L,0xDC40L,4294967295UL,0xDB09391DL,65535UL,-4L,0x9C834FB3L},{0xDAC6BA56L,-3L,0x936DL,0xD3L},-7L,1L,{0xF2E8658AL,9UL,0x2A7A5074L,-6L,1UL,0x42BCB57FL,65532UL,3L,0x9506923DL}};
static unsigned short g_632 = 0x3BDCL;



static struct S0 func_1(void);
static const int func_7(unsigned p_8, struct S0 p_9, struct S0 p_10, int p_11, char p_12);
static struct S0 func_14(char p_15, struct S2 p_16, char p_17);
static unsigned func_24(struct S2 p_25, char p_26, unsigned p_27);
static char func_38(union U4 p_39, struct S0 p_40);
static char func_53(unsigned p_54, short p_55, char p_56);
static const char func_57(int p_58);
static struct S3 func_59(struct S1 p_60, const struct S2 p_61, struct S1 p_62, unsigned short p_63, unsigned char p_64);
static struct S1 func_65(unsigned short p_66);
static unsigned func_82(struct S0 p_83);
static struct S0 func_1(void)
{
    unsigned l_13 = 1UL;
    short l_605 = 0x9D70L;
    short l_635 = 0x3638L;
    int l_636 = 0xBA8FFE93L;
    struct S3 l_637 = {-1L,0xD681E34EL,{0xD58FF2DBL,0x44E5L,0x6E280CE2L,0x3466L,0UL,0x4B565816L,4UL,0L,0x4BCC1069L},{0L,0x27C7L,4294967295UL,0x8151L,0x5C59C29EL,0xFF1CD204L,7UL,0xB3935B25L,0x58B6C9D2L},{0x7CD33261L,0L,0xF117L,3L},-3L,0x196AL,{9L,0x138CL,0xB85BF3DEL,0x836FL,1UL,0x9D95BEE9L,0UL,-8L,0xD0F3BAF9L}};
    struct S0 l_655 = {0xCC5CB513L,0x9DL,0x2ADF7713L,1L,0x0B4AEFB6L,9L,-5L,0x2E298E86L,0xE706L};
    unsigned l_660 = 0xC647F975L;
    unsigned l_704 = 0x04F60281L;
    if ((g_2 & ((safe_sub_func_int16_t_s_s(0x917AL, ((((l_636 |= (g_2 >= ((((safe_add_func_int32_t_s_s(func_7(l_13, func_14((g_2 , (l_13 >= l_13)), g_18, l_13), g_42, g_42.f2, l_605), 0x9153A55FL)) < l_635) || g_584.f7.f1) || 0xBA0D2F72L))) , l_637) , g_89.f4.f2) == 4294967294UL))) & l_637.f3.f2)))
    {
        const struct S2 l_642 = {0x64BFB685L,1UL,4294967291UL,1L,9UL,8UL,0xD1B8L,-1L,0x28E87D0AL};
        union U4 l_653 = {7UL};
        int l_659 = 0xECBED76FL;
        struct S1 l_670 = {0xE65C42B6L,0x46B129EFL,0L,0L};
        struct S0 l_681 = {1UL,1L,4294967295UL,9L,1UL,0x9CL,-4L,8UL,0xEFA7L};
        for (g_42.f1 = 0; (g_42.f1 == 8); g_42.f1 = safe_add_func_int8_t_s_s(g_42.f1, 6))
        {
            union U4 l_654 = {0x0F779E53L};
            int l_656 = (-1L);
            l_637.f2.f7 = (((safe_sub_func_int8_t_s_s(((l_642 , ((((~(g_89.f2.f1++)) , (g_89 , g_89.f7.f1)) && ((((safe_div_func_int8_t_s_s((g_584.f1 >= g_428.f2), ((l_656 &= (safe_lshift_func_uint16_t_u_s((safe_add_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_s(func_38(l_653, (l_654 , l_655)), l_642.f5)), g_245)), l_642.f4))) , g_18.f6))) == g_346.f2) > 0x0AC5L) && 5UL)) < 4294967295UL)) >= 0x560AL), 253UL)) > l_642.f5) , g_428.f2);
        }
        if (func_53(l_637.f2.f2, func_57(((((safe_lshift_func_uint16_t_u_u((~(++l_660)), (g_89.f4 , l_637.f3.f6))) || ((((l_642.f4 != (l_637.f4.f2 < func_24(g_584.f3, (l_653.f1 |= (l_642.f0 >= g_42.f8)), (func_59(g_258, l_642, g_89.f4, g_584.f3.f2, g_89.f4.f3) , g_252)))) != l_655.f1) , (-1L)) || g_89.f3.f8)) >= 0xA215E882L) >= 0x0FC2177DL)), g_584.f7.f8))
        {
            unsigned char l_667 = 255UL;
            int l_669 = 0xCD45A7F7L;
            l_670 = (g_346 = func_65((safe_lshift_func_int8_t_s_u((((safe_sub_func_uint8_t_u_u(g_89.f3.f2, func_7((l_669 = ((g_286 && l_667) > (safe_unary_minus_func_int32_t_s(g_258.f1)))), g_42, g_42, l_667, g_89.f2.f0))) & 9L) , l_637.f2.f6), g_584.f2.f3))));
        }
        else
        {
            unsigned l_678 = 0xDA262DA6L;
            g_258.f0 = ((!g_18.f4) , (safe_div_func_int8_t_s_s((safe_unary_minus_func_int32_t_s((-3L))), (((safe_sub_func_int16_t_s_s(((safe_mod_func_uint8_t_u_u((g_18.f7 ^ l_670.f0), l_637.f2.f0)) == g_89.f2.f8), l_637.f7.f1)) == l_670.f0) ^ (((g_428.f2 &= (g_42.f0 = l_678)) != g_346.f1) & g_89.f3.f7)))));

                    }

                g_584.f4 = (func_14(g_584.f2.f4, g_89.f7, ((g_584.f2.f7 = (safe_mod_func_uint16_t_u_u(1UL, func_82(l_681)))) == g_118)) , (g_346 = g_89.f4));
    }
    else
    {
        char l_682 = 0x69L;
        int l_683 = 4L;
        int l_684 = 0x23CA399FL;
        int l_685 = (-5L);
        int l_686 = (-7L);
        int l_687 = 5L;
        int l_688 = (-1L);
        unsigned l_689 = 4294967287UL;
        l_689++;
        for (l_637.f3.f7 = 0; (l_637.f3.f7 >= 12); l_637.f3.f7++)
        {
            for (g_48 = 0; (g_48 > 30); g_48++)
            {
                return g_42;
            }
            l_683 = g_428.f2;
        }
        for (g_584.f3.f0 = (-11); (g_584.f3.f0 > (-17)); g_584.f3.f0--)
        {
            return l_655;
        }
        g_584.f4 = func_65(l_689);
    }

        l_637.f4 = func_65(((l_637.f7 , (((((safe_rshift_func_uint16_t_u_u(((((g_275 >= ((safe_sub_func_uint32_t_u_u(func_38(g_428, (g_89.f1 , l_655)), (l_637.f3.f3 , (safe_sub_func_uint8_t_u_u(func_7(func_82((l_637.f3.f0 , g_42)), l_655, g_42, l_637.f2.f8, l_637.f7.f8), l_637.f2.f2))))) , 0L)) >= g_584.f6) != g_120) != 0xA0DDL), l_704)) ^ (-1L)) , l_635) || g_584.f7.f8) == l_637.f7.f1)) && 0L));
    return l_655;
}







static const int func_7(unsigned p_8, struct S0 p_9, struct S0 p_10, int p_11, char p_12)
{
    unsigned short l_610 = 0UL;
    int l_614 = 0xBB162761L;
    int l_615 = 0x3A8B2981L;
    int l_616 = 0L;
    for (g_398 = 3; (g_398 <= 7); g_398 = safe_add_func_uint8_t_u_u(g_398, 8))
    {
        short l_613 = 0L;
        unsigned char l_623 = 0x64L;
        unsigned char l_630 = 0UL;
        int l_631 = 1L;
        for (g_584.f7.f5 = 0; (g_584.f7.f5 != 7); ++g_584.f7.f5)
        {
            unsigned short l_611 = 7UL;
            int l_612 = 0xFBDCF81BL;
            int l_617 = (-3L);
            unsigned char l_618 = 0xFEL;
            if (func_57((l_611 = func_57(l_610))))
            {
                --l_618;
                g_584.f7.f7 = p_9.f0;
                if (p_10.f2)
                    break;
            }
            else
            {
                p_11 = (g_584.f7.f1 != ((safe_lshift_func_uint16_t_u_u(((l_623 == (safe_sub_func_int8_t_s_s((safe_mod_func_uint16_t_u_u((safe_div_func_int8_t_s_s(((((func_57(g_89.f7.f7) != (p_9.f1 <= l_610)) > g_245) & 6UL) == 0x29L), 0xC0L)), 65535UL)), 6L))) > 0xB9L), p_9.f2)) , p_10.f6));
                if (l_630)
                    continue;
            }
            l_612 = l_611;
            return g_252;
        }
        ++g_632;
    }
    g_89.f3.f7 = g_89.f7.f6;
    return l_616;
}







static struct S0 func_14(char p_15, struct S2 p_16, char p_17)
{
    unsigned short l_21 = 65526UL;
    union U4 l_41 = {4294967286UL};
    short l_371 = (-8L);
    struct S0 l_598 = {0xD9D3B925L,0xCDL,0UL,0L,4294967294UL,0x32L,0L,6UL,-1L};
    g_400 |= ((safe_mod_func_int32_t_s_s(l_21, (g_428.f1 &= (safe_div_func_uint32_t_u_u((~func_24(p_16, ((safe_rshift_func_uint8_t_u_u(g_18.f8, g_18.f7)) & ((((safe_sub_func_int8_t_s_s((g_370 ^= (((safe_lshift_func_uint8_t_u_u((safe_add_func_uint32_t_u_u((l_41.f1 = (g_369 |= (safe_add_func_int8_t_s_s(func_38(l_41, g_42), (safe_sub_func_int8_t_s_s(g_18.f7, (func_53(((((p_16.f1 , 1UL) == g_42.f3) <= l_41.f0) , 0xCE74433AL), g_18.f6, g_18.f7) < g_346.f2))))))), l_21)), p_16.f6)) ^ p_16.f5) < g_42.f8)), l_21)) < l_21) >= l_371) || l_41.f2)), p_16.f0)), g_584.f2.f5))))) >= l_21);

        g_584.f2.f7 = (((safe_add_func_uint8_t_u_u(func_38(l_41, l_598), (g_89.f3.f2 || g_584.f0))) != (p_16.f0 < (g_379 ^= 247UL))) <= ((safe_lshift_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s(((safe_rshift_func_uint16_t_u_u(g_584.f4.f3, 6)) <= p_16.f1), g_89.f7.f8)), 13)) , l_598.f0));
    return g_42;
}







static unsigned func_24(struct S2 p_25, char p_26, unsigned p_27)
{
    int l_374 = 0x32646635L;
    int l_375 = 0x8D70F31FL;
    int l_376 = 7L;
    int l_377 = 1L;
    int l_382 = (-8L);
    int l_383 = 0L;
    int l_384 = (-4L);
    int l_385 = 1L;
    int l_386 = (-5L);
    int l_387 = (-3L);
    int l_388 = 0xE2F96E44L;
    int l_390 = 0x48986415L;
    int l_391 = 0xE9A1CB9BL;
    int l_392 = 0xC1E35E18L;
    short l_393 = 1L;
    int l_395 = 9L;
    int l_396 = 0x28408136L;
    int l_397 = (-1L);
    int l_399 = 0x41ED1B32L;
    int l_402 = 1L;
    struct S0 l_413 = {0x75422D32L,0x05L,0xEEA0C97CL,-6L,3UL,0x88L,2L,0x688EA05AL,0x7881L};
    struct S1 l_425 = {0x47906F76L,-1L,0x4FB8L,0xECL};
    union U4 l_487 = {4294967295UL};
    int l_585 = 0L;
    int l_587 = (-1L);
    for (g_89.f2.f7 = (-30); (g_89.f2.f7 < (-15)); g_89.f2.f7++)
    {
        int l_378 = 0x599E47D8L;
        g_379++;
        if (l_374)
            continue;
    }
    g_403--;
    l_402 = (p_25.f6 ^ 0x72443C71L);
    for (g_398 = 0; (g_398 >= (-20)); g_398 = safe_sub_func_int16_t_s_s(g_398, 3))
    {
        short l_423 = 6L;
        int l_424 = 0xD707F361L;
        int l_473 = 0x867E96BAL;
        int l_503 = 0x408E3F8CL;
        int l_504 = 0xF985DE2BL;
        int l_505 = 4L;
        int l_509 = 0L;
        int l_510 = 0xFC406785L;
        int l_512 = (-5L);
        int l_513 = 0x3791C260L;
        int l_514 = 0xED04451DL;
        char l_538 = 0x6FL;
        struct S0 l_567 = {1UL,0xB2L,1UL,0x6AE4CC57L,4294967295UL,1L,8L,0x200DE4D2L,-1L};
        struct S1 l_586 = {0x8F2237D1L,2L,0xDCE9L,0x77L};
        for (g_89.f3.f3 = 19; (g_89.f3.f3 == 4); --g_89.f3.f3)
        {
            unsigned l_410 = 0UL;
            struct S3 l_431 = {1L,-1L,{-9L,0x16D8L,4294967286UL,-1L,0x6BDD7E7FL,0xEF6B593FL,65535UL,0L,3L},{0xFDEB0F3BL,65535UL,4294967295UL,-3L,2UL,4UL,0UL,0xC19357EFL,0x58BECFD6L},{0x87335DABL,0x1B06D716L,0x0D86L,0L},0xB0L,3L,{0xF7BAA678L,0UL,0x3F300873L,0x6FB4L,4294967289UL,8UL,65526UL,-3L,0x8A4E22AAL}};
            unsigned l_434 = 0x1C86CE5EL;
            struct S0 l_458 = {0x8346CEE0L,0L,6UL,0x272D3FECL,0xD0741B08L,-10L,-5L,0UL,0xF653L};
            union U4 l_462 = {0x37CF3C3DL};
            int l_508 = 4L;
        }
        if (l_587)
            break;
        l_425 = l_425;
        p_25.f0 = (g_89.f1 & ((safe_div_func_int32_t_s_s((l_514 , (~(g_584.f2.f0 &= ((0x03ED3FD9L == (safe_add_func_int8_t_s_s((safe_rshift_func_int8_t_s_u(0xD8L, (l_395 ^= (l_514 = l_473)))), ((1L >= func_53((p_25.f7 , l_585), p_25.f8, p_26)) <= l_567.f0)))) & 1UL)))), 4294967289UL)) , 4294967295UL));
    }
    return l_382;
}







static char func_38(union U4 p_39, struct S0 p_40)
{
    int l_43 = 0x758AC421L;
    int l_44 = 2L;
    int l_45 = 0xB601BA2AL;
    int l_46 = (-10L);
    int l_47 = 0x212F019DL;
    g_48++;
    return g_18.f5;
}







static char func_53(unsigned p_54, short p_55, char p_56)
{
    short l_67 = 1L;
    const struct S2 l_345 = {0L,65534UL,4UL,0xFF93L,4294967292UL,9UL,0x6BAFL,-8L,0L};
    int l_355 = 1L;
    int l_357 = 0xC1C04966L;
    int l_363 = (-2L);
    l_363 |= ((~(func_57((func_59(func_65(l_67), l_345, g_346, (safe_unary_minus_func_uint8_t_u(((+(safe_sub_func_uint16_t_u_u((safe_sub_func_int8_t_s_s((safe_sub_func_uint8_t_u_u(g_42.f0, ((l_355 |= (safe_unary_minus_func_uint8_t_u(g_89.f3.f8))) != ((l_357 = (g_356 = l_345.f2)) > (((g_89.f2.f2 || (g_89.f7.f8 ^ g_42.f5)) != (-6L)) == 0xEEL))))), g_42.f8)), g_306))) != l_345.f2))), l_345.f7) , g_286)) , 1L)) == 0x6FCBL);
    l_363 = l_345.f7;
    for (g_89.f3.f7 = 0; (g_89.f3.f7 == 24); g_89.f3.f7 = safe_add_func_uint16_t_u_u(g_89.f3.f7, 9))
    {
        short l_368 = 0xFBF3L;
        for (g_89.f3.f3 = 23; (g_89.f3.f3 < 7); g_89.f3.f3 = safe_sub_func_int32_t_s_s(g_89.f3.f3, 6))
        {
            l_368 = g_89.f3.f7;
        }
    }
    return l_357;
}







static const char func_57(int p_58)
{
    const unsigned l_362 = 5UL;
    p_58 = 0xD9113F76L;
    return l_362;
}







static struct S3 func_59(struct S1 p_60, const struct S2 p_61, struct S1 p_62, unsigned short p_63, unsigned char p_64)
{
    const unsigned char l_358 = 255UL;
    struct S1 l_359 = {0L,0x2CC62D4CL,-3L,2L};
    int l_361 = 0xFEDEB689L;
    if ((p_62.f3 > l_358))
    {
        p_60.f0 = (p_64 | p_62.f1);
    }
    else
    {
        struct S1 l_360 = {-7L,0xA106F14DL,1L,0x18L};
        l_360 = l_359;
        g_252 = (0x7DFEB3A6L == l_360.f3);
        g_252 = l_361;
    }
    p_60.f0 = l_359.f0;
    return g_89;
}







static struct S1 func_65(unsigned short p_66)
{
    unsigned short l_75 = 0x5B1EL;
    int l_123 = (-4L);
    int l_151 = 0xDFD19A34L;
    int l_153 = 0L;
    int l_160 = (-1L);
    unsigned short l_161 = 1UL;
    struct S0 l_197 = {0x58BBB98BL,-1L,4294967289UL,0xAC35BFF9L,0UL,0x8BL,0x7B596F50L,0xD3159323L,-1L};
    const union U4 l_215 = {0xB4BD51CDL};
    struct S1 l_253 = {1L,0x97A160B6L,-1L,0x92L};
    struct S1 l_255 = {0xB073FBF9L,0x241E13D4L,0L,0x72L};
    int l_269 = (-2L);
    int l_271 = 1L;
    int l_284 = 0x46315E2CL;
    struct S2 l_296 = {0xA3C41323L,0x1752L,1UL,0x6AB8L,0xD604C6C6L,4294967286UL,0x3E76L,0x944A458AL,6L};
    struct S0 l_299 = {1UL,-9L,1UL,0xC65C24B9L,0xAAF63181L,0x19L,-10L,1UL,0L};
    short l_344 = 0xACAFL;
lbl_192:
    for (g_18.f6 = 18; (g_18.f6 != 38); g_18.f6 = safe_add_func_uint32_t_u_u(g_18.f6, 9))
    {
        struct S0 l_84 = {4294967294UL,1L,0x82763D23L,0xC2C54013L,0UL,-6L,-1L,0x27CDBDB1L,-6L};
        unsigned l_122 = 4294967295UL;
        int l_142 = 0xB54D3951L;
        int l_158 = 0x960850B4L;
        g_70--;
        if ((g_42.f4 <= ((safe_lshift_func_uint16_t_u_u(((0x8933AC5CL <= p_66) || l_75), (safe_lshift_func_int16_t_s_s(p_66, (safe_div_func_int16_t_s_s((safe_sub_func_uint32_t_u_u(4294967295UL, func_82(l_84))), l_84.f1)))))) == l_75)))
        {
            short l_109 = (-1L);
            l_109 = (g_18.f1 != l_75);
            if (g_89.f6)
                goto lbl_192;
        }
        else
        {
            int l_119 = (-10L);
            int l_144 = 0L;
            int l_145 = 0xCFAA4479L;
            int l_146 = (-1L);
            int l_148 = 5L;
            int l_156 = 0x68FDB46EL;
            int l_157 = 0xDA9155C0L;
            int l_159 = 1L;
            unsigned l_187 = 4UL;
            if ((l_84.f6 | g_89.f2.f7))
            {
                unsigned l_121 = 0x65899406L;
                int l_124 = 0xFB1E1F64L;
                unsigned l_125 = 0x37666566L;
                int l_147 = 0x5227D837L;
                int l_150 = 0x9BFE5C00L;
                int l_154 = (-2L);
                struct S1 l_166 = {0xBF4A9A9FL,1L,0xB664L,0x11L};
                union U4 l_174 = {0xAEBB82BAL};
                l_123 &= ((((-10L) ^ (safe_div_func_int32_t_s_s(((func_82(g_42) , (safe_add_func_uint32_t_u_u(((65532UL & (((((safe_mod_func_int32_t_s_s((0xE77D4040L & p_66), g_89.f3.f2)) ^ (g_120 ^= ((g_89.f4.f1 < (((g_89.f4.f3 = ((safe_add_func_uint8_t_u_u((((g_118 ^= (l_84.f6 , p_66)) || g_18.f6) , g_89.f5), l_119)) >= p_66)) <= 0xD1L) && 0UL)) < p_66))) == g_42.f3) == (-1L)) , g_89.f2.f6)) != l_121), g_18.f4))) && l_121), p_66))) , l_122) , 0L);
                if (g_89.f2.f6)
                    continue;
                ++l_125;
                if ((safe_lshift_func_uint16_t_u_u((g_18.f0 == ((g_138 = (g_18.f6 <= (safe_mod_func_uint16_t_u_u((safe_div_func_int8_t_s_s((g_89.f0 = (l_84.f4 ^ (((p_66 , (((((safe_add_func_uint16_t_u_u((l_84.f8 && (65526UL >= 0xA760L)), ((g_89.f3.f5 ^ (p_66 != 0x88DAL)) ^ l_84.f1))) & p_66) < p_66) != g_89.f2.f0) < p_66)) == p_66) > g_89.f0))), 1L)), g_89.f3.f3)))) >= 5UL)), g_89.f3.f7)))
                {
                    int l_139 = 8L;
                    l_139 = g_89.f3.f8;
                    for (p_66 = 0; (p_66 <= 42); p_66 = safe_add_func_uint16_t_u_u(p_66, 8))
                    {
                        if (g_89.f3.f2)
                            break;
                    }
                    l_142 &= p_66;
                }
                else
                {
                    int l_143 = 0L;
                    int l_149 = 0xE6B1BB55L;
                    int l_152 = 0x1ADF2D24L;
                    int l_155 = 0x38AD10CEL;
                    l_161--;
                    for (l_123 = (-7); (l_123 == (-25)); --l_123)
                    {
                        g_89.f4 = l_166;
                        if (g_89.f7.f2)
                            continue;
                        if (l_161)
                            break;
                        g_89.f2.f7 &= ((g_118 = 0x79L) >= (safe_add_func_int8_t_s_s(p_66, ((safe_div_func_int16_t_s_s((g_18.f5 >= (safe_rshift_func_uint8_t_u_u(((safe_unary_minus_func_uint8_t_u((l_151 = l_166.f1))) <= (l_174 , (((safe_div_func_uint8_t_u_u(p_66, (safe_sub_func_uint8_t_u_u(l_124, g_89.f2.f2)))) != (safe_rshift_func_int8_t_s_u(g_89.f4.f3, 4))) >= l_123))), l_161))), g_42.f8)) > (-4L)))));
                    }
                    for (l_84.f4 = 0; (l_84.f4 > 45); l_84.f4 = safe_add_func_uint16_t_u_u(l_84.f4, 3))
                    {
                        unsigned char l_183 = 0x5BL;
                        g_89.f4 = g_89.f4;
                        l_183--;
                    }
                }
            }
            else
            {
                l_144 = (g_42 , g_42.f7);
                if (l_159)
                    break;
                ++l_187;
            }
            l_123 = (safe_div_func_int16_t_s_s(((l_146 | p_66) <= 65535UL), g_89.f2.f5));
            g_89.f4 = g_89.f4;
        }
        l_142 = p_66;
        l_123 |= func_82(l_84);
    }
    if ((safe_lshift_func_uint16_t_u_s((safe_add_func_int32_t_s_s((l_151 == (g_89.f3.f0 = func_82(l_197))), ((((safe_mod_func_uint8_t_u_u((safe_add_func_int16_t_s_s(g_18.f5, ((((l_153 = ((g_70 = (0xACL < (safe_mod_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u((l_123 = (g_207--)), p_66)), p_66)))) , (l_197.f1 ^ p_66))) <= p_66) && g_89.f2.f5) == 0x5720L))), l_197.f7)) < g_42.f2) >= 1UL) | p_66))), 3)))
    {
        unsigned char l_212 = 254UL;
        struct S2 l_216 = {0L,65534UL,0x1D911E64L,0x5358L,0x98CD050AL,1UL,0xC9F7L,-1L,0x75FEBA5AL};
        int l_217 = 2L;
        struct S0 l_220 = {5UL,1L,5UL,1L,0x117EA6B4L,0L,-10L,0x78732CC3L,0L};
        union U4 l_225 = {0xBCAB29ADL};
        unsigned char l_228 = 1UL;
        l_216.f0 = (l_75 ^ (safe_div_func_uint16_t_u_u((l_212 , (safe_rshift_func_uint16_t_u_s((p_66 || ((l_215 , g_89.f7.f0) < ((l_215.f4 >= ((g_89.f5 != (l_216 , 0xEAF9L)) | p_66)) != 0x7043L))), 3))), p_66)));
        g_89.f2.f0 = ((g_89.f3.f1 = (p_66 = (func_82(g_42) , (l_216.f0 ^= (l_216.f7 = l_217))))) , ((((safe_sub_func_uint32_t_u_u(func_82(l_220), p_66)) != ((safe_lshift_func_uint16_t_u_s(l_217, 7)) | (safe_add_func_uint8_t_u_u(((l_225 , (safe_lshift_func_uint16_t_u_s(l_220.f6, l_160))) && 0L), l_216.f2)))) <= p_66) > p_66));
        l_160 = (l_228 & (p_66 | (l_153 = func_82(l_220))));
    }
    else
    {
        unsigned l_231 = 3UL;
        int l_232 = 0xFC0C68FDL;
        short l_249 = 0x1A63L;
        struct S1 l_254 = {0xDFEED02CL,7L,0x4140L,-2L};
        int l_266 = 0xDD6611CEL;
        int l_270 = (-1L);
        int l_273 = 0x1788FD81L;
        union U4 l_324 = {0xD015392CL};
        l_160 = ((g_89.f3.f7 , p_66) && ((safe_mod_func_uint16_t_u_u((l_231 ^ 0x798E0782L), 0x1717L)) > (l_232 = 0x9DACL)));
        if ((safe_lshift_func_uint16_t_u_u(((((((g_89.f3.f0 ^= (0x1EL > (0UL <= g_89.f2.f5))) | ((safe_lshift_func_uint8_t_u_u(((0x624F099CL || (safe_add_func_int16_t_s_s((((safe_rshift_func_int8_t_s_u(p_66, l_215.f4)) < p_66) & ((safe_div_func_int8_t_s_s(g_89.f7.f8, (((g_246--) | p_66) & l_249))) != g_89.f2.f6)), p_66))) == g_18.f5), g_89.f3.f6)) == l_215.f0)) ^ g_89.f2.f4) | l_232) < 4294967295UL) <= g_42.f5), 0)))
        {
            g_252 |= (safe_mod_func_uint32_t_u_u(p_66, (func_82(l_197) , func_82(g_42))));
        }
        else
        {
            l_255 = (l_253 = (l_254 = l_253));
        }
        if ((func_82(g_42) >= (safe_div_func_uint16_t_u_u((g_89.f2.f6 == (g_118 = l_215.f0)), ((((l_231 , (l_254.f2 , p_66)) == ((g_258 , 0x6BAA813BL) ^ l_254.f2)) || l_254.f0) & g_89.f2.f6)))))
        {
            int l_268 = (-9L);
            int l_272 = 0x37590032L;
            int l_281 = 1L;
            int l_282 = 0L;
            int l_285 = (-8L);
            unsigned l_290 = 8UL;
            struct S1 l_310 = {0xE9B0BE5CL,-1L,0x987CL,0x8CL};
            struct S0 l_311 = {0x127DF0E0L,0L,8UL,-6L,4294967295UL,0x88L,0L,1UL,0x421FL};
            for (g_246 = 0; (g_246 == 16); g_246++)
            {
                int l_264 = 0x1B7C7B12L;
                int l_278 = 0xA85B3E65L;
                int l_279 = 0L;
                int l_280 = 0xA8730B52L;
                int l_283 = 0x23042A75L;
                struct S0 l_312 = {4294967295UL,0x23L,1UL,-1L,4294967286UL,1L,1L,0xBD4E4870L,0x3272L};
                for (l_151 = 0; (l_151 > 17); l_151 = safe_add_func_uint8_t_u_u(l_151, 3))
                {
                    short l_263 = 0L;
                    int l_265 = 0L;
                    int l_267 = (-2L);
                    struct S0 l_289 = {0x29FDDACFL,0x15L,0xCBFC918AL,0xD33F60CFL,0x7D2F1C11L,0x4BL,0x95E3B4EDL,4294967286UL,0x8C5BL};
                    g_275--;
                    --g_286;
                    if (((0L > func_82(l_289)) || l_290))
                    {
                        struct S2 l_293 = {0x00607C4CL,0x5952L,0x02C24788L,0xBF50L,4294967289UL,4294967291UL,0UL,0x79782215L,-6L};
                        short l_300 = 3L;
                        l_284 &= (safe_add_func_uint16_t_u_u((((l_293 , 9UL) ^ (safe_sub_func_int16_t_s_s((g_246 != (((((l_296 , (safe_mod_func_uint8_t_u_u((((func_82((l_272 , l_299)) != (g_89.f2.f7 > p_66)) ^ l_293.f7) >= l_197.f4), p_66))) >= p_66) || l_300) < 0L) == 0xAFL)), g_89.f7.f6))) <= 0x4CL), 65532UL));
                    }
                    else
                    {
                        short l_303 = 0x9288L;
                        g_258.f0 ^= (((func_82(l_197) > ((l_303 &= (l_279 = (0xE19EL && (0xBCF66C92L == (safe_sub_func_uint8_t_u_u(g_89.f3.f8, (!p_66))))))) | 1UL)) , l_75) >= (safe_rshift_func_uint16_t_u_s(l_273, g_18.f6)));
                        g_18.f0 = l_273;
                        if (l_273)
                            break;
                        g_89.f7.f7 ^= (l_255.f0 = (g_306 > ((g_42 , (0xB3F8L >= 4UL)) && 246UL)));
                    }
                }
                if (l_215.f0)
                    break;
                if ((safe_mod_func_uint32_t_u_u(l_279, l_272)))
                {
                    l_253.f0 = p_66;
                }
                else
                {
                    struct S1 l_309 = {0x52B36915L,0x50CD63C0L,4L,0x62L};
                    unsigned l_314 = 0x1F37000EL;
                    int l_321 = 0L;
                    int l_325 = 1L;
                    l_310 = l_309;
                    if (func_82(l_311))
                    {
                        char l_313 = 0xD3L;
                        g_89.f7.f0 = func_82(l_312);
                        l_314--;
                        l_279 |= (0x11E4L || ((p_66 ^ (l_309.f0 = l_231)) >= (safe_mod_func_uint16_t_u_u(((((safe_lshift_func_uint16_t_u_s(((l_321 ^= 65528UL) != l_296.f0), 2)) ^ (safe_sub_func_uint8_t_u_u(l_249, ((l_160 && ((l_324 , ((l_325 ^= (0x02L & 0xA1L)) | g_206)) > 1UL)) > g_206)))) >= 0x9CL) < p_66), g_89.f7.f2))));
                    }
                    else
                    {
                        l_266 &= g_286;
                        if (g_89.f3.f1)
                            break;
                    }
                    l_255 = l_254;
                }
            }
            l_254 = g_89.f4;
            g_274 = p_66;
        }
        else
        {
            short l_326 = 0x311DL;
            int l_327 = (-1L);
            int l_328 = 0xE36CFAE2L;
            int l_329 = (-2L);
            int l_330 = 1L;
            unsigned l_331 = 0xBB721014L;
            l_331--;
            l_324.f1 = 1L;

                        l_253.f0 &= (0xEBL | 0L);
        }
    }
    l_344 ^= (safe_lshift_func_int16_t_s_u((-1L), (((g_274 ^= (safe_add_func_int8_t_s_s((g_258.f0 < ((safe_div_func_int16_t_s_s((p_66 >= (l_255.f0 ^= ((4L || (safe_mod_func_uint8_t_u_u((safe_sub_func_int16_t_s_s(g_89.f2.f6, (func_82(l_197) ^ p_66))), p_66))) , p_66))), l_299.f0)) < g_138)), (-2L)))) <= 0xD9C7C9A2L) != 3L)));
    l_284 = 0xE1BFAC9CL;
    return l_255;
}







static unsigned func_82(struct S0 p_83)
{
    unsigned short l_85 = 0xA87EL;
    int l_88 = 0x31D74955L;
    struct S1 l_92 = {0x539F82ECL,-1L,0x773DL,-3L};
    char l_103 = 0xEAL;
lbl_104:
    l_85--;
    if (((l_88 = l_85) , (g_89 , (!(safe_lshift_func_uint8_t_u_s((g_89.f3.f7 == (p_83.f5 , (l_92 , p_83.f0))), 1))))))
    {
        return l_92.f3;
    }
    else
    {
        unsigned short l_99 = 1UL;
        for (g_89.f6 = 0; (g_89.f6 >= 29); ++g_89.f6)
        {
            unsigned char l_102 = 0xDAL;
            l_103 |= ((safe_rshift_func_uint16_t_u_s(((safe_div_func_uint32_t_u_u(0xB2B8B245L, (g_89.f2.f1 , l_99))) | p_83.f6), (l_85 <= (safe_sub_func_uint16_t_u_u((l_102 < ((l_88 |= ((-1L) | (l_102 >= (p_83.f1 >= l_92.f2)))) || l_92.f3)), 0UL))))) , 0x786C87C1L);
            g_89.f4 = l_92;
        }
        if (g_89.f3.f8)
            goto lbl_104;
        if (g_89.f7.f0)
            goto lbl_108;
lbl_108:
        for (g_89.f3.f5 = 21; (g_89.f3.f5 >= 12); g_89.f3.f5 = safe_sub_func_int16_t_s_s(g_89.f3.f5, 4))
        {
            unsigned short l_107 = 2UL;
            return l_107;
        }
        g_18.f0 ^= p_83.f8;
    }
    return l_92.f1;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_18.f0, "g_18.f0", print_hash_value);
    transparent_crc(g_18.f1, "g_18.f1", print_hash_value);
    transparent_crc(g_18.f2, "g_18.f2", print_hash_value);
    transparent_crc(g_18.f3, "g_18.f3", print_hash_value);
    transparent_crc(g_18.f4, "g_18.f4", print_hash_value);
    transparent_crc(g_18.f5, "g_18.f5", print_hash_value);
    transparent_crc(g_18.f6, "g_18.f6", print_hash_value);
    transparent_crc(g_18.f7, "g_18.f7", print_hash_value);
    transparent_crc(g_18.f8, "g_18.f8", print_hash_value);
    transparent_crc(g_42.f0, "g_42.f0", print_hash_value);
    transparent_crc(g_42.f1, "g_42.f1", print_hash_value);
    transparent_crc(g_42.f2, "g_42.f2", print_hash_value);
    transparent_crc(g_42.f3, "g_42.f3", print_hash_value);
    transparent_crc(g_42.f4, "g_42.f4", print_hash_value);
    transparent_crc(g_42.f5, "g_42.f5", print_hash_value);
    transparent_crc(g_42.f6, "g_42.f6", print_hash_value);
    transparent_crc(g_42.f7, "g_42.f7", print_hash_value);
    transparent_crc(g_42.f8, "g_42.f8", print_hash_value);
    transparent_crc(g_48, "g_48", print_hash_value);
    transparent_crc(g_70, "g_70", print_hash_value);
    transparent_crc(g_89.f0, "g_89.f0", print_hash_value);
    transparent_crc(g_89.f1, "g_89.f1", print_hash_value);
    transparent_crc(g_89.f2.f0, "g_89.f2.f0", print_hash_value);
    transparent_crc(g_89.f2.f1, "g_89.f2.f1", print_hash_value);
    transparent_crc(g_89.f2.f2, "g_89.f2.f2", print_hash_value);
    transparent_crc(g_89.f2.f3, "g_89.f2.f3", print_hash_value);
    transparent_crc(g_89.f2.f4, "g_89.f2.f4", print_hash_value);
    transparent_crc(g_89.f2.f5, "g_89.f2.f5", print_hash_value);
    transparent_crc(g_89.f2.f6, "g_89.f2.f6", print_hash_value);
    transparent_crc(g_89.f2.f7, "g_89.f2.f7", print_hash_value);
    transparent_crc(g_89.f2.f8, "g_89.f2.f8", print_hash_value);
    transparent_crc(g_89.f3.f0, "g_89.f3.f0", print_hash_value);
    transparent_crc(g_89.f3.f1, "g_89.f3.f1", print_hash_value);
    transparent_crc(g_89.f3.f2, "g_89.f3.f2", print_hash_value);
    transparent_crc(g_89.f3.f3, "g_89.f3.f3", print_hash_value);
    transparent_crc(g_89.f3.f4, "g_89.f3.f4", print_hash_value);
    transparent_crc(g_89.f3.f5, "g_89.f3.f5", print_hash_value);
    transparent_crc(g_89.f3.f6, "g_89.f3.f6", print_hash_value);
    transparent_crc(g_89.f3.f7, "g_89.f3.f7", print_hash_value);
    transparent_crc(g_89.f3.f8, "g_89.f3.f8", print_hash_value);
    transparent_crc(g_89.f4.f0, "g_89.f4.f0", print_hash_value);
    transparent_crc(g_89.f4.f1, "g_89.f4.f1", print_hash_value);
    transparent_crc(g_89.f4.f2, "g_89.f4.f2", print_hash_value);
    transparent_crc(g_89.f4.f3, "g_89.f4.f3", print_hash_value);
    transparent_crc(g_89.f5, "g_89.f5", print_hash_value);
    transparent_crc(g_89.f6, "g_89.f6", print_hash_value);
    transparent_crc(g_89.f7.f0, "g_89.f7.f0", print_hash_value);
    transparent_crc(g_89.f7.f1, "g_89.f7.f1", print_hash_value);
    transparent_crc(g_89.f7.f2, "g_89.f7.f2", print_hash_value);
    transparent_crc(g_89.f7.f3, "g_89.f7.f3", print_hash_value);
    transparent_crc(g_89.f7.f4, "g_89.f7.f4", print_hash_value);
    transparent_crc(g_89.f7.f5, "g_89.f7.f5", print_hash_value);
    transparent_crc(g_89.f7.f6, "g_89.f7.f6", print_hash_value);
    transparent_crc(g_89.f7.f7, "g_89.f7.f7", print_hash_value);
    transparent_crc(g_89.f7.f8, "g_89.f7.f8", print_hash_value);
    transparent_crc(g_118, "g_118", print_hash_value);
    transparent_crc(g_120, "g_120", print_hash_value);
    transparent_crc(g_138, "g_138", print_hash_value);
    transparent_crc(g_186, "g_186", print_hash_value);
    transparent_crc(g_206, "g_206", print_hash_value);
    transparent_crc(g_207, "g_207", print_hash_value);
    transparent_crc(g_245, "g_245", print_hash_value);
    transparent_crc(g_246, "g_246", print_hash_value);
    transparent_crc(g_252, "g_252", print_hash_value);
    transparent_crc(g_258.f0, "g_258.f0", print_hash_value);
    transparent_crc(g_258.f1, "g_258.f1", print_hash_value);
    transparent_crc(g_258.f2, "g_258.f2", print_hash_value);
    transparent_crc(g_258.f3, "g_258.f3", print_hash_value);
    transparent_crc(g_274, "g_274", print_hash_value);
    transparent_crc(g_275, "g_275", print_hash_value);
    transparent_crc(g_286, "g_286", print_hash_value);
    transparent_crc(g_306, "g_306", print_hash_value);
    transparent_crc(g_346.f0, "g_346.f0", print_hash_value);
    transparent_crc(g_346.f1, "g_346.f1", print_hash_value);
    transparent_crc(g_346.f2, "g_346.f2", print_hash_value);
    transparent_crc(g_346.f3, "g_346.f3", print_hash_value);
    transparent_crc(g_356, "g_356", print_hash_value);
    transparent_crc(g_369, "g_369", print_hash_value);
    transparent_crc(g_370, "g_370", print_hash_value);
    transparent_crc(g_379, "g_379", print_hash_value);
    transparent_crc(g_389, "g_389", print_hash_value);
    transparent_crc(g_394, "g_394", print_hash_value);
    transparent_crc(g_398, "g_398", print_hash_value);
    transparent_crc(g_400, "g_400", print_hash_value);
    transparent_crc(g_401, "g_401", print_hash_value);
    transparent_crc(g_403, "g_403", print_hash_value);
    transparent_crc(g_428.f0, "g_428.f0", print_hash_value);
    transparent_crc(g_428.f1, "g_428.f1", print_hash_value);
    transparent_crc(g_428.f2, "g_428.f2", print_hash_value);
    transparent_crc(g_428.f3, "g_428.f3", print_hash_value);
    transparent_crc(g_428.f4, "g_428.f4", print_hash_value);
    transparent_crc(g_515, "g_515", print_hash_value);
    transparent_crc(g_584.f0, "g_584.f0", print_hash_value);
    transparent_crc(g_584.f1, "g_584.f1", print_hash_value);
    transparent_crc(g_584.f2.f0, "g_584.f2.f0", print_hash_value);
    transparent_crc(g_584.f2.f1, "g_584.f2.f1", print_hash_value);
    transparent_crc(g_584.f2.f2, "g_584.f2.f2", print_hash_value);
    transparent_crc(g_584.f2.f3, "g_584.f2.f3", print_hash_value);
    transparent_crc(g_584.f2.f4, "g_584.f2.f4", print_hash_value);
    transparent_crc(g_584.f2.f5, "g_584.f2.f5", print_hash_value);
    transparent_crc(g_584.f2.f6, "g_584.f2.f6", print_hash_value);
    transparent_crc(g_584.f2.f7, "g_584.f2.f7", print_hash_value);
    transparent_crc(g_584.f2.f8, "g_584.f2.f8", print_hash_value);
    transparent_crc(g_584.f3.f0, "g_584.f3.f0", print_hash_value);
    transparent_crc(g_584.f3.f1, "g_584.f3.f1", print_hash_value);
    transparent_crc(g_584.f3.f2, "g_584.f3.f2", print_hash_value);
    transparent_crc(g_584.f3.f3, "g_584.f3.f3", print_hash_value);
    transparent_crc(g_584.f3.f4, "g_584.f3.f4", print_hash_value);
    transparent_crc(g_584.f3.f5, "g_584.f3.f5", print_hash_value);
    transparent_crc(g_584.f3.f6, "g_584.f3.f6", print_hash_value);
    transparent_crc(g_584.f3.f7, "g_584.f3.f7", print_hash_value);
    transparent_crc(g_584.f3.f8, "g_584.f3.f8", print_hash_value);
    transparent_crc(g_584.f4.f0, "g_584.f4.f0", print_hash_value);
    transparent_crc(g_584.f4.f1, "g_584.f4.f1", print_hash_value);
    transparent_crc(g_584.f4.f2, "g_584.f4.f2", print_hash_value);
    transparent_crc(g_584.f4.f3, "g_584.f4.f3", print_hash_value);
    transparent_crc(g_584.f5, "g_584.f5", print_hash_value);
    transparent_crc(g_584.f6, "g_584.f6", print_hash_value);
    transparent_crc(g_584.f7.f0, "g_584.f7.f0", print_hash_value);
    transparent_crc(g_584.f7.f1, "g_584.f7.f1", print_hash_value);
    transparent_crc(g_584.f7.f2, "g_584.f7.f2", print_hash_value);
    transparent_crc(g_584.f7.f3, "g_584.f7.f3", print_hash_value);
    transparent_crc(g_584.f7.f4, "g_584.f7.f4", print_hash_value);
    transparent_crc(g_584.f7.f5, "g_584.f7.f5", print_hash_value);
    transparent_crc(g_584.f7.f6, "g_584.f7.f6", print_hash_value);
    transparent_crc(g_584.f7.f7, "g_584.f7.f7", print_hash_value);
    transparent_crc(g_584.f7.f8, "g_584.f7.f8", print_hash_value);
    transparent_crc(g_632, "g_632", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
