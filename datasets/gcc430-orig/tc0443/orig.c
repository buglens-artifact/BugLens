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
   signed f0 : 1;
   char f1;
   signed f2 : 20;
   unsigned f3 : 8;
};


static char g_3 = 0x44L;
static unsigned g_4[6][3] = {{1UL,1UL,1UL},{2UL,0xB274BF90L,2UL},{1UL,1UL,1UL},{2UL,0xB274BF90L,2UL},{1UL,1UL,1UL},{2UL,0xB274BF90L,2UL}};
static unsigned g_67 = 0UL;
static int g_83[4][7] = {{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)},{0x1997376BL,0x1997376BL,0x1997376BL,0x1997376BL,0x1997376BL,0x1997376BL,0x1997376BL},{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)},{0x1997376BL,0x1997376BL,0x1997376BL,0x1997376BL,0x1997376BL,0x1997376BL,0x1997376BL}};
static unsigned short g_92 = 0UL;
static int g_106 = (-1L);
static unsigned g_111 = 0x6FA44EC1L;
static unsigned g_116 = 1UL;
static struct S0 g_119 = {-0,-10L,995,2};
static unsigned g_130[1] = {0xD65FABB5L};
static unsigned g_133 = 0UL;
static int g_236 = 0L;
static unsigned g_237 = 1UL;
static unsigned char g_288 = 0xF4L;
static unsigned g_306[8][8][4] = {{{0xB69F81DAL,0UL,0UL,0xE19E9376L},{0xC7A48D56L,0UL,0xE19E9376L,0x1CAD828EL},{1UL,0x97122E45L,0xCDA9944AL,0x2B4910B4L},{4294967291UL,0xE19E9376L,4294967295UL,0x603D1025L},{0xC6C639F2L,4294967294UL,0xC1005395L,1UL},{0x85B255EBL,0x26B6B827L,4294967295UL,1UL},{0x6443CEC6L,1UL,0x85B255EBL,0UL},{1UL,0xB69F81DAL,4294967295UL,1UL}},{{4294967290UL,0xC6C639F2L,0xD9F6FEFCL,0x1986F862L},{0x1CAD828EL,1UL,0x4903B10FL,0x20A0EFF4L},{1UL,4294967295UL,4294967295UL,1UL},{0xE0B6B591L,4294967295UL,4294967290UL,0xC6C639F2L},{0x805C1457L,0UL,4294967294UL,3UL},{4294967295UL,1UL,0x82F1A96DL,3UL},{0x0CC90E36L,0UL,1UL,0xC6C639F2L},{0x40EF7442L,4294967295UL,4294967290UL,1UL}},{{0xFBA7E372L,4294967295UL,0UL,0x20A0EFF4L},{1UL,1UL,0x2F7F30CBL,0x1986F862L},{0x82F1A96DL,0xC6C639F2L,1UL,1UL},{0UL,0xB69F81DAL,0UL,0UL},{0x26B6B827L,1UL,0x2B4910B4L,1UL},{0x31E086E9L,0x26B6B827L,4294967295UL,1UL},{1UL,4294967294UL,4294967286UL,0x603D1025L},{4294967295UL,0xE19E9376L,0x238209FDL,0x0CC90E36L}},{{0x805C1457L,0x737EF24CL,0xA15CDC31L,0x82F1A96DL},{1UL,4294967295UL,0x00E0F48AL,0UL},{0xD971EE67L,0x4903B10FL,0xE0B6B591L,0UL},{0x2B4910B4L,1UL,0xCB8A3075L,0x61880405L},{0x1986F862L,0x238209FDL,0x82F1A96DL,0x8598D332L},{0x603D1025L,0xE0B6B591L,0xF21BAC02L,3UL},{0x5905E24FL,4294967295UL,0x5905E24FL,4294967295UL},{4294967295UL,0xCD6F9C49L,3UL,0xA15CDC31L}},{{0x0CC90E36L,0UL,0xE19E9376L,0xCD6F9C49L},{1UL,1UL,0xE19E9376L,3UL},{0x0CC90E36L,0UL,3UL,0x4903B10FL},{4294967295UL,0x2B4910B4L,0x5905E24FL,0x805C1457L},{0x5905E24FL,0x805C1457L,0xF21BAC02L,1UL},{0x603D1025L,0xD971EE67L,0x82F1A96DL,0x20A0EFF4L},{0x1986F862L,5UL,0xCB8A3075L,0UL},{0x2B4910B4L,4294967295UL,0xE0B6B591L,4294967295UL}},{{0xD971EE67L,0xDA28F9CFL,0x00E0F48AL,0xF21BAC02L},{1UL,0xCDA9944AL,0xA15CDC31L,0UL},{0x805C1457L,1UL,0x238209FDL,4294967295UL},{0x31E086E9L,0x5BE12B37L,0xCD6F9C49L,1UL},{0x5EEB2947L,4294967295UL,4294967295UL,0x238209FDL},{4294967295UL,0x82F1A96DL,0x0CC90E36L,4294967295UL},{1UL,0x5905E24FL,3UL,4294967295UL},{4UL,4294967288UL,1UL,4294967288UL}},{{0x203D1BC8L,0x5905E24FL,4294967290UL,0UL},{0x2F7F30CBL,0x0CC90E36L,0xC1005395L,0xC1005395L},{3UL,3UL,0xF21BAC02L,0xECBBADCDL},{0x370F3B88L,4294967295UL,0x3E6784C5L,0x8598D332L},{0UL,0x737EF24CL,0x203D1BC8L,0x3E6784C5L},{3UL,0x737EF24CL,4294967295UL,0x8598D332L},{0x737EF24CL,4294967295UL,4294967294UL,0xECBBADCDL},{0xC7A48D56L,3UL,0x5BE12B37L,0xC1005395L}},{{1UL,0x0CC90E36L,0x97122E45L,0UL},{0xE0B6B591L,0x5905E24FL,0UL,4294967288UL},{0xF21BAC02L,5UL,0x40EF7442L,0xFBA7E372L},{4294967291UL,1UL,0x603D1025L,0x31E086E9L},{4294967295UL,0xE0B6B591L,4294967295UL,0x2B4910B4L},{0x603D1025L,1UL,0UL,0x6443CEC6L},{0UL,1UL,4294967290UL,0UL},{0x6443CEC6L,0xCDA9944AL,0xC6C639F2L,0x238209FDL}}};
static int g_366 = (-6L);
static unsigned g_369 = 0x9527F47FL;
static int g_433[8] = {1L,1L,1L,1L,1L,1L,1L,1L};
static unsigned short g_462 = 0xAEFBL;
static int g_467 = 0xDD49B0B2L;
static char g_484 = (-1L);
static struct S0 g_606[3][7] = {{{0,6L,-310,14},{-0,0L,862,0},{0,-1L,424,3},{-0,0L,862,0},{0,6L,-310,14},{0,6L,-310,14},{-0,0L,862,0}},{{0,0x34L,617,12},{-0,-1L,1005,6},{0,0x34L,617,12},{-0,0L,862,0},{-0,0L,862,0},{0,0x34L,617,12},{-0,-1L,1005,6}},{{-0,0L,862,0},{-0,-1L,1005,6},{0,-1L,424,3},{0,-1L,424,3},{-0,-1L,1005,6},{-0,0L,862,0},{-0,-1L,1005,6}}};
static unsigned g_746 = 0xC2B844C2L;
static char g_784[5][2][4] = {{{1L,0x2BL,0x2BL,1L},{0x1FL,(-5L),0x2BL,0x45L}},{{1L,0x01L,(-1L),0x01L},{0x01L,0x2BL,0x1FL,0x01L}},{{0x1FL,0x01L,0x45L,0x45L},{(-5L),(-5L),(-1L),1L}},{{(-5L),0x2BL,0x45L,(-5L)},{0x1FL,1L,0x1FL,0x45L}},{{0x01L,1L,(-1L),(-5L)},{1L,0x2BL,0x2BL,1L}}};
static short g_927 = 0xC4CEL;
static int g_947[1][6] = {{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)}};
static char g_949 = 0x7CL;
static int g_1017 = 0xB6BDF019L;
static struct S0 g_1111 = {-0,-1L,-595,12};
static short g_1313 = 0x9E68L;
static struct S0 g_1382 = {0,0x07L,-801,3};
static int g_1476[3][7] = {{0x06823AA1L,(-10L),0x06823AA1L,0x06823AA1L,(-10L),0x06823AA1L,0x06823AA1L},{(-10L),(-10L),(-1L),(-10L),(-10L),(-1L),(-10L)},{(-10L),0x06823AA1L,0x06823AA1L,(-10L),0x06823AA1L,0x06823AA1L,(-10L)}};
static short g_1560 = 0x9E24L;
static short g_1809 = 0xAA09L;
static unsigned g_1848[9] = {0xD2828BE7L,0x1C3B1552L,0xD2828BE7L,0x1C3B1552L,0xD2828BE7L,0x1C3B1552L,0xD2828BE7L,0x1C3B1552L,0xD2828BE7L};
static unsigned g_1999 = 1UL;
static int g_2035 = 1L;
static unsigned char g_2185 = 0x53L;
static unsigned g_2232 = 0x6C040434L;
static struct S0 g_2311 = {0,0L,30,12};
static struct S0 g_2339 = {0,0x60L,-84,11};
static struct S0 g_2386 = {-0,-1L,416,5};
static struct S0 g_2493 = {-0,0x28L,104,12};
static short g_2602 = 0xA3E2L;
static unsigned g_2698[9][1] = {{0x533F8854L},{4294967286UL},{0x533F8854L},{4294967286UL},{0x533F8854L},{4294967286UL},{0x533F8854L},{4294967286UL},{0x533F8854L}};



