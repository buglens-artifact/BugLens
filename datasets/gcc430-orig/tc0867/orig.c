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
   unsigned f0 : 1;
   signed f1 : 20;
   volatile unsigned f2 : 7;
   unsigned char f3;
   volatile unsigned f4 : 15;
   unsigned f5 : 1;
   volatile unsigned : 0;
   signed f6 : 26;
};


static int g_3 = 0xBF90EDCAL;
static int g_16 = 0xC039ECF4L;
static char g_25 = 0xF9L;
static struct S0 g_75 = {0,283,8,1UL,8,0,-7577};
static unsigned char g_77 = 253UL;
static volatile struct S0 g_78 = {0,196,6,0x33L,129,0,-1164};
static volatile struct S0 g_79 = {0,-391,0,0UL,17,0,-1396};
static unsigned g_84 = 0xBBA4BA9EL;
static unsigned short g_88 = 4UL;
static short g_110 = 0xEF56L;
static unsigned g_113 = 0xFD683588L;
static char g_145 = 2L;
static struct S0 g_146 = {0,783,9,0xE3L,51,0,4578};
static volatile struct S0 g_149 = {0,122,4,0x98L,127,0,3399};
static volatile struct S0 g_165 = {0,-583,10,0x0DL,57,0,4875};
static volatile struct S0 g_166 = {0,-345,6,255UL,89,0,1488};
static volatile struct S0 g_167 = {0,246,7,0xD1L,116,0,6906};
static volatile struct S0 g_171 = {0,293,8,0xDFL,61,0,-5953};
static short g_193 = 1L;
static struct S0 g_218 = {0,105,8,255UL,166,0,3894};
static struct S0 g_226 = {0,-990,3,0xD3L,128,0,-2180};
static struct S0 g_227 = {0,317,4,6UL,141,0,4112};
static volatile struct S0 g_262 = {0,-385,8,0x95L,59,0,4260};
static volatile struct S0 g_263 = {0,-820,1,0x7FL,179,0,3184};
static volatile struct S0 g_330 = {0,-781,2,250UL,77,0,-1979};
static volatile struct S0 g_331 = {0,18,4,1UL,172,0,3346};
static volatile struct S0 g_332 = {0,-33,5,255UL,139,0,-6731};
static volatile struct S0 g_335 = {0,553,4,0UL,64,0,-2486};
static const struct S0 g_346 = {0,304,1,1UL,53,0,7952};
static volatile struct S0 g_365 = {0,459,0,0x89L,67,0,-647};
static struct S0 g_373 = {0,-708,9,1UL,75,0,4094};
static struct S0 g_374 = {0,-441,2,252UL,155,0,-7604};
static volatile struct S0 g_401 = {0,546,0,1UL,135,0,6249};
static volatile struct S0 g_402 = {0,974,4,0xE4L,48,0,-4131};
static struct S0 g_411 = {0,-144,3,0xB2L,116,0,7942};
static struct S0 g_412 = {0,951,1,0x4FL,71,0,7801};
static struct S0 g_413 = {0,318,3,0x8FL,67,0,7332};
static struct S0 g_414 = {0,334,10,246UL,28,0,-3547};
static const volatile struct S0 g_415 = {0,443,2,1UL,155,0,3330};
static struct S0 g_435 = {0,-765,0,0x42L,158,0,5377};
static volatile struct S0 g_453 = {0,548,5,0UL,91,0,2947};
static volatile struct S0 g_454 = {0,901,3,2UL,57,0,3557};
static volatile struct S0 g_455 = {0,939,5,255UL,100,0,6599};
static struct S0 g_456 = {0,-1018,8,0x02L,169,0,-5194};
static struct S0 g_457 = {0,952,4,0xFFL,6,0,3532};
static struct S0 g_458 = {0,-861,1,0UL,35,0,-2228};
static volatile struct S0 g_459 = {0,-605,8,255UL,114,0,-1692};
static volatile struct S0 g_460 = {0,291,7,0xB6L,85,0,273};
static struct S0 g_469 = {0,296,10,255UL,157,0,-3028};
static struct S0 g_470 = {0,-625,10,0x2AL,79,0,2216};
static struct S0 g_471 = {0,362,5,1UL,173,0,1106};
static short g_490 = 0L;
static struct S0 g_491 = {0,-962,5,0xC8L,91,0,-3232};
static struct S0 g_571 = {0,936,1,1UL,133,0,3240};
static struct S0 g_572 = {0,-741,7,1UL,138,0,-7234};
static volatile struct S0 g_573 = {0,-624,8,0x34L,110,0,-1596};
static volatile struct S0 g_574 = {0,-310,5,255UL,124,0,2955};
static volatile struct S0 g_575 = {0,859,8,0xDEL,145,0,-7360};
static volatile struct S0 g_576 = {0,519,0,2UL,27,0,1667};
static volatile struct S0 g_600 = {0,-171,10,0x0BL,125,0,-5304};
static volatile struct S0 g_601 = {0,804,5,9UL,82,0,2121};
static const struct S0 g_626 = {0,-169,10,0xE6L,157,0,-5125};
static struct S0 g_627 = {0,832,9,255UL,175,0,4889};
static unsigned short g_651 = 65529UL;
static int g_667 = 0xF62859FBL;
static volatile struct S0 g_683 = {0,313,10,0x11L,0,0,890};
static volatile struct S0 g_684 = {0,-833,0,0x42L,109,0,6485};
static unsigned g_709 = 0xD3924ED6L;
static struct S0 g_738 = {0,-402,8,0xF7L,72,0,6487};
static volatile struct S0 g_740 = {0,-939,7,0UL,129,0,-4968};
static volatile struct S0 g_741 = {0,927,1,5UL,92,0,2385};
static unsigned char g_791 = 1UL;
static volatile struct S0 g_793 = {0,-1016,3,2UL,146,0,7850};
static volatile struct S0 g_794 = {0,373,5,1UL,180,0,3940};
static volatile struct S0 g_795 = {0,965,2,247UL,119,0,3964};
static unsigned g_809 = 3UL;
static volatile struct S0 g_822 = {0,-12,5,255UL,18,0,-1906};
static volatile struct S0 g_823 = {0,948,8,0xDCL,75,0,-7116};
static struct S0 g_828 = {0,645,3,250UL,100,0,-4463};
static struct S0 g_829 = {0,210,3,0xC5L,25,0,814};
static int g_854 = 0x2DCE3C53L;
static struct S0 g_856 = {0,159,1,0xD9L,77,0,-934};
static struct S0 g_857 = {0,-562,2,0UL,11,0,-5889};
static unsigned short g_865 = 0x50AFL;
static struct S0 g_868 = {0,-150,8,0UL,7,0,-251};
static struct S0 g_890 = {0,-674,5,0x9CL,110,0,450};
static struct S0 g_891 = {0,-667,2,0UL,173,0,-5485};
static struct S0 g_892 = {0,-263,3,0x74L,126,0,16};
static struct S0 g_900 = {0,806,9,0x13L,138,0,-2812};
static struct S0 g_901 = {0,956,3,0x50L,96,0,601};
static int g_952 = 0xD946A25FL;
static struct S0 g_967 = {0,840,9,255UL,127,0,5913};
static volatile struct S0 g_995 = {0,-399,6,1UL,50,0,-3919};
static volatile struct S0 g_1010 = {0,420,1,1UL,172,0,3561};
static volatile struct S0 g_1011 = {0,928,9,0x6AL,63,0,1036};



static unsigned char func_1(void);
static int func_4(short p_5, unsigned short p_6, unsigned p_7, char p_8, short p_9);
static short func_10(unsigned short p_11, unsigned p_12, int p_13, int p_14, int p_15);
static const unsigned short func_19(unsigned short p_20, int p_21, int p_22, unsigned short p_23);
static unsigned func_27(unsigned p_28, short p_29);
static unsigned func_38(unsigned char p_39, char p_40, unsigned p_41);
static const unsigned func_46(int p_47);
static int func_48(short p_49, unsigned p_50);
static short func_51(unsigned char p_52, const int p_53, const int p_54, unsigned p_55, unsigned short p_56);
static unsigned short func_60(char p_61, char p_62, unsigned short p_63);
static unsigned char func_1(void)
{
    unsigned l_2 = 0xE6DA5043L;
    int l_26 = 0xF29C8DDAL;
    int l_985 = 0L;
    int l_986 = 0xA434F4F5L;
    int l_1009 = 0L;
    g_3 = l_2;
    if (func_4(g_3, (g_651 = (0UL > func_10((g_16 = g_3), l_2, g_3, (l_26 = (safe_sub_func_int32_t_s_s(g_3, (func_19(l_2, l_2, l_2, g_3) != l_2)))), l_2))), l_2, l_2, l_2))
    {
        g_335.f6 = g_171.f2;
    }
    else
    {
        int l_987 = (-1L);
        int l_988 = 0xC6C3DEC5L;
        unsigned char l_994 = 0x94L;
        int l_1008 = 0x617608D7L;
        if (((g_684.f6 != ((g_571.f6 < (l_26 = g_146.f5)) < (safe_lshift_func_uint16_t_u_s(((safe_mod_func_int16_t_s_s(0x88F7L, g_470.f5)) > (safe_div_func_int8_t_s_s(g_572.f1, func_27(func_19((0xE639CBC6L < (safe_lshift_func_uint16_t_u_u((l_986 = (((!(safe_mod_func_uint32_t_u_u(g_346.f3, (l_985 = g_412.f0)))) != g_226.f5) == 0xB21EB06BL)), l_987))), l_988, g_627.f3, g_346.f6), g_571.f3)))), 4)))) & g_667))
        {
            const int l_991 = 0L;
            l_987 = func_38(l_986, (safe_sub_func_uint32_t_u_u(3UL, l_991)), (g_84 = (g_684.f0 | (g_414.f1 >= l_987))));
            g_79 = g_415;
        }
        else
        {
            for (g_113 = 0; (g_113 > 33); g_113 = safe_add_func_int8_t_s_s(g_113, 8))
            {
                if (l_994)
                    break;
                g_738 = g_995;
                if (g_374.f6)
                    break;
            }
        }
        g_684.f6 = (func_27(g_491.f1, l_987) || (l_1008 = (safe_rshift_func_uint16_t_u_s((((((~(safe_mod_func_int16_t_s_s(g_600.f4, g_374.f6))) <= (((safe_div_func_int16_t_s_s((g_572.f5 || (safe_div_func_int32_t_s_s(0x280BE7C1L, (safe_add_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s(((l_26 ^ g_738.f3) != g_469.f3), l_994)), 0x3C87L))))), l_1008)) <= l_1009) <= g_892.f3)) <= l_985) | 0x09L) && 7L), g_491.f1))));
        g_1010 = g_263;
        g_1011 = g_263;
    }
    l_986 = ((((safe_lshift_func_int8_t_s_u(0x2EL, 2)) >= g_856.f3) | (safe_div_func_uint16_t_u_u((l_985 & (!255UL)), l_985))) > (0xF6B6L > (safe_mod_func_int32_t_s_s(((l_26 >= l_1009) >= ((!(((safe_unary_minus_func_int16_t_s((safe_rshift_func_uint16_t_u_u((safe_div_func_int8_t_s_s(g_411.f5, l_985)), 11)))) >= 0x6C17L) ^ (-10L))) == l_1009)), g_146.f1))));
    for (g_226.f3 = 0; (g_226.f3 <= 52); ++g_226.f3)
    {
        g_456.f1 = (safe_lshift_func_uint16_t_u_s(l_985, l_2));
    }
    return g_573.f3;
}







