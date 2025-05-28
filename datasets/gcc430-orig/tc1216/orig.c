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
   unsigned char f0;
   int f1;
   short f2;
   unsigned f3;
   short f4;
   int f5;
};


static unsigned g_7 = 0xAAD8530DL;
static struct S0 g_61[5][1] = {{{4UL,-5L,0x1D77L,4294967287UL,0xC982L,-1L}},{{4UL,-5L,0x1D77L,4294967287UL,0xC982L,-1L}},{{4UL,-5L,0x1D77L,4294967287UL,0xC982L,-1L}},{{4UL,-5L,0x1D77L,4294967287UL,0xC982L,-1L}},{{4UL,-5L,0x1D77L,4294967287UL,0xC982L,-1L}}};
static unsigned short g_74[4][5] = {{0x6C57L,0UL,0x5D6CL,0x5D6CL,0UL},{0x6C57L,0UL,0x5D6CL,0x5D6CL,0UL},{0x6C57L,0UL,0x5D6CL,0x5D6CL,0UL},{0x6C57L,0UL,0x5D6CL,0x5D6CL,0UL}};
static int *g_87 = &g_61[3][0].f5;
static volatile unsigned char g_91 = 0x93L;
static volatile unsigned char *g_90 = &g_91;
static struct S0 **g_115 = (void*)0;
static short g_126 = (-4L);
static int **g_159 = &g_87;
static char *g_212 = (void*)0;
static char **g_248[4] = {&g_212,&g_212,&g_212,&g_212};
static char ***g_247 = &g_248[3];
static short g_340 = 0L;
static char **g_389 = &g_212;
static int g_408[9] = {0xFB73BEA6L,(-1L),0xFB73BEA6L,(-1L),0xFB73BEA6L,(-1L),0xFB73BEA6L,(-1L),0xFB73BEA6L};
static unsigned g_413 = 0UL;
static int g_415[5][7][7] = {{{0L,0xC581A89BL,0L,5L,0x97D25486L,0x0849B51AL,0x28C9C47FL},{5L,0x8DDC2EEAL,0x8C223636L,0x97D25486L,1L,0xCD04E46CL,0L},{0xB4A36C29L,2L,5L,0L,0x97D25486L,0x859177D3L,0L},{5L,0x759D2FA7L,0xCD04E46CL,5L,0x8C223636L,0x0849B51AL,0x812A10FAL},{5L,(-1L),0x759D2FA7L,2L,0x8DDC2EEAL,1L,0x8DDC2EEAL},{0xB4A36C29L,5L,5L,0xB4A36C29L,0xE85950A9L,1L,0x2B0F3C14L},{0xE85950A9L,0L,0x6E8A5562L,(-8L),(-1L),0x1F04B99BL,0xDC05B8F7L}},{{1L,0xB854C065L,(-1L),0x28C9C47FL,0x1B4D24A3L,0x3F44C6D3L,0x2B0F3C14L},{0x2B0F3C14L,1L,0xB93D66BEL,(-1L),(-7L),0x26DE0846L,0x8DDC2EEAL},{0xC9B63209L,(-2L),0x9BC178DCL,0x2B0F3C14L,5L,1L,0x812A10FAL},{0x8C223636L,0x812A10FAL,0x97D25486L,0xE85950A9L,0x3F44C6D3L,1L,0L},{(-2L),0xB4A36C29L,0L,0x26DE0846L,0x5C8E9D30L,0x26DE0846L,0L},{0x1B4D24A3L,0x1B4D24A3L,(-8L),0x759D2FA7L,0x9BC178DCL,0x3F44C6D3L,0xACD3C7C2L},{0L,0L,1L,0x8DDC2EEAL,(-1L),0x1F04B99BL,0xC581A89BL}},{{0x97D25486L,0xC9B63209L,(-8L),0xCD04E46CL,0x9BC178DCL,0x9BC178DCL,(-7L)},{0x97D25486L,0x9BC178DCL,0xB93D66BEL,(-1L),0x6E8A5562L,5L,0x759D2FA7L},{0x5C8E9D30L,0xC581A89BL,0x1F04B99BL,(-1L),0x8DDC2EEAL,1L,0L},{0xDC05B8F7L,0x28C9C47FL,0L,(-1L),0xC9B63209L,2L,0xB854C065L},{5L,0x8C223636L,1L,(-1L),1L,0x8C223636L,5L},{0xC9B63209L,0L,(-1L),0x8C223636L,0L,0xB93D66BEL,0x1B4D24A3L},{0L,0xB854C065L,0L,0x859177D3L,0x97D25486L,0L,5L}},{{0xB4A36C29L,0x6E8A5562L,(-1L),(-2L),0x759D2FA7L,0xACD3C7C2L,0x0849B51AL},{(-1L),(-7L),1L,0xDC05B8F7L,0x859177D3L,0L,0x6E8A5562L},{0xB68F0C3EL,1L,0L,0x759D2FA7L,0x2B0F3C14L,0L,0x1F04B99BL},{1L,1L,0x1F04B99BL,0x3F44C6D3L,0x26DE0846L,1L,1L},{0xCD04E46CL,(-7L),0xB93D66BEL,(-7L),0xCD04E46CL,1L,0xB68F0C3EL},{(-7L),0x6E8A5562L,0xB854C065L,0L,0x8C223636L,0x28C9C47FL,0xC581A89BL},{0xB93D66BEL,0xB854C065L,0x9BC178DCL,5L,1L,0x26DE0846L,0L}},{{(-7L),0L,5L,0x812A10FAL,5L,0x759D2FA7L,1L},{0x6E8A5562L,0L,0x8DDC2EEAL,5L,(-1L),1L,0x0699AC10L},{0x8DDC2EEAL,0xACD3C7C2L,0x8C223636L,0x759D2FA7L,1L,0L,0x0699AC10L},{0xC9B63209L,1L,0x97D25486L,1L,0x0699AC10L,0x0699AC10L,1L},{1L,(-1L),1L,0x8C223636L,5L,0x28C9C47FL,0x97D25486L},{0L,(-2L),0xCD04E46CL,(-8L),1L,0xE85950A9L,1L},{0x97D25486L,0xB68F0C3EL,0L,(-7L),0L,0x28C9C47FL,0xC9B63209L}}};
static char g_423[10][7] = {{0xFCL,0xA5L,0xB6L,0x5AL,0x3EL,0xAEL,1L},{0x1FL,0x16L,5L,(-8L),(-8L),5L,0x16L},{0xFCL,0xA5L,0xB6L,0x5AL,0x3EL,0xAEL,1L},{0x1FL,0x16L,5L,(-8L),(-8L),5L,0x16L},{0xFCL,0xA5L,0xB6L,0x5AL,0x3EL,0xAEL,1L},{0x1FL,0x16L,5L,(-8L),(-8L),5L,0x16L},{0xFCL,0xA5L,0xB6L,0x5AL,0x3EL,0xAEL,1L},{(-8L),0xFDL,0xD1L,5L,5L,0xD1L,0xFDL},{0x3EL,1L,0L,0xAEL,0xB6L,0x88L,0xCFL},{(-8L),0xFDL,0xD1L,5L,5L,0xD1L,0xFDL}};
static int g_427[2] = {0x3552ED8AL,0x3552ED8AL};
static unsigned *g_440 = &g_413;
static struct S0 g_502[2][8][2] = {{{{0xD0L,0xB8F8A542L,0xE521L,0xDE26867DL,-2L,0x0A2759FFL},{0x18L,0x91F534B2L,0L,0xC5CE13CDL,0L,-1L}},{{0x18L,0x91F534B2L,0L,0xC5CE13CDL,0L,-1L},{0x18L,0x91F534B2L,0L,0xC5CE13CDL,0L,-1L}},{{0xD0L,0xB8F8A542L,0xE521L,0xDE26867DL,-2L,0x0A2759FFL},{2UL,0L,0x6B40L,0xFB67AEE8L,0x77B6L,0x82E9CEDBL}},{{0xF0L,0x962739B0L,0xDD3BL,0xB61214F1L,0x2A7CL,0x77AD716EL},{0xA5L,-8L,0L,0xA557052AL,-2L,-9L}},{{0x1AL,-3L,0xED78L,0x75ACBD1CL,0xFE16L,1L},{0xD0L,0xB8F8A542L,0xE521L,0xDE26867DL,-2L,0x0A2759FFL}},{{0UL,0x6480058FL,1L,0xAED32353L,0x8BFBL,7L},{0x1AL,-3L,0xED78L,0x75ACBD1CL,0xFE16L,1L}},{{0x62L,-8L,0xA15EL,4294967295UL,1L,0x83471877L},{0xF8L,0x180F43C9L,-1L,9UL,0x963FL,0xC5065F98L}},{{0x62L,-8L,0xA15EL,4294967295UL,1L,0x83471877L},{0x1AL,-3L,0xED78L,0x75ACBD1CL,0xFE16L,1L}}},{{{0UL,0x6480058FL,1L,0xAED32353L,0x8BFBL,7L},{0xD0L,0xB8F8A542L,0xE521L,0xDE26867DL,-2L,0x0A2759FFL}},{{0x1AL,-3L,0xED78L,0x75ACBD1CL,0xFE16L,1L},{0xA5L,-8L,0L,0xA557052AL,-2L,-9L}},{{0xF0L,0x962739B0L,0xDD3BL,0xB61214F1L,0x2A7CL,0x77AD716EL},{2UL,0L,0x6B40L,0xFB67AEE8L,0x77B6L,0x82E9CEDBL}},{{0xD0L,0xB8F8A542L,0xE521L,0xDE26867DL,-2L,0x0A2759FFL},{0x18L,0x91F534B2L,0L,0xC5CE13CDL,0L,-1L}},{{0x18L,0x91F534B2L,0L,0xC5CE13CDL,0L,-1L},{0x18L,0x91F534B2L,0L,0xC5CE13CDL,0L,-1L}},{{0xD0L,0xB8F8A542L,0xE521L,0xDE26867DL,-2L,0x0A2759FFL},{2UL,0L,0x6B40L,0xFB67AEE8L,0x77B6L,0x82E9CEDBL}},{{0xF0L,0x962739B0L,0xDD3BL,0xB61214F1L,0x2A7CL,0x77AD716EL},{0xA5L,-8L,0L,0xA557052AL,-2L,-9L}},{{0x1AL,-3L,0xED78L,0x75ACBD1CL,0xFE16L,1L},{0xD0L,0xB8F8A542L,0xE521L,0xDE26867DL,-2L,0x0A2759FFL}}}};
static struct S0 g_533 = {9UL,0xCA2ABDADL,-7L,0UL,0xFBE5L,-7L};
static unsigned short g_550[3] = {0xC815L,0xC815L,0xC815L};
static volatile int g_625 = 0x15B1BD47L;
static volatile int *g_624[2][5] = {{&g_625,&g_625,&g_625,&g_625,&g_625},{&g_625,&g_625,&g_625,&g_625,&g_625}};
static unsigned char g_725 = 0UL;
static unsigned *g_734 = (void*)0;
static unsigned **g_733 = &g_734;
static int g_769 = 9L;
static struct S0 *g_802 = &g_502[1][2][1];
static char g_806[2] = {0L,0L};
static char g_1035 = 0xCCL;



static short func_1(void);
static struct S0 func_2(unsigned short p_3, unsigned p_4);
static unsigned char func_13(short p_14, unsigned p_15);
static unsigned short func_16(unsigned p_17);
static struct S0 func_20(int p_21, unsigned char p_22);
static short func_28(char p_29, unsigned p_30, int p_31, unsigned short p_32, char p_33);
static unsigned char func_39(unsigned short p_40);
static unsigned short func_42(int p_43);
static unsigned char func_45(struct S0 p_46);
static struct S0 func_47(struct S0 p_48, unsigned char p_49, char p_50, char p_51, unsigned char p_52);
static short func_1(void)
{
    char l_10 = 0x18L;
    unsigned short l_554 = 0x4C26L;
    int l_555[1];
    unsigned *l_578 = &g_7;
    char *l_805[8][2] = {{&g_806[0],&g_806[0]},{&g_806[0],&g_806[0]},{&g_806[0],&g_806[0]},{&g_806[0],&g_806[0]},{&g_806[0],&g_806[0]},{&g_806[0],&g_806[0]},{&g_806[0],&g_806[0]},{&g_806[0],&g_806[0]}};
    int l_807 = 0x552ECDD9L;
    int l_808[10] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
    struct S0 *l_1033 = (void*)0;
    struct S0 *l_1034[6][9] = {{(void*)0,&g_502[1][2][1],&g_502[1][2][1],(void*)0,&g_502[1][2][1],&g_502[1][2][1],(void*)0,&g_502[1][2][1],&g_502[1][2][1]},{&g_502[1][0][1],&g_533,&g_533,&g_502[1][0][1],&g_533,&g_533,&g_502[1][0][1],&g_533,&g_533},{(void*)0,&g_502[1][2][1],&g_502[1][2][1],(void*)0,&g_502[1][2][1],&g_502[1][2][1],(void*)0,&g_502[1][2][1],&g_502[1][2][1]},{&g_502[1][0][1],&g_533,&g_533,&g_502[1][0][1],&g_533,&g_533,&g_502[1][0][1],&g_533,&g_533},{(void*)0,&g_502[1][2][1],&g_502[1][2][1],(void*)0,&g_502[1][2][1],&g_502[1][2][1],(void*)0,&g_502[1][2][1],&g_502[1][2][1]},{&g_502[1][0][1],&g_533,&g_533,&g_502[1][0][1],&g_533,&g_533,&g_502[1][0][1],&g_533,&g_533}};
    unsigned short *l_1036 = &g_550[1];
    int l_1037 = 0x539D048AL;
    int *l_1038 = &g_427[1];
    int i, j;
    for (i = 0; i < 1; i++)
        l_555[i] = (-3L);
    g_502[0][7][1] = func_2(((safe_rshift_func_int8_t_s_u(g_7, 1)) , ((((safe_lshift_func_int8_t_s_u((l_807 ^= ((0x2749L && (l_10 , (safe_add_func_uint8_t_u_u(l_10, func_13(l_10, ((*l_578) = (((0x5FA2L & (((func_16((l_555[0] = ((((safe_rshift_func_int16_t_s_s((func_20(l_10, g_7) , l_554), 2)) | g_502[1][2][1].f4) & l_554) ^ l_554))) , l_555[0]) >= 0xF8L) , l_555[0])) != 0x51L) && 0UL))))))) <= g_533.f4)), 2)) | l_554) || l_808[4]) > 6UL)), l_808[4]);
    (*l_1038) &= ((((-1L) ^ (g_502[1][2][1].f0 & ((*l_1036) = g_1035))) , 0x6DL) ^ (0xEA1FL != (!func_45((func_47(func_47(func_47((*g_802), l_808[4], (l_1037 |= ((l_554 , (g_533.f0 != l_555[0])) <= 0x990EL)), l_555[0], l_555[0]), (*g_90), l_555[0], l_807, l_555[0]), g_533.f4, l_554, l_10, l_807) , (*g_802))))));
    for (g_7 = 0; (g_7 == 53); g_7++)
    {
        short l_1045 = 1L;
        struct S0 l_1052 = {252UL,0x89D4BCDBL,0x61A0L,0x86126BEFL,0L,0xA2B2E2B7L};
        unsigned short *l_1053 = &g_74[1][4];
        int l_1054 = 0x4E63AB87L;
        (*g_159) = &g_427[1];
        (*l_1038) = (safe_sub_func_int8_t_s_s((safe_add_func_int8_t_s_s(l_1045, (safe_add_func_int32_t_s_s(((safe_mod_func_int16_t_s_s((((*l_1036) = (safe_rshift_func_uint16_t_u_u(func_45(l_1052), (*l_1038)))) && g_415[0][6][4]), g_502[1][2][1].f0)) ^ (((l_1052.f2 || ((func_42((((*l_1053) ^= (((-3L) && (l_1052.f5 < 1UL)) > (*g_90))) > 0x7D27L)) > 4294967293UL) || l_1054)) != g_502[1][2][1].f5) ^ 7L)), (*l_1038))))), (*l_1038)));
    }
    return g_126;
}







