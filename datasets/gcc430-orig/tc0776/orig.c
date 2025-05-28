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



static unsigned short g_2 = 0x5206L;
static int g_15[4][3][3] = {{{0x7C8B166CL, 0x694D2B5FL, 5L}, {0x7C8B166CL, 0x694D2B5FL, 5L}, {0x7C8B166CL, 0x694D2B5FL, 5L}}, {{0x7C8B166CL, 0x694D2B5FL, 5L}, {0x7C8B166CL, 0x694D2B5FL, 5L}, {0x7C8B166CL, 0x694D2B5FL, 5L}}, {{0x7C8B166CL, 0x694D2B5FL, 5L}, {0x7C8B166CL, 0x694D2B5FL, 5L}, {0x7C8B166CL, 0x694D2B5FL, 5L}}, {{0x7C8B166CL, 0x694D2B5FL, 5L}, {0x7C8B166CL, 0x694D2B5FL, 5L}, {0x7C8B166CL, 0x694D2B5FL, 5L}}};
static short g_37 = 0xADB5L;
static unsigned char g_57 = 0x75L;
static unsigned char g_59[4] = {0xEDL, 0xEDL, 0xEDL, 0xEDL};
static unsigned g_71 = 0x6CFD11E6L;
static unsigned g_73 = 0xC855A404L;
static unsigned *g_72 = &g_73;
static int g_81 = (-9L);
static int *g_92 = (void*)0;
static int **g_91 = &g_92;
static int g_107 = 1L;
static unsigned g_129 = 5UL;
static char g_131 = 0x9EL;
static unsigned short g_155 = 0x68B7L;
static short g_185 = (-1L);
static unsigned g_226 = 0x99B1E4FEL;
static unsigned g_229 = 0UL;
static int g_230[3][8][5] = {{{0xE98369C0L, 1L, 0xE98369C0L, 0xDB369722L, 0xA7C91920L}, {0xE98369C0L, 1L, 0xE98369C0L, 0xDB369722L, 0xA7C91920L}, {0xE98369C0L, 1L, 0xE98369C0L, 0xDB369722L, 0xA7C91920L}, {0xE98369C0L, 1L, 0xE98369C0L, 0xDB369722L, 0xA7C91920L}, {0xE98369C0L, 1L, 0xE98369C0L, 0xDB369722L, 0xA7C91920L}, {0xE98369C0L, 1L, 0xE98369C0L, 0xDB369722L, 0xA7C91920L}, {0xE98369C0L, 1L, 0xE98369C0L, 0xDB369722L, 0xA7C91920L}, {0xE98369C0L, 1L, 0xE98369C0L, 0xDB369722L, 0xA7C91920L}}, {{0xE98369C0L, 1L, 0xE98369C0L, 0xDB369722L, 0xA7C91920L}, {0xE98369C0L, 1L, 0xE98369C0L, 0xDB369722L, 0xA7C91920L}, {0xE98369C0L, 1L, 0xE98369C0L, 0xDB369722L, 0xA7C91920L}, {0xE98369C0L, 1L, 0xE98369C0L, 0xDB369722L, 0xA7C91920L}, {0xE98369C0L, 1L, 0xE98369C0L, 0xDB369722L, 0xA7C91920L}, {0xE98369C0L, 1L, 0xE98369C0L, 0xDB369722L, 0xA7C91920L}, {0xE98369C0L, 1L, 0xE98369C0L, 0xDB369722L, 0xA7C91920L}, {0xE98369C0L, 1L, 0xE98369C0L, 0xDB369722L, 0xA7C91920L}}, {{0xE98369C0L, 1L, 0xE98369C0L, 0xDB369722L, 0xA7C91920L}, {0xE98369C0L, 1L, 0xE98369C0L, 0xDB369722L, 0xA7C91920L}, {0xE98369C0L, 1L, 0xE98369C0L, 0xDB369722L, 0xA7C91920L}, {0xE98369C0L, 1L, 0xE98369C0L, 0xDB369722L, 0xA7C91920L}, {0xE98369C0L, 1L, 0xE98369C0L, 0xDB369722L, 0xA7C91920L}, {0xE98369C0L, 1L, 0xE98369C0L, 0xDB369722L, 0xA7C91920L}, {0xE98369C0L, 1L, 0xE98369C0L, 0xDB369722L, 0xA7C91920L}, {0xE98369C0L, 1L, 0xE98369C0L, 0xDB369722L, 0xA7C91920L}}};
static int ***g_280[8][10] = {{&g_91, &g_91, &g_91, &g_91, &g_91, &g_91, &g_91, &g_91, &g_91, &g_91}, {&g_91, &g_91, &g_91, &g_91, &g_91, &g_91, &g_91, &g_91, &g_91, &g_91}, {&g_91, &g_91, &g_91, &g_91, &g_91, &g_91, &g_91, &g_91, &g_91, &g_91}, {&g_91, &g_91, &g_91, &g_91, &g_91, &g_91, &g_91, &g_91, &g_91, &g_91}, {&g_91, &g_91, &g_91, &g_91, &g_91, &g_91, &g_91, &g_91, &g_91, &g_91}, {&g_91, &g_91, &g_91, &g_91, &g_91, &g_91, &g_91, &g_91, &g_91, &g_91}, {&g_91, &g_91, &g_91, &g_91, &g_91, &g_91, &g_91, &g_91, &g_91, &g_91}, {&g_91, &g_91, &g_91, &g_91, &g_91, &g_91, &g_91, &g_91, &g_91, &g_91}};
static int ****g_279[7][4] = {{&g_280[7][9], &g_280[7][9], (void*)0, &g_280[7][9]}, {&g_280[7][9], &g_280[7][9], (void*)0, &g_280[7][9]}, {&g_280[7][9], &g_280[7][9], (void*)0, &g_280[7][9]}, {&g_280[7][9], &g_280[7][9], (void*)0, &g_280[7][9]}, {&g_280[7][9], &g_280[7][9], (void*)0, &g_280[7][9]}, {&g_280[7][9], &g_280[7][9], (void*)0, &g_280[7][9]}, {&g_280[7][9], &g_280[7][9], (void*)0, &g_280[7][9]}};
static unsigned ****g_317 = (void*)0;
static unsigned char g_342 = 1UL;
static int g_514 = 0x80AB89A5L;
static unsigned char g_527 = 255UL;
static unsigned g_532 = 0xC29CF0E0L;
static int g_540 = 0xA5D85D09L;
static unsigned char *g_596 = &g_57;
static unsigned short g_620 = 8UL;
static char g_748 = 0x47L;
static unsigned g_767 = 4294967295UL;
static int g_820 = (-4L);
static char **g_841 = (void*)0;
static int *g_856 = &g_540;
static int **g_855 = &g_856;
static short *g_873 = (void*)0;
static short **g_872 = &g_873;
static unsigned *******g_895 = (void*)0;
static int g_898 = 1L;
static short g_900 = 1L;
static int g_971 = 0x15484A29L;
static char ***g_983[6][10][4] = {{{&g_841, &g_841, &g_841, (void*)0}, {&g_841, &g_841, &g_841, (void*)0}, {&g_841, &g_841, &g_841, (void*)0}, {&g_841, &g_841, &g_841, (void*)0}, {&g_841, &g_841, &g_841, (void*)0}, {&g_841, &g_841, &g_841, (void*)0}, {&g_841, &g_841, &g_841, (void*)0}, {&g_841, &g_841, &g_841, (void*)0}, {&g_841, &g_841, &g_841, (void*)0}, {&g_841, &g_841, &g_841, (void*)0}}, {{&g_841, &g_841, &g_841, (void*)0}, {&g_841, &g_841, &g_841, (void*)0}, {&g_841, &g_841, &g_841, (void*)0}, {&g_841, &g_841, &g_841, (void*)0}, {&g_841, &g_841, &g_841, (void*)0}, {&g_841, &g_841, &g_841, (void*)0}, {&g_841, &g_841, &g_841, (void*)0}, {&g_841, &g_841, &g_841, (void*)0}, {&g_841, &g_841, &g_841, (void*)0}, {&g_841, &g_841, &g_841, (void*)0}}, {{&g_841, &g_841, &g_841, (void*)0}, {&g_841, &g_841, &g_841, (void*)0}, {&g_841, &g_841, &g_841, (void*)0}, {&g_841, &g_841, &g_841, (void*)0}, {&g_841, &g_841, &g_841, (void*)0}, {&g_841, &g_841, &g_841, (void*)0}, {&g_841, &g_841, &g_841, (void*)0}, {&g_841, &g_841, &g_841, (void*)0}, {&g_841, &g_841, &g_841, (void*)0}, {&g_841, &g_841, &g_841, (void*)0}}, {{&g_841, &g_841, &g_841, (void*)0}, {&g_841, &g_841, &g_841, (void*)0}, {&g_841, &g_841, &g_841, (void*)0}, {&g_841, &g_841, &g_841, (void*)0}, {&g_841, &g_841, &g_841, (void*)0}, {&g_841, &g_841, &g_841, (void*)0}, {&g_841, &g_841, &g_841, (void*)0}, {&g_841, &g_841, &g_841, (void*)0}, {&g_841, &g_841, &g_841, (void*)0}, {&g_841, &g_841, &g_841, (void*)0}}, {{&g_841, &g_841, &g_841, (void*)0}, {&g_841, &g_841, &g_841, (void*)0}, {&g_841, &g_841, &g_841, (void*)0}, {&g_841, &g_841, &g_841, (void*)0}, {&g_841, &g_841, &g_841, (void*)0}, {&g_841, &g_841, &g_841, (void*)0}, {&g_841, &g_841, &g_841, (void*)0}, {&g_841, &g_841, &g_841, (void*)0}, {&g_841, &g_841, &g_841, (void*)0}, {&g_841, &g_841, &g_841, (void*)0}}, {{&g_841, &g_841, &g_841, (void*)0}, {&g_841, &g_841, &g_841, (void*)0}, {&g_841, &g_841, &g_841, (void*)0}, {&g_841, &g_841, &g_841, (void*)0}, {&g_841, &g_841, &g_841, (void*)0}, {&g_841, &g_841, &g_841, (void*)0}, {&g_841, &g_841, &g_841, (void*)0}, {&g_841, &g_841, &g_841, (void*)0}, {&g_841, &g_841, &g_841, (void*)0}, {&g_841, &g_841, &g_841, (void*)0}}};
static unsigned *g_999 = &g_767;
static unsigned **g_998 = &g_999;
static unsigned short *g_1061[4][3][9] = {{{&g_620, &g_620, (void*)0, &g_620, (void*)0, &g_620, (void*)0, &g_620, &g_155}, {&g_620, &g_620, (void*)0, &g_620, (void*)0, &g_620, (void*)0, &g_620, &g_155}, {&g_620, &g_620, (void*)0, &g_620, (void*)0, &g_620, (void*)0, &g_620, &g_155}}, {{&g_620, &g_620, (void*)0, &g_620, (void*)0, &g_620, (void*)0, &g_620, &g_155}, {&g_620, &g_620, (void*)0, &g_620, (void*)0, &g_620, (void*)0, &g_620, &g_155}, {&g_620, &g_620, (void*)0, &g_620, (void*)0, &g_620, (void*)0, &g_620, &g_155}}, {{&g_620, &g_620, (void*)0, &g_620, (void*)0, &g_620, (void*)0, &g_620, &g_155}, {&g_620, &g_620, (void*)0, &g_620, (void*)0, &g_620, (void*)0, &g_620, &g_155}, {&g_620, &g_620, (void*)0, &g_620, (void*)0, &g_620, (void*)0, &g_620, &g_155}}, {{&g_620, &g_620, (void*)0, &g_620, (void*)0, &g_620, (void*)0, &g_620, &g_155}, {&g_620, &g_620, (void*)0, &g_620, (void*)0, &g_620, (void*)0, &g_620, &g_155}, {&g_620, &g_620, (void*)0, &g_620, (void*)0, &g_620, (void*)0, &g_620, &g_155}}};
static unsigned short **g_1060[5][1][8] = {{{&g_1061[0][0][0], &g_1061[0][0][0], &g_1061[0][0][0], &g_1061[0][0][0], &g_1061[0][0][0], &g_1061[0][0][0], &g_1061[0][0][0], &g_1061[0][0][0]}}, {{&g_1061[0][0][0], &g_1061[0][0][0], &g_1061[0][0][0], &g_1061[0][0][0], &g_1061[0][0][0], &g_1061[0][0][0], &g_1061[0][0][0], &g_1061[0][0][0]}}, {{&g_1061[0][0][0], &g_1061[0][0][0], &g_1061[0][0][0], &g_1061[0][0][0], &g_1061[0][0][0], &g_1061[0][0][0], &g_1061[0][0][0], &g_1061[0][0][0]}}, {{&g_1061[0][0][0], &g_1061[0][0][0], &g_1061[0][0][0], &g_1061[0][0][0], &g_1061[0][0][0], &g_1061[0][0][0], &g_1061[0][0][0], &g_1061[0][0][0]}}, {{&g_1061[0][0][0], &g_1061[0][0][0], &g_1061[0][0][0], &g_1061[0][0][0], &g_1061[0][0][0], &g_1061[0][0][0], &g_1061[0][0][0], &g_1061[0][0][0]}}};
static unsigned g_1112[9] = {0xE655FBAEL, 0xE655FBAEL, 0xE655FBAEL, 0xE655FBAEL, 0xE655FBAEL, 0xE655FBAEL, 0xE655FBAEL, 0xE655FBAEL, 0xE655FBAEL};
static unsigned short g_1113 = 7UL;
static unsigned g_1144 = 8UL;
static int g_1340 = 0x0FDDB434L;
static int *g_1339 = &g_1340;
static int **g_1338 = &g_1339;
static int ***g_1337 = &g_1338;
static unsigned char g_1345 = 0x41L;
static unsigned char *g_1384 = (void*)0;
static unsigned char **g_1383 = &g_1384;
static unsigned **g_1404 = &g_72;
static unsigned ***g_1403 = &g_1404;
static unsigned g_1460[3][7][8] = {{{0x9810C525L, 0x87898997L, 4294967291UL, 0x87898997L, 0x9810C525L, 0xF467D40AL, 0UL, 0x87898997L}, {0x9810C525L, 0x87898997L, 4294967291UL, 0x87898997L, 0x9810C525L, 0xF467D40AL, 0UL, 0x87898997L}, {0x9810C525L, 0x87898997L, 4294967291UL, 0x87898997L, 0x9810C525L, 0xF467D40AL, 0UL, 0x87898997L}, {0x9810C525L, 0x87898997L, 4294967291UL, 0x87898997L, 0x9810C525L, 0xF467D40AL, 0UL, 0x87898997L}, {0x9810C525L, 0x87898997L, 4294967291UL, 0x87898997L, 0x9810C525L, 0xF467D40AL, 0UL, 0x87898997L}, {0x9810C525L, 0x87898997L, 4294967291UL, 0x87898997L, 0x9810C525L, 0xF467D40AL, 0UL, 0x87898997L}, {0x9810C525L, 0x87898997L, 4294967291UL, 0x87898997L, 0x9810C525L, 0xF467D40AL, 0UL, 0x87898997L}}, {{0x9810C525L, 0x87898997L, 4294967291UL, 0x87898997L, 0x9810C525L, 0xF467D40AL, 0UL, 0x87898997L}, {0x9810C525L, 0x87898997L, 4294967291UL, 0x87898997L, 0x9810C525L, 0xF467D40AL, 0UL, 0x87898997L}, {0x9810C525L, 0x87898997L, 4294967291UL, 0x87898997L, 0x9810C525L, 0xF467D40AL, 0UL, 0x87898997L}, {0x9810C525L, 0x87898997L, 4294967291UL, 0x87898997L, 0x9810C525L, 0xF467D40AL, 0UL, 0x87898997L}, {0x9810C525L, 0x87898997L, 4294967291UL, 0x87898997L, 0x9810C525L, 0xF467D40AL, 0UL, 0x87898997L}, {0x9810C525L, 0x87898997L, 4294967291UL, 0x87898997L, 0x9810C525L, 0xF467D40AL, 0UL, 0x87898997L}, {0x9810C525L, 0x87898997L, 4294967291UL, 0x87898997L, 0x9810C525L, 0xF467D40AL, 0UL, 0x87898997L}}, {{0x9810C525L, 0x87898997L, 4294967291UL, 0x87898997L, 0x9810C525L, 0xF467D40AL, 0UL, 0x87898997L}, {0x9810C525L, 0x87898997L, 4294967291UL, 0x87898997L, 0x9810C525L, 0xF467D40AL, 0UL, 0x87898997L}, {0x9810C525L, 0x87898997L, 4294967291UL, 0x87898997L, 0x9810C525L, 0xF467D40AL, 0UL, 0x87898997L}, {0x9810C525L, 0x87898997L, 4294967291UL, 0x87898997L, 0x9810C525L, 0xF467D40AL, 0UL, 0x87898997L}, {0x9810C525L, 0x87898997L, 4294967291UL, 0x87898997L, 0x9810C525L, 0xF467D40AL, 0UL, 0x87898997L}, {0x9810C525L, 0x87898997L, 4294967291UL, 0x87898997L, 0x9810C525L, 0xF467D40AL, 0UL, 0x87898997L}, {0x9810C525L, 0x87898997L, 4294967291UL, 0x87898997L, 0x9810C525L, 0xF467D40AL, 0UL, 0x87898997L}}};
static short g_1483 = 6L;
static int ******g_1515 = (void*)0;
static char g_1573 = 4L;
static unsigned g_1585 = 0x51D62027L;
static unsigned g_1587 = 0x781491B3L;
static char ****g_1617 = &g_983[4][7][1];
static char ****g_1620 = &g_983[3][6][2];



