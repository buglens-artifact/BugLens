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



static volatile int g_2 = (-1L);
static volatile int g_3 = 0x28C176B0L;
static volatile int g_4 = 0x838A1F94L;
static volatile int g_5 = 0xA53AA9ACL;
static int g_6 = (-1L);
static unsigned g_65[5][6][8] = {{{0x0E1B4ADCL,8UL,4294967295UL,4294967295UL,0x2A2CA01DL,1UL,1UL,0x9DAEE1D3L},{7UL,7UL,0x75D7B1ECL,0x2A2CA01DL,0x1CB45490L,8UL,0x343DEF57L,4294967295UL},{0x343DEF57L,0x9DAEE1D3L,0xFD6FFBBAL,5UL,0xB0DEBF62L,0xEE8DA534L,0x792D8C20L,0x2A2CA01DL},{0x75D7B1ECL,1UL,1UL,0xF2DB44E9L,0x298B2365L,4294967292UL,4294967292UL,0x298B2365L},{0xB0DEBF62L,0x75D7B1ECL,0x75D7B1ECL,0xB0DEBF62L,4294967295UL,7UL,1UL,0UL},{8UL,4294967295UL,8UL,1UL,4294967295UL,0UL,8UL,0x1CB45490L}},{{0x79D740F4L,0xE4BCB816L,4UL,0xA2F90942L,1UL,0x21A659E8L,0UL,4294967295UL},{0xD7B9758AL,8UL,4294967290UL,0xD6648539L,4294967295UL,0xA2F90942L,4294967295UL,0UL},{0x8E27FB60L,1UL,4294967295UL,0x75D7B1ECL,4294967295UL,4294967295UL,0xF2DB44E9L,0xE4BCB816L},{0x4064544AL,5UL,0xFD6FFBBAL,0UL,0xF2DB44E9L,4294967295UL,0UL,1UL},{0xD7B9758AL,4294967290UL,0x52FA57A8L,1UL,0UL,4UL,1UL,0x153ED870L},{0x1CB45490L,7UL,8UL,5UL,4294967295UL,0x298B2365L,4294967295UL,0x0E1B4ADCL}},{{0x212F019DL,1UL,0xB53A2AD4L,4294967295UL,0x8E27FB60L,4294967295UL,0xB53A2AD4L,1UL},{4294967295UL,0x52FA57A8L,0x4064544AL,7UL,0x4BCA0F96L,0UL,1UL,0x0BF28884L},{4294967295UL,0xF2DB44E9L,1UL,0x75D7B1ECL,4294967295UL,4294967291UL,1UL,1UL},{0xA2F90942L,0x75D7B1ECL,0x4064544AL,0UL,0xD6648539L,0x4064544AL,0xB53A2AD4L,4294967295UL},{0xD6648539L,0x4064544AL,0xB53A2AD4L,4294967295UL,4294967290UL,0UL,4294967295UL,0x79D740F4L},{0x75D7B1ECL,0x0E1B4ADCL,8UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,7UL}},{{0xFD6FFBBAL,0x75D7B1ECL,4294967295UL,0x4064544AL,1UL,0xB53A2AD4L,0xFD6FFBBAL,7UL},{7UL,0x79D740F4L,0UL,4294967292UL,0x21A659E8L,8UL,1UL,0x0BF28884L},{4294967295UL,1UL,0x343DEF57L,3UL,4294967295UL,0x9DAEE1D3L,0x8E27FB60L,0x8E27FB60L},{0UL,1UL,0x0BF28884L,0x0BF28884L,1UL,0UL,1UL,4294967295UL},{1UL,0UL,0xEE8DA534L,0x75D7B1ECL,0x153ED870L,4294967295UL,4294967295UL,0xA2F90942L},{0x1CB45490L,4294967292UL,0x792D8C20L,0x75D7B1ECL,0xE4BCB816L,8UL,0xD7B9758AL,4294967295UL}},{{0x975881DDL,0xE4BCB816L,0UL,0x0BF28884L,1UL,0UL,0x153ED870L,0x8E27FB60L},{0x0E1B4ADCL,0xEE8DA534L,4294967295UL,3UL,0x4064544AL,0UL,7UL,0x0BF28884L},{0xD6648539L,0UL,8UL,4294967292UL,7UL,1UL,0x0E1B4ADCL,7UL},{0x4064544AL,0xD6648539L,0UL,0x4064544AL,0x75D7B1ECL,0xA2F90942L,4294967290UL,7UL},{4294967292UL,4294967295UL,1UL,0xD6648539L,0xA2F90942L,4294967295UL,4294967295UL,0x4BCA0F96L},{3UL,0xF2DB44E9L,8UL,0x0E1B4ADCL,0UL,0x8E27FB60L,4294967295UL,0xB53A2AD4L}}};
static int g_67 = 0L;
static int g_68 = 2L;
static unsigned short g_74 = 65535UL;
static int g_103 = 0L;
static int g_104 = 0xD19B6711L;
static int *g_107 = &g_104;
static unsigned char g_121 = 0x74L;
static volatile unsigned g_133 = 4294967290UL;
static volatile unsigned *g_132 = &g_133;
static volatile unsigned **g_131[2] = {&g_132,&g_132};
static char g_153[8][7][4] = {{{(-1L),(-1L),0xC3L,0x66L},{0x36L,0xC0L,0L,0xDEL},{0x66L,0x59L,0x83L,(-1L)},{(-6L),0L,6L,0x28L},{1L,0x92L,0x94L,0x94L},{(-1L),(-1L),1L,0x85L},{0xC0L,0x62L,0x85L,0xC2L}},{{6L,1L,0L,0x85L},{0x28L,1L,(-9L),0xC2L},{1L,0x62L,0x9CL,0x85L},{0x36L,(-1L),(-2L),0x94L},{(-10L),0x92L,4L,0x28L},{(-5L),0L,0x36L,(-1L)},{0x87L,0x59L,0x46L,0xDEL}},{{4L,0xC0L,1L,0x66L},{1L,(-1L),0L,(-1L)},{0x87L,0x66L,0xD8L,0x85L},{0xFBL,(-10L),4L,0xC0L},{1L,(-2L),(-1L),1L},{0x36L,1L,0L,0x6AL},{0x85L,0xF1L,(-9L),0x59L}},{{0x92L,0L,0x79L,(-5L)},{6L,(-1L),(-1L),0x9CL},{(-1L),(-5L),(-1L),(-7L)},{0x28L,0x79L,0L,(-1L)},{0x94L,0xC0L,0x94L,0x62L},{0x85L,4L,0x66L,0x28L},{0xC2L,0xC3L,0x87L,4L}},{{0x85L,0xF1L,0x87L,0L},{0xC2L,0L,0x66L,1L},{0x85L,6L,0x94L,(-1L)},{0x94L,(-1L),0L,1L},{0x28L,0x92L,(-1L),(-9L)},{(-1L),0L,(-1L),0x59L},{0xDEL,7L,(-1L),0x62L}},{{0x66L,(-1L),(-5L),(-5L)},{(-1L),0L,0xD8L,7L},{0x85L,0x28L,0xC3L,1L},{0xC0L,(-1L),0L,0x66L},{1L,6L,0L,0x48L},{0x6AL,1L,0L,0L},{0x59L,(-1L),(-1L),0xC2L}},{{(-5L),0xC3L,0xC3L,0x92L},{0x6AL,0xC2L,0x85L,0x62L},{0L,(-7L),0L,0xF1L},{0L,0x79L,0x79L,0L},{0x85L,0x87L,1L,0x97L},{0x62L,0x85L,0xC2L,0x6AL},{0L,(-9L),(-7L),0x6AL}},{{(-5L),0x85L,0xBCL,0x97L},{0x36L,0x87L,0L,1L},{0x79L,(-1L),1L,0xD8L},{0L,0L,(-5L),0xBCL},{0x85L,(-5L),1L,0xC3L},{0xC3L,0xFBL,(-9L),(-5L)},{(-1L),0x83L,4L,0x4FL}}};
static short g_168 = (-1L);
static char *g_192 = &g_153[3][6][3];
static char g_255 = (-6L);
static int g_264 = 0L;
static unsigned short g_285 = 0xFF86L;
static int g_287 = 0x169EFB6BL;
static int g_318 = 0x75466D3CL;
static unsigned short g_339 = 1UL;
static unsigned char g_340[4] = {255UL,255UL,255UL,255UL};
static short g_370 = 1L;
static int * volatile g_372 = (void*)0;
static int * volatile g_373 = &g_104;
static short g_375[8] = {0x5203L,0L,0L,0x5203L,0L,0L,0x5203L,0L};
static unsigned char g_392[7] = {0xC7L,0xC7L,249UL,0xC7L,0xC7L,249UL,0xC7L};
static volatile int ** volatile g_411 = (void*)0;
static int * volatile g_422 = (void*)0;
static int * volatile g_424 = &g_68;
static int ** volatile g_448[6][5][4] = {{{&g_107,&g_107,&g_107,&g_107},{&g_107,&g_107,&g_107,&g_107},{&g_107,&g_107,&g_107,&g_107},{&g_107,&g_107,&g_107,&g_107},{&g_107,&g_107,&g_107,&g_107}},{{&g_107,&g_107,&g_107,&g_107},{&g_107,&g_107,&g_107,&g_107},{&g_107,&g_107,&g_107,&g_107},{&g_107,&g_107,&g_107,&g_107},{&g_107,&g_107,&g_107,&g_107}},{{&g_107,&g_107,&g_107,&g_107},{&g_107,&g_107,&g_107,&g_107},{&g_107,&g_107,&g_107,&g_107},{&g_107,&g_107,&g_107,&g_107},{&g_107,&g_107,&g_107,&g_107}},{{&g_107,&g_107,&g_107,&g_107},{&g_107,&g_107,&g_107,&g_107},{&g_107,&g_107,&g_107,&g_107},{&g_107,&g_107,&g_107,&g_107},{&g_107,&g_107,&g_107,&g_107}},{{&g_107,&g_107,&g_107,&g_107},{&g_107,&g_107,&g_107,&g_107},{&g_107,&g_107,&g_107,&g_107},{&g_107,&g_107,&g_107,&g_107},{&g_107,&g_107,&g_107,&g_107}},{{&g_107,&g_107,&g_107,&g_107},{&g_107,&g_107,&g_107,&g_107},{&g_107,&g_107,&g_107,&g_107},{&g_107,&g_107,&g_107,&g_107},{&g_107,&g_107,&g_107,&g_107}}};
static short *g_468 = &g_375[0];
static short **g_467 = &g_468;
static int ** volatile g_469 = &g_107;
static int ** volatile g_470 = &g_107;
static char g_494[3][2][4] = {{{(-9L),4L,4L,(-9L)},{4L,(-9L),4L,4L}},{{(-9L),(-9L),7L,(-9L)},{(-9L),7L,7L,4L}},{{7L,4L,7L,7L},{4L,4L,(-9L),4L}}};
static int * volatile g_583[7][7] = {{&g_264,&g_264,&g_264,&g_264,&g_264,&g_264,&g_264},{&g_264,&g_264,&g_264,&g_264,&g_264,&g_264,&g_264},{&g_264,&g_264,&g_264,&g_264,&g_264,&g_264,&g_264},{&g_264,&g_264,&g_264,&g_264,&g_264,&g_264,&g_264},{&g_264,&g_264,&g_264,&g_264,&g_264,&g_264,&g_264},{&g_264,&g_264,&g_264,&g_264,&g_264,&g_264,&g_264},{&g_264,&g_264,&g_264,&g_264,&g_264,&g_264,&g_264}};
static int g_585 = (-5L);
static unsigned char * volatile g_602 = &g_392[2];
static unsigned char * volatile * volatile g_601 = &g_602;
static unsigned g_641[9][9][1] = {{{1UL},{6UL},{1UL},{0x5375A3A4L},{1UL},{4294967295UL},{0xBC4129E6L},{6UL},{6UL}},{{0xBC4129E6L},{4294967295UL},{1UL},{0x5375A3A4L},{1UL},{6UL},{1UL},{0xA1D45558L},{1UL}},{{0x2B10CB1CL},{3UL},{6UL},{0xB6846B12L},{3UL},{4294967295UL},{1UL},{0xA1D45558L},{1UL}},{{6UL},{1UL},{0xA1D45558L},{1UL},{4294967295UL},{3UL},{0xB6846B12L},{6UL},{3UL}},{{0UL},{0UL},{0x03B0EE70L},{0x2B10CB1CL},{0x9ECD45A7L},{4294967295UL},{0x9C7F7811L},{0UL},{0xEF448DF9L}},{{1UL},{3UL},{3UL},{1UL},{0xEF448DF9L},{0UL},{0x9C7F7811L},{4294967295UL},{0x9ECD45A7L}},{{0x2B10CB1CL},{0x03B0EE70L},{0UL},{0UL},{1UL},{3UL},{0xBC4129E6L},{1UL},{0xEF448DF9L}},{{0xDA49B890L},{0x03B0EE70L},{4294967295UL},{4294967292UL},{4294967295UL},{0x03B0EE70L},{0xDA49B890L},{0xEF448DF9L},{1UL}},{{0xBC4129E6L},{3UL},{1UL},{0UL},{0UL},{0x03B0EE70L},{0x2B10CB1CL},{0x9ECD45A7L},{4294967295UL}}};
static unsigned g_653 = 4294967295UL;
static char **g_664 = (void*)0;
static int ** volatile g_704 = &g_107;
static volatile unsigned char * volatile * volatile g_711 = (void*)0;
static unsigned char *g_721[5][5] = {{&g_392[4],&g_392[5],&g_392[4],&g_392[4],&g_392[5]},{(void*)0,&g_121,&g_121,(void*)0,&g_121},{&g_392[5],&g_392[5],&g_392[6],&g_392[5],&g_392[5]},{&g_121,(void*)0,&g_121,&g_121,(void*)0},{&g_392[5],&g_392[4],&g_392[4],&g_392[5],&g_392[4]}};
static unsigned char * volatile *g_720 = &g_721[2][4];
static unsigned char *** volatile g_824 = (void*)0;
static int * volatile *g_876 = &g_372;
static int * volatile * volatile * volatile g_875 = &g_876;
static int * volatile * volatile * volatile * volatile g_874 = &g_875;
static int **g_881 = &g_107;
static int ***g_880[5][7] = {{&g_881,&g_881,(void*)0,&g_881,(void*)0,(void*)0,(void*)0},{&g_881,&g_881,&g_881,&g_881,&g_881,&g_881,&g_881},{&g_881,(void*)0,&g_881,&g_881,(void*)0,&g_881,&g_881},{(void*)0,&g_881,(void*)0,&g_881,&g_881,&g_881,&g_881},{&g_881,(void*)0,(void*)0,&g_881,&g_881,&g_881,&g_881}};
static int ****g_879 = &g_880[1][5];
static char g_884 = 0L;
static int g_915 = 1L;
static int g_1007 = (-1L);
static int *g_1029 = &g_318;
static int ** volatile g_1028 = &g_1029;
static char g_1075 = 0xEEL;
static int *****g_1091 = &g_879;
static volatile unsigned short * volatile *g_1118 = (void*)0;
static volatile int g_1210[8] = {0x99BE7AA2L,0L,0x99BE7AA2L,0x99BE7AA2L,0L,0x99BE7AA2L,0x99BE7AA2L,0L};
static unsigned char **g_1321 = &g_721[0][3];
static unsigned char ***g_1320 = &g_1321;
static int g_1328[9] = {(-10L),0L,(-10L),0L,(-10L),0L,(-10L),0L,(-10L)};
static int g_1339 = 0L;
static unsigned * volatile g_1408 = &g_653;
static unsigned * volatile *g_1407[7] = {&g_1408,&g_1408,&g_1408,&g_1408,&g_1408,&g_1408,&g_1408};
static unsigned *g_1411 = &g_65[1][2][4];
static unsigned **g_1410 = &g_1411;
static volatile char * volatile ** volatile g_1417 = (void*)0;
static volatile char * volatile ** volatile * volatile g_1416[7] = {&g_1417,&g_1417,&g_1417,&g_1417,&g_1417,&g_1417,&g_1417};
static unsigned *** volatile g_1527 = &g_1410;
static int g_1569 = (-9L);



