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



static char g_2 = 1L;
static unsigned g_18[10][8][2] = {{{7UL,4294967286UL},{1UL,7UL},{0x7BA96689L,0xFFB91E60L},{0xD2214C25L,4294967295UL},{1UL,4294967294UL},{4294967295UL,0x3279329BL},{0x33B947E2L,0x7DD9AE65L},{4294967286UL,0xC8A81D5FL}},{{0xA0148014L,0xA0148014L},{4294967294UL,0x7DD9AE65L},{0x9DCB7BE7L,4294967291UL},{4294967295UL,4294967286UL},{0x64C9D8D9L,4294967295UL},{0x7BA96689L,0UL},{0x7BA96689L,4294967295UL},{0x64C9D8D9L,4294967286UL}},{{4294967295UL,4294967291UL},{0x9DCB7BE7L,0x7DD9AE65L},{4294967294UL,0xA0148014L},{0xA0148014L,0xC8A81D5FL},{4294967286UL,0x7DD9AE65L},{0x33B947E2L,0x3279329BL},{4294967295UL,4294967294UL},{0xB2D3650DL,0xC8A81D5FL}},{{0x47430797L,0UL},{0x64C9D8D9L,4294967290UL},{0xB2D3650DL,0xD2214C25L},{4294967290UL,0UL},{4294967291UL,0x5EE6D54EL},{0xD2214C25L,0x19F8C517L},{5UL,0x19F8C517L},{0xD2214C25L,0x5EE6D54EL}},{{4294967291UL,0UL},{4294967290UL,0xD2214C25L},{0xB2D3650DL,4294967290UL},{0x64C9D8D9L,0UL},{0x47430797L,0xC8A81D5FL},{0xB2D3650DL,0x6FEC1B16L},{0xC8A81D5FL,0UL},{4294967294UL,0x33B947E2L}},{{0xD2214C25L,5UL},{0x19F8C517L,0x19F8C517L},{0x6FEC1B16L,0x33B947E2L},{4294967291UL,4294967295UL},{0xC8A81D5FL,0xD2214C25L},{0xE60BE628L,0xC8A81D5FL},{0x64C9D8D9L,4294967292UL},{0x64C9D8D9L,0xC8A81D5FL}},{{0xE60BE628L,0xD2214C25L},{0xC8A81D5FL,4294967295UL},{4294967291UL,0x33B947E2L},{0x6FEC1B16L,0x19F8C517L},{0x19F8C517L,5UL},{0xD2214C25L,0x33B947E2L},{4294967294UL,0UL},{0xC8A81D5FL,0x6FEC1B16L}},{{0xB2D3650DL,0xC8A81D5FL},{0x47430797L,0UL},{0x64C9D8D9L,4294967290UL},{0xB2D3650DL,0xD2214C25L},{4294967290UL,0UL},{4294967291UL,0x5EE6D54EL},{0xD2214C25L,0x19F8C517L},{5UL,0x19F8C517L}},{{0xD2214C25L,0x5EE6D54EL},{4294967291UL,0UL},{4294967290UL,0xD2214C25L},{0xB2D3650DL,4294967290UL},{0x64C9D8D9L,0UL},{0x47430797L,0xC8A81D5FL},{0xB2D3650DL,4294967290UL},{0UL,0x64C9D8D9L}},{{0x6FEC1B16L,4294967294UL},{0xC8A81D5FL,4294967292UL},{0UL,0UL},{4294967290UL,4294967294UL},{0xD2214C25L,0x47430797L},{0UL,0xC8A81D5FL},{0x5EE6D54EL,0UL},{0x19F8C517L,0xE60BE628L}}};
static int g_49 = 0xC17B1AB3L;
static int g_71[4][2][10] = {{{0xAB26C3A7L,0x52566A56L,0xC77BB9FEL,0x3C996909L,0x4F7CDB24L,(-7L),0x92EBBAE6L,0L,0x92EBBAE6L,(-7L)},{7L,0x4F7CDB24L,0xC77BB9FEL,0x4F7CDB24L,7L,0L,0x7B07E043L,0x3C996909L,7L,0xF0789CDEL}},{{0x7B07E043L,0xF437236CL,0xF0789CDEL,0L,0xC797A355L,0x6DFA21EBL,0x6DFA21EBL,0xC797A355L,0L,0xF0789CDEL},{0L,0L,0x52566A56L,0xF0789CDEL,7L,(-10L),0xC797A355L,0xC77BB9FEL,6L,(-7L)}},{{0xC77BB9FEL,0x92EBBAE6L,0xC797A355L,7L,0x4F7CDB24L,7L,0xC797A355L,0x92EBBAE6L,0xC77BB9FEL,0L},{0xF437236CL,0L,6L,7L,(-7L),0xAB26C3A7L,0x6DFA21EBL,0x4F7CDB24L,0x4F7CDB24L,0x6DFA21EBL}},{{0x92EBBAE6L,0xF437236CL,7L,7L,0xF437236CL,0x92EBBAE6L,0x7B07E043L,0xAB26C3A7L,0xC77BB9FEL,(-10L)},{(-10L),0x4F7CDB24L,0L,7L,6L,0x52566A56L,0x92EBBAE6L,0x92EBBAE6L,(-7L),0x4F7CDB24L}}};
static unsigned g_141 = 0x71F4BA9CL;
static int *g_156 = &g_71[1][0][3];
static int *g_231 = (void*)0;
static int ***g_276 = (void*)0;
static int **g_306[5] = {&g_231,&g_231,&g_231,&g_231,&g_231};
static int g_384 = (-5L);
static unsigned g_472[3][6] = {{5UL,3UL,3UL,5UL,3UL,3UL},{5UL,3UL,3UL,5UL,3UL,3UL},{5UL,3UL,3UL,5UL,3UL,3UL}};
static unsigned g_491 = 0xE3F2E87FL;
static int *g_536 = &g_71[3][1][0];
static int *g_730[10] = {&g_71[0][1][8],&g_71[2][1][2],&g_71[0][1][8],&g_71[2][1][2],&g_71[0][1][8],&g_71[2][1][2],&g_71[0][1][8],&g_71[2][1][2],&g_71[0][1][8],&g_71[2][1][2]};
static unsigned g_889 = 4294967295UL;
static int g_1009[3][5][6] = {{{(-4L),0x2EF65F76L,0x2EF65F76L,(-4L),0L,(-1L)},{7L,0L,1L,0L,1L,(-2L)},{1L,7L,0L,0xE93C38C9L,1L,0xE93C38C9L},{0x829CD2D4L,0L,0x829CD2D4L,(-2L),0L,7L},{(-1L),0x2EF65F76L,0xA92F487DL,(-2L),7L,0L}},{{0L,0xE93C38C9L,(-2L),(-2L),(-2L),(-2L)},{(-1L),(-1L),0L,(-2L),0xA92F487DL,0x829CD2D4L},{0x829CD2D4L,1L,(-1L),0xE93C38C9L,0x2EF65F76L,0L},{1L,0x829CD2D4L,(-1L),0L,(-1L),0x829CD2D4L},{7L,0L,0L,(-4L),(-1L),7L}},{{0L,(-2L),7L,1L,0x2EF65F76L,0x829CD2D4L},{0xE93C38C9L,(-2L),(-2L),(-2L),(-2L),0xE93C38C9L},{(-2L),1L,0xA92F487DL,7L,1L,0L},{(-2L),0xA92F487DL,0x2EF65F76L,(-1L),(-1L),0L},{(-2L),7L,(-1L),7L,(-2L),1L}}};
static int *g_1135 = &g_49;
static int *g_1141 = (void*)0;
static int *g_1171 = &g_1009[1][2][4];
static int *g_1219 = &g_49;
static unsigned char g_1279 = 0xFDL;
static int *g_1335[4] = {&g_1009[0][2][2],&g_1009[0][2][2],&g_1009[0][2][2],&g_1009[0][2][2]};
static unsigned short g_1342 = 0UL;
static unsigned g_1354[6][9][4] = {{{1UL,1UL,0x2B2384D9L,4294967292UL},{0x03AFF422L,0UL,0x5E6C1F76L,0UL},{0x23307C45L,0x3C8BED39L,0x5E6C1F76L,0xC24ED003L},{0x03AFF422L,0x026A6691L,0x2B2384D9L,4UL},{1UL,0x3C8BED39L,0UL,1UL},{1UL,0UL,0x2B2384D9L,4294967292UL},{0x03AFF422L,1UL,0x5E6C1F76L,1UL},{0x23307C45L,0x4139AC11L,0x5E6C1F76L,4UL},{0x03AFF422L,0x229F2AF0L,0x2B2384D9L,0xC24ED003L}},{{1UL,0x4139AC11L,0UL,0UL},{1UL,1UL,0x2B2384D9L,4294967292UL},{0x03AFF422L,0UL,0x5E6C1F76L,0UL},{0x23307C45L,0x3C8BED39L,0x5E6C1F76L,0xC24ED003L},{0x03AFF422L,0x026A6691L,0x2B2384D9L,4UL},{1UL,0x3C8BED39L,0UL,1UL},{0x23307C45L,0x026A6691L,4294967295UL,0UL},{0x5F59DDABL,0x229F2AF0L,0UL,0x229F2AF0L},{0x03AFF422L,4UL,0UL,4294967292UL}},{{0x5F59DDABL,0x3C8BED39L,4294967295UL,4294967292UL},{0x23307C45L,4UL,0x2B2384D9L,0x026A6691L},{0x23307C45L,0x229F2AF0L,4294967295UL,1UL},{0x5F59DDABL,0x026A6691L,0UL,0x026A6691L},{0x03AFF422L,0xC24ED003L,0UL,4294967292UL},{0x5F59DDABL,0x4139AC11L,4294967295UL,4294967292UL},{0x23307C45L,0xC24ED003L,0x2B2384D9L,0x229F2AF0L},{0x23307C45L,0x026A6691L,4294967295UL,0UL},{0x5F59DDABL,0x229F2AF0L,0UL,0x229F2AF0L}},{{0x03AFF422L,4UL,0UL,4294967292UL},{0x5F59DDABL,0x3C8BED39L,4294967295UL,4294967292UL},{0x23307C45L,4UL,0x2B2384D9L,0x026A6691L},{0x23307C45L,0x229F2AF0L,4294967295UL,1UL},{0x5F59DDABL,0x026A6691L,0UL,0x026A6691L},{0x03AFF422L,0xC24ED003L,0UL,4294967292UL},{0x5F59DDABL,0x4139AC11L,4294967295UL,4294967292UL},{0x23307C45L,0xC24ED003L,0x2B2384D9L,0x229F2AF0L},{0x23307C45L,0x026A6691L,4294967295UL,0UL}},{{0x5F59DDABL,0x229F2AF0L,0UL,0x229F2AF0L},{0x03AFF422L,4UL,0UL,4294967292UL},{0x5F59DDABL,0x3C8BED39L,4294967295UL,4294967292UL},{1UL,0x026A6691L,0x5E6C1F76L,4294967292UL},{1UL,4294967292UL,0UL,0xC24ED003L},{0x23307C45L,4294967292UL,0xFB463F7DL,4294967292UL},{1UL,0x229F2AF0L,0xFB463F7DL,0x3C8BED39L},{0x23307C45L,0UL,0UL,0x4139AC11L},{1UL,0x229F2AF0L,0x5E6C1F76L,4294967292UL}},{{1UL,4294967292UL,0UL,4UL},{0x23307C45L,4294967292UL,0xFB463F7DL,4294967292UL},{1UL,0x026A6691L,0xFB463F7DL,0x4139AC11L},{0x23307C45L,1UL,0UL,0x3C8BED39L},{1UL,0x026A6691L,0x5E6C1F76L,4294967292UL},{1UL,4294967292UL,0UL,0xC24ED003L},{0x23307C45L,4294967292UL,0xFB463F7DL,4294967292UL},{1UL,0x229F2AF0L,0xFB463F7DL,0x3C8BED39L},{0x23307C45L,0UL,0UL,0x4139AC11L}}};



static short func_1(void);
static char func_4(int p_5, short p_6, unsigned char p_7);
static unsigned short func_8(unsigned char p_9, char p_10);
static unsigned func_21(unsigned p_22, unsigned p_23);
static int func_24(int p_25, unsigned char p_26);
static char func_31(short p_32, int p_33, unsigned p_34, unsigned p_35);
static int func_36(unsigned char p_37, unsigned short p_38, char p_39, int p_40);
static unsigned char func_41(short p_42, int p_43, unsigned p_44, char p_45);
static int * func_51(unsigned char p_52, short p_53, unsigned p_54);
static unsigned char func_55(short p_56, int * p_57, int * p_58, int * p_59);
static short func_1(void)
{
    unsigned short l_3 = 0x1BF2L;
    char l_17 = 7L;
    unsigned char l_1380 = 0x4AL;
    unsigned l_1381[2];
    int **l_1382 = &g_231;
    char l_1388 = 1L;
    int i;
    for (i = 0; i < 2; i++)
        l_1381[i] = 4294967295UL;
    l_1381[1] = (((g_2 > (l_3 <= 0x99L)) == g_2) == (func_4((func_8(((safe_lshift_func_int8_t_s_s((0x77CC4247L >= ((safe_mul_func_int16_t_s_s(g_2, 0x2AF0L)) | ((safe_lshift_func_uint8_t_u_s(0x65L, ((0x2FL & g_2) || l_17))) <= l_3))), g_2)) != g_2), l_17) && l_17), g_1354[5][3][0], g_1354[1][4][1]) & l_1380));
    g_306[3] = l_1382;
    (*l_1382) = (void*)0;
    (*l_1382) = func_51(g_889, ((((g_1009[2][4][0] || l_1380) < 0UL) <= g_472[1][4]) != ((((safe_lshift_func_int8_t_s_s((safe_unary_minus_func_uint32_t_u((safe_add_func_uint32_t_u_u(func_41(g_1279, (g_49 ^ l_1388), (safe_lshift_func_int16_t_s_u(((l_1382 == (void*)0) ^ 0x0EF0L), g_49)), g_1009[2][0][5]), 0xCA5EFFC9L)))), 4)) != l_17) & g_1354[4][8][3]) <= 0L)), g_1354[5][3][0]);
    return g_889;
}







static char func_4(int p_5, short p_6, unsigned char p_7)
{
    return g_1279;
}







