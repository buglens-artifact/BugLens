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


union U0 {
   int f0;
};


static int g_2 = 0x24039B64L;
static int g_6 = 0x0FE1CA29L;
static unsigned g_76 = 1UL;
static volatile int g_79 = 0x9D776076L;
static int g_84 = 0xD08C68BEL;
static volatile short g_116 = 0x1403L;
static short g_146 = (-7L);
static union U0 g_269 = {1L};
static int g_271 = 0x74240040L;
static int g_295 = 0L;
static unsigned g_297[10] = {0x065EFAE0L,0xCA988B8CL,1UL,1UL,0xCA988B8CL,0x065EFAE0L,0xCA988B8CL,1UL,1UL,0xCA988B8CL};
static int g_323 = (-9L);
static int g_350 = 0x74FC86CBL;
static int g_387 = 0x723FC1B6L;
static union U0 g_705 = {0xBA82EDE6L};
static volatile unsigned g_942[3][6][10] = {{{4294967295UL,4294967295UL,0x94BD6A73L,0x8E5FEB96L,8UL,0x0FBA102CL,0xF7F00FDDL,0UL,0x37BAFB3AL,1UL},{0x9DC70C8FL,0UL,4UL,0x8881B0B6L,0UL,6UL,0xF7F00FDDL,9UL,0x4015CC6DL,2UL},{0UL,4294967295UL,4294967289UL,6UL,1UL,0UL,4294967287UL,4294967290UL,0x809D63F8L,4294967289UL},{4UL,0UL,4294967295UL,0x81A147C5L,4294967286UL,0x4926C0E5L,7UL,4294967289UL,4294967295UL,0x8E5FEB96L},{4294967295UL,2UL,0x4E10172EL,0xF7F00FDDL,0x4015CC6DL,0x0D9893DAL,0UL,0x5654F713L,4294967295UL,0x0FBA102CL},{0x4C36F626L,1UL,0xF7F00FDDL,0UL,2UL,0xEEB7294DL,0UL,4294967290UL,0x5654F713L,0x8881B0B6L}},{{9UL,0x162D68D5L,0UL,1UL,0x38CC9FE7L,0x37BAFB3AL,0x6D364438L,0xEEB7294DL,0x2BC366BEL,7UL},{4294967295UL,0xF7F00FDDL,2UL,0x13873AA4L,4294967286UL,0xBCAC7AF8L,4294967286UL,0x13873AA4L,2UL,0xF7F00FDDL},{0x6D364438L,4294967287UL,4294967287UL,0x37BAFB3AL,0x4BA2F79AL,1UL,4294967290UL,1UL,7UL,4294967295UL},{0x4015CC6DL,0x5F33DDD7L,0UL,0xA4865F2DL,0x4926C0E5L,1UL,0xBCAC7AF8L,0x9656FD60L,4294967295UL,6UL},{0x6D364438L,0x5654F713L,8UL,0x9656FD60L,0xD255991FL,0xBCAC7AF8L,0x0D9893DAL,0xF9404E3FL,0x978C0C14L,0UL},{4294967295UL,4294967295UL,4294967295UL,0UL,1UL,0x37BAFB3AL,0x13873AA4L,2UL,0x64E0724DL,4294967289UL}},{{9UL,0xBCAC7AF8L,1UL,2UL,4294967295UL,0xEEB7294DL,8UL,0x4E10172EL,4UL,0x9DC70C8FL},{0x4C36F626L,4294967286UL,0x5654F713L,0x96C4C056L,4294967289UL,0x94BD6A73L,0x4BA2F79AL,0x6D364438L,0x162D68D5L,0UL},{0x9DC70C8FL,1UL,0xD255991FL,0xD95D0D1CL,0x809D63F8L,0x18B705FAL,0x0FBA102CL,0xBCAC7AF8L,6UL,0x5F33DDD7L},{0UL,0x5F33DDD7L,0x94BD6A73L,0x6139034AL,0x8E8D54D5L,0x8E8D54D5L,0x6139034AL,0x94BD6A73L,0x5F33DDD7L,0UL},{0x978C0C14L,0xA4865F2DL,0xEEB7294DL,6UL,4294967289UL,0xD255991FL,0x4015CC6DL,4294967287UL,0x64E0724DL,0x0D9893DAL},{1UL,0x8E5FEB96L,0x0FBA102CL,0xA4865F2DL,4294967289UL,4294967289UL,1UL,4UL,0x38CC9FE7L,0UL}}};
static int g_1171 = 0L;
static char g_1284 = (-1L);
static int g_1400 = 0xC99C5AE0L;



static short func_1(void);
static int func_7(char p_8, unsigned short p_9, int p_10, union U0 p_11, short p_12);
static int func_13(unsigned short p_14, unsigned p_15);
static short func_16(unsigned p_17, unsigned short p_18, short p_19, unsigned p_20, union U0 p_21);
static unsigned func_24(unsigned p_25, unsigned short p_26);
static unsigned char func_29(unsigned p_30, unsigned short p_31, char p_32, unsigned short p_33);
static unsigned short func_34(unsigned short p_35);
static unsigned short func_36(short p_37, char p_38, unsigned char p_39);
static char func_40(char p_41, union U0 p_42);
static char func_43(short p_44);
static short func_1(void)
{
    char l_5[3];
    union U0 l_834 = {0x95EF8D4EL};
    int l_1209 = 0x5FDF89C4L;
    unsigned l_1302 = 0x3D712297L;
    char l_1371 = 0xC7L;
    unsigned char l_1414 = 0x79L;
    int l_1420 = 1L;
    unsigned char l_1433[3];
    int l_1447 = 0L;
    int i;
    for (i = 0; i < 3; i++)
        l_5[i] = 0xD9L;
    for (i = 0; i < 3; i++)
        l_1433[i] = 0UL;
    for (g_2 = (-2); (g_2 == (-15)); --g_2)
    {
        int l_833 = 0x1CB2C8E2L;
        int l_1260 = 0xDBFEBEA3L;
        int l_1272 = 0L;
        unsigned char l_1316 = 0UL;
        union U0 l_1328 = {1L};
        union U0 l_1359[4] = {{-1L},{-1L},{-1L},{-1L}};
        unsigned char l_1415 = 0xEEL;
        int l_1446 = 0x510814DDL;
        int i;
        for (g_6 = 0; (g_6 <= 2); g_6 += 1)
        {
            unsigned l_1240 = 3UL;
            int l_1296 = 0x3DB69D3CL;
            unsigned l_1325[5][9] = {{0x37BED620L,0x5035D6E6L,0x5035D6E6L,0x37BED620L,0x5035D6E6L,0x5035D6E6L,0x37BED620L,0x5035D6E6L,0x5035D6E6L},{0x37BED620L,0x5035D6E6L,0x5035D6E6L,0x37BED620L,0x5035D6E6L,0x5035D6E6L,0x37BED620L,0x5035D6E6L,0x5035D6E6L},{0x37BED620L,0x5035D6E6L,0x5035D6E6L,0x37BED620L,0x5035D6E6L,0x5035D6E6L,0x37BED620L,0x5035D6E6L,0x5035D6E6L},{0x37BED620L,0x5035D6E6L,0x5035D6E6L,0x37BED620L,0x5035D6E6L,0x5035D6E6L,0x37BED620L,0x5035D6E6L,0x5035D6E6L},{0x37BED620L,0x5035D6E6L,0x5035D6E6L,0x37BED620L,0x5035D6E6L,0x5035D6E6L,0x37BED620L,0x5C7FBD1AL,0x5C7FBD1AL}};
            unsigned l_1366 = 4294967295UL;
            int i, j;
            l_1209 = func_7(l_5[g_6], (((!(func_13(l_5[g_6], (func_16((safe_add_func_uint32_t_u_u(func_24((!l_5[2]), g_6), (~((((safe_sub_func_int16_t_s_s((safe_sub_func_uint8_t_u_u(((~(+0xB1B15CFBL)) ^ l_5[0]), 0x69L)), l_833)) < g_2) != 0xCDL) < g_6)))), g_2, g_6, l_833, l_834) < l_5[0])) | g_2)) >= g_6) | g_2), l_833, l_834, l_5[g_6]);
            for (g_84 = 0; (g_84 <= 2); g_84 += 1)
            {
                unsigned l_1217 = 0xCC96845BL;
                for (l_833 = 0; (l_833 <= 2); l_833 += 1)
                {
                    short l_1224 = 0L;
                    for (g_1171 = 0; (g_1171 <= 2); g_1171 += 1)
                    {
                        int l_1212 = (-7L);
                        int l_1225[1];
                        int i, j, k;
                        for (i = 0; i < 1; i++)
                            l_1225[i] = (-3L);
                        l_1225[0] = ((g_942[g_6][g_6][l_833] & l_5[g_6]) & (safe_add_func_int32_t_s_s(l_1212, ((+((safe_rshift_func_int16_t_s_s(((((safe_sub_func_uint32_t_u_u(l_1217, ((safe_rshift_func_uint16_t_u_u(g_269.f0, 2)) || ((safe_mod_func_int16_t_s_s(0xEBD3L, (l_5[g_6] & ((safe_mod_func_uint32_t_u_u(l_5[g_6], g_6)) ^ (-5L))))) | g_705.f0)))) != 1UL) | 8UL) != l_1224), g_271)) && (-1L))) ^ g_269.f0))));
                        l_1209 = (g_705.f0 | 0x852CL);
                        if (l_833)
                            continue;
                    }
                    g_350 = ((4294967295UL != (safe_rshift_func_int8_t_s_s(g_2, (((safe_add_func_int16_t_s_s(l_1224, (safe_lshift_func_uint8_t_u_s(l_1217, 5)))) | (g_116 && (((~(safe_lshift_func_uint8_t_u_u(g_295, 1))) && (((4UL != ((safe_rshift_func_int8_t_s_s((-6L), (safe_add_func_int8_t_s_s(l_833, g_1171)))) || g_269.f0)) & l_1240) != 1UL)) | l_5[1]))) ^ g_2)))) <= l_1224);
                    return l_1224;
                }
            }
            if ((0L != (safe_sub_func_uint16_t_u_u(0x1B51L, 0xE943L))))
            {
                int l_1259 = 0x0D08FF56L;
                union U0 l_1283 = {-1L};
                short l_1292 = 0x43BEL;
                if (g_116)
                    break;
                if (g_705.f0)
                {
                    union U0 l_1245 = {-4L};
                    int l_1248 = 0xED3096E9L;
                    l_1248 = (((safe_rshift_func_uint16_t_u_u((~1UL), 3)) & ((g_146 && func_40(g_76, l_1245)) >= (l_1209 <= ((safe_sub_func_int16_t_s_s((g_6 > (-1L)), (!(l_833 >= g_295)))) == g_6)))) != g_269.f0);
                    for (g_1171 = 9; (g_1171 >= 0); g_1171 -= 1)
                    {
                        unsigned l_1269 = 0UL;
                        int i;
                        l_1260 = (safe_mod_func_int16_t_s_s((safe_rshift_func_int16_t_s_s((safe_sub_func_int16_t_s_s((g_297[g_1171] == (g_271 | (safe_lshift_func_int8_t_s_u((func_43(g_116) & (0UL > ((((safe_lshift_func_uint16_t_u_s((l_1248 ^ ((l_5[g_6] == g_146) ^ l_1240)), g_297[4])) > l_1259) != 65535UL) <= g_2))), l_1240)))), 2L)), l_1259)), g_271));
                        l_1259 = (safe_mod_func_int8_t_s_s((((safe_add_func_int32_t_s_s((((!(g_705.f0 || (safe_lshift_func_int16_t_s_s(((safe_lshift_func_int8_t_s_u(l_1259, l_5[g_6])) | g_76), ((1UL != g_297[4]) <= g_1171))))) && (l_1269 ^ (safe_mod_func_int32_t_s_s((g_297[5] ^ g_350), g_269.f0)))) == l_1272), g_350)) != l_1259) >= 65527UL), g_297[9]));
                        g_84 = g_297[4];
                    }
                }
                else
                {
                    char l_1279 = 0L;
                    char l_1280 = 0x89L;
                    unsigned char l_1281 = 0x20L;
                    int l_1282 = 8L;
                    if (((g_297[1] >= g_295) || ((safe_rshift_func_uint16_t_u_u(g_116, (((!(((safe_lshift_func_uint16_t_u_s(g_387, 14)) | l_5[g_6]) <= ((safe_lshift_func_int16_t_s_s((-1L), (((l_1259 >= (((l_1279 | g_297[4]) && l_1280) | g_323)) | l_1281) >= g_1171))) > g_6))) > l_1280) || g_146))) || 0xC99E9CA6L)))
                    {
                        g_387 = 1L;
                        l_1282 = g_705.f0;
                    }
                    else
                    {
                        unsigned char l_1287 = 255UL;
                        int l_1293 = 0x4BE9F2BFL;
                        l_1259 = (func_40(l_833, l_1283) && ((((g_387 | g_323) != g_1284) >= ((safe_rshift_func_uint8_t_u_s(((~(g_2 <= l_1287)) >= func_40((safe_mod_func_uint16_t_u_u(func_43((safe_lshift_func_int16_t_s_s(l_1287, l_1292))), 65528UL)), g_269)), 2)) || 0xD4L)) || g_116));
                        l_1293 = l_1287;
                    }
                    g_387 = (safe_lshift_func_uint8_t_u_u(0xC9L, 3));
                    l_1296 = 3L;
                }
            }
            else
            {
                unsigned short l_1301 = 65530UL;
                int l_1303 = 0xD41470FCL;
                l_1303 = (((safe_lshift_func_uint8_t_u_s(g_942[0][4][8], 2)) || ((safe_lshift_func_int16_t_s_u(l_5[g_6], 0)) | func_13(g_297[8], l_1301))) && (l_1302 > func_16(g_116, l_1296, g_323, l_5[1], g_705)));
                l_1303 = g_6;
                l_1325[4][5] = ((safe_rshift_func_uint16_t_u_s((safe_rshift_func_int8_t_s_u(((safe_rshift_func_uint16_t_u_s(func_34((((g_942[0][4][8] > (safe_rshift_func_uint8_t_u_s((safe_add_func_uint32_t_u_u(l_1272, l_1260)), 1))) != (safe_lshift_func_int16_t_s_u(g_271, l_1316))) | g_350)), 12)) < 0xD5438BB5L), 4)), 2)) >= (((((safe_add_func_int16_t_s_s((safe_lshift_func_int16_t_s_s(((safe_lshift_func_int8_t_s_s((safe_add_func_uint8_t_u_u(246UL, g_323)), l_1240)) <= 4UL), 1)), l_1316)) > 0xF16CB105L) == g_297[4]) > 0xE4L) != 5UL));
            }
            if ((func_16(g_271, l_1240, g_295, (((func_43(g_350) || 1L) && (safe_rshift_func_int8_t_s_s((func_43(g_76) && 0xC8L), 3))) & l_1325[4][5]), l_1328) || 0x33C17D57L))
            {
                return g_942[0][4][8];
            }
            else
            {
                unsigned char l_1338 = 0xB3L;
                g_350 = l_1296;
                if ((0xA6L == 0x9DL))
                {
                    unsigned char l_1329[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_1329[i] = 255UL;
                    return l_1329[1];
                }
                else
                {
                    unsigned l_1339 = 4294967294UL;
                    unsigned short l_1363 = 65535UL;
                    int l_1382 = 0xA019F767L;
                    if (((((l_833 | func_13(g_146, g_84)) | (safe_lshift_func_uint8_t_u_u(l_1209, 4))) >= (((g_1284 < (g_1171 == (safe_rshift_func_uint8_t_u_u((safe_sub_func_int16_t_s_s((safe_add_func_int32_t_s_s(((g_1171 >= ((l_1338 < g_6) > g_1171)) > g_1171), l_1339)), g_1171)), g_1171)))) && l_1328.f0) < g_6)) != g_1284))
                    {
                        unsigned short l_1342 = 0x3A0CL;
                        int l_1360 = 0xC0A54EB2L;
                        l_1272 = g_387;
                        g_1171 = (~(safe_sub_func_int16_t_s_s((func_34(l_1342) > (0xC1L != (g_1284 > (~(((safe_rshift_func_int8_t_s_s((((safe_sub_func_uint16_t_u_u((g_323 ^ g_146), (g_1284 | ((g_2 && g_297[4]) < 65534UL)))) && g_1171) | g_705.f0), g_297[2])) ^ l_1339) & 4UL))))), g_6)));
                        l_1360 = ((safe_sub_func_uint16_t_u_u((248UL > l_1338), (safe_rshift_func_int16_t_s_s(((safe_add_func_uint32_t_u_u(g_295, g_1284)) ^ ((((safe_sub_func_int16_t_s_s(((0x0FEEB0CBL == ((safe_rshift_func_int16_t_s_s(g_323, 12)) > g_1284)) ^ func_40(g_1171, l_1359[3])), g_2)) == 0x5331L) <= l_1209) & g_146)), l_1338)))) >= g_6);
                        l_1363 = (func_16((safe_add_func_int16_t_s_s(g_350, (-1L))), l_1296, g_297[4], g_705.f0, g_269) && l_1338);
                    }
                    else
                    {
                        g_1171 = ((0UL & (l_1338 > (g_295 | 65535UL))) || 0x7ECF8315L);
                        l_1296 = l_833;
                        l_1371 = (~((((safe_rshift_func_uint8_t_u_s(l_1338, 0)) | l_1366) >= (4294967294UL < (safe_rshift_func_int8_t_s_u((l_1272 | 4294967295UL), ((func_16((l_5[2] <= (safe_sub_func_int16_t_s_s((((g_1284 < (((((((func_34(l_1338) & g_1171) | g_1171) ^ 0xC3C0L) || g_116) <= g_1284) || l_1359[3].f0) & l_1209)) || g_705.f0) != g_2), g_297[1]))), l_1296, g_705.f0, g_6, l_834) || g_942[2][1][9]) ^ g_1171))))) && g_2));
                        l_1382 = (g_295 == (safe_lshift_func_int8_t_s_u(g_942[2][1][4], (((0x204E5091L | (g_1284 == ((safe_mod_func_int8_t_s_s((g_2 & ((l_1316 || ((safe_rshift_func_int8_t_s_u((safe_rshift_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u(l_1338, l_1363)), 6)), l_5[g_6])) > g_84)) && 0xD893L)), g_1284)) < l_1338))) & l_5[g_6]) > g_271))));
                    }
                    if (l_1209)
                        break;
                    if (l_1325[4][2])
                        break;
                    for (g_705.f0 = 0; (g_705.f0 <= 2); g_705.f0 += 1)
                    {
                        int l_1387 = 0xF664FE7FL;
                        int i, j, k;
                        g_387 = 0xB1DD9B2BL;
                        l_1387 = (((safe_sub_func_uint8_t_u_u(g_942[g_705.f0][(g_705.f0 + 3)][(g_705.f0 + 5)], (g_2 > l_1240))) ^ l_1339) | ((safe_add_func_int16_t_s_s((0x36L == l_1363), ((l_1387 >= (g_84 <= ((safe_lshift_func_uint8_t_u_s(254UL, g_350)) <= 1L))) != l_1302))) < 0x264136A1L));
                        l_1382 = (safe_sub_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_s((safe_rshift_func_int16_t_s_s(3L, 15)), func_36((l_1338 & ((safe_add_func_uint32_t_u_u(((4294967286UL >= g_295) >= g_297[0]), g_295)) || ((((safe_mod_func_int16_t_s_s(l_1328.f0, (g_146 && (func_7((4UL != 0x3B23B6C0L), g_269.f0, g_1400, g_705, g_271) && l_1328.f0)))) && 0x24D9CB68L) || g_6) & g_6))), g_6, l_1325[4][5]))), 0x7C9DC345L));
                    }
                }
            }
        }
        for (l_1328.f0 = (-16); (l_1328.f0 > (-6)); l_1328.f0 = safe_add_func_int16_t_s_s(l_1328.f0, 6))
        {
            int l_1403 = 0x0D6A2792L;
            for (g_705.f0 = 0; (g_705.f0 <= 2); g_705.f0 += 1)
            {
                int i;
                if (l_5[g_705.f0])
                    break;
                if (l_5[g_705.f0])
                    break;
                l_1403 = 0L;
                l_1415 = ((((safe_lshift_func_uint8_t_u_s((safe_add_func_uint32_t_u_u(l_1403, ((safe_sub_func_int16_t_s_s(l_5[g_705.f0], ((func_16(func_36((safe_rshift_func_uint8_t_u_s(func_34(l_5[g_705.f0]), 2)), ((1UL == g_1284) | 0L), ((((((safe_rshift_func_int16_t_s_u(l_1209, 4)) > g_2) ^ 9L) != g_1400) <= 0L) <= l_1272)), l_834.f0, l_1302, l_5[2], g_705) >= 4294967295UL) | g_705.f0))) ^ l_1328.f0))), l_5[g_705.f0])) > g_1284) < l_5[g_705.f0]) < l_1414);
            }
            l_1403 = l_1414;
            l_1420 = (safe_mod_func_int16_t_s_s((safe_mod_func_int32_t_s_s(g_942[0][4][8], 0xBFC89D5EL)), l_1403));
            l_1272 = (safe_rshift_func_uint8_t_u_u(func_36(g_84, g_79, g_1171), (safe_rshift_func_int16_t_s_s(g_1171, 8))));
        }
        if ((safe_mod_func_uint32_t_u_u(0x783FD608L, l_5[0])))
        {
            unsigned char l_1430 = 0x91L;
            int l_1434[7];
            int i;
            for (i = 0; i < 7; i++)
                l_1434[i] = 0x3F44F9CFL;
            if (l_1302)
            {
                return g_76;
            }
            else
            {
                unsigned l_1427 = 2UL;
                l_1427 = g_295;
                l_1434[2] = ((safe_add_func_int8_t_s_s(((g_76 && l_5[1]) | (~g_271)), (-1L))) != ((l_1371 && (((l_1430 <= (safe_rshift_func_uint16_t_u_s(l_1433[1], g_350))) & (g_6 <= g_1400)) > l_1427)) | 9UL));
            }
        }
        else
        {
            unsigned l_1441[4][4][2] = {{{0x12850C97L,0x12850C97L},{0x12850C97L,0x12850C97L},{0x12850C97L,0x12850C97L},{0x12850C97L,0x12850C97L}},{{0x12850C97L,0x12850C97L},{0x12850C97L,0x12850C97L},{0x12850C97L,0x12850C97L},{0x12850C97L,0x12850C97L}},{{0x12850C97L,0x12850C97L},{0x12850C97L,0x12850C97L},{0x12850C97L,0x12850C97L},{0x12850C97L,0x12850C97L}},{{0x12850C97L,0x12850C97L},{0x12850C97L,0x12850C97L},{0x12850C97L,0x12850C97L},{0x12850C97L,0x12850C97L}}};
            int i, j, k;
            if (g_350)
                break;
            l_1420 = (safe_sub_func_int16_t_s_s(0xDE8DL, (safe_sub_func_int8_t_s_s((safe_add_func_uint16_t_u_u(l_1441[1][2][1], (((safe_sub_func_int8_t_s_s((safe_lshift_func_int8_t_s_s(g_79, 0)), (-6L))) < g_269.f0) < l_1441[1][2][1]))), g_84))));
        }
        g_1171 = l_1446;
    }
    l_1209 = (+0L);
    l_1447 = (l_1447 >= func_34(func_34(g_146)));
    return l_1209;
}