static char func_1(void);
static int func_9(char p_10, char p_11, unsigned short p_12, char p_13, unsigned char p_14);
static char func_15(unsigned char p_16, unsigned char p_17);
static unsigned char func_19(char p_20, unsigned char p_21, unsigned char p_22, short p_23, char p_24);
static int func_26(char p_27);
static char func_28(unsigned p_29);
static char func_34(int p_35);
static int func_36(int p_37, char p_38, int p_39, int p_40, unsigned p_41);
static short func_46(unsigned char p_47, int p_48);
static unsigned func_54(int p_55, int p_56);
static char func_1(void)
{
    unsigned l_25 = 0UL;
    unsigned short l_342[2];
    int l_700 = 0xBFBCA342L;
    int l_1331[4] = {(-2L),(-2L),(-2L),(-2L)};
    unsigned short *l_1332 = &g_285;
    int l_1340 = 0x037AE877L;
    unsigned char *l_1341 = &g_121;
    unsigned char l_1342 = 255UL;
    int l_1343[2][7][8] = {{{0x5952BB6BL,0xD6E48691L,5L,1L,0x09E50F7EL,0L,0xB22812D4L,3L},{0x03F016B7L,0x0D68530DL,5L,0xDBE016C5L,(-7L),(-1L),0xB2A4604FL,0L},{1L,(-1L),1L,1L,0xED1C33FEL,0x6FA27619L,0xD6E48691L,1L},{0x53453168L,5L,0xB22812D4L,0x5ECD4301L,(-1L),(-1L),(-1L),(-1L)},{(-1L),0xDBE016C5L,0xDBE016C5L,(-1L),0x5DF801FCL,0L,1L,0x95D9F991L},{1L,1L,(-1L),1L,0x03F016B7L,(-7L),3L,0xB22812D4L},{0x64E5A67FL,1L,0L,0x95D9F991L,(-1L),0x03F016B7L,1L,5L}},{{0L,1L,0L,(-1L),0x53453168L,0x30C0E2CAL,0x6578F457L,5L},{0xB2A4604FL,0x5952BB6BL,0x5ECD4301L,1L,1L,0L,(-1L),1L},{1L,0x30C0E2CAL,3L,0L,0x5952BB6BL,5L,(-1L),0xB22812D4L},{1L,0xDBE016C5L,0xD6E48691L,3L,3L,3L,0xD6E48691L,0xDBE016C5L},{0x5BE35B57L,(-1L),1L,0L,(-1L),4L,0L,(-1L)},{0x5DF801FCL,(-1L),4L,1L,0x5BE35B57L,0x7A319360L,0L,1L},{5L,1L,1L,4L,3L,7L,0xD6E48691L,1L}}};
    int **l_1347 = &g_107;
    unsigned char l_1348 = 254UL;
    int l_1367[8][2] = {{0xA99D6656L,1L},{0x61316BE4L,0xF3B1BC8EL},{1L,0xF3B1BC8EL},{0x61316BE4L,1L},{0xA99D6656L,0xA99D6656L},{0xA99D6656L,1L},{0x61316BE4L,0xF3B1BC8EL},{1L,0xF3B1BC8EL}};
    int *l_1390 = &g_68;
    int l_1399[4][7][1];
    unsigned l_1432[8] = {4294967288UL,4294967288UL,0xAC9F163FL,4294967288UL,4294967288UL,0xAC9F163FL,4294967288UL,4294967288UL};
    int l_1434 = 0xCBCF6094L;
    int l_1462 = 0x694A5D1AL;
    int l_1463[2][2][4] = {{{5L,5L,5L,5L},{5L,5L,5L,5L}},{{5L,5L,5L,5L},{5L,5L,5L,5L}}};
    unsigned **l_1504[6][5] = {{&g_1411,&g_1411,(void*)0,(void*)0,&g_1411},{(void*)0,&g_1411,(void*)0,&g_1411,&g_1411},{&g_1411,(void*)0,&g_1411,(void*)0,&g_1411},{&g_1411,&g_1411,&g_1411,&g_1411,&g_1411},{&g_1411,&g_1411,(void*)0,&g_1411,(void*)0},{(void*)0,(void*)0,&g_1411,&g_1411,&g_1411}};
    unsigned short l_1511 = 0x1F6DL;
    unsigned *l_1537 = (void*)0;
    unsigned short l_1538 = 65528UL;
    unsigned char l_1567 = 255UL;
    unsigned l_1568[10] = {1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL};
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_342[i] = 3UL;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 1; k++)
                l_1399[i][j][k] = 1L;
        }
    }
    for (g_6 = 3; (g_6 >= 22); g_6 = safe_add_func_uint16_t_u_u(g_6, 2))
    {
        int l_18 = 0xAD374006L;
        int *l_1327 = &g_1328[0];
    }
    l_1343[0][2][7] ^= func_9((safe_mod_func_int16_t_s_s(func_15(l_342[1], ((*l_1341) ^= ((l_1331[0] = (l_700 , 1UL)) != ((((*l_1332) = 0xCEF5L) & ((*g_468) && (safe_mod_func_uint32_t_u_u((((((0xD1L <= (((((safe_add_func_uint8_t_u_u(func_19(g_1339, l_700, (l_342[1] | 0UL), l_700, (*g_192)), 0xD1L)) > (-1L)) & l_342[1]) , 0xF7A3L) & l_1340)) , l_342[0]) || 0x9A37L) > 0UL) || l_342[1]), g_6)))) , l_1340)))), l_25)), (*g_192), l_1342, l_1340, l_25);
    for (g_339 = 0; (g_339 == 10); g_339++)
    {
        int **l_1346 = &g_107;
        int l_1379 = (-1L);
        int l_1388 = 0xAEA7D4D3L;
        int *l_1389 = &l_1331[0];
        unsigned l_1391 = 0xEC97971BL;
        char ****l_1418 = (void*)0;
        unsigned l_1430 = 0UL;
        if (((1L == (g_285 &= 0UL)) & ((l_1346 != (l_1347 = l_1346)) , l_1348)))
        {
            int l_1349 = 0xA006CFCCL;
            if (l_1349)
                break;
        }
        else
        {
            unsigned l_1355 = 9UL;
            int l_1366 = 0x89B9773EL;
            short l_1368 = 0L;
            unsigned short **l_1381 = &l_1332;
            int l_1384 = 0x95797611L;
            for (l_25 = (-28); (l_25 != 60); ++l_25)
            {
                unsigned char *l_1352 = &g_340[3];
                int *l_1357[2][9][7] = {{{&g_103,&g_103,&g_1339,&g_103,&g_915,&g_103,&g_1339},{(void*)0,&g_1339,&g_103,&g_1339,&g_1339,(void*)0,&g_1339},{&g_1339,(void*)0,&g_103,&g_103,&g_1339,(void*)0,&g_915},{&g_103,&g_103,(void*)0,&g_318,&g_1339,&g_915,&g_103},{&g_915,&g_915,&g_915,&g_915,&g_915,&g_103,&g_915},{&g_915,&g_915,&g_1339,&g_103,&g_103,(void*)0,&g_103},{&g_103,&g_1339,&l_700,&g_1339,&g_1339,&l_700,&g_1339},{&g_1339,&g_1339,&g_915,&g_318,&g_103,&g_915,&g_1339},{(void*)0,&g_103,&g_1339,&g_1339,&g_103,&g_915,&g_103}},{{&g_915,&g_915,&g_103,&g_318,&g_318,&g_318,(void*)0},{&g_1339,&g_103,&g_318,&g_1339,&g_915,&g_1339,&g_1339},{&g_1339,&g_103,&g_915,&g_915,&g_103,&g_1339,&g_915},{&g_915,&g_103,(void*)0,&g_103,&g_1339,&g_103,&g_915},{(void*)0,&g_318,&g_1339,&g_1339,&g_915,(void*)0,&g_1339},{(void*)0,&g_103,&g_915,&g_915,&g_915,&g_103,(void*)0},{&g_103,&g_103,&g_915,&g_318,&g_1339,&l_700,&g_103},{&g_915,&g_103,(void*)0,&g_915,&g_1339,(void*)0,&g_1339},{&g_103,&g_1339,&g_915,&g_915,&g_915,&g_1339,&g_1339}}};
                int **l_1356 = &l_1357[0][0][6];
                int l_1358 = 0xFB8730C2L;
                unsigned *l_1365[5][4];
                int i, j, k;
                for (i = 0; i < 5; i++)
                {
                    for (j = 0; j < 4; j++)
                        l_1365[i][j] = &g_65[3][1][2];
                }
                if ((((l_1352 == ((safe_add_func_int16_t_s_s(((l_1355 || 0UL) , ((l_1358 ^ ((*l_1352) = ((*l_1341) = (safe_mod_func_int16_t_s_s(((**g_467) = (safe_div_func_int16_t_s_s((safe_sub_func_uint32_t_u_u((l_1366 = (0x8628L ^ g_318)), l_1367[6][0])), l_1355))), l_1368))))) , 0xCF25L)), l_1358)) , (*g_601))) & 0x89L) , 0x74E738ABL))
                {
                    unsigned short l_1380 = 0x651FL;
                    char *l_1382 = &g_255;
                    char *l_1383 = &g_494[1][1][3];
                    l_1384 &= func_15((safe_div_func_uint8_t_u_u((((safe_add_func_int32_t_s_s(8L, (((*l_1383) = ((*l_1382) ^= (func_15((((*g_132) ^ (g_1118 == (((l_1366 |= (safe_sub_func_int8_t_s_s((-5L), ((safe_sub_func_int16_t_s_s((g_1328[0] , ((0L ^ ((g_494[2][1][2] = l_1358) == ((*l_1352) = ((((safe_rshift_func_int8_t_s_u((((*l_1341) = (0UL ^ l_1379)) | l_1358), 7)) ^ (*g_468)) & (-1L)) <= 0UL)))) || l_1380)), (*g_468))) != l_1358)))) != 8UL) , l_1381))) & g_392[0]), l_1379) , 0x61L))) & 1UL))) <= g_392[5]) && l_1355), l_1358)), l_342[1]);
                }
                else
                {
                    return l_1379;
                }
                for (g_104 = (-20); (g_104 > (-4)); ++g_104)
                {
                    int *l_1387 = &l_1358;
                    (*l_1347) = l_1387;
                    l_1388 &= (**l_1347);
                    if (l_1368)
                        continue;
                }
                return l_1358;
            }
            (*l_1347) = l_1389;
            (*g_876) = l_1390;
        }
        for (g_287 = 1; (g_287 >= 0); g_287 -= 1)
        {
            int l_1435[1];
            int i, j;
            for (i = 0; i < 1; i++)
                l_1435[i] = 0x47791D7BL;
            (*l_1389) = g_375[(g_287 + 1)];
            if (l_1391)
            {
                unsigned short l_1392 = 1UL;
                int *l_1393 = &g_585;
                unsigned **l_1412 = &g_1411;
                unsigned l_1419[3][10][1] = {{{0x7BF18C50L},{0x66B0333BL},{4294967295UL},{4294967295UL},{0x712274CAL},{0x712274CAL},{4294967295UL},{4294967295UL},{0x66B0333BL},{0x7BF18C50L}},{{1UL},{0x7BF18C50L},{0x66B0333BL},{4294967295UL},{4294967295UL},{0x712274CAL},{0x712274CAL},{4294967295UL},{2UL},{0x7BF18C50L}},{{4294967295UL},{8UL},{4294967295UL},{0x7BF18C50L},{2UL},{0x29170D27L},{1UL},{1UL},{0x29170D27L},{2UL}}};
                int i, j, k;
                if (l_1392)
                    break;
                for (l_1392 = 1; (l_1392 <= 4); l_1392 += 1)
                {
                    (*l_1347) = l_1393;
                }
                if ((*g_373))
                {
                    unsigned char l_1394 = 0UL;
                    int *l_1400 = &l_1379;
                    (*l_1389) = ((g_884 = g_1075) <= 252UL);
                    if (l_1394)
                    {
                        (*l_1346) = l_1393;
                    }
                    else
                    {
                        int *l_1395 = &l_1331[0];
                        unsigned char ***l_1396 = &g_1321;
                        int l_1397 = 9L;
                        char *l_1398 = &g_255;
                        int i;
                        if (l_1394)
                            break;
                        (*g_876) = l_1395;
                        (*l_1395) = ((l_1396 != &g_711) <= (((*g_132) , ((*l_1398) &= (((*l_1389) < (*l_1395)) & (func_36((2L < (((l_1397 <= 0L) == 1L) , (**g_467))), g_375[2], (*l_1395), (*g_1029), (*l_1393)) ^ l_1394)))) , 2UL));
                        (*l_1393) = ((**g_601) | ((*l_1398) = ((void*)0 == &g_664)));
                    }
                    if ((*l_1393))
                    {
                        unsigned l_1401 = 0x155BFEDBL;
                        unsigned *l_1406 = &g_65[2][2][3];
                        int *l_1409 = &g_1007;
                        (*l_1347) = (l_1399[3][3][0] , l_1400);
                        (*l_1409) |= (l_1401 | ((((*l_1332) = func_54(((safe_sub_func_int32_t_s_s((250UL == (((*l_1390) == func_15((((safe_div_func_uint32_t_u_u(((*l_1406) = (+(*l_1400))), (((*l_1389) <= ((*g_468) = (**g_467))) | ((*l_1400) && g_884)))) , g_1407[0]) == &g_1408), (**l_1347))) | (*l_1393))), (*l_1393))) , (*l_1400)), (*g_1029))) & g_392[2]) , (*l_1393)));
                        if ((*l_1409))
                            break;
                    }
                    else
                    {
                        unsigned char l_1413 = 0x8EL;
                        (*l_1347) = ((((l_1412 = g_1410) == (((((((*l_1393) && 0x4EAAFA7FL) & (*l_1389)) & ((((safe_rshift_func_uint8_t_u_u(((g_1416[3] == l_1418) != 255UL), 4)) && (*l_1393)) != l_1419[0][2][0]) != l_1413)) && l_1413) , 0L) , &g_132)) || (*l_1390)) , l_1400);
                        (**g_881) &= (*g_424);
                    }
                    for (l_1379 = 3; (l_1379 >= 0); l_1379 -= 1)
                    {
                        int i, j;
                        (*l_1389) = 0L;
                        (*l_1347) = (g_1339 , l_1393);
                    }
                }
                else
                {
                    int *l_1420 = &g_104;
                    (*l_1393) = (&g_1417 == (void*)0);
                    (*g_876) = l_1420;
                }
                if ((*l_1393))
                {
                    return (*l_1390);
                }
                else
                {
                    (*l_1393) = (*l_1390);
                }
            }
            else
            {
                unsigned l_1421 = 0xFC51980BL;
                int l_1424[2][1];
                unsigned char l_1429[5][4] = {{253UL,253UL,253UL,253UL},{253UL,253UL,253UL,253UL},{253UL,253UL,253UL,253UL},{253UL,253UL,253UL,253UL},{253UL,253UL,253UL,253UL}};
                char *l_1431 = &g_494[1][1][0];
                unsigned l_1433 = 4294967295UL;
                int i, j;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_1424[i][j] = 0x0826DC39L;
                }
                (*l_1389) = l_1421;
                (*l_1346) = &l_1379;
                (*l_1389) |= (((l_1421 > ((*g_1411) |= (safe_rshift_func_uint16_t_u_u((**l_1347), ((((*l_1341) |= ((func_15((**l_1346), (l_1424[0][0] && (*l_1390))) && (func_15((safe_add_func_uint16_t_u_u((((*l_1390) > ((*l_1431) = (safe_add_func_uint16_t_u_u((0x58L && ((((l_1429[1][2] ^ 0xE04AL) <= (*l_1390)) & 4294967295UL) < l_1430)), l_1421)))) && l_1424[1][0]), l_1432[2])), (**g_601)) && (**l_1346))) != l_1433)) < 0xA2L) == g_641[4][4][0]))))) > l_1429[2][1]) & l_1434);
            }
            if (l_1435[0])
                continue;
        }
    }
    if ((*l_1390))
    {
        int l_1440 = (-1L);
        int *l_1482 = &l_700;
        int l_1483 = 4L;
        short *l_1497 = &g_168;
        int l_1499 = 0xFA0189CEL;
        int l_1500 = 0xF963E2E0L;
        for (g_168 = 0; (g_168 <= 17); g_168 = safe_add_func_int32_t_s_s(g_168, 8))
        {
            int *l_1442 = &l_1331[0];
            for (g_264 = 0; (g_264 > (-26)); --g_264)
            {
                unsigned short l_1441 = 65535UL;
                int l_1451[5][6] = {{0x570E092AL,0x570E092AL,0x570E092AL,0x570E092AL,0x570E092AL,0x570E092AL},{0x570E092AL,0x570E092AL,0x570E092AL,0x570E092AL,0x570E092AL,0x570E092AL},{0x570E092AL,0x570E092AL,0x570E092AL,0x570E092AL,0x570E092AL,0x570E092AL},{0x570E092AL,0x570E092AL,0x570E092AL,0x570E092AL,0x570E092AL,0x570E092AL},{0x570E092AL,0x570E092AL,0x570E092AL,0x570E092AL,0x570E092AL,0x570E092AL}};
                int i, j;
                if (l_1440)
                {
                    return l_1441;
                }
                else
                {
                    (*l_1390) = (func_26(func_26(l_1440)) != l_1440);
                    (*g_881) = l_1442;
                }
                (*g_876) = (*g_881);
                if ((((*l_1390) ^ (4294967293UL ^ 0L)) | (safe_add_func_uint8_t_u_u((((**g_1410) | func_26(((**l_1347) || ((safe_lshift_func_uint8_t_u_u((l_1440 & ((*l_1390) > func_26((((!(safe_sub_func_uint16_t_u_u((((*l_1332) = (l_1451[3][3] ^= (safe_lshift_func_int16_t_s_s(((**l_1347) <= ((*l_1442) ^ 0x8E16L)), l_1440)))) >= (**g_467)), 0xBC11L))) <= l_1440) ^ 0L)))), (*l_1442))) & (*l_1442))))) & (**l_1347)), l_1441))))
                {
                    unsigned char l_1452[3][7] = {{249UL,249UL,255UL,0x30L,0xC0L,255UL,0xC0L},{0x30L,252UL,252UL,0x30L,255UL,0x2BL,0x30L},{0x2BL,0xC0L,255UL,255UL,0xC0L,0x2BL,252UL}};
                    int i, j;
                    return l_1452[0][2];
                }
                else
                {
                    unsigned l_1453 = 0xF69D5A70L;
                    if (l_1453)
                        break;
                }
            }
        }
        l_1367[6][0] ^= ((1L <= (safe_rshift_func_uint8_t_u_u((((0x00FCL | (l_1440 <= ((l_1440 <= (safe_lshift_func_int8_t_s_u((((safe_lshift_func_uint8_t_u_u((safe_div_func_int32_t_s_s((((*g_132) ^ (*g_1411)) == 65535UL), 4294967291UL)), (*l_1390))) != (*l_1390)) , l_1462), l_1463[1][1][0]))) , l_1440))) , (*l_1390)) < 1UL), (*l_1390)))) & (*l_1390));
        (*l_1347) = &l_1440;
        for (g_6 = 0; (g_6 >= (-19)); g_6 = safe_sub_func_int16_t_s_s(g_6, 1))
        {
            unsigned char l_1466 = 247UL;
            unsigned char l_1485 = 0x68L;
            unsigned **l_1503 = &g_1411;
            unsigned char l_1525 = 255UL;
            (**l_1347) &= 0xDE655FD1L;
            for (l_1342 = 0; (l_1342 <= 3); l_1342 += 1)
            {
                char l_1473 = (-6L);
                char l_1484 = 0x7CL;
                char *l_1486 = &g_494[1][0][0];
                int *l_1487[1][2];
                char l_1510 = 1L;
                char ***l_1516 = &g_664;
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 2; j++)
                        l_1487[i][j] = &l_1343[1][3][3];
                }
                (*g_107) = l_1466;
            }
        }
    }
    else
    {
        unsigned **l_1526 = &g_1411;
        int *l_1528 = &l_1367[6][0];
        unsigned char l_1550 = 0xE3L;
        unsigned char l_1572 = 0x80L;
        unsigned *l_1583 = &g_653;
        unsigned char l_1596 = 0x5DL;
        unsigned short l_1597 = 0xE4C5L;
        (*g_1527) = l_1526;
        (*g_881) = l_1528;
        if ((((*l_1528) , &g_1320) != &g_824))
        {
            short *l_1541 = (void*)0;
            int l_1549 = 1L;
            int l_1553 = 5L;
            int l_1562[4][2] = {{1L,1L},{1L,1L},{1L,1L},{1L,1L}};
            int i, j;
            if ((((((safe_mod_func_uint32_t_u_u((safe_div_func_uint8_t_u_u((*l_1528), (*g_602))), (safe_sub_func_uint8_t_u_u((((0x6758L == ((safe_mod_func_int8_t_s_s(func_26((*l_1528)), 0x56L)) , (((*l_1341) = (*l_1528)) && ((l_1537 != &g_653) & 0xFFL)))) , (*l_1390)) ^ 0x68L), g_653)))) ^ (*l_1390)) == l_1538) && (*l_1528)) & (*l_1528)))
            {
                int l_1548 = (-4L);
                short *l_1552 = (void*)0;
                short **l_1551 = &l_1552;
                l_1553 &= (((0x2812L | (safe_lshift_func_uint16_t_u_s(0x6C46L, (*g_468)))) , l_1541) != ((*l_1551) = (((func_26((*l_1528)) , (((*g_1029) = (safe_sub_func_int16_t_s_s(((safe_add_func_int16_t_s_s(((safe_add_func_int8_t_s_s(func_54((*l_1528), (*l_1528)), l_1548)) != g_494[1][0][3]), l_1549)) >= 4294967293UL), l_1548))) , l_1550)) && l_1548) , (*g_467))));
            }
            else
            {
                int *l_1556 = &l_1399[3][3][0];
                int l_1564 = 0xB86EF57AL;
                for (g_285 = 0; (g_285 <= 0); g_285 += 1)
                {
                    unsigned l_1561 = 4294967295UL;
                    (*g_107) = ((**l_1347) | (safe_sub_func_uint8_t_u_u(((l_1556 == &l_1434) & (safe_add_func_int16_t_s_s((**g_467), (**g_467)))), (safe_div_func_int8_t_s_s(func_26(l_1561), ((l_1562[1][1] = (-1L)) , 0x31L))))));
                    if (l_1562[0][0])
                        continue;
                    for (l_1511 = 0; (l_1511 <= 0); l_1511 += 1)
                    {
                        unsigned l_1563[7][7] = {{0xD42E40E8L,0xDDDDFDF2L,6UL,0xDDDDFDF2L,0xD42E40E8L,0x5D818A70L,6UL},{0x0D2CBA67L,0xD4ADBE72L,0x0D2CBA67L,0UL,0UL,0x0D2CBA67L,0xD4ADBE72L},{6UL,0xDDDDFDF2L,0xD42E40E8L,0xD42E40E8L,0xDDDDFDF2L,6UL,0xDDDDFDF2L},{0x0D2CBA67L,0UL,0UL,0x0D2CBA67L,0xD4ADBE72L,0x0D2CBA67L,0UL},{0x5D818A70L,0x5D818A70L,6UL,0xD42E40E8L,6UL,0x5D818A70L,0x5D818A70L},{0x0510C0D1L,0UL,0xB5D81016L,0UL,0x0510C0D1L,0x0510C0D1L,0UL},{0x4DDADCF9L,0xDDDDFDF2L,0x4DDADCF9L,6UL,6UL,0x4DDADCF9L,0xDDDDFDF2L}};
                        int i, j;
                        return l_1563[2][0];
                    }
                }
                return l_1564;
            }
        }
        else
        {
            unsigned short l_1593 = 0xF469L;
            unsigned short l_1598 = 1UL;
            for (l_1348 = 0; (l_1348 == 50); l_1348++)
            {
                int l_1576 = 0x24821627L;
                l_1567 = ((*l_1528) = (*g_107));
                if (l_1568[0])
                    break;
                for (l_1340 = 0; (l_1340 <= 6); l_1340 += 1)
                {
                    int l_1575 = 0L;
                    char *l_1592 = &g_1075;
                    for (g_1339 = 1; (g_1339 >= 0); g_1339 -= 1)
                    {
                        int i, j, k;
                        (**g_881) ^= (l_1343[g_1339][l_1340][(l_1340 + 1)] = (((*g_467) == (void*)0) | (***g_1527)));
                        (*g_876) = ((g_1569 == (safe_lshift_func_uint8_t_u_s((l_1572 >= (safe_lshift_func_uint16_t_u_s(l_1575, 15))), 6))) , (*l_1347));
                    }
                    (*l_1390) = (l_1576 <= (safe_rshift_func_int16_t_s_s((safe_mod_func_uint32_t_u_u((safe_lshift_func_int16_t_s_u((((l_1575 <= 0x7F8DL) == (*l_1528)) , ((**g_467) = (*g_468))), 13)), (4294967295UL || (l_1583 == l_1583)))), (safe_mod_func_int32_t_s_s((*g_373), (*l_1528))))));
                    (*g_107) = (((safe_div_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u(((*l_1592) &= (safe_sub_func_int16_t_s_s((**g_467), l_1575))), l_1575)), (l_1593 , (safe_lshift_func_int8_t_s_u(l_1596, ((l_1598 = l_1597) || l_1576)))))) < 4UL) <= func_15(l_1576, l_1575));
                    if ((*g_107))
                        break;
                }
            }
        }
        l_1528 = l_1528;
    }
    return (*l_1390);
}







