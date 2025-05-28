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

union U1 {
   unsigned f0;
   unsigned f1;
};

union U2 {
   short f0;
   char f1;
   int f2;
};


static unsigned g_6 = 8UL;
static unsigned short g_20[7] = {65535UL,65532UL,65535UL,65535UL,65532UL,65535UL,65535UL};
static union U0 g_91 = {0L};
static char g_112[3] = {0xBCL,0xBCL,0xBCL};
static union U0 g_154 = {0x6D0C9214L};
static int g_168 = (-7L);
static unsigned g_171 = 4294967288UL;
static unsigned char g_185[1] = {0x43L};
static int g_187 = (-1L);
static short g_193 = 0xAF3FL;
static unsigned g_194 = 0x830CD010L;
static unsigned g_219 = 0x09638302L;
static unsigned char g_222 = 0x92L;
static unsigned char g_230 = 254UL;
static char g_242 = (-2L);
static short g_272[10] = {0x90F1L,0x90F1L,0x90F1L,0x90F1L,0x90F1L,0x90F1L,0x90F1L,0x90F1L,0x90F1L,0x90F1L};
static char g_298 = 0xB3L;
static unsigned g_300 = 0x55A25A28L;
static unsigned char g_317 = 250UL;
static union U2 g_385 = {-1L};
static union U1 g_386 = {5UL};
static int g_415 = (-1L);
static int g_416 = 0L;
static int g_419 = 1L;
static short g_420 = 0x7458L;
static unsigned short g_423 = 0xFE37L;
static short g_433 = 0xC1F5L;
static int g_462 = (-2L);
static char g_463 = 0xA6L;
static int g_464 = (-1L);
static short g_465 = (-7L);
static unsigned g_468[2][8][9] = {{{0x6991D992L,0xEAC3F7EEL,0x6991D992L,4294967291UL,1UL,0x2606BC8AL,0x6991D992L,0x127E93FFL,0x6991D992L},{4294967287UL,9UL,0x48BD2AA8L,0x38C678B9L,4294967293UL,3UL,0x38C678B9L,0UL,4294967287UL},{0xAF58D7D2L,0x127E93FFL,4294967294UL,4294967291UL,0x0932EC39L,4294967291UL,4294967294UL,4294967291UL,0x5105DE15L},{0x430DF948L,0x38C678B9L,0xA30E264AL,1UL,4294967287UL,0xA30E264AL,4294967293UL,3UL,0x430DF948L},{0UL,4294967291UL,0UL,0x8EC39C9EL,0x6991D992L,4294967294UL,0UL,0x2606BC8AL,0UL},{0x430DF948L,4294967287UL,4294967293UL,4294967293UL,4294967287UL,0x430DF948L,0xA30E264AL,0x48BD2AA8L,0x430DF948L},{0x5105DE15L,0x2606BC8AL,0UL,0x8EC39C9EL,0xAF58D7D2L,0x8EC39C9EL,0UL,0x2606BC8AL,0x5105DE15L},{1UL,0x38C678B9L,4294967293UL,1UL,3UL,0xA30E264AL,0xA30E264AL,3UL,1UL}},{{0UL,0x2606BC8AL,0UL,4294967294UL,0x6991D992L,0x8EC39C9EL,0UL,4294967291UL,0UL},{1UL,4294967287UL,0xA30E264AL,4294967293UL,3UL,0x430DF948L,4294967293UL,0x48BD2AA8L,1UL},{0x5105DE15L,4294967291UL,0UL,4294967294UL,0xAF58D7D2L,4294967294UL,0UL,4294967291UL,0x5105DE15L},{0x430DF948L,0x38C678B9L,0xA30E264AL,1UL,4294967287UL,0xA30E264AL,4294967293UL,3UL,0x430DF948L},{0UL,4294967291UL,0UL,0x8EC39C9EL,0x6991D992L,4294967294UL,0UL,0x2606BC8AL,0UL},{0x430DF948L,4294967287UL,4294967293UL,4294967293UL,4294967287UL,0x430DF948L,0xA30E264AL,0x48BD2AA8L,0x430DF948L},{0x5105DE15L,0x2606BC8AL,0UL,0x8EC39C9EL,0xAF58D7D2L,0x8EC39C9EL,0UL,0x2606BC8AL,0x5105DE15L},{1UL,0x38C678B9L,4294967293UL,1UL,3UL,0xA30E264AL,0xA30E264AL,3UL,1UL}}};
static unsigned g_477 = 4294967295UL;
static int g_495 = 0xB124066EL;
static unsigned short g_497 = 0x2D39L;
static union U0 g_547 = {6L};
static unsigned g_866 = 0UL;
static unsigned short g_875[7] = {1UL,1UL,1UL,1UL,1UL,1UL,1UL};
static unsigned g_937[8] = {0x4465E5A7L,0x4465E5A7L,0x4465E5A7L,0x4465E5A7L,0x4465E5A7L,0x4465E5A7L,0x4465E5A7L,0x4465E5A7L};
static unsigned char g_1116 = 0x99L;
static unsigned short g_1126 = 65531UL;
static union U2 g_1162[1] = {{1L}};
static unsigned char g_1288 = 3UL;
static char g_1297 = 0x0CL;
static unsigned g_1299 = 4294967295UL;



static union U1 func_1(void);
static char func_2(unsigned p_3, int p_4);
static int func_7(union U2 p_8);
static int func_27(short p_28);
static int func_29(int p_30);
static int func_33(short p_34, unsigned short p_35, union U1 p_36, union U2 p_37, union U1 p_38);
static short func_42(unsigned char p_43, unsigned p_44, unsigned char p_45);
static int func_50(union U0 p_51, union U2 p_52, short p_53, unsigned char p_54);
static int func_59(unsigned p_60, unsigned p_61);
static short func_84(unsigned char p_85, union U0 p_86, int p_87, char p_88);
static union U1 func_1(void)
{
    int l_5[9][6] = {{(-6L),0x412DF3D3L,1L,0x412DF3D3L,(-6L),(-6L)},{0x6C2E7CCCL,0x412DF3D3L,0x412DF3D3L,0x6C2E7CCCL,0xAFE30F58L,0x6C2E7CCCL},{0x6C2E7CCCL,0xAFE30F58L,0x6C2E7CCCL,0x412DF3D3L,0x412DF3D3L,0x6C2E7CCCL},{(-6L),(-6L),0x412DF3D3L,1L,0x412DF3D3L,(-6L)},{0x412DF3D3L,0xAFE30F58L,1L,1L,0xAFE30F58L,0x412DF3D3L},{(-6L),0x412DF3D3L,1L,0x412DF3D3L,(-6L),(-6L)},{0x6C2E7CCCL,0x412DF3D3L,0x412DF3D3L,0x6C2E7CCCL,0xAFE30F58L,0x6C2E7CCCL},{0x6C2E7CCCL,0xAFE30F58L,0x6C2E7CCCL,0x412DF3D3L,0x412DF3D3L,0x6C2E7CCCL},{(-6L),(-6L),0x412DF3D3L,1L,0x412DF3D3L,(-6L)}};
    union U2 l_9 = {-5L};
    char l_1284 = 0xFAL;
    short l_1286 = 0L;
    int l_1295 = 0xF0EB163CL;
    int l_1296[6][10][3] = {{{8L,(-1L),0xEA0EB737L},{(-1L),(-1L),0xCB231698L},{0L,0x1DFC0305L,0L},{0xEFD15B2FL,0x9DC7AE86L,0xF0CE7B8DL},{0xCD847B3FL,0x255F736CL,(-1L)},{0x39A33F73L,0x8F390795L,0xD65E18E6L},{0x1DFC0305L,0x58D76D4CL,(-9L)},{0x5C3967BCL,(-1L),0x0CDAC7A2L},{0L,0xD65E18E6L,0x1DFC0305L},{1L,1L,3L}},{{7L,(-1L),1L},{0xD5DD9670L,0x69FB0E58L,1L},{7L,1L,0x39A33F73L},{(-1L),0x0410843AL,1L},{0x962FA0E2L,0xEA0EB737L,9L},{(-1L),0xE185B433L,9L},{0L,0xB9B9F683L,1L},{(-9L),(-1L),0x39A33F73L},{0xF0CE7B8DL,(-4L),1L},{0x72D8F629L,0x6DDFCF6DL,1L}},{{0x7E94F6B4L,0x962FA0E2L,3L},{0xA38DB01DL,8L,0x1DFC0305L},{0x83F6FA93L,0xE7ED7991L,0x0CDAC7A2L},{1L,(-1L),(-9L)},{4L,(-9L),0xD65E18E6L},{(-1L),4L,(-1L)},{1L,1L,0xF0CE7B8DL},{1L,(-10L),0L},{1L,0xEFD15B2FL,0xCB231698L},{0x56C68308L,0x86CCB802L,0xEA0EB737L}},{{1L,1L,1L},{1L,0x72D8F629L,0xEFD15B2FL},{1L,0xA731FD36L,0x4E8F9D0DL},{4L,(-1L),(-1L)},{0x17644F41L,0xEFD15B2FL,1L},{0x0410843AL,0xD65E18E6L,0x83F6FA93L},{0x3D5A6C55L,0L,0x0410843AL},{1L,0x806D1C7AL,0xF5EDC341L},{0x806D1C7AL,9L,8L},{9L,8L,1L}},{{8L,7L,(-1L)},{0xEA0EB737L,4L,0xBF763E2FL},{0xD8EF2305L,0x58AF59CFL,0x806D1C7AL},{1L,0x58AF59CFL,0L},{0x1DFC0305L,4L,1L},{0L,7L,(-9L)},{0xEFD15B2FL,8L,7L},{0x69FB0E58L,9L,0x3D5A6C55L},{1L,0x806D1C7AL,1L},{7L,0L,9L}},{{0x7E94F6B4L,0xD65E18E6L,0x962FA0E2L},{1L,0xEFD15B2FL,7L},{0L,(-1L),0x255F736CL},{0xA731FD36L,0xA731FD36L,6L},{(-1L),9L,0x0A68D5A3L},{0x86CCB802L,6L,0x9E222BC6L},{(-1L),0x255F736CL,0x58AF59CFL},{1L,0x86CCB802L,0x9E222BC6L},{(-1L),0x8D78CDADL,0x0A68D5A3L},{(-10L),0x8F390795L,6L}}};
    short l_1366 = (-4L);
    union U0 l_1413 = {0x5DA96441L};
    union U1 l_1432 = {0x4ABB3A94L};
    int i, j, k;
    l_9.f2 = ((func_2((l_5[4][1] <= g_6), func_7(l_9)) || l_9.f0) <= g_112[2]);

            for (g_1116 = 22; (g_1116 == 34); g_1116 = safe_add_func_int16_t_s_s(g_1116, 8))
    {
        unsigned l_1281[7] = {1UL,1UL,1UL,1UL,1UL,1UL,1UL};
        unsigned char l_1285[4][5] = {{0xA8L,1UL,1UL,0xA8L,1UL},{0x96L,0x96L,248UL,0x96L,0x96L},{252UL,1UL,252UL,252UL,1UL},{0x96L,255UL,255UL,0x96L,255UL}};
        int l_1293 = 4L;
        union U0 l_1316[7][6][6] = {{{{0x0CDA88F8L},{-8L},{0x70C15E2EL},{7L},{0x6E2C9A99L},{1L}},{{-5L},{0x1C25BCB0L},{0x70C15E2EL},{0xC7908A02L},{0x53F0AF59L},{0L}},{{0L},{-5L},{1L},{1L},{0xC8EACBEFL},{-9L}},{{1L},{0xC8EACBEFL},{-9L},{7L},{0L},{0x33B263DBL}},{{0xD09EE998L},{0xC7908A02L},{-4L},{0L},{0x53F0AF59L},{0x33B263DBL}},{{0x50DC424AL},{0xD09EE998L},{-9L},{0xAF26530BL},{0xAF26530BL},{-9L}}},{{{-8L},{-8L},{1L},{5L},{-5L},{0L}},{{0xD09EE998L},{0x50DC424AL},{0x70C15E2EL},{0x14A35CF3L},{0xB1008F88L},{1L}},{{0xC7908A02L},{0xD09EE998L},{0x70C15E2EL},{1L},{-8L},{0L}},{{0xC8EACBEFL},{1L},{1L},{-5L},{0L},{-9L}},{{-5L},{0L},{-9L},{0x14A35CF3L},{5L},{0x33B263DBL}},{{0x1C25BCB0L},{-5L},{-4L},{0xC8EACBEFL},{-8L},{0x33B263DBL}}},{{{-8L},{0x0CDA88F8L},{-9L},{0xB1008F88L},{0x6E2C9A99L},{-9L}},{{0x53F0AF59L},{0x50DC424AL},{1L},{0xD09EE998L},{-8L},{0x71ECB5A7L}},{{-5L},{0xAF26530BL},{0xC4B1CE30L},{0L},{0x14A35CF3L},{0xBC7428D1L}},{{-5L},{0xC7908A02L},{0xC4B1CE30L},{0xEE3CF89AL},{0xB1008F88L},{0x71ECB5A7L}},{{0x0CDA88F8L},{0xA9C092AFL},{0xBC7428D1L},{0xA9C092AFL},{0x0CDA88F8L},{0x230018E6L}},{{0xA9C092AFL},{0x0CDA88F8L},{0x230018E6L},{0L},{0x1C25BCB0L},{1L}}},{{{0xC7908A02L},{-5L},{0L},{0x0CDA88F8L},{0xB1008F88L},{1L}},{{0xAF26530BL},{-5L},{0x230018E6L},{7L},{1L},{0x230018E6L}},{{0xB1008F88L},{0xAF26530BL},{0xBC7428D1L},{0x1C25BCB0L},{0x50DC424AL},{0x71ECB5A7L}},{{0xC7908A02L},{0x6E2C9A99L},{0xC4B1CE30L},{0xC8EACBEFL},{7L},{0xBC7428D1L}},{{0xEE3CF89AL},{-5L},{0xC4B1CE30L},{0xA9C092AFL},{0xAF26530BL},{0x71ECB5A7L}},{{0xD09EE998L},{0xEE3CF89AL},{0xBC7428D1L},{-5L},{0x1C25BCB0L},{0x230018E6L}}},{{{-5L},{0x1C25BCB0L},{0x230018E6L},{0xC8EACBEFL},{0xD09EE998L},{1L}},{{1L},{0xA9C092AFL},{0L},{0xD09EE998L},{0xAF26530BL},{1L}},{{0xB1008F88L},{1L},{0x230018E6L},{0x14A35CF3L},{0x14A35CF3L},{0x230018E6L}},{{0x6E2C9A99L},{0x6E2C9A99L},{0xBC7428D1L},{0x0CDA88F8L},{0x53F0AF59L},{0x71ECB5A7L}},{{1L},{0xB1008F88L},{0xC4B1CE30L},{5L},{1L},{0xBC7428D1L}},{{0xA9C092AFL},{1L},{0xC8EACBEFL},{1L},{1L},{1L}}},{{{0x6612EBA5L},{1L},{-8L},{0x5FE2098AL},{1L},{0xAF26530BL}},{{0x5FE2098AL},{1L},{0xAF26530BL},{0x3E3D2356L},{9L},{0x0CDA88F8L}},{{3L},{0x5FE2098AL},{0xEE3CF89AL},{0x6612EBA5L},{1L},{0x0CDA88F8L}},{{1L},{0xF3BF9897L},{0xAF26530BL},{0xA24CD92BL},{-7L},{0xAF26530BL}},{{0x1D7A9CB5L},{0L},{-8L},{1L},{0xB41607F8L},{1L}},{{3L},{0x1D7A9CB5L},{0xC8EACBEFL},{1L},{0L},{-8L}}},{{{1L},{0xF3BF9897L},{0xC8EACBEFL},{0x5FE2098AL},{0L},{1L}},{{9L},{-3L},{-8L},{-3L},{9L},{0xAF26530BL}},{{-3L},{9L},{0xAF26530BL},{1L},{0x6612EBA5L},{0x0CDA88F8L}},{{0xF3BF9897L},{1L},{0xEE3CF89AL},{9L},{0L},{0x0CDA88F8L}},{{0x1D7A9CB5L},{3L},{0xAF26530BL},{-7L},{0xA24CD92BL},{0xAF26530BL}},{{0L},{0x1D7A9CB5L},{-8L},{0x6612EBA5L},{8L},{1L}}}};
        union U1 l_1339 = {4294967295UL};
        char l_1367 = (-3L);
        int i, j, k;
        g_495 |= ((g_272[5] != ((l_5[8][4] || g_317) < l_1281[2])) == g_272[7]);
        if (((((!((g_462 >= (safe_lshift_func_uint16_t_u_u(func_59(l_1281[2], g_112[1]), 8))) | (6UL && ((!(g_462 < (((((l_9.f1 >= (l_1281[3] <= (l_9.f0 && l_1284))) > l_5[4][1]) & l_9.f1) == 0x90L) || g_1162[0].f0))) & l_1281[3])))) > l_5[4][1]) ^ g_468[1][0][4]) | l_1285[0][3]))
        {
            int l_1287 = 0x44B7A6F3L;
            g_1288++;
        }
        else
        {
            short l_1291 = (-4L);
            int l_1292 = (-3L);
            int l_1294 = 0x71E1881DL;
            int l_1298 = 0L;
            g_1299--;
            g_154.f0 = l_1281[6];
            l_1293 = g_1297;
            if ((g_194 & 65535UL))
            {
                unsigned l_1327 = 0xDEA822A1L;
                if (l_9.f1)
                {
                    unsigned l_1317 = 5UL;
                    for (g_6 = 0; (g_6 <= 2); g_6 += 1)
                    {
                        int i;
                        l_1316[2][1][0].f0 &= ((safe_lshift_func_int16_t_s_u(g_875[(g_6 + 3)], (safe_mod_func_int16_t_s_s((safe_unary_minus_func_uint8_t_u(249UL)), l_1284)))) & (l_1298 | (~((g_1297 & l_1317) >= l_1281[2]))));
                    }
                }
                else
                {
                    unsigned char l_1326 = 0UL;
                    g_547.f0 = g_1116;
                    l_1292 &= (safe_mod_func_uint8_t_u_u(g_464, l_1294));
                }
                for (g_91.f0 = 0; (g_91.f0 == (-24)); g_91.f0--)
                {
                    unsigned l_1335 = 6UL;
                    for (g_419 = 6; (g_419 >= 0); g_419 -= 1)
                    {
                        unsigned char l_1334 = 254UL;
                        if (g_386.f1)
                            break;
                        l_1334 = g_171;
                        g_1162[0].f2 = 1L;
                        l_1335 = 2L;
                    }
                    return g_386;

                                    }
            }
            else
            {
                unsigned char l_1338 = 0x51L;
                for (g_91.f0 = 0; (g_91.f0 >= 18); g_91.f0 = safe_add_func_uint32_t_u_u(g_91.f0, 1))
                {
                    int l_1340 = (-1L);
                    g_464 = g_468[0][5][5];
                    g_495 = l_1338;
                    if (l_1291)
                    {
                        return l_1339;

                                            }
                    else
                    {
                        unsigned char l_1341 = 252UL;
                        if (l_1340)
                            break;
                        if (l_1341)
                            continue;
                    }
                }
            }
        }
        for (g_497 = 0; (g_497 > 47); g_497 = safe_add_func_int8_t_s_s(g_497, 3))
        {
            unsigned l_1346 = 1UL;
            for (g_419 = 0; (g_419 == (-13)); g_419 = safe_sub_func_uint8_t_u_u(g_419, 8))
            {
                l_1346--;
            }
            l_1367 = (safe_lshift_func_int8_t_s_u(((safe_lshift_func_int8_t_s_u((safe_rshift_func_int16_t_s_u(((0x6BE2E86DL ^ (safe_lshift_func_int8_t_s_u((0xAAAFL <= (func_2((safe_unary_minus_func_uint32_t_u((((safe_lshift_func_int8_t_s_u((safe_sub_func_int8_t_s_s((!g_194), 0xC4L)), 2)) ^ (((safe_mod_func_int16_t_s_s((safe_sub_func_uint8_t_u_u((((0xA9A12067L != g_468[0][4][6]) ^ l_5[4][1]) ^ g_193), g_468[1][0][4])), l_1281[2])) < l_1281[2]) <= g_317)) >= l_5[8][5]))), g_317) > 0xB374L)), g_866))) & 0x9CB9L), 10)), 6)) ^ l_1366), g_1288));
        }
    }
    for (g_385.f1 = (-28); (g_385.f1 < (-2)); g_385.f1++)
    {
        unsigned l_1376 = 0x36609F9BL;
        int l_1393 = 0xF06E05DEL;
        short l_1429 = 0x9D85L;
        for (g_1126 = 0; (g_1126 > 8); ++g_1126)
        {
            unsigned l_1377[7][10] = {{0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL}};
            unsigned char l_1404 = 0UL;
            int l_1416 = 0xFAC30D57L;
            unsigned short l_1417 = 0xB8FDL;
            int i, j;
            for (g_497 = (-17); (g_497 <= 47); g_497 = safe_add_func_int16_t_s_s(g_497, 9))
            {
                int l_1382 = 0x64399C30L;
                int l_1398 = (-1L);
                for (g_465 = (-24); (g_465 >= 17); g_465 = safe_add_func_int16_t_s_s(g_465, 6))
                {
                    unsigned short l_1392 = 0x84EFL;
                    if (l_5[4][1])
                        break;
                    if ((g_385.f1 > l_1376))
                    {
                        short l_1391[7][3] = {{0xB60BL,0x84A7L,0x84A7L},{0x6731L,(-10L),(-10L)},{0xB60BL,0x84A7L,0x84A7L},{0x6731L,(-10L),(-10L)},{0xB60BL,0x84A7L,0x84A7L},{0x6731L,(-10L),(-10L)},{0xB60BL,0x84A7L,0x84A7L}};
                        int i, j;
                        l_1377[2][6]--;
                        if (g_300)
                            continue;
                        l_1393 = (((~(safe_sub_func_int8_t_s_s(0xD8L, (g_416 == (g_171 > 0UL))))) || g_222) == g_194);
                    }
                    else
                    {
                        g_464 = (safe_add_func_int8_t_s_s(1L, 3L));
                        g_154.f0 = l_5[4][1];
                    }
                    if ((((l_1377[2][3] == (safe_sub_func_int8_t_s_s(g_875[4], 1L))) ^ g_497) < 1UL))
                    {
                        short l_1399 = 0x9177L;
                        g_154.f0 = l_9.f0;
                        g_1162[0].f2 = func_59((l_1398 || l_1399), g_219);
                        l_1416 &= ((safe_add_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u(((func_84(g_187, g_154, l_1404, (l_1366 & (safe_sub_func_uint16_t_u_u(((l_1399 >= (safe_lshift_func_int16_t_s_u(g_20[5], (((safe_mod_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u((func_84(l_1392, l_1413, (safe_rshift_func_int8_t_s_s(l_1382, 5)), g_194) & 0x37L), g_154.f0)), g_168)) != 0xE0L) != 4294967289UL)))) < 1UL), l_5[4][1])))) <= 0x9C14L) | g_171), l_1392)), 1L)) && l_9.f2);
                    }
                    else
                    {
                        g_464 = g_1162[0].f0;
                        l_1417++;
                    }
                    for (g_464 = 14; (g_464 == (-9)); --g_464)
                    {
                        int l_1426 = 0L;
                        g_462 = (safe_mod_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u(l_1392, (func_59(g_875[0], l_1426) || l_1392))), (1L & 0xE86BL)));
                    }
                }
            }
            g_464 ^= 0x20C4AB60L;
        }
        g_495 &= g_386.f1;
    }
    l_1296[2][1][0] = ((safe_rshift_func_int8_t_s_u(l_1413.f0, g_187)) || 0x9C1CL);
    return l_1432;

    }