static int func_7(char p_8, unsigned short p_9, int p_10, union U0 p_11, short p_12)
{
    unsigned l_891 = 0UL;
    char l_930 = (-5L);
    int l_976[6] = {(-4L),(-4L),2L,(-4L),(-4L),2L};
    short l_1058 = 1L;
    unsigned short l_1082 = 0x05B2L;
    unsigned char l_1102 = 1UL;
    unsigned l_1128 = 4294967287UL;
    int l_1155 = (-1L);
    int i;
    g_387 = l_891;
    if ((((func_36((l_891 ^ (safe_rshift_func_int8_t_s_s(((((((g_2 && g_146) == g_146) ^ 0x07L) != p_12) & p_9) <= g_705.f0), 1))), g_2, p_8) == g_6) || 1L) & 7UL))
    {
        char l_899[4];
        int l_937 = 4L;
        union U0 l_980 = {0xB94AA1C2L};
        unsigned char l_1069[4][5][3] = {{{0x46L,0xF9L,0xD7L},{0UL,0xBFL,9UL},{0xF9L,1UL,0xD7L},{1UL,247UL,0xD7L},{255UL,255UL,9UL}},{{0x0EL,0x46L,0xD7L},{3UL,0x0EL,0xD7L},{0xBFL,0UL,9UL},{247UL,3UL,0xD7L},{0x46L,0xF9L,0xD7L}},{{0UL,0xBFL,9UL},{0xF9L,1UL,0xD7L},{1UL,247UL,0xD7L},{255UL,255UL,9UL},{0x0EL,0x46L,0xD7L}},{{3UL,0x0EL,0xD7L},{0xBFL,0UL,9UL},{247UL,3UL,0xD7L},{0x46L,1UL,0xBDL},{0x0EL,0xF9L,0x01L}}};
        int l_1086 = 0L;
        int i, j, k;
        for (i = 0; i < 4; i++)
            l_899[i] = (-6L);
        for (g_271 = 7; (g_271 > (-20)); --g_271)
        {
            unsigned char l_898[10] = {250UL,0x57L,250UL,0x57L,250UL,0x57L,250UL,0x57L,250UL,0x57L};
            int i;
            l_898[6] = (safe_lshift_func_int16_t_s_s(p_9, p_12));
        }
        l_899[1] = g_76;
        if ((safe_add_func_int32_t_s_s(g_116, (((safe_rshift_func_int16_t_s_u((safe_sub_func_int8_t_s_s(l_899[1], g_387)), (g_271 > p_10))) > (safe_rshift_func_uint8_t_u_s((safe_mod_func_uint16_t_u_u(((0x1E7D0293L || l_891) | (g_350 >= (safe_rshift_func_uint8_t_u_u(p_9, 0)))), p_9)), 3))) > 6L))))
        {
            p_10 = (safe_mod_func_uint32_t_u_u((+(p_8 >= (safe_add_func_int16_t_s_s((p_12 == g_350), l_899[1])))), 5L));
        }
        else
        {
            unsigned l_918[3];
            union U0 l_931 = {-10L};
            unsigned char l_932[4];
            int i;
            for (i = 0; i < 3; i++)
                l_918[i] = 0xA683B698L;
            for (i = 0; i < 4; i++)
                l_932[i] = 0x59L;
            if ((+l_899[0]))
            {
                short l_921 = 0xE12DL;
                p_10 = (safe_mod_func_uint8_t_u_u((g_269.f0 != l_918[2]), (safe_add_func_uint16_t_u_u(l_921, ((safe_sub_func_int32_t_s_s((safe_rshift_func_uint16_t_u_u(65535UL, g_323)), ((safe_mod_func_uint32_t_u_u((safe_sub_func_int16_t_s_s(func_40(l_930, l_931), p_10)), 4294967295UL)) > l_918[2]))) ^ g_705.f0)))));
            }
            else
            {
                p_10 = l_932[1];
                return p_11.f0;
            }
        }
        for (g_323 = 7; (g_323 > 12); ++g_323)
        {
            unsigned char l_944 = 2UL;
            int l_957 = 0xF402BF8AL;
            char l_1036[3];
            unsigned char l_1045 = 255UL;
            int i;
            for (i = 0; i < 3; i++)
                l_1036[i] = (-5L);
            for (p_10 = 0; (p_10 >= (-28)); --p_10)
            {
                unsigned l_943 = 0xBE6B4939L;
                short l_945 = 0L;
                int l_973 = 0xCAF479F9L;
                if (g_6)
                {
                    unsigned l_953 = 0x6447DEBBL;
                    l_937 = g_387;
                    l_943 = (safe_rshift_func_int8_t_s_u((safe_sub_func_uint8_t_u_u(9UL, g_942[0][4][8])), l_899[1]));
                    if ((1L | 0xA2A2L))
                    {
                        int l_950 = 0x1691E8F7L;
                        if (l_944)
                            break;
                        l_953 = (l_945 != (safe_sub_func_int16_t_s_s((safe_add_func_int32_t_s_s((func_43(func_43(p_10)) == g_146), (l_950 >= g_705.f0))), (safe_lshift_func_int16_t_s_u((9UL != p_9), 14)))));
                    }
                    else
                    {
                        return l_953;
                    }
                }
                else
                {
                    char l_970 = 0x5EL;
                    for (p_8 = 25; (p_8 > (-4)); --p_8)
                    {
                        short l_956[2];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_956[i] = (-1L);
                        l_956[1] = 0L;
                        l_957 = (func_43(p_9) ^ l_899[1]);
                    }
                    for (g_350 = 0; (g_350 == 14); g_350++)
                    {
                        l_973 = ((safe_lshift_func_uint16_t_u_u((((((safe_add_func_int8_t_s_s((safe_lshift_func_int16_t_s_u((safe_add_func_int32_t_s_s(l_944, (p_11.f0 | (func_40(g_116, g_269) | g_269.f0)))), l_970)), ((((p_8 || ((((0x5C2EE356L >= (-3L)) == 0x117A128FL) > p_10) != 0x26E1B921L)) <= 4294967292UL) | g_323) & g_350))) | 0UL) & 4294967289UL) & l_957) > g_387), 4)) >= 4294967288UL);
                        l_973 = (safe_rshift_func_uint16_t_u_s(65533UL, 8));
                        return l_943;
                    }
                    for (l_957 = 0; (l_957 <= 2); l_957 += 1)
                    {
                        g_387 = p_9;
                        l_976[2] = 5L;
                        if (g_295)
                            break;
                        if (g_297[4])
                            break;
                    }
                    g_387 = (-6L);
                }
                return p_12;
            }
            g_84 = (l_899[0] <= p_12);
            if (g_295)
                continue;
            for (p_9 = 0; (p_9 <= 3); p_9 += 1)
            {
                unsigned l_1026 = 7UL;
                union U0 l_1057[6] = {{0x63EEC4C6L},{-1L},{-1L},{0x63EEC4C6L},{-1L},{-1L}};
                int l_1103 = 0xCC8D9528L;
                int i;
                for (l_957 = 0; (l_957 <= 5); l_957 += 1)
                {
                    int l_979 = 0L;
                    int i;
                    if (l_899[p_9])
                        break;
                    if (func_40((safe_mod_func_int8_t_s_s((func_43(p_12) >= ((((g_6 < p_12) && p_10) < g_146) > (g_705.f0 ^ (p_11.f0 <= 0x23L)))), l_979)), l_980))
                    {
                        int i;
                        l_976[l_957] = g_79;
                        l_979 = func_36((l_899[1] && g_269.f0), l_899[3], (~(p_8 >= g_295)));
                        g_387 = g_295;
                    }
                    else
                    {
                        union U0 l_993 = {0L};
                        int l_1008[5];
                        int i;
                        for (i = 0; i < 5; i++)
                            l_1008[i] = 1L;
                        l_937 = (safe_rshift_func_uint16_t_u_u(((((safe_mod_func_uint32_t_u_u(l_937, g_6)) ^ (safe_lshift_func_uint8_t_u_u(p_9, 4))) < (safe_lshift_func_uint16_t_u_u(func_34((!(g_6 | (safe_add_func_int32_t_s_s((((safe_mod_func_int8_t_s_s(func_40(p_12, l_993), 1UL)) == (safe_rshift_func_int16_t_s_s(g_323, 6))) && p_9), l_944))))), p_8))) & l_937), g_6));
                        l_1008[4] = (safe_mod_func_int8_t_s_s(((p_11.f0 > (((safe_rshift_func_uint16_t_u_u(0x82A1L, 13)) >= ((safe_add_func_int8_t_s_s((-1L), (safe_add_func_int8_t_s_s(1L, 0x61L)))) == (safe_rshift_func_uint16_t_u_s(l_979, 7)))) && (0x16C9AF7EL > (3UL < func_34(g_116))))) <= g_146), g_705.f0));
                        g_84 = (((safe_mod_func_int32_t_s_s(p_8, l_976[2])) | (~(l_899[p_9] < (p_8 > l_899[p_9])))) || l_976[5]);
                    }
                    if (func_34(p_9))
                    {
                        p_10 = p_12;
                        return p_8;
                    }
                    else
                    {
                        unsigned l_1023 = 0x7A664A2EL;
                        p_10 = g_76;
                        p_10 = l_976[1];
                        l_976[2] = (safe_sub_func_int8_t_s_s((((safe_sub_func_uint32_t_u_u(((safe_add_func_int8_t_s_s((((func_43((safe_sub_func_int16_t_s_s(p_9, g_350))) == (safe_lshift_func_uint8_t_u_u(g_323, 1))) & (safe_lshift_func_int8_t_s_s(p_12, l_1023))) & (+(safe_rshift_func_uint8_t_u_u(g_295, (l_1026 || p_8))))), 9L)) & p_12), l_899[1])) >= 0x0BL) < l_944), 4UL));
                    }
                }
                for (l_1026 = 0; (l_1026 <= 5); l_1026 += 1)
                {
                    unsigned char l_1041 = 0x99L;
                    int i;
                    if ((l_899[p_9] | ((((safe_unary_minus_func_int32_t_s((func_43(l_899[1]) | (0x781DL <= (safe_add_func_int16_t_s_s(((safe_rshift_func_uint8_t_u_s(247UL, 3)) > l_957), l_976[2])))))) == (safe_mod_func_int16_t_s_s((p_9 >= (safe_sub_func_uint16_t_u_u(g_297[4], l_899[1]))), 0xF996L))) <= p_9) & l_1036[0])))
                    {
                        unsigned short l_1050 = 65529UL;
                        int i;
                        l_976[(p_9 + 1)] = (safe_mod_func_int8_t_s_s(((safe_rshift_func_uint8_t_u_u((g_146 < l_1041), g_269.f0)) | ((func_43((g_942[0][4][8] > l_899[1])) != (safe_unary_minus_func_uint8_t_u((safe_rshift_func_int16_t_s_s(((l_1045 < (-2L)) < (((safe_add_func_int8_t_s_s(((safe_rshift_func_uint8_t_u_u(p_11.f0, 3)) < (-1L)), 0x55L)) >= l_1041) <= p_9)), 0))))) ^ l_944)), l_1050));
                        if (l_1036[0])
                            continue;
                        g_387 = 4L;
                        if (p_8)
                            continue;
                    }
                    else
                    {
                        l_937 = p_11.f0;
                    }
                    p_10 = func_43((safe_mod_func_int8_t_s_s(((func_36(l_1041, ((safe_rshift_func_uint16_t_u_s(func_43(g_76), 12)) == (safe_lshift_func_uint8_t_u_u(p_9, 2))), l_899[0]) > (g_6 >= p_9)) && (func_40(g_297[4], l_1057[2]) || g_297[0])), l_1058)));
                }
                if ((0x90CFB05BL || (safe_mod_func_int8_t_s_s((safe_sub_func_int32_t_s_s((0x2BF9804AL >= (safe_rshift_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u(0xF256L, 8)), 2))), ((l_930 < g_79) < ((((p_12 ^ p_9) < g_76) <= 0x63240A24L) | 4294967289UL)))), 0xA2L))))
                {
                    int l_1071 = 0x09DFDCB2L;
                    for (g_76 = 0; (g_76 <= 3); g_76 += 1)
                    {
                        unsigned char l_1070 = 0xB1L;
                        g_387 = g_269.f0;
                        p_10 = ((((((p_8 < p_10) < 7L) ^ ((safe_sub_func_uint16_t_u_u((3L != g_705.f0), (p_8 || (g_146 < p_10)))) | l_1069[2][0][2])) | l_1070) != p_9) | l_1071);
                    }
                    p_10 = ((l_1036[0] > func_36(g_2, p_11.f0, p_8)) & (0x42L ^ (p_11.f0 | p_9)));
                    if (g_705.f0)
                        break;
                    for (g_146 = 0; (g_146 <= 3); g_146 += 1)
                    {
                        l_937 = ((l_1057[2].f0 ^ g_271) | l_937);
                        l_1071 = (safe_add_func_uint8_t_u_u(0x4CL, func_34(l_1071)));
                    }
                }
                else
                {
                    int l_1089 = (-1L);
                    if ((((safe_add_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u(0x8959L, (-2L))), (0UL ^ (p_12 >= (safe_rshift_func_uint16_t_u_u((~(safe_lshift_func_uint8_t_u_s(func_43(((l_1082 && p_11.f0) != func_36(p_11.f0, (g_116 < p_8), g_297[4]))), l_899[2]))), g_2)))))) && p_10) | l_891))
                    {
                        short l_1083 = 0x4079L;
                        g_350 = l_1083;
                    }
                    else
                    {
                        g_387 = g_387;
                    }
                    l_957 = func_40(p_10, l_1057[2]);
                    if ((safe_mod_func_uint16_t_u_u(l_1086, (safe_lshift_func_uint8_t_u_s(6UL, l_1089)))))
                    {
                        l_1103 = (0xBA57L <= (safe_add_func_int8_t_s_s(p_10, ((((safe_sub_func_uint32_t_u_u((safe_sub_func_int32_t_s_s((safe_sub_func_int8_t_s_s((safe_rshift_func_int8_t_s_s((0x84L <= (((0x99L || (~4L)) & l_1057[2].f0) > (func_36(p_10, l_930, func_43((safe_mod_func_int16_t_s_s(0L, g_387)))) <= g_6))), p_8)), l_1102)), 0UL)), l_1069[3][3][2])) ^ 5UL) & g_323) >= l_1057[2].f0))));
                        p_10 = (safe_rshift_func_int8_t_s_s((safe_sub_func_int8_t_s_s(((safe_lshift_func_int8_t_s_u((safe_add_func_uint8_t_u_u((g_942[0][4][8] || p_8), (safe_add_func_uint8_t_u_u(((65528UL > g_350) ^ (safe_add_func_uint32_t_u_u(p_8, (((-1L) & ((safe_add_func_uint8_t_u_u(((safe_sub_func_int16_t_s_s((l_1089 & (0x5EL == (safe_mod_func_uint16_t_u_u(g_297[4], 0x2ADBL)))), g_350)) || g_76), p_8)) <= g_350)) != p_9)))), g_146)))), l_944)) | l_1057[2].f0), l_891)), 7));
                        l_1128 = (((1L <= l_1089) && (safe_sub_func_uint32_t_u_u((safe_lshift_func_int16_t_s_s(func_43(g_297[5]), (g_323 || l_1082))), (safe_mod_func_int8_t_s_s(((5L >= g_269.f0) < 2UL), 1L))))) > g_146);
                    }
                    else
                    {
                        char l_1129 = (-3L);
                        l_1129 = func_34(l_1058);
                        if (g_6)
                            continue;
                    }
                }
                if (g_146)
                {
                    int l_1144[3];
                    int l_1156 = 0x29D25566L;
                    int i;
                    for (i = 0; i < 3; i++)
                        l_1144[i] = (-1L);
                    if ((l_976[1] ^ (~(safe_sub_func_int8_t_s_s(((g_705.f0 != func_34((p_9 != (safe_mod_func_uint16_t_u_u((+(((safe_add_func_uint16_t_u_u((safe_mod_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s((((~(safe_lshift_func_uint8_t_u_s(((g_269.f0 & (l_944 && (safe_add_func_int16_t_s_s(((l_1069[2][0][2] == 0L) == g_297[4]), (p_10 >= g_79))))) < l_1069[1][2][0]), l_1026))) & g_323) && 0x3628L), 2)), g_146)), (-10L))) > g_146) != g_297[8])), 0xBDC0L))))) & l_1144[1]), l_1058)))))
                    {
                        g_350 = (p_8 ^ ((-9L) >= p_8));
                        g_387 = p_11.f0;
                        if (l_1128)
                            break;
                    }
                    else
                    {
                        int l_1157 = (-1L);
                        l_1157 = ((safe_lshift_func_int16_t_s_u(func_43(l_891), (g_705.f0 < (((safe_add_func_uint16_t_u_u(((p_12 != g_297[4]) != (safe_sub_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s(((-1L) | ((l_1026 | l_1045) || ((((safe_rshift_func_uint16_t_u_s(0UL, g_146)) & 8L) > 0x37B96232L) <= l_1155))), 7)), l_1144[2]))), p_12)) & g_269.f0) <= 4L)))) | l_1156);
                    }
                    l_1144[0] = (g_146 | l_1086);
                }
                else
                {
                    int l_1164[3];
                    int l_1178 = 1L;
                    int i;
                    for (i = 0; i < 3; i++)
                        l_1164[i] = 1L;
                    for (l_1058 = 0; (l_1058 <= 3); l_1058 += 1)
                    {
                        g_1171 = (safe_lshift_func_int16_t_s_u(func_43((safe_rshift_func_int16_t_s_u(p_8, (((safe_add_func_uint16_t_u_u(func_36((l_1164[0] > (safe_mod_func_int32_t_s_s(func_40((func_40((safe_lshift_func_int16_t_s_u(p_11.f0, 4)), g_705) > (l_1045 > g_146)), p_11), 1L))), l_899[1], p_12), 5UL)) || 0x7DA2L) == p_11.f0)))), p_12));
                        g_350 = ((func_43(p_9) != 0xDD87L) != (safe_rshift_func_int8_t_s_s((safe_sub_func_int16_t_s_s((-10L), 0x434CL)), 7)));
                    }
                    g_1171 = p_10;
                    for (l_1103 = 0; (l_1103 <= 3); l_1103 += 1)
                    {
                        g_1171 = l_1155;
                        l_957 = (safe_lshift_func_int16_t_s_s(l_1178, p_10));
                    }
                    if (l_1045)
                    {
                        return p_11.f0;
                    }
                    else
                    {
                        short l_1183[5][10][3] = {{{(-1L),1L,8L},{4L,0x7376L,(-4L)},{0x1737L,1L,0x9B32L},{0x7DFBL,0x7376L,0x26DDL},{5L,1L,3L},{0L,0x7376L,0x7376L},{(-1L),1L,8L},{4L,0x7376L,(-4L)},{0x1737L,1L,0x9B32L},{0x7DFBL,0x7376L,0x26DDL}},{{5L,1L,3L},{0L,0x7376L,0x7376L},{(-1L),1L,8L},{4L,0x7376L,(-4L)},{0x1737L,1L,0x9B32L},{0x7DFBL,0x7376L,0x26DDL},{5L,1L,3L},{0L,0x7376L,0x7376L},{(-1L),1L,8L},{4L,0x7376L,(-4L)}},{{0x1737L,1L,0x9B32L},{0x7DFBL,0x7376L,0x26DDL},{5L,1L,3L},{0L,0x7376L,0x7376L},{(-1L),1L,5L},{0x7376L,0x47D8L,0x2A39L},{3L,0x8B17L,1L},{0x26DDL,0x47D8L,3L},{0x9B32L,0x8B17L,0x6E40L},{(-4L),0x47D8L,0x47D8L}},{{8L,0x8B17L,5L},{0x7376L,0x47D8L,0x2A39L},{3L,0x8B17L,1L},{0x26DDL,0x47D8L,3L},{0x9B32L,0x8B17L,0x6E40L},{(-4L),0x47D8L,0x47D8L},{8L,0x8B17L,5L},{0x7376L,0x47D8L,0x2A39L},{3L,0x8B17L,1L},{0x26DDL,0x47D8L,3L}},{{0x9B32L,0x8B17L,0x6E40L},{(-4L),0x47D8L,0x47D8L},{8L,0x8B17L,5L},{0x7376L,0x47D8L,0x2A39L},{3L,0x8B17L,1L},{0x26DDL,0x47D8L,3L},{0x9B32L,0x8B17L,0x6E40L},{(-4L),0x47D8L,0x47D8L},{8L,0x8B17L,5L},{0x7376L,0x47D8L,0x2A39L}}};
                        int i, j, k;
                        if (g_295)
                            break;
                        p_10 = (safe_add_func_int8_t_s_s(g_295, (((safe_lshift_func_uint16_t_u_u(l_1183[1][9][0], 2)) >= p_11.f0) > 0x0EL)));
                        p_10 = (1UL && (safe_rshift_func_int16_t_s_s((safe_mod_func_int16_t_s_s(func_43((safe_unary_minus_func_uint32_t_u(((!(safe_rshift_func_uint8_t_u_u((l_1086 >= ((safe_sub_func_int8_t_s_s(((((p_10 > l_1183[1][9][0]) & 0UL) <= (0x1C61L & (((l_1069[2][0][2] == (safe_rshift_func_int16_t_s_s(0xDFBBL, 10))) ^ (safe_rshift_func_int8_t_s_u((((-10L) ^ l_1183[1][9][0]) >= 0xA3L), 3))) || 0x9FL))) > l_1183[4][2][0]), 1L)) >= l_1086)), 7))) >= p_12)))), g_705.f0)), p_12)));
                    }
                }
            }
        }
    }
    else
    {
        short l_1204 = 0x9319L;
        p_10 = (((safe_add_func_int8_t_s_s(((safe_mod_func_uint32_t_u_u((g_269.f0 | (safe_rshift_func_int8_t_s_s((((safe_unary_minus_func_int16_t_s(l_1204)) & p_11.f0) || ((((-10L) > 8L) | (safe_rshift_func_int16_t_s_u(func_43(((safe_rshift_func_int16_t_s_s(g_84, ((p_9 != (((((1UL || p_10) || p_9) == 0x33L) ^ l_930) >= g_2)) | 8L))) == g_271)), 1))) | g_705.f0)), l_1204))), 0x7B12FDEEL)) | 0x9688L), l_1204)) <= 0xBAL) ^ l_1204);
    }
    return p_9;
}







