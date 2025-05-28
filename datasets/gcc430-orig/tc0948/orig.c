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



static char g_4 = 9L;
static int g_17 = 0x9B2E4145L;
static short g_20[10] = {0x3439L,0x3439L,0x3439L,0x3439L,0x3439L,0x3439L,0x3439L,0x3439L,0x3439L,0x3439L};
static unsigned g_22 = 0UL;
static short *g_26 = &g_20[6];
static unsigned g_36 = 0x38C8A251L;
static unsigned g_38[4][8] = {{0xA97D63F7L,1UL,4294967287UL,9UL,9UL,4294967287UL,1UL,0xA97D63F7L},{0x3C77D98AL,0UL,4294967287UL,1UL,4294967295UL,0xA26275F9L,4294967295UL,1UL},{9UL,0xAC1DEA90L,9UL,0x03A1B4BCL,1UL,0xA26275F9L,4294967287UL,4294967287UL},{4294967287UL,0UL,0x3C77D98AL,0x3C77D98AL,0UL,4294967287UL,1UL,4294967295UL}};
static unsigned g_42 = 1UL;
static int g_84 = 0x4AA41409L;
static unsigned char g_122[10] = {254UL,254UL,254UL,254UL,254UL,254UL,254UL,254UL,254UL,254UL};
static int *g_131[6][5] = {{&g_17,&g_84,&g_17,&g_84,&g_17},{(void*)0,&g_17,&g_17,&g_84,&g_17},{&g_17,&g_17,&g_17,&g_17,&g_84},{&g_84,&g_17,&g_17,&g_17,&g_17},{(void*)0,&g_17,(void*)0,&g_84,&g_17},{&g_17,&g_17,&g_84,&g_17,&g_84}};
static unsigned short g_151[9][2][8] = {{{0x1A52L,1UL,0x03C8L,0xCC4BL,0UL,0UL,0xCC4BL,0x03C8L},{0x2754L,0x2754L,1UL,0x1A52L,0x1CF3L,0xFE20L,0x03C8L,0UL}},{{0xFE20L,65530UL,0x2754L,0x1CF3L,0xCC4BL,0UL,0xDB1AL,0UL},{65530UL,0x1A52L,0UL,0x1A52L,65530UL,0x4892L,1UL,0x03C8L}},{{0UL,4UL,1UL,0xCC4BL,65529UL,0x1CF3L,65533UL,0x1A52L},{65533UL,1UL,1UL,0xB376L,0xB376L,1UL,1UL,65533UL}},{{65529UL,0xFE20L,0UL,0x03C8L,0x2754L,4UL,0xDB1AL,1UL},{0UL,0xCC4BL,0x2754L,0xCC4BL,0UL,0xDB1AL,0UL,0xCC4BL}},{{0x4892L,9UL,0x4892L,1UL,0xDB1AL,4UL,0x2754L,0x03C8L},{0xCC4BL,0x4892L,0UL,0xB376L,65530UL,0UL,0xDB1AL,0xDB1AL}},{{0xCC4BL,0xDB1AL,0xFE20L,0xFE20L,0xDB1AL,0xCC4BL,9UL,1UL},{0x4892L,65529UL,0UL,9UL,0UL,0UL,0x03C8L,65533UL}},{{65530UL,1UL,0UL,9UL,0x1CF3L,9UL,0UL,1UL},{0x03C8L,0x1CF3L,0xB376L,0xFE20L,65533UL,1UL,65530UL,0xDB1AL}},{{0xFE20L,4UL,1UL,0xB376L,0x03C8L,65530UL,65530UL,0x03C8L},{1UL,0xB376L,0xB376L,1UL,1UL,65533UL,0UL,0xCC4BL}},{{1UL,65533UL,0UL,0xCC4BL,0x2754L,0x4892L,0x03C8L,4UL},{9UL,65533UL,0UL,0UL,0UL,65533UL,9UL,0xFE20L}}};
static int g_158 = 0x9D03927BL;
static unsigned **g_159 = (void*)0;
static int **g_191 = (void*)0;
static int ***g_190 = &g_191;
static const int *g_209 = &g_84;
static short **g_210[1] = {(void*)0};
static unsigned char g_215 = 0xCCL;
static unsigned char *g_260 = &g_215;
static unsigned short g_339 = 0xD778L;
static short g_352 = 1L;
static unsigned short **g_362 = (void*)0;
static unsigned short ***g_361[3][10][5] = {{{&g_362,(void*)0,(void*)0,&g_362,&g_362},{(void*)0,&g_362,&g_362,&g_362,(void*)0},{&g_362,(void*)0,&g_362,&g_362,&g_362},{&g_362,&g_362,&g_362,&g_362,(void*)0},{&g_362,&g_362,(void*)0,(void*)0,&g_362},{&g_362,&g_362,&g_362,(void*)0,&g_362},{&g_362,&g_362,&g_362,&g_362,&g_362},{&g_362,&g_362,(void*)0,&g_362,&g_362},{&g_362,(void*)0,&g_362,&g_362,(void*)0},{&g_362,&g_362,&g_362,(void*)0,&g_362}},{{&g_362,(void*)0,(void*)0,&g_362,&g_362},{&g_362,&g_362,&g_362,&g_362,&g_362},{&g_362,&g_362,&g_362,&g_362,(void*)0},{&g_362,&g_362,(void*)0,&g_362,(void*)0},{&g_362,&g_362,&g_362,(void*)0,&g_362},{(void*)0,&g_362,&g_362,&g_362,&g_362},{&g_362,(void*)0,(void*)0,&g_362,&g_362},{&g_362,&g_362,&g_362,&g_362,&g_362},{(void*)0,&g_362,&g_362,&g_362,&g_362},{&g_362,&g_362,(void*)0,(void*)0,&g_362}},{{&g_362,&g_362,&g_362,&g_362,(void*)0},{&g_362,&g_362,&g_362,&g_362,&g_362},{&g_362,&g_362,&g_362,&g_362,&g_362},{&g_362,&g_362,&g_362,&g_362,&g_362},{&g_362,&g_362,&g_362,(void*)0,&g_362},{(void*)0,&g_362,&g_362,(void*)0,&g_362},{&g_362,&g_362,&g_362,&g_362,&g_362},{&g_362,&g_362,&g_362,&g_362,&g_362},{&g_362,&g_362,&g_362,&g_362,&g_362},{(void*)0,(void*)0,&g_362,&g_362,&g_362}}};
static unsigned short g_367[4] = {0xF365L,0xF365L,0xF365L,0xF365L};
static unsigned g_381 = 4294967291UL;
static unsigned short g_416[6] = {65533UL,65533UL,65533UL,65533UL,65533UL,65533UL};
static unsigned char ** const *g_476 = (void*)0;
static unsigned char **g_478[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
static unsigned char ***g_477[4][3][5] = {{{&g_478[1],&g_478[1],&g_478[6],&g_478[0],&g_478[2]},{(void*)0,&g_478[6],&g_478[6],(void*)0,&g_478[1]},{&g_478[5],(void*)0,&g_478[3],&g_478[6],(void*)0}},{{&g_478[1],&g_478[6],&g_478[6],&g_478[6],&g_478[6]},{&g_478[6],&g_478[1],&g_478[6],&g_478[3],&g_478[6]},{&g_478[0],(void*)0,(void*)0,&g_478[5],(void*)0}},{{&g_478[6],&g_478[5],&g_478[6],(void*)0,(void*)0},{&g_478[6],(void*)0,&g_478[0],&g_478[6],&g_478[6]},{(void*)0,&g_478[6],&g_478[6],(void*)0,&g_478[6]}},{{(void*)0,(void*)0,&g_478[1],&g_478[6],(void*)0},{&g_478[6],&g_478[3],&g_478[6],&g_478[0],&g_478[6]},{&g_478[3],&g_478[6],&g_478[6],&g_478[6],&g_478[0]}}};
static unsigned g_512 = 0UL;
static unsigned g_514 = 0UL;
static unsigned short g_519 = 0xCC40L;
static unsigned g_545 = 4294967295UL;
static int *g_674 = (void*)0;
static int *g_680 = &g_158;
static int ****g_775[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
static int **g_778 = &g_674;
static unsigned g_792 = 0x7DFD803CL;
static const unsigned *g_801 = &g_38[2][7];
static const unsigned **g_800 = &g_801;
static const unsigned ***g_799 = &g_800;
static unsigned ***g_806 = &g_159;
static unsigned char g_832 = 1UL;
static const int g_835[10] = {0xB43597C8L,1L,0xB43597C8L,0xB43597C8L,1L,0xB43597C8L,0xB43597C8L,1L,0xB43597C8L,0xB43597C8L};
static unsigned char g_844 = 1UL;
static unsigned short * const *g_971 = (void*)0;
static unsigned short * const **g_970 = &g_971;
static int g_979[2] = {0x5A1CDE1DL,0x5A1CDE1DL};
static int *g_978 = &g_979[0];
static int **g_977[10] = {&g_978,(void*)0,&g_978,&g_978,(void*)0,&g_978,&g_978,(void*)0,&g_978,&g_978};
static unsigned short g_1056 = 0xBC7BL;
static char g_1061 = 0x7CL;
static int *g_1064[8][5] = {{&g_158,&g_84,&g_84,&g_84,&g_17},{&g_158,&g_158,&g_84,&g_17,&g_84},{&g_17,&g_84,&g_17,&g_84,&g_17},{&g_17,&g_17,&g_158,&g_84,(void*)0},{&g_17,&g_17,(void*)0,&g_84,&g_17},{&g_17,&g_17,&g_84,&g_17,&g_84},{&g_158,&g_17,&g_17,&g_158,(void*)0},{&g_158,&g_17,&g_17,(void*)0,&g_84}};



static int func_1(void);
static const char func_9(unsigned p_10, short p_11, const unsigned p_12, int p_13);
static short * func_27(const short p_28);
static short * func_45(int p_46, int p_47, short * p_48, unsigned short p_49);
static short func_55(unsigned * p_56, unsigned * p_57, short p_58, int * p_59, int * p_60);
static unsigned * func_61(short ** p_62, unsigned short p_63, short p_64, unsigned p_65);
static const short func_66(unsigned p_67);
static unsigned func_75(unsigned p_76, int p_77);
static short func_95(short ** p_96, short ** p_97, char p_98);
static short ** func_99(int p_100, unsigned p_101, int * const p_102, char p_103);
static int func_1(void)
{
    int l_7 = 0L;
    int *l_16[2];
    unsigned char l_18 = 0UL;
    short *l_19 = &g_20[6];
    unsigned *l_21[5][9][2] = {{{&g_22,(void*)0},{&g_22,(void*)0},{&g_22,(void*)0},{&g_22,(void*)0},{&g_22,(void*)0},{&g_22,(void*)0},{&g_22,(void*)0},{&g_22,(void*)0},{&g_22,(void*)0}},{{&g_22,(void*)0},{&g_22,(void*)0},{&g_22,(void*)0},{&g_22,(void*)0},{&g_22,(void*)0},{&g_22,(void*)0},{&g_22,(void*)0},{&g_22,(void*)0},{&g_22,(void*)0}},{{&g_22,(void*)0},{&g_22,(void*)0},{&g_22,(void*)0},{&g_22,(void*)0},{&g_22,(void*)0},{&g_22,(void*)0},{&g_22,(void*)0},{&g_22,(void*)0},{&g_22,(void*)0}},{{&g_22,(void*)0},{&g_22,(void*)0},{&g_22,(void*)0},{&g_22,(void*)0},{&g_22,(void*)0},{&g_22,(void*)0},{&g_22,(void*)0},{&g_22,(void*)0},{&g_22,(void*)0}},{{&g_22,(void*)0},{&g_22,(void*)0},{&g_22,(void*)0},{&g_22,(void*)0},{&g_22,(void*)0},{&g_22,(void*)0},{&g_22,(void*)0},{&g_22,(void*)0},{&g_22,(void*)0}}};
    int l_41 = 0xD9FD593BL;
    unsigned l_767[6] = {0x55DAFC17L,0x55DAFC17L,0x55DAFC17L,0x55DAFC17L,0x55DAFC17L,0x55DAFC17L};
    int l_793 = (-5L);
    unsigned char *l_798[9][9] = {{&g_122[9],&g_122[9],&g_215,&g_215,&g_122[9],&g_122[9],&g_122[1],&l_18,(void*)0},{&g_122[3],&l_18,&g_122[9],(void*)0,(void*)0,&g_122[9],&l_18,&g_122[3],&g_122[9]},{(void*)0,&g_215,&g_122[3],&g_122[1],&l_18,&l_18,&g_122[1],&g_122[3],&g_215},{(void*)0,&g_122[3],(void*)0,&g_122[9],&l_18,&l_18,&l_18,&l_18,&g_122[9]},{(void*)0,&g_215,(void*)0,&l_18,&g_122[1],(void*)0,&g_122[9],&g_122[9],(void*)0},{(void*)0,&g_122[3],(void*)0,&g_122[3],(void*)0,&g_122[9],&l_18,&l_18,&l_18},{&g_122[3],&g_215,(void*)0,&l_18,(void*)0,&g_215,&g_122[3],&g_122[1],&l_18},{&g_122[9],&l_18,&g_122[3],&g_122[9],&g_122[1],&g_122[9],&g_122[3],&l_18,&g_122[9]},{&g_215,&g_122[9],&g_122[9],&g_122[1],&l_18,(void*)0,&l_18,&g_122[1],&g_122[9]}};
    unsigned *l_841[10] = {&g_38[2][7],&g_38[2][7],&g_38[2][7],&g_38[2][7],&g_38[2][7],&g_38[2][7],&g_38[2][7],&g_38[2][7],&g_38[2][7],&g_38[2][7]};
    unsigned l_842 = 0x2564AD45L;
    unsigned char l_843 = 0x27L;
    int l_908[4][10][6] = {{{(-6L),(-8L),0xC4CADB48L,9L,0xC56BB1DEL,0x6C8D024EL},{(-4L),(-2L),0x46B9CFEAL,0xCBE02E61L,0xCF3E26D7L,1L},{0x2456BC86L,0L,0x9C74207DL,0x5063F5DEL,0x5063F5DEL,0x9C74207DL},{0x52AB62C5L,0x52AB62C5L,2L,(-1L),0x4E513A5EL,1L},{0x9C74207DL,(-8L),(-1L),(-6L),7L,2L},{(-1L),0x9C74207DL,(-1L),(-3L),0x52AB62C5L,1L},{0xD4126B9BL,(-3L),2L,0x22097D8BL,0x12621E80L,0x9C74207DL},{0x22097D8BL,0x12621E80L,0x9C74207DL,0xFD53A7DBL,0x78C78A85L,1L},{(-9L),0x6C8D024EL,0x46B9CFEAL,(-1L),0xD409F8D2L,0xCF3E26D7L},{0xD409F8D2L,0x1ECFF6B3L,(-4L),0x52AB62C5L,1L,0xD4126B9BL}},{{3L,(-6L),1L,0xC4CADB48L,0xC4B24177L,1L},{0x8396866FL,(-1L),0xC4B24177L,1L,(-6L),(-4L)},{0x78C78A85L,0xC4CADB48L,(-9L),1L,6L,1L},{1L,0xFD53A7DBL,1L,0xAFE21766L,9L,(-8L)},{7L,3L,0x52AB62C5L,(-2L),1L,(-1L)},{1L,1L,6L,(-2L),6L,0xAFE21766L},{7L,(-1L),0x22097D8BL,0xAFE21766L,0x4B7E9D76L,1L},{6L,7L,0x9C74207DL,1L,0xD409F8D2L,(-10L)},{6L,0x2456BC86L,3L,6L,0x52AB62C5L,(-6L)},{(-9L),(-1L),(-2L),0x12621E80L,0x6C8D024EL,0x78C78A85L}},{{0xC56BB1DEL,1L,0x52AB62C5L,0xAFE21766L,1L,(-8L)},{0x2BE056C9L,(-10L),(-1L),0L,(-2L),0xC4CADB48L},{(-3L),(-6L),3L,0xD4126B9BL,0x2456BC86L,0x2456BC86L},{0xD409F8D2L,(-1L),(-1L),0xD409F8D2L,0x4E513A5EL,1L},{(-2L),0x9C74207DL,(-8L),(-1L),(-6L),7L},{0xCF3E26D7L,1L,0x4B7E9D76L,(-4L),(-6L),6L},{0x04A219B6L,0x9C74207DL,1L,0xC4B24177L,0x4E513A5EL,0x8D42009FL},{0xAFE21766L,(-1L),(-4L),1L,0x2456BC86L,0x2BE056C9L},{0x4B7E9D76L,(-6L),0xF8DFDCF9L,0x8D42009FL,(-2L),0xAFE21766L},{(-1L),(-10L),0x8396866FL,0xCBE02E61L,1L,0x4E513A5EL}},{{(-10L),1L,0x46B9CFEAL,(-3L),0x6C8D024EL,1L},{0x12621E80L,(-1L),1L,(-2L),0x52AB62C5L,3L},{0x9B4E2F5DL,0x2456BC86L,1L,0x5063F5DEL,6L,0xD4126B9BL},{(-2L),(-1L),(-1L),(-1L),(-2L),0x8396866FL},{0xF8DFDCF9L,0x4B7E9D76L,0x4E513A5EL,(-8L),0x6C8D024EL,(-10L)},{(-6L),0x1ECFF6B3L,6L,0x4B7E9D76L,0x592170CBL,(-10L)},{0xFD53A7DBL,1L,0x4E513A5EL,1L,0xCBE02E61L,0x8396866FL},{0x592170CBL,(-3L),(-1L),(-4L),(-8L),0xD4126B9BL},{(-10L),(-1L),(-8L),0xF8DFDCF9L,(-6L),0x5063F5DEL},{1L,0xC4CADB48L,0xC56BB1DEL,0x8396866FL,0x2BE056C9L,(-1L)}}};
    int l_941 = 0x15DA68E7L;
    unsigned short *** const l_965 = &g_362;
    const int **l_1007[10][1] = {{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}};
    unsigned short l_1014[3];
    short l_1055 = 8L;
    int l_1059[2][1];
    char *l_1060 = &g_1061;
    unsigned l_1062 = 0UL;
    int l_1063[9][3][9] = {{{0x45D408ACL,0x45D408ACL,(-8L),0x45D408ACL,0x45D408ACL,(-8L),0x45D408ACL,0x45D408ACL,(-8L)},{0x45D408ACL,0x45D408ACL,(-8L),0x45D408ACL,0x45D408ACL,(-8L),0x45D408ACL,0x45D408ACL,(-8L)},{0x45D408ACL,0x45D408ACL,(-8L),0x45D408ACL,0x45D408ACL,(-8L),0x45D408ACL,0x45D408ACL,(-8L)}},{{0x45D408ACL,0x45D408ACL,(-8L),0x45D408ACL,0x45D408ACL,(-8L),0x45D408ACL,0x45D408ACL,(-8L)},{0x45D408ACL,0x45D408ACL,(-8L),0x45D408ACL,0x45D408ACL,(-8L),0x8B6FA6E6L,0x8B6FA6E6L,0x45D408ACL},{0x8B6FA6E6L,0x8B6FA6E6L,0x45D408ACL,0x8B6FA6E6L,0x8B6FA6E6L,0x45D408ACL,0x8B6FA6E6L,0x8B6FA6E6L,0x45D408ACL}},{{0x8B6FA6E6L,0x8B6FA6E6L,0x45D408ACL,0x8B6FA6E6L,0x8B6FA6E6L,0x45D408ACL,0x8B6FA6E6L,0x8B6FA6E6L,0x45D408ACL},{0x8B6FA6E6L,0x8B6FA6E6L,0x45D408ACL,0x8B6FA6E6L,0x8B6FA6E6L,0x45D408ACL,0x8B6FA6E6L,0x8B6FA6E6L,0x45D408ACL},{0x8B6FA6E6L,0x8B6FA6E6L,0x45D408ACL,0x8B6FA6E6L,0x8B6FA6E6L,0x45D408ACL,0x8B6FA6E6L,0x8B6FA6E6L,0x45D408ACL}},{{0x8B6FA6E6L,0x8B6FA6E6L,0x45D408ACL,0x8B6FA6E6L,0x8B6FA6E6L,0x45D408ACL,0x8B6FA6E6L,0x8B6FA6E6L,0x45D408ACL},{0x8B6FA6E6L,0x8B6FA6E6L,0x45D408ACL,0x8B6FA6E6L,0x8B6FA6E6L,0x45D408ACL,0x8B6FA6E6L,0x8B6FA6E6L,0x45D408ACL},{0x8B6FA6E6L,0x8B6FA6E6L,0x45D408ACL,0x8B6FA6E6L,0x8B6FA6E6L,0x45D408ACL,0x8B6FA6E6L,0x8B6FA6E6L,0x45D408ACL}},{{0x8B6FA6E6L,0x8B6FA6E6L,0x45D408ACL,0x8B6FA6E6L,0x8B6FA6E6L,0x45D408ACL,0x8B6FA6E6L,0x8B6FA6E6L,0x45D408ACL},{0x8B6FA6E6L,0x8B6FA6E6L,0x45D408ACL,0x8B6FA6E6L,0x8B6FA6E6L,0x45D408ACL,0x8B6FA6E6L,0x8B6FA6E6L,0x45D408ACL},{0x8B6FA6E6L,0x8B6FA6E6L,0x45D408ACL,0x8B6FA6E6L,0x8B6FA6E6L,0x45D408ACL,0x8B6FA6E6L,0x8B6FA6E6L,0x45D408ACL}},{{0x8B6FA6E6L,0x8B6FA6E6L,0x45D408ACL,0x8B6FA6E6L,0x8B6FA6E6L,0x45D408ACL,0x8B6FA6E6L,0x8B6FA6E6L,0x45D408ACL},{0x8B6FA6E6L,0x8B6FA6E6L,0x45D408ACL,0x8B6FA6E6L,0x8B6FA6E6L,0x45D408ACL,0x8B6FA6E6L,0x8B6FA6E6L,0x45D408ACL},{0x8B6FA6E6L,0x8B6FA6E6L,0x45D408ACL,0x8B6FA6E6L,0x8B6FA6E6L,0x45D408ACL,0x8B6FA6E6L,0x8B6FA6E6L,0x45D408ACL}},{{0x8B6FA6E6L,0x8B6FA6E6L,0x45D408ACL,0x8B6FA6E6L,0x8B6FA6E6L,0x45D408ACL,0x8B6FA6E6L,0x8B6FA6E6L,0x45D408ACL},{0x8B6FA6E6L,0x8B6FA6E6L,0x45D408ACL,0x8B6FA6E6L,0x8B6FA6E6L,0x45D408ACL,0x8B6FA6E6L,0x8B6FA6E6L,0x45D408ACL},{0x8B6FA6E6L,0x8B6FA6E6L,0x45D408ACL,0x8B6FA6E6L,0x8B6FA6E6L,0x45D408ACL,0x8B6FA6E6L,0x8B6FA6E6L,0x45D408ACL}},{{0x8B6FA6E6L,0x8B6FA6E6L,0x45D408ACL,0x8B6FA6E6L,0x8B6FA6E6L,0x45D408ACL,0x8B6FA6E6L,0x8B6FA6E6L,0x45D408ACL},{0x8B6FA6E6L,0x8B6FA6E6L,0x45D408ACL,0x8B6FA6E6L,0x8B6FA6E6L,0x45D408ACL,0x8B6FA6E6L,0x8B6FA6E6L,0x45D408ACL},{0x8B6FA6E6L,0x8B6FA6E6L,0x45D408ACL,0x8B6FA6E6L,0x8B6FA6E6L,0x45D408ACL,0x8B6FA6E6L,0x8B6FA6E6L,0x45D408ACL}},{{0x8B6FA6E6L,0x8B6FA6E6L,0x45D408ACL,0x8B6FA6E6L,0x8B6FA6E6L,0x45D408ACL,0x8B6FA6E6L,0x8B6FA6E6L,0x45D408ACL},{0x8B6FA6E6L,0x8B6FA6E6L,0x45D408ACL,0x8B6FA6E6L,0x8B6FA6E6L,0x45D408ACL,0x8B6FA6E6L,(-8L),0x8B6FA6E6L},{(-8L),(-8L),0x8B6FA6E6L,(-8L),(-8L),0x8B6FA6E6L,(-8L),(-8L),0x8B6FA6E6L}}};
    unsigned short l_1065 = 65526UL;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_16[i] = &g_17;
    for (i = 0; i < 3; i++)
        l_1014[i] = 65535UL;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
            l_1059[i][j] = 0xAF05F0AFL;
    }
    if ((safe_rshift_func_uint8_t_u_s((g_4 || (0x6748F69FL < (safe_mod_func_uint8_t_u_u((l_7 <= (1L > ((((*l_19) = (safe_unary_minus_func_int8_t_s(func_9(((safe_mod_func_int32_t_s_s(l_7, (l_18 = l_7))) & 0x4675L), ((*l_19) = g_4), (g_22 = g_4), g_4)))) <= g_17) | 1UL))), (-1L))))), 0)))
    {
        unsigned l_23 = 0UL;
        short **l_40 = &l_19;
        char l_68 = 0x5AL;
        unsigned char l_768 = 0xE1L;
        int l_781 = 0xC39AB690L;
        const int *l_834 = &g_835[7];
        const int **l_836 = &g_209;
        g_42 ^= (((0xB6749EFEL & 1UL) | l_23) || (safe_add_func_int32_t_s_s(g_20[6], (l_41 = (g_26 != ((*l_40) = func_27((*g_26))))))));

        ;
        for (l_41 = 3; (l_41 >= 0); l_41 -= 1)
        {
            int l_69 = 0x69E9DA12L;
            unsigned *l_764 = &l_23;
            int l_766[1];
            short l_830 = 0L;
            unsigned short l_833 = 0x4398L;
            int i;
            for (i = 0; i < 1; i++)
                l_766[i] = (-1L);
            g_17 = g_4;
            for (g_17 = 3; (g_17 >= 0); g_17 -= 1)
            {
                int * const l_50 = &g_17;
                int l_777 = 0xE1A8B5D9L;
                int l_780 = (-1L);
                int *l_790[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                int i;
            }
            for (g_514 = 0; (g_514 <= 3); g_514 += 1)
            {
                unsigned short l_797[2];
                int l_828 = 0x0FA9CBBBL;
                short **l_829 = (void*)0;
                int i;
                for (i = 0; i < 2; i++)
                    l_797[i] = 0x15C0L;
                (*g_680) = (safe_unary_minus_func_uint8_t_u(0UL));
                if ((*g_680))
                    break;
                if (l_766[0])
                    continue;
                for (g_84 = 3; (g_84 >= 0); g_84 -= 1)
                {
                    const unsigned ****l_802 = (void*)0;
                    const unsigned ****l_803 = &g_799;
                    unsigned ***l_805 = &g_159;
                    unsigned ****l_804[2][1][6] = {{{(void*)0,&l_805,&l_805,(void*)0,&l_805,&l_805}},{{(void*)0,&l_805,&l_805,(void*)0,&l_805,&l_805}}};
                    int l_815 = 0x124B9B76L;
                    int * const *l_816 = &l_16[0];
                    char *l_831 = &l_68;
                    int i, j, k;
                    (*g_680) = ((safe_lshift_func_int16_t_s_u(l_797[0], ((l_798[5][4] = &l_18) == &l_18))) ^ (g_545 && (((*l_803) = g_799) != (g_806 = &g_159))));
                    for (g_519 = 0; (g_519 <= 3); g_519 += 1)
                    {
                        unsigned l_826[5] = {0x6FF1C069L,0x6FF1C069L,0x6FF1C069L,0x6FF1C069L,0x6FF1C069L};
                        short l_827 = 0xB9A6L;
                        int i, j;
                        l_69 = (safe_lshift_func_uint16_t_u_s((safe_mod_func_uint32_t_u_u((*g_801), (safe_sub_func_uint16_t_u_u(((safe_sub_func_uint16_t_u_u(l_815, l_766[0])) > (((void*)0 == l_816) >= l_797[0])), (safe_unary_minus_func_int32_t_s((l_828 = ((((**l_816) = (**g_800)) != ((safe_lshift_func_uint16_t_u_s((safe_add_func_int32_t_s_s(((*g_680) = ((safe_mod_func_uint32_t_u_u((safe_lshift_func_int8_t_s_s(func_95(l_40, &g_26, l_826[2]), g_512)), l_826[3])) || (**g_800))), l_781)), 4)) > l_827)) == 0xE38DA92BL)))))))), 12));
                    }
                    l_828 ^= ((((l_830 |= (func_66(l_766[0]) & func_95(l_829, &g_26, l_781))) & ((*l_831) &= g_215)) ^ 0x39L) == (!(l_833 = g_832)));
                    for (g_22 = 0; (g_22 <= 5); g_22 += 1)
                    {
                        int i;
                        l_781 |= g_367[l_41];
                        return (*g_680);
                    }
                }
            }
        }
        l_781 = ((*g_680) = l_23);
        (*l_836) = (l_834 = (void*)0);

        ;
        ;
    }
    else
    {
        for (g_4 = 0; (g_4 == 28); g_4++)
        {
            (*g_680) = 7L;
        }
    }

    ;
    ;
    if (((*g_680) = (safe_mod_func_uint32_t_u_u((func_55(l_841[6], &l_767[2], (*g_26), &l_793, ((*g_778) = &l_793)) >= g_844), (*g_680)))))
    {
        short l_857 = (-1L);
        int *l_860 = &g_84;
        const int *l_894 = (void*)0;
        unsigned *l_898 = &l_767[5];
        unsigned char l_899[5];
        unsigned *l_902[2][10] = {{&g_512,&l_767[5],&g_22,&l_767[5],&l_767[5],&g_22,&l_767[5],&g_512,&g_22,&g_512},{&l_767[5],&g_512,&g_38[2][7],&l_767[5],&g_38[2][7],&g_512,&l_767[5],&l_767[5],&l_767[5],&l_767[5]}};
        unsigned short *l_968 = &g_519;
        unsigned short * const *l_967 = &l_968;
        unsigned short * const **l_966[2];
        const unsigned char * const l_989 = &g_122[3];
        const unsigned char * const *l_988 = &l_989;
        unsigned char **l_990 = &l_798[5][4];
        short **l_991 = &l_19;
        int i, j;
        for (i = 0; i < 5; i++)
            l_899[i] = 0UL;
        for (i = 0; i < 2; i++)
            l_966[i] = &l_967;
        for (g_844 = (-13); (g_844 > 4); ++g_844)
        {
            int l_853 = 0x3F24658AL;
            int l_889 = 0xA1ACA730L;
            const int *l_895 = &g_84;
            unsigned *l_897 = &l_767[1];
            for (g_17 = 7; (g_17 > 13); ++g_17)
            {
                int l_854 = (-1L);
                (**g_778) = (safe_mod_func_uint8_t_u_u((safe_sub_func_int8_t_s_s(g_519, func_9((**g_800), l_853, (((*g_674) = (func_75(l_854, l_854) & ((**g_800) >= func_66((((*g_260) = (*g_260)) || l_854))))) || 8UL), l_853))), g_835[7]));
                (*g_674) = (+(safe_add_func_uint32_t_u_u(4294967290UL, (l_857 ^ 4UL))));
                (*g_674) = l_854;
            }
            for (g_352 = 20; (g_352 < 24); g_352 = safe_add_func_uint32_t_u_u(g_352, 5))
            {
                l_860 = &l_793;

                ;
            }
            if ((*l_860))
            {
                unsigned l_875 = 4294967295UL;
                int l_876[1][1];
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_876[i][j] = 0x7180A44FL;
                }
                for (g_519 = 0; (g_519 <= 0); g_519 += 1)
                {
                    short l_873 = (-3L);
                    unsigned l_874 = 0x7A8B5632L;
                    int *l_886[9][6][1] = {{{&l_853},{&l_7},{(void*)0},{(void*)0},{&l_7},{&l_7}},{{&l_7},{&l_7},{(void*)0},{(void*)0},{&l_7},{&l_853}},{{&l_7},{(void*)0},{(void*)0},{&l_7},{&l_7},{&l_7}},{{&l_7},{(void*)0},{(void*)0},{&l_7},{&l_853},{&l_7}},{{(void*)0},{(void*)0},{&l_7},{&l_7},{&l_7},{&l_7}},{{(void*)0},{(void*)0},{&l_7},{&l_853},{&l_7},{(void*)0}},{{(void*)0},{&l_7},{&l_853},{&l_853},{(void*)0},{&l_7}},{{&l_7},{&l_853},{&l_853},{&l_853},{&l_7},{&l_7}},{{(void*)0},{&l_853},{&l_853},{(void*)0},{&l_7},{&l_7}}};
                    int **l_885 = &l_886[2][4][0];
                    int *l_888[8] = {&l_853,&l_853,&l_853,&l_853,&l_853,&l_853,&l_853,&l_853};
                    int **l_887 = &l_888[4];
                    unsigned short *l_890 = (void*)0;
                    unsigned short *l_891 = (void*)0;
                    int l_892[3][6][10] = {{{0x435DBEF0L,0L,0x2F1A7C78L,0x720D5C2AL,0L,0xED54AA30L,(-7L),(-7L),0x077FDBF5L,8L},{0x7C0BAF52L,0L,0x077FDBF5L,0x14F51F2CL,1L,(-1L),0x16A0DD75L,(-1L),1L,0x2F1A7C78L},{8L,0xE6FF9F9EL,0x720D5C2AL,0x839529DBL,0x0762A247L,(-7L),0xC6710562L,0xC6710562L,(-7L),0x0762A247L},{(-1L),1L,1L,(-1L),4L,0x720D5C2AL,1L,0x001B73CAL,0L,0x3EA0D8F3L},{0L,0x839529DBL,(-7L),0x256C5A75L,0x2F1A7C78L,0x3EA0D8F3L,1L,1L,0L,0xC6710562L},{1L,8L,(-1L),(-1L),0x256C5A75L,(-1L),4L,0xED54AA30L,(-7L),0x435DBEF0L}},{{(-1L),1L,1L,0x839529DBL,0x699571B2L,1L,0x699571B2L,0x839529DBL,1L,1L},{0L,0x077FDBF5L,1L,0x73190D89L,0x435DBEF0L,1L,0x3F829A8EL,0x2F3F65A1L,(-1L),0x3EA0D8F3L},{0xED54AA30L,0x4D0DBEBAL,0L,0x699571B2L,0x7C0BAF52L,1L,0x73190D89L,(-1L),0x14F51F2CL,0xE6FF9F9EL},{0x720D5C2AL,0L,0x3EA0D8F3L,(-1L),8L,0x256C5A75L,1L,1L,(-7L),(-7L)},{(-7L),0x3BA1C14AL,0x839529DBL,(-1L),(-1L),0x839529DBL,0x3BA1C14AL,(-7L),0xE6FF9F9EL,0x14F51F2CL},{0L,1L,(-1L),0L,0L,0x3BA1C14AL,0xE6FF9F9EL,0x699571B2L,0x3EA0D8F3L,(-1L)}},{{0xE6FF9F9EL,0xED54AA30L,(-1L),0L,1L,0x699571B2L,(-1L),(-7L),0L,0x0762A247L},{0x435DBEF0L,(-1L),0x839529DBL,0x14F51F2CL,(-1L),1L,(-1L),1L,(-1L),1L},{0L,1L,0x3EA0D8F3L,1L,0L,0x435DBEF0L,0x0762A247L,(-1L),0x7C0BAF52L,(-7L)},{(-1L),(-7L),0L,8L,0x4D0DBEBAL,(-1L),0L,0x2F3F65A1L,0x3BA1C14AL,(-7L)},{(-1L),8L,1L,1L,0L,0x3F829A8EL,0x16A0DD75L,0x3EA0D8F3L,0x077FDBF5L,1L},{0L,0x14F51F2CL,0x2F3F65A1L,0x7C0BAF52L,(-7L),0x720D5C2AL,0x720D5C2AL,(-7L),0x7C0BAF52L,0x2F3F65A1L}}};
                    int l_893 = (-1L);
                    int i, j, k;
                    for (g_545 = 0; (g_545 <= 0); g_545 += 1)
                    {
                        int i, j, k;
                        (*g_674) = func_75((safe_lshift_func_uint16_t_u_s((safe_mod_func_uint8_t_u_u(((*g_260) = ((((safe_mod_func_uint8_t_u_u(((g_416[(g_545 + 2)] != 0x6CL) || (safe_add_func_uint8_t_u_u(((safe_rshift_func_uint16_t_u_u(((safe_rshift_func_uint8_t_u_s(0UL, 5)) ^ ((-1L) < 0x0671L)), 14)) >= func_55(l_841[g_545], g_131[g_545][g_519], l_873, g_131[g_545][g_519], &l_793)), l_873))), g_367[3])) ^ (*g_26)) | (***g_799)) == 2UL)), l_873)), 15)), l_853);
                        l_876[0][0] &= ((l_873 == (((func_75((**g_800), g_38[2][7]) && ((*g_260) &= l_874)) | (l_875 & (&l_873 != l_19))) | ((&g_210[g_545] == &g_210[0]) == 8L))) <= l_853);
                    }
                    l_893 ^= ((*g_680) || ((safe_mod_func_int16_t_s_s((safe_rshift_func_int8_t_s_u(((((0UL <= ((*g_260) < (safe_lshift_func_uint8_t_u_s(l_876[0][0], 6)))) >= (l_889 = (((*l_885) = l_841[(g_519 + 6)]) != ((*l_887) = g_680)))) == (l_874 != 0x70C8L)) < (l_892[1][5][0] = (((((((*g_26) || 0UL) >= 0xEBL) ^ l_873) >= 0x33C8L) || l_873) && (*g_680)))), 1)), (*l_860))) >= l_874));



                    for (l_7 = 0; (l_7 <= 2); l_7 += 1)
                    {
                        l_895 = l_894;

                        ;
                        if (l_875)
                            continue;
                        (*g_674) = l_874;
                        return l_875;


                    }
                }

                ;
            }
            else
            {
                unsigned char l_896[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_896[i] = 0x58L;
                (*g_680) &= (l_896[1] ^ 0x1A4EDEDCL);
                (*l_860) = (l_896[1] || func_55((l_898 = l_897), l_897, l_899[1], &l_793, l_902[1][6]));
            }

            ;
            if ((*l_860))
                break;
        }

        ;
        for (g_519 = 0; (g_519 <= 3); g_519 += 1)
        {
            int *l_903 = &g_17;
            int i;
            (*g_778) = l_903;

            ;
            return g_122[(g_519 + 3)];
        }
        if ((safe_mod_func_int8_t_s_s(g_519, ((*g_260) = (*g_260)))))
        {
            char l_906 = 0L;
            return l_906;


        }
        else
        {
            char l_907 = 0xCEL;
            (*l_860) = (!((*g_680) = l_907));
        }
        if ((((*g_260) ^= ((*g_26) > 0x18BEL)) > 0x4EL))
        {
            int l_912 = (-1L);
            int *l_914 = &l_908[0][3][5];
            short l_928 = (-1L);
            if (((**g_778) = l_908[3][6][1]))
            {
                unsigned char l_911[8] = {0xCCL,8UL,8UL,0xCCL,8UL,8UL,0xCCL,8UL};
                int l_913 = 0xC48D0945L;
                int **l_915 = &l_914;
                int *l_917 = (void*)0;
                int **l_916 = &l_917;
                int l_918 = (-3L);
                int *l_925 = &g_158;
                unsigned char * const *l_933 = &l_798[5][4];
                unsigned char * const **l_932 = &l_933;
                unsigned char * const *** const l_931 = &l_932;
                short *l_942 = &g_20[5];
                short **l_943 = (void*)0;
                short **l_944 = &l_942;
                int i;
                l_918 &= (safe_rshift_func_uint16_t_u_u((*l_860), (func_9((**g_800), l_911[1], (*g_801), (l_913 = ((*g_680) = l_912))) != ((((*l_916) = ((*l_915) = l_914)) != (void*)0) != (**g_800)))));

                ;
                for (l_843 = (-4); (l_843 > 2); ++l_843)
                {
                    unsigned char ***l_921 = &g_478[3];
                    int l_922 = 0xD65E8FFDL;
                    for (g_792 = 1; (g_792 <= 4); g_792 += 1)
                    {
                        unsigned l_924 = 0x9C653C5AL;
                        (*l_860) = (*g_680);
                        (*g_674) |= (l_921 != &g_478[2]);
                        (*g_674) |= ((g_339 <= l_922) >= (2L < (safe_unary_minus_func_int32_t_s(((l_922 <= l_924) | (*g_26))))));
                    }
                    l_925 = &l_793;

                    ;
                    for (l_857 = 16; (l_857 == (-9)); l_857 = safe_sub_func_uint8_t_u_u(l_857, 4))
                    {
                        unsigned l_938 = 0x456BE99EL;
                        unsigned l_939 = 0xBC4D68ABL;
                        short *l_940[8];
                        int i;
                        for (i = 0; i < 8; i++)
                            l_940[i] = (void*)0;
                        (*l_925) = 6L;
                        (*g_680) = (!(((((*g_26) >= ((g_545 > g_122[1]) && l_928)) != ((l_941 = (safe_rshift_func_uint16_t_u_u(((((*g_260) |= (&g_477[1][1][4] == l_931)) | (safe_mod_func_uint32_t_u_u((0xA1L > l_922), ((*l_925) = (safe_mod_func_uint8_t_u_u((l_938 <= l_939), g_84)))))) >= 0x8A87L), 8))) ^ l_922)) >= l_939) != (**g_800)));
                        (*g_778) = &l_912;

                        ;
                        l_912 = (*l_860);
                    }

                    ;
                    (*g_778) = &l_793;

                    ;
                }

                ;
                (*l_860) = ((((*l_944) = l_942) != l_19) == 5L);
            }
            else
            {
                unsigned l_952[9][9] = {{0x78CE281CL,4294967295UL,4294967291UL,0xB575F879L,0xB575F879L,4294967291UL,4294967295UL,0x78CE281CL,4294967295UL},{0x78F0F218L,0UL,0x9D88E61CL,0x78F0F218L,0UL,7UL,0UL,0UL,7UL},{0x19344ED9L,0xB575F879L,0xDA06904FL,0xB575F879L,0x19344ED9L,4294967295UL,0xB575F879L,4294967295UL,4294967295UL},{0UL,0UL,0UL,0UL,0UL,0x9D88E61CL,0UL,0UL,0UL},{0x19344ED9L,0x19344ED9L,4294967295UL,4294967295UL,0xB575F879L,4294967295UL,0x19344ED9L,0xB575F879L,0xDA06904FL},{0x78F0F218L,0UL,7UL,0UL,0UL,7UL,0UL,0x78F0F218L,0x9D88E61CL},{0x78CE281CL,0xB575F879L,4294967295UL,0x78CE281CL,4294967295UL,4294967291UL,0xB575F879L,0xB575F879L,4294967291UL},{0x80B24FE7L,0UL,0UL,0UL,0x80B24FE7L,0UL,0UL,0UL,0x9D88E61CL},{0xB575F879L,4294967295UL,0x78CE281CL,6UL,4294967287UL,0x19344ED9L,4294967287UL,6UL,0x78CE281CL}};
                const unsigned l_964 = 0UL;
                int *l_972 = (void*)0;
                int i, j;
                if ((*g_680))
                {
                    unsigned short l_956 = 65529UL;
                    int *l_957 = (void*)0;
                    for (l_912 = 0; (l_912 <= 6); l_912 += 1)
                    {
                        unsigned short *l_945 = (void*)0;
                        unsigned short *l_946 = &g_416[5];
                        const int l_947[10][7] = {{(-1L),9L,(-1L),0x2D3EE731L,(-7L),0L,0L},{(-1L),9L,(-1L),9L,(-1L),0x2D3EE731L,(-7L)},{0x32F67511L,0L,9L,0x2D3EE731L,0x592E60DCL,0x2D3EE731L,9L},{(-7L),(-7L),3L,(-1L),0L,0L,0x32F67511L},{0x32F67511L,0x2D3EE731L,3L,3L,0x2D3EE731L,0x32F67511L,0x592E60DCL},{(-1L),3L,9L,0x592E60DCL,0L,0L,0x592E60DCL},{(-1L),0xFA757870L,(-1L),0L,0x592E60DCL,(-1L),0x32F67511L},{9L,3L,(-1L),0L,(-1L),3L,9L},{3L,0x2D3EE731L,0x32F67511L,0x592E60DCL,(-7L),(-1L),(-7L)},{3L,(-7L),(-7L),3L,(-1L),0L,0L}};
                        short **l_955 = (void*)0;
                        int i, j;
                        l_957 = &l_912;

                        ;
                    }

                    ;
                }
                else
                {
                    int l_958 = 0x3AB27E7AL;
                    int ***l_962 = &g_778;
                    if (l_958)
                    {
                        short ***l_959 = (void*)0;
                        short ***l_960 = &g_210[0];
                        unsigned short *l_961[6][8][2] = {{{&g_151[1][0][2],&g_151[1][0][2]},{&g_151[1][0][2],&g_339},{&g_367[3],&g_367[3]},{&g_339,&g_367[3]},{&g_367[3],&g_339},{&g_151[1][0][2],&g_151[1][0][2]},{&g_151[1][0][2],&g_339},{&g_367[3],&g_367[3]}},{{&g_339,&g_367[3]},{&g_367[3],&g_416[5]},{&g_367[3],&g_367[3]},{&g_367[3],&g_416[5]},{&g_367[3],&g_339},{&g_416[5],&g_339},{&g_367[3],&g_416[5]},{&g_367[3],&g_367[3]}},{{&g_367[3],&g_416[5]},{&g_367[3],&g_339},{&g_416[5],&g_339},{&g_367[3],&g_416[5]},{&g_367[3],&g_367[3]},{&g_367[3],&g_416[5]},{&g_367[3],&g_339},{&g_416[5],&g_339}},{{&g_367[3],&g_416[5]},{&g_367[3],&g_367[3]},{&g_367[3],&g_416[5]},{&g_367[3],&g_339},{&g_416[5],&g_339},{&g_367[3],&g_416[5]},{&g_367[3],&g_367[3]},{&g_367[3],&g_416[5]}},{{&g_367[3],&g_339},{&g_416[5],&g_339},{&g_367[3],&g_416[5]},{&g_367[3],&g_367[3]},{&g_367[3],&g_416[5]},{&g_367[3],&g_339},{&g_416[5],&g_339},{&g_367[3],&g_416[5]}},{{&g_367[3],&g_367[3]},{&g_367[3],&g_416[5]},{&g_367[3],&g_339},{&g_416[5],&g_339},{&g_367[3],&g_416[5]},{&g_367[3],&g_367[3]},{&g_367[3],&g_416[5]},{&g_367[3],&g_339}}};
                        int i, j, k;
                        (**l_962) = (*g_778);
                        l_912 = (*l_860);
                    }
                    else
                    {
                        const int **l_963[10] = {&g_209,&g_209,&g_209,&g_209,&g_209,&g_209,&g_209,&g_209,&g_209,&g_209};
                        int i;
                        g_209 = (l_894 = (void*)0);

                        ;
                    }
                }
                for (g_844 = 0; (g_844 <= 5); g_844 += 1)
                {
                    int * const l_973 = &l_941;
                    for (g_519 = 1; (g_519 <= 5); g_519 += 1)
                    {
                        unsigned short * const ***l_969[8] = {&l_966[0],&l_966[1],&l_966[0],&l_966[1],&l_966[0],&l_966[1],&l_966[0],&l_966[1]};
                        int i;
                        (*g_680) = l_964;
                        (*g_680) = (l_965 != (g_970 = l_966[1]));

                        ;
                    }
                    if (l_952[3][7])
                        break;
                    if (l_952[3][3])
                        break;
                }

                ;
            }

            ;
            (*g_778) = &l_793;
            (*l_860) = (*l_860);
        }
        else
        {
            char l_985 = 0xE8L;
            short **l_992[5];
            unsigned char l_995[9][3] = {{0x3CL,0x31L,1UL},{251UL,0x2BL,0x2BL},{0x3CL,0x31L,1UL},{251UL,0x2BL,0x2BL},{0x3CL,0x31L,1UL},{251UL,0x2BL,0x2BL},{0x3CL,0x31L,1UL},{251UL,0x2BL,0x2BL},{0x3CL,0x31L,1UL}};
            int *l_997 = &g_84;
            int l_1000 = 0x5E6137FFL;
            int i, j;
            for (i = 0; i < 5; i++)
                l_992[i] = &l_19;
            if (((*g_674) = ((safe_rshift_func_uint8_t_u_u(l_985, 7)) && (((safe_mod_func_int8_t_s_s((0xF4B89E27L || (~(((*l_860) == (l_985 && (((((*g_680) = (l_988 != l_990)) > (func_95(l_991, l_992[3], ((safe_lshift_func_int16_t_s_s(((*g_26) = l_995[8][2]), 2)) && l_995[6][2])) >= 0x5116L)) == g_514) && l_995[8][2]))) != l_995[3][2]))), g_151[0][1][4])) & 9UL) ^ l_995[4][2]))))
            {
                int *l_996 = (void*)0;
                l_997 = l_996;

                ;
            }
            else
            {
                short **l_998 = &g_26;
                int l_999 = 1L;
                unsigned char l_1001 = 250UL;
                (**g_778) = ((void*)0 != &g_361[1][3][3]);
                l_999 = (((*g_674) = (l_991 != l_998)) == (l_999 >= l_1000));
                (*l_860) ^= (+l_1001);
                (*g_674) = (*l_860);
            }

            ;
            (*g_674) ^= (*g_680);
        }

        ;
    }
    else
    {
        int *l_1002 = (void*)0;
        unsigned char ****l_1013 = (void*)0;
        int l_1015 = 1L;
        const char l_1017 = 0xE1L;
        short **l_1018[9];
        int l_1019[2][8] = {{0x43784A5EL,0x43784A5EL,0x43784A5EL,0x43784A5EL,0x43784A5EL,0x43784A5EL,0x43784A5EL,0x43784A5EL},{0x43784A5EL,0x43784A5EL,0x43784A5EL,0x43784A5EL,0x43784A5EL,0x43784A5EL,0x43784A5EL,0x43784A5EL}};
        int i, j;
        for (i = 0; i < 9; i++)
            l_1018[i] = &l_19;
        l_1002 = (*g_778);

        ;
        (*g_778) = &l_793;
        for (g_339 = 0; (g_339 <= 1); g_339 += 1)
        {
            int * const **l_1008 = (void*)0;
            int * const *l_1010 = (void*)0;
            int * const **l_1009 = &l_1010;
            int l_1016[10][7] = {{1L,0x1B38EB1CL,(-5L),1L,0xCD713B87L,0x73605281L,0x531E9495L},{0x7A16FE3EL,0x1B38EB1CL,0x4B3B56FEL,0x7A16FE3EL,0xCD713B87L,0x1E2023C4L,0xCD713B87L},{0x7A16FE3EL,(-5L),(-5L),0x7A16FE3EL,0x531E9495L,0x73605281L,0xCD713B87L},{1L,0x1B38EB1CL,(-5L),1L,0xCD713B87L,0x73605281L,0x531E9495L},{0x7A16FE3EL,0x1B38EB1CL,0x4B3B56FEL,0x7A16FE3EL,0xCD713B87L,0x1E2023C4L,0xCD713B87L},{0x7A16FE3EL,(-5L),(-5L),0x7A16FE3EL,0x531E9495L,0x73605281L,0xCD713B87L},{1L,0x1B38EB1CL,(-5L),1L,0xCD713B87L,0x73605281L,0x531E9495L},{0x7A16FE3EL,0x1B38EB1CL,0x4B3B56FEL,0x3A5C8EA6L,0xDB64AE86L,0x4B3B56FEL,0xDB64AE86L},{0x3A5C8EA6L,1L,1L,0x3A5C8EA6L,(-1L),(-5L),0xDB64AE86L},{0x01776F77L,0x7A16FE3EL,1L,0x01776F77L,0xDB64AE86L,(-5L),(-1L)}};
            unsigned char ***l_1024 = &g_478[6];
            int i, j;
        }
        for (l_843 = (-29); (l_843 < 25); l_843 = safe_add_func_int8_t_s_s(l_843, 9))
        {
            int *l_1037 = &g_17;
            for (g_17 = 0; (g_17 <= 3); g_17 += 1)
            {
                unsigned l_1048 = 0x69CDB9D3L;
                int i;
                if (g_367[g_17])
                {
                    char l_1034 = 0x43L;
                    const int *l_1035 = &l_1019[0][6];
                    for (g_545 = 0; (g_545 <= 3); g_545 += 1)
                    {
                        int i;
                        (*g_674) |= g_367[g_545];
                        if (g_367[g_17])
                            continue;
                    }
                    for (l_1015 = 0; (l_1015 <= 9); l_1015 += 1)
                    {
                        short **l_1032 = &l_19;
                        int l_1033 = 0x0AB11AA0L;
                        const int *l_1036 = &l_1019[0][6];
                        l_1036 = l_1035;
                        l_1037 = l_1037;
                    }
                }
                else
                {
                    unsigned *l_1038 = &g_38[2][7];
                    int l_1047[4][7] = {{(-1L),0x1DF8DBC3L,(-1L),1L,0x434F4DFEL,0x46F60F0EL,0L},{0x1DF8DBC3L,0x34F3B485L,(-1L),(-1L),1L,(-1L),(-1L)},{0x434F4DFEL,0x434F4DFEL,(-1L),1L,0L,0x46F60F0EL,0x1DF8DBC3L},{1L,0x434F4DFEL,(-2L),0x46F60F0EL,0x46F60F0EL,(-2L),0x434F4DFEL}};
                    int l_1049 = 0x06BC1248L;
                    unsigned **l_1050[7][4];
                    int i, j;
                    for (i = 0; i < 7; i++)
                    {
                        for (j = 0; j < 4; j++)
                            l_1050[i][j] = &l_841[9];
                    }
                    if (func_55(l_1038, (l_841[6] = &l_767[5]), (*g_26), &l_1047[1][2], l_1037))
                    {
                        return (*g_680);


                    }
                    else
                    {
                        return (*g_680);


                    }
                }
                (*l_1002) = ((*l_1037) >= (8UL && 65532UL));
            }
        }
    }

    ;

    (*g_680) = ((((**g_778) = ((((safe_mod_func_int16_t_s_s((3UL != (((*g_260) = (safe_rshift_func_uint8_t_u_u(0xDBL, 0))) & ((*l_1060) ^= func_95(func_99(((*g_674) = l_1055), (g_38[0][7] = (g_512 ^= g_1056)), &l_941, (((*g_26) = (*g_26)) == (safe_lshift_func_uint8_t_u_u(7UL, l_1059[1][0])))), &g_26, g_979[1])))), 0xB766L)) != (*g_680)) | l_1062) ^ g_381)) >= 4294967293UL) < l_1063[3][1][3]);


    (*g_778) = g_1064[4][1];

    ;
    return l_1065;
}







static const char func_9(unsigned p_10, short p_11, const unsigned p_12, int p_13)
{
    return g_20[6];
}







static short * func_27(const short p_28)
{
    unsigned *l_33 = &g_22;
    int l_37 = 7L;
    short *l_39 = (void*)0;
    g_38[2][7] ^= (safe_add_func_int16_t_s_s((safe_sub_func_uint32_t_u_u((l_33 != &g_22), 1L)), func_9(p_28, (func_9((safe_lshift_func_uint8_t_u_s((g_36 = g_20[8]), func_9(g_22, (0xF2BBA2D3L >= 0xEBB4EE00L), g_17, g_22))), l_37, l_37, g_20[6]) || p_28), g_20[6], l_37)));
    return l_39;


}







static short * func_45(int p_46, int p_47, short * p_48, unsigned short p_49)
{
    unsigned l_769 = 0xA0D3863AL;
    int l_770[4][4] = {{0xD4C32359L,0xCA26CB99L,0xCA26CB99L,0xD4C32359L},{0xCA26CB99L,0xD4C32359L,0x2B13E93EL,1L},{0xCA26CB99L,0x2B13E93EL,0xCA26CB99L,0x9C012EE3L},{0xD4C32359L,1L,0x9C012EE3L,0x9C012EE3L}};
    int *l_771 = &l_770[2][1];
    short **l_772 = &g_26;
    int ****l_773 = &g_190;
    int ****l_774 = &g_190;
    int **l_776 = &g_131[3][4];
    int i, j;
    l_770[3][0] ^= (p_47 = l_769);
    l_771 = &l_770[3][0];
    (*l_771) = 0x5CBFC474L;
    (*l_776) = &p_47;


    return p_48;



}







static short func_55(unsigned * p_56, unsigned * p_57, short p_58, int * p_59, int * p_60)
{
    unsigned l_765[1][5];
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 5; j++)
            l_765[i][j] = 4294967295UL;
    }
    l_765[0][2] ^= (p_58 != ((*g_260) = func_75(g_416[1], p_58)));
    return (*g_26);
}







