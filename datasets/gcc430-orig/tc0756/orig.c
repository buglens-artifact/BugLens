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



static int g_11 = 0x29F58382L;
static int g_21 = 0x05524872L;
static int * volatile g_20 = &g_21;
static int g_24[5][3] = {{0x6728AD64L,0x6728AD64L,0x6728AD64L},{(-5L),0x19583E35L,(-5L)},{0x6728AD64L,0x6728AD64L,0x6728AD64L},{(-5L),0x19583E35L,(-5L)},{0x6728AD64L,0x6728AD64L,0x6728AD64L}};
static int *g_58 = (void*)0;
static volatile int g_61 = (-1L);
static int g_62[10] = {0L,0L,0L,0L,0L,0L,0L,0L,0L,0L};
static volatile int g_65 = 4L;
static volatile int g_66 = 0L;
static int g_67[7][3][2] = {{{(-1L),6L},{0x296D7DE8L,6L},{(-1L),0x496EB75EL}},{{0x496EB75EL,(-1L)},{6L,0x296D7DE8L},{6L,(-1L)}},{{0x496EB75EL,0x496EB75EL},{(-1L),6L},{0x296D7DE8L,6L}},{{(-1L),0x496EB75EL},{0x496EB75EL,3L},{0x296D7DE8L,8L}},{{0x296D7DE8L,3L},{6L,6L},{3L,0x296D7DE8L}},{{8L,0x296D7DE8L},{3L,6L},{6L,3L}},{{0x296D7DE8L,8L},{0x296D7DE8L,3L},{6L,6L}}};
static volatile int g_70 = (-1L);
static int g_71[3][3][10] = {{{0xA9801335L,0x7233D1AAL,0x170AF284L,(-1L),7L,(-1L),0xA9801335L,0xA9801335L,(-1L),7L},{0x7233D1AAL,0x9330BF87L,0x9330BF87L,0x7233D1AAL,0xBFAC555CL,0xD813D139L,7L,2L,0x9330BF87L,0xA9801335L},{0xBFAC555CL,0xA9801335L,1L,0x99E5BE97L,(-1L),1L,0x9330BF87L,7L,0x9330BF87L,1L}},{{(-1L),0x7233D1AAL,0x152693CEL,0x7233D1AAL,(-1L),(-6L),7L,(-1L),(-1L),(-1L)},{7L,0xBFAC555CL,0x99E5BE97L,(-1L),4L,0xD813D139L,(-1L),0xBFAC555CL,0xBFAC555CL,(-1L)},{2L,(-1L),1L,1L,(-1L),2L,0x99E5BE97L,0x7233D1AAL,0xD813D139L,1L}},{{0xA9801335L,7L,(-1L),7L,(-1L),0x152693CEL,7L,0xA9801335L,0x170AF284L,0xA9801335L},{0xA9801335L,2L,0xBFAC555CL,(-1L),0x99E5BE97L,4L,0x7233D1AAL,2L,4L,(-1L)},{4L,0x7233D1AAL,2L,4L,(-1L),0x9330BF87L,0x99E5BE97L,0x5DA263B4L,2L,2L}}};
static int g_96 = 0xD9AD9C27L;
static int g_99 = 0x7AEC3750L;
static volatile int g_235 = 1L;
static volatile int g_237 = 0xE6147405L;
static int * volatile *g_306 = &g_58;
static int * volatile * const *g_305[2] = {&g_306,&g_306};
static const int *g_320 = &g_96;
static const int * const *g_319 = &g_320;
static int * volatile g_350 = &g_62[6];
static volatile unsigned short g_363 = 0x1CE1L;
static int g_541 = 0x0E56FCFCL;
static char g_551[6][5] = {{0L,0x50L,0x70L,0x70L,0x50L},{0x50L,0x43L,0L,0x50L,0x70L},{0x29L,0x50L,(-1L),0x50L,0x29L},{0L,(-4L),0x43L,0x70L,(-4L)},{0x29L,0x43L,0x43L,0x29L,0x70L},{0x50L,0x29L,(-1L),(-4L),(-4L)}};
static unsigned g_553[8] = {0x5CB31878L,0UL,0x5CB31878L,0UL,0x5CB31878L,0UL,0x5CB31878L,0UL};
static short g_557 = 0x3A23L;
static volatile int g_596[9][9][3] = {{{(-1L),1L,(-7L)},{9L,(-4L),0x9E6F6DF3L},{0L,0xCDB8FC15L,0x5F9E022BL},{0x3DA9F5A9L,1L,0xD4AC49C0L},{0x7A62D9F0L,0L,0x107AB3A1L},{(-3L),0L,0x327DDD6CL},{0xFF27FE8FL,0x9B838741L,0L},{0x54CB4958L,0x256D2C9AL,(-1L)},{0x835AC4FAL,0L,0L}},{{1L,0L,0x5BC4DAC3L},{0L,1L,0L},{0x107AB3A1L,0x9E6F6DF3L,0x3DA9F5A9L},{2L,0x89009027L,0x2C5576D7L},{0xD4AC49C0L,0xE46FCE11L,(-4L)},{0xD4AC49C0L,0x81F037CFL,(-1L)},{0x3CF4F4B3L,0x89009027L,0xFF27FE8FL},{0xA4800508L,(-3L),0xE46FCE11L},{0x41FBD551L,0x5BC4DAC3L,0x43FF2185L}},{{0x7A62D9F0L,0L,1L},{0L,1L,0x3DA9F5A9L},{0xCDB8FC15L,1L,0x5F9E022BL},{0x804E01FDL,0x4AAB7B51L,0xCDB8FC15L},{0x2D8DB450L,0L,(-3L)},{0L,(-7L),0xFC5F10B9L},{(-3L),0xFF27FE8FL,0x107AB3A1L},{0x1125F944L,0x759473F8L,0L},{0x2C5576D7L,0x10695F97L,0L}},{{2L,(-9L),0L},{0L,(-9L),1L},{1L,0x10695F97L,(-1L)},{0x21676DEBL,0x759473F8L,1L},{1L,0xFF27FE8FL,1L},{2L,(-7L),0x804E01FDL},{(-1L),0L,0xF358C66BL},{1L,0x4AAB7B51L,(-3L)},{5L,1L,0xA4800508L}},{{1L,1L,0xE3675AF6L},{3L,0L,0x81F037CFL},{0x5BC4DAC3L,0x5BC4DAC3L,0L},{(-1L),(-3L),0x256D2C9AL},{0xE46FCE11L,0x89009027L,(-1L)},{(-1L),0x81F037CFL,(-9L)},{0x3DA9F5A9L,0xE46FCE11L,(-1L)},{(-1L),0x9197CDA0L,0x256D2C9AL},{0xDA5B1E0AL,0x1AB3827AL,0L}},{{0xAF8EA58EL,(-3L),1L},{0xD4AC49C0L,(-1L),0x54CB4958L},{(-1L),(-7L),1L},{0x804E01FDL,0xA35BEF29L,6L},{0x835AC4FAL,0xDA5B1E0AL,0xA4800508L},{0xCB2F5660L,3L,0L},{0xD5878FCBL,0x5F9E022BL,1L},{(-4L),0x9197CDA0L,0x2C5576D7L},{1L,0x41FBD551L,0x3CF4F4B3L}},{{0x5BC4DAC3L,0x2C5576D7L,5L},{0xE3675AF6L,0xF358C66BL,0x10695F97L},{0xE3675AF6L,(-4L),1L},{0x5BC4DAC3L,0xFF27FE8FL,0L},{1L,1L,0xFF27FE8FL},{(-4L),0xA0A68BADL,0L},{0xD5878FCBL,0xD4AC49C0L,(-1L)},{0xCB2F5660L,0x389E80FEL,0x107AB3A1L},{0x835AC4FAL,(-9L),0x804E01FDL}},{{0x804E01FDL,0x1125F944L,0x41FBD551L},{(-1L),0L,1L},{0xD4AC49C0L,0x327DDD6CL,0x327DDD6CL},{0xAF8EA58EL,(-1L),0x81F037CFL},{0x9197CDA0L,1L,0x835AC4FAL},{0x389E80FEL,2L,(-4L)},{0x41FBD551L,9L,0L},{0x3DA9F5A9L,2L,0x1DED5FFEL},{0x81F037CFL,1L,0x4AAB7B51L}},{{0x7A62D9F0L,(-1L),(-7L)},{1L,0x327DDD6CL,(-9L)},{2L,0L,(-1L)},{0x89009027L,0x1125F944L,(-3L)},{0L,(-9L),0xA4800508L},{0x89009027L,0x81F037CFL,2L},{9L,0x3CF4F4B3L,(-1L)},{0x54CB4958L,0xAF8EA58EL,0x759473F8L},{0xD5878FCBL,0x89009027L,(-9L)}}};
static short g_613[8] = {0L,0L,0L,0L,0L,0L,0L,0L};
static unsigned g_614 = 0x601AC079L;
static unsigned short g_673 = 65535UL;
static const int ** volatile g_686 = &g_320;
static const int ** volatile g_704 = &g_320;
static volatile unsigned short g_813 = 6UL;
static int g_830 = (-1L);
static unsigned short g_926 = 0UL;
static int * volatile g_927[1][4][7] = {{{&g_62[2],&g_62[2],(void*)0,&g_62[2],&g_62[2],(void*)0,&g_62[2]},{&g_99,(void*)0,&g_541,&g_67[3][1][1],&g_541,(void*)0,&g_99},{&g_71[2][2][8],&g_62[2],&g_71[2][2][8],&g_71[2][2][8],&g_62[2],&g_71[2][2][8],&g_71[2][2][8]},{&g_99,&g_67[3][1][1],&g_96,&g_67[3][1][1],&g_99,&g_71[1][0][7],&g_99}}};
static int * volatile g_928 = &g_67[3][1][1];
static int * volatile g_943 = &g_24[1][0];
static unsigned char g_1005[1] = {0UL};
static const int ** volatile g_1102 = (void*)0;
static const int ** volatile g_1187 = &g_320;
static const int ** volatile g_1244 = &g_320;
static int g_1354 = 0xCCF54B69L;
static volatile int g_1357 = (-1L);
static const int ** volatile g_1390 = &g_320;
static char g_1415 = 0xB6L;
static const int ** volatile g_1420 = &g_320;
static const int ** volatile g_1422 = (void*)0;
static const int ** volatile g_1423 = &g_320;
static const int ** volatile g_1512 = (void*)0;



static const unsigned char func_1(void);
static int func_14(short p_15);
static short func_16(unsigned char p_17, char p_18);
static int * func_30(char p_31);
static short func_44(int * p_45, unsigned p_46, unsigned p_47, int * p_48, int p_49);
static char func_54(short p_55, unsigned p_56, char p_57);
static int func_59(int * p_60);
static const int * func_78(int * p_79, char p_80, unsigned p_81, int * p_82);
static int * func_83(unsigned short p_84, short p_85, unsigned short p_86);
static unsigned char func_92(unsigned p_93);
static const unsigned char func_1(void)
{
    unsigned char l_10[8][9] = {{0xAEL,5UL,0xAEL,0xF8L,5UL,0x3FL,0x3FL,5UL,0xF8L},{0xB9L,0UL,0xB9L,255UL,0UL,249UL,249UL,0UL,255UL},{0xAEL,5UL,0xAEL,0xF8L,5UL,0x3FL,0x3FL,5UL,0xF8L},{0xB9L,0UL,0xB9L,255UL,0UL,249UL,249UL,0UL,255UL},{0xAEL,5UL,0xAEL,0xF8L,5UL,0x3FL,0x3FL,5UL,0xF8L},{0xB9L,247UL,255UL,249UL,247UL,0xB9L,0xB9L,247UL,249UL},{0xF8L,0UL,0xF8L,0x3FL,0UL,0xAEL,0xAEL,0UL,0x3FL},{255UL,247UL,255UL,249UL,247UL,0xB9L,0xB9L,247UL,249UL}};
    int l_828 = 0x7ADFAD4CL;
    int **l_852 = &g_58;
    unsigned short l_866[7] = {0x2C51L,65535UL,0x2C51L,0x2C51L,65535UL,0x2C51L,0x2C51L};
    unsigned l_882 = 1UL;
    unsigned short l_890 = 65535UL;
    int **l_902 = &g_58;
    unsigned char l_980[3];
    int l_1004[3][5];
    unsigned char l_1028 = 255UL;
    int l_1051 = 3L;
    unsigned l_1052 = 0UL;
    int ***l_1086 = &l_902;
    const int * const l_1109 = &g_67[3][1][1];
    int l_1121[5] = {0L,0L,0L,0L,0L};
    int l_1143 = 0L;
    unsigned l_1165 = 4294967294UL;
    int l_1361 = 0xA8834C6BL;
    int l_1388 = (-1L);
    int * const l_1510 = &g_67[3][0][0];
    int i, j;
    for (i = 0; i < 3; i++)
        l_980[i] = 255UL;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
            l_1004[i][j] = 0L;
    }
