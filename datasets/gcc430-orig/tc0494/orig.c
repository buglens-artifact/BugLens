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



static int g_4 = 1L;
static unsigned g_49 = 1UL;
static unsigned char g_62 = 0UL;
static unsigned g_111[1] = {6UL};
static char g_142 = 0L;
static int g_145 = (-1L);
static char g_166 = (-8L);
static int g_180 = 0xF8BEA3A2L;
static short g_234 = 0x462BL;
static char g_314 = 0xEFL;
static int g_358 = 1L;
static unsigned g_379[3][2][4] = {{{1UL,0UL,4294967295UL,0UL},{1UL,4294967295UL,0x2CCE6252L,0UL}},{{0x2CCE6252L,0UL,0x2CCE6252L,4294967295UL},{1UL,0UL,4294967295UL,0UL}},{{1UL,4294967295UL,0x2CCE6252L,0UL},{0x2CCE6252L,0UL,0x2CCE6252L,4294967295UL}}};
static int g_392 = (-4L);
static unsigned g_407 = 0x4FB513F8L;
static char g_410 = 0x8DL;
static unsigned g_419 = 0x2ACAEED8L;
static short g_433 = (-9L);
static short g_434 = (-1L);
static int g_447[6][9][4] = {{{0xAE2606BCL,0L,(-9L),(-1L)},{(-9L),(-1L),(-1L),0L},{0xAE2606BCL,(-7L),(-1L),(-5L)},{(-9L),(-1L),(-9L),0x4D402D4BL},{0xAE2606BCL,7L,(-9L),1L},{(-9L),1L,(-1L),7L},{0xAE2606BCL,0x4D402D4BL,(-1L),(-1L)},{(-9L),(-5L),(-9L),(-7L)},{0xAE2606BCL,0L,(-9L),(-1L)}},{{(-9L),(-1L),(-1L),0L},{0xAE2606BCL,(-7L),(-1L),(-5L)},{(-9L),(-1L),(-9L),0x4D402D4BL},{0xAE2606BCL,7L,(-9L),1L},{(-9L),1L,(-1L),7L},{0xAE2606BCL,0x4D402D4BL,(-1L),(-1L)},{(-9L),(-5L),(-9L),(-7L)},{0xAE2606BCL,0L,(-9L),(-1L)},{(-9L),(-1L),(-1L),0L}},{{0xAE2606BCL,(-7L),(-1L),(-5L)},{(-9L),(-1L),(-9L),0x4D402D4BL},{0xAE2606BCL,7L,(-9L),1L},{(-9L),1L,(-1L),7L},{0xAE2606BCL,0x4D402D4BL,(-1L),(-1L)},{(-9L),(-5L),(-9L),(-7L)},{0xAE2606BCL,0L,(-9L),(-1L)},{(-9L),(-1L),(-1L),0L},{0xAE2606BCL,(-7L),(-1L),(-5L)}},{{(-9L),(-1L),(-9L),0x4D402D4BL},{0xAE2606BCL,7L,(-9L),1L},{(-9L),1L,(-1L),7L},{0xAE2606BCL,0x4D402D4BL,(-1L),(-1L)},{(-9L),(-5L),(-9L),(-7L)},{0xAE2606BCL,0L,(-9L),(-1L)},{(-9L),(-1L),(-1L),0L},{0xAE2606BCL,(-7L),(-1L),(-5L)},{(-9L),(-1L),(-9L),0x4D402D4BL}},{{0xAE2606BCL,7L,(-9L),1L},{(-9L),1L,(-1L),7L},{0xAE2606BCL,0x4D402D4BL,(-1L),(-1L)},{(-9L),(-5L),(-9L),(-7L)},{0xAE2606BCL,0L,(-9L),(-1L)},{(-9L),(-1L),(-1L),0L},{0xAE2606BCL,(-7L),(-1L),(-5L)},{(-9L),(-1L),(-9L),0x4D402D4BL},{0xAE2606BCL,7L,(-9L),1L}},{{(-9L),1L,(-1L),7L},{0xAE2606BCL,0x4D402D4BL,(-1L),(-1L)},{(-9L),(-5L),(-9L),(-7L)},{0xAE2606BCL,0L,(-9L),(-1L)},{(-9L),(-1L),(-1L),0L},{0xAE2606BCL,(-7L),(-1L),(-5L)},{(-9L),(-1L),(-9L),0x4D402D4BL},{0xAE2606BCL,7L,(-9L),1L},{(-9L),1L,(-1L),7L}}};
static unsigned g_570 = 1UL;
static int g_572 = 0x0C0610ABL;
static short g_592 = (-7L);
static unsigned g_594 = 0x504B8664L;
static int g_637 = 6L;
static int g_701 = (-3L);
static unsigned g_715 = 4294967295UL;
static int g_743[7] = {0xAB53A12CL,0xAB53A12CL,5L,0xAB53A12CL,0xAB53A12CL,5L,0xAB53A12CL};
static int g_770 = 0xA6066780L;
static char g_844 = 0xBCL;
static unsigned short g_860[5][10][5] = {{{0xFBABL,65529UL,0x7753L,0xC8F7L,65532UL},{0x18C3L,0xD110L,0xB3B5L,0x4222L,0xBACBL},{0x25CCL,0xC8F7L,65535UL,1UL,0x70ACL},{0xBACBL,0UL,0x8056L,65531UL,0UL},{0xCA34L,65535UL,65535UL,0xCA34L,0x3E3FL},{5UL,8UL,65535UL,0xCFDDL,0xA0ADL},{65532UL,0xE3DCL,0xFBABL,0x56FCL,0xBD84L},{0x3606L,0UL,0UL,0xCFDDL,0x115BL},{65535UL,65535UL,65532UL,0xCA34L,0xB73AL},{0x2338L,65529UL,1UL,65531UL,0x3606L}},{{0x09DFL,0xB03DL,0x09DFL,1UL,65530UL},{65535UL,0x683EL,0x0899L,0x4222L,0x2FB9L},{0x0F04L,0x70ACL,65530UL,0xC8F7L,0x21C4L},{65533UL,1UL,0x0899L,0xCC03L,1UL},{1UL,65530UL,0x09DFL,0xFBABL,65535UL},{0xB3B5L,0x1A11L,1UL,0x58FEL,1UL},{1UL,1UL,65532UL,0x49F4L,0xB73AL},{0xD9B8L,0UL,0x115BL,5UL,65532UL},{65530UL,1UL,65529UL,0x1132L,0x3E3FL},{0x18C3L,0UL,0x6F4DL,65529UL,1UL}},{{65535UL,0x7753L,1UL,0xCA34L,0x9ED2L},{0x6F4DL,0x683EL,0xB3B5L,0UL,0x2338L},{65535UL,0x1132L,1UL,0xFBABL,65529UL},{0x8056L,0x0B3FL,65533UL,0x05B3L,0xB3B5L},{0xB73AL,0x25CCL,0x0F04L,1UL,0xBD84L},{0x8056L,0UL,65535UL,0UL,0UL},{65535UL,0x56FCL,0x09DFL,65535UL,0xFBABL},{0x6F4DL,0UL,0x2338L,0UL,0x6F4DL},{65535UL,0xC8F7L,65535UL,0x3E3FL,0x7753L},{0x18C3L,0UL,0x3606L,65528UL,0x7ECBL}},{{65530UL,0xBD84L,65532UL,0xC8F7L,0x7753L},{0xD9B8L,65528UL,5UL,65535UL,0x6F4DL},{0x7753L,1UL,0xCA34L,0x9ED2L,0xFBABL},{65533UL,5UL,0xBACBL,0x1986L,0UL},{65535UL,0xB03DL,0x25CCL,65535UL,0xBD84L},{0x7ECBL,1UL,0x18C3L,0xD110L,0x7ECBL},{0x49F4L,0xB73AL,65530UL,65535UL,0x1132L},{0x3606L,0xAE2EL,65535UL,1UL,65532UL},{0xC8F7L,0x1132L,65535UL,0x49F4L,0x49F4L},{4UL,1UL,4UL,0xCC03L,0x2338L}},{{0x0F04L,0xC8F7L,0xCA34L,0x56FCL,7UL},{0UL,0x58FEL,0x2338L,0xD110L,0x4FADL},{0x70ACL,65535UL,0xCA34L,7UL,0x21C4L},{1UL,0x683EL,4UL,0x05B3L,0xD9B8L},{65535UL,65535UL,65535UL,0x7753L,65535UL},{0x2FB9L,0xCC03L,65535UL,0UL,0xD334L},{65535UL,65529UL,65530UL,0x0F04L,0xB03DL},{1UL,5UL,1UL,0x683EL,0UL},{0x1132L,65529UL,1UL,65530UL,0x09DFL},{0x6F4DL,0xCC03L,0x3606L,0x8245L,0UL}}};
static unsigned g_912 = 4294967286UL;
static unsigned g_925 = 1UL;
static unsigned short g_963 = 65535UL;
static unsigned g_971 = 0UL;
static unsigned short g_1230 = 0x327FL;
static unsigned short g_1267 = 0x4470L;
static unsigned g_1392 = 4294967286UL;
static unsigned char g_1393[8][2] = {{0UL,0UL},{0UL,0UL},{0UL,0UL},{0UL,0UL},{0UL,0UL},{0UL,0UL},{0UL,0UL},{0UL,0UL}};
static short g_1464 = (-5L);
static unsigned g_1568 = 6UL;
static unsigned g_1626 = 0xCD90E0F7L;
static short g_1839 = 0x2D8CL;
static int g_2011 = 3L;
static unsigned char g_2024 = 0UL;
static int g_2071 = 0xF37F0059L;
static unsigned g_2364 = 0UL;
static unsigned g_2420 = 4294967295UL;
static int g_2504 = 2L;
static char g_2635[2] = {0x23L,0x23L};
static unsigned short g_2733 = 0xDBF9L;
static char g_2868 = (-4L);
static unsigned char g_3078[5] = {255UL,255UL,255UL,255UL,255UL};
static int g_3236 = 0x2B1FD033L;
static short g_3282[8] = {0x13FCL,0x13FCL,0x13FCL,0x13FCL,0x13FCL,0x13FCL,0x13FCL,0x13FCL};
static char g_3294 = (-1L);



static unsigned short func_1(void);
static short func_7(unsigned p_8);
static unsigned short func_18(short p_19, int p_20, unsigned p_21, int p_22);
static unsigned char func_26(unsigned p_27);
static unsigned func_34(unsigned p_35, int p_36, unsigned char p_37, unsigned short p_38, char p_39);
static char func_42(char p_43, char p_44);
static int func_50(unsigned short p_51, unsigned char p_52, unsigned p_53, unsigned p_54, unsigned short p_55);
static int func_69(int p_70, int p_71);
static char func_75(short p_76, unsigned p_77, int p_78, unsigned char p_79, int p_80);
static unsigned char func_89(unsigned char p_90, unsigned short p_91, unsigned short p_92, int p_93);
static unsigned short func_1(void)
{
    int l_9 = 0xE5664DC9L;
    unsigned char l_3164 = 0x6BL;
    int l_3165 = (-6L);
    int l_3353 = 0L;
    int l_3356 = (-1L);
    if (((safe_sub_func_int32_t_s_s((g_4 | ((safe_lshift_func_int16_t_s_s(func_7(l_9), (g_4 <= l_9))) , (g_2635[0] || (l_9 , 0L)))), ((+(~(l_9 & l_9))) < g_3078[0]))) <= g_3078[1]))
    {
        int l_3149 = (-8L);
        int l_3162 = 0x9FBE80D9L;
        int l_3163 = (-7L);
        for (g_1626 = 2; (g_1626 <= 6); g_1626 += 1)
        {
            int l_3159 = 0x9471F1E1L;
            int i;
            g_2504 = ((safe_rshift_func_int8_t_s_s(func_75(g_743[g_1626], (g_407 = ((!l_9) & (g_410 = (safe_sub_func_uint32_t_u_u(0x31D7DD22L, (g_701 = (g_2024 & (-1L)))))))), (g_2071 = (safe_sub_func_int8_t_s_s(0L, g_743[g_1626]))), (g_1393[1][0] = (safe_rshift_func_int8_t_s_s((safe_mod_func_uint16_t_u_u((g_637 ^ g_860[1][9][3]), g_572)), 1))), l_3149), 2)) ^ g_637);
            for (g_314 = 4; (g_314 >= 0); g_314 -= 1)
            {
                g_2504 = (safe_unary_minus_func_int8_t_s(l_9));
            }
            l_3149 = ((g_2635[0] , (g_111[0] ^ (safe_lshift_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s(0xBA18L, ((safe_mul_func_int16_t_s_s((g_234 && (l_3149 , (safe_rshift_func_int8_t_s_u((((((l_3149 >= (((((-6L) != g_637) || g_743[g_1626]) || l_3159) & l_9)) | (-8L)) || g_142) > g_419) <= 0xF9L), g_963)))), g_743[0])) , g_1230))), 9)))) , g_2420);
            g_145 = (-1L);
        }
        l_3165 = func_89(g_770, (l_3149 | ((safe_mod_func_int8_t_s_s(l_9, 9L)) >= ((-1L) < 5L))), ((((((l_3163 = (l_3162 = 7L)) > (l_3164 <= (func_34((g_1568 <= g_572), l_3149, g_912, g_860[1][9][3], g_447[1][7][1]) , 1L))) ^ g_2504) , g_434) , g_1464) <= 1L), l_3164);
        g_145 = (g_2024 | g_1568);
    }
    else
    {
        unsigned l_3168 = 0x5DE15FB1L;
        for (g_49 = 0; (g_49 == 1); g_49++)
        {
            short l_3181 = 0x415BL;
            g_145 = g_637;
            g_2504 = l_3168;
            l_3181 = (safe_rshift_func_uint16_t_u_u(0x40A3L, ((safe_sub_func_int8_t_s_s((safe_mul_func_uint8_t_u_u(g_1393[1][1], (g_743[3] & (safe_rshift_func_uint16_t_u_s(g_572, 1))))), (safe_mul_func_uint8_t_u_u((g_1626 , (g_715 , (safe_sub_func_uint16_t_u_u(l_3165, 0x7AF9L)))), l_3164)))) , 0UL)));
        }
    }
    g_2504 = ((safe_rshift_func_uint16_t_u_u(g_142, (g_2071 && (g_2024 = l_3164)))) & (safe_sub_func_int8_t_s_s((safe_mod_func_uint32_t_u_u(l_9, g_314)), (safe_mod_func_uint8_t_u_u(((0x60762E30L != (safe_sub_func_int8_t_s_s(((l_3165 = func_34(l_3165, (safe_lshift_func_int16_t_s_u(func_34((g_379[0][1][2] && ((safe_mod_func_int8_t_s_s(((!(!((g_166 = 0x4FL) | 0xEBL))) ^ l_3165), (-1L))) != g_2011)), g_392, g_379[0][1][2], g_1393[1][0], g_62), 9)), l_3164, l_3165, l_9)) <= l_9), 255UL))) >= l_3164), (-1L))))));
    for (g_770 = 0; (g_770 <= 1); g_770 += 1)
    {
        unsigned l_3199 = 0xB53433DBL;
        int l_3200 = 6L;
        unsigned char l_3227[5] = {1UL,1UL,1UL,1UL,1UL};
        char l_3233 = (-1L);
        int l_3237 = 0L;
        unsigned l_3250 = 0x483A8958L;
        int i;
        for (g_912 = 0; (g_912 <= 1); g_912 += 1)
        {
            int l_3198 = 0xC5D73677L;
            unsigned short l_3203 = 65534UL;
            unsigned l_3258 = 0x3FB655FBL;
            int l_3288 = 5L;
            int i, j;
            if (g_1393[g_912][g_770])
                break;
            if ((safe_add_func_int32_t_s_s((l_3198 = g_1393[g_770][g_770]), (l_3200 = (g_594 , l_3199)))))
            {
                for (l_3198 = 0; (l_3198 <= 4); l_3198 += 1)
                {
                    l_3200 = func_26(g_62);
                    if (l_3164)
                        break;
                    for (g_572 = 0; (g_572 <= 4); g_572 += 1)
                    {
                        if (g_62)
                            break;
                        return g_166;
                    }
                }
            }
            else
            {
                short l_3226 = 0xFE93L;
                g_2071 = (safe_add_func_uint8_t_u_u(l_3203, (safe_add_func_int8_t_s_s((!((safe_sub_func_int8_t_s_s(l_3203, func_89(((safe_sub_func_uint32_t_u_u((safe_sub_func_int16_t_s_s(g_860[4][7][4], ((safe_lshift_func_uint16_t_u_u((l_3165 = (l_3200 = (((safe_lshift_func_int8_t_s_s((g_166 = 0x47L), ((g_592 != (safe_rshift_func_uint16_t_u_s((g_2733 = g_1393[g_912][g_770]), (safe_lshift_func_int16_t_s_s(3L, 12))))) , (((safe_add_func_uint32_t_u_u(l_3165, ((safe_mul_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u(0xC8AFL, 5)), l_3226)) < l_3227[4]))) , 0x838FC12DL) ^ 1L)))) > g_743[3]) < 2L))), l_3198)) | l_3226))), l_3198)) <= 0x3290CDC3L), g_925, l_3203, l_3164))) != 65535UL)), g_743[3]))));
            }
            l_3237 = (safe_add_func_int8_t_s_s(((l_3164 ^ (safe_unary_minus_func_uint32_t_u((safe_mul_func_uint16_t_u_u((l_3165 = ((l_9 != l_3165) == ((l_3233 = 65535UL) & g_434))), ((((-1L) != ((safe_mod_func_int32_t_s_s((l_3200 = func_26((l_3199 > (g_2024 = l_3164)))), g_410)) & g_912)) > (-4L)) <= g_4)))))) | l_3227[4]), g_3236));
            for (l_3203 = 0; (l_3203 <= 4); l_3203 += 1)
            {
                unsigned l_3238 = 4294967295UL;
                int l_3251 = 0x437EDF75L;
                short l_3347[7][4][2] = {{{0xEC86L,(-4L)},{0x838FL,3L},{0xA6FEL,(-1L)},{0xDD90L,0xA6FEL}},{{0L,0x4C92L},{0L,0xA6FEL},{0xDD90L,(-1L)},{0xA6FEL,3L}},{{0x838FL,(-4L)},{0xEC86L,(-4L)},{(-4L),3L},{0x1109L,0L}},{{0xDD90L,0x1109L},{0xE31DL,0x4C92L},{(-1L),0x45A9L},{0xDD90L,0xE31DL}},{{0x45A9L,3L},{(-4L),0x838FL},{0xEC86L,0x838FL},{(-4L),3L}},{{0x45A9L,0xE31DL},{0xDD90L,0x45A9L},{(-1L),0x4C92L},{0xE31DL,0x1109L}},{{0xDD90L,0L},{0x1109L,3L},{(-4L),(-4L)},{0xEC86L,(-4L)}}};
                int l_3348[6];
                int i, j, k;
                for (i = 0; i < 6; i++)
                    l_3348[i] = 1L;
                l_3198 = (l_3238 , (g_1393[g_912][g_770] <= (g_2868 == g_637)));
                for (g_1568 = 1; (g_1568 <= 4); g_1568 += 1)
                {
                    return g_2420;
                }
                if (((func_26(g_166) | ((g_592 = ((safe_sub_func_int32_t_s_s(9L, (((0xE2F633A3L >= ((g_594 = (safe_rshift_func_int16_t_s_u(((g_433 = ((g_2504 <= (((((l_3198 , (l_3165 = (safe_unary_minus_func_int16_t_s(((safe_lshift_func_uint16_t_u_u(((safe_mul_func_uint8_t_u_u((safe_mul_func_int16_t_s_s(((l_3251 = l_3250) <= ((safe_mul_func_uint16_t_u_u((g_2733 = (!(g_860[g_912][(g_912 + 2)][(g_912 + 1)] = (safe_rshift_func_int8_t_s_u((l_3237 = (safe_rshift_func_uint8_t_u_u(g_4, 7))), ((g_2364 = l_3250) , g_743[3])))))), g_3078[2])) <= 4294967295UL)), l_3258)), l_3250)) && l_3227[4]), g_2011)) & l_3203))))) >= (-1L)) & l_3233) == (-1L)) & g_592)) <= 0UL)) == g_1392), 5))) , l_3251)) >= 0L) != 0x80FDL))) , (-5L))) <= 6UL)) , 0xFE969883L))
                {
                    unsigned short l_3263 = 0xDF7CL;
                    if (((safe_rshift_func_uint16_t_u_s((safe_add_func_uint8_t_u_u(l_3250, l_3263)), 2)) <= (safe_sub_func_int32_t_s_s(0x0A329FEDL, ((0xCE58BE42L & l_3165) , g_1393[g_770][g_770])))))
                    {
                        unsigned char l_3276 = 0x6EL;
                        l_3165 = (g_111[0] , (((safe_add_func_int16_t_s_s(g_3078[0], func_34((g_447[2][8][0] , l_3250), ((((func_26((safe_rshift_func_int16_t_s_u(g_743[3], 5))) , (g_2733 , (safe_lshift_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u(func_75((func_26(g_594) & g_2420), l_3276, l_3233, g_2024, l_3276), 7)), 0xE8L)), l_3263)))) < l_3227[4]) < g_2071) & 0x83L), g_592, l_3263, l_3238))) , l_3263) != g_594));
                    }
                    else
                    {
                        int l_3277[10] = {0L,0x8CE87FF2L,0x2D99EE70L,0x2D99EE70L,0x8CE87FF2L,0L,0x8CE87FF2L,0x2D99EE70L,0x2D99EE70L,0x8CE87FF2L};
                        int l_3285 = 3L;
                        int i;
                        g_2071 = (((g_379[0][0][0] >= (((((l_3198 = ((~(func_89((l_3277[2] <= (safe_mul_func_int16_t_s_s((g_637 && (((safe_lshift_func_uint16_t_u_s(((l_3250 && g_234) | ((((0x8298L == g_3282[0]) >= g_860[0][2][0]) < (((safe_add_func_int32_t_s_s((l_3285 = l_3227[4]), g_142)) , g_1393[1][0]) , 1L)) & l_3164)), 4)) <= 0x48D9L) & g_419)), g_145))), g_925, l_3250, l_3233) > g_379[0][1][2])) && l_3200)) <= g_111[0]) , g_1393[g_912][g_770]) | g_2635[0]) != g_2071)) , l_3164) & g_419);
                        if (l_3198)
                            break;
                        g_3236 = (-1L);
                        if (l_3165)
                            continue;
                    }
                    for (l_3165 = 0; (l_3165 > (-25)); l_3165--)
                    {
                        short l_3293 = (-9L);
                        g_3236 = l_3288;
                        l_3200 = func_34((g_2364 = (safe_sub_func_uint16_t_u_u(1UL, (g_3282[1] ^ 0x9DE0B6C4L)))), (l_3293 = (safe_rshift_func_int16_t_s_s(0L, l_3165))), (0x0ECCBCB9L != g_434), ((g_3294 > (func_34(l_3203, g_963, l_3250, l_3251, g_971) , g_407)) , 0x9F00L), g_1626);
                    }
                }
                else
                {
                    short l_3305 = 0x2D7CL;
                    short l_3306 = (-4L);
                    int l_3307 = 0x9B4D9FEDL;
                    l_3307 = ((g_963 = (((g_971 || g_433) , (g_860[1][9][3] ^ g_434)) & ((safe_mul_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s(((safe_rshift_func_uint16_t_u_s(0x8CBAL, (!(g_592 = func_75((safe_mod_func_uint32_t_u_u(((safe_lshift_func_int8_t_s_u((g_410 = (g_379[0][1][2] , (l_3198 = 0xB6L))), 1)) & (((g_392 > g_3294) == l_3305) , (-2L))), l_3305)), g_62, g_379[1][1][0], l_3227[4], l_3306))))) , 253UL), g_419)), l_3306)) >= g_3282[0]))) >= g_912);
                    for (g_145 = 0; (g_145 <= 4); g_145 += 1)
                    {
                        int i, j, k;
                        g_2504 = (safe_lshift_func_int8_t_s_u(g_379[g_912][g_770][(g_912 + 2)], 5));
                        l_3198 = 1L;
                    }
                    for (g_2024 = 0; (g_2024 <= 4); g_2024 += 1)
                    {
                        int l_3312 = 0x4E742855L;
                        int i;
                        g_145 = ((l_3312 = ((g_963 = g_3078[(g_770 + 3)]) | ((safe_lshift_func_uint16_t_u_u(0x2B78L, 2)) == (-6L)))) , (safe_sub_func_uint8_t_u_u(g_4, (safe_sub_func_int16_t_s_s((((l_3288 = (safe_rshift_func_uint16_t_u_s(((l_3238 , (+(safe_mul_func_uint16_t_u_u(((safe_rshift_func_uint16_t_u_u((safe_mul_func_int8_t_s_s(((g_3078[g_912] = (l_3251 > (safe_mul_func_int8_t_s_s((((safe_sub_func_int8_t_s_s(((safe_sub_func_int16_t_s_s(0x8F60L, (safe_lshift_func_int16_t_s_u(0xE5FDL, 9)))) == ((safe_sub_func_int8_t_s_s(g_1393[g_912][g_770], 8UL)) , 0L)), 0x5DL)) <= 0xEDDFL) > g_3078[1]), g_3294)))) == l_3227[4]), g_234)), g_860[3][2][0])) > g_860[1][9][3]), g_715)))) < l_3199), g_1568))) , g_1393[g_912][g_770]) | g_1626), g_860[2][1][1])))));
                        g_3236 = ((safe_lshift_func_uint16_t_u_u(((g_701 == (((safe_lshift_func_uint8_t_u_s((l_3288 = func_75(g_1393[g_912][g_770], g_715, (l_3251 = (-7L)), (safe_lshift_func_uint16_t_u_s(((safe_add_func_int16_t_s_s(0x7356L, (((safe_lshift_func_uint16_t_u_u(l_3347[1][1][0], 13)) || (l_3307 & (!(l_3312 = g_142)))) == (((g_145 != g_963) || g_572) , (-1L))))) > g_860[1][9][3]), 2)), l_3348[5])), g_743[3])) && l_3165) , l_3306)) != g_111[0]), 8)) && 0UL);
                        g_145 = 0x5B0EB2D0L;
                    }
                }
            }
        }
        g_3236 = (safe_rshift_func_int16_t_s_s((l_3165 = (g_925 , (g_234 = (((((g_2420 , ((((l_3250 && l_3227[4]) || l_3233) || (g_1393[1][1] , (safe_mul_func_uint16_t_u_u((((-2L) & ((g_2011 < (l_3353 != 246UL)) & g_111[0])) ^ g_379[0][1][2]), 0x1102L)))) && 0x5D01B00AL)) == 0UL) ^ 0xAAD5E856L) , g_925) != 0x9CB8456FL)))), l_3353));
        if (g_1464)
            continue;
        for (g_592 = 0; (g_592 <= 1); g_592 += 1)
        {
            int i, j;
            g_145 = g_1393[(g_770 + 5)][g_770];
        }
    }
    l_3356 = (l_3165 = (safe_lshift_func_int16_t_s_u(g_1230, 0)));
    return g_743[4];
}







