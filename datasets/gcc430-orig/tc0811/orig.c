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



static const unsigned char g_2 = 0xFBL;
static int g_16 = 0xB35D5697L;
static unsigned g_17 = 0UL;
static char g_85 = 0x00L;
static unsigned short g_90 = 1UL;
static unsigned g_91 = 0x1ECF37D8L;
static unsigned short g_110 = 0UL;
static char g_118 = 1L;
static unsigned char g_127 = 0x5FL;
static char g_129 = 0x2EL;
static volatile int g_151 = 0xF936C86FL;
static unsigned char g_167 = 1UL;
static char g_182 = 0x24L;
static unsigned char g_185 = 0xDAL;
static unsigned g_186 = 1UL;
static char g_190 = 0xF8L;
static unsigned g_213[7][8][4] = {{{4294967287UL,4294967295UL,1UL,0xFAF0DCE5L},{1UL,1UL,0UL,0x2150C06EL},{1UL,4294967295UL,0xB0EE6687L,0xA1BE2514L},{1UL,1UL,3UL,0x7E6723FDL},{5UL,0x49E90ACFL,0x684B4F7AL,0x8CE4E9EFL},{0x84A3AFCEL,0xB7763822L,0x2C683EECL,4294967291UL},{0x4820B1D2L,4294967286UL,1UL,0xC0E06A67L},{0x34AB61E8L,4294967287UL,6UL,4294967295UL}},{{0UL,0x7A4D6825L,0x821C75A4L,0x8E7A130AL},{1UL,0x7C243BE0L,0x333103EEL,0xD845AF46L},{1UL,0x333103EEL,0x7E6723FDL,1UL},{0x8E7A130AL,0x84A3AFCEL,0x8E7A130AL,0UL},{0UL,0x3EF12D64L,4294967293UL,4294967295UL},{4294967295UL,0UL,0x319E1ED0L,0x542B8B1CL},{0x5042F786L,0x0F4AEB97L,0x333103EEL,0x0F4AEB97L},{0xB7763822L,1UL,4294967288UL,4294967295UL}},{{0xB922D4D5L,4294967295UL,0x34AB61E8L,4294967295UL},{0x3F941D61L,0x330A3237L,0UL,1UL},{0x3F941D61L,0x3E921230L,0x34AB61E8L,0x319E1ED0L},{0xB922D4D5L,1UL,4294967288UL,0xD845AF46L},{0xB7763822L,0x8CE4E9EFL,0x333103EEL,4294967293UL},{0x5042F786L,4294967295UL,0x319E1ED0L,0UL},{4294967295UL,0xFAF0DCE5L,4294967293UL,0x7A4D6825L},{0UL,4294967289UL,0x8E7A130AL,4294967295UL}},{{0x0FD7A930L,1UL,0x3F941D61L,0xB0EE6687L},{4294967295UL,0x6D627CF3L,4294967288UL,0x85954F18L},{0UL,4294967287UL,0UL,0xC6D075B9L},{0x8E7A130AL,0xB7763822L,0xC6D075B9L,1UL},{0x55638069L,0x593AEE7EL,0UL,3UL},{0x14B02CD4L,0UL,0xFFC12B63L,4294967287UL},{4294967295UL,0xD845AF46L,1UL,0x523FAAA2L},{4294967293UL,4294967291UL,0x9599C243L,0x330A3237L}},{{0x2150C06EL,0x4820B1D2L,0x8CE4E9EFL,0xFFC12B63L},{4294967286UL,4294967295UL,1UL,0x692D81DAL},{0x3E921230L,4294967295UL,4294967286UL,4294967295UL},{4294967291UL,1UL,0x0F3FEDECL,0x2C683EECL},{0UL,0x2150C06EL,0xB922D4D5L,0xC0E06A67L},{0x319E1ED0L,0xB4B7A3AEL,0x337C2121L,0x330A3237L},{0x55638069L,0x49E90ACFL,1UL,0x2150C06EL},{0UL,0x6D627CF3L,0xD845AF46L,6UL}},{{0x3EF12D64L,4294967295UL,4294967295UL,0x3EF12D64L},{0x17F3B7B1L,4294967288UL,1UL,4294967295UL},{0x2EFB72A3L,1UL,1UL,0xD722C878L},{0x542B8B1CL,4294967288UL,1UL,0xD722C878L},{0x49E90ACFL,1UL,0xC24BD377L,4294967295UL},{4294967286UL,4294967288UL,4294967295UL,0x3EF12D64L},{0x8E7A130AL,4294967295UL,0x319E1ED0L,6UL},{4294967287UL,0x6D627CF3L,0xC0E06A67L,0x2150C06EL}},{{0xB922D4D5L,0x49E90ACFL,0xD722C878L,0x330A3237L},{4294967287UL,0xB4B7A3AEL,4294967289UL,0xC0E06A67L},{0xA1BE2514L,0x2150C06EL,0x7E5C9114L,0x2C683EECL},{4294967295UL,1UL,0x0F4AEB97L,4294967295UL},{4294967295UL,0x17F3B7B1L,0x0FD7A930L,0x6D627CF3L},{0xF9448B16L,0x34AB61E8L,4294967295UL,0xB4B7A3AEL},{0xFFC12B63L,0x0F4AEB97L,0x49E90ACFL,4294967295UL},{0x3E921230L,6UL,0x34AB61E8L,4294967295UL}}};
static short g_215 = 0x0AF9L;
static unsigned g_221 = 0x17D50ABDL;
static short g_228[8] = {(-3L),(-3L),(-3L),(-3L),(-3L),(-3L),(-3L),(-3L)};
static char g_235[4] = {0x84L,0x84L,0x84L,0x84L};
static unsigned short g_258 = 65532UL;
static unsigned g_262[3] = {4294967289UL,4294967289UL,4294967289UL};
static short g_267 = 0L;
static volatile unsigned char g_268 = 0xB8L;
static int g_273 = 1L;
static int g_295 = 0x8B3BFD18L;
static volatile char g_329 = 0x0DL;
static int g_381 = 0x72450F0DL;
static unsigned g_448[10] = {1UL,0x71E6CCE7L,0x71E6CCE7L,1UL,0x71E6CCE7L,0x71E6CCE7L,1UL,0x71E6CCE7L,0x71E6CCE7L,1UL};
static volatile int g_480 = (-4L);
static int g_531 = 0x36C54126L;
static int g_532 = 1L;
static volatile int g_534 = (-1L);
static volatile short g_536 = 1L;
static int g_538 = 1L;
static volatile unsigned g_539 = 1UL;
static unsigned short g_557[6] = {0UL,0xDFBCL,0UL,0UL,0xDFBCL,0UL};
static int g_565 = 0x47A50B40L;
static volatile unsigned char g_566[4] = {0x3EL,0x3EL,0x3EL,0x3EL};
static char g_604 = 0xAFL;
static char g_605 = 0x22L;
static short g_606 = 1L;
static volatile unsigned char g_607[3] = {0xC2L,0xC2L,0xC2L};
static unsigned char g_667 = 0xADL;
static volatile short g_760 = 0xDAB3L;
static volatile unsigned g_761 = 0x16A8B3D1L;
static volatile unsigned char g_830 = 0xA2L;
static volatile short g_868 = 0xE779L;
static short g_869 = 1L;
static volatile unsigned short g_870 = 0xFB90L;
static volatile short g_976 = 1L;
static unsigned short g_1010[3][3][4] = {{{0xCFBEL,1UL,65530UL,1UL},{0xDBE7L,65531UL,5UL,0xCFBEL},{0UL,65528UL,1UL,0xD51EL}},{{5UL,0xDBE7L,65535UL,65535UL},{5UL,5UL,1UL,0UL},{0UL,65535UL,5UL,65528UL}},{{0xDBE7L,0xC7AEL,65530UL,5UL},{0xCFBEL,0xC7AEL,0xCFBEL,65528UL},{0xC7AEL,65535UL,0x9148L,0UL}}};
static unsigned g_1031 = 1UL;
static char g_1240 = 0xBDL;
static volatile char g_1280 = 1L;
static int g_1281 = (-1L);
static short g_1282 = (-3L);
static volatile int g_1287 = 0xC5BADD58L;
static unsigned g_1288[6] = {0x5B60B740L,0x5B60B740L,0x5B60B740L,0x5B60B740L,0x5B60B740L,0x5B60B740L};
static volatile short g_1398 = (-6L);
static unsigned g_1400 = 7UL;
static volatile char g_1527 = 0xA6L;
static unsigned short g_1528 = 5UL;
static int g_1687 = (-6L);
static char g_1688 = 7L;
static unsigned g_1690 = 0x28991CF4L;
static volatile unsigned short g_1695 = 0x1959L;
static volatile unsigned char g_1721 = 0xF3L;
static volatile char g_1797[6] = {0x22L,0x22L,0x22L,0x22L,0x22L,0x22L};
static int g_1799[9] = {(-4L),(-4L),0xF0BE885EL,(-4L),(-4L),0xF0BE885EL,(-4L),(-4L),0xF0BE885EL};
static volatile unsigned char g_1801 = 251UL;
static char g_1866 = (-1L);
static unsigned g_1913 = 4294967291UL;
static unsigned char g_1974 = 0x20L;
static unsigned char g_2017[6][7] = {{9UL,9UL,9UL,9UL,9UL,9UL,9UL},{249UL,249UL,249UL,249UL,249UL,249UL,249UL},{9UL,9UL,9UL,9UL,9UL,9UL,9UL},{249UL,249UL,249UL,249UL,249UL,249UL,249UL},{9UL,9UL,9UL,9UL,9UL,9UL,9UL},{249UL,249UL,249UL,249UL,249UL,249UL,249UL}};
static unsigned g_2032 = 0xCE55DD84L;
static volatile char g_2119 = 0xB6L;
static short g_2120 = 0xC670L;
static unsigned g_2121 = 4294967295UL;
static int g_2143 = 0L;
static volatile unsigned g_2145 = 0x27A77BB6L;
static volatile char g_2351 = 0xD8L;
static volatile short g_2359 = 1L;
static unsigned g_2360 = 0x3134F757L;
static unsigned g_2434[9] = {0x8D0D7F48L,0x8D0D7F48L,0x8D0D7F48L,0x8D0D7F48L,0x8D0D7F48L,0x8D0D7F48L,0x8D0D7F48L,0x8D0D7F48L,0x8D0D7F48L};
static volatile unsigned g_2552 = 0UL;
static unsigned g_2609[3][2][9] = {{{1UL,0xA228F34CL,0x41D0D02FL,0xA228F34CL,1UL,0xE3B821F3L,0xE3B821F3L,1UL,0xA228F34CL},{4294967295UL,0x1D68F2C4L,4294967295UL,0x083E6C30L,5UL,5UL,0x083E6C30L,4294967295UL,0x1D68F2C4L}},{{4UL,4294967295UL,0xE3B821F3L,0x41D0D02FL,0x41D0D02FL,0xE3B821F3L,4294967295UL,4UL,4294967295UL},{0xAACCAE88L,0x2294F95EL,0x083E6C30L,0x083E6C30L,0x2294F95EL,0xAACCAE88L,5UL,0xAACCAE88L,0x2294F95EL}},{{0xA228F34CL,4294967295UL,4294967295UL,0xA228F34CL,4UL,1UL,4UL,0xA228F34CL,4294967295UL},{0x1D68F2C4L,0x1D68F2C4L,5UL,0x2294F95EL,3UL,0x2294F95EL,5UL,0x1D68F2C4L,0x1D68F2C4L}}};
static volatile int g_2735 = (-5L);
static volatile unsigned char g_2760 = 246UL;
static unsigned g_2768 = 0x88119CC8L;
static unsigned g_2772 = 0UL;
static volatile int g_2796[7][9][1] = {{{0xBC52D876L},{(-1L)},{(-3L)},{(-1L)},{0xDDA76FBDL},{(-1L)},{0x5CE26484L},{0x084EE94CL},{(-3L)}},{{(-10L)},{(-3L)},{0x084EE94CL},{0x5CE26484L},{(-1L)},{0xDDA76FBDL},{(-1L)},{0x9952BDF1L},{(-1L)}},{{0xDDA76FBDL},{(-1L)},{0x5CE26484L},{0x084EE94CL},{(-3L)},{(-10L)},{(-3L)},{0x084EE94CL},{0x5CE26484L}},{{(-1L)},{0xDDA76FBDL},{(-1L)},{0x9952BDF1L},{(-1L)},{0xDDA76FBDL},{(-1L)},{0x5CE26484L},{0x084EE94CL}},{{(-3L)},{(-10L)},{(-3L)},{0x084EE94CL},{0x5CE26484L},{(-1L)},{0xDDA76FBDL},{(-1L)},{0x9952BDF1L}},{{(-1L)},{0xDDA76FBDL},{(-1L)},{0x5CE26484L},{0x084EE94CL},{(-3L)},{(-10L)},{(-3L)},{0x084EE94CL}},{{0x5CE26484L},{(-1L)},{0xDDA76FBDL},{(-1L)},{0x9952BDF1L},{(-1L)},{0xDDA76FBDL},{(-1L)},{0x5CE26484L}}};
static volatile unsigned g_2798 = 0x39C2DBC5L;
static int g_2825[10] = {0x62CF21FCL,0x62CF21FCL,0x3AB29B5AL,0x62CF21FCL,0x62CF21FCL,0x3AB29B5AL,0x62CF21FCL,0x62CF21FCL,0x3AB29B5AL,0x62CF21FCL};
static unsigned g_2886[1][1] = {{4UL}};
static unsigned g_2962 = 4294967295UL;
static char g_2988 = (-7L);



static char func_1(void);
static unsigned char func_6(unsigned char p_7);
static unsigned char func_20(unsigned p_21, unsigned p_22, int p_23, unsigned p_24);
static unsigned short func_27(char p_28, int p_29, char p_30);
static unsigned func_46(int p_47, const unsigned short p_48, unsigned char p_49, unsigned char p_50, unsigned p_51);
static unsigned func_53(char p_54, const unsigned p_55, short p_56, unsigned short p_57);
static unsigned short func_60(int p_61, char p_62);
static unsigned short func_70(int p_71);
static int func_72(unsigned p_73, int p_74, unsigned p_75);
static unsigned func_76(const int p_77, const unsigned p_78, int p_79, unsigned short p_80);
static char func_1(void)
{
    unsigned short l_3 = 0x8C0AL;
    int l_2435 = 0xE295C05DL;
    int l_2436 = 0xCC28F325L;
    int l_2708 = (-4L);
    short l_2709 = 0L;
    int l_2793 = 0L;
    int l_2794 = (-7L);
    int l_2797 = 0xC2085319L;
    unsigned l_2805 = 0xB2574FF0L;
    unsigned char l_2822 = 0xEDL;
    unsigned l_2849 = 4294967286UL;
    int l_2855 = (-1L);
    int l_2856 = 1L;
    int l_2857[3][4] = {{(-8L),(-8L),(-8L),(-8L)},{(-8L),(-8L),(-8L),(-8L)},{(-8L),(-8L),(-8L),(-8L)}};
    unsigned l_2863 = 8UL;
    short l_2922 = 0xBF9AL;
    int l_2987[4];
    unsigned l_2990 = 7UL;
    int i, j;
    for (i = 0; i < 4; i++)
        l_2987[i] = (-6L);
    l_2709 = (g_2 > (0xC2L ^ (l_3 == (l_2708 = (safe_mul_func_uint8_t_u_u((func_6(((safe_rshift_func_uint8_t_u_u(((l_2436 |= ((g_2 && ((safe_lshift_func_uint16_t_u_s((safe_add_func_int32_t_s_s((l_2435 = (safe_sub_func_uint8_t_u_u((g_2434[1] = ((((g_2 <= g_2) <= (g_17 = (g_16 &= 0xE525L))) | (safe_mul_func_uint8_t_u_u(func_20(g_2, g_2, l_3, g_2), l_3))) | 5L)), g_1687))), 0L)), 5)) & 0x6916L)) < l_3)) < 8UL), 0)) <= g_2120)) > l_3), (-4L)))))));
    if (((safe_lshift_func_int16_t_s_u(g_90, 7)) || 0xD975L))
    {
        unsigned l_2712 = 4294967295UL;
        int l_2721 = (-1L);
        int l_2753[8][4][8] = {{{0x2C98DE4DL,0xFD5210F6L,0x2C98DE4DL,0xF7F1C5E4L,(-1L),0xA5D05A83L,0x66E0050DL,0x2C28642CL},{0x2C28642CL,4L,(-3L),0x33FAA721L,4L,(-3L),0x2C28642CL,1L},{0x33FAA721L,9L,(-1L),0xBF11D1A3L,0x2C28642CL,(-10L),0L,9L},{(-7L),0L,4L,0xF7F1C5E4L,0xFD5210F6L,0L,0L,0xFD5210F6L}},{{(-7L),1L,1L,(-7L),(-7L),0x2C98DE4DL,(-1L),(-3L)},{0L,(-7L),0x71A13B8FL,(-1L),0x60C8B86DL,(-3L),0L,0x2C28642CL},{4L,(-7L),(-1L),0x66E0050DL,9L,0x2C98DE4DL,0x66E0050DL,0L},{0xFD5210F6L,1L,0x0BDDFAD8L,(-1L),0x2C98DE4DL,0L,0x33FAA721L,0L}},{{0x60C8B86DL,0L,2L,0L,0x60C8B86DL,(-10L),0xFD5210F6L,(-1L)},{(-1L),9L,(-3L),(-7L),(-1L),(-3L),0x2C98DE4DL,0L},{(-7L),0xF7F1C5E4L,(-3L),0x2C28642CL,1L,4L,0xFD5210F6L,0x66E0050DL},{(-1L),0x27E57E65L,2L,(-1L),0x2C28642CL,0x71A13B8FL,0x33FAA721L,0x33FAA721L}},{{(-3L),0xBF11D1A3L,0x0BDDFAD8L,0x0BDDFAD8L,0xBF11D1A3L,(-3L),0x66E0050DL,0xFD5210F6L},{0x33FAA721L,0x2C98DE4DL,(-1L),0xBF11D1A3L,(-1L),0L,1L,0xE4CE6F31L},{4L,1L,0x2C28642CL,(-3L),0xF7F1C5E4L,(-7L),0x0BDDFAD8L,0xF7F1C5E4L},{2L,0xF7F1C5E4L,(-10L),2L,4L,0xE4CE6F31L,(-3L),0x2C98DE4DL}},{{1L,2L,0xEB67822AL,0x0BDDFAD8L,0xEB67822AL,2L,1L,(-1L)},{0x66E0050DL,(-7L),0xFD5210F6L,(-1L),0xA5D05A83L,0x27E57E65L,(-1L),1L},{(-10L),0xF7F1C5E4L,2L,0x71A13B8FL,0xA5D05A83L,(-3L),6L,0x0BDDFAD8L},{0x66E0050DL,0xA97F84DBL,0x71A13B8FL,1L,0xEB67822AL,0L,0xF7F1C5E4L,(-3L)}},{{1L,0xA5D05A83L,9L,4L,4L,9L,0xA5D05A83L,1L},{2L,(-3L),6L,(-1L),0xF7F1C5E4L,0xEB67822AL,(-10L),(-1L)},{4L,0xD8A6DB57L,0x71A13B8FL,0x0BDDFAD8L,(-1L),0xEB67822AL,0x2C98DE4DL,6L},{0x2C98DE4DL,(-3L),(-1L),(-7L),(-3L),9L,(-1L),0xF7F1C5E4L}},{{6L,0xA5D05A83L,0xA97F84DBL,0L,(-1L),0L,0xA97F84DBL,0xA5D05A83L},{4L,0xA97F84DBL,0xEB67822AL,(-3L),0xD8A6DB57L,(-1L),(-1L),0xD8A6DB57L},{1L,0L,(-1L),1L,0xF7F1C5E4L,0x60C8B86DL,(-1L),(-7L)},{0xE4CE6F31L,1L,0L,(-1L),(-3L),0xA97F84DBL,0xE4CE6F31L,0x2C98DE4DL}},{{(-3L),0xA97F84DBL,0xE4CE6F31L,0x2C98DE4DL,0x71A13B8FL,0x71A13B8FL,0x2C98DE4DL,0xE4CE6F31L},{0L,0L,0xFD5210F6L,0xF7F1C5E4L,4L,0L,(-7L),(-1L)},{0L,0xA5D05A83L,(-10L),0xE4CE6F31L,(-3L),(-3L),0xD8A6DB57L,(-1L)},{0xA5D05A83L,0x71A13B8FL,2L,0xF7F1C5E4L,(-10L),2L,4L,0xE4CE6F31L}}};
        int l_2754 = 1L;
        char l_2795 = 1L;
        int l_2826 = 1L;
        int i, j, k;
lbl_2767:
        l_2712 = func_70(g_85);
        if ((((safe_lshift_func_int16_t_s_s((((l_2435 = (safe_add_func_int16_t_s_s(0x0D71L, (safe_add_func_uint32_t_u_u(((-6L) != (g_604 <= (safe_lshift_func_uint8_t_u_u(func_60(l_2721, l_2721), 6)))), (l_2712 > ((g_2120 = ((safe_add_func_uint8_t_u_u((((l_2436 |= (safe_mul_func_uint8_t_u_u(0xB7L, (safe_lshift_func_uint8_t_u_s((safe_add_func_int16_t_s_s(0x9250L, l_2721)), 4))))) > 0x4989L) | (-4L)), 0L)) != g_2017[0][1])) && l_2709))))))) ^ g_2032) >= g_2434[1]), l_2708)) >= 0x145EL) & g_2609[1][1][5]))
        {
            int l_2732 = 0x95324E82L;
            int l_2733 = 0L;
            int l_2734 = 0x61413D2DL;
            for (g_182 = 0; (g_182 > (-7)); g_182 = safe_sub_func_uint32_t_u_u(g_182, 6))
            {
                unsigned l_2738 = 0xD44081ADL;
                int l_2761 = 0x31F6A076L;
                int l_2762 = 0x2089D2E7L;
                int l_2763 = 0xADEB96C4L;
                if (g_1528)
                {
                    short l_2736 = 0L;
                    int l_2737 = 0x24A89C9BL;
                    --l_2738;
                    l_2754 = (safe_lshift_func_int16_t_s_u((safe_mod_func_uint16_t_u_u(((((l_2753[0][0][6] = func_53((safe_mod_func_int32_t_s_s(((((-1L) || (safe_mod_func_int8_t_s_s(((safe_mod_func_uint8_t_u_u(((safe_sub_func_int8_t_s_s(func_53(g_2145, l_2732, l_2737, l_2737), (-10L))) ^ l_2738), l_2738)) ^ g_667), l_2736))) & (-1L)) == 0L), l_2708)), l_2721, l_2738, g_606)) && g_538) & g_2) != 0L), l_2732)), g_1400));
                }
                else
                {
                    unsigned l_2759 = 0UL;
                    g_381 ^= (func_53((g_1281 && (safe_mul_func_uint8_t_u_u(((func_72(l_2732, g_1031, l_2709) <= (g_2359 < (l_2754 = (7UL ^ (g_127 == g_2121))))) > l_2738), l_2753[0][0][6]))), g_228[5], l_2759, l_2759) ^ (-4L));
                    return l_2712;
                }
                for (g_129 = 0; (g_129 <= 2); g_129 += 1)
                {
                    char l_2779 = (-1L);
                    int i;
                    g_2143 = func_53((g_262[g_129] >= l_2732), g_190, l_2753[0][0][6], l_2738);
                    if ((g_91 && g_2760))
                    {
                        unsigned l_2764 = 0x74DACFD7L;
                        l_2761 = l_2753[2][2][7];
                        l_2764--;
                        if (g_1400)
                            goto lbl_2767;
                        g_2768 = l_2764;
                    }
                    else
                    {
                        int l_2771 = 9L;
                        unsigned l_2778 = 1UL;
                        int l_2780 = (-1L);
                        g_2772 = (safe_rshift_func_int8_t_s_s(l_2771, 6));
                        g_2143 = ((safe_sub_func_int32_t_s_s((g_565 = (safe_add_func_uint16_t_u_u(((safe_unary_minus_func_uint32_t_u((((l_2778 &= g_2145) >= func_72(l_2779, ((l_2753[0][3][5] &= 1UL) ^ (-5L)), ((l_2436 = (g_2032 != l_2754)) & l_2738))) & l_2435))) != g_262[g_129]), 0x565EL))), 0L)) >= l_2780);
                    }
                }
                for (g_531 = 0; (g_531 <= (-26)); g_531 = safe_sub_func_int16_t_s_s(g_531, 5))
                {
                    if (g_186)
                        goto lbl_2767;
                }
            }
        }
        else
        {
            char l_2789 = (-1L);
            int l_2790 = 0x8EE641ECL;
            l_2754 |= ((safe_add_func_uint32_t_u_u(((((l_2712 > g_2434[1]) && (251UL | (func_60(g_2143, (safe_add_func_uint32_t_u_u((safe_mod_func_int8_t_s_s((l_2435 >= (0x2DL >= ((((-2L) < l_2436) != 7UL) != l_2753[7][3][3]))), g_2735)), l_2436))) | 0x1EF9L))) && 65535UL) & l_2789), g_2768)) ^ l_2790);
            l_2708 = (safe_lshift_func_int16_t_s_s(l_2721, 2));
        }
        ++g_2798;
        l_2754 = (safe_add_func_uint16_t_u_u((g_1913 < (safe_mul_func_uint16_t_u_u(func_72(l_2805, l_2795, (safe_add_func_int8_t_s_s((safe_lshift_func_int8_t_s_u(func_72((safe_rshift_func_uint8_t_u_u(l_2721, ((l_3 <= (0x1A3BADB8L < func_76(func_70((safe_rshift_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u((safe_mul_func_int16_t_s_s((l_2797 = ((g_228[5] = (l_2712 >= ((((safe_rshift_func_uint16_t_u_u((l_2822 == (g_2120 = func_70((g_1799[3] |= (l_2435 = (func_76((safe_mod_func_int32_t_s_s((g_1398 ^ g_1288[0]), g_2825[6])), l_2712, g_2, l_2753[5][3][7]) || g_1801)))))), l_2436)) != g_2609[2][0][4]) <= g_2609[1][0][2]) >= l_2753[6][1][7]))) | 0xCB49L)), l_2793)), 0x9EBCL)), 7))), g_1974, l_2708, g_2609[1][0][3]))) != 65532UL))), g_16, g_2434[2]), 7)), g_1690))), g_1913))), l_2826));
    }
    else
    {
        unsigned l_2838 = 9UL;
        int l_2839 = 0xE6424499L;
        for (g_85 = (-30); (g_85 >= (-30)); g_85 = safe_add_func_uint16_t_u_u(g_85, 5))
        {
            int l_2835 = (-1L);
            unsigned l_2843 = 4294967286UL;
            char l_2848[7][9][3] = {{{0L,0x10L,(-1L)},{0xC7L,(-10L),0L},{0xF5L,(-1L),0L},{0x10L,0x97L,(-1L)},{1L,0L,3L},{(-10L),(-1L),(-1L)},{0L,0L,0L},{1L,0xC2L,0L},{0xC2L,0x9CL,(-1L)}},{{1L,0x97L,3L},{0xC7L,0xC2L,(-1L)},{(-10L),0xC7L,0L},{1L,0x10L,0L},{(-1L),0L,(-1L)},{0xF5L,7L,0xC2L},{0xD6L,0x8FL,0xF5L},{0L,(-2L),(-10L)},{0x79L,(-9L),(-10L)}},{{0x8FL,(-9L),0xF5L},{0xCEL,2L,0xC2L},{(-2L),(-9L),0xF5L},{0xD6L,0xD6L,(-10L)},{0xCEL,0L,(-10L)},{0L,7L,0xF5L},{0x68L,(-9L),0xC2L},{0L,0L,0xF5L},{(-2L),0L,(-10L)}},{{0x68L,0x8FL,(-10L)},{(-9L),2L,0xF5L},{0x79L,7L,0xC2L},{0xD6L,0x8FL,0xF5L},{0L,(-2L),(-10L)},{0x79L,(-9L),(-10L)},{0x8FL,(-9L),0xF5L},{0xCEL,2L,0xC2L},{(-2L),(-9L),0xF5L}},{{0xD6L,0xD6L,(-10L)},{0xCEL,0L,(-10L)},{0L,7L,0xF5L},{0x68L,(-9L),0xC2L},{0L,0L,0xF5L},{(-2L),0L,(-10L)},{0x68L,0x8FL,(-10L)},{(-9L),2L,0xF5L},{0x79L,7L,0xC2L}},{{0xD6L,0x8FL,0xF5L},{0x79L,0x68L,1L},{(-9L),0xF2L,1L},{(-3L),(-9L),0x97L},{2L,0x8FL,1L},{0x68L,0xF2L,0x97L},{0xCEL,0xCEL,1L},{2L,(-3L),1L},{(-3L),0L,0x97L}},{{7L,(-9L),1L},{0x79L,(-3L),0x97L},{0x68L,0x79L,1L},{7L,(-3L),1L},{0xF2L,0x8FL,0x97L},{(-9L),0L,1L},{0xCEL,(-3L),0x97L},{0x79L,0x68L,1L},{(-9L),0xF2L,1L}}};
            int i, j, k;
            l_2839 = ((safe_sub_func_int8_t_s_s(((safe_mod_func_int32_t_s_s((safe_lshift_func_uint16_t_u_s(65535UL, g_1913)), l_2835)) | (l_2835 >= ((g_2609[2][0][4] >= func_60((g_531 ^ (safe_sub_func_int16_t_s_s(((((l_2708 = 7L) != g_448[2]) < (g_190 = (+(l_2838 || 0xBFL)))) != 0xA375F15DL), g_1799[3]))), l_2838)) != l_2793))), 0xF7L)) != 0xBBL);
            if (g_90)
                continue;
            for (g_267 = 0; (g_267 <= 5); g_267 += 1)
            {
                int l_2842 = (-8L);
                int i;
                if ((safe_lshift_func_int8_t_s_s(g_557[g_267], ((g_534 ^ g_118) || (g_182 = ((l_2835 ^= (l_2838 == g_1527)) >= g_1528))))))
                {
                    g_295 |= ((func_72(g_1801, (l_2842 &= l_2835), g_2017[2][1]) | (~l_2835)) & l_2838);
                    g_565 = (-1L);
                    l_2843 ^= g_557[g_267];
                }
                else
                {
                    l_2835 = ((safe_mul_func_int8_t_s_s(((l_2842 |= (0x9FD0C2F0L != (safe_lshift_func_int8_t_s_s((l_2848[5][5][0] |= (l_2838 && l_2843)), g_557[4])))) != l_2843), l_2835)) >= (0xAFF8L > (g_557[g_267] ^ g_1695)));
                }
                l_2842 = g_1280;
            }
        }
        g_538 = l_2838;
        return l_2838;
    }
    for (l_2822 = 0; (l_2822 <= 5); l_2822 += 1)
    {
        int l_2852 = (-10L);
        int l_2853 = 0xBEF250C7L;
        int l_2854 = 1L;
        int l_2858 = 1L;
        int l_2859 = 0x03E829E0L;
        int l_2860 = (-9L);
        int l_2861 = (-4L);
        int l_2862[4][9][7] = {{{0x2A3DF958L,0x5FA47E8AL,0x069A4B54L,5L,6L,0x010756C9L,(-1L)},{0x010756C9L,0xCBB0D2D6L,(-7L),0x88E8CFC6L,2L,0x88E8CFC6L,(-7L)},{(-1L),(-1L),(-1L),0xC7A1500DL,0xF758BE41L,0x7527F3BCL,0x59CD7388L},{0x900DC6BFL,1L,(-1L),(-1L),(-1L),0xCACC7F93L,0x88E8CFC6L},{(-1L),0x069A4B54L,(-7L),0x5F07754AL,0xF758BE41L,(-9L),0xAE823187L},{0L,(-6L),(-1L),0x069A4B54L,2L,0x10389E6BL,1L},{0x6AB12D0AL,1L,(-1L),8L,0xC7A1500DL,0x764F1886L,9L},{0x5F07754AL,0L,(-1L),0xCACC7F93L,9L,0x88E8CFC6L,0x6F061A72L},{0x6AB12D0AL,0x5F07754AL,0xCACC7F93L,5L,1L,0xBF612721L,0x6F061A72L}},{{0xF7C0D582L,0xC7A1500DL,0xFE2EADB2L,0L,0x6F061A72L,(-1L),9L},{9L,(-1L),0L,0x88E8CFC6L,0x900DC6BFL,1L,(-6L)},{0x2A3DF958L,(-2L),1L,1L,(-2L),0x2A3DF958L,0xFE2EADB2L},{(-8L),6L,0xF758BE41L,0x1172E7B7L,6L,8L,2L},{0xC7A1500DL,0L,6L,0x764F1886L,0xAE823187L,3L,7L},{0xFE2EADB2L,6L,(-1L),(-2L),0xFBC85DE2L,6L,1L},{0L,(-2L),0xC7A1500DL,(-9L),(-1L),7L,1L},{0xD3B05436L,(-1L),(-1L),0xFBC85DE2L,0xEB923AACL,0xF758BE41L,0x88E8CFC6L},{(-1L),0xC7A1500DL,0xBF612721L,(-1L),0x213566D3L,(-6L),0x069A4B54L}},{{0x10389E6BL,0x5F07754AL,8L,(-1L),(-6L),0xAE823187L,0xBF612721L},{0x764F1886L,0L,0x10389E6BL,0xFBC85DE2L,0xCBB0D2D6L,0x9198D151L,0x01B58944L},{0xFBC85DE2L,(-10L),(-7L),2L,(-1L),(-1L),2L},{(-10L),0xCBB0D2D6L,(-10L),0x213566D3L,0xFBC85DE2L,9L,0x1172E7B7L},{0xCACC7F93L,0x764F1886L,(-1L),0L,(-6L),0x1172E7B7L,(-1L)},{0x5F07754AL,(-6L),0x7527F3BCL,0x5FA47E8AL,(-7L),9L,4L},{(-1L),0x6AB12D0AL,8L,1L,0xA3083602L,(-1L),9L},{0x2A3DF958L,(-1L),0xEB923AACL,(-8L),0x5FA47E8AL,(-6L),0x764F1886L},{0x7527F3BCL,0x9198D151L,0L,0xCBB0D2D6L,(-9L),3L,0x88E8CFC6L}},{{0xD3B05436L,0xF758BE41L,1L,4L,9L,(-10L),0xBF612721L},{0xD3B05436L,0x1172E7B7L,(-1L),0x9198D151L,(-7L),0x59CD7388L,(-1L)},{0x7527F3BCL,(-1L),0x213566D3L,0xFE2EADB2L,0x2A3DF958L,(-2L),1L},{0x2A3DF958L,0xBF612721L,0L,0x764F1886L,0L,0xBF612721L,0x2A3DF958L},{(-1L),0x29FC59F4L,0xFBC85DE2L,3L,0x6AB12D0AL,0L,8L},{0x5F07754AL,0x010756C9L,0xF758BE41L,0x069A4B54L,0xEB923AACL,0xFE2EADB2L,3L},{0xCACC7F93L,2L,0xFBC85DE2L,0L,(-6L),0x010756C9L,0L},{0xCBB0D2D6L,0x6AB12D0AL,0x764F1886L,(-1L),0x6F061A72L,(-10L),6L},{(-1L),0xA4BEF528L,(-1L),0x6F061A72L,(-1L),0xD3B05436L,(-1L)}}};
        unsigned l_2953[9][6] = {{0xC43CC9F1L,4294967291UL,0x6E6C8CACL,0UL,0x3CA4D9A5L,0x3CA4D9A5L},{4294967291UL,0xC9D94031L,0xC9D94031L,4294967291UL,4294967293UL,0x3CA4D9A5L},{0x2D683A7EL,0x3CA4D9A5L,0x6E6C8CACL,4UL,0UL,4UL},{4294967293UL,4294967295UL,4294967293UL,0xE5878ED7L,0UL,0xC43CC9F1L},{0x6E6C8CACL,0x3CA4D9A5L,0x2D683A7EL,4294967293UL,4294967293UL,0x2D683A7EL},{0xC9D94031L,0xC9D94031L,4294967291UL,4294967293UL,0x3CA4D9A5L,0xE5878ED7L},{0x6E6C8CACL,4294967291UL,0xC43CC9F1L,0xE5878ED7L,0xC43CC9F1L,4294967291UL},{4294967293UL,0x6E6C8CACL,0xC43CC9F1L,4UL,0xC9D94031L,0xE5878ED7L},{0x2D683A7EL,4UL,4294967291UL,4294967291UL,4UL,0x2D683A7EL}};
        short l_2971 = 2L;
        int i, j, k;
        l_2849++;
        g_538 = g_2434[(l_2822 + 3)];
        --l_2863;
        for (g_869 = 4; (g_869 >= 0); g_869 -= 1)
        {
            short l_2866 = (-7L);
            int l_2874[2][7] = {{(-1L),0x661160E4L,(-1L),0x04D214FCL,0L,0L,0x04D214FCL},{(-1L),0x661160E4L,(-1L),0x04D214FCL,0L,0L,0x04D214FCL}};
            int l_2885 = 0x1B749F4EL;
            int i, j;
            l_2858 ^= l_2857[2][0];
            if (((g_2434[g_869] = (l_2866 | g_1695)) & l_2794))
            {
                unsigned l_2869 = 4294967294UL;
                unsigned short l_2873 = 1UL;
                g_273 = (((safe_mod_func_uint16_t_u_u(0x3293L, (++l_2869))) | func_72((l_2874[0][2] = ((safe_unary_minus_func_uint8_t_u(255UL)) || l_2873)), (safe_mod_func_int16_t_s_s((l_2853 &= (safe_rshift_func_uint16_t_u_s(0x5A4EL, (((+((safe_mul_func_int8_t_s_s(((!(func_72(((g_480 > 0UL) && ((0x5C62L & (l_2862[3][6][3] <= (safe_sub_func_int8_t_s_s((l_2885 &= (g_605 = ((safe_mod_func_uint16_t_u_u((0x55A47797L < l_2436), g_186)) >= g_228[4]))), 255UL)))) < l_2822)), g_2121, l_2856) < 1UL)) && 7L), g_532)) ^ g_1400)) <= l_2866) > g_110)))), 65535UL)), l_2866)) < l_2856);
                g_1281 = l_2857[2][3];
                for (g_16 = 0; g_16 < 3; g_16 += 1)
                {
                    g_607[g_16] = 9UL;
                }
                l_2862[0][8][4] = g_2552;
            }
            else
            {
                char l_2895 = (-6L);
                int l_2896[8] = {0L,(-1L),0L,0L,(-1L),0L,0L,(-1L)};
                unsigned l_2926 = 1UL;
                char l_2952 = (-5L);
                unsigned l_2974[2][5][9] = {{{8UL,1UL,4294967290UL,0xE6BA9994L,0x65D264A4L,0xC164D14CL,0x158E5840L,0x158E5840L,0xC164D14CL},{0xBDDF9C20L,0x5184BF4DL,0xB7A89715L,0x5184BF4DL,0xBDDF9C20L,0x435FA7DCL,0x131A3A4AL,0xC55279C8L,0x47845337L},{4294967290UL,0x158E5840L,0UL,0x0A992350L,0x0A2C9EA2L,9UL,0x717824FFL,9UL,0x0A2C9EA2L},{0x131A3A4AL,4294967295UL,4294967295UL,0x131A3A4AL,1UL,0x435FA7DCL,0xB7A89715L,4294967286UL,0x98E87BB6L},{0x6D65DBDCL,4294967295UL,0UL,0UL,1UL,0xC164D14CL,0xC164D14CL,1UL,0UL}},{{0x106CF363L,1UL,0x106CF363L,4294967291UL,1UL,4294967286UL,0x47845337L,0x28CDD501L,0x435FA7DCL},{4294967287UL,4294967290UL,1UL,8UL,0x0A2C9EA2L,0xE6BA9994L,0x0A2C9EA2L,8UL,1UL},{0x435FA7DCL,0x435FA7DCL,1UL,4294967291UL,0xBDDF9C20L,0x106CF363L,0x98E87BB6L,0xB7A89715L,4294967295UL},{0x717824FFL,0x0A992350L,0xE6BA9994L,0UL,0x65D264A4L,0x65D264A4L,0UL,0xE6BA9994L,0x0A992350L},{0x5EB13E27L,0xC55279C8L,1UL,0x131A3A4AL,0x5DBDFDDCL,4294967291UL,0x435FA7DCL,0x98E87BB6L,1UL}}};
                int l_2976 = 0xAA775BEBL;
                int l_2982[3][4] = {{1L,0x4B0596E7L,1L,0L},{1L,0L,0L,1L},{0x4B0596E7L,0L,1L,0L}};
                int i, j, k;
                l_2896[3] = ((g_2552 < func_72(func_72(g_2886[0][0], ((safe_add_func_uint32_t_u_u(g_1913, (g_1288[0] & (safe_lshift_func_int8_t_s_u((0x2E12727CL <= (((g_606 | l_2822) >= ((-1L) && (g_448[2] |= (safe_mul_func_uint16_t_u_u((g_557[4] = (safe_rshift_func_int16_t_s_u(l_2861, g_2434[1]))), l_2858))))) > g_182)), g_1010[2][0][0]))))) < g_182), l_2895), l_2859, g_2360)) && g_606);
                for (g_2121 = 0; (g_2121 <= 5); g_2121 += 1)
                {
                    int l_2942 = (-9L);
                    int l_2943 = 0x75729BA8L;
                    unsigned l_2981 = 0x99945161L;
                    int l_2989 = 1L;
                    int i, j;
                    if (((safe_sub_func_uint32_t_u_u(0x3AF6EBA4L, 1L)) > ((g_1288[(g_869 + 1)] = (safe_mul_func_int16_t_s_s(g_1288[l_2822], g_213[1][0][0]))) && (safe_lshift_func_int16_t_s_s(((l_2862[3][7][2] >= ((safe_lshift_func_uint8_t_u_s((safe_sub_func_int32_t_s_s((safe_unary_minus_func_uint8_t_u((g_2017[l_2822][(l_2822 + 1)]++))), ((func_72((func_72(g_1797[0], (l_2858 = g_1288[(g_869 + 1)]), (safe_sub_func_int8_t_s_s((l_2854 = func_72((safe_mul_func_int16_t_s_s(func_72(((safe_sub_func_int16_t_s_s(((l_2874[0][2] = (g_557[4] | ((safe_add_func_int32_t_s_s((safe_mod_func_int8_t_s_s((func_72((--g_2768), (g_381 = g_1010[2][1][3]), g_1288[3]) & l_2860), g_2434[g_869])), (-1L))) <= l_2895))) && l_2857[0][3]), g_221)) || l_2874[1][3]), g_190, g_16), g_262[2])), g_1288[(g_869 + 1)], l_2896[4])), 3UL))) & l_2822), g_1974, g_118) == g_17) != l_2922))), 1)) >= g_215)) != l_2896[3]), 12)))))
                    {
                        char l_2925 = 0xF2L;
                        int l_2933 = 0x52C164F4L;
                        int i;
                        l_2925 |= (((l_2859 = (~g_606)) < ((safe_lshift_func_uint8_t_u_s(((func_72(g_129, g_2, g_213[1][0][0]) & (func_72(g_273, g_2798, ((g_557[4] || ((!0x61L) == 0x9FL)) && 4294967291UL)) ^ g_2772)) ^ g_190), 2)) == l_2852)) | g_1400);
                        if (g_2121)
                            break;
                        ++l_2926;
                        g_1287 |= (l_2857[2][3] = func_72((++g_2360), g_1288[l_2822], ((g_1913 &= l_2925) & (((l_2933 |= ((safe_lshift_func_int16_t_s_u(0xF0BBL, g_448[6])) == (l_2822 || g_1400))) < (safe_mul_func_int8_t_s_s(0L, g_869))) & g_1799[4]))));
                    }
                    else
                    {
                        short l_2936 = 0x02FFL;
                        const int l_2939 = (-1L);
                        int l_2948[7] = {0x4D93F62BL,0x4D93F62BL,0x4D93F62BL,0x4D93F62BL,0x4D93F62BL,0x4D93F62BL,0x4D93F62BL};
                        int i, j;
                        l_2948[1] = ((l_2936 = g_557[4]) & ((func_72(g_2825[4], (safe_mul_func_uint16_t_u_u((l_2939 >= ((safe_rshift_func_uint16_t_u_u(l_2709, (((((l_2926 != (65535UL ^ (g_110--))) < 0x93L) >= 255UL) & (((g_2017[g_869][(g_2121 + 1)]++) <= func_72(l_2939, g_2434[1], g_1690)) <= 0x41L)) <= l_2895))) || l_2885)), l_2939)), g_1797[0]) <= l_2853) == l_2895));
                    }
                    l_2896[4] ^= l_2943;
                    if ((g_480 & 1L))
                    {
                        unsigned l_2949[1][8][9] = {{{0x6F65E790L,0x63D18804L,0x63D18804L,0x6F65E790L,0xC9CA3191L,0x6F65E790L,0x63D18804L,0x63D18804L,0x6F65E790L},{0xE6A3735BL,3UL,0UL,3UL,0xE6A3735BL,1UL,0x97A61EEFL,4294967295UL,0x97A61EEFL},{0x63D18804L,0xC9CA3191L,0x14C90D29L,0x14C90D29L,0xC9CA3191L,0x63D18804L,0xC9CA3191L,0x14C90D29L,0x14C90D29L},{0xE6A3735BL,1UL,0x97A61EEFL,4294967295UL,0x97A61EEFL,1UL,0xE6A3735BL,3UL,0UL},{0x6F65E790L,0xC9CA3191L,0x6F65E790L,0x63D18804L,0x63D18804L,0x6F65E790L,0xC9CA3191L,0x6F65E790L,0x63D18804L},{1UL,3UL,0x97A61EEFL,0xD2038E85L,0UL,0xD2038E85L,0x97A61EEFL,3UL,1UL},{0x6E5B14F4L,0x63D18804L,0x14C90D29L,0x63D18804L,0x6E5B14F4L,0x6E5B14F4L,0x63D18804L,0x14C90D29L,0x63D18804L},{0x97A61EEFL,0x0836B16BL,0UL,4294967295UL,0UL,3UL,0UL,4294967295UL,0UL}}};
                        int i, j, k;
                        l_2949[0][0][5]--;
                        if (g_605)
                            continue;
                        ++l_2953[3][0];
                        g_534 = (l_2874[0][2] >= ((((g_1866 ^= g_1527) | l_2858) < (((safe_rshift_func_int16_t_s_u(func_72((((g_1282 != g_262[2]) >= (safe_lshift_func_int16_t_s_u((l_2885 || func_72(g_1913, (~(0xAD21DD8EL && g_1528)), l_2896[3])), 9))) == l_2949[0][0][5]), l_2896[0], l_2855), 6)) || l_2854) >= 7UL)) & g_1688));
                    }
                    else
                    {
                        unsigned l_2975 = 8UL;
                        l_2861 &= ((g_2962++) ^ ((safe_rshift_func_int8_t_s_s(((safe_lshift_func_int8_t_s_s(((safe_rshift_func_int16_t_s_s(func_72(g_2434[g_869], (l_2971 >= (safe_mul_func_int8_t_s_s(func_72(l_2943, l_2974[0][4][6], l_2975), 1L))), g_2434[(l_2822 + 3)]), l_2942)) <= g_2351), l_2976)) || g_1801), 3)) > 0x1951L));
                        l_2982[2][2] &= (((safe_add_func_uint8_t_u_u((g_185 = l_2874[0][2]), (((+l_2861) != g_1031) <= (-8L)))) != (safe_sub_func_int32_t_s_s(g_186, (l_2885 = func_72((g_1695 > func_72(g_1288[5], l_2436, ((g_16 >= l_2981) ^ 0xBAL))), g_127, l_2885))))) | 0xD5158905L);
                    }
                    for (g_2120 = 3; (g_2120 >= 0); g_2120 -= 1)
                    {
                        int i;
                        g_538 = 0xDEFDC032L;
                        l_2943 = g_566[g_2120];
                        g_295 = ((l_2942 >= l_2859) && (l_2896[2] ^= ((safe_sub_func_int16_t_s_s(l_2974[0][4][6], (safe_add_func_uint32_t_u_u((g_1797[1] != l_2854), (l_2943 && (((l_2987[1] > l_2852) > (func_72(g_1799[3], g_2988, l_2862[0][7][2]) == (-8L))) != l_2989)))))) | g_2609[2][0][4])));
                        if (g_566[g_2120])
                            continue;
                    }
                }
            }
            l_2990++;
            g_538 = func_72((safe_add_func_uint32_t_u_u(l_2885, g_2017[4][4])), (safe_lshift_func_uint16_t_u_s(func_72((((safe_mul_func_uint16_t_u_u(((l_2708 & (g_1240 < (safe_rshift_func_int16_t_s_u((safe_sub_func_int32_t_s_s(g_228[5], (safe_add_func_uint8_t_u_u(9UL, g_830)))), l_2793)))) != 0UL), 0x4EC2L)) & g_1010[1][0][1]) && 4294967291UL), g_381, l_2853), l_2922)), g_2962);
        }
    }
    g_295 &= (~0xFCA77B68L);
    return l_2797;
}