lbl_1265:
    if (((0x77L < ((safe_rshift_func_uint16_t_u_u(((safe_rshift_func_uint16_t_u_s((safe_mod_func_uint32_t_u_u((safe_sub_func_int16_t_s_s(l_10[7][4], (((g_11 > 65527UL) | (safe_add_func_int32_t_s_s(l_10[6][4], func_14(func_16(l_10[3][4], l_10[0][4]))))) <= l_10[1][2]))), 4294967295UL)), l_10[5][2])) > l_10[7][5]), 7)) != 0x62L)) != 1UL))
    {
        unsigned l_838[6][2];
        int **l_877 = &g_58;
        const short l_896[7][7] = {{4L,4L,4L,4L,4L,4L,4L},{0x43E9L,0x43E9L,0x43E9L,0x43E9L,0x43E9L,0x43E9L,0x43E9L},{4L,4L,4L,4L,4L,4L,4L},{0x43E9L,0x43E9L,0x43E9L,0x43E9L,0x43E9L,0x43E9L,0x43E9L},{4L,4L,4L,4L,4L,4L,4L},{0x43E9L,0x43E9L,0x43E9L,0x43E9L,0x43E9L,0x43E9L,0x43E9L},{4L,4L,4L,4L,4L,4L,4L}};
        int l_940 = 0L;
        int l_973[5] = {7L,7L,7L,7L,7L};
        int l_992 = 0x3EFDF89AL;
        unsigned short l_1018 = 65535UL;
        int i, j;
        for (i = 0; i < 6; i++)
        {
            for (j = 0; j < 2; j++)
                l_838[i][j] = 0UL;
        }
        if (l_10[4][6])
        {
            int *l_821 = &g_96;
            int *l_822 = &g_24[3][2];
            int *l_823 = &g_99;
            int *l_824 = &g_62[8];
            int *l_825 = &g_67[3][1][1];
            int *l_826 = &g_99;
            int *l_827 = (void*)0;
            int *l_829[7][6];
            unsigned l_831 = 5UL;
            int **l_840 = &l_822;
            int ***l_839 = &l_840;
            int i, j;
            for (i = 0; i < 7; i++)
            {
                for (j = 0; j < 6; j++)
                    l_829[i][j] = &g_67[3][1][1];
            }
            --l_831;
            if ((((safe_rshift_func_uint16_t_u_u(65535UL, 2)) || ((*g_350) <= l_838[5][0])) && (g_551[4][1] != func_92((l_839 != (void*)0)))))
            {
                int **l_851 = &l_824;
                for (l_828 = 0; (l_828 == (-20)); --l_828)
                {
                    unsigned char l_853 = 0UL;
                    (*l_823) = (!(safe_add_func_int32_t_s_s(0x4AC92FC1L, (safe_sub_func_int16_t_s_s(g_237, ((safe_add_func_uint16_t_u_u((+func_92(g_673)), ((safe_mul_func_int8_t_s_s(0L, (l_851 != l_852))) != ((g_557 < l_853) | 0UL)))) != g_71[2][2][5]))))));
                }
            }
            else
            {
                int l_863 = 0xBA94D206L;
                int *l_867 = &g_67[3][2][1];
                for (g_11 = 24; (g_11 >= 29); g_11++)
                {
                    int l_858 = 0x98D55DA4L;
                    (*g_350) |= l_838[5][0];
                    l_867 = func_83(((safe_add_func_int16_t_s_s(g_551[4][3], 0x873CL)) || l_858), ((safe_add_func_int8_t_s_s((safe_sub_func_uint8_t_u_u(((&g_319 != (void*)0) | l_863), ((*g_20) == 4294967295UL))), func_92((safe_mod_func_uint16_t_u_u(((g_11 & l_838[5][0]) || l_866[3]), 0x29B4L))))) || 65535UL), g_613[0]);
                }
                (**l_840) = 0x0E7C5187L;
                if ((safe_rshift_func_int16_t_s_u(g_557, g_363)))
                {
                    return g_541;
                }
                else
                {
                    unsigned l_870 = 4294967292UL;
                    l_870++;
                }
            }
            (**l_840) = (safe_sub_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u((*l_826), (*l_825))), (((l_877 == l_852) >= func_92((safe_lshift_func_uint16_t_u_u((1UL >= g_70), 6)))) ^ (func_92((((safe_sub_func_int32_t_s_s((*g_320), 4294967286UL)) > l_882) <= 0UL)) ^ (*l_824)))));
            (*l_825) ^= (*l_824);
        }
        else
        {
            char l_904[8][7][4] = {{{0x32L,0x49L,5L,1L},{0L,0L,0x49L,0L},{4L,5L,0L,0L},{0x49L,0xAFL,0xEDL,0x3DL},{0L,0xEDL,0L,0L},{0L,0x1DL,0xEDL,0x6BL},{0x49L,0L,0L,0x49L}},{{4L,1L,0x49L,0xF6L},{0L,0x6BL,(-6L),1L},{0x55L,0x3DL,5L,1L},{1L,0x6BL,0x32L,0xF6L},{0x1DL,1L,0x1DL,0x49L},{5L,0L,0L,0x6BL},{1L,0x1DL,0xF6L,0L}},{{0L,0xEDL,0xF6L,0x3DL},{1L,0xAFL,0L,0L},{5L,5L,0x1DL,0L},{0x1DL,0L,0x32L,1L},{1L,0L,5L,0x32L},{0x55L,0L,(-6L),1L},{0L,0L,0x49L,0L}},{{4L,5L,0L,0L},{0x49L,0xAFL,0xEDL,0x3DL},{0L,0xEDL,0L,0L},{0L,0x1DL,0xEDL,0L},{0xEDL,0x6BL,0x6BL,0xEDL},{0xF6L,0x61L,0xEDL,(-6L)},{0x1DL,0L,0x55L,0x3DL}},{{0L,5L,0x32L,0x3DL},{0x61L,0L,0x49L,(-6L)},{1L,0x61L,1L,0xEDL},{0x32L,0x6BL,1L,0L},{0x3DL,1L,(-6L),0x6BL},{4L,0xAFL,(-6L),5L},{0x3DL,0L,1L,1L}},{{0x32L,0x32L,1L,4L},{1L,4L,0x49L,0x61L},{0x61L,0x1DL,0x32L,0x49L},{0L,0x1DL,0x55L,0x61L},{0x1DL,4L,0xEDL,4L},{0xF6L,0x32L,0x6BL,1L},{0xEDL,0L,0xAFL,5L}},{{1L,0xAFL,0x1DL,0x6BL},{1L,1L,0xAFL,0L},{0xEDL,0x6BL,0x6BL,0xEDL},{0xF6L,0x61L,0xEDL,(-6L)},{0x1DL,0L,0x55L,0x3DL},{0L,5L,0x32L,0x3DL},{0x61L,0L,0L,0L}},{{4L,0xEDL,4L,0x1DL},{0x55L,5L,0x49L,0x32L},{0xF6L,4L,0L,5L},{0L,1L,0L,(-6L)},{0xF6L,0x3DL,0x49L,0x49L},{0x55L,0x55L,4L,0L},{4L,0L,0L,0xEDL}}};
            short l_914 = 1L;
            int *l_945 = &l_828;
            int *l_987 = &g_67[6][2][0];
            unsigned l_1025 = 2UL;
            int i, j, k;
lbl_885:
            (*g_20) = 0xC9BD0B9EL;
            for (g_614 = 1; (g_614 >= 20); g_614++)
            {
                unsigned char l_897[9] = {0UL,0xCAL,0xCAL,0UL,0xCAL,0xCAL,0UL,0xCAL,0xCAL};
                int **l_903 = &g_58;
                int i;
                if ((**g_686))
                {
                    int l_891 = 0xE8F14C7DL;
                    for (g_541 = 1; (g_541 <= 4); g_541 += 1)
                    {
                        if (g_557)
                            goto lbl_885;
                        l_897[6] = (safe_add_func_int16_t_s_s((safe_sub_func_uint8_t_u_u((((g_596[0][0][0] ^ l_890) <= g_62[2]) ^ l_891), (0UL != (((l_838[5][0] <= 0x1EL) <= (0xBA90L <= (safe_mod_func_int8_t_s_s(l_896[2][2], (-5L))))) & l_891)))), 0xC7F4L));
                    }
                }
                else
                {
                    unsigned l_900 = 0x1A0E400FL;
                    int **l_901 = &g_58;
                    int l_905[10] = {(-7L),9L,9L,(-7L),9L,9L,(-7L),9L,9L,(-7L)};
                    int i;
                    l_905[8] &= (safe_add_func_int8_t_s_s(l_900, ((((void*)0 != l_901) && ((!(l_902 != l_903)) && (~g_596[0][0][0]))) != l_904[0][0][0])));
                    for (g_830 = 0; (g_830 > 6); g_830 = safe_add_func_int32_t_s_s(g_830, 9))
                    {
                        int l_908 = 0x8E561E09L;
                        int *l_909 = &g_67[3][1][1];
                        (*l_909) |= l_908;
                    }
                    for (g_11 = (-7); (g_11 > 10); g_11 = safe_add_func_int32_t_s_s(g_11, 9))
                    {
                        int *l_915 = &g_62[2];
                        (*l_915) = (safe_mul_func_int8_t_s_s(l_897[6], l_914));
                    }
                }
                if ((g_24[1][1] != (safe_rshift_func_uint16_t_u_u((safe_mul_func_int16_t_s_s(g_237, (safe_add_func_uint8_t_u_u(g_614, (((void*)0 == &l_902) && (g_551[5][0] >= 0L)))))), (g_71[2][0][7] == (safe_sub_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s(g_830, 3)), l_904[4][0][2])))))))
                {
                    unsigned l_933[5][7] = {{0x413BFF2DL,0UL,4294967295UL,4294967287UL,4294967295UL,0UL,0x413BFF2DL},{0x1EF3752EL,0x50AF2602L,0x661667A1L,0UL,0x661667A1L,0x50AF2602L,0x1EF3752EL},{0x413BFF2DL,0UL,4294967295UL,4294967287UL,4294967295UL,0UL,0x413BFF2DL},{0x1EF3752EL,0x50AF2602L,0x661667A1L,0UL,0x661667A1L,0x50AF2602L,0x1EF3752EL},{0x413BFF2DL,0UL,4294967295UL,4294967287UL,4294967295UL,0UL,0x413BFF2DL}};
                    unsigned l_939[1][5][2];
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 5; j++)
                        {
                            for (k = 0; k < 2; k++)
                                l_939[i][j][k] = 1UL;
                        }
                    }
                    (*g_928) = ((func_54(g_65, g_24[1][0], (&l_877 == (void*)0)) != g_926) ^ g_830);
                    if (l_897[3])
                        continue;
                    for (g_557 = 0; (g_557 < (-11)); g_557--)
                    {
                        unsigned l_936 = 0xC6BAA666L;
                        (*g_306) = func_30(g_551[5][0]);
                        if (l_939[0][0][0])
                            continue;
                        if (g_541)
                            goto lbl_885;
                        return (**l_877);
                    }
                    l_940 = (**g_686);
                }
                else
                {
                    char l_944[10][3][3] = {{{0xF0L,0xACL,0x8DL},{0x65L,0x4CL,0x4CL},{0xF0L,0xACL,0x8DL}},{{0x65L,0x4CL,0x4CL},{0xF0L,0xACL,0x8DL},{0x65L,0x4CL,0x4CL}},{{0xF0L,0xACL,0x8DL},{0x65L,0x4CL,0x4CL},{0xF0L,0xACL,0x8DL}},{{0x65L,0x4CL,0x4CL},{0xF0L,0xACL,0x8DL},{0x65L,0x4CL,0x4CL}},{{0xF0L,0xACL,0x8DL},{0x65L,0x4CL,0x4CL},{0xF0L,0xACL,0x8DL}},{{0x65L,0x4CL,0x4CL},{0xF0L,0xACL,0x8DL},{0x65L,0x4CL,0x4CL}},{{0xF0L,0xACL,0x8DL},{0x65L,0x4CL,0x4CL},{0xF0L,0xACL,0x8DL}},{{0x65L,0x4CL,0x4CL},{0xF0L,0xACL,0x8DL},{0x65L,0x4CL,0x4CL}},{{0xF0L,0xACL,0x8DL},{0x65L,0x4CL,0x4CL},{0xF0L,0xACL,0x8DL}},{{0x65L,0x4CL,0x4CL},{0xF0L,0xACL,0x8DL},{0x65L,0x4CL,0x4CL}}};
                    int i, j, k;
                    for (l_914 = 0; (l_914 == (-25)); --l_914)
                    {
                        if (g_926)
                            goto lbl_885;
                        (*g_306) = &l_940;
                    }
                    for (g_21 = 0; (g_21 <= 9); g_21 += 1)
                    {
                        int i;
                        (*g_943) = (&g_62[g_21] == (void*)0);
                    }
                    if (l_944[5][0][0])
                        continue;
                }
            }
            (*l_877) = l_945;
            for (g_614 = (-2); (g_614 > 41); g_614++)
            {
                unsigned short l_952 = 0xBBCCL;
                unsigned l_957 = 0x139B79EAL;
                unsigned short l_963 = 0xAE29L;
                int l_979 = 0x5E629B05L;
            }
        }
    }
    else
    {
        int *l_1040 = &g_96;
        int ***l_1049 = &l_902;
        int **l_1072 = &g_58;
        int l_1115 = 9L;
        short l_1138 = 0x3579L;
        int l_1139 = 0xF148C470L;
        int l_1140 = 0x0DE1A656L;
        int l_1141 = (-7L);
        int l_1142[6] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
        unsigned short l_1144 = 0x8551L;
        int *l_1230 = &l_1051;
        unsigned l_1231[1];
        int i;
        for (i = 0; i < 1; i++)
            l_1231[i] = 0x7A91AB8DL;
        for (l_828 = 0; (l_828 < (-17)); l_828 = safe_sub_func_uint8_t_u_u(l_828, 7))
        {
            const unsigned char l_1045[2][1][5] = {{{1UL,1UL,1UL,1UL,1UL}},{{1UL,1UL,1UL,1UL,1UL}}};
            int l_1070 = (-1L);
            int *l_1071 = &g_71[1][2][1];
            unsigned char l_1073 = 255UL;
            int l_1132[9][2][1] = {{{0L},{(-1L)}},{{0x87AFC98FL},{(-1L)}},{{0L},{(-1L)}},{{0x87AFC98FL},{(-1L)}},{{0L},{(-1L)}},{{0x87AFC98FL},{(-1L)}},{{0L},{(-1L)}},{{0x87AFC98FL},{(-1L)}},{{0L},{(-1L)}}};
            int *l_1136 = (void*)0;
            int *l_1137[2];
            short l_1153 = 0xF2A7L;
            int ***l_1158 = &l_902;
            int i, j, k;
            for (i = 0; i < 2; i++)
                l_1137[i] = &g_62[6];
            if ((l_1040 == (*g_686)))
            {
                int ** const *l_1048 = &l_852;
                int l_1055[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_1055[i] = 0xA2958DFAL;
                for (g_926 = 21; (g_926 <= 33); ++g_926)
                {
                    for (g_99 = 0; (g_99 >= (-8)); g_99 = safe_sub_func_int32_t_s_s(g_99, 3))
                    {
                        if ((**g_686))
                            break;
                        if ((*l_1040))
                            break;
                        return l_1045[1][0][3];
                    }
                }
                for (g_99 = 8; (g_99 >= 0); g_99 -= 1)
                {
                    unsigned char l_1050 = 0x5DL;
                    int i;
                    l_1051 ^= ((g_237 ^ func_92((((&g_306 != l_1048) && 1UL) == (0xD8897BA7L <= ((l_1049 == &l_852) & (*g_320)))))) != l_1050);
                    if (l_1052)
                    {
                        return g_551[5][0];
                    }
                    else
                    {
                        (*l_1040) ^= ((safe_mod_func_int8_t_s_s((func_92(l_1055[0]) | (func_92(g_21) | (g_24[3][1] > g_541))), 0x93L)) < func_92((l_1045[1][0][3] > (l_1045[1][0][3] && l_1045[1][0][0]))));
                        if (l_1050)
                            break;
                        if (l_1045[1][0][3])
                            break;
                    }
                    for (g_65 = 0; g_65 < 2; g_65 += 1)
                    {
                        g_305[g_65] = (void*)0;
                    }
                }
                if ((safe_sub_func_uint32_t_u_u((g_813 > (safe_mul_func_int8_t_s_s((safe_mod_func_int16_t_s_s((-1L), (safe_add_func_uint32_t_u_u(func_92(g_551[5][0]), (g_551[5][0] && (((safe_rshift_func_uint16_t_u_s((g_21 | (safe_lshift_func_int16_t_s_s((((*l_1048) != (*l_1049)) | ((safe_mod_func_uint32_t_u_u(0xF78DF880L, 0x7A43C74AL)) <= l_1070)), g_613[1]))), g_926)) >= (*l_1040)) >= l_1045[0][0][3])))))), 0x97L))), g_24[0][0])))
                {
                    unsigned short l_1087 = 0xFB0DL;
                    if ((l_1070 != g_67[4][1][0]))
                    {
                        (*g_943) = (g_71[2][2][5] > 0x75L);
                        l_1071 = func_30(g_830);
                        (*l_1040) = (g_70 && ((*l_1049) == l_1072));
                        (*l_1071) = (-10L);
                    }
                    else
                    {
                        short l_1074 = 0xCBE4L;
                        const int l_1075 = 0x5792FC24L;
                        (*l_1071) = l_1073;
                        (*l_1040) = l_1074;
                        (*l_1071) = func_14((g_24[3][0] | l_1075));
                        (**l_1049) = func_30(l_1074);
                    }
                    for (l_1070 = 0; (l_1070 < (-24)); --l_1070)
                    {
                        (*l_1040) ^= (g_613[1] && (func_92((safe_mod_func_uint8_t_u_u(g_71[1][0][7], (0x66ACL || (safe_mul_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((0x155E39C9L > ((safe_rshift_func_int8_t_s_s(((void*)0 != l_1086), 5)) && ((g_614 >= g_613[1]) & g_67[3][1][1]))), g_363)), 1UL)))))) <= l_1087));
                        if ((*l_1071))
                            continue;
                    }
                    (*l_852) = func_83(g_1005[0], l_1055[1], g_70);
                }
                else
                {
                    int l_1094 = (-1L);
                    int *l_1111 = (void*)0;
                    int *l_1112 = (void*)0;
                    int *l_1113 = (void*)0;
                    int *l_1114 = &g_62[6];
                    int *l_1116 = (void*)0;
                    int *l_1117 = &g_62[2];
                    int *l_1118 = &g_67[3][1][1];
                    int *l_1119 = &l_1115;
                    int *l_1120 = &g_71[1][0][7];
                    int *l_1122 = &g_67[3][1][1];
                    int *l_1123 = (void*)0;
                    int *l_1124 = (void*)0;
                    int *l_1125 = (void*)0;
                    int *l_1126 = (void*)0;
                    int *l_1127 = &l_1115;
                    int *l_1128 = &g_71[1][2][2];
                    int *l_1129 = &l_1121[2];
                    int *l_1130 = &l_1121[3];
                    int *l_1131[1][6][5] = {{{&l_1115,&l_1094,&l_1051,&l_1115,&g_62[9]},{&l_1121[3],&l_1051,&l_1051,&l_1121[3],&g_99},{&l_1121[3],&l_1094,&g_21,&l_1121[3],&g_62[9]},{&l_1115,&l_1094,&l_1051,&l_1115,&g_62[9]},{&l_1121[3],&l_1051,&l_1051,&l_1121[3],&g_99},{&l_1121[3],&l_1094,&g_21,&l_1121[3],&g_62[9]}}};
                    unsigned short l_1133 = 0xDFA1L;
                    int i, j, k;
                    for (g_614 = 0; (g_614 > 44); ++g_614)
                    {
                        const int **l_1099[6];
                        int i;
                        for (i = 0; i < 6; i++)
                            l_1099[i] = (void*)0;
                        (*l_1040) = ((g_553[2] == (safe_sub_func_uint8_t_u_u(func_54((safe_add_func_int16_t_s_s(0L, func_92(g_596[3][2][0]))), l_1094, (safe_add_func_uint16_t_u_u(g_67[3][1][1], (safe_sub_func_int16_t_s_s(g_1005[0], ((*g_319) != (*g_319))))))), g_541))) != g_11);
                        (*g_686) = func_78(func_30(g_1005[0]), (*l_1071), g_99, &g_96);
                        return l_1094;
                    }
                    for (g_21 = 0; (g_21 <= 21); g_21++)
                    {
                        const int **l_1103 = &g_320;
                        (*l_1103) = (*g_704);
                    }
                    if (l_1094)
                    {
                        return g_237;
                    }
                    else
                    {
                        char l_1108[9][7][4] = {{{0L,0L,0xD3L,0xB9L},{(-1L),(-1L),0x2FL,4L},{0x23L,0x11L,(-9L),0x39L},{0x36L,0xC0L,1L,0x6DL},{0x9FL,(-1L),1L,0x6EL},{0x14L,0xB7L,0x51L,0x80L},{0xCCL,0x7CL,1L,(-1L)}},{{3L,9L,0x69L,0x13L},{1L,2L,0L,4L},{(-1L),0x07L,4L,0x21L},{9L,0x36L,1L,0x60L},{0xB9L,0xC1L,(-10L),0L},{0x5FL,4L,0xB9L,0x56L},{0xC2L,0xCCL,(-1L),0x13L}},{{0xC1L,0x8EL,0x1FL,1L},{0xCCL,0x85L,0xCCL,0x5DL},{(-1L),0x7CL,0x7CL,(-1L)},{0x31L,(-9L),0x7FL,0x7CL},{1L,0xC8L,0x7FL,0L},{0x31L,0L,0x7CL,0L},{(-1L),0L,0xCCL,0xF9L}},{{0xCCL,0xF9L,0x1FL,0x44L},{0xC1L,0x80L,(-1L),1L},{0xC2L,0xB7L,0xB9L,1L},{0x5FL,(-1L),3L,(-1L)},{0x7CL,(-1L),4L,0L},{0x80L,5L,0x48L,0xFCL},{(-10L),0L,0xB0L,0xC2L}},{{(-1L),0x22L,0x85L,3L},{0x23L,0x85L,0xC1L,1L},{0xC2L,0L,0x11L,0xB9L},{1L,1L,0xFCL,1L},{0L,1L,(-6L),6L},{(-9L),(-1L),0x7CL,4L},{0xB0L,0L,0x68L,0x22L}},{{0L,0xC8L,3L,(-6L)},{0x5DL,0L,0x48L,3L},{0x4DL,0x39L,0x85L,1L},{1L,0x13L,0x14L,0x59L},{0L,0x7CL,(-9L),0xB7L},{(-1L),0xB9L,0x31L,0xC7L},{0x2FL,0x13L,0x07L,3L}},{{1L,(-1L),(-1L),(-6L)},{0x6DL,0xF9L,0x60L,(-1L)},{0x7CL,(-9L),1L,1L},{0xD6L,0xD6L,(-1L),0xA7L},{0x0AL,(-4L),0xC0L,0L},{(-1L),0x1FL,0x32L,0xC0L},{(-1L),0x1FL,1L,0L}},{{0x1FL,(-4L),1L,0xA7L},{0x11L,0xD6L,0x48L,1L},{3L,(-9L),0xB6L,(-1L)},{(-9L),0xF9L,0x36L,(-6L)},{0x7FL,(-1L),0x60L,3L},{0xE0L,0x13L,0x85L,0xC7L},{3L,0xB9L,1L,0xB7L}},{{0x13L,0x7CL,0xC2L,0x59L},{0x9FL,0x13L,0x13L,1L},{0x2FL,0x39L,0x80L,3L},{0xD6L,0L,0x3BL,(-1L)},{1L,0x6EL,0x32L,0xC1L},{9L,0x6FL,(-6L),1L},{0xC1L,1L,0x44L,0L}}};
                        const int **l_1110 = &g_320;
                        int i, j, k;
                        (*g_350) = (*g_20);
                        if (l_1094)
                            break;
                        (*g_928) = (((safe_sub_func_int32_t_s_s(l_1094, (safe_sub_func_uint16_t_u_u(l_1108[3][2][0], ((void*)0 == &g_306))))) == (g_70 <= (0x7641L >= ((void*)0 == l_1048)))) || func_59(func_30(((&l_1094 != l_1109) < (**g_319)))));
                        (*l_1110) = (*g_704);
                    }
                    l_1133++;
                }
            }
            else
            {
                (*l_902) = (void*)0;
            }
            --l_1144;
            (*l_1071) = ((0x4A61L | ((*l_1040) || (safe_rshift_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s((&l_1072 != &g_704), 3)), (g_96 && ((safe_add_func_int8_t_s_s(func_14(g_71[1][0][7]), l_1153)) ^ (safe_sub_func_int32_t_s_s((safe_rshift_func_uint16_t_u_u((l_1158 != l_1158), 11)), 0x515093D4L)))))))) <= g_11);
        }
        if (((g_673 & (*l_1040)) | (safe_sub_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u(g_596[0][0][0], (g_830 > ((*l_1040) && g_541)))), 0x77L))))
        {
            int *l_1163[3][10][6] = {{{&l_1051,&g_67[3][1][1],&l_1121[4],&g_67[3][1][1],&l_1051,&l_1141},{&l_1121[4],&l_1051,&g_21,(void*)0,&g_541,&l_1051},{&g_67[3][1][1],&l_1115,(void*)0,&l_1051,&g_67[3][1][1],&l_1051},{&g_99,&l_1121[0],&g_21,&l_828,&l_1115,&l_1141},{&g_67[3][1][1],&g_21,&l_1121[4],&g_71[0][2][8],(void*)0,&g_24[0][0]},{&l_1051,&g_24[2][2],&g_541,&g_541,&g_24[2][2],&l_1051},{&g_541,&l_1121[0],&g_24[2][2],&g_62[5],(void*)0,&g_24[3][1]},{&g_24[0][0],&l_828,&l_1142[4],&g_67[3][1][1],&g_67[3][1][1],&l_1115},{&g_24[0][0],(void*)0,&g_67[3][1][1],&g_62[5],&g_71[0][2][8],&g_21},{&g_541,(void*)0,&l_1051,&g_541,&g_24[3][1],&l_828}},{{&l_1051,&g_24[2][0],&l_1121[0],&g_71[0][2][8],&l_1121[0],&g_24[2][0]},{&g_67[3][1][1],&g_24[0][0],&l_1121[0],&l_828,&l_1051,&l_828},{&g_99,&g_541,&g_24[3][1],&l_1051,&g_21,&l_1121[4]},{&g_67[3][1][1],&g_541,&g_24[2][0],(void*)0,&l_828,&l_1115},{&g_541,&l_828,(void*)0,&g_71[0][2][8],&g_24[0][0],(void*)0},{&g_541,&l_1121[0],&g_67[3][1][1],&g_21,&g_21,&g_67[3][1][1]},{&l_1142[4],&l_1142[4],&g_21,&l_828,&g_67[3][1][1],&l_1121[0]},{&l_828,&l_1121[0],&l_1051,(void*)0,&g_71[0][2][8],&g_21},{&g_21,&l_828,&l_1051,&g_24[0][0],&l_1142[4],&l_1121[0]},{&g_67[3][1][1],&g_24[0][0],&g_21,&g_24[2][2],&g_24[3][1],&g_67[3][1][1]}},{{&g_24[2][2],&g_24[3][1],&g_67[3][1][1],(void*)0,&g_541,(void*)0},{(void*)0,&g_67[3][1][1],(void*)0,&g_62[5],&l_1115,&l_1115},{&l_1115,(void*)0,&l_1121[0],&l_1121[4],&l_1121[3],&g_541},{&g_24[3][1],&l_1051,&g_21,&l_1121[4],&l_1115,&g_62[5]},{&l_1115,&l_828,(void*)0,&g_62[5],&g_541,&l_1121[0]},{(void*)0,&g_71[0][2][8],&g_24[0][0],(void*)0,(void*)0,(void*)0},{&g_24[2][2],&g_541,&g_541,&g_24[2][2],&l_1051,&l_1141},{&g_67[3][1][1],&g_62[5],&l_1121[3],&g_24[0][0],&g_24[2][0],&l_1115},{&g_21,&g_67[3][1][1],&g_24[2][2],(void*)0,&g_24[2][0],&g_21},{&l_828,&g_62[5],&g_24[3][1],&l_1115,&g_21,&g_67[3][1][1]}}};
            int l_1164 = 0xBF202471L;
            int i, j, k;
            ++l_1165;
        }
        else
        {
            short l_1172 = 0x6BD5L;
            int *l_1174 = &l_828;
            short l_1194 = 0x2712L;
            const int *l_1195[6][8] = {{(void*)0,&l_1115,&l_1140,&l_1115,(void*)0,&l_1115,&l_1140,&l_1115},{(void*)0,&l_1115,&l_1140,&l_1115,(void*)0,&l_1115,&l_1140,&l_1115},{(void*)0,&l_1115,&l_1140,&l_1115,(void*)0,&l_1115,&l_1140,&l_1115},{(void*)0,&l_1115,&l_1140,&l_1115,(void*)0,&l_1115,&l_1140,&l_1115},{(void*)0,&l_1115,&l_1140,&l_1115,(void*)0,&l_1115,&l_1140,&l_1115},{(void*)0,&l_1115,&l_1140,&l_1115,(void*)0,&l_1115,&l_1140,&l_1115}};
            const int **l_1216 = &l_1195[2][6];
            unsigned l_1242 = 0xC9CB03C1L;
            int i, j;
            for (l_1140 = 0; (l_1140 <= (-5)); l_1140--)
            {
                short l_1183 = (-1L);
                for (g_541 = (-7); (g_541 <= 1); ++g_541)
                {
                    unsigned l_1173 = 5UL;
                    int *l_1198 = (void*)0;
                    (*g_350) = 0x61B7EE5DL;
                    if (((*l_1040) != l_1172))
                    {
                        unsigned l_1186 = 0x691C9699L;
                        (*l_1040) &= (&g_686 == &g_1102);
                        (*l_1040) = (((void*)0 == &l_1072) >= (l_1173 && g_24[1][0]));
                        l_1174 = (void*)0;
                        (*g_1187) = func_78(&g_71[1][0][4], g_24[1][1], (safe_add_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u(0xEFD4L, ((safe_mod_func_uint16_t_u_u(l_1173, (safe_mul_func_int8_t_s_s((g_24[1][0] ^ l_1183), (safe_lshift_func_uint8_t_u_s(g_70, 2)))))) & l_1186))), (-3L))), l_1174);
                    }
                    else
                    {
                        l_1051 &= (safe_add_func_int32_t_s_s((safe_mul_func_uint8_t_u_u(g_613[1], ((safe_mul_func_int8_t_s_s(func_16((l_1183 || (g_613[1] && (g_551[1][4] > 0L))), l_1173), g_926)) >= g_1005[0]))), l_1194));
                        l_1195[5][2] = (*g_319);
                        if ((**g_319))
                            continue;
                        if ((**g_704))
                            continue;
                    }
                    for (l_1172 = 0; (l_1172 <= 28); l_1172 = safe_add_func_int32_t_s_s(l_1172, 8))
                    {
                        (*g_306) = l_1198;
                    }
                    (*g_350) = (*l_1109);
                }
                if ((*g_350))
                    break;
            }
            for (l_1028 = 0; (l_1028 >= 43); ++l_1028)
            {
                short l_1211 = 1L;
                (**l_1049) = func_83((0xAAL < g_96), (safe_rshift_func_int16_t_s_u((((safe_sub_func_int8_t_s_s((safe_mod_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u((safe_rshift_func_int8_t_s_u(((*g_1187) == (void*)0), 4)), (l_1211 ^ (safe_sub_func_int8_t_s_s(((safe_lshift_func_uint16_t_u_u(((g_62[2] & 0xC384L) <= g_926), 12)) < (g_67[0][2][1] | 0x55E4L)), 0xB0L))))), 0xC1L)), g_553[3])) || (**g_686)) == g_71[2][2][8]), g_557)), g_557);
                (**l_852) = (**g_1187);
            }
            (*l_1216) = (*g_319);
            for (g_557 = 0; (g_557 != 12); ++g_557)
            {
                int l_1241 = 0x6D2C5EE2L;
                for (g_21 = 0; (g_21 <= 6); g_21 += 1)
                {
                    int ** const l_1223 = &g_58;
                    const int l_1235 = 3L;
                    const int **l_1243[5][1] = {{&l_1195[5][0]},{(void*)0},{&l_1195[5][0]},{(void*)0},{&l_1195[5][0]}};
                    int l_1247 = 0xF3C9E45EL;
                    int i, j;
                    (*l_1040) |= (&l_852 == &l_902);
                    if ((safe_sub_func_int16_t_s_s((-10L), (safe_rshift_func_int8_t_s_u(g_557, 6)))))
                    {
                        int l_1234 = 0x3BF29681L;
                        int *l_1236 = &l_1121[3];
                        (*l_1236) ^= ((g_553[0] || (l_1223 != (*l_1049))) <= (safe_add_func_int32_t_s_s(((safe_add_func_int8_t_s_s((safe_lshift_func_int16_t_s_s(func_59(l_1230), l_1231[0])), (3UL >= 0x66A3L))) <= (((safe_rshift_func_int16_t_s_u((((0UL < g_21) ^ l_1234) | g_24[1][0]), g_21)) < g_24[1][2]) != l_1235)), l_1235)));
                        (*g_928) = ((((*l_1236) < (+func_92(g_21))) & (func_92(g_557) || (((*l_1236) <= (safe_mul_func_uint8_t_u_u(func_92(g_830), (safe_sub_func_uint8_t_u_u(g_11, g_830))))) <= g_1005[0]))) <= l_1241);
                        (*l_1236) = l_1242;
                    }
                    else
                    {
                        if ((*l_1109))
                            break;
                    }
                    (*g_1244) = (*g_319);
                    l_1247 |= (0x0181A522L < (func_54(g_237, l_1241, g_553[3]) > (safe_mul_func_int16_t_s_s(l_1241, g_24[1][0]))));
                }
                for (l_1028 = 29; (l_1028 != 21); --l_1028)
                {
                    if (l_1241)
                        break;
                }
                return g_553[0];
            }
        }
        if (func_16(g_65, g_71[1][2][4]))
        {
            if ((*g_350))
            {
                const int l_1250 = 0x1D8FEDF8L;
                return l_1250;
            }
            else
            {
                return g_24[1][1];
            }
        }
        else
        {
            const short l_1251 = 0x2972L;
            return l_1251;
        }
    }
    if ((safe_lshift_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s(g_237, (func_92(g_96) != (*l_1109)))), (0x6FL >= func_92(((g_11 < (((!(*l_1109)) || (*l_1109)) <= ((safe_sub_func_int8_t_s_s((*l_1109), 250UL)) == (-9L)))) != g_11))))))
    {
        int **l_1264 = &g_58;
        int l_1295 = (-9L);
        int l_1298 = 7L;
        int *l_1316[9][8][3] = {{{&g_71[0][1][1],(void*)0,(void*)0},{&g_24[1][0],&g_541,&g_96},{(void*)0,&g_71[0][1][1],&g_96},{&g_21,&g_541,&g_21},{&g_24[1][2],(void*)0,&g_96},{&g_62[2],&l_1121[4],&g_21},{&g_96,&g_24[1][2],&g_96},{&l_1298,&g_21,&g_96}},{{&g_96,&g_96,(void*)0},{&g_62[2],&g_62[8],&l_1121[3]},{&g_24[1][2],&g_96,&g_24[1][2]},{&g_21,&g_21,&g_24[1][0]},{(void*)0,&g_24[1][2],&g_24[1][2]},{&g_24[1][0],&g_67[0][1][1],&g_24[1][0]},{(void*)0,&g_71[0][1][1],&g_62[1]},{&g_62[2],&g_21,&l_1121[4]}},{{&g_71[0][1][1],(void*)0,&g_96},{&l_1121[3],&g_21,&l_1121[3]},{&g_96,&g_71[0][1][1],(void*)0},{&l_1298,&g_67[0][1][1],&l_1121[3]},{(void*)0,&g_96,&g_96},{&g_96,&g_62[8],&l_1121[4]},{(void*)0,(void*)0,&g_62[1]},{&l_1298,&g_99,&g_24[1][0]}},{{&g_96,(void*)0,&g_96},{&l_1121[3],&g_62[8],&g_62[2]},{&g_71[0][1][1],&g_96,&g_96},{&g_62[2],&g_67[0][1][1],&g_24[1][0]},{(void*)0,&g_71[0][1][1],&g_62[1]},{&g_62[2],&g_21,&l_1121[4]},{&g_71[0][1][1],(void*)0,&g_96},{&l_1121[3],&g_21,&l_1121[3]}},{{&g_96,&g_71[0][1][1],(void*)0},{&l_1298,&g_67[0][1][1],&l_1121[3]},{(void*)0,&g_96,&g_96},{&g_96,&g_62[8],&l_1121[4]},{(void*)0,(void*)0,&g_62[1]},{&l_1298,&g_99,&g_24[1][0]},{&g_96,(void*)0,&g_96},{&l_1121[3],&g_62[8],&g_62[2]}},{{&g_71[0][1][1],&g_96,&g_96},{&g_62[2],&g_67[0][1][1],&g_24[1][0]},{(void*)0,&g_71[0][1][1],&g_62[1]},{&g_62[2],&g_21,&l_1121[4]},{&g_71[0][1][1],(void*)0,&g_96},{&l_1298,(void*)0,&l_1298},{&g_71[0][1][1],&g_24[1][2],&g_62[1]},{&g_21,&g_62[8],&l_1298}},{{&g_62[1],&g_71[0][1][1],(void*)0},{&l_1121[3],&l_1121[4],&g_24[1][0]},{&g_62[1],&g_62[1],&g_96},{&g_21,&g_67[0][1][1],&g_96},{&g_71[0][1][1],&g_62[1],&g_71[0][1][1]},{&l_1298,&l_1121[4],&l_1121[4]},{&g_24[1][2],&g_71[0][1][1],&g_71[0][1][1]},{&l_1121[4],&g_62[8],&g_96}},{{&g_96,&g_24[1][2],&g_96},{&l_1121[4],(void*)0,&g_24[1][0]},{&g_24[1][2],&g_96,(void*)0},{&l_1298,(void*)0,&l_1298},{&g_71[0][1][1],&g_24[1][2],&g_62[1]},{&g_21,&g_62[8],&l_1298},{&g_62[1],&g_71[0][1][1],(void*)0},{&l_1121[3],&l_1121[4],&g_24[1][0]}},{{&g_62[1],&g_62[1],&g_96},{&g_21,&g_67[0][1][1],&g_96},{&g_71[0][1][1],&g_62[1],&g_71[0][1][1]},{&l_1298,&l_1121[4],&l_1121[4]},{&g_24[1][2],&g_71[0][1][1],&g_71[0][1][1]},{&l_1121[4],&g_62[8],&g_96},{&g_96,&g_24[1][2],&g_96},{&l_1121[4],(void*)0,&g_24[1][0]}}};
        int l_1317 = 4L;
        int l_1419 = 1L;
        unsigned l_1468 = 0x5B7A19B9L;
        int i, j, k;
        for (g_557 = 0; (g_557 >= 24); g_557 = safe_add_func_uint16_t_u_u(g_557, 1))
        {
            int ***l_1260 = &l_902;
            int l_1263 = 0L;
            char l_1267[7][5] = {{0x75L,0x60L,0x60L,0x75L,4L},{1L,1L,1L,(-1L),1L},{0x75L,0x75L,8L,0x60L,4L},{0xACL,(-1L),0x2AL,(-1L),0xACL},{4L,0x60L,8L,0x75L,0x75L},{1L,(-1L),1L,1L,1L},{4L,0x75L,0x60L,0x60L,0x75L}};
            unsigned short l_1294 = 65535UL;
            short l_1315 = 0x8063L;
            int i, j;
            if ((65535UL && ((~(((0xABD56302L == 1UL) <= (g_1005[0] & (&l_852 == l_1260))) || ((safe_add_func_int16_t_s_s(l_1263, ((void*)0 != l_1264))) ^ g_926))) || (-6L))))
            {
                if (g_11)
                    goto lbl_1265;
            }
            else
            {
                int l_1266[8][1];
                int *l_1268 = &g_62[4];
                int *l_1269 = (void*)0;
                int *l_1270[2][3] = {{&g_24[1][0],&g_24[1][0],&g_99},{&g_24[1][0],&g_24[1][0],&g_99}};
                unsigned l_1271[1];
                int *l_1293 = &g_62[7];
                int i, j;
                for (i = 0; i < 8; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_1266[i][j] = 0x6B7E54ACL;
                }
                for (i = 0; i < 1; i++)
                    l_1271[i] = 9UL;
                l_1271[0]++;
                (*l_1268) = (*g_20);
                for (g_99 = (-5); (g_99 > 13); g_99++)
                {
                    int * const *l_1290 = (void*)0;
                    for (g_96 = 0; (g_96 <= 1); g_96 += 1)
                    {
                        int i, j;
                        l_1270[g_96][g_96] = l_1270[g_96][(g_96 + 1)];
                        (**l_1260) = func_83((&l_1270[g_96][g_96] == (*l_1086)), (~((safe_add_func_int16_t_s_s(g_70, (safe_add_func_int16_t_s_s(g_11, (((safe_mul_func_uint16_t_u_u(((safe_rshift_func_int16_t_s_s((&l_1270[1][0] == &l_1270[g_96][g_96]), 1)) >= 65531UL), (safe_lshift_func_uint8_t_u_s(254UL, 0)))) == ((safe_sub_func_uint8_t_u_u((func_92(g_553[4]) > g_11), g_62[7])) == l_1267[0][0])) >= g_67[3][1][1]))))) == g_551[5][0])), g_553[3]);
                    }
                    (*l_902) = func_30((((safe_mod_func_uint8_t_u_u((0x77L >= g_1005[0]), func_92((l_1290 != &l_1269)))) ^ ((g_67[1][2][1] < (g_613[1] <= func_92(g_67[3][1][1]))) != 0x8919L)) != (*l_1109)));
                }
                for (l_882 = 0; (l_882 <= 4); l_882 += 1)
                {
                    unsigned l_1299 = 0xF7BAFF16L;
                    int l_1307[1][4][1] = {{{0x8096CF52L},{0xEFDAAE00L},{0x8096CF52L},{0xEFDAAE00L}}};
                    int **l_1309[9][7][4] = {{{&l_1293,&l_1270[1][0],&l_1270[1][0],&g_58},{&l_1293,&l_1269,&l_1268,&l_1270[1][2]},{&l_1270[1][0],(void*)0,&l_1269,(void*)0},{(void*)0,&l_1270[1][1],(void*)0,&g_58},{&l_1268,(void*)0,&l_1269,&l_1268},{&l_1270[0][1],&l_1269,&l_1268,&l_1269},{&l_1270[1][0],&l_1270[1][1],&l_1270[1][0],&l_1293}},{{&g_58,&l_1268,(void*)0,&l_1270[1][0]},{&l_1269,&l_1270[1][1],&l_1269,&l_1269},{(void*)0,(void*)0,&l_1269,&g_58},{&g_58,&l_1268,(void*)0,&g_58},{&l_1270[1][0],&l_1293,&l_1269,&l_1270[1][0]},{&l_1293,&l_1270[1][0],&l_1270[1][2],&l_1270[1][1]},{&l_1270[1][0],&l_1270[1][0],&l_1268,&g_58}},{{(void*)0,&l_1293,&l_1269,&l_1270[1][0]},{(void*)0,&l_1268,&l_1270[1][0],&l_1270[1][0]},{&l_1270[1][0],&l_1270[1][0],&l_1270[1][1],(void*)0},{&l_1270[0][1],&l_1269,&l_1269,&g_58},{&l_1270[1][0],&l_1293,(void*)0,&l_1270[1][2]},{(void*)0,&l_1270[1][0],&g_58,&l_1269},{&l_1270[0][2],&l_1269,&l_1270[0][2],&g_58}},{{&l_1268,(void*)0,&l_1269,&l_1293},{&l_1270[1][0],&l_1270[1][1],(void*)0,(void*)0},{&l_1270[1][0],&l_1270[1][0],(void*)0,&l_1293},{&l_1270[1][0],&g_58,&l_1269,(void*)0},{&l_1268,&l_1270[1][0],&l_1270[0][2],&l_1270[1][2]},{&l_1270[0][2],&l_1270[1][2],&g_58,&l_1268},{(void*)0,&l_1269,(void*)0,(void*)0}},{{&l_1270[1][0],(void*)0,&l_1269,(void*)0},{&l_1270[0][1],&l_1270[1][0],&l_1270[1][1],&l_1269},{&l_1293,(void*)0,(void*)0,&g_58},{&l_1293,&l_1270[1][2],&g_58,&l_1270[0][2]},{&l_1293,&g_58,&l_1269,&l_1270[0][0]},{&g_58,&l_1269,(void*)0,&l_1293},{(void*)0,(void*)0,&l_1269,&l_1270[1][0]}},{{(void*)0,(void*)0,&l_1270[1][0],(void*)0},{&l_1270[1][1],(void*)0,(void*)0,&l_1293},{&l_1293,&g_58,&l_1269,&l_1268},{&g_58,(void*)0,&l_1270[1][0],&l_1270[1][2]},{&l_1270[1][0],&l_1268,&l_1270[1][1],&l_1269},{&g_58,&l_1270[1][0],(void*)0,&l_1270[1][2]},{&g_58,&l_1270[1][0],(void*)0,(void*)0}},{{&g_58,&l_1270[1][0],&l_1270[1][1],&g_58},{(void*)0,&l_1268,&l_1270[1][0],&l_1268},{(void*)0,&l_1269,&l_1268,&l_1270[1][0]},{&l_1269,&l_1270[1][0],&l_1269,(void*)0},{&l_1270[0][0],&l_1270[1][0],&g_58,&g_58},{&l_1269,(void*)0,&l_1270[1][0],(void*)0},{&l_1268,&l_1270[1][2],&l_1270[1][0],&l_1270[1][0]}},{{&l_1270[0][0],&l_1270[0][0],(void*)0,&l_1270[1][1]},{&l_1270[1][2],(void*)0,&l_1270[0][0],&l_1270[1][0]},{&g_58,&g_58,&l_1270[1][0],&l_1270[0][0]},{&l_1269,&g_58,&l_1270[1][0],&l_1270[1][0]},{&g_58,(void*)0,(void*)0,&l_1270[1][1]},{&l_1269,&l_1270[0][0],&l_1270[1][2],&l_1270[1][0]},{&l_1269,&l_1270[1][2],&l_1269,(void*)0}},{{(void*)0,(void*)0,&l_1270[1][0],&g_58},{(void*)0,&l_1270[1][0],(void*)0,(void*)0},{&l_1270[1][2],&l_1270[1][0],&l_1269,&l_1270[1][0]},{(void*)0,&l_1269,&l_1270[1][0],&l_1268},{&l_1269,&l_1268,&l_1270[1][1],&g_58},{&l_1268,&l_1270[1][0],(void*)0,(void*)0},{&l_1270[1][0],&l_1270[1][0],&l_1270[1][0],&l_1270[1][2]}}};
                    int i, j, k;
                    for (l_1052 = 1; (l_1052 <= 4); l_1052 += 1)
                    {
                        char l_1296 = 0x5DL;
                        int l_1297 = 0x8D43982DL;
                        int **l_1302[4];
                        int i;
                        for (i = 0; i < 4; i++)
                            l_1302[i] = &l_1270[1][0];
                        (*g_306) = func_83((0xCAL >= (((*g_1244) != (*g_319)) <= (&g_306 == &g_319))), (((0L & (l_1293 != (*g_319))) <= func_92((l_1294 | g_553[3]))) && 0x7DABB7DAL), g_99);
                        ++l_1299;
                        (*l_1268) = (0xD5L | (g_237 < (l_1302[0] != (*l_1086))));
                        if (g_557)
                            goto lbl_1265;
                    }
                    (*l_1268) |= (*g_20);
                    for (l_890 = 0; (l_890 <= 1); l_890 += 1)
                    {
                        int * const *l_1308 = &g_58;
                        int l_1310[10][10][2] = {{{4L,0xDD59CC42L},{0xAAAEC327L,(-1L)},{1L,(-1L)},{(-10L),(-10L)},{0x03669CF8L,1L},{0xEDF5C7E8L,0L},{0x60629F2EL,0x858C566DL},{0x62373FB5L,0x60629F2EL},{(-1L),0x69EBA2CAL},{(-1L),0x60629F2EL}},{{0x62373FB5L,0x858C566DL},{0x60629F2EL,0L},{0xEDF5C7E8L,1L},{0x03669CF8L,(-10L)},{(-10L),(-1L)},{1L,(-1L)},{0x74B4A4D3L,0x4F98AE2BL},{0xE626E29DL,(-1L)},{0L,1L},{1L,0x6A08D3F3L}},{{0x3353B02FL,0L},{1L,0L},{0xB135EC00L,0x964F6E10L},{0L,0L},{0xD44A498CL,0xAD056667L},{0x69EBA2CAL,0xB55F9E60L},{(-1L),0xD44A498CL},{0xA68DD954L,(-4L)},{0xE9AC5F7EL,0x291F24F4L},{0L,0L}},{{0xC33209E4L,0xEACC1A5FL},{0x78F6738CL,(-1L)},{0x797663E7L,6L},{0L,0x2050472DL},{0xB55F9E60L,0x0F1C0390L},{0xB6608D16L,0L},{0xEACC1A5FL,(-1L)},{5L,0x7A69D571L},{0x4F98AE2BL,0x15D066C3L},{9L,0L}},{{0x4CF25215L,7L},{(-1L),1L},{(-1L),0xB135EC00L},{(-5L),0x2939B1D4L},{0L,0L},{(-1L),(-1L)},{(-6L),(-1L)},{0x0F1C0390L,0x4CF25215L},{6L,0x9A064D07L},{0x592F0C1EL,0x797663E7L}},{{(-1L),0xEDF5C7E8L},{0x291F24F4L,3L},{0x2962719CL,0x60629F2EL},{0x7A69D571L,0x60629F2EL},{0x2962719CL,3L},{0x291F24F4L,0xEDF5C7E8L},{(-1L),0x797663E7L},{0x78F6738CL,1L},{0xBE67B76FL,0x51D23C01L},{0xDD59CC42L,0xEEA5FD45L}},{{0x69EBA2CAL,0xD44A498CL},{0x03669CF8L,(-1L)},{0x6A08D3F3L,0x2050472DL},{0x74B4A4D3L,0xB55F9E60L},{(-1L),0x291F24F4L},{5L,0x2939B1D4L},{0x51D23C01L,(-4L)},{8L,0x592F0C1EL},{0x9A064D07L,0xAAAEC327L},{2L,5L}},{{1L,0x7A69D571L},{0x4CF25215L,0xDD59CC42L},{7L,(-10L)},{(-1L),0xBE67B76FL},{(-1L),0x964F6E10L},{4L,1L},{9L,0xE9AC5F7EL},{(-3L),0xE626E29DL},{6L,(-5L)},{0x858C566DL,0L}},{{0xD44A498CL,7L},{0x2BEACFF9L,0xC33209E4L},{0L,0xA68DD954L},{0L,0x2962719CL},{0xB55F9E60L,0xF53CB612L},{0L,0xAD056667L},{0L,0L},{0xEACC1A5FL,(-1L)},{0xE9AC5F7EL,0x03669CF8L},{0x60629F2EL,0x9A064D07L}},{{0xB6608D16L,(-1L)},{1L,0L},{0x476120A3L,0x476120A3L},{0x3353B02FL,0xEACC1A5FL},{0xE550D7D2L,0x6A08D3F3L},{(-1L),0L},{(-1L),(-1L)},{5L,1L},{5L,0xC33209E4L},{0x4CF25215L,0x03669CF8L}}};
                        int i, j, k;
                        l_1307[0][2][0] = (+(safe_rshift_func_int8_t_s_u(l_1299, (safe_rshift_func_int16_t_s_s(g_926, 13)))));
                        (*g_943) &= (4294967295UL == g_830);
                        (*g_943) = ((**g_319) < (safe_add_func_int8_t_s_s((safe_mod_func_uint16_t_u_u((0x3567L ^ (1UL | ((*g_320) >= (g_596[0][0][0] >= g_613[5])))), l_1315)), ((g_926 <= (+((l_1264 == l_1309[1][4][2]) < g_99))) | g_613[1]))));
                    }
                }
            }
        }
lbl_1336:
        (*g_350) ^= (*l_1109);
        if ((g_62[1] ^ ((**g_1244) == l_1317)))
        {
            unsigned short l_1318 = 0xB878L;
            int *l_1339[1];
            short l_1359 = 0xA005L;
            unsigned char l_1370 = 0UL;
            unsigned l_1416 = 4294967295UL;
            unsigned short l_1479 = 0x9C5CL;
            int i;
            for (i = 0; i < 1; i++)
                l_1339[i] = (void*)0;
            l_1318 = (**g_686);
            if ((((*g_928) != (((safe_lshift_func_uint8_t_u_s(((*l_1086) != (*l_1086)), 6)) & l_1318) <= (func_92(g_21) && 0xB8L))) ^ func_92((func_92(g_11) <= g_614))))
            {
                int l_1322 = 0xAE627E8AL;
                int *** const l_1333 = &l_852;
                int l_1340 = 0xD25DBE25L;
                short l_1348 = 0L;
                int l_1355 = 0x3A810CAFL;
                int l_1358 = (-5L);
                int l_1364 = 0x92396526L;
                int l_1366[6] = {(-1L),(-1L),0x5DDE43F5L,(-1L),(-1L),0x5DDE43F5L};
                int i;
                if (((void*)0 == (*g_686)))
                {
                    int l_1321 = (-1L);
                    int l_1334 = 0xE6037EF5L;
                    for (g_541 = 0; (g_541 <= 2); g_541 += 1)
                    {
                        const int **l_1335 = &g_320;
                        int i;
                        if (l_1321)
                            break;
                        l_1121[(g_541 + 2)] = l_1322;
                        l_1334 = (safe_mul_func_int8_t_s_s(g_67[3][1][1], (safe_add_func_uint16_t_u_u(l_1121[(g_541 + 2)], (l_1322 & (safe_mod_func_int16_t_s_s(g_926, (safe_rshift_func_uint8_t_u_s((((g_613[1] & (safe_mod_func_int32_t_s_s((((g_70 ^ (!5UL)) != ((void*)0 != l_1333)) < (-8L)), (**g_319)))) && l_1121[(g_541 + 2)]) & l_1318), g_614)))))))));
                        (*l_1335) = (*g_1244);
                    }
                    if (l_890)
                        goto lbl_1336;
                }
                else
                {
                    unsigned char l_1341 = 255UL;
                    int l_1356[8];
                    short l_1360 = 0x0566L;
                    int l_1369 = 0xCC9D81DBL;
                    int i;
                    for (i = 0; i < 8; i++)
                        l_1356[i] = 2L;
                    for (l_1295 = 5; (l_1295 >= (-1)); l_1295 = safe_sub_func_uint32_t_u_u(l_1295, 2))
                    {
                        (**l_1333) = l_1339[0];
                        l_1341--;
                    }
                    for (l_1341 = 0; (l_1341 > 40); l_1341++)
                    {
                        l_1348 |= (((g_613[1] == ((g_596[0][0][0] < g_557) == (-1L))) ^ (-1L)) & ((6UL >= 0xCEF3E760L) < 0L));
                        (*g_943) = (safe_lshift_func_uint16_t_u_u(0x548AL, 2));
                    }
                    for (l_882 = 14; (l_882 <= 58); l_882 = safe_add_func_uint32_t_u_u(l_882, 1))
                    {
                        int l_1353 = 0xDB2F8591L;
                        int l_1362 = (-1L);
                        int l_1363 = 0xA63280BCL;
                        int l_1365 = 0xB1C91DB4L;
                        int l_1367 = 0x38DBFA20L;
                        int l_1368[1];
                        int i;
                        for (i = 0; i < 1; i++)
                            l_1368[i] = 0x6E25C1F4L;
                        l_1340 ^= (l_1353 >= (((g_830 <= 0x19C1L) == (l_1341 ^ ((void*)0 == (*g_1187)))) == g_1354));
                        l_1370++;
                    }
                    for (g_541 = 5; (g_541 >= 0); g_541 -= 1)
                    {
                        unsigned l_1373[7] = {0xD120CEC8L,0xD120CEC8L,0xD120CEC8L,0xD120CEC8L,0xD120CEC8L,0xD120CEC8L,0xD120CEC8L};
                        int *l_1374 = &l_1364;
                        int i;
                        l_1366[g_541] = ((*g_943) & l_1373[4]);
                        l_1374 = &l_1366[g_541];
                    }
                }
            }
            else
            {
                int **l_1383 = &l_1339[0];
                int *l_1402 = (void*)0;
                int l_1407 = 3L;
                const unsigned l_1418 = 4UL;
                int l_1434 = 0x276C16D5L;
                unsigned char l_1438 = 2UL;
                const int *l_1441 = &g_71[1][0][7];
lbl_1421:
                if ((g_1354 == g_237))
                {
                    short l_1377 = 0L;
                    for (g_673 = 0; (g_673 == 24); ++g_673)
                    {
                        char l_1380 = (-1L);
                        if ((**g_686))
                            break;
                        if (l_1377)
                            continue;
                        (*g_943) = (((g_1005[0] <= ((g_926 != (safe_mul_func_uint8_t_u_u(g_65, ((l_1380 >= (safe_lshift_func_uint8_t_u_u(func_92((l_1383 == &l_1316[7][7][2])), 3))) && (l_1377 < (safe_rshift_func_int16_t_s_s((safe_rshift_func_int8_t_s_s(g_11, 7)), g_553[3]))))))) != 1UL)) >= l_1380) <= (*l_1109));
                    }
                }
                else
                {
                    unsigned l_1389 = 0x80146759L;
                    const short l_1397 = 0x90E1L;
                    int l_1404 = (-2L);
                    int l_1405 = 0x8F7F0AC7L;
                    int l_1406 = 0x982C815CL;
                    unsigned l_1408 = 0xF3972D9BL;
                    int **l_1414[9] = {(void*)0,&l_1339[0],&l_1339[0],(void*)0,&l_1339[0],&l_1339[0],(void*)0,&l_1339[0],&l_1339[0]};
                    unsigned short l_1417[3][3][2] = {{{3UL,1UL},{0x32EBL,0x32EBL},{0x32EBL,1UL}},{{3UL,0x9B44L},{1UL,0x9B44L},{3UL,1UL}},{{0x32EBL,0x32EBL},{0x32EBL,1UL},{3UL,0x9B44L}}};
                    int i, j, k;
                    (*g_1390) = func_78(func_30(l_1388), l_1389, g_24[4][0], (*l_1383));
                    if (g_99)
                        goto lbl_1403;
                    if ((safe_sub_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s(((safe_mod_func_int32_t_s_s((**g_704), l_1397)) ^ (safe_add_func_uint8_t_u_u(((safe_mul_func_int16_t_s_s(((void*)0 != l_1402), g_62[2])) == (g_71[1][1][0] & g_99)), (!g_614)))), g_11)), g_1005[0])))
                    {
lbl_1403:
                        if (g_1354)
                            goto lbl_1265;
                        l_1408++;
                        l_1361 ^= func_54(g_11, ((((((g_551[5][0] == (safe_unary_minus_func_uint32_t_u(g_541))) <= 0xB512C7A3L) != (((((((safe_mod_func_int16_t_s_s(func_16((g_553[3] >= func_92(g_62[9])), func_92((&l_1316[4][7][1] != l_1414[4]))), g_1415)) | l_1416) || g_551[5][0]) | g_551[5][0]) >= 0UL) > (-4L)) < g_926)) != g_614) && (**g_1390)) || 0x3D7B5AFBL), l_1417[0][1][1]);
                    }
                    else
                    {
                        l_1121[2] = l_1418;
                        if (l_1052)
                            goto lbl_1265;
                    }
                }
                if ((**g_319))
                {
                    unsigned short l_1428 = 65529UL;
                    unsigned short l_1458 = 0x4F16L;
                    (*g_1420) = func_78(&g_1354, func_54(((3L > (*g_350)) != (*l_1109)), l_1419, g_1415), g_613[5], (*l_1383));
                    if ((*g_943))
                    {
                        if (g_21)
                            goto lbl_1421;
                        l_1407 = (g_1005[0] || g_24[2][0]);
                        (*g_1423) = (*g_1420);
                    }
                    else
                    {
                        char l_1424 = (-7L);
                        const int **l_1425 = &g_320;
                        int *l_1433 = (void*)0;
                        short l_1437 = 0x2DD2L;
                        (*l_1425) = func_78(&g_71[0][2][0], l_1424, g_70, &g_541);
                        l_1437 ^= (safe_mul_func_uint16_t_u_u((l_1428 > ((safe_add_func_uint8_t_u_u((((safe_lshift_func_int8_t_s_s((l_1428 == (**g_686)), l_1434)) < (safe_lshift_func_int16_t_s_u((g_613[5] <= g_830), g_553[1]))) | (-1L)), g_21)) == 0x127368DBL)), g_926));
                    }
lbl_1443:
                    if ((**g_1423))
                    {
                        --l_1438;
                        if (l_1028)
                            goto lbl_1443;
                        l_1441 = (*g_704);
                        return g_1357;
                    }
                    else
                    {
                        int *l_1442[3][6] = {{(void*)0,&g_1354,&g_1354,(void*)0,&g_1354,&g_1354},{(void*)0,&g_1354,&g_1354,(void*)0,&g_1354,&g_1354},{(void*)0,&g_1354,&g_1354,(void*)0,&g_1354,&g_1354}};
                        int i, j;
                        if (l_1418)
                            goto lbl_1336;
                        (*l_852) = func_30(((*g_319) != l_1442[2][0]));
                    }
                    for (l_828 = 0; (l_828 < (-13)); l_828 = safe_sub_func_uint8_t_u_u(l_828, 3))
                    {
                        unsigned char l_1446[7] = {8UL,8UL,8UL,8UL,8UL,8UL,8UL};
                        char l_1455[6][2] = {{0xBDL,0x73L},{0x73L,0xBDL},{0x73L,0x73L},{0xBDL,0x73L},{0x73L,0xBDL},{0x73L,0x73L}};
                        int i, j;
                        (*g_306) = (*g_306);
                        ++l_1446[0];
                        (*l_1383) = func_30((safe_rshift_func_uint16_t_u_u(((safe_add_func_int32_t_s_s((safe_rshift_func_int16_t_s_u(l_1455[3][1], g_673)), l_1428)) ^ g_67[3][1][1]), 11)));
                        l_1458 |= (((safe_sub_func_int32_t_s_s(((-9L) ^ (**l_852)), (((void*)0 != &l_1441) ^ l_1428))) | 0xF4L) >= (**l_1264));
                    }
                }
                else
                {
                    char l_1461 = 0xC7L;
                    int l_1474 = 0L;
                    unsigned char l_1478[2][8] = {{254UL,247UL,247UL,254UL,1UL,254UL,247UL,247UL},{247UL,1UL,255UL,255UL,255UL,0xAEL,255UL,254UL}};
                    int i, j;
                    for (l_1419 = 0; (l_1419 != (-6)); l_1419 = safe_sub_func_int8_t_s_s(l_1419, 4))
                    {
                        short l_1466 = 1L;
                        (*g_20) = l_1461;
                        (*g_350) = (**g_1390);
                    }
                    if (l_1438)
                        goto lbl_1471;
lbl_1471:
                    ++l_1468;
                    for (l_1052 = (-5); (l_1052 == 42); l_1052++)
                    {
                        int *l_1475 = (void*)0;
                        l_1474 = (*g_928);
                        l_1407 ^= l_1479;
                    }
                }
                l_828 = ((safe_lshift_func_uint16_t_u_s(g_541, 7)) >= func_92((safe_lshift_func_uint8_t_u_u(g_1354, (safe_unary_minus_func_uint8_t_u(func_59(&g_24[2][0])))))));
            }
        }
        else
        {
            return g_613[1];
        }
    }
    else
    {
        int *l_1489 = &g_67[3][1][1];
        int *l_1490 = &l_1121[3];
        int *l_1491 = &g_67[3][1][1];
        int *l_1492 = &g_541;
        int *l_1493 = &g_71[1][0][7];
        int *l_1494 = &g_71[1][0][7];
        int *l_1495[9] = {&g_62[6],&g_62[6],&g_62[6],&g_62[6],&g_62[6],&g_62[6],&g_62[6],&g_62[6],&g_62[6]};
        unsigned short l_1496 = 4UL;
        int i;
        (*g_928) |= 0x4EF3603FL;
        for (g_926 = 6; (g_926 != 20); g_926 = safe_add_func_uint32_t_u_u(g_926, 2))
        {
            short l_1487 = 0xF14AL;
            int *l_1488 = &l_1361;
            if (g_673)
                goto lbl_1265;
            (*l_1488) ^= func_14(l_1487);
        }
        l_1496++;
    }
    for (l_1143 = 0; (l_1143 >= (-11)); l_1143--)
    {
        const int *l_1505[1][10] = {{&g_71[1][0][7],&g_71[1][0][7],&g_71[1][0][7],&g_71[1][0][7],&g_71[1][0][7],&g_71[1][0][7],&g_71[1][0][7],&g_71[1][0][7],&g_71[1][0][7],&g_71[1][0][7]}};
        char l_1511 = 0x53L;
        const int **l_1513 = &l_1505[0][5];
        int i, j;
        (*l_1510) = (g_613[5] || (safe_sub_func_uint16_t_u_u(((safe_rshift_func_uint16_t_u_s((g_813 | (l_1505[0][5] != (*g_319))), g_24[1][0])) <= (safe_add_func_int32_t_s_s(((safe_mul_func_int8_t_s_s((func_92(g_613[1]) > g_21), (l_1510 != l_1505[0][5]))) && l_1511), 4UL))), g_62[2])));
        (*l_1513) = (*g_1423);
    }
    return (*l_1109);
}