static int func_4(short p_5, unsigned short p_6, unsigned p_7, char p_8, short p_9)
{
    int l_652 = 0x48E2DB8CL;
    int l_697 = 0xF4DB8707L;
    unsigned l_754 = 0xE5E16EBAL;
    unsigned short l_888 = 0x437BL;
    g_411.f6 = l_652;
    for (p_6 = 0; (p_6 == 18); ++p_6)
    {
        char l_682 = 0x34L;
        int l_696 = (-10L);
        int l_766 = (-1L);
        unsigned short l_908 = 65529UL;
        unsigned l_951 = 4294967288UL;
        if ((l_652 = (g_572.f1 >= (1L && 0x450ECB6EL))))
        {
            char l_672 = 0x0BL;
            const unsigned short l_681 = 0xB6D2L;
            l_682 = (((0x5FD35780L && ((safe_div_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u(((safe_mod_func_int32_t_s_s((safe_mod_func_int32_t_s_s(0xB2A43D63L, (safe_rshift_func_uint8_t_u_s(((safe_sub_func_int32_t_s_s(p_7, (g_667 < g_469.f2))) | (safe_add_func_uint16_t_u_u((l_652 = ((safe_rshift_func_uint8_t_u_u((l_672 = 6UL), 4)) || ((safe_lshift_func_uint8_t_u_u(l_652, 6)) ^ (safe_mod_func_int32_t_s_s((safe_add_func_int32_t_s_s((g_113 <= (safe_add_func_int16_t_s_s((g_75.f1 == p_5), g_456.f5))), g_411.f6)), 0x311CB46CL))))), l_681))), 5)))), g_627.f3)) != 4294967294UL), g_373.f3)), l_681)) ^ (-1L))) ^ p_9) || 4294967295UL);
        }
        else
        {
            unsigned l_685 = 0x9F133274L;
            g_684 = g_683;
            l_685 = p_8;
            l_652 = p_8;
        }
        if ((safe_add_func_uint8_t_u_u(((g_470.f1 = (g_402.f0 != ((func_19(((-1L) ^ l_652), func_19((safe_rshift_func_uint8_t_u_u(1UL, g_456.f6)), l_652, (g_16 = (safe_div_func_int16_t_s_s((!(safe_sub_func_int8_t_s_s(((l_697 = (safe_div_func_int16_t_s_s((p_7 & (((l_696 = (p_7 || (p_8 <= 0xD6L))) >= l_652) > g_469.f3)), p_9))) || l_696), 250UL))), 0xC140L))), l_682), l_652, l_682) | 0xDAB8L) != 1UL))) != g_88), g_218.f6)))
        {
            unsigned char l_701 = 0UL;
            int l_704 = 0x0243F068L;
            unsigned char l_790 = 1UL;
            for (g_627.f3 = 0; (g_627.f3 < 55); g_627.f3 = safe_add_func_int32_t_s_s(g_627.f3, 1))
            {
                unsigned char l_700 = 0x4EL;
                l_701 = l_700;
            }
            for (g_413.f3 = 0; (g_413.f3 <= 53); ++g_413.f3)
            {
                l_704 = 0xE3B6F74BL;
                for (g_110 = 0; (g_110 >= (-15)); g_110 = safe_sub_func_int8_t_s_s(g_110, 9))
                {
                    g_574.f6 = p_8;
                    return p_9;
                }
            }
            if (p_9)
            {
                unsigned char l_732 = 249UL;
                int l_739 = 0x76BD99BBL;
                unsigned char l_771 = 0x15L;
                int l_792 = 0x2B844C22L;
                if ((l_697 = (safe_mod_func_uint16_t_u_u(g_709, func_60(func_46((safe_lshift_func_int16_t_s_u((l_696 = (!((safe_sub_func_uint16_t_u_u(0x8C68L, g_600.f4)) | 0L))), 8))), (p_7 && ((safe_mod_func_int32_t_s_s((p_8 != (safe_sub_func_uint8_t_u_u((safe_div_func_int32_t_s_s(((p_9 || ((g_490 = g_471.f5) == l_704)) > p_6), 1UL)), 247UL))), g_458.f5)) & g_457.f0)), p_6)))))
                {
                    unsigned char l_733 = 1UL;
                    g_412.f1 = 0x7F2EA517L;
                    g_330.f6 = (l_696 == ((((safe_lshift_func_uint8_t_u_s(((0x55E4AAB2L < 1L) || (l_696 ^ (safe_div_func_int32_t_s_s((safe_mod_func_uint8_t_u_u((((safe_rshift_func_uint8_t_u_s(p_7, (safe_mod_func_uint16_t_u_u(0x274DL, (safe_div_func_uint16_t_u_u((l_732 = p_6), l_696)))))) <= l_733) == p_7), 0x48L)), l_682)))), g_75.f3)) || p_5) >= p_8) || g_491.f0));
                    if ((safe_lshift_func_uint8_t_u_u(g_77, (safe_lshift_func_uint16_t_u_u(l_682, 3)))))
                    {
                        g_454.f1 = g_576.f6;
                        g_738 = g_413;
                        l_739 = 0xA07ADAE4L;
                    }
                    else
                    {
                        g_741 = g_740;
                        if (g_738.f0)
                            continue;
                        if (p_9)
                            continue;
                        g_402.f1 = (safe_mod_func_uint8_t_u_u(l_652, p_5));
                    }
                    g_374.f1 = ((safe_lshift_func_int16_t_s_s((l_652 = ((safe_sub_func_uint32_t_u_u(((safe_lshift_func_int16_t_s_u((g_574.f5 <= g_411.f1), 12)) >= func_19((safe_lshift_func_uint16_t_u_u((func_19((l_739 = g_413.f3), p_9, func_27((func_27(((safe_rshift_func_int16_t_s_u((g_3 & 0x7B60L), 13)) <= l_732), g_75.f3) <= 0x14L), g_218.f6), l_732) < g_75.f5), 2)), l_697, g_470.f0, l_754)), g_490)) <= 0x179EEECCL)), 2)) || p_8);
                }
                else
                {
                    char l_761 = 1L;
                    int l_762 = 0x228EA45BL;
                    int l_765 = (-1L);
                    g_601.f6 = (((safe_sub_func_int16_t_s_s(((safe_sub_func_uint32_t_u_u(((l_739 = p_7) > (3L & 7L)), ((g_491.f1 = ((g_373.f0 = (l_696 = (l_652 = (safe_div_func_uint32_t_u_u(l_732, g_331.f5))))) < (l_762 = (!(func_19(l_701, l_761, g_346.f1, p_5) != (-1L)))))) != g_471.f5))) || 0x7EL), p_8)) != 0xC34B1179L) & l_732);
                    l_696 = (safe_add_func_int32_t_s_s(0x6B53138AL, func_38(l_762, l_765, l_697)));
                    l_765 = func_46(g_454.f6);
                    l_652 = func_46(func_46(((l_766 | (safe_rshift_func_uint16_t_u_u(0x1DFFL, 13))) ^ l_704)));
                }
                g_262.f6 = func_51(l_739, (((p_8 && ((((safe_sub_func_uint8_t_u_u(1UL, (l_771 < ((safe_lshift_func_uint8_t_u_u((l_792 = (safe_lshift_func_uint16_t_u_s(((safe_sub_func_uint8_t_u_u(((l_739 <= (((safe_lshift_func_int16_t_s_u((g_490 = ((func_48(((safe_sub_func_uint8_t_u_u(((((safe_rshift_func_int8_t_s_u((((g_411.f1 = l_732) || (l_696 = l_696)) && (safe_div_func_int16_t_s_s((((((func_19((safe_div_func_int16_t_s_s((safe_mod_func_uint8_t_u_u(255UL, g_574.f5)), l_790)), g_791, g_572.f3, p_5) < (-1L)) <= g_226.f6) < l_739) | g_414.f1) & (-8L)), p_7))), g_457.f3)) & 0xAC49212AL) && g_332.f3) < 0UL), 255UL)) | 6UL), l_771) & p_7) | l_766)), 7)) > g_491.f1) | p_6)) || l_732), 1UL)) || 0x7FA2B54AL), g_571.f1))), p_9)) > 1UL)))) == g_373.f6) | 0UL) & g_218.f3)) || 65534UL) != (-1L)), l_739, p_9, p_6);
                g_332 = g_793;
                g_795 = g_794;
            }
            else
            {
                g_683.f1 = p_6;
                for (g_193 = (-16); (g_193 != 28); g_193++)
                {
                    for (g_16 = 0; (g_16 <= 19); g_16++)
                    {
                        unsigned l_800 = 4294967295UL;
                        l_800 = 5L;
                    }
                    return l_701;
                }
                g_365.f6 = (func_48(l_682, (((g_490 = (safe_div_func_uint8_t_u_u((g_809 = (((!(!(safe_add_func_uint8_t_u_u(((func_19(g_415.f2, (safe_add_func_int16_t_s_s(g_193, ((g_412.f1 == (l_652 = (safe_sub_func_int8_t_s_s(g_738.f6, g_218.f0)))) <= func_27(p_9, p_7)))), l_701, g_413.f3) > 0xCAL) < l_696), 0x9DL)))) | g_413.f0) < 0UL)), l_754))) | g_458.f0) ^ l_704)) & 0x1C06L);
            }
        }
        else
        {
            return l_696;
        }
        if ((safe_lshift_func_int8_t_s_u(l_696, ((func_27(g_600.f6, g_226.f6) < ((l_754 <= ((((p_8 = l_652) <= (func_19((safe_mod_func_uint32_t_u_u((0xF5L || ((safe_mod_func_uint8_t_u_u((safe_add_func_uint8_t_u_u(g_411.f6, (((safe_div_func_int8_t_s_s(8L, p_9)) | l_682) > p_5))), 1L)) ^ 0xE2A5L)), 0x34F8C563L)), p_7, g_457.f0, p_9) ^ 0xF509BFBBL)) ^ p_5) || g_25)) == g_667)) >= p_5))))
        {
            char l_820 = (-1L);
            int l_821 = (-4L);
            g_574 = g_415;
            l_821 = (l_820 >= l_766);
            g_823 = g_822;
            l_697 = p_5;
        }
        else
        {
            unsigned char l_846 = 0x29L;
            int l_855 = (-1L);
            l_766 = p_8;
            for (g_226.f3 = 0; (g_226.f3 == 41); g_226.f3 = safe_add_func_int8_t_s_s(g_226.f3, 4))
            {
                unsigned char l_841 = 6UL;
                int l_853 = 0x46BB0727L;
                for (g_667 = 0; (g_667 <= 21); g_667 = safe_add_func_uint8_t_u_u(g_667, 5))
                {
                    unsigned l_871 = 0x0B12173BL;
                    int l_872 = 0x26EF4704L;
                    g_829 = g_828;
                    if ((safe_rshift_func_uint16_t_u_s((safe_unary_minus_func_int32_t_s((safe_rshift_func_int16_t_s_u((g_193 = (l_697 = (safe_div_func_int32_t_s_s(p_7, (func_38(p_7, l_652, func_38((safe_add_func_uint32_t_u_u(((g_651 = func_51((safe_mod_func_int8_t_s_s(l_841, (p_8 = (safe_lshift_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u(func_46((l_766 = (l_846 = 0xADEE7C9FL))), 7)), (safe_sub_func_uint32_t_u_u((safe_sub_func_int16_t_s_s(g_413.f5, func_27((safe_div_func_int8_t_s_s((l_853 = g_218.f0), p_9)), p_6))), g_412.f0))))))), g_469.f3, l_652, p_9, g_457.f0)) & g_854), p_9)), l_841, l_855)) && g_469.f2))))), 14)))), 14)))
                    {
                        g_857 = g_856;
                    }
                    else
                    {
                        char l_860 = 0x93L;
                        g_459.f1 = (((safe_sub_func_int8_t_s_s(0xFDL, (-1L))) != func_51(l_841, p_9, l_841, g_459.f4, ((l_860 | (g_88 = (0x3E0BL > func_27((func_19((((safe_div_func_int8_t_s_s(((safe_rshift_func_int16_t_s_u(g_374.f5, 9)) || g_738.f6), p_9)) >= g_856.f0) && (-1L)), g_75.f6, p_8, g_865) && l_841), g_469.f6)))) <= 0x2CL))) && 1L);
                    }
                    for (g_374.f3 = 22; (g_374.f3 > 6); g_374.f3 = safe_sub_func_uint16_t_u_u(g_374.f3, 4))
                    {
                        l_652 = p_5;
                        if (l_766)
                            continue;
                        g_460 = g_868;
                        if (g_574.f6)
                            break;
                    }
                    l_855 = ((g_829.f3 = func_48(((((g_627.f3 != (safe_mod_func_int32_t_s_s(l_841, p_8))) && l_766) != (((((g_571.f3 = l_871) & p_8) & (l_872 = (l_846 | g_171.f0))) ^ ((p_8 > p_5) > l_855)) > g_227.f0)) == p_5), g_456.f6)) != l_697);
                }
                for (g_809 = (-7); (g_809 > 18); g_809 = safe_add_func_uint16_t_u_u(g_809, 4))
                {
                    char l_877 = 0xC1L;
                    for (g_218.f3 = (-11); (g_218.f3 != 44); g_218.f3 = safe_add_func_uint16_t_u_u(g_218.f3, 7))
                    {
                        int l_889 = 0xD82030E6L;
                        l_877 = (-1L);
                        l_889 = ((g_828.f3 = (((safe_rshift_func_uint8_t_u_s((g_413.f3 = 0xA7L), 1)) & 0xF6L) | ((((0xFA9604CCL || (safe_div_func_uint32_t_u_u(((safe_sub_func_int32_t_s_s(1L, (safe_mod_func_int8_t_s_s(((g_793.f2 < ((safe_add_func_int16_t_s_s(g_457.f6, ((0xEAF94BDEL == 0x232FED3DL) ^ func_19((l_682 > 2UL), p_7, l_696, p_7)))) > p_7)) <= p_6), l_888)))) & l_889), g_626.f6))) < l_696) == 0xD499L) != g_854))) > 0x81L);
                        g_455 = g_890;
                    }
                    l_853 = g_331.f3;
                    g_892 = g_891;
                }
                for (g_457.f3 = 0; (g_457.f3 >= 56); ++g_457.f3)
                {
                    l_855 = l_846;
                    for (g_3 = 29; (g_3 < 27); g_3 = safe_sub_func_int32_t_s_s(g_3, 8))
                    {
                        int l_899 = 0xA32A617EL;
                        g_413.f6 = (safe_add_func_uint16_t_u_u((l_853 >= g_791), (l_899 = (g_166.f3 <= 0x6176L))));
                        g_900 = g_411;
                    }
                }
                g_890 = g_901;
            }
            l_697 = 0x9A9475A8L;
            l_855 = (-4L);
        }
        if ((0L > ((-1L) <= (safe_rshift_func_uint16_t_u_s(((l_696 != ((func_19((l_652 == (p_7 == (!(safe_mod_func_int16_t_s_s(p_8, p_5))))), l_697, (safe_mod_func_int16_t_s_s(p_9, p_6)), l_908) == p_7) <= p_8)) <= g_856.f1), p_7)))))
        {
            char l_917 = 0L;
            unsigned char l_953 = 252UL;
            if (((((l_766 = p_8) < 0x1699L) || func_38((safe_rshift_func_uint16_t_u_s((1L <= (~(+p_6))), p_8)), l_697, p_7)) & p_8))
            {
                g_471.f6 = ((g_193 = 0L) <= func_19((safe_mod_func_uint16_t_u_u(((safe_div_func_int32_t_s_s((g_227.f1 && g_458.f5), 1UL)) | (safe_mod_func_int8_t_s_s((l_917 && 0x93L), (l_917 & (g_573.f6 ^ l_696))))), 0x8A57L)), p_8, p_7, g_435.f5));
            }
            else
            {
                short l_932 = (-1L);
                int l_933 = 0x8E13EA88L;
                g_892.f1 = (safe_lshift_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u((((l_917 == (safe_add_func_int32_t_s_s((l_933 = (g_460.f6 ^ (((safe_sub_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u((((safe_mod_func_uint32_t_u_u((safe_div_func_int32_t_s_s(p_6, (func_19((g_865 = g_374.f0), ((func_27(p_9, l_917) < ((-1L) ^ p_6)) >= l_932), p_6, p_5) & l_917))), g_900.f0)) != l_908) || 7UL), 4)), l_917)) || 0xA88B12FFL) == 7L))), p_5))) > l_932) >= p_9), l_652)), 0));
                g_828.f6 = (~l_932);
                if (g_458.f5)
                    continue;
            }
            for (g_456.f3 = 0; (g_456.f3 > 22); g_456.f3 = safe_add_func_uint32_t_u_u(g_456.f3, 6))
            {
                short l_940 = 0x0979L;
                g_411.f6 = (p_7 != ((l_697 = (safe_lshift_func_uint16_t_u_s(l_754, p_7))) | ((safe_sub_func_uint32_t_u_u(p_8, ((l_940 >= (safe_add_func_uint16_t_u_u(((safe_div_func_int32_t_s_s((~(safe_lshift_func_uint16_t_u_s((p_9 && ((safe_lshift_func_uint16_t_u_s(g_738.f4, 10)) ^ 0x3B94660CL)), (safe_div_func_uint32_t_u_u((g_226.f6 < l_951), g_901.f0))))), g_892.f3)) & g_952), 0x52ABL))) < l_940))) < p_5)));
                if (p_5)
                    continue;
            }
            g_78.f1 = p_8;
            l_766 = func_27(p_6, ((l_953 > (g_469.f1 || l_908)) && p_6));
        }
        else
        {
            unsigned l_966 = 0x2C826FD8L;
            for (p_5 = 0; (p_5 > 17); p_5 = safe_add_func_int16_t_s_s(p_5, 2))
            {
                short l_962 = (-1L);
                for (g_857.f3 = (-23); (g_857.f3 >= 18); g_857.f3++)
                {
                    for (l_908 = 0; (l_908 < 56); l_908 = safe_add_func_uint16_t_u_u(l_908, 4))
                    {
                        unsigned l_965 = 4294967292UL;
                        l_696 = (safe_lshift_func_int8_t_s_s(((l_766 = ((((3UL | p_6) <= g_794.f6) ^ (l_962 = 0x1CL)) > g_626.f0)) && (p_5 <= ((safe_mod_func_int8_t_s_s(func_10(g_575.f1, l_754, ((0xF84DL <= l_908) != p_9), g_571.f0, l_965), 7L)) >= 0x56CEL))), 1));
                    }
                }
                if (l_696)
                    continue;
                l_966 = l_962;
                g_967 = g_413;
            }
        }
    }
    if (g_828.f1)
    {
        return l_754;
    }
    else
    {
        char l_974 = 0xECL;
        g_967.f1 = (safe_lshift_func_uint8_t_u_s((safe_div_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u(g_149.f5, p_9)), 0x54F6L)), 3));
        l_697 = ((+(0xC010L != 65535UL)) & func_51(l_974, g_456.f6, g_600.f2, (func_27((5L < g_892.f1), l_974) | 0xBBL), p_9));
        return l_754;
    }
}







