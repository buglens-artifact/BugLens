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



static int g_8 = (-1L);
static int *g_7 = &g_8;
static unsigned char g_28[7] = {1UL,1UL,1UL,1UL,1UL,1UL,1UL};
static int g_39 = 0x9E177C42L;
static unsigned g_43 = 0UL;
static unsigned short g_60[6][10] = {{0UL,1UL,0x4BBCL,65533UL,0x3FD9L,0xECE0L,0x3FD9L,65533UL,0x4BBCL,1UL},{65526UL,0xC265L,0xECE0L,1UL,0x3FD9L,2UL,2UL,0x3FD9L,1UL,0xECE0L},{0x3FD9L,0x3FD9L,0UL,65526UL,0xE76DL,2UL,0x4BBCL,2UL,0xE76DL,65526UL},{65526UL,0xE0EAL,65526UL,2UL,65533UL,0xECE0L,0x4BBCL,0x4BBCL,0xECE0L,0xC265L},{65526UL,1UL,1UL,65526UL,0xECE0L,0xE0EAL,0UL,0xE76DL,0UL,0xE0EAL},{65533UL,0x3FD9L,0xECE0L,0x3FD9L,65533UL,0x4BBCL,1UL,0UL,0UL,1UL}};
static unsigned g_71[3][3] = {{0x5D7B1ECBL,4294967291UL,0x5D7B1ECBL},{0xCB8161DBL,0xCB8161DBL,0xCB8161DBL},{0x5D7B1ECBL,4294967291UL,0x5D7B1ECBL}};
static unsigned g_74[8] = {0xB4ADC7C5L,0xB4ADC7C5L,4UL,0xB4ADC7C5L,0xB4ADC7C5L,4UL,0xB4ADC7C5L,0xB4ADC7C5L};
static unsigned short *g_85 = &g_60[3][8];
static unsigned short **g_84[4][8] = {{&g_85,&g_85,&g_85,&g_85,&g_85,&g_85,&g_85,&g_85},{&g_85,&g_85,&g_85,&g_85,&g_85,&g_85,&g_85,&g_85},{&g_85,&g_85,&g_85,&g_85,&g_85,&g_85,&g_85,&g_85},{&g_85,&g_85,&g_85,&g_85,&g_85,&g_85,&g_85,&g_85}};
static int *g_113 = &g_39;
static int **g_112 = &g_113;
static char g_119 = (-3L);
static short g_120 = 7L;
static short g_123 = 0L;
static int g_124 = (-1L);
static short g_125[6][4][3] = {{{1L,0xA635L,(-5L)},{1L,(-2L),0xA635L},{(-1L),0xA635L,0xA635L},{1L,6L,(-5L)}},{{(-1L),6L,0x8600L},{1L,0xA635L,(-5L)},{1L,(-2L),0xA635L},{(-1L),0xA635L,0xA635L}},{{1L,0xA635L,(-2L)},{(-10L),0xA635L,6L},{(-1L),(-5L),(-2L)},{(-1L),0x8600L,(-5L)}},{{(-10L),(-5L),(-5L)},{0xB377L,0xA635L,(-2L)},{(-10L),0xA635L,6L},{(-1L),(-5L),(-2L)}},{{(-1L),0x8600L,(-5L)},{(-10L),(-5L),(-5L)},{0xB377L,0xA635L,(-2L)},{(-10L),0xA635L,6L}},{{(-1L),(-5L),(-2L)},{(-1L),0x8600L,(-5L)},{(-10L),(-5L),(-5L)},{0xB377L,0xA635L,(-2L)}}};
static unsigned *g_136 = (void*)0;
static unsigned **g_135 = &g_136;
static unsigned ***g_134 = &g_135;
static int ***g_160 = &g_112;
static int g_170 = 0xBBF4A9A9L;
static unsigned g_171 = 0xB3F3958AL;
static char g_175 = 0xC7L;
static unsigned g_176 = 4294967287UL;
static unsigned g_180 = 0x1438CF6DL;
static char g_185[6] = {0x67L,0x67L,0x67L,0x67L,0x67L,0x67L};
static unsigned short g_186 = 0UL;
static int g_195 = 0xC260BCB5L;
static unsigned short g_198 = 0x5561L;
static int *g_206 = &g_170;
static unsigned char g_211 = 0x6FL;
static int g_224 = 5L;
static short *g_295 = (void*)0;
static short **g_294[4][1][6] = {{{&g_295,&g_295,&g_295,&g_295,&g_295,&g_295}},{{&g_295,&g_295,&g_295,&g_295,&g_295,&g_295}},{{&g_295,&g_295,&g_295,&g_295,&g_295,&g_295}},{{&g_295,&g_295,&g_295,&g_295,&g_295,&g_295}}};
static char g_304 = 3L;
static unsigned g_305 = 0x745939E3L;
static short g_349 = 0xDFB4L;
static unsigned short g_352 = 0x1538L;
static unsigned short g_381 = 0xEC1EL;
static int g_467 = 0xA91EACD9L;
static short g_468 = 0x82DBL;
static unsigned short g_469 = 0x667FL;
static short g_497 = 0L;
static const int *g_515 = &g_39;
static const int **g_514 = &g_515;
static const int ***g_513 = &g_514;
static const unsigned short g_528 = 0x8CBFL;
static const unsigned short *g_527[2][2][4] = {{{&g_528,&g_528,&g_528,&g_528},{&g_528,&g_528,&g_528,&g_528}},{{&g_528,&g_528,&g_528,&g_528},{&g_528,&g_528,&g_528,&g_528}}};
static const unsigned short **g_526[7][2] = {{(void*)0,&g_527[0][1][1]},{&g_527[0][1][1],(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}};
static const unsigned short ***g_525 = &g_526[3][0];
static int g_538 = 1L;
static unsigned char g_539 = 6UL;
static char *g_543 = &g_185[3];
static char **g_542 = &g_543;
static unsigned short g_591[2] = {0x1A9EL,0x1A9EL};
static unsigned char g_666 = 0xD5L;
static unsigned g_711 = 0xCEC921EDL;
static unsigned *g_718 = &g_171;
static unsigned ** const g_717[1] = {&g_718};
static unsigned g_766 = 0UL;
static int g_794 = 0L;
static unsigned g_863[10] = {4294967286UL,4294967286UL,4294967286UL,4294967286UL,4294967286UL,4294967286UL,4294967286UL,4294967286UL,4294967286UL,4294967286UL};
static char g_876 = 9L;
static int g_883 = 0x29C181D6L;
static unsigned g_892 = 4294967295UL;
static int g_921 = (-1L);
static char g_927 = 0xBFL;
static char g_928[4] = {(-1L),(-1L),(-1L),(-1L)};
static unsigned short g_930 = 0x3FC8L;
static int ** const *g_953 = &g_112;
static int ** const **g_952 = &g_953;
static int ** const ***g_951 = &g_952;
static unsigned **g_970 = &g_718;
static int g_987 = (-9L);
static unsigned g_988[9] = {0x0B9439C3L,0x0B9439C3L,0xB9AD74FAL,0x0B9439C3L,0x0B9439C3L,0xB9AD74FAL,0x0B9439C3L,0x0B9439C3L,0xB9AD74FAL};
static short g_1035[10] = {0L,0L,0xF305L,1L,0xF305L,0L,0L,0xF305L,1L,0xF305L};
static short g_1036 = (-2L);
static unsigned short g_1037[1][3] = {{65532UL,65532UL,65532UL}};
static unsigned g_1046 = 0x67702B76L;
static unsigned * const *g_1074[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
static unsigned * const **g_1073 = &g_1074[4];
static unsigned short g_1084[9][10] = {{0x74CEL,0x904BL,1UL,65535UL,65535UL,0x98CEL,0UL,0x5FDEL,1UL,1UL},{0x904BL,5UL,0x98CEL,65533UL,65533UL,0x98CEL,5UL,0x904BL,65535UL,0UL},{0x74CEL,1UL,0xE586L,0x904BL,0x2449L,65533UL,0xC4AFL,0UL,0xC4AFL,65533UL},{65535UL,0x2449L,0xE586L,0x2449L,65535UL,0UL,65535UL,0x904BL,5UL,0x74CEL},{0x904BL,0x98CEL,0x74CEL,0x2449L,0xEDC7L,2UL,2UL,0xEDC7L,0x2449L,0x74CEL},{0x2449L,0x2449L,1UL,0x74CEL,65533UL,65535UL,0xEDC7L,0UL,65535UL,0x5FDEL},{0UL,5UL,0xEDC7L,1UL,0xC4AFL,1UL,0xEDC7L,5UL,0UL,0x2449L},{0x98CEL,0x2449L,65535UL,65533UL,0x5FDEL,65535UL,2UL,0xC4AFL,0xC4AFL,2UL},{5UL,0x98CEL,65533UL,65533UL,0x98CEL,5UL,0x904BL,65535UL,0UL,65535UL}};
static const char g_1116 = 0L;
static unsigned *g_1117 = &g_171;
static int g_1126 = 1L;
static unsigned g_1127 = 1UL;
static int g_1195 = 0x4C59D7E4L;
static int g_1198 = 0x3DA2129BL;
static unsigned short g_1204 = 0UL;
static short g_1207[4][3][9] = {{{(-1L),(-5L),6L,9L,0x77EAL,0L,0x57C6L,0x8EE3L,0L},{0x77EAL,(-1L),(-8L),9L,6L,0L,0L,0L,6L},{0x5C84L,(-8L),(-8L),0x5C84L,(-5L),0x056DL,0x77EAL,0x84C7L,6L}},{{9L,0xB6CDL,6L,0x84C7L,0x056DL,(-1L),0x4E11L,0x8BCBL,1L},{0L,0L,(-1L),0L,(-5L),0x84C7L,(-5L),1L,0x43A7L},{9L,0x207BL,0x43A7L,0x056DL,0x056DL,0x43A7L,0x207BL,9L,0x8BCBL}},{{0x77EAL,0L,0xC68BL,(-3L),0x4E11L,9L,(-5L),0x8EE3L,1L},{(-3L),0L,0x84C7L,0L,0x5C84L,1L,0x4E11L,(-5L),0x8BCBL},{1L,0xC68BL,0x77EAL,0x43A7L,0xB6CDL,0L,0L,0xB6CDL,0x43A7L}},{{0x57C6L,0xC68BL,0x57C6L,0x8BCBL,(-5L),0x4E11L,1L,0x5C84L,0L},{0L,0L,(-1L),1L,0x8EE3L,(-5L),9L,0x4E11L,(-3L)},{(-5L),0L,6L,0x8BCBL,9L,0x207BL,0x43A7L,0x056DL,0x056DL}}};
static short g_1208[7][5][7] = {{{0x4689L,0x9897L,0xE2ADL,(-1L),0xD521L,0xD521L,(-1L)},{0xD680L,0x153CL,0xD680L,3L,1L,8L,0xD6B3L},{(-6L),0x153CL,0L,0x22FFL,0xE8BFL,(-1L),0x6391L},{7L,0x9897L,9L,0x46EBL,0L,8L,(-1L)},{1L,(-10L),9L,(-5L),0x22FFL,0xC182L,0L}},{{0x010EL,(-1L),0x33B4L,4L,0x46EBL,0xEE72L,4L},{(-5L),1L,(-1L),4L,(-5L),0xD6B3L,(-6L)},{1L,1L,6L,1L,(-1L),(-5L),(-1L)},{(-5L),(-1L),0x949BL,0x1C68L,(-1L),0xCA60L,4L},{0x010EL,8L,1L,(-5L),(-5L),0xC182L,0x21B6L}},{{(-9L),(-1L),6L,(-1L),0x46EBL,0xC182L,(-1L)},{(-5L),1L,1L,4L,0x22FFL,0xCA60L,(-6L)},{0x28EFL,1L,6L,(-5L),3L,(-5L),(-6L)},{(-1L),(-1L),1L,0L,(-1L),0xD6B3L,(-1L)},{0x010EL,0x128CL,0x949BL,(-5L),0x22FFL,0xEE72L,0x21B6L}},{{0x010EL,0x22E4L,6L,4L,0xC182L,0xC182L,4L},{(-1L),1L,(-1L),(-1L),0x22FFL,0xD6B3L,(-1L)},{0x28EFL,1L,0x33B4L,(-5L),(-1L),(-2L),(-6L)},{(-5L),(-1L),0xC228L,0x22E4L,0x4ACEL,0x1741L,8L},{0xFAACL,0x6269L,0xC228L,5L,(-1L),(-9L),(-1L)}},{{(-1L),0x0A64L,0x1C68L,8L,0x9897L,0x9866L,8L},{(-1L),(-10L),0x070FL,8L,7L,0x1741L,0xD521L},{0xC228L,(-7L),5L,5L,1L,7L,0L},{(-1L),0x0A64L,0x21B6L,0x22E4L,1L,0x2DB1L,8L},{(-1L),0L,0xC228L,0L,7L,(-9L),1L}},{{0xFAACL,0x0A64L,5L,0x0B5CL,0x9897L,(-9L),0x0B5CL},{(-1L),(-7L),4L,8L,(-1L),0x2DB1L,0xD521L},{0L,(-10L),5L,0L,0x4ACEL,7L,0xD521L},{0x070FL,0x0A64L,0xC228L,0xC11AL,1L,0x1741L,0x0B5CL},{(-1L),0x6269L,0x21B6L,0L,(-1L),0x9866L,1L}},{{(-1L),(-1L),5L,8L,(-9L),(-9L),8L},{0x070FL,(-7L),0x070FL,0x0B5CL,(-1L),0x1741L,0xEE72L},{0x6166L,(-1L),(-6L),3L,8L,0xE8BFL,0xC182L},{1L,0xC7F0L,(-4L),0x03DBL,0x0B5CL,0L,0xD6B3L},{0L,3L,(-4L),1L,0L,0xC11AL,(-2L)}}};
static int g_1210 = 0xA51C8F25L;
static unsigned char g_1211 = 1UL;
static int g_1220[4][2] = {{(-10L),(-10L)},{(-10L),(-10L)},{(-10L),(-10L)},{(-10L),(-10L)}};
static unsigned g_1236 = 0xF919F1B1L;



static char func_1(void);
static int * func_2(int * p_3, int * p_4, int * p_5, unsigned p_6);
static int * func_9(int * p_10, int * p_11, int * p_12);
static int * func_14(int * p_15, int * p_16);
static int * func_17(int * p_18, unsigned short p_19);
static unsigned func_33(short p_34, unsigned short p_35);
static int * func_46(int ** p_47, const short p_48, unsigned short p_49);
static unsigned short func_50(int * const * p_51, int p_52);
static int * const * func_53(int p_54, const unsigned p_55, unsigned short p_56);
static unsigned short func_63(unsigned char p_64, int p_65, const unsigned p_66, const unsigned p_67);
static char func_1(void)
{
    int *l_13 = &g_8;
    int *l_20 = &g_8;
    unsigned short l_1160[8] = {0x6FC4L,0x6FC4L,0x6FC4L,0x6FC4L,0x6FC4L,0x6FC4L,0x6FC4L,0x6FC4L};
    const unsigned l_1183 = 0x776B925DL;
    int l_1202[1][5][5] = {{{0xBA7639CDL,1L,0L,0x2726369EL,0x2726369EL},{1L,0xBA7639CDL,1L,0L,0x2726369EL},{(-1L),0x31DC5517L,0x2726369EL,0x31DC5517L,(-1L)},{1L,0x31DC5517L,0xBA7639CDL,(-1L),0xBA7639CDL},{0xBA7639CDL,0xBA7639CDL,0x2726369EL,(-1L),0xAC372A11L}}};
    int l_1216 = (-10L);
    unsigned * const ** const l_1237[2][10] = {{&g_1074[5],&g_1074[4],&g_1074[2],&g_1074[4],&g_1074[4],&g_1074[4],&g_1074[2],&g_1074[4],&g_1074[5],&g_1074[5]},{&g_1074[4],(void*)0,&g_1074[2],&g_1074[4],&g_1074[4],&g_1074[2],(void*)0,&g_1074[4],&g_1074[2],&g_1074[4]}};
    unsigned l_1240 = 4294967295UL;
    int i, j, k;
    (**g_160) = func_2(g_7, &g_8, func_9(&g_8, l_13, func_14(&g_8, func_17((l_20 = &g_8), (*l_13)))), (**g_970));

    ;
    ;
    (***g_953) |= l_1160[7];
    for (g_43 = (-28); (g_43 == 36); g_43 = safe_add_func_uint8_t_u_u(g_43, 1))
    {
        unsigned l_1163 = 0UL;
        unsigned ****l_1164 = (void*)0;
        unsigned ****l_1165 = &g_134;
        unsigned ***l_1166 = &g_135;
        char *l_1169 = &g_119;
        short l_1170 = (-7L);
        const unsigned l_1171[2] = {0xD57FD619L,0xD57FD619L};
        int * const l_1197 = &g_1198;
        int * const *l_1196[8][5] = {{&l_1197,&l_1197,(void*)0,&l_1197,&l_1197},{&l_1197,&l_1197,&l_1197,&l_1197,&l_1197},{&l_1197,(void*)0,(void*)0,&l_1197,(void*)0},{&l_1197,&l_1197,&l_1197,&l_1197,&l_1197},{(void*)0,&l_1197,(void*)0,(void*)0,&l_1197},{&l_1197,(void*)0,(void*)0,&l_1197,(void*)0},{&l_1197,&l_1197,&l_1197,&l_1197,&l_1197},{(void*)0,&l_1197,(void*)0,(void*)0,&l_1197}};
        short l_1199 = 0L;
        int l_1233 = (-1L);
        int * const **l_1238 = &l_1196[1][0];
        int i, j;
        for (g_123 = 0; (g_123 <= 1); g_123 += 1)
        {
            return (*g_543);
        }
    }
    l_1240--;
    return (**g_542);
}







static int * func_2(int * p_3, int * p_4, int * p_5, unsigned p_6)
{
    int *l_994 = (void*)0;
    unsigned short **l_998 = (void*)0;
    char ***l_1003 = (void*)0;
    int l_1007 = 1L;
    int l_1030 = 0x1FF327CCL;
    int l_1034[3];
    short *l_1097[4] = {&g_125[0][1][0],&g_125[0][1][0],&g_125[0][1][0],&g_125[0][1][0]};
    unsigned l_1100 = 0xFDDA86E5L;
    unsigned char *l_1101 = &g_539;
    unsigned *l_1102 = &g_71[1][1];
    unsigned char *l_1103[10] = {&g_211,&g_666,&g_211,(void*)0,(void*)0,&g_211,&g_666,&g_211,(void*)0,(void*)0};
    unsigned short l_1104[6] = {7UL,7UL,0x7A14L,7UL,7UL,0x7A14L};
    unsigned short *l_1115 = &l_1104[2];
    int ** const * const *l_1131[2][5][7] = {{{&g_953,&g_953,&g_953,&g_953,&g_953,&g_953,&g_953},{&g_953,&g_953,&g_953,&g_953,&g_953,&g_953,&g_953},{&g_953,&g_953,&g_953,&g_953,&g_953,&g_953,(void*)0},{&g_953,&g_953,&g_953,&g_953,&g_953,&g_953,&g_953},{&g_953,&g_953,&g_953,&g_953,(void*)0,&g_953,&g_953}},{{&g_953,&g_953,&g_953,&g_953,&g_953,&g_953,&g_953},{&g_953,&g_953,(void*)0,&g_953,&g_953,&g_953,(void*)0},{&g_953,&g_953,&g_953,&g_953,&g_953,&g_953,&g_953},{(void*)0,&g_953,&g_953,&g_953,&g_953,&g_953,&g_953},{&g_953,&g_953,&g_953,&g_953,&g_953,&g_953,&g_953}}};
    int ** const * const **l_1130 = &l_1131[1][2][1];
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_1034[i] = 5L;
    for (p_6 = 13; (p_6 > 32); p_6 = safe_add_func_int32_t_s_s(p_6, 2))
    {
        int **l_993 = &g_7;
        int l_1027 = (-5L);
        int l_1029 = 0L;
        int l_1033 = (-2L);
        int l_1041 = 0x27669EB8L;
        unsigned * const *l_1071 = &g_718;
        unsigned * const **l_1070 = &l_1071;
        (**g_513) = func_46(l_993, p_6, p_6);

        ;
        (****g_952) ^= 4L;
        (****g_951) = (p_6 , func_9(((****g_951) = p_4), ((*l_993) = p_3), func_14(p_5, l_994)));

        ;
        ;
    }

    ;
    ;
    (****g_952) = ((g_211 = (safe_sub_func_int8_t_s_s(((((safe_add_func_int32_t_s_s((-6L), ((+(((**g_112) != ((*l_1102) = (safe_mul_func_int8_t_s_s((safe_add_func_uint8_t_u_u(((*l_1101) |= (0UL >= ((!(safe_mul_func_int16_t_s_s((safe_add_func_int16_t_s_s((l_1030 = p_6), p_6)), p_6))) ^ (safe_mod_func_int32_t_s_s(l_1100, 0xF7A158A3L))))), p_6)), 0x02L)))) && 0xC06BL)) , 1L))) , l_1030) , p_6) || (*g_543)), p_6))) , l_1104[5]);
    for (g_175 = 0; (g_175 != 29); g_175 = safe_add_func_int8_t_s_s(g_175, 1))
    {
        unsigned short *l_1113 = &g_381;
        unsigned l_1118 = 0x23A25F20L;
        int l_1123[8];
        char *l_1136 = &g_304;
        unsigned *l_1138 = &g_74[3];
        int l_1139[1][2];
        int i, j;
        for (i = 0; i < 8; i++)
            l_1123[i] = 1L;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 2; j++)
                l_1139[i][j] = 0x0DDD3DF6L;
        }
        for (g_124 = 0; (g_124 <= 5); g_124 += 1)
        {
            unsigned short **l_1114 = &l_1113;
            int *l_1119 = &g_39;
            int *l_1120 = &g_39;
            int *l_1121 = &l_1030;
            int *l_1122 = (void*)0;
            int *l_1124 = &l_1123[1];
            int *l_1125[1][5] = {{&g_170,&g_170,&g_170,&g_170,&g_170}};
            int i, j;
            (*p_5) |= (((*l_1102) = (safe_mod_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u(func_50((*g_160), (safe_rshift_func_int8_t_s_u((((*l_1114) = l_1113) == l_1115), 4))), g_1116)), ((&p_6 != g_1117) , l_1118)))) ^ p_6);
            --g_1127;
        }
        (*p_3) &= ((l_1130 != &l_1131[1][2][1]) | ((((p_6 <= ((safe_sub_func_uint32_t_u_u(p_6, ((p_6 >= 1L) ^ (l_1123[5] > ((*l_1136) = ((((**g_542) = l_1123[2]) & (safe_lshift_func_int16_t_s_s((g_125[0][1][0] <= 0xE0L), 1))) , (-1L))))))) >= 1L)) , (void*)0) == (void*)0) ^ p_6));
        (*g_206) &= (*p_4);
        if ((*g_7))
        {
            return p_5;


        }
        else
        {
            unsigned l_1141 = 0UL;
            for (g_883 = 0; (g_883 <= 9); g_883 += 1)
            {
                int ****l_1140 = (void*)0;
                int l_1148 = 0xFB83D90CL;
                int l_1159[3][5] = {{0xB7DDAC55L,0xB7DDAC55L,0xD2601334L,0xB7DDAC55L,0xB7DDAC55L},{0xEACDB387L,0xB7DDAC55L,0xEACDB387L,0xEACDB387L,0xB7DDAC55L},{0xB7DDAC55L,0xEACDB387L,0xEACDB387L,0xB7DDAC55L,0xEACDB387L}};
                int i, j;
                for (g_892 = 0; (g_892 <= 9); g_892 += 1)
                {
                    (*g_206) |= func_50((*g_160), (l_1140 == (func_50((*g_160), p_6) , (*g_951))));
                }
                for (l_1100 = 0; (l_1100 <= 9); l_1100 += 1)
                {
                    const short l_1155 = 0x5CC4L;
                    unsigned short ***l_1156 = &g_84[2][3];
                    for (g_892 = 0; (g_892 <= 9); g_892 += 1)
                    {
                        int l_1157 = 0L;
                        int l_1158 = 0xAB2607D8L;
                        int i;
                        l_1141--;
                        (*g_7) = (safe_sub_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_u((l_1157 || l_1158), l_1141)), l_1159[2][1]));
                    }
                    (*g_7) &= func_50((*g_160), g_876);
                }
                if ((*p_4))
                    break;
            }
        }
    }
    (*p_4) = (***g_160);
    return (**g_953);


}