static short func_7(unsigned p_8)
{
    char l_25 = 0x13L;
    int l_1465[4];
    short l_2787 = 5L;
    unsigned short l_2810[2][2][9] = {{{0xD8F1L,1UL,0x790BL,0x790BL,1UL,0xD8F1L,0x28FAL,1UL,0x28FAL},{0xD8F1L,1UL,0x790BL,0x790BL,1UL,0xD8F1L,0x28FAL,1UL,0x28FAL}},{{0x3409L,0xD8F1L,65532UL,65532UL,0xD8F1L,0x3409L,0x925EL,0xD8F1L,0x925EL},{0x3409L,0xD8F1L,65532UL,65532UL,0xD8F1L,0x3409L,0x925EL,0xD8F1L,0x925EL}}};
    char l_2814 = (-1L);
    short l_2894 = 0x1546L;
    short l_2945 = 0L;
    unsigned l_3033[7] = {0x434B9488L,4294967295UL,0x434B9488L,0x434B9488L,4294967295UL,0x434B9488L,0x434B9488L};
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_1465[i] = 0x7197BC25L;
    l_1465[2] = (safe_mul_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s((safe_mul_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u(func_18((safe_sub_func_int8_t_s_s(l_25, (g_4 || func_26((((safe_sub_func_int16_t_s_s(0xDDCAL, p_8)) < (safe_lshift_func_uint8_t_u_s((l_1465[2] = (safe_mod_func_int8_t_s_s((func_34(p_8, (safe_mul_func_int8_t_s_s(func_42((l_25 != ((safe_mod_func_uint32_t_u_u((((safe_mod_func_uint32_t_u_u((g_49 = 0x972737AEL), 6L)) & (p_8 >= 0L)) <= 0L), g_4)) < l_25)), g_4), l_25)), l_25, p_8, g_447[3][2][0]) || l_25), g_1464))), 1))) >= 1L))))), l_25, p_8, p_8), 8)), (-5L))), 6)), 1UL));
    for (g_314 = 0; (g_314 <= (-5)); --g_314)
    {
        l_1465[2] = p_8;
    }
    for (g_62 = 0; (g_62 <= 0); g_62 += 1)
    {
        int l_2681[9][4];
        int l_2688 = 0x583E0304L;
        int l_2689 = 1L;
        unsigned short l_2772[9][5] = {{0xC735L,0xBE17L,0x06BDL,0x4B19L,0x4B19L},{0xB469L,0xBE17L,0xB469L,0UL,0x4B19L},{0xC735L,0xDB5CL,0xB469L,0x4B19L,0UL},{0xC735L,0xBE17L,0x06BDL,0x4B19L,0x4B19L},{0xB469L,0xBE17L,0xB469L,0UL,0x4B19L},{0xC735L,0xDB5CL,0xB469L,0x4B19L,0UL},{0xC735L,0xBE17L,0x06BDL,0x4B19L,0x4B19L},{0xB469L,0xBE17L,0xB469L,0UL,0x4B19L},{0xC735L,0xDB5CL,0xB469L,0x4B19L,0UL}};
        short l_2842 = 8L;
        char l_2928 = 0x68L;
        char l_2997 = 1L;
        unsigned l_2998 = 1UL;
        short l_3019 = 0x5FFEL;
        unsigned short l_3116 = 0UL;
        unsigned l_3121 = 0xDE15CDBCL;
        unsigned char l_3136 = 0UL;
        int i, j;
        for (i = 0; i < 9; i++)
        {
            for (j = 0; j < 4; j++)
                l_2681[i][j] = 0x0EA5D856L;
        }
        l_2689 = ((((g_111[g_62] , (safe_rshift_func_int8_t_s_s((l_2681[1][1] = 1L), (((safe_mul_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u(g_963, (p_8 == (p_8 | 0xB3L)))), l_1465[0])) > (l_2688 = func_34((((safe_rshift_func_uint16_t_u_u(0xBCD3L, g_111[g_62])) < p_8) & g_111[g_62]), g_111[g_62], g_111[g_62], g_4, p_8))) != 65529UL)))) , 4294967292UL) & p_8) ^ 0UL);
        if (g_314)
            break;
        for (g_180 = 0; (g_180 <= 1); g_180 += 1)
        {
            char l_2698[2];
            int l_2699 = (-1L);
            char l_2750 = (-1L);
            unsigned short l_2789[7] = {0x7A9DL,0x7A9DL,0x7A9DL,0x7A9DL,0x7A9DL,0x7A9DL,0x7A9DL};
            int l_2929 = 8L;
            char l_2995 = 0x07L;
            unsigned char l_3055 = 0x02L;
            int l_3133 = (-7L);
            int i;
            for (i = 0; i < 2; i++)
                l_2698[i] = 0x72L;
            l_2699 = ((func_34((g_379[2][1][2] = l_2688), g_111[g_62], (safe_sub_func_int8_t_s_s(func_34((safe_mul_func_int8_t_s_s((g_743[3] ^ (safe_rshift_func_int8_t_s_u((safe_lshift_func_int16_t_s_u(((g_701 , ((l_1465[2] = (g_2635[0] = g_912)) == (1UL & ((func_34((l_2698[0] = (p_8 > ((g_743[3] || g_111[g_62]) , g_358))), l_2681[7][0], p_8, l_25, g_392) , g_1626) <= p_8)))) || g_2364), g_715)), g_1626))), l_25)), l_2681[1][1], p_8, l_2699, g_637), 1UL)), p_8, l_25) < 0UL) & g_392);
            l_1465[0] = 0L;
            for (g_2420 = 0; (g_2420 <= 1); g_2420 += 1)
            {
                int l_2744[1];
                int i, j, k;
                for (i = 0; i < 1; i++)
                    l_2744[i] = 0L;
                if ((safe_mod_func_int16_t_s_s((safe_mul_func_uint8_t_u_u((~(safe_sub_func_int16_t_s_s(((safe_rshift_func_int8_t_s_s((g_2635[g_62] = (safe_mod_func_int16_t_s_s(((safe_add_func_uint16_t_u_u(((((0xB5D2C1E1L >= ((safe_sub_func_int32_t_s_s((safe_rshift_func_int16_t_s_s(((!((safe_add_func_uint8_t_u_u((safe_add_func_int16_t_s_s(func_34((g_379[(g_62 + 2)][g_62][(g_62 + 3)] = (g_379[(g_180 + 1)][g_2420][g_2420] && (g_2635[g_2420] && (g_2635[g_2420] , l_2681[1][1])))), g_592, (g_1393[1][0] = 1UL), (((p_8 < (l_1465[2] = l_2681[1][1])) < 65532UL) || g_963), p_8), 65534UL)), 2L)) , l_2689)) == g_743[4]), g_2420)), 0xA3A9C7EAL)) || 7L)) , g_592) & g_358) | 0x09BDB669L), p_8)) | 0L), l_25))), 4)) , (-7L)), g_572))), g_166)), 0x07B3L)))
                {
                    g_2504 = (safe_rshift_func_int8_t_s_s(g_145, 7));
                    g_2071 = 0x12765BEEL;
                }
                else
                {
                    unsigned l_2722 = 4294967290UL;
                    int l_2725 = 0x0CF2ABC8L;
                    int l_2788 = 0x242A0BCDL;
                    if (p_8)
                    {
                        unsigned l_2728 = 4294967292UL;
                        l_2681[1][1] = ((func_34(((((l_2725 = ((l_1465[3] = (l_2699 = (g_1839 >= (l_2722 = 1L)))) <= (safe_sub_func_uint16_t_u_u(0x5002L, 0x0AC0L)))) ^ ((g_1230 = (safe_lshift_func_uint8_t_u_s(l_2728, 1))) < (safe_rshift_func_int16_t_s_u((((g_2733 = ((p_8 <= (~l_2681[1][1])) && (l_2689 = ((+p_8) & (g_1464 = (safe_lshift_func_int16_t_s_s((l_25 > g_2024), p_8))))))) , 0xB7L) , l_2698[1]), 3)))) | l_2728) || g_111[0]), g_434, p_8, p_8, p_8) >= g_62) , 5L);
                    }
                    else
                    {
                        char l_2749 = 0L;
                        int l_2757 = 0x6CF099D6L;
                        l_2744[0] = (g_2071 = (((safe_sub_func_uint32_t_u_u((!((safe_sub_func_int8_t_s_s(p_8, ((safe_mod_func_int8_t_s_s(((safe_mul_func_int16_t_s_s(0x9167L, func_34(g_447[5][4][1], p_8, p_8, p_8, g_49))) , ((safe_sub_func_uint32_t_u_u(g_925, g_971)) , 0xFFL)), g_166)) < g_142))) == g_379[(g_62 + 2)][g_62][(g_62 + 3)])), 0x63937602L)) == g_844) && p_8));
                        l_2699 = (l_1465[2] = (safe_lshift_func_int16_t_s_u(((p_8 < (safe_mod_func_int16_t_s_s(func_34((l_2749 , 0x830384A7L), p_8, l_2750, g_1267, (safe_rshift_func_int16_t_s_s((+p_8), 0))), (safe_mul_func_uint16_t_u_u((safe_add_func_uint16_t_u_u((p_8 & g_2733), g_572)), g_392))))) , p_8), g_860[3][2][1])));
                        l_2757 = l_2722;
                    }
                    for (g_166 = 1; (g_166 >= 0); g_166 -= 1)
                    {
                        int i, j, k;
                        if (g_379[g_166][g_2420][(g_180 + 1)])
                            break;
                        if (l_1465[(g_62 + 3)])
                            break;
                        l_2744[0] = 0xA28F82DBL;
                        g_145 = l_2698[0];
                    }
                    for (g_570 = 0; (g_570 <= 1); g_570 += 1)
                    {
                        if (p_8)
                            break;
                    }
                    for (g_234 = 0; (g_234 <= 1); g_234 += 1)
                    {
                        int i, j, k;
                        l_2744[0] = (safe_mul_func_uint8_t_u_u(p_8, (safe_sub_func_uint16_t_u_u((((((g_1568 = p_8) && p_8) , ((((safe_mod_func_int32_t_s_s(0x4DB12DDBL, func_34((g_379[g_2420][g_234][(g_180 + 2)] = (p_8 > ((safe_add_func_uint8_t_u_u((safe_add_func_int16_t_s_s(g_770, (safe_sub_func_int16_t_s_s(((g_971 = (((safe_add_func_uint8_t_u_u(g_2635[0], p_8)) || (l_2725 , p_8)) , g_234)) != g_379[0][1][2]), p_8)))), p_8)) || 1L))), g_925, p_8, l_2681[1][1], g_1267))) & 4L) > g_4) , l_2698[0])) , 0L) ^ l_2772[5][1]), g_570))));
                        l_2744[0] = (safe_sub_func_uint8_t_u_u(p_8, (l_2772[5][1] , ((safe_add_func_int32_t_s_s((func_34((l_2788 = (g_62 >= (g_592 != (safe_add_func_int32_t_s_s((((g_2635[g_2420] || func_34((safe_sub_func_int8_t_s_s(((safe_mul_func_int16_t_s_s((((safe_mod_func_uint32_t_u_u(4294967292UL, func_34((g_379[g_2420][(g_62 + 1)][(g_2420 + 1)] = ((l_2698[1] , (safe_add_func_uint16_t_u_u(p_8, ((((l_2725 = l_2744[0]) , l_25) , l_2787) <= g_2420)))) | 0xE1B7BDB6L)), l_1465[2], l_25, p_8, l_2722))) != g_4) == g_844), 1L)) , 1L), p_8)), p_8, g_743[3], l_2688, p_8)) == g_111[g_62]) >= l_2787), 1UL))))), l_2789[4], g_2011, l_2744[0], g_1568) == 0x6062L), g_912)) == g_447[0][4][1]))));
                    }
                }
            }
            l_1465[2] = (((p_8 > (g_180 <= 0x26L)) && (safe_mod_func_uint16_t_u_u(g_314, (safe_sub_func_int16_t_s_s(0x5E5FL, ((safe_add_func_int8_t_s_s(l_2689, (g_1393[1][0] = ((safe_mul_func_uint8_t_u_u(((g_447[2][8][0] || (safe_lshift_func_int16_t_s_u((p_8 == p_8), 8))) != 0x525512EEL), g_860[1][9][3])) | 0xE64DL)))) && g_379[0][1][2])))))) >= g_111[g_62]);
            for (g_2733 = 0; (g_2733 <= 1); g_2733 += 1)
            {
                unsigned short l_2811 = 0xB185L;
                int l_2851 = 1L;
                int l_2855 = 0x4F13F1ADL;
                int l_2883 = 7L;
                unsigned char l_2897 = 0xF8L;
                short l_2904[1];
                unsigned l_2996 = 4294967288UL;
                int l_3058 = 0x70692F15L;
                unsigned char l_3059 = 0UL;
                unsigned l_3096 = 0x77ED0AACL;
                unsigned char l_3099 = 0xF1L;
                int i;
                for (i = 0; i < 1; i++)
                    l_2904[i] = (-8L);
                for (g_419 = 0; (g_419 <= 1); g_419 += 1)
                {
                    int l_2822 = 0L;
                    char l_2841 = 5L;
                    int i, j, k;
                    if (((safe_sub_func_int8_t_s_s(0L, ((((g_379[g_180][g_2733][g_180] > (safe_lshift_func_uint8_t_u_s(g_379[(g_62 + 1)][g_180][g_62], 6))) || g_2635[g_2733]) , (safe_mul_func_int8_t_s_s(g_860[(g_2733 + 1)][(g_419 + 5)][(g_419 + 2)], (safe_mul_func_uint16_t_u_u(func_34(((((safe_rshift_func_int8_t_s_s(p_8, p_8)) || ((!p_8) , 0xD34BL)) != 1L) > p_8), g_2635[0], l_2810[1][1][0], l_2810[1][1][0], g_4), l_2699))))) != g_592))) && l_2811))
                    {
                        unsigned short l_2821 = 0xBF93L;
                        short l_2843 = 1L;
                        g_2071 = (safe_sub_func_uint32_t_u_u((l_2814 <= ((g_963 = (g_715 >= (safe_mod_func_uint8_t_u_u(((safe_rshift_func_uint16_t_u_s((safe_mul_func_uint16_t_u_u(0UL, (0xA8L == g_743[3]))), (((l_2811 ^ (!l_2821)) <= ((func_34(((l_2822 = 0x47L) || (safe_add_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_u(((0x6653L == p_8) || 0x3EL), l_2699)), 0x7AD4AB23L))), p_8, l_2772[7][4], g_111[0], p_8) >= 0x63L) >= 65527UL)) , 3L))) == p_8), p_8)))) != p_8)), l_2772[2][4]));
                        g_2504 = (g_2071 = ((safe_mod_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u(l_2698[0], ((((+p_8) < l_25) > (safe_rshift_func_uint8_t_u_s(((safe_add_func_uint8_t_u_u(((func_34(g_145, (p_8 < (l_2688 = (safe_mul_func_uint16_t_u_u((safe_mod_func_int8_t_s_s(((safe_mul_func_uint16_t_u_u((l_2841 > ((((g_971 < (((g_770 , (l_2681[1][1] = p_8)) > 9UL) >= p_8)) , l_2842) >= l_2811) != 65535UL)), g_314)) ^ g_637), g_1230)), 65531UL)))), p_8, g_570, g_166) < g_447[4][1][1]) & 0x9DL), 0x86L)) || g_594), l_2843))) ^ g_1626))), g_2071)) ^ g_142));
                        if (g_392)
                            break;
                        g_2504 = (g_145 = 0x0CF1E456L);
                    }
                    else
                    {
                        int l_2848 = 0x65632E78L;
                        int l_2852 = 0L;
                        l_2689 = ((func_34(((safe_mul_func_uint8_t_u_u(((((safe_mul_func_int8_t_s_s(func_34((g_379[1][0][1] = func_34(g_701, l_2848, (safe_mod_func_uint32_t_u_u((((((l_2852 = (l_2851 = g_2071)) < ((safe_mul_func_int16_t_s_s((l_2855 = (l_1465[2] = (-3L))), ((safe_sub_func_int8_t_s_s(((safe_mod_func_int8_t_s_s(l_2848, (safe_add_func_int8_t_s_s(g_145, (p_8 , (safe_sub_func_uint16_t_u_u(((safe_mul_func_int8_t_s_s((((safe_sub_func_int16_t_s_s(p_8, (g_594 || l_2698[0]))) && p_8) == g_447[0][5][2]), l_2750)) != l_2848), l_2811))))))) ^ 0L), g_963)) , g_2868))) & g_1267)) ^ 0xC6L) == 0xE3BCL) , p_8), 8L)), l_2848, g_1839)), p_8, l_2811, g_715, l_2811), p_8)) & 1L) >= g_594) >= g_860[3][9][2]), p_8)) > p_8), g_2635[0], g_860[0][6][3], p_8, g_770) > g_358) || p_8);
                        if (g_1393[4][1])
                            break;
                        l_2699 = func_34(g_379[(g_62 + 1)][g_180][g_62], (1UL <= ((safe_lshift_func_int8_t_s_s((0x1CF9L <= ((l_2855 < (((((((safe_mod_func_int16_t_s_s((safe_add_func_int16_t_s_s((p_8 , ((safe_rshift_func_int16_t_s_u((g_433 = 0xCB40L), l_2822)) ^ ((l_2852 = (safe_sub_func_uint32_t_u_u(((safe_mod_func_uint8_t_u_u(0x54L, func_34(func_34((((((((safe_rshift_func_int8_t_s_u((-4L), 6)) & g_860[(g_2733 + 1)][(g_419 + 5)][(g_419 + 2)]) ^ 0x57E4L) , p_8) >= 7UL) ^ l_2841) && 0x3D20L), p_8, p_8, g_379[(g_62 + 1)][g_180][g_62], l_2681[1][3]), g_743[3], p_8, g_379[g_180][g_2733][g_180], l_2814))) <= g_860[(g_2733 + 1)][(g_419 + 5)][(g_419 + 2)]), l_2841))) > g_447[2][8][0]))), l_2811)), 1L)) ^ g_1568) , (-6L)) < 0x7400L) || g_142) | p_8) | p_8)) != 0x599655FAL)), g_1464)) != 0x77C2C50FL)), p_8, p_8, g_572);
                        if (l_2883)
                            break;
                    }
                    l_2681[1][1] = (g_407 == (safe_sub_func_uint32_t_u_u(((safe_lshift_func_uint8_t_u_u(func_34((safe_add_func_int32_t_s_s(((safe_mul_func_int8_t_s_s(g_111[0], (((safe_mod_func_int32_t_s_s(func_34(func_34(g_379[g_180][g_2733][g_180], (l_2822 = ((l_2855 = 0x6DL) , (1UL || l_2698[0]))), l_2750, p_8, p_8), p_8, g_1230, p_8, l_2894), g_743[3])) < g_111[0]) & l_2811))) & g_2024), p_8)), g_2364, g_2504, l_2842, p_8), 5)) , g_701), p_8)));
                }
                for (l_25 = 0; (l_25 <= 1); l_25 += 1)
                {
                    unsigned l_2946[1];
                    int l_2947 = 0x1F39B553L;
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                        l_2946[i] = 4294967295UL;
                    for (l_2787 = 1; (l_2787 >= 0); l_2787 -= 1)
                    {
                        int i, j, k;
                        if (g_379[(g_62 + 2)][l_2787][(g_62 + 1)])
                            break;
                    }
                    if ((safe_add_func_int32_t_s_s((0x7C38L & ((((g_1230 = 0UL) != (((l_2689 = func_34(g_379[(l_25 + 1)][(g_62 + 1)][(l_25 + 1)], l_2851, (g_379[(l_25 + 1)][(g_62 + 1)][(l_25 + 1)] , l_2681[5][3]), g_166, l_2681[7][2])) || p_8) != 4294967295UL)) ^ l_2698[0]) > (-1L))), l_2897)))
                    {
                        g_701 = g_142;
                        l_2855 = (((l_2904[0] = (p_8 < ((safe_rshift_func_int16_t_s_s((g_4 || ((l_25 || (safe_sub_func_uint8_t_u_u(func_34((l_2851 = ((l_1465[2] = l_2894) && g_701)), p_8, p_8, (safe_mod_func_uint8_t_u_u((l_2699 = (g_2024 = ((g_419 > (g_1568 = (l_2883 | l_2772[0][1]))) , g_963))), p_8)), l_2789[2]), g_379[(l_25 + 1)][(g_62 + 1)][(l_25 + 1)]))) & g_743[3])), g_379[(l_25 + 1)][(g_62 + 1)][(l_25 + 1)])) || 0xEAL))) , 0xC36D0642L) ^ 0x692EE7E7L);
                    }
                    else
                    {
                        unsigned short l_2911 = 0x801AL;
                        int l_2930[3][8] = {{1L,0L,1L,0L,1L,0L,1L,0L},{1L,0L,1L,0L,1L,0L,1L,0L},{1L,0L,1L,0L,1L,0L,1L,0L}};
                        int i, j;
                        l_2911 = ((func_34(g_860[1][9][3], ((g_234 , ((safe_add_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s(g_180, 1)), (0UL >= (safe_lshift_func_int8_t_s_s((l_2883 || ((((func_34(l_1465[2], p_8, ((p_8 && p_8) || p_8), g_715, p_8) ^ p_8) ^ g_447[2][8][0]) & p_8) <= 4294967295UL)), 2))))) == 255UL)) && 0xD9L), p_8, g_715, p_8) , 255UL) , g_314);
                        g_2504 = (l_1465[2] = 0xE476B1B1L);
                        l_2930[0][4] = ((!((safe_sub_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u(((g_844 , 9L) & (g_594 , ((safe_mul_func_int16_t_s_s((safe_rshift_func_int8_t_s_u(g_358, 6)), l_2911)) && p_8))), func_34((l_1465[2] = (((safe_add_func_uint32_t_u_u(0x16FF01BAL, (g_701 = p_8))) | (safe_mul_func_uint16_t_u_u(((safe_mod_func_int16_t_s_s(((safe_add_func_int16_t_s_s(g_379[(l_25 + 1)][(g_62 + 1)][(l_25 + 1)], p_8)) <= g_1267), l_2787)) && g_925), g_2635[0]))) && 0L)), g_379[(l_25 + 1)][(g_62 + 1)][(l_25 + 1)], g_379[(l_25 + 1)][(g_62 + 1)][(l_25 + 1)], g_570, g_592))), l_2928)) , l_2929)) , g_637);
                        g_701 = ((l_2810[1][1][0] , ((safe_sub_func_int16_t_s_s((p_8 , l_2911), (safe_sub_func_uint16_t_u_u(g_2071, p_8)))) ^ l_2698[0])) | 0xB2AD3660L);
                    }
                    l_2947 = (l_2855 = func_34(p_8, ((safe_mod_func_int8_t_s_s((func_34(((((func_34((g_715 = (g_1626 = (((l_1465[2] = g_358) != ((-9L) > ((safe_add_func_uint8_t_u_u(((g_1839 ^ l_2810[1][1][0]) && func_34((safe_add_func_int8_t_s_s((((((l_2855 || func_34((l_2929 = (((safe_mod_func_uint8_t_u_u(((safe_sub_func_uint8_t_u_u(func_34((l_2842 , 4294967295UL), ((p_8 == 8UL) == g_572), g_447[2][8][0], p_8, p_8), 1L)) , g_912), l_2883)) | 0x4DL) <= l_2787)), l_2750, g_2504, g_770, l_2851)) & p_8) == p_8) > 0x4D3CL) <= 0UL), p_8)), p_8, g_379[(l_25 + 1)][(g_62 + 1)][(l_25 + 1)], p_8, l_2688)), l_2945)) , g_743[3]))) >= 0x6C49L))), l_2894, p_8, g_963, l_2772[1][2]) || 0xA6CC2654L) || 1L) != l_2946[0]) >= 0x142BA443L), l_2811, g_166, p_8, l_2851) > l_2772[5][1]), p_8)) , p_8), l_2894, g_570, g_637));
                }
                for (g_844 = 1; (g_844 >= 0); g_844 -= 1)
                {
                    short l_2959 = (-1L);
                    int l_2999 = 1L;
                    for (l_2750 = 1; (l_2750 >= 0); l_2750 -= 1)
                    {
                        int l_2972 = (-1L);
                        int i, j;
                        if (g_2635[g_180])
                            break;
                        l_2851 = g_1393[(g_844 + 3)][g_844];
                        l_2959 = (safe_rshift_func_int8_t_s_s(g_2024, (((safe_mul_func_int8_t_s_s(((g_166 = (((0xA3E2L && (g_142 , ((safe_sub_func_int32_t_s_s(func_34(g_379[0][1][2], p_8, g_2364, ((g_49 < (safe_unary_minus_func_uint16_t_u((safe_rshift_func_int8_t_s_s((l_2688 = ((g_434 = 0xF48CL) | func_34((safe_mul_func_int8_t_s_s(1L, 3L)), p_8, g_971, p_8, g_2635[g_180]))), p_8))))) , l_1465[3]), g_2635[g_180]), g_4)) | g_1392))) ^ 0x3D5FD398L) >= 1L)) ^ g_2024), 250UL)) , 0UL) , l_2698[1])));
                        l_2999 = (safe_add_func_int16_t_s_s((func_34((safe_mod_func_int8_t_s_s((p_8 | (((safe_add_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u(9UL, (l_2998 = (safe_mul_func_uint16_t_u_u(p_8, (l_2972 < (l_2929 = (((safe_mod_func_int32_t_s_s((g_2504 = (safe_mul_func_int16_t_s_s((((l_2972 > (safe_lshift_func_uint8_t_u_u((safe_mul_func_int16_t_s_s(((g_447[2][8][0] | ((safe_lshift_func_int8_t_s_s(func_34((((safe_add_func_int8_t_s_s((((safe_mod_func_int32_t_s_s(0x6478491EL, (safe_lshift_func_uint16_t_u_s((safe_lshift_func_uint8_t_u_s((safe_lshift_func_uint16_t_u_u(9UL, ((safe_add_func_uint8_t_u_u((g_111[g_62] == 0x2BL), l_1465[2])) | 0xBB1C3D6AL))), l_2897)), p_8)))) && 0x716BL) , p_8), g_2420)) > 0xAFL) || 0xF751F4F8L), l_2959, p_8, l_2959, p_8), l_2995)) == g_637)) == g_392), l_2996)), l_2855))) , 2UL) , (-10L)), l_2897))), 9L)) < g_358) == l_2997)))))))), 0x6214L)), 0x6208L)) & g_2420) , 0x51L)), g_358)), g_1839, p_8, g_2868, l_2787) < p_8), 3UL));
                    }
                    for (g_2868 = 0; (g_2868 <= 1); g_2868 += 1)
                    {
                        short l_3006 = 1L;
                        int i, j;
                        l_2699 = (safe_add_func_int8_t_s_s(((((safe_mod_func_uint16_t_u_u((safe_mul_func_int16_t_s_s((l_3006 | (g_1393[(g_180 + 3)][g_844] = (p_8 < ((safe_mod_func_uint32_t_u_u((0x2CL > 1L), ((safe_rshift_func_uint16_t_u_u(func_34(g_570, p_8, p_8, (safe_lshift_func_uint8_t_u_s(func_34(((l_2851 = (((safe_mod_func_uint16_t_u_u((safe_mul_func_int8_t_s_s(func_34(l_2959, (g_2011 = (safe_rshift_func_uint16_t_u_s(func_34(g_111[0], p_8, g_379[0][1][2], g_180, p_8), 3))), p_8, p_8, l_2698[0]), 0x56L)), g_379[0][1][2])) , g_743[0]) || p_8)) , g_111[0]), g_1568, p_8, l_3006, p_8), 5)), p_8), p_8)) || 0x1D919607L))) >= g_358)))), l_1465[2])), l_2698[0])) , l_2698[0]) < 0UL) | l_2894), l_2999));
                        return g_971;
                    }
                }
                if (l_3019)
                {
                    unsigned short l_3026 = 0x5B1DL;
                    l_1465[2] = ((safe_mod_func_int32_t_s_s(l_2789[4], (safe_mod_func_uint32_t_u_u((p_8 = (((l_2699 = func_34(g_2733, l_2851, ((func_34(p_8, ((0xC83ADDE6L >= ((safe_sub_func_int8_t_s_s(func_34((g_592 | (l_2750 > (l_3026 >= g_2024))), l_2904[0], l_3026, g_1839, l_1465[0]), (-6L))) < 0L)) , p_8), g_592, p_8, p_8) <= 4294967295UL) , g_358), l_3026, p_8)) != 255UL) , 0xF5FACCEAL)), g_433)))) < l_2998);
                    if (p_8)
                    {
                        unsigned char l_3038 = 0xA7L;
                        int l_3039 = (-1L);
                        l_3039 = (((g_1464 = ((safe_mod_func_uint8_t_u_u((g_1230 != (safe_lshift_func_uint8_t_u_s(0x57L, g_1393[5][0]))), (safe_add_func_int8_t_s_s(((4L == (g_407 = l_3033[2])) , 5L), (l_2929 = (safe_lshift_func_int8_t_s_s((g_358 != (safe_mul_func_int16_t_s_s(0x0836L, (l_2851 != l_3038)))), 2))))))) , g_2024)) | 0x6829L) && p_8);
                    }
                    else
                    {
                        unsigned l_3054 = 4294967292UL;
                        l_2688 = (func_34((safe_rshift_func_uint16_t_u_s(g_912, ((((((p_8 & (8UL == (safe_mod_func_uint8_t_u_u(p_8, (((safe_mul_func_int16_t_s_s((safe_mul_func_int8_t_s_s(p_8, ((((((g_2868 = (l_2689 = g_1464)) > ((safe_lshift_func_uint16_t_u_u((safe_add_func_int8_t_s_s((0x893BE504L >= 0UL), (g_2024 ^ p_8))), 5)) && 0UL)) | p_8) , p_8) ^ 1L) > 0x1CD64EC8L))), l_3054)) | l_2789[1]) , p_8))))) , l_3054) ^ l_3055) == g_434) == l_2928) >= 0x58L))), g_145, g_410, p_8, p_8) , (-6L));
                        l_3059 = ((func_34(p_8, (safe_lshift_func_uint16_t_u_s(l_3058, (g_743[3] , (g_715 & g_142)))), (l_2811 > g_166), g_860[4][0][0], p_8) , g_925) , g_1392);
                    }
                    g_701 = 1L;
                    g_701 = (((safe_rshift_func_uint8_t_u_s(((safe_sub_func_uint8_t_u_u(0x75L, 0L)) == 0x0EL), 4)) == ((safe_sub_func_int32_t_s_s(((safe_mod_func_int16_t_s_s((safe_add_func_uint32_t_u_u(((safe_mul_func_uint16_t_u_u((l_2897 == (safe_lshift_func_int16_t_s_u((l_2681[1][1] = (!p_8)), l_2699))), 1L)) == (((p_8 | (((((safe_sub_func_uint16_t_u_u((l_2851 = (l_2929 = ((safe_add_func_int16_t_s_s((p_8 != p_8), g_743[4])) , g_1568))), (-6L))) == l_25) | 0xF2L) & p_8) | p_8)) == g_2868) >= 0x32D4L)), p_8)), g_3078[2])) > 0x88L), p_8)) && p_8)) ^ p_8);
                }
                else
                {
                    unsigned l_3093[7] = {0x0BA90AE4L,0x0BA90AE4L,0x0BA90AE4L,0x0BA90AE4L,0x0BA90AE4L,0x0BA90AE4L,0x0BA90AE4L};
                    int l_3128 = (-10L);
                    int i;
                    for (l_3058 = 0; (l_3058 <= 1); l_3058 += 1)
                    {
                        int l_3094 = (-8L);
                        int l_3095 = (-9L);
                        l_2688 = (safe_lshift_func_int16_t_s_u((safe_sub_func_uint16_t_u_u((safe_mul_func_int8_t_s_s(((p_8 , (safe_rshift_func_uint16_t_u_u(func_34((safe_lshift_func_int8_t_s_u((l_3095 = (((((p_8 , (((((p_8 == g_2868) == ((l_2851 = (l_2855 = g_844)) | (safe_rshift_func_uint16_t_u_s(0xE5FAL, 0)))) | (((l_2929 = (l_3093[1] = (0x2BB6L || (p_8 < (safe_sub_func_int32_t_s_s((g_701 = (g_145 = l_2996)), g_860[1][9][3])))))) == p_8) != p_8)) == 4294967295UL) != (-3L))) & 1UL) >= l_2810[1][0][7]) || l_3094) || 0xE0L)), 7)), p_8, l_3096, g_419, p_8), 0))) < g_166), 0L)), l_2897)), 9));
                        l_2851 = (l_2855 = (0x016DL <= (safe_sub_func_int8_t_s_s(p_8, ((((l_3099 & p_8) | 0x37L) | (safe_mod_func_int16_t_s_s(1L, 1L))) & l_2811)))));
                        g_2071 = 0x97AA0ADAL;
                        g_2071 = p_8;
                    }
                    l_2681[1][1] = ((safe_lshift_func_uint16_t_u_s((safe_sub_func_uint16_t_u_u(p_8, (((safe_lshift_func_int16_t_s_s(((g_433 > (safe_mod_func_int16_t_s_s(l_2750, (safe_rshift_func_int16_t_s_u((safe_mul_func_uint8_t_u_u(p_8, (((safe_sub_func_uint16_t_u_u((func_34(l_3116, (((p_8 ^ l_2904[0]) , (l_2681[1][1] = (p_8 > (safe_sub_func_uint8_t_u_u((((safe_rshift_func_uint8_t_u_u(func_34(l_3093[6], l_2810[1][1][0], l_2897, l_3033[2], l_3121), 7)) , p_8) , p_8), (-1L)))))) , l_3121), g_180, g_572, l_2945) != 2L), 0xE811L)) , g_166) || p_8))), g_111[0]))))) , g_358), 5)) < l_2995) > l_2814))), g_2071)) != g_2504);
                    if ((l_1465[0] = func_34(p_8, ((l_1465[2] = ((safe_add_func_int16_t_s_s(0x96E2L, (g_1839 = (func_34((g_1626 = (((g_407 = (safe_rshift_func_uint16_t_u_u(0x7C30L, (p_8 | (l_2699 = (l_2698[0] != g_2868)))))) > (l_2851 = (l_3128 = (p_8 | (p_8 > ((safe_mul_func_uint8_t_u_u((p_8 , l_3093[1]), 6UL)) || (-6L))))))) != 7L)), l_2997, p_8, g_3078[0], p_8) , l_2929)))) | l_2688)) && l_3093[4]), p_8, l_2789[4], p_8)))
                    {
                        int l_3137 = 0L;
                        short l_3138 = 0x873FL;
                        l_2699 = ((l_3093[1] != ((safe_mul_func_uint16_t_u_u(1UL, ((func_34(g_1392, p_8, (((func_34((func_34(((g_434 , l_2904[0]) , ((((g_2635[1] = (safe_add_func_int8_t_s_s(((l_3133 , (g_860[2][6][3] = (l_2851 = (p_8 , ((safe_mod_func_int16_t_s_s((((((((l_3128 = l_2789[0]) > p_8) == l_25) | l_3055) > l_2698[0]) >= p_8) < p_8), l_2995)) && l_3136))))) < l_3093[0]), (-7L)))) || (-5L)) | l_2810[0][1][2]) , g_3078[2])), g_925, p_8, l_3137, l_3138) > 0x134CL), g_314, l_2811, l_3058, g_3078[0]) < l_2699) > g_407) , p_8), g_2364, p_8) , l_2810[1][1][6]) > l_1465[2]))) , l_2688)) || g_2024);
                    }
                    else
                    {
                        g_2071 = (l_3128 = l_3116);
                    }
                }
            }
        }
    }
    return p_8;
}







