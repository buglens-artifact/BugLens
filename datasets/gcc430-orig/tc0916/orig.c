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



static unsigned g_44 = 0xE4D8D955L;
static unsigned short g_45[6][4][1] = {{{0x7207L},{7UL},{0x7207L},{65535UL}},{{0x7207L},{7UL},{0x7207L},{65535UL}},{{0x7207L},{7UL},{0x7207L},{65535UL}},{{0x7207L},{7UL},{0x7207L},{65535UL}},{{0x7207L},{7UL},{0x7207L},{65535UL}},{{0x7207L},{7UL},{0x7207L},{65535UL}}};
static unsigned char g_57 = 0xEEL;
static short g_76 = 0x4D99L;
static short g_78 = 0L;
static unsigned char g_82 = 0xD9L;
static short g_84 = 0xB5B4L;
static int g_85 = 0xFD71F6E6L;
static int g_103[9][3][5] = {{{0x4F9076B3L,(-10L),(-1L),(-10L),0x4F9076B3L},{0x6846FFD3L,0xB275DCB4L,0xF8E48205L,0x75EB9154L,(-5L)},{0x6490A06BL,1L,0x7FB9BE98L,0x7FB9BE98L,1L}},{{0x21D6FFC8L,(-9L),0L,0xB275DCB4L,(-5L)},{(-10L),0x7FB9BE98L,1L,0x7FB9BE98L,1L},{0xB275DCB4L,0xB275DCB4L,0x21D6FFC8L,0L,0xA32D9FB0L}},{{0x1186C96EL,0x5C855A40L,8L,0x4F9076B3L,0x4F9076B3L},{0L,(-9L),0L,0x6846FFD3L,(-9L)},{8L,0x5C855A40L,0x1186C96EL,0x6490A06BL,(-10L)}},{{0x21D6FFC8L,0xB275DCB4L,0xB275DCB4L,0x21D6FFC8L,0L},{1L,(-1L),0x1186C96EL,(-10L),0x5C855A40L},{0x75EB9154L,(-5L),0L,(-5L),0x75EB9154L}},{{(-1L),0x6490A06BL,8L,(-10L),1L},{0x44A889BFL,0xF8E48205L,0x21D6FFC8L,0x21D6FFC8L,0xF8E48205L},{0x4F9076B3L,0x1186C96EL,1L,0x6490A06BL,1L}},{{(-5L),0x21D6FFC8L,0x75EB9154L,0x6846FFD3L,0x75EB9154L},{1L,1L,(-1L),0x4F9076B3L,0x5C855A40L},{(-5L),0xA32D9FB0L,0x44A889BFL,0L,0L}},{{0x4F9076B3L,(-6L),0x4F9076B3L,0x7FB9BE98L,(-10L)},{0x44A889BFL,0xA32D9FB0L,(-5L),0xF8E48205L,(-9L)},{(-1L),1L,1L,(-1L),0x4F9076B3L}},{{0x75EB9154L,0x21D6FFC8L,(-5L),(-9L),0xA32D9FB0L},{1L,0x1186C96EL,0x4F9076B3L,0x1186C96EL,1L},{0x21D6FFC8L,0xF8E48205L,0x21D6FFC8L,0x44A889BFL,(-9L)}},{{(-1L),0x7FB9BE98L,0x1186C96EL,0x1186C96EL,0x7FB9BE98L},{0xB275DCB4L,0xA32D9FB0L,0xF8E48205L,0x6846FFD3L,(-9L)},{0x5C855A40L,0x1186C96EL,0x6490A06BL,(-10L),0x6490A06BL}}};
static int *g_102 = &g_103[6][0][4];
static const unsigned char *g_106 = &g_82;
static const unsigned char **g_105 = &g_106;
static unsigned char *g_115 = &g_57;
static unsigned char **g_114 = &g_115;
static unsigned g_119 = 4294967289UL;
static const unsigned short g_138 = 65535UL;
static int g_146 = (-3L);
static unsigned char g_157 = 4UL;
static char g_171 = 0L;
static int g_196 = 0x8A250D85L;
static unsigned short *g_256 = &g_45[4][0][0];
static unsigned short **g_255 = &g_256;
static const char *g_266 = (void*)0;
static const char **g_265 = &g_266;
static int g_272 = 1L;
static unsigned char g_313[6] = {249UL,249UL,249UL,249UL,249UL,249UL};
static unsigned g_314 = 0xF62C58C6L;
static int *g_321[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
static unsigned short **g_328 = &g_256;
static unsigned **g_348 = (void*)0;
static int **g_365 = (void*)0;
static char g_377 = 7L;
static unsigned g_402[1][3] = {{4294967295UL,4294967295UL,4294967295UL}};
static unsigned char ***g_408 = &g_114;
static unsigned char ****g_407 = &g_408;
static unsigned short g_495 = 0x329EL;
static int *g_535 = &g_272;
static char *g_559 = &g_377;
static char **g_558 = &g_559;
static char ***g_557 = &g_558;
static unsigned short g_565 = 65533UL;
static unsigned short g_566 = 8UL;
static unsigned short g_567 = 0x0AA2L;
static unsigned short g_568[10][5] = {{1UL,0xE20BL,65527UL,0x17CFL,65531UL},{0x0D26L,0x70D8L,65527UL,0x9A1FL,0x9A1FL},{65527UL,1UL,65527UL,0x6BD0L,2UL},{0x7737L,0UL,65527UL,2UL,0x17CFL},{0x76B4L,0xCDA5L,65527UL,65531UL,0x6BD0L},{1UL,0xE20BL,65527UL,0x17CFL,65531UL},{0x0D26L,0x70D8L,65527UL,0x9A1FL,0x9A1FL},{65527UL,1UL,65527UL,0x6BD0L,2UL},{0x7737L,0UL,65527UL,2UL,0x17CFL},{0x76B4L,0xCDA5L,65527UL,65531UL,0x6BD0L}};
static unsigned short g_569[6] = {65535UL,65535UL,65535UL,65535UL,65535UL,65535UL};
static unsigned short g_570 = 0x2490L;
static unsigned short g_571[3] = {8UL,8UL,8UL};
static unsigned short g_572 = 0x43F9L;
static unsigned short g_573 = 0x0A66L;
static unsigned short g_574 = 0xA452L;
static unsigned short g_575 = 0UL;
static unsigned short g_576[6][7][4] = {{{0xF33BL,0xBE90L,0xF0B7L,0UL},{0x9CCCL,65535UL,0x351CL,65535UL},{65535UL,4UL,0x5D95L,0xCB32L},{0xEBB6L,0UL,0x7F02L,0x3006L},{0x92FBL,0x5CBEL,65528UL,0UL},{0x92FBL,0xF0B7L,0x7F02L,0x92FBL},{0xEBB6L,0UL,0x5D95L,0x7F02L}},{{65535UL,0x4B65L,0x351CL,0x33BBL},{0x9CCCL,0x1461L,0xF0B7L,0x194EL},{0xF33BL,0x5CBEL,0xC3ECL,0x7F02L},{0xF968L,65535UL,65527UL,0xE583L},{0UL,0xF0B7L,0x5D95L,65535UL},{0x713BL,65535UL,0x3006L,0x3006L},{65531UL,65531UL,65527UL,0x194EL}},{{0x92FBL,4UL,0UL,0xBE90L},{0xF33BL,0UL,0x713BL,0UL},{0UL,0UL,0x351CL,0xBE90L},{0UL,4UL,3UL,0x194EL},{0xEBB6L,65531UL,0xF0B7L,0x3006L},{0xF968L,65535UL,65528UL,65535UL},{0xE583L,0xF0B7L,0x713BL,0xE583L}},{{0xEBB6L,65535UL,0x3006L,0x7F02L},{0xBE90L,0x5CBEL,0x351CL,0x194EL},{65531UL,0x1461L,0x7F02L,0UL},{65533UL,0xBE90L,65533UL,3UL},{0x4B65L,0x33BBL,0UL,65535UL},{0x92FBL,0x5D95L,0xEBB6L,0x33BBL},{0x3006L,65535UL,0xEBB6L,0x1461L}},{{0x92FBL,0xF968L,0UL,0x9CCCL},{0x4B65L,0x713BL,65533UL,0x194EL},{65533UL,0x194EL,3UL,4UL},{0xE583L,0xCB32L,0x80E7L,0x33BBL},{0xCB32L,0x713BL,0x1461L,0UL},{0UL,0x92FBL,0x3006L,0x1461L},{0x4B65L,0xBE90L,1UL,0xCB32L}},{{0x5CBEL,0x5D95L,0x5D95L,0x5CBEL},{0UL,0xCB32L,0xEBB6L,3UL},{0x33BBL,0UL,0x80E7L,0x9CCCL},{0xF968L,0xF33BL,0x3006L,0x9CCCL},{65533UL,0UL,4UL,3UL},{65535UL,0xCB32L,0UL,0x5CBEL},{0xE583L,0x5D95L,0x1461L,0xCB32L}}};
static unsigned short g_577 = 65532UL;
static unsigned short g_578 = 1UL;
static unsigned short g_579 = 0x2FFDL;
static unsigned short g_580 = 0x387DL;
static unsigned short g_581 = 0x1A25L;
static unsigned short g_582 = 0UL;
static unsigned short g_583 = 65526UL;
static unsigned short g_584 = 0xCB51L;
static unsigned short g_585 = 0x85BBL;
static unsigned short g_586[5] = {0x49C0L,0x49C0L,0x49C0L,0x49C0L,0x49C0L};
static unsigned short g_587 = 0x1B69L;
static unsigned short g_588 = 0UL;
static unsigned short g_589 = 0xF0DAL;
static unsigned short g_590[7] = {0xF4F6L,0xF4F6L,0xF4F6L,0xF4F6L,0xF4F6L,0xF4F6L,0xF4F6L};
static unsigned short g_591 = 0x0918L;
static unsigned short g_592 = 0UL;
static unsigned short g_593 = 1UL;
static unsigned short g_594 = 0x6161L;
static unsigned short g_595 = 0UL;
static unsigned short g_596 = 3UL;
static unsigned short g_597 = 0x45E2L;
static unsigned short g_598 = 65531UL;
static unsigned short g_599 = 0xB4C7L;
static unsigned short g_600 = 0x7F15L;
static unsigned short g_601 = 1UL;
static unsigned short g_602 = 0xA64AL;
static unsigned short g_603 = 0UL;
static unsigned short g_604 = 0UL;
static unsigned short g_605 = 65533UL;
static unsigned short g_606 = 0x470DL;
static unsigned short g_607 = 0x2A33L;
static unsigned short g_608 = 0x47D8L;
static unsigned short g_609 = 9UL;
static unsigned short g_610[1][3][8] = {{{5UL,0x5F53L,0x5F53L,5UL,0UL,5UL,0x5F53L,0x5F53L},{0x5F53L,0UL,5UL,5UL,5UL,65527UL,5UL,5UL},{0x5F53L,5UL,0x5F53L,65527UL,65527UL,0x5F53L,5UL,0x5F53L}}};
static unsigned short g_611 = 1UL;
static unsigned short g_612 = 0xDED9L;
static unsigned short g_613 = 5UL;
static unsigned short g_614[1] = {0x63D0L};
static unsigned short g_615 = 2UL;
static unsigned short g_616[5] = {0UL,0UL,0UL,0UL,0UL};
static unsigned short g_617 = 4UL;
static unsigned short g_618 = 5UL;
static unsigned short g_619[4][5] = {{0xEC87L,0UL,0xEC87L,0UL,0xEC87L},{7UL,0x6748L,0x6748L,7UL,7UL},{65535UL,0UL,65535UL,0UL,65535UL},{7UL,7UL,0x6748L,0x6748L,7UL}};
static unsigned short g_620 = 65531UL;
static unsigned short g_621 = 4UL;
static unsigned short g_622[10] = {0x4B44L,0x8D49L,0x8D49L,0x4B44L,0x8D49L,0x8D49L,0x4B44L,0x8D49L,0x8D49L,0x4B44L};
static unsigned short g_623 = 1UL;
static unsigned short g_624[6] = {0xA5E3L,0xBEEFL,0xA5E3L,0xA5E3L,0xBEEFL,0xA5E3L};
static unsigned short g_625[6][9][3] = {{{0x6E47L,0xD7ECL,0x6E47L},{0x94E7L,0UL,0x9A36L},{0xCD68L,65535UL,1UL},{0xE008L,0UL,0x2666L},{1UL,0xD7ECL,7UL},{0xE008L,0x2D7AL,0xE008L},{0xCD68L,0x67DEL,7UL},{0x94E7L,0x42F0L,0x2666L},{0x6E47L,0x67DEL,1UL}},{{0x2666L,0x2D7AL,0x9A36L},{0x6E47L,0xD7ECL,0x6E47L},{0x94E7L,0UL,0x9A36L},{0xCD68L,65535UL,1UL},{0xE008L,65526UL,0x9A36L},{7UL,0x67DEL,0xCD68L},{0UL,0UL,0UL},{0x6E47L,3UL,0xCD68L},{0xE008L,0xA40CL,0x9A36L}},{{7UL,3UL,7UL},{0x9A36L,0UL,0x94E7L},{7UL,0x67DEL,7UL},{0xE008L,65526UL,0x94E7L},{0x6E47L,0x384DL,7UL},{0UL,65526UL,0x9A36L},{7UL,0x67DEL,0xCD68L},{0UL,0UL,0UL},{0x6E47L,3UL,0xCD68L}},{{0xE008L,0xA40CL,0x9A36L},{7UL,3UL,7UL},{0x9A36L,0UL,0x94E7L},{7UL,0x67DEL,7UL},{0xE008L,65526UL,0x94E7L},{0x6E47L,0x384DL,7UL},{0UL,65526UL,0x9A36L},{7UL,0x67DEL,0xCD68L},{0UL,0UL,0UL}},{{0x6E47L,3UL,0xCD68L},{0xE008L,0xA40CL,0x9A36L},{7UL,3UL,7UL},{0x9A36L,0UL,0x94E7L},{7UL,0x67DEL,7UL},{0xE008L,65526UL,0x94E7L},{0x6E47L,0x384DL,7UL},{0UL,65526UL,0x9A36L},{7UL,0x67DEL,0xCD68L}},{{0x373AL,0x94E7L,0x373AL},{65535UL,0x0EFDL,65531UL},{0UL,0x2666L,0UL},{0UL,0x0EFDL,0xB10AL},{0UL,0x94E7L,0x1930L},{0UL,0xAB72L,0UL},{0UL,0xE008L,0x1930L},{65535UL,1UL,0xB10AL},{0x373AL,0xE008L,0UL}}};
static unsigned short g_626 = 0x24F8L;
static unsigned short g_627 = 1UL;
static unsigned short g_628 = 0x62ABL;
static unsigned short g_629 = 0x1516L;
static unsigned short g_630 = 0x79FEL;
static unsigned short g_631 = 1UL;
static unsigned short g_632 = 0x226BL;
static unsigned short g_633[8] = {2UL,0xE1F8L,2UL,0xE1F8L,2UL,0xE1F8L,2UL,0xE1F8L};
static unsigned short g_634 = 0x1FE2L;
static unsigned short g_635 = 0x7079L;
static unsigned short * const g_564[9][6][4] = {{{&g_591,&g_584,&g_573,&g_628},{&g_580,&g_566,&g_615,&g_596},{(void*)0,&g_581,&g_621,&g_592},{&g_596,&g_629,&g_595,(void*)0},{(void*)0,&g_571[1],&g_597,&g_611},{(void*)0,&g_614[0],&g_629,(void*)0}},{{&g_612,(void*)0,&g_627,&g_627},{&g_597,&g_597,&g_592,&g_580},{&g_607,&g_599,&g_585,&g_566},{&g_584,&g_565,(void*)0,&g_585},{&g_596,&g_565,(void*)0,&g_566},{&g_565,&g_599,&g_625[5][1][1],&g_580}},{{&g_570,&g_597,(void*)0,&g_627},{&g_608,(void*)0,&g_634,(void*)0},{&g_609,&g_614[0],&g_615,&g_611},{&g_575,&g_600,&g_593,(void*)0},{(void*)0,&g_589,&g_569[2],&g_616[0]},{&g_631,&g_608,&g_582,&g_618}},{{&g_623,(void*)0,&g_626,&g_588},{&g_582,&g_610[0][2][6],&g_566,&g_587},{(void*)0,&g_595,&g_607,(void*)0},{(void*)0,&g_605,(void*)0,(void*)0},{&g_581,&g_583,&g_579,(void*)0},{(void*)0,&g_596,&g_580,&g_634}},{{&g_583,&g_566,&g_612,&g_590[2]},{&g_599,(void*)0,&g_610[0][2][6],&g_576[5][5][1]},{&g_577,&g_610[0][2][6],&g_571[1],&g_598},{&g_590[2],(void*)0,&g_635,&g_580},{&g_633[4],(void*)0,&g_593,(void*)0},{&g_570,(void*)0,&g_579,(void*)0}},{{&g_610[0][2][6],&g_608,&g_603,&g_593},{&g_613,&g_604,&g_589,&g_567},{&g_582,&g_631,&g_605,&g_576[5][5][1]},{&g_582,&g_620,&g_589,(void*)0},{&g_613,&g_576[5][5][1],&g_603,(void*)0},{&g_610[0][2][6],&g_633[4],&g_579,&g_595}},{{&g_570,&g_583,&g_593,(void*)0},{&g_633[4],&g_566,&g_635,&g_627},{&g_590[2],&g_582,&g_571[1],&g_624[1]},{&g_635,&g_617,&g_600,&g_574},{&g_587,&g_631,&g_603,&g_568[0][3]},{&g_570,&g_606,&g_568[0][3],(void*)0}},{{&g_590[2],&g_613,(void*)0,&g_586[1]},{(void*)0,&g_588,&g_601,(void*)0},{&g_583,&g_594,(void*)0,&g_597},{&g_629,&g_628,(void*)0,(void*)0},{&g_569[2],&g_629,&g_613,(void*)0},{&g_611,(void*)0,&g_569[2],&g_610[0][2][6]}},{{&g_617,&g_593,&g_626,&g_592},{&g_590[2],&g_618,&g_578,&g_602},{&g_593,(void*)0,&g_632,&g_576[5][5][1]},{&g_624[1],&g_569[2],(void*)0,&g_584},{&g_622[5],&g_628,&g_628,&g_622[5]},{&g_587,&g_581,(void*)0,&g_627}}};
static unsigned short * const *g_563 = &g_564[5][3][3];
static unsigned short g_638 = 0x374AL;
static short *g_654 = &g_78;
static short **g_653 = &g_654;
static int * const **g_669 = (void*)0;
static unsigned short g_672 = 0x35A8L;
static unsigned char g_681 = 0x2DL;
static const unsigned short *g_701 = &g_138;
static const unsigned short **g_700 = &g_701;
static const unsigned short ***g_699[1] = {&g_700};
static unsigned char **g_748 = &g_115;
static unsigned *g_886[5] = {&g_119,&g_119,&g_119,&g_119,&g_119};
static unsigned **g_885[1] = {&g_886[4]};
static int *** const g_965 = (void*)0;
static int *** const *g_964[6][8] = {{&g_965,&g_965,&g_965,&g_965,(void*)0,&g_965,&g_965,(void*)0},{(void*)0,&g_965,&g_965,(void*)0,&g_965,&g_965,&g_965,&g_965},{(void*)0,&g_965,&g_965,(void*)0,(void*)0,&g_965,&g_965,(void*)0},{&g_965,&g_965,&g_965,&g_965,(void*)0,&g_965,&g_965,(void*)0},{(void*)0,&g_965,&g_965,(void*)0,&g_965,&g_965,&g_965,&g_965},{(void*)0,&g_965,&g_965,(void*)0,(void*)0,&g_965,&g_965,(void*)0}};
static const int g_973 = (-5L);
static const int *g_974 = &g_103[8][2][1];
static int ***g_986 = (void*)0;
static int ****g_985 = &g_986;
static unsigned g_1001[3] = {0xA47CA57CL,0xA47CA57CL,0xA47CA57CL};



static short func_1(void);
static unsigned char func_2(const unsigned p_3, unsigned char p_4);
static unsigned short func_5(const unsigned short p_6, unsigned short p_7, int p_8);
static int func_10(unsigned short p_11, char p_12);
static char func_13(unsigned char p_14, int p_15, short p_16);
static unsigned char func_17(int p_18, unsigned char p_19);
static short func_27(int p_28);
static int func_31(unsigned p_32, int p_33, unsigned p_34, int p_35, unsigned char p_36);
static int func_37(unsigned short p_38);
static unsigned short func_39(unsigned short p_40, short p_41, int p_42, int p_43);
static short func_1(void)
{
    const short l_9 = 0xE6E7L;
    int *l_360[9][2][7] = {{{(void*)0,&g_85,&g_85,&g_85,&g_85,&g_85,&g_85},{&g_196,&g_196,&g_85,(void*)0,&g_85,(void*)0,(void*)0}},{{&g_196,&g_196,&g_196,&g_85,&g_196,&g_196,&g_196},{&g_85,(void*)0,&g_196,&g_85,&g_85,&g_85,&g_85}},{{&g_85,(void*)0,&g_196,(void*)0,&g_85,&g_196,&g_85},{&g_85,&g_85,&g_196,(void*)0,&g_85,&g_85,&g_196}},{{&g_196,&g_85,&g_196,&g_196,&g_196,&g_85,&g_196},{&g_85,(void*)0,&g_85,&g_196,&g_196,&g_85,(void*)0}},{{&g_85,&g_85,&g_85,&g_85,(void*)0,&g_85,&g_85},{&g_85,&g_196,&g_85,&g_196,&g_85,&g_85,&g_196}},{{&g_196,(void*)0,&g_85,&g_85,&g_196,(void*)0,&g_196},{&g_85,&g_85,&g_85,&g_85,(void*)0,&g_85,&g_85}},{{&g_85,&g_196,&g_196,&g_196,(void*)0,&g_196,&g_196},{&g_85,&g_85,(void*)0,&g_196,&g_85,&g_85,&g_85}},{{&g_196,&g_85,&g_85,&g_196,&g_85,&g_85,&g_196},{(void*)0,&g_196,&g_85,&g_196,&g_85,&g_85,&g_85}},{{(void*)0,&g_85,&g_85,&g_85,(void*)0,&g_85,&g_85},{&g_85,&g_196,&g_85,&g_196,(void*)0,(void*)0,&g_196}}};
    short l_361 = 0x78BDL;
    int l_533[9][10][2] = {{{0L,(-6L)},{0L,0x5272A57AL},{0xF8EA9105L,0x5272A57AL},{0L,(-6L)},{0L,1L},{(-3L),0x3FD691FDL},{0x0626CDAEL,0L},{(-1L),(-1L)},{0x3FD691FDL,0xA45A9656L},{1L,0xC86AD2A4L}},{{0x92AF5E9EL,1L},{0L,0x66392DA1L},{(-6L),0x4BE54B9EL},{(-1L),(-4L)},{0x80AB89A5L,0xD5AED165L},{0x6A4278E4L,0x6A4278E4L},{0x0B095D4FL,1L},{0x66392DA1L,0xB4F2097EL},{0x4C95A782L,0xF8EA9105L},{1L,0x4C95A782L}},{{0x4BFDEA2EL,0x80AB89A5L},{0L,(-1L)},{0xC86AD2A4L,0L},{(-1L),0xECEFA8F7L},{0x0626CDAEL,(-1L)},{0x5272A57AL,0x4C95A782L},{0x4C95A782L,(-4L)},{(-3L),0x6A4278E4L},{0x4BE54B9EL,0x3FD691FDL},{9L,0x0626CDAEL}},{{0xD52A01EEL,0x711DB81BL},{0x66392DA1L,0x07FB9234L},{(-1L),0xB4F2097EL},{1L,1L},{0L,0xD52A01EEL},{0xA45A9656L,1L},{1L,0xC86AD2A4L},{(-1L),9L},{0x9C91D0EAL,0xF8EA9105L},{0L,0xF8EA9105L}},{{0x9C91D0EAL,9L},{(-1L),0xC86AD2A4L},{1L,1L},{0xA45A9656L,0xD52A01EEL},{0L,1L},{1L,0xB4F2097EL},{(-1L),0x07FB9234L},{0x66392DA1L,0x711DB81BL},{0xD52A01EEL,0x0626CDAEL},{9L,0x3FD691FDL}},{{0x4BE54B9EL,0x6A4278E4L},{(-3L),(-4L)},{0x4C95A782L,0x4C95A782L},{0x5272A57AL,(-1L)},{0x0626CDAEL,0xECEFA8F7L},{(-1L),0L},{0xC86AD2A4L,(-1L)},{0L,(-3L)},{0L,(-1L)},{0xC86AD2A4L,0L}},{{(-1L),0xECEFA8F7L},{0x0626CDAEL,(-1L)},{0x5272A57AL,0x4C95A782L},{0x4C95A782L,(-4L)},{(-3L),0x6A4278E4L},{0x4BE54B9EL,0x3FD691FDL},{9L,0x0626CDAEL},{0xD52A01EEL,0x711DB81BL},{0x66392DA1L,0xD5AED165L},{0L,0xECEFA8F7L}},{{(-1L),0xC86AD2A4L},{0x9C91D0EAL,0x80AB89A5L},{0xB4F2097EL,(-1L)},{0x711DB81BL,0x07FB9234L},{1L,(-1L)},{0x92AF5E9EL,0L},{(-6L),0L},{0x92AF5E9EL,(-1L)},{1L,0x07FB9234L},{0x711DB81BL,(-1L)}},{{0xB4F2097EL,0x80AB89A5L},{0x9C91D0EAL,0xC86AD2A4L},{(-1L),0xECEFA8F7L},{0L,0xD5AED165L},{0x0626CDAEL,0x0B095D4FL},{0x80AB89A5L,0xA45A9656L},{(-1L),1L},{0x3FD691FDL,0x4C95A782L},{1L,0x6A4278E4L},{(-1L),(-1L)}}};
    int l_814 = (-4L);
    int *l_815 = &g_103[0][2][1];
    int l_816 = (-1L);
    char **l_994 = (void*)0;
    unsigned short *l_995 = &g_603;
    unsigned short *l_996 = &g_638;
    const int l_1004 = (-1L);
    int *l_1008 = &g_146;
    int i, j, k;
    (*l_815) = (((**g_748) = (func_2((9L <= (func_5(l_9, l_9, (func_10((func_13(func_17((safe_unary_minus_func_int8_t_s(((safe_add_func_int32_t_s_s(((*l_815) = ((((safe_rshift_func_int16_t_s_u((safe_lshift_func_int16_t_s_u((func_27((l_533[7][6][0] = (((safe_add_func_uint16_t_u_u((func_31(l_9, (l_361 = func_37((func_39(g_44, l_9, (g_45[4][0][0] = (l_9 ^ g_44)), (g_44 == l_9)) >= 1L))), g_314, l_9, l_9) <= l_9), l_9)) != l_9) && 0xE6L))) < 0xA88EL), l_814)), (*g_701))) == l_9) == 65535UL) < 0xA8L)), 0L)) == (-3L)))), l_816), g_622[5], l_816) < l_816), l_814) ^ 0xE2FD1133L)) & g_616[0])), l_816) && (*l_815))) | l_816);
    (*l_815) = func_5((0x4DL | (((**g_653) = (l_994 == ((*g_557) = (*g_557)))) | (((*l_815) && func_17(((safe_add_func_int16_t_s_s((*l_815), (*l_815))) && ((*g_974) < ((~((safe_add_func_int32_t_s_s(((*g_106) == (*l_815)), (*l_815))) | 65531UL)) > 4294967295UL))), (*g_106))) | 0xB8L))), (*l_815), g_1001[1]);
    l_533[7][6][0] = ((!((*l_815) && (l_1004 > (**g_748)))) && ((*l_815) = ((safe_unary_minus_func_int8_t_s(((*l_815) == (*l_815)))) == (((*l_1008) = func_13(((**g_748) = ((*g_559) || (safe_add_func_uint16_t_u_u(0x273BL, 7UL)))), (*l_815), (*l_815))) >= 7UL))));
    return (*g_654);
}







static unsigned char func_2(const unsigned p_3, unsigned char p_4)
{
    unsigned **l_884 = (void*)0;
    int l_901 = 0xEFA76C6BL;
    int l_909 = 7L;
    int *l_945 = &l_909;
    for (g_603 = 0; (g_603 < 8); ++g_603)
    {
        short l_904 = 5L;
        int l_906 = 0x4A344070L;
        int *l_922 = (void*)0;
        const int *l_982 = &l_909;
        int *l_989[10][10] = {{&l_901,&l_906,(void*)0,&l_901,(void*)0,(void*)0,&l_906,(void*)0,(void*)0,&l_901},{&l_901,(void*)0,&l_901,&l_901,&l_909,&l_906,&l_901,&l_909,(void*)0,&g_103[3][2][4]},{&l_906,&l_901,&l_909,(void*)0,&g_103[3][2][4],&g_103[3][2][4],(void*)0,&l_909,&l_901,&l_906},{&g_146,&g_272,&l_901,&l_906,(void*)0,&l_901,(void*)0,(void*)0,&l_906,(void*)0},{&g_103[6][0][4],&l_901,(void*)0,&g_272,(void*)0,&l_901,&g_103[6][0][4],&g_103[3][2][4],&g_272,&l_906},{(void*)0,(void*)0,&l_901,&l_901,&g_272,&l_901,&l_906,&l_906,&l_901,&g_272},{&g_272,&g_146,&g_146,&g_272,&l_901,&l_906,(void*)0,&l_901,(void*)0,(void*)0},{&l_909,&l_901,(void*)0,(void*)0,&g_146,&l_901,&g_146,(void*)0,(void*)0,&l_901},{&g_272,&g_103[6][0][4],&l_909,&g_272,&l_901,&g_103[3][2][4],&l_906,(void*)0,&l_901,&l_901},{&g_103[6][0][4],(void*)0,&g_103[3][2][4],&l_901,&l_901,&g_103[3][2][4],(void*)0,&g_103[6][0][4],&g_272,&l_906}};
        unsigned *l_990 = &g_119;
        int l_993 = (-1L);
        int i, j;
        if (((l_884 != g_885[0]) && ((*g_654) < ((safe_unary_minus_func_int32_t_s(p_4)) < func_17(p_3, p_4)))))
        {
            for (g_85 = (-14); (g_85 == 12); g_85 = safe_add_func_uint32_t_u_u(g_85, 1))
            {
                int *l_902[2][6] = {{&g_146,&g_146,&g_103[6][0][4],&g_146,&g_146,&g_103[6][0][4]},{&g_146,&g_146,&g_103[6][0][4],&g_146,&g_146,&g_103[6][0][4]}};
                int i, j;
                for (g_272 = 0; (g_272 <= (-21)); g_272 = safe_sub_func_int8_t_s_s(g_272, 5))
                {
                    int *l_894 = &g_103[5][0][3];
                    (*l_894) = (65535UL | ((-7L) || (-1L)));
                }
                for (g_629 = 0; (g_629 <= 34); g_629++)
                {
                    for (g_598 = 0; (g_598 == 53); ++g_598)
                    {
                        int * const *l_900[9] = {&g_321[8],&g_321[1],&g_321[8],&g_321[1],&g_321[8],&g_321[1],&g_321[8],&g_321[1],&g_321[8]};
                        int * const * const *l_899 = &l_900[0];
                        int **l_903 = &l_902[1][4];
                        int i;
                        l_901 = ((void*)0 != l_899);
                        if (p_3)
                            continue;
                        if (p_4)
                            continue;
                        (*l_903) = l_902[1][4];
                    }
                    l_904 = 0x46307696L;
                }
            }
        }
        else
        {
            int *l_905[5] = {&g_272,&g_272,&g_272,&g_272,&g_272};
            int l_910 = (-1L);
            unsigned *l_911 = &g_119;
            int **l_975 = &l_922;
            int i;
            if ((~func_5(p_4, ((l_906 = (l_901 = (l_901 > p_3))) <= (l_909 = ((*l_911) = ((p_4 || ((((l_904 && ((safe_add_func_int8_t_s_s((***g_557), p_3)) || 0xADL)) > 0L) != 0x60E0L) ^ 0xAD92FB62L)) == (***g_557))))), p_3)))
            {
                unsigned short l_920 = 0x5808L;
                int *l_921 = &l_906;
                unsigned char ***l_943 = &g_114;
                int **l_947 = &l_922;
                unsigned char **l_958 = &g_115;
                short l_962 = 0x35F7L;
                if (l_909)
                {
                    unsigned l_917 = 4UL;
                    int l_937 = 0L;
                    int *l_944 = &g_272;
                    int **l_948 = (void*)0;
                    int **l_949 = &g_321[9];
                    if (((*g_557) != (void*)0))
                    {
                        unsigned short l_912[3];
                        int *l_918 = (void*)0;
                        int **l_919 = &l_918;
                        int i;
                        for (i = 0; i < 3; i++)
                            l_912[i] = 65535UL;
                        l_912[1] = p_3;
                        l_917 = ((**g_653) == ((safe_mod_func_uint16_t_u_u(0UL, (((-1L) && 4294967286UL) || l_909))) < (((*g_115) & (**g_558)) && 255UL)));
                        (*l_919) = l_918;
                    }
                    else
                    {
                        if (p_3)
                            break;
                    }
                    if (l_920)
                    {
                        l_922 = (l_921 = &l_906);
                    }
                    else
                    {
                        short *l_936 = &l_904;
                        int l_938 = (-10L);
                        int **l_946 = &l_905[1];
                        l_937 = (safe_rshift_func_uint8_t_u_u(p_4, (((*g_654) | ((*l_936) = (0L >= (func_17(((safe_lshift_func_uint8_t_u_u((*g_115), 4)) || (((*l_911) = (safe_mod_func_int8_t_s_s(((***g_557) = (l_917 && (safe_add_func_uint8_t_u_u(0UL, ((*g_115) = (safe_lshift_func_int8_t_s_u((safe_unary_minus_func_uint16_t_u((safe_sub_func_int32_t_s_s(p_4, ((*l_921) = 0xD48C2E13L))))), (*g_106)))))))), p_3))) & 0xD8C586E6L)), p_3) <= p_3)))) <= 0x838D4A26L)));
                        (*l_921) = ((((l_938 | (***g_557)) & (safe_rshift_func_int16_t_s_u((**g_653), 14))) > (safe_rshift_func_uint16_t_u_s((func_17(p_3, ((((*l_911) = ((void*)0 != l_943)) && (*l_921)) | p_3)) == (*g_654)), 10))) == p_3);
                        l_945 = l_944;
                        l_947 = (l_946 = (void*)0);
                    }
                    (*l_949) = &g_272;
                    if (p_4)
                        break;
                }
                else
                {
                    int l_950[1];
                    char l_951 = (-7L);
                    int i;
                    for (i = 0; i < 1; i++)
                        l_950[i] = 0xA172DAB0L;
                    for (g_607 = 0; (g_607 <= 5); g_607 += 1)
                    {
                        l_951 = ((*l_921) = ((*l_945) = l_950[0]));
                        (*l_947) = &g_146;
                        if (p_4)
                            break;
                    }
                    for (g_638 = 10; (g_638 != 55); g_638 = safe_add_func_uint16_t_u_u(g_638, 3))
                    {
                        unsigned short *l_959 = &g_45[3][1][0];
                        unsigned short *l_960[1][10] = {{&g_605,&g_605,&g_632,&g_568[6][4],&g_632,&g_605,&g_605,&g_632,&g_568[6][4],&g_632}};
                        int l_961[1][6] = {{0x65C19015L,0x65C19015L,0x65C19015L,0x65C19015L,0x65C19015L,0x65C19015L}};
                        unsigned l_963 = 0x272BEF91L;
                        int *** const **l_966 = (void*)0;
                        int *** const **l_967 = &g_964[4][1];
                        int i, j;
                        (*l_945) = ((func_10(((safe_rshift_func_int8_t_s_u(func_10((*g_701), (((**g_653) = ((1UL != l_951) & 1L)) <= l_963)), 2)) <= 0x3A7B02EBL), l_961[0][5]) <= p_3) <= p_3);
                        (*l_945) = (p_3 || ((***g_557) && (((*l_967) = g_964[1][6]) != &g_965)));
                    }
                }
            }
            else
            {
                for (g_634 = 0; (g_634 <= 3); g_634 += 1)
                {
                    int *l_968 = &l_909;
                    l_968 = &l_906;
                    for (g_85 = 0; (g_85 <= 4); g_85 += 1)
                    {
                        int **l_969[5][3][6] = {{{&l_905[1],&g_321[4],&g_535,&l_905[2],(void*)0,&g_535},{(void*)0,&l_922,&l_905[3],&l_905[3],&l_905[0],(void*)0},{(void*)0,&l_905[3],&g_321[9],&g_321[7],&l_905[2],&l_905[1]}},{{&g_321[7],&l_905[2],&l_905[1],(void*)0,&l_922,&l_905[1]},{(void*)0,&l_905[2],&g_321[9],(void*)0,&l_905[3],(void*)0},{&l_905[3],&g_321[9],&l_905[3],&g_321[6],&l_905[2],&g_321[9]}},{{&l_905[2],(void*)0,&l_905[3],(void*)0,&l_905[2],(void*)0},{&g_321[9],&l_922,&g_321[9],(void*)0,&g_321[9],&l_905[1]},{(void*)0,&g_321[9],&l_905[1],&l_922,(void*)0,&l_905[1]}},{{&l_905[2],(void*)0,&g_321[9],&l_968,&l_922,(void*)0},{(void*)0,(void*)0,&l_905[3],(void*)0,&g_321[9],&g_321[9]},{&l_905[0],&l_905[3],&l_905[3],&l_922,(void*)0,(void*)0}},{{&g_321[7],(void*)0,&g_321[9],&g_321[9],(void*)0,&l_905[1]},{&g_321[9],(void*)0,&l_905[1],&l_905[3],&l_905[3],&l_905[1]},{&l_905[0],&l_905[0],&g_321[9],&g_321[6],(void*)0,(void*)0}}};
                        const int **l_970 = (void*)0;
                        const int *l_972 = &g_973;
                        const int **l_971 = &l_972;
                        int i, j, k;
                        g_102 = &g_103[6][0][4];
                        g_974 = ((*l_971) = &g_103[2][1][2]);
                    }
                }
            }
            (*l_975) = &g_103[6][0][4];
            for (g_587 = (-17); (g_587 != 11); g_587 = safe_add_func_int16_t_s_s(g_587, 7))
            {
                unsigned short l_983 = 0x1C8BL;
                int *l_988 = &g_272;
                l_922 = &g_272;
                (*l_975) = (void*)0;
                for (g_582 = (-13); (g_582 == 45); g_582++)
                {
                    unsigned char **l_980 = &g_115;
                    const int **l_981[6];
                    int i;
                    for (i = 0; i < 6; i++)
                        l_981[i] = (void*)0;
                    (*l_975) = &g_146;
                    (**g_407) = l_980;
                    l_982 = &g_973;
                    if ((l_983 < (*l_982)))
                    {
                        unsigned l_984 = 4294967295UL;
                        return l_984;
                    }
                    else
                    {
                        int *****l_987 = &g_985;
                        (**l_975) = (((*l_987) = g_985) == &g_986);
                        (*l_975) = l_988;
                        l_988 = l_989[4][3];
                    }
                }
                l_988 = (void*)0;
            }
            g_321[9] = ((*l_975) = &l_901);
        }
        (*l_945) = (((*l_990) = p_4) & ((*l_945) == (*l_982)));
        (*l_945) = (p_3 < (safe_mod_func_int16_t_s_s(p_3, l_993)));
    }
    (*l_945) = func_10(p_4, (*l_945));
    return p_3;
}







static unsigned short func_5(const unsigned short p_6, unsigned short p_7, int p_8)
{
    short l_878 = 0xFBA2L;
    for (g_626 = 0; (g_626 <= 5); g_626 += 1)
    {
        unsigned short l_880 = 1UL;
        for (g_575 = 0; (g_575 <= 5); g_575 += 1)
        {
            int l_881 = 0L;
            for (g_565 = 0; (g_565 <= 9); g_565 += 1)
            {
                int **l_876 = &g_321[5];
                int i;
                (*l_876) = &g_146;
                return g_624[g_626];
            }
            for (p_8 = 2; (p_8 <= 9); p_8 += 1)
            {
                char l_877 = 0x7BL;
                int l_879 = 4L;
                int i;
                l_881 = (((g_313[g_626] & func_13((*g_115), p_7, (l_877 != (g_313[g_626] < 0UL)))) & (+((**g_653) = (l_878 | ((l_879 = 0xE470BD7FL) ^ l_880))))) <= l_880);
            }
        }
    }
    return p_8;
}







static int func_10(unsigned short p_11, char p_12)
{
    unsigned l_829 = 3UL;
    int l_836 = 0x72A0D104L;
    int l_837 = 1L;
    int *l_846 = &g_103[6][0][4];
    int *l_847 = &g_272;
    unsigned char l_850 = 7UL;
    int ***l_857[5];
    int ****l_856 = &l_857[4];
    int i;
    for (i = 0; i < 5; i++)
        l_857[i] = &g_365;
    l_837 = (safe_sub_func_uint16_t_u_u((p_11 <= (safe_sub_func_int16_t_s_s(((safe_mod_func_int32_t_s_s(p_12, (safe_mod_func_int32_t_s_s((safe_rshift_func_int8_t_s_s(((0UL == ((l_829 == ((safe_lshift_func_int16_t_s_s((safe_add_func_uint16_t_u_u((safe_sub_func_int16_t_s_s((0x57E50643L == (l_829 != (**g_105))), p_11)), l_829)), (*g_654))) && 1L)) || 0xBBL)) == p_12), (**g_558))), p_11)))) >= l_829), l_836))), (**g_653)));
    if (((safe_sub_func_int16_t_s_s((safe_add_func_uint32_t_u_u(((safe_rshift_func_uint8_t_u_u(l_836, 2)) == (safe_add_func_int32_t_s_s(((*l_847) = ((*l_846) = (p_11 < p_11))), p_11))), func_17((((safe_sub_func_uint8_t_u_u(0xC7L, p_12)) < p_12) == (0x2DL | ((*g_559) = p_12))), p_11))), l_850)) & 1L))
    {
        int *l_851 = &g_103[6][0][4];
        unsigned l_852 = 0UL;
        unsigned short l_855 = 0xA2FCL;
        (*l_846) = ((*l_847) >= (((void*)0 == l_851) > func_17(p_11, l_852)));
        if (p_11)
        {
            return p_11;
        }
        else
        {
            int *****l_858 = &l_856;
            char *l_859[10] = {&g_171,&g_171,&g_171,&g_171,&g_171,&g_171,&g_171,&g_171,&g_171,&g_171};
            int i;
            (*l_847) = (safe_mod_func_int8_t_s_s(p_11, (l_855 | (((p_12 = ((0xAFL || ((***g_557) = ((**g_105) != (*l_846)))) == (&g_669 == ((*l_858) = l_856)))) && (*l_851)) < (safe_add_func_uint16_t_u_u(func_17(p_11, (*g_106)), 0x1909L))))));
            return p_11;
        }
    }
    else
    {
        const unsigned short ****l_862 = &g_699[0];
        unsigned short * const **l_863 = &g_563;
        unsigned short * const ***l_864 = (void*)0;
        unsigned short * const ***l_865 = &l_863;
        int **l_866 = (void*)0;
        int **l_867 = &l_847;
        unsigned *l_869 = &g_119;
        unsigned **l_868 = &l_869;
        (*l_846) = (((*l_862) = &g_700) != ((*l_865) = l_863));
        (*l_867) = (void*)0;
        g_348 = l_868;
        for (g_44 = 0; (g_44 == 46); g_44++)
        {
            (*l_867) = &g_103[6][0][4];
        }
    }
    for (g_82 = 0; (g_82 != 44); g_82 = safe_add_func_int8_t_s_s(g_82, 1))
    {
        int **l_874 = (void*)0;
        int **l_875[4][7][9] = {{{&g_535,&g_535,&g_535,&g_535,&g_535,&g_535,&g_535,&g_535,&g_535},{&g_535,&g_535,&g_535,&g_535,&g_535,&g_535,&g_535,&g_535,&g_535},{&g_535,&g_535,&g_535,&g_535,&g_535,&g_535,&g_535,&g_535,&g_535},{&g_535,&g_535,&g_535,&g_535,&g_535,&g_535,&g_535,&g_535,&g_535},{&g_535,&g_535,&g_535,&g_535,&g_535,&g_535,&g_535,&g_535,&g_535},{&g_535,&g_535,&g_535,&g_535,&g_535,&g_535,&g_535,&g_535,&g_535},{&g_535,&g_535,&g_535,&g_535,&g_535,&g_535,&g_535,&g_535,&g_535}},{{&g_535,&g_535,&g_535,&g_535,&g_535,&g_535,&g_535,&g_535,&g_535},{&g_535,&g_535,&g_535,&g_535,&g_535,&g_535,&g_535,&g_535,&g_535},{&g_535,&g_535,&g_535,&g_535,&g_535,&g_535,&g_535,&g_535,&g_535},{&g_535,&g_535,&g_535,&g_535,&g_535,&g_535,&g_535,&g_535,&g_535},{&g_535,&g_535,&g_535,&g_535,&g_535,&g_535,&g_535,&g_535,&g_535},{&g_535,&g_535,&g_535,&g_535,&g_535,&g_535,&g_535,&g_535,&g_535},{&g_535,&g_535,&g_535,&g_535,&g_535,&g_535,&g_535,&g_535,&g_535}},{{&g_535,&g_535,&g_535,&g_535,&g_535,&g_535,&g_535,&g_535,&g_535},{&g_535,&g_535,&g_535,&g_535,&g_535,&g_535,&g_535,&g_535,&g_535},{&g_535,&g_535,&g_535,&g_535,&g_535,&g_535,&g_535,&g_535,&g_535},{&g_535,&g_535,&g_535,&g_535,&g_535,&g_535,&g_535,&g_535,&g_535},{&g_535,&g_535,&g_535,&g_535,&g_535,&g_535,&g_535,&g_535,&g_535},{&g_535,&g_535,&g_535,&g_535,&g_535,&g_535,&g_535,&g_535,&g_535},{&g_535,&g_535,&g_535,&g_535,&g_535,&g_535,&g_535,&g_535,&g_535}},{{&g_535,&g_535,&g_535,&g_535,&g_535,&g_535,&g_535,&g_535,&g_535},{&g_535,&g_535,&g_535,&g_535,&g_535,&g_535,&g_535,&g_535,&g_535},{&g_535,&g_535,&g_535,&g_535,&g_535,&g_535,&g_535,&g_535,&g_535},{&g_535,&g_535,&g_535,&g_535,&g_535,&g_535,&g_535,&g_535,&g_535},{&g_535,&g_535,&g_535,&g_535,&g_535,&g_535,&g_535,&g_535,&g_535},{&g_535,&g_535,&g_535,&g_535,&g_535,&g_535,&g_535,&g_535,&g_535},{&g_535,&g_535,&g_535,&g_535,&g_535,&g_535,&g_535,&g_535,&g_535}}};
        int i, j, k;
        g_321[9] = &l_837;
        g_321[0] = (void*)0;
        (*l_846) = p_11;
        g_321[1] = &g_103[1][1][3];
    }
    return (*l_846);
}







static char func_13(unsigned char p_14, int p_15, short p_16)
{
    const int *l_817[2];
    const int **l_818 = &l_817[1];
    int i;
    for (i = 0; i < 2; i++)
        l_817[i] = &g_103[8][0][3];
    (*l_818) = l_817[1];
    return p_15;
}







static unsigned char func_17(int p_18, unsigned char p_19)
{
    return (**g_748);
}







static short func_27(int p_28)
{
    unsigned short l_541 = 0x43B6L;
    int l_543 = 0xB3FC4138L;
    char ***l_560 = &g_558;
    unsigned short * const *l_561[2];
    int ** const l_658 = &g_321[0];
    unsigned l_664 = 0x2AE9CBF7L;
    unsigned char **l_722 = &g_115;
    const int *l_780 = (void*)0;
    const int **l_779 = &l_780;
    const int *** const l_778 = &l_779;
    char l_794 = 0xF1L;
    int i;
    for (i = 0; i < 2; i++)
        l_561[i] = (void*)0;
    for (g_377 = 5; (g_377 >= 1); g_377 -= 1)
    {
        int **l_534 = &g_102;
        const unsigned char ***l_540 = (void*)0;
        const unsigned char ****l_539 = &l_540;
        short *l_542[1];
        int l_552 = 1L;
        unsigned short * const l_637 = &g_638;
        unsigned short * const *l_636 = &l_637;
        short l_679 = 1L;
        int i;
        for (i = 0; i < 1; i++)
            l_542[i] = &g_78;
        (*l_534) = &g_103[3][2][2];
        (*l_534) = g_535;
        if ((safe_unary_minus_func_uint16_t_u((safe_rshift_func_int16_t_s_u((((void*)0 == l_539) ^ (g_313[g_377] | (g_76 = l_541))), 11)))))
        {
            (*l_534) = &g_103[6][0][4];
            l_543 = (*g_535);
        }
        else
        {
            int * const l_544 = &l_543;
            int **l_545 = &g_321[9];
            int l_556 = 3L;
            int ***l_668 = &g_365;
            int ****l_667 = &l_668;
            int * const ***l_670 = &g_669;
            unsigned *l_680 = &g_119;
            (*l_545) = l_544;
            for (g_44 = 0; (g_44 <= 0); g_44 += 1)
            {
                unsigned l_553[5][9] = {{1UL,1UL,4294967290UL,0UL,4294967290UL,1UL,1UL,4294967288UL,0x39886FD0L},{0xCF6B7DC3L,1UL,0x4A6C492FL,4294967291UL,0x153D8A80L,4294967291UL,0x4A6C492FL,1UL,0xCF6B7DC3L},{1UL,0x4B1C78EBL,4294967295UL,4294967288UL,0xF024F15CL,4294967290UL,0xF024F15CL,4294967288UL,4294967295UL},{4294967295UL,4294967295UL,6UL,0x87127771L,1UL,0UL,0xCF6B7DC3L,0UL,0UL},{0x956D67BEL,0x4B1C78EBL,0x4B1C78EBL,0x956D67BEL,4294967290UL,0x1F126424L,1UL,0x39886FD0L,1UL}};
                int i, j;
                for (g_272 = 2; (g_272 >= 0); g_272 -= 1)
                {
                    char *l_646[3];
                    short ***l_655[3][4] = {{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}};
                    int i, j, k;
                    for (i = 0; i < 3; i++)
                        l_646[i] = &g_377;
                    if (g_103[g_377][g_272][g_272])
                        break;
                    if (((safe_lshift_func_int16_t_s_u((g_402[g_44][g_44] & (g_45[g_377][(g_44 + 2)][g_44] = (0x8AC742ACL & (**l_534)))), g_402[g_44][g_44])) > (safe_mod_func_int16_t_s_s((safe_sub_func_int16_t_s_s(9L, (l_543 = (p_28 ^ p_28)))), (g_78 = (65535UL || (l_552 = g_171)))))))
                    {
                        unsigned short * const **l_562[3][5][8] = {{{&l_561[0],&l_561[1],(void*)0,&l_561[0],&l_561[1],(void*)0,&l_561[1],&l_561[0]},{(void*)0,&l_561[1],&l_561[1],&l_561[1],&l_561[0],&l_561[0],(void*)0,(void*)0},{(void*)0,&l_561[0],&l_561[1],&l_561[1],&l_561[0],&l_561[1],&l_561[1],&l_561[0]},{&l_561[0],&l_561[0],&l_561[0],&l_561[0],&l_561[1],(void*)0,&l_561[1],(void*)0},{&l_561[1],&l_561[0],&l_561[0],&l_561[1],&l_561[0],&l_561[1],&l_561[1],&l_561[1]}},{{&l_561[0],&l_561[1],&l_561[0],(void*)0,&l_561[0],&l_561[1],&l_561[1],&l_561[1]},{&l_561[0],&l_561[1],&l_561[1],&l_561[1],&l_561[1],&l_561[0],(void*)0,&l_561[0]},{&l_561[0],(void*)0,&l_561[1],&l_561[1],&l_561[1],&l_561[0],&l_561[1],&l_561[0]},{&l_561[0],&l_561[0],(void*)0,&l_561[1],(void*)0,&l_561[1],&l_561[0],&l_561[0]},{&l_561[0],(void*)0,(void*)0,(void*)0,&l_561[1],&l_561[1],&l_561[1],(void*)0}},{{&l_561[0],&l_561[1],&l_561[0],&l_561[0],&l_561[0],&l_561[1],&l_561[1],&l_561[0]},{&l_561[0],&l_561[0],&l_561[1],&l_561[0],&l_561[0],(void*)0,&l_561[0],(void*)0},{&l_561[0],&l_561[0],&l_561[0],&l_561[1],&l_561[0],(void*)0,(void*)0,(void*)0},{&l_561[0],&l_561[0],&l_561[0],&l_561[1],&l_561[1],&l_561[0],&l_561[0],&l_561[0]},{&l_561[1],&l_561[1],&l_561[0],&l_561[1],&l_561[0],&l_561[1],(void*)0,&l_561[1]}}};
                        int i, j, k;
                        (*l_544) = (0xCD8DC7A8L != (l_553[1][0] <= (safe_sub_func_uint16_t_u_u(((l_543 != ((l_556 = l_553[0][3]) ^ p_28)) & ((&g_265 != (l_560 = g_557)) && ((*g_115) != p_28))), g_584))));
                        if ((*g_102))
                            continue;
                    }
                    else
                    {
                        unsigned l_639 = 0x5DF478B7L;
                        l_639 = p_28;
                        (*l_534) = (void*)0;
                        return g_587;
                    }
                    if (((safe_rshift_func_int16_t_s_u((((safe_lshift_func_uint16_t_u_u((**l_534), ((**l_636) = ((*g_256) = g_402[g_44][g_44])))) < (g_577 == (l_646[1] == l_646[1]))) || (((~((safe_add_func_uint16_t_u_u(p_28, (*l_544))) <= (safe_rshift_func_uint16_t_u_u((p_28 != (**g_653)), 9)))) >= l_553[0][0]) < p_28)), 12)) ^ (**g_653)))
                    {
                        return (**g_653);
                    }
                    else
                    {
                        g_321[8] = (*l_534);
                    }
                }
                (**l_534) = ((*g_106) <= (safe_add_func_uint32_t_u_u((0UL > ((((*g_654) = l_543) >= p_28) ^ (l_658 != l_658))), (*g_102))));
                if ((*l_544))
                    continue;
                (**l_534) = (safe_sub_func_int16_t_s_s(((**l_534) != ((*l_544) = 3L)), p_28));
            }
            (*l_658) = &g_146;
            (*g_535) = ((g_681 = ((*l_680) = (safe_unary_minus_func_uint16_t_u((safe_lshift_func_uint16_t_u_s(((5L == (l_664 & 1UL)) && (safe_add_func_int32_t_s_s((((((*l_667) = &g_365) == ((*l_670) = g_669)) <= p_28) >= (+((safe_unary_minus_func_uint8_t_u(g_672)) <= ((safe_rshift_func_uint16_t_u_u((safe_add_func_uint16_t_u_u(((*g_256) = ((**l_636) = (safe_rshift_func_uint8_t_u_u(l_679, (**g_105))))), (*g_654))), (*l_544))) & 0xEF3C39B3L)))), g_597))), 1)))))) == (**l_534));
        }
        for (g_574 = 0; (g_574 <= 2); g_574 += 1)
        {
            int *l_714 = &g_103[8][1][2];
            int i;
            if ((~(0x6851E4D2L ^ p_28)))
            {
                unsigned char **l_682 = &g_115;
                int *l_686 = (void*)0;
                if (p_28)
                    break;
                if ((*g_535))
                {
                    (*g_408) = l_682;
                    for (g_621 = 0; (g_621 <= 2); g_621 += 1)
                    {
                        int i, j, k;
                        if (g_103[(g_621 + 6)][g_574][g_574])
                            break;
                        (*g_102) = p_28;
                        (*l_534) = (*l_534);
                        (*l_534) = (*l_534);
                    }
                }
                else
                {
                    int *l_684 = &g_85;
                    int **l_683 = &l_684;
                    int l_690 = 0xE5B84631L;
                    unsigned *l_691 = &g_119;
                    unsigned l_692[2];
                    const unsigned short ***l_703 = (void*)0;
                    const unsigned short ****l_702 = &l_703;
                    char l_704 = (-1L);
                    int i;
                    for (i = 0; i < 2; i++)
                        l_692[i] = 1UL;
                    if ((&p_28 != ((*l_683) = (void*)0)))
                    {
                        unsigned short l_685 = 0x33C9L;
                        (*l_658) = (void*)0;
                        if (l_685)
                            break;
                        (*l_534) = l_686;
                    }
                    else
                    {
                        return (*g_654);
                    }
                    if (p_28)
                    {
                        int *l_687 = (void*)0;
                        (*l_658) = l_687;
                    }
                    else
                    {
                        (*l_534) = l_684;
                    }
                    if ((((safe_lshift_func_int8_t_s_s((((!((*l_691) = l_690)) <= (8UL | (l_692[1] && (+(safe_mod_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s((safe_lshift_func_uint16_t_u_s(((((*l_702) = (g_699[0] = (void*)0)) == &g_700) | (p_28 || (l_690 < (g_572 <= p_28)))), 8)), l_692[1])), 0x24L)))))) == 8L), 3)) || (**g_255)) | l_704))
                    {
                        char *l_711 = &l_704;
                        (*g_535) = (safe_rshift_func_uint8_t_u_s((safe_sub_func_int32_t_s_s(p_28, ((safe_add_func_int8_t_s_s((**g_558), p_28)) >= p_28))), ((*l_711) = (p_28 || (*g_535)))));
                    }
                    else
                    {
                        (*l_658) = &g_146;
                    }
                    for (g_565 = 16; (g_565 == 13); g_565 = safe_sub_func_uint16_t_u_u(g_565, 1))
                    {
                        (*l_534) = l_714;
                    }
                }
                for (g_602 = (-15); (g_602 > 1); g_602++)
                {
                    if (p_28)
                        break;
                    if (p_28)
                        break;
                    if ((*l_714))
                        continue;
                }
            }
            else
            {
                int *l_719 = &l_552;
                unsigned char **l_723[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_723[i] = &g_115;
                for (g_582 = 0; (g_582 <= 51); g_582 = safe_add_func_uint8_t_u_u(g_582, 9))
                {
                    (*l_534) = l_719;
                }
                if ((**l_534))
                {
                    if (p_28)
                    {
                        unsigned l_724 = 0x90163B3AL;
                        int *l_725 = &g_103[4][0][2];
                        (*l_714) = (((*l_719) = (safe_add_func_int16_t_s_s(((l_723[0] = l_722) != (void*)0), l_724))) <= (-3L));
                        if ((**l_534))
                            break;
                        (*l_534) = l_725;
                        (*g_102) = (*l_714);
                    }
                    else
                    {
                        (*l_534) = &g_103[1][0][1];
                        return p_28;
                    }
                    (*l_658) = &g_103[8][1][4];
                    (*l_658) = &g_103[4][1][4];
                    (*l_534) = l_714;
                }
                else
                {
                    int *l_726 = &l_543;
                    for (g_627 = 0; (g_627 <= 2); g_627 += 1)
                    {
                        int i, j, k;
                        (*l_534) = l_726;
                        if (g_625[(g_574 + 1)][(g_377 + 3)][g_627])
                            continue;
                        (*l_719) = ((((safe_lshift_func_int16_t_s_s(g_625[(g_574 + 1)][(g_627 + 1)][g_627], 9)) != (safe_lshift_func_int8_t_s_s(g_625[g_377][(g_574 + 6)][g_627], (safe_mod_func_uint32_t_u_u(((**g_255) < (((p_28 == (p_28 < (**l_534))) && (g_621 || (safe_sub_func_int8_t_s_s((3L > (**g_653)), p_28)))) | 0UL)), 0x613E0AB6L))))) ^ l_541) != (**g_558));
                    }
                }
                for (g_627 = 8; (g_627 == 11); g_627 = safe_add_func_uint8_t_u_u(g_627, 7))
                {
                    return (**g_653);
                }
            }
            (*l_534) = &g_103[6][0][4];
        }
    }
    for (g_582 = 29; (g_582 < 21); g_582--)
    {
        int l_750[6] = {0x7DEF8277L,0x7DEF8277L,0x7DEF8277L,0x7DEF8277L,0x7DEF8277L,0x7DEF8277L};
        int *l_752 = &l_543;
        short * const l_808[6][9] = {{&g_78,&g_76,&g_76,&g_78,&g_76,&g_76,&g_78,&g_76,&g_76},{&g_78,(void*)0,&g_78,(void*)0,&g_78,(void*)0,&g_78,(void*)0,&g_78},{&g_78,&g_76,&g_76,&g_78,&g_76,&g_76,&g_78,&g_76,&g_76},{&g_78,(void*)0,&g_84,(void*)0,&g_84,(void*)0,&g_78,(void*)0,&g_84},{&g_78,&g_76,&g_76,&g_78,&g_76,&g_76,&g_78,&g_84,&g_76},{&g_78,&g_76,&g_78,(void*)0,&g_78,&g_76,&g_78,&g_76,&g_78}};
        int l_813 = 0xD3712886L;
        int i, j;
        for (g_588 = 6; (g_588 != 38); g_588 = safe_add_func_uint32_t_u_u(g_588, 6))
        {
            unsigned l_745 = 0UL;
            unsigned char **l_746 = &g_115;
            int *l_753 = &g_146;
            for (g_598 = 0; (g_598 > 25); g_598++)
            {
                for (g_157 = 0; (g_157 < 38); g_157++)
                {
                    int *l_751[7][4][3] = {{{&g_272,&g_272,&g_272},{&l_543,&g_103[6][0][4],(void*)0},{(void*)0,&l_543,&g_103[7][2][4]},{(void*)0,&l_543,&g_146}},{{&g_146,&g_103[6][0][4],&l_543},{&g_146,&g_272,&g_272},{&g_146,&g_103[6][0][4],&g_103[6][0][4]},{(void*)0,&g_272,&g_103[6][0][4]}},{{(void*)0,&g_103[6][0][4],&g_272},{&l_543,&g_146,&l_543},{&g_272,&g_103[6][0][4],&g_146},{&g_146,&g_272,&g_103[7][2][4]}},{{&g_146,&g_103[6][0][4],(void*)0},{&g_272,&g_272,&g_272},{&l_543,&g_103[6][0][4],(void*)0},{(void*)0,&l_543,&g_103[7][2][4]}},{{(void*)0,&l_543,&g_146},{&g_146,&g_103[6][0][4],&l_543},{&g_146,&g_272,&g_272},{&g_146,&g_103[6][0][4],&g_103[6][0][4]}},{{(void*)0,&g_272,&g_103[6][0][4]},{(void*)0,&g_103[6][0][4],&g_272},{&l_543,&g_146,&l_543},{&g_272,&g_103[6][0][4],&g_146}},{{&g_146,&g_272,&g_103[7][2][4]},{&g_146,&g_103[6][0][4],(void*)0},{&g_272,&g_272,&g_272},{&l_543,&g_103[6][0][4],(void*)0}}};
                    int i, j, k;
                    if ((l_745 = 0L))
                    {
                        unsigned char ***l_747[3];
                        int i;
                        for (i = 0; i < 3; i++)
                            l_747[i] = &l_746;
                        (*g_535) = (1L ^ p_28);
                    }
                    else
                    {
                        int **l_749 = &g_102;
                        (*l_749) = (g_321[9] = &g_103[6][0][4]);
                        l_750[0] = 0xDBD37A06L;
                        (*l_658) = l_751[1][0][2];
                        l_752 = &g_103[0][2][4];
                    }
                }
                return (*g_654);
            }
            (*l_658) = l_753;
            (*l_658) = l_753;
        }
        (*l_752) = p_28;
        if (p_28)
            break;
        for (g_567 = 0; (g_567 <= 0); g_567 += 1)
        {
            unsigned char ***l_762 = &g_748;
            int l_765 = 0xC85D5994L;
            unsigned *l_766[9] = {&g_314,&g_314,&g_314,&g_314,&g_314,&g_314,&g_314,&g_314,&g_314};
            unsigned short *l_770 = &g_628;
            int ***l_781 = &g_365;
            int *l_812 = &g_103[6][0][4];
            int i;
            if ((((*g_559) && (0xC45BL != l_765)) > p_28))
            {
                int *l_773[4];
                char ***l_777 = &g_558;
                unsigned *l_797[2][9][1] = {{{&g_119},{&g_119},{&g_119},{&g_119},{&g_119},{&g_119},{&g_119},{&g_119},{&g_119}},{{&g_119},{&g_119},{&g_119},{&g_119},{&g_119},{&g_119},{&g_119},{&g_119},{&g_119}}};
                int i, j, k;
                for (i = 0; i < 4; i++)
                    l_773[i] = &g_272;
                for (g_593 = 0; (g_593 <= 0); g_593 += 1)
                {
                    int l_769 = 3L;
                    if (p_28)
                    {
                        unsigned short *l_771 = (void*)0;
                        int i, j, k;
                        (*l_658) = &g_272;
                        (*g_535) = ((*l_752) = (((safe_rshift_func_uint8_t_u_u((l_769 > (0x0B57L == (g_45[g_567][g_567][g_567] = p_28))), 2)) | (l_770 != ((*g_328) = l_771))) > p_28));
                        return l_769;
                    }
                    else
                    {
                        const unsigned char l_772 = 0x85L;
                        if (l_772)
                            break;
                        return p_28;
                    }
                }
                for (g_620 = 0; (g_620 <= 0); g_620 += 1)
                {
                    l_773[1] = (void*)0;
                    for (g_314 = 0; (g_314 <= 0); g_314 += 1)
                    {
                        const char ***l_776[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                        int i;
                        (*l_752) = ((l_776[6] == l_777) && (l_778 != l_781));
                        (*g_535) = (0x6FD1CD0AL > ((*l_752) = (safe_rshift_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s(1L, (*g_654))), 6))));
                    }
                    (*g_535) = 1L;
                }
                for (g_596 = 0; (g_596 <= 0); g_596 += 1)
                {
                    (*l_752) = l_765;
                    (*l_658) = &g_146;
                }
                if ((safe_add_func_uint8_t_u_u(((*g_115) = (0x111F798FL < (l_765 = (p_28 && (*g_106))))), (safe_lshift_func_int16_t_s_s((p_28 == (**g_105)), p_28)))))
                {
                    unsigned short l_809 = 0x8713L;
                    int l_810 = 0x727C718BL;
                    (*l_752) = l_765;
                    for (g_196 = 0; (g_196 <= 0); g_196 += 1)
                    {
                        (*l_752) = (p_28 | (p_28 > (***g_557)));
                    }
                    if ((safe_lshift_func_uint8_t_u_s((p_28 >= ((***l_777) = (0x9CL != p_28))), p_28)))
                    {
                        (*g_535) = ((**g_255) & (&g_535 == &g_102));
                        if (p_28)
                            break;
                    }
                    else
                    {
                        (*g_535) = (+((*l_752) = (1UL ^ 0x4595L)));
                        (*l_752) = (safe_sub_func_uint32_t_u_u((safe_mod_func_uint16_t_u_u(((*g_256) = ((void*)0 != l_808[5][8])), ((p_28 != (*l_752)) || ((l_810 = ((-5L) >= (((l_809 < (*g_535)) >= 0x02L) == 0xC08AL))) > 4294967295UL)))), g_138));
                    }
                    g_535 = &g_103[8][0][3];
                }
                else
                {
                    l_773[1] = &g_272;
                }
            }
            else
            {
                int l_811 = 0x0A9C4256L;
                g_535 = ((*l_658) = l_752);
                return l_811;
            }
            l_812 = (void*)0;
            return l_813;
        }
    }
    return (*g_654);
}