static int * func_9(int * p_10, int * p_11, int * p_12)
{
    int l_971[4][8] = {{(-2L),0x8A904D66L,(-2L),1L,(-2L),0x8A904D66L,(-2L),1L},{(-2L),0x8A904D66L,(-2L),1L,(-2L),0x8A904D66L,(-2L),1L},{(-2L),0x8A904D66L,(-2L),1L,(-2L),0x8A904D66L,(-2L),1L},{(-2L),0x8A904D66L,(-2L),1L,(-2L),0x8A904D66L,(-2L),1L}};
    int l_972 = 0xD3768030L;
    short *l_973 = &g_125[0][1][0];
    short *l_974[1][7][8] = {{{&g_120,&g_120,&g_120,&g_120,&g_120,&g_120,&g_120,&g_120},{&g_120,&g_120,&g_120,&g_120,&g_120,&g_120,&g_120,&g_120},{&g_120,&g_120,&g_120,&g_120,&g_120,&g_120,&g_120,&g_120},{&g_120,&g_120,&g_120,&g_120,&g_120,&g_120,&g_120,&g_120},{&g_120,&g_120,&g_120,&g_120,&g_120,&g_120,&g_120,&g_120},{&g_120,&g_120,&g_120,&g_120,&g_120,&g_120,&g_120,&g_120},{&g_120,&g_120,&g_120,&g_120,&g_120,&g_120,&g_120,&g_120}}};
    char ** const *l_975 = &g_542;
    int *l_980 = &g_170;
    int *l_981 = &l_971[3][7];
    int *l_982 = &g_538;
    int *l_983 = &l_971[2][0];
    int *l_984 = &l_971[1][1];
    int *l_985[10];
    int l_986 = 0x98E3FA00L;
    int i, j, k;
    for (i = 0; i < 10; i++)
        l_985[i] = &g_8;
    l_980 = ((g_883 || ((+1UL) > ((l_971[1][1] , ((l_971[2][2] = ((*l_973) = l_972)) <= ((&g_542 != l_975) < (((safe_mod_func_int32_t_s_s(l_972, l_972)) > (safe_mul_func_uint16_t_u_u((+((*g_952) != (void*)0)), l_972))) || l_972)))) , l_971[1][6]))) , (**g_160));

    ;
    ++g_988[3];
    return p_11;


}