static int func_1(void);
static short func_4(unsigned char p_5, int p_6);
static unsigned char func_9(char p_10);
static short func_16(unsigned p_17, unsigned short p_18, unsigned p_19, unsigned short p_20);
static short func_23(unsigned short p_24, int * p_25, char p_26, int * p_27);
static int * func_29(unsigned char p_30, int * p_31);
static int * func_38(int * p_39);
static int * func_45(int p_46, char p_47, short * p_48);
static short * func_50(short * p_51, unsigned short p_52, int p_53);
static int * func_62(unsigned char * p_63, int p_64, char p_65, unsigned char p_66, unsigned p_67);
static int func_1(void)
{
    int l_3 = 0xC8FC558BL;
    int ***l_1336 = &g_91;
    short l_1341[1];
    unsigned *l_1342 = (void*)0;
    unsigned *l_1343 = &g_73;
    unsigned char *l_1344 = &g_1345;
    unsigned l_1456 = 1UL;
    short l_1457 = 0xD217L;
    int l_1458[10][2];
    int l_1459 = 0x886C8DF7L;
    int ***l_1472 = &g_855;
    int *l_1517[8][3][7] = {{{&g_15[2][0][0], &g_1340, &g_15[3][2][2], &g_1340, &g_15[0][2][0], (void*)0, &g_15[0][2][0]}, {&g_15[2][0][0], &g_1340, &g_15[3][2][2], &g_1340, &g_15[0][2][0], (void*)0, &g_15[0][2][0]}, {&g_15[2][0][0], &g_1340, &g_15[3][2][2], &g_1340, &g_15[0][2][0], (void*)0, &g_15[0][2][0]}}, {{&g_15[2][0][0], &g_1340, &g_15[3][2][2], &g_1340, &g_15[0][2][0], (void*)0, &g_15[0][2][0]}, {&g_15[2][0][0], &g_1340, &g_15[3][2][2], &g_1340, &g_15[0][2][0], (void*)0, &g_15[0][2][0]}, {&g_15[2][0][0], &g_1340, &g_15[3][2][2], &g_1340, &g_15[0][2][0], (void*)0, &g_15[0][2][0]}}, {{&g_15[2][0][0], &g_1340, &g_15[3][2][2], &g_1340, &g_15[0][2][0], (void*)0, &g_15[0][2][0]}, {&g_15[2][0][0], &g_1340, &g_15[3][2][2], &g_1340, &g_15[0][2][0], (void*)0, &g_15[0][2][0]}, {&g_15[2][0][0], &g_1340, &g_15[3][2][2], &g_1340, &g_15[0][2][0], (void*)0, &g_15[0][2][0]}}, {{&g_15[2][0][0], &g_1340, &g_15[3][2][2], &g_1340, &g_15[0][2][0], (void*)0, &g_15[0][2][0]}, {&g_15[2][0][0], &g_1340, &g_15[3][2][2], &g_1340, &g_15[0][2][0], (void*)0, &g_15[0][2][0]}, {&g_15[2][0][0], &g_1340, &g_15[3][2][2], &g_1340, &g_15[0][2][0], (void*)0, &g_15[0][2][0]}}, {{&g_15[2][0][0], &g_1340, &g_15[3][2][2], &g_1340, &g_15[0][2][0], (void*)0, &g_15[0][2][0]}, {&g_15[2][0][0], &g_1340, &g_15[3][2][2], &g_1340, &g_15[0][2][0], (void*)0, &g_15[0][2][0]}, {&g_15[2][0][0], &g_1340, &g_15[3][2][2], &g_1340, &g_15[0][2][0], (void*)0, &g_15[0][2][0]}}, {{&g_15[2][0][0], &g_1340, &g_15[3][2][2], &g_1340, &g_15[0][2][0], (void*)0, &g_15[0][2][0]}, {&g_15[2][0][0], &g_1340, &g_15[3][2][2], &g_1340, &g_15[0][2][0], (void*)0, &g_15[0][2][0]}, {&g_15[2][0][0], &g_1340, &g_15[3][2][2], &g_1340, &g_15[0][2][0], (void*)0, &g_15[0][2][0]}}, {{&g_15[2][0][0], &g_1340, &g_15[3][2][2], &g_1340, &g_15[0][2][0], (void*)0, &g_15[0][2][0]}, {&g_15[2][0][0], &g_1340, &g_15[3][2][2], &g_1340, &g_15[0][2][0], (void*)0, &g_15[0][2][0]}, {&g_15[2][0][0], &g_1340, &g_15[3][2][2], &g_1340, &g_15[0][2][0], (void*)0, &g_15[0][2][0]}}, {{&g_15[2][0][0], &g_1340, &g_15[3][2][2], &g_1340, &g_15[0][2][0], (void*)0, &g_15[0][2][0]}, {&g_15[2][0][0], &g_1340, &g_15[3][2][2], &g_1340, &g_15[0][2][0], (void*)0, &g_15[0][2][0]}, {&g_15[2][0][0], &g_1340, &g_15[3][2][2], &g_1340, &g_15[0][2][0], (void*)0, &g_15[0][2][0]}}};
    unsigned *****l_1530 = &g_317;
    unsigned ******l_1529 = &l_1530;
    unsigned ******l_1531 = &l_1530;
    int l_1559 = 1L;
    int l_1571[7];
    unsigned short l_1584 = 0x4060L;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_1341[i] = 0x3DF7L;
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 2; j++)
            l_1458[i][j] = 0xE5BF4F9FL;
    }
    for (i = 0; i < 7; i++)
        l_1571[i] = 0x44106967L;
    if (((g_2 > l_3) & (((l_3 , (l_1459 |= (((~((func_4(((*l_1344) |= (((*l_1343) = (safe_lshift_func_uint16_t_u_s((func_9(g_2) > g_1112[8]), (((&g_91 == (g_1337 = l_1336)) >= l_1341[0]) <= l_1341[0])))) <= (*g_1339))), l_3) != l_1456) ^ l_1457)) | l_1341[0]) & l_1458[6][1]))) <= 0x3DL) != l_1458[6][1])))
    {
        char l_1468 = (-3L);
        int ***l_1473 = &g_855;
        int l_1485 = 0x2DAE9173L;
        unsigned ****l_1499 = &g_1403;
        unsigned l_1508 = 0UL;
        char ***l_1509 = &g_841;
        int *****l_1522 = &g_279[1][1];
        int ******l_1521 = &l_1522;
        unsigned **l_1532 = &l_1343;
        unsigned l_1580 = 1UL;
        unsigned l_1582[4];
        unsigned short l_1588 = 0UL;
        int *l_1610 = &g_971;
        int *l_1611 = &g_1340;
        int i;
        for (i = 0; i < 4; i++)
            l_1582[i] = 1UL;
        if (g_1460[1][0][3])
        {
            unsigned l_1463[3][10][1] = {{{7UL}, {7UL}, {7UL}, {7UL}, {7UL}, {7UL}, {7UL}, {7UL}, {7UL}, {7UL}}, {{7UL}, {7UL}, {7UL}, {7UL}, {7UL}, {7UL}, {7UL}, {7UL}, {7UL}, {7UL}}, {{7UL}, {7UL}, {7UL}, {7UL}, {7UL}, {7UL}, {7UL}, {7UL}, {7UL}, {7UL}}};
            int *l_1471 = (void*)0;
            unsigned l_1481[10][3] = {{0UL, 4294967286UL, 1UL}, {0UL, 4294967286UL, 1UL}, {0UL, 4294967286UL, 1UL}, {0UL, 4294967286UL, 1UL}, {0UL, 4294967286UL, 1UL}, {0UL, 4294967286UL, 1UL}, {0UL, 4294967286UL, 1UL}, {0UL, 4294967286UL, 1UL}, {0UL, 4294967286UL, 1UL}, {0UL, 4294967286UL, 1UL}};
            int l_1503 = 0x802CA88DL;
            unsigned l_1506 = 0UL;
            int i, j, k;
            (*g_1338) = (*g_1338);
            for (g_620 = 14; (g_620 != 16); g_620 = safe_add_func_int32_t_s_s(g_620, 3))
            {
                if ((**g_1338))
                    break;
                return l_1463[2][7][0];
            }
            if ((safe_add_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u(l_1468, (g_73 | ((safe_sub_func_uint16_t_u_u(l_1459, l_1458[6][1])) == g_1144)))), l_1468)))
            {
                unsigned l_1474 = 0x2D102991L;
                int l_1475 = 0x1B2902C7L;
                unsigned l_1480 = 4294967295UL;
                unsigned char *l_1482 = &g_527;
                char *l_1484 = &l_1468;
                int *l_1486 = &l_1459;
                l_1475 ^= l_1474;
                (*l_1486) &= (((g_1112[8] <= l_1474) == (((*l_1344) = l_1463[0][0][0]) >= ((*l_1484) = (((l_1468 <= (((safe_sub_func_uint16_t_u_u(func_16(((((safe_mod_func_int32_t_s_s(((*g_1339) = l_1468), (l_1474 , 1UL))) | l_1468) || 1L) | g_1460[1][3][2]), l_1468, l_1468, l_1468), g_1483)) >= 0x8EL) < l_1474)) >= l_1468) ^ 0x6437D1B2L)))) < l_1485);

                ;
            }
            else
            {
                return l_1457;
            }

            ;
            for (l_1457 = 3; (l_1457 >= 0); l_1457 -= 1)
            {
                short *l_1491 = &l_1341[0];
                unsigned ****l_1498 = &g_1403;
                char *l_1500 = &g_748;
                char l_1501 = 0x07L;
                int *l_1502[1][8];
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 8; j++)
                        l_1502[i][j] = &g_15[0][2][0];
                }
                l_1501 |= ((safe_mod_func_int8_t_s_s((+((*l_1500) = (safe_mod_func_int32_t_s_s((((*l_1491) = (g_1112[(l_1457 + 2)] >= g_81)) | (((l_1463[1][2][0] <= (safe_mod_func_int8_t_s_s((((((safe_sub_func_uint32_t_u_u(3UL, func_4(g_1112[(l_1457 + 2)], ((***l_1473) &= (safe_mod_func_uint16_t_u_u(((!l_3) >= l_1468), ((g_1112[(l_1457 + 2)] != ((g_1112[(l_1457 + 2)] , l_1498) != l_1499)) ^ 0xAD2CL))))))) , (*g_999)) , 0xE7D6L) != 65534UL) | g_1112[(l_1457 + 2)]), g_532))) >= 0x97B5L) >= l_1468)), g_1112[(l_1457 + 2)])))), (-1L))) ^ 0L);
                l_1503 &= ((*g_1339) = 0x0C8B2591L);
                (**g_1338) = (*g_1339);
                l_1503 = ((**g_1338) ^= 0x702EEE9BL);
                for (l_1485 = 0; (l_1485 <= 3); l_1485 += 1)
                {
                    unsigned l_1507 = 1UL;
                    for (g_527 = 1; (g_527 <= 8); g_527 += 1)
                    {
                        unsigned *****l_1505 = &l_1499;
                        unsigned ******l_1504 = &l_1505;
                        int i, j;
                        l_1459 = (((*l_1504) = ((**g_1404) , &g_317)) != &g_317);

                        ;
                        l_1508 ^= (l_1507 = ((~(l_1506 , (*g_999))) , (*g_1339)));
                        if ((*g_1339))
                            continue;
                    }
                    if (l_1507)
                        break;
                    (*g_1338) = &l_1485;

                    ;
                }
            }

            ;
        }
        else
        {
            char ****l_1510 = &g_983[4][7][1];
            int l_1516 = 0x6E9189CFL;
            int *l_1533 = &g_15[1][0][1];
            unsigned l_1560 = 7UL;
            unsigned short l_1575 = 0x39BCL;
            short l_1576[10][3] = {{0x541BL, (-2L), 0x541BL}, {0x541BL, (-2L), 0x541BL}, {0x541BL, (-2L), 0x541BL}, {0x541BL, (-2L), 0x541BL}, {0x541BL, (-2L), 0x541BL}, {0x541BL, (-2L), 0x541BL}, {0x541BL, (-2L), 0x541BL}, {0x541BL, (-2L), 0x541BL}, {0x541BL, (-2L), 0x541BL}, {0x541BL, (-2L), 0x541BL}};
            int l_1577 = 0xDA655B2CL;
            int *****l_1578[6] = {&g_279[2][3], &g_279[2][3], &g_279[1][1], &g_279[2][3], &g_279[2][3], &g_279[1][1]};
            int i, j;
            (*g_1339) |= (&g_841 == ((*l_1510) = (l_1509 = &g_841)));
lbl_1563:
            for (g_57 = 0; (g_57 > 60); g_57 = safe_add_func_int16_t_s_s(g_57, 4))
            {
                unsigned char l_1518 = 0x5BL;
                int *l_1519 = &g_971;
                int ******l_1523 = &l_1522;
                for (g_971 = 0; (g_971 > 28); g_971++)
                {
                    int l_1520 = (-1L);
                    int l_1524 = 0x6669E249L;
                    for (g_820 = 0; (g_820 <= 2); g_820 += 1)
                    {
                        int i, j, k;
                        return g_1460[g_820][g_820][(g_820 + 2)];


                    }
                    (**g_1338) &= ((void*)0 != g_1515);
                    l_1524 = ((**g_1338) = (((((l_1520 , l_1521) == l_1523) & l_1520) , 4294967295UL) , 0x01658CB5L));
                }
                (*g_1338) = (*g_1338);
            }
lbl_1612:
            l_1533 = (((l_1516 <= (safe_add_func_uint32_t_u_u((safe_sub_func_int8_t_s_s((l_1529 == l_1531), 0x53L)), ((*g_1403) != (l_1532 = (**l_1499)))))) && (**g_1404)) , func_38(&l_1459));

            ;
            ;
            for (l_1485 = 0; (l_1485 != 18); l_1485++)
            {
                short l_1550 = 0L;
                int *l_1553 = (void*)0;
                int *l_1558 = (void*)0;
                unsigned char l_1561 = 0x91L;
                unsigned l_1594[9] = {0xCB5BEF7EL, 0xCB5BEF7EL, 0x03F9FD7FL, 0xCB5BEF7EL, 0xCB5BEF7EL, 0x03F9FD7FL, 0xCB5BEF7EL, 0xCB5BEF7EL, 0x03F9FD7FL};
                unsigned short l_1609 = 0xC4A1L;
                int i;
                for (g_129 = 7; (g_129 >= 30); ++g_129)
                {
                    short l_1538[2];
                    int l_1557 = 0x8D95F2F9L;
                    int *l_1564[4];
                    unsigned l_1565 = 0x6D705FDAL;
                    unsigned char l_1568 = 0xC4L;
                    unsigned short l_1574 = 65535UL;
                    int i;
                    for (i = 0; i < 2; i++)
                        l_1538[i] = 0xF755L;
                    for (i = 0; i < 4; i++)
                        l_1564[i] = (void*)0;
                    (*g_1339) = l_1538[0];
                    for (g_540 = (-11); (g_540 != (-11)); g_540 = safe_add_func_int8_t_s_s(g_540, 7))
                    {
                        unsigned short l_1545 = 65535UL;
                        short *l_1546 = &g_37;
                        unsigned short *l_1555[8][1][7] = {{{&l_1545, &l_1545, &g_620, &g_620, &g_155, &g_620, &g_620}}, {{&l_1545, &l_1545, &g_620, &g_620, &g_155, &g_620, &g_620}}, {{&l_1545, &l_1545, &g_620, &g_620, &g_155, &g_620, &g_620}}, {{&l_1545, &l_1545, &g_620, &g_620, &g_155, &g_620, &g_620}}, {{&l_1545, &l_1545, &g_620, &g_620, &g_155, &g_620, &g_620}}, {{&l_1545, &l_1545, &g_620, &g_620, &g_155, &g_620, &g_620}}, {{&l_1545, &l_1545, &g_620, &g_620, &g_155, &g_620, &g_620}}, {{&l_1545, &l_1545, &g_620, &g_620, &g_155, &g_620, &g_620}}};
                        int l_1556 = 0xB8D66846L;
                        int i, j, k;
                        (*g_1338) = &l_1516;

                        ;
                        (**g_1338) = (safe_mod_func_int16_t_s_s(((*l_1546) = (safe_rshift_func_int8_t_s_s(l_1545, 2))), (safe_unary_minus_func_int32_t_s(((safe_lshift_func_int8_t_s_u((l_1550 == ((safe_mod_func_int8_t_s_s(((l_1553 != &l_1516) == ((!(safe_unary_minus_func_uint16_t_u((*l_1533)))) <= (l_1556 = l_1545))), (((*l_1533) > (*l_1533)) , l_1545))) < 0x45L)), (*l_1533))) || l_1556)))));
                    }
                    if (((*g_1339) ^= (((((***g_1403) == ((*l_1533) |= l_1508)) >= l_1559) <= l_1538[0]) == l_1560)))
                    {
                        short l_1562 = 0xD6A5L;
                        l_1562 = ((*g_1339) = (((4294967295UL == l_1557) || (0x319CC911L >= l_1561)) == (***g_1403)));
                        if (g_229)
                            goto lbl_1563;
                    }
                    else
                    {
                        unsigned short l_1572 = 65535UL;
                        char *l_1579 = &g_131;
                        int l_1581 = 0L;
                        char *l_1583 = &g_748;
                        l_1564[0] = &l_1557;


                        (*l_1533) = ((l_1565 == ((*l_1583) &= func_16((safe_rshift_func_int8_t_s_s((0xB0L > (l_1581 = (l_1568 ^ func_16((safe_add_func_int8_t_s_s(1L, ((*l_1579) = ((l_1571[2] ^ (*g_72)) && (((((((((*l_1344) = (g_1573 &= ((***g_1403) > l_1572))) > (((*g_1339) >= l_1574) , l_1572)) != l_1575) >= 0x263AL) , l_1576[8][0]) , l_1577) , (void*)0) != l_1578[4]))))), l_1580, (**g_998), l_1572)))), 5)), l_1582[2], (**g_998), l_1572))) , l_1584);

                        ;
                    }


                }
                if ((*l_1533))
                    continue;
                if ((~g_1585))
                {
                    int l_1586 = (-3L);
                    char *l_1591 = (void*)0;
                    char *l_1592 = &g_1573;
                    short *l_1593 = &g_1483;
                    (*g_1339) = (((((*l_1533) && l_1586) & (((l_1588 == l_1586) <= ((*l_1593) ^= (((((((((*l_1592) ^= (safe_lshift_func_uint8_t_u_u(l_1586, (&g_1384 != (void*)0)))) | l_1586) && (*g_72)) ^ 0x91L) , (-1L)) >= 0xCF016AF4L) != g_2) && g_527))) || l_1586)) || l_1594[1]) | (*g_72));
                    for (g_155 = 0; (g_155 < 16); g_155 = safe_add_func_int32_t_s_s(g_155, 5))
                    {
                        int *l_1597 = &l_1586;
                        l_1597 = &l_1586;
                    }
                }
                else
                {
                    short l_1603 = 0xF806L;
                    unsigned l_1605 = 7UL;
                    char *****l_1615 = (void*)0;
                    char *****l_1616 = (void*)0;
                    char ****l_1619[7][9][3] = {{{&g_983[0][6][1], &g_983[3][0][1], &g_983[3][0][3]}, {&g_983[0][6][1], &g_983[3][0][1], &g_983[3][0][3]}, {&g_983[0][6][1], &g_983[3][0][1], &g_983[3][0][3]}, {&g_983[0][6][1], &g_983[3][0][1], &g_983[3][0][3]}, {&g_983[0][6][1], &g_983[3][0][1], &g_983[3][0][3]}, {&g_983[0][6][1], &g_983[3][0][1], &g_983[3][0][3]}, {&g_983[0][6][1], &g_983[3][0][1], &g_983[3][0][3]}, {&g_983[0][6][1], &g_983[3][0][1], &g_983[3][0][3]}, {&g_983[0][6][1], &g_983[3][0][1], &g_983[3][0][3]}}, {{&g_983[0][6][1], &g_983[3][0][1], &g_983[3][0][3]}, {&g_983[0][6][1], &g_983[3][0][1], &g_983[3][0][3]}, {&g_983[0][6][1], &g_983[3][0][1], &g_983[3][0][3]}, {&g_983[0][6][1], &g_983[3][0][1], &g_983[3][0][3]}, {&g_983[0][6][1], &g_983[3][0][1], &g_983[3][0][3]}, {&g_983[0][6][1], &g_983[3][0][1], &g_983[3][0][3]}, {&g_983[0][6][1], &g_983[3][0][1], &g_983[3][0][3]}, {&g_983[0][6][1], &g_983[3][0][1], &g_983[3][0][3]}, {&g_983[0][6][1], &g_983[3][0][1], &g_983[3][0][3]}}, {{&g_983[0][6][1], &g_983[3][0][1], &g_983[3][0][3]}, {&g_983[0][6][1], &g_983[3][0][1], &g_983[3][0][3]}, {&g_983[0][6][1], &g_983[3][0][1], &g_983[3][0][3]}, {&g_983[0][6][1], &g_983[3][0][1], &g_983[3][0][3]}, {&g_983[0][6][1], &g_983[3][0][1], &g_983[3][0][3]}, {&g_983[0][6][1], &g_983[3][0][1], &g_983[3][0][3]}, {&g_983[0][6][1], &g_983[3][0][1], &g_983[3][0][3]}, {&g_983[0][6][1], &g_983[3][0][1], &g_983[3][0][3]}, {&g_983[0][6][1], &g_983[3][0][1], &g_983[3][0][3]}}, {{&g_983[0][6][1], &g_983[3][0][1], &g_983[3][0][3]}, {&g_983[0][6][1], &g_983[3][0][1], &g_983[3][0][3]}, {&g_983[0][6][1], &g_983[3][0][1], &g_983[3][0][3]}, {&g_983[0][6][1], &g_983[3][0][1], &g_983[3][0][3]}, {&g_983[0][6][1], &g_983[3][0][1], &g_983[3][0][3]}, {&g_983[0][6][1], &g_983[3][0][1], &g_983[3][0][3]}, {&g_983[0][6][1], &g_983[3][0][1], &g_983[3][0][3]}, {&g_983[0][6][1], &g_983[3][0][1], &g_983[3][0][3]}, {&g_983[0][6][1], &g_983[3][0][1], &g_983[3][0][3]}}, {{&g_983[0][6][1], &g_983[3][0][1], &g_983[3][0][3]}, {&g_983[0][6][1], &g_983[3][0][1], &g_983[3][0][3]}, {&g_983[0][6][1], &g_983[3][0][1], &g_983[3][0][3]}, {&g_983[0][6][1], &g_983[3][0][1], &g_983[3][0][3]}, {&g_983[0][6][1], &g_983[3][0][1], &g_983[3][0][3]}, {&g_983[0][6][1], &g_983[3][0][1], &g_983[3][0][3]}, {&g_983[0][6][1], &g_983[3][0][1], &g_983[3][0][3]}, {&g_983[0][6][1], &g_983[3][0][1], &g_983[3][0][3]}, {&g_983[0][6][1], &g_983[3][0][1], &g_983[3][0][3]}}, {{&g_983[0][6][1], &g_983[3][0][1], &g_983[3][0][3]}, {&g_983[0][6][1], &g_983[3][0][1], &g_983[3][0][3]}, {&g_983[0][6][1], &g_983[3][0][1], &g_983[3][0][3]}, {&g_983[0][6][1], &g_983[3][0][1], &g_983[3][0][3]}, {&g_983[0][6][1], &g_983[3][0][1], &g_983[3][0][3]}, {&g_983[0][6][1], &g_983[3][0][1], &g_983[3][0][3]}, {&g_983[0][6][1], &g_983[3][0][1], &g_983[3][0][3]}, {&g_983[0][6][1], &g_983[3][0][1], &g_983[3][0][3]}, {&g_983[0][6][1], &g_983[3][0][1], &g_983[3][0][3]}}, {{&g_983[0][6][1], &g_983[3][0][1], &g_983[3][0][3]}, {&g_983[0][6][1], &g_983[3][0][1], &g_983[3][0][3]}, {&g_983[0][6][1], &g_983[3][0][1], &g_983[3][0][3]}, {&g_983[0][6][1], &g_983[3][0][1], &g_983[3][0][3]}, {&g_983[0][6][1], &g_983[3][0][1], &g_983[3][0][3]}, {&g_983[0][6][1], &g_983[3][0][1], &g_983[3][0][3]}, {&g_983[0][6][1], &g_983[3][0][1], &g_983[3][0][3]}, {&g_983[0][6][1], &g_983[3][0][1], &g_983[3][0][3]}, {&g_983[0][6][1], &g_983[3][0][1], &g_983[3][0][3]}}};
                    char *****l_1618[9][2] = {{&l_1510, &l_1510}, {&l_1510, &l_1510}, {&l_1510, &l_1510}, {&l_1510, &l_1510}, {&l_1510, &l_1510}, {&l_1510, &l_1510}, {&l_1510, &l_1510}, {&l_1510, &l_1510}, {&l_1510, &l_1510}};
                    int i, j, k;
                    for (g_1483 = (-21); (g_1483 >= 2); g_1483++)
                    {
                        unsigned l_1600[3];
                        unsigned char *l_1604[2][4][1];
                        char *l_1606 = &g_748;
                        int i, j, k;
                        for (i = 0; i < 3; i++)
                            l_1600[i] = 1UL;
                        for (i = 0; i < 2; i++)
                        {
                            for (j = 0; j < 4; j++)
                            {
                                for (k = 0; k < 1; k++)
                                    l_1604[i][j][k] = &g_527;
                            }
                        }
                        l_1611 = ((**l_1336) = func_38(l_1558));

                        ;
                        ;
                        if ((*g_1339))
                            break;
                        if (l_1588)
                            goto lbl_1612;
                    }
                    if ((safe_add_func_int32_t_s_s(((g_1617 = l_1510) == (g_1620 = &g_983[4][7][1])), (safe_rshift_func_int8_t_s_u(0xD8L, (l_1605 ^ (*l_1533)))))))
                    {
                        char l_1623[3];
                        int i;
                        for (i = 0; i < 3; i++)
                            l_1623[i] = (-5L);
                        return l_1623[2];


                    }
                    else
                    {
                        return (*g_856);


                    }
                }
            }
        }



        ;
        ;
        return (**g_855);


    }
    else
    {
        return (*g_856);
    }
}