static int func_1(void);
static unsigned func_7(short p_8, unsigned char p_9, struct S0 p_10, unsigned char p_11, unsigned char p_12);
static unsigned short func_15(struct S0 p_16, int p_17, unsigned short p_18, unsigned short p_19, unsigned p_20);
static short func_22(short p_23, unsigned p_24, struct S0 p_25, char p_26);
static unsigned func_30(int p_31, int p_32, struct S0 p_33, unsigned char p_34, int p_35);
static unsigned char func_38(int p_39, int p_40, short p_41, int p_42);
static unsigned short func_45(char p_46, char p_47);
static char func_52(unsigned short p_53, unsigned char p_54, int p_55, unsigned char p_56);
static char func_62(int p_63, unsigned short p_64, unsigned char p_65);
static unsigned short func_77(int p_78, unsigned p_79, short p_80, int p_81, struct S0 p_82);
static int func_1(void)
{
    unsigned l_2 = 0x2CB51DBAL;
    struct S0 l_21 = {-0,-5L,995,15};
    unsigned char l_2313 = 0x2EL;
    int l_2340 = 0xD4017DA8L;
    int l_2341 = 1L;
    int l_2409 = 1L;
    unsigned l_2479 = 4294967295UL;
    int l_2498 = 0x0716CFB3L;
    char l_2624 = 0xD9L;
    int l_2625 = 0xD275BA9CL;
    int l_2626 = 0L;
    int l_2627 = (-1L);
    int l_2871[9][7][3] = {{{0x60CEDB90L,(-3L),1L},{(-2L),1L,0x765521EEL},{1L,0x54241905L,(-7L)},{0xAF023F1CL,0xAF023F1CL,0x2CE7ED84L},{0x8749CAFEL,0xCAEDEE1EL,0xCD91377AL},{0xDA3EF99FL,(-1L),0xAEC99B4EL},{(-9L),0xCAEDEE1EL,(-9L)}},{{0x5E6F5631L,0xAF023F1CL,(-1L)},{(-8L),0x9D8BB845L,(-9L)},{(-1L),1L,0xAEC99B4EL},{0x7087A01BL,0x4466AC19L,0xCD91377AL},{(-1L),(-2L),0x2CE7ED84L},{(-8L),(-5L),0x24E06F0FL},{0x5E6F5631L,(-2L),0x5E6F5631L}},{{(-9L),0x4466AC19L,0x8749CAFEL},{0xDA3EF99FL,1L,0x5E6F5631L},{0x8749CAFEL,0x9D8BB845L,0x24E06F0FL},{0xB1ED3E35L,0xAF023F1CL,0x2CE7ED84L},{0x8749CAFEL,0xCAEDEE1EL,0xCD91377AL},{0xDA3EF99FL,(-1L),0xAEC99B4EL},{(-9L),0xCAEDEE1EL,(-9L)}},{{0x5E6F5631L,0xAF023F1CL,(-1L)},{(-8L),0x9D8BB845L,(-9L)},{(-1L),1L,0xAEC99B4EL},{0x7087A01BL,0x4466AC19L,0xCD91377AL},{(-1L),(-2L),0x2CE7ED84L},{(-8L),(-5L),0x24E06F0FL},{0x5E6F5631L,(-2L),0x5E6F5631L}},{{(-9L),0x4466AC19L,0x8749CAFEL},{0xDA3EF99FL,1L,0x5E6F5631L},{0x8749CAFEL,0x9D8BB845L,0x24E06F0FL},{0xB1ED3E35L,0xAF023F1CL,0x2CE7ED84L},{0x8749CAFEL,0xCAEDEE1EL,0xCD91377AL},{0xDA3EF99FL,(-1L),0xAEC99B4EL},{(-9L),0xCAEDEE1EL,(-9L)}},{{0x5E6F5631L,0x765521EEL,0x2CE7ED84L},{0xF6AD7B2BL,0x4466AC19L,(-8L)},{0x2CE7ED84L,0xAF023F1CL,0xB1ED3E35L},{(-9L),(-4L),0x24E06F0FL},{0x2CE7ED84L,0x89CEA372L,0xAEC99B4EL},{0xF6AD7B2BL,0x9D8BB845L,0x7087A01BL},{0xDA3EF99FL,0x89CEA372L,0xDA3EF99FL}},{{(-8L),(-4L),0xCD91377AL},{0xF7C70312L,0xAF023F1CL,0xDA3EF99FL},{0xCD91377AL,0x4466AC19L,0x7087A01BL},{0x5E6F5631L,0x765521EEL,0xAEC99B4EL},{0xCD91377AL,8L,0x24E06F0FL},{0xF7C70312L,1L,0xB1ED3E35L},{(-8L),8L,(-8L)}},{{0xDA3EF99FL,0x765521EEL,0x2CE7ED84L},{0xF6AD7B2BL,0x4466AC19L,(-8L)},{0x2CE7ED84L,0xAF023F1CL,0xB1ED3E35L},{(-9L),(-4L),0x24E06F0FL},{0x2CE7ED84L,0x89CEA372L,0xAEC99B4EL},{0xF6AD7B2BL,0x9D8BB845L,0x7087A01BL},{0xDA3EF99FL,0x89CEA372L,0xDA3EF99FL}},{{(-8L),(-4L),0xCD91377AL},{0xF7C70312L,0xAF023F1CL,0xDA3EF99FL},{0xCD91377AL,0x4466AC19L,0x7087A01BL},{0x5E6F5631L,0x765521EEL,0xAEC99B4EL},{0xCD91377AL,8L,0x24E06F0FL},{0xF7C70312L,1L,0xB1ED3E35L},{(-8L),8L,(-8L)}}};
    int i, j, k;
    g_3 = l_2;
lbl_2484:
    for (l_2 = 0; (l_2 <= 2); l_2 += 1)
    {
        int l_1107 = 0L;
        struct S0 l_1380 = {-0,-1L,-591,0};
        unsigned l_2260 = 0x3F5C2247L;
        unsigned short l_2321 = 0x9C75L;
        int l_2337 = 2L;
        char l_2366 = 8L;
        char l_2373 = 0x8EL;
        unsigned l_2388 = 0UL;
        unsigned short l_2398 = 1UL;
        if ((1UL && ((((safe_sub_func_int32_t_s_s((g_4[4][0] || ((func_7((safe_lshift_func_uint16_t_u_u(((g_4[5][0] != ((!g_3) > (func_15(l_21, l_2, ((g_4[1][0] || (func_22(((safe_unary_minus_func_int16_t_s((safe_sub_func_int8_t_s_s((func_30(((safe_sub_func_int16_t_s_s((func_38((safe_add_func_int16_t_s_s(g_4[2][0], func_45(l_21.f2, g_3))), g_306[5][6][1], l_1107, l_21.f1) >= g_83[3][3]), g_130[0])) & g_484), g_306[2][2][0], l_1380, g_949, g_306[6][7][2]) < g_949), l_1380.f0)))) < l_1380.f3), g_83[3][5], g_1382, g_83[2][1]) & l_2260)) >= 7UL), g_1848[7], l_1380.f0) | g_746))) && l_21.f3), 8)), l_1380.f3, g_2311, g_2311.f3, l_1380.f3) > l_2313) | 0x25C5L)), 7L)) > l_1380.f3) > 0x4F00B5CBL) == 0x359712FBL)))
        {
            unsigned l_2316 = 1UL;
            l_1380.f0 &= l_21.f3;
            g_366 = ((((g_1809 && ((249UL <= (((g_1809 <= (((safe_sub_func_int16_t_s_s(((l_2316 == ((safe_lshift_func_int16_t_s_u((+g_2185), (safe_mod_func_uint8_t_u_u(1UL, (g_2035 && g_2311.f1))))) >= g_119.f0)) && 0x48FFL), 0xF33EL)) != 0x43L) || (-3L))) >= g_288) == l_1380.f2)) | 0x06L)) || g_237) < l_21.f2) ^ l_2321);
        }
        else
        {
            unsigned short l_2328 = 0x2C6EL;
            struct S0 l_2338 = {-0,-5L,327,5};
            unsigned l_2342 = 0x8F925908L;
            short l_2385 = 0x663AL;
            char l_2387 = 0xDDL;
            if ((safe_sub_func_int16_t_s_s(g_1017, ((safe_rshift_func_uint16_t_u_s((safe_mod_func_int8_t_s_s(0x17L, func_77(g_306[1][1][0], l_2328, (safe_add_func_int16_t_s_s((-1L), (safe_sub_func_uint16_t_u_u(65535UL, g_366)))), (!(l_2328 | (safe_mod_func_uint8_t_u_u(((((((safe_rshift_func_uint8_t_u_s(func_30(g_784[0][0][3], l_2337, l_2338, g_288, l_2321), g_119.f3)) && 65535UL) | l_2338.f3) < l_2313) >= l_2337) <= 0x70EBL), l_2338.f2)))), g_2339))), 1)) >= 4L))))
            {
                struct S0 l_2352 = {-0,6L,-841,11};
                int l_2353 = 0xB8B542F7L;
                --l_2342;
                for (g_927 = 0; (g_927 <= 2); g_927 += 1)
                {
                    unsigned l_2351 = 4294967295UL;
                    l_2341 = ((safe_sub_func_int32_t_s_s((g_237 >= l_21.f1), (safe_mod_func_uint8_t_u_u(l_2338.f2, (safe_sub_func_uint16_t_u_u(g_288, l_21.f3)))))) < 0x67B3L);
                    if (l_2351)
                        break;
                    l_2352 = g_1382;
                    g_947[0][2] = func_62(g_484, l_2353, g_119.f3);
                }
                if (l_1380.f3)
                    continue;
            }
            else
            {
                short l_2364 = (-4L);
                int l_2368[1][5] = {{0x6440A932L,0x6440A932L,0x6440A932L,0x6440A932L,0x6440A932L}};
                int i, j;
                for (l_2328 = 0; (l_2328 <= 2); l_2328 += 1)
                {
                    int l_2367[5] = {0x3AF7BF23L,0x3AF7BF23L,0x3AF7BF23L,0x3AF7BF23L,0x3AF7BF23L};
                    struct S0 l_2380 = {0,0xF3L,-632,9};
                    int i;
                    for (g_116 = 0; (g_116 <= 2); g_116 += 1)
                    {
                        int l_2365 = 0x9FDD700EL;
                        g_2035 = ((safe_sub_func_int32_t_s_s((safe_mod_func_uint32_t_u_u(4294967295UL, 1UL)), (((safe_add_func_int32_t_s_s(l_2337, g_130[0])) > (((safe_rshift_func_int8_t_s_u(func_7(l_1380.f1, (func_7((safe_sub_func_int32_t_s_s(g_119.f1, (func_7(l_2, (l_2364 | 0x1FCA7E16L), g_606[0][1], l_2365, g_133) > l_2366))), l_21.f0, l_1380, l_2342, g_1313) && l_2364), g_1111, l_2367[0], g_2339.f3), 0)) <= (-2L)) == 0x0AL)) != 0xD63AE1BEL))) | l_2365);
                        return l_2365;
                    }
                    if (l_2321)
                    {
                        unsigned short l_2369 = 0xBD39L;
                        --l_2369;
                        g_1111 = g_119;
                    }
                    else
                    {
                        struct S0 l_2372 = {-0,-2L,-583,8};
                        g_606[1][3] = l_2372;
                        g_606[1][3].f2 |= (g_236 > (func_30(l_2373, (safe_sub_func_uint8_t_u_u(g_1382.f1, func_30(func_30(l_2368[0][2], l_2338.f0, g_1111, ((safe_add_func_uint32_t_u_u(g_1476[1][5], (safe_add_func_uint16_t_u_u(func_7(g_1111.f0, l_1380.f1, l_1380, g_133, l_2341), g_949)))) & 0x08A0L), l_2337), g_111, l_2380, g_1382.f2, l_2368[0][2]))), g_119, l_2372.f3, l_1380.f1) && l_2380.f0));
                    }
                    for (g_462 = 0; (g_462 <= 2); g_462 += 1)
                    {
                        struct S0 l_2381 = {-0,0L,366,7};
                        g_2311.f2 ^= func_7(g_947[0][3], l_2364, l_2381, func_30(g_746, (0x7EB8L != l_2368[0][3]), g_606[1][3], (safe_lshift_func_int8_t_s_u((l_21.f0 && g_119.f1), 0)), l_2338.f3), l_2373);
                        return g_949;
                    }
                }
                for (g_369 = 0; (g_369 <= 2); g_369 += 1)
                {
                    for (g_927 = 0; (g_927 <= 2); g_927 += 1)
                    {
                        short l_2384 = 0x277AL;
                        g_433[2] = 0xD2B19147L;
                        if (l_2384)
                            break;
                        g_606[2][2] = l_1380;
                        return g_106;
                    }
                    if (l_2385)
                        break;
                }
                l_2368[0][4] = 0x648DFC11L;
                for (g_111 = 0; (g_111 <= 2); g_111 += 1)
                {
                    l_1380 = g_2386;
                }
            }
            l_1380.f2 = (0x1053C6CEL < ((l_2387 <= l_2321) < l_2260));
        }
        for (g_92 = 0; (g_92 <= 2); g_92 += 1)
        {
            unsigned char l_2395 = 0x00L;
            g_1382.f0 = (l_2388 < ((((((safe_mod_func_uint8_t_u_u(g_927, 1L)) == l_2337) & ((+(1UL == (safe_lshift_func_int8_t_s_u((safe_lshift_func_uint16_t_u_s(0UL, 0)), l_2395)))) & (safe_sub_func_int16_t_s_s(g_1848[7], l_2395)))) == l_2398) && l_2395) <= g_119.f3));
            g_2339.f0 ^= ((g_784[2][0][1] ^ (l_2395 & l_2321)) != ((safe_rshift_func_uint16_t_u_u(((safe_lshift_func_int16_t_s_u((l_1380.f2 | ((safe_lshift_func_int16_t_s_u(g_606[1][3].f3, l_2313)) < ((65532UL || (safe_sub_func_uint32_t_u_u(g_784[2][0][1], ((safe_lshift_func_uint8_t_u_s((l_2398 & 65533UL), 4)) > g_1382.f2)))) || l_2409))), g_1111.f1)) < l_2341), 11)) > 1L));
            if (g_2339.f1)
                continue;
            l_1380.f0 = g_433[1];
        }
    }
    if (l_21.f0)
    {
        char l_2426 = 0xD3L;
        struct S0 l_2427 = {0,0x5EL,507,4};
        unsigned short l_2558 = 0x78B0L;
        unsigned short l_2640 = 0UL;
lbl_2594:
        for (g_236 = 0; (g_236 < (-18)); g_236 = safe_sub_func_uint16_t_u_u(g_236, 5))
        {
            unsigned l_2418 = 0x2EE9BFBAL;
            struct S0 l_2425[9][4] = {{{0,-1L,771,0},{0,-1L,771,0},{0,-1L,771,0},{-0,0x7DL,320,1}},{{-0,0x7DL,320,1},{-0,0x10L,-58,12},{-0,0x10L,-58,12},{-0,0x7DL,320,1}},{{-0,0x10L,-58,12},{-0,0x7DL,320,1},{-0,0x10L,-58,12},{-0,0x10L,-58,12}},{{-0,0x7DL,320,1},{-0,0x7DL,320,1},{0,-1L,771,0},{-0,0x7DL,320,1}},{{-0,0x7DL,320,1},{-0,0x10L,-58,12},{-0,0x10L,-58,12},{-0,0x7DL,320,1}},{{-0,0x10L,-58,12},{-0,0x7DL,320,1},{-0,0x10L,-58,12},{-0,0x10L,-58,12}},{{-0,0x7DL,320,1},{-0,0x7DL,320,1},{0,-1L,771,0},{-0,0x7DL,320,1}},{{-0,0x7DL,320,1},{-0,0x10L,-58,12},{-0,0x10L,-58,12},{-0,0x7DL,320,1}},{{-0,0x10L,-58,12},{-0,0x7DL,320,1},{-0,0x10L,-58,12},{-0,0x10L,-58,12}}};
            short l_2441 = (-10L);
            unsigned short l_2459 = 0xC2E6L;
            char l_2503 = 0x8FL;
            int l_2525[8] = {0x769F55D1L,0x769F55D1L,0x769F55D1L,0x769F55D1L,0x769F55D1L,0x769F55D1L,0x769F55D1L,0x769F55D1L};
            unsigned short l_2560 = 0x833FL;
            int i, j;
            if (func_30((safe_rshift_func_uint16_t_u_s((safe_sub_func_int32_t_s_s((g_746 | (safe_lshift_func_int8_t_s_s(func_30((g_2339.f2 == g_462), (l_2418 || (!(safe_add_func_int8_t_s_s((safe_lshift_func_int16_t_s_s(func_7(g_2311.f0, g_1382.f3, g_2386, (((l_2409 & (safe_mod_func_uint32_t_u_u((l_2418 <= l_2340), 1L))) != l_2341) | g_606[1][3].f1), g_369), 8)), (-4L))))), l_2425[5][1], l_2426, l_2425[5][1].f3), l_2))), 0UL)), 0)), l_2426, l_2425[5][1], g_133, l_2425[5][1].f3))
            {
                short l_2434[9][3][4] = {{{0x2B99L,0x204AL,0x1E29L,(-5L)},{0x91FFL,0L,8L,1L},{0L,1L,0x2B99L,0x7B3AL}},{{0xE8FDL,0x60BEL,1L,1L},{0xE746L,0xE746L,0L,0x91FFL},{0xEA91L,(-2L),0x2B99L,0x60BEL}},{{0x1E29L,4L,(-1L),0x2B99L},{0x91FFL,4L,0x9EC0L,0x60BEL},{4L,(-2L),0xE8FDL,0x91FFL}},{{1L,0xE746L,1L,1L},{0x204AL,0x60BEL,0xEE73L,0x7B3AL},{4L,1L,0x1E29L,1L}},{{(-1L),0L,(-1L),(-5L)},{0L,0x204AL,0x9F56L,0xEA91L},{0x204AL,(-5L),0x2B99L,4L}},{{9L,0L,0x2B99L,1L},{0x204AL,0x91FFL,0x9F56L,1L},{0x60BEL,(-2L),1L,(-1L)}},{{1L,(-1L),(-3L),(-5L)},{(-1L),0x91FFL,0L,0xE746L},{4L,9L,9L,4L}},{{0x2B99L,1L,1L,0xE8FDL},{(-1L),4L,0L,0x7B3AL},{0xE746L,0x1E29L,1L,0x7B3AL}},{{(-3L),4L,(-2L),0xE8FDL},{0x204AL,1L,0x37B9L,4L},{0L,9L,0x2B99L,0xE746L}}};
                int l_2439 = 0x6FD9556CL;
                unsigned short l_2480 = 1UL;
                struct S0 l_2494 = {0,0x24L,71,15};
                unsigned char l_2526 = 0UL;
                int i, j, k;
                if (l_2426)
                {
                    int l_2440 = 0x056907A5L;
                    struct S0 l_2474 = {0,0L,-942,2};
                    unsigned l_2495 = 0x1AFFF67DL;
                    short l_2527 = 0xEA23L;
                    if (func_7(g_947[0][3], l_2425[5][1].f2, l_2427, (safe_lshift_func_uint8_t_u_s((safe_add_func_int32_t_s_s((((safe_add_func_int8_t_s_s(((((l_2427.f2 < l_2434[8][1][2]) <= (safe_lshift_func_uint8_t_u_s((safe_mul_func_uint8_t_u_u((0xC324B5C9L || 0xE04DA8D8L), (((0x7AL || (((l_2434[7][2][0] <= l_2439) >= 0x7EEBDD76L) ^ l_2440)) != g_433[6]) > (-1L)))), l_2441))) || 0xD5C122B8L) == 0xF9087861L), (-1L))) != 0x0BL) >= g_3), g_1382.f0)), 3)), l_2425[5][1].f2))
                    {
                        struct S0 l_2458[9] = {{-0,-1L,-4,6},{-0,0xA4L,637,14},{-0,-1L,-4,6},{-0,-1L,-4,6},{-0,0xA4L,637,14},{-0,-1L,-4,6},{-0,-1L,-4,6},{-0,0xA4L,637,14},{-0,-1L,-4,6}};
                        int i;
                        g_606[1][3].f2 = func_30((l_2434[7][0][0] & (safe_mod_func_uint16_t_u_u(l_2434[8][1][2], ((safe_mod_func_int16_t_s_s(g_369, (l_2440 ^ func_30(g_83[2][1], (((l_2409 | (safe_add_func_uint8_t_u_u((safe_add_func_uint8_t_u_u((safe_add_func_uint8_t_u_u(((safe_sub_func_int8_t_s_s((safe_lshift_func_int8_t_s_u(0L, 5)), (g_1382.f2 == func_7(((safe_add_func_int8_t_s_s((9UL >= g_606[1][3].f2), 0x1CL)) | 0x90L), g_119.f0, l_2425[2][3], l_2440, g_606[1][3].f2)))) | 0xA7L), g_1382.f0)), l_2440)), 0xFEL))) ^ g_2386.f2) && g_369), l_21, g_2311.f3, l_2313)))) & g_3)))), g_366, g_606[1][3], g_119.f1, g_2185);
                        l_2427 = l_2458[5];
                        if (g_1382.f2)
                            continue;
                    }
                    else
                    {
                        l_2459--;
                        l_2425[5][1].f0 &= (safe_sub_func_uint16_t_u_u(l_2425[5][1].f2, (func_7(func_30((safe_sub_func_uint8_t_u_u(g_1560, g_746)), g_746, g_119, (g_784[2][1][1] >= ((safe_lshift_func_uint16_t_u_s((l_2439 & (0x9C32L && l_2425[5][1].f3)), 10)) & 0x8101L)), g_2232), l_2440, l_2427, g_746, l_2459) >= 0x9342BB1EL)));
                        g_1476[0][1] = (safe_rshift_func_uint8_t_u_s(l_2427.f2, 7));
                        return l_2459;
                    }
                    if (((0x10B42B8FL != (((safe_lshift_func_int8_t_s_u((((safe_rshift_func_uint8_t_u_s(253UL, 2)) != func_7(l_2440, l_2434[3][1][0], l_2474, l_2341, l_2425[5][1].f0)) && func_7((safe_sub_func_uint32_t_u_u((safe_add_func_uint16_t_u_u(((g_119.f1 > g_1111.f3) & 0xADL), g_2339.f1)), l_2479)), l_2427.f2, g_2386, l_2425[5][1].f3, l_21.f2)), l_2425[5][1].f3)) >= g_67) != g_3)) & 0x311EL))
                    {
                        short l_2483 = 0x9C94L;
                        if (g_1999)
                            break;
                        l_2480--;
                        l_2474.f2 = ((l_2483 | g_130[0]) > 5L);
                        if (g_1017)
                            goto lbl_2484;
                    }
                    else
                    {
                        short l_2489 = 0x8E05L;
                        unsigned l_2492 = 4294967295UL;
                        l_2495 ^= func_7((g_111 && (safe_lshift_func_uint8_t_u_s(((safe_rshift_func_uint8_t_u_s((func_7(((l_2489 == ((safe_sub_func_uint16_t_u_u(l_2427.f1, 1L)) & (0x3BL & ((!(l_2427.f3 & l_2492)) | func_30(func_7(l_2439, g_433[2], g_2493, g_2386.f3, g_67), g_236, l_2494, l_2474.f1, l_21.f0))))) || l_2489), l_2474.f0, g_2493, l_2440, l_2425[5][1].f2) > l_2340), g_2493.f2)) || g_119.f0), g_106))), g_133, l_2425[1][0], g_83[2][1], l_2474.f1);
                    }
                    if ((g_237 && (safe_lshift_func_uint8_t_u_s(0x88L, g_1476[2][5]))))
                    {
                        unsigned l_2504 = 6UL;
                        g_1476[1][4] = (l_2498 && 7L);
                        l_2427.f0 = (safe_lshift_func_int16_t_s_u(func_7(l_2434[8][1][2], l_2427.f2, l_2425[8][1], ((g_784[2][1][0] ^ (0L && g_3)) != (safe_lshift_func_uint16_t_u_u((l_2434[8][1][2] == 0x47A00493L), g_606[1][3].f1))), l_2503), 6));
                        l_2474.f0 ^= l_2409;
                        l_2498 ^= func_7(l_2504, (~func_7(l_2474.f2, (((safe_lshift_func_int16_t_s_s((l_2494.f2 != (l_2434[8][1][2] && ((g_83[2][1] >= ((safe_mod_func_int16_t_s_s(((safe_add_func_uint32_t_u_u((safe_mod_func_uint32_t_u_u((safe_lshift_func_int16_t_s_s((((((((safe_mod_func_uint32_t_u_u((safe_add_func_uint8_t_u_u(((safe_sub_func_uint32_t_u_u(((func_30((safe_mod_func_int8_t_s_s((safe_sub_func_int16_t_s_s(g_237, func_30(g_746, (g_947[0][4] <= (0x5BL <= g_2311.f3)), l_2494, g_111, g_2493.f1))), l_2503)), g_2493.f2, g_2339, g_2493.f1, g_2493.f2) <= 0x2DE0L) ^ l_2425[5][1].f0), g_3)) > l_2525[0]), g_306[2][1][2])), l_2504)) && 0x309139E9L) & l_2494.f1) | l_2526) & l_2504) > 247UL) >= l_2526), g_1809)), g_83[2][4])), l_2504)) == 0x827EL), 1L)) || l_2440)) || 1L))), g_1848[7])) != g_2035) & g_130[0]), g_1382, l_2527, g_606[1][3].f1)), g_606[2][6], l_2427.f3, g_2386.f3);
                    }
                    else
                    {
                        g_119.f2 ^= g_237;
                        g_1476[1][4] &= g_2232;
                        g_366 = 1L;
                    }
                }
                else
                {
                    unsigned l_2538[5][1][8] = {{{5UL,8UL,0UL,6UL,0x93270430L,0xB3B0CBD6L,0x93270430L,6UL}},{{4294967293UL,5UL,4294967293UL,1UL,6UL,0xB3B0CBD6L,0UL,0UL}},{{0UL,8UL,5UL,5UL,8UL,0UL,6UL,0x93270430L}},{{0UL,4294967292UL,4294967295UL,8UL,6UL,8UL,4294967295UL,4294967292UL}},{{0xB3B0CBD6L,0x93270430L,6UL,0UL,8UL,5UL,5UL,8UL}}};
                    unsigned l_2545[4] = {0x99C01AE0L,0x99C01AE0L,0x99C01AE0L,0x99C01AE0L};
                    int i, j, k;
                    for (l_21.f1 = (-13); (l_21.f1 <= 12); ++l_21.f1)
                    {
                        struct S0 l_2546 = {-0,0L,-226,5};
                        g_2386 = g_1111;
                        l_2498 |= func_30((0UL < 1L), l_2425[5][1].f2, g_1382, (((safe_mod_func_uint32_t_u_u(l_2425[5][1].f3, (safe_add_func_uint32_t_u_u(g_1476[0][6], 0UL)))) ^ (0UL | (l_2425[5][1].f2 | g_1848[7]))) && l_2427.f1), g_83[2][1]);
                        l_2546.f0 = ((0xA8693954L > ((safe_sub_func_int16_t_s_s(0xF972L, g_369)) < (g_2493.f1 >= func_30((((safe_lshift_func_int8_t_s_s(l_2538[0][0][4], 2)) < ((safe_add_func_uint16_t_u_u((g_2035 && g_106), (safe_rshift_func_uint16_t_u_u((safe_sub_func_int8_t_s_s((l_2525[4] | g_433[2]), g_606[1][3].f2)), 15)))) <= 0L)) == l_2425[5][1].f0), l_2545[1], l_2546, l_2546.f1, g_2311.f0)))) != g_2311.f0);
                    }
                }
                l_2498 = g_746;
                if (l_2427.f3)
                    break;
            }
            else
            {
                unsigned char l_2549 = 0x79L;
                unsigned l_2557[5][5] = {{0x51E9EB33L,0xAC039BA7L,3UL,0x51E9EB33L,0xBD501287L},{0UL,0x51E9EB33L,0x435D7CC8L,0x51E9EB33L,0UL},{3UL,4294967294UL,0xAC039BA7L,0xBD501287L,4294967294UL},{0UL,0xAC039BA7L,0xAC039BA7L,0UL,0xBD501287L},{0x51E9EB33L,0UL,0x435D7CC8L,4294967294UL,4294967294UL}};
                struct S0 l_2559 = {-0,8L,505,13};
                int i, j;
                if (func_30(((safe_add_func_uint32_t_u_u((~func_30(l_2549, (g_2311.f1 == (0xE492L != 0x1EA8L)), g_119, g_1848[4], ((safe_unary_minus_func_uint16_t_u(((safe_sub_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u(((safe_lshift_func_int8_t_s_u(((g_92 < func_7(l_2549, l_2340, l_2427, g_119.f0, g_2311.f2)) | l_2425[5][1].f3), 5)) > l_2425[5][1].f3), l_2549)), l_2557[1][1])) || l_2425[5][1].f3))) | 255UL))), l_2558)) <= 1UL), g_119.f1, l_2559, l_2459, g_462))
                {
                    if (l_2559.f3)
                        goto lbl_2484;
                }
                else
                {
                    ++l_2560;
                }
                l_2340 = (0xD5CDL || (safe_lshift_func_int8_t_s_u(((safe_lshift_func_int8_t_s_s(g_92, g_1476[0][5])) != (0x4691L <= (func_7(g_2339.f1, func_30((g_1382.f0 || l_2479), (safe_sub_func_int16_t_s_s((g_2185 & (g_606[1][3].f0 ^ 0x41CAL)), g_784[2][0][1])), g_606[1][3], g_2232, g_1999), g_606[0][2], g_83[2][1], g_606[1][3].f2) & l_2))), g_133)));
                g_606[1][3] = g_1382;
            }
            return l_2427.f1;
        }
        for (g_2493.f1 = 0; (g_2493.f1 <= 2); g_2493.f1 += 1)
        {
            char l_2571 = 1L;
            int l_2592 = (-3L);
            if ((safe_sub_func_int16_t_s_s(0x6C41L, (l_2571 || 0x9960L))))
            {
                int l_2590 = 1L;
                struct S0 l_2593 = {-0,0xDAL,-1013,8};
                for (l_21.f1 = 0; (l_21.f1 <= 2); l_21.f1 += 1)
                {
                    int l_2591[8] = {0x1FB4F793L,0x1FB4F793L,0x1FB4F793L,0x1FB4F793L,0x1FB4F793L,0x1FB4F793L,0x1FB4F793L,0x1FB4F793L};
                    int i, j;
                    if (((safe_rshift_func_uint8_t_u_u(7UL, 2)) | g_1476[g_2493.f1][(g_2493.f1 + 2)]))
                    {
                        unsigned l_2587[5] = {1UL,1UL,1UL,1UL,1UL};
                        int i;
                        l_2592 = (5UL <= func_45((safe_rshift_func_int8_t_s_s(l_2427.f0, 6)), ((safe_sub_func_int16_t_s_s(l_2571, ((safe_unary_minus_func_uint32_t_u(((safe_sub_func_uint32_t_u_u(((safe_mod_func_int16_t_s_s(func_15(l_2427, (!g_1017), func_30(((safe_mod_func_int32_t_s_s((safe_add_func_uint32_t_u_u(5UL, (((l_2587[3] || g_1382.f0) < (safe_mod_func_uint16_t_u_u(g_119.f0, l_2479))) || g_1382.f1))), 0x68E44B7FL)) < g_433[2]), g_1848[7], l_2427, g_2311.f1, g_2493.f3), g_119.f0, g_947[0][2]), 0xFCF3L)) != l_2590), l_21.f3)) != 0x863BL))) >= l_2591[3]))) <= g_4[5][1])));
                        l_2427 = l_2593;
                    }
                    else
                    {
                        unsigned char l_2595[2];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_2595[i] = 0x02L;
                        g_2339 = g_2493;
                        if (g_2493.f2)
                            goto lbl_2594;
                        l_2427.f0 = l_2595[0];
                        if (g_119.f0)
                            continue;
                    }
                }
            }
            else
            {
                return l_2571;
            }
            return g_2386.f1;
        }
        for (l_2498 = 0; (l_2498 >= (-22)); l_2498 = safe_sub_func_uint8_t_u_u(l_2498, 7))
        {
            unsigned char l_2613[8][9] = {{255UL,0x01L,255UL,0x01L,255UL,0x77L,255UL,0x77L,255UL},{0x8AL,0xE8L,0xE8L,0x8AL,0x87L,8UL,0x96L,3UL,0x38L},{1UL,0x77L,1UL,255UL,3UL,0x77L,3UL,255UL,1UL},{0x38L,0x38L,8UL,0xE8L,0x87L,3UL,0xB3L,0x96L,0x8AL},{255UL,2UL,0xF2L,255UL,255UL,255UL,0xF2L,2UL,255UL},{0x87L,0xB3L,8UL,0x8AL,0x38L,0x96L,0xE8L,3UL,3UL},{3UL,2UL,1UL,0x01L,1UL,2UL,3UL,0x01L,3UL},{0x87L,0x38L,0xE8L,0xB3L,0x8AL,3UL,8UL,8UL,3UL}};
            short l_2630 = 0x6ABAL;
            struct S0 l_2646[4] = {{-0,5L,-156,9},{-0,5L,-156,9},{-0,5L,-156,9},{-0,5L,-156,9}};
            unsigned l_2662 = 0x3A947ED1L;
            unsigned l_2664[1][9] = {{0x65498303L,0x4B22B9E3L,0x65498303L,0x4B22B9E3L,0x65498303L,0x4B22B9E3L,0x65498303L,0x4B22B9E3L,0x65498303L}};
            unsigned l_2669 = 1UL;
            struct S0 l_2670 = {0,-1L,-137,12};
            int i, j;
            g_366 = (safe_add_func_uint8_t_u_u((safe_add_func_int32_t_s_s((((l_2498 > ((((!g_2602) | ((safe_lshift_func_int8_t_s_u((g_130[0] >= g_1382.f2), 7)) <= (+(safe_mul_func_int8_t_s_s((safe_sub_func_int32_t_s_s((((safe_rshift_func_uint8_t_u_u((safe_add_func_int16_t_s_s(((~(l_2613[1][2] <= (((g_2386.f1 != (safe_lshift_func_int8_t_s_s((!0xBEL), ((safe_lshift_func_uint8_t_u_s(func_7((safe_rshift_func_uint16_t_u_s((safe_rshift_func_uint8_t_u_u(g_1476[1][4], 2)), (safe_mod_func_int16_t_s_s(0L, 0x3F5DL)))), l_2624, l_21, l_2625, g_306[4][3][0]), 4)) || g_83[0][6])))) > l_2626) & (-1L)))) <= l_2613[5][7]), g_288)), 2)) < l_2613[1][2]) ^ l_2558), 0xEE618692L)), 0L))))) < l_2613[1][2]) >= l_2613[2][2])) != g_1476[1][4]) ^ g_2232), g_133)), g_2035));
            if (func_22((l_2627 || (safe_sub_func_uint32_t_u_u(l_2630, func_45(l_21.f0, (((safe_unary_minus_func_int8_t_s(g_2493.f0)) | (func_52((safe_mod_func_uint16_t_u_u(l_2340, 0x2D10L)), (safe_mod_func_int32_t_s_s((0xCFL <= (safe_rshift_func_int8_t_s_u(5L, l_2427.f2))), g_116)), g_3, g_366) && g_237)) == l_2625))))), g_746, l_2427, g_1382.f1))
            {
                char l_2645 = 0x6FL;
                int l_2657 = 0x5A7BDD12L;
                g_2311.f0 ^= func_77(l_2427.f2, ((!((((l_2630 || (g_1382.f1 && (!0x5AL))) <= (l_2626 | (((safe_sub_func_uint8_t_u_u(l_2640, ((safe_sub_func_uint8_t_u_u(l_2613[1][2], ((safe_rshift_func_int8_t_s_s(((l_2625 && l_2630) == 2UL), l_2613[5][4])) && l_21.f2))) ^ l_2645))) <= 249UL) < 251UL))) < l_2613[6][2]) ^ l_2645)) != 0UL), l_2558, l_21.f3, l_2646[2]);
                g_1382.f0 = (((!l_21.f0) ^ (g_2035 == (-5L))) < (((~((safe_add_func_int16_t_s_s(g_2493.f0, (((safe_mod_func_uint32_t_u_u(0x0902586CL, 0xE19C6BE0L)) & g_606[1][3].f3) > func_30(func_30(l_2613[1][2], (+(safe_rshift_func_uint8_t_u_s(((safe_sub_func_int16_t_s_s((-1L), g_237)) > 0x9C78L), l_2427.f2))), g_119, l_2613[1][2], g_119.f1), l_21.f2, l_2646[1], g_467, l_2427.f1)))) | g_2311.f2)) & g_467) >= g_119.f1));
                l_2657 = func_77(l_2426, l_2646[2].f1, l_2479, g_433[2], g_2386);
                if (((g_1476[1][4] >= ((-8L) < (+(func_7((g_2339.f3 < l_2426), (safe_lshift_func_int8_t_s_s(((((((safe_sub_func_int32_t_s_s(l_2657, l_2646[2].f1)) || func_7((l_2662 > (0xE3L <= (safe_unary_minus_func_uint32_t_u(l_2664[0][5])))), l_2613[7][7], g_2311, l_2646[2].f0, g_784[2][1][3])) | g_130[0]) > (-1L)) != g_2339.f0) <= g_306[2][2][0]), g_1560)), g_2386, l_2427.f0, l_21.f1) != g_1848[7])))) & 0x3FL))
                {
                    l_2657 = (safe_add_func_int16_t_s_s((safe_mod_func_int32_t_s_s(9L, l_2657)), 0xB318L));
                    if (g_366)
                    {
                        if (l_2669)
                            break;
                        return g_2035;
                    }
                    else
                    {
                        int l_2673 = (-5L);
                        char l_2678 = 0x2EL;
                        g_1111 = l_2670;
                        g_1111.f2 = (((safe_mod_func_int8_t_s_s((l_2645 <= (+l_2673)), (safe_sub_func_int32_t_s_s((((safe_lshift_func_uint8_t_u_u(l_2613[1][2], 7)) < l_2678) || (safe_mod_func_int8_t_s_s(l_2670.f1, func_45(l_2657, (safe_rshift_func_uint16_t_u_u(g_2232, l_2645)))))), g_1476[1][4])))) <= 0xCBEFL) == 0xE27637BCL);
                    }
                }
                else
                {
                    l_2427.f2 = 0x895C612BL;
                }
            }
            else
            {
                return g_133;
            }
        }
        for (g_2339.f1 = 12; (g_2339.f1 != (-26)); --g_2339.f1)
        {
            unsigned l_2691 = 0x9DC0556BL;
            struct S0 l_2699 = {0,1L,-854,14};
            unsigned char l_2700 = 0UL;
            for (l_21.f1 = 0; (l_21.f1 <= 3); l_21.f1 += 1)
            {
                int i;
                if (g_433[(l_21.f1 + 1)])
                    break;
                for (g_3 = 3; (g_3 >= 0); g_3 -= 1)
                {
                    char l_2697 = 0xFFL;
                    for (g_1560 = 3; (g_1560 >= 0); g_1560 -= 1)
                    {
                        int l_2692 = (-2L);
                        int i, j;
                        l_2692 = (((safe_lshift_func_int8_t_s_s((safe_mod_func_uint16_t_u_u((safe_sub_func_int16_t_s_s(g_83[g_3][(g_3 + 3)], 0x1DF2L)), g_83[g_3][g_1560])), 2)) > l_2691) <= 0xCCDAL);
                        g_1382.f2 = ((g_2311.f3 ^ (safe_sub_func_int16_t_s_s((((safe_rshift_func_uint8_t_u_u(func_77(g_2493.f0, l_2697, g_2698[8][0], ((g_1382.f1 | 0xAA81CA9DL) && (l_21.f0 <= g_2311.f2)), l_2699), l_2700)) ^ 0xFAL) ^ 0x20A3L), l_21.f3))) < (-4L));
                        g_2311.f0 = l_2697;
                        if (g_83[g_3][(g_3 + 3)])
                            continue;
                    }
                    return g_433[(l_21.f1 + 1)];
                }
            }
        }
    }
    else
    {
        unsigned short l_2725 = 0UL;
        int l_2757[10][9] = {{(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L)},{(-1L),0x28D7F8C0L,(-1L),0x28D7F8C0L,(-1L),0x28D7F8C0L,(-1L),0x28D7F8C0L,(-1L)},{(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L)},{(-1L),0x28D7F8C0L,(-1L),0x28D7F8C0L,(-1L),0x28D7F8C0L,(-1L),0x28D7F8C0L,(-1L)},{(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L)},{(-1L),0x28D7F8C0L,(-1L),0x28D7F8C0L,(-1L),0x28D7F8C0L,(-1L),0x28D7F8C0L,(-1L)},{(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L)},{(-1L),0x28D7F8C0L,(-1L),0x28D7F8C0L,(-1L),0x28D7F8C0L,(-1L),0x28D7F8C0L,(-1L)},{(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L)},{(-1L),0x28D7F8C0L,(-1L),0x28D7F8C0L,(-1L),0x28D7F8C0L,(-1L),0x28D7F8C0L,(-1L)}};
        int l_2772 = 7L;
        unsigned short l_2792 = 65531UL;
        unsigned l_2793 = 4294967295UL;
        unsigned l_2802 = 0x29F10EE1L;
        int i, j;
lbl_2870:
        for (l_2626 = (-26); (l_2626 == 18); l_2626 = safe_add_func_uint16_t_u_u(l_2626, 1))
        {
            unsigned short l_2708 = 0x3E63L;
            short l_2713 = 0x60D3L;
            if (g_1848[7])
            {
                l_21.f0 = 0xB691785BL;
                if (g_119.f3)
                    break;
            }
            else
            {
                int l_2707 = 0x5E849379L;
                g_606[1][3].f2 |= l_2341;
                g_2386.f0 = (safe_rshift_func_uint8_t_u_u((l_2707 != ((l_2708 < (((((safe_sub_func_uint16_t_u_u((((g_306[2][2][0] > l_2707) && (-1L)) && (safe_mod_func_uint32_t_u_u(0xC34E1C52L, (g_2493.f2 || ((l_2713 || 0x2E7542EEL) <= g_306[2][2][0]))))), l_2313)) & l_2708) <= l_2708) && 4294967292UL) != 8L)) == g_2493.f3)), l_2707));
            }
            for (g_236 = 0; (g_236 <= 2); g_236 += 1)
            {
                g_119 = g_2311;
            }
        }
        for (g_2035 = 0; (g_2035 <= 28); g_2035 = safe_add_func_int32_t_s_s(g_2035, 9))
        {
            unsigned l_2722 = 4294967291UL;
            struct S0 l_2773 = {-0,0x68L,425,15};
            for (g_288 = 19; (g_288 == 32); ++g_288)
            {
                return l_2625;
            }
            if (((safe_add_func_int32_t_s_s(((safe_add_func_uint32_t_u_u((l_2722 || ((safe_lshift_func_int8_t_s_u(1L, 0)) <= g_2035)), ((((g_83[3][6] == l_2725) > ((safe_lshift_func_int8_t_s_u(((safe_add_func_int16_t_s_s(g_467, l_2624)) > (7UL <= ((g_1111.f1 & l_2479) == 0x33L))), l_2722)) >= l_2722)) <= l_2722) && g_130[0]))) > g_2311.f1), 1L)) >= g_784[2][1][2]))
            {
                if (g_133)
                    break;
            }
            else
            {
                unsigned char l_2743 = 0x67L;
                int l_2760 = 0xF163C79DL;
                unsigned l_2763[5][10] = {{0x342A9266L,0x44362D38L,4294967291UL,0xE8AF59B8L,0xE8AF59B8L,4294967291UL,0x44362D38L,0x342A9266L,0xC8E43733L,4294967295UL},{1UL,0x32BA813CL,3UL,0x342A9266L,4294967289UL,0xE8AF59B8L,0x79427902L,4294967295UL,0x79427902L,0xE8AF59B8L},{0x20C15073L,4294967289UL,3UL,4294967289UL,0x20C15073L,4294967295UL,0xC8E43733L,0x342A9266L,0x44362D38L,4294967291UL},{0xC8E43733L,7UL,4294967291UL,4294967295UL,0xAD021357L,0x88692B57L,0x88692B57L,0xAD021357L,4294967295UL,4294967291UL},{4294967295UL,4294967295UL,0x32BA813CL,4294967291UL,0x20C15073L,4294967295UL,0xAD021357L,3UL,1UL,0xE8AF59B8L}};
                struct S0 l_2764[5] = {{-0,9L,890,6},{-0,9L,890,6},{-0,9L,890,6},{-0,9L,890,6},{-0,9L,890,6}};
                int l_2784[5] = {(-1L),(-1L),(-1L),(-1L),(-1L)};
                int i, j;
                for (g_133 = 17; (g_133 < 35); g_133++)
                {
                    short l_2756[6][10][4] = {{{0xA339L,0x80D3L,0x21C9L,0L},{0x2C61L,0L,3L,0xE06AL},{0x2C61L,(-3L),0x21C9L,3L},{0x31C8L,0xE06AL,(-10L),0x1FF3L},{0x1FF3L,0xAB02L,0xAB0DL,0xAB0DL},{0x80D3L,0x80D3L,0x1FF3L,(-10L)},{(-8L),0x5DECL,3L,0x21C9L},{(-1L),0x1FF3L,0xE06AL,3L},{0x6C04L,0x1FF3L,0L,0x21C9L},{0x1FF3L,0x5DECL,0xA339L,(-10L)}},{{0xAF8DL,0x80D3L,1L,0xAB0DL},{3L,0xAB02L,3L,0x1FF3L},{(-1L),0xE06AL,(-3L),3L},{(-3L),(-3L),1L,0xE06AL},{0x1FF3L,0L,1L,0L},{(-3L),0x80D3L,(-3L),0xA339L},{(-1L),3L,3L,1L},{3L,1L,1L,3L},{0xAF8DL,0x21C9L,0xA339L,(-3L)},{0x1FF3L,1L,0L,1L}},{{0x6C04L,0x80D3L,0xE06AL,1L},{(-1L),1L,3L,(-3L)},{(-8L),0x21C9L,0x1FF3L,3L},{0x80D3L,1L,0xAB0DL,1L},{0x31C8L,0xAB0DL,3L,0x2C61L},{0L,0x5DECL,0x80D3L,(-1L)},{1L,(-10L),(-3L),0xAF8DL},{1L,(-3L),0x80D3L,(-3L)},{0L,0xAF8DL,3L,0x31C8L},{0x31C8L,0L,(-8L),(-8L)}},{{0x5DECL,0x5DECL,0x31C8L,3L},{0x21C9L,0xA339L,(-3L),0x80D3L},{0xE06AL,0x31C8L,0xAF8DL,(-3L)},{1L,0x31C8L,(-1L),0x80D3L},{0x31C8L,0xA339L,0x2C61L,3L},{0xAB02L,0x5DECL,0x6C04L,(-8L)},{(-3L),0L,(-3L),0x31C8L},{0x1FF3L,0xAF8DL,(-3L),(-3L)},{3L,(-3L),(-1L),0xAF8DL},{0x31C8L,(-10L),(-1L),(-1L)}},{{3L,0x5DECL,(-3L),0x2C61L},{0x1FF3L,0xAB0DL,(-3L),0x6C04L},{(-3L),0x6C04L,0x6C04L,(-3L)},{0xAB02L,0x80D3L,0x2C61L,(-3L)},{0x31C8L,1L,(-1L),(-1L)},{1L,0x5DECL,0xAF8DL,(-1L)},{0xE06AL,1L,(-3L),(-3L)},{0x21C9L,0x80D3L,0x31C8L,(-3L)},{0x1FF3L,3L,0xAB02L,3L},{0x2C61L,0xAF8DL,1L,0L}},{{1L,0x1FF3L,(-1L),0x5DECL},{(-10L),0x6C04L,1L,(-8L)},{(-10L),(-1L),(-1L),1L},{1L,(-8L),1L,0x2C61L},{0x2C61L,0x80D3L,0xAB02L,0xAB02L},{0x1FF3L,0x1FF3L,0x2C61L,1L},{0L,0x31C8L,1L,(-1L)},{0xAB0DL,0x2C61L,(-8L),1L},{(-3L),0x2C61L,0x5DECL,(-1L)},{0x2C61L,0x31C8L,0L,1L}}};
                    int i, j, k;
                    for (l_2498 = 0; (l_2498 >= 0); l_2498 -= 1)
                    {
                        int i, j;
                        g_2339.f2 ^= g_947[l_2498][(l_2498 + 1)];
                    }
                    for (g_2386.f1 = 0; (g_2386.f1 == (-16)); --g_2386.f1)
                    {
                        char l_2740 = 0x4DL;
                        l_2757[8][4] = (safe_lshift_func_int16_t_s_u(((safe_lshift_func_uint16_t_u_u(l_2740, 11)) & (4294967295UL < g_949)), (func_7(l_2722, func_7(l_2722, ((safe_lshift_func_uint8_t_u_s(0x42L, l_2743)) & (safe_lshift_func_uint16_t_u_s((safe_sub_func_int8_t_s_s((safe_mod_func_uint32_t_u_u((safe_sub_func_int8_t_s_s(((safe_mod_func_int16_t_s_s((safe_add_func_int32_t_s_s(l_2722, ((((0x0E725F73L && l_2725) & l_2722) | 0L) >= 0xB6L))), g_92)) == 0x86L), l_2722)), g_2311.f0)), l_2756[0][3][0])), g_1382.f2))), g_606[1][3], g_1848[7], l_2756[0][0][0]), g_2311, g_2698[6][0], g_2493.f2) == 0x2E79B31CL)));
                        l_2760 &= (g_1111.f0 != (safe_sub_func_uint16_t_u_u(l_2340, l_2756[0][3][0])));
                        return g_2185;
                    }
                }
                g_2339.f2 = (safe_rshift_func_int8_t_s_s((l_2722 || l_2763[2][6]), 6));
                if (l_2626)
                {
                    int l_2765 = 0x76D01AD7L;
                    l_21 = l_2764[4];
                    if ((l_2765 ^ ((g_2185 | func_77(func_7((safe_sub_func_int8_t_s_s(0xDAL, g_2386.f0)), g_2493.f0, g_2386, (safe_mod_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_s(func_62((func_7(l_2764[4].f1, ((0x76C5L > (l_2498 | g_119.f3)) < l_2764[4].f3), g_119, l_2765, l_2757[3][1]) || g_306[2][2][0]), l_2772, g_2493.f1), 0)) >= g_306[2][2][0]), 65528UL)), l_2765), l_2498, l_2722, g_2339.f3, l_2773)) == l_2627)))
                    {
                        g_1382 = g_2386;
                        l_2773.f0 ^= ((!g_119.f0) | l_2757[1][3]);
                        if (g_1111.f0)
                            continue;
                    }
                    else
                    {
                        unsigned l_2774 = 4294967289UL;
                        l_21.f0 ^= (l_2774 < (safe_sub_func_uint8_t_u_u(((l_2765 < func_52((safe_sub_func_uint32_t_u_u(((safe_lshift_func_int8_t_s_s(g_1111.f3, 1)) == (safe_unary_minus_func_int16_t_s((~func_62(l_2743, ((safe_sub_func_int32_t_s_s((-1L), l_2784[1])) ^ l_2765), l_2757[8][4]))))), 4294967295UL)), g_306[2][2][0], l_2722, l_2624)) | g_1809), g_2493.f2)));
                    }
                    if (func_38(g_288, (safe_lshift_func_int16_t_s_s((safe_add_func_uint32_t_u_u(((g_2493.f1 < (safe_lshift_func_uint16_t_u_u(func_52(l_2763[2][6], g_1382.f2, ((safe_unary_minus_func_uint32_t_u(0x001480D2L)) || func_7(l_2722, g_2311.f3, g_1111, l_2763[2][6], l_2792)), l_2765), l_2793))) | g_306[2][2][0]), 0UL)), 12)), g_2339.f1, l_2765))
                    {
                        unsigned l_2794 = 0xD1DF44C1L;
                        l_2794 = (g_1560 | (g_1111.f2 || l_2763[2][6]));
                        l_2340 |= 0x97AA35D8L;
                    }
                    else
                    {
                        struct S0 l_2795 = {-0,-4L,323,14};
                        if (g_1809)
                            goto lbl_2484;
                        g_1382 = l_2795;
                    }
                }
                else
                {
                    g_2493 = g_606[0][6];
                }
            }
            for (g_92 = (-9); (g_92 > 4); g_92 = safe_add_func_int32_t_s_s(g_92, 5))
            {
                int l_2798 = (-3L);
                return l_2798;
            }
        }
        for (g_119.f1 = 0; (g_119.f1 < (-10)); g_119.f1--)
        {
            short l_2801 = 0x1FD8L;
            int l_2851 = (-1L);
            char l_2864 = 0x4CL;
            l_2802--;
            for (g_237 = 0; (g_237 != 18); g_237++)
            {
                unsigned short l_2824 = 0xA11EL;
                if (g_784[4][1][0])
                {
                    char l_2813 = 0x33L;
                    if ((g_67 >= (((g_116 || 0x4576960FL) ^ (safe_lshift_func_int16_t_s_s((((g_1017 < ((safe_add_func_int32_t_s_s(((safe_sub_func_uint32_t_u_u(g_606[1][3].f1, l_2813)) ^ func_7(g_2386.f3, l_2813, g_119, g_3, l_2801)), 1UL)) != g_484)) == g_433[2]) > l_2801), l_2313))) | g_288)))
                    {
                        int l_2829 = 0x0A0A59EFL;
                        int l_2841 = 0x1FE0BC06L;
                        g_2493.f2 ^= (((((g_746 <= (safe_rshift_func_uint8_t_u_u(l_2792, ((0xCFCAL && l_2792) != (safe_add_func_uint32_t_u_u(g_1111.f1, 0x31FF77F3L)))))) >= func_7(l_2801, (safe_rshift_func_int8_t_s_u(((safe_rshift_func_int16_t_s_u((safe_mod_func_int8_t_s_s(l_2824, (safe_add_func_int16_t_s_s((safe_mod_func_int16_t_s_s(g_467, g_1382.f0)), l_2824)))), g_306[2][2][0])) > 0xA7E8L), l_2802)), g_2386, l_2801, l_2793)) & g_2493.f3) ^ g_1382.f3) != 0xF1L);
                        g_119.f0 ^= g_288;
                        l_2829 = g_1848[7];
                        l_2841 = (!(g_4[5][0] != (((safe_lshift_func_uint8_t_u_s(l_2801, 0)) < l_2801) || ((safe_rshift_func_uint16_t_u_s((((+func_7(l_2625, (safe_unary_minus_func_uint32_t_u((l_2801 > ((((safe_rshift_func_int16_t_s_u(g_2311.f2, g_1476[1][4])) != (safe_add_func_uint32_t_u_u((safe_sub_func_int8_t_s_s(l_2824, l_2802)), 1UL))) | 0xACL) && l_2801)))), g_2386, l_2824, g_433[5])) > g_606[1][3].f0) == (-1L)), 10)) == 0x56F6D0BCL))));
                    }
                    else
                    {
                        unsigned short l_2844 = 65529UL;
                        l_2851 = (safe_rshift_func_int8_t_s_s(((func_7(g_2311.f2, l_2844, g_2386, (((((~(safe_rshift_func_int8_t_s_s(0xB6L, ((-6L) > ((0xA1L & 0xE3L) > func_7(l_2813, ((safe_add_func_int32_t_s_s((safe_add_func_int32_t_s_s(l_2813, 3L)), 4294967287UL)) >= g_2698[4][0]), g_606[1][3], g_2311.f3, l_2757[8][3])))))) || g_111) <= g_369) || g_2386.f0) == g_1382.f0), g_606[1][3].f3) < 0L) <= g_1476[1][4]), g_2602));
                        return g_1313;
                    }
                    for (g_67 = 13; (g_67 <= 52); g_67 = safe_add_func_uint8_t_u_u(g_67, 1))
                    {
                        if (g_2339.f1)
                            break;
                    }
                }
                else
                {
                    short l_2858 = 0x0324L;
                    for (g_2232 = 0; (g_2232 <= 34); g_2232 = safe_add_func_uint16_t_u_u(g_2232, 6))
                    {
                        short l_2865 = 0x26CAL;
                        l_2865 = (safe_mod_func_uint16_t_u_u(l_2851, (l_2858 ^ (safe_add_func_uint16_t_u_u((safe_add_func_int16_t_s_s(l_2802, g_2493.f3)), func_7((((l_2801 && l_2858) < 0x1FDB16B3L) != (safe_unary_minus_func_int32_t_s((l_2772 == ((((1UL <= g_2386.f1) != l_2864) != l_2864) != g_746))))), l_2624, l_21, l_2313, l_2858))))));
                    }
                    for (g_3 = 0; (g_3 < 19); g_3 = safe_add_func_int8_t_s_s(g_3, 7))
                    {
                        g_433[2] = (safe_rshift_func_uint16_t_u_u(7UL, 15));
                    }
                    g_2493 = g_119;
                    if (l_2792)
                        goto lbl_2870;
                }
                g_606[2][4] = g_1111;
            }
        }
    }
    return l_2871[4][5][0];
}







static unsigned func_7(short p_8, unsigned char p_9, struct S0 p_10, unsigned char p_11, unsigned char p_12)
{
    short l_2312 = 0x7752L;
    return l_2312;
}







static unsigned short func_15(struct S0 p_16, int p_17, unsigned short p_18, unsigned short p_19, unsigned p_20)
{
    struct S0 l_2261[2][7][5] = {{{{-0,0L,491,10},{-0,0L,491,10},{0,2L,721,2},{0,0L,334,2},{0,2L,721,2}},{{-0,5L,-344,15},{-0,5L,-344,15},{-0,0x90L,-858,3},{-0,0L,-710,7},{-0,0x90L,-858,3}},{{-0,0L,491,10},{-0,0L,491,10},{0,2L,721,2},{0,0L,334,2},{0,2L,721,2}},{{-0,5L,-344,15},{-0,5L,-344,15},{-0,0x90L,-858,3},{-0,0L,-710,7},{-0,0x90L,-858,3}},{{-0,0L,491,10},{-0,0L,491,10},{0,2L,721,2},{0,0L,334,2},{0,2L,721,2}},{{-0,5L,-344,15},{-0,5L,-344,15},{-0,0x90L,-858,3},{-0,0L,-710,7},{-0,0x90L,-858,3}},{{-0,0L,491,10},{-0,0L,491,10},{0,2L,721,2},{0,0L,334,2},{0,2L,721,2}}},{{{-0,5L,-344,15},{-0,5L,-344,15},{-0,0x90L,-858,3},{-0,0L,-710,7},{-0,0x90L,-858,3}},{{-0,0L,491,10},{-0,0L,491,10},{0,2L,721,2},{0,0L,334,2},{0,2L,721,2}},{{-0,5L,-344,15},{-0,5L,-344,15},{-0,5L,-344,15},{0,0x20L,-333,10},{-0,5L,-344,15}},{{-0,0x4DL,846,14},{-0,0x4DL,846,14},{-0,0L,491,10},{0,-2L,-861,3},{-0,0L,491,10}},{{0,-1L,-380,2},{0,-1L,-380,2},{-0,5L,-344,15},{0,0x20L,-333,10},{-0,5L,-344,15}},{{-0,0x4DL,846,14},{-0,0x4DL,846,14},{-0,0L,491,10},{0,-2L,-861,3},{-0,0L,491,10}},{{0,-1L,-380,2},{0,-1L,-380,2},{-0,5L,-344,15},{0,0x20L,-333,10},{-0,5L,-344,15}}}};
    char l_2268 = 0x73L;
    unsigned short l_2278 = 0UL;
    int l_2304[2];
    int l_2305 = 0xD95BC7E1L;
    short l_2306 = 0L;
    int l_2307 = (-2L);
    unsigned l_2308[8] = {0xD60C0EC7L,0xD60C0EC7L,0xD60C0EC7L,0xD60C0EC7L,0xD60C0EC7L,0xD60C0EC7L,0xD60C0EC7L,0xD60C0EC7L};
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_2304[i] = (-2L);
    for (g_111 = 0; (g_111 <= 0); g_111 += 1)
    {
        unsigned l_2282 = 1UL;
        int l_2295 = 0x8C23BE93L;
        if (p_19)
            break;
        if (g_1017)
            break;
        l_2261[0][6][1] = g_1111;
        for (g_116 = 0; (g_116 <= 0); g_116 += 1)
        {
            int l_2277[8][1][7] = {{{(-9L),(-1L),0x4DC34DA9L,0x4DC34DA9L,(-1L),(-9L),0xDDC0B407L}},{{0xC9D6EE91L,(-7L),0x02780704L,0x02780704L,(-7L),0xC9D6EE91L,0xE9CD590BL}},{{(-9L),(-1L),0x4DC34DA9L,0x4DC34DA9L,(-1L),(-9L),0xDDC0B407L}},{{0xC9D6EE91L,(-7L),0x02780704L,0x02780704L,(-7L),0xC9D6EE91L,0xE9CD590BL}},{{(-9L),(-1L),0x4DC34DA9L,0x4DC34DA9L,(-1L),(-9L),0xDDC0B407L}},{{0xC9D6EE91L,(-7L),0x02780704L,0x02780704L,(-7L),0xC9D6EE91L,0xE9CD590BL}},{{(-9L),(-1L),0x4DC34DA9L,0x4DC34DA9L,(-1L),(-9L),0xDDC0B407L}},{{0xC9D6EE91L,(-7L),0x02780704L,0x02780704L,(-7L),0xC9D6EE91L,0xE9CD590BL}}};
            struct S0 l_2288 = {0,0xF6L,1008,14};
            unsigned short l_2296 = 3UL;
            int i, j, k;
            for (g_1313 = 2; (g_1313 <= 8); g_1313 += 1)
            {
                int l_2262 = 0x29C19E00L;
                struct S0 l_2283 = {-0,0x19L,1002,13};
                int i, j;
                g_1476[(g_116 + 2)][(g_111 + 3)] |= g_947[g_116][(g_116 + 2)];
                if (g_1476[(g_111 + 1)][(g_111 + 5)])
                {
                    char l_2289 = 0xFBL;
                    if (g_947[0][2])
                    {
                        short l_2263 = 0x5E31L;
                        int i, j, k;
                        l_2261[0][6][1].f2 = p_18;
                        g_1476[1][4] ^= (l_2262 > (l_2263 < (0xCD9FAFE8L ^ ((safe_sub_func_uint16_t_u_u(g_306[1][5][3], (safe_sub_func_int16_t_s_s((p_16.f2 <= p_16.f2), func_30(((((g_606[1][3].f2 < l_2261[0][6][1].f0) | p_17) != 2UL) == 8L), p_17, l_2261[g_116][g_116][g_116], l_2261[0][6][1].f3, g_4[0][0]))))) | 0x7BL))));
                        l_2268 ^= l_2263;
                    }
                    else
                    {
                        unsigned l_2279 = 1UL;
                        g_236 &= ((safe_sub_func_uint32_t_u_u((((safe_rshift_func_int8_t_s_s((safe_add_func_uint8_t_u_u(p_17, ((-9L) == (safe_rshift_func_uint16_t_u_s((g_606[1][3].f3 == 0x01AD76CAL), ((1L < (func_30(p_18, l_2277[0][0][1], p_16, ((l_2261[0][6][1].f2 & 0x3AL) >= p_18), l_2278) ^ p_16.f3)) == g_119.f1)))))), l_2279)) && 4294967289UL) & 0xDDCB7304L), g_1848[8])) || g_237);
                    }
                    if ((((safe_mod_func_int32_t_s_s((func_30(l_2282, g_83[2][1], l_2283, (p_20 & (safe_sub_func_int8_t_s_s((safe_rshift_func_int16_t_s_u((0x4A5CAE33L < (func_30(g_1382.f2, g_606[1][3].f2, l_2288, l_2288.f3, g_1476[2][3]) == (-1L))), 7)), l_2288.f3))), l_2282) | p_20), g_83[0][3])) >= 0UL) | p_20))
                    {
                        unsigned char l_2290 = 250UL;
                        l_2290--;
                    }
                    else
                    {
                        if (g_369)
                            break;
                    }
                    for (g_462 = 0; (g_462 <= 8); g_462 += 1)
                    {
                        l_2288 = g_1111;
                        if (p_16.f1)
                            continue;
                    }
                }
                else
                {
                    short l_2293 = 7L;
                    int l_2294[7];
                    int i;
                    for (i = 0; i < 7; i++)
                        l_2294[i] = (-1L);
                    l_2293 |= g_484;
                    ++l_2296;
                }
            }
            g_947[g_111][(g_116 + 1)] = g_947[g_111][(g_111 + 3)];
        }
    }
    for (g_2035 = 0; (g_2035 == (-22)); g_2035 = safe_sub_func_int8_t_s_s(g_2035, 6))
    {
        unsigned char l_2301 = 0x60L;
        for (g_237 = 0; g_237 < 2; g_237 += 1)
        {
            for (p_16.f1 = 0; p_16.f1 < 7; p_16.f1 += 1)
            {
                for (g_369 = 0; g_369 < 5; g_369 += 1)
                {
                    struct S0 tmp = {0,0x81L,-598,4};
                    l_2261[g_237][p_16.f1][g_369] = tmp;
                }
            }
        }
        l_2301--;
        l_2261[0][6][1].f0 = g_746;
    }
    --l_2308[4];
    return l_2306;
}