static unsigned short func_8(unsigned char p_9, char p_10)
{
    unsigned char l_46 = 0x72L;
    int *l_1276 = &g_49;
    int *l_1277[5][5][6] = {{{&g_1009[2][2][2],&g_71[2][1][0],&g_1009[2][2][2],&g_1009[2][1][1],&g_1009[1][2][4],&g_71[3][0][4]},{&g_49,&g_71[1][1][2],&g_1009[2][0][0],(void*)0,&g_1009[2][0][0],&g_71[1][1][2]},{&g_1009[1][2][4],&g_71[2][1][0],&g_49,(void*)0,&g_71[2][1][4],&g_1009[2][1][1]},{&g_49,&g_1009[2][1][1],&g_49,&g_1009[2][1][1],&g_49,&g_71[1][1][2]},{&g_1009[2][2][2],&g_1009[2][1][1],&g_1009[1][2][4],&g_71[3][0][4],&g_71[2][1][4],&g_71[3][0][4]}},{{(void*)0,&g_71[2][1][0],(void*)0,&g_1009[2][1][1],&g_1009[2][0][0],&g_1009[2][1][1]},{&g_71[2][1][4],&g_71[2][1][0],&g_1009[1][2][4],&g_71[3][0][4],&g_1009[1][2][4],&g_71[2][1][0]},{&g_49,(void*)0,(void*)0,&g_71[3][0][4],&g_49,&g_71[1][1][2]},{&g_71[2][1][4],&g_71[1][1][2],&g_1009[2][2][2],&g_71[1][1][2],&g_71[2][1][4],&g_71[2][1][0]},{&g_1009[2][0][0],&g_71[1][1][2],&g_49,&g_1009[2][1][1],&g_49,&g_1009[2][1][1]}},{{&g_1009[1][2][4],(void*)0,&g_1009[1][2][4],&g_71[1][1][2],&g_1009[1][2][4],&g_1009[2][1][1]},{&g_71[0][1][9],&g_71[2][1][0],&g_49,&g_71[3][0][4],&g_49,&g_71[2][1][0]},{&g_1009[1][2][4],(void*)0,&g_1009[2][2][2],&g_71[3][0][4],&g_49,&g_71[1][1][2]},{&g_71[0][1][9],&g_71[1][1][2],(void*)0,&g_71[1][1][2],&g_71[0][1][9],&g_71[2][1][0]},{&g_1009[1][2][4],&g_71[1][1][2],&g_1009[1][2][4],&g_1009[2][1][1],&g_49,&g_1009[2][1][1]}},{{&g_1009[2][0][0],(void*)0,&g_1009[2][0][0],&g_71[1][1][2],&g_49,&g_1009[2][1][1]},{&g_71[2][1][4],&g_71[2][1][0],&g_1009[1][2][4],&g_71[3][0][4],&g_1009[1][2][4],&g_71[2][1][0]},{&g_49,(void*)0,(void*)0,&g_71[3][0][4],&g_49,&g_71[1][1][2]},{&g_71[2][1][4],&g_71[1][1][2],&g_1009[2][2][2],&g_71[1][1][2],&g_71[2][1][4],&g_71[2][1][0]},{&g_1009[2][0][0],&g_71[1][1][2],&g_49,&g_1009[2][1][1],&g_49,&g_1009[2][1][1]}},{{&g_1009[1][2][4],(void*)0,&g_1009[1][2][4],&g_71[1][1][2],&g_1009[1][2][4],&g_1009[2][1][1]},{&g_71[0][1][9],&g_71[2][1][0],&g_49,&g_71[3][0][4],&g_49,&g_1009[2][1][1]},{&g_1009[2][2][2],&g_71[1][1][2],&g_71[2][1][4],&g_71[2][1][0],&g_1009[1][2][4],&g_71[3][0][4]},{&g_1009[2][0][0],&g_71[3][0][4],&g_71[0][1][9],&g_71[3][0][4],&g_1009[2][0][0],&g_1009[2][1][1]},{&g_49,&g_71[3][0][4],&g_1009[2][2][2],(void*)0,&g_1009[1][2][4],(void*)0}}};
    int ***l_1326 = &g_306[3];
    int l_1364 = 0x89D59528L;
    int *l_1365 = &g_1009[1][4][2];
    int *l_1377[8][8][4] = {{{&g_49,(void*)0,&g_71[3][0][1],&g_71[3][0][3]},{&g_1009[1][2][4],&g_1009[1][2][4],&g_71[1][0][4],&g_71[3][0][5]},{&g_1009[1][1][3],&g_71[3][0][9],&g_1009[1][1][3],&g_49},{(void*)0,&g_49,(void*)0,&g_71[3][0][3]},{(void*)0,&g_71[1][1][2],&g_1009[1][2][4],&g_49},{&g_1009[1][2][4],(void*)0,&g_1009[1][2][4],&g_1009[1][1][3]},{(void*)0,&g_1009[1][2][4],(void*)0,(void*)0},{(void*)0,&g_71[2][0][0],&g_1009[1][1][3],&g_1009[1][2][4]}},{{&g_1009[1][1][3],&g_1009[1][2][4],&g_71[1][0][4],&g_71[1][1][2]},{&g_1009[1][2][4],&g_1009[1][2][4],&g_71[3][0][1],&g_1009[1][2][4]},{&g_49,&g_1009[1][2][4],&g_1009[1][2][4],&g_49},{&g_1009[1][2][4],(void*)0,&g_49,&g_1009[1][2][4]},{&g_1009[1][2][4],&g_49,&g_71[2][0][0],&g_71[3][0][5]},{&g_1009[1][2][4],(void*)0,&g_1009[1][1][3],&g_71[3][0][5]},{&g_71[1][0][4],&g_49,&g_71[2][0][0],&g_1009[1][2][4]},{(void*)0,(void*)0,&g_1009[1][1][1],&g_49}},{{(void*)0,&g_1009[1][2][4],&g_1009[1][2][4],&g_1009[1][2][4]},{&g_49,&g_1009[1][2][4],&g_71[2][0][0],&g_71[1][1][2]},{(void*)0,&g_1009[1][2][4],&g_1009[1][2][4],&g_1009[1][2][4]},{&g_71[1][0][4],(void*)0,&g_49,&g_49},{(void*)0,(void*)0,&g_49,&g_71[2][0][0]},{&g_1009[1][1][3],&g_71[1][1][2],(void*)0,&g_1009[1][1][3]},{&g_1009[1][1][3],&g_71[3][0][1],&g_49,&g_71[2][0][0]},{(void*)0,&g_1009[1][1][3],&g_49,&g_1009[1][1][1]}},{{&g_71[1][0][4],&g_49,(void*)0,&g_1009[1][2][4]},{&g_1009[1][2][4],&g_1009[1][2][4],(void*)0,&g_71[2][0][0]},{&g_49,&g_49,&g_1009[1][2][4],&g_1009[1][2][4]},{&g_71[1][1][2],&g_71[1][1][2],&g_1009[1][2][4],&g_71[1][0][4]},{&g_1009[1][2][4],&g_71[0][0][8],(void*)0,&g_49},{&g_49,&g_1009[1][2][4],&g_71[2][0][0],(void*)0},{&g_71[1][0][4],&g_1009[1][2][4],&g_71[3][0][3],&g_49},{&g_1009[1][2][4],&g_71[0][0][8],&g_49,&g_71[1][0][4]}},{{&g_1009[1][2][4],&g_71[1][1][2],&g_1009[1][2][4],&g_1009[1][2][4]},{&g_1009[1][1][3],&g_49,&g_1009[1][2][4],&g_71[2][0][0]},{&g_1009[1][2][4],&g_1009[1][2][4],&g_49,&g_1009[1][2][4]},{&g_71[2][0][0],&g_49,&g_71[2][0][0],&g_1009[1][1][1]},{&g_1009[1][2][4],&g_1009[1][1][3],(void*)0,&g_71[2][0][0]},{&g_1009[1][2][4],&g_71[3][0][1],&g_1009[1][2][4],&g_1009[1][1][3]},{&g_1009[1][2][4],&g_71[1][1][2],&g_1009[1][2][4],&g_71[2][0][0]},{&g_1009[1][2][4],(void*)0,(void*)0,&g_49}},{{&g_1009[1][2][4],(void*)0,&g_71[2][0][0],&g_1009[1][2][4]},{&g_71[2][0][0],&g_1009[1][2][4],&g_49,&g_71[3][0][1]},{&g_1009[1][2][4],(void*)0,&g_1009[1][2][4],&g_71[1][1][2]},{&g_1009[1][2][4],(void*)0,(void*)0,&g_1009[1][2][4]},{(void*)0,&g_1009[1][2][4],&g_1009[1][2][4],&g_49},{(void*)0,&g_1009[1][2][4],(void*)0,&g_71[2][0][0]},{&g_71[1][1][2],&g_49,&g_1009[1][2][4],&g_71[2][0][0]},{&g_71[3][0][1],&g_1009[1][2][4],&g_71[0][0][8],&g_49}},{{&g_1009[1][1][3],&g_1009[1][2][4],(void*)0,&g_1009[1][2][4]},{&g_49,(void*)0,(void*)0,&g_71[1][1][2]},{&g_1009[1][2][4],&g_71[1][0][4],&g_71[0][0][8],&g_1009[1][1][1]},{&g_49,(void*)0,(void*)0,(void*)0},{&g_71[1][1][2],&g_71[0][0][8],&g_71[3][0][1],&g_1009[1][2][4]},{&g_71[0][0][8],&g_71[1][0][4],&g_1009[1][2][4],&g_1009[1][2][4]},{&g_1009[1][2][4],&g_49,&g_71[3][0][5],&g_1009[1][2][4]},{&g_1009[1][2][4],&g_1009[1][1][1],&g_1009[1][2][4],&g_1009[1][2][4]}},{{&g_71[0][0][8],&g_1009[1][2][4],&g_71[3][0][1],(void*)0},{&g_71[1][1][2],&g_1009[1][2][4],(void*)0,&g_71[2][0][0]},{&g_49,(void*)0,&g_71[0][0][8],&g_1009[1][2][4]},{&g_1009[1][2][4],&g_1009[1][2][4],(void*)0,(void*)0},{&g_49,&g_49,(void*)0,&g_71[1][1][2]},{&g_1009[1][1][3],&g_71[2][0][0],&g_71[0][0][8],&g_1009[1][2][4]},{&g_71[3][0][1],(void*)0,&g_1009[1][2][4],&g_71[0][0][8]},{&g_71[1][1][2],(void*)0,(void*)0,&g_1009[1][2][4]}}};
    unsigned short l_1379[3][9][3] = {{{0x42F0L,0x42F0L,65528UL},{0x3B1CL,0x42F0L,65528UL},{65535UL,0x0505L,0x42F0L},{0x9006L,0xD59EL,65535UL},{0xCEE7L,65528UL,4UL},{4UL,0x442AL,0x442AL},{0x3B1CL,0UL,0x9006L},{0x3B1CL,0x9006L,0xCEE7L},{4UL,0UL,65528UL}},{{0xCEE7L,0x42F0L,0xDBC7L},{0x42F0L,0UL,65530UL},{65528UL,0x9006L,65528UL},{0UL,0UL,65528UL},{4UL,0x442AL,65530UL},{65530UL,65528UL,0xDBC7L},{0UL,0x0505L,65528UL},{65530UL,0xC1B6L,0xCEE7L},{4UL,4UL,0x9006L}},{{0UL,4UL,0x442AL},{65528UL,0xC1B6L,4UL},{0x42F0L,0x0505L,65535UL},{0xCEE7L,65528UL,4UL},{4UL,0x442AL,0x442AL},{0x3B1CL,0UL,0x9006L},{0x3B1CL,0x9006L,0xCEE7L},{4UL,0UL,65528UL},{0xCEE7L,0x42F0L,0xDBC7L}}};
    int i, j, k;
    for (p_10 = 1; (p_10 >= 0); p_10 -= 1)
    {
        unsigned short l_1263 = 0x1A07L;
        unsigned l_1264 = 0UL;
        int ***l_1270[4];
        int l_1278 = 0x8333A646L;
        unsigned l_1283 = 4294967295UL;
        int i;
        for (i = 0; i < 4; i++)
            l_1270[i] = &g_306[3];
        for (p_9 = 0; (p_9 <= 1); p_9 += 1)
        {
            short l_1240 = 0x9974L;
            int *l_1260[3];
            int i;
            for (i = 0; i < 3; i++)
                l_1260[i] = &g_1009[1][2][4];
            (*g_1219) = (((safe_lshift_func_int16_t_s_u((!0x28D8L), 0)) >= g_18[1][1][0]) == func_21((func_24(((g_2 > (safe_rshift_func_uint8_t_u_u((g_18[9][7][0] > 0x47E13251L), (safe_sub_func_int8_t_s_s(func_31(g_18[9][5][1], func_36(p_9, (((-8L) <= func_41(p_9, l_46, p_10, p_9)) < 0xBFE5E439L), p_9, p_10), g_889, l_46), l_1240))))) > g_889), g_18[2][0][1]) && 0L), p_10));
            for (g_49 = 1; (g_49 >= 0); g_49 -= 1)
            {
                unsigned l_1252 = 0x16CA65E0L;
                int *l_1271 = &g_1009[2][3][4];
                int *l_1272 = (void*)0;
                for (l_1240 = 0; (l_1240 <= 1); l_1240 += 1)
                {
                    int *l_1259 = &g_1009[1][2][4];
                    int ***l_1269 = (void*)0;
                    int i, j, k;
                    l_1252 = 0x588A833CL;
                    (*g_1171) = (safe_mul_func_int8_t_s_s(g_18[(p_10 + 8)][(p_10 + 3)][p_9], (safe_mul_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u(g_1009[2][2][4], ((l_1259 != l_1260[0]) ^ g_472[1][4]))), (*l_1259)))));
                    if (p_10)
                        break;
                    l_1259 = func_51(((p_10 && (g_141 >= (safe_add_func_uint8_t_u_u((l_1263 && (((+p_10) && l_1264) && 0L)), ((safe_mod_func_uint16_t_u_u(func_31((((((safe_sub_func_int16_t_s_s(((((~((l_1269 == l_1270[0]) != (!(*l_1259)))) > p_9) == 1L) <= p_10), g_889)) & 1L) <= 0x420E8ED1L) < (-1L)) | g_71[2][0][4]), (*g_1219), p_10, g_18[3][2][0]), p_10)) <= 0x3ABE5F74L))))) != g_1009[1][0][5]), g_2, g_1009[2][3][5]);
                }
                for (l_1252 = 0; (l_1252 <= 1); l_1252 += 1)
                {
                    unsigned l_1273[5] = {3UL,3UL,3UL,3UL,3UL};
                    int i;
                    l_1272 = l_1271;
                    for (g_141 = 0; (g_141 <= 2); g_141 += 1)
                    {
                        int i, j, k;
                        g_1009[p_10][g_141][g_141] = (g_1009[1][2][4] && 1UL);
                        if (p_9)
                            break;
                    }
                    for (g_491 = 0; (g_491 <= 1); g_491 += 1)
                    {
                        l_1260[0] = l_1272;
                        l_1273[3] = 0L;
                    }
                }
            }
        }
        if (func_31(((safe_rshift_func_uint16_t_u_s(((((l_46 != ((-2L) > 0x63295ABCL)) >= func_31(p_9, func_41((*l_1276), (*g_536), g_889, g_472[1][5]), p_9, l_1278)) && (*g_1171)) != g_1009[1][2][4]), 2)) & g_1009[1][2][4]), p_10, p_10, g_1279))
        {
            int *l_1280 = &g_49;
            int l_1290 = 0L;
            int ***l_1325[7][3] = {{&g_306[3],&g_306[3],&g_306[3]},{&g_306[3],&g_306[3],&g_306[3]},{&g_306[3],&g_306[3],&g_306[3]},{&g_306[3],&g_306[3],&g_306[3]},{&g_306[3],&g_306[3],&g_306[3]},{&g_306[3],&g_306[3],&g_306[3]},{&g_306[3],&g_306[3],(void*)0}};
            short l_1334 = 0xF800L;
            int i, j;
            l_1277[2][4][2] = l_1280;
            if (((g_71[0][1][8] != (safe_add_func_int8_t_s_s(l_1283, 1L))) & func_24(g_472[1][4], ((safe_add_func_uint8_t_u_u(g_472[1][4], p_10)) || (safe_add_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u((!((&g_306[4] != l_1270[2]) || (l_1290 > (*l_1280)))), (*l_1276))), g_49))))))
            {
                int l_1291 = 2L;
                (*g_156) = func_24(l_1291, (safe_rshift_func_uint16_t_u_s(((0xBE0DL >= l_1291) & 0x9DL), 13)));
            }
            else
            {
                int *l_1294 = &g_1009[1][0][4];
                if ((*g_536))
                {
                    for (g_491 = 0; (g_491 <= 1); g_491 += 1)
                    {
                        l_1280 = &l_1290;
                        if (p_10)
                            continue;
                        l_1294 = &l_1290;
                    }
                    l_1294 = func_51((*l_1280), g_472[2][5], ((void*)0 != &g_306[1]));
                    return g_1009[1][2][4];
                }
                else
                {
                    char l_1295[6][8][1] = {{{(-1L)},{0L},{0xDEL},{0xEBL},{2L},{0L},{6L},{(-9L)}},{{0x41L},{0x95L},{0x41L},{(-9L)},{6L},{0L},{2L},{0xEBL}},{{0xDEL},{0L},{(-1L)},{1L},{0x04L},{1L},{(-1L)},{0L}},{{0xDEL},{0xEBL},{2L},{0L},{6L},{(-9L)},{0x41L},{0x95L}},{{0x41L},{(-9L)},{6L},{0L},{2L},{0xEBL},{0xDEL},{0L}},{{(-1L)},{1L},{0x04L},{1L},{(-1L)},{0L},{0xDEL},{0xEBL}}};
                    int i, j, k;
                    (*g_156) = (l_1295[1][0][0] || ((safe_lshift_func_int16_t_s_u(0xE4C2L, 7)) <= (*l_1280)));
                    (*g_1135) = l_1295[1][0][0];
                    if (((safe_sub_func_int8_t_s_s((-1L), p_9)) && ((g_2 < (*l_1294)) == ((p_9 || p_9) > g_472[1][4]))))
                    {
                        if ((*g_1171))
                            break;
                        (*l_1280) = (*g_1135);
                        (*g_1135) = p_9;
                    }
                    else
                    {
                        l_1276 = l_1294;
                    }
                }
                for (l_1283 = 0; (l_1283 <= 1); l_1283 += 1)
                {
                    char l_1300 = (-4L);
                    int *l_1301 = &g_1009[0][0][0];
                    if (l_1300)
                        break;
                    l_1294 = l_1301;
                    return p_9;
                }
                (*l_1276) = 0x240B8A49L;
                for (l_46 = 0; (l_46 <= 1); l_46 += 1)
                {
                    int l_1317 = 0xE09A9F1DL;
                    short l_1333[4] = {(-10L),(-10L),(-10L),(-10L)};
                    int i;
                    for (l_1290 = 0; (l_1290 <= 2); l_1290 += 1)
                    {
                        int *l_1316 = &g_1009[l_1290][(p_10 + 3)][(l_46 + 2)];
                        int i, j, k;
                        g_1009[(p_10 + 1)][(l_1290 + 1)][(l_1290 + 2)] = (0x43ADL < (g_1009[l_1290][(p_10 + 3)][(l_46 + 2)] & g_18[1][0][0]));
                        if (p_10)
                            continue;
                        if (p_9)
                            break;
                        l_1316 = func_51(((void*)0 != l_1276), ((!(safe_add_func_int32_t_s_s((safe_mod_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u(g_472[1][0], 8)), (((safe_add_func_int8_t_s_s(0xC9L, g_472[1][4])) || (safe_add_func_uint32_t_u_u(p_10, (safe_rshift_func_int8_t_s_u(p_10, (safe_mul_func_int16_t_s_s(0xBE5AL, (-1L)))))))) | g_1279))), g_2))) < 0x3CB4L), g_2);
                    }
                }
            }
        }
        else
        {
            (*g_1219) = p_9;
            return g_889;
        }
        if (p_9)
        {
            int l_1343 = (-1L);
            int *l_1345 = &g_1009[1][2][4];
            int *l_1350 = (void*)0;
            int l_1353 = 0L;
            short l_1363 = 0xAF8CL;
            for (l_46 = 0; (l_46 <= 1); l_46 += 1)
            {
                int **l_1348 = &l_1277[1][2][5];
                for (l_1278 = 0; (l_1278 <= 1); l_1278 += 1)
                {
                    unsigned l_1341 = 0xCB6C0F4CL;
                    int *l_1344[6];
                    int i;
                    for (i = 0; i < 6; i++)
                        l_1344[i] = &l_1278;
                    for (g_49 = 1; (g_49 >= 0); g_49 -= 1)
                    {
                        int i, j, k;
                        g_1335[l_1278] = func_51(g_18[(p_10 + 8)][(l_46 + 5)][l_1278], (safe_unary_minus_func_int8_t_s(func_24(g_491, (p_10 > (safe_rshift_func_uint8_t_u_u(func_24((safe_add_func_uint16_t_u_u(((-5L) < (0UL == p_9)), (l_1341 & g_18[(p_10 + 8)][(l_46 + 5)][l_1278]))), (((((+g_1342) && l_1343) | 0x4A45EF78L) <= (*g_1219)) || 255UL)), 6)))))), p_10);
                        l_1345 = l_1344[0];
                        g_1009[(p_10 + 1)][(l_1278 + 2)][l_1278] = (safe_lshift_func_int16_t_s_s(g_1342, ((*l_1345) < (((void*)0 != l_1348) >= ((*l_1345) & func_21(func_24(g_1009[0][0][1], p_10), (g_1279 | g_1342)))))));
                    }
                    for (g_491 = 0; (g_491 <= 2); g_491 += 1)
                    {
                        int i, j, k;
                        g_1009[l_46][(l_46 + 3)][(l_46 + 3)] = g_18[(g_491 + 7)][(p_10 + 3)][l_1278];
                    }
                }
                for (p_9 = 0; (p_9 <= 2); p_9 += 1)
                {
                    char l_1349 = 1L;
                    for (l_1283 = 0; (l_1283 <= 2); l_1283 += 1)
                    {
                        int i, j, k;
                        g_1009[(p_10 + 1)][l_1283][(l_46 + 4)] = (((0x51L > g_18[(l_46 + 2)][(p_9 + 1)][p_10]) == (p_10 < func_31(((void*)0 != l_1270[3]), (*g_1171), g_472[2][1], g_71[3][0][2]))) < 0xA1D73D9DL);
                        (**l_1326) = &g_1009[(p_10 + 1)][l_1283][(l_46 + 4)];
                        if (p_10)
                            break;
                    }
                    for (g_49 = 1; (g_49 >= 0); g_49 -= 1)
                    {
                        return g_71[2][0][5];
                    }
                    for (g_1279 = 0; (g_1279 <= 3); g_1279 += 1)
                    {
                        int i;
                        (**l_1326) = l_1345;
                        if (l_1349)
                            break;
                        if (p_10)
                            break;
                    }
                }
            }
            (*g_536) = p_9;
            (**l_1326) = func_51(((void*)0 == &l_1345), ((g_1342 ^ ((&g_1141 == &l_1345) || ((**l_1326) != l_1350))) < (safe_lshift_func_uint16_t_u_s(l_1353, (~func_31(g_1342, (*g_1135), p_10, g_472[1][4]))))), p_9);
            (*g_1219) = (*g_1171);
        }
        else
        {
            (*g_1135) = p_10;
            (*g_156) = p_9;
        }
        for (g_889 = 0; (g_889 <= 1); g_889 += 1)
        {
            int *l_1376 = &l_1278;
            (*g_1171) = (p_10 || g_472[1][2]);
            for (g_1342 = 0; (g_1342 <= 1); g_1342 += 1)
            {
                int *l_1378 = (void*)0;
                (*g_1219) = ((safe_lshift_func_uint16_t_u_u((safe_sub_func_int8_t_s_s(func_21((*l_1276), (!((((safe_add_func_int8_t_s_s(g_472[1][4], g_1354[5][3][0])) | (-1L)) || p_9) != (-1L)))), 0xF5L)), p_9)) | g_1342);
                for (l_1364 = 3; (l_1364 >= 0); l_1364 -= 1)
                {
                    int i, j, k;
                    return g_1354[(p_10 + 4)][(g_1342 + 5)][p_10];
                }
            }
        }
    }
    (**l_1326) = (**l_1326);
    return l_1379[0][0][1];
}