static struct S0 func_2(unsigned short p_3, unsigned p_4)
{
    int l_810 = 0x25EA9DF1L;
    int l_811 = 5L;
    char *l_822 = (void*)0;
    char *l_823 = &g_423[4][1];
    int l_828 = 0x6E0895E7L;
    int l_831 = 0L;
    unsigned *l_845 = &g_413;
    struct S0 l_860 = {255UL,0x5DDCB803L,0x6243L,5UL,7L,0xB06B18AFL};
    volatile unsigned char **l_935 = &g_90;
    int *l_994 = &g_533.f5;
    int l_1015 = (-1L);
    unsigned l_1021 = 0x4A0B7E67L;
    unsigned **l_1028 = &l_845;
    unsigned ***l_1027 = &l_1028;
    unsigned char l_1031[7] = {0x8FL,0x5DL,0x5DL,0x8FL,0x5DL,0x5DL,0x8FL};
    int i;
    if ((func_16((((g_502[1][2][1].f3 || (safe_unary_minus_func_int16_t_s(((!(((l_810 = l_810) , p_3) & ((4294967295UL ^ ((l_811 , ((((safe_rshift_func_int16_t_s_u(((safe_mod_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u(((safe_mod_func_int32_t_s_s(0xD5F90099L, (safe_add_func_uint32_t_u_u(((*g_90) || ((*l_823) = (l_811 &= 0xAFL))), (safe_rshift_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u(9UL, (-10L))), 2)))))) <= 0x8F3CL), 5)), 65528UL)) <= g_502[1][2][1].f1), g_550[1])) >= p_4) & 0xEF122D06L) > 4294967293UL)) <= p_4)) || 0xD81BL))) || g_550[2])))) | l_828) , l_810)) | 0x478CL))
    {
        int l_830 = 0xAC159C5AL;
        int l_866 = 0x96474633L;
        unsigned **l_925 = &g_440;
        unsigned ***l_924 = &l_925;
        struct S0 l_930 = {0x6EL,0x6D762353L,0x9D1FL,0x2569F15AL,7L,0x3431D88AL};
        for (g_725 = 0; (g_725 <= 1); g_725 += 1)
        {
            unsigned char l_835 = 0x31L;
            struct S0 l_849 = {1UL,0x9BE8ED42L,-5L,0xDC4189A3L,0xAF0CL,9L};
            unsigned char l_885 = 0xC6L;
            int *l_933[8];
            int *l_940 = &g_533.f5;
            int i;
            for (i = 0; i < 8; i++)
                l_933[i] = &g_533.f1;
            for (g_7 = 0; (g_7 <= 1); g_7 += 1)
            {
                unsigned char l_834[2];
                int l_848 = 2L;
                int *l_887[6][7][6] = {{{&l_810,&l_860.f5,&g_427[1],&l_848,&g_427[1],&l_860.f5},{&l_866,&l_849.f5,&g_415[3][4][2],&l_810,&l_831,(void*)0},{&g_61[3][0].f5,&l_828,&l_849.f5,(void*)0,(void*)0,&g_502[1][2][1].f5},{&l_860.f5,&g_61[3][0].f5,&g_502[1][2][1].f5,&l_828,&l_866,&l_831},{(void*)0,&g_427[1],&l_848,&g_502[1][2][1].f5,&l_848,&l_848},{&g_415[0][3][2],(void*)0,&g_427[1],&l_848,&l_811,&l_866},{&l_849.f5,&l_848,(void*)0,&l_810,&g_427[1],&l_849.f5}},{{&l_810,&g_427[1],&g_502[1][2][1].f5,&g_408[0],&l_831,&l_811},{&g_408[7],&l_810,&g_427[1],&g_408[4],&l_828,&l_866},{&l_860.f5,&g_502[1][2][1].f5,&l_866,(void*)0,&l_810,&l_860.f5},{&l_831,(void*)0,&l_849.f5,&l_860.f5,&g_502[1][2][1].f5,&l_848},{(void*)0,&l_848,&g_408[0],&g_61[3][0].f5,&g_427[1],&g_415[0][6][4]},{&l_828,&g_427[0],&g_61[3][0].f5,&g_427[0],&l_828,&l_860.f5},{&l_831,&g_502[1][2][1].f5,&l_811,&l_866,&g_427[1],&g_408[0]}},{{&l_860.f5,&g_533.f5,(void*)0,&g_502[1][2][1].f5,(void*)0,&g_408[0]},{&l_860.f5,&g_533.f5,&l_811,&l_810,&g_415[3][4][2],&l_860.f5},{(void*)0,(void*)0,&g_61[3][0].f5,&l_810,(void*)0,&g_415[0][6][4]},{(void*)0,&l_848,&g_408[0],&g_415[3][1][0],&g_502[1][2][1].f5,&l_848},{&l_866,&g_502[1][2][1].f5,&l_849.f5,&g_427[1],&l_866,&l_860.f5},{&g_408[4],&g_427[1],&l_866,&g_415[0][6][4],(void*)0,&l_866},{(void*)0,&l_848,&g_427[1],&l_811,&g_415[0][6][4],&l_811}},{{&g_502[1][2][1].f5,&g_427[1],&g_502[1][2][1].f5,&g_415[0][6][4],&g_415[0][3][2],&l_866},{(void*)0,(void*)0,&g_408[0],&g_502[1][2][1].f5,&g_427[1],&g_61[3][0].f5},{&g_408[0],&l_866,(void*)0,(void*)0,&l_810,&g_502[1][2][1].f5},{&l_810,&g_408[4],&l_848,&l_811,(void*)0,&l_811},{(void*)0,&l_828,&g_533.f5,&g_408[0],&l_828,&g_533.f5},{&l_860.f5,&g_408[0],&l_866,&l_866,&g_408[0],&l_860.f5},{&l_828,&l_810,&l_831,(void*)0,(void*)0,(void*)0}},{{&g_415[3][4][2],&l_866,&l_828,&g_408[0],&l_811,&l_849.f5},{&g_415[3][4][2],&g_61[3][0].f5,&g_408[0],(void*)0,&l_848,&g_427[1]},{&l_828,(void*)0,&l_810,&l_866,&l_828,&g_502[1][2][1].f5},{&l_860.f5,&l_860.f5,&l_866,&g_408[0],&g_415[0][6][4],&l_831},{(void*)0,&l_810,(void*)0,&l_811,&g_533.f5,(void*)0},{&l_810,(void*)0,&l_860.f5,(void*)0,&g_61[3][0].f5,&l_849.f5},{&g_408[0],(void*)0,(void*)0,&g_502[1][2][1].f5,(void*)0,&g_427[0]}},{{(void*)0,&g_61[3][0].f5,&l_866,&g_415[0][6][4],&l_848,&g_427[1]},{(void*)0,&l_811,&l_866,&l_866,&g_415[0][6][4],&l_848},{&g_408[0],&g_502[1][2][1].f5,&g_415[0][6][4],&l_866,(void*)0,&l_810},{&g_61[3][0].f5,&g_427[1],&l_849.f5,&g_415[0][6][4],&l_828,&g_415[0][3][2]},{&g_415[0][3][2],&l_860.f5,&g_61[3][0].f5,&l_860.f5,&l_828,&g_427[1]},{&g_427[1],&g_415[3][4][2],&g_427[1],&l_866,&g_427[1],&g_415[3][4][2]},{&g_427[1],&l_860.f5,&g_533.f5,&g_408[0],&g_533.f5,&l_831}}};
                short l_916 = (-1L);
                unsigned **l_917 = &g_734;
                int i, j, k;
                for (i = 0; i < 2; i++)
                    l_834[i] = 0xC8L;
                for (g_533.f2 = 0; (g_533.f2 <= 1); g_533.f2 += 1)
                {
                    int *l_829[8] = {&g_502[1][2][1].f5,&g_427[1],&g_502[1][2][1].f5,&g_427[1],&g_502[1][2][1].f5,&g_427[1],&g_502[1][2][1].f5,&g_427[1]};
                    int *l_861 = &g_533.f1;
                    int i, j, k;
                    for (g_769 = 0; (g_769 <= 1); g_769 += 1)
                    {
                        (*g_159) = l_829[4];
                        l_830 = (**g_159);
                        (*g_159) = &l_828;
                    }
                    if ((l_831 = p_3))
                    {
                        unsigned **l_842 = &g_440;
                        unsigned **l_843 = (void*)0;
                        unsigned **l_844[4];
                        int i;
                        for (i = 0; i < 4; i++)
                            l_844[i] = &g_440;
                        l_835 &= (safe_rshift_func_int8_t_s_s(l_834[0], 3));
                        if (p_3)
                            continue;
                        l_848 &= ((safe_add_func_int32_t_s_s(((func_47((*g_802), ((safe_add_func_uint32_t_u_u(p_3, ((safe_add_func_uint32_t_u_u((&g_413 == (l_845 = l_829[4])), p_4)) || l_834[0]))) , l_834[0]), ((*l_823) = (g_533.f4 == ((safe_add_func_int8_t_s_s((((l_830 != p_4) < 0x65L) != l_830), l_834[0])) > p_4))), p_4, (*g_90)) , l_811) < l_835), 8L)) <= g_550[2]);
                    }
                    else
                    {
                        return l_849;
                    }
                    l_828 |= p_3;
                    l_810 = (func_42(((*l_861) = ((safe_sub_func_uint8_t_u_u((*g_90), l_834[0])) < 0x50L))) , p_3);
                }
                for (l_848 = (-3); (l_848 <= (-19)); --l_848)
                {
                    short l_868 = 0L;
                    short l_912 = 1L;
                    int l_913 = 0xA2898B80L;
                    struct S0 l_914 = {0xBEL,0x96458143L,0x7FABL,0UL,0x01A6L,0xB01ACECDL};
                    for (g_769 = (-16); (g_769 == 12); ++g_769)
                    {
                        unsigned short *l_867[6][3][8] = {{{(void*)0,&g_550[2],&g_74[1][0],&g_74[1][3],&g_74[3][1],&g_550[2],&g_550[2],&g_74[3][2]},{&g_550[2],&g_550[2],&g_550[0],&g_550[2],&g_74[3][1],&g_550[0],&g_550[2],&g_550[2]},{(void*)0,&g_550[2],&g_550[2],&g_74[3][2],&g_550[2],&g_74[3][2],&g_550[2],&g_550[2]}},{{&g_550[0],&g_550[2],&g_550[2],&g_74[3][0],&g_74[1][0],&g_550[0],&g_74[3][0],&g_74[1][3]},{&g_550[2],&g_550[2],&g_74[2][2],&g_550[2],&g_550[0],&g_550[2],&g_74[3][0],&g_550[2]},{&g_550[2],&g_550[2],&g_550[2],&g_550[0],&g_550[2],&g_550[2],&g_550[2],&g_550[0]}},{{&g_550[2],&g_550[2],&g_550[2],&g_550[0],&g_550[2],&g_550[2],&g_550[2],&g_550[2]},{&g_74[3][0],&g_550[2],&g_550[0],&g_550[2],&g_550[2],&g_550[2],&g_550[2],&g_550[2]},{&g_74[2][2],&g_550[2],&g_550[2],&g_74[1][3],&g_550[2],&g_550[2],(void*)0,&g_550[2]}},{{&g_74[3][0],&g_74[3][0],&g_74[3][1],&g_74[3][0],&g_74[3][0],&g_550[2],&g_550[2],&g_550[2]},{(void*)0,&g_550[2],&g_550[2],&g_74[2][3],(void*)0,&g_550[2],&g_74[1][0],&g_74[3][0]},{&g_550[2],&g_550[2],&g_550[2],&g_550[2],&g_550[2],&g_550[0],&g_550[2],&g_550[2]}},{{(void*)0,&g_74[3][0],&g_74[3][1],&g_550[2],&g_74[3][1],&g_74[3][0],(void*)0,&g_550[2]},{&g_550[2],&g_550[0],&g_550[2],&g_550[2],&g_550[2],&g_550[2],&g_550[2],&g_74[3][0]},{&g_74[1][0],&g_550[2],(void*)0,&g_74[2][3],&g_550[2],&g_550[2],(void*)0,&g_550[2]}},{{&g_550[2],&g_550[2],&g_74[3][0],&g_74[3][0],&g_74[3][1],&g_74[3][0],&g_74[3][0],&g_550[2]},{(void*)0,&g_550[2],&g_550[2],&g_74[1][3],&g_550[2],&g_550[2],&g_74[2][2],&g_550[2]},{&g_550[2],&g_550[2],&g_550[2],&g_550[0],(void*)0,&g_550[2],&g_74[2][2],&g_74[3][2]}}};
                        int l_873 = 0x085695F5L;
                        int l_884 = 0x5F803038L;
                        int *l_886 = &g_415[0][6][4];
                        int i, j, k;
                        l_866 = l_860.f1;
                        l_868 = ((p_3 = g_625) == 0xEB45L);
                        (*l_886) ^= (safe_rshift_func_uint8_t_u_s((safe_rshift_func_int16_t_s_s((4294967287UL >= ((~g_61[3][0].f0) | (g_533.f1 > (l_873 = g_61[3][0].f2)))), (((safe_mod_func_int16_t_s_s((safe_rshift_func_int16_t_s_u(l_868, 13)), g_61[3][0].f3)) & l_849.f0) > p_3))), ((safe_lshift_func_uint16_t_u_s((l_849.f5 = (safe_sub_func_uint8_t_u_u((safe_mod_func_int8_t_s_s(p_3, 6UL)), l_884))), l_868)) , l_885)));
                        if (p_3)
                            break;
                    }
                    l_887[1][5][5] = &l_866;
                    for (l_849.f4 = 5; (l_849.f4 <= 7); l_849.f4 = safe_add_func_uint32_t_u_u(l_849.f4, 1))
                    {
                        int l_890 = 0xB8687870L;
                        (*g_802) = l_860;
                        (*g_802) = (((p_4 <= 0xB9L) != (l_890 >= ((safe_mod_func_uint32_t_u_u((g_533.f3 = (p_3 & ((l_866 , p_4) , 0x91L))), l_890)) < 0x1D4CL))) , (*g_802));
                    }
                    for (l_849.f4 = 2; (l_849.f4 >= (-6)); l_849.f4 = safe_sub_func_int8_t_s_s(l_849.f4, 2))
                    {
                        unsigned char l_901 = 0xEAL;
                        struct S0 l_915 = {5UL,9L,0L,4UL,0x9CE5L,0x83492DC9L};
                        if (p_4)
                            break;
                        l_901 = (l_849.f5 = (safe_add_func_int16_t_s_s(func_42((safe_sub_func_int8_t_s_s(p_3, l_866))), (safe_add_func_int16_t_s_s(g_74[3][0], p_4)))));
                        l_913 ^= (((safe_mod_func_int32_t_s_s(0x2C32AA20L, ((((safe_rshift_func_uint16_t_u_u(func_42(p_4), 15)) == p_4) | p_3) , l_901))) < (((p_3 == ((safe_mod_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u(0x8038L, (safe_add_func_int8_t_s_s((func_45(l_860) | g_427[1]), p_3)))), l_849.f4)) || l_912)) == l_860.f2) || l_866)) ^ 0x47L);
                        l_915 = l_914;
                    }
                }
                if (l_916)
                    continue;
                if (((((p_3 , &g_734) != l_917) < (safe_add_func_uint8_t_u_u((*g_90), 0L))) || l_830))
                {
                    unsigned l_929[1][2];
                    int i, j;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 2; j++)
                            l_929[i][j] = 1UL;
                    }
                    for (g_533.f5 = 0; (g_533.f5 != (-6)); g_533.f5 = safe_sub_func_uint8_t_u_u(g_533.f5, 6))
                    {
                        return l_849;
                    }
                    for (p_4 = 0; (p_4 == 47); ++p_4)
                    {
                        unsigned ****l_926 = (void*)0;
                        unsigned ****l_927 = &l_924;
                        int l_928 = 0x6B857DFEL;
                        (*g_159) = &l_866;
                        g_533.f5 &= (!((*g_802) , (p_3 <= (((l_811 ^= (((*l_927) = l_924) != (void*)0)) & (l_928 = (((void*)0 != l_845) | ((func_16(l_928) , g_533.f2) && p_3)))) | g_91))));
                        return l_860;
                    }
                    if (l_929[0][1])
                    {
                        if (l_830)
                            break;
                        return l_930;
                    }
                    else
                    {
                        int *l_932[8] = {&g_61[3][0].f1,&l_930.f1,&g_61[3][0].f1,&l_930.f1,&g_61[3][0].f1,&l_930.f1,&g_61[3][0].f1,&l_930.f1};
                        int **l_931[8][4] = {{&l_932[5],&l_932[7],&l_932[5],&l_932[3]},{&l_932[5],&l_932[5],&l_932[5],&l_932[5]},{&l_932[5],&l_932[3],&l_932[5],&l_932[5]},{&l_932[5],&l_932[5],&l_932[5],&l_932[5]},{&l_932[5],&l_932[3],&l_932[5],&l_932[5]},{&l_932[5],(void*)0,&l_932[5],&l_932[2]},{&l_932[5],&l_932[2],&l_932[5],&l_932[2]},{&l_932[5],(void*)0,&l_932[3],&l_932[5]}};
                        int l_934 = 0xB080AC66L;
                        int i, j;
                        l_934 = ((l_933[6] = l_887[1][5][5]) == (void*)0);
                    }
                }
                else
                {
                    l_935 = &g_90;
                }
            }
            for (l_930.f1 = 24; (l_930.f1 <= (-21)); l_930.f1 = safe_sub_func_uint16_t_u_u(l_930.f1, 1))
            {
                int *l_939 = &g_61[3][0].f5;
                int **l_938 = &l_939;
                (*l_938) = ((*g_159) = &g_415[4][6][3]);
                if ((**g_159))
                    break;
            }
            (*l_940) ^= func_42(((l_849.f5 = (l_849.f5 , func_42(p_3))) , 4L));
            return (*g_802);
        }
    }
    else
    {
        struct S0 l_941 = {255UL,0xFE34B82DL,0x44A8L,5UL,0x7558L,0xE5F4121EL};
        return l_941;
    }
    for (l_860.f4 = 0; (l_860.f4 == (-11)); l_860.f4 = safe_sub_func_uint8_t_u_u(l_860.f4, 6))
    {
        unsigned *l_944 = &g_7;
        int l_949 = 0x74DFE454L;
        unsigned short l_950 = 7UL;
        int *l_957 = &l_811;
        char l_965 = 0x5EL;
        if (p_3)
            break;
        (*g_159) = (void*)0;
        if (((l_860.f4 , (p_3 != ((l_944 = l_944) != (void*)0))) , ((*l_957) = (safe_sub_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s(l_949, 0)), func_16(((~l_950) > ((safe_sub_func_int16_t_s_s(p_4, (func_42((safe_lshift_func_uint16_t_u_s(((p_4 != ((p_4 & p_4) > p_4)) , 0UL), 4))) != l_949))) | 252UL))))))))
        {
            unsigned l_964[9] = {0x8DDD9DCEL,0x8DDD9DCEL,0x8DDD9DCEL,0x8DDD9DCEL,0x8DDD9DCEL,0x8DDD9DCEL,0x8DDD9DCEL,0x8DDD9DCEL,0x8DDD9DCEL};
            short *l_972 = (void*)0;
            struct S0 l_973 = {7UL,-1L,0x6A21L,0UL,0x5CAEL,0xE89143E5L};
            int i;
            (*g_802) = l_973;
        }
        else
        {
            int *l_974 = &g_533.f5;
            int ***l_978 = &g_159;
            short *l_979 = (void*)0;
            short *l_980 = &g_61[3][0].f2;
            unsigned short *l_989 = (void*)0;
            (*l_957) = p_3;
            (*g_159) = l_974;
            (*l_957) = func_13((safe_lshift_func_int16_t_s_u(((l_831 = (l_810 &= (p_3 != (safe_unary_minus_func_uint8_t_u((*l_957)))))) < l_860.f3), ((((*l_980) ^= (((*l_978) = &g_87) != &l_957)) || g_533.f2) , ((safe_sub_func_int8_t_s_s(((safe_add_func_uint16_t_u_u(p_4, (g_74[3][0] = (safe_mod_func_uint16_t_u_u((+(((g_533.f1 && (((safe_sub_func_uint32_t_u_u(0x8C1EDA1FL, l_860.f3)) , (*g_90)) & g_769)) & p_3) ^ 1UL)), 0xBF36L))))) ^ l_860.f4), 0x05L)) | p_4)))), l_811);
        }
    }
    if ((safe_mod_func_uint32_t_u_u((safe_lshift_func_int16_t_s_s((l_828 = p_4), 6)), p_3)))
    {
        unsigned *l_1003[7][7][5] = {{{&g_7,(void*)0,(void*)0,(void*)0,&g_7},{&g_7,&g_7,&g_7,&g_7,(void*)0},{&g_7,(void*)0,&g_7,(void*)0,&g_7},{&g_7,&g_7,&g_7,&g_7,&g_7},{&g_7,&g_7,&g_7,&g_7,&g_7},{&g_7,&g_7,&g_7,&g_7,&g_7},{(void*)0,&g_7,&g_7,&g_7,&g_7}},{{&g_7,&g_7,&g_7,(void*)0,&g_7},{&g_7,(void*)0,&g_7,&g_7,&g_7},{&g_7,&g_7,&g_7,&g_7,&g_7},{&g_7,&g_7,&g_7,&g_7,&g_7},{&g_7,&g_7,&g_7,&g_7,&g_7},{&g_7,&g_7,&g_7,&g_7,(void*)0},{&g_7,&g_7,&g_7,&g_7,&g_7}},{{&g_7,&g_7,&g_7,&g_7,&g_7},{&g_7,&g_7,&g_7,(void*)0,(void*)0},{&g_7,&g_7,&g_7,&g_7,&g_7},{&g_7,&g_7,(void*)0,&g_7,&g_7},{(void*)0,&g_7,&g_7,(void*)0,&g_7},{&g_7,&g_7,&g_7,&g_7,&g_7},{&g_7,(void*)0,(void*)0,&g_7,(void*)0}},{{&g_7,&g_7,&g_7,&g_7,&g_7},{&g_7,&g_7,&g_7,&g_7,&g_7},{&g_7,&g_7,&g_7,(void*)0,&g_7},{&g_7,&g_7,&g_7,&g_7,(void*)0},{&g_7,&g_7,&g_7,&g_7,&g_7},{&g_7,&g_7,&g_7,(void*)0,(void*)0},{&g_7,&g_7,(void*)0,&g_7,&g_7}},{{&g_7,(void*)0,(void*)0,&g_7,&g_7},{(void*)0,&g_7,&g_7,&g_7,&g_7},{&g_7,&g_7,&g_7,&g_7,&g_7},{&g_7,&g_7,&g_7,&g_7,&g_7},{&g_7,&g_7,&g_7,&g_7,&g_7},{&g_7,&g_7,&g_7,&g_7,&g_7},{&g_7,&g_7,&g_7,&g_7,&g_7}},{{&g_7,&g_7,(void*)0,(void*)0,&g_7},{&g_7,&g_7,&g_7,&g_7,&g_7},{(void*)0,&g_7,&g_7,&g_7,&g_7},{&g_7,&g_7,(void*)0,&g_7,&g_7},{(void*)0,(void*)0,&g_7,&g_7,&g_7},{&g_7,&g_7,&g_7,&g_7,(void*)0},{&g_7,&g_7,&g_7,&g_7,(void*)0}},{{&g_7,&g_7,&g_7,&g_7,&g_7},{&g_7,(void*)0,&g_7,(void*)0,&g_7},{(void*)0,&g_7,&g_7,&g_7,&g_7},{&g_7,&g_7,&g_7,&g_7,&g_7},{&g_7,&g_7,(void*)0,&g_7,&g_7},{(void*)0,&g_7,&g_7,&g_7,&g_7},{&g_7,&g_7,&g_7,&g_7,&g_7}}};
        int l_1004 = 0x8774E538L;
        int l_1013 = 0x2B5217BCL;
        int *l_1014 = &l_860.f5;
        struct S0 l_1016 = {0xC3L,1L,0x2D72L,6UL,2L,1L};
        unsigned char l_1026[2];
        unsigned char *l_1029 = (void*)0;
        unsigned char *l_1030 = &g_502[1][2][1].f0;
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_1026[i] = 255UL;
        l_994 = ((*g_159) = &l_810);
        (*g_802) = l_1016;
        (*l_1014) = func_28((((safe_mod_func_uint32_t_u_u((safe_add_func_uint16_t_u_u(65535UL, l_1021)), (((*l_1030) ^= (func_45(l_860) & (safe_sub_func_int8_t_s_s((safe_sub_func_int16_t_s_s(p_4, (((l_1026[1] && ((void*)0 != l_1027)) , (*l_1014)) != (*l_994)))), p_3)))) ^ (*l_1014)))) , g_502[1][2][1].f4) ^ (-8L)), g_415[1][5][3], l_1031[3], g_61[3][0].f5, (*l_994));
    }
    else
    {
        struct S0 l_1032[8] = {{255UL,-9L,0x6EDCL,0x589D6916L,0L,0xBABFFCE5L},{255UL,-9L,0x6EDCL,0x589D6916L,0L,0xBABFFCE5L},{255UL,-9L,0x6EDCL,0x589D6916L,0L,0xBABFFCE5L},{255UL,-9L,0x6EDCL,0x589D6916L,0L,0xBABFFCE5L},{255UL,-9L,0x6EDCL,0x589D6916L,0L,0xBABFFCE5L},{255UL,-9L,0x6EDCL,0x589D6916L,0L,0xBABFFCE5L},{255UL,-9L,0x6EDCL,0x589D6916L,0L,0xBABFFCE5L},{255UL,-9L,0x6EDCL,0x589D6916L,0L,0xBABFFCE5L}};
        int i;
        (*g_802) = l_1032[2];
        return l_1032[2];
    }
    return l_860;
}