static short func_22(short p_23, unsigned p_24, struct S0 p_25, char p_26)
{
    int l_1387 = 0x4B521D9BL;
    unsigned short l_1424 = 0xDD61L;
    int l_1441 = 7L;
    struct S0 l_1448 = {0,0x95L,59,8};
    unsigned l_1449 = 4294967295UL;
    unsigned l_1468 = 0x5B7C504FL;
    short l_1532 = (-1L);
    int l_1565[6][7] = {{0x37B5EA4DL,0x75407200L,0x08CDEC5CL,0x08CDEC5CL,0x75407200L,0x37B5EA4DL,1L},{(-1L),5L,0xEEEF1150L,0xEEEF1150L,5L,1L,0xBC10AC23L},{1L,0x1D6B2EC1L,0x75407200L,0x75407200L,0x1D6B2EC1L,1L,0x08CDEC5CL},{1L,5L,0xEEEF1150L,0xEEEF1150L,5L,1L,0xBC10AC23L},{1L,0x1D6B2EC1L,0x75407200L,0x75407200L,0x1D6B2EC1L,1L,0x08CDEC5CL},{1L,5L,0xEEEF1150L,0xEEEF1150L,5L,1L,0xBC10AC23L}};
    unsigned short l_1650[8] = {0xFC22L,0xFC22L,0x45BAL,0xFC22L,0xFC22L,0x45BAL,0xFC22L,0xFC22L};
    unsigned char l_1712 = 3UL;
    unsigned char l_1715 = 0xDDL;
    unsigned l_1785 = 1UL;
    unsigned l_1858 = 1UL;
    int l_1878 = 0x03039797L;
    unsigned l_1925 = 4UL;
    unsigned short l_1930 = 0x7670L;
    int l_1955 = 0x021A86C2L;
    char l_1981 = 0xF9L;
    unsigned short l_2040 = 0UL;
    int l_2245[6] = {0L,0L,0L,0L,0L,0L};
    unsigned l_2258 = 0x97793015L;
    int i, j;
lbl_2053:
    if ((safe_lshift_func_uint8_t_u_u((l_1387 | ((((func_77((safe_rshift_func_uint8_t_u_u(g_1111.f1, 1)), l_1387, l_1387, g_4[2][0], g_119) != l_1387) != 0x0466L) ^ 0xFBL) < 0x95L)), 6)))
    {
        char l_1405 = 9L;
        int l_1406 = 1L;
        l_1406 ^= (safe_rshift_func_int16_t_s_s(((p_25.f3 != func_30((safe_lshift_func_uint8_t_u_u(((safe_add_func_int16_t_s_s((l_1387 != (safe_rshift_func_int8_t_s_u((safe_lshift_func_int8_t_s_s(g_133, (l_1387 == (~(((safe_unary_minus_func_uint8_t_u(1UL)) ^ l_1387) < ((safe_sub_func_int8_t_s_s(3L, (func_30(((safe_mod_func_int32_t_s_s((l_1405 & 8L), g_306[4][7][0])) <= 0x4EF0A1CEL), l_1387, p_25, l_1405, l_1405) ^ p_25.f0))) < g_606[1][3].f3)))))), 7))), 2L)) || 0x01L), 4)), l_1405, g_606[0][4], l_1405, g_606[1][3].f3)) || g_484), 11));
    }
    else
    {
        int l_1417 = 0xB8B22AF5L;
        int l_1440 = 0x573BF523L;
        int l_1442 = (-1L);
        int l_1477 = 0x7751B71CL;
        int l_1478 = 0xB4892C98L;
        short l_1483 = 0x9866L;
        struct S0 l_1510 = {0,0xF4L,-479,3};
        unsigned l_1683 = 1UL;
        int l_1728 = (-1L);
lbl_1549:
        for (g_1111.f1 = (-2); (g_1111.f1 >= (-17)); --g_1111.f1)
        {
            unsigned char l_1409 = 249UL;
            struct S0 l_1467 = {0,1L,370,15};
            if ((g_1382.f2 <= l_1409))
            {
                short l_1412 = 8L;
                int l_1434 = 1L;
                int l_1443 = 0x48A6D1E5L;
                if (func_45((safe_add_func_int16_t_s_s(func_52(p_26, g_288, l_1412, ((~0L) == 0xB9L)), ((((safe_sub_func_uint32_t_u_u((((safe_mod_func_uint32_t_u_u(l_1417, (l_1417 && p_25.f1))) | g_1382.f3) < 0UL), l_1412)) && p_26) & p_25.f2) & l_1412))), g_306[4][0][3]))
                {
                    short l_1423 = 0x6FEFL;
                    int l_1437 = 3L;
                    int l_1438 = 0L;
                    int l_1439[1][5] = {{0L,0L,0L,0L,0L}};
                    int i, j;
                    for (l_1412 = (-11); (l_1412 <= 2); ++l_1412)
                    {
                        unsigned char l_1433[4][3] = {{0UL,2UL,2UL},{1UL,0x91L,0x91L},{0UL,2UL,2UL},{1UL,0x91L,0x91L}};
                        int i, j;
                        g_947[0][5] |= l_1409;
                        l_1424 &= (safe_unary_minus_func_uint32_t_u((safe_mod_func_uint32_t_u_u(func_62(p_26, g_369, g_106), l_1423))));
                        p_25.f2 ^= (p_24 != (((safe_mod_func_int8_t_s_s((safe_rshift_func_int8_t_s_u(func_62((func_45(g_1313, ((((((safe_add_func_uint16_t_u_u((safe_add_func_int8_t_s_s((-3L), p_25.f0)), l_1412)) || ((l_1409 == g_784[2][0][1]) <= 0xA54DL)) >= (g_947[0][2] <= 0L)) < 6L) != g_1111.f1) ^ p_25.f0)) >= g_306[4][0][2]), g_927, g_1111.f3), 6)), p_23)) != g_484) == l_1433[1][2]));
                    }
                    l_1434 = 8L;
                    for (g_927 = (-28); (g_927 <= 4); g_927 = safe_add_func_uint8_t_u_u(g_927, 9))
                    {
                        unsigned short l_1444 = 1UL;
                        l_1444--;
                    }
                }
                else
                {
                    short l_1454 = (-8L);
                    int l_1471[5];
                    int i;
                    for (i = 0; i < 5; i++)
                        l_1471[i] = (-2L);
                    p_25 = p_25;
                    for (g_467 = 0; (g_467 <= 1); g_467 += 1)
                    {
                        int i;
                        p_25.f0 = 0x27B9DBA9L;
                        l_1449 |= (0x7197DB72L ^ ((func_77((g_433[(g_467 + 1)] <= 1L), (safe_unary_minus_func_int16_t_s(0xF29DL)), p_25.f1, (g_433[(g_467 + 1)] >= l_1417), l_1448) > 0xEEA4L) >= 0x0FL));
                        g_433[2] = func_77((safe_sub_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u(func_77(l_1454, l_1454, g_433[(g_467 + 1)], p_24, g_1111), (g_1382.f1 & g_949))), l_1434)), g_1382.f0, p_24, p_25.f2, g_606[0][6]);
                        l_1467.f2 = (safe_rshift_func_uint16_t_u_u((((safe_rshift_func_int16_t_s_u(l_1454, 12)) | l_1448.f3) < ((((((safe_sub_func_int16_t_s_s((((l_1409 || (-3L)) && func_77(func_77(p_25.f1, (g_606[1][3].f0 && (~func_77(l_1454, (safe_mod_func_int32_t_s_s((safe_mod_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u((g_1017 >= g_369), p_25.f2)), g_366)), l_1440)), g_433[(g_467 + 1)], p_24, p_25))), p_24, p_24, l_1467), l_1448.f2, p_23, g_1111.f3, p_25)) & p_25.f2), g_606[1][3].f0)) || p_25.f0) && (-8L)) && l_1409) != l_1454) && l_1468)), 5));
                    }
                    g_1382 = g_119;
                    for (g_927 = 6; (g_927 < (-21)); --g_927)
                    {
                        l_1471[2] = 0x01B566B4L;
                    }
                }
            }
            else
            {
                unsigned l_1479 = 1UL;
                if (l_1424)
                {
                    return g_1382.f2;
                }
                else
                {
                    for (p_25.f1 = 0; (p_25.f1 <= 0); p_25.f1 += 1)
                    {
                        g_119 = g_606[1][3];
                    }
                }
                for (l_1409 = 24; (l_1409 == 27); l_1409++)
                {
                    unsigned l_1484 = 0x5F5AEBDDL;
                    if (p_23)
                    {
                        l_1467.f2 = (safe_add_func_uint8_t_u_u(0UL, g_1476[1][4]));
                        l_1479--;
                        g_947[0][2] = ((func_45((((g_306[2][2][0] != (g_606[1][3].f2 > p_23)) <= 0x8DEEEF77L) == 4294967295UL), l_1467.f1) > (p_25.f3 == l_1467.f1)) & 0UL);
                        return g_119.f1;
                    }
                    else
                    {
                        unsigned char l_1482 = 0x5BL;
                        p_25.f2 &= l_1482;
                        --l_1484;
                        l_1448.f0 = (func_52(p_25.f2, g_306[3][2][0], g_133, ((safe_add_func_uint32_t_u_u(((+l_1484) < (safe_lshift_func_int8_t_s_s((0xBDFAL != l_1479), (safe_sub_func_uint32_t_u_u((((l_1484 != g_784[2][0][1]) > 1UL) | g_106), 0x914EBBDBL))))), (-2L))) & g_369)) <= g_306[2][2][0]);
                        return l_1482;
                    }
                }
            }
        }
        if ((safe_add_func_int16_t_s_s(g_67, 0x767DL)))
        {
            int l_1502 = (-1L);
            int l_1506 = 0x49BF3EF7L;
            struct S0 l_1571 = {-0,1L,-861,12};
lbl_1574:
            for (l_1448.f1 = 0; (l_1448.f1 >= 0); l_1448.f1 -= 1)
            {
                struct S0 l_1505 = {0,-3L,-117,10};
                int l_1540 = (-1L);
                l_1506 |= (safe_rshift_func_int16_t_s_u(l_1387, (((safe_unary_minus_func_uint32_t_u(((g_1111.f0 <= (((safe_add_func_int32_t_s_s((g_130[0] || (((safe_mod_func_uint16_t_u_u(l_1502, l_1448.f0)) | l_1502) != (safe_rshift_func_uint8_t_u_s(0xA7L, 2)))), func_77(g_784[2][1][0], p_26, p_25.f2, g_1382.f1, l_1505))) <= l_1440) ^ p_25.f2)) | g_83[2][3]))) == l_1417) ^ p_25.f0)));
                for (l_1387 = 0; (l_1387 <= 1); l_1387 += 1)
                {
                    short l_1507 = 1L;
                    struct S0 l_1511 = {-0,0x59L,326,6};
                    g_1382.f0 ^= (func_38(p_25.f1, ((func_45(g_1111.f3, ((l_1507 | (0x1E1DL > (g_606[1][3].f0 ^ (-1L)))) == p_25.f2)) || 0L) | 0x4CB9BAC9L), l_1417, g_1476[1][4]) | 9UL);
                    if ((g_606[1][3].f1 > g_1111.f2))
                    {
                        return p_25.f0;
                    }
                    else
                    {
                        g_606[1][3].f2 = (safe_sub_func_uint16_t_u_u(g_119.f0, 65529UL));
                    }
                    if ((g_606[1][3].f1 || p_24))
                    {
                        l_1511 = l_1510;
                        l_1511.f2 = 0x69E3F917L;
                        g_433[2] |= l_1506;
                        if (g_433[5])
                            continue;
                    }
                    else
                    {
                        p_25.f0 = ((l_1505.f3 || (l_1387 >= ((0x6D5BL >= (safe_add_func_uint32_t_u_u(l_1505.f1, (safe_add_func_uint8_t_u_u(255UL, (((g_306[2][2][0] && ((p_23 != ((func_77(g_606[1][3].f2, (safe_mod_func_uint8_t_u_u(254UL, 0x2FL)), g_119.f0, g_130[0], g_606[0][0]) && l_1505.f1) || 0UL)) || g_1111.f1)) >= p_26) == p_26)))))) & 65535UL))) > p_23);
                        if (g_1382.f2)
                            break;
                    }
                    for (l_1483 = 1; (l_1483 >= 0); l_1483 -= 1)
                    {
                        struct S0 l_1518 = {-0,0x3EL,-806,6};
                        int i, j, k;
                        p_25 = l_1518;
                        g_1476[0][6] |= func_52(g_784[(l_1387 + 3)][l_1387][(l_1483 + 1)], (p_25.f3 ^ (safe_lshift_func_int16_t_s_s(((p_25.f3 > (safe_mod_func_uint16_t_u_u((safe_unary_minus_func_int8_t_s((func_52(g_484, func_52((1L ^ (safe_rshift_func_uint16_t_u_s((safe_lshift_func_uint8_t_u_s((((g_947[0][2] >= ((((((safe_lshift_func_uint16_t_u_u(((g_1313 >= (safe_rshift_func_int16_t_s_s(((0xB1L >= 0xF7L) <= l_1478), 4))) && g_784[(l_1387 + 3)][l_1387][(l_1483 + 1)]), 8)) != g_467) ^ 65535UL) & l_1518.f0) <= g_927) ^ g_1111.f2)) == 0x7DL) ^ (-10L)), l_1518.f1)), g_484))), l_1505.f3, l_1510.f1, p_23), p_24, p_25.f2) < g_784[(l_1387 + 3)][l_1387][(l_1483 + 1)]))), p_25.f3))) >= p_24), p_25.f1))), g_1382.f2, l_1532);
                        p_25.f0 = (((safe_rshift_func_int8_t_s_s(l_1502, 3)) >= ((p_24 ^ p_25.f1) == (p_25.f1 ^ (((l_1505.f0 != (safe_sub_func_int16_t_s_s((safe_unary_minus_func_uint32_t_u(1UL)), 0xA8B4L))) && (safe_lshift_func_uint8_t_u_u(p_25.f3, 5))) <= ((((g_1111.f2 <= 0xA977L) < p_25.f1) == g_119.f3) < l_1505.f0))))) > p_25.f1);
                    }
                }
                l_1502 &= l_1540;
            }
            for (l_1477 = 2; (l_1477 >= (-12)); l_1477 = safe_sub_func_uint8_t_u_u(l_1477, 3))
            {
                unsigned char l_1550 = 0xFCL;
                int l_1561[9][4][3] = {{{1L,5L,5L},{1L,5L,5L},{1L,5L,5L},{1L,5L,5L}},{{1L,5L,5L},{1L,5L,5L},{1L,5L,5L},{1L,5L,5L}},{{1L,5L,5L},{1L,5L,5L},{1L,0x14BFFFC0L,0x14BFFFC0L},{5L,0x14BFFFC0L,0x14BFFFC0L}},{{5L,0x14BFFFC0L,0x14BFFFC0L},{5L,0x14BFFFC0L,0x14BFFFC0L},{5L,0x14BFFFC0L,0x14BFFFC0L},{5L,0x14BFFFC0L,0x14BFFFC0L}},{{5L,0x14BFFFC0L,0x14BFFFC0L},{5L,0x14BFFFC0L,0x14BFFFC0L},{5L,0x14BFFFC0L,0x14BFFFC0L},{5L,0x14BFFFC0L,0x14BFFFC0L}},{{5L,0x14BFFFC0L,0x14BFFFC0L},{5L,0x14BFFFC0L,0x14BFFFC0L},{5L,0x14BFFFC0L,0x14BFFFC0L},{5L,0x14BFFFC0L,0x14BFFFC0L}},{{5L,0x14BFFFC0L,0x14BFFFC0L},{5L,0x14BFFFC0L,0x14BFFFC0L},{5L,0x14BFFFC0L,0x14BFFFC0L},{5L,0x14BFFFC0L,0x14BFFFC0L}},{{5L,0x14BFFFC0L,0x14BFFFC0L},{5L,0x14BFFFC0L,0x14BFFFC0L},{5L,0x14BFFFC0L,0x14BFFFC0L},{5L,0x14BFFFC0L,0x14BFFFC0L}},{{5L,0x14BFFFC0L,0x14BFFFC0L},{5L,0x14BFFFC0L,0x14BFFFC0L},{5L,0x14BFFFC0L,0x14BFFFC0L},{5L,0x14BFFFC0L,0x14BFFFC0L}}};
                int l_1563 = 9L;
                int l_1583 = 0x9FE3EBF6L;
                int i, j, k;
                g_1382 = p_25;
                if ((safe_add_func_int32_t_s_s(((safe_add_func_int16_t_s_s(func_45(g_288, p_25.f0), l_1483)) || (safe_lshift_func_int8_t_s_u(0L, 1))), (0x2D4DL || l_1477))))
                {
                    for (l_1417 = 3; (l_1417 >= 0); l_1417 -= 1)
                    {
                        int i, j;
                        if (g_83[l_1417][(l_1417 + 1)])
                            break;
                        l_1448.f0 = g_83[l_1417][(l_1417 + 3)];
                        if (g_111)
                            goto lbl_1549;
                        p_25.f2 ^= g_83[l_1417][l_1417];
                    }
                    p_25 = p_25;
                }
                else
                {
                    unsigned short l_1557[9] = {5UL,5UL,5UL,5UL,5UL,5UL,5UL,5UL,5UL};
                    int l_1564 = 0L;
                    unsigned char l_1566 = 0x01L;
                    int i;
                    l_1550--;
                    for (g_237 = 0; (g_237 == 52); g_237++)
                    {
                        int l_1555 = 0x90309689L;
                        int l_1556 = 0x0FA91496L;
                        int l_1562[9];
                        int i;
                        for (i = 0; i < 9; i++)
                            l_1562[i] = (-4L);
                        l_1557[8]++;
                        ++l_1566;
                    }
                }
                if ((safe_sub_func_uint32_t_u_u(4UL, p_25.f1)))
                {
                    l_1571 = g_119;
                }
                else
                {
                    unsigned l_1605 = 0xBA083447L;
                    struct S0 l_1607 = {0,0x0EL,-853,12};
                    int l_1624[9] = {2L,2L,2L,2L,2L,2L,2L,2L,2L};
                    int i;
                    for (g_237 = 22; (g_237 == 57); g_237 = safe_add_func_uint8_t_u_u(g_237, 6))
                    {
                        char l_1606 = 0x95L;
                        if (l_1510.f3)
                            goto lbl_1574;
                        l_1583 |= (safe_lshift_func_uint16_t_u_s(p_25.f0, (g_949 != (safe_lshift_func_uint16_t_u_u(((6UL || (-9L)) & l_1442), func_30(l_1561[8][2][0], (safe_mod_func_int32_t_s_s(((-9L) || ((+(safe_mod_func_int32_t_s_s((-4L), 4294967294UL))) ^ 4294967295UL)), p_25.f2)), l_1571, l_1502, p_24))))));
                        p_25.f0 = func_30((safe_rshift_func_int16_t_s_u((((~(safe_mod_func_int16_t_s_s((((safe_rshift_func_int16_t_s_u((func_30(((safe_mod_func_uint8_t_u_u((p_25.f1 > func_30(((safe_sub_func_int16_t_s_s((safe_unary_minus_func_uint32_t_u(p_26)), 0x028BL)) == p_25.f1), g_111, g_606[0][0], (safe_sub_func_int32_t_s_s((safe_sub_func_int16_t_s_s((g_288 <= ((safe_mod_func_uint8_t_u_u((g_1476[1][4] != (safe_lshift_func_int16_t_s_s((((safe_rshift_func_uint8_t_u_u(((p_23 >= 65535UL) || p_26), g_83[2][6])) < l_1605) ^ 255UL), g_3))), p_26)) && 0xA9L)), l_1606)), 4UL)), l_1550)), l_1550)) == 0x94A7L), p_26, g_606[2][3], p_25.f1, l_1483) != p_25.f2), g_1476[2][5])) || 0xCCL) != 0L), g_947[0][2]))) != g_1476[0][2]) >= p_23), p_25.f1)), p_23, l_1607, p_23, p_26);
                        g_1111 = l_1448;
                    }
                    if (g_1111.f3)
                    {
                        int l_1612 = 1L;
                        g_947[0][2] = (safe_lshift_func_int8_t_s_u(((safe_lshift_func_int8_t_s_u((-1L), g_306[2][2][0])) & l_1612), 6));
                        return p_25.f1;
                    }
                    else
                    {
                        unsigned short l_1621 = 65529UL;
                        l_1607.f2 = (safe_lshift_func_int16_t_s_u((-1L), func_38((safe_lshift_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s((safe_lshift_func_uint8_t_u_u((func_52((g_484 ^ l_1621), (g_111 ^ 1L), (safe_rshift_func_uint16_t_u_u(g_947[0][2], 4)), p_23) == g_1111.f1), 3)), l_1624[4])), 3)), g_1560, p_25.f0, p_24)));
                        return g_1111.f0;
                    }
                }
            }
            return l_1502;
        }
        else
        {
            unsigned short l_1628[6];
            int l_1647 = 9L;
            int l_1672 = 0x4ABF45FBL;
            int l_1673 = 3L;
            int l_1675 = 0xFAEADD05L;
            int l_1676 = 0xAC6CDE18L;
            int l_1679[8] = {0x6A88BA93L,(-9L),(-9L),0x6A88BA93L,(-9L),(-9L),0x6A88BA93L,(-9L)};
            char l_1700 = (-1L);
            unsigned l_1707 = 0x64381B55L;
            int i;
            for (i = 0; i < 6; i++)
                l_1628[i] = 0xD5F3L;
            for (l_1440 = 0; (l_1440 < (-20)); --l_1440)
            {
                int l_1627 = 0x78E962D5L;
                if (g_949)
                    break;
                g_1476[1][6] = (g_433[2] >= ((4294967295UL >= g_83[2][1]) || p_24));
                --l_1628[5];
            }
            if ((g_746 | (safe_add_func_uint32_t_u_u(l_1628[1], (l_1510.f1 | ((safe_rshift_func_uint8_t_u_s((safe_sub_func_uint8_t_u_u(((+(g_606[1][3].f3 == (-1L))) != g_484), (safe_mod_func_uint32_t_u_u((((p_25.f1 > l_1424) | (((safe_add_func_uint16_t_u_u(((g_83[3][5] <= p_25.f3) > 1L), 3UL)) || 1L) < p_23)) & 1UL), l_1387)))), 7)) > 0x7D9CL))))))
            {
                short l_1643 = 5L;
                char l_1646 = 0x4CL;
                int l_1649[10][6][1] = {{{0x11B380EFL},{0x7A1B74C8L},{0xDF55C47DL},{(-1L)},{0L},{1L}},{{0L},{(-1L)},{0xDF55C47DL},{0x7A1B74C8L},{0x11B380EFL},{0x68204DF9L}},{{0L},{1L},{(-1L)},{0x9126A966L},{0x43DF68B9L},{0xAD1B2D00L}},{{1L},{0xAD1B2D00L},{0x43DF68B9L},{0x9126A966L},{(-1L)},{1L}},{{0L},{0x68204DF9L},{0x11B380EFL},{0x7A1B74C8L},{0xDF55C47DL},{(-1L)}},{{0L},{1L},{0L},{(-1L)},{0xDF55C47DL},{0x7A1B74C8L}},{{0x11B380EFL},{0x68204DF9L},{0L},{1L},{(-1L)},{0x9126A966L}},{{0x43DF68B9L},{0xAD1B2D00L},{1L},{0xAD1B2D00L},{0x43DF68B9L},{0x9126A966L}},{{(-1L)},{1L},{0L},{0x68204DF9L},{0x11B380EFL},{0x7A1B74C8L}},{{0xDF55C47DL},{(-1L)},{0L},{1L},{0L},{(-1L)}}};
                int l_1670 = 1L;
                char l_1704 = (-7L);
                int i, j, k;
lbl_1663:
                l_1647 = ((safe_sub_func_int16_t_s_s(1L, (l_1441 == g_130[0]))) < (l_1643 | ((g_366 < (safe_sub_func_uint8_t_u_u(254UL, l_1646))) || 0xAD497C0EL)));
                if (l_1483)
                    goto lbl_1648;
lbl_1648:
                l_1647 = 0xEDBCD4ABL;
                l_1650[2]--;
                if ((safe_mod_func_int16_t_s_s((p_26 && ((!((safe_lshift_func_uint8_t_u_u(0xC9L, 0)) >= (0x68L <= (((safe_lshift_func_uint16_t_u_s(g_1382.f3, 0)) >= g_116) == ((l_1417 > (safe_sub_func_uint32_t_u_u((g_1382.f0 != (!l_1449)), ((func_30(l_1647, l_1442, l_1448, g_1111.f3, g_1017) <= 0L) & g_366)))) >= g_306[5][0][3]))))) ^ g_1560)), p_23)))
                {
                    short l_1666 = 3L;
                    struct S0 l_1669 = {0,1L,-926,8};
                    int l_1677 = (-1L);
                    int l_1678 = 0x829A3DCBL;
                    int l_1680 = 0x47E14F8BL;
                    int l_1681 = 1L;
                    int l_1682 = 8L;
                    for (g_133 = 23; (g_133 > 56); g_133 = safe_add_func_int8_t_s_s(g_133, 1))
                    {
                        short l_1671[10][9] = {{0x5792L,(-1L),9L,0x3372L,(-1L),0x6390L,0xFC60L,(-2L),(-2L)},{0x4F6AL,0x9CEFL,9L,0x1630L,9L,0x9CEFL,0x4F6AL,0xE4D2L,(-1L)},{7L,0x63ADL,(-2L),0xE4D2L,0x212FL,9L,8L,0x17B0L,0xEDFBL},{(-1L),0x22AEL,0xE8ADL,0x3372L,0xFC60L,0x17B0L,0x6DF0L,0x59D1L,(-1L)},{(-4L),(-2L),(-1L),0xB163L,0xEDFBL,0x59D1L,0x1630L,0x1C79L,0x22AEL},{0x22AEL,0x5792L,(-4L),0xB163L,0xB163L,(-4L),0x5792L,0x22AEL,0x9CEFL},{(-1L),0xE4D2L,0xB163L,0x3372L,0x1630L,0xE8ADL,5L,0x63ADL,0xFFDCL},{0x1630L,0xEDFBL,0x212FL,0x59D1L,(-4L),(-5L),0x3372L,8L,0x9CEFL},{0x17B0L,8L,9L,0x212FL,0xE4D2L,(-2L),0x63ADL,7L,0x22AEL},{(-1L),(-1L),(-1L),0x6DF0L,0xE4D2L,0x6DF0L,(-1L),(-1L),(-1L)}};
                        int l_1674[9][7] = {{(-1L),0xEDACC413L,(-1L),0xEDACC413L,(-1L),0xEDACC413L,(-1L)},{0xADE975E1L,0xADE975E1L,0xADE975E1L,0xADE975E1L,0xADE975E1L,0xADE975E1L,0xADE975E1L},{(-1L),0xEDACC413L,(-1L),0xEDACC413L,(-1L),0xEDACC413L,(-1L)},{0xADE975E1L,0xADE975E1L,0xADE975E1L,0xADE975E1L,0xADE975E1L,0xADE975E1L,0xADE975E1L},{(-1L),0xEDACC413L,(-1L),0xEDACC413L,(-1L),0xEDACC413L,(-1L)},{0xADE975E1L,0xADE975E1L,0xADE975E1L,0xADE975E1L,0xADE975E1L,0xADE975E1L,0xADE975E1L},{(-1L),0xEDACC413L,(-1L),0xEDACC413L,(-1L),0xEDACC413L,(-1L)},{0xADE975E1L,0xADE975E1L,0xADE975E1L,0xADE975E1L,0xADE975E1L,0xADE975E1L,0xADE975E1L},{(-1L),0xEDACC413L,(-1L),0xEDACC413L,(-1L),0xEDACC413L,(-1L)}};
                        int i, j;
                        if (p_25.f0)
                            goto lbl_1663;
                        p_25.f0 = (safe_mod_func_uint16_t_u_u((((l_1666 || (((l_1666 ^ 0x22L) & func_30((safe_add_func_uint16_t_u_u(0x1629L, p_25.f0)), l_1666, l_1669, p_26, (g_83[2][1] == p_24))) < l_1669.f1)) & l_1441) <= g_484), p_25.f1));
                        --l_1683;
                    }
                }
                else
                {
                    short l_1698[3];
                    int l_1699[8][4][1] = {{{0xE5522FA8L},{9L},{0xE5522FA8L},{0xBE79C242L}},{{0L},{(-5L)},{0xD59A45C0L},{0xA8BF9BDBL}},{{0xAC8B1280L},{0xA8BF9BDBL},{0xD59A45C0L},{(-5L)}},{{0L},{0xBE79C242L},{0xE5522FA8L},{9L}},{{0xE5522FA8L},{0xBE79C242L},{0L},{(-5L)}},{{0xD59A45C0L},{0xA8BF9BDBL},{0xAC8B1280L},{0xA8BF9BDBL}},{{0xD59A45C0L},{(-5L)},{0L},{0xBE79C242L}},{{0xE5522FA8L},{9L},{0xE5522FA8L},{0xBE79C242L}}};
                    unsigned char l_1701 = 4UL;
                    struct S0 l_1710 = {-0,0x68L,447,1};
                    int i, j, k;
                    for (i = 0; i < 3; i++)
                        l_1698[i] = 1L;
                    g_947[0][5] = g_116;
                    p_25.f0 = (safe_sub_func_int16_t_s_s(((l_1510.f0 && (((safe_sub_func_uint8_t_u_u(0x26L, g_1313)) != (safe_lshift_func_uint16_t_u_s((((safe_rshift_func_uint8_t_u_s((safe_rshift_func_uint8_t_u_u((safe_add_func_uint32_t_u_u(g_1560, (func_38(l_1649[8][4][0], p_23, p_25.f0, l_1650[2]) ^ p_25.f3))), 1)), p_25.f3)) < l_1698[2]) > l_1477), p_25.f0))) ^ g_1476[1][4])) & 255UL), g_1382.f3));
                    l_1701--;
                    if (l_1704)
                    {
                        unsigned char l_1705 = 8UL;
                        int l_1706[6][9][4] = {{{0x73562506L,0xD0E33152L,2L,2L},{(-1L),(-1L),0xDFD82E9BL,(-10L)},{(-10L),0x58B2084FL,(-3L),1L},{2L,(-1L),1L,(-3L)},{0x3A95B2F2L,(-1L),0x3C538A04L,1L},{(-1L),0x58B2084FL,(-8L),(-10L)},{0xA7A3241AL,(-1L),0x639891ACL,2L},{0L,0xD0E33152L,0x8B401C23L,(-1L)},{1L,(-2L),(-6L),(-8L)}},{{0x8B401C23L,0xA01F057EL,0x2ECD8118L,0x8B401C23L},{1L,0x5F169B0BL,(-10L),(-3L)},{0x58B2084FL,0x7B277FFAL,(-2L),0x9ED06008L},{2L,2L,0xA63C3797L,(-2L)},{0L,(-3L),0L,(-3L)},{0xA7A3241AL,7L,(-8L),0xBCAD1795L},{(-2L),0xA01F057EL,0xEE0BEF84L,(-1L)},{2L,0x9ED06008L,(-1L),1L},{2L,9L,0xEE0BEF84L,0L}},{{(-2L),1L,(-8L),(-6L)},{0xA7A3241AL,0x73562506L,0L,0x5F169B0BL},{0L,0xDFD82E9BL,0xA63C3797L,0x5F3D2733L},{2L,0x58B2084FL,(-2L),7L},{0x58B2084FL,0x73562506L,(-10L),0x639891ACL},{1L,(-2L),0x2ECD8118L,0L},{0x8B401C23L,1L,(-6L),(-2L)},{0x5F169B0BL,0x9ED06008L,0x2D3CE175L,(-8L)},{0xBCAD1795L,0x2ECD8118L,0x2ECD8118L,0xBCAD1795L}},{{9L,0x5F169B0BL,0xDFD82E9BL,0x7B277FFAL},{0x58B2084FL,(-3L),1L,0x9ED06008L},{0x5F3D2733L,0x3C538A04L,0xA63C3797L,0x9ED06008L},{0xEE0BEF84L,(-3L),2L,0x7B277FFAL},{0xA7A3241AL,0x5F169B0BL,0x256D8D96L,0xBCAD1795L},{(-3L),9L,(-1L),2L},{(-2L),0x73562506L,0xA63C3797L,0x7B277FFAL},{0x9ED06008L,0x639891ACL,(-1L),(-8L)},{(-3L),0x7B277FFAL,1L,0xA7A3241AL}},{{0x8B401C23L,7L,(-2L),2L},{(-8L),0L,(-10L),1L},{1L,0xEE0BEF84L,0x7B277FFAL,0x5F3D2733L},{0xEE0BEF84L,7L,0xEE0BEF84L,0xFEA895B2L},{0x639891ACL,(-3L),0L,(-8L)},{0x5F169B0BL,(-6L),0xFEA895B2L,(-3L)},{2L,0x73562506L,0xFEA895B2L,0xA63C3797L},{0x5F169B0BL,1L,0L,0x5F169B0BL},{0x639891ACL,2L,0xEE0BEF84L,2L}},{{0xEE0BEF84L,2L,0x7B277FFAL,(-8L)},{1L,0x9ED06008L,(-10L),0x73562506L},{(-8L),0x3C538A04L,(-2L),2L},{0x8B401C23L,0x5F3D2733L,1L,7L},{(-3L),1L,(-1L),2L},{0x9ED06008L,(-8L),0xA63C3797L,(-3L)},{(-2L),0x639891ACL,(-1L),(-1L)},{(-3L),(-3L),0x5A6AA104L,0xA7A3241AL},{0xBCAD1795L,1L,(-2L),0x5F3D2733L}}};
                        int i, j, k;
                        p_25.f0 = (func_62(g_1476[1][4], l_1679[3], l_1705) < g_1560);
                        g_1111.f2 &= g_606[1][3].f0;
                        l_1707++;
                        p_25 = l_1710;
                    }
                    else
                    {
                        return p_25.f0;
                    }
                }
            }
            else
            {
                char l_1711 = 3L;
                l_1510.f2 = l_1683;
                l_1712--;
            }
            l_1715++;
            l_1673 ^= (!8L);
        }
        p_25.f2 &= (l_1715 | ((l_1424 != ((safe_add_func_uint32_t_u_u((0x859D5ED8L & 0x1F60810AL), (+(func_62(((((safe_rshift_func_uint16_t_u_u(((safe_sub_func_uint32_t_u_u(((safe_mod_func_uint32_t_u_u((p_25.f0 <= l_1441), (l_1449 || ((safe_add_func_int16_t_s_s((l_1510.f0 ^ p_25.f3), p_25.f1)) && (-10L))))) > l_1510.f0), g_130[0])) & g_119.f1), 14)) == 246UL) >= l_1510.f3) ^ g_784[2][0][1]), p_25.f3, l_1728) & 1L)))) ^ l_1448.f3)) <= 1UL));
    }
    if ((p_26 < func_52(g_119.f2, l_1532, (safe_lshift_func_uint16_t_u_s(l_1387, l_1565[5][2])), l_1650[2])))
    {
        unsigned l_1733 = 0xA9CE5C84L;
        int l_1742 = 0x57EC11F7L;
        int l_1754 = 0L;
        struct S0 l_1781 = {0,-1L,967,1};
        struct S0 l_1786 = {0,-9L,323,9};
        int l_1923 = 0x69422DA8L;
        short l_1957 = 0xE81EL;
        int l_1959[1];
        char l_1960[5] = {1L,1L,1L,1L,1L};
        int i;
        for (i = 0; i < 1; i++)
            l_1959[i] = 1L;
lbl_1823:
        l_1448.f0 = (safe_sub_func_uint32_t_u_u(((func_45(((l_1733 == p_25.f1) != (safe_mod_func_int32_t_s_s(((0xCC22L > (safe_sub_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u((p_25.f0 && 4294967286UL), 3)), (g_433[4] != func_30(g_236, g_1111.f1, g_119, l_1733, l_1715))))) <= p_26), g_433[2]))), p_23) < l_1733) >= p_26), g_1313));
        for (g_1313 = 0; (g_1313 <= 1); g_1313 += 1)
        {
            unsigned short l_1743 = 0x5B38L;
            struct S0 l_1810 = {0,-1L,-887,0};
            int l_1815 = 1L;
            int l_1816 = 0x85FCDAF7L;
            int l_1818 = (-8L);
            int l_1819[2][2] = {{(-1L),(-1L)},{(-1L),(-1L)}};
            int i, j;
            g_1382.f0 |= (!(safe_add_func_uint32_t_u_u((0x27L | g_606[1][3].f0), (func_30(g_746, g_484, g_119, g_119.f0, g_119.f1) ^ (((l_1733 & g_462) && 0UL) && g_67)))));
            for (g_927 = 0; (g_927 <= 0); g_927 += 1)
            {
                struct S0 l_1780[7][3][1] = {{{{0,0xFDL,-942,8}},{{0,-5L,0,10}},{{0,0xFDL,-942,8}}},{{{0,-5L,0,10}},{{0,0xFDL,-942,8}},{{0,-5L,0,10}}},{{{0,0xFDL,-942,8}},{{0,-5L,0,10}},{{0,0xFDL,-942,8}}},{{{0,-5L,0,10}},{{0,0xFDL,-942,8}},{{0,-5L,0,10}}},{{{0,0xFDL,-942,8}},{{0,-5L,0,10}},{{0,0xFDL,-942,8}}},{{{0,-5L,0,10}},{{0,0xFDL,-942,8}},{{0,-5L,0,10}}},{{{0,0xFDL,-942,8}},{{0,-5L,0,10}},{{0,0xFDL,-942,8}}}};
                int i, j, k;
                --l_1743;
                if ((safe_mod_func_uint8_t_u_u((g_130[g_927] | g_130[g_927]), (safe_add_func_int8_t_s_s(p_25.f1, p_25.f3)))))
                {
                    int l_1755 = (-3L);
                    unsigned char l_1779 = 255UL;
                    p_25.f0 = (safe_add_func_uint8_t_u_u(p_23, ((((+0x406AL) || (g_369 | ((safe_add_func_uint32_t_u_u(0xB95B9110L, l_1754)) == (func_30(g_116, (((p_24 & (l_1755 | (safe_mod_func_int8_t_s_s((safe_mod_func_int32_t_s_s(g_130[g_927], p_25.f2)), g_1017)))) | 0xC4L) || p_23), g_606[1][5], l_1743, l_1743) >= p_25.f2)))) || p_23) == l_1755)));
                    p_25.f0 = (safe_add_func_uint16_t_u_u(g_947[g_927][(g_927 + 2)], ((safe_rshift_func_uint16_t_u_s(g_1111.f0, 14)) != (safe_unary_minus_func_uint8_t_u((safe_lshift_func_int16_t_s_u((safe_sub_func_int32_t_s_s(l_1755, (l_1448.f0 || (safe_add_func_int32_t_s_s((safe_lshift_func_int16_t_s_u(((0L && (safe_sub_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u((((-1L) <= (safe_mod_func_uint8_t_u_u((0x7C4C8C79L || func_77(l_1779, l_1779, g_92, g_369, g_1382)), l_1743))) & l_1733), 0x4FL)), g_1476[1][4]))) == 0x75L), 0)), p_25.f0))))), 3)))))));
                }
                else
                {
                    p_25.f2 = 2L;
                }
                for (g_236 = 0; (g_236 <= 1); g_236 += 1)
                {
                    p_25 = l_1780[5][0][0];
                    for (l_1715 = 0; (l_1715 <= 1); l_1715 += 1)
                    {
                        struct S0 l_1782[2][9] = {{{0,-6L,249,4},{0,-6L,249,4},{0,-6L,249,4},{0,-6L,249,4},{0,-6L,249,4},{0,-6L,249,4},{0,-6L,249,4},{0,-6L,249,4},{0,-6L,249,4}},{{0,7L,-2,12},{0,-4L,16,12},{0,7L,-2,12},{0,-4L,16,12},{0,7L,-2,12},{0,-4L,16,12},{0,7L,-2,12},{0,-4L,16,12},{0,7L,-2,12}}};
                        int i, j;
                        l_1781 = g_1382;
                        g_366 = g_83[1][0];
                        l_1780[1][0][0] = l_1782[1][8];
                        g_1476[1][2] &= func_30((safe_rshift_func_uint8_t_u_s(((-1L) && func_30(g_67, l_1785, g_1382, g_947[g_927][(g_927 + 2)], g_366)), 6)), p_25.f2, g_606[1][3], g_119.f3, p_24);
                    }
                    p_25 = l_1786;
                }
            }
            for (l_1387 = 0; (l_1387 <= 1); l_1387 += 1)
            {
                unsigned l_1787 = 1UL;
                unsigned char l_1799 = 1UL;
                int l_1813[7] = {0L,0L,0L,0L,0L,0L,0L};
                unsigned short l_1820 = 0x3E52L;
                unsigned char l_1845[10] = {249UL,0xF5L,9UL,0xF5L,249UL,249UL,0xF5L,9UL,0xF5L,249UL};
                unsigned short l_1847 = 0x355DL;
                int l_1866[4] = {0x6C9D1342L,0x6C9D1342L,0x6C9D1342L,0x6C9D1342L};
                int i;
                l_1787--;
                for (l_1424 = 0; (l_1424 <= 1); l_1424 += 1)
                {
                    unsigned l_1794 = 0xC7DD261DL;
                    p_25.f0 |= (func_62((g_83[3][3] < (safe_sub_func_int16_t_s_s(l_1742, p_25.f2))), ((safe_add_func_uint16_t_u_u(0x0F07L, (0x6F9C85DEL | (((l_1781.f1 <= 0x2FL) != (g_462 <= 0L)) >= p_25.f2)))) == l_1794), g_484) != 1UL);
                }
                if ((p_25.f1 | (0x1BL <= (safe_rshift_func_int8_t_s_u((-9L), ((p_25.f2 ^ (0x3BL > g_606[1][3].f1)) || (safe_add_func_uint32_t_u_u((~p_26), 4294967287UL))))))))
                {
                    int l_1808 = (-6L);
                    int l_1817[3][10][4] = {{{0xEC43515AL,3L,0xEC43515AL,0xABD5C1FCL},{0x46CBF0FDL,3L,0x3B0056D8L,3L},{0x46CBF0FDL,0xABD5C1FCL,0xEC43515AL,3L},{0xEC43515AL,3L,0xEC43515AL,0xABD5C1FCL},{0x46CBF0FDL,3L,0x3B0056D8L,3L},{0x46CBF0FDL,0xABD5C1FCL,0xEC43515AL,3L},{0xEC43515AL,3L,0xEC43515AL,0xABD5C1FCL},{0x46CBF0FDL,3L,0x3B0056D8L,3L},{0x46CBF0FDL,0xABD5C1FCL,0xEC43515AL,3L},{0xEC43515AL,3L,0xEC43515AL,0xABD5C1FCL}},{{0x46CBF0FDL,3L,0x3B0056D8L,3L},{0x46CBF0FDL,0xABD5C1FCL,0xEC43515AL,3L},{0xEC43515AL,3L,0xEC43515AL,0xABD5C1FCL},{0x46CBF0FDL,3L,0x3B0056D8L,3L},{0x46CBF0FDL,0xABD5C1FCL,0xEC43515AL,3L},{0xEC43515AL,3L,0xEC43515AL,0xABD5C1FCL},{0x46CBF0FDL,3L,0x3B0056D8L,3L},{0x46CBF0FDL,0xABD5C1FCL,0xEC43515AL,3L},{0xEC43515AL,3L,0xEC43515AL,0xABD5C1FCL},{0x46CBF0FDL,3L,0x3B0056D8L,3L}},{{0x46CBF0FDL,0xABD5C1FCL,0xEC43515AL,3L},{0xEC43515AL,3L,0xEC43515AL,0xABD5C1FCL},{0x46CBF0FDL,3L,0x3B0056D8L,3L},{0x46CBF0FDL,0xABD5C1FCL,0xEC43515AL,3L},{0xEC43515AL,3L,0xEC43515AL,0xABD5C1FCL},{0x46CBF0FDL,3L,0x3B0056D8L,3L},{0x46CBF0FDL,0xABD5C1FCL,0xEC43515AL,3L},{0xEC43515AL,3L,0xEC43515AL,0xABD5C1FCL},{0x46CBF0FDL,3L,0x3B0056D8L,3L},{0x46CBF0FDL,0xABD5C1FCL,0xEC43515AL,3L}}};
                    int i, j, k;
                    l_1799--;
                    if (g_1111.f3)
                    {
                        short l_1811 = 1L;
                        int l_1812 = 0x296F8F27L;
                        int l_1814 = 0x205F5F3BL;
                        l_1811 &= func_77(((safe_add_func_uint8_t_u_u((0UL & (safe_rshift_func_int16_t_s_u((safe_add_func_int8_t_s_s(func_77(l_1808, (p_25.f1 && func_52(p_25.f1, p_25.f1, (p_24 < g_111), (g_288 && (((g_1809 & l_1448.f3) == 0xE2F1L) != p_23)))), p_23, l_1786.f0, l_1810), l_1781.f3)), 12))), 0UL)) != l_1786.f0), l_1565[5][3], g_130[0], l_1810.f0, g_1382);
                        if (p_24)
                            continue;
                        l_1820++;
                        if (l_1786.f2)
                            goto lbl_1823;
                    }
                    else
                    {
                        g_433[2] = 1L;
                    }
                    p_25 = g_1111;
                }
                else
                {
                    unsigned char l_1826 = 0x7EL;
                    g_1476[0][4] = 0x2059865DL;
                    g_433[7] = (func_45(g_1111.f0, g_1809) || ((l_1810.f2 & ((g_1476[1][4] < l_1826) < ((((1UL & (l_1815 > (safe_add_func_int16_t_s_s((safe_mod_func_int32_t_s_s((l_1565[4][5] < p_25.f1), 1UL)), (-7L))))) | p_25.f1) & 0x18L) != g_784[2][0][1]))) > g_1382.f2));
                }
                for (p_23 = 0; (p_23 <= 1); p_23 += 1)
                {
                    unsigned l_1846 = 1UL;
                    int l_1862[8] = {1L,1L,1L,1L,1L,1L,1L,1L};
                    unsigned l_1863[5][2] = {{2UL,0xDEB223D1L},{0x64CDFAB6L,0xDEB223D1L},{4294967295UL,0x64CDFAB6L},{8UL,8UL},{8UL,0x64CDFAB6L}};
                    unsigned char l_1872[8] = {0x30L,0UL,0x30L,0x30L,0UL,0x30L,0x30L,0UL};
                    int i, j;
                    l_1754 = 0xF7F9401DL;
                    if (((func_45(p_26, p_26) && (safe_mod_func_int32_t_s_s(((safe_lshift_func_uint16_t_u_u(func_62((((((safe_sub_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u((((~(safe_rshift_func_uint8_t_u_s(g_83[2][1], p_24))) && ((safe_sub_func_int32_t_s_s(((func_62(func_30((((safe_mod_func_int32_t_s_s(l_1810.f2, (l_1845[3] && (((((g_606[1][3].f2 < (+g_1111.f3)) >= l_1846) || 3UL) && 0x8EC8L) <= l_1799)))) != g_927) == g_484), p_25.f0, p_25, g_746, p_25.f0), p_25.f1, g_83[3][6]) >= l_1813[0]) || p_25.f0), p_25.f3)) <= l_1847)) > l_1754), p_25.f1)), g_1848[7])) > l_1754) || p_26) <= 0x8917B96AL) >= 0UL), g_1382.f3, l_1781.f0), p_25.f0)) <= p_23), p_25.f1))) == 0x0053L))
                    {
                        unsigned short l_1849[1][7];
                        int i, j;
                        for (i = 0; i < 1; i++)
                        {
                            for (j = 0; j < 7; j++)
                                l_1849[i][j] = 5UL;
                        }
                        l_1849[0][0]--;
                        g_1382.f2 = func_62((func_77(g_947[0][0], g_1382.f0, (((safe_sub_func_uint16_t_u_u(g_947[0][2], (safe_add_func_uint32_t_u_u(p_25.f2, ((safe_add_func_uint32_t_u_u((g_366 | func_30(l_1858, p_25.f1, p_25, (safe_rshift_func_uint8_t_u_s(0xBEL, 5)), p_25.f3)), (-10L))) | 0x87AAL))))) < p_26) & p_23), l_1846, p_25) == g_306[2][7][1]), p_23, p_25.f0);
                        p_25.f0 |= (p_25.f2 <= g_306[0][0][2]);
                        if (g_949)
                            break;
                    }
                    else
                    {
                        int l_1861 = 2L;
                        --l_1863[2][1];
                        g_1017 |= p_25.f3;
                        l_1818 = (0x92C6L | p_25.f2);
                    }
                    if (l_1866[2])
                        continue;
                    l_1786.f0 ^= ((safe_unary_minus_func_int16_t_s(func_45(g_606[1][3].f0, (safe_rshift_func_uint16_t_u_u(p_25.f1, ((g_606[1][3].f3 && (safe_sub_func_int16_t_s_s(((((l_1448.f2 | func_30((p_25.f0 & g_369), g_1313, p_25, p_25.f1, p_24)) >= g_133) < l_1872[0]) < 1UL), 0x0704L))) && l_1846)))))) < l_1786.f2);
                }
            }
        }
        for (l_1441 = (-17); (l_1441 > 8); ++l_1441)
        {
            char l_1877 = 0xF8L;
            int l_1915 = (-10L);
            int l_1917 = (-1L);
            int l_1919 = 0L;
            short l_1921 = 0xABD0L;
            int l_1922 = (-8L);
            struct S0 l_1931 = {-0,9L,-935,13};
            int l_1956[5][9] = {{0L,0x7CAB3180L,0x63E34D59L,0x6D548822L,0x63E34D59L,0x7CAB3180L,0L,0x7CAB3180L,0x63E34D59L},{1L,0L,0L,1L,0L,0L,1L,0L,0L},{0L,0x7CAB3180L,0x63E34D59L,0x6D548822L,0x63E34D59L,0x7CAB3180L,0L,0x7CAB3180L,0x63E34D59L},{1L,0L,0L,1L,0L,0L,1L,0L,0L},{0L,0x7CAB3180L,0x63E34D59L,0x6D548822L,0x63E34D59L,0x7CAB3180L,0L,0x7CAB3180L,0x63E34D59L}};
            char l_1972 = 1L;
            int i, j;
            g_947[0][5] = ((safe_lshift_func_int16_t_s_s(g_1382.f1, p_25.f2)) == (!((l_1877 | p_24) & (((((func_45(p_24, l_1878) ^ ((l_1877 <= ((p_24 & 0x02L) < 0xF1L)) & g_1382.f2)) || p_25.f1) ^ 0L) <= 0UL) != g_784[2][0][1]))));
            for (g_369 = (-3); (g_369 < 35); g_369 = safe_add_func_uint32_t_u_u(g_369, 5))
            {
                int l_1885[7][2][10] = {{{(-3L),0xBAE8D3FEL,0x8EF303F7L,1L,1L,0x1D82B6F1L,0x1E1CA459L,0x0D231D31L,0x81CB65AAL,5L},{0x60953231L,1L,0x06AB0425L,5L,(-3L),3L,0xFEFAEB2BL,0x81CB65AAL,0L,0x677DB986L}},{{0x81CB65AAL,(-2L),4L,0x1E1CA459L,0xCD9CB1F1L,(-7L),0xCD9CB1F1L,0x1E1CA459L,4L,(-2L)},{0L,(-1L),0x2B6A4ED9L,1L,0x1E1CA459L,0xBAE8D3FEL,0x231A0CECL,(-3L),(-3L),(-2L)}},{{1L,(-10L),0L,0x25CE9441L,0xAB3E9A2EL,0xBAE8D3FEL,0L,0x1E1CA459L,(-4L),0x03A5FDE3L},{3L,4L,0xFEFAEB2BL,0x1E1CA459L,0x18563516L,0L,0x2B6A4ED9L,(-1L),(-7L),(-3L)}},{{0xFEFAEB2BL,0x60953231L,1L,0x81CB65AAL,4L,0x49A2BC5EL,0x6D8CE173L,1L,(-1L),5L},{0x677DB986L,1L,0x49A2BC5EL,0x0D231D31L,0L,0x25CE9441L,0x96AE7FB6L,0x96AE7FB6L,0x25CE9441L,0L}},{{(-1L),0xAB3E9A2EL,0xAB3E9A2EL,(-1L),(-7L),0x08A7187AL,1L,0x231A0CECL,0x6D8CE173L,3L},{0L,0x25CE9441L,0x0D231D31L,(-3L),0xBAE8D3FEL,(-4L),0xAB3E9A2EL,1L,0x6D8CE173L,0L}},{{(-3L),0L,0x06AB0425L,(-1L),0L,1L,1L,(-1L),0x25CE9441L,0xABAB5B79L},{0x03A5FDE3L,0x18563516L,(-1L),0x0D231D31L,1L,0x1E1CA459L,(-3L),(-4L),(-1L),4L}},{{0xABAB5B79L,(-1L),0x6D8CE173L,0x81CB65AAL,(-2L),4L,0x1E1CA459L,0xCD9CB1F1L,(-7L),1L},{0x2B6A4ED9L,0L,0x25CE9441L,(-4L),0x25CE9441L,0L,0x2B6A4ED9L,(-1L),0xCD9CB1F1L,5L}}};
                int i, j, k;
                g_1476[1][4] |= (safe_rshift_func_uint8_t_u_u((g_947[0][2] <= l_1786.f3), (((safe_add_func_uint8_t_u_u(l_1885[6][1][1], (4L && l_1885[6][1][1]))) < (g_237 & ((((((0x92F01398L <= ((l_1858 <= (l_1786.f0 != g_606[1][3].f3)) | 0x2BL)) || p_25.f0) ^ l_1877) ^ 0x9926L) && 0x1B01L) != l_1885[6][1][1]))) < 0x28L)));
                l_1565[5][3] ^= (p_24 > (safe_sub_func_int16_t_s_s((safe_lshift_func_int8_t_s_s((0x3425L != func_30(g_1111.f0, g_236, g_119, l_1885[6][1][1], (safe_rshift_func_int8_t_s_s((g_784[2][0][1] & ((4294967295UL < g_366) && g_947[0][2])), 4)))), g_1809)), p_25.f1)));
            }
            for (l_1733 = 0; (l_1733 != 14); l_1733++)
            {
                int l_1911 = (-8L);
                int l_1912 = 0x8505FE02L;
                int l_1914 = 0xC6251E2EL;
                int l_1916[7][5][6] = {{{0xEE57AA7DL,0x10592AB2L,1L,0x2FA6AAB2L,(-1L),(-1L)},{(-1L),0x541C720AL,0L,(-1L),1L,(-10L)},{0xE82325A1L,(-8L),0L,0x78A7717FL,(-1L),1L},{(-1L),0L,0x39C87CBBL,(-1L),0L,(-8L)},{1L,1L,(-10L),1L,1L,0x10592AB2L}},{{1L,0xB33A1F64L,0x78A7717FL,0x541C720AL,0xEE57AA7DL,0x88562D1FL},{(-10L),(-1L),1L,0xB33A1F64L,(-4L),0x88562D1FL},{(-4L),(-1L),0x78A7717FL,1L,0L,0x10592AB2L},{(-4L),(-1L),(-10L),(-4L),0xB33A1F64L,(-8L)},{0x987086B2L,0x3762908BL,0x39C87CBBL,0x88562D1FL,0x8B413E79L,1L}},{{(-10L),(-9L),0L,0L,(-9L),(-10L)},{1L,1L,0L,(-1L),0xE82325A1L,(-1L)},{(-1L),(-1L),1L,(-9L),0x88562D1FL,0xF6061256L},{(-1L),(-5L),(-9L),(-1L),0x987086B2L,(-10L)},{1L,(-1L),(-9L),0x78A7717FL,0x10592AB2L,(-10L)}},{{0xF6061256L,0xB33A1F64L,0x8B413E79L,0xEE57AA7DL,0L,(-1L)},{0L,4L,0xB33A1F64L,(-1L),0xB33A1F64L,4L},{(-10L),0x78A7717FL,0L,(-1L),0x2FA6AAB2L,(-8L)},{(-1L),1L,(-4L),1L,(-5L),(-1L)},{0L,1L,0xEE57AA7DL,0x39C87CBBL,0x2FA6AAB2L,(-10L)}},{{1L,0x78A7717FL,1L,0x541C720AL,0xB33A1F64L,2L},{(-4L),4L,0L,(-10L),0L,0x541C720AL},{1L,0xB33A1F64L,(-1L),0x10592AB2L,0x10592AB2L,(-1L)},{(-1L),(-1L),1L,(-5L),0L,0L},{(-10L),0x8B413E79L,(-1L),0x3762908BL,0xEE57AA7DL,1L}},{{(-4L),(-10L),(-1L),(-4L),(-1L),0L},{1L,(-4L),1L,0x2FA6AAB2L,0xE82325A1L,(-1L)},{0x2FA6AAB2L,0xE82325A1L,(-1L),1L,(-1L),0x541C720AL},{0x78A7717FL,1L,0L,2L,1L,2L},{1L,(-1L),1L,(-8L),1L,(-10L)}},{{1L,4L,(-4L),0x987086B2L,0L,1L},{(-1L),0x8B413E79L,(-10L),0x987086B2L,(-1L),(-9L)},{1L,(-4L),1L,(-9L),(-10L),(-8L)},{(-4L),0x39C87CBBL,1L,0L,0L,(-5L)},{0x10592AB2L,1L,(-1L),(-1L),0xF6061256L,0xF6061256L}}};
                int l_1958 = 0x77A8DA8EL;
                unsigned char l_1961 = 0UL;
                struct S0 l_1973[9][7][1] = {{{{0,1L,394,1}},{{0,1L,394,1}},{{-0,-1L,511,14}},{{0,0x79L,-457,4}},{{-0,0x17L,218,1}},{{0,0x79L,-457,4}},{{-0,-1L,511,14}}},{{{0,1L,394,1}},{{0,1L,394,1}},{{-0,-1L,511,14}},{{0,0x79L,-457,4}},{{-0,0x17L,218,1}},{{0,0x79L,-457,4}},{{-0,-1L,511,14}}},{{{0,1L,394,1}},{{0,1L,394,1}},{{-0,-1L,511,14}},{{0,0x79L,-457,4}},{{-0,0x17L,218,1}},{{0,0x79L,-457,4}},{{-0,-1L,511,14}}},{{{0,1L,394,1}},{{0,1L,394,1}},{{-0,-1L,511,14}},{{0,0x79L,-457,4}},{{-0,0x17L,218,1}},{{0,0x79L,-457,4}},{{-0,-1L,511,14}}},{{{0,1L,394,1}},{{0,1L,394,1}},{{-0,-1L,511,14}},{{0,0x79L,-457,4}},{{-0,0x17L,218,1}},{{0,0x79L,-457,4}},{{-0,-1L,511,14}}},{{{0,1L,394,1}},{{0,1L,394,1}},{{-0,-1L,511,14}},{{0,0x79L,-457,4}},{{-0,0x17L,218,1}},{{0,0x79L,-457,4}},{{-0,-1L,511,14}}},{{{0,1L,394,1}},{{0,1L,394,1}},{{-0,-1L,511,14}},{{0,0x79L,-457,4}},{{-0,0x17L,218,1}},{{0,0x79L,-457,4}},{{-0,-1L,511,14}}},{{{0,1L,394,1}},{{0,1L,394,1}},{{-0,-1L,511,14}},{{0,0x79L,-457,4}},{{-0,0x17L,218,1}},{{0,0x79L,-457,4}},{{-0,-1L,511,14}}},{{{0,1L,394,1}},{{0,1L,394,1}},{{-0,-1L,511,14}},{{0,0x79L,-457,4}},{{-0,0x17L,218,1}},{{0,0x79L,-457,4}},{{-0,-1L,511,14}}}};
                int i, j, k;
                g_606[1][3].f0 = (safe_lshift_func_uint8_t_u_u(g_1382.f0, (g_130[0] || g_1111.f0)));
                if ((safe_lshift_func_uint8_t_u_u(((g_1313 != (safe_add_func_int8_t_s_s(l_1781.f3, g_116))) | func_30(g_111, g_433[6], l_1448, g_130[0], (safe_unary_minus_func_uint16_t_u(65526UL)))), g_1382.f0)))
                {
                    int l_1910[3][6] = {{(-10L),(-10L),0xA99F1078L,(-10L),(-10L),0xA99F1078L},{(-10L),(-10L),0xA99F1078L,(-10L),(-10L),0xA99F1078L},{(-10L),(-10L),0xA99F1078L,(-10L),(-10L),0xA99F1078L}};
                    char l_1913 = 0xACL;
                    int l_1918 = 0x6D5AA6C7L;
                    int l_1920 = 1L;
                    int l_1924[5][3];
                    int i, j;
                    for (i = 0; i < 5; i++)
                    {
                        for (j = 0; j < 3; j++)
                            l_1924[i][j] = 4L;
                    }
                    p_25.f2 |= (!g_784[2][0][1]);
                    p_25.f2 &= p_24;
                    for (g_462 = 0; (g_462 <= 0); g_462 += 1)
                    {
                        int i;
                        p_25.f0 ^= 0x9F5EF274L;
                        p_25.f2 = (safe_add_func_int16_t_s_s((-1L), (g_130[g_462] || func_77(g_83[2][1], p_25.f3, p_25.f1, (safe_rshift_func_uint16_t_u_s(g_236, 2)), g_606[0][3]))));
                        p_25.f2 |= (p_25.f0 == (safe_unary_minus_func_int16_t_s(g_1382.f2)));
                        g_1382.f0 |= (((safe_add_func_int8_t_s_s(0xC5L, 3UL)) | g_116) ^ ((safe_rshift_func_int8_t_s_u(p_25.f3, (p_24 || (-9L)))) <= g_133));
                    }
                    ++l_1925;
                }
                else
                {
                    char l_1941 = 0x3FL;
                    if (g_1382.f3)
                    {
                        int l_1932 = 0x6D4D3A9FL;
                        l_1932 = func_77(p_25.f2, (safe_add_func_uint32_t_u_u(l_1930, func_30(p_25.f1, (func_62(((4294967287UL <= p_26) >= g_462), l_1424, g_1382.f0) < 0x97L), p_25, g_949, g_1382.f0))), g_306[2][2][0], p_25.f2, l_1931);
                    }
                    else
                    {
                        unsigned l_1946 = 0xBF496A75L;
                        l_1919 = (safe_sub_func_int32_t_s_s(0x35BE4D3AL, ((p_25.f2 ^ (safe_mod_func_uint16_t_u_u(func_45((safe_lshift_func_uint8_t_u_s((p_25.f0 ^ ((safe_rshift_func_uint8_t_u_s(g_1476[0][5], 1)) || (p_25.f0 && (func_52(g_236, ((((l_1781.f3 >= 0xA30EL) || func_30(func_30(g_606[1][3].f3, p_25.f1, p_25, l_1448.f2, p_24), l_1931.f2, g_1382, l_1712, g_746)) && p_26) & 0xADAC72B0L), l_1941, g_433[3]) >= g_4[5][2])))), 1)), p_23), g_949))) & g_83[0][1])));
                        p_25.f0 = ((0xE8FAA500L == (safe_lshift_func_int16_t_s_u((safe_add_func_uint8_t_u_u(p_25.f1, g_606[1][3].f1)), ((p_24 && ((l_1946 == (safe_lshift_func_int8_t_s_s((safe_sub_func_uint32_t_u_u((g_133 >= 0xFCEE35B1L), 3L)), 4))) && (!func_77(((+(func_30(l_1925, p_23, p_25, l_1946, p_23) != g_67)) & g_92), g_1382.f2, p_25.f0, g_462, p_25)))) >= g_947[0][2])))) < p_25.f2);
                        g_1111.f2 ^= func_52(((safe_sub_func_uint16_t_u_u((~(g_484 >= g_4[3][1])), ((-2L) > (((~l_1946) ^ 0x6BEBE121L) == (safe_mod_func_uint8_t_u_u(((g_83[3][2] >= g_1476[2][0]) & 4294967295UL), l_1914)))))) && 0x38L), p_25.f2, p_25.f3, g_288);
                    }
                }
                --l_1961;
                p_25.f0 = (safe_add_func_uint16_t_u_u((safe_mod_func_int16_t_s_s(8L, (l_1742 && (safe_add_func_uint32_t_u_u((g_130[0] <= (l_1878 != (safe_rshift_func_uint8_t_u_u(g_606[1][3].f3, 4)))), func_30((((g_746 | ((((p_25.f1 <= (p_25.f2 | (g_1560 | p_26))) <= g_119.f2) | l_1742) | 253UL)) > g_130[0]) || g_1382.f3), l_1972, l_1973[2][3][0], l_1448.f1, p_23)))))), g_106));
            }
        }
    }
    else
    {
        unsigned short l_1988 = 0xE5A6L;
        int l_2020[9] = {0x3729C34CL,0x3729C34CL,(-1L),0x3729C34CL,0x3729C34CL,(-1L),0x3729C34CL,0x3729C34CL,(-1L)};
        int l_2032 = 0xF74F83CFL;
        int l_2034 = 0L;
        int l_2036 = 2L;
        int l_2038 = 0x5422A36BL;
        int l_2039[1][4][3] = {{{1L,1L,1L},{1L,1L,1L},{1L,1L,1L},{1L,1L,1L}}};
        unsigned char l_2049 = 0x24L;
        struct S0 l_2145[7][1] = {{{0,0xB0L,360,9}},{{-0,0x7FL,604,8}},{{0,0xB0L,360,9}},{{-0,0x7FL,604,8}},{{0,0xB0L,360,9}},{{-0,0x7FL,604,8}},{{0,0xB0L,360,9}}};
        int l_2231 = 8L;
        char l_2254 = 0xDAL;
        int i, j, k;
        if (g_927)
        {
            short l_1989 = 3L;
            struct S0 l_2000 = {-0,2L,1001,13};
            short l_2021 = (-9L);
            int l_2037[8] = {(-2L),(-9L),(-2L),(-9L),(-2L),(-9L),(-2L),(-9L)};
            unsigned l_2090 = 0x17385442L;
            int l_2125 = (-1L);
            int i;
            p_25 = g_606[0][3];
            for (g_133 = 16; (g_133 >= 10); g_133 = safe_sub_func_uint8_t_u_u(g_133, 5))
            {
                unsigned l_1978 = 0UL;
                struct S0 l_2001 = {-0,0x0CL,160,0};
                unsigned l_2016 = 4294967295UL;
                int l_2033[6];
                int i;
                for (i = 0; i < 6; i++)
                    l_2033[i] = 0L;
                if (((safe_rshift_func_int8_t_s_u((((!0L) & l_1978) <= (((p_25.f2 > ((g_1382.f3 <= l_1981) <= (!255UL))) <= 8L) | (0xAE1E01D7L > 0x03C27C12L))), l_1978)) >= g_1382.f0))
                {
                    g_119 = p_25;
                    g_606[1][3].f2 = (g_1313 == ((safe_add_func_uint16_t_u_u(4UL, ((g_1111.f1 == (safe_add_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s(g_462, 8)), ((!(p_25.f1 & p_24)) ^ l_1988)))) ^ (-9L)))) ^ 251UL));
                    if (l_1532)
                        continue;
                }
                else
                {
                    int l_2004 = 0x3A36AE3AL;
                    struct S0 l_2019 = {0,-1L,839,12};
                    int l_2031 = 0x103872E5L;
                    l_2000.f0 = (l_1989 & ((safe_unary_minus_func_int32_t_s((safe_mod_func_int16_t_s_s((safe_lshift_func_int8_t_s_s(((+(((safe_mod_func_int16_t_s_s((safe_mod_func_int16_t_s_s((g_1999 >= ((g_1809 & 0UL) != 0x7173512DL)), g_116)), p_23)) != 0x0237L) < func_30(p_26, g_746, l_2000, g_116, p_23))) <= g_236), p_26)), 65531UL)))) <= 1L));
                    if (p_25.f3)
                        break;
                    for (l_1715 = 0; (l_1715 <= 7); l_1715 += 1)
                    {
                        int i;
                        p_25.f0 |= g_433[l_1715];
                        g_606[1][3] = l_2001;
                        return g_433[l_1715];
                    }
                    if (((l_2000.f3 | ((safe_rshift_func_int16_t_s_s(g_1809, 0)) > func_30(p_26, (l_2004 ^ (((safe_mod_func_uint8_t_u_u(7UL, l_2004)) >= p_25.f2) <= ((~((((!(safe_lshift_func_int16_t_s_u((((safe_lshift_func_int16_t_s_s((g_83[0][6] ^ (g_484 | l_2001.f3)), l_2004)) <= 0x00L) <= 65533UL), l_2001.f1))) ^ l_1424) == l_1988) > 0L)) & g_1382.f2))), g_119, l_2000.f3, l_2000.f1))) ^ 0xCFF2C178L))
                    {
                        unsigned short l_2013 = 0x44BFL;
                        l_2000.f2 = g_369;
                        g_236 &= (-3L);
                        p_25.f2 &= l_2013;
                        g_1382.f2 = (safe_lshift_func_uint8_t_u_u(func_30(func_30(p_25.f3, p_23, l_2001, (p_25.f0 & l_1989), func_30((l_2000.f0 != ((((-1L) | (l_2016 == (safe_rshift_func_int16_t_s_u(0x108CL, l_2004)))) != l_1988) && l_2013)), g_1809, l_2019, p_25.f0, l_2013)), l_2020[1], g_606[1][3], l_2021, l_1925), g_462));
                    }
                    else
                    {
                        struct S0 l_2026 = {0,0x1CL,514,7};
                        l_2000.f2 = (safe_rshift_func_uint16_t_u_s(func_30(l_1988, (((((safe_mod_func_uint8_t_u_u(func_30(l_1650[2], g_1809, l_2026, (safe_add_func_int16_t_s_s((safe_add_func_int32_t_s_s(p_26, 0x20DBF37CL)), (func_30((l_2019.f3 && g_288), ((l_2031 <= g_119.f1) || l_2020[1]), g_1382, l_2001.f2, p_26) > l_2019.f3))), g_484), 0x43L)) && g_1560) && 1UL) && l_1989) >= p_25.f2), l_1448, g_606[1][3].f2, g_288), 1));
                        l_1955 = 4L;
                        return l_2020[1];
                    }
                }
                l_2040--;
                if (p_25.f2)
                    break;
            }
            if (g_927)
            {
                char l_2052 = 0xF7L;
                unsigned char l_2086[6] = {249UL,249UL,0xB8L,249UL,249UL,0xB8L};
                int l_2088 = (-1L);
                int l_2089 = 0L;
                int i;
                for (l_2040 = 0; (l_2040 > 25); l_2040 = safe_add_func_int8_t_s_s(l_2040, 6))
                {
                    return g_83[2][3];
                }
                g_119.f2 |= p_25.f3;
                if ((safe_rshift_func_int8_t_s_s(p_25.f3, (safe_sub_func_int32_t_s_s(0x1BF0108EL, (g_606[1][3].f0 & g_1111.f2))))))
                {
                    for (g_2035 = 0; (g_2035 <= 7); g_2035 += 1)
                    {
                        int i;
                        p_25.f2 &= (func_45(l_1650[g_2035], (l_2049 < (safe_sub_func_uint16_t_u_u(l_1989, l_2052)))) != 246UL);
                        if (g_119.f0)
                            goto lbl_2053;
                        l_1448.f0 ^= (g_92 & 65531UL);
                        p_25.f2 = func_62(l_1650[g_2035], (g_92 <= l_1988), g_1111.f0);
                    }
                }
                else
                {
                    int l_2066[10][9] = {{4L,0x7FD3B0CCL,0L,1L,0x3FB6A753L,0L,0x021FD65AL,1L,(-9L)},{(-1L),0x64B19227L,0L,0xA88B5786L,0x7FD3B0CCL,(-1L),0L,(-5L),0L},{0x64B19227L,0L,(-5L),(-1L),(-1L),0L,4L,0x3FB6A753L,0x6108AE99L},{0x5734FCC5L,1L,0x64B19227L,(-1L),0x021FD65AL,0x021FD65AL,(-1L),0x64B19227L,1L},{0x197C0F08L,0x9C4BA4FEL,4L,0xCA50FDE1L,0L,0L,0x021FD65AL,(-7L),4L},{0xE91CA912L,0L,0x90A589E1L,1L,4L,0xA26C2BDFL,0L,0x64B19227L,0L},{4L,0x64B19227L,0L,4L,0x9C4BA4FEL,0x5734FCC5L,0x6108AE99L,0x90A589E1L,0xBCB43F3AL},{(-9L),0L,0xCA50FDE1L,0xA26C2BDFL,0x90A589E1L,0x9C4BA4FEL,0xBCB43F3AL,0L,0xBCB43F3AL},{0x64B19227L,(-1L),0x021FD65AL,0x021FD65AL,(-1L),0x64B19227L,1L,0x5734FCC5L,0L},{0xCA50FDE1L,8L,(-1L),0L,0xA26C2BDFL,1L,0x197C0F08L,4L,4L}};
                    int l_2087 = 0x20C66F5EL;
                    short l_2105 = 0x3A46L;
                    unsigned l_2106 = 0xCC7B75BCL;
                    int l_2109 = (-3L);
                    unsigned l_2111 = 0xC1AAA369L;
                    struct S0 l_2114 = {0,-1L,-894,13};
                    int i, j;
                    if (p_25.f3)
                    {
                        unsigned short l_2067 = 0xAE40L;
                        p_25 = g_606[1][5];
                        g_1476[1][4] ^= (((l_2020[1] ^ ((safe_add_func_int16_t_s_s((((safe_lshift_func_uint8_t_u_u(l_2000.f0, 1)) < ((safe_rshift_func_int8_t_s_u(p_25.f2, (func_38(((safe_lshift_func_uint16_t_u_s(func_62(g_1382.f0, (((safe_sub_func_uint32_t_u_u(l_2040, (safe_sub_func_int16_t_s_s(p_23, ((l_2052 & (func_62(func_38(g_1382.f1, p_25.f1, l_2066[3][6], g_236), g_130[0], l_2066[5][0]) || l_2067)) & p_24))))) != g_949) < 1UL), p_25.f1), 13)) | 0x6870EC48L), p_25.f0, l_2039[0][3][2], l_2066[3][6]) & (-6L)))) >= g_1560)) != 65535UL), p_24)) & g_1313)) > g_949) == g_3);
                        l_2037[6] = g_947[0][2];
                        return g_1382.f3;
                    }
                    else
                    {
                        l_2087 = ((((((safe_sub_func_int16_t_s_s(func_38(((l_2052 >= l_2020[1]) < (!(safe_add_func_int32_t_s_s((safe_lshift_func_uint16_t_u_s(l_2000.f2, 4)), (safe_add_func_int32_t_s_s(func_45((1L < (safe_sub_func_int16_t_s_s(0L, (-1L)))), ((safe_add_func_int32_t_s_s((safe_rshift_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u(l_1448.f3, (safe_sub_func_uint32_t_u_u(l_2086[2], l_1448.f0)))), g_947[0][1])), 1L)) > p_25.f2)), l_2021)))))), g_746, g_1111.f1, g_1809), (-1L))) != 6L) | g_1382.f3) <= p_26) || p_25.f0) ^ g_3);
                        ++l_2090;
                    }
                    for (l_1532 = 0; (l_1532 != (-19)); l_1532 = safe_sub_func_uint16_t_u_u(l_1532, 3))
                    {
                        g_606[1][3].f2 = p_25.f2;
                        p_25.f2 = (((func_45((safe_sub_func_uint8_t_u_u(func_45((p_25.f2 == (safe_add_func_uint8_t_u_u((((-1L) ^ 0x730B8934L) > ((l_2066[3][6] >= (safe_lshift_func_uint16_t_u_u((safe_add_func_uint8_t_u_u((0UL > l_2039[0][3][2]), g_1111.f2)), (~p_26)))) == (((p_25.f1 >= l_2040) | 65535UL) > 1UL))), 0xB3L))), p_25.f3), 0UL)), l_2086[2]) && l_2087) >= l_2039[0][3][2]) < p_24);
                        return g_1111.f2;
                    }
                    l_2034 = (p_24 ^ 0UL);
                    for (g_92 = 0; (g_92 <= 2); g_92 += 1)
                    {
                        int l_2110 = 0x1F9E46BAL;
                        unsigned short l_2126[2];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_2126[i] = 1UL;
                        l_2106--;
                        l_2111++;
                        g_1111 = l_2114;
                        l_2039[0][3][2] ^= (((0L ^ ((0x43L && (((safe_add_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u((-3L), (safe_rshift_func_uint8_t_u_s(((safe_sub_func_int32_t_s_s(l_2086[2], (safe_mod_func_int32_t_s_s(g_433[2], g_306[2][2][0])))) > (g_606[1][3].f2 & (func_30(func_30(l_2125, l_2037[1], p_25, p_26, g_119.f1), p_26, g_606[1][3], g_119.f0, g_130[0]) | l_2109))), l_2105)))), g_746)) == l_2114.f2) ^ l_2126[1])) >= 1L)) || l_2126[1]) == 253UL);
                    }
                }
            }
            else
            {
                unsigned l_2129[10][1] = {{0x00A3D4A3L},{0x6733CA5BL},{0x00A3D4A3L},{0x6AEA136FL},{0x6AEA136FL},{0x00A3D4A3L},{0x6733CA5BL},{0x00A3D4A3L},{0x6AEA136FL},{0x6AEA136FL}};
                int i, j;
                for (g_119.f1 = (-15); (g_119.f1 == 14); g_119.f1++)
                {
                    short l_2150 = 0x1399L;
                    --l_2129[4][0];
                    p_25.f2 ^= (safe_mod_func_int32_t_s_s(1L, (safe_rshift_func_uint16_t_u_u((l_1532 > (l_1565[5][1] != 3UL)), 15))));
                    for (g_1809 = (-20); (g_1809 != (-21)); g_1809--)
                    {
                        struct S0 l_2159 = {-0,0xDDL,212,12};
                        p_25.f0 = (safe_unary_minus_func_uint8_t_u(252UL));
                        l_2039[0][2][1] = (p_26 || func_30(g_1382.f3, (((safe_mod_func_uint32_t_u_u(p_25.f3, 0x3CEB8B87L)) >= (0UL | (safe_mod_func_int32_t_s_s(l_2129[0][0], (safe_rshift_func_uint8_t_u_u((p_24 ^ func_30((+p_25.f0), ((func_30(l_2129[5][0], p_25.f2, p_25, p_25.f1, p_25.f1) & l_2020[1]) != 1L), l_2145[4][0], p_25.f0, l_2034)), l_2037[6])))))) < 0x17F0L), p_25, g_1999, p_24));
                        l_2145[4][0].f0 = (safe_sub_func_uint16_t_u_u(p_25.f0, (g_106 & (safe_mod_func_uint8_t_u_u((func_30(((((p_26 > l_2150) || g_288) & ((0L || ((safe_rshift_func_uint16_t_u_s(((safe_mod_func_uint8_t_u_u((+(safe_mod_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_s(g_130[0], p_25.f2)) <= p_25.f0), g_784[0][0][1]))), 0xCBL)) | (-8L)), g_1560)) > g_927)) & g_433[2])) || g_1848[7]), l_2000.f1, l_2159, l_2034, p_25.f2) || p_25.f0), g_784[0][0][3])))));
                    }
                }
            }
        }
        else
        {
            int l_2160 = 9L;
            l_2160 = p_25.f0;
            g_1017 |= func_62(g_606[1][3].f1, (g_433[7] & 0x4DFC31FCL), p_26);
            if ((safe_sub_func_int8_t_s_s((g_111 ^ (safe_sub_func_int8_t_s_s((safe_add_func_uint8_t_u_u(((safe_sub_func_uint16_t_u_u(0x6C23L, (safe_add_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u(0x37L, l_1878)), (safe_add_func_int32_t_s_s((safe_sub_func_uint8_t_u_u(func_30((safe_mod_func_int8_t_s_s(((((p_25.f0 > (func_30((safe_lshift_func_uint16_t_u_s((safe_add_func_int32_t_s_s(g_92, (safe_rshift_func_int16_t_s_s(((l_2160 && (p_24 && (((p_26 | 0x15C97989L) & 0xF0DBL) == p_25.f1))) <= g_119.f2), g_433[2])))), l_2160)), g_130[0], l_2145[0][0], g_2185, l_2160) == g_606[1][3].f0)) >= g_106) <= 0x20A91862L) > 0xAE5B4B89L), g_606[1][3].f1)), l_2038, g_606[1][3], l_2039[0][3][2], p_26), l_1424)), (-9L))))))) <= g_306[2][0][0]), g_119.f3)), p_26))), l_2020[1])))
            {
                unsigned char l_2197 = 0UL;
                int l_2205 = 0xF2082B9AL;
                struct S0 l_2208 = {-0,0xDEL,185,13};
                struct S0 l_2230 = {-0,-1L,687,4};
                if ((safe_sub_func_int32_t_s_s((safe_sub_func_int8_t_s_s((+1L), ((0xFCAC9241L | (safe_mod_func_uint8_t_u_u(((func_30((p_24 ^ p_23), (g_237 || l_1387), p_25, g_947[0][0], g_467) && g_606[1][3].f3) != 3UL), 0x72L))) && p_23))), 0xF8E57559L)))
                {
                    short l_2200 = 1L;
                    if (l_2160)
                    {
                        p_25.f0 = g_433[2];
                        if (l_2049)
                            goto lbl_2192;
lbl_2192:
                        p_25.f2 |= 0xD0677EA1L;
                        l_1448.f0 &= p_23;
                    }
                    else
                    {
                        g_606[1][3] = l_2145[0][0];
                        l_2038 = (safe_mod_func_uint16_t_u_u(0x05B8L, g_1111.f3));
                    }
                    for (g_462 = (-3); (g_462 < 17); g_462 = safe_add_func_uint32_t_u_u(g_462, 1))
                    {
                        g_1476[1][4] &= (0x3AL ^ ((((l_2197 < l_2160) >= g_130[0]) && ((g_433[7] > (l_2197 == p_25.f0)) && (((safe_rshift_func_uint16_t_u_s(p_23, 4)) < ((p_23 != g_3) ^ g_947[0][2])) && 0x6221L))) & g_288));
                        if (l_2200)
                            continue;
                    }
                    l_1565[1][2] &= 0x54E1F9D6L;
                    for (p_24 = 0; (p_24 >= 24); p_24++)
                    {
                        return g_1999;
                    }
                }
                else
                {
                    int l_2210 = 0xF1AF64B2L;
                    int l_2239 = 0x5836F0C7L;
                    for (p_26 = 2; (p_26 >= 0); p_26 -= 1)
                    {
                        unsigned char l_2209[9][4] = {{0x86L,6UL,0x06L,0xBFL},{0xBFL,6UL,0xE3L,0xC2L},{6UL,253UL,6UL,9UL},{6UL,0xE3L,251UL,0x86L},{0x6FL,6UL,9UL,0xE3L},{0xC2L,0UL,9UL,0x96L},{0x6FL,251UL,251UL,0x6FL},{6UL,0xC2L,6UL,255UL},{6UL,0x10L,255UL,253UL}};
                        int i, j;
                        g_1111 = g_606[0][0];
                        l_2205 = ((g_133 & l_1449) & (g_484 != (0x419CFAAEL | ((0xA90777B9L <= (safe_lshift_func_int8_t_s_u(((p_25.f2 != 0x2E3E34D9L) != 1UL), g_606[1][3].f2))) > l_2197))));
                        p_25.f2 |= func_77((func_45((l_2032 & (safe_add_func_uint32_t_u_u((g_119.f3 >= ((func_30(g_306[2][1][1], l_2160, l_2208, p_25.f0, (p_25.f0 || (func_30(l_2209[7][1], g_116, l_2145[4][0], p_26, l_2210) | g_369))) < 0x298EBEF6L) && l_2160)), p_26))), g_116) > l_2210), p_25.f3, p_26, g_288, g_1382);
                        g_236 |= (l_1712 && (((((safe_rshift_func_uint16_t_u_u((!l_2145[4][0].f1), p_24)) == l_2208.f2) & (safe_lshift_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u((safe_add_func_int8_t_s_s((((0UL ^ (safe_sub_func_int16_t_s_s(p_25.f3, (safe_unary_minus_func_int32_t_s((~g_119.f2)))))) > ((safe_lshift_func_uint16_t_u_u(p_24, 0)) >= ((safe_mod_func_int32_t_s_s((((func_30(func_30((p_24 >= l_2036), p_25.f0, l_2230, l_2209[8][0], p_24), l_2160, g_1382, p_25.f0, g_1382.f1) & l_2231) == g_369) | l_2231), l_1565[5][3])) < (-7L)))) != l_2230.f0), l_1650[2])), 0x1FFAL)), g_288))) && p_25.f3) && g_2232));
                    }
                    p_25.f2 = (((g_433[2] < ((0x9E6D4E7BL <= func_77(((safe_sub_func_int32_t_s_s(((g_111 ^ (((((safe_rshift_func_int16_t_s_s(p_23, ((((safe_rshift_func_uint16_t_u_u(g_947[0][2], 15)) & 2L) > (l_2210 | ((p_24 >= g_130[0]) || l_2160))) || l_2231))) > p_25.f0) || p_25.f1) < p_24) < p_25.f0)) >= p_23), g_746)) < 0xACE62EDDL), g_116, l_2197, g_2185, g_119)) <= l_2020[1])) >= g_1382.f3) < g_1111.f2);
                    l_2239 |= l_1930;
                    g_119.f0 = (-1L);
                }
            }
            else
            {
                unsigned l_2244 = 0x5728B7D6L;
                p_25.f0 = (1UL <= (((p_24 > p_25.f1) && 0x5F81890BL) <= (l_1650[0] && ((safe_mod_func_uint8_t_u_u(p_26, ((safe_rshift_func_int16_t_s_s(3L, (func_77(g_4[3][0], l_2244, l_2160, g_1382.f2, p_25) < l_2245[4]))) && g_784[2][0][1]))) || 5UL))));
                return l_1988;
            }
            if (((g_92 <= (((g_83[2][1] && (~g_67)) > (safe_rshift_func_int8_t_s_u(func_30(l_2020[1], l_2145[4][0].f0, p_25, p_25.f2, (safe_lshift_func_int8_t_s_u((safe_mod_func_int32_t_s_s((safe_add_func_uint32_t_u_u((l_2160 | p_25.f0), 0UL)), l_1448.f3)), 7))), g_484))) ^ l_2254)) > l_2160))
            {
                return p_25.f2;
            }
            else
            {
                struct S0 l_2255 = {-0,1L,112,13};
                struct S0 l_2259 = {-0,1L,484,12};
                g_119 = l_2255;
                l_2258 = (safe_rshift_func_uint8_t_u_u(l_2160, l_2245[3]));
                l_2259 = p_25;
            }
        }
        p_25.f2 |= g_433[2];
        l_2245[4] = g_2185;
        l_2039[0][0][2] &= g_947[0][2];
    }
    return p_25.f0;
}