static short func_4(unsigned char p_5, int p_6)
{
    unsigned l_1348 = 0x8201E1A5L;
    int *l_1349 = &g_1340;
    unsigned **l_1355 = &g_72;
    unsigned ***l_1354 = &l_1355;
    unsigned char l_1356 = 0x85L;
    char *l_1357 = (void*)0;
    char *l_1358 = (void*)0;
    char *l_1359 = &g_131;
    int l_1360 = 0x4F80265EL;
    short **l_1363 = (void*)0;
    unsigned char **l_1382 = &g_596;
    unsigned *****l_1389 = &g_317;
    unsigned ******l_1388 = &l_1389;
    unsigned *******l_1387 = &l_1388;
    short l_1442[5] = {0L, 9L, 0L, 9L, 0L};
    unsigned **l_1444 = &g_72;
    char l_1445 = 0xECL;
    int i;
    (*g_91) = l_1349;

    ;
    l_1360 = ((*l_1349) = (safe_rshift_func_uint8_t_u_s(255UL, ((*l_1359) = (safe_rshift_func_uint16_t_u_s((((p_5 , l_1354) == &l_1355) < p_5), ((*l_1349) | ((l_1356 >= ((*g_72) & (*l_1349))) , p_6))))))));
    (*g_91) = &l_1360;

    ;
    for (g_900 = 0; (g_900 == (-13)); g_900 = safe_sub_func_int32_t_s_s(g_900, 3))
    {
        int *l_1366 = &g_1340;
        unsigned char *l_1377 = &l_1356;
        unsigned char *l_1378[7] = {&g_1345, &g_1345, &g_59[2], &g_1345, &g_1345, &g_59[2], &g_1345};
        unsigned *l_1379 = (void*)0;
        unsigned *l_1380[6];
        int l_1381[5][10] = {{0L, 9L, 0L, 0x32D56CFBL, 1L, (-1L), 0L, 0L, (-1L), 1L}, {0L, 9L, 0L, 0x32D56CFBL, 1L, (-1L), 0L, 0L, (-1L), 1L}, {0L, 9L, 0L, 0x32D56CFBL, 1L, (-1L), 0L, 0L, (-1L), 1L}, {0L, 9L, 0L, 0x32D56CFBL, 1L, (-1L), 0L, 0L, (-1L), 1L}, {0L, 9L, 0L, 0x32D56CFBL, 1L, (-1L), 0L, 0L, (-1L), 1L}};
        unsigned ********l_1390[4][6][6] = {{{(void*)0, &g_895, &g_895, &g_895, &l_1387, &g_895}, {(void*)0, &g_895, &g_895, &g_895, &l_1387, &g_895}, {(void*)0, &g_895, &g_895, &g_895, &l_1387, &g_895}, {(void*)0, &g_895, &g_895, &g_895, &l_1387, &g_895}, {(void*)0, &g_895, &g_895, &g_895, &l_1387, &g_895}, {(void*)0, &g_895, &g_895, &g_895, &l_1387, &g_895}}, {{(void*)0, &g_895, &g_895, &g_895, &l_1387, &g_895}, {(void*)0, &g_895, &g_895, &g_895, &l_1387, &g_895}, {(void*)0, &g_895, &g_895, &g_895, &l_1387, &g_895}, {(void*)0, &g_895, &g_895, &g_895, &l_1387, &g_895}, {(void*)0, &g_895, &g_895, &g_895, &l_1387, &g_895}, {(void*)0, &g_895, &g_895, &g_895, &l_1387, &g_895}}, {{(void*)0, &g_895, &g_895, &g_895, &l_1387, &g_895}, {(void*)0, &g_895, &g_895, &g_895, &l_1387, &g_895}, {(void*)0, &g_895, &g_895, &g_895, &l_1387, &g_895}, {(void*)0, &g_895, &g_895, &g_895, &l_1387, &g_895}, {(void*)0, &g_895, &g_895, &g_895, &l_1387, &g_895}, {(void*)0, &g_895, &g_895, &g_895, &l_1387, &g_895}}, {{(void*)0, &g_895, &g_895, &g_895, &l_1387, &g_895}, {(void*)0, &g_895, &g_895, &g_895, &l_1387, &g_895}, {(void*)0, &g_895, &g_895, &g_895, &l_1387, &g_895}, {(void*)0, &g_895, &g_895, &g_895, &l_1387, &g_895}, {(void*)0, &g_895, &g_895, &g_895, &l_1387, &g_895}, {(void*)0, &g_895, &g_895, &g_895, &l_1387, &g_895}}};
        int *l_1393[1];
        unsigned l_1415 = 0UL;
        int l_1425 = 0L;
        int *l_1449[10] = {&g_15[0][2][0], &g_15[0][2][0], &g_230[2][4][2], &g_15[0][2][0], &g_15[0][2][0], &g_230[2][4][2], &g_15[0][2][0], &g_15[0][2][0], &g_230[2][4][2], &g_15[0][2][0]};
        short *l_1454 = &l_1442[3];
        unsigned short *l_1455[4] = {(void*)0, &g_620, (void*)0, &g_620};
        int i, j, k;
        for (i = 0; i < 6; i++)
            l_1380[i] = (void*)0;
        for (i = 0; i < 1; i++)
            l_1393[i] = &g_15[0][2][0];
        (*l_1366) &= p_6;
        if ((*l_1349))
            break;
    }
    return p_5;


}