static unsigned func_21(unsigned p_22, unsigned p_23)
{
    unsigned l_1251 = 1UL;
    (*g_1171) = ((safe_lshift_func_int8_t_s_s((65535UL || g_472[1][4]), (((safe_lshift_func_int8_t_s_s((((safe_rshift_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u((255UL ^ (1L & g_889)), (p_23 >= (safe_sub_func_uint8_t_u_u(p_23, g_71[2][0][7]))))), p_23)) | g_472[2][3]) | l_1251), 4)) & g_71[0][0][0]) == p_23))) > l_1251);
    return p_22;
}







static int func_24(int p_25, unsigned char p_26)
{
    (*g_1171) = p_25;
    return p_26;
}







static char func_31(short p_32, int p_33, unsigned p_34, unsigned p_35)
{
    unsigned short l_951 = 0xFCA2L;
    int ***l_956 = &g_306[3];
    int *l_959 = &g_49;
    int *l_1010[1];
    int *l_1076 = &g_1009[1][2][4];
    int *l_1140 = &g_49;
    char l_1150 = 0x9CL;
    int *l_1178 = &g_71[1][0][6];
    int *l_1205 = &g_71[1][0][5];
    int *l_1218 = &g_1009[1][2][4];
    int i;
    for (i = 0; i < 1; i++)
        l_1010[i] = &g_1009[1][2][4];
    return g_18[0][6][0];
}







