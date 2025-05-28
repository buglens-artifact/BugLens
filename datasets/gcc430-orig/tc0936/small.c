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



static int g_18 = 0x59F89F2EL;
static unsigned g_36[2][6][6] = {{{0xDB47DC46L,0xB38A83A5L,0xCF6D7078L,1UL,0xCF6D7078L,0xB38A83A5L},{4294967295UL,0xDB47DC46L,0xCF6D7078L,1UL,0UL,1UL},{0x20B395B9L,1UL,0xB38A83A5L,0xB38A83A5L,1UL,0x20B395B9L},{0xB38A83A5L,1UL,0x20B395B9L,8UL,0UL,0xCF6D7078L},{0xCF6D7078L,0xDB47DC46L,4294967295UL,0xDB47DC46L,0xCF6D7078L,1UL},{0xCF6D7078L,0xB38A83A5L,0xDB47DC46L,8UL,0xB1ED3090L,0xB1ED3090L}},{{0xB38A83A5L,0UL,0UL,0xB38A83A5L,4294967295UL,0xB1ED3090L},{0x20B395B9L,0xB1ED3090L,0xDB47DC46L,1UL,0xDB47DC46L,0x20B395B9L},{0xCF6D7078L,1UL,0xCF6D7078L,0xB38A83A5L,0xDB47DC46L,8UL},{0UL,0xE2E31B54L,0xB1ED3090L,0xCF6D7078L,0xCF6D7078L,0xB1ED3090L},{1UL,1UL,4294967295UL,0xCF6D7078L,0xE2E31B54L,0xB38A83A5L},{0UL,4294967295UL,8UL,0xB38A83A5L,8UL,4294967295UL}}};
static unsigned g_47 = 0xBA309CE0L;
static unsigned **g_49 = (void*)0;
static int g_68 = 4L;
static int g_72 = 0x2D8B6467L;
static short g_92 = 0xB994L;
static short *g_94[10] = {&g_92,(void*)0,&g_92,&g_92,(void*)0,&g_92,&g_92,(void*)0,&g_92,&g_92};
static short **g_93 = &g_94[2];
static int g_97 = 0xFEA94406L;
static int g_98 = 0x6B81C74FL;
static int *g_99 = &g_68;
static unsigned short g_108 = 0x25C7L;
static unsigned char g_117 = 0x40L;
static int g_122 = 0x80B3DF57L;
static char g_131[7] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
static char g_175 = 1L;
static char g_176[1][10][8] = {{{(-10L),0x29L,1L,0x45L,(-1L),1L,(-10L),1L},{(-10L),1L,0x20L,1L,(-10L),0xE4L,(-1L),0xC5L},{0x58L,1L,(-1L),6L,0x19L,1L,1L,1L},{(-1L),0x29L,(-1L),0xC5L,(-1L),0x29L,(-1L),1L},{0x19L,0x45L,0x20L,0xC5L,(-1L),0xE4L,(-10L),1L},{0x58L,0xC5L,1L,6L,(-1L),6L,1L,0xC5L},{0x19L,0x29L,0x58L,1L,1L,0x29L,(-10L),6L},{0x19L,1L,0xCDL,0xC5L,(-10L),0xBAL,(-10L),0xC5L},{(-1L),0xC5L,(-1L),0x29L,(-1L),1L,0x58L,0xC5L},{(-1L),1L,0x58L,0xC5L,1L,6L,(-1L),6L}}};
static char g_181[9] = {0x29L,0x29L,0x29L,0x29L,0x29L,0x29L,0x29L,0x29L,0x29L};
static unsigned g_187[6] = {4294967290UL,4294967290UL,4294967290UL,4294967290UL,4294967290UL,4294967290UL};
static short g_201 = 0x9619L;
static char **g_290 = (void*)0;
static unsigned g_373 = 0x2FBED118L;
static unsigned g_377[3][9][7] = {{{0x4634F6A9L,1UL,0x350BCA18L,4294967295UL,4294967295UL,0x0E1155E2L,0x385C4094L},{0x5B90CCFEL,0x0E969956L,4294967291UL,1UL,0UL,4294967295UL,1UL},{0x0230161DL,0x53E614E4L,0x2D0E47E0L,0xCE5E2CB4L,0x6186FDFCL,1UL,0xD855F06FL},{4294967292UL,0UL,1UL,0x5C909B22L,0x8FE78D94L,0xA790F047L,0UL},{9UL,4294967289UL,0UL,0x2E0544A2L,0xF26658B0L,0xE9864FAAL,0xFD99F1A8L},{0x8DC470D1L,0xF26658B0L,0xD855F06FL,0x2E0544A2L,1UL,0x4F19F902L,0UL},{4294967292UL,0x3A9199F7L,0xF8C046B6L,0x5C909B22L,0x2D0E47E0L,0UL,0UL},{0x6186FDFCL,4294967292UL,0x8DC470D1L,0xCE5E2CB4L,0x8DC470D1L,0x24A25CA2L,0xCE5E2CB4L},{4294967292UL,0xA2A7C73BL,0x8DC470D1L,0x350BCA18L,0x81C14508L,0x350BCA18L,0x8DC470D1L}},{{4294967287UL,4294967287UL,4294967291UL,0x2D0E47E0L,4294967295UL,0UL,0xA790F047L},{6UL,0x9FF4784DL,0UL,1UL,8UL,0x672197DCL,1UL},{0x0230161DL,4294967294UL,0x53E614E4L,9UL,4294967295UL,0x0E1155E2L,0UL},{1UL,0x8DC470D1L,0x9FF4784DL,0x99E25D69L,0x81C14508L,0xD855F06FL,8UL},{0xE226C165L,0x5B90CCFEL,0x88F0C4BBL,1UL,0x8DC470D1L,4294967295UL,0x23B27CE1L},{0xA790F047L,0x54ABD768L,0x0230161DL,4294967292UL,0xD5DAECA4L,4294967295UL,0x5B90CCFEL},{4294967291UL,4294967295UL,0xA34BAC0EL,4294967292UL,0x350BCA18L,0xAB82B68CL,0UL},{0x33A2BE19L,0x78FB9EDCL,1UL,0x8FE78D94L,0xCE5E2CB4L,0xAB82B68CL,0UL},{4294967290UL,0x385C4094L,0x78FB9EDCL,0UL,0UL,4294967295UL,0x9C950097L}},{{4294967295UL,0x2E0544A2L,4294967294UL,4294967291UL,0x5A67F2C6L,4294967295UL,1UL},{0x5C909B22L,4294967295UL,0xE226C165L,4294967287UL,0x6186FDFCL,0xD855F06FL,0x6186FDFCL},{0xD5DAECA4L,0xF26658B0L,0xF26658B0L,0xD5DAECA4L,4294967295UL,0x0E1155E2L,0x672197DCL},{0x6186FDFCL,0xF8C046B6L,0x23B27CE1L,0x9C950097L,0x54ABD768L,4294967292UL,1UL},{0xA2A7C73BL,4294967295UL,4294967291UL,0xAB82B68CL,4294967289UL,0x0E969956L,4294967292UL},{0x350BCA18L,6UL,0x436BC5BCL,4294967295UL,0x0E969956L,4294967290UL,0x5B90CCFEL},{0x4F19F902L,1UL,0x88F0C4BBL,1UL,0x81C14508L,1UL,4294967294UL},{0UL,0x53E614E4L,0x4F19F902L,0x81C14508L,0x2D0E47E0L,0x350BCA18L,1UL},{1UL,1UL,4294967290UL,1UL,0x5A67F2C6L,0x88F0C4BBL,0x0E1155E2L}}};
static unsigned char *g_436[9] = {&g_117,&g_117,&g_117,&g_117,&g_117,&g_117,&g_117,&g_117,&g_117};
static unsigned *g_444 = &g_377[0][7][1];
static unsigned **g_443 = &g_444;
static short ***g_461 = &g_93;
static short ****g_460 = &g_461;
static short ****g_462 = (void*)0;
static unsigned char g_484 = 0x10L;
static short **g_518 = &g_94[2];
static unsigned short g_651 = 0x0606L;
static int **g_749 = (void*)0;
static unsigned ***g_769 = &g_443;
static unsigned short *g_772 = &g_651;
static unsigned short g_808 = 0xCEE3L;
static unsigned short g_912 = 0x2017L;
static unsigned char **g_938[10] = {&g_436[0],&g_436[5],&g_436[5],&g_436[0],&g_436[8],&g_436[0],&g_436[5],&g_436[5],&g_436[0],&g_436[8]};
static unsigned *g_1043 = &g_36[0][5][2];
static unsigned char g_1077 = 1UL;
static int g_1082 = 0x1056270CL;
static int *g_1106 = &g_72;
static unsigned ***g_1144 = &g_49;
static unsigned ****g_1143 = &g_1144;
static int *g_1240 = &g_122;
static int **g_1239[6] = {&g_1240,&g_1240,&g_1240,&g_1240,&g_1240,&g_1240};
static char ***g_1344 = &g_290;
static unsigned g_1382 = 0x21D7C253L;
static char *g_1389 = &g_176[0][2][6];
static char **g_1388 = &g_1389;
static int g_1420 = 7L;
static unsigned short g_1449 = 1UL;
static unsigned short **g_1497 = &g_772;
static unsigned *g_1515 = &g_373;
static unsigned ***g_1526 = &g_49;
static char g_1535 = 0x2AL;
static int *g_1537 = &g_98;