static int func_13(unsigned short p_14, unsigned p_15)
{
    unsigned char l_855 = 0xA9L;
    int l_872 = 0x32690522L;
    unsigned short l_873[5];
    int l_874 = 1L;
    unsigned char l_875 = 0x3CL;
    int i;
    for (i = 0; i < 5; i++)
        l_873[i] = 1UL;
    l_874 = ((+((l_855 || ((((func_24(g_76, (((safe_lshift_func_uint8_t_u_s(l_855, ((safe_rshift_func_int8_t_s_u(((safe_sub_func_int32_t_s_s((((safe_mod_func_uint16_t_u_u(((252UL || (((safe_mod_func_int32_t_s_s(p_14, ((safe_rshift_func_int8_t_s_u(g_295, g_2)) || (safe_rshift_func_uint8_t_u_u(p_14, (safe_sub_func_int16_t_s_s(p_14, p_14))))))) & l_872) ^ l_873[2])) | p_14), p_14)) & 0xCBL) | 65535UL), g_6)) && 0xB173061FL), 2)) > g_705.f0))) ^ 0x50B2L) == 0xB9L)) > p_15) >= 1L) ^ 0x70EFF403L) < l_873[2])) <= p_14)) >= l_873[2]);
    l_874 = l_875;
    l_874 = (safe_sub_func_int16_t_s_s((-7L), (safe_sub_func_int8_t_s_s((safe_unary_minus_func_int16_t_s(g_387)), (safe_rshift_func_uint8_t_u_s((safe_rshift_func_int8_t_s_s((!g_297[4]), ((safe_lshift_func_int16_t_s_u(((safe_rshift_func_uint8_t_u_s(g_705.f0, g_271)) >= 0L), ((0x35ED7C0DL == ((safe_sub_func_int32_t_s_s((-6L), (0x4856L ^ g_116))) ^ p_14)) <= g_297[4]))) <= 0xABECL))), 5))))));
    return g_269.f0;
}