static int func_36(unsigned char p_37, unsigned short p_38, char p_39, int p_40)
{
    char l_905 = 0x8AL;
    int *l_922[1][4][6] = {{{&g_49,&g_49,&g_49,&g_49,&g_49,&g_49},{&g_71[1][0][5],&g_71[1][0][5],&g_49,(void*)0,&g_49,&g_71[1][0][5]},{&g_49,&g_49,(void*)0,(void*)0,&g_49,&g_49},{&g_71[1][0][5],&g_49,(void*)0,&g_49,&g_71[1][0][5],&g_71[1][0][5]}}};
    int i, j, k;
    for (g_141 = 0; (g_141 == 46); g_141++)
    {
        int l_893 = (-5L);
        unsigned char l_896 = 0x44L;
        int **l_927 = &g_730[5];
        for (p_38 = 0; (p_38 <= 1); p_38 += 1)
        {
            unsigned l_906[5] = {0x016B77E0L,0x016B77E0L,0x016B77E0L,0x016B77E0L,0x016B77E0L};
            int *l_912[3];
            int **l_929[9] = {(void*)0,&g_231,(void*)0,&g_231,(void*)0,&g_231,(void*)0,&g_231,(void*)0};
            int i;
            for (i = 0; i < 3; i++)
                l_912[i] = &g_71[1][1][6];
            for (g_491 = 0; (g_491 <= 1); g_491 += 1)
            {
                int **l_921 = &g_231;
                int i, j, k;
                if (g_71[p_38][p_38][(g_491 + 5)])
                    break;
                if ((*g_156))
                    break;
                if ((0UL >= ((l_893 >= g_18[5][1][0]) < (safe_lshift_func_uint8_t_u_s(l_896, 3)))))
                {
                    unsigned char l_901 = 0UL;
                    int *l_902 = &g_71[p_38][p_38][(g_491 + 5)];
                    if (((safe_add_func_uint8_t_u_u((p_38 ^ g_71[3][1][4]), (p_38 >= p_39))) & ((safe_mul_func_int8_t_s_s(p_38, p_39)) ^ l_901)))
                    {
                        int i, j, k;
                        g_730[g_491] = l_902;
                        g_71[(g_491 + 2)][p_38][(g_491 + 8)] = (1UL <= (safe_sub_func_uint8_t_u_u(((p_38 <= l_905) <= l_906[2]), (*l_902))));
                        if (l_896)
                            break;
                        (*g_156) = ((safe_unary_minus_func_uint32_t_u(p_39)) && (safe_sub_func_int8_t_s_s((-4L), p_39)));
                    }
                    else
                    {
                        int *l_910 = &g_71[p_38][p_38][(g_491 + 5)];
                        int **l_911 = &g_536;
                        l_910 = l_902;
                        (*l_911) = l_902;
                        (*g_156) = (l_912[2] != (void*)0);
                    }
                    for (p_37 = 1; (p_37 <= 4); p_37 += 1)
                    {
                        int *l_919 = &g_49;
                        int **l_920 = &l_912[1];
                        (*g_536) = ((safe_mul_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u((safe_sub_func_uint32_t_u_u(g_18[0][7][1], p_37)), p_40)), (0xC3L > 1L))) != g_491);
                        (*l_920) = l_919;
                    }
                }
                else
                {
                    if (p_40)
                        break;
                }
                (*l_921) = &g_71[p_38][p_38][(g_491 + 5)];
            }
            g_730[(p_38 + 6)] = l_922[0][0][3];
            for (p_39 = 1; (p_39 >= 0); p_39 -= 1)
            {
                int *l_925 = &g_71[2][0][5];
                int i, j, k;
                for (l_905 = 1; (l_905 >= 0); l_905 -= 1)
                {
                    int *l_926 = &g_71[p_39][p_39][(l_905 + 7)];
                    int i, j, k;
                    if (g_71[p_39][l_905][(l_905 + 4)])
                        break;
                    if (((0xC3AAL != ((-1L) > g_71[p_39][p_39][(l_905 + 7)])) > g_49))
                    {
                        int **l_923 = &l_912[1];
                        (*l_923) = &g_71[p_39][l_905][(l_905 + 4)];
                        return p_38;
                    }
                    else
                    {
                        int **l_924 = &l_912[2];
                        int ***l_928[1][6];
                        int i, j;
                        for (i = 0; i < 1; i++)
                        {
                            for (j = 0; j < 6; j++)
                                l_928[i][j] = &g_306[3];
                        }
                        (*l_924) = &g_71[p_39][p_39][(l_905 + 7)];
                        l_926 = l_925;
                        l_929[5] = l_927;
                    }
                    for (g_491 = 0; (g_491 <= 1); g_491 += 1)
                    {
                        char l_934 = (-8L);
                        int i, j, k;
                        (*l_927) = l_922[0][0][3];
                        g_71[g_491][l_905][(p_38 + 5)] = (((safe_add_func_int32_t_s_s(0x4636B727L, (0x2EF2L ^ p_39))) && (safe_mod_func_int16_t_s_s(((-6L) & (((-8L) || l_934) != 0x7E7EL)), (*l_926)))) | ((p_37 == 0xCF2FL) ^ 0xDCL));
                        return (*l_926);
                    }
                }
                g_71[(p_39 + 1)][p_38][(p_38 + 3)] = (65527UL > (safe_mul_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u((p_38 | ((safe_add_func_uint8_t_u_u(9UL, ((p_39 ^ (safe_mod_func_int32_t_s_s(p_40, p_40))) >= ((safe_rshift_func_int8_t_s_u(0xE6L, func_41(p_39, (func_41(g_18[9][5][1], (*g_536), (*l_925), p_38) == 0x82L), p_40, p_40))) & p_37)))) | p_40)), 0x7922L)), p_38)));
            }
            l_922[0][0][3] = l_922[0][2][3];
            for (l_896 = 0; (l_896 <= 1); l_896 += 1)
            {
                int i, j, k;
                (*l_927) = &g_71[(p_38 + 2)][p_38][(p_38 + 4)];
                for (g_491 = 0; (g_491 <= 2); g_491 += 1)
                {
                    int i;
                    if (p_39)
                        break;
                }
            }
        }
    }
    return p_40;
}







static unsigned char func_41(short p_42, int p_43, unsigned p_44, char p_45)
{
    unsigned l_47[2][5] = {{0x9B7C392AL,0x9B7C392AL,4294967295UL,0x9B7C392AL,0xFA6B86D5L},{4294967295UL,0xFA6B86D5L,4294967295UL,4294967295UL,0xFA6B86D5L}};
    int *l_61 = &g_49;
    int l_684 = 0xB028AF91L;
    unsigned l_708[3][5][7] = {{{0x52903DB0L,0xFBEAF455L,0UL,0xFBEAF455L,0x52903DB0L,4294967294UL,4294967294UL},{0x00816E08L,0xE1C14D8DL,1UL,0xE1C14D8DL,0x00816E08L,4UL,4UL},{0x52903DB0L,0xFBEAF455L,0UL,0xFBEAF455L,0x52903DB0L,4294967294UL,4294967294UL},{0x00816E08L,0xE1C14D8DL,1UL,0xE1C14D8DL,0x00816E08L,4UL,4UL},{0x52903DB0L,0xFBEAF455L,0UL,0xFBEAF455L,0x52903DB0L,4294967294UL,4294967294UL}},{{0x00816E08L,0xE1C14D8DL,1UL,0xE1C14D8DL,0x00816E08L,4UL,4UL},{0x52903DB0L,0xFBEAF455L,0UL,0xFBEAF455L,0x52903DB0L,4294967294UL,4294967294UL},{0x00816E08L,0xE1C14D8DL,1UL,0xE1C14D8DL,0x00816E08L,4UL,4UL},{0x52903DB0L,0xFBEAF455L,0UL,0xFBEAF455L,0x52903DB0L,4294967294UL,4294967294UL},{0x00816E08L,0xE1C14D8DL,1UL,0xE1C14D8DL,0x00816E08L,4UL,4UL}},{{0x52903DB0L,0xFBEAF455L,0UL,0xFBEAF455L,0x52903DB0L,4294967294UL,4294967294UL},{0x00816E08L,0xE1C14D8DL,1UL,0xE1C14D8DL,0x00816E08L,4UL,4UL},{0x52903DB0L,0xFBEAF455L,0UL,0xFBEAF455L,0x52903DB0L,4294967294UL,0x52903DB0L},{2UL,7UL,4UL,7UL,2UL,0x00816E08L,0x00816E08L},{1UL,0x7A09CE08L,4294967294UL,0x7A09CE08L,1UL,0x52903DB0L,0x52903DB0L}}};
    short l_847 = 0xBACEL;
    int l_890 = 5L;
    int i, j, k;
    for (p_44 = 0; (p_44 <= 1); p_44 += 1)
    {
        unsigned l_50[9] = {4294967295UL,0xEAA9BED5L,0xEAA9BED5L,4294967295UL,0xEAA9BED5L,0xEAA9BED5L,4294967295UL,0xEAA9BED5L,0xEAA9BED5L};
        int *l_647 = &g_71[2][0][8];
        char l_662[7][6][2] = {{{(-6L),(-8L)},{0x31L,8L},{0xB2L,0x31L},{8L,(-8L)},{8L,0x31L},{0xB2L,8L}},{{0x31L,(-8L)},{(-6L),(-6L)},{0xB2L,(-6L)},{(-6L),(-8L)},{0x31L,8L},{0xB2L,0x31L}},{{8L,(-8L)},{8L,0x31L},{0xB2L,8L},{0x31L,(-8L)},{(-6L),(-6L)},{0xB2L,(-6L)}},{{(-6L),(-8L)},{0x31L,8L},{0xB2L,0x31L},{8L,(-8L)},{8L,0x31L},{0xB2L,8L}},{{0x31L,(-8L)},{(-6L),(-6L)},{0xB2L,(-6L)},{(-6L),(-8L)},{0x31L,8L},{0xB2L,0x31L}},{{8L,(-8L)},{8L,0x31L},{0xB2L,8L},{0x31L,(-8L)},{(-6L),(-6L)},{0xB2L,(-8L)}},{{(-8L),6L},{(-9L),0xB2L},{0x5EL,(-9L)},{0xB2L,6L},{0xB2L,(-9L)},{0x5EL,0xB2L}}};
        int l_663 = (-8L);
        int ***l_677 = (void*)0;
        int l_685 = (-1L);
        int **l_732 = &g_730[7];
        int *l_747[10][6][4] = {{{(void*)0,&l_663,&g_71[1][1][9],&g_49},{&l_663,&l_684,&g_49,&l_684},{(void*)0,(void*)0,&l_684,&g_71[1][1][8]},{&l_663,&l_663,(void*)0,&l_663},{&g_71[1][1][4],&l_684,&l_663,&l_663},{&g_71[1][1][8],&l_684,&g_49,(void*)0}},{{&l_663,&l_663,&l_663,&l_663},{&l_663,&g_49,&g_49,&g_71[1][1][1]},{(void*)0,(void*)0,&g_49,&l_684},{(void*)0,&g_49,&l_684,&l_684},{&l_663,(void*)0,&g_49,&g_71[1][1][1]},{&l_684,&g_49,(void*)0,&l_663}},{{(void*)0,&l_663,&g_71[1][1][4],(void*)0},{&g_71[0][0][6],&l_684,&g_71[1][1][1],&l_663},{&l_684,&l_684,&l_684,&l_663},{&l_684,&l_663,&g_71[1][1][4],&g_71[1][1][8]},{&l_684,(void*)0,&g_71[3][0][3],&l_684},{&l_684,&l_684,(void*)0,&g_49}},{{&g_49,&l_663,&l_684,&l_663},{&g_49,(void*)0,&g_71[1][1][9],&l_663},{(void*)0,&l_684,&g_49,(void*)0},{&l_684,&g_49,&l_663,&g_49},{(void*)0,&l_684,&l_663,&l_684},{&g_49,&l_663,(void*)0,(void*)0}},{{&g_49,&g_71[0][0][6],&l_663,&g_71[1][1][8]},{(void*)0,(void*)0,&l_663,(void*)0},{&l_684,&l_684,&g_49,&g_49},{&l_684,&g_71[1][1][4],&g_49,&l_663},{&l_663,(void*)0,&g_49,&g_49},{&l_684,&g_71[1][1][8],&g_49,&g_49}},{{&l_684,&g_71[2][0][4],&g_71[0][0][6],&l_684},{&g_49,(void*)0,&l_663,&g_71[1][1][4]},{&l_663,&l_684,&g_49,(void*)0},{(void*)0,&l_663,&g_71[1][1][9],(void*)0},{&g_49,&l_684,&l_663,&l_663},{&l_663,&l_663,&g_49,(void*)0}},{{&l_684,&l_663,&g_49,&l_684},{&g_71[2][0][4],&l_684,&g_49,&g_49},{(void*)0,&l_684,&l_663,&l_684},{&l_684,&l_663,(void*)0,(void*)0},{&g_71[1][1][1],&l_663,&l_663,&l_663},{&l_684,&l_684,&l_663,(void*)0}},{{&g_49,&l_663,&g_71[3][0][3],(void*)0},{&l_663,&l_684,&l_663,&g_71[1][1][4]},{&l_684,(void*)0,(void*)0,&g_71[3][0][3]},{&l_663,&g_49,(void*)0,&g_71[1][1][4]},{&g_49,&g_49,&g_49,&l_684},{&g_71[2][0][4],&g_71[1][1][9],(void*)0,&g_71[1][1][1]}},{{(void*)0,(void*)0,&l_663,&g_71[1][1][4]},{&l_684,(void*)0,&l_684,(void*)0},{&g_49,&l_684,&l_663,&g_49},{&g_71[1][1][1],&l_684,&l_663,&l_684},{&l_684,&g_71[0][0][6],&l_663,&g_49},{&g_71[1][1][1],&g_49,&l_663,&g_49}},{{&g_49,&l_663,&l_684,&l_663},{&l_684,&l_663,&l_663,&g_49},{(void*)0,&l_684,(void*)0,&l_663},{&g_71[2][0][4],&g_49,&g_49,(void*)0},{&g_49,&l_663,(void*)0,&l_684},{&l_663,&g_49,(void*)0,&g_49}}};
        unsigned short l_757 = 65535UL;
        unsigned char l_815 = 0UL;
        int l_816 = 0x64287CF0L;
        int **l_859 = &l_747[6][4][1];
        unsigned l_879 = 0x98858086L;
        int i, j, k;
        for (p_43 = 1; (p_43 >= 0); p_43 -= 1)
        {
            int *l_48 = &g_49;
            for (p_42 = 1; (p_42 >= 0); p_42 -= 1)
            {
                int i, j;
                if (l_47[p_44][(p_42 + 1)])
                    break;
                return l_47[p_42][(p_44 + 3)];
            }
            (*l_48) = p_43;
            g_49 = l_50[6];
            if (g_18[5][5][0])
            {
                int *l_60 = &g_49;
                int l_664 = (-1L);
                int *l_665[3][5][1] = {{{(void*)0},{&l_663},{(void*)0},{&g_49},{(void*)0}},{{&l_663},{(void*)0},{(void*)0},{&l_663},{(void*)0}},{{&g_49},{(void*)0},{&l_663},{(void*)0},{(void*)0}}};
                int *l_700[10] = {&l_663,&l_663,&l_684,(void*)0,&l_684,&l_663,&l_663,&l_684,(void*)0,&l_684};
                int **l_702 = &l_48;
                int i, j, k;
                for (p_45 = 0; (p_45 <= 1); p_45 += 1)
                {
                    unsigned short l_361 = 0xFEECL;
                    int *l_650[1][3];
                    unsigned short l_660 = 0UL;
                    int i, j;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 3; j++)
                            l_650[i][j] = &g_49;
                    }
                    for (g_49 = 0; (g_49 <= 1); g_49 += 1)
                    {
                        int ***l_651 = (void*)0;
                        int *l_661 = &g_49;
                    }
                    (*l_60) = (*l_61);
                    for (l_361 = 0; (l_361 <= 1); l_361 += 1)
                    {
                        int i, j, k;
                        l_665[1][1][0] = &p_43;
                        (*l_48) = (safe_unary_minus_func_uint8_t_u((((safe_add_func_uint16_t_u_u(g_472[(p_44 + 1)][(p_45 + 4)], (safe_lshift_func_int8_t_s_u((safe_mod_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u((&l_665[1][1][0] == &g_231), 10)), (safe_mod_func_uint32_t_u_u((0x02L | (+(l_662[(p_45 + 2)][(p_45 + 2)][p_44] ^ (+((((void*)0 == l_677) | 65530UL) || (&g_306[2] != &g_306[4])))))), p_44)))), (*l_48))))) && g_384) ^ p_45)));
                    }
                }
                if ((*g_156))
                {
                    unsigned l_686 = 0xCA763F45L;
                    int *l_687 = &g_49;
                    (*g_536) = (g_141 > (((g_49 != p_45) > ((safe_add_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_s((((!(safe_rshift_func_uint16_t_u_u(l_684, 7))) != l_685) > (0L <= (p_43 != ((~(p_44 | 65535UL)) > 4294967290UL)))), g_472[1][4])) > g_141), p_43)) <= g_472[1][0])) & p_42));
                    if (l_686)
                        break;
                    l_687 = (void*)0;
                }
                else
                {
                    int *l_698 = &g_71[3][0][4];
                    for (l_663 = 0; (l_663 <= 2); l_663 += 1)
                    {
                        int *l_699 = (void*)0;
                        int i, j;
                        (*g_156) = (safe_lshift_func_uint16_t_u_u(0x10B1L, 2));
                        (*l_60) = (safe_mod_func_uint8_t_u_u(((g_472[(p_44 + 1)][(p_44 + 3)] < (safe_add_func_uint16_t_u_u((safe_add_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s(0x2A67L, ((&p_43 == l_698) || g_472[l_663][(p_43 + 3)]))), g_18[7][4][0])), g_18[4][2][0]))) > 0x4BL), g_472[1][4]));
                    }
                    for (g_384 = 1; (g_384 >= 0); g_384 -= 1)
                    {
                        int **l_701 = &l_698;
                        (*l_701) = l_700[6];
                    }
                    (*l_647) = (*l_647);
                }
                (*l_702) = l_48;
                for (g_491 = 0; (g_491 <= 1); g_491 += 1)
                {
                    int l_705 = 1L;
                }
            }
            else
            {
                short l_718 = 0xE455L;
                int *l_723 = &g_71[1][1][4];
                for (p_42 = 0; (p_42 <= 1); p_42 += 1)
                {
                    short l_726 = 0x6990L;
                    int *l_729 = (void*)0;
                    int **l_731 = &g_156;
                }
            }
        }
        (*l_732) = &l_684;
    }
    l_61 = &p_43;
    (*l_61) = (0x3C20E9A1L >= l_890);
    return g_889;
}