static char func_2(unsigned p_3, int p_4)
{
    char l_1270 = 0xD2L;
    for (g_222 = 0; (g_222 == 8); g_222++)
    {
        g_462 = 0xBE0C5A13L;
    }
    p_4 = (safe_rshift_func_uint16_t_u_s((safe_mod_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u((l_1270 != (((0UL | ((((safe_add_func_int16_t_s_s((+(p_4 == g_317)), ((+((safe_lshift_func_int8_t_s_s((safe_lshift_func_int16_t_s_s((0xCCL < g_242), (p_3 == 1L))), ((((((l_1270 || 0xD3L) | g_317) | l_1270) >= l_1270) || p_4) == p_4))) && 0x45L)) && p_3))) & l_1270) || 0x1324L) != 0xA9C8BC9FL)) < p_4) || (-3L))), 0L)), 1UL)), l_1270));
    for (g_1126 = 4; (g_1126 >= 7); ++g_1126)
    {
        p_4 &= (+p_3);
    }
    return l_1270;
}







static int func_7(union U2 p_8)
{
    char l_13 = 0x12L;
    int l_14 = 0x466E9F08L;
    int l_15 = 0L;
    int l_17 = 0xAD0D7276L;
    char l_18 = 0xBFL;
    int l_19[4][8] = {{8L,0x077FEFB6L,0xD800F4D4L,0xD800F4D4L,0x077FEFB6L,8L,0x077FEFB6L,0xD800F4D4L},{0x6E074F0EL,0x077FEFB6L,0x6E074F0EL,8L,8L,0x6E074F0EL,0x077FEFB6L,0x6E074F0EL},{0x5E04A276L,8L,0xD800F4D4L,8L,0x5E04A276L,0x5E04A276L,8L,0xD800F4D4L},{0x077FEFB6L,0x077FEFB6L,0x5E04A276L,0x6E074F0EL,0x5E04A276L,0x077FEFB6L,0x077FEFB6L,0x5E04A276L}};
    char l_942[9][4] = {{0x33L,(-8L),0x38L,(-8L)},{(-8L),8L,5L,(-8L)},{5L,(-8L),(-1L),(-1L)},{0L,0L,0x38L,0x33L},{0L,8L,(-1L),0L},{5L,0x33L,5L,(-1L)},{(-8L),0x33L,0x38L,0L},{0x33L,8L,8L,0x33L},{5L,0L,8L,(-1L)}};
    union U1 l_969 = {0x71201736L};
    char l_1009 = (-6L);
    unsigned l_1014 = 0x0AEFCAF8L;
    union U0 l_1077 = {-1L};
    short l_1089[9][7] = {{0x7FB3L,2L,0x999CL,2L,0x7FB3L,0xF98AL,0xF98AL},{0x7FB3L,2L,0x999CL,2L,0x7FB3L,0xF98AL,0xF98AL},{0x7FB3L,2L,0x999CL,2L,0x7FB3L,0xF98AL,0xF98AL},{0x7FB3L,2L,0x999CL,2L,0x7FB3L,0xF98AL,0xF98AL},{0x7FB3L,2L,0x999CL,2L,0x7FB3L,0xF98AL,0xF98AL},{0x7FB3L,2L,0x999CL,2L,0x7FB3L,0xF98AL,0xF98AL},{0x7FB3L,2L,0x999CL,2L,0x7FB3L,0xF98AL,0xF98AL},{0x7FB3L,2L,0xF98AL,0xB618L,0x31FEL,0x7FB3L,0x7FB3L},{0x31FEL,0xB618L,0xF98AL,0xB618L,0x31FEL,0x7FB3L,0x7FB3L}};
    short l_1090 = (-8L);
    union U0 l_1118 = {0xA9898B50L};
    int l_1200 = 0xED5DC19BL;
    int l_1222 = (-5L);
    unsigned char l_1240 = 0x20L;
    int i, j;
lbl_1123:
    for (p_8.f0 = 0; (p_8.f0 <= 3); ++p_8.f0)
    {
        int l_12 = 0xD43DDCA2L;
        int l_16[10][5][5] = {{{1L,0xD8142C78L,(-4L),0x023703ACL,0xCAEA0A9FL},{(-9L),0L,0x0E13F5E3L,1L,0x0E13F5E3L},{0xE623B470L,0xE623B470L,0x5EAFB5D1L,(-1L),0x0E13F5E3L},{0L,0xC4E2BF5FL,0xD8142C78L,0x4BDA99DAL,0xCAEA0A9FL},{0x12AFD77CL,0x4BDA99DAL,0xE623B470L,8L,1L}},{{8L,0xC4E2BF5FL,1L,1L,0xC4E2BF5FL},{0xCAEA0A9FL,0xE623B470L,0x023703ACL,1L,0L},{(-4L),0L,0xB6A7F4EAL,8L,0x4BDA99DAL},{(-1L),0xD8142C78L,1L,0x4BDA99DAL,0L},{(-4L),(-1L),0L,(-1L),(-4L)}},{{0xCAEA0A9FL,(-9L),0L,1L,0xE623B470L},{8L,0x5EAFB5D1L,1L,0x023703ACL,0x12AFD77CL},{0x12AFD77CL,(-4L),0xB6A7F4EAL,(-9L),0xE623B470L},{0L,0x023703ACL,0x023703ACL,0L,(-4L)},{0xE623B470L,0x023703ACL,1L,0L,0L}},{{(-9L),(-4L),0xE623B470L,0x0E13F5E3L,0x4BDA99DAL},{1L,0x5EAFB5D1L,0xD8142C78L,0L,0xE623B470L},{(-1L),0L,(-1L),(-4L),8L},{(-1L),0xC4E2BF5FL,0x12AFD77CL,0L,0L},{0x0E13F5E3L,0x5EAFB5D1L,0xE9F9034EL,0x4BDA99DAL,0x023703ACL}},{{0L,0xE623B470L,0x12AFD77CL,0L,0x12AFD77CL},{0xB6A7F4EAL,0xB6A7F4EAL,(-1L),0xC4E2BF5FL,0x12AFD77CL},{(-4L),8L,0x5EAFB5D1L,1L,0x023703ACL},{(-9L),1L,0xB6A7F4EAL,0xCAEA0A9FL,0L},{0xCAEA0A9FL,8L,0x0E13F5E3L,0x0E13F5E3L,8L}},{{0x023703ACL,0xB6A7F4EAL,0x4BDA99DAL,0x0E13F5E3L,0xE623B470L},{0xE9F9034EL,0xE623B470L,1L,0xCAEA0A9FL,1L},{0xC4E2BF5FL,0x5EAFB5D1L,0L,1L,(-4L)},{0xE9F9034EL,0xC4E2BF5FL,(-4L),0xC4E2BF5FL,0xE9F9034EL},{0x023703ACL,0L,(-4L),0L,0xB6A7F4EAL}},{{0xCAEA0A9FL,(-1L),0L,0x4BDA99DAL,(-9L)},{(-9L),0xE9F9034EL,1L,0L,0xB6A7F4EAL},{(-4L),0x4BDA99DAL,0x4BDA99DAL,(-4L),0xE9F9034EL},{0xB6A7F4EAL,0x4BDA99DAL,0x0E13F5E3L,0xE623B470L,(-4L)},{0L,0xE9F9034EL,0xB6A7F4EAL,0x12AFD77CL,1L}},{{0x0E13F5E3L,(-1L),0x5EAFB5D1L,0xE623B470L,0x0E13F5E3L},{0xCAEA0A9FL,0xD8142C78L,0xCAEA0A9FL,0x5EAFB5D1L,0x4BDA99DAL},{0xCAEA0A9FL,0x023703ACL,(-4L),0xD8142C78L,1L},{0L,8L,(-1L),0xE623B470L,0L},{0xD8142C78L,0x0E13F5E3L,(-4L),1L,(-4L)}},{{0x12AFD77CL,0x12AFD77CL,0xCAEA0A9FL,0x023703ACL,(-4L)},{0x5EAFB5D1L,0x4BDA99DAL,8L,0xB6A7F4EAL,0L},{0xE9F9034EL,0xB6A7F4EAL,0x12AFD77CL,1L,1L},{1L,0x4BDA99DAL,0L,0L,0x4BDA99DAL},{0L,0x12AFD77CL,0xE623B470L,0L,0x0E13F5E3L}},{{(-1L),0x0E13F5E3L,(-9L),1L,0xB6A7F4EAL},{0x023703ACL,8L,1L,0xB6A7F4EAL,0x5EAFB5D1L},{(-1L),0x023703ACL,0x5EAFB5D1L,0x023703ACL,(-1L)},{0L,0xD8142C78L,0x5EAFB5D1L,1L,0x12AFD77CL},{1L,0xCAEA0A9FL,1L,0xE623B470L,0xE9F9034EL}}};
        union U0 l_878 = {-1L};
        char l_918 = 0xCBL;
        int i, j, k;
        --g_20[5];
        for (l_15 = 0; (l_15 >= (-7)); --l_15)
        {
            unsigned char l_801 = 0x2DL;
            union U0 l_885 = {0xC59E3601L};
            unsigned l_931 = 0xDAADD9B8L;
            int l_936 = 0xB608E4F9L;
            unsigned l_961 = 0x91B963B8L;
            union U2 l_968[5][5][3] = {{{{0x9288L},{-1L},{0xDC68L}},{{-1L},{0x9288L},{0x9288L}},{{0xDC68L},{0x9288L},{0xD216L}},{{0xCBDAL},{-1L},{1L}},{{0xDC68L},{0xDC68L},{1L}}},{{{-1L},{0xCBDAL},{0xD216L}},{{0x9288L},{0xDC68L},{0x9288L}},{{0x9288L},{-1L},{0xDC68L}},{{0xCBDAL},{0xD216L},{0xD216L}},{{-1L},{0xD216L},{0xDC68L}}},{{{1L},{0xCBDAL},{1L}},{{-1L},{-1L},{1L}},{{0xCBDAL},{1L},{0xDC68L}},{{0xD216L},{-1L},{0xD216L}},{{0xD216L},{0xCBDAL},{-1L}}},{{{0xCBDAL},{0xD216L},{0xD216L}},{{-1L},{0xD216L},{0xDC68L}},{{1L},{0xCBDAL},{1L}},{{-1L},{-1L},{1L}},{{0xCBDAL},{1L},{0xDC68L}}},{{{0xD216L},{-1L},{0xD216L}},{{0xD216L},{0xCBDAL},{-1L}},{{0xCBDAL},{0xD216L},{0xD216L}},{{-1L},{0xD216L},{0xDC68L}},{{1L},{0xCBDAL},{1L}}}};
            unsigned l_1005[1][8] = {{0xF71C0705L,0xD8EA3A35L,0xD8EA3A35L,0xF71C0705L,0xD8EA3A35L,0xD8EA3A35L,0xF71C0705L,0xD8EA3A35L}};
            int l_1010 = 0xC624103BL;
            int l_1013[9][5] = {{0x37FB4052L,0xAFC34005L,2L,(-9L),(-4L)},{0xAFC34005L,0xDD581474L,2L,(-1L),2L},{(-4L),(-4L),0xDD581474L,0x37FB4052L,0x00FCB17AL},{0xAFC34005L,0x00FCB17AL,0x689E0F44L,0x37FB4052L,0x37FB4052L},{0x37FB4052L,0x193C00BCL,0x37FB4052L,(-1L),0x6831F51FL},{0x689E0F44L,0x00FCB17AL,0xAFC34005L,(-9L),0x6831F51FL},{0xDD581474L,(-4L),(-4L),0xDD581474L,0x37FB4052L},{2L,0xDD581474L,0x00FCB17AL,0x689E0F44L,0x37FB4052L},{(-9L),0x00FCB17AL,(-4L),0x00FCB17AL,(-9L)}};
            short l_1050[9];
            int i, j, k;
            for (i = 0; i < 9; i++)
                l_1050[i] = 1L;
            for (l_18 = 0; (l_18 == 17); l_18 = safe_add_func_uint32_t_u_u(l_18, 2))
            {
                char l_874 = 0xE0L;
                unsigned l_894 = 0xD913114EL;
                if (func_27(((~(func_29((g_20[5] == g_20[3])) | g_386.f0)) < (((((safe_rshift_func_int8_t_s_u((g_547.f0 < (p_8.f1 ^ g_112[2])), 4)) && ((l_801 ^ p_8.f1) && g_386.f1)) >= 0xFBL) && g_415) > 0x5EA7L))))
                {
                    short l_873 = (-1L);
                    int l_886 = 0x12AF69F9L;
                    g_875[1] &= (((safe_rshift_func_uint16_t_u_u((l_16[3][4][1] >= func_29(g_415)), (safe_sub_func_int16_t_s_s((l_873 < (0x1A4CA72AL | g_112[2])), g_463)))) && ((((g_187 & p_8.f0) > p_8.f1) || g_468[1][0][4]) || l_874)) >= g_433);
                    l_886 = (safe_mod_func_uint32_t_u_u(0x0DD86A1EL, func_84(p_8.f0, l_878, ((l_873 & l_873) | ((safe_add_func_uint16_t_u_u(((safe_lshift_func_uint16_t_u_u((safe_add_func_uint32_t_u_u(func_50(l_885, p_8, (6UL > g_317), l_12), 0xE189F12AL)), p_8.f1)) < 5UL), g_477)) & p_8.f0)), p_8.f0)));
                }
                else
                {
                    unsigned char l_889 = 0xC8L;
                    int l_900[6][2] = {{0x8E1109CAL,0x8E1109CAL},{1L,0x8E1109CAL},{0x8E1109CAL,1L},{0x8E1109CAL,0x8E1109CAL},{1L,0x8E1109CAL},{0x8E1109CAL,1L}};
                    int i, j;
                    for (g_385.f1 = 0; (g_385.f1 != 5); g_385.f1 = safe_add_func_int16_t_s_s(g_385.f1, 7))
                    {
                        unsigned char l_897[9][8] = {{0UL,0UL,0x2EL,0UL,0x7FL,0x2DL,0xE5L,0xB2L},{0x2DL,0x52L,0UL,0x7FL,0UL,0xB2L,0x23L,0xB2L},{0x52L,0UL,253UL,0UL,0x52L,0x6DL,0x2EL,0xE5L},{253UL,0x6FL,0x11L,0UL,0UL,0x7FL,0xBAL,0UL},{0xBAL,0x2EL,0x11L,0x2AL,0x2AL,0x11L,0x2EL,0xBAL},{0UL,0x2DL,253UL,0xE5L,0UL,0x6FL,0x23L,0x11L},{0x8FL,0UL,0UL,0x6DL,0xE5L,0x6FL,0xE5L,0x6DL},{0x2EL,0x2DL,0x2EL,253UL,0x6FL,0x11L,0UL,0UL},{0x6DL,0x2EL,0xE5L,0x23L,0x8FL,0x7FL,0x6FL,0x6FL}};
                        int i, j;
                        l_889 = 1L;
                        l_900[4][0] = func_27(((p_8.f0 >= ((safe_mod_func_uint16_t_u_u((0xCAL & (safe_mod_func_uint16_t_u_u(l_894, (g_468[1][0][4] && l_12)))), (safe_lshift_func_int8_t_s_u(0x12L, l_897[4][1])))) >= ((safe_mod_func_int8_t_s_s(p_8.f0, ((g_194 ^ p_8.f0) | p_8.f1))) && 0x4CDCL))) >= 0xF3A7L));
                        return g_875[0];
                    }

                                        return l_889;
                }
                if (p_8.f1)
                    break;
            }
            for (g_416 = 0; (g_416 <= 6); g_416 = safe_add_func_int16_t_s_s(g_416, 8))
            {
                short l_909 = 3L;
                int l_932 = 0x54E1A116L;
                int l_933 = 0L;
                int l_934 = 0xC3F8D6F4L;
                int l_935 = 0xC01D367CL;
                unsigned l_943 = 4294967295UL;
                if (l_801)
                {
                    unsigned l_919 = 4294967286UL;
                    l_16[2][1][4] = (safe_rshift_func_uint8_t_u_s(func_50(l_878, p_8, (((((safe_sub_func_uint32_t_u_u(func_42(((safe_sub_func_int8_t_s_s(l_909, (safe_mod_func_uint32_t_u_u((safe_mod_func_uint16_t_u_u((0xEFE5L ^ g_433), (safe_rshift_func_uint16_t_u_s((0xAEFBB02BL && g_154.f0), (safe_lshift_func_uint8_t_u_u(l_918, (0x5261EDBDL || l_878.f0))))))), p_8.f1)))) > l_919), g_495, g_462), p_8.f0)) > l_918) || g_219) | g_112[2]) & 1UL), p_8.f0), p_8.f1));
                    if (((safe_sub_func_uint32_t_u_u(func_59(g_112[2], g_242), (~l_909))) != g_547.f0))
                    {
                        union U0 l_929[10][5][5] = {{{{0L},{-6L},{0xA3C62D02L},{0x89B6FF4DL},{-6L}},{{0x14ED856AL},{0xE51D9B3DL},{0x26DE923EL},{0xBE22C3BBL},{0x3F44565EL}},{{0x353D2BFFL},{0x9BED7005L},{0L},{0x21BC4B9EL},{0x1767971CL}},{{0x1F569027L},{0x353D2BFFL},{-1L},{-1L},{0x353D2BFFL}},{{-1L},{8L},{0x1767971CL},{2L},{0x92F6AFE5L}}},{{{0xC118DE7CL},{0L},{0x21BC4B9EL},{1L},{-6L}},{{-6L},{9L},{0xE51D9B3DL},{0L},{1L}},{{0xC118DE7CL},{2L},{0xEFEAD66DL},{0x156B711CL},{0xF150A325L}},{{-1L},{-7L},{0x89B6FF4DL},{0xF150A325L},{0xE51D9B3DL}},{{0x1F569027L},{-3L},{-8L},{1L},{-1L}}},{{{0x353D2BFFL},{0xABC84E6BL},{-6L},{0x3F44565EL},{-10L}},{{0x14ED856AL},{6L},{8L},{0x23A17EFFL},{9L}},{{0x55D28C5FL},{0xA3C62D02L},{0x98672965L},{0x23A17EFFL},{0xEFEAD66DL}},{{0x89B6FF4DL},{-6L},{0x92F6AFE5L},{0x3F44565EL},{0x98672965L}},{{0x496EC488L},{0xF150A325L},{-1L},{1L},{0L}}},{{{1L},{0L},{2L},{0xF150A325L},{2L}},{{0x23A17EFFL},{0x23A17EFFL},{0x465493E4L},{0x156B711CL},{-1L}},{{-6L},{0x55D28C5FL},{0x23A17EFFL},{0L},{-1L}},{{-10L},{0xA8587CD2L},{-4L},{1L},{7L}},{{0x9BED7005L},{0x55D28C5FL},{0L},{0xEFEAD66DL},{0x1EC39194L}}},{{{0x37081810L},{0xABC84E6BL},{-6L},{0x89B6FF4DL},{2L}},{{0x3F44565EL},{0xE313590EL},{0x98672965L},{-8L},{-1L}},{{0x98672965L},{-1L},{-3L},{-6L},{1L}},{{0L},{0x156B711CL},{0x26DE923EL},{8L},{-10L}},{{-1L},{0x1F569027L},{0xBE22C3BBL},{0x98672965L},{-10L}}},{{{-3L},{-10L},{0x353D2BFFL},{0x92F6AFE5L},{1L}},{{0xEFEAD66DL},{0x92F6AFE5L},{0x21BC4B9EL},{-1L},{-1L}},{{-7L},{-5L},{-6L},{2L},{2L}},{{1L},{0x37081810L},{1L},{0x465493E4L},{0x1EC39194L}},{{0x26DE923EL},{0xEFEAD66DL},{7L},{0x23A17EFFL},{0L}}},{{{-6L},{1L},{0L},{-4L},{0x496EC488L}},{{-4L},{1L},{7L},{0L},{0xB4882D0AL}},{{-1L},{0x9BED7005L},{1L},{0xC449C38AL},{0xEFEAD66DL}},{{9L},{0xF0F23068L},{-6L},{0x37081810L},{0xF150A325L}},{{0xF150A325L},{0x88661345L},{0x21BC4B9EL},{1L},{0xA3C62D02L}}},{{{0x9BED7005L},{-1L},{0x353D2BFFL},{0x3F44565EL},{0xE6371E94L}},{{1L},{7L},{0xBE22C3BBL},{-1L},{1L}},{{1L},{0x59295EFEL},{0x26DE923EL},{0xB4882D0AL},{0L}},{{0x9BED7005L},{0x21BC4B9EL},{-3L},{0L},{0x353D2BFFL}},{{-1L},{0xF0F23068L},{0x23A17EFFL},{0x59295EFEL},{0x88661345L}}},{{{1L},{0x1767971CL},{0x1767971CL},{1L},{0xB4882D0AL}},{{0xE6371E94L},{0x1EC39194L},{-1L},{0L},{0xF150A325L}},{{0x1EC39194L},{-1L},{0x3F44565EL},{1L},{-6L}},{{-5L},{0x353D2BFFL},{0x465493E4L},{0L},{0x496EC488L}},{{0x21BC4B9EL},{-8L},{0xE6371E94L},{1L},{0xE313590EL}}},{{{6L},{0x156B711CL},{-6L},{0x59295EFEL},{1L}},{{0x3F44565EL},{7L},{0xC449C38AL},{0x55D28C5FL},{0x21BC4B9EL}},{{-6L},{0x89B6FF4DL},{0x496EC488L},{1L},{7L}},{{-10L},{0x9BED7005L},{0xABC84E6BL},{1L},{0x26DE923EL}},{{0x88661345L},{0x9BED7005L},{-4L},{0L},{0x59295EFEL}}}};
                        union U2 l_930[2][9] = {{{0x6D96L},{0x7730L},{7L},{0L},{7L},{0x7730L},{0x6D96L},{0x6D96L},{0x7730L}},{{0L},{0x7730L},{-9L},{0x7730L},{0L},{0xE030L},{0xE030L},{0L},{0x7730L}}};
                        int i, j, k;
                        l_19[1][1] = ((safe_add_func_int16_t_s_s(g_463, (safe_lshift_func_int16_t_s_s((safe_unary_minus_func_uint32_t_u(((g_415 <= (((safe_rshift_func_uint16_t_u_u(l_885.f0, (g_272[4] | (p_8.f0 ^ p_8.f1)))) == func_50(l_929[8][4][1], l_930[1][2], (((p_8.f0 == 0x89L) < p_8.f1) & l_885.f0), l_919)) >= 4L)) ^ g_386.f0))), 12)))) > p_8.f0);
                        l_16[3][2][1] &= (((g_187 ^ g_477) && 0xC6L) && (0x124C8775L || 4294967287UL));
                        l_931 &= (((func_27(g_464) ^ ((-7L) ^ l_929[8][4][1].f0)) | g_386.f1) & p_8.f1);
                        ++g_937[4];
                    }
                    else
                    {
                        l_17 = (safe_sub_func_int8_t_s_s(p_8.f0, 0x33L));
                        return l_936;
                    }
                }
                else
                {
                    --l_943;
                }
            }
            if ((p_8.f0 ^ l_801))
            {
                short l_952 = 1L;
                int l_976 = 0x45B4CCAAL;
                int l_1007 = (-5L);
                int l_1008 = 0x6F0772FAL;
                unsigned l_1017 = 0xBB1E4E4EL;
                if (g_385.f1)
                    break;
                if ((l_918 > (0x056DL && p_8.f1)))
                {
                    char l_966[4];
                    int i;
                    for (i = 0; i < 4; i++)
                        l_966[i] = 0x0CL;
                    if (func_59((safe_rshift_func_uint8_t_u_s((4294967292UL > (255UL || g_419)), 3)), ((safe_lshift_func_int16_t_s_u(((g_419 || l_942[1][3]) == (safe_mod_func_int8_t_s_s(g_242, l_952))), 8)) < (safe_sub_func_int32_t_s_s(((p_8.f1 || (safe_lshift_func_uint16_t_u_s(((~p_8.f0) <= 0x021EA275L), 13))) | 255UL), 6L)))))
                    {
                        union U1 l_967[3] = {{1UL},{1UL},{1UL}};
                        int i;
                        g_385.f2 = (func_29(g_6) > ((~(g_468[0][3][0] || (((safe_add_func_int16_t_s_s(p_8.f0, g_468[1][1][2])) ^ (g_468[1][2][7] && l_885.f0)) >= ((safe_add_func_uint8_t_u_u(l_18, g_6)) > l_961)))) > 247UL));

                                                l_16[2][1][0] = (safe_sub_func_int8_t_s_s((l_878.f0 < func_33((safe_mod_func_int32_t_s_s(func_27(l_966[2]), (p_8.f0 && (1L >= (0x26L || 0xA5L))))), l_961, l_967[2], l_968[3][4][1], l_969)), 0x8CL));

                                                l_19[0][4] = (l_878.f0 != func_50(g_154, g_385, p_8.f0, (safe_rshift_func_int16_t_s_u(g_468[0][3][7], 15))));
                        if (l_961)
                            break;
                    }
                    else
                    {
                        unsigned char l_985 = 1UL;
                        int l_992[1];
                        int i;
                        for (i = 0; i < 1; i++)
                            l_992[i] = 0x12307406L;
                        l_976 ^= (safe_add_func_int16_t_s_s(6L, (safe_rshift_func_int8_t_s_u(g_937[4], 3))));
                        l_992[0] |= (safe_add_func_uint8_t_u_u(g_423, (safe_lshift_func_int8_t_s_u(func_59((0x7DL < (safe_mod_func_int32_t_s_s((safe_sub_func_int16_t_s_s(p_8.f0, ((l_985 & (safe_rshift_func_uint8_t_u_s((l_969.f0 <= (((safe_lshift_func_int16_t_s_s((!((safe_mod_func_int16_t_s_s((p_8.f1 != 251UL), g_875[1])) | (p_8.f0 >= p_8.f0))), 5)) & g_468[1][0][4]) & p_8.f1)), g_222))) == 0x3A0DL))), 0xF8DE0666L))), l_976), g_20[6]))));
                    }
                }
                else
                {
                    unsigned l_993 = 0x29EB14DFL;
                    int l_1006 = 0x7C1DC75EL;
                    int l_1011 = 1L;
                    int l_1012 = 0x22B83331L;
                    for (l_969.f0 = 0; (l_969.f0 <= 2); l_969.f0 += 1)
                    {
                        int i, j;
                        if (l_19[(l_969.f0 + 1)][(l_969.f0 + 2)])
                            break;
                        if (p_8.f1)
                            break;
                    }
                    l_993--;
                    for (g_187 = 0; (g_187 <= 4); g_187 += 1)
                    {
                        union U0 l_996 = {0x45F12CACL};
                        int i, j, k;
                        g_462 ^= func_84((2UL > func_84(l_16[(g_187 + 3)][g_187][g_187], l_996, (l_13 <= (safe_rshift_func_uint8_t_u_u(((p_8.f0 == ((safe_rshift_func_uint8_t_u_s(0x8AL, (safe_sub_func_uint8_t_u_u(((func_84((safe_add_func_uint8_t_u_u(l_16[(g_187 + 3)][g_187][g_187], ((!(0xD0F57827L | (g_272[0] || 0x5379L))) != g_112[2]))), l_878, l_918, g_20[2]) == g_420) >= g_463), p_8.f1)))) >= l_993)) == g_497), l_16[2][1][0]))), l_1005[0][6])), l_885, l_13, p_8.f1);
                        l_1014++;
                    }
                    g_154.f0 = (0x46L == (g_462 | l_952));
                }
                if ((0x06772AE3L || ((g_415 | l_918) || l_1017)))
                {
                    return p_8.f1;
                }
                else
                {
                    union U0 l_1030 = {0xA4C3504CL};
                    if (((safe_sub_func_int32_t_s_s(l_1008, p_8.f0)) <= ((g_154.f0 | p_8.f1) == ((safe_rshift_func_int16_t_s_u(0xA0C9L, 7)) != (safe_add_func_int32_t_s_s((safe_rshift_func_uint8_t_u_s((safe_sub_func_int32_t_s_s(l_1007, ((g_219 >= g_230) || (((((safe_unary_minus_func_uint16_t_u((safe_unary_minus_func_int32_t_s((func_84((p_8.f0 >= g_171), l_1030, g_6, l_1010) > g_386.f0))))) ^ g_112[1]) && p_8.f1) >= l_1013[8][1]) != p_8.f1)))), l_918)), p_8.f1))))))
                    {
                        unsigned char l_1035[8] = {0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL};
                        int i;
                        g_462 = ((0x1E74L <= (safe_rshift_func_uint8_t_u_u(p_8.f1, 0))) | (safe_mod_func_uint16_t_u_u(g_386.f0, (((!(g_298 >= p_8.f1)) < func_84(l_969.f1, g_547, g_193, l_1035[3])) | p_8.f1))));
                    }
                    else
                    {
                        g_547.f0 = func_84(l_918, g_154, l_15, l_968[3][4][1].f0);
                        if (l_1030.f0)
                            continue;
                    }
                }
            }
            else
            {
                int l_1041 = 0x4784A90EL;
                int l_1044[3][8][7] = {{{0x858C60E6L,(-8L),0xEDD806FEL,0x596CEAE8L,(-6L),0x942C41B5L,(-6L)},{0x858C60E6L,(-6L),(-6L),0x404AA189L,(-6L),0L,0x596CEAE8L},{0x8F689646L,0L,0x858C60E6L,(-6L),(-6L),0x858C60E6L,0L},{(-6L),0x8F689646L,(-8L),0x10853B5AL,0x21971BD8L,0x596CEAE8L,0x596CEAE8L},{(-8L),0x8F689646L,(-6L),0x8F689646L,(-8L),0x10853B5AL,0x21971BD8L},{0x858C60E6L,0L,0x8F689646L,0x10853B5AL,0xEDD806FEL,0x10853B5AL,0x8F689646L},{0x21971BD8L,0x21971BD8L,0x404AA189L,(-6L),0L,0x596CEAE8L,0x858C60E6L},{0x858C60E6L,0x10853B5AL,0x404AA189L,0x404AA189L,0x10853B5AL,0x858C60E6L,0xEDD806FEL}},{{(-8L),0x404AA189L,0x8F689646L,0xEDD806FEL,0L,0L,0xEDD806FEL},{(-6L),0x942C41B5L,(-6L),0x596CEAE8L,0xEDD806FEL,(-8L),0x858C60E6L},{0x8F689646L,0x404AA189L,(-8L),0x596CEAE8L,(-8L),0x404AA189L,0x8F689646L},{0x404AA189L,0x10853B5AL,0x858C60E6L,0xEDD806FEL,0x21971BD8L,(-8L),0x21971BD8L},{0x404AA189L,0x21971BD8L,0x21971BD8L,0x404AA189L,(-6L),0L,0x596CEAE8L},{0x8F689646L,0L,0x858C60E6L,(-6L),(-6L),0x858C60E6L,0L},{(-6L),0x8F689646L,(-8L),0x10853B5AL,0x21971BD8L,0x596CEAE8L,0x596CEAE8L},{0xEDD806FEL,0x21971BD8L,(-8L),0x21971BD8L,0xEDD806FEL,0x858C60E6L,0x10853B5AL}},{{0L,0x942C41B5L,0x21971BD8L,0x858C60E6L,0x8F689646L,0x858C60E6L,0x21971BD8L},{0x10853B5AL,0x10853B5AL,(-6L),(-8L),0x942C41B5L,0x404AA189L,0L},{0L,0x858C60E6L,(-6L),(-6L),0x858C60E6L,0L,0x8F689646L},{0xEDD806FEL,(-6L),0x21971BD8L,0x8F689646L,0x942C41B5L,0x942C41B5L,0x8F689646L},{(-8L),0x596CEAE8L,(-8L),0x404AA189L,0x8F689646L,0xEDD806FEL,0L},{0x21971BD8L,(-6L),0xEDD806FEL,0x404AA189L,0xEDD806FEL,(-6L),0x21971BD8L},{(-6L),0x858C60E6L,0L,0x8F689646L,0x10853B5AL,0xEDD806FEL,0x10853B5AL},{(-6L),0x10853B5AL,0x10853B5AL,(-6L),(-8L),0x942C41B5L,0x404AA189L}}};
                unsigned short l_1051 = 0xACB2L;
                int i, j, k;
                for (g_477 = 0; (g_477 <= 0); g_477 += 1)
                {
                    int i, j;
                    g_462 &= (-1L);
                    if ((safe_unary_minus_func_int16_t_s((safe_add_func_uint8_t_u_u(l_1005[g_477][(g_477 + 6)], (safe_sub_func_int16_t_s_s((0xEB553DB0L <= (g_20[(g_477 + 2)] >= (+((l_1041 ^ (g_477 != (p_8.f1 < (safe_add_func_int8_t_s_s(g_242, g_91.f0))))) >= l_1013[8][4])))), g_937[3])))))))
                    {
                        unsigned l_1045 = 0xF9B591ECL;
                        --l_1045;
                        if (l_1005[g_477][(g_477 + 6)])
                            continue;
                        l_19[1][1] = (safe_rshift_func_uint8_t_u_s(l_1050[6], (p_8.f0 != (l_1051 > 1UL))));
                    }
                    else
                    {
                        int l_1052[7][5][4] = {{{0xF8A36BE2L,0L,0x7B91C4F0L,0x346D83CCL},{1L,0xDDEE4F04L,1L,1L},{0xF8A36BE2L,0x409E0B4EL,1L,0L},{1L,0L,0x7B91C4F0L,0x409E0B4EL},{0xF8A36BE2L,1L,0x7B91C4F0L,0xDDEE4F04L}},{{1L,0x346D83CCL,1L,0L},{0xF8A36BE2L,0x41C76A59L,1L,0x942EC182L},{1L,0x942EC182L,0x7B91C4F0L,0x41C76A59L},{0xF8A36BE2L,0L,0x7B91C4F0L,0x346D83CCL},{1L,0xDDEE4F04L,1L,1L}},{{0xF8A36BE2L,0x409E0B4EL,1L,0L},{1L,0L,0x7B91C4F0L,0x409E0B4EL},{0xF8A36BE2L,1L,0x7B91C4F0L,0xDDEE4F04L},{1L,0x346D83CCL,1L,0L},{0xF8A36BE2L,0x41C76A59L,1L,0x942EC182L}},{{1L,0x942EC182L,0x7B91C4F0L,0x41C76A59L},{0xF8A36BE2L,0L,0x7B91C4F0L,0x346D83CCL},{1L,0xDDEE4F04L,1L,1L},{0xF8A36BE2L,0x409E0B4EL,1L,0L},{1L,0L,0x7B91C4F0L,0x409E0B4EL}},{{0xF8A36BE2L,1L,0x7B91C4F0L,0xDDEE4F04L},{1L,0x346D83CCL,1L,0L},{0xF8A36BE2L,0x41C76A59L,1L,0x942EC182L},{1L,0x942EC182L,0x7B91C4F0L,0x41C76A59L},{0xF8A36BE2L,0L,0x7B91C4F0L,0x346D83CCL}},{{1L,0xDDEE4F04L,1L,1L},{0xF8A36BE2L,0x409E0B4EL,1L,0L},{1L,0L,0x7B91C4F0L,0x409E0B4EL},{0xF8A36BE2L,1L,0x7B91C4F0L,0xDDEE4F04L},{1L,0x346D83CCL,1L,0L}},{{0xF8A36BE2L,0x41C76A59L,1L,0x942EC182L},{1L,0x942EC182L,0x7B91C4F0L,0x41C76A59L},{0xF8A36BE2L,0L,0x7B91C4F0L,0x346D83CCL},{1L,0xDDEE4F04L,1L,1L},{0xF8A36BE2L,0x409E0B4EL,1L,0L}}};
                        int i, j, k;
                        l_1052[0][4][1] ^= g_20[(g_477 + 2)];
                        g_154.f0 = ((-1L) < p_8.f0);
                    }
                }
                if (g_272[9])
                    continue;
            }
        }
    }
    for (g_547.f0 = (-10); (g_547.f0 <= (-29)); --g_547.f0)
    {
        unsigned char l_1056 = 251UL;
        int l_1063 = 0xF1F77F58L;
        int l_1064 = (-1L);
        int l_1065[5][7] = {{0xB21A42F4L,5L,1L,1L,5L,0xB21A42F4L,0x590A35EDL},{0x0E224F23L,0x4426FAC4L,(-1L),0x0E224F23L,5L,0xA6B08FA5L,0x4426FAC4L},{(-1L),0x4BEFC206L,0xB21A42F4L,0x170CEF39L,0xB21A42F4L,0x4BEFC206L,(-1L)},{0x4BEFC206L,0x4426FAC4L,1L,0xB21A42F4L,(-1L),0x4BEFC206L,0xB21A42F4L},{0x0E224F23L,5L,0xA6B08FA5L,0x4426FAC4L,0x4426FAC4L,0xA6B08FA5L,5L}};
        unsigned l_1092 = 0x0716CA97L;
        int i, j;
        if (p_8.f0)
        {
            l_15 ^= ((((-1L) < g_385.f0) ^ p_8.f1) < p_8.f0);
        }
        else
        {
            int l_1055 = 0x7A2A7FACL;
            l_1056++;
            l_1055 |= ((safe_lshift_func_uint8_t_u_s(253UL, 5)) || 0xC18B46C1L);
        }
        for (g_154.f0 = 0; (g_154.f0 >= 27); g_154.f0++)
        {
            unsigned l_1066 = 1UL;
            g_464 = g_465;
            --l_1066;
        }
        for (g_298 = 3; (g_298 >= 0); g_298 -= 1)
        {
            int l_1079 = 3L;
            short l_1082 = 1L;
            int l_1091 = (-1L);
            union U0 l_1117 = {0L};
            for (g_416 = 0; (g_416 <= 3); g_416 += 1)
            {
                unsigned l_1078[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_1078[i] = 0UL;
                for (g_419 = 0; (g_419 <= 2); g_419 += 1)
                {
                    char l_1095 = 0x39L;
                    int i, j;
                    l_1065[g_416][(g_419 + 3)] = ((safe_add_func_int16_t_s_s(func_84((safe_sub_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s(((safe_lshift_func_uint16_t_u_u(l_19[g_298][(g_298 + 1)], (l_1065[(g_419 + 2)][(g_416 + 1)] == func_84(p_8.f1, l_1077, l_1078[0], l_1079)))) | p_8.f1), 1)), (safe_rshift_func_int8_t_s_u((p_8.f0 > (-8L)), p_8.f1)))), l_1077, l_1082, l_19[2][6]), l_1078[0])) >= 0x75L);
                    l_19[g_416][(g_298 + 2)] = ((0L | l_1082) <= (p_8.f0 & (safe_lshift_func_uint16_t_u_u(l_1082, (safe_sub_func_uint32_t_u_u((safe_sub_func_int32_t_s_s((g_385.f0 == l_1089[2][1]), g_185[0])), p_8.f1))))));
                    l_1092--;
                    l_1095 ^= (l_969.f1 < p_8.f1);
                }
                if (((safe_rshift_func_int16_t_s_s((safe_add_func_int32_t_s_s((safe_mod_func_uint8_t_u_u(p_8.f0, (safe_mod_func_int8_t_s_s(((safe_rshift_func_int8_t_s_u((safe_sub_func_uint16_t_u_u(l_1078[0], ((safe_lshift_func_uint16_t_u_u(func_84((safe_mod_func_uint32_t_u_u((g_385.f1 >= func_84(((safe_mod_func_uint16_t_u_u(g_423, func_84((safe_lshift_func_int8_t_s_u((l_1065[0][3] >= (+(l_1077.f0 <= g_1116))), 4)), l_1077, g_420, g_6))) && p_8.f0), l_1117, l_1065[2][1], l_15)), p_8.f1)), l_1118, p_8.f1, g_185[0]), 14)) < l_1064))), l_1117.f0)) >= g_415), p_8.f0)))), g_272[0])), l_1063)) ^ g_112[2]))
                {
                    p_8.f2 = l_1079;

                                        if (l_1078[0])
                        break;
                }
                else
                {
                    int l_1127[8] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
                    int l_1128 = 0xF1CE3FDDL;
                    int i;
                    g_464 = (safe_add_func_uint16_t_u_u((g_468[1][0][4] == (p_8.f1 == l_1078[0])), (0x62L | (0x0544L & ((p_8.f0 <= (safe_lshift_func_int16_t_s_s((g_497 && 0x59A4L), 4))) | p_8.f1)))));
                    for (l_1092 = 0; (l_1092 <= 2); l_1092 += 1)
                    {
                        if (g_168)
                            goto lbl_1123;
                    }
                    for (l_1082 = 0; (l_1082 <= 2); l_1082 += 1)
                    {
                        unsigned l_1129[10][9][2] = {{{4294967290UL,5UL},{0UL,0UL},{1UL,0xC5B76704L},{0xA1E47385L,0x3CE58422L},{0xCFD7AC94L,0xAE2F0D6EL},{0x01B82497L,4294967295UL},{0x3CE58422L,1UL},{0xBCF0CE0BL,0x3099D70EL},{0x960C5C86L,0x3099D70EL}},{{0xBCF0CE0BL,1UL},{0x3CE58422L,4294967295UL},{0x01B82497L,0xAE2F0D6EL},{0xCFD7AC94L,0x3CE58422L},{0xA1E47385L,0xC5B76704L},{1UL,0UL},{0UL,5UL},{4294967290UL,1UL},{4294967286UL,4294967287UL}},{{0xC5B76704L,7UL},{0x0863C221L,4294967295UL},{0x780CFDBFL,0xD9F4818EL},{0UL,0x83C80308L},{4294967295UL,4294967287UL},{0x2799ADE3L,0xC8E2BFE0L},{0UL,0UL},{5UL,0x61EC93B0L},{3UL,6UL}},{{0UL,1UL},{2UL,0UL},{0xD9F4818EL,0xA1E47385L},{0xD9F4818EL,0UL},{2UL,1UL},{0UL,6UL},{3UL,0x61EC93B0L},{5UL,0UL},{0UL,0xC8E2BFE0L}},{{0x2799ADE3L,4294967287UL},{4294967295UL,0x83C80308L},{0UL,0xD9F4818EL},{0x780CFDBFL,0xAE2F0D6EL},{0xBCF0CE0BL,4UL},{4294967291UL,5UL},{0x3CE58422L,2UL},{4294967295UL,0UL},{4294967289UL,0x0863C221L}},{{0x4B755FB2L,4294967291UL},{6UL,1UL},{0xA1E47385L,3UL},{0xC8E2BFE0L,0x989E485EL},{1UL,4294967286UL},{4294967293UL,1UL},{0x01B82497L,1UL},{4294967293UL,4294967286UL},{1UL,0x989E485EL}},{{0xC8E2BFE0L,3UL},{0xA1E47385L,1UL},{6UL,4294967291UL},{0x4B755FB2L,0x0863C221L},{4294967289UL,0UL},{4294967295UL,2UL},{0x3CE58422L,5UL},{4294967291UL,4UL},{0xBCF0CE0BL,0xAE2F0D6EL}},{{0x780CFDBFL,0xD9F4818EL},{0UL,0x83C80308L},{4294967295UL,4294967287UL},{0x2799ADE3L,0xC8E2BFE0L},{0UL,0UL},{0x3099D70EL,0xB4C52DB7L},{0x2799ADE3L,4294967290UL},{1UL,0xCFD7AC94L},{0x01B82497L,1UL}},{{0UL,4294967288UL},{0UL,1UL},{0x01B82497L,0xCFD7AC94L},{1UL,4294967290UL},{0x2799ADE3L,0xB4C52DB7L},{0x3099D70EL,0UL},{0UL,3UL},{0UL,0xC8E2BFE0L},{0xD9F4818EL,4294967295UL}},{{1UL,0UL},{0x0D4C080FL,0UL},{4294967287UL,0x3CE58422L},{4294967293UL,0x3099D70EL},{6UL,0x01B82497L},{4UL,1UL},{0x4B755FB2L,2UL},{3UL,4294967293UL},{4294967290UL,0x960C5C86L}}};
                        union U0 l_1138 = {1L};
                        int i, j, k;
                        g_462 = (((safe_sub_func_int8_t_s_s(l_1090, g_193)) & l_14) != p_8.f1);
                        if (g_1126)
                            break;
                        --l_1129[5][8][1];
                        p_8.f2 = ((safe_add_func_int16_t_s_s((safe_lshift_func_int8_t_s_s(l_1089[6][5], (safe_lshift_func_uint8_t_u_s(func_84(g_272[0], l_1138, (((g_937[4] && l_18) <= (((safe_lshift_func_int8_t_s_u((~(safe_rshift_func_int8_t_s_s(l_1082, 5))), (((p_8.f1 | ((safe_mod_func_int8_t_s_s(0x2FL, 0xF2L)) < g_193)) ^ p_8.f0) < p_8.f1))) & g_547.f0) <= 255UL)) == 0xB379CEAEL), g_112[2]), 2)))), p_8.f1)) > l_1082);

                                            }
                }
                if (l_1118.f0)
                    break;
                l_1063 &= (safe_add_func_int8_t_s_s(p_8.f1, l_1056));
            }
        }
    }
    for (p_8.f0 = (-21); (p_8.f0 >= (-30)); p_8.f0 = safe_sub_func_int32_t_s_s(p_8.f0, 7))
    {
        int l_1149 = 0xD6E0A545L;
        unsigned char l_1180 = 0UL;
        int l_1185 = 0xFAA47912L;
        unsigned char l_1219[9];
        unsigned char l_1230 = 1UL;
        unsigned short l_1234 = 0xFDF2L;
        int i;
        for (i = 0; i < 9; i++)
            l_1219[i] = 0x60L;
    }
    return p_8.f1;
}