static int func_1(void);
static short func_2(unsigned p_3, int p_4, unsigned char p_5, unsigned p_6);
static unsigned func_7(char p_8);
static int func_12(unsigned char p_13, short p_14, char p_15, unsigned p_16, unsigned p_17);
static short func_19(unsigned char p_20);
static int func_22(int p_23, unsigned p_24, short p_25, int p_26);
static int * func_51(int p_52);
static int func_53(int p_54, unsigned *** p_55, unsigned * p_56, int * p_57);
static char func_58(int * p_59);
static int * func_60(short p_61);
static int func_1(void)
{
    unsigned char l_9[9][6][4] = {{{248UL,7UL,251UL,1UL},{0x14L,3UL,5UL,0x25L},{0x25L,0x14L,0x18L,2UL},{0x02L,0x72L,0x91L,0x4EL},{5UL,0xC5L,1UL,7UL},{250UL,5UL,0xCBL,254UL}},{{255UL,0xB7L,0x35L,0xE5L},{0xC5L,0x9CL,3UL,0x94L},{255UL,1UL,4UL,2UL},{0xEAL,0xCCL,2UL,255UL},{0xCBL,255UL,0x19L,254UL},{255UL,0UL,255UL,4UL}},{{0x5AL,255UL,255UL,255UL},{3UL,0UL,1UL,0x8DL},{4UL,7UL,0x60L,0UL},{0x72L,0xC2L,6UL,250UL},{0x72L,0xA4L,0x60L,0x02L},{4UL,250UL,1UL,1UL}},{{3UL,0xEAL,255UL,0x60L},{0x5AL,0x14L,255UL,0x35L},{255UL,0x56L,0x19L,0x25L},{0xCBL,0x72L,2UL,0x75L},{0xEAL,255UL,4UL,253UL},{255UL,6UL,3UL,7UL}},{{0x19L,3UL,0x02L,248UL},{253UL,0x8DL,0x9CL,0xB3L},{0xC6L,7UL,0xC2L,1UL},{0x51L,0x02L,5UL,0xF0L},{5UL,6UL,0UL,0xA4L},{0x14L,253UL,0x25L,0x69L}},{{0x75L,0x91L,0UL,0xB7L},{255UL,0x56L,255UL,3UL},{4UL,255UL,251UL,0x25L},{7UL,0xA4L,0x5AL,255UL},{0x19L,0x02L,1UL,1UL},{0xC6L,0xC6L,0x35L,0xC5L}},{{7UL,0x2AL,0x0BL,0x3CL},{0x4EL,5UL,2UL,0x0BL},{0x9CL,5UL,0x02L,0x3CL},{5UL,0x2AL,0xE5L,0xC5L},{255UL,0xC6L,0UL,1UL},{0xA0L,0x02L,0UL,255UL}},{{3UL,0xA4L,7UL,0x25L},{0x3CL,255UL,0x02L,3UL},{0UL,0x56L,0UL,0x72L},{251UL,0UL,0xF0L,5UL},{5UL,1UL,255UL,0x75L},{0x18L,0x4CL,0x72L,1UL}},{{0x91L,7UL,0x25L,0x19L},{1UL,0x9CL,0x51L,3UL},{0xCBL,250UL,0x72L,0x42L},{0x35L,6UL,0UL,0x9CL},{2UL,6UL,246UL,1UL},{0x16L,0x1FL,0xC5L,0xCCL}}};
    unsigned *l_1431 = &g_1382;
    short *l_1448[2];
    int l_1490 = 5L;
    int *l_1492 = &g_1420;
    unsigned ***l_1534 = &g_49;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_1448[i] = &g_92;
lbl_1499:
    (*g_99) = (((g_1449 = func_2(func_7(l_9[5][4][2]), l_9[1][5][2], l_9[1][4][0], (((0xA9L != 255UL) > func_53(((void*)0 != &g_769), (*g_1143), l_1431, l_1431)) | l_9[5][4][2]))) | l_9[0][4][1]) == l_9[5][4][2]);
    for (g_122 = 1; (g_122 >= 0); g_122 -= 1)
    {
        int *l_1452 = &g_1420;
        int **l_1458 = &g_1240;
        unsigned ***l_1489[7][6] = {{&g_49,&g_49,&g_49,&g_49,&g_49,&g_49},{&g_49,&g_49,&g_49,&g_49,&g_49,&g_49},{&g_49,&g_49,&g_49,&g_49,&g_49,&g_49},{&g_49,&g_49,&g_49,&g_49,&g_49,&g_49},{&g_49,&g_49,&g_49,&g_49,&g_49,&g_49},{&g_49,&g_49,&g_49,&g_49,&g_49,&g_49},{&g_49,&g_49,&g_49,&g_49,&g_49,&g_49}};
        unsigned ***l_1524 = (void*)0;
        int i, j;
        (*g_99) = (safe_mod_func_uint8_t_u_u(g_181[(g_122 + 7)], l_9[5][4][2]));
        (*g_99) |= (l_1452 == l_1431);
        for (g_47 = 0; (g_47 <= 9); g_47 += 1)
        {
            int *l_1454 = &g_97;
            char **l_1488 = (void*)0;
            int **l_1491[2][5][8] = {{{&g_99,&l_1452,(void*)0,(void*)0,&l_1454,&l_1454,(void*)0,(void*)0},{&g_99,&g_99,&g_99,&g_1106,(void*)0,&l_1452,&g_99,(void*)0},{&g_1106,(void*)0,&l_1452,&g_1106,&g_99,&g_1106,&l_1452,(void*)0},{(void*)0,&g_99,(void*)0,&g_1106,&g_99,&l_1452,&g_99,(void*)0},{&g_1106,&g_99,(void*)0,(void*)0,(void*)0,(void*)0,&g_99,&g_1106}},{{&l_1454,(void*)0,(void*)0,&l_1452,&g_99,&l_1454,&l_1452,&g_1106},{&g_99,&l_1454,&l_1452,&g_1106,&l_1452,&l_1454,&g_99,&l_1452},{&g_1106,(void*)0,&g_99,&g_99,(void*)0,(void*)0,&g_1106,&g_1106},{(void*)0,(void*)0,&l_1454,&l_1454,(void*)0,(void*)0,&l_1452,&g_99},{&g_99,&l_1452,&g_99,&g_1106,(void*)0,&g_99,(void*)0,&g_99}}};
            unsigned char l_1510 = 255UL;
            unsigned **l_1518[5] = {&g_1043,&g_1043,&g_1043,&g_1043,&g_1043};
            int i, j, k;
            if ((*g_99))
            {
                for (g_72 = 9; (g_72 >= 0); g_72 -= 1)
                {
                    int **l_1453 = &g_99;
                    (*l_1453) = &g_97;
                }
            }
            else
            {
                unsigned char *l_1465 = &l_9[5][4][2];
                unsigned ****l_1470 = &g_1144;
                int l_1476 = 1L;
                for (g_912 = 1; (g_912 <= 9); g_912 += 1)
                {
                    int **l_1455 = &g_1106;
                    (*l_1455) = l_1454;
                }
                (*g_99) ^= 0xE93549E3L;
                for (g_912 = 2; (g_912 <= 9); g_912 += 1)
                {
                    unsigned l_1477 = 0x4339C67BL;
                    for (g_651 = 1; (g_651 <= 9); g_651 += 1)
                    {
                        int ***l_1459 = (void*)0;
                        int ***l_1460 = &l_1458;
                        unsigned short *l_1461 = (void*)0;
                        unsigned short *l_1462[4] = {&g_651,&g_651,&g_651,&g_651};
                        int i, j, k;
                        (*g_1106) = (safe_sub_func_uint16_t_u_u((g_1449 = (((*l_1460) = l_1458) == (void*)0)), 0L));
                        (*l_1452) |= ((0xBDL == 0xEBL) | g_36[g_122][(g_122 + 2)][(g_122 + 1)]);
                        (*g_1106) = (g_377[g_122][(g_122 + 1)][(g_122 + 2)] == (g_377[g_122][g_122][g_122] && (l_1465 == (void*)0)));
                    }
                    for (g_97 = 1; (g_97 >= 0); g_97 -= 1)
                    {
                        int l_1473 = 0x9EBE516BL;
                        g_98 |= (((safe_add_func_uint16_t_u_u(((-1L) != (safe_div_func_uint16_t_u_u((((***g_769) = (((l_1470 = &g_1144) != &g_1144) > (0x60A791B2L <= (((((*g_772) = ((*l_1452) <= ((*g_1389) < (safe_rshift_func_uint16_t_u_u((l_1473 < (safe_lshift_func_int8_t_s_u(0xD7L, 3))), (*g_772)))))) != g_72) || l_1476) > (-1L))))) && 1UL), l_1477))), g_36[1][5][3])) && (*l_1452)) < (*g_99));
                        (*g_99) = (1L <= (safe_add_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s((safe_div_func_uint32_t_u_u((safe_rshift_func_int8_t_s_s(func_53(((*g_99) | (0x8AL ^ (l_1488 == ((*g_1344) = (*g_1344))))), l_1489[2][5], l_1454, &g_97), 3)), 4UL)), (*l_1452))), (-6L))));
                        l_1490 = 0x73EC90EBL;
                    }
                }
                (*l_1454) &= l_9[5][4][2];
            }
            g_99 = l_1452;
            for (g_808 = 0; (g_808 <= 9); g_808 += 1)
            {
                unsigned ***l_1508 = &g_49;
                int *l_1509 = &g_1420;
                short ****l_1531[9] = {&g_461,&g_461,&g_461,&g_461,&g_461,&g_461,&g_461,&g_461,&g_461};
                int i, j, k;
                for (g_72 = 1; (g_72 >= 0); g_72 -= 1)
                {
                    int i, j, k;
                    (*l_1454) = ((*l_1452) = g_36[g_72][(g_122 + 3)][g_72]);
                }
                if (g_36[g_122][(g_122 + 3)][(g_122 + 4)])
                    break;
                for (l_1490 = 0; (l_1490 <= 1); l_1490 += 1)
                {
                    unsigned char l_1494 = 1UL;
                    int *l_1495 = &l_1490;
                    int *l_1496 = &g_1420;
                    int i, j, k;
                    if (func_53(g_36[l_1490][(g_122 + 2)][(l_1490 + 3)], ((*g_1143) = l_1489[2][5]), &g_47, l_1492))
                    {
                        int *l_1493 = &g_98;
                        int i;
                        (*g_99) = func_53(g_187[(l_1490 + 1)], (*g_1143), &g_36[l_1490][(g_122 + 2)][(l_1490 + 3)], (l_1493 = (g_1106 = &g_98)));
                        return l_1494;
                    }
                    else
                    {
                        (*g_1106) = (*g_1106);
                        l_1496 = l_1495;
                        g_1497 = &g_772;
                    }
                    for (g_373 = 3; (g_373 <= 9); g_373 += 1)
                    {
                        int *l_1498 = &g_1420;
                        g_1106 = l_1498;
                    }
                    if (g_97)
                        goto lbl_1499;
                }
            }
        }
    }
    g_99 = g_1537;
    (*l_1492) = ((*g_1537) = 0x6B9E0D37L);
    return (*g_1537);
}







static short func_2(unsigned p_3, int p_4, unsigned char p_5, unsigned p_6)
{
    short l_1434[8][4][4] = {{{0xB853L,(-5L),(-7L),0xED9AL},{8L,0xD635L,1L,0x9A49L},{(-2L),1L,0xB853L,0x7F72L},{0xED9AL,0xFBB7L,0x9A49L,1L}},{{0xC4C6L,0x297BL,0xFBB7L,0L},{(-1L),0L,0L,(-2L)},{0x7A9AL,0x7F72L,0xAEA1L,0xAEA1L},{0L,0L,0x81B1L,0L}},{{(-1L),1L,(-1L),0xB058L},{1L,9L,0L,(-1L)},{0xAEA1L,9L,(-1L),0xB058L},{9L,1L,0xED9AL,0L}},{{0x297BL,0L,8L,0xAEA1L},{0x8C7BL,0x7F72L,1L,1L},{7L,0x9F8BL,2L,(-1L)},{0x8923L,9L,0xED9AL,8L}},{{(-2L),0x7F72L,0x297BL,1L},{(-1L),0xF9A6L,0x04ABL,(-1L)},{0x27D8L,0xFBB7L,0x27AFL,0xB853L},{0xC879L,2L,9L,0xF109L}},{{(-7L),0x9A49L,(-7L),0xC879L},{0xFBB7L,0x8923L,0x9F8BL,(-1L)},{0x7A9AL,0L,0L,0x8923L},{1L,0x81B1L,0L,(-1L)}},{{0x7A9AL,(-1L),0x9F8BL,1L},{0xFBB7L,9L,(-7L),0x297BL},{(-7L),0x297BL,9L,0x27D8L},{0xC879L,(-1L),0x27AFL,0L}},{{0x27D8L,(-7L),0x04ABL,(-2L)},{(-1L),(-2L),0x297BL,(-1L)},{(-2L),0xD635L,0xED9AL,1L},{0x8923L,0x27AFL,2L,0x81B1L}}};
    int *l_1437 = &g_72;
    unsigned l_1447 = 5UL;
    int i, j, k;
    (*g_1106) = (p_4 >= 0xE686L);
lbl_1440:
    (*g_99) ^= (!(safe_rshift_func_uint16_t_u_s((1UL >= (*g_772)), l_1434[7][1][1])));
    for (g_1077 = 0; (g_1077 != 21); ++g_1077)
    {
        l_1437 = &g_72;
        for (g_108 = 0; (g_108 == 2); ++g_108)
        {
            if (p_4)
                goto lbl_1440;
            (*g_1106) = func_7((safe_mod_func_int8_t_s_s(0x1BL, (*l_1437))));
        }
        for (g_484 = 0; (g_484 > 31); g_484 = safe_add_func_int32_t_s_s(g_484, 7))
        {
            int *l_1445 = (void*)0;
            int **l_1446 = &l_1437;
            (*l_1446) = l_1445;
        }
    }
    return l_1447;
}