static int func_14(short p_15)
{
    char l_707 = 0x84L;
    const int **l_734[4] = {&g_320,&g_320,&g_320,&g_320};
    int l_785 = 0x399E819CL;
    int l_791 = (-1L);
    int *l_803 = (void*)0;
    int *l_804 = &g_24[1][0];
    char l_805 = 0x4FL;
    int *l_806 = &g_541;
    int *l_807 = &g_96;
    int *l_808 = &g_67[3][1][1];
    int l_809[3][8];
    int *l_810 = (void*)0;
    int *l_811[3];
    int l_812 = 0x1E7D3BF6L;
    int l_816 = (-6L);
    unsigned char l_817 = 0x05L;
    char l_820 = 0x23L;
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 8; j++)
            l_809[i][j] = (-1L);
    }
    for (i = 0; i < 3; i++)
        l_811[i] = &l_791;
    if ((p_15 != (safe_lshift_func_int16_t_s_u((l_707 > p_15), 6))))
    {
        char l_726 = (-2L);
        int * const *l_746 = &g_58;
        int * const **l_745 = &l_746;
        int l_786 = 0L;
        int l_787[1];
        int l_795 = 0x24C9D127L;
        int i;
        for (i = 0; i < 1; i++)
            l_787[i] = 0xB31CEE84L;
        if (((func_92(l_707) | (safe_mod_func_int8_t_s_s((safe_add_func_uint16_t_u_u(p_15, (safe_add_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u(g_70, (p_15 == ((g_553[7] == p_15) != (((safe_mul_func_int8_t_s_s(0xC6L, p_15)) ^ 0x7866L) <= g_62[3]))))), g_21)))), 1L))) != p_15))
        {
            int l_721 = (-9L);
            int *l_725 = &g_99;
            for (g_557 = 0; (g_557 >= (-30)); g_557 = safe_sub_func_uint16_t_u_u(g_557, 1))
            {
                short l_720 = (-1L);
                l_721 = (l_720 == g_551[0][1]);
                if (p_15)
                    continue;
                for (g_614 = 17; (g_614 != 35); g_614 = safe_add_func_uint16_t_u_u(g_614, 1))
                {
                    unsigned short l_724[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_724[i] = 8UL;
                    if (l_724[1])
                        break;
                }
            }
            (*l_725) |= (**g_686);
            (*l_725) = (((l_726 & (safe_lshift_func_int16_t_s_u((-1L), 10))) ^ p_15) == ((p_15 || 0x3451L) != (func_92(g_557) | g_541)));
            return (**g_319);
        }
        else
        {
            int *l_729 = (void*)0;
            int l_749[8][9] = {{(-3L),1L,(-10L),(-2L),1L,(-2L),(-10L),1L,(-3L)},{0xA9B2892BL,0L,0x5412C8B7L,(-6L),0L,(-6L),0x5412C8B7L,0L,0xA9B2892BL},{(-3L),1L,(-10L),(-2L),1L,(-2L),(-10L),1L,(-3L)},{0xA9B2892BL,0L,0x5412C8B7L,(-6L),0L,(-6L),0x5412C8B7L,0L,0xA9B2892BL},{(-3L),1L,(-10L),(-2L),1L,(-2L),(-10L),1L,(-3L)},{0xA9B2892BL,0L,0x5412C8B7L,(-6L),0L,(-6L),0x5412C8B7L,0L,0xA9B2892BL},{(-3L),1L,(-10L),(-2L),1L,(-2L),(-10L),1L,(-3L)},{0xA9B2892BL,0L,0x5412C8B7L,(-6L),0L,(-6L),0xA9B2892BL,0x7719DFADL,(-6L)}};
            unsigned char l_779[2];
            short l_789 = 1L;
            int i, j;
            for (i = 0; i < 2; i++)
                l_779[i] = 0xF0L;
            (*g_306) = l_729;
            for (l_726 = 0; (l_726 < (-4)); l_726 = safe_sub_func_int8_t_s_s(l_726, 7))
            {
                short l_737 = 0x0227L;
                int *l_744 = &g_541;
                const int *l_756 = &g_67[3][1][1];
                unsigned l_768 = 0x4BB78683L;
                short l_778 = 0x3E09L;
                unsigned l_780 = 1UL;
                unsigned short l_781 = 0x151EL;
                int l_788[8] = {0x3C64C44FL,0x3C64C44FL,0x3C64C44FL,0x3C64C44FL,0x3C64C44FL,0x3C64C44FL,0x3C64C44FL,0x3C64C44FL};
                unsigned char l_792 = 0xEDL;
                unsigned char l_796 = 0UL;
                int i;
                if (((safe_add_func_int16_t_s_s(l_726, (l_734[2] != l_734[2]))) > (safe_rshift_func_uint16_t_u_s((l_737 == p_15), 0))))
                {
                    int *l_759 = &g_541;
                    int l_790 = 0xEA844782L;
                    for (g_673 = 0; (g_673 <= 1); g_673 += 1)
                    {
                        int i, j;
                        (*l_744) ^= func_54((((safe_mod_func_uint32_t_u_u((safe_add_func_uint16_t_u_u(g_551[(g_673 + 2)][(g_673 + 1)], p_15)), (safe_add_func_uint8_t_u_u((p_15 && ((1UL != g_71[1][0][7]) | (((void*)0 != l_744) ^ (l_745 == (void*)0)))), p_15)))) == g_99) > (-5L)), g_235, p_15);
                        l_756 = func_78(&g_62[4], (0x7E73A5EEL <= 0UL), g_551[3][4], func_83(p_15, (safe_add_func_int16_t_s_s(l_749[1][8], ((p_15 != (((~(safe_mul_func_int8_t_s_s(((safe_mod_func_int8_t_s_s((g_551[5][0] != (safe_lshift_func_uint8_t_u_s((*l_744), 2))), 0x01L)) >= p_15), p_15))) || p_15) ^ g_553[5])) && (*l_744)))), g_24[0][0]));
                    }
                    (*g_306) = &l_749[1][8];
                    if (p_15)
                    {
                        int **l_762 = &l_759;
                        (**l_762) = (safe_sub_func_uint8_t_u_u(p_15, (((((l_759 == (void*)0) ^ 0x2655D3EDL) == (g_557 < (safe_rshift_func_int8_t_s_u((g_237 > ((l_762 == (void*)0) || (safe_mul_func_int16_t_s_s(((~g_541) ^ (**l_762)), 1L)))), p_15)))) >= g_553[0]) >= p_15)));
                        if (p_15)
                            break;
                        if ((**g_704))
                            continue;
                    }
                    else
                    {
                        unsigned char l_765 = 254UL;
                        int l_773 = 9L;
                        if (l_765)
                            break;
                        if ((*g_58))
                            continue;
                        (***l_745) = (*l_744);
                        (*l_759) = (safe_rshift_func_int16_t_s_s(l_768, ((((safe_sub_func_int16_t_s_s(((func_92((+(!(safe_sub_func_uint16_t_u_u(p_15, (((*l_759) & l_773) >= p_15)))))) || (safe_lshift_func_int8_t_s_s(((p_15 <= p_15) == (p_15 >= 5L)), p_15))) <= p_15), l_778)) == l_779[1]) != l_780) & p_15)));
                    }
                    if ((**g_306))
                    {
                        (*l_744) ^= p_15;
                        l_756 = (*g_704);
                    }
                    else
                    {
                        int *l_782 = &g_541;
                        int *l_783 = &l_749[1][8];
                        int *l_784[8][4][8] = {{{&g_24[3][2],&g_71[1][0][7],(void*)0,&g_67[3][1][1],&g_24[4][0],&g_99,&g_99,(void*)0},{&g_21,&g_541,&g_24[4][0],&g_21,&g_99,&g_96,&g_96,&g_99},{&g_67[4][2][1],(void*)0,(void*)0,&g_67[4][2][1],(void*)0,&g_21,&g_24[2][1],&g_96},{&g_96,&g_71[2][0][8],&g_99,&g_96,(void*)0,&g_21,(void*)0,(void*)0}},{{(void*)0,&g_71[2][0][8],&g_99,&g_541,&g_541,&g_21,(void*)0,&g_71[1][1][1]},{&g_62[4],(void*)0,&g_67[3][1][1],&g_21,&g_24[0][0],&g_96,&g_24[1][0],(void*)0},{&g_24[1][0],&g_541,&g_67[4][2][1],(void*)0,(void*)0,&g_99,&g_71[0][1][0],&g_71[1][0][5]},{(void*)0,&g_71[1][0][7],&g_71[1][0][7],&g_99,&g_62[2],(void*)0,&g_62[2],&g_62[2]}},{{&g_541,&g_99,&g_71[0][1][0],&g_541,&g_71[2][0][8],&g_541,&g_24[1][0],&g_99},{&g_71[1][0][7],&g_67[3][1][1],&g_71[1][0][7],&g_71[1][1][1],&g_541,&g_24[3][2],&g_21,&g_71[1][0][7]},{&g_96,(void*)0,(void*)0,(void*)0,&l_749[2][6],&g_67[4][0][0],&g_99,&g_67[3][1][1]},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&g_71[0][1][0],(void*)0,(void*)0}},{{&l_749[1][4],&g_24[1][0],&l_749[1][4],&g_21,&l_749[1][8],&g_71[1][1][1],&g_71[0][1][0],&g_99},{&g_71[1][1][1],&g_541,&g_24[0][0],&g_62[9],&g_99,&l_749[5][4],&l_749[1][8],&l_749[2][6]},{&g_71[1][1][1],&g_71[1][0][7],&g_71[2][0][8],&g_71[1][0][5],&l_749[1][8],&g_24[0][0],&g_67[3][1][1],&g_62[2]},{&l_749[1][4],&g_24[1][0],(void*)0,&g_541,(void*)0,&g_67[3][1][1],&g_62[4],&g_67[0][2][0]}},{{(void*)0,&l_749[0][5],&g_67[4][2][1],&g_62[2],&l_749[2][6],&g_71[1][0][5],(void*)0,&g_71[2][1][7]},{&g_62[2],&g_21,&g_71[1][0][7],(void*)0,&g_24[1][0],&g_96,&g_24[0][0],&g_21},{&g_24[1][0],&l_749[5][4],(void*)0,&g_21,&g_96,&g_96,&g_62[2],&g_24[1][0]},{&l_749[2][6],&g_21,&g_541,(void*)0,&g_541,&g_67[3][1][1],&g_71[2][1][7],&g_67[3][1][1]}},{{&g_71[1][1][4],&l_749[1][4],&g_96,(void*)0,&g_21,&g_99,&g_71[1][0][7],(void*)0},{&g_62[2],&g_96,&g_99,&g_24[1][0],(void*)0,(void*)0,&g_24[1][0],&g_99},{(void*)0,(void*)0,&g_71[1][0][7],&g_67[4][2][1],&g_71[1][0][7],&g_71[1][0][7],&g_71[1][1][1],&l_749[2][6]},{&l_749[1][8],&g_71[1][1][4],&g_96,(void*)0,&g_24[2][1],(void*)0,&g_67[6][1][0],&l_749[2][6]}},{{&g_71[1][1][4],(void*)0,(void*)0,&l_749[5][4],(void*)0,(void*)0,&g_99,&g_21},{&g_541,(void*)0,&g_67[3][1][1],&l_749[1][8],(void*)0,&l_749[5][4],(void*)0,&g_96},{&g_71[1][0][5],&g_62[2],(void*)0,&g_62[4],(void*)0,&g_541,&g_24[1][0],&g_71[1][1][4]},{&g_71[1][0][7],&g_62[2],(void*)0,&g_71[1][0][7],&g_21,&g_21,&g_96,&g_99}},{{&g_67[3][1][1],(void*)0,&g_541,(void*)0,&g_24[1][0],&l_749[1][4],&g_24[3][2],&g_99},{(void*)0,&g_67[0][2][0],&g_71[0][1][0],&g_71[1][0][7],&g_21,&g_24[2][1],&g_99,(void*)0},{&g_96,(void*)0,(void*)0,&g_96,&g_96,&g_62[4],&g_71[1][0][7],&g_541},{&g_71[2][0][8],(void*)0,&g_99,(void*)0,&g_24[0][0],(void*)0,&g_99,(void*)0}}};
                        int i, j, k;
                        --l_792;
                        if ((*g_58))
                            continue;
                        (*g_704) = l_782;
                        l_796++;
                    }
                }
                else
                {
                    unsigned l_801[7] = {0UL,1UL,0UL,0UL,1UL,0UL,0UL};
                    int i;
                    for (g_541 = (-30); (g_541 < 14); g_541 = safe_add_func_uint8_t_u_u(g_541, 3))
                    {
                        l_801[2] |= 0L;
                    }
                    (*l_744) = (*g_320);
                }
                if (p_15)
                    break;
            }
        }
    }
    else
    {
        int *l_802 = &g_71[0][2][0];
        (*l_802) = p_15;
    }
    g_813++;
    ++l_817;
    return l_820;
}