static unsigned short func_18(short p_19, int p_20, unsigned p_21, int p_22)
{
    unsigned l_1536 = 0xB24EC529L;
    int l_1539 = 0xBAEFDC5CL;
    int l_1540 = 0L;
    int l_1555[8][2][5] = {{{0x314EA925L,0x5C574D02L,0xBE9FDA33L,0xBE9FDA33L,0x5C574D02L},{(-1L),0xF6FD9EAFL,0xBE9FDA33L,0xCEC66BFEL,0x7C77001FL}},{{0xD4A390D8L,(-1L),0x1AE51DB7L,0xF2CA548BL,0xCEC66BFEL},{0xE20F0B23L,1L,0x7C77001FL,0x314EA925L,0x5C574D02L}},{{0xD4A390D8L,0x314EA925L,0x3D1C298CL,0x5C574D02L,0x3D1C298CL},{(-1L),(-1L),0xC5B13D1EL,0x5C574D02L,0x8DD79250L}},{{0x314EA925L,0xD4A390D8L,0xF6FD9EAFL,0x314EA925L,(-1L)},{1L,0xE20F0B23L,0xBE9FDA33L,0xF2CA548BL,0xE20F0B23L}},{{(-1L),0xD4A390D8L,0L,0xCEC66BFEL,0xCEC66BFEL},{0xF6FD9EAFL,(-1L),0xF6FD9EAFL,0xBE9FDA33L,0xCEC66BFEL}},{{0x5C574D02L,0x314EA925L,0x7C77001FL,1L,0xE20F0B23L},{0xD4A390D8L,1L,0xA1634B97L,0x5C574D02L,(-1L)}},{{0x3D1C298CL,(-1L),0x7C77001FL,0xE20F0B23L,0x8DD79250L},{1L,0xF6FD9EAFL,0xF6FD9EAFL,1L,0x3D1C298CL}},{{1L,0x5C574D02L,0L,0xF2CA548BL,0x5C574D02L},{0x3D1C298CL,0xD4A390D8L,0xBE9FDA33L,0x7C77001FL,0xCEC66BFEL}}};
    int l_1566 = 0xD91A5856L;
    unsigned l_1567 = 7UL;
    char l_1642 = (-1L);
    unsigned char l_1811 = 0xA0L;
    int l_1812 = (-3L);
    short l_1837 = 0x8775L;
    unsigned l_1906 = 0UL;
    int l_1953 = 4L;
    unsigned char l_1972 = 3UL;
    unsigned l_1973[1];
    unsigned short l_2031 = 0xA0A7L;
    int l_2126[9] = {(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L)};
    unsigned char l_2237 = 0UL;
    unsigned l_2436 = 0UL;
    unsigned l_2461[8] = {0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL};
    unsigned char l_2503 = 0UL;
    unsigned l_2522 = 4294967286UL;
    short l_2561 = 0xB1ACL;
    unsigned l_2574[8] = {4294967289UL,4294967292UL,4294967289UL,4294967292UL,4294967289UL,4294967292UL,4294967289UL,4294967292UL};
    unsigned l_2610 = 6UL;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_1973[i] = 0x09FF8A5AL;
    l_1540 = (safe_mul_func_int8_t_s_s(l_1536, (safe_mul_func_int16_t_s_s((((g_743[3] & func_34(g_1393[1][0], (g_860[1][9][3] > g_594), l_1539, l_1539, ((l_1536 == func_75(p_19, g_912, p_21, g_1393[7][0], g_570)) != 1UL))) , g_379[0][1][3]) == p_20), g_743[3]))));
    l_1555[1][0][4] = (safe_mul_func_int8_t_s_s((safe_sub_func_uint32_t_u_u(func_34(((l_1540 != func_26(g_572)) != (((safe_rshift_func_int8_t_s_u(0x03L, 0)) , ((l_1540 , (safe_lshift_func_int8_t_s_s(((g_392 , (g_592 = p_21)) <= (safe_mod_func_uint8_t_u_u((((safe_add_func_int16_t_s_s((safe_add_func_int8_t_s_s((l_1555[1][0][3] = ((g_963 >= (l_1539 = ((p_21 <= 0x3A214F0AL) <= l_1540))) , p_22)), l_1540)), g_433)) && p_21) , p_21), p_20))), 2))) , p_20)) , l_1555[1][0][3])), g_1392, g_447[2][8][0], g_743[1], g_743[3]), l_1536)), g_1464));
    if ((func_42(func_26(g_234), (((safe_lshift_func_uint8_t_u_s(p_20, 5)) , (safe_sub_func_uint16_t_u_u(p_22, (g_570 > (((g_572 , (l_1539 = (l_1555[0][0][1] = (safe_mod_func_uint32_t_u_u((p_21 = (g_1568 = (((p_22 >= (l_1567 = ((((safe_sub_func_uint32_t_u_u((safe_add_func_uint16_t_u_u((p_21 | ((l_1566 == p_22) && g_433)), 0x8C4BL)), g_419)) <= p_22) > 0x3F1FCB2CL) != p_22))) < 0xBD59L) , g_770))), 1UL))))) >= l_1566) > l_1540))))) , l_1540)) >= p_22))
    {
        char l_1569[1][2][10] = {{{0xA3L,0xADL,0xA3L,0xA3L,0xADL,0xA3L,0xA3L,0xADL,0xA3L,0xA3L},{0xADL,0xADL,0x96L,0xADL,0xADL,0x96L,0xADL,0xADL,0x96L,0xADL}}};
        unsigned l_1588 = 0xF452F514L;
        unsigned char l_1651 = 0UL;
        int l_1658 = 0x1B83DAD0L;
        int i, j, k;
        if (((l_1569[0][0][1] , 0x84142244L) && l_1555[1][0][3]))
        {
            unsigned short l_1574[2][9][4] = {{{0x81EFL,0xFD6CL,0UL,0xEDE4L},{0xB51BL,0x029EL,65534UL,0x06AAL},{65531UL,1UL,65535UL,0x029EL},{0xD49CL,65535UL,0xD68FL,0x81EFL},{0UL,0xB9BBL,65534UL,0x7755L},{1UL,0UL,0xCDE5L,0UL},{0x81EFL,65534UL,0xB51BL,1UL},{65534UL,0xB9BBL,0UL,0UL},{0x029EL,0xD49CL,0x99DCL,0x029EL}},{{0x029EL,0x7755L,0UL,0x3C93L},{65534UL,0x029EL,0xB51BL,2UL},{0x81EFL,0UL,0xCDE5L,0xEDE4L},{1UL,0xD68FL,65534UL,0x3C93L},{0UL,0xEDE4L,65534UL,65534UL},{0UL,0UL,0UL,0xD49CL},{0x029EL,0UL,1UL,0xEDE4L},{0x7755L,0xB9BBL,65535UL,1UL},{0xD49CL,0xB9BBL,0x06F7L,0xEDE4L}}};
            int l_1587 = 0xE24607F0L;
            int l_1635 = 1L;
            int i, j, k;
            for (g_1464 = 0; (g_1464 >= (-1)); g_1464--)
            {
                int l_1586 = (-1L);
                int l_1596 = 0x97FEE97DL;
                char l_1597 = (-9L);
                unsigned l_1656 = 4294967295UL;
                if ((safe_rshift_func_int8_t_s_u(((g_166 = l_1574[1][7][2]) & ((g_594 != 0xEB17CC06L) >= (7UL | 0UL))), 0)))
                {
                    unsigned l_1595 = 0xFF5AE864L;
                    int l_1598 = 0xE69DBC25L;
                    l_1586 = ((g_592 >= func_75(g_62, (g_971 = ((g_1393[4][0] = (((safe_rshift_func_int8_t_s_u(p_22, ((((l_1569[0][0][6] == (g_234 == 0xE9711872L)) != (((safe_sub_func_uint32_t_u_u((safe_unary_minus_func_int32_t_s((65532UL || (safe_rshift_func_int8_t_s_s((l_1587 = (((safe_mul_func_int16_t_s_s((g_715 , (safe_add_func_uint8_t_u_u(p_22, 0x5FL))), l_1586)) < 0xDFC4L) & g_49)), 6))))), l_1569[0][0][1])) != 0xD8L) ^ 0xB50DEAB0L)) , 0xB60A7EF6L) && 0x0A1F3E57L))) & l_1567) < (-7L))) && l_1588)), p_21, l_1588, l_1574[1][0][0])) > p_19);
                    p_22 = (((((l_1598 = (g_572 & (safe_add_func_uint8_t_u_u(l_1574[1][7][2], func_89(p_22, (safe_add_func_uint8_t_u_u(g_234, (l_1569[0][0][1] < func_34(p_22, (l_1587 = (((func_34(l_1540, (((safe_mod_func_uint32_t_u_u((g_166 ^ g_844), l_1595)) && l_1596) < p_22), g_1267, g_1393[5][0], g_1392) > 6UL) , 0x2500L) & l_1597)), l_1588, p_22, l_1574[1][7][2])))), g_180, g_570))))) && p_20) | g_743[3]) | 0x7891L) == p_19);
                    for (g_637 = 0; (g_637 >= (-10)); --g_637)
                    {
                        unsigned l_1613 = 4294967295UL;
                        int l_1616 = (-1L);
                        int l_1625 = (-2L);
                        l_1586 = (safe_rshift_func_uint16_t_u_s((p_22 , (g_860[1][9][3] = g_392)), (safe_lshift_func_uint8_t_u_u(func_89(p_21, ((l_1566 = ((safe_lshift_func_uint8_t_u_s((((l_1569[0][0][4] >= (p_20 ^ (g_1267 = ((1L & ((safe_mul_func_uint16_t_u_u(func_89(((safe_lshift_func_uint8_t_u_s((safe_sub_func_uint16_t_u_u(8UL, (g_419 != (l_1587 = (0UL || g_1464))))), p_22)) , 0UL), l_1613, p_19, g_1230), 0x243DL)) < (-1L))) <= l_1586)))) < 0xCBEBL) , p_22), g_572)) , 4294967288UL)) <= 0xD25AFDA2L), p_21, l_1536), g_1393[1][0]))));
                        l_1616 = (((p_22 != (g_971 == l_1566)) == (((safe_lshift_func_int8_t_s_u((func_69(l_1616, (safe_lshift_func_int8_t_s_s(g_392, func_75(((safe_lshift_func_int8_t_s_s((l_1625 = func_69(func_89(g_912, (l_1587 = ((p_19 <= ((((l_1586 = (safe_rshift_func_int8_t_s_s(((safe_lshift_func_int8_t_s_s((+(+p_21)), (func_69(l_1613, l_1574[1][6][0]) && (-1L)))) , g_743[3]), 2))) , 0xB1FF9234L) && 4294967295UL) < l_1555[6][0][1])) , g_637)), p_22, g_925), p_21)), l_1595)) , l_1597), g_1626, l_1588, g_743[3], p_19)))) > 1L), 7)) | l_1574[0][2][0]) , l_1598)) >= l_1574[1][7][2]);
                        g_145 = p_20;
                        return p_19;
                    }
                }
                else
                {
                    g_145 = p_20;
                }
                l_1596 = ((((safe_mul_func_int16_t_s_s(((((((func_42((safe_rshift_func_uint16_t_u_s(0xE983L, 1)), (((((safe_sub_func_int32_t_s_s(((safe_add_func_uint8_t_u_u(((p_22 & ((l_1587 = func_42(l_1597, l_1635)) , ((0xDF14L > p_21) < (safe_mul_func_uint16_t_u_u((((((safe_lshift_func_int8_t_s_s(func_69(((safe_mod_func_int16_t_s_s(func_50(l_1642, l_1539, g_419, l_1536, p_20), 0xCA2DL)) , 0L), g_1230), 7)) ^ g_1393[1][0]) ^ g_1626) >= 0xBFFB1531L) , 0x5186L), g_1392))))) , p_19), g_912)) , l_1587), g_1626)) <= l_1635) && 0x6EECD8E8L) & g_912) > 5UL)) == g_912) && g_379[0][1][2]) && g_1230) <= g_1626) ^ 0x6516L) < 248UL), 0L)) < (-1L)) , g_592) , l_1642);
                p_22 = (safe_lshift_func_uint16_t_u_u(0xAA95L, 1));
                for (g_166 = (-8); (g_166 != 18); g_166++)
                {
                    char l_1657 = 0xE4L;
                    char l_1665 = 0x7AL;
                    l_1658 = (safe_mod_func_int32_t_s_s(g_743[3], ((g_860[1][9][3] , (l_1596 = ((safe_mod_func_uint16_t_u_u((l_1586 = (l_1587 = 65535UL)), func_34(l_1651, (func_34((p_21 | func_34(((safe_mul_func_int16_t_s_s(l_1651, (g_447[2][8][0] ^ (1L | (g_145 = g_180))))) >= 0x04L), g_637, l_1656, l_1574[1][7][2], g_860[1][6][1])), l_1657, l_1574[1][1][0], g_570, g_572) & 0L), p_21, g_1626, p_19))) >= 0xF0L))) , 0xB0618C2BL)));
                    for (l_1642 = 0; (l_1642 <= 1); l_1642 += 1)
                    {
                        int i, j, k;
                        l_1596 = (func_34((0xB9F6L && (safe_lshift_func_uint16_t_u_s(((g_379[l_1642][l_1642][(l_1642 + 2)] , (g_410 == ((g_142 < (safe_sub_func_uint32_t_u_u(g_1393[3][1], (g_637 & (0x9687E48EL != (g_592 || (safe_sub_func_int8_t_s_s((g_314 = ((((2UL & l_1665) & p_19) && (-6L)) | l_1540)), g_1230)))))))) , 0x371A921DL))) == l_1635), p_19))), g_379[1][0][0], p_22, l_1651, g_379[1][1][2]) | (-1L));
                        return l_1555[6][0][3];
                    }
                    if (p_20)
                    {
                        return g_49;
                    }
                    else
                    {
                        if (p_22)
                            break;
                    }
                    for (g_234 = 15; (g_234 == 25); g_234++)
                    {
                        short l_1676 = 0xF4AAL;
                        g_145 = (l_1658 , g_594);
                        p_22 = ((((p_20 == (g_145 = (safe_rshift_func_uint16_t_u_s(l_1665, g_4)))) , (func_34((safe_rshift_func_uint16_t_u_u(((+((l_1587 = (safe_add_func_uint8_t_u_u(p_21, ((((g_701 = 1L) | (g_145 = (g_1393[1][0] ^ (l_1658 = (~0x4FE2L))))) > l_1635) > (!((safe_lshift_func_uint8_t_u_u((l_1596 = ((p_22 | 0xAAC1BD0BL) || g_419)), l_1555[1][0][3])) , p_20)))))) , g_701)) > p_21), g_49)), g_111[0], l_1539, p_19, l_1676) || l_1676)) >= g_447[2][8][0]) | g_4);
                        g_701 = g_392;
                    }
                }
            }
            for (g_314 = 0; (g_314 > 22); g_314++)
            {
                unsigned short l_1699 = 0UL;
                unsigned char l_1700 = 0x13L;
                int l_1716[3][7][7] = {{{2L,0L,0L,0x33B2A606L,(-1L),0x6252083FL,0x79E64CDCL},{0xE534FE23L,0x6252083FL,(-1L),(-1L),6L,6L,(-1L)},{0L,(-2L),0L,(-1L),1L,0xE534FE23L,0x6252083FL},{0L,0x33B2A606L,(-1L),0x6252083FL,0x79E64CDCL,(-2L),0xE534FE23L},{0xE534FE23L,2L,9L,9L,2L,0xE534FE23L,0L},{2L,(-1L),0x79E64CDCL,9L,(-1L),6L,1L},{5L,0xE534FE23L,0x4C04A9EBL,0x6252083FL,0x33B2A606L,0x6252083FL,0x4C04A9EBL}},{{(-1L),(-1L),(-2L),(-1L),9L,0L,0x4C04A9EBL},{0L,2L,(-1L),(-1L),0x4C04A9EBL,1L,1L},{9L,0x33B2A606L,5L,0x33B2A606L,9L,(-1L),0L},{6L,(-2L),5L,0L,0x33B2A606L,(-1L),0xE534FE23L},{6L,0x33B2A606L,0x79E64CDCL,0L,0L,0x79E64CDCL,0x33B2A606L},{2L,6L,0xE534FE23L,(-1L),0x4C04A9EBL,0x79E64CDCL,0L},{1L,(-2L),9L,0L,(-1L),0L,(-1L)}},{{(-1L),(-1L),(-1L),(-1L),0x6252083FL,0L,0L},{0L,(-1L),1L,0L,2L,0x6252083FL,5L},{0L,(-2L),0L,6L,0L,(-2L),0L},{0x4C04A9EBL,6L,(-2L),5L,0L,0x33B2A606L,(-1L)},{(-1L),0x33B2A606L,0L,0L,2L,2L,0L},{(-2L),0xE534FE23L,(-2L),0x79E64CDCL,0x6252083FL,(-1L),0x33B2A606L},{(-2L),5L,0L,0x33B2A606L,(-1L),0xE534FE23L,(-1L)}}};
                int l_1740 = 0xA0E3A20CL;
                int i, j, k;
                if (((safe_add_func_uint32_t_u_u((safe_mod_func_int16_t_s_s((safe_mul_func_uint8_t_u_u((((safe_mul_func_int16_t_s_s(((safe_add_func_uint8_t_u_u((((safe_mul_func_int8_t_s_s(g_971, ((safe_sub_func_uint32_t_u_u((p_19 , ((((((safe_mul_func_int16_t_s_s(((safe_add_func_int16_t_s_s(g_410, (safe_lshift_func_int16_t_s_s(p_19, (p_22 <= l_1699))))) | l_1700), (l_1539 , l_1658))) || g_379[2][0][2]) != (-9L)) & 0xD029L) == p_19) , 4UL)), 0UL)) , l_1651))) && l_1699) & g_145), p_21)) , p_19), 65535UL)) , 0x44704CE4L) , p_22), l_1566)), g_142)), 0x734159A0L)) >= g_379[0][1][2]))
                {
                    return g_1464;
                }
                else
                {
                    char l_1709 = 7L;
                    l_1635 = (func_34(p_21, g_392, p_20, (l_1555[7][0][3] , g_358), g_4) == (safe_add_func_uint32_t_u_u(0x24DD5E27L, 8L)));
                    for (g_433 = 1; (g_433 >= 0); g_433 -= 1)
                    {
                        int i, j;
                        l_1716[0][6][1] = (((safe_sub_func_uint8_t_u_u(((func_34(g_1393[(g_433 + 5)][g_433], (safe_mul_func_uint16_t_u_u((4294967295UL == (safe_sub_func_uint16_t_u_u(g_1393[(g_433 + 6)][g_433], 1UL))), (l_1709 < ((safe_add_func_int8_t_s_s(((g_145 = 0x991F62C4L) | g_49), ((safe_lshift_func_uint16_t_u_u(65527UL, (~(safe_sub_func_uint16_t_u_u(g_963, 0UL))))) == 7UL))) >= 0L)))), p_19, g_570, g_1392) != 0xD9L) || 1L), p_19)) , l_1569[0][0][6]) <= 0x76L);
                    }
                    for (l_1540 = 21; (l_1540 <= 28); l_1540++)
                    {
                        unsigned l_1719 = 0xD02FD3DDL;
                        l_1635 = l_1555[1][0][3];
                        l_1587 = l_1588;
                        l_1635 = g_1393[5][0];
                        return l_1719;
                    }
                    p_22 = (safe_add_func_uint32_t_u_u(l_1536, 5UL));
                }
                for (g_925 = (-1); (g_925 == 30); g_925 = safe_add_func_uint8_t_u_u(g_925, 8))
                {
                    short l_1728 = 0xC916L;
                    p_22 = l_1700;
                    for (g_433 = 0; (g_433 != (-18)); g_433 = safe_sub_func_int8_t_s_s(g_433, 1))
                    {
                        short l_1729 = 0x3B5EL;
                        l_1566 = ((l_1716[0][6][1] = p_20) ^ (p_22 , (p_22 || (((-8L) >= (((safe_sub_func_uint16_t_u_u((l_1728 >= l_1729), (((safe_lshift_func_uint8_t_u_s((safe_mod_func_uint8_t_u_u((g_1393[2][1] = (safe_add_func_uint16_t_u_u((safe_add_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s(g_860[1][9][3], 1)), (l_1740 = (p_19 = p_20)))), (safe_mul_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_s((l_1555[1][0][3] = 0xF472L), p_20)) | p_21), p_22))))), p_21)), 4)) != p_21) , p_19))) == l_1635) && l_1588)) , l_1574[1][7][2]))));
                        if (g_572)
                            break;
                    }
                    g_145 = (safe_mul_func_int8_t_s_s(0xC1L, g_1568));
                }
            }
            p_22 = l_1539;
        }
        else
        {
            l_1566 = (!(p_22 = g_701));
            return g_770;
        }
        l_1658 = (safe_mod_func_int32_t_s_s((((safe_sub_func_uint16_t_u_u(g_392, (p_22 | (safe_lshift_func_uint8_t_u_u((l_1555[1][0][3] = (safe_add_func_int32_t_s_s(func_26((g_407 = (p_21 = 0xFA6357EBL))), ((safe_rshift_func_int16_t_s_u(((safe_sub_func_uint16_t_u_u(g_770, 6L)) ^ (0xE747E183L && (safe_sub_func_int32_t_s_s(((g_860[1][9][3] < ((safe_lshift_func_int8_t_s_u((g_410 = (safe_sub_func_int8_t_s_s(g_410, 1UL))), 2)) , p_20)) || 0x93L), (-1L))))), l_1658)) ^ 0xF4L)))), 4))))) , p_19) != l_1658), l_1566));
        for (g_971 = 15; (g_971 >= 40); ++g_971)
        {
            p_22 = p_19;
            g_701 = (safe_add_func_uint8_t_u_u((l_1566 = (g_379[0][1][2] > (safe_rshift_func_int8_t_s_s((g_1230 | p_20), ((l_1539 = 0x607C1A55L) , (g_434 , (g_1626 != g_1626))))))), p_22));
            if (p_21)
                continue;
            if (g_1267)
                break;
        }
    }
    else
    {
        int l_1779[7][1][9] = {{{0x9691AC76L,(-1L),(-4L),(-1L),(-1L),0x897380C9L,0x936E6A79L,(-4L),(-4L)}},{{(-1L),1L,1L,3L,1L,1L,(-1L),1L,0x0C55677FL}},{{(-1L),(-1L),0x73D085BCL,0x9691AC76L,0x897380C9L,0x73D085BCL,0x936E6A79L,(-1L),(-4L)}},{{(-1L),0x0C55677FL,0x0C55677FL,(-1L),1L,0xF8E34346L,3L,0x0C55677FL,0xF8E34346L}},{{(-1L),(-4L),9L,(-1L),0x73D085BCL,0x73D085BCL,(-1L),9L,(-4L)}},{{3L,1L,1L,(-1L),1L,0x0C55677FL,0x37C55C4DL,1L,1L}},{{(-1L),0x73D085BCL,(-4L),1L,(-4L),0x73D085BCL,(-1L),(-4L),9L}}};
        int l_1782 = 0xF5818A4DL;
        int l_1783 = 0x9DB29CB4L;
        unsigned l_1790 = 0x1A608AF1L;
        int l_1823 = 0x80C2AA20L;
        unsigned l_1853 = 0UL;
        char l_1870 = 0xB2L;
        unsigned short l_1892[6][9][4] = {{{5UL,0xC0F1L,65529UL,0UL},{0x13F5L,1UL,65531UL,0UL},{0UL,0xB8D5L,0xB8D5L,0UL},{0x63CCL,65535UL,0UL,0x9C89L},{65535UL,65533UL,0xCD5EL,6UL},{0x605CL,0xF3D1L,0xB6D7L,6UL},{65528UL,65533UL,65535UL,0x9C89L},{65535UL,65535UL,0x4A69L,0UL},{65529UL,0xB8D5L,1UL,0UL}},{{0x83B5L,1UL,65535UL,0UL},{0x6DBFL,0xC0F1L,0x6E49L,65531UL},{0x0EC0L,65535UL,2UL,0xF094L},{0xE578L,0x6375L,0xCEFCL,0x0EBCL},{0UL,0xE462L,1UL,0xD9EBL},{0xD9EBL,0x0EC0L,0UL,5UL},{0xB8D5L,0UL,65535UL,0xE462L},{0x23CCL,0xCEFCL,65529UL,0UL},{0x605CL,0x0EBCL,0x6375L,0x6DBFL}},{{0UL,4UL,0x6DBFL,0x23CCL},{65528UL,0x6E2DL,4UL,0xD9EBL},{0xC0F1L,1UL,0xC0F1L,0x605CL},{0UL,0x6912L,6UL,7UL},{65528UL,0xB8D5L,65532UL,0x6912L},{1UL,5UL,65532UL,1UL},{65528UL,0x6791L,6UL,6UL},{0UL,0x6375L,0xC0F1L,65532UL},{0xC0F1L,65532UL,4UL,65529UL}},{{65528UL,0xE578L,0x6DBFL,1UL},{0UL,65535UL,0x6375L,0xB8D5L},{0x605CL,1UL,65529UL,0x63CCL},{0x23CCL,65529UL,65535UL,65535UL},{0xB8D5L,0UL,0UL,65528UL},{0UL,0x9C89L,0x8871L,0xF3D1L},{4UL,0x189CL,0x6E2DL,65535UL},{0x83B5L,0xE462L,0xB8D5L,65527UL},{65535UL,0x605CL,0UL,65528UL}},{{65527UL,0x4A69L,0xE411L,0x9C89L},{0x13F5L,1UL,1UL,1UL},{0xB34EL,65532UL,0xB6D7L,0xCD5EL},{6UL,0UL,0xF6EBL,0x13F5L},{1UL,7UL,65528UL,0xF6EBL},{0x6912L,7UL,0UL,0x13F5L},{7UL,0UL,1UL,0xCD5EL},{0x605CL,65532UL,65535UL,0x189CL},{0xD9EBL,0xC0F1L,0x99B6L,0x0EC0L}},{{0x23CCL,0UL,65532UL,0x9C89L},{0x6DBFL,65527UL,0x23CCL,1UL},{0UL,65535UL,0x4A69L,0x6912L},{0xE462L,0xF6EBL,6UL,0xE578L},{5UL,0x0EC0L,0xCD5EL,0x01C2L},{0UL,65528UL,65535UL,0UL},{0x6791L,0x605CL,0UL,1UL},{0xD76DL,65535UL,0xB34EL,0xF3D1L},{65535UL,0UL,65528UL,0xC0F1L}}};
        unsigned short l_1910 = 65527UL;
        short l_1943 = 0xEC26L;
        char l_2010 = (-10L);
        unsigned short l_2023 = 0x65F6L;
        unsigned char l_2171 = 0x75L;
        short l_2176 = 0L;
        unsigned l_2248[6];
        unsigned short l_2272 = 0x6E98L;
        unsigned char l_2387 = 0x72L;
        int l_2460 = (-2L);
        unsigned short l_2585 = 0x9B51L;
        int l_2611 = (-4L);
        unsigned l_2624 = 0xF5C477D8L;
        unsigned l_2660[8];
        int i, j, k;
        for (i = 0; i < 6; i++)
            l_2248[i] = 4294967295UL;
        for (i = 0; i < 8; i++)
            l_2660[i] = 0UL;
        if ((p_19 , ((safe_sub_func_uint32_t_u_u(((safe_lshift_func_uint8_t_u_s(((((p_21 = 0UL) <= ((safe_lshift_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_s((g_433 > g_1392), 15)) ^ (l_1779[6][0][8] = 0L)), 5)) == (l_1539 = g_1267))) != p_19) && (l_1782 = (safe_sub_func_uint16_t_u_u(g_701, (0xECL | p_19))))), l_1566)) , p_22), l_1783)) == g_592)))
        {
            int l_1784 = 0L;
            unsigned char l_1789[3][7] = {{0xB6L,0xB0L,0xB0L,0xB6L,0xB0L,0xB0L,0xB6L},{0xB0L,0xB6L,0xB0L,0xB0L,0xB6L,0xB0L,0xB0L},{0xB6L,0xB6L,9UL,0xB6L,0xB6L,9UL,0xB6L}};
            unsigned l_1854 = 4294967290UL;
            int l_1889 = 0xF642ABC1L;
            unsigned short l_1891 = 7UL;
            unsigned char l_1971 = 1UL;
            unsigned short l_2012 = 0xAA22L;
            short l_2022[4];
            int i, j;
            for (i = 0; i < 4; i++)
                l_2022[i] = 1L;
            p_22 = 0x909C4236L;
            p_22 = ((g_314 = l_1566) && ((l_1782 = ((l_1784 || (safe_mod_func_int16_t_s_s((safe_sub_func_uint8_t_u_u((((((2L >= (+(g_1393[5][1] = p_20))) , (((p_21 != p_19) ^ (g_743[3] >= p_21)) && l_1784)) | l_1567) , l_1789[1][4]) , l_1783), 0xEBL)), l_1790))) && l_1555[1][0][3])) | l_1566));
            if ((safe_mod_func_uint32_t_u_u(func_50((l_1779[2][0][2] < ((safe_lshift_func_int8_t_s_u((safe_sub_func_int32_t_s_s(func_75((((l_1566 = ((g_572 > (safe_add_func_int16_t_s_s((((safe_lshift_func_int16_t_s_u(0xC32FL, func_69(((g_447[2][8][0] = (safe_rshift_func_uint16_t_u_s((safe_sub_func_int32_t_s_s((g_142 , (((g_434 = l_1789[2][3]) > ((p_21 = (((safe_lshift_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s((l_1555[1][0][3] = 0x60L), 4)), 7)) || (safe_mul_func_int8_t_s_s(l_1811, (func_89(p_21, l_1812, l_1782, p_21) ^ (-10L))))) | g_111[0])) ^ 7UL)) != 4UL)), 0x97441006L)), 2))) , l_1555[1][0][3]), g_743[1]))) , 1UL) , 0xFDC9L), p_22))) <= 0xDCL)) , l_1784) , p_21), l_1536, l_1812, l_1812, l_1779[5][0][2]), l_1782)), 5)) , p_22)), p_22, l_1536, p_20, l_1782), 4294967287UL)))
            {
                int l_1825[7][7] = {{0xFD447808L,0x3D920985L,(-2L),(-2L),0x3D920985L,0xFD447808L,0x3D920985L},{0x67478CD2L,0x7C1206A9L,0x7C1206A9L,0x67478CD2L,(-7L),0x7C1206A9L,(-6L)},{0x3D920985L,0x3D920985L,0x731FCB40L,8L,0x731FCB40L,0x3D920985L,0x3D920985L},{0xB75825B9L,(-6L),0x67478CD2L,(-6L),0xB75825B9L,0xB75825B9L,(-6L)},{0xFD447808L,(-2L),0xFD447808L,0x731FCB40L,0x731FCB40L,0xFD447808L,(-2L)},{(-6L),(-7L),0x67478CD2L,0x67478CD2L,(-7L),(-6L),(-7L)},{0xFD447808L,0x731FCB40L,0x731FCB40L,0xFD447808L,(-2L),0xFD447808L,0x731FCB40L}};
                int l_1830 = 0x16F620CAL;
                int l_1855 = (-1L);
                int i, j;
                if ((!0x2ECA5899L))
                {
                    p_22 = p_20;
                    return g_314;
                }
                else
                {
                    unsigned short l_1838 = 0xBDF4L;
                    for (g_912 = 0; (g_912 <= 6); g_912 += 1)
                    {
                        int i;
                        p_22 = g_743[g_912];
                    }
                    for (g_234 = 0; (g_234 <= (-30)); --g_234)
                    {
                        unsigned short l_1824 = 6UL;
                        p_22 = func_34((safe_rshift_func_uint8_t_u_u(g_860[2][0][0], 0)), p_19, (safe_add_func_uint8_t_u_u((p_20 || 4294967292UL), ((safe_mod_func_int16_t_s_s(4L, (safe_add_func_uint32_t_u_u((g_433 != (p_22 & (func_34(p_20, ((p_21 | p_19) ^ p_21), p_21, g_4, l_1823) ^ l_1824))), 0x9A66FF41L)))) < p_20))), l_1825[5][2], g_1392);
                        g_1839 = ((safe_sub_func_int16_t_s_s(p_19, ((((p_19 | ((safe_add_func_uint32_t_u_u((l_1830 = g_743[2]), func_34(p_19, p_20, g_447[5][1][0], (~(+(((safe_sub_func_int8_t_s_s(l_1784, (((safe_rshift_func_int8_t_s_s(((safe_add_func_uint16_t_u_u(((~g_407) & (func_34((l_1837 , p_20), g_358, l_1823, l_1838, l_1838) ^ l_1790)), 0L)) > g_407), 0)) ^ p_22) <= g_1267))) < p_21) <= g_743[1]))), g_844))) | l_1789[1][4])) <= g_637) > l_1789[1][4]) != g_570))) | g_180);
                    }
                }
                for (g_770 = 0; (g_770 <= (-16)); --g_770)
                {
                    int l_1852 = 0x37349066L;
                    char l_1869 = 1L;
                    char l_1888 = 0x3AL;
                    for (g_142 = 0; (g_142 < (-25)); --g_142)
                    {
                        return g_434;
                    }
                    if (((((safe_lshift_func_uint8_t_u_s(((p_19 ^ 5UL) != (safe_add_func_int32_t_s_s((p_21 <= ((safe_add_func_int8_t_s_s((g_701 , (safe_rshift_func_int8_t_s_s(l_1852, g_743[6]))), func_75(l_1789[1][4], ((g_433 = (l_1823 && p_20)) ^ 3L), l_1830, l_1853, p_22))) , p_20)), 0x73D6C4F7L))), l_1852)) > p_19) < g_1568) <= 0x9FACL))
                    {
                        unsigned short l_1866 = 8UL;
                        l_1855 = (g_844 >= func_89(p_20, p_22, g_407, l_1854));
                        p_22 = (safe_rshift_func_int16_t_s_u((((safe_mod_func_int8_t_s_s((l_1852 = (safe_lshift_func_uint8_t_u_u((((safe_mul_func_uint8_t_u_u(((g_1568 = ((safe_add_func_int32_t_s_s((((p_21 , ((-5L) != l_1853)) || g_925) | ((((l_1866 | func_69(g_1267, (p_21 , (((l_1866 , ((safe_lshift_func_uint8_t_u_s(((l_1869 , (-7L)) < 8UL), 3)) , l_1789[1][4])) , l_1536) || l_1870)))) , 0x236BL) && 0xF53EL) , 251UL)), g_1392)) , 0x09575E60L)) && 2L), p_19)) > 0x487CL) != g_1464), p_21))), g_1392)) | 0UL) > g_392), 4));
                    }
                    else
                    {
                        unsigned short l_1887[10][9] = {{65528UL,65535UL,0xB42FL,0x1814L,0xF5C5L,1UL,0x8C23L,0x445EL,0x1814L},{4UL,0xD9D8L,0x0AC5L,0xA0FFL,0xD3DDL,65535UL,0xD9D8L,65535UL,0xD3DDL},{0x0AC5L,0x445EL,0x445EL,0x0AC5L,3UL,65535UL,0xA0FFL,0xF5C5L,65532UL},{0UL,0xA0FFL,0x5759L,0xD3DDL,65535UL,1UL,0xB42FL,0x5759L,0x445EL},{0xF5C5L,1UL,0UL,65535UL,3UL,0xF5C5L,3UL,65535UL,0UL},{65535UL,65535UL,0xF5C5L,65535UL,0xD3DDL,65528UL,0x8C23L,0xA0FFL,65535UL},{1UL,65535UL,0x0AC5L,65530UL,0UL,3UL,0x445EL,1UL,0x1814L},{65534UL,0x1814L,0UL,0xD9D8L,0xB42FL,0xD9D8L,0UL,0x1814L,65534UL},{65532UL,0x1814L,65528UL,0x5759L,65535UL,4UL,65535UL,65528UL,0UL},{0UL,0x445EL,0UL,65535UL,0xA0FFL,0UL,0xB42FL,0x8C23L,0x8C23L}};
                        int l_1890 = 0x0A79E74EL;
                        int i, j;
                        p_22 = (((safe_lshift_func_uint16_t_u_u(p_22, (((l_1825[5][2] != (safe_mul_func_int8_t_s_s(((safe_rshift_func_int16_t_s_u(func_75(((g_963 = (safe_sub_func_int8_t_s_s((func_69(l_1811, (l_1823 = (((l_1890 = (l_1889 = (g_410 = (safe_rshift_func_int8_t_s_s((l_1539 = 1L), (g_434 == (p_19 > (4UL & (((safe_mod_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u((+g_166), (l_1887[5][4] == 0xCF41L))), p_21)) < l_1888) != p_21))))))))) | 0xD1L) < 0x300A1B22L))) != g_637), g_1267))) ^ l_1869), g_392, g_1393[0][0], p_22, g_1568), 1)) && l_1869), g_594))) >= p_22) | g_637))) <= l_1891) < l_1830);
                    }
                }
                l_1892[3][4][2] = 0xC028808FL;
                for (g_434 = 0; g_434 < 6; g_434 += 1)
                {
                    for (g_1626 = 0; g_1626 < 9; g_1626 += 1)
                    {
                        for (g_925 = 0; g_925 < 4; g_925 += 1)
                        {
                            g_447[g_434][g_1626][g_925] = (-1L);
                        }
                    }
                }
            }
            else
            {
                int l_1893 = 0x6A0BF27BL;
                int l_1924 = 0x15E3BF92L;
                char l_1928 = 0x25L;
                for (l_1891 = 0; (l_1891 <= 3); l_1891 += 1)
                {
                    int l_1919 = 0x88AE4343L;
                    if (p_19)
                    {
                        return p_19;
                    }
                    else
                    {
                        int l_1907 = 0x3D01B0A2L;
                        p_22 = (func_50(l_1893, (safe_lshift_func_uint16_t_u_s(l_1893, 9)), g_166, ((safe_mul_func_uint8_t_u_u(5UL, p_21)) , func_34(p_22, ((((((((safe_rshift_func_int8_t_s_u((-6L), 6)) <= (l_1870 <= p_21)) >= p_21) , 1UL) , 0xE2L) <= l_1782) | l_1893) , 0xEDF63201L), p_21, l_1555[2][1][4], p_19)), g_180) >= 0xEA28L);
                        p_22 = l_1893;
                        p_22 = ((p_21 | (((safe_mod_func_int8_t_s_s(g_62, (l_1782 , p_20))) != func_34((safe_rshift_func_int16_t_s_s(g_111[0], func_34(p_21, g_912, (l_1889 = g_592), ((l_1906 > 5UL) >= g_1393[1][0]), g_637))), l_1789[2][0], g_410, l_1907, p_19)) < 2L)) , p_20);
                    }
                    p_22 = (p_19 <= func_75(p_19, ((((l_1910 = (safe_rshift_func_int16_t_s_s(g_447[5][1][1], 4))) == g_572) , ((g_1267 > func_50(p_20, (safe_lshift_func_uint8_t_u_s((safe_mod_func_int16_t_s_s(g_447[2][8][0], (1L || func_69((safe_rshift_func_int8_t_s_u((safe_mod_func_uint8_t_u_u((g_860[1][9][3] < 0x0867L), g_62)), p_21)), p_19)))), p_20)), l_1779[6][0][8], g_715, l_1919)) , l_1919)) <= 0x69BF9216L), g_1464, l_1892[3][2][3], p_19));
                    p_22 = g_145;
                    for (p_20 = 3; (p_20 >= 0); p_20 -= 1)
                    {
                        unsigned l_1925 = 0xAAA43121L;
                        p_22 = (253UL ^ ((l_1782 = p_22) || ((-7L) & (safe_add_func_int8_t_s_s(func_69((safe_mod_func_uint16_t_u_u((l_1924 = (p_19 < (l_1893 = l_1789[0][4]))), p_22)), (l_1783 = (+(l_1925 , (g_145 = (g_419 && (!(l_1919 = (!l_1928))))))))), l_1910)))));
                        return l_1925;
                    }
                }
                p_22 = (func_89(((0x3441A1DEL <= ((((safe_sub_func_int8_t_s_s(((p_22 < p_22) && g_570), ((p_22 && l_1893) < func_34(g_447[1][2][2], ((l_1539 = (func_69(func_34((l_1784 , (safe_lshift_func_int16_t_s_u(l_1924, p_20))), g_379[0][1][2], g_62, g_419, g_1464), l_1823) , p_20)) & p_20), l_1566, g_1626, l_1566)))) > l_1642) , g_447[3][4][2]) | l_1924)) ^ p_21), p_22, l_1928, p_22) ^ p_22);
            }
            if (((func_42((((l_1555[1][0][3] = (safe_add_func_uint16_t_u_u(l_1891, (g_49 > (p_20 | (safe_sub_func_uint16_t_u_u(l_1566, (3L > (safe_mod_func_int8_t_s_s(p_21, p_19)))))))))) | (((l_1783 <= (safe_mul_func_int16_t_s_s(func_34(((safe_rshift_func_uint8_t_u_u((func_34(g_379[1][0][0], l_1540, l_1812, g_743[0], l_1784) && l_1943), 2)) == l_1566), g_358, g_925, g_743[3], g_743[3]), l_1943))) , 4294967288UL) < p_21)) < g_379[0][1][0]), g_314) && p_20) , l_1891))
            {
                short l_1944[5][2];
                int l_1964 = 0x57D7CCEDL;
                int i, j;
                for (i = 0; i < 5; i++)
                {
                    for (j = 0; j < 2; j++)
                        l_1944[i][j] = 0x33B3L;
                }
                l_1823 = (l_1944[2][1] < (l_1837 && (p_20 , func_34(l_1784, (safe_sub_func_uint32_t_u_u(l_1944[4][1], (func_75(((1UL & (safe_add_func_int16_t_s_s((((g_433 || ((p_19 = (0xDB29L | (p_22 , l_1944[1][1]))) >= p_20)) == l_1910) < g_1230), g_447[3][0][1]))) == g_1267), g_49, g_1267, p_22, l_1779[6][0][1]) >= 0x4FBFA060L))), g_743[3], g_860[2][1][2], l_1944[4][1]))));
                p_22 = ((safe_lshift_func_int16_t_s_s((-4L), 10)) , ((safe_rshift_func_uint8_t_u_u(p_21, 3)) > (l_1953 = 0UL)));
                if ((safe_rshift_func_uint8_t_u_s((safe_rshift_func_int16_t_s_u(((((func_34(g_971, (p_20 = ((((safe_lshift_func_uint8_t_u_u(func_75((safe_rshift_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s((p_20 > (g_963 = (l_1964 = (p_22 , 5UL)))), g_1626)), 3)), (safe_rshift_func_uint8_t_u_u((((safe_rshift_func_uint8_t_u_u(0UL, g_743[1])) == ((safe_mod_func_uint32_t_u_u(func_75(p_19, p_19, l_1642, p_21, l_1779[6][0][8]), p_20)) > g_392)) == p_21), 2)), g_743[3], p_19, l_1944[1][1]), 3)) < 0x0AL) <= p_21) > 0x4DD478B7L)), l_1944[2][1], l_1971, g_111[0]) == g_715) < p_19) ^ l_1910) , p_22), l_1972)), l_1944[4][1])))
                {
                    unsigned l_1980 = 0x0B1B8389L;
                    if ((func_34(l_1973[0], l_1823, (safe_mul_func_int8_t_s_s((safe_lshift_func_int16_t_s_s(g_572, (g_1626 <= p_21))), func_89((g_1464 > (p_22 < (safe_sub_func_uint32_t_u_u(l_1980, func_69(l_1944[2][1], p_19))))), g_844, g_1568, g_1626))), g_844, g_963) < g_743[4]))
                    {
                        int l_1985 = 0x2695B6B3L;
                        l_1964 = (((safe_lshift_func_int8_t_s_s(((safe_mul_func_int16_t_s_s(p_20, ((l_1985 = g_166) != (((g_62 = p_21) & ((safe_lshift_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u(g_637, ((safe_add_func_uint32_t_u_u(p_19, ((((g_410 || (g_594 , ((safe_add_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s((l_1566 = (+(safe_rshift_func_uint16_t_u_s((g_111[0] >= (l_1555[0][0][1] , p_22)), 3)))), p_22)), l_1943)) , 0x748EL))) , g_860[4][1][1]) >= g_142) || 2L))) >= g_860[1][9][3]))), p_21)) > g_860[2][8][3])) & 0x8E26D20DL)))) | l_1944[4][0]), 2)) > 0x2CFCL) , p_19);
                    }
                    else
                    {
                        g_145 = p_20;
                        p_22 = (l_1892[3][4][2] >= (!1L));
                        return g_925;
                    }
                    l_1964 = (safe_mod_func_uint16_t_u_u((l_1964 & p_20), (0x72L ^ (safe_rshift_func_int8_t_s_u(func_69((safe_add_func_uint32_t_u_u(((safe_mul_func_uint16_t_u_u(0xFF9AL, (l_1555[5][0][1] = ((g_434 > (l_1566 = (g_592 = func_89((p_19 >= ((safe_sub_func_int16_t_s_s(0xAE29L, ((~(safe_rshift_func_int8_t_s_s(g_701, 1))) == ((((((l_1779[6][0][8] || p_21) , l_1910) & l_2010) > g_1626) != g_1393[2][0]) & g_925)))) , 1UL)), l_1823, g_2011, p_21)))) > (-10L))))) , g_419), g_912)), g_419), 6)))));
                    for (l_1906 = 0; (l_1906 <= 2); l_1906 += 1)
                    {
                        int i;
                        if (g_743[(l_1906 + 2)])
                            break;
                    }
                    l_2012 = 8L;
                }
                else
                {
                    unsigned l_2013 = 4UL;
                    g_145 = ((l_2013 && (safe_mul_func_uint8_t_u_u((((g_379[0][1][2] == (safe_add_func_int16_t_s_s(((((1UL == (l_1853 > l_1536)) || 1L) | l_1566) || (((safe_add_func_uint32_t_u_u((((safe_mod_func_int8_t_s_s((0x00579DA2L & g_912), l_1891)) != l_1944[3][1]) && p_21), l_1823)) , g_447[5][1][2]) == l_2022[2])), l_1837))) , 0xC4CA2D09L) < l_2023), l_2013))) >= 4UL);
                    return g_743[3];
                }
                g_701 = g_145;
            }
            else
            {
                g_2024 = (g_145 = 0xD52F6E67L);
            }
        }
        else
        {
            g_145 = g_925;
            return p_22;
        }
        if (func_42((g_142 = ((safe_mod_func_uint8_t_u_u(p_20, p_19)) & ((l_2031 = ((safe_mod_func_uint8_t_u_u(0x7EL, ((1UL | p_21) || g_963))) & (l_1783 = (((((safe_mul_func_int16_t_s_s((l_2010 != 5UL), (255UL || p_22))) , g_912) < 0UL) || 0xC86C81E2L) > 0x37E83486L)))) || g_925))), l_1943))
        {
            unsigned char l_2037 = 255UL;
            int l_2053 = 7L;
            unsigned short l_2080 = 4UL;
            unsigned l_2105 = 0x09EF9A8AL;
            int l_2190 = 0xBFB4C6BBL;
            unsigned short l_2214[10];
            int l_2236 = 0x9DA88A90L;
            short l_2378 = (-1L);
            int i;
            for (i = 0; i < 10; i++)
                l_2214[i] = 1UL;
            if ((func_75(g_379[0][1][2], g_142, p_21, g_145, (safe_rshift_func_uint8_t_u_s(4UL, ((((safe_sub_func_uint32_t_u_u(((safe_unary_minus_func_int16_t_s((p_19 = g_860[4][2][2]))) > p_20), (p_21 & p_21))) > l_2037) , g_912) , (-4L))))) != (-2L)))
            {
                int l_2040 = 0x295A3720L;
                int l_2051 = 2L;
                unsigned char l_2062 = 1UL;
                char l_2070[6][8] = {{(-1L),0xE5L,(-1L),0x57L,(-1L),0xE5L,(-1L),0x57L},{(-1L),0xE5L,(-1L),0x57L,(-1L),0xE5L,(-1L),0x57L},{(-1L),0xE5L,(-1L),0x57L,(-1L),0xE5L,(-1L),0x57L},{(-1L),0xE5L,(-1L),0x57L,(-1L),0xE5L,(-1L),0x57L},{(-1L),0xE5L,(-1L),0x57L,(-1L),0xE5L,(-1L),0x57L},{(-1L),0xE5L,(-1L),0x57L,(-1L),0xE5L,(-1L),0x57L}};
                int l_2140 = 0xF4F8B831L;
                int i, j;
                if (l_2010)
                {
                    char l_2041 = 0L;
                    int l_2046 = 1L;
                    int l_2052 = (-1L);
                    for (g_434 = 0; (g_434 <= 0); g_434 = safe_add_func_uint32_t_u_u(g_434, 1))
                    {
                        p_22 = (g_234 , 0xF8C82D7EL);
                        if (l_2040)
                            continue;
                        l_2053 = (p_22 = ((func_75(l_2041, g_592, (safe_mod_func_uint16_t_u_u(((((1UL <= (0x0AL >= (l_2051 = func_89(((safe_mul_func_int16_t_s_s(p_21, (l_2046 = p_21))) | (safe_add_func_int16_t_s_s(p_22, (p_19 = ((((safe_mul_func_int32_t_s_s(p_20, (g_49 >= 0L))) < l_2041) || 0x19L) , l_1555[1][0][3]))))), p_20, l_2040, g_1839)))) > p_20) && l_2052) || 1UL), 0x9AFEL)), l_2037, l_2023) , 3UL) < p_20));
                        l_2046 = p_21;
                    }
                    for (g_358 = 26; (g_358 < 14); g_358--)
                    {
                        unsigned l_2056 = 0xF68997F9L;
                        short l_2069 = (-1L);
                        unsigned l_2077[3];
                        int i;
                        for (i = 0; i < 3; i++)
                            l_2077[i] = 0x5718365CL;
                        l_2056 = (0x40L | g_1267);
                        g_2071 = (g_701 = ((0x2F78A8F3L >= (l_1782 & (l_2046 = (safe_unary_minus_func_uint16_t_u((g_860[1][9][3] = l_1972)))))) | (((safe_mod_func_int8_t_s_s(((safe_mul_func_uint16_t_u_u(9UL, (l_2062 < 0xC0L))) >= ((((p_19 < (safe_lshift_func_int16_t_s_s((func_89(p_20, (((safe_mul_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s((l_1953 = p_20), p_19)), l_2056)) == l_2069) | 0x265614FCL), l_1972, l_2070[2][2]) > g_1839), 6))) , (-5L)) > p_21) , 0x998DA540L)), p_22)) | 0x6195L) != g_743[2])));
                        g_145 = g_142;
                        l_2077[1] = ((0xF8L > (safe_mul_func_uint16_t_u_u(((g_860[1][3][4] = ((0x52L >= ((l_2040 & (safe_mod_func_int16_t_s_s(2L, (func_34(p_19, ((g_166 & (((safe_unary_minus_func_uint16_t_u(l_1823)) , g_62) > (p_22 >= p_19))) >= p_19), g_860[3][6][0], g_2024, l_2053) , 0xF534L)))) & 0UL)) , p_20)) == 3UL), l_1973[0]))) , g_1230);
                    }
                    if ((g_145 = p_20))
                    {
                        unsigned l_2089 = 9UL;
                        l_2053 = ((safe_rshift_func_int16_t_s_u(g_314, (((g_166 && (g_419 == l_2080)) ^ (g_2024 = p_22)) >= ((safe_mod_func_int8_t_s_s((safe_sub_func_int32_t_s_s(g_2071, (!(p_22 != (((safe_rshift_func_uint8_t_u_s((p_19 , (g_1393[1][0] = ((~(((safe_mul_func_int16_t_s_s((g_234 = p_21), 65526UL)) ^ l_2070[2][2]) != p_19)) , l_2023))), g_379[0][1][2])) & 0x4530L) > 0UL))))), 0x9DL)) < p_20)))) , 6L);
                        l_2089 = (p_20 != (p_19 = p_21));
                        l_1783 = (p_22 = ((p_20 | l_2089) < (safe_lshift_func_int16_t_s_u(p_22, 10))));
                    }
                    else
                    {
                        short l_2101 = 0x7DC8L;
                        short l_2104 = (-3L);
                        p_22 = (func_42((safe_lshift_func_uint8_t_u_u(func_50(p_20, p_21, g_379[2][0][0], g_1392, g_592), p_21)), p_19) <= p_22);
                        g_2071 = (safe_mul_func_int16_t_s_s(func_34((safe_lshift_func_uint16_t_u_u(((((safe_unary_minus_func_int32_t_s(p_19)) ^ l_2037) == (g_860[4][5][0] = (safe_sub_func_uint32_t_u_u((p_21 = (p_22 & (func_69(l_2101, p_22) <= (l_1973[0] != 0x78L)))), (((((g_2024 = (safe_lshift_func_int16_t_s_u((g_1464 = (-6L)), l_2104))) , p_20) & g_1839) , l_1837) & l_2105))))) <= 246UL), g_844)), g_770, g_743[3], g_1230, l_2105), 0x74EFL));
                        g_701 = p_20;
                        l_2046 = (+(safe_mul_func_uint8_t_u_u((l_2053 = 0UL), (g_1393[0][1] = ((p_19 , g_62) == g_925)))));
                    }
                    for (l_1811 = 0; (l_1811 <= 6); l_1811 += 1)
                    {
                        unsigned short l_2123[7] = {0xD31EL,0xD31EL,0xD31EL,0xD31EL,0xD31EL,0xD31EL,0xD31EL};
                        int l_2137[9];
                        int i;
                        for (i = 0; i < 9; i++)
                            l_2137[i] = 0x3280CB64L;
                        g_145 = ((l_1953 = (~(safe_add_func_int32_t_s_s((safe_unary_minus_func_uint32_t_u(((g_1464 < l_2052) , (safe_mul_func_int16_t_s_s((((safe_rshift_func_int16_t_s_s(((safe_sub_func_uint16_t_u_u(l_1892[2][6][3], p_21)) != (((safe_mod_func_int32_t_s_s((-1L), (safe_sub_func_uint32_t_u_u(((safe_mod_func_int8_t_s_s((l_2123[4] < (((-1L) == (safe_lshift_func_int16_t_s_s(l_2052, (g_912 >= 0xE8F7363DL)))) | l_1811)), l_2046)) >= l_2010), p_22)))) & 0x1C9A2863L) || 0L)), g_419)) ^ 0x94L) , l_2046), p_22))))), g_410)))) & (-10L));
                        p_22 = ((g_860[1][9][3] = 5UL) > func_34(func_69(l_2126[4], g_145), (g_743[l_1811] = (g_570 , 0x3D53C743L)), ((safe_rshift_func_uint8_t_u_s(g_1267, 3)) ^ p_20), ((p_21 < g_592) , g_770), p_20));
                        p_22 = (l_2051 = (safe_rshift_func_uint16_t_u_s(l_2105, ((l_2123[4] && ((safe_sub_func_uint16_t_u_u(0x6D48L, ((safe_mul_func_int8_t_s_s(((func_42(((l_1783 = ((l_2137[1] = (safe_lshift_func_uint16_t_u_u((((g_407 = ((~(func_89(((0x96L || p_19) & g_447[5][5][2]), l_2123[4], l_1783, g_743[l_1811]) < l_1779[1][0][8])) | p_22)) > p_20) & 0L), p_19))) & l_2070[5][6])) > 0x30375C0DL), l_2041) != 0xF403L) <= 0x48L), g_1568)) >= l_1853))) | p_20)) , p_21))));
                    }
                }
                else
                {
                    g_2071 = (safe_rshift_func_int16_t_s_u(l_1567, 8));
                }
                p_22 = p_22;
                l_2126[4] = g_637;
                if (p_20)
                {
                    p_22 = (!(-2L));
                }
                else
                {
                    l_1823 = l_2140;
                    l_1823 = (l_1812 <= func_75((func_75((l_2051 = ((p_19 && (((safe_unary_minus_func_uint8_t_u((safe_rshift_func_int16_t_s_u(func_69((safe_mod_func_uint16_t_u_u((safe_unary_minus_func_uint32_t_u(4294967286UL)), (safe_mod_func_int32_t_s_s(0x9AEB5C7AL, (p_22 = 0x4F116826L))))), g_715), (g_1267 = (l_2126[4] ^ (safe_sub_func_uint16_t_u_u((((((safe_sub_func_int32_t_s_s(g_4, p_19)) & g_447[0][8][3]) , 0L) < p_19) , g_572), g_572)))))))) || g_1393[5][0]) == g_594)) >= 0x8726B6B7L)), p_19, g_2071, l_2105, p_19) > 0x7293DB32L), g_715, g_701, p_21, g_447[2][8][0]));
                }
            }
            else
            {
                char l_2153 = 0x11L;
                int l_2154 = 5L;
                char l_2177 = 5L;
                g_701 = l_2153;
                if (((func_89((func_42(g_912, ((l_2154 = p_19) , ((safe_add_func_int32_t_s_s(1L, (safe_mul_func_int16_t_s_s(l_1870, (safe_sub_func_int16_t_s_s(((safe_mod_func_uint32_t_u_u((safe_mod_func_int32_t_s_s((l_1783 = func_34((safe_rshift_func_uint16_t_u_s((safe_sub_func_int16_t_s_s((safe_mod_func_uint8_t_u_u(l_2171, p_20)), func_34((safe_rshift_func_uint16_t_u_s(0xFD4CL, 12)), func_42(((safe_mod_func_uint16_t_u_u((0xC073L ^ g_410), g_2071)) , g_145), p_21), p_19, l_2176, p_21))), 11)), p_19, g_2071, l_2177, l_2153)), l_1953)), g_447[2][8][0])) , 0x8AB9L), l_2010)))))) & p_22))) | 1UL), l_2023, p_21, l_1540) ^ (-1L)) , (-10L)))
                {
                    char l_2185 = 0x4DL;
                    for (g_392 = 5; (g_392 < (-7)); --g_392)
                    {
                        char l_2182[1][1][3];
                        int l_2191 = 2L;
                        int i, j, k;
                        for (i = 0; i < 1; i++)
                        {
                            for (j = 0; j < 1; j++)
                            {
                                for (k = 0; k < 3; k++)
                                    l_2182[i][j][k] = 0x74L;
                            }
                        }
                        p_22 = (safe_add_func_uint16_t_u_u((l_2182[0][0][1] < ((g_234 = g_1568) | g_925)), (safe_mul_func_uint16_t_u_u(((((l_2185 = g_572) , (((safe_rshift_func_uint16_t_u_s((((func_34(l_2037, (l_2185 , ((g_434 = ((l_2191 = ((65535UL < ((1UL | (+(((((safe_lshift_func_int8_t_s_s(func_34(l_1973[0], l_1567, l_1642, l_1906, l_2154), l_2177)) >= 0x18E5D1B8L) | 0x28F4FA87L) , l_2190) , l_2154))) ^ l_2153)) == 0xEC089C9BL)) & l_2182[0][0][1])) & g_592)), p_21, p_21, p_19) >= 0x23L) <= 0xB22FL) != l_2037), g_49)) < p_19) && p_22)) && 255UL) | g_379[0][1][2]), g_62))));
                    }
                }
                else
                {
                    unsigned char l_2194 = 1UL;
                    for (g_2011 = 0; (g_2011 >= (-22)); --g_2011)
                    {
                        l_1555[0][0][4] = l_2194;
                        p_22 = 0x0B84662DL;
                        p_22 = (g_912 >= (g_971 | (safe_sub_func_int32_t_s_s((l_1823 = l_2194), (!0x9AF54060L)))));
                        if (l_2153)
                            break;
                    }
                    g_2071 = (safe_lshift_func_uint16_t_u_u((safe_mod_func_int8_t_s_s((l_1783 = ((safe_rshift_func_uint16_t_u_u(((l_1823 = p_21) || p_20), ((g_1267 = (((0x50A0DF3BL || (g_1393[1][0] <= (l_2031 != (l_1870 , (p_22 , (~(safe_rshift_func_uint8_t_u_s((g_234 <= ((p_19 ^ p_20) , g_743[3])), 0)))))))) > l_1892[3][4][2]) >= 65526UL)) < 8UL))) , l_2105)), g_62)), 7));
                    l_2154 = g_358;
                }
            }
            l_1539 = ((((((safe_mul_func_int8_t_s_s(((g_419 || (((safe_mod_func_uint8_t_u_u((g_1626 , 0x9CL), 0x2DL)) & (p_21 <= ((((safe_unary_minus_func_int32_t_s(p_20)) == ((safe_rshift_func_uint16_t_u_s(((safe_mul_func_int8_t_s_s(l_1943, ((p_22 = p_19) ^ ((((l_2126[4] = (g_860[2][7][1] != l_2031)) && 0x79D8F60AL) & p_21) == l_2105)))) ^ l_2214[0]), 10)) < 0xB5437346L)) != p_21) ^ l_1892[3][6][3]))) >= 1L)) >= 0x22L), g_715)) < g_447[1][2][0]) >= 0xCBD9L) || 0x017DL) , 0xF92FL) , l_2105);
            if (l_1811)
            {
                unsigned char l_2235 = 0x2EL;
                int l_2244 = 1L;
                unsigned l_2247 = 0UL;
                int l_2355[10] = {0x3AA8DA40L,0x3AA8DA40L,1L,(-7L),1L,0x3AA8DA40L,0x3AA8DA40L,1L,0xC7B814D3L,0x3AA8DA40L};
                unsigned char l_2433 = 0x29L;
                int i;
                if ((safe_unary_minus_func_uint16_t_u((g_379[1][1][2] ^ (p_19 , (((safe_lshift_func_int16_t_s_u(0xB8EDL, g_770)) >= (safe_rshift_func_int16_t_s_u((safe_mod_func_int8_t_s_s(((g_860[2][4][2] = ((safe_sub_func_uint32_t_u_u(g_419, (func_89((safe_unary_minus_func_int8_t_s((((g_570 && (g_2011 && func_89((65527UL | func_34((safe_mul_func_uint16_t_u_u((l_2037 >= p_20), 0x54EEL)), g_2071, g_379[0][1][2], p_19, g_433)), l_2053, p_20, l_2105))) > 9UL) && g_62))), g_379[2][0][1], l_1555[4][1][0], l_1910) > 0xD2CB1F36L))) && l_1973[0])) ^ l_1837), p_22)), g_770))) < p_20))))))
                {
                    char l_2234 = 1L;
                    for (p_20 = (-29); (p_20 < (-11)); p_20 = safe_add_func_int16_t_s_s(p_20, 1))
                    {
                        unsigned l_2233 = 4294967295UL;
                        l_2237 = (((safe_rshift_func_int8_t_s_s(((g_2071 = g_314) || func_69((0xF6A5L | 1L), (((g_2071 >= g_4) != ((safe_add_func_uint8_t_u_u(func_34(p_20, (func_75(g_715, (l_1566 = func_75((func_34(g_1464, (p_21 , g_1393[1][0]), l_2233, l_2234, l_2235) >= l_2171), l_2214[6], p_21, g_410, g_1267)), l_2234, l_2235, l_2233) , g_963), p_21, g_433, l_2236), g_419)) , p_19)) ^ g_743[3]))), 7)) >= l_1779[6][0][8]) == p_20);
                    }
                    l_2053 = (p_22 = (safe_lshift_func_int8_t_s_s(0x9AL, (+(((((l_2126[4] < p_22) >= (safe_lshift_func_uint16_t_u_u((safe_mul_func_int16_t_s_s((l_2244 = ((+p_19) > 0UL)), ((safe_add_func_uint8_t_u_u((p_20 , func_89(l_2247, l_2235, g_2071, l_2247)), p_22)) <= l_2237))), 8))) <= 0UL) , p_20) < 0xF2EA14CEL)))));
                    g_2071 = (l_2248[2] > func_75(func_89((safe_sub_func_int8_t_s_s(((func_75(g_407, (safe_rshift_func_int16_t_s_u(p_22, 13)), (g_570 >= l_1555[1][0][3]), l_2171, (l_1783 = (g_145 = (g_860[0][6][2] || 0x57389901L)))) | 0x42D1L) & g_1230), 0x87L)), g_701, l_2126[4], l_2235), p_20, p_22, l_2235, p_22));
                }
                else
                {
                    unsigned char l_2253[3];
                    char l_2273 = (-4L);
                    int l_2312[4][6] = {{0x30476EA8L,0x13332A70L,0x13332A70L,0x30476EA8L,0x13332A70L,0x13332A70L},{0x30476EA8L,0x13332A70L,0x13332A70L,0x30476EA8L,0x13332A70L,0x13332A70L},{0x30476EA8L,0x13332A70L,0x13332A70L,0x30476EA8L,0x13332A70L,0x13332A70L},{0x30476EA8L,0x13332A70L,0x13332A70L,0x30476EA8L,0x13332A70L,0x13332A70L}};
                    unsigned short l_2336 = 1UL;
                    int l_2337 = 0L;
                    int l_2338 = 0xDEB26FD3L;
                    int i, j;
                    for (i = 0; i < 3; i++)
                        l_2253[i] = 7UL;
                    if (((func_89(func_42(((((((g_419 && 0L) | g_434) & (l_2126[4] = l_2253[1])) & ((safe_rshift_func_int8_t_s_u((safe_sub_func_int16_t_s_s((4L || (safe_rshift_func_uint16_t_u_s(((safe_add_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u(0xC5L, (safe_mod_func_int32_t_s_s(((safe_sub_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s(g_1393[1][0], ((p_19 > (safe_add_func_uint16_t_u_u(l_2272, 0xE779L))) >= p_21))), l_1790)) > p_22), g_971)))), p_21)) != g_1626), p_22))), p_22)), 1)) && p_19)) > p_20) , g_166), l_2190), l_2273, p_19, g_912) | l_2235) && g_715))
                    {
                        int l_2334 = 0x1B42D88BL;
                        int l_2335 = 0L;
                        g_2071 = (safe_lshift_func_int8_t_s_u((safe_unary_minus_func_uint8_t_u(((safe_rshift_func_int16_t_s_u((safe_rshift_func_uint16_t_u_u((g_1230 = p_20), (g_963 = g_392))), 7)) , (safe_mul_func_int16_t_s_s((safe_sub_func_int32_t_s_s(l_2080, g_379[0][1][2])), (g_1568 != p_20)))))), 1));
                        p_22 = (4294967290UL > ((((safe_rshift_func_int16_t_s_s(func_89(l_2273, (((safe_lshift_func_int16_t_s_s((safe_sub_func_int32_t_s_s(g_1568, l_2248[0])), (((safe_unary_minus_func_uint32_t_u(((safe_add_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(((g_971 ^ (safe_unary_minus_func_int8_t_s(((((p_19 = ((p_22 | ((((l_1783 = func_75(((safe_lshift_func_uint8_t_u_s(((func_69((safe_mod_func_int32_t_s_s(((g_4 > 0x28902C8BL) & (+g_971)), 0x3E2901C7L)), p_20) , 255UL) != l_1567), g_2024)) & (-4L)), g_971, l_2253[1], l_1539, g_572)) <= 0xB890556CL) <= g_715) != g_860[1][9][3])) > l_2080)) ^ 0x11E2L) == g_392) >= p_21)))) != g_1393[0][1]), 0x34L)), p_20)) ^ p_21))) , 1L) & 1UL))) & p_22) , 0xC9E0L), l_2080, g_844), g_2024)) & g_1230) <= p_22) < 0x9123L));
                        l_1783 = func_75((l_2190 = func_34((safe_lshift_func_uint16_t_u_s(((safe_mod_func_int8_t_s_s((safe_unary_minus_func_int32_t_s((safe_rshift_func_int16_t_s_s(0x7880L, 3)))), (safe_mul_func_int16_t_s_s(((l_1539 = (safe_rshift_func_int8_t_s_u((l_2312[1][2] = g_912), 3))) && (l_2335 = ((safe_mod_func_int16_t_s_s(3L, (safe_unary_minus_func_int16_t_s(((((safe_add_func_uint16_t_u_u(((g_49 , p_19) >= ((((safe_sub_func_uint32_t_u_u(((safe_lshift_func_int8_t_s_u(((g_407 = (safe_lshift_func_uint16_t_u_u((safe_mod_func_int16_t_s_s(((safe_sub_func_int32_t_s_s(func_34(g_358, l_2235, (safe_mod_func_int16_t_s_s(func_34(g_379[2][1][3], (safe_add_func_int8_t_s_s((safe_mul_func_int16_t_s_s((l_2244 ^ l_1823), l_2334)), 1UL)), g_572, g_142, l_2312[0][3]), g_234)), g_743[3], g_234), 0xDD81F771L)) == l_2126[5]), p_21)), 11))) < g_572), 2)) ^ p_22), g_2071)) | p_21) || 1UL) <= p_20)), p_21)) == 0x2A09L) & l_2080) , g_2071))))) && p_21))), g_2071)))) > 0xD182622CL), l_1812)), l_2334, g_570, l_2247, l_1972)), l_2253[1], g_572, l_2336, l_2337);
                    }
                    else
                    {
                        int l_2339 = (-1L);
                        int l_2352 = 1L;
                        p_22 = ((g_925 <= l_2338) >= (((l_2339 = 0x07L) , g_111[0]) <= p_20));
                        p_22 = (g_410 & ((safe_mul_func_int8_t_s_s((func_89(l_2235, (safe_rshift_func_uint16_t_u_s((p_21 >= (safe_mod_func_int32_t_s_s(0xCF9A7755L, ((p_22 <= (safe_lshift_func_int8_t_s_s(func_89(((safe_add_func_uint8_t_u_u(l_2244, g_145)) | p_21), l_2352, p_22, g_180), l_2236))) ^ p_22)))), 1)), p_19, l_2248[2]) | l_1973[0]), 0x9FL)) <= 1L));
                        g_701 = 0xE1D8DA72L;
                    }
                    l_1823 = (safe_rshift_func_uint16_t_u_u((func_26(func_26(((func_75(p_19, (g_49 = 0x6C77EE18L), p_22, l_2235, ((p_22 && l_2273) & l_2355[4])) || (l_1555[0][1][3] = (g_844 = ((((safe_sub_func_int32_t_s_s((safe_rshift_func_int16_t_s_s((((g_770 > l_2336) | g_1626) > 0xF3A5371EL), g_392)), l_2126[4])) , g_637) | p_21) ^ 2UL)))) || g_743[3]))) <= g_572), 15));
                }
                if ((p_22 >= (safe_rshift_func_int16_t_s_s((safe_add_func_uint8_t_u_u(0UL, l_1790)), 4))))
                {
                    unsigned char l_2365[5] = {1UL,1UL,1UL,1UL,1UL};
                    int i;
                    if (g_1267)
                    {
                        l_2365[4] = func_42(l_2248[2], g_2364);
                    }
                    else
                    {
                        p_22 = func_69(((func_26(func_50((g_2011 | p_21), g_570, (l_2190 = (safe_lshift_func_uint16_t_u_u(((g_963 || (safe_add_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s((safe_add_func_int8_t_s_s((safe_mul_func_uint16_t_u_u(p_20, (l_2126[4] = (p_20 == (((p_22 != 0xBAACL) , l_2244) > g_701))))), 247UL)), 3)), g_49))) ^ 0x5AL), p_22))), g_111[0], p_20)) ^ 0x2164L) | (-1L)), l_1853);
                    }
                }
                else
                {
                    int l_2388[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_2388[i] = 0x3C026D8BL;
                    p_22 = ((safe_mod_func_int16_t_s_s(((func_42(((l_2247 || 0x22L) && (l_2388[0] = ((l_2378 , (((((safe_sub_func_uint32_t_u_u(0x4EFE7716L, (-7L))) <= ((((safe_sub_func_int8_t_s_s(l_2126[4], (l_1539 = l_1566))) >= g_770) < func_69(((g_1230 = (((safe_rshift_func_uint8_t_u_s((safe_add_func_uint8_t_u_u((p_22 , l_2387), l_1972)), 3)) , g_743[3]) , 7UL)) , 0x3F1D5E0FL), p_20)) || p_19)) > 9UL) , p_22) && g_592)) == g_860[1][9][3]))), g_701) < 0x46CA61F5L) != g_447[2][8][0]), p_20)) <= 0x13AFF0DFL);
                    if ((safe_unary_minus_func_int32_t_s((p_19 , 0xC53DEF8AL))))
                    {
                        unsigned l_2404 = 1UL;
                        int l_2405 = 7L;
                        p_22 = ((l_2405 = (((p_21 == (safe_rshift_func_int8_t_s_s((safe_sub_func_uint16_t_u_u(((l_1555[1][0][3] = ((func_75(g_2024, (safe_mul_func_uint8_t_u_u((((safe_lshift_func_int8_t_s_u((g_49 < (~((l_2355[4] , (safe_lshift_func_uint8_t_u_u((l_1823 = (((safe_rshift_func_uint16_t_u_s(p_19, 15)) , p_20) , p_20)), 4))) , p_21))), func_34((safe_lshift_func_int16_t_s_s(g_234, 4)), g_770, g_142, g_1568, p_20))) > l_2404) , g_743[0]), g_2071)), g_407, l_2355[4], p_22) | (-7L)) > 0x1AL)) >= l_2126[4]), g_433)), 5))) > p_20) , l_2355[3])) && 5L);
                        l_2190 = ((!(func_69((p_22 = (l_2405 , (p_19 && ((((safe_rshift_func_int8_t_s_u(l_2387, func_42(((((~(p_20 <= p_22)) >= (g_860[2][4][3] = (l_1782 = l_2388[0]))) , 7L) >= (l_2405 = (((l_2355[4] < ((((((((safe_add_func_int16_t_s_s(func_75(((safe_rshift_func_int16_t_s_u(g_447[2][8][0], 7)) , 0x1763L), l_2388[0], p_22, g_2071, p_21), 65535UL)) | 0x7D8CB315L) < 0x6460E128L) , p_19) ^ p_21) >= p_22) , l_2388[0]) & 1L)) >= 0UL) > 65533UL))), g_715))) >= l_1555[0][1][0]) < g_2024) < g_912)))), l_2355[8]) , 0x3DL)) | l_2023);
                        l_2126[4] = (((!(0x92AC0676L & ((0UL == (g_166 , l_2235)) , (safe_lshift_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s(((safe_mod_func_uint32_t_u_u((p_19 , g_2011), l_2404)) > (((p_22 = (safe_sub_func_uint8_t_u_u(0x65L, func_69(g_2420, g_637)))) < g_2364) ^ p_20)), l_1973[0])), 12))))) || 0x57769D2BL) | p_21);
                    }
                    else
                    {
                        p_22 = l_2355[2];
                    }
                    for (l_2237 = (-28); (l_2237 < 33); l_2237 = safe_add_func_uint16_t_u_u(l_2237, 8))
                    {
                        l_2433 = (g_2071 = (p_19 < (p_19 || (((func_75(((safe_add_func_uint8_t_u_u((g_2024 = (safe_lshift_func_int16_t_s_s((safe_mod_func_uint8_t_u_u(p_19, func_69(((g_62 = (p_19 ^ (((safe_rshift_func_uint16_t_u_u((safe_add_func_uint16_t_u_u(l_2214[0], (g_433 | 0UL))), 13)) && 0L) && ((-1L) >= l_1790)))) != p_19), l_2247))), 9))), 0x80L)) == g_743[3]), l_2355[4], g_1393[1][0], p_22, l_1892[0][1][3]) < g_971) , 0x26A33CC5L) >= 0x88927BD3L))));
                        p_22 = (p_21 , (safe_rshift_func_uint8_t_u_u(l_2355[8], 7)));
                    }
                    for (g_1839 = 0; (g_1839 <= 0); g_1839 += 1)
                    {
                        if (l_2126[4])
                            break;
                        p_22 = l_2436;
                    }
                }
                for (g_410 = 7; (g_410 != 23); g_410 = safe_add_func_uint32_t_u_u(g_410, 2))
                {
                    int l_2447[4][4][9] = {{{(-1L),0x97431BFAL,(-1L),7L,0xDE35B640L,0xD70505C2L,1L,(-6L),(-6L)},{0x02EE1A3AL,2L,0x3761B16DL,(-4L),0x3761B16DL,2L,0x02EE1A3AL,0xA1658A4FL,0xA1E79A2CL},{1L,0xD70505C2L,0xDE35B640L,7L,(-1L),0x97431BFAL,(-1L),7L,0xDE35B640L},{(-4L),(-4L),0xAD955618L,(-1L),0xA1E79A2CL,(-3L),2L,0xA1658A4FL,2L}},{{0xDE35B640L,0x770B0E61L,0xD70505C2L,0xD70505C2L,0x770B0E61L,0xDE35B640L,(-7L),(-6L),(-8L)},{0xA1658A4FL,0xEF659D8BL,0xAD955618L,0x63C0F791L,0x02EE1A3AL,0x02EE1A3AL,0x63C0F791L,0xAD955618L,0xEF659D8BL},{0x770B0E61L,0x87FA05FDL,0xDE35B640L,(-1L),0x22248A20L,7L,(-7L),(-7L),7L},{1L,0xA1658A4FL,0xAD955618L,0xA1658A4FL,(-1L),0x63C0F791L,1L,0x3761B16DL,0xA1E79A2CL}},{{(-1L),(-8L),(-7L),1L,0xC5CA9E9EL,1L,(-7L),(-8L),(-1L)},{(-3L),0x02EE1A3AL,(-4L),(-1L),0x3761B16DL,0x63C0F791L,1L,0x63C0F791L,0x3761B16DL},{0x22248A20L,0x87FA05FDL,0x87FA05FDL,0x22248A20L,1L,0x770B0E61L,0x97431BFAL,(-6L),0xDE35B640L},{(-3L),0x3761B16DL,1L,0xEF659D8BL,0xEF659D8BL,1L,0x3761B16DL,(-3L),0xAD955618L}},{{(-1L),7L,0xDE35B640L,0xD70505C2L,1L,(-6L),(-6L),1L,0xD70505C2L},{(-1L),1L,(-1L),0x02EE1A3AL,0x3761B16DL,0xEF659D8BL,2L,0xAD955618L,0xAD955618L},{0x87FA05FDL,(-1L),0xC5CA9E9EL,(-6L),0xC5CA9E9EL,(-1L),0x87FA05FDL,0x97431BFAL,0xDE35B640L},{2L,0xEF659D8BL,0x3761B16DL,0x02EE1A3AL,(-1L),1L,(-1L),0x02EE1A3AL,0x3761B16DL}}};
                    int i, j, k;
                    l_1783 = (l_2237 , (((safe_mod_func_uint32_t_u_u((safe_sub_func_int16_t_s_s(((safe_rshift_func_int8_t_s_u(func_34((l_2447[1][3][0] = ((((p_21 = (g_860[2][4][1] != (l_1906 & (p_19 = (((p_20 , (l_2190 <= g_145)) , func_89((safe_mod_func_uint8_t_u_u((g_2024 = 5UL), g_1267)), g_1464, p_20, g_1393[1][0])) <= 0xE7EE4966L))))) <= g_4) & 4294967290UL) > g_637)), p_20, g_2071, g_1393[1][0], g_971), 3)) & 5L), 0x6375L)), g_1568)) < p_22) || l_2436));
                }
            }
            else
            {
                g_2071 = g_166;
                l_1555[7][0][2] = (func_42((safe_add_func_uint16_t_u_u((((func_26((p_19 || (((safe_lshift_func_uint8_t_u_s((((safe_mul_func_int8_t_s_s((g_570 <= (safe_sub_func_uint32_t_u_u((func_26((l_1536 , (g_860[3][4][4] , ((safe_lshift_func_uint8_t_u_s(1UL, (l_2190 = p_22))) && (g_570 && ((0x2495L <= func_34(p_19, l_2105, p_21, g_2364, g_592)) & l_2126[7])))))) & g_447[2][8][0]), p_20))), 8L)) > l_2460) , p_19), 5)) != l_2461[0]) >= g_570))) != p_20) || 0x5CL) ^ p_19), l_2053)), l_2214[0]) , g_434);
            }
            if (func_34(l_1566, l_1853, ((safe_lshift_func_int16_t_s_s(0xBE21L, 7)) | (safe_lshift_func_uint8_t_u_s(func_69(((-1L) <= (safe_mul_func_uint8_t_u_u((p_19 <= (safe_mul_func_uint16_t_u_u((l_1555[1][0][3] = (g_860[1][9][3] = func_50((safe_sub_func_uint32_t_u_u(g_2011, (~g_2024))), (safe_mod_func_int8_t_s_s((safe_add_func_int32_t_s_s(((p_21 > (l_2080 < 4294967286UL)) , p_21), 0UL)), p_22)), g_572, g_447[2][8][0], g_912))), 3UL))), g_4))), p_20), 4))), p_21, g_2071))
            {
                unsigned l_2486 = 0UL;
                int l_2487 = 0xA2337124L;
                l_2053 = func_69((safe_rshift_func_int16_t_s_u(func_50(((((safe_add_func_int32_t_s_s(((p_22 = func_42((l_1566 = (l_1823 = (g_314 = (p_21 & 255UL)))), (g_410 = ((safe_mul_func_int16_t_s_s(func_34(p_20, (l_2387 != (safe_rshift_func_int16_t_s_s((func_34((g_770 , 4294967295UL), (0x4643CDF9L != ((safe_mod_func_int32_t_s_s(func_34((l_2486 = g_142), (p_20 || p_20), g_1626, p_20, l_1973[0]), p_21)) <= l_2037)), l_2487, g_433, l_1783) > 1UL), 14))), g_62, g_379[0][1][2], p_20), p_20)) > 65535UL)))) > p_20), 0xCF13E13AL)) == g_2011) | 0xFBCE008FL) | p_21), g_912, p_19, p_21, g_1839), l_1870)), p_21);
            }
            else
            {
                unsigned l_2490 = 0x7E815F84L;
                for (l_2236 = (-14); (l_2236 <= 28); l_2236 = safe_add_func_uint32_t_u_u(l_2236, 6))
                {
                    l_2490 = (-1L);
                }
                for (l_2176 = 0; (l_2176 <= 0); l_2176 += 1)
                {
                    int l_2495[10] = {0x45BEAC3EL,0x45BEAC3EL,0x45BEAC3EL,0x45BEAC3EL,0x45BEAC3EL,0x45BEAC3EL,0x45BEAC3EL,0x45BEAC3EL,0x45BEAC3EL,0x45BEAC3EL};
                    int i;
                    if (((((g_111[l_2176] , (((g_2420 , (safe_mul_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(g_2071, (l_2190 = (g_4 & (l_2495[7] = g_1464))))), p_21))) || ((-1L) != (5UL < 65530UL))) , 0x9942L)) > g_410) || 0xC9E4L) & p_19))
                    {
                        int l_2498[5][8] = {{0xD9236F91L,0x0B2B0402L,0x0B2B0402L,0xD9236F91L,0x65296947L,0xCF162C80L,(-10L),0xF9AA2AAFL},{(-10L),0xCF3E4C99L,0xD9236F91L,(-3L),0xCF3E4C99L,9L,0xCF3E4C99L,(-3L)},{0xCF162C80L,0xCF3E4C99L,0xCF162C80L,0xF9AA2AAFL,(-10L),0xCF162C80L,(-1L),0x0B2B0402L},{0x65296947L,0xF9AA2AAFL,(-1L),(-10L),1L,1L,(-10L),(-1L)},{0x65296947L,0x65296947L,9L,(-3L),(-10L),0xE1580EB6L,0x65296947L,(-10L)}};
                        int i, j;
                        g_2071 = ((safe_add_func_int16_t_s_s(l_2498[1][3], (0xC66883CEL && (l_2498[1][3] > ((safe_rshift_func_uint16_t_u_s((!g_971), (+((0x12AEL ^ ((func_69(g_2024, g_49) , ((((safe_mul_func_int16_t_s_s(l_2214[6], l_2495[7])) & g_925) > 0x00L) == 0L)) | l_2503)) , l_2498[1][3])))) < g_2364))))) <= p_19);
                        g_701 = ((g_971 >= p_21) >= 0x74L);
                        l_1953 = 0x20B879B6L;
                        g_701 = p_19;
                    }
                    else
                    {
                        return p_21;
                    }
                    l_2495[7] = ((((g_860[1][9][1] <= g_419) == g_447[2][8][0]) ^ (0x3E35L == (l_1823 = 0x2CB5L))) , l_1812);
                    return g_379[2][0][3];
                }
                p_22 = (g_701 = p_19);
            }
        }
        else
        {
            unsigned l_2514 = 1UL;
            int l_2530 = 0xA6C3C0C8L;
            unsigned l_2563 = 6UL;
            char l_2577 = (-1L);
            int l_2584 = 3L;
            if ((l_1823 = l_2461[0]))
            {
                return g_2504;
            }
            else
            {
                int l_2513 = 1L;
                unsigned char l_2592 = 1UL;
                int l_2609 = 9L;
                int l_2612[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_2612[i] = 0x00589329L;
                p_22 = (l_1555[7][1][1] = 0x0DAEE255L);
                if ((safe_mod_func_int32_t_s_s(((((safe_mul_func_uint8_t_u_u(((((safe_mod_func_uint16_t_u_u(((safe_sub_func_uint16_t_u_u(l_2513, (l_2514 < l_2171))) > 0L), (safe_sub_func_uint32_t_u_u((safe_mod_func_int16_t_s_s(l_2514, (safe_unary_minus_func_uint8_t_u((0xF5CEL ^ ((((((l_1782 = l_2513) , (func_42(l_2522, l_1906) | l_1536)) || g_971) > l_1812) < p_21) <= l_2514)))))), p_20)))) < 0xA336L) < 255UL) >= g_447[2][8][0]), g_2420)) != g_2011) , l_1870) || 0UL), 1UL)))
                {
                    int l_2529[6] = {0xD2D10A65L,0xD2D10A65L,0xD2D10A65L,0xD2D10A65L,0xD2D10A65L,0xD2D10A65L};
                    int l_2548 = 0x48A2850EL;
                    int i;
                    for (g_433 = 0; (g_433 < (-19)); --g_433)
                    {
                        short l_2545 = 0x9C83L;
                        int l_2562 = 0xAC05FCAFL;
                        p_22 = ((l_2530 = (((-2L) < (safe_add_func_uint8_t_u_u(g_570, 0x8EL))) < ((safe_rshift_func_uint16_t_u_u((l_2514 & 0x8D6BFD67L), l_2529[4])) <= (g_62 = p_21)))) || p_19);
                        g_145 = (safe_mul_func_int16_t_s_s(l_1790, ((p_19 & (safe_add_func_uint16_t_u_u(p_21, ((safe_mod_func_int32_t_s_s(l_1782, ((((safe_rshift_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(((g_701 = 1L) < 0UL), (safe_rshift_func_int8_t_s_s(((g_971 = (safe_lshift_func_int16_t_s_s((p_21 & 2UL), (g_1568 <= p_22)))) , g_1392), p_22)))), 7)) == l_2545) , p_21) | 0UL))) != l_2530)))) > l_2272)));
                        l_2126[7] = (func_89((safe_sub_func_int16_t_s_s(((p_20 >= ((l_2548 = p_20) & (safe_lshift_func_int8_t_s_s((p_21 , g_379[1][0][2]), (safe_add_func_uint8_t_u_u((0x0664L >= ((~(l_2562 = (safe_add_func_int32_t_s_s((g_2420 >= ((~func_34(g_743[4], (l_1555[1][0][3] = 0L), (((((safe_sub_func_int16_t_s_s(((safe_lshift_func_int8_t_s_u(g_1230, 5)) , (-7L)), l_2561)) , 0L) , 0x0AB7L) || g_637) , 254UL), g_1464, g_180)) != p_19)), g_111[0])))) >= l_1943)), g_447[4][0][0])))))) , 0x9CAFL), l_2545)), g_4, l_2563, g_180) >= g_407);
                        p_22 = (g_701 , (safe_sub_func_int32_t_s_s((l_1790 , (p_22 , 0x3D409114L)), p_20)));
                    }
                    p_22 = 1L;
                }
                else
                {
                    unsigned l_2582 = 0xBF3D3044L;
                    char l_2621 = 2L;
                    if (((safe_mul_func_int16_t_s_s(((safe_mod_func_int8_t_s_s((safe_sub_func_int32_t_s_s(p_20, 0x7D0373D2L)), 0x88L)) , g_1839), ((l_1782 = (((safe_lshift_func_uint8_t_u_s(l_2237, 6)) < l_2574[5]) & g_743[2])) != (l_1783 = g_1392)))) , ((safe_add_func_int8_t_s_s(g_234, 255UL)) && l_2577)))
                    {
                        int l_2583 = 0xB06647E6L;
                        l_2585 = ((-5L) | (func_75(g_379[2][1][1], (safe_add_func_int8_t_s_s((((((g_433 = p_22) >= func_89((func_34(g_2420, (g_743[3] = (((safe_mul_func_int8_t_s_s(((-2L) || ((-1L) < (((func_89(l_2574[5], l_2582, g_142, p_21) >= 1UL) || 0UL) , 0xC8DB39B4L))), g_715)) >= g_447[0][8][3]) | g_570)), p_21, g_2364, g_2364) , 0x5FL), l_2583, l_2583, l_2582)) , g_1392) >= p_19) < 4294967295UL), l_2584)), l_2583, g_410, l_2583) >= p_20));
                        g_2071 = (+p_21);
                        g_2071 = p_21;
                    }
                    else
                    {
                        p_22 = 0x2C6A0115L;
                        return p_20;
                    }
                    for (g_637 = 0; (g_637 <= 8); g_637 += 1)
                    {
                        int i;
                        g_2071 = ((l_2126[g_637] , (((((safe_add_func_uint16_t_u_u((safe_add_func_uint32_t_u_u(((g_860[1][9][3] , ((l_2461[0] == (func_75(((safe_mod_func_int8_t_s_s(0x67L, func_26(l_1892[5][4][1]))) , p_21), (((g_572 , l_1892[1][8][1]) || p_22) | 1L), l_2592, g_2420, g_844) >= 0x99A2C154L)) ^ 0x77L)) ^ 0x867BL), l_2563)), l_1837)) != p_19) > 250UL) & g_111[0]) , 6L)) , 0x7C00CB0DL);
                    }
                    if ((g_145 = ((safe_rshift_func_int16_t_s_s((safe_add_func_uint16_t_u_u((g_860[3][1][2] = (l_2612[1] = (~(safe_sub_func_int32_t_s_s(((l_1953 = (safe_add_func_uint8_t_u_u(((safe_mod_func_uint32_t_u_u(((l_2577 == (l_2611 = ((l_2577 != (((l_2610 = (safe_lshift_func_int8_t_s_s((l_2513 = g_111[0]), (l_2609 = (l_2592 & ((p_20 < (((((l_1540 , (safe_rshift_func_int16_t_s_u(6L, 15))) || (l_2582 , (safe_sub_func_int32_t_s_s((((!((((l_2530 = (l_2584 = l_2582)) && l_2577) , g_433) , 0x1DL)) != g_180) >= p_20), p_21)))) ^ g_1267) != p_21) , l_1972)) && g_2504)))))) , p_21) && g_1393[4][0])) >= p_20))) , l_2248[2]), 1L)) , 0x0CL), l_2592))) >= p_22), l_2592))))), 1UL)), l_2514)) > p_19)))
                    {
                        unsigned char l_2622 = 255UL;
                        p_22 = func_75(((!(safe_add_func_int16_t_s_s(l_2582, func_50(g_1626, g_1230, (safe_mod_func_int8_t_s_s(((safe_add_func_int32_t_s_s(((((4294967295UL ^ (l_2612[1] ^ (0x50L | (safe_lshift_func_int8_t_s_s((l_1823 = ((l_2513 = g_770) != ((0xEFCB1569L != p_20) || 0xC6739B99L))), 3))))) && p_19) , p_19) ^ p_22), g_2504)) >= p_22), l_2461[0])), l_2621, g_1392)))) >= 9L), g_2364, l_2514, g_1230, l_2563);
                        l_2622 = g_2011;
                    }
                    else
                    {
                        unsigned char l_2623 = 252UL;
                        g_701 = 0x51A42648L;
                        l_1823 = 1L;
                        l_2624 = ((l_1566 != 0x109FDD9FL) <= (l_2623 = p_22));
                    }
                }
                if (((safe_add_func_uint8_t_u_u(4UL, (l_1953 = (((l_2126[4] | (l_2460 != (safe_mod_func_uint16_t_u_u(p_21, p_21)))) & (((g_572 < ((safe_mul_func_uint8_t_u_u(((l_2513 = func_26(l_2610)) , (p_20 != g_447[2][8][0])), g_2420)) , g_145)) > (-1L)) , g_963)) & l_2584)))) == l_2530))
                {
                    unsigned short l_2631[8][6] = {{0x9ADBL,2UL,65535UL,0x2269L,1UL,0x279DL},{65535UL,65531UL,0UL,2UL,7UL,0x279DL},{0xCB35L,0xFDADL,65535UL,65535UL,0xFDADL,0xCB35L},{7UL,1UL,1UL,1UL,0x9ADBL,0xFDADL},{1UL,0UL,0x9ADBL,0xA3BAL,1UL,65527UL},{1UL,0x2269L,0xA3BAL,1UL,0xA3BAL,0x2269L},{7UL,0x9ADBL,2UL,65535UL,0x2269L,1UL},{0xCB35L,0xC433L,1UL,2UL,0x279DL,0xA3BAL}};
                    int l_2634 = 8L;
                    int i, j;
                    l_2634 = func_50(g_1568, (7L >= (g_410 , l_2577)), p_20, ((((l_2631[7][4] = (l_2584 = g_592)) && (safe_lshift_func_uint16_t_u_u(0xCAA8L, 8))) , (l_2514 , ((g_1568 && 0L) , (-1L)))) && g_1626), p_19);
                    p_22 = (g_447[3][6][0] | (g_2635[0] && l_1906));
                    l_2584 = l_2461[0];
                }
                else
                {
                    short l_2652 = 0x30B3L;
                    unsigned l_2653[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_2653[i] = 0xDA2B58F6L;
                    l_1783 = (((g_434 = (safe_mul_func_uint8_t_u_u(0xFDL, p_21))) || ((((safe_lshift_func_int16_t_s_s((+((safe_mul_func_uint8_t_u_u(p_21, (((g_1626 ^ p_20) ^ ((((safe_rshift_func_uint8_t_u_s((safe_lshift_func_uint16_t_u_u(9UL, 6)), 4)) & func_50(((safe_rshift_func_int8_t_s_u(0xA2L, (safe_mul_func_int8_t_s_s(g_971, ((g_592 = (safe_mod_func_int32_t_s_s(0x91A37324L, g_715))) , g_180))))) >= p_22), l_2652, l_2653[0], g_180, p_20)) , 4294967291UL) != 0x8502B314L)) < 2L))) > 1L)), p_22)) <= l_2592) ^ 0xE945L) || g_419)) && 6UL);
                    if ((safe_rshift_func_uint16_t_u_u((safe_add_func_int32_t_s_s(g_407, (safe_lshift_func_uint16_t_u_s((l_2660[4] >= ((p_21 , l_1782) == g_2504)), 7)))), func_75((safe_add_func_uint8_t_u_u((l_2530 = ((safe_sub_func_uint8_t_u_u(((0L & ((l_2584 <= (l_2652 == g_2504)) , p_19)) , p_19), g_1393[1][0])) , l_2010)), g_1839)), l_1892[0][0][0], l_2171, p_19, g_447[4][1][1]))))
                    {
                        unsigned short l_2665 = 0xA653L;
                        g_701 = (p_22 = l_2577);
                        return l_2665;
                    }
                    else
                    {
                        int l_2666 = 1L;
                        p_22 = p_21;
                        return l_2666;
                    }
                }
            }
            p_22 = (p_19 && g_2504);
            g_2504 = ((safe_rshift_func_uint16_t_u_u(((l_2530 = (l_2126[3] = (((safe_mul_func_int16_t_s_s(((p_21 || (safe_mod_func_uint16_t_u_u((func_89((0xEC0BB685L | (0x67L && (0x3A4172F5L == (safe_sub_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s((~0x4EL), p_21)), (l_2584 = g_1393[5][0])))))), func_50(g_971, l_1642, l_1943, p_19, p_19), l_1555[1][0][3], g_2024) || p_22), g_2420))) || l_2563), p_19)) != 0x8DB74E30L) && 0x76L))) & 0xDFC1D7FBL), p_22)) >= g_2024);
            g_2071 = (p_20 , (p_22 == p_21));
        }
        l_1566 = g_447[2][8][0];
    }
    return g_1464;
}