static int * func_14(int * p_15, int * p_16)
{
    unsigned char l_27 = 0xB6L;
    short **l_937 = (void*)0;
    int ***l_939 = (void*)0;
    int ****l_938[9][3][3] = {{{&l_939,&l_939,&l_939},{(void*)0,&l_939,&l_939},{&l_939,&l_939,&l_939}},{{&l_939,(void*)0,(void*)0},{(void*)0,&l_939,&l_939},{&l_939,(void*)0,&l_939}},{{&l_939,&l_939,&l_939},{&l_939,&l_939,&l_939},{&l_939,&l_939,(void*)0}},{{&l_939,(void*)0,&l_939},{&l_939,(void*)0,&l_939},{&l_939,&l_939,&l_939}},{{(void*)0,&l_939,&l_939},{&l_939,&l_939,&l_939},{&l_939,(void*)0,(void*)0}},{{(void*)0,&l_939,&l_939},{&l_939,(void*)0,&l_939},{&l_939,&l_939,&l_939}},{{&l_939,&l_939,&l_939},{&l_939,&l_939,&l_939},{(void*)0,&l_939,&l_939}},{{&l_939,&l_939,(void*)0},{&l_939,&l_939,&l_939},{&l_939,&l_939,(void*)0}},{{&l_939,&l_939,&l_939},{&l_939,&l_939,&l_939},{&l_939,&l_939,&l_939}}};
    unsigned **l_948 = &g_718;
    unsigned ***l_947 = &l_948;
    int i, j, k;
    for (g_8 = (-16); (g_8 < 11); g_8++)
    {
        int *l_26 = (void*)0;
        return l_26;


    }
    (*p_15) ^= l_27;
    for (l_27 = 0; (l_27 <= 6); l_27 += 1)
    {
        unsigned char l_936 = 3UL;
        int *****l_940 = &l_938[2][0][0];
        int l_967[3];
        int i;
        for (i = 0; i < 3; i++)
            l_967[i] = 0x56435505L;
    }
    (**g_513) = p_16;

    ;
    return p_16;


}







static int * func_17(int * p_18, unsigned short p_19)
{
    int l_21 = 0x2F67D50FL;
    int *l_23 = &g_8;
    int **l_22 = &l_23;
    l_21 &= ((void*)0 == p_18);
    (*l_22) = p_18;


    return &g_8;


}







static unsigned func_33(short p_34, unsigned short p_35)
{
    int *l_36 = &g_8;
    int **l_37 = &l_36;
    int *l_38 = &g_39;
    int *l_40 = &g_8;
    int *l_41 = &g_39;
    int *l_42[8] = {&g_8,&g_8,&g_8,&g_8,&g_8,&g_8,&g_8,&g_8};
    unsigned short *l_59[9][1][8] = {{{&g_60[2][4],&g_60[2][4],&g_60[3][8],&g_60[3][8],&g_60[5][2],&g_60[5][2],&g_60[3][8],&g_60[3][8]}},{{&g_60[2][4],&g_60[2][4],&g_60[3][8],&g_60[3][8],&g_60[5][2],&g_60[5][2],&g_60[3][8],&g_60[3][8]}},{{&g_60[2][4],&g_60[2][4],&g_60[3][8],&g_60[3][8],&g_60[5][2],&g_60[5][2],&g_60[3][8],&g_60[3][8]}},{{&g_60[2][4],&g_60[2][4],&g_60[3][8],&g_60[3][8],&g_60[5][2],&g_60[5][2],&g_60[3][8],&g_60[3][8]}},{{&g_60[2][4],&g_60[2][4],&g_60[3][8],&g_60[3][8],&g_60[5][2],&g_60[5][2],&g_60[3][8],&g_60[3][8]}},{{&g_60[2][4],&g_60[2][4],&g_60[3][8],&g_60[3][8],&g_60[5][2],&g_60[5][2],&g_60[3][8],&g_60[3][8]}},{{&g_60[2][4],&g_60[2][4],&g_60[3][8],&g_60[3][8],&g_60[5][2],&g_60[5][2],&g_60[3][8],&g_60[3][8]}},{{&g_60[2][4],&g_60[2][4],&g_60[3][8],&g_60[3][8],&g_60[5][2],&g_60[5][2],&g_60[3][8],&g_60[3][8]}},{{&g_60[2][4],&g_60[2][4],&g_60[3][8],&g_60[3][8],&g_60[5][2],&g_60[5][2],&g_60[3][8],&g_60[3][8]}}};
    char l_68 = 0x30L;
    unsigned short l_69 = 0x24E1L;
    unsigned *l_70[9][2][1] = {{{(void*)0},{&g_71[1][1]}},{{(void*)0},{&g_71[1][1]}},{{(void*)0},{&g_71[1][1]}},{{(void*)0},{&g_71[1][1]}},{{(void*)0},{&g_71[1][1]}},{{(void*)0},{&g_71[1][1]}},{{(void*)0},{&g_71[1][1]}},{{(void*)0},{&g_71[1][1]}},{{(void*)0},{&g_71[1][1]}}};
    unsigned *l_72 = &g_71[1][1];
    unsigned *l_73[4] = {&g_74[2],&g_74[2],&g_74[2],&g_74[2]};
    unsigned *l_75[8][1][10] = {{{&g_74[7],&g_74[3],&g_74[5],&g_74[2],(void*)0,&g_74[5],&g_74[2],&g_74[2],&g_74[2],&g_74[2]}},{{&g_74[5],&g_74[2],&g_74[2],&g_74[2],&g_74[2],&g_74[2],&g_74[2],&g_74[2],&g_74[5],(void*)0}},{{&g_74[2],(void*)0,&g_74[3],&g_74[2],&g_74[2],&g_74[2],&g_74[2],&g_74[7],(void*)0,&g_74[2]}},{{(void*)0,&g_74[2],&g_74[5],&g_74[2],&g_74[4],&g_74[2],&g_74[2],&g_74[3],&g_74[5],&g_74[0]}},{{(void*)0,&g_74[7],&g_74[2],&g_74[2],&g_74[2],(void*)0,(void*)0,&g_74[2],&g_74[2],&g_74[2]}},{{&g_74[2],&g_74[2],(void*)0,&g_74[2],&g_74[2],&g_74[2],&g_74[2],(void*)0,&g_74[2],&g_74[2]}},{{&g_74[2],&g_74[2],(void*)0,(void*)0,&g_74[3],&g_74[2],(void*)0,&g_74[4],&g_74[2],&g_74[2]}},{{&g_74[2],&g_74[2],&g_74[2],&g_74[2],&g_74[2],(void*)0,&g_74[3],(void*)0,&g_74[3],(void*)0}}};
    unsigned *l_76 = &g_74[2];
    unsigned short *l_77 = &g_60[1][8];
    int i, j, k;
    (*l_37) = func_17(l_36, g_8);
    (*l_38) |= (*g_7);
    g_43--;
    (*g_514) = func_46(&g_7, (g_8 != func_50(func_53(g_43, (safe_lshift_func_uint16_t_u_u((p_35--), func_63((l_68 , (p_34 != ((*l_41) = l_69))), (*g_7), ((*l_76) |= ((*l_72) = g_60[3][8])), (((void*)0 == l_77) , g_28[0])))), g_8), (**l_37))), p_34);

    ;



    ;
    ;
    return (*g_718);
}