static unsigned char func_9(char p_10)
{
    int *l_13 = (void*)0;
    int *l_14 = &g_15[0][2][0];
    unsigned short l_1037 = 0x22BDL;
    unsigned *******l_1067 = (void*)0;
    unsigned char l_1088[5] = {0x34L, 0xFCL, 0x34L, 0xFCL, 0x34L};
    unsigned l_1125 = 4294967295UL;
    unsigned char l_1153 = 0UL;
    int **l_1162 = &g_856;
    unsigned short l_1182[5][9][5] = {{{0x19EBL, 0x19EBL, 0x8947L, 0x8724L, 0x7276L}, {0x19EBL, 0x19EBL, 0x8947L, 0x8724L, 0x7276L}, {0x19EBL, 0x19EBL, 0x8947L, 0x8724L, 0x7276L}, {0x19EBL, 0x19EBL, 0x8947L, 0x8724L, 0x7276L}, {0x19EBL, 0x19EBL, 0x8947L, 0x8724L, 0x7276L}, {0x19EBL, 0x19EBL, 0x8947L, 0x8724L, 0x7276L}, {0x19EBL, 0x19EBL, 0x8947L, 0x8724L, 0x7276L}, {0x19EBL, 0x19EBL, 0x8947L, 0x8724L, 0x7276L}, {0x19EBL, 0x19EBL, 0x8947L, 0x8724L, 0x7276L}}, {{0x19EBL, 0x19EBL, 0x8947L, 0x8724L, 0x7276L}, {0x19EBL, 0x19EBL, 0x8947L, 0x8724L, 0x7276L}, {0x19EBL, 0x19EBL, 0x8947L, 0x8724L, 0x7276L}, {0x19EBL, 0x19EBL, 0x8947L, 0x8724L, 0x7276L}, {0x19EBL, 0x19EBL, 0x8947L, 0x8724L, 0x7276L}, {0x19EBL, 0x19EBL, 0x8947L, 0x8724L, 0x7276L}, {0x19EBL, 0x19EBL, 0x8947L, 0x8724L, 0x7276L}, {0x19EBL, 0x19EBL, 0x8947L, 0x8724L, 0x7276L}, {0x19EBL, 0x19EBL, 0x8947L, 0x8724L, 0x7276L}}, {{0x19EBL, 0x19EBL, 0x8947L, 0x8724L, 0x7276L}, {0x19EBL, 0x19EBL, 0x8947L, 0x8724L, 0x7276L}, {0x19EBL, 0x19EBL, 0x8947L, 0x8724L, 0x7276L}, {0x19EBL, 0x19EBL, 0x8947L, 0x8724L, 0x7276L}, {0x19EBL, 0x19EBL, 0x8947L, 0x8724L, 0x7276L}, {0x19EBL, 0x19EBL, 0x8947L, 0x8724L, 0x7276L}, {0x19EBL, 0x19EBL, 0x8947L, 0x8724L, 0x7276L}, {0x19EBL, 0x19EBL, 0x8947L, 0x8724L, 0x7276L}, {0x19EBL, 0x19EBL, 0x8947L, 0x8724L, 0x7276L}}, {{0x19EBL, 0x19EBL, 0x8947L, 0x8724L, 0x7276L}, {0x19EBL, 0x19EBL, 0x8947L, 0x8724L, 0x7276L}, {0x19EBL, 0x19EBL, 0x8947L, 0x8724L, 0x7276L}, {0x19EBL, 0x19EBL, 0x8947L, 0x8724L, 0x7276L}, {0x19EBL, 0x19EBL, 0x8947L, 0x8724L, 0x7276L}, {0x19EBL, 0x19EBL, 0x8947L, 0x8724L, 0x7276L}, {0x19EBL, 0x19EBL, 0x8947L, 0x8724L, 0x7276L}, {0x19EBL, 0x19EBL, 0x8947L, 0x8724L, 0x7276L}, {0x19EBL, 0x19EBL, 0x8947L, 0x8724L, 0x7276L}}, {{0x19EBL, 0x19EBL, 0x8947L, 0x8724L, 0x7276L}, {0x19EBL, 0x19EBL, 0x8947L, 0x8724L, 0x7276L}, {0x19EBL, 0x19EBL, 0x8947L, 0x8724L, 0x7276L}, {0x19EBL, 0x19EBL, 0x8947L, 0x8724L, 0x7276L}, {0x19EBL, 0x19EBL, 0x8947L, 0x8724L, 0x7276L}, {0x19EBL, 0x19EBL, 0x8947L, 0x8724L, 0x7276L}, {0x19EBL, 0x19EBL, 0x8947L, 0x8724L, 0x7276L}, {0x19EBL, 0x19EBL, 0x8947L, 0x8724L, 0x7276L}, {0x19EBL, 0x19EBL, 0x8947L, 0x8724L, 0x7276L}}};
    unsigned l_1211[3][5][4] = {{{4294967293UL, 0xF300889CL, 1UL, 1UL}, {4294967293UL, 0xF300889CL, 1UL, 1UL}, {4294967293UL, 0xF300889CL, 1UL, 1UL}, {4294967293UL, 0xF300889CL, 1UL, 1UL}, {4294967293UL, 0xF300889CL, 1UL, 1UL}}, {{4294967293UL, 0xF300889CL, 1UL, 1UL}, {4294967293UL, 0xF300889CL, 1UL, 1UL}, {4294967293UL, 0xF300889CL, 1UL, 1UL}, {4294967293UL, 0xF300889CL, 1UL, 1UL}, {4294967293UL, 0xF300889CL, 1UL, 1UL}}, {{4294967293UL, 0xF300889CL, 1UL, 1UL}, {4294967293UL, 0xF300889CL, 1UL, 1UL}, {4294967293UL, 0xF300889CL, 1UL, 1UL}, {4294967293UL, 0xF300889CL, 1UL, 1UL}, {4294967293UL, 0xF300889CL, 1UL, 1UL}}};
    unsigned l_1213 = 0UL;
    int l_1249 = 0x3BC0DBC3L;
    int ****l_1268 = &g_280[5][5];
    unsigned **l_1270 = (void*)0;
    unsigned char l_1274 = 0x52L;
    int i, j, k;
    if (((*l_14) = (safe_lshift_func_uint8_t_u_u(0x0DL, 1))))
    {
        int l_28[3];
        short *l_35 = (void*)0;
        short *l_36 = &g_37;
        unsigned short l_1042 = 65535UL;
        unsigned char *l_1054 = &g_527;
        unsigned short *l_1058 = &l_1042;
        unsigned short **l_1057 = &l_1058;
        int *l_1069 = &g_15[0][2][0];
        int l_1075 = 0xBF5A1ABDL;
        unsigned **l_1092 = (void*)0;
        unsigned ***l_1091[1][3];
        int l_1107 = 0xAEBE8B80L;
        int **l_1164 = &g_856;
        int l_1181[4] = {0x6A018524L, (-3L), 0x6A018524L, (-3L)};
        unsigned l_1285 = 4294967290UL;
        int *l_1286 = (void*)0;
        int i, j;
        for (i = 0; i < 3; i++)
            l_28[i] = 0x72FA5D87L;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 3; j++)
                l_1091[i][j] = &l_1092;
        }
        if (((g_2 , (0xA9L > ((-7L) >= (func_16((0x5E4DL & (func_23(l_28[2], func_29((safe_unary_minus_func_int8_t_s(((safe_mod_func_int16_t_s_s(((*l_36) = l_28[2]), p_10)) == 0UL))), func_38(l_14)), p_10, l_14) >= 2UL)), p_10, l_28[1], p_10) <= g_2)))) <= l_1037))
        {
            int l_1043 = 8L;
            unsigned short *l_1050[9];
            int *l_1051 = &g_81;
            unsigned short ***l_1059 = &l_1057;
            unsigned *l_1066 = &g_229;
            int i;
            for (i = 0; i < 9; i++)
                l_1050[i] = &g_155;
            (*l_1051) = ((safe_add_func_uint16_t_u_u((safe_mod_func_int32_t_s_s(((*l_14) = l_1042), (l_1043 || (g_620 = g_57)))), l_1042)) == (safe_rshift_func_uint16_t_u_u((g_155 = (p_10 , ((((safe_add_func_int16_t_s_s(((*l_36) = 1L), ((g_342 = ((p_10 > 4294967295UL) > ((safe_rshift_func_uint16_t_u_u(p_10, 1)) && p_10))) | l_28[1]))) & p_10) , p_10) ^ p_10))), 13)));
            (*g_91) = ((safe_lshift_func_uint16_t_u_s((((p_10 , l_1054) != l_1054) , 1UL), ((((*l_1066) |= ((safe_rshift_func_int16_t_s_s((*l_1051), (((*l_1059) = l_1057) == (g_1060[1][0][1] = g_1060[4][0][1])))) > (((*g_72) = (*l_1051)) & (safe_sub_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u((*l_1051), p_10)), 0xF9L))))) != 0L) & g_59[2]))) , (*g_91));
        }
        else
        {
            int *l_1068 = (void*)0;
            unsigned l_1109 = 6UL;
            unsigned short **l_1124 = (void*)0;
            unsigned char **l_1127 = &g_596;
            unsigned char l_1145[6];
            char ***l_1224[7];
            short l_1248 = (-3L);
            unsigned ***l_1271 = &l_1270;
            unsigned short l_1283 = 1UL;
            int *l_1284 = (void*)0;
            int i;
            for (i = 0; i < 6; i++)
                l_1145[i] = 0x0EL;
            for (i = 0; i < 7; i++)
                l_1224[i] = &g_841;
            if ((l_1067 == (void*)0))
            {
                short l_1070 = 0x0189L;
                int **l_1071[10];
                int *l_1072 = &g_230[2][4][2];
                unsigned l_1110 = 2UL;
                int l_1126[3];
                int i;
                for (i = 0; i < 10; i++)
                    l_1071[i] = (void*)0;
                for (i = 0; i < 3; i++)
                    l_1126[i] = 1L;
                (*g_91) = (*g_91);
                l_1075 &= (p_10 == ((safe_rshift_func_uint16_t_u_u((*l_1069), 2)) , p_10));
                if (((safe_mod_func_uint16_t_u_u(p_10, 65535UL)) != ((p_10 , ((safe_lshift_func_uint8_t_u_s((g_898 || ((safe_mod_func_int8_t_s_s(p_10, (*l_1069))) , p_10)), 0)) != (safe_mod_func_uint16_t_u_u((safe_mod_func_int32_t_s_s(((safe_mod_func_uint16_t_u_u(l_1088[3], (*l_14))) > 0x10L), p_10)), 3UL)))) , p_10)))
                {
                    char l_1106 = 0L;
                    int *l_1108[8] = {&g_820, &l_1107, &g_820, &l_1107, &g_820, &l_1107, &g_820, &l_1107};
                    int i;
                    for (g_898 = 0; (g_898 <= 2); g_898 += 1)
                    {
                        unsigned ***l_1093 = (void*)0;
                        int l_1098[6] = {0x38F5457FL, 0x38F5457FL, 9L, 0x38F5457FL, 0x38F5457FL, 9L};
                        char *l_1105 = &g_131;
                        int l_1111 = 0x412FDD62L;
                        int i;
                        (*l_1069) ^= (safe_rshift_func_uint8_t_u_s((l_1091[0][0] == l_1093), ((safe_sub_func_uint16_t_u_u(((safe_lshift_func_int8_t_s_u(l_1098[3], 5)) >= p_10), p_10)) , (*l_1072))));
                        if (p_10)
                            break;
                    }
                    if ((g_1113 || ((func_16(((p_10 == p_10) ^ g_748), (*l_14), p_10, p_10) , l_1127) != (void*)0)))
                    {
                        return p_10;
                    }
                    else
                    {
                        (*l_1072) ^= 4L;
                    }
                }
                else
                {
                    unsigned l_1128 = 0UL;
                    unsigned short l_1154 = 65535UL;
                    int l_1155 = (-1L);
                    l_1128 &= (*l_14);
                    for (g_37 = 1; (g_37 <= 7); g_37 += 1)
                    {
                        return p_10;
                    }
                    for (g_107 = 0; (g_107 <= 2); g_107 += 1)
                    {
                        unsigned l_1133 = 0xB3365E2AL;
                        int l_1146 = 6L;
                        char *l_1147 = &g_131;
                        char *l_1148 = (void*)0;
                        char *l_1149 = &g_748;
                        int *l_1150 = (void*)0;
                        (*l_1069) = p_10;
                        l_1155 &= ((safe_rshift_func_uint8_t_u_u(((*l_1054) |= (+g_1112[8])), ((l_1154 |= p_10) ^ (*l_14)))) >= (7UL != (((((*l_1147) = (((65535UL & p_10) <= p_10) , l_1146)) | p_10) | (*l_1072)) <= p_10)));
                    }
                    for (g_229 = 0; (g_229 >= 46); g_229++)
                    {
                        if (p_10)
                            break;
                    }
                }
            }
            else
            {
                int l_1159[5][8] = {{6L, 0x7C39688FL, 0L, (-4L), 0x7DB7740AL, 0x7F58DBCDL, 0x6F485FF8L, 0xFE59F565L}, {6L, 0x7C39688FL, 0L, (-4L), 0x7DB7740AL, 0x7F58DBCDL, 0x6F485FF8L, 0xFE59F565L}, {6L, 0x7C39688FL, 0L, (-4L), 0x7DB7740AL, 0x7F58DBCDL, 0x6F485FF8L, 0xFE59F565L}, {6L, 0x7C39688FL, 0L, (-4L), 0x7DB7740AL, 0x7F58DBCDL, 0x6F485FF8L, 0xFE59F565L}, {6L, 0x7C39688FL, 0L, (-4L), 0x7DB7740AL, 0x7F58DBCDL, 0x6F485FF8L, 0xFE59F565L}};
                int **l_1166[6][1][9] = {{{&g_856, &g_856, (void*)0, &g_856, &g_856, &g_856, &g_856, &g_856, (void*)0}}, {{&g_856, &g_856, (void*)0, &g_856, &g_856, &g_856, &g_856, &g_856, (void*)0}}, {{&g_856, &g_856, (void*)0, &g_856, &g_856, &g_856, &g_856, &g_856, (void*)0}}, {{&g_856, &g_856, (void*)0, &g_856, &g_856, &g_856, &g_856, &g_856, (void*)0}}, {{&g_856, &g_856, (void*)0, &g_856, &g_856, &g_856, &g_856, &g_856, (void*)0}}, {{&g_856, &g_856, (void*)0, &g_856, &g_856, &g_856, &g_856, &g_856, (void*)0}}};
                unsigned char *l_1170 = &l_1088[1];
                int l_1193 = 0x50A906A6L;
                unsigned l_1212 = 0x33275E19L;
                unsigned **l_1223[8] = {&g_72, &g_72, &g_72, &g_72, &g_72, &g_72, &g_72, &g_72};
                short *l_1234[10][3] = {{(void*)0, (void*)0, &g_37}, {(void*)0, (void*)0, &g_37}, {(void*)0, (void*)0, &g_37}, {(void*)0, (void*)0, &g_37}, {(void*)0, (void*)0, &g_37}, {(void*)0, (void*)0, &g_37}, {(void*)0, (void*)0, &g_37}, {(void*)0, (void*)0, &g_37}, {(void*)0, (void*)0, &g_37}, {(void*)0, (void*)0, &g_37}};
                int i, j, k;
                if (p_10)
                {
                    short l_1171 = 1L;
                    unsigned l_1173[8];
                    int l_1174 = (-1L);
                    int i;
                    for (i = 0; i < 8; i++)
                        l_1173[i] = 0x5075154AL;
                    if (p_10)
                    {
                        int ***l_1163 = &g_855;
                        int ***l_1165[2][10][7] = {{{&l_1162, &l_1164, &l_1164, &l_1162, &l_1164, &l_1164, &l_1164}, {&l_1162, &l_1164, &l_1164, &l_1162, &l_1164, &l_1164, &l_1164}, {&l_1162, &l_1164, &l_1164, &l_1162, &l_1164, &l_1164, &l_1164}, {&l_1162, &l_1164, &l_1164, &l_1162, &l_1164, &l_1164, &l_1164}, {&l_1162, &l_1164, &l_1164, &l_1162, &l_1164, &l_1164, &l_1164}, {&l_1162, &l_1164, &l_1164, &l_1162, &l_1164, &l_1164, &l_1164}, {&l_1162, &l_1164, &l_1164, &l_1162, &l_1164, &l_1164, &l_1164}, {&l_1162, &l_1164, &l_1164, &l_1162, &l_1164, &l_1164, &l_1164}, {&l_1162, &l_1164, &l_1164, &l_1162, &l_1164, &l_1164, &l_1164}, {&l_1162, &l_1164, &l_1164, &l_1162, &l_1164, &l_1164, &l_1164}}, {{&l_1162, &l_1164, &l_1164, &l_1162, &l_1164, &l_1164, &l_1164}, {&l_1162, &l_1164, &l_1164, &l_1162, &l_1164, &l_1164, &l_1164}, {&l_1162, &l_1164, &l_1164, &l_1162, &l_1164, &l_1164, &l_1164}, {&l_1162, &l_1164, &l_1164, &l_1162, &l_1164, &l_1164, &l_1164}, {&l_1162, &l_1164, &l_1164, &l_1162, &l_1164, &l_1164, &l_1164}, {&l_1162, &l_1164, &l_1164, &l_1162, &l_1164, &l_1164, &l_1164}, {&l_1162, &l_1164, &l_1164, &l_1162, &l_1164, &l_1164, &l_1164}, {&l_1162, &l_1164, &l_1164, &l_1162, &l_1164, &l_1164, &l_1164}, {&l_1162, &l_1164, &l_1164, &l_1162, &l_1164, &l_1164, &l_1164}, {&l_1162, &l_1164, &l_1164, &l_1162, &l_1164, &l_1164, &l_1164}}};
                        int i, j, k;
                        (*l_1069) = (safe_unary_minus_func_int8_t_s(0x1EL));
                        (*l_1069) &= p_10;
                        (*l_1069) = (((*l_1163) = l_1162) == (l_1166[4][0][0] = l_1164));
                    }
                    else
                    {
                        unsigned l_1169[4][2][7] = {{{4294967295UL, 0x99A3E80FL, 1UL, 0x99A3E80FL, 4294967295UL, 0x3A04B090L, 4294967295UL}, {4294967295UL, 0x99A3E80FL, 1UL, 0x99A3E80FL, 4294967295UL, 0x3A04B090L, 4294967295UL}}, {{4294967295UL, 0x99A3E80FL, 1UL, 0x99A3E80FL, 4294967295UL, 0x3A04B090L, 4294967295UL}, {4294967295UL, 0x99A3E80FL, 1UL, 0x99A3E80FL, 4294967295UL, 0x3A04B090L, 4294967295UL}}, {{4294967295UL, 0x99A3E80FL, 1UL, 0x99A3E80FL, 4294967295UL, 0x3A04B090L, 4294967295UL}, {4294967295UL, 0x99A3E80FL, 1UL, 0x99A3E80FL, 4294967295UL, 0x3A04B090L, 4294967295UL}}, {{4294967295UL, 0x99A3E80FL, 1UL, 0x99A3E80FL, 4294967295UL, 0x3A04B090L, 4294967295UL}, {4294967295UL, 0x99A3E80FL, 1UL, 0x99A3E80FL, 4294967295UL, 0x3A04B090L, 4294967295UL}}};
                        int i, j, k;
                        (*l_14) |= (safe_sub_func_int16_t_s_s(p_10, (((*l_36) = l_1171) && l_1171)));
                    }
                    for (g_107 = 4; (g_107 >= 0); g_107 -= 1)
                    {
                        unsigned l_1172 = 4294967291UL;
                        if (p_10)
                            break;
                        (*l_1069) = ((((l_1159[1][5] , (void*)0) == &l_1159[1][5]) | p_10) & 0UL);
                    }
                    for (p_10 = 0; (p_10 < (-27)); --p_10)
                    {
                        unsigned short l_1179 = 0xC354L;
                        unsigned *******l_1180 = (void*)0;
                        int l_1183 = 0x1CFEFFF3L;
                        (*g_91) = func_62(&g_342, (((*l_1054) = (l_1182[4][4][3] = (((l_1179 ^= p_10) | (((l_1180 != ((func_16(l_1159[2][1], (p_10 , p_10), (**g_998), p_10) & p_10) , g_895)) , (-1L)) > l_1181[3])) || 0x5B741C38L))) , 0x5F47C333L), l_1173[3], g_898, l_1183);

                        ;
                        ;
                        return g_1112[8];
                    }
                    for (g_81 = 0; (g_81 != (-4)); g_81 = safe_sub_func_uint32_t_u_u(g_81, 7))
                    {
                        char *l_1190 = &g_748;
                        (*l_1069) = (((*l_1190) &= (safe_sub_func_uint32_t_u_u((l_1173[5] == (safe_rshift_func_int16_t_s_u(p_10, 7))), l_1159[1][3]))) == (((*l_1069) && (l_1193 = (func_16(((*g_999) ^= 4294967292UL), ((*l_1069) = ((*l_1058) = l_1159[0][5])), ((((safe_mod_func_uint16_t_u_u(0xD92AL, 9L)) | (p_10 , p_10)) < p_10) , g_527), p_10) ^ p_10))) != 0UL));
                    }
                }
                else
                {
                    int l_1206 = 0x03EC8F2AL;
                    int *l_1214 = &l_1075;
                    (*g_91) = &l_1159[3][2];

                    ;
                    if (g_342)
                        goto lbl_1215;
lbl_1215:
                    (*l_1214) &= (safe_rshift_func_int16_t_s_u((safe_add_func_int32_t_s_s((p_10 == ((*g_72) &= (l_1213 = (safe_add_func_int8_t_s_s((safe_sub_func_uint16_t_u_u(((((&l_1068 == (void*)0) , ((((l_1159[1][5] = (((((((((safe_lshift_func_int8_t_s_u(p_10, (((**g_855) , (((p_10 && ((((((250UL & l_1206) <= (safe_rshift_func_int8_t_s_u(((((*l_1069) = (safe_lshift_func_uint16_t_u_u((*l_1069), (*l_14)))) , l_1211[1][3][2]) ^ 4L), p_10))) , &g_1060[2][0][7]) == (void*)0) <= l_1206) , l_1159[0][7])) > l_1042) && 9UL)) == p_10))) | p_10) > g_59[2]) >= l_1206) < 0UL) , p_10) , l_1206) | l_1212) , l_1145[2])) & 1UL) && 65535UL) , p_10)) <= p_10) , p_10), p_10)), p_10))))), 0L)), 14));
                    for (l_1212 = 0; (l_1212 <= 56); l_1212 = safe_add_func_int16_t_s_s(l_1212, 9))
                    {
                        int *l_1218 = &g_81;
                        l_1159[3][3] &= (((-9L) && p_10) | (((*l_1069) != (safe_sub_func_int8_t_s_s((p_10 | (*l_1214)), g_2))) < (*l_1218)));
                    }
                    (*l_14) = ((*l_1214) ^= (safe_mod_func_int16_t_s_s((((!p_10) != (((func_16((1L & (((void*)0 != l_1223[7]) , g_748)), ((4L < (((*g_72) = 0x0F081593L) != 0L)) > ((*l_1069) <= p_10)), l_1212, (*l_1069)) , &g_841) != l_1224[5]) | g_820)) > g_748), 0x7911L)));
                }

                ;
                for (g_1144 = 0; (g_1144 <= 3); g_1144 += 1)
                {
                    short l_1233 = 0x48E9L;
                    unsigned char *l_1261 = &l_1088[0];
                    int l_1262 = (-5L);
                    int *l_1263 = &g_971;
                    for (l_1212 = 0; (l_1212 <= 3); l_1212 += 1)
                    {
                        int *l_1250 = (void*)0;
                        int i, j;
                        (*g_91) = (*g_91);
                        (*l_14) = ((safe_rshift_func_uint16_t_u_s(((((*l_14) , ((((safe_mod_func_int32_t_s_s(((((0x78L | (*l_1069)) & (p_10 < (safe_add_func_uint16_t_u_u(p_10, (*l_14))))) , l_1234[3][0]) != &l_1233), 0xD642130DL)) ^ l_1233) || l_1233) || l_1159[1][5])) && p_10) ^ p_10), p_10)) | (-10L));
                        (*l_14) = p_10;
                    }
                    (*l_1263) |= ((safe_add_func_int8_t_s_s(l_1233, (safe_mod_func_uint32_t_u_u(4294967295UL, ((safe_add_func_int16_t_s_s(((((p_10 ^ l_1212) > (safe_lshift_func_int8_t_s_s(((+(l_1262 = p_10)) & p_10), (*l_1069)))) <= (*l_14)) > (*l_14)), p_10)) , l_1262))))) , (-10L));
                    (*l_1069) &= (-1L);
                    for (l_1075 = 0; (l_1075 <= 3); l_1075 += 1)
                    {
                        int *l_1269 = (void*)0;
                        int i, j;
                        (***l_1268) = l_1269;

                        ;
                        (*l_1263) = 0L;
                    }
                }
            }


            (*l_1271) = l_1270;
            (*l_1069) |= (safe_lshift_func_uint8_t_u_s(l_1285, p_10));
        }


        ;
        (*l_14) = (((*l_36) = p_10) >= p_10);
        (*g_91) = l_1286;

        ;
    }
    else
    {
        int *l_1298 = &g_230[1][4][0];
        unsigned ***l_1302 = (void*)0;
        int l_1311 = 0xCC9018FCL;
        int *l_1312 = &l_1249;
        for (g_57 = (-8); (g_57 == 47); g_57 = safe_add_func_uint32_t_u_u(g_57, 9))
        {
            char l_1293[8][6][1] = {{{0x48L}, {0x48L}, {0x48L}, {0x48L}, {0x48L}, {0x48L}}, {{0x48L}, {0x48L}, {0x48L}, {0x48L}, {0x48L}, {0x48L}}, {{0x48L}, {0x48L}, {0x48L}, {0x48L}, {0x48L}, {0x48L}}, {{0x48L}, {0x48L}, {0x48L}, {0x48L}, {0x48L}, {0x48L}}, {{0x48L}, {0x48L}, {0x48L}, {0x48L}, {0x48L}, {0x48L}}, {{0x48L}, {0x48L}, {0x48L}, {0x48L}, {0x48L}, {0x48L}}, {{0x48L}, {0x48L}, {0x48L}, {0x48L}, {0x48L}, {0x48L}}, {{0x48L}, {0x48L}, {0x48L}, {0x48L}, {0x48L}, {0x48L}}};
            unsigned char *l_1310 = &l_1088[1];
            unsigned short *l_1332 = &l_1182[4][4][3];
            int *l_1333 = &g_15[0][2][0];
            int i, j, k;
            if ((&g_59[1] != (void*)0))
            {
                unsigned ***l_1303 = &g_998;
                unsigned *l_1324 = &l_1125;
                int l_1327 = 0x7EA4EA7EL;
                if (p_10)
                {
                    unsigned *l_1307 = &g_73;
                    int l_1308 = 1L;
                    char *l_1309 = &l_1293[7][0][0];
                    for (g_71 = 0; (g_71 <= 10); g_71 = safe_add_func_int32_t_s_s(g_71, 8))
                    {
                        int *l_1299 = &g_107;
                        unsigned *l_1300 = (void*)0;
                        unsigned *l_1301 = &g_129;
                        (***l_1268) = func_38((((((safe_add_func_int8_t_s_s(((l_1293[0][5][0] & (((((((*l_1301) |= ((safe_rshift_func_uint8_t_u_s((safe_mod_func_uint16_t_u_u((p_10 >= func_23(p_10, func_38(func_38(l_1298)), ((*l_1298) ^= p_10), (p_10 , l_1299))), p_10)), 1)) && p_10)) , 0UL) || p_10) != p_10) , l_1302) != l_1303)) || (-7L)), p_10)) , (*g_999)) , p_10) ^ 0xE917L) , (void*)0));
                        if (p_10)
                            continue;
                    }
                    for (g_37 = 22; (g_37 > (-18)); g_37 = safe_sub_func_uint16_t_u_u(g_37, 3))
                    {
                        char *l_1306 = (void*)0;
                        l_1311 ^= (((((p_10 ^ ((g_37 <= ((*l_1298) || (l_1306 != (l_1309 = (((p_10 != ((void*)0 != l_1307)) <= (l_1308 && l_1308)) , &p_10))))) < 0UL)) , l_1310) == &g_342) || 1L) <= l_1293[0][5][0]);
                        (*l_14) = ((l_1293[4][4][0] , func_38(&l_1308)) != l_1312);
                    }

                    ;
                    for (g_820 = (-18); (g_820 < (-24)); g_820 = safe_sub_func_uint8_t_u_u(g_820, 1))
                    {
                        short l_1315 = (-1L);
                        if (l_1315)
                            break;
                    }
                }
                else
                {
                    int l_1321 = 0L;
                    for (l_1153 = 0; (l_1153 == 13); l_1153++)
                    {
                        unsigned char l_1318 = 252UL;
                        unsigned *l_1325 = &g_226;
                        char *l_1326 = &g_748;
                        int l_1328 = (-1L);
                        unsigned short l_1329 = 0UL;
                        (*g_91) = &l_1311;

                        ;
                        l_1321 = (((0x7668013AL != (((func_16(l_1293[0][5][0], ((((l_1328 = ((***l_1303) = (func_16((((((l_1318 , (safe_sub_func_int8_t_s_s((((l_1293[3][2][0] ^ l_1321) , (0xA0C3347AL < ((*g_72) & 0L))) || (safe_rshift_func_int8_t_s_u(((*l_1326) = (l_1324 == l_1325)), 0))), l_1327))) , l_1321) | 0x13L) , l_1327) ^ 0L), p_10, (**g_998), l_1321) == p_10))) , 0x4CAE4299L) , p_10) ^ 4294967295UL), l_1329, l_1293[2][1][0]) >= 0x76L) < g_1112[0]) , (*l_1298))) || p_10) , p_10);

                        ;
                        (****l_1268) = (**g_91);
                        return l_1321;


                    }
                    return p_10;
                }
                (*l_1298) = ((void*)0 == &g_527);
                for (g_532 = 1; (g_532 <= 4); g_532 += 1)
                {
                    (*l_14) ^= (safe_rshift_func_uint8_t_u_u((l_1332 != (void*)0), 1));
                }
                l_1333 = (***l_1268);

                ;
            }
            else
            {
                for (l_1125 = 0; (l_1125 != 12); l_1125++)
                {
                    return p_10;
                }
            }

            ;
        }
    }

    ;
    return g_185;
}







static short func_16(unsigned p_17, unsigned short p_18, unsigned p_19, unsigned short p_20)
{
    unsigned short l_1027 = 8UL;
    unsigned char *l_1030 = (void*)0;
    unsigned char **l_1031 = &g_596;
    int l_1032[3];
    unsigned char *l_1033 = &g_342;
    int *l_1034 = (void*)0;
    int *l_1035 = &g_971;
    int *l_1036 = &g_230[2][4][2];
    int i;
    for (i = 0; i < 3; i++)
        l_1032[i] = 0x45463357L;
    for (g_971 = 0; g_971 < 4; g_971 += 1)
    {
        for (g_229 = 0; g_229 < 3; g_229 += 1)
        {
            for (g_107 = 0; g_107 < 3; g_107 += 1)
            {
                g_15[g_971][g_229][g_107] = 0L;
            }
        }
    }
    l_1027 |= (-1L);
    (*l_1036) |= ((*l_1035) ^= (((l_1027 ^ p_20) >= ((safe_add_func_int8_t_s_s((((l_1032[0] |= (p_19 >= (((*l_1031) = l_1030) == &g_527))) == ((*l_1033) |= p_20)) == 0x11L), (p_20 ^ l_1027))) | p_18)) && l_1032[0]));

    ;
    return p_18;
}







static short func_23(unsigned short p_24, int * p_25, char p_26, int * p_27)
{
    int l_1011 = 6L;
    int l_1014 = (-4L);
    char *l_1025 = &g_748;
    short *l_1026 = &g_185;
    (*p_25) = (safe_rshift_func_int8_t_s_s(((0xCFF1L & (((**g_998) = l_1011) , (((p_26 , (safe_lshift_func_int8_t_s_u(l_1014, 6))) | (l_1014 , ((*l_1026) = (l_1011 && (((safe_lshift_func_int8_t_s_u((p_26 , (safe_lshift_func_int16_t_s_u((safe_rshift_func_int16_t_s_u(l_1014, 2)), (safe_lshift_func_int8_t_s_u(((*l_1025) = (safe_add_func_uint8_t_u_u(l_1014, 0x40L))), 3))))), (*g_596))) , g_900) | g_15[0][2][0]))))) >= (*g_596)))) , p_24), l_1014));
    return p_24;
}







