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



static unsigned g_6[3][8] = {{0xA1FA147BL,0x307B5CA9L,0xA1FA147BL,0xA1FA147BL,0x307B5CA9L,0xA1FA147BL,0xA1FA147BL,0x307B5CA9L},{0x307B5CA9L,0xA1FA147BL,0xA1FA147BL,0x307B5CA9L,0xA1FA147BL,0xA1FA147BL,0x307B5CA9L,0xA1FA147BL},{0x307B5CA9L,0x307B5CA9L,0x4279C418L,0x307B5CA9L,0x307B5CA9L,0x4279C418L,0x307B5CA9L,0x307B5CA9L}};
static unsigned char g_22[5] = {3UL,3UL,3UL,3UL,3UL};
static int g_25 = (-1L);
static int g_28 = 0xBE584996L;
static int g_80 = 1L;
static int g_82 = 9L;
static unsigned short g_99 = 65530UL;
static unsigned char g_105 = 0x92L;
static short g_119 = 7L;
static unsigned g_120 = 0x1B12C121L;
static char g_164 = 0xC1L;
static char g_178 = 0xEFL;
static unsigned short g_179 = 0x584BL;
static int g_182 = 8L;
static unsigned g_197[6][8][5] = {{{0x8C644E42L,4294967292UL,0UL,0xE0269AD2L,0xA555F879L},{0xECFE5F79L,0xE438FE63L,6UL,0xE438FE63L,0xECFE5F79L},{0UL,4294967287UL,4294967292UL,0x06DED90BL,0x4E5047FAL},{0xBE697A0AL,0x82CA4FB3L,0x70BDD84CL,4294967286UL,0x78FA292BL},{0x06DED90BL,0x768125F4L,0xE0269AD2L,0x06DED90BL,0xD1EA2908L},{0xFA3AE11FL,4294967286UL,0x91D05563L,0x91D05563L,4294967286UL},{0xD1EA2908L,0xE62ACF96L,4294967295UL,0x859A0E45L,0x49D56FFFL},{0x9513A8B7L,0xEEDE39AEL,0xAA1D0963L,0x82CA4FB3L,0x19C157CCL}},{{0x544EC24FL,0x06DED90BL,0x49D56FFFL,0x3E4D4EBDL,0xA555F879L},{0x9513A8B7L,0xFA3AE11FL,0xC0B3C359L,4294967286UL,0xC0B3C359L},{0xD1EA2908L,0xD1EA2908L,0x7E322D52L,0xA555F879L,0UL},{0xFA3AE11FL,0x9513A8B7L,1UL,0xFA3AE11FL,0xEEDE39AEL},{0x06DED90BL,0x544EC24FL,4294967295UL,4294967292UL,0x544EC24FL},{0xEEDE39AEL,0x9513A8B7L,0xBE697A0AL,0x19C157CCL,0x19C157CCL},{0xE62ACF96L,0xD1EA2908L,0xE62ACF96L,4294967295UL,0x859A0E45L},{4294967286UL,0xFA3AE11FL,0x70BDD84CL,0x852C7D00L,6UL}},{{0x768125F4L,0x06DED90BL,4294967287UL,0xA555F879L,0xD1EA2908L},{0xC0B3C359L,0xEEDE39AEL,0x70BDD84CL,6UL,0x64BBA388L},{0x06DED90BL,0xE62ACF96L,0xE62ACF96L,0x06DED90BL,9UL},{0x852C7D00L,4294967286UL,0xBE697A0AL,0x82CA4FB3L,4294967286UL},{9UL,0x768125F4L,4294967295UL,0x49D56FFFL,0x859A0E45L},{0x9513A8B7L,0xC0B3C359L,1UL,0x82CA4FB3L,0x70BDD84CL},{0xA555F879L,0x06DED90BL,0x4E5047FAL,0UL,0x768125F4L},{0xFA3AE11FL,0x64BBA388L,0x70BDD84CL,1UL,0x19C157CCL}},{{0x859A0E45L,0x49D56FFFL,4294967295UL,0x768125F4L,9UL},{0x64BBA388L,0x852C7D00L,0xECFE5F79L,0x64BBA388L,0x19C157CCL},{0x932A730DL,0x768125F4L,0x544EC24FL,0x544EC24FL,0x768125F4L},{0x19C157CCL,0xFA3AE11FL,6UL,0x82CA4FB3L,0x91D05563L},{0x06DED90BL,0x859A0E45L,4294967295UL,0xA555F879L,4294967292UL},{1UL,0x64BBA388L,0x91D05563L,0x78FA292BL,0x9513A8B7L},{0x06DED90BL,0x932A730DL,0x49D56FFFL,0x768125F4L,0x49D56FFFL},{0x19C157CCL,0x19C157CCL,0xBE697A0AL,0x9513A8B7L,0xEEDE39AEL}},{{0x932A730DL,0x06DED90BL,0x3E4D4EBDL,0x932A730DL,0x859A0E45L},{0x64BBA388L,1UL,6UL,4294967286UL,1UL},{0x859A0E45L,0x06DED90BL,6UL,4294967292UL,4294967292UL},{0xFA3AE11FL,0x19C157CCL,0xFA3AE11FL,6UL,0x82CA4FB3L},{0x768125F4L,0x932A730DL,4294967295UL,0UL,0xE62ACF96L},{0x852C7D00L,0x64BBA388L,0x71761045L,0x9513A8B7L,0x19C157CCL},{0x49D56FFFL,0x859A0E45L,4294967295UL,0xE62ACF96L,0xD1EA2908L},{0x64BBA388L,0xFA3AE11FL,0xFA3AE11FL,0x64BBA388L,0x70BDD84CL}},{{0UL,0x768125F4L,6UL,0xA555F879L,0x768125F4L},{0x70BDD84CL,0x852C7D00L,6UL,0xE438FE63L,0xC0B3C359L},{0x544EC24FL,0x8C644E42L,6UL,0x49D56FFFL,4294967287UL},{0x91D05563L,1UL,0xEEDE39AEL,1UL,0x91D05563L},{6UL,0xE62ACF96L,0x8C644E42L,0x4E5047FAL,0x932A730DL},{0x78FA292BL,0x7F07C662L,0xE438FE63L,0x91D05563L,0xECFE5F79L},{0xE62ACF96L,0x544EC24FL,0xA555F879L,0xE62ACF96L,0x932A730DL},{0xAA1D0963L,0x91D05563L,0x71761045L,0x71761045L,0x91D05563L}}};
static unsigned short g_209 = 65527UL;
static unsigned g_315 = 0UL;
static unsigned g_332 = 1UL;
static short g_334 = 0x7F47L;
static int g_443 = 0xF52205FFL;
static int g_466[1] = {0xD8DF74B6L};
static unsigned g_469 = 0UL;
static int g_519 = 4L;
static unsigned g_530 = 0x9299BDA8L;
static int g_552 = 0x0C6803B6L;
static char g_563 = 0L;
static char g_643 = 0x2EL;
static int g_725 = 0xFE74E8F9L;
static int g_732 = 1L;
static const unsigned short g_812 = 0x81F1L;
static unsigned g_879 = 0xD3E6A991L;
static unsigned g_1014 = 0x7F4F3B45L;
static int g_1086 = 0x60291B0BL;
static unsigned short g_1089[3] = {0x794EL,0x794EL,0x794EL};
static unsigned short g_1156 = 0x5DAFL;
static char g_1201 = 0L;
static unsigned short g_1205[2] = {65533UL,65533UL};