static unsigned func_7(char p_8)
{
    unsigned short *l_1390[7] = {&g_651,&g_651,&g_651,&g_651,&g_651,&g_651,&g_651};
    int l_1426 = 0L;
    int **l_1427 = &g_1240;
    int ***l_1428 = (void*)0;
    int l_1429 = 0x30DE092FL;
    short *l_1430 = &g_92;
    int i;
    for (p_8 = 0; (p_8 <= (-21)); p_8--)
    {
        int *l_1419 = &g_1420;
        short *****l_1423 = &g_460;
    }
    (*g_1106) = func_22(l_1426, ((*g_1043) |= (((void*)0 != &p_8) ^ 0x2A97267AL)), ((*l_1430) &= (l_1429 ^= (l_1427 != (g_1239[0] = &g_1240)))), l_1426);
    return p_8;
}







static int func_12(unsigned char p_13, short p_14, char p_15, unsigned p_16, unsigned p_17)
{
    int *l_1391 = &g_72;
    int *l_1392[4][2][9] = {{{&g_98,&g_68,&g_68,&g_68,&g_98,&g_97,&g_98,&g_68,&g_68},{(void*)0,(void*)0,&g_98,(void*)0,(void*)0,&g_98,(void*)0,(void*)0,&g_98}},{{&g_98,&g_68,&g_68,&g_68,&g_98,&g_97,&g_98,&g_68,&g_68},{(void*)0,(void*)0,&g_98,(void*)0,(void*)0,&g_98,(void*)0,(void*)0,&g_98}},{{&g_98,&g_68,&g_68,&g_68,&g_98,&g_97,&g_98,&g_68,&g_68},{(void*)0,(void*)0,&g_98,(void*)0,(void*)0,&g_98,(void*)0,(void*)0,&g_98}},{{&g_98,&g_68,&g_68,&g_68,&g_98,&g_97,&g_98,&g_68,&g_68},{(void*)0,(void*)0,&g_98,(void*)0,(void*)0,&g_98,(void*)0,(void*)0,&g_98}}};
    unsigned l_1413[2];
    short *l_1418[8][1][9] = {{{&g_92,&g_92,(void*)0,&g_92,&g_92,(void*)0,&g_92,(void*)0,&g_201}},{{&g_92,&g_92,&g_92,&g_201,&g_92,&g_92,&g_92,&g_201,&g_92}},{{&g_92,&g_92,&g_201,(void*)0,&g_92,(void*)0,&g_92,&g_92,(void*)0}},{{&g_201,&g_92,&g_92,&g_92,&g_92,&g_92,&g_92,&g_201,&g_92}},{{&g_92,&g_92,&g_201,&g_92,&g_92,&g_92,&g_92,&g_92,&g_92}},{{(void*)0,&g_201,&g_201,&g_201,(void*)0,&g_92,&g_201,&g_201,&g_201}},{{&g_92,&g_92,&g_92,&g_201,&g_92,&g_92,&g_92,&g_201,&g_92}},{{(void*)0,(void*)0,&g_201,&g_201,&g_201,&g_92,(void*)0,&g_201,&g_201}}};
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_1413[i] = 1UL;
lbl_1414:
    (*l_1391) = (l_1391 == (l_1392[0][0][1] = (void*)0));
    for (g_484 = 0; (g_484 <= 8); g_484 += 1)
    {
        char l_1393 = (-3L);
        int *l_1394 = &g_72;
        (*l_1391) = func_22((+p_13), p_16, l_1393, (*l_1391));
        for (g_97 = 0; (g_97 <= 2); g_97 += 1)
        {
            int **l_1395 = &l_1394;
            int l_1396 = 0xEE59402DL;
            (*l_1395) = l_1394;
            for (g_122 = 2; (g_122 >= 0); g_122 -= 1)
            {
                char l_1409 = 0xE9L;
                int *l_1410 = &g_68;
                int i;
                for (g_201 = 5; (g_201 >= 1); g_201 -= 1)
                {
                    unsigned short l_1408 = 0UL;
                    for (p_13 = 0; (p_13 <= 2); p_13 += 1)
                    {
                        int l_1405 = 0x3EB72B99L;
                        unsigned ***l_1411 = (void*)0;
                        int *l_1412 = (void*)0;
                        int i, j, k;
                        l_1396 &= ((*l_1394) &= ((void*)0 != g_436[(g_97 + 5)]));
                        if (g_187[(p_13 + 3)])
                            break;
                        (*l_1394) = func_53(((l_1413[0] = func_53((safe_lshift_func_uint16_t_u_s((safe_rshift_func_int8_t_s_s(((safe_add_func_int16_t_s_s(0xB9C2L, (safe_lshift_func_uint8_t_u_u((g_377[p_13][(g_201 + 3)][(g_122 + 1)] ^ g_377[g_122][g_122][(g_97 + 3)]), (l_1405 = g_377[g_97][(g_97 + 1)][(g_122 + 2)]))))) <= g_377[p_13][g_484][g_122]), func_53((((65535UL & (g_377[g_122][g_484][(p_13 + 3)] < g_377[g_97][g_201][(p_13 + 1)])) < (func_22(((*l_1391) |= (safe_div_func_uint8_t_u_u(7UL, p_15))), p_15, l_1408, l_1409) != (*g_1389))) | 1UL), (*g_1143), l_1391, l_1410))), p_13)), l_1411, l_1410, l_1412)) < p_16), (*g_1143), l_1392[0][0][1], &g_98);
                    }
                    for (g_108 = 0; (g_108 <= 0); g_108 += 1)
                    {
                        int i, j, k;
                        if (g_187[(g_122 + 1)])
                            break;
                        if (g_377[g_97][(g_97 + 3)][g_108])
                            break;
                        l_1394 = l_1394;
                        if (g_484)
                            goto lbl_1414;
                    }
                }
                (**l_1395) = g_187[(g_97 + 3)];
                for (g_1077 = 2; (g_1077 <= 8); g_1077 += 1)
                {
                    int i, j, k;
                    if (g_377[g_97][g_97][(g_122 + 1)])
                        break;
                }
            }
        }
    }
    for (g_912 = 0; (g_912 <= 1); g_912 += 1)
    {
        short l_1415 = 0x706DL;
        unsigned char *l_1416 = (void*)0;
        unsigned char *l_1417 = &g_117;
        int i;
        (*l_1391) = (0xDAAE3553L || (g_97 ^= (((((*g_1389) = (0xC621L > (l_1413[g_912] != (*l_1391)))) >= ((*l_1417) = (!l_1415))) <= (((***g_460) = (void*)0) != l_1418[7][0][2])) < ((*g_772) = p_14))));
    }
    (*l_1391) = p_16;
    return p_13;
}