static unsigned char func_13(short p_14, unsigned p_15)
{
    char **l_579 = &g_212;
    int l_584 = 0x35E1E76CL;
    struct S0 l_587[9][8] = {{{0x71L,1L,0x8EEEL,0xB46F27AEL,0x44B4L,0L},{255UL,0x15DA81BCL,4L,1UL,0xA56BL,0x5A742B74L},{0UL,6L,-9L,2UL,-4L,0x4582A04BL},{255UL,0x15DA81BCL,4L,1UL,0xA56BL,0x5A742B74L},{0x71L,1L,0x8EEEL,0xB46F27AEL,0x44B4L,0L},{254UL,-4L,0L,6UL,0x28F3L,8L},{0x71L,1L,0x8EEEL,0xB46F27AEL,0x44B4L,0L},{255UL,0x15DA81BCL,4L,1UL,0xA56BL,0x5A742B74L}},{{0x21L,-5L,-1L,4294967293UL,0x082AL,0xFD29B389L},{255UL,0x15DA81BCL,4L,1UL,0xA56BL,0x5A742B74L},{0x21L,-5L,-1L,4294967293UL,0x082AL,0xFD29B389L},{0xECL,6L,0x6945L,3UL,1L,1L},{0x71L,1L,0x8EEEL,0xB46F27AEL,0x44B4L,0L},{0xECL,6L,0x6945L,3UL,1L,1L},{0x21L,-5L,-1L,4294967293UL,0x082AL,0xFD29B389L},{255UL,0x15DA81BCL,4L,1UL,0xA56BL,0x5A742B74L}},{{0x71L,1L,0x8EEEL,0xB46F27AEL,0x44B4L,0L},{0xECL,6L,0x6945L,3UL,1L,1L},{0x21L,-5L,-1L,4294967293UL,0x082AL,0xFD29B389L},{255UL,0x15DA81BCL,4L,1UL,0xA56BL,0x5A742B74L},{0x21L,-5L,-1L,4294967293UL,0x082AL,0xFD29B389L},{0xECL,6L,0x6945L,3UL,1L,1L},{0x71L,1L,0x8EEEL,0xB46F27AEL,0x44B4L,0L},{0xECL,6L,0x6945L,3UL,1L,1L}},{{0x71L,1L,0x8EEEL,0xB46F27AEL,0x44B4L,0L},{255UL,0x15DA81BCL,4L,1UL,0xA56BL,0x5A742B74L},{0UL,6L,-9L,2UL,-4L,0x4582A04BL},{255UL,0x15DA81BCL,4L,1UL,0xA56BL,0x5A742B74L},{0x71L,1L,0x8EEEL,0xB46F27AEL,0x44B4L,0L},{254UL,-4L,0L,6UL,0x28F3L,8L},{0x71L,1L,0x8EEEL,0xB46F27AEL,0x44B4L,0L},{255UL,0x15DA81BCL,4L,1UL,0xA56BL,0x5A742B74L}},{{0x21L,-5L,-1L,4294967293UL,0x082AL,0xFD29B389L},{255UL,0x15DA81BCL,4L,1UL,0xA56BL,0x5A742B74L},{0x21L,-5L,-1L,4294967293UL,0x082AL,0xFD29B389L},{0xECL,6L,0x6945L,3UL,1L,1L},{0x71L,1L,0x8EEEL,0xB46F27AEL,0x44B4L,0L},{0xECL,6L,0x6945L,3UL,1L,1L},{0x21L,-5L,-1L,4294967293UL,0x082AL,0xFD29B389L},{255UL,0x15DA81BCL,4L,1UL,0xA56BL,0x5A742B74L}},{{0x71L,1L,0x8EEEL,0xB46F27AEL,0x44B4L,0L},{0xECL,6L,0x6945L,3UL,1L,1L},{0x21L,-5L,-1L,4294967293UL,0x082AL,0xFD29B389L},{255UL,0x15DA81BCL,4L,1UL,0xA56BL,0x5A742B74L},{0x21L,-5L,-1L,4294967293UL,0x082AL,0xFD29B389L},{0xECL,6L,0x6945L,3UL,1L,1L},{0x71L,1L,0x8EEEL,0xB46F27AEL,0x44B4L,0L},{0xECL,6L,0x6945L,3UL,1L,1L}},{{0x71L,1L,0x8EEEL,0xB46F27AEL,0x44B4L,0L},{255UL,0x15DA81BCL,4L,1UL,0xA56BL,0x5A742B74L},{0UL,6L,-9L,2UL,-4L,0x4582A04BL},{255UL,0x15DA81BCL,4L,1UL,0xA56BL,0x5A742B74L},{0x71L,1L,0x8EEEL,0xB46F27AEL,0x44B4L,0L},{254UL,-4L,0L,6UL,0x28F3L,8L},{0x71L,1L,0x8EEEL,0xB46F27AEL,0x44B4L,0L},{255UL,0x15DA81BCL,4L,1UL,0xA56BL,0x5A742B74L}},{{0x21L,-5L,-1L,4294967293UL,0x082AL,0xFD29B389L},{255UL,0x15DA81BCL,4L,1UL,0xA56BL,0x5A742B74L},{0x21L,-5L,-1L,4294967293UL,0x082AL,0xFD29B389L},{0xECL,6L,0x6945L,3UL,1L,1L},{0x71L,1L,0x8EEEL,0xB46F27AEL,0x44B4L,0L},{0xECL,6L,0x6945L,3UL,1L,1L},{0x21L,-5L,-1L,4294967293UL,0x082AL,0xFD29B389L},{255UL,0x15DA81BCL,4L,1UL,0xA56BL,0x5A742B74L}},{{0x71L,1L,0x8EEEL,0xB46F27AEL,0x44B4L,0L},{0xECL,6L,0x6945L,3UL,1L,1L},{0x21L,-5L,-1L,4294967293UL,0x082AL,0xFD29B389L},{255UL,0x15DA81BCL,4L,1UL,0xA56BL,0x5A742B74L},{0x21L,-5L,-1L,4294967293UL,0x082AL,0xFD29B389L},{0xECL,6L,0x6945L,3UL,1L,1L},{0x71L,1L,0x8EEEL,0xB46F27AEL,0x44B4L,0L},{0xECL,6L,0x6945L,3UL,1L,1L}}};
    int ***l_637 = (void*)0;
    unsigned l_712[2][6][7] = {{{0xD5D5CD8DL,4294967295UL,0x2EE13D94L,0xD1115CDDL,0xA11281D3L,0xD1115CDDL,0x2EE13D94L},{0UL,0UL,0x1382A575L,0x78D91014L,0x0017A0F2L,0UL,0x7ABE6E43L},{0x54E33113L,4294967295UL,4294967286UL,4294967295UL,0x54E33113L,0xD1115CDDL,4294967286UL},{0UL,0x1382A575L,4294967295UL,0x06281370L,0x06281370L,4294967295UL,0x1382A575L},{0x5DE8A46EL,4294967295UL,0x80E48CE2L,0UL,0x2EE13D94L,4294967292UL,0x2EE13D94L},{0UL,0x06281370L,0x78D91014L,4294967295UL,0x0017A0F2L,0UL,0x78D91014L}},{{9UL,0xD1115CDDL,4294967286UL,0UL,4294967286UL,0xD1115CDDL,9UL},{4294967295UL,0x78D91014L,0x7ABE6E43L,0x06281370L,4294967295UL,0xA00FFA01L,0x78D91014L},{0xA11281D3L,4294967295UL,0xA11281D3L,4294967292UL,0x5DE8A46EL,4294967291UL,0x2EE13D94L},{0x06281370L,0x0017A0F2L,0x7ABE6E43L,0x7ABE6E43L,0x0017A0F2L,0x06281370L,0x1382A575L},{0UL,4294967292UL,4294967286UL,4294967291UL,0xB56F8385L,4294967291UL,4294967286UL},{4294967295UL,0xA00FFA01L,0x78D91014L,0UL,0x06281370L,0xA00FFA01L,0xA00FFA01L}}};
    short l_715 = 0xD05DL;
    unsigned *l_732 = &l_712[0][5][0];
    unsigned **l_731 = &l_732;
    unsigned short l_752 = 0xD1F1L;
    char ****l_772 = (void*)0;
    int *l_774 = &g_502[1][2][1].f5;
    unsigned **l_778[6] = {&g_440,&g_440,&g_440,&g_440,&g_440,&g_440};
    int l_789 = 1L;
    struct S0 l_792 = {0x21L,-10L,0x131DL,0UL,0x4C43L,0x140A02ECL};
    int i, j, k;
    for (g_533.f3 = 0; (g_533.f3 <= 3); g_533.f3 += 1)
    {
        unsigned char l_580 = 1UL;
        int l_581[2];
        struct S0 l_585 = {0UL,0xE98E6687L,0x585EL,0UL,0L,-4L};
        char **l_615[5] = {&g_212,&g_212,&g_212,&g_212,&g_212};
        char **l_679 = &g_212;
        int i;
        for (i = 0; i < 2; i++)
            l_581[i] = 0xA9F907B7L;
        l_581[1] &= (((void*)0 != l_579) | l_580);
        for (g_7 = 0; (g_7 <= 3); g_7 += 1)
        {
            short l_582 = 0x4105L;
            unsigned char l_600[5];
            int l_602 = (-1L);
            char *l_603 = &g_423[4][1];
            volatile int *l_627 = &g_625;
            struct S0 l_651 = {0xD5L,0x3BDADF46L,0x4585L,4294967290UL,3L,-7L};
            int i;
            for (i = 0; i < 5; i++)
                l_600[i] = 0xACL;
            if (l_582)
            {
                struct S0 l_583[3][1] = {{{0x5AL,0xF9EE7AF9L,0L,9UL,0x0BDAL,2L}},{{0x5AL,0xF9EE7AF9L,0L,9UL,0x0BDAL,2L}},{{0x5AL,0xF9EE7AF9L,0L,9UL,0x0BDAL,2L}}};
                int i, j;
                l_584 = func_45(l_583[1][0]);
            }
            else
            {
                struct S0 *l_586 = &g_502[1][2][1];
                unsigned char *l_596 = &g_533.f0;
                unsigned *l_599 = &g_413;
                unsigned l_639 = 0UL;
                unsigned l_646 = 0xB20993BCL;
                int i;
                if (p_14)
                    break;
                l_587[2][3] = ((*l_586) = l_585);
                if ((safe_lshift_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u((safe_add_func_uint16_t_u_u((((*g_90) != l_582) && (func_42(l_582) >= ((g_533.f0 = (4L ^ p_14)) , ((safe_sub_func_int32_t_s_s(0xA4D11C71L, (((*l_596) = 0x7FL) <= (safe_mod_func_uint32_t_u_u(((*l_599) = g_533.f1), l_585.f0))))) == 0x02B6383DL)))), l_587[2][3].f5)), 2)), l_600[1])))
                {
                    short l_608 = (-2L);
                    unsigned **l_628 = &g_440;
                    for (l_585.f5 = 4; (l_585.f5 >= 0); l_585.f5 -= 1)
                    {
                        int l_601 = 0xE3583240L;
                        char *l_604 = &g_423[5][5];
                        char **l_605 = &l_604;
                        int i, j, k;
                        g_502[0][4][1] = func_47(g_61[3][0], g_415[l_585.f5][(g_7 + 3)][l_585.f5], (l_602 ^= (l_601 = g_415[(g_533.f3 + 1)][(g_533.f3 + 3)][l_585.f5])), p_14, g_415[(g_533.f3 + 1)][(g_533.f3 + 3)][l_585.f5]);
                        g_415[g_533.f3][(l_585.f5 + 1)][(g_7 + 2)] |= (((((*l_599) &= (g_502[1][2][1].f1 , (0xD741L ^ ((((((*g_389) = l_603) != ((*l_605) = l_604)) || (safe_rshift_func_uint8_t_u_u(l_608, func_45((*l_586))))) < (p_15 , ((((l_601 && (*g_90)) & l_584) <= p_15) == g_502[1][2][1].f3))) != 0L)))) == (-3L)) >= g_61[3][0].f2) <= 6UL);
                    }
                    (*g_159) = (void*)0;
                    if (((safe_mod_func_int16_t_s_s(func_16(((safe_lshift_func_int8_t_s_s(0L, 3)) , (7L && (safe_mod_func_uint32_t_u_u(((l_581[1] ^= p_15) > (l_615[2] != l_615[2])), p_14))))), (safe_add_func_uint32_t_u_u(((safe_sub_func_int16_t_s_s((safe_rshift_func_int8_t_s_s(p_15, 7)), p_14)) || p_15), l_608)))) ^ g_74[3][0]))
                    {
                        int l_622 = 0xD719E945L;
                        int *l_623 = &l_581[0];
                        volatile int **l_626[8] = {&g_624[1][0],&g_624[1][0],&g_624[1][0],&g_624[1][0],&g_624[1][0],&g_624[1][0],&g_624[1][0],&g_624[1][0]};
                        int i;
                        (*l_623) = l_622;
                        l_627 = g_624[1][3];
                        l_584 = func_39(p_15);
                        if (l_608)
                            continue;
                    }
                    else
                    {
                        l_628 = &g_440;
                    }
                    if (l_587[2][3].f4)
                        break;
                }
                else
                {
                    int *l_631 = &g_427[1];
                    short *l_636 = &l_585.f4;
                    int l_638 = 0x81B4AE74L;
                    int *l_652 = &l_584;
                    unsigned l_680 = 0x641FD031L;
                    l_639 ^= ((safe_rshift_func_uint16_t_u_s((g_415[4][2][6] && ((*l_631) = (func_39(g_61[3][0].f5) < g_533.f0))), ((safe_lshift_func_uint16_t_u_s((safe_lshift_func_int8_t_s_u(l_587[2][3].f0, (((*l_636) = (p_14 == 65535UL)) , (((0x3CE0F9F4L <= (((((void*)0 == l_637) == 0x0CL) <= l_638) || g_533.f0)) || g_502[1][2][1].f4) && p_14)))), 3)) | 0x24988D02L))) , p_15);
                    if ((p_14 == ((p_14 == ((*l_652) ^= ((safe_sub_func_int8_t_s_s((safe_add_func_uint16_t_u_u(0x654CL, ((*g_90) ^ ((safe_lshift_func_int8_t_s_u((-2L), l_646)) | ((*l_631) = (safe_lshift_func_uint8_t_u_s(func_16((safe_rshift_func_int16_t_s_s(((((g_61[3][0].f2 != (func_45(l_651) || 0xB8L)) ^ 0xC1915335L) , &l_580) != (void*)0), 0))), 2))))))), p_15)) , l_646))) == 0xF0L)))
                    {
                        unsigned char *l_659 = &l_585.f0;
                        unsigned short *l_660 = &g_74[1][0];
                        int l_661 = 0L;
                        (*l_586) = func_47((((((*l_660) = (p_14 <= ((*l_659) = ((safe_sub_func_int16_t_s_s(0xF626L, 65532UL)) & ((((safe_sub_func_int32_t_s_s(p_15, (p_14 <= l_580))) != (*l_627)) | (((p_15 < ((((*l_596) = 1UL) & 0L) && p_15)) >= 1L) <= l_646)) , 0x0DB3A49BL))))) | 0xB450L) & l_661) , (*l_586)), g_61[3][0].f5, (*l_652), l_602, l_646);
                        return (*g_90);
                    }
                    else
                    {
                        struct S0 l_669 = {5UL,6L,-6L,0x08CEFBE9L,1L,0L};
                        int *l_670 = &l_669.f1;
                        unsigned short *l_671[1];
                        int l_672 = 0xAF995D8BL;
                        unsigned short l_673 = 65535UL;
                        unsigned l_674 = 0xDF5234C8L;
                        int *l_675 = &l_638;
                        char ***l_678[3];
                        int i;
                        for (i = 0; i < 1; i++)
                            l_671[i] = &g_74[1][4];
                        for (i = 0; i < 3; i++)
                            l_678[i] = &g_248[g_533.f3];
                        (*l_675) &= ((((((l_673 ^= (safe_lshift_func_int8_t_s_s((safe_add_func_int32_t_s_s(((safe_unary_minus_func_int16_t_s(func_39((l_672 &= func_42((((safe_rshift_func_uint8_t_u_s(func_16((+g_533.f3)), ((*l_652) |= (*l_627)))) == func_45(l_669)) , ((*l_670) = (~l_581[1])))))))) > (l_651.f5 = p_14)), g_502[1][2][1].f4)), 2))) , l_674) > p_14) | p_14) < p_15) , (*l_652));
                        if (p_15)
                            break;
                        l_669.f5 ^= (func_45((l_651 = l_651)) ^ (safe_add_func_uint32_t_u_u(((*l_599) = (((g_248[g_533.f3] = (((*l_675) = (((*l_603) = (((*l_652) = p_14) , ((!(*l_631)) != (*g_90)))) == (&l_615[2] != l_678[2]))) , l_679)) != (l_615[4] = (void*)0)) > l_680)), 9UL)));
                    }
                }
            }
        }
        for (g_340 = 3; (g_340 >= 0); g_340 -= 1)
        {
            int *l_681 = &g_502[1][2][1].f5;
            int *l_698 = &l_584;
            l_581[0] = ((*l_681) = (0xCDL & (-1L)));
            (*l_698) ^= ((((safe_rshift_func_int16_t_s_s((((safe_sub_func_int8_t_s_s((safe_rshift_func_int8_t_s_s((safe_mod_func_int8_t_s_s((((p_14 = ((p_14 != p_14) , (func_47(((((safe_mod_func_uint16_t_u_u((!(p_15 >= p_14)), l_585.f1)) , ((*l_681) , (safe_sub_func_int8_t_s_s((l_585.f4 ^ ((p_14 , func_39((safe_sub_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_u(l_585.f3, g_550[2])) && p_15), 2UL)))) , l_581[0])), p_14)))) | p_15) , l_587[7][6]), g_427[1], (*l_681), p_15, g_533.f4) , (-1L)))) , p_15) < l_585.f5), g_550[2])), 0)), l_587[2][3].f2)) , g_502[1][2][1].f0) || 0x8D5CL), 13)) < 0xADBAL) | 6UL) || 0xE0L);
            for (g_533.f2 = 0; (g_533.f2 <= 4); g_533.f2 += 1)
            {
                unsigned l_709 = 0x0C96AD5BL;
                struct S0 l_716 = {0xF4L,8L,5L,4294967295UL,0x5F37L,-6L};
                for (l_585.f0 = 0; (l_585.f0 <= 3); l_585.f0 += 1)
                {
                    unsigned char *l_713 = (void*)0;
                    unsigned char *l_714 = &g_502[1][2][1].f0;
                    short *l_721[5][9][5] = {{{&l_585.f2,&g_340,&g_61[3][0].f2,&l_716.f4,&l_716.f4},{&g_61[3][0].f4,(void*)0,&l_587[2][3].f4,&g_533.f4,&l_715},{&l_587[2][3].f2,&g_502[1][2][1].f4,&l_716.f4,&l_585.f4,&l_715},{(void*)0,(void*)0,&l_587[2][3].f2,&l_716.f2,&l_716.f4},{&l_587[2][3].f2,&g_533.f4,&l_716.f4,&l_585.f2,&l_715},{&g_61[3][0].f4,&g_502[1][2][1].f2,(void*)0,&l_585.f4,&g_61[3][0].f4},{&g_61[3][0].f4,&l_585.f4,&g_340,(void*)0,&g_126},{&g_533.f4,&l_716.f2,&l_716.f4,&l_587[2][3].f4,&g_533.f2},{&g_533.f2,&l_716.f4,&g_340,&l_585.f4,&g_340}},{{(void*)0,(void*)0,&g_502[1][2][1].f2,&g_533.f4,&l_585.f4},{&g_61[3][0].f4,&l_716.f4,&l_715,&l_585.f4,&l_716.f4},{&g_340,&g_340,&l_716.f4,&g_502[1][2][1].f2,&l_587[2][3].f4},{&l_585.f4,&l_716.f4,&g_533.f4,&l_585.f2,(void*)0},{&l_587[2][3].f2,(void*)0,&l_716.f4,&g_340,(void*)0},{&g_340,&l_716.f4,&l_585.f4,&g_61[3][0].f4,&l_587[2][3].f2},{&g_61[3][0].f4,&l_716.f2,&g_533.f2,&g_502[1][2][1].f4,&g_533.f4},{&l_716.f4,&l_585.f4,(void*)0,&l_585.f2,&g_502[1][2][1].f4},{&g_61[3][0].f4,&g_502[1][2][1].f2,&g_61[3][0].f4,(void*)0,&g_502[1][2][1].f2}},{{(void*)0,&g_533.f4,(void*)0,&l_715,&l_585.f2},{(void*)0,(void*)0,&l_716.f2,(void*)0,(void*)0},{&g_340,&g_502[1][2][1].f4,&g_61[3][0].f4,(void*)0,&l_715},{&g_61[3][0].f4,&g_533.f2,(void*)0,(void*)0,&g_61[3][0].f2},{(void*)0,&l_585.f4,(void*)0,&l_716.f4,&l_715},{&l_716.f2,(void*)0,&l_587[2][3].f2,&l_585.f4,&g_61[3][0].f4},{&l_715,&l_587[2][3].f2,(void*)0,(void*)0,&l_587[2][3].f4},{&l_585.f4,&l_716.f4,(void*)0,&g_502[1][2][1].f2,(void*)0},{(void*)0,&g_533.f2,(void*)0,&g_61[3][0].f2,&l_716.f4}},{{&g_340,&l_587[2][3].f4,&g_340,&g_502[1][2][1].f4,&l_587[2][3].f4},{&l_585.f4,&l_585.f2,&l_716.f4,&l_587[2][3].f2,&l_585.f4},{(void*)0,&l_715,&l_716.f4,&g_533.f2,&g_533.f2},{&l_585.f2,&g_126,&l_585.f2,&l_715,(void*)0},{&l_587[2][3].f4,&l_716.f4,&g_61[3][0].f4,&g_61[3][0].f4,&g_126},{(void*)0,&g_61[3][0].f4,&l_715,(void*)0,&g_533.f2},{&g_502[1][2][1].f4,&g_61[3][0].f4,&g_61[3][0].f4,&g_126,(void*)0},{&l_585.f4,&l_585.f4,&l_585.f2,&l_585.f2,&g_533.f2},{&l_587[2][3].f2,&g_502[1][2][1].f2,&l_716.f4,&g_340,&l_587[2][3].f2}},{{&l_587[2][3].f2,&l_585.f4,&l_716.f4,&l_716.f4,&l_585.f2},{&g_126,&l_587[2][3].f2,&g_340,&g_533.f4,&g_533.f2},{&l_585.f2,&g_340,(void*)0,&g_340,&l_585.f4},{&g_61[3][0].f4,&g_61[3][0].f4,(void*)0,&g_340,&l_716.f4},{&l_587[2][3].f2,&l_585.f4,&l_585.f2,&l_585.f2,&l_585.f4},{&l_585.f4,&g_61[3][0].f4,&g_126,&g_502[1][2][1].f4,(void*)0},{&g_61[3][0].f4,&g_61[3][0].f2,&l_585.f2,(void*)0,&g_502[1][2][1].f4},{(void*)0,(void*)0,&l_716.f4,&l_585.f2,&g_533.f4},{&g_61[3][0].f4,(void*)0,&l_715,(void*)0,&l_715}}};
                    int l_724 = 0xBC2E5ED6L;
                    struct S0 l_729 = {255UL,1L,-1L,0xA8B96368L,0xDEE7L,0x866B090CL};
                    int i, j, k;
                    l_716 = func_47(l_585, (((((safe_rshift_func_int16_t_s_s(9L, 12)) , (safe_sub_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s((safe_sub_func_uint32_t_u_u((((g_415[(g_340 + 1)][g_533.f3][(g_340 + 3)] >= (((safe_sub_func_uint8_t_u_u(0xC0L, (l_709 | g_415[(g_340 + 1)][g_533.f3][(g_340 + 3)]))) != ((0xC77EE3E8L == p_15) || ((safe_rshift_func_uint8_t_u_s(((*l_714) ^= l_712[0][5][0]), p_15)) > p_14))) , 0xC7L)) || g_74[3][0]) , p_15), (*l_681))), 1)), g_423[2][4]))) < 1UL) ^ p_15) && 9L), p_14, l_715, p_14);
                    if (((((func_42(g_61[3][0].f5) <= g_725) && 65535UL) , 0x86L) >= l_581[1]))
                    {
                        return p_15;
                    }
                    else
                    {
                        struct S0 l_726 = {9UL,-5L,0xCE57L,0xB5E5F204L,0xCED7L,0L};
                        struct S0 *l_727 = (void*)0;
                        struct S0 *l_728[9] = {(void*)0,&g_502[0][7][0],&g_502[0][7][0],(void*)0,&g_502[0][7][0],&g_502[0][7][0],(void*)0,&g_502[0][7][0],&g_502[0][7][0]};
                        int i;
                        l_729 = l_726;
                    }
                }
                (*g_159) = &l_581[1];
                if (p_14)
                    break;
            }
        }
        for (l_585.f1 = 0; (l_585.f1 <= 3); l_585.f1 += 1)
        {
            int l_730 = 0x2D4D11AFL;
            if (l_730)
                break;
            for (g_126 = 3; (g_126 >= 0); g_126 -= 1)
            {
                g_733 = l_731;
            }
        }
    }
    for (g_533.f5 = 0; (g_533.f5 == (-17)); g_533.f5 = safe_sub_func_int16_t_s_s(g_533.f5, 5))
    {
        char l_751 = 7L;
        unsigned *l_765 = &l_712[0][5][0];
        unsigned l_766 = 1UL;
        unsigned **l_777[7][7];
        struct S0 l_783 = {0x57L,0x6340F388L,0xF360L,1UL,0xE968L,1L};
        struct S0 *l_801[6][2][1] = {{{&l_783},{&l_783}},{{&l_783},{&l_783}},{{&l_783},{&l_783}},{{&l_783},{&l_783}},{{&l_783},{&l_783}},{{&l_783},{&l_783}}};
        struct S0 **l_800[9][10][2] = {{{&l_801[4][0][0],&l_801[0][1][0]},{&l_801[1][1][0],&l_801[4][0][0]},{&l_801[1][1][0],&l_801[0][1][0]},{&l_801[0][1][0],&l_801[5][1][0]},{&l_801[3][1][0],&l_801[0][1][0]},{&l_801[0][1][0],&l_801[0][1][0]},{&l_801[3][1][0],&l_801[5][1][0]},{&l_801[0][1][0],&l_801[0][1][0]},{&l_801[1][1][0],&l_801[4][0][0]},{&l_801[1][1][0],&l_801[0][1][0]}},{{&l_801[4][0][0],&l_801[4][0][0]},{&l_801[5][1][0],&l_801[0][1][0]},{&l_801[3][0][0],&l_801[5][1][0]},{&l_801[3][0][0],&l_801[3][1][0]},{&l_801[0][1][0],&l_801[1][0][0]},{&l_801[3][0][0],&l_801[3][0][0]},{&l_801[1][0][0],&l_801[4][0][0]},{(void*)0,&l_801[2][1][0]},{&l_801[1][1][0],&l_801[1][1][0]},{&l_801[4][0][0],&l_801[0][1][0]}},{{&l_801[0][1][0],&l_801[1][1][0]},{&l_801[3][1][0],(void*)0},{&l_801[2][1][0],&l_801[0][1][0]},{&l_801[3][1][0],&l_801[1][1][0]},{&l_801[2][1][0],&l_801[5][1][0]},{&l_801[0][1][0],&l_801[0][1][0]},{&l_801[4][1][0],&l_801[3][0][0]},{&l_801[0][1][0],&l_801[0][1][0]},{&l_801[3][0][0],&l_801[3][1][0]},{&l_801[0][1][0],&l_801[3][0][0]}},{{&l_801[4][0][0],(void*)0},{&l_801[4][0][0],&l_801[3][0][0]},{&l_801[0][1][0],&l_801[3][1][0]},{&l_801[3][0][0],&l_801[0][1][0]},{&l_801[0][1][0],&l_801[3][0][0]},{&l_801[4][1][0],&l_801[0][1][0]},{&l_801[0][1][0],&l_801[5][1][0]},{&l_801[2][1][0],&l_801[0][1][0]},{(void*)0,&l_801[4][0][0]},{&l_801[3][0][0],&l_801[3][1][0]}},{{&l_801[0][1][0],&l_801[0][1][0]},{&l_801[0][1][0],&l_801[1][1][0]},{&l_801[0][1][0],&l_801[3][0][0]},{&l_801[0][1][0],&l_801[3][0][0]},{&l_801[0][1][0],&l_801[0][1][0]},{&l_801[3][0][0],&l_801[3][1][0]},{&l_801[0][1][0],&l_801[3][0][0]},{&l_801[1][1][0],&l_801[0][1][0]},{&l_801[4][0][0],&l_801[0][1][0]},{&l_801[0][1][0],&l_801[3][1][0]}},{{&l_801[0][1][0],&l_801[0][1][0]},{&l_801[0][1][0],&l_801[0][1][0]},{&l_801[0][1][0],&l_801[0][1][0]},{&l_801[3][0][0],&l_801[1][1][0]},{&l_801[2][1][0],&l_801[4][1][0]},{&l_801[0][1][0],&l_801[4][0][0]},{&l_801[0][1][0],&l_801[4][0][0]},{&l_801[0][1][0],&l_801[4][1][0]},{&l_801[2][1][0],&l_801[1][1][0]},{&l_801[3][0][0],&l_801[0][1][0]}},{{&l_801[0][1][0],&l_801[0][1][0]},{&l_801[0][1][0],&l_801[0][1][0]},{&l_801[0][1][0],&l_801[3][1][0]},{&l_801[0][1][0],&l_801[0][1][0]},{&l_801[4][0][0],&l_801[0][1][0]},{&l_801[1][1][0],&l_801[3][0][0]},{&l_801[0][1][0],&l_801[3][1][0]},{&l_801[3][0][0],&l_801[0][1][0]},{&l_801[0][1][0],&l_801[3][0][0]},{&l_801[0][1][0],&l_801[3][0][0]}},{{&l_801[0][1][0],&l_801[1][1][0]},{&l_801[0][1][0],&l_801[4][1][0]},{&l_801[3][0][0],&l_801[2][0][0]},{&l_801[0][1][0],&l_801[3][1][0]},{&l_801[5][1][0],&l_801[4][1][0]},{(void*)0,&l_801[0][1][0]},{&l_801[0][1][0],&l_801[0][1][0]},{&l_801[0][1][0],&l_801[0][1][0]},{&l_801[4][1][0],&l_801[3][0][0]},{&l_801[0][1][0],&l_801[1][1][0]}},{{(void*)0,&l_801[0][1][0]},{&l_801[0][1][0],&l_801[5][1][0]},{&l_801[0][1][0],&l_801[0][1][0]},{(void*)0,&l_801[1][1][0]},{&l_801[0][1][0],&l_801[3][0][0]},{&l_801[4][1][0],&l_801[0][1][0]},{&l_801[0][1][0],&l_801[0][1][0]},{&l_801[0][1][0],&l_801[0][1][0]},{(void*)0,&l_801[4][1][0]},{&l_801[5][1][0],&l_801[3][1][0]}}};
        int *l_803 = &l_792.f1;
        int *l_804[6] = {&g_415[0][6][4],&g_415[0][6][4],&g_415[0][6][4],&g_415[0][6][4],&g_415[0][6][4],&g_415[0][6][4]};
        int i, j, k;
        for (i = 0; i < 7; i++)
        {
            for (j = 0; j < 7; j++)
                l_777[i][j] = &g_440;
        }
        if (p_14)
            break;
        for (g_533.f0 = 0; (g_533.f0 <= 35); g_533.f0++)
        {
            int l_739 = 1L;
            unsigned l_747 = 4294967295UL;
            if (l_739)
            {
                char *l_744 = &g_423[4][1];
                unsigned short *l_748 = (void*)0;
                unsigned short *l_749 = &g_550[2];
                int l_750[1][2][4] = {{{0x87B63D01L,0x87B63D01L,0x87B63D01L,0x87B63D01L},{0x87B63D01L,0x87B63D01L,0x87B63D01L,0x87B63D01L}}};
                struct S0 *l_753 = &g_61[3][0];
                struct S0 **l_754 = (void*)0;
                struct S0 **l_755 = &l_753;
                int i, j, k;
                (*l_755) = (((((func_45(func_47(((p_15 & (safe_add_func_uint32_t_u_u((safe_sub_func_int16_t_s_s(g_74[3][0], ((*l_749) = (g_533.f0 && (g_725 != (((*l_744) = l_739) < (((safe_sub_func_int8_t_s_s(l_747, l_747)) || p_14) != 0x89L))))))), p_15))) , l_587[2][3]), p_15, l_750[0][0][2], p_15, l_751)) & l_752) , p_14) | l_750[0][0][2]) == p_15) , l_753);
            }
            else
            {
                int l_760 = 5L;
                struct S0 l_773 = {0xC9L,-1L,-1L,0x94BADDC5L,-1L,0xBCE573B7L};
                unsigned char *l_784 = &g_502[1][2][1].f0;
                int *l_790 = &g_61[3][0].f5;
                (*g_159) = (void*)0;
                for (g_725 = (-17); (g_725 <= 35); g_725 = safe_add_func_int16_t_s_s(g_725, 5))
                {
                    int l_762 = 0x55EB56EEL;
                    int ****l_770 = &l_637;
                    unsigned *l_771 = &g_502[1][2][1].f3;
                    (*g_159) = (*g_159);
                    for (p_14 = (-22); (p_14 < 14); p_14 = safe_add_func_uint8_t_u_u(p_14, 1))
                    {
                        short *l_761 = &g_533.f2;
                        unsigned *l_763 = &l_747;
                        int l_764 = 5L;
                        l_766 = (((*l_731) = &p_15) == ((func_45(g_533) , ((((*l_761) = (~(l_760 < 0xC3A2L))) == ((p_14 , ((*l_763) = ((l_762 = p_15) == l_747))) , ((((g_74[3][0] & g_533.f3) ^ l_764) , 0xB8B6C0BAL) , 0xCAF5L))) <= l_751)) , l_765));
                        (*g_159) = (*g_159);
                        if (l_760)
                            break;
                    }
                    l_739 &= ((l_747 & (l_760 , (safe_add_func_int8_t_s_s(g_769, (((*l_771) &= (l_770 == l_770)) || ((void*)0 == l_772)))))) , func_45(l_773));
                }
                for (l_773.f0 = 0; (l_773.f0 <= 4); l_773.f0 += 1)
                {
                    unsigned **l_776[7][7][5] = {{{&g_440,&g_440,&g_440,&g_440,&g_440},{&g_440,&g_440,(void*)0,&g_440,(void*)0},{&g_440,(void*)0,&g_440,&g_440,&g_440},{&g_440,&g_440,(void*)0,&g_440,&g_440},{&g_440,&g_440,&g_440,&g_440,&g_440},{&g_440,&g_440,&g_440,&g_440,&g_440},{&g_440,&g_440,&g_440,&g_440,&g_440}},{{&g_440,&g_440,(void*)0,&g_440,&g_440},{&g_440,&g_440,&g_440,&g_440,&g_440},{&g_440,(void*)0,&g_440,&g_440,(void*)0},{(void*)0,&g_440,(void*)0,(void*)0,(void*)0},{&g_440,&g_440,(void*)0,&g_440,&g_440},{&g_440,&g_440,&g_440,&g_440,&g_440},{&g_440,&g_440,(void*)0,&g_440,&g_440}},{{(void*)0,&g_440,(void*)0,(void*)0,&g_440},{&g_440,&g_440,&g_440,&g_440,(void*)0},{(void*)0,&g_440,&g_440,&g_440,&g_440},{&g_440,&g_440,&g_440,(void*)0,&g_440},{(void*)0,&g_440,&g_440,&g_440,(void*)0},{&g_440,&g_440,&g_440,&g_440,&g_440},{&g_440,(void*)0,&g_440,(void*)0,&g_440}},{{&g_440,&g_440,&g_440,&g_440,(void*)0},{&g_440,&g_440,&g_440,&g_440,(void*)0},{&g_440,(void*)0,&g_440,&g_440,(void*)0},{&g_440,&g_440,&g_440,(void*)0,&g_440},{(void*)0,&g_440,&g_440,&g_440,&g_440},{&g_440,&g_440,(void*)0,&g_440,(void*)0},{&g_440,&g_440,&g_440,(void*)0,&g_440}},{{&g_440,&g_440,(void*)0,&g_440,&g_440},{&g_440,&g_440,(void*)0,&g_440,&g_440},{&g_440,&g_440,&g_440,(void*)0,&g_440},{&g_440,&g_440,&g_440,(void*)0,(void*)0},{(void*)0,&g_440,&g_440,&g_440,(void*)0},{&g_440,&g_440,&g_440,&g_440,&g_440},{(void*)0,&g_440,(void*)0,&g_440,&g_440}},{{(void*)0,&g_440,&g_440,&g_440,&g_440},{&g_440,&g_440,&g_440,&g_440,&g_440},{&g_440,&g_440,&g_440,&g_440,&g_440},{&g_440,&g_440,&g_440,(void*)0,&g_440},{&g_440,(void*)0,&g_440,&g_440,(void*)0},{&g_440,&g_440,&g_440,&g_440,&g_440},{&g_440,&g_440,&g_440,&g_440,&g_440}},{{(void*)0,(void*)0,(void*)0,&g_440,&g_440},{&g_440,&g_440,&g_440,&g_440,(void*)0},{&g_440,(void*)0,&g_440,&g_440,&g_440},{&g_440,&g_440,&g_440,&g_440,&g_440},{&g_440,&g_440,&g_440,&g_440,&g_440},{&g_440,&g_440,&g_440,(void*)0,(void*)0},{&g_440,(void*)0,&g_440,&g_440,&g_440}}};
                    unsigned ***l_775[7] = {&l_776[2][0][2],&l_776[2][0][2],&l_776[2][0][2],&l_776[2][0][2],&l_776[2][0][2],&l_776[2][0][2],&l_776[2][0][2]};
                    int i, j, k;
                    l_774 = (void*)0;
                    g_415[l_773.f0][(l_773.f0 + 2)][(l_773.f0 + 2)] = (&g_440 != (l_778[4] = (l_777[1][5] = &g_440)));
                }
                (*l_790) = ((safe_add_func_uint16_t_u_u(l_751, (+0xD6C9L))) <= ((*l_784) = (func_42((((safe_sub_func_int16_t_s_s(((((((*l_784) = func_45(l_783)) == l_739) == 0x5B0AL) > (safe_mod_func_uint16_t_u_u(p_15, (p_15 ^ (((((safe_lshift_func_int8_t_s_u(((p_15 | p_14) < g_408[2]), 0)) >= l_783.f3) , l_789) < (*g_90)) <= p_14))))) < l_773.f2), 65526UL)) & p_14) || l_747)) , (*g_90))));
            }
            l_739 |= l_783.f4;
            if (l_783.f2)
                continue;
        }
        for (p_14 = 6; (p_14 >= 0); p_14 -= 1)
        {
            int *l_791 = &g_415[0][6][4];
            int i, j;
            l_792 = (l_587[p_14][p_14] = l_587[p_14][p_14]);
            if (p_14)
                continue;
        }
        g_415[0][6][4] &= (func_42(((*l_803) &= (&l_587[2][3] == (g_802 = ((((safe_add_func_uint32_t_u_u((safe_unary_minus_func_uint16_t_u(((g_61[3][0].f3 |= (safe_sub_func_uint16_t_u_u((p_14 <= (safe_lshift_func_uint8_t_u_s(((g_625 , ((void*)0 != &g_413)) <= (((g_413 = p_14) > (l_783.f2 > 0xD2L)) | g_769)), 2))), l_783.f0))) , l_783.f1))), p_14)) > p_14) , g_74[1][0]) , &g_61[3][0]))))) & 0xCAE2E157L);
    }
    l_587[2][3].f5 |= l_792.f3;
    return (*g_90);
}