static int * func_46(int ** p_47, const short p_48, unsigned short p_49)
{
    int l_734[4][7] = {{0L,(-1L),(-10L),0xE247D404L,(-10L),(-1L),0L},{0xBB8E25EDL,0x9AF5FFA0L,0x7F51D4DBL,0x9F429735L,0xE247D404L,0L,0L},{0xE247D404L,0L,0xD1DD060CL,0xD1DD060CL,0L,0xE247D404L,0xBB8E25EDL},{(-1L),0xD1DD060CL,0x7F51D4DBL,0xBB8E25EDL,0x1959F33CL,0xE247D404L,0xE247D404L}};
    const short *l_747 = &g_497;
    const short **l_746 = &l_747;
    char *l_760[4][5][5] = {{{&g_185[3],&g_185[5],&g_185[3],&g_119,&g_185[3]},{&g_185[3],&g_185[5],&g_304,&g_119,&g_119},{&g_185[3],&g_185[5],&g_185[3],&g_185[3],&g_119},{&g_185[3],&g_185[5],&g_185[3],&g_119,&g_185[3]},{&g_185[3],&g_185[5],&g_304,&g_119,&g_119}},{{&g_185[3],&g_185[5],&g_185[3],&g_185[3],&g_119},{&g_185[3],&g_185[5],&g_185[3],&g_119,&g_185[3]},{&g_185[3],&g_185[5],&g_304,&g_119,&g_119},{&g_185[3],&g_185[5],&g_185[3],&g_185[3],&g_119},{&g_185[3],&g_185[5],&g_185[3],&g_119,&g_185[3]}},{{&g_185[3],&g_185[5],&g_304,&g_185[1],&g_185[1]},{&g_185[3],(void*)0,&g_185[3],&g_175,&g_185[1]},{&g_185[3],&g_185[3],&g_185[3],&g_185[1],&g_175},{&g_185[3],(void*)0,&g_119,&g_185[1],&g_185[1]},{&g_185[3],(void*)0,&g_185[3],&g_175,&g_185[1]}},{{&g_185[3],&g_185[3],&g_185[3],&g_185[1],&g_175},{&g_185[3],(void*)0,&g_119,&g_185[1],&g_185[1]},{&g_185[3],(void*)0,&g_185[3],&g_175,&g_185[1]},{&g_185[3],&g_185[3],&g_185[3],&g_185[1],&g_175},{&g_185[3],(void*)0,&g_119,&g_185[1],&g_185[1]}}};
    unsigned *l_762 = (void*)0;
    unsigned l_787 = 5UL;
    unsigned short ***l_851 = &g_84[2][3];
    unsigned l_884 = 0x4C8AE15CL;
    char l_891 = 0x40L;
    int * const *l_896 = &g_7;
    char l_933 = 0x0AL;
    int i, j, k;
    (*g_206) |= l_734[0][2];
    for (g_195 = 0; (g_195 < (-23)); g_195--)
    {
        unsigned char *l_742 = &g_539;
        short *l_745 = &g_125[0][1][0];
        int l_748 = (-8L);
        unsigned *l_785 = &g_43;
        int * const *l_788 = &g_206;
        int *l_795[8] = {&l_734[1][4],&l_734[1][4],&l_734[1][4],&l_734[1][4],&l_734[1][4],&l_734[1][4],&l_734[1][4],&l_734[1][4]};
        unsigned char l_859 = 0xD8L;
        unsigned *** const *l_870[5];
        unsigned char l_899 = 0x51L;
        int i;
        for (i = 0; i < 5; i++)
            l_870[i] = &g_134;
        (*g_206) &= ((p_49 || ((*l_745) = (!(safe_add_func_int32_t_s_s((safe_unary_minus_func_uint32_t_u(p_49)), (safe_lshift_func_uint8_t_u_u(((*l_742)--), 2))))))) & (l_746 != (void*)0));
        for (g_8 = 0; (g_8 >= 0); g_8 -= 1)
        {
            const unsigned short l_751 = 65526UL;
            int l_761 = 0L;
            char l_768 = 0xA6L;
            unsigned *l_800 = &g_176;
            unsigned char *l_801[4][2] = {{&g_539,&g_539},{&g_539,&g_539},{&g_539,&g_539},{&g_539,&g_539}};
            int l_834 = 0x5DDA4836L;
            unsigned ***l_845 = &g_135;
            int i, j;
            for (g_186 = 0; (g_186 <= 1); g_186 += 1)
            {
                unsigned l_754 = 0x1A880AA1L;
                int *l_763 = (void*)0;
                unsigned **l_764 = (void*)0;
                unsigned **l_765 = &g_718;
                int *l_767 = &l_748;
                int i, j, k;
            }
            l_748 &= l_768;
            g_170 |= (l_734[0][1] , 0x07BC864DL);
        }
        for (g_180 = 0; (g_180 <= 3); g_180 += 1)
        {
            short l_878 = 0x2D6EL;
            int l_882 = (-1L);
            int l_888 = 0x52808D7DL;
            int l_890[5][2][6] = {{{(-2L),9L,0x63DFEE39L,0x5CE60F55L,0x82B2FF88L,0L},{0x98902A36L,0x63DFEE39L,9L,0x5CE60F55L,(-2L),(-2L)}},{{(-2L),0x2CD86A43L,0x2CD86A43L,(-2L),1L,0x9E13D08DL},{(-1L),0x98902A36L,0L,0L,9L,0xDEB3226FL}},{{0L,0x5CE60F55L,0x7F1A144DL,0xBC071AE1L,9L,9L},{1L,0x98902A36L,0x63DFEE39L,0x82B2FF88L,(-1L),0x5CE60F55L}},{{0L,0x9E13D08DL,0L,0L,0x63DFEE39L,1L},{0L,9L,(-1L),0x9E13D08DL,9L,1L}},{{0x5CE60F55L,0x2CD86A43L,0L,0L,0x2CD86A43L,0x5CE60F55L},{9L,0x55F86B45L,0x63DFEE39L,0xDEB3226FL,0L,0x2CD86A43L}}};
            int i, j, k;
            for (g_876 = 3; (g_876 >= 0); g_876 -= 1)
            {
                char l_877 = (-9L);
                int l_880 = 0L;
                int l_881 = 0x2C77AFD7L;
                unsigned short **l_916 = &g_85;
                int l_919 = 1L;
                if ((**p_47))
                {
                    char l_879[3][8] = {{0x7DL,0x7DL,0x7DL,0x7DL,0x7DL,0x7DL,0x7DL,0x7DL},{0x7DL,0x7DL,0x7DL,0x7DL,0x7DL,0x7DL,0x7DL,0x7DL},{0x7DL,0x7DL,0x7DL,0x7DL,0x7DL,0x7DL,0x7DL,0x7DL}};
                    int l_887 = 0xDC6667E1L;
                    int l_889 = 2L;
                    int i, j;
                    (**g_513) = (g_352 , (void*)0);

                    ;
                    ++l_884;
                    g_892--;
                }
                else
                {
                    unsigned l_920[10][6][4] = {{{0x4FC40E25L,0x499855C9L,0UL,0UL},{0x63601627L,0x63601627L,7UL,4294967295UL},{1UL,0x4E2CF8A4L,0xD30AA4BBL,0xD7146F90L},{0xF985C879L,0UL,1UL,0xD30AA4BBL},{0xBB32909AL,0UL,4294967293UL,0xD7146F90L},{0UL,0x4E2CF8A4L,5UL,4294967295UL}},{{0x577BECC3L,0x63601627L,1UL,0UL},{0x5AC80815L,0x499855C9L,0x577BECC3L,0UL},{0x9FF67065L,4294967295UL,0x499855C9L,5UL},{0xBB46A3EEL,1UL,0xF985C879L,0x577BECC3L},{0x24C113D2L,4294967295UL,0xB93F4BAFL,0x9FF67065L},{4294967294UL,0xF0D5FF3FL,0xA3F0AC41L,0x24C113D2L}},{{0x4E2CF8A4L,1UL,1UL,1UL},{0xECF6B1EDL,0x4E2CF8A4L,4294967295UL,0UL},{0xD7146F90L,0xBB32909AL,0xA912FF72L,7UL},{4294967293UL,1UL,5UL,0UL},{4294967293UL,0xDCC3336CL,0xA912FF72L,1UL},{0xD7146F90L,0UL,4294967295UL,7UL}},{{0xECF6B1EDL,0x9C47EE4FL,1UL,4294967291UL},{0x4E2CF8A4L,0xE8A10BADL,0xA3F0AC41L,7UL},{4294967294UL,0xECF6B1EDL,4294967290UL,0x29B4CE2FL},{4294967295UL,1UL,7UL,0xD7146F90L},{0xA3F0AC41L,0xE05D8E75L,7UL,0xC0AF0BB6L},{0xF985C879L,4294967294UL,4294967295UL,0xDCC3336CL}},{{0xF0D5FF3FL,0UL,0UL,0xF0D5FF3FL},{4294967295UL,1UL,0xBB32909AL,0xE8A10BADL},{0x63601627L,4294967295UL,0xECF6B1EDL,0x5AC80815L},{0x9C47EE4FL,4294967290UL,0xE05D8E75L,0x5AC80815L},{7UL,4294967295UL,1UL,0xE8A10BADL},{1UL,1UL,7UL,0xF0D5FF3FL}},{{0x499855C9L,0UL,0x63601627L,0xDCC3336CL},{4294967295UL,4294967294UL,4294967293UL,0xC0AF0BB6L},{0x577BECC3L,0xE05D8E75L,0x25DF32EEL,0xD7146F90L},{0x24C113D2L,1UL,0xE8A10BADL,0x29B4CE2FL},{0UL,0xECF6B1EDL,4294967295UL,0x577BECC3L},{0UL,4294967295UL,0x4E2CF8A4L,0xECF6B1EDL}},{{0xECF6B1EDL,4294967293UL,0xECF6B1EDL,0x24C113D2L},{0xD30AA4BBL,0x5AC80815L,0xD7146F90L,4294967291UL},{0xB93F4BAFL,1UL,4294967293UL,0x5AC80815L},{4294967291UL,0x63601627L,4294967293UL,4294967295UL},{0xB93F4BAFL,1UL,0xD7146F90L,0x499855C9L},{0xD30AA4BBL,0xE8A10BADL,0xECF6B1EDL,0x9FF67065L}},{{0xECF6B1EDL,0x9FF67065L,0x4E2CF8A4L,0x25DF32EEL},{0UL,7UL,4294967294UL,0UL},{0x499855C9L,4294967294UL,4294967295UL,4294967295UL},{0x25DF32EEL,1UL,0xA3F0AC41L,1UL},{0x4FC40E25L,0xB93F4BAFL,0xF985C879L,0xBB32909AL},{0x29B4CE2FL,0x577BECC3L,0xF0D5FF3FL,0xF0D5FF3FL}},{{0xDCC3336CL,0xDCC3336CL,4294967295UL,4294967294UL},{0x9FF67065L,0xA912FF72L,0x63601627L,0UL},{0x24C113D2L,0xF0D5FF3FL,0x9C47EE4FL,0x63601627L},{4294967293UL,0xF0D5FF3FL,7UL,0UL},{0xF0D5FF3FL,0xA912FF72L,1UL,4294967294UL},{4294967295UL,0xDCC3336CL,0x499855C9L,0xF0D5FF3FL}},{{7UL,0x577BECC3L,4294967295UL,0xBB32909AL},{0UL,0xB93F4BAFL,0x577BECC3L,1UL},{4294967290UL,1UL,0x24C113D2L,4294967295UL},{0xC0AF0BB6L,4294967294UL,0UL,0UL},{0xE05D8E75L,7UL,0UL,0xC0AF0BB6L},{0xA912FF72L,0xF985C879L,0x9FF67065L,0xF985C879L}}};
                    int i, j, k;
                    for (l_882 = 3; (l_882 >= 0); l_882 -= 1)
                    {
                        int *l_895 = &l_881;
                        char ***l_917 = &g_542;
                        unsigned short l_918[8] = {0x8B2DL,0x8B2DL,0x8B2DL,0x8B2DL,0x8B2DL,0x8B2DL,0x8B2DL,0x8B2DL};
                        int i, j;
                        (*g_514) = l_895;

                        ;
                        (**l_896) = (func_50(l_896, p_48) <= ((*l_895) = ((0x1661L != (0UL != (safe_lshift_func_int16_t_s_s((l_899 > (((**g_134) == l_895) ^ (safe_rshift_func_uint16_t_u_s(p_48, 0)))), 11)))) >= 0xDE1FL)));
                        if ((**p_47))
                            break;
                        g_921 ^= ((**l_788) ^ (((!(safe_mul_func_int16_t_s_s((safe_sub_func_int32_t_s_s((safe_sub_func_int16_t_s_s(func_50(p_47, ((l_890[3][0][4] = ((&g_526[6][0] == ((safe_mod_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_s((safe_add_func_uint32_t_u_u(((*l_895) = ((((p_48 , (***g_513)) | (safe_lshift_func_int8_t_s_u((((g_84[g_876][(g_876 + 1)] = &g_85) == l_916) & p_48), (((*l_917) = &g_543) == &g_543)))) && (*l_895)) > 255UL)), (**p_47))), 1)), l_918[4])) , (void*)0)) < (*g_543))) , 0L)), p_48)), (*g_7))), l_919))) > p_49) , l_920[5][1][3]));
                    }


                }


            }
            for (g_711 = 0; (g_711 >= 46); g_711 = safe_add_func_int16_t_s_s(g_711, 6))
            {
                short l_924 = 2L;
                int l_925 = 0L;
                int l_926 = 1L;
                int l_929[7][1][7] = {{{0x83632157L,0x795B0AF3L,(-2L),0xCD567DF1L,(-3L),(-10L),(-10L)}},{{0x284FA071L,(-3L),1L,(-3L),0x284FA071L,(-1L),0x83632157L}},{{0xAD8F86C7L,0x795B0AF3L,(-10L),0x65BB4902L,0x284FA071L,0x83632157L,0x284FA071L}},{{0x8F4F1E82L,1L,1L,0x8F4F1E82L,(-3L),0x65BB4902L,0xAD8F86C7L}},{{0xAD8F86C7L,0x65BB4902L,(-3L),0x8F4F1E82L,1L,1L,0x8F4F1E82L}},{{0x284FA071L,0x83632157L,0x284FA071L,0x65BB4902L,(-10L),0x795B0AF3L,0xAD8F86C7L}},{{0x83632157L,(-1L),0x284FA071L,(-3L),1L,(-3L),0x284FA071L}}};
                int i, j, k;
                if ((**l_896))
                    break;
                ++g_930;
            }
        }
        (**l_896) = l_933;
    }
    return (*p_47);


}