static int * func_29(unsigned char p_30, int * p_31)
{
    int l_40[8][10][3] = {{{0x0C201006L, 0xB2E0AD50L, 1L}, {0x0C201006L, 0xB2E0AD50L, 1L}, {0x0C201006L, 0xB2E0AD50L, 1L}, {0x0C201006L, 0xB2E0AD50L, 1L}, {0x0C201006L, 0xB2E0AD50L, 1L}, {0x0C201006L, 0xB2E0AD50L, 1L}, {0x0C201006L, 0xB2E0AD50L, 1L}, {0x0C201006L, 0xB2E0AD50L, 1L}, {0x0C201006L, 0xB2E0AD50L, 1L}, {0x0C201006L, 0xB2E0AD50L, 1L}}, {{0x0C201006L, 0xB2E0AD50L, 1L}, {0x0C201006L, 0xB2E0AD50L, 1L}, {0x0C201006L, 0xB2E0AD50L, 1L}, {0x0C201006L, 0xB2E0AD50L, 1L}, {0x0C201006L, 0xB2E0AD50L, 1L}, {0x0C201006L, 0xB2E0AD50L, 1L}, {0x0C201006L, 0xB2E0AD50L, 1L}, {0x0C201006L, 0xB2E0AD50L, 1L}, {0x0C201006L, 0xB2E0AD50L, 1L}, {0x0C201006L, 0xB2E0AD50L, 1L}}, {{0x0C201006L, 0xB2E0AD50L, 1L}, {0x0C201006L, 0xB2E0AD50L, 1L}, {0x0C201006L, 0xB2E0AD50L, 1L}, {0x0C201006L, 0xB2E0AD50L, 1L}, {0x0C201006L, 0xB2E0AD50L, 1L}, {0x0C201006L, 0xB2E0AD50L, 1L}, {0x0C201006L, 0xB2E0AD50L, 1L}, {0x0C201006L, 0xB2E0AD50L, 1L}, {0x0C201006L, 0xB2E0AD50L, 1L}, {0x0C201006L, 0xB2E0AD50L, 1L}}, {{0x0C201006L, 0xB2E0AD50L, 1L}, {0x0C201006L, 0xB2E0AD50L, 1L}, {0x0C201006L, 0xB2E0AD50L, 1L}, {0x0C201006L, 0xB2E0AD50L, 1L}, {0x0C201006L, 0xB2E0AD50L, 1L}, {0x0C201006L, 0xB2E0AD50L, 1L}, {0x0C201006L, 0xB2E0AD50L, 1L}, {0x0C201006L, 0xB2E0AD50L, 1L}, {0x0C201006L, 0xB2E0AD50L, 1L}, {0x0C201006L, 0xB2E0AD50L, 1L}}, {{0x0C201006L, 0xB2E0AD50L, 1L}, {0x0C201006L, 0xB2E0AD50L, 1L}, {0x0C201006L, 0xB2E0AD50L, 1L}, {0x0C201006L, 0xB2E0AD50L, 1L}, {0x0C201006L, 0xB2E0AD50L, 1L}, {0x0C201006L, 0xB2E0AD50L, 1L}, {0x0C201006L, 0xB2E0AD50L, 1L}, {0x0C201006L, 0xB2E0AD50L, 1L}, {0x0C201006L, 0xB2E0AD50L, 1L}, {0x0C201006L, 0xB2E0AD50L, 1L}}, {{0x0C201006L, 0xB2E0AD50L, 1L}, {0x0C201006L, 0xB2E0AD50L, 1L}, {0x0C201006L, 0xB2E0AD50L, 1L}, {0x0C201006L, 0xB2E0AD50L, 1L}, {0x0C201006L, 0xB2E0AD50L, 1L}, {0x0C201006L, 0xB2E0AD50L, 1L}, {0x0C201006L, 0xB2E0AD50L, 1L}, {0x0C201006L, 0xB2E0AD50L, 1L}, {0x0C201006L, 0xB2E0AD50L, 1L}, {0x0C201006L, 0xB2E0AD50L, 1L}}, {{0x0C201006L, 0xB2E0AD50L, 1L}, {0x0C201006L, 0xB2E0AD50L, 1L}, {0x0C201006L, 0xB2E0AD50L, 1L}, {0x0C201006L, 0xB2E0AD50L, 1L}, {0x0C201006L, 0xB2E0AD50L, 1L}, {0x0C201006L, 0xB2E0AD50L, 1L}, {0x0C201006L, 0xB2E0AD50L, 1L}, {0x0C201006L, 0xB2E0AD50L, 1L}, {0x0C201006L, 0xB2E0AD50L, 1L}, {0x0C201006L, 0xB2E0AD50L, 1L}}, {{0x0C201006L, 0xB2E0AD50L, 1L}, {0x0C201006L, 0xB2E0AD50L, 1L}, {0x0C201006L, 0xB2E0AD50L, 1L}, {0x0C201006L, 0xB2E0AD50L, 1L}, {0x0C201006L, 0xB2E0AD50L, 1L}, {0x0C201006L, 0xB2E0AD50L, 1L}, {0x0C201006L, 0xB2E0AD50L, 1L}, {0x0C201006L, 0xB2E0AD50L, 1L}, {0x0C201006L, 0xB2E0AD50L, 1L}, {0x0C201006L, 0xB2E0AD50L, 1L}}};
    short *l_54[1][8];
    short l_60 = 1L;
    int *l_1008 = &g_81;
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 8; j++)
            l_54[i][j] = &g_37;
    }
    (*p_31) = (0x91L <= l_40[3][4][0]);
    if ((*p_31))
    {
        p_31 = ((l_40[3][4][0] == g_2) , func_38(p_31));
    }
    else
    {
        unsigned short l_49 = 0x7762L;
        int l_1007 = 1L;
        for (g_37 = 0; (g_37 < 0); ++g_37)
        {
            unsigned char l_55 = 255UL;
            for (p_30 = 22; (p_30 != 24); p_30 = safe_add_func_uint8_t_u_u(p_30, 8))
            {
                unsigned char *l_56 = &g_57;
                unsigned char *l_58 = &g_59[2];
                int *l_61 = &l_40[3][4][0];
                short **l_565 = &l_54[0][5];
                (*g_91) = func_38(func_45(l_49, g_15[3][2][2], ((*l_565) = func_50(l_54[0][5], l_55, ((*l_61) &= (((*l_58) = ((*l_56) = 255UL)) , l_60))))));
            }
            l_1007 |= ((*g_855) != (void*)0);
        }

        ;
        (*p_31) = (*p_31);
        (*g_91) = p_31;

        ;
    }

    ;
    return l_1008;


}







static int * func_38(int * p_39)
{
    return p_39;


}