static short func_16(unsigned p_17, unsigned short p_18, short p_19, unsigned p_20, union U0 p_21)
{
    int l_836 = 9L;
    for (p_21.f0 = 2; (p_21.f0 <= 9); p_21.f0 += 1)
    {
        short l_835 = 0xCBA1L;
        l_836 = l_835;
        if (((l_836 <= g_297[4]) | func_43(func_34((safe_rshift_func_int16_t_s_s(p_21.f0, (safe_mod_func_uint32_t_u_u(l_835, (g_79 | (l_835 != 0x0BL))))))))))
        {
            if (l_836)
                break;
        }
        else
        {
            char l_841[1];
            int l_847 = (-9L);
            int i;
            for (i = 0; i < 1; i++)
                l_841[i] = 0L;
            if (p_17)
                break;
            l_841[0] = g_84;
            if (g_323)
            {
                unsigned short l_846 = 0x6580L;
                l_846 = (safe_sub_func_int8_t_s_s(func_29(p_18, (safe_add_func_int8_t_s_s(func_43(g_2), g_146)), g_350, (l_835 > (l_841[0] || g_323))), 0L));
                g_350 = l_841[0];
                l_847 = 3L;
                g_387 = (((safe_rshift_func_int16_t_s_u((safe_sub_func_uint16_t_u_u(l_841[0], g_76)), 2)) == g_146) > ((!0L) != ((p_17 ^ 0L) != p_21.f0)));
            }
            else
            {
                char l_854 = (-9L);
                l_854 = ((safe_sub_func_int32_t_s_s(l_835, g_84)) | 0xA8E1F7BBL);
                if (l_847)
                    continue;
                if (p_17)
                    break;
            }
        }
    }
    return p_20;
}







static unsigned func_24(unsigned p_25, unsigned short p_26)
{
    union U0 l_27[8] = {{0xE9AB5C29L},{0xA277EBD0L},{0xE9AB5C29L},{0xA277EBD0L},{0xE9AB5C29L},{0xA277EBD0L},{0xE9AB5C29L},{0xA277EBD0L}};
    int l_28 = 0xAEE0CD97L;
    int i;
    for (p_25 = 2; (p_25 <= 7); p_25 += 1)
    {
        unsigned char l_45 = 8UL;
        int i;
        l_28 = l_28;
        l_28 = (func_29(g_6, func_34(func_36(g_2, func_40((func_43((((p_25 && ((~(!(l_45 || p_26))) ^ p_26)) == p_26) && (l_28 > p_25))) && l_45), l_27[p_25]), p_25)), g_323, g_6) == l_45);
    }
    if (((safe_mod_func_uint32_t_u_u((safe_rshift_func_int16_t_s_s((((safe_add_func_uint32_t_u_u(p_25, 0x561BA316L)) ^ g_2) >= (5L || (~0xF3B1868FL))), 10)), p_25)) < (safe_rshift_func_uint8_t_u_u((!0x89L), l_28))))
    {
        unsigned char l_813 = 0x85L;
        int l_814 = (-4L);
        l_814 = (safe_mod_func_uint16_t_u_u(g_146, (safe_sub_func_uint8_t_u_u((g_269.f0 || p_25), l_813))));
    }
    else
    {
        int l_817 = 9L;
        int l_824[4] = {0L,0L,0L,0L};
        int i;
        l_28 = g_271;
        for (g_350 = (-12); (g_350 < (-4)); g_350 = safe_add_func_uint32_t_u_u(g_350, 9))
        {
            g_387 = g_350;
            if (l_817)
                continue;
            l_824[3] = (safe_add_func_int32_t_s_s(func_40(g_295, l_27[5]), (safe_rshift_func_int8_t_s_u((l_817 & (safe_rshift_func_uint8_t_u_s((g_350 && g_295), 4))), 7))));
        }
        g_387 = (0xFC1CE2B5L & 5UL);
        for (g_705.f0 = 23; (g_705.f0 == (-16)); g_705.f0--)
        {
            g_350 = (l_824[3] | p_25);
            for (g_269.f0 = 8; (g_269.f0 != (-11)); g_269.f0 = safe_sub_func_uint8_t_u_u(g_269.f0, 5))
            {
                l_824[3] = ((~0xB9375220L) ^ g_79);
            }
        }
    }
    return p_26;
}