static unsigned short func_16(unsigned p_17)
{
    unsigned **l_556 = (void*)0;
    unsigned **l_557 = &g_440;
    unsigned **l_558[3][3][1] = {{{&g_440},{&g_440},{&g_440}},{{&g_440},{&g_440},{&g_440}},{{&g_440},{&g_440},{&g_440}}};
    unsigned *l_559 = &g_502[1][2][1].f3;
    unsigned char *l_566[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int l_567 = 0x8C39D51EL;
    int *l_568[7] = {&l_567,&g_408[0],&l_567,&l_567,&g_408[0],&l_567,&l_567};
    unsigned char l_569[4];
    char *l_570 = &g_423[4][0];
    struct S0 *l_571[3][6][1] = {{{&g_61[1][0]},{&g_61[1][0]},{&g_502[0][6][0]},{&g_502[1][1][0]},{&g_502[1][2][1]},{&g_502[0][6][0]}},{{&g_502[1][2][1]},{&g_502[1][1][0]},{&g_502[0][6][0]},{&g_61[1][0]},{&g_61[1][0]},{&g_502[0][6][0]}},{{&g_502[1][1][0]},{&g_502[1][2][1]},{&g_502[0][6][0]},{&g_502[1][2][1]},{&g_502[1][1][0]},{&g_502[0][6][0]}}};
    struct S0 *l_575 = &g_61[3][0];
    unsigned short l_577[3][1][2] = {{{0xD363L,0xD363L}},{{7UL,0xD363L}},{{0xD363L,7UL}}};
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_569[i] = 0xD8L;
    g_427[1] |= (g_415[1][0][2] = (((((func_42(((((g_340 ^ (((l_559 = &g_413) != (void*)0) , p_17)) , (safe_lshift_func_uint8_t_u_u(((safe_rshift_func_int16_t_s_s(0L, (safe_sub_func_int32_t_s_s(0x2C8835BCL, p_17)))) || ((l_566[4] == &g_91) > g_415[1][2][0])), 6))) != p_17) || 8L)) && l_567) , g_502[1][2][1].f1) >= g_533.f1) , g_533.f0) && g_423[9][6]));
    if ((((*l_570) |= l_569[1]) && p_17))
    {
        int l_572 = (-8L);
        struct S0 l_573 = {0xE5L,0xD67A794AL,0L,4294967295UL,0L,0xC3C1FA0CL};
        struct S0 l_574 = {0UL,1L,0x9BEBL,0UL,0L,0L};
        l_574 = (l_573 = func_47(g_502[1][2][1], ((void*)0 != l_571[0][4][0]), l_572, p_17, (func_45(g_61[3][0]) >= p_17)));
        for (g_533.f2 = 0; (g_533.f2 <= 2); g_533.f2 += 1)
        {
            int i;
            if (g_550[g_533.f2])
                break;
        }
        return p_17;
    }
    else
    {
        struct S0 *l_576 = &g_502[1][3][0];
        l_576 = l_575;
        l_577[0][0][1] &= ((p_17 , 0x914DL) , g_502[1][2][1].f4);
        (*g_159) = &l_567;
    }
    return p_17;
}







static struct S0 func_20(int p_21, unsigned char p_22)
{
    unsigned char l_25[1][10];
    int l_424 = 0x74C647E2L;
    unsigned char l_425 = 0UL;
    int l_445[3];
    int ***l_448 = &g_159;
    struct S0 l_449[5] = {{0x81L,-8L,0L,4294967287UL,0xA2D9L,-1L},{0x81L,-8L,0L,4294967287UL,0xA2D9L,-1L},{0x81L,-8L,0L,4294967287UL,0xA2D9L,-1L},{0x81L,-8L,0L,4294967287UL,0xA2D9L,-1L},{0x81L,-8L,0L,4294967287UL,0xA2D9L,-1L}};
    unsigned **l_457 = &g_440;
    unsigned l_492[1];
    struct S0 *l_496 = &l_449[2];
    unsigned l_546 = 0x5EED898CL;
    unsigned short *l_549 = &g_550[2];
    int *l_553 = &g_427[1];
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 10; j++)
            l_25[i][j] = 7UL;
    }
    for (i = 0; i < 3; i++)
        l_445[i] = 0x80BEA671L;
    for (i = 0; i < 1; i++)
        l_492[i] = 0xDEF90734L;
    if ((safe_rshift_func_int8_t_s_s(l_25[0][2], l_25[0][2])))
    {
        unsigned short l_34 = 1UL;
        char *l_422[9] = {(void*)0,&g_423[4][1],(void*)0,&g_423[4][1],(void*)0,&g_423[4][1],(void*)0,&g_423[4][1],(void*)0};
        struct S0 l_428 = {0x2FL,5L,-2L,1UL,-4L,0x5E4F05E8L};
        unsigned *l_438 = &l_428.f3;
        unsigned char l_444 = 0UL;
        int ***l_447 = &g_159;
        int l_471 = 0xA99463C0L;
        int *l_491 = &g_61[3][0].f5;
        int i;
        g_427[1] |= (safe_lshift_func_int16_t_s_s(func_28((((l_25[0][2] , l_34) == (p_21 , (p_21 || (l_424 = (((safe_add_func_uint8_t_u_u(((safe_sub_func_uint8_t_u_u((func_39(p_21) < (safe_unary_minus_func_uint16_t_u(((safe_unary_minus_func_uint8_t_u(g_7)) & (safe_add_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_s((0x8FL || p_21), l_25[0][2])), l_25[0][2])))))), l_25[0][4])) | 0x7201L), l_25[0][2])) , g_91) ^ p_21))))) , 1L), l_34, p_22, l_25[0][2], l_425), 0));
        if ((g_427[1] , (*g_87)))
        {
            struct S0 l_437 = {254UL,1L,-5L,0UL,0x043BL,0x71696D27L};
            unsigned **l_439 = &l_438;
            int l_443[7][10][3] = {{{0x0DD46569L,0x0DD46569L,0x5A1796FCL},{0x9B749793L,4L,(-9L)},{0L,(-1L),(-8L)},{0x1B4F2C14L,0x09D9BF0DL,0x2119EC0BL},{0x154283D9L,0L,(-8L)},{2L,0x964D6966L,(-9L)},{1L,1L,(-5L)},{0x639A3677L,(-8L),0x32670A8FL},{(-9L),1L,0x9CC21973L},{(-1L),0xE174BB6DL,0xB97C6875L}},{{3L,0x7F650998L,0L},{4L,0L,0x639A3677L},{2L,0x3ECF7445L,0x32670A8FL},{0x4BBD5C68L,0x31D99F27L,0x2A719A52L},{1L,0x964D6966L,0x1B4F2C14L},{1L,1L,2L},{0x4BBD5C68L,0x639A3677L,0x964D6966L},{2L,(-8L),0xE5C1A39EL},{4L,0xBEE7D3F2L,0xE02FE429L},{3L,0L,1L}},{{(-1L),1L,0x11863492L},{(-9L),0x639A3677L,0x639A3677L},{0x639A3677L,1L,0xB97C6875L},{0L,(-1L),0x4BBD5C68L},{0x3D985ABDL,0L,0xCCCF060EL},{2L,0L,0x11863492L},{0x4BBD5C68L,0L,(-5L)},{0x154283D9L,(-1L),0x1B4F2C14L},{0xCA8C557EL,1L,1L},{1L,0x639A3677L,0x421DBD94L}},{{2L,1L,2L},{4L,0L,0x0DD46569L},{0L,0xBEE7D3F2L,1L},{0x9CC21973L,(-8L),0x5A1796FCL},{0xB2221C82L,0x639A3677L,0xCCCF060EL},{(-1L),1L,0L},{0L,0x964D6966L,0L},{(-9L),0x31D99F27L,0xCCCF060EL},{1L,0L,0x3ECF7445L},{0x5A1796FCL,0x32670A8FL,3L}},{{1L,0x84E471A6L,0xB97C6875L},{0x62EA50E7L,0xC4080DECL,0x2119EC0BL},{0x32670A8FL,0xE174BB6DL,0x09D9BF0DL},{0L,2L,0L},{1L,0xCCCF060EL,1L},{0xCA8C557EL,0x9CC21973L,0x9B749793L},{1L,0xE5C1A39EL,1L},{0x1B4F2C14L,0xE174BB6DL,1L},{1L,0x88AB3D43L,0L},{0xCA8C557EL,0xC937F915L,(-10L)}},{{1L,0x5A1796FCL,0x22D3CEF1L},{0L,0x9B749793L,1L},{0x32670A8FL,0x11863492L,3L},{0x62EA50E7L,0L,0x31D99F27L},{1L,0xC4080DECL,0x3D985ABDL},{0x5A1796FCL,(-6L),0xC937F915L},{0L,0xE5C1A39EL,0x2119EC0BL},{0x421DBD94L,0x639A3677L,1L},{(-8L),0x639A3677L,0x37F8357AL},{(-6L),0xE5C1A39EL,0L}},{{0xE02FE429L,(-6L),0x22D3CEF1L},{1L,0xC4080DECL,0x32670A8FL},{(-4L),0L,(-10L)},{(-1L),0x11863492L,1L},{4L,0x9B749793L,0L},{0x5A1796FCL,0x5A1796FCL,0x9B749793L},{0x62EA50E7L,0xC937F915L,0xB97C6875L},{0xE5C1A39EL,0x88AB3D43L,0x3D985ABDL},{0L,0xE174BB6DL,0xBEE7D3F2L},{4L,0xE5C1A39EL,0x3D985ABDL}}};
            struct S0 *l_446 = &l_428;
            int *l_465[1][1];
            int i, j, k;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 1; j++)
                    l_465[i][j] = (void*)0;
            }
            (*l_446) = func_47(((*l_446) = func_47(l_428, p_21, ((((safe_add_func_uint16_t_u_u(((safe_mod_func_int8_t_s_s((((safe_mod_func_uint16_t_u_u(0x70FCL, ((*g_90) & (safe_mod_func_int32_t_s_s(((((func_45((l_437 = func_47(func_47(l_437, ((g_440 = ((*l_439) = l_438)) != &g_413), (safe_add_func_uint8_t_u_u(l_437.f5, (p_22 ^ l_424))), p_21, g_415[0][6][4]), l_437.f1, p_22, p_22, l_425))) >= l_25[0][5]) || 65535UL) < p_22) > l_443[5][8][1]), l_443[5][8][0]))))) > (-1L)) ^ l_25[0][0]), l_444)) >= l_445[1]), 5L)) >= g_408[5]) , l_428.f0) || l_437.f2), p_21, l_428.f0)), l_443[5][8][1], p_21, l_443[4][0][1], p_22);
            if ((l_447 != l_448))
            {
                (**g_159) = (l_449[1] , (safe_add_func_int16_t_s_s(l_437.f0, 65533UL)));
                (*g_87) = (**g_159);
            }
            else
            {
                unsigned char l_462[5][5][7] = {{{0UL,0xC0L,0xB3L,0xD9L,255UL,0UL,0UL},{0xC0L,255UL,1UL,255UL,0xC0L,0xE1L,255UL},{0xB3L,1UL,0UL,255UL,0xB3L,0UL,250UL},{0xB3L,250UL,0xD9L,0xD9L,250UL,0xB3L,1UL},{0xB3L,255UL,5UL,0xB3L,250UL,1UL,255UL}},{{0xC0L,0UL,0xB3L,0x3BL,0xB3L,0UL,0xC0L},{0UL,255UL,0xD9L,0xB3L,0xC0L,0UL,0xB3L},{0xB3L,250UL,1UL,255UL,255UL,1UL,250UL},{255UL,1UL,0xD9L,0x3BL,1UL,0xB3L,250UL},{0UL,255UL,0xB3L,0UL,250UL,0UL,0xB3L}},{{0xC0L,0xC0L,5UL,0x3BL,255UL,0xE1L,0xC0L},{0xC0L,0xB3L,0xD9L,255UL,0UL,0UL,255UL},{0UL,250UL,0UL,0xB3L,255UL,0UL,1UL},{255UL,250UL,1UL,0x3BL,250UL,1UL,255UL},{250UL,0xD9L,0xD9L,250UL,0xB3L,1UL,0x3BL}},{{0UL,0xB3L,0xD9L,0UL,0x3BL,0UL,0UL},{0xB3L,0x3BL,0xE1L,0x3BL,0xB3L,1UL,0x3BL},{250UL,0xB3L,1UL,0x3BL,0xD9L,1UL,255UL},{0xD9L,255UL,0UL,0UL,255UL,0xD9L,0xB3L},{250UL,0x3BL,1UL,250UL,255UL,0x34L,0x3BL}},{{0xB3L,0UL,0xD9L,0xC0L,0xD9L,0UL,0xB3L},{0UL,0x3BL,0UL,0xD9L,0xB3L,0UL,0xD9L},{250UL,255UL,0x34L,0x3BL,0x3BL,0x34L,255UL},{0x3BL,0xB3L,0UL,0xC0L,0xB3L,0xD9L,255UL},{1UL,0x3BL,0xD9L,1UL,255UL,1UL,0xD9L}}};
                int l_469 = 0L;
                unsigned l_484 = 1UL;
                int i, j, k;
                for (l_428.f0 = 7; (l_428.f0 < 13); l_428.f0 = safe_add_func_int16_t_s_s(l_428.f0, 7))
                {
                    struct S0 l_454 = {247UL,0x2058ABA4L,-1L,4294967295UL,0xF34CL,0x3C91686DL};
                    struct S0 *l_455 = &l_449[0];
                    unsigned **l_456 = (void*)0;
                    (*l_455) = l_454;
                    if (((3L & ((*g_87) ^ 4294967291UL)) , ((l_457 = l_456) == l_439)))
                    {
                        short *l_463[1][6];
                        int l_466 = 0xAD5DE35BL;
                        unsigned char *l_467[6] = {&l_444,&l_444,&l_425,&l_444,&l_444,&l_425};
                        unsigned short *l_468[1][1][3];
                        struct S0 l_470[5][10][2] = {{{{248UL,5L,0x9AF2L,9UL,-5L,0x12FAB290L},{6UL,0L,5L,0UL,0x4ED9L,0x8CB45049L}},{{0x69L,0xED0DC103L,0x6133L,4294967295UL,0x9670L,0xD065A48FL},{0xB0L,0L,-8L,4294967287UL,0x19EBL,-1L}},{{255UL,0x4F8D5CADL,-1L,0xF4625E80L,3L,-1L},{255UL,0x4F8D5CADL,-1L,0xF4625E80L,3L,-1L}},{{6UL,0L,5L,0UL,0x4ED9L,0x8CB45049L},{0UL,0xCB20F40DL,-1L,4294967293UL,0xEA08L,-1L}},{{0x6BL,9L,-8L,4294967295UL,0xAA80L,1L},{0x3DL,-3L,6L,3UL,0x9192L,-3L}},{{0x3DL,-3L,6L,3UL,0x9192L,-3L},{0UL,-3L,0xF384L,0x5ABF2177L,3L,9L}},{{9UL,0x74DAF058L,-10L,4294967288UL,0x671FL,-4L},{0x3DL,-3L,6L,3UL,0x9192L,-3L}},{{0x69L,0xED0DC103L,0x6133L,4294967295UL,0x9670L,0xD065A48FL},{255UL,0x4F8D5CADL,-1L,0xF4625E80L,3L,-1L}},{{0x69L,0xED0DC103L,0x6133L,4294967295UL,0x9670L,0xD065A48FL},{0x3DL,-3L,6L,3UL,0x9192L,-3L}},{{9UL,0x74DAF058L,-10L,4294967288UL,0x671FL,-4L},{0UL,-3L,0xF384L,0x5ABF2177L,3L,9L}}},{{{0x3DL,-3L,6L,3UL,0x9192L,-3L},{248UL,5L,0x9AF2L,9UL,-5L,0x12FAB290L}},{{6UL,0L,5L,0UL,0x4ED9L,0x8CB45049L},{0x6BL,9L,-8L,4294967295UL,0xAA80L,1L}},{{1UL,0x5853653BL,1L,4294967287UL,1L,0L},{0UL,0xCB20F40DL,-1L,4294967293UL,0xEA08L,-1L}},{{0UL,0xCB20F40DL,-1L,4294967293UL,0xEA08L,-1L},{1UL,0x7A9660CAL,0xC3C1L,0xB7750F21L,0xA5AEL,0xCAA6950FL}},{{0UL,4L,-1L,1UL,0x15ADL,-6L},{1UL,0x5853653BL,1L,4294967287UL,1L,0L}},{{255UL,0x4F8D5CADL,-1L,0xF4625E80L,3L,-1L},{3UL,0xAB555D5DL,0xDD58L,9UL,-1L,0L}},{{0x6BL,9L,-8L,4294967295UL,0xAA80L,1L},{3UL,0xAB555D5DL,0xDD58L,9UL,-1L,0L}},{{255UL,0x4F8D5CADL,-1L,0xF4625E80L,3L,-1L},{1UL,0x5853653BL,1L,4294967287UL,1L,0L}},{{0UL,4L,-1L,1UL,0x15ADL,-6L},{1UL,0x7A9660CAL,0xC3C1L,0xB7750F21L,0xA5AEL,0xCAA6950FL}},{{0UL,0xCB20F40DL,-1L,4294967293UL,0xEA08L,-1L},{0UL,0xCB20F40DL,-1L,4294967293UL,0xEA08L,-1L}}},{{{1UL,0x5853653BL,1L,4294967287UL,1L,0L},{0x6BL,9L,-8L,4294967295UL,0xAA80L,1L}},{{6UL,0L,5L,0UL,0x4ED9L,0x8CB45049L},{248UL,5L,0x9AF2L,9UL,-5L,0x12FAB290L}},{{0x3DL,-3L,6L,3UL,0x9192L,-3L},{0UL,-3L,0xF384L,0x5ABF2177L,3L,9L}},{{9UL,0x74DAF058L,-10L,4294967288UL,0x671FL,-4L},{0x3DL,-3L,6L,3UL,0x9192L,-3L}},{{0x69L,0xED0DC103L,0x6133L,4294967295UL,0x9670L,0xD065A48FL},{255UL,0x4F8D5CADL,-1L,0xF4625E80L,3L,-1L}},{{0x69L,0xED0DC103L,0x6133L,4294967295UL,0x9670L,0xD065A48FL},{0x3DL,-3L,6L,3UL,0x9192L,-3L}},{{9UL,0x74DAF058L,-10L,4294967288UL,0x671FL,-4L},{0UL,-3L,0xF384L,0x5ABF2177L,3L,9L}},{{0x3DL,-3L,6L,3UL,0x9192L,-3L},{248UL,5L,0x9AF2L,9UL,-5L,0x12FAB290L}},{{6UL,0L,5L,0UL,0x4ED9L,0x8CB45049L},{0x6BL,9L,-8L,4294967295UL,0xAA80L,1L}},{{1UL,0x5853653BL,1L,4294967287UL,1L,0L},{0UL,0xCB20F40DL,-1L,4294967293UL,0xEA08L,-1L}}},{{{0UL,0xCB20F40DL,-1L,4294967293UL,0xEA08L,-1L},{1UL,0x7A9660CAL,0xC3C1L,0xB7750F21L,0xA5AEL,0xCAA6950FL}},{{0UL,4L,-1L,1UL,0x15ADL,-6L},{1UL,0x5853653BL,1L,4294967287UL,1L,0L}},{{255UL,0x4F8D5CADL,-1L,0xF4625E80L,3L,-1L},{3UL,0xAB555D5DL,0xDD58L,9UL,-1L,0L}},{{0x6BL,9L,-8L,4294967295UL,0xAA80L,1L},{3UL,0xAB555D5DL,0xDD58L,9UL,-1L,0L}},{{255UL,0x4F8D5CADL,-1L,0xF4625E80L,3L,-1L},{1UL,0x5853653BL,1L,4294967287UL,1L,0L}},{{0UL,4L,-1L,1UL,0x15ADL,-6L},{1UL,0x7A9660CAL,0xC3C1L,0xB7750F21L,0xA5AEL,0xCAA6950FL}},{{0UL,0xCB20F40DL,-1L,4294967293UL,0xEA08L,-1L},{0UL,0xCB20F40DL,-1L,4294967293UL,0xEA08L,-1L}},{{1UL,0x5853653BL,1L,4294967287UL,1L,0L},{0x6BL,9L,-8L,4294967295UL,0xAA80L,1L}},{{6UL,0L,5L,0UL,0x4ED9L,0x8CB45049L},{248UL,5L,0x9AF2L,9UL,-5L,0x12FAB290L}},{{0x3DL,-3L,6L,3UL,0x9192L,-3L},{0UL,-3L,0xF384L,0x5ABF2177L,3L,9L}}},{{{9UL,0x74DAF058L,-10L,4294967288UL,0x671FL,-4L},{0x3DL,-3L,6L,3UL,0x9192L,-3L}},{{0x69L,0xED0DC103L,0x6133L,4294967295UL,0x9670L,0xD065A48FL},{255UL,0x4F8D5CADL,-1L,0xF4625E80L,3L,-1L}},{{0x69L,0xED0DC103L,0x6133L,4294967295UL,0x9670L,0xD065A48FL},{0x3DL,-3L,6L,3UL,0x9192L,-3L}},{{9UL,0x74DAF058L,-10L,4294967288UL,0x671FL,-4L},{0UL,-3L,0xF384L,0x5ABF2177L,3L,9L}},{{0x3DL,-3L,6L,3UL,0x9192L,-3L},{248UL,5L,0x9AF2L,9UL,-5L,0x12FAB290L}},{{6UL,0L,5L,0UL,0x4ED9L,0x8CB45049L},{0x6BL,9L,-8L,4294967295UL,0xAA80L,1L}},{{1UL,0x5853653BL,1L,4294967287UL,1L,0L},{0UL,0xCB20F40DL,-1L,4294967293UL,0xEA08L,-1L}},{{0UL,0xCB20F40DL,-1L,4294967293UL,0xEA08L,-1L},{1UL,0x7A9660CAL,0xC3C1L,0xB7750F21L,0xA5AEL,0xCAA6950FL}},{{0UL,4L,-1L,1UL,0x15ADL,-6L},{1UL,0x5853653BL,1L,4294967287UL,1L,0L}},{{255UL,0x4F8D5CADL,-1L,0xF4625E80L,3L,-1L},{3UL,0xAB555D5DL,0xDD58L,9UL,-1L,0L}}}};
                        struct S0 l_474 = {0x85L,0L,0x42B0L,0x00327925L,-3L,-1L};
                        unsigned l_483[10][6] = {{0xE7ABA9CDL,0x358CD0BDL,4294967292UL,0UL,4294967292UL,0x358CD0BDL},{0x696A06DBL,0x358CD0BDL,0UL,8UL,8UL,0UL},{0x696A06DBL,0x696A06DBL,8UL,0xE7ABA9CDL,4294967292UL,0xE7ABA9CDL},{0x358CD0BDL,0x696A06DBL,0x358CD0BDL,0UL,8UL,8UL},{0x3E606099L,0x358CD0BDL,0x358CD0BDL,0x3E606099L,0x696A06DBL,0xE7ABA9CDL},{0xE7ABA9CDL,0x3E606099L,8UL,0x3E606099L,0xE7ABA9CDL,0UL},{0x3E606099L,0xE7ABA9CDL,0UL,0UL,0xE7ABA9CDL,0x3E606099L},{0x358CD0BDL,0x3E606099L,0x696A06DBL,0xE7ABA9CDL,0x696A06DBL,0x3E606099L},{0x696A06DBL,0x358CD0BDL,0UL,8UL,8UL,0UL},{0x696A06DBL,0x696A06DBL,8UL,0xE7ABA9CDL,4294967292UL,0xE7ABA9CDL}};
                        int i, j, k;
                        for (i = 0; i < 1; i++)
                        {
                            for (j = 0; j < 6; j++)
                                l_463[i][j] = &l_437.f2;
                        }
                        for (i = 0; i < 1; i++)
                        {
                            for (j = 0; j < 1; j++)
                            {
                                for (k = 0; k < 3; k++)
                                    l_468[i][j][k] = (void*)0;
                            }
                        }
                        l_471 &= ((safe_add_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s(l_437.f1, 1)), (l_454.f5 = (0x5E25L >= ((***l_448) = l_462[3][0][2]))))) != ((((((safe_unary_minus_func_int16_t_s(g_408[4])) | (p_22 = (l_466 = (l_465[0][0] == (void*)0)))) ^ ((l_469 |= g_74[3][0]) ^ (func_45((((*l_455) = l_470[4][6][0]) , l_428)) || p_21))) | p_21) && g_427[1]) && (-1L)));
                        p_21 |= ((*g_87) = 0x7B49C2B8L);
                        p_21 = (safe_mod_func_uint8_t_u_u((g_61[3][0].f0 = ((((*l_455) = l_474) , (0xB74AL >= (&l_474 != &l_437))) > (safe_sub_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u(0x64L, 6)), (0xD99EB680L || (((***l_447) ^ (safe_mod_func_int32_t_s_s(((safe_sub_func_uint8_t_u_u((((((l_454.f2 == (**g_159)) | p_22) | 0xBBC128D3L) && p_21) >= p_22), (*g_90))) != l_462[3][0][2]), 0x75B33903L))) || 0xD5L)))))), l_483[3][1]));
                    }
                    else
                    {
                        unsigned *l_487 = &g_7;
                        unsigned char *l_488 = &l_462[1][2][2];
                        l_428.f5 &= (((func_28(p_22, (l_484 , p_21), (((safe_sub_func_int16_t_s_s(p_21, (((((*l_487) = g_427[0]) , (*g_440)) || l_454.f5) != ((*l_488) = p_22)))) , g_423[4][1]) , (*g_87)), p_21, p_21) , g_408[4]) , (*g_440)) == 0x7FAAD70BL);
                    }
                }
                for (g_7 = 0; (g_7 <= 0); g_7 += 1)
                {
                    int l_489[10];
                    int i;
                    for (i = 0; i < 10; i++)
                        l_489[i] = 0x77FE2768L;
                    if (p_21)
                        break;
                    if (l_489[9])
                        break;
                    (**l_447) = &p_21;
                    if ((l_489[6] & g_61[3][0].f0))
                    {
                        g_427[1] &= (*g_87);
                        (**l_447) = (**l_448);
                    }
                    else
                    {
                        if (l_484)
                            break;
                        (**l_448) = (void*)0;
                        if (p_22)
                            break;
                    }
                    for (g_340 = 0; (g_340 >= 0); g_340 -= 1)
                    {
                        (*l_446) = g_61[2][0];
                    }
                }
            }
        }
        else
        {
            short l_490 = (-1L);
            g_427[1] |= (l_490 | (**g_159));
            (**l_448) = (void*)0;
        }
        (*l_491) |= (g_427[1] = l_449[1].f0);
    }
    else
    {
        int l_493 = (-1L);
        struct S0 **l_528 = &l_496;
        int l_530 = 1L;
        if ((p_22 == (l_492[0] || (g_74[3][0] , l_493))))
        {
            return l_449[1];
        }
        else
        {
            struct S0 *l_510 = &g_61[3][0];
            int l_527 = 0x7672C4A0L;
            for (g_340 = 4; (g_340 >= 0); g_340 -= 1)
            {
                for (g_126 = 0; (g_126 <= 4); g_126 += 1)
                {
                    char *l_494 = &g_423[7][0];
                    int *l_495 = &g_408[0];
                    (*l_495) |= ((***l_448) ^= (l_494 == (void*)0));
                }
                (*g_87) = ((void*)0 != l_496);
            }
            for (g_340 = 0; (g_340 == (-9)); g_340 = safe_sub_func_int16_t_s_s(g_340, 7))
            {
                char l_503[6][8] = {{(-5L),(-1L),(-5L),0x81L,0x9EL,0x9EL,0x81L,(-5L)},{(-1L),(-1L),0x9EL,(-4L),(-1L),(-4L),0x9EL,(-1L)},{(-1L),(-5L),0x81L,0x9EL,0x9EL,0x81L,(-5L),(-1L)},{(-5L),0x7FL,(-1L),(-4L),(-1L),0x7FL,(-5L),(-5L)},{0x7FL,(-4L),0x81L,0x81L,(-4L),0x7FL,0x9EL,0x7FL},{(-4L),(-4L),(-1L),(-4L),0x9EL,(-1L),(-1L),0x9EL}};
                int l_526 = 0x86F0188CL;
                int *l_545 = &l_445[1];
                int i, j;
                for (g_126 = 0; (g_126 == (-15)); g_126 = safe_sub_func_uint16_t_u_u(g_126, 7))
                {
                    struct S0 l_501 = {255UL,0xABA1216DL,-1L,0x165315A8L,-1L,0x7ED16AB7L};
                    struct S0 **l_511 = &l_510;
                    char *l_512 = &g_423[4][1];
                    (*g_87) = (func_45(((*l_496) = func_47(l_501, (func_45(g_502[1][2][1]) & g_61[3][0].f1), p_22, ((*l_512) |= ((l_503[5][2] ^ (safe_rshift_func_uint8_t_u_s(((((*l_511) = ((safe_mod_func_uint8_t_u_u((*g_90), (safe_sub_func_uint32_t_u_u(p_22, ((void*)0 == &p_22))))) , l_510)) != (void*)0) , 0xDDL), p_21))) >= g_126)), p_22))) | (*g_440));
                    for (l_424 = 10; (l_424 != (-13)); l_424 = safe_sub_func_int32_t_s_s(l_424, 2))
                    {
                        int l_523 = 0xBC7182AAL;
                        int *l_529[3];
                        struct S0 **l_534 = (void*)0;
                        struct S0 **l_535 = (void*)0;
                        struct S0 *l_537 = (void*)0;
                        struct S0 **l_536 = &l_537;
                        int i;
                        for (i = 0; i < 3; i++)
                            l_529[i] = &l_449[1].f5;
                    }
                }
            }
            return (*l_510);
        }
    }
    (*l_553) = ((((((safe_rshift_func_uint16_t_u_u(((g_74[3][0] = (~p_22)) >= (((((*l_549) = (l_457 == (void*)0)) || ((+func_45((*l_496))) > (safe_rshift_func_int16_t_s_u(p_21, ((void*)0 == l_549))))) >= (l_492[0] <= l_449[1].f0)) | p_21)), 13)) , (-7L)) != p_22) , p_21) < p_22) <= 254UL);
    return g_502[1][2][1];
}