static short func_16(unsigned char p_17, char p_18)
{
    char l_19 = 0x48L;
    short l_22[4][2][5] = {{{0x7153L,0x7153L,0L,0x00D3L,(-1L)},{0xA0C0L,(-4L),(-4L),0xA0C0L,0x7153L}},{{0xA0C0L,0x00D3L,0x7153L,0x7153L,0L},{0xA0C0L,(-2L),0x7153L,(-1L),(-1L)}},{{(-2L),0xA0C0L,(-2L),0x7153L,(-1L)},{0L,0x00D3L,(-1L),0x00D3L,0L}},{{(-2L),0x00D3L,0xA0C0L,0L,0xA0C0L},{0xA0C0L,0xA0C0L,(-1L),0L,(-4L)}}};
    int i, j, k;
lbl_29:
    (*g_20) ^= l_19;
    for (p_17 = 0; (p_17 <= 1); p_17 += 1)
    {
        int l_25[1];
        unsigned l_26 = 0UL;
        int i;
        for (i = 0; i < 1; i++)
            l_25[i] = 0x7DFCC86FL;
        if (l_22[0][0][0])
            break;
        for (g_21 = 1; (g_21 >= 0); g_21 -= 1)
        {
            int *l_23 = &g_24[1][0];
            l_26--;
            for (l_19 = 0; (l_19 <= 1); l_19 += 1)
            {
                unsigned l_692 = 0UL;
                int i, j, k;
                for (l_26 = 0; (l_26 <= 2); l_26 += 1)
                {
                    int i, j, k;
                    if (l_26)
                        goto lbl_29;
                    (*g_306) = func_30(l_22[(p_17 + 2)][l_19][(l_26 + 2)]);
                    for (g_557 = 0; (g_557 <= 1); g_557 += 1)
                    {
                        int *l_691 = &g_21;
                        int *l_693 = &g_96;
                        int i, j, k;
                        g_24[g_21][(l_19 + 1)] = (((*l_23) == (*l_23)) > 3L);
                        (*g_306) = func_83(func_54((((void*)0 != (*g_306)) | ((void*)0 != &g_686)), func_92(p_18), l_692), g_553[0], (*l_691));
                        if (p_17)
                            break;
                        (*g_704) = func_78(l_693, (p_18 > 0x60L), (safe_sub_func_int16_t_s_s((((((!func_59(&g_24[g_21][(l_19 + 1)])) > ((-6L) >= (((safe_add_func_uint16_t_u_u(((*l_23) >= (safe_lshift_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(255UL, (safe_add_func_int16_t_s_s(p_18, (*l_23))))), 10))), (*l_23))) != l_25[0]) && g_11))) == p_17) > g_614) < 0xFD30L), p_18)), &g_24[1][0]);
                    }
                }
                (*l_23) |= func_92(l_22[(p_17 + 1)][g_21][l_19]);
            }
        }
    }
    return l_19;
}