static int func_9(char p_10, char p_11, unsigned short p_12, char p_13, unsigned char p_14)
{
    int *l_703[3];
    int **l_719 = &g_107;
    unsigned *l_788 = &g_641[2][4][0];
    unsigned **l_787 = &l_788;
    unsigned ***l_786 = &l_787;
    unsigned char *l_848[2][10] = {{&g_340[3],&g_392[4],&g_392[2],&g_392[4],&g_340[3],&g_392[2],&g_340[0],&g_340[0],&g_392[2],&g_340[3]},{&g_340[3],&g_392[1],&g_392[1],&g_340[3],&g_121,&g_340[3],&g_340[3],&g_340[3],&g_121,&g_340[3]}};
    char *l_928[9];
    char l_968 = 0xFEL;
    unsigned short l_1004 = 1UL;
    unsigned short l_1026 = 65534UL;
    int ** volatile l_1031 = (void*)0;
    int l_1032 = (-10L);
    unsigned l_1037 = 4294967286UL;
    int l_1060 = 9L;
    unsigned short l_1067[1];
    unsigned char l_1068 = 1UL;
    unsigned *l_1069 = &l_1037;
    int ****l_1153 = &g_880[2][4];
    short l_1161 = 3L;
    int l_1248 = 0xCC7F0FD5L;
    int *l_1283[9] = {&g_264,&g_264,&g_264,&g_264,&g_264,&g_264,&g_264,&g_264,&g_264};
    int *l_1284 = &l_1032;
    char ***l_1303 = &g_664;
    unsigned char **l_1319[5][1][8] = {{{&g_721[3][2],(void*)0,&l_848[0][1],(void*)0,&l_848[0][1],&l_848[0][1],&l_848[0][1],&l_848[0][1]}},{{&g_721[2][4],&l_848[0][1],&l_848[0][1],&g_721[2][4],&g_721[3][2],&l_848[1][9],&l_848[0][1],&g_721[0][0]}},{{(void*)0,&g_721[2][4],&l_848[0][1],&l_848[0][1],&l_848[0][1],&g_721[2][4],&l_848[0][1],(void*)0}},{{&l_848[1][9],&g_721[3][2],&l_848[0][1],(void*)0,(void*)0,(void*)0,(void*)0,&l_848[0][1]}},{{(void*)0,(void*)0,&g_721[3][2],&l_848[0][1],(void*)0,&g_721[2][4],&l_848[1][9],&g_721[2][4]}}};
    unsigned char ***l_1318 = &l_1319[0][0][0];
    unsigned char ****l_1322 = &g_1320;
    unsigned *l_1325[9];
    unsigned **l_1324 = &l_1325[6];
    unsigned short *l_1326 = &g_285;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_703[i] = &g_264;
    for (i = 0; i < 9; i++)
        l_928[i] = &g_153[3][6][3];
    for (i = 0; i < 1; i++)
        l_1067[i] = 0xC2F5L;
    for (i = 0; i < 9; i++)
        l_1325[i] = &g_653;
    for (g_103 = 0; (g_103 >= (-11)); g_103--)
    {
        (*g_704) = l_703[2];
    }
    if (p_13)
    {
        unsigned char l_714 = 0xCCL;
        int **l_718 = &l_703[2];
        int ***l_717[8] = {(void*)0,(void*)0,&l_718,(void*)0,(void*)0,&l_718,(void*)0,(void*)0};
        unsigned l_722 = 1UL;
        unsigned char *l_724[6];
        short l_743 = (-5L);
        unsigned char l_806 = 1UL;
        unsigned char **l_830[10][1];
        int *l_888 = &g_6;
        short l_944 = (-2L);
        unsigned ***l_948 = &l_787;
        int i, j;
        for (i = 0; i < 6; i++)
            l_724[i] = &g_340[3];
        for (i = 0; i < 10; i++)
        {
            for (j = 0; j < 1; j++)
                l_830[i][j] = &l_724[4];
        }
        if (((((safe_lshift_func_uint16_t_u_s((safe_sub_func_uint16_t_u_u(((safe_sub_func_int8_t_s_s(((((g_711 == ((safe_rshift_func_int8_t_s_u(l_714, (!((l_719 = (((safe_sub_func_uint32_t_u_u(0UL, p_12)) || 4294967295UL) , (void*)0)) != &l_703[2])))) , g_720)) != 0x17L) ^ 0xDA16L) ^ 0x2EL), 0xB5L)) & 1L), l_722)), 4)) , p_11) , p_13) , 4L))
        {
            short l_729 = 0xEA4EL;
            short l_744 = 0x83E5L;
            int l_745[4][4] = {{0x924171CDL,1L,1L,0x924171CDL},{1L,0x924171CDL,0x3CEA3E30L,0x0702003EL},{1L,0x3CEA3E30L,1L,1L},{0x924171CDL,0x0702003EL,1L,1L}};
            int *l_746 = (void*)0;
            short l_789[8] = {4L,(-1L),4L,(-1L),4L,(-1L),4L,(-1L)};
            int i, j;
            if (p_13)
            {
                int l_723 = 0xF8D07C01L;
                unsigned char *l_725 = &g_121;
                unsigned *l_738[1][4];
                int l_739 = 1L;
                int *l_740 = &g_103;
                int *l_741 = (void*)0;
                int l_742 = 0xA6970686L;
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 4; j++)
                        l_738[i][j] = (void*)0;
                }
                l_743 = (l_723 == (((((**l_718) |= p_14) , l_724[4]) == l_725) , (safe_unary_minus_func_uint32_t_u((((0x833546F5L < (l_729 == (safe_add_func_uint32_t_u_u(((p_12 , p_12) ^ 0x98C9L), 4294967289UL)))) < 0x505FD974L) >= 0L)))));
                return p_13;
            }
            else
            {
                (**l_718) &= (l_745[2][2] = l_744);
            }
            l_746 = ((*l_718) = &l_745[1][1]);
            if (((*l_746) = 0xCE3B0566L))
            {
                short l_764 = 0xDE98L;
                for (l_729 = 0; (l_729 < 17); ++l_729)
                {
                    int *l_749[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_749[i] = &g_6;
                    (*l_718) = l_749[1];
                    for (g_339 = 0; (g_339 < 13); g_339++)
                    {
                        l_749[1] = l_749[0];
                    }
                    for (g_318 = 0; (g_318 >= (-7)); g_318--)
                    {
                        char l_754 = 0xE9L;
                        (*l_746) = l_754;
                        return l_754;
                    }
                }
                if (p_12)
                {
                    int **l_757 = &g_107;
                    char *l_765 = &g_255;
                    (*g_373) = ((safe_rshift_func_uint8_t_u_s(((((void*)0 == l_757) , ((*l_718) != (void*)0)) > (safe_sub_func_int32_t_s_s((g_153[3][6][1] | (func_26(((safe_lshift_func_uint16_t_u_s((safe_mod_func_uint8_t_u_u(l_764, ((*l_765) ^= (((*l_746) , p_11) , (**l_718))))), (**g_467))) == 0x82E63049L)) > p_10)), (*l_746)))), p_12)) || p_11);
                    for (l_743 = 1; (l_743 <= 7); l_743 += 1)
                    {
                        if (l_764)
                            break;
                    }
                }
                else
                {
                    for (l_743 = 0; (l_743 != (-19)); l_743 = safe_sub_func_uint32_t_u_u(l_743, 5))
                    {
                        (*l_746) |= (safe_add_func_uint32_t_u_u((g_121 , 0x1ED04D9FL), p_12));
                    }
                    (*l_746) ^= p_14;
                }
            }
            else
            {
                unsigned *l_774 = (void*)0;
                int l_776 = 0xC7BE6997L;
                unsigned short *l_785 = &g_285;
                unsigned char l_807 = 0x2EL;
                l_789[4] |= (safe_mod_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u((g_65[3][4][7] = (*g_132)), (((safe_unary_minus_func_uint32_t_u(g_153[2][4][3])) , (((l_776 >= func_36(l_776, ((safe_mod_func_int16_t_s_s(func_36(p_11, (safe_div_func_uint16_t_u_u(p_12, g_340[3])), (safe_sub_func_uint8_t_u_u((0x80AAL || ((*l_785) = func_36((safe_mod_func_int32_t_s_s(p_13, 0x62D23440L)), p_13, p_11, p_11, g_641[4][3][0]))), p_12)), (**l_718), g_392[2]), (*l_746))) , 1L), (*l_746), g_264, p_10)) , &g_131[1]) != l_786)) & 0x51B3L))), 0xC9E3L));
                for (g_168 = 25; (g_168 != 16); --g_168)
                {
                    short *l_796 = &g_370;
                    int l_801 = 1L;
                    int l_810 = 0xE848E73DL;
                    (**l_718) = (((+p_10) < (((safe_lshift_func_uint16_t_u_s(g_285, 13)) & ((safe_div_func_int16_t_s_s(((*l_796) |= (**g_467)), (safe_mod_func_uint32_t_u_u((safe_div_func_uint32_t_u_u((func_36(l_801, l_776, (1L & (safe_add_func_int32_t_s_s((4294967287UL && (((((func_36((((safe_lshift_func_int16_t_s_s(p_13, p_14)) | l_801) | l_806), p_13, g_585, p_10, p_12) >= p_12) != (-1L)) , 0L) , l_746) == (void*)0)), p_14))), g_4, g_255) <= p_13), 4294967291UL)), 0x592F4CDAL)))) >= 0L)) , l_807)) , (*g_373));
                    for (g_103 = 0; (g_103 <= (-1)); g_103 = safe_sub_func_uint16_t_u_u(g_103, 1))
                    {
                        return l_810;
                    }
                    for (g_653 = 13; (g_653 != 21); g_653++)
                    {
                        (**l_718) = (func_19((l_776 && l_801), func_15((*g_602), p_14), l_776, l_810, ((safe_div_func_int32_t_s_s(p_10, p_11)) , l_810)) <= g_168);
                        (*l_718) = &l_745[0][3];
                        (*l_718) = &l_745[0][1];
                    }
                    if (p_14)
                        break;
                }
                for (g_370 = 10; (g_370 < 25); g_370++)
                {
                    return p_12;
                }
            }
        }
        else
        {
            int l_819 = 0x4D78CE10L;
            unsigned l_820 = 0UL;
            unsigned char **l_823 = (void*)0;
            (*g_373) = (safe_sub_func_int8_t_s_s(l_819, l_820));
            (**l_718) = (*g_424);
            for (g_74 = (-11); (g_74 > 33); g_74++)
            {
                g_720 = l_823;
            }
        }
        for (g_653 = 5; (g_653 >= 47); g_653 = safe_add_func_int32_t_s_s(g_653, 5))
        {
            short *l_827[3];
            unsigned char **l_828[5][7][5] = {{{&g_721[4][0],(void*)0,&l_724[4],&g_721[2][4],&l_724[5]},{&l_724[5],&g_721[2][4],&g_721[2][4],&g_721[2][4],&l_724[5]},{&g_721[3][4],(void*)0,&g_721[2][4],&g_721[2][1],&l_724[5]},{&g_721[4][1],&g_721[2][1],&l_724[1],(void*)0,&l_724[5]},{&g_721[0][2],&g_721[2][4],&g_721[2][0],(void*)0,&l_724[5]},{&g_721[4][0],(void*)0,&l_724[4],&g_721[2][4],&l_724[5]},{&l_724[5],&g_721[2][4],&g_721[2][4],&g_721[2][4],&l_724[5]}},{{&g_721[3][4],(void*)0,&g_721[2][4],&g_721[2][1],&l_724[5]},{&g_721[4][1],&g_721[2][1],&l_724[1],(void*)0,&l_724[5]},{&l_724[4],&g_721[2][4],&l_724[5],&g_721[2][0],&l_724[1]},{(void*)0,&g_721[2][4],&g_721[0][2],&g_721[2][4],&l_724[1]},{&l_724[1],&l_724[4],&g_721[3][4],&l_724[4],&l_724[1]},{&l_724[4],&g_721[2][0],&g_721[4][0],&l_724[1],&l_724[1]},{&g_721[2][4],&l_724[1],&g_721[4][1],&g_721[2][4],&l_724[1]}},{{&l_724[4],&g_721[2][4],&l_724[5],&g_721[2][0],&l_724[1]},{(void*)0,&g_721[2][4],&g_721[0][2],&g_721[2][4],&l_724[1]},{&l_724[1],&l_724[4],&g_721[3][4],&l_724[4],&l_724[1]},{&l_724[4],&g_721[2][0],&g_721[4][0],&l_724[1],&l_724[1]},{&g_721[2][4],&l_724[1],&g_721[4][1],&g_721[2][4],&l_724[1]},{&l_724[4],&g_721[2][4],&l_724[5],&g_721[2][0],&l_724[1]},{(void*)0,&g_721[2][4],&g_721[0][2],&g_721[2][4],&l_724[1]}},{{&l_724[1],&l_724[4],&g_721[3][4],&l_724[4],&l_724[1]},{&l_724[4],&g_721[2][0],&g_721[4][0],&l_724[1],&l_724[1]},{&g_721[2][4],&l_724[1],&g_721[4][1],&g_721[2][4],&l_724[1]},{&l_724[4],&g_721[2][4],&l_724[5],&g_721[2][0],&l_724[1]},{(void*)0,&g_721[2][4],&g_721[0][2],&g_721[2][4],&l_724[1]},{&l_724[1],&l_724[4],&g_721[3][4],&l_724[4],&l_724[1]},{&l_724[4],&g_721[2][0],&g_721[4][0],&l_724[1],&l_724[1]}},{{&g_721[2][4],&g_721[2][4],&g_721[2][4],&l_724[4],&g_721[2][4]},{&g_721[2][1],(void*)0,&l_724[1],&l_724[1],&g_721[2][4]},{&g_721[2][4],&l_724[4],&l_724[4],(void*)0,&g_721[2][4]},{&g_721[2][4],&l_724[4],&g_721[1][4],&l_724[4],&g_721[2][4]},{(void*)0,&l_724[1],&g_721[3][3],&g_721[2][4],&g_721[2][4]},{(void*)0,&g_721[2][4],&g_721[2][4],&l_724[4],&g_721[2][4]},{&g_721[2][1],(void*)0,&l_724[1],&l_724[1],&g_721[2][4]}}};
            unsigned char ***l_829[10][5][5] = {{{&l_828[0][1][3],&l_828[0][3][3],&l_828[0][3][3],&l_828[0][0][4],&l_828[1][6][3]},{&l_828[0][0][4],&l_828[0][6][0],&l_828[0][2][4],&l_828[0][3][3],&l_828[0][3][3]},{&l_828[0][3][3],(void*)0,&l_828[0][0][4],(void*)0,&l_828[0][3][3]},{&l_828[0][3][3],&l_828[0][5][3],&l_828[0][3][3],(void*)0,&l_828[0][3][3]},{&l_828[0][3][3],&l_828[0][0][4],&l_828[0][5][3],&l_828[4][3][4],&l_828[0][3][3]}},{{&l_828[0][3][3],&l_828[0][3][3],&l_828[0][3][3],&l_828[0][3][3],&l_828[0][5][3]},{&l_828[0][0][4],&l_828[2][5][1],&l_828[0][3][3],(void*)0,&l_828[0][3][3]},{&l_828[0][1][3],&l_828[0][3][3],&l_828[2][5][4],&l_828[0][3][3],&l_828[0][3][3]},{&l_828[2][5][4],&l_828[0][3][3],(void*)0,(void*)0,&l_828[0][1][3]},{(void*)0,&l_828[0][3][3],&l_828[0][3][3],&l_828[0][3][3],(void*)0}},{{&l_828[0][2][4],&l_828[0][3][3],&l_828[0][3][3],&l_828[4][3][4],&l_828[0][3][3]},{&l_828[0][3][3],&l_828[0][6][2],&l_828[0][3][3],(void*)0,&l_828[2][5][4]},{&l_828[1][6][1],&l_828[0][3][3],&l_828[0][3][3],&l_828[0][3][3],(void*)0},{(void*)0,&l_828[2][5][4],&l_828[0][3][3],&l_828[2][5][4],(void*)0},{(void*)0,&l_828[1][6][3],&l_828[0][3][3],&l_828[0][3][3],&l_828[0][6][2]}},{{&l_828[0][3][3],(void*)0,&l_828[0][3][3],&l_828[4][3][4],&l_828[1][6][1]},{&l_828[0][6][0],&l_828[0][3][3],&l_828[0][3][3],&l_828[1][6][3],&l_828[0][6][2]},{&l_828[0][3][3],&l_828[4][3][4],&l_828[2][5][4],&l_828[0][3][3],(void*)0},{&l_828[0][6][2],&l_828[0][6][0],&l_828[0][3][3],(void*)0,(void*)0},{&l_828[2][5][1],&l_828[0][3][3],(void*)0,&l_828[0][3][3],&l_828[0][0][4]}},{{&l_828[0][1][3],&l_828[0][3][3],(void*)0,(void*)0,&l_828[0][3][3]},{&l_828[0][3][3],&l_828[0][3][3],&l_828[0][3][3],&l_828[0][3][3],&l_828[0][3][3]},{&l_828[0][3][3],&l_828[0][3][3],&l_828[2][5][4],&l_828[0][3][3],&l_828[0][3][3]},{&l_828[0][3][3],&l_828[0][3][3],&l_828[0][3][3],(void*)0,&l_828[0][3][3]},{(void*)0,&l_828[0][3][3],&l_828[0][3][3],&l_828[0][3][3],(void*)0}},{{&l_828[0][3][3],&l_828[0][3][3],&l_828[0][3][3],&l_828[2][5][1],&l_828[0][3][3]},{&l_828[0][3][3],(void*)0,&l_828[0][3][3],&l_828[0][3][3],&l_828[0][3][3]},{&l_828[0][3][3],&l_828[0][1][3],&l_828[0][3][3],&l_828[0][3][3],&l_828[0][3][3]},{&l_828[0][1][3],&l_828[0][3][3],&l_828[0][3][3],&l_828[0][3][3],&l_828[0][3][3]},{&l_828[2][5][1],(void*)0,&l_828[0][5][3],&l_828[0][3][3],&l_828[0][5][3]}},{{&l_828[0][6][2],&l_828[0][6][2],&l_828[0][2][4],&l_828[2][5][1],&l_828[0][3][3]},{&l_828[0][3][3],&l_828[0][1][3],&l_828[0][0][4],&l_828[0][3][3],&l_828[1][6][3]},{&l_828[0][3][3],&l_828[0][3][3],(void*)0,&l_828[0][3][3],&l_828[0][3][3]},{&l_828[0][6][0],&l_828[0][1][3],&l_828[0][3][3],&l_828[0][3][3],&l_828[0][3][3]},{&l_828[0][3][3],&l_828[0][3][3],&l_828[0][3][3],(void*)0,&l_828[0][0][4]}},{{&l_828[0][3][3],&l_828[2][5][4],&l_828[0][6][2],&l_828[0][3][3],&l_828[0][3][3]},{&l_828[0][3][3],&l_828[0][3][3],(void*)0,&l_828[0][3][3],&l_828[0][3][3]},{&l_828[0][3][3],&l_828[0][3][3],&l_828[0][3][3],&l_828[0][0][4],&l_828[0][0][4]},{&l_828[0][3][3],&l_828[0][0][4],&l_828[0][3][3],&l_828[0][3][3],&l_828[0][3][3]},{(void*)0,&l_828[0][6][0],&l_828[0][3][3],&l_828[4][3][4],&l_828[0][3][3]}},{{(void*)0,&l_828[0][3][3],&l_828[4][3][4],&l_828[1][6][1],&l_828[1][6][3]},{&l_828[0][5][3],&l_828[0][3][3],&l_828[0][3][3],&l_828[0][3][3],&l_828[0][3][3]},{&l_828[0][3][3],&l_828[0][3][3],&l_828[0][3][3],&l_828[0][3][3],&l_828[0][3][3]},{&l_828[0][1][3],&l_828[0][3][3],&l_828[0][3][3],&l_828[0][3][3],&l_828[0][6][0]},{&l_828[0][3][3],&l_828[0][6][2],(void*)0,&l_828[1][6][3],(void*)0}},{{&l_828[0][3][3],&l_828[0][3][3],&l_828[0][6][2],&l_828[0][3][3],&l_828[0][1][3]},{&l_828[0][1][3],&l_828[0][3][3],&l_828[0][3][3],&l_828[0][1][3],&l_828[0][6][2]},{&l_828[0][3][3],&l_828[1][6][1],&l_828[0][3][3],&l_828[0][3][3],&l_828[0][3][3]},{&l_828[0][5][3],&l_828[2][5][1],(void*)0,&l_828[0][3][3],(void*)0},{(void*)0,&l_828[0][3][3],&l_828[0][0][4],&l_828[0][3][3],&l_828[0][5][3]}}};
            int l_836 = (-1L);
            short l_837 = 0x258CL;
            unsigned char l_864 = 0x29L;
            unsigned short *l_882[2][4][8] = {{{&g_74,&g_74,&g_74,&g_74,&g_74,&g_74,&g_74,&g_74},{&g_74,&g_74,&g_74,&g_74,&g_74,&g_74,&g_74,&g_74},{&g_74,&g_74,&g_74,&g_74,&g_74,&g_74,&g_74,&g_74},{&g_74,&g_74,&g_74,&g_74,&g_74,&g_74,&g_74,&g_74}},{{&g_74,&g_74,&g_74,&g_74,&g_74,&g_74,&g_74,&g_74},{&g_74,&g_74,&g_74,&g_74,&g_74,&g_74,&g_74,&g_74},{&g_74,&g_74,&g_74,&g_74,&g_74,&g_74,&g_74,&g_74},{&g_74,&g_74,&g_74,&g_74,&g_74,&g_74,&g_74,&g_74}}};
            unsigned char l_886 = 6UL;
            int l_887 = 3L;
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_827[i] = &g_370;
            if (((g_168 |= (*g_468)) || (l_828[0][3][3] == (l_830[8][0] = l_828[4][6][1]))))
            {
                unsigned char l_831 = 252UL;
                int *l_833[6];
                int i;
                for (i = 0; i < 6; i++)
                    l_833[i] = &g_68;
                if (l_831)
                    break;
                for (g_255 = 4; (g_255 >= 0); g_255 -= 1)
                {
                    int *l_832[10][4] = {{(void*)0,&g_287,(void*)0,(void*)0},{&g_287,&g_287,&g_287,&g_287},{&g_287,(void*)0,(void*)0,&g_287},{(void*)0,&g_287,(void*)0,(void*)0},{&g_287,&g_287,&g_287,&g_287},{&g_287,(void*)0,(void*)0,&g_287},{(void*)0,&g_287,(void*)0,(void*)0},{&g_287,&g_287,&g_287,&g_287},{&g_287,&g_287,&g_287,(void*)0},{&g_287,(void*)0,&g_287,&g_287}};
                    int i, j;
                    (*l_718) = l_832[1][0];
                    (*l_718) = l_832[1][0];
                    for (l_743 = 1; (l_743 <= 4); l_743 += 1)
                    {
                        (*l_718) = l_833[4];
                    }
                }
                l_836 ^= (safe_mod_func_uint8_t_u_u(p_14, (p_13 = g_318)));
                l_836 = l_837;
            }
            else
            {
                unsigned l_847 = 4294967286UL;
                int l_849 = 0L;
                int l_850 = 0x24BF0278L;
                short l_871 = 6L;
                int ****l_877[5];
                int *****l_878[7] = {(void*)0,(void*)0,&l_877[0],(void*)0,(void*)0,&l_877[0],(void*)0};
                unsigned *l_883[1][6][3] = {{{&l_722,(void*)0,&l_722},{&g_653,&g_653,&l_722},{&g_653,(void*)0,&g_653},{&g_653,&l_722,&l_722},{&l_722,(void*)0,&l_722},{&g_653,&g_653,&l_722}}};
                unsigned short l_885 = 65535UL;
                int i, j, k;
                for (i = 0; i < 5; i++)
                    l_877[i] = (void*)0;
                if (p_10)
                    break;
                if ((l_850 = ((((safe_lshift_func_uint8_t_u_s((g_370 | ((l_849 = ((((safe_rshift_func_int8_t_s_s((-10L), p_10)) < ((((safe_rshift_func_uint8_t_u_s(((p_11 ^ 0xBCDEL) | ((safe_sub_func_uint32_t_u_u((safe_unary_minus_func_int16_t_s(func_26(p_10))), (((func_36(p_13, l_847, g_153[3][6][3], p_10, g_5) , (void*)0) != l_848[0][1]) || (*g_602)))) > 0xBD3CL)), 2)) > 0x46L) == l_837) <= 0xC99C8DDCL)) && 0x13L) != (*g_468))) == p_13)), l_847)) & g_65[3][4][7]) != 4UL) ^ p_12)))
                {
                    int l_851 = (-4L);
                    int l_856 = (-4L);
                    int l_865 = 0x69EF7086L;
                    unsigned l_867 = 0xF99A2740L;
                    if ((((((!l_851) > (**g_601)) && (safe_mod_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u(((p_11 | ((l_850 = (l_856 ^= (l_836 = (l_837 || (*g_468))))) <= p_12)) , l_856), 11)), ((((safe_unary_minus_func_int8_t_s((safe_sub_func_int8_t_s_s((((func_26(((safe_div_func_int8_t_s_s((!((l_865 = (l_864 = (safe_rshift_func_uint16_t_u_s((p_12 & 1L), l_851)))) , p_12)), 6UL)) , p_11)) && p_14) , 0x175DC0F2L) < p_11), 0xA7L)))) & 0L) || 0x77L) , g_67)))) != 0xFFL) , 1L))
                    {
                        int l_866[9][8][3] = {{{0x41ED9F1BL,0xD6F881C7L,(-9L)},{0xF95D93BBL,6L,0xF95D93BBL},{8L,0x8A59DF1BL,(-9L)},{0xB65352FCL,0xB65352FCL,0x21C900A1L},{0L,0x8A59DF1BL,0x41ED9F1BL},{0x21C900A1L,6L,1L},{0L,0xD6F881C7L,0L},{0xB65352FCL,0x21C900A1L,1L}},{{8L,(-6L),0x41ED9F1BL},{0xF95D93BBL,0x21C900A1L,0x21C900A1L},{0x41ED9F1BL,0xD6F881C7L,(-9L)},{0xF95D93BBL,6L,0xF95D93BBL},{8L,0x8A59DF1BL,(-9L)},{0xB65352FCL,0xB65352FCL,0x21C900A1L},{0L,0x8A59DF1BL,0x41ED9F1BL},{0x21C900A1L,6L,1L}},{{0L,0xD6F881C7L,0L},{0xB65352FCL,0x21C900A1L,1L},{8L,(-6L),0x41ED9F1BL},{0xF95D93BBL,0x21C900A1L,0x21C900A1L},{0x41ED9F1BL,0xD6F881C7L,(-9L)},{6L,0x21C900A1L,6L},{0L,(-5L),8L},{0xF95D93BBL,0xF95D93BBL,1L}},{{5L,(-5L),(-9L)},{1L,0x21C900A1L,0xB65352FCL},{5L,0x8A59DF1BL,5L},{0xF95D93BBL,1L,0xB65352FCL},{0L,(-2L),(-9L)},{6L,1L,1L},{(-9L),0x8A59DF1BL,8L},{6L,0x21C900A1L,6L}},{{0L,(-5L),8L},{0xF95D93BBL,0xF95D93BBL,1L},{5L,(-5L),(-9L)},{1L,0x21C900A1L,0xB65352FCL},{5L,0x8A59DF1BL,5L},{0xF95D93BBL,1L,0xB65352FCL},{0L,(-2L),(-9L)},{6L,1L,1L}},{{(-9L),0x8A59DF1BL,8L},{6L,0x21C900A1L,6L},{0L,(-5L),8L},{0xF95D93BBL,0xF95D93BBL,1L},{5L,(-5L),(-9L)},{1L,0x21C900A1L,0xB65352FCL},{5L,0x8A59DF1BL,5L},{0xF95D93BBL,1L,0xB65352FCL}},{{0L,(-2L),(-9L)},{6L,1L,1L},{(-9L),0x8A59DF1BL,8L},{6L,0x21C900A1L,6L},{0L,(-5L),8L},{0x21C900A1L,0x21C900A1L,0xF95D93BBL},{(-9L),(-2L),0L},{0xF95D93BBL,0xB65352FCL,6L}},{{(-9L),(-6L),(-9L)},{0x21C900A1L,0xF95D93BBL,6L},{0x41ED9F1BL,0x8A59DF1BL,0L},{1L,0xF95D93BBL,0xF95D93BBL},{0L,(-6L),5L},{1L,0xB65352FCL,1L},{0x41ED9F1BL,(-2L),5L},{0x21C900A1L,0x21C900A1L,0xF95D93BBL}},{{(-9L),(-2L),0L},{0xF95D93BBL,0xB65352FCL,6L},{(-9L),(-6L),(-9L)},{0x21C900A1L,0xF95D93BBL,6L},{0x41ED9F1BL,0x8A59DF1BL,0L},{1L,0xF95D93BBL,0xF95D93BBL},{0L,(-6L),5L},{1L,0xB65352FCL,1L}}};
                        int i, j, k;
                        (*g_470) = &l_849;
                        if (l_865)
                            continue;
                        if (l_849)
                            break;
                        (*g_107) = l_866[3][2][1];
                    }
                    else
                    {
                        unsigned char l_868[7][2][1];
                        int i, j, k;
                        for (i = 0; i < 7; i++)
                        {
                            for (j = 0; j < 2; j++)
                            {
                                for (k = 0; k < 1; k++)
                                    l_868[i][j][k] = 0xB9L;
                            }
                        }
                        l_836 = (l_867 != l_868[2][0][0]);
                    }
                    (*l_718) = &l_865;
                    if (p_11)
                        continue;
                    if (p_12)
                        break;
                }
                else
                {
                    return p_14;
                }
                l_886 = ((((0x10L <= (safe_mod_func_int32_t_s_s(l_871, (l_871 | (p_10 ^ ((g_884 = (safe_add_func_int16_t_s_s(0L, (l_836 == ((g_874 != (g_879 = l_877[3])) != (l_882[1][0][4] == (void*)0)))))) , 5L)))))) > l_864) > l_885) && 4L);
                l_887 = (p_11 || p_14);
            }
            (*l_718) = l_888;
            return p_12;
        }
        if (p_12)
        {
            int *l_889[10][4] = {{&g_104,&g_67,&g_104,&g_67},{&g_104,&g_67,&g_104,&g_67},{&g_104,&g_67,&g_104,&g_67},{&g_104,&g_67,&g_104,&g_67},{&g_104,&g_67,&g_104,&g_67},{&g_104,&g_67,&g_104,&g_67},{&g_104,&g_67,&g_104,&g_67},{&g_104,&g_67,&g_104,&g_67},{&g_104,&g_67,&g_104,&g_67},{&g_104,&g_67,&g_104,&g_67}};
            int i, j;
            (*g_469) = l_889[9][0];
        }
        else
        {
            int l_890 = (-5L);
            unsigned short l_899 = 2UL;
            unsigned short *l_900 = &g_74;
            int **l_903 = &l_703[2];
            unsigned char **l_909 = &g_721[0][2];
            unsigned *l_941 = &g_641[2][3][0];
            char l_946 = (-5L);
            int l_947 = 0x84AEEEADL;
            short *l_967[6] = {(void*)0,&l_743,(void*)0,(void*)0,&l_743,(void*)0};
            unsigned ***l_969 = &l_787;
            int i;
            if (((((l_890 <= ((~(((safe_add_func_int32_t_s_s((safe_add_func_uint16_t_u_u((p_13 == ((safe_rshift_func_int8_t_s_s((safe_sub_func_uint16_t_u_u(((*g_602) , g_4), (((l_899 && ((*l_900) = (g_392[2] > (*l_888)))) , 4294967290UL) || 6L))), 2)) >= p_12)), (**g_467))), p_12)) , p_10) || 0x8830L)) <= g_6)) != l_890) != 0L) , p_11))
            {
                unsigned l_902 = 0x90ADCA77L;
                int l_908[8][5][6] = {{{0x1326171BL,1L,1L,0x3C01661BL,1L,1L},{(-1L),0xF4AB66D3L,5L,(-1L),0L,0x3C01661BL},{0x45814768L,0xC30266CAL,2L,0x59A19097L,0xDB47B2D3L,(-1L)},{2L,2L,0x19B57CFDL,(-5L),0x0A2E4103L,0x45589756L},{0x79149F58L,0x1FC13B72L,0x831425C2L,2L,0L,0x79149F58L}},{{0x330F768EL,0xDC5CAF13L,0xDB47B2D3L,0x7981577BL,0x43837E07L,1L},{(-8L),1L,0L,0xE81CB332L,1L,(-1L)},{0x9377AB08L,1L,0xE81CB332L,(-1L),0xE81CB332L,1L},{(-4L),0x43837E07L,(-5L),0x831425C2L,0L,0xDB47B2D3L},{0x79149F58L,(-9L),(-1L),9L,(-1L),0x1332D44BL}},{{0x2C5B494DL,(-9L),0x0A3F0AC4L,(-1L),0L,0x151538E7L},{0L,0x43837E07L,1L,(-1L),0xE81CB332L,(-8L)},{(-2L),1L,1L,(-1L),1L,0xAADA0402L},{0x45589756L,1L,0x602BBC26L,8L,0x43837E07L,0xDC5CAF13L},{0xAADA0402L,0xDC5CAF13L,0x47EE4F4EL,(-2L),0xB4CE2F4DL,0x5D4DD7DBL}},{{0L,0x79149F58L,0xAADA0402L,0x39BACEC3L,(-5L),0x45589756L},{0x1FC13B72L,0x47EE4F4EL,0xB31A98B2L,5L,(-2L),0L},{1L,0xD29A5CE7L,0xF902B93FL,(-1L),0xAAED39FCL,0x43837E07L},{(-1L),0xFE08E82DL,0x1326171BL,5L,0x59A19097L,(-1L)},{0L,5L,(-1L),(-1L),0L,0xB4CE2F4DL}},{{0x66636D22L,0L,(-2L),0x1FC13B72L,0xCC3525DFL,(-4L)},{1L,1L,0xE81CB332L,0x45814768L,(-2L),0xDC5CAF13L},{0x68B9EA69L,0x5D4DD7DBL,0xAAED39FCL,0x5621D3D8L,0xC30266CAL,0L},{(-1L),(-1L),0x44AAE85CL,0x44AAE85CL,(-1L),(-1L)},{(-1L),0L,(-1L),1L,0x9E0567A4L,0xB4CE2F4DL}},{{0xDB47B2D3L,0xAAED39FCL,0x1943E5B7L,0x45589756L,(-1L),2L},{0xDB47B2D3L,0xDC2DDAC8L,0x45589756L,1L,(-1L),1L},{(-1L),0x9E0567A4L,0xF902B93FL,0x44AAE85CL,0x45814768L,1L},{(-1L),5L,(-1L),0x5621D3D8L,8L,(-1L)},{0x68B9EA69L,(-1L),1L,0x45814768L,0x43837E07L,0x5D4DD7DBL}},{{1L,0x1943E5B7L,(-1L),(-5L),(-2L),0xA16C589FL},{5L,0x1332D44BL,8L,0x7981577BL,(-1L),0L},{0x66636D22L,(-1L),(-8L),2L,0x1326171BL,0x0A3F0AC4L},{0x330F768EL,1L,0x0A2E4103L,0x5D4DD7DBL,0xF902B93FL,0x3C01661BL},{(-9L),0x5621D3D8L,0xB4CE2F4DL,(-1L),0xB31A98B2L,0L}},{{(-5L),0x3C01661BL,0x2C5B494DL,0x602BBC26L,0xAADA0402L,0x47EE4F4EL},{0x47EE4F4EL,0x45814768L,0xDC2DDAC8L,1L,0L,1L},{(-4L),9L,(-1L),2L,0x2C5B494DL,0xDC5CAF13L},{1L,0x1943E5B7L,(-5L),1L,(-1L),0x5621D3D8L},{(-1L),(-1L),0x5D4DD7DBL,(-1L),(-1L),0x39BACEC3L}}};
                int i, j, k;
                l_908[0][2][3] &= ((((((safe_unary_minus_func_int8_t_s(l_902)) <= (((l_903 != ((p_10 | (+p_12)) , (*g_875))) | ((safe_add_func_uint16_t_u_u((((l_902 & p_14) , p_10) <= p_12), (**g_467))) >= p_13)) < (**g_467))) >= p_10) , l_902) || (*g_132)) == l_902);
                return p_11;
            }
            else
            {
                char l_929 = 0L;
                for (g_264 = 0; (g_264 <= 0); g_264 += 1)
                {
                    unsigned l_914 = 0xA5DC6353L;
                    int l_916 = 6L;
                    int *l_917 = &g_104;
                    (*l_903) = (void*)0;
                    for (l_890 = 7; (l_890 >= 0); l_890 -= 1)
                    {
                        int *l_910 = &g_318;
                        int l_918 = 0x95B0AF3BL;
                        char **l_921 = &g_192;
                        int i;
                        (*g_373) &= (p_10 , ((p_11 , l_910) != l_917));
                        l_918 = ((*l_917) = 0x75F51C30L);
                        (*l_718) = l_788;
                        (*l_917) ^= (safe_lshift_func_uint8_t_u_s(((p_14 > 0xA9L) | (((void*)0 != l_921) <= ((safe_add_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u((1L || (**g_467)), ((void*)0 != l_928[8]))), l_929)), p_12)) , (*g_468)))), 0));
                    }
                }
            }
            for (p_12 = 0; (p_12 > 20); p_12 = safe_add_func_uint8_t_u_u(p_12, 8))
            {
                int *l_932[7][1][7] = {{{&g_264,&g_264,&g_585,&g_264,(void*)0,(void*)0,&g_264}},{{&g_104,&g_104,&g_104,&g_104,(void*)0,&g_287,(void*)0}},{{&g_585,&g_6,(void*)0,&g_104,(void*)0,&g_287,(void*)0}},{{&g_104,(void*)0,&g_6,&g_585,&g_585,&g_287,&g_287}},{{&g_104,&g_104,&g_104,&g_104,&g_104,(void*)0,&g_287}},{{&g_264,&g_585,&g_264,(void*)0,&g_264,&g_585,(void*)0}},{{&g_264,&g_585,(void*)0,&g_104,&g_264,&g_287,&g_585}}};
                int i, j, k;
                (*g_876) = l_932[0][0][4];
                for (l_899 = (-26); (l_899 > 5); l_899++)
                {
                    unsigned l_945 = 0x6343A676L;
                    l_947 = (safe_add_func_int8_t_s_s(p_10, (((l_903 = &l_703[2]) != (void*)0) , ((safe_add_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s((((*l_787) = (void*)0) != l_941), p_11)), ((g_641[4][4][0] ^= (safe_add_func_uint16_t_u_u(65529UL, func_19((p_11 , p_11), l_944, (*g_602), l_945, l_946)))) <= (-1L)))) != 4294967294UL))));
                }
            }
            l_947 = (((l_948 == (p_12 , l_969)) & p_13) <= (**g_601));
            for (g_255 = 13; (g_255 > (-19)); g_255 = safe_sub_func_int8_t_s_s(g_255, 3))
            {
                int l_992 = 1L;
                (*g_424) = (+(p_12 ^ (g_641[2][7][0] = (safe_sub_func_int16_t_s_s((safe_mod_func_int8_t_s_s(((safe_add_func_int16_t_s_s(((*l_888) >= (4294967292UL || (((9UL ^ (p_14 && ((0xACDBF9C8L > (1UL ^ p_10)) | func_36((((safe_add_func_int32_t_s_s(4L, 0x039F4280L)) > p_12) >= 0UL), p_14, p_10, p_12, p_10)))) , (void*)0) == &g_653))), 0xEC50L)) , (-1L)), (**g_601))), 5L)))));
                l_947 ^= (safe_sub_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s((1UL && ((*l_941) = (safe_div_func_uint16_t_u_u((p_10 & p_13), func_26(p_13))))), (*g_468))), ((((((p_14 = ((p_14 || ((**g_601) = ((safe_add_func_uint32_t_u_u((((safe_rshift_func_uint16_t_u_s(((safe_rshift_func_int16_t_s_s(0x6E3CL, 13)) , g_285), l_890)) < l_992) , 4294967291UL), l_992)) , 1UL))) & l_992)) <= 0xE7L) ^ l_992) , p_11) ^ p_13) & p_12)));
            }
        }
        for (g_339 = 25; (g_339 == 8); g_339 = safe_sub_func_uint16_t_u_u(g_339, 3))
        {
            (*g_876) = (void*)0;
            (*g_373) = p_10;
            if (p_10)
                break;
        }
    }
    else
    {
        unsigned short l_1000 = 1UL;
        int l_1006[1][9] = {{0x4D21D49DL,0x4D21D49DL,0x891557CAL,0x4D21D49DL,0x4D21D49DL,0x891557CAL,0x4D21D49DL,0x4D21D49DL,0x891557CAL}};
        int l_1038 = 0x666EA38CL;
        int i, j;
        for (g_103 = (-12); (g_103 <= 2); ++g_103)
        {
            (*g_424) |= (~0x35F8B92FL);
            return p_11;
        }
        for (g_103 = 0; (g_103 >= (-28)); g_103 = safe_sub_func_uint8_t_u_u(g_103, 9))
        {
            unsigned char l_999 = 1UL;
            int l_1005 = (-10L);
            int l_1010 = 9L;
            short l_1017 = (-10L);
            unsigned l_1047 = 4294967295UL;
            int *l_1055 = (void*)0;
            g_1007 = (func_36((l_1005 = (p_13 >= ((((((((+(l_1000 &= l_999)) , l_1000) < ((**l_787) ^= 0UL)) & ((((g_65[3][4][7] || (safe_lshift_func_int8_t_s_s(((-9L) < l_999), (((((safe_unary_minus_func_uint16_t_u((func_26(p_14) != 3UL))) , (*g_373)) < l_999) > g_494[1][1][3]) , l_1004)))) ^ p_11) & (*g_468)) & g_153[3][6][3])) != l_999) || l_1000) , p_12) , 0xE9L))), p_10, l_999, p_12, l_1006[0][5]) > l_1006[0][5]);
            l_1010 &= (l_1005 = (safe_rshift_func_uint16_t_u_s(p_13, p_10)));
            for (g_653 = 0; (g_653 >= 5); g_653 = safe_add_func_int32_t_s_s(g_653, 4))
            {
                char l_1018 = 1L;
                int l_1025[7];
                unsigned ***l_1036 = &l_787;
                int i;
                for (i = 0; i < 7; i++)
                    l_1025[i] = 5L;
                if (((safe_rshift_func_uint8_t_u_u((**g_601), l_1006[0][5])) , (((func_36(p_12, func_36(l_1006[0][2], (p_12 != ((*g_424) = ((safe_div_func_int32_t_s_s(((l_1018 ^= l_1017) < (safe_add_func_uint32_t_u_u(((((p_12 & l_1000) | ((safe_div_func_uint32_t_u_u((((safe_mod_func_uint32_t_u_u((((**g_467) = 0xCBDAL) ^ (-1L)), p_14)) | p_10) ^ p_12), l_1010)) | 0xC3DFL)) & l_999) != l_1025[4]), l_999))), p_14)) , 0x6076E076L))), l_1025[4], p_12, p_12), g_103, l_1026, l_1000) , p_13) < 8L) >= p_12)))
                {
                    int *l_1027 = (void*)0;
                    int ** volatile *l_1030[7] = {(void*)0,(void*)0,&g_1028,(void*)0,(void*)0,&g_1028,(void*)0};
                    unsigned ***l_1035[8] = {(void*)0,&l_787,&l_787,(void*)0,&l_787,&l_787,(void*)0,&l_787};
                    int i;
                    (*g_876) = l_1027;
                    l_1031 = g_1028;
                    if (((*g_373) |= (g_915 > 65535UL)))
                    {
                        l_1010 = p_10;
                    }
                    else
                    {
                        l_1038 &= (func_26(((l_1032 , (l_1006[0][8] || ((p_12 == (safe_sub_func_int32_t_s_s((l_1035[5] == l_1036), ((l_1017 , l_1037) | ((((void*)0 == (*g_601)) ^ 0xC9C3L) | l_1025[6]))))) <= 0x0824444EL))) && p_11)) > l_1010);
                    }
                    for (g_104 = 0; (g_104 < (-16)); g_104 = safe_sub_func_uint32_t_u_u(g_104, 7))
                    {
                        unsigned l_1041 = 0x82BD6FD2L;
                        l_1025[4] = p_10;
                        l_1006[0][6] &= l_1018;
                        if (p_13)
                            break;
                        l_1005 |= (l_1041 = l_1006[0][0]);
                    }
                }
                else
                {
                    (*g_881) = &l_1032;
                }
                l_1025[4] = l_1000;
                if (p_13)
                    break;
            }
            for (p_12 = (-14); (p_12 != 60); p_12 = safe_add_func_uint8_t_u_u(p_12, 5))
            {
                unsigned char l_1046 = 0UL;
                int *l_1050[9] = {&l_1032,&l_1032,&l_1032,&l_1032,&l_1032,&l_1032,&l_1032,&l_1032,&l_1032};
                int ***l_1051 = &l_719;
                int i;
                l_1010 ^= (safe_mod_func_int8_t_s_s((l_1046 = 0xADL), p_11));
                if ((func_28(((p_10 ^= l_1038) ^ p_11)) == ((l_1006[0][5] = ((((~l_1000) || 9L) != g_494[2][1][0]) || (l_1005 = p_13))) , func_36(p_11, p_11, l_1047, l_999, l_1046))))
                {
                    for (g_653 = 0; (g_653 < 8); ++g_653)
                    {
                        return l_1046;
                    }
                }
                else
                {
                    int *l_1052 = (void*)0;
                    int l_1053[10][6][4] = {{{0xEB713DCFL,(-5L),0xFA226E51L,0xDC146ED6L},{0L,(-1L),0L,(-8L)},{0L,1L,0xFA226E51L,0x7BCCD7A5L},{0xEB713DCFL,(-8L),0xCFED5718L,0x5C286912L},{0x636F5E59L,0L,0L,0x636F5E59L},{0x5C286912L,0xCFED5718L,(-8L),0xEB713DCFL}},{{0x7BCCD7A5L,0xFA226E51L,1L,0L},{(-8L),0L,(-1L),0L},{0xDC146ED6L,0xFA226E51L,(-5L),0xEB713DCFL},{6L,0xCFED5718L,0x5060AD03L,0x636F5E59L},{0x0BD37573L,0L,0x0BD37573L,0x5C286912L},{3L,(-8L),1L,0x7BCCD7A5L}},{{0xCFED5718L,1L,0x7BCCD7A5L,(-8L)},{0x636F5E59L,1L,0x5060AD03L,0x2B57DB8DL},{(-8L),0x636F5E59L,0L,1L},{6L,3L,0xFA226E51L,0xFA226E51L},{0xFA226E51L,0xFA226E51L,3L,6L},{1L,0L,0x636F5E59L,(-8L)}},{{0x2B57DB8DL,0x5060AD03L,1L,0x636F5E59L},{0xDC146ED6L,0x5060AD03L,0x0D44688FL,(-8L)},{0x5060AD03L,0L,0xDC146ED6L,6L},{2L,0xFA226E51L,0x5C286912L,0xFA226E51L},{0xCFED5718L,3L,(-8L),1L},{0L,0x636F5E59L,(-1L),0x2B57DB8DL}},{{0x5C286912L,1L,0x0BD37573L,0xDC146ED6L},{0x5C286912L,0x0D44688FL,(-1L),0x5060AD03L},{0L,0xDC146ED6L,(-8L),2L},{0xCFED5718L,0x5C286912L,0x5C286912L,0xCFED5718L},{2L,(-8L),0xDC146ED6L,0L},{0x5060AD03L,(-1L),0x0D44688FL,0x5C286912L}},{{0xDC146ED6L,0x0BD37573L,1L,0x5C286912L},{0x2B57DB8DL,(-1L),0x636F5E59L,0L},{1L,(-8L),3L,0xCFED5718L},{0xFA226E51L,0x5C286912L,0xFA226E51L,2L},{6L,0xDC146ED6L,0L,0x5060AD03L},{(-8L),0x0D44688FL,0x5060AD03L,0xDC146ED6L}},{{0x636F5E59L,1L,0x5060AD03L,2L},{0L,1L,(-1L),0xFA226E51L},{0x0BD37573L,0L,0x2B57DB8DL,0x2B57DB8DL},{0x2B57DB8DL,0x2B57DB8DL,0L,0x0BD37573L},{0xFA226E51L,(-1L),1L,0L},{2L,0xEB713DCFL,0x5060AD03L,1L}},{{0x5C286912L,0xEB713DCFL,3L,0L},{0xEB713DCFL,(-1L),0x5C286912L,0x0BD37573L},{(-5L),0x2B57DB8DL,0x0D44688FL,0x2B57DB8DL},{0L,0L,0L,0xFA226E51L},{(-8L),1L,0x7BCCD7A5L,2L},{0x0D44688FL,0x5060AD03L,0xDC146ED6L,0x5C286912L}},{{0x0D44688FL,3L,0x7BCCD7A5L,0xEB713DCFL},{(-8L),0x5C286912L,0L,(-5L)},{0L,0x0D44688FL,0x0D44688FL,0L},{(-5L),0L,0x5C286912L,(-8L)},{0xEB713DCFL,0x7BCCD7A5L,3L,0x0D44688FL},{0x5C286912L,0xDC146ED6L,0x5060AD03L,0x0D44688FL}},{{2L,0x7BCCD7A5L,1L,(-8L)},{0xFA226E51L,0L,0L,0L},{0x2B57DB8DL,0x0D44688FL,0x2B57DB8DL,(-5L)},{0x0BD37573L,0x5C286912L,(-1L),0xEB713DCFL},{0L,3L,0xEB713DCFL,0x5C286912L},{1L,0x5060AD03L,0xEB713DCFL,2L}}};
                    int **l_1054 = &g_1029;
                    int i, j, k;
                    (*g_881) = l_1050[0];
                    (*g_881) = (((**l_719) = (((void*)0 == l_1051) != ((g_153[2][1][1] && p_11) || l_1010))) , l_1052);
                    for (l_1032 = 2; (l_1032 >= 0); l_1032 -= 1)
                    {
                        int i;
                        l_1053[0][0][0] = l_1017;
                        l_1006[0][5] = ((void*)0 == l_1054);
                        l_1055 = &l_1053[0][0][0];
                    }
                }
            }
        }
    }
    if ((p_11 , ((~(((*l_1069) |= ((g_65[1][5][6] = (*g_132)) ^ ((((safe_div_func_uint32_t_u_u((0xED0DL == p_13), (safe_div_func_uint16_t_u_u((p_13 > ((l_1060 == (safe_sub_func_int16_t_s_s(((&p_12 != (((safe_rshift_func_uint8_t_u_u((safe_add_func_int8_t_s_s((l_1067[0] = p_11), p_11)), 6)) > p_12) , &p_12)) , p_12), 0x24D1L))) > 0x397F9D79L)), 0x60FCL)))) || l_1068) == p_11) != (*g_468)))) == p_13)) , p_10)))
    {
        unsigned short l_1096 = 65535UL;
        int l_1097 = (-10L);
        char l_1105[2];
        unsigned l_1113 = 0xE23A25F2L;
        int l_1130 = 0x1C0AA477L;
        unsigned char l_1141 = 0x52L;
        int *l_1144 = &g_104;
        int *l_1149[6] = {&l_1130,&l_1130,&g_264,&l_1130,&l_1130,&g_264};
        unsigned l_1209[10] = {0x925477E7L,0x00298C4EL,0x925477E7L,0x00298C4EL,0x925477E7L,0x00298C4EL,0x925477E7L,0x00298C4EL,0x925477E7L,0x00298C4EL};
        int l_1229[10] = {0x07BB8BCBL,(-1L),(-1L),0x07BB8BCBL,(-1L),(-1L),0x07BB8BCBL,(-1L),(-1L),0x07BB8BCBL};
        char **l_1231 = &g_192;
        int *l_1233 = &g_264;
        unsigned char **l_1243 = &g_721[4][3];
        unsigned l_1268 = 0xBFA35EAAL;
        int i;
        for (i = 0; i < 2; i++)
            l_1105[i] = 0x21L;
        if (p_13)
        {
            int *l_1070 = &g_104;
            int l_1087 = 1L;
            int *****l_1090 = &g_879;
            int l_1108 = 0xBB07DACCL;
            char l_1142 = 0L;
            unsigned l_1181 = 0x3E79433EL;
            unsigned **l_1225 = (void*)0;
            char **l_1228 = (void*)0;
            l_1070 = ((*g_704) = l_1070);
            for (g_104 = 0; (g_104 == 11); g_104 = safe_add_func_int8_t_s_s(g_104, 5))
            {
                (*g_876) = l_1070;
                if ((safe_lshift_func_int8_t_s_u(p_11, 7)))
                {
                    return p_10;
                }
                else
                {
                    return g_1075;
                }
            }
            if ((l_1097 |= ((safe_sub_func_int8_t_s_s((safe_rshift_func_int16_t_s_u((((*g_468) == ((((safe_div_func_uint32_t_u_u((safe_lshift_func_int16_t_s_s(((*g_468) > (((safe_unary_minus_func_int8_t_s(0xBBL)) >= (~((l_1087 && ((func_54((safe_rshift_func_int8_t_s_u(((void*)0 != &g_131[1]), ((g_1091 = l_1090) != ((safe_sub_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u(p_11, (*g_132))), p_12)) , l_1090)))), p_10) != 7UL) , g_370)) , (*l_1070)))) && (-6L))), 0)), p_11)) , g_494[1][0][0]) < 0UL) , 0x127EL)) != l_1096), 12)), l_1096)) || 0L)))
            {
                int l_1104 = 0x86E524F7L;
                l_1105[0] |= (safe_rshift_func_uint16_t_u_s(func_19(((l_1097 = (safe_div_func_uint32_t_u_u(((*l_1069) = (p_11 | (p_10 <= (safe_div_func_uint16_t_u_u((*l_1070), (**g_467)))))), l_1096))) | p_12), (((g_392[2] < (((p_11 == p_14) >= p_14) , 0xEA8AL)) == (-1L)) , 249UL), l_1104, p_13, g_133), 7));
                if (((p_12 , ((((l_1097 = (safe_mod_func_uint16_t_u_u((p_14 , (func_28((func_46((l_1108 = (0x53L | p_14)), (safe_sub_func_int16_t_s_s((0x1DF9ADF3L & (((*g_132) , (func_26(l_1097) || (safe_sub_func_int8_t_s_s((+(l_1105[1] | 0UL)), 249UL)))) , l_1097)), 0UL))) , p_12)) == p_12)), 4L))) && p_13) == 0x7FBF2AA9L) || (*l_1070))) > l_1113))
                {
                    int l_1117 = 0x2B979813L;
                    for (g_318 = 9; (g_318 != 10); g_318++)
                    {
                        int l_1116[3];
                        int i;
                        for (i = 0; i < 3; i++)
                            l_1116[i] = 0x51184C3AL;
                        l_1097 = p_13;
                        l_1117 = (p_13 , l_1116[0]);
                        if (l_1105[0])
                            continue;
                    }
                }
                else
                {
                    unsigned short l_1119 = 0xA337L;
                    unsigned char ***l_1140 = (void*)0;
                    l_1119 = (g_1118 != (void*)0);
                    for (l_1097 = 24; (l_1097 < 27); l_1097 = safe_add_func_uint16_t_u_u(l_1097, 6))
                    {
                        unsigned short l_1137 = 0x70E8L;
                        int *l_1138[10][1] = {{&l_1097},{(void*)0},{&l_1097},{(void*)0},{&l_1097},{(void*)0},{&l_1097},{(void*)0},{&l_1097},{(void*)0}};
                        unsigned short *l_1139 = &g_285;
                        int i, j;
                        l_1141 = ((safe_add_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u(((*l_1069) = (safe_lshift_func_uint8_t_u_u(((((**g_467) = (safe_lshift_func_uint8_t_u_u(p_10, p_11))) , &g_720) != l_1140), 6))), 4294967295UL)), 0xDBL)) < p_13);
                        if (p_10)
                            break;
                    }
                    (*l_1070) = l_1142;
                    for (p_11 = 7; (p_11 >= 0); p_11 -= 1)
                    {
                        int i;
                        (*l_1070) |= g_375[p_11];
                    }
                }
                for (p_11 = 0; (p_11 <= 6); p_11 += 1)
                {
                    int i;
                    return g_392[p_11];
                }
            }
            else
            {
                int *l_1143 = &l_1060;
                int ****l_1154 = &g_880[4][2];
                unsigned ***l_1221 = (void*)0;
                l_1144 = l_1143;
                for (p_10 = 0; (p_10 < 7); ++p_10)
                {
                    char l_1152[4];
                    int l_1182 = 0x1E0A0C3FL;
                    int *l_1183[9];
                    int l_1211 = (-3L);
                    int l_1212 = 9L;
                    int i;
                    for (i = 0; i < 4; i++)
                        l_1152[i] = 1L;
                    for (i = 0; i < 9; i++)
                        l_1183[i] = &l_1182;
                }
                for (g_255 = 29; (g_255 < 24); g_255 = safe_sub_func_int32_t_s_s(g_255, 8))
                {
                    int *l_1226 = &l_1060;
                    char ***l_1227[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                    int i;
                    (*l_1143) |= ((**g_881) ^= (*g_424));
                    (*g_107) &= (safe_unary_minus_func_int8_t_s((p_12 , (g_153[6][6][1] = (*l_1143)))));
                    if (((+p_12) >= ((((*l_1226) = ((*g_107) = (((&l_1130 == ((l_1225 == (void*)0) , l_1226)) , &l_848[0][9]) == &l_848[0][8]))) , (p_11 | (l_1229[5] ^= ((l_1228 = (void*)0) == &l_928[7])))) , 0x5161L)))
                    {
                        char **l_1230 = &l_928[1];
                        int l_1232 = (-7L);
                        l_1231 = l_1230;
                        (*l_1144) = p_10;
                        if (l_1232)
                            break;
                        l_1230 = l_1228;
                    }
                    else
                    {
                        return (*g_107);
                    }
                }
                (*g_876) = l_1233;
            }
            for (g_1007 = 3; (g_1007 <= 8); g_1007 += 1)
            {
                int i;
                l_1229[(g_1007 + 1)] = ((((*g_1029) ^= l_1229[g_1007]) , 0xF8L) || ((void*)0 != &l_1228));
                (*l_1070) = 0x2291F692L;
                return l_1229[(g_1007 + 1)];
            }
        }
        else
        {
            int l_1249 = (-1L);
            int *l_1251 = &l_1248;
            unsigned char l_1267 = 0xD5L;
            unsigned short *l_1272[7] = {(void*)0,(void*)0,&l_1067[0],(void*)0,(void*)0,&l_1067[0],(void*)0};
            unsigned short **l_1271[4][2] = {{&l_1272[2],&l_1272[2]},{&l_1272[2],&l_1272[2]},{&l_1272[2],&l_1272[2]},{&l_1272[2],&l_1272[2]}};
            unsigned **l_1273 = &l_1069;
            int i, j;
            if ((&l_1144 == &l_1149[4]))
            {
                char l_1240 = 0x4CL;
                for (l_1060 = 12; (l_1060 != (-14)); --l_1060)
                {
                    (*l_1233) &= (((*g_1029) = 0L) , ((**g_467) || p_13));
                    for (g_884 = 23; (g_884 != (-8)); --g_884)
                    {
                        return p_14;
                    }
                    l_1249 &= ((*l_1233) = (((func_15((safe_mod_func_uint16_t_u_u((((*g_1028) == ((*g_468) , l_1149[2])) == p_13), l_1240)), ((((safe_lshift_func_int8_t_s_s(p_11, (((p_14 , l_1243) != ((safe_lshift_func_int16_t_s_u((safe_div_func_uint8_t_u_u((p_14 && 0xCD680428L), l_1240)), p_14)) , (void*)0)) == l_1240))) , (-7L)) < 0xDAAAL) && g_255)) <= l_1248) || (*g_132)) ^ 0x2EL));
                }
                (*l_1144) |= p_10;
            }
            else
            {
                int *l_1252 = (void*)0;
                int l_1260 = 0xBF8C8421L;
                if ((&g_884 != ((*l_1231) = (void*)0)))
                {
                    int l_1250 = (-1L);
                    return l_1250;
                }
                else
                {
                    l_1251 = &l_1130;
                }
                for (p_11 = 3; (p_11 >= 1); p_11 -= 1)
                {
                    unsigned l_1253 = 4294967295UL;
                    int l_1261 = 0x1F9339B6L;
                    for (g_884 = 0; (g_884 <= 4); g_884 += 1)
                    {
                        int i, j;
                        (*g_876) = l_1252;
                        (*l_1144) ^= l_1253;
                    }
                    for (g_103 = 0; (g_103 <= 4); g_103 += 1)
                    {
                        (*l_1251) |= (*l_1233);
                    }
                    l_1260 &= func_19(((void*)0 == l_1251), (p_10 , 1UL), p_10, (safe_div_func_uint32_t_u_u((*l_1251), ((safe_rshift_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u((((((*g_1029) = 0x28CEFFCFL) , (l_1252 != l_1149[4])) >= p_13) | (**g_467)), 6)), 4)) | l_1253))), l_1253);
                    for (l_1130 = 0; (l_1130 <= 4); l_1130 += 1)
                    {
                        int l_1262 = 0x5289D87BL;
                        l_1261 = 1L;
                        return l_1262;
                    }
                }
                (*g_876) = (***g_874);
                if ((safe_sub_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_s((!248UL), p_11)), (((l_1267 || l_1268) && (safe_add_func_int16_t_s_s((l_1271[3][0] != &l_1272[2]), 0xA6CBL))) , ((g_104 , ((*l_786) = l_1273)) == (void*)0)))))
                {
                    int l_1274[10][9][2] = {{{(-1L),6L},{0x9783600DL,1L},{0x33F1E04BL,(-1L)},{(-1L),0L},{(-3L),0x46DD48C3L},{0xC8AF23E6L,0x7529BE2AL},{0x81AC9C56L,(-1L)},{0x46DD48C3L,(-1L)},{0x517DA0D0L,0xE39B228CL}},{{0L,0L},{3L,9L},{0x85BD2D5BL,0x85BD2D5BL},{(-10L),0xA9392143L},{0x16B91327L,0xC8AF23E6L},{0xA0C7878AL,(-1L)},{0x3D9E4686L,0xA0C7878AL},{5L,(-1L)},{5L,0xA0C7878AL}},{{0x3D9E4686L,(-1L)},{0xA0C7878AL,0xC8AF23E6L},{0x16B91327L,0xC8AF23E6L},{0x517DA0D0L,(-1L)},{(-1L),0x90118842L},{(-1L),1L},{1L,(-1L)},{0xA0C7878AL,(-10L)},{(-1L),1L}},{{(-1L),0xA8E11E6DL},{(-4L),(-1L)},{0x46DD48C3L,1L},{0x2A16289AL,0x56017489L},{0xC487D060L,(-1L)},{0L,(-10L)},{(-10L),0x81AC9C56L},{0x9783600DL,(-1L)},{1L,(-1L)}},{{0x565BFF06L,(-1L)},{5L,0xC487D060L},{3L,0xE39B228CL},{(-1L),0L},{0xC8AF23E6L,(-1L)},{(-1L),0x33F1E04BL},{1L,6L},{(-1L),0x565BFF06L},{9L,0L}},{{(-3L),0x517DA0D0L},{0xD5C55204L,0x517DA0D0L},{(-3L),0L},{9L,0x565BFF06L},{(-1L),6L},{1L,0x33F1E04BL},{(-1L),(-1L)},{0xC8AF23E6L,0L},{(-1L),0xE39B228CL}},{{3L,0xC487D060L},{5L,(-1L)},{0x565BFF06L,(-1L)},{1L,(-1L)},{0x9783600DL,0x81AC9C56L},{(-10L),(-10L)},{0L,(-1L)},{0xC487D060L,0x56017489L},{0x2A16289AL,1L}},{{0x46DD48C3L,(-1L)},{(-4L),0xA8E11E6DL},{(-1L),1L},{(-1L),(-10L)},{0xA0C7878AL,(-1L)},{8L,0L},{(-1L),(-1L)},{(-4L),(-4L)},{0x00EB299BL,(-1L)}},{{0xC8AF23E6L,0x629B769FL},{0x7529BE2AL,0x27B580C4L},{0x9783600DL,0x7529BE2AL},{0x3D9E4686L,(-4L)},{0x3D9E4686L,0x7529BE2AL},{0x9783600DL,0x27B580C4L},{0x7529BE2AL,0x629B769FL},{0xC8AF23E6L,(-1L)},{0x00EB299BL,(-4L)}},{{(-4L),(-1L)},{(-1L),0L},{8L,0x16B91327L},{0L,(-10L)},{0x33F1E04BL,0x12ACA9C1L},{1L,0xE39B228CL},{0x629B769FL,0x33F1E04BL},{1L,8L},{(-4L),0xC487D060L}}};
                    unsigned l_1275 = 0x0E3390DAL;
                    int *l_1276[6][6][1] = {{{&g_287},{&g_287},{&g_1007},{&l_1229[5]},{&l_1260},{&g_264}},{{&g_67},{&g_264},{&l_1260},{&l_1229[5]},{&g_1007},{&g_287}},{{&g_287},{&g_1007},{&l_1229[5]},{&l_1260},{&g_264},{&g_67}},{{&g_264},{&l_1260},{&l_1229[5]},{&g_1007},{&g_287},{&g_287}},{{&g_1007},{&l_1229[5]},{&l_1260},{&g_264},{&g_67},{&g_264}},{{&l_1260},{&l_1229[5]},{&g_1007},{&g_287},{&g_287},{&g_1007}}};
                    int i, j, k;
                    if (((*l_1233) = p_13))
                    {
                        (*l_1251) = p_11;
                        (*l_1251) &= p_14;
                        l_1274[5][2][0] &= ((*l_1233) = p_14);
                    }
                    else
                    {
                        l_1275 = 0xD8FC7782L;
                        (*l_1233) = l_1275;
                        l_1252 = l_1276[2][3][0];
                    }
                }
                else
                {
                    for (g_121 = 0; (g_121 != 7); g_121 = safe_add_func_int8_t_s_s(g_121, 6))
                    {
                        (*l_1233) |= ((*l_1144) |= (safe_rshift_func_int8_t_s_s((*l_1251), 2)));
                    }
                }
            }
        }
        (*l_1144) = (!(safe_rshift_func_uint16_t_u_u(p_13, 10)));
        (*l_1233) |= p_12;
        (*g_876) = &l_1130;
    }
    else
    {
        char l_1310 = 1L;
        l_1284 = l_1283[5];
        (*l_1284) |= (safe_rshift_func_uint8_t_u_s(((*g_602) = p_14), 6));
        for (g_121 = 0; (g_121 >= 47); g_121++)
        {
            int **l_1291 = (void*)0;
            for (g_884 = 24; (g_884 < (-3)); --g_884)
            {
                short *l_1294[5][10] = {{&g_375[2],&g_375[2],&g_375[2],&g_375[2],&g_375[2],&g_375[2],&g_375[2],&g_375[2],&g_375[2],&g_375[2]},{&g_375[2],&g_375[2],&g_375[2],&g_375[2],&g_375[2],&g_375[2],&g_375[2],&g_375[2],&g_375[2],&g_375[2]},{&g_375[2],&g_375[2],&g_375[2],&g_375[2],&g_375[2],&g_375[2],&g_375[2],&g_375[2],&g_375[2],&g_375[2]},{&g_375[2],&g_375[2],&g_375[2],&g_375[2],&g_375[2],&g_375[2],&g_375[2],&g_375[2],&g_375[2],&g_375[2]},{&g_375[2],&g_375[2],&g_375[2],&g_375[2],&g_375[2],&g_375[2],&g_375[2],&g_375[2],&g_375[2],&g_375[2]}};
                int *l_1296 = (void*)0;
                int i, j;
                (*l_1284) ^= ((void*)0 != l_1291);
                for (l_1026 = 0; (l_1026 <= 3); l_1026 += 1)
                {
                    int i, j;
                    g_583[(l_1026 + 1)][(l_1026 + 1)] = (***g_874);
                }
                for (g_1075 = 0; (g_1075 != (-3)); g_1075 = safe_sub_func_uint32_t_u_u(g_1075, 2))
                {
                    short *l_1295 = &l_1161;
                    int l_1314[7][5] = {{(-2L),0x21B904C3L,(-2L),(-2L),0x21B904C3L},{0x21B904C3L,(-2L),(-2L),0x21B904C3L,(-2L)},{0x21B904C3L,0x21B904C3L,0x693C3A1DL,0x21B904C3L,0x21B904C3L},{(-2L),0x21B904C3L,(-2L),(-2L),0x21B904C3L},{0x21B904C3L,(-2L),(-2L),0x21B904C3L,(-2L)},{0x21B904C3L,0x21B904C3L,0x693C3A1DL,0x21B904C3L,0x21B904C3L},{(-2L),0x21B904C3L,(-2L),(-2L),0x21B904C3L}};
                    int l_1315[2][9];
                    int i, j;
                    for (i = 0; i < 2; i++)
                    {
                        for (j = 0; j < 9; j++)
                            l_1315[i][j] = (-1L);
                    }
                    if ((l_1294[2][7] == l_1295))
                    {
                        (*g_876) = l_1296;
                    }
                    else
                    {
                        char ***l_1302 = &g_664;
                        char ****l_1301 = &l_1302;
                        int l_1313 = (-2L);
                        l_1315[0][5] |= (((safe_rshift_func_int8_t_s_u(g_392[2], p_10)) || ((l_1313 > l_1314[1][1]) < 3L)) , l_1310);
                        if (p_12)
                            continue;
                    }
                }
            }
        }
    }
    (*l_1284) ^= ((*g_468) >= ((*l_1326) = ((((&g_1029 == l_1031) , l_1318) == ((*l_1322) = g_1320)) , (0xF74EL != ((safe_unary_minus_func_uint32_t_u(((&g_653 != ((*l_1324) = &g_653)) , (p_10 >= 65535UL)))) && 0x8AL)))));
    return (*g_424);
}