static unsigned char func_26(unsigned p_27)
{
    unsigned char l_1470[5] = {251UL,251UL,251UL,251UL,251UL};
    char l_1472 = 0x64L;
    int l_1489 = 0L;
    int l_1514 = 1L;
    unsigned l_1515 = 0UL;
    int i;
    for (g_234 = (-10); (g_234 == (-24)); g_234 = safe_sub_func_uint32_t_u_u(g_234, 8))
    {
        unsigned char l_1471 = 0x85L;
        g_701 = p_27;
        l_1472 = ((p_27 , 0x4F51E43CL) > (p_27 >= ((0x32L | (safe_lshift_func_uint8_t_u_s(func_34(l_1470[1], (l_1470[1] & func_34((g_234 > ((l_1470[1] | l_1471) , p_27)), p_27, g_1393[7][1], p_27, p_27)), l_1470[0], l_1471, g_419), 2))) != 0xFBL)));
        g_701 = (-3L);
    }
    for (g_925 = (-6); (g_925 < 36); ++g_925)
    {
        int l_1477 = 0x630AA5A4L;
        for (g_358 = (-7); (g_358 == 11); g_358++)
        {
            short l_1490 = 6L;
            int l_1501[10][6] = {{0x28027F2EL,0x90864B89L,(-1L),0x9A72CB77L,0x88A51097L,0x88A51097L},{0L,1L,1L,0L,0x90864B89L,0xA29C073AL},{0L,0x90864B89L,0xA29C073AL,0x9A72CB77L,1L,0xA29C073AL},{0xA83B3178L,0x88A51097L,1L,0x28027F2EL,1L,0x88A51097L},{0x9A72CB77L,0x90864B89L,(-1L),0x28027F2EL,0x90864B89L,1L},{0xA83B3178L,1L,(-1L),0x9A72CB77L,0x88A51097L,0x88A51097L},{0L,1L,1L,0L,0x90864B89L,0xA29C073AL},{0L,0x90864B89L,0xA29C073AL,0x9A72CB77L,1L,0xA29C073AL},{0xA83B3178L,0x88A51097L,1L,0x28027F2EL,1L,0x88A51097L},{0x9A72CB77L,0x90864B89L,(-1L),0x28027F2EL,0x90864B89L,1L}};
            int l_1510 = 0x5F7C2DE4L;
            int l_1513 = (-1L);
            int i, j;
            if (l_1477)
                break;
            l_1490 = (safe_rshift_func_int16_t_s_s(((safe_sub_func_uint32_t_u_u(g_111[0], ((safe_lshift_func_int8_t_s_s(((((func_34(((((((safe_lshift_func_uint8_t_u_u(g_166, l_1470[3])) , (func_89(((p_27 >= ((safe_lshift_func_int8_t_s_s((l_1470[1] > (0xF0B8L < (safe_unary_minus_func_uint16_t_u((l_1489 = ((g_1230 , (l_1470[1] <= (p_27 , p_27))) , 1UL)))))), 6)) & 255UL)) <= p_27), g_379[1][1][1], l_1477, g_142) , 1L)) != l_1477) | l_1477) & g_379[0][1][2]) > p_27), p_27, p_27, g_419, g_447[2][8][0]) != g_1267) >= 255UL) | p_27) != 0x11L), p_27)) != (-4L)))) || 0x0AL), p_27));
            if ((safe_sub_func_uint8_t_u_u(0UL, (safe_lshift_func_int8_t_s_s(((safe_mul_func_uint8_t_u_u((((safe_mod_func_uint32_t_u_u((((safe_add_func_uint16_t_u_u(func_89(((l_1501[4][4] = (-4L)) ^ (g_1230 = ((safe_mod_func_int8_t_s_s((safe_mul_func_uint8_t_u_u(l_1470[1], ((~(p_27 & (safe_lshift_func_uint8_t_u_u((l_1513 = ((safe_sub_func_uint8_t_u_u((((l_1510 = (g_407 || 0x320FL)) != ((0x44D4EE39L != (l_1477 = (-4L))) < (safe_lshift_func_uint16_t_u_u(65527UL, p_27)))) | 4294967287UL), p_27)) , 0x6AL)), l_1490)))) & 3UL))), p_27)) > 0x8D19L))), l_1490, p_27, l_1514), 0xD018L)) || 1UL) && 1L), g_392)) != l_1470[1]) || l_1477), p_27)) < l_1490), l_1470[2])))))
            {
                l_1501[1][4] = l_1515;
            }
            else
            {
                return l_1470[4];
            }
            l_1501[7][2] = (safe_lshift_func_uint8_t_u_u(251UL, 1));
        }
        l_1477 = func_75((safe_rshift_func_int16_t_s_u((safe_mul_func_int16_t_s_s((l_1470[4] | 9UL), ((safe_rshift_func_int16_t_s_u(func_34(g_1393[2][0], g_145, g_701, (((safe_add_func_int32_t_s_s(((safe_mul_func_int8_t_s_s((l_1489 = (g_701 < g_925)), (safe_rshift_func_int8_t_s_s(l_1514, 6)))) & (((safe_mul_func_int16_t_s_s((l_1477 ^ 0UL), l_1470[0])) | 0x75B6L) != g_971)), 0L)) >= 1UL) <= l_1514), g_1464), l_1472)) && g_180))), p_27)), g_392, l_1477, g_180, g_392);
    }
    return l_1515;
}