static short func_19(unsigned char p_20)
{
    int l_34 = 1L;
    char ***l_911 = &g_290;
    int l_914 = (-10L);
    unsigned l_915 = 0xEE90828AL;
    unsigned ***l_933 = &g_49;
    unsigned l_935 = 0UL;
    int *l_954 = &g_98;
    short ****l_979 = (void*)0;
    unsigned ***l_994 = &g_443;
    unsigned ***l_1014[9] = {&g_49,&g_49,&g_49,&g_49,&g_49,&g_49,&g_49,&g_49,&g_49};
    short l_1018 = 0L;
    unsigned **l_1025[7][1];
    unsigned char l_1068 = 8UL;
    short l_1074[2];
    unsigned short l_1135 = 1UL;
    int l_1159 = 0xAD3E1366L;
    unsigned *l_1249 = (void*)0;
    unsigned ***l_1368 = &g_49;
    int i, j;
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 1; j++)
            l_1025[i][j] = &g_444;
    }
    for (i = 0; i < 2; i++)
        l_1074[i] = 1L;
    if (p_20)
    {
        char l_21[9] = {0x70L,0x70L,0x48L,0x70L,0x70L,0x48L,0x70L,0x70L,0x48L};
        unsigned *l_35 = &g_36[1][5][3];
        int *l_897 = &g_98;
        char *l_903 = (void*)0;
        char *l_904 = &g_181[6];
        short *l_913[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        unsigned char l_936[10] = {0x67L,0UL,0x67L,0x67L,0UL,0x67L,0x67L,0UL,0x67L,0x67L};
        char l_944 = (-1L);
        short *l_946 = (void*)0;
        unsigned ***l_1031 = &g_49;
        unsigned short l_1067 = 0xD5D0L;
        short ***l_1081 = &g_93;
        int l_1127 = 0xC6EBCDA9L;
        unsigned l_1197 = 4294967291UL;
        unsigned short l_1202 = 0UL;
        char ***l_1209 = &g_290;
        int l_1312 = 0x66FD9FC8L;
        int i;
lbl_941:
        for (p_20 = 0; (p_20 <= 8); p_20 += 1)
        {
            int i;
            return l_21[p_20];
        }
        if (func_22(g_18, ((*l_35) = (g_18 || ((g_18 > p_20) && ((~(safe_rshift_func_int16_t_s_s((((g_18 | (safe_unary_minus_func_int8_t_s(l_21[3]))) <= (p_20 & p_20)) != (+((safe_rshift_func_int16_t_s_s(((safe_sub_func_int8_t_s_s(p_20, g_18)) > l_21[7]), 5)) > l_34))), g_18))) <= 7L)))), g_18, l_21[1]))
        {
            unsigned ***l_50 = &g_49;
            (*l_50) = g_49;
        }
        else
        {
            int **l_898 = &g_99;
            l_897 = func_51(p_20);
            (*l_898) = func_51(g_181[1]);
        }
        if ((func_22(p_20, (safe_lshift_func_uint8_t_u_s(255UL, 4)), (0x4FL < ((*l_904) = ((safe_mod_func_uint32_t_u_u((*l_897), (*l_897))) ^ (+(-1L))))), func_22(((l_914 &= ((safe_add_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u((p_20 & (safe_add_func_int16_t_s_s(((l_911 == l_911) == (*g_772)), g_912))), p_20)), (-1L))) < 0x56E12069L)) != (*g_772)), (*l_897), p_20, l_915)) > 6UL))
        {
            int *l_918 = &g_97;
            int l_928 = (-6L);
            unsigned char **l_937 = &g_436[8];
            if ((*g_99))
            {
                (*g_99) |= ((safe_lshift_func_int16_t_s_s(l_915, 10)) & p_20);
                l_918 = &g_98;
            }
            else
            {
                int *l_921 = &g_72;
                (*l_897) = l_914;
                (*l_897) = p_20;
                for (g_201 = 0; (g_201 >= 12); g_201 = safe_add_func_int32_t_s_s(g_201, 2))
                {
                    short l_924 = 0xA5DEL;
                    l_918 = l_921;
                    for (g_98 = 0; (g_98 >= 1); g_98 = safe_add_func_int8_t_s_s(g_98, 6))
                    {
                        unsigned char *l_927[9][9][3] = {{{&g_484,&g_484,&g_484},{&g_117,&g_117,&g_117},{&g_484,&g_484,&g_484},{&g_117,&g_117,&g_117},{&g_484,&g_484,&g_484},{&g_117,&g_117,&g_117},{&g_484,&g_484,&g_484},{&g_117,&g_117,&g_117},{&g_484,&g_484,&g_484}},{{&g_117,&g_117,&g_117},{&g_484,&g_484,&g_484},{&g_117,&g_117,&g_117},{&g_484,&g_484,&g_484},{&g_117,&g_117,&g_117},{&g_484,&g_484,&g_484},{&g_117,&g_117,&g_117},{&g_484,&g_484,&g_484},{&g_117,&g_117,&g_117}},{{&g_484,&g_484,&g_484},{&g_117,&g_117,&g_117},{&g_484,&g_484,&g_484},{&g_117,&g_117,&g_117},{&g_484,&g_484,&g_484},{&g_117,&g_117,&g_117},{&g_484,&g_484,&g_484},{&g_117,&g_117,&g_117},{&g_484,&g_484,&g_484}},{{&g_117,&g_117,&g_117},{&g_484,&g_484,&g_484},{&g_117,&g_117,&g_117},{&g_484,&g_484,&g_484},{&g_117,&g_117,&g_117},{&g_484,&g_484,&g_484},{&g_117,&g_117,&g_117},{&g_484,&g_484,&g_484},{&g_117,&g_117,&g_117}},{{&g_484,&g_484,&g_484},{&g_117,&g_117,&g_117},{&g_484,&g_484,&g_484},{&g_117,&g_117,&g_117},{&g_484,&g_484,&g_484},{&g_117,&g_117,&g_117},{&g_484,&g_484,&g_484},{&g_117,&g_117,&g_117},{&g_484,&g_484,&g_484}},{{&g_117,&g_117,&g_117},{&g_484,&g_484,&g_484},{&g_117,&g_117,&g_117},{&g_484,&g_484,&g_484},{&g_117,&g_117,&g_117},{&g_484,&g_484,&g_484},{&g_117,&g_117,&g_117},{&g_484,&g_484,&g_484},{&g_117,&g_117,&g_117}},{{&g_484,&g_484,&g_484},{&g_117,&g_117,&g_117},{&g_484,&g_484,&g_484},{&g_117,&g_117,&g_117},{&g_484,&g_484,&g_484},{&g_117,&g_117,&g_117},{&g_484,&g_484,&g_484},{&g_117,&g_117,&g_117},{&g_484,&g_484,&g_484}},{{&g_117,&g_117,&g_117},{&g_484,&g_484,&g_484},{&g_117,&g_117,&g_117},{&g_484,&g_484,&g_484},{&g_117,&g_117,&g_117},{&g_484,&g_484,&g_484},{&g_117,&g_117,&g_117},{&g_484,&g_484,&g_484},{&g_117,&g_117,&g_117}},{{&g_484,&g_484,&g_484},{&g_117,&g_117,&g_117},{&g_484,&g_484,&g_484},{&g_117,&g_117,&g_117},{&g_484,&g_484,&g_484},{&g_117,&g_117,&g_117},{&g_484,&g_484,&g_484},{&g_117,&g_117,&g_117},{&g_484,&g_484,&g_484}}};
                        int l_934[3][4] = {{0x9E932647L,0x9E932647L,0x71D9C4A9L,0xCF786A7FL},{0x27D6C432L,0x5CEFE400L,0x27D6C432L,0x71D9C4A9L},{0x27D6C432L,0x71D9C4A9L,0x71D9C4A9L,0x27D6C432L}};
                        int i, j, k;
                        if (l_924)
                            break;
                        (*l_918) &= ((safe_sub_func_int8_t_s_s(((l_34 & (l_928 = p_20)) & (safe_rshift_func_uint8_t_u_u((~((((((((***g_769) = (safe_sub_func_uint8_t_u_u((func_53(func_53(g_131[4], l_933, func_60(l_934[1][2]), &g_97), &g_49, l_921, l_921) > l_924), p_20))) & 0x8872A372L) && 0UL) < p_20) < l_935) <= l_34) && (*l_897))), 4))), l_936[5])) == 1UL);
                    }
                }
                (*l_921) &= func_53(g_98, l_933, l_35, &g_98);
            }
            g_938[0] = l_937;
            if (g_68)
                goto lbl_1387;
            (*g_99) &= (safe_div_func_uint8_t_u_u(p_20, ((p_20 > 0xE4L) & p_20)));
            if (g_912)
                goto lbl_941;
        }
        else
        {
            short *l_945 = &g_92;
            unsigned l_953 = 4294967287UL;
            unsigned l_957 = 0xBEAFD319L;
            unsigned ***l_982[3];
            int *l_993 = &l_914;
            int *l_1019 = &l_914;
            int i;
            for (i = 0; i < 3; i++)
                l_982[i] = &g_49;
            if ((0UL && func_22((l_914 = (safe_lshift_func_uint16_t_u_s(p_20, 1))), l_944, (((*g_518) = l_913[0]) == (l_946 = l_945)), (safe_rshift_func_int16_t_s_u(((safe_sub_func_uint32_t_u_u((safe_sub_func_int16_t_s_s(l_953, (*g_772))), ((*g_99) <= (p_20 || (*g_772))))) <= p_20), (*l_897))))))
            {
                l_897 = func_60(l_34);
                return p_20;
            }
            else
            {
                int *l_955 = (void*)0;
                int *l_956 = &l_914;
                unsigned l_967 = 4294967289UL;
                unsigned ***l_1013 = &g_49;
                (*l_956) &= func_58(l_954);
                if (g_175)
                    goto lbl_972;
lbl_972:
                if (((*g_99) = (*l_956)))
                {
                    int **l_958 = &l_955;
                    (*l_958) = func_60(l_957);
                    if ((*l_897))
                    {
                        return l_957;
                    }
                    else
                    {
                        (*g_99) &= (safe_rshift_func_int16_t_s_s(((*l_945) |= ((&g_99 != &l_897) < (safe_mod_func_uint16_t_u_u((safe_add_func_uint8_t_u_u(p_20, (*l_956))), p_20)))), ((*g_444) == (-1L))));
                    }
                }
                else
                {
                    unsigned char *l_968 = &l_936[6];
                    int l_969 = (-1L);
                    short *****l_971[3];
                    short ******l_970 = &l_971[1];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_971[i] = &g_462;
                    (*l_956) &= ((safe_mod_func_uint16_t_u_u((4294967295UL ^ (p_20 & ((*l_968) = l_967))), 0xE246L)) || (func_22(p_20, l_969, p_20, ((*g_99) = (0x164298E4L & (((*l_970) = &g_460) != (void*)0)))) >= 0xD243A4EFL));
                    if (l_935)
                        goto lbl_941;
                }
                if ((safe_sub_func_uint8_t_u_u((l_953 & (safe_sub_func_uint32_t_u_u((safe_lshift_func_int8_t_s_s(((void*)0 == l_979), 1)), ((*l_954) = (&l_936[2] == &p_20))))), ((safe_add_func_uint32_t_u_u(p_20, ((void*)0 == l_982[0]))) == (*g_772)))))
                {
                    int l_987 = (-7L);
lbl_991:
                    for (g_201 = (-9); (g_201 != 29); ++g_201)
                    {
                        unsigned short l_990 = 65535UL;
                        (*g_99) = (func_22((safe_sub_func_int8_t_s_s((p_20 <= ((*l_945) = l_987)), l_957)), ((((((*g_460) == (void*)0) ^ p_20) < (safe_lshift_func_uint8_t_u_s(l_990, (*l_954)))) >= 6L) > 0x3DL), p_20, p_20) < (-6L));
                        (*l_897) &= 0x5B02DFFEL;
                        if (l_944)
                            goto lbl_991;
                    }
                    (*l_956) &= p_20;
                }
                else
                {
                    int **l_992[1][8] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
                    unsigned ***l_995[6] = {&g_443,&g_443,&g_443,&g_443,&g_443,&g_443};
                    unsigned l_1015 = 4294967294UL;
                    short l_1021[3];
                    int i, j;
                    for (i = 0; i < 3; i++)
                        l_1021[i] = 1L;
                    l_993 = func_51(g_92);
                    if ((l_994 != l_995[5]))
                    {
                        unsigned l_996 = 4294967291UL;
                        (*l_956) = l_996;
                    }
                    else
                    {
                        return (*l_993);
                    }
                    for (g_72 = 0; (g_72 == 9); g_72 = safe_add_func_uint16_t_u_u(g_72, 4))
                    {
                        return p_20;
                    }
                    if ((safe_add_func_uint16_t_u_u((*g_772), ((*l_945) = (p_20 || ((*l_956) = (p_20 | (safe_div_func_int32_t_s_s(0x6E5A1D7CL, p_20)))))))))
                    {
                        int **l_1009 = &l_897;
                        unsigned ****l_1012 = &l_982[2];
                        unsigned char *l_1020[4][4][9] = {{{&l_936[5],&l_936[5],&g_117,&g_117,&g_117,&g_117,&l_936[3],&l_936[5],&g_117},{&g_117,&g_117,&g_117,&g_117,&g_484,&g_117,&g_484,&l_936[5],&l_936[5]},{&g_117,(void*)0,(void*)0,&g_117,&g_117,&g_484,&g_484,&g_117,&g_117},{&l_936[5],&l_936[5],&l_936[5],(void*)0,&g_484,&l_936[3],&g_117,&l_936[5],&g_117}},{{&g_117,&l_936[7],&l_936[5],&g_484,&g_117,&g_484,&g_117,&g_117,&l_936[5]},{&g_117,&l_936[0],&l_936[6],&g_117,&g_484,&g_484,&g_117,&g_117,&l_936[5]},{&g_484,&l_936[1],&l_936[5],&g_117,&l_936[1],&g_117,&g_117,&l_936[5],&g_484},{&g_117,&l_936[5],&l_936[6],&g_117,&l_936[5],&g_117,&g_117,&g_117,&l_936[5]}},{{&l_936[4],&g_117,&g_117,&g_484,&g_484,&g_484,&g_117,&g_117,&l_936[4]},{&g_484,&l_936[5],&g_484,(void*)0,&l_936[0],&g_484,&l_936[5],&l_936[3],&g_484},{(void*)0,&l_936[1],&g_117,&l_936[5],&l_936[5],&g_117,&g_484,&l_936[5],&g_117},{&g_484,&l_936[0],&l_936[5],&l_936[5],&l_936[5],&g_117,&l_936[5],&g_484,(void*)0}},{{&l_936[4],&g_117,&g_117,(void*)0,&l_936[0],&g_484,&l_936[4],&l_936[1],&g_117},{&g_117,&l_936[3],&l_936[4],(void*)0,&g_484,&l_936[5],&g_484,&l_936[0],&g_484},{&g_484,&l_936[5],&l_936[5],&l_936[5],&l_936[5],&g_484,&g_117,&l_936[1],&l_936[4]},{&g_117,&g_484,&l_936[5],&l_936[5],&l_936[1],&l_936[5],&g_484,&g_117,&g_484}}};
                        int i, j, k;
                        l_897 = &l_914;
                        l_1015 ^= (safe_mod_func_int8_t_s_s((safe_lshift_func_int8_t_s_s(p_20, (safe_mod_func_uint8_t_u_u((func_22((&l_956 == l_1009), (*l_956), (*l_993), (*l_993)) & 0x1EB38154L), (func_53((safe_sub_func_uint32_t_u_u(((((*l_1012) = l_982[0]) == l_1013) != 0x7D3DL), p_20)), l_1014[3], &g_36[1][5][3], &g_68) || p_20))))), (*l_897)));
                        (*l_993) &= ((255UL || ((2UL == (safe_sub_func_uint16_t_u_u(p_20, (l_1018 != (l_1021[1] = func_53((p_20 <= 0x5485L), l_982[0], &g_373, l_1019)))))) <= p_20)) & 0x7570L);
                    }
                    else
                    {
                        char l_1024[5][5][2] = {{{7L,0x2CL},{0xE0L,0x87L},{0L,0x4DL},{0x2CL,0L},{(-1L),2L}},{{(-1L),0L},{0x2CL,0x4DL},{0L,0x87L},{0xE0L,0x2CL},{7L,0x80L}},{{0x80L,(-1L)},{(-1L),3L},{3L,0xE0L},{0xCEL,0x3FL},{0x87L,0x3FL}},{{0xCEL,0xE0L},{3L,3L},{(-1L),(-1L)},{0x80L,0x80L},{7L,0x2CL}},{{0xE0L,0x87L},{0L,0x4DL},{0x2CL,0L},{(-1L),2L},{(-1L),0L}}};
                        char l_1026 = 7L;
                        int *l_1027 = (void*)0;
                        int i, j, k;
                        l_1026 = func_58(func_51((safe_add_func_int16_t_s_s(p_20, ((((0x8BL ^ (l_1024[1][3][1] > (p_20 && (l_1025[1][0] == ((*l_994) = (*g_769)))))) ^ 0xDED3L) <= (&l_1024[1][3][1] == (void*)0)) == (*l_956))))));
                        l_1027 = func_60((*l_954));
                        g_99 = l_955;
                        return (*l_897);
                    }
                }
            }
        }
        for (g_92 = (-16); (g_92 >= (-26)); --g_92)
        {
            short l_1030 = 0xCA82L;
            unsigned ***l_1045 = &g_49;
            int *l_1046[5] = {&l_914,&l_914,&l_914,&l_914,&l_914};
            unsigned *l_1217 = &l_935;
            int **l_1241[5][7] = {{&g_1240,&g_1240,&g_1240,&g_1240,&g_1240,&g_1240,&g_1240},{&g_1240,&g_1240,&g_1240,&g_1240,&g_1240,&g_1240,&g_1240},{&g_1240,&g_1240,&g_1240,&g_1240,&g_1240,&g_1240,&g_1240},{&g_1240,&g_1240,&g_1240,&g_1240,&g_1240,&g_1240,&g_1240},{&g_1240,&g_1240,&g_1240,&g_1240,&g_1240,&g_1240,&g_1240}};
            unsigned char l_1255[7][8] = {{0x4DL,0UL,0x8AL,251UL,0x4DL,7UL,7UL,0x4DL},{0x8AL,0x37L,0x37L,0x8AL,0x6EL,1UL,0x4DL,0x37L},{0x4DL,255UL,0x68L,0xAEL,255UL,0UL,255UL,0xAEL},{1UL,255UL,1UL,0x37L,0x4DL,1UL,0x6EL,0x8AL},{0x11L,0x37L,251UL,0x4DL,7UL,7UL,0x4DL,251UL},{0x11L,0x11L,0UL,0xAEL,0x4DL,0x6CL,0x11L,0x4DL},{1UL,0x4DL,0x37L,1UL,255UL,1UL,0x37L,0x4DL}};
            char *l_1280[7][7][5] = {{{&g_175,&g_131[3],&g_131[4],&g_131[4],&g_131[4]},{&g_131[0],&l_944,&l_21[4],(void*)0,(void*)0},{&g_175,&l_944,&g_176[0][2][6],&l_944,&g_131[3]},{&l_944,&g_131[3],&l_21[4],&l_944,&g_175},{&g_176[0][2][6],&g_176[0][2][6],&g_131[4],(void*)0,&g_131[3]},{&g_176[0][2][6],(void*)0,&g_131[4],&g_131[4],(void*)0},{&l_944,&g_176[0][2][6],&g_131[4],&l_21[4],&g_131[4]}},{{&g_175,&g_131[3],&g_131[4],&g_131[4],&g_131[4]},{&g_131[0],&l_944,&g_131[2],&g_131[2],&g_175},{(void*)0,&g_131[6],&l_21[7],&l_21[2],(void*)0},{&l_21[4],(void*)0,&g_131[2],&l_21[2],&l_944},{&g_176[0][2][6],&g_176[0][2][6],&g_175,&g_131[2],(void*)0},{&g_176[0][2][6],&g_175,&g_175,&g_175,&g_175},{&l_21[4],&g_176[0][2][6],&g_175,&g_131[2],(void*)0}},{{(void*)0,(void*)0,&g_175,&g_175,(void*)0},{&g_131[4],&g_131[6],&g_131[2],&g_131[2],&g_175},{(void*)0,&g_131[6],&l_21[7],&l_21[2],(void*)0},{&l_21[4],(void*)0,&g_131[2],&l_21[2],&l_944},{&g_176[0][2][6],&g_176[0][2][6],&g_175,&g_131[2],(void*)0},{&g_176[0][2][6],&g_175,&g_175,&g_175,&g_175},{&l_21[4],&g_176[0][2][6],&g_175,&g_131[2],(void*)0}},{{(void*)0,(void*)0,&g_175,&g_175,(void*)0},{&g_131[4],&g_131[6],&g_131[2],&g_131[2],&g_175},{(void*)0,&g_131[6],&l_21[7],&l_21[2],(void*)0},{&l_21[4],(void*)0,&g_131[2],&l_21[2],&l_944},{&g_176[0][2][6],&g_176[0][2][6],&g_175,&g_131[2],(void*)0},{&g_176[0][2][6],&g_175,&g_175,&g_175,&g_175},{&l_21[4],&g_176[0][2][6],&g_131[4],&g_131[3],(void*)0}},{{&g_131[6],&g_131[2],(void*)0,&g_131[4],(void*)0},{(void*)0,&l_21[2],&g_131[3],&g_176[0][2][6],&g_131[2]},{&g_131[6],&l_21[2],&g_175,(void*)0,&g_131[2]},{&g_131[4],&g_131[2],&g_131[3],(void*)0,&g_175},{&g_176[0][2][6],&g_175,(void*)0,&g_176[0][2][6],&g_131[2]},{&g_176[0][2][6],&g_131[2],&g_131[4],&g_131[4],&g_131[2]},{&g_131[4],&g_175,&g_131[4],&g_131[3],(void*)0}},{{&g_131[6],&g_131[2],(void*)0,&g_131[4],(void*)0},{(void*)0,&l_21[2],&g_131[3],&g_176[0][2][6],&g_131[2]},{&g_131[6],&l_21[2],&g_175,(void*)0,&g_131[2]},{&g_131[4],&g_131[2],&g_131[3],(void*)0,&g_175},{&g_176[0][2][6],&g_175,(void*)0,&g_176[0][2][6],&g_131[2]},{&g_176[0][2][6],&g_131[2],&g_131[4],&g_131[4],&g_131[2]},{&g_131[4],&g_175,&g_131[4],&g_131[3],(void*)0}},{{&g_131[6],&g_131[2],(void*)0,&g_131[4],(void*)0},{(void*)0,&l_21[2],&g_131[3],&g_176[0][2][6],&g_131[2]},{&g_131[6],&l_21[2],&g_175,(void*)0,&g_131[2]},{&g_131[4],&g_131[2],&g_131[3],(void*)0,&g_175},{&g_176[0][2][6],&g_175,(void*)0,&g_176[0][2][6],(void*)0},{&l_944,&g_131[6],(void*)0,(void*)0,&g_131[6]},{&g_131[3],&g_176[0][2][6],(void*)0,(void*)0,&g_176[0][4][2]}}};
            int i, j, k;
        }
    }
    else
    {
        short *l_1320 = (void*)0;
        short *l_1321 = &l_1018;
        unsigned char l_1322 = 250UL;
        unsigned l_1323[8][4] = {{4294967295UL,4294967295UL,4294967295UL,4294967295UL},{4294967295UL,4294967295UL,4294967295UL,4294967295UL},{4294967295UL,4294967295UL,4294967295UL,4294967295UL},{4294967295UL,4294967295UL,4294967295UL,4294967295UL},{4294967295UL,4294967295UL,4294967295UL,4294967295UL},{4294967295UL,4294967295UL,4294967295UL,4294967295UL},{4294967295UL,4294967295UL,4294967295UL,4294967295UL},{4294967295UL,4294967295UL,4294967295UL,4294967295UL}};
        short *l_1326 = (void*)0;
        short *l_1327 = (void*)0;
        int l_1328 = 0L;
        short *l_1329 = &g_92;
        char l_1337 = 0L;
        char ***l_1341[7];
        char ***l_1345[3];
        unsigned ***l_1347 = &g_49;
        int *l_1354 = &l_914;
        int *l_1370 = &l_1328;
        int i, j;
        for (i = 0; i < 7; i++)
            l_1341[i] = &g_290;
        for (i = 0; i < 3; i++)
            l_1345[i] = &g_290;
        for (l_1018 = (-22); (l_1018 <= (-22)); l_1018++)
        {
            int *l_1315 = &g_72;
            int **l_1316 = (void*)0;
            int **l_1317 = &g_99;
            (*l_1317) = l_1315;
            (*l_954) |= (*l_1315);
        }
    }