static unsigned func_30(int p_31, int p_32, struct S0 p_33, unsigned char p_34, int p_35)
{
    struct S0 l_1381[4][5][7] = {{{{-0,0x88L,949,6},{-0,-3L,-63,3},{-0,0x88L,949,6},{0,0x58L,680,2},{-0,1L,-650,7},{-0,-3L,-63,3},{-0,1L,-650,7}},{{0,0x9AL,97,1},{0,2L,230,14},{0,2L,230,14},{0,0x9AL,97,1},{0,0L,-348,2},{-0,6L,321,12},{-0,0x11L,372,10}},{{0,-4L,61,10},{0,0xB9L,-587,1},{-0,0x49L,-223,14},{0,0xB9L,-587,1},{0,-4L,61,10},{-0,-3L,-63,3},{-0,0x49L,-223,14}},{{-0,1L,425,8},{-0,0x16L,447,15},{-0,0L,671,13},{-0,0L,671,13},{-0,0x16L,447,15},{-0,1L,425,8},{-0,0x11L,372,10}},{{-0,1L,-650,7},{0,0x58L,680,2},{-0,0x88L,949,6},{-0,-3L,-63,3},{-0,0x88L,949,6},{0,0x58L,680,2},{-0,1L,-650,7}}},{{{-0,1L,425,8},{-0,0L,671,13},{-0,0x11L,372,10},{0,0x9AL,97,1},{0,0x9AL,97,1},{-0,0x11L,372,10},{-0,0L,671,13}},{{0,-4L,61,10},{0,0x58L,680,2},{0,-3L,-463,13},{-0,0x52L,754,5},{0,-4L,61,10},{-0,0x52L,754,5},{0,-3L,-463,13}},{{0,0x9AL,97,1},{-0,0x16L,447,15},{-0,0x11L,372,10},{0,2L,230,14},{-0,1L,425,8},{-0,1L,425,8},{0,2L,230,14}},{{-0,0x88L,949,6},{0,0xB9L,-587,1},{-0,0x88L,949,6},{-0,0x52L,754,5},{-0,1L,-650,7},{0,0xB9L,-587,1},{-0,1L,-650,7}},{{-0,0x16L,447,15},{0,2L,230,14},{-0,0L,671,13},{0,0x9AL,97,1},{-0,1L,425,8},{-0,6L,321,12},{-0,6L,321,12}}},{{{0,-4L,61,10},{-0,-3L,-63,3},{-0,0x49L,-223,14},{-0,-3L,-63,3},{0,-4L,61,10},{0,0xB9L,-587,1},{-0,0x49L,-223,14}},{{0,0L,-348,2},{-0,0x16L,447,15},{0,2L,230,14},{-0,0L,671,13},{0,0x9AL,97,1},{-0,1L,425,8},{-0,6L,321,12}},{{-0,1L,-650,7},{-0,0x52L,754,5},{-0,0x88L,949,6},{0,0xB9L,-587,1},{-0,0x88L,949,6},{-0,0x52L,754,5},{-0,1L,-650,7}},{{0,0L,-348,2},{-0,0L,671,13},{-0,6L,321,12},{0,0x9AL,97,1},{-0,0x16L,447,15},{-0,0x11L,372,10},{0,2L,230,14}},{{0,-4L,61,10},{-0,0x52L,754,5},{0,-3L,-463,13},{0,0x58L,680,2},{0,-4L,61,10},{0,0x58L,680,2},{0,-3L,-463,13}}},{{{-0,0x16L,447,15},{-0,0x16L,447,15},{-0,6L,321,12},{0,2L,230,14},{0,0L,-348,2},{-0,1L,425,8},{-0,0L,671,13}},{{-0,0x88L,949,6},{-0,-3L,-63,3},{-0,0x88L,949,6},{0,0x58L,680,2},{-0,1L,-650,7},{-0,-3L,-63,3},{-0,1L,-650,7}},{{0,0x9AL,97,1},{0,2L,230,14},{0,2L,230,14},{0,0x9AL,97,1},{0,0L,-348,2},{-0,6L,321,12},{-0,0x11L,372,10}},{{0,-4L,61,10},{0,0xB9L,-587,1},{-0,0x49L,-223,14},{0,0xB9L,-587,1},{0,-4L,61,10},{-0,-3L,-63,3},{-0,0x49L,-223,14}},{{-0,1L,425,8},{-0,0x16L,447,15},{-0,0L,671,13},{-0,0L,671,13},{-0,0x16L,447,15},{-0,1L,425,8},{-0,0x11L,372,10}}}};
    int i, j, k;
    l_1381[0][2][5] = g_119;
    p_32 = 0L;
    g_1111 = p_33;
    return g_433[4];
}