static int func_27(short p_28)
{
    int l_802 = 0xC1E7974EL;
    int l_803 = 0x389F6E58L;
    int l_804 = 1L;
    int l_805 = (-9L);
    int l_806 = 0x0AC199CFL;
    unsigned l_807 = 4294967293UL;
lbl_840:
    l_807--;
    for (g_298 = 0; (g_298 == 17); g_298 = safe_add_func_int8_t_s_s(g_298, 1))
    {
        short l_814 = 0L;
        int l_815 = 0L;
        int l_816[9][7][3] = {{{1L,0x30B112E5L,1L},{0x30B112E5L,1L,1L},{0x402BC621L,1L,(-3L)},{(-7L),0x30B112E5L,4L},{0x402BC621L,0x402BC621L,4L},{0x30B112E5L,(-7L),(-3L)},{1L,0x402BC621L,1L}},{{1L,0x30B112E5L,1L},{0x30B112E5L,1L,1L},{0x402BC621L,1L,(-3L)},{(-7L),0x30B112E5L,4L},{0x402BC621L,0x402BC621L,4L},{0x30B112E5L,(-7L),(-3L)},{1L,0x402BC621L,1L}},{{1L,0x30B112E5L,1L},{0x30B112E5L,1L,1L},{0x402BC621L,1L,(-3L)},{1L,0xA1CED9C9L,(-3L)},{0x9DB2676DL,0x9DB2676DL,(-3L)},{0xA1CED9C9L,1L,(-1L)},{0x30B112E5L,0x9DB2676DL,0x4C60AB53L}},{{0x30B112E5L,0xA1CED9C9L,4L},{0xA1CED9C9L,0x30B112E5L,0x4C60AB53L},{0x9DB2676DL,0x30B112E5L,(-1L)},{1L,0xA1CED9C9L,(-3L)},{0x9DB2676DL,0x9DB2676DL,(-3L)},{0xA1CED9C9L,1L,(-1L)},{0x30B112E5L,0x9DB2676DL,0x4C60AB53L}},{{0x30B112E5L,0xA1CED9C9L,4L},{0xA1CED9C9L,0x30B112E5L,0x4C60AB53L},{0x9DB2676DL,0x30B112E5L,(-1L)},{1L,0xA1CED9C9L,(-3L)},{0x9DB2676DL,0x9DB2676DL,(-3L)},{0xA1CED9C9L,1L,(-1L)},{0x30B112E5L,0x9DB2676DL,0x4C60AB53L}},{{0x30B112E5L,0xA1CED9C9L,4L},{0xA1CED9C9L,0x30B112E5L,0x4C60AB53L},{0x9DB2676DL,0x30B112E5L,(-1L)},{1L,0xA1CED9C9L,(-3L)},{0x9DB2676DL,0x9DB2676DL,(-3L)},{0xA1CED9C9L,1L,(-1L)},{0x30B112E5L,0x9DB2676DL,0x4C60AB53L}},{{0x30B112E5L,0xA1CED9C9L,4L},{0xA1CED9C9L,0x30B112E5L,0x4C60AB53L},{0x9DB2676DL,0x30B112E5L,(-1L)},{1L,0xA1CED9C9L,(-3L)},{0x9DB2676DL,0x9DB2676DL,(-3L)},{0xA1CED9C9L,1L,(-1L)},{0x30B112E5L,0x9DB2676DL,(-7L)}},{{0xAB81E349L,0x6D1A1701L,0xA1CED9C9L},{0x6D1A1701L,0xAB81E349L,(-7L)},{0x12C6634BL,0xAB81E349L,0x9DB2676DL},{2L,0x6D1A1701L,0x402BC621L},{0x12C6634BL,0x12C6634BL,0x402BC621L},{0x6D1A1701L,2L,0x9DB2676DL},{0xAB81E349L,0x12C6634BL,(-7L)}},{{0xAB81E349L,0x6D1A1701L,0xA1CED9C9L},{0x6D1A1701L,0xAB81E349L,(-7L)},{0x12C6634BL,0xAB81E349L,0x9DB2676DL},{2L,0x6D1A1701L,0x402BC621L},{0x12C6634BL,0x12C6634BL,0x402BC621L},{0x6D1A1701L,2L,0x9DB2676DL},{0xAB81E349L,0x12C6634BL,(-7L)}}};
        int i, j, k;
        if (g_477)
        {
            unsigned short l_817 = 0x5AFCL;
            int l_836 = (-7L);
            for (g_463 = (-23); (g_463 > (-29)); g_463--)
            {
                l_814 |= 2L;
            }
            if (g_386.f0)
            {
                l_817++;
                return l_805;
            }
            else
            {
                unsigned l_824 = 4UL;
                unsigned l_837 = 0x090AD4A5L;
                for (l_804 = (-22); (l_804 < (-2)); l_804++)
                {
                    char l_835 = 6L;
                    union U0 l_850 = {0x534A1D47L};
                    if ((safe_sub_func_uint32_t_u_u((l_824 > g_222), (((p_28 <= (g_386.f1 || (safe_sub_func_int16_t_s_s((safe_mod_func_uint8_t_u_u((0x182B8907L || (p_28 >= (0xE5L && (safe_lshift_func_uint8_t_u_u(g_433, (safe_rshift_func_uint8_t_u_s(((func_84((safe_lshift_func_int8_t_s_u(l_824, 1)), g_547, l_816[6][2][2], g_193) > g_477) != p_28), 7))))))), g_168)), 9L)))) == l_835) && 6L))))
                    {
                        unsigned l_841[5][3][9] = {{{1UL,0x59440F66L,0x36E9F518L,1UL,0x7E6C2940L,1UL,0x36E9F518L,0x59440F66L,1UL},{1UL,6UL,4294967287UL,6UL,1UL,1UL,6UL,4294967287UL,6UL},{0x36E9F518L,1UL,0x22008313L,9UL,0x7E6C2940L,0x59440F66L,0x7E6C2940L,9UL,0x22008313L}},{{1UL,1UL,6UL,4294967287UL,6UL,1UL,1UL,6UL,4294967287UL},{1UL,1UL,1UL,0x59440F66L,0x36E9F518L,1UL,0x7E6C2940L,1UL,0x36E9F518L},{0x72E4BB36L,6UL,6UL,0x72E4BB36L,0xD1A43039L,0x72E4BB36L,6UL,6UL,0xD1A43039L}},{{1UL,9UL,4294967295UL,9UL,1UL,1UL,0x22008313L,0x4AF6A01CL,0x22008313L},{4294967287UL,6UL,1UL,1UL,6UL,4294967287UL,6UL,1UL,1UL},{1UL,1UL,0x22008313L,0x4AF6A01CL,0x22008313L,1UL,1UL,9UL,4294967295UL}},{{0xD1A43039L,6UL,0xD1A43039L,4294967287UL,4294967287UL,0xD1A43039L,6UL,0xD1A43039L,4294967287UL},{0x7E6C2940L,9UL,0x22008313L,1UL,0x36E9F518L,1UL,0x22008313L,9UL,0x7E6C2940L},{0x72E4BB36L,4294967287UL,1UL,4294967287UL,0x72E4BB36L,0x72E4BB36L,4294967287UL,1UL,4294967287UL}},{{0x22008313L,0x59440F66L,4294967295UL,0x4AF6A01CL,0x36E9F518L,9UL,0x36E9F518L,0x4AF6A01CL,4294967295UL},{0x72E4BB36L,0x72E4BB36L,4294967287UL,1UL,4294967287UL,0x72E4BB36L,0x72E4BB36L,4294967287UL,1UL},{0x7E6C2940L,0x59440F66L,0x7E6C2940L,9UL,0x22008313L,1UL,0x36E9F518L,1UL,0x22008313L}}};
                        int i, j, k;
                        if (l_803)
                            break;
                        --l_837;
                        if (g_477)
                            goto lbl_840;
                        l_841[4][0][5]--;
                    }
                    else
                    {
                        if (g_465)
                            break;
                        l_803 = ((((254UL | (safe_sub_func_int16_t_s_s((safe_mod_func_uint16_t_u_u((l_814 && ((safe_lshift_func_uint8_t_u_u(func_84(l_836, l_850, (g_272[0] == (p_28 >= (((0x5BL < (safe_sub_func_int8_t_s_s(g_298, (safe_sub_func_uint32_t_u_u(((~((((safe_mod_func_uint8_t_u_u(p_28, 1L)) > l_814) == p_28) >= p_28)) & g_477), l_816[5][6][1]))))) > (-3L)) || p_28))), l_817), 6)) && 0xF8D06FC7L)), l_835)), p_28))) || 0x92FEEC02L) ^ p_28) >= l_850.f0);
                    }
                    if (p_28)
                    {
                        if (l_805)
                            break;
                    }
                    else
                    {
                        int l_857[7] = {1L,1L,0xAB9A3111L,1L,1L,0xAB9A3111L,1L};
                        int i;
                        if (l_835)
                            goto lbl_840;
                        g_154.f0 = ((func_84(l_817, g_91, p_28, p_28) != (g_185[0] ^ l_835)) > p_28);
                        l_857[4] = g_194;
                    }
                }
                l_836 = (safe_add_func_int16_t_s_s((safe_lshift_func_int16_t_s_s(g_317, 10)), (safe_rshift_func_uint8_t_u_s(l_836, 5))));
                if (g_463)
                    goto lbl_840;
            }
            if (l_814)
                break;
            g_464 &= (func_84(p_28, g_154, g_242, g_477) || p_28);
        }
        else
        {
            short l_864 = 0x1D38L;
            int l_865 = 9L;
            g_866++;
        }
        g_187 = g_433;
    }
    return g_91.f0;
}