static unsigned func_34(unsigned p_35, int p_36, unsigned char p_37, unsigned short p_38, char p_39)
{
    unsigned l_1443[6];
    int l_1447 = 1L;
    unsigned short l_1450 = 0x3FF9L;
    unsigned l_1451[7];
    unsigned l_1452 = 0xA7D9CD95L;
    unsigned l_1463 = 0x34051984L;
    int i;
    for (i = 0; i < 6; i++)
        l_1443[i] = 4294967295UL;
    for (i = 0; i < 7; i++)
        l_1451[i] = 0xC493D800L;
    g_145 = (g_392 | (g_180 < ((safe_sub_func_uint32_t_u_u(l_1443[4], (safe_unary_minus_func_uint8_t_u((p_37 != (safe_lshift_func_uint8_t_u_u((l_1451[2] = (((l_1447 = (g_701 = ((g_572 > 8UL) ^ 5L))) && ((l_1447 = ((safe_add_func_uint32_t_u_u((g_971 = (g_572 || ((l_1443[4] , g_62) || l_1447))), p_38)) ^ 0x60A1L)) ^ l_1450)) && (-1L))), l_1452))))))) && g_145)));
    g_145 = (((safe_rshift_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u(g_49, l_1443[5])), (safe_mul_func_uint8_t_u_u(((p_36 = p_37) , 255UL), l_1451[4])))) ^ (g_1393[2][0] = 254UL)) < (safe_rshift_func_uint8_t_u_s(((((p_39 = l_1443[2]) & ((0xABL <= (safe_mul_func_int8_t_s_s(((((p_37 >= 0x04F1L) || 0xCBL) != p_37) , 0x3BL), 255UL))) ^ g_419)) <= g_963) != 0UL), l_1463)));
    return g_715;
}