static int * func_30(char p_31)
{
    int *l_32 = &g_24[2][2];
    int *l_33 = &g_24[4][2];
    int *l_34[6][10];
    unsigned char l_35 = 2UL;
    int l_581 = 0xECC2F7ECL;
    unsigned l_589 = 4294967289UL;
    short l_612 = (-1L);
    unsigned char l_638[9][7] = {{255UL,255UL,255UL,255UL,0UL,0x75L,6UL},{1UL,0xC2L,0x1BL,0xD8L,0xC2L,0x11L,0xB7L},{0xC2L,252UL,0x5FL,0UL,0xA6L,0x5FL,6UL},{0xFBL,0xB7L,1UL,0xC2L,0xD8L,0xD8L,0xC2L},{1UL,255UL,1UL,0UL,252UL,0x5FL,255UL},{252UL,0xFBL,0x5FL,0xC2L,6UL,0UL,255UL},{0UL,255UL,0x1BL,0xA6L,0xD8L,0x5FL,0UL},{0x75L,0xA6L,255UL,0xD8L,255UL,0xD8L,255UL},{0xA6L,0xA6L,0UL,252UL,0xFBL,0x5FL,0xC2L}};
    char l_678[9] = {0x8DL,0x8DL,0x8DL,0x8DL,0x8DL,0x8DL,0x8DL,0x8DL,0x8DL};
    int i, j;
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 10; j++)
            l_34[i][j] = &g_24[1][0];
    }
    l_35--;
    return &g_96;
}