static int func_29(int p_30)
{
    unsigned l_39 = 4294967295UL;
    union U2 l_56 = {0x75DFL};
    char l_66 = 3L;
    union U1 l_387[8] = {{4294967295UL},{0x53BEDF84L},{0x53BEDF84L},{4294967295UL},{0x53BEDF84L},{0x53BEDF84L},{0x53BEDF84L},{0x2694E0C8L}};
    int l_600 = 0x4C5A0F89L;
    union U0 l_634 = {-5L};
    char l_638[8] = {0x6BL,0x6BL,(-1L),0x6BL,0x6BL,(-1L),0x6BL,0x6BL};
    unsigned short l_753[9][4] = {{0xA302L,0xFFA1L,0xA302L,0xD2C8L},{0xD598L,0xFFA1L,0xEAA5L,0xFFA1L},{0xD598L,0xD2C8L,0xA302L,0xFFA1L},{0xA302L,0xFFA1L,0xA302L,0xD2C8L},{0xD598L,0xFFA1L,0xEAA5L,0xFFA1L},{0xD598L,0xD2C8L,0xA302L,0xFFA1L},{0xA302L,0xFFA1L,0xA302L,0xD2C8L},{0xD598L,0xFFA1L,0xEAA5L,0xFFA1L},{0xD598L,0xD2C8L,0xA302L,0xFFA1L}};
    int i, j;
    for (p_30 = 0; (p_30 <= 7); p_30++)
    {
        union U0 l_55 = {0x89B05F67L};
        int l_591 = 3L;
        union U2 l_598[9][4][3] = {{{{-9L},{5L},{0x5AC3L}},{{1L},{1L},{-1L}},{{0xED86L},{0xC083L},{0xED86L}},{{6L},{0x34BCL},{0xC083L}}},{{{0x34BCL},{0xED86L},{0xAE2CL}},{{1L},{0x0D80L},{0xF10EL}},{{1L},{0x5655L},{0x1210L}},{{1L},{0xB506L},{0x3E97L}}},{{{0x34BCL},{1L},{0xFE71L}},{{6L},{0xAA01L},{0xD7C5L}},{{0xED86L},{0x3650L},{0xC083L}},{{1L},{6L},{3L}}},{{{-9L},{3L},{-1L}},{{1L},{0xA5AAL},{1L}},{{0xB506L},{1L},{1L}},{{0x3650L},{1L},{-1L}}},{{{0xD7C5L},{0L},{2L}},{{1L},{-1L},{0x7B8DL}},{{9L},{0x34BCL},{0x34BCL}},{{0x3E97L},{0x5655L},{1L}}},{{{0xD7C5L},{0xFD49L},{6L}},{{1L},{0x1210L},{-1L}},{{-1L},{3L},{0xF67FL}},{{0x5655L},{0x1210L},{1L}}},{{{0x3650L},{0xFD49L},{0x7B8DL}},{{2L},{0x5655L},{0xA5AAL}},{{-1L},{0x34BCL},{-1L}},{{0xD7C5L},{-1L},{0L}}},{{{0x7B8DL},{0x3E97L},{1L}},{{0xFD49L},{3L},{4L}},{{2L},{0xA7B4L},{0L}},{{2L},{2L},{0x7B8DL}}},{{{0xFD49L},{2L},{0x3650L}},{{0x7B8DL},{0L},{0x5B03L}},{{0xD7C5L},{0xB021L},{0xFE71L}},{{-1L},{-1L},{0xF10EL}}}};
        int l_599 = 1L;
        union U0 l_635 = {0xD3611F65L};
        union U1 l_645 = {0x87F48963L};
        int l_672 = 1L;
        unsigned short l_689 = 65531UL;
        int i, j, k;
    }
    for (g_416 = 3; (g_416 == (-16)); g_416--)
    {
        char l_732 = 0xEAL;
        int l_770[7][4] = {{(-1L),(-7L),1L,1L},{1L,1L,6L,(-7L)},{(-7L),(-1L),6L,(-1L)},{1L,0x744671DEL,1L,6L},{(-1L),0x744671DEL,0x744671DEL,(-1L)},{0x744671DEL,(-1L),1L,(-7L)},{0x744671DEL,1L,0x744671DEL,1L}};
        union U2 l_773 = {6L};
        unsigned short l_790 = 0x21F1L;
        int i, j;
        for (l_56.f2 = 0; (l_56.f2 != (-5)); --l_56.f2)
        {
            unsigned l_712 = 0x2C4EE121L;
            int l_722 = 0x80699FC6L;
            union U0 l_750 = {8L};
            unsigned l_783 = 0x395457C9L;
            if ((safe_lshift_func_int8_t_s_u(g_300, (safe_unary_minus_func_int32_t_s((!p_30))))))
            {
                unsigned short l_720 = 0xFAF8L;
                int l_726 = 0L;
                int l_739 = 0x5BBB1E7CL;
                char l_749 = 0L;
                for (g_462 = 0; g_462 < 10; g_462 += 1)
                {
                    g_272[g_462] = 0xD49CL;
                }
                if (p_30)
                {
                    unsigned char l_717 = 0xDEL;
                    if (g_386.f1)
                    {
                        short l_721[6][1][10] = {{{0xBD14L,0xBD14L,0x63FBL,0xBD14L,0xBD14L,0x63FBL,0xBD14L,0xBD14L,0x63FBL,8L}},{{8L,0x63FBL,0x63FBL,8L,0x63FBL,0x63FBL,8L,0x63FBL,0x63FBL,8L}},{{0x63FBL,8L,0x63FBL,0x63FBL,8L,0x63FBL,0x63FBL,8L,0x63FBL,0x63FBL}},{{8L,8L,0xBD14L,8L,8L,0xBD14L,8L,8L,0xBD14L,8L}},{{8L,0x63FBL,0x63FBL,8L,0x63FBL,0x63FBL,8L,0x63FBL,0x63FBL,8L}},{{0x63FBL,8L,0x63FBL,0x63FBL,8L,0x63FBL,0x63FBL,8L,0x63FBL,0x63FBL}}};
                        int i, j, k;
                        l_722 &= (safe_mod_func_uint32_t_u_u(p_30, ((p_30 >= (func_59(l_634.f0, (g_419 <= (safe_mod_func_uint32_t_u_u(l_712, (safe_sub_func_uint32_t_u_u((safe_rshift_func_int8_t_s_s(g_194, 1)), l_717)))))) <= ((safe_lshift_func_int16_t_s_u(l_720, 4)) && l_721[3][0][8]))) & g_495)));
                    }
                    else
                    {
                        unsigned short l_723 = 1UL;
                        --l_723;
                        return p_30;
                    }
                    return p_30;
                }
                else
                {
                    unsigned l_727 = 0x6C857163L;
                    ++l_727;
                    p_30 = g_222;
                    p_30 &= g_415;
                }
                for (g_477 = (-21); (g_477 < 30); ++g_477)
                {
                    union U0 l_742 = {0x481B34DDL};
                    union U2 l_748 = {0xFAA4L};
                    int l_754 = 0xE6B3A94DL;
                    if (l_732)
                        break;
                    if ((safe_sub_func_uint8_t_u_u(((safe_rshift_func_int8_t_s_u(p_30, ((0x49L <= g_465) == ((-1L) != 9L)))) ^ 0L), (safe_add_func_int16_t_s_s(g_317, 1L)))))
                    {
                        union U0 l_743 = {0xFB20BF13L};
                        g_462 = func_42(g_298, l_739, g_468[1][0][4]);
                        l_722 = g_547.f0;
                        g_495 |= (safe_add_func_uint16_t_u_u((func_50(l_742, g_385, ((func_84(g_187, g_547, (g_219 >= func_84(l_726, l_743, l_638[4], g_168)), p_30) ^ p_30) <= 0x9846L), p_30) && l_712), l_726));
                    }
                    else
                    {
                        p_30 = 0x15FF7BC8L;
                    }
                    for (l_742.f0 = 2; (l_742.f0 < (-4)); --l_742.f0)
                    {
                        l_754 = (p_30 ^ (safe_mod_func_uint8_t_u_u(((func_50(g_154, l_748, func_84(l_749, l_750, p_30, (safe_sub_func_int16_t_s_s(p_30, l_750.f0))), p_30) > p_30) & l_753[8][0]), 0x8BL)));
                        if (p_30)
                            break;
                        l_770[5][1] &= ((((safe_mod_func_int16_t_s_s(0x7CFDL, (((((safe_unary_minus_func_uint8_t_u(248UL)) ^ (((safe_rshift_func_uint8_t_u_s(l_722, (+0L))) | ((g_219 & p_30) | (safe_sub_func_uint32_t_u_u(g_272[3], (safe_add_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u((safe_sub_func_uint8_t_u_u(p_30, ((p_30 >= l_712) && 0x8DBDL))), 10)), l_732)))))) == l_726)) && p_30) | 1UL) ^ g_300))) >= p_30) != (-8L)) & 0x6A0DL);
                    }
                }
                g_495 &= (safe_sub_func_int8_t_s_s(func_50(g_154, l_773, ((g_20[4] && (p_30 ^ l_722)) && l_722), ((l_770[5][1] | (-1L)) || (p_30 || 0UL))), (-2L)));
            }
            else
            {
                int l_788 = 0x857D3DA4L;
                int l_789 = 0x9F867AF0L;
                l_722 = 0xF824AF10L;
                for (l_750.f0 = 0; (l_750.f0 <= 3); l_750.f0 += 1)
                {
                    int i, j;
                    if ((!l_753[l_750.f0][l_750.f0]))
                    {
                        int i, j;
                        l_634.f0 ^= (safe_rshift_func_int16_t_s_u((9L ^ (l_753[l_750.f0][l_750.f0] && g_20[(l_750.f0 + 1)])), ((safe_sub_func_uint16_t_u_u((0x6CBE910AL != ((safe_add_func_int32_t_s_s((safe_unary_minus_func_int8_t_s(g_20[(l_750.f0 + 3)])), (g_20[(l_750.f0 + 2)] == (((0x35L | g_386.f1) && l_783) <= p_30)))) < l_712)), l_722)) != 0UL)));
                    }
                    else
                    {
                        return p_30;
                    }
                    l_788 = (safe_mod_func_uint32_t_u_u(((safe_sub_func_int32_t_s_s((-9L), ((p_30 == p_30) > l_600))) != ((0xB93E3C53L <= 4294967293UL) && l_387[0].f0)), p_30));
                    for (g_423 = 0; (g_423 <= 0); g_423 += 1)
                    {
                        int i;
                        g_495 = g_185[g_423];
                        p_30 = func_59(g_185[g_423], func_42(l_783, func_59(g_187, l_750.f0), g_112[0]));
                        p_30 = p_30;
                    }
                }
                --l_790;
            }
            for (g_300 = 0; g_300 < 7; g_300 += 1)
            {
                for (g_419 = 0; g_419 < 4; g_419 += 1)
                {
                    l_770[g_300][g_419] = 2L;
                }
            }
        }

                l_600 = 0xDE922166L;
        g_464 = (safe_sub_func_int8_t_s_s(func_42(g_385.f0, l_773.f1, (safe_add_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s(g_272[0], 1)), 65532UL))), g_112[2]));
    }
    g_462 = p_30;
    p_30 = p_30;
    return g_468[1][0][4];
}