static unsigned char func_6(unsigned char p_7)
{
    char l_2439 = 0xB7L;
    int l_2440 = 0L;
    int l_2441 = 0xB1AA73CDL;
    int l_2442 = 0xB00D8467L;
    char l_2506 = 0xE5L;
    short l_2526 = 1L;
    char l_2528[4];
    unsigned char l_2544 = 249UL;
    unsigned char l_2567 = 4UL;
    unsigned l_2586 = 0x9B92C974L;
    unsigned short l_2667 = 1UL;
    int l_2678 = 0xB0F8F30FL;
    int l_2679 = 0x13C33702L;
    int l_2692 = 0x79E441ABL;
    int i;
    for (i = 0; i < 4; i++)
        l_2528[i] = (-1L);
lbl_2468:
    g_534 = (-8L);
    if (((g_235[1] |= (g_538 >= (safe_mul_func_uint8_t_u_u((p_7 || (g_91 ^= (((g_1287 && (--g_213[3][0][1])) & p_7) ^ ((safe_rshift_func_int16_t_s_s(p_7, p_7)) != (l_2441 |= (p_7 <= ((safe_sub_func_int8_t_s_s(((safe_rshift_func_int8_t_s_u(p_7, g_182)) && p_7), (-1L))) < p_7))))))), g_118)))) > l_2439))
    {
        unsigned l_2451 = 0UL;
lbl_2464:
        l_2441 |= ((func_60(g_607[2], l_2451) & p_7) ^ ((safe_lshift_func_int8_t_s_u((1UL == g_16), (safe_mod_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s((255UL < g_1687), 0)), (safe_mul_func_int8_t_s_s((safe_sub_func_uint16_t_u_u((~l_2439), g_17)), 1UL)))))) >= 0x99L));
        for (g_532 = 0; (g_532 < (-18)); g_532--)
        {
            unsigned short l_2467 = 0x1BA5L;
            if (g_182)
                goto lbl_2464;
            if (g_1281)
                break;
            for (p_7 = (-11); (p_7 != 14); p_7 = safe_add_func_int32_t_s_s(p_7, 8))
            {
                for (g_565 = 1; (g_565 <= 7); g_565 += 1)
                {
                    for (g_273 = 1; (g_273 <= 7); g_273 += 1)
                    {
                        int i;
                        return g_1799[g_273];
                    }
                    return l_2467;
                }
                l_2440 = (~0xB132136FL);
            }
        }
        if (g_1687)
            goto lbl_2468;
    }
    else
    {
        unsigned l_2477 = 0x43A75645L;
        int l_2478[8][7] = {{0xD78469C3L,0x4266A49BL,0xC0323769L,0L,0L,0xC0323769L,0x4266A49BL},{7L,0L,6L,0L,7L,0L,6L},{0L,0L,0xC0323769L,0x4266A49BL,0xD78469C3L,0xD78469C3L,0x4266A49BL},{0x879B5ABDL,0xDAB319BDL,0x879B5ABDL,0L,0x879B5ABDL,0xDAB319BDL,0x879B5ABDL},{0L,0x4266A49BL,0x4266A49BL,0L,0xD78469C3L,0xC0323769L,0xC0323769L},{7L,0xDAB319BDL,6L,0xDAB319BDL,7L,0xDAB319BDL,6L},{0xD78469C3L,0L,0x4266A49BL,0x4266A49BL,0L,0xD78469C3L,0xC0323769L},{0x879B5ABDL,0L,0x879B5ABDL,0xDAB319BDL,0x879B5ABDL,0L,0x879B5ABDL}};
        int i, j;
        g_2143 |= (safe_sub_func_int8_t_s_s(func_70(((l_2441 = (1L <= p_7)) >= p_7)), (g_2017[5][1] ^= (safe_sub_func_int16_t_s_s((safe_sub_func_uint32_t_u_u((safe_mod_func_uint32_t_u_u((((l_2478[5][4] ^= l_2477) == ((l_2440 | (-4L)) && 1L)) >= g_2360), 0xFEAE13CCL)), l_2439)), 0x9BBFL)))));
        l_2478[5][4] = ((safe_mul_func_int8_t_s_s(((safe_sub_func_int16_t_s_s((g_167 | ((!p_7) >= l_2439)), (safe_add_func_uint32_t_u_u(0x8FB9C789L, g_2145)))) >= (safe_mul_func_int8_t_s_s((safe_unary_minus_func_int16_t_s((2L < (safe_add_func_int8_t_s_s((((g_1010[1][0][1] = func_72(l_2441, p_7, g_869)) || g_262[2]) == 0xC415L), 0L))))), 255UL))), 0x17L)) > l_2440);
        l_2478[5][4] = (safe_add_func_uint32_t_u_u(l_2439, ((safe_mod_func_int8_t_s_s(((safe_rshift_func_uint16_t_u_u((0xCCD6CB40L <= (((safe_mul_func_uint16_t_u_u(g_1690, (~(l_2440 = p_7)))) <= (((!0x06FAL) > p_7) == p_7)) != ((g_565 >= (safe_add_func_uint16_t_u_u((l_2442 = (g_110 != 0xD779L)), 1UL))) & p_7))), 12)) < 0L), p_7)) != l_2477)));
        l_2441 = ((safe_rshift_func_int16_t_s_s(func_70((func_20((((0xB36F6E48L & p_7) >= (safe_lshift_func_uint8_t_u_s(((g_531 && ((l_2478[1][4] = ((4294967293UL >= func_72((g_190 > l_2477), l_2478[5][4], g_1528)) < p_7)) <= g_605)) | p_7), l_2440))) || 0x7FE3L), g_329, g_1690, g_1010[1][0][1]) > l_2506)), g_1799[3])) >= 0x91L);
    }
    for (g_215 = 0; (g_215 < (-1)); --g_215)
    {
        unsigned l_2511 = 8UL;
        int l_2525 = 0x00FBEC83L;
        int l_2527 = 0xBCDE0451L;
        int l_2547 = 0L;
        int l_2549[8] = {1L,1L,1L,1L,1L,1L,1L,1L};
        const char l_2636 = (-1L);
        unsigned l_2642 = 4294967294UL;
        unsigned short l_2693 = 0xC428L;
        int i;
        g_381 &= ((g_228[5] < (p_7 && 0x48L)) && (l_2442 &= func_72(p_7, l_2440, (func_53((l_2441 = (((safe_lshift_func_uint8_t_u_s((((0x47625D12L <= (l_2511 ^ func_53(g_1913, p_7, l_2511, p_7))) == p_7) >= l_2511), p_7)) > p_7) ^ p_7)), g_17, p_7, p_7) & g_1528))));
        g_295 = func_53((l_2527 ^= (safe_unary_minus_func_int16_t_s(func_72(l_2511, (p_7 > (func_72((safe_rshift_func_int8_t_s_u(l_2442, 4)), g_235[0], (g_1288[0] = (safe_sub_func_uint8_t_u_u((l_2441 &= ((l_2525 = func_72(p_7, (safe_rshift_func_int8_t_s_u((safe_rshift_func_int16_t_s_u((safe_sub_func_uint32_t_u_u(p_7, g_167)), (((safe_mod_func_uint16_t_u_u(0xBF85L, l_2506)) ^ g_1695) != 0xA9L))), 3)), g_1031)) == g_2017[4][4])), g_262[2])))) ^ p_7)), l_2526)))), l_2511, l_2528[2], g_185);
        for (g_2032 = 0; (g_2032 <= 8); g_2032 += 1)
        {
            unsigned l_2540 = 0x933818D5L;
            int l_2548 = 0L;
            int l_2550 = 0x46ED2B69L;
            int l_2551 = 0L;
            for (g_606 = 8; (g_606 >= 0); g_606 -= 1)
            {
                int l_2545 = 0x9A415273L;
                int l_2546 = 0xA7F13C32L;
                for (g_110 = 2; (g_110 <= 8); g_110 += 1)
                {
                    g_295 |= p_7;
                    if ((safe_mul_func_uint16_t_u_u(p_7, p_7)))
                    {
                        return g_1527;
                    }
                    else
                    {
                        short l_2535 = 0x73D3L;
                        unsigned char l_2543 = 0UL;
                        l_2440 = (p_7 ^ (l_2525 & (((safe_lshift_func_int16_t_s_s(((0UL >= (safe_lshift_func_uint16_t_u_u(p_7, 12))) == func_72((g_607[0] == 1UL), g_1690, l_2535)), 7)) == g_213[1][0][0]) >= g_869)));
                        l_2440 &= func_72(((((safe_add_func_int16_t_s_s((l_2540 |= (safe_lshift_func_int16_t_s_u(g_2359, 7))), (g_1528 |= (l_2527 != ((g_2434[1] && (safe_rshift_func_uint16_t_u_u((p_7 & l_2543), (+(g_2434[1] || ((l_2535 | p_7) <= l_2525)))))) || p_7))))) == p_7) <= g_235[0]) > (-1L)), g_2120, p_7);
                        if (g_2121)
                            break;
                    }
                    for (g_381 = 0; (g_381 <= 3); g_381 += 1)
                    {
                        int i;
                        g_1287 = p_7;
                        l_2525 = l_2544;
                        --g_2552;
                        l_2525 |= (safe_mod_func_uint32_t_u_u(g_1797[1], (safe_sub_func_int8_t_s_s((g_85 = ((l_2527 = ((l_2547 |= (safe_add_func_int8_t_s_s((l_2442 &= (((g_235[g_381] = p_7) ^ (65528UL && (g_2143 ^ g_1400))) | (g_215 <= (l_2440 = 0x4DE4040FL)))), g_1031))) <= (+l_2546))) || 4294967287UL)), p_7))));
                    }
                    if (g_606)
                        break;
                }
            }
        }
        if ((safe_add_func_int8_t_s_s((safe_sub_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_s((l_2567 |= g_565), 3)), (safe_lshift_func_uint16_t_u_s((g_2119 != (safe_mod_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s((((l_2441 = l_2511) >= (g_1400 & (((safe_mul_func_int16_t_s_s(p_7, ((l_2547 |= p_7) > g_221))) | (safe_mul_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s((g_1282 = ((((safe_add_func_int8_t_s_s((safe_add_func_uint16_t_u_u((l_2525 = (l_2549[2] ^= (l_2442 = 0x0CFAL))), p_7)), l_2527)) || 0x4D249520L) >= l_2527) == g_557[5])), 13)), p_7))) != l_2586))) < l_2586), 2)), 1)), g_1031))), p_7)))), l_2544)))
        {
            short l_2587 = (-4L);
            int l_2588 = 0x1BA4B072L;
            int l_2589 = (-3L);
            l_2549[4] = func_72(((+(l_2589 = (((l_2588 = (l_2587 &= g_760)) <= func_72(g_2017[0][1], p_7, l_2439)) ^ p_7))) != ((g_557[2] == (safe_mod_func_uint8_t_u_u(p_7, (safe_sub_func_uint16_t_u_u(((func_72(g_262[1], p_7, p_7) < 0L) == l_2506), 0xA852L))))) | p_7)), l_2526, g_381);
            if (g_329)
                continue;
            return g_1688;
        }
        else
        {
            unsigned l_2596 = 0UL;
            int l_2610 = (-1L);
            int l_2673 = 1L;
            int l_2675 = 0x2ACB0C57L;
            int l_2676 = 0x396BD9E0L;
            int l_2680 = 0x34F1EE39L;
            int l_2682 = (-7L);
            for (l_2544 = 0; (l_2544 < 41); l_2544 = safe_add_func_int8_t_s_s(l_2544, 7))
            {
                unsigned char l_2611 = 0x13L;
                int l_2622 = 0L;
                int l_2623 = 0L;
                if (g_1288[0])
                    break;
                l_2441 ^= (p_7 & (l_2596 = 0x5FA9581EL));
                for (g_1282 = 0; (g_1282 <= (-8)); g_1282 = safe_sub_func_int16_t_s_s(g_1282, 8))
                {
                    const unsigned l_2603 = 0x5683AEE2L;
                    int l_2608[8];
                    int i;
                    for (i = 0; i < 8; i++)
                        l_2608[i] = 7L;
                    l_2440 = (safe_add_func_uint8_t_u_u(g_557[3], ((l_2549[4] |= (safe_rshift_func_uint8_t_u_s(l_2603, 3))) < (g_2609[2][0][4] |= (0xE57E84D6L || (g_2143 ^= (((safe_add_func_int32_t_s_s(((p_7 ^ p_7) != (g_167 &= (l_2608[7] = (((p_7 & func_53(l_2603, (safe_rshift_func_uint16_t_u_u(g_976, g_127)), g_604, p_7)) != g_2017[2][3]) | g_1288[0])))), p_7)) < l_2547) | 2L)))))));
                    g_534 = (p_7 || l_2586);
                    l_2611--;
                    if (((safe_mod_func_uint32_t_u_u((safe_add_func_uint16_t_u_u(((safe_sub_func_int32_t_s_s(((((safe_lshift_func_uint8_t_u_s(((++g_1288[0]) != l_2547), (l_2525 = ((l_2528[2] && 4294967286UL) >= ((safe_rshift_func_int8_t_s_u(0xD6L, 1)) || ((safe_mod_func_uint16_t_u_u((((safe_add_func_int32_t_s_s((l_2439 > func_72((g_221--), p_7, (func_53(l_2622, (~(safe_mod_func_uint16_t_u_u((0x00L > 0x36L), 0xB34BL))), l_2611, p_7) == g_1528))), g_557[0])) > p_7) != l_2623), l_2608[7])) ^ l_2636)))))) || g_91) || 0xEAL) < 1UL), 9L)) >= g_1799[2]), 1L)), g_448[5])) == p_7))
                    {
                        l_2623 = (0xB311L != 0x86BCL);
                        l_2610 |= (safe_add_func_uint16_t_u_u(l_2596, l_2549[0]));
                        g_1281 |= (5UL ^ (safe_mod_func_int8_t_s_s(1L, 6L)));
                        if (l_2527)
                            break;
                    }
                    else
                    {
                        int l_2641 = (-1L);
                        --l_2642;
                    }
                }
                l_2610 ^= ((0x7E78L < 0x27ADL) & g_1280);
            }
            for (g_1687 = 0; (g_1687 < 4); ++g_1687)
            {
                int l_2668 = 0x8FA6F544L;
                int l_2674 = 0xFA0C3676L;
                int l_2677 = 0xBFF8A7DAL;
                int l_2681 = 0L;
                unsigned char l_2683 = 0xF0L;
                int l_2691 = 0x2A6839D2L;
                for (g_186 = 0; (g_186 != 29); g_186 = safe_add_func_int32_t_s_s(g_186, 3))
                {
                    const int l_2663 = 0x72EFB959L;
                    short l_2671 = 0xF2E6L;
                    int l_2672 = (-7L);
                    for (g_185 = 0; (g_185 != 45); g_185 = safe_add_func_int32_t_s_s(g_185, 1))
                    {
                        unsigned short l_2651 = 7UL;
                        int l_2666 = 1L;
                        g_273 = (func_72(l_2651, l_2651, func_72((safe_sub_func_uint8_t_u_u(func_72((l_2610 = (safe_unary_minus_func_uint32_t_u((g_1690 &= (g_604 < ((l_2596 > (safe_add_func_uint8_t_u_u(g_268, (g_1688 = (g_605 = (((func_72(((safe_sub_func_int32_t_s_s(((safe_sub_func_uint32_t_u_u(((l_2663 != ((((g_90 & (((g_1010[0][0][3] = (safe_rshift_func_int16_t_s_u(p_7, g_2120))) == g_215) > p_7)) && p_7) <= p_7) ^ l_2666)) != p_7), g_1281)) ^ g_2017[0][0]), l_2667)) == (-1L)), g_2434[1], l_2663) == g_1913) || p_7) <= 0UL)))))) ^ 0x2C633615L)))))), g_1799[3], l_2528[2]), (-5L))), l_2544, l_2668)) > g_262[1]);
                        l_2671 &= (safe_sub_func_int32_t_s_s(0x2B4FFBEFL, (p_7 != (g_110 = l_2666))));
                        l_2672 ^= 0xFDAFBD5CL;
                    }
                }
                --l_2683;
                for (l_2667 = 0; (l_2667 <= 56); ++l_2667)
                {
                    int l_2688[6];
                    int l_2689 = 0x435675D5L;
                    int l_2690 = 0x2A06CC0BL;
                    int i;
                    for (i = 0; i < 6; i++)
                        l_2688[i] = 1L;
                    l_2547 = (g_538 |= 8L);
                    --l_2693;
                    return g_221;
                }
            }
            g_295 |= (0xB951090AL || (g_2609[2][0][4] &= func_72(l_2693, p_7, (g_1288[0] ^= ((safe_mul_func_int8_t_s_s(g_869, func_72(((safe_mul_func_int16_t_s_s(l_2547, (safe_add_func_int32_t_s_s((safe_lshift_func_uint8_t_u_s(g_1400, (safe_add_func_int16_t_s_s(l_2549[2], ((g_190 = (safe_sub_func_int8_t_s_s((g_182 = ((l_2440 ^ (g_1031 || 0x6AL)) && g_91)), 0xEAL))) && p_7))))), l_2693)))) | g_2017[4][4]), g_2143, p_7))) && 0L)))));
            l_2441 = (l_2682 = l_2528[2]);
        }
    }
    return p_7;
}