static unsigned char func_29(unsigned p_30, unsigned short p_31, char p_32, unsigned short p_33)
{
    unsigned char l_579 = 0x5CL;
    unsigned l_606[3];
    int l_660 = 0x05EB39CBL;
    int l_676 = (-1L);
    union U0 l_679 = {5L};
    unsigned char l_762 = 255UL;
    int i;
    for (i = 0; i < 3; i++)
        l_606[i] = 1UL;
    for (g_269.f0 = (-9); (g_269.f0 < 13); g_269.f0++)
    {
        short l_582 = (-1L);
        int l_596 = 0x94A87A8DL;
        unsigned short l_597 = 1UL;
        int l_639 = 0L;
        if (((((g_297[4] >= l_579) < ((+((safe_mod_func_int32_t_s_s(g_350, l_582)) <= ((0UL != ((p_32 || (((-9L) > (safe_add_func_int32_t_s_s(((safe_lshift_func_int16_t_s_u(((-1L) < p_32), p_33)) > g_323), 6L))) < g_84)) | 1L)) != g_116))) ^ l_579)) <= l_579) <= g_350))
        {
            unsigned short l_622 = 0xA78DL;
            int l_661 = 0x1D86CFFCL;
            for (g_84 = 0; (g_84 <= 9); g_84 += 1)
            {
                unsigned char l_595[6][2][5] = {{{0UL,7UL,7UL,0UL,0xE1L},{0xA0L,6UL,0x4DL,0x77L,0xB0L}},{{248UL,0x77L,0xC2L,0UL,0x1EL},{0xAEL,0xD0L,7UL,0x77L,255UL}},{{0x4DL,6UL,0xA0L,0xE1L,0xA0L},{0x5FL,0x5FL,0xA0L,0xA9L,0xD0L}},{{1UL,0UL,7UL,248UL,0xE1L},{1UL,0xF9L,0xC2L,0xAEL,1UL}},{{6UL,0UL,5UL,0x4DL,0xC2L},{0x52L,0x5FL,0xAEL,0x5FL,0x52L}},{{0x52L,6UL,1UL,1UL,0x5FL},{6UL,0xD0L,0x77L,1UL,0xAEL}}};
                int i, j, k;
                l_596 = (p_33 || (l_582 && (((((safe_sub_func_int16_t_s_s((safe_mod_func_int16_t_s_s((((65535UL & (0x6361E857L >= (9UL != ((p_30 | ((safe_lshift_func_int8_t_s_u(0x3AL, (l_595[1][1][0] > (l_595[1][1][2] | l_579)))) == p_33)) || 0x0109A71CL)))) < p_31) ^ 0x8A57A96AL), g_76)), 0x71C7L)) < p_32) & l_579) >= 254UL) ^ p_31)));
                l_596 = ((l_597 < l_595[1][1][0]) > p_32);
                for (g_350 = 0; (g_350 <= 9); g_350 += 1)
                {
                    short l_617[10] = {0x442FL,0x442FL,0x442FL,0x442FL,0x442FL,0x442FL,0x442FL,0x442FL,0x442FL,0x442FL};
                    int l_634 = 0x8140842AL;
                    char l_644 = 0x17L;
                    int i;
                    l_596 = (safe_add_func_uint16_t_u_u(((safe_add_func_uint32_t_u_u(((p_32 | (g_76 < (~(l_606[0] > (g_323 >= g_116))))) >= 0x24DEL), p_31)) <= ((safe_mod_func_int16_t_s_s((0x6EF1L < p_31), p_32)) | g_297[0])), g_6));
                    if (((safe_lshift_func_uint16_t_u_u(g_84, l_595[0][1][0])) < (((safe_add_func_uint32_t_u_u(0xD8B398FEL, (safe_lshift_func_uint16_t_u_u(0x06A0L, (p_32 || (0xBB50L | (safe_rshift_func_uint16_t_u_s(l_617[0], 6)))))))) | (safe_mod_func_uint16_t_u_u((safe_add_func_int8_t_s_s(g_116, (l_622 || 1L))), g_297[8]))) >= 255UL)))
                    {
                        unsigned l_623 = 4294967289UL;
                        if (g_297[3])
                            break;
                        if (l_623)
                            continue;
                        l_634 = ((safe_sub_func_uint8_t_u_u((p_31 >= g_76), l_617[2])) && ((safe_add_func_int32_t_s_s(2L, (safe_sub_func_uint32_t_u_u((0x1A33L ^ g_271), (252UL < (safe_rshift_func_int8_t_s_s((safe_sub_func_uint32_t_u_u(0x007A9A22L, (-1L))), 0))))))) >= 0x32B4AE2EL));
                    }
                    else
                    {
                        char l_638 = 0x98L;
                        l_596 = (0x60L | 5L);
                        l_634 = ((g_271 && (((safe_mod_func_int32_t_s_s(((safe_unary_minus_func_uint32_t_u(g_6)) || (+l_638)), (p_32 && (((l_639 == (l_595[1][1][0] != ((safe_sub_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_s(l_638, l_638)) <= g_297[3]), 0x5375L)) >= p_30))) || p_30) & 0x54L)))) > g_323) || p_33)) < l_644);
                        if (p_32)
                            continue;
                        g_387 = g_350;
                    }
                    for (g_323 = 9; (g_323 >= 3); g_323 -= 1)
                    {
                        g_387 = 0x26D7F67FL;
                    }
                    for (l_622 = 0; (l_622 <= 9); l_622 += 1)
                    {
                        unsigned char l_659[1][4][3] = {{{255UL,255UL,255UL},{0xA7L,0xA7L,0xA7L},{255UL,255UL,255UL},{0xA7L,0xA7L,0xA7L}}};
                        int i, j, k;
                        l_661 = (((safe_sub_func_uint32_t_u_u((safe_rshift_func_int8_t_s_u(g_387, (!(((g_297[4] && (safe_lshift_func_uint8_t_u_s((l_595[3][1][4] <= (g_146 != (0x1CD2L != (p_30 >= (safe_sub_func_int32_t_s_s(0x69CF702EL, ((safe_sub_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u(8UL, (0x74L || 0x10L))), l_659[0][3][2])) > l_595[1][1][0]))))))), l_660))) & g_269.f0) >= 0L)))), l_579)) != g_116) == 0x3D58L);
                        l_596 = l_596;
                        l_639 = (safe_rshift_func_uint8_t_u_u((safe_add_func_int16_t_s_s(l_622, l_622)), 3));
                        l_596 = (safe_sub_func_int16_t_s_s((safe_add_func_uint32_t_u_u((((safe_sub_func_int32_t_s_s(p_31, p_30)) && (safe_sub_func_uint16_t_u_u(p_31, ((safe_lshift_func_int8_t_s_u((((p_33 || l_606[0]) >= l_659[0][2][1]) != p_31), g_6)) & 65535UL)))) || p_30), g_387)), g_269.f0));
                    }
                }
                l_661 = l_582;
            }
        }
        else
        {
            for (g_271 = 3; (g_271 <= 9); g_271 += 1)
            {
                int i;
                if (g_297[g_271])
                    break;
                g_350 = g_297[4];
            }
            l_676 = p_30;
        }
        if (g_350)
            break;
        g_387 = (func_40((safe_add_func_int16_t_s_s(0x8D22L, func_43(p_31))), l_679) >= 0xCA42L);
    }
    if (p_32)
    {
        unsigned l_699 = 1UL;
        for (g_269.f0 = (-15); (g_269.f0 == 19); g_269.f0++)
        {
            union U0 l_688 = {9L};
            g_387 = (safe_lshift_func_uint16_t_u_u((safe_add_func_uint32_t_u_u((safe_sub_func_uint16_t_u_u((!func_40(p_32, l_688)), (g_297[4] == (safe_lshift_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s((safe_lshift_func_int16_t_s_s(g_146, g_269.f0)), ((safe_lshift_func_int16_t_s_u((p_33 < g_6), (safe_rshift_func_int16_t_s_u((0x49L != 0x09L), l_676)))) >= p_33))), g_295))))), g_297[8])), g_146));
        }
        l_699 = (!(g_116 <= g_84));
        for (l_699 = 0; (l_699 < 58); l_699 = safe_add_func_uint16_t_u_u(l_699, 8))
        {
            l_676 = p_30;
            if (p_31)
                break;
        }
    }
    else
    {
        union U0 l_709[8][6][5] = {{{{0xEDCBE3F2L},{0x2BB233CDL},{0L},{1L},{0x083EEAE3L}},{{0xBE516D50L},{0xE0FBC24DL},{7L},{-4L},{0x1BE034D1L}},{{-9L},{5L},{0L},{1L},{0x2EC9B67EL}},{{-4L},{-1L},{-1L},{-4L},{-3L}},{{0x99F40A4BL},{-10L},{0x05A38061L},{-5L},{0x948AD6ABL}},{{1L},{0xA046680BL},{0x75E51037L},{0xE0FBC24DL},{-1L}}},{{{0xD2C48245L},{0xA92BD63FL},{1L},{-5L},{0x3DBAA386L}},{{7L},{-10L},{0xA046680BL},{0xE0FBC24DL},{0x687E51ACL}},{{0x22E83B02L},{0L},{0L},{-5L},{0L}},{{-1L},{0x75E51037L},{-4L},{0xE0FBC24DL},{0x6F41DDD2L}},{{0L},{-1L},{0L},{-5L},{-1L}},{{-1L},{-4L},{-10L},{0xE0FBC24DL},{0x9743C3B3L}}},{{{0xDF395CAFL},{0xEF7C6BEAL},{-1L},{-5L},{0L}},{{0xE0FBC24DL},{1L},{1L},{0xE0FBC24DL},{0L}},{{0L},{-10L},{0x05A38061L},{-5L},{0x948AD6ABL}},{{1L},{0xA046680BL},{0x75E51037L},{0xE0FBC24DL},{-1L}},{{0xD2C48245L},{0xA92BD63FL},{1L},{-5L},{0x3DBAA386L}},{{7L},{-10L},{0xA046680BL},{0xE0FBC24DL},{0x687E51ACL}}},{{{0x22E83B02L},{0L},{0L},{-5L},{0L}},{{-1L},{0x75E51037L},{-4L},{0xE0FBC24DL},{0x6F41DDD2L}},{{0L},{-1L},{0L},{-5L},{-1L}},{{-1L},{-4L},{-10L},{0xE0FBC24DL},{0x9743C3B3L}},{{0xDF395CAFL},{0xEF7C6BEAL},{-1L},{-5L},{0L}},{{0xE0FBC24DL},{1L},{-4L},{0x6F41DDD2L},{0x75E51037L}}},{{{0x3DBAA386L},{0x03A0447DL},{0xEDCBE3F2L},{0x4EACFE19L},{0x05A38061L}},{{0L},{0xBE516D50L},{0xF5BA3CC9L},{0x6F41DDD2L},{1L}},{{-1L},{0x6FDF9409L},{0x99F40A4BL},{0x4EACFE19L},{-1L}},{{0x687E51ACL},{-1L},{0xBE516D50L},{0x6F41DDD2L},{-10L}},{{0x948AD6ABL},{1L},{0x462320AEL},{0x4EACFE19L},{0L}},{{0x9743C3B3L},{0xF5BA3CC9L},{-9L},{0x6F41DDD2L},{-4L}}},{{{0L},{0xB658D15DL},{-9L},{0x4EACFE19L},{0L}},{{-1L},{-9L},{-1L},{0x6F41DDD2L},{0xA046680BL}},{{0L},{0x4D28A302L},{0x51C5347BL},{0x4EACFE19L},{1L}},{{0x6F41DDD2L},{-4L},{-4L},{0x6F41DDD2L},{0x75E51037L}},{{0x3DBAA386L},{0x03A0447DL},{0xEDCBE3F2L},{0x4EACFE19L},{0x05A38061L}},{{0L},{0xBE516D50L},{0xF5BA3CC9L},{0x6F41DDD2L},{1L}}},{{{-1L},{0x6FDF9409L},{0x99F40A4BL},{0x4EACFE19L},{-1L}},{{0x687E51ACL},{-1L},{0xBE516D50L},{0x6F41DDD2L},{-10L}},{{0x948AD6ABL},{1L},{0x462320AEL},{0x4EACFE19L},{0L}},{{0x9743C3B3L},{0xF5BA3CC9L},{-9L},{0x6F41DDD2L},{-4L}},{{0L},{0xB658D15DL},{-9L},{0x4EACFE19L},{0L}},{{-1L},{-9L},{-1L},{0x6F41DDD2L},{0xA046680BL}}},{{{0L},{0x4D28A302L},{0xD2C48245L},{0x6FDF9409L},{4L}},{{-9L},{0xE0FBC24DL},{0xE0FBC24DL},{-9L},{0x70BD6235L}},{{0x51C5347BL},{5L},{0L},{0x6FDF9409L},{3L}},{{0xF5BA3CC9L},{-1L},{7L},{-9L},{0xE0619F5EL}},{{0x462320AEL},{0x49D2B42FL},{0L},{0x6FDF9409L},{0x083EEAE3L}},{{-1L},{-1L},{-1L},{-9L},{0x1BE034D1L}}}};
        int l_711[9] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
        int l_792 = 6L;
        int i, j, k;
        for (p_33 = 0; (p_33 <= 2); p_33 += 1)
        {
            int l_702 = 5L;
            int l_712 = 0L;
            unsigned char l_752 = 0x34L;
            if (func_34(((0xBC3BA4CEL || l_702) != ((safe_rshift_func_uint16_t_u_u(func_40(p_31, g_705), 11)) < p_32))))
            {
                int l_710[8] = {0xECD44D46L,0xECD44D46L,0xECD44D46L,0xECD44D46L,0xECD44D46L,0xECD44D46L,0xECD44D46L,0xECD44D46L};
                int i;
                for (g_269.f0 = 2; (g_269.f0 >= 0); g_269.f0 -= 1)
                {
                    short l_708 = 0xB68DL;
                    l_711[2] = (((((255UL ^ 0UL) == (safe_add_func_uint32_t_u_u((l_708 == ((((func_40(p_33, l_709[5][5][2]) < (((((g_705.f0 < g_297[4]) | g_387) && l_702) == 0x0AAF2CB9L) ^ p_32)) | p_31) || l_708) || 0xF081E076L)), g_350))) | p_31) && l_710[1]) | l_708);
                }
            }
            else
            {
                int l_734 = 0x63CBDBE5L;
                if (func_43(g_146))
                {
                    l_712 = (-1L);
                    if (p_32)
                        continue;
                    if (p_32)
                        continue;
                }
                else
                {
                    unsigned short l_713 = 0UL;
                    for (p_31 = 0; (p_31 <= 2); p_31 += 1)
                    {
                        if (l_679.f0)
                            break;
                        g_350 = (+l_606[1]);
                    }
                    for (g_387 = 2; (g_387 >= 0); g_387 -= 1)
                    {
                        return l_713;
                    }
                }
                for (l_660 = 2; (l_660 >= 0); l_660 -= 1)
                {
                    unsigned short l_724 = 1UL;
                    int l_727[8];
                    int l_745 = 1L;
                    int i;
                    for (i = 0; i < 8; i++)
                        l_727[i] = 0x12C5FF05L;
                    if ((safe_sub_func_int32_t_s_s(func_36(l_712, l_712, g_2), (l_709[5][5][2].f0 == (((g_323 > (safe_add_func_int16_t_s_s((safe_add_func_int32_t_s_s((((safe_mod_func_uint32_t_u_u(p_30, g_323)) > (safe_add_func_int8_t_s_s(p_30, (-10L)))) ^ p_30), p_33)), 9UL))) >= l_660) > 0xD211L)))))
                    {
                        return l_579;
                    }
                    else
                    {
                        l_727[0] = ((l_724 <= (0xB1L & func_43(p_31))) || (safe_rshift_func_int8_t_s_s(g_76, (3UL ^ (g_297[1] & p_31)))));
                        g_350 = ((safe_rshift_func_int8_t_s_u((~(~(safe_mod_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u(func_40(p_32, g_705), g_350)), (g_387 | (g_6 < 0L)))))), ((l_734 > ((safe_sub_func_uint8_t_u_u((g_705.f0 || l_734), (-1L))) >= 0x1BL)) >= g_297[9]))) <= l_709[5][5][2].f0);
                        l_727[0] = (g_350 <= ((safe_mod_func_uint16_t_u_u((((safe_lshift_func_uint8_t_u_u(((safe_sub_func_uint32_t_u_u(0UL, func_43(((((func_40(p_33, g_705) != ((safe_add_func_int8_t_s_s(l_702, g_271)) != p_32)) | 0UL) & p_32) | 0xFDL)))) <= l_745), g_295)) ^ p_32) >= 0x0AL), p_30)) <= g_297[4]));
                        if (g_79)
                            continue;
                    }
                    l_734 = (safe_add_func_int16_t_s_s((g_6 & (safe_mod_func_int8_t_s_s((safe_add_func_uint32_t_u_u((!(g_84 == (((l_752 != p_32) && p_33) & (p_32 <= p_31)))), (safe_add_func_uint32_t_u_u(p_30, (((safe_add_func_int32_t_s_s((((l_734 > 0x711B9A31L) | p_31) < g_323), l_711[5])) || l_709[5][5][2].f0) != 0xAB3EL))))), 0xC3L))), 1UL));
                    if (p_31)
                        continue;
                }
            }
        }
        for (g_271 = 0; (g_271 <= 4); g_271 += 1)
        {
            unsigned short l_757 = 0x9243L;
            int l_790[1][6][6] = {{{0x91DDA275L,0x91DDA275L,0x51E20309L,0x51E20309L,0x91DDA275L,0x91DDA275L},{0x91DDA275L,0x51E20309L,0x51E20309L,0x91DDA275L,0x91DDA275L,0x51E20309L},{0x91DDA275L,0x91DDA275L,0x51E20309L,0x51E20309L,0x91DDA275L,0x91DDA275L},{0x91DDA275L,0x51E20309L,0x51E20309L,0x91DDA275L,0x91DDA275L,0x51E20309L},{0x91DDA275L,0x91DDA275L,0x51E20309L,0x51E20309L,0x91DDA275L,0x91DDA275L},{0x91DDA275L,0x51E20309L,0x51E20309L,0x91DDA275L,0x91DDA275L,0x51E20309L}}};
            unsigned l_791 = 9UL;
            int i, j, k;
            for (g_84 = 3; (g_84 >= 0); g_84 -= 1)
            {
                int i;
                l_711[g_271] = l_711[(g_84 + 2)];
                for (p_31 = 0; (p_31 <= 4); p_31 += 1)
                {
                    g_350 = g_271;
                    g_387 = p_33;
                    l_757 = g_6;
                    if (g_271)
                        break;
                }
            }
            for (g_84 = 1; (g_84 <= 4); g_84 += 1)
            {
                short l_763[1];
                int l_764 = 0x482B7DC8L;
                int i;
                for (i = 0; i < 1; i++)
                    l_763[i] = (-1L);
                l_711[2] = p_32;
                l_676 = ((safe_rshift_func_int8_t_s_s(g_269.f0, 4)) != (g_2 >= ((~p_30) & (((!(p_31 != ((g_297[4] != ((safe_add_func_int32_t_s_s((g_323 | (((g_271 || p_33) | (l_711[7] & 1UL)) || 0x3E2AL)), l_762)) ^ g_705.f0)) != (-1L)))) > g_79) & l_763[0]))));
                l_764 = 1L;
                for (p_32 = 1; (p_32 <= 4); p_32 += 1)
                {
                    unsigned char l_771 = 1UL;
                    if ((safe_add_func_uint32_t_u_u((safe_mod_func_int32_t_s_s((safe_lshift_func_uint8_t_u_u(l_771, 1)), (safe_rshift_func_uint8_t_u_s(l_762, (safe_sub_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_u(p_31, 3)) > g_6), l_757)))))), (((safe_add_func_uint32_t_u_u(((((((safe_add_func_uint16_t_u_u(p_31, (safe_rshift_func_uint16_t_u_s(((~(safe_lshift_func_uint8_t_u_u(((g_116 ^ l_757) == (safe_add_func_int16_t_s_s(0xF09EL, p_30))), 7))) || (-1L)), l_771)))) == l_757) > l_711[2]) != g_295) < p_32) & g_387), 0xE5073030L)) != g_297[4]) > p_33))))
                    {
                        unsigned l_788 = 0x9E8E9128L;
                        int l_789 = 0L;
                        l_788 = p_32;
                        if (g_84)
                            break;
                        g_387 = (g_79 >= g_297[2]);
                        l_789 = p_30;
                    }
                    else
                    {
                        return g_76;
                    }
                    l_790[0][1][3] = p_30;
                    for (l_676 = 4; (l_676 >= 0); l_676 -= 1)
                    {
                        l_791 = (p_32 > 0x67D2L);
                        if (l_792)
                            continue;
                    }
                }
            }
        }
        l_676 = ((p_32 != (l_792 & (safe_mod_func_int16_t_s_s(g_297[6], (safe_sub_func_int16_t_s_s((safe_sub_func_uint8_t_u_u(((safe_lshift_func_uint8_t_u_u((((p_32 >= ((l_676 | (p_30 || p_32)) >= g_297[4])) < (func_34(p_31) <= l_606[2])) && 0xC20FL), g_705.f0)) > g_146), g_146)), 0x4ABDL)))))) < l_679.f0);
    }
    return g_297[4];
}