static int * func_51(unsigned char p_52, short p_53, unsigned p_54)
{
    int *l_366[5][3][8] = {{{&g_71[0][1][1],&g_49,&g_71[0][1][1],&g_71[0][1][1],&g_49,&g_71[0][1][1],&g_71[0][1][1],&g_49},{&g_49,&g_71[0][1][1],&g_71[0][1][1],&g_49,&g_71[0][1][1],&g_71[0][1][1],&g_49,&g_71[0][1][1]},{&g_49,&g_49,&g_71[0][0][3],&g_49,&g_49,&g_71[0][0][3],&g_49,&g_49}},{{&g_71[0][1][1],&g_49,&g_71[0][1][1],&g_71[0][1][1],&g_49,&g_71[0][1][1],&g_71[0][1][1],&g_49},{&g_49,&g_71[0][1][1],&g_71[0][1][1],&g_49,&g_71[0][1][1],&g_71[0][1][1],&g_49,&g_71[0][1][1]},{&g_49,&g_49,&g_71[0][0][3],&g_49,&g_49,&g_71[0][0][3],&g_49,&g_49}},{{&g_71[0][1][1],&g_49,&g_71[0][1][1],&g_71[0][1][1],&g_49,&g_71[0][1][1],&g_71[0][1][1],&g_49},{&g_49,&g_71[0][1][1],&g_71[0][1][1],&g_49,&g_71[0][1][1],&g_71[0][1][1],&g_49,&g_71[0][1][1]},{&g_49,&g_49,&g_71[0][0][3],&g_49,&g_49,&g_71[0][0][3],&g_49,&g_49}},{{&g_71[0][1][1],&g_49,&g_71[0][1][1],&g_71[0][1][1],&g_49,&g_71[0][1][1],&g_71[0][1][1],&g_49},{&g_49,&g_71[0][1][1],&g_71[0][1][1],&g_49,&g_71[0][1][1],&g_71[0][1][1],&g_49,&g_71[0][1][1]},{&g_49,&g_49,&g_71[0][0][3],&g_49,&g_49,&g_71[0][0][3],&g_49,&g_49}},{{&g_71[0][1][1],&g_49,&g_71[0][1][1],&g_71[0][1][1],&g_49,&g_71[0][1][1],&g_71[0][1][1],&g_71[0][1][1]},{&g_71[0][1][1],&g_71[0][0][3],&g_71[0][0][3],&g_71[0][1][1],&g_71[0][0][3],&g_71[0][0][3],&g_71[0][1][1],&g_71[0][0][3]},{&g_71[0][1][1],&g_71[0][1][1],&g_49,&g_71[0][1][1],&g_71[0][1][1],&g_49,&g_71[0][1][1],&g_71[0][1][1]}}};
    int l_436 = 0x65F87477L;
    int l_504 = (-8L);
    int ***l_567[1];
    int l_598[6] = {0x904EFD03L,1L,0x904EFD03L,0x904EFD03L,1L,0x904EFD03L};
    int *l_644 = &g_71[0][1][3];
    int *l_645 = &g_71[3][1][1];
    int *l_646 = &g_71[3][1][0];
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_567[i] = &g_306[1];
lbl_529:
    for (g_141 = 0; (g_141 <= 1); g_141 += 1)
    {
        unsigned l_369 = 0x374DF2F9L;
        int *l_370 = &g_71[2][1][2];
        int **l_394 = (void*)0;
        int **l_395 = &g_231;
        int *l_425 = &g_71[3][0][4];
        unsigned l_450[6];
        int l_477 = 0x6E89759DL;
        int i;
        for (i = 0; i < 6; i++)
            l_450[i] = 1UL;
        for (p_54 = 0; (p_54 <= 4); p_54 += 1)
        {
            unsigned l_365 = 0xFA797A11L;
            int *l_378[3];
            int **l_379 = &l_370;
            int i;
            for (i = 0; i < 3; i++)
                l_378[i] = (void*)0;
        }
        for (l_369 = 0; (l_369 <= 4); l_369 += 1)
        {
            int *l_383 = (void*)0;
            for (p_54 = 0; (p_54 <= 4); p_54 += 1)
            {
                unsigned short l_380 = 1UL;
                short l_381[4][2][2] = {{{0xEF72L,(-1L)},{(-1L),0xEF72L}},{{(-1L),(-1L)},{0xEF72L,(-1L)}},{{(-1L),0xEF72L},{(-1L),(-1L)}},{{0xEF72L,(-1L)},{(-1L),0xEF72L}}};
                int **l_382[10] = {&l_366[4][0][5],&l_370,&l_366[4][0][5],&l_370,&l_366[4][0][5],&l_370,&l_366[4][0][5],&l_370,&l_366[4][0][5],&l_370};
                int i, j, k;
                g_71[(g_141 + 2)][g_141][p_54] = (((p_52 <= l_380) >= (l_381[3][0][0] | ((void*)0 != l_382[7]))) & (-1L));
                for (l_380 = 0; (l_380 <= 4); l_380 += 1)
                {
                    int i;
                    l_383 = l_370;
                    l_366[3][1][4] = (void*)0;
                }
                if (g_384)
                {
                    int ***l_385 = &l_382[7];
                    if (p_54)
                        break;
                    (*l_385) = l_382[7];
                }
                else
                {
                    int *l_392[4][7][1] = {{{&g_71[(g_141 + 2)][g_141][p_54]},{(void*)0},{&g_71[(g_141 + 2)][g_141][p_54]},{&g_71[(g_141 + 2)][g_141][p_54]},{(void*)0},{&g_71[(g_141 + 2)][g_141][p_54]},{&g_71[(g_141 + 2)][g_141][p_54]}},{{(void*)0},{&g_71[(g_141 + 2)][g_141][p_54]},{&g_71[(g_141 + 2)][g_141][p_54]},{(void*)0},{&g_71[(g_141 + 2)][g_141][p_54]},{&g_71[(g_141 + 2)][g_141][p_54]},{(void*)0}},{{&g_71[(g_141 + 2)][g_141][p_54]},{&g_71[(g_141 + 2)][g_141][p_54]},{(void*)0},{&g_71[(g_141 + 2)][g_141][p_54]},{&g_71[(g_141 + 2)][g_141][p_54]},{(void*)0},{&g_71[(g_141 + 2)][g_141][p_54]}},{{&g_71[(g_141 + 2)][g_141][p_54]},{(void*)0},{&g_71[(g_141 + 2)][g_141][p_54]},{&g_71[(g_141 + 2)][g_141][p_54]},{(void*)0},{&g_71[(g_141 + 2)][g_141][p_54]},{&g_71[(g_141 + 2)][g_141][p_54]}}};
                    int i, j, k;
                    (*l_370) = ((void*)0 == l_370);
                    (*l_370) = (safe_mod_func_uint32_t_u_u((g_71[0][1][0] <= (((safe_mod_func_int32_t_s_s((((void*)0 != &g_306[4]) && (l_370 != l_370)), p_52)) && 4294967290UL) ^ (safe_rshift_func_uint8_t_u_s(g_71[3][1][4], 7)))), g_71[3][1][7]));
                    l_392[1][2][0] = l_366[4][0][6];
                }
            }
            for (g_384 = 3; (g_384 >= 0); g_384 -= 1)
            {
                int **l_393 = &l_370;
                (*l_393) = l_370;
            }
        }
        (*l_395) = (void*)0;
        if ((((g_71[0][0][8] >= g_49) && p_54) <= g_384))
        {
            unsigned char l_401 = 0x8CL;
            int *l_402[10] = {(void*)0,&g_49,(void*)0,(void*)0,&g_49,(void*)0,(void*)0,&g_49,(void*)0,(void*)0};
            int i;
            for (l_369 = 0; (l_369 <= 1); l_369 += 1)
            {
                int *l_400 = &g_71[1][0][0];
                (*l_395) = (*l_395);
                for (p_52 = 0; (p_52 <= 1); p_52 += 1)
                {
                    int i, j, k;
                    g_71[(p_52 + 2)][g_141][(g_141 + 6)] = (safe_mul_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(((p_53 > p_54) != p_52), g_384)), p_52));
                    if (p_54)
                    {
                        (*l_395) = l_400;
                    }
                    else
                    {
                        (*l_395) = l_400;
                        (*l_395) = l_366[3][1][0];
                    }
                }
            }
            (*l_370) = l_401;
            (*l_395) = l_402[9];
        }
        else
        {
            int *l_409[6][4][1] = {{{(void*)0},{&g_49},{(void*)0},{&g_71[1][0][7]}},{{(void*)0},{&g_71[1][1][1]},{&g_71[3][1][2]},{&g_71[1][1][1]}},{{(void*)0},{&g_71[3][0][7]},{(void*)0},{&g_71[0][1][3]}},{{(void*)0},{&g_71[3][0][7]},{&g_71[2][0][9]},{&g_71[1][0][7]}},{{&g_49},{&g_71[1][0][7]},{&g_71[2][0][9]},{&g_71[3][0][7]}},{{(void*)0},{&g_71[0][1][3]},{(void*)0},{&g_71[3][0][7]}}};
            int ***l_412 = (void*)0;
            char l_449 = 0x04L;
            int ***l_453 = &g_306[3];
            int i, j, k;
            if (p_52)
                break;
            for (p_52 = 2; (p_52 != 35); p_52++)
            {
                short l_405 = (-1L);
                int ***l_413 = (void*)0;
                unsigned char l_423 = 0x0AL;
                int l_433 = (-1L);
                unsigned short l_451 = 0x5616L;
                int l_474 = (-1L);
                if (l_405)
                    break;
                if (((void*)0 != (*l_395)))
                {
                    unsigned l_408 = 0x08E2940DL;
                    if ((safe_lshift_func_uint16_t_u_u(l_408, 9)))
                    {
                        return l_409[0][1][0];
                    }
                    else
                    {
                        int l_418 = 1L;
                        l_423 = (safe_sub_func_int16_t_s_s((((l_412 == l_413) > (safe_rshift_func_uint8_t_u_s((g_49 | g_384), (g_2 > (safe_mul_func_int16_t_s_s((l_418 ^ (safe_mul_func_int16_t_s_s(l_418, ((safe_mul_func_uint8_t_u_u(g_2, 0x89L)) || g_2)))), (-10L))))))) && p_54), l_418));
                        if (p_54)
                            continue;
                    }
                    return l_366[1][1][7];
                }
                else
                {
                    int *l_424 = &g_49;
                    for (l_423 = 0; (l_423 <= 0); l_423 += 1)
                    {
                        int i, j, k;
                        l_409[(l_423 + 1)][(g_141 + 1)][l_423] = l_424;
                        l_409[(g_141 + 2)][(l_423 + 1)][l_423] = l_425;
                    }
                    if (p_52)
                    {
                        int *l_426 = &g_49;
                        (*l_395) = l_426;
                        (*l_395) = l_366[3][1][4];
                        (*l_425) = p_53;
                        (*l_425) = ((safe_sub_func_int8_t_s_s((p_52 != (g_71[1][0][2] | ((p_52 && ((safe_add_func_uint8_t_u_u((safe_add_func_int8_t_s_s((&g_306[3] == (void*)0), (p_52 ^ l_433))), g_71[0][1][3])) < g_71[2][1][7])) && 0x1DD3L))), g_49)) < (-1L));
                    }
                    else
                    {
                        (*l_425) = (safe_sub_func_int8_t_s_s(((g_18[9][3][0] <= 0xFBL) || ((((g_141 && l_436) & (safe_mod_func_uint8_t_u_u((*l_424), (safe_mod_func_uint16_t_u_u(g_18[6][5][1], 8UL))))) == 8L) < (g_2 ^ g_384))), 0xBCL));
                    }
                    (*l_395) = l_424;
                }
                (*l_395) = l_366[3][1][4];
                if (((safe_add_func_uint32_t_u_u(g_18[0][5][0], p_52)) == (p_54 == (((safe_lshift_func_uint8_t_u_s(g_18[5][5][1], 3)) && (&g_156 == &g_156)) != g_141))))
                {
                    for (p_53 = (-14); (p_53 < 27); p_53 = safe_add_func_int32_t_s_s(p_53, 1))
                    {
                        (*l_395) = (void*)0;
                    }
                }
                else
                {
                    int *l_452 = &g_71[3][1][0];
                    unsigned l_462 = 0x2EA0A6CBL;
                    (*l_395) = l_366[3][1][4];
                    if ((safe_mul_func_uint16_t_u_u(p_53, l_449)))
                    {
                        if (p_53)
                            break;
                        l_451 = ((+(((((+l_450[3]) ^ p_53) && p_52) || g_384) >= p_52)) || 0UL);
                    }
                    else
                    {
                        unsigned char l_467 = 0xBAL;
                        int *l_473 = &g_71[2][1][7];
                        (*l_395) = l_452;
                        (*l_425) = ((*g_231) < (((-1L) == ((void*)0 != l_453)) > ((safe_sub_func_int8_t_s_s((safe_rshift_func_int8_t_s_s((((safe_lshift_func_int16_t_s_s((safe_add_func_uint32_t_u_u(l_462, ((*g_231) || (((+(safe_add_func_uint8_t_u_u(0UL, ((safe_sub_func_uint32_t_u_u(((p_54 <= ((*g_231) > p_54)) | g_71[0][0][6]), p_53)) < g_141)))) ^ g_49) && l_467)))), 12)) & g_71[1][0][1]) != 65526UL), 2)), l_467)) == 5UL)));
                        (*l_370) = (safe_add_func_uint8_t_u_u((((safe_lshift_func_uint16_t_u_s(g_2, 10)) | (&g_306[4] != &g_306[3])) <= (p_53 < g_472[1][4])), g_472[1][4]));
                        l_452 = l_473;
                    }
                    for (p_54 = 0; (p_54 <= 1); p_54 += 1)
                    {
                        int i, j, k;
                        l_474 = g_71[p_54][p_54][(p_54 + 1)];
                    }
                    for (l_462 = (-22); (l_462 > 38); l_462 = safe_add_func_int32_t_s_s(l_462, 4))
                    {
                        l_452 = l_452;
                        (*l_425) = p_54;
                        if (l_477)
                            continue;
                        (*l_395) = l_452;
                    }
                }
            }
        }
    }