static short func_44(int * p_45, unsigned p_46, unsigned p_47, int * p_48, int p_49)
{
    int *l_429 = (void*)0;
    int *l_430 = (void*)0;
    int *l_431 = &g_71[1][1][2];
    int l_507 = 0xE997C184L;
    int l_508 = 0x54F51531L;
    int l_513 = 0xB363B81CL;
    int l_534 = 0xF0308F76L;
    int ***l_567[4];
    int **l_580 = &l_430;
    int i;
    for (i = 0; i < 4; i++)
        l_567[i] = (void*)0;
lbl_542:
    (*l_431) ^= (*p_48);
    for (p_46 = (-9); (p_46 == 34); p_46++)
    {
        const unsigned char l_436 = 3UL;
        int l_460 = (-1L);
        int l_461 = 1L;
        int l_462 = 0xF94E1586L;
        int **l_481 = &g_58;
        int ***l_480 = &l_481;
        int l_574[9][9][3] = {{{(-3L),0xF3F796B8L,1L},{(-1L),0xB4E048F1L,0xF3F796B8L},{0xCC51184AL,0xE7E24793L,0x17046ED7L},{(-2L),0xB3CEA17EL,0L},{0xCC51184AL,0xE03D9AABL,6L},{(-1L),0x17046ED7L,0xC9E0F572L},{(-3L),0xB4E048F1L,0x19D9E5A9L},{(-8L),0x19D9E5A9L,0x19D9E5A9L},{(-2L),(-1L),0xC9E0F572L}},{{6L,(-6L),6L},{0x697409B2L,0x9B1B184FL,0L},{1L,0xB4E048F1L,0x17046ED7L},{0x7631EABBL,0x9B1B184FL,0xF3F796B8L},{(-2L),(-6L),1L},{5L,(-1L),6L},{0x1606F2F5L,0x19D9E5A9L,(-10L)},{0x1606F2F5L,0xB4E048F1L,0xE7E24793L},{5L,0x17046ED7L,0x9B1B184FL}},{{(-2L),0xE03D9AABL,8L},{0x7631EABBL,0xB3CEA17EL,6L},{1L,0xE7E24793L,8L},{0x697409B2L,0xB4E048F1L,0x9B1B184FL},{6L,0xF3F796B8L,0xE7E24793L},{(-2L),0xC997C0C1L,(-10L)},{(-8L),0xC997C0C1L,6L},{(-3L),0xF3F796B8L,1L},{(-1L),0xB4E048F1L,0xF3F796B8L}},{{0xCC51184AL,0xE7E24793L,0x17046ED7L},{(-2L),0xB3CEA17EL,0L},{0xCC51184AL,0xE03D9AABL,6L},{(-1L),7L,7L},{0xC997C0C1L,0x86898D15L,(-1L)},{0x9B1B184FL,(-1L),(-1L)},{0xE50134BFL,0xFF44ACEAL,7L},{0xF3F796B8L,0x24C6B925L,0x6A2693A3L},{(-1L),0x4490FFFDL,0x2BAA1BECL}},{{0xE03D9AABL,0x86898D15L,7L},{0x19D9E5A9L,0x4490FFFDL,0xBB4257F7L},{0xE50134BFL,0x24C6B925L,(-1L)},{0xE7E24793L,0xFF44ACEAL,0x6A2693A3L},{(-6L),(-1L),0xFCB66095L},{(-6L),0x86898D15L,0xE8A9753FL},{0xE7E24793L,7L,0x4490FFFDL},{0xE50134BFL,0xBD671CD8L,0x610CF914L},{0x19D9E5A9L,0x971E4AD6L,0x6A2693A3L}},{{0xE03D9AABL,0xE8A9753FL,0x610CF914L},{(-1L),0x86898D15L,0x4490FFFDL},{0xF3F796B8L,0xBB4257F7L,0xE8A9753FL},{0xE50134BFL,0x3574C1A7L,0xFCB66095L},{0x9B1B184FL,0x3574C1A7L,0x6A2693A3L},{0xC997C0C1L,0xBB4257F7L,(-1L)},{0xB3CEA17EL,0x86898D15L,0xBB4257F7L},{0x17046ED7L,0xE8A9753FL,7L},{0xE50134BFL,0x971E4AD6L,0x2BAA1BECL}},{{0x17046ED7L,0xBD671CD8L,0x6A2693A3L},{0xB3CEA17EL,7L,7L},{0xC997C0C1L,0x86898D15L,(-1L)},{0x9B1B184FL,(-1L),(-1L)},{0xE50134BFL,0xFF44ACEAL,7L},{0xF3F796B8L,0x24C6B925L,0x6A2693A3L},{(-1L),0x4490FFFDL,0x2BAA1BECL},{0xE03D9AABL,0x86898D15L,7L},{0xC9E0F572L,0x2BAA1BECL,0x610CF914L}},{{0x2745B5B7L,0xE8A9753FL,1L},{1L,7L,0xBD671CD8L},{0xE7E24793L,7L,0x0EA56B20L},{0xE7E24793L,3L,(-1L)},{1L,0xFCB66095L,0x2BAA1BECL},{0x2745B5B7L,0x4490FFFDL,0x86898D15L},{0xC9E0F572L,(-1L),0xBD671CD8L},{0x9B1B184FL,(-1L),0x86898D15L},{0x17046ED7L,3L,0x2BAA1BECL}},{{8L,0x610CF914L,(-1L)},{0x2745B5B7L,0xBB4257F7L,0x0EA56B20L},{0L,0xBB4257F7L,0xBD671CD8L},{0xF3F796B8L,0x610CF914L,1L},{0x19D9E5A9L,3L,0x610CF914L},{(-10L),(-1L),0xFCB66095L},{0x2745B5B7L,(-1L),1L},{(-10L),0x4490FFFDL,0xBD671CD8L},{0x19D9E5A9L,0xFCB66095L,8L}}};
        int i, j, k;
        if ((safe_mod_func_uint32_t_u_u(func_92(func_54(g_62[3], p_47, p_49)), g_24[0][2])))
        {
            (*l_431) &= (*g_350);
        }
        else
        {
            unsigned short l_437 = 0x4C44L;
            int *l_439 = &g_71[1][0][7];
            int l_459 = 0x622A38E3L;
            int l_463 = 1L;
            if ((l_436 != func_54(((l_437 == g_67[3][1][1]) && l_437), l_437, p_46)))
            {
                unsigned short l_438 = 0x1E24L;
                int *l_440 = &g_96;
                p_45 = func_83(func_59(&g_62[2]), p_47, l_438);
                (*g_306) = l_440;
                if ((*l_431))
                    continue;
                (*g_306) = (void*)0;
            }
            else
            {
                unsigned short l_464 = 65529UL;
                (*l_439) = (safe_add_func_uint16_t_u_u(((!((void*)0 == p_48)) | ((safe_sub_func_uint8_t_u_u((safe_mul_func_int16_t_s_s(p_46, (((safe_lshift_func_int8_t_s_s(0x9DL, (((safe_sub_func_int8_t_s_s(g_70, (((*l_439) ^ (safe_rshift_func_uint8_t_u_u(((safe_lshift_func_int16_t_s_u(func_92((p_47 > l_436)), 14)) != g_71[1][0][7]), 3))) < 0UL))) | p_49) < g_71[0][2][5]))) && g_237) > 4294967293UL))), g_11)) != p_47)), p_47));
                for (p_49 = (-29); (p_49 >= 26); p_49 = safe_add_func_int32_t_s_s(p_49, 3))
                {
                    int *l_457 = &g_99;
                    int *l_458[10] = {(void*)0,&g_62[1],(void*)0,&g_62[1],(void*)0,&g_62[1],(void*)0,&g_62[1],(void*)0,&g_62[1]};
                    int i;
                    (*g_306) = (*g_306);
                    --l_464;
                }
            }
            (*g_306) = l_429;
        }
        for (l_460 = 1; (l_460 >= 0); l_460 -= 1)
        {
            int * const *l_483 = (void*)0;
            int * const **l_482 = &l_483;
            int l_509[1][7] = {{(-5L),(-5L),(-5L),(-5L),(-5L),(-5L),(-5L)}};
            int l_510 = 0x7815A0F0L;
            int i, j;
            if ((safe_sub_func_uint32_t_u_u(p_49, (safe_rshift_func_uint16_t_u_u(p_46, (safe_rshift_func_int8_t_s_s((~g_99), ((((safe_rshift_func_int16_t_s_u(g_66, func_92(g_71[1][0][7]))) >= (l_462 >= (p_46 == ((*p_48) > 0xAE248D66L)))) == p_47) | l_462))))))))
            {
                int *l_475 = &g_71[1][0][7];
                int l_502 = 0x65959516L;
                int l_511 = 1L;
                int l_512 = (-1L);
                int l_514 = 0xA5E5EBDBL;
                int l_515[3][2] = {{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)}};
                unsigned l_516 = 0x8894DB17L;
                unsigned l_526 = 0xEFA829DDL;
                int i, j;
                for (p_47 = 0; (p_47 <= 1); p_47 += 1)
                {
                    int i, j, k;
                    g_67[(p_47 + 4)][p_47][l_460] = (*l_431);
                    (*g_306) = l_475;
                }
                if ((*p_48))
                    break;
                (*l_475) ^= (safe_mul_func_uint16_t_u_u(((safe_lshift_func_int16_t_s_u((~(l_480 == l_482)), 3)) >= g_24[1][0]), 0xFEBAL));
                if ((safe_mod_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u((safe_lshift_func_uint8_t_u_u(g_11, ((safe_lshift_func_int16_t_s_u((((safe_mul_func_int16_t_s_s((1L > (safe_mul_func_int16_t_s_s((safe_add_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s(g_235, 4)), func_92((safe_mul_func_int16_t_s_s(g_24[3][2], g_11))))), (&l_483 == &g_319)))), func_92(g_62[2]))) >= (-7L)) != 0x0BL), p_46)) == p_49))), 0)), 0x4EL)))
                {
                    int *l_503 = &g_71[1][0][7];
                    int *l_504 = &g_24[0][2];
                    int *l_505 = (void*)0;
                    int *l_506[6] = {&l_502,&l_502,&l_502,&l_502,&l_502,&l_502};
                    int i;
                    ++l_516;
                }
                else
                {
                    char l_525 = 0xB7L;
                    (*l_431) = ((void*)0 == p_45);
                    if ((*p_45))
                    {
                        unsigned short l_533[4] = {1UL,1UL,1UL,1UL};
                        int i;
                        (*l_475) = (((((safe_add_func_int16_t_s_s(p_46, ((safe_mod_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u((l_525 == g_237), (l_526 & ((safe_mul_func_uint8_t_u_u((g_96 <= (~1L)), (safe_lshift_func_uint16_t_u_u(func_92(g_24[1][0]), (safe_rshift_func_int8_t_s_u(g_24[3][0], g_67[4][1][1])))))) || l_533[1])))), g_11)) >= 0L))) && g_21) >= l_525) || 0x1A922997L) & (*p_45));
                        (*p_48) = l_534;
                    }
                    else
                    {
                        g_541 &= (safe_mod_func_int16_t_s_s((((safe_rshift_func_uint16_t_u_u(65535UL, ((safe_add_func_uint8_t_u_u(p_47, p_46)) | (-3L)))) && p_47) > 0x6621FB47L), func_92(g_21)));
                        if ((*g_20))
                            continue;
                        if (g_11)
                            goto lbl_542;
                    }
                }
            }
            else
            {
                short l_544 = 0x8E26L;
                int l_547 = 0x06436492L;
                int l_552[8] = {0x07751AAEL,0x07751AAEL,0x07751AAEL,0x07751AAEL,0x07751AAEL,0x07751AAEL,0x07751AAEL,0x07751AAEL};
                int i;
                if (func_92(p_47))
                {
                    char l_548 = 0x4EL;
                    int l_549[6] = {0xEA6D7FB1L,0xEA6D7FB1L,0xEA6D7FB1L,0xEA6D7FB1L,0xEA6D7FB1L,0xEA6D7FB1L};
                    int i;
                    if ((*g_350))
                    {
                        int *l_543 = &g_24[0][0];
                        int *l_545 = &l_513;
                        int *l_546[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                        int l_550 = (-9L);
                        int i;
                        ++g_553[3];
                        (*l_545) = (p_48 == (*l_481));
                        return g_553[2];
                    }
                    else
                    {
                        const int *l_556[6] = {&g_541,&g_541,&g_541,&g_541,&g_541,&g_541};
                        int i;
                        (*l_431) = (~(*g_20));
                        l_556[3] = func_78(&g_67[1][2][1], g_96, p_47, func_83(g_21, (p_47 < ((void*)0 != &p_48)), g_62[2]));
                        (**l_480) = p_48;
                    }
                    if ((*p_45))
                        break;
                    if ((*p_48))
                    {
                        return g_557;
                    }
                    else
                    {
                        if (g_99)
                            goto lbl_542;
                    }
                    (*l_431) &= (**l_481);
                }
                else
                {
                    unsigned char l_558 = 255UL;
                    const unsigned l_579 = 4294967294UL;
                    if ((*p_48))
                    {
                        (*g_306) = (**l_480);
                        ++l_558;
                    }
                    else
                    {
                        unsigned l_573 = 9UL;
                        (*p_48) = (safe_add_func_int32_t_s_s(0xBB32BB68L, (safe_mul_func_uint16_t_u_u((0UL < (safe_mul_func_int16_t_s_s(((((*g_20) ^ ((((p_49 ^ ((&l_481 == l_567[3]) >= (safe_add_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_u((((p_49 > p_47) != (safe_unary_minus_func_int16_t_s(p_47))) | p_46), 13)), 0L)))) || p_47) ^ p_47) < l_573)) && 1UL) ^ p_47), g_24[1][0]))), l_574[2][8][0]))));
                    }
                    if ((*p_48))
                        continue;
                    (*l_431) |= (safe_mod_func_uint32_t_u_u(g_67[2][0][1], (safe_mod_func_int16_t_s_s(0xD113L, (+(((void*)0 == &p_48) == l_579))))));
                    (*g_306) = p_45;
                }
            }
        }
    }
    (*p_45) = 0x6FA6860EL;
    (*l_580) = func_83(g_61, g_551[5][0], ((g_21 ^ func_92(func_92(((void*)0 != l_580)))) & (p_46 | (g_557 && 0xA2827331L))));
    return g_11;
}