static char func_42(char p_43, char p_44)
{
    unsigned short l_56 = 9UL;
    int l_61 = 3L;
    int l_987 = 0xFD7AC940L;
    unsigned l_1042 = 0xEF28594BL;
    unsigned l_1138[2][4][10] = {{{4294967288UL,4294967292UL,4294967292UL,4294967288UL,4294967292UL,4294967292UL,4294967288UL,4294967292UL,4294967292UL,4294967288UL},{4294967292UL,4294967288UL,4294967292UL,4294967292UL,4294967288UL,4294967292UL,4294967292UL,4294967288UL,4294967292UL,4294967292UL},{4294967288UL,4294967288UL,0xFCD037FBL,4294967288UL,4294967288UL,0xFCD037FBL,4294967288UL,4294967288UL,0xFCD037FBL,4294967288UL},{4294967288UL,4294967292UL,4294967292UL,4294967288UL,4294967292UL,4294967292UL,4294967288UL,0xFCD037FBL,0xFCD037FBL,4294967292UL}},{{0xFCD037FBL,4294967292UL,0xFCD037FBL,0xFCD037FBL,4294967292UL,0xFCD037FBL,0xFCD037FBL,4294967292UL,0xFCD037FBL,0xFCD037FBL},{4294967292UL,4294967292UL,4294967288UL,4294967292UL,4294967292UL,4294967288UL,4294967292UL,4294967292UL,4294967288UL,4294967292UL},{4294967292UL,0xFCD037FBL,0xFCD037FBL,4294967292UL,0xFCD037FBL,0xFCD037FBL,4294967292UL,0xFCD037FBL,0xFCD037FBL,4294967292UL},{0xFCD037FBL,4294967292UL,0xFCD037FBL,0xFCD037FBL,4294967292UL,0xFCD037FBL,0xFCD037FBL,4294967292UL,0xFCD037FBL,0xFCD037FBL}}};
    char l_1171 = 0x59L;
    char l_1250 = 0xC2L;
    int l_1280 = 0x851A004CL;
    char l_1288[6] = {(-9L),(-9L),(-9L),(-9L),(-9L),(-9L)};
    unsigned short l_1334 = 0xDA1EL;
    int l_1430 = 0xC1947419L;
    unsigned short l_1439 = 65526UL;
    short l_1440 = 0xBA1FL;
    int i, j, k;
    l_987 = ((func_50(l_56, l_56, p_44, (((safe_add_func_int8_t_s_s((safe_mod_func_uint16_t_u_u(p_44, (g_62 = (l_61 = 0x6658L)))), (safe_lshift_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((p_43 , ((safe_sub_func_uint8_t_u_u(g_49, (p_43 & ((p_44 != 1L) > g_49)))) < p_44)), 0x7AL)), 0)))) && l_56) , l_61), g_49) || p_43) == 0x8582L);
    for (l_987 = 0; (l_987 >= 0); l_987 -= 1)
    {
        unsigned short l_994 = 0x1FB9L;
        int l_1022 = (-7L);
        int l_1193 = 0x780AC417L;
        short l_1219[7][7] = {{0xD876L,0xD9C5L,0L,0xD876L,1L,7L,1L},{0xD876L,(-2L),(-2L),0xD876L,0x0C27L,0x9444L,1L},{0xA0FAL,0xD9C5L,(-2L),0xA0FAL,1L,0x9444L,0x0C27L},{0xD876L,0xD9C5L,0L,0xD876L,1L,7L,1L},{0xD876L,(-2L),(-2L),0xD876L,0x0C27L,0x9444L,1L},{0xA0FAL,0xD9C5L,(-2L),0xA0FAL,1L,0x9444L,0x0C27L},{0xD876L,0xD9C5L,0L,0xD876L,(-2L),0L,(-2L)}};
        unsigned l_1254[7][2][9] = {{{0xB299164CL,0xAFF06E05L,0x4778D9BCL,9UL,0x31C533A7L,0xD2120E15L,0xD20A359AL,4294967295UL,0x4778D9BCL},{4294967295UL,0x56505BD7L,4294967295UL,0x77931AD9L,0x0437A553L,0xAFF06E05L,0x176FBEF9L,4294967295UL,0x31C533A7L}},{{0x459E1C2CL,4294967295UL,0xD2120E15L,4294967295UL,2UL,2UL,4294967295UL,0xD2120E15L,4294967295UL},{0x02CF4A55L,0x249ABD22L,4294967295UL,0xEF377F19L,1UL,1UL,4294967295UL,0x4778D9BCL,0xC4A45C4AL}},{{9UL,3UL,0x4778D9BCL,0x4747CD36L,9UL,4294967295UL,0x176FBEF9L,3UL,4294967295UL},{0xA4CFE079L,0x249ABD22L,0xAFF06E05L,0x82D4E2FCL,0x56505BD7L,4294967295UL,0xD20A359AL,4294967295UL,3UL}},{{0UL,4294967295UL,1UL,4294967291UL,0xD2120E15L,1UL,0x4747CD36L,0x249ABD22L,0x4D1FC109L},{0xA4CFE079L,0x56505BD7L,0x31C533A7L,0xB299164CL,0xD2120E15L,2UL,4294967292UL,9UL,9UL}},{{9UL,0xAFF06E05L,0x56505BD7L,0UL,0x56505BD7L,0xAFF06E05L,9UL,2UL,0x4D1FC109L},{0x02CF4A55L,4294967295UL,4294967295UL,0UL,9UL,0xD2120E15L,0x459E1C2CL,0x56505BD7L,3UL}},{{0x459E1C2CL,1UL,0x0437A553L,0xC4A45C4AL,0x9FF9F5F6L,4294967286UL,1UL,0x65F021D9L,0x7728C0C7L},{0x249ABD22L,0UL,0x77760302L,0xAFF06E05L,0x65F021D9L,4294967295UL,4294967295UL,1UL,4294967295UL}},{{0xC4A45C4AL,1UL,0x7728C0C7L,4294967295UL,0x77760302L,0x357BF926L,1UL,0x3D73C288L,4294967287UL},{4294967295UL,1UL,0x357BF926L,9UL,0UL,4294967295UL,0x56505BD7L,4294967295UL,0UL}}};
        short l_1259 = 8L;
        unsigned short l_1295[5];
        int i, j, k;
        for (i = 0; i < 5; i++)
            l_1295[i] = 1UL;
        if ((safe_add_func_uint8_t_u_u((((g_592 > (safe_mod_func_uint32_t_u_u(g_166, 0x4C080F8BL))) ^ l_61) != (safe_sub_func_uint8_t_u_u(p_43, l_994))), (safe_sub_func_int8_t_s_s(g_592, (safe_mod_func_uint8_t_u_u(((l_994 != (g_860[1][9][3] = ((l_56 >= 0x1FB0A967L) <= p_44))) , l_61), 0x67L)))))))
        {
            char l_1019 = 0L;
            int l_1020 = 0xB593045BL;
            int l_1021 = 0xE0B30654L;
            int l_1023 = (-4L);
            l_1023 = (safe_mod_func_int8_t_s_s((p_43 = (safe_mod_func_uint8_t_u_u(p_44, (l_1022 = (safe_sub_func_uint8_t_u_u((l_1021 = ((safe_mul_func_int8_t_s_s((((l_1020 = (safe_lshift_func_uint8_t_u_s((l_994 , g_860[3][4][4]), (l_994 && (((func_69(g_925, (safe_mul_func_uint16_t_u_u(((((safe_sub_func_uint8_t_u_u((safe_add_func_uint32_t_u_u(((safe_mul_func_int8_t_s_s(g_410, ((l_61 = (0xD74E726EL < func_75((safe_lshift_func_int16_t_s_s(p_44, 8)), l_1019, p_43, l_994, g_358))) < 0xB1L))) | p_43), 2L)), g_407)) , 1L) , 0x50C1L) ^ l_1019), 0xF259L))) && 8L) >= p_43) , p_43))))) <= 255UL) <= p_44), p_43)) ^ g_570)), l_994)))))), l_987));
        }
        else
        {
            g_145 = (-1L);
        }
        if (((safe_lshift_func_uint8_t_u_s(g_594, (safe_sub_func_int16_t_s_s(g_392, g_447[2][8][0])))) && 0L))
        {
            unsigned l_1028 = 0x816BB8C7L;
            l_61 = (~l_1028);
        }
        else
        {
            unsigned char l_1040 = 247UL;
            int l_1041 = 0xEC09DAE3L;
            int l_1058 = 0xA47912CEL;
            int l_1098 = 0L;
            unsigned l_1118 = 0UL;
            unsigned l_1131 = 4294967286UL;
            unsigned l_1192 = 0x6B40ABCAL;
            char l_1224 = 0x0CL;
            int l_1247 = (-9L);
            short l_1275 = 0xDB10L;
            for (g_925 = 0; (g_925 <= 3); g_925 += 1)
            {
                int l_1029[1][10] = {{0x352E6E10L,0x352E6E10L,0x352E6E10L,0x352E6E10L,0x352E6E10L,0x352E6E10L,0x352E6E10L,0x352E6E10L,0x352E6E10L,0x352E6E10L}};
                int i, j;
                return l_1029[0][5];
            }
            if ((safe_mod_func_uint32_t_u_u(p_44, func_69((l_1022 = 0L), (safe_sub_func_int8_t_s_s(4L, (safe_lshift_func_uint16_t_u_u(((g_234 = (0xEB8DCB4CL > (g_637 < p_44))) || ((safe_mod_func_int8_t_s_s(0xEFL, (safe_lshift_func_int8_t_s_s(g_592, ((func_75(p_43, l_1040, g_180, l_1041, g_572) > 0xBEL) , 9L))))) && p_44)), l_1040))))))))
            {
                unsigned l_1043 = 0UL;
                l_1043 = l_1042;
            }
            else
            {
                int l_1046[5][2] = {{0xE19F1541L,0x5410B40DL},{0L,0L},{0L,0x5410B40DL},{0xE19F1541L,(-7L)},{0x5410B40DL,(-7L)}};
                int l_1057 = 0L;
                unsigned l_1132 = 0x13481080L;
                short l_1133 = (-1L);
                int i, j;
                l_1058 = (safe_add_func_int32_t_s_s(func_50(g_407, p_43, (l_1046[0][1] , ((safe_lshift_func_uint8_t_u_u((l_1057 = ((~(((safe_add_func_int32_t_s_s(g_234, (safe_mod_func_int32_t_s_s(((p_43 || (l_1022 = (l_1046[0][1] = (~((g_844 = (~(safe_sub_func_uint16_t_u_u(p_44, (((safe_add_func_int16_t_s_s(p_44, g_594)) < ((p_43 , p_43) == l_1022)) , p_44))))) > g_142))))) , l_994), p_44)))) >= 2UL) == p_43)) && 1L)), p_44)) , 7UL)), g_145, g_860[3][0][4]), 0xF86F62E7L));
                if ((g_145 = ((p_44 > 0xA920179AL) ^ (p_44 < 0x2B5FL))))
                {
                    unsigned short l_1069[6][1] = {{65527UL},{0xC6C5L},{65527UL},{0xC6C5L},{65527UL},{0xC6C5L}};
                    int l_1070 = (-2L);
                    int l_1085 = 7L;
                    short l_1096 = 0xC312L;
                    int l_1105 = 0x812B5209L;
                    int i, j;
                    if (((safe_sub_func_uint16_t_u_u((safe_mul_func_int16_t_s_s(p_43, ((0UL && (func_50(g_407, (l_1069[0][0] = ((g_572 & 1L) == (g_434 > (safe_lshift_func_int16_t_s_u(((safe_mul_func_uint8_t_u_u((l_1058 ^ ((safe_lshift_func_int16_t_s_s(0x46D5L, 1)) | (((!(l_56 || 0x21L)) < 4294967295UL) != 0xD6L))), (-7L))) , 0x64BEL), p_43))))), l_1041, l_994, l_1046[0][1]) || l_1057)) & l_1070))), 0x0256L)) || g_570))
                    {
                        char l_1097[7][8][4] = {{{0x1BL,(-6L),0x88L,(-2L)},{0L,0x19L,(-3L),0x0DL},{0xE4L,0x88L,0x63L,0L},{(-2L),0L,0L,(-6L)},{0x25L,1L,0L,0x2AL},{8L,(-1L),(-1L),0x6CL},{0x95L,(-7L),0x2CL,0x7DL},{0L,1L,0x32L,1L}},{{2L,0x4FL,0x39L,0L},{(-1L),(-1L),7L,0x95L},{7L,0xEDL,0xFFL,(-1L)},{1L,0x63L,0xB6L,0x2AL},{1L,0x65L,0xC1L,0x79L},{0xEDL,(-1L),(-1L),0xEDL},{0x88L,0x56L,0x5FL,1L},{0x98L,0xD8L,(-3L),0x59L}},{{0xBCL,(-3L),1L,0x59L},{1L,0xD8L,0x39L,1L},{0xCBL,0x56L,(-1L),0xEDL},{0xE4L,(-1L),0x9BL,0x79L},{(-1L),0x65L,0x32L,0x2AL},{0L,0x63L,0x53L,(-1L)},{(-1L),0xEDL,0x58L,0x95L},{0xB0L,(-1L),(-1L),0xF9L}},{{1L,1L,0x65L,0xDDL},{0xDDL,0L,7L,(-1L)},{0x38L,0L,1L,0xE4L},{(-4L),0x21L,0x0DL,1L},{0x39L,(-6L),0x35L,0xBCL},{0L,0x08L,3L,(-8L)},{(-1L),(-2L),0x7AL,1L},{0x53L,7L,0xD0L,0xB6L}},{{0x19L,0x79L,(-8L),0x0DL},{0x63L,0x7DL,0x89L,1L},{0x19L,0x21L,(-3L),0L},{0xFAL,0x01L,0L,1L},{0L,0x9BL,0xEEL,0x08L},{0x55L,1L,8L,0x03L},{0L,0xFAL,1L,0x70L},{0L,(-4L),7L,7L}},{{0x70L,0L,0x70L,0x6CL},{0xEDL,0xFDL,(-6L),(-1L)},{0xE4L,(-6L),2L,0xFDL},{1L,0xD0L,2L,0xEEL},{0xE4L,0xD3L,(-6L),1L},{0xEDL,0x63L,0x70L,0x88L},{0x70L,0x88L,7L,(-6L)},{0L,0x2CL,1L,2L}},{{0L,0x18L,8L,0xB6L},{0x55L,0x4FL,0xEEL,0xD7L},{0L,0L,0L,0xF9L},{0xFAL,0xFFL,(-3L),8L},{0x19L,0L,0x89L,7L},{0x63L,0x89L,0x2CL,0x16L},{8L,(-1L),(-1L),(-1L)},{0xC1L,0xE4L,0x88L,0x63L}}};
                        int i, j, k;
                        g_145 = (253UL || (p_43 , (g_62 = ((safe_rshift_func_uint16_t_u_u((p_44 < p_43), (p_44 | (-1L)))) & 3UL))));
                        l_1070 = (((l_1070 < (((((safe_lshift_func_int8_t_s_u((g_743[6] ^ (((safe_mod_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s((((safe_rshift_func_int8_t_s_s((safe_lshift_func_int16_t_s_u((safe_mul_func_uint16_t_u_u((l_1085 = g_392), (safe_add_func_int8_t_s_s((safe_rshift_func_int16_t_s_s((((((((g_4 | ((((0UL <= ((0x3648L & (safe_lshift_func_uint16_t_u_u(g_142, (((safe_add_func_int32_t_s_s(l_1022, ((g_844 = (safe_mul_func_int8_t_s_s((p_44 = (-9L)), l_1040))) & p_43))) & 0x167CL) || l_1096)))) || 0xCAAFL)) ^ 65535UL) , p_44) , l_1097[5][4][2])) == l_1097[5][4][2]) && l_994) || p_43) > (-1L)) != l_1098) <= 3UL), l_994)), l_1096)))), l_1046[0][1])), 5)) & 0L) <= l_1097[0][7][2]), l_1042)), g_166)) | g_234) , g_142)), g_234)) < g_145) <= g_62) <= 0xBCL) <= p_43)) , g_410) != 0x3308L);
                    }
                    else
                    {
                        int i;
                        l_1022 = (safe_rshift_func_uint16_t_u_s((g_419 , (((safe_rshift_func_int16_t_s_s((-1L), 9)) , (p_44 = ((g_844 = p_44) <= (func_69((p_44 , func_89((l_1058 = (safe_lshift_func_uint8_t_u_u(p_44, g_592))), (func_69(l_1022, l_1098) , 3UL), l_1057, l_1105)), g_715) != 4294967292UL)))) || l_1085)), 15));
                        g_701 = ((g_111[l_987] = (safe_mul_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s(((safe_sub_func_int32_t_s_s((g_62 , p_44), ((p_44 != ((safe_add_func_uint16_t_u_u(p_44, 0L)) , (((safe_rshift_func_int8_t_s_u((~((((l_1085 = p_43) , ((g_62 || 0xE20F0717L) != g_419)) , 0x109CCCBCL) , p_44)), 0)) || p_44) || g_594))) >= 0xE8D80F41L))) != (-1L)), g_49)), p_43))) , l_987);
                    }
                }
                else
                {
                    for (g_715 = 0; (g_715 <= 3); g_715 += 1)
                    {
                        l_1046[1][1] = 0x20D1FE82L;
                    }
                    for (g_234 = 0; (g_234 <= 3); g_234 += 1)
                    {
                        if (l_1098)
                            break;
                        l_1058 = p_44;
                    }
                    l_1022 = l_1098;
                    g_145 = (safe_rshift_func_int16_t_s_u(g_912, g_743[1]));
                }
                l_1118 = p_44;
                g_145 = (safe_sub_func_int32_t_s_s((((safe_lshift_func_uint16_t_u_u((((l_1057 & l_1046[4][0]) , (~5L)) >= ((65535UL <= (g_860[1][9][3] = g_715)) , (((g_180 || (g_49 = ((((g_860[1][9][3] = (safe_lshift_func_int8_t_s_u(((safe_rshift_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s((~((((safe_lshift_func_int16_t_s_u((-5L), l_1131)) >= ((l_994 <= 0xC398L) || 1UL)) ^ 0x0D0979B6L) > (-8L))), p_44)), 7)) , p_44), 3))) , l_1132) != l_1132) , 1UL))) == g_419) < l_1046[3][1]))), 7)) < l_1133) , l_1042), p_44));
            }
            l_1058 = (-1L);
            if ((p_43 > l_994))
            {
                int l_1145 = 0xD9B0BD99L;
                g_701 = (safe_mul_func_int16_t_s_s(p_43, l_994));
                if (((p_44 = (p_43 = func_69(g_844, ((safe_add_func_int8_t_s_s(((l_1138[0][2][1] = l_56) >= (safe_add_func_int32_t_s_s((safe_mod_func_uint16_t_u_u((+(l_1058 = l_1042)), (((safe_mod_func_uint8_t_u_u((l_1145 & ((l_61 = func_75(p_43, (func_69((g_166 , ((func_50(((0xAEFB5F3AL > 0L) | (g_860[1][8][0] >= 1UL)), l_1145, l_61, p_43, g_925) == g_447[0][7][1]) | g_844)), l_1098) , 1UL), l_1022, g_111[0], l_1145)) , 0x462018ACL)), p_43)) && p_43) , p_44))), g_447[2][8][0]))), 0x2EL)) , p_43)))) ^ g_4))
                {
                    g_701 = (safe_rshift_func_uint16_t_u_u(((g_971 = (p_44 > (safe_unary_minus_func_uint32_t_u(((g_844 = p_44) | (g_433 < l_1145)))))) > (l_1131 && ((safe_sub_func_uint32_t_u_u(((safe_mod_func_int32_t_s_s((p_44 > (p_44 >= 0x00L)), func_89(l_1145, g_592, l_61, p_43))) > l_1022), p_43)) , 0L))), l_1058));
                    if (p_44)
                        continue;
                    if (l_1145)
                        continue;
                }
                else
                {
                    unsigned l_1167 = 4294967295UL;
                    int l_1168 = 0x04A38DB0L;
                    l_1168 = ((l_1058 = (safe_lshift_func_uint16_t_u_s((safe_rshift_func_int16_t_s_u((l_61 = (safe_rshift_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u(l_1042, (safe_mod_func_uint32_t_u_u((((+(safe_mul_func_int8_t_s_s(p_43, (safe_rshift_func_int16_t_s_u(((g_447[2][8][0] | (l_1167 = ((func_50((g_963 = (g_860[1][9][3] = 1UL)), g_701, l_1118, g_447[3][1][0], p_43) & (-9L)) <= g_4))) < 0xCCL), g_447[2][8][0]))))) != g_844) && g_180), p_43)))), 1))), g_447[2][5][0])), 9))) <= g_4);
                    l_1145 = func_50(g_358, (l_1022 = (safe_sub_func_uint16_t_u_u(l_1058, (((((l_1168 = 4294967295UL) , 0x5E3A68B2L) , g_62) > (l_1171 ^ (-1L))) == p_43)))), g_180, g_410, g_743[1]);
                }
                for (g_142 = 0; (g_142 <= 3); g_142 += 1)
                {
                    l_1022 = (g_62 <= (p_44 = (-1L)));
                    return l_994;
                }
            }
            else
            {
                unsigned short l_1194 = 65535UL;
                unsigned l_1206 = 0xF0BF8D7AL;
                int l_1218 = 1L;
                int l_1225 = 0x51CA35B1L;
                if (((safe_mod_func_int32_t_s_s((safe_rshift_func_int8_t_s_u(((((safe_sub_func_uint8_t_u_u(g_166, (p_44 = ((((safe_sub_func_int32_t_s_s((safe_rshift_func_int8_t_s_u((safe_sub_func_int8_t_s_s((((g_379[0][0][3] | (l_1022 = p_43)) < l_1138[1][3][2]) | ((safe_rshift_func_uint8_t_u_s((l_1193 = (((p_43 & (safe_add_func_uint32_t_u_u(p_44, (g_570 & ((safe_rshift_func_int8_t_s_u(p_43, 6)) , (safe_mod_func_int16_t_s_s(g_392, l_1192))))))) <= g_570) || g_572)), g_392)) != l_1194)), l_1171)), 1)), p_44)) , 0xA1L) && 0xFAL) , g_379[2][1][0])))) >= g_447[4][3][1]) != l_1138[0][2][1]) > 0x37L), 2)), p_43)) == p_43))
                {
                    unsigned l_1217 = 0xB31D9651L;
                    g_701 = 6L;
                    for (l_994 = 0; (l_994 <= 3); l_994 += 1)
                    {
                        return l_1194;
                    }
                    if ((safe_mul_func_int8_t_s_s(p_43, l_987)))
                    {
                        if (p_44)
                            break;
                        l_1219[1][6] = ((safe_add_func_int8_t_s_s(8L, 0xBBL)) & ((func_89((((p_43 || ((safe_mod_func_uint16_t_u_u(0x24CDL, (safe_sub_func_uint8_t_u_u(l_1192, ((safe_unary_minus_func_uint16_t_u((safe_rshift_func_int8_t_s_u(((g_314 , l_1206) || func_69((l_1218 = (safe_lshift_func_int16_t_s_u(((safe_mul_func_uint8_t_u_u(0xA0L, (safe_lshift_func_int8_t_s_u((safe_sub_func_uint8_t_u_u((((safe_mod_func_int32_t_s_s(p_44, 0x7A9CB525L)) & l_1217) | l_1138[1][1][2]), p_43)), g_770)))) && l_1138[0][2][1]), l_1171))), p_43)), 7)))) >= 0xE9L))))) && 255UL)) , l_61) && p_43), l_1193, p_43, p_43) && 0UL) | g_447[4][1][1]));
                    }
                    else
                    {
                        l_1225 = (l_1218 = (l_1219[1][6] || (((((((-1L) & g_743[4]) || func_75(((l_1171 == ((((65535UL & ((func_89((safe_add_func_uint16_t_u_u(((-1L) && (~(!(p_44 != p_44)))), ((g_392 , 0x47AEDAFBL) , p_44))), p_44, g_142, g_715) , g_570) < 0xEF0DF2C2L)) != g_925) & p_44) ^ p_44)) , l_1224), p_43, p_44, l_1219[4][2], l_1192)) || p_43) , g_971) && 7UL) >= 0xE224L)));
                        return p_43;
                    }
                }
                else
                {
                    int l_1237 = 0x76AD241FL;
                    int l_1249 = 0x2B47D57EL;
                    if ((l_1194 > ((l_61 = (safe_add_func_uint8_t_u_u((8L && (((!((l_1193 = (l_1022 = (l_1225 != l_1138[1][1][0]))) != ((safe_mul_func_int8_t_s_s(p_44, ((g_1230 , func_50(p_43, (l_1219[1][6] && ((safe_mul_func_int16_t_s_s(0L, g_379[0][1][2])) <= l_61)), g_715, g_860[2][5][1], p_43)) < l_1138[1][3][0]))) , l_994))) || g_963) & (-1L))), p_43))) < g_1230)))
                    {
                        l_1225 = g_743[2];
                        return g_62;
                    }
                    else
                    {
                        unsigned short l_1244[4][2][7] = {{{65535UL,0x5677L,8UL,0x88CEL,0x5677L,0x88CEL,1UL},{0x3CFEL,0x3CFEL,65530UL,65535UL,1UL,0xD8A0L,1UL}},{{0x705CL,7UL,65535UL,0x3CFEL,1UL,0xAFDFL,0xAFDFL},{1UL,0x5677L,0x410FL,0x5677L,1UL,0x3CFEL,0x705CL}},{{0x9B26L,65530UL,0x410FL,65535UL,0x5677L,8UL,0UL},{65535UL,0x88CEL,65535UL,8UL,8UL,65535UL,0x88CEL}},{{0x9B26L,65535UL,65530UL,0x705CL,7UL,65535UL,0x3CFEL},{1UL,0xD8A0L,1UL,0x410FL,65527UL,8UL,65527UL}}};
                        int l_1248 = 0xF53874ADL;
                        int i, j, k;
                        l_61 = (safe_mul_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u((l_1237 | ((l_1218 = (((((((l_1225 = (+(l_1219[1][6] , (safe_mod_func_int16_t_s_s(((l_1249 = (((g_407 = p_43) , (safe_mod_func_uint16_t_u_u((p_44 < (l_1248 = func_69(func_69(l_1237, (p_43 , (g_701 = (safe_mul_func_uint16_t_u_u(l_1244[0][1][3], (l_1237 | (l_1247 = (safe_add_func_uint32_t_u_u((((l_1058 = l_1098) , l_1206) == p_44), p_43))))))))), g_743[2]))), 0x399CL))) ^ 5UL)) != p_43), 0x1FD5L))))) != l_1118) , p_44) & p_44) , l_1250) >= g_111[0]) <= l_1192)) , 0UL)), g_860[1][9][3])), p_44));
                        return p_44;
                    }
                }
                for (l_1171 = 3; (l_1171 >= 0); l_1171 -= 1)
                {
                    unsigned char l_1262 = 0x4AL;
                    l_61 = l_1193;
                    for (l_1247 = 3; (l_1247 >= 0); l_1247 -= 1)
                    {
                        int i, j, k;
                        l_1218 = ((((g_447[(l_1171 + 2)][(l_1247 + 3)][l_1247] >= (((safe_unary_minus_func_uint8_t_u(func_89(p_44, (safe_rshift_func_int16_t_s_u((((g_62 = l_1254[1][1][2]) & g_111[0]) == (safe_sub_func_int8_t_s_s(((p_43 & (g_234 = ((g_701 = 0xCC6A980AL) >= l_1022))) ^ (safe_rshift_func_uint8_t_u_u(p_43, 7))), ((((((g_963 = p_44) > l_1194) && (-1L)) != g_572) | g_392) < l_1219[1][6])))), 14)), g_715, g_142))) > g_743[3]) <= l_1224)) , g_912) , 0x0AE883E0L) > 0x30D5758EL);
                        g_701 = (l_1259 = (((g_743[0] & p_44) , ((0UL > 255UL) <= 0xF80CL)) != (~(l_1022 , (l_1058 = (func_89(g_592, (func_75(g_180, p_43, g_963, p_44, p_43) != g_447[(l_1171 + 2)][(l_1247 + 3)][l_1247]), l_1206, p_43) == 0x0C4AB606L))))));
                        g_145 = 0x1F012822L;
                    }
                    l_1058 = l_61;
                    l_1225 = ((l_1218 = (((1UL > (safe_sub_func_int16_t_s_s(g_379[0][0][0], func_89((((g_770 > 6UL) > g_844) >= func_89(l_1262, (p_44 , 0xB0A8L), (g_860[4][9][1] = (safe_mul_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s(((l_61 = 8L) <= l_1193), p_43)), 0xB0L))), g_1267)), g_392, l_1193, l_1250)))) <= g_844) && 0xCD7CL)) , l_1262);
                }
                g_145 = 0xDCFC4E61L;
                for (g_963 = 0; (g_963 <= 1); g_963 += 1)
                {
                    unsigned short l_1270 = 0x296EL;
                    int l_1293 = 1L;
                    l_61 = func_75(g_1267, (~(func_69(((((-1L) < l_1192) , ((safe_lshift_func_int16_t_s_s(g_594, 13)) | l_1270)) , l_1206), (g_701 = (g_1267 | l_1171))) <= g_971)), l_1254[1][1][2], g_111[0], p_43);
                    l_1280 = (safe_rshift_func_int16_t_s_s(((l_61 = (safe_rshift_func_uint8_t_u_s(((l_1275 > ((4294967295UL | (safe_sub_func_int16_t_s_s(func_89(g_1267, (0x7412L || ((safe_rshift_func_uint16_t_u_u((func_75(func_69(l_1171, (g_743[6] , ((l_1193 = (l_1022 = g_111[0])) | p_44))), g_844, p_43, g_637, l_1275) , p_43), 8)) <= p_43)), l_1194, l_1206), 0xE081L))) > 0xA3L)) ^ 0x91L), p_44))) , g_111[0]), 4));
                    for (l_1247 = 0; (l_1247 <= 4); l_1247 += 1)
                    {
                        int l_1294 = 0xC61688ECL;
                        int i, j, k;
                        if (l_1254[(g_963 + 1)][g_963][(g_963 + 2)])
                            break;
                        if (l_1250)
                            break;
                        l_1294 = (safe_lshift_func_uint16_t_u_u((func_75(g_1267, g_358, g_971, ((safe_unary_minus_func_int32_t_s((l_1194 , p_44))) | (l_1293 = (safe_mod_func_int16_t_s_s(((0x07L >= ((func_89(func_89(((safe_add_func_int8_t_s_s(((((l_1193 = l_1288[0]) , (g_379[0][1][2] ^ (((safe_sub_func_uint16_t_u_u((((safe_mul_func_int8_t_s_s(p_43, g_1230)) | l_1270) & p_43), 0x0AA0L)) , 9UL) != 0x9D35L))) <= l_1275) , p_43), p_43)) || l_1254[1][1][2]), g_379[0][1][2], g_715, p_43), p_43, g_447[1][4][0], g_379[2][1][1]) != l_1040) <= g_971)) > 4294967295UL), g_572)))), g_392) ^ l_1270), 1));
                    }
                }
            }
        }
        if (g_145)
            continue;
        for (g_234 = 0; (g_234 <= 1); g_234 += 1)
        {
            unsigned char l_1302[4][10][3] = {{{7UL,0UL,0xB0L},{255UL,0UL,249UL},{0xB2L,0x2DL,0x99L},{255UL,2UL,0xBEL},{0xA4L,0x99L,0xB5L},{255UL,0xBAL,0x04L},{0xB2L,0UL,0UL},{255UL,0xBEL,0UL},{7UL,253UL,0x04L},{0x37L,0xB0L,0xB5L}},{{0x84L,246UL,0xBEL},{0x14L,0xB0L,0x99L},{0x76L,253UL,249UL},{5UL,0xBEL,0xB0L},{255UL,0xA0L,250UL},{0xD0L,1UL,0x91L},{0x04L,248UL,255UL},{0UL,255UL,0x91L},{1UL,0x0CL,250UL},{253UL,0xDBL,0x1FL}},{{0UL,0xDBL,0xACL},{2UL,0x0CL,248UL},{249UL,255UL,0xE2L},{0x2DL,248UL,0xB7L},{249UL,1UL,2UL},{2UL,0xA0L,0xA0L},{0UL,0xE2L,0xA0L},{253UL,0x0DL,2UL},{1UL,0x1FL,0xB7L},{0UL,1UL,0xE2L}},{{0x04L,0x1FL,248UL},{0xD0L,0x0DL,0xACL},{255UL,0xE2L,0x1FL},{255UL,0xA0L,250UL},{0xD0L,1UL,0x91L},{0x04L,248UL,255UL},{0UL,255UL,0x91L},{1UL,0x0CL,250UL},{253UL,0xDBL,0x1FL},{0UL,0xDBL,0xACL}}};
            int l_1371 = 7L;
            int i, j, k;
            l_1295[1] = l_1193;
            if ((p_44 & ((safe_mod_func_uint32_t_u_u((safe_mul_func_int8_t_s_s(p_44, (((0x4FL & 9UL) , p_43) || (safe_rshift_func_int16_t_s_s((l_1302[3][4][1] <= 250UL), g_434))))), ((g_963 ^ 5L) & p_44))) == p_44)))
            {
                unsigned l_1314 = 4294967295UL;
                for (g_358 = 1; (g_358 >= 0); g_358 -= 1)
                {
                    unsigned l_1307 = 4294967294UL;
                    int l_1323[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_1323[i] = 0x93FA2AC7L;
                    for (g_410 = 0; (g_410 <= 1); g_410 += 1)
                    {
                        int l_1315 = 0x7C5E989EL;
                        int i, j, k;
                        l_1315 = (((safe_rshift_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u((l_1022 = g_379[(g_358 + 1)][g_234][g_410]), 3)), 2)) , ((65532UL & 1UL) == ((-1L) ^ ((g_860[0][8][3] = l_1307) == (safe_mod_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(p_44, (((((l_1314 = (0x81L != ((((safe_mul_func_int8_t_s_s(l_1302[3][4][1], g_379[(g_358 + 1)][g_234][g_410])) ^ p_43) < g_701) , l_1280))) ^ 0UL) <= p_43) <= p_43) <= (-5L)))), g_637)))))) ^ g_594);
                        g_145 = (((p_43 | (g_407 & (p_44 = (((((safe_unary_minus_func_uint8_t_u(((1L || g_358) != ((safe_lshift_func_int8_t_s_s((-10L), g_111[0])) , l_1254[1][0][0])))) == p_43) , l_1295[4]) <= g_145) == l_1315)))) < l_1219[1][6]) , 0x9481E872L);
                        if (p_43)
                            break;
                        l_1323[2] = (safe_rshift_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s(g_379[0][1][2], 5)), 3));
                    }
                    g_701 = ((l_1022 = g_111[0]) <= g_701);
                }
                if ((l_1280 = ((((safe_mul_func_uint8_t_u_u((safe_add_func_int16_t_s_s((safe_rshift_func_int16_t_s_s(((safe_add_func_uint16_t_u_u(p_43, (((safe_sub_func_uint32_t_u_u(0x712A5B81L, ((l_1334 && (safe_rshift_func_uint8_t_u_u(p_44, 2))) <= 0x0962A33DL))) == (safe_mul_func_int16_t_s_s((g_142 <= (g_314 ^ g_743[0])), (g_166 < p_43)))) | g_234))) < l_1334), g_637)), g_166)), 0x73L)) , g_860[1][9][3]) > l_1314) & 65535UL)))
                {
                    if (l_1302[0][5][2])
                        break;
                }
                else
                {
                    if (g_963)
                        break;
                }
            }
            else
            {
                int l_1339[5][1];
                int l_1419[8];
                int i, j;
                for (i = 0; i < 5; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_1339[i][j] = 0x734F5120L;
                }
                for (i = 0; i < 8; i++)
                    l_1419[i] = 0x1AA32480L;
                l_1339[0][0] = 0L;
                for (g_1230 = 15; (g_1230 > 47); g_1230++)
                {
                    int l_1361 = 1L;
                    int l_1362 = 0L;
                    for (g_594 = 9; (g_594 > 18); ++g_594)
                    {
                        unsigned short l_1360 = 0x3DD7L;
                        l_1371 = ((+(((g_358 , (safe_mul_func_uint8_t_u_u(((safe_mul_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s(p_43, 3)), (((safe_add_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u((g_142 & (safe_lshift_func_uint8_t_u_s(((((g_434 = (g_637 , (((l_1280 = ((safe_rshift_func_uint8_t_u_s(((safe_mul_func_uint8_t_u_u(l_1360, ((l_1361 = l_1288[0]) > l_1362))) , g_407), 0)) < (safe_add_func_int8_t_s_s(((l_61 = ((g_433 = (safe_mul_func_int16_t_s_s((safe_lshift_func_int16_t_s_u((safe_sub_func_int32_t_s_s((1L <= 0xB6E83DD8L), g_142)), 0)), g_1230))) & l_1360)) < p_43), 1UL)))) || l_1302[3][4][1]) != g_410))) <= l_1362) ^ p_44) >= 0x91L), p_44))), g_379[1][0][1])), g_379[0][1][2])) < g_701) >= g_701))) > 0L), g_145))) == g_145) ^ p_43)) != l_1219[1][6]);
                    }
                    for (l_994 = (-27); (l_994 <= 9); l_994 = safe_add_func_int16_t_s_s(l_994, 1))
                    {
                        short l_1374[3];
                        int l_1383 = (-2L);
                        int i;
                        for (i = 0; i < 3; i++)
                            l_1374[i] = (-9L);
                        g_701 = ((0x4716224BL & l_1193) , l_1374[0]);
                        l_1339[1][0] = ((safe_mul_func_uint8_t_u_u((p_43 , p_43), (((l_1339[3][0] | (!l_1374[0])) >= ((g_145 = l_1022) ^ (((g_743[3] == ((p_43 < ((safe_mul_func_uint8_t_u_u((l_1383 = ((safe_mod_func_uint32_t_u_u(l_1302[3][4][1], p_44)) ^ 0xDDBC5F0FL)), g_180)) <= p_44)) > 0x052F90C6L)) , 0x9CBEL) ^ g_4))) & 0x81L))) <= 0L);
                    }
                    l_1339[0][0] = (l_1339[2][0] , ((g_701 = 0xBFA7ECAAL) && p_43));
                }
                if ((g_145 = (((safe_mul_func_uint8_t_u_u((g_410 , (g_62 = l_1302[3][4][1])), (g_1393[1][0] = (g_1392 = (((safe_add_func_int32_t_s_s((((l_1334 ^ (l_1371 = g_145)) , (safe_sub_func_int32_t_s_s((g_701 = g_379[1][1][0]), (safe_rshift_func_uint16_t_u_s(1UL, (0UL > p_44)))))) ^ p_43), g_963)) ^ g_743[3]) && 0xA487L))))) && 0x273CL) > p_43)))
                {
                    unsigned short l_1394 = 0x5774L;
                    return l_1394;
                }
                else
                {
                    unsigned char l_1401[9][10] = {{255UL,251UL,0xA0L,0x24L,255UL,0xF6L,246UL,0xA0L,0xB2L,0x24L},{0xA0L,251UL,0xB0L,255UL,0x33L,0xF6L,251UL,0x74L,0x8EL,0x8EL},{0xA1L,0x33L,0x6AL,0UL,0UL,0x6AL,0x33L,0xA1L,251UL,0UL},{246UL,1UL,251UL,0UL,0x8BL,0x1BL,0x24L,0x72L,0x8EL,0UL},{0x72L,5UL,251UL,0x8BL,0UL,0x72L,1UL,0xA1L,0x29L,0x8EL},{251UL,5UL,0x6AL,0UL,0x48L,0x6AL,0x24L,246UL,251UL,0x48L},{251UL,1UL,0x1BL,0x48L,0x8BL,0x72L,0x33L,0x72L,0x8BL,0x48L},{0x72L,0x33L,0x72L,0x8BL,0x48L,0x1BL,1UL,251UL,0x8BL,0x8EL},{246UL,0x24L,0x6AL,0x48L,0UL,0x6AL,5UL,251UL,251UL,0UL}};
                    int l_1405 = (-10L);
                    int i, j;
                    for (g_407 = 16; (g_407 == 47); g_407 = safe_add_func_uint8_t_u_u(g_407, 1))
                    {
                        unsigned l_1402 = 1UL;
                        g_701 = ((l_1339[3][0] >= (safe_sub_func_uint8_t_u_u((l_1401[2][6] = (safe_rshift_func_int16_t_s_u(l_1339[4][0], 2))), l_1402))) >= (l_1405 = ((safe_lshift_func_uint16_t_u_u((l_1402 , ((l_1339[0][0] != l_1219[1][6]) < 0UL)), 6)) | 0x23DABFE6L)));
                    }
                    for (g_701 = 5; (g_701 >= 0); g_701 -= 1)
                    {
                        char l_1412 = 0xC4L;
                        g_145 = (~g_433);
                        l_1339[0][0] = (0x7772L ^ (safe_lshift_func_uint8_t_u_s(((safe_unary_minus_func_int16_t_s((p_43 ^ g_1267))) < (g_314 , p_43)), ((((safe_add_func_int16_t_s_s(0x8B3DL, (safe_unary_minus_func_uint8_t_u(g_358)))) , (l_1412 = (l_1401[6][4] , 0L))) | l_61) , 0x26L))));
                        l_1419[6] = (safe_add_func_int16_t_s_s(g_844, (safe_rshift_func_int8_t_s_u(((g_743[3] , g_392) , (safe_lshift_func_uint8_t_u_s((((l_1339[0][0] = l_1302[0][2][0]) , (l_1371 = (l_1412 >= p_44))) >= g_392), 1))), 5))));
                        g_145 = (safe_rshift_func_uint8_t_u_u(g_592, 0));
                    }
                }
                for (g_62 = (-22); (g_62 < 42); ++g_62)
                {
                    unsigned short l_1424 = 65535UL;
                    int l_1425 = 0xACC41E36L;
                    l_1371 = (g_410 > ((5UL | l_1424) & (0x69L | (l_1193 = (((l_1425 = p_44) <= p_43) >= ((safe_mod_func_int8_t_s_s((g_434 && ((safe_mod_func_uint16_t_u_u((((0x92L ^ p_44) || g_142) > p_44), g_392)) == l_1430)), p_44)) | l_1339[0][0]))))));
                    if (l_1295[1])
                        continue;
                }
            }
        }
    }
    l_61 = func_75(p_44, (safe_mod_func_uint8_t_u_u(l_1042, func_69(g_1230, ((safe_mul_func_int16_t_s_s(p_44, (g_358 > ((safe_rshift_func_int8_t_s_s(0x3CL, (((g_145 = ((g_142 && (safe_add_func_uint8_t_u_u(p_44, (l_1430 = 0x89L)))) <= g_410)) & 3L) , 0x61L))) , p_44)))) != g_963)))), l_1334, l_61, g_860[1][9][3]);
    l_61 = func_89(p_44, ((g_572 >= l_1280) , (l_1439 = l_56)), l_1440, p_43);
    return l_1042;
}