static unsigned short func_50(int * const * p_51, int p_52)
{
    char l_485 = 4L;
    int l_495[5] = {1L,1L,1L,1L,1L};
    unsigned char l_575 = 0xEFL;
    unsigned short **l_583 = &g_85;
    int l_600 = 0xE87D0A12L;
    int ****l_684 = (void*)0;
    unsigned l_686[4];
    int i;
    for (i = 0; i < 4; i++)
        l_686[i] = 1UL;
    for (g_39 = 0; (g_39 == (-6)); --g_39)
    {
        unsigned char *l_478 = &g_28[3];
        int l_481 = 0x11ABA56DL;
        unsigned char *l_482[9][3] = {{&g_211,&g_211,(void*)0},{&g_211,(void*)0,&g_211},{&g_211,&g_211,&g_211},{&g_211,&g_211,(void*)0},{&g_211,(void*)0,&g_211},{&g_211,&g_211,&g_211},{&g_211,&g_211,(void*)0},{&g_211,(void*)0,&g_211},{&g_211,&g_211,&g_211}};
        int l_483 = 0x510A0183L;
        int l_484 = 9L;
        short *l_494 = &g_123;
        short l_496 = 0xDC08L;
        int *l_498 = &g_467;
        unsigned * const *l_501 = &g_136;
        int l_638 = 0xB669FDC6L;
        int l_693 = 0x1F4ECCB2L;
        unsigned short l_731 = 1UL;
        int *l_733 = &g_170;
        int i, j;
        (*l_498) &= (safe_rshift_func_int8_t_s_u(((safe_rshift_func_uint8_t_u_u(((((*l_478)--) && p_52) >= (--g_211)), 1)) >= g_125[3][3][2]), (((safe_mul_func_uint8_t_u_u(g_43, ((((g_497 = (safe_sub_func_uint8_t_u_u(((l_485 && (safe_mod_func_uint16_t_u_u((p_52 | (l_495[0] = (((*l_494) = l_484) && (l_485 && ((!p_52) <= g_352))))), l_496))) , l_485), p_52))) < g_60[3][8]) , p_52) ^ 0x56L))) >= l_483) <= l_496)));
    }
    return p_52;
}







static int * const * func_53(int p_54, const unsigned p_55, unsigned short p_56)
{
    unsigned char l_402 = 0UL;
    unsigned char *l_403 = &g_28[6];
    short ***l_404 = (void*)0;
    short ****l_405 = &l_404;
    int **l_406 = (void*)0;
    int **l_407 = &g_206;
    unsigned **l_412 = (void*)0;
    unsigned short *l_419 = &g_352;
    unsigned l_457 = 0x79B65197L;
    unsigned l_458[2][2];
    unsigned l_463 = 0xE28A3B6BL;
    const int l_464 = 0xCA5685C0L;
    int *l_465 = &g_170;
    int *l_466[3];
    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
            l_458[i][j] = 0xC0E8AA3BL;
    }
    for (i = 0; i < 3; i++)
        l_466[i] = &g_39;
    (*l_407) = func_17(&g_8, l_402);

    ;
    if ((safe_mul_func_int8_t_s_s((p_56 || p_56), (**l_407))))
    {
        unsigned char l_426 = 0x83L;
        short *l_431 = &g_349;
        char *l_432 = &g_119;
        int *l_433 = &g_170;
        int *l_440 = &g_39;
        unsigned short l_441 = 0xBD0DL;
        short ***l_446 = &g_294[3][0][5];
        (*l_433) ^= (p_54 >= (safe_add_func_uint8_t_u_u(((p_55 < (safe_mul_func_uint8_t_u_u((safe_mod_func_int32_t_s_s((*g_206), l_426)), (safe_mul_func_int8_t_s_s(((*l_432) = (((**l_407) == (**l_407)) , (safe_add_func_int16_t_s_s((p_55 == (((0L >= (((*l_431) ^= l_426) | 1L)) != p_55) , p_54)), p_56)))), g_180))))) , p_54), (-1L))));
        (*l_407) = l_433;

        ;
        (*l_440) = ((safe_sub_func_uint16_t_u_u((*l_440), 0x522FL)) && p_54);
        (*l_440) |= (g_8 , (safe_rshift_func_uint16_t_u_s((safe_add_func_uint32_t_u_u(0x63731AD5L, (((void*)0 == l_446) >= ((void*)0 != &g_171)))), ((*l_431) = (0x298FL || (((g_186 , &g_211) == (void*)0) > (*l_433)))))));
    }
    else
    {
        unsigned l_459 = 0x27FEC2BBL;
        int l_460 = 0x62F34FC1L;
        l_460 = (g_170 = (safe_mod_func_int16_t_s_s(p_54, l_459)));
    }

    ;
    (*l_465) &= l_464;
    g_469++;
    return &g_7;


}