static unsigned char func_38(int p_39, int p_40, short p_41, int p_42)
{
    int l_1108[5][1][6] = {{{(-5L),8L,(-9L),(-9L),8L,(-5L)}},{{0x542BCD9CL,(-5L),(-9L),(-5L),0x542BCD9CL,0x542BCD9CL}},{{3L,(-5L),(-5L),3L,8L,3L}},{{3L,8L,3L,(-5L),(-5L),3L}},{{0x542BCD9CL,0x542BCD9CL,(-5L),(-9L),(-5L),0x542BCD9CL}}};
    struct S0 l_1112[8][10] = {{{-0,0x05L,-692,1},{-0,0x05L,-692,1},{-0,0x4FL,959,13},{-0,0x05L,-692,1},{-0,0x05L,-692,1},{-0,0x4FL,959,13},{-0,0x05L,-692,1},{-0,0x05L,-692,1},{-0,0x4FL,959,13},{-0,0x05L,-692,1}},{{-0,0x05L,-692,1},{0,-8L,21,8},{0,-8L,21,8},{-0,0x05L,-692,1},{0,-8L,21,8},{0,-8L,21,8},{-0,0x05L,-692,1},{0,-8L,21,8},{0,-8L,21,8},{-0,0x05L,-692,1}},{{0,-8L,21,8},{-0,0x05L,-692,1},{0,-8L,21,8},{0,-8L,21,8},{-0,0x05L,-692,1},{0,-8L,21,8},{0,-8L,21,8},{-0,0x05L,-692,1},{0,-8L,21,8},{0,-8L,21,8}},{{-0,0x05L,-692,1},{-0,0x05L,-692,1},{-0,0x4FL,959,13},{-0,0x05L,-692,1},{-0,0x05L,-692,1},{-0,0x4FL,959,13},{-0,0x05L,-692,1},{-0,0x05L,-692,1},{-0,0x4FL,959,13},{-0,0x05L,-692,1}},{{-0,0x05L,-692,1},{0,-8L,21,8},{0,-8L,21,8},{-0,0x05L,-692,1},{0,-8L,21,8},{0,-8L,21,8},{-0,0x05L,-692,1},{0,-8L,21,8},{0,-8L,21,8},{-0,0x05L,-692,1}},{{0,-8L,21,8},{-0,0x05L,-692,1},{0,-8L,21,8},{0,-8L,21,8},{-0,0x05L,-692,1},{0,-8L,21,8},{0,-8L,21,8},{-0,0x05L,-692,1},{0,-8L,21,8},{0,-8L,21,8}},{{-0,0x05L,-692,1},{-0,0x05L,-692,1},{-0,0x4FL,959,13},{-0,0x05L,-692,1},{-0,0x05L,-692,1},{-0,0x4FL,959,13},{-0,0x05L,-692,1},{-0,0x05L,-692,1},{-0,0x4FL,959,13},{-0,0x05L,-692,1}},{{-0,0x05L,-692,1},{0,-8L,21,8},{0,-8L,21,8},{-0,0x05L,-692,1},{0,-8L,21,8},{0,-8L,21,8},{-0,0x05L,-692,1},{0,-8L,21,8},{0,-8L,21,8},{-0,0x05L,-692,1}}};
    struct S0 l_1117 = {0,0L,287,5};
    int l_1151 = 0xDB9B9297L;
    int l_1152[1];
    unsigned l_1153[4][10] = {{4294967295UL,1UL,1UL,4294967295UL,2UL,0x906A4BB6L,2UL,4294967295UL,1UL,1UL},{2UL,1UL,4294967294UL,8UL,8UL,4294967294UL,1UL,2UL,1UL,4294967294UL},{0x906A4BB6L,4294967295UL,8UL,4294967295UL,0x906A4BB6L,4294967294UL,4294967294UL,0x906A4BB6L,4294967295UL,8UL},{2UL,2UL,8UL,8UL,1UL,8UL,4294967288UL,4294967295UL,4294967295UL,4294967288UL}};
    unsigned l_1179[6];
    short l_1235 = 0x2FD3L;
    short l_1316 = 5L;
    unsigned char l_1378 = 9UL;
    struct S0 l_1379 = {-0,0x87L,1014,3};
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_1152[i] = 0x524BC882L;
    for (i = 0; i < 6; i++)
        l_1179[i] = 4294967294UL;
    for (g_237 = 0; g_237 < 5; g_237 += 1)
    {
        for (g_288 = 0; g_288 < 2; g_288 += 1)
        {
            for (g_133 = 0; g_133 < 4; g_133 += 1)
            {
                g_784[g_237][g_288][g_133] = 0L;
            }
        }
    }
    if ((+((l_1108[3][0][5] > (safe_sub_func_int16_t_s_s(g_606[1][3].f2, ((func_77(func_77(l_1108[2][0][4], ((l_1108[3][0][5] >= 251UL) >= ((((p_41 <= p_40) > (2UL & p_40)) || p_39) != g_92)), p_42, p_42, g_1111), l_1108[4][0][5], l_1108[1][0][2], p_39, l_1112[5][5]) > 1L) || 0x1A13L)))) == p_39)))
    {
        unsigned l_1115 = 0x62DDFCC6L;
        unsigned short l_1116 = 0x3265L;
        int l_1139 = (-10L);
        int l_1140 = 0xCD5DB409L;
        int l_1141 = 2L;
        int l_1142 = 0xAC83F7F3L;
        int l_1143 = 0x21CD77EEL;
        int l_1144 = (-1L);
        int l_1145 = 5L;
        int l_1146 = 0L;
        int l_1147 = (-10L);
        int l_1148 = 0x9DD54883L;
        int l_1149[7][10] = {{0xBE05CB8DL,0x8B4305B5L,0L,0xBA0BE229L,0x4A97E738L,0L,0x4A97E738L,0xBA0BE229L,0L,0x8B4305B5L},{0xBE05CB8DL,0x8B4305B5L,0L,0xBA0BE229L,0x4A97E738L,0L,0x4A97E738L,0xBA0BE229L,0L,0x8B4305B5L},{0xBE05CB8DL,0x8B4305B5L,0L,0xBA0BE229L,0x4A97E738L,0L,0x4A97E738L,0xBA0BE229L,0L,0x8B4305B5L},{0xBE05CB8DL,0x8B4305B5L,0L,0xBA0BE229L,0x4A97E738L,0L,0x4A97E738L,0xBA0BE229L,0L,0x8B4305B5L},{0xBE05CB8DL,0x8B4305B5L,0L,0xBA0BE229L,0x4A97E738L,0L,0x4A97E738L,0xBA0BE229L,0L,0x8B4305B5L},{0xBE05CB8DL,0x8B4305B5L,0L,0xBA0BE229L,0x4A97E738L,0L,0x4A97E738L,0xBA0BE229L,0L,0x8B4305B5L},{0xBE05CB8DL,0x8B4305B5L,0L,0xBA0BE229L,0x4A97E738L,0L,0x4A97E738L,0xBA0BE229L,0L,0x8B4305B5L}};
        int l_1150[2][5] = {{0x7EEEA09FL,0xDA2B9502L,0xDA2B9502L,0x7EEEA09FL,0xDA2B9502L},{0x7EEEA09FL,0x7EEEA09FL,0xFF958D6AL,0x7EEEA09FL,0x7EEEA09FL}};
        int i, j;
        g_433[2] = (5UL > func_77(((l_1112[5][5].f2 > (safe_sub_func_uint16_t_u_u(((func_62(g_133, g_4[0][0], (g_606[1][3].f1 || l_1115)) <= (((l_1115 ^ g_83[3][0]) && g_306[0][1][3]) == l_1116)) && 65533UL), 1UL))) < g_1017), g_784[1][0][3], g_784[0][0][1], p_39, l_1117));
        l_1117 = g_1111;
        for (g_119.f1 = 7; (g_119.f1 == 15); g_119.f1 = safe_add_func_int16_t_s_s(g_119.f1, 8))
        {
            if ((((((safe_mod_func_uint16_t_u_u((p_39 != ((safe_add_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s(l_1117.f3, 13)), l_1117.f2)) && p_41)), p_39)) & (safe_unary_minus_func_uint32_t_u((0x3D99L < (safe_lshift_func_int8_t_s_s((((65535UL == (safe_lshift_func_uint8_t_u_u((g_133 > ((~(safe_sub_func_int8_t_s_s((safe_mod_func_uint16_t_u_u(p_42, 0x42BEL)), g_119.f2))) && g_130[0])), p_42))) != 7L) >= p_39), l_1115)))))) && g_369) || g_3) | 0xCEL))
            {
                for (g_133 = 0; (g_133 != 37); g_133++)
                {
                    g_119.f2 = (-1L);
                    for (g_67 = 0; (g_67 >= 21); g_67 = safe_add_func_int8_t_s_s(g_67, 7))
                    {
                        p_42 |= 1L;
                        if (g_3)
                            continue;
                    }
                }
            }
            else
            {
                return p_42;
            }
        }
        l_1153[0][2]--;
    }
    else
    {
        unsigned char l_1156 = 0xCEL;
        unsigned l_1176 = 4294967287UL;
        struct S0 l_1177 = {0,-1L,484,0};
        int l_1211 = (-3L);
        int l_1212[10][6] = {{0xEB73EFC4L,0xAE4DF085L,(-6L),(-6L),0xAE4DF085L,0xEB73EFC4L},{0x6C15CA8CL,0xAA0C7C64L,0x6C15CA8CL,(-6L),(-8L),0x8BE7C732L},{0xDB836B22L,0xCDF4A130L,(-6L),0xDB836B22L,0xAA0C7C64L,0xDB836B22L},{0xDB836B22L,0xAA0C7C64L,0xDB836B22L,(-6L),0xCDF4A130L,0xDB836B22L},{0x8BE7C732L,(-8L),(-6L),0x6C15CA8CL,0xCDF4A130L,0x8BE7C732L},{(-6L),0xAA0C7C64L,0x6C15CA8CL,0x6C15CA8CL,0xAA0C7C64L,(-6L)},{0x8BE7C732L,0xCDF4A130L,0x6C15CA8CL,(-6L),(-8L),0x8BE7C732L},{0xDB836B22L,0xCDF4A130L,(-6L),0xDB836B22L,0xAA0C7C64L,0xDB836B22L},{0xDB836B22L,0xAA0C7C64L,0xDB836B22L,(-6L),0xCDF4A130L,0xDB836B22L},{0x8BE7C732L,(-8L),(-6L),0x6C15CA8CL,0xCDF4A130L,0x8BE7C732L}};
        short l_1312[6] = {(-1L),0xFDA1L,(-1L),(-1L),0xFDA1L,(-1L)};
        char l_1354[2];
        unsigned short l_1356 = 0xA5E7L;
        int i, j;
        for (i = 0; i < 2; i++)
            l_1354[i] = 0xBCL;
        if (((p_42 || (l_1156 <= ((g_1111.f1 <= (safe_lshift_func_uint8_t_u_s(func_52(func_45(((safe_sub_func_int16_t_s_s((safe_sub_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u(((g_119.f1 < l_1156) > g_606[1][3].f3), 4)), 0x5F71L)), g_3)) && g_784[0][1][0]), g_784[2][0][1]), g_1111.f3, g_130[0], p_40), g_1111.f1))) & 254UL))) || p_39))
        {
            char l_1165 = 0L;
            int l_1178[1];
            struct S0 l_1276 = {-0,0x37L,-508,12};
            int i;
            for (i = 0; i < 1; i++)
                l_1178[i] = 0L;
            g_606[1][3].f0 ^= l_1165;
            if (g_606[1][3].f0)
            {
                short l_1168 = 0L;
                g_606[1][3] = g_1111;
                for (p_39 = 0; (p_39 >= 0); p_39 -= 1)
                {
                    l_1117.f2 &= p_42;
                    if (l_1156)
                        continue;
                    return l_1165;
                }
                g_1111 = g_606[1][3];
                if (func_45(g_119.f1, g_366))
                {
                    p_42 = ((safe_add_func_uint32_t_u_u(l_1168, func_77(g_369, ((((g_467 ^ g_130[0]) & 0L) ^ g_1017) > (safe_sub_func_int8_t_s_s((safe_sub_func_int8_t_s_s(0x2FL, (safe_unary_minus_func_int16_t_s((p_39 ^ (safe_sub_func_int32_t_s_s(l_1168, p_41))))))), p_41))), l_1176, g_462, l_1177))) || g_130[0]);
                }
                else
                {
                    l_1179[3]--;
                    g_606[1][3] = g_119;
                    g_947[0][5] = ((0xD3L >= 246UL) == g_369);
                }
            }
            else
            {
                short l_1184 = (-5L);
                g_433[2] = func_52(p_39, (safe_add_func_uint32_t_u_u(g_949, (l_1184 < (safe_rshift_func_int16_t_s_s((((255UL != g_1017) > ((safe_sub_func_int32_t_s_s((safe_rshift_func_int16_t_s_s(((p_39 && ((safe_add_func_int16_t_s_s(func_77(l_1176, (0UL < ((safe_add_func_uint8_t_u_u(g_369, p_41)) & l_1184)), l_1178[0], l_1184, g_606[1][3]), 65535UL)) & 6UL)) <= g_606[1][3].f3), p_41)), g_366)) | g_3)) > p_40), p_41))))), l_1178[0], g_462);
                g_947[0][2] ^= (+p_39);
                return l_1156;
            }
            for (l_1177.f1 = 2; (l_1177.f1 >= 0); l_1177.f1 -= 1)
            {
                int l_1219[2];
                int l_1220 = 1L;
                int l_1221 = 2L;
                int i;
                for (i = 0; i < 2; i++)
                    l_1219[i] = 0x8A70B416L;
                for (p_40 = 0; (p_40 <= 2); p_40 += 1)
                {
                    struct S0 l_1195[1][5] = {{{0,-8L,298,7},{0,-8L,298,7},{0,-8L,298,7},{0,-8L,298,7},{0,-8L,298,7}}};
                    int i, j;
                    for (g_467 = 0; (g_467 <= 2); g_467 += 1)
                    {
                        int i, j;
                        g_606[l_1177.f1][(p_40 + 4)] = l_1195[0][1];
                        l_1177.f0 |= (((2L || l_1153[2][1]) ^ (!((g_1111.f1 < l_1195[0][1].f0) | 65529UL))) > (safe_rshift_func_int16_t_s_u(((g_111 != (g_119.f2 < (!(safe_unary_minus_func_uint32_t_u((((((((safe_lshift_func_uint8_t_u_s(p_41, 0)) >= l_1165) < p_39) == 0x88779BA2L) & p_42) >= 1UL) <= 1UL)))))) & 0xC6L), 15)));
                    }
                    return l_1178[0];
                }
                if (l_1156)
                {
                    int l_1209[10] = {0xA8CF9E3AL,(-7L),(-7L),0xA8CF9E3AL,(-7L),(-7L),0xA8CF9E3AL,(-7L),(-7L),0xA8CF9E3AL};
                    unsigned short l_1222 = 0x1882L;
                    struct S0 l_1238 = {-0,0xD8L,546,11};
                    int i;
                    if ((((safe_add_func_uint32_t_u_u(l_1178[0], (p_39 >= func_52((safe_lshift_func_uint8_t_u_u(((safe_sub_func_int16_t_s_s(p_41, ((l_1177.f1 & l_1117.f3) >= g_1017))) < ((l_1177.f2 < (safe_lshift_func_int16_t_s_s(g_3, (g_1111.f2 || 0xE21CD7F8L)))) || l_1112[5][5].f2)), p_39)), g_927, l_1209[0], g_947[0][0])))) >= 0x358CL) || l_1209[1]))
                    {
                        int l_1210 = (-6L);
                        int l_1213 = 0x336D4FF6L;
                        int l_1214 = (-1L);
                        int l_1215 = 0x95ED644DL;
                        int l_1216 = 0x15239371L;
                        int l_1217 = 1L;
                        int l_1218 = 0x82156AF0L;
                        l_1222++;
                        if (g_236)
                            break;
                        l_1152[0] = l_1212[0][4];
                        l_1221 = 0xBDB535F4L;
                    }
                    else
                    {
                        unsigned l_1225 = 4294967287UL;
                        g_1017 = l_1219[1];
                        l_1225++;
                        l_1178[0] &= (((func_77(((func_77((safe_unary_minus_func_int16_t_s((func_52((func_45((((g_746 != ((((p_39 != (safe_lshift_func_int16_t_s_s(p_40, 15))) >= 4UL) != (safe_add_func_int16_t_s_s((0xB314L <= func_45(((safe_add_func_uint16_t_u_u((func_62((((l_1235 & (safe_lshift_func_uint8_t_u_s((p_42 & (g_606[1][3].f3 || (g_83[1][3] || g_947[0][5]))), l_1222))) >= g_369) || 0x7CL), g_92, l_1165) > 0xF6B2L), 0x51D1L)) > p_39), l_1209[8])), l_1235))) >= p_40)) & l_1177.f2) >= g_83[2][1]), l_1220) < l_1219[1]), g_949, g_1111.f2, p_39) || 0UL))), l_1117.f3, g_306[2][6][3], l_1221, l_1238) ^ 0x54DCL) != 0x3EL), l_1222, g_746, l_1117.f2, g_1111) != g_746) >= 0x21L) || g_111);
                        if (p_39)
                            break;
                    }
                }
                else
                {
                    unsigned l_1239 = 4294967293UL;
                    int l_1257 = (-2L);
                    int l_1258 = 0x1C2A3499L;
                    for (g_237 = 0; (g_237 <= 2); g_237 += 1)
                    {
                        p_42 = g_947[0][2];
                    }
                    --l_1239;
                    if (((((l_1219[1] && (safe_lshift_func_uint16_t_u_s(func_62(((safe_sub_func_uint32_t_u_u((safe_unary_minus_func_uint16_t_u(p_41)), (((g_1111.f2 < l_1152[0]) == p_42) >= ((safe_lshift_func_uint8_t_u_s(254UL, 1)) >= ((((~(safe_unary_minus_func_int8_t_s((safe_mod_func_int32_t_s_s(g_746, (l_1239 ^ (safe_lshift_func_uint8_t_u_u(g_1111.f0, g_130[0])))))))) >= 0x66BBL) >= 0x4E77L) < 65533UL))))) > g_1111.f0), l_1176, l_1178[0]), 10))) | 0UL) > 0xDEL) >= 0L))
                    {
                        unsigned l_1256 = 4294967294UL;
                        p_42 = l_1256;
                    }
                    else
                    {
                        unsigned short l_1259[9] = {1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL};
                        int l_1268 = (-1L);
                        int i;
                        p_42 ^= 0x7963243FL;
                        ++l_1259[3];
                        g_606[1][3] = l_1177;
                        l_1268 = (safe_sub_func_int16_t_s_s(((((safe_add_func_int8_t_s_s(p_41, (g_83[2][1] > (5UL > func_45(g_106, l_1259[6]))))) || g_433[0]) ^ ((safe_lshift_func_int16_t_s_s(((l_1178[0] == 0x0A70L) && 6L), 9)) && l_1179[3])) != l_1258), 0xB717L));
                    }
                }
                if ((g_784[2][0][1] <= (0xBAL > p_40)))
                {
                    unsigned l_1275 = 7UL;
                    struct S0 l_1277 = {0,0x69L,-396,6};
                    if ((safe_rshift_func_int8_t_s_u(((((g_133 && ((p_39 >= (~0xB7E4D00AL)) | g_947[0][1])) > g_1111.f0) ^ (safe_add_func_uint16_t_u_u(g_746, (p_41 > ((-1L) <= (((safe_sub_func_int8_t_s_s((0xEBL | 1L), l_1117.f1)) | (-8L)) <= 0xA13B5CB2L)))))) && g_947[0][2]), p_42)))
                    {
                        return l_1178[0];
                    }
                    else
                    {
                        if (l_1275)
                            break;
                    }
                    l_1276 = l_1276;
                    g_119 = l_1277;
                }
                else
                {
                    char l_1290 = 0xE0L;
                    int l_1295 = 0x34E8E731L;
                    l_1276.f0 |= l_1178[0];
                    for (g_92 = 0; (g_92 <= 2); g_92 += 1)
                    {
                        int i, j;
                        g_119.f2 = l_1178[0];
                        g_606[l_1177.f1][(l_1177.f1 + 2)] = g_606[1][3];
                    }
                    l_1290 = func_77(p_40, (safe_lshift_func_int16_t_s_s((g_116 < (safe_sub_func_uint8_t_u_u(0xDBL, (p_40 & (l_1276.f1 != g_1111.f3))))), 6)), (((safe_rshift_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u(((safe_sub_func_uint8_t_u_u(((p_40 < 0L) ^ p_39), g_92)) != p_40), 0x2DL)), 10)) | g_237) & g_433[2]), p_41, g_606[1][3]);
                    if (((safe_mod_func_uint32_t_u_u(((safe_rshift_func_uint16_t_u_s((g_119.f2 <= l_1276.f0), (0x2DL ^ (l_1151 <= ((l_1276.f1 > l_1112[5][5].f3) == 0x10L))))) >= p_41), 0x5AACCFCEL)) < p_39))
                    {
                        l_1178[0] = g_606[1][3].f0;
                        return g_606[1][3].f3;
                    }
                    else
                    {
                        unsigned short l_1296 = 0x66D5L;
                        l_1295 = g_484;
                        if (g_116)
                            continue;
                        l_1296--;
                    }
                }
            }
        }
        else
        {
            short l_1299 = 5L;
            short l_1349 = 0x0E45L;
            int l_1352 = 0x9CACFC76L;
            int l_1353 = (-1L);
            p_42 = (~func_62((l_1299 != (1UL || (g_130[0] != g_784[2][0][1]))), p_39, ((((safe_rshift_func_int16_t_s_u((safe_rshift_func_uint8_t_u_u(((safe_sub_func_uint16_t_u_u((safe_add_func_int32_t_s_s(((l_1299 > g_927) >= ((safe_sub_func_int16_t_s_s((func_45(l_1299, (safe_mod_func_int16_t_s_s(l_1312[0], l_1176))) <= p_41), 65531UL)) >= p_39)), g_306[2][2][0])), 8UL)) <= 0UL), p_40)), 2)) | l_1117.f1) >= g_1313) & 65535UL)));
            g_433[7] ^= ((safe_add_func_int8_t_s_s(g_236, l_1316)) >= p_42);
            for (g_237 = 0; (g_237 != 49); ++g_237)
            {
                int l_1351 = (-1L);
                for (g_119.f1 = (-3); (g_119.f1 == (-28)); g_119.f1 = safe_sub_func_uint8_t_u_u(g_119.f1, 1))
                {
                    int l_1323[4][1];
                    char l_1340 = (-4L);
                    struct S0 l_1350[2] = {{-0,0xECL,-674,9},{-0,0xECL,-674,9}};
                    int l_1355 = 0x72FE3362L;
                    int i, j;
                    for (i = 0; i < 4; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_1323[i][j] = (-1L);
                    }
                    if ((!(safe_add_func_uint32_t_u_u(p_41, l_1323[3][0]))))
                    {
                        g_1111.f0 = (safe_lshift_func_uint16_t_u_s((safe_sub_func_uint8_t_u_u((0xD37A2C05L & (safe_lshift_func_uint8_t_u_u(g_746, (safe_rshift_func_uint16_t_u_s((((p_40 | ((safe_lshift_func_uint8_t_u_u(g_947[0][2], 5)) != (safe_sub_func_uint32_t_u_u((safe_add_func_int16_t_s_s(p_42, (safe_lshift_func_int16_t_s_s(l_1340, (p_40 >= (safe_sub_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u((safe_rshift_func_int16_t_s_s(l_1156, (safe_lshift_func_uint16_t_u_u((l_1323[3][0] != l_1323[2][0]), p_41)))), g_1111.f3)), g_784[2][0][1]))))))), p_42)))) == (-1L)) < l_1349), 3))))), 0x6FL)), 12));
                        if (g_92)
                            continue;
                    }
                    else
                    {
                        p_42 = p_40;
                        g_606[0][3] = l_1350[0];
                    }
                    l_1356++;
                }
            }
        }
        g_1111.f0 |= (((g_306[2][2][0] <= (p_42 >= (safe_sub_func_int8_t_s_s((((safe_sub_func_uint8_t_u_u((func_62((safe_mod_func_uint8_t_u_u(((safe_rshift_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_s(g_1111.f1, (safe_mod_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u(func_52((~func_77(g_130[0], func_45(g_927, (safe_lshift_func_int16_t_s_s((safe_unary_minus_func_int16_t_s(((p_42 <= l_1177.f0) != l_1378))), 4))), g_130[0], g_1313, l_1112[2][0])), g_306[2][2][0], l_1153[1][5], g_927), 0)), 0xD2C7L)))), p_42)), 3)) < 0x65BFL), 0xE4L)), l_1177.f0, g_4[2][2]) < 0xD9CC90E2L), g_4[4][1])) <= p_40) && 0L), 1UL)))) >= g_306[2][2][0]) ^ l_1177.f0);
        l_1112[5][5] = l_1379;
    }
    return g_83[3][2];
}