lbl_1387:
    if (((*g_772) < (*g_772)))
    {
        (*l_954) = p_20;
    }
    else
    {
        unsigned *l_1383[8] = {&g_36[1][5][3],&l_935,&g_36[1][5][3],&g_36[1][5][3],&l_935,&g_36[1][5][3],&g_36[1][5][3],&l_935};
        int l_1384[10] = {0xAABBFE40L,0xAABBFE40L,0xAABBFE40L,0xAABBFE40L,0xAABBFE40L,0xAABBFE40L,0xAABBFE40L,0xAABBFE40L,0xAABBFE40L,0xAABBFE40L};
        int **l_1385 = &g_1106;
        unsigned ***l_1386 = (void*)0;
        int i;
        (*l_1385) = func_60(func_53(p_20, (*g_1143), l_1383[0], func_51(l_1384[1])));
        (*l_1385) = &l_914;
        (*g_1106) = ((*l_954) = (+func_53((*l_954), l_1386, func_60(p_20), &l_914)));
    }
    (*g_1106) = ((*l_954) >= (func_22((*l_954), (((*g_1389) = func_22(((*g_1106) |= ((*l_911) == (g_1388 = (*l_911)))), (0xC23C00D1L ^ (p_20 ^ (0x8CAEL ^ (*l_954)))), p_20, p_20)) >= 8UL), (*l_954), (*l_954)) <= p_20));
    return p_20;
}







static int func_22(int p_23, unsigned p_24, short p_25, int p_26)
{
    unsigned *l_41 = &g_36[1][5][3];
    int l_48 = 0xC8ECA74BL;
    for (p_25 = 0; (p_25 > 8); p_25++)
    {
        for (p_26 = 9; (p_26 >= (-23)); --p_26)
        {
            if (((void*)0 != l_41))
            {
                for (p_24 = (-3); (p_24 >= 23); p_24++)
                {
                    int *l_46 = (void*)0;
                    if (p_26)
                        break;
                    p_23 &= ((safe_rshift_func_uint16_t_u_s(1UL, 5)) <= 0x65L);
                }
            }
            else
            {
                g_47 = g_18;
            }
        }
    }
    return l_48;
}