static unsigned short func_34(unsigned short p_35)
{
    int l_523[7][7] = {{(-1L),0x30C5CDF6L,0x30C5CDF6L,(-1L),(-1L),0L,(-1L)},{1L,0L,1L,1L,0L,1L,0x8054032DL},{(-1L),1L,(-8L),0x92AE3696L,0x92AE3696L,(-8L),1L},{0x9632C4CCL,1L,1L,0x9632C4CCL,0x8054032DL,0x8054032DL,0x9632C4CCL},{(-1L),1L,(-1L),0x30C5CDF6L,1L,0L,0L},{0x8D267D03L,0x9632C4CCL,0x6AAAC8D5L,0x9632C4CCL,0x8D267D03L,0x6AAAC8D5L,0L},{0x92AE3696L,0L,0x30C5CDF6L,0x92AE3696L,0x30C5CDF6L,0L,0x92AE3696L}};
    union U0 l_561 = {0x6826B681L};
    short l_576 = 0x0153L;
    int i, j;
    l_523[5][4] = (safe_sub_func_int32_t_s_s(l_523[5][4], g_387));
    l_523[5][4] = (l_523[2][6] <= 9L);
    g_350 = (g_146 >= (((safe_lshift_func_uint16_t_u_u(func_43(p_35), l_523[5][4])) | (safe_mod_func_int32_t_s_s((p_35 || p_35), l_523[6][0]))) >= ((g_271 && l_523[5][4]) && l_523[5][4])));
    for (g_269.f0 = 16; (g_269.f0 <= 27); g_269.f0 = safe_add_func_uint32_t_u_u(g_269.f0, 7))
    {
        unsigned char l_539 = 255UL;
        if (p_35)
        {
            unsigned l_530 = 1UL;
            l_530 = 1L;
            g_350 = (safe_sub_func_int8_t_s_s(((g_2 >= (func_43(l_523[5][4]) & (safe_add_func_uint16_t_u_u((safe_mod_func_int32_t_s_s((248UL || ((l_530 >= l_530) > g_323)), g_146)), (safe_lshift_func_int16_t_s_u((l_539 != 4UL), g_295)))))) > p_35), l_539));
        }
        else
        {
            unsigned l_564 = 0xE9292F1FL;
            int l_575 = 0xA38D32E3L;
            for (g_387 = 0; (g_387 >= 20); g_387 = safe_add_func_uint32_t_u_u(g_387, 1))
            {
                unsigned char l_559 = 0x23L;
                unsigned l_562 = 0UL;
                g_350 = 0x5C851828L;
                for (g_271 = 0; (g_271 == (-9)); g_271 = safe_sub_func_uint8_t_u_u(g_271, 3))
                {
                    char l_558[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_558[i] = 0x59L;
                    l_523[5][3] = (l_539 == ((safe_lshift_func_uint16_t_u_u(1UL, 1)) >= p_35));
                    for (g_295 = 21; (g_295 == (-2)); g_295--)
                    {
                        unsigned l_560 = 4294967286UL;
                        int l_563[8] = {0x32295215L,(-9L),0x32295215L,(-9L),0x32295215L,(-9L),0x32295215L,(-9L)};
                        int i;
                        l_563[5] = (g_350 || ((g_269.f0 <= ((0xBF5DL || p_35) < ((safe_mod_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s((safe_sub_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u((~(safe_lshift_func_int16_t_s_s(l_558[0], 10))), 12)), (l_559 <= (!func_40(l_560, l_561))))), 14)), l_539)) <= (-6L)))) == l_562));
                        l_564 = p_35;
                        l_563[0] = g_271;
                    }
                    return g_350;
                }
                g_84 = (safe_rshift_func_int16_t_s_s(g_350, 5));
            }
            l_575 = (l_564 != (safe_lshift_func_uint16_t_u_u((((safe_lshift_func_int8_t_s_u((p_35 > (safe_mod_func_uint8_t_u_u((0x90FBL >= (0x74L < g_271)), 251UL))), g_84)) || (safe_lshift_func_uint8_t_u_u(251UL, ((g_350 && 65535UL) && p_35)))) && 0x3F7DEC0CL), 2)));
        }
    }
    return l_576;
}