static int func_50(unsigned short p_51, unsigned char p_52, unsigned p_53, unsigned p_54, unsigned short p_55)
{
    unsigned char l_74[4][2][4] = {{{255UL,255UL,0xFFL,0xA1L},{0x82L,0xFFL,0x6AL,0xFFL}},{{0x6AL,0xFFL,0x82L,0xA1L},{0xFFL,255UL,255UL,0x6AL}},{{0x99L,0UL,0UL,0x99L},{0x99L,0xA1L,255UL,0xFFL}},{{0UL,0x6AL,2UL,0x99L},{0x82L,0x48L,0x82L,0x99L}}};
    int l_449 = 2L;
    int l_450[1][1][1];
    unsigned short l_453 = 0xEC4CL;
    short l_467[8][2][8] = {{{4L,6L,1L,0x1958L,(-5L),0L,0x1958L,0x42D8L},{0x47EBL,0xBB0EL,0x96FFL,0x9003L,(-5L),0x4AECL,0xE4FFL,0x474FL}},{{4L,(-1L),0x9003L,0x42D8L,9L,0xD79AL,0xBB0EL,0x4AECL},{0x42D8L,(-5L),(-5L),0xBDDAL,0xBDDAL,(-5L),(-5L),0x42D8L}},{{0x96FFL,(-4L),0xE4FFL,0x9C0BL,0xBB0EL,9L,0x47EBL,0x1958L},{0xBDDAL,0x0DD8L,0x9003L,0x474FL,0x9C0BL,9L,0xE80EL,0xE4FFL}},{{0xE80EL,(-4L),0x6EB7L,6L,(-4L),(-5L),0x1958L,0xBB0EL},{0xE4FFL,(-5L),(-1L),0xD79AL,0x1958L,0xD79AL,(-1L),(-5L)}},{{0xBDDAL,(-1L),9L,(-4L),0x47EBL,0x4AECL,0x474FL,0x47EBL},{6L,0xBB0EL,1L,6L,0xBDDAL,0L,0x474FL,0xE80EL}},{{(-1L),6L,9L,0x4AECL,4L,0x96FFL,0x8212L,0xE80EL},{(-4L),(-1L),0x8212L,0xE80EL,0x9003L,0x9003L,0xE80EL,0x8212L}},{{0x5AF4L,0x5AF4L,1L,0xBB0EL,0xBDDAL,0xC6CAL,6L,0x1958L},{0xD79AL,(-5L),0x47EBL,0x8212L,(-4L),0x4AECL,0x0DD8L,0x1958L}},{{(-5L),0x9003L,0x96FFL,0xBB0EL,0x47EBL,0x96FFL,0xBDDAL,0x8212L},{0x42D8L,0x474FL,0x6EB7L,0xE80EL,0x5AF4L,1L,0x5AF4L,0xE80EL}}};
    unsigned char l_548 = 1UL;
    short l_573 = 1L;
    unsigned short l_593 = 5UL;
    char l_614 = 1L;
    int l_616[10] = {0x825A18B2L,9L,0x825A18B2L,9L,0x825A18B2L,9L,0x825A18B2L,9L,0x825A18B2L,9L};
    unsigned l_621 = 4294967295UL;
    int l_704 = (-1L);
    unsigned l_714 = 4294967295UL;
    unsigned l_775 = 0x60DCB138L;
    int l_804 = 0x62F36418L;
    char l_985 = (-4L);
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 1; k++)
                l_450[i][j][k] = 0x0BB89AA4L;
        }
    }
    l_449 = func_69(p_54, (safe_add_func_uint8_t_u_u(l_74[1][1][0], l_74[1][0][1])));
    if (((l_74[0][1][1] | (g_4 <= 0x8B41165BL)) , (l_450[0][0][0] = g_434)))
    {
        int l_458 = 4L;
        unsigned char l_459 = 1UL;
        int l_490 = 0x6969E232L;
        unsigned char l_510 = 0xD8L;
        int l_511 = 0xDF99D806L;
        l_449 = (safe_mod_func_uint8_t_u_u(l_453, (safe_add_func_uint8_t_u_u(((func_69(func_75(g_166, g_142, ((safe_rshift_func_int8_t_s_u(g_434, l_453)) , (l_458 == g_180)), l_449, (((p_51 & g_314) > p_52) , l_449)), l_459) && 0xEAL) >= l_459), g_392))));
        for (l_453 = 0; (l_453 <= 0); l_453 += 1)
        {
            unsigned short l_465 = 0x483FL;
            unsigned short l_481 = 0UL;
            int l_494 = (-1L);
            for (g_180 = 0; (g_180 <= 0); g_180 += 1)
            {
                int l_462[4][1];
                int l_466 = (-1L);
                short l_480[1];
                int i, j;
                for (i = 0; i < 4; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_462[i][j] = 0x1D31090EL;
                }
                for (i = 0; i < 1; i++)
                    l_480[i] = (-1L);
                l_462[1][0] = (g_145 = ((safe_mod_func_int8_t_s_s(((l_462[2][0] != (safe_mul_func_uint16_t_u_u((((((l_74[1][1][0] , (l_465 >= 0x64L)) , ((l_466 = p_51) ^ ((g_433 = l_467[0][0][2]) == (l_462[1][0] , (safe_add_func_uint8_t_u_u(((safe_mod_func_int8_t_s_s((safe_rshift_func_int16_t_s_u(p_52, 15)), l_74[0][0][3])) <= 1L), 255UL)))))) | g_4) || 0x68L) & 2L), p_54))) && g_145), 0xD5L)) <= g_419));
                for (p_51 = 0; (p_51 <= 0); p_51 += 1)
                {
                    char l_492 = 0xD5L;
                    int l_496 = 0x0BF755DEL;
                    for (g_314 = 0; (g_314 >= 0); g_314 -= 1)
                    {
                        int i, j, k;
                        l_466 = (l_450[p_51][p_51][g_314] || ((safe_mul_func_uint8_t_u_u((0x22F0L > p_55), (safe_lshift_func_uint8_t_u_s(((((l_450[p_51][l_453][p_51] = (g_392 < p_55)) , (g_447[2][8][0] , (g_180 < (p_52 , (safe_mod_func_int8_t_s_s(p_52, p_51)))))) && g_447[0][7][3]) , l_480[0]), 1)))) ^ l_462[2][0]));
                        g_145 = (-8L);
                    }
                    if (p_52)
                    {
                        unsigned l_491 = 4294967289UL;
                        int l_493 = 5L;
                        l_494 = ((l_481 > (((safe_rshift_func_int8_t_s_u(((safe_rshift_func_int8_t_s_s(((safe_sub_func_uint16_t_u_u(g_392, p_53)) != (l_491 = (g_145 = ((safe_mul_func_uint8_t_u_u((((l_490 = l_458) <= g_433) ^ 249UL), (l_465 , 8UL))) <= (p_53 | g_379[1][0][3]))))), g_142)) & g_166), l_492)) , 0x7B78L) | l_493)) <= p_52);
                    }
                    else
                    {
                        unsigned l_495 = 0x38D90144L;
                        int l_499 = 0L;
                        l_496 = (p_54 > l_495);
                        l_462[2][0] = l_459;
                        g_145 = 0x850736A8L;
                        l_499 = (0x9604L <= (safe_add_func_uint8_t_u_u(g_142, l_494)));
                    }
                    l_511 = (((0xF3E7L <= (p_51 || (safe_lshift_func_uint16_t_u_s(l_481, (g_447[4][1][1] >= (safe_lshift_func_int8_t_s_s((safe_mod_func_uint32_t_u_u((safe_rshift_func_int16_t_s_u(((-9L) >= p_53), l_458)), l_466)), (safe_lshift_func_uint16_t_u_s((g_407 > l_481), l_510))))))))) > 65527UL) < p_55);
                }
            }
        }
        g_145 = g_447[1][6][3];
    }
    else
    {
        int l_526 = 0x204B0BD9L;
        int l_532[5];
        unsigned l_540 = 0x956563CDL;
        short l_569 = 0xE9E9L;
        short l_613[2];
        int l_615 = 0x7FDC5D3EL;
        unsigned short l_628 = 1UL;
        unsigned short l_652 = 0UL;
        unsigned l_705 = 0xF1B25B8FL;
        unsigned l_716 = 4294967295UL;
        unsigned l_784 = 0x633ED7C0L;
        int i;
        for (i = 0; i < 5; i++)
            l_532[i] = 0L;
        for (i = 0; i < 2; i++)
            l_613[i] = 0xF489L;
        if ((safe_lshift_func_uint16_t_u_s((safe_lshift_func_int8_t_s_s(((g_62 = (safe_lshift_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u(((l_532[1] = (safe_add_func_uint8_t_u_u((g_234 <= ((p_54 == (safe_sub_func_uint8_t_u_u(g_62, ((g_145 = (safe_sub_func_uint32_t_u_u(l_74[1][1][0], g_407))) && g_433)))) && (l_449 = 0x70632BD3L))), (l_526 == ((safe_lshift_func_uint16_t_u_s((safe_unary_minus_func_uint32_t_u((safe_rshift_func_int8_t_s_u(l_526, 7)))), p_52)) | g_407))))) , p_53), g_434)), g_392))) == 0xD1L), p_53)), p_54)))
        {
            short l_539[3];
            int l_549[4][10][2] = {{{1L,(-1L)},{(-1L),(-1L)},{1L,(-1L)},{(-1L),(-1L)},{1L,(-1L)},{(-1L),(-1L)},{1L,(-1L)},{(-1L),(-1L)},{1L,(-1L)},{(-1L),(-1L)}},{{1L,(-1L)},{(-1L),(-1L)},{1L,(-1L)},{(-1L),(-1L)},{1L,(-1L)},{(-1L),(-1L)},{1L,(-1L)},{(-1L),(-1L)},{1L,(-1L)},{(-1L),(-1L)}},{{1L,(-1L)},{(-1L),(-1L)},{1L,(-1L)},{(-1L),(-1L)},{1L,(-1L)},{(-1L),(-1L)},{1L,(-1L)},{(-1L),(-1L)},{1L,(-1L)},{(-1L),(-1L)}},{{1L,(-1L)},{(-1L),(-1L)},{1L,(-1L)},{(-1L),(-1L)},{1L,(-1L)},{(-1L),(-1L)},{1L,(-1L)},{(-1L),(-1L)},{1L,(-1L)},{(-1L),(-1L)}}};
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_539[i] = (-9L);
            g_145 = (((((l_526 >= (g_62 = 0UL)) & p_54) < (safe_mul_func_uint8_t_u_u((g_434 | 0x2BL), l_532[2]))) || (safe_mul_func_uint16_t_u_u((l_539[2] = (safe_mod_func_uint32_t_u_u((l_449 = ((l_532[1] = (p_52 == p_53)) || (l_532[1] = 0x13L))), g_447[5][7][1]))), g_358))) && l_540);
            for (g_49 = 0; (g_49 <= 3); g_49 += 1)
            {
                short l_543 = 4L;
                int l_583 = 0xBAF04879L;
                l_549[2][8][0] = (((g_314 | (g_145 | (((safe_lshift_func_uint16_t_u_u((l_74[1][1][0] , (l_543 = g_145)), p_52)) != g_447[1][5][1]) , ((safe_rshift_func_uint8_t_u_u(0UL, 6)) > (-10L))))) <= (safe_mod_func_uint16_t_u_u(p_55, l_548))) > g_111[0]);
                for (g_433 = 0; (g_433 <= 3); g_433 += 1)
                {
                    unsigned char l_556[9] = {0x99L,0x12L,0x99L,0x12L,0x99L,0x12L,0x99L,0x12L,0x99L};
                    int l_574 = 1L;
                    int i;
                    for (l_453 = 0; (l_453 <= 3); l_453 += 1)
                    {
                        int l_571 = 0x16232499L;
                        int i, j, k;
                        l_532[1] = ((g_447[l_453][(g_433 + 1)][l_453] >= ((((-9L) != 1UL) | ((safe_rshift_func_int16_t_s_u(((safe_mul_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s(((l_556[2] <= (safe_rshift_func_int16_t_s_s(0x9901L, (l_467[0][0][2] & (g_62 = (safe_lshift_func_int16_t_s_u((safe_mul_func_uint16_t_u_u((g_180 >= p_52), (g_572 = ((safe_mul_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_u((l_571 = (g_570 = (safe_mod_func_uint8_t_u_u((!l_569), 0x63L)))), 3)) > 0x33EBL), p_52)) >= l_539[2])))), 2))))))) > p_52), 2)), l_539[2])) > 0x7582B9D6L), l_573)) < g_447[2][8][0])) >= g_166)) ^ g_447[l_453][(g_433 + 1)][l_453]);
                    }
                    l_574 = g_4;
                    for (g_166 = (-22); (g_166 < 23); g_166 = safe_add_func_int32_t_s_s(g_166, 3))
                    {
                        char l_578 = 0x1EL;
                        g_145 = (l_578 = (safe_unary_minus_func_uint32_t_u(1UL)));
                        if (g_145)
                            continue;
                    }
                    for (g_180 = 0; (g_180 <= 27); g_180++)
                    {
                        g_145 = (safe_sub_func_uint16_t_u_u(g_379[0][1][2], g_392));
                        return p_53;
                    }
                }
                l_583 = 0x11E5E6E2L;
                g_145 = ((g_392 >= ((safe_sub_func_int8_t_s_s((((g_594 = (safe_mod_func_int16_t_s_s(((0x7AE5L ^ ((((g_592 = ((l_583 = g_379[1][1][0]) >= (((65534UL ^ (g_447[2][8][0] ^ l_539[2])) && (safe_lshift_func_uint8_t_u_u(((safe_lshift_func_int8_t_s_u(g_4, 5)) < p_52), 7))) , g_419))) || 0x6BC0L) , p_51) | p_51)) && 0xE760L), l_593))) ^ g_410) & p_52), p_52)) != 0L)) , l_549[2][6][0]);
            }
        }
        else
        {
            int l_597 = 0xA28D64CEL;
            int l_598 = 0x65F98774L;
            int l_606 = 0xA84042FEL;
            char l_666[3];
            short l_732[1][10][6] = {{{(-2L),(-6L),(-1L),0x08D3L,0L,0L},{0x697FL,(-4L),0x4CF8L,1L,1L,0xF754L},{0xC149L,0x8DC5L,0x57D3L,0x8DC5L,0xC149L,(-6L)},{6L,2L,0xC149L,0x69A1L,0xEBFFL,0x08D3L},{1L,0xC149L,0L,2L,0xD469L,0x08D3L},{0x8DC5L,0x78B1L,0xC149L,0xF754L,0L,(-6L)},{0xD469L,1L,0x57D3L,6L,0xF754L,0xF754L},{0x0ED8L,0x4CF8L,0x4CF8L,0x0ED8L,(-6L),0L},{0x4CF8L,0x0982L,0xEBFFL,2L,(-6L),9L},{0L,6L,0x0234L,0L,(-6L),1L}}};
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_666[i] = 0x5CL;
            if ((safe_add_func_int32_t_s_s((l_532[3] = (l_598 = l_597)), (((((0L & (l_615 = ((safe_mod_func_int16_t_s_s((func_89(l_593, g_314, ((((4294967295UL != ((((g_166 = (+(g_142 = (safe_unary_minus_func_uint32_t_u(((safe_lshift_func_uint16_t_u_u((safe_add_func_int16_t_s_s((l_606 = p_55), (~(safe_add_func_uint16_t_u_u(((l_450[0][0][0] || g_592) && (safe_lshift_func_uint16_t_u_s((safe_mod_func_uint32_t_u_u(0xEEF8D5CAL, l_613[0])), 9))), l_614))))), 7)) >= g_407)))))) > 0xF3L) == p_53) | l_613[0])) >= 0x18L) != 0xFBL) > p_53), l_467[0][0][2]) & g_447[2][8][0]), l_597)) , g_434))) == 4294967291UL) && g_180) & p_55) & l_616[7]))))
            {
                unsigned l_629 = 4294967294UL;
                short l_633 = 0x540BL;
                int l_634[9][7][4] = {{{0xEF3BAEC6L,4L,0x1C1F317CL,0x1C1F317CL},{0L,0L,(-4L),0xB3962631L},{0L,1L,0x1C1F317CL,0L},{0xEF3BAEC6L,0xB3962631L,0xEF3BAEC6L,0x1C1F317CL},{4L,0xB3962631L,(-4L),0L},{0xB3962631L,1L,1L,0xB3962631L},{0xEF3BAEC6L,0L,1L,0x1C1F317CL}},{{0xB3962631L,4L,(-4L),4L},{4L,1L,0xEF3BAEC6L,4L},{0xEF3BAEC6L,4L,0x1C1F317CL,0x1C1F317CL},{0L,0L,(-4L),0xB3962631L},{0L,1L,0x1C1F317CL,0L},{0xEF3BAEC6L,0xB3962631L,0xEF3BAEC6L,0x1C1F317CL},{4L,0xB3962631L,(-4L),0L}},{{0xB3962631L,1L,1L,0xB3962631L},{0xEF3BAEC6L,0L,1L,0x1C1F317CL},{0xB3962631L,4L,(-4L),4L},{4L,1L,0xEF3BAEC6L,4L},{0xEF3BAEC6L,4L,0x1C1F317CL,0x1C1F317CL},{0L,0L,(-4L),0xB3962631L},{0L,1L,0x1C1F317CL,0L}},{{0xEF3BAEC6L,0x1C1F317CL,(-4L),7L},{0xEF3BAEC6L,0x1C1F317CL,0xB3962631L,1L},{0x1C1F317CL,4L,4L,0x1C1F317CL},{(-4L),1L,4L,7L},{0x1C1F317CL,0xEF3BAEC6L,0xB3962631L,0xEF3BAEC6L},{0xEF3BAEC6L,4L,(-4L),0xEF3BAEC6L},{(-4L),0xEF3BAEC6L,7L,7L}},{{1L,1L,0xB3962631L,0x1C1F317CL},{1L,4L,7L,1L},{(-4L),0x1C1F317CL,(-4L),7L},{0xEF3BAEC6L,0x1C1F317CL,0xB3962631L,1L},{0x1C1F317CL,4L,4L,0x1C1F317CL},{(-4L),1L,4L,7L},{0x1C1F317CL,0xEF3BAEC6L,0xB3962631L,0xEF3BAEC6L}},{{0xEF3BAEC6L,4L,(-4L),0xEF3BAEC6L},{(-4L),0xEF3BAEC6L,7L,7L},{1L,1L,0xB3962631L,0x1C1F317CL},{1L,4L,7L,1L},{(-4L),0x1C1F317CL,(-4L),7L},{0xEF3BAEC6L,0x1C1F317CL,0xB3962631L,1L},{0x1C1F317CL,4L,4L,0x1C1F317CL}},{{(-4L),1L,4L,7L},{0x1C1F317CL,0xEF3BAEC6L,0xB3962631L,0xEF3BAEC6L},{0xEF3BAEC6L,4L,(-4L),0xEF3BAEC6L},{(-4L),0x1C1F317CL,4L,4L},{0xEF3BAEC6L,0xEF3BAEC6L,0L,1L},{0xEF3BAEC6L,(-4L),4L,0xEF3BAEC6L},{7L,1L,7L,4L}},{{0x1C1F317CL,1L,0L,0xEF3BAEC6L},{1L,(-4L),(-4L),1L},{7L,0xEF3BAEC6L,(-4L),4L},{1L,0x1C1F317CL,0L,0x1C1F317CL},{0x1C1F317CL,(-4L),7L,0x1C1F317CL},{7L,0x1C1F317CL,4L,4L},{0xEF3BAEC6L,0xEF3BAEC6L,0L,1L}},{{0xEF3BAEC6L,(-4L),4L,0xEF3BAEC6L},{7L,1L,7L,4L},{0x1C1F317CL,1L,0L,0xEF3BAEC6L},{1L,(-4L),(-4L),1L},{7L,0xEF3BAEC6L,(-4L),4L},{1L,0x1C1F317CL,0L,0x1C1F317CL},{0x1C1F317CL,(-4L),7L,0x1C1F317CL}}};
                int l_670 = (-1L);
                int i, j, k;
                for (l_540 = 0; (l_540 >= 10); ++l_540)
                {
                    return p_53;
                }
                for (p_55 = 4; (p_55 < 8); p_55 = safe_add_func_int8_t_s_s(p_55, 8))
                {
                    return l_616[7];
                }
                l_449 = l_606;
                if ((((((g_592 > ((p_51 >= ((l_621 > ((safe_mul_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u(p_51, p_54)), ((safe_lshift_func_uint8_t_u_s(((func_69(l_540, p_51) > g_572) , p_54), 3)) & p_55))) ^ p_54)) || p_54)) >= 0x728CL)) ^ 65526UL) , l_628) <= g_594) & p_55))
                {
                    char l_632 = 0L;
                    int l_653[5][8] = {{1L,1L,(-2L),0xF4370587L,(-2L),1L,1L,(-2L)},{0xDF05BC10L,(-2L),(-2L),0xDF05BC10L,(-1L),0xDF05BC10L,(-2L),(-2L)},{(-2L),(-1L),0xF4370587L,0xF4370587L,(-1L),(-2L),(-1L),0xF4370587L},{(-2L),0xF4370587L,(-2L),1L,1L,(-2L),0xF4370587L,(-2L)},{(-1L),1L,0xDF05BC10L,1L,(-1L),(-1L),1L,0xDF05BC10L}};
                    unsigned short l_669 = 2UL;
                    int i, j;
                    l_598 = (func_75((l_629 <= ((safe_lshift_func_int16_t_s_s(l_632, (l_633 , p_52))) != (l_449 = g_180))), p_54, (l_634[4][2][3] = 0x7BE42D5AL), (p_54 <= ((safe_rshift_func_uint16_t_u_u((g_637 = 65533UL), p_52)) || g_49)), l_540) , p_52);
                    for (p_54 = 8; (p_54 > 42); p_54 = safe_add_func_int8_t_s_s(p_54, 6))
                    {
                        g_145 = (safe_mod_func_uint32_t_u_u(((l_449 = l_598) , (l_653[4][1] = (safe_sub_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u(0xE22C91C2L, (((safe_add_func_uint32_t_u_u(g_410, (((~(p_51 , l_632)) < ((safe_rshift_func_int16_t_s_u(l_632, (g_358 || ((p_52 = l_632) < ((safe_sub_func_uint32_t_u_u((l_632 && l_652), g_4)) , p_53))))) == p_53)) ^ g_447[2][8][0]))) & l_632) | 0x4A958A16L))), 0x8BL)))), 0xDCCAC9D5L));
                        l_532[1] = (safe_add_func_uint8_t_u_u(0xB9L, l_598));
                    }
                    l_532[1] = (safe_sub_func_uint8_t_u_u(p_55, ((safe_mod_func_uint32_t_u_u((safe_add_func_uint32_t_u_u(((safe_rshift_func_uint8_t_u_s((safe_rshift_func_int16_t_s_u(((4UL || func_69(((l_653[4][1] = p_53) ^ (g_314 ^ g_145)), (l_666[2] = l_569))) != (safe_rshift_func_int8_t_s_u((l_634[4][4][2] <= ((((((l_616[7] , p_52) >= p_54) | 0xCFL) | p_53) >= 0x19L) > g_4)), l_669))), 10)), p_55)) , 0xA6C4B74FL), p_53)), 0x6C5379EFL)) & 0UL)));
                    l_449 = (func_69((func_69(((((((l_670 = ((0xB11CL && 0L) , 0xBBL)) != (l_653[0][7] = func_75(g_433, (8L & ((safe_rshift_func_uint8_t_u_s(255UL, 4)) , (g_314 = 0x7EL))), (!g_637), l_653[2][3], p_52))) & 0x44L) <= p_54) != l_597) | 0x9610L), p_54) == l_593), p_53) >= l_548);
                }
                else
                {
                    l_449 = ((p_54 = (g_407 = (g_234 > 0xDC7DL))) , g_4);
                }
            }
            else
            {
                int l_675 = 0x237C5A73L;
                int l_707 = 0xC79BE6B3L;
                for (g_419 = 0; (g_419 < 42); ++g_419)
                {
                    l_449 = (p_54 == l_613[0]);
                }
                if (l_675)
                {
                    unsigned char l_702 = 0xB4L;
                    int l_703 = 0x4F66DEBFL;
                    int l_706 = 0L;
                    if ((safe_rshift_func_uint16_t_u_s(l_675, 5)))
                    {
                        g_145 = p_52;
                    }
                    else
                    {
                        unsigned char l_696 = 0xC6L;
                        g_145 = ((l_532[4] = p_53) ^ 0x2452L);
                        l_707 = (safe_sub_func_int8_t_s_s((((l_666[2] , (((safe_add_func_int32_t_s_s((safe_mod_func_int8_t_s_s((l_704 = func_75(((safe_mul_func_int8_t_s_s((l_532[1] = func_69(l_675, g_594)), (safe_mul_func_int8_t_s_s((safe_mod_func_uint8_t_u_u((!(l_449 = ((g_592 >= (l_598 = (safe_rshift_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s(g_572, (safe_mul_func_int8_t_s_s((l_696 = l_628), ((l_703 = (safe_mod_func_uint16_t_u_u((l_702 = ((((((p_52 ^ ((safe_sub_func_int8_t_s_s((0x63EAFB20L >= 0x549708A7L), p_55)) , (-1L))) < 1L) , l_606) || 0x15FFL) ^ p_52) , g_701)), g_447[3][4][2]))) || 0x5C97L))))), 7)))) || 0x2AL))), 0x47L)), l_613[1])))) , g_592), p_51, g_447[2][8][0], p_53, p_55)), l_705)), 1L)) | g_637) > 4294967295UL)) > l_706) == l_526), g_570));
                        g_701 = (+(((p_54 = (safe_mod_func_int16_t_s_s((+((((l_696 != (0xF1D80B0EL || 0x3493D827L)) >= (safe_rshift_func_uint16_t_u_s((g_715 = (6UL && ((~g_434) && (func_75(((((safe_sub_func_int8_t_s_s(g_49, l_714)) , ((1L != p_55) && g_407)) > 0x0C6FBDD3L) , (-8L)), g_570, l_705, l_706, l_593) || 0xA5L)))), l_716))) == 0xC7874467L) != l_597)), g_410))) > l_467[7][0][5]) >= p_55));
                    }
                }
                else
                {
                    l_606 = ((((g_62 = ((safe_sub_func_int16_t_s_s((l_707 = (g_62 ^ (l_597 & l_74[1][1][0]))), ((g_49 == ((((g_715 < ((safe_sub_func_int32_t_s_s(g_145, l_450[0][0][0])) > 0xB8L)) < (safe_mod_func_int16_t_s_s(p_52, g_358))) || p_55) , l_675)) <= g_62))) , 253UL)) & 0xC9L) , g_407) , (-5L));
                }
                if (l_716)
                {
                    unsigned l_727 = 4294967290UL;
                    l_449 = (((safe_mul_func_uint16_t_u_u(0UL, (safe_mod_func_uint8_t_u_u(l_727, ((safe_rshift_func_uint16_t_u_s((1L == (g_407 > ((safe_rshift_func_uint8_t_u_u(p_52, 5)) , (l_704 = (l_707 = g_572))))), 8)) , g_234))))) > (0x4D2D9CC2L >= (((l_732[0][4][2] != 0xB3L) , 0x0925FF7DL) , g_433))) || p_51);
                    g_145 = (0x11F1EE82L & l_628);
                    l_449 = ((((((g_743[3] = (p_55 = (((safe_rshift_func_int8_t_s_s(((l_707 = (safe_lshift_func_int8_t_s_u(((0xDDL < (safe_rshift_func_uint8_t_u_s((func_89((func_89(((((l_613[0] , (safe_rshift_func_uint16_t_u_s(p_52, (l_593 , (((((safe_mul_func_int8_t_s_s((l_532[3] = func_69(((g_701 || g_358) != 0x5DL), (l_675 >= p_55))), 0x19L)) > 0xF226L) <= l_598) , l_707) <= g_111[0]))))) != g_592) <= p_51) ^ 1L), g_572, p_54, l_548) > l_467[0][0][2]), l_597, l_727, p_51) > 4294967290UL), g_392))) , p_55), 3))) > g_701), g_392)) <= p_52) , l_675))) | g_447[2][8][0]) == 4L) != 0UL) != g_447[3][6][3]) <= g_111[0]);
                    l_704 = (((safe_mul_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s(((l_707 = (1UL | ((((((!(l_727 , (safe_sub_func_uint16_t_u_u((((safe_sub_func_uint32_t_u_u((safe_mul_func_uint16_t_u_u(((((g_358 < (safe_rshift_func_int16_t_s_u(((l_573 , (-9L)) , ((safe_mul_func_int8_t_s_s(p_54, p_55)) | 0xB943659EL)), 14))) && ((safe_unary_minus_func_int8_t_s(func_69(l_727, l_727))) != p_55)) > l_597) ^ l_606), g_572)), g_743[5])) | l_707) >= g_570), l_467[4][1][0])))) <= l_707) & g_111[0]) || g_314) , g_314) <= l_732[0][1][2]))) == g_701), p_53)), (-5L))) == p_51) >= g_447[2][8][0]);
                }
                else
                {
                    unsigned l_769 = 0xC47FB373L;
                    g_701 = ((safe_mod_func_uint32_t_u_u((safe_sub_func_uint16_t_u_u((0x84L > (safe_rshift_func_uint8_t_u_s(((l_532[1] = ((l_707 = g_419) , p_55)) && ((l_615 = 0x039E4AF6L) , 0x47L)), 6))), ((l_732[0][4][2] , (safe_lshift_func_int16_t_s_s((g_49 || func_75((g_234 != ((safe_sub_func_int8_t_s_s(((g_62 || 8UL) , l_652), 0x3AL)) != 0xEF6DL)), p_52, p_53, l_675, g_434)), 6))) ^ p_52))), l_769)) == l_597);
                    l_449 = 0x6A5BC6B8L;
                }
            }
            g_770 = (l_598 = p_52);
        }
        for (g_180 = (-11); (g_180 <= (-6)); ++g_180)
        {
            unsigned char l_777[3];
            int l_781[3];
            int i;
            for (i = 0; i < 3; i++)
                l_777[i] = 0x0EL;
            for (i = 0; i < 3; i++)
                l_781[i] = (-1L);
            for (g_392 = 12; (g_392 <= 19); g_392 = safe_add_func_uint16_t_u_u(g_392, 5))
            {
                short l_783 = 0x116AL;
                if (l_775)
                {
                    unsigned short l_776 = 65535UL;
                    l_777[1] = l_776;
                    if ((g_180 , (l_776 < l_776)))
                    {
                        l_532[2] = g_701;
                        l_781[0] = (safe_unary_minus_func_uint8_t_u((((safe_rshift_func_uint8_t_u_u(0x44L, 5)) <= 0xA6L) > 0x40E6L)));
                        g_145 = (safe_unary_minus_func_uint16_t_u((g_637 || 8UL)));
                        l_783 = l_573;
                    }
                    else
                    {
                        return p_55;
                    }
                    g_145 = ((p_54 = g_234) <= p_52);
                }
                else
                {
                    l_615 = 1L;
                }
            }
            if (l_784)
                continue;
        }
    }
    for (g_433 = 0; (g_433 >= 11); g_433 = safe_add_func_int32_t_s_s(g_433, 9))
    {
        unsigned l_787 = 0x1D2380F5L;
        int l_803 = 0L;
        int l_806 = (-1L);
        unsigned l_847 = 0xC62D021FL;
        unsigned l_850 = 0xB7AC2D28L;
        unsigned short l_888 = 65528UL;
        char l_924 = 0x58L;
        unsigned l_964 = 0UL;
        int l_986[5] = {0xDF1A1E47L,0xDF1A1E47L,0xDF1A1E47L,0xDF1A1E47L,0xDF1A1E47L};
        int i;
        l_787 = g_410;
        for (g_234 = 0; (g_234 == (-30)); --g_234)
        {
            g_145 = p_53;
            for (l_614 = (-25); (l_614 > 22); l_614 = safe_add_func_uint32_t_u_u(l_614, 1))
            {
                char l_794 = 0xE1L;
                l_804 = ((safe_sub_func_uint16_t_u_u((g_770 >= g_592), l_794)) >= (p_54 , (safe_mod_func_int32_t_s_s((safe_add_func_int16_t_s_s((l_449 = (((safe_mul_func_int16_t_s_s((p_55 && l_787), ((l_704 = g_142) , (safe_add_func_uint32_t_u_u((g_701 , ((~g_142) <= g_419)), l_803))))) == (-1L)) > 65535UL)), 0x5C59L)), p_51))));
            }
        }
        for (l_704 = 3; (l_704 >= 0); l_704 -= 1)
        {
            int l_823 = 0xA046F1F4L;
            int l_838 = 0x9352E15EL;
            int l_846 = 0L;
            for (g_142 = 3; (g_142 >= 0); g_142 -= 1)
            {
                int l_810 = (-7L);
                int l_815 = 0xDE3E4054L;
                int i, j, k;
                if ((g_447[(l_704 + 2)][(g_142 + 4)][l_704] , g_447[(l_704 + 1)][(l_704 + 2)][g_142]))
                {
                    unsigned short l_807 = 1UL;
                    for (g_434 = 1; (g_434 >= 0); g_434 -= 1)
                    {
                        int i, j, k;
                        l_807 = (l_806 = (safe_unary_minus_func_uint16_t_u((0UL >= 1L))));
                        l_804 = (l_467[l_704][g_434][g_142] , (l_449 = g_379[(g_434 + 1)][g_434][l_704]));
                        g_701 = (l_807 != (((g_447[4][2][1] , (l_810 = (safe_add_func_int8_t_s_s(0x96L, g_4)))) <= (safe_mod_func_int32_t_s_s(p_52, (safe_lshift_func_int16_t_s_u(p_51, 15))))) & (l_815 = p_54)));
                    }
                    g_701 = (safe_add_func_uint8_t_u_u(l_467[2][0][3], g_410));
                }
                else
                {
                    g_701 = g_180;
                    g_701 = p_51;
                }
            }
            for (l_453 = 0; (l_453 <= 3); l_453 += 1)
            {
                unsigned char l_820 = 255UL;
                int l_863 = 0x67349DE6L;
                int l_864[10][5][5] = {{{0xFF4655A0L,1L,0L,9L,0x4FC7FD87L},{0x3B852019L,0x01BFDB24L,(-1L),0x6A96F5A7L,0L},{(-1L),1L,1L,0xBC8D1F26L,0xC220B58CL},{0x687C42D2L,1L,0xEB25BD82L,0L,0xC5D5B3A3L},{6L,0x01BFDB24L,0L,0xB7E9CB35L,0L}},{{0x252B7B0CL,1L,(-7L),0xBFEEE767L,0L},{6L,0x0261C91FL,1L,0xDF712017L,0xEB25BD82L},{0x687C42D2L,0xFF4655A0L,0x8FD6AB64L,0xB8998A7CL,0xEB25BD82L},{(-1L),0xFE920370L,0x680E1664L,(-3L),0L},{0x3B852019L,6L,0x1487CD6EL,0x9C6D26C2L,0L}},{{0xFF4655A0L,0x94B6E9C8L,0xBD3F8B46L,(-3L),0xC5D5B3A3L},{0x419A19EFL,6L,0xC220B58CL,0xB8998A7CL,0xC220B58CL},{0x95C4F544L,0x95C4F544L,0xC220B58CL,0xDF712017L,0L},{1L,0x252B7B0CL,0xBD3F8B46L,0xBFEEE767L,0x4FC7FD87L},{0xFE920370L,1L,0x1487CD6EL,0xB7E9CB35L,(-5L)}},{{0L,0x37829B0CL,1L,0x0261C91FL,0xEF360CC7L},{0x5B4CCAABL,(-9L),1L,0x01BFDB24L,0xCD346D6BL},{0x5B4CCAABL,0L,0xBFEEE767L,1L,5L},{0L,1L,1L,0x3B852019L,1L},{0x1ED7A27CL,0xC2C56BE1L,0x6FAC9989L,0xFE920370L,5L}},{{(-9L),0x1ED7A27CL,9L,0xB4B39009L,0xCD346D6BL},{(-9L),0x04598464L,5L,0xB4B39009L,0xEF360CC7L},{0x443E76E0L,0xEDC90F7CL,0xB8998A7CL,0xFE920370L,(-5L)},{0x04598464L,0x88E918A9L,0xBC8D1F26L,0x3B852019L,0x7BEC5C45L},{0x86583D0CL,(-6L),0xB8998A7CL,1L,0x6FAC9989L}},{{0L,0xCDC0C9F2L,5L,0x01BFDB24L,0xDF712017L},{0xE88B6E69L,0xCDC0C9F2L,9L,0x0261C91FL,(-3L)},{0xC2C56BE1L,(-6L),0x6FAC9989L,0x9917C344L,0x6A96F5A7L},{0x37829B0CL,0x88E918A9L,1L,1L,1L},{0xC2C56BE1L,0xEDC90F7CL,0xBFEEE767L,0x419A19EFL,9L}},{{0xE88B6E69L,0x04598464L,1L,6L,9L},{0L,0x1ED7A27CL,1L,1L,1L},{0x86583D0CL,0xC2C56BE1L,0xEF360CC7L,0x687C42D2L,0x6A96F5A7L},{0x04598464L,1L,(-1L),1L,(-3L)},{0xBD3F8B46L,0x8FD6AB64L,(-9L),0L,(-9L)}},{{0xC5D5B3A3L,0xC5D5B3A3L,(-9L),0x64B8CBABL,0xCDC0C9F2L},{1L,0x680E1664L,(-6L),7L,0xEDC90F7CL},{0x1EA275CDL,(-1L),0xC2C56BE1L,0x52B2671CL,0L},{0x8FD6AB64L,0x680E1664L,(-6L),1L,0xC2C56BE1L},{(-1L),0xC5D5B3A3L,1L,1L,(-8L)}},{{(-1L),0x8FD6AB64L,0x04598464L,0L,0x86583D0CL},{0x8FD6AB64L,(-1L),2L,0x8C2707A3L,1L},{0x1EA275CDL,(-1L),0xCDC0C9F2L,0x010145EBL,0x86583D0CL},{1L,0x1EA275CDL,0x4261B503L,0xB4B655BEL,(-8L)},{0xC5D5B3A3L,0x59CAC2F5L,0x86583D0CL,0xB4B655BEL,0xC2C56BE1L}},{{0xBD3F8B46L,0x1487CD6EL,0x443E76E0L,0x010145EBL,0L},{0x59CAC2F5L,0xC220B58CL,0x1ED7A27CL,0x8C2707A3L,0xEDC90F7CL},{0L,(-7L),0x443E76E0L,0L,0xCDC0C9F2L},{1L,0L,0x86583D0CL,1L,(-9L)},{0x69CBDA69L,0L,0x4261B503L,1L,(-1L)}}};
                int i, j, k;
                if ((1UL ^ (((~(g_314 , g_49)) != g_4) ^ (p_51 = p_54))))
                {
                    unsigned l_832[10] = {0x4D5261EDL,0xCB8E8C6CL,0x4D5261EDL,0xCB8E8C6CL,0x4D5261EDL,0xCB8E8C6CL,0x4D5261EDL,0xCB8E8C6CL,0x4D5261EDL,0xCB8E8C6CL};
                    int i;
                    for (l_593 = 0; (l_593 <= 1); l_593 += 1)
                    {
                        int i, j, k;
                        g_145 = (l_806 = 1L);
                        return l_467[(l_593 + 3)][l_593][(l_704 + 3)];
                    }
                    g_145 = (-2L);
                    for (l_714 = 0; (l_714 <= 3); l_714 += 1)
                    {
                        l_832[1] = (((((safe_lshift_func_uint8_t_u_s((l_820 != (g_715 || ((g_434 , (safe_mod_func_uint16_t_u_u(p_55, l_823))) , (safe_sub_func_int8_t_s_s((((safe_rshift_func_uint16_t_u_u(1UL, 2)) != (((safe_rshift_func_int8_t_s_s((2L == func_75((l_806 = (safe_rshift_func_int16_t_s_u(l_806, 15))), p_53, g_314, g_572, l_823)), 0)) <= g_111[0]) , l_806)) < 1UL), 0L))))), 5)) > p_53) == p_51) >= l_453) <= 0xFBB02BE1L);
                        if (p_52)
                            break;
                    }
                    return g_594;
                }
                else
                {
                    unsigned l_835 = 0x1E9A68BAL;
                    l_838 = (safe_mod_func_int32_t_s_s(((((g_166 = g_358) < p_54) || p_55) != g_410), (l_835 ^ (l_823 = (safe_mod_func_int16_t_s_s(g_434, (l_787 | p_55)))))));
                }
                for (g_358 = 0; (g_358 <= 3); g_358 += 1)
                {
                    unsigned short l_843 = 0x7679L;
                    short l_848 = 0L;
                    int l_849 = 0xF626DE92L;
                    for (g_180 = 9; (g_180 >= 1); g_180 -= 1)
                    {
                        unsigned char l_845 = 1UL;
                        unsigned l_857[6] = {7UL,1UL,1UL,7UL,1UL,1UL};
                        int i;
                        l_847 = (safe_sub_func_uint32_t_u_u((l_823 = (!(4UL && p_55))), ((safe_mod_func_int32_t_s_s((!(l_804 < ((((p_53 = l_838) >= l_843) > l_614) > (+(g_844 , (l_846 = (l_845 , (-7L)))))))), 9L)) | g_62)));
                        l_806 = (g_637 != l_848);
                        l_849 = 0L;
                        l_806 = (((((~(g_49 || p_52)) ^ (2L || (l_850 = 0xE51DL))) <= ((-1L) == (g_142 = (((safe_sub_func_uint8_t_u_u(p_55, (safe_mul_func_int8_t_s_s((safe_sub_func_int8_t_s_s(((l_845 > g_594) , ((((g_314 = p_51) > g_770) && 0x587CL) , p_51)), g_379[0][1][2])), g_701)))) == p_55) <= l_857[2])))) , l_820) | 0x39L);
                    }
                    for (g_594 = 0; (g_594 <= 1); g_594 += 1)
                    {
                        int i, j, k;
                        l_864[1][2][2] = ((((l_863 = (((g_379[(g_594 + 1)][g_594][g_358] > (p_55 || (func_89(g_447[2][8][0], (safe_rshift_func_uint8_t_u_u(0x8CL, l_846)), (g_860[1][9][3] = g_379[(g_594 + 1)][g_594][g_358]), (func_89(p_52, p_51, (safe_rshift_func_uint16_t_u_u(g_111[0], l_803)), l_850) && 4294967295UL)) < 1UL))) , l_616[7]) , g_715)) >= 0x6FE9DEBDL) && g_379[(g_594 + 1)][g_594][g_358]) & (-1L));
                    }
                }
                if (l_838)
                    break;
                for (l_614 = 0; (l_614 <= 3); l_614 += 1)
                {
                    char l_871 = 0L;
                    l_806 = ((((p_52 || ((((((p_53 , ((p_53 = 0x0EFC95B5L) , func_75(l_864[2][1][2], ((g_379[0][1][2] , (0xEAL && (safe_lshift_func_uint16_t_u_u(((func_75((safe_add_func_uint32_t_u_u((safe_lshift_func_int8_t_s_u((p_54 , l_838), 3)), (l_74[1][1][0] == l_864[3][1][1]))), g_314, p_52, p_55, l_548) | p_54) , p_52), l_871)))) , 0x970E8837L), p_54, g_4, l_863))) & g_570) , 0x017AL) , 0xF20CL) >= 65532UL) | l_820)) > 0x7BL) != 1UL) , p_52);
                    if ((0x760EL & p_53))
                    {
                        unsigned l_880 = 0x36F0772FL;
                        char l_883[2];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_883[i] = 0x4CL;
                        l_449 = ((((g_314 = l_864[1][2][2]) <= l_864[2][3][3]) ^ (((l_863 = (~(safe_add_func_int32_t_s_s(g_166, g_594)))) != (-5L)) || (g_447[2][3][1] > ((safe_mul_func_uint16_t_u_u((safe_mod_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s((((p_53 = ((((((l_880 < (g_637 & (safe_sub_func_uint16_t_u_u(g_379[0][1][2], l_787)))) , 1UL) > l_871) != g_145) , l_864[1][2][2]) > l_883[0])) & 0x053E5E00L) > 0xFB40L), 2)), g_592)), l_614)) , p_53)))) , g_410);
                    }
                    else
                    {
                        return l_847;
                    }
                    for (l_850 = 0; (l_850 <= 0); l_850 += 1)
                    {
                        g_701 = 0x0520DF79L;
                    }
                    g_701 = (l_871 && (((((p_52 , (-7L)) < ((g_433 >= ((func_75(l_871, func_75(((safe_sub_func_int8_t_s_s(g_49, p_53)) , l_573), (4294967295UL != (-1L)), g_62, l_864[3][2][4], l_806), g_592, p_51, g_433) >= l_871) != p_55)) <= l_850)) > p_54) <= p_51) < g_860[1][9][3]));
                }
            }
            if (((l_806 <= (l_449 = (l_621 , ((!g_447[3][8][1]) == (safe_mod_func_uint32_t_u_u((l_803 == (p_54 = g_379[0][1][2])), 0x4C200470L)))))) <= l_888))
            {
                unsigned l_899 = 0x18C0EAFBL;
                int l_911[10][2][4] = {{{(-9L),0x9CCDEF9DL,0xB301CF31L,0xB301CF31L},{0x81C91034L,0x81C91034L,0L,0x9CCDEF9DL}},{{0x9CCDEF9DL,(-9L),0L,(-9L)},{0x81C91034L,1L,0xB301CF31L,0L}},{{(-9L),1L,1L,(-9L)},{1L,(-9L),0x81C91034L,0x9CCDEF9DL}},{{1L,0x81C91034L,1L,0xB301CF31L},{(-9L),0x9CCDEF9DL,0xB301CF31L,0xB301CF31L}},{{0x81C91034L,0x81C91034L,0L,0x9CCDEF9DL},{0x9CCDEF9DL,(-9L),0L,(-9L)}},{{0x81C91034L,1L,0xB301CF31L,0L},{(-9L),1L,1L,(-9L)}},{{1L,(-9L),0x81C91034L,0x9CCDEF9DL},{1L,0x81C91034L,1L,0xB301CF31L}},{{(-9L),0x9CCDEF9DL,0xB301CF31L,0xB301CF31L},{0x81C91034L,0x81C91034L,0L,0x9CCDEF9DL}},{{0x9CCDEF9DL,(-9L),0L,(-9L)},{0x81C91034L,1L,0xB301CF31L,0L}},{{(-9L),1L,1L,(-9L)},{1L,(-9L),0x81C91034L,0x9CCDEF9DL}}};
                char l_931 = 0x23L;
                unsigned l_944 = 0xA4BBDF81L;
                int i, j, k;
                if (((safe_add_func_int16_t_s_s((p_53 || g_743[0]), p_54)) == g_358))
                {
                    short l_906 = (-5L);
                    int l_913 = 0x31B21596L;
                    l_913 = func_75(((safe_add_func_int32_t_s_s(((safe_mod_func_int8_t_s_s((l_804 = (safe_rshift_func_uint16_t_u_u((safe_mul_func_int16_t_s_s((func_89((l_899 , g_180), (l_911[5][1][0] = (((safe_add_func_int8_t_s_s((safe_mul_func_uint16_t_u_u(g_447[2][8][2], 0xA34CL)), (((safe_lshift_func_uint8_t_u_s((l_906 >= 0x94C6L), (safe_mul_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u(((l_888 , l_906) , (((l_449 = 0xAAEBE736L) , p_52) , 0xCA16L)), p_51)), p_55)))) , l_888) , g_62))) || p_51) == g_166)), l_453, p_54) & g_379[0][1][2]), p_53)), 1))), 0xF5L)) <= g_912), 0x858C60E6L)) , l_850), p_53, g_410, l_838, g_410);
                    for (g_62 = 0; (g_62 <= 3); g_62 += 1)
                    {
                        unsigned l_926[1][1];
                        int i, j;
                        for (i = 0; i < 1; i++)
                        {
                            for (j = 0; j < 1; j++)
                                l_926[i][j] = 0x6664E41CL;
                        }
                        g_145 = (safe_add_func_uint32_t_u_u((safe_mul_func_uint16_t_u_u((p_54 | (l_911[5][1][0] & (g_925 = ((p_55 = (safe_rshift_func_uint16_t_u_u(0xACB2L, g_180))) >= (((safe_lshift_func_int16_t_s_u(1L, l_906)) , 0xE4L) || (g_166 , l_924)))))), l_616[9])), p_52));
                        l_838 = (p_54 || p_52);
                        g_701 = (l_926[0][0] > (safe_mul_func_uint8_t_u_u(p_54, 0x92L)));
                        g_701 = l_926[0][0];
                    }
                    for (l_449 = 0; (l_449 <= 3); l_449 += 1)
                    {
                        int l_943 = (-4L);
                        l_911[5][1][0] = ((((safe_mul_func_int16_t_s_s((l_931 <= (safe_rshift_func_int16_t_s_u((l_806 = (safe_rshift_func_int8_t_s_u(((g_860[4][0][2] = g_770) & ((safe_rshift_func_int8_t_s_u((l_913 = (p_51 <= (safe_add_func_int32_t_s_s((g_145 = g_447[2][8][0]), (p_54 , p_54))))), 0)) , (l_913 = (func_89(((p_55 = (l_846 = (safe_unary_minus_func_int32_t_s(l_913)))) >= ((l_899 , (safe_add_func_uint16_t_u_u(((l_943 , l_714) , l_450[0][0][0]), g_379[0][1][2]))) , 0xE72AL)), p_53, l_823, l_944) ^ g_770)))), 1))), 0))), l_823)) != p_54) != l_823) < 0x50C2L);
                        l_911[5][1][1] = ((1UL || func_75(l_931, ((safe_rshift_func_uint8_t_u_s((func_89((l_943 = (~p_54)), p_52, (l_804 = (safe_rshift_func_uint8_t_u_s(g_844, (((g_111[0] , (0x4426FAC4L != ((((safe_rshift_func_int16_t_s_u(g_743[0], g_410)) | l_803) , 0x70170CEFL) < p_55))) , g_637) && p_52)))), l_911[5][1][0]) | g_392), p_51)) & 0xBB4A9063L), l_846, g_407, g_860[4][1][3])) | p_52);
                        l_838 = ((safe_mul_func_uint16_t_u_u(((p_54 , (safe_sub_func_uint16_t_u_u(0xD893L, ((safe_mod_func_int8_t_s_s((((((~(safe_sub_func_int32_t_s_s(p_51, (((func_75(l_906, g_860[1][9][3], (safe_mod_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_u((g_963 = func_75((g_234 = g_434), l_943, p_54, (g_392 & 9UL), g_963)), 8)), 0x31C3D373L)), p_52, l_847) & g_111[0]) ^ l_931) , 0x3D38736AL)))) ^ 0xE1F3L) , l_787) && l_943) ^ l_804), l_964)) , l_467[4][0][5])))) & p_54), 3UL)) != p_54);
                    }
                    for (l_453 = 0; (l_453 <= 9); l_453 += 1)
                    {
                        int i;
                        l_846 = ((l_616[(l_704 + 1)] != (func_89(g_701, l_899, (l_616[(l_704 + 1)] != p_53), g_743[3]) , 0xFAC9L)) & (((l_450[0][0][0] > p_55) == 0UL) >= 0UL));
                        g_971 = ((g_701 = (l_449 = (((p_54 = ((-3L) & (func_89(p_52, p_53, p_55, ((safe_mul_func_int8_t_s_s(((safe_mul_func_uint16_t_u_u((safe_sub_func_int8_t_s_s(g_407, g_358)), ((l_806 = ((((((l_846 = ((((func_89(((((p_55 || g_743[3]) < (((-1L) && 0xD07BL) ^ g_62)) | 1UL) < 0xD2L), g_860[0][6][0], g_166, g_234) , p_53) , (-1L)) != 0UL) ^ g_770)) & g_407) >= 0x0FE95978L) > 0x60L) <= p_51) >= l_74[3][1][2])) != 1UL))) < p_52), (-6L))) == g_111[0])) | p_53))) , p_55) | 0xDEL))) || 0x7BC3BEDFL);
                    }
                }
                else
                {
                    return p_52;
                }
            }
            else
            {
                unsigned short l_984 = 6UL;
                l_986[3] = ((l_806 = ((safe_mod_func_int8_t_s_s((safe_mod_func_int16_t_s_s(l_823, (safe_rshift_func_uint16_t_u_u(((l_985 = func_89((p_52 = (safe_mod_func_uint32_t_u_u(l_806, 0x140561EDL))), p_54, l_846, (safe_mul_func_int16_t_s_s((safe_mod_func_int16_t_s_s(g_770, func_75((((-1L) > l_806) , ((((254UL && g_447[2][8][0]) <= l_787) , g_234) , l_846)), l_548, g_410, l_984, g_145))), 0x0FDBL)))) >= 0x04D3L), 0)))), 0xD8L)) || 0L)) == p_53);
            }
            return l_985;
        }
        return g_572;
    }
    return g_62;
}