static short func_10(unsigned short p_11, unsigned p_12, int p_13, int p_14, int p_15)
{
    unsigned char l_37 = 255UL;
    int l_164 = (-2L);
    int l_215 = 0xDC9CCB98L;
    int l_216 = (-1L);
    short l_285 = 0L;
    unsigned l_286 = 4294967294UL;
    char l_310 = (-1L);
    short l_589 = 1L;
    if ((((((func_27(g_25, (safe_unary_minus_func_int8_t_s((safe_sub_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_u(p_12, 0)), (safe_div_func_uint32_t_u_u(l_37, (l_216 = (l_215 = func_38(((g_146.f0 = (p_15 != ((safe_rshift_func_int16_t_s_s(((((safe_add_func_uint32_t_u_u(func_46(l_37), p_13)) || func_60((l_164 = (safe_rshift_func_uint16_t_u_u(g_16, 6))), l_37, g_149.f3)) | 0x9DL) >= l_37), p_13)) | 0x87L))) != g_146.f1), l_37, g_25)))))))))) || g_146.f4) & 0x08D76415L) ^ 0xA3D20666L) | p_14) != p_13))
    {
        unsigned short l_219 = 65535UL;
        int l_223 = 0x6452D96CL;
        int l_344 = 0xF78FD94EL;
        const unsigned l_345 = 0UL;
        if (p_11)
        {
            int l_222 = 0xCD383C10L;
            g_218 = g_75;
            l_216 = ((func_27((l_222 = (l_219 ^ (safe_mod_func_int32_t_s_s(p_14, 1UL)))), l_215) || func_60((l_223 = g_149.f6), g_146.f3, g_218.f0)) > 248UL);
            l_223 = (0xAA08L || (safe_rshift_func_int16_t_s_s(g_167.f4, func_19(p_12, g_218.f5, p_11, (g_146.f6 & g_75.f1)))));
        }
        else
        {
            int l_246 = 0L;
            char l_289 = 1L;
            unsigned l_327 = 0x10DB0B28L;
            unsigned short l_328 = 0x3CCFL;
            int l_343 = 0xD1E5C2C5L;
            g_227 = g_226;
            for (p_13 = 18; (p_13 >= 10); --p_13)
            {
                char l_247 = (-1L);
                int l_254 = 0x89D4E1C9L;
                short l_272 = (-1L);
                if ((((safe_mod_func_int8_t_s_s((safe_add_func_uint16_t_u_u(((g_227.f1 = ((((safe_sub_func_int32_t_s_s(p_11, (safe_add_func_int16_t_s_s((g_193 = (safe_div_func_uint32_t_u_u(p_11, 0x2E381456L))), (safe_lshift_func_uint16_t_u_s(p_15, (safe_add_func_uint16_t_u_u(0xAB26L, (l_216 = ((g_88 = ((p_11 && (+g_226.f3)) != ((safe_lshift_func_uint16_t_u_s(0x0540L, ((func_60(g_146.f5, l_223, p_13) && l_219) & 1UL))) ^ l_246))) >= g_227.f0)))))))))) ^ p_14) != 1L) ^ g_227.f5)) >= l_164), 65528UL)), p_13)) >= l_223) | p_11))
                {
                    unsigned char l_255 = 255UL;
                    p_14 = func_60(p_14, l_247, func_51((safe_lshift_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u((l_246 < (safe_rshift_func_uint8_t_u_u(g_227.f1, p_11))), (+g_149.f2))), g_226.f0)), l_219, ((l_164 = (l_254 = l_223)) || p_15), l_255, p_12));
                }
                else
                {
                    short l_282 = 6L;
                    g_171.f6 = ((l_246 = ((safe_div_func_uint8_t_u_u((safe_sub_func_int8_t_s_s(p_14, g_149.f2)), func_19(g_226.f5, p_14, g_145, g_227.f0))) != (safe_mod_func_uint8_t_u_u((((func_27(((-9L) | 0x39L), p_14) > 0xF0L) != 3L) && l_37), l_37)))) & p_12);
                    g_263 = g_262;
                    g_167.f6 = 0x530642AAL;
                    if ((p_15 = ((+((safe_div_func_uint8_t_u_u((safe_add_func_uint8_t_u_u(((l_216 = 0x60L) || p_14), g_167.f1)), (safe_add_func_uint16_t_u_u(g_75.f5, g_218.f0)))) != (p_12 > (l_246 = (safe_add_func_int32_t_s_s((-9L), (((l_223 = (p_12 || (func_19(func_19(p_12, g_75.f0, p_15, l_215), g_226.f6, g_75.f3, l_246) && l_223))) < p_11) >= g_110))))))) && p_11)))
                    {
                        unsigned short l_281 = 0x5CCEL;
                        p_15 = func_51(l_272, (safe_mod_func_int8_t_s_s(p_13, g_263.f0)), p_13, (((safe_lshift_func_int8_t_s_s(((safe_lshift_func_uint8_t_u_u(g_146.f5, 4)) <= (safe_add_func_int32_t_s_s((l_281 = func_27(g_146.f3, g_218.f0)), g_75.f6))), l_282)) >= 255UL) < g_227.f3), p_14);
                    }
                    else
                    {
                        g_146.f6 = (safe_add_func_uint16_t_u_u(0xB975L, 0x2025L));
                        l_285 = func_48(p_11, l_219);
                    }
                }
                g_79.f1 = (func_38(l_286, ((func_48(g_79.f5, l_285) && 255UL) > p_14), func_27((((func_27(l_247, (((((((safe_div_func_int32_t_s_s(((p_15 = func_27(g_218.f0, (0x26DA28F9L ^ p_12))) == l_219), 0x8598D332L)) | g_146.f5) & g_226.f3) < g_193) > 65535UL) != p_14) > l_246)) <= 5L) && l_219) == l_223), g_146.f5)) || 0UL);
            }
            if ((l_289 >= (g_171.f5 <= (safe_div_func_uint32_t_u_u((safe_sub_func_int32_t_s_s(g_218.f5, (p_14 = (safe_mod_func_uint32_t_u_u((((l_289 < func_27(p_13, g_226.f3)) == (g_146.f6 || func_27((safe_rshift_func_int8_t_s_u((safe_lshift_func_int8_t_s_u((safe_rshift_func_int8_t_s_s(((safe_sub_func_int32_t_s_s(p_13, l_215)) | l_223), 2)), l_223)), 4)), p_11))) > 1UL), p_11))))), 4294967289UL)))))
            {
                unsigned short l_329 = 0xF21EL;
                p_14 = (safe_div_func_int8_t_s_s(0xD7L, (safe_add_func_uint32_t_u_u((p_15 | (((l_310 = (l_285 < (safe_rshift_func_uint8_t_u_u(p_11, g_171.f4)))) == (-4L)) > (((0L && 0xCFL) || 0x9306L) || l_216))), g_75.f3))));
                if ((safe_rshift_func_uint8_t_u_s(func_38(l_223, (g_166.f0 == (safe_mod_func_uint32_t_u_u((safe_div_func_uint16_t_u_u((safe_add_func_int8_t_s_s((0x86EDECE6L != (safe_rshift_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u(g_146.f3, ((!func_27((safe_div_func_int32_t_s_s((safe_sub_func_int32_t_s_s(func_19(l_327, ((l_164 = func_19(func_27(p_12, l_328), (g_113 > 0x48A2L), l_219, l_327)) & g_227.f1), g_88, l_328), l_327)), 0xA5A9678BL)), p_15)) < g_146.f0))), g_75.f0))), g_218.f6)), p_15)), g_227.f1))), g_227.f3), l_329)))
                {
                    return g_75.f3;
                }
                else
                {
                    if (l_219)
                    {
                        g_331 = g_330;
                    }
                    else
                    {
                        p_13 = (-6L);
                    }
                    g_75 = g_332;
                    for (l_327 = 0; (l_327 == 1); l_327 = safe_add_func_uint8_t_u_u(l_327, 8))
                    {
                        unsigned l_340 = 0x17958A9CL;
                        g_171 = g_335;
                        p_14 = (((safe_sub_func_int8_t_s_s(((l_223 = ((safe_add_func_uint8_t_u_u(p_13, func_27((l_246 = 0xF8C3CEA6L), l_340))) || (0xD89AA810L == l_329))) ^ ((safe_lshift_func_int8_t_s_u((l_344 = (l_343 = (0x0BL >= (-1L)))), 2)) <= 0x7180B2D4L)), l_345)) ^ g_218.f4) == 255UL);
                        g_166 = g_346;
                    }
                }
                l_215 = (l_329 > 0xA55EECBCL);
            }
            else
            {
                int l_364 = 0x091E1493L;
                for (g_16 = (-29); (g_16 <= (-9)); g_16++)
                {
                    int l_351 = 0xCFC42F42L;
                    l_164 = l_216;
                    for (g_113 = 27; (g_113 != 20); g_113 = safe_sub_func_int16_t_s_s(g_113, 3))
                    {
                        l_164 = p_11;
                        g_171.f1 = ((l_246 = g_263.f1) == func_27((((l_351 >= func_19(l_164, p_12, (0xE12521B3L > (func_19(p_11, g_145, g_193, (((safe_lshift_func_uint8_t_u_s(p_15, 0)) >= g_346.f3) < g_146.f6)) == 0x05A01716L)), g_110)) != p_13) & g_346.f6), l_310));
                        g_171 = g_330;
                    }
                    g_332.f1 = (p_13 = (p_15 = (((func_60(p_15, ((safe_lshift_func_uint16_t_u_s(0x8138L, 15)) < ((safe_lshift_func_uint8_t_u_s((safe_rshift_func_int8_t_s_u((g_262.f3 < (-1L)), (safe_sub_func_int16_t_s_s(0x8411L, g_75.f0)))), (246UL & g_226.f1))) || (((safe_mod_func_uint16_t_u_u((g_88 = (l_215 = (0x5E8FL | l_223))), l_285)) ^ l_327) > g_330.f1))), l_364) != g_145) | 1UL) ^ l_364)));
                    if (l_364)
                        continue;
                }
                g_149 = g_263;
                g_330 = g_365;
            }
        }
    }
    else
    {
        unsigned short l_372 = 65530UL;
        if ((safe_sub_func_int8_t_s_s((safe_div_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u(g_365.f4, 9)), g_346.f6)), (l_215 = (g_146.f3 = (l_372 | g_227.f6))))))
        {
            g_374 = g_373;
            return p_11;
        }
        else
        {
            g_226 = g_171;
            return l_164;
        }
    }
    for (p_13 = (-6); (p_13 < (-14)); p_13 = safe_sub_func_int16_t_s_s(p_13, 1))
    {
        int l_379 = 0x54BB9ECAL;
        int l_410 = 0x1E90601FL;
        if (((251UL || 1UL) >= p_13))
        {
            unsigned char l_389 = 6UL;
            int l_390 = 0x5D3454CCL;
            short l_468 = (-8L);
            char l_482 = 0xC1L;
            char l_486 = 3L;
            for (p_15 = 0; (p_15 < (-3)); p_15--)
            {
                short l_388 = (-5L);
                int l_450 = 0x671A5FC1L;
                unsigned l_452 = 0xEFB0E1C0L;
                if (((l_379 != ((l_390 = (safe_add_func_uint8_t_u_u(((p_14 >= (safe_rshift_func_int8_t_s_s((((p_11 | (-2L)) | (safe_add_func_int8_t_s_s(p_12, func_27(l_379, g_226.f5)))) < ((safe_div_func_uint8_t_u_u(l_388, 0x56L)) || l_379)), l_379))) > l_389), g_331.f4))) ^ 0xFB1FC32AL)) == 9UL))
                {
                    for (g_77 = 0; (g_77 < 53); g_77 = safe_add_func_uint8_t_u_u(g_77, 1))
                    {
                        l_164 = 6L;
                        p_14 = p_12;
                        if (g_146.f6)
                            break;
                    }
                    if (g_75.f1)
                        break;
                    p_14 = (safe_rshift_func_uint8_t_u_s((safe_unary_minus_func_uint16_t_u((((g_373.f3 = (safe_unary_minus_func_int32_t_s(func_46(p_15)))) & p_13) <= (func_27(g_227.f5, (safe_rshift_func_int8_t_s_u(l_379, p_14))) < (p_11 = l_379))))), 4));
                }
                else
                {
                    for (l_37 = (-23); (l_37 >= 8); l_37 = safe_add_func_uint32_t_u_u(l_37, 5))
                    {
                        int l_409 = 0xF84D97D1L;
                        g_402 = g_401;
                        l_410 = (((safe_sub_func_int16_t_s_s(0x0C49L, (l_409 = (safe_sub_func_int8_t_s_s(l_379, ((safe_lshift_func_int8_t_s_u(g_167.f3, 4)) < 5UL)))))) | 0x64EA6D07L) > p_11);
                        g_412 = g_411;
                        g_414 = g_413;
                    }
                    g_332 = g_415;
                    p_14 = g_84;
                    g_226.f1 = (((safe_add_func_uint8_t_u_u((((safe_sub_func_int8_t_s_s(p_14, 0x4CL)) >= (!(((g_193 = p_13) || (safe_unary_minus_func_uint16_t_u(func_19(l_390, ((safe_div_func_uint8_t_u_u(l_389, (safe_rshift_func_int8_t_s_s((0x7D36L == (l_388 || func_48((safe_div_func_uint16_t_u_u((p_11 = l_390), 0xFCE8L)), l_164))), l_286)))) && p_12), p_12, p_14)))) && 0x3BD6L))) == p_15), 0x74L)) && l_410) > l_389);
                }
                if (g_167.f1)
                {
                    unsigned l_436 = 0x072FF73BL;
                    int l_451 = 0x5D9F5853L;
                    if ((p_14 = (safe_sub_func_int16_t_s_s(p_12, l_310))))
                    {
                        l_390 = l_310;
                        g_373.f1 = g_401.f6;
                        return l_388;
                    }
                    else
                    {
                        p_14 = (p_11 | (safe_sub_func_uint32_t_u_u(g_374.f6, ((func_19((safe_div_func_uint16_t_u_u(1UL, (safe_div_func_int32_t_s_s(3L, l_389)))), ((l_37 > g_374.f3) >= p_13), g_263.f2, g_226.f1) && 0xC1L) < (-9L)))));
                        g_401 = g_435;
                        g_331.f1 = (((g_25 = (g_145 = (l_410 = (l_216 && 0xABL)))) <= p_13) <= func_38(l_379, l_436, g_262.f2));
                        l_390 = (g_373.f0 & 0xC3L);
                    }
                    if (l_390)
                        continue;
                    for (g_412.f3 = 0; (g_412.f3 == 43); g_412.f3 = safe_add_func_uint32_t_u_u(g_412.f3, 1))
                    {
                        unsigned l_443 = 0x706491E0L;
                        l_216 = ((g_415.f1 & (safe_div_func_uint16_t_u_u(((safe_mod_func_uint8_t_u_u(((g_146.f1 >= func_27(g_374.f5, (!(-1L)))) & func_27(func_19(l_443, (((safe_add_func_int8_t_s_s((safe_div_func_uint32_t_u_u(((safe_rshift_func_uint8_t_u_s((l_451 = ((!((l_164 = (l_450 = p_15)) != l_285)) != ((p_13 > g_226.f3) | g_413.f3))), 2)) < (-1L)), p_12)), l_390)) != p_11) ^ l_388), p_12, l_452), p_11)), g_411.f1)) | 4294967288UL), l_389))) | g_414.f0);
                        g_365.f1 = 0xE7AB4570L;
                        g_335 = g_453;
                        g_455 = g_454;
                    }
                }
                else
                {
                    unsigned short l_463 = 8UL;
                    if (g_454.f3)
                    {
                        g_374 = g_456;
                        p_14 = g_454.f5;
                        g_458 = g_457;
                        g_460 = g_459;
                    }
                    else
                    {
                        g_335.f1 = ((g_414.f0 <= p_15) < (((safe_rshift_func_int16_t_s_s((g_193 = (func_27((l_450 = ((l_463 <= (((safe_div_func_int32_t_s_s((func_60(p_15, (safe_sub_func_int32_t_s_s(func_46((l_410 = 0x5055108CL)), l_379)), l_216) || g_411.f3), g_374.f5)) | l_450) < l_468)) > 5L)), p_15) >= p_14)), l_379)) & (-7L)) <= 0L));
                        g_374 = g_469;
                        g_471 = g_470;
                    }
                }
                if (((l_390 = (((l_410 = (p_13 & (safe_sub_func_int32_t_s_s(((((safe_div_func_uint8_t_u_u(l_388, g_454.f3)) != (g_25 = (-5L))) || (253UL & (safe_sub_func_int16_t_s_s((-10L), ((safe_sub_func_int32_t_s_s((g_218.f1 == p_11), (safe_mod_func_int8_t_s_s(func_27(g_365.f3, g_373.f5), (-7L))))) && l_482))))) || (-8L)), p_15)))) < g_226.f3) != 1UL)) > (-1L)))
                {
                    int l_485 = 0xF340546EL;
                    if ((((func_48(p_13, (l_410 = 0xA036993FL)) && ((safe_mod_func_uint32_t_u_u(g_146.f1, p_15)) >= l_485)) | func_27((g_84 = (p_15 || g_411.f6)), l_379)) >= l_452))
                    {
                        l_450 = g_3;
                    }
                    else
                    {
                        unsigned short l_489 = 0xF0F7L;
                        l_486 = l_485;
                        g_412.f1 = (g_346.f2 | (p_14 && (g_193 = ((!g_3) < ((func_19((l_164 = (safe_lshift_func_int8_t_s_u(1L, (l_450 = ((g_490 = (p_13 != ((func_19((g_88 = (g_458.f5 ^ l_164)), l_486, (!func_19(l_486, g_226.f5, g_469.f1, p_13)), l_489) && g_457.f3) == l_489))) && l_37))))), g_373.f1, l_286, g_414.f5) || 0xA8D8L) < l_452)))));
                        return p_14;
                    }
                    g_402 = g_491;
                }
                else
                {
                    if (p_13)
                        break;
                    return g_262.f2;
                }
            }
            if (((~g_414.f6) || (safe_rshift_func_uint16_t_u_u(0x39D0L, p_11))))
            {
                unsigned l_510 = 0x7951EBFEL;
                int l_511 = 6L;
                p_15 = (safe_sub_func_int8_t_s_s((l_164 = ((((p_11 ^ (p_12 = (safe_rshift_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u(0xFA66L, 2)), 8)))) || (safe_sub_func_int32_t_s_s((!((func_27(p_15, (l_216 = 8L)) == g_79.f5) < func_19(((safe_lshift_func_int8_t_s_s((safe_sub_func_int16_t_s_s((safe_lshift_func_int16_t_s_u((safe_div_func_int16_t_s_s(l_468, (g_88 = func_19(((p_11 = 8UL) && ((l_390 = g_411.f3) != (-1L))), p_12, p_12, g_77)))), 2)), 0x2A29L)), 3)) > 0x314C8851L), l_486, g_471.f3, g_218.f3))), l_37))) != l_486) || l_510)), 0x95L));
                if (p_11)
                    break;
                g_458.f1 = l_510;
                l_511 = l_482;
            }
            else
            {
                return l_410;
            }
            if (g_331.f4)
                break;
        }
        else
        {
            const unsigned short l_529 = 0xA46EL;
            int l_530 = (-5L);
            if (l_379)
                break;
            for (l_164 = 0; (l_164 <= 29); l_164 = safe_add_func_int16_t_s_s(l_164, 8))
            {
                const unsigned l_526 = 0x851076CBL;
                g_166.f6 = (safe_lshift_func_uint16_t_u_u(l_379, 8));
                if (func_60((l_530 = (0L | ((safe_lshift_func_int8_t_s_s(l_164, 5)) & (safe_rshift_func_int16_t_s_u((safe_div_func_int16_t_s_s(p_12, (0xF283L && ((safe_sub_func_uint8_t_u_u((safe_sub_func_int8_t_s_s((g_471.f4 ^ ((!g_374.f3) || (((l_526 > (safe_sub_func_uint8_t_u_u((g_88 || ((p_12 && 0xBFL) ^ p_11)), 2UL))) <= g_146.f0) > l_379))), l_526)), g_471.f3)) | g_16)))), l_529))))), g_75.f0, p_14))
                {
                    short l_554 = (-7L);
                    int l_555 = (-7L);
                    char l_558 = 9L;
                    unsigned l_561 = 0UL;
                    g_453.f6 = func_60(((((safe_rshift_func_int8_t_s_u((((safe_add_func_int16_t_s_s((g_471.f2 <= (safe_mod_func_uint16_t_u_u((safe_div_func_int8_t_s_s((l_410 = (l_530 = ((l_555 = (safe_lshift_func_uint8_t_u_u(((p_12 = 1UL) ^ ((safe_unary_minus_func_uint32_t_u(((g_218.f3 < (l_215 = (safe_mod_func_int32_t_s_s((safe_mod_func_int16_t_s_s(((safe_rshift_func_int16_t_s_s(l_526, 4)) > (((safe_lshift_func_uint8_t_u_s((func_19(l_310, p_14, g_145, (safe_sub_func_uint16_t_u_u(func_19((safe_rshift_func_int16_t_s_u(p_13, 9)), (g_490 & l_554), g_146.f0, l_554), l_379))) | p_14), g_491.f6)) < 0x372DF971L) < g_193)), l_554)), 0xE45AD9B9L)))) > 0x40AC47FAL))) & p_15)), 1))) < (-1L)))), l_554)), (-10L)))), l_379)) >= 1UL) < (-1L)), g_226.f1)) > 0x51A3L) & l_379) || 0x73L), p_14, g_77);
                    p_14 = (safe_mod_func_uint32_t_u_u(l_558, (safe_div_func_uint16_t_u_u((l_410 = func_27(l_215, l_561)), (g_88 = 1UL)))));
                }
                else
                {
                    unsigned l_566 = 4UL;
                    int l_567 = 0x40408EBDL;
                    for (g_374.f3 = 8; (g_374.f3 == 12); g_374.f3 = safe_add_func_int32_t_s_s(g_374.f3, 9))
                    {
                        unsigned l_568 = 4294967295UL;
                        if (g_146.f5)
                            break;
                        p_14 = (safe_sub_func_uint16_t_u_u(((g_226.f0 = p_12) & ((l_526 && 1L) && g_460.f6)), (g_373.f5 && (func_19(g_346.f5, p_13, g_227.f6, (func_27((((l_567 = ((l_566 < 0x5862L) <= l_566)) || 0x9EB29836L) < 0xE366L), l_568) < 0x15F6CE15L)) & 1UL))));
                        g_331.f6 = (safe_add_func_int16_t_s_s((g_490 = g_458.f1), func_27(p_13, l_529)));
                        g_572 = g_571;
                    }
                    g_574 = g_573;
                    g_576 = g_575;
                }
                if (((-8L) & (safe_rshift_func_uint8_t_u_s(0x17L, 0))))
                {
                    unsigned l_598 = 4294967294UL;
                    int l_599 = 3L;
                    p_14 = (safe_sub_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s(func_60((g_227.f2 & g_571.f0), g_572.f3, func_27(p_15, (l_599 = (safe_add_func_uint32_t_u_u((func_19(l_526, (safe_sub_func_uint8_t_u_u(((l_598 = ((safe_mod_func_uint16_t_u_u((l_589 = 0UL), (safe_add_func_int32_t_s_s((safe_add_func_int32_t_s_s(1L, (l_164 >= ((safe_add_func_int32_t_s_s((l_215 = ((safe_sub_func_int8_t_s_s(g_413.f6, 0L)) & 0x05L)), l_530)) == 0xCC818A4EL)))), g_374.f3)))) > p_11)) ^ l_285), g_113)), l_410, p_13) ^ 0x48BC7B54L), g_571.f0))))), g_374.f0)), g_471.f3));
                    g_601 = g_600;
                }
                else
                {
                    return g_75.f1;
                }
            }
        }
        for (g_77 = 0; (g_77 == 29); g_77++)
        {
            short l_629 = 8L;
            int l_650 = (-3L);
            p_15 = (safe_mod_func_int32_t_s_s(((+((65535UL >= g_218.f2) >= (safe_add_func_uint8_t_u_u((p_14 > ((safe_sub_func_int8_t_s_s(((safe_rshift_func_int8_t_s_u(g_458.f6, 6)) && ((func_27(p_15, (g_193 = ((g_145 = g_373.f1) >= (l_216 = (g_373.f0 | ((safe_mod_func_uint8_t_u_u((safe_div_func_int16_t_s_s((g_490 = (g_110 = (safe_rshift_func_uint16_t_u_s(func_27((!(g_84 = (safe_add_func_uint32_t_u_u((((safe_mod_func_int16_t_s_s((safe_mod_func_int8_t_s_s(p_13, (l_164 = (safe_add_func_int16_t_s_s(g_469.f1, 0L))))), 1UL)) & (-1L)) || g_435.f5), p_11)))), g_411.f6), 10)))), 65535UL)), p_11)) > 1UL)))))) == 0x10L) <= g_146.f6)), g_227.f5)) ^ 0xB6L)), l_589)))) != 0x3B77AF9AL), l_410));
            if (p_15)
            {
                int l_628 = 0L;
                g_627 = g_626;
                if (l_628)
                    continue;
                l_164 = g_626.f6;
                l_410 = p_15;
            }
            else
            {
                l_629 = (~g_25);
            }
            g_78.f1 = (safe_lshift_func_uint16_t_u_u((safe_div_func_uint8_t_u_u(((safe_div_func_int32_t_s_s(g_456.f3, 1UL)) || (p_14 = (l_164 == ((safe_rshift_func_uint8_t_u_s(((g_469.f0 = p_12) <= (l_215 = ((g_145 == ((safe_mod_func_int32_t_s_s((0x04L && g_573.f4), (g_571.f0 = 0x490B2696L))) > func_19((+((l_650 = (safe_div_func_uint16_t_u_u(((safe_sub_func_int32_t_s_s((((safe_mod_func_uint32_t_u_u(((g_456.f1 == p_15) && p_13), l_164)) && 255UL) || p_13), p_15)) < g_146.f1), (-2L)))) ^ 250UL)), l_379, p_13, g_626.f6))) == p_15))), 1)) | 0xD82571E9L)))), g_413.f0)), p_15));
        }
    }
    return g_402.f6;
}