static int func_31(unsigned p_32, int p_33, unsigned p_34, int p_35, unsigned char p_36)
{
    int *l_363[5] = {&g_85,&g_85,&g_85,&g_85,&g_85};
    int **l_362 = &l_363[4];
    int ***l_364[8][7] = {{&l_362,&l_362,&l_362,&l_362,&l_362,&l_362,&l_362},{&l_362,&l_362,&l_362,&l_362,&l_362,&l_362,&l_362},{&l_362,&l_362,&l_362,&l_362,&l_362,&l_362,&l_362},{&l_362,&l_362,(void*)0,&l_362,(void*)0,&l_362,&l_362},{&l_362,&l_362,&l_362,&l_362,&l_362,&l_362,&l_362},{&l_362,&l_362,&l_362,&l_362,&l_362,&l_362,&l_362},{&l_362,&l_362,&l_362,&l_362,&l_362,&l_362,&l_362},{(void*)0,&l_362,(void*)0,&l_362,&l_362,&l_362,(void*)0}};
    unsigned short * const *l_370 = &g_256;
    int l_371 = 8L;
    int **l_372 = &l_363[3];
    int *l_378[1];
    int l_420 = 0xE41F4C95L;
    short *l_448 = (void*)0;
    short **l_447 = &l_448;
    int **l_482 = &l_378[0];
    int ***l_481 = &l_482;
    char l_507[2];
    unsigned char **l_532 = &g_115;
    int i, j;
    for (i = 0; i < 1; i++)
        l_378[i] = &g_146;
    for (i = 0; i < 2; i++)
        l_507[i] = 6L;
    g_365 = l_362;
    for (g_78 = 0; g_78 < 9; g_78 += 1)
    {
        for (g_57 = 0; g_57 < 3; g_57 += 1)
        {
            for (g_314 = 0; g_314 < 5; g_314 += 1)
            {
                g_103[g_78][g_57][g_314] = 0x431F6FE2L;
            }
        }
    }
    if ((p_35 = (l_371 = (safe_sub_func_int16_t_s_s(((~((*g_115) = 0xE6L)) <= (((*g_102) = (safe_sub_func_uint32_t_u_u(((-1L) && ((l_370 != l_370) != (l_371 && (((void*)0 != l_372) >= ((p_36 = (8L < ((safe_add_func_int8_t_s_s(((safe_mod_func_uint32_t_u_u(g_103[0][0][2], 4294967295UL)) == 0x6D87L), g_377)) <= l_371))) & p_35))))), 0xD43EE1FDL))) < 0xED9FBE40L)), p_33)))))
    {
        const int *l_383 = &g_103[1][2][1];
        const int **l_382 = &l_383;
        char *l_387 = &g_377;
        char **l_386 = &l_387;
        int **l_397 = &l_363[2];
        unsigned short **l_423[10][7] = {{&g_256,&g_256,&g_256,&g_256,&g_256,&g_256,&g_256},{&g_256,&g_256,&g_256,&g_256,&g_256,&g_256,&g_256},{&g_256,&g_256,&g_256,&g_256,&g_256,&g_256,&g_256},{&g_256,&g_256,&g_256,&g_256,&g_256,(void*)0,&g_256},{&g_256,&g_256,&g_256,&g_256,&g_256,&g_256,&g_256},{&g_256,&g_256,&g_256,&g_256,&g_256,&g_256,&g_256},{&g_256,&g_256,(void*)0,&g_256,&g_256,(void*)0,&g_256},{&g_256,&g_256,&g_256,&g_256,&g_256,&g_256,&g_256},{&g_256,&g_256,&g_256,&g_256,&g_256,&g_256,&g_256},{&g_256,&g_256,&g_256,&g_256,&g_256,&g_256,&g_256}};
        int l_444 = (-1L);
        int i, j;
        for (p_33 = 0; (p_33 <= 2); p_33 += 1)
        {
            int **l_396 = &l_363[1];
            int l_399 = (-6L);
            unsigned char l_456 = 0UL;
            for (g_272 = 0; (g_272 >= 0); g_272 -= 1)
            {
                unsigned char l_381 = 254UL;
                char *l_385 = &g_377;
                char **l_384 = &l_385;
                g_321[3] = &p_35;
                p_35 = (safe_mod_func_uint16_t_u_u((l_381 >= (p_32 == ((l_382 != &l_383) < (l_384 == l_386)))), (0x0B24L & (safe_mod_func_uint8_t_u_u((((safe_sub_func_int16_t_s_s(func_37(((((safe_mod_func_int8_t_s_s((-1L), (safe_add_func_int8_t_s_s((((*g_115) && 0x17L) == (*l_383)), p_32)))) & p_33) < g_313[5]) ^ p_32)), g_84)) >= 0x5BF2L) || (*g_102)), 255UL)))));
                for (g_157 = 0; (g_157 <= 0); g_157 += 1)
                {
                    l_397 = l_396;
                }
            }
            for (g_196 = 0; (g_196 >= 0); g_196 -= 1)
            {
                int l_398 = 0xA6A89D7BL;
                int *l_403 = &l_399;
                char **l_405 = &l_387;
                unsigned *l_417 = &g_119;
            }
        }
        (*g_102) = ((*g_102) > 2UL);
    }
    else
    {
        unsigned l_461 = 0xD3A0B12DL;
        int l_468 = 0x03977CFCL;
        unsigned l_472 = 4294967293UL;
        int **l_473[4] = {&g_321[9],&g_321[9],&g_321[9],&g_321[9]};
        int i;
        for (l_420 = 0; (l_420 != 4); ++l_420)
        {
            unsigned l_469 = 0x579572A9L;
            int **l_471 = &g_102;
            for (g_272 = 6; (g_272 >= 0); g_272 -= 1)
            {
                int i;
                p_35 = (safe_rshift_func_int8_t_s_u((func_37(l_461) ^ p_33), 7));
                for (p_33 = 0; (p_33 <= 0); p_33 += 1)
                {
                    int **l_462 = &g_102;
                    short *l_467 = &g_76;
                    int i, j, k;
                    (*l_462) = &g_103[6][0][4];
                    if (g_45[p_33][(p_33 + 3)][p_33])
                        break;
                    l_468 = (p_35 = (safe_rshift_func_uint16_t_u_s((g_45[(p_33 + 4)][(p_33 + 3)][p_33] = (func_37(p_35) | (safe_sub_func_int16_t_s_s(p_34, 65530UL)))), ((*l_467) = g_377))));
                    (*g_102) = (((**l_462) ^ p_35) < l_469);
                }
                g_321[(g_272 + 2)] = (void*)0;
                (*g_102) = (safe_unary_minus_func_int32_t_s((4294967295UL >= p_32)));
            }
            (*l_471) = &g_272;
        }
        l_472 = l_468;
        l_378[0] = &g_103[6][0][4];
    }
    for (g_146 = 21; (g_146 < 6); g_146 = safe_sub_func_int32_t_s_s(g_146, 8))
    {
        unsigned char l_497[7] = {0xE9L,0xE9L,0xE9L,0xE9L,0xE9L,0xE9L,0xE9L};
        char *l_518 = (void*)0;
        int i;
        for (g_157 = 0; (g_157 <= 14); ++g_157)
        {
            unsigned l_478[6] = {0x00DB4193L,0x00DB4193L,0x6E55BA30L,0x00DB4193L,0x00DB4193L,0x6E55BA30L};
            char *l_496 = &g_171;
            int *l_498 = &g_103[6][0][4];
            int i;
            l_478[5] = 0xD856576CL;
            if ((safe_lshift_func_int16_t_s_u((((void*)0 == l_481) != ((func_37((safe_mod_func_int8_t_s_s(p_33, p_35))) != ((safe_add_func_int16_t_s_s(g_138, 5L)) | ((((safe_lshift_func_int8_t_s_s(((*l_496) = (safe_sub_func_uint32_t_u_u((safe_mod_func_uint8_t_u_u(((safe_add_func_int32_t_s_s((***l_481), (g_45[4][0][0] | 0xAC71L))) > 0x25L), p_32)), g_495))), l_497[1])) < 7L) | l_478[5]) != 1L))) == p_34)), 6)))
            {
                (*l_482) = &g_146;
            }
            else
            {
                if (p_32)
                    break;
                (**l_481) = l_498;
                for (p_33 = 0; (p_33 < (-20)); p_33 = safe_sub_func_int8_t_s_s(p_33, 8))
                {
                    unsigned l_510 = 0xEC4BF4F2L;
                    char *l_516 = &g_377;
                    char l_526 = 0x2DL;
                    for (g_44 = 0; (g_44 <= 0); g_44 += 1)
                    {
                        int l_511 = 4L;
                        char **l_517[9];
                        unsigned short l_523 = 0x7CD9L;
                        unsigned l_531 = 0xB8CD1D79L;
                        int i, j, k;
                        for (i = 0; i < 9; i++)
                            l_517[i] = &l_496;
                        l_511 = (((**g_255) = (safe_unary_minus_func_int32_t_s(((*l_498) = func_37((g_45[g_44][(g_44 + 1)][g_44] = ((p_35 = ((*l_498) = ((func_37((**g_328)) <= l_497[6]) > (safe_mod_func_int8_t_s_s((p_36 && p_36), (safe_unary_minus_func_int8_t_s((l_497[3] < ((safe_rshift_func_int16_t_s_s(g_313[1], 3)) <= (((((((*l_496) = (l_507[0] != (safe_sub_func_int8_t_s_s(l_510, 7L)))) >= 8UL) && l_497[1]) == p_34) != p_32) | l_497[1])))))))))) ^ 0xF8F4E655L))))))) | 0UL);
                        (*l_498) = (safe_rshift_func_uint16_t_u_u(((safe_rshift_func_uint16_t_u_u(((**g_328) = (l_516 == (l_518 = &g_377))), 0)) & 4UL), (safe_rshift_func_int8_t_s_u(p_34, (((!(((safe_lshift_func_int8_t_s_s(((*l_516) = l_523), l_497[1])) && p_33) & (func_37((l_526 = func_37((g_44 | (safe_mod_func_uint16_t_u_u(((*l_498) = l_510), p_32)))))) > p_35))) ^ 1L) == p_33)))));
                        (*l_498) = (p_32 >= (g_313[g_44] = ((((0x23L > ((((0xCBL >= (*g_115)) >= 1UL) || (safe_sub_func_int32_t_s_s(func_37(((*g_256) = 0xCA9CL)), (safe_add_func_uint8_t_u_u(0x42L, l_531))))) >= p_34)) || l_510) && p_35) && (*l_498))));
                    }
                }
            }
        }
        (*l_482) = &p_35;
        (*g_408) = l_532;
        (**l_481) = &g_272;
    }
    return (*g_102);
}