static char func_54(short p_55, unsigned p_56, char p_57)
{
    unsigned char l_349 = 255UL;
    int **l_361 = (void*)0;
    int ***l_360[5] = {&l_361,&l_361,&l_361,&l_361,&l_361};
    const int *l_366 = &g_71[1][0][7];
    unsigned short l_428 = 0x373CL;
    int i;
lbl_398:
    if (func_59(&g_24[4][0]))
    {
        int *l_348 = &g_24[1][0];
        int l_353 = (-8L);
        int l_356 = 0x9EBF1562L;
        unsigned char l_357 = 255UL;
        int ** const *l_362 = &l_361;
        if ((((+func_92((safe_unary_minus_func_int32_t_s((9UL != ((l_348 != (void*)0) < (0L >= l_349))))))) || l_349) & (*l_348)))
        {
            int * const l_351 = &g_21;
            int l_352 = (-10L);
            int *l_354 = &g_67[3][1][1];
            int *l_355[10][8][3] = {{{&g_24[1][0],&g_71[1][0][7],&g_24[1][0]},{&g_99,&g_99,&g_99},{&g_96,&g_71[1][0][7],&g_67[3][1][1]},{&g_24[1][0],&g_24[1][0],&g_99},{&g_24[1][0],&g_67[3][1][1],&g_24[1][0]},{&g_24[1][0],&g_99,&g_99},{&g_96,&g_67[3][1][1],&g_67[3][1][1]},{&g_99,&g_24[1][0],&g_99}},{{&g_24[1][0],&g_71[1][0][7],&g_24[1][0]},{&g_99,&g_99,&g_99},{&g_96,&g_71[1][0][7],&g_67[3][1][1]},{&g_24[1][0],&g_24[1][0],&g_99},{&g_24[1][0],&g_67[3][1][1],&g_24[1][0]},{&g_24[1][0],&g_99,&g_99},{&g_96,&g_67[3][1][1],&g_67[3][1][1]},{&g_99,&g_24[1][0],&g_99}},{{&g_24[1][0],&g_71[1][0][7],&g_24[1][0]},{&g_99,&g_99,&g_99},{&g_96,&g_71[1][0][7],&g_67[3][1][1]},{&g_24[1][0],&g_24[1][0],&g_99},{&g_24[1][0],&g_67[3][1][1],&g_24[1][0]},{&g_24[1][0],&g_99,&g_99},{&g_96,&g_67[3][1][1],&g_67[3][1][1]},{&g_99,&g_24[1][0],&g_99}},{{&g_24[1][0],&g_71[1][0][7],&g_24[1][0]},{&g_99,&g_99,&g_99},{&g_96,&g_71[1][0][7],&g_67[3][1][1]},{&g_24[1][0],&g_24[1][0],&g_99},{&g_24[1][0],&g_67[3][1][1],&g_24[1][0]},{&g_24[1][0],&g_99,&g_99},{&g_96,&g_67[3][1][1],&g_67[3][1][1]},{&g_99,&g_24[1][0],&g_99}},{{&g_24[1][0],&g_71[1][0][7],&g_24[1][0]},{&g_99,&g_99,&g_99},{&g_96,&g_71[1][0][7],&g_67[3][1][1]},{&g_24[1][0],&g_24[1][0],&g_99},{&g_24[1][0],&g_67[3][1][1],&g_24[1][0]},{&g_24[1][0],&g_99,&g_99},{&g_96,&g_67[3][1][1],&g_67[3][1][1]},{&g_99,&g_24[1][0],&g_99}},{{&g_24[1][0],&g_71[1][0][7],&g_24[1][0]},{&g_99,&g_99,&g_99},{&g_96,&g_71[1][0][7],&g_67[3][1][1]},{&g_24[1][0],&g_24[1][0],&g_99},{&g_24[1][0],&g_67[3][1][1],&g_24[1][0]},{&g_24[1][0],&g_99,&g_99},{&g_96,&g_67[3][1][1],&g_67[3][1][1]},{&g_99,&g_24[1][0],&g_99}},{{&g_24[1][0],&g_71[1][0][7],&g_24[1][0]},{&g_99,&g_99,&g_99},{&g_96,&g_71[1][0][7],&g_67[3][1][1]},{&g_24[1][0],&g_24[1][0],&g_99},{&g_24[1][0],&g_67[3][1][1],&g_24[1][0]},{&g_24[1][0],&g_99,&g_99},{&g_96,&g_67[3][1][1],&g_67[3][1][1]},{&g_99,&g_24[1][0],&g_99}},{{&g_24[1][0],&g_71[1][0][7],&g_24[1][0]},{&g_99,&g_99,&g_99},{&g_96,&g_71[1][0][7],&g_67[3][1][1]},{&g_24[1][0],&g_24[1][0],&g_99},{&g_24[1][0],&g_67[3][1][1],&g_24[1][0]},{&g_24[1][0],&g_99,&g_99},{&g_96,&g_67[3][1][1],&g_67[3][1][1]},{&g_99,&g_24[1][0],&g_99}},{{&g_24[1][0],&g_71[1][0][7],&g_24[1][0]},{&g_99,&g_99,&g_99},{&g_96,&g_71[1][0][7],&g_67[3][1][1]},{&g_24[1][0],&g_24[1][0],&g_99},{&g_24[1][0],&g_67[3][1][1],&g_24[1][0]},{&g_24[1][0],&g_99,&g_99},{&g_96,&g_67[3][1][1],&g_67[3][1][1]},{&g_99,&g_24[1][0],&g_99}},{{&g_24[1][0],&g_71[1][0][7],&g_24[1][0]},{&g_99,&g_99,&g_99},{&g_96,&g_71[1][0][7],&g_67[3][1][1]},{&g_24[1][0],&g_24[1][0],&g_99},{&g_24[1][0],&g_67[3][1][1],&g_24[1][0]},{&g_24[1][0],&g_99,&g_99},{&g_96,&g_67[3][1][1],&g_67[3][1][1]},{&g_99,&g_24[1][0],&g_99}}};
            int i, j, k;
            (*g_350) = (l_349 || p_55);
            l_348 = l_351;
            ++l_357;
        }
        else
        {
            l_353 ^= (((((func_92(g_67[0][1][0]) == p_57) & g_235) || ((l_360[0] == l_362) >= g_363)) || ((((safe_unary_minus_func_uint16_t_u(65535UL)) < (-10L)) ^ 65533UL) != p_56)) & p_57);
        }
    }
    else
    {
        int *l_365 = &g_24[2][0];
        (*g_306) = l_365;
        (*g_306) = func_83(p_57, (((void*)0 == l_366) <= (safe_lshift_func_uint16_t_u_s(((*l_365) < 0x34001218L), (safe_mod_func_uint32_t_u_u(((((0x51F5BEE5L != (((*g_306) != l_365) > (p_57 < p_56))) & g_65) > g_71[2][0][1]) | (*l_365)), g_67[3][1][1]))))), p_56);
    }
    for (p_55 = 0; (p_55 < 16); ++p_55)
    {
        unsigned char l_373 = 0x97L;
        unsigned char l_379 = 1UL;
        int l_401[1];
        int ***l_403[6];
        unsigned l_414 = 0x25AF9F93L;
        int i;
        for (i = 0; i < 1; i++)
            l_401[i] = 0xD0DB72E8L;
        for (i = 0; i < 6; i++)
            l_403[i] = &l_361;
        for (l_349 = 0; (l_349 <= 1); l_349 += 1)
        {
            unsigned short l_374[3];
            int l_390[1][4];
            int *l_405 = &g_99;
            int i, j;
            for (i = 0; i < 3; i++)
                l_374[i] = 0x54BEL;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 4; j++)
                    l_390[i][j] = 0xBEEAC1E9L;
            }
            l_373 ^= 0xC80797C9L;
            for (p_57 = 1; (p_57 >= 0); p_57 -= 1)
            {
                int i, j, k;
                l_374[2] |= g_67[(l_349 + 3)][(l_349 + 1)][l_349];
            }
            for (g_96 = 0; (g_96 == (-23)); g_96 = safe_sub_func_uint16_t_u_u(g_96, 8))
            {
                int *l_388 = &g_71[1][0][7];
                int l_389[1];
                unsigned l_415 = 0xF9684B9FL;
                int i;
                for (i = 0; i < 1; i++)
                    l_389[i] = 0xE79F4F3CL;
                for (g_99 = (-2); (g_99 != (-26)); g_99 = safe_sub_func_int16_t_s_s(g_99, 7))
                {
                    char l_386 = 0xDEL;
                    int l_392 = 0x50C0B7CCL;
                    int l_393 = 0x12C5E3DBL;
                    int ***l_402 = (void*)0;
                    if (func_92(l_379))
                    {
                        unsigned l_387 = 4294967295UL;
                        int l_391 = 0x07DE2283L;
                        int l_394 = 0xCE3634F9L;
                        unsigned l_395[7];
                        int i;
                        for (i = 0; i < 7; i++)
                            l_395[i] = 0x229261BBL;
                        l_387 = ((safe_rshift_func_uint8_t_u_s((safe_add_func_uint16_t_u_u(g_99, p_57)), 2)) <= (safe_add_func_uint16_t_u_u(l_386, 6L)));
                        l_388 = func_83(g_67[1][1][0], p_55, g_71[1][0][7]);
                        l_395[3]++;
                        l_392 |= p_56;
                    }
                    else
                    {
                        if (g_21)
                            goto lbl_398;
                        if ((*l_388))
                            break;
                        (*l_388) = 5L;
                    }
                    for (p_56 = 0; (p_56 < 21); p_56++)
                    {
                        l_401[0] = (0UL | 0xD4L);
                        (*l_388) |= (l_402 != l_403[0]);
                        (*g_306) = func_83(func_92(g_71[2][1][4]), p_55, (*l_366));
                        if (p_55)
                            break;
                    }
                }
                for (p_57 = 0; (p_57 <= 0); p_57 += 1)
                {
                    const int *** const l_404 = (void*)0;
                    int i;
                    if (l_401[p_57])
                    {
                        if (g_96)
                            goto lbl_398;
                        (*l_388) = ((void*)0 != l_404);
                    }
                    else
                    {
                        int i;
                        return l_389[p_57];
                    }
                    for (l_379 = 0; (l_379 <= 9); l_379 += 1)
                    {
                        int i;
                        (*l_388) ^= g_62[l_379];
                        l_405 = func_83(p_55, p_57, g_61);
                        l_414 &= (func_92(g_70) <= (safe_mod_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s(((safe_rshift_func_uint16_t_u_u((0xE8BA9BF6L || 0xC73B1EACL), 14)) && (safe_mul_func_uint16_t_u_u((&g_62[l_379] != (void*)0), 0x40D8L))), 0)), ((g_11 && (g_62[5] || p_57)) || g_62[l_379]))));
                    }
                    if (p_57)
                        break;
                }
                l_415 |= (((*l_388) != g_71[1][0][7]) | 0x36L);
                (*l_405) = (safe_rshift_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u(((p_56 > ((*l_388) > p_56)) | (((*l_388) == (((safe_rshift_func_uint8_t_u_s((safe_sub_func_uint16_t_u_u(p_55, g_71[1][0][7])), 2)) <= (0x8C80EB57L > 0x701C66A0L)) || g_96)) >= p_57)), 2)), g_67[3][1][1]));
            }
        }
        (*g_350) ^= (safe_add_func_int32_t_s_s(p_56, p_57));
        for (g_99 = 0; (g_99 >= (-18)); g_99 = safe_sub_func_uint32_t_u_u(g_99, 6))
        {
            return p_57;
        }
    }
    return l_428;
}