static unsigned short func_45(char p_46, char p_47)
{
    int l_61 = 0xF62392E1L;
    unsigned short l_66 = 0xD6F6L;
    unsigned short l_983 = 4UL;
    int l_1079 = 0xCE880CEFL;
    unsigned l_1089[9] = {4294967286UL,0xDA1ADEA0L,4294967286UL,0xDA1ADEA0L,4294967286UL,0xDA1ADEA0L,4294967286UL,0xDA1ADEA0L,4294967286UL};
    int i;
    l_1079 &= ((((safe_rshift_func_int8_t_s_s((safe_add_func_int8_t_s_s(func_52((((-8L) && (safe_mod_func_uint32_t_u_u((safe_mod_func_uint8_t_u_u(l_61, func_62(((l_66 == l_66) == (-1L)), p_47, g_4[4][2]))), g_949))) <= l_66), g_306[2][5][1], p_47, l_983), l_66)), 7)) || l_61) >= p_47) != l_983);
    if ((g_947[0][2] >= l_66))
    {
        unsigned l_1090 = 8UL;
        for (g_111 = 6; (g_111 == 4); --g_111)
        {
            int l_1086 = 0L;
            l_1089[4] ^= ((safe_sub_func_uint32_t_u_u((safe_sub_func_uint8_t_u_u(l_1086, g_606[1][3].f0)), (0x728BA1F6L >= (safe_rshift_func_int16_t_s_u(l_61, p_46))))) >= l_1079);
            return p_47;
        }
        --l_1090;
    }
    else
    {
        int l_1102 = 0x03A0FFB5L;
        for (g_116 = 4; (g_116 >= 33); g_116 = safe_add_func_int16_t_s_s(g_116, 2))
        {
            struct S0 l_1095[5][9] = {{{-0,0x39L,-252,15},{-0,-6L,-984,8},{-0,0x00L,717,7},{0,0xA3L,468,14},{-0,0L,670,3},{-0,0xC4L,-936,5},{-0,0xA5L,-769,1},{-0,0x02L,-861,12},{0,1L,-838,15}},{{-0,0x00L,717,7},{-0,-6L,-984,8},{-0,0x39L,-252,15},{-0,0x02L,-861,12},{-0,0x02L,-861,12},{-0,0x39L,-252,15},{-0,-6L,-984,8},{-0,0x00L,717,7},{0,0x8EL,-115,3}},{{0,5L,973,12},{0,0x50L,476,6},{-0,0x00L,717,7},{-0,0x02L,-861,12},{0,0xDFL,-18,10},{0,0x8EL,-115,3},{-0,1L,1,15},{-0,0L,-651,13},{-0,0xC4L,-936,5}},{{0,0x8EL,-115,3},{-0,0x75L,-950,1},{-0,0xC4L,-936,5},{0,0xA3L,468,14},{0,5L,973,12},{0,0xA3L,468,14},{-0,0xC4L,-936,5},{-0,0x75L,-950,1},{0,0x8EL,-115,3}},{{-0,0xA5L,-769,1},{0,0xA3L,468,14},{0,0xDFL,-18,10},{-0,0L,670,3},{0,5L,973,12},{-0,1L,1,15},{0,0x50L,476,6},{-0,0x39L,-252,15},{0,1L,-838,15}}};
            int i, j;
            if ((g_133 && 0x1EL))
            {
                l_1095[1][0] = g_606[1][3];
                l_1095[1][0].f0 ^= (safe_sub_func_int32_t_s_s(g_111, ((safe_sub_func_uint32_t_u_u(l_1089[1], p_46)) ^ g_119.f0)));
            }
            else
            {
                l_61 = (g_3 == l_1079);
            }
            l_1079 = (g_236 >= ((safe_add_func_int16_t_s_s(l_1102, (safe_mod_func_int32_t_s_s(((((p_47 & (safe_sub_func_int8_t_s_s(l_1095[1][0].f1, l_1095[1][0].f0))) != l_1089[0]) != (((p_46 & (g_606[1][3].f1 > (l_983 > 65535UL))) || 3UL) <= l_1095[1][0].f0)) ^ g_369), g_106)))) < g_484));
        }
    }
    return g_119.f0;
}







static char func_52(unsigned short p_53, unsigned char p_54, int p_55, unsigned char p_56)
{
    int l_984 = 0xFE9BD21BL;
    struct S0 l_992 = {0,-1L,127,15};
    l_984 ^= p_56;
    l_984 = ((safe_mod_func_uint32_t_u_u(g_83[0][0], (safe_sub_func_uint32_t_u_u(((safe_sub_func_int32_t_s_s(0L, (((safe_unary_minus_func_int8_t_s(((~g_467) ^ (g_130[0] & (((func_77(g_83[3][4], p_53, (func_77(g_366, p_54, (l_984 & g_67), g_467, g_606[1][3]) && 0xC6DBL), l_984, l_992) | 0x0DL) < 0x131EL) || g_237))))) && p_55) < 1L))) > p_55), g_433[2])))) && 0x079C4F57L);
    if ((g_784[3][1][1] != l_992.f1))
    {
        int l_994 = (-1L);
        struct S0 l_1008 = {-0,0L,903,9};
        short l_1009 = (-7L);
        int l_1021 = 1L;
        short l_1053 = (-7L);
lbl_1077:
        if (p_54)
        {
            unsigned l_993 = 4294967291UL;
            g_947[0][2] ^= (+g_306[2][2][0]);
            g_433[1] = l_993;
            l_994 &= 0x05BC94EBL;
        }
        else
        {
            unsigned l_1007 = 0x38CBF8C1L;
            int l_1022 = (-1L);
            int l_1028[1];
            int l_1072 = 1L;
            int l_1073 = 0L;
            int i;
            for (i = 0; i < 1; i++)
                l_1028[i] = 4L;
            if (((0xA4L == func_62(((g_4[2][0] <= (safe_lshift_func_int8_t_s_u(func_62((p_54 || 0x6CL), (g_462 > (l_994 | (((safe_rshift_func_uint16_t_u_s(l_992.f3, (safe_mod_func_uint16_t_u_u(((((safe_mod_func_uint16_t_u_u(((safe_rshift_func_uint8_t_u_s((func_77(g_927, (safe_add_func_uint32_t_u_u((p_54 && 0xF9L), g_784[1][1][0])), l_1007, l_1007, l_1008) & 0xAAL), 2)) && l_992.f3), l_992.f0)) != p_55) > l_1008.f1) > 0xF06DL), (-5L))))) > p_53) && g_236))), p_54), p_56))) >= 0x607B8063L), l_1007, l_1008.f0)) >= 0x00L))
            {
                short l_1010 = 1L;
                int l_1025 = 0x8DD3FC9BL;
                struct S0 l_1048 = {0,-1L,-632,1};
                if (l_992.f3)
                {
                    unsigned l_1011 = 0x7B6733AEL;
                    l_1011 = (g_237 | ((4UL > (l_1009 >= l_1010)) == p_53));
                }
                else
                {
                    if (((safe_mod_func_int16_t_s_s((g_369 == (l_1007 & (safe_unary_minus_func_uint8_t_u(g_119.f0)))), ((g_130[0] | ((safe_rshift_func_int16_t_s_s(((p_56 ^ 0UL) && p_56), 4)) || (g_306[2][2][0] <= (5L != p_54)))) ^ p_55))) < 0x0F80L))
                    {
                        g_1017 ^= ((-4L) <= (p_54 == func_62(p_54, p_53, p_55)));
                    }
                    else
                    {
                        return g_927;
                    }
                }
                for (l_992.f1 = 0; (l_992.f1 == 23); l_992.f1 = safe_add_func_uint8_t_u_u(l_992.f1, 5))
                {
                    unsigned l_1020[4][2] = {{4294967295UL,4294967295UL},{4294967295UL,4294967295UL},{4294967295UL,4294967295UL},{4294967295UL,4294967295UL}};
                    int i, j;
                    l_992.f0 = (l_984 & l_1008.f0);
                    return l_1020[3][1];
                }
                if (g_111)
                    goto lbl_1077;
                if (p_55)
                {
                    l_1022 = (p_54 == l_1021);
                    l_1025 = func_62(g_237, ((safe_sub_func_int16_t_s_s(p_53, g_111)) >= g_236), l_1007);
                    for (l_1025 = (-20); (l_1025 <= 23); l_1025 = safe_add_func_int32_t_s_s(l_1025, 2))
                    {
                        l_1028[0] |= l_1007;
                        l_1021 = l_1010;
                    }
                }
                else
                {
                    unsigned short l_1041 = 0x4CBDL;
                    int l_1044[9][7][4] = {{{(-3L),0x4377EFECL,0x3C14BEDAL,(-1L)},{0x991CDEAAL,1L,0x21EC13FFL,0x3160337EL},{(-1L),(-7L),0x67419EADL,0x4A690CC6L},{0x4377EFECL,0L,0L,0x6EE738FBL},{0xAF75FC4DL,0x991CDEAAL,(-10L),8L},{9L,0x1D5392ECL,0x9FE35B7BL,0x8B1C28DDL},{(-2L),(-1L),3L,0x5E422D82L}},{{(-6L),0xD98CB9AEL,(-1L),(-1L)},{1L,1L,0x11D72C0CL,0xC145D909L},{(-1L),0x8B1C28DDL,1L,(-5L)},{0xCE572DDFL,0x426A111FL,1L,1L},{1L,0xCE572DDFL,0x8A7F5CAEL,1L},{0xCE572DDFL,0x3A7BF5A2L,0x3C14BEDAL,9L},{0x41408E16L,1L,1L,0xF72C1AC1L}},{{1L,(-3L),0xE5E60C4CL,0x67419EADL},{0x56650A5CL,0xFF986334L,0xCAB963C6L,0x3A7BF5A2L},{0xBE3660FBL,0x3C14BEDAL,(-6L),0xD98CB9AEL},{0xF72C1AC1L,0x4A690CC6L,(-1L),0xBE3660FBL},{1L,0xB3B4A673L,0x4F67B968L,0xE5E60C4CL},{0x7BAC41C5L,(-1L),0L,6L},{9L,(-1L),0xE03A36A7L,0xEF49B6EEL}},{{0L,1L,1L,9L},{(-2L),0L,0x21EC13FFL,9L},{0x5E422D82L,(-3L),9L,0x991CDEAAL},{(-2L),0x8A7F5CAEL,0x54DBFF12L,(-2L)},{(-10L),0x9FE35B7BL,(-1L),0xE4032FAEL},{(-5L),0xF69AE384L,0xD6D83B4DL,0x6EE738FBL},{0xEC3A3625L,0xA1810A2BL,0L,(-6L)}},{{(-1L),0x7D88339BL,0x11D72C0CL,1L},{0x0786C7D4L,0x11D72C0CL,9L,0L},{(-6L),(-2L),0xEC3A3625L,0x56650A5CL},{0L,0x4377EFECL,0x5E422D82L,1L},{8L,0L,0L,0x36D34D70L},{0x3C14BEDAL,(-1L),1L,(-1L)},{1L,1L,(-1L),8L}},{{9L,1L,(-5L),0L},{(-7L),0x4F67B968L,1L,(-1L)},{(-7L),0x8D163B9FL,(-5L),1L},{9L,(-1L),1L,1L},{0x8A7F5CAEL,0x991CDEAAL,0x11D72C0CL,0x36D34D70L},{0xC145D909L,0xCAB963C6L,1L,0xEC3A3625L},{0x21A66612L,6L,0x36D34D70L,0xA1810A2BL}},{{0xCE572DDFL,0x37A9D48FL,(-6L),0xBE3660FBL},{(-3L),1L,(-7L),1L},{0xBE3660FBL,0x6B7A9371L,0L,0x41408E16L},{0x4A690CC6L,1L,0x3A7BF5A2L,(-1L)},{(-6L),0x8A7F5CAEL,(-1L),0x6C04116DL},{3L,0L,0x4A690CC6L,0x21EC13FFL},{0x606F7CF5L,0xE03A36A7L,(-6L),0xF69AE384L}},{{0L,1L,(-1L),0x4377EFECL},{0x36D34D70L,(-2L),8L,0x4F67B968L},{0xEF49B6EEL,(-10L),0x991CDEAAL,(-6L)},{0x9FE35B7BL,0xBE3660FBL,0x0786C7D4L,0xAF75FC4DL},{0x8D163B9FL,1L,0x9FE35B7BL,0x6EE738FBL},{(-2L),0x21A66612L,0L,0x3F162B97L},{0x8B1C28DDL,(-1L),(-1L),0x7D88339BL}},{{0xE5E60C4CL,(-6L),(-3L),0L},{1L,(-1L),(-3L),(-1L)},{0xFF986334L,0xAF75FC4DL,0x67419EADL,(-2L)},{0x120012BAL,1L,1L,0x120012BAL},{1L,2L,9L,0x3160337EL},{(-1L),0L,0x3C14BEDAL,0L},{0x426A111FL,1L,1L,0L}}};
                    unsigned char l_1068 = 255UL;
                    int i, j, k;
                    l_992.f2 &= (safe_sub_func_uint32_t_u_u((g_606[1][3].f0 >= g_606[1][3].f3), (safe_add_func_int16_t_s_s(((safe_add_func_uint16_t_u_u(g_236, g_130[0])) <= l_1028[0]), (((g_433[3] && (safe_lshift_func_uint16_t_u_s((p_56 && (g_949 != ((((safe_mod_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u(0x2D6AL, g_106)), l_1028[0])) | 0xFBE1L) == 0L) < 0x3DAB66D2L))), g_83[2][3]))) ^ 2L) != 0xEF5DL)))));
                    if ((p_55 > ((g_467 || l_992.f3) || (l_1041 != ((g_947[0][3] <= ((safe_rshift_func_uint8_t_u_u((g_306[2][2][0] && p_53), 7)) ^ l_994)) >= (-5L))))))
                    {
                        unsigned char l_1045 = 1UL;
                        l_1045--;
                    }
                    else
                    {
                        g_606[1][3] = l_1048;
                        l_1048.f2 &= g_119.f0;
                        l_1044[8][4][1] = g_433[2];
                    }
                    l_1068 = (func_77(func_77(g_237, (safe_rshift_func_uint16_t_u_s((safe_add_func_uint16_t_u_u(l_1053, 65535UL)), 4)), (safe_rshift_func_uint16_t_u_u((safe_add_func_uint32_t_u_u((safe_mod_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u(g_1017, 0xF2F9L)), l_1028[0])), (safe_sub_func_int8_t_s_s(p_56, (safe_sub_func_int8_t_s_s(g_606[1][3].f0, ((safe_rshift_func_uint8_t_u_s((((l_992.f2 < l_1044[8][4][1]) == 1UL) || g_116), 1)) >= 65535UL))))))), 13)), l_1044[8][4][1], l_1048), g_306[7][5][3], p_54, g_130[0], g_606[0][1]) ^ g_606[1][3].f0);
                }
            }
            else
            {
                unsigned short l_1074 = 8UL;
                for (p_55 = 0; (p_55 >= 23); p_55 = safe_add_func_int8_t_s_s(p_55, 3))
                {
                    char l_1071 = 1L;
                    ++l_1074;
                }
            }
        }
        return l_992.f2;
    }
    else
    {
        unsigned l_1078 = 4294967295UL;
        return l_1078;
    }
}