static int * func_51(int p_52)
{
    unsigned char l_210 = 255UL;
    short **l_212 = &g_94[8];
    short ***l_211 = &l_212;
    unsigned *l_213 = (void*)0;
    int *l_626 = (void*)0;
    int l_627[6][2][4] = {{{0x166979F4L,5L,0xB2973790L,0xB2973790L},{0L,0L,0x166979F4L,0xB2973790L}},{{(-1L),5L,(-1L),0x166979F4L},{(-1L),0x166979F4L,0x166979F4L,(-1L)}},{{0L,0x166979F4L,0xB2973790L,0x166979F4L},{0x166979F4L,5L,0xB2973790L,0xB2973790L}},{{0L,0L,0x166979F4L,0xB2973790L},{(-1L),5L,(-1L),0x166979F4L}},{{(-1L),0L,0L,0x166979F4L},{5L,0L,(-1L),0L}},{{0L,0xB2973790L,(-1L),(-1L)},{5L,5L,0L,(-1L)}}};
    unsigned ***l_637 = &g_49;
    short l_668 = 1L;
    unsigned *l_690 = &g_47;
    int l_735[1][5][10] = {{{4L,0xC7AD611CL,1L,1L,0xC7AD611CL,4L,0x114FDC36L,0xC7AD611CL,0x114FDC36L,4L},{0xC826A29BL,0xC7AD611CL,0x069F28AFL,0xC7AD611CL,0xC826A29BL,0x069F28AFL,0L,0L,0x069F28AFL,0xC826A29BL},{0xC826A29BL,0x114FDC36L,0x114FDC36L,0xC826A29BL,1L,4L,0xC826A29BL,4L,1L,0xC826A29BL},{4L,0xC826A29BL,4L,1L,0xC826A29BL,0x114FDC36L,0x114FDC36L,0xC826A29BL,1L,4L},{0L,0L,0x069F28AFL,0xC826A29BL,0xC7AD611CL,0x069F28AFL,0xC7AD611CL,0xC826A29BL,0x069F28AFL,0L}}};
    char *l_756[9] = {&g_176[0][0][6],&g_176[0][0][6],&g_176[0][0][6],&g_176[0][0][6],&g_176[0][0][6],&g_176[0][0][6],&g_176[0][0][6],&g_176[0][0][6],&g_176[0][0][6]};
    unsigned l_805 = 4294967286UL;
    unsigned char l_867 = 0x81L;
    char l_887 = 5L;
    char l_891 = 0xFAL;
    int *l_896 = &g_97;
    int i, j, k;
    l_627[3][1][3] = (((-7L) & 0xD13BL) || (func_53(((func_58(func_60(p_52)) == p_52) == (l_210 & (l_211 == &l_212))), &g_49, l_213, l_213) <= 0x36255160L));
    for (g_108 = 7; (g_108 < 43); g_108++)
    {
        char l_636 = 0L;
        short *l_666 = &g_201;
        short **l_665[2];
        int l_703 = 0x58E4116AL;
        unsigned ***l_740 = (void*)0;
        unsigned *l_742 = (void*)0;
        int **l_747 = &l_626;
        char l_750 = 0L;
        unsigned ***l_768 = &g_443;
        short ****l_787[8][4] = {{&l_211,(void*)0,&l_211,&g_461},{&g_461,&l_211,&l_211,&g_461},{&l_211,&l_211,&g_461,&l_211},{&l_211,&l_211,&l_211,&l_211},{&l_211,&l_211,&g_461,&l_211},{&l_211,&g_461,&g_461,&l_211},{&l_211,&l_211,&g_461,&g_461},{&g_461,&l_211,&l_211,&l_211}};
        int *l_894 = &l_703;
        int *l_895 = &l_703;
        int i, j;
        for (i = 0; i < 2; i++)
            l_665[i] = &l_666;
    }
    (*l_896) = (0x6FEF7728L & 4294967293UL);
    return &g_98;
}







static int func_53(int p_54, unsigned *** p_55, unsigned * p_56, int * p_57)
{
    unsigned short l_225 = 0x315BL;
    int l_246 = 1L;
    char l_278 = 0xB6L;
    char *l_292 = &g_131[1];
    char **l_291 = &l_292;
    unsigned short l_293[4] = {65531UL,65531UL,65531UL,65531UL};
    unsigned short l_295 = 0xDF3EL;
    int *l_310 = &l_246;
    int l_315 = (-1L);
    char l_378[2][3][7] = {{{(-2L),0xC3L,7L,7L,0xC3L,(-2L),0L},{(-2L),0xC3L,7L,7L,0xC3L,(-2L),0L},{(-2L),0xC3L,7L,7L,0xC3L,(-2L),0L}},{{(-2L),0xC3L,7L,7L,0xC3L,(-2L),0L},{(-2L),0xC3L,7L,7L,0xC3L,(-2L),0L},{(-2L),0xC3L,7L,7L,0xC3L,(-2L),0L}}};
    unsigned *l_406 = &g_187[4];
    unsigned **l_405 = &l_406;
    unsigned **l_446 = (void*)0;
    int l_452[10][4][4] = {{{0xE6C3A13AL,0L,0x8EF8428EL,0L},{1L,0x1C3435B9L,0L,0x19C7A6E1L},{0L,5L,0xA3A77274L,4L},{(-1L),0xE879498FL,0x045B80AEL,0L}},{{(-1L),1L,0xA3A77274L,(-1L)},{0L,0L,0L,0xC522FA9AL},{1L,(-8L),0x8EF8428EL,0x6D3FA546L},{0xE6C3A13AL,(-1L),0xB1FD5959L,(-1L)}},{{0L,0xFA884AF7L,1L,0L},{(-1L),0x8768DE7AL,(-1L),0xE879498FL},{(-1L),4L,0xE879498FL,0x6D3FA546L},{(-1L),1L,0x175A2C40L,(-1L)}},{{(-1L),2L,6L,0x36598AF8L},{0x1C3435B9L,(-7L),1L,0xAB751103L},{6L,0x5AFDD2CEL,0x1C3435B9L,(-1L)},{0x6D3FA546L,(-1L),(-1L),0L}},{{0x0CD230E7L,(-1L),(-7L),0xE6C3A13AL},{1L,0x36598AF8L,0x36598AF8L,1L},{0xC095C3B0L,0xC522FA9AL,0x5181354AL,0L},{(-1L),0x1C3435B9L,0x19C7A6E1L,(-1L)}},{{(-7L),0x0CD230E7L,4L,(-1L)},{(-1L),0x1C3435B9L,1L,0L},{0xFA884AF7L,0xC522FA9AL,0L,1L},{0x170E35F2L,0x36598AF8L,0L,0xE6C3A13AL}},{{0xE879498FL,(-1L),1L,0L},{0x5181354AL,(-1L),0x8768DE7AL,(-1L)},{0L,0x5AFDD2CEL,0xA96F73D7L,0xAB751103L},{0x2DA64D2DL,(-7L),0xC095C3B0L,0x36598AF8L}},{{0xFE198EA7L,2L,0x5AFDD2CEL,(-1L)},{(-1L),1L,(-1L),0x6D3FA546L},{(-1L),4L,(-4L),0xE879498FL},{2L,0xC095C3B0L,0x2DA64D2DL,0x6B975018L}},{{1L,(-1L),0x1DD00A61L,0xFE198EA7L},{0xCE734453L,4L,0xAB751103L,(-1L)},{0x045B80AEL,1L,0x045B80AEL,(-10L)},{0x1DD00A61L,0x6D3FA546L,0xFA884AF7L,0x175A2C40L}},{{(-10L),0xA96F73D7L,(-1L),0x6D3FA546L},{1L,0L,(-1L),(-1L)},{(-10L),0x353CE2C3L,0xFA884AF7L,1L},{0x1DD00A61L,(-3L),0x045B80AEL,(-1L)}}};
    int l_454 = 0x4B4ABC1BL;
    short ****l_466 = &g_461;
    unsigned l_514[1][7][6] = {{{0x35157148L,0x991C5B6AL,0xABDFB6E7L,0x26F647DDL,0xABDFB6E7L,0x991C5B6AL},{0xABDFB6E7L,0x35157148L,7UL,0UL,0UL,7UL},{0xABDFB6E7L,0xABDFB6E7L,0UL,0x26F647DDL,0x19317DCDL,0x26F647DDL},{0x35157148L,0xABDFB6E7L,0x35157148L,7UL,0UL,0UL},{0x991C5B6AL,0x35157148L,0x35157148L,0x991C5B6AL,0xABDFB6E7L,0x26F647DDL},{0x26F647DDL,0x991C5B6AL,0UL,0x991C5B6AL,0x26F647DDL,7UL},{0x991C5B6AL,0x26F647DDL,7UL,7UL,0x26F647DDL,0x991C5B6AL}}};
    unsigned ***l_551 = &g_49;
    int i, j, k;
    for (g_175 = 0; (g_175 <= 12); ++g_175)
    {
        int l_235 = 0xF73A530DL;
        int l_279 = (-1L);
        int l_316 = 1L;
        unsigned char *l_331 = &g_117;
        short ***l_351[4][5][8] = {{{(void*)0,(void*)0,(void*)0,&g_93,&g_93,&g_93,(void*)0,(void*)0},{&g_93,&g_93,(void*)0,(void*)0,(void*)0,&g_93,&g_93,&g_93},{&g_93,(void*)0,&g_93,(void*)0,&g_93,&g_93,&g_93,(void*)0},{(void*)0,(void*)0,(void*)0,&g_93,(void*)0,&g_93,&g_93,&g_93},{(void*)0,&g_93,&g_93,&g_93,&g_93,&g_93,(void*)0,&g_93}},{{(void*)0,&g_93,&g_93,&g_93,(void*)0,(void*)0,(void*)0,&g_93},{&g_93,&g_93,&g_93,&g_93,(void*)0,&g_93,&g_93,&g_93},{(void*)0,&g_93,&g_93,&g_93,&g_93,&g_93,(void*)0,&g_93},{(void*)0,&g_93,&g_93,&g_93,(void*)0,(void*)0,(void*)0,&g_93},{&g_93,&g_93,&g_93,&g_93,(void*)0,&g_93,&g_93,&g_93}},{{(void*)0,&g_93,&g_93,&g_93,&g_93,&g_93,(void*)0,&g_93},{(void*)0,&g_93,&g_93,&g_93,(void*)0,(void*)0,(void*)0,&g_93},{&g_93,&g_93,&g_93,&g_93,(void*)0,&g_93,&g_93,&g_93},{(void*)0,&g_93,&g_93,&g_93,&g_93,&g_93,(void*)0,&g_93},{(void*)0,&g_93,&g_93,&g_93,(void*)0,(void*)0,(void*)0,&g_93}},{{&g_93,&g_93,&g_93,&g_93,(void*)0,&g_93,&g_93,&g_93},{(void*)0,&g_93,&g_93,&g_93,&g_93,&g_93,(void*)0,&g_93},{(void*)0,&g_93,&g_93,&g_93,(void*)0,(void*)0,(void*)0,&g_93},{&g_93,&g_93,&g_93,&g_93,(void*)0,&g_93,&g_93,&g_93},{(void*)0,&g_93,&g_93,&g_93,&g_93,&g_93,(void*)0,&g_93}}};
        short l_364 = (-1L);
        unsigned short *l_407 = &l_225;
        unsigned l_426[7] = {0x25F45BF9L,0x25F45BF9L,0x25F45BF9L,0x25F45BF9L,0x25F45BF9L,0x25F45BF9L,0x25F45BF9L};
        int *l_471 = &l_315;
        short **l_566 = &g_94[2];
        int i, j, k;
    }
    return p_54;
}