static short func_1(void);
static unsigned short func_9(unsigned char p_10, unsigned char p_11, int p_12, char p_13, char p_14);
static unsigned short func_15(char p_16, const char p_17);
static char func_20(int p_21);
static int func_38(short p_39);
static unsigned char func_40(char p_41, unsigned p_42, unsigned p_43, int p_44, unsigned p_45);
static const short func_52(unsigned char p_53, unsigned p_54, char p_55);
static short func_61(unsigned char p_62, const short p_63, short p_64, unsigned p_65, char p_66);
static unsigned func_70(char p_71, const int p_72, unsigned char p_73, unsigned p_74, char p_75);
static short func_100(char p_101, char p_102, unsigned p_103, int p_104);
static short func_1(void)
{
    unsigned short l_4[7];
    int l_5 = 0xF55E00FEL;
    int l_761 = 4L;
    unsigned char l_762 = 0x28L;
    const short l_801 = 1L;
    int l_810 = 0x3332E51EL;
    unsigned char l_811[3][10] = {{0xB4L,0xB4L,0x29L,0x3EL,0UL,0x3EL,0x29L,0xB4L,0xB4L,0x29L},{6UL,0x3EL,0xB6L,0xB6L,0x3EL,6UL,0x29L,6UL,0x3EL,0xB6L},{0x72L,0xB4L,0x72L,0xB6L,0x29L,0x29L,0xB6L,0x72L,0xB4L,0x72L}};
    unsigned l_856[3];
    unsigned short l_871 = 0x897EL;
    short l_933 = 0xE450L;
    unsigned l_966[4][9] = {{0UL,0x060B0C42L,0UL,0x060B0C42L,0UL,0x060B0C42L,0UL,0x060B0C42L,0UL},{8UL,8UL,4294967289UL,4294967289UL,8UL,8UL,4294967289UL,4294967289UL,8UL},{0x45233817L,0x060B0C42L,0x45233817L,0x060B0C42L,0x45233817L,0x060B0C42L,0x45233817L,0x060B0C42L,0x45233817L},{8UL,4294967289UL,4294967289UL,8UL,8UL,4294967289UL,4294967289UL,8UL,8UL}};
    int l_1061 = 0x9ADE721DL;
    const unsigned l_1085 = 4294967292UL;
    const unsigned short l_1088 = 6UL;
    unsigned l_1119 = 2UL;
    char l_1121[1][4][3] = {{{1L,0x87L,0x87L},{1L,0x87L,0x87L},{1L,0x87L,0x87L},{1L,0x87L,0x87L}}};
    int l_1133 = 0x42D258C4L;
    unsigned char l_1153 = 0x69L;
    short l_1271[4][10][5] = {{{0x645FL,0x9368L,(-1L),(-6L),(-6L)},{0x9368L,0x645FL,0x9368L,(-1L),(-6L)},{0L,0x5857L,(-6L),0x5857L,0L},{0x9368L,0x5857L,0x645FL,0L,0x645FL},{0x645FL,0x645FL,(-6L),0L,0xD708L},{0x5857L,0x9368L,0x9368L,0x5857L,0x645FL},{0x5857L,0L,(-1L),(-1L),0L},{0x645FL,0x9368L,(-1L),(-6L),(-6L)},{0x9368L,0x645FL,0x9368L,(-1L),(-6L)},{0L,0x5857L,(-6L),0x5857L,0L}},{{0x9368L,0x5857L,0x645FL,0L,0x645FL},{0x645FL,0x645FL,(-6L),0L,0xD708L},{0x5857L,0x9368L,0x9368L,0x5857L,0x645FL},{0x5857L,0L,(-1L),(-1L),0L},{0x645FL,0x9368L,(-1L),(-6L),0xD708L},{(-1L),0x5857L,(-1L),0x645FL,0xD708L},{(-6L),0L,0xD708L,0L,(-6L)},{(-1L),0L,0x5857L,(-6L),0x5857L},{0x5857L,0x5857L,0xD708L,(-6L),0x9368L},{0L,(-1L),(-1L),0L,0x5857L}},{{0L,(-6L),0x645FL,0x645FL,(-6L)},{0x5857L,(-1L),0x645FL,0xD708L,0xD708L},{(-1L),0x5857L,(-1L),0x645FL,0xD708L},{(-6L),0L,0xD708L,0L,(-6L)},{(-1L),0L,0x5857L,(-6L),0x5857L},{0x5857L,0x5857L,0xD708L,(-6L),0x9368L},{0L,(-1L),(-1L),0L,0x5857L},{0L,(-6L),0x645FL,0x645FL,(-6L)},{0x5857L,(-1L),0x645FL,0xD708L,0xD708L},{(-1L),0x5857L,(-1L),0x645FL,0xD708L}},{{(-6L),0L,0xD708L,0L,(-6L)},{(-1L),0L,0x5857L,(-6L),0x5857L},{0x5857L,0x5857L,0xD708L,(-6L),0x9368L},{0L,(-1L),(-1L),0L,0x5857L},{0x9368L,(-1L),(-6L),(-6L),(-1L)},{0xD708L,0L,(-6L),0x645FL,0x645FL},{0L,0xD708L,0L,(-6L),0x645FL},{(-1L),0x9368L,0x645FL,0x9368L,(-1L)},{0L,0x9368L,0xD708L,(-1L),0xD708L},{0xD708L,0xD708L,0x645FL,(-1L),0x5857L}}};
    short l_1288 = (-1L);
    unsigned short l_1311 = 65526UL;
    short l_1312[5];
    const unsigned l_1320 = 4294967292UL;
    char l_1321 = 1L;
    int i, j, k;
    for (i = 0; i < 7; i++)
        l_4[i] = 0x5286L;
    for (i = 0; i < 3; i++)
        l_856[i] = 2UL;
    for (i = 0; i < 5; i++)
        l_1312[i] = (-10L);
    if ((((safe_add_func_int8_t_s_s((l_5 = l_4[5]), (g_6[0][0] = l_4[6]))) ^ (safe_mod_func_uint16_t_u_u(func_9((func_15((safe_mul_func_uint8_t_u_u(0x27L, (g_563 = func_20(l_4[5])))), l_4[0]) < g_466[0]), (l_761 = (g_466[0] <= g_732)), l_4[5], g_466[0], l_762), 0x081DL))) <= l_4[5]))
    {
        char l_769 = 0L;
        unsigned char l_776 = 0x1DL;
        int l_778 = (-1L);
        int l_798 = 0L;
        for (g_119 = 0; (g_119 == 15); g_119 = safe_add_func_int16_t_s_s(g_119, 6))
        {
            unsigned l_777[4][4][1] = {{{0x4865DD8DL},{0x7D42F976L},{0x319D5003L},{0x7D42F976L}},{{0x4865DD8DL},{0x4865DD8DL},{0x7D42F976L},{0x319D5003L}},{{0x7D42F976L},{0x4865DD8DL},{0x4865DD8DL},{0x7D42F976L}},{{0x319D5003L},{0x7D42F976L},{0x4865DD8DL},{0x4865DD8DL}}};
            int l_790[3][7][9] = {{{0xFB6A3C02L,5L,0x81AA63BDL,0x5B4895E2L,0xA2705DFCL,0L,0xA9390B91L,0x81AA63BDL,0L},{0x812F2E6AL,(-4L),0x3F8E983EL,0x460345F6L,0x75E0D257L,0xE4E7661FL,0L,9L,0x460345F6L},{0x812F2E6AL,0x83E285B1L,0xA89E1C04L,0xE4E7661FL,1L,0x3F8E983EL,8L,8L,0x3F8E983EL},{0xFB6A3C02L,0x81AA63BDL,0xB5874D3CL,0x81AA63BDL,0xFB6A3C02L,(-1L),0x75E0D257L,(-3L),(-7L)},{0x81AA63BDL,1L,0L,(-3L),0x2678F5C9L,0x3C905A4AL,(-4L),0x5B4895E2L,(-1L)},{0L,0L,0x81AA63BDL,0x68F7A49AL,0x37FC14EEL,(-10L),(-7L),0x8062C5EFL,1L},{0xA89E1C04L,0x5447027EL,0xA2705DFCL,0x37FC14EEL,(-1L),0x61BA316EL,0x68F7A49AL,0x81AA63BDL,0L}},{{0x460345F6L,(-1L),0x732DE092L,(-1L),0L,0x3C905A4AL,0L,5L,0x83E285B1L},{0x888D58F1L,(-1L),0xBAFF7B5FL,0x732DE092L,0x2678F5C9L,(-1L),5L,1L,5L},{0L,0x5447027EL,0x812F2E6AL,0x812F2E6AL,0x5447027EL,0L,0x8871A01EL,0xBAFF7B5FL,9L},{(-7L),(-1L),0L,0x3F8E983EL,0xFB6A3C02L,0xEAA06000L,(-1L),0x0CA385C0L,1L},{0x61BA316EL,0xB5874D3CL,0x75E0D257L,0x37FC14EEL,0x8062C5EFL,0x83E285B1L,0x8871A01EL,0x75E0D257L,0x732DE092L},{(-1L),0x0CA385C0L,0xA9390B91L,8L,0x68F7A49AL,0x3C905A4AL,5L,(-1L),8L},{0x2678F5C9L,1L,0x3F8E983EL,5L,(-4L),1L,0L,1L,0xA9390B91L}},{{0xA9390B91L,6L,0x3F8E983EL,9L,0x5B4895E2L,0L,0x68F7A49AL,0L,0L},{(-7L),0x888D58F1L,0xA9390B91L,0L,0xA9390B91L,0x888D58F1L,(-7L),0x37FC14EEL,6L},{0xA2705DFCL,0xFB6A3C02L,0L,0L,1L,0L,0x8062C5EFL,0L,0x812F2E6AL},{6L,0L,0x812F2E6AL,(-1L),1L,0x5447027EL,0xE4E7661FL,1L,0xB5874D3CL},{(-7L),0xE4E7661FL,(-7L),0xBAFF7B5FL,(-1L),0x81AA63BDL,0x812F2E6AL,(-4L),0x3F8E983EL},{9L,1L,0L,(-7L),(-1L),0x3F8E983EL,0x37FC14EEL,0x888D58F1L,(-4L)},{0xA89E1C04L,0x3C905A4AL,9L,(-7L),0L,0xA89E1C04L,0xA2705DFCL,0xE4E7661FL,(-10L)}}};
            int l_791 = 1L;
            int i, j, k;
            l_778 = (safe_lshift_func_uint16_t_u_u((g_99 = ((safe_rshift_func_int8_t_s_u(((g_164 = l_769) != g_22[3]), (l_777[0][2][0] = ((safe_rshift_func_uint8_t_u_s((safe_mul_func_int16_t_s_s(((0xD7L >= g_725) ^ (+(l_769 ^ 0x6E8BL))), (g_334 = g_179))), g_197[2][6][2])) < (safe_add_func_uint16_t_u_u(func_9((g_105 = g_197[5][5][3]), l_4[5], l_761, l_776, g_643), g_732)))))) > 255UL)), 6));
            for (g_178 = 0; (g_178 <= 0); g_178 += 1)
            {
                unsigned l_783 = 6UL;
                int i;
                if (g_466[g_178])
                    break;
                l_791 = ((l_778 | (0xDB2CL <= 0x318CL)) | (g_105 = (safe_lshift_func_uint16_t_u_u(((g_99 = (l_783 || ((-1L) > (g_22[3] = (safe_rshift_func_int8_t_s_s(g_466[g_178], 4)))))) | (g_25 >= ((safe_mod_func_uint8_t_u_u(l_778, (~(((l_790[2][1][2] = (safe_add_func_uint8_t_u_u(g_197[5][5][3], 0L))) ^ g_466[0]) > l_761)))) >= 0x397DL))), l_777[0][2][0]))));
                for (g_82 = 0; (g_82 >= 0); g_82 -= 1)
                {
                    int i, j, k;
                    l_5 = (-4L);
                    g_80 = l_777[(g_82 + 1)][(g_82 + 1)][g_178];
                }
            }
        }
        g_725 = (safe_lshift_func_int8_t_s_u((((safe_lshift_func_uint16_t_u_u(g_466[0], 7)) == l_5) ^ (l_798 = (safe_mul_func_int8_t_s_s(1L, g_22[3])))), 5));
        g_80 = 9L;
    }
    else
    {
        g_443 = ((safe_rshift_func_uint16_t_u_s(g_119, 15)) < g_197[5][5][3]);
    }
    if ((((0xCDL & l_5) == (g_725 = (l_801 & (func_52(g_6[2][1], ((safe_mul_func_uint8_t_u_u((safe_mod_func_int16_t_s_s(((safe_mul_func_uint8_t_u_u(((-1L) == (l_761 >= ((l_810 = func_40(l_5, l_5, (safe_mul_func_uint8_t_u_u((!(+func_20(g_466[0]))), l_4[5])), l_762, g_552)) != g_732))), l_4[5])) > l_762), 0xFB85L)), l_811[0][1])) <= l_762), l_4[5]) < g_812)))) >= l_811[0][1]))
    {
        short l_815[5][6] = {{(-1L),0xA20DL,1L,(-1L),0x27AAL,0x27AAL},{0x62C6L,0xA20DL,0xA20DL,0x62C6L,0x27AAL,1L},{0x8817L,0xA20DL,0x27AAL,0x8817L,0x27AAL,0xA20DL},{(-1L),0xA20DL,1L,(-1L),0x27AAL,0x27AAL},{0x62C6L,0xA20DL,0xA20DL,0x62C6L,0x27AAL,1L}};
        int l_816 = 1L;
        int l_839[7] = {0xFC815DA4L,0xFC815DA4L,0xFC815DA4L,0xFC815DA4L,0xFC815DA4L,0xFC815DA4L,0xFC815DA4L};
        int l_860 = 0x23AD65F4L;
        short l_877[9][4] = {{1L,0xD4D0L,1L,3L},{6L,(-2L),0x20E1L,(-2L)},{(-2L),1L,1L,(-2L)},{1L,(-2L),(-4L),(-4L)},{1L,1L,6L,3L},{1L,(-1L),(-4L),1L},{0x20E1L,3L,0x20E1L,(-4L)},{1L,3L,6L,1L},{3L,(-1L),(-1L),3L}};
        unsigned short l_901 = 7UL;
        unsigned l_904[4][3] = {{0xF402BF8AL,0xF402BF8AL,0xF402BF8AL},{0x2B9D8ED2L,0x2B9D8ED2L,0x2B9D8ED2L},{0xF402BF8AL,0xF402BF8AL,0xF402BF8AL},{0x2B9D8ED2L,0x2B9D8ED2L,0x2B9D8ED2L}};
        int l_1065[7] = {0L,0L,0L,0L,0L,0L,0L};
        int i, j;
        l_816 = (safe_mod_func_uint32_t_u_u((g_6[0][0] || (g_105 = (g_22[3] = l_815[4][5]))), 0x2465A8E1L));
        for (g_332 = 0; (g_332 >= 25); g_332++)
        {
            unsigned l_829 = 0x6F0D186EL;
            int l_836 = 0x955D430AL;
            int l_840[9] = {(-6L),(-6L),0xE0E8470EL,(-6L),(-6L),0xE0E8470EL,(-6L),(-6L),0xE0E8470EL};
            unsigned short l_870 = 0xA344L;
            unsigned l_880 = 4294967290UL;
            const int l_889 = 0x04E3F204L;
            short l_934 = (-8L);
            unsigned short l_964 = 0xB8C8L;
            unsigned l_984 = 0x9999852BL;
            char l_1050 = 0L;
            unsigned l_1052 = 0x4FBD9AA3L;
            unsigned char l_1064 = 0xF0L;
            int i;
            if ((safe_lshift_func_uint16_t_u_s(((l_810 <= l_815[4][3]) || (safe_mod_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_u((safe_sub_func_int32_t_s_s(g_22[3], (safe_add_func_int16_t_s_s(0x3487L, ((g_197[4][3][2] = g_119) ^ 0x91053611L))))), (func_9((g_105 = g_552), l_829, g_334, l_816, l_829) == g_725))), g_812))), 13)))
            {
                int l_830 = 1L;
                char l_831 = 4L;
                char l_849[5][10][1] = {{{0x39L},{0L},{(-1L)},{0L},{0x39L},{(-6L)},{(-1L)},{(-6L)},{0x39L},{0L}},{{(-1L)},{0L},{0x39L},{(-6L)},{(-1L)},{(-6L)},{0x39L},{0L},{(-1L)},{0L}},{{0x39L},{(-6L)},{(-1L)},{(-6L)},{0x39L},{0L},{(-1L)},{0L},{0x39L},{(-6L)}},{{(-1L)},{(-6L)},{0x39L},{0L},{(-1L)},{0L},{0x39L},{(-6L)},{(-1L)},{(-6L)}},{{0x39L},{0L},{(-1L)},{0L},{0x39L},{(-6L)},{(-1L)},{(-6L)},{0x39L},{0L}}};
                int i, j, k;
                l_816 = ((-8L) & l_830);
                g_182 = ((l_831 = g_25) > (!l_829));
                if ((l_840[7] = ((+g_22[0]) < (safe_mul_func_int16_t_s_s((l_816 = (((safe_sub_func_uint32_t_u_u(l_811[0][1], (l_836 = 0xA6D7E3F6L))) == (safe_lshift_func_int8_t_s_s(g_469, 7))) & 0x090F8FCBL)), (l_839[0] = l_811[0][9]))))))
                {
                    int l_848 = 0xF96B3B99L;
                    if (g_120)
                        break;
                    for (l_816 = 2; (l_816 <= 8); l_816 += 1)
                    {
                        int i;
                        g_80 = (safe_rshift_func_uint8_t_u_u(((l_840[l_816] = g_22[3]) <= ((((l_836 < ((l_5 = (safe_add_func_int32_t_s_s((safe_mul_func_int16_t_s_s((g_82 < (l_829 & ((safe_unary_minus_func_int32_t_s(((g_120 = l_848) | (0xA2L ^ (~g_725))))) >= 0L))), 0xEE52L)), g_315))) < g_315)) && l_849[2][0][0]) != l_815[2][2]) | 247UL)), l_839[4]));
                    }
                    for (l_829 = 16; (l_829 > 35); l_829 = safe_add_func_int8_t_s_s(l_829, 1))
                    {
                        char l_857 = (-10L);
                        l_856[1] = ((safe_rshift_func_int16_t_s_s(g_120, 9)) == ((safe_mod_func_uint32_t_u_u((l_849[3][6][0] ^ g_530), l_848)) || l_839[0]));
                        l_857 = (g_80 = (-1L));
                    }
                    l_839[0] = (safe_add_func_int8_t_s_s(l_849[2][0][0], 0UL));
                }
                else
                {
                    for (l_810 = 0; l_810 < 9; l_810 += 1)
                    {
                        l_840[l_810] = 0x55783059L;
                    }
                    g_443 = (!(l_840[7] | l_860));
                }
                for (g_519 = 0; g_519 < 7; g_519 += 1)
                {
                    l_839[g_519] = 3L;
                }
            }
            else
            {
                unsigned l_861 = 0x6DB06533L;
                int l_876 = (-4L);
                unsigned char l_891 = 0x14L;
                short l_965 = 1L;
                if (((7UL > (g_80 > l_861)) <= (g_443 = (safe_add_func_int8_t_s_s((func_40(l_801, g_28, (safe_sub_func_uint16_t_u_u((safe_mod_func_int8_t_s_s(((-10L) && ((safe_add_func_uint16_t_u_u((func_9(l_870, ((g_552 = (!(-8L))) <= (~l_861)), g_469, l_861, g_315) | g_28), g_99)) > 0x80L)), l_871)), g_466[0])), g_466[0], l_840[7]) & g_22[4]), g_179)))))
                {
                    unsigned l_875 = 2UL;
                    for (g_334 = 6; (g_334 >= 1); g_334 -= 1)
                    {
                        g_80 = g_334;
                        g_725 = (l_880 = (l_836 = func_70(func_61(g_725, func_9((safe_lshift_func_uint16_t_u_s(((func_40((l_860 = l_840[7]), (l_861 > (safe_unary_minus_func_int32_t_s(l_875))), func_61(l_871, (l_877[5][3] = (l_876 = g_80)), g_105, (safe_unary_minus_func_int8_t_s(l_816)), l_836), g_182, l_861) <= g_334) == l_861), 14)), g_120, l_840[2], g_879, l_815[3][2]), l_861, l_815[4][1], l_811[0][1]), g_332, l_861, l_829, g_466[0])));
                        g_28 = 0xD95D0D1CL;
                    }
                    g_443 = 0L;
                    for (g_643 = (-22); (g_643 > (-1)); ++g_643)
                    {
                        unsigned char l_890 = 249UL;
                        l_860 = ((g_552 | 2UL) >= (g_563 = (((g_466[0] | (safe_rshift_func_uint8_t_u_u(l_875, 2))) & func_70((safe_mul_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s((g_643 >= func_61(l_761, l_889, (l_836 <= (func_40(l_839[4], l_875, l_880, l_876, g_563) ^ 0xF8L)), l_890, g_197[5][5][3])), 6)), l_816)), l_890, l_877[5][3], l_891, l_890)) == (-5L))));
                    }
                    for (g_732 = (-1); (g_732 != (-26)); --g_732)
                    {
                        char l_900 = (-1L);
                        g_182 = (safe_add_func_uint32_t_u_u(func_9(func_70(l_875, l_877[5][3], g_332, (g_197[3][6][3] = (safe_mul_func_int16_t_s_s(0xD6A7L, (1L == (safe_rshift_func_int8_t_s_s((0UL != (g_530 != ((l_839[0] = g_99) > (l_761 = (((l_840[2] = l_856[1]) < l_900) > g_182))))), l_836)))))), l_901), l_4[5], g_120, g_732, l_816), 0x2E7E5D8BL));
                        if (g_879)
                            break;
                        if (l_839[2])
                            break;
                        return g_466[0];
                    }
                }
                else
                {
                    g_28 = (safe_sub_func_uint32_t_u_u(l_836, g_80));
                    if (g_22[0])
                        break;
                }
                if (((g_82 || (l_904[2][2] = g_28)) < ((safe_lshift_func_int8_t_s_u(l_876, g_530)) != ((safe_rshift_func_uint8_t_u_u(l_801, 4)) | l_836))))
                {
                    const unsigned l_915 = 0x3D0FAF01L;
                    unsigned l_926 = 0xA6052735L;
                    g_552 = (g_28 = (safe_sub_func_int32_t_s_s((safe_add_func_int16_t_s_s((safe_lshift_func_int16_t_s_u(g_552, 6)), (0x2C1EBBD7L > l_876))), (1L && (g_725 < l_915)))));
                    g_25 = func_70((g_28 <= ((safe_mul_func_int8_t_s_s((safe_mul_func_uint16_t_u_u(((safe_rshift_func_uint16_t_u_s((safe_sub_func_int16_t_s_s((safe_lshift_func_int16_t_s_s((g_334 = 0x5026L), ((l_880 != 0x41D8L) | (l_926 && 0xCAF479F9L)))), l_840[1])), 8)) & (safe_lshift_func_uint8_t_u_u((+1UL), (safe_mod_func_uint8_t_u_u(func_40((safe_mul_func_uint8_t_u_u(l_933, g_6[0][0])), l_870, l_876, l_934, g_6[2][4]), g_563))))), 0x5512L)), l_904[1][0])) > l_840[7])), g_119, g_182, g_22[3], l_839[0]);
                    l_860 = (safe_add_func_int8_t_s_s(func_61(func_100(l_870, (((safe_mod_func_uint16_t_u_u((((g_334 = func_9(l_891, l_4[5], (func_70(((((l_5 < 3L) & (l_876 = (g_6[2][2] && func_61((l_870 == 0xC5BAL), g_443, g_530, g_332, g_469)))) > l_915) >= l_933), g_732, l_4[3], g_332, l_934) < 0UL), l_870, g_6[2][7])) != g_179) | l_815[4][5]), l_829)) || l_926) != 0x3B77L), l_856[1], l_761), l_926, l_761, l_926, l_871), g_732));
                    for (g_182 = 0; (g_182 != (-22)); g_182--)
                    {
                        short l_953[6] = {0L,1L,0L,0L,1L,0L};
                        int i;
                        g_25 = (g_6[0][0] & ((l_876 = ((safe_lshift_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s((safe_rshift_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s(g_812, 5)), 3)), (((g_178 & (safe_rshift_func_uint16_t_u_u((func_40((l_926 <= ((safe_mul_func_int16_t_s_s(func_61((((l_953[1] > l_840[2]) | 0xF5L) > (safe_rshift_func_uint8_t_u_s(func_40((safe_rshift_func_uint8_t_u_s((safe_mod_func_uint16_t_u_u((g_209 = (safe_add_func_int16_t_s_s((g_119 = (safe_sub_func_uint8_t_u_u((g_22[2] = (g_105 = func_61(g_80, g_120, g_879, l_891, g_105))), l_801))), g_197[2][4][1]))), 0xAD14L)), 1)), l_915, g_879, l_840[7], l_915), g_28))), g_334, g_120, l_964, l_901), g_879)) || 1UL)), g_164, g_643, l_876, l_860) >= l_953[3]), l_953[1]))) ^ g_315) >= l_965))), 11)) == g_732)) == g_6[0][0]));
                        if (g_25)
                            break;
                        l_836 = l_953[4];
                        if (l_840[7])
                            break;
                    }
                }
                else
                {
                    const int l_983 = (-2L);
                    l_761 = l_933;
                    l_839[5] = (l_870 & ((l_880 ^ l_966[1][1]) == (safe_rshift_func_uint16_t_u_s((safe_rshift_func_uint16_t_u_u((l_880 != ((safe_lshift_func_uint8_t_u_s((g_812 > 0x2CL), ((safe_mul_func_int8_t_s_s((safe_add_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u(func_61((((safe_rshift_func_uint8_t_u_u(((safe_add_func_int16_t_s_s(l_889, func_100(l_901, func_70(l_965, g_466[0], l_810, g_182, g_6[0][0]), g_530, g_812))) > g_466[0]), 2)) && l_839[0]) | 9UL), l_983, l_984, l_965, g_563), l_815[4][5])), 0xDC74L)), l_891)) > 65528UL))) <= 65529UL)), 14)), 12))));
                    l_816 = g_725;
                }
                l_5 = (l_840[7] = g_178);
            }
            g_28 = (~(g_99 < l_904[2][2]));
            for (g_879 = 18; (g_879 > 32); ++g_879)
            {
                unsigned short l_1000[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_1000[i] = 0x699AL;
                g_552 = (g_182 = ((g_178 = g_164) == (l_860 = ((safe_rshift_func_int8_t_s_s(0x98L, (safe_sub_func_int32_t_s_s((((safe_sub_func_int16_t_s_s((safe_sub_func_uint16_t_u_u((safe_unary_minus_func_int32_t_s((l_5 = l_761))), ((l_840[7] = g_466[0]) ^ (l_4[5] > (((g_119 = (((g_182 && ((l_836 = ((safe_sub_func_uint8_t_u_u(((safe_rshift_func_int16_t_s_s(l_1000[1], l_1000[0])) > 1L), l_880)) & g_443)) || g_6[2][0])) > g_28) && l_829)) && g_725) != g_732))))), l_839[3])) < l_839[3]) & l_1000[2]), 0x0097E58BL)))) & 1UL))));
                for (g_552 = 0; (g_552 <= 15); g_552 = safe_add_func_uint32_t_u_u(g_552, 3))
                {
                    if (g_443)
                        break;
                }
                for (g_82 = 0; (g_82 == 13); ++g_82)
                {
                    int l_1007[5][3][8] = {{{0xFF243C0CL,0xD41B690AL,0xDF8D2AABL,0xDF8D2AABL,0xD41B690AL,0xFF243C0CL,0L,0xA0862539L},{0xD41B690AL,0xFF243C0CL,0L,0xA0862539L,0x7C695014L,0xDF8D2AABL,0L,0x7C695014L},{0xA0862539L,0xD6305D1DL,0xAB1CCC11L,0xA0862539L,6L,1L,6L,0xA0862539L}},{{(-8L),6L,(-8L),0xDF8D2AABL,0x123FD669L,0L,0xDF8D2AABL,0xD6305D1DL},{6L,0x98C8C2ACL,0L,0xD41B690AL,(-1L),0x7C695014L,0x123FD669L,0x98C8C2ACL},{6L,0xD6305D1DL,(-1L),0x123FD669L,0x123FD669L,(-1L),0xD6305D1DL,6L}},{{(-8L),0xA0862539L,0x98C8C2ACL,0x7C695014L,6L,0xFF243C0CL,(-8L),0xD6305D1DL},{0xA0862539L,0x7C695014L,0xDF8D2AABL,0L,0x7C695014L,0xFF243C0CL,0x123FD669L,0xFF243C0CL},{0xD41B690AL,0xA0862539L,4L,0xA0862539L,0xD41B690AL,(-1L),0L,0xD41B690AL}},{{0xFF243C0CL,0xD6305D1DL,(-8L),0xFF243C0CL,6L,0x7C695014L,0x98C8C2ACL,0xA0862539L},{0xD6305D1DL,0x98C8C2ACL,(-8L),0L,0L,0xF1D7CAFFL,0x98C8C2ACL,(-1L)},{0xFF243C0CL,0xFF243C0CL,0x8109DFDCL,0L,(-8L),0x123FD669L,(-1L),0xFF243C0CL}},{{0x1D5C546DL,0xDF8D2AABL,2L,0xF1D7CAFFL,(-1L),2L,(-1L),0xFF243C0CL},{0xDF8D2AABL,1L,0x1D5C546DL,0L,0x1D5C546DL,1L,0xDF8D2AABL,(-1L)},{0x7C695014L,0L,6L,0x98C8C2ACL,0L,0xD41B690AL,(-1L),0x7C695014L}}};
                    int l_1030 = 0L;
                    int i, j, k;
                    g_443 = (safe_rshift_func_int8_t_s_u((func_40((g_164 = func_9(g_552, l_1007[2][1][5], g_6[2][2], (g_643 = g_519), (l_840[4] = l_1007[2][1][5]))), (safe_mul_func_int16_t_s_s(((safe_mod_func_uint32_t_u_u((+l_801), (safe_mul_func_int16_t_s_s((-1L), func_70(l_904[0][1], g_6[0][0], g_1014, l_1000[1], l_836))))) >= g_563), 0xDC6EL)), g_1014, l_904[2][2], g_334) & l_901), g_552));
                    for (g_99 = 0; (g_99 < 43); ++g_99)
                    {
                        unsigned l_1023 = 0x49682392L;
                        g_28 = ((safe_lshift_func_uint16_t_u_u((l_1030 = ((safe_lshift_func_uint16_t_u_s((0x1E04C3CBL < ((g_164 == (((safe_lshift_func_uint16_t_u_s(g_530, (g_334 = ((l_1023 != (g_179 = (safe_lshift_func_int16_t_s_u(0xF068L, 15)))) < (g_99 | (g_209 = (safe_lshift_func_int16_t_s_s(g_80, 3)))))))) >= ((l_901 != (safe_add_func_int32_t_s_s(l_1000[1], l_904[2][0]))) <= l_1007[3][0][6])) == 0xE347L)) != g_197[5][5][3])), 13)) == 0x71B6L)), 6)) != 0UL);
                    }
                    for (g_28 = 26; (g_28 == (-16)); g_28 = safe_sub_func_uint32_t_u_u(g_28, 4))
                    {
                        unsigned l_1049 = 0x37B07981L;
                        int l_1051[9] = {0xA1D04C5DL,1L,0xA1D04C5DL,0xA1D04C5DL,1L,0xA1D04C5DL,0xA1D04C5DL,1L,0xA1D04C5DL};
                        int i;
                        l_1051[8] = ((safe_lshift_func_uint8_t_u_s(func_61(g_80, g_519, (safe_add_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_s((safe_add_func_uint16_t_u_u((0x65L | ((l_1030 = (safe_rshift_func_uint8_t_u_u((func_40(g_725, ((safe_lshift_func_int16_t_s_u((((g_197[2][4][1] = g_519) != (65529UL & (func_40((safe_sub_func_uint32_t_u_u(((0L & (safe_rshift_func_int16_t_s_u(g_519, func_40(g_332, g_28, g_334, l_1000[0], l_5)))) || g_315), l_889)), g_178, g_332, l_815[4][5], l_1049) ^ g_519))) == l_1030), g_105)) < g_643), l_815[2][1], l_1049, l_761) < l_1050), g_105))) | 0x9BC1L)), l_839[0])), 12)) <= g_1014), 1L)), l_1000[1], g_105), g_643)) & l_889);
                        g_80 = l_1052;
                    }
                }
            }
            l_761 = (safe_lshift_func_int16_t_s_u((0x2CL && ((safe_lshift_func_int16_t_s_s(func_61(((g_22[2] = ((safe_add_func_uint32_t_u_u((g_182 ^ (safe_mod_func_int16_t_s_s((l_840[3] = 0x8421L), 0x6C47L))), g_120)) & ((l_836 = func_61(l_1061, g_315, g_466[0], ((l_839[0] = (safe_mod_func_uint32_t_u_u((l_904[2][2] > 255UL), l_816))) == g_80), l_933)) ^ l_811[0][1]))) | l_1064), g_105, g_334, l_1061, l_901), 3)) | l_816)), l_877[5][3]));
        }
        g_80 = l_1065[3];
    }
    else
    {
        unsigned short l_1082 = 0UL;
        int l_1120 = 0x6B3E8D68L;
        char l_1159 = 2L;
        unsigned char l_1176 = 7UL;
        unsigned short l_1194 = 65535UL;
        int l_1209 = 0x9F6A2366L;
        for (g_25 = 1; (g_25 <= 4); g_25 += 1)
        {
            unsigned l_1087[6];
            int l_1105 = 0x9D5DFC62L;
            int l_1106 = (-3L);
            int i;
            for (i = 0; i < 6; i++)
                l_1087[i] = 0x27565A21L;
            if ((safe_sub_func_int32_t_s_s(((safe_mul_func_uint8_t_u_u((g_1086 = (((safe_lshift_func_int8_t_s_s((safe_add_func_int8_t_s_s(g_563, (g_105 = (safe_mod_func_uint8_t_u_u((+(g_22[g_25] = (safe_mul_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u(((g_812 || (((safe_mul_func_int8_t_s_s(func_61(l_1082, l_762, l_1082, (safe_mul_func_uint8_t_u_u(0UL, g_209)), g_725), l_1082)) <= l_856[1]) > 0xBBF0685DL)) >= g_443), l_871)), l_1085)))), 2L))))), 6)) == 0xAEL) | 0xDFFF2431L)), l_1087[2])) >= l_933), l_1088)))
            {
                return g_1089[2];
            }
            else
            {
                unsigned l_1090 = 0x130A612CL;
                l_1090 = l_1087[1];
                for (g_332 = 1; (g_332 <= 5); g_332 += 1)
                {
                    for (g_182 = 5; (g_182 >= 0); g_182 -= 1)
                    {
                        int i;
                        l_1061 = (((((255UL | 0xCBL) ^ l_1087[g_332]) == l_1087[g_332]) <= (0x1D6AL >= 0L)) != ((g_6[1][2] == (g_1014 == (safe_lshift_func_uint16_t_u_s((safe_sub_func_int32_t_s_s((g_197[5][5][3] >= 0x675909A6L), l_1082)), 5)))) == l_1090));
                        return g_179;
                    }
                }
                g_80 = 0x58251F0EL;
            }
            g_28 = (g_552 = g_643);
            g_552 = (l_1106 = ((((!(l_1061 = (g_182 = ((g_332 | ((safe_rshift_func_uint16_t_u_s(((safe_rshift_func_int16_t_s_u(l_1082, 6)) == (-7L)), 15)) || (safe_add_func_int16_t_s_s(0x5213L, ((safe_lshift_func_uint8_t_u_u(255UL, 4)) < g_334))))) < ((0x60434CF7L & g_119) != (safe_lshift_func_uint16_t_u_s((0xD93E8C88L || l_801), l_966[0][8]))))))) & l_1105) & 1UL) < l_1105));
        }
        g_552 = ((safe_sub_func_uint8_t_u_u((safe_add_func_uint16_t_u_u(((l_1088 >= (l_1088 == (safe_mul_func_uint16_t_u_u((g_99 = (+65535UL)), (~g_119))))) ^ (~(safe_lshift_func_int16_t_s_u((l_1120 = (safe_mod_func_int16_t_s_s(((safe_add_func_uint8_t_u_u(0x78L, ((l_1119 == (1L != g_164)) | g_164))) | 0x22DEL), 0xD294L))), g_182)))), l_1082)), g_315)) < 3UL);
        if (l_1121[0][1][0])
        {
            short l_1122 = (-1L);
            int l_1135 = 0x338174DFL;
            unsigned char l_1208 = 0xE9L;
            char l_1236 = 1L;
            short l_1251 = (-4L);
            int l_1268 = 0x207216A5L;
            for (g_119 = 4; (g_119 >= 0); g_119 -= 1)
            {
                unsigned l_1134 = 0xF3105094L;
                unsigned l_1136 = 0x5EBFF6FAL;
                int l_1154 = 0x71978ED8L;
                int l_1162[7] = {(-10L),0xA9DCD5E6L,(-10L),(-10L),0xA9DCD5E6L,(-10L),(-10L)};
                int l_1175 = 0x25FA8FA8L;
                int l_1183 = 0x85E9DB54L;
                int l_1245 = 0x094D2FD2L;
                char l_1284[10][3] = {{0L,0L,(-8L)},{0xB1L,0xB1L,(-6L)},{0L,0L,(-8L)},{0xB1L,0xB1L,(-6L)},{0L,0L,(-8L)},{0xB1L,0xB1L,(-6L)},{0L,0L,(-8L)},{0xB1L,0xB1L,(-6L)},{0L,0L,(-8L)},{0xB1L,0xB1L,(-6L)}};
                short l_1287[1][4][3] = {{{0xEFF2L,0L,0xEFF2L},{(-2L),(-2L),(-2L)},{0xEFF2L,0L,0xEFF2L},{(-2L),(-2L),(-2L)}}};
                int i, j, k;
                l_1135 = ((l_1134 = (func_9(((g_80 = 0x6E781C22L) > l_1122), (g_22[3] = ((l_1120 = ((g_443 || (safe_mul_func_uint16_t_u_u(0x508EL, (((1L < ((g_732 ^ 0xA669L) == (((safe_lshift_func_uint16_t_u_u((safe_add_func_uint32_t_u_u(((safe_add_func_int8_t_s_s(g_1089[2], (safe_mod_func_int8_t_s_s((((+0xF5E2L) ^ g_552) & 0x42D6L), g_443)))) && l_856[1]), g_1089[1])), l_1122)) || l_1122) || (-5L)))) || l_1133) ^ g_1089[1])))) == g_197[5][5][3])) <= 255UL)), l_1082, l_1122, g_732) <= 0xF935L)) && 0UL);
                if ((l_1136 = g_519))
                {
                    const short l_1155 = 1L;
                    int i;
                    for (l_5 = 4; (l_5 >= 0); l_5 -= 1)
                    {
                        int l_1139[6][7];
                        short l_1152 = 0x210FL;
                        int i, j;
                        for (i = 0; i < 6; i++)
                        {
                            for (j = 0; j < 7; j++)
                                l_1139[i][j] = 0x8B5BE3F7L;
                        }
                        g_725 = (safe_lshift_func_uint16_t_u_s(func_61(func_61(l_1139[1][2], (g_1156 = (g_334 = func_70((g_178 = (safe_lshift_func_int8_t_s_s((g_563 = (safe_add_func_uint8_t_u_u((safe_mul_func_int8_t_s_s(((safe_mul_func_int8_t_s_s(((l_810 = g_178) != func_40((g_879 < (safe_add_func_uint8_t_u_u((!((((safe_mod_func_int8_t_s_s((((l_1154 = ((func_70((g_197[5][5][3] ^ (((l_1082 | l_1152) != func_9(l_1122, l_1136, l_1139[1][2], l_1153, l_1082)) | l_5)), g_1089[2], g_732, g_334, g_332) && l_1121[0][3][2]) <= g_179)) || l_1155) || g_209), g_82)) == l_4[5]) && (-1L)) <= g_563)), g_119))), g_334, g_563, l_1120, l_1122)), g_1014)) < l_1136), 0x69L)), (-7L)))), 5))), l_1155, g_28, l_1122, l_1085))), g_879, l_1155, g_443), l_1139[4][2], l_1155, l_1136, g_1086), 14));
                        g_443 = l_1082;
                        l_1154 = l_1122;
                    }
                    for (g_725 = 0; (g_725 <= 2); g_725 += 1)
                    {
                        int i, j;
                        g_28 = func_40((safe_mul_func_int16_t_s_s(4L, func_61(g_6[g_725][(g_119 + 2)], func_70(l_811[g_725][(g_725 + 5)], g_22[g_725], g_22[(g_725 + 1)], (l_1061 = ((func_61(l_1159, (g_643 ^ (((safe_mod_func_int16_t_s_s(g_197[1][6][0], (func_40(g_563, l_1122, g_28, g_164, l_1135) | 0x6E49L))) ^ l_1155) < 7UL)), l_1159, l_1155, l_1135) <= l_811[g_725][(g_725 + 5)]) & g_25)), g_209), l_811[g_725][(g_725 + 5)], l_1155, l_1082))), g_1156, l_1120, g_197[5][5][3], g_28);
                        g_182 = g_552;
                        g_182 = (l_1162[3] != 1UL);
                    }
                    l_761 = (safe_rshift_func_int16_t_s_u((l_1120 <= 2UL), (l_4[(g_119 + 2)] = ((l_1154 = (((1L != g_552) || (l_1162[6] | (safe_sub_func_int32_t_s_s(func_61(g_164, l_1135, l_1162[3], l_1162[6], g_1014), g_732)))) >= g_1086)) & g_519))));
                    if ((func_70(l_1134, (safe_mul_func_int16_t_s_s(g_1156, g_99)), (((safe_sub_func_uint32_t_u_u(((safe_sub_func_int8_t_s_s(func_9(((((0L >= (l_1061 <= ((l_5 = g_6[0][0]) >= (safe_add_func_int16_t_s_s(0x22D1L, (g_732 & ((0x67D0L && 0x16D7L) & g_469))))))) <= l_1175) < g_725) == 0L), g_80, l_1176, g_119, l_4[(g_119 + 2)]), g_6[0][0])) < g_469), g_879)) == g_209) > g_725), l_966[0][5], l_1176) == (-6L)))
                    {
                        g_725 = ((0L | 0xD0F3L) && func_70((safe_sub_func_int32_t_s_s(l_1176, (safe_mod_func_uint32_t_u_u((g_332 | func_70(g_466[0], ((g_519 != (-1L)) | (g_334 = g_1089[2])), (((safe_mul_func_int8_t_s_s(g_469, g_725)) | l_1122) <= l_1175), l_1122, g_879)), g_80)))), l_1176, g_469, g_332, l_1176));
                        l_761 = 0xBB920CB1L;
                    }
                    else
                    {
                        l_1061 = l_1183;
                    }
                }
                else
                {
                    unsigned l_1191 = 0xC5314FD3L;
                    int l_1195 = 0xD48D518DL;
                    int l_1196 = 0x3DB4AC8DL;
                    g_725 = l_871;
                    l_810 = l_1120;
                    for (g_332 = 0; (g_332 <= 4); g_332 += 1)
                    {
                        short l_1190 = 0x7BDCL;
                        g_80 = (safe_add_func_uint32_t_u_u(((((safe_rshift_func_uint16_t_u_s(func_40((g_164 = (safe_lshift_func_int8_t_s_u((((l_1154 ^ func_9((g_22[0] = ((g_25 >= (l_1190 ^ (~l_1122))) ^ (((l_1191 = l_811[2][0]) >= g_315) == (safe_add_func_uint32_t_u_u((((l_1082 | g_119) < 1UL) == 1L), l_1153))))), l_1194, l_1120, l_966[1][4], g_732)) >= g_732) & l_1195), 1))), g_812, g_315, g_182, g_120), g_879)) <= l_1190) > 0L) > l_1190), l_1196));
                        return g_334;
                    }
                    for (g_99 = 0; (g_99 <= 4); g_99 += 1)
                    {
                        g_552 = (-8L);
                    }
                }
                g_552 = (safe_rshift_func_uint16_t_u_u(g_22[4], 0));
                for (g_28 = 2; (g_28 >= 0); g_28 -= 1)
                {
                    int i, j;
                    if (g_6[g_28][(g_28 + 1)])
                    {
                        int i;
                        if (g_22[g_28])
                            break;
                        g_725 = g_22[(g_28 + 1)];
                        return l_1135;
                    }
                    else
                    {
                        int l_1204 = 0x273C04EDL;
                        g_552 = (g_6[g_28][(g_28 + 1)] < (func_70((l_1209 = (safe_add_func_uint8_t_u_u((g_6[g_28][(g_28 + 1)] < func_40((g_178 = g_1201), (safe_add_func_uint8_t_u_u(((0x41E26543L < l_1134) == func_40(l_1204, ((l_1061 = (g_1205[1] == ((func_9((safe_mod_func_int16_t_s_s(8L, 65532UL)), g_725, l_1135, l_933, l_1204) < g_1205[1]) >= 0x30B1L))) <= l_1204), l_1204, g_82, l_1134)), l_1159)), g_22[3], l_1208, g_1086)), 0xEFL))), g_1089[2], g_82, g_182, g_197[5][5][3]) | l_966[2][4]));
                    }
                    g_552 = (safe_sub_func_uint16_t_u_u((((l_1120 = 5L) && (safe_add_func_int32_t_s_s(l_1134, (safe_add_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u(g_1014, g_105)), (((safe_rshift_func_uint16_t_u_u(l_1082, 7)) < (((safe_mod_func_int8_t_s_s((safe_unary_minus_func_uint8_t_u(func_9(g_1014, l_1159, (g_519 = (safe_mod_func_uint16_t_u_u(((g_6[g_28][(g_28 + 1)] && l_1085) == l_871), g_6[g_28][(g_28 + 1)]))), l_1120, g_334))), l_1208)) <= g_197[1][1][2]) || g_334)) < 0x3AF5FD4AL)))))) == g_28), 0xEF1BL));
                    l_1183 = g_6[g_28][(g_28 + 1)];
                    for (l_1208 = 1; (l_1208 <= 4); l_1208 += 1)
                    {
                        unsigned l_1235 = 4294967290UL;
                        int l_1237 = 0L;
                        int i;
                        l_1183 = (safe_add_func_int16_t_s_s((0L == g_6[g_28][(g_28 + 1)]), g_332));
                        l_1237 = ((g_164 = (safe_sub_func_uint32_t_u_u(g_1205[1], (func_61(l_1162[3], ((g_22[g_119] = func_70(g_164, ((safe_mod_func_int8_t_s_s((-9L), (safe_add_func_uint32_t_u_u((func_61(g_6[g_28][(g_28 + 1)], (safe_mul_func_int16_t_s_s(l_1208, (g_1156 = (g_22[0] != l_1235)))), (g_334 = 0L), g_1205[0], l_810) | 4294967295UL), l_1236)))) != l_1194), g_332, g_209, g_469)) != g_519), l_1136, g_1014, g_552) != 2L)))) != 0x75L);
                    }
                }
                for (l_5 = 0; (l_5 <= 4); l_5 += 1)
                {
                    unsigned short l_1246 = 0xF1A6L;
                    unsigned l_1260 = 1UL;
                    int l_1274 = (-1L);
                    if (func_70(func_70(l_1236, (safe_sub_func_uint32_t_u_u(0UL, (safe_add_func_int32_t_s_s(l_1209, 4294967294UL)))), g_443, (l_1120 = l_1183), g_1201), (safe_mul_func_uint16_t_u_u(((safe_unary_minus_func_uint16_t_u((l_1122 ^ l_871))) ^ l_1245), g_105)), g_334, g_332, l_1135))
                    {
                        unsigned l_1259[6][2][7] = {{{0x15287211L,4294967288UL,0xDC3E64B9L,0xDC3E64B9L,0x9124B84CL,0x3026B38CL,0xEA6B226DL},{0xB3750D1BL,0xEA813231L,0x1610FDFFL,7UL,1UL,4294967288UL,4294967288UL}},{{1UL,2UL,4294967295UL,2UL,1UL,4294967295UL,0UL},{0x7A98CBE3L,0xEA813231L,4294967288UL,0UL,0x9EA5A7CFL,0xB3750D1BL,0x9EA5A7CFL}},{{2UL,0x9124B84CL,0x9124B84CL,2UL,2UL,4294967288UL,0x7AE7C694L},{0x7A98CBE3L,0UL,1UL,4294967295UL,4294967291UL,4294967291UL,4294967295UL}},{{1UL,0UL,1UL,4294967288UL,0x3026B38CL,0xDC3E64B9L,0x7AE7C694L},{0xB3750D1BL,1UL,0x9EA5A7CFL,1UL,7UL,1UL,0x9EA5A7CFL}},{{0x3026B38CL,0x3026B38CL,2UL,0xEA6B226DL,0x15287211L,0xDC3E64B9L,0UL},{7UL,4294967288UL,4294967291UL,0xEA813231L,0xEA813231L,4294967291UL,4294967288UL}},{{0x9124B84CL,4294967295UL,0x3026B38CL,1UL,0x15287211L,4294967288UL,0xEA6B226DL},{4294967291UL,0xB3750D1BL,7UL,4294967288UL,7UL,0xB3750D1BL,4294967291UL}}};
                        int i, j, k;
                        l_761 = (l_1246 & 3UL);
                        l_1260 = (((safe_sub_func_uint8_t_u_u(g_1089[2], ((g_82 >= (func_61((((l_1251 = l_1085) == (safe_sub_func_int8_t_s_s(((safe_unary_minus_func_uint32_t_u(l_1122)) | (safe_rshift_func_uint16_t_u_s(g_732, (l_1259[5][0][2] = (g_332 == (safe_mul_func_int8_t_s_s(((l_1122 >= (func_70(l_1133, g_334, g_119, l_1135, g_334) ^ l_1246)) <= g_197[4][4][1]), 3UL))))))), l_1209))) ^ 0L), l_1194, l_1175, g_1156, g_334) <= 1UL)) && 0x08CEL))) && 4UL) == l_1246);
                    }
                    else
                    {
                        unsigned l_1264 = 0UL;
                        int l_1265[2];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_1265[i] = 0x9C8B8E55L;
                        l_1061 = (safe_sub_func_int16_t_s_s(l_1245, l_1159));
                        l_1265[1] = (func_40((g_563 = (l_1265[1] = (l_1135 = (1L != (safe_unary_minus_func_int16_t_s(l_1264)))))), l_1264, g_1089[2], (255UL | (safe_sub_func_int8_t_s_s(((((g_28 != (l_1120 == (l_1268 = l_1264))) > ((safe_mul_func_int8_t_s_s(l_1162[6], 1L)) <= l_1260)) == g_22[1]) ^ g_469), 8UL))), l_1245) ^ g_519);
                        l_1271[2][7][0] = l_1260;
                    }
                    for (g_530 = 0; (g_530 <= 4); g_530 += 1)
                    {
                        const unsigned l_1281[8][2] = {{4294967295UL,4294967295UL},{1UL,4294967295UL},{4294967295UL,1UL},{4294967295UL,4294967295UL},{1UL,4294967295UL},{4294967295UL,1UL},{4294967295UL,1UL},{4294967295UL,1UL}};
                        int i, j;
                        l_1274 = (g_443 = (safe_mod_func_uint8_t_u_u(g_1089[2], g_1205[1])));
                        g_80 = (safe_mul_func_uint16_t_u_u(g_1156, (safe_add_func_uint8_t_u_u(0xCEL, l_1274))));
                        l_1135 = 1L;
                        g_443 = (((safe_add_func_int8_t_s_s((l_1281[5][1] & ((safe_lshift_func_int16_t_s_u((-1L), l_1284[7][2])) ^ ((safe_add_func_uint8_t_u_u((g_80 != func_70(g_164, ((0x03B239F6L && l_1281[5][1]) != ((0x8DL & l_1287[0][0][0]) ^ g_179)), g_643, g_120, l_4[5])), 0xE6L)) != g_1201))), 1L)) == l_1135) != 0x792FL);
                    }
                    for (g_469 = 1; (g_469 <= 4); g_469 += 1)
                    {
                        g_552 = g_519;
                    }
                }
            }
            for (g_443 = 1; (g_443 <= 6); g_443 += 1)
            {
                int i;
                return l_4[g_443];
            }
        }
        else
        {
            return l_1288;
        }
        g_28 = (safe_rshift_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(((g_443 != g_1089[2]) || 0xD1DAL), (safe_mod_func_int16_t_s_s(g_182, (safe_add_func_uint16_t_u_u(((safe_add_func_int32_t_s_s((safe_lshift_func_uint8_t_u_u((g_105 = (g_22[2] = (((g_197[4][3][2] = 0UL) < ((safe_mul_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u(func_61((l_1311 = ((safe_rshift_func_int16_t_s_s((safe_mod_func_uint8_t_u_u((0x97L ^ ((l_1133 < (safe_add_func_int32_t_s_s((g_1201 & g_25), l_810))) || 0UL)), 9UL)), 7)) || 9UL)), l_1120, l_810, g_82, g_22[1]), 5)), 0xF3L)) > 4294967289UL)) ^ g_1086))), l_856[2])), g_1205[1])) != g_332), l_1312[0])))))), g_164));
    }
    l_5 = (~(g_80 || (g_197[5][5][3] = (0x1CL ^ (safe_lshift_func_int16_t_s_s((l_1312[2] && (l_1288 && g_1205[1])), 9))))));
    for (g_179 = 0; (g_179 <= 2); g_179 += 1)
    {
        unsigned short l_1315 = 6UL;
        g_725 = ((l_1315 == (g_334 > (safe_mod_func_uint32_t_u_u(((func_9(((l_871 == 0x09L) ^ 65533UL), (safe_rshift_func_uint8_t_u_u((l_1320 <= 7L), ((((func_61(l_1312[3], l_1315, l_4[4], g_28, g_1086) >= g_466[0]) >= l_966[1][1]) ^ (-4L)) != l_1321))), g_563, l_1315, g_1156) >= 1UL) >= l_1315), 0xD09BBB8CL)))) != 0x4AL);
        g_28 = ((safe_add_func_uint8_t_u_u(l_1315, (safe_mod_func_uint32_t_u_u((l_1315 >= g_332), (safe_lshift_func_uint8_t_u_s((safe_unary_minus_func_int8_t_s(g_28)), 5)))))) >= 1L);
        g_182 = g_119;
        for (g_519 = 0; (g_519 <= 2); g_519 += 1)
        {
            unsigned short l_1330 = 0x9FBDL;
            for (g_643 = 0; (g_643 <= 2); g_643 += 1)
            {
                int l_1329 = 0x54505AD1L;
                int i, j;
                l_1329 = l_811[g_643][(g_643 + 4)];
                l_761 = g_443;
                g_28 = g_182;
                l_810 = l_1330;
            }
        }
    }
    return l_933;
}