static unsigned short func_36(short p_37, char p_38, unsigned char p_39)
{
    unsigned l_220[5][6];
    short l_224 = (-1L);
    int l_227 = 0xDD1E5F54L;
    union U0 l_273 = {0L};
    int l_319 = 1L;
    char l_341 = 0xABL;
    unsigned short l_359 = 65535UL;
    char l_404 = 0x23L;
    int l_491 = 0L;
    int i, j;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 6; j++)
            l_220[i][j] = 4294967289UL;
    }
    if (((safe_add_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u((+(safe_rshift_func_int8_t_s_s(func_43(g_116), 0))), ((g_6 < g_6) == 4UL))), l_220[0][4])) ^ l_220[1][2]))
    {
        char l_223 = 0L;
        int l_235 = 0x64F2D8B7L;
        unsigned short l_316 = 0x7444L;
        unsigned char l_324 = 0xDAL;
        for (p_39 = 0; (p_39 <= 54); ++p_39)
        {
            return g_6;
        }
        l_223 = p_37;
        l_224 = 0x1E73E5A1L;
        if ((safe_rshift_func_int16_t_s_u(l_227, 3)))
        {
            unsigned char l_234 = 0x5AL;
            int l_270[10];
            int i;
            for (i = 0; i < 10; i++)
                l_270[i] = 0xB153B5C7L;
            for (p_39 = 0; (p_39 < 49); p_39 = safe_add_func_int8_t_s_s(p_39, 2))
            {
                int l_238 = 6L;
                l_235 = ((((g_79 | p_39) > (g_6 < l_220[0][4])) >= (!(safe_sub_func_uint32_t_u_u((g_76 & ((((-1L) & (((p_39 >= g_84) > (((safe_lshift_func_int16_t_s_s(0L, p_38)) < 0L) > p_37)) > p_37)) > 0xA508L) == g_6)), l_234)))) & l_234);
                for (l_234 = 16; (l_234 == 36); l_234 = safe_add_func_uint16_t_u_u(l_234, 6))
                {
                    unsigned short l_250 = 65530UL;
                    unsigned short l_272 = 0x081FL;
                    if (((l_238 || (safe_add_func_uint16_t_u_u((0x34L < (l_224 | (safe_lshift_func_int16_t_s_u(p_39, 3)))), l_220[0][4]))) ^ (safe_sub_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u(l_224, ((g_116 >= ((safe_unary_minus_func_uint8_t_u((!p_39))) ^ (l_234 | g_6))) || 0x0AD85E00L))), 0L))))
                    {
                        l_250 = (~(g_84 | ((-6L) <= (safe_sub_func_int32_t_s_s((g_84 > p_38), g_116)))));
                        l_235 = (safe_add_func_uint32_t_u_u(((safe_mod_func_uint8_t_u_u(func_43((safe_sub_func_uint8_t_u_u(l_234, p_37))), 250UL)) == (!(l_223 | p_38))), ((safe_add_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s((((0xD109870DL ^ g_2) >= (safe_sub_func_uint8_t_u_u(g_146, p_37))) <= 0x09F3L), 2)), g_2)) >= g_146)));
                        l_238 = (((safe_rshift_func_uint8_t_u_u((g_146 && (0x90L ^ p_38)), 4)) | 5UL) != (((p_37 || (((5L & (safe_add_func_uint8_t_u_u((func_40(func_43((p_39 ^ ((safe_lshift_func_int16_t_s_s(((0xC819L ^ p_37) | g_2), p_37)) | 1UL))), g_269) != 0x48L), 0xB2L))) ^ g_2) & g_6)) < g_6) <= l_250));
                        l_270[3] = 0x143E8705L;
                    }
                    else
                    {
                        l_272 = func_43((p_37 >= (g_116 <= (g_271 ^ 0x7FL))));
                    }
                }
                if (((func_40(p_38, l_273) | g_2) >= 0x1EL))
                {
                    unsigned l_274[1][1][9] = {{{5UL,5UL,5UL,5UL,5UL,5UL,5UL,5UL,5UL}}};
                    int i, j, k;
                    l_227 = (func_40((p_37 && (g_6 & (l_274[0][0][1] != l_235))), g_269) != (l_234 != 0UL));
                    if (l_274[0][0][2])
                        break;
                }
                else
                {
                    unsigned l_277 = 0x1E6EC5EEL;
                    l_277 = func_43((safe_mod_func_int8_t_s_s(l_270[8], l_227)));
                }
                l_238 = (g_84 <= (p_37 || l_235));
            }
            l_227 = (-8L);
            g_84 = l_273.f0;
        }
        else
        {
            unsigned l_282[6][10] = {{0UL,0xEC117ADEL,0xEC117ADEL,0UL,0xEC117ADEL,0xEC117ADEL,0UL,0xEC117ADEL,0xEC117ADEL,0UL},{0xEC117ADEL,0UL,0xEC117ADEL,0xEC117ADEL,0UL,0xEC117ADEL,0xEC117ADEL,0UL,0xEC117ADEL,0xEC117ADEL},{0UL,0UL,7UL,0UL,0UL,7UL,0UL,0UL,7UL,0UL},{0UL,0xEC117ADEL,0xEC117ADEL,0UL,0xEC117ADEL,0xEC117ADEL,0UL,0xEC117ADEL,0xEC117ADEL,0UL},{0xEC117ADEL,0UL,0xEC117ADEL,0xEC117ADEL,0xEC117ADEL,7UL,7UL,0xEC117ADEL,7UL,7UL},{0xEC117ADEL,0xEC117ADEL,0UL,0xEC117ADEL,0xEC117ADEL,0UL,0xEC117ADEL,0xEC117ADEL,0UL,0xEC117ADEL}};
            int l_320 = 0x090F102AL;
            int i, j;
            if ((safe_rshift_func_uint8_t_u_u(((safe_add_func_int16_t_s_s(func_40(l_282[1][6], g_269), g_2)) > ((l_282[1][6] != (+((+(((0xA3F3L > l_282[0][7]) ^ (((l_282[1][6] > ((((-7L) && p_39) <= l_224) && l_282[1][7])) != p_39) != 0L)) < p_39)) ^ g_271))) & l_282[1][6])), l_235)))
            {
                g_84 = (((((safe_mod_func_uint8_t_u_u(l_223, (safe_lshift_func_uint8_t_u_s((((safe_sub_func_int8_t_s_s(0x48L, (!g_84))) ^ (l_220[3][0] <= ((safe_mod_func_uint32_t_u_u((0L != g_146), (safe_lshift_func_int8_t_s_u(l_282[5][6], 3)))) && 1L))) && (p_37 | 5UL)), 1)))) != 7UL) & l_282[1][6]) && l_224) | p_38);
            }
            else
            {
                int l_315 = 0x534AEA6BL;
                for (g_84 = (-29); (g_84 == 21); g_84 = safe_add_func_int8_t_s_s(g_84, 5))
                {
                    unsigned short l_296 = 1UL;
                    g_295 = g_271;
                    g_297[4] = l_296;
                    if (g_269.f0)
                        break;
                    return l_220[0][4];
                }
                for (p_38 = 5; (p_38 >= 0); p_38 -= 1)
                {
                    unsigned l_298[8] = {0x391B31A1L,0x391B31A1L,0x391B31A1L,0x391B31A1L,0x391B31A1L,0x391B31A1L,0x391B31A1L,0x391B31A1L};
                    int l_299 = (-10L);
                    int i;
                    l_298[5] = 0L;
                    for (p_37 = 4; (p_37 >= 0); p_37 -= 1)
                    {
                        int i, j;
                        l_299 = (0x2271L != l_282[(p_37 + 1)][(p_38 + 4)]);
                        l_235 = (l_282[(p_37 + 1)][(p_37 + 2)] <= (safe_add_func_int16_t_s_s(0x078BL, (g_146 ^ func_40(l_282[1][6], g_269)))));
                        l_316 = ((p_39 || (((safe_rshift_func_int8_t_s_u(((p_37 && g_6) && (safe_lshift_func_int8_t_s_s(g_116, p_38))), 6)) || (safe_add_func_uint16_t_u_u(((safe_unary_minus_func_int32_t_s((p_38 <= (safe_rshift_func_int8_t_s_s(((safe_rshift_func_uint16_t_u_s((!g_271), 7)) && (safe_add_func_int16_t_s_s((p_38 || g_297[4]), l_299))), g_6))))) == g_84), (-6L)))) & l_282[1][6])) < l_315);
                    }
                }
                l_320 = (safe_rshift_func_int8_t_s_u(l_319, g_146));
                for (g_271 = 4; (g_271 >= 1); g_271 -= 1)
                {
                    int l_321 = 8L;
                    l_319 = (-1L);
                    for (p_38 = 7; (p_38 >= 0); p_38 -= 1)
                    {
                        volatile char l_322[10][10] = {{4L,1L,0xF3L,0x35L,0xB5L,0x8CL,0x51L,(-5L),0x96L,(-1L)},{4L,0x6BL,0x7FL,0xADL,(-1L),0xB8L,(-1L),0x50L,0x68L,(-1L)},{0xB8L,(-1L),0x50L,0x68L,(-1L),(-2L),0L,0x65L,0xB5L,0x65L},{0xADL,0x1DL,(-1L),(-2L),(-1L),0x1DL,0xADL,0x68L,0x1CL,0L},{(-6L),0x50L,(-6L),1L,0x5BL,1L,(-2L),(-1L),0L,0x68L},{0x6BL,0x50L,0x4AL,(-6L),1L,0x1CL,0xADL,0L,0xF9L,0xB8L},{0x35L,0x1DL,(-1L),5L,0xADL,(-1L),0L,0xB5L,0x7FL,0x7FL},{0x8CL,1L,0x1CL,0x30L,0x30L,0x1CL,1L,1L,1L,0x6BL},{0x56L,(-1L),(-1L),0x93L,0x1CL,4L,0xF3L,1L,0x4AL,0x30L},{0x96L,0xB5L,(-1L),0x1CL,0x1DL,1L,0xADL,1L,(-6L),8L}};
                        int i, j;
                        l_321 = 0x2CD97A3DL;
                        l_322[6][3] = g_79;
                        if (g_146)
                            break;
                    }
                    for (g_269.f0 = 4; (g_269.f0 >= 1); g_269.f0 -= 1)
                    {
                        int i, j;
                        g_84 = l_220[g_269.f0][(g_271 + 1)];
                        if (g_323)
                            break;
                    }
                    g_84 = l_324;
                    for (g_84 = 4; (g_84 >= 1); g_84 -= 1)
                    {
                        unsigned l_325 = 4294967295UL;
                        l_235 = ((l_325 ^ (safe_rshift_func_uint8_t_u_s(p_38, 0))) == g_297[4]);
                    }
                }
            }
            g_84 = (((safe_add_func_uint32_t_u_u(g_271, p_39)) >= 0x1760L) || (g_2 ^ (g_116 <= ((((g_146 | 4294967292UL) > g_84) | (+((((g_271 > g_297[4]) && 0x15L) >= l_282[1][6]) ^ 0x026AL))) & g_297[4]))));
        }
    }
    else
    {
        int l_345 = 0xFB8268E9L;
        union U0 l_399[6] = {{-1L},{-1L},{-1L},{-1L},{-1L},{-1L}};
        char l_417 = 5L;
        int l_427 = 1L;
        int i;
        g_84 = g_297[4];
        for (g_269.f0 = 0; (g_269.f0 == 18); g_269.f0 = safe_add_func_int16_t_s_s(g_269.f0, 8))
        {
            unsigned short l_372 = 0x09BDL;
            int l_428 = 0x783D3C20L;
            for (g_146 = 7; (g_146 >= 0); g_146 -= 1)
            {
                unsigned short l_332 = 0x9716L;
                l_332 = (0x880C27D4L >= g_76);
            }
            if ((((safe_mod_func_int32_t_s_s(g_76, ((p_38 >= ((p_37 || ((safe_sub_func_int16_t_s_s(((safe_mod_func_int32_t_s_s(((0x6A60A03CL > g_6) == 0xDF4DL), 1UL)) < (65534UL <= p_37)), g_116)) < l_341)) & p_38)) & g_6))) > l_341) <= (-1L)))
            {
                short l_344 = (-3L);
                int l_349[6][8][5] = {{{0xADBB8262L,(-1L),1L,0xC9A39457L,0x0E269AAFL},{1L,2L,0xB708EA70L,1L,0x0E269AAFL},{0xC2F252CDL,(-4L),0xC9A39457L,(-7L),0x53330EE9L},{1L,(-4L),0x15FED4A6L,0xEB01A8E0L,2L},{0xADBB8262L,2L,0xC9A39457L,0xEB01A8E0L,1L},{0x3B7EC15BL,(-1L),0xB708EA70L,(-7L),2L},{0x3B7EC15BL,0x53330EE9L,1L,1L,0x53330EE9L},{0xADBB8262L,(-1L),1L,0xC9A39457L,0x0E269AAFL}},{{1L,2L,0xB708EA70L,1L,0x0E269AAFL},{0xC2F252CDL,(-4L),0xC9A39457L,(-7L),0x53330EE9L},{1L,(-4L),0x15FED4A6L,0xEB01A8E0L,2L},{0xADBB8262L,2L,0xC9A39457L,0xEB01A8E0L,1L},{(-6L),1L,0x1D21FA75L,(-1L),(-7L)},{(-6L),0xC9A39457L,0x07486421L,0x07486421L,0xC9A39457L},{0xAD876608L,1L,0x07486421L,0xD1A03054L,0xD58FD661L},{0x453B7D21L,(-7L),0x1D21FA75L,0x07486421L,0xD58FD661L}},{{1L,0xEB01A8E0L,0xD1A03054L,(-1L),0xC9A39457L},{0x453B7D21L,0xEB01A8E0L,7L,1L,(-7L)},{0xAD876608L,(-7L),0xD1A03054L,1L,0xB708EA70L},{(-6L),1L,0x1D21FA75L,(-1L),(-7L)},{(-6L),0xC9A39457L,0x07486421L,0x07486421L,0xC9A39457L},{0xAD876608L,1L,0x07486421L,0xD1A03054L,0xD58FD661L},{0x453B7D21L,(-7L),0x1D21FA75L,0x07486421L,0xD58FD661L},{1L,0xEB01A8E0L,0xD1A03054L,(-1L),0xC9A39457L}},{{0x453B7D21L,0xEB01A8E0L,7L,1L,(-7L)},{0xAD876608L,(-7L),0xD1A03054L,1L,0xB708EA70L},{(-6L),1L,0x1D21FA75L,(-1L),(-7L)},{(-6L),0xC9A39457L,0x07486421L,0x07486421L,0xC9A39457L},{0xAD876608L,1L,0x07486421L,0xD1A03054L,0xD58FD661L},{0x453B7D21L,(-7L),0x1D21FA75L,0x07486421L,0xD58FD661L},{1L,0xEB01A8E0L,0xD1A03054L,(-1L),0xC9A39457L},{0x453B7D21L,(-1L),1L,0x321CAD33L,0L}},{{0xD1A03054L,0L,2L,0x321CAD33L,0xAD876608L},{0xFFF403BBL,(-6L),0x53330EE9L,(-1L),0L},{0xFFF403BBL,0x453B7D21L,0x0E269AAFL,0x0E269AAFL,0x453B7D21L},{0xD1A03054L,(-6L),0x0E269AAFL,2L,2L},{(-1L),0L,0x53330EE9L,0x0E269AAFL,2L},{0x1D21FA75L,(-1L),2L,(-1L),0x453B7D21L},{(-1L),(-1L),1L,0x321CAD33L,0L},{0xD1A03054L,0L,2L,0x321CAD33L,0xAD876608L}},{{0xFFF403BBL,(-6L),0x53330EE9L,(-1L),0L},{0xFFF403BBL,0x453B7D21L,0x0E269AAFL,0x0E269AAFL,0x453B7D21L},{0xD1A03054L,(-6L),0x0E269AAFL,2L,2L},{(-1L),0L,0x53330EE9L,0x0E269AAFL,2L},{0x1D21FA75L,(-1L),2L,(-1L),0x453B7D21L},{(-1L),(-1L),1L,0x321CAD33L,0L},{0xD1A03054L,0L,2L,0x321CAD33L,0xAD876608L},{0xFFF403BBL,(-6L),0x53330EE9L,(-1L),0L}}};
                unsigned short l_400 = 0UL;
                int i, j, k;
                if ((p_37 != (8UL >= (safe_add_func_uint8_t_u_u(((func_40(g_76, g_269) ^ l_344) == g_297[4]), l_345)))))
                {
                    unsigned l_373[3][9][4] = {{{1UL,4294967295UL,3UL,1UL},{3UL,1UL,2UL,2UL},{0xFD909BC6L,0xFD909BC6L,1UL,2UL},{4294967295UL,1UL,0xE58D5345L,4294967295UL},{1UL,2UL,1UL,0xE58D5345L},{3UL,2UL,0x5C2CDBFBL,4294967295UL},{2UL,1UL,1UL,2UL},{1UL,4294967295UL,1UL,0xE58D5345L},{2UL,3UL,0x5C2CDBFBL,3UL}},{{3UL,1UL,1UL,3UL},{1UL,3UL,0xE58D5345L,0xE58D5345L},{4294967295UL,4294967295UL,0x5C2CDBFBL,2UL},{4294967295UL,1UL,0xE58D5345L,4294967295UL},{1UL,2UL,1UL,0xE58D5345L},{3UL,2UL,0x5C2CDBFBL,4294967295UL},{2UL,1UL,1UL,2UL},{1UL,4294967295UL,1UL,0xE58D5345L},{2UL,3UL,0x5C2CDBFBL,3UL}},{{3UL,1UL,1UL,3UL},{1UL,3UL,0xE58D5345L,0xE58D5345L},{4294967295UL,4294967295UL,0x5C2CDBFBL,2UL},{4294967295UL,1UL,0xE58D5345L,4294967295UL},{1UL,2UL,1UL,0xE58D5345L},{3UL,2UL,0x5C2CDBFBL,4294967295UL},{2UL,1UL,1UL,2UL},{1UL,4294967295UL,1UL,0xE58D5345L},{2UL,3UL,0xFD909BC6L,2UL}}};
                    int l_375 = 0L;
                    int i, j, k;
                    for (l_319 = 5; (l_319 > (-7)); --l_319)
                    {
                        unsigned short l_348 = 9UL;
                        l_348 = p_39;
                    }
                    if (g_76)
                    {
                        l_349[2][5][1] = p_38;
                        g_84 = 4L;
                        g_350 = g_350;
                    }
                    else
                    {
                        unsigned short l_374 = 0xDE77L;
                        g_350 = ((l_227 & (safe_add_func_uint32_t_u_u((0xE7L | (g_269.f0 >= func_43((safe_sub_func_uint32_t_u_u(g_297[9], g_295))))), 9UL))) > ((((safe_add_func_uint16_t_u_u((l_359 < g_297[0]), g_295)) <= p_39) <= l_273.f0) <= 5L));
                        l_373[1][6][2] = ((((p_38 > (safe_lshift_func_uint8_t_u_u(3UL, 0))) != ((l_344 & 0xD17B06B8L) || ((safe_add_func_uint8_t_u_u((g_350 >= (safe_rshift_func_int8_t_s_u(((!((safe_lshift_func_int16_t_s_u((safe_add_func_int16_t_s_s(g_146, ((safe_add_func_int16_t_s_s(l_344, 65531UL)) & ((((-8L) | 0x0541L) < l_372) < (-4L))))), g_350)) == 0x69L)) | g_84), 4))), p_37)) & p_38))) > 0xAE8739ECL) & 0x00L);
                        l_349[2][5][1] = (func_43(p_39) == l_374);
                        l_375 = l_341;
                    }
                }
                else
                {
                    short l_380 = 0xB4B0L;
                    for (g_295 = 0; (g_295 <= (-23)); g_295 = safe_sub_func_int8_t_s_s(g_295, 5))
                    {
                        l_227 = (p_37 | (safe_mod_func_int16_t_s_s(((l_349[2][5][1] <= g_297[3]) && l_380), g_350)));
                    }
                    if ((((safe_sub_func_int8_t_s_s((p_38 ^ func_43(l_349[2][5][1])), (p_37 | l_345))) != (safe_sub_func_uint8_t_u_u(0xDAL, (((-1L) < (safe_lshift_func_int16_t_s_u((p_38 && (p_39 || g_387)), p_39))) && 0L)))) && g_2))
                    {
                        unsigned l_392 = 0x4D90F9F7L;
                        int l_401 = (-1L);
                        l_345 = (((l_345 == l_372) | func_40(((((safe_add_func_int8_t_s_s(func_43((safe_add_func_uint32_t_u_u(l_392, ((((safe_sub_func_uint32_t_u_u((safe_mod_func_uint32_t_u_u(p_37, p_38)), ((safe_rshift_func_int8_t_s_s((l_372 <= (p_39 || g_295)), (g_116 && l_341))) > l_392))) <= p_38) & g_297[3]) && p_39)))), g_297[4])) < l_372) < 0x30249B7FL) | p_39), l_399[4])) && l_400);
                        l_401 = g_295;
                        g_387 = (safe_lshift_func_int8_t_s_s(l_404, 4));
                    }
                    else
                    {
                        if (p_37)
                            break;
                        if (g_269.f0)
                            continue;
                        l_319 = g_76;
                    }
                    g_84 = g_295;
                }
                g_350 = (safe_add_func_uint16_t_u_u(((+(((safe_unary_minus_func_int32_t_s((safe_add_func_uint8_t_u_u(((safe_unary_minus_func_int16_t_s(((((safe_mod_func_int32_t_s_s(p_38, g_350)) && 6L) || (safe_lshift_func_uint8_t_u_u((safe_sub_func_int16_t_s_s(l_417, (safe_rshift_func_uint8_t_u_u((safe_unary_minus_func_uint16_t_u(65535UL)), (g_297[4] ^ (safe_mod_func_uint8_t_u_u((3L | (safe_rshift_func_uint16_t_u_u(func_40((safe_lshift_func_int8_t_s_u((g_76 < l_400), p_37)), g_269), 2))), p_37))))))), l_427))) | 0xDDL))) <= 0xC067DC14L), l_372)))) >= g_6) != 1UL)) && g_295), (-4L)));
                g_387 = func_40(l_372, l_399[3]);
                g_387 = (g_2 && 0L);
            }
            else
            {
                unsigned l_445 = 0x049C1B42L;
                unsigned char l_446 = 0UL;
                l_428 = g_295;
                l_345 = 4L;
                g_387 = (safe_rshift_func_uint16_t_u_s(g_2, ((((safe_add_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u((0UL > (p_38 >= (~((((safe_add_func_int32_t_s_s((0x20932727L ^ (safe_unary_minus_func_uint32_t_u(0xEC495DDBL))), (safe_lshift_func_uint16_t_u_u((safe_unary_minus_func_int8_t_s(((((safe_rshift_func_uint8_t_u_s((((g_146 <= func_43(g_79)) || ((safe_mod_func_uint8_t_u_u(p_38, p_37)) & l_445)) != p_37), 5)) | g_6) && (-6L)) ^ l_446))), g_6)))) < g_146) && (-10L)) == 4294967295UL)))), 4)), l_445)) ^ 0L) && g_79) == p_37)));
            }
            for (l_273.f0 = 5; (l_273.f0 >= 0); l_273.f0 -= 1)
            {
                for (g_84 = 1; (g_84 <= 5); g_84 += 1)
                {
                    if (p_39)
                        break;
                    if (g_350)
                        break;
                }
            }
        }
        for (l_319 = 2; (l_319 <= 9); l_319 += 1)
        {
            char l_452 = (-1L);
            union U0 l_453 = {-3L};
            char l_469 = (-3L);
            int i;
            for (g_295 = 0; (g_295 <= 4); g_295 += 1)
            {
                int l_447 = 0xF3A770B7L;
                int i, j;
                l_447 = (65527UL == func_43(g_297[l_319]));
                g_350 = ((1UL | ((l_220[g_295][(g_295 + 1)] & (safe_sub_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u(l_220[g_295][g_295], l_452)), p_37))) <= func_40(g_84, l_453))) < g_297[3]);
            }
            l_227 = g_297[l_319];
            for (l_359 = 0; (l_359 <= 5); l_359 += 1)
            {
                int l_462 = (-5L);
                union U0 l_485 = {1L};
                if ((((p_39 > (safe_add_func_int8_t_s_s(0x8DL, l_220[0][4]))) < (safe_add_func_int16_t_s_s(g_116, p_38))) < (safe_sub_func_uint16_t_u_u((+((safe_rshift_func_int8_t_s_u((0x5597L | l_462), 3)) > 1UL)), ((safe_lshift_func_int16_t_s_s((safe_mod_func_int16_t_s_s((safe_add_func_int8_t_s_s(l_469, g_146)), (-1L))), 3)) > p_39)))))
                {
                    if (g_297[4])
                        break;
                    if (g_79)
                        continue;
                    g_84 = ((safe_unary_minus_func_uint16_t_u((g_297[4] <= ((p_37 == (g_269.f0 <= (safe_lshift_func_int8_t_s_s(l_220[0][4], 1)))) != p_38)))) <= (((safe_rshift_func_uint16_t_u_u(g_271, 2)) >= (~((safe_sub_func_uint32_t_u_u(g_297[9], (4L || l_462))) <= l_417))) && p_39));
                }
                else
                {
                    char l_486 = 0L;
                    g_350 = (safe_lshift_func_int16_t_s_u(func_40((safe_sub_func_uint8_t_u_u(((((g_297[4] >= (safe_add_func_uint32_t_u_u(((func_40(((-1L) <= 0x98L), l_399[4]) && ((safe_sub_func_int32_t_s_s((65535UL >= l_417), func_40((func_40(p_37, l_485) || 8L), l_453))) & g_146)) || p_39), g_297[4]))) & (-8L)) || 1UL) & 0xB0L), l_486)), l_485), 13));
                }
                for (p_39 = 1; (p_39 <= 4); p_39 += 1)
                {
                    int i, j;
                    if (l_220[p_39][(p_39 + 1)])
                        break;
                }
            }
        }
        l_319 = (-1L);
    }
    if ((safe_sub_func_int32_t_s_s(((safe_sub_func_int32_t_s_s((((4294967295UL >= l_491) || g_6) >= (safe_lshift_func_uint8_t_u_s((((((safe_mod_func_uint8_t_u_u(251UL, p_38)) & (safe_unary_minus_func_int32_t_s(l_227))) || l_341) != p_37) && (0x0EF0L <= 0x6CF2L)), l_359))), p_39)) == p_39), 0xAF7A3FABL)))
    {
        int l_497 = 1L;
        l_227 = (g_323 <= (g_76 | p_39));
        g_387 = func_40(p_37, l_273);
        l_319 = func_43(p_38);
        g_387 = (func_40(g_297[9], l_273) >= l_497);
    }
    else
    {
        int l_502 = 8L;
        l_227 = (safe_sub_func_uint32_t_u_u((((safe_add_func_uint32_t_u_u(l_502, g_6)) >= (2L ^ l_502)) & (((!((safe_add_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u((safe_mod_func_int16_t_s_s(p_37, g_84)), 2)), (((safe_add_func_int16_t_s_s(p_38, (g_76 == g_76))) == g_323) >= p_37))) >= g_387)) | g_146) | l_359)), p_39));
    }
    for (p_37 = (-5); (p_37 == (-1)); p_37++)
    {
        unsigned short l_516 = 0x8078L;
        if (l_491)
        {
            int l_515 = 0x39EDE1A3L;
            g_350 = (func_40((!0x05L), g_269) > (((safe_rshift_func_int8_t_s_u(0x34L, g_146)) <= ((+(p_37 < l_515)) <= p_39)) & (g_387 == l_516)));
        }
        else
        {
            union U0 l_519[1] = {{-3L}};
            int l_520 = 0xAAC745EAL;
            int i;
            if (p_38)
                break;
            l_520 = (0L & ((g_6 >= (safe_sub_func_uint16_t_u_u(0xA367L, (p_38 < p_38)))) && func_40(p_39, l_519[0])));
        }
    }
    return g_387;
}