static char func_58(int * p_59)
{
    unsigned short l_104 = 4UL;
    short **l_118 = (void*)0;
    int l_153[8][4][7] = {{{0x73D79527L,0x98E093FEL,0L,(-9L),0x80EF530DL,(-4L),(-4L)},{0L,0xD52D1B5BL,0x8B1E2C77L,0xD52D1B5BL,0L,(-1L),0xA232703BL},{0xA232703BL,0xD52D1B5BL,(-2L),0x96A6C0ADL,0xDA128F76L,0L,0x80EF530DL},{0xD52D1B5BL,0x98E093FEL,0xDA128F76L,1L,0x8B1E2C77L,0x8B1E2C77L,1L}},{{0xA232703BL,0x96A6C0ADL,0xA232703BL,0x8B1E2C77L,0x06FA74B5L,0x98E093FEL,1L},{0L,0x4E75D9F9L,0L,(-1L),1L,0xA232703BL,0x80EF530DL},{0x73D79527L,0xA232703BL,0x98E093FEL,0x4E75D9F9L,0x4E75D9F9L,0x98E093FEL,0xA232703BL},{0x80EF530DL,(-3L),1L,(-2L),(-3L),0L,0x96A6C0ADL}},{{0x8B1E2C77L,0L,0L,(-4L),0xDA128F76L,0x73D79527L,1L},{0x80EF530DL,(-1L),(-2L),(-2L),(-1L),0x80EF530DL,0x8B1E2C77L},{0L,1L,(-2L),(-3L),0L,0x96A6C0ADL,(-1L)},{0x96A6C0ADL,0xDA128F76L,0L,0x80EF530DL,0x4E75D9F9L,(-1L),0x4E75D9F9L}},{{0L,1L,1L,0L,0L,(-3L),0x73D79527L},{0L,(-1L),0xA232703BL,0xDA128F76L,(-9L),(-4L),(-2L)},{0x96A6C0ADL,0L,0x73D79527L,0x8B1E2C77L,0L,0x8B1E2C77L,0x73D79527L},{0L,0L,0xD52D1B5BL,0x06FA74B5L,(-4L),0x8B1E2C77L,0x4E75D9F9L}},{{0x80EF530DL,0xD52D1B5BL,0x4E75D9F9L,1L,0x96A6C0ADL,(-4L),(-1L)},{0x8B1E2C77L,(-3L),(-4L),0x4E75D9F9L,(-4L),(-3L),0x8B1E2C77L},{(-9L),0x8B1E2C77L,0L,0x4E75D9F9L,0L,(-1L),1L},{(-2L),0xA232703BL,0L,1L,(-9L),0x96A6C0ADL,0x96A6C0ADL}},{{0L,0x06FA74B5L,0L,0x06FA74B5L,0L,0x80EF530DL,0xD52D1B5BL},{0x80EF530DL,(-9L),0L,0x98E093FEL,0x73D79527L,0x96A6C0ADL,0x4E75D9F9L},{(-9L),(-1L),0x73D79527L,0L,0xA232703BL,0xA232703BL,0L},{0x80EF530DL,0x98E093FEL,0x80EF530DL,0xA232703BL,1L,(-1L),0L}},{{0xD52D1B5BL,(-2L),0x96A6C0ADL,0xDA128F76L,0L,0x80EF530DL,0x4E75D9F9L},{0x8B1E2C77L,0x80EF530DL,(-1L),(-2L),(-2L),(-1L),0x80EF530DL},{0x4E75D9F9L,(-4L),(-3L),0x8B1E2C77L,(-2L),0xA232703BL,0L},{0x98E093FEL,0xD52D1B5BL,(-4L),0L,0L,0x96A6C0ADL,(-3L)}},{{0xDA128F76L,1L,0x8B1E2C77L,0x8B1E2C77L,1L,0xDA128F76L,0x98E093FEL},{(-4L),(-3L),0x8B1E2C77L,(-2L),0xA232703BL,0L,1L},{0L,0L,(-4L),0xDA128F76L,0x73D79527L,1L,0x73D79527L},{0xA232703BL,(-3L),(-3L),0xA232703BL,0xD52D1B5BL,(-2L),0x96A6C0ADL}}};
    int l_168 = 0xEC499DE0L;
    unsigned char l_184[2][5] = {{1UL,0xCCL,1UL,0x60L,0x60L},{1UL,0xCCL,1UL,0x60L,0x60L}};
    unsigned *l_186 = &g_187[4];
    char *l_189 = &g_175;
    char **l_188[1][2];
    char **l_190 = &l_189;
    char ***l_191 = &l_190;
    unsigned short l_192 = 65531UL;
    short *l_199 = &g_92;
    short *l_200[5][2][7] = {{{(void*)0,&g_201,(void*)0,(void*)0,&g_201,&g_201,(void*)0},{&g_201,(void*)0,(void*)0,(void*)0,(void*)0,&g_201,&g_201}},{{&g_201,&g_201,&g_201,&g_201,&g_201,&g_201,&g_201},{(void*)0,&g_201,&g_201,&g_201,(void*)0,&g_201,&g_201}},{{&g_201,&g_201,&g_201,&g_201,&g_201,&g_201,&g_201},{&g_201,(void*)0,&g_201,(void*)0,&g_201,(void*)0,&g_201}},{{(void*)0,&g_201,&g_201,&g_201,(void*)0,&g_201,(void*)0},{&g_201,(void*)0,&g_201,(void*)0,&g_201,&g_201,&g_201}},{{(void*)0,&g_201,(void*)0,&g_201,(void*)0,&g_201,(void*)0},{&g_201,&g_201,&g_201,&g_201,&g_201,&g_201,&g_201}}};
    unsigned short l_202 = 6UL;
    unsigned char *l_205 = &l_184[0][1];
    int **l_206 = &g_99;
    unsigned short *l_207 = &l_192;
    int *l_208 = &g_72;
    int l_209 = 4L;
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
            l_188[i][j] = &l_189;
    }