lbl_561:
    for (g_141 = 0; (g_141 > 7); g_141 = safe_add_func_uint8_t_u_u(g_141, 7))
    {
        unsigned l_484 = 4294967289UL;
        short l_498 = 0x48C9L;
        int *l_501 = &g_71[2][0][5];
        g_491 = (((safe_sub_func_uint8_t_u_u(((6L && ((safe_mul_func_int16_t_s_s((p_52 | l_484), ((safe_mul_func_int16_t_s_s(0xB7ECL, (safe_sub_func_int8_t_s_s(0L, p_52)))) ^ (safe_lshift_func_int8_t_s_u((1L < 7UL), 1))))) || l_484)) | l_484), l_484)) < 0x30BDBF4CL) != 0x15L);
        (*l_501) = (safe_sub_func_uint16_t_u_u(((((safe_add_func_uint8_t_u_u((l_366[3][1][4] == l_366[3][1][4]), (safe_lshift_func_int16_t_s_s(l_498, 0)))) || l_498) >= ((safe_sub_func_uint32_t_u_u(((void*)0 != l_501), ((safe_add_func_uint32_t_u_u(l_504, (safe_mul_func_uint8_t_u_u((safe_mod_func_int16_t_s_s(((*l_501) && g_18[5][4][1]), p_53)), (*l_501))))) > g_141))) >= g_141)) && 1UL), p_52));
        for (g_384 = 28; (g_384 <= 8); g_384--)
        {
            int *l_511 = &g_49;
            int l_535[8];
            int i;
            for (i = 0; i < 8; i++)
                l_535[i] = 0x1CBDBB20L;
            l_511 = l_511;
            for (l_504 = (-24); (l_504 < (-2)); l_504 = safe_add_func_uint16_t_u_u(l_504, 5))
            {
                int *l_514 = &g_71[3][0][9];
                int **l_515 = (void*)0;
                int **l_516 = &l_366[3][1][4];
                unsigned l_532 = 0xDFB1E72BL;
                (*l_516) = l_514;
                for (l_498 = 0; (l_498 >= (-15)); l_498 = safe_sub_func_int32_t_s_s(l_498, 3))
                {
                    int l_519 = 0x0AE45332L;
                    if (l_519)
                    {
                        unsigned l_522 = 4294967286UL;
                        (*l_514) = ((safe_add_func_uint32_t_u_u(0x8A8EB160L, p_54)) <= ((l_522 > (!(safe_rshift_func_uint8_t_u_s((p_54 || l_519), 3)))) ^ (safe_mod_func_int8_t_s_s((safe_rshift_func_int8_t_s_s((0x59L < 0x53L), 4)), g_71[3][1][0]))));
                    }
                    else
                    {
                        (*l_501) = ((void*)0 != &g_306[4]);
                        if (l_436)
                            goto lbl_529;
                        return l_511;
                    }
                    (*l_501) = (safe_mul_func_int16_t_s_s((p_52 > p_53), p_52));
                    (*l_501) = p_54;
                    (*l_516) = l_501;
                }
                l_535[4] = (l_532 || (p_54 < ((safe_rshift_func_int8_t_s_u(p_52, 3)) | 65534UL)));
                (*l_516) = g_536;
            }
            (*g_536) = ((safe_lshift_func_uint16_t_u_s((p_52 & 0xBAL), 3)) | (*l_501));
        }
    }
    if (((p_53 == p_53) == (p_54 <= ((g_2 ^ p_52) != ((safe_lshift_func_int8_t_s_u((safe_lshift_func_int16_t_s_u(g_472[1][4], 11)), 5)) == p_53)))))
    {
        unsigned l_543 = 4294967292UL;
        l_543 = p_52;
    }
    else
    {
        char l_550 = 0L;
        int **l_560 = &g_231;
        unsigned char l_562[10] = {1UL,1UL,1UL,255UL,255UL,1UL,1UL,1UL,255UL,255UL};
        int l_582 = 4L;
        unsigned l_589[2];
        int *l_594 = (void*)0;
        int l_610[1][3];
        int *l_626 = &g_49;
        int i, j;
        for (i = 0; i < 2; i++)
            l_589[i] = 0UL;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 3; j++)
                l_610[i][j] = 1L;
        }
        for (p_54 = 0; (p_54 == 50); p_54 = safe_add_func_uint32_t_u_u(p_54, 6))
        {
            for (g_141 = (-8); (g_141 == 35); g_141++)
            {
                int **l_548 = (void*)0;
                int **l_549 = &g_231;
                (*l_549) = (void*)0;
                for (p_52 = 0; (p_52 <= 4); p_52 += 1)
                {
                    for (g_491 = 0; (g_491 <= 4); g_491 += 1)
                    {
                        int i;
                        (*g_536) = (((-1L) < l_550) <= g_384);
                        (*g_536) = p_52;
                    }
                }
            }
            for (g_491 = 0; (g_491 < 27); g_491++)
            {
                for (l_436 = 1; (l_436 >= 0); l_436 -= 1)
                {
                    int **l_553 = &l_366[3][1][4];
                    int i, j, k;
                    (*l_553) = &g_71[(l_436 + 2)][l_436][(l_436 + 5)];
                }
                for (p_52 = 0; (p_52 >= 58); ++p_52)
                {
                    for (g_384 = 0; g_384 < 4; g_384 += 1)
                    {
                        for (g_141 = 0; g_141 < 2; g_141 += 1)
                        {
                            for (l_550 = 0; l_550 < 10; l_550 += 1)
                            {
                                g_71[g_384][g_141][l_550] = 0x854F82B3L;
                            }
                        }
                    }
                }
                for (p_53 = 0; (p_53 < (-4)); p_53--)
                {
                    for (l_436 = 0; (l_436 < 13); ++l_436)
                    {
                        if (p_54)
                            break;
                        if (p_52)
                            continue;
                    }
                    (*g_536) = (l_560 != (void*)0);
                    if (l_550)
                        goto lbl_561;
                }
            }
            (*g_536) = (p_54 < l_550);
            if (l_562[3])
                break;
        }
        for (l_550 = 0; (l_550 >= (-17)); l_550 = safe_sub_func_int32_t_s_s(l_550, 7))
        {
            char l_568 = 0x6EL;
            int *l_571[10][3][4] = {{{&g_49,(void*)0,&g_49,&g_71[0][1][2]},{&g_71[0][1][7],&g_49,&g_49,&g_49},{&g_49,&g_71[0][1][2],&g_71[1][1][6],&g_71[0][1][2]}},{{&g_49,&g_49,&g_49,&g_49},{&g_71[0][1][7],&g_71[0][1][2],&g_49,(void*)0},{&g_49,&g_49,&g_71[1][1][6],&g_49}},{{&g_49,(void*)0,&g_49,&g_71[0][1][2]},{&g_71[0][1][7],&g_49,&g_49,&g_49},{&g_49,&g_71[0][1][2],&g_71[1][1][6],&g_71[0][1][2]}},{{&g_49,&g_49,&g_49,&g_49},{&g_71[0][1][7],&g_71[0][1][2],&g_49,(void*)0},{&g_49,&g_49,&g_71[1][1][6],&g_49}},{{&g_49,(void*)0,&g_49,&g_71[0][1][2]},{&g_71[0][1][7],&g_49,&g_49,&g_49},{&g_49,&g_71[0][1][2],&g_71[1][1][6],&g_71[0][1][2]}},{{&g_49,&g_49,&g_49,&g_49},{&g_71[0][1][7],&g_71[0][1][2],&g_49,(void*)0},{&g_49,&g_49,&g_71[1][0][5],&g_49}},{{&g_71[0][1][7],&g_71[2][1][4],&g_71[1][1][6],(void*)0},{(void*)0,&g_49,&g_71[1][1][6],(void*)0},{&g_71[0][1][7],(void*)0,&g_71[1][0][5],(void*)0}},{{&g_71[0][1][7],(void*)0,&g_71[1][1][6],&g_49},{(void*)0,(void*)0,&g_71[1][1][6],&g_71[2][1][4]},{&g_71[0][1][7],&g_49,&g_71[1][0][5],&g_49}},{{&g_71[0][1][7],&g_71[2][1][4],&g_71[1][1][6],(void*)0},{(void*)0,&g_49,&g_71[1][1][6],(void*)0},{&g_71[0][1][7],(void*)0,&g_71[1][0][5],(void*)0}},{{&g_71[0][1][7],(void*)0,&g_71[1][1][6],&g_49},{(void*)0,(void*)0,&g_71[1][1][6],&g_71[2][1][4]},{&g_71[0][1][7],&g_49,&g_71[1][0][5],&g_49}}};
            unsigned short l_590 = 65528UL;
            int ***l_592 = (void*)0;
            int *l_624 = (void*)0;
            int *l_636 = &l_610[0][0];
            int i, j, k;
        }
        (*g_536) = (g_472[0][0] < (g_71[0][1][8] >= (safe_add_func_uint32_t_u_u(((safe_lshift_func_int8_t_s_u(g_71[2][1][8], 6)) & p_54), (((*l_560) == (*l_560)) < g_472[1][0])))));
    }
    l_645 = l_644;
    return l_646;
}