static unsigned * func_61(short ** p_62, unsigned short p_63, short p_64, unsigned p_65)
{
    int l_79 = 7L;
    unsigned char l_80 = 0x9CL;
    int *l_108 = &g_84;
    int l_113 = 0x772618A8L;
    unsigned char l_114 = 3UL;
    int *l_467 = &g_84;
    int l_479 = 0xF9AEC6ECL;
    char *l_505 = &g_4;
    unsigned l_506 = 0x5DFAA823L;
    int *l_507 = &l_79;
    unsigned l_510 = 0xA2F5C75FL;
    unsigned l_541 = 0x56606CCBL;
    unsigned short l_568 = 0xBE7DL;
    short **l_584 = &g_26;
    char l_613 = 0x9BL;
    unsigned short l_616[8] = {0x0EDFL,0x0EDFL,0x0EDFL,0x0EDFL,0x0EDFL,0x0EDFL,0x0EDFL,0x0EDFL};
    unsigned char **l_636 = &g_260;
    int *l_686 = &g_158;
    unsigned l_691[8];
    char l_715 = 0x95L;
    int *l_745 = &l_79;
    int i;
    for (i = 0; i < 8; i++)
        l_691[i] = 0UL;
    for (g_22 = 0; (g_22 < 53); g_22 = safe_add_func_int32_t_s_s(g_22, 1))
    {
        unsigned l_74 = 0x93BB3FD4L;
        unsigned *l_78 = (void*)0;
        l_79 = (((safe_sub_func_uint8_t_u_u((l_74 < func_75((g_38[2][7] = l_74), (0x1CL != func_9((l_79 < func_66(l_80)), (*g_26), p_65, (((safe_sub_func_uint32_t_u_u(l_74, l_74)) && (-1L)) >= l_79))))), l_74)) != l_80) & 0xC18E2D06L);
    }
    if ((safe_rshift_func_int16_t_s_u((safe_rshift_func_int16_t_s_u((((safe_add_func_int8_t_s_s((safe_sub_func_int16_t_s_s(((4294967291UL && ((*l_108) = (safe_sub_func_uint32_t_u_u(((func_95(func_99(g_17, p_64, &l_79, (((((safe_rshift_func_int8_t_s_u((safe_sub_func_int32_t_s_s(((*l_108) ^= func_66((l_79 = g_4))), (safe_add_func_uint8_t_u_u((safe_sub_func_int16_t_s_s(((0L < (func_66(l_113) || p_63)) != 0x0A5AL), (**p_62))), l_80)))), 4)) == 0x19L) > l_114) && p_65) <= p_63)), p_62, p_64) | 0xCD2FL) <= l_113), 0L)))) ^ p_63), l_80)), p_65)) ^ l_80) && (**p_62)), 9)), 7)))
    {
        int * const l_463 = &g_17;
        int **l_464 = &g_131[3][4];
        (*l_464) = l_463;
    }
    else
    {
        unsigned char l_487[9];
        int i;
        for (i = 0; i < 9; i++)
            l_487[i] = 0x0CL;
        if ((safe_sub_func_uint8_t_u_u((*g_260), (((*l_108) |= p_63) && p_64))))
        {
            int **l_468 = (void*)0;
            int **l_469 = &g_131[3][4];
            (*l_469) = l_467;
        }
        else
        {
            unsigned short l_473 = 65532UL;
            for (g_36 = 0; (g_36 <= 3); g_36 += 1)
            {
                char l_470[6] = {0L,0L,0L,0L,0L,0L};
                short **l_484 = &g_26;
                int l_486 = 6L;
                int i;
                (*l_467) = (func_75(((p_65 < (l_470[2] <= (safe_rshift_func_uint8_t_u_u(0x5DL, 2)))) ^ ((*g_260) && p_63)), g_352) >= func_66(l_473));
                l_479 |= (safe_add_func_uint8_t_u_u((((g_476 = g_476) == g_477[1][1][4]) <= p_65), ((*l_108) && 1L)));
                if ((safe_add_func_int8_t_s_s(p_64, p_64)))
                {
                    unsigned l_485 = 0x193891E9L;
                    l_486 = (safe_lshift_func_int16_t_s_s((func_95(l_484, p_62, l_485) != 0x6572E0C8L), 5));
                    (*l_467) = (p_64 < g_20[6]);
                }
                else
                {
                    if (l_487[6])
                    {
                        if (p_64)
                            break;
                    }
                    else
                    {
                        int l_492 = 0xB6D8B681L;
                        unsigned *l_493 = (void*)0;
                        unsigned *l_494 = &g_22;
                        short *l_499 = &g_352;
                        int *l_500 = &l_486;
                        (*l_500) ^= (safe_sub_func_uint32_t_u_u(((safe_rshift_func_int16_t_s_u((*g_26), 9)) | l_492), (func_66(((*l_494) = l_487[8])) < ((safe_sub_func_int8_t_s_s(((*l_108) & (p_64 == (0x9519L && ((*l_499) &= (safe_sub_func_uint32_t_u_u(func_66(l_492), p_65)))))), 0x04L)) > g_151[3][0][4]))));
                        return &g_22;


                    }
                }
            }
        }
    }


    (*l_507) = (safe_lshift_func_int16_t_s_s(((*l_467) &= 0xAC35L), (safe_add_func_uint16_t_u_u((p_65 < ((*l_505) = 0xBBL)), l_506))));
    if (p_63)
    {
        int l_520 = 0x27FB51DFL;
        short l_523 = 0L;
        short **l_533[2];
        int l_540 = (-9L);
        short l_543 = 0x3DC9L;
        unsigned *l_549[4][8] = {{&g_22,&l_506,(void*)0,(void*)0,&g_38[2][7],(void*)0,(void*)0,&l_506},{&g_22,(void*)0,&g_22,(void*)0,&g_22,&g_38[2][7],&g_38[2][7],&g_22},{&l_506,&g_22,&g_22,&g_22,&g_22,&g_22,&l_506,&l_506},{&g_22,&g_22,&g_38[2][7],&l_506,&g_38[2][7],&g_22,&g_22,(void*)0}};
        const unsigned char ** const **l_582 = (void*)0;
        unsigned char *l_586 = &g_122[1];
        int l_604 = 0xB22BC899L;
        char l_612 = 0x51L;
        int i, j;
        for (i = 0; i < 2; i++)
            l_533[i] = &g_26;
        for (l_80 = (-4); (l_80 <= 13); ++l_80)
        {
            short l_513 = 2L;
            int l_544[6][3] = {{1L,0x13D3C45AL,0xC4909D22L},{0x13D3C45AL,1L,0xC4909D22L},{4L,4L,0xC4909D22L},{1L,0x13D3C45AL,0xC4909D22L},{0x13D3C45AL,1L,0xC4909D22L},{4L,4L,0xC4909D22L}};
            char l_548[3];
            int l_569 = 0x221CEB91L;
            unsigned char ****l_583 = (void*)0;
            unsigned *l_585 = (void*)0;
            unsigned char *l_611 = &g_122[7];
            int i, j;
            for (i = 0; i < 3; i++)
                l_548[i] = 2L;
            (*l_108) = (*l_108);
            for (l_113 = 3; (l_113 >= 0); l_113 -= 1)
            {
                int * const l_511[5] = {&g_158,&g_158,&g_158,&g_158,&g_158};
                unsigned char ***l_527 = &g_478[6];
                unsigned l_570 = 0x6A811123L;
                unsigned char *l_587[3][5][2] = {{{&g_122[0],&g_122[1]},{&l_114,&g_122[1]},{&l_114,&g_122[1]},{&g_122[0],&g_122[1]},{&l_114,&g_122[1]}},{{&l_114,&g_122[1]},{&g_122[0],&g_122[1]},{&l_114,&g_122[1]},{&l_114,&g_122[1]},{&g_122[0],&g_122[1]}},{{&l_114,&g_122[1]},{&l_114,&g_122[1]},{&g_122[0],&g_122[1]},{&l_114,&g_122[1]},{&l_114,&g_122[1]}}};
                int i, j, k;
                for (l_79 = 4; (l_79 >= 0); l_79 -= 1)
                {
                    short **l_532 = &g_26;
                    int i, j;
                    l_510 = g_416[l_113];
                    if ((func_95(func_99((g_416[5] && g_158), p_65, l_511[4], p_65), p_62, (g_514 = (0x6BD3L < ((((((g_512 = p_64) <= (-1L)) != l_513) & 0x00L) && (-1L)) >= (*l_507))))) && (*g_26)))
                    {
                        unsigned short *l_524 = &g_416[4];
                        unsigned char ****l_528 = (void*)0;
                        unsigned char ****l_529 = &g_477[1][1][4];
                        (*l_108) = ((void*)0 == &g_26);
                        (*l_108) = (safe_lshift_func_uint8_t_u_u(p_63, (safe_lshift_func_int16_t_s_s(((l_513 && (((g_519 = 0L) == (((p_63 <= func_75(l_520, (safe_sub_func_uint16_t_u_u(((*l_524) = l_523), (l_513 && l_513))))) >= 0xF46BL) != 0xA1B04169L)) != (*g_26))) & p_65), (**p_62)))));
                        (*l_467) = ((safe_lshift_func_uint16_t_u_u(p_64, (((*l_529) = l_527) == (void*)0))) >= (*g_209));
                        if ((*g_209))
                            continue;
                    }
                    else
                    {
                        int l_542[2];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_542[i] = 0x4BF20052L;
                        (*l_467) |= p_65;
                        g_545 &= (safe_lshift_func_uint16_t_u_s((p_64 == func_95(func_99((func_95(l_532, &g_26, (!(!(((*l_467) = ((0xC7C1L < l_513) & (((l_542[0] = func_95(l_533[1], p_62, (safe_add_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u(((safe_rshift_func_uint8_t_u_s(func_9(p_64, ((~(l_540 = ((*l_108) <= g_122[1]))) != p_65), p_63, l_523), 6)) <= l_541), (**p_62))), 0x37L)))) != p_64) && l_523))) >= 0x5CD0L)))) < (-8L)), l_543, &g_158, g_416[5]), p_62, p_63)), l_544[5][2]));
                        l_548[2] = ((safe_rshift_func_uint16_t_u_u(p_65, (255UL || 0x20L))) <= p_63);
                    }
                    return &g_512;



                }
                for (l_510 = 0; (l_510 <= 2); l_510 += 1)
                {
                    unsigned l_561 = 0x986D211BL;
                    unsigned char **l_567 = &g_260;
                    int l_588[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_588[i] = 1L;
                    for (g_158 = 4; (g_158 >= 1); g_158 -= 1)
                    {
                        int **l_550[4][9] = {{(void*)0,&g_131[5][2],(void*)0,&g_131[5][2],(void*)0,&g_131[5][2],(void*)0,&g_131[5][2],(void*)0},{&g_131[3][4],&g_131[3][4],&g_131[3][4],&g_131[3][4],&g_131[3][4],&g_131[3][4],&g_131[3][4],&g_131[3][4],&g_131[3][4]},{(void*)0,&g_131[5][2],(void*)0,&g_131[5][2],(void*)0,&g_131[5][2],(void*)0,&g_131[5][2],(void*)0},{&g_131[3][4],&g_131[3][4],&g_131[3][4],&g_131[3][4],&g_131[3][4],&g_131[3][4],&g_131[3][4],&g_131[3][4],&g_131[3][4]}};
                        int * const *l_566[1];
                        int * const **l_565 = &l_566[0];
                        int * const ***l_564 = &l_565;
                        int i, j;
                        for (i = 0; i < 1; i++)
                            l_566[i] = &g_131[3][4];
                        g_131[3][4] = &l_540;
                        l_540 ^= l_548[l_510];
                        l_569 = (safe_add_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u(((*l_467) = ((safe_add_func_uint16_t_u_u(l_548[l_510], (p_64 < (safe_rshift_func_uint8_t_u_s((safe_add_func_int16_t_s_s(((l_544[4][2] = l_561) == l_543), (safe_lshift_func_uint16_t_u_u((&g_190 == l_564), l_548[2])))), 5))))) == (((void*)0 != l_567) | g_339))), l_568)), p_63));
                        if (l_570)
                            continue;
                    }
                    for (l_114 = 0; (l_114 <= 4); l_114 += 1)
                    {
                        const int *l_571 = &l_544[5][2];
                        const int **l_572 = &l_571;
                        int i, j;
                        (*l_572) = l_571;
                        (*l_507) ^= ((((safe_lshift_func_uint16_t_u_s((0x69D45347L || (g_519 > (*g_260))), 14)) <= ((l_523 < func_66(p_63)) >= (*g_26))) && func_95(p_62, func_99((safe_lshift_func_uint16_t_u_u((*l_108), 9)), p_64, &l_540, p_64), g_381)) == 0x46C1L);
                    }
                    for (l_569 = (-11); (l_569 <= 1); l_569 = safe_add_func_uint8_t_u_u(l_569, 7))
                    {
                        int l_581[7][5][6] = {{{0xFE1C94F1L,0x1EA945D9L,0x41EA4282L,(-1L),0xD5FBB19EL,(-9L)},{1L,0x69B6ADCAL,0xDFAF3CF9L,0x8ADBFD8DL,3L,2L},{1L,0x69B6ADCAL,0L,(-6L),0xD5FBB19EL,1L},{(-1L),0x1EA945D9L,1L,(-9L),1L,0xB0AE1982L},{0x69B6ADCAL,0x8C768773L,2L,1L,3L,0x411C9FCDL}},{{0L,0xEA730889L,0x69B6ADCAL,0xFE1C94F1L,1L,0x04E03C14L},{6L,0x04E03C14L,0x6B495317L,0x8C768773L,0L,0xC3543EC1L},{0L,0xE71F987EL,7L,0xD5FBB19EL,(-1L),0L},{0x1DB1C5DFL,0xDFAF3CF9L,(-9L),0xC3543EC1L,0xFD953015L,0xE845D0D2L},{(-8L),1L,0x5476DA3AL,(-8L),(-1L),0xF6B8DD22L}},{{0x7C25F09AL,0xD5FBB19EL,0x749B3E44L,0x70AFDBF2L,(-9L),0x510273F7L},{0xE845D0D2L,0x1DB1C5DFL,3L,(-1L),0x8E7F5678L,0L},{1L,0L,0x7CD141FCL,1L,0x7CB408A5L,0xD5FBB19EL},{0x50FB7AA3L,2L,0xEA730889L,0xEA730889L,2L,0x50FB7AA3L},{0x6B495317L,0x5476DA3AL,0x7C25F09AL,(-1L),7L,(-9L)}},{{(-1L),0xFD953015L,1L,0xC40093E4L,1L,6L},{(-1L),0x6CB09B32L,0xC40093E4L,0xE71F987EL,0x411C9FCDL,1L},{0xC3543EC1L,0xEA730889L,1L,0x70AFDBF2L,0x41EA4282L,0x6B495317L},{0L,(-8L),0x7C25F09AL,0x8ADBFD8DL,2L,0xF6B8DD22L},{(-1L),1L,0x2E635198L,0x7CD141FCL,0x3A934C57L,4L}},{{1L,(-9L),(-1L),0xE845D0D2L,0x8ADBFD8DL,0x510273F7L},{0x1EA945D9L,(-9L),0x1DB1C5DFL,0x6CB09B32L,4L,0x2E635198L},{0xF6B8DD22L,0x7CB408A5L,1L,1L,0xB0AE1982L,0xC40093E4L},{0x9205A8B6L,0x411C9FCDL,(-1L),0x2D46FBBBL,1L,1L},{(-8L),0xC40093E4L,0x04991DA3L,0L,0x50FB7AA3L,0x1DB1C5DFL}},{{(-1L),1L,0xDFAF3CF9L,1L,1L,(-7L)},{(-7L),0x50FB7AA3L,0xB0AE1982L,(-1L),(-6L),(-8L)},{0L,0x1DB1C5DFL,0xE71F987EL,0x1DB1C5DFL,0L,0xD5FBB19EL},{0x7CD141FCL,0x510273F7L,0L,1L,7L,0L},{3L,0xE71F987EL,0x7CB408A5L,0x510273F7L,1L,0L}},{{0x41EA4282L,6L,0L,0x8E7F5678L,0L,0x6CB09B32L},{1L,0xE845D0D2L,0L,0xC40093E4L,0xD5FBB19EL,(-9L)},{3L,(-9L),0x9205A8B6L,(-1L),1L,1L},{(-1L),0x2D46FBBBL,0xB0AE1982L,0xF6B8DD22L,0xE71F987EL,0x69B6ADCAL},{2L,7L,(-8L),0x04991DA3L,0xEA730889L,0x2D46FBBBL}}};
                        int i, j, k;
                        (*l_467) = ((safe_add_func_int16_t_s_s(((**p_62) != p_63), ((void*)0 != &l_513))) | 0xE01BL);
                        l_544[3][1] = ((l_581[2][1][3] && ((l_582 == l_583) != 0xA464L)) > ((func_95(l_584, p_62, p_65) | 4294967294UL) < 1UL));
                        return l_585;



                    }
                    (*l_467) |= ((((l_586 = l_586) == (void*)0) & (((void*)0 == l_587[0][1][1]) || (l_588[0] = l_561))) && p_64);
                }
                for (l_569 = 3; (l_569 >= 0); l_569 -= 1)
                {
                    unsigned l_593 = 0x7B3431BDL;
                    for (l_510 = 1; (l_510 <= 4); l_510 += 1)
                    {
                        int i, j;
                        (*l_507) &= (*l_467);
                    }
                    (*l_108) |= (safe_add_func_int8_t_s_s(((*l_505) = 0L), p_63));
                    l_544[0][0] = ((p_64 && (safe_sub_func_uint16_t_u_u(l_593, (((*l_505) = (l_520 != (safe_mod_func_uint8_t_u_u((((*l_108) > func_66(p_64)) <= 4294967295UL), (safe_lshift_func_int16_t_s_s((**p_62), (safe_rshift_func_uint16_t_u_s(l_569, 0)))))))) && l_520)))) | (**p_62));
                }
            }
            l_613 = ((safe_rshift_func_uint16_t_u_u(p_64, (safe_lshift_func_int8_t_s_u((((*l_505) = 0xD8L) < 0x58L), 4)))) ^ ((*l_467) &= (l_604 & (l_540 |= ((safe_sub_func_int16_t_s_s((safe_sub_func_uint16_t_u_u(p_64, ((*l_507) = (safe_add_func_uint8_t_u_u(((l_611 == (void*)0) <= (l_544[5][2] = 0xFA4AL)), p_64))))), l_543)) && l_612)))));
        }


        (*l_507) = l_543;
        for (l_541 = 0; (l_541 != 22); l_541 = safe_add_func_uint8_t_u_u(l_541, 5))
        {
            int l_621 = 0xEBD45C82L;
            (*l_507) ^= ((l_616[4] != (safe_add_func_uint8_t_u_u(func_9(((*l_108) == (safe_mod_func_int32_t_s_s(p_64, l_540))), (**p_62), (((*l_467) || l_540) <= (g_36 == 5UL)), l_621), (-9L)))) > (**p_62));
            (*l_467) = (+((func_9(l_621, func_95(l_533[1], (l_584 = &g_26), p_65), (l_612 < ((func_9((g_38[1][3] ^= l_523), l_621, (l_621 & 0x3AL), p_63) == g_17) || 1UL)), l_543) | 0L) > (*l_467)));
        }
        l_604 &= (safe_add_func_uint16_t_u_u((safe_sub_func_int8_t_s_s(((*l_467) | (p_65 || l_520)), p_63)), (l_612 > g_38[3][6])));
    }
    else
    {
        unsigned char **l_637 = &g_260;
        int l_638 = 2L;
        short **l_647 = &g_26;
        unsigned short ***l_664 = &g_362;
        unsigned *l_682 = &g_22;
        if ((safe_rshift_func_uint8_t_u_u((*g_260), 4)))
        {
            unsigned *l_630 = (void*)0;
            unsigned *l_631 = &g_38[2][7];
            int l_632 = 0x9110119EL;
            unsigned char l_645 = 3UL;
            int *l_646 = &g_158;
            unsigned short ***l_665 = &g_362;
            short **l_671 = &g_26;
            l_638 = (safe_add_func_uint32_t_u_u((((*l_507) | (p_63 = (0x8C1CL ^ 0xC04BL))) == ((*l_631) = (*l_467))), (l_632 && (safe_unary_minus_func_int8_t_s((safe_sub_func_int16_t_s_s((**p_62), (((l_636 != l_637) && p_65) == l_638))))))));
            (*l_646) |= ((p_64 &= (**p_62)) | (((*l_108) = (((*l_507) = p_65) == (p_65 | p_63))) == (safe_mod_func_int32_t_s_s((safe_mod_func_uint8_t_u_u(l_632, (safe_sub_func_uint32_t_u_u(((((**l_637) = l_638) >= l_645) <= 1L), l_638)))), p_63))));
            (*l_108) = func_95(p_62, l_647, (func_75(g_367[3], (*l_646)) || (safe_sub_func_int8_t_s_s((l_638 || (((*l_505) = l_638) < ((safe_rshift_func_uint16_t_u_u((((safe_sub_func_uint16_t_u_u((*l_467), func_66(l_638))) <= (*g_209)) == (*g_260)), 0)) & l_638))), (*l_108)))));
            for (l_113 = 0; (l_113 >= 25); l_113++)
            {
                unsigned short *l_666[7][5] = {{&g_367[3],&g_519,&g_367[3],&g_416[5],&g_367[3]},{&g_367[3],&g_367[3],&l_616[4],&g_416[5],&g_151[3][0][4]},{&g_519,&g_367[3],&g_367[3],&g_519,&g_367[3]},{&g_519,&g_416[5],&g_367[2],&g_367[2],&g_416[5]},{&g_367[3],&g_367[3],&l_616[4],(void*)0,(void*)0},{&g_339,&g_367[3],&g_339,&g_367[2],&l_616[4]},{&g_416[5],&g_519,(void*)0,&g_519,&g_416[5]}};
                int l_667 = (-1L);
                int **l_679 = &l_467;
                int **l_681 = &l_108;
                int i, j;
            }
        }
        else
        {
            return l_682;


        }
        if ((safe_rshift_func_uint8_t_u_s((*l_467), 7)))
        {
            (*l_507) = 9L;
            (*l_507) ^= (0xF9L >= (*l_108));
            l_638 = (*g_680);
        }
        else
        {
            const unsigned short l_685 = 0xE74FL;
            int *l_700 = (void*)0;
            unsigned l_735 = 4294967286UL;
            unsigned char l_742[10][7] = {{0xC8L,0xC8L,0xC8L,0xC8L,0xC8L,0xC8L,0xC8L},{0x6BL,0x6BL,0x6BL,0x6BL,0x6BL,0x6BL,0x6BL},{0xC8L,0xC8L,0xC8L,0xC8L,0xC8L,0xC8L,0xC8L},{0x6BL,0x6BL,0x6BL,0x6BL,0x6BL,0x6BL,0x6BL},{0xC8L,0xC8L,0xC8L,0xC8L,0xC8L,0xC8L,0xC8L},{0x6BL,0x6BL,0x6BL,0x6BL,0x6BL,0x6BL,0x6BL},{0xC8L,0xC8L,0xC8L,0xC8L,0xC8L,0xC8L,0xC8L},{0x6BL,0x6BL,0x6BL,0x6BL,0x6BL,0x6BL,0x6BL},{0xC8L,0xC8L,0xC8L,0xC8L,0xC8L,0xC8L,0xC8L},{0x6BL,0x6BL,0x6BL,0x6BL,0x6BL,0x6BL,0x6BL}};
            int l_743 = 1L;
            int l_761 = (-1L);
            int i, j;
            (*g_680) = ((**p_62) || (((p_63 | (l_638 && func_66((*l_507)))) && func_9(p_65, l_638, l_685, p_65)) < 0x1087L));
            (*l_507) &= (0L == 0xE44DL);
            if (p_64)
            {
                l_507 = l_686;

                ;
            }
            else
            {
                int *l_698 = &l_638;
                char l_706 = 0x31L;
                unsigned l_716 = 0UL;
                int l_744 = 0x04321C18L;
                for (g_36 = (-29); (g_36 == 60); g_36 = safe_add_func_int8_t_s_s(g_36, 1))
                {
                    int *l_697 = &g_84;
                    int **l_699 = &l_686;
                    for (l_506 = 0; (l_506 <= 48); ++l_506)
                    {
                        (*l_686) ^= l_691[7];
                        (*l_467) = p_65;
                        (*l_686) |= ((void*)0 == l_682);
                    }
                    for (g_519 = 0; (g_519 < 52); g_519++)
                    {
                        unsigned l_694 = 0x13202669L;
                        (*l_686) = l_694;
                    }
                    for (l_80 = 16; (l_80 >= 3); l_80 = safe_sub_func_uint8_t_u_u(l_80, 9))
                    {
                        if (p_65)
                            break;
                    }
                    (*l_699) = (l_698 = l_697);

                    ;
                    ;
                }

                ;
                ;
                for (g_22 = 1; (g_22 <= 5); g_22 += 1)
                {
                    int l_724[8] = {0x7DA4B9FEL,0x7DA4B9FEL,0x7DA4B9FEL,0x7DA4B9FEL,0x7DA4B9FEL,0x7DA4B9FEL,0x7DA4B9FEL,0x7DA4B9FEL};
                    int **l_747 = &g_131[2][2];
                    int i;
                    for (g_381 = 0; (g_381 <= 5); g_381 += 1)
                    {
                        int **l_701 = &l_700;
                        (*l_701) = l_700;
                    }
                    if (func_75(g_416[g_22], l_638))
                    {
                        int l_702 = 0x07346072L;
                        unsigned char *l_705 = &g_122[9];
                        unsigned short * const l_717 = &l_568;
                        char *l_723 = &l_706;
                        (*l_507) = l_702;
                        (*g_680) |= ((safe_mod_func_uint8_t_u_u((*g_260), ((func_75(((((*l_705) = g_416[g_22]) < (((*g_260) && l_706) != (p_63 > (safe_mod_func_int16_t_s_s(((*l_467) = ((safe_lshift_func_int16_t_s_s(l_638, (p_64 ^= (*l_698)))) | (safe_sub_func_int16_t_s_s(((*l_698) <= (safe_rshift_func_uint8_t_u_u(p_63, l_702))), p_63)))), l_715))))) & 0x388F1FAAL), p_65) > l_716) ^ g_512))) == 249UL);
                        l_724[2] |= ((&p_63 != l_717) <= (safe_mod_func_uint16_t_u_u(((safe_unary_minus_func_uint16_t_u((*l_467))) | ((*l_505) = g_352)), (safe_sub_func_int16_t_s_s((*l_698), ((p_64 ^ ((*l_723) |= ((0x02L != p_64) > (((g_416[5] & g_514) || (**p_62)) > (**p_62))))) || p_64))))));
                        l_744 |= (safe_sub_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u(((safe_lshift_func_int8_t_s_u((safe_lshift_func_uint8_t_u_u(0x11L, (((((l_724[2] |= (safe_mod_func_uint16_t_u_u(l_735, (safe_sub_func_uint16_t_u_u(0x56D6L, 1L))))) < ((**p_62) < ((safe_lshift_func_uint8_t_u_s((safe_rshift_func_uint16_t_u_u(l_638, 9)), 4)) ^ l_638))) & p_64) & 0x4698L) ^ l_742[3][5]))), p_65)) ^ 1L), 0x6B43L)), l_743));
                    }
                    else
                    {
                        int **l_746 = &g_680;
                        (*l_746) = l_745;

                        ;
                        (**l_746) &= 0x0F9BE25DL;
                        (*l_686) |= (-7L);
                    }
                    if (p_65)
                        break;
                    (*g_190) = l_747;

                    ;
                }

                ;
                ;
                (*l_698) |= p_63;
                for (l_79 = 6; (l_79 >= 2); l_79 -= 1)
                {
                    unsigned l_755 = 4294967293UL;
                    int l_756 = 0xFE58BA57L;
                    int **l_763 = &l_108;
                    for (p_63 = 0; (p_63 <= 6); p_63 += 1)
                    {
                        char l_752[10][4][6] = {{{7L,0L,0xE8L,(-1L),(-2L),7L},{0x8DL,0x1BL,0L,0x12L,(-2L),0x53L},{(-2L),0L,0x60L,0x5AL,0x24L,0L},{0xEDL,(-1L),0x5AL,(-2L),0x8DL,0x53L}},{{7L,(-2L),(-1L),0xE8L,0L,7L},{7L,7L,(-1L),(-2L),(-2L),(-1L)},{0xEDL,0xEDL,0L,0x5AL,0L,0x8DL},{(-2L),7L,0x5AL,0x12L,0x24L,0L}},{{0x8DL,(-2L),0x5AL,(-1L),9L,7L},{0x24L,0x5AL,0x60L,0L,(-2L),(-9L)},{0L,(-2L),(-9L),0x5AL,0x3AL,0x24L},{9L,0xE8L,0x5AL,0xEDL,0x3AL,(-1L)}},{{0x3AL,(-2L),0x1BL,0x1BL,(-2L),0x3AL},{7L,0x5AL,0x53L,0x12L,9L,(-1L)},{0L,0x12L,0x60L,7L,0L,0x24L},{0L,(-1L),7L,0x12L,0x3AL,(-9L)}},{{7L,9L,0x5AL,0x1BL,0x12L,7L},{0x3AL,(-1L),0x53L,0xEDL,(-2L),0x60L},{9L,0x12L,0x53L,0x5AL,7L,7L},{0L,0x5AL,0x5AL,0L,0L,(-9L)}},{{0x24L,(-2L),7L,0x5AL,0x12L,0x24L},{7L,0xE8L,0x60L,0xEDL,0x12L,(-1L)},{0x12L,(-2L),0x53L,0x1BL,0L,0x3AL},{9L,0x5AL,0x1BL,0x12L,7L,(-1L)}},{{0x24L,0x12L,0x5AL,0x5AL,0xEDL,0x3AL},{0x3AL,0x1BL,0x60L,9L,9L,0x60L},{(-2L),(-2L),(-1L),7L,7L,0L},{9L,0x1BL,7L,0L,0x8DL,(-1L)}},{{0L,9L,7L,0xE8L,(-2L),0L},{0x3AL,0xE8L,(-1L),0x12L,0xEDL,0x60L},{0x12L,0xEDL,0x60L,0xE8L,7L,0x3AL},{(-2L),(-1L),0xE8L,0L,7L,0L}},{{7L,0xEDL,7L,7L,0xEDL,7L},{0L,0xE8L,(-9L),9L,(-2L),0L},{0x12L,9L,(-1L),0x5AL,0x8DL,0x3AL},{0x12L,0x1BL,0x5AL,9L,7L,0x60L}},{{0L,(-2L),0xE8L,7L,9L,0L},{7L,0x1BL,(-9L),0L,0xEDL,(-1L)},{(-2L),9L,(-9L),0xE8L,0L,0L},{0x12L,0xE8L,0xE8L,0x12L,0x8DL,0x60L}}};
                        int i, j, k;
                        l_756 = ((*l_467) = (safe_mod_func_int16_t_s_s(((safe_add_func_uint8_t_u_u(p_65, ((*g_26) != l_752[8][3][5]))) || (((*l_505) |= ((*l_108) & (safe_lshift_func_uint16_t_u_s(((*g_260) && ((l_755 == func_95(&g_26, p_62, (+l_638))) >= g_20[6])), (**p_62))))) == 0x7BL)), (**p_62))));
                        (*l_467) = (safe_unary_minus_func_int16_t_s((**p_62)));
                    }
                    if ((*g_680))
                        continue;
                    for (g_519 = 0; (g_519 <= 7); g_519 += 1)
                    {
                        const short l_760 = 6L;
                        int **l_762 = &l_698;
                        l_761 = ((*l_467) = (safe_add_func_uint16_t_u_u(l_760, ((0L & (0xB7L < l_638)) >= p_63))));
                        (*l_762) = &l_79;

                        ;
                    }
                    (*l_763) = &l_638;

                    ;
                    for (g_36 = 0; (g_36 <= 7); g_36 += 1)
                    {
                        if ((*l_698))
                            break;
                    }
                }

                ;
                ;
            }

            ;
            ;
            ;
            ;
            ;
            return l_682;



        }
    }
    return &g_38[2][7];


}