static char func_15(unsigned char p_16, unsigned char p_17)
{
    unsigned short l_679 = 0x85AEL;
    unsigned char *l_684 = &g_392[2];
    int *l_689 = &g_103;
    int l_690[4][4][8] = {{{0xF352EAFDL,0xA75351DDL,(-5L),0xEDF25D9DL,0xF352EAFDL,0xEDF25D9DL,(-5L),0xA75351DDL},{0xF352EAFDL,0xEDF25D9DL,(-5L),0xA75351DDL,0xF352EAFDL,0xA75351DDL,(-5L),0xEDF25D9DL},{0xF352EAFDL,0xA75351DDL,(-5L),0xEDF25D9DL,0xF352EAFDL,0xEDF25D9DL,(-5L),0xA75351DDL},{0xF352EAFDL,0xEDF25D9DL,(-5L),0xA75351DDL,0xF352EAFDL,0xA75351DDL,(-5L),0xEDF25D9DL}},{{0xF352EAFDL,0xA75351DDL,(-5L),0xEDF25D9DL,0xF352EAFDL,0xEDF25D9DL,(-5L),0xA75351DDL},{0xF352EAFDL,0xEDF25D9DL,(-5L),0xA75351DDL,0xF352EAFDL,0xA75351DDL,(-5L),0xEDF25D9DL},{0xF352EAFDL,0xA75351DDL,(-5L),0xEDF25D9DL,0xF352EAFDL,0xEDF25D9DL,(-5L),0xA75351DDL},{0xF352EAFDL,0xEDF25D9DL,(-5L),0xA75351DDL,0xF352EAFDL,0xA75351DDL,(-5L),0xEDF25D9DL}},{{0xF352EAFDL,0xA75351DDL,(-5L),0xEDF25D9DL,0xF352EAFDL,0xEDF25D9DL,(-5L),0xA75351DDL},{0xF352EAFDL,0xEDF25D9DL,(-5L),0xA75351DDL,0xF352EAFDL,0xA75351DDL,(-5L),0xEDF25D9DL},{0xF352EAFDL,0xA75351DDL,(-5L),0xEDF25D9DL,0xF352EAFDL,0xEDF25D9DL,(-5L),0xA75351DDL},{0xF352EAFDL,0xEDF25D9DL,(-5L),0xA75351DDL,0xF352EAFDL,0xA75351DDL,(-5L),0xEDF25D9DL}},{{0xF352EAFDL,0xA75351DDL,(-5L),0xEDF25D9DL,0xF352EAFDL,0xEDF25D9DL,(-5L),0xA75351DDL},{0xF352EAFDL,0xEDF25D9DL,(-5L),0xA75351DDL,0xF352EAFDL,0xA75351DDL,(-5L),0xEDF25D9DL},{0xF352EAFDL,0xA75351DDL,(-5L),0xEDF25D9DL,0xF352EAFDL,0xEDF25D9DL,(-5L),0xA75351DDL},{0xF352EAFDL,0xEDF25D9DL,(-5L),0xA75351DDL,0xF352EAFDL,0xA75351DDL,(-5L),0xEDF25D9DL}}};
    int *l_691 = &g_67;
    int l_694 = 0x7E543094L;
    int i, j, k;
    (*l_691) ^= ((safe_div_func_int32_t_s_s(((safe_rshift_func_uint8_t_u_s(((!((*l_689) = (l_679 && (**g_467)))) , (*g_602)), l_679)) < 0x2A92L), p_16)) , l_690[1][1][5]);
    if (p_16)
    {
        char l_699[7] = {0x8BL,0x8BL,0x8BL,0x8BL,0x8BL,0x8BL,0x8BL};
        int i;
        for (g_104 = 0; (g_104 < (-3)); g_104--)
        {
            if (l_699[5])
                break;
        }
    }
    else
    {
        (*l_691) |= p_17;
    }
    return (*l_691);
}