static int func_59(int * p_60)
{
    short l_74[6] = {0x0936L,0x0936L,0x0936L,0x0936L,0x0936L,0x0936L};
    unsigned short l_215 = 8UL;
    int *l_217[2][4][3] = {{{&g_62[2],&g_24[4][0],&g_62[2]},{&g_67[1][0][0],&g_67[1][0][0],&g_67[1][0][0]},{&g_62[2],&g_24[4][0],&g_62[2]},{&g_67[1][0][0],&g_67[1][0][0],&g_67[1][0][0]}},{{&g_62[2],&g_24[4][0],&g_62[2]},{&g_67[1][0][0],&g_67[1][0][0],&g_67[1][0][0]},{&g_62[2],&g_24[4][0],&g_62[2]},{&g_67[1][0][0],&g_67[1][0][0],&g_67[1][0][0]}}};
    int *l_323 = &g_62[7];
    int i, j, k;
    for (g_62[2] = 0; (g_62[2] >= (-13)); g_62[2] = safe_sub_func_int8_t_s_s(g_62[2], 3))
    {
        char l_75 = 0xD9L;
        int l_248[5][9] = {{(-3L),0xC64C1520L,0x7C537019L,0L,0x65F2A1A6L,0x65F2A1A6L,0L,0x7C537019L,0xC64C1520L},{0x65F2A1A6L,1L,0x2BE1D8A4L,(-1L),0x16B288F3L,0x47481B8EL,0L,0xA9E3BE04L,(-3L)},{2L,(-3L),0xA9E3BE04L,0xC64C1520L,0x8FC21AB6L,0xC64C1520L,0xA9E3BE04L,(-3L),2L},{0x16B288F3L,1L,0x542A59A2L,0x8FC21AB6L,0L,0xC64C1520L,0L,0x2BE1D8A4L,(-3L)},{1L,0xC64C1520L,0x47481B8EL,0x7C537019L,0x7C537019L,0x47481B8EL,0xC64C1520L,1L,(-1L)}};
        const int **l_263 = (void*)0;
        const int ***l_262 = &l_263;
        short l_264 = 0L;
        unsigned char l_290 = 0x93L;
        int l_345[3][1];
        int i, j;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 1; j++)
                l_345[i][j] = 1L;
        }
        for (g_67[3][1][1] = (-4); (g_67[3][1][1] >= 14); g_67[3][1][1] = safe_add_func_int16_t_s_s(g_67[3][1][1], 4))
        {
            unsigned char l_216 = 0x73L;
            for (g_71[1][0][7] = (-17); (g_71[1][0][7] <= 23); ++g_71[1][0][7])
            {
                l_75 = (g_71[1][0][7] != (l_74[4] | ((*g_20) > g_24[1][0])));
            }
            if ((*g_20))
                continue;
            for (l_75 = (-29); (l_75 >= 15); l_75++)
            {
                unsigned l_87[1];
                const int *l_239 = &g_24[1][0];
                const int **l_238 = &l_239;
                int i;
                for (i = 0; i < 1; i++)
                    l_87[i] = 8UL;
                (*l_238) = func_78(func_83(l_87[0], ((safe_mul_func_uint16_t_u_u(g_70, (safe_add_func_int16_t_s_s(((void*)0 == &g_71[0][1][2]), l_74[4])))) <= func_92(l_74[4])), (safe_add_func_uint16_t_u_u(func_92((((l_75 <= ((safe_mod_func_int32_t_s_s(l_215, l_74[4])) & g_71[2][1][0])) <= g_71[1][0][7]) >= l_216)), 0xE0CCL))), l_216, l_87[0], l_217[0][2][2]);
            }
            if ((func_92((safe_add_func_int32_t_s_s((-5L), ((&g_58 == &g_58) ^ 1UL)))) == (l_216 ^ (&p_60 != &g_58))))
            {
                return (*p_60);
            }
            else
            {
                unsigned char l_249 = 250UL;
                for (l_216 = (-21); (l_216 <= 6); ++l_216)
                {
                    char l_250 = (-7L);
                    l_248[0][0] = (safe_lshift_func_int8_t_s_u(l_216, (safe_sub_func_uint32_t_u_u(((void*)0 != &p_60), (&g_20 != &g_20)))));
                    l_248[0][0] = ((!1L) >= l_249);
                    l_250 = 0x8CF426D5L;
                    for (g_99 = 0; g_99 < 2; g_99 += 1)
                    {
                        for (l_250 = 0; l_250 < 4; l_250 += 1)
                        {
                            for (g_65 = 0; g_65 < 3; g_65 += 1)
                            {
                                l_217[g_99][l_250][g_65] = &g_96;
                            }
                        }
                    }
                }
                return (*p_60);
            }
        }
    }
    return (*p_60);
}







static const int * func_78(int * p_79, char p_80, unsigned p_81, int * p_82)
{
    unsigned l_222 = 0x1A0B69C9L;
    const unsigned l_232[8][4][3] = {{{0xD11C03A7L,1UL,0x945211CCL},{4294967290UL,1UL,4294967290UL},{0UL,0xD11C03A7L,0x945211CCL},{0UL,0UL,0xD11C03A7L}},{{4294967290UL,0xD11C03A7L,0xD11C03A7L},{0xD11C03A7L,1UL,0x945211CCL},{4294967290UL,1UL,4294967290UL},{0UL,0xD11C03A7L,0x945211CCL}},{{0UL,0UL,0xD11C03A7L},{4294967290UL,0xD11C03A7L,0xD11C03A7L},{0xD11C03A7L,1UL,0x945211CCL},{4294967290UL,1UL,4294967290UL}},{{0UL,0xD11C03A7L,0x945211CCL},{1UL,1UL,0UL},{0xD11C03A7L,0UL,0UL},{0UL,0x945211CCL,4294967290UL}},{{0xD11C03A7L,0x945211CCL,0xD11C03A7L},{1UL,0UL,4294967290UL},{1UL,1UL,0UL},{0xD11C03A7L,0UL,0UL}},{{0UL,0x945211CCL,4294967290UL},{0xD11C03A7L,0x945211CCL,0xD11C03A7L},{1UL,0UL,4294967290UL},{1UL,1UL,0UL}},{{0xD11C03A7L,0UL,0UL},{0UL,0x945211CCL,4294967290UL},{0xD11C03A7L,0x945211CCL,0xD11C03A7L},{1UL,0UL,4294967290UL}},{{1UL,1UL,0UL},{0xD11C03A7L,0UL,0UL},{0UL,0x945211CCL,4294967290UL},{0xD11C03A7L,0x945211CCL,0xD11C03A7L}}};
    int *l_236[9] = {&g_96,&g_96,&g_96,&g_96,&g_96,&g_96,&g_96,&g_96,&g_96};
    int i, j, k;
    for (g_99 = 0; (g_99 >= 10); g_99++)
    {
        const int **l_228 = (void*)0;
        const int ***l_227 = &l_228;
        int *l_229 = &g_96;
        l_222 |= (safe_add_func_int32_t_s_s((*p_79), 4294967295UL));
        (*l_229) |= ((g_67[3][1][1] | 0xD164L) || ((safe_sub_func_int16_t_s_s(g_24[1][0], p_81)) && (safe_mul_func_int8_t_s_s((6L == (l_227 != (void*)0)), func_92(p_81)))));
    }
    g_96 &= (safe_add_func_int16_t_s_s((func_92(p_80) < (l_232[6][2][2] < 0x45L)), (safe_lshift_func_int16_t_s_s((l_232[6][2][2] == p_80), ((g_24[2][0] != g_235) > l_232[6][2][2])))));
    (*p_79) &= (g_237 || g_11);
    return l_236[7];
}







static int * func_83(unsigned short p_84, short p_85, unsigned short p_86)
{
    return &g_71[1][0][7];
}







static unsigned char func_92(unsigned p_93)
{
    unsigned short l_111 = 65533UL;
    int *l_117 = &g_99;
    int l_130[9] = {1L,0x29CEE28CL,0x29CEE28CL,1L,0x29CEE28CL,0x29CEE28CL,1L,0x29CEE28CL,0x29CEE28CL};
    int l_157 = (-2L);
    int l_158 = 0x9E076330L;
    int i;
    for (p_93 = (-14); (p_93 > 24); p_93 = safe_add_func_int32_t_s_s(p_93, 9))
    {
        int *l_109 = &g_71[2][1][4];
        int l_131[8][4] = {{0x8EC0103CL,0x8EC0103CL,0xF89F34BAL,(-1L)},{1L,(-1L),0x8EC0103CL,0x898853A5L},{(-1L),1L,0x2EBED496L,0x8EC0103CL},{(-1L),1L,(-1L),0x898853A5L},{1L,(-1L),0xF0CD3A6FL,(-1L)},{(-1L),0x2EBED496L,1L,0x898853A5L},{0xF0CD3A6FL,1L,1L,0xF0CD3A6FL},{(-1L),(-1L),0x8EC0103CL,(-1L)}};
        unsigned char l_143 = 0x57L;
        unsigned short l_159[2][4][1] = {{{0xA3FAL},{0xA3FAL},{65535UL},{0xA3FAL}},{{0xA3FAL},{65535UL},{0xA3FAL},{0xA3FAL}}};
        int i, j, k;
    }
    return g_71[1][0][7];
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_11, "g_11", print_hash_value);
    transparent_crc(g_21, "g_21", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_24[i][j], "g_24[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_61, "g_61", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_62[i], "g_62[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_65, "g_65", print_hash_value);
    transparent_crc(g_66, "g_66", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_67[i][j][k], "g_67[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_70, "g_70", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 10; k++)
            {
                transparent_crc(g_71[i][j][k], "g_71[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_96, "g_96", print_hash_value);
    transparent_crc(g_99, "g_99", print_hash_value);
    transparent_crc(g_235, "g_235", print_hash_value);
    transparent_crc(g_237, "g_237", print_hash_value);
    transparent_crc(g_363, "g_363", print_hash_value);
    transparent_crc(g_541, "g_541", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_551[i][j], "g_551[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_553[i], "g_553[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_557, "g_557", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_596[i][j][k], "g_596[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_613[i], "g_613[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_614, "g_614", print_hash_value);
    transparent_crc(g_673, "g_673", print_hash_value);
    transparent_crc(g_813, "g_813", print_hash_value);
    transparent_crc(g_830, "g_830", print_hash_value);
    transparent_crc(g_926, "g_926", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_1005[i], "g_1005[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1354, "g_1354", print_hash_value);
    transparent_crc(g_1357, "g_1357", print_hash_value);
    transparent_crc(g_1415, "g_1415", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