static unsigned short func_9(unsigned char p_10, unsigned char p_11, int p_12, char p_13, char p_14)
{
    for (g_25 = 0; (g_25 >= 0); g_25 -= 1)
    {
        int i;
        return g_466[g_25];
    }
    return g_80;
}







static unsigned short func_15(char p_16, const char p_17)
{
    unsigned l_582[8] = {9UL,0xD8803E8AL,0xD8803E8AL,9UL,0xD8803E8AL,0xD8803E8AL,9UL,0xD8803E8AL};
    int l_585 = 4L;
    int l_601 = 0xD5498107L;
    int l_602 = 0x9223799FL;
    short l_607 = 3L;
    char l_615 = 0xB5L;
    char l_642[3][4][1] = {{{0xAEL},{2L},{0xAEL},{2L}},{{0xAEL},{2L},{0xAEL},{2L}},{{0xAEL},{2L},{0xAEL},{2L}}};
    int i, j, k;
    if ((l_582[1] = (~func_38(g_105))))
    {
        char l_592 = 8L;
        const int l_596[5][8] = {{1L,1L,0xDB47268CL,0xD7436CE2L,(-8L),0xD7436CE2L,0xDB47268CL,1L},{1L,(-1L),(-2L),0xDB47268CL,0xDB47268CL,(-2L),(-1L),1L},{(-1L),1L,1L,0xD7436CE2L,1L,1L,(-1L),(-1L)},{1L,0xD7436CE2L,(-2L),(-2L),0xD7436CE2L,1L,0xDB47268CL,1L},{0xD7436CE2L,1L,0xDB47268CL,1L,0xD7436CE2L,(-2L),(-2L),0xD7436CE2L}};
        unsigned char l_597 = 0x43L;
        int l_598[9][7] = {{0L,0L,0L,8L,0x6B0479E5L,0x3423E3A6L,0xE2E490FAL},{8L,0L,0L,0x3423E3A6L,0x3423E3A6L,0L,0L},{0L,3L,0L,1L,0x6B0479E5L,0x140842ABL,8L},{0L,0xE2E490FAL,6L,0L,6L,0xE2E490FAL,0L},{8L,0x140842ABL,0x6B0479E5L,1L,0L,8L,3L},{6L,3L,0x140842ABL,0x140842ABL,3L,6L,0x3423E3A6L},{1L,0x140842ABL,0L,0x3423E3A6L,0xDC4260D3L,6L,6L},{8L,0xDC4260D3L,0L,0xDC4260D3L,8L,8L,1L},{0xE2E490FAL,0x140842ABL,6L,0L,8L,1L,8L}};
        int i, j;
        l_598[6][4] = (safe_rshift_func_int16_t_s_s(0L, ((l_597 = (((4L || l_585) < (safe_add_func_int16_t_s_s(p_16, p_16))) && (func_38((safe_rshift_func_int16_t_s_s((4L ^ func_100((safe_add_func_int16_t_s_s(l_592, (g_209 = ((((((safe_unary_minus_func_uint16_t_u((safe_mod_func_uint32_t_u_u((l_585 = ((func_38(g_120) < 247UL) && l_582[5])), 8UL)))) && p_16) >= l_582[1]) != l_596[4][2]) | 0xA9C6L) | g_552)))), l_596[4][2], p_16, l_596[1][3])), l_592))) >= 4294967288UL))) < p_16)));
        g_552 = (l_598[3][3] = (safe_sub_func_int16_t_s_s(p_17, l_585)));
    }
    else
    {
        unsigned l_608[3][2];
        int l_638[7];
        int l_700 = 4L;
        unsigned l_726[5][9][1] = {{{4294967294UL},{8UL},{7UL},{7UL},{8UL},{4294967294UL},{0x2C19AC64L},{4294967294UL},{8UL}},{{7UL},{7UL},{8UL},{4294967294UL},{0x2C19AC64L},{4294967294UL},{8UL},{7UL},{7UL}},{{8UL},{4294967294UL},{0x2C19AC64L},{4294967294UL},{8UL},{7UL},{7UL},{8UL},{4294967294UL}},{{0x2C19AC64L},{4294967294UL},{8UL},{7UL},{7UL},{8UL},{4294967294UL},{0x2C19AC64L},{4294967294UL}},{{8UL},{7UL},{7UL},{8UL},{4294967294UL},{0x2C19AC64L},{4294967294UL},{8UL},{7UL}}};
        int l_727 = 0L;
        unsigned short l_750 = 0x591FL;
        unsigned l_751[9] = {0x2771E8A1L,0xA3100FACL,0xA3100FACL,0x2771E8A1L,0xA3100FACL,0xA3100FACL,0x2771E8A1L,0xA3100FACL,0xA3100FACL};
        int i, j, k;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 2; j++)
                l_608[i][j] = 0UL;
        }
        for (i = 0; i < 7; i++)
            l_638[i] = (-1L);
        l_585 = l_585;
        g_25 = ((g_443 & func_61(l_585, (p_17 < 255UL), g_443, p_16, l_582[1])) >= (g_552 = ((l_601 = p_17) & l_602)));
        if ((l_607 = (safe_rshift_func_int16_t_s_u((safe_add_func_uint16_t_u_u(1UL, p_16)), 9))))
        {
            unsigned char l_616 = 1UL;
            int l_621 = 0L;
            int l_665 = 0x2AABC3BAL;
            unsigned char l_701 = 1UL;
            l_608[0][0] = (+((-1L) ^ p_16));
            if ((g_22[3] <= (func_61((l_585 = (safe_add_func_uint16_t_u_u(1UL, ((l_616 = (safe_mul_func_uint16_t_u_u(((~(+(safe_lshift_func_uint16_t_u_s(p_17, 2)))) ^ p_16), (l_615 = 65533UL)))) <= ((safe_lshift_func_uint8_t_u_u(((safe_rshift_func_int16_t_s_u(l_621, g_315)) < (safe_rshift_func_uint16_t_u_u(p_16, 8))), (safe_add_func_int32_t_s_s((func_100(l_585, l_608[0][0], p_16, g_334) | 0UL), 0xB9CA6D94L)))) & p_16))))), l_608[2][1], p_17, l_621, g_105) < 249UL)))
            {
                int l_639 = 0x3DA5C225L;
                int l_644 = 1L;
                l_644 = (safe_mod_func_int16_t_s_s((l_585 = g_552), (g_643 = (l_621 = (l_642[2][0][0] = (safe_mul_func_uint16_t_u_u(((func_52((safe_add_func_uint32_t_u_u(((p_16 = ((g_469 & (1UL ^ (safe_add_func_int8_t_s_s(((safe_add_func_int16_t_s_s((((((((l_601 = ((func_38(g_332) <= ((safe_mod_func_uint32_t_u_u((l_638[0] = l_621), l_639)) < (safe_mul_func_uint16_t_u_u(g_530, (0x9D11C045L < p_16))))) | p_16)) || g_334) && p_16) | p_17) != 4294967286UL) >= 0xF5338929L) && 0xC13BL), g_466[0])) < 0x43DCL), 0L)))) == 255UL)) | g_466[0]), 0x872A3EACL)), p_17, g_563) || p_16) > g_466[0]), 7L)))))));
                g_443 = l_621;
                for (g_82 = 6; (g_82 >= 0); g_82 -= 1)
                {
                    int i;
                    l_638[g_82] = l_638[g_82];
                    g_28 = (safe_mod_func_uint32_t_u_u((safe_sub_func_uint16_t_u_u(l_621, func_61((safe_lshift_func_uint8_t_u_u(g_519, 2)), ((l_582[g_82] = (safe_sub_func_uint32_t_u_u((safe_mod_func_int8_t_s_s((l_644 = (~(l_644 & (safe_mul_func_uint16_t_u_u(((func_52((l_601 = (g_105 = (safe_sub_func_uint8_t_u_u(((p_17 || func_100(l_638[g_82], g_469, (((safe_lshift_func_int16_t_s_s((safe_rshift_func_int8_t_s_u(g_334, 3)), (safe_mul_func_uint16_t_u_u(p_16, p_16)))) | l_665) != 7L), l_616)) || g_334), 0x9DL)))), p_16, g_332) | p_16) ^ l_638[0]), p_17))))), 4UL)), g_443))) || p_16), l_665, g_22[3], l_585))), p_17));
                }
            }
            else
            {
                int l_668[3][1];
                int l_669 = 0x2F78953BL;
                int l_670 = 7L;
                int i, j;
                for (i = 0; i < 3; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_668[i][j] = 0xCC8D8E7CL;
                }
                l_670 = ((p_17 || (safe_mul_func_int16_t_s_s(p_17, l_668[1][0]))) || (l_669 = (l_616 && func_20(l_607))));
                return g_119;
            }
            for (g_82 = 0; (g_82 <= 0); g_82 += 1)
            {
                unsigned char l_681 = 0UL;
                int l_696 = (-8L);
                int l_702 = 0x773AD211L;
                l_638[0] = (0x6EL & (((p_16 < l_665) <= p_17) == (safe_mul_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u(65528UL, (safe_sub_func_uint8_t_u_u((safe_add_func_int8_t_s_s(g_178, g_552)), ((p_17 && (((safe_sub_func_int16_t_s_s(l_638[0], g_209)) || l_681) <= p_16)) < l_608[2][0]))))), g_22[0]))));
                for (l_602 = 0; (l_602 <= 0); l_602 += 1)
                {
                    const unsigned l_682 = 4294967286UL;
                    unsigned l_689 = 4294967290UL;
                    int l_698[4] = {6L,6L,6L,6L};
                    int i;
                    if (func_52(p_16, func_40((l_682 || (g_334 = ((safe_add_func_uint8_t_u_u(0UL, (((g_643 = g_178) & (l_638[0] = (safe_lshift_func_uint16_t_u_u(((func_61((p_16 == ((~l_616) ^ ((0xA92BL <= ((~(((g_197[5][5][3] = 4294967295UL) ^ func_70((safe_mul_func_int8_t_s_s(p_16, l_616)), l_682, p_17, g_466[0], l_616)) <= l_682)) != l_638[5])) != g_22[3]))), p_17, g_182, p_17, p_16) < g_120) < l_585), 12)))) & p_17))) >= 0x1EL))), p_17, g_178, l_681, g_519), g_443))
                    {
                        short l_697 = 0xD885L;
                        int l_699 = 2L;
                        g_182 = l_689;
                        l_601 = (((p_17 ^ (l_681 < ((l_699 = (l_698[1] = (safe_lshift_func_int8_t_s_u(func_52(func_70(g_99, (safe_mod_func_int16_t_s_s((safe_mul_func_uint16_t_u_u((p_17 | (!(func_100((((l_696 = (p_17 <= 1L)) > g_99) | func_70(((-4L) < 0x137E3093L), p_16, p_17, p_17, p_17)), p_17, g_28, p_17) | 0x2869L))), p_16)), p_16)), p_16, l_697, l_697), l_638[6], l_697), p_17)))) && p_16))) & 3UL) >= 0L);
                    }
                    else
                    {
                        l_638[4] = p_17;
                    }
                    l_665 = (~(g_552 = (g_443 = l_700)));
                    for (g_28 = 0; (g_28 >= 0); g_28 -= 1)
                    {
                        int i, j, k;
                        if (l_642[(l_602 + 1)][g_82][g_28])
                            break;
                    }
                }
                l_702 = l_701;
            }
            l_727 = ((l_601 = (safe_add_func_int32_t_s_s((((func_20(p_17) != (l_700 = (p_16 && (safe_add_func_uint16_t_u_u((!(l_638[4] = func_70(((safe_lshift_func_int8_t_s_s((p_16 = 0L), 7)) || (safe_mul_func_uint8_t_u_u(0x1FL, (safe_add_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u(l_638[0], (safe_sub_func_uint32_t_u_u((safe_mul_func_int8_t_s_s((safe_mul_func_int8_t_s_s(((safe_mul_func_uint16_t_u_u((func_70((((safe_lshift_func_uint8_t_u_s(((g_725 = l_638[0]) || l_726[3][3][0]), g_552)) || g_552) & g_466[0]), l_585, l_642[2][0][0], p_16, l_585) ^ g_466[0]), 0x362CL)) & p_17), 0L)), 0x5AL)), p_16)))), 0xF6FEL))))), l_616, l_601, p_17, l_665))), 0x1323L))))) | g_563) ^ g_552), g_552))) == 4UL);
        }
        else
        {
            unsigned l_752[1];
            int l_753 = (-10L);
            int i;
            for (i = 0; i < 1; i++)
                l_752[i] = 8UL;
            if (p_17)
            {
                int l_735 = 0xD6528F24L;
                l_735 = (((g_519 < l_585) > (func_61(g_563, (l_638[5] = (safe_mul_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u((g_164 | (g_732 < ((safe_add_func_int8_t_s_s(l_582[2], l_601)) <= p_16))), p_16)), 1UL))), l_608[1][1], p_16, g_182) || 4L)) ^ 1UL);
                l_753 = (((safe_add_func_int16_t_s_s(((safe_lshift_func_int16_t_s_u(l_638[4], g_732)) > (((safe_rshift_func_uint8_t_u_s((func_70((p_17 > (safe_rshift_func_uint8_t_u_s(((g_178 == g_179) == (g_334 = ((g_164 = (l_642[0][1][0] & func_61(l_735, (safe_lshift_func_int16_t_s_u((safe_sub_func_int8_t_s_s((p_16 = (((0x670E3DBEL != (safe_add_func_int16_t_s_s((l_585 = ((l_750 = ((l_601 = (8UL & 65535UL)) & g_82)) != 0x94BC6ED0L)), l_751[5]))) < l_735) >= p_17)), g_519)), g_563)), g_552, g_209, l_608[0][0]))) ^ p_17))), p_17))), g_315, l_752[0], g_197[0][5][2], p_17) > g_197[2][2][3]), l_608[0][0])) && g_332) ^ g_725)), l_735)) == 0xEEL) < p_17);
            }
            else
            {
                unsigned char l_758 = 0UL;
                l_700 = (safe_add_func_int8_t_s_s((safe_sub_func_int32_t_s_s((((-10L) || (g_99 = l_758)) ^ func_40(p_16, (l_753 = 4294967295UL), p_16, g_209, (p_17 <= p_16))), 1L)), g_164));
            }
            return g_120;
        }
        for (g_530 = (-18); (g_530 > 3); g_530 = safe_add_func_int32_t_s_s(g_530, 3))
        {
            l_638[1] = (-1L);
        }
    }
    return p_17;
}