static unsigned char func_19(char p_20, unsigned char p_21, unsigned char p_22, short p_23, char p_24)
{
    unsigned char l_590[4][1][5] = {{{0x46L,0x46L,0x46L,0x46L,0x46L}},{{1UL,0xB5L,1UL,0xB5L,1UL}},{{0x46L,0x46L,0x46L,0x46L,0x46L}},{{1UL,0xB5L,1UL,0xB5L,1UL}}};
    int *l_591 = (void*)0;
    int *l_592 = &g_68;
    unsigned *l_595 = &g_65[0][0][1];
    char *l_596 = &g_255;
    short l_613 = 0x2E29L;
    int **l_619[5][10] = {{(void*)0,(void*)0,&g_107,(void*)0,(void*)0,&g_107,(void*)0,(void*)0,&g_107,(void*)0},{(void*)0,&g_107,&g_107,(void*)0,&g_107,&g_107,(void*)0,&g_107,&g_107,(void*)0},{&g_107,(void*)0,&g_107,&g_107,(void*)0,&g_107,&g_107,(void*)0,&g_107,&g_107},{(void*)0,(void*)0,&g_107,(void*)0,(void*)0,&g_107,(void*)0,(void*)0,&g_107,(void*)0},{(void*)0,&g_107,&g_107,(void*)0,&g_107,&g_107,(void*)0,&g_107,&g_107,(void*)0}};
    int ***l_618[7][2][5] = {{{&l_619[4][7],&l_619[4][7],&l_619[4][7],&l_619[4][7],&l_619[4][7]},{(void*)0,&l_619[0][1],&l_619[0][1],(void*)0,&l_619[0][1]}},{{&l_619[4][7],&l_619[4][7],&l_619[4][7],&l_619[4][7],&l_619[4][7]},{&l_619[0][1],(void*)0,&l_619[0][1],&l_619[0][1],(void*)0}},{{&l_619[4][7],&l_619[4][7],&l_619[4][7],&l_619[4][7],&l_619[4][7]},{(void*)0,(void*)0,&l_619[4][9],(void*)0,(void*)0}},{{&l_619[4][7],&l_619[4][7],&l_619[4][7],&l_619[4][7],&l_619[4][7]},{(void*)0,&l_619[0][1],&l_619[0][1],(void*)0,&l_619[0][1]}},{{&l_619[4][7],&l_619[4][7],&l_619[4][7],&l_619[4][7],&l_619[4][7]},{&l_619[0][1],(void*)0,&l_619[0][1],&l_619[0][1],(void*)0}},{{&l_619[4][7],&l_619[4][7],&l_619[4][7],&l_619[4][7],&l_619[4][7]},{(void*)0,(void*)0,&l_619[4][9],(void*)0,(void*)0}},{{&l_619[4][7],&l_619[4][7],&l_619[4][7],&l_619[4][7],&l_619[4][7]},{(void*)0,&l_619[0][1],&l_619[0][1],(void*)0,&l_619[0][1]}}};
    int ****l_617 = &l_618[2][1][1];
    int i, j, k;
    if (((((*l_596) = (safe_sub_func_uint16_t_u_u(((~(safe_add_func_uint32_t_u_u((g_375[2] || p_23), p_23))) && 0x8CL), (*l_592)))) | (*l_592)) <= (*l_592)))
    {
        (*l_592) = 0x1E2AFF05L;
    }
    else
    {
        return g_3;
    }
    for (g_318 = 0; (g_318 != 6); ++g_318)
    {
        unsigned char *l_604 = &g_340[0];
        unsigned char **l_603 = &l_604;
        int *l_605[9][8] = {{&g_287,&g_67,(void*)0,&g_287,&g_67,&g_264,(void*)0,&g_264},{&g_67,&g_68,&g_264,&g_68,&g_67,&g_104,&g_104,(void*)0},{&g_264,&g_264,(void*)0,&g_67,&g_585,&g_287,&g_287,&g_68},{&g_287,&g_104,(void*)0,&g_67,&g_67,(void*)0,&g_104,&g_287},{&g_585,&g_287,&g_264,(void*)0,(void*)0,&g_104,&g_67,&g_104},{&g_287,(void*)0,&g_264,&g_585,&g_67,&g_104,&g_67,&g_585},{&g_68,&g_264,&g_68,&g_67,&g_104,&g_104,(void*)0,(void*)0},{&g_585,&g_68,&g_67,&g_67,&g_287,&g_585,&g_104,&g_104},{&g_585,&g_104,&g_287,&g_287,&g_104,&g_585,&g_264,&g_104}};
        int i, j;
        g_287 ^= (((p_21 & ((~g_68) , (safe_sub_func_uint16_t_u_u((g_601 == ((p_21 , p_23) , l_603)), (*g_468))))) >= ((0x3707DF7DL & p_24) | g_67)) && (-1L));
    }
    for (p_21 = 0; (p_21 <= 6); p_21 += 1)
    {
        int **l_609 = (void*)0;
        int ***l_608 = &l_609;
        char *l_624 = (void*)0;
        unsigned short l_625 = 4UL;
        int l_669 = 0x2C30C919L;
        for (g_67 = 0; (g_67 <= 6); g_67 += 1)
        {
            int ****l_610 = &l_608;
            int *l_612[3];
            unsigned l_647 = 4294967287UL;
            int i;
            for (i = 0; i < 3; i++)
                l_612[i] = &g_318;
            if ((l_613 ^= (safe_rshift_func_uint8_t_u_u((((((g_392[g_67] = (g_340[3] , ((((*l_610) = l_608) == &l_609) >= ((*g_468) ^= ((*g_132) < ((safe_unary_minus_func_uint16_t_u((p_20 >= p_23))) && (((g_103 = g_103) , p_21) > (((g_264 = ((*l_592) = p_20)) , 4294967294UL) >= g_287)))))))) , (void*)0) == (void*)0) , p_21) > p_23), p_21))))
            {
                return (*g_602);
            }
            else
            {
                int *l_614 = (void*)0;
                unsigned l_626 = 4294967295UL;
                l_614 = l_591;
                l_626 = ((g_5 == g_6) , (safe_rshift_func_uint16_t_u_u((((void*)0 == l_617) , (safe_add_func_int8_t_s_s(((safe_rshift_func_int8_t_s_u(p_24, ((((l_624 != &p_24) || p_23) , (((*g_602) , p_20) , 8UL)) && 8L))) | g_370), l_625))), 0)));
                for (p_24 = 0; (p_24 < 19); p_24++)
                {
                    unsigned *l_640[4][8][1] = {{{&g_641[4][6][0]},{&g_641[4][4][0]},{&g_641[3][3][0]},{&g_641[0][7][0]},{&g_641[0][7][0]},{&g_641[3][3][0]},{&g_641[4][4][0]},{&g_641[4][6][0]}},{{&g_641[1][7][0]},{&g_641[0][7][0]},{&g_641[4][6][0]},{&g_641[7][7][0]},{&g_641[4][6][0]},{&g_641[0][7][0]},{&g_641[1][7][0]},{&g_641[4][6][0]}},{{&g_641[4][4][0]},{&g_641[3][3][0]},{&g_641[0][7][0]},{&g_641[0][7][0]},{&g_641[3][3][0]},{&g_641[4][4][0]},{&g_641[4][6][0]},{&g_641[1][7][0]}},{{&g_641[0][7][0]},{&g_641[4][6][0]},{&g_641[7][7][0]},{&g_641[4][6][0]},{&g_641[0][7][0]},{&g_641[1][7][0]},{&g_641[4][6][0]},{&g_641[4][4][0]}}};
                    int l_642 = 1L;
                    unsigned short *l_648 = &g_339;
                    int i, j, k;
                    (*l_592) &= (((safe_add_func_uint16_t_u_u(((*l_648) = (safe_mod_func_int32_t_s_s((((p_24 , 0x19F41CA2L) && (safe_add_func_uint32_t_u_u((&g_131[0] == (void*)0), (safe_unary_minus_func_int16_t_s(((safe_add_func_int32_t_s_s(((safe_sub_func_uint8_t_u_u((0x0AB39452L | (l_642 = ((*l_595) = p_24))), (safe_div_func_int16_t_s_s((**g_467), (((safe_div_func_uint16_t_u_u(0x06E5L, g_67)) & l_647) || p_24))))) >= g_153[5][3][1]), 4294967287UL)) ^ 7L)))))) != 1L), 4L))), (**g_467))) || p_20) == 255UL);
                }
                (*l_592) |= (safe_sub_func_int16_t_s_s((safe_mod_func_int32_t_s_s(((p_20 >= (g_3 <= p_21)) >= g_104), 1UL)), g_653));
            }
            for (g_585 = 2; (g_585 >= 29); g_585++)
            {
                unsigned l_656 = 4294967286UL;
                l_656 ^= (g_375[7] , 1L);
                for (g_103 = 0; (g_103 <= (-28)); g_103--)
                {
                    int *l_659 = &g_68;
                    l_659 = l_659;
                    return (**g_601);
                }
            }
            l_669 = ((((safe_rshift_func_int16_t_s_s((safe_sub_func_uint32_t_u_u((p_21 , p_24), func_36(((func_36((((((g_664 = &l_624) == (void*)0) <= ((((safe_sub_func_uint8_t_u_u(p_21, ((*l_596) |= ((*g_132) || ((*l_592) = (safe_mod_func_int32_t_s_s((0xA2BCB943L == ((*l_595) &= p_23)), p_23))))))) & l_625) , p_21) > p_24)) < g_375[2]) != (*g_468)), p_20, p_24, p_20, g_287) <= g_392[2]) != p_21), p_22, g_318, g_103, g_653))), 1)) < (**g_467)) , p_22) ^ p_24);
        }
    }
    if ((safe_add_func_int16_t_s_s(p_20, (g_653 , p_24))))
    {
        unsigned l_672 = 0UL;
        (*l_592) = l_672;
        for (g_339 = 13; (g_339 >= 26); ++g_339)
        {
            (*l_592) = (~p_22);
        }
    }
    else
    {
        return (*g_602);
    }
    return (*l_592);
}