static unsigned char func_20(unsigned p_21, unsigned p_22, int p_23, unsigned p_24)
{
    const int l_41 = 0x82755FCAL;
    int l_42[5][10];
    int l_43 = (-2L);
    int l_44 = 0x457BBF0BL;
    int i, j;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 10; j++)
            l_42[i][j] = (-10L);
    }
    for (p_23 = (-26); (p_23 == (-10)); p_23 = safe_add_func_int8_t_s_s(p_23, 4))
    {
        unsigned l_35[7][8][4] = {{{1UL,0xA86D6A6CL,8UL,1UL},{0xBC40293EL,1UL,0x75E77332L,0x4A498A59L},{0x3DB2A25CL,0x8AF80453L,9UL,9UL},{0x2DF20086L,0xAECA2A42L,0UL,4294967290UL},{1UL,0x3CFEBDABL,1UL,0x7F668CDEL},{0xA7BB34E4L,0UL,4294967295UL,0x5EEC0DB1L},{1UL,0x1C2610AAL,2UL,0xAC39B398L},{0UL,0UL,0x7A53CC61L,1UL}},{{0xAECA2A42L,4294967295UL,0x2A7181CAL,4294967295UL},{0x8FBA323AL,0x1C6C8ECDL,1UL,4UL},{4294967295UL,9UL,4294967295UL,0xF544BD1AL},{0UL,1UL,4294967295UL,9UL},{4294967295UL,0UL,0x60806AF7L,0UL},{0x5EEC0DB1L,0x7A53CC61L,4294967295UL,7UL},{1UL,1UL,0x2EAE2646L,4294967293UL},{0xAC39B398L,4294967295UL,4UL,0x4A498A59L}},{{0xC342871EL,4294967295UL,0x8FBA323AL,0x5E06C083L},{4294967295UL,0x0C33490CL,0x3CFEBDABL,0x2A7181CAL},{0xFC65F31FL,1UL,0x2DF20086L,0x2DF20086L},{0xAC6AA04DL,0xAC6AA04DL,7UL,4294967293UL},{0xB9567464L,0x5E06C083L,1UL,0xAECA2A42L},{8UL,0UL,0x99DB2213L,1UL},{2UL,0UL,0x837A000CL,0xAECA2A42L},{0UL,0x5E06C083L,4294967295UL,4294967293UL}},{{0xC1979116L,0xAC6AA04DL,0xF93C5815L,0x2DF20086L},{1UL,1UL,7UL,0x2A7181CAL},{0x1526695BL,0x0C33490CL,0x1C6C8ECDL,0x5E06C083L},{4294967293UL,4294967295UL,0xE8932A22L,0x4A498A59L},{0x2DF20086L,4294967295UL,4294967295UL,4294967293UL},{1UL,1UL,0x1FD00955L,7UL},{1UL,0x7A53CC61L,0UL,0UL},{4294967293UL,0UL,1UL,9UL}},{{0UL,1UL,4294967295UL,0xA86D6A6CL},{4294967295UL,4294967295UL,0xCA9A92EDL,0xA7BB34E4L},{0x4309E953L,0xB9567464L,0x4AEDF2FFL,4294967295UL},{0x9DB650F8L,0x71708C99L,1UL,0x943CDC18L},{0x4F75DF15L,0x8FBA323AL,0x2DF20086L,0xA86D6A6CL},{4294967295UL,5UL,0x1526695BL,4294967293UL},{0UL,0xBC40293EL,4294967290UL,4294967295UL},{0x2DF20086L,0UL,7UL,0xF396434DL}},{{0x75E77332L,7UL,1UL,0x2EAE2646L},{4294967295UL,0x9DB650F8L,0UL,4294967292UL},{4294967295UL,1UL,0x2A7181CAL,0x7F668CDEL},{1UL,4294967290UL,0x1FD00955L,0xE10EF7D5L},{4294967295UL,0UL,1UL,0UL},{4294967291UL,4294967286UL,0x5EEC0DB1L,1UL},{1UL,4294967293UL,0x7A53CC61L,0xF93C5815L},{1UL,0xB405B751L,0xBCB567DFL,0x36FE5438L}},{{1UL,0xC342871EL,0x7A53CC61L,0x1FD00955L},{1UL,0x36FE5438L,0x5EEC0DB1L,0x5063F373L},{4294967291UL,0UL,1UL,0x2A7181CAL},{4294967295UL,0x3CFEBDABL,0x1FD00955L,0UL},{1UL,0x5E06C083L,0x2A7181CAL,0x3E09E13AL},{4294967295UL,0xFC65F31FL,0UL,0x75E77332L},{4294967295UL,3UL,1UL,0x4AEDF2FFL},{0x75E77332L,4294967295UL,7UL,8UL}}};
        unsigned short l_40 = 0xD6C1L;
        int l_2412 = 9L;
        int i, j, k;
        l_2412 &= ((4294967293UL >= ((g_2 <= (func_27(p_23, p_23, (((safe_add_func_uint16_t_u_u((((safe_rshift_func_uint16_t_u_s(l_35[0][3][2], l_35[5][2][3])) & ((p_23 >= ((l_44 = ((-1L) != ((l_43 = (safe_add_func_uint16_t_u_u((l_42[2][0] = (safe_rshift_func_int16_t_s_s((((((g_2 <= p_21) <= 0x07L) & l_40) <= l_41) == 0xC870L), p_21))), g_2))) && 0x7FA81B22L))) & 1UL)) < p_22)) ^ l_41), l_41)) <= l_40) & g_2)) & 0x6180L)) || l_40)) & g_1799[3]);
        for (g_532 = 0; (g_532 <= 3); g_532 += 1)
        {
            int i;
            for (g_1695 = 0; g_1695 < 6; g_1695 += 1)
            {
                g_1288[g_1695] = 4294967295UL;
            }
            l_43 = (0xD6L > g_235[g_532]);
            if ((safe_rshift_func_uint16_t_u_s(((g_448[(g_532 + 6)] = g_235[g_532]) == g_235[g_532]), 14)))
            {
                short l_2417 = 0x5B9BL;
                int i;
                l_2412 |= ((safe_lshift_func_uint8_t_u_u(func_53(g_448[g_532], (l_2417 = g_869), g_2, g_235[g_532]), p_23)) && (safe_mod_func_int32_t_s_s(((g_1282 = (safe_mod_func_int32_t_s_s(p_24, (safe_mod_func_uint8_t_u_u(((((safe_lshift_func_int8_t_s_u(g_760, 6)) | (0xABA4L < l_35[1][2][0])) & 0x99A4L) == p_23), p_23))))) != g_235[g_532]), g_448[2])));
            }
            else
            {
                return l_35[0][3][2];
            }
        }
    }
    p_23 = (((safe_mul_func_int8_t_s_s((g_190 && (l_42[2][0] | (((g_167 |= g_480) <= l_43) | (safe_mul_func_int16_t_s_s((((l_44 = (((safe_add_func_uint16_t_u_u(((safe_sub_func_uint16_t_u_u(0x634DL, g_565)) && (g_273 = p_24)), ((+(p_22 > l_42[2][0])) & p_22))) & (-7L)) <= g_1866)) ^ g_448[6]) | g_1400), 65530UL))))), l_42[3][0])) && 0L) != l_42[2][0]);
    return l_42[3][3];
}







static unsigned short func_27(char p_28, int p_29, char p_30)
{
    int l_45 = (-9L);
    int l_63[6];
    const char l_81 = 1L;
    unsigned char l_84 = 253UL;
    unsigned l_1865[4];
    short l_1967 = 0xA095L;
    int l_1968 = 0x7A19ABA5L;
    int l_1969 = 0x13FB0C6AL;
    int i;
    for (i = 0; i < 6; i++)
        l_63[i] = 1L;
    for (i = 0; i < 4; i++)
        l_1865[i] = 3UL;
    l_45 = (((~(l_45 == p_29)) <= 0x2A3BL) >= 0x04EC100FL);
    l_63[0] = ((p_30 < (func_46((l_1968 |= (safe_unary_minus_func_uint16_t_u((func_53((safe_lshift_func_uint8_t_u_s((func_60(l_45, (g_235[1] = (((l_63[3] &= 65534UL) <= (safe_lshift_func_int16_t_s_u((safe_sub_func_int8_t_s_s((safe_add_func_uint8_t_u_u((0xD184L < func_70(func_72(func_76(l_81, (((((safe_sub_func_uint32_t_u_u((l_84 = g_2), g_2)) >= g_85) ^ (g_91 ^= ((((g_90 &= (safe_mul_func_int16_t_s_s(((safe_lshift_func_int16_t_s_u(l_45, g_2)) < l_45), 1L))) && p_28) != 255UL) & l_45))) | l_81) & l_81), l_45, g_85), g_2, l_45))), 4UL)), l_81)), p_29))) != (-10L)))) < l_81), 0)), l_45, l_1865[3], g_1866) <= l_1967)))), p_30, p_30, l_1969, p_30) > l_1969)) <= g_1799[7]);
    return l_1865[3];
}







static unsigned func_46(int p_47, const unsigned short p_48, unsigned char p_49, unsigned char p_50, unsigned p_51)
{
    char l_1979 = 0L;
    int l_1992 = 0L;
    int l_1993 = 0x83A8A836L;
    int l_1996 = 0xF8D2CF0CL;
    char l_2007[9][5] = {{0xCFL,0L,0L,0xCFL,0xEDL},{0x38L,0xB8L,0x1BL,0x7AL,(-3L)},{0L,0x88L,0x88L,0L,1L},{0x1BL,(-1L),1L,0xB8L,0x43L},{0L,0x88L,0x88L,0L,1L},{0x1BL,(-1L),1L,0xB8L,0x43L},{0L,0x88L,0x88L,0L,1L},{0x1BL,(-1L),1L,0xB8L,0x43L},{0L,0x88L,0x88L,0L,1L}};
    char l_2030[2][4] = {{0x93L,0x93L,0x93L,0x93L},{0x93L,0x93L,0x93L,0x93L}};
    int l_2138 = (-1L);
    int l_2139[6] = {0x502FA32AL,(-6L),(-6L),0x502FA32AL,(-6L),(-6L)};
    unsigned l_2229 = 0x787665FAL;
    unsigned l_2370 = 0UL;
    short l_2410 = 1L;
    int i, j;
lbl_2319:
    l_1993 ^= (func_76(g_228[0], (p_51 = ((safe_add_func_int8_t_s_s(((g_1974 = (safe_lshift_func_uint8_t_u_u(p_51, 3))) <= func_72((g_221 = (~func_72(g_127, ((g_213[6][2][3] ^ (((safe_lshift_func_uint8_t_u_u((p_49 = (l_1979 | (func_72((+((((((safe_rshift_func_uint8_t_u_s((safe_mod_func_int16_t_s_s((g_1690 ^ (safe_lshift_func_uint8_t_u_u((((!(p_49 && ((safe_add_func_uint16_t_u_u(l_1979, (safe_sub_func_int32_t_s_s((safe_mul_func_int16_t_s_s((l_1992 = g_607[2]), g_448[8])), p_47)))) || 0xAEFFB574L))) && 0x76E4L) && 0UL), 6))), 6L)), 7)) || (-8L)) >= l_1979) > g_2) > p_48) ^ 0x8161C3DDL)), p_48, g_1010[1][0][1]) != 1UL))), g_869)) > p_47) >= 0L)) > p_47), g_215))), l_1979, l_1979)), 0x51L)) & 0x34L)), p_47, g_110) >= 4294967295UL);
    if ((((g_1528++) && (((safe_lshift_func_uint16_t_u_u(((0x14L && (func_76((((g_1400 & (p_51 > (--g_1010[1][1][0]))) & (((safe_add_func_int32_t_s_s(g_1031, l_2007[3][1])) ^ l_2007[3][1]) < func_72(l_1996, ((0x33L || func_72((safe_lshift_func_int16_t_s_u(((l_1992 = (l_1996 | g_604)) > 65535UL), g_185)), l_2007[8][0], g_830)) && p_50), g_127))) < p_49), g_90, l_1993, p_48) <= l_1993)) != p_49), l_2007[4][2])) > g_1288[3]) < p_48)) & p_49))
    {
        int l_2010 = 0x471D14FDL;
        int l_2031 = 0x20AC2138L;
        unsigned short l_2033[7] = {65535UL,65528UL,65528UL,65535UL,65528UL,65528UL,65535UL};
        unsigned l_2034 = 0UL;
        int l_2048[3];
        unsigned short l_2049 = 65529UL;
        int l_2115 = 0xE67CD214L;
        int l_2116 = 0xF46AAF16L;
        unsigned char l_2136 = 0x65L;
        short l_2193 = (-10L);
        char l_2224 = 0x89L;
        unsigned l_2286 = 6UL;
        unsigned l_2310 = 1UL;
        unsigned l_2347 = 4294967291UL;
        int l_2355 = (-2L);
        int l_2356 = 0x8D19BCF8L;
        int l_2382 = 0x4FF745BDL;
        int i;
        for (i = 0; i < 3; i++)
            l_2048[i] = 0x54693CEAL;
lbl_2388:
        g_2017[4][4] |= (l_1996 = ((l_1992 = l_2010) != (safe_sub_func_uint8_t_u_u((safe_add_func_uint16_t_u_u(func_70(g_295), g_1866)), (safe_add_func_uint16_t_u_u(p_47, l_1993))))));
        if (func_76(l_2010, (((func_60((((l_1992 >= ((safe_add_func_int8_t_s_s((safe_mod_func_int16_t_s_s((l_1996 = ((4294967289UL < (safe_add_func_uint16_t_u_u(func_76((g_1398 < (g_182 |= g_1288[0])), (g_262[2] = (g_2032 = (((g_606 & func_72((safe_mod_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u(l_1992, (l_2031 = (255UL != (safe_mod_func_uint32_t_u_u(func_72((g_262[2] = (((p_49 &= (l_2030[0][1] != p_48)) | 255UL) == 0x95L)), l_2007[3][1], l_2010), p_50)))))), l_2007[3][1])), l_1979, g_295)) || p_49) | p_47))), p_50, g_267), l_2033[5]))) > 65535UL)), 0x4A53L)), l_2010)) && 0x73L)) == l_2034) ^ p_47), p_51) != 0x06L) && l_1993) == l_1992), l_2033[1], p_47))
        {
            unsigned char l_2035 = 0xFCL;
            l_2035--;
        }
        else
        {
            int l_2042 = 1L;
            int l_2045 = 8L;
            int l_2062 = (-1L);
            int l_2063 = (-1L);
            int l_2223 = 0x5471D3D5L;
            int l_2249 = 0x8698BB7DL;
            unsigned l_2252[4];
            short l_2263 = 0xEFBCL;
            unsigned l_2268 = 0x178FDA11L;
            char l_2289 = 2L;
            unsigned l_2323 = 4294967293UL;
            int l_2337[2][10][5] = {{{0L,(-1L),0L,0x99939951L,1L},{0xD4CA055DL,1L,9L,0L,0x6F789BF4L},{0x332953B3L,(-3L),0L,1L,1L},{0x77AA595CL,4L,9L,(-1L),(-1L)},{0L,0x8CDC9AB5L,0L,0x256029CEL,0x99939951L},{(-9L),0xE34E1F80L,9L,0xBDDEE57CL,(-1L)},{1L,0x13A7FC36L,0L,1L,0x256029CEL},{1L,(-7L),9L,(-1L),0L},{(-1L),1L,(-3L),(-1L),(-1L)},{(-7L),0xBDDEE57CL,(-7L),9L,0xA0456702L}},{{0x8CDC9AB5L,0x256029CEL,(-3L),0xE7CB4D41L,4L},{1L,(-1L),(-7L),0L,9L},{0x4289991AL,1L,(-3L),4L,0xAF12C3F8L},{0xE34E1F80L,0L,(-7L),2L,2L},{(-3L),0x99939951L,(-3L),0x22B98F70L,0xE7CB4D41L},{(-1L),0x6F789BF4L,(-7L),0xA0456702L,0x10283E06L},{0x13A7FC36L,1L,(-3L),0xAF12C3F8L,0x22B98F70L},{4L,(-1L),(-7L),0x10283E06L,0L},{(-1L),1L,(-3L),(-1L),(-1L)},{(-7L),0xBDDEE57CL,(-7L),9L,0xA0456702L}}};
            int i, j, k;
            for (i = 0; i < 4; i++)
                l_2252[i] = 0xEB81B26BL;
lbl_2316:
            l_2049 = ((safe_add_func_uint16_t_u_u((((g_235[0] < (p_47 == (l_2042 = (l_2042 >= ((safe_lshift_func_uint8_t_u_u((0x81BFL >= func_72(l_2010, g_1282, (((++g_91) != (p_50 < (p_51 > (func_72(((0x7201L || g_1799[1]) & p_50), l_1996, l_2030[1][3]) ^ 0x302C02B2L)))) != g_262[0]))), l_2045)) ^ l_1979))))) < l_2048[0]) >= p_47), p_51)) | l_2045);
            if (((p_49 & (func_60(p_50, ((safe_rshift_func_int16_t_s_s(func_53((safe_rshift_func_int8_t_s_u(((safe_sub_func_uint8_t_u_u(((func_60(p_49, (l_1992 &= g_761)) & ((safe_lshift_func_uint8_t_u_s((safe_sub_func_uint32_t_u_u(((l_2042 |= p_49) ^ (l_2045 ^= l_2048[0])), g_2)), 4)) != (l_2062 ^= (safe_mul_func_int8_t_s_s(l_2033[2], 1L))))) < l_2063), (-10L))) <= p_50), g_1240)), g_604, g_213[1][0][0], p_47), 11)) || 0xD093L)) ^ p_49)) >= 0xB115AE93L))
            {
                unsigned short l_2070[1];
                int l_2075 = 0xFA1E753EL;
                int l_2118 = 0x3C276CBCL;
                unsigned l_2148 = 0xAE8FE033L;
                int i;
                for (i = 0; i < 1; i++)
                    l_2070[i] = 0xD381L;
                if ((0x3774E850L & (((safe_add_func_int16_t_s_s(l_2007[3][1], g_235[0])) < (func_72(g_976, (g_273 = (l_2031 ^= (safe_lshift_func_uint8_t_u_u(p_47, l_2033[3])))), (safe_mod_func_uint8_t_u_u((l_2070[0] = g_531), l_2033[5]))) != 8L)) > g_213[1][0][0])))
                {
                    g_565 = (safe_add_func_uint16_t_u_u(8UL, l_2070[0]));
lbl_2150:
                    g_538 = 0x3499781CL;
                    for (g_90 = 0; (g_90 <= 1); g_90 += 1)
                    {
                        l_2075 = (safe_sub_func_uint32_t_u_u(g_221, (!p_48)));
                    }
                    g_538 = (safe_rshift_func_int16_t_s_s((l_2062 && (safe_lshift_func_uint16_t_u_u(p_48, 14))), (l_2031 = (safe_mul_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_s(((((safe_add_func_int8_t_s_s(((g_667 > p_49) <= ((safe_mul_func_uint8_t_u_u((((p_50 = 0x7BL) >= (((safe_mul_func_int16_t_s_s((p_47 != ((((safe_sub_func_int8_t_s_s(l_2070[0], (safe_lshift_func_int16_t_s_s(p_49, func_72((l_1996 <= p_51), g_1913, p_47))))) == 0L) || g_1974) && g_1688)), 0UL)) & 255UL) == 0xF07933F9L)) > p_49), g_605)) >= l_2049)), (-8L))) < g_129) & p_51) == g_1687), 5)) || g_268), g_538)))));
                }
                else
                {
                    short l_2102 = 1L;
                    int l_2114 = (-6L);
                    int l_2117 = 1L;
                    int l_2141 = 0xEF7B0372L;
                    if ((0xB7D0L <= (((safe_rshift_func_uint16_t_u_s(p_48, 3)) | ((l_2070[0] | p_47) > ((0x45C9L > func_70(l_1996)) < g_2017[4][4]))) != ((safe_mul_func_uint16_t_u_u(65535UL, 1UL)) < 1L))))
                    {
                        char l_2112 = 0x5BL;
                        int l_2113[1][10][1];
                        int i, j, k;
                        for (i = 0; i < 1; i++)
                        {
                            for (j = 0; j < 10; j++)
                            {
                                for (k = 0; k < 1; k++)
                                    l_2113[i][j][k] = 0xE50BF058L;
                            }
                        }
                        l_2112 &= ((l_2070[0] && p_49) & (safe_mul_func_int8_t_s_s(((safe_add_func_int16_t_s_s(((!l_2102) != (safe_mod_func_uint32_t_u_u(((safe_sub_func_int8_t_s_s((safe_unary_minus_func_uint16_t_u(l_2070[0])), (safe_mul_func_int8_t_s_s(l_2070[0], (func_76(p_51, p_47, p_51, (safe_mul_func_int16_t_s_s(g_235[0], 1L))) && p_51))))) & 2UL), g_1913))), 0L)) & l_2102), 0xE2L)));
                        g_2121++;
                    }
                    else
                    {
                        unsigned l_2137 = 0x356B5D98L;
                        int l_2140 = 0x2F6F6C71L;
                        int l_2142 = 0xEE4E7CD9L;
                        int l_2144 = (-1L);
                        l_1992 = (l_2137 = func_76(((safe_lshift_func_uint16_t_u_u((safe_mul_func_int8_t_s_s(g_190, (-1L))), (safe_sub_func_uint32_t_u_u(g_607[2], func_72((safe_lshift_func_int16_t_s_u(g_1528, 13)), (l_2115 = func_72(((g_1974 | 255UL) && ((safe_add_func_uint8_t_u_u(g_267, ((safe_lshift_func_int8_t_s_s(func_72(l_2048[0], (((l_2114 <= 0xC80DL) | g_2017[5][1]) >= l_1993), g_129), 6)) | l_2136))) == 0xAB311896L)), p_50, p_47)), l_2118))))) | g_190), p_51, g_1974, g_85));
                        g_2145--;
                    }
                    for (g_1281 = 2; (g_1281 <= 9); g_1281 += 1)
                    {
                        unsigned l_2149[3];
                        int i;
                        for (i = 0; i < 3; i++)
                            l_2149[i] = 0xEB6A68F4L;
                        l_2149[1] &= func_76(g_604, g_273, func_72(g_2017[1][3], p_47, l_2141), (l_2148 & 0x4B574164L));
                        g_273 = (-1L);
                        if (g_185)
                            goto lbl_2150;
                    }
                }
                l_2063 = (0xB1L >= func_60((safe_mul_func_uint16_t_u_u((p_47 && ((l_2031 &= 65532UL) >= 0L)), (l_2034 | (l_2075 = l_2034)))), (((safe_mod_func_int32_t_s_s((0xC362F074L > (safe_sub_func_int8_t_s_s(((g_110 = ((g_667 = (p_50 = (6L <= ((l_2062 = p_51) < g_185)))) ^ g_1288[1])) == 0x4809L), g_1288[5]))), l_1996)) & l_2070[0]) < g_607[1])));
            }
            else
            {
                unsigned l_2173 = 9UL;
                int l_2174 = 9L;
lbl_2176:
                g_2143 ^= (safe_mod_func_uint16_t_u_u((l_2116 = 1UL), (+0x844CL)));
                if (((0xE484L | ((safe_sub_func_uint16_t_u_u((l_2030[1][1] && (((g_273 = (safe_sub_func_uint16_t_u_u((0UL != (l_2045 = 0L)), g_536))) || 0xD394DED4L) > (p_47 < 1UL))), (safe_mod_func_int32_t_s_s(p_49, 1L)))) == 0L)) ^ g_186))
                {
                    return g_534;
                }
                else
                {
                    unsigned char l_2175[7][2] = {{255UL,0x3DL},{247UL,0x3DL},{255UL,247UL},{253UL,253UL},{253UL,247UL},{255UL,0x3DL},{247UL,0x3DL}};
                    int i, j;
                    if ((safe_lshift_func_int16_t_s_u(l_2031, (g_185 == (safe_mul_func_int16_t_s_s(0xAE35L, func_72((safe_sub_func_int32_t_s_s((safe_rshift_func_int8_t_s_s(l_2033[4], 2)), 5UL)), (+0xA87CAA8CL), l_2042)))))))
                    {
                        l_2173 = (l_2138 ^= g_667);
                        l_2062 = g_869;
                    }
                    else
                    {
                        l_2174 = ((func_70(p_50) < g_1799[3]) < (g_1687 & p_51));
                        l_2175[6][1] &= (((0x4BA9L >= ((+g_607[2]) > l_2174)) > (65535UL <= (p_51 >= 6L))) < g_118);
                        if (p_51)
                            goto lbl_2176;
                    }
                    return p_50;
                }
            }
lbl_2315:
            if ((safe_rshift_func_int16_t_s_u((g_1282 = func_76((safe_add_func_uint32_t_u_u(p_51, (safe_mul_func_uint16_t_u_u((g_1010[2][1][2] = (safe_rshift_func_uint8_t_u_s(0UL, (g_1797[1] | 0L)))), (p_51 < (p_48 ^ l_1979)))))), (255UL > ((g_448[3] || p_47) & p_47)), p_49, l_1996)), 9)))
            {
                int l_2192 = 1L;
                int l_2239 = (-2L);
                unsigned char l_2244[5];
                int l_2262 = 0xEF3F7B28L;
                int l_2266[5] = {0x1B608CFAL,0x1B608CFAL,0x1B608CFAL,0x1B608CFAL,0x1B608CFAL};
                int i;
                for (i = 0; i < 5; i++)
                    l_2244[i] = 0x41L;
                for (g_190 = 5; (g_190 >= 0); g_190 -= 1)
                {
                    int i;
                    if (((g_235[2] = (safe_add_func_int16_t_s_s(((safe_mod_func_uint32_t_u_u(g_557[g_190], 1L)) | g_565), l_1993))) == 0x0CL))
                    {
                        if (g_221)
                            break;
                    }
                    else
                    {
                        return g_273;
                    }
                }
                for (g_531 = 0; (g_531 <= (-7)); g_531 = safe_sub_func_uint16_t_u_u(g_531, 6))
                {
                    unsigned short l_2210 = 1UL;
                    unsigned short l_2211[7] = {0x839CL,0x839CL,0x839CL,0x839CL,0x839CL,0x839CL,0x839CL};
                    int l_2230 = 0x06D7CDFCL;
                    unsigned char l_2231 = 0UL;
                    int i;
                    for (g_185 = 0; (g_185 <= 2); g_185 += 1)
                    {
                        l_2192 ^= (p_47 > (safe_unary_minus_func_int16_t_s((-2L))));
                        l_2138 = p_48;
                        l_2193 |= g_606;
                    }
                    g_273 ^= (p_49 >= (p_49 & (safe_sub_func_int32_t_s_s((safe_mul_func_uint8_t_u_u((safe_mul_func_int8_t_s_s((g_2032 <= ((((g_2017[2][5] || (l_2031 ^= (g_1799[0] & (g_1528 = (((safe_mod_func_uint8_t_u_u(((safe_lshift_func_uint8_t_u_s((safe_rshift_func_uint8_t_u_u((((l_2210 = (p_49 || ((safe_rshift_func_uint16_t_u_s(func_72((((g_1281 = (safe_lshift_func_int8_t_s_s(((g_607[0] && p_47) >= 65532UL), l_2048[0]))) == l_2042) == (-1L)), g_228[7], p_50), 2)) > g_262[2]))) <= p_47) | 0L), 4)), 2)) == 0x7626L), g_213[1][0][0])) != p_47) >= 0UL))))) == g_1288[0]) < l_2062) >= l_1993)), p_47)), 0x45L)), l_2211[2]))));
                    for (l_2138 = 20; (l_2138 < (-18)); --l_2138)
                    {
                        unsigned char l_2222[5];
                        int l_2225[6][7] = {{0x5C8F518FL,0xCF72B6EDL,0x5C8F518FL,(-6L),0xCF72B6EDL,(-1L),(-1L)},{0x99520ECEL,0x28129C5BL,0x99520ECEL,(-1L),5L,0x99520ECEL,0xC1E7BF46L},{(-1L),0x652173FAL,0x22CF1488L,(-1L),0x22CF1488L,0x652173FAL,(-1L)},{0L,0xC1E7BF46L,0xE464DC81L,0L,0xC1E7BF46L,0L,0xE464DC81L},{(-1L),(-1L),0xCF72B6EDL,(-6L),0x5C8F518FL,0xCF72B6EDL,0x5C8F518FL},{5L,0xE464DC81L,0xE464DC81L,5L,0L,0L,5L}};
                        int i, j;
                        for (i = 0; i < 5; i++)
                            l_2222[i] = 0x1EL;
                        g_538 = (l_2224 ^= (safe_mul_func_uint16_t_u_u(0xA15FL, (g_85 < (g_228[0] = ((((safe_sub_func_int32_t_s_s(g_1687, (g_295 ^= (l_2223 = ((safe_mul_func_uint16_t_u_u((0UL != (l_2222[1] = (safe_sub_func_int32_t_s_s(l_2192, (p_47 <= g_2))))), g_448[2])) > func_72(g_605, g_2017[2][4], l_2192)))))) < 0xA555L) <= g_235[0]) >= g_761))))));
                        g_381 |= ((((p_48 || p_49) <= 0xB4C2L) & func_72((p_51 = 0x2BC41C68L), g_215, (l_2225[1][5] ^= 0xAB85FF1BL))) != (safe_add_func_uint32_t_u_u((safe_unary_minus_func_uint16_t_u(p_50)), l_2229)));
                        l_2231++;
                        l_1992 = p_51;
                    }
                    for (g_1866 = 0; (g_1866 != 15); ++g_1866)
                    {
                        return g_85;
                    }
                }
                if (p_50)
                {
                    int l_2236 = 0L;
                    int l_2264 = 3L;
                    int l_2267 = 0x1AC81F08L;
                    l_2236 = l_2229;
                    for (g_267 = 1; (g_267 <= 6); g_267 += 1)
                    {
                        int l_2261 = 0x2366E6F7L;
                        int l_2265[8] = {(-6L),1L,(-6L),(-6L),1L,(-6L),(-6L),1L};
                        int i;
                        l_2239 = (safe_add_func_int32_t_s_s(l_2033[g_267], l_2033[g_267]));
                        g_538 ^= ((safe_rshift_func_uint8_t_u_s(l_2236, 6)) != (safe_rshift_func_uint16_t_u_s(((((l_2063 |= l_2244[3]) & (g_2121 == (safe_mod_func_int8_t_s_s(l_2033[g_267], (safe_sub_func_uint16_t_u_u((g_1528++), (l_2252[0] |= l_2224))))))) & l_2139[0]) > (safe_rshift_func_uint16_t_u_u((safe_sub_func_int16_t_s_s((g_228[3] = (((safe_add_func_int8_t_s_s((l_1992 & (l_2136 && 0L)), g_127)) != p_50) | l_2033[g_267])), p_47)), 4))), 3)));
                        g_1287 = 0x9A39342BL;
                        --l_2268;
                    }
                }
                else
                {
                    int l_2281 = 0xAE007E45L;
                    short l_2296 = (-3L);
                    g_381 = (safe_add_func_uint16_t_u_u((g_215 != ((((safe_mod_func_uint8_t_u_u((p_49 ^ l_2062), ((safe_mul_func_int16_t_s_s(g_566[3], (l_2266[0] = (safe_mul_func_int8_t_s_s(g_215, (0L > (l_2062 > g_129))))))) ^ (func_72((p_51 = p_48), g_262[1], g_185) | g_1974)))) | 0UL) | 4L) & g_448[3])), g_1288[4]));
                    g_1281 = l_2266[1];
                    if ((((((-9L) == (((l_2042 && (safe_sub_func_int8_t_s_s((l_2224 > g_1240), (l_2281 & (0x18L | g_536))))) < (safe_rshift_func_int16_t_s_s(((g_110 |= 65534UL) > (func_72(func_72(((((safe_add_func_uint32_t_u_u(func_72(p_49, l_2286, p_48), 0L)) != g_213[1][7][3]) != l_2281) != 4L), g_85, g_1281), l_2266[0], g_182) | l_2229)), 12))) <= 0x4530L)) && p_49) || p_51) && p_48))
                    {
                        l_2063 = (!func_76((safe_add_func_uint16_t_u_u(g_127, (-4L))), p_51, l_2289, g_1974));
                        l_2116 ^= ((safe_rshift_func_int16_t_s_u(func_53(g_532, p_47, p_48, g_448[2]), (l_2296 ^= (safe_rshift_func_uint8_t_u_s((safe_add_func_int32_t_s_s(p_51, 0x7BF7D1BBL)), 5))))) >= g_235[0]);
                        g_534 = l_2048[0];
                    }
                    else
                    {
                        unsigned l_2297 = 0x8BB6D004L;
                        l_2116 = g_1801;
                        l_2139[2] = func_70(((l_2266[0] = p_48) | g_258));
                        return l_2297;
                    }
                }
            }
            else
            {
                unsigned l_2298 = 0UL;
                int l_2307 = 0x973E71BCL;
                int l_2308 = (-4L);
                int l_2309[6][6] = {{(-1L),(-1L),0xC01CFEE7L,0x08118A42L,0xC01CFEE7L,(-1L)},{0xC01CFEE7L,0x576B2CE8L,0x08118A42L,0x08118A42L,0x576B2CE8L,0xC01CFEE7L},{(-1L),0xC01CFEE7L,0x08118A42L,0xC01CFEE7L,(-1L),(-1L)},{0x818D16ACL,0xC01CFEE7L,0xC01CFEE7L,0x818D16ACL,0x576B2CE8L,0x818D16ACL},{0x818D16ACL,0x576B2CE8L,0x818D16ACL,0xC01CFEE7L,0xC01CFEE7L,0x818D16ACL},{(-1L),(-1L),0xC01CFEE7L,0x08118A42L,0xC01CFEE7L,(-1L)}};
                int i, j;
                for (g_2121 = 0; (g_2121 <= 5); g_2121 += 1)
                {
                    int i;
                    l_1992 |= l_2139[g_2121];
                    for (g_167 = 0; (g_167 <= 2); g_167 += 1)
                    {
                        int i;
                        --l_2298;
                        return l_2139[g_2121];
                    }
                    for (g_1240 = 7; (g_1240 >= 0); g_1240 -= 1)
                    {
                        int i;
                        l_2139[1] = (l_2042 = func_70((func_76((safe_lshift_func_int8_t_s_u((-1L), (4UL & (safe_lshift_func_uint16_t_u_u(l_2139[g_2121], l_2139[g_2121]))))), ((l_2139[g_2121] ^ (safe_mul_func_uint8_t_u_u(((g_1287 <= p_47) | ((((func_72(p_51, p_47, g_228[5]) != 0xFD72L) & (-4L)) >= 0L) <= 7L)), g_1010[1][0][1]))) >= p_50), p_49, p_51) <= 4294967295UL)));
                        if (p_51)
                            break;
                    }
                }
                l_2310--;
            }
            for (g_215 = 0; (g_215 != (-27)); g_215--)
            {
                short l_2320 = (-6L);
                int l_2325 = 1L;
                unsigned l_2330 = 0x0C122151L;
                int l_2350 = 0L;
                int l_2352 = 2L;
                int l_2354 = (-1L);
                int l_2357 = 0L;
                int l_2358 = 0L;
                for (g_1240 = 2; (g_1240 >= 0); g_1240 -= 1)
                {
                    if (g_531)
                        goto lbl_2315;
                }
                if (l_2010)
                    goto lbl_2316;
                for (p_50 = 22; (p_50 <= 40); p_50++)
                {
                    if (l_2286)
                        goto lbl_2319;
                }
                if (p_48)
                {
                    int l_2324[3][9] = {{0xF8A309F1L,0xF8A309F1L,(-2L),(-2L),0xF8A309F1L,0xF8A309F1L,(-2L),(-2L),0xF8A309F1L},{4L,0xEF49A9B5L,4L,0xEF49A9B5L,4L,0xEF49A9B5L,4L,0xEF49A9B5L,4L},{0xF8A309F1L,(-2L),(-2L),0xF8A309F1L,0xF8A309F1L,(-2L),(-2L),0xF8A309F1L,0xF8A309F1L}};
                    int l_2328 = 0xA16A502EL;
                    int l_2329 = 0x3C7A9914L;
                    int l_2353 = (-1L);
                    int i, j;
                    l_2325 = (((p_48 ^ p_48) > func_72(func_72(l_2320, g_607[2], ((safe_mod_func_uint16_t_u_u(g_2121, func_72(g_557[4], (g_262[1] >= p_50), l_2323))) > (-9L))), l_2324[1][6], g_606)) <= p_49);
                    for (g_869 = 0; (g_869 > (-26)); --g_869)
                    {
                        int l_2348 = 0xA4F8EFECL;
                        int l_2349[10][10][2] = {{{0xE34CB468L,(-1L)},{0L,0xC884545DL},{0L,(-1L)},{0xE34CB468L,(-1L)},{0x42A67377L,(-1L)},{0xE34CB468L,(-1L)},{0L,0xC884545DL},{0L,(-1L)},{0xE34CB468L,(-1L)},{0x42A67377L,(-1L)}},{{0xE34CB468L,(-1L)},{0L,0xC884545DL},{0L,(-1L)},{0xE34CB468L,(-1L)},{0x42A67377L,(-1L)},{0xE34CB468L,(-1L)},{0L,0xC884545DL},{0L,(-1L)},{0xE34CB468L,(-1L)},{0x42A67377L,(-1L)}},{{0xE34CB468L,(-1L)},{0L,0xC884545DL},{0L,(-1L)},{0xE34CB468L,(-1L)},{0x42A67377L,(-1L)},{0xE34CB468L,(-1L)},{0L,0xC884545DL},{0L,(-1L)},{0xE34CB468L,(-1L)},{0x42A67377L,(-1L)}},{{0xE34CB468L,(-1L)},{0L,0xC884545DL},{0L,(-1L)},{0xE34CB468L,(-1L)},{0x42A67377L,(-1L)},{0xE34CB468L,(-1L)},{0L,0xC884545DL},{0L,(-1L)},{0xE34CB468L,(-1L)},{0x42A67377L,(-1L)}},{{0xE34CB468L,(-1L)},{0L,0xC884545DL},{0L,(-1L)},{0xE34CB468L,0L},{0L,0L},{0x42A67377L,0xC884545DL},{0x20E0967FL,(-1L)},{0x20E0967FL,0xC884545DL},{0x42A67377L,0L},{0L,0L}},{{0x42A67377L,0xC884545DL},{0x20E0967FL,(-1L)},{0x20E0967FL,0xC884545DL},{0x42A67377L,0L},{0L,0L},{0x42A67377L,0xC884545DL},{0x20E0967FL,(-1L)},{0x20E0967FL,0xC884545DL},{0x42A67377L,0L},{0L,0L}},{{0x42A67377L,0xC884545DL},{0x20E0967FL,(-1L)},{0x20E0967FL,0xC884545DL},{0x42A67377L,0L},{0L,0L},{0x42A67377L,0xC884545DL},{0x20E0967FL,(-1L)},{0x20E0967FL,0xC884545DL},{0x42A67377L,0L},{0L,0L}},{{0x42A67377L,0xC884545DL},{0x20E0967FL,(-1L)},{0x20E0967FL,0xC884545DL},{0x42A67377L,0L},{0L,0L},{0x42A67377L,0xC884545DL},{0x20E0967FL,(-1L)},{0x20E0967FL,0xC884545DL},{0x42A67377L,0L},{0L,0L}},{{0x42A67377L,0xC884545DL},{0x20E0967FL,(-1L)},{0x20E0967FL,0xC884545DL},{0x42A67377L,0L},{0L,0L},{0x42A67377L,0xC884545DL},{0x20E0967FL,(-1L)},{0x20E0967FL,0xC884545DL},{0x42A67377L,0L},{0L,0L}},{{0x42A67377L,0xC884545DL},{0x42A67377L,(-1L)},{0x42A67377L,0x3A7EE8B5L},{0L,0xC884545DL},{0xE34CB468L,0xC884545DL},{0L,0x3A7EE8B5L},{0x42A67377L,(-1L)},{0x42A67377L,0x3A7EE8B5L},{0L,0xC884545DL},{0xE34CB468L,0xC884545DL}}};
                        int i, j, k;
                        l_2330--;
                        if (p_50)
                            break;
                        l_2328 = ((safe_lshift_func_uint16_t_u_u((l_2249 = ((func_72(((l_2139[1] |= (l_2115 |= (safe_mod_func_uint16_t_u_u((g_1010[1][0][1] &= (l_2337[1][1][2] = p_48)), g_262[1])))) > (safe_lshift_func_uint8_t_u_s((!254UL), l_2136))), (((p_51 <= (0UL != (safe_unary_minus_func_int32_t_s(((safe_rshift_func_int8_t_s_s((safe_mul_func_int16_t_s_s((safe_add_func_uint32_t_u_u(func_72((l_1992 = l_2324[1][6]), ((l_2062 = g_2) > 1UL), l_2193), l_2325)), 1UL)), 2)) | p_49))))) == p_51) != g_221), p_47) < g_557[4]) < (-1L))), 14)) & l_2347);
                        g_2360++;
                    }
                }
                else
                {
                    const int l_2367 = 0x62007870L;
                    int l_2375[10][2] = {{0x87BB0ED9L,0x87BB0ED9L},{0x5A9424B0L,0x87BB0ED9L},{0x87BB0ED9L,0x5A9424B0L},{0x87BB0ED9L,0x87BB0ED9L},{0x5A9424B0L,0x87BB0ED9L},{0x87BB0ED9L,0x5A9424B0L},{0x87BB0ED9L,0x87BB0ED9L},{0x5A9424B0L,0x87BB0ED9L},{0x87BB0ED9L,0x5A9424B0L},{0x87BB0ED9L,0x87BB0ED9L}};
                    int i, j;
                    if (g_273)
                    {
                        g_534 = (l_2356 = 0xFBDF08F0L);
                    }
                    else
                    {
                        int l_2376 = 0L;
                        l_2375[7][0] = (g_1010[2][0][0] & ((safe_mul_func_int16_t_s_s((safe_sub_func_uint32_t_u_u(l_2367, (1L ^ (g_1688 = (func_72(g_2017[3][3], (l_2115 = (safe_sub_func_int8_t_s_s(func_72(l_2367, l_2370, (safe_sub_func_uint8_t_u_u(l_2367, ((l_2375[7][0] |= (safe_lshift_func_uint16_t_u_u(65535UL, (l_1993 | g_1288[0])))) > 1UL)))), g_557[4]))), l_2376) > l_2330))))), 65535UL)) & g_85));
                        if (g_566[1])
                            break;
                        l_2325 &= (l_1996 ^= l_2375[8][0]);
                    }
                }
            }
        }
        for (g_90 = 0; (g_90 < 47); g_90 = safe_add_func_uint32_t_u_u(g_90, 1))
        {
            char l_2379 = 0x02L;
            int l_2387 = 3L;
            unsigned l_2403 = 1UL;
            int l_2408 = 0x44F013DCL;
            unsigned short l_2409 = 1UL;
            g_381 = (l_2387 = ((l_2379 >= p_48) < (safe_mul_func_uint8_t_u_u((g_1288[4] > func_72(l_2382, g_381, (safe_lshift_func_uint16_t_u_u((g_1688 ^ ((safe_add_func_uint16_t_u_u(0x0C7BL, (l_2115 = ((l_1992 &= (p_49 ^ l_2031)) && 4294967286UL)))) | g_235[0])), 4)))), 5L))));
            if (g_167)
                goto lbl_2388;
            l_2355 = ((g_190 = (p_47 >= ((65533UL | (safe_mod_func_int8_t_s_s((0UL | (((safe_add_func_int8_t_s_s((safe_rshift_func_int8_t_s_s(0xB4L, 0)), (g_129 = ((l_1992 = (safe_mul_func_int8_t_s_s((((safe_sub_func_uint32_t_u_u((safe_add_func_uint8_t_u_u(((func_72(l_2403, l_2033[6], (((g_235[1] = 0xC0L) ^ (func_72(func_72((((0x265E9BD5L < func_72((l_2408 |= (safe_add_func_int8_t_s_s((l_2139[0] ^= ((((safe_sub_func_uint16_t_u_u(func_72(g_127, p_50, l_2048[0]), g_1799[3])) == p_47) == 0x74L) & g_607[0])), g_1687))), l_2403, g_1281)) && l_2409) > 0UL), g_538, p_47), l_2410, g_604) < l_2033[4])) > g_557[3])) && g_1690) && p_47), 0L)), g_2120)) != l_2310) > p_48), g_1281))) | 0xBFFF7DF6L)))) == p_51) | p_48)), g_1690))) & g_605))) != 0L);
            l_2387 = 0xD74B90F9L;
        }
    }
    else
    {
        unsigned char l_2411 = 0x67L;
        l_2139[2] = (l_2411 ^ 65528UL);
    }
    return l_2229;
}