static int func_33(short p_34, unsigned short p_35, union U1 p_36, union U2 p_37, union U1 p_38)
{
    unsigned char l_388[2][5][10] = {{{255UL,255UL,255UL,255UL,255UL,255UL,255UL,255UL,255UL,255UL},{255UL,0UL,0UL,255UL,0UL,0UL,255UL,0UL,0UL,255UL},{0UL,255UL,0UL,0UL,255UL,0UL,0UL,255UL,0UL,0UL},{255UL,255UL,255UL,255UL,255UL,255UL,255UL,255UL,255UL,255UL},{255UL,0UL,0UL,255UL,0UL,0UL,255UL,0UL,0UL,255UL}},{{0UL,255UL,0UL,0UL,255UL,0UL,0UL,255UL,0UL,0UL},{255UL,255UL,255UL,255UL,255UL,255UL,255UL,255UL,255UL,255UL},{255UL,0UL,0UL,255UL,0UL,0UL,255UL,0UL,0UL,255UL},{0UL,255UL,0UL,0UL,255UL,0UL,0UL,255UL,0UL,0UL},{255UL,255UL,255UL,255UL,255UL,255UL,255UL,255UL,255UL,255UL}}};
    union U0 l_402 = {-3L};
    int l_410 = 0x246ADCBBL;
    int l_411 = 1L;
    int l_412 = (-5L);
    int l_413 = 0x9DAC3E94L;
    int l_414 = 0x0697EB82L;
    int l_417 = (-1L);
    int l_418 = 0x78C1645BL;
    int l_421 = 0L;
    int l_422 = 0x029D42D1L;
    int l_513 = 0x8EA63B82L;
    int i, j, k;
    if ((l_388[0][0][9] | (safe_unary_minus_func_uint16_t_u((l_388[0][3][2] | (0x166499E2L >= 0x2A3B7F02L))))))
    {
        int l_406[1][10] = {{0L,0x896B92F2L,0x896B92F2L,0L,0x896B92F2L,0x896B92F2L,0L,0x896B92F2L,0x896B92F2L,0L}};
        int i, j;
        for (g_385.f0 = (-26); (g_385.f0 <= 25); g_385.f0 = safe_add_func_int8_t_s_s(g_385.f0, 4))
        {
            unsigned short l_405 = 0xB80EL;
            int l_407 = 0xAC5D8D41L;
            l_407 = (safe_sub_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u(1UL, (safe_add_func_uint8_t_u_u(func_59((safe_mod_func_uint16_t_u_u((g_219 ^ (g_154.f0 >= p_36.f1)), (safe_lshift_func_int16_t_s_u((((func_84(g_386.f1, l_402, ((safe_rshift_func_int8_t_s_u((func_84(l_405, g_154, l_402.f0, p_37.f1) > g_20[5]), 0)) == g_385.f0), g_272[0]) <= 0xE7B1D92DL) & l_406[0][6]) <= 0UL), p_36.f0)))), p_37.f1), l_402.f0)))), 0x26CDL));
            if (g_300)
                break;
            g_154.f0 = (l_407 >= g_185[0]);
        }
        for (g_386.f0 = (-12); (g_386.f0 != 39); g_386.f0++)
        {
            return p_34;
        }
        --g_423;
    }
    else
    {
        unsigned l_445[10] = {0UL,0xAD2A690DL,0xAD2A690DL,0UL,0x9FB1D648L,0UL,0xAD2A690DL,0xAD2A690DL,0UL,0x9FB1D648L};
        int l_450 = 8L;
        union U0 l_451 = {0L};
        int l_467 = 1L;
        int l_488 = 0x6A59BBE5L;
        int l_490 = 1L;
        union U0 l_546 = {0xAD2BC080L};
        unsigned l_567 = 1UL;
        unsigned char l_574[6] = {1UL,1UL,1UL,1UL,1UL,1UL};
        int i;
        for (p_34 = 0; (p_34 > 13); p_34 = safe_add_func_int32_t_s_s(p_34, 6))
        {
            unsigned l_432 = 0xF5D9C976L;
            int l_447[8] = {0xCEF1872BL,0xCEF1872BL,(-3L),0xCEF1872BL,0xCEF1872BL,(-3L),0xCEF1872BL,0xCEF1872BL};
            int i;
            for (g_171 = 24; (g_171 <= 36); ++g_171)
            {
                unsigned short l_446 = 0x0DB1L;
                l_417 = ((~0x758BL) == p_37.f0);
                g_433 |= (safe_lshift_func_int8_t_s_s((p_38.f1 >= l_432), p_36.f1));
                for (g_168 = 0; (g_168 <= (-11)); --g_168)
                {
                    unsigned l_444[10][1];
                    int i, j;
                    for (i = 0; i < 10; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_444[i][j] = 0x0A7155FCL;
                    }
                    l_446 ^= (safe_mod_func_int16_t_s_s(1L, ((((g_168 & p_35) ^ (safe_add_func_int32_t_s_s((g_185[0] | g_187), ((safe_add_func_int16_t_s_s((+(+(safe_sub_func_uint8_t_u_u((((6UL && (((+(-7L)) <= g_222) == ((p_38.f1 & g_423) < l_444[8][0]))) >= g_419) < g_419), g_386.f0)))), 1UL)) && p_36.f1)))) && 0x86L) && l_445[8])));
                    l_447[0] = 0L;
                    p_37.f2 = l_445[6];

                                    }
            }
            if (g_419)
                continue;
        }
        for (g_416 = (-29); (g_416 >= 11); ++g_416)
        {
            if (g_300)
                break;
            l_450 ^= l_445[8];
        }
        if (((g_168 >= p_38.f1) != (func_84(g_242, l_451, (safe_sub_func_uint32_t_u_u((0x8658L == ((safe_mod_func_int32_t_s_s(l_445[8], l_450)) && g_20[3])), g_168)), g_222) & (-9L))))
        {
            char l_456[6][9][4] = {{{(-5L),0x52L,0x3BL,(-1L)},{2L,0L,(-1L),(-9L)},{0xEFL,0x08L,0L,0xC7L},{0x88L,0x8AL,0xD5L,0xACL},{0x25L,0L,0x1CL,(-6L)},{2L,(-5L),1L,0xBAL},{(-5L),0x8AL,0x25L,1L},{(-10L),0xEFL,8L,(-9L)},{1L,4L,0xC8L,0x16L}},{{0L,(-1L),0L,0x08L},{0x16L,0x49L,(-1L),(-1L)},{(-1L),0x81L,0L,0x49L},{0x15L,0x96L,0L,0x88L},{(-1L),0xC7L,(-1L),0x27L},{0x16L,9L,0L,(-1L)},{0L,(-1L),0xC8L,1L},{1L,0L,8L,1L},{(-10L),0xACL,0x25L,0x09L}},{{(-5L),4L,1L,9L},{2L,0xEEL,0x1CL,0x3BL},{0x25L,0xC8L,0xD5L,0x09L},{0x88L,0xBAL,0L,1L},{0xEFL,0L,(-1L),4L},{0x96L,0x42L,4L,(-1L)},{0x5AL,0x3BL,6L,0L},{(-1L),0x27L,0x1CL,0xEFL},{0x09L,0L,0x15L,(-1L)}},{{9L,0x3BL,0x42L,6L},{0xEEL,(-1L),1L,2L},{0xBAL,0xD5L,0L,0L},{0L,0x8AL,1L,1L},{2L,2L,2L,0x27L},{0xEFL,0x5AL,(-5L),0x49L},{1L,(-9L),0x81L,(-5L)},{0x3BL,(-9L),1L,0x49L},{(-9L),0x5AL,0x88L,0x27L}},{{0xC8L,2L,0x08L,1L},{0x25L,0x8AL,(-1L),0L},{2L,0xD5L,0x5AL,2L},{0x88L,(-1L),0L,6L},{2L,0x3BL,0x02L,(-1L)},{(-5L),0L,1L,0xEFL},{0x81L,0x27L,0L,0x42L},{0L,0x97L,0x8DL,2L},{2L,0x81L,1L,0x09L}},{{0L,0xEFL,0x08L,0L},{4L,0x49L,8L,3L},{(-9L),1L,0L,0x97L},{9L,0x16L,0x81L,0x15L},{1L,6L,1L,0L},{1L,0x11L,(-1L),0xC8L},{0xEBL,1L,2L,6L},{0x25L,0x15L,0xBAL,0x15L},{5L,0xE2L,0L,9L}}};
            int l_457 = 0L;
            int l_458[10][3] = {{0x2D18D5C2L,1L,0x2D18D5C2L},{(-3L),0x1FF31FAFL,0x1FF31FAFL},{(-5L),1L,(-5L)},{(-3L),(-3L),0x1FF31FAFL},{0x2D18D5C2L,1L,0x2D18D5C2L},{(-3L),0x1FF31FAFL,0x1FF31FAFL},{(-5L),1L,(-5L)},{(-3L),(-3L),0x1FF31FAFL},{0x2D18D5C2L,1L,0x2D18D5C2L},{(-3L),0x1FF31FAFL,0x1FF31FAFL}};
            short l_489 = (-1L);
            union U0 l_504 = {1L};
            int i, j, k;
            if (func_84(p_35, g_91, l_456[4][1][1], p_35))
            {
                unsigned l_459 = 0x28362FCDL;
                int l_466[1][7];
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 7; j++)
                        l_466[i][j] = (-9L);
                }
                ++l_459;
                ++g_468[1][0][4];
            }
            else
            {
                char l_476 = 1L;
                int l_481 = 1L;
                short l_485 = (-1L);
                int l_487[2][10][4] = {{{1L,1L,0L,0L},{1L,1L,0L,1L},{1L,0x45990CAAL,(-1L),1L},{0xD33ABA20L,(-1L),1L,(-1L)},{1L,(-1L),0xD33ABA20L,1L},{(-1L),0x45990CAAL,1L,1L},{0L,1L,1L,0L},{0L,1L,1L,4L},{(-1L),0L,0xD33ABA20L,0xDF22B542L},{1L,(-1L),1L,0xDF22B542L}},{{0xD33ABA20L,0L,(-1L),4L},{1L,1L,(-1L),(-1L)},{(-1L),(-1L),(-1L),1L},{0L,1L,0x45990CAAL,0xDF22B542L},{1L,0x45990CAAL,1L,0x45990CAAL},{1L,0x45990CAAL,1L,0xDF22B542L},{0x45990CAAL,1L,0L,1L},{(-1L),(-1L),(-1L),(-1L)},{(-1L),0xDF22B542L,0L,1L},{0x45990CAAL,(-1L),1L,4L}}};
                unsigned l_512 = 4294967293UL;
                int i, j, k;
                if (p_36.f1)
                {
                    short l_473 = 5L;
                    char l_475 = 0x72L;
                    int l_483 = 7L;
                    int l_486 = (-5L);
                    int l_491 = 0xAC231663L;
                    int l_494 = 0x50A643B7L;
                    int l_496 = 0x272F5E64L;
                    p_37.f2 = 0xD66BC741L;

                                        g_464 |= g_112[2];
                    for (l_450 = 0; (l_450 <= (-14)); l_450 = safe_sub_func_int8_t_s_s(l_450, 1))
                    {
                        short l_474 = 1L;
                        char l_480[10] = {0x35L,(-6L),(-6L),0x35L,0L,0x35L,(-6L),(-6L),0x35L,0L};
                        int l_482 = 0xB3286809L;
                        int l_484 = (-1L);
                        int l_492 = 0x7CBD62A3L;
                        int l_493 = (-10L);
                        int i;
                        ++g_477;
                        --g_497;
                    }
                }
                else
                {
                    unsigned l_516 = 0x2BE68212L;
                    union U2 l_517 = {0L};
                    char l_518[9] = {0x9AL,0x9AL,0x9AL,0x9AL,0x9AL,0x9AL,0x9AL,0x9AL,0x9AL};
                    int l_552 = (-1L);
                    int i;
                    for (p_34 = 0; (p_34 >= (-28)); p_34 = safe_sub_func_uint16_t_u_u(p_34, 4))
                    {
                        unsigned l_511 = 0x4E351086L;
                        unsigned l_519 = 0x04900361L;
                        l_458[5][2] &= (safe_lshift_func_int8_t_s_s((func_50(l_504, p_37, (func_59(g_462, (((-1L) != func_84((safe_mod_func_uint16_t_u_u(l_488, p_35)), g_91, ((safe_rshift_func_uint16_t_u_s(((safe_lshift_func_int8_t_s_s(p_37.f0, l_511)) ^ p_34), 10)) & p_38.f0), l_512)) != p_35)) & p_35), l_513) == p_34), g_423));
                        l_422 = l_511;
                        g_464 = (safe_add_func_uint8_t_u_u((l_513 >= (p_38.f0 >= (l_516 >= (0UL ^ l_516)))), func_42(l_490, (l_458[0][2] | func_42(g_463, func_50(l_504, l_517, p_38.f0, p_38.f0), l_518[4])), l_519)));
                    }
                    for (g_193 = 0; (g_193 >= 26); g_193++)
                    {
                        p_37.f2 = (safe_mul_func_uint32_t_u_u(p_37.f1, (l_457 == (((func_84(g_497, l_504, (safe_rshift_func_int8_t_s_u(0x33L, 5)), ((g_230 & p_38.f0) && (p_37.f0 & g_272[0]))) > l_517.f1) >= l_517.f1) | 3UL))));

                                                g_91.f0 = g_300;
                        l_450 = ((g_112[2] > ((safe_lshift_func_uint16_t_u_u(((0L || func_84((g_386.f0 && (safe_add_func_uint32_t_u_u(((safe_lshift_func_int8_t_s_s((-2L), 0)) < 0x40EBL), l_458[3][0]))), g_154, g_385.f0, p_37.f2)) != p_38.f1), 13)) != 7UL)) ^ 1UL);
                        l_481 |= ((!(((safe_lshift_func_uint8_t_u_u((func_84((l_458[0][2] ^ (safe_add_func_int8_t_s_s((safe_sub_func_uint8_t_u_u((safe_add_func_uint32_t_u_u((g_420 == func_84((safe_rshift_func_uint16_t_u_u(((safe_mod_func_uint16_t_u_u(g_112[0], ((+(safe_add_func_int16_t_s_s(func_84(g_185[0], l_546, p_35, ((g_386.f0 | func_84(l_488, g_547, p_38.f0, p_36.f0)) == 0x94L)), p_38.f0))) && 0x0FL))) < 4294967287UL), l_467)), l_504, g_168, p_35)), l_518[4])), l_476)), l_388[0][0][9]))), g_154, l_467, l_445[8]) != g_464), g_112[0])) == 0x21L) < l_517.f0)) == 0x90L);
                    }
                    for (l_421 = 0; (l_421 <= 8); l_421 += 1)
                    {
                        int i;
                        g_495 ^= l_518[l_421];
                        g_385.f2 = func_59(l_546.f0, p_35);

                                            }
                    for (l_422 = 0; (l_422 <= (-9)); l_422 = safe_sub_func_uint32_t_u_u(l_422, 5))
                    {
                        int l_572 = 0x03D51DBBL;
                        int l_573 = (-7L);
                        l_487[1][3][3] ^= (safe_add_func_uint16_t_u_u((l_552 != ((func_84((g_420 <= (safe_rshift_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s(g_242, (p_37.f0 == ((safe_lshift_func_uint8_t_u_u(((safe_sub_func_int8_t_s_s((((safe_mod_func_uint32_t_u_u(0xE5EA7C1EL, p_34)) == l_481) < ((safe_add_func_int16_t_s_s(p_34, (safe_lshift_func_int8_t_s_s(func_84(g_168, g_547, p_35, g_465), l_516)))) > l_451.f0)), g_420)) < p_38.f0), g_468[1][0][7])) | p_38.f1)))), 13))), g_547, g_242, p_36.f1) & (-10L)) && 0L)), 65532UL));
                        l_567--;
                        if (p_37.f0)
                            continue;
                        l_573 |= (l_552 == (safe_rshift_func_uint8_t_u_u(((l_572 > g_433) & l_388[0][0][9]), 0)));
                    }
                }
                l_574[2]--;
            }
            l_422 = ((safe_add_func_uint32_t_u_u(l_422, (g_468[1][0][4] && (safe_lshift_func_int8_t_s_s(0xB4L, 5))))) < func_42((safe_unary_minus_func_int32_t_s(p_37.f0)), ((((safe_add_func_uint8_t_u_u((p_37.f1 == (l_421 == g_193)), p_36.f1)) != ((-1L) ^ 5L)) && g_465) >= 1UL), l_458[9][1]));
        }
        else
        {
            return g_465;
        }
    }
    l_413 = (l_418 < p_35);
    p_37.f2 = (-1L);

        l_513 = (safe_mod_func_uint8_t_u_u(l_413, (safe_rshift_func_int8_t_s_s(func_84(func_42(l_414, ((l_413 || p_38.f1) <= (safe_unary_minus_func_int32_t_s((safe_rshift_func_uint8_t_u_s(g_468[0][1][4], 3))))), (l_388[0][0][9] == ((0xF0L | 0x0BL) <= (g_416 > g_419)))), l_402, p_37.f2, g_415), p_36.f0))));
    return g_222;
}