static unsigned char func_55(short p_56, int * p_57, int * p_58, int * p_59)
{
    unsigned char l_62 = 0UL;
    int l_129[9] = {0x096333BDL,0x096333BDL,0x096333BDL,0x096333BDL,0x096333BDL,0x096333BDL,0x096333BDL,0x096333BDL,0x096333BDL};
    int *l_136 = (void*)0;
    unsigned char l_177 = 0x79L;
    int **l_181 = (void*)0;
    unsigned l_199 = 6UL;
    unsigned char l_221[4];
    unsigned l_230 = 0x5F0FA449L;
    char l_250 = 0xB0L;
    int i;
    for (i = 0; i < 4; i++)
        l_221[i] = 0x33L;
    if ((g_2 & l_62))
    {
        unsigned short l_65 = 0UL;
        int *l_142 = &g_71[0][1][2];
        int l_232 = 0xBBC34D34L;
        if (((((~(((safe_add_func_uint16_t_u_u(g_49, p_56)) && l_65) == (safe_lshift_func_int8_t_s_s(g_2, 7)))) <= l_62) ^ 4294967291UL) == g_49))
        {
            unsigned l_68 = 9UL;
            int *l_70 = &g_49;
            int **l_69 = &l_70;
            int l_83 = 0x49B5B57AL;
            l_68 = l_65;
            (*l_69) = &g_49;
            for (l_65 = 0; (l_65 <= 1); l_65 += 1)
            {
                int l_74 = 1L;
                unsigned char l_100 = 255UL;
                for (l_62 = 0; (l_62 <= 1); l_62 += 1)
                {
                    for (p_56 = 1; (p_56 >= 0); p_56 -= 1)
                    {
                        int i, j, k;
                        p_57 = (void*)0;
                        (*l_69) = &g_71[(l_65 + 2)][l_62][(p_56 + 1)];
                    }
                    for (p_56 = 1; (p_56 >= 0); p_56 -= 1)
                    {
                        int i, j, k;
                        g_71[l_62][l_62][(p_56 + 7)] = 0L;
                        (*l_69) = &g_71[(p_56 + 1)][p_56][(p_56 + 5)];
                        g_71[0][0][1] = g_71[p_56][p_56][(l_62 + 1)];
                    }
                }
                for (l_62 = 0; (l_62 <= 1); l_62 += 1)
                {
                    if ((g_71[2][1][0] >= (1L < (safe_mul_func_uint8_t_u_u((l_74 <= (p_58 == p_58)), (0xB9L == (safe_mul_func_uint16_t_u_u((safe_mod_func_int16_t_s_s(l_74, g_71[2][0][9])), g_2))))))))
                    {
                        return p_56;
                    }
                    else
                    {
                        (*l_69) = p_58;
                        return p_56;
                    }
                }
                if ((safe_mod_func_uint32_t_u_u(((safe_rshift_func_uint8_t_u_u((((l_83 > (safe_mod_func_uint32_t_u_u(g_49, l_62))) != (safe_lshift_func_int8_t_s_s(p_56, (safe_mod_func_int8_t_s_s((g_71[0][0][8] && ((safe_rshift_func_int16_t_s_u(g_18[5][7][1], 14)) < (*l_70))), 3UL))))) < g_71[2][1][7]), g_71[1][1][9])) != l_65), g_2)))
                {
                    int *l_123 = (void*)0;
                    l_100 = (((p_56 >= ((-1L) | (safe_sub_func_int16_t_s_s(g_71[0][1][1], ((safe_mul_func_int16_t_s_s(p_56, p_56)) <= ((&g_71[1][0][2] != p_57) != (((l_65 ^ (safe_sub_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u((250UL > p_56), p_56)), g_49))) >= 0x4F93L) <= (*l_70)))))))) && 0xDBL) <= g_71[3][1][1]);
                    if ((safe_add_func_int32_t_s_s((g_71[1][1][4] | (p_56 == (safe_add_func_int16_t_s_s((safe_sub_func_int32_t_s_s((safe_lshift_func_uint16_t_u_s((p_56 || ((void*)0 == &l_74)), g_18[1][3][1])), (safe_mul_func_int16_t_s_s(g_71[2][0][1], (safe_mul_func_uint16_t_u_u((((((((safe_lshift_func_uint16_t_u_s((+p_56), 3)) | ((l_62 < g_18[5][7][1]) & p_56)) && 0UL) && l_74) & 0x33L) <= 3UL) > 0UL), (**l_69))))))), (-2L))))), 1UL)))
                    {
                        (*l_69) = &g_49;
                        l_74 = (p_56 > (((((safe_mod_func_uint16_t_u_u((!(safe_sub_func_int8_t_s_s(l_100, g_49))), 0x544DL)) <= g_49) > (safe_add_func_uint16_t_u_u((p_58 != l_123), g_71[1][1][8]))) >= (*l_70)) <= l_62));
                        if (g_2)
                            break;
                    }
                    else
                    {
                        int l_128 = 0x31E85077L;
                        l_129[1] = (safe_rshift_func_int16_t_s_u((g_18[3][5][1] & ((p_56 == (1UL == g_2)) == (safe_mod_func_int32_t_s_s(l_128, 0x8FB2D732L)))), 14));
                        (*l_69) = &l_129[1];
                        (**l_69) = g_18[3][6][1];
                        (**l_69) = (~((((safe_rshift_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s(g_71[2][1][5], (g_49 <= p_56))), g_71[0][1][6])) > (safe_mul_func_int16_t_s_s((+p_56), 65535UL))) ^ 0xB20CL) || g_2));
                    }
                    l_136 = p_57;
                }
                else
                {
                    for (l_62 = 0; (l_62 <= 1); l_62 += 1)
                    {
                        return p_56;
                    }
                }
                for (l_74 = 1; (l_74 >= 0); l_74 -= 1)
                {
                    unsigned short l_139 = 1UL;
                    int *l_140 = &l_129[4];
                }
            }
        }
        else
        {
            int *l_164[9] = {(void*)0,&g_71[1][1][4],&g_71[1][1][4],(void*)0,&g_71[1][1][4],&g_71[1][1][4],(void*)0,&g_71[1][1][4],&g_71[1][1][4]};
            int **l_165[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int *l_173 = &l_129[1];
            int *l_174 = (void*)0;
            int *l_187[4];
            int *l_202 = &l_129[5];
            char l_203 = 0L;
            int **l_212 = &l_202;
            unsigned short l_274 = 0x7672L;
            int i;
            for (i = 0; i < 4; i++)
                l_187[i] = &g_71[0][0][8];
            if ((p_57 == p_58))
            {
                int l_152 = 0x1A39021DL;
                for (l_65 = 0; (l_65 <= 1); l_65 += 1)
                {
                    unsigned l_149 = 0x3B7A216FL;
                    (*l_142) = ((p_56 ^ 0xE0L) <= (*p_59));
                    for (l_62 = 0; (l_62 <= 1); l_62 += 1)
                    {
                        int **l_144[3][6][9] = {{{&l_142,&l_136,&l_136,&l_142,&l_142,&l_142,&l_142,(void*)0,&l_136},{&l_136,&l_142,&l_136,(void*)0,&l_136,(void*)0,&l_136,&l_142,&l_136},{&l_142,&l_142,&l_136,&l_136,&l_142,&l_136,&l_136,(void*)0,&l_142},{(void*)0,&l_136,&l_142,(void*)0,(void*)0,&l_136,&l_142,&l_136,&l_136},{&l_136,&l_142,&l_136,&l_136,&l_142,&l_136,&l_136,&l_136,&l_142},{(void*)0,&l_142,&l_136,&l_136,(void*)0,&l_142,&l_136,&l_136,&l_142}},{{&l_142,(void*)0,&l_142,(void*)0,&l_142,&l_136,&l_136,&l_136,&l_136},{&l_142,(void*)0,&l_136,&l_142,&l_136,&l_136,&l_136,(void*)0,&l_142},{&l_142,&l_136,&l_142,&l_142,(void*)0,&l_136,&l_136,&l_136,&l_136},{&l_136,&l_136,&l_136,&l_136,&l_142,&l_142,&l_142,&l_136,&l_136},{&l_136,(void*)0,&l_136,&l_136,&l_136,&l_136,&l_136,&l_136,(void*)0},{&l_136,&l_142,(void*)0,&l_142,&l_136,&l_136,&l_136,&l_136,&l_136}},{{&l_136,&l_142,&l_142,&l_142,&l_136,&l_136,(void*)0,&l_142,&l_136},{&l_136,&l_136,(void*)0,&l_142,&l_142,&l_136,&l_136,(void*)0,&l_136},{&l_142,&l_136,&l_142,&l_142,(void*)0,&l_142,&l_136,&l_136,&l_136},{&l_136,&l_136,&l_136,&l_136,&l_136,&l_136,(void*)0,&l_136,&l_136},{&l_142,&l_136,&l_142,&l_136,&l_142,(void*)0,&l_136,&l_142,&l_136},{&l_136,&l_136,&l_142,&l_136,&l_142,&l_136,(void*)0,&l_142,&l_136}}};
                        int i, j, k;
                        p_57 = p_58;
                        g_71[0][1][7] = ((((((safe_rshift_func_int8_t_s_s((safe_sub_func_int8_t_s_s((0xD26EDEA7L & p_56), l_149)), 1)) == (*p_58)) > (-9L)) & (safe_lshift_func_uint16_t_u_u((0x59963902L || l_152), 13))) > g_2) & (safe_sub_func_uint16_t_u_u(p_56, 0xEEBDL)));
                        if (l_149)
                            break;
                    }
                }
                if (l_152)
                    goto lbl_168;
            }
            else
            {
                int **l_155 = (void*)0;
                g_156 = &g_49;
                (*l_142) = (safe_add_func_uint32_t_u_u(0x8EEF55B7L, (safe_rshift_func_uint16_t_u_s((safe_add_func_uint32_t_u_u((safe_unary_minus_func_uint8_t_u(p_56)), (0x73L > p_56))), 7))));
            }
            g_156 = l_164[1];
            if ((safe_lshift_func_uint16_t_u_s((*l_142), p_56)))
            {
lbl_168:
                p_58 = &g_49;
                if ((safe_lshift_func_int8_t_s_u((safe_mul_func_uint16_t_u_u(0x4C13L, (+((p_56 && (l_173 != (void*)0)) <= p_56)))), 4)))
                {
                    return p_56;
                }
                else
                {
                    unsigned short l_178 = 0x4037L;
                    int *l_186[8][10] = {{&g_71[3][1][2],&g_49,&l_129[6],&g_71[3][1][2],&g_49,&g_49,&g_71[3][1][2],&l_129[6],&g_49,&g_71[3][1][2]},{&l_129[6],(void*)0,&g_49,&g_49,(void*)0,&g_49,&g_49,(void*)0,&l_129[6],&l_129[6]},{&g_71[3][1][2],&l_129[0],&l_129[3],(void*)0,(void*)0,&l_129[3],&l_129[0],&g_71[3][1][2],&l_129[3],&g_71[3][1][2]},{(void*)0,&g_49,&g_49,(void*)0,&g_49,&g_49,(void*)0,&l_129[6],&l_129[6],(void*)0},{&l_129[6],&g_71[3][1][2],&g_49,&g_49,&g_71[3][1][2],&l_129[6],&g_49,&g_71[3][1][2],&g_49,&l_129[6]},{(void*)0,&l_129[0],&g_71[0][0][6],&l_129[0],(void*)0,&g_71[0][0][6],&g_71[3][1][2],&g_71[3][1][2],&g_71[0][0][6],(void*)0},{(void*)0,&l_129[6],&l_129[6],(void*)0,&g_49,&g_49,(void*)0,&g_49,&g_49,(void*)0},{&g_49,(void*)0,&g_49,&g_49,(void*)0,&l_129[6],&l_129[6],(void*)0,&g_49,&g_49}};
                    int i, j;
                    for (l_65 = 0; (l_65 <= 5); l_65 += 1)
                    {
                        return g_141;
                    }
                    if (((void*)0 != &g_71[0][1][9]))
                    {
                        p_59 = l_142;
                        l_174 = p_57;
                    }
                    else
                    {
                        (*l_142) = (safe_mul_func_int16_t_s_s(l_177, (~l_178)));
                        (*l_142) = (safe_sub_func_int32_t_s_s((g_2 & (p_56 != ((&l_142 == l_181) == ((-6L) < (safe_sub_func_int16_t_s_s(((g_2 <= g_2) <= (safe_sub_func_int8_t_s_s(((p_56 || p_56) >= (*p_59)), p_56))), 0xA9BCL)))))), p_56));
                        p_57 = l_186[6][1];
                        return g_49;
                    }
                    for (p_56 = 8; (p_56 >= 0); p_56 -= 1)
                    {
                        int i;
                        p_57 = (void*)0;
                        g_156 = &l_129[p_56];
                        g_156 = l_187[1];
                        if ((*p_59))
                            break;
                    }
                }
                if (((safe_sub_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u(((safe_lshift_func_uint16_t_u_s(((safe_unary_minus_func_int16_t_s(g_49)) <= p_56), (*l_173))) < (safe_lshift_func_uint16_t_u_u(((safe_sub_func_int8_t_s_s(l_199, p_56)) && g_18[4][1][1]), 13))), (g_2 | (safe_mul_func_uint16_t_u_u(g_18[2][2][0], ((g_49 && 255UL) != p_56)))))), g_2)) && 0x53A9L))
                {
                    if (((*l_173) && g_49))
                    {
                        p_57 = l_202;
                        l_142 = &g_71[0][0][6];
                        (*p_57) = 1L;
                    }
                    else
                    {
                        unsigned short l_209 = 0xE03FL;
                        (*p_59) = (0x85034D1DL == 0xEC71F631L);
                        (*l_202) = (l_203 != ((safe_lshift_func_uint8_t_u_u(p_56, ((safe_add_func_uint32_t_u_u(((safe_unary_minus_func_int32_t_s(l_209)) < g_49), p_56)) > 1L))) > g_49));
                        (*l_142) = (-10L);
                    }
                }
                else
                {
                    (*l_173) = g_49;
                    (*l_173) = (safe_sub_func_uint16_t_u_u(g_71[3][0][1], (p_56 ^ ((g_141 < (&g_156 != (void*)0)) == (*l_142)))));
                    (*l_173) = 0x8ACB9F93L;
                    l_212 = &p_58;
                }
            }
            else
            {
                int *l_213 = &l_129[1];
                int ***l_238[2][3] = {{&l_165[2],&l_165[2],&l_165[2]},{&l_165[2],&l_165[2],&l_165[2]}};
                int *l_249 = &g_49;
                int i, j;
                (*l_212) = l_213;
                for (l_203 = 0; (l_203 > 17); l_203 = safe_add_func_uint8_t_u_u(l_203, 2))
                {
                    int *l_220[4];
                    int i;
                    for (i = 0; i < 4; i++)
                        l_220[i] = &l_129[1];
                    l_136 = &g_49;
                    if (((safe_rshift_func_int16_t_s_u((((*l_136) & ((void*)0 != l_220[3])) && p_56), 2)) < ((&g_156 != &l_142) <= l_221[2])))
                    {
                        return g_18[1][0][1];
                    }
                    else
                    {
                        (*l_212) = p_58;
                    }
                    for (l_62 = 23; (l_62 > 44); l_62++)
                    {
                        int **l_224 = &l_220[3];
                        int ***l_225 = (void*)0;
                        int ***l_226 = (void*)0;
                        int ***l_227 = &l_181;
                        (*l_227) = l_224;
                        (*l_213) = (*p_59);
                        (*l_213) = (*l_142);
                        (**l_224) = (g_49 ^ (((safe_mod_func_uint16_t_u_u(g_2, g_2)) ^ l_230) & p_56));
                    }
                    g_231 = g_231;
                }
                if (l_232)
                {
                    (*l_212) = p_58;
                    for (l_177 = 11; (l_177 >= 40); ++l_177)
                    {
                        (*l_213) = (p_56 < g_49);
                        (*l_212) = p_59;
                        (*l_212) = &g_71[0][0][8];
                        return g_18[8][3][1];
                    }
                    for (l_232 = 0; (l_232 >= 16); l_232 = safe_add_func_int16_t_s_s(l_232, 3))
                    {
                        unsigned short l_237[2];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_237[i] = 0UL;
                        g_71[0][1][0] = (*p_59);
                        l_237[0] = 4L;
                        (*l_212) = &g_71[0][0][9];
                        (*l_212) = &g_71[0][1][7];
                    }
                }
                else
                {
                    return g_2;
                }
                if (((l_238[0][0] != l_238[0][0]) == p_56))
                {
                    int l_243 = 0xAEB2DA18L;
                    int *l_244 = &g_71[3][1][2];
                    int **l_245 = &l_164[1];
                    if ((safe_sub_func_int8_t_s_s((safe_lshift_func_int8_t_s_u((&g_71[3][1][5] != p_59), 4)), l_243)))
                    {
                        (*l_212) = &l_243;
                        (**l_212) = (p_56 & (~p_56));
                        l_244 = l_142;
                        (*l_213) = (+(l_245 != (void*)0));
                    }
                    else
                    {
                        int *l_246[6][7][2] = {{{&l_243,(void*)0},{(void*)0,&l_243},{(void*)0,(void*)0},{&g_71[2][1][3],&g_71[0][0][4]},{&l_129[4],&l_129[1]},{(void*)0,&g_71[1][0][0]},{&l_129[1],(void*)0}},{{(void*)0,&g_71[2][0][7]},{&l_243,&l_243},{&l_129[1],&l_129[1]},{&g_71[1][0][0],&g_71[2][0][7]},{&l_243,&l_243},{&l_129[1],&l_243},{&l_129[3],&l_129[1]}},{{&g_71[2][1][3],&l_243},{&g_71[2][1][3],&l_129[1]},{&l_129[3],&l_243},{&l_129[1],&l_243},{&l_243,&g_71[2][0][7]},{&g_71[1][0][0],&l_129[1]},{&l_129[1],&l_243}},{{&l_243,&g_71[2][0][7]},{(void*)0,(void*)0},{&l_129[1],&g_71[1][0][0]},{(void*)0,&l_129[1]},{&l_129[4],&g_71[0][0][4]},{&g_71[2][1][3],(void*)0},{(void*)0,&l_243}},{{(void*)0,(void*)0},{&l_243,&g_71[3][1][0]},{&l_129[4],&g_71[0][1][1]},{&l_129[1],&g_71[0][1][1]},{&l_129[4],&g_71[3][1][0]},{&l_243,&l_243},{&l_243,&l_129[4]}},{{&l_129[1],&l_243},{&l_129[3],&g_49},{(void*)0,&l_243},{&l_129[1],(void*)0},{&l_243,&l_243},{(void*)0,(void*)0},{&l_129[4],&l_129[1]}}};
                        int i, j, k;
                        l_246[4][3][1] = p_58;
                        p_58 = p_59;
                    }
                    for (l_199 = 0; (l_199 == 5); l_199 = safe_add_func_uint8_t_u_u(l_199, 6))
                    {
                        (*l_245) = (void*)0;
                    }
                    for (l_232 = 8; (l_232 >= 1); l_232 -= 1)
                    {
                        int i;
                        p_59 = l_164[l_232];
                        if ((*l_142))
                            break;
                        g_231 = l_249;
                        g_156 = &g_49;
                    }
                }
                else
                {
                    int *l_266 = &g_71[2][1][2];
                    if (((*l_173) && ((*p_57) <= ((l_250 > (safe_add_func_int8_t_s_s(g_71[0][1][1], ((safe_rshift_func_uint8_t_u_s(0xD0L, 7)) < (safe_mul_func_int16_t_s_s((p_56 >= (safe_mod_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s((((void*)0 == &g_231) <= g_49), g_71[1][1][0])), (-1L))), p_56))), p_56)))))) && p_56))))
                    {
                        unsigned short l_265 = 3UL;
                        p_57 = p_59;
                        (*l_173) = (safe_mod_func_uint8_t_u_u(0xA7L, g_71[0][1][6]));
                        l_265 = 0L;
                        (*l_212) = (void*)0;
                    }
                    else
                    {
                        l_266 = p_57;
                        (*l_142) = (safe_unary_minus_func_int8_t_s(0x3CL));
                        (*l_212) = &g_71[0][1][1];
                    }
                    for (l_232 = 7; (l_232 == 20); l_232++)
                    {
                        int ***l_275 = (void*)0;
                        (*l_173) = ((safe_add_func_int8_t_s_s((~((*l_266) | (safe_rshift_func_uint8_t_u_u(g_141, 2)))), (*l_249))) <= l_274);
                        (*l_142) = ((l_275 != g_276) || g_71[1][0][7]);
                    }
                    p_59 = l_142;
                }
            }
        }
        for (g_141 = 23; (g_141 == 51); g_141++)
        {
            p_59 = (void*)0;
        }
    }
    else
    {
        int *l_286[1];
        int **l_307 = &l_136;
        int i;
        for (i = 0; i < 1; i++)
            l_286[i] = (void*)0;
        (*g_156) = ((safe_rshift_func_uint8_t_u_s((!250UL), 0)) >= p_56);
lbl_308:
        (*g_156) = (((&p_59 != &l_136) <= (safe_unary_minus_func_uint16_t_u(g_49))) < 1UL);
        if ((*p_57))
        {
            char l_288 = 7L;
            int ***l_289 = &l_181;
            int *l_292 = &g_71[2][1][6];
            int **l_293 = (void*)0;
            int **l_294 = &l_286[0];
            for (l_199 = 0; (l_199 < 56); l_199 = safe_add_func_uint16_t_u_u(l_199, 1))
            {
                for (l_177 = 4; (l_177 >= 39); l_177 = safe_add_func_int8_t_s_s(l_177, 8))
                {
                    for (p_56 = 0; (p_56 <= 3); p_56 += 1)
                    {
                        int **l_287 = &g_156;
                        (*l_287) = l_286[0];
                    }
                    return l_288;
                }
                (*g_156) = 0xBCE1EA2BL;
            }
            (*g_156) = ((void*)0 != l_289);
            for (l_288 = (-22); (l_288 <= 0); l_288 = safe_add_func_int32_t_s_s(l_288, 8))
            {
                l_292 = p_57;
            }
            (*l_294) = p_59;
        }
        else
        {
            int ***l_305[3][7][3] = {{{&l_181,&l_181,&l_181},{(void*)0,&l_181,(void*)0},{&l_181,&l_181,(void*)0},{(void*)0,(void*)0,(void*)0},{&l_181,&l_181,(void*)0},{&l_181,(void*)0,&l_181},{&l_181,&l_181,(void*)0}},{{&l_181,&l_181,&l_181},{(void*)0,&l_181,(void*)0},{&l_181,&l_181,(void*)0},{(void*)0,(void*)0,(void*)0},{&l_181,&l_181,(void*)0},{&l_181,(void*)0,&l_181},{&l_181,&l_181,(void*)0}},{{&l_181,&l_181,&l_181},{(void*)0,&l_181,(void*)0},{&l_181,&l_181,(void*)0},{(void*)0,(void*)0,(void*)0},{&l_181,&l_181,(void*)0},{&l_181,(void*)0,&l_181},{&l_181,&l_181,(void*)0}}};
            char l_328 = 0xB9L;
            int l_342[7] = {0x6DD69A5EL,0x6DD69A5EL,0x6DD69A5EL,0x6DD69A5EL,0x6DD69A5EL,0x6DD69A5EL,0x6DD69A5EL};
            int i, j, k;
            (*g_156) = (((p_59 != p_58) == 0xBF2FL) && (0x43L >= ((-1L) && (g_141 <= (safe_add_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u(0x30L, (g_141 > (safe_rshift_func_uint16_t_u_s((safe_mod_func_uint16_t_u_u((&p_58 != &l_136), (-9L))), g_18[1][6][0]))))), 0UL)), 65531UL))))));
            g_306[3] = &p_58;