static unsigned func_53(char p_54, const unsigned p_55, short p_56, unsigned short p_57)
{
    char l_1867 = (-1L);
    int l_1887 = 5L;
    int l_1927 = (-1L);
    unsigned short l_1962[2][9][2];
    int i, j, k;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 2; k++)
                l_1962[i][j][k] = 0UL;
        }
    }
    for (g_869 = 0; (g_869 <= 2); g_869 += 1)
    {
        unsigned char l_1868 = 1UL;
        int l_1885 = 0x9AD4DBCBL;
        int l_1886[2];
        short l_1928 = (-1L);
        unsigned char l_1931 = 0x03L;
        unsigned l_1952 = 0UL;
        int i;
        for (i = 0; i < 2; i++)
            l_1886[i] = 0xB5B6BB14L;
        l_1868--;
        if ((safe_rshift_func_uint8_t_u_s(g_235[g_869], ((l_1887 = (safe_mul_func_int16_t_s_s(g_607[0], func_72((safe_lshift_func_uint8_t_u_s((safe_lshift_func_int8_t_s_s(l_1867, 5)), g_228[5])), (!(l_1886[1] = ((6L ^ (safe_add_func_int32_t_s_s((((((p_54 & (((g_267 != (safe_add_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u((l_1885 ^= (l_1867 < (-8L))), 7)), g_235[g_869]))) == (-1L)) != p_56)) != 0xA7L) ^ p_57) | 1UL) && g_1799[2]), l_1867))) <= g_273))), g_267)))) ^ p_56))))
        {
            g_273 = 0xCFA1EA7BL;
            return g_90;
        }
        else
        {
            char l_1900 = 0x68L;
            int l_1901 = 1L;
            int l_1908[10][9][2] = {{{(-1L),0xBF58077EL},{(-1L),5L},{0xA98B10ECL,1L},{0L,7L},{0L,0x156DFB19L},{9L,0L},{0L,8L},{(-10L),5L},{(-10L),8L}},{{0L,0L},{9L,0x156DFB19L},{0L,7L},{0L,1L},{0xA98B10ECL,5L},{(-1L),0xBF58077EL},{(-1L),1L},{0x288E4744L,1L},{(-1L),0xBF58077EL}},{{(-1L),5L},{0xA98B10ECL,1L},{0L,7L},{0L,0x156DFB19L},{9L,0L},{0L,8L},{(-10L),5L},{(-10L),8L},{0L,0L}},{{9L,0x156DFB19L},{0L,0x67ACCD9BL},{7L,7L},{0x288E4744L,0x594BB76FL},{0x33E32317L,(-4L)},{0xA98B10ECL,0L},{0L,0L},{0xA98B10ECL,(-4L)},{0x33E32317L,0x594BB76FL}},{{0x288E4744L,7L},{7L,0x67ACCD9BL},{0L,5L},{2L,0xCB895893L},{(-1L),0x156DFB19L},{(-1L),1L},{(-1L),0x156DFB19L},{(-1L),0xCB895893L},{2L,5L}},{{0L,0x67ACCD9BL},{7L,7L},{0x288E4744L,0x594BB76FL},{0x33E32317L,(-4L)},{0xA98B10ECL,0L},{0L,0L},{0xA98B10ECL,(-4L)},{0x33E32317L,0x594BB76FL},{0x288E4744L,7L}},{{7L,0x67ACCD9BL},{0L,5L},{2L,0xCB895893L},{(-1L),0x156DFB19L},{(-1L),1L},{(-1L),0x156DFB19L},{(-1L),0xCB895893L},{2L,5L},{0L,0x67ACCD9BL}},{{7L,7L},{0x288E4744L,0x594BB76FL},{0x33E32317L,(-4L)},{0xA98B10ECL,0L},{0L,0L},{0xA98B10ECL,(-4L)},{0x33E32317L,0x594BB76FL},{0x288E4744L,7L},{7L,0x67ACCD9BL}},{{0L,5L},{2L,0xCB895893L},{(-1L),0x156DFB19L},{(-1L),1L},{(-1L),0L},{9L,1L},{(-1L),1L},{0x33E32317L,0x7B3A2CE8L},{(-2L),0xCB895893L}},{{(-10L),(-4L)},{0L,5L},{1L,5L},{(-1L),5L},{1L,5L},{0L,(-4L)},{(-10L),0xCB895893L},{(-2L),0x7B3A2CE8L},{0x33E32317L,1L}}};
            unsigned l_1924 = 4294967292UL;
            int l_1925 = 1L;
            int i, j, k;
            l_1901 = (((g_186 || (safe_lshift_func_int8_t_s_u((p_54 = (safe_mod_func_uint8_t_u_u(((safe_rshift_func_uint8_t_u_s(((safe_sub_func_uint16_t_u_u(0xA99EL, ((g_190 &= p_55) < ((safe_add_func_int16_t_s_s(p_54, (safe_lshift_func_int8_t_s_u((p_57 ^ l_1900), 7)))) && 0x0FL)))) < ((g_1281 || p_57) | p_54)), g_215)) < 0xD20091F9L), p_56))), p_57))) ^ l_1868) & g_536);
            for (l_1885 = 0; (l_1885 <= 2); l_1885 += 1)
            {
                unsigned l_1906 = 0x0D5E6C0EL;
                int l_1907 = 0xD9895EC6L;
                g_538 &= (safe_mod_func_int8_t_s_s(((p_56 = g_118) == func_72(g_273, p_55, ((g_213[1][0][0] = (safe_mul_func_int16_t_s_s(l_1906, p_54))) != ((p_54 && (p_57 < (--g_91))) && ((safe_lshift_func_uint8_t_u_s(0xF2L, (g_1866 = l_1908[1][8][0]))) | l_1886[0]))))), g_1913));
                if (p_55)
                    break;
                for (g_90 = 0; (g_90 <= 2); g_90 += 1)
                {
                    int i, j, k;
                    return g_1010[l_1885][g_869][(g_90 + 1)];
                }
            }
            l_1886[1] = (safe_rshift_func_uint8_t_u_s((safe_sub_func_uint8_t_u_u(((l_1925 &= (safe_sub_func_int16_t_s_s(((0xCDL > ((l_1901 = ((((p_54 ^ (p_55 && (safe_mod_func_int8_t_s_s(0xD5L, (safe_rshift_func_int16_t_s_u(g_1797[0], (l_1908[9][2][1] = (((g_190 &= func_72(g_235[g_869], func_72(l_1924, p_57, (0x49L != 0x42L)), l_1900)) > 0xBBL) > l_1886[0])))))))) | 4294967295UL) > p_54) > 0x5EL)) && g_566[3])) >= p_54), g_110))) != p_55), l_1886[1])), p_55));
        }
        g_1281 = g_1799[3];
        for (g_531 = 2; (g_531 >= 0); g_531 -= 1)
        {
            char l_1926 = 0x06L;
            short l_1929 = 0xF582L;
            int l_1930 = 0xFF6A8BE5L;
            --l_1931;
            for (g_1913 = 2; (g_1913 <= 9); g_1913 += 1)
            {
                int i, j, k;
                return g_1010[g_869][g_869][(g_869 + 1)];
            }
            for (l_1868 = 0; (l_1868 <= 2); l_1868 += 1)
            {
                int l_1956 = 0x2EB39258L;
                int i, j, k;
                if (func_72(g_1010[l_1868][l_1868][g_869], g_448[2], ((((l_1886[1] = ((safe_rshift_func_uint16_t_u_u((g_1721 | (((safe_lshift_func_int16_t_s_s((g_228[5] = (p_57 <= g_869)), func_72((safe_sub_func_int8_t_s_s((safe_add_func_int8_t_s_s((g_1913 != 8L), func_72((g_186 = p_56), p_57, g_1010[l_1868][l_1868][g_869]))), p_56)), g_273, l_1886[1]))) != p_56) == l_1929)), g_1010[l_1868][l_1868][g_869])) < g_215)) ^ 0xD754L) < g_1799[4]) || 0xA6L)))
                {
                    if (g_1010[g_531][g_869][g_869])
                    {
                        l_1886[1] = p_56;
                    }
                    else
                    {
                        return p_56;
                    }
                    if (p_55)
                        continue;
                }
                else
                {
                    short l_1959[5] = {0x5508L,0x5508L,0x5508L,0x5508L,0x5508L};
                    int l_1960 = 0xF4914FF2L;
                    int l_1961 = (-1L);
                    int i;
                    if (((g_90 = (safe_mul_func_int8_t_s_s((!g_1282), p_55))) != (safe_mod_func_uint16_t_u_u((safe_add_func_int8_t_s_s(((func_72((l_1927 = (safe_sub_func_int8_t_s_s((p_55 | (0x256EL != l_1885)), l_1952))), (g_1281 |= (((safe_lshift_func_int16_t_s_u((((safe_unary_minus_func_int16_t_s((l_1930 = ((0L != ((g_185--) < l_1887)) | g_868)))) ^ (-8L)) >= g_235[0]), g_182)) & 1L) < 0x3C71A3C7L)), p_56) == p_55) != p_56), 0x57L)), g_1400))))
                    {
                        l_1959[0] = g_1688;
                    }
                    else
                    {
                        --l_1962[0][0][1];
                        g_565 = (p_56 & ((safe_rshift_func_uint16_t_u_s(p_56, l_1926)) && func_72(p_57, l_1926, l_1887)));
                    }
                }
            }
        }
    }
    l_1887 = g_215;
    return g_127;
}







static unsigned short func_60(int p_61, char p_62)
{
    unsigned char l_1562 = 0xF2L;
    int l_1569 = (-3L);
    char l_1573 = 1L;
    int l_1601 = (-1L);
    int l_1602 = 0L;
    int l_1606 = 0x36200C67L;
    unsigned char l_1650 = 1UL;
    unsigned l_1655[3][4] = {{0x537D4CB2L,8UL,8UL,0x537D4CB2L},{0xD87284E4L,8UL,0xEF397002L,8UL},{8UL,0UL,0xEF397002L,0xEF397002L}};
    int l_1717 = 1L;
    int l_1853[8] = {0L,0x64FB4BC6L,0x64FB4BC6L,0L,0x64FB4BC6L,0x64FB4BC6L,0L,0x64FB4BC6L};
    int i, j;
lbl_1745:
    g_480 = (p_62 == (g_557[1] |= 9UL));
    for (g_190 = (-21); (g_190 < (-11)); g_190 = safe_add_func_uint32_t_u_u(g_190, 8))
    {
        unsigned l_1570 = 4294967290UL;
        int l_1574 = (-1L);
        int l_1594 = 0L;
        int l_1596 = 0L;
        int l_1599[5][3][7] = {{{0xAB2AD7A8L,(-1L),(-1L),3L,3L,(-1L),(-1L)},{0x9BD0F7F5L,0x65B4D02EL,8L,0xA32CDAB9L,(-1L),0xAD6976E8L,(-6L)},{(-1L),1L,0x849ADD6DL,(-1L),0x849ADD6DL,1L,(-1L)}},{{(-6L),0xAD6976E8L,(-1L),0xA32CDAB9L,8L,0x65B4D02EL,0x9BD0F7F5L},{(-1L),(-1L),3L,3L,(-1L),(-1L),0xAB2AD7A8L},{0xC7AA6FCCL,1L,(-1L),(-6L),0xEFC55A10L,8L,8L}},{{2L,0L,0xFE536D96L,0L,0xAB2AD7A8L,0xA22143C1L,2L},{0xC7AA6FCCL,0xAD6976E8L,(-10L),0x9BD0F7F5L,(-6L),0xA32CDAB9L,(-6L)},{0x18453C30L,(-1L),(-1L),0x18453C30L,0L,(-1L),1L}},{{0xC7AA6FCCL,0x9BD0F7F5L,0xD990C4B2L,(-1L),0x65B4D02EL,0x65B4D02EL,(-1L)},{0xAB2AD7A8L,2L,0xAB2AD7A8L,(-1L),0x849ADD6DL,0L,1L},{0xA32CDAB9L,(-1L),(-6L),0xD990C4B2L,0xEFC55A10L,0xD990C4B2L,(-6L)}},{{0x849ADD6DL,0x849ADD6DL,0L,3L,(-1L),0L,2L},{1L,(-10L),0x65B4D02EL,0xAD6976E8L,0xAD6976E8L,0x65B4D02EL,(-10L)},{(-1L),0xA22143C1L,0x849ADD6DL,0xAB2AD7A8L,(-1L),(-1L),3L}}};
        unsigned short l_1753 = 0xE3B5L;
        char l_1846 = 0xAEL;
        int i, j, k;
        l_1562--;
        for (g_186 = 25; (g_186 < 39); ++g_186)
        {
            for (g_538 = (-6); (g_538 < 8); g_538 = safe_add_func_int32_t_s_s(g_538, 2))
            {
                return g_1528;
            }
        }
        l_1570--;
        if ((((p_62 > ((g_215 = g_1282) == 1UL)) & ((((p_61 = g_1281) | l_1573) & ((((--g_167) | (((((-7L) <= (g_127 |= l_1562)) | (l_1569 != (safe_lshift_func_int8_t_s_u((((((g_606 = func_72(l_1570, g_91, l_1574)) & g_557[4]) != 0xB6A4L) & g_1287) & 8UL), 3)))) != g_531) >= p_62)) | l_1570) ^ 0x46197B2FL)) != (-4L))) && 0UL))
        {
            unsigned l_1581 = 5UL;
            int l_1600 = 0x52F6C07CL;
            int l_1605[9][2][4] = {{{0x308BCC96L,1L,0x308BCC96L,1L},{0x308BCC96L,1L,0x308BCC96L,1L}},{{0x308BCC96L,1L,0x308BCC96L,1L},{0x308BCC96L,1L,0x308BCC96L,1L}},{{0x308BCC96L,1L,0x308BCC96L,1L},{0x308BCC96L,1L,0x308BCC96L,1L}},{{0x308BCC96L,1L,0x308BCC96L,1L},{0x308BCC96L,1L,0x308BCC96L,1L}},{{0x308BCC96L,1L,0x308BCC96L,1L},{0x308BCC96L,1L,0x308BCC96L,1L}},{{0x308BCC96L,1L,0x308BCC96L,1L},{0x308BCC96L,1L,0x308BCC96L,1L}},{{0x308BCC96L,1L,0x308BCC96L,1L},{0x308BCC96L,1L,0x308BCC96L,1L}},{{0x308BCC96L,1L,0x308BCC96L,1L},{0x308BCC96L,1L,0x308BCC96L,1L}},{{0x308BCC96L,1L,0x308BCC96L,1L},{0x308BCC96L,1L,0x308BCC96L,1L}}};
            unsigned l_1608 = 0UL;
            const short l_1670 = 0xE389L;
            int i, j, k;
            for (g_532 = 3; (g_532 >= 0); g_532 -= 1)
            {
                unsigned l_1589 = 9UL;
                int l_1593 = 0x143091E5L;
                int l_1597 = 7L;
                int l_1598 = 0xB4C24635L;
                int l_1603 = 1L;
                int l_1604 = 0xB4C8F657L;
                int l_1607[2];
                unsigned char l_1672 = 0UL;
                int i;
                for (i = 0; i < 2; i++)
                    l_1607[i] = 1L;
                if (func_72(l_1581, (p_61 >= (1UL > (+(safe_unary_minus_func_int16_t_s((safe_mul_func_uint8_t_u_u(246UL, func_72((safe_sub_func_uint8_t_u_u(g_228[7], ((safe_lshift_func_int16_t_s_s(l_1589, 11)) >= ((safe_unary_minus_func_uint8_t_u((safe_mod_func_uint16_t_u_u(p_61, g_868)))) <= ((g_606 &= g_228[5]) || p_61))))), p_61, p_62)))))))), l_1570))
                {
                    for (g_667 = 0; g_667 < 4; g_667 += 1)
                    {
                        g_235[g_667] = 0L;
                    }
                }
                else
                {
                    int l_1595 = 0xD9342D7EL;
                    for (g_129 = 0; (g_129 <= 3); g_129 += 1)
                    {
                        int i, j, k;
                        p_61 |= ((!(~4294967287UL)) != g_213[(g_532 + 1)][(g_532 + 3)][g_129]);
                    }
                    l_1593 = l_1562;
                    l_1608++;
                }
                for (g_1282 = 3; (g_1282 >= 0); g_1282 -= 1)
                {
                    const unsigned l_1631 = 0x9507D55EL;
                    char l_1645[10] = {0x37L,0L,0x37L,0L,0x37L,0L,0x37L,0L,0x37L,0L};
                    int i;
                    if ((((!(func_72(g_1288[g_532], ((g_235[0] | (+func_72(((((safe_rshift_func_uint8_t_u_u(0xC9L, 3)) & 0x8AED6FB9L) <= l_1598) || (l_1601 = (safe_mul_func_int16_t_s_s((safe_add_func_uint8_t_u_u(g_228[5], ((((safe_lshift_func_uint8_t_u_s((g_1400 == (l_1605[7][0][2] <= (safe_mod_func_uint32_t_u_u((g_607[2] & g_129), p_61)))), 7)) != 0xBEL) | 4UL) != l_1574))), 0x63F4L)))), p_61, p_62))) != 0xC3L), g_869) | p_61)) || (-5L)) != 0x6DL))
                    {
                        unsigned char l_1632[7][2][8] = {{{253UL,253UL,0x8FL,1UL,0x8FL,253UL,253UL,0x8FL},{0x34L,0x8FL,0x8FL,0x34L,0x3DL,0x34L,0x8FL,0x8FL}},{{0x8FL,0x3DL,1UL,1UL,0x3DL,0x8FL,0x3DL,1UL},{0x34L,0x3DL,0x34L,0x8FL,0x8FL,0x34L,0x3DL,0x34L}},{{253UL,0x8FL,1UL,0x8FL,253UL,253UL,0x8FL,1UL},{253UL,253UL,0x8FL,1UL,0x8FL,253UL,253UL,253UL}},{{0x8FL,253UL,253UL,0x8FL,1UL,0x8FL,253UL,253UL},{253UL,1UL,0x34L,0x34L,1UL,253UL,1UL,0x34L}},{{0x8FL,1UL,0x8FL,253UL,253UL,0x8FL,1UL,0x8FL},{0x3DL,253UL,0x34L,253UL,0x3DL,0x3DL,253UL,0x34L}},{{0x3DL,0x3DL,253UL,0x34L,253UL,0x3DL,0x3DL,253UL},{0x8FL,253UL,253UL,0x8FL,1UL,0x8FL,253UL,253UL}},{{253UL,1UL,0x34L,0x34L,1UL,253UL,1UL,0x34L},{0x8FL,1UL,0x8FL,253UL,253UL,0x8FL,1UL,0x8FL}}};
                        int i, j, k;
                        g_534 = p_62;
                        if (p_61)
                            continue;
                        g_381 = (safe_add_func_uint8_t_u_u((safe_add_func_int32_t_s_s(0x677D9EC8L, (((g_90 &= g_1288[g_532]) ^ (((func_72(func_72(g_1400, ((p_62 == g_262[0]) == (7UL || (safe_add_func_int32_t_s_s(1L, ((g_557[4] ^ (safe_rshift_func_int8_t_s_u((((safe_mul_func_uint8_t_u_u(l_1631, (-1L))) < p_61) ^ g_127), p_61))) < (-4L)))))), p_62), g_480, l_1632[4][1][3]) == g_235[0]) || p_61) == (-1L))) > p_62))), p_62));
                    }
                    else
                    {
                        char l_1637 = (-9L);
                        g_480 = (safe_add_func_uint32_t_u_u((safe_rshift_func_int16_t_s_s(l_1637, (p_62 >= ((safe_lshift_func_uint16_t_u_s((((safe_lshift_func_uint16_t_u_s((g_531 || g_235[1]), 7)) >= (p_62 | l_1607[0])) != (safe_lshift_func_int8_t_s_u((+(func_72((l_1602 |= (!(safe_unary_minus_func_int32_t_s((g_1031 < p_61))))), l_1645[2], p_61) ^ 0x74L)), 7))), 13)) >= g_329)))), 7UL));
                        g_273 = func_72((safe_rshift_func_int8_t_s_s(g_1010[2][0][1], 1)), func_72(g_186, (safe_lshift_func_int8_t_s_u((l_1650 == p_62), (safe_sub_func_uint8_t_u_u((((0x95E6L <= func_72(g_606, func_72(func_72((65535UL == l_1650), (g_295 = (safe_mod_func_int16_t_s_s(0L, l_1637))), l_1581), p_61, p_61), p_61)) < l_1570) & g_1010[1][0][1]), 0UL)))), g_557[4]), p_62);
                    }
                    for (l_1589 = 0; (l_1589 <= 3); l_1589 += 1)
                    {
                        return p_62;
                    }
                }
                --l_1655[0][2];
                for (g_221 = 0; (g_221 <= 3); g_221 += 1)
                {
                    unsigned short l_1671[3];
                    int l_1684 = 0L;
                    unsigned l_1685 = 1UL;
                    int l_1686 = 2L;
                    int l_1689[10] = {0x3961AFC4L,0x115875FEL,0x3961AFC4L,0x3961AFC4L,0x115875FEL,0x3961AFC4L,0x3961AFC4L,0x115875FEL,0x3961AFC4L,0x3961AFC4L};
                    int i;
                    for (i = 0; i < 3; i++)
                        l_1671[i] = 0xBFCCL;
                    if ((safe_mod_func_uint32_t_u_u(((((0x87921EFBL >= ((g_235[0] |= p_61) != g_761)) <= p_62) >= (l_1605[7][0][2] != (safe_lshift_func_uint8_t_u_s((g_532 >= (l_1599[3][2][6] |= (((safe_rshift_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u(func_72((((l_1598 = (safe_mul_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s((g_565 || l_1570), 12)), (g_228[5] = 4L)))) && 7UL) <= g_221), l_1594, l_1608), 1)), l_1600)) || 0x6FL) | p_62))), g_1010[1][0][1])))) && p_62), p_61)))
                    {
                        g_534 &= 0x88D60CDDL;
                        if (p_61)
                            continue;
                    }
                    else
                    {
                        p_61 = l_1670;
                        return l_1671[0];
                    }
                    for (g_1282 = 3; (g_1282 >= 0); g_1282 -= 1)
                    {
                        const short l_1683 = 1L;
                        int i, j, k;
                        l_1686 |= (((1UL || (func_72(p_62, l_1672, (g_448[6] |= (safe_rshift_func_uint16_t_u_s(l_1573, (g_480 ^ ((safe_add_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u((((l_1684 ^= (safe_mod_func_int32_t_s_s((safe_mul_func_int16_t_s_s((~((4L != l_1605[7][0][2]) >= (l_1594 = (l_1574 |= func_72((p_61 >= g_185), l_1602, p_62))))), l_1683)), g_2))) >= g_127) < p_61), 1UL)), l_1685)) == 251UL)))))) != 0x02L)) || g_539) <= 0x5DL);
                        g_1287 = l_1598;
                    }
                    ++g_1690;
                    for (l_1685 = 0; (l_1685 <= 51); l_1685++)
                    {
                        if (g_221)
                            break;
                    }
                }
            }
            --g_1695;
            for (g_531 = 0; (g_531 <= 16); g_531++)
            {
                unsigned short l_1702 = 65526UL;
                int l_1718 = (-1L);
                int l_1719 = 3L;
                int l_1720 = 0x036A8E99L;
                for (g_869 = (-30); (g_869 >= 26); ++g_869)
                {
                    unsigned l_1703 = 4294967289UL;
                    l_1702 = g_1400;
                    if (g_557[2])
                        continue;
                    ++l_1703;
                }
                g_381 = (((safe_mod_func_uint16_t_u_u((g_1010[1][0][1] = (g_151 && (safe_sub_func_int32_t_s_s((((~(l_1594 = (((l_1602 &= 0xE788L) | (l_1570 != l_1655[0][2])) > (safe_lshift_func_int16_t_s_s(func_72((l_1600 ^= (safe_mod_func_int16_t_s_s((l_1606 = (l_1596 & (l_1594 | g_190))), (safe_unary_minus_func_int8_t_s((~l_1605[7][0][2])))))), (safe_add_func_uint32_t_u_u(p_62, 0xC142261AL)), p_61), l_1605[2][1][1]))))) != 0x4BFA299BL) != p_61), l_1655[2][2])))), 0xD494L)) && 0x4EL) == 1L);
                --g_1721;
                for (g_110 = (-23); (g_110 > 40); g_110 = safe_add_func_int16_t_s_s(g_110, 4))
                {
                    unsigned l_1728 = 4294967286UL;
                    int l_1737 = 0x18F37183L;
                    for (g_532 = 7; (g_532 >= 0); g_532 -= 1)
                    {
                        int i;
                        l_1737 |= func_72(g_228[g_532], (safe_mul_func_uint16_t_u_u(p_61, ((l_1600 = (func_72(l_1728, ((+p_62) <= g_1690), (safe_rshift_func_uint16_t_u_s((safe_rshift_func_uint16_t_u_s((p_61 && l_1605[1][1][3]), (0x35757AD0L ^ (safe_sub_func_int32_t_s_s((((+(safe_sub_func_uint16_t_u_u((l_1594 = ((g_2 < 0x3FL) != l_1608)), 5UL))) & g_228[g_532]) != 0xAC45536EL), 0UL))))), p_62))) ^ l_1599[1][0][1])) ^ l_1728))), l_1719);
                    }
                    l_1717 = (func_72((((65532UL | (g_667 <= (safe_sub_func_int8_t_s_s((p_61 ^ p_61), ((g_557[1]--) < 65534UL))))) < (safe_add_func_uint32_t_u_u(p_61, (1L || (safe_unary_minus_func_int32_t_s((l_1737 = (l_1719 | g_110)))))))) ^ g_1010[1][0][1]), g_127, l_1728) | l_1605[7][0][2]);
                    if (g_531)
                        goto lbl_1745;
                    g_565 ^= p_61;
                }
            }
        }
        else
        {
            int l_1750 = 0x2619086BL;
            int l_1751[8] = {1L,1L,(-2L),1L,1L,(-2L),1L,1L};
            short l_1752 = (-1L);
            int l_1841 = (-5L);
            int i;
            if (g_167)
            {
                for (l_1601 = 2; (l_1601 >= 0); l_1601 -= 1)
                {
                    for (g_167 = 0; (g_167 <= 2); g_167 += 1)
                    {
                        int i;
                        l_1753 = func_72(g_228[(g_167 + 3)], ((safe_mod_func_uint32_t_u_u(9UL, func_72(l_1599[1][0][1], (0xB49B2FB6L <= func_72(g_606, (safe_lshift_func_uint16_t_u_u(func_72(func_72(p_61, (g_1281 = g_1690), l_1750), l_1751[1], g_1031), 15)), g_760)), g_235[2]))) < p_61), l_1752);
                    }
                }
            }
            else
            {
                char l_1766[7];
                int l_1767 = 0xADAA779FL;
                int l_1796[5];
                int l_1798 = 0xB3C5E886L;
                int i;
                for (i = 0; i < 7; i++)
                    l_1766[i] = 0x9DL;
                for (i = 0; i < 5; i++)
                    l_1796[i] = 0x6D29170CL;
                for (g_186 = (-14); (g_186 != 48); g_186 = safe_add_func_int16_t_s_s(g_186, 3))
                {
                    return g_760;
                }
                for (g_118 = 28; (g_118 < (-26)); g_118--)
                {
                    unsigned l_1777 = 0x55A1E06AL;
                    int l_1784[4] = {0x821CE316L,0x821CE316L,0x821CE316L,0x821CE316L};
                    unsigned l_1794 = 0UL;
                    int i;
                    if ((safe_add_func_uint8_t_u_u(l_1750, p_61)))
                    {
                        unsigned l_1768 = 0x23E549E5L;
                        int l_1776 = 3L;
                        if (g_667)
                            goto lbl_1745;
                        l_1751[1] ^= (safe_sub_func_int8_t_s_s((safe_sub_func_int8_t_s_s((((l_1776 = (l_1602 &= (safe_mul_func_int8_t_s_s(func_72(g_1721, ((l_1766[1] ^ l_1766[1]) < func_72(func_72((++l_1768), (g_381 = (safe_mod_func_uint8_t_u_u(((safe_mod_func_uint8_t_u_u(g_91, (func_72((safe_unary_minus_func_int16_t_s(((func_72(g_213[1][0][0], l_1599[4][2][4], p_61) < (g_605 = (0x695C3ED8L != g_258))) | 0x6CL))), p_62, l_1776) | g_91))) < g_215), g_1288[0]))), g_228[5]), l_1766[5], g_1240)), l_1596), g_221)))) < l_1596) || p_62), p_61)), g_213[2][2][3]));
                        if (p_62)
                            continue;
                        ++l_1777;
                    }
                    else
                    {
                        const short l_1789 = 0L;
                        int l_1795 = 0xBFD71917L;
                        int l_1800 = 0x516CE0E5L;
                        l_1599[0][1][3] &= (safe_lshift_func_int8_t_s_u(((func_72((((((l_1784[3] = (safe_add_func_int8_t_s_s(0L, p_61))) == (--g_110)) || (!(((g_1288[1] < (safe_add_func_int8_t_s_s(((((l_1789 || (safe_lshift_func_uint16_t_u_s((p_62 & 0UL), 0))) < g_870) & l_1596) >= (g_267 = (l_1794 = (safe_sub_func_uint16_t_u_u((((l_1751[1] = g_127) | g_85) >= g_1031), 0xEADDL))))), p_62))) || (-1L)) & l_1752))) > l_1752) >= (-7L)), g_182, p_62) || p_61) | l_1573), 6));
                        g_273 = g_1280;
                        g_1801--;
                    }
                }
                for (g_90 = 0; (g_90 <= 2); g_90 += 1)
                {
                    unsigned short l_1806 = 65535UL;
                    unsigned l_1839 = 3UL;
                    int l_1840 = 6L;
                    int i, j;
                    for (l_1574 = 2; (l_1574 >= 0); l_1574 -= 1)
                    {
                        int i, j, k;
                        l_1751[2] = l_1599[(l_1574 + 1)][l_1574][(g_90 + 2)];
                        return l_1655[l_1574][g_90];
                    }
                    l_1796[1] ^= (0x49L ^ (safe_lshift_func_uint16_t_u_u((((((l_1806++) < func_72((safe_lshift_func_uint8_t_u_u((g_182 ^ (safe_mul_func_int16_t_s_s(p_61, 0x9241L))), 5)), (p_62 != ((safe_sub_func_uint32_t_u_u((l_1655[g_90][g_90] = (((g_667 != ((safe_mod_func_uint16_t_u_u((p_62 >= (safe_rshift_func_uint8_t_u_s((65535UL > (safe_add_func_int32_t_s_s(l_1596, p_61))), 2))), l_1767)) | 0x9EL)) != p_61) & g_480)), 0xA79A885CL)) >= l_1753)), p_62)) <= p_61) != l_1599[3][0][6]) && p_61), 1)));
                    g_538 = (~((safe_lshift_func_int8_t_s_s(l_1655[0][2], (g_1688 ^= l_1574))) < (safe_rshift_func_int16_t_s_u(func_72((g_186--), l_1562, ((safe_sub_func_uint32_t_u_u(((safe_mul_func_int8_t_s_s((((safe_sub_func_int8_t_s_s(((safe_sub_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u(p_62, 0UL)), 2)), l_1839)) ^ (l_1601 = (l_1840 = g_1690))), func_72(l_1841, (safe_mul_func_uint16_t_u_u((safe_mod_func_int8_t_s_s(l_1846, g_448[2])), g_127)), l_1796[0]))) ^ 0xAF5CL) && 0x3F98L), p_62)) & g_976), 0xE6586664L)) || 0x44L)), 3))));
                    if (g_186)
                        goto lbl_1745;
                }
            }
            for (p_62 = 0; (p_62 < (-3)); p_62 = safe_sub_func_uint8_t_u_u(p_62, 8))
            {
                unsigned l_1849 = 0xCFC0090EL;
                int l_1852[6][4][1] = {{{0xCDC7A02CL},{(-4L)},{(-4L)},{0xCDC7A02CL}},{{0xBA165C6FL},{1L},{0x20AB32CEL},{0x234362B8L}},{{0x234362B8L},{(-4L)},{9L},{1L}},{{1L},{1L},{1L},{9L}},{{(-4L)},{0x234362B8L},{1L},{0x234362B8L}},{{(-4L)},{9L},{1L},{1L}}};
                int i, j, k;
                l_1849 = (p_61 &= 0x5F42D9BFL);
                for (g_1031 = (-20); (g_1031 > 40); g_1031 = safe_add_func_uint16_t_u_u(g_1031, 1))
                {
                    unsigned l_1854 = 0x32C4FFEFL;
                    ++l_1854;
                }
            }
            g_295 = (safe_sub_func_int16_t_s_s(func_72(l_1751[4], l_1562, ((p_61 & (func_72(((safe_unary_minus_func_int32_t_s(((safe_sub_func_int16_t_s_s(p_62, (safe_unary_minus_func_int8_t_s((g_869 ^ (safe_add_func_int16_t_s_s(l_1752, ((((g_127 >= func_72((l_1606 ^ p_61), p_62, l_1570)) != l_1573) && g_605) & l_1569)))))))) | g_1528))) | l_1717), g_118, g_182) | p_62)) & 0UL)), g_1797[1]));
        }
    }
    return g_1287;
}