static int func_69(int p_70, int p_71)
{
    int l_94 = 0x358DB2EDL;
    unsigned l_109[8] = {0xBEAAF72AL,0x5B128C85L,0xBEAAF72AL,0x5B128C85L,0xBEAAF72AL,0x5B128C85L,0xBEAAF72AL,0x5B128C85L};
    unsigned l_110[6][6][2] = {{{4294967295UL,0UL},{4294967295UL,0UL},{4294967295UL,0UL},{4294967295UL,0UL},{4294967295UL,0UL},{4294967295UL,0UL}},{{4294967295UL,0UL},{4294967295UL,0UL},{4294967295UL,0UL},{4294967295UL,0UL},{4294967295UL,0UL},{4294967295UL,0UL}},{{4294967295UL,0UL},{4294967295UL,0UL},{4294967295UL,0UL},{4294967295UL,0UL},{4294967295UL,0UL},{4294967295UL,0UL}},{{4294967295UL,0UL},{4294967295UL,0UL},{4294967295UL,0UL},{4294967295UL,0UL},{4294967295UL,0UL},{4294967295UL,0UL}},{{4294967295UL,0UL},{4294967295UL,0UL},{4294967295UL,0UL},{4294967295UL,0UL},{4294967295UL,0UL},{4294967295UL,0UL}},{{4294967295UL,0UL},{4294967295UL,0UL},{4294967295UL,0UL},{4294967295UL,0UL},{4294967295UL,0UL},{4294967295UL,0UL}}};
    int l_323[9][1][3] = {{{0x5B61EB15L,(-7L),0x0490F638L}},{{(-7L),0x5B61EB15L,0x5B61EB15L}},{{0x0490F638L,0x5B61EB15L,1L}},{{1L,(-7L),0x7BE39CE7L}},{{0x0490F638L,0x0490F638L,0x7BE39CE7L}},{{(-7L),1L,1L}},{{0x5B61EB15L,0x0490F638L,0x5B61EB15L}},{{0x5B61EB15L,(-7L),0x0490F638L}},{{(-7L),0x5B61EB15L,0x5B61EB15L}}};
    unsigned char l_413[7][9] = {{0xC1L,0xC1L,0UL,1UL,0xC1L,249UL,1UL,251UL,1UL},{251UL,0x54L,0x81L,0x81L,0x54L,251UL,0UL,1UL,0xADL},{251UL,0x36L,0x42L,0UL,0x6EL,0x6EL,0UL,0x42L,0x36L},{0x54L,0x63L,251UL,0xD7L,0x7CL,0UL,0UL,0UL,0UL},{3UL,0x42L,0UL,0x42L,3UL,0x37L,1UL,1UL,0UL},{0x14L,0x63L,0xD7L,255UL,1UL,255UL,0xD7L,0x63L,0x14L},{1UL,0x36L,0xC1L,3UL,1UL,0x37L,0x6EL,0x37L,1UL}};
    char l_418 = (-1L);
    int i, j, k;
    p_70 = (((func_75((safe_rshift_func_int8_t_s_s(((safe_mul_func_int8_t_s_s(((l_323[4][0][2] = (((safe_mod_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_s(func_89(l_94, (l_94 & ((safe_rshift_func_int8_t_s_s(((p_71 & p_71) >= (safe_add_func_uint32_t_u_u((safe_lshift_func_int8_t_s_u((safe_mod_func_int16_t_s_s((0x93L || g_49), (safe_rshift_func_int8_t_s_u((((((safe_mod_func_int16_t_s_s((-1L), (safe_sub_func_uint8_t_u_u(l_94, l_94)))) >= l_94) >= p_70) < g_62) && l_94), l_94)))), l_109[6])), g_49))), 1)) > 4294967291UL)), l_109[6], l_110[2][3][0]), 2)), 0xAC7EA18EL)) >= g_4) , 0x81L)) ^ p_71), l_94)) , (-3L)), g_4)), g_4, l_109[0], p_70, l_94) == g_111[0]) == p_70) > 0xDD7DL);
    for (g_234 = 0; (g_234 <= 10); g_234 = safe_add_func_uint8_t_u_u(g_234, 7))
    {
        char l_402 = 5L;
        int l_448 = 0x8DAC34FAL;
        g_145 = ((safe_mul_func_uint16_t_u_u(((g_166 ^ 4UL) , l_402), (((0UL != (l_323[4][0][2] = g_111[0])) ^ ((g_410 = ((((safe_mul_func_int16_t_s_s((((safe_mul_func_uint16_t_u_u((g_407 = p_71), (((safe_sub_func_uint16_t_u_u((l_110[3][0][0] < ((g_392 , (g_62 && 1L)) <= 0x78L)), l_110[2][3][0])) != p_70) == 65531UL))) ^ 0UL) != (-7L)), l_94)) || g_358) , l_402) ^ 9UL)) , l_402)) , 0xA690L))) , l_110[2][3][0]);
        for (g_166 = (-7); (g_166 != 28); g_166 = safe_add_func_uint8_t_u_u(g_166, 4))
        {
            unsigned l_420[5] = {0x7EC7FEB5L,0x7EC7FEB5L,0x7EC7FEB5L,0x7EC7FEB5L,0x7EC7FEB5L};
            int l_427 = 2L;
            int i;
            if (g_49)
            {
                return l_110[2][3][0];
            }
            else
            {
                unsigned l_432 = 0x227AD08FL;
                l_420[0] = ((l_413[6][1] = g_410) < (g_49 = ((((p_71 | p_71) | p_71) > (safe_mul_func_int16_t_s_s((((6UL <= l_402) || (safe_add_func_int16_t_s_s((g_419 = (l_418 >= g_392)), p_70))) | 0xCBD1L), g_314))) , p_71)));
                g_434 = (safe_add_func_int8_t_s_s((-1L), ((safe_mod_func_int16_t_s_s(p_70, (g_433 = (l_323[4][0][2] = ((g_166 | p_70) & (safe_mul_func_uint16_t_u_u(((l_427 = (p_71 < 9UL)) && (l_427 = ((g_145 = (-10L)) == (g_4 == ((safe_mul_func_uint8_t_u_u(((safe_mul_func_uint8_t_u_u(g_407, 0xFFL)) || (-5L)), 0x67L)) && g_4))))), l_432))))))) <= g_410)));
                for (g_314 = (-6); (g_314 <= (-1)); g_314++)
                {
                    for (g_434 = 0; (g_434 >= 0); g_434 -= 1)
                    {
                        int i, j, k;
                        p_70 = (safe_add_func_uint32_t_u_u(g_111[g_434], (((safe_lshift_func_int8_t_s_u((safe_lshift_func_uint8_t_u_s(((g_111[g_434] < (safe_add_func_uint16_t_u_u((((!l_110[g_434][(g_434 + 3)][g_434]) == l_110[(g_434 + 4)][(g_434 + 3)][(g_434 + 1)]) , 0x7376L), (((!((safe_add_func_int16_t_s_s(p_71, ((((((+g_410) && p_70) | (l_110[(g_434 + 4)][(g_434 + 3)][(g_434 + 1)] , p_70)) && g_447[2][8][0]) <= (-5L)) & p_70))) , l_427)) & 0xDE580794L) < l_323[4][0][2])))) || 0x83A8E642L), g_392)), 0)) < 0x7A7F3AA6L) & l_432)));
                        return p_71;
                    }
                    g_145 = p_70;
                }
            }
            if (g_379[1][1][2])
                break;
        }
        l_448 = p_71;
        if (l_402)
            continue;
    }
    return p_70;
}







static char func_75(short p_76, unsigned p_77, int p_78, unsigned char p_79, int p_80)
{
    int l_324 = 0x5C51C68FL;
    int l_335 = 0x835DC99DL;
    int l_336 = 0xB0B635D1L;
    int l_337[8] = {(-6L),(-6L),(-6L),(-6L),(-6L),(-6L),(-6L),(-6L)};
    unsigned char l_338 = 0xF3L;
    char l_359 = 0x36L;
    unsigned l_374 = 0x499E2A42L;
    unsigned char l_381 = 0x43L;
    int i;
    l_337[3] = (g_145 = (((g_180 < (l_324 || (safe_sub_func_int16_t_s_s((l_324 ^ ((~((safe_mul_func_int8_t_s_s((safe_sub_func_int32_t_s_s((p_80 >= 0xB6FAL), p_77)), (l_336 = ((safe_lshift_func_uint8_t_u_u(((l_335 = (safe_sub_func_int32_t_s_s(g_49, (((p_77 ^ (p_77 ^ p_76)) | g_4) >= g_111[0])))) ^ (-1L)), 3)) <= g_180)))) && l_335)) != p_79)), g_145)))) != p_79) <= 0xC9L));
    if (l_338)
    {
        char l_341[2][8];
        int l_342 = 0xA6C28FBAL;
        int l_380 = 0x2CF00A70L;
        int i, j;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 8; j++)
                l_341[i][j] = 0L;
        }
        l_342 = (safe_sub_func_int16_t_s_s(l_341[1][6], l_324));
        l_336 = (safe_sub_func_uint8_t_u_u(((safe_rshift_func_uint8_t_u_u((((safe_add_func_uint32_t_u_u(p_80, (safe_unary_minus_func_int8_t_s((l_337[1] = (safe_add_func_int16_t_s_s((l_359 = (((p_76 || func_89((((0L < (safe_rshift_func_int8_t_s_u((g_180 >= (p_79 && (!((safe_mod_func_int16_t_s_s((l_335 = (safe_mul_func_uint8_t_u_u(l_341[1][6], p_78))), (-8L))) > (g_358 = 0x906EL))))), 4))) & g_166) || 0x40FBL), p_77, l_338, p_76)) ^ l_337[3]) && 5UL)), g_4))))))) | p_77) && g_358), 6)) , 0x72L), l_336));
        l_337[3] = ((safe_add_func_int32_t_s_s(((p_76 ^ (safe_add_func_uint8_t_u_u(g_166, l_341[1][6]))) || (l_381 = (safe_sub_func_uint8_t_u_u(p_80, (safe_lshift_func_uint16_t_u_s((l_380 = (l_342 = ((safe_mod_func_int16_t_s_s((safe_add_func_uint16_t_u_u((((p_78 = 0x59F9DB16L) == func_89((safe_lshift_func_uint8_t_u_s(l_374, 3)), p_80, (g_379[0][1][2] = (safe_lshift_func_int16_t_s_u((g_234 = (safe_add_func_int32_t_s_s((((l_341[1][6] == 4UL) > 0x8D0AE299L) , p_77), 1L))), 13))), g_358)) != g_111[0]), 0xDDF2L)), l_324)) && p_80))), l_341[1][6])))))), p_76)) < p_79);
        g_145 = (g_142 >= (g_49 | (safe_mul_func_int8_t_s_s(((safe_add_func_uint32_t_u_u(((safe_sub_func_int16_t_s_s(p_76, p_79)) && (l_342 = (safe_mul_func_int8_t_s_s((g_62 , l_324), (g_314 = g_234))))), (safe_lshift_func_int8_t_s_u(((((p_80 <= l_324) <= g_392) ^ p_80) || g_62), 2)))) && l_380), 0xA3L))));
    }
    else
    {
        char l_397 = 0L;
        p_78 = ((g_379[2][0][3] != (-3L)) != (((((safe_sub_func_uint16_t_u_u((((safe_mul_func_uint8_t_u_u(func_89(p_78, l_374, (l_397 , g_145), p_80), (p_76 | p_78))) == l_397) > l_397), g_111[0])) ^ p_76) > g_379[0][1][2]) | l_359) ^ g_392));
    }
    p_78 = (-10L);
    return l_335;
}







static unsigned char func_89(unsigned char p_90, unsigned short p_91, unsigned short p_92, int p_93)
{
    unsigned l_122 = 1UL;
    int l_123[9][6][4] = {{{(-1L),0xDC7AB573L,0L,(-10L)},{0xC7534BEEL,0x186B95FEL,0L,1L},{(-1L),0xB8750396L,4L,(-1L)},{0x0EB8E47BL,1L,5L,(-1L)},{5L,(-1L),0L,1L},{1L,1L,0x22C044B2L,(-9L)}},{{0x1366E2C4L,0x143BF1F8L,0xC91A03DCL,0xD72A7422L},{1L,7L,0xEA25DA63L,0xC7534BEEL},{0x8D514EF7L,0x0EB8E47BL,0x5B34FEB1L,4L},{0L,1L,0xB8750396L,1L},{0xBFCA48CCL,0xC20F127DL,0xD72A7422L,4L},{(-1L),0xF167E626L,(-8L),0x319BF676L}},{{(-10L),0L,1L,(-1L)},{1L,0x186B95FEL,5L,0L},{(-1L),3L,7L,0xAF170B72L},{0x0A99849AL,0x09706B00L,(-1L),1L},{1L,3L,0x0EB8E47BL,0x072EE8FFL},{6L,0xBBD54ED7L,6L,0x186B95FEL}},{{0x836DABD8L,0x400F4CACL,0x319BF676L,0xBCFA1F81L},{0x5D251299L,1L,6L,(-1L)},{(-5L),0xEB0059F0L,0xEB0059F0L,(-5L)},{0xB9274591L,0x836DABD8L,3L,1L},{1L,0xBCFA1F81L,(-1L),0xE459F6D1L},{(-2L),0x0A99849AL,0L,0xE459F6D1L}},{{(-1L),0xBCFA1F81L,0x079B8BCBL,1L},{0x319BF676L,0x836DABD8L,(-9L),(-5L)},{0xC23CF8C3L,0xEB0059F0L,0x2BDF33D8L,(-1L)},{2L,1L,0x09706B00L,0xBCFA1F81L},{(-2L),0x400F4CACL,1L,0x186B95FEL},{0xC63812DDL,(-1L),(-1L),(-9L)}},{{0x9426B2C3L,0L,(-9L),0x9DBCFCC2L},{7L,0xEA1A09BBL,0x143BF1F8L,0xAD0BAEE1L},{0xAD0BAEE1L,7L,0x27AF4644L,0x08B7C835L},{0x319BF676L,(-4L),1L,(-2L)},{0x0A99849AL,1L,0xBBD54ED7L,(-2L)},{1L,5L,0xC91A03DCL,0x0E5BE992L}},{{0x0EB8E47BL,0x8F14D573L,(-10L),0L},{1L,0xC91A03DCL,0x08B7C835L,0x16214FB9L},{4L,(-1L),0xAF170B72L,(-9L)},{(-2L),0xD72A7422L,(-9L),1L},{(-5L),0x9426B2C3L,1L,(-1L)},{(-1L),0xC63812DDL,(-9L),0xAF170B72L}},{{0L,(-1L),4L,(-1L)},{5L,0x5B34FEB1L,(-4L),0xE78A8B9AL},{4L,(-1L),0x22C044B2L,0x27AF4644L},{0L,0xBBD54ED7L,0x836DABD8L,0x5D251299L},{0L,3L,0x22C044B2L,(-10L)},{4L,0x5D251299L,(-4L),(-1L)}},{{5L,(-2L),4L,0x22C044B2L},{0L,0xAD0BAEE1L,(-9L),0xB8750396L},{(-1L),(-10L),1L,0x143BF1F8L},{(-5L),7L,(-9L),7L},{(-2L),1L,0xAF170B72L,0x0EB8E47BL},{4L,2L,0x1366E2C4L,0L}}};
    int l_124 = 0xE20B3FD2L;
    int l_184[4] = {(-1L),(-1L),(-1L),(-1L)};
    unsigned short l_197 = 0xACD8L;
    int l_198[8][10][3] = {{{0x91CE0F09L,0x4D2AB853L,(-1L)},{(-6L),(-4L),(-1L)},{0L,(-1L),0xE7412AEBL},{0x66F68BACL,0x8E9DECBAL,0x8E9DECBAL},{0xE7412AEBL,0x42343219L,0xF0FC74B4L},{(-8L),0xCCD75549L,2L},{0x0AC40AF7L,0xE7412AEBL,0x3F2653F4L},{0x8E24242BL,0L,1L},{0x6F47B0E0L,0xE7412AEBL,2L},{0x8E9DECBAL,0xCCD75549L,(-9L)}},{{0x91CE0F09L,0x42343219L,0x6F47B0E0L},{0x53A4A4FEL,0x8E9DECBAL,0xF34FAB35L},{0x9C307FEAL,(-1L),0x13D76F3AL},{6L,(-4L),0xFFFE616AL},{0xBBA9724FL,0x4D2AB853L,0xF0FC74B4L},{3L,0x34C3152CL,3L},{0L,0xBBA9724FL,0xF727E752L},{0x8E24242BL,(-6L),0x8E9DECBAL},{(-1L),2L,5L},{0xE56ED2C1L,0xCCD75549L,0x001A1CCDL}},{{(-1L),0x02B22ED0L,0xA7FE7BAFL},{0x8E24242BL,0xE56ED2C1L,0xF34FAB35L},{0L,0x0AC40AF7L,2L},{3L,0xD2CA8022L,(-4L)},{0xBBA9724FL,0x42343219L,(-2L)},{6L,0x3C422D24L,(-1L)},{0x9C307FEAL,0xBBA9724FL,0x3F2653F4L},{0x53A4A4FEL,0x53A4A4FEL,0xFFFE616AL},{0x91CE0F09L,0xD13327E3L,5L},{0x8E9DECBAL,0xFFFE616AL,0x8E24242BL}},{{0xFBABA671L,0L,0x734962E9L},{0xE9901C46L,1L,0x8E24242BL},{0xA7FE7BAFL,0x91CE0F09L,0L},{0x3C422D24L,0L,0xF34FAB35L},{0x3F2653F4L,0x13D76F3AL,0xE6E0BB03L},{0xC587C630L,0x8E9DECBAL,0x092D1FD3L},{0x91CE0F09L,0x3F2653F4L,(-1L)},{0x66F68BACL,0xE9901C46L,0x001A1CCDL},{0x8D21F102L,(-8L),(-8L)},{0x001A1CCDL,0xD2CA8022L,0L}},{{0x42343219L,0L,2L},{2L,0x001A1CCDL,0xCFB8BCE6L},{0L,0x6F47B0E0L,0L},{0xCCD75549L,0x001A1CCDL,1L},{(-8L),0L,0x461230A9L},{0xC587C630L,0xD2CA8022L,0xCCD75549L},{0xA7FE7BAFL,(-8L),0x9C307FEAL},{3L,0xE9901C46L,0xF34FAB35L},{0x734962E9L,0x3F2653F4L,0xF0FC74B4L},{0L,0x8E9DECBAL,0L}},{{0xFBABA671L,0x13D76F3AL,0xFBABA671L},{0x66F68BACL,0L,0x463211C8L},{0L,0x91CE0F09L,(-8L)},{0L,1L,0x79B7C538L},{(-2L),0L,0xE6E0BB03L},{0L,0xFFFE616AL,0x4CDFC208L},{0L,(-2L),0x9C307FEAL},{0x66F68BACL,2L,1L},{0xFBABA671L,(-1L),0x3F2653F4L},{0L,0xD2CA8022L,0x8E24242BL}},{{0x734962E9L,0xBBA9724FL,0x4D2AB853L},{1L,3L,0x34C3152CL},{0L,0L,(-1L)},{(-1L),(-1L),2L},{0xFD9266CDL,(-1L),0x4D2AB853L},{0x79B7C538L,(-6L),0L},{2L,0xFD9266CDL,0x4D2AB853L},{(-1L),0xE56ED2C1L,2L},{0xF0FC74B4L,0x6F47B0E0L,(-1L)},{0xE9901C46L,(-1L),0x34C3152CL}},{{(-2L),0xE6E0BB03L,0x3F2653F4L},{0xE56ED2C1L,0xE9901C46L,0x092D1FD3L},{0xD13327E3L,2L,0L},{(-1L),(-8L),(-8L)},{0L,0x9C307FEAL,0x734962E9L},{0xF34FAB35L,(-6L),(-9L)},{0L,0L,0x02B22ED0L},{0x8E9DECBAL,1L,2L},{0L,0L,0xFD9266CDL},{(-8L),(-6L),0xC587C630L}}};
    char l_315 = 9L;
    unsigned char l_322 = 250UL;
    int i, j, k;
    for (p_90 = 0; (p_90 <= 0); p_90 += 1)
    {
        int l_121 = 5L;
        unsigned l_141[10];
        char l_179 = 0x3AL;
        int l_235 = (-6L);
        char l_277 = 0x18L;
        int i;
        for (i = 0; i < 10; i++)
            l_141[i] = 0xE7F17000L;
        if ((((safe_unary_minus_func_uint32_t_u(0xC8D62BADL)) >= (1L | ((((safe_mul_func_int8_t_s_s((l_123[1][1][1] = ((g_111[p_90] & p_90) , ((((l_122 = (safe_add_func_int8_t_s_s((safe_sub_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u((p_91 ^ (l_121 = (g_111[p_90] && (((p_90 && g_111[0]) && 0x3072L) == p_90)))), 1)), p_93)), 0xB6L))) >= g_62) > g_49) > g_4))), g_111[p_90])) && (-1L)) , p_91) , l_124))) , g_49))
        {
            unsigned char l_129 = 0x8CL;
            int l_140[1][3];
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 3; j++)
                    l_140[i][j] = 0x84EBA52EL;
            }
            for (p_93 = 0; (p_93 <= 0); p_93 += 1)
            {
                unsigned char l_131 = 255UL;
                l_140[0][0] = (safe_mod_func_uint16_t_u_u(((((safe_sub_func_int32_t_s_s(g_111[0], 0x4C91969DL)) ^ (l_129 = g_111[p_90])) ^ (safe_unary_minus_func_int32_t_s(((l_131 < (+(g_62 == p_93))) ^ (safe_sub_func_int32_t_s_s(((safe_mul_func_uint16_t_u_u(((safe_lshift_func_uint16_t_u_u(p_92, ((((((g_111[p_90] || (((safe_mul_func_int16_t_s_s(0L, p_90)) , l_123[1][1][1]) , 0x3DBAL)) <= g_49) , p_90) , l_122) < 1UL) && p_93))) <= l_140[0][0]), g_111[0])) <= l_131), l_124)))))) , 0xB19EL), 0x9704L));
            }
            g_142 = l_141[7];
            for (l_122 = 0; (l_122 > 39); ++l_122)
            {
                unsigned short l_148 = 0x46F0L;
                g_145 = g_49;
                g_145 = g_49;
                l_148 = (l_123[1][1][1] , (safe_rshift_func_uint8_t_u_s((l_123[8][2][2] = 1UL), 7)));
            }
            for (l_129 = 11; (l_129 < 43); l_129 = safe_add_func_int16_t_s_s(l_129, 6))
            {
                char l_161[7][1][6] = {{{9L,0x6CL,0x6CL,9L,(-1L),6L}},{{(-1L),4L,(-1L),9L,6L,(-1L)}},{{9L,6L,(-1L),(-8L),6L,4L}},{{(-8L),4L,(-1L),(-1L),(-1L),4L}},{{(-1L),0x6CL,(-1L),0xD2L,(-1L),(-1L)}},{{(-1L),(-1L),(-1L),(-1L),0xA4L,6L}},{{(-8L),(-1L),0x6CL,(-1L),(-1L),(-1L)}}};
                int l_193 = 0xE3F86CA3L;
                int l_194 = 0xE9D9AFA5L;
                int i, j, k;
                l_123[6][1][1] = (!(p_93 = (-1L)));
                p_93 = ((((l_122 > ((l_123[1][1][1] = (g_142 = (safe_lshift_func_uint8_t_u_s((g_145 , (l_121 = (g_62 = p_90))), p_91)))) != g_111[0])) < (((((safe_mod_func_uint16_t_u_u((safe_add_func_uint16_t_u_u((l_129 ^ l_141[7]), (safe_mul_func_int8_t_s_s(((0UL != (safe_sub_func_int8_t_s_s(g_111[0], 0x5DL))) , l_161[0][0][1]), (-2L))))), g_4)) <= g_145) > 4294967295UL) != g_4) > g_111[0])) , g_145) == l_140[0][0]);
                for (p_91 = 28; (p_91 >= 16); p_91 = safe_sub_func_int16_t_s_s(p_91, 9))
                {
                    short l_167 = 0x4D13L;
                    int l_168 = (-7L);
                    for (g_145 = 28; (g_145 == 7); --g_145)
                    {
                        g_166 = g_4;
                        l_140[0][0] = g_166;
                        p_93 = 0x96F3BD68L;
                        l_168 = l_167;
                    }
                    for (g_142 = (-28); (g_142 >= 21); g_142 = safe_add_func_int16_t_s_s(g_142, 4))
                    {
                        unsigned short l_183 = 0xF523L;
                        p_93 = (p_90 , ((safe_lshift_func_int16_t_s_u(g_62, 11)) , ((0xDAL && (65535UL ^ p_91)) != (safe_add_func_uint32_t_u_u((((((0xF8D6E280L >= ((l_168 = l_124) == p_93)) && (4L | l_141[1])) <= p_93) | 0x27L) != p_91), l_123[5][4][1])))));
                        l_168 = p_91;
                        p_93 = ((((safe_sub_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u(g_145, (g_180 = l_179))), (p_92 = g_111[0]))) & (safe_mul_func_uint8_t_u_u(p_90, g_145))) != p_90) != ((((g_111[0] && (l_129 != ((g_49 = (((l_183 , 0xA1L) <= l_168) && p_91)) | g_142))) , g_145) <= 249UL) || l_183));
                        g_145 = l_184[3];
                    }
                    return p_92;
                }
                l_194 = (safe_rshift_func_int8_t_s_u((g_166 || ((safe_lshift_func_int16_t_s_s((p_93 == l_141[8]), g_145)) ^ (+g_166))), ((safe_rshift_func_uint16_t_u_u(p_90, ((l_193 = (safe_mul_func_uint8_t_u_u(0xDFL, (~(0L <= (l_121 = g_62)))))) && 4294967288UL))) < g_49)));
            }
        }
        else
        {
            unsigned short l_201[2][1];
            int l_202 = 0xF9BD9F56L;
            int l_215 = 0x4244690CL;
            int l_250 = 0xEEF5AA28L;
            int i, j;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 1; j++)
                    l_201[i][j] = 0xB251L;
            }
            l_202 = ((((((safe_sub_func_uint16_t_u_u(((g_62 = ((p_93 = l_197) || 4294967295UL)) , l_198[5][3][1]), g_49)) , (safe_mul_func_int8_t_s_s((0xE3L != 0x2DL), 0x2FL))) , ((l_201[0][0] = p_91) > 0x8F9EL)) != 0x58L) || (-1L)) ^ l_202);
            l_121 = (p_93 = (((9UL > (((g_62 = (g_49 <= l_179)) > (l_123[1][1][1] = (0xDE4DC806L != g_49))) , 1UL)) < p_92) && ((safe_lshift_func_uint8_t_u_s(l_201[0][0], g_166)) , p_93)));
            if ((4L & g_166))
            {
                l_121 = (safe_rshift_func_int16_t_s_s((((g_145 = 1L) | l_179) & p_93), 10));
                p_93 = (g_142 ^ (g_4 <= ((((safe_rshift_func_uint16_t_u_s(g_145, g_145)) <= (safe_sub_func_uint8_t_u_u(((safe_mul_func_int8_t_s_s(((safe_lshift_func_uint8_t_u_s(l_215, g_180)) > (p_90 <= ((safe_add_func_uint32_t_u_u((safe_add_func_int16_t_s_s(g_49, ((safe_rshift_func_uint8_t_u_u((g_111[0] == g_180), g_180)) & g_145))), 4L)) , 0x6BC8L))), l_184[3])) & g_166), 6L))) ^ 0x35E3L) , (-1L))));
                l_198[5][3][1] = ((l_121 = 0x38F90603L) , ((l_121 = g_62) || (safe_lshift_func_uint8_t_u_u((0x682BC353L || p_92), (g_49 || l_141[7])))));
            }
            else
            {
                int l_253 = 0x63025B4EL;
                g_145 = g_166;
                for (l_215 = 18; (l_215 != 17); l_215 = safe_sub_func_int8_t_s_s(l_215, 4))
                {
                    unsigned short l_258 = 5UL;
                    int l_271 = (-6L);
                    l_235 = (g_145 = (0x3FL ^ (safe_mod_func_int8_t_s_s(((g_142 & (g_49 = l_141[7])) ^ (((g_234 = (l_121 = ((!(0UL != ((safe_lshift_func_int8_t_s_u((p_92 <= (safe_mul_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u(l_141[9], g_111[0])), (l_123[1][1][1] = g_166)))), 2)) , ((0x6F54L != p_93) == g_142)))) , 0L))) != p_90) == g_142)), g_180))));
                    g_145 = p_91;
                    if (p_91)
                    {
                        unsigned short l_254 = 0x2AA2L;
                        int l_255 = (-4L);
                        l_255 = (!(((p_91 && (p_93 = ((((safe_lshift_func_uint8_t_u_s(g_180, 1)) || (0L | (safe_mul_func_int16_t_s_s((safe_mul_func_uint16_t_u_u((p_91 || (safe_add_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s((g_62 = (safe_mul_func_uint16_t_u_u(g_234, (safe_mul_func_int16_t_s_s(l_250, g_166))))), 2)), (safe_mod_func_uint32_t_u_u((g_49 = l_253), p_93))))), g_4)), l_254)))) , p_92) >= g_111[0]))) , 0x6DL) ^ g_166));
                        if (g_145)
                            continue;
                        return g_49;
                    }
                    else
                    {
                        g_145 = ((safe_rshift_func_uint8_t_u_s((g_62 = (((g_166 >= p_92) >= (l_258 = l_123[1][1][1])) ^ g_111[0])), 3)) & (safe_rshift_func_int8_t_s_s((safe_mul_func_uint8_t_u_u((((p_92 >= ((safe_add_func_uint8_t_u_u((0xD686L || (safe_add_func_int16_t_s_s((((safe_rshift_func_uint8_t_u_s(p_92, g_4)) && (safe_sub_func_uint8_t_u_u(l_202, g_145))) , l_271), g_111[0]))), 7L)) && g_234)) == l_271) > l_201[0][0]), g_111[p_90])), l_179)));
                        l_271 = (g_166 , (g_142 != 0x9CA37805L));
                        l_198[0][6][1] = p_91;
                        p_93 = 8L;
                    }
                }
            }
        }
        for (g_180 = 0; (g_180 <= (-11)); g_180--)
        {
            char l_288 = 0x5FL;
            p_93 = (((safe_mul_func_uint8_t_u_u(((l_123[1][1][1] | (g_62 = (l_277 = (safe_unary_minus_func_uint32_t_u(l_179))))) , g_166), ((safe_add_func_int8_t_s_s((g_166 < (safe_mul_func_int16_t_s_s(l_179, (safe_rshift_func_uint8_t_u_s(0x9FL, 6))))), g_180)) == (safe_mul_func_uint8_t_u_u(p_90, (safe_sub_func_int8_t_s_s(l_288, 255UL))))))) == 1L) > g_145);
        }
    }
    for (g_62 = 0; (g_62 <= 3); g_62 += 1)
    {
        int l_293 = 0xB0D99779L;
        int l_296 = 9L;
        for (p_90 = 0; (p_90 <= 3); p_90 += 1)
        {
            short l_306 = 7L;
            for (p_92 = 0; (p_92 <= 3); p_92 += 1)
            {
                int i, j, k;
                l_123[1][1][1] = ((safe_sub_func_uint8_t_u_u(l_123[g_62][(p_90 + 2)][g_62], ((((((l_123[p_90][g_62][p_90] , p_91) , (l_198[5][3][1] = ((g_49 < g_180) ^ 0xB3L))) , (safe_mod_func_uint8_t_u_u((l_293 = 0x95L), (0x5D0AC4E5L || (safe_rshift_func_uint8_t_u_u((g_49 , g_111[0]), l_123[g_62][(p_90 + 2)][g_62])))))) , l_293) && p_90) >= l_296))) || l_124);
                for (p_93 = 2; (p_93 >= 0); p_93 -= 1)
                {
                    unsigned short l_305 = 0x2878L;
                    int i, j, k;
                    l_198[g_62][(p_93 + 2)][p_93] = (safe_rshift_func_uint16_t_u_u((((l_184[3] >= ((safe_rshift_func_int8_t_s_s((1UL >= l_124), ((safe_mod_func_int8_t_s_s(p_91, ((g_234 = (p_91 ^ ((safe_rshift_func_uint8_t_u_s((0x0EL == l_305), 5)) && (+(g_166 | l_122))))) , p_92))) == p_93))) | 248UL)) ^ l_305) >= 0L), 10));
                    if (l_296)
                        break;
                }
                for (g_166 = 3; (g_166 >= 0); g_166 -= 1)
                {
                    for (l_197 = 0; (l_197 <= 3); l_197 += 1)
                    {
                        p_93 = p_93;
                    }
                }
                for (g_142 = 0; (g_142 <= 3); g_142 += 1)
                {
                    p_93 = l_306;
                    g_145 = p_90;
                    if (g_180)
                        continue;
                    g_145 = 0xEE2F2DD5L;
                }
            }
        }
        for (g_49 = 0; (g_49 <= 3); g_49 += 1)
        {
            short l_311 = 0x4816L;
            g_145 = 0x888E8E41L;
            p_93 = g_145;
            p_93 = (l_198[5][9][2] && (g_180 & ((safe_mod_func_uint16_t_u_u((g_314 = ((((p_93 <= (g_4 , ((safe_add_func_uint32_t_u_u(l_311, (~g_234))) <= p_93))) & ((safe_mod_func_int32_t_s_s((g_4 >= (!g_62)), g_145)) | 255UL)) ^ 1L) <= (-2L))), l_198[5][3][1])) > p_93)));
            l_296 = 0x3CAC74BCL;
        }
    }
    g_145 = (((g_49 = g_180) == g_145) == (((l_123[3][5][3] | (g_314 , (((l_315 = l_123[8][0][1]) ^ ((((safe_add_func_uint32_t_u_u(l_198[5][3][1], (safe_lshift_func_int16_t_s_u((0xE61A9738L == p_90), (safe_sub_func_uint8_t_u_u((p_90 > 7L), g_314)))))) ^ p_93) ^ l_197) >= l_322)) & 1L))) < 0x80L) , l_197));
    return p_90;
}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_49, "g_49", print_hash_value);
    transparent_crc(g_62, "g_62", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_111[i], "g_111[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_142, "g_142", print_hash_value);
    transparent_crc(g_145, "g_145", print_hash_value);
    transparent_crc(g_166, "g_166", print_hash_value);
    transparent_crc(g_180, "g_180", print_hash_value);
    transparent_crc(g_234, "g_234", print_hash_value);
    transparent_crc(g_314, "g_314", print_hash_value);
    transparent_crc(g_358, "g_358", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_379[i][j][k], "g_379[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_392, "g_392", print_hash_value);
    transparent_crc(g_407, "g_407", print_hash_value);
    transparent_crc(g_410, "g_410", print_hash_value);
    transparent_crc(g_419, "g_419", print_hash_value);
    transparent_crc(g_433, "g_433", print_hash_value);
    transparent_crc(g_434, "g_434", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_447[i][j][k], "g_447[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_570, "g_570", print_hash_value);
    transparent_crc(g_572, "g_572", print_hash_value);
    transparent_crc(g_592, "g_592", print_hash_value);
    transparent_crc(g_594, "g_594", print_hash_value);
    transparent_crc(g_637, "g_637", print_hash_value);
    transparent_crc(g_701, "g_701", print_hash_value);
    transparent_crc(g_715, "g_715", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_743[i], "g_743[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_770, "g_770", print_hash_value);
    transparent_crc(g_844, "g_844", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 10; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_860[i][j][k], "g_860[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_912, "g_912", print_hash_value);
    transparent_crc(g_925, "g_925", print_hash_value);
    transparent_crc(g_963, "g_963", print_hash_value);
    transparent_crc(g_971, "g_971", print_hash_value);
    transparent_crc(g_1230, "g_1230", print_hash_value);
    transparent_crc(g_1267, "g_1267", print_hash_value);
    transparent_crc(g_1392, "g_1392", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_1393[i][j], "g_1393[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_1464, "g_1464", print_hash_value);
    transparent_crc(g_1568, "g_1568", print_hash_value);
    transparent_crc(g_1626, "g_1626", print_hash_value);
    transparent_crc(g_1839, "g_1839", print_hash_value);
    transparent_crc(g_2011, "g_2011", print_hash_value);
    transparent_crc(g_2024, "g_2024", print_hash_value);
    transparent_crc(g_2071, "g_2071", print_hash_value);
    transparent_crc(g_2364, "g_2364", print_hash_value);
    transparent_crc(g_2420, "g_2420", print_hash_value);
    transparent_crc(g_2504, "g_2504", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_2635[i], "g_2635[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_2733, "g_2733", print_hash_value);
    transparent_crc(g_2868, "g_2868", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_3078[i], "g_3078[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_3236, "g_3236", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_3282[i], "g_3282[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_3294, "g_3294", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