lbl_354:
            for (l_199 = 0; (l_199 <= 1); l_199 += 1)
            {
                l_307 = &l_286[0];
                for (l_177 = 3; (l_177 <= 8); l_177 += 1)
                {
                    unsigned l_317 = 4294967292UL;
                    int i;
                    for (l_62 = 1; (l_62 <= 8); l_62 += 1)
                    {
                        int i, j, k;
                        g_71[(l_199 + 2)][l_199][(l_199 + 3)] = l_129[(l_199 + 2)];
                        if (l_129[(l_199 + 2)])
                            continue;
                        if (g_49)
                            goto lbl_308;
                        (*l_307) = p_59;
                    }
                    (*g_156) = l_129[(l_199 + 2)];
                    if ((*p_59))
                        continue;
                    for (g_141 = 0; (g_141 <= 1); g_141 += 1)
                    {
                        int i, j, k;
                        g_71[(g_141 + 2)][l_199][l_177] = ((safe_mul_func_uint16_t_u_u(p_56, (((safe_rshift_func_uint16_t_u_s(p_56, (safe_add_func_uint32_t_u_u((safe_lshift_func_int8_t_s_s(0x8DL, 0)), (*p_59))))) != (~p_56)) == l_317))) != (safe_sub_func_uint8_t_u_u((safe_mod_func_int8_t_s_s((p_56 && ((l_305[0][0][1] != &g_306[3]) < p_56)), p_56)), 253UL)));
                    }
                }
            }
            for (l_230 = (-16); (l_230 != 57); l_230++)
            {
                short l_331 = 0x551CL;
                int *l_353 = &l_129[6];
                if ((*p_57))
                    break;
                if ((*p_57))
                    continue;
                if ((g_18[9][3][1] ^ (safe_sub_func_int32_t_s_s(l_328, (safe_sub_func_int8_t_s_s(l_331, ((0xEC46L < p_56) || (g_71[3][0][7] < (safe_rshift_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u(4294967289UL, ((safe_mod_func_int16_t_s_s((safe_lshift_func_int16_t_s_s((g_49 != l_331), g_2)), l_342[0])) != p_56))), p_56))))))))))
                {
                    int l_345[9][4][7] = {{{9L,(-1L),(-1L),1L,0x1F7D0080L,0L,0xA6B60F66L},{0x1ECC3A4CL,0x9757650EL,0xCCC983FDL,0xF267E313L,(-1L),7L,(-1L)},{0L,0x6543DA58L,0xD6533656L,0L,0xF45E0DE5L,0L,1L},{0x17B122E6L,(-5L),0x1D6E4C45L,9L,0x155FE3F1L,7L,1L}},{{8L,0x71F3955CL,0xF267E313L,0xC4E2E24AL,1L,0x335532F4L,(-1L)},{0xA6B60F66L,0x3B365817L,0x17B122E6L,1L,0x17B122E6L,0x3B365817L,0xA6B60F66L},{0x3B365817L,0xF45E0DE5L,0L,0x1F7D0080L,0x1ECC3A4CL,(-4L),0x9757650EL},{0xD6533656L,9L,0xFF04916EL,0L,0xF267E313L,1L,0x6D43038DL}},{{(-1L),0x155FE3F1L,0L,0xFD97E375L,(-1L),(-1L),0x155FE3F1L},{8L,(-1L),0x17B122E6L,0xD30CB4F0L,9L,0xC4E2E24AL,3L},{(-4L),0xA6B60F66L,0xF267E313L,0x1D6E4C45L,0x17B122E6L,0L,0x1ECC3A4CL},{0L,7L,0x1D6E4C45L,0xF45E0DE5L,0x239C388BL,0L,(-1L)}},{{0xFF04916EL,9L,0xD6533656L,0xF267E313L,7L,0xC4E2E24AL,0xB4D193DAL},{(-1L),0x6543DA58L,0xCCC983FDL,0xCCC983FDL,0x6543DA58L,(-1L),0x1D6E4C45L},{0x1F7D0080L,1L,0x1ECC3A4CL,(-1L),0L,0x71F3955CL,0xA6B60F66L},{0x36B807C0L,0x6D43038DL,(-4L),0xD6533656L,0xA6B60F66L,1L,0x155FE3F1L}},{{9L,1L,1L,0x3B365817L,1L,(-1L),0x1ECC3A4CL},{0xF267E313L,0L,7L,0xA6B60F66L,0L,0x1F7D0080L,1L},{1L,1L,0xD30CB4F0L,8L,0L,(-1L),0xCCC983FDL},{0x9757650EL,(-1L),(-1L),0x17B122E6L,0L,7L,(-1L)}},{{0x36B807C0L,9L,0x239C388BL,0L,0L,(-5L),(-5L)},{1L,0x1ECC3A4CL,0x335532F4L,0x1ECC3A4CL,1L,0xB4D193DAL,0L},{7L,0L,0x9757650EL,0L,0xA6B60F66L,(-1L),0L},{0L,1L,8L,0x335532F4L,0L,0x3B365817L,0x1ECBC2EAL}},{{7L,0L,1L,0xF267E313L,0L,7L,0xA6B60F66L},{1L,(-1L),0x1ECC3A4CL,0x69B1E880L,(-1L),0L,0x0572004AL},{0x36B807C0L,7L,0x335532F4L,0x3B365817L,0x0572004AL,1L,(-1L)},{0x9757650EL,0xFD97E375L,0x1F7D0080L,0x69B1E880L,0L,0L,(-1L)}},{{0xFF04916EL,0x3B365817L,(-1L),0x155FE3F1L,7L,0L,7L},{0L,0xC4E2E24AL,0xC4E2E24AL,0L,0L,0L,0x69B1E880L},{0x71F3955CL,0x17B122E6L,8L,0x6543DA58L,0xD30CB4F0L,0xF267E313L,0x17B122E6L},{0xF45E0DE5L,4L,0xB4D193DAL,0xD6533656L,3L,(-1L),0x69B1E880L}},{{0L,(-1L),1L,4L,0L,0xCCC983FDL,7L},{8L,(-4L),0L,(-5L),(-1L),0xD6533656L,(-1L)},{1L,0xC4E2E24AL,0xFF04916EL,1L,(-4L),0x1D6E4C45L,8L},{0xF267E313L,0L,0xFF04916EL,9L,0xD6533656L,0xF267E313L,7L}}};
                    int l_352 = (-1L);
                    int i, j, k;
                    for (l_250 = 0; (l_250 > 10); ++l_250)
                    {
                        if (l_345[1][0][4])
                            break;
                    }
                    l_352 = (safe_rshift_func_int16_t_s_u(((safe_rshift_func_uint8_t_u_u((0x9C955408L == g_2), g_18[5][0][1])) == ((safe_lshift_func_int8_t_s_u(g_71[2][1][5], 6)) && (-1L))), 2));
                    p_57 = p_58;
                }
                else
                {
                    p_58 = l_353;
                    if (l_331)
                        goto lbl_354;
                    (*p_58) = (*l_353);
                    if ((*p_58))
                        continue;
                }
                (*l_353) = (safe_mul_func_uint8_t_u_u(((+(safe_add_func_uint32_t_u_u((safe_add_func_int8_t_s_s((p_58 != l_353), ((*g_156) < ((g_49 == (-1L)) < p_56)))), (*p_57)))) | 0xACL), (g_2 > p_56)));
            }
        }
    }
    return g_71[2][0][4];
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
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_18[i][j][k], "g_18[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_49, "g_49", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 10; k++)
            {
                transparent_crc(g_71[i][j][k], "g_71[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_141, "g_141", print_hash_value);
    transparent_crc(g_384, "g_384", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_472[i][j], "g_472[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_491, "g_491", print_hash_value);
    transparent_crc(g_889, "g_889", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_1009[i][j][k], "g_1009[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_1279, "g_1279", print_hash_value);
    transparent_crc(g_1342, "g_1342", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_1354[i][j][k], "g_1354[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