static short func_42(unsigned char p_43, unsigned p_44, unsigned char p_45)
{
    union U0 l_384[4][8][6] = {{{{0x5BA0F185L},{0x53078205L},{-5L},{-2L},{0x9D922864L},{0x5BA0F185L}},{{0x365AFA37L},{-4L},{0x299E1F5FL},{0xBBC11221L},{1L},{0L}},{{0x68636234L},{-6L},{0x9906E010L},{4L},{0x0E36DE2CL},{1L}},{{1L},{8L},{4L},{5L},{-2L},{0x307D05B8L}},{{0x53078205L},{1L},{-4L},{-5L},{0x990BE5C4L},{0xDB2BD2A3L}},{{0x5BA0F185L},{0x69AABB43L},{0xD6BD1B4FL},{0x64507E34L},{0x99E2F692L},{0x99E2F692L}},{{0L},{0x0E36DE2CL},{0x0E36DE2CL},{0L},{0x9B747F85L},{0xC056C7C8L}},{{0x53078205L},{0x040B19E0L},{9L},{0x99E2F692L},{0xF0E9EB29L},{0x299E1F5FL}}},{{{0L},{1L},{1L},{0xBBC11221L},{0xF0E9EB29L},{-1L}},{{0xFF179101L},{0x040B19E0L},{-1L},{0xFCB6A115L},{-1L},{0x307D05B8L}},{{3L},{0x47DBE32CL},{0x178A9D31L},{-9L},{-2L},{0L}},{{0xDB2BD2A3L},{8L},{1L},{0x299E1F5FL},{-1L},{0x0E36DE2CL}},{{-4L},{0xB7D5DAE9L},{4L},{1L},{-9L},{0x36411CF4L}},{{1L},{0xC1A0C521L},{0x0FB63792L},{0xBBC11221L},{0x47DBE32CL},{-2L}},{{0L},{1L},{1L},{2L},{0xB7D5DAE9L},{0xFF179101L}},{{-2L},{0x99E2F692L},{0x653DEAB5L},{-1L},{0x256835DCL},{6L}}},{{{0xB365A6C2L},{-5L},{1L},{-4L},{-5L},{0x69AABB43L}},{{0x64507E34L},{0x3ED34CF2L},{1L},{-9L},{-5L},{0x64507E34L}},{{0x256835DCL},{0xD4500237L},{0xFF179101L},{-8L},{0x0FB63792L},{-1L}},{{-9L},{1L},{0x68636234L},{0L},{0xD6BD1B4FL},{-9L}},{{0x9B747F85L},{0xF0E9EB29L},{0L},{0xF0E9EB29L},{0x9B747F85L},{3L}},{{0xBDC13603L},{0x0FB63792L},{0x47DBE32CL},{1L},{-1L},{0x53078205L}},{{0x64507E34L},{5L},{0x299E1F5FL},{0x0FB63792L},{0x9D922864L},{0L}},{{0xDB2BD2A3L},{0xBDC13603L},{0x9906E010L},{0xD4500237L},{-1L},{4L}}},{{{0xCE109F48L},{0xDE907A0BL},{3L},{0L},{0x307D05B8L},{0x68636234L}},{{-4L},{0xBBC11221L},{0x990BE5C4L},{0x653DEAB5L},{0x64507E34L},{4L}},{{0xCB6C84F8L},{0L},{0x178A9D31L},{0L},{0xFF179101L},{5L}},{{1L},{-5L},{-1L},{0x68636234L},{0xCE109F48L},{1L}},{{9L},{4L},{0x365AFA37L},{-4L},{0x68636234L},{0x53078205L}},{{-8L},{0xF0E9EB29L},{0L},{-2L},{-9L},{0x178A9D31L}},{{1L},{0xC056C7C8L},{0xC1A0C521L},{0x653DEAB5L},{0xBDC13603L},{0x69AABB43L}},{{0xB7D5DAE9L},{0x178A9D31L},{-8L},{0L},{0xF0E9EB29L},{0xCB6C84F8L}}}};
    int i, j, k;
    l_384[1][2][4].f0 = func_50(l_384[1][2][4], g_385, ((func_59(p_45, func_84(p_43, g_154, l_384[1][2][4].f0, g_272[7])) & p_43) ^ g_185[0]), g_385.f0);
    return l_384[1][2][4].f0;
}