static const short func_66(unsigned p_67)
{
    return (*g_26);
}







static unsigned func_75(unsigned p_76, int p_77)
{
    int *l_83 = &g_84;
    (*l_83) ^= g_22;
    (*l_83) = (&g_84 != (void*)0);
    (*l_83) = (*l_83);
    return g_38[1][0];
}







static short func_95(short ** p_96, short ** p_97, char p_98)
{
    const int *l_132 = (void*)0;
    const int **l_133 = (void*)0;
    const int **l_134 = &l_132;
    unsigned *l_162 = (void*)0;
    unsigned **l_161 = &l_162;
    int l_168 = 1L;
    unsigned l_264[6][2][6] = {{{1UL,4294967294UL,0x44842A39L,0xBE95A311L,0x18556120L,4UL},{5UL,1UL,1UL,4UL,4294967290UL,0x14E7BC7DL}},{{0xBE95A311L,1UL,0x4B52CCDEL,0x18556120L,0x18556120L,0x4B52CCDEL},{0x1C282667L,0x1C282667L,1UL,1UL,0x14E7BC7DL,7UL}},{{4294967295UL,0x18556120L,0x925EA103L,5UL,4294967294UL,1UL},{4294967290UL,4294967295UL,0x925EA103L,7UL,0x1C282667L,7UL}},{{1UL,7UL,1UL,4UL,0x44842A39L,0x4B52CCDEL},{4UL,0x44842A39L,0x4B52CCDEL,4294967294UL,0x6277879FL,0x14E7BC7DL}},{{1UL,0x4B52CCDEL,1UL,4294967294UL,4UL,4UL},{4UL,4UL,4UL,4UL,4294967295UL,0x18556120L}},{{1UL,1UL,0x14E7BC7DL,7UL,1UL,0x925EA103L},{4294967290UL,4294967294UL,0x1C282667L,5UL,1UL,0x44842A39L}}};
    short *l_278 = &g_20[6];
    int l_291 = (-1L);
    unsigned short *l_307 = &g_151[3][0][4];
    int l_363[1];
    int l_366[8][10] = {{2L,8L,0x9B7925D8L,0L,0L,0xD1224F21L,0xECD880B4L,0xD77B6DBFL,0xDEBA6F05L,0xDEBA6F05L},{0xCFAF8275L,0L,0x6184F68CL,2L,2L,0x6184F68CL,0L,0xCFAF8275L,0x9E5B1991L,0x5A254498L},{0xF7D19A89L,0xCFAF8275L,0xA95AF831L,0x2E78720EL,0x5A38B45EL,(-4L),0xA95AF831L,9L,0L,0xDE0FEB45L},{0x6184F68CL,0L,(-1L),0xECD880B4L,0xCFAF8275L,9L,2L,0x2E78720EL,0x3B035780L,0x2E78720EL},{0xAC9F45F8L,(-4L),0L,0xDEBA6F05L,0L,(-4L),0xAC9F45F8L,0x6184F68CL,0x562DB6BAL,5L},{0x5A254498L,0L,8L,5L,6L,0xD77B6DBFL,(-1L),0x9E5B1991L,(-3L),0x6184F68CL},{0x9E5B1991L,0L,0L,8L,9L,0x9B7925D8L,0xAC9F45F8L,5L,5L,0xAC9F45F8L},{0L,(-4L),0xD77B6DBFL,0xD77B6DBFL,(-4L),0L,2L,0xF7D19A89L,0xA95AF831L,0x5A254498L}};
    const unsigned short l_403[1][8] = {{0x20B9L,0x20B9L,0x20B9L,0x20B9L,0x20B9L,0x20B9L,0x20B9L,0x20B9L}};
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_363[i] = 0x8AE3CA7AL;
    (*l_134) = l_132;
    for (p_98 = 0; (p_98 != 7); p_98++)
    {
        unsigned l_139 = 2UL;
        short l_149 = 0x3E86L;
        int *l_163 = (void*)0;
        unsigned char *l_259 = &g_122[1];
        char l_263 = 0xF1L;
        int l_300 = 0x36A20685L;
        unsigned l_301 = 0UL;
        unsigned short **l_314 = &l_307;
        short *l_390 = &g_352;
        int l_399 = 0xA5EAFDB9L;
        char *l_427[2];
        int i;
        for (i = 0; i < 2; i++)
            l_427[i] = &l_263;
    }
    return (*g_26);
}