static int func_26(char p_27)
{
    int l_567 = 0x9D70D2EAL;
    unsigned *l_579 = &g_65[0][0][4];
    unsigned **l_578 = &l_579;
    unsigned ***l_577 = &l_578;
    int l_582 = (-1L);
    int *l_584 = &g_104;
    (*l_584) = l_567;
    return (*l_584);
}







static char func_28(unsigned p_29)
{
    char l_347 = 0x43L;
    char *l_350 = &g_255;
    int l_406 = (-6L);
    unsigned *l_456 = &g_65[3][4][7];
    unsigned **l_455[8];
    char l_526 = 0xC8L;
    int *l_562[9][3][5] = {{{&g_287,&g_68,(void*)0,(void*)0,&g_68},{&l_406,&g_6,&g_67,&g_6,&l_406},{&g_68,(void*)0,(void*)0,&g_68,&g_287}},{{&g_104,&g_6,&g_104,(void*)0,&g_104},{&g_68,&g_68,&g_287,(void*)0,&g_287},{&l_406,(void*)0,&g_67,(void*)0,&l_406}},{{&g_287,(void*)0,&g_287,&g_68,&g_68},{&g_104,(void*)0,&g_104,&g_6,&g_104},{&g_287,&g_68,(void*)0,(void*)0,&g_68}},{{&l_406,&g_6,&g_67,&g_6,&l_406},{&g_68,(void*)0,(void*)0,&g_68,&g_287},{&g_104,&g_6,&g_104,(void*)0,&g_104}},{{&g_68,&g_68,&g_287,(void*)0,&g_287},{&l_406,(void*)0,&g_67,(void*)0,&l_406},{&g_287,(void*)0,&g_287,&g_68,&g_68}},{{&g_104,(void*)0,&g_104,&g_6,&g_104},{&g_287,&g_68,(void*)0,(void*)0,&g_68},{&l_406,&g_6,&g_67,&g_6,&l_406}},{{&g_68,(void*)0,(void*)0,&g_68,&g_287},{&g_104,&g_6,&g_104,(void*)0,&g_104},{&g_68,&g_68,&g_287,(void*)0,&g_287}},{{&l_406,(void*)0,&g_67,(void*)0,&l_406},{&g_287,(void*)0,&g_287,&g_68,&g_68},{&g_104,(void*)0,&g_104,&g_6,&g_104}},{{&g_287,&g_68,(void*)0,(void*)0,&g_68},{&l_406,&g_6,&g_67,&g_6,&l_406},{&g_68,(void*)0,(void*)0,&g_68,&g_287}}};
    int i, j, k;
    for (i = 0; i < 8; i++)
        l_455[i] = &l_456;
    if (((safe_lshift_func_int16_t_s_s((safe_sub_func_uint8_t_u_u((func_36(l_347, l_347, (safe_lshift_func_int8_t_s_u(((*l_350) = l_347), func_36(l_347, (l_347 ^ (p_29 ^ (g_65[3][4][7] > g_4))), l_347, l_347, g_153[3][6][3]))), g_68, p_29) <= g_285), p_29)), l_347)) < 0x37L))
    {
        int l_355[10][9][2] = {{{0xFACD8785L,0xE36CFAE2L},{(-1L),0x4CAB0024L},{1L,0x7DE53096L},{0xFACD8785L,0xAD230726L},{0x7DE53096L,0xCBB72101L},{(-3L),(-3L)},{1L,0L},{0L,0xCBB72101L},{0x3FD5F553L,(-1L)}},{{0xFACD8785L,0x3FD5F553L},{0xAD230726L,0x4CAB0024L},{0xAD230726L,0x3FD5F553L},{0xFACD8785L,(-1L)},{0x3FD5F553L,0xCBB72101L},{0L,0L},{1L,(-3L)},{(-3L),0xCBB72101L},{0x7DE53096L,0xAD230726L}},{{0xFACD8785L,0x7DE53096L},{1L,0x4CAB0024L},{(-1L),0xE36CFAE2L},{0xFACD8785L,1L},{0xE36CFAE2L,0xCBB72101L},{0L,0L},{1L,0L},{0L,0xCBB72101L},{0xE36CFAE2L,1L}},{{0xFACD8785L,0xE36CFAE2L},{(-1L),0x4CAB0024L},{1L,0x7DE53096L},{0xFACD8785L,0xAD230726L},{0x7DE53096L,0xCBB72101L},{(-3L),(-3L)},{1L,0L},{0L,0xCBB72101L},{0x3FD5F553L,(-1L)}},{{0xFACD8785L,0x3FD5F553L},{0xAD230726L,0x4CAB0024L},{0xAD230726L,0x3FD5F553L},{0xFACD8785L,(-1L)},{0x3FD5F553L,0xCBB72101L},{0L,0L},{1L,0xAD230726L},{0xAD230726L,(-1L)},{0L,0xE36CFAE2L}},{{0xB817C311L,0L},{0x7DE53096L,0xFACD8785L},{0x3FD5F553L,0L},{0xB817C311L,0x7DE53096L},{0L,(-1L)},{1L,(-1L)},{1L,(-1L)},{1L,(-1L)},{0L,0x7DE53096L}},{{0xB817C311L,0L},{0x3FD5F553L,0xFACD8785L},{0x7DE53096L,0L},{0xB817C311L,0xE36CFAE2L},{0L,(-1L)},{0xAD230726L,0xAD230726L},{1L,1L},{(-1L),(-1L)},{(-3L),0x3FD5F553L}},{{0xB817C311L,(-3L)},{0xE36CFAE2L,0xFACD8785L},{0xE36CFAE2L,(-3L)},{0xB817C311L,0x3FD5F553L},{(-3L),(-1L)},{(-1L),1L},{1L,0xAD230726L},{0xAD230726L,(-1L)},{0L,0xE36CFAE2L}},{{0xB817C311L,0L},{0x7DE53096L,0xFACD8785L},{0x3FD5F553L,0L},{0xB817C311L,0x7DE53096L},{0L,(-1L)},{1L,(-1L)},{1L,(-1L)},{1L,(-1L)},{0L,0x7DE53096L}},{{0xB817C311L,0L},{0x3FD5F553L,0xFACD8785L},{0x7DE53096L,0L},{0xB817C311L,0xE36CFAE2L},{0L,(-1L)},{0xAD230726L,0xAD230726L},{1L,1L},{(-1L),(-1L)},{(-3L),1L}}};
        int l_371 = 0x6DCEA92AL;
        int i, j, k;
        for (g_121 = 0; (g_121 != 31); ++g_121)
        {
            unsigned l_353 = 0x8E878EF0L;
            int *l_354 = &g_104;
            (*l_354) = l_353;
            (*l_354) = p_29;
            if (l_355[6][3][1])
                break;
        }
        for (g_168 = 0; (g_168 <= 3); g_168 += 1)
        {
            int *l_358 = &g_68;
            int l_359[3];
            short *l_369 = &g_370;
            short *l_374 = &g_375[2];
            int i;
            for (i = 0; i < 3; i++)
                l_359[i] = 1L;
            (*g_373) = ((safe_div_func_int32_t_s_s((((((*l_358) = p_29) == l_355[6][3][1]) < (func_36(l_359[2], (g_4 , 0xB8L), ((safe_lshift_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u((safe_unary_minus_func_uint16_t_u(((l_371 = (safe_lshift_func_int16_t_s_s(p_29, ((*l_369) ^= (safe_lshift_func_uint8_t_u_s(g_340[3], 0)))))) ^ p_29))), p_29)), 6)) >= p_29), l_355[6][3][1], g_168) , l_347)) ^ l_347), l_347)) >= 0xF623L);
            (*l_358) = ((g_340[g_168] = (func_36(l_355[0][5][0], g_68, (~(((*l_374) = ((*l_369) = g_287)) , func_36((safe_lshift_func_uint8_t_u_u((safe_div_func_uint16_t_u_u(((+g_285) != (+(((((((g_153[7][5][1] && 1UL) == (safe_rshift_func_uint8_t_u_u(((4L < (*l_358)) <= (safe_add_func_int16_t_s_s(g_3, p_29))), (*l_358)))) != g_375[4]) <= 250UL) <= g_370) || g_6) | 0xE4L))), g_153[2][3][3])), p_29)), p_29, l_347, g_103, p_29))), g_168, g_65[2][3][1]) | 9UL)) > g_103);
            for (l_347 = 3; (l_347 >= 0); l_347 -= 1)
            {
                unsigned short *l_384 = &g_339;
                int l_418 = 0L;
                (*l_358) = (p_29 , (((*l_384) = p_29) && 0x5ECDL));
                for (g_318 = 0; (g_318 <= 4); g_318 += 1)
                {
                    unsigned char *l_389 = &g_340[g_168];
                    unsigned char *l_390 = &g_121;
                    unsigned char *l_391 = &g_392[2];
                    int i, j, k;
                    if ((g_65[(l_347 + 1)][(g_318 + 1)][(g_318 + 3)] & (safe_sub_func_int32_t_s_s(((*l_358) = (g_65[g_318][(g_318 + 1)][(l_347 + 1)] && ((*l_358) || (((*l_350) = ((&g_340[g_168] == (((safe_add_func_uint16_t_u_u(g_67, (0xB7L == (((*l_391) = ((*l_390) = ((*l_389) = g_339))) <= ((safe_lshift_func_int16_t_s_u(func_36(p_29, g_65[(l_347 + 1)][(g_318 + 1)][(g_318 + 3)], p_29, p_29, g_65[g_318][(g_318 + 1)][(l_347 + 1)]), g_67)) , 0xF3L))))) != p_29) , (void*)0)) == (*l_358))) > l_347)))), 9UL))))
                    {
                        unsigned char l_401 = 1UL;
                        unsigned short *l_409 = &g_74;
                        l_406 ^= (1UL >= (((safe_rshift_func_int8_t_s_s(g_65[(l_347 + 1)][(g_318 + 1)][(g_318 + 3)], 4)) <= (safe_mod_func_int16_t_s_s((safe_mod_func_uint8_t_u_u((((((*l_358) , &g_264) == (void*)0) , (l_401 ^ ((-1L) != ((*l_374) = ((safe_add_func_uint16_t_u_u(0x613AL, (safe_add_func_uint32_t_u_u((((+((&g_132 != &g_132) != 4L)) >= 0x5C1BFA23L) <= (*l_358)), g_65[g_318][(g_318 + 1)][(l_347 + 1)])))) ^ 0xB2L))))) ^ g_65[g_318][(g_318 + 1)][(l_347 + 1)]), 2UL)), g_103))) , g_168));
                        (*l_358) &= (((safe_mod_func_int16_t_s_s((l_355[3][4][0] < (1L <= g_74)), g_2)) , l_409) == (void*)0);
                        l_406 ^= (-8L);
                    }
                    else
                    {
                        volatile int **l_410 = (void*)0;
                        volatile int *l_413[10] = {(void*)0,&g_3,(void*)0,&g_3,(void*)0,&g_3,(void*)0,&g_3,(void*)0,&g_3};
                        volatile int **l_412 = &l_413[1];
                        int *l_416 = &l_359[0];
                        int i;
                        (*l_412) = &g_4;
                        (*l_416) ^= (((((p_29 , 1UL) >= g_65[(l_347 + 1)][(g_318 + 1)][(g_318 + 3)]) | (safe_add_func_int16_t_s_s(p_29, ((g_287 <= p_29) <= 5L)))) , l_416) == (void*)0);
                    }
                }
                (*l_358) = (*g_373);
                for (g_67 = 4; (g_67 >= 0); g_67 -= 1)
                {
                    int l_417[8][10][3] = {{{0L,0x647906F7L,0x23FCD329L},{0x3ECCE02CL,0xAB0F51D3L,(-9L)},{0x9D188328L,0x9B478E61L,0x086D0986L},{6L,0x0C97CF48L,0xAEF64FB8L},{0xD17F0D24L,(-1L),0x9D188328L},{(-1L),0x450A1364L,0xD7370EEDL},{(-1L),0x2B628FBCL,0x91A4F8CAL},{0xF4098CC0L,0x444413DFL,0x349DF3ADL},{(-5L),(-1L),0xEA47B809L},{0x835B88F1L,3L,0x0C97CF48L}},{{0x903E4FB4L,8L,(-1L)},{0xD195F239L,1L,0xD195F239L},{0x0AA0883DL,(-4L),1L},{0xBB552103L,(-9L),0xF4098CC0L},{0x2B628FBCL,0x324052EEL,8L},{4L,0x4961C327L,(-1L)},{0x2B628FBCL,0x086D0986L,0xE6E49509L},{0xBB552103L,0x87AF1629L,0x4961C327L},{0x0AA0883DL,1L,0x0DB7DF2CL},{0xD195F239L,1L,0xAB0F51D3L}},{{0x903E4FB4L,0xCB26E2E9L,1L},{0x835B88F1L,0L,0x127EAECDL},{(-5L),1L,0xD17F0D24L},{0xF4098CC0L,0x3ECCE02CL,0xCF05EA7EL},{(-1L),0xBFA4073BL,0x324052EEL},{(-1L),0xBB552103L,0xBB552103L},{0xD17F0D24L,0x9D188328L,0x647906F7L},{6L,0x127EAECDL,9L},{0x2B628FBCL,0L,(-1L)},{(-1L),0x127EAECDL,0L}},{{0xC9D707F3L,0L,0x903E4FB4L},{1L,0x936421B8L,4L},{0xD17F0D24L,0x2B628FBCL,(-4L)},{0xC22B0966L,0x71FBF82BL,0x444413DFL},{0L,0x91A4F8CAL,1L},{0x5A77881DL,(-1L),0xD7370EEDL},{0xDCE7EF31L,0x324052EEL,0x0311C4F6L},{6L,0xC8DAD5CAL,0xF4098CC0L},{0x91A4F8CAL,1L,0L},{0xF4098CC0L,0xD7370EEDL,3L}},{{1L,1L,1L},{0x127EAECDL,0x42C28A44L,1L},{0xEA47B809L,7L,0x9B478E61L},{(-1L),0xD195F239L,(-1L)},{0x086D0986L,0xEA47B809L,0x9B478E61L},{3L,0xAEF64FB8L,1L},{(-4L),1L,1L},{0x936421B8L,6L,3L},{0L,0x0AA0883DL,0L},{0x444413DFL,0x450A1364L,0xF4098CC0L}},{{0x903E4FB4L,0xD6DFB4D5L,0x0311C4F6L},{0xE18B7BDBL,0x87AF1629L,0xD7370EEDL},{0x9D188328L,8L,1L},{(-9L),0L,0x444413DFL},{(-4L),0xDCE7EF31L,(-4L)},{0xC8DAD5CAL,1L,4L},{0x9A405CFCL,0xA6CB469FL,0x903E4FB4L},{0x450A1364L,1L,0L},{0x0DB7DF2CL,0x36280058L,(-1L)},{0x450A1364L,1L,1L}},{{0xBC364692L,(-5L),0xDCE7EF31L},{0x4961C327L,1L,0x42C28A44L},{(-4L),8L,0x2B628FBCL},{(-1L),(-9L),0x882098F8L},{1L,0x647906F7L,(-1L)},{0L,0x882098F8L,0x529E3807L},{0x23FCD329L,1L,0x9D188328L},{0xAB0F51D3L,0xD195F239L,3L},{0x91A4F8CAL,0xBC364692L,0xBC364692L},{0x529E3807L,4L,6L}},{{0L,(-1L),0x903E4FB4L},{4L,0x127EAECDL,0xCF05EA7EL},{1L,0x0311C4F6L,0x9A405CFCL},{0xC8DAD5CAL,0x127EAECDL,0x3ECCE02CL},{0x2B628FBCL,(-1L),(-1L)},{(-1L),4L,0x0C97CF48L},{0xCB26E2E9L,0xBC364692L,0x324052EEL},{0L,0xD195F239L,9L},{0x36280058L,1L,8L},{(-1L),0x882098F8L,0xAEF64FB8L}}};
                    int l_421 = 0xC694FDEBL;
                    int *l_423[4] = {&l_355[6][3][1],&l_355[6][3][1],&l_355[6][3][1],&l_355[6][3][1]};
                    int i, j, k;
                    l_418 &= l_417[3][5][2];
                    for (g_121 = 1; (g_121 <= 4); g_121 += 1)
                    {
                        return p_29;
                    }
                    l_406 &= (g_74 | (((*l_358) = l_421) >= p_29));
                }
            }
        }
        (*g_424) = p_29;
    }
    else
    {
        int *l_425[7][2];
        char *l_431 = &g_153[3][6][3];
        short *l_432 = &g_375[0];
        int l_433 = 0x7E6014EDL;
        unsigned **l_458 = &l_456;
        int **l_474[7][7][3] = {{{(void*)0,(void*)0,(void*)0},{&l_425[6][1],&g_107,&l_425[4][0]},{&l_425[4][1],&l_425[4][0],(void*)0},{&l_425[3][1],(void*)0,&l_425[4][0]},{(void*)0,&g_107,&l_425[4][0]},{&l_425[5][1],(void*)0,(void*)0},{(void*)0,&l_425[4][0],(void*)0}},{{(void*)0,&g_107,&l_425[4][0]},{&l_425[6][0],(void*)0,&l_425[4][0]},{(void*)0,&l_425[4][0],&l_425[4][0]},{&g_107,&l_425[4][0],&l_425[4][1]},{(void*)0,&l_425[5][1],(void*)0},{&l_425[2][1],&l_425[2][1],&g_107},{&l_425[4][0],&l_425[6][1],(void*)0}},{{&l_425[4][0],&g_107,&l_425[2][1]},{&g_107,&l_425[4][0],&l_425[4][0]},{&l_425[6][0],&l_425[4][0],&l_425[2][1]},{&g_107,(void*)0,(void*)0},{(void*)0,(void*)0,&g_107},{&l_425[3][1],&l_425[4][0],(void*)0},{&g_107,&l_425[4][0],&l_425[4][1]}},{{(void*)0,&g_107,&l_425[4][0]},{&l_425[4][0],&l_425[4][0],&l_425[6][0]},{(void*)0,&l_425[4][0],(void*)0},{&l_425[4][0],(void*)0,&l_425[4][0]},{&l_425[6][1],(void*)0,(void*)0},{&l_425[6][0],&l_425[4][0],(void*)0},{&l_425[6][1],&l_425[4][0],&l_425[6][1]}},{{&l_425[6][0],&g_107,&l_425[6][0]},{&l_425[6][1],&l_425[6][1],&l_425[4][0]},{&l_425[4][0],&l_425[2][1],&l_425[4][0]},{(void*)0,&l_425[5][1],&l_425[6][1]},{&l_425[4][0],&l_425[4][0],&l_425[4][0]},{(void*)0,(void*)0,&l_425[6][1]},{&g_107,&l_425[4][0],&l_425[4][0]}},{{&l_425[3][1],&l_425[6][1],&l_425[4][0]},{(void*)0,&g_107,&l_425[6][0]},{&g_107,&l_425[4][0],&l_425[6][1]},{&l_425[6][0],&l_425[4][0],(void*)0},{&g_107,&l_425[4][0],(void*)0},{&l_425[4][0],&g_107,&l_425[4][0]},{&l_425[4][0],&l_425[6][1],(void*)0}},{{(void*)0,&l_425[4][0],(void*)0},{&l_425[4][0],&l_425[4][0],(void*)0},{(void*)0,&g_107,&l_425[4][0]},{&l_425[4][0],(void*)0,&g_107},{(void*)0,(void*)0,&l_425[4][0]},{&l_425[4][0],&l_425[6][1],&l_425[4][0]},{&g_107,&l_425[6][0],(void*)0}}};
        int ***l_473 = &l_474[5][3][1];
        int l_485 = 0xC5094D8FL;
        int i, j, k;
        for (i = 0; i < 7; i++)
        {
            for (j = 0; j < 2; j++)
                l_425[i][j] = &g_287;
        }
        l_406 = (*g_373);
        l_406 = p_29;
        if ((((safe_lshift_func_int8_t_s_u(l_347, (0xF843L & ((*l_432) = (((((65535UL > (safe_unary_minus_func_uint32_t_u(l_347))) , ((((*l_431) = (((*l_350) = l_406) > p_29)) && g_74) , 1UL)) != 4294967295UL) , 1L) , g_340[3]))))) & l_433) || 0UL))
        {
            unsigned *l_440 = &g_65[3][4][7];
            int l_446 = 0x266BDEAAL;
            int **l_472[8];
            int ***l_471[4][3] = {{&l_472[7],&l_472[7],&l_472[7]},{(void*)0,&l_472[6],(void*)0},{&l_472[7],&l_472[7],&l_472[7]},{(void*)0,&l_472[6],(void*)0}};
            unsigned short l_495 = 65535UL;
            unsigned short l_509 = 0x6D9AL;
            int i, j;
            for (i = 0; i < 8; i++)
                l_472[i] = (void*)0;
            for (g_68 = 6; (g_68 >= 0); g_68 -= 1)
            {
                unsigned short *l_445 = &g_339;
                int l_447 = 0x86C42F34L;
                char l_461 = 0xE9L;
                int l_483[2][9][1] = {{{0x5524EA8EL},{0x4B96F055L},{0x5524EA8EL},{0x5524EA8EL},{0x4B96F055L},{0x5524EA8EL},{0x5524EA8EL},{0x4B96F055L},{0x5524EA8EL}},{{0x5524EA8EL},{0x4B96F055L},{0x5524EA8EL},{0x5524EA8EL},{0x4B96F055L},{0x5524EA8EL},{0x5524EA8EL},{0x4B96F055L},{0x5524EA8EL}}};
                short **l_510 = (void*)0;
                unsigned char l_525 = 249UL;
                int i, j, k;
                l_447 = (safe_lshift_func_uint16_t_u_s(((g_392[g_68] = (safe_rshift_func_int8_t_s_u((g_392[g_68] , ((*l_431) = ((safe_rshift_func_int16_t_s_u(g_104, p_29)) >= l_347))), 1))) > func_36((*g_373), (((void*)0 == l_440) < (p_29 < (safe_rshift_func_uint8_t_u_u(func_36((safe_rshift_func_int16_t_s_s(((*l_432) = (((*l_445) = (&g_339 != (void*)0)) && p_29)), g_104)), p_29, g_104, p_29, p_29), 6)))), p_29, g_264, l_446)), g_65[1][4][0]));
                if (l_446)
                {
                    int **l_449 = &g_107;
                    short **l_452 = &l_432;
                    unsigned ***l_457[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_457[i] = (void*)0;
                    (*l_449) = &l_446;
                    (*g_373) |= (((0x2BDB58E2L > l_347) > ((safe_rshift_func_int8_t_s_u((func_36(l_406, p_29, (((**l_449) = (((((((*l_452) = l_432) != (void*)0) != (safe_add_func_uint32_t_u_u(l_446, ((l_458 = l_455[5]) != (g_375[1] , &g_132))))) && 255UL) <= 0L) || 1UL)) >= (-1L)), p_29, p_29) || 0xE4L), 5)) <= p_29)) > 255UL);
                    (*g_373) = p_29;
                }
                else
                {
                    unsigned char l_459 = 0x3EL;
                    int l_460 = 2L;
                    if (l_459)
                        break;
                    for (g_104 = 0; (g_104 <= 6); g_104 += 1)
                    {
                        l_460 = ((p_29 , g_287) | 0x5AL);
                        l_446 = (*g_373);
                        l_406 ^= p_29;
                        if (l_461)
                            continue;
                    }
                    for (g_285 = 0; (g_285 <= 6); g_285 += 1)
                    {
                        int **l_462 = &g_107;
                        (*l_462) = &l_433;
                    }
                }
            }
            l_562[4][1][0] = &l_406;
        }
        else
        {
            (*g_469) = &l_406;
            return p_29;
        }
    }
    return p_29;
}