static int * func_45(int p_46, char p_47, short * p_48)
{
    unsigned short l_566 = 65535UL;
    int l_585[7];
    int *l_627[10] = {&g_15[0][0][2], (void*)0, &g_15[0][0][2], (void*)0, &g_15[0][0][2], (void*)0, &g_15[0][0][2], (void*)0, &g_15[0][0][2], (void*)0};
    unsigned l_710[1];
    int l_711 = (-1L);
    unsigned char l_717 = 0xA7L;
    unsigned l_735 = 1UL;
    unsigned **l_770 = &g_72;
    int *****l_801 = (void*)0;
    int *l_1006[1];
    int i;
    for (i = 0; i < 7; i++)
        l_585[i] = 0x80F8E6F6L;
    for (i = 0; i < 1; i++)
        l_710[i] = 4294967289UL;
    for (i = 0; i < 1; i++)
        l_1006[i] = &g_230[2][6][3];
    if (l_566)
    {
        int l_571 = (-10L);
        short l_586 = (-4L);
        int *l_591 = &l_585[5];
        unsigned char *l_655[8][6] = {{&g_57, (void*)0, &g_57, &g_59[2], (void*)0, &g_342}, {&g_57, (void*)0, &g_57, &g_59[2], (void*)0, &g_342}, {&g_57, (void*)0, &g_57, &g_59[2], (void*)0, &g_342}, {&g_57, (void*)0, &g_57, &g_59[2], (void*)0, &g_342}, {&g_57, (void*)0, &g_57, &g_59[2], (void*)0, &g_342}, {&g_57, (void*)0, &g_57, &g_59[2], (void*)0, &g_342}, {&g_57, (void*)0, &g_57, &g_59[2], (void*)0, &g_342}, {&g_57, (void*)0, &g_57, &g_59[2], (void*)0, &g_342}};
        short *l_656 = &l_586;
        short *l_657 = (void*)0;
        short *l_658[5];
        int *l_667 = (void*)0;
        int l_672 = 0x797CEF86L;
        short l_685 = 1L;
        unsigned l_716 = 0UL;
        unsigned l_765 = 0x470BCFD8L;
        int l_804 = (-1L);
        int i, j;
        for (i = 0; i < 5; i++)
            l_658[i] = &g_185;
        for (g_514 = 3; (g_514 >= 0); g_514 -= 1)
        {
            unsigned l_567 = 0xF646B11CL;
            unsigned **l_623 = (void*)0;
            int l_628 = 0L;
            for (g_107 = 3; (g_107 >= 0); g_107 -= 1)
            {
                unsigned short l_568 = 9UL;
                int *l_592 = &g_107;
                int l_611 = (-1L);
                int l_612 = 0L;
                unsigned short l_619[6];
                unsigned **l_621[10] = {(void*)0, &g_72, (void*)0, &g_72, (void*)0, &g_72, (void*)0, &g_72, (void*)0, &g_72};
                unsigned char l_625 = 0xEEL;
                int i;
                for (i = 0; i < 6; i++)
                    l_619[i] = 0x2E3EL;
                l_568 |= l_567;
                if ((safe_lshift_func_uint8_t_u_u(l_568, (65535UL < l_571))))
                {
                    int l_595[7];
                    unsigned *****l_604 = &g_317;
                    unsigned ******l_603[3][7][3] = {{{&l_604, &l_604, &l_604}, {&l_604, &l_604, &l_604}, {&l_604, &l_604, &l_604}, {&l_604, &l_604, &l_604}, {&l_604, &l_604, &l_604}, {&l_604, &l_604, &l_604}, {&l_604, &l_604, &l_604}}, {{&l_604, &l_604, &l_604}, {&l_604, &l_604, &l_604}, {&l_604, &l_604, &l_604}, {&l_604, &l_604, &l_604}, {&l_604, &l_604, &l_604}, {&l_604, &l_604, &l_604}, {&l_604, &l_604, &l_604}}, {{&l_604, &l_604, &l_604}, {&l_604, &l_604, &l_604}, {&l_604, &l_604, &l_604}, {&l_604, &l_604, &l_604}, {&l_604, &l_604, &l_604}, {&l_604, &l_604, &l_604}, {&l_604, &l_604, &l_604}}};
                    int *l_617 = &g_230[0][1][4];
                    int *l_618 = &l_595[3];
                    short *l_622 = &l_586;
                    int i, j, k;
                    for (i = 0; i < 7; i++)
                        l_595[i] = 0xF692B8BCL;
                    for (g_226 = 0; (g_226 <= 3); g_226 += 1)
                    {
                        unsigned char l_574 = 255UL;
                        unsigned short l_577[6][10][1] = {{{0UL}, {0UL}, {0UL}, {0UL}, {0UL}, {0UL}, {0UL}, {0UL}, {0UL}, {0UL}}, {{0UL}, {0UL}, {0UL}, {0UL}, {0UL}, {0UL}, {0UL}, {0UL}, {0UL}, {0UL}}, {{0UL}, {0UL}, {0UL}, {0UL}, {0UL}, {0UL}, {0UL}, {0UL}, {0UL}, {0UL}}, {{0UL}, {0UL}, {0UL}, {0UL}, {0UL}, {0UL}, {0UL}, {0UL}, {0UL}, {0UL}}, {{0UL}, {0UL}, {0UL}, {0UL}, {0UL}, {0UL}, {0UL}, {0UL}, {0UL}, {0UL}}, {{0UL}, {0UL}, {0UL}, {0UL}, {0UL}, {0UL}, {0UL}, {0UL}, {0UL}, {0UL}}};
                        int l_578[6][9][3] = {{{4L, (-1L), 0xB95CB760L}, {4L, (-1L), 0xB95CB760L}, {4L, (-1L), 0xB95CB760L}, {4L, (-1L), 0xB95CB760L}, {4L, (-1L), 0xB95CB760L}, {4L, (-1L), 0xB95CB760L}, {4L, (-1L), 0xB95CB760L}, {4L, (-1L), 0xB95CB760L}, {4L, (-1L), 0xB95CB760L}}, {{4L, (-1L), 0xB95CB760L}, {4L, (-1L), 0xB95CB760L}, {4L, (-1L), 0xB95CB760L}, {4L, (-1L), 0xB95CB760L}, {4L, (-1L), 0xB95CB760L}, {4L, (-1L), 0xB95CB760L}, {4L, (-1L), 0xB95CB760L}, {4L, (-1L), 0xB95CB760L}, {4L, (-1L), 0xB95CB760L}}, {{4L, (-1L), 0xB95CB760L}, {4L, (-1L), 0xB95CB760L}, {4L, (-1L), 0xB95CB760L}, {4L, (-1L), 0xB95CB760L}, {4L, (-1L), 0xB95CB760L}, {4L, (-1L), 0xB95CB760L}, {4L, (-1L), 0xB95CB760L}, {4L, (-1L), 0xB95CB760L}, {4L, (-1L), 0xB95CB760L}}, {{4L, (-1L), 0xB95CB760L}, {4L, (-1L), 0xB95CB760L}, {4L, (-1L), 0xB95CB760L}, {4L, (-1L), 0xB95CB760L}, {4L, (-1L), 0xB95CB760L}, {4L, (-1L), 0xB95CB760L}, {4L, (-1L), 0xB95CB760L}, {4L, (-1L), 0xB95CB760L}, {4L, (-1L), 0xB95CB760L}}, {{4L, (-1L), 0xB95CB760L}, {4L, (-1L), 0xB95CB760L}, {4L, (-1L), 0xB95CB760L}, {4L, (-1L), 0xB95CB760L}, {4L, (-1L), 0xB95CB760L}, {4L, (-1L), 0xB95CB760L}, {4L, (-1L), 0xB95CB760L}, {4L, (-1L), 0xB95CB760L}, {4L, (-1L), 0xB95CB760L}}, {{4L, (-1L), 0xB95CB760L}, {4L, (-1L), 0xB95CB760L}, {4L, (-1L), 0xB95CB760L}, {4L, (-1L), 0xB95CB760L}, {4L, (-1L), 0xB95CB760L}, {4L, (-1L), 0xB95CB760L}, {4L, (-1L), 0xB95CB760L}, {4L, (-1L), 0xB95CB760L}, {4L, (-1L), 0xB95CB760L}}};
                        int l_581 = (-6L);
                        int *l_584[5][3][8] = {{{&g_230[2][4][2], &g_230[2][4][2], &l_578[0][4][0], &l_571, &l_571, &l_571, &l_578[0][4][0], &g_230[2][4][2]}, {&g_230[2][4][2], &g_230[2][4][2], &l_578[0][4][0], &l_571, &l_571, &l_571, &l_578[0][4][0], &g_230[2][4][2]}, {&g_230[2][4][2], &g_230[2][4][2], &l_578[0][4][0], &l_571, &l_571, &l_571, &l_578[0][4][0], &g_230[2][4][2]}}, {{&g_230[2][4][2], &g_230[2][4][2], &l_578[0][4][0], &l_571, &l_571, &l_571, &l_578[0][4][0], &g_230[2][4][2]}, {&g_230[2][4][2], &g_230[2][4][2], &l_578[0][4][0], &l_571, &l_571, &l_571, &l_578[0][4][0], &g_230[2][4][2]}, {&g_230[2][4][2], &g_230[2][4][2], &l_578[0][4][0], &l_571, &l_571, &l_571, &l_578[0][4][0], &g_230[2][4][2]}}, {{&g_230[2][4][2], &g_230[2][4][2], &l_578[0][4][0], &l_571, &l_571, &l_571, &l_578[0][4][0], &g_230[2][4][2]}, {&g_230[2][4][2], &g_230[2][4][2], &l_578[0][4][0], &l_571, &l_571, &l_571, &l_578[0][4][0], &g_230[2][4][2]}, {&g_230[2][4][2], &g_230[2][4][2], &l_578[0][4][0], &l_571, &l_571, &l_571, &l_578[0][4][0], &g_230[2][4][2]}}, {{&g_230[2][4][2], &g_230[2][4][2], &l_578[0][4][0], &l_571, &l_571, &l_571, &l_578[0][4][0], &g_230[2][4][2]}, {&g_230[2][4][2], &g_230[2][4][2], &l_578[0][4][0], &l_571, &l_571, &l_571, &l_578[0][4][0], &g_230[2][4][2]}, {&g_230[2][4][2], &g_230[2][4][2], &l_578[0][4][0], &l_571, &l_571, &l_571, &l_578[0][4][0], &g_230[2][4][2]}}, {{&g_230[2][4][2], &g_230[2][4][2], &l_578[0][4][0], &l_571, &l_571, &l_571, &l_578[0][4][0], &g_230[2][4][2]}, {&g_230[2][4][2], &g_230[2][4][2], &l_578[0][4][0], &l_571, &l_571, &l_571, &l_578[0][4][0], &g_230[2][4][2]}, {&g_230[2][4][2], &g_230[2][4][2], &l_578[0][4][0], &l_571, &l_571, &l_571, &l_578[0][4][0], &g_230[2][4][2]}}};
                        int i, j, k;
                        l_581 = (l_571 ^= ((safe_lshift_func_uint8_t_u_s(l_574, 1)) && (safe_sub_func_uint16_t_u_u(((l_578[5][1][1] |= (l_577[4][4][0] , 0x19L)) >= 0UL), (safe_add_func_int16_t_s_s((g_15[0][2][0] < g_342), (!(((&p_48 == (void*)0) && (g_230[1][3][4] && (*p_48))) , 0UL))))))));
                        l_585[3] = (safe_rshift_func_uint16_t_u_s(p_46, 14));
                        if (l_586)
                            break;
                        (*g_91) = &l_571;

                        ;
                    }
                    if (l_571)
                    {
                        int **l_593 = (void*)0;
                        int **l_594 = &l_592;
                        int i;
                        (*l_591) = (((l_595[3] = ((g_59[g_107] = (safe_sub_func_uint32_t_u_u(l_586, (((safe_add_func_int8_t_s_s(((0x79L > p_46) , p_47), l_585[4])) || (l_591 == ((*l_594) = func_38(l_592)))) ^ g_540)))) && 0L)) , &g_59[2]) == g_596);
                        (*l_591) &= p_46;
                        (*l_591) = p_46;
                    }
                    else
                    {
                        unsigned *******l_605 = &l_603[0][5][2];
                        short *l_610[8][3][10] = {{{&g_37, &g_185, &g_37, &g_185, &g_37, &g_185, &g_37, &g_185, &g_37, &g_185}, {&g_37, &g_185, &g_37, &g_185, &g_37, &g_185, &g_37, &g_185, &g_37, &g_185}, {&g_37, &g_185, &g_37, &g_185, &g_37, &g_185, &g_37, &g_185, &g_37, &g_185}}, {{&g_37, &g_185, &g_37, &g_185, &g_37, &g_185, &g_37, &g_185, &g_37, &g_185}, {&g_37, &g_185, &g_37, &g_185, &g_37, &g_185, &g_37, &g_185, &g_37, &g_185}, {&g_37, &g_185, &g_37, &g_185, &g_37, &g_185, &g_37, &g_185, &g_37, &g_185}}, {{&g_37, &g_185, &g_37, &g_185, &g_37, &g_185, &g_37, &g_185, &g_37, &g_185}, {&g_37, &g_185, &g_37, &g_185, &g_37, &g_185, &g_37, &g_185, &g_37, &g_185}, {&g_37, &g_185, &g_37, &g_185, &g_37, &g_185, &g_37, &g_185, &g_37, &g_185}}, {{&g_37, &g_185, &g_37, &g_185, &g_37, &g_185, &g_37, &g_185, &g_37, &g_185}, {&g_37, &g_185, &g_37, &g_185, &g_37, &g_185, &g_37, &g_185, &g_37, &g_185}, {&g_37, &g_185, &g_37, &g_185, &g_37, &g_185, &g_37, &g_185, &g_37, &g_185}}, {{&g_37, &g_185, &g_37, &g_185, &g_37, &g_185, &g_37, &g_185, &g_37, &g_185}, {&g_37, &g_185, &g_37, &g_185, &g_37, &g_185, &g_37, &g_185, &g_37, &g_185}, {&g_37, &g_185, &g_37, &g_185, &g_37, &g_185, &g_37, &g_185, &g_37, &g_185}}, {{&g_37, &g_185, &g_37, &g_185, &g_37, &g_185, &g_37, &g_185, &g_37, &g_185}, {&g_37, &g_185, &g_37, &g_185, &g_37, &g_185, &g_37, &g_185, &g_37, &g_185}, {&g_37, &g_185, &g_37, &g_185, &g_37, &g_185, &g_37, &g_185, &g_37, &g_185}}, {{&g_37, &g_185, &g_37, &g_185, &g_37, &g_185, &g_37, &g_185, &g_37, &g_185}, {&g_37, &g_185, &g_37, &g_185, &g_37, &g_185, &g_37, &g_185, &g_37, &g_185}, {&g_37, &g_185, &g_37, &g_185, &g_37, &g_185, &g_37, &g_185, &g_37, &g_185}}, {{&g_37, &g_185, &g_37, &g_185, &g_37, &g_185, &g_37, &g_185, &g_37, &g_185}, {&g_37, &g_185, &g_37, &g_185, &g_37, &g_185, &g_37, &g_185, &g_37, &g_185}, {&g_37, &g_185, &g_37, &g_185, &g_37, &g_185, &g_37, &g_185, &g_37, &g_185}}};
                        int i, j, k;
                        (*g_91) = (((safe_rshift_func_int8_t_s_s((safe_lshift_func_int8_t_s_u(((safe_lshift_func_int8_t_s_s((((*l_605) = l_603[0][5][2]) != (void*)0), (safe_rshift_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u((*g_596), 5)), ((void*)0 != &g_527))))) <= 4294967286UL), ((l_611 = (*p_48)) > (*p_48)))), (+l_612))) ^ g_59[3]) , (void*)0);

                        ;
                        (*g_91) = func_38(((*g_91) = &l_585[5]));

                        ;
                        if ((*l_591))
                            break;
                        (*g_91) = (g_230[2][4][2] , (void*)0);

                        ;
                    }
                    if ((safe_mod_func_int32_t_s_s(((*l_618) |= ((*l_617) = (safe_sub_func_uint32_t_u_u((*g_72), (l_611 = (l_585[3] &= p_46)))))), (l_619[1] ^ (p_47 && l_567)))))
                    {
                        if (p_47)
                            break;
                        if (g_620)
                            continue;
                    }
                    else
                    {
                        (*l_618) &= l_567;
                        if ((*l_617))
                            break;
                    }
                    (*l_591) ^= ((*l_617) ^= (((*l_622) = ((*g_596) <= ((!((void*)0 == l_621[2])) < 0xFEL))) && ((void*)0 != l_623)));
                }
                else
                {
                    unsigned l_624 = 4UL;
                    int *l_626[7] = {&l_585[3], &l_585[4], &l_585[3], &l_585[4], &l_585[3], &l_585[4], &l_585[3]};
                    int i;
                    if (l_624)
                    {
                        (*l_591) = l_625;
                    }
                    else
                    {
                        l_627[0] = func_38(l_626[3]);
                        if (p_47)
                            break;
                        l_628 &= p_47;
                        if (p_46)
                            continue;
                    }
                    (*l_591) = (g_226 , ((!(safe_mod_func_int32_t_s_s((-1L), (g_59[2] & ((safe_rshift_func_uint16_t_u_u(((safe_rshift_func_uint16_t_u_s(p_46, 2)) & ((*l_592) != (g_185 = ((safe_rshift_func_int8_t_s_u((((safe_lshift_func_uint16_t_u_s((!((safe_rshift_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s((p_46 ^ (safe_lshift_func_int8_t_s_s(((*p_48) | ((safe_add_func_int16_t_s_s((((((safe_sub_func_int32_t_s_s(p_46, (safe_sub_func_uint16_t_u_u(((g_514 || g_226) && (*g_72)), 65535UL)))) || (*g_596)) & g_229) , 0x8D6E6B24L) , (-1L)), l_567)) && g_73)), 0))), 9)), (*g_596))) > 1UL)), g_230[2][4][2])) | (*l_591)) < g_57), p_47)) == 65534UL)))), l_567)) , 0x203BL))))) == g_230[2][4][2]));
                }
                if (p_47)
                    continue;
            }
        }



        if (((safe_mod_func_int32_t_s_s(((~(g_185 ^= ((0L >= ((p_47 , (*l_591)) | p_47)) | ((*l_656) &= (+(safe_rshift_func_int16_t_s_s(((p_46 <= (*l_591)) >= (g_59[2] ^= (*g_596))), 9))))))) ^ (*l_591)), p_46)) & 0x90L))
        {
            int **l_659 = &l_627[4];
            unsigned l_674 = 0x8F196EBEL;
            int l_678 = 0x0E8B08B3L;
            for (g_342 = 0; (g_342 <= 4); g_342 += 1)
            {
                int *l_669 = &l_585[2];
                for (g_226 = 0; (g_226 <= 3); g_226 += 1)
                {
                    int i;
                    if (g_59[g_226])
                        break;
                    (*l_591) = (((void*)0 != l_659) , (safe_unary_minus_func_int16_t_s((safe_mod_func_int16_t_s_s(((*l_656) ^= (safe_lshift_func_int16_t_s_u(((l_658[g_342] == (void*)0) < (g_59[g_226] && (((((*l_591) || ((safe_rshift_func_int16_t_s_s((*p_48), (g_59[g_226] , (*l_591)))) <= g_15[0][2][0])) , 0xAA3C7435L) , p_47) , g_59[2]))), 7))), g_226)))));
                    return l_667;



                }
                for (l_586 = 0; (l_586 <= 3); l_586 += 1)
                {
                    for (g_73 = 0; (g_73 <= 4); g_73 += 1)
                    {
                        char l_668 = (-1L);
                        int i, j;
                        l_668 = p_47;
                        (*l_591) = 0x0AB63130L;
                        (*g_91) = l_669;

                        ;
                    }
                }
            }
            for (g_226 = 0; (g_226 <= 6); g_226 += 1)
            {
                char *l_691 = (void*)0;
                char *l_692 = (void*)0;
                char *l_693 = &g_131;
                char **l_694 = &l_691;
                int ****l_707 = &g_280[7][9];
                short **l_736 = &l_657;
                int i;
            }
        }
        else
        {
            char *l_740[7];
            char **l_739 = &l_740[2];
            unsigned *l_741[9][7][2] = {{{&l_710[0], &l_735}, {&l_710[0], &l_735}, {&l_710[0], &l_735}, {&l_710[0], &l_735}, {&l_710[0], &l_735}, {&l_710[0], &l_735}, {&l_710[0], &l_735}}, {{&l_710[0], &l_735}, {&l_710[0], &l_735}, {&l_710[0], &l_735}, {&l_710[0], &l_735}, {&l_710[0], &l_735}, {&l_710[0], &l_735}, {&l_710[0], &l_735}}, {{&l_710[0], &l_735}, {&l_710[0], &l_735}, {&l_710[0], &l_735}, {&l_710[0], &l_735}, {&l_710[0], &l_735}, {&l_710[0], &l_735}, {&l_710[0], &l_735}}, {{&l_710[0], &l_735}, {&l_710[0], &l_735}, {&l_710[0], &l_735}, {&l_710[0], &l_735}, {&l_710[0], &l_735}, {&l_710[0], &l_735}, {&l_710[0], &l_735}}, {{&l_710[0], &l_735}, {&l_710[0], &l_735}, {&l_710[0], &l_735}, {&l_710[0], &l_735}, {&l_710[0], &l_735}, {&l_710[0], &l_735}, {&l_710[0], &l_735}}, {{&l_710[0], &l_735}, {&l_710[0], &l_735}, {&l_710[0], &l_735}, {&l_710[0], &l_735}, {&l_710[0], &l_735}, {&l_710[0], &l_735}, {&l_710[0], &l_735}}, {{&l_710[0], &l_735}, {&l_710[0], &l_735}, {&l_710[0], &l_735}, {&l_710[0], &l_735}, {&l_710[0], &l_735}, {&l_710[0], &l_735}, {&l_710[0], &l_735}}, {{&l_710[0], &l_735}, {&l_710[0], &l_735}, {&l_710[0], &l_735}, {&l_710[0], &l_735}, {&l_710[0], &l_735}, {&l_710[0], &l_735}, {&l_710[0], &l_735}}, {{&l_710[0], &l_735}, {&l_710[0], &l_735}, {&l_710[0], &l_735}, {&l_710[0], &l_735}, {&l_710[0], &l_735}, {&l_710[0], &l_735}, {&l_710[0], &l_735}}};
            unsigned *l_749 = &g_226;
            unsigned short *l_750 = &g_620;
            int l_751 = 0x32EE26E7L;
            char l_771 = 0x4DL;
            int *l_805 = &g_81;
            unsigned l_831 = 4294967295UL;
            int i, j, k;
            for (i = 0; i < 7; i++)
                l_740[i] = &g_131;
            (*l_591) |= (safe_lshift_func_uint16_t_u_u(((g_532 = (((((!g_226) , (*p_48)) , (void*)0) == l_739) != (g_514 , (p_48 == &l_566)))) , ((*l_750) ^= (safe_mod_func_uint16_t_u_u((safe_add_func_uint32_t_u_u(((*l_749) |= (((*p_48) <= ((safe_sub_func_int16_t_s_s((*p_48), g_748)) <= (-1L))) != (*g_72))), p_47)), g_229)))), l_751));
            for (l_685 = (-28); (l_685 <= 19); l_685 = safe_add_func_int16_t_s_s(l_685, 6))
            {
                int l_760 = 0xE8A5F52CL;
                int l_772[6][3][6] = {{{1L, 3L, 0xA85AFA44L, 0xBD6893CFL, 0L, 0L}, {1L, 3L, 0xA85AFA44L, 0xBD6893CFL, 0L, 0L}, {1L, 3L, 0xA85AFA44L, 0xBD6893CFL, 0L, 0L}}, {{1L, 3L, 0xA85AFA44L, 0xBD6893CFL, 0L, 0L}, {1L, 3L, 0xA85AFA44L, 0xBD6893CFL, 0L, 0L}, {1L, 3L, 0xA85AFA44L, 0xBD6893CFL, 0L, 0L}}, {{1L, 3L, 0xA85AFA44L, 0xBD6893CFL, 0L, 0L}, {1L, 3L, 0xA85AFA44L, 0xBD6893CFL, 0L, 0L}, {1L, 3L, 0xA85AFA44L, 0xBD6893CFL, 0L, 0L}}, {{1L, 3L, 0xA85AFA44L, 0xBD6893CFL, 0L, 0L}, {1L, 3L, 0xA85AFA44L, 0xBD6893CFL, 0L, 0L}, {1L, 3L, 0xA85AFA44L, 0xBD6893CFL, 0L, 0L}}, {{1L, 3L, 0xA85AFA44L, 0xBD6893CFL, 0L, 0L}, {1L, 3L, 0xA85AFA44L, 0xBD6893CFL, 0L, 0L}, {1L, 3L, 0xA85AFA44L, 0xBD6893CFL, 0L, 0L}}, {{1L, 3L, 0xA85AFA44L, 0xBD6893CFL, 0L, 0L}, {1L, 3L, 0xA85AFA44L, 0xBD6893CFL, 0L, 0L}, {1L, 3L, 0xA85AFA44L, 0xBD6893CFL, 0L, 0L}}};
                int *l_784 = &l_772[1][2][0];
                int *****l_800 = &g_279[1][1];
                unsigned l_860 = 7UL;
                int i, j, k;
                l_772[1][0][1] ^= (safe_rshift_func_int8_t_s_u((safe_add_func_uint16_t_u_u(((safe_rshift_func_uint16_t_u_s((((l_571 = ((*l_591) = l_760)) > (~(safe_sub_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s(((*l_750) = (p_46 && (l_765 = g_185))), ((((safe_unary_minus_func_uint16_t_u(g_767)) , ((safe_sub_func_int8_t_s_s((((void*)0 != l_770) >= (g_129 , 9L)), (((*l_656) |= ((*p_48) , l_751)) , 0x55L))) && 0UL)) <= 0x73L) ^ g_342))), g_748)))) && p_47), g_767)) | l_771), (*p_48))), 1));
            }
        }
        (*l_591) = (*l_591);
        l_804 &= (safe_add_func_int32_t_s_s((*l_591), (safe_lshift_func_uint8_t_u_s(((*g_596) = (*l_591)), 1))));
    }
    else
    {
        int *l_877 = &g_514;
        int *l_881 = &g_820;
        unsigned l_890 = 4294967289UL;
        int l_910[7][10][3] = {{{0xBCF91C2CL, 0x9105EDE5L, 0xF839E9FAL}, {0xBCF91C2CL, 0x9105EDE5L, 0xF839E9FAL}, {0xBCF91C2CL, 0x9105EDE5L, 0xF839E9FAL}, {0xBCF91C2CL, 0x9105EDE5L, 0xF839E9FAL}, {0xBCF91C2CL, 0x9105EDE5L, 0xF839E9FAL}, {0xBCF91C2CL, 0x9105EDE5L, 0xF839E9FAL}, {0xBCF91C2CL, 0x9105EDE5L, 0xF839E9FAL}, {0xBCF91C2CL, 0x9105EDE5L, 0xF839E9FAL}, {0xBCF91C2CL, 0x9105EDE5L, 0xF839E9FAL}, {0xBCF91C2CL, 0x9105EDE5L, 0xF839E9FAL}}, {{0xBCF91C2CL, 0x9105EDE5L, 0xF839E9FAL}, {0xBCF91C2CL, 0x9105EDE5L, 0xF839E9FAL}, {0xBCF91C2CL, 0x9105EDE5L, 0xF839E9FAL}, {0xBCF91C2CL, 0x9105EDE5L, 0xF839E9FAL}, {0xBCF91C2CL, 0x9105EDE5L, 0xF839E9FAL}, {0xBCF91C2CL, 0x9105EDE5L, 0xF839E9FAL}, {0xBCF91C2CL, 0x9105EDE5L, 0xF839E9FAL}, {0xBCF91C2CL, 0x9105EDE5L, 0xF839E9FAL}, {0xBCF91C2CL, 0x9105EDE5L, 0xF839E9FAL}, {0xBCF91C2CL, 0x9105EDE5L, 0xF839E9FAL}}, {{0xBCF91C2CL, 0x9105EDE5L, 0xF839E9FAL}, {0xBCF91C2CL, 0x9105EDE5L, 0xF839E9FAL}, {0xBCF91C2CL, 0x9105EDE5L, 0xF839E9FAL}, {0xBCF91C2CL, 0x9105EDE5L, 0xF839E9FAL}, {0xBCF91C2CL, 0x9105EDE5L, 0xF839E9FAL}, {0xBCF91C2CL, 0x9105EDE5L, 0xF839E9FAL}, {0xBCF91C2CL, 0x9105EDE5L, 0xF839E9FAL}, {0xBCF91C2CL, 0x9105EDE5L, 0xF839E9FAL}, {0xBCF91C2CL, 0x9105EDE5L, 0xF839E9FAL}, {0xBCF91C2CL, 0x9105EDE5L, 0xF839E9FAL}}, {{0xBCF91C2CL, 0x9105EDE5L, 0xF839E9FAL}, {0xBCF91C2CL, 0x9105EDE5L, 0xF839E9FAL}, {0xBCF91C2CL, 0x9105EDE5L, 0xF839E9FAL}, {0xBCF91C2CL, 0x9105EDE5L, 0xF839E9FAL}, {0xBCF91C2CL, 0x9105EDE5L, 0xF839E9FAL}, {0xBCF91C2CL, 0x9105EDE5L, 0xF839E9FAL}, {0xBCF91C2CL, 0x9105EDE5L, 0xF839E9FAL}, {0xBCF91C2CL, 0x9105EDE5L, 0xF839E9FAL}, {0xBCF91C2CL, 0x9105EDE5L, 0xF839E9FAL}, {0xBCF91C2CL, 0x9105EDE5L, 0xF839E9FAL}}, {{0xBCF91C2CL, 0x9105EDE5L, 0xF839E9FAL}, {0xBCF91C2CL, 0x9105EDE5L, 0xF839E9FAL}, {0xBCF91C2CL, 0x9105EDE5L, 0xF839E9FAL}, {0xBCF91C2CL, 0x9105EDE5L, 0xF839E9FAL}, {0xBCF91C2CL, 0x9105EDE5L, 0xF839E9FAL}, {0xBCF91C2CL, 0x9105EDE5L, 0xF839E9FAL}, {0xBCF91C2CL, 0x9105EDE5L, 0xF839E9FAL}, {0xBCF91C2CL, 0x9105EDE5L, 0xF839E9FAL}, {0xBCF91C2CL, 0x9105EDE5L, 0xF839E9FAL}, {0xBCF91C2CL, 0x9105EDE5L, 0xF839E9FAL}}, {{0xBCF91C2CL, 0x9105EDE5L, 0xF839E9FAL}, {0xBCF91C2CL, 0x9105EDE5L, 0xF839E9FAL}, {0xBCF91C2CL, 0x9105EDE5L, 0xF839E9FAL}, {0xBCF91C2CL, 0x9105EDE5L, 0xF839E9FAL}, {0xBCF91C2CL, 0x9105EDE5L, 0xF839E9FAL}, {0xBCF91C2CL, 0x9105EDE5L, 0xF839E9FAL}, {0xBCF91C2CL, 0x9105EDE5L, 0xF839E9FAL}, {0xBCF91C2CL, 0x9105EDE5L, 0xF839E9FAL}, {0xBCF91C2CL, 0x9105EDE5L, 0xF839E9FAL}, {0xBCF91C2CL, 0x9105EDE5L, 0xF839E9FAL}}, {{0xBCF91C2CL, 0x9105EDE5L, 0xF839E9FAL}, {0xBCF91C2CL, 0x9105EDE5L, 0xF839E9FAL}, {0xBCF91C2CL, 0x9105EDE5L, 0xF839E9FAL}, {0xBCF91C2CL, 0x9105EDE5L, 0xF839E9FAL}, {0xBCF91C2CL, 0x9105EDE5L, 0xF839E9FAL}, {0xBCF91C2CL, 0x9105EDE5L, 0xF839E9FAL}, {0xBCF91C2CL, 0x9105EDE5L, 0xF839E9FAL}, {0xBCF91C2CL, 0x9105EDE5L, 0xF839E9FAL}, {0xBCF91C2CL, 0x9105EDE5L, 0xF839E9FAL}, {0xBCF91C2CL, 0x9105EDE5L, 0xF839E9FAL}}};
        char *l_911 = &g_748;
        int ***l_916 = &g_91;
        int ******l_917 = &l_801;
        int i, j, k;
        for (g_767 = 0; (g_767 <= 0); g_767 += 1)
        {
            int l_867 = 0x56B18E50L;
            int l_880 = 0xDAB864E0L;
            int *l_901 = &g_230[0][2][3];
            int i;
            l_867 &= (l_710[g_767] | ((((**l_770) = (safe_mod_func_int32_t_s_s((l_710[g_767] & l_710[g_767]), l_710[g_767]))) ^ (l_710[g_767] >= 0xAC722614L)) , l_710[g_767]));
            for (l_711 = 0; (l_711 <= 0); l_711 += 1)
            {
                unsigned char l_879 = 249UL;
                int l_899 = 0x6AB62304L;
                for (g_748 = 0; (g_748 <= 2); g_748 += 1)
                {
                    short **l_874 = &g_873;
                    unsigned short *l_878 = &l_566;
                    int i, j, k;
                    l_880 = (safe_mod_func_int32_t_s_s(l_710[g_767], ((**l_770) = ((g_15[g_748][g_748][g_748] = (((g_15[(l_711 + 2)][(l_711 + 2)][g_748] != l_710[g_767]) , (((((*g_596) == ((safe_add_func_uint16_t_u_u(((*l_878) |= ((l_867 = ((((g_872 != (g_15[(l_711 + 2)][(l_711 + 2)][g_748] , l_874)) ^ (((**g_855) , ((safe_add_func_int32_t_s_s((l_877 == (void*)0), l_710[g_767])) != p_46)) , p_47)) , (*g_72)) > p_46)) && 0xD8BBL)), l_879)) != (-3L))) && 4L) != 65535UL) , l_879)) == g_514)) , (*g_72)))));
                    return l_881;


                }
                for (g_71 = 0; (g_71 <= 2); g_71 += 1)
                {
                    int i, j, k;
                    l_901 = func_38((((safe_add_func_int8_t_s_s(((safe_sub_func_uint16_t_u_u((safe_add_func_int8_t_s_s(1L, l_710[g_767])), ((g_15[(l_711 + 3)][g_71][g_71] || ((safe_mod_func_int8_t_s_s((l_710[g_767] , l_890), ((g_15[(g_71 + 1)][(l_711 + 2)][g_71] = (+((safe_add_func_int8_t_s_s((((g_898 = (safe_mod_func_int32_t_s_s((p_47 || (g_895 == g_895)), (safe_mod_func_uint16_t_u_u((l_879 , g_15[3][0][0]), (*p_48)))))) ^ g_57) ^ 0x00105D5EL), (*g_596))) , l_899))) || l_899))) < 0x1AE5L)) >= (*p_48)))) | g_900), (-10L))) && p_46) , (void*)0));

                    ;
                }
                for (g_898 = 0; (g_898 <= 3); g_898 += 1)
                {
                    char *l_902 = &g_748;
                    int l_907 = 0xE7EBB44CL;
                    (*l_881) = (((*l_902) = (g_131 |= (p_47 , 0x2CL))) , (safe_lshift_func_uint8_t_u_u((!(0x51L >= ((0xC28B3DFCL != (p_46 || 4294967295UL)) , (safe_rshift_func_int8_t_s_u(0xA7L, 6))))), (*g_596))));
                    if (l_907)
                        break;
                }
            }

            ;
        }
        (*g_91) = ((((*l_881) == (((*l_911) = ((safe_rshift_func_int16_t_s_u((*p_48), 3)) >= (l_910[2][4][0] = (*l_881)))) , (safe_mod_func_int32_t_s_s((*l_881), (l_910[2][4][0] = p_47))))) & ((safe_rshift_func_int8_t_s_u((l_916 != (void*)0), (l_917 == &l_801))) < 0x8B925986L)) , &l_910[0][6][0]);

        ;
    }



    for (g_57 = 0; (g_57 <= 9); g_57 += 1)
    {
        int l_921 = (-10L);
        int *l_922 = &g_230[2][4][2];
        int i;
        l_921 &= (safe_rshift_func_uint8_t_u_s((safe_unary_minus_func_int16_t_s(g_514)), 1));
        l_627[g_57] = l_922;
        for (g_226 = 0; (g_226 <= 3); g_226 += 1)
        {
            int *l_942 = &l_585[3];
            int l_972[9] = {0x4F22C3FDL, 0x4F22C3FDL, 0x1CCB254FL, 0x4F22C3FDL, 0x4F22C3FDL, 0x1CCB254FL, 0x4F22C3FDL, 0x4F22C3FDL, 0x1CCB254FL};
            char ***l_981[4] = {&g_841, (void*)0, &g_841, (void*)0};
            unsigned short l_991[7][10] = {{65532UL, 0xD850L, 0xB0CBL, 0x894FL, 0xFDB7L, 0x894FL, 0xB0CBL, 0xD850L, 65532UL, 65526UL}, {65532UL, 0xD850L, 0xB0CBL, 0x894FL, 0xFDB7L, 0x894FL, 0xB0CBL, 0xD850L, 65532UL, 65526UL}, {65532UL, 0xD850L, 0xB0CBL, 0x894FL, 0xFDB7L, 0x894FL, 0xB0CBL, 0xD850L, 65532UL, 65526UL}, {65532UL, 0xD850L, 0xB0CBL, 0x894FL, 0xFDB7L, 0x894FL, 0xB0CBL, 0xD850L, 65532UL, 65526UL}, {65532UL, 0xD850L, 0xB0CBL, 0x894FL, 0xFDB7L, 0x894FL, 0xB0CBL, 0xD850L, 65532UL, 65526UL}, {65532UL, 0xD850L, 0xB0CBL, 0x894FL, 0xFDB7L, 0x894FL, 0xB0CBL, 0xD850L, 65532UL, 65526UL}, {65532UL, 0xD850L, 0xB0CBL, 0x894FL, 0xFDB7L, 0x894FL, 0xB0CBL, 0xD850L, 65532UL, 65526UL}};
            unsigned short l_1000 = 1UL;
            unsigned char l_1005 = 4UL;
            int i, j;
            (*l_922) &= g_59[g_226];
            for (l_921 = 7; (l_921 >= 3); l_921 -= 1)
            {
                int l_924[5][10] = {{0x77B094ECL, 0L, (-8L), 0L, 0x77B094ECL, 0xEDB9FC66L, 0x77B094ECL, 0L, (-8L), 0L}, {0x77B094ECL, 0L, (-8L), 0L, 0x77B094ECL, 0xEDB9FC66L, 0x77B094ECL, 0L, (-8L), 0L}, {0x77B094ECL, 0L, (-8L), 0L, 0x77B094ECL, 0xEDB9FC66L, 0x77B094ECL, 0L, (-8L), 0L}, {0x77B094ECL, 0L, (-8L), 0L, 0x77B094ECL, 0xEDB9FC66L, 0x77B094ECL, 0L, (-8L), 0L}, {0x77B094ECL, 0L, (-8L), 0L, 0x77B094ECL, 0xEDB9FC66L, 0x77B094ECL, 0L, (-8L), 0L}};
                int l_954 = (-1L);
                int l_959 = (-2L);
                unsigned *l_970 = &g_71;
                int i, j;
            }
            l_627[g_57] = func_38(l_627[g_57]);
        }
    }


    for (l_735 = 0; l_735 < 7; l_735 += 1)
    {
        l_585[l_735] = 0L;
    }
    return l_1006[0];



}