static unsigned short func_70(int p_71)
{
    unsigned short l_1057 = 65535UL;
    char l_1059 = (-6L);
    int l_1065 = 0xD9624370L;
    int l_1074 = 6L;
    int l_1076[7][2];
    short l_1117 = 0xEC96L;
    char l_1118 = 0L;
    const short l_1239 = (-4L);
    unsigned l_1241 = 4294967290UL;
    short l_1284 = 0x8840L;
    int i, j;
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 2; j++)
            l_1076[i][j] = 0x64E598DAL;
    }
    for (g_273 = 0; (g_273 > 14); g_273 = safe_add_func_int32_t_s_s(g_273, 7))
    {
        short l_1062 = 0xD61FL;
        int l_1063 = 0x108E0F10L;
        int l_1070 = 0x91B07840L;
        int l_1073 = (-10L);
        short l_1119 = 0x3456L;
        unsigned char l_1127 = 1UL;
        char l_1151[3];
        unsigned char l_1160 = 0x15L;
        int i;
        for (i = 0; i < 3; i++)
            l_1151[i] = 0x05L;
        for (g_267 = 25; (g_267 > 15); --g_267)
        {
            unsigned l_1058 = 0UL;
            int l_1071 = (-7L);
            int l_1075 = 1L;
            unsigned char l_1078[10] = {0xA9L,0xA9L,0xA9L,0xA9L,0xA9L,0xA9L,0xA9L,0xA9L,0xA9L,0xA9L};
            int l_1165[1];
            int i;
            for (i = 0; i < 1; i++)
                l_1165[i] = (-4L);
            for (g_1031 = 6; (g_1031 > 7); ++g_1031)
            {
                int l_1064 = 0L;
                int l_1068 = 1L;
                int l_1069 = 0xA6D9CFA8L;
                int l_1072 = 0xF11DE652L;
                short l_1077 = 1L;
                l_1059 = (safe_sub_func_uint32_t_u_u((l_1058 ^= (0x742AE5C9L & (safe_sub_func_int32_t_s_s((safe_mod_func_uint8_t_u_u((p_71 | 65529UL), g_213[2][0][0])), (g_976 ^ (g_85 & ((safe_sub_func_uint16_t_u_u(0xEF29L, ((g_182 < l_1057) >= p_71))) ^ g_167))))))), 0UL));
                l_1065 = (safe_sub_func_int16_t_s_s(0xF682L, (l_1062 > (l_1064 = (l_1063 = g_1010[1][0][1])))));
                for (g_167 = (-11); (g_167 > 42); g_167 = safe_add_func_int16_t_s_s(g_167, 9))
                {
                    for (g_127 = 0; (g_127 <= 2); g_127 += 1)
                    {
                        int i;
                        return g_607[g_127];
                    }
                    if (g_607[2])
                        continue;
                }
                --l_1078[2];
            }
            for (g_91 = 6; (g_91 >= 31); g_91 = safe_add_func_int16_t_s_s(g_91, 8))
            {
                short l_1087 = 0x3CE7L;
                unsigned l_1090 = 0x35BD2163L;
                int l_1101 = 0L;
                int l_1121[8] = {0x623004D7L,0x623004D7L,0x623004D7L,0x623004D7L,0x623004D7L,0x623004D7L,0x623004D7L,0x623004D7L};
                int l_1166[4];
                int i;
                for (i = 0; i < 4; i++)
                    l_1166[i] = 0xC933C0CEL;
                g_381 = (p_71 >= (g_213[1][0][0] |= (safe_add_func_uint8_t_u_u((l_1087 = (((safe_mul_func_int16_t_s_s(g_1010[1][0][1], 1L)) ^ (g_448[0] = 1UL)) == l_1058)), ((l_1062 < (g_557[4] = (safe_rshift_func_int16_t_s_u((-1L), 1)))) < (0xCB80L >= (l_1090 && l_1090)))))));
                for (l_1074 = (-1); (l_1074 <= 20); l_1074 = safe_add_func_uint8_t_u_u(l_1074, 3))
                {
                    if (l_1070)
                        break;
                }
                if ((g_565 = (safe_mod_func_int8_t_s_s((safe_lshift_func_int16_t_s_s(l_1078[2], 15)), l_1087))))
                {
                    unsigned l_1102 = 0xADF26314L;
                    l_1102 = (safe_mod_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s((l_1090 && (p_71 > (l_1101 ^ 4UL))), (p_71 == g_870))), g_90));
                }
                else
                {
                    unsigned char l_1112 = 255UL;
                    int l_1120 = 5L;
                    int l_1126[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_1126[i] = 0L;
                    for (l_1057 = 29; (l_1057 < 45); l_1057++)
                    {
                        char l_1111 = 0L;
                        l_1112 = (~(safe_mod_func_int16_t_s_s((safe_lshift_func_int8_t_s_u((g_190 &= (safe_lshift_func_uint16_t_u_s(l_1101, 10))), l_1111)), (p_71 || 0xF4L))));
                        return p_71;
                    }
                    l_1121[4] = ((g_869 > (safe_add_func_uint16_t_u_u((l_1117 = (((safe_lshift_func_uint8_t_u_u((~(0x1EL > l_1112)), 7)) <= (+g_448[6])) == l_1087)), (l_1070 = l_1118)))) && (((l_1070 = g_1010[0][0][1]) < (l_1071 |= (--g_258))) <= ((0x19DCD5FCL >= (safe_mul_func_uint16_t_u_u(g_604, 0L))) && p_71)));
                    ++l_1127;
                }
                if ((g_604 == func_72(l_1057, p_71, p_71)))
                {
                    char l_1130 = 3L;
                    int l_1131 = 1L;
                    l_1130 = (p_71 ^ l_1087);
                    for (l_1063 = 0; (l_1063 <= 3); l_1063 += 1)
                    {
                        int i;
                        l_1131 ^= (g_565 |= (g_381 = g_448[(l_1063 + 1)]));
                        l_1073 |= (p_71 || (l_1121[5] = (safe_lshift_func_int16_t_s_s((((~(0xB4E0L < (0UL >= func_72(p_71, func_72(((safe_lshift_func_uint16_t_u_u((!g_532), 0)) && (((l_1121[5] &= p_71) >= ((safe_rshift_func_int8_t_s_u((g_381 >= g_830), g_85)) & p_71)) || 0x2B1DBF5FL)), p_71, p_71), l_1101)))) != l_1062) == 0x7FL), p_71))));
                    }
                    if (p_71)
                        continue;
                    return p_71;
                }
                else
                {
                    unsigned l_1150 = 0x3BAE167FL;
                    l_1063 = g_830;
                    for (g_85 = 0; (g_85 > (-12)); g_85 = safe_sub_func_int32_t_s_s(g_85, 2))
                    {
                        l_1063 = (l_1071 = p_71);
                    }
                    l_1151[1] ^= ((p_71 & 0L) < ((safe_mul_func_uint8_t_u_u(((safe_sub_func_int32_t_s_s((safe_mul_func_uint8_t_u_u(func_72(g_267, l_1058, (l_1070 = ((safe_sub_func_uint16_t_u_u((func_72(func_72(p_71, (g_262[2] >= (-8L)), (safe_lshift_func_int16_t_s_u((g_213[0][0][2] & ((0x69L > g_1031) != g_85)), l_1150))), p_71, g_830) ^ p_71), 6L)) != g_557[4]))), l_1075)), 4294967291UL)) && g_228[3]), p_71)) ^ 0xE2FFL));
                    if (func_72((safe_mod_func_uint8_t_u_u(func_72((safe_add_func_uint8_t_u_u(g_215, l_1150)), (safe_add_func_int8_t_s_s((g_129 = (l_1073 = 0xD4L)), 0x03L)), (l_1165[0] = ((safe_rshift_func_uint16_t_u_u((l_1160 && ((g_295 = (l_1071 = 0x40C7E2FCL)) ^ ((func_72((safe_sub_func_uint16_t_u_u(0x93B7L, (l_1070 = ((safe_rshift_func_uint8_t_u_s((((248UL & (0UL != l_1078[2])) || p_71) <= p_71), 3)) == p_71)))), p_71, g_1031) && 65535UL) < l_1101))), p_71)) | g_534))), l_1118)), l_1078[2], p_71))
                    {
                        g_565 = 5L;
                        if (g_262[1])
                            break;
                    }
                    else
                    {
                        l_1063 = l_1119;
                        l_1076[0][0] = p_71;
                        l_1063 = (l_1166[3] = (l_1121[7] &= p_71));
                        return g_329;
                    }
                }
            }
            if (p_71)
                continue;
        }
        l_1073 ^= func_72(g_129, (safe_rshift_func_int16_t_s_u((4294967295UL || ((safe_lshift_func_int8_t_s_s((safe_sub_func_int8_t_s_s((l_1118 | (((safe_rshift_func_int16_t_s_u(0x53FEL, 8)) == func_72((((safe_unary_minus_func_int32_t_s((g_565 = ((safe_add_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u(p_71, ((safe_add_func_uint32_t_u_u(((l_1074 = (l_1063 = ((l_1076[0][0] = 0UL) | (safe_unary_minus_func_uint8_t_u(l_1065))))) & l_1119), (l_1118 & g_381))) && g_606))), 0L)) < l_1127)))) | p_71) & 0x2CEEL), p_71, l_1059)) < 0xD2A3L)), g_91)), l_1118)) & p_71)), 15)), p_71);
    }
    for (g_221 = 0; (g_221 <= 5); g_221 += 1)
    {
        int l_1189[7][5][7] = {{{(-9L),(-8L),(-9L),0x730F7824L,(-9L),(-8L),(-9L)},{0x69D395C7L,1L,1L,0x69D395C7L,(-1L),0x4FD58AF3L,0x4FD58AF3L},{0xE67BD12BL,(-8L),0x93240075L,(-8L),0xE67BD12BL,(-8L),0x93240075L},{(-1L),0x69D395C7L,1L,1L,0x69D395C7L,(-1L),0x4FD58AF3L},{(-9L),0x730F7824L,(-9L),(-8L),(-9L),0x730F7824L,(-9L)}},{{(-1L),1L,0x4FD58AF3L,0x69D395C7L,0x69D395C7L,0x4FD58AF3L,1L},{0xE67BD12BL,0x730F7824L,0x93240075L,0x730F7824L,0xE67BD12BL,0x730F7824L,0x93240075L},{0x69D395C7L,0x69D395C7L,0x4FD58AF3L,1L,(-1L),(-1L),1L},{(-9L),(-8L),(-9L),0x730F7824L,(-9L),(-8L),(-9L)},{0x69D395C7L,1L,1L,0x69D395C7L,(-1L),0x4FD58AF3L,0x4FD58AF3L}},{{0xE67BD12BL,(-8L),0x93240075L,(-8L),0xE67BD12BL,(-8L),0x93240075L},{(-1L),0x69D395C7L,1L,1L,0x69D395C7L,(-1L),0x4FD58AF3L},{(-9L),0x730F7824L,(-9L),(-8L),(-9L),0x730F7824L,(-9L)},{(-1L),1L,0x4FD58AF3L,0x69D395C7L,0x69D395C7L,0x4FD58AF3L,1L},{0xE67BD12BL,0x730F7824L,0x93240075L,0x730F7824L,0xE67BD12BL,0x730F7824L,0x93240075L}},{{0x69D395C7L,0x69D395C7L,0x4FD58AF3L,1L,(-1L),(-1L),1L},{(-9L),(-8L),(-9L),0x730F7824L,(-9L),(-8L),(-9L)},{0x69D395C7L,1L,1L,0x69D395C7L,(-1L),0x4FD58AF3L,0x4FD58AF3L},{0xE67BD12BL,(-8L),0x93240075L,(-8L),0xE67BD12BL,(-8L),0x93240075L},{(-1L),0x69D395C7L,1L,1L,0x69D395C7L,(-1L),0x4FD58AF3L}},{{(-9L),0x730F7824L,(-9L),(-8L),(-9L),0x730F7824L,(-9L)},{(-1L),1L,0x4FD58AF3L,0x69D395C7L,0x69D395C7L,0x4FD58AF3L,1L},{0xE67BD12BL,0x730F7824L,0x93240075L,0x730F7824L,0xE67BD12BL,0x730F7824L,0x93240075L},{0x69D395C7L,0x69D395C7L,0x4FD58AF3L,1L,(-1L),(-1L),1L},{(-9L),(-8L),(-9L),0x730F7824L,(-9L),(-8L),(-9L)}},{{0x69D395C7L,1L,1L,0x69D395C7L,(-1L),0x4FD58AF3L,0x4FD58AF3L},{0xE67BD12BL,(-8L),0x93240075L,(-8L),0xE67BD12BL,(-8L),0x93240075L},{(-1L),0x69D395C7L,1L,1L,0x69D395C7L,(-1L),0x4FD58AF3L},{(-9L),0x730F7824L,(-9L),(-8L),(-9L),0x730F7824L,(-9L)},{(-1L),1L,0x4FD58AF3L,0x69D395C7L,0x69D395C7L,0x4FD58AF3L,1L}},{{0xE67BD12BL,0x730F7824L,0x93240075L,0x730F7824L,0xE67BD12BL,0x730F7824L,0x93240075L},{0x69D395C7L,0x69D395C7L,0x4FD58AF3L,1L,(-1L),(-1L),1L},{(-9L),(-8L),(-9L),0x730F7824L,(-9L),(-8L),(-9L)},{0x69D395C7L,1L,1L,0x69D395C7L,(-1L),0x4FD58AF3L,0x4FD58AF3L},{0xE67BD12BL,(-8L),0x93240075L,(-8L),0xE67BD12BL,(-8L),0x93240075L}}};
        int l_1198 = 1L;
        int i, j, k;
        for (l_1065 = 3; (l_1065 >= 0); l_1065 -= 1)
        {
            int l_1197 = (-8L);
            int i;
            for (g_129 = 2; (g_129 >= 0); g_129 -= 1)
            {
                int i;
                g_480 = g_557[(g_129 + 2)];
                for (g_267 = 0; (g_267 <= 2); g_267 += 1)
                {
                    unsigned l_1196 = 4294967286UL;
                    int i;
                    g_534 ^= (g_235[l_1065] >= (((safe_rshift_func_int16_t_s_s((((safe_mul_func_int16_t_s_s((safe_mul_func_int8_t_s_s((l_1189[1][4][1] = g_228[(l_1065 + 2)]), (g_262[g_129] <= func_72((0x1C00L > l_1118), g_295, (p_71 && ((safe_rshift_func_int16_t_s_s(((p_71 && (safe_add_func_uint16_t_u_u((((safe_mul_func_uint8_t_u_u(((g_604 < p_71) >= 0x3F7CL), p_71)) == p_71) & p_71), g_262[2]))) & g_557[(g_129 + 2)]), 3)) > l_1196)))))), 0xC40EL)) >= p_71) && p_71), p_71)) < l_1197) >= p_71));
                    for (g_85 = 0; g_85 < 3; g_85 += 1)
                    {
                        for (g_268 = 0; g_268 < 3; g_268 += 1)
                        {
                            for (g_531 = 0; g_531 < 4; g_531 += 1)
                            {
                                g_1010[g_85][g_268][g_531] = 0xEEF5L;
                            }
                        }
                    }
                }
                l_1198 = 1L;
            }
            return g_557[(l_1065 + 2)];
        }
        l_1065 = (safe_mod_func_int16_t_s_s((~((0x9C8D6CA5L != (safe_mod_func_int16_t_s_s((safe_add_func_int16_t_s_s((safe_sub_func_int16_t_s_s(((l_1074 = ((safe_rshift_func_int16_t_s_s(((0x7FL <= (!(safe_rshift_func_int8_t_s_u((safe_add_func_uint8_t_u_u((!0x07L), g_557[g_221])), 7)))) & 0L), 11)) <= g_557[g_221])) | (0x8C7A1213L || g_557[g_221])), g_262[2])), 0x7008L)), 1UL))) >= l_1057)), l_1065));
        g_295 = g_186;
    }
    for (l_1074 = 0; (l_1074 > 26); ++l_1074)
    {
        const int l_1215 = 0xE1085583L;
        int l_1216 = 0L;
        unsigned l_1223 = 0UL;
        const short l_1224 = 0x3FAFL;
        unsigned l_1274 = 0x38BCDC9DL;
        int l_1277 = 0x7337E893L;
        int l_1279 = 1L;
        int l_1283 = (-1L);
        int l_1285[3];
        int l_1395 = 9L;
        const unsigned char l_1451[2] = {0x51L,0x51L};
        int i;
        for (i = 0; i < 3; i++)
            l_1285[i] = 1L;
        if ((l_1216 = func_76(l_1215, g_557[4], ((0xEB847B1CL != l_1057) == (g_539 == p_71)), (((l_1065 = 0x00L) == (g_127 = p_71)) | p_71))))
        {
            short l_1236 = 0x9397L;
            const char l_1252[1][10][5] = {{{(-5L),(-5L),(-2L),0xC1L,0x92L},{0x82L,(-7L),(-2L),(-1L),0xC8L},{0xC7L,(-1L),0xEFL,1L,0L},{1L,(-7L),0x92L,0x92L,(-7L)},{0xC8L,0xEFL,0x2BL,0x92L,(-5L)},{0x14L,(-5L),0x0DL,1L,(-1L)},{7L,(-2L),0L,(-1L),0x82L},{0x14L,7L,0x82L,7L,0x14L},{0xC8L,0xADL,0x82L,0L,0xEFL},{1L,0xC1L,0L,0x2BL,0xC7L}}};
            int l_1273 = 3L;
            int l_1275 = 0xFF84680EL;
            char l_1307 = 0xDEL;
            int i, j, k;
            for (g_221 = 0; g_221 < 8; g_221 += 1)
            {
                g_228[g_221] = 1L;
            }
            g_565 = ((func_72(l_1215, (l_1216 = p_71), (safe_lshift_func_uint16_t_u_u(7UL, (safe_sub_func_uint8_t_u_u((g_607[2] > ((safe_lshift_func_int8_t_s_s(0L, 0)) <= (p_71 && (g_531 & (p_71 == 0L))))), l_1223))))) | 0x34AE47C2L) || l_1224);
            g_538 = ((safe_mod_func_int16_t_s_s((0x12D4L | (safe_rshift_func_uint16_t_u_s((safe_rshift_func_int16_t_s_s((safe_unary_minus_func_uint16_t_u(func_72(l_1057, g_267, (l_1216 &= (safe_add_func_int16_t_s_s((safe_rshift_func_int8_t_s_s(l_1074, l_1236)), l_1057)))))), (((safe_mod_func_uint8_t_u_u(0x9DL, (-4L))) != l_1239) & l_1224))), l_1223))), g_1240)) | p_71);
            if (func_76((((l_1241 && p_71) ^ (g_604 == ((safe_add_func_int8_t_s_s((g_538 == (safe_lshift_func_int8_t_s_s((safe_mod_func_uint16_t_u_u(p_71, func_72((safe_lshift_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u(g_1010[2][2][0], 4)), p_71)), g_381, g_127))), 5))), 3UL)) & 7L))) > g_566[3]), l_1252[0][6][3], g_565, l_1215))
            {
                const unsigned l_1272 = 0xA792846BL;
                int l_1276[3][3] = {{7L,7L,0xF8121D05L},{7L,7L,0xF8121D05L},{7L,7L,0xF8121D05L}};
                char l_1278[2];
                short l_1286 = 0xC796L;
                int i, j;
                for (i = 0; i < 2; i++)
                    l_1278[i] = 0L;
                l_1276[0][0] = (l_1275 = (l_1274 = (safe_unary_minus_func_int16_t_s((l_1273 = func_76(((safe_sub_func_int8_t_s_s(p_71, (safe_mul_func_uint8_t_u_u(((2L | l_1223) ^ (safe_mod_func_int16_t_s_s(((safe_rshift_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u(p_71, 4)), 2)) == ((safe_lshift_func_uint8_t_u_s((l_1252[0][6][3] >= (safe_mul_func_int8_t_s_s(((safe_add_func_int16_t_s_s((l_1216 = (func_76(l_1059, l_1252[0][8][2], ((safe_mod_func_int8_t_s_s((func_76(g_606, l_1272, p_71, l_1236) | g_1240), g_2)) && g_976), g_2) < 1L)), 0xA85BL)) <= (-9L)), p_71))), 5)) > p_71)), 65535UL))), 0xD4L)))) <= 0x2D54L), l_1223, p_71, l_1252[0][8][3]))))));
                g_1288[0]--;
            }
            else
            {
                int l_1302 = 0x31D74594L;
                unsigned l_1303 = 0xF9ECB0D6L;
                int l_1306 = (-3L);
                int l_1308 = 0L;
                int l_1309 = (-4L);
                int l_1311 = 9L;
                unsigned char l_1312 = 255UL;
                int l_1329[10][6] = {{0x050A7827L,0x53F226F7L,0x219E3D99L,0x53F226F7L,0x050A7827L,0x8E821A02L},{0x2F2FCE7FL,0x53F226F7L,0x3EDB225EL,0x2F2FCE7FL,0x06E5174CL,0x7C8CA8EEL},{0x2F2FCE7FL,0x06E5174CL,0x7C8CA8EEL,0x53F226F7L,0x53F226F7L,0x7C8CA8EEL},{0x050A7827L,0x050A7827L,0x3EDB225EL,(-5L),0x53F226F7L,0x8E821A02L},{0x53F226F7L,0x06E5174CL,0x219E3D99L,(-5L),0x06E5174CL,0x3EDB225EL},{0x050A7827L,0x53F226F7L,0x219E3D99L,0x53F226F7L,0x050A7827L,0x8E821A02L},{0x2F2FCE7FL,0x53F226F7L,0x3EDB225EL,0x2F2FCE7FL,0x06E5174CL,0x7C8CA8EEL},{0x06E5174CL,0x53F226F7L,0xA2F78D4FL,(-5L),(-5L),0xA2F78D4FL},{0x2F2FCE7FL,0x2F2FCE7FL,0x219E3D99L,0x050A7827L,(-5L),0x7C8CA8EEL},{(-5L),0x53F226F7L,0x8E821A02L,0x050A7827L,0x53F226F7L,0x219E3D99L}};
                char l_1340 = 0x97L;
                int i, j;
                for (g_110 = 0; (g_110 <= 3); g_110 += 1)
                {
                    unsigned char l_1291 = 1UL;
                    int l_1310 = (-1L);
                    for (g_85 = 0; (g_85 <= 3); g_85 += 1)
                    {
                        int i, j, k;
                        l_1291--;
                        l_1275 = (!(g_213[g_110][(g_85 + 2)][g_85] > ((safe_mul_func_int16_t_s_s(g_228[(g_110 + 4)], l_1275)) < (safe_rshift_func_uint16_t_u_s(p_71, ((l_1291 > g_565) ^ (p_71 <= (((safe_lshift_func_int16_t_s_s(p_71, ((l_1236 == g_268) < 255UL))) != g_228[(g_110 + 4)]) & p_71))))))));
                        return l_1279;
                    }
                    l_1303--;
                    ++l_1312;
                    g_295 = (safe_mod_func_int8_t_s_s((0x02B99AD6L || ((g_1282 = (+(g_869 = (0x2830C703L >= (l_1310 != (safe_mod_func_uint32_t_u_u(8UL, (safe_sub_func_int8_t_s_s(g_1010[1][0][3], (safe_mod_func_uint8_t_u_u(((func_72(p_71, (((l_1074 && (safe_mod_func_int32_t_s_s((safe_mod_func_int16_t_s_s(p_71, (safe_sub_func_uint8_t_u_u((g_1010[1][0][1] && p_71), l_1074)))), l_1329[2][4]))) || p_71) <= 0xD887E10BL), p_71) && 0x0BL) || g_185), g_1281))))))))))) && g_90)), g_221));
                    for (g_221 = 0; (g_221 <= 3); g_221 += 1)
                    {
                        int i, j, k;
                        g_273 = ((safe_mod_func_int32_t_s_s((g_213[(g_110 + 2)][(g_221 + 2)][g_110] < ((l_1216 = (safe_add_func_int32_t_s_s(l_1303, (l_1076[0][0] |= func_72(l_1273, (safe_lshift_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s((g_186 <= p_71), ((g_448[9] == ((safe_rshift_func_int16_t_s_s(0x16CFL, 14)) != l_1311)) < g_480))), 6)), l_1308))))) == g_295)), g_448[4])) | 6UL);
                        g_273 = l_1340;
                    }
                }
                for (g_381 = 0; (g_381 > (-25)); g_381 = safe_sub_func_uint32_t_u_u(g_381, 3))
                {
                    unsigned char l_1353[4][1];
                    int i, j;
                    for (i = 0; i < 4; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_1353[i][j] = 0x42L;
                    }
                    l_1275 = (safe_rshift_func_int8_t_s_s((((+0xD68FL) & (l_1273 = ((+(safe_mod_func_uint32_t_u_u((((safe_sub_func_int8_t_s_s((safe_mod_func_int32_t_s_s(g_167, (func_72((safe_add_func_uint8_t_u_u(l_1353[3][0], p_71)), ((safe_add_func_int16_t_s_s((g_228[5] = g_534), (-1L))) & ((l_1065 && ((safe_lshift_func_int8_t_s_u(p_71, 1)) < (safe_rshift_func_uint16_t_u_u(((g_85 = l_1329[9][2]) == 253UL), 5)))) != 1L)), l_1215) | g_273))), g_213[4][1][0])) | l_1076[6][0]) | 0L), g_565))) > 0x13L))) < l_1275), 7));
                }
                for (g_381 = 0; (g_381 > 8); ++g_381)
                {
                    int l_1366[5] = {(-6L),(-6L),(-6L),(-6L),(-6L)};
                    int i;
                    l_1366[1] ^= (l_1285[0] = ((safe_rshift_func_uint8_t_u_u(p_71, 4)) ^ (safe_rshift_func_int16_t_s_s(g_1281, 10))));
                }
            }
        }
        else
        {
            char l_1390 = 0x8FL;
            int l_1397[3][8][4] = {{{(-1L),0xFE6B4157L,(-4L),1L},{0x4B33125FL,0xFE6B4157L,0xFE6B4157L,0x4B33125FL},{0xFE6B4157L,0x4B33125FL,(-1L),(-10L)},{0xFE6B4157L,(-1L),0xFE6B4157L,(-4L)},{0x4B33125FL,(-10L),(-4L),(-4L)},{(-1L),(-1L),1L,(-10L)},{(-10L),0x4B33125FL,1L,0x4B33125FL},{(-1L),0xFE6B4157L,(-4L),1L}},{{0x4B33125FL,0xFE6B4157L,0xFE6B4157L,0x4B33125FL},{0xFE6B4157L,0x4B33125FL,(-1L),(-10L)},{0xFE6B4157L,(-1L),0xFE6B4157L,(-4L)},{0x4B33125FL,(-10L),(-4L),(-4L)},{(-1L),(-1L),1L,(-10L)},{(-10L),0x4B33125FL,1L,0x4B33125FL},{(-1L),0xFE6B4157L,(-4L),1L},{0x4B33125FL,0xFE6B4157L,0xFE6B4157L,0x4B33125FL}},{{0xFE6B4157L,0x4B33125FL,(-1L),(-10L)},{0xFE6B4157L,(-1L),0xFE6B4157L,(-4L)},{(-10L),1L,(-1L),(-1L)},{0x4B33125FL,0x4B33125FL,0x8F871E6BL,1L},{1L,(-10L),0x8F871E6BL,(-10L)},{0x4B33125FL,(-4L),(-1L),0x8F871E6BL},{(-10L),(-4L),(-4L),(-10L)},{(-4L),(-10L),0x4B33125FL,1L}}};
            int l_1422 = 0x5DB50E07L;
            short l_1483 = 0x4210L;
            int i, j, k;
            for (g_110 = (-2); (g_110 > 53); g_110++)
            {
                unsigned l_1374 = 0x894ACD07L;
                int l_1391[7] = {0x81CAB572L,0x81CAB572L,0x81CAB572L,0x81CAB572L,0x81CAB572L,0x81CAB572L,0x81CAB572L};
                char l_1493 = 0xA7L;
                short l_1499 = 0L;
                int i;
                for (l_1284 = 6; (l_1284 != 6); l_1284++)
                {
                    unsigned char l_1389 = 0x2DL;
                    int l_1393 = (-1L);
                    int l_1396 = 0L;
                    int l_1399 = 0xF6F5E1F2L;
                    const unsigned l_1423 = 4294967295UL;
                    for (g_127 = 0; (g_127 != 39); g_127 = safe_add_func_uint8_t_u_u(g_127, 1))
                    {
                        char l_1373 = 0xA8L;
                        int l_1392 = (-7L);
                        int l_1394 = 0x107445A6L;
                        l_1374 = (p_71 < l_1373);
                        l_1390 = (safe_mod_func_uint32_t_u_u((p_71 | p_71), (safe_lshift_func_int16_t_s_u(((g_1281 = (l_1277 = (safe_rshift_func_int8_t_s_s(g_1281, (g_1031 != (safe_mod_func_int32_t_s_s(p_71, (safe_add_func_int16_t_s_s((g_262[0] > ((l_1279 == p_71) >= (safe_lshift_func_uint8_t_u_s((safe_mul_func_int16_t_s_s((p_71 & 8UL), l_1374)), l_1389)))), 1L))))))))) >= p_71), 4))));
                        ++g_1400;
                    }
                    for (g_1281 = 3; (g_1281 != 16); g_1281 = safe_add_func_int8_t_s_s(g_1281, 1))
                    {
                        unsigned char l_1408 = 255UL;
                        int l_1417[8] = {0x08F857EBL,0x33BE6132L,0x08F857EBL,0x33BE6132L,0x08F857EBL,0x33BE6132L,0x08F857EBL,0x33BE6132L};
                        int i;
                        l_1285[1] = func_72(((g_295 &= func_72(g_235[0], (p_71 > (safe_unary_minus_func_int8_t_s(((safe_lshift_func_uint16_t_u_s(func_72((--l_1408), g_235[0], l_1224), l_1390)) || ((safe_sub_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u((g_91 && (safe_mul_func_int16_t_s_s(g_129, func_72(l_1399, l_1223, l_1076[4][1])))), p_71)), (-5L))) > p_71))))), l_1417[3])) && 4294967293UL), p_71, p_71);
                        g_480 = 0x0BD7031AL;
                        l_1391[1] = p_71;
                        g_295 = (g_868 >= (((65534UL != l_1397[0][4][3]) >= func_72((safe_mul_func_int8_t_s_s((g_557[4] != (l_1422 = (l_1391[1] = p_71))), ((l_1423 < func_72(((safe_sub_func_int8_t_s_s(0x23L, p_71)) && (((safe_sub_func_uint8_t_u_u((p_71 <= 0xAF2FL), p_71)) == l_1374) < (-5L))), l_1285[0], g_869)) || l_1389))), g_1282, g_557[4])) > g_1288[4]));
                    }
                    for (g_129 = 21; (g_129 < (-27)); g_129 = safe_sub_func_uint16_t_u_u(g_129, 6))
                    {
                        return p_71;
                    }
                    return p_71;
                }
                for (l_1117 = 18; (l_1117 >= 10); --l_1117)
                {
                    int l_1448 = 0x7373F485L;
                    int l_1449[8] = {0xC494D909L,4L,0xC494D909L,4L,0xC494D909L,4L,0xC494D909L,4L};
                    const short l_1450 = 0xA96DL;
                    int l_1490 = 0x570A35E7L;
                    int i;
                    if ((((safe_lshift_func_int16_t_s_s((safe_add_func_uint32_t_u_u((p_71 > 1UL), (g_258 < (0xBCABL | func_72((safe_mod_func_uint8_t_u_u((safe_add_func_uint8_t_u_u((l_1285[1] = 248UL), g_213[3][2][1])), (safe_mod_func_int16_t_s_s(((safe_rshift_func_int16_t_s_s((l_1449[3] = (func_72(l_1283, g_607[2], (l_1065 = (safe_add_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u((g_667 | 0x4D3FE498L), g_91)), g_557[4])))) | l_1448)), p_71)) < l_1074), 0x47E4L)))), g_538, g_1288[4]))))), g_604)) || l_1450) || l_1451[1]))
                    {
                        unsigned l_1454 = 4294967295UL;
                        int l_1459 = 9L;
                        l_1449[3] |= (g_235[0] && (safe_mul_func_uint8_t_u_u(0xC6L, ((((((func_72(g_761, p_71, (l_1391[1] = (--l_1454))) || p_71) ^ ((safe_sub_func_uint16_t_u_u(func_72(func_72(g_167, l_1397[0][4][3], g_1010[1][0][1]), g_221, p_71), 1L)) == l_1374)) < 0L) != l_1459) && p_71) & p_71))));
                    }
                    else
                    {
                        char l_1470 = 0L;
                        l_1391[1] = (func_72((func_72(((0UL || (l_1451[1] ^ (g_91++))) != (safe_add_func_int32_t_s_s((safe_rshift_func_uint8_t_u_s(((g_606 != func_72((p_71 || (safe_mul_func_uint16_t_u_u(l_1391[1], (g_258 = l_1470)))), (safe_mod_func_int8_t_s_s(((safe_lshift_func_int8_t_s_s(g_448[2], 4)) & ((((g_557[5] = l_1448) > ((safe_sub_func_uint32_t_u_u((safe_add_func_int16_t_s_s((-1L), 5UL)), p_71)) <= 248UL)) || l_1397[0][4][3]) != g_1287)), 0x04L)), p_71)) || 0L), 0)), 0xB6F5B3E5L))), l_1223, g_1282) <= 0xD90ECD45L), g_267, p_71) & p_71);
                        if (g_534)
                            continue;
                        if (l_1285[0])
                            continue;
                    }
                    for (l_1274 = 0; (l_1274 >= 50); l_1274++)
                    {
                        unsigned short l_1486 = 1UL;
                        int l_1489 = 0xCF88AF06L;
                        l_1490 = (safe_lshift_func_uint16_t_u_u((l_1449[6] |= func_72(l_1483, (l_1391[1] |= l_1397[0][4][3]), (safe_add_func_int32_t_s_s(l_1486, g_329)))), ((p_71 | (((-9L) ^ (((func_72(func_72((!((g_381 || (((l_1489 = p_71) == p_71) ^ 0x1E6DL)) != g_85)), l_1486, g_1281), l_1285[1], l_1486) == p_71) < g_215) | p_71)) >= g_127)) > l_1374)));
                        l_1279 = (safe_rshift_func_uint16_t_u_s(l_1450, 7));
                    }
                    for (g_127 = 0; (g_127 <= 2); g_127 += 1)
                    {
                        unsigned l_1494 = 4294967286UL;
                        int i;
                        ++l_1494;
                        return g_448[g_127];
                    }
                    l_1391[1] = (g_295 = 0xA37671CDL);
                }
                l_1499 = (g_381 && (g_557[0]--));
            }
            for (g_605 = 7; (g_605 >= 2); g_605 -= 1)
            {
                int l_1511 = 0x1C94189EL;
                int l_1512 = (-4L);
                unsigned l_1514 = 0xD55DFA67L;
                int i;
                if (g_228[g_605])
                {
                    int l_1510 = 0x48DD6F7BL;
                    int i;
                    if (g_228[g_605])
                    {
                        int l_1506 = 1L;
                        int l_1507 = 0xA45AAE64L;
                        l_1076[0][0] ^= (l_1507 = func_72((safe_mul_func_uint16_t_u_u((g_213[1][0][0] > g_262[1]), g_830)), l_1451[0], (safe_mul_func_int16_t_s_s((g_2 >= ((g_185 ^ func_72((safe_sub_func_uint8_t_u_u(l_1506, p_71)), (g_228[g_605] | g_565), g_91)) >= g_228[g_605])), (-10L)))));
                        g_1281 = (safe_mod_func_uint16_t_u_u(p_71, p_71));
                        l_1511 = (l_1510 |= l_1506);
                    }
                    else
                    {
                        short l_1513 = 0xE8A1L;
                        l_1514--;
                    }
                    l_1510 = 0x992E0FCEL;
                }
                else
                {
                    l_1397[0][4][3] |= (safe_mod_func_uint16_t_u_u((g_1010[0][1][0] |= ((safe_sub_func_int8_t_s_s((0x76A7L & (safe_lshift_func_uint16_t_u_u(0xBE5BL, 7))), l_1451[0])) == (safe_rshift_func_uint8_t_u_u(g_531, 1)))), (+(safe_rshift_func_uint16_t_u_s(p_71, 14)))));
                }
                if (g_127)
                {
                    int l_1537 = 0x63F9B547L;
                    ++g_1528;
                    g_1281 = (func_72(((l_1512 = (p_71 ^ (safe_mul_func_uint8_t_u_u((safe_add_func_int32_t_s_s(((safe_add_func_int8_t_s_s(0x5DL, (-1L))) || ((-3L) >= ((((~(l_1395 == l_1537)) & l_1537) >= (((safe_lshift_func_uint8_t_u_s((safe_add_func_int16_t_s_s((((safe_mul_func_uint16_t_u_u((safe_add_func_uint16_t_u_u((safe_sub_func_int32_t_s_s((safe_sub_func_int16_t_s_s((((((0x802AL > (safe_mod_func_uint32_t_u_u(((p_71 & (-3L)) != 0x2BA19943L), l_1395))) >= g_1527) ^ p_71) < 0xB2L) && g_262[1]), 0x781FL)), 0x09D6F0DEL)), l_1397[1][6][3])), p_71)) >= g_448[2]) != 0x2DL), l_1514)), l_1390)) >= g_228[2]) < 0x0EBFL)) && p_71))), 0xA1FDFBB0L)), g_273)))) < g_667), l_1223, l_1537) != g_85);
                    l_1395 ^= (safe_rshift_func_int8_t_s_u(((safe_add_func_int8_t_s_s((p_71 == (0x10L >= (((safe_rshift_func_uint8_t_u_s(((g_448[2] &= (0x6CE711ABL < (safe_mod_func_uint8_t_u_u((!(p_71 >= g_566[3])), (l_1397[0][3][3] = p_71))))) ^ l_1512), 3)) & (l_1451[1] & ((l_1076[0][0] = p_71) == l_1537))) | 0x3A7CL))), 1UL)) & g_557[4]), 7));
                }
                else
                {
                    if ((p_71 || func_72(g_1010[0][2][0], p_71, p_71)))
                    {
                        return p_71;
                    }
                    else
                    {
                        g_534 = p_71;
                    }
                }
            }
        }
    }
    return g_538;
}