lbl_112:
    for (g_47 = 1; (g_47 <= 9); g_47 += 1)
    {
        unsigned short l_105 = 1UL;
        g_99 = p_59;
        for (g_72 = 7; (g_72 >= 1); g_72 -= 1)
        {
            short l_100 = 1L;
            int *l_101 = &g_68;
            int i;
            (*l_101) = (l_100 = g_36[0][1][1]);
            (*l_101) = (safe_rshift_func_uint8_t_u_s(l_104, 4));
            g_97 = ((*l_101) = ((l_105 || ((g_47 > l_105) >= (*l_101))) > ((*l_101) < (l_105 || (g_108 = (safe_add_func_int32_t_s_s((*l_101), l_105)))))));
            if (l_104)
            {
                return l_104;
            }
            else
            {
                for (l_105 = 0; (l_105 <= 9); l_105 += 1)
                {
                    unsigned short l_109 = 0x4333L;
                    (*l_101) = (-4L);
                    (*l_101) ^= l_109;
                    for (g_92 = 9; (g_92 >= 0); g_92 -= 1)
                    {
                        int *l_110 = &g_97;
                        int **l_111 = &l_101;
                        (*l_111) = l_110;
                        return l_109;
                    }
                    (*l_101) = g_72;
                }
                if (l_104)
                    break;
            }
        }
    }
    for (g_108 = 1; (g_108 <= 9); g_108 += 1)
    {
        short l_115[10][3][7] = {{{9L,0x6F56L,0L,0x6F56L,9L,(-4L),(-4L)},{(-5L),0x8718L,(-1L),0x8718L,(-5L),0x3D26L,0x3D26L},{9L,0x6F56L,0L,0x6F56L,9L,(-4L),(-4L)}},{{(-5L),0x8718L,(-1L),0x8718L,(-5L),0x3D26L,0x3D26L},{9L,0x6F56L,0L,0x6F56L,9L,9L,9L},{1L,0x42CAL,0x3D26L,0x42CAL,1L,(-5L),(-5L)}},{{0x1DFBL,(-5L),(-4L),(-5L),0x1DFBL,9L,9L},{1L,0x42CAL,0x3D26L,0x42CAL,1L,(-5L),(-5L)},{0x1DFBL,(-5L),(-4L),(-5L),0x1DFBL,9L,9L}},{{1L,0x42CAL,0x3D26L,0x42CAL,1L,(-5L),(-5L)},{0x1DFBL,(-5L),(-4L),(-5L),0x1DFBL,9L,9L},{1L,0x42CAL,0x3D26L,0x42CAL,1L,(-5L),(-5L)}},{{0x1DFBL,(-5L),(-4L),(-5L),0x1DFBL,9L,9L},{1L,0x42CAL,0x3D26L,0x42CAL,1L,(-5L),(-5L)},{0x1DFBL,(-5L),(-4L),(-5L),0x1DFBL,9L,9L}},{{1L,0x42CAL,0x3D26L,0x42CAL,1L,(-5L),(-5L)},{0x1DFBL,(-5L),(-4L),(-5L),0x1DFBL,9L,9L},{1L,0x42CAL,0x3D26L,0x42CAL,1L,(-5L),(-5L)}},{{0x1DFBL,(-5L),(-4L),0x1DFBL,(-4L),0L,0L},{0x3D26L,1L,0x8848L,1L,0x3D26L,(-1L),(-1L)},{(-4L),0x1DFBL,0x49FFL,0x1DFBL,(-4L),0L,0L}},{{0x3D26L,1L,0x8848L,1L,0x3D26L,(-1L),(-1L)},{(-4L),0x1DFBL,0x49FFL,0x1DFBL,(-4L),0L,0L},{0x3D26L,1L,0x8848L,1L,0x3D26L,(-1L),(-1L)}},{{(-4L),0x1DFBL,0x49FFL,0x1DFBL,(-4L),0L,0L},{0x3D26L,1L,0x8848L,1L,0x3D26L,(-1L),(-1L)},{(-4L),0x1DFBL,0x49FFL,0x1DFBL,(-4L),0L,0L}},{{0x3D26L,1L,0x8848L,1L,0x3D26L,(-1L),(-1L)},{(-4L),0x1DFBL,0x49FFL,0x1DFBL,(-4L),0L,0L},{0x3D26L,1L,0x8848L,1L,0x3D26L,(-1L),(-1L)}}};
        short **l_120 = &g_94[6];
        int l_124 = (-1L);
        unsigned char l_140 = 0x66L;
        char *l_177 = (void*)0;
        char *l_180 = &g_181[1];
        unsigned l_183 = 4294967295UL;
        int i, j, k;
        for (g_68 = 9; (g_68 >= 0); g_68 -= 1)
        {
            short **l_121 = &g_94[8];
            int l_125 = (-1L);
            int **l_138 = &g_99;
            int l_139[3][3][1];
            unsigned l_173 = 2UL;
            char *l_182 = &g_181[7];
            int i, j, k;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 3; j++)
                {
                    for (k = 0; k < 1; k++)
                        l_139[i][j][k] = 0xF6955C06L;
                }
            }
            if (l_104)
                break;
            if (g_108)
                goto lbl_112;
            for (g_98 = 9; (g_98 >= 0); g_98 -= 1)
            {
                unsigned char *l_116 = &g_117;
                short ***l_119 = (void*)0;
                int *l_123[9] = {&g_97,&g_97,&g_97,&g_97,&g_97,&g_97,&g_97,&g_97,&g_97};
                unsigned l_185 = 1UL;
                int i;
                l_124 = ((g_122 ^= (((*l_116) = l_115[7][2][1]) != ((l_120 = l_118) == (g_93 = l_121)))) <= 0x7C4FD0C6L);
                for (g_117 = 0; (g_117 <= 9); g_117 += 1)
                {
                    unsigned l_126 = 1UL;
                    char *l_129 = (void*)0;
                    char *l_130 = &g_131[4];
                    int l_132[7][9][3] = {{{0xADBBA814L,6L,0L},{0L,6L,0L},{0x5E8599F0L,(-4L),3L},{0L,0x5E8599F0L,0x5E8599F0L},{0x5E8599F0L,(-1L),0x174F72E7L},{1L,6L,0x174F72E7L},{0L,0x174F72E7L,0x5E8599F0L},{0xADBBA814L,0L,3L},{0x174F72E7L,0x174F72E7L,0L}},{{(-4L),6L,0L},{(-4L),(-1L),0xADBBA814L},{0x174F72E7L,0x5E8599F0L,6L},{0xADBBA814L,(-4L),0xADBBA814L},{0L,7L,0L},{1L,7L,0L},{0x5E8599F0L,(-4L),3L},{0L,0x5E8599F0L,0x5E8599F0L},{0x5E8599F0L,(-1L),0x174F72E7L}},{{1L,6L,0x174F72E7L},{0L,0x174F72E7L,0x5E8599F0L},{0xADBBA814L,0L,3L},{0x174F72E7L,0x174F72E7L,0L},{(-4L),6L,0L},{(-4L),(-1L),0xADBBA814L},{0x174F72E7L,0x5E8599F0L,6L},{0xADBBA814L,(-4L),0xADBBA814L},{0L,7L,0L}},{{1L,7L,0L},{0x5E8599F0L,(-4L),3L},{0L,0x5E8599F0L,0x5E8599F0L},{0x5E8599F0L,(-1L),0x174F72E7L},{1L,6L,0x174F72E7L},{0L,0x174F72E7L,0x5E8599F0L},{0xADBBA814L,1L,0L},{3L,3L,1L},{0xADBBA814L,7L,0x174F72E7L}},{{0xADBBA814L,0L,0L},{3L,(-1L),7L},{0L,0xADBBA814L,0L},{6L,0x5E8599F0L,0x174F72E7L},{(-4L),0x5E8599F0L,1L},{(-1L),0xADBBA814L,0L},{0L,(-1L),(-1L)},{(-1L),0L,3L},{(-4L),7L,3L}},{{6L,3L,(-1L)},{0L,1L,0L},{3L,3L,1L},{0xADBBA814L,7L,0x174F72E7L},{0xADBBA814L,0L,0L},{3L,(-1L),7L},{0L,0xADBBA814L,0L},{6L,0x5E8599F0L,0x174F72E7L},{(-4L),0x5E8599F0L,1L}},{{(-1L),0xADBBA814L,0L},{0L,(-1L),(-1L)},{(-1L),0L,3L},{(-4L),7L,3L},{6L,3L,(-1L)},{0L,1L,0L},{3L,3L,1L},{0xADBBA814L,7L,0x174F72E7L},{0xADBBA814L,0L,0L}}};
                    unsigned short *l_133 = &l_104;
                    short **l_148 = &g_94[2];
                    char l_152 = (-1L);
                    int i, j, k;
                    if ((((*l_133) = func_22(g_47, l_125, l_126, ((l_132[5][3][2] = (l_104 != ((*l_130) = ((safe_add_func_uint16_t_u_u(((g_49 != g_49) == l_125), ((~(g_108 == (l_125 || g_36[0][3][3]))) || 0x00L))) > l_126)))) | l_125))) < g_92))
                    {
                        if (g_108)
                            break;
                    }
                    else
                    {
                        return l_132[5][3][2];
                    }
                    if (g_18)
                        continue;
                    if (func_22(l_125, l_104, (~(safe_unary_minus_func_int32_t_s((g_72 < func_22((safe_unary_minus_func_int8_t_s((safe_rshift_func_uint8_t_u_u(g_131[2], 5)))), ((void*)0 == l_138), l_104, (l_139[0][0][0] ^= (0x4FA4222FL > g_108))))))), l_140))
                    {
                        int l_141[3];
                        int l_151 = (-1L);
                        char *l_174 = &g_175;
                        char **l_178 = (void*)0;
                        char **l_179[1][4];
                        int i, j;
                        for (i = 0; i < 3; i++)
                            l_141[i] = 0xF1E66949L;
                        for (i = 0; i < 1; i++)
                        {
                            for (j = 0; j < 4; j++)
                                l_179[i][j] = &l_129;
                        }
                        l_153[5][1][3] = (l_141[0] >= (safe_mod_func_int8_t_s_s((func_22((func_22(((safe_rshift_func_int8_t_s_u(1L, g_131[4])) ^ ((l_104 & func_22((safe_sub_func_uint32_t_u_u(4UL, ((l_148 == &g_94[g_108]) ^ 2UL))), (safe_lshift_func_uint8_t_u_u((!g_131[4]), g_68)), l_141[0], l_151)) != g_122)), l_126, l_126, l_141[0]) | 0x5EL), l_141[0], l_104, l_104) > l_124), l_152)));
                        l_153[4][0][0] = ((safe_add_func_int8_t_s_s(((safe_add_func_uint16_t_u_u(func_22((l_139[2][2][0] = l_152), g_98, (safe_rshift_func_uint16_t_u_s(((l_115[7][2][1] == (l_153[5][1][3] = (safe_div_func_int32_t_s_s((safe_sub_func_int32_t_s_s((safe_sub_func_int32_t_s_s(func_22((((safe_mod_func_int32_t_s_s(func_22((g_72 = (l_168 ^ ((safe_add_func_int16_t_s_s((safe_lshift_func_int8_t_s_s((g_176[0][2][6] = ((*l_174) = ((*l_130) = l_173))), (l_141[0] == (g_18 | ((l_180 = (l_177 = l_177)) == l_182))))), l_153[5][1][3])) < 2UL))), l_183, l_184[1][3], l_126), g_108)) ^ l_141[0]) || l_183), l_104, l_151, l_185), g_18)), 0x39B40A8AL)), g_68)))) <= l_132[1][3][2]), l_132[5][3][2])), g_117), 1L)) >= g_181[6]), g_68)) >= l_168);
                    }
                    else
                    {
                        g_72 ^= 0x3686D0EFL;
                        if (l_104)
                            continue;
                    }
                }
            }
        }
        return g_72;
    }
    l_192 = (((*l_186) |= (!((l_153[5][1][3] < (l_168 >= 0xD3C7L)) != l_153[1][1][2]))) & (l_188[0][1] != ((*l_191) = l_190)));
    (*l_208) &= (func_22(g_98, ((safe_add_func_uint16_t_u_u(((*l_207) = (safe_add_func_int16_t_s_s((safe_div_func_int16_t_s_s(0x30C1L, ((((*l_199) ^= l_153[3][3][4]) & (l_202 = l_192)) || func_22(l_153[6][2][6], (safe_sub_func_uint8_t_u_u(((*l_205) = 255UL), ((void*)0 != l_206))), ((g_98 && l_153[5][1][3]) >= l_168), g_36[1][5][3])))), g_181[7]))), l_153[5][1][3])) > l_168), l_168, l_104) == l_153[5][3][1]);
    return l_209;
}







static int * func_60(short p_61)
{
    int l_62[6][4][2] = {{{(-10L),(-10L)},{(-10L),(-10L)},{(-10L),(-10L)},{(-10L),(-10L)}},{{(-10L),(-10L)},{(-10L),(-10L)},{(-10L),(-10L)},{(-10L),(-10L)}},{{(-10L),(-10L)},{(-10L),(-10L)},{(-10L),(-10L)},{(-10L),(-10L)}},{{(-10L),(-10L)},{(-10L),(-10L)},{(-10L),(-10L)},{(-10L),(-10L)}},{{(-10L),(-10L)},{(-10L),(-10L)},{(-10L),(-10L)},{(-10L),(-10L)}},{{(-10L),(-10L)},{(-10L),(-10L)},{(-10L),(-10L)},{(-10L),(-10L)}}};
    int *l_84[4][5][7] = {{{&g_68,(void*)0,&g_72,&g_68,&g_68,&g_72,&g_72},{&g_72,(void*)0,&g_68,&g_68,&g_72,&g_68,&g_72},{&g_68,&g_72,&g_72,&g_68,&g_68,&g_72,&g_68},{&g_72,&g_72,&g_72,&g_68,&g_68,&g_68,&g_68},{&g_68,(void*)0,&g_72,(void*)0,&g_72,(void*)0,&g_68}},{{&g_68,(void*)0,(void*)0,&g_68,&g_72,&g_72,&g_72},{(void*)0,&g_72,&g_68,&g_72,&g_68,&g_68,&g_72},{(void*)0,&g_72,(void*)0,&g_72,&g_68,&g_72,&g_68},{&g_72,&g_68,(void*)0,&g_68,&g_68,(void*)0,&g_72},{&g_72,&g_68,&g_68,&g_68,&g_68,&g_72,&g_72}},{{&g_68,(void*)0,&g_68,&g_68,(void*)0,&g_68,&g_72},{&g_68,&g_72,&g_72,&g_68,&g_68,&g_68,&g_72},{(void*)0,(void*)0,(void*)0,&g_72,&g_68,&g_72,&g_72},{&g_72,&g_68,&g_72,(void*)0,&g_72,&g_72,&g_72},{&g_68,&g_68,&g_68,&g_68,&g_68,(void*)0,&g_72}},{{&g_68,(void*)0,&g_68,&g_68,&g_68,(void*)0,&g_72},{&g_68,&g_68,&g_72,(void*)0,(void*)0,&g_72,&g_68},{&g_68,&g_68,(void*)0,&g_72,&g_68,&g_72,(void*)0},{&g_68,&g_72,&g_72,&g_68,&g_68,(void*)0,&g_68},{&g_72,&g_68,&g_68,&g_72,&g_72,(void*)0,&g_68}}};
    int i, j, k;
    l_62[4][1][1] = g_47;
    for (g_47 = (-5); (g_47 >= 58); g_47++)
    {
        int *l_67 = &g_68;
        for (p_61 = 0; (p_61 < (-13)); p_61--)
        {
            int **l_69 = &l_67;
            int *l_70 = (void*)0;
            int *l_71 = &g_72;
            (*l_69) = l_67;
        }
        return &g_97;
    }
    return l_84[2][0][5];
}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_18, "g_18", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_36[i][j][k], "g_36[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_47, "g_47", print_hash_value);
    transparent_crc(g_68, "g_68", print_hash_value);
    transparent_crc(g_72, "g_72", print_hash_value);
    transparent_crc(g_92, "g_92", print_hash_value);
    transparent_crc(g_97, "g_97", print_hash_value);
    transparent_crc(g_98, "g_98", print_hash_value);
    transparent_crc(g_108, "g_108", print_hash_value);
    transparent_crc(g_117, "g_117", print_hash_value);
    transparent_crc(g_122, "g_122", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_131[i], "g_131[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_175, "g_175", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 10; j++)
        {
            for (k = 0; k < 8; k++)
            {
                transparent_crc(g_176[i][j][k], "g_176[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_181[i], "g_181[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_187[i], "g_187[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_201, "g_201", print_hash_value);
    transparent_crc(g_373, "g_373", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(g_377[i][j][k], "g_377[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_484, "g_484", print_hash_value);
    transparent_crc(g_651, "g_651", print_hash_value);
    transparent_crc(g_808, "g_808", print_hash_value);
    transparent_crc(g_912, "g_912", print_hash_value);
    transparent_crc(g_1077, "g_1077", print_hash_value);
    transparent_crc(g_1082, "g_1082", print_hash_value);
    transparent_crc(g_1382, "g_1382", print_hash_value);
    transparent_crc(g_1420, "g_1420", print_hash_value);
    transparent_crc(g_1449, "g_1449", print_hash_value);
    transparent_crc(g_1535, "g_1535", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