static char func_20(int p_21)
{
    char l_34 = 0xC8L;
    int l_36 = 1L;
    int l_37 = (-1L);
    g_22[3] = (-3L);
    if (p_21)
    {
        short l_35 = 8L;
        for (p_21 = 18; (p_21 == (-24)); p_21 = safe_sub_func_int32_t_s_s(p_21, 1))
        {
            for (g_25 = (-8); (g_25 <= 25); g_25 = safe_add_func_uint16_t_u_u(g_25, 4))
            {
                unsigned short l_29[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_29[i] = 0x34CBL;
                for (g_28 = 0; (g_28 <= 4); g_28 += 1)
                {
                    l_29[1] = 8L;
                }
            }
        }
        l_37 = ((l_35 = (l_34 = (safe_rshift_func_int16_t_s_u((safe_lshift_func_int16_t_s_s(p_21, 3)), 4)))) <= l_36);
        for (l_35 = 0; l_35 < 5; l_35 += 1)
        {
            g_22[l_35] = 250UL;
        }
    }
    else
    {
        return l_34;
    }
    l_37 = func_38(p_21);
    g_182 = g_25;
    return p_21;
}







static int func_38(short p_39)
{
    short l_60 = 0xC894L;
    unsigned l_372 = 4294967295UL;
    int l_375 = 0x809A7240L;
    int l_389[4][5] = {{(-9L),(-9L),0x5EFB6F7CL,0x5EFB6F7CL,(-9L)},{0x805FC86FL,0x2D102B0DL,0x805FC86FL,0x2D102B0DL,0x805FC86FL},{(-9L),0x5EFB6F7CL,0x5EFB6F7CL,(-9L),(-9L)},{7L,0x2D102B0DL,7L,0x2D102B0DL,7L}};
    int l_403[9][9] = {{0x12450825L,0x12450825L,0x12450825L,0x12450825L,0x12450825L,0x12450825L,0x12450825L,0x12450825L,0x12450825L},{7L,7L,7L,7L,7L,7L,7L,7L,7L},{0x12450825L,0x12450825L,0x12450825L,0x12450825L,0x12450825L,0x12450825L,0x12450825L,0x12450825L,0x12450825L},{7L,7L,7L,7L,7L,7L,7L,7L,7L},{0x12450825L,0x12450825L,0x12450825L,0x12450825L,0x12450825L,0x12450825L,0x12450825L,0x12450825L,0x12450825L},{7L,7L,7L,7L,7L,7L,7L,7L,7L},{0x12450825L,0x12450825L,0x12450825L,0x12450825L,0x12450825L,0x12450825L,0x12450825L,0x12450825L,0x12450825L},{7L,7L,7L,7L,7L,7L,7L,7L,7L},{0x12450825L,0x12450825L,0x12450825L,0x12450825L,0x12450825L,0x12450825L,0x12450825L,0x12450825L,0x12450825L}};
    const unsigned short l_425 = 65535UL;
    int l_436 = 1L;
    int l_442 = 1L;
    unsigned char l_470 = 253UL;
    char l_550 = (-1L);
    int i, j;
    for (g_25 = 1; (g_25 <= 4); g_25 += 1)
    {
        int l_48 = 0L;
        unsigned char l_49 = 255UL;
        int l_81 = 0xBE8BA66FL;
        int l_363[10][10][2] = {{{1L,1L},{1L,0xC195F489L},{8L,0xC195F489L},{1L,1L},{1L,0xC195F489L},{8L,0xC195F489L},{1L,1L},{1L,0xC195F489L},{8L,0xC195F489L},{1L,1L}},{{1L,0xC195F489L},{8L,0xC195F489L},{1L,1L},{1L,0xC195F489L},{8L,0xC195F489L},{1L,1L},{1L,0xC195F489L},{8L,0xC195F489L},{1L,1L},{1L,0xC195F489L}},{{8L,0xC195F489L},{1L,1L},{1L,0xC195F489L},{8L,0xC195F489L},{1L,1L},{1L,0xC195F489L},{8L,0xC195F489L},{1L,1L},{1L,0xC195F489L},{8L,0xC195F489L}},{{1L,1L},{1L,0xC195F489L},{8L,0xC195F489L},{1L,1L},{1L,0xC195F489L},{8L,0xC195F489L},{1L,1L},{1L,0xC195F489L},{8L,0xC195F489L},{1L,1L}},{{1L,0xC195F489L},{8L,0xC195F489L},{1L,1L},{1L,0xC195F489L},{8L,0xC195F489L},{1L,1L},{1L,0xC195F489L},{8L,0xC195F489L},{1L,4L},{8L,1L}},{{0x985E607DL,1L},{8L,4L},{8L,1L},{0x985E607DL,1L},{8L,4L},{8L,1L},{0x985E607DL,1L},{8L,4L},{8L,1L},{0x985E607DL,1L}},{{8L,4L},{8L,1L},{0x985E607DL,1L},{8L,4L},{8L,1L},{0x985E607DL,1L},{8L,4L},{8L,1L},{0x985E607DL,1L},{8L,4L}},{{8L,1L},{0x985E607DL,1L},{8L,4L},{8L,1L},{0x985E607DL,1L},{8L,4L},{8L,1L},{0x985E607DL,1L},{8L,4L},{8L,1L}},{{0x985E607DL,1L},{8L,4L},{8L,1L},{0x985E607DL,1L},{8L,4L},{8L,1L},{0x985E607DL,1L},{8L,4L},{8L,1L},{0x985E607DL,1L}},{{8L,4L},{8L,1L},{0x985E607DL,1L},{8L,4L},{8L,1L},{0x985E607DL,1L},{8L,4L},{8L,1L},{0x985E607DL,1L},{8L,4L}}};
        int i, j, k;
        g_28 = ((func_40((safe_sub_func_int8_t_s_s((l_48 = g_22[g_25]), 250UL)), g_28, (l_49 < (-7L)), ((safe_mul_func_int16_t_s_s(func_52((safe_sub_func_int16_t_s_s(g_28, ((g_82 = (l_81 = (safe_sub_func_uint16_t_u_u(l_60, func_61(g_22[3], ((((((252UL && l_60) | g_22[g_25]) >= p_39) <= g_22[g_25]) > g_28) ^ (-4L)), g_22[2], p_39, g_28))))) > g_22[g_25]))), p_39, p_39), (-6L))) != 1L), p_39) <= l_363[3][0][0]) ^ p_39);
        l_375 = ((safe_add_func_uint8_t_u_u(l_60, p_39)) == (g_28 = ((g_315 = l_60) || (l_363[4][9][0] = (safe_rshift_func_int8_t_s_u(((safe_mul_func_int8_t_s_s(((p_39 < func_52((safe_add_func_int16_t_s_s(0L, l_372)), ((l_81 = p_39) & (g_119 = (safe_sub_func_uint8_t_u_u((((g_209 != ((l_60 || p_39) >= p_39)) < 0xCEB8063BL) & 1UL), p_39)))), l_60)) < g_197[5][3][4]), p_39)) <= p_39), 4))))));
        if (g_22[g_25])
            break;
    }
    for (g_334 = 1; (g_334 <= 4); g_334 += 1)
    {
        unsigned l_390 = 4294967292UL;
        int l_464 = 0x3D3D781EL;
        int l_551 = 9L;
        if ((safe_lshift_func_int16_t_s_s(0L, 1)))
        {
            unsigned l_386 = 0xB4A9BF71L;
            unsigned l_398 = 0xCA3924B4L;
            int l_399 = 0L;
            int l_420 = 0x012614E6L;
            const int l_477[7][2][1] = {{{0x7E42B9A9L},{0x7E42B9A9L}},{{0x7E42B9A9L},{0x7E42B9A9L}},{{0x7E42B9A9L},{0x7E42B9A9L}},{{0x7E42B9A9L},{0x7E42B9A9L}},{{0x7E42B9A9L},{0x7E42B9A9L}},{{0x7E42B9A9L},{0x7E42B9A9L}},{{0x7E42B9A9L},{0x7E42B9A9L}}};
            int i, j, k;
            if ((safe_rshift_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u((safe_add_func_uint8_t_u_u(p_39, (l_375 = (g_22[g_334] = ((safe_add_func_uint8_t_u_u(g_28, func_40(l_386, g_315, g_22[4], l_386, (g_332 ^ (safe_mul_func_int16_t_s_s((p_39 >= l_389[1][0]), 1L)))))) >= l_389[3][1]))))), l_386)), g_119)))
            {
                g_182 = (func_40(g_22[3], l_390, (g_332 && func_61((safe_rshift_func_int16_t_s_u(g_197[2][0][0], ((safe_unary_minus_func_uint8_t_u(g_22[g_334])) != (safe_mod_func_int8_t_s_s(func_61((safe_lshift_func_int8_t_s_s(l_390, (+(g_197[2][5][0] | p_39)))), ((p_39 || g_315) ^ g_119), g_22[3], p_39, g_119), p_39))))), p_39, l_398, p_39, p_39)), g_99, l_398) || 0x99DAF105L);
                l_399 = l_390;
                if (g_22[3])
                    break;
            }
            else
            {
                int l_402 = 0x60DAF1F7L;
                int l_404[5] = {0L,0L,0L,0L,0L};
                int l_405 = 0x73E15F19L;
                int i;
                g_182 = 0xCDED3DBFL;
                l_405 = (func_61((g_22[3] = (g_22[g_334] & func_40(func_100(((((l_399 = 0L) == (safe_lshift_func_uint16_t_u_s(p_39, 7))) || (func_100(l_402, g_22[g_334], p_39, g_28) < ((l_402 == l_402) >= l_403[8][0]))) && p_39), p_39, p_39, p_39), l_403[8][1], l_389[0][0], l_390, p_39))), g_182, g_82, l_402, p_39) <= l_404[2]);
                if ((((safe_add_func_uint32_t_u_u(((safe_rshift_func_uint8_t_u_s(((g_197[0][1][0] | (safe_mul_func_uint16_t_u_u(g_22[0], g_22[2]))) < func_70(l_386, g_197[5][5][3], ((safe_add_func_uint32_t_u_u(g_105, (l_389[0][2] ^ (l_404[2] || ((safe_mod_func_uint16_t_u_u((safe_mul_func_int8_t_s_s(((l_399 = (safe_mul_func_int8_t_s_s(((p_39 = g_22[2]) ^ 0L), (-1L)))) | 0x9C28L), l_390)), g_178)) == l_390))))) && l_372), g_209, l_420)), l_375)) | l_390), l_404[4])) & (-1L)) != l_404[2]))
                {
                    g_28 = (-9L);
                    g_182 = (0x06DECA66L > (safe_rshift_func_int16_t_s_s((safe_mul_func_int8_t_s_s(func_61(l_404[2], l_425, (safe_rshift_func_uint8_t_u_s(l_425, (g_22[g_334] < ((safe_rshift_func_int16_t_s_s(g_164, (safe_mod_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s(0x6AL, ((((0xFB64L | p_39) | 0xC023L) <= 1UL) || 0UL))), 4)), p_39)))) != g_164)))), p_39, l_436), 0xD6L)), 5)));
                }
                else
                {
                    for (g_332 = 1; (g_332 <= 4); g_332 += 1)
                    {
                        l_403[6][1] = (0xE2AE666AL != g_315);
                    }
                }
            }
            for (l_420 = 3; (l_420 >= 0); l_420 -= 1)
            {
                unsigned l_441[7] = {9UL,0xAFEA4660L,0xAFEA4660L,9UL,0xAFEA4660L,0xAFEA4660L,9UL};
                int l_465 = 3L;
                int i;
                g_80 = (safe_mod_func_int8_t_s_s((func_70((safe_rshift_func_uint8_t_u_s((0xB6L == ((2L && p_39) ^ p_39)), 1)), p_39, (((func_40(l_441[3], l_403[8][0], p_39, func_40(g_178, g_22[g_334], l_442, g_334, g_443), g_179) && p_39) > p_39) < p_39), g_28, g_99) != l_441[1]), 0x81L));
                for (l_390 = 0; (l_390 <= 4); l_390 += 1)
                {
                    int l_478[3];
                    int i, j, k;
                    for (i = 0; i < 3; i++)
                        l_478[i] = 2L;
                    g_28 = func_70((g_197[(l_420 + 2)][(g_334 + 1)][(l_420 + 1)] > (l_465 = ((safe_unary_minus_func_int16_t_s((safe_unary_minus_func_int16_t_s((safe_lshift_func_uint16_t_u_u(((safe_rshift_func_uint16_t_u_s(g_22[4], (func_61(g_164, (safe_add_func_uint32_t_u_u((l_464 = (l_441[5] <= (safe_sub_func_int8_t_s_s(l_390, (65534UL ^ ((safe_rshift_func_uint16_t_u_u(((safe_rshift_func_int16_t_s_u(l_403[2][1], 0)) || 0x0CL), (safe_add_func_int8_t_s_s((safe_rshift_func_int16_t_s_u((safe_sub_func_int32_t_s_s(l_390, g_105)), 4)), g_22[3])))) <= l_436)))))), (-2L))), p_39, p_39, l_390) >= l_390))) > p_39), 5)))))) != g_25))), p_39, g_466[0], p_39, p_39);
                    l_478[0] = (safe_rshift_func_uint8_t_u_u(249UL, (func_100(g_469, g_82, p_39, l_403[8][5]) > func_40(g_179, (((((l_470 <= (safe_add_func_int16_t_s_s(((l_465 = ((safe_add_func_int8_t_s_s(func_70((((safe_rshift_func_int16_t_s_s(((6L || g_80) != p_39), g_197[1][1][1])) == 0x8B89D677L) ^ 0xA829275DL), g_466[0], l_375, g_164, p_39), l_390)) & l_477[4][0][0])) == l_441[4]), p_39))) && 7L) > (-1L)) && 0x5D88587AL) <= 0x5D2B4CEAL), p_39, g_179, l_389[1][0]))));
                    if (p_39)
                        break;
                }
            }
        }
        else
        {
            unsigned l_492 = 0x14B6CF25L;
            int l_518 = 0x5568E917L;
            int l_520 = 0x9A815CA3L;
            unsigned l_554 = 1UL;
            for (g_443 = 0; (g_443 <= 4); g_443 += 1)
            {
                int l_485 = 0x56F52683L;
                int l_496 = 1L;
                for (g_99 = 0; (g_99 <= 3); g_99 += 1)
                {
                    int i, j, k;
                    g_80 = (-4L);
                    l_403[1][1] = (safe_add_func_int16_t_s_s((safe_rshift_func_int16_t_s_u((g_197[(g_99 + 2)][(g_443 + 2)][g_334] ^ (l_389[g_99][g_443] != ((((safe_rshift_func_int16_t_s_u(func_70(func_61(l_485, ((g_164 = g_443) < (((safe_sub_func_int16_t_s_s(0xB7C8L, func_100((safe_sub_func_uint32_t_u_u((g_443 == (g_119 = (0x78L ^ (((safe_rshift_func_int16_t_s_u((p_39 = (p_39 >= (p_39 != (-1L)))), g_334)) & g_197[(g_99 + 2)][(g_443 + 2)][g_334]) == l_464)))), g_22[3])), g_197[2][7][4], g_443, g_105))) | l_485) ^ l_436)), l_492, l_390, l_492), l_442, l_485, g_197[1][2][0], l_389[g_99][g_443]), g_105)) && p_39) ^ 0x1CFE88ECL) & 0xFD7FL))), 10)), g_105));
                }
                if ((safe_rshift_func_int8_t_s_u((func_40((l_485 = l_390), (((p_39 != ((func_70((safe_unary_minus_func_int32_t_s(((l_496 == l_496) < (safe_rshift_func_uint16_t_u_s((safe_rshift_func_int8_t_s_u(p_39, func_100(g_82, (func_40(g_164, (safe_lshift_func_int8_t_s_s(g_178, l_492)), g_25, l_492, l_390) >= 6UL), l_492, l_496))), l_496))))), p_39, p_39, p_39, l_372) || g_120) != p_39)) || 0x030EL) == p_39), l_464, l_464, g_28) & 2UL), g_469)))
                {
                    unsigned l_509[2];
                    int l_521 = 0L;
                    int i;
                    for (i = 0; i < 2; i++)
                        l_509[i] = 4UL;
                    l_485 = (safe_lshift_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u((l_496 = (g_105 = (safe_rshift_func_int8_t_s_s((l_509[1] == p_39), (safe_mul_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s((safe_mod_func_uint8_t_u_u((((l_521 = (((func_61((safe_mod_func_uint32_t_u_u((l_518 = (l_390 & 4294967286UL)), g_82)), l_492, (l_520 = func_100(g_28, g_22[3], (g_519 = 4294967295UL), p_39)), p_39, l_509[1]) == 9L) > g_164) <= g_99)) >= 0xE88373F0L) | 0x6BL), (-10L))), 0)), p_39)))))), g_209)), 15));
                    if ((safe_mul_func_uint16_t_u_u(g_105, l_509[0])))
                    {
                        return g_178;
                    }
                    else
                    {
                        int l_524[7] = {0L,0L,0L,0L,0L,0L,0L};
                        int i;
                        l_524[1] = (l_390 ^ (+g_466[0]));
                        l_524[1] = l_509[1];
                    }
                    if (g_332)
                        break;
                    for (p_39 = 4; (p_39 >= 1); p_39 -= 1)
                    {
                        unsigned l_529 = 0x16F19749L;
                        if (g_182)
                            break;
                        g_25 = ((0x21L || (g_178 = func_100((p_39 <= p_39), (safe_sub_func_uint8_t_u_u(p_39, (safe_sub_func_int32_t_s_s(((g_80 = 0x2D91ABD5L) & (((((l_529 = l_390) | g_82) && ((p_39 == func_70(l_520, g_22[1], g_120, g_28, g_530)) ^ g_105)) ^ l_464) >= 0x82471B8AL)), 1UL)))), p_39, l_485))) != 1L);
                    }
                }
                else
                {
                    g_25 = g_197[3][3][2];
                    if (l_520)
                        break;
                }
                l_496 = p_39;
                for (l_464 = 0; (l_464 <= 4); l_464 += 1)
                {
                    g_182 = 0xA9D88B02L;
                }
            }
            if (g_209)
                continue;
            if ((safe_sub_func_uint32_t_u_u((safe_mul_func_uint16_t_u_u((p_39 >= func_100(((safe_mod_func_uint8_t_u_u((l_520 = (safe_mul_func_uint8_t_u_u((((((safe_sub_func_uint32_t_u_u(p_39, g_80)) || l_403[3][3]) != (func_70((((((l_551 = (((l_550 = ((safe_add_func_int8_t_s_s(func_70(l_390, g_334, l_390, ((l_390 > (safe_unary_minus_func_uint32_t_u((g_315 = (safe_lshift_func_uint16_t_u_s((l_464 = func_70((g_178 = func_70((safe_add_func_int32_t_s_s((l_436 = (safe_mul_func_uint8_t_u_u(((l_464 != 1L) < g_530), 2UL))), 0UL)), g_22[3], l_403[8][0], g_209, p_39)), l_390, p_39, l_60, g_315)), g_466[0])))))) | g_28), g_22[3]), 0x0EL)) == 0x38ACL)) > 0x68309D5EL) != l_470)) || g_119) >= 1UL) | 0x5FL) && g_552), g_99, p_39, l_520, g_99) | 1UL)) == l_60) & 0x7FDBL), 1UL))), g_197[5][5][3])) | 0x91L), p_39, l_375, g_519)), g_164)), l_372)))
            {
                int l_564 = (-1L);
                int l_569 = 1L;
                unsigned char l_570 = 0xB4L;
                l_564 = ((g_334 > ((safe_unary_minus_func_uint16_t_u(l_554)) == ((p_39 || (l_518 = ((g_209 < (safe_rshift_func_int8_t_s_s((g_164 = func_40(g_99, p_39, ((((safe_add_func_int16_t_s_s((((5UL < (safe_lshift_func_uint16_t_u_u(0xDE84L, 6))) == (safe_rshift_func_uint8_t_u_s(p_39, l_390))) && p_39), 1L)) || g_22[3]) != g_105) || p_39), l_403[2][5], p_39)), 6))) && g_563))) & l_375))) ^ 0xD9L);
                l_464 = (l_492 > (((func_61(p_39, l_564, (g_119 = 0xDF22L), (l_518 = g_80), g_315) ^ ((safe_mod_func_int8_t_s_s((((g_197[4][3][2] = (((safe_mul_func_int8_t_s_s((func_70(l_569, (g_469 >= 0x25B3L), p_39, g_466[0], l_554) && p_39), l_464)) & 0L) == p_39)) <= (-3L)) >= g_469), 255UL)) < l_375)) <= l_551) > 0x15L));
                if (l_570)
                {
                    l_551 = g_119;
                }
                else
                {
                    unsigned l_579[5][4] = {{4294967294UL,4294967294UL,0x8B94A87AL,4294967294UL},{4294967294UL,0x8C5895F3L,0x8C5895F3L,4294967294UL},{0x8C5895F3L,4294967294UL,0x8C5895F3L,0x8C5895F3L},{4294967294UL,4294967294UL,0x8B94A87AL,4294967294UL},{4294967294UL,0x8C5895F3L,0x8C5895F3L,4294967294UL}};
                    int l_580 = 0x92EA1B3FL;
                    int l_581 = (-1L);
                    int i, j;
                    l_581 = (safe_mul_func_uint16_t_u_u((safe_mod_func_int32_t_s_s((g_443 || (safe_sub_func_int16_t_s_s((+(safe_lshift_func_int8_t_s_u(p_39, 5))), (l_580 = func_40(p_39, p_39, (((((p_39 ^ l_579[1][3]) || (g_119 = g_22[3])) > p_39) <= l_579[4][3]) && l_570), p_39, p_39))))), g_164)), p_39));
                }
            }
            else
            {
                if (g_99)
                    break;
            }
        }
        for (l_372 = 0; (l_372 <= 4); l_372 += 1)
        {
            return p_39;
        }
    }
    return g_182;
}