static int func_72(unsigned p_73, int p_74, unsigned p_75)
{
    p_74 = g_213[4][6][0];
    return g_267;
}







static unsigned func_76(const int p_77, const unsigned p_78, int p_79, unsigned short p_80)
{
    char l_100[8] = {9L,9L,9L,9L,9L,9L,9L,9L};
    int l_103 = (-2L);
    int l_111 = (-7L);
    short l_112 = 0xA72DL;
    const short l_113 = 0xB15AL;
    int l_121[9][3] = {{1L,0x18E90175L,9L},{0x18E90175L,1L,9L},{0x989475B2L,0x989475B2L,9L},{1L,0x18E90175L,9L},{0x18E90175L,1L,9L},{0x989475B2L,0x989475B2L,9L},{1L,0x18E90175L,9L},{0x18E90175L,1L,9L},{0x989475B2L,0x989475B2L,9L}};
    int l_126 = 1L;
    unsigned char l_152 = 5UL;
    unsigned l_259 = 7UL;
    int l_337[6][4] = {{0L,0L,0L,0L},{0L,(-5L),(-5L),0L},{(-5L),0L,(-5L),(-5L)},{0L,0L,0L,0L},{0L,(-5L),(-5L),0L},{(-5L),0L,(-5L),(-5L)}};
    char l_417 = 0xFCL;
    int l_434[9][1][8] = {{{1L,1L,(-2L),1L,(-1L),0L,1L,(-1L)}},{{0xE44AAF06L,(-1L),0xAD6B5296L,0xE44AAF06L,0x5E3F4236L,0xE44AAF06L,0xAD6B5296L,(-1L)}},{{(-1L),0xA294E479L,0x7224F58BL,1L,0xA294E479L,0xAD6B5296L,0x5E3F4236L,0x7224F58BL}},{{0xD8071D1CL,0x5E3F4236L,7L,(-1L),(-1L),7L,0x5E3F4236L,0xD8071D1CL}},{{0xA5CB412AL,(-1L),0x7224F58BL,0xAD6B5296L,1L,0xA5CB412AL,0xAD6B5296L,1L}},{{1L,0xA5CB412AL,0xAD6B5296L,1L,0xAD6B5296L,0xA5CB412AL,1L,0xAD6B5296L}},{{0xD8071D1CL,(-1L),(-2L),0xD8071D1CL,0x5E3F4236L,7L,(-1L),(-1L)}},{{0xAD6B5296L,0x5E3F4236L,0x7224F58BL,0x7224F58BL,0x5E3F4236L,0xAD6B5296L,0xA294E479L,1L}},{{0xD8071D1CL,0xA294E479L,0xE44AAF06L,(-1L),0xAD6B5296L,0xE44AAF06L,0x5E3F4236L,0xE44AAF06L}}};
    int l_479[10][8][3] = {{{9L,(-3L),0x670A1A4AL},{0x307668F4L,1L,9L},{0xE3D1B74CL,0xE3D1B74CL,(-3L)},{(-2L),0xBDD0EB82L,0L},{0x25B12C8DL,0xE3D1B74CL,9L},{0x468A4D62L,0L,(-6L)},{0x0364C23DL,(-5L),9L},{(-9L),0x9DB07DDAL,0x468A4D62L}},{{0xF57A4429L,0xF0FBBD52L,0xF57A4429L},{0xBD036475L,(-1L),0x307668F4L},{0x25B12C8DL,0xF308100EL,(-3L)},{9L,0xE502F8B6L,0L},{8L,(-3L),(-8L)},{9L,1L,0xAA22BA43L},{0x25B12C8DL,0xE8DBB146L,0xE8DBB146L},{0xBD036475L,0xB7B880FBL,0xB51BC157L}},{{0xF57A4429L,8L,0x8EB4B49BL},{(-9L),1L,(-1L)},{0x0364C23DL,1L,0x0ABF5917L},{0x468A4D62L,1L,0xB0851E8DL},{(-5L),8L,0x25B12C8DL},{0L,0xB7B880FBL,(-3L)},{0x0ABF5917L,0xE8DBB146L,3L},{(-6L),1L,0L}},{{3L,(-3L),(-5L)},{0x4A3F23C4L,0xE502F8B6L,0L},{0L,0xF308100EL,3L},{(-3L),(-1L),(-3L)},{0L,0xF0FBBD52L,0x25B12C8DL},{0x307668F4L,0x9DB07DDAL,0xB0851E8DL},{0xF0FBBD52L,(-5L),0x0ABF5917L},{1L,0L,(-1L)}},{{0xF0FBBD52L,0xE3D1B74CL,0x8EB4B49BL},{0x307668F4L,3L,0xB51BC157L},{0L,0x0ABF5917L,0xE8DBB146L},{(-3L),(-7L),0xAA22BA43L},{1L,0L,9L},{(-6L),0xB7B880FBL,0xAA22BA43L},{0xF0FBBD52L,0L,0xF308100EL},{(-3L),0xBDD0EB82L,0xB0851E8DL}},{{0x8EB4B49BL,0x8EB4B49BL,0L},{0xAA22BA43L,1L,9L},{0xF57A4429L,3L,0x0364C23DL},{9L,0x9DB07DDAL,(-3L)},{(-5L),0xF57A4429L,0x0364C23DL},{0x0E0AAF38L,3L,9L},{0L,0x670A1A4AL,0L},{(-1L),9L,0xB0851E8DL}},{{(-3L),0xE8DBB146L,0xF308100EL},{(-4L),1L,0xAA22BA43L},{0L,0xF308100EL,9L},{(-4L),(-1L),0x307668F4L},{(-3L),0xE3D1B74CL,0xE3D1B74CL},{(-1L),0xA3EA0734L,(-2L)},{0L,0L,0x25B12C8DL},{0x0E0AAF38L,(-4L),0L}},{{(-5L),0x0ABF5917L,0x8EB4B49BL},{9L,(-4L),0L},{0xF57A4429L,0L,(-3L)},{0xAA22BA43L,0xA3EA0734L,(-9L)},{0x8EB4B49BL,0xE3D1B74CL,0xF0FBBD52L},{(-3L),(-1L),0x4A3F23C4L},{0xF0FBBD52L,0xF308100EL,0xF57A4429L},{(-6L),1L,0x4A3F23C4L}},{{1L,0xE8DBB146L,0xF0FBBD52L},{(-9L),9L,(-9L)},{(-8L),0x670A1A4AL,(-3L)},{0xB0851E8DL,3L,(-9L)},{(-3L),8L,0x0364C23DL},{0xB51BC157L,(-4L),0x468A4D62L},{(-3L),0x8EB4B49BL,(-5L)},{(-3L),0xB7B880FBL,0L}},{{0xE3D1B74CL,0x0364C23DL,0x0ABF5917L},{0xBD036475L,3L,(-6L)},{(-8L),0L,3L},{(-4L),0L,0x4A3F23C4L},{0x25B12C8DL,0L,0L},{1L,3L,(-3L)},{0x0364C23DL,0x0364C23DL,0L},{0x4A3F23C4L,0xB7B880FBL,0x307668F4L}}};
    char l_562 = 1L;
    char l_640 = (-1L);
    int l_758 = 0x5380C8B9L;
    char l_865 = 0x71L;
    char l_878 = 0x57L;
    int l_905 = 0x99D23E22L;
    unsigned char l_915[7][3][2] = {{{255UL,0x28L},{2UL,0UL},{0x28L,0UL}},{{2UL,0x28L},{255UL,255UL},{255UL,0x28L}},{{2UL,0UL},{0x28L,0UL},{2UL,0x28L}},{{255UL,255UL},{255UL,0x28L},{2UL,0UL}},{{0x28L,0UL},{2UL,0x28L},{255UL,255UL}},{{255UL,0x28L},{2UL,0UL},{0x28L,0UL}},{{2UL,0x28L},{255UL,255UL},{255UL,0x28L}}};
    int i, j, k;
lbl_166:
    l_111 &= (safe_add_func_int16_t_s_s((safe_add_func_uint8_t_u_u((0xBEL > 0xF4L), (safe_sub_func_int8_t_s_s((safe_lshift_func_int16_t_s_u(l_100[1], (safe_rshift_func_int16_t_s_s(((l_100[1] >= l_100[1]) && ((l_103 |= g_85) < (safe_add_func_uint16_t_u_u(((p_80 && 1L) <= (((g_110 = (safe_sub_func_int16_t_s_s(((safe_mod_func_int8_t_s_s((p_77 && g_91), l_100[1])) < g_2), 5UL))) || p_77) <= l_100[1])), p_79)))), 9)))), 0xEFL)))), p_79));
lbl_465:
    l_111 |= l_112;
    if ((l_113 >= (safe_lshift_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s(((g_118 = g_110) == ((safe_rshift_func_uint16_t_u_s(p_77, 8)) & (l_121[7][1] && (l_121[3][1] = l_112)))), (l_126 = (0L ^ ((l_111 = (safe_add_func_int32_t_s_s(((l_103 = l_103) & 0L), 8L))) >= p_79))))), p_79))))
    {
        short l_128 = 1L;
        int l_147[6][3] = {{5L,8L,8L},{1L,(-2L),1L},{5L,5L,8L},{0x352EEFF2L,(-2L),0x352EEFF2L},{5L,8L,8L},{1L,(-2L),1L}};
        unsigned l_214 = 0x4C755263L;
        unsigned short l_226 = 65535UL;
        int i, j;
        g_127 = 0x071B3E14L;
        l_128 = p_77;
        if ((g_129 = 1L))
        {
            int l_146 = 4L;
            int l_148 = 0xFCDD685BL;
            int l_149 = 0xC617F606L;
            int l_150 = 0xE40F4936L;
            l_146 = ((safe_mul_func_int8_t_s_s(0x09L, (safe_lshift_func_int8_t_s_s(((((l_128 ^ (((safe_mod_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u((safe_sub_func_int16_t_s_s(((p_79 || g_90) | ((l_150 = ((g_91 = (0x8D77L < (safe_add_func_uint32_t_u_u((safe_lshift_func_int8_t_s_u((l_147[0][0] = (safe_lshift_func_uint8_t_u_s((p_80 & l_146), 1))), 2)), (l_149 ^= (l_113 && (l_148 ^= g_118))))))) | g_129)) == 0xDC56L)), g_151)), 3)), g_2)) > g_90) < l_146)) ^ p_80) & l_152) <= p_78), 3)))) >= g_127);
        }
        else
        {
            unsigned short l_161 = 0x6358L;
            int l_220 = 0x00D336FFL;
            if ((g_129 >= (safe_lshift_func_uint8_t_u_u((p_77 | (safe_add_func_int16_t_s_s((safe_sub_func_int32_t_s_s((g_2 < p_79), (g_2 == 3L))), (p_80 != 0x546BL)))), (l_147[0][2] = (l_161 = ((((safe_lshift_func_uint16_t_u_s(l_147[0][0], 10)) >= 0x46FF5C8CL) < 1UL) <= g_127)))))))
            {
                char l_178[7][3] = {{5L,5L,0xEEL},{5L,5L,0xEEL},{5L,5L,0xEEL},{5L,5L,0xEEL},{5L,5L,0xEEL},{5L,5L,0xEEL},{5L,5L,0xEEL}};
                int l_187 = 0x5A1BD8FFL;
                int i, j;
                for (g_127 = (-20); (g_127 > 31); g_127 = safe_add_func_int8_t_s_s(g_127, 5))
                {
                    for (l_111 = 0; (l_111 >= 21); l_111++)
                    {
                        if (g_85)
                            goto lbl_166;
                        return l_128;
                    }
                    g_167 = l_113;
                    for (g_167 = 0; (g_167 <= 7); g_167 += 1)
                    {
                        int l_179 = (-1L);
                        int i;
                        l_179 = (l_178[4][2] = ((safe_sub_func_int16_t_s_s(l_100[g_167], 0x79D8L)) & (safe_rshift_func_int16_t_s_s(((l_100[g_167] || (g_90 = (p_78 != (safe_mod_func_int32_t_s_s(g_129, (safe_lshift_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u(g_151, (g_90 && p_77))), p_78))))))) != g_167), 9))));
                    }
                    for (l_111 = (-7); (l_111 > (-15)); l_111 = safe_sub_func_uint32_t_u_u(l_111, 5))
                    {
                        g_182 ^= l_100[1];
                        g_185 = (~(safe_rshift_func_uint8_t_u_u(g_182, 6)));
                        g_186 &= g_110;
                        l_187 &= l_178[4][2];
                    }
                }
                for (l_111 = 15; (l_111 != (-9)); l_111 = safe_sub_func_int32_t_s_s(l_111, 3))
                {
                    g_190 = g_2;
                }
            }
            else
            {
                int l_211[7][8] = {{0x3933DD79L,0x78575912L,0x78575912L,0x3933DD79L,1L,0x3933DD79L,0x78575912L,0x78575912L},{0x78575912L,1L,0x67979257L,0x67979257L,1L,0x78575912L,1L,0x67979257L},{0x3933DD79L,1L,0x3933DD79L,0x78575912L,0x78575912L,0x3933DD79L,1L,0x3933DD79L},{0xBF5E601DL,0x78575912L,0x67979257L,0x78575912L,0xBF5E601DL,0xBF5E601DL,0x78575912L,0x67979257L},{0xBF5E601DL,0xBF5E601DL,0x78575912L,0x67979257L,0x78575912L,0xBF5E601DL,0xBF5E601DL,0x78575912L},{0x3933DD79L,0x78575912L,0x78575912L,0x3933DD79L,1L,0x3933DD79L,0x78575912L,0x78575912L},{0x78575912L,1L,0x67979257L,0x67979257L,1L,0x78575912L,1L,0x67979257L}};
                int l_212 = (-1L);
                int i, j;
                if (g_85)
                    goto lbl_166;
                if (g_91)
                {
                    int l_202 = 0L;
                    if ((p_78 != (safe_sub_func_int32_t_s_s(((0x18L | ((safe_mul_func_int16_t_s_s((g_151 < 0xB01682E6L), (safe_unary_minus_func_int32_t_s((safe_mod_func_int32_t_s_s(1L, (g_215 ^= (safe_rshift_func_uint8_t_u_u(((safe_lshift_func_uint16_t_u_s(((g_213[1][0][0] = ((~l_202) || ((((safe_mod_func_int8_t_s_s((safe_mul_func_int16_t_s_s(((l_113 > (l_211[1][5] = ((safe_sub_func_uint16_t_u_u(p_78, ((safe_sub_func_int8_t_s_s(g_90, p_79)) ^ p_77))) == p_80))) & l_147[0][2]), p_77)), p_80)) <= l_212) || p_78) > g_91))) != l_147[2][1]), g_129)) <= g_85), l_214))))))))) && g_91)) | p_78), 0x42BF4A9CL))))
                    {
                        l_103 = (safe_sub_func_uint16_t_u_u((((p_80 ^ l_103) != g_190) ^ ((safe_sub_func_int32_t_s_s(l_121[6][2], (l_147[5][2] == ((p_80 ^ ((l_161 || (p_78 != g_110)) > (-1L))) || l_152)))) <= p_79)), 65535UL));
                        l_202 = p_78;
                        g_221--;
                        return g_185;
                    }
                    else
                    {
                        l_147[0][0] = g_182;
                    }
                    return p_78;
                }
                else
                {
                    int l_227 = 0xCAFA4DCBL;
                    l_226 |= (safe_lshift_func_int8_t_s_u(g_213[1][0][0], 3));
                    g_228[5] = (g_182 && (p_79 >= (l_147[5][2] = (l_227 = g_213[6][3][1]))));
                }
                for (g_182 = 16; (g_182 > (-4)); g_182 = safe_sub_func_uint8_t_u_u(g_182, 3))
                {
                    if (l_211[1][5])
                        break;
                    for (l_103 = 2; (l_103 >= 0); l_103 -= 1)
                    {
                        int i, j;
                        l_121[(l_103 + 3)][l_103] = (safe_add_func_uint16_t_u_u(l_100[l_103], l_121[(l_103 + 4)][l_103]));
                        l_121[(l_103 + 1)][l_103] &= l_147[(l_103 + 2)][l_103];
                        l_147[l_103][l_103] = (p_79 >= (p_79 == p_80));
                    }
                }
            }
            for (p_79 = 0; (p_79 >= 16); p_79 = safe_add_func_uint16_t_u_u(p_79, 2))
            {
                unsigned short l_236 = 9UL;
                g_235[0] |= (l_161 == g_85);
                for (l_226 = 0; (l_226 <= 3); l_226 += 1)
                {
                    int l_238[7][2] = {{(-2L),0xFBA44B06L},{0xFBA44B06L,(-2L)},{0xFBA44B06L,0xFBA44B06L},{(-2L),0xFBA44B06L},{0xFBA44B06L,(-2L)},{0xFBA44B06L,0xFBA44B06L},{(-2L),0xFBA44B06L}};
                    int i, j;
                    l_236 ^= g_235[l_226];
                    for (g_167 = 0; (g_167 <= 3); g_167 += 1)
                    {
                        int i;
                        l_238[6][1] |= (safe_unary_minus_func_uint32_t_u(g_235[g_167]));
                    }
                }
            }
        }
        for (p_80 = 0; (p_80 != 41); ++p_80)
        {
            return l_100[1];
        }
    }
    else
    {
        short l_256 = 8L;
        int l_265 = 0xFCC094F2L;
        int l_297[3][8][7] = {{{0x4E70C977L,0L,(-6L),0L,0x993F51D0L,1L,0L},{0xE6CEFA20L,0L,1L,0x993F51D0L,0L,0x993F51D0L,1L},{0L,0L,0L,(-6L),(-4L),0L,(-4L)},{(-6L),1L,1L,(-6L),0x993F51D0L,0xE6CEFA20L,(-6L)},{0xE6CEFA20L,(-4L),0x993F51D0L,0x993F51D0L,(-4L),0xE6CEFA20L,1L},{(-4L),(-6L),0L,0L,0L,0L,(-6L)},{(-4L),1L,0xE6CEFA20L,(-4L),0x993F51D0L,0x993F51D0L,(-4L)},{0xE6CEFA20L,(-6L),0xE6CEFA20L,0x993F51D0L,(-6L),1L,1L}},{{(-6L),(-4L),0L,(-4L),(-6L),0L,0L},{0L,1L,0x993F51D0L,0L,0x993F51D0L,1L,0L},{0xE6CEFA20L,0L,1L,0x993F51D0L,0L,0x993F51D0L,1L},{0L,0L,0L,(-6L),(-4L),0L,(-4L)},{(-6L),1L,1L,(-6L),0x993F51D0L,0xE6CEFA20L,(-6L)},{0xE6CEFA20L,(-4L),0x993F51D0L,0x993F51D0L,(-4L),0xE6CEFA20L,1L},{(-6L),0L,0x4E70C977L,(-4L),(-4L),0x4E70C977L,0L},{(-6L),0xE6CEFA20L,0x993F51D0L,(-6L),1L,1L,(-6L)}},{{0x993F51D0L,0L,0x993F51D0L,1L,0L,0xE6CEFA20L,0xE6CEFA20L},{0L,(-6L),0x4E70C977L,(-6L),0L,0x4E70C977L,(-4L)},{(-4L),0xE6CEFA20L,1L,(-4L),1L,0xE6CEFA20L,(-4L)},{0x993F51D0L,(-4L),0xE6CEFA20L,1L,(-4L),1L,0xE6CEFA20L},{(-4L),(-4L),0x4E70C977L,0L,(-6L),0x4E70C977L,(-6L)},{0L,0xE6CEFA20L,0xE6CEFA20L,0L,1L,0x993F51D0L,0L},{0x993F51D0L,(-6L),1L,1L,(-6L),0x993F51D0L,0xE6CEFA20L},{(-6L),0L,0x4E70C977L,(-4L),(-4L),0x4E70C977L,0L}}};
        int l_338 = 0xEA915CF9L;
        unsigned short l_341 = 1UL;
        short l_382[5][3] = {{0xE07EL,0xA185L,0xA185L},{0L,1L,1L},{0xE07EL,0xA185L,0xA185L},{0L,1L,1L},{0xE07EL,0xA185L,0xA185L}};
        char l_393 = 0x4FL;
        unsigned l_420 = 0xA1528435L;
        const unsigned l_518 = 0xF7A1C229L;
        short l_529[1][7];
        int l_708 = (-1L);
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 7; j++)
                l_529[i][j] = 4L;
        }