static int func_37(unsigned short p_38)
{
    int l_355 = (-6L);
    int **l_356 = &g_102;
    int **l_357 = (void*)0;
    int **l_358 = (void*)0;
    int **l_359 = &g_321[9];
    l_355 = l_355;
    (*l_359) = ((*l_356) = &g_103[6][0][4]);
    (*l_359) = (*l_359);
    (*l_359) = (*l_356);
    return p_38;
}







static unsigned short func_39(unsigned short p_40, short p_41, int p_42, int p_43)
{
    const int l_46 = 0xBD55ADB5L;
    int l_47[7] = {0xA82BC906L,0xA82BC906L,0xA82BC906L,0xA82BC906L,0xA82BC906L,0xA82BC906L,0xA82BC906L};
    unsigned char *l_56 = &g_57;
    unsigned l_120 = 0x37B1C4CFL;
    unsigned l_139 = 1UL;
    int *l_160 = (void*)0;
    short *l_162 = &g_84;
    short **l_161 = &l_162;
    unsigned l_181[1][10][4] = {{{0x94F392A4L,8UL,4294967295UL,0UL},{0UL,8UL,8UL,0UL},{0x94F392A4L,8UL,4294967295UL,0UL},{0UL,8UL,8UL,0UL},{0x94F392A4L,8UL,4294967295UL,0UL},{0UL,8UL,8UL,0UL},{0x94F392A4L,8UL,4294967295UL,0UL},{0UL,8UL,8UL,0UL},{0x94F392A4L,8UL,4294967295UL,0UL},{0UL,8UL,8UL,0UL}}};
    int i, j, k;
    l_47[0] = (0L | l_46);
    if (((safe_add_func_uint16_t_u_u(g_44, (((g_44 || (safe_sub_func_uint16_t_u_u(0x737BL, (((l_47[3] ^ g_44) & l_47[0]) != 3L)))) | (safe_mod_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s(((*l_56) = p_41), 1)), (safe_sub_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u((safe_lshift_func_int16_t_s_s((l_46 >= p_40), 8)), 7)), l_47[0]))))) >= 0x6C1418E8L))) || 0xE9DBL))
    {
        int *l_64 = &l_47[0];
        const short *l_99 = (void*)0;
        unsigned char **l_112 = &l_56;
        (*l_64) = l_47[3];
        (*l_64) = (*l_64);
        for (p_41 = 21; (p_41 > 19); p_41--)
        {
            int l_69 = (-10L);
            unsigned char l_74 = 0x81L;
            for (p_42 = 0; (p_42 < (-4)); p_42 = safe_sub_func_uint32_t_u_u(p_42, 2))
            {
                return l_69;
            }
            for (p_43 = 0; (p_43 <= (-2)); p_43 = safe_sub_func_int16_t_s_s(p_43, 7))
            {
                short *l_75 = &g_76;
                short *l_77 = &g_78;
                unsigned char *l_81 = &g_82;
                short *l_83 = &g_84;
            }
        }
        for (p_41 = 0; (p_41 != 29); p_41++)
        {
            unsigned char ***l_113[3][6][6] = {{{&l_112,&l_112,&l_112,&l_112,(void*)0,&l_112},{&l_112,&l_112,&l_112,&l_112,&l_112,&l_112},{&l_112,&l_112,&l_112,&l_112,&l_112,&l_112},{&l_112,&l_112,&l_112,&l_112,&l_112,&l_112},{(void*)0,&l_112,&l_112,(void*)0,&l_112,&l_112},{&l_112,&l_112,&l_112,&l_112,&l_112,(void*)0}},{{&l_112,&l_112,&l_112,&l_112,&l_112,(void*)0},{&l_112,&l_112,&l_112,&l_112,(void*)0,(void*)0},{(void*)0,&l_112,&l_112,&l_112,&l_112,(void*)0},{&l_112,&l_112,&l_112,&l_112,&l_112,(void*)0},{&l_112,&l_112,&l_112,(void*)0,&l_112,&l_112},{&l_112,&l_112,(void*)0,&l_112,(void*)0,&l_112}},{{&l_112,&l_112,&l_112,&l_112,&l_112,&l_112},{(void*)0,&l_112,&l_112,&l_112,&l_112,(void*)0},{&l_112,&l_112,&l_112,&l_112,&l_112,&l_112},{&l_112,&l_112,&l_112,&l_112,(void*)0,&l_112},{&l_112,&l_112,&l_112,(void*)0,&l_112,&l_112},{&l_112,&l_112,&l_112,&l_112,&l_112,&l_112}}};
            unsigned *l_118[8];
            int *l_122 = &g_103[7][2][3];
            int i, j, k;
            for (i = 0; i < 8; i++)
                l_118[i] = &g_119;
            (*g_102) = (p_41 && ((safe_sub_func_uint32_t_u_u(g_85, (l_120 = (((((g_114 = l_112) == &g_106) == (0x7DA69EDFL != (g_84 > ((4UL && ((*l_112) == l_56)) >= (*g_102))))) > 0L) ^ g_45[4][0][0])))) >= (*l_64)));
            l_112 = l_112;
            for (g_57 = 0; (g_57 <= 0); g_57 += 1)
            {
                if ((*g_102))
                {
                    int **l_121[10] = {&l_64,&l_64,&l_64,&l_64,&l_64,&l_64,&l_64,&l_64,&l_64,&l_64};
                    int i;
                    l_122 = &g_103[6][0][4];
                }
                else
                {
                    for (g_82 = 0; g_82 < 9; g_82 += 1)
                    {
                        for (g_44 = 0; g_44 < 3; g_44 += 1)
                        {
                            for (g_85 = 0; g_85 < 5; g_85 += 1)
                            {
                                g_103[g_82][g_44][g_85] = 0x56C5F039L;
                            }
                        }
                    }
                }
                for (g_78 = 0; (g_78 <= 0); g_78 += 1)
                {
                    int i, j, k;
                    for (g_84 = 0; (g_84 >= 0); g_84 -= 1)
                    {
                        int **l_125 = (void*)0;
                        int **l_126 = &l_122;
                        int i, j, k;
                        l_47[(g_84 + 5)] = (safe_mod_func_int8_t_s_s(((void*)0 == (*g_114)), ((&g_105 == (void*)0) ^ g_45[(g_84 + 1)][g_84][g_57])));
                        (*l_126) = &g_103[(g_57 + 3)][(g_84 + 2)][(g_84 + 3)];
                        (*g_102) = g_103[(g_78 + 6)][g_84][(g_57 + 2)];
                        if (g_103[g_78][(g_78 + 2)][(g_78 + 3)])
                            break;
                    }
                    if (g_45[(g_78 + 1)][(g_57 + 1)][g_78])
                    {
                        int **l_127 = &l_122;
                        int i, j, k;
                        (*l_127) = &g_103[(g_78 + 8)][g_78][(g_57 + 2)];
                    }
                    else
                    {
                        p_42 = ((void*)0 == &g_105);
                    }
                }
            }
            if (p_42)
                break;
        }
    }
    else
    {
        int *l_128 = &g_103[6][0][4];
        int **l_129[2];
        unsigned char *l_156[3];
        short **l_178 = (void*)0;
        int *l_215 = &l_47[3];
        int *l_237 = (void*)0;
        int *l_336 = &g_146;
        const unsigned char l_351 = 255UL;
        int i;
        for (i = 0; i < 2; i++)
            l_129[i] = &g_102;
        for (i = 0; i < 3; i++)
            l_156[i] = (void*)0;
        g_102 = l_128;
        if ((safe_add_func_uint32_t_u_u(p_40, ((*g_102) = (safe_rshift_func_int8_t_s_u(((safe_rshift_func_uint16_t_u_s(((g_45[4][2][0] < (((*g_115) = p_43) ^ ((l_120 != l_47[0]) < g_45[3][1][0]))) != (safe_sub_func_int8_t_s_s(g_138, ((p_41 && ((*g_102) >= (-1L))) > l_139)))), 0)) | 0L), (*g_106)))))))
        {
            (*g_102) = (safe_sub_func_uint8_t_u_u((**g_105), g_119));
        }
        else
        {
            unsigned short l_154 = 0x4552L;
            unsigned char ***l_173 = &g_114;
            const unsigned char * const *l_176 = &g_106;
            const unsigned char * const **l_175 = &l_176;
            int l_197 = 0x102941B6L;
            unsigned l_202 = 0xC0282D23L;
            int *l_216[2][10][7] = {{{(void*)0,&g_146,&l_197,&l_47[0],(void*)0,&l_197,&l_47[4]},{(void*)0,&l_197,&l_47[0],&g_103[6][0][4],&l_197,&l_197,&g_103[6][0][4]},{&l_197,&g_146,&l_197,&l_47[2],&g_103[6][0][4],&l_197,&l_197},{&g_103[6][0][4],(void*)0,&l_197,(void*)0,&g_103[6][0][4],&l_197,(void*)0},{&l_197,&l_197,&l_47[2],(void*)0,&l_197,&l_197,(void*)0},{&l_47[2],(void*)0,&l_197,&l_197,&g_103[6][0][4],&l_197,&l_47[0]},{(void*)0,&g_103[6][0][4],&l_197,&l_197,&g_146,(void*)0,&g_146},{&l_197,&l_47[0],&l_47[0],&l_197,&l_197,&l_47[2],(void*)0},{&l_197,&g_103[6][0][4],&l_197,&l_197,&g_103[6][0][4],&l_197,&l_197},{&g_146,&l_47[0],(void*)0,&g_103[6][0][4],(void*)0,(void*)0,(void*)0}},{{&l_47[4],&l_197,&l_197,&g_146,&l_197,&l_197,&g_146},{&l_197,&l_197,&l_197,&l_197,&l_47[0],&l_197,&l_47[0]},{&l_47[0],&l_47[4],(void*)0,&g_103[6][0][4],(void*)0,&l_197,(void*)0},{&g_103[6][0][4],&l_47[0],&l_197,(void*)0,&l_197,&l_197,&g_103[6][0][4]},{&l_47[2],(void*)0,&l_47[0],&l_197,(void*)0,&l_197,&l_47[0]},{(void*)0,(void*)0,&l_197,&l_47[0],&l_47[4],(void*)0,&g_103[6][0][4]},{(void*)0,&l_47[0],&l_197,(void*)0,&l_197,&l_197,&l_47[0]},{&l_197,&l_47[4],&l_197,&l_197,&l_47[4],&l_47[2],&l_197},{&g_103[6][0][4],&l_197,(void*)0,&l_197,&l_197,(void*)0,&l_197},{&l_197,&l_197,&l_197,&l_47[2],&l_47[1],&g_103[6][0][4],&l_47[2]}}};
            int l_217 = 0x70791D89L;
            int *l_235 = &g_103[6][0][4];
            unsigned l_238 = 0x47D65CAEL;
            int i, j, k;
            if ((g_85 <= l_139))
            {
                unsigned *l_144 = &g_119;
                unsigned **l_145 = &l_144;
                unsigned char *l_155 = &g_82;
                unsigned l_168 = 4UL;
                int *l_172 = &l_47[0];
                if ((((safe_sub_func_int16_t_s_s((((*l_144) = (0xB5L <= (((void*)0 != &g_76) < p_40))) & ((*l_128) = p_40)), 6UL)) > p_40) && ((*g_115) = ((0x3F764A2DL & (((*l_145) = l_128) == &g_119)) == p_42))))
                {
                    int l_169 = 0xD401970BL;
                    char *l_170 = &g_171;
                    for (l_139 = 0; l_139 < 2; l_139 += 1)
                    {
                        l_129[l_139] = (void*)0;
                    }
                    if ((*g_102))
                    {
                        unsigned short *l_151 = &g_45[5][1][0];
                        int l_158[10] = {(-7L),0L,(-7L),(-7L),0L,(-7L),(-7L),0L,(-7L),(-7L)};
                        int i;
                        g_146 = (p_41 > (~((*l_56) = (p_43 ^ (((l_158[9] = (g_146 ^ (g_157 = ((((((*l_144) = (safe_rshift_func_uint16_t_u_u(((*l_151) = g_84), 12))) > (safe_mod_func_uint32_t_u_u(p_43, p_40))) > l_154) & (0x6CL <= ((l_155 != l_156[1]) <= g_84))) || g_82)))) || l_154) <= 0xE22FAA98L)))));
                        g_102 = &g_103[6][1][4];
                        return g_103[6][0][4];
                    }
                    else
                    {
                        int *l_159 = &g_146;
                        short ***l_163 = &l_161;
                        l_160 = l_159;
                        (*l_163) = l_161;
                    }
                    (*l_160) = (safe_rshift_func_uint8_t_u_s(l_154, ((*l_170) = (l_154 >= (((((((*l_144) = (safe_sub_func_uint8_t_u_u((p_40 >= ((l_168 ^ (*g_102)) || (((((*l_155) = 2UL) & p_41) ^ l_154) > (*l_128)))), (-7L)))) | g_76) >= l_169) == g_138) >= g_57) & p_43)))));
                    l_172 = &g_146;
                }
                else
                {
                    int l_180 = (-5L);
                    int *l_184 = &l_47[0];
                    (*l_172) = (*g_102);
                    if ((*g_102))
                    {
                        unsigned char ****l_174 = &l_173;
                        int *l_177[2][9] = {{&l_47[0],(void*)0,(void*)0,&l_47[0],&l_47[0],(void*)0,(void*)0,&l_47[0],&l_47[0]},{&g_103[6][0][4],(void*)0,&g_103[6][0][4],(void*)0,&g_103[6][0][4],(void*)0,&g_103[6][0][4],(void*)0,&g_103[6][0][4]}};
                        int i, j;
                        (*l_172) = (*g_102);
                        (*g_102) = (((*l_174) = l_173) == l_175);
                        l_177[0][0] = l_177[1][5];
                        l_178 = l_178;
                    }
                    else
                    {
                        int *l_179[5];
                        int i;
                        for (i = 0; i < 5; i++)
                            l_179[i] = &g_146;
                        (*l_173) = &g_115;
                        l_179[4] = l_179[1];
                        l_179[1] = &p_42;
                    }
                    if ((*g_102))
                    {
                        const char l_182[4] = {0x3AL,0x3AL,0x3AL,0x3AL};
                        short ***l_183 = &l_161;
                        int i;
                        (*l_172) = (((l_154 && (l_181[0][0][3] = (p_40 || (l_180 || p_41)))) & p_41) || (l_182[3] >= (+1UL)));
                        (*l_183) = l_178;
                        l_184 = &g_103[6][0][4];
                    }
                    else
                    {
                        return p_43;
                    }
                }
                for (g_146 = 0; (g_146 < 19); g_146++)
                {
                    unsigned short *l_187 = &g_45[5][3][0];
                    (*l_128) = (((*l_187) = ((65530UL || ((p_42 ^ p_42) | 1UL)) ^ 248UL)) > g_119);
                    if ((*g_102))
                        break;
                    (*l_128) = (safe_rshift_func_uint16_t_u_u((0x08L < (p_40 <= (0UL >= ((***l_173) = (safe_rshift_func_int16_t_s_s(g_82, 5)))))), 3));
                }
                if (p_41)
                {
                    int l_192[2][3];
                    int *l_193 = (void*)0;
                    int i, j;
                    for (i = 0; i < 2; i++)
                    {
                        for (j = 0; j < 3; j++)
                            l_192[i][j] = 4L;
                    }
                    if (((&g_138 == l_162) == l_192[1][0]))
                    {
                        return p_43;
                    }
                    else
                    {
                        char *l_211 = &g_171;
                        unsigned short *l_214 = &g_45[4][0][0];
                        l_193 = &g_146;
                        (*g_102) = ((((((**g_114) >= (safe_add_func_int8_t_s_s((((*l_162) = ((*l_128) | (l_197 = ((0L | g_196) & 0xBEL)))) > p_40), (((*l_193) > (safe_add_func_int32_t_s_s(((g_138 <= (((safe_sub_func_int8_t_s_s(l_154, 0xB1L)) >= g_82) < p_41)) >= l_202), (*g_102)))) <= 0x2521L)))) && 0L) != (*l_172)) != 0xD656L) & l_154);
                        (*l_193) = ((*l_128) = (safe_mod_func_int8_t_s_s((1L & ((*l_214) = ((safe_sub_func_int32_t_s_s((safe_add_func_uint16_t_u_u((p_43 != ((!p_41) | ((+g_78) || p_42))), (safe_lshift_func_int8_t_s_s(((*l_211) = (*l_193)), g_84)))), (safe_mod_func_uint16_t_u_u(65535UL, g_103[6][0][4])))) > g_119))), p_42)));
                        l_172 = &g_103[7][2][3];
                    }
                    l_160 = &p_42;
                }
                else
                {
                    unsigned l_222 = 9UL;
                    for (l_197 = 2; (l_197 >= 0); l_197 -= 1)
                    {
                        g_102 = (void*)0;
                        l_216[1][9][2] = l_215;
                    }
                    (*l_215) = (((l_217 < ((g_103[7][0][1] = ((safe_sub_func_uint8_t_u_u(0x70L, (safe_sub_func_uint32_t_u_u(9UL, ((l_222 ^ (safe_mod_func_uint8_t_u_u((*g_106), (((safe_sub_func_int8_t_s_s(g_82, (*g_115))) & ((safe_mod_func_uint32_t_u_u(((safe_add_func_uint32_t_u_u(0UL, (safe_add_func_uint32_t_u_u((0xF56DL && 3UL), p_40)))) | g_85), g_171)) & l_222)) | p_40)))) & p_43))))) || (*l_128))) > g_171)) ^ p_41) <= g_146);
                    for (p_43 = 0; (p_43 < 24); p_43++)
                    {
                        l_160 = l_235;
                        (*l_172) = p_40;
                        l_160 = &p_42;
                    }
                }
                (*l_235) = g_103[6][0][4];
            }
            else
            {
                int *l_236 = &g_103[8][1][0];
                l_236 = &l_197;
                g_102 = l_237;
                p_42 = l_238;
            }
        }
        if ((safe_unary_minus_func_uint8_t_u((**g_105))))
        {
            int ***l_240 = &l_129[1];
            unsigned *l_247 = (void*)0;
            unsigned *l_248 = (void*)0;
            unsigned *l_249 = &l_181[0][0][3];
            (*l_240) = &l_128;
            (*l_128) = (&g_171 == l_56);
            p_42 = 1L;
            p_42 = (safe_rshift_func_int8_t_s_s(g_196, (0x87L ^ (safe_lshift_func_int16_t_s_u(g_171, ((p_40 == (-5L)) == (p_40 ^ ((*l_249) = (((g_103[3][1][4] ^ (~(((*l_128) >= ((((*l_215) != (-5L)) | p_43) == 0xB1L)) && p_43))) ^ 1UL) >= p_40)))))))));
        }
        else
        {
            int ***l_254 = &l_129[1];
            int *l_258 = &g_103[6][0][4];
            int l_261 = 0xC6CE5F64L;
            short l_264[6] = {0x8610L,(-4L),(-4L),0x8610L,(-4L),(-4L)};
            unsigned l_340[1][6][2] = {{{0x4037CBAEL,0x583856E5L},{4294967292UL,4294967293UL},{0x583856E5L,4294967293UL},{4294967292UL,0x583856E5L},{0x4037CBAEL,0x4037CBAEL},{0x4037CBAEL,0x583856E5L}}};
            char *l_343 = &g_171;
            char **l_342[7] = {&l_343,&l_343,&l_343,&l_343,&l_343,&l_343,&l_343};
            int i, j, k;
            if ((safe_lshift_func_int8_t_s_s((safe_sub_func_int32_t_s_s((-2L), (((&l_160 != ((*l_254) = &g_102)) | ((*l_162) = ((*l_215) = p_40))) | p_43))), g_146)))
            {
                short l_262 = 0x88E5L;
                for (g_196 = 0; (g_196 >= 0); g_196 -= 1)
                {
                    g_102 = &g_146;
                    (*g_102) = p_43;
                    p_42 = p_41;
                    for (g_84 = 0; (g_84 >= 0); g_84 -= 1)
                    {
                        unsigned short **l_257 = &g_256;
                        (*g_102) = p_40;
                        l_257 = g_255;
                        return p_43;
                    }
                }
                l_258 = &g_103[6][0][4];
                if (p_41)
                {
                    short l_263[8][6] = {{0L,0xE239L,0L,0L,0xE239L,0L},{0L,0xE239L,0L,0L,0xE239L,0L},{0L,0xE239L,0L,0L,0xE239L,0L},{0L,0xE239L,0L,0L,0xE239L,0L},{0L,0xE239L,0L,0L,0xE239L,0L},{0L,0xE239L,0L,0L,0xE239L,0L},{0L,0xE239L,0L,0L,0xE239L,0L},{0L,0xE239L,0L,0L,0xE239L,0L}};
                    int i, j;
                    if ((safe_add_func_uint16_t_u_u(0x3CF1L, (l_261 & l_262))))
                    {
                        const char ***l_267 = &g_265;
                        l_264[3] = (p_40 | (0xF6L ^ (((!(l_263[7][2] & 0L)) >= (p_40 || (((1UL && 0x39L) || (p_40 != ((**g_114) > (**g_105)))) == 0xBC5BAC3DL))) & 0x632F5110L)));
                        g_102 = &g_146;
                        (*l_267) = g_265;
                    }
                    else
                    {
                        int *l_273 = &g_103[6][0][3];
                        g_272 = (safe_mod_func_uint16_t_u_u((((&g_102 != (*l_254)) == ((safe_rshift_func_uint8_t_u_s(p_40, 3)) == (g_146 = ((*l_128) = (((*l_215) = l_263[5][5]) & 1UL))))) != 0xA5CEL), (**g_255)));
                        l_273 = &p_42;
                    }
                    (*l_258) = (g_146 & g_171);
                    return l_263[0][1];
                }
                else
                {
                    return (**g_255);
                }
            }
            else
            {
                short l_275[9] = {0L,0L,0L,0L,0L,0L,0L,0L,0L};
                unsigned **l_284 = (void*)0;
                int *l_287 = &g_103[5][2][0];
                int i;
                if (((safe_unary_minus_func_uint16_t_u(((((*l_128) > l_275[1]) == (*g_115)) < (safe_add_func_uint8_t_u_u((**g_114), (safe_add_func_int16_t_s_s((safe_mod_func_int8_t_s_s((((*l_215) = ((4294967295UL || ((safe_mod_func_uint8_t_u_u((0L < p_42), g_157)) == (p_43 == p_43))) == 1L)) == p_41), p_43)), p_42))))))) | p_41))
                {
                    int l_285 = 4L;
                    int *l_320 = &g_272;
                    if (g_138)
                    {
                        char *l_286 = &g_171;
                        int l_297[9] = {(-1L),2L,(-1L),(-1L),2L,(-1L),(-1L),2L,(-1L)};
                        unsigned short *l_312 = (void*)0;
                        int i;
                        (*l_215) = (!(0UL > (((*g_115) = l_275[1]) > (((void*)0 != l_284) && (!((*l_286) = l_285))))));
                        (*l_258) = p_42;
                        l_287 = &g_272;
                        g_103[6][0][4] = (safe_rshift_func_uint16_t_u_s(((safe_rshift_func_uint16_t_u_s(((safe_add_func_uint8_t_u_u(1UL, p_42)) > (safe_add_func_uint32_t_u_u(((((safe_unary_minus_func_uint8_t_u((l_297[2] = (*g_106)))) && (l_297[0] = (safe_add_func_int16_t_s_s((((safe_rshift_func_uint16_t_u_u((safe_sub_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u(p_42, (*g_256))), (((**g_114) = (*g_115)) && ((safe_mod_func_uint32_t_u_u(((p_40 >= (safe_sub_func_uint16_t_u_u((g_313[5] = ((safe_mod_func_int16_t_s_s(((((*l_162) = g_85) >= (g_76 != l_297[5])) == 1L), 0xA471L)) & 0xF715L)), g_45[2][2][0]))) == (*l_215)), l_285)) < g_314)))), (*g_256))) ^ 0xE9CBL) && (-2L)), (**g_255))))) != (*l_287)) <= (**g_255)), p_43))), p_43)) > (-1L)), 7));
                    }
                    else
                    {
                        unsigned l_319[4][7];
                        int i, j;
                        for (i = 0; i < 4; i++)
                        {
                            for (j = 0; j < 7; j++)
                                l_319[i][j] = 9UL;
                        }
                        (*l_258) = ((safe_lshift_func_uint16_t_u_s(p_41, 9)) > ((*g_115) < (+(((safe_add_func_uint16_t_u_u(l_319[0][0], p_41)) < l_285) == (-1L)))));
                        g_321[9] = l_320;
                    }
                    if (p_42)
                    {
                        unsigned l_324 = 0x8C78E407L;
                        unsigned short ***l_325 = (void*)0;
                        unsigned short **l_327[6];
                        unsigned short ***l_326[2][5];
                        int i, j;
                        for (i = 0; i < 6; i++)
                            l_327[i] = &g_256;
                        for (i = 0; i < 2; i++)
                        {
                            for (j = 0; j < 5; j++)
                                l_326[i][j] = &l_327[0];
                        }
                        g_102 = &g_103[3][2][1];
                        (*l_258) = (safe_rshift_func_uint8_t_u_u(((l_324 = p_40) < p_42), ((g_255 = &g_256) != (g_328 = &g_256))));
                        l_258 = (void*)0;
                    }
                    else
                    {
                        (*l_215) = (*l_287);
                        p_42 = (65535UL & (*g_256));
                        (*l_287) = (((p_41 & g_196) && (*l_287)) ^ (((*l_215) = 0x4B3DC0BBL) || 0x180F1149L));
                    }
                    if ((p_43 ^ (*l_287)))
                    {
                        (*l_215) = (*l_320);
                        g_102 = &g_272;
                        l_320 = (void*)0;
                        (*l_128) = ((safe_rshift_func_uint8_t_u_u((((safe_unary_minus_func_int8_t_s(p_43)) > ((*l_162) = (safe_lshift_func_uint16_t_u_u(((**g_255) = ((l_287 = &p_42) != (void*)0)), 10)))) > (0L > (*l_128))), (p_43 == ((**g_114) = 0xFFL)))) && ((0xEC57L > (((*l_287) = p_42) >= p_40)) ^ 0x3D29L));
                    }
                    else
                    {
                        int *l_337 = &g_103[3][2][2];
                        g_102 = l_336;
                        (*l_336) = 0L;
                        l_337 = l_320;
                    }
                }
                else
                {
                    int l_341 = (-1L);
                    if ((safe_sub_func_uint8_t_u_u(((1UL && 0xCDBA9DBEL) ^ (g_171 = (((*l_287) >= ((**g_255) ^ l_340[0][3][0])) == l_341))), (*l_258))))
                    {
                        char ***l_344 = &l_342[2];
                        int l_345 = 0xFFE276B1L;
                        (*l_344) = l_342[2];
                        (*l_287) = l_345;
                    }
                    else
                    {
                        unsigned *l_346 = (void*)0;
                        unsigned *l_347 = &l_340[0][3][1];
                        (*l_336) = ((*l_258) = (((*l_347) = g_45[3][0][0]) != (0x8FL <= (g_348 != (void*)0))));
                        (*l_336) = (*l_336);
                    }
                    (*l_215) = p_40;
                    (*l_287) = (safe_rshift_func_uint16_t_u_s(((&g_256 == (void*)0) <= l_351), 8));
                    for (l_120 = 0; (l_120 > 8); l_120++)
                    {
                        if (p_40)
                            break;
                    }
                }
                for (g_272 = 8; (g_272 >= 3); g_272 -= 1)
                {
                    unsigned l_354 = 0xA530B490L;
                    for (g_119 = 2; (g_119 <= 8); g_119 += 1)
                    {
                        int i;
                        (*l_128) = ((*l_215) = ((l_275[g_272] == (l_275[g_119] | (*g_256))) ^ l_275[g_272]));
                        (*l_336) = l_354;
                        (*l_215) = (*l_215);
                    }
                }
                l_160 = &p_42;
            }
        }
    }
    return p_41;
}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_44, "g_44", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_45[i][j][k], "g_45[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_57, "g_57", print_hash_value);
    transparent_crc(g_76, "g_76", print_hash_value);
    transparent_crc(g_78, "g_78", print_hash_value);
    transparent_crc(g_82, "g_82", print_hash_value);
    transparent_crc(g_84, "g_84", print_hash_value);
    transparent_crc(g_85, "g_85", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_103[i][j][k], "g_103[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_119, "g_119", print_hash_value);
    transparent_crc(g_138, "g_138", print_hash_value);
    transparent_crc(g_146, "g_146", print_hash_value);
    transparent_crc(g_157, "g_157", print_hash_value);
    transparent_crc(g_171, "g_171", print_hash_value);
    transparent_crc(g_196, "g_196", print_hash_value);
    transparent_crc(g_272, "g_272", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_313[i], "g_313[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_314, "g_314", print_hash_value);
    transparent_crc(g_377, "g_377", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_402[i][j], "g_402[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_495, "g_495", print_hash_value);
    transparent_crc(g_565, "g_565", print_hash_value);
    transparent_crc(g_566, "g_566", print_hash_value);
    transparent_crc(g_567, "g_567", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_568[i][j], "g_568[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_569[i], "g_569[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_570, "g_570", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_571[i], "g_571[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_572, "g_572", print_hash_value);
    transparent_crc(g_573, "g_573", print_hash_value);
    transparent_crc(g_574, "g_574", print_hash_value);
    transparent_crc(g_575, "g_575", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_576[i][j][k], "g_576[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_577, "g_577", print_hash_value);
    transparent_crc(g_578, "g_578", print_hash_value);
    transparent_crc(g_579, "g_579", print_hash_value);
    transparent_crc(g_580, "g_580", print_hash_value);
    transparent_crc(g_581, "g_581", print_hash_value);
    transparent_crc(g_582, "g_582", print_hash_value);
    transparent_crc(g_583, "g_583", print_hash_value);
    transparent_crc(g_584, "g_584", print_hash_value);
    transparent_crc(g_585, "g_585", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_586[i], "g_586[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_587, "g_587", print_hash_value);
    transparent_crc(g_588, "g_588", print_hash_value);
    transparent_crc(g_589, "g_589", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_590[i], "g_590[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_591, "g_591", print_hash_value);
    transparent_crc(g_592, "g_592", print_hash_value);
    transparent_crc(g_593, "g_593", print_hash_value);
    transparent_crc(g_594, "g_594", print_hash_value);
    transparent_crc(g_595, "g_595", print_hash_value);
    transparent_crc(g_596, "g_596", print_hash_value);
    transparent_crc(g_597, "g_597", print_hash_value);
    transparent_crc(g_598, "g_598", print_hash_value);
    transparent_crc(g_599, "g_599", print_hash_value);
    transparent_crc(g_600, "g_600", print_hash_value);
    transparent_crc(g_601, "g_601", print_hash_value);
    transparent_crc(g_602, "g_602", print_hash_value);
    transparent_crc(g_603, "g_603", print_hash_value);
    transparent_crc(g_604, "g_604", print_hash_value);
    transparent_crc(g_605, "g_605", print_hash_value);
    transparent_crc(g_606, "g_606", print_hash_value);
    transparent_crc(g_607, "g_607", print_hash_value);
    transparent_crc(g_608, "g_608", print_hash_value);
    transparent_crc(g_609, "g_609", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 8; k++)
            {
                transparent_crc(g_610[i][j][k], "g_610[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_611, "g_611", print_hash_value);
    transparent_crc(g_612, "g_612", print_hash_value);
    transparent_crc(g_613, "g_613", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_614[i], "g_614[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_615, "g_615", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_616[i], "g_616[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_617, "g_617", print_hash_value);
    transparent_crc(g_618, "g_618", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_619[i][j], "g_619[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_620, "g_620", print_hash_value);
    transparent_crc(g_621, "g_621", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_622[i], "g_622[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_623, "g_623", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_624[i], "g_624[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_625[i][j][k], "g_625[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_626, "g_626", print_hash_value);
    transparent_crc(g_627, "g_627", print_hash_value);
    transparent_crc(g_628, "g_628", print_hash_value);
    transparent_crc(g_629, "g_629", print_hash_value);
    transparent_crc(g_630, "g_630", print_hash_value);
    transparent_crc(g_631, "g_631", print_hash_value);
    transparent_crc(g_632, "g_632", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_633[i], "g_633[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_634, "g_634", print_hash_value);
    transparent_crc(g_635, "g_635", print_hash_value);
    transparent_crc(g_638, "g_638", print_hash_value);
    transparent_crc(g_672, "g_672", print_hash_value);
    transparent_crc(g_681, "g_681", print_hash_value);
    transparent_crc(g_973, "g_973", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_1001[i], "g_1001[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