static unsigned char func_40(char p_41, unsigned p_42, unsigned p_43, int p_44, unsigned p_45)
{
    return p_44;
}







static const short func_52(unsigned char p_53, unsigned p_54, char p_55)
{
    unsigned l_106 = 4294967295UL;
    int l_109 = 0x6EC41C96L;
    int l_131 = 0x241B9AD1L;
    int l_150[9];
    unsigned char l_154[1][8];
    char l_176 = 0xC3L;
    unsigned char l_243 = 0x40L;
    unsigned char l_333[7][8][4] = {{{0x81L,4UL,0x5AL,246UL},{2UL,0UL,0x2BL,0x5AL},{0UL,0UL,0x70L,246UL},{0UL,4UL,255UL,0x42L},{0UL,0x9CL,0UL,0xC4L},{0UL,0xCFL,0x4AL,0x2BL},{2UL,0x45L,0x0AL,0x81L},{6UL,246UL,0x7BL,246UL}},{{0x45L,0x9DL,2UL,0x5EL},{0xCFL,0UL,255UL,0x81L},{0x2BL,0x42L,246UL,0x56L},{0x2BL,0UL,255UL,0x45L},{0xCFL,0x56L,2UL,0x9CL},{0UL,0xCFL,0x5EL,0x5AL},{0x94L,0xCFL,1UL,0x81L},{246UL,0xC4L,0x45L,1UL}},{{0x7DL,255UL,255UL,0x7DL},{0UL,6UL,0UL,0x56L},{255UL,0xCFL,0x4AL,2UL},{0xCFL,0x94L,0x9CL,2UL},{246UL,0xCFL,1UL,0x56L},{0x0AL,6UL,1UL,0x7DL},{4UL,255UL,2UL,1UL},{6UL,0xC4L,0x4AL,0x81L}},{{0UL,0xCFL,0UL,0x5AL},{0x2BL,0xCFL,0x2BL,0x9CL},{0x7DL,0x56L,0x9CL,0x45L},{4UL,0UL,0x5EL,0x56L},{0x56L,0x42L,0x5EL,0x81L},{4UL,0UL,0x9CL,0x5EL},{0x7DL,0xC4L,0x2BL,6UL},{0x2BL,6UL,0UL,0x0AL}},{{0UL,0UL,0xCFL,0x5AL},{253UL,255UL,0x94L,0x94L},{1UL,1UL,2UL,0UL},{0xC4L,0UL,255UL,253UL},{5UL,0x81L,0x5AL,255UL},{0UL,0x81L,0xCFL,253UL},{0x81L,0UL,0x48L,0UL},{0x7DL,1UL,0x81L,0x94L}},{{0x70L,255UL,0x7BL,0x5AL},{5UL,0x5EL,2UL,0xC4L},{0x2BL,253UL,0xE9L,253UL},{0x5EL,6UL,0x94L,0xE9L},{0UL,0x7DL,0x81L,0x9DL},{0x42L,0UL,5UL,0x4AL},{0x42L,0x5EL,0x81L,0x7BL},{0UL,0x4AL,0x94L,0x5AL}},{{0x5EL,1UL,0xE9L,0UL},{0x2BL,0UL,2UL,0x9DL},{5UL,6UL,0x7BL,2UL},{0x70L,0x81L,0x81L,0x70L},{0x7DL,253UL,0x48L,0x4AL},{0x81L,1UL,0xCFL,0x94L},{0UL,0x2BL,0x5AL,0x94L},{5UL,1UL,255UL,0x4AL}}};
    int i, j, k;
    for (i = 0; i < 9; i++)
        l_150[i] = 0x21A5A11BL;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 8; j++)
            l_154[i][j] = 255UL;
    }
    for (p_54 = 9; (p_54 < 39); ++p_54)
    {
        short l_98 = 0x7D06L;
        int l_138 = 1L;
        int l_151 = 0L;
        unsigned char l_159 = 0xA3L;
        unsigned short l_162 = 1UL;
        short l_193 = 0x4376L;
        int l_214 = 0xAC471EECL;
        int l_284 = 8L;
        for (g_80 = 0; (g_80 > (-4)); g_80--)
        {
            int l_95 = (-4L);
            int l_108 = 0xDA2E755EL;
            int l_149 = 3L;
            short l_165 = 0x3DBFL;
            int l_244 = 0xB9D68E3BL;
            int l_285 = (-1L);
            unsigned char l_337 = 246UL;
            unsigned char l_352 = 255UL;
            char l_362 = 0x45L;
            if (g_22[3])
                break;
            l_131 = ((safe_rshift_func_int8_t_s_u((safe_rshift_func_uint8_t_u_u(((0L | (safe_rshift_func_uint16_t_u_u(65535UL, (safe_mod_func_int16_t_s_s((l_95 = (-1L)), g_80))))) & (((((g_99 = (safe_rshift_func_int16_t_s_u(l_98, 9))) & (((func_100((g_105 = p_55), g_22[4], l_106, ((l_109 = (safe_unary_minus_func_uint16_t_u((l_108 = (((g_28 >= g_25) != p_55) > g_82))))) || p_55)) & g_22[3]) | g_82) == 0x774F3CB3L)) | g_22[4]) & (-1L)) & 0x8F1F7CC5L)), 1)), 6)) < g_22[3]);
            l_151 = (safe_mul_func_uint16_t_u_u((p_53 != p_53), ((safe_mul_func_uint8_t_u_u((65526UL < ((safe_mod_func_uint32_t_u_u(p_53, l_138)) & 0x3F511B60L)), (safe_mul_func_int8_t_s_s(0x55L, (((safe_sub_func_int32_t_s_s((safe_lshift_func_int8_t_s_u(l_108, (safe_lshift_func_int8_t_s_s((func_100((safe_add_func_uint32_t_u_u(((((l_95 < l_138) <= p_53) | g_80) >= l_149), g_28)), g_82, l_106, p_55) || g_120), l_150[5])))), g_105)) > 0x4F2CD8C2L) >= p_53))))) | p_54)));
            if ((func_100((p_53 >= 0xE36A62F8L), p_55, (safe_add_func_int16_t_s_s(((l_154[0][5] != (g_119 < (safe_mod_func_int8_t_s_s((safe_lshift_func_int16_t_s_s(g_22[3], ((p_53 > (l_151 = g_28)) ^ (g_25 <= 0x2AL)))), l_154[0][1])))) >= p_54), g_22[3])), l_98) | l_159))
            {
                unsigned char l_177 = 1UL;
                int l_194 = 2L;
                for (l_151 = 20; (l_151 <= (-25)); --l_151)
                {
                    unsigned char l_163 = 0x3EL;
                    unsigned l_172 = 1UL;
                    if ((g_164 = (l_163 = l_162)))
                    {
                        int l_175 = 0x1B57B996L;
                        l_131 = 0L;
                        l_108 = (g_178 = func_100(p_55, (g_164 = func_100(l_165, g_80, ((((0x0FL <= func_70(((safe_rshift_func_int16_t_s_u(l_95, ((((g_119 = 0x32BAL) ^ ((safe_lshift_func_uint8_t_u_u(((l_176 = (g_99 = (safe_mod_func_int32_t_s_s((l_172 || (((g_120 ^ (0x52L > l_175)) >= g_28) <= g_164)), l_108)))) <= l_149), l_175)) & p_53)) != g_80) || l_131))) & 0x0262L), g_105, g_120, l_165, l_154[0][7])) == g_22[3]) == 0x49L) > 0x8DL), p_55)), l_177, p_54));
                        return g_80;
                    }
                    else
                    {
                        g_179 = p_55;
                        g_182 = (((!(safe_mod_func_int8_t_s_s(func_70(p_53, l_177, func_100(g_80, l_172, p_53, l_98), g_179, (0UL & l_172)), l_177))) > l_98) || g_178);
                        return g_119;
                    }
                }
                g_182 = ((safe_mul_func_uint8_t_u_u(((g_105 & (safe_mod_func_int16_t_s_s((((safe_add_func_int16_t_s_s((l_138 < (safe_mul_func_uint16_t_u_u(p_54, p_54))), (safe_rshift_func_int8_t_s_s((p_55 = (l_109 = ((p_53 = (l_194 = l_193)) > g_22[3]))), g_22[4])))) >= 0xB8F0B0E5L) >= (p_54 && g_105)), g_80))) || 0x70L), g_28)) || 0x7E973401L);
                g_182 = (l_108 = p_54);
                if ((safe_lshift_func_uint8_t_u_u(g_105, (4UL != (g_120 = (0UL < g_197[5][5][3]))))))
                {
                    unsigned char l_208 = 0x89L;
                    for (l_165 = 0; (l_165 <= 4); l_165 += 1)
                    {
                        l_194 = l_149;
                        if (p_55)
                            continue;
                        if (g_179)
                            break;
                        return g_25;
                    }
                    g_182 = (safe_rshift_func_uint16_t_u_u(((+l_108) & (safe_lshift_func_uint16_t_u_u((safe_sub_func_int16_t_s_s((l_162 || g_164), p_54)), g_179))), (l_194 = g_119)));
                    for (l_109 = 25; (l_109 >= (-13)); l_109 = safe_sub_func_int32_t_s_s(l_109, 3))
                    {
                        unsigned l_207[9][8][1] = {{{1UL},{0xC3BE27DDL},{1UL},{0x1D69C55FL},{0x49901D41L},{1UL},{1UL},{0x360A1AB0L}},{{0x360A1AB0L},{1UL},{1UL},{0x49901D41L},{0x1D69C55FL},{1UL},{0xC3BE27DDL},{1UL}},{{0x1D69C55FL},{0x49901D41L},{1UL},{1UL},{0x360A1AB0L},{0x360A1AB0L},{1UL},{1UL}},{{0x49901D41L},{0x1D69C55FL},{1UL},{0xC3BE27DDL},{1UL},{0x1D69C55FL},{0x49901D41L},{1UL}},{{1UL},{0x360A1AB0L},{0x360A1AB0L},{1UL},{1UL},{0x49901D41L},{0x1D69C55FL},{1UL}},{{0xC3BE27DDL},{1UL},{0x1D69C55FL},{0x49901D41L},{1UL},{1UL},{0x360A1AB0L},{0x360A1AB0L}},{{1UL},{1UL},{0x49901D41L},{0x1D69C55FL},{1UL},{0xC3BE27DDL},{1UL},{0x1D69C55FL}},{{0x49901D41L},{1UL},{1UL},{0x360A1AB0L},{0x360A1AB0L},{1UL},{1UL},{0x49901D41L}},{{0x1D69C55FL},{1UL},{0xC3BE27DDL},{1UL},{0x1D69C55FL},{0x49901D41L},{1UL},{1UL}}};
                        int i, j, k;
                        l_208 = ((safe_unary_minus_func_uint32_t_u(((l_162 | 4294967295UL) || (l_207[2][0][0] = g_105)))) != p_55);
                        l_150[5] = 0xDC88825DL;
                    }
                }
                else
                {
                    g_182 = (g_119 & 0xA562L);
                }
            }
            else
            {
                unsigned char l_210[5];
                int l_222 = 6L;
                unsigned l_283 = 0x7E11A7BDL;
                char l_292[3][8] = {{0x96L,0x96L,0x96L,0x96L,0x96L,0x96L,0x96L,0x96L},{0x96L,0x96L,0x96L,0x96L,0x96L,0x96L,0x96L,0x96L},{0x96L,0x96L,0x96L,0x96L,0x96L,0x96L,0x96L,0x96L}};
                unsigned short l_301[2];
                int i, j;
                for (i = 0; i < 5; i++)
                    l_210[i] = 0x01L;
                for (i = 0; i < 2; i++)
                    l_301[i] = 1UL;
                l_210[0] = g_209;
                if (g_80)
                {
                    l_150[3] = (safe_mul_func_int16_t_s_s(g_120, l_151));
                    for (l_138 = 2; (l_138 <= 8); l_138 += 1)
                    {
                        int i;
                        l_150[l_138] = l_150[l_138];
                    }
                    l_108 = (func_100(g_80, p_53, p_53, p_53) < (l_151 != (g_197[5][5][3] | (~l_210[1]))));
                }
                else
                {
                    unsigned l_213 = 0xCE4AA4CFL;
                    int l_245 = 0L;
                    unsigned char l_253[2][6];
                    int l_256 = 0x7AC2C4E3L;
                    int i, j;
                    for (i = 0; i < 2; i++)
                    {
                        for (j = 0; j < 6; j++)
                            l_253[i][j] = 0UL;
                    }
                    l_214 = (l_213 = g_25);
                    if ((safe_mod_func_uint16_t_u_u(((g_105 < (safe_rshift_func_uint8_t_u_u((l_159 && (safe_add_func_uint32_t_u_u(l_210[2], g_197[5][0][0]))), (1L != (func_70(p_53, l_149, g_105, g_82, p_54) == g_197[3][5][0]))))) || 0x9E1033DEL), 0xA988L)))
                    {
                        unsigned char l_221[5][7][7] = {{{4UL,1UL,248UL,254UL,0xCAL,1UL,1UL},{252UL,2UL,4UL,2UL,252UL,0xB9L,1UL},{0x3EL,251UL,0x23L,0xB7L,1UL,248UL,0x56L},{0x23L,0xB9L,254UL,5UL,4UL,252UL,1UL},{0x3EL,0xB7L,0x77L,1UL,0x77L,0xB7L,0x3EL},{252UL,0xB7L,0UL,1UL,2UL,0x3EL,4UL},{4UL,0xB9L,0x2AL,0UL,1UL,0x56L,251UL}},{{254UL,251UL,0UL,0UL,0xB7L,0UL,0UL},{2UL,2UL,0x77L,0UL,1UL,0x23L,4UL},{0xB7L,1UL,254UL,0UL,4UL,251UL,0xB9L},{5UL,248UL,0x23L,1UL,1UL,255UL,1UL},{1UL,4UL,4UL,1UL,0xB7L,255UL,0x2AL},{1UL,0x23L,248UL,5UL,1UL,251UL,0UL},{0UL,254UL,1UL,0xB7L,2UL,0x3EL,0UL}},{{0x2AL,1UL,5UL,5UL,1UL,0x2AL,0x77L},{0x2AL,4UL,248UL,255UL,0x23L,0xB9L,254UL},{4UL,0UL,254UL,1UL,0xB7L,2UL,0x23L},{0xB7L,4UL,0x56L,1UL,1UL,0x56L,4UL},{251UL,1UL,0x56L,2UL,4UL,1UL,248UL},{252UL,255UL,254UL,0x3EL,1UL,0xCAL,1UL},{0x56L,0x3EL,248UL,2UL,254UL,254UL,2UL}},{{5UL,1UL,5UL,1UL,254UL,0xB7L,251UL},{255UL,0xCAL,0x77L,1UL,1UL,1UL,0xB9L},{1UL,0x77L,0xCAL,255UL,4UL,0xB7L,0xB7L},{1UL,5UL,1UL,5UL,1UL,254UL,0xB7L},{2UL,248UL,0x3EL,0x56L,0xB7L,0xCAL,0xB9L},{0x3EL,254UL,255UL,252UL,0x23L,1UL,251UL},{2UL,0x56L,0x2AL,0x56L,0x2AL,4UL,248UL}},{{0x23L,4UL,252UL,0UL,0xCAL,248UL,1UL},{1UL,0x77L,5UL,252UL,0x56L,1UL,0xB9L},{1UL,0xB9L,252UL,2UL,4UL,2UL,252UL},{0xCAL,0xCAL,0x2AL,2UL,0UL,251UL,1UL},{4UL,0UL,1UL,252UL,1UL,0xB9L,0x77L},{4UL,254UL,251UL,0UL,0UL,0xB7L,0UL},{0x56L,1UL,1UL,0x56L,4UL,0xB7L,5UL}}};
                        int i, j, k;
                        l_222 = l_221[0][5][3];
                        l_109 = (safe_mod_func_uint16_t_u_u(func_100((safe_mod_func_uint32_t_u_u(((p_55 | ((safe_lshift_func_uint8_t_u_s(g_197[2][4][3], p_55)) != ((l_245 = (safe_lshift_func_int16_t_s_u((safe_sub_func_uint32_t_u_u(p_55, (!(safe_rshift_func_int8_t_s_u((l_95 = (func_70((+(g_178 == (l_244 = (l_150[2] != (g_119 = ((safe_add_func_int32_t_s_s(p_55, (safe_sub_func_uint32_t_u_u((safe_lshift_func_int8_t_s_s((safe_lshift_func_int16_t_s_u((l_159 && ((p_55 && 253UL) > p_54)), 4)), l_243)), 0xAC85E214L)))) || g_209)))))), p_55, p_54, l_149, p_54) != g_178)), 2))))), 3))) < p_54))) ^ p_55), (-2L))), l_98, g_120, g_209), l_108));
                    }
                    else
                    {
                        return p_53;
                    }
                    for (l_106 = 0; (l_106 > 46); l_106 = safe_add_func_uint8_t_u_u(l_106, 3))
                    {
                        unsigned short l_248 = 8UL;
                        unsigned l_261 = 0xBA510863L;
                        int l_271 = (-6L);
                        g_182 = func_70(g_82, (l_248 < ((safe_add_func_uint8_t_u_u(0x6FL, (p_53 = l_210[0]))) && l_165)), l_109, l_245, ((safe_lshift_func_int8_t_s_s((p_55 = l_253[0][2]), (((safe_rshift_func_uint8_t_u_u(((-1L) < p_54), l_256)) >= l_165) <= 0xB701C6ACL))) < 0x97EBL));
                        l_151 = (safe_rshift_func_int8_t_s_u(((safe_mod_func_uint16_t_u_u((1L && func_100(l_244, l_261, (safe_unary_minus_func_uint16_t_u(0xA6DBL)), (p_53 | func_100(l_214, (safe_mul_func_uint8_t_u_u((g_105 = (l_150[5] = ((safe_sub_func_uint8_t_u_u((func_100(p_55, (((((func_70(func_100(g_197[5][5][3], ((l_222 = p_54) || p_53), p_55, p_54), g_105, p_54, g_179, g_80) >= l_253[0][2]) >= p_55) == g_105) <= g_178) < 0xDEL), l_261, p_55) <= g_209), 0x09L)) == 0L))), 255UL)), p_53, g_178)))), 7UL)) != 0xE8L), 5));
                        l_245 = func_70((safe_mul_func_uint8_t_u_u((func_100((p_55 = (l_109 || (safe_rshift_func_uint16_t_u_u(g_178, (p_54 ^ g_28))))), g_80, (l_271 = p_53), (safe_mod_func_uint8_t_u_u(l_213, (safe_sub_func_int16_t_s_s((g_197[5][5][3] > (g_99 = l_245)), 1L))))) >= l_261), 0xC8L)), l_108, g_182, g_179, g_22[3]);
                    }
                }
                if (l_108)
                    continue;
                if ((0x2FL & 0xE6L))
                {
                    short l_276 = 0x8972L;
                    int l_307 = 0x28F4E3D5L;
                    if (func_70((p_55 = (!func_100(p_53, func_100((g_164 = func_100((g_209 != (g_22[3] > (((l_150[5] = (l_276 <= 0x4D96L)) | (safe_mul_func_uint8_t_u_u(g_164, l_276))) | p_54))), (safe_sub_func_int8_t_s_s((safe_add_func_uint16_t_u_u(((func_70(l_283, p_55, g_178, p_53, p_54) ^ g_28) >= g_82), p_54)), (-3L))), l_193, g_119)), l_284, p_54, l_283), l_283, p_55))), g_82, g_99, g_28, l_285))
                    {
                        int l_306 = (-9L);
                        g_182 = (l_222 = (safe_mul_func_uint8_t_u_u((((safe_mul_func_uint8_t_u_u((safe_add_func_int32_t_s_s(p_53, (l_292[1][7] = p_53))), func_100(g_22[3], (g_178 = (safe_mul_func_uint16_t_u_u(0x1B81L, (((l_301[0] = (safe_rshift_func_int16_t_s_u((l_151 = (g_119 = (l_150[2] = (0x36L && (safe_add_func_uint8_t_u_u(5UL, (g_164 = (safe_mul_func_int16_t_s_s(p_53, g_25))))))))), 5))) != 0UL) == 4294967289UL)))), p_54, l_106))) != 4294967295UL) <= 0x0BF5C7C5L), p_53)));
                        l_150[5] = (safe_add_func_uint32_t_u_u(0x5D527B39L, ((-3L) <= (safe_mul_func_uint16_t_u_u((g_179 = l_276), (((g_119 > (g_82 == func_70(l_244, p_53, (g_105 = (l_151 = l_276)), p_55, l_301[0]))) != 0L) | g_178))))));
                        l_306 = ((~p_54) == p_53);
                        g_182 = (l_244 = (-9L));
                    }
                    else
                    {
                        unsigned short l_314 = 65535UL;
                        g_315 = (func_100(((l_307 = (l_244 = (0x4B616523L && 0x8FD67EFAL))) <= (g_182 = ((safe_rshift_func_int16_t_s_s((g_119 = l_176), p_55)) || (safe_mod_func_uint16_t_u_u((l_314 = func_70(p_53, g_25, g_179, g_119, (safe_rshift_func_int16_t_s_s((g_178 || g_164), 12)))), p_54))))), p_53, g_178, l_214) >= 0xA8L);
                        g_334 = (((func_70((p_53 == (l_222 = g_178)), (l_244 = ((safe_sub_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_s(l_193, (safe_mod_func_int16_t_s_s((safe_add_func_int16_t_s_s(p_53, ((+(~(safe_mul_func_uint8_t_u_u((safe_mul_func_int16_t_s_s(l_106, func_100((safe_mod_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s(1L, 7)), (l_276 || 0x89D9L))), (l_138 & l_301[0]), p_55, p_55))), 0x93L)))) | l_176))), g_332)))), 0xC06B0F98L)) == g_315)), g_178, l_333[3][4][3], l_314) > p_53) < g_82) || g_80);
                        l_151 = (g_182 = func_70((p_55 = (safe_rshift_func_int16_t_s_u(3L, 0))), l_222, g_332, g_179, func_100(g_209, p_53, p_53, l_337)));
                    }
                    g_182 = (safe_mul_func_uint8_t_u_u((p_53 = (g_179 ^ 0x66L)), g_332));
                    for (g_332 = 0; (g_332 > 43); g_332++)
                    {
                        unsigned l_342 = 0UL;
                        g_182 = l_150[3];
                        if (l_342)
                            break;
                    }
                }
                else
                {
                    int l_361 = 1L;
                    for (g_182 = (-11); (g_182 < 2); g_182 = safe_add_func_int16_t_s_s(g_182, 8))
                    {
                        l_108 = (~p_54);
                        if (l_292[1][4])
                            continue;
                    }
                    l_150[4] = ((safe_unary_minus_func_int32_t_s((safe_sub_func_int16_t_s_s((((l_222 = l_109) == (+0x9576L)) > (l_151 = (0x19FD23FBL < p_55))), ((p_54 <= ((((g_28 == ((p_53 = g_197[3][2][2]) <= g_315)) ^ g_164) & g_179) < g_80)) <= 0x9C45E83AL))))) | g_164);
                    l_352 = ((0xDEL ^ (g_105 = 254UL)) || ((safe_mod_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s(g_22[0], 4)), 0xADL)) | g_28));
                    for (l_98 = 21; (l_98 == 5); --l_98)
                    {
                        g_182 = (p_55 < (((safe_lshift_func_int16_t_s_s(((l_193 && (safe_sub_func_uint32_t_u_u(4294967295UL, (g_99 != (p_53 > func_70((l_159 ^ (((g_120 = (!0x30C10BCBL)) || l_176) < ((g_119 || g_178) || 0x43L))), g_315, g_197[1][1][1], l_361, p_54)))))) >= l_362), p_55)) && p_54) | l_154[0][1]));
                    }
                }
            }
        }
        l_151 = 0L;
        return p_55;
    }
    return p_55;
}