static char func_62(int p_63, unsigned short p_64, unsigned char p_65)
{
    char l_70 = 6L;
    struct S0 l_84 = {-0,1L,145,0};
    unsigned l_410 = 0xDA5402FCL;
    char l_459 = 1L;
    int l_461 = 0xA1B7AEE7L;
    unsigned char l_614 = 0UL;
    int l_665 = 1L;
    int l_666 = 0xC095DD38L;
    int l_668 = 0x46D259B0L;
    int l_672 = 9L;
    int l_676 = 0x84D94FB4L;
    int l_678[1];
    short l_684 = 0x700DL;
    unsigned l_691 = 0xCFB70EA2L;
    unsigned l_726 = 0xBFA205D7L;
    struct S0 l_967 = {-0,0L,-677,15};
    int i;
    for (i = 0; i < 1; i++)
        l_678[i] = 0L;
lbl_456:
    ++g_67;
lbl_958:
    if (((((l_70 && (safe_mod_func_uint8_t_u_u((g_3 && (((-1L) > 0x6453L) || ((safe_rshift_func_int8_t_s_s(9L, 0)) == (g_3 < p_63)))), (((safe_add_func_uint16_t_u_u(func_77(((4294967293UL ^ (g_83[2][1] >= l_70)) ^ l_70), p_64, p_64, g_4[1][2], l_84), p_63)) || l_84.f0) && p_65)))) | p_64) > 0x6AC2D5D7L) && g_119.f3))
    {
        unsigned short l_399 = 0x30CAL;
        unsigned l_437 = 0xC93A240FL;
        int l_440 = 0L;
        unsigned short l_445 = 2UL;
        int l_468 = (-9L);
        unsigned short l_477 = 0xEACBL;
        g_366 ^= (l_84.f0 >= g_306[2][2][0]);
lbl_539:
        for (g_119.f1 = 0; (g_119.f1 >= 26); g_119.f1 = safe_add_func_uint32_t_u_u(g_119.f1, 7))
        {
            char l_417 = 5L;
            int l_428 = 0xD11164EAL;
            int l_431[1][3][8] = {{{0L,0x549E078DL,0xAC68DB5DL,0x549E078DL,0L,0L,0x549E078DL,0xAC68DB5DL},{0L,0L,0x549E078DL,0xAC68DB5DL,0x549E078DL,0L,0L,0x549E078DL},{0xBB00D93FL,0x549E078DL,0x549E078DL,0xBB00D93FL,1L,0xBB00D93FL,0x549E078DL,0x549E078DL}}};
            int i, j, k;
            if ((0xA7L && p_63))
            {
                l_84.f2 &= (((safe_add_func_int8_t_s_s((safe_rshift_func_int16_t_s_u(((0x90L <= (safe_rshift_func_int16_t_s_u((safe_sub_func_int8_t_s_s((safe_add_func_uint16_t_u_u((g_130[0] != p_64), (g_116 >= ((((((safe_lshift_func_int8_t_s_u((0xEA1426ADL >= p_64), 0)) >= ((!((65535UL & l_84.f1) && g_119.f2)) && l_399)) != g_119.f2) >= l_399) | p_65) <= 4294967295UL)))), 0x76L)), p_64))) < l_84.f1), 10)), p_64)) >= p_65) < 5L);
                g_236 &= (l_399 ^ 0xA5L);
            }
            else
            {
                int l_427 = 1L;
                int l_430 = 0x4C0E1AA0L;
                int l_432[6][7][3] = {{{0x8B67305FL,0L,1L},{0x9ABDCF0EL,0xE9BB7C59L,0xE9BB7C59L},{1L,0xDE5C95E5L,0x3E7F1E87L},{0x28B7BCCEL,0x9ABDCF0EL,(-1L)},{1L,0xA3EA5012L,3L},{0x9ABDCF0EL,0x28B7BCCEL,0x6DD1E354L},{0x8B67305FL,0xA3EA5012L,0x8B67305FL}},{{0xE9BB7C59L,0x9ABDCF0EL,0x380211BBL},{1L,0xDE5C95E5L,0x8B67305FL},{0x380211BBL,0xE9BB7C59L,0x6DD1E354L},{0x1EE88E77L,0L,3L},{0x380211BBL,0x380211BBL,(-1L)},{1L,(-1L),0x3E7F1E87L},{0xE9BB7C59L,0x380211BBL,0xE9BB7C59L}},{{0x8B67305FL,0L,1L},{0x9ABDCF0EL,0xE9BB7C59L,0xE9BB7C59L},{1L,0xDE5C95E5L,0x3E7F1E87L},{0x28B7BCCEL,0x9ABDCF0EL,(-1L)},{1L,0L,0L},{0x28B7BCCEL,(-1L),0x380211BBL},{0x3E7F1E87L,0L,0x3E7F1E87L}},{{0x6DD1E354L,0x28B7BCCEL,0x9ABDCF0EL},{0x1EE88E77L,(-5L),0x3E7F1E87L},{0x9ABDCF0EL,0x6DD1E354L,0x380211BBL},{3L,(-1L),0L},{0x9ABDCF0EL,0x9ABDCF0EL,7L},{0x1EE88E77L,(-7L),1L},{0x6DD1E354L,0x9ABDCF0EL,0x6DD1E354L}},{{0x3E7F1E87L,(-1L),1L},{0x28B7BCCEL,0x6DD1E354L,0x6DD1E354L},{1L,(-5L),1L},{(-1L),0x28B7BCCEL,7L},{1L,0L,0L},{0x28B7BCCEL,(-1L),0x380211BBL},{0x3E7F1E87L,0L,0x3E7F1E87L}},{{0x6DD1E354L,0x28B7BCCEL,0x9ABDCF0EL},{0x1EE88E77L,(-5L),0x3E7F1E87L},{0x9ABDCF0EL,0x6DD1E354L,0x380211BBL},{3L,(-1L),0L},{0x9ABDCF0EL,0x9ABDCF0EL,7L},{0x1EE88E77L,(-7L),1L},{0x6DD1E354L,0x9ABDCF0EL,0x6DD1E354L}}};
                unsigned l_434 = 0xD9AB2F53L;
                int i, j, k;
                if (((safe_add_func_uint16_t_u_u(l_399, ((((-1L) > (((safe_lshift_func_int8_t_s_s(((!g_288) && (p_65 <= ((safe_rshift_func_uint16_t_u_u((0x9D76L >= (safe_lshift_func_int8_t_s_u(p_63, 7))), 8)) != ((p_64 == (safe_lshift_func_int8_t_s_u((l_410 > (((safe_lshift_func_uint8_t_u_s((safe_mod_func_int8_t_s_s((safe_add_func_uint16_t_u_u(g_306[4][2][2], 0x183EL)), l_417)), l_399)) == (-9L)) != p_64)), 3))) < l_84.f2)))), 2)) != (-7L)) ^ g_119.f0)) & 0xF9E480F2L) == 5L))) && l_70))
                {
                    int l_422 = 0xB749B4CDL;
                    int l_429[1][3];
                    int i, j;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 3; j++)
                            l_429[i][j] = (-1L);
                    }
                    if (g_306[2][2][0])
                        break;
                    l_427 = ((p_65 >= ((p_64 ^ (safe_lshift_func_int16_t_s_s(g_306[1][7][3], (safe_sub_func_int8_t_s_s((l_422 != ((safe_rshift_func_uint8_t_u_u(p_63, ((safe_rshift_func_int16_t_s_s(p_64, (0xE069CBDFL < l_399))) || (l_422 < p_64)))) & 1UL)), p_63))))) & l_427)) == g_369);
                    if (p_65)
                    {
                        l_434--;
                        return l_432[2][0][1];
                    }
                    else
                    {
                        g_366 |= (((g_4[0][1] > (g_369 != 3UL)) < ((l_437 > p_63) && p_64)) && (~(9UL == l_84.f1)));
                        g_433[7] = ((g_236 & l_399) | (0x6179L > l_431[0][0][1]));
                        l_440 ^= ((safe_lshift_func_int16_t_s_u(g_116, 3)) >= (l_432[4][3][0] <= g_433[2]));
                        l_432[2][0][1] = (safe_rshift_func_int8_t_s_u(((p_63 | (safe_lshift_func_int16_t_s_u((l_445 == l_429[0][0]), l_431[0][0][1]))) ^ (g_83[2][1] & g_4[2][1])), (safe_mod_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u(g_237, (g_130[0] >= (safe_lshift_func_int16_t_s_s((safe_add_func_uint32_t_u_u(2UL, p_63)), 0))))), (-1L)))));
                    }
                    return p_64;
                }
                else
                {
                    l_84.f0 = g_119.f3;
                }
                for (l_417 = 0; (l_417 <= 0); l_417 += 1)
                {
                    for (p_64 = 0; (p_64 <= 0); p_64 += 1)
                    {
                        int i;
                        l_432[0][4][1] ^= (safe_lshift_func_int8_t_s_s(g_130[p_64], 2));
                        l_84.f0 |= (-6L);
                        if (l_410)
                            goto lbl_456;
                    }
                }
            }
            return p_65;
        }
        for (g_116 = (-18); (g_116 <= 9); g_116++)
        {
            int l_460 = 0x8284C366L;
            int l_511 = 1L;
            int l_515 = (-6L);
            int l_516[7] = {5L,5L,5L,5L,5L,5L,5L};
            int i;
            g_236 = 0L;
            ++g_462;
            for (p_64 = (-1); (p_64 > 15); p_64 = safe_add_func_uint32_t_u_u(p_64, 2))
            {
                unsigned char l_469 = 0xA4L;
                int l_476[2][4] = {{7L,7L,7L,7L},{7L,7L,7L,7L}};
                int i, j;
                l_469--;
                for (g_119.f1 = 3; (g_119.f1 >= 0); g_119.f1 -= 1)
                {
                    for (l_468 = 0; (l_468 <= 3); l_468 += 1)
                    {
                        int i;
                        g_433[2] = g_433[l_468];
                        l_460 ^= ((safe_sub_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_s(l_469, 1)), (g_288 ^ 0L))) < 0xEFL);
                    }
                    for (l_84.f1 = 1; (l_84.f1 <= 7); l_84.f1 += 1)
                    {
                        int i;
                        l_476[0][3] |= g_433[(g_119.f1 + 4)];
                        g_119.f2 = p_63;
                        l_460 |= g_4[1][2];
                    }
                }
            }
            if (g_119.f1)
            {
                l_477 = l_84.f2;
                return p_63;
            }
            else
            {
                unsigned l_497 = 4294967295UL;
                int l_514 = 0x819D40B1L;
                unsigned char l_517 = 0UL;
                for (g_67 = 0; (g_67 <= 3); g_67 += 1)
                {
                    unsigned short l_485 = 0x74D5L;
                    int l_510 = (-1L);
                    int l_512 = 0xB08C5AB1L;
                    unsigned short l_520 = 0xB0CAL;
                    if ((0x04L <= g_236))
                    {
                        int i;
                        g_433[(g_67 + 2)] = ((p_65 ^ (0x4933L <= (0x6E6DL & 0x5F97L))) & ((safe_add_func_int16_t_s_s(0x53DAL, g_433[1])) != l_445));
                        g_119 = g_119;
                    }
                    else
                    {
                        int l_482[4];
                        int l_483 = 0xE0BC62BDL;
                        int i;
                        for (i = 0; i < 4; i++)
                            l_482[i] = 6L;
                        l_440 = (safe_mod_func_uint8_t_u_u(254UL, (7L | (1L | p_65))));
                        --l_485;
                        if (g_130[0])
                            break;
                    }
                    for (g_467 = 0; (g_467 >= 0); g_467 -= 1)
                    {
                        struct S0 l_488[7][9] = {{{0,0x3EL,155,1},{0,0L,-776,12},{0,9L,428,1},{0,0L,-776,12},{0,0x3EL,155,1},{0,0x3EL,155,1},{0,0L,-776,12},{0,9L,428,1},{0,0L,-776,12}},{{0,3L,800,3},{-0,1L,44,12},{0,-2L,401,11},{0,-3L,-254,13},{-0,0L,-555,0},{-0,1L,618,11},{-0,0L,-555,0},{0,-3L,-254,13},{0,-2L,401,11}},{{-0,0xA2L,-399,12},{-0,0xA2L,-399,12},{0,9L,428,1},{0,0x3EL,155,1},{0,9L,428,1},{-0,0xA2L,-399,12},{-0,0xA2L,-399,12},{0,9L,428,1},{0,0x3EL,155,1}},{{0,0xFBL,360,13},{-0,1L,44,12},{0,0xFBL,360,13},{-0,1L,618,11},{0,3L,800,3},{-0,0x71L,-967,11},{-0,0L,-555,0},{-0,0x71L,-967,11},{0,3L,800,3}},{{0,1L,-1018,6},{0,9L,428,1},{0,9L,428,1},{0,1L,-1018,6},{0,0L,-776,12},{0,1L,-1018,6},{0,9L,428,1},{0,9L,428,1},{0,1L,-1018,6}},{{-0,0x13L,-593,10},{-0,1L,618,11},{0,-2L,401,11},{-0,1L,618,11},{-0,0x13L,-593,10},{0,-6L,-204,1},{0,3L,800,3},{0,-3L,-254,13},{0,3L,800,3}},{{0,9L,428,1},{0,0L,-776,12},{0,0x3EL,155,1},{0,0x3EL,155,1},{0,0L,-776,12},{0,9L,428,1},{0,0L,-776,12},{0,0x3EL,155,1},{0,0x3EL,155,1}}};
                        int i, j, k;
                        l_84.f2 = (~g_306[(g_67 + 4)][(g_467 + 7)][g_67]);
                        g_119 = l_488[5][7];
                        if (g_130[g_467])
                            break;
                        l_440 |= g_288;
                    }
                    if (((safe_lshift_func_uint16_t_u_u(65533UL, 9)) && (safe_lshift_func_uint16_t_u_s(((((((safe_mod_func_int32_t_s_s(g_3, 0xEE284340L)) > (safe_sub_func_int16_t_s_s(((p_65 >= g_130[0]) & g_306[2][2][0]), p_63))) > (l_460 < (-10L))) == g_130[0]) >= p_65) | l_437), l_460))))
                    {
                        return g_67;
                    }
                    else
                    {
                        l_468 ^= l_497;
                        g_366 = l_459;
                        g_119.f0 = (((safe_lshift_func_int16_t_s_s((safe_sub_func_int16_t_s_s((safe_add_func_uint32_t_u_u(1UL, p_65)), g_116)), (0x16L && ((safe_add_func_uint16_t_u_u(l_460, 1UL)) < g_119.f0)))) > 65528UL) && (safe_rshift_func_int8_t_s_s(p_65, 6)));
                    }
                    for (p_64 = 0; (p_64 <= 0); p_64 += 1)
                    {
                        char l_508 = (-4L);
                        int l_509 = (-1L);
                        int l_513 = (-1L);
                        if (l_84.f0)
                            break;
                        if (l_485)
                            goto lbl_958;
                        l_517--;
                        l_512 = (l_520 != (safe_mod_func_int16_t_s_s(((+g_106) <= l_516[5]), l_445)));
                    }
                }
                if ((l_497 < (0L < (safe_sub_func_uint8_t_u_u(p_63, p_65)))))
                {
                    for (g_67 = 0; (g_67 <= 3); g_67 += 1)
                    {
                        short l_527 = 0xAAE1L;
                        l_527 &= (safe_lshift_func_uint8_t_u_u(1UL, 2));
                        g_433[3] ^= p_65;
                        l_468 = g_119.f3;
                    }
                }
                else
                {
                    unsigned l_530 = 0x16F6E3BEL;
                    g_236 ^= 0x0F2E58FAL;
                    for (g_92 = 13; (g_92 == 35); ++g_92)
                    {
                        --l_530;
                        if (g_92)
                            continue;
                    }
                    if (l_445)
                    {
                        return l_459;
                    }
                    else
                    {
                        g_236 |= ((safe_lshift_func_uint8_t_u_u((safe_sub_func_int8_t_s_s(0xD5L, (((-4L) | p_65) > (0x630DADCCL == (2L > p_64))))), 5)) < p_64);
                    }
                    for (p_63 = 7; (p_63 != 12); p_63 = safe_add_func_int16_t_s_s(p_63, 4))
                    {
                        if (g_119.f0)
                            goto lbl_539;
                        l_468 = (safe_add_func_int16_t_s_s(g_83[3][4], g_119.f0));
                    }
                }
                l_84.f0 |= (p_65 || l_70);
            }
        }
    }
    else
    {
        int l_562 = 0x5292C6BEL;
        int l_572[4] = {0L,0L,0L,0L};
        struct S0 l_605[4][10][5] = {{{{-0,0xF9L,-590,1},{0,0x24L,975,5},{0,1L,464,8},{-0,0x22L,583,2},{0,0L,-610,14}},{{0,1L,464,8},{0,-7L,-86,12},{0,0x24L,975,5},{0,0x24L,975,5},{0,-7L,-86,12}},{{0,-7L,-86,12},{-0,5L,-622,13},{0,1L,464,8},{0,0L,-610,14},{-0,1L,355,6}},{{0,1L,-288,15},{-0,5L,-622,13},{0,0L,-610,14},{-0,0x7BL,610,1},{0,1L,569,1}},{{-0,0L,-677,0},{0,-7L,-86,12},{0,-7L,-86,12},{-0,0L,-677,0},{-0,0x7BL,610,1}},{{0,1L,-288,15},{0,0x24L,975,5},{-0,1L,355,6},{-0,0x66L,425,9},{-0,0x7BL,610,1}},{{0,-7L,-86,12},{0,1L,-288,15},{0,1L,569,1},{0,1L,464,8},{0,1L,569,1}},{{0,1L,464,8},{0,1L,464,8},{-0,0x7BL,610,1},{0,0x24L,975,5},{0,1L,464,8}},{{0,1L,-288,15},{0,-7L,-86,12},{-0,0xF9L,-590,1},{-0,1L,355,6},{-0,5L,-622,13}},{{-0,0x66L,425,9},{-0,0xF9L,-590,1},{-0,0x7BL,610,1},{-0,0xF9L,-590,1},{-0,0x66L,425,9}}},{{{0,0x24L,975,5},{0,-7L,-86,12},{0,1L,464,8},{-0,0x66L,425,9},{0,1L,569,1}},{{0,0x24L,975,5},{0,1L,569,1},{-0,5L,-622,13},{-0,0x22L,583,2},{-0,0x22L,583,2}},{{-0,0x66L,425,9},{0,0L,-610,14},{-0,0x66L,425,9},{0,-7L,-86,12},{0,1L,569,1}},{{0,1L,-288,15},{-0,0x22L,583,2},{0,1L,569,1},{0,-7L,-86,12},{-0,0x66L,425,9}},{{0,1L,569,1},{-0,5L,-622,13},{-0,0x22L,583,2},{-0,0x22L,583,2},{-0,5L,-622,13}},{{-0,5L,-622,13},{-0,0L,-677,0},{0,1L,569,1},{-0,0x66L,425,9},{0,1L,464,8}},{{0,0L,-610,14},{-0,0L,-677,0},{-0,0x66L,425,9},{-0,0xF9L,-590,1},{-0,0x7BL,610,1}},{{-0,1L,355,6},{-0,5L,-622,13},{-0,5L,-622,13},{-0,1L,355,6},{-0,0xF9L,-590,1}},{{0,0L,-610,14},{-0,0x22L,583,2},{0,1L,464,8},{0,0x24L,975,5},{-0,0xF9L,-590,1}},{{-0,5L,-622,13},{0,0L,-610,14},{-0,0x7BL,610,1},{0,1L,569,1},{-0,0x7BL,610,1}}},{{{0,1L,569,1},{0,1L,569,1},{-0,0xF9L,-590,1},{0,0x24L,975,5},{0,1L,464,8}},{{0,1L,-288,15},{0,-7L,-86,12},{-0,0xF9L,-590,1},{-0,1L,355,6},{-0,5L,-622,13}},{{-0,0x66L,425,9},{-0,0xF9L,-590,1},{-0,0x7BL,610,1},{-0,0xF9L,-590,1},{-0,0x66L,425,9}},{{0,0x24L,975,5},{0,-7L,-86,12},{0,1L,464,8},{-0,0x66L,425,9},{0,1L,569,1}},{{0,0x24L,975,5},{0,1L,569,1},{-0,5L,-622,13},{-0,0x22L,583,2},{-0,0x22L,583,2}},{{-0,0x66L,425,9},{0,0L,-610,14},{-0,0x66L,425,9},{0,-7L,-86,12},{0,1L,569,1}},{{0,1L,-288,15},{-0,0x22L,583,2},{0,1L,569,1},{-0,5L,-622,13},{0,0x24L,975,5}},{{-0,0x7BL,610,1},{-0,0L,-677,0},{0,-7L,-86,12},{0,-7L,-86,12},{-0,0L,-677,0}},{{-0,0L,-677,0},{-0,1L,355,6},{-0,0x7BL,610,1},{0,0x24L,975,5},{0,1L,569,1}},{{-0,0x66L,425,9},{-0,1L,355,6},{0,0x24L,975,5},{0,1L,-288,15},{-0,0xF9L,-590,1}}},{{{0,1L,464,8},{-0,0L,-677,0},{-0,0L,-677,0},{0,1L,464,8},{0,1L,-288,15}},{{-0,0x66L,425,9},{0,-7L,-86,12},{0,1L,569,1},{-0,0x22L,583,2},{0,1L,-288,15}},{{-0,0L,-677,0},{-0,0x66L,425,9},{-0,0xF9L,-590,1},{-0,0x7BL,610,1},{-0,0xF9L,-590,1}},{{-0,0x7BL,610,1},{-0,0x7BL,610,1},{0,1L,-288,15},{-0,0x22L,583,2},{0,1L,569,1}},{{0,0L,-610,14},{-0,5L,-622,13},{0,1L,-288,15},{0,1L,464,8},{-0,0L,-677,0}},{{0,0x24L,975,5},{0,1L,-288,15},{-0,0xF9L,-590,1},{0,1L,-288,15},{0,0x24L,975,5}},{{-0,0x22L,583,2},{-0,5L,-622,13},{0,1L,569,1},{0,0x24L,975,5},{-0,0x7BL,610,1}},{{-0,0x22L,583,2},{-0,0x7BL,610,1},{-0,0L,-677,0},{0,-7L,-86,12},{0,-7L,-86,12}},{{0,0x24L,975,5},{-0,0x66L,425,9},{0,0x24L,975,5},{-0,5L,-622,13},{-0,0x7BL,610,1}},{{0,0L,-610,14},{0,-7L,-86,12},{-0,0x7BL,610,1},{-0,5L,-622,13},{0,0x24L,975,5}}}};
        unsigned short l_715 = 0xB559L;
        struct S0 l_761 = {0,0xE6L,-943,15};
        unsigned l_933 = 0x280BE7C1L;
        int l_954 = 0xBE52A9A4L;
        int i, j, k;
lbl_892:
        if ((+(((-6L) >= (p_64 | p_64)) || ((safe_sub_func_uint16_t_u_u((~p_65), ((g_236 > ((((safe_sub_func_uint16_t_u_u((g_306[2][2][0] <= 0x0DDA571CL), p_63)) ^ g_119.f3) & 0x49DDL) | 0xBA0803C7L)) & l_459))) != l_84.f0))))
        {
            int l_552 = 1L;
            struct S0 l_564 = {-0,0x8DL,892,12};
            unsigned char l_581 = 248UL;
            char l_591 = 7L;
            short l_623 = 1L;
            int l_644 = 0xDE66391FL;
            int l_646 = 1L;
            int l_651 = 0x52E7C1CEL;
            int l_667 = 0xB8707F77L;
            int l_669 = 0L;
            int l_673 = 0x4F981CAEL;
            int l_674 = 0x7D90E3B6L;
            int l_679 = 1L;
            int l_681 = 0x3191F452L;
            int l_682 = (-1L);
            int l_683 = (-10L);
            int l_685 = 1L;
            int l_687 = 0x06E09C97L;
            int l_688 = 0xFDADE5A4L;
            int l_689 = (-1L);
            int l_690[3];
            int i;
            for (i = 0; i < 3; i++)
                l_690[i] = 0L;
lbl_731:
            if (((safe_add_func_int32_t_s_s((safe_sub_func_uint32_t_u_u(((p_65 < ((-10L) ^ func_77(g_116, l_459, p_63, g_306[2][2][0], l_84))) && (safe_mod_func_uint16_t_u_u(((0x557BE8AAL != l_552) <= 0xFDECL), l_552))), g_288)), 0xCEE79E77L)) && 0L))
            {
                unsigned char l_553 = 0xC1L;
                struct S0 l_563 = {-0,1L,789,4};
                unsigned short l_573 = 1UL;
                int l_640 = 6L;
                int l_642 = 0xD5E77C23L;
                short l_649 = (-9L);
                int l_653 = 0L;
                unsigned char l_655 = 0x04L;
                if (((func_77(func_77((g_484 ^ ((p_64 ^ l_553) <= ((((safe_rshift_func_uint16_t_u_u((l_553 || (p_64 <= (safe_lshift_func_uint8_t_u_u(func_77(g_83[2][1], (safe_rshift_func_int16_t_s_u(l_553, (((safe_sub_func_int8_t_s_s((-1L), (l_562 > l_552))) && l_70) != 4L))), l_562, g_288, l_563), g_3)))), g_462)) || 0x3A95A35DL) == l_562) & p_65))), l_562, l_562, l_562, l_564), g_433[2], l_562, g_3, l_564) > 1UL) & g_130[0]))
                {
                    int l_580 = 7L;
                    short l_604 = (-1L);
                    unsigned l_607 = 8UL;
                    if (p_65)
                    {
                        unsigned short l_567 = 0x639FL;
                        unsigned l_568 = 0x367B8278L;
                        int l_571 = 0L;
                        l_567 = (safe_mod_func_int32_t_s_s(g_237, (((g_119.f1 & p_64) ^ ((+g_130[0]) && g_111)) & p_64)));
                        l_568++;
                        g_366 ^= g_236;
                        --l_573;
                    }
                    else
                    {
                        unsigned l_576[6] = {0x2C2A40DFL,0x2C2A40DFL,0UL,0x2C2A40DFL,0x2C2A40DFL,0UL};
                        int i;
                        --l_576[2];
                        if (g_106)
                            goto lbl_584;
                        l_580 = ((safe_unary_minus_func_uint16_t_u(g_369)) <= (!4294967287UL));
lbl_584:
                        ++l_581;
                        g_119 = l_564;
                    }
                    l_564.f0 = (0xADL <= func_77((safe_lshift_func_uint16_t_u_s(g_111, p_65)), l_581, (!(safe_add_func_uint32_t_u_u(g_133, ((safe_lshift_func_uint16_t_u_s(g_467, ((((p_65 & p_65) | (0L >= g_130[0])) >= p_63) <= g_116))) & (-8L))))), l_591, g_119));
                    if ((safe_rshift_func_int16_t_s_u(func_77(((func_77((((p_64 ^ (0x3C15AD43L & p_65)) >= (func_77((g_3 == (p_64 > (safe_lshift_func_int16_t_s_s((((safe_mod_func_int16_t_s_s((((((p_63 >= ((safe_mod_func_int32_t_s_s(((l_572[2] < (safe_mod_func_int8_t_s_s(p_64, (safe_add_func_int8_t_s_s(g_462, l_552))))) <= 0x00802EDEL), p_64)) > 0x7EL)) > p_63) != g_111) && l_604) ^ 0x3F9FL), 0x107EL)) != g_237) ^ 0x2C8AL), 13)))), l_563.f2, l_573, g_119.f3, l_564) && g_130[0])) <= l_461), g_130[0], l_581, g_467, l_605[2][7][2]) | (-1L)) == 0x5593523BL), p_63, l_580, p_65, g_606[1][3]), 4)))
                    {
                        g_119.f0 |= l_607;
                        g_433[2] = g_92;
                    }
                    else
                    {
                        g_433[2] = l_563.f3;
                        return g_606[1][3].f2;
                    }
                    for (l_607 = 0; (l_607 == 8); l_607 = safe_add_func_uint32_t_u_u(l_607, 5))
                    {
                        unsigned l_624 = 0xF942B6EFL;
                        g_433[2] = (safe_lshift_func_int16_t_s_u(((!(safe_lshift_func_uint16_t_u_u(func_77(l_614, p_65, l_604, ((safe_mod_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u((l_580 | l_605[2][7][2].f2), p_63)), (safe_add_func_int32_t_s_s((safe_sub_func_uint8_t_u_u(g_369, l_623)), l_410)))) ^ l_572[1]), g_606[1][3]), p_64))) && g_462), 0));
                        if (l_624)
                            break;
                        l_84.f0 ^= g_111;
                    }
                }
                else
                {
                    struct S0 l_634 = {0,1L,445,12};
                    int l_643 = (-4L);
                    int l_645 = 0xD43EC584L;
                    int l_647 = (-1L);
                    int l_648 = 0x7EA7006DL;
                    int l_650 = 1L;
                    int l_652[1][8][6] = {{{(-1L),7L,0x3ABB9C85L,7L,(-1L),0x1A3F0EE6L},{0xD04E3F19L,7L,3L,7L,0xD04E3F19L,0x1A3F0EE6L},{(-1L),7L,0x3ABB9C85L,7L,(-1L),0x1A3F0EE6L},{0xD04E3F19L,7L,3L,7L,0L,7L},{4L,1L,(-1L),1L,4L,7L},{0L,1L,0xD04E3F19L,1L,0L,7L},{4L,1L,(-1L),1L,4L,7L},{0L,1L,0xD04E3F19L,1L,0L,7L}}};
                    int i, j, k;
                    for (l_461 = 3; (l_461 >= 0); l_461 -= 1)
                    {
                        char l_631[3][4][9] = {{{0x5EL,0x05L,0x0DL,(-6L),0x1EL,(-8L),1L,0L,(-1L)},{0xF3L,0xB3L,(-5L),1L,0x60L,0x56L,0x0DL,(-5L),0x0DL},{0xB3L,(-10L),(-1L),(-1L),(-10L),0xB3L,0x1EL,(-5L),1L},{0x56L,0x60L,1L,(-5L),0xB3L,0xF3L,(-3L),0L,(-5L)}},{{(-8L),0x1EL,(-6L),0x0DL,0x05L,0x5EL,0x1EL,0x5EL,0x05L},{(-6L),0L,0L,(-6L),0xC6L,0x5EL,0x0DL,0xB3L,(-1L)},{0x55L,0x0DL,1L,0x05L,0x60L,0xF3L,1L,1L,0L},{0xB3L,(-7L),0xF0L,(-1L),0xC6L,0xB3L,0xC6L,0xF3L,0x56L}},{{0x5EL,0x5EL,0xF0L,0xF3L,(-1L),0L,(-1L),1L,0xF3L},{0xC2L,0L,0x1EL,(-1L),0xF0L,0xC6L,0L,(-7L),(-5L)},{(-10L),(-5L),0xF0L,0x1EL,1L,0x1EL,0xF0L,(-5L),(-10L)},{(-1L),(-5L),0x56L,1L,0x5EL,(-8L),(-1L),0x56L,0xF0L}}};
                        int i, j, k;
                        l_564.f2 = (safe_rshift_func_uint8_t_u_u((l_614 != (safe_add_func_int16_t_s_s((safe_rshift_func_int16_t_s_s(l_631[1][1][3], 12)), (safe_mod_func_uint8_t_u_u(g_111, g_433[2]))))), 4));
                        g_119.f0 |= g_4[0][1];
                    }
                    for (g_111 = 0; (g_111 <= 3); g_111 += 1)
                    {
                        l_634 = g_119;
                    }
                    for (l_459 = 2; (l_459 > 15); l_459 = safe_add_func_uint8_t_u_u(l_459, 9))
                    {
                        l_84.f2 = p_64;
                    }
                    if (((l_84.f1 != 0x0AL) == p_64))
                    {
                        int l_637 = 0xF81571B8L;
                        int l_638 = 0xBFC6C8C9L;
                        int l_639 = 0x33F3A96EL;
                        int l_641 = 1L;
                        int l_654[5][9][5] = {{{1L,0xD20A86E3L,0x8AAAC998L,0x5B956C92L,0x5C4D04FCL},{0xF1BCFEB9L,(-5L),0x23361F96L,8L,0x23361F96L},{0x25E768B5L,0x25E768B5L,7L,0xBCC18777L,0xE926B2A1L},{4L,0xAF6EBBA7L,0x90B26964L,6L,0L},{0L,5L,(-10L),0xC810CBC3L,(-1L)},{0x1AD03B46L,0xAF6EBBA7L,0x5016A5C7L,0L,(-1L)},{5L,0x25E768B5L,0L,0L,0x47B6FDB0L},{(-10L),(-5L),0xB8C63254L,0x691516D2L,6L},{0x8E67158AL,0xD20A86E3L,0xC810CBC3L,0xA3ACAB59L,0L}},{{0xDB8CC839L,0xC22F351CL,0xFF209D15L,(-4L),1L},{(-1L),0x3EE81DABL,6L,(-6L),0x8E67158AL},{(-2L),0x59A86B97L,(-1L),0x8E67158AL,0x477CC246L},{8L,1L,0xBCC18777L,0L,0xAE984719L},{0L,0xE926B2A1L,(-1L),0x1BD2049CL,0xEBFAE2AEL},{0x543EE692L,(-1L),(-2L),0xE306BFCAL,(-4L)},{0x543EE692L,0x03301A81L,0L,6L,(-1L)},{0L,1L,0x59A86B97L,0xFD0EA1D8L,0L},{8L,0L,1L,4L,0xA3ACAB59L}},{{0L,0x03EF35EFL,0xB8C63254L,1L,7L},{0xC810CBC3L,0xFC492F7DL,(-10L),0x5016A5C7L,1L},{(-1L),(-1L),(-1L),0x477CC246L,0xFC492F7DL},{(-10L),0L,0x5016A5C7L,1L,0x1BD2049CL},{0xAF6EBBA7L,(-5L),0xA3ACAB59L,(-5L),0xAF6EBBA7L},{0x23361F96L,0xA3ACAB59L,0xAF6EBBA7L,(-1L),0xCD3D3F69L},{1L,0x04893502L,0L,(-2L),0x691516D2L},{(-1L),5L,0L,0xA3ACAB59L,0xCD3D3F69L},{0L,(-2L),0xDB8CC839L,(-7L),0xAF6EBBA7L}},{{0xCD3D3F69L,0L,(-6L),0x03301A81L,0x1BD2049CL},{0x849F9E8EL,(-1L),0x03301A81L,0xCD3D3F69L,0xFC492F7DL},{0L,0xAF6EBBA7L,8L,(-1L),1L},{8L,0L,0xAE984719L,(-2L),0L},{0xCD3D3F69L,0xFD0EA1D8L,(-5L),1L,7L},{0L,(-1L),0x04893502L,0L,0x543EE692L},{0xC810CBC3L,0xCD3D3F69L,0L,0x543EE692L,(-10L)},{0x8AAAC998L,(-4L),9L,0xA3ACAB59L,0xDB8CC839L},{0xF7F26F6AL,0xEBFAE2AEL,0xD20A86E3L,0xA3ACAB59L,0L}},{{0x04893502L,(-1L),0x691516D2L,0x543EE692L,0xC22F351CL},{(-1L),0xB8C63254L,4L,0L,0L},{(-1L),0x25E768B5L,0xC810CBC3L,1L,0L},{0x23361F96L,(-1L),(-1L),(-2L),0x8AAAC998L},{0xE306BFCAL,0x1AD03B46L,(-1L),(-6L),0x6975D16AL},{0xD20A86E3L,0xA7D9FDAAL,1L,(-1L),0xE306BFCAL},{0xA1B3AB3CL,6L,(-7L),0x9390C7A4L,0x9390C7A4L},{5L,0L,5L,0xEBFAE2AEL,0x3EE81DABL},{0x3E1FC813L,0x3EE81DABL,0L,7L,0xE926B2A1L}}};
                        int i, j, k;
                        ++l_655;
                    }
                    else
                    {
                        return p_64;
                    }
                }
                g_606[1][3] = l_564;
                l_564.f0 = g_606[1][3].f0;
            }
            else
            {
                int l_658 = 7L;
                int l_660 = 0x5E65AF66L;
                int l_662[7][10][3] = {{{0x6BB1A65BL,0xEFC576EEL,(-5L)},{0xD7F62FD2L,2L,(-2L)},{0x135163BCL,0xE0816CDAL,0xC645676AL},{0xC54240CCL,0xFA738BCAL,1L},{(-2L),0x5228816FL,0xE0816CDAL},{0x5228816FL,2L,0x4804271CL},{(-5L),0x0C1C2B06L,0xDEB6DD3BL},{0x135163BCL,0x2005CE91L,0xF1A9F295L},{0xE42BA7C3L,(-7L),0x135163BCL},{0x6F042C8AL,(-9L),0x7234A3DAL}},{{0xFA738BCAL,0x7363994CL,(-1L)},{0x469DD582L,0x7363994CL,(-6L)},{(-1L),(-9L),0x6191668EL},{0xF133274BL,(-7L),0x07FE802BL},{0x97F23F97L,0xAF4E7569L,1L},{0x212ABFE3L,0xCD21FAC7L,0xD7F62FD2L},{(-6L),0x876862ECL,4L},{2L,0x07FE802BL,5L},{(-1L),0x2737AC33L,(-1L)},{0x6F042C8AL,0xFA738BCAL,1L}},{{(-7L),(-5L),0xDEB6DD3BL},{0xFBB91FD2L,(-1L),0xE0816CDAL},{(-7L),6L,(-5L)},{(-1L),(-1L),0xFA738BCAL},{6L,0L,0x7234A3DAL},{0x0D883374L,0xCD21FAC7L,2L},{0xFBB91FD2L,0x2215AD02L,0x0B3C63A3L},{0xE42BA7C3L,0x0D883374L,2L},{(-5L),(-3L),0x7234A3DAL},{0x03016E96L,0x212ABFE3L,0xFA738BCAL}},{{0x1CB46CBEL,0x7363994CL,(-5L)},{(-6L),0x47BC47CAL,0xE0816CDAL},{0xF133274BL,0x0D883374L,0xDEB6DD3BL},{0x2737AC33L,0xEFC576EEL,1L},{1L,(-3L),(-1L)},{0xC54240CCL,0x876862ECL,5L},{0x469DD582L,1L,4L},{(-1L),6L,0xD7F62FD2L},{(-5L),(-1L),1L},{7L,0xDEB6DD3BL,0xD7F62FD2L}},{{0xAED01A8DL,4L,(-3L)},{(-1L),0x1CB46CBEL,0x2215AD02L},{0x05E72DF9L,0xD7F62FD2L,(-5L)},{0x05E72DF9L,0x5228816FL,0xAED01A8DL},{(-1L),0x191EB929L,(-1L)},{0xAED01A8DL,(-9L),(-1L)},{(-4L),0xFA738BCAL,0x125A9EFFL},{5L,5L,0xF133274BL},{0x6F042C8AL,0x2005CE91L,1L},{0x194BE84DL,0x288D6D0DL,0x6191668EL}},{{0x6191668EL,0L,(-3L)},{0xC645676AL,0xFA738BCAL,1L},{0x469DD582L,0x974F6285L,0x8A47F8CBL},{0x2005CE91L,0xFBB91FD2L,(-5L)},{0x2215AD02L,(-2L),(-2L)},{0L,(-1L),9L},{(-1L),0x1CB46CBEL,(-1L)},{5L,1L,0x8A47F8CBL},{0x0B3C63A3L,6L,0xD7F62FD2L},{0x7363994CL,1L,0x974F6285L}},{{(-1L),0x1CB46CBEL,0xEFC576EEL},{1L,(-1L),(-1L)},{0x05E72DF9L,(-2L),0xF133274BL},{0x03016E96L,0xFBB91FD2L,(-1L)},{0x7363994CL,0x974F6285L,(-1L)},{0xF1A9F295L,0xFA738BCAL,0xE42BA7C3L},{(-5L),0L,0x7363994CL},{0x6F042C8AL,0x288D6D0DL,(-5L)},{1L,0x2005CE91L,0x6191668EL},{0x2215AD02L,5L,0x974F6285L}}};
                int l_686[9] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
                int i, j, k;
                if ((!(~p_63)))
                {
                    char l_659 = 0L;
                    int l_661 = 1L;
                    int l_663 = 1L;
                    int l_664 = 0xB10890B2L;
                    int l_670 = 0xEEC7FD24L;
                    int l_671 = 0x815F7C07L;
                    int l_675 = (-8L);
                    int l_677 = 0xC36D8724L;
                    int l_680[6] = {1L,1L,0xB9A1608CL,1L,1L,0xB9A1608CL};
                    int i;
                    ++l_691;
                    for (l_685 = 0; (l_685 == 16); l_685 = safe_add_func_uint16_t_u_u(l_685, 7))
                    {
                        char l_696 = 1L;
                        l_696 = g_83[2][1];
                        if (g_433[2])
                            break;
                    }
                    for (l_581 = 0; (l_581 <= 2); l_581 += 1)
                    {
                        int i;
                        l_690[l_581] = (l_690[l_581] > (safe_mod_func_int32_t_s_s(func_77(((safe_mod_func_int32_t_s_s(2L, l_690[l_581])) == (p_64 >= ((0x3E64BB15L == (safe_rshift_func_int16_t_s_s((((safe_lshift_func_uint8_t_u_u(0UL, 7)) ^ (g_306[1][3][2] <= l_688)) != (safe_mod_func_int8_t_s_s(0L, g_119.f2))), l_670))) || g_119.f0))), p_63, p_64, p_65, g_119), p_63)));
                    }
                }
                else
                {
                    unsigned char l_711 = 0xD1L;
                    l_461 &= (l_686[8] != (0xB328L || (safe_sub_func_int16_t_s_s(g_130[0], (g_3 >= g_116)))));
                    l_711--;
                }
                g_119 = g_606[0][5];
                l_564 = l_84;
            }
            for (l_669 = 0; (l_669 <= 3); l_669 += 1)
            {
                int l_714[9][1] = {{0xBB8621FCL},{5L},{0xBB8621FCL},{5L},{0xBB8621FCL},{5L},{0xBB8621FCL},{5L},{0xBB8621FCL}};
                struct S0 l_729[10] = {{-0,0x5BL,626,4},{-0,0x5BL,626,4},{0,9L,65,7},{0,8L,980,7},{0,9L,65,7},{-0,0x5BL,626,4},{-0,0x5BL,626,4},{0,9L,65,7},{0,8L,980,7},{0,9L,65,7}};
                short l_739 = 0xC228L;
                short l_744 = 0x0C0FL;
                int i, j;
                l_715--;
                g_366 = l_614;
                if (((l_605[2][7][2].f3 != p_64) < (~((safe_add_func_int8_t_s_s(l_674, p_64)) || (safe_mod_func_uint8_t_u_u(l_84.f3, (-4L)))))))
                {
                    unsigned l_722 = 4294967295UL;
                    int l_725[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_725[i] = 5L;
                    --l_722;
                    for (p_65 = 0; (p_65 <= 3); p_65 += 1)
                    {
                        g_366 ^= ((g_130[0] > 0xA56BB828L) <= g_133);
                        if (l_690[1])
                            continue;
                        if (l_715)
                            break;
                    }
                    for (l_70 = 2; (l_70 >= 0); l_70 -= 1)
                    {
                        int i;
                        if (l_690[l_70])
                            break;
                        l_726--;
                        g_119 = l_729[7];
                        return l_572[l_669];
                    }
                    for (l_684 = 0; (l_684 <= 3); l_684 += 1)
                    {
                        int l_730 = (-1L);
                        int i, j;
                        l_729[7].f2 = g_83[l_684][(l_669 + 3)];
                        l_730 &= func_77(((g_484 == (l_722 || (l_714[8][0] ^ p_65))) == (p_65 > (p_65 != ((func_77(func_77(p_63, p_64, p_63, p_63, l_605[2][7][2]), p_65, g_606[1][3].f3, g_433[7], g_606[1][3]) | l_605[2][7][2].f2) | l_605[2][7][2].f1)))), l_674, p_65, p_63, g_606[1][1]);
                        if (g_111)
                            goto lbl_731;
                    }
                }
                else
                {
                    int l_745 = 1L;
                    struct S0 l_747 = {0,9L,-504,15};
                    int l_748[6];
                    char l_757 = 0xC2L;
                    unsigned l_758 = 0x8A8AB333L;
                    int i;
                    for (i = 0; i < 6; i++)
                        l_748[i] = 4L;
                    if (g_237)
                    {
                        unsigned l_734[3][8] = {{0xDFB5200BL,0xD138121FL,0xDFB5200BL,0xDCD2759FL,0x0727EB2DL,0x726E711EL,4294967286UL,4294967286UL},{4294967286UL,0xB8DB4436L,0x8FCEA988L,0x8FCEA988L,0xB8DB4436L,4294967286UL,0x0727EB2DL,4294967289UL},{4294967286UL,0x2FF72D80L,6UL,0xB8DB4436L,0x0727EB2DL,0xB8DB4436L,6UL,0x2FF72D80L}};
                        struct S0 l_749 = {-0,1L,-813,3};
                        int l_750 = (-4L);
                        int l_751 = (-8L);
                        int l_752 = 2L;
                        int l_753 = (-5L);
                        int l_754 = 1L;
                        int l_755[3][8][5] = {{{3L,0x04B76124L,0xE7A631D2L,7L,(-1L)},{(-1L),0L,0L,0x52788898L,0x8488B983L},{0x37F5CAC3L,0x04B76124L,(-10L),(-7L),(-1L)},{0x7E07BDA6L,1L,0x49563ECDL,(-1L),0L},{0L,0x64463799L,0xA7F1EFE3L,0xE27D703FL,0x8540E7ADL},{0x06434A88L,0x5F05B9D7L,0x4A92E54AL,0xEC8B9241L,(-5L)},{0x04B76124L,1L,0x94629E9BL,4L,0x20F32DE8L},{0x04B76124L,0x52788898L,4L,0x2825BAC3L,1L}},{{0L,0L,0x466CC750L,0L,0L},{4L,0L,0x06434A88L,0L,4L},{(-5L),0x04B76124L,(-1L),1L,0x466CC750L},{0x9394A03EL,0x832A5106L,(-9L),0x94629E9BL,0L},{1L,4L,0xBF93B832L,0x04B76124L,0x466CC750L},{0x5F05B9D7L,0x94629E9BL,0x37F5CAC3L,0L,4L},{0x466CC750L,0x52788898L,1L,0xBF93B832L,0L},{0L,0x49563ECDL,1L,0x52788898L,0x2825BAC3L}},{{0x94629E9BL,(-5L),0L,0xEC8B9241L,0x04B76124L},{(-1L),0x1EDC22DDL,(-1L),0xEC8B9241L,4L},{0L,0x8488B983L,0x64463799L,0x52788898L,1L},{0x504865F3L,0x88B46B29L,0x7375C0FDL,0xBF93B832L,0xBF93B832L},{0x8488B983L,0x5F05B9D7L,0x8488B983L,0L,1L},{1L,0x7375C0FDL,0x9394A03EL,0x04B76124L,1L},{0x7375C0FDL,3L,0L,0x94629E9BL,0x4A92E54AL},{0xEC8B9241L,4L,0x9394A03EL,1L,0L}}};
                        char l_756 = 1L;
                        int i, j, k;
                        g_366 ^= (safe_rshift_func_uint16_t_u_s((g_467 > l_734[1][0]), (safe_sub_func_uint8_t_u_u(func_77(g_83[3][4], p_65, (safe_add_func_uint32_t_u_u(l_739, ((((safe_add_func_int32_t_s_s(8L, l_729[7].f0)) || (((l_744 & (g_606[1][3].f0 == l_745)) & l_734[1][0]) <= l_683)) == 0UL) < p_63))), g_746, l_747), l_748[5]))));
                        l_749 = g_606[2][3];
                        --l_758;
                    }
                    else
                    {
                        return p_64;
                    }
                    l_761 = l_761;
                    g_119.f0 ^= ((safe_rshift_func_uint16_t_u_s((l_729[7].f1 < l_691), p_64)) > ((g_83[2][1] != (((safe_sub_func_int8_t_s_s((!l_744), ((((p_63 | p_65) & (!(safe_rshift_func_int8_t_s_u((safe_sub_func_int8_t_s_s(l_757, g_746)), 6)))) ^ g_4[1][1]) && 0UL))) > p_65) || p_63)) < p_65));
                    l_681 &= (safe_rshift_func_uint16_t_u_s((+65535UL), (safe_unary_minus_func_uint16_t_u(g_106))));
                }
                for (l_679 = 2; (l_679 >= 0); l_679 -= 1)
                {
                    int i;
                    g_119 = g_606[2][3];
                    if (l_690[l_679])
                        break;
                }
            }
        }
        else
        {
            unsigned l_773[10];
            int l_809 = 0xB81A59A6L;
            int l_811 = (-1L);
            int l_814 = (-2L);
            int l_818 = 0xF0F34D49L;
            int l_819 = 1L;
            int l_823 = 0L;
            int l_824 = 0x6D741870L;
            int l_825[6][8] = {{0L,0L,0L,0L,0L,0L,0L,0L},{0L,0L,0L,0L,0L,0L,0L,0L},{0L,0L,0L,0L,0L,0L,0L,0L},{0L,0L,0L,0L,0L,0L,0L,0L},{0L,0L,0L,0L,0L,0L,0L,0L},{0L,0L,0L,0L,0L,0L,0L,0L}};
            int i, j;
            for (i = 0; i < 10; i++)
                l_773[i] = 0x8A9EC253L;
            l_605[1][9][2] = l_84;
lbl_845:
            l_773[5]--;
            for (g_67 = (-29); (g_67 >= 33); g_67++)
            {
                unsigned l_789 = 4294967295UL;
                int l_808 = 0L;
                int l_810 = 1L;
                int l_812 = 0x3232FED3L;
                int l_813 = 7L;
                int l_815 = 6L;
                int l_816 = 1L;
                int l_817 = (-2L);
                int l_820 = 4L;
                int l_821 = 1L;
                int l_822[1][1];
                unsigned l_826 = 0x4A0C9158L;
                short l_837[9] = {1L,0L,0L,1L,0L,0L,1L,0L,0L};
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_822[i][j] = 9L;
                }
                if ((l_84.f2 <= (safe_rshift_func_uint16_t_u_u((p_65 ^ (((p_65 > (safe_add_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u((((l_773[5] | l_605[2][7][2].f0) < p_63) & l_459), ((g_784[2][0][1] | (((safe_sub_func_uint16_t_u_u((((((safe_rshift_func_int16_t_s_u(l_789, 3)) != g_606[1][3].f3) || g_111) & p_65) <= 0x8AL), 65529UL)) != l_672) & l_605[2][7][2].f1)) || p_64))), g_606[1][3].f0))) != l_789) != g_606[1][3].f3)), 15))))
                {
                    unsigned char l_793 = 0UL;
                    for (g_467 = 0; (g_467 != 20); g_467 = safe_add_func_uint16_t_u_u(g_467, 9))
                    {
                        unsigned short l_792 = 65535UL;
                        l_792 &= p_65;
                        if (l_793)
                            continue;
                    }
                    for (g_92 = 16; (g_92 < 31); g_92++)
                    {
                        short l_802 = (-3L);
                        if (g_67)
                            break;
                        g_433[2] |= 1L;
                        l_802 = (((p_63 <= (p_65 > (safe_sub_func_uint16_t_u_u((safe_sub_func_int8_t_s_s(((l_773[2] && l_605[2][7][2].f2) || p_65), ((0x9447L <= ((p_64 >= (-5L)) >= ((safe_rshift_func_uint8_t_u_u((l_605[2][7][2].f0 >= 0x1B4CL), p_63)) | l_789))) && p_65))), p_65)))) != l_761.f1) & p_64);
                        return g_606[1][3].f1;
                    }
                }
                else
                {
                    unsigned l_803[4];
                    int i;
                    for (i = 0; i < 4; i++)
                        l_803[i] = 5UL;
                    l_803[0]++;
                    return g_784[1][1][2];
                }
                for (l_726 = 25; (l_726 != 4); l_726 = safe_sub_func_uint32_t_u_u(l_726, 8))
                {
                    g_119 = g_119;
                    if (g_288)
                        break;
                    if (g_67)
                        continue;
                }
                l_826++;
                if (p_64)
                {
                    for (l_824 = (-20); (l_824 <= 27); ++l_824)
                    {
                        if (g_467)
                            goto lbl_456;
                    }
                }
                else
                {
                    unsigned short l_840 = 0UL;
                    if ((safe_lshift_func_uint16_t_u_s(((safe_sub_func_int16_t_s_s((l_70 == g_784[2][0][1]), ((safe_mod_func_int32_t_s_s(l_837[7], 4UL)) == ((((!(safe_sub_func_uint16_t_u_u(g_606[1][3].f2, l_840))) >= (safe_sub_func_int32_t_s_s((0x94DAEF63L < (safe_sub_func_int8_t_s_s((p_63 ^ 0x1814L), 248UL))), 4294967288UL))) <= 0xB8DF3749L) >= p_65)))) | 0xE3F7E96DL), 14)))
                    {
                        if (g_746)
                            goto lbl_456;
                    }
                    else
                    {
                        if (g_467)
                            goto lbl_845;
                    }
                    if (p_65)
                        continue;
                    if (l_726)
                        goto lbl_456;
                    if (l_70)
                        break;
                }
            }
        }
        for (l_562 = 0; (l_562 == (-17)); --l_562)
        {
            unsigned char l_853 = 0x9DL;
            int l_863 = 0x29090384L;
            int l_880 = 0x6FA3490DL;
            int l_899 = 0xE650D870L;
            int l_900 = 0xDDC88F86L;
            int l_908 = 0x45ED58D0L;
            int l_912 = (-9L);
            int l_917 = 1L;
            struct S0 l_944 = {-0,0x8BL,-23,12};
            unsigned char l_950 = 249UL;
            for (g_133 = (-29); (g_133 != 17); g_133 = safe_add_func_uint16_t_u_u(g_133, 8))
            {
                unsigned l_850 = 0x44311133L;
                l_850 = 0xD8106F07L;
                if ((g_130[0] & ((safe_sub_func_uint16_t_u_u(l_853, (-1L))) || (((safe_add_func_int8_t_s_s(g_130[0], (g_67 > ((l_605[2][7][2].f0 > ((p_64 | ((l_850 | ((safe_mod_func_int8_t_s_s(0xC4L, 0xCCL)) == 0x1AL)) == g_306[2][2][0])) < (-1L))) > l_410)))) < l_853) >= p_65))))
                {
                    short l_860[10][9][2] = {{{5L,0x490EL},{(-1L),0L},{0x5900L,5L},{0x9B6AL,0L},{0x1361L,0x81C7L},{0x00DAL,(-2L)},{0L,0x00DAL},{(-4L),1L},{(-1L),1L}},{{0L,0x62B7L},{1L,0x81C7L},{0x2CF5L,0x2EE1L},{0x9B6AL,0x5900L},{5L,0L},{0L,0L},{5L,0x5900L},{0x9B6AL,0x2EE1L},{0x2CF5L,0x81C7L}},{{1L,0x62B7L},{0L,1L},{(-1L),1L},{(-4L),0x00DAL},{0L,(-2L)},{0x00DAL,0x81C7L},{0x1361L,0L},{0x9B6AL,5L},{0x5900L,0L}},{{0x9283L,0x62B7L},{0L,0L},{(-1L),0L},{1L,0L},{(-4L),(-1L)},{0x62B7L,(-4L)},{0x9B6AL,0x2CF5L},{0x9B6AL,(-4L)},{0x62B7L,(-1L)}},{{(-4L),0L},{1L,0L},{(-1L),0L},{0L,0x62B7L},{0x9283L,(-2L)},{(-1L),0L},{0x81C7L,0x490EL},{1L,0x2EE1L},{(-1L),(-1L)}},{{(-2L),(-1L)},{0x9B6AL,0x1361L},{0x3AC6L,(-4L)},{(-2L),0L},{(-4L),0x2EE1L},{0x00DAL,0L},{0x81C7L,(-1L)},{0L,(-2L)},{1L,(-2L)}},{{0L,(-1L)},{0x81C7L,0L},{0x00DAL,0x2EE1L},{(-4L),0L},{(-2L),(-4L)},{0x3AC6L,0x1361L},{0x9B6AL,(-1L)},{(-2L),(-1L)},{(-1L),0x2EE1L}},{{1L,0x490EL},{0x81C7L,0L},{(-1L),(-2L)},{0x9283L,0x62B7L},{0L,0L},{(-1L),0L},{1L,0L},{(-4L),(-1L)},{0x62B7L,(-4L)}},{{0x9B6AL,0x2CF5L},{0x9B6AL,(-4L)},{0x62B7L,1L},{0x3AC6L,0x55ADL},{(-1L),0x62B7L},{0xB936L,0xAEE7L},{0xAEE7L,(-1L)},{0x5900L,0L},{0x4FC4L,0xAEE7L}},{{0L,0L},{(-1L),0x490EL},{0x7DF8L,1L},{0L,0x7DF8L},{(-1L),0x00DAL},{0L,0x3AC6L},{0L,0x341AL},{0x3AC6L,0x490EL},{0x2430L,0x62B7L}}};
                    int l_861 = (-9L);
                    int l_862 = 0x6078B557L;
                    unsigned l_864 = 0x44F01547L;
                    int i, j, k;
                    for (l_668 = 0; (l_668 != 19); l_668 = safe_add_func_int8_t_s_s(l_668, 5))
                    {
                        char l_867 = 0xF8L;
                        ++l_864;
                        l_867 = g_288;
                        g_606[1][3].f0 &= ((safe_add_func_int8_t_s_s((((g_784[2][0][1] == (safe_sub_func_int16_t_s_s((l_860[1][3][0] ^ (p_65 != 0x1B7A9CCFL)), 0x1235L))) ^ (safe_rshift_func_int8_t_s_u((safe_rshift_func_uint16_t_u_u(((l_678[0] || g_67) <= (safe_lshift_func_int16_t_s_u(g_119.f3, 2))), ((0x41BFL <= p_63) == 0x27L))), p_63))) | g_83[2][1]), p_64)) | 1L);
                        if (l_863)
                            continue;
                    }
                    l_880 ^= (l_863 | (safe_lshift_func_int8_t_s_u(g_130[0], 2)));
                }
                else
                {
                    short l_883 = 0x8670L;
                    g_606[1][3].f0 = (p_64 || (safe_add_func_int8_t_s_s(g_119.f3, (l_883 | ((safe_rshift_func_uint8_t_u_u(p_63, ((g_236 >= (g_462 >= (((((+(g_784[1][0][2] == (safe_sub_func_uint8_t_u_u((safe_mod_func_int16_t_s_s(g_4[0][2], (((safe_sub_func_int8_t_s_s(l_850, p_64)) >= p_64) ^ g_119.f0))), p_63)))) ^ g_237) || g_119.f2) > g_116) > l_883))) | g_83[2][1]))) & 0xE8FA441FL)))));
                    return g_366;
                }
                if (g_133)
                    goto lbl_892;
            }
            for (l_863 = (-21); (l_863 <= (-2)); l_863++)
            {
                char l_898 = 1L;
                int l_902 = 0x01B0557AL;
                int l_905 = 0xC6B74C2CL;
                int l_906 = (-6L);
                int l_909 = 0x3FEEB92FL;
                int l_910 = 0x3F22070DL;
                int l_913 = 0x0D21AE63L;
                unsigned l_918 = 0x5D00C993L;
                int l_948 = 0L;
                int l_953 = 0xDC48EB89L;
                for (l_880 = 0; (l_880 < (-28)); l_880 = safe_sub_func_int32_t_s_s(l_880, 1))
                {
                    char l_897 = 0xE1L;
                    int l_901 = 0x40FE781CL;
                    int l_903 = 0x7BBEACFDL;
                    int l_904 = 0x81B50581L;
                    int l_907 = 0x8F2AEEDCL;
                    int l_911 = 2L;
                    int l_914 = (-1L);
                    int l_915 = 0x5E8814E7L;
                    int l_916 = (-7L);
                    struct S0 l_928 = {-0,0L,353,15};
                    l_918--;
                    l_899 &= g_606[1][3].f1;
                    g_606[1][3].f0 = (p_64 < (safe_lshift_func_uint8_t_u_s(0xACL, (g_306[2][2][0] && ((safe_rshift_func_uint16_t_u_s(func_77(l_898, ((l_761.f0 > ((((p_64 | ((safe_sub_func_uint16_t_u_u(l_915, g_927)) > 0xE0L)) < 0xFEC25F0BL) != (-1L)) == 1UL)) && p_65), g_784[3][0][3], l_906, l_928), p_63)) >= l_605[2][7][2].f2)))));
                    if (g_366)
                        continue;
                }
                if (func_77((safe_add_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u(((((l_665 != ((l_933 & (safe_add_func_uint16_t_u_u((0x97L | ((safe_add_func_int32_t_s_s((0x16L != (func_77(p_64, g_784[3][1][0], p_63, g_111, l_605[2][7][2]) == g_433[6])), l_902)) || 65532UL)), 65526UL))) == p_65)) <= g_606[1][3].f1) == p_63) < g_83[1][3]), p_63)), (-1L))), g_606[1][3].f2, g_83[2][1], p_65, l_605[0][5][0]))
                {
                    for (p_64 = 0; (p_64 <= 3); p_64 += 1)
                    {
                        if (l_678[0])
                            break;
                    }
                }
                else
                {
                    int l_945[5][4] = {{0x20876FACL,0x6246CC7FL,3L,3L},{0x8AAF13A2L,0x8AAF13A2L,0x20876FACL,3L},{0L,0x6246CC7FL,0L,0x20876FACL},{0L,0x20876FACL,0x20876FACL,0L},{0x8AAF13A2L,0x20876FACL,3L,0x20876FACL}};
                    int i, j;
                    if (l_918)
                        break;
                    l_913 = (safe_rshift_func_int8_t_s_s(p_64, 5));
                    if ((safe_mod_func_int8_t_s_s(0L, (l_880 & func_77((l_666 > (g_133 & p_64)), g_92, p_64, p_63, l_944)))))
                    {
                        struct S0 l_946 = {-0,-3L,337,7};
                        if (l_945[0][0])
                            break;
                        l_605[3][6][1] = l_946;
                        l_950--;
                    }
                    else
                    {
                        unsigned l_955 = 4294967295UL;
                        ++l_955;
                    }
                    g_606[1][3].f0 ^= l_913;
                }
            }
            l_84 = g_606[0][2];
        }
        if (l_459)
            goto lbl_892;
        if (l_461)
            goto lbl_456;
    }
    for (g_237 = 0; (g_237 >= 33); g_237 = safe_add_func_int8_t_s_s(g_237, 6))
    {
        struct S0 l_966[3] = {{0,0x10L,-901,13},{0,0x10L,-901,13},{0,0x10L,-901,13}};
        unsigned short l_980 = 0xD1F1L;
        int i;
        for (l_84.f1 = 0; (l_84.f1 <= 0); l_84.f1 += 1)
        {
            struct S0 l_962 = {-0,0L,-101,7};
            int i;
            if (l_678[l_84.f1])
            {
                struct S0 l_961 = {-0,0xD8L,-323,6};
                int i;
                l_961 = l_961;
                g_119 = l_962;
                if (g_130[l_84.f1])
                    break;
            }
            else
            {
                int l_970 = 0xFF9E5E6FL;
                if ((0x02193DEFL == (g_606[1][3].f1 ^ (((p_63 | 4294967295UL) < 0x69L) <= (safe_rshift_func_uint16_t_u_u((safe_unary_minus_func_uint32_t_u(p_64)), 2))))))
                {
                    l_967 = l_966[1];
                    for (l_726 = 18; (l_726 < 23); l_726 = safe_add_func_uint16_t_u_u(l_726, 6))
                    {
                        g_606[1][3] = g_119;
                        g_236 = 0xAE6C80ADL;
                    }
                }
                else
                {
                    unsigned short l_971 = 0x4807L;
                    l_971--;
                    for (p_65 = (-24); (p_65 < 48); p_65 = safe_add_func_int8_t_s_s(p_65, 4))
                    {
                        return g_237;
                    }
                }
                g_947[0][2] = ((safe_rshift_func_uint8_t_u_s(((safe_rshift_func_int8_t_s_u((p_65 & l_970), 3)) && g_4[2][0]), 7)) > 0x31FCL);
            }
        }
        l_980--;
        l_966[1].f2 = l_966[1].f3;
    }
    return l_459;
}