static int func_50(union U0 p_51, union U2 p_52, short p_53, unsigned char p_54)
{
    int l_342 = 0x542902C6L;
    int l_345[9][4][6] = {{{0xF15F9075L,1L,0xF15F9075L,0x8FF43828L,(-10L),4L},{1L,0x59A02BF5L,0xF2DD593AL,0xA4464BCBL,1L,0L},{0L,1L,(-1L),0xA4464BCBL,0x523272E7L,0x8FF43828L},{1L,0L,0x262B2D55L,0x8FF43828L,0L,1L}},{{0xF15F9075L,0xA8D59F85L,1L,0L,1L,(-7L)},{0L,0x681C3699L,0x4345ABB8L,(-10L),(-10L),0x4345ABB8L},{9L,9L,(-10L),2L,7L,0x8D851745L},{6L,0xA4464BCBL,0x4345ABB8L,0L,7L,0x4B0044F0L}},{{0x523272E7L,6L,0x4345ABB8L,0L,1L,0x8D851745L},{(-10L),0L,0x4B0044F0L,0L,(-1L),1L},{0L,(-1L),1L,9L,(-7L),0L},{0x879E1DACL,0x523272E7L,1L,4L,1L,0x523272E7L}},{{1L,0x262B2D55L,0L,(-1L),7L,9L},{1L,1L,(-1L),(-7L),0x681C3699L,0x8D851745L},{0x8FF43828L,1L,6L,1L,7L,7L},{0L,0x262B2D55L,0x8FF43828L,0L,1L,(-10L)}},{{0x8D851745L,0x523272E7L,0x4B0044F0L,0L,(-7L),1L},{0L,(-1L),0L,0L,(-1L),0L},{0x879E1DACL,0L,(-7L),(-7L),1L,0x523272E7L},{0xA8D59F85L,6L,9L,7L,7L,1L}},{{0xA8D59F85L,0xA4464BCBL,7L,(-7L),0x59A02BF5L,(-10L)},{0x879E1DACL,1L,6L,0L,0x4B0044F0L,6L},{0L,0x262B2D55L,0x4345ABB8L,0L,0x4B0044F0L,0x4345ABB8L},{0x8FF43828L,0xF15F9075L,1L,0xF15F9075L,0x8FF43828L,(-10L)}},{{1L,0x4345ABB8L,4L,(-1L),6L,1L},{2L,0x59A02BF5L,7L,0x4345ABB8L,(-1L),1L},{7L,0L,4L,1L,0L,(-10L)},{(-1L),0x4B0044F0L,1L,0x879E1DACL,1L,0x4345ABB8L}},{{0L,(-1L),0x523272E7L,4L,1L,1L},{1L,0L,0L,1L,0x4B0044F0L,0x262B2D55L},{0x262B2D55L,0x59A02BF5L,1L,0xF15F9075L,0x4345ABB8L,(-1L)},{0xF2DD593AL,0x8FF43828L,4L,0x8D851745L,0x4345ABB8L,0xF2DD593AL}},{{0L,0x59A02BF5L,6L,0x879E1DACL,0x4B0044F0L,0xF15F9075L},{7L,0L,0x8D851745L,0L,1L,(-10L)},{7L,(-1L),0L,0x262B2D55L,1L,0x262B2D55L},{2L,0x4B0044F0L,2L,4L,0L,1L}}};
    int l_360[10][6] = {{8L,0x090F8D50L,0x090F8D50L,8L,0x08E61A97L,0xF7806D69L},{0xF7806D69L,8L,0x819C18BAL,8L,0xF7806D69L,0L},{8L,0xF7806D69L,0L,0x08E61A97L,0x819C18BAL,0xF7806D69L},{0L,0xF7806D69L,8L,0x819C18BAL,8L,0xF7806D69L},{8L,0L,0x08E61A97L,0L,0L,0x08E61A97L},{8L,8L,0L,0x819C18BAL,0x090F8D50L,0x819C18BAL},{0L,8L,0L,0x08E61A97L,0L,0L},{0xF7806D69L,0L,0L,0xF7806D69L,8L,0x819C18BAL},{0x819C18BAL,0xF7806D69L,0L,0xF7806D69L,0x819C18BAL,0x08E61A97L},{0xF7806D69L,0x819C18BAL,0x08E61A97L,0x08E61A97L,0x819C18BAL,0xF7806D69L}};
    union U0 l_371 = {1L};
    int i, j, k;
    for (g_193 = 1; (g_193 < (-25)); g_193 = safe_sub_func_uint32_t_u_u(g_193, 3))
    {
        g_187 = func_84((((l_342 > ((safe_lshift_func_int8_t_s_s(l_345[7][2][2], (g_171 || g_112[2]))) == (safe_sub_func_uint16_t_u_u((safe_mod_func_int16_t_s_s((safe_add_func_int8_t_s_s(((((safe_sub_func_uint32_t_u_u((l_345[7][2][2] || (g_185[0] ^ (safe_add_func_uint8_t_u_u(p_52.f0, ((4294967292UL || p_52.f0) <= g_168))))), p_51.f0)) ^ 4294967295UL) != p_52.f0) > p_52.f0), p_54)), g_185[0])), g_194)))) > g_272[0]) || 3L), p_51, l_345[8][0][2], g_154.f0);
        return g_154.f0;
    }
    if ((safe_sub_func_uint32_t_u_u(0x22547666L, func_59(g_194, ((0xBE1EL != (safe_sub_func_uint32_t_u_u(g_171, func_84(func_84((l_360[1][4] || (l_360[1][4] <= (safe_sub_func_uint32_t_u_u((safe_add_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s(0x9B85L, 4)), p_51.f0)), (safe_rshift_func_uint8_t_u_s(func_84(func_84(((((safe_mod_func_int32_t_s_s(p_52.f0, l_360[0][4])) != p_51.f0) <= 0xD7BE39CEL) & p_53), l_371, l_360[1][4], l_345[7][2][2]), p_51, g_6, g_185[0]), 1)))))), l_371, l_345[7][2][2], g_272[8]), g_154, g_187, g_272[0])))) ^ l_345[8][1][0])))))
    {
        int l_381 = 0x4B6FAAA5L;
        for (p_52.f2 = 23; (p_52.f2 == (-23)); --p_52.f2)
        {
            int l_380 = 0x3DAB1411L;
            for (l_342 = 0; (l_342 > 1); l_342 = safe_add_func_uint8_t_u_u(l_342, 5))
            {
                for (g_194 = 0; (g_194 >= 31); g_194 = safe_add_func_uint8_t_u_u(g_194, 1))
                {
                    g_154.f0 |= 0xFFD309D1L;
                    g_154.f0 = p_51.f0;
                    for (g_219 = 0; (g_219 > 20); g_219 = safe_add_func_int8_t_s_s(g_219, 6))
                    {
                        l_381 = l_380;
                    }
                }
            }
            for (p_53 = 14; (p_53 < 27); ++p_53)
            {
                l_360[1][4] = p_52.f0;
            }
        }

            }
    else
    {
        return g_193;
    }

        return g_242;
}