static char func_40(char p_41, union U0 p_42)
{
    unsigned short l_87 = 0xE755L;
    short l_92 = 0L;
    int l_97 = 1L;
    int l_107 = 0x157DACB8L;
    int l_121 = 0xE207B948L;
    for (p_41 = (-3); (p_41 > (-4)); p_41 = safe_sub_func_uint16_t_u_u(p_41, 1))
    {
        return p_41;
    }
    if ((0x28L != (l_87 < func_43((safe_add_func_uint16_t_u_u((safe_add_func_uint8_t_u_u(((g_79 >= g_84) && l_92), (g_2 | (safe_rshift_func_int16_t_s_u(p_41, l_87))))), (safe_lshift_func_int8_t_s_s(g_6, 6))))))))
    {
        int l_98 = 0x3C45F469L;
        int l_101 = 4L;
        if (l_92)
        {
            char l_104[8][2][7] = {{{(-1L),(-1L),(-1L),0L,(-1L),0L,(-1L)},{0xF7L,0xF7L,0x08L,(-1L),0xF7L,1L,(-1L)}},{{1L,0L,(-1L),(-1L),(-1L),0L,1L},{(-6L),(-1L),0x89L,(-6L),0xF7L,0x89L,0x89L}},{{(-1L),(-1L),0xD7L,(-1L),(-1L),0xE2L,(-1L)},{0xF7L,(-6L),0x89L,(-1L),(-6L),(-6L),(-1L)}},{{(-1L),(-1L),(-1L),0L,1L,0L,(-1L)},{0xF7L,(-1L),0x08L,0xF7L,0xF7L,0x08L,(-1L)}},{{(-1L),0L,(-1L),(-1L),(-1L),0L,(-1L)},{(-6L),0xF7L,0x89L,0x89L,0xF7L,(-6L),0x89L}},{{1L,(-1L),0L,(-1L),1L,0xE2L,1L},{0xF7L,0x89L,0x89L,0xF7L,(-6L),0x89L,(-1L)}},{{(-1L),(-1L),(-1L),0L,(-1L),0L,(-1L)},{0xF7L,0xF7L,(-1L),0x89L,(-6L),0xF7L,0x89L}},{{(-1L),0xE2L,0L,0L,0L,0xE2L,(-1L)},{1L,0x89L,0x08L,1L,(-6L),0x08L,0x08L}}};
            int i, j, k;
            l_97 = 0x3D2D6DA1L;
            l_98 = p_42.f0;
            for (l_97 = 7; (l_97 < (-26)); --l_97)
            {
                if (l_98)
                    break;
                l_107 = (l_101 && (g_84 < (safe_lshift_func_uint16_t_u_s((l_104[0][0][2] && (((safe_mod_func_uint8_t_u_u(g_76, g_2)) < p_41) ^ (g_84 && ((g_76 & g_6) | g_2)))), l_101))));
                l_101 = g_6;
            }
            return p_41;
        }
        else
        {
            int l_110 = (-9L);
            g_84 = (safe_sub_func_int16_t_s_s((-9L), l_110));
            g_84 = 0xEDF4FAD4L;
        }
        l_97 = p_41;
    }
    else
    {
        int l_111[1];
        int l_183 = 0xF4DCE6FAL;
        int i;
        for (i = 0; i < 1; i++)
            l_111[i] = 0L;
        g_84 = 0xF4D7AA0EL;
        for (p_42.f0 = 0; (p_42.f0 >= 0); p_42.f0 -= 1)
        {
            int l_133 = 0xFD130108L;
            unsigned l_194 = 0x7D00A8C6L;
            int i;
            if ((l_111[p_42.f0] ^ (l_97 ^ (((l_111[0] > l_111[p_42.f0]) | (safe_add_func_uint32_t_u_u((safe_mod_func_int32_t_s_s((+l_111[0]), g_116)), l_111[p_42.f0]))) && g_84))))
            {
                int l_132 = 0L;
                g_84 = ((safe_add_func_uint8_t_u_u(g_6, 1L)) <= p_41);
                l_97 = (p_42.f0 || p_42.f0);
                l_133 = ((safe_sub_func_uint8_t_u_u(p_42.f0, l_121)) && ((((safe_sub_func_int8_t_s_s(p_41, (l_111[p_42.f0] < p_42.f0))) <= 0x4A54L) >= (p_41 > ((safe_rshift_func_uint8_t_u_u(((l_111[0] || func_43(((safe_lshift_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u((g_76 & l_132), p_41)), l_132)) | 0xB8L))) && p_42.f0), l_111[p_42.f0])) || p_42.f0))) != 0x4899L));
                l_132 = (safe_sub_func_int8_t_s_s(p_41, ((safe_rshift_func_uint16_t_u_u((((safe_rshift_func_uint16_t_u_s((safe_add_func_int32_t_s_s(l_111[p_42.f0], 5UL)), 13)) >= (((safe_lshift_func_uint16_t_u_u(((p_42.f0 && func_43((~((g_6 || 0xFAL) ^ ((g_79 >= ((safe_add_func_int8_t_s_s((-4L), 9L)) && g_84)) || 0xA0L))))) != l_92), 1)) & l_132) <= g_6)) || p_42.f0), 10)) || g_146)));
            }
            else
            {
                unsigned char l_177 = 0x0FL;
                int l_189 = 0L;
                for (l_133 = 0; (l_133 <= 0); l_133 += 1)
                {
                    int l_178 = 0x4BFD0F75L;
                    for (l_97 = 0; (l_97 <= 0); l_97 += 1)
                    {
                        g_84 = g_84;
                    }
                    for (l_92 = 0; (l_92 >= 0); l_92 -= 1)
                    {
                        int i;
                        l_178 = (l_111[p_42.f0] == (safe_sub_func_uint16_t_u_u(((safe_rshift_func_int8_t_s_u((l_111[p_42.f0] != (safe_mod_func_int16_t_s_s(p_41, ((safe_mod_func_int32_t_s_s(g_146, ((safe_add_func_int32_t_s_s((-1L), (safe_add_func_uint32_t_u_u(l_111[p_42.f0], (safe_lshift_func_int8_t_s_s(func_43((safe_mod_func_uint8_t_u_u(((safe_sub_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s(((safe_sub_func_int32_t_s_s(g_146, func_43((safe_add_func_uint16_t_u_u(((((safe_mod_func_int8_t_s_s(func_43((safe_lshift_func_uint16_t_u_u(((safe_mod_func_int32_t_s_s(func_43(l_177), l_178)) == 0xB5L), l_111[p_42.f0]))), g_6)) == p_41) < 0xC51AL) >= p_42.f0), p_41))))) != 0x48L), p_42.f0)), g_146)) <= l_111[0]), 0x1FL))), p_42.f0)))))) || g_84))) | 6UL)))), 4)) | 1L), l_111[p_42.f0])));
                        l_183 = (((safe_rshift_func_uint8_t_u_s((safe_add_func_uint32_t_u_u(func_43(g_2), (l_133 && ((((p_42.f0 >= (((g_146 > l_177) ^ (0L < l_87)) < p_41)) & g_6) || 0x378FEF95L) && p_41)))), g_6)) != 0UL) ^ p_42.f0);
                        if (p_42.f0)
                            continue;
                        g_84 = 1L;
                    }
                    l_107 = func_43(((safe_rshift_func_int16_t_s_u((-5L), ((safe_unary_minus_func_int16_t_s(func_43((3UL < g_76)))) || g_2))) <= (safe_lshift_func_int8_t_s_s(l_111[0], 4))));
                    for (l_97 = 0; (l_97 <= 0); l_97 += 1)
                    {
                        l_189 = (g_84 | g_146);
                        l_107 = func_43(p_41);
                    }
                }
                g_84 = 0x22D52091L;
                for (l_177 = 0; (l_177 <= 0); l_177 += 1)
                {
                    unsigned l_201 = 4294967291UL;
                    l_133 = (safe_rshift_func_int8_t_s_s(((safe_lshift_func_int8_t_s_u(((p_41 != l_194) && (func_43((safe_add_func_int8_t_s_s((p_41 || ((l_111[0] < (0x2908L ^ 65535UL)) < (safe_mod_func_uint32_t_u_u(func_43(l_194), (safe_sub_func_uint8_t_u_u((~((((0x5262L <= 0UL) || l_183) != 0x9D2DL) <= g_146)), 0xD5L)))))), l_177))) == 0UL)), l_201)) != l_133), g_146));
                    for (g_84 = 0; (g_84 >= 0); g_84 -= 1)
                    {
                        return p_41;
                    }
                    g_84 = (safe_sub_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s(g_116, 2)), 0UL));
                    if (p_41)
                        break;
                }
            }
        }
    }
    g_84 = (safe_add_func_int32_t_s_s((p_41 == g_6), 0x605C3BE2L));
    l_121 = (safe_mod_func_uint32_t_u_u(((0xD41CL ^ func_43(l_107)) & (((g_2 <= (safe_mod_func_uint8_t_u_u(((0xEBL <= 0x1EL) || (safe_mod_func_int16_t_s_s(g_146, 9UL))), 9UL))) ^ p_41) <= 0x5790L)), g_6));
    return l_107;
}







static char func_43(short p_44)
{
    int l_48 = 0x7697AB83L;
    if ((safe_add_func_int32_t_s_s(l_48, (((safe_lshift_func_uint16_t_u_s((g_6 <= p_44), l_48)) != (p_44 <= ((p_44 || (safe_add_func_int8_t_s_s((g_2 || (!(+((safe_add_func_int16_t_s_s((l_48 >= (l_48 || l_48)), g_2)) > g_6)))), 0x9DL))) && p_44))) | g_2))))
    {
        int l_71 = 0xD0C81CF0L;
        unsigned l_72 = 1UL;
        l_71 = ((safe_add_func_uint32_t_u_u((safe_add_func_uint8_t_u_u(p_44, (((safe_sub_func_uint16_t_u_u(l_48, (safe_add_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_s((p_44 < (safe_rshift_func_int8_t_s_s((l_48 | (((safe_mod_func_uint16_t_u_u(((safe_lshift_func_int8_t_s_u(((((+(0x162A9717L >= (p_44 > l_71))) < p_44) ^ l_48) > g_2), p_44)) && 0x5542ED5AL), p_44)) == l_72) > g_6)), l_48))), g_6)), 0L)))) <= p_44) | 4294967295UL))), g_2)) & g_6);
    }
    else
    {
        unsigned l_75 = 0x90704A96L;
        int l_81[7] = {(-9L),(-9L),(-9L),(-9L),(-9L),(-9L),(-9L)};
        int i;
        g_76 = (((safe_rshift_func_int16_t_s_s(p_44, g_2)) == 65532UL) & l_75);
        if (p_44)
        {
            return l_75;
        }
        else
        {
            for (p_44 = (-22); (p_44 != (-6)); ++p_44)
            {
                unsigned l_80 = 0x9D4C0F60L;
                g_79 = 0xDA9BE8BAL;
                l_81[0] = l_80;
            }
        }
        g_84 = (((safe_add_func_uint32_t_u_u(p_44, g_79)) & g_2) <= (((l_48 && (g_76 && ((0x6825732EL >= (g_2 > ((l_48 < (p_44 || l_75)) ^ 0x57EEL))) > p_44))) <= g_76) > g_6));
    }
    g_84 = (g_2 ^ ((1L && l_48) > (g_76 | 1L)));
    return p_44;
}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_6, "g_6", print_hash_value);
    transparent_crc(g_76, "g_76", print_hash_value);
    transparent_crc(g_79, "g_79", print_hash_value);
    transparent_crc(g_84, "g_84", print_hash_value);
    transparent_crc(g_116, "g_116", print_hash_value);
    transparent_crc(g_146, "g_146", print_hash_value);
    transparent_crc(g_269.f0, "g_269.f0", print_hash_value);
    transparent_crc(g_271, "g_271", print_hash_value);
    transparent_crc(g_295, "g_295", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_297[i], "g_297[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_323, "g_323", print_hash_value);
    transparent_crc(g_350, "g_350", print_hash_value);
    transparent_crc(g_387, "g_387", print_hash_value);
    transparent_crc(g_705.f0, "g_705.f0", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 10; k++)
            {
                transparent_crc(g_942[i][j][k], "g_942[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_1171, "g_1171", print_hash_value);
    transparent_crc(g_1284, "g_1284", print_hash_value);
    transparent_crc(g_1400, "g_1400", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