static short func_61(unsigned char p_62, const short p_63, short p_64, unsigned p_65, char p_66)
{
    int l_67[7] = {(-7L),(-7L),0x4A2B52F1L,(-7L),(-7L),0x4A2B52F1L,(-7L)};
    int l_68 = (-5L);
    unsigned short l_69 = 65534UL;
    int l_76 = 3L;
    int i;
    l_68 = l_67[1];
    l_76 = (p_63 < (0x92B2C22BL | ((0x9EDEL && (((l_68 = 0x4A9BL) | (l_69 = 0xBD72L)) || func_70(((p_62 && g_22[3]) == 0x6D0CL), (p_66 != g_22[3]), g_28, l_67[5], g_28))) < p_65)));
    for (l_68 = 0; (l_68 == (-6)); l_68 = safe_sub_func_int16_t_s_s(l_68, 9))
    {
        unsigned l_79[9][6][4] = {{{0x56DE04B3L,5UL,5UL,0x56DE04B3L},{5UL,0x56DE04B3L,5UL,5UL},{0x56DE04B3L,0x56DE04B3L,0UL,0x56DE04B3L},{0x56DE04B3L,5UL,5UL,0x56DE04B3L},{5UL,0x56DE04B3L,5UL,5UL},{0x56DE04B3L,0x56DE04B3L,0UL,0x56DE04B3L}},{{0x56DE04B3L,5UL,5UL,0x56DE04B3L},{5UL,0x56DE04B3L,5UL,5UL},{0x56DE04B3L,0x56DE04B3L,0x56DE04B3L,5UL},{5UL,0UL,0UL,5UL},{0UL,5UL,0UL,0UL},{5UL,5UL,0x56DE04B3L,5UL}},{{5UL,0UL,0UL,5UL},{0UL,5UL,0UL,0UL},{5UL,5UL,0x56DE04B3L,5UL},{5UL,0UL,0UL,5UL},{0UL,5UL,0UL,0UL},{5UL,5UL,0x56DE04B3L,5UL}},{{5UL,0UL,0UL,5UL},{0UL,5UL,0UL,0UL},{5UL,5UL,0x56DE04B3L,5UL},{5UL,0UL,0UL,5UL},{0UL,5UL,0UL,0UL},{5UL,5UL,0x56DE04B3L,5UL}},{{5UL,0UL,0UL,5UL},{0UL,5UL,0UL,0UL},{5UL,5UL,0x56DE04B3L,5UL},{5UL,0UL,0UL,5UL},{0UL,5UL,0UL,0UL},{5UL,5UL,0x56DE04B3L,5UL}},{{5UL,0UL,0UL,5UL},{0UL,5UL,0UL,0UL},{5UL,5UL,0x56DE04B3L,5UL},{5UL,0UL,0UL,5UL},{0UL,5UL,0UL,0UL},{5UL,5UL,0x56DE04B3L,5UL}},{{5UL,0UL,0UL,5UL},{0UL,5UL,0UL,0UL},{5UL,5UL,0x56DE04B3L,5UL},{5UL,0UL,0UL,5UL},{0UL,5UL,0UL,0UL},{5UL,5UL,0x56DE04B3L,5UL}},{{5UL,0UL,0UL,5UL},{0UL,5UL,0UL,0UL},{5UL,5UL,0x56DE04B3L,5UL},{5UL,0UL,0UL,5UL},{0UL,5UL,0UL,0UL},{5UL,5UL,0x56DE04B3L,5UL}},{{5UL,0UL,0UL,5UL},{0UL,5UL,0UL,0UL},{5UL,5UL,0x56DE04B3L,5UL},{5UL,0UL,0UL,5UL},{0UL,5UL,0UL,0UL},{5UL,5UL,0x56DE04B3L,5UL}}};
        int i, j, k;
        g_80 = (((0xD22FL ^ l_79[5][0][0]) <= p_64) == g_22[3]);
    }
    return g_28;
}