static unsigned short func_77(int p_78, unsigned p_79, short p_80, int p_81, struct S0 p_82)
{
    char l_85 = 0x73L;
    struct S0 l_95 = {0,0xF9L,58,14};
    short l_97 = 0x9589L;
    char l_131[4] = {0xE8L,0xE8L,0xE8L,0xE8L};
    int i;
lbl_136:
    l_85 = (-3L);
    if ((safe_sub_func_int8_t_s_s(p_82.f0, (safe_sub_func_uint16_t_u_u(g_4[0][0], l_85)))))
    {
        short l_98 = 0x46DAL;
        char l_114 = 0xB9L;
        int l_115[10][9] = {{0xAFF0E9B2L,0x0EF91DD1L,0x0EF91DD1L,0xAFF0E9B2L,0x0EF91DD1L,0x0EF91DD1L,0xAFF0E9B2L,0x0EF91DD1L,0x0EF91DD1L},{0xAFF0E9B2L,0x0EF91DD1L,0x0EF91DD1L,0xAFF0E9B2L,0x0EF91DD1L,0x0EF91DD1L,0xAFF0E9B2L,0x0EF91DD1L,0x0EF91DD1L},{0xAFF0E9B2L,0x0EF91DD1L,0x0EF91DD1L,0xAFF0E9B2L,0x0EF91DD1L,0x0EF91DD1L,0xAFF0E9B2L,0x0EF91DD1L,0x0EF91DD1L},{0xAFF0E9B2L,0x0EF91DD1L,0x0EF91DD1L,0xAFF0E9B2L,0x0EF91DD1L,0x0EF91DD1L,0xAFF0E9B2L,0x0EF91DD1L,0x0EF91DD1L},{0xAFF0E9B2L,0x0EF91DD1L,0x0EF91DD1L,0xAFF0E9B2L,0x0EF91DD1L,0x0EF91DD1L,0xAFF0E9B2L,0x0EF91DD1L,0x0EF91DD1L},{0xAFF0E9B2L,0x0EF91DD1L,0x0EF91DD1L,0xAFF0E9B2L,0x0EF91DD1L,0x0EF91DD1L,0xAFF0E9B2L,0x0EF91DD1L,0x0EF91DD1L},{0xAFF0E9B2L,0x0EF91DD1L,0x0EF91DD1L,0xAFF0E9B2L,0x0EF91DD1L,0x0EF91DD1L,0xAFF0E9B2L,0x0EF91DD1L,0x0EF91DD1L},{0xAFF0E9B2L,0x0EF91DD1L,0x0EF91DD1L,0xAFF0E9B2L,0x0EF91DD1L,0x0EF91DD1L,0xAFF0E9B2L,0x0EF91DD1L,0x0EF91DD1L},{0xAFF0E9B2L,0x0EF91DD1L,0x0EF91DD1L,0xAFF0E9B2L,0x0EF91DD1L,0x0EF91DD1L,0xAFF0E9B2L,0x0EF91DD1L,0x0EF91DD1L},{0xAFF0E9B2L,0x0EF91DD1L,0x0EF91DD1L,0xAFF0E9B2L,0x0EF91DD1L,0x0EF91DD1L,0xAFF0E9B2L,0x0EF91DD1L,0x0EF91DD1L}};
        int l_132 = 9L;
        char l_155 = 0xAFL;
        int i, j;
lbl_162:
        for (p_80 = 0; (p_80 >= (-6)); --p_80)
        {
            unsigned char l_101 = 2UL;
            g_92 = (-1L);
            for (p_78 = 10; (p_78 >= 14); p_78 = safe_add_func_int16_t_s_s(p_78, 3))
            {
                int l_96 = (-5L);
                int l_99 = (-5L);
                int l_100 = 0xD31AB14AL;
                l_95 = p_82;
                ++l_101;
                g_106 &= (safe_mod_func_uint32_t_u_u((p_82.f2 & p_78), g_67));
            }
        }
        p_81 ^= (safe_add_func_int16_t_s_s(1L, g_92));
        for (g_92 = (-3); (g_92 == 10); g_92 = safe_add_func_int16_t_s_s(g_92, 1))
        {
            int l_127 = 0xD361F497L;
            unsigned char l_157 = 1UL;
            g_111++;
            for (p_81 = 3; (p_81 >= 0); p_81 -= 1)
            {
                int i, j;
                if (g_83[p_81][(p_81 + 2)])
                {
                    --g_116;
                    g_119 = g_119;
                    p_82.f0 = (l_115[1][2] <= (6L ^ (-5L)));
                    if (g_83[3][0])
                        break;
                }
                else
                {
                    int l_120 = 0x5DBD19AAL;
                    g_119.f2 = ((l_120 == 0UL) ^ (safe_add_func_uint32_t_u_u((safe_lshift_func_int8_t_s_s((!l_120), 2)), (safe_mod_func_uint32_t_u_u(l_127, (safe_sub_func_int8_t_s_s(g_130[0], ((g_83[p_81][(p_81 + 2)] <= p_82.f1) != (((g_119.f1 < (l_127 >= p_82.f0)) & l_127) ^ l_97)))))))));
                    --g_133;
                    if (g_106)
                        goto lbl_136;
                }
            }
            for (p_78 = 21; (p_78 == 21); p_78 = safe_add_func_uint16_t_u_u(p_78, 5))
            {
                unsigned char l_156 = 0xAFL;
                l_157 = (safe_add_func_uint16_t_u_u(((((safe_add_func_uint16_t_u_u(l_115[7][6], ((safe_add_func_int8_t_s_s((((0x5129FF95L || l_95.f1) <= (((safe_rshift_func_uint8_t_u_u(g_130[0], 3)) < (safe_add_func_uint8_t_u_u(((((safe_mod_func_uint32_t_u_u(0x58F69C2BL, l_95.f3)) == p_80) == ((safe_sub_func_int8_t_s_s((p_82.f0 && (safe_mod_func_int8_t_s_s(g_116, g_4[5][1]))), g_116)) != g_83[2][1])) > l_127), l_155))) && (-1L))) ^ p_82.f0), g_83[3][4])) < l_156))) > p_81) == l_95.f0) >= p_82.f2), 0x6C98L));
                g_119.f2 = (p_82.f0 <= ((g_133 ^ ((safe_sub_func_uint8_t_u_u(p_82.f2, 0UL)) > g_83[1][0])) < (g_67 ^ (((g_119.f0 == l_85) ^ ((safe_rshift_func_uint16_t_u_u((((p_78 >= p_82.f0) >= l_95.f1) || 1UL), 3)) ^ 0x7454L)) <= p_82.f2))));
                g_119.f2 = p_78;
                if (l_95.f0)
                    goto lbl_162;
            }
        }
    }
    else
    {
        short l_163 = 0x3B3DL;
        unsigned l_210[4][7] = {{4294967290UL,4294967295UL,4294967295UL,4294967290UL,4294967295UL,4294967295UL,4294967290UL},{0x1E2D5C27L,0x038102A3L,0x1E2D5C27L,0x1E2D5C27L,0x038102A3L,0x1E2D5C27L,0x1E2D5C27L},{4294967290UL,4294967290UL,0x3D9690AAL,4294967290UL,4294967290UL,0x3D9690AAL,4294967290UL},{0x038102A3L,0x1E2D5C27L,0x1E2D5C27L,0x038102A3L,0x1E2D5C27L,0x1E2D5C27L,0x038102A3L}};
        unsigned l_235 = 1UL;
        int l_271 = (-1L);
        unsigned short l_285[7][7];
        struct S0 l_310[8] = {{-0,0x2EL,782,4},{-0,0x2EL,782,4},{-0,0x2EL,782,4},{-0,0x2EL,782,4},{-0,0x2EL,782,4},{-0,0x2EL,782,4},{-0,0x2EL,782,4},{-0,0x2EL,782,4}};
        unsigned l_339 = 0x462533FDL;
        int i, j;
        for (i = 0; i < 7; i++)
        {
            for (j = 0; j < 7; j++)
                l_285[i][j] = 0x27D3L;
        }
        if (l_163)
        {
            struct S0 l_166[3][10] = {{{-0,0xBAL,-675,11},{0,0x3EL,-444,13},{-0,1L,-934,6},{-0,0xBAL,-675,11},{-0,1L,-934,6},{0,0x3EL,-444,13},{-0,0xBAL,-675,11},{0,0xA1L,-80,2},{0,0xA1L,-80,2},{0,0x3EL,-444,13}},{{0,0xA1L,-80,2},{-0,0L,-466,5},{-0,0x3EL,-450,8},{-0,0x3EL,-450,8},{-0,0L,-466,5},{0,0xA1L,-80,2},{0,0x37L,568,0},{-0,0L,-466,5},{0,0x37L,568,0},{0,0xA1L,-80,2}},{{-0,1L,-934,6},{-0,0L,-466,5},{-0,0x7FL,-582,6},{-0,0L,-466,5},{-0,1L,-934,6},{-0,0x7FL,-582,6},{0,0x3EL,-444,13},{0,0x3EL,-444,13},{-0,0x7FL,-582,6},{-0,1L,-934,6}}};
            int i, j;
            for (g_92 = 0; (g_92 < 18); g_92 = safe_add_func_uint32_t_u_u(g_92, 9))
            {
                unsigned char l_209 = 250UL;
                l_166[2][7] = p_82;
                p_81 |= (safe_lshift_func_int16_t_s_s((safe_sub_func_uint32_t_u_u(l_95.f1, p_82.f3)), g_119.f3));
                for (l_163 = (-23); (l_163 > (-4)); l_163 = safe_add_func_int8_t_s_s(l_163, 7))
                {
                    short l_185 = 1L;
                    int l_216 = 8L;
                    unsigned char l_221 = 0UL;
                    if (((safe_lshift_func_int16_t_s_s(p_78, (safe_rshift_func_int8_t_s_s((g_119.f1 && (g_106 | g_4[0][0])), (l_166[2][7].f3 == ((safe_mod_func_uint16_t_u_u(1UL, ((safe_add_func_int8_t_s_s(((safe_rshift_func_int16_t_s_s((g_119.f2 | (safe_mod_func_int32_t_s_s(l_166[2][7].f2, g_67))), 7)) < 0xD7D1L), g_83[3][4])) || g_119.f3))) == l_185)))))) <= g_83[0][1]))
                    {
                        unsigned char l_191 = 0x92L;
                        int l_206 = 0L;
                        l_191 = ((safe_mod_func_uint8_t_u_u(g_119.f1, (safe_unary_minus_func_uint32_t_u(0x7A3C17D6L)))) >= (safe_mod_func_int32_t_s_s(g_119.f1, l_163)));
                        l_166[2][7].f2 = ((safe_lshift_func_int8_t_s_u((((+(((safe_mod_func_uint32_t_u_u(((((safe_lshift_func_int8_t_s_u((((safe_mod_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u((l_191 ^ 0x24B92E75L), 5)), p_82.f0)) < p_79) | ((l_191 & p_78) & ((safe_sub_func_int32_t_s_s(((safe_rshift_func_int16_t_s_s(((l_206 >= g_106) <= (safe_add_func_int8_t_s_s(l_185, 0xD7L))), l_209)) > p_82.f2), l_166[2][7].f2)) > g_130[0]))), 4)) & p_82.f2) && l_97) >= p_80), l_191)) > p_82.f3) != p_79)) >= l_166[2][7].f3) && l_210[2][4]), 3)) && p_82.f0);
                        l_95 = p_82;
                        return g_119.f1;
                    }
                    else
                    {
                        unsigned l_213 = 4294967291UL;
                        l_221 |= ((((safe_add_func_int32_t_s_s(l_213, (((p_79 >= (safe_rshift_func_int8_t_s_s(l_216, (l_213 >= ((4294967290UL < 0x1499A76EL) <= (safe_rshift_func_uint16_t_u_s((safe_lshift_func_uint8_t_u_u(1UL, 4)), p_82.f0))))))) <= g_116) | g_83[2][1]))) >= g_116) <= 0x0B182A6EL) ^ 1UL);
                        g_119.f2 = ((safe_add_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_s(((0xF8L > 0xBCL) <= 0x6D6FF152L), 6)), (safe_lshift_func_int8_t_s_s((safe_add_func_uint16_t_u_u(p_82.f0, (((!((((~g_106) == 8L) & l_213) ^ (safe_unary_minus_func_int32_t_s(((l_131[2] && l_85) | p_82.f0))))) > l_131[2]) == 0xFC83L))), 4)))) < p_81);
                        g_119.f2 = (safe_sub_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s(l_235, 2)), (p_82.f0 & g_119.f2)));
                    }
                    g_237++;
                    for (g_236 = 0; (g_236 < (-6)); --g_236)
                    {
                        int l_254 = 0x6BC6574CL;
                        if (l_210[0][4])
                            break;
                        if (g_111)
                            continue;
                        g_119.f2 = (((p_82.f3 == ((safe_lshift_func_int8_t_s_s(((0x64L == (safe_rshift_func_int16_t_s_u((safe_lshift_func_int8_t_s_u(((p_82.f2 && (safe_lshift_func_uint8_t_u_u(l_216, p_82.f1))) || ((((((((((((safe_lshift_func_int8_t_s_s(l_210[2][0], 3)) <= (!l_131[2])) > p_78) < (p_78 != 8UL)) || g_236) && l_85) && 0L) <= g_92) != p_81) != p_82.f1) && l_254) < g_119.f2)), l_254)), l_185))) <= (-7L)), g_67)) <= p_78)) == p_82.f2) == p_81);
                        if (g_116)
                            goto lbl_136;
                    }
                }
            }
            p_82.f2 = 8L;
            g_119 = g_119;
            g_236 = l_97;
        }
        else
        {
            unsigned l_255[3];
            int i;
            for (i = 0; i < 3; i++)
                l_255[i] = 4294967293UL;
            l_95.f2 &= g_3;
            return l_255[0];
        }
        if ((g_4[3][0] | 6L))
        {
            unsigned l_267 = 0x4FE22437L;
            g_119.f0 &= (safe_lshift_func_int8_t_s_u((safe_mod_func_int16_t_s_s((((((safe_unary_minus_func_int16_t_s(l_95.f1)) <= g_119.f2) != ((safe_rshift_func_uint8_t_u_u((safe_mod_func_int32_t_s_s((~g_4[0][2]), (g_67 ^ g_130[0]))), p_82.f2)) | (+(safe_rshift_func_int16_t_s_u((((+(((~l_163) <= g_83[2][1]) < (~(l_267 & 1L)))) && p_82.f1) & 0xB1FCE9C3L), 9))))) == l_267) == p_82.f0), 0x8E65L)), g_116));
            return g_116;
        }
        else
        {
            struct S0 l_270[5][1][10] = {{{{0,0xACL,-1015,13},{0,0L,-398,12},{0,0L,-398,12},{0,0xACL,-1015,13},{0,0L,-398,12},{0,0L,-398,12},{0,0xACL,-1015,13},{0,0L,-398,12},{0,0L,-398,12},{0,0xACL,-1015,13}}},{{{0,0L,-398,12},{0,0xACL,-1015,13},{0,0L,-398,12},{0,0L,-398,12},{0,0xACL,-1015,13},{0,0L,-398,12},{0,0L,-398,12},{0,0xACL,-1015,13},{0,0L,-398,12},{0,0L,-398,12}}},{{{0,0xACL,-1015,13},{0,0xACL,-1015,13},{-0,0xF0L,-1023,11},{0,0xACL,-1015,13},{0,0xACL,-1015,13},{-0,0xF0L,-1023,11},{0,0xACL,-1015,13},{0,0xACL,-1015,13},{-0,0xF0L,-1023,11},{0,0xACL,-1015,13}}},{{{0,0xACL,-1015,13},{0,0L,-398,12},{0,0L,-398,12},{0,0xACL,-1015,13},{0,0L,-398,12},{0,0L,-398,12},{0,0xACL,-1015,13},{0,0L,-398,12},{0,0L,-398,12},{0,0xACL,-1015,13}}},{{{0,0L,-398,12},{0,0xACL,-1015,13},{0,0L,-398,12},{0,0L,-398,12},{0,0xACL,-1015,13},{0,0L,-398,12},{0,0L,-398,12},{0,0xACL,-1015,13},{0,0L,-398,12},{0,0L,-398,12}}}};
            int l_367 = 0x47C1FB6BL;
            int l_368 = 0L;
            int i, j, k;
            for (g_236 = 10; (g_236 >= (-24)); g_236 = safe_sub_func_int16_t_s_s(g_236, 3))
            {
                unsigned l_291 = 0x8DD7419FL;
                g_119 = l_270[1][0][2];
                l_271 = g_106;
                for (l_235 = 0; (l_235 <= 31); ++l_235)
                {
                    unsigned char l_284 = 0xC9L;
                    int l_309 = (-7L);
                    for (g_133 = (-27); (g_133 >= 14); g_133 = safe_add_func_uint8_t_u_u(g_133, 9))
                    {
                        g_119.f0 ^= (((safe_mod_func_uint16_t_u_u(l_270[1][0][2].f1, 2L)) < g_92) | (!g_3));
                        p_82.f2 ^= g_83[2][1];
                        if (l_95.f3)
                            break;
                    }
                    if (((l_85 >= (p_82.f1 < (!(((safe_lshift_func_uint16_t_u_s((safe_add_func_uint32_t_u_u((safe_rshift_func_int8_t_s_s(l_284, l_285[1][1])), (safe_sub_func_int8_t_s_s(g_288, (((l_270[1][0][2].f3 | (safe_rshift_func_int8_t_s_u(l_291, 7))) < (((safe_sub_func_int32_t_s_s((safe_unary_minus_func_int16_t_s(g_83[1][2])), (safe_add_func_uint8_t_u_u(((safe_mod_func_uint16_t_u_u(l_210[2][2], g_119.f1)) < p_82.f2), 0x6DL)))) == g_3) & 0UL)) != 4294967295UL))))), g_119.f1)) && 5L) ^ l_284)))) ^ p_82.f3))
                    {
                        unsigned l_299 = 0x684484BAL;
                        if (l_284)
                            goto lbl_136;
                        p_82.f2 ^= g_119.f1;
                        l_299 = l_284;
                        g_119.f2 &= 0x2FC61834L;
                    }
                    else
                    {
                        g_119.f0 = (safe_rshift_func_int8_t_s_u(((safe_add_func_uint8_t_u_u((g_106 & g_3), g_83[3][0])) < (((safe_add_func_uint16_t_u_u((((p_80 || g_306[2][2][0]) < (safe_add_func_int32_t_s_s(((65535UL < (g_83[3][4] == l_284)) <= (~p_82.f3)), p_82.f3))) < l_309), g_237)) < p_82.f2) & p_82.f3)), 2));
                    }
                }
                l_310[7] = p_82;
            }
            for (l_85 = (-27); (l_85 < (-18)); l_85 = safe_add_func_int8_t_s_s(l_85, 8))
            {
                int l_316 = 0L;
                p_82.f2 |= p_81;
                g_236 = (safe_add_func_int32_t_s_s((safe_unary_minus_func_uint32_t_u((l_316 && (0xE0AACB86L > g_83[2][2])))), ((0xE5D2L >= (safe_sub_func_uint32_t_u_u(((safe_sub_func_uint8_t_u_u((l_270[1][0][2].f1 >= l_316), (safe_mod_func_int32_t_s_s(g_119.f1, (safe_unary_minus_func_uint8_t_u((safe_unary_minus_func_uint16_t_u(g_106)))))))) <= g_83[2][1]), g_83[0][3]))) | l_285[1][0])));
            }
            if (g_67)
            {
                char l_340 = 0xF3L;
                int l_341 = 0x10EBC4D4L;
                for (p_79 = 0; (p_79 <= 55); p_79++)
                {
                    l_271 = g_4[4][1];
                    if (l_270[1][0][2].f2)
                        continue;
                }
                l_310[7].f0 = (((((safe_rshift_func_int16_t_s_s(((p_82.f2 > g_306[6][2][1]) > (((safe_mod_func_int8_t_s_s((p_82.f1 < (safe_lshift_func_int8_t_s_s((~l_270[1][0][2].f2), 3))), g_306[4][5][0])) & g_83[2][1]) < ((safe_lshift_func_int16_t_s_u(p_80, (safe_lshift_func_uint16_t_u_u((l_339 <= (0x7B33A8B8L & l_340)), 2)))) | l_341))), p_82.f0)) & p_81) ^ (-9L)) >= 1UL) >= p_82.f1);
                p_82.f0 = l_95.f0;
            }
            else
            {
                unsigned char l_345 = 0x3AL;
                g_119.f0 = g_288;
                l_270[1][0][2].f2 |= l_310[7].f1;
                for (g_133 = (-15); (g_133 >= 11); g_133 = safe_add_func_int16_t_s_s(g_133, 4))
                {
                    int l_344 = 0xD1DA0B34L;
                    p_82.f2 &= ((l_344 | l_345) | p_82.f0);
                    g_236 &= (-1L);
                    g_236 = ((safe_mod_func_int8_t_s_s((-7L), ((safe_lshift_func_uint8_t_u_s(252UL, 6)) || p_78))) | (safe_add_func_int16_t_s_s((-2L), ((((safe_mod_func_int32_t_s_s((p_80 && (l_270[1][0][2].f0 > 65526UL)), (safe_lshift_func_uint8_t_u_s((safe_add_func_uint8_t_u_u((((safe_add_func_uint16_t_u_u(p_81, (safe_sub_func_int8_t_s_s(((safe_add_func_int16_t_s_s(((((((safe_add_func_int32_t_s_s((g_116 | l_270[1][0][2].f3), g_236)) & 65535UL) >= g_83[0][2]) != 255UL) ^ p_78) & p_82.f0), p_82.f0)) != p_82.f0), p_82.f3)))) <= 1UL) <= 65529UL), 4UL)), 5)))) || 0x4C8AL) && 0UL) == 0x48590ADCL))));
                }
                g_119 = p_82;
            }
            g_369++;
        }
        for (g_236 = 9; (g_236 <= 8); g_236 = safe_sub_func_uint16_t_u_u(g_236, 7))
        {
            short l_384[10][10] = {{(-9L),6L,6L,(-9L),0x18BFL,0x6AB0L,0x700DL,0x722BL,0x2C7EL,0x1FAFL},{1L,0x15FEL,0x2C7EL,0x700DL,6L,0x5161L,6L,0x700DL,0x2C7EL,0x15FEL},{0xDDADL,9L,0x18BFL,9L,0xE9AEL,0xDDADL,8L,6L,0x15FEL,0x15FEL},{0x700DL,0xF809L,0xDDADL,0x2C7EL,0x2C7EL,0xDDADL,0xF809L,0x700DL,9L,8L},{(-9L),0x18BFL,0x6AB0L,0x700DL,0x722BL,0x2C7EL,0x1FAFL,8L,0x1FAFL,0x2C7EL},{0x5161L,0x722BL,0x6AB0L,0x722BL,0x5161L,8L,9L,0x700DL,0xF809L,0xDDADL},{9L,0xE9AEL,0xDDADL,8L,6L,0x15FEL,0x15FEL,6L,8L,0xDDADL},{8L,8L,0x18BFL,0xDDADL,0x5161L,1L,6L,0x6AB0L,0x08BEL,0x2C7EL},{0x6AB0L,0x1FAFL,6L,0xF809L,0x722BL,0xF809L,6L,0x1FAFL,0x6AB0L,8L},{0xE9AEL,8L,0x08BEL,0x5161L,0x2C7EL,(-9L),0x15FEL,0x722BL,0x722BL,0x15FEL}};
            int i, j;
            for (g_67 = 0; (g_67 >= 27); g_67 = safe_add_func_uint8_t_u_u(g_67, 6))
            {
                unsigned short l_381 = 0x6459L;
                for (g_237 = 2; (g_237 != 58); ++g_237)
                {
                    unsigned char l_378 = 248UL;
                    if (g_111)
                        goto lbl_136;
                    g_119 = p_82;
                    l_378++;
                }
                --l_381;
                if (l_384[5][0])
                    break;
            }
        }
    }
    p_82.f0 = 0x83C6933AL;
    return p_78;
}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_4[i][j], "g_4[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_67, "g_67", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_83[i][j], "g_83[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_92, "g_92", print_hash_value);
    transparent_crc(g_106, "g_106", print_hash_value);
    transparent_crc(g_111, "g_111", print_hash_value);
    transparent_crc(g_116, "g_116", print_hash_value);
    transparent_crc(g_119.f0, "g_119.f0", print_hash_value);
    transparent_crc(g_119.f1, "g_119.f1", print_hash_value);
    transparent_crc(g_119.f2, "g_119.f2", print_hash_value);
    transparent_crc(g_119.f3, "g_119.f3", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_130[i], "g_130[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_133, "g_133", print_hash_value);
    transparent_crc(g_236, "g_236", print_hash_value);
    transparent_crc(g_237, "g_237", print_hash_value);
    transparent_crc(g_288, "g_288", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_306[i][j][k], "g_306[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_366, "g_366", print_hash_value);
    transparent_crc(g_369, "g_369", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_433[i], "g_433[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_462, "g_462", print_hash_value);
    transparent_crc(g_467, "g_467", print_hash_value);
    transparent_crc(g_484, "g_484", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_606[i][j].f0, "g_606[i][j].f0", print_hash_value);
            transparent_crc(g_606[i][j].f1, "g_606[i][j].f1", print_hash_value);
            transparent_crc(g_606[i][j].f2, "g_606[i][j].f2", print_hash_value);
            transparent_crc(g_606[i][j].f3, "g_606[i][j].f3", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_746, "g_746", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_784[i][j][k], "g_784[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_927, "g_927", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_947[i][j], "g_947[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_949, "g_949", print_hash_value);
    transparent_crc(g_1017, "g_1017", print_hash_value);
    transparent_crc(g_1111.f0, "g_1111.f0", print_hash_value);
    transparent_crc(g_1111.f1, "g_1111.f1", print_hash_value);
    transparent_crc(g_1111.f2, "g_1111.f2", print_hash_value);
    transparent_crc(g_1111.f3, "g_1111.f3", print_hash_value);
    transparent_crc(g_1313, "g_1313", print_hash_value);
    transparent_crc(g_1382.f0, "g_1382.f0", print_hash_value);
    transparent_crc(g_1382.f1, "g_1382.f1", print_hash_value);
    transparent_crc(g_1382.f2, "g_1382.f2", print_hash_value);
    transparent_crc(g_1382.f3, "g_1382.f3", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_1476[i][j], "g_1476[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_1560, "g_1560", print_hash_value);
    transparent_crc(g_1809, "g_1809", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_1848[i], "g_1848[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1999, "g_1999", print_hash_value);
    transparent_crc(g_2035, "g_2035", print_hash_value);
    transparent_crc(g_2185, "g_2185", print_hash_value);
    transparent_crc(g_2232, "g_2232", print_hash_value);
    transparent_crc(g_2311.f0, "g_2311.f0", print_hash_value);
    transparent_crc(g_2311.f1, "g_2311.f1", print_hash_value);
    transparent_crc(g_2311.f2, "g_2311.f2", print_hash_value);
    transparent_crc(g_2311.f3, "g_2311.f3", print_hash_value);
    transparent_crc(g_2339.f0, "g_2339.f0", print_hash_value);
    transparent_crc(g_2339.f1, "g_2339.f1", print_hash_value);
    transparent_crc(g_2339.f2, "g_2339.f2", print_hash_value);
    transparent_crc(g_2339.f3, "g_2339.f3", print_hash_value);
    transparent_crc(g_2386.f0, "g_2386.f0", print_hash_value);
    transparent_crc(g_2386.f1, "g_2386.f1", print_hash_value);
    transparent_crc(g_2386.f2, "g_2386.f2", print_hash_value);
    transparent_crc(g_2386.f3, "g_2386.f3", print_hash_value);
    transparent_crc(g_2493.f0, "g_2493.f0", print_hash_value);
    transparent_crc(g_2493.f1, "g_2493.f1", print_hash_value);
    transparent_crc(g_2493.f2, "g_2493.f2", print_hash_value);
    transparent_crc(g_2493.f3, "g_2493.f3", print_hash_value);
    transparent_crc(g_2602, "g_2602", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_2698[i][j], "g_2698[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