static char func_34(int p_35)
{
    int l_49 = 0L;
    unsigned short *l_283 = (void*)0;
    unsigned short *l_284 = &g_285;
    int *l_286 = &g_287;
    unsigned char l_332 = 0UL;
    if ((p_35 = func_36(((*l_286) |= (p_35 || (((((safe_mod_func_int16_t_s_s(((((safe_div_func_uint32_t_u_u(((~func_46((2L & 0x9552L), (l_49 , p_35))) <= (safe_mod_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u((((*l_284) = p_35) ^ g_6), 2)), g_121))), 0x65D71448L)) && l_49) & g_6) , g_74), p_35)) <= l_49) ^ 1L) | g_121) & 0x15E2C66DL))), p_35, g_121, p_35, p_35)))
    {
        char **l_299 = &g_192;
        int l_315 = 2L;
        int l_319 = 0x2702151DL;
        (*g_107) = (*g_107);
        for (g_103 = 0; (g_103 <= 15); g_103 = safe_add_func_int16_t_s_s(g_103, 8))
        {
            int **l_300 = &g_107;
            unsigned short **l_313 = (void*)0;
            unsigned short **l_314 = &l_284;
            int *l_316 = (void*)0;
            int *l_317[9][8] = {{&g_103,&g_318,&g_318,&g_103,(void*)0,(void*)0,&g_103,(void*)0},{&g_103,&g_103,(void*)0,&g_103,&g_103,(void*)0,&g_318,&g_318},{(void*)0,&g_103,(void*)0,(void*)0,&g_103,(void*)0,&g_318,&g_103},{&g_318,&g_318,(void*)0,&g_318,(void*)0,&g_318,&g_318,(void*)0},{&g_103,&g_103,(void*)0,&g_318,&g_318,(void*)0,&g_103,&g_103},{(void*)0,&g_318,&g_318,(void*)0,&g_318,&g_318,(void*)0,&g_103},{&g_103,(void*)0,(void*)0,&g_103,&g_318,&g_318,&g_103,(void*)0},{&g_103,&g_103,(void*)0,&g_318,&g_103,(void*)0,&g_103,&g_318},{(void*)0,&g_318,(void*)0,&g_318,&g_318,(void*)0,(void*)0,&g_318}};
            int *l_335 = &l_319;
            int *l_336 = &l_49;
            unsigned *l_337 = &g_65[1][1][6];
            unsigned short *l_338 = &g_339;
            int i, j;
            for (g_287 = 0; (g_287 != 26); g_287++)
            {
                for (g_68 = 0; (g_68 >= (-23)); --g_68)
                {
                    for (g_104 = 0; (g_104 >= (-19)); g_104 = safe_sub_func_uint8_t_u_u(g_104, 8))
                    {
                        int **l_296 = &g_107;
                        (*l_296) = &p_35;
                        return (*l_286);
                    }
                }
            }
            l_319 |= ((safe_lshift_func_int8_t_s_s((((l_299 == (void*)0) || ((l_300 != &g_107) != (safe_rshift_func_int8_t_s_s(func_36((0x78L || (*l_286)), (65535UL > (safe_add_func_int16_t_s_s((safe_sub_func_int32_t_s_s((((**l_300) = (func_36((safe_lshift_func_int8_t_s_u((safe_mod_func_uint16_t_u_u((g_68 && (((g_168 ^= ((func_36((safe_rshift_func_uint8_t_u_u((((*l_314) = &g_285) == (void*)0), 2)), l_315, g_255, g_67, g_68) , 1L) | p_35)) & g_255) != g_285)), (**l_300))), g_65[3][4][7])), (**l_300), p_35, (*l_286), g_6) >= 4294967293UL)) , p_35), g_255)), p_35))), l_315, (*l_286), p_35), p_35)))) != 0x3CL), 6)) , (*l_286));
            for (l_315 = 4; (l_315 >= 0); l_315 -= 1)
            {
                return (**l_300);
            }
            p_35 = (safe_rshift_func_uint16_t_u_u(((((safe_add_func_int32_t_s_s((*g_107), ((p_35 < ((safe_lshift_func_uint8_t_u_s(0x37L, 4)) , (g_168 | (g_340[3] = ((*l_338) = (g_74 = ((((*l_337) = (((*l_336) |= ((g_255 , (safe_add_func_uint8_t_u_u(((safe_add_func_int32_t_s_s(((*l_335) = (((*l_284) |= ((*l_286) = (safe_rshift_func_uint8_t_u_u(((l_332 >= (((*l_286) || ((1UL ^ ((safe_lshift_func_uint8_t_u_s((p_35 >= p_35), 1)) ^ p_35)) != g_74)) , p_35)) > 1UL), 4)))) && p_35)), 0x6219D471L)) | l_315), g_103))) >= (-6L))) <= 0x7CA8C57EL)) && 0UL) , p_35))))))) < 0UL))) & p_35) & p_35) || (*l_335)), 5));
        }
    }
    else
    {
        int **l_341[7][9][4] = {{{&l_286,&l_286,&l_286,&l_286},{&l_286,&l_286,&l_286,(void*)0},{&l_286,&l_286,&l_286,&l_286},{&l_286,&l_286,&g_107,&l_286},{&l_286,&l_286,&g_107,(void*)0},{&l_286,&l_286,&l_286,&l_286},{&l_286,&l_286,&g_107,&l_286},{&l_286,&l_286,&g_107,(void*)0},{&l_286,&l_286,&l_286,&l_286}},{{&l_286,&l_286,&l_286,&l_286},{&l_286,&l_286,&l_286,(void*)0},{&l_286,&l_286,&l_286,&l_286},{&l_286,&l_286,&g_107,&l_286},{&l_286,&l_286,&g_107,(void*)0},{&l_286,&l_286,&l_286,&l_286},{&l_286,&l_286,&g_107,&l_286},{&l_286,&l_286,&g_107,(void*)0},{&l_286,&g_107,&l_286,&g_107}},{{(void*)0,&g_107,&g_107,(void*)0},{&l_286,&l_286,&g_107,&g_107},{(void*)0,&g_107,&l_286,&l_286},{&l_286,&g_107,&l_286,&l_286},{&l_286,&g_107,&g_107,&g_107},{&g_107,&l_286,&l_286,(void*)0},{&g_107,&g_107,&g_107,&g_107},{&l_286,&g_107,&l_286,&g_107},{&l_286,&g_107,&l_286,&g_107}},{{(void*)0,&g_107,&g_107,(void*)0},{&l_286,&l_286,&g_107,&g_107},{(void*)0,&g_107,&l_286,&l_286},{&l_286,&g_107,&l_286,&l_286},{&l_286,&g_107,&g_107,&g_107},{&g_107,&l_286,&l_286,(void*)0},{&g_107,&g_107,&g_107,&g_107},{&l_286,&g_107,&l_286,&g_107},{&l_286,&g_107,&l_286,&g_107}},{{(void*)0,&g_107,&g_107,(void*)0},{&l_286,&l_286,&g_107,&g_107},{(void*)0,&g_107,&l_286,&l_286},{&l_286,&g_107,&l_286,&l_286},{&l_286,&g_107,&g_107,&g_107},{&l_286,&g_107,&l_286,&g_107},{&l_286,&l_286,&g_107,&l_286},{&g_107,&l_286,&g_107,&g_107},{(void*)0,&l_286,&l_286,&l_286}},{{&g_107,&l_286,&l_286,&g_107},{&g_107,&g_107,&l_286,&g_107},{&g_107,&g_107,&l_286,(void*)0},{(void*)0,&l_286,&g_107,(void*)0},{&g_107,&g_107,&g_107,&g_107},{&l_286,&g_107,&l_286,&g_107},{&l_286,&l_286,&g_107,&l_286},{&g_107,&l_286,&g_107,&g_107},{(void*)0,&l_286,&l_286,&l_286}},{{&g_107,&l_286,&l_286,&g_107},{&g_107,&g_107,&l_286,&g_107},{&g_107,&g_107,&l_286,(void*)0},{(void*)0,&l_286,&g_107,(void*)0},{&g_107,&g_107,&g_107,&g_107},{&l_286,&g_107,&l_286,&g_107},{&l_286,&l_286,&g_107,&l_286},{&g_107,&l_286,&g_107,&g_107},{(void*)0,&l_286,&l_286,&l_286}}};
        int i, j, k;
        (*l_286) = 0x322387CCL;
        (*g_107) = 3L;
        g_107 = &g_264;
        return p_35;
    }
    return p_35;
}







static int func_36(int p_37, char p_38, int p_39, int p_40, unsigned p_41)
{
    return p_38;
}







static short func_46(unsigned char p_47, int p_48)
{
    unsigned char l_50 = 1UL;
    int *l_52 = &g_6;
    int **l_51 = &l_52;
    unsigned short l_53[10] = {65527UL,65527UL,65527UL,65527UL,65527UL,65527UL,65527UL,65527UL,65527UL,65527UL};
    char l_266 = 0xBAL;
    int i;
    l_50 = g_6;
    (*l_51) = (void*)0;
    for (p_47 = 1; (p_47 <= 9); p_47 += 1)
    {
        unsigned short l_57 = 65535UL;
        int l_274[7] = {0x171A2D92L,0x171A2D92L,0x171A2D92L,0x171A2D92L,0x171A2D92L,0x171A2D92L,0x171A2D92L};
        char l_277[1];
        int i;
        for (i = 0; i < 1; i++)
            l_277[i] = (-1L);
        for (p_48 = 0; (p_48 <= 9); p_48 += 1)
        {
            unsigned short l_58 = 0x72F3L;
            unsigned *l_63 = (void*)0;
            unsigned *l_64 = &g_65[3][4][7];
            int l_262 = 0x3CFDD35DL;
            int *l_263 = &g_264;
            int ***l_265 = &l_51;
            unsigned short *l_273 = &l_57;
            int *l_278 = &g_68;
            int i;
            (*l_263) |= (l_262 = (l_53[p_47] && ((l_53[p_47] <= func_54((((*l_64) ^= (((l_53[p_47] & g_6) , (((g_6 <= l_57) , ((l_58 > (safe_mod_func_uint32_t_u_u((safe_rshift_func_int16_t_s_s((4294967291UL ^ (-1L)), 2)), 0x02B68169L))) >= 1L)) > l_57)) <= p_48)) && g_65[3][1][7]), l_57)) , g_168)));
            (*l_51) = &g_67;
            (*l_263) = (((*l_265) = &l_52) != &l_52);
            (*l_278) ^= (l_266 && ((safe_sub_func_int32_t_s_s((*g_107), ((p_48 < ((0x1732CC21L == (safe_add_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u(((*l_273) = (g_104 < l_57)), 4)), (**l_51)))) | (l_274[1] ^ (safe_rshift_func_uint16_t_u_s(((g_264 || 0x62E1L) , l_277[0]), (*l_263)))))) < l_277[0]))) | p_47));
        }
    }
    return p_47;
}