lbl_748:
        for (g_85 = 2; (g_85 <= 7); g_85 += 1)
        {
            unsigned char l_257[5] = {0UL,0UL,0UL,0UL,0UL};
            int l_288 = 0x209B306FL;
            unsigned l_308[10][10][2] = {{{0x295BB7E8L,0x73E5A522L},{7UL,0x295BB7E8L},{0xF00737D8L,0x2CE6AA63L},{0xFB90B171L,0x2CE6AA63L},{0x7341C268L,6UL},{0x2CE6AA63L,0x45D1DAE8L},{0UL,0x2CE6AA63L},{4294967293UL,0xFB90B171L},{0xFB90B171L,0x55BC204DL},{0UL,6UL}},{{0x55BC204DL,6UL},{0UL,0x55BC204DL},{0xFB90B171L,0xFB90B171L},{4294967293UL,0x2CE6AA63L},{0UL,0x45D1DAE8L},{0x2CE6AA63L,6UL},{0x7341C268L,0x2CE6AA63L},{0xFB90B171L,4294967293UL},{0xFB90B171L,0x2CE6AA63L},{0x7341C268L,6UL}},{{0x2CE6AA63L,0x45D1DAE8L},{0UL,0x2CE6AA63L},{4294967293UL,0xFB90B171L},{0xFB90B171L,0x55BC204DL},{0UL,6UL},{0x55BC204DL,6UL},{0UL,0x55BC204DL},{0xFB90B171L,0xFB90B171L},{4294967293UL,0x2CE6AA63L},{0UL,0x45D1DAE8L}},{{0x2CE6AA63L,6UL},{0x7341C268L,0x2CE6AA63L},{0xFB90B171L,4294967293UL},{0xFB90B171L,0x2CE6AA63L},{0x7341C268L,6UL},{0x2CE6AA63L,0x45D1DAE8L},{0UL,0x2CE6AA63L},{4294967293UL,0xFB90B171L},{0xFB90B171L,0x55BC204DL},{0UL,6UL}},{{0x55BC204DL,6UL},{0UL,0x55BC204DL},{0xFB90B171L,0xFB90B171L},{4294967293UL,0x2CE6AA63L},{0UL,0x45D1DAE8L},{0x2CE6AA63L,6UL},{0x7341C268L,0x2CE6AA63L},{0xFB90B171L,4294967293UL},{0xFB90B171L,0x2CE6AA63L},{0x7341C268L,6UL}},{{0x2CE6AA63L,0x55BC204DL},{6UL,7UL},{0x7341C268L,0UL},{0UL,8UL},{6UL,0x2CE6AA63L},{8UL,0x2CE6AA63L},{6UL,8UL},{0UL,0UL},{0x7341C268L,7UL},{6UL,0x55BC204DL}},{{7UL,0x2CE6AA63L},{0x45D1DAE8L,7UL},{0UL,0x7341C268L},{0UL,7UL},{0x45D1DAE8L,0x2CE6AA63L},{7UL,0x55BC204DL},{6UL,7UL},{0x7341C268L,0UL},{0UL,8UL},{6UL,0x2CE6AA63L}},{{8UL,0x2CE6AA63L},{6UL,8UL},{0UL,0UL},{0x7341C268L,7UL},{6UL,0x55BC204DL},{7UL,0x2CE6AA63L},{0x45D1DAE8L,7UL},{0UL,0x7341C268L},{0UL,7UL},{0x45D1DAE8L,0x2CE6AA63L}},{{7UL,0x55BC204DL},{6UL,7UL},{0x7341C268L,0UL},{0UL,8UL},{6UL,0x2CE6AA63L},{8UL,0x2CE6AA63L},{6UL,8UL},{0UL,0UL},{0x7341C268L,7UL},{6UL,0x55BC204DL}},{{7UL,0x2CE6AA63L},{0x45D1DAE8L,7UL},{0UL,0x7341C268L},{0UL,7UL},{0x45D1DAE8L,0x2CE6AA63L},{7UL,0x55BC204DL},{6UL,7UL},{0x7341C268L,0UL},{0x55BC204DL,0x295BB7E8L},{8UL,4294967293UL}}};
            unsigned l_309[10][3] = {{4294967295UL,4294967290UL,1UL},{0x9A76D2E7L,4294967290UL,2UL},{4294967295UL,0xEFC18ECFL,4294967295UL},{4294967295UL,4294967295UL,4294967295UL},{4294967295UL,0UL,0x26F60E3BL},{0x9A76D2E7L,4UL,0x26F60E3BL},{4294967295UL,0x26F60E3BL,4294967295UL},{2UL,2UL,4294967295UL},{0x26F60E3BL,0x26F60E3BL,2UL},{0xEFC18ECFL,4UL,1UL}};
            int l_400 = (-3L);
            int l_401 = 0x1C464B67L;
            unsigned short l_411 = 0x1095L;
            int i, j, k;
            for (g_221 = 0; (g_221 <= 3); g_221 += 1)
            {
                int l_266 = 0x2EB2F975L;
                int l_314[3];
                int l_317[1][3];
                int i, j;
                for (i = 0; i < 3; i++)
                    l_314[i] = 0x75B2B4C9L;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 3; j++)
                        l_317[i][j] = 1L;
                }
                if (g_235[g_221])
                {
                    unsigned short l_260 = 65535UL;
                    int l_261[2];
                    int l_289[4];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_261[i] = (-6L);
                    for (i = 0; i < 4; i++)
                        l_289[i] = 0x0F57F58CL;
                    if ((((g_235[g_221] = (safe_mod_func_uint16_t_u_u((+(l_100[g_85] && (safe_rshift_func_int16_t_s_u((safe_unary_minus_func_int32_t_s((g_90 == (0xB14AL || (l_260 |= ((safe_sub_func_uint32_t_u_u((safe_lshift_func_int16_t_s_s(l_100[g_85], 1)), l_100[g_85])) == ((((safe_mul_func_uint16_t_u_u(65531UL, (((g_258 |= (p_77 | (((g_110 = (safe_mul_func_uint16_t_u_u((~(((safe_mul_func_int8_t_s_s((g_235[g_221] > l_256), 255UL)) >= g_215) != 0x8767L)), g_186))) ^ l_257[3]) && g_213[4][0][3]))) ^ l_259) || 0x6841L))) > l_257[3]) | g_85) || 0x8343DD38L))))))), 7)))), l_100[1]))) && p_77) < g_127))
                    {
                        g_262[2]++;
                        l_265 = g_262[2];
                    }
                    else
                    {
                        short l_280 = 6L;
                        g_268++;
                        g_273 |= (safe_lshift_func_int16_t_s_u(p_78, 12));
                        if (l_260)
                            break;
                        l_289[1] &= (safe_lshift_func_uint16_t_u_u(g_258, (safe_lshift_func_int8_t_s_u((g_221 | (g_127 | (0UL && (((((l_288 ^= ((((safe_mul_func_uint8_t_u_u((++g_185), (g_228[6] & g_118))) || (safe_unary_minus_func_uint16_t_u((((safe_rshift_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u(((g_90 || (g_91 = (l_280 | 0x4803L))) < 65533UL), l_261[0])), g_118)) | l_257[0]) < 65532UL)))) != 0xE4L) ^ g_262[1])) || g_90) <= l_112) != p_78) == 4294967295UL)))), 3))));
                    }
                    for (l_112 = 0; (l_112 <= 13); ++l_112)
                    {
                        return g_186;
                    }
                    for (g_118 = 0; (g_118 >= (-10)); g_118 = safe_sub_func_int8_t_s_s(g_118, 2))
                    {
                        l_265 = 1L;
                        return l_256;
                    }
                }
                else
                {
                    g_273 = l_266;
                    if (g_273)
                        break;
                    if ((((0x9EL != ((safe_unary_minus_func_uint16_t_u(l_265)) ^ (~g_228[5]))) == 0x7C1B2292L) != p_80))
                    {
                        unsigned l_296[2][1][2];
                        int i, j, k;
                        for (i = 0; i < 2; i++)
                        {
                            for (j = 0; j < 1; j++)
                            {
                                for (k = 0; k < 2; k++)
                                    l_296[i][j][k] = 1UL;
                            }
                        }
                        g_295 = (g_273 &= p_78);
                        g_273 = g_190;
                        if (l_296[0][0][1])
                            continue;
                    }
                    else
                    {
                        g_295 |= l_297[0][3][6];
                    }
                    g_273 = 0xEF9ED5F9L;
                }
                if (((l_314[0] = (safe_mod_func_int16_t_s_s(((l_256 && ((safe_sub_func_int8_t_s_s(p_78, (l_266 = (safe_add_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u(((l_257[3] != g_268) != l_288), g_235[0])), (safe_sub_func_uint8_t_u_u(l_308[0][0][1], l_309[9][1]))))))) <= (safe_mod_func_int8_t_s_s((safe_rshift_func_int8_t_s_s(g_221, 7)), p_80)))) >= p_79), 0x1BC4L))) < g_185))
                {
                    unsigned short l_318 = 7UL;
                    int l_325[8] = {0xAF8A9D95L,0xAF8A9D95L,0xAF8A9D95L,0xAF8A9D95L,0xAF8A9D95L,0xAF8A9D95L,0xAF8A9D95L,0xAF8A9D95L};
                    int i;
                    for (g_258 = 0; (g_258 <= 3); g_258 += 1)
                    {
                        int i;
                        return g_228[(g_258 + 2)];
                    }
                    if (p_79)
                        continue;
                    l_121[3][0] |= (g_90 <= (safe_mul_func_uint16_t_u_u((((((0UL > ((g_295 ^= (l_318 ^= l_317[0][0])) == ((0xC31BL & (!l_112)) & (safe_rshift_func_uint16_t_u_s(((safe_lshift_func_uint8_t_u_s((safe_sub_func_int16_t_s_s((l_325[6] | 0xCBL), (l_103 = (safe_unary_minus_func_int16_t_s((g_267 = (safe_mul_func_uint16_t_u_u(g_213[3][3][2], (l_256 != 0x45L))))))))), 3)) & l_314[2]), g_329))))) && 0x36L) == 0x5EBF6379L) == 0x7EL) <= 9UL), p_78)));
                }
                else
                {
                    unsigned l_330 = 4UL;
                    if (p_78)
                    {
                        if (g_185)
                            break;
                        l_330 ^= (g_295 = (g_190 >= p_80));
                    }
                    else
                    {
                        return l_330;
                    }
                }
            }
            if ((p_77 || ((l_337[0][3] = (l_308[9][9][0] == (safe_mul_func_uint16_t_u_u((safe_add_func_int16_t_s_s((safe_mod_func_uint32_t_u_u((l_103 ^= l_309[9][1]), (l_121[6][0] &= (-1L)))), g_258)), g_186)))) ^ 0x19L)))
            {
                const short l_350 = 0xAAAEL;
                l_338 = p_79;
                g_295 |= (g_90 || ((1L | (l_265 ^= (l_341 > (~p_77)))) | ((safe_lshift_func_int16_t_s_u(p_79, (safe_mul_func_int16_t_s_s(((0x0D61L && g_185) & ((safe_sub_func_uint8_t_u_u(((safe_rshift_func_int16_t_s_u(l_350, 1)) == (safe_lshift_func_int16_t_s_s(0L, 4))), 8L)) < p_79)), 65529UL)))) < 4UL)));
            }
            else
            {
                unsigned l_377 = 3UL;
                int l_380 = 0xB81EF6E2L;
                if (((safe_lshift_func_int8_t_s_u((p_77 <= p_80), l_338)) <= ((safe_lshift_func_uint8_t_u_s(((g_129 ^= l_259) <= (~p_77)), 7)) | p_78)))
                {
                    int l_379 = 6L;
                    for (l_152 = 0; (l_152 <= 1); l_152 = safe_add_func_int16_t_s_s(l_152, 6))
                    {
                        char l_378 = 0xF9L;
                        g_295 &= (safe_sub_func_int16_t_s_s((g_267 = ((safe_sub_func_int8_t_s_s(((p_77 == (safe_lshift_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s(p_78, g_213[1][0][0])), (l_380 = (safe_sub_func_int8_t_s_s((g_190 > (((g_273 <= g_85) < ((safe_lshift_func_int16_t_s_u((safe_rshift_func_uint8_t_u_s(248UL, ((p_80 |= (safe_mod_func_int8_t_s_s((-1L), (g_167 = (l_377 &= l_103))))) <= l_378))), 2)) || g_329)) == l_379)), p_77))))), 0))) != p_79), g_381)) <= p_78)), l_382[0][1]));
                    }
                    for (p_79 = 0; (p_79 == 0); p_79++)
                    {
                        unsigned l_398 = 4294967290UL;
                        int l_399 = 0xE24ADB12L;
                        int l_402 = 1L;
                        l_401 = (safe_rshift_func_int16_t_s_u((l_400 = ((safe_mod_func_int8_t_s_s((((((g_381 >= ((l_288 &= g_235[0]) < (safe_mul_func_int16_t_s_s(0x5D52L, (safe_mul_func_uint8_t_u_u(l_393, (((p_79 >= (((safe_mul_func_uint8_t_u_u(g_262[2], g_295)) < (safe_sub_func_uint8_t_u_u(((g_381 && (l_380 = l_398)) || p_79), l_297[0][4][4]))) & g_185)) == l_126) & 0x2414L))))))) >= g_182) && l_377) >= p_78) | g_110), l_399)) | 0x10D5A0BDL)), 6));
                        l_400 = p_78;
                        l_402 ^= p_78;
                        if (l_379)
                            break;
                    }
                    for (p_79 = 0; (p_79 < (-23)); p_79--)
                    {
                        int l_405[7] = {0x0CA53A14L,0x0CA53A14L,0x0CA53A14L,0x0CA53A14L,0x0CA53A14L,0x0CA53A14L,0x0CA53A14L};
                        int i;
                        l_405[4] = g_228[5];
                    }
                }
                else
                {
                    unsigned char l_408 = 8UL;
                    l_111 |= (p_78 <= p_79);
                    for (g_186 = 0; (g_186 <= 2); g_186 += 1)
                    {
                        int i;
                        return g_228[(g_186 + 3)];
                    }
                    l_297[0][3][6] &= (g_213[1][0][0] & (safe_rshift_func_uint16_t_u_u(l_408, 13)));
                }
                for (l_341 = (-9); (l_341 != 52); l_341 = safe_add_func_int16_t_s_s(l_341, 1))
                {
                    char l_414 = 3L;
                    --l_411;
                    l_380 |= (l_308[4][1][0] <= l_414);
                    l_417 = (safe_mod_func_int32_t_s_s(p_80, g_127));
                    for (p_80 = (-3); (p_80 >= 31); ++p_80)
                    {
                        g_273 = l_338;
                        if (p_77)
                            goto lbl_166;
                        return l_420;
                    }
                }
                l_380 = (!p_80);
            }
            if (((g_215 = (safe_add_func_uint8_t_u_u((g_167 = l_257[3]), ((safe_rshift_func_uint16_t_u_s((safe_rshift_func_uint16_t_u_u((--p_80), (safe_unary_minus_func_uint16_t_u((l_401 = (((safe_lshift_func_int16_t_s_u((l_256 & (safe_mul_func_int16_t_s_s(l_411, ((g_262[2] && l_434[7][0][6]) ^ p_79)))), 12)) > (p_79 == p_77)) == (safe_sub_func_uint32_t_u_u(((l_288 = (safe_mod_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u(p_77, 7)), p_79))) || g_215), 0xB2672286L)))))))), 15)) > (-1L))))) ^ g_186))
            {
                unsigned short l_445 = 0UL;
                int l_460 = 3L;
                for (l_111 = (-23); (l_111 >= (-3)); l_111 = safe_add_func_uint8_t_u_u(l_111, 1))
                {
                    for (g_267 = 0; (g_267 != (-16)); g_267 = safe_sub_func_uint8_t_u_u(g_267, 3))
                    {
                        l_445--;
                        if (g_228[4])
                            continue;
                    }
                    g_381 = ((g_91 ^ (-1L)) & g_258);
                }
                ++g_448[2];
                for (g_90 = 0; (g_90 >= 6); g_90++)
                {
                    if (g_167)
                        break;
                }
                for (g_221 = 19; (g_221 != 57); g_221 = safe_add_func_int8_t_s_s(g_221, 1))
                {
                    int l_459 = 0xDF37D5B8L;
                    unsigned short l_466 = 8UL;
                    for (l_420 = 0; (l_420 <= 9); l_420 += 1)
                    {
                        int i;
                        l_401 = g_448[l_420];
                        l_297[0][3][6] = g_235[2];
                        g_295 &= l_337[3][0];
                        l_121[5][0] = ((p_79 == (l_420 && (l_393 && g_85))) ^ (g_448[7] != (l_460 = ((safe_rshift_func_int16_t_s_s(0xB12DL, 6)) < (safe_mod_func_uint8_t_u_u(p_78, (l_341 ^ l_459)))))));
                    }
                    if ((safe_mod_func_uint16_t_u_u(0xC46FL, (safe_mod_func_uint8_t_u_u(l_459, g_91)))))
                    {
                        if (l_257[3])
                            break;
                        if (g_182)
                            goto lbl_465;
                        return g_381;
                    }
                    else
                    {
                        g_273 = (l_466 != p_77);
                        if (p_78)
                            continue;
                    }
                }
            }
            else
            {
                for (l_417 = (-8); (l_417 <= (-23)); l_417--)
                {
                    short l_473 = 0x0A34L;
                    int l_474 = 0x6E90CA4AL;
                    g_295 = (65528UL < ((safe_rshift_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s(0xF353L, 8)), 3)) >= (g_213[1][0][0]--)));
                }
            }
            for (l_111 = 1; (l_111 >= 0); l_111 -= 1)
            {
                int l_477 = 1L;
                if (p_79)
                    break;
                for (l_420 = 0; (l_420 <= 1); l_420 += 1)
                {
                    int l_478 = 0x92C70421L;
                    int i, j, k;
                    if (l_308[(l_420 + 7)][(l_111 + 5)][l_420])
                        break;
                    for (l_401 = 3; (l_401 >= 0); l_401 -= 1)
                    {
                        int i, j, k;
                        l_297[l_111][(l_111 + 2)][l_401] = (g_213[(l_420 + 5)][l_111][l_401] == ((g_235[(l_111 + 1)] & g_235[(l_420 + 2)]) | l_477));
                    }
                    l_478 = l_257[2];
                }
            }
        }
        if (g_329)
        {
            unsigned char l_482 = 0xE6L;
            int l_509 = 1L;
            l_297[0][3][6] = 0xB9C0BD30L;
            if (((g_213[0][4][0] < (l_434[7][0][7] = g_90)) && l_479[9][7][0]))
            {
                int l_481[9][3][2] = {{{(-3L),1L},{(-2L),(-3L)},{0L,0x15BB668DL}},{{0L,(-3L)},{(-2L),1L},{(-3L),(-1L)}},{{0x6D84C996L,1L},{1L,0x5136AB8AL},{0x5136AB8AL,0x5136AB8AL}},{{1L,1L},{0x6D84C996L,(-1L)},{(-3L),1L}},{{(-2L),(-3L)},{0L,0x15BB668DL},{0L,(-3L)}},{{(-2L),1L},{(-3L),(-1L)},{0x6D84C996L,1L}},{{1L,0x5136AB8AL},{0x5136AB8AL,0x5136AB8AL},{1L,1L}},{{0x6D84C996L,(-1L)},{(-3L),1L},{(-2L),(-1L)}},{{0x5136AB8AL,(-2L)},{0x5136AB8AL,(-1L)},{1L,(-3L)}}};
                int i, j, k;
                --l_482;
                for (g_215 = 4; (g_215 < (-7)); g_215--)
                {
                    l_509 = ((safe_sub_func_int8_t_s_s((safe_rshift_func_int8_t_s_u(((l_297[1][6][0] | g_90) != (safe_sub_func_uint8_t_u_u(((~(safe_mod_func_int32_t_s_s(g_110, g_215))) >= (p_77 != (p_80 < (p_77 == (safe_lshift_func_int8_t_s_s((safe_add_func_int16_t_s_s((safe_rshift_func_int16_t_s_u((safe_mul_func_uint16_t_u_u((safe_add_func_int8_t_s_s(g_127, ((safe_sub_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s(((p_77 || l_481[2][2][0]) != p_78), 7)), (-1L))) && p_80))), l_341)), l_482)), g_228[1])), 3)))))), (-5L)))), 7)), l_481[8][1][1])) <= 0x41L);
                }
            }
            else
            {
                int l_517[6] = {(-1L),2L,(-1L),(-1L),2L,(-1L)};
                int i;
                g_273 = (safe_mod_func_int16_t_s_s(((!(l_337[0][3] | (safe_sub_func_int32_t_s_s(l_482, (safe_mul_func_uint8_t_u_u((l_297[2][0][1] &= 0x6BL), g_258)))))) && (safe_unary_minus_func_uint8_t_u(p_79))), l_517[5]));
            }
        }
        else
        {
            unsigned short l_523 = 65526UL;
            int l_524 = 0x44F10BCEL;
            int l_553 = 0xB8EEB56EL;
            int l_554 = 0x5338B848L;
            int l_556[5][10] = {{0x52D1D395L,0x52D1D395L,0x21941213L,0x160F74AEL,(-8L),0x2A1B8C2CL,(-2L),0x2A1B8C2CL,(-8L),0x160F74AEL},{0x160F74AEL,0x5584FFE4L,0x160F74AEL,0x2A1B8C2CL,0xAEF696DBL,0xA55015E9L,(-2L),(-2L),0xA55015E9L,0xAEF696DBL},{0x21941213L,0x52D1D395L,0x52D1D395L,0x21941213L,0x160F74AEL,(-8L),0x2A1B8C2CL,(-2L),0x2A1B8C2CL,(-8L)},{0xA55015E9L,0xAB1D15E5L,0x160F74AEL,0xAB1D15E5L,0xA55015E9L,(-4L),0x52D1D395L,0x2A1B8C2CL,0x2A1B8C2CL,0x52D1D395L},{(-2L),(-4L),0x21941213L,0x21941213L,(-4L),(-2L),0xAEF696DBL,0x52D1D395L,0xA55015E9L,0x52D1D395L}};
            unsigned l_569 = 4294967295UL;
            int l_601 = 1L;
            char l_741 = 0x3CL;
            int l_759 = 0L;
            int i, j;
            l_434[7][0][6] = ((p_77 == (g_448[2] || l_297[0][5][6])) < (((~l_518) ^ ((safe_rshift_func_uint8_t_u_s(l_479[2][4][2], 2)) || (safe_mul_func_uint16_t_u_u(((l_524 &= (g_448[1] || (l_523 ^ 4294967288UL))) | ((safe_mod_func_uint32_t_u_u((l_259 ^ 0xD0L), (-8L))) && l_265)), p_80)))) ^ l_523));
            if (l_337[0][3])
            {
                short l_527 = 0x685DL;
                int l_528 = (-1L);
                int l_530 = 0xE0F95CB2L;
                int l_533 = 0x71C6B984L;
                int l_535 = 0xDA57D0B8L;
                int l_537 = 9L;
                --g_539;
                for (g_538 = 0; (g_538 != 29); g_538 = safe_add_func_int32_t_s_s(g_538, 7))
                {
                    int l_547 = 1L;
                    for (g_381 = 0; (g_381 == (-1)); --g_381)
                    {
                        unsigned l_546 = 4294967288UL;
                        l_547 &= (p_77 == l_546);
                        if (l_528)
                            break;
                        return g_262[1];
                    }
                    l_547 = l_547;
                    for (g_185 = 17; (g_185 != 1); g_185 = safe_sub_func_int8_t_s_s(g_185, 7))
                    {
                        return g_85;
                    }
                    for (g_273 = (-1); (g_273 == (-20)); --g_273)
                    {
                        int l_552 = 0x3ACCAC07L;
                        int l_555[5][3] = {{0xBF1FDB9EL,0xBF1FDB9EL,0xBF1FDB9EL},{0x75C48BBDL,0xA13513E6L,0x75C48BBDL},{0xBF1FDB9EL,0xBF1FDB9EL,0xBF1FDB9EL},{0x75C48BBDL,0xA13513E6L,0x75C48BBDL},{0xBF1FDB9EL,0xBF1FDB9EL,0xBF1FDB9EL}};
                        int i, j;
                        g_381 |= p_79;
                        ++g_557[4];
                    }
                }
            }
            else
            {
                char l_570[3];
                int l_596 = 0x488CEE08L;
                int l_602 = 0x42B7E91CL;
                int l_603 = 0L;
                int i;
                for (i = 0; i < 3; i++)
                    l_570[i] = 6L;
                l_479[7][4][0] |= g_258;
                if ((p_79 > p_78))
                {
                    short l_560 = 2L;
                    int l_561 = 7L;
                    if (l_560)
                    {
                        short l_563 = 0xA0F7L;
                        int l_564[7];
                        int i;
                        for (i = 0; i < 7; i++)
                            l_564[i] = 0x5B680364L;
                        ++g_566[3];
                    }
                    else
                    {
                        l_554 = l_569;
                        return l_570[2];
                    }
                    if (l_570[2])
                    {
                        return p_78;
                    }
                    else
                    {
                        l_479[9][5][1] = p_79;
                        g_273 |= ((p_79 <= (g_127 == (!(((safe_rshift_func_uint8_t_u_u(l_560, 4)) ^ g_213[2][1][1]) < (safe_mod_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u(l_337[0][3], (safe_mod_func_int16_t_s_s(0x50DBL, (p_78 ^ (g_448[7]++)))))), l_518)))))) != g_566[3]);
                    }
                    for (l_554 = 28; (l_554 == 1); l_554 = safe_sub_func_uint32_t_u_u(l_554, 2))
                    {
                        l_561 = (g_536 && 255UL);
                    }
                    for (l_524 = 3; (l_524 >= 0); l_524 -= 1)
                    {
                        unsigned l_583 = 0x1BD5B4D9L;
                        --l_583;
                    }
                }
                else
                {
                    for (l_569 = 0; l_569 < 5; l_569 += 1)
                    {
                        for (g_532 = 0; g_532 < 3; g_532 += 1)
                        {
                            l_382[l_569][g_532] = 1L;
                        }
                    }
                    for (l_569 = (-23); (l_569 < 45); l_569++)
                    {
                        g_295 = (safe_mul_func_uint8_t_u_u(((safe_add_func_uint32_t_u_u(g_110, (g_565 & ((p_80 < g_557[4]) < 255UL)))) != ((((!(0x83FBB4B0L == g_127)) & (-7L)) && 0x07L) ^ p_79)), p_78));
                    }
                }
                if ((l_554 |= ((safe_sub_func_int16_t_s_s((safe_mul_func_int8_t_s_s((~l_420), (((((g_91 <= (g_215 &= (!l_259))) == g_565) > (l_596 = g_329)) < l_393) ^ g_381))), ((safe_mul_func_int8_t_s_s(l_112, (safe_mul_func_int16_t_s_s(l_601, p_79)))) <= 0x54389501L))) > l_570[2])))
                {
                    g_607[2]++;
                }
                else
                {
                    unsigned l_642 = 0x8DDA350EL;
                    unsigned char l_643 = 8UL;
                    int l_645 = 0x84FCB8B2L;
                    int l_647[6][4][6] = {{{(-7L),0xA2BBC0F6L,1L,0xC74970BDL,0x3C60A51EL,0L},{0L,0x4153DC0AL,0xA2BBC0F6L,0xA2BBC0F6L,0x4153DC0AL,0L},{0xC74970BDL,0x246A8FB5L,1L,0x724D8DF6L,0L,0L},{0xAD37025CL,0x724D8DF6L,0x3C60A51EL,0x86353B60L,0x3C60A51EL,0x724D8DF6L}},{{0xAD37025CL,0L,0x86353B60L,0xC74970BDL,0L,0x4153DC0AL},{0xA2BBC0F6L,0x86353B60L,0xAD37025CL,0x246A8FB5L,0x246A8FB5L,0xAD37025CL},{0x86353B60L,0x86353B60L,0x8AF764A3L,0xA2BBC0F6L,0L,0x246A8FB5L},{0x724D8DF6L,0L,0xC74970BDL,0x8AF764A3L,0x3C60A51EL,0x8AF764A3L}},{{0xC74970BDL,0x724D8DF6L,0xC74970BDL,0x4153DC0AL,0x86353B60L,0x246A8FB5L},{(-7L),0x4153DC0AL,0x8AF764A3L,1L,0xAD37025CL,0xAD37025CL},{1L,0xAD37025CL,0xAD37025CL,1L,0x8AF764A3L,0x4153DC0AL},{(-7L),0x246A8FB5L,0x86353B60L,0x4153DC0AL,0xC74970BDL,0x724D8DF6L}},{{0xC74970BDL,0x8AF764A3L,0x3C60A51EL,0x8AF764A3L,0xC74970BDL,0L},{0x724D8DF6L,0x246A8FB5L,0L,0xA2BBC0F6L,0x8AF764A3L,0x86353B60L},{0x86353B60L,0xAD37025CL,0x246A8FB5L,0x246A8FB5L,0xAD37025CL,0x86353B60L},{0xA2BBC0F6L,0x4153DC0AL,0L,0xC74970BDL,0x86353B60L,0L}},{{0xAD37025CL,0x724D8DF6L,0x3C60A51EL,0x86353B60L,0x3C60A51EL,0x724D8DF6L},{0xAD37025CL,0L,0x86353B60L,0xC74970BDL,0L,0x4153DC0AL},{0xA2BBC0F6L,0x86353B60L,0xAD37025CL,0x246A8FB5L,0x4153DC0AL,0L},{0x3C60A51EL,0x3C60A51EL,(-7L),0x246A8FB5L,0x86353B60L,0x4153DC0AL}},{{0xC74970BDL,1L,0xA2BBC0F6L,(-7L),0x8AF764A3L,(-7L)},{0xA2BBC0F6L,0xC74970BDL,0xA2BBC0F6L,0xAD37025CL,0x3C60A51EL,0x4153DC0AL},{0x724D8DF6L,0xAD37025CL,(-7L),0L,0L,0L},{0L,0L,0L,0L,(-7L),0xAD37025CL}}};
                    unsigned short l_649 = 0UL;
                    unsigned short l_666 = 0UL;
                    int i, j, k;
                    l_297[1][5][1] = p_80;
                    if (l_570[2])
                    {
                        l_556[4][0] = ((safe_lshift_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(g_235[0], (((g_91 |= (g_213[1][0][1] = g_190)) == g_605) && (g_273 > 0x55L)))), (safe_lshift_func_int16_t_s_u((safe_mul_func_uint8_t_u_u(g_221, (!(safe_lshift_func_int16_t_s_s(l_113, 5))))), 7)))) > (((safe_sub_func_uint16_t_u_u((~(safe_sub_func_uint8_t_u_u((l_297[0][3][6] = g_607[2]), p_80))), 0L)) | g_267) >= 0x27L));
                    }
                    else
                    {
                        unsigned short l_641[9][4] = {{0x977CL,1UL,6UL,0x689AL},{0x5E4CL,7UL,65535UL,6UL},{0UL,7UL,0UL,0x689AL},{7UL,1UL,0UL,0x6016L},{0x6016L,6UL,0x5E4CL,1UL},{0UL,0x5E4CL,0x5E4CL,0UL},{0x6016L,0x689AL,0UL,0UL},{7UL,0x212AL,0UL,0x5E6BL},{0UL,0x5E6BL,65535UL,0x5E6BL}};
                        int l_644 = 2L;
                        char l_646[4] = {0L,0L,0L,0L};
                        int l_648 = 0L;
                        int i, j;
                        l_479[9][7][0] = (safe_lshift_func_uint8_t_u_u(((safe_add_func_int8_t_s_s((l_601 = (safe_lshift_func_uint8_t_u_s(((p_77 <= (((safe_add_func_uint8_t_u_u((g_167 != 1L), (!0xDAL))) < ((safe_lshift_func_int16_t_s_s(l_113, 10)) != l_602)) != 0xD21E0851L)) >= (((safe_rshift_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u((l_641[0][0] &= (p_79 != (0x75L & l_640))), 6)), 14)) > g_235[2]) == p_77)), p_79))), p_80)) | 2L), g_129));
                        l_643 |= l_642;
                        --l_649;
                        g_538 &= l_645;
                    }
                    g_534 = (safe_mod_func_uint16_t_u_u((3L & ((safe_mul_func_int8_t_s_s(((g_91--) || (g_536 >= ((safe_sub_func_uint16_t_u_u(g_235[0], ((g_273 && (p_78 <= (l_556[0][1] <= ((((l_596 != ((safe_add_func_uint16_t_u_u((p_80 = l_382[2][0]), (safe_mul_func_int16_t_s_s((((g_667 = (g_605 & l_666)) < l_529[0][1]) <= 0x34806E64L), l_523)))) >= p_79)) != 0x6CL) & 0L) & l_602)))) != l_103))) || l_645))), (-7L))) < 0x1E4534A2L)), g_557[3]));
                    l_647[3][3][1] = 0x5819AA47L;
                }
            }
            for (g_605 = 4; (g_605 >= 1); g_605 -= 1)
            {
                unsigned short l_679[3];
                int l_680[3][5] = {{0x1D8E1AB5L,(-7L),0x1D8E1AB5L,(-7L),0x1D8E1AB5L},{0x8FCC2C71L,0x8FCC2C71L,0x8FCC2C71L,0x8FCC2C71L,0x8FCC2C71L},{0x1D8E1AB5L,(-7L),0x1D8E1AB5L,(-7L),0x1D8E1AB5L}};
                int l_757 = 6L;
                int i, j;
                for (i = 0; i < 3; i++)
                    l_679[i] = 4UL;
                for (g_532 = 0; (g_532 <= 2); g_532 += 1)
                {
                    int i, j;
                    if (l_556[g_605][(g_605 + 2)])
                    {
                        unsigned l_678 = 4294967295UL;
                        char l_681 = (-1L);
                        int i, j;
                        l_680[2][2] = (safe_add_func_int8_t_s_s((((g_129 = l_518) & (((l_679[0] = (((safe_mod_func_uint16_t_u_u((((l_338 || 0x1C9E2AB2L) != g_295) <= g_182), g_538)) >= g_268) >= (1L != (l_556[g_605][g_605] = (safe_mul_func_int8_t_s_s((l_678 = (((((!((safe_mul_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s((l_259 > 0x1CL), 0)), p_80)) == 0xC54809BAL)) || 247UL) & l_556[g_605][(g_605 + 2)]) | 0xC845L) == 0x827DL)), 0x7AL)))))) || 0x331BL) ^ p_80)) != 0x0ED0L), p_79));
                        g_273 = g_381;
                        l_111 = g_557[4];
                        if (l_681)
                            continue;
                    }
                    else
                    {
                        if (l_523)
                            break;
                        l_556[0][1] = (safe_sub_func_uint8_t_u_u((0L >= (p_79 > (safe_mod_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u(((((++g_213[1][0][0]) <= (safe_sub_func_uint16_t_u_u(g_228[5], (safe_mod_func_int8_t_s_s(l_556[0][1], l_569))))) < (safe_rshift_func_uint8_t_u_s(((-8L) <= g_215), 3))) || g_151), (safe_mod_func_uint32_t_u_u((safe_add_func_uint8_t_u_u((safe_add_func_int32_t_s_s(l_556[g_605][(g_605 + 2)], p_78)), g_90)), p_78)))), g_182)))), g_127));
                    }
                    if (p_78)
                        break;
                    l_556[g_605][(g_605 + 2)] &= 0x29DB6BACL;
                    l_524 |= (safe_lshift_func_int8_t_s_s((l_680[2][2] > (safe_rshift_func_uint16_t_u_s((l_679[0] ^ (g_667 > 0xC8L)), 7))), (((-3L) != (0xBE4B1961L >= (safe_mul_func_int8_t_s_s(l_523, ((l_679[0] || (l_708 |= (l_553 = l_556[0][1]))) == g_215))))) ^ l_679[0])));
                    for (g_258 = 0; (g_258 <= 2); g_258 += 1)
                    {
                        int i, j, k;
                        return l_297[g_532][(g_532 + 1)][(g_258 + 4)];
                    }
                }
                for (l_338 = 2; (l_338 >= 0); l_338 -= 1)
                {
                    int l_719 = 0xB65B7518L;
                    if ((safe_rshift_func_uint8_t_u_s((safe_add_func_int16_t_s_s((~l_524), (safe_lshift_func_int8_t_s_u((safe_add_func_uint32_t_u_u((g_213[4][6][1] = l_601), (l_719 | 0UL))), (l_126 && (g_127 = (g_185 = (safe_mod_func_int16_t_s_s((safe_unary_minus_func_int32_t_s((((safe_add_func_int16_t_s_s(l_297[0][0][1], (safe_rshift_func_int16_t_s_u(1L, (((g_2 > (l_680[1][4] = (p_80 = (((safe_mod_func_uint8_t_u_u((l_479[8][2][2] = (safe_sub_func_int32_t_s_s((safe_lshift_func_uint8_t_u_s(((safe_add_func_int32_t_s_s((safe_add_func_int16_t_s_s((safe_mul_func_uint8_t_u_u((((p_77 && l_556[0][1]) & g_186) && p_78), g_557[2])), g_607[2])), 0x2726E73DL)) >= 0L), g_667)), g_381))), l_420)) <= 0UL) || 1UL)))) != g_273) <= p_78))))) != l_741) != l_556[0][1]))), g_262[1]))))))))), g_258)))
                    {
                        unsigned l_742 = 1UL;
                        l_601 = (g_538 == l_742);
                        if (p_78)
                            goto lbl_166;
                        g_381 = 0x44B8D914L;
                        g_295 = l_708;
                    }
                    else
                    {
                        g_538 |= (safe_add_func_int8_t_s_s((safe_rshift_func_int16_t_s_u((safe_unary_minus_func_uint32_t_u(4294967295UL)), p_77)), (g_129 |= g_215)));
                        if (p_80)
                            goto lbl_748;
                        if (g_534)
                            continue;
                        g_565 |= (safe_rshift_func_int8_t_s_s(p_78, 2));
                    }
                    l_757 = ((safe_add_func_int8_t_s_s((safe_mul_func_int16_t_s_s((safe_add_func_uint8_t_u_u(l_556[0][9], l_529[0][1])), (p_80 < g_295))), (p_79 > (l_680[0][3] = l_679[0])))) < g_607[2]);
                    for (g_167 = 0; (g_167 <= 2); g_167 += 1)
                    {
                        int i, j, k;
                        l_297[l_338][l_338][(g_605 + 1)] = l_297[g_167][(g_167 + 4)][(l_338 + 4)];
                    }
                }
            }
            g_761--;
        }
        l_121[7][1] = g_667;
        if (((((safe_mul_func_int8_t_s_s((l_297[0][3][6] ^= ((safe_sub_func_uint16_t_u_u(g_258, (((1L & 0xBCEE5861L) >= (safe_sub_func_uint32_t_u_u(((safe_add_func_int16_t_s_s((safe_sub_func_int32_t_s_s((g_448[6] && g_760), p_77)), (p_78 < (g_606 = l_529[0][1])))) != (l_708 = l_393)), g_118))) | 0x21ABL))) == 1L)), g_267)) && 0x151DL) & 0xB327123DL) || l_417))
        {
            unsigned short l_784 = 0x31A9L;
            int l_787 = 0xC2509FF3L;
            int l_826[4];
            int i;
            for (i = 0; i < 4; i++)
                l_826[i] = 0xEAF15581L;
            l_787 = ((safe_lshift_func_int16_t_s_s(((safe_rshift_func_uint8_t_u_s((((safe_sub_func_uint8_t_u_u(l_529[0][1], (g_190 || (safe_add_func_int8_t_s_s(6L, (safe_lshift_func_uint16_t_u_u(0x6582L, 1))))))) != l_784) != l_479[5][2][0]), ((l_121[7][1] = g_538) || p_80))) | (safe_sub_func_uint32_t_u_u(0x73DD002BL, g_605))), 11)) & 0xD1L);
            g_534 |= ((safe_rshift_func_int16_t_s_s((g_267 = (~(-4L))), 10)) > ((l_787 = (l_382[1][0] >= (g_606 = (safe_lshift_func_uint8_t_u_u(g_557[4], 6))))) ^ 0xFB3AL));
            for (l_787 = (-17); (l_787 == 10); l_787++)
            {
                unsigned l_815 = 0x79DC8F30L;
                int l_821[4][8][2] = {{{0x5DF0D2F2L,0x5DF0D2F2L},{8L,0xDAEE834CL},{0xCB4C0E58L,0L},{0xC807DF57L,8L},{0x492A27E0L,0x5DF0D2F2L},{0x492A27E0L,(-4L)},{0x492A27E0L,0x5DF0D2F2L},{0L,6L}},{{0x5DF0D2F2L,0xDDCB2AD9L},{0L,0xCB4C0E58L},{6L,0xDAEE834CL},{0xDAEE834CL,0xDAEE834CL},{6L,0xCB4C0E58L},{0L,0xDDCB2AD9L},{0x5DF0D2F2L,6L},{0L,0x5DF0D2F2L}},{{0x492A27E0L,(-4L)},{0x492A27E0L,0x5DF0D2F2L},{0L,6L},{0x5DF0D2F2L,0xDDCB2AD9L},{0L,0xCB4C0E58L},{6L,0xDAEE834CL},{0xDAEE834CL,0xDAEE834CL},{6L,0xCB4C0E58L}},{{0L,0xDDCB2AD9L},{0x5DF0D2F2L,6L},{0L,0x5DF0D2F2L},{0x492A27E0L,(-4L)},{0x492A27E0L,0x5DF0D2F2L},{0L,6L},{0x5DF0D2F2L,0xDDCB2AD9L},{0L,0xCB4C0E58L}}};
                int i, j, k;
                if (l_787)
                {
                    unsigned l_816[8][2][3] = {{{0xB92794F2L,0x7C04A6F3L,0xB92794F2L},{0xC74AE0FDL,0x6EFBC49FL,0xB50102A8L}},{{0xC74AE0FDL,0xC74AE0FDL,0x6EFBC49FL},{0xB92794F2L,0x6EFBC49FL,0x6EFBC49FL}},{{0x6EFBC49FL,0x7C04A6F3L,0xB50102A8L},{0xB92794F2L,0x7C04A6F3L,0xB92794F2L}},{{0xC74AE0FDL,0x6EFBC49FL,0xB50102A8L},{0xC74AE0FDL,0xC74AE0FDL,0x6EFBC49FL}},{{0xB92794F2L,0x6EFBC49FL,0x6EFBC49FL},{0x6EFBC49FL,0x7C04A6F3L,0xB50102A8L}},{{0xB92794F2L,0x7C04A6F3L,0xB92794F2L},{0xC74AE0FDL,0x6EFBC49FL,0xB50102A8L}},{{0xC74AE0FDL,0xC74AE0FDL,0x6EFBC49FL},{0xB92794F2L,0xB50102A8L,0xB50102A8L}},{{0xB50102A8L,0x6EFBC49FL,0xC74AE0FDL},{0x7C04A6F3L,0x6EFBC49FL,0x7C04A6F3L}}};
                    int l_827 = 6L;
                    int l_828 = 0xE2EB0E9EL;
                    int l_829[3][8] = {{0L,0x8AA70C21L,0L,0x14F2D558L,0L,0L,0x14F2D558L,0L},{0x8AA70C21L,0x8AA70C21L,0L,2L,(-3L),2L,0L,0x8AA70C21L},{0x8AA70C21L,0L,0x14F2D558L,0L,0L,0x14F2D558L,0L,0x8AA70C21L}};
                    int i, j, k;
                    for (p_79 = 27; (p_79 < 28); p_79 = safe_add_func_int32_t_s_s(p_79, 6))
                    {
                        unsigned l_796[3];
                        int i;
                        for (i = 0; i < 3; i++)
                            l_796[i] = 5UL;
                        l_796[1] &= (g_381 |= (g_565 = (g_185 >= p_78)));
                        l_821[2][6][0] = (g_381 = (safe_sub_func_int32_t_s_s(((safe_rshift_func_int8_t_s_s(((safe_mul_func_int8_t_s_s((safe_mod_func_uint16_t_u_u((safe_sub_func_int16_t_s_s(p_79, (safe_rshift_func_uint8_t_u_s((safe_add_func_uint8_t_u_u((p_77 & (((safe_rshift_func_int8_t_s_u(p_78, 2)) & (safe_lshift_func_int8_t_s_u((l_815 = 0xD0L), l_816[2][0][1]))) < l_816[2][0][1])), p_77)), 1)))), (safe_sub_func_int8_t_s_s((safe_sub_func_uint32_t_u_u((p_77 <= (((l_337[3][3] |= p_80) | g_127) & g_539)), 0xA257FF9BL)), g_235[2])))), g_186)) && 0L), p_80)) | 0x402FD1E0L), p_79)));
                        return l_821[2][7][0];
                    }
                    if ((l_297[0][3][6] > (0xBE95L >= (safe_lshift_func_uint8_t_u_s(l_816[2][1][1], 0)))))
                    {
                        l_821[2][4][1] = (~(g_295 &= (safe_sub_func_int8_t_s_s(g_215, p_78))));
                        l_826[3] = (0x7CL < 0UL);
                        return l_787;
                    }
                    else
                    {
                        l_337[0][3] &= 0x25FD9816L;
                    }
                    for (l_256 = 5; (l_256 >= 0); l_256 -= 1)
                    {
                        int i;
                        ++g_830;
                        l_828 = l_100[(l_256 + 2)];
                    }
                }
                else
                {
                    l_265 = 0x53934B92L;
                }
            }
        }
        else
        {
            unsigned short l_847 = 9UL;
            unsigned l_863 = 1UL;
            int l_866 = 0x73BC7EB4L;
            int l_867 = 1L;
            l_479[0][3][0] &= (((safe_add_func_uint32_t_u_u(l_417, 9L)) || p_77) & 0xB54AL);
            for (l_420 = 0; (l_420 != 3); l_420++)
            {
                unsigned short l_837 = 0xF0DBL;
                unsigned short l_855 = 1UL;
                int l_864[7][2];
                int i, j;
                for (i = 0; i < 7; i++)
                {
                    for (j = 0; j < 2; j++)
                        l_864[i][j] = 0xF7E7646BL;
                }
                for (g_127 = 0; (g_127 <= 0); g_127 += 1)
                {
                    int i, j;
                    l_837++;
                    for (l_103 = 0; (l_103 <= 2); l_103 += 1)
                    {
                        int i, j, k;
                        l_121[(l_103 + 5)][g_127] = (l_434[(g_127 + 1)][g_127][(g_127 + 3)] = (l_434[(g_127 + 4)][g_127][(g_127 + 1)] >= l_121[(l_103 + 5)][g_127]));
                    }
                }
                for (g_381 = (-11); (g_381 >= (-14)); g_381--)
                {
                    short l_845 = 0x867AL;
                    int l_846 = 0x5E1B16F7L;
                    l_846 &= (g_565 = (safe_unary_minus_func_uint16_t_u((safe_sub_func_int32_t_s_s((~(l_434[8][0][3] ^= p_77)), ((0xEA52L >= p_80) != (g_258 == l_845)))))));
                    l_847--;
                    for (l_341 = 19; (l_341 <= 9); l_341--)
                    {
                        unsigned l_852 = 0xFDD763FFL;
                        l_852++;
                        if (l_855)
                            continue;
                        if (l_111)
                            goto lbl_748;
                    }
                    if (((p_77 == g_448[5]) != g_190))
                    {
                        return l_837;
                    }
                    else
                    {
                        int l_860 = 0xB2E998C8L;
                        g_295 = (safe_mul_func_int16_t_s_s((safe_mod_func_int32_t_s_s(l_860, (-4L))), (l_297[2][3][5] = (((-8L) < l_846) | ((safe_rshift_func_int16_t_s_s((p_79 && ((((~(p_79 == ((g_2 > l_297[0][3][6]) > g_151))) && l_337[1][3]) > l_846) == l_863)), 14)) == g_186)))));
                    }
                }
                ++g_870;
            }
            for (g_604 = (-16); (g_604 == (-30)); g_604--)
            {
                unsigned char l_877 = 255UL;
                l_878 = (safe_rshift_func_uint16_t_u_u(l_877, 9));
                for (g_91 = 0; (g_91 > 3); g_91 = safe_add_func_uint16_t_u_u(g_91, 1))
                {
                    short l_897 = 0xD580L;
                    for (g_167 = 3; (g_167 < 10); g_167 = safe_add_func_uint32_t_u_u(g_167, 1))
                    {
                        unsigned l_898 = 0xBB91633AL;
                        g_538 = l_877;
                        if (p_79)
                            break;
                        l_297[0][3][6] = p_79;
                        g_381 = (g_2 == (((safe_lshift_func_int8_t_s_s((g_557[4] ^ ((safe_sub_func_uint32_t_u_u(((safe_lshift_func_int16_t_s_u(8L, ((safe_mod_func_uint8_t_u_u((((safe_add_func_uint8_t_u_u(((safe_mul_func_uint8_t_u_u(l_897, p_77)) == g_118), l_898)) <= p_77) ^ (safe_lshift_func_int8_t_s_s(2L, 6))), p_77)) & g_228[6]))) <= l_866), p_77)) | p_78)), 1)) | 0xC4B96F2CL) < g_273));
                    }
                    return p_80;
                }
            }
        }
    }
    if (l_434[7][0][0])
    {
        unsigned l_906[6][7][5] = {{{4294967290UL,0x3B4168D5L,4294967290UL,0x64705C4CL,1UL},{4294967294UL,0x108ADC69L,1UL,4294967294UL,0x248E4657L},{0x2BABDED0L,0x462C249FL,4294967290UL,1UL,0UL},{0x9669BACBL,4294967295UL,0xBC264120L,4294967295UL,0x9669BACBL},{0x462C249FL,0x64705C4CL,0xCFA8C6C0L,0xF6F2CC6EL,0x101422ACL},{0x93919779L,1UL,4294967294UL,1UL,1UL},{0x3E556A0CL,9UL,0x11023FD0L,0x64705C4CL,0x101422ACL}},{{0x4320D6F3L,1UL,0xDD5587C6L,0x1236F736L,0x9669BACBL},{0x101422ACL,0x75476CCAL,0x462C249FL,0x3E556A0CL,0UL},{4294967295UL,0UL,4294967293UL,0x248E4657L,0x248E4657L},{4294967295UL,0xF5AEAE4CL,4294967295UL,0x62754213L,1UL},{0x93919779L,0xFB7ED7D2L,0x4320D6F3L,1UL,0UL},{0x567A4B03L,0x101422ACL,0xF4589C71L,4294967295UL,4294967286UL},{1UL,0x903DA21AL,4294967287UL,4294967289UL,4294967295UL}},{{0xF6F2CC6EL,0xF4589C71L,0x11023FD0L,0x75476CCAL,0UL},{0x903DA21AL,0xCE00D265L,0UL,0x4320D6F3L,1UL},{0xDA5F506FL,0xCFA8C6C0L,0x12B9D89CL,0x12B9D89CL,0xCFA8C6C0L},{0xDD5587C6L,4294967287UL,1UL,0xCE00D265L,0x1B3732FDL},{0x75476CCAL,4294967295UL,1UL,0x462C249FL,0xF6F2CC6EL},{0x1B3732FDL,1UL,0xBC264120L,0UL,4294967295UL},{0x75476CCAL,2UL,0xDA5F506FL,4294967286UL,0x11023FD0L}},{{0xDD5587C6L,0x1236F736L,0x9669BACBL,4294967294UL,0x4320D6F3L},{0xDA5F506FL,0x5B4A1FDFL,0xF4589C71L,1UL,4294967290UL},{0x903DA21AL,0x1B3732FDL,0x1B3732FDL,0x903DA21AL,0UL},{0xF6F2CC6EL,4294967295UL,0x101422ACL,4294967290UL,0x5B4A1FDFL},{1UL,1UL,0UL,4294967287UL,0UL},{4294967295UL,1UL,0xDA5F506FL,4294967290UL,0x8F14BB00L},{0xFB7ED7D2L,0xCE00D265L,0x248E4657L,0x903DA21AL,0xCE00D265L}},{{0x11023FD0L,0x75476CCAL,0UL,1UL,8UL},{1UL,0xBC264120L,1UL,4294967294UL,1UL},{8UL,8UL,0x3E556A0CL,4294967286UL,0x5B4A1FDFL},{4294967287UL,4294967295UL,0xEA0807BDL,0x1B3732FDL,1UL},{8UL,0UL,0x8F14BB00L,4294967290UL,0xDA5F506FL},{0x903DA21AL,0xDD5587C6L,1UL,4294967294UL,0xFB7ED7D2L},{0xF4589C71L,0x62754213L,7UL,0xF4589C71L,8UL}},{{0xCE00D265L,4294967287UL,4294967295UL,0xFB7ED7D2L,0UL},{0xCFA8C6C0L,0x5B4A1FDFL,0x64705C4CL,0x5B4A1FDFL,0xCFA8C6C0L},{4294967287UL,4294967294UL,0xBC264120L,0xEA0807BDL,0x1236F736L},{4294967295UL,1UL,0xF4589C71L,0x75476CCAL,1UL},{1UL,4294967295UL,0x93919779L,4294967294UL,0x1236F736L},{2UL,0x75476CCAL,1UL,4294967290UL,0xCFA8C6C0L},{0x1236F736L,0xBBF206F0L,4294967287UL,1UL,0UL}}};
        int l_911 = 0x3CE8D217L;
        int l_912[7] = {0xE02C5F1FL,0xE02C5F1FL,0xE02C5F1FL,0xE02C5F1FL,0xE02C5F1FL,0xE02C5F1FL,0xE02C5F1FL};
        int i, j, k;
        l_912[2] ^= ((safe_mul_func_int16_t_s_s(0xC655L, (safe_mul_func_int16_t_s_s(((!((l_905 || (-1L)) && l_906[2][6][1])) >= (l_113 != (((safe_rshift_func_uint16_t_u_u(((l_911 = 0xCBAF6297L) != g_228[3]), (p_80 = g_607[2]))) == l_434[6][0][3]) == (-1L)))), 0x66E9L)))) >= g_110);
        g_295 = ((((!(l_912[2] = (g_110 |= ((!(l_434[8][0][2] >= (g_258 >= l_103))) ^ (safe_mul_func_uint8_t_u_u((+(l_915[6][0][1] || (p_78 | (l_152 != ((0x1F58L != g_90) & (((safe_sub_func_int8_t_s_s((-1L), 0x96L)) < g_228[1]) | l_121[0][0])))))), p_80)))))) & l_906[2][6][1]) > g_480) | 0xBEL);
    }
    else
    {
        unsigned short l_932[3];
        int l_1002 = 0xEE6C1D98L;
        int l_1015 = 0x79245F8BL;
        int l_1017 = 1L;
        int l_1018 = 1L;
        int l_1019 = (-1L);
        int l_1022 = 0x4DA33946L;
        int l_1023 = (-1L);
        int i;
        for (i = 0; i < 3; i++)
            l_932[i] = 0x39AEL;
lbl_1034:
        for (g_381 = 1; (g_381 <= 9); g_381 += 1)
        {
            int l_928 = 0L;
            int l_931 = 8L;
            unsigned l_1024 = 0xE07AA8F3L;
            int l_1029 = 0x75EB6B62L;
            int l_1030 = (-8L);
            int i;
            l_337[5][0] ^= (safe_rshift_func_int8_t_s_u((safe_lshift_func_uint16_t_u_s((safe_mod_func_uint32_t_u_u(0x3316D458L, (l_479[9][4][0] = (safe_mod_func_uint16_t_u_u(((safe_add_func_int16_t_s_s((-5L), ((((g_127 ^ (l_928 == l_928)) | (safe_rshift_func_int8_t_s_u(g_295, 2))) >= (l_932[0]++)) != ((--g_448[g_381]) != g_228[5])))) == (safe_rshift_func_int16_t_s_u(g_213[4][5][1], 2))), (l_434[7][0][4] = (p_80 || 0x75L))))))), 1)), 2));
            for (g_531 = 0; (g_531 > (-12)); g_531 = safe_sub_func_uint8_t_u_u(g_531, 6))
            {
                unsigned l_943 = 0xD47B3D5BL;
                int l_955 = 0x7FA699B9L;
                int l_1009 = 0xD27DAE8DL;
                for (g_182 = (-11); (g_182 > 12); ++g_182)
                {
                    g_565 = ((--l_943) > p_77);
                    if (g_667)
                        continue;
                }
                l_434[0][0][4] = (p_78 < (l_640 == (safe_sub_func_uint8_t_u_u((0x9A1C6580L >= (safe_rshift_func_int16_t_s_u(((g_557[5] = l_928) > (+((safe_rshift_func_uint16_t_u_s(l_943, l_932[0])) && g_607[2]))), ((0xE63AE6DAL & l_878) | p_78)))), (-4L)))));
                for (g_190 = (-25); (g_190 < (-7)); g_190++)
                {
                    short l_954 = 0x365FL;
                    int l_1004 = 0xD56B97D3L;
                    int l_1005 = 0L;
                    int l_1006[3][3][6] = {{{(-1L),(-1L),0x1C6029AEL,(-9L),0x7D4EF51DL,0xAF5F5271L},{0xAF5F5271L,(-1L),(-1L),0x79DFDAB6L,0xC78B94F3L,0x1C6029AEL},{(-6L),0xAF5F5271L,(-1L),0x92008229L,(-1L),0xAF5F5271L}},{{0x3830B78AL,0x92008229L,0x1C6029AEL,0xFBCDBAA3L,(-7L),(-9L)},{0xFBCDBAA3L,(-7L),(-9L),(-1L),0x86479B43L,0xD0EFD9ADL},{0x5D71189CL,(-7L),0x7D4EF51DL,0x7D4EF51DL,(-7L),0x5D71189CL}},{{(-7L),0x3830B78AL,0x1C6029AEL,(-6L),0x92008229L,(-1L)},{0xD0EFD9ADL,0x1C6029AEL,0x7D4EF51DL,0xFBCDBAA3L,0xCA711330L,0xAF5F5271L},{0xD0EFD9ADL,(-6L),0xFBCDBAA3L,(-6L),0xD0EFD9ADL,0x92008229L}}};
                    int l_1008 = 0xA25FFBA9L;
                    int i, j, k;
                    l_954 = 0xC8856025L;
                    if (p_79)
                    {
                        int l_972 = 0x71B7A8D2L;
                        g_295 = (1UL != g_381);
                        l_955 = l_932[1];
                        l_928 = (safe_mod_func_uint8_t_u_u((((-8L) | (0L == (!(safe_lshift_func_uint8_t_u_s(l_955, (safe_add_func_uint16_t_u_u(g_532, ((p_77 <= g_267) & 0x47L)))))))) == (l_932[0] & 1UL)), p_80));
                        g_273 = ((g_604 = (((p_80 > ((safe_mul_func_int16_t_s_s((g_869 = p_78), (safe_sub_func_int8_t_s_s((((0xD663L > (g_557[4] >= (safe_rshift_func_uint8_t_u_u(g_566[3], 1)))) != (p_77 < 0x17L)) != (safe_lshift_func_uint16_t_u_u((l_972 = (g_110 = 0UL)), 12))), (-6L))))) & p_77)) == g_606) != l_943)) == g_235[0]);
                    }
                    else
                    {
                        const unsigned l_975[2][2][2] = {{{0UL,0xEFAFEBB0L},{0UL,0xEFAFEBB0L}},{{0UL,0xEFAFEBB0L},{0UL,0xEFAFEBB0L}}};
                        int l_983 = (-1L);
                        int l_1003 = 0x90B19833L;
                        int l_1007 = 9L;
                        int i, j, k;
                        l_928 ^= (safe_lshift_func_uint8_t_u_u(l_975[0][0][0], (g_976 >= ((l_943 != (safe_mul_func_int16_t_s_s(((0x27F8L || g_565) > g_267), (((g_295 >= l_975[0][0][0]) | (safe_sub_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u((l_983 = 7UL), 3)), g_606))) || l_932[2])))) & 0xB675L))));
                        g_273 = ((safe_add_func_int8_t_s_s((l_983 = (safe_mul_func_uint16_t_u_u(g_186, ((safe_mod_func_int8_t_s_s((safe_lshift_func_int8_t_s_s((g_85 = 7L), 0)), (safe_rshift_func_int16_t_s_u(p_77, (safe_rshift_func_int8_t_s_u((!(-1L)), 5)))))) ^ (safe_rshift_func_uint8_t_u_u(g_448[g_381], (l_640 && (g_186 <= (l_1002 = ((safe_lshift_func_int8_t_s_u(l_121[5][2], 7)) <= p_78)))))))))), 0xB1L)) ^ 1L);
                        g_1010[1][0][1]++;
                        l_955 = (5L ^ (l_1002 = (l_931 & 0x12L)));
                    }
                    if (g_90)
                        break;
                    l_1009 = g_262[1];
                }
                for (l_152 = (-1); (l_152 > 42); l_152 = safe_add_func_int16_t_s_s(l_152, 4))
                {
                    int l_1016 = 0x06915257L;
                    int l_1020 = 5L;
                    int l_1021 = 0x03C793B2L;
                    l_1024--;
                    for (l_955 = 0; (l_955 == 22); ++l_955)
                    {
                        l_126 &= (-1L);
                        if (l_111)
                            goto lbl_1034;
                    }
                }
            }
            ++g_1031;
        }
        l_1015 |= (safe_mod_func_uint32_t_u_u((safe_add_func_uint16_t_u_u((safe_mod_func_int8_t_s_s((l_121[1][2] = 0x10L), (g_869 | (l_1017 |= (safe_rshift_func_uint16_t_u_u(p_77, 4)))))), 0UL)), 0xCDAABFA6L));
    }
    return p_80;
}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_16, "g_16", print_hash_value);
    transparent_crc(g_17, "g_17", print_hash_value);
    transparent_crc(g_85, "g_85", print_hash_value);
    transparent_crc(g_90, "g_90", print_hash_value);
    transparent_crc(g_91, "g_91", print_hash_value);
    transparent_crc(g_110, "g_110", print_hash_value);
    transparent_crc(g_118, "g_118", print_hash_value);
    transparent_crc(g_127, "g_127", print_hash_value);
    transparent_crc(g_129, "g_129", print_hash_value);
    transparent_crc(g_151, "g_151", print_hash_value);
    transparent_crc(g_167, "g_167", print_hash_value);
    transparent_crc(g_182, "g_182", print_hash_value);
    transparent_crc(g_185, "g_185", print_hash_value);
    transparent_crc(g_186, "g_186", print_hash_value);
    transparent_crc(g_190, "g_190", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_213[i][j][k], "g_213[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_215, "g_215", print_hash_value);
    transparent_crc(g_221, "g_221", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_228[i], "g_228[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_235[i], "g_235[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_258, "g_258", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_262[i], "g_262[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_267, "g_267", print_hash_value);
    transparent_crc(g_268, "g_268", print_hash_value);
    transparent_crc(g_273, "g_273", print_hash_value);
    transparent_crc(g_295, "g_295", print_hash_value);
    transparent_crc(g_329, "g_329", print_hash_value);
    transparent_crc(g_381, "g_381", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_448[i], "g_448[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_480, "g_480", print_hash_value);
    transparent_crc(g_531, "g_531", print_hash_value);
    transparent_crc(g_532, "g_532", print_hash_value);
    transparent_crc(g_534, "g_534", print_hash_value);
    transparent_crc(g_536, "g_536", print_hash_value);
    transparent_crc(g_538, "g_538", print_hash_value);
    transparent_crc(g_539, "g_539", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_557[i], "g_557[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_565, "g_565", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_566[i], "g_566[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_604, "g_604", print_hash_value);
    transparent_crc(g_605, "g_605", print_hash_value);
    transparent_crc(g_606, "g_606", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_607[i], "g_607[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_667, "g_667", print_hash_value);
    transparent_crc(g_760, "g_760", print_hash_value);
    transparent_crc(g_761, "g_761", print_hash_value);
    transparent_crc(g_830, "g_830", print_hash_value);
    transparent_crc(g_868, "g_868", print_hash_value);
    transparent_crc(g_869, "g_869", print_hash_value);
    transparent_crc(g_870, "g_870", print_hash_value);
    transparent_crc(g_976, "g_976", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_1010[i][j][k], "g_1010[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_1031, "g_1031", print_hash_value);
    transparent_crc(g_1240, "g_1240", print_hash_value);
    transparent_crc(g_1280, "g_1280", print_hash_value);
    transparent_crc(g_1281, "g_1281", print_hash_value);
    transparent_crc(g_1282, "g_1282", print_hash_value);
    transparent_crc(g_1287, "g_1287", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_1288[i], "g_1288[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1398, "g_1398", print_hash_value);
    transparent_crc(g_1400, "g_1400", print_hash_value);
    transparent_crc(g_1527, "g_1527", print_hash_value);
    transparent_crc(g_1528, "g_1528", print_hash_value);
    transparent_crc(g_1687, "g_1687", print_hash_value);
    transparent_crc(g_1688, "g_1688", print_hash_value);
    transparent_crc(g_1690, "g_1690", print_hash_value);
    transparent_crc(g_1695, "g_1695", print_hash_value);
    transparent_crc(g_1721, "g_1721", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_1797[i], "g_1797[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_1799[i], "g_1799[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1801, "g_1801", print_hash_value);
    transparent_crc(g_1866, "g_1866", print_hash_value);
    transparent_crc(g_1913, "g_1913", print_hash_value);
    transparent_crc(g_1974, "g_1974", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_2017[i][j], "g_2017[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_2032, "g_2032", print_hash_value);
    transparent_crc(g_2119, "g_2119", print_hash_value);
    transparent_crc(g_2120, "g_2120", print_hash_value);
    transparent_crc(g_2121, "g_2121", print_hash_value);
    transparent_crc(g_2143, "g_2143", print_hash_value);
    transparent_crc(g_2145, "g_2145", print_hash_value);
    transparent_crc(g_2351, "g_2351", print_hash_value);
    transparent_crc(g_2359, "g_2359", print_hash_value);
    transparent_crc(g_2360, "g_2360", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_2434[i], "g_2434[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_2552, "g_2552", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 9; k++)
            {
                transparent_crc(g_2609[i][j][k], "g_2609[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_2735, "g_2735", print_hash_value);
    transparent_crc(g_2760, "g_2760", print_hash_value);
    transparent_crc(g_2768, "g_2768", print_hash_value);
    transparent_crc(g_2772, "g_2772", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_2796[i][j][k], "g_2796[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_2798, "g_2798", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_2825[i], "g_2825[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_2886[i][j], "g_2886[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_2962, "g_2962", print_hash_value);
    transparent_crc(g_2988, "g_2988", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