static const unsigned short func_19(unsigned short p_20, int p_21, int p_22, unsigned short p_23)
{
    const int l_24 = (-2L);
    g_25 = l_24;
    return l_24;
}







static unsigned func_27(unsigned p_28, short p_29)
{
    unsigned char l_217 = 0x39L;
    l_217 = p_28;
    return p_29;
}







static unsigned func_38(unsigned char p_39, char p_40, unsigned p_41)
{
    unsigned l_170 = 3UL;
    g_146 = g_79;
    g_165 = g_79;
    g_167 = g_166;
    for (g_16 = (-19); (g_16 != (-18)); ++g_16)
    {
        unsigned short l_174 = 65526UL;
        unsigned short l_204 = 0x6E99L;
        const int l_211 = 0xBE4ED988L;
        int l_214 = 0xD1A7C047L;
        g_78.f1 = l_170;
        if (p_41)
            break;
        g_171 = g_79;
        if ((((safe_add_func_uint16_t_u_u((l_174 = 0xCEAEL), (safe_lshift_func_uint16_t_u_s(p_40, 4)))) < (g_88 = (safe_rshift_func_int8_t_s_u((-10L), 7)))) || (((((p_41 <= (g_16 && (((l_170 >= ((safe_rshift_func_int8_t_s_s((safe_add_func_uint8_t_u_u((((safe_div_func_uint16_t_u_u(65527UL, (safe_add_func_int8_t_s_s((safe_div_func_uint32_t_u_u((((safe_lshift_func_uint8_t_u_u(g_3, 5)) || (safe_lshift_func_int16_t_s_u((0xE42EL >= p_39), 1))) ^ 0x17BC323DL), g_149.f4)), g_146.f6)))) < l_174) != g_193), 0xBAL)), p_40)) && 0x648B246AL)) == 0xA3E7E255L) <= g_3))) | l_174) ^ p_39) <= g_75.f0) < 0xF7990D59L)))
        {
            unsigned l_212 = 0x858BC3E6L;
            int l_213 = 0x91BF880EL;
            l_214 = (safe_div_func_int8_t_s_s(((((safe_sub_func_uint16_t_u_u(((safe_rshift_func_uint8_t_u_s((safe_div_func_uint16_t_u_u((safe_mod_func_int32_t_s_s(func_60(l_204, func_60(l_174, p_40, (g_146.f0 < (((safe_mod_func_int8_t_s_s(l_170, g_171.f5)) == p_41) == ((p_39 = p_41) && ((l_212 = (l_211 ^ g_146.f3)) >= 0UL))))), l_170), p_40)), 8UL)), g_84)) || 0xD9315538L), p_41)) & p_40) ^ g_146.f0) != l_213), g_146.f3));
        }
        else
        {
            g_75.f1 = g_167.f4;
        }
    }
    return p_39;
}