static short * func_50(short * p_51, unsigned short p_52, int p_53)
{
    unsigned *l_75 = (void*)0;
    int **l_428 = &g_92;
    int **l_429 = &g_92;
    int *l_432 = &g_230[2][4][2];
    int ****l_451 = &g_280[5][3];
    int **l_459 = &l_432;
    int **l_460 = &l_432;
    char *l_485 = &g_131;
    unsigned char l_488 = 9UL;
    unsigned **l_495 = &g_72;
    unsigned ***l_494 = &l_495;
    unsigned ****l_493 = &l_494;
    short l_502 = 0xEA91L;
    char l_520 = 0x0FL;
    char l_547 = 0x52L;
    for (p_52 = 0; (p_52 <= 3); p_52 += 1)
    {
        unsigned char *l_68[3][2][3] = {{{&g_59[3], &g_57, &g_59[3]}, {&g_59[3], &g_57, &g_59[3]}}, {{&g_59[3], &g_57, &g_59[3]}, {&g_59[3], &g_57, &g_59[3]}}, {{&g_59[3], &g_57, &g_59[3]}, {&g_59[3], &g_57, &g_59[3]}}};
        int l_422 = (-1L);
        int **l_425 = &g_92;
        int ***l_426 = (void*)0;
        int ***l_427[10] = {&l_425, &g_91, &l_425, &g_91, &l_425, &g_91, &l_425, &g_91, &l_425, &g_91};
        int i, j, k;
        for (p_53 = 0; (p_53 <= 3); p_53 += 1)
        {
            unsigned *l_69 = (void*)0;
            unsigned *l_70[9];
            unsigned **l_74 = &l_70[3];
            int *l_421[1];
            int i;
            for (i = 0; i < 9; i++)
                l_70[i] = (void*)0;
            for (i = 0; i < 1; i++)
                l_421[i] = &g_107;
        }
        p_53 = (safe_add_func_uint8_t_u_u((l_425 == (l_429 = (l_428 = (void*)0))), (((safe_lshift_func_int16_t_s_u((*p_51), 7)) , &l_75) != &g_72)));

        ;
        ;
    }

    ;
    ;
lbl_541:
    l_432 = ((*g_91) = &p_53);

    ;
    ;
    if (p_52)
    {
        short l_435 = (-1L);
        short l_442 = (-2L);
        unsigned l_445[2];
        int l_450 = 8L;
        unsigned *l_457 = (void*)0;
        unsigned *****l_463 = &g_317;
        short *l_481 = (void*)0;
        char l_507 = (-1L);
        int i;
        for (i = 0; i < 2; i++)
            l_445[i] = 0xD29A65FEL;
        (*g_92) = 0xC86B15C5L;
        if (((((safe_sub_func_uint8_t_u_u(p_52, (((*g_72) || p_52) == (*g_72)))) , l_435) <= (safe_sub_func_uint8_t_u_u(((safe_rshift_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s((l_442 || (safe_sub_func_uint16_t_u_u(l_445[1], ((safe_sub_func_int16_t_s_s(((g_185 , (((safe_mod_func_uint8_t_u_u((0xE7C95F5AL | (*g_72)), 0x99L)) || g_155) , (*p_51))) , 7L), 0x3328L)) < 0xECE9L)))), 4)), 1)) , l_450), g_73))) | 249UL))
        {
            int *****l_452 = &g_279[2][2];
            (**g_91) = (((*l_452) = l_451) == (l_445[0] , l_451));
        }
        else
        {
            int *l_455 = &l_450;
            int ***l_506 = &l_460;
            for (l_442 = 3; (l_442 >= 0); l_442 -= 1)
            {
                unsigned **l_456 = &l_75;
                int **l_458 = &l_432;
                unsigned short *l_462 = &g_2;
                unsigned short **l_461 = &l_462;
                unsigned l_472 = 4294967295UL;
                int i;
            }
            for (g_107 = (-16); (g_107 > 8); g_107 = safe_add_func_uint16_t_u_u(g_107, 1))
            {
                unsigned l_500 = 0x496C2063L;
                int l_501 = 7L;
                unsigned short *l_505[9] = {&g_155, &g_155, (void*)0, &g_155, &g_155, (void*)0, &g_155, &g_155, (void*)0};
                unsigned char *l_512 = &g_342;
                int *l_513 = &g_514;
                int l_515 = 0xE26F5817L;
                int i;
                l_502 = (l_501 = (l_500 |= (safe_add_func_int32_t_s_s((****l_451), (*g_72)))));
                l_515 &= (((((l_450 = ((*g_92) == (safe_sub_func_int32_t_s_s(((l_501 = l_442) > ((l_506 == (*l_451)) | l_507)), (safe_mod_func_int8_t_s_s(0L, ((*l_512) = (safe_add_func_uint32_t_u_u((*g_72), p_53))))))))) != (((*l_513) = (7L | p_53)) , 0xCDL)) < (*g_72)) , l_501) , p_52);
            }
        }
        (*l_460) = (*l_460);
    }
    else
    {
        unsigned l_521 = 0UL;
        unsigned char *l_524 = &g_59[3];
        int l_545 = 0x737C95B8L;
        for (g_71 = 15; (g_71 == 34); g_71++)
        {
            short l_531 = 0x6DAFL;
            unsigned ****l_539 = &l_494;
            int l_562 = 0x0FE09189L;
            (***l_451) = ((*l_459) = (((safe_add_func_uint8_t_u_u((+l_520), l_521)) > (safe_rshift_func_uint16_t_u_u((((l_524 = &g_59[1]) == &l_488) | g_59[2]), p_52))) , (void*)0));

            ;
            ;
            for (g_226 = 0; (g_226 > 51); g_226 = safe_add_func_int16_t_s_s(g_226, 5))
            {
                unsigned l_538 = 0xA878C4A2L;
                int l_558 = (-1L);
                int l_559 = 0xCB387D42L;
                if ((!((l_521 > (l_521 < 0x8F27L)) < g_527)))
                {
                    p_53 = p_52;
                }
                else
                {
                    int *l_528 = &g_15[3][1][2];
                    int ****l_535 = &g_280[7][9];
                    l_528 = func_38(l_528);
                    for (g_229 = 15; (g_229 == 1); --g_229)
                    {
                        int *l_533 = &g_230[2][4][2];
                        int ****l_534 = &g_280[7][9];
                        (*l_533) = (l_531 , g_532);
                        g_540 = (((((~(((((*l_524) = (((l_535 = l_534) == &g_280[4][7]) >= 0L)) >= ((((((g_279[1][1] = &g_280[7][9]) == &g_280[6][0]) & ((*l_485) = (((((*l_533) = l_531) | p_53) && ((safe_add_func_int32_t_s_s(l_538, ((0x13L || (-10L)) | p_53))) ^ (*g_72))) > l_538))) != 0x85L) == g_2) , l_521)) , l_539) != l_539)) >= 0x28L) < g_73) <= l_538) && p_52);
                        if (p_53)
                            continue;
                    }
                    return p_51;


                }
                for (g_185 = 0; (g_185 <= 3); g_185 += 1)
                {
                    if (p_52)
                        goto lbl_541;
                }
                for (l_538 = 24; (l_538 < 45); l_538 = safe_add_func_uint16_t_u_u(l_538, 2))
                {
                    unsigned l_544 = 0UL;
                    int l_553 = (-7L);
                    if (l_544)
                    {
                        (*g_91) = (void*)0;
                        l_547 = (g_155 & ((l_545 = (l_531 < 255UL)) < (safe_unary_minus_func_uint16_t_u(g_229))));
                        if (p_53)
                            continue;
                    }
                    else
                    {
                        int *l_548 = &l_545;
                        if (p_52)
                            break;
                        (*l_548) = ((p_53 , g_57) < 0x87E3L);
                    }
                    for (p_53 = 0; (p_53 <= 3); p_53 += 1)
                    {
                        int *l_550 = (void*)0;
                        int **l_549 = &l_550;
                        int *l_563 = (void*)0;
                        int *l_564 = &g_230[2][4][2];
                        int i, j;
                        l_553 = ((((*l_549) = func_38(&l_545)) == &g_514) && (safe_sub_func_int32_t_s_s(p_53, p_52)));

                        ;
                        if (p_53)
                            break;
                        l_562 = ((safe_mod_func_int16_t_s_s((safe_add_func_int32_t_s_s((l_559 = (l_558 = p_53)), (safe_lshift_func_int8_t_s_s(((p_53 , &l_538) == (***l_539)), g_229)))), 0xE1E4L)) <= p_52);
                        (*l_564) = (((*l_485) = p_52) , l_544);
                    }
                }
            }
        }

        ;
        ;
        return p_51;



    }
    return &g_37;



}