static unsigned func_70(char p_71, const int p_72, unsigned char p_73, unsigned p_74, char p_75)
{
    return p_72;
}







static short func_100(char p_101, char p_102, unsigned p_103, int p_104)
{
    int l_121 = (-1L);
    int l_122[7] = {1L,1L,1L,1L,1L,1L,1L};
    int l_129 = 1L;
    int l_130 = 1L;
    int i;
    p_104 = func_70(p_102, (safe_sub_func_int32_t_s_s((safe_lshift_func_int8_t_s_s(g_22[3], (safe_unary_minus_func_uint16_t_u((p_101 > (l_130 = (safe_add_func_uint32_t_u_u(((safe_mod_func_int16_t_s_s((l_122[3] = ((g_120 = (g_119 = p_104)) || l_121)), (l_129 = (~((safe_add_func_int8_t_s_s(func_70(func_70(p_101, func_70(l_121, g_22[2], (safe_mul_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u(l_121, l_121)), p_102)), p_103, p_103), p_103, g_80, l_121), g_82, l_121, g_28, p_104), p_101)) >= g_22[1]))))) || 7L), 4294967294UL)))))))), 1L)), g_80, g_28, l_121);
    return g_119;
}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(g_6[i][j], "g_6[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_22[i], "g_22[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_25, "g_25", print_hash_value);
    transparent_crc(g_28, "g_28", print_hash_value);
    transparent_crc(g_80, "g_80", print_hash_value);
    transparent_crc(g_82, "g_82", print_hash_value);
    transparent_crc(g_99, "g_99", print_hash_value);
    transparent_crc(g_105, "g_105", print_hash_value);
    transparent_crc(g_119, "g_119", print_hash_value);
    transparent_crc(g_120, "g_120", print_hash_value);
    transparent_crc(g_164, "g_164", print_hash_value);
    transparent_crc(g_178, "g_178", print_hash_value);
    transparent_crc(g_179, "g_179", print_hash_value);
    transparent_crc(g_182, "g_182", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_197[i][j][k], "g_197[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_209, "g_209", print_hash_value);
    transparent_crc(g_315, "g_315", print_hash_value);
    transparent_crc(g_332, "g_332", print_hash_value);
    transparent_crc(g_334, "g_334", print_hash_value);
    transparent_crc(g_443, "g_443", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_466[i], "g_466[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_469, "g_469", print_hash_value);
    transparent_crc(g_519, "g_519", print_hash_value);
    transparent_crc(g_530, "g_530", print_hash_value);
    transparent_crc(g_552, "g_552", print_hash_value);
    transparent_crc(g_563, "g_563", print_hash_value);
    transparent_crc(g_643, "g_643", print_hash_value);
    transparent_crc(g_725, "g_725", print_hash_value);
    transparent_crc(g_732, "g_732", print_hash_value);
    transparent_crc(g_812, "g_812", print_hash_value);
    transparent_crc(g_879, "g_879", print_hash_value);
    transparent_crc(g_1014, "g_1014", print_hash_value);
    transparent_crc(g_1086, "g_1086", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_1089[i], "g_1089[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1156, "g_1156", print_hash_value);
    transparent_crc(g_1201, "g_1201", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_1205[i], "g_1205[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