static short ** func_99(int p_100, unsigned p_101, int * const p_102, char p_103)
{
    int *l_119 = &g_84;
    int * const *l_118 = &l_119;
    short **l_123[10] = {&g_26,&g_26,&g_26,&g_26,&g_26,&g_26,&g_26,&g_26,&g_26,&g_26};
    int **l_130[1];
    int i;
    for (i = 0; i < 1; i++)
        l_130[i] = &l_119;
    for (g_22 = 0; (g_22 <= 3); g_22 += 1)
    {
        int *l_115 = &g_17;
        (*p_102) = (*p_102);
        for (p_100 = 3; (p_100 >= 0); p_100 -= 1)
        {
            int **l_116 = &l_115;
            int ***l_117 = &l_116;
            unsigned *l_127 = &g_38[2][7];
            unsigned **l_126 = &l_127;
            (*l_116) = l_115;
            if ((~((((*l_117) = l_116) != l_118) & 0xB2A2L)))
            {
                int i, j;
                (*l_119) = g_38[g_22][(p_100 + 4)];
            }
            else
            {
                short *l_124 = &g_20[6];
                if (((*p_102) &= ((g_122[1] = ((*l_119) = (safe_lshift_func_uint8_t_u_u(p_103, g_20[6])))) & p_103)))
                {
                    for (g_36 = 0; (g_36 <= 9); g_36 += 1)
                    {
                        (**l_118) = (func_75((*l_119), (0x956BL <= (*g_26))) != g_20[2]);
                        if ((**l_118))
                            break;
                        (**l_117) = &p_100;

                        ;
                    }

                    ;
                    for (g_4 = 3; (g_4 >= 0); g_4 -= 1)
                    {
                        return &g_26;


                    }
                    return l_123[5];


                }
                else
                {
                    for (g_42 = 0; (g_42 <= 3); g_42 += 1)
                    {
                        int * const **l_125 = &l_118;
                        int i;
                        (**l_118) &= 0x3E716A1BL;
                        (**l_118) = (l_124 != &g_20[6]);
                        (*l_125) = &p_102;

                        ;
                        (**l_117) = &p_100;

                        ;
                    }

                    ;
                }

                ;
                (*l_116) = &p_100;

                ;
            }

            ;
            (**l_117) = (void*)0;

            ;
            (**l_118) |= (((*g_26) < (+((p_103 = (((*l_126) = l_119) == l_115)) && (safe_lshift_func_int8_t_s_u(0x37L, 2))))) != ((*l_118) != (*l_118)));

            ;
        }

        ;
    }

    ;
    g_131[3][4] = &p_100;


    return l_123[5];



}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_17, "g_17", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_20[i], "g_20[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_22, "g_22", print_hash_value);
    transparent_crc(g_36, "g_36", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(g_38[i][j], "g_38[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_42, "g_42", print_hash_value);
    transparent_crc(g_84, "g_84", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_122[i], "g_122[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 8; k++)
            {
                transparent_crc(g_151[i][j][k], "g_151[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_158, "g_158", print_hash_value);
    transparent_crc(g_215, "g_215", print_hash_value);
    transparent_crc(g_339, "g_339", print_hash_value);
    transparent_crc(g_352, "g_352", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_367[i], "g_367[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_381, "g_381", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_416[i], "g_416[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_512, "g_512", print_hash_value);
    transparent_crc(g_514, "g_514", print_hash_value);
    transparent_crc(g_519, "g_519", print_hash_value);
    transparent_crc(g_545, "g_545", print_hash_value);
    transparent_crc(g_792, "g_792", print_hash_value);
    transparent_crc(g_832, "g_832", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_835[i], "g_835[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_844, "g_844", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_979[i], "g_979[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1056, "g_1056", print_hash_value);
    transparent_crc(g_1061, "g_1061", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