static int * func_62(unsigned char * p_63, int p_64, char p_65, unsigned char p_66, unsigned p_67)
{
    int *l_84[1][4];
    int l_94 = 0x7CCB484BL;
    short l_171 = 0xE319L;
    char l_172 = 3L;
    int ***l_179 = (void*)0;
    unsigned l_188 = 7UL;
    int l_302 = 0L;
    unsigned **l_370 = (void*)0;
    int *l_398 = &l_94;
    int *l_401[8];
    int *l_420 = (void*)0;
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 4; j++)
            l_84[i][j] = &g_81;
    }
    for (i = 0; i < 8; i++)
        l_401[i] = &l_94;
    for (p_64 = 0; (p_64 <= 3); p_64 += 1)
    {
        unsigned char *l_79 = &g_57;
        short *l_106[8] = {&g_37, &g_37, &g_37, &g_37, &g_37, &g_37, &g_37, &g_37};
        int *l_108 = &g_81;
        short l_130 = 0L;
        int i;
        if ((safe_sub_func_uint32_t_u_u(g_59[p_64], ((safe_unary_minus_func_int8_t_s(g_37)) & ((*l_79) = (*p_63))))))
        {
            int *l_80 = &g_81;
            l_80 = (g_37 , func_38(&g_15[0][2][0]));

            ;
            return &g_15[0][2][0];


        }
        else
        {
            int *l_83 = &g_81;
            int **l_82 = &l_83;
            int l_95[2];
            char l_97 = (-1L);
            unsigned char l_120 = 1UL;
            int i;
            for (i = 0; i < 2; i++)
                l_95[i] = 0x45FF6818L;
            (*l_82) = func_38(&g_81);
            for (p_65 = 0; (p_65 <= 3); p_65 += 1)
            {
                unsigned char l_85 = 255UL;
                unsigned short l_90[10] = {9UL, 0x4313L, 9UL, 0x4313L, 9UL, 0x4313L, 9UL, 0x4313L, 9UL, 0x4313L};
                int i;
                (*l_82) = func_38(func_38(l_84[0][1]));
                if (((p_67 ^ l_85) , (safe_sub_func_uint32_t_u_u(((void*)0 != &l_84[0][3]), (p_67 && (safe_add_func_int16_t_s_s((((((!(g_59[1] ^ g_15[0][2][0])) , (l_90[8] < (g_91 == (void*)0))) ^ g_81) > g_59[2]) ^ p_64), p_67)))))))
                {
                    unsigned l_98[1][5] = {{4294967295UL, 0UL, 4294967295UL, 0UL, 4294967295UL}};
                    int i, j;
                    (*l_83) = ((safe_unary_minus_func_uint8_t_u(255UL)) ^ l_94);
                    for (g_81 = 3; (g_81 >= 0); g_81 -= 1)
                    {
                        unsigned l_96 = 4294967288UL;
                        if (p_67)
                            break;
                        if (p_64)
                            break;
                        l_96 ^= (l_95[1] = p_66);
                        if (l_97)
                            continue;
                    }
                    l_98[0][3] = p_65;
                    for (p_66 = 0; (p_66 <= 3); p_66 += 1)
                    {
                        int l_101 = (-4L);
                        (*g_91) = (((g_107 = ((((safe_rshift_func_int16_t_s_s(l_101, (p_64 , (((g_59[p_64] >= (((safe_mod_func_uint8_t_u_u((*p_63), 0xE5L)) != (safe_sub_func_uint8_t_u_u(l_101, (((*p_63) & (g_57 & (((g_37 , p_64) , g_71) , g_15[0][2][0]))) & g_59[p_64])))) == l_90[8])) , g_81) , 0xE10BL)))) , l_106[0]) == (void*)0) != g_59[3])) , 0x2336C458L) , (void*)0);

                        ;
                        return l_108;


                    }
                }
                else
                {
                    int l_121 = 1L;
                    int l_126 = (-1L);
                    char *l_132 = &l_97;
                    unsigned char l_133[6];
                    int i;
                    for (i = 0; i < 6; i++)
                        l_133[i] = 0xDFL;
                    for (g_71 = 0; (g_71 <= 3); g_71 += 1)
                    {
                        char l_109 = 0x26L;
                        if (l_109)
                            break;
                        if (p_65)
                            break;
                        (*l_108) |= g_59[2];
                    }
                    if ((safe_add_func_uint8_t_u_u((safe_add_func_uint16_t_u_u((g_15[3][1][0] < ((*l_132) = ((safe_add_func_int16_t_s_s(g_57, (safe_add_func_int8_t_s_s((*l_108), (((safe_rshift_func_uint16_t_u_s((((((l_120 < (l_121 = (l_121 == 254UL))) | p_64) > (((+((safe_mod_func_int8_t_s_s((g_131 = ((l_126 != ((safe_add_func_int16_t_s_s((g_129 |= g_2), (*l_83))) < (*g_72))) > l_130)), (*p_63))) , 4UL)) & 0x68BF4733L) > g_71)) , (**l_82)) || 0x8AL), g_59[3])) <= g_81) ^ (-9L)))))) || 0x7FL))), g_15[3][0][0])), l_133[5])))
                    {
                        unsigned short *l_136 = &l_90[8];
                        int l_139[9][6][2] = {{{1L, 0L}, {1L, 0L}, {1L, 0L}, {1L, 0L}, {1L, 0L}, {1L, 0L}}, {{1L, 0L}, {1L, 0L}, {1L, 0L}, {1L, 0L}, {1L, 0L}, {1L, 0L}}, {{1L, 0L}, {1L, 0L}, {1L, 0L}, {1L, 0L}, {1L, 0L}, {1L, 0L}}, {{1L, 0L}, {1L, 0L}, {1L, 0L}, {1L, 0L}, {1L, 0L}, {1L, 0L}}, {{1L, 0L}, {1L, 0L}, {1L, 0L}, {1L, 0L}, {1L, 0L}, {1L, 0L}}, {{1L, 0L}, {1L, 0L}, {1L, 0L}, {1L, 0L}, {1L, 0L}, {1L, 0L}}, {{1L, 0L}, {1L, 0L}, {1L, 0L}, {1L, 0L}, {1L, 0L}, {1L, 0L}}, {{1L, 0L}, {1L, 0L}, {1L, 0L}, {1L, 0L}, {1L, 0L}, {1L, 0L}}, {{1L, 0L}, {1L, 0L}, {1L, 0L}, {1L, 0L}, {1L, 0L}, {1L, 0L}}};
                        unsigned *l_140 = &g_71;
                        unsigned char l_141[9] = {255UL, 0x2EL, 255UL, 0x2EL, 255UL, 0x2EL, 255UL, 0x2EL, 255UL};
                        int i, j, k;
                        (*l_83) = ((safe_lshift_func_uint16_t_u_u(((*l_136) = g_71), ((l_121 ^= l_85) != (l_85 ^ g_131)))) | (*l_83));
                        (*l_108) = (((((safe_add_func_uint16_t_u_u((l_139[7][3][1] |= 0x2F43L), (~g_2))) > (((*l_140) ^= (*g_72)) , (l_90[6] , 0x02CDL))) , g_107) < 0x83L) , l_141[8]);
                        if (p_66)
                            continue;
                        (*l_83) = (safe_rshift_func_uint16_t_u_s((safe_sub_func_int8_t_s_s((-1L), (+((*l_108) , 0x9CL)))), 11));
                    }
                    else
                    {
                        if (g_73)
                            break;
                    }
                }
                (**l_82) = (g_73 < (*p_63));
            }
        }
        for (l_130 = 0; (l_130 == (-24)); l_130--)
        {
            unsigned l_148 = 0x315D36EEL;
            l_148 |= (((*p_63) , (p_67 == (*g_72))) , (*l_108));
            if (p_65)
                break;
            return l_108;


        }
    }
    if ((safe_lshift_func_int16_t_s_u(p_64, 9)))
    {
        unsigned short l_151 = 0x2E8BL;
        unsigned short *l_154 = &g_155;
        char l_156 = 0xB7L;
        unsigned short *l_161 = &g_2;
        int **l_166 = &l_84[0][2];
        int **l_169[10][10][2] = {{{&l_84[0][1], &l_84[0][1]}, {&l_84[0][1], &l_84[0][1]}, {&l_84[0][1], &l_84[0][1]}, {&l_84[0][1], &l_84[0][1]}, {&l_84[0][1], &l_84[0][1]}, {&l_84[0][1], &l_84[0][1]}, {&l_84[0][1], &l_84[0][1]}, {&l_84[0][1], &l_84[0][1]}, {&l_84[0][1], &l_84[0][1]}, {&l_84[0][1], &l_84[0][1]}}, {{&l_84[0][1], &l_84[0][1]}, {&l_84[0][1], &l_84[0][1]}, {&l_84[0][1], &l_84[0][1]}, {&l_84[0][1], &l_84[0][1]}, {&l_84[0][1], &l_84[0][1]}, {&l_84[0][1], &l_84[0][1]}, {&l_84[0][1], &l_84[0][1]}, {&l_84[0][1], &l_84[0][1]}, {&l_84[0][1], &l_84[0][1]}, {&l_84[0][1], &l_84[0][1]}}, {{&l_84[0][1], &l_84[0][1]}, {&l_84[0][1], &l_84[0][1]}, {&l_84[0][1], &l_84[0][1]}, {&l_84[0][1], &l_84[0][1]}, {&l_84[0][1], &l_84[0][1]}, {&l_84[0][1], &l_84[0][1]}, {&l_84[0][1], &l_84[0][1]}, {&l_84[0][1], &l_84[0][1]}, {&l_84[0][1], &l_84[0][1]}, {&l_84[0][1], &l_84[0][1]}}, {{&l_84[0][1], &l_84[0][1]}, {&l_84[0][1], &l_84[0][1]}, {&l_84[0][1], &l_84[0][1]}, {&l_84[0][1], &l_84[0][1]}, {&l_84[0][1], &l_84[0][1]}, {&l_84[0][1], &l_84[0][1]}, {&l_84[0][1], &l_84[0][1]}, {&l_84[0][1], &l_84[0][1]}, {&l_84[0][1], &l_84[0][1]}, {&l_84[0][1], &l_84[0][1]}}, {{&l_84[0][1], &l_84[0][1]}, {&l_84[0][1], &l_84[0][1]}, {&l_84[0][1], &l_84[0][1]}, {&l_84[0][1], &l_84[0][1]}, {&l_84[0][1], &l_84[0][1]}, {&l_84[0][1], &l_84[0][1]}, {&l_84[0][1], &l_84[0][1]}, {&l_84[0][1], &l_84[0][1]}, {&l_84[0][1], &l_84[0][1]}, {&l_84[0][1], &l_84[0][1]}}, {{&l_84[0][1], &l_84[0][1]}, {&l_84[0][1], &l_84[0][1]}, {&l_84[0][1], &l_84[0][1]}, {&l_84[0][1], &l_84[0][1]}, {&l_84[0][1], &l_84[0][1]}, {&l_84[0][1], &l_84[0][1]}, {&l_84[0][1], &l_84[0][1]}, {&l_84[0][1], &l_84[0][1]}, {&l_84[0][1], &l_84[0][1]}, {&l_84[0][1], &l_84[0][1]}}, {{&l_84[0][1], &l_84[0][1]}, {&l_84[0][1], &l_84[0][1]}, {&l_84[0][1], &l_84[0][1]}, {&l_84[0][1], &l_84[0][1]}, {&l_84[0][1], &l_84[0][1]}, {&l_84[0][1], &l_84[0][1]}, {&l_84[0][1], &l_84[0][1]}, {&l_84[0][1], &l_84[0][1]}, {&l_84[0][1], &l_84[0][1]}, {&l_84[0][1], &l_84[0][1]}}, {{&l_84[0][1], &l_84[0][1]}, {&l_84[0][1], &l_84[0][1]}, {&l_84[0][1], &l_84[0][1]}, {&l_84[0][1], &l_84[0][1]}, {&l_84[0][1], &l_84[0][1]}, {&l_84[0][1], &l_84[0][1]}, {&l_84[0][1], &l_84[0][1]}, {&l_84[0][1], &l_84[0][1]}, {&l_84[0][1], &l_84[0][1]}, {&l_84[0][1], &l_84[0][1]}}, {{&l_84[0][1], &l_84[0][1]}, {&l_84[0][1], &l_84[0][1]}, {&l_84[0][1], &l_84[0][1]}, {&l_84[0][1], &l_84[0][1]}, {&l_84[0][1], &l_84[0][1]}, {&l_84[0][1], &l_84[0][1]}, {&l_84[0][1], &l_84[0][1]}, {&l_84[0][1], &l_84[0][1]}, {&l_84[0][1], &l_84[0][1]}, {&l_84[0][1], &l_84[0][1]}}, {{&l_84[0][1], &l_84[0][1]}, {&l_84[0][1], &l_84[0][1]}, {&l_84[0][1], &l_84[0][1]}, {&l_84[0][1], &l_84[0][1]}, {&l_84[0][1], &l_84[0][1]}, {&l_84[0][1], &l_84[0][1]}, {&l_84[0][1], &l_84[0][1]}, {&l_84[0][1], &l_84[0][1]}, {&l_84[0][1], &l_84[0][1]}, {&l_84[0][1], &l_84[0][1]}}};
        int l_238 = 0x9AB7FDA8L;
        char *l_270[5][3][6] = {{{&l_172, &g_131, &l_156, &g_131, &l_172, &g_131}, {&l_172, &g_131, &l_156, &g_131, &l_172, &g_131}, {&l_172, &g_131, &l_156, &g_131, &l_172, &g_131}}, {{&l_172, &g_131, &l_156, &g_131, &l_172, &g_131}, {&l_172, &g_131, &l_156, &g_131, &l_172, &g_131}, {&l_172, &g_131, &l_156, &g_131, &l_172, &g_131}}, {{&l_172, &g_131, &l_156, &g_131, &l_172, &g_131}, {&l_172, &g_131, &l_156, &g_131, &l_172, &g_131}, {&l_172, &g_131, &l_156, &g_131, &l_172, &g_131}}, {{&l_172, &g_131, &l_156, &g_131, &l_172, &g_131}, {&l_172, &g_131, &l_156, &g_131, &l_172, &g_131}, {&l_172, &g_131, &l_156, &g_131, &l_172, &g_131}}, {{&l_172, &g_131, &l_156, &g_131, &l_172, &g_131}, {&l_172, &g_131, &l_156, &g_131, &l_172, &g_131}, {&l_172, &g_131, &l_156, &g_131, &l_172, &g_131}}};
        char **l_269[10][10][1] = {{{&l_270[1][0][3]}, {&l_270[1][0][3]}, {&l_270[1][0][3]}, {&l_270[1][0][3]}, {&l_270[1][0][3]}, {&l_270[1][0][3]}, {&l_270[1][0][3]}, {&l_270[1][0][3]}, {&l_270[1][0][3]}, {&l_270[1][0][3]}}, {{&l_270[1][0][3]}, {&l_270[1][0][3]}, {&l_270[1][0][3]}, {&l_270[1][0][3]}, {&l_270[1][0][3]}, {&l_270[1][0][3]}, {&l_270[1][0][3]}, {&l_270[1][0][3]}, {&l_270[1][0][3]}, {&l_270[1][0][3]}}, {{&l_270[1][0][3]}, {&l_270[1][0][3]}, {&l_270[1][0][3]}, {&l_270[1][0][3]}, {&l_270[1][0][3]}, {&l_270[1][0][3]}, {&l_270[1][0][3]}, {&l_270[1][0][3]}, {&l_270[1][0][3]}, {&l_270[1][0][3]}}, {{&l_270[1][0][3]}, {&l_270[1][0][3]}, {&l_270[1][0][3]}, {&l_270[1][0][3]}, {&l_270[1][0][3]}, {&l_270[1][0][3]}, {&l_270[1][0][3]}, {&l_270[1][0][3]}, {&l_270[1][0][3]}, {&l_270[1][0][3]}}, {{&l_270[1][0][3]}, {&l_270[1][0][3]}, {&l_270[1][0][3]}, {&l_270[1][0][3]}, {&l_270[1][0][3]}, {&l_270[1][0][3]}, {&l_270[1][0][3]}, {&l_270[1][0][3]}, {&l_270[1][0][3]}, {&l_270[1][0][3]}}, {{&l_270[1][0][3]}, {&l_270[1][0][3]}, {&l_270[1][0][3]}, {&l_270[1][0][3]}, {&l_270[1][0][3]}, {&l_270[1][0][3]}, {&l_270[1][0][3]}, {&l_270[1][0][3]}, {&l_270[1][0][3]}, {&l_270[1][0][3]}}, {{&l_270[1][0][3]}, {&l_270[1][0][3]}, {&l_270[1][0][3]}, {&l_270[1][0][3]}, {&l_270[1][0][3]}, {&l_270[1][0][3]}, {&l_270[1][0][3]}, {&l_270[1][0][3]}, {&l_270[1][0][3]}, {&l_270[1][0][3]}}, {{&l_270[1][0][3]}, {&l_270[1][0][3]}, {&l_270[1][0][3]}, {&l_270[1][0][3]}, {&l_270[1][0][3]}, {&l_270[1][0][3]}, {&l_270[1][0][3]}, {&l_270[1][0][3]}, {&l_270[1][0][3]}, {&l_270[1][0][3]}}, {{&l_270[1][0][3]}, {&l_270[1][0][3]}, {&l_270[1][0][3]}, {&l_270[1][0][3]}, {&l_270[1][0][3]}, {&l_270[1][0][3]}, {&l_270[1][0][3]}, {&l_270[1][0][3]}, {&l_270[1][0][3]}, {&l_270[1][0][3]}}, {{&l_270[1][0][3]}, {&l_270[1][0][3]}, {&l_270[1][0][3]}, {&l_270[1][0][3]}, {&l_270[1][0][3]}, {&l_270[1][0][3]}, {&l_270[1][0][3]}, {&l_270[1][0][3]}, {&l_270[1][0][3]}, {&l_270[1][0][3]}}};
        short l_274 = 0x3B8FL;
        int i, j, k;
        if ((l_151 > ((((p_65 >= (p_66 , (((*l_154) &= g_129) == ((((l_156 , (safe_add_func_uint16_t_u_u((g_73 >= ((*p_63) &= l_156)), (((((safe_lshift_func_int8_t_s_s((g_15[0][2][2] <= 7UL), 1)) < 0xB91DL) ^ 6UL) , l_161) == &g_2)))) <= 0xDE18L) || (-1L)) != 4294967295UL)))) > p_66) , g_15[1][1][0]) , 1L)))
        {
            int l_173[6];
            int i;
            for (i = 0; i < 6; i++)
                l_173[i] = 0L;
            (*g_91) = func_38((*g_91));
            if ((p_64 ^= 0x710E1121L))
            {
                int l_170 = 0x9D56F053L;
                for (l_156 = 0; (l_156 != 3); l_156++)
                {
                    int **l_168[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_168[i] = (void*)0;
                    for (g_71 = 0; (g_71 < 47); g_71 = safe_add_func_uint16_t_u_u(g_71, 6))
                    {
                        int ***l_167[5];
                        int i;
                        for (i = 0; i < 5; i++)
                            l_167[i] = &g_91;
                        l_170 ^= ((l_168[0] = (l_166 = (void*)0)) != l_169[7][3][0]);

                        ;
                        l_173[1] = (l_172 = l_171);
                        if (l_173[2])
                            continue;
                    }
                    (*g_91) = (*g_91);
                }

                ;
                return (*g_91);


            }
            else
            {
                (**l_166) = (-1L);
                for (p_66 = (-14); (p_66 >= 42); p_66 = safe_add_func_uint32_t_u_u(p_66, 3))
                {
                    char *l_177 = (void*)0;
                    char **l_176 = &l_177;
                    int ***l_178 = &g_91;
                    p_64 &= (((p_66 != ((**l_166) = (((*l_176) = &l_172) == &g_131))) , l_178) != l_179);

                    ;
                    return (**l_178);


                }
            }
            p_64 = g_59[2];
            if (p_64)
            {
                unsigned char *l_184 = (void*)0;
                unsigned short *l_186 = &l_151;
                int l_187[5][4][2] = {{{0xE1114777L, (-10L)}, {0xE1114777L, (-10L)}, {0xE1114777L, (-10L)}, {0xE1114777L, (-10L)}}, {{0xE1114777L, (-10L)}, {0xE1114777L, (-10L)}, {0xE1114777L, (-10L)}, {0xE1114777L, (-10L)}}, {{0xE1114777L, (-10L)}, {0xE1114777L, (-10L)}, {0xE1114777L, (-10L)}, {0xE1114777L, (-10L)}}, {{0xE1114777L, (-10L)}, {0xE1114777L, (-10L)}, {0xE1114777L, (-10L)}, {0xE1114777L, (-10L)}}, {{0xE1114777L, (-10L)}, {0xE1114777L, (-10L)}, {0xE1114777L, (-10L)}, {0xE1114777L, (-10L)}}};
                int i, j, k;
                l_187[0][2][1] = ((((((**l_166) = l_173[2]) && 0x3449171DL) || (safe_rshift_func_int8_t_s_s((safe_lshift_func_int8_t_s_s((((g_59[2] || p_66) <= p_64) ^ ((*p_63) > (g_185 = (p_67 , (+g_155))))), ((((*l_186) = p_65) != g_73) || (*p_63)))), p_66))) != p_64) == l_173[5]);
                return (*g_91);


            }
            else
            {
                unsigned **l_190[6][4] = {{&g_72, (void*)0, &g_72, (void*)0}, {&g_72, (void*)0, &g_72, (void*)0}, {&g_72, (void*)0, &g_72, (void*)0}, {&g_72, (void*)0, &g_72, (void*)0}, {&g_72, (void*)0, &g_72, (void*)0}, {&g_72, (void*)0, &g_72, (void*)0}};
                unsigned ***l_189 = &l_190[0][0];
                unsigned **l_191[10] = {&g_72, &g_72, &g_72, &g_72, &g_72, &g_72, &g_72, &g_72, &g_72, &g_72};
                short l_192[7];
                unsigned short l_193 = 0x8AB7L;
                int i, j;
                for (i = 0; i < 7; i++)
                    l_192[i] = (-3L);
                l_188 &= p_65;
                (*g_91) = ((((*l_189) = &g_72) == (l_191[1] = &g_72)) , (*g_91));
                (**l_166) |= l_192[3];
                (**l_166) ^= ((l_193 && 0x13E7L) < 0xB959L);
            }
        }
        else
        {
            unsigned l_197 = 1UL;
            for (g_131 = 0; (g_131 == 17); g_131 = safe_add_func_uint16_t_u_u(g_131, 4))
            {
                char l_200[5] = {4L, 0xC5L, 4L, 0xC5L, 4L};
                int l_210 = 0L;
                int i;
                if ((5UL | (p_64 && g_73)))
                {
                    char l_196 = 0xBDL;
                    short *l_199 = &l_171;
                    unsigned *l_205 = &g_71;
                    unsigned **l_206 = &g_72;
                    (**l_166) = (g_81 >= g_185);
                    p_64 = (((((((((*g_91) = (*g_91)) != ((*l_166) = &p_64)) , ((p_67 > (g_59[3] & l_196)) == ((g_185 == l_197) & ((((*l_199) = (safe_unary_minus_func_uint16_t_u(((**l_166) > ((*g_72) ^ p_67))))) && g_59[2]) || p_67)))) ^ 0x7A6B5CAAL) && p_64) || g_71) & 0x990CL) , l_200[2]);
                    l_210 ^= ((safe_mod_func_int32_t_s_s(((0x01E5B4BAL > l_196) , (safe_lshift_func_uint8_t_u_u((&g_73 == ((*l_206) = l_205)), ((**l_166) > (safe_add_func_int16_t_s_s((g_185 = (safe_unary_minus_func_uint16_t_u(((void*)0 != &g_71)))), ((**l_166) && ((*p_63) = (*p_63))))))))), p_66)) || g_71);

                    ;
                }
                else
                {
                    if (p_66)
                        break;
                }
            }

            ;

        }

        ;

        for (g_73 = (-25); (g_73 >= 44); g_73 = safe_add_func_uint32_t_u_u(g_73, 5))
        {
            short *l_213 = &l_171;
            unsigned *l_214 = &l_188;
            unsigned **l_216 = &l_214;
            unsigned ***l_215 = &l_216;
            unsigned ***l_218 = &l_216;
            unsigned ****l_217 = &l_218;
            unsigned *l_225 = &g_226;
            int l_227 = 7L;
            unsigned *l_228 = &g_229;
            unsigned *l_231 = &g_71;
            int ****l_232 = &l_179;
            unsigned short l_275[4][4][7] = {{{0UL, 1UL, 0x6D35L, 0xFDF2L, 0x9F78L, 0xD57DL, 0x85EDL}, {0UL, 1UL, 0x6D35L, 0xFDF2L, 0x9F78L, 0xD57DL, 0x85EDL}, {0UL, 1UL, 0x6D35L, 0xFDF2L, 0x9F78L, 0xD57DL, 0x85EDL}, {0UL, 1UL, 0x6D35L, 0xFDF2L, 0x9F78L, 0xD57DL, 0x85EDL}}, {{0UL, 1UL, 0x6D35L, 0xFDF2L, 0x9F78L, 0xD57DL, 0x85EDL}, {0UL, 1UL, 0x6D35L, 0xFDF2L, 0x9F78L, 0xD57DL, 0x85EDL}, {0UL, 1UL, 0x6D35L, 0xFDF2L, 0x9F78L, 0xD57DL, 0x85EDL}, {0UL, 1UL, 0x6D35L, 0xFDF2L, 0x9F78L, 0xD57DL, 0x85EDL}}, {{0UL, 1UL, 0x6D35L, 0xFDF2L, 0x9F78L, 0xD57DL, 0x85EDL}, {0UL, 1UL, 0x6D35L, 0xFDF2L, 0x9F78L, 0xD57DL, 0x85EDL}, {0UL, 1UL, 0x6D35L, 0xFDF2L, 0x9F78L, 0xD57DL, 0x85EDL}, {0UL, 1UL, 0x6D35L, 0xFDF2L, 0x9F78L, 0xD57DL, 0x85EDL}}, {{0UL, 1UL, 0x6D35L, 0xFDF2L, 0x9F78L, 0xD57DL, 0x85EDL}, {0UL, 1UL, 0x6D35L, 0xFDF2L, 0x9F78L, 0xD57DL, 0x85EDL}, {0UL, 1UL, 0x6D35L, 0xFDF2L, 0x9F78L, 0xD57DL, 0x85EDL}, {0UL, 1UL, 0x6D35L, 0xFDF2L, 0x9F78L, 0xD57DL, 0x85EDL}}};
            int i, j, k;
        }
    }
    else
    {
        char l_281 = 0L;
        int l_282[5];
        int l_305 = 0x847B739BL;
        char l_354 = (-1L);
        int *l_390 = (void*)0;
        unsigned l_419 = 1UL;
        int i;
        for (i = 0; i < 5; i++)
            l_282[i] = 0xCACBB113L;
        l_281 = p_65;
        l_282[4] ^= p_65;
        if (p_64)
        {
            unsigned short l_297 = 0x0B88L;
            int l_312 = 0x03AF28B6L;
            int ***l_313 = &g_91;
            int *l_315 = &g_230[2][4][1];
            unsigned **l_375 = &g_72;
            for (p_64 = 0; (p_64 > 8); p_64++)
            {
                char l_291 = 9L;
                char **l_292 = (void*)0;
                char *l_294 = &g_131;
                char **l_293 = &l_294;
                char *l_296 = &l_281;
                char **l_295 = &l_296;
                int l_298 = 1L;
                char *l_299 = &g_131;
                short l_337 = 0x7C5AL;
                unsigned **l_374 = &g_72;
                unsigned ***l_373 = &l_374;
                unsigned ****l_372 = &l_373;
            }
            (*g_91) = &p_64;

            ;
            for (g_226 = 23; (g_226 >= 33); g_226++)
            {
                int *l_391 = &g_107;
                l_390 = ((*g_91) = &p_64);

                ;
                return l_391;



            }
        }
        else
        {
            unsigned short l_400 = 0xE2A1L;
            unsigned short l_411 = 0x9F96L;
            int **l_412[4];
            short *l_415 = (void*)0;
            short *l_416 = (void*)0;
            short *l_417[10] = {&g_185, &g_37, &g_185, &g_185, &g_37, &g_185, &g_37, &g_185, &g_185, &g_37};
            unsigned short *l_418[1][3][3] = {{{&g_155, &g_155, &g_155}, {&g_155, &g_155, &g_155}, {&g_155, &g_155, &g_155}}};
            int i, j, k;
            for (i = 0; i < 4; i++)
                l_412[i] = (void*)0;
            for (l_302 = 0; (l_302 == 10); l_302++)
            {
                int *l_403[6] = {&l_282[4], &l_282[4], &g_230[2][4][2], &l_282[4], &l_282[4], &g_230[2][4][2]};
                int i;
                for (p_64 = 0; (p_64 > (-18)); p_64 = safe_sub_func_int8_t_s_s(p_64, 5))
                {
                    unsigned *****l_399 = &g_317;
                    int *l_402 = &l_282[0];
                    for (g_229 = 5; (g_229 >= 1); g_229 = safe_sub_func_int32_t_s_s(g_229, 7))
                    {
                        l_398 = func_38(func_38((*g_91)));

                        ;
                        l_400 = (l_399 != (p_66 , &g_317));
                        l_401[7] = (void*)0;
                    }

                    ;

                    if ((255UL != (g_59[2] , p_67)))
                    {
                        return (*g_91);


                    }
                    else
                    {
                        int *l_404 = &g_230[2][4][2];
                        return l_404;


                    }
                }
                (*l_398) = (safe_rshift_func_uint16_t_u_u((g_71 > (p_67 ^ 0x2443A2CDL)), 10));
            }
            (*l_398) = l_305;
            (*g_91) = &p_64;

            ;
            p_64 = ((safe_add_func_uint16_t_u_u((safe_add_func_uint16_t_u_u((*l_398), 0UL)), ((((((l_411 |= p_64) == (l_412[0] != (void*)0)) , (safe_lshift_func_int16_t_s_u((g_185 = g_107), p_64))) & (g_155 = (p_65 <= (((-4L) != g_2) , p_66)))) >= g_57) < l_419))) ^ 1L);
        }

        ;
        (*g_91) = func_38(&l_282[1]);

        ;
    }

    ;


    return l_420;


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
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_15[i][j][k], "g_15[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_37, "g_37", print_hash_value);
    transparent_crc(g_57, "g_57", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_59[i], "g_59[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_71, "g_71", print_hash_value);
    transparent_crc(g_73, "g_73", print_hash_value);
    transparent_crc(g_81, "g_81", print_hash_value);
    transparent_crc(g_107, "g_107", print_hash_value);
    transparent_crc(g_129, "g_129", print_hash_value);
    transparent_crc(g_131, "g_131", print_hash_value);
    transparent_crc(g_155, "g_155", print_hash_value);
    transparent_crc(g_185, "g_185", print_hash_value);
    transparent_crc(g_226, "g_226", print_hash_value);
    transparent_crc(g_229, "g_229", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_230[i][j][k], "g_230[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_342, "g_342", print_hash_value);
    transparent_crc(g_514, "g_514", print_hash_value);
    transparent_crc(g_527, "g_527", print_hash_value);
    transparent_crc(g_532, "g_532", print_hash_value);
    transparent_crc(g_540, "g_540", print_hash_value);
    transparent_crc(g_620, "g_620", print_hash_value);
    transparent_crc(g_748, "g_748", print_hash_value);
    transparent_crc(g_767, "g_767", print_hash_value);
    transparent_crc(g_820, "g_820", print_hash_value);
    transparent_crc(g_898, "g_898", print_hash_value);
    transparent_crc(g_900, "g_900", print_hash_value);
    transparent_crc(g_971, "g_971", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_1112[i], "g_1112[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1113, "g_1113", print_hash_value);
    transparent_crc(g_1144, "g_1144", print_hash_value);
    transparent_crc(g_1340, "g_1340", print_hash_value);
    transparent_crc(g_1345, "g_1345", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 8; k++)
            {
                transparent_crc(g_1460[i][j][k], "g_1460[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_1483, "g_1483", print_hash_value);
    transparent_crc(g_1573, "g_1573", print_hash_value);
    transparent_crc(g_1585, "g_1585", print_hash_value);
    transparent_crc(g_1587, "g_1587", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