static const unsigned func_46(int p_47)
{
    char l_57 = 0x31L;
    int l_64 = 1L;
    int l_67 = 0xA684085EL;
    int l_72 = 0x43AD33DCL;
    l_67 = func_48((p_47 | func_51((l_57 < ((safe_sub_func_uint16_t_u_u(g_25, func_60(((((g_16 != (l_64 = l_57)) > (safe_sub_func_uint32_t_u_u((l_67 > (safe_rshift_func_int16_t_s_u(((safe_mod_func_int8_t_s_s((l_72 = (p_47 & 0xF963L)), ((safe_div_func_uint8_t_u_u((g_16 | 5UL), 0xC6L)) | l_67))) >= p_47), l_57))), l_57))) & 0xF1L) & 0xFAE38EDFL), p_47, p_47))) ^ g_25)), p_47, p_47, l_57, g_77)), g_3);
    l_67 = ((((safe_mod_func_uint8_t_u_u((((func_60((safe_lshift_func_int16_t_s_u(g_25, (safe_sub_func_int8_t_s_s(((p_47 == ((l_72 = (safe_add_func_uint16_t_u_u((g_146.f4 > (safe_rshift_func_int8_t_s_u(0xB3L, p_47))), (0xBCL && (((g_146.f3 <= (l_72 & l_67)) < 0UL) <= p_47))))) < 65529UL)) < p_47), 0L)))), l_57, g_75.f3) ^ p_47) > (-7L)) | p_47), g_25)) ^ p_47) < 0L) < 65535UL);
    return l_72;
}







static int func_48(short p_49, unsigned p_50)
{
    unsigned char l_135 = 0x43L;
    int l_136 = (-1L);
    int l_143 = 0x5C4F2F58L;
    int l_144 = 0xAB6CAC88L;
    for (g_113 = 4; (g_113 <= 6); g_113 = safe_add_func_int8_t_s_s(g_113, 4))
    {
        char l_141 = 0L;
        int l_142 = (-2L);
        l_144 = (+((((safe_rshift_func_int8_t_s_s((g_145 = (func_60(((g_75.f3 & ((safe_add_func_int16_t_s_s(p_49, (0x96L <= (l_135 = g_75.f4)))) < (((l_136 = p_50) == g_3) && g_3))) > (safe_rshift_func_uint8_t_u_u((((l_143 = (l_142 = ((safe_mod_func_int32_t_s_s(l_141, p_50)) != p_50))) == 0xFFF4L) ^ l_144), l_141))), g_113, g_25) >= p_49)), 5)) >= g_110) == p_50) | l_141));
        g_75 = g_146;
        for (g_16 = 27; (g_16 == (-11)); g_16--)
        {
            g_149 = g_79;
        }
        if (g_79.f4)
            break;
    }
    return l_136;
}







static short func_51(unsigned char p_52, const int p_53, const int p_54, unsigned p_55, unsigned short p_56)
{
    int l_80 = (-1L);
    unsigned char l_89 = 0UL;
    short l_90 = 9L;
    unsigned char l_128 = 5UL;
    g_79 = g_78;
    if ((l_80 = p_53))
    {
        int l_87 = 0L;
        l_89 = (safe_unary_minus_func_int8_t_s((safe_div_func_int16_t_s_s(func_60(l_80, func_60((g_84 = g_75.f0), (safe_mod_func_int16_t_s_s(g_79.f3, ((p_56 != ((l_80 <= ((p_55 || l_80) && (0x145CL > (l_87 = (g_88 = l_87))))) || g_75.f1)) ^ 1UL))), p_54), l_80), l_80))));
        g_79.f1 = l_90;
    }
    else
    {
        short l_109 = 0x6CB1L;
        l_80 = (safe_rshift_func_int16_t_s_u(p_56, 13));
        for (g_16 = 21; (g_16 <= (-1)); g_16 = safe_sub_func_uint16_t_u_u(g_16, 8))
        {
            short l_114 = 0x5605L;
            char l_127 = 0xA1L;
            g_78.f1 = ((safe_mod_func_int16_t_s_s((safe_add_func_int32_t_s_s((safe_add_func_int32_t_s_s((safe_mod_func_int16_t_s_s((safe_add_func_uint16_t_u_u(p_52, func_60(p_54, (safe_rshift_func_int8_t_s_s(g_88, (0x5871L > (g_110 = (safe_mod_func_int16_t_s_s((l_109 >= g_25), p_56)))))), ((g_113 = (safe_add_func_int8_t_s_s(((((0xEBL ^ 3L) && l_109) && l_90) || 0x0CL), p_56))) != 1UL)))), g_25)), 0L)), p_56)), 0xFCEDL)) | l_114);
            l_80 = (safe_add_func_int32_t_s_s(0x08938AD3L, ((safe_sub_func_uint32_t_u_u(((safe_sub_func_int32_t_s_s((safe_sub_func_int16_t_s_s(l_80, (l_114 & (safe_mod_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u(func_60(p_53, (((p_56 = g_75.f4) != 0UL) > ((p_55 = g_75.f1) != l_109)), g_25), p_54)), p_53))))), 1L)) <= l_80), (-1L))) >= l_127)));
        }
    }
    return l_128;
}