static unsigned func_54(int p_55, int p_56)
{
    int *l_66[5][7] = {{&g_67,&g_6,&g_67,(void*)0,&g_67,&g_6,&g_67},{&g_67,&g_67,&g_67,&g_67,&g_67,&g_67,&g_67},{&g_6,&g_6,&g_6,&g_6,&g_6,&g_6,&g_6},{&g_67,&g_67,&g_67,&g_67,&g_67,&g_67,&g_67},{&g_67,(void*)0,&g_67,&g_6,&g_67,(void*)0,&g_67}};
    unsigned *l_225 = &g_65[2][5][3];
    unsigned **l_224 = &l_225;
    unsigned ***l_223[8] = {&l_224,&l_224,&l_224,&l_224,&l_224,&l_224,&l_224,&l_224};
    unsigned short *l_258 = &g_74;
    int i, j;
    g_68 &= (g_67 = g_65[2][5][4]);
    for (g_68 = 22; (g_68 > 26); ++g_68)
    {
        char l_83 = 0x27L;
        int l_88 = 0L;
        unsigned short *l_90 = &g_74;
        char l_96 = 0x34L;
        unsigned char l_177[4][1];
        unsigned *l_222 = &g_65[3][4][7];
        unsigned **l_221 = &l_222;
        unsigned ***l_220 = &l_221;
        int *l_240 = &g_104;
        int **l_260 = (void*)0;
        int **l_261 = &l_66[3][6];
        int i, j;
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 1; j++)
                l_177[i][j] = 1UL;
        }
        for (p_56 = 0; (p_56 <= 4); p_56 += 1)
        {
            short l_82 = 0x5D51L;
            int l_87 = 0x124A7691L;
            int i, j;
            for (g_67 = 4; (g_67 >= 0); g_67 -= 1)
            {
                for (p_55 = 0; (p_55 <= 4); p_55 += 1)
                {
                    unsigned short *l_73 = &g_74;
                    int l_84[6][5] = {{(-1L),1L,3L,0xFEB3B2B9L,0x9186717EL},{(-1L),0xFEB3B2B9L,0x38BD6013L,0xFEB3B2B9L,(-1L)},{0x9186717EL,0xFEB3B2B9L,3L,1L,(-1L)},{(-1L),1L,3L,0xFEB3B2B9L,0x9186717EL},{(-1L),0xFEB3B2B9L,0x38BD6013L,0xFEB3B2B9L,(-1L)},{0x9186717EL,0xFEB3B2B9L,3L,1L,(-1L)}};
                    int i, j;
                    l_84[5][2] = ((safe_lshift_func_uint16_t_u_s((((((*l_73) |= g_65[3][4][7]) > (safe_sub_func_uint32_t_u_u(p_55, (safe_unary_minus_func_int8_t_s(((safe_mod_func_int32_t_s_s(((safe_lshift_func_uint16_t_u_u((3UL >= l_82), (l_83 > (0x40L & (l_82 && (+((l_83 , &g_67) == l_66[3][3]))))))) | (-1L)), p_56)) < 0xB7L)))))) != l_83) , g_67), 12)) == 1UL);
                    l_66[p_56][(p_55 + 2)] = &g_67;
                }
                l_87 &= (g_65[3][4][7] , (safe_mod_func_int8_t_s_s(g_74, g_74)));
                l_88 &= p_55;
            }
            if (g_65[3][4][7])
                break;
        }
        if (((safe_unary_minus_func_int16_t_s((l_90 != (void*)0))) <= (p_55 < p_56)))
        {
            int l_99 = (-6L);
            for (p_55 = (-18); (p_55 < 3); p_55 = safe_add_func_int16_t_s_s(p_55, 1))
            {
                short l_95 = 4L;
                int *l_102 = &g_103;
                int **l_105 = (void*)0;
                int **l_106[10][4][3] = {{{&l_66[0][5],&l_66[4][3],&l_66[0][5]},{&l_66[4][2],&l_66[4][2],&l_66[0][2]},{&l_66[0][5],&l_66[4][3],&l_66[4][3]},{&l_66[0][2],(void*)0,&l_66[0][5]}},{{&l_66[4][0],&l_66[4][3],&l_66[4][0]},{&l_66[3][6],&l_66[0][5],&l_66[4][2]},{&l_66[0][5],&l_66[0][5],&l_66[0][5]},{(void*)0,&l_66[0][5],&l_66[0][5]}},{{&l_66[0][5],&l_66[4][3],&l_66[0][5]},{(void*)0,&l_66[0][2],(void*)0},{&l_66[0][5],&l_66[0][5],&l_66[0][5]},{&l_66[3][6],&l_66[3][6],&l_66[0][5]}},{{&l_66[4][0],&l_66[0][5],&l_66[0][5]},{&l_66[0][5],&l_66[0][2],&l_66[4][2]},{&l_66[4][0],&l_66[4][3],&l_66[4][0]},{&l_66[3][6],&l_66[0][5],&l_66[4][2]}},{{&l_66[0][5],&l_66[0][5],&l_66[0][5]},{(void*)0,&l_66[0][5],&l_66[0][5]},{&l_66[0][5],&l_66[4][3],&l_66[0][5]},{(void*)0,&l_66[0][2],(void*)0}},{{&l_66[0][5],&l_66[0][5],&l_66[0][5]},{&l_66[3][6],&l_66[3][6],&l_66[0][5]},{&l_66[4][0],&l_66[0][5],&l_66[0][5]},{&l_66[0][5],&l_66[0][2],&l_66[4][2]}},{{&l_66[4][0],&l_66[4][3],&l_66[4][0]},{&l_66[3][6],&l_66[0][5],&l_66[4][2]},{&l_66[0][5],&l_66[0][5],&l_66[0][5]},{(void*)0,&l_66[0][5],&l_66[0][5]}},{{&l_66[0][5],&l_66[4][3],&l_66[0][5]},{(void*)0,&l_66[0][2],(void*)0},{&l_66[0][5],&l_66[0][5],&l_66[0][5]},{&l_66[3][6],&l_66[3][6],&l_66[0][5]}},{{&l_66[4][0],&l_66[0][5],&l_66[0][5]},{&l_66[0][5],&l_66[0][2],&l_66[4][2]},{&l_66[4][0],&l_66[4][3],&l_66[4][0]},{&l_66[3][6],&l_66[0][5],(void*)0}},{{&l_66[4][3],&l_66[4][3],&l_66[0][5]},{&l_66[0][5],&l_66[3][6],&l_66[3][6]},{&l_66[0][5],&l_66[0][5],&l_66[4][0]},{&l_66[0][5],&l_66[4][2],&l_66[0][5]}}};
                int i, j, k;
                for (g_67 = (-2); (g_67 != (-20)); --g_67)
                {
                    return g_65[3][3][5];
                }
                l_99 = ((((*l_102) = (p_55 >= ((((((g_6 > ((*l_90) = ((l_95 | l_88) & ((l_96 | (safe_sub_func_uint16_t_u_u(l_99, (p_55 >= (g_68 | (safe_rshift_func_int8_t_s_u(0x7CL, 3))))))) <= 0xB1L)))) >= g_68) || 1UL) != 8UL) >= g_65[3][4][7]) , g_74))) , g_104) < 0x9FL);
                g_107 = &g_67;
                l_88 ^= (*g_107);
            }
        }
        else
        {
            short l_118 = 0x93B6L;
            unsigned char *l_119 = (void*)0;
            unsigned char *l_120[9][6][4] = {{{&g_121,(void*)0,&g_121,(void*)0},{&g_121,&g_121,&g_121,(void*)0},{&g_121,&g_121,&g_121,&g_121},{&g_121,&g_121,&g_121,&g_121},{&g_121,&g_121,&g_121,&g_121},{&g_121,&g_121,&g_121,&g_121}},{{&g_121,&g_121,&g_121,&g_121},{&g_121,&g_121,&g_121,&g_121},{(void*)0,&g_121,(void*)0,&g_121},{&g_121,&g_121,(void*)0,&g_121},{(void*)0,&g_121,&g_121,&g_121},{&g_121,(void*)0,&g_121,(void*)0}},{{&g_121,(void*)0,&g_121,&g_121},{&g_121,(void*)0,&g_121,&g_121},{&g_121,&g_121,&g_121,&g_121},{&g_121,&g_121,&g_121,&g_121},{&g_121,(void*)0,&g_121,&g_121},{&g_121,&g_121,&g_121,(void*)0}},{{&g_121,&g_121,&g_121,(void*)0},{(void*)0,&g_121,(void*)0,&g_121},{&g_121,&g_121,&g_121,&g_121},{(void*)0,(void*)0,&g_121,(void*)0},{&g_121,&g_121,&g_121,&g_121},{&g_121,&g_121,(void*)0,&g_121}},{{&g_121,&g_121,&g_121,&g_121},{(void*)0,&g_121,(void*)0,&g_121},{(void*)0,(void*)0,&g_121,&g_121},{&g_121,&g_121,(void*)0,&g_121},{(void*)0,(void*)0,&g_121,&g_121},{&g_121,&g_121,&g_121,&g_121}},{{(void*)0,&g_121,&g_121,&g_121},{(void*)0,&g_121,&g_121,&g_121},{&g_121,&g_121,&g_121,&g_121},{(void*)0,&g_121,(void*)0,(void*)0},{&g_121,&g_121,&g_121,(void*)0},{(void*)0,&g_121,(void*)0,&g_121}},{{(void*)0,&g_121,&g_121,(void*)0},{&g_121,&g_121,(void*)0,&g_121},{&g_121,&g_121,&g_121,&g_121},{&g_121,&g_121,&g_121,&g_121},{(void*)0,&g_121,&g_121,&g_121},{&g_121,&g_121,&g_121,&g_121}},{{(void*)0,&g_121,&g_121,&g_121},{(void*)0,&g_121,&g_121,&g_121},{&g_121,&g_121,&g_121,&g_121},{&g_121,&g_121,(void*)0,&g_121},{&g_121,(void*)0,&g_121,&g_121},{(void*)0,&g_121,&g_121,&g_121}},{{&g_121,&g_121,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&g_121,&g_121,&g_121},{&g_121,&g_121,&g_121,&g_121},{&g_121,&g_121,&g_121,&g_121},{&g_121,&g_121,&g_121,(void*)0}}};
            int *l_126 = &g_103;
            int *l_135 = &l_88;
            unsigned **l_156 = (void*)0;
            int i, j, k;
            (*g_107) &= ((0x9FD49C48L || (safe_sub_func_uint8_t_u_u((&g_65[3][4][7] != (void*)0), ((safe_lshift_func_uint16_t_u_s((safe_rshift_func_int16_t_s_s((((safe_div_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u(g_74, 1)), p_56)) <= ((((l_88 &= l_118) , p_55) , (l_118 == g_65[3][0][0])) , l_118)) > l_96), 12)), p_55)) == p_56)))) >= p_55);
            for (l_96 = 0; (l_96 <= 3); l_96 += 1)
            {
                int l_124 = 0xAEA5EAF7L;
                int l_125 = 0xDA5BF8BAL;
                unsigned *l_155 = &g_65[3][4][7];
                unsigned **l_154 = &l_155;
                int l_170 = 0x14ACB596L;
                l_125 = (((safe_rshift_func_int8_t_s_s(1L, (l_124 , p_55))) <= g_121) < (g_121 , l_124));
            }
        }
        for (g_168 = 0; (g_168 <= (-22)); g_168--)
        {
            unsigned char l_174 = 249UL;
            int l_211 = 0x450B3EC0L;
            unsigned *l_254 = &g_65[1][3][4];
            unsigned **l_259[8][6][5] = {{{&l_225,(void*)0,&l_225,&l_225,&l_225},{(void*)0,&l_225,&l_222,&l_225,(void*)0},{&l_254,&l_225,&l_254,&l_225,&l_254},{&l_254,&l_222,&l_225,&l_254,&l_254},{&l_225,&l_225,(void*)0,&l_225,&l_254},{(void*)0,&l_254,(void*)0,&l_222,(void*)0}},{{&l_254,&l_254,&l_254,&l_254,&l_225},{(void*)0,&l_254,&l_225,&l_254,&l_222},{&l_254,&l_225,&l_254,&l_254,&l_225},{&l_225,&l_222,(void*)0,&l_225,&l_222},{&l_225,&l_225,(void*)0,&l_225,&l_225},{&l_254,&l_254,&l_254,&l_222,&l_222}},{{&l_254,&l_254,&l_225,&l_225,(void*)0},{(void*)0,&l_254,(void*)0,&l_225,&l_225},{&l_225,&l_225,&l_254,(void*)0,&l_254},{&l_222,&l_225,&l_225,&l_225,&l_225},{&l_225,&l_225,&l_225,&l_225,&l_225},{&l_222,&l_254,&l_222,&l_222,(void*)0}},{{&l_225,&l_225,&l_254,&l_225,(void*)0},{(void*)0,&l_254,&l_222,&l_254,(void*)0},{&l_225,&l_225,&l_225,&l_254,&l_225},{&l_254,&l_225,(void*)0,&l_254,&l_222},{&l_225,&l_225,&l_225,&l_225,&l_225},{&l_254,&l_254,&l_254,&l_222,(void*)0}},{{&l_225,&l_254,&l_254,&l_225,(void*)0},{&l_225,&l_225,(void*)0,&l_254,(void*)0},{&l_225,&l_222,&l_254,(void*)0,&l_225},{&l_254,&l_225,&l_254,&l_254,&l_225},{&l_254,&l_225,&l_225,&l_222,&l_254},{&l_222,&l_225,(void*)0,&l_222,&l_225}},{{&l_254,&l_225,(void*)0,(void*)0,(void*)0},{&l_254,&l_222,(void*)0,&l_225,&l_254},{&l_222,(void*)0,&l_225,&l_254,(void*)0},{(void*)0,&l_225,(void*)0,&l_225,(void*)0},{&l_254,&l_225,&l_225,(void*)0,&l_225},{&l_222,&l_222,&l_254,&l_222,&l_254}},{{&l_225,&l_222,&l_225,&l_254,(void*)0},{&l_222,&l_222,&l_254,&l_222,&l_222},{&l_222,&l_225,(void*)0,(void*)0,&l_254},{&l_225,&l_225,&l_225,&l_222,&l_254},{&l_225,(void*)0,&l_225,&l_225,&l_254},{(void*)0,&l_222,(void*)0,&l_222,&l_222}},{{&l_254,(void*)0,&l_254,&l_254,(void*)0},{&l_254,&l_225,(void*)0,&l_222,&l_254},{&l_222,&l_225,&l_254,&l_254,&l_225},{&l_222,&l_225,(void*)0,&l_222,(void*)0},{(void*)0,&l_254,&l_225,&l_225,(void*)0},{&l_222,&l_225,&l_225,&l_222,&l_254}}};
            int i, j, k;
            l_88 = l_174;
            (*g_107) = (safe_rshift_func_uint8_t_u_s((((g_74 == l_177[0][0]) | 255UL) , g_103), 6));
            for (l_174 = 0; (l_174 >= 45); l_174++)
            {
                int *l_184 = (void*)0;
                int **l_241 = &l_66[0][5];
                int l_246 = 0xA3E9DAC5L;
                for (l_88 = (-24); (l_88 == (-27)); l_88 = safe_sub_func_int8_t_s_s(l_88, 7))
                {
                    char *l_189 = (void*)0;
                    char *l_191 = (void*)0;
                    char **l_190[5][7][7] = {{{&l_191,(void*)0,&l_191,&l_191,&l_189,&l_191,&l_191},{&l_191,(void*)0,&l_189,(void*)0,&l_189,&l_191,&l_191},{&l_191,&l_191,&l_191,&l_191,(void*)0,&l_189,&l_191},{&l_191,&l_189,&l_189,&l_189,&l_191,&l_191,&l_191},{&l_189,&l_191,&l_191,(void*)0,&l_189,&l_189,&l_189},{&l_189,&l_191,&l_191,&l_189,&l_189,(void*)0,(void*)0},{(void*)0,&l_191,&l_191,&l_191,&l_191,(void*)0,(void*)0}},{{&l_189,&l_191,&l_191,&l_191,&l_189,&l_191,&l_189},{&l_189,&l_191,&l_189,&l_189,&l_191,&l_189,&l_189},{&l_191,&l_191,&l_191,&l_191,(void*)0,&l_191,&l_191},{&l_189,&l_191,&l_189,&l_191,&l_189,(void*)0,&l_189},{&l_189,&l_191,(void*)0,(void*)0,&l_189,&l_191,&l_191},{&l_191,&l_191,(void*)0,&l_191,&l_189,&l_189,&l_189},{&l_191,&l_189,&l_189,&l_191,&l_189,&l_189,&l_189}},{{&l_189,&l_191,(void*)0,&l_189,(void*)0,&l_189,(void*)0},{&l_189,&l_191,&l_189,&l_191,(void*)0,&l_189,&l_189},{&l_191,&l_191,(void*)0,&l_191,&l_189,&l_189,(void*)0},{&l_191,&l_189,&l_191,&l_189,&l_191,&l_189,&l_191},{&l_191,&l_191,(void*)0,&l_189,&l_191,&l_191,&l_189},{&l_189,&l_189,&l_191,&l_191,&l_191,&l_189,&l_191},{&l_191,&l_191,(void*)0,&l_189,&l_189,&l_189,&l_189}},{{&l_189,&l_191,&l_189,&l_191,(void*)0,(void*)0,&l_191},{&l_189,&l_189,&l_189,(void*)0,&l_189,&l_191,&l_191},{&l_191,&l_189,&l_189,(void*)0,&l_191,&l_191,&l_189},{&l_189,&l_191,&l_189,&l_189,(void*)0,&l_191,&l_189},{&l_189,(void*)0,&l_189,(void*)0,&l_189,(void*)0,&l_191},{(void*)0,&l_191,(void*)0,(void*)0,&l_189,&l_189,&l_191},{&l_191,&l_189,&l_189,&l_189,(void*)0,&l_189,&l_191}},{{(void*)0,(void*)0,&l_189,&l_191,(void*)0,&l_189,&l_191},{&l_191,&l_191,&l_189,&l_189,&l_189,&l_191,&l_191},{&l_191,&l_191,&l_189,&l_189,&l_191,(void*)0,(void*)0},{(void*)0,&l_191,(void*)0,&l_189,&l_189,&l_191,&l_189},{(void*)0,&l_189,&l_189,&l_191,(void*)0,&l_191,(void*)0},{&l_191,&l_189,(void*)0,(void*)0,&l_191,&l_189,&l_191},{&l_191,&l_189,&l_191,&l_189,&l_191,&l_189,&l_189}}};
                    unsigned *l_195 = (void*)0;
                    unsigned char *l_196 = &l_177[0][0];
                    int l_205 = 0x484B6C8CL;
                    int l_206 = (-1L);
                    int i, j, k;
                    for (l_96 = 7; (l_96 > 4); l_96 = safe_sub_func_uint8_t_u_u(l_96, 5))
                    {
                        l_184 = &g_68;
                    }
                    if (((safe_mod_func_int32_t_s_s((safe_sub_func_uint8_t_u_u((l_189 == (g_192 = (void*)0)), ((safe_add_func_uint16_t_u_u(p_56, ((((l_195 == (void*)0) || ((*l_196) = g_153[3][6][3])) , ((safe_add_func_uint16_t_u_u(0xBB98L, (safe_mod_func_int32_t_s_s(p_55, (safe_div_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s(((g_67 & 0x2882L) >= l_205), 5)), g_103)))))) < g_65[3][3][1])) , 0xEDB8L))) , l_96))), p_55)) & g_6))
                    {
                        unsigned l_230[1];
                        int l_231 = (-1L);
                        int i;
                        for (i = 0; i < 1; i++)
                            l_230[i] = 4294967289UL;
                        l_211 ^= (l_206 ^ (~(safe_div_func_uint8_t_u_u((((safe_add_func_uint8_t_u_u(p_55, g_67)) , l_177[3][0]) , (p_56 < 0xFD9DL)), p_56))));
                        (*g_107) = ((((safe_sub_func_int32_t_s_s((safe_rshift_func_int16_t_s_s(0xD8D1L, 8)), (*g_107))) == (safe_rshift_func_int16_t_s_u((0xF5D82354L > (safe_rshift_func_uint8_t_u_s((l_220 != l_223[1]), 5))), 13))) ^ 0x9EL) , (((safe_lshift_func_uint8_t_u_u((g_153[3][6][2] == (p_55 == ((safe_add_func_int8_t_s_s(g_65[3][4][7], 0L)) ^ 251UL))), l_230[0])) == 5UL) ^ 246UL));
                        l_231 = (*g_107);
                    }
                    else
                    {
                        int l_235 = 0x8D4B40CFL;
                        l_211 &= (safe_add_func_int8_t_s_s((p_55 , (p_55 > (safe_unary_minus_func_uint32_t_u(((l_206 = l_235) , (safe_add_func_int32_t_s_s(((safe_lshift_func_uint8_t_u_s((p_56 > (*g_107)), 3)) <= p_55), (l_177[0][0] < ((((l_235 != (((l_206 &= 0xF3L) && (-6L)) ^ 0xDEL)) && 0x60L) == l_235) , g_74))))))))), p_56));
                        return l_206;
                    }
                }
                (*l_241) = l_240;
                for (g_104 = 9; (g_104 == 27); g_104 = safe_add_func_uint32_t_u_u(g_104, 3))
                {
                    int *l_244 = &g_68;
                    int l_249[10][7] = {{0x9BB11EFFL,0x11D36CE4L,0x9593E8CAL,0L,0x9593E8CAL,0x11D36CE4L,0x9BB11EFFL},{0x9BB11EFFL,0x11D36CE4L,0x9593E8CAL,0L,0x9593E8CAL,0x11D36CE4L,0x9BB11EFFL},{0x9BB11EFFL,0x11D36CE4L,0x9593E8CAL,0L,0x9593E8CAL,0x11D36CE4L,0x9BB11EFFL},{0x9BB11EFFL,0x11D36CE4L,0x9593E8CAL,0L,0x9593E8CAL,0x11D36CE4L,0x9BB11EFFL},{0x9BB11EFFL,0x11D36CE4L,0x9593E8CAL,0L,0x9593E8CAL,0x11D36CE4L,0x9BB11EFFL},{0x9BB11EFFL,0x11D36CE4L,0x9593E8CAL,0L,0x9593E8CAL,0x11D36CE4L,0x9BB11EFFL},{0x9BB11EFFL,0x11D36CE4L,0x9593E8CAL,0L,0x9593E8CAL,0x11D36CE4L,0x9BB11EFFL},{1L,0L,0x11D36CE4L,0x5F375361L,0x11D36CE4L,0L,1L},{1L,0L,0x11D36CE4L,0x5F375361L,0x11D36CE4L,0L,1L},{1L,0L,0x11D36CE4L,0x5F375361L,0x11D36CE4L,0L,1L}};
                    int i, j;
                    for (p_55 = 0; (p_55 <= 3); p_55 += 1)
                    {
                        int *l_245[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                        int i, j, k;
                        (*l_241) = &g_67;
                        l_245[0] = l_244;
                        l_246 &= g_153[(p_55 + 1)][(p_55 + 2)][p_55];
                        l_249[5][5] ^= (+(safe_lshift_func_uint8_t_u_s(255UL, 6)));
                    }
                }
            }
            (*l_240) = ((((g_74 = (((safe_div_func_uint32_t_u_u((g_67 , (g_255 = (safe_rshift_func_uint16_t_u_s(0x91B9L, (g_6 < ((void*)0 != l_254)))))), (safe_div_func_uint32_t_u_u((p_55 & ((((g_153[3][6][3] &= (l_258 != (l_211 , l_90))) && (*l_240)) >= p_56) , (*l_240))), (*l_240))))) , l_259[0][3][3]) == &g_132)) < g_104) > p_55) , (*l_240));
        }
        (*l_261) = &g_104;
    }
    return g_6;
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_6, "g_6", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 8; k++)
            {
                transparent_crc(g_65[i][j][k], "g_65[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_67, "g_67", print_hash_value);
    transparent_crc(g_68, "g_68", print_hash_value);
    transparent_crc(g_74, "g_74", print_hash_value);
    transparent_crc(g_103, "g_103", print_hash_value);
    transparent_crc(g_104, "g_104", print_hash_value);
    transparent_crc(g_121, "g_121", print_hash_value);
    transparent_crc(g_133, "g_133", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_153[i][j][k], "g_153[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_168, "g_168", print_hash_value);
    transparent_crc(g_255, "g_255", print_hash_value);
    transparent_crc(g_264, "g_264", print_hash_value);
    transparent_crc(g_285, "g_285", print_hash_value);
    transparent_crc(g_287, "g_287", print_hash_value);
    transparent_crc(g_318, "g_318", print_hash_value);
    transparent_crc(g_339, "g_339", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_340[i], "g_340[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_370, "g_370", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_375[i], "g_375[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_392[i], "g_392[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_494[i][j][k], "g_494[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_585, "g_585", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_641[i][j][k], "g_641[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_653, "g_653", print_hash_value);
    transparent_crc(g_884, "g_884", print_hash_value);
    transparent_crc(g_915, "g_915", print_hash_value);
    transparent_crc(g_1007, "g_1007", print_hash_value);
    transparent_crc(g_1075, "g_1075", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_1210[i], "g_1210[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_1328[i], "g_1328[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1339, "g_1339", print_hash_value);
    transparent_crc(g_1569, "g_1569", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