static int func_59(unsigned p_60, unsigned p_61)
{
    int l_67 = 1L;
    int l_98 = 4L;
    union U0 l_104 = {0xE041B8CDL};
    unsigned char l_188 = 0xD4L;
    int l_191 = 1L;
    int l_192[5];
    int l_323[6][1];
    int i, j;
    for (i = 0; i < 5; i++)
        l_192[i] = 2L;
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 1; j++)
            l_323[i][j] = (-3L);
    }
    if ((p_61 >= l_67))
    {
        int l_103 = 1L;
        union U0 l_155 = {0x73F93019L};
        int l_214 = 0xA93F5E3FL;
        unsigned l_270[4] = {4294967295UL,4294967295UL,4294967295UL,4294967295UL};
        int i;
        for (p_60 = 0; (p_60 < 7); p_60 = safe_add_func_int32_t_s_s(p_60, 4))
        {
            short l_83 = 0xCE91L;
            unsigned l_97[10] = {0xE90E87CAL,0UL,0xE90E87CAL,0xD364BFA3L,0xD364BFA3L,0xE90E87CAL,0UL,0xE90E87CAL,0xD364BFA3L,0xD364BFA3L};
            int l_118 = 1L;
            union U0 l_153 = {0x42557B45L};
            char l_165 = 0xC0L;
            int i;
            l_98 &= (safe_rshift_func_int16_t_s_s((safe_add_func_uint8_t_u_u((~g_20[3]), ((((((safe_lshift_func_int16_t_s_u(((safe_rshift_func_uint16_t_u_s((safe_unary_minus_func_uint16_t_u((safe_mod_func_int16_t_s_s((safe_sub_func_uint16_t_u_u(g_20[4], (65535UL | l_83))), ((l_83 >= func_84(((p_61 && g_20[5]) & (p_61 > l_67)), g_91, p_61, p_60)) ^ g_6))))), 0)) || g_6), l_97[7])) ^ g_20[0]) <= g_20[2]) && 0x51L) < p_60) > p_61))), g_20[1]));
            if (((safe_lshift_func_uint16_t_u_u(((safe_sub_func_uint8_t_u_u(((g_20[5] > (func_84(l_103, l_104, (safe_lshift_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u(((safe_unary_minus_func_uint32_t_u((((safe_add_func_int8_t_s_s(p_61, (l_104.f0 ^ 8L))) >= l_103) >= p_60))) <= l_103), l_83)), 5)), p_60) ^ p_60)) & p_61), 3UL)) >= g_112[2]), 8)) > 0x2EL))
            {
                int l_117 = 1L;
                unsigned char l_127 = 1UL;
                int l_128 = 0x16214FB9L;
                for (l_104.f0 = 0; (l_104.f0 < 10); l_104.f0 = safe_add_func_int16_t_s_s(l_104.f0, 1))
                {
                    unsigned short l_123 = 0xB5D7L;
                    if ((safe_lshift_func_int16_t_s_u(l_117, 15)))
                    {
                        l_118 = func_84(g_112[2], g_91, p_61, l_117);
                    }
                    else
                    {
                        union U0 l_121[6] = {{0x14D5734CL},{0x14D5734CL},{0x14D5734CL},{0x14D5734CL},{0x14D5734CL},{0x14D5734CL}};
                        int i;
                        if (p_60)
                            break;
                        g_91.f0 = l_103;
                        l_123 = (safe_lshift_func_uint8_t_u_s(func_84(g_20[5], l_121[5], g_112[2], (p_60 <= (safe_unary_minus_func_int8_t_s(g_112[2])))), 4));
                    }
                    for (g_91.f0 = (-19); (g_91.f0 < (-6)); g_91.f0 = safe_add_func_uint8_t_u_u(g_91.f0, 6))
                    {
                        int l_126 = (-4L);
                        l_126 = (5UL == ((g_20[5] | g_6) & (p_61 || g_112[2])));
                    }
                    g_91.f0 = 1L;
                }
                l_128 = l_127;
                for (l_98 = 3; (l_98 <= 9); l_98 += 1)
                {
                    union U0 l_131 = {0x0847A0C8L};
                    for (p_61 = 0; (p_61 <= 9); p_61 += 1)
                    {
                        int i;
                        if (l_97[l_98])
                            break;
                    }
                    for (l_67 = 1; (l_67 <= 9); l_67 += 1)
                    {
                        unsigned l_132 = 4294967286UL;
                        int i;
                        l_104.f0 = (safe_lshift_func_int8_t_s_s(((l_97[l_98] & (func_84(p_61, l_131, g_20[5], l_132) & p_60)) == ((safe_lshift_func_uint16_t_u_s(p_60, 12)) == l_127)), 6));
                        if (l_132)
                            continue;
                        if (l_97[l_98])
                            continue;
                    }
                    return p_60;
                }
            }
            else
            {
                unsigned l_145 = 4294967292UL;
                unsigned char l_150 = 255UL;
                unsigned l_152[9][3] = {{4294967295UL,4294967288UL,4294967288UL},{0x5EBDF0E5L,0x222D1444L,1UL},{4294967295UL,4294967288UL,4294967288UL},{0x5EBDF0E5L,0x222D1444L,1UL},{4294967295UL,4294967288UL,4294967288UL},{0x5EBDF0E5L,0x222D1444L,1UL},{4294967295UL,4294967288UL,4294967288UL},{0x5EBDF0E5L,0x222D1444L,1UL},{4294967295UL,4294967288UL,4294967288UL}};
                unsigned l_166 = 0xFB4DCC51L;
                int l_167 = 9L;
                int i, j;
                if (((safe_unary_minus_func_uint16_t_u((safe_rshift_func_int16_t_s_s((g_91.f0 | 65528UL), 2)))) | ((safe_rshift_func_uint8_t_u_u((((0x64L || p_61) | 0x6505L) & (l_103 == (safe_add_func_uint32_t_u_u((g_112[2] > p_61), (p_61 <= 3L))))), 2)) ^ p_60)))
                {
                    int l_142 = (-2L);
                    union U0 l_151[2] = {{1L},{1L}};
                    int l_169 = 0L;
                    int i;
                    l_145 = func_84(l_142, g_91, p_60, (safe_sub_func_int16_t_s_s(2L, 9UL)));
                    if (func_84(((p_61 | ((0x748BFE3BL ^ ((safe_rshift_func_uint8_t_u_u(0x86L, 7)) || func_84((((safe_add_func_uint32_t_u_u(l_67, func_84(l_150, l_151[0], l_152[3][2], g_20[5]))) || g_20[2]) ^ l_97[7]), l_153, g_20[2], l_153.f0))) > 0UL)) <= 0xF8350F04L), g_154, g_6, g_112[0]))
                    {
                        if (l_151[0].f0)
                            break;
                        l_98 = g_6;
                    }
                    else
                    {
                        unsigned short l_164 = 65535UL;
                        int l_170 = 0xEBB4D12FL;
                        g_91.f0 = g_6;
                        l_167 = (func_84(l_142, l_155, p_61, func_84(g_154.f0, l_104, (safe_add_func_uint8_t_u_u((safe_add_func_int16_t_s_s(func_84((g_20[2] > (((safe_rshift_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s((0xEFL <= (l_164 && g_112[2])), p_60)), l_103)) == p_60) & l_151[0].f0)), l_153, p_61, l_151[0].f0), l_83)), (-1L))), l_165)) <= l_166);
                        ++g_171;
                        return g_91.f0;
                    }
                    for (l_167 = 0; (l_167 <= 9); l_167 += 1)
                    {
                        int i;
                        if (l_97[l_167])
                            break;
                        return g_6;
                    }
                }
                else
                {
                    char l_186 = 0xCBL;
                    for (l_145 = 29; (l_145 > 2); l_145--)
                    {
                        unsigned short l_178 = 1UL;
                        int l_179[10] = {0xA90A817FL,(-8L),0xA90A817FL,(-8L),0xA90A817FL,(-8L),0xA90A817FL,(-8L),0xA90A817FL,(-8L)};
                        int i;
                        g_91.f0 &= (safe_rshift_func_uint16_t_u_s((((g_20[3] != p_60) >= (l_178 == g_168)) || l_98), 9));
                        l_179[0] = l_103;
                    }
                    l_155.f0 = func_84(((((0x8CFBF85DL >= (safe_add_func_uint32_t_u_u((safe_sub_func_uint16_t_u_u(func_84((safe_unary_minus_func_int16_t_s(g_20[4])), l_104, g_185[0], (l_186 == 0x842EL)), l_98)), (0UL ^ (-3L))))) == 4294967295UL) | p_60) >= l_153.f0), g_154, p_61, p_61);
                    l_188--;
                    if (g_171)
                        continue;
                }
                g_187 = g_20[5];
            }
            return g_168;
        }
        ++g_194;
        for (l_103 = 0; (l_103 >= 0); l_103 = safe_add_func_int8_t_s_s(l_103, 9))
        {
            unsigned l_209 = 0x49E9CABAL;
            unsigned l_212 = 0x244882DFL;
            int l_216[5][1] = {{0L},{0L},{0L},{0L},{0L}};
            union U0 l_273 = {0x39F9CD19L};
            int i, j;
            if (l_104.f0)
            {
                unsigned l_204 = 0xB41F84FDL;
                int l_215 = 0x7E3E6D3AL;
                int l_228 = 0x901C464FL;
                int l_229 = 0xCE56ED2CL;
                if ((safe_unary_minus_func_int32_t_s(p_61)))
                {
                    unsigned short l_213 = 1UL;
                    int l_217[2];
                    union U0 l_237 = {2L};
                    int i;
                    for (i = 0; i < 2; i++)
                        l_217[i] = 0x998E2424L;
                    if (((safe_mod_func_uint8_t_u_u(0xAFL, g_20[1])) ^ (safe_add_func_uint32_t_u_u((((p_60 != l_204) || (safe_sub_func_int32_t_s_s(((safe_sub_func_uint16_t_u_u(l_209, (safe_rshift_func_int16_t_s_s(p_60, g_168)))) > (-1L)), l_212))) > l_213), l_214))))
                    {
                        return g_20[5];
                    }
                    else
                    {
                        char l_218 = 0x26L;
                        l_215 |= ((g_185[0] <= ((252UL > func_84(func_84(g_20[0], g_154, l_98, func_84(p_61, g_91, l_155.f0, ((g_91.f0 != g_193) != l_104.f0))), l_155, p_61, l_213)) >= p_61)) <= (-9L));
                        l_104.f0 = l_192[2];
                        g_219++;
                        ++g_222;
                    }
                    for (l_209 = (-3); (l_209 > 44); ++l_209)
                    {
                        int l_227 = (-3L);
                        g_230++;
                        return l_215;
                    }
                    for (l_188 = 0; (l_188 <= 4); l_188 += 1)
                    {
                        int i;
                        g_154.f0 = ((safe_mod_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s(func_84((~249UL), l_237, l_192[l_188], ((safe_add_func_uint32_t_u_u((l_192[l_188] & (g_6 != p_61)), 0x71F50AE7L)) < g_91.f0)), p_60)), g_171)) & 0xD1FD33C2L);
                    }
                }
                else
                {
                    return l_103;
                }
                for (l_188 = 0; (l_188 <= 0); l_188 += 1)
                {
                    int i, j;
                    l_216[l_188][l_188] &= 0x7FC28E36L;
                    return l_216[l_188][l_188];
                }
                g_242 &= (((!func_84(g_230, g_154, (l_216[4][0] < g_171), l_155.f0)) < (g_187 ^ (0UL & ((safe_rshift_func_int16_t_s_s(g_20[3], p_60)) != 0UL)))) ^ l_214);
            }
            else
            {
                unsigned l_258 = 1UL;
                for (g_154.f0 = (-28); (g_154.f0 != 25); g_154.f0++)
                {
                    for (g_168 = 9; (g_168 < 28); g_168 = safe_add_func_int8_t_s_s(g_168, 2))
                    {
                        int l_249 = 0x977165E9L;
                        l_216[2][0] = ((safe_add_func_uint16_t_u_u(l_249, l_216[0][0])) && l_212);
                    }
                }
                for (g_193 = 0; (g_193 >= 6); ++g_193)
                {
                    char l_261 = 0L;
                    union U0 l_269 = {0L};
                    g_91.f0 |= p_60;
                    for (p_60 = 0; (p_60 <= 0); p_60 += 1)
                    {
                        union U0 l_252 = {-1L};
                        unsigned l_262[7] = {0x533A9D29L,0x533A9D29L,0x4244690CL,0x533A9D29L,0x533A9D29L,0x4244690CL,0x533A9D29L};
                        int i;
                        l_216[2][0] |= (g_112[2] <= (func_84(g_242, l_252, g_168, (safe_rshift_func_int8_t_s_s((safe_sub_func_uint8_t_u_u(0x90L, (safe_unary_minus_func_uint32_t_u(4294967289UL)))), 1))) > p_60));
                        l_258--;
                        l_262[2]--;
                    }
                    for (g_242 = 0; (g_242 == 4); ++g_242)
                    {
                        l_214 = (safe_lshift_func_int8_t_s_u(func_84(g_219, g_154, (l_261 < func_84((func_84(p_60, l_269, g_219, l_270[0]) & 0x4AL), g_154, g_171, g_168)), l_261), 2));
                    }
                }
            }
            l_191 = (safe_unary_minus_func_uint8_t_u(((func_84((g_272[0] | l_67), l_273, g_6, (l_209 <= l_104.f0)) != p_60) > ((((((safe_add_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u(g_219, 7)), 65533UL)) | g_6) || g_222) == 0xD9L) == p_60) > (-5L)))));
        }
        return g_168;
    }
    else
    {
        int l_294 = 1L;
        int l_295 = 0x43B6D30FL;
        int l_296 = (-10L);
        int l_299[3];
        union U0 l_311 = {8L};
        int i;
        for (i = 0; i < 3; i++)
            l_299[i] = 0xA6A7B588L;
        if (((safe_mod_func_int8_t_s_s((safe_sub_func_uint8_t_u_u(l_188, 0xB6L)), p_60)) <= g_230))
        {
            union U0 l_287 = {1L};
            int l_297 = 0L;
            for (g_194 = 24; (g_194 != 24); ++g_194)
            {
                unsigned l_289 = 0xEDB1092CL;
                for (g_242 = 9; (g_242 >= 0); g_242 -= 1)
                {
                    int l_288 = 0L;
                    int i;
                    for (l_191 = 9; (l_191 >= 0); l_191 -= 1)
                    {
                        unsigned l_284 = 0x5496F96BL;
                        int i;
                        l_284 |= (-6L);
                        if (g_272[g_242])
                            continue;
                    }
                    l_288 = (g_272[g_242] >= ((safe_mod_func_int16_t_s_s(func_84(func_84(g_272[g_242], l_287, (g_20[5] & (g_193 && p_61)), l_288), g_154, g_219, p_60), l_289)) ^ g_272[g_242]));
                    l_288 = (((safe_lshift_func_uint8_t_u_s(((0x8798L >= p_61) == (safe_add_func_uint32_t_u_u(func_84((g_20[5] || (func_84(func_84(l_287.f0, g_91, g_91.f0, g_193), l_104, l_288, p_60) && g_154.f0)), g_154, p_60, l_294), 1L))), 4)) <= 4294967286UL) & 0x24EEF291L);
                }
            }
            g_300--;
            g_91.f0 = (g_20[5] ^ g_91.f0);
        }
        else
        {
            char l_320 = 0x73L;
            int l_324 = 0xCCA00BC2L;
            for (g_298 = 0; (g_298 < 28); g_298 = safe_add_func_int8_t_s_s(g_298, 4))
            {
                unsigned short l_312 = 0x5C62L;
                int l_337 = 0xEC10CD83L;
                l_312 = ((safe_mod_func_uint16_t_u_u(((safe_lshift_func_int16_t_s_u((func_84((safe_sub_func_uint32_t_u_u(g_242, (p_60 <= g_185[0]))), l_311, p_60, p_61) >= p_60), ((g_20[2] & g_6) ^ 0x56L))) ^ p_61), g_272[0])) >= p_61);
                if ((p_61 >= p_61))
                {
                    unsigned short l_315 = 0x8E5BL;
                    for (g_154.f0 = 2; (g_154.f0 >= 0); g_154.f0 -= 1)
                    {
                        int i;
                        l_191 &= (l_299[g_154.f0] == 0x88L);
                    }
                    for (g_222 = 0; (g_222 < 30); g_222 = safe_add_func_int8_t_s_s(g_222, 8))
                    {
                        g_154.f0 = (-1L);
                        if (l_315)
                            break;
                    }
                }
                else
                {
                    int l_316 = 0xF78D936CL;
                    g_317++;
                }
                l_324 = ((l_320 || (safe_sub_func_int8_t_s_s(0xE7L, (func_84(g_187, l_104, l_192[3], (~(0xE3C5A3DEL < g_171))) ^ l_299[0])))) && l_323[4][0]);
                for (g_230 = (-14); (g_230 == 40); g_230++)
                {
                    short l_334 = 0xD8A2L;
                    for (l_320 = (-8); (l_320 <= 4); l_320 = safe_add_func_int32_t_s_s(l_320, 3))
                    {
                        l_337 = (safe_sub_func_int16_t_s_s((safe_mod_func_int8_t_s_s((safe_unary_minus_func_int8_t_s((-6L))), l_334)), (safe_mod_func_int8_t_s_s(l_320, p_61))));
                    }
                    l_192[0] = l_312;
                    for (g_317 = 0; (g_317 <= 0); g_317 += 1)
                    {
                        int i, j;
                        return l_323[g_317][g_317];
                    }
                }
            }
            l_295 = p_61;
            l_324 = ((safe_mod_func_uint32_t_u_u(p_61, (l_296 && g_112[2]))) & l_320);
        }
    }
    return g_230;
}







static short func_84(unsigned char p_85, union U0 p_86, int p_87, char p_88)
{
    for (p_85 = 8; (p_85 <= 51); p_85 = safe_add_func_uint32_t_u_u(p_85, 2))
    {
        short l_94 = (-9L);
        p_86.f0 ^= (g_91.f0 || l_94);
        g_91.f0 = 0x40BBFB6FL;
        g_91.f0 = (safe_lshift_func_int16_t_s_u(g_6, 5));
    }
    return g_20[5];
}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_6, "g_6", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_20[i], "g_20[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_91.f0, "g_91.f0", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_112[i], "g_112[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_154.f0, "g_154.f0", print_hash_value);
    transparent_crc(g_168, "g_168", print_hash_value);
    transparent_crc(g_171, "g_171", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_185[i], "g_185[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_187, "g_187", print_hash_value);
    transparent_crc(g_193, "g_193", print_hash_value);
    transparent_crc(g_194, "g_194", print_hash_value);
    transparent_crc(g_219, "g_219", print_hash_value);
    transparent_crc(g_222, "g_222", print_hash_value);
    transparent_crc(g_230, "g_230", print_hash_value);
    transparent_crc(g_242, "g_242", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_272[i], "g_272[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_298, "g_298", print_hash_value);
    transparent_crc(g_300, "g_300", print_hash_value);
    transparent_crc(g_317, "g_317", print_hash_value);
    transparent_crc(g_385.f1, "g_385.f1", print_hash_value);
    transparent_crc(g_386.f0, "g_386.f0", print_hash_value);
    transparent_crc(g_386.f1, "g_386.f1", print_hash_value);
    transparent_crc(g_415, "g_415", print_hash_value);
    transparent_crc(g_416, "g_416", print_hash_value);
    transparent_crc(g_419, "g_419", print_hash_value);
    transparent_crc(g_420, "g_420", print_hash_value);
    transparent_crc(g_423, "g_423", print_hash_value);
    transparent_crc(g_433, "g_433", print_hash_value);
    transparent_crc(g_462, "g_462", print_hash_value);
    transparent_crc(g_463, "g_463", print_hash_value);
    transparent_crc(g_464, "g_464", print_hash_value);
    transparent_crc(g_465, "g_465", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 9; k++)
            {
                transparent_crc(g_468[i][j][k], "g_468[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_477, "g_477", print_hash_value);
    transparent_crc(g_495, "g_495", print_hash_value);
    transparent_crc(g_497, "g_497", print_hash_value);
    transparent_crc(g_547.f0, "g_547.f0", print_hash_value);
    transparent_crc(g_866, "g_866", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_875[i], "g_875[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_937[i], "g_937[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1116, "g_1116", print_hash_value);
    transparent_crc(g_1126, "g_1126", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_1162[i].f0, "g_1162[i].f0", print_hash_value);
        transparent_crc(g_1162[i].f1, "g_1162[i].f1", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1288, "g_1288", print_hash_value);
    transparent_crc(g_1297, "g_1297", print_hash_value);
    transparent_crc(g_1299, "g_1299", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