static unsigned short func_60(char p_61, char p_62, unsigned short p_63)
{
    unsigned l_76 = 0x209D0817L;
    g_75 = g_75;
    return l_76;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_16, "g_16", print_hash_value);
    transparent_crc(g_25, "g_25", print_hash_value);
    transparent_crc(g_75.f0, "g_75.f0", print_hash_value);
    transparent_crc(g_75.f1, "g_75.f1", print_hash_value);
    transparent_crc(g_75.f2, "g_75.f2", print_hash_value);
    transparent_crc(g_75.f3, "g_75.f3", print_hash_value);
    transparent_crc(g_75.f4, "g_75.f4", print_hash_value);
    transparent_crc(g_75.f5, "g_75.f5", print_hash_value);
    transparent_crc(g_75.f6, "g_75.f6", print_hash_value);
    transparent_crc(g_77, "g_77", print_hash_value);
    transparent_crc(g_78.f0, "g_78.f0", print_hash_value);
    transparent_crc(g_78.f1, "g_78.f1", print_hash_value);
    transparent_crc(g_78.f2, "g_78.f2", print_hash_value);
    transparent_crc(g_78.f3, "g_78.f3", print_hash_value);
    transparent_crc(g_78.f4, "g_78.f4", print_hash_value);
    transparent_crc(g_78.f5, "g_78.f5", print_hash_value);
    transparent_crc(g_78.f6, "g_78.f6", print_hash_value);
    transparent_crc(g_79.f0, "g_79.f0", print_hash_value);
    transparent_crc(g_79.f1, "g_79.f1", print_hash_value);
    transparent_crc(g_79.f2, "g_79.f2", print_hash_value);
    transparent_crc(g_79.f3, "g_79.f3", print_hash_value);
    transparent_crc(g_79.f4, "g_79.f4", print_hash_value);
    transparent_crc(g_79.f5, "g_79.f5", print_hash_value);
    transparent_crc(g_79.f6, "g_79.f6", print_hash_value);
    transparent_crc(g_84, "g_84", print_hash_value);
    transparent_crc(g_88, "g_88", print_hash_value);
    transparent_crc(g_110, "g_110", print_hash_value);
    transparent_crc(g_113, "g_113", print_hash_value);
    transparent_crc(g_145, "g_145", print_hash_value);
    transparent_crc(g_146.f0, "g_146.f0", print_hash_value);
    transparent_crc(g_146.f1, "g_146.f1", print_hash_value);
    transparent_crc(g_146.f2, "g_146.f2", print_hash_value);
    transparent_crc(g_146.f3, "g_146.f3", print_hash_value);
    transparent_crc(g_146.f4, "g_146.f4", print_hash_value);
    transparent_crc(g_146.f5, "g_146.f5", print_hash_value);
    transparent_crc(g_146.f6, "g_146.f6", print_hash_value);
    transparent_crc(g_149.f0, "g_149.f0", print_hash_value);
    transparent_crc(g_149.f1, "g_149.f1", print_hash_value);
    transparent_crc(g_149.f2, "g_149.f2", print_hash_value);
    transparent_crc(g_149.f3, "g_149.f3", print_hash_value);
    transparent_crc(g_149.f4, "g_149.f4", print_hash_value);
    transparent_crc(g_149.f5, "g_149.f5", print_hash_value);
    transparent_crc(g_149.f6, "g_149.f6", print_hash_value);
    transparent_crc(g_165.f0, "g_165.f0", print_hash_value);
    transparent_crc(g_165.f1, "g_165.f1", print_hash_value);
    transparent_crc(g_165.f2, "g_165.f2", print_hash_value);
    transparent_crc(g_165.f3, "g_165.f3", print_hash_value);
    transparent_crc(g_165.f4, "g_165.f4", print_hash_value);
    transparent_crc(g_165.f5, "g_165.f5", print_hash_value);
    transparent_crc(g_165.f6, "g_165.f6", print_hash_value);
    transparent_crc(g_166.f0, "g_166.f0", print_hash_value);
    transparent_crc(g_166.f1, "g_166.f1", print_hash_value);
    transparent_crc(g_166.f2, "g_166.f2", print_hash_value);
    transparent_crc(g_166.f3, "g_166.f3", print_hash_value);
    transparent_crc(g_166.f4, "g_166.f4", print_hash_value);
    transparent_crc(g_166.f5, "g_166.f5", print_hash_value);
    transparent_crc(g_166.f6, "g_166.f6", print_hash_value);
    transparent_crc(g_167.f0, "g_167.f0", print_hash_value);
    transparent_crc(g_167.f1, "g_167.f1", print_hash_value);
    transparent_crc(g_167.f2, "g_167.f2", print_hash_value);
    transparent_crc(g_167.f3, "g_167.f3", print_hash_value);
    transparent_crc(g_167.f4, "g_167.f4", print_hash_value);
    transparent_crc(g_167.f5, "g_167.f5", print_hash_value);
    transparent_crc(g_167.f6, "g_167.f6", print_hash_value);
    transparent_crc(g_171.f0, "g_171.f0", print_hash_value);
    transparent_crc(g_171.f1, "g_171.f1", print_hash_value);
    transparent_crc(g_171.f2, "g_171.f2", print_hash_value);
    transparent_crc(g_171.f3, "g_171.f3", print_hash_value);
    transparent_crc(g_171.f4, "g_171.f4", print_hash_value);
    transparent_crc(g_171.f5, "g_171.f5", print_hash_value);
    transparent_crc(g_171.f6, "g_171.f6", print_hash_value);
    transparent_crc(g_193, "g_193", print_hash_value);
    transparent_crc(g_218.f0, "g_218.f0", print_hash_value);
    transparent_crc(g_218.f1, "g_218.f1", print_hash_value);
    transparent_crc(g_218.f2, "g_218.f2", print_hash_value);
    transparent_crc(g_218.f3, "g_218.f3", print_hash_value);
    transparent_crc(g_218.f4, "g_218.f4", print_hash_value);
    transparent_crc(g_218.f5, "g_218.f5", print_hash_value);
    transparent_crc(g_218.f6, "g_218.f6", print_hash_value);
    transparent_crc(g_226.f0, "g_226.f0", print_hash_value);
    transparent_crc(g_226.f1, "g_226.f1", print_hash_value);
    transparent_crc(g_226.f2, "g_226.f2", print_hash_value);
    transparent_crc(g_226.f3, "g_226.f3", print_hash_value);
    transparent_crc(g_226.f4, "g_226.f4", print_hash_value);
    transparent_crc(g_226.f5, "g_226.f5", print_hash_value);
    transparent_crc(g_226.f6, "g_226.f6", print_hash_value);
    transparent_crc(g_227.f0, "g_227.f0", print_hash_value);
    transparent_crc(g_227.f1, "g_227.f1", print_hash_value);
    transparent_crc(g_227.f2, "g_227.f2", print_hash_value);
    transparent_crc(g_227.f3, "g_227.f3", print_hash_value);
    transparent_crc(g_227.f4, "g_227.f4", print_hash_value);
    transparent_crc(g_227.f5, "g_227.f5", print_hash_value);
    transparent_crc(g_227.f6, "g_227.f6", print_hash_value);
    transparent_crc(g_262.f0, "g_262.f0", print_hash_value);
    transparent_crc(g_262.f1, "g_262.f1", print_hash_value);
    transparent_crc(g_262.f2, "g_262.f2", print_hash_value);
    transparent_crc(g_262.f3, "g_262.f3", print_hash_value);
    transparent_crc(g_262.f4, "g_262.f4", print_hash_value);
    transparent_crc(g_262.f5, "g_262.f5", print_hash_value);
    transparent_crc(g_262.f6, "g_262.f6", print_hash_value);
    transparent_crc(g_263.f0, "g_263.f0", print_hash_value);
    transparent_crc(g_263.f1, "g_263.f1", print_hash_value);
    transparent_crc(g_263.f2, "g_263.f2", print_hash_value);
    transparent_crc(g_263.f3, "g_263.f3", print_hash_value);
    transparent_crc(g_263.f4, "g_263.f4", print_hash_value);
    transparent_crc(g_263.f5, "g_263.f5", print_hash_value);
    transparent_crc(g_263.f6, "g_263.f6", print_hash_value);
    transparent_crc(g_330.f0, "g_330.f0", print_hash_value);
    transparent_crc(g_330.f1, "g_330.f1", print_hash_value);
    transparent_crc(g_330.f2, "g_330.f2", print_hash_value);
    transparent_crc(g_330.f3, "g_330.f3", print_hash_value);
    transparent_crc(g_330.f4, "g_330.f4", print_hash_value);
    transparent_crc(g_330.f5, "g_330.f5", print_hash_value);
    transparent_crc(g_330.f6, "g_330.f6", print_hash_value);
    transparent_crc(g_331.f0, "g_331.f0", print_hash_value);
    transparent_crc(g_331.f1, "g_331.f1", print_hash_value);
    transparent_crc(g_331.f2, "g_331.f2", print_hash_value);
    transparent_crc(g_331.f3, "g_331.f3", print_hash_value);
    transparent_crc(g_331.f4, "g_331.f4", print_hash_value);
    transparent_crc(g_331.f5, "g_331.f5", print_hash_value);
    transparent_crc(g_331.f6, "g_331.f6", print_hash_value);
    transparent_crc(g_332.f0, "g_332.f0", print_hash_value);
    transparent_crc(g_332.f1, "g_332.f1", print_hash_value);
    transparent_crc(g_332.f2, "g_332.f2", print_hash_value);
    transparent_crc(g_332.f3, "g_332.f3", print_hash_value);
    transparent_crc(g_332.f4, "g_332.f4", print_hash_value);
    transparent_crc(g_332.f5, "g_332.f5", print_hash_value);
    transparent_crc(g_332.f6, "g_332.f6", print_hash_value);
    transparent_crc(g_335.f0, "g_335.f0", print_hash_value);
    transparent_crc(g_335.f1, "g_335.f1", print_hash_value);
    transparent_crc(g_335.f2, "g_335.f2", print_hash_value);
    transparent_crc(g_335.f3, "g_335.f3", print_hash_value);
    transparent_crc(g_335.f4, "g_335.f4", print_hash_value);
    transparent_crc(g_335.f5, "g_335.f5", print_hash_value);
    transparent_crc(g_335.f6, "g_335.f6", print_hash_value);
    transparent_crc(g_346.f0, "g_346.f0", print_hash_value);
    transparent_crc(g_346.f1, "g_346.f1", print_hash_value);
    transparent_crc(g_346.f2, "g_346.f2", print_hash_value);
    transparent_crc(g_346.f3, "g_346.f3", print_hash_value);
    transparent_crc(g_346.f4, "g_346.f4", print_hash_value);
    transparent_crc(g_346.f5, "g_346.f5", print_hash_value);
    transparent_crc(g_346.f6, "g_346.f6", print_hash_value);
    transparent_crc(g_365.f0, "g_365.f0", print_hash_value);
    transparent_crc(g_365.f1, "g_365.f1", print_hash_value);
    transparent_crc(g_365.f2, "g_365.f2", print_hash_value);
    transparent_crc(g_365.f3, "g_365.f3", print_hash_value);
    transparent_crc(g_365.f4, "g_365.f4", print_hash_value);
    transparent_crc(g_365.f5, "g_365.f5", print_hash_value);
    transparent_crc(g_365.f6, "g_365.f6", print_hash_value);
    transparent_crc(g_373.f0, "g_373.f0", print_hash_value);
    transparent_crc(g_373.f1, "g_373.f1", print_hash_value);
    transparent_crc(g_373.f2, "g_373.f2", print_hash_value);
    transparent_crc(g_373.f3, "g_373.f3", print_hash_value);
    transparent_crc(g_373.f4, "g_373.f4", print_hash_value);
    transparent_crc(g_373.f5, "g_373.f5", print_hash_value);
    transparent_crc(g_373.f6, "g_373.f6", print_hash_value);
    transparent_crc(g_374.f0, "g_374.f0", print_hash_value);
    transparent_crc(g_374.f1, "g_374.f1", print_hash_value);
    transparent_crc(g_374.f2, "g_374.f2", print_hash_value);
    transparent_crc(g_374.f3, "g_374.f3", print_hash_value);
    transparent_crc(g_374.f4, "g_374.f4", print_hash_value);
    transparent_crc(g_374.f5, "g_374.f5", print_hash_value);
    transparent_crc(g_374.f6, "g_374.f6", print_hash_value);
    transparent_crc(g_401.f0, "g_401.f0", print_hash_value);
    transparent_crc(g_401.f1, "g_401.f1", print_hash_value);
    transparent_crc(g_401.f2, "g_401.f2", print_hash_value);
    transparent_crc(g_401.f3, "g_401.f3", print_hash_value);
    transparent_crc(g_401.f4, "g_401.f4", print_hash_value);
    transparent_crc(g_401.f5, "g_401.f5", print_hash_value);
    transparent_crc(g_401.f6, "g_401.f6", print_hash_value);
    transparent_crc(g_402.f0, "g_402.f0", print_hash_value);
    transparent_crc(g_402.f1, "g_402.f1", print_hash_value);
    transparent_crc(g_402.f2, "g_402.f2", print_hash_value);
    transparent_crc(g_402.f3, "g_402.f3", print_hash_value);
    transparent_crc(g_402.f4, "g_402.f4", print_hash_value);
    transparent_crc(g_402.f5, "g_402.f5", print_hash_value);
    transparent_crc(g_402.f6, "g_402.f6", print_hash_value);
    transparent_crc(g_411.f0, "g_411.f0", print_hash_value);
    transparent_crc(g_411.f1, "g_411.f1", print_hash_value);
    transparent_crc(g_411.f2, "g_411.f2", print_hash_value);
    transparent_crc(g_411.f3, "g_411.f3", print_hash_value);
    transparent_crc(g_411.f4, "g_411.f4", print_hash_value);
    transparent_crc(g_411.f5, "g_411.f5", print_hash_value);
    transparent_crc(g_411.f6, "g_411.f6", print_hash_value);
    transparent_crc(g_412.f0, "g_412.f0", print_hash_value);
    transparent_crc(g_412.f1, "g_412.f1", print_hash_value);
    transparent_crc(g_412.f2, "g_412.f2", print_hash_value);
    transparent_crc(g_412.f3, "g_412.f3", print_hash_value);
    transparent_crc(g_412.f4, "g_412.f4", print_hash_value);
    transparent_crc(g_412.f5, "g_412.f5", print_hash_value);
    transparent_crc(g_412.f6, "g_412.f6", print_hash_value);
    transparent_crc(g_413.f0, "g_413.f0", print_hash_value);
    transparent_crc(g_413.f1, "g_413.f1", print_hash_value);
    transparent_crc(g_413.f2, "g_413.f2", print_hash_value);
    transparent_crc(g_413.f3, "g_413.f3", print_hash_value);
    transparent_crc(g_413.f4, "g_413.f4", print_hash_value);
    transparent_crc(g_413.f5, "g_413.f5", print_hash_value);
    transparent_crc(g_413.f6, "g_413.f6", print_hash_value);
    transparent_crc(g_414.f0, "g_414.f0", print_hash_value);
    transparent_crc(g_414.f1, "g_414.f1", print_hash_value);
    transparent_crc(g_414.f2, "g_414.f2", print_hash_value);
    transparent_crc(g_414.f3, "g_414.f3", print_hash_value);
    transparent_crc(g_414.f4, "g_414.f4", print_hash_value);
    transparent_crc(g_414.f5, "g_414.f5", print_hash_value);
    transparent_crc(g_414.f6, "g_414.f6", print_hash_value);
    transparent_crc(g_415.f0, "g_415.f0", print_hash_value);
    transparent_crc(g_415.f1, "g_415.f1", print_hash_value);
    transparent_crc(g_415.f2, "g_415.f2", print_hash_value);
    transparent_crc(g_415.f3, "g_415.f3", print_hash_value);
    transparent_crc(g_415.f4, "g_415.f4", print_hash_value);
    transparent_crc(g_415.f5, "g_415.f5", print_hash_value);
    transparent_crc(g_415.f6, "g_415.f6", print_hash_value);
    transparent_crc(g_435.f0, "g_435.f0", print_hash_value);
    transparent_crc(g_435.f1, "g_435.f1", print_hash_value);
    transparent_crc(g_435.f2, "g_435.f2", print_hash_value);
    transparent_crc(g_435.f3, "g_435.f3", print_hash_value);
    transparent_crc(g_435.f4, "g_435.f4", print_hash_value);
    transparent_crc(g_435.f5, "g_435.f5", print_hash_value);
    transparent_crc(g_435.f6, "g_435.f6", print_hash_value);
    transparent_crc(g_453.f0, "g_453.f0", print_hash_value);
    transparent_crc(g_453.f1, "g_453.f1", print_hash_value);
    transparent_crc(g_453.f2, "g_453.f2", print_hash_value);
    transparent_crc(g_453.f3, "g_453.f3", print_hash_value);
    transparent_crc(g_453.f4, "g_453.f4", print_hash_value);
    transparent_crc(g_453.f5, "g_453.f5", print_hash_value);
    transparent_crc(g_453.f6, "g_453.f6", print_hash_value);
    transparent_crc(g_454.f0, "g_454.f0", print_hash_value);
    transparent_crc(g_454.f1, "g_454.f1", print_hash_value);
    transparent_crc(g_454.f2, "g_454.f2", print_hash_value);
    transparent_crc(g_454.f3, "g_454.f3", print_hash_value);
    transparent_crc(g_454.f4, "g_454.f4", print_hash_value);
    transparent_crc(g_454.f5, "g_454.f5", print_hash_value);
    transparent_crc(g_454.f6, "g_454.f6", print_hash_value);
    transparent_crc(g_455.f0, "g_455.f0", print_hash_value);
    transparent_crc(g_455.f1, "g_455.f1", print_hash_value);
    transparent_crc(g_455.f2, "g_455.f2", print_hash_value);
    transparent_crc(g_455.f3, "g_455.f3", print_hash_value);
    transparent_crc(g_455.f4, "g_455.f4", print_hash_value);
    transparent_crc(g_455.f5, "g_455.f5", print_hash_value);
    transparent_crc(g_455.f6, "g_455.f6", print_hash_value);
    transparent_crc(g_456.f0, "g_456.f0", print_hash_value);
    transparent_crc(g_456.f1, "g_456.f1", print_hash_value);
    transparent_crc(g_456.f2, "g_456.f2", print_hash_value);
    transparent_crc(g_456.f3, "g_456.f3", print_hash_value);
    transparent_crc(g_456.f4, "g_456.f4", print_hash_value);
    transparent_crc(g_456.f5, "g_456.f5", print_hash_value);
    transparent_crc(g_456.f6, "g_456.f6", print_hash_value);
    transparent_crc(g_457.f0, "g_457.f0", print_hash_value);
    transparent_crc(g_457.f1, "g_457.f1", print_hash_value);
    transparent_crc(g_457.f2, "g_457.f2", print_hash_value);
    transparent_crc(g_457.f3, "g_457.f3", print_hash_value);
    transparent_crc(g_457.f4, "g_457.f4", print_hash_value);
    transparent_crc(g_457.f5, "g_457.f5", print_hash_value);
    transparent_crc(g_457.f6, "g_457.f6", print_hash_value);
    transparent_crc(g_458.f0, "g_458.f0", print_hash_value);
    transparent_crc(g_458.f1, "g_458.f1", print_hash_value);
    transparent_crc(g_458.f2, "g_458.f2", print_hash_value);
    transparent_crc(g_458.f3, "g_458.f3", print_hash_value);
    transparent_crc(g_458.f4, "g_458.f4", print_hash_value);
    transparent_crc(g_458.f5, "g_458.f5", print_hash_value);
    transparent_crc(g_458.f6, "g_458.f6", print_hash_value);
    transparent_crc(g_459.f0, "g_459.f0", print_hash_value);
    transparent_crc(g_459.f1, "g_459.f1", print_hash_value);
    transparent_crc(g_459.f2, "g_459.f2", print_hash_value);
    transparent_crc(g_459.f3, "g_459.f3", print_hash_value);
    transparent_crc(g_459.f4, "g_459.f4", print_hash_value);
    transparent_crc(g_459.f5, "g_459.f5", print_hash_value);
    transparent_crc(g_459.f6, "g_459.f6", print_hash_value);
    transparent_crc(g_460.f0, "g_460.f0", print_hash_value);
    transparent_crc(g_460.f1, "g_460.f1", print_hash_value);
    transparent_crc(g_460.f2, "g_460.f2", print_hash_value);
    transparent_crc(g_460.f3, "g_460.f3", print_hash_value);
    transparent_crc(g_460.f4, "g_460.f4", print_hash_value);
    transparent_crc(g_460.f5, "g_460.f5", print_hash_value);
    transparent_crc(g_460.f6, "g_460.f6", print_hash_value);
    transparent_crc(g_469.f0, "g_469.f0", print_hash_value);
    transparent_crc(g_469.f1, "g_469.f1", print_hash_value);
    transparent_crc(g_469.f2, "g_469.f2", print_hash_value);
    transparent_crc(g_469.f3, "g_469.f3", print_hash_value);
    transparent_crc(g_469.f4, "g_469.f4", print_hash_value);
    transparent_crc(g_469.f5, "g_469.f5", print_hash_value);
    transparent_crc(g_469.f6, "g_469.f6", print_hash_value);
    transparent_crc(g_470.f0, "g_470.f0", print_hash_value);
    transparent_crc(g_470.f1, "g_470.f1", print_hash_value);
    transparent_crc(g_470.f2, "g_470.f2", print_hash_value);
    transparent_crc(g_470.f3, "g_470.f3", print_hash_value);
    transparent_crc(g_470.f4, "g_470.f4", print_hash_value);
    transparent_crc(g_470.f5, "g_470.f5", print_hash_value);
    transparent_crc(g_470.f6, "g_470.f6", print_hash_value);
    transparent_crc(g_471.f0, "g_471.f0", print_hash_value);
    transparent_crc(g_471.f1, "g_471.f1", print_hash_value);
    transparent_crc(g_471.f2, "g_471.f2", print_hash_value);
    transparent_crc(g_471.f3, "g_471.f3", print_hash_value);
    transparent_crc(g_471.f4, "g_471.f4", print_hash_value);
    transparent_crc(g_471.f5, "g_471.f5", print_hash_value);
    transparent_crc(g_471.f6, "g_471.f6", print_hash_value);
    transparent_crc(g_490, "g_490", print_hash_value);
    transparent_crc(g_491.f0, "g_491.f0", print_hash_value);
    transparent_crc(g_491.f1, "g_491.f1", print_hash_value);
    transparent_crc(g_491.f2, "g_491.f2", print_hash_value);
    transparent_crc(g_491.f3, "g_491.f3", print_hash_value);
    transparent_crc(g_491.f4, "g_491.f4", print_hash_value);
    transparent_crc(g_491.f5, "g_491.f5", print_hash_value);
    transparent_crc(g_491.f6, "g_491.f6", print_hash_value);
    transparent_crc(g_571.f0, "g_571.f0", print_hash_value);
    transparent_crc(g_571.f1, "g_571.f1", print_hash_value);
    transparent_crc(g_571.f2, "g_571.f2", print_hash_value);
    transparent_crc(g_571.f3, "g_571.f3", print_hash_value);
    transparent_crc(g_571.f4, "g_571.f4", print_hash_value);
    transparent_crc(g_571.f5, "g_571.f5", print_hash_value);
    transparent_crc(g_571.f6, "g_571.f6", print_hash_value);
    transparent_crc(g_572.f0, "g_572.f0", print_hash_value);
    transparent_crc(g_572.f1, "g_572.f1", print_hash_value);
    transparent_crc(g_572.f2, "g_572.f2", print_hash_value);
    transparent_crc(g_572.f3, "g_572.f3", print_hash_value);
    transparent_crc(g_572.f4, "g_572.f4", print_hash_value);
    transparent_crc(g_572.f5, "g_572.f5", print_hash_value);
    transparent_crc(g_572.f6, "g_572.f6", print_hash_value);
    transparent_crc(g_573.f0, "g_573.f0", print_hash_value);
    transparent_crc(g_573.f1, "g_573.f1", print_hash_value);
    transparent_crc(g_573.f2, "g_573.f2", print_hash_value);
    transparent_crc(g_573.f3, "g_573.f3", print_hash_value);
    transparent_crc(g_573.f4, "g_573.f4", print_hash_value);
    transparent_crc(g_573.f5, "g_573.f5", print_hash_value);
    transparent_crc(g_573.f6, "g_573.f6", print_hash_value);
    transparent_crc(g_574.f0, "g_574.f0", print_hash_value);
    transparent_crc(g_574.f1, "g_574.f1", print_hash_value);
    transparent_crc(g_574.f2, "g_574.f2", print_hash_value);
    transparent_crc(g_574.f3, "g_574.f3", print_hash_value);
    transparent_crc(g_574.f4, "g_574.f4", print_hash_value);
    transparent_crc(g_574.f5, "g_574.f5", print_hash_value);
    transparent_crc(g_574.f6, "g_574.f6", print_hash_value);
    transparent_crc(g_575.f0, "g_575.f0", print_hash_value);
    transparent_crc(g_575.f1, "g_575.f1", print_hash_value);
    transparent_crc(g_575.f2, "g_575.f2", print_hash_value);
    transparent_crc(g_575.f3, "g_575.f3", print_hash_value);
    transparent_crc(g_575.f4, "g_575.f4", print_hash_value);
    transparent_crc(g_575.f5, "g_575.f5", print_hash_value);
    transparent_crc(g_575.f6, "g_575.f6", print_hash_value);
    transparent_crc(g_576.f0, "g_576.f0", print_hash_value);
    transparent_crc(g_576.f1, "g_576.f1", print_hash_value);
    transparent_crc(g_576.f2, "g_576.f2", print_hash_value);
    transparent_crc(g_576.f3, "g_576.f3", print_hash_value);
    transparent_crc(g_576.f4, "g_576.f4", print_hash_value);
    transparent_crc(g_576.f5, "g_576.f5", print_hash_value);
    transparent_crc(g_576.f6, "g_576.f6", print_hash_value);
    transparent_crc(g_600.f0, "g_600.f0", print_hash_value);
    transparent_crc(g_600.f1, "g_600.f1", print_hash_value);
    transparent_crc(g_600.f2, "g_600.f2", print_hash_value);
    transparent_crc(g_600.f3, "g_600.f3", print_hash_value);
    transparent_crc(g_600.f4, "g_600.f4", print_hash_value);
    transparent_crc(g_600.f5, "g_600.f5", print_hash_value);
    transparent_crc(g_600.f6, "g_600.f6", print_hash_value);
    transparent_crc(g_601.f0, "g_601.f0", print_hash_value);
    transparent_crc(g_601.f1, "g_601.f1", print_hash_value);
    transparent_crc(g_601.f2, "g_601.f2", print_hash_value);
    transparent_crc(g_601.f3, "g_601.f3", print_hash_value);
    transparent_crc(g_601.f4, "g_601.f4", print_hash_value);
    transparent_crc(g_601.f5, "g_601.f5", print_hash_value);
    transparent_crc(g_601.f6, "g_601.f6", print_hash_value);
    transparent_crc(g_626.f0, "g_626.f0", print_hash_value);
    transparent_crc(g_626.f1, "g_626.f1", print_hash_value);
    transparent_crc(g_626.f2, "g_626.f2", print_hash_value);
    transparent_crc(g_626.f3, "g_626.f3", print_hash_value);
    transparent_crc(g_626.f4, "g_626.f4", print_hash_value);
    transparent_crc(g_626.f5, "g_626.f5", print_hash_value);
    transparent_crc(g_626.f6, "g_626.f6", print_hash_value);
    transparent_crc(g_627.f0, "g_627.f0", print_hash_value);
    transparent_crc(g_627.f1, "g_627.f1", print_hash_value);
    transparent_crc(g_627.f2, "g_627.f2", print_hash_value);
    transparent_crc(g_627.f3, "g_627.f3", print_hash_value);
    transparent_crc(g_627.f4, "g_627.f4", print_hash_value);
    transparent_crc(g_627.f5, "g_627.f5", print_hash_value);
    transparent_crc(g_627.f6, "g_627.f6", print_hash_value);
    transparent_crc(g_651, "g_651", print_hash_value);
    transparent_crc(g_667, "g_667", print_hash_value);
    transparent_crc(g_683.f0, "g_683.f0", print_hash_value);
    transparent_crc(g_683.f1, "g_683.f1", print_hash_value);
    transparent_crc(g_683.f2, "g_683.f2", print_hash_value);
    transparent_crc(g_683.f3, "g_683.f3", print_hash_value);
    transparent_crc(g_683.f4, "g_683.f4", print_hash_value);
    transparent_crc(g_683.f5, "g_683.f5", print_hash_value);
    transparent_crc(g_683.f6, "g_683.f6", print_hash_value);
    transparent_crc(g_684.f0, "g_684.f0", print_hash_value);
    transparent_crc(g_684.f1, "g_684.f1", print_hash_value);
    transparent_crc(g_684.f2, "g_684.f2", print_hash_value);
    transparent_crc(g_684.f3, "g_684.f3", print_hash_value);
    transparent_crc(g_684.f4, "g_684.f4", print_hash_value);
    transparent_crc(g_684.f5, "g_684.f5", print_hash_value);
    transparent_crc(g_684.f6, "g_684.f6", print_hash_value);
    transparent_crc(g_709, "g_709", print_hash_value);
    transparent_crc(g_738.f0, "g_738.f0", print_hash_value);
    transparent_crc(g_738.f1, "g_738.f1", print_hash_value);
    transparent_crc(g_738.f2, "g_738.f2", print_hash_value);
    transparent_crc(g_738.f3, "g_738.f3", print_hash_value);
    transparent_crc(g_738.f4, "g_738.f4", print_hash_value);
    transparent_crc(g_738.f5, "g_738.f5", print_hash_value);
    transparent_crc(g_738.f6, "g_738.f6", print_hash_value);
    transparent_crc(g_740.f0, "g_740.f0", print_hash_value);
    transparent_crc(g_740.f1, "g_740.f1", print_hash_value);
    transparent_crc(g_740.f2, "g_740.f2", print_hash_value);
    transparent_crc(g_740.f3, "g_740.f3", print_hash_value);
    transparent_crc(g_740.f4, "g_740.f4", print_hash_value);
    transparent_crc(g_740.f5, "g_740.f5", print_hash_value);
    transparent_crc(g_740.f6, "g_740.f6", print_hash_value);
    transparent_crc(g_741.f0, "g_741.f0", print_hash_value);
    transparent_crc(g_741.f1, "g_741.f1", print_hash_value);
    transparent_crc(g_741.f2, "g_741.f2", print_hash_value);
    transparent_crc(g_741.f3, "g_741.f3", print_hash_value);
    transparent_crc(g_741.f4, "g_741.f4", print_hash_value);
    transparent_crc(g_741.f5, "g_741.f5", print_hash_value);
    transparent_crc(g_741.f6, "g_741.f6", print_hash_value);
    transparent_crc(g_791, "g_791", print_hash_value);
    transparent_crc(g_793.f0, "g_793.f0", print_hash_value);
    transparent_crc(g_793.f1, "g_793.f1", print_hash_value);
    transparent_crc(g_793.f2, "g_793.f2", print_hash_value);
    transparent_crc(g_793.f3, "g_793.f3", print_hash_value);
    transparent_crc(g_793.f4, "g_793.f4", print_hash_value);
    transparent_crc(g_793.f5, "g_793.f5", print_hash_value);
    transparent_crc(g_793.f6, "g_793.f6", print_hash_value);
    transparent_crc(g_794.f0, "g_794.f0", print_hash_value);
    transparent_crc(g_794.f1, "g_794.f1", print_hash_value);
    transparent_crc(g_794.f2, "g_794.f2", print_hash_value);
    transparent_crc(g_794.f3, "g_794.f3", print_hash_value);
    transparent_crc(g_794.f4, "g_794.f4", print_hash_value);
    transparent_crc(g_794.f5, "g_794.f5", print_hash_value);
    transparent_crc(g_794.f6, "g_794.f6", print_hash_value);
    transparent_crc(g_795.f0, "g_795.f0", print_hash_value);
    transparent_crc(g_795.f1, "g_795.f1", print_hash_value);
    transparent_crc(g_795.f2, "g_795.f2", print_hash_value);
    transparent_crc(g_795.f3, "g_795.f3", print_hash_value);
    transparent_crc(g_795.f4, "g_795.f4", print_hash_value);
    transparent_crc(g_795.f5, "g_795.f5", print_hash_value);
    transparent_crc(g_795.f6, "g_795.f6", print_hash_value);
    transparent_crc(g_809, "g_809", print_hash_value);
    transparent_crc(g_822.f0, "g_822.f0", print_hash_value);
    transparent_crc(g_822.f1, "g_822.f1", print_hash_value);
    transparent_crc(g_822.f2, "g_822.f2", print_hash_value);
    transparent_crc(g_822.f3, "g_822.f3", print_hash_value);
    transparent_crc(g_822.f4, "g_822.f4", print_hash_value);
    transparent_crc(g_822.f5, "g_822.f5", print_hash_value);
    transparent_crc(g_822.f6, "g_822.f6", print_hash_value);
    transparent_crc(g_823.f0, "g_823.f0", print_hash_value);
    transparent_crc(g_823.f1, "g_823.f1", print_hash_value);
    transparent_crc(g_823.f2, "g_823.f2", print_hash_value);
    transparent_crc(g_823.f3, "g_823.f3", print_hash_value);
    transparent_crc(g_823.f4, "g_823.f4", print_hash_value);
    transparent_crc(g_823.f5, "g_823.f5", print_hash_value);
    transparent_crc(g_823.f6, "g_823.f6", print_hash_value);
    transparent_crc(g_828.f0, "g_828.f0", print_hash_value);
    transparent_crc(g_828.f1, "g_828.f1", print_hash_value);
    transparent_crc(g_828.f2, "g_828.f2", print_hash_value);
    transparent_crc(g_828.f3, "g_828.f3", print_hash_value);
    transparent_crc(g_828.f4, "g_828.f4", print_hash_value);
    transparent_crc(g_828.f5, "g_828.f5", print_hash_value);
    transparent_crc(g_828.f6, "g_828.f6", print_hash_value);
    transparent_crc(g_829.f0, "g_829.f0", print_hash_value);
    transparent_crc(g_829.f1, "g_829.f1", print_hash_value);
    transparent_crc(g_829.f2, "g_829.f2", print_hash_value);
    transparent_crc(g_829.f3, "g_829.f3", print_hash_value);
    transparent_crc(g_829.f4, "g_829.f4", print_hash_value);
    transparent_crc(g_829.f5, "g_829.f5", print_hash_value);
    transparent_crc(g_829.f6, "g_829.f6", print_hash_value);
    transparent_crc(g_854, "g_854", print_hash_value);
    transparent_crc(g_856.f0, "g_856.f0", print_hash_value);
    transparent_crc(g_856.f1, "g_856.f1", print_hash_value);
    transparent_crc(g_856.f2, "g_856.f2", print_hash_value);
    transparent_crc(g_856.f3, "g_856.f3", print_hash_value);
    transparent_crc(g_856.f4, "g_856.f4", print_hash_value);
    transparent_crc(g_856.f5, "g_856.f5", print_hash_value);
    transparent_crc(g_856.f6, "g_856.f6", print_hash_value);
    transparent_crc(g_857.f0, "g_857.f0", print_hash_value);
    transparent_crc(g_857.f1, "g_857.f1", print_hash_value);
    transparent_crc(g_857.f2, "g_857.f2", print_hash_value);
    transparent_crc(g_857.f3, "g_857.f3", print_hash_value);
    transparent_crc(g_857.f4, "g_857.f4", print_hash_value);
    transparent_crc(g_857.f5, "g_857.f5", print_hash_value);
    transparent_crc(g_857.f6, "g_857.f6", print_hash_value);
    transparent_crc(g_865, "g_865", print_hash_value);
    transparent_crc(g_868.f0, "g_868.f0", print_hash_value);
    transparent_crc(g_868.f1, "g_868.f1", print_hash_value);
    transparent_crc(g_868.f2, "g_868.f2", print_hash_value);
    transparent_crc(g_868.f3, "g_868.f3", print_hash_value);
    transparent_crc(g_868.f4, "g_868.f4", print_hash_value);
    transparent_crc(g_868.f5, "g_868.f5", print_hash_value);
    transparent_crc(g_868.f6, "g_868.f6", print_hash_value);
    transparent_crc(g_890.f0, "g_890.f0", print_hash_value);
    transparent_crc(g_890.f1, "g_890.f1", print_hash_value);
    transparent_crc(g_890.f2, "g_890.f2", print_hash_value);
    transparent_crc(g_890.f3, "g_890.f3", print_hash_value);
    transparent_crc(g_890.f4, "g_890.f4", print_hash_value);
    transparent_crc(g_890.f5, "g_890.f5", print_hash_value);
    transparent_crc(g_890.f6, "g_890.f6", print_hash_value);
    transparent_crc(g_891.f0, "g_891.f0", print_hash_value);
    transparent_crc(g_891.f1, "g_891.f1", print_hash_value);
    transparent_crc(g_891.f2, "g_891.f2", print_hash_value);
    transparent_crc(g_891.f3, "g_891.f3", print_hash_value);
    transparent_crc(g_891.f4, "g_891.f4", print_hash_value);
    transparent_crc(g_891.f5, "g_891.f5", print_hash_value);
    transparent_crc(g_891.f6, "g_891.f6", print_hash_value);
    transparent_crc(g_892.f0, "g_892.f0", print_hash_value);
    transparent_crc(g_892.f1, "g_892.f1", print_hash_value);
    transparent_crc(g_892.f2, "g_892.f2", print_hash_value);
    transparent_crc(g_892.f3, "g_892.f3", print_hash_value);
    transparent_crc(g_892.f4, "g_892.f4", print_hash_value);
    transparent_crc(g_892.f5, "g_892.f5", print_hash_value);
    transparent_crc(g_892.f6, "g_892.f6", print_hash_value);
    transparent_crc(g_900.f0, "g_900.f0", print_hash_value);
    transparent_crc(g_900.f1, "g_900.f1", print_hash_value);
    transparent_crc(g_900.f2, "g_900.f2", print_hash_value);
    transparent_crc(g_900.f3, "g_900.f3", print_hash_value);
    transparent_crc(g_900.f4, "g_900.f4", print_hash_value);
    transparent_crc(g_900.f5, "g_900.f5", print_hash_value);
    transparent_crc(g_900.f6, "g_900.f6", print_hash_value);
    transparent_crc(g_901.f0, "g_901.f0", print_hash_value);
    transparent_crc(g_901.f1, "g_901.f1", print_hash_value);
    transparent_crc(g_901.f2, "g_901.f2", print_hash_value);
    transparent_crc(g_901.f3, "g_901.f3", print_hash_value);
    transparent_crc(g_901.f4, "g_901.f4", print_hash_value);
    transparent_crc(g_901.f5, "g_901.f5", print_hash_value);
    transparent_crc(g_901.f6, "g_901.f6", print_hash_value);
    transparent_crc(g_952, "g_952", print_hash_value);
    transparent_crc(g_967.f0, "g_967.f0", print_hash_value);
    transparent_crc(g_967.f1, "g_967.f1", print_hash_value);
    transparent_crc(g_967.f2, "g_967.f2", print_hash_value);
    transparent_crc(g_967.f3, "g_967.f3", print_hash_value);
    transparent_crc(g_967.f4, "g_967.f4", print_hash_value);
    transparent_crc(g_967.f5, "g_967.f5", print_hash_value);
    transparent_crc(g_967.f6, "g_967.f6", print_hash_value);
    transparent_crc(g_995.f0, "g_995.f0", print_hash_value);
    transparent_crc(g_995.f1, "g_995.f1", print_hash_value);
    transparent_crc(g_995.f2, "g_995.f2", print_hash_value);
    transparent_crc(g_995.f3, "g_995.f3", print_hash_value);
    transparent_crc(g_995.f4, "g_995.f4", print_hash_value);
    transparent_crc(g_995.f5, "g_995.f5", print_hash_value);
    transparent_crc(g_995.f6, "g_995.f6", print_hash_value);
    transparent_crc(g_1010.f0, "g_1010.f0", print_hash_value);
    transparent_crc(g_1010.f1, "g_1010.f1", print_hash_value);
    transparent_crc(g_1010.f2, "g_1010.f2", print_hash_value);
    transparent_crc(g_1010.f3, "g_1010.f3", print_hash_value);
    transparent_crc(g_1010.f4, "g_1010.f4", print_hash_value);
    transparent_crc(g_1010.f5, "g_1010.f5", print_hash_value);
    transparent_crc(g_1010.f6, "g_1010.f6", print_hash_value);
    transparent_crc(g_1011.f0, "g_1011.f0", print_hash_value);
    transparent_crc(g_1011.f1, "g_1011.f1", print_hash_value);
    transparent_crc(g_1011.f2, "g_1011.f2", print_hash_value);
    transparent_crc(g_1011.f3, "g_1011.f3", print_hash_value);
    transparent_crc(g_1011.f4, "g_1011.f4", print_hash_value);
    transparent_crc(g_1011.f5, "g_1011.f5", print_hash_value);
    transparent_crc(g_1011.f6, "g_1011.f6", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