static short func_28(char p_29, unsigned p_30, int p_31, unsigned short p_32, char p_33)
{
    int l_426[5][9][5] = {{{0x2E80AADEL,0x0FF21CE2L,0x0E9382FCL,0x9839A67BL,0x0E9382FCL},{(-3L),(-3L),0xC5F0750FL,0x5D797B6BL,0x9839A67BL},{(-8L),(-1L),0x0FF21CE2L,(-1L),1L},{0xC5F0750FL,0x9839A67BL,(-1L),0x7EE76987L,0x5239E565L},{(-1L),(-1L),(-1L),0x7FA9D3EFL,(-8L)},{(-7L),(-3L),0x88A323A0L,0xF0C5FCD0L,(-6L)},{0x88A323A0L,0x0FF21CE2L,0x9839A67BL,(-6L),(-6L)},{0xAA8B12F5L,(-1L),0xAA8B12F5L,(-1L),(-8L)},{(-1L),(-1L),1L,0x0E9382FCL,0x5239E565L}},{{(-4L),(-1L),0x0D1C1F7AL,0x2E80AADEL,1L},{0x5D797B6BL,0xC02552CBL,1L,0x5239E565L,0x9839A67BL},{(-9L),0x5D797B6BL,0xAA8B12F5L,(-4L),0x0E9382FCL},{(-1L),0x72679D07L,0x9839A67BL,(-1L),0x0D1C1F7AL},{(-1L),0x88A323A0L,0x88A323A0L,(-1L),(-1L)},{(-9L),0x2E80AADEL,(-1L),0xC5F0750FL,(-7L)},{0x5D797B6BL,0x7FA9D3EFL,(-1L),1L,(-4L)},{(-4L),0xC6310BEAL,0x0FF21CE2L,0xC5F0750FL,0x2E80AADEL},{(-1L),0x0E9382FCL,0xC5F0750FL,(-8L),0x88A323A0L}},{{0xC6310BEAL,(-1L),(-9L),0x7FA9D3EFL,0x9839A67BL},{0xAA8B12F5L,(-1L),0x5239E565L,(-1L),0xAA8B12F5L},{0x0FF21CE2L,(-9L),0x88A323A0L,(-1L),1L},{(-1L),0x5D797B6BL,0xF0C5FCD0L,(-1L),0x0D1C1F7AL},{0x7EE76987L,(-4L),0xC5F0750FL,(-9L),1L},{(-1L),(-1L),0x7FA9D3EFL,(-8L),0xAA8B12F5L},{1L,0xAA8B12F5L,0xC02552CBL,0xF0C5FCD0L,0x9839A67BL},{(-1L),0x88A323A0L,0xC02552CBL,0xC02552CBL,0x88A323A0L},{(-6L),(-7L),0x7FA9D3EFL,(-4L),(-1L)}},{{(-4L),(-1L),0xC5F0750FL,0x9839A67BL,(-1L)},{0x88A323A0L,0xC5F0750FL,0xF0C5FCD0L,(-1L),0x0FF21CE2L},{(-4L),(-8L),0x88A323A0L,(-7L),0xC5F0750FL},{(-6L),(-3L),0x5239E565L,0x72679D07L,0x0E9382FCL},{(-1L),0x2E80AADEL,(-9L),0x72679D07L,(-9L)},{1L,1L,0x7EE76987L,(-7L),0x72679D07L},{(-1L),0x7FA9D3EFL,0x2E80AADEL,(-1L),(-6L)},{0x7EE76987L,0x72679D07L,(-8L),0x9839A67BL,(-1L)},{(-1L),0x7FA9D3EFL,(-3L),(-4L),(-1L)}},{{0x0FF21CE2L,1L,0xAA8B12F5L,0xC02552CBL,0x0D1C1F7AL},{0xC02552CBL,0x7FA9D3EFL,(-6L),0x0D1C1F7AL,0x0D1C1F7AL},{(-1L),(-1L),(-1L),(-1L),0xC5F0750FL},{(-1L),(-1L),0x3F96DEEFL,(-7L),0x2E80AADEL},{0x72679D07L,(-1L),0x5D797B6BL,(-4L),0x3F96DEEFL},{(-8L),(-9L),0x3F96DEEFL,0x2E80AADEL,(-6L)},{0x0FF21CE2L,(-8L),(-1L),0x72679D07L,(-7L)},{0x88A323A0L,0xF0C5FCD0L,(-6L),0x7EE76987L,0x5D797B6BL},{0x88A323A0L,0xC02552CBL,0xC02552CBL,0x88A323A0L,(-1L)}}};
    int i, j, k;
    l_426[4][7][3] |= (**g_159);
    (*g_87) = (-1L);
    return p_33;
}