static unsigned short func_63(unsigned char p_64, int p_65, const unsigned p_66, const unsigned p_67)
{
    unsigned l_78[8] = {0x659E808EL,4294967293UL,0x659E808EL,4294967293UL,0x659E808EL,4294967293UL,0x659E808EL,4294967293UL};
    unsigned *l_82 = &g_71[1][1];
    unsigned **l_81[7][1];
    unsigned short *l_96 = (void*)0;
    int l_129 = 1L;
    int l_130 = 0x512332C8L;
    short l_153 = (-4L);
    int l_183 = 0x23547ADAL;
    int l_184 = 9L;
    unsigned char l_359 = 0xEBL;
    int ***l_363[5] = {&g_112,&g_112,&g_112,&g_112,&g_112};
    unsigned char l_378 = 1UL;
    unsigned l_383 = 0x519B21BCL;
    int i, j;
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 1; j++)
            l_81[i][j] = &l_82;
    }
    if (((p_65 , 0xEE8DL) || l_78[2]))
    {
        unsigned short ***l_86 = &g_84[0][7];
        int *l_87[8][5] = {{&g_8,&g_8,&g_8,(void*)0,(void*)0},{(void*)0,(void*)0,&g_39,(void*)0,(void*)0},{(void*)0,(void*)0,&g_8,&g_8,&g_8},{&g_39,(void*)0,&g_39,&g_39,&g_39},{(void*)0,&g_8,(void*)0,(void*)0,&g_8},{(void*)0,&g_39,&g_39,&g_39,(void*)0},{&g_8,(void*)0,(void*)0,&g_8,(void*)0},{&g_39,&g_39,&g_39,(void*)0,&g_39}};
        int i, j;
        for (p_65 = 0; (p_65 <= (-18)); --p_65)
        {
            unsigned ***l_83 = &l_81[5][0];
            (*l_83) = l_81[5][0];
            return p_66;
        }
        (*l_86) = g_84[2][3];
        g_39 ^= (l_78[2] , (*g_7));
        return p_65;
    }
    else
    {
        unsigned short **l_97 = &g_85;
        int l_98 = 1L;
        int **l_99 = &g_7;
        int ***l_100 = &l_99;
        int *l_101 = &g_39;
        const unsigned l_102 = 4294967295UL;
        int *l_103 = &l_98;
        (*l_103) = (safe_mul_func_uint8_t_u_u(((safe_rshift_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_s(0xA8BFL, ((safe_mod_func_uint32_t_u_u((((*l_97) = l_96) != l_96), (p_65 || (((+l_98) || p_65) || ((*l_101) = (l_98 , (((*l_100) = l_99) != &g_7))))))) , p_64))) , g_28[6]), l_102)) | 0x6920L), p_64));

        ;
        for (p_64 = 0; (p_64 <= 7); p_64 += 1)
        {
            int i;
            return g_74[p_64];
        }
        (*l_101) |= ((safe_lshift_func_uint16_t_u_s(p_65, g_71[2][2])) | ((void*)0 == &l_97));
    }

    ;
    if ((*g_7))
    {
        short l_106 = 0x0CAAL;
        int *l_107[10][8][3] = {{{(void*)0,(void*)0,&g_8},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&g_8},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&g_8},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&g_8}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&g_8},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&g_8},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,&g_8,(void*)0}},{{(void*)0,&g_8,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,&g_8,(void*)0},{(void*)0,&g_8,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,&g_8,(void*)0},{(void*)0,&g_8,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,&g_8,(void*)0},{(void*)0,&g_8,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,&g_8,(void*)0},{(void*)0,&g_8,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,&g_8,(void*)0},{(void*)0,&g_8,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,&g_8,(void*)0},{&g_8,(void*)0,&g_8},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{&g_8,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{&g_8,(void*)0,&g_8},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{&g_8,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{&g_8,(void*)0,&g_8},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{&g_8,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{&g_8,(void*)0,&g_8},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{&g_8,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{&g_8,(void*)0,&g_8},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{&g_8,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{&g_8,(void*)0,&g_8}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{&g_8,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{&g_8,(void*)0,&g_8},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}}};
        short **l_140 = (void*)0;
        short l_152 = 0xE0D5L;
        unsigned l_161 = 0xF65977C5L;
        unsigned l_231 = 4294967286UL;
        int l_241 = (-7L);
        const short * const l_291[8][7] = {{&g_120,&l_153,&l_153,&g_120,&l_153,&l_153,&g_120},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_120,&g_120,&l_106,&g_120,&g_120,&l_106,&g_120},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&l_153,&g_120,&l_153,&l_153,&g_120,&l_153,&l_153},{(void*)0,(void*)0,&g_125[5][2][0],(void*)0,(void*)0,&g_125[5][2][0],(void*)0},{&g_120,&l_153,&l_153,&g_120,&l_153,&l_153,&g_120},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
        const short * const *l_290 = &l_291[1][3];
        unsigned l_382 = 4294967286UL;
        short ***l_391 = &g_294[3][0][4];
        int i, j, k;
        for (p_65 = 0; p_65 < 8; p_65 += 1)
        {
            g_74[p_65] = 4294967290UL;
        }
        p_65 &= l_106;
        if ((*g_7))
        {
            int **l_108[7][3] = {{&l_107[7][5][1],&l_107[7][5][1],(void*)0},{&l_107[7][5][1],&l_107[7][5][1],(void*)0},{&l_107[7][5][1],&l_107[7][5][1],(void*)0},{&l_107[7][5][1],&l_107[7][5][1],(void*)0},{&l_107[7][5][1],&l_107[7][5][1],(void*)0},{&l_107[7][5][1],&l_107[7][5][1],(void*)0},{&l_107[7][5][1],&l_107[7][5][1],(void*)0}};
            unsigned ***l_133 = &l_81[0][0];
            unsigned l_156 = 9UL;
            unsigned l_193 = 0x39C2C3B8L;
            char l_303 = (-1L);
            unsigned char l_366 = 1UL;
            unsigned short *l_388 = &g_60[3][8];
            int i, j;
            if ((*g_7))
            {
                int ***l_109 = (void*)0;
                int **l_111 = &g_7;
                int ***l_110[10][6] = {{&l_111,&l_111,&l_111,&l_111,&l_111,&l_111},{&l_111,&l_111,&l_111,&l_111,&l_111,&l_111},{&l_111,&l_111,&l_111,&l_111,&l_111,&l_111},{&l_111,&l_111,&l_111,&l_111,&l_111,&l_111},{&l_111,&l_111,&l_111,&l_111,&l_111,&l_111},{&l_111,&l_111,&l_111,&l_111,&l_111,&l_111},{&l_111,&l_111,&l_111,&l_111,&l_111,&l_111},{&l_111,&l_111,&l_111,&l_111,&l_111,&l_111},{&l_111,&l_111,&l_111,&l_111,&l_111,&l_111},{&l_111,&l_111,&l_111,&l_111,&l_111,&l_111}};
                short l_137 = (-1L);
                int i, j;
                g_112 = (l_108[0][0] = &l_107[7][5][1]);

                ;
                for (p_64 = (-25); (p_64 != 25); p_64 = safe_add_func_uint32_t_u_u(p_64, 6))
                {
                    char *l_118[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                    short *l_121 = &g_120;
                    const int l_122 = (-1L);
                    int i;
                    (*g_113) &= (safe_sub_func_int32_t_s_s((*g_7), (p_66 >= (g_120 |= 9L))));
                    if (((*g_7) == (((p_64 != (p_64 | ((*l_121) ^= g_119))) | l_122) , (p_65 || p_65))))
                    {
                        unsigned char l_126 = 0x3EL;
                        int l_138[5][8][4] = {{{0x393FB47EL,0xA08B2B8BL,(-1L),0x5FEB66E7L},{0xDCC771BEL,0L,0x455E0D3EL,0xE940A494L},{0xDCC771BEL,9L,(-1L),(-1L)},{0x393FB47EL,0xE940A494L,1L,0xF82EC59DL},{0xA08B2B8BL,(-1L),(-1L),0L},{(-1L),9L,9L,(-1L)},{1L,0xDCC771BEL,0x6CF207F5L,0x5FEB66E7L},{(-7L),(-5L),(-1L),0xA08B2B8BL}},{{1L,(-7L),0xAB6B2BBDL,0xA08B2B8BL},{0x393FB47EL,(-5L),0xF82EC59DL,0x5FEB66E7L},{0L,0xDCC771BEL,(-1L),0x5FEB66E7L},{9L,0x29DE2F31L,0x7C1BE544L,0x6CF207F5L},{(-1L),0x5FEB66E7L,(-1L),0x3C507C22L},{1L,(-1L),0xE940A494L,9L},{(-1L),0x29DE2F31L,0x18804D59L,(-1L)},{0x455E0D3EL,0x6CF207F5L,0x18804D59L,0x7C1BE544L}},{{(-1L),0x393FB47EL,0xE940A494L,1L},{1L,0x18804D59L,(-1L),0xAB6B2BBDL},{(-1L),0xAB6B2BBDL,0x7C1BE544L,0x7C1BE544L},{9L,9L,(-1L),0xF82EC59DL},{0x6CF207F5L,0x29DE2F31L,0x3C507C22L,(-7L)},{(-1L),0xF82EC59DL,(-7L),0x3C507C22L},{0xAB6B2BBDL,0xF82EC59DL,0xE940A494L,(-7L)},{0xF82EC59DL,0x29DE2F31L,0x0CDDF05FL,0xF82EC59DL}},{{0x455E0D3EL,9L,0x29DE2F31L,0x7C1BE544L},{0x5FEB66E7L,0xAB6B2BBDL,0xE940A494L,0xAB6B2BBDL},{0x393FB47EL,0x18804D59L,0x455E0D3EL,1L},{(-1L),0x393FB47EL,0xE113F5BBL,0x7C1BE544L},{(-7L),0x6CF207F5L,(-1L),(-1L)},{(-7L),0x29DE2F31L,0xE113F5BBL,9L},{(-1L),(-1L),0x455E0D3EL,0x3C507C22L},{0x393FB47EL,0x5FEB66E7L,0xE940A494L,0x6CF207F5L}},{{0x5FEB66E7L,0x29DE2F31L,0x29DE2F31L,0x5FEB66E7L},{0x455E0D3EL,(-7L),0x0CDDF05FL,0x7C1BE544L},{0xF82EC59DL,1L,0xDCC771BEL,0x5FEB66E7L},{(-1L),(-1L),0xE113F5BBL,0x5FEB66E7L},{0x7C1BE544L,0xF82EC59DL,0x29DE2F31L,0x0CDDF05FL},{1L,0x393FB47EL,0L,0x6CF207F5L},{0xAB6B2BBDL,(-7L),0x0CDDF05FL,1L},{0x7C1BE544L,0x6CF207F5L,0x7C1BE544L,0x29DE2F31L}}};
                        char l_139 = 0x87L;
                        int i, j, k;
                        l_126++;
                        l_130 = (l_129 = l_126);
                        l_138[2][1][1] &= (safe_sub_func_int32_t_s_s((g_8 & (l_133 == g_134)), l_137));
                        l_139 = l_122;
                    }
                    else
                    {
                        short ***l_141 = &l_140;
                        char *l_146 = (void*)0;
                        (*l_141) = l_140;
                        (*g_113) = (+((safe_sub_func_int32_t_s_s((p_67 | p_66), p_67)) <= (p_66 & (safe_sub_func_uint32_t_u_u(p_67, ((void*)0 != l_146))))));
                        if ((*g_113))
                            break;
                    }
                    (*g_113) |= l_122;
                    (*g_113) = p_67;
                }
                if ((safe_rshift_func_int8_t_s_s((0x879B0709L < (safe_sub_func_int32_t_s_s(((safe_unary_minus_func_uint16_t_u(0xEAB6L)) == ((0UL && (l_152 || (l_153 || 0x346CL))) , ((safe_rshift_func_int8_t_s_s(p_64, 5)) , ((*l_82) = (l_156 , p_66))))), p_66))), p_64)))
                {
                    unsigned short l_164 = 0x5DAEL;
                    l_107[7][5][1] = l_107[1][4][2];
                    for (g_39 = 15; (g_39 < (-23)); g_39 = safe_sub_func_uint16_t_u_u(g_39, 6))
                    {
                        int ****l_159[5] = {&l_110[3][4],&l_110[3][4],&l_110[3][4],&l_110[3][4],&l_110[3][4]};
                        int i;
                        p_65 = ((g_160 = &l_111) == (p_67 , &l_111));

                        ;
                        l_129 = 0xD441EE8AL;
                        if (l_161)
                            continue;
                        p_65 = (((safe_mod_func_uint32_t_u_u(p_66, (l_78[5] , p_65))) == (p_64 == ((*g_113) || l_164))) == (safe_unary_minus_func_uint8_t_u(g_125[5][2][2])));
                    }

                    ;
                }
                else
                {
                    int l_167 = (-1L);
                    int l_168 = (-3L);
                    int l_169[5];
                    int *l_179 = &l_169[4];
                    int i;
                    for (i = 0; i < 5; i++)
                        l_169[i] = 0x11968FDBL;
                    for (p_64 = 0; (p_64 <= 3); p_64 += 1)
                    {
                        char l_166 = 0x54L;
                        int l_174 = (-8L);
                        --g_171;
                        --g_176;
                        l_179 = &p_65;

                        ;
                        --g_180;
                    }

                    ;
                    ++g_186;
                    (*g_113) &= 2L;
                }

                ;
                (*g_113) ^= (g_74[1] != g_176);
            }
            else
            {
                unsigned short l_192[6][9] = {{0x8751L,0x9AD9L,65535UL,0x1135L,65533UL,0x1135L,65535UL,0x9AD9L,0x8751L},{0UL,0x9AD9L,7UL,0xB17AL,65527UL,0x3B6AL,6UL,7UL,65535UL},{65535UL,65527UL,0x962FL,65532UL,1UL,65535UL,65533UL,65528UL,65528UL},{0UL,65527UL,6UL,65528UL,6UL,65527UL,0UL,0xA11AL,65528UL},{0x8751L,1UL,0x1135L,0x9AD9L,0xB17AL,0xF440L,1UL,0x747DL,65535UL},{0xF440L,0xB17AL,0x9AD9L,0x1135L,1UL,0x8751L,0xA11AL,0xA11AL,0x8751L}};
                int l_196 = 0x1FD06F51L;
                int l_230 = 0x604C6C6EL;
                char *l_244 = &g_185[3];
                char l_253 = 0xBCL;
                int *l_268 = (void*)0;
                char *l_282 = &l_253;
                unsigned short *l_283 = &g_186;
                short ***l_289[1];
                int l_325 = 0x875BE9CCL;
                short l_362 = 0x7695L;
                int i, j;
                for (i = 0; i < 1; i++)
                    l_289[i] = (void*)0;
                if ((*g_7))
                {
                    int l_189 = (-1L);
                    int ****l_194 = &g_160;
                    int l_197 = 3L;
                    p_65 = (l_189 < (safe_rshift_func_int16_t_s_u((l_192[2][4] >= ((**g_112) , l_193)), ((l_194 == &g_160) | p_66))));
                    --g_198;
                }
                else
                {
                    unsigned l_203 = 1UL;
                    char l_215[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_215[i] = 0x75L;
                    for (p_64 = 0; (p_64 > 16); p_64 = safe_add_func_int8_t_s_s(p_64, 1))
                    {
                        --l_203;
                        g_206 = ((*g_112) = (*g_112));

                        ;
                    }

                    ;
                    if ((safe_sub_func_int16_t_s_s((~(p_66 && 0x29ECL)), p_65)))
                    {
                        short l_209 = 0L;
                        int l_210[6] = {0x7171A2D9L,0xCA548116L,0x7171A2D9L,0x7171A2D9L,0xCA548116L,0x7171A2D9L};
                        int i;
                        (*g_206) &= (-5L);
                        --g_211;
                    }
                    else
                    {
                        unsigned l_214 = 0x67165D71L;
                        unsigned short *l_216 = &l_192[2][4];
                        (***g_160) &= (l_214 < p_67);
                        (***g_160) = (l_203 >= ((***l_133) = (((l_215[0] >= l_215[0]) , (p_65 < 0xB6B90FCDL)) ^ ((((g_170 != ((((*l_216) = p_65) ^ p_65) && l_215[0])) == g_60[3][8]) , p_66) , p_67))));
                    }
                    (**g_112) ^= (safe_unary_minus_func_int16_t_s((safe_lshift_func_int8_t_s_s(g_74[4], (g_120 , l_215[0])))));
                    l_196 &= (&p_65 != &p_65);
                }

                ;
                for (g_176 = 17; (g_176 >= 43); ++g_176)
                {
                    unsigned short *l_227[9] = {&g_60[2][1],&g_198,&g_60[2][1],&g_198,&g_60[2][1],&g_198,&g_60[2][1],&g_198,&g_60[2][1]};
                    int l_228 = 6L;
                    int l_229 = 0xAE75F934L;
                    unsigned char *l_234 = &g_211;
                    int *l_271 = &l_228;
                    int i;
                    if ((safe_rshift_func_uint8_t_u_s(((((*l_82)++) , (*g_112)) != (l_107[2][0][2] = func_17(func_17(&p_65, p_65), (l_231++)))), (((*l_234) = l_161) < (safe_add_func_int32_t_s_s((-1L), (safe_add_func_int16_t_s_s(g_180, (safe_sub_func_uint32_t_u_u((l_241 = ((void*)0 != l_96)), 0x291E4BA6L))))))))))
                    {
                        char **l_245 = (void*)0;
                        char **l_246 = &l_244;
                        int l_254 = 0x9D6CE19EL;
                        (**g_112) = (safe_mul_func_int16_t_s_s((((((l_192[4][6] < ((***g_160) | (p_65 >= ((&g_185[4] != ((*l_246) = l_244)) > (safe_lshift_func_int8_t_s_s(p_66, 1)))))) == ((safe_add_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(l_253, (~((*l_234) = p_66)))), (l_228 > l_192[3][4]))) & l_254)) & p_67) , p_65) && (***g_160)), g_175));
                    }
                    else
                    {
                        int l_257[5];
                        int i;
                        for (i = 0; i < 5; i++)
                            l_257[i] = 0xEE233FA2L;
                        if (p_64)
                            break;
                        (**g_112) &= (safe_mod_func_uint8_t_u_u(p_67, l_257[4]));
                        (***g_160) = (((safe_mul_func_int8_t_s_s(l_192[4][8], (2UL | (safe_add_func_uint16_t_u_u((l_196 = (p_67 , (l_228 ^ g_60[1][9]))), g_124))))) >= (*g_206)) > ((safe_mul_func_int16_t_s_s((((p_65 & ((((*g_206) & l_229) >= 0xB987L) < l_229)) > l_228) , 0x27DFL), p_67)) , (***g_160)));
                    }
                    for (g_198 = (-25); (g_198 > 41); g_198 = safe_add_func_int16_t_s_s(g_198, 5))
                    {
                        (*g_113) = ((void*)0 == &p_64);
                        l_230 = (p_67 , (**g_112));
                        p_65 = (-10L);
                        (*g_206) ^= ((safe_lshift_func_uint8_t_u_u(p_67, ((*l_234) = 1UL))) & l_153);
                    }
                    for (g_195 = 6; (g_195 >= 0); g_195 -= 1)
                    {
                        int i;
                        l_268 = &p_65;

                        ;
                        if (l_78[g_195])
                            break;
                        p_65 = (safe_add_func_uint16_t_u_u((*l_268), (p_67 <= p_64)));
                        l_271 = (**g_160);

                        ;
                    }

                    ;
                    for (l_241 = 0; (l_241 >= (-19)); --l_241)
                    {
                        return p_65;
                    }
                }

                ;
                if (((*g_113) &= ((safe_lshift_func_uint16_t_u_s(((*l_283) = (g_123 > (p_67 , (((*l_282) &= ((*l_244) &= ((safe_mod_func_int16_t_s_s((safe_mod_func_int16_t_s_s((-1L), ((safe_lshift_func_int16_t_s_u(g_71[1][0], 6)) , p_66))), p_65)) == 0L))) , l_130)))), 15)) && ((((l_183 = 0x5CL) == p_65) && (-1L)) ^ 65535UL))))
                {
                    for (g_171 = 0; (g_171 >= 20); g_171 = safe_add_func_int16_t_s_s(g_171, 8))
                    {
                        (*g_206) = (*g_7);
                        (*g_113) = (***g_160);
                    }
                    l_183 ^= ((*g_206) = p_65);
                    if ((*g_113))
                    {
                        char l_288 = 0L;
                        const short * const **l_292 = (void*)0;
                        const short * const **l_293 = &l_290;
                        (***g_160) |= (((p_67 | g_176) , (safe_add_func_uint32_t_u_u(l_288, (g_176 ^= ((p_66 != (p_65 == ((*l_283) = p_65))) && (((***l_133) = p_67) <= (l_289[0] == ((((*l_293) = l_290) != g_294[1][0][0]) , l_289[0])))))))) < l_78[5]);
                    }
                    else
                    {
                        unsigned char l_302 = 1UL;
                        (**g_112) ^= (safe_mod_func_uint32_t_u_u((safe_mul_func_int16_t_s_s(((safe_rshift_func_int16_t_s_s((l_302 = (p_66 | ((*g_7) , (g_120 & g_71[1][2])))), 10)) , l_302), l_303)), p_64));
                    }
                    ++g_305;
                }
                else
                {
                    unsigned l_320 = 0xF768B3B2L;
                    int l_342[6] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
                    int i;
                    for (g_171 = 0; (g_171 <= 7); g_171 += 1)
                    {
                        int l_311[6];
                        int i;
                        for (i = 0; i < 6; i++)
                            l_311[i] = (-1L);
                        l_325 = (safe_unary_minus_func_uint8_t_u(((((*l_282) = (safe_mul_func_int8_t_s_s((l_311[2] = g_74[g_171]), ((safe_lshift_func_int16_t_s_s((safe_sub_func_int32_t_s_s((safe_add_func_int16_t_s_s((((((safe_mul_func_int16_t_s_s(p_65, (((l_320 , (*g_134)) == (void*)0) | ((void*)0 != (*g_135))))) , ((safe_add_func_uint16_t_u_u(l_130, (safe_lshift_func_int16_t_s_u((((*g_206) = (p_65 , g_74[g_171])) >= p_64), l_78[4])))) , (-2L))) | l_78[0]) != 0xFD6BL) != p_67), l_320)), 0x3DA1E99BL)), p_66)) > 1L)))) == 0x63L) ^ (-1L))));
                        (**g_112) = (safe_sub_func_uint16_t_u_u((((*l_282) = (0x8753A326L > (p_65 == g_71[1][0]))) & (safe_add_func_uint32_t_u_u(g_74[g_171], (*g_113)))), (safe_sub_func_int16_t_s_s((l_153 >= 0x32L), 0x75E0L))));
                        l_311[2] = (((safe_mod_func_uint8_t_u_u((((((safe_mul_func_uint16_t_u_u((((safe_lshift_func_uint16_t_u_s(((*l_283) = p_67), 8)) < ((2L != (p_66 , ((((safe_mul_func_int8_t_s_s(((l_342[4] = (l_130 |= (g_195 > g_211))) && (((!g_124) , (((void*)0 == &l_153) > g_198)) , p_64)), g_224)) & p_64) , &l_268) == (void*)0))) >= p_64)) == 0x84961C32L), p_66)) ^ 0UL) < 0L) & l_153) , g_198), p_67)) > l_129) >= l_320);
                    }
                    for (g_120 = 0; (g_120 > (-4)); g_120--)
                    {
                        int *l_345 = &l_184;
                        l_345 = &p_65;

                        ;
                        (***g_160) ^= (((*l_282) &= g_125[1][0][1]) & g_28[5]);
                    }
                    (*g_113) &= ((p_64 || p_64) | l_78[2]);
                }
                if (p_65)
                {
                    unsigned l_346 = 0xE936421BL;
                    int l_350 = 9L;
                    int l_351[2][8] = {{0x22AA32CBL,0x05339CE0L,0x05339CE0L,0x22AA32CBL,(-4L),0x22AA32CBL,0x05339CE0L,0x05339CE0L},{0x05339CE0L,(-4L),0x3FA38C4AL,0x3FA38C4AL,(-4L),0x05339CE0L,(-4L),0x3FA38C4AL}};
                    int i, j;
                    --l_346;
                    --g_352;
                }
                else
                {
                    short l_364 = 1L;
                    p_65 = ((***g_160) = l_153);
                    (**g_112) = (((l_230 = ((safe_add_func_int8_t_s_s(((((safe_mul_func_int16_t_s_s((+(l_130 = (l_153 && l_359))), p_66)) < (safe_sub_func_uint8_t_u_u(g_74[2], ((((*l_283) = l_362) & l_78[0]) || p_66)))) > (((l_364 = (l_363[1] != &g_112)) , &g_294[1][0][0]) != (void*)0)) <= p_64), 0xDFL)) == g_171)) > p_65) || p_66);
                }
            }

            ;

            ;
            if ((((*g_7) <= ((***l_133) |= p_67)) <= (*g_7)))
            {
                int *l_365 = &l_183;
                l_365 = (void*)0;

                ;
            }
            else
            {
                short l_387 = 0x15E4L;
                p_65 = p_65;
                for (l_161 = 0; (l_161 <= 2); l_161 += 1)
                {
                    int l_386 = 6L;
                    p_65 |= 0L;
                    if (p_66)
                        break;
                    for (l_129 = 0; (l_129 <= 2); l_129 += 1)
                    {
                        l_366++;
                    }
                    for (g_305 = 0; (g_305 <= 5); g_305 += 1)
                    {
                        unsigned *l_371 = (void*)0;
                        unsigned *l_372 = &g_171;
                        unsigned char *l_373 = &l_359;
                        char *l_384 = &l_303;
                        short *l_385 = &l_153;
                        int i, j;
                        (*g_112) = func_17((*g_112), (g_60[g_305][(l_161 + 7)] = ((l_386 = ((*l_385) = (safe_rshift_func_uint8_t_u_s(g_71[l_161][l_161], ((*l_384) = ((((((((*l_372) = p_64) , ((*l_373)++)) , p_66) ^ ((safe_sub_func_uint32_t_u_u(l_378, ((safe_sub_func_uint32_t_u_u((p_67 <= g_381), (l_382 != ((g_352 <= g_39) , p_66)))) > g_71[l_161][l_161]))) & 0UL)) & 0x52DF5830L) , p_67) , l_383)))))) , l_387)));
                    }
                    for (l_382 = 0; (l_382 <= 2); l_382 += 1)
                    {
                        (*g_206) = 0x95C9F632L;
                    }
                }

                ;
            }

            ;
            p_65 &= ((--(*l_388)) | ((*g_113) <= (l_391 == ((*g_7) , &g_294[0][0][0]))));
        }
        else
        {
            (**g_160) = (void*)0;

            ;
        }

        ;
        ;

        ;
    }
    else
    {
        unsigned char l_397 = 0x36L;
        const int *l_400[3][9][5] = {{{&g_8,&g_8,&l_183,&g_8,&l_183},{&g_8,&g_8,&g_8,&g_170,(void*)0},{&l_129,&l_184,&g_8,(void*)0,&g_8},{(void*)0,&g_8,&l_183,&g_8,(void*)0},{&g_170,&l_184,(void*)0,(void*)0,&g_8},{&g_170,&g_8,&g_8,(void*)0,(void*)0},{(void*)0,&g_8,(void*)0,&l_184,&g_8},{&l_129,(void*)0,&g_8,&l_184,(void*)0},{&g_8,&g_8,(void*)0,(void*)0,&g_8}},{{&g_8,&l_130,&g_8,(void*)0,(void*)0},{&g_8,&l_130,(void*)0,&g_8,&l_183},{(void*)0,&g_8,&g_8,(void*)0,&g_8},{&g_8,(void*)0,(void*)0,&g_170,&g_8},{&g_8,&g_8,&l_183,&g_8,&l_183},{&g_8,&g_8,&g_8,(void*)0,&g_8},{&g_8,&g_8,&l_129,(void*)0,&l_130},{&g_170,&l_129,&g_8,&l_129,&g_170},{(void*)0,&g_8,&g_8,&g_170,&l_183}},{{(void*)0,&l_183,&l_130,&l_184,&l_184},{&g_170,(void*)0,&g_170,&g_8,&l_183},{&g_8,&l_184,&l_183,&g_8,&g_170},{&l_183,&l_130,&l_184,&l_184,&l_130},{&l_130,(void*)0,&l_183,&g_170,&g_8},{(void*)0,(void*)0,&g_170,&l_129,&g_8},{(void*)0,&l_130,&l_130,(void*)0,&l_129},{(void*)0,&l_184,&g_8,(void*)0,&l_129},{&l_130,(void*)0,&g_8,&l_183,&g_8}}};
        const int **l_401 = &l_400[2][8][2];
        int i, j, k;
        for (g_176 = 0; (g_176 <= 5); g_176 += 1)
        {
            int i;
            (*g_206) = (safe_mod_func_uint32_t_u_u(g_185[g_176], (((-1L) != l_78[(g_176 + 1)]) | 0xD939L)));
            for (g_349 = 2; (g_349 <= 7); g_349 += 1)
            {
                unsigned l_394 = 4294967290UL;
                int i;
                l_394--;
                for (l_153 = 0; (l_153 <= 0); l_153 += 1)
                {
                    int i;
                    (**g_112) &= (l_78[g_349] <= l_78[g_349]);
                }
                (**g_112) = (0x734E106AL | l_78[(g_176 + 2)]);
                (*g_112) = &p_65;

                ;
            }
            if (g_185[g_176])
                break;
            l_397++;
        }

        ;
        (*l_401) = l_400[0][0][0];
        (*g_113) ^= 0L;
    }

    ;


    ;
    return p_66;


}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_8, "g_8", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_28[i], "g_28[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_39, "g_39", print_hash_value);
    transparent_crc(g_43, "g_43", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(g_60[i][j], "g_60[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_71[i][j], "g_71[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_74[i], "g_74[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_119, "g_119", print_hash_value);
    transparent_crc(g_120, "g_120", print_hash_value);
    transparent_crc(g_123, "g_123", print_hash_value);
    transparent_crc(g_124, "g_124", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_125[i][j][k], "g_125[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_170, "g_170", print_hash_value);
    transparent_crc(g_171, "g_171", print_hash_value);
    transparent_crc(g_175, "g_175", print_hash_value);
    transparent_crc(g_176, "g_176", print_hash_value);
    transparent_crc(g_180, "g_180", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_185[i], "g_185[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_186, "g_186", print_hash_value);
    transparent_crc(g_195, "g_195", print_hash_value);
    transparent_crc(g_198, "g_198", print_hash_value);
    transparent_crc(g_211, "g_211", print_hash_value);
    transparent_crc(g_224, "g_224", print_hash_value);
    transparent_crc(g_304, "g_304", print_hash_value);
    transparent_crc(g_305, "g_305", print_hash_value);
    transparent_crc(g_349, "g_349", print_hash_value);
    transparent_crc(g_352, "g_352", print_hash_value);
    transparent_crc(g_381, "g_381", print_hash_value);
    transparent_crc(g_467, "g_467", print_hash_value);
    transparent_crc(g_468, "g_468", print_hash_value);
    transparent_crc(g_469, "g_469", print_hash_value);
    transparent_crc(g_497, "g_497", print_hash_value);
    transparent_crc(g_528, "g_528", print_hash_value);
    transparent_crc(g_538, "g_538", print_hash_value);
    transparent_crc(g_539, "g_539", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_591[i], "g_591[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_666, "g_666", print_hash_value);
    transparent_crc(g_711, "g_711", print_hash_value);
    transparent_crc(g_766, "g_766", print_hash_value);
    transparent_crc(g_794, "g_794", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_863[i], "g_863[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_876, "g_876", print_hash_value);
    transparent_crc(g_883, "g_883", print_hash_value);
    transparent_crc(g_892, "g_892", print_hash_value);
    transparent_crc(g_921, "g_921", print_hash_value);
    transparent_crc(g_927, "g_927", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_928[i], "g_928[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_930, "g_930", print_hash_value);
    transparent_crc(g_987, "g_987", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_988[i], "g_988[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_1035[i], "g_1035[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1036, "g_1036", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_1037[i][j], "g_1037[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_1046, "g_1046", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(g_1084[i][j], "g_1084[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_1116, "g_1116", print_hash_value);
    transparent_crc(g_1126, "g_1126", print_hash_value);
    transparent_crc(g_1127, "g_1127", print_hash_value);
    transparent_crc(g_1195, "g_1195", print_hash_value);
    transparent_crc(g_1198, "g_1198", print_hash_value);
    transparent_crc(g_1204, "g_1204", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 9; k++)
            {
                transparent_crc(g_1207[i][j][k], "g_1207[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(g_1208[i][j][k], "g_1208[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_1210, "g_1210", print_hash_value);
    transparent_crc(g_1211, "g_1211", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_1220[i][j], "g_1220[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_1236, "g_1236", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