static unsigned char func_39(unsigned short p_40)
{
    char l_41 = (-1L);
    unsigned short *l_409 = &g_74[3][0];
    short *l_410 = &g_126;
    unsigned *l_411 = (void*)0;
    unsigned *l_412 = &g_413;
    int *l_414 = &g_415[0][6][4];
    (*l_414) ^= (g_7 ^ ((((-1L) > l_41) & 65529UL) & ((g_7 < ((*l_412) &= ((65534UL != ((*l_409) &= (!func_42(p_40)))) ^ ((*l_410) = (((p_40 | 0x81L) , 0x62AEL) , l_41))))) != p_40)));
    return (*g_90);
}







static unsigned short func_42(int p_43)
{
    int l_44[4][3][1] = {{{0x04E266BCL},{(-1L)},{0xBBA6DAD3L}},{{(-1L)},{0x04E266BCL},{0x04E266BCL}},{{(-1L)},{0xBBA6DAD3L},{(-1L)}},{{0x04E266BCL},{0x04E266BCL},{(-1L)}}};
    struct S0 *l_65[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    char l_80 = 0xD0L;
    struct S0 l_85 = {255UL,0x8B48F969L,-4L,0UL,0xA6E1L,0x62FF4F29L};
    unsigned l_86[2];
    int l_124 = (-1L);
    unsigned l_161 = 0UL;
    char **l_228[7][6][6] = {{{(void*)0,(void*)0,&g_212,&g_212,&g_212,&g_212},{&g_212,&g_212,&g_212,&g_212,(void*)0,&g_212},{&g_212,&g_212,&g_212,&g_212,&g_212,&g_212},{&g_212,&g_212,(void*)0,&g_212,&g_212,&g_212},{&g_212,&g_212,&g_212,&g_212,&g_212,(void*)0},{(void*)0,&g_212,&g_212,&g_212,&g_212,&g_212}},{{&g_212,&g_212,&g_212,&g_212,&g_212,&g_212},{&g_212,&g_212,&g_212,(void*)0,&g_212,&g_212},{&g_212,(void*)0,(void*)0,(void*)0,&g_212,&g_212},{&g_212,&g_212,&g_212,(void*)0,(void*)0,(void*)0},{&g_212,&g_212,&g_212,(void*)0,&g_212,&g_212},{&g_212,&g_212,&g_212,&g_212,&g_212,&g_212}},{{&g_212,&g_212,(void*)0,&g_212,(void*)0,(void*)0},{&g_212,&g_212,&g_212,&g_212,&g_212,(void*)0},{&g_212,(void*)0,(void*)0,&g_212,&g_212,&g_212},{&g_212,&g_212,&g_212,(void*)0,&g_212,&g_212},{&g_212,&g_212,&g_212,&g_212,(void*)0,(void*)0},{&g_212,(void*)0,&g_212,&g_212,&g_212,&g_212}},{{&g_212,(void*)0,(void*)0,&g_212,(void*)0,&g_212},{&g_212,&g_212,&g_212,&g_212,&g_212,&g_212},{&g_212,&g_212,&g_212,(void*)0,&g_212,&g_212},{&g_212,(void*)0,(void*)0,(void*)0,&g_212,&g_212},{(void*)0,&g_212,&g_212,&g_212,&g_212,&g_212},{&g_212,(void*)0,&g_212,&g_212,&g_212,&g_212}},{{&g_212,&g_212,(void*)0,&g_212,&g_212,(void*)0},{&g_212,(void*)0,&g_212,&g_212,&g_212,&g_212},{&g_212,&g_212,&g_212,(void*)0,&g_212,&g_212},{&g_212,&g_212,&g_212,&g_212,&g_212,(void*)0},{&g_212,&g_212,(void*)0,&g_212,(void*)0,&g_212},{&g_212,(void*)0,&g_212,&g_212,&g_212,&g_212}},{{&g_212,&g_212,&g_212,(void*)0,&g_212,&g_212},{&g_212,&g_212,&g_212,&g_212,&g_212,(void*)0},{&g_212,(void*)0,&g_212,&g_212,(void*)0,&g_212},{&g_212,&g_212,&g_212,&g_212,&g_212,(void*)0},{&g_212,&g_212,&g_212,&g_212,&g_212,&g_212},{(void*)0,&g_212,&g_212,&g_212,&g_212,&g_212}},{{&g_212,(void*)0,&g_212,&g_212,&g_212,&g_212},{&g_212,&g_212,(void*)0,&g_212,&g_212,(void*)0},{&g_212,&g_212,&g_212,(void*)0,&g_212,&g_212},{(void*)0,(void*)0,&g_212,&g_212,&g_212,&g_212},{&g_212,&g_212,&g_212,&g_212,(void*)0,&g_212},{&g_212,&g_212,&g_212,&g_212,&g_212,&g_212}}};
    unsigned *l_272 = (void*)0;
    int ***l_342 = &g_159;
    struct S0 l_405[6] = {{255UL,-1L,7L,1UL,0x553EL,0x1C5A2FEAL},{255UL,-1L,7L,1UL,0x553EL,0x1C5A2FEAL},{255UL,-1L,7L,1UL,0x553EL,0x1C5A2FEAL},{255UL,-1L,7L,1UL,0x553EL,0x1C5A2FEAL},{255UL,-1L,7L,1UL,0x553EL,0x1C5A2FEAL},{255UL,-1L,7L,1UL,0x553EL,0x1C5A2FEAL}};
    struct S0 l_406 = {0x82L,0x52A82C0DL,1L,0x2E2FDFCEL,0xD8DBL,0xD380D2B9L};
    struct S0 l_407 = {0xC5L,-10L,0x7A36L,0xCAB29C44L,0x0586L,0L};
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_86[i] = 0xBF5C28DFL;
    for (p_43 = 0; (p_43 <= 0); p_43 += 1)
    {
        int l_62 = 0x806EB766L;
        unsigned char *l_64[4] = {&g_61[3][0].f0,&g_61[3][0].f0,&g_61[3][0].f0,&g_61[3][0].f0};
        struct S0 l_71 = {0x47L,7L,0xD243L,0xEA725BA0L,9L,0x0C75B897L};
        unsigned short l_81 = 0UL;
        char l_88 = (-1L);
        int *l_98 = (void*)0;
        char l_129 = 6L;
        int l_143 = 0xE12F6A2AL;
        unsigned short *l_162 = &g_74[1][4];
        short *l_163[8] = {&l_85.f2,&l_85.f2,&l_85.f2,&l_85.f2,&l_85.f2,&l_85.f2,&l_85.f2,&l_85.f2};
        int l_169 = 1L;
        unsigned l_237 = 0xB72F35EBL;
        char ***l_249[1];
        unsigned l_267 = 1UL;
        struct S0 l_303[9] = {{3UL,0xB7819FA7L,0x7FBBL,0x44ACBC9FL,-7L,-1L},{3UL,0xB7819FA7L,0x7FBBL,0x44ACBC9FL,-7L,-1L},{3UL,0xB7819FA7L,0x7FBBL,0x44ACBC9FL,-7L,-1L},{3UL,0xB7819FA7L,0x7FBBL,0x44ACBC9FL,-7L,-1L},{3UL,0xB7819FA7L,0x7FBBL,0x44ACBC9FL,-7L,-1L},{3UL,0xB7819FA7L,0x7FBBL,0x44ACBC9FL,-7L,-1L},{3UL,0xB7819FA7L,0x7FBBL,0x44ACBC9FL,-7L,-1L},{3UL,0xB7819FA7L,0x7FBBL,0x44ACBC9FL,-7L,-1L},{3UL,0xB7819FA7L,0x7FBBL,0x44ACBC9FL,-7L,-1L}};
        int ****l_371[3];
        int *l_374 = &g_61[3][0].f5;
        int l_387[10] = {0xC670D705L,0xC670D705L,0xC670D705L,0xC670D705L,0xC670D705L,0xC670D705L,0xC670D705L,0xC670D705L,0xC670D705L,0xC670D705L};
        int l_404 = 6L;
        int i;
        for (i = 0; i < 1; i++)
            l_249[i] = &l_228[6][1][2];
        for (i = 0; i < 3; i++)
            l_371[i] = &l_342;
    }
    g_408[0] |= (func_45((g_61[3][0] = (l_406 = l_405[5]))) >= func_45(l_407));
    return p_43;
}







static unsigned char func_45(struct S0 p_46)
{
    return p_46.f3;
}







static struct S0 func_47(struct S0 p_48, unsigned char p_49, char p_50, char p_51, unsigned char p_52)
{
    struct S0 *l_63 = &g_61[2][0];
    (*l_63) = p_48;
    (*l_63) = (*l_63);
    return g_61[3][0];
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_7, "g_7", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_61[i][j].f0, "g_61[i][j].f0", print_hash_value);
            transparent_crc(g_61[i][j].f1, "g_61[i][j].f1", print_hash_value);
            transparent_crc(g_61[i][j].f2, "g_61[i][j].f2", print_hash_value);
            transparent_crc(g_61[i][j].f3, "g_61[i][j].f3", print_hash_value);
            transparent_crc(g_61[i][j].f4, "g_61[i][j].f4", print_hash_value);
            transparent_crc(g_61[i][j].f5, "g_61[i][j].f5", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_74[i][j], "g_74[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_91, "g_91", print_hash_value);
    transparent_crc(g_126, "g_126", print_hash_value);
    transparent_crc(g_340, "g_340", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_408[i], "g_408[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_413, "g_413", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(g_415[i][j][k], "g_415[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_423[i][j], "g_423[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_427[i], "g_427[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_502[i][j][k].f0, "g_502[i][j][k].f0", print_hash_value);
                transparent_crc(g_502[i][j][k].f1, "g_502[i][j][k].f1", print_hash_value);
                transparent_crc(g_502[i][j][k].f2, "g_502[i][j][k].f2", print_hash_value);
                transparent_crc(g_502[i][j][k].f3, "g_502[i][j][k].f3", print_hash_value);
                transparent_crc(g_502[i][j][k].f4, "g_502[i][j][k].f4", print_hash_value);
                transparent_crc(g_502[i][j][k].f5, "g_502[i][j][k].f5", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_533.f0, "g_533.f0", print_hash_value);
    transparent_crc(g_533.f1, "g_533.f1", print_hash_value);
    transparent_crc(g_533.f2, "g_533.f2", print_hash_value);
    transparent_crc(g_533.f3, "g_533.f3", print_hash_value);
    transparent_crc(g_533.f4, "g_533.f4", print_hash_value);
    transparent_crc(g_533.f5, "g_533.f5", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_550[i], "g_550[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_625, "g_625", print_hash_value);
    transparent_crc(g_725, "g_725", print_hash_value);
    transparent_crc(g_769, "g_769", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_806[i], "g_806[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1035, "g_1035", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
