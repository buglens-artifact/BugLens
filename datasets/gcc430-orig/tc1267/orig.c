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
   volatile unsigned f0;
   unsigned f1;
   short f2;
   int f3;
   unsigned f4;
};

union U1 {
   int f0;
   unsigned f1;
};


static int g_19 = 0xE4A90611L;
static int g_25 = 0x94D0F4F2L;
static int *g_43 = &g_25;
static int **g_42 = &g_43;
static int **g_44 = &g_43;
static unsigned g_52 = 0xDE905F4DL;
static int g_63 = (-3L);
static int *g_62 = &g_63;
static union U1 g_73 = {0x37D9CC13L};
static union U1 *g_72 = &g_73;
static unsigned g_76 = 0x42A26B13L;
static int g_83[1] = {(-4L)};
static union U1 *g_97 = &g_73;
static unsigned short g_102 = 65535UL;
static volatile struct S0 g_106 = {0xF1065C77L,1UL,0x621CL,0xA8392DDEL,0x9E236B79L};
static volatile union U1 ***g_111 = (void*)0;
static struct S0 g_120 = {0x3B65DD65L,0UL,0L,0xAFB16363L,1UL};
static struct S0 g_154[2][10] = {{{4294967294UL,4294967295UL,-6L,0xD9A5CC0BL,3UL}, {0xBFAE32FEL,0xCD9D43CFL,4L,3L,0xF7827581L}, {4294967294UL,4294967295UL,-6L,0xD9A5CC0BL,3UL}, {0xBFAE32FEL,0xCD9D43CFL,4L,3L,0xF7827581L}, {4294967294UL,4294967295UL,-6L,0xD9A5CC0BL,3UL}, {0xBFAE32FEL,0xCD9D43CFL,4L,3L,0xF7827581L}, {4294967294UL,4294967295UL,-6L,0xD9A5CC0BL,3UL}, {0xBFAE32FEL,0xCD9D43CFL,4L,3L,0xF7827581L}, {4294967294UL,4294967295UL,-6L,0xD9A5CC0BL,3UL}, {0xBFAE32FEL,0xCD9D43CFL,4L,3L,0xF7827581L}}, {{4294967294UL,4294967295UL,-6L,0xD9A5CC0BL,3UL}, {0xBFAE32FEL,0xCD9D43CFL,4L,3L,0xF7827581L}, {4294967294UL,4294967295UL,-6L,0xD9A5CC0BL,3UL}, {0xBFAE32FEL,0xCD9D43CFL,4L,3L,0xF7827581L}, {4294967294UL,4294967295UL,-6L,0xD9A5CC0BL,3UL}, {0xBFAE32FEL,0xCD9D43CFL,4L,3L,0xF7827581L}, {4294967294UL,4294967295UL,-6L,0xD9A5CC0BL,3UL}, {0xBFAE32FEL,0xCD9D43CFL,4L,3L,0xF7827581L}, {4294967294UL,4294967295UL,-6L,0xD9A5CC0BL,3UL}, {0xBFAE32FEL,0xCD9D43CFL,4L,3L,0xF7827581L}}};
static volatile struct S0 g_160 = {4294967295UL,0x984D6A5DL,0xCCDCL,0x4FE9C12CL,0x41FC7E89L};
static struct S0 *g_176 = &g_154[1][2];
static unsigned g_179 = 4294967288UL;
static int g_189 = 0xB652CE76L;
static int *g_188[7][2][10] = {{{&g_189, &g_189, &g_189, &g_189, &g_189, &g_189, &g_189, &g_189, &g_189, &g_189}, {&g_189, &g_189, &g_189, &g_189, &g_189, &g_189, &g_189, &g_189, &g_189, &g_189}}, {{&g_189, &g_189, &g_189, &g_189, &g_189, &g_189, &g_189, &g_189, &g_189, &g_189}, {&g_189, &g_189, &g_189, &g_189, &g_189, &g_189, &g_189, &g_189, &g_189, &g_189}}, {{&g_189, &g_189, &g_189, &g_189, &g_189, &g_189, &g_189, &g_189, &g_189, &g_189}, {&g_189, &g_189, &g_189, &g_189, &g_189, &g_189, &g_189, &g_189, &g_189, &g_189}}, {{&g_189, &g_189, &g_189, &g_189, &g_189, &g_189, &g_189, &g_189, &g_189, &g_189}, {&g_189, &g_189, &g_189, &g_189, &g_189, &g_189, &g_189, &g_189, &g_189, &g_189}}, {{&g_189, &g_189, &g_189, &g_189, &g_189, &g_189, &g_189, &g_189, &g_189, &g_189}, {&g_189, &g_189, &g_189, &g_189, &g_189, &g_189, &g_189, &g_189, &g_189, &g_189}}, {{&g_189, &g_189, &g_189, &g_189, &g_189, &g_189, &g_189, &g_189, &g_189, &g_189}, {&g_189, &g_189, &g_189, &g_189, &g_189, &g_189, &g_189, &g_189, &g_189, &g_189}}, {{&g_189, &g_189, &g_189, &g_189, &g_189, &g_189, &g_189, &g_189, &g_189, &g_189}, {&g_189, &g_189, &g_189, &g_189, &g_189, &g_189, &g_189, &g_189, &g_189, &g_189}}};
static int **g_187 = &g_188[2][0][8];
static unsigned char g_194 = 255UL;
static volatile struct S0 g_199[9] = {{0xF0AC7219L,0UL,0x8D05L,0x59454075L,0x1B478E88L}, {0xF0AC7219L,0UL,0x8D05L,0x59454075L,0x1B478E88L}, {0xF0AC7219L,0UL,0x8D05L,0x59454075L,0x1B478E88L}, {0xF0AC7219L,0UL,0x8D05L,0x59454075L,0x1B478E88L}, {0xF0AC7219L,0UL,0x8D05L,0x59454075L,0x1B478E88L}, {0xF0AC7219L,0UL,0x8D05L,0x59454075L,0x1B478E88L}, {0xF0AC7219L,0UL,0x8D05L,0x59454075L,0x1B478E88L}, {0xF0AC7219L,0UL,0x8D05L,0x59454075L,0x1B478E88L}, {0xF0AC7219L,0UL,0x8D05L,0x59454075L,0x1B478E88L}};
static volatile struct S0 g_249 = {0UL,1UL,-6L,0xD1D58CD3L,0x53B09113L};
static volatile struct S0 g_250 = {0xDA6E1C32L,0UL,0L,-1L,0xCC5604E1L};
static unsigned *g_279 = &g_179;
static unsigned **g_278[3] = {&g_279, &g_279, &g_279};
static unsigned short g_298[3][10][5] = {{{65530UL, 1UL, 65530UL, 0x7B01L, 0x7732L}, {65530UL, 1UL, 65530UL, 0x7B01L, 0x7732L}, {65530UL, 1UL, 65530UL, 0x7B01L, 0x7732L}, {65530UL, 1UL, 65530UL, 0x7B01L, 0x7732L}, {65530UL, 1UL, 65530UL, 0x7B01L, 0x7732L}, {65530UL, 1UL, 65530UL, 0x7B01L, 0x7732L}, {65530UL, 1UL, 65530UL, 0x7B01L, 0x7732L}, {65530UL, 1UL, 65530UL, 0x7B01L, 0x7732L}, {65530UL, 1UL, 65530UL, 0x7B01L, 0x7732L}, {65530UL, 1UL, 65530UL, 0x7B01L, 0x7732L}}, {{65530UL, 1UL, 65530UL, 0x7B01L, 0x7732L}, {65530UL, 1UL, 65530UL, 0x7B01L, 0x7732L}, {65530UL, 1UL, 65530UL, 0x7B01L, 0x7732L}, {65530UL, 1UL, 65530UL, 0x7B01L, 0x7732L}, {65530UL, 1UL, 65530UL, 0x7B01L, 0x7732L}, {65530UL, 1UL, 65530UL, 0x7B01L, 0x7732L}, {65530UL, 1UL, 65530UL, 0x7B01L, 0x7732L}, {65530UL, 1UL, 65530UL, 0x7B01L, 0x7732L}, {65530UL, 1UL, 65530UL, 0x7B01L, 0x7732L}, {65530UL, 1UL, 65530UL, 0x7B01L, 0x7732L}}, {{65530UL, 1UL, 65530UL, 0x7B01L, 0x7732L}, {65530UL, 1UL, 65530UL, 0x7B01L, 0x7732L}, {65530UL, 1UL, 65530UL, 0x7B01L, 0x7732L}, {65530UL, 1UL, 65530UL, 0x7B01L, 0x7732L}, {65530UL, 1UL, 65530UL, 0x7B01L, 0x7732L}, {65530UL, 1UL, 65530UL, 0x7B01L, 0x7732L}, {65530UL, 1UL, 65530UL, 0x7B01L, 0x7732L}, {65530UL, 1UL, 65530UL, 0x7B01L, 0x7732L}, {65530UL, 1UL, 65530UL, 0x7B01L, 0x7732L}, {65530UL, 1UL, 65530UL, 0x7B01L, 0x7732L}}};
static volatile struct S0 g_316 = {7UL,0x678A6686L,2L,0x9D018CBEL,0x46FA48EEL};
static volatile struct S0 g_320 = {0x5BAB2BB5L,4294967295UL,-3L,0x09A29ADEL,0x97EF2E56L};
static union U1 g_323 = {1L};
static struct S0 g_324 = {0xE85BEE4BL,4294967295UL,0xCFDDL,-7L,0xD85AF14DL};
static volatile struct S0 *g_328 = &g_106;
static struct S0 g_332 = {4294967293UL,0xA6587263L,-1L,-4L,0xA8D414C4L};
static struct S0 g_364 = {4294967295UL,4294967295UL,-1L,-4L,0x1DA1847BL};
static char g_409 = 0xFBL;
static int *g_415 = &g_19;
static int **g_414 = &g_415;
static short *g_420 = &g_332.f2;
static short **g_419 = &g_420;
static unsigned short *g_448 = &g_298[0][6][2];
static unsigned short **g_447 = &g_448;
static unsigned short ***g_446 = &g_447;
static unsigned short ****g_445 = &g_446;
static struct S0 g_476 = {0xEE0FBF53L,8UL,0x5382L,0xBE2860F0L,0xB80E5361L};
static struct S0 g_477 = {0x87CE9BD0L,1UL,0x8905L,0xEB9D772FL,0xA3647062L};
static volatile struct S0 g_504 = {0x347022D9L,1UL,0xB870L,0xBD43D7B5L,0UL};
static struct S0 g_514 = {0x7B5D03B6L,0UL,0xBA82L,0x7AE0B878L,0xB7660220L};
static volatile struct S0 g_540 = {0x1FAC4F53L,0xAEC78E0FL,0xAD68L,0L,4294967295UL};
static unsigned short g_554[4][3] = {{0x280DL, 65534UL, 0x4F22L}, {0x280DL, 65534UL, 0x4F22L}, {0x280DL, 65534UL, 0x4F22L}, {0x280DL, 65534UL, 0x4F22L}};
static volatile struct S0 g_557 = {4294967293UL,4294967293UL,-5L,0xD77E2F42L,0x649131DFL};
static struct S0 **g_575 = &g_176;
static struct S0 ***g_574 = &g_575;
static short g_645 = 1L;
static volatile unsigned char g_656[8][8] = {{0x02L, 251UL, 254UL, 7UL, 255UL, 0x08L, 0x08L, 255UL}, {0x02L, 251UL, 254UL, 7UL, 255UL, 0x08L, 0x08L, 255UL}, {0x02L, 251UL, 254UL, 7UL, 255UL, 0x08L, 0x08L, 255UL}, {0x02L, 251UL, 254UL, 7UL, 255UL, 0x08L, 0x08L, 255UL}, {0x02L, 251UL, 254UL, 7UL, 255UL, 0x08L, 0x08L, 255UL}, {0x02L, 251UL, 254UL, 7UL, 255UL, 0x08L, 0x08L, 255UL}, {0x02L, 251UL, 254UL, 7UL, 255UL, 0x08L, 0x08L, 255UL}, {0x02L, 251UL, 254UL, 7UL, 255UL, 0x08L, 0x08L, 255UL}};
static volatile unsigned char *g_655 = &g_656[5][7];
static volatile unsigned char **g_654 = &g_655;
static struct S0 g_657 = {0xC54A1BF9L,4294967294UL,-1L,0L,6UL};
static struct S0 g_711[1] = {{0x4C7C1E17L,4UL,7L,-1L,0UL}};
static struct S0 g_722 = {0UL,0x46ABE071L,1L,0xF0A5717CL,0UL};
static int g_734[9][6][4] = {{{(-8L), 0xA9C3ABB1L, 0x952CC96AL, 1L}, {(-8L), 0xA9C3ABB1L, 0x952CC96AL, 1L}, {(-8L), 0xA9C3ABB1L, 0x952CC96AL, 1L}, {(-8L), 0xA9C3ABB1L, 0x952CC96AL, 1L}, {(-8L), 0xA9C3ABB1L, 0x952CC96AL, 1L}, {(-8L), 0xA9C3ABB1L, 0x952CC96AL, 1L}}, {{(-8L), 0xA9C3ABB1L, 0x952CC96AL, 1L}, {(-8L), 0xA9C3ABB1L, 0x952CC96AL, 1L}, {(-8L), 0xA9C3ABB1L, 0x952CC96AL, 1L}, {(-8L), 0xA9C3ABB1L, 0x952CC96AL, 1L}, {(-8L), 0xA9C3ABB1L, 0x952CC96AL, 1L}, {(-8L), 0xA9C3ABB1L, 0x952CC96AL, 1L}}, {{(-8L), 0xA9C3ABB1L, 0x952CC96AL, 1L}, {(-8L), 0xA9C3ABB1L, 0x952CC96AL, 1L}, {(-8L), 0xA9C3ABB1L, 0x952CC96AL, 1L}, {(-8L), 0xA9C3ABB1L, 0x952CC96AL, 1L}, {(-8L), 0xA9C3ABB1L, 0x952CC96AL, 1L}, {(-8L), 0xA9C3ABB1L, 0x952CC96AL, 1L}}, {{(-8L), 0xA9C3ABB1L, 0x952CC96AL, 1L}, {(-8L), 0xA9C3ABB1L, 0x952CC96AL, 1L}, {(-8L), 0xA9C3ABB1L, 0x952CC96AL, 1L}, {(-8L), 0xA9C3ABB1L, 0x952CC96AL, 1L}, {(-8L), 0xA9C3ABB1L, 0x952CC96AL, 1L}, {(-8L), 0xA9C3ABB1L, 0x952CC96AL, 1L}}, {{(-8L), 0xA9C3ABB1L, 0x952CC96AL, 1L}, {(-8L), 0xA9C3ABB1L, 0x952CC96AL, 1L}, {(-8L), 0xA9C3ABB1L, 0x952CC96AL, 1L}, {(-8L), 0xA9C3ABB1L, 0x952CC96AL, 1L}, {(-8L), 0xA9C3ABB1L, 0x952CC96AL, 1L}, {(-8L), 0xA9C3ABB1L, 0x952CC96AL, 1L}}, {{(-8L), 0xA9C3ABB1L, 0x952CC96AL, 1L}, {(-8L), 0xA9C3ABB1L, 0x952CC96AL, 1L}, {(-8L), 0xA9C3ABB1L, 0x952CC96AL, 1L}, {(-8L), 0xA9C3ABB1L, 0x952CC96AL, 1L}, {(-8L), 0xA9C3ABB1L, 0x952CC96AL, 1L}, {(-8L), 0xA9C3ABB1L, 0x952CC96AL, 1L}}, {{(-8L), 0xA9C3ABB1L, 0x952CC96AL, 1L}, {(-8L), 0xA9C3ABB1L, 0x952CC96AL, 1L}, {(-8L), 0xA9C3ABB1L, 0x952CC96AL, 1L}, {(-8L), 0xA9C3ABB1L, 0x952CC96AL, 1L}, {(-8L), 0xA9C3ABB1L, 0x952CC96AL, 1L}, {(-8L), 0xA9C3ABB1L, 0x952CC96AL, 1L}}, {{(-8L), 0xA9C3ABB1L, 0x952CC96AL, 1L}, {(-8L), 0xA9C3ABB1L, 0x952CC96AL, 1L}, {(-8L), 0xA9C3ABB1L, 0x952CC96AL, 1L}, {(-8L), 0xA9C3ABB1L, 0x952CC96AL, 1L}, {(-8L), 0xA9C3ABB1L, 0x952CC96AL, 1L}, {(-8L), 0xA9C3ABB1L, 0x952CC96AL, 1L}}, {{(-8L), 0xA9C3ABB1L, 0x952CC96AL, 1L}, {(-8L), 0xA9C3ABB1L, 0x952CC96AL, 1L}, {(-8L), 0xA9C3ABB1L, 0x952CC96AL, 1L}, {(-8L), 0xA9C3ABB1L, 0x952CC96AL, 1L}, {(-8L), 0xA9C3ABB1L, 0x952CC96AL, 1L}, {(-8L), 0xA9C3ABB1L, 0x952CC96AL, 1L}}};
static volatile struct S0 g_742 = {0x5ACAC393L,0UL,-5L,0x91C12F71L,0x5E5A92FDL};
static unsigned short g_749[8] = {65529UL, 0x6057L, 65529UL, 0x6057L, 65529UL, 0x6057L, 65529UL, 0x6057L};
static volatile struct S0 g_788 = {0x1E06E546L,4294967291UL,0x0FE7L,0x95EE28ACL,0xA3BFABFCL};
static volatile int ****g_810 = (void*)0;
static unsigned char g_818[2] = {0xAFL, 0xAFL};
static struct S0 g_828 = {0x97681F37L,4294967290UL,-1L,0xE5149DDAL,0x2592C2BCL};
static struct S0 g_829 = {0x7CE59244L,1UL,2L,0L,0x19D4BB59L};
static volatile struct S0 g_832 = {4294967295UL,4294967291UL,0x163FL,6L,2UL};
static unsigned short g_867[2] = {0xA926L, 0xA926L};
static int **g_876 = &g_43;
static struct S0 g_887 = {1UL,1UL,-4L,0x8FA1AB3AL,4294967293UL};
static struct S0 g_891 = {9UL,0UL,0xAE28L,0x91C03533L,0x6FF16A91L};
static int **g_906 = &g_415;
static volatile struct S0 g_909 = {2UL,0xF71196C2L,-1L,0xA8258719L,0x6465DD64L};
static char g_950 = 0x2BL;
static unsigned g_968 = 0x3D97F245L;
static volatile struct S0 g_991 = {0UL,4294967290UL,9L,1L,5UL};



static char func_1(void);
static struct S0 func_2(unsigned p_3, int p_4, unsigned short p_5, unsigned short p_6, unsigned char p_7);
static char func_10(unsigned p_11, char p_12, unsigned char p_13, char p_14);
static unsigned func_15(union U1 p_16);
static union U1 func_17(unsigned p_18);
static int * func_20(unsigned p_21, int * p_22, int * p_23);
static int * func_26(unsigned short p_27, unsigned short p_28, int p_29);
static int ** func_34(int ** p_35, int p_36, int * p_37, int ** p_38, int * p_39);
static int * func_46(int p_47, int * p_48, union U1 p_49);
static unsigned func_56(int ** p_57, int p_58);
static char func_1(void)
{
    short *l_750[7] = {&g_722.f2, (void*)0, &g_722.f2, (void*)0, &g_722.f2, (void*)0, &g_722.f2};
    int l_751 = 0L;
    int l_849 = 0xFE3C1A91L;
    int **l_868 = &g_62;
    union U1 l_871 = {-7L};
    unsigned *l_872 = &g_514.f1;
    int ***l_873[7] = {(void*)0, (void*)0, &g_414, (void*)0, (void*)0, &g_414, (void*)0};
    int **l_877 = &g_188[1][0][7];
    int *l_878 = &g_83[0];
    int **l_879 = &g_62;
    int *l_903 = (void*)0;
    int *l_944 = &g_891.f3;
    struct S0 *l_955 = &g_476;
    unsigned char l_980 = 6UL;
    int *l_1001 = &g_887.f3;
    unsigned l_1003 = 0UL;
    short l_1055 = (-1L);
    unsigned short l_1061 = 0x774AL;
    int i;
    (*g_328) = func_2((safe_div_func_int8_t_s_s(((func_10(func_15(func_17(g_19)), ((l_751 = g_749[4]) && (safe_sub_func_uint16_t_u_u(65535UL, ((l_751 || l_751) || 0x240FL)))), ((***g_446) & 0xAE46L), g_179) <= l_849) < l_849), g_829.f2)), l_849, (**g_447), l_849, g_298[1][8][4]);



    ;

    ;
    ;

    (*l_868) = (*l_879);
    if (((*g_654) == (*g_654)))
    {
        int *l_880 = &g_324.f3;
        char l_885 = 0x46L;
        union U1 l_886 = {-10L};
        (*g_876) = l_880;

        ;
        (*g_187) = (void*)0;
        (*g_876) = l_880;
    }
    else
    {
        int *l_888 = &g_657.f3;
        unsigned l_896 = 4294967295UL;
        char *l_901 = &g_409;
        int **l_902 = &g_188[3][0][9];
        struct S0 *l_905 = &g_514;
        struct S0 **l_904 = &l_905;
        if (((&g_414 == (void*)0) >= (*g_655)))
        {
            (**g_575) = g_887;
            return g_120.f4;
        }
        else
        {
            unsigned char l_893 = 0UL;
            l_888 = l_888;
            (*g_328) = (*g_176);
            for (g_364.f1 = 12; (g_364.f1 > 57); g_364.f1 = safe_add_func_uint32_t_u_u(g_364.f1, 8))
            {
                short *l_892 = (void*)0;
                (***g_574) = g_891;
                (*g_876) = l_888;

                ;
                if ((*l_888))
                    continue;
            }


            (*g_187) = (void*)0;
        }


        (*l_878) = ((safe_div_func_uint16_t_u_u((*g_448), (*l_888))) == (*l_878));
        (*l_877) = &g_63;
        (*l_904) = ((*g_575) = (*g_575));

        ;
    }


    if (((&g_415 != (g_906 = &g_415)) != ((void*)0 == (*g_574))))
    {
        unsigned l_907 = 0UL;
        int l_908 = 0x8AF255C8L;
        unsigned l_910[8];
        short **l_924[3][10] = {{&l_750[5], &g_420, &l_750[5], &l_750[6], &g_420, &l_750[4], &l_750[5], &l_750[5], &l_750[4], &g_420}, {&l_750[5], &g_420, &l_750[5], &l_750[6], &g_420, &l_750[4], &l_750[5], &l_750[5], &l_750[4], &g_420}, {&l_750[5], &g_420, &l_750[5], &l_750[6], &g_420, &l_750[4], &l_750[5], &l_750[5], &l_750[4], &g_420}};
        int l_983 = 0x02CD5EC8L;
        short l_984 = 0L;
        unsigned short l_987 = 6UL;
        int **l_996 = &g_43;
        union U1 l_1032 = {8L};
        int i, j;
        for (i = 0; i < 8; i++)
            l_910[i] = 0x791B6AA1L;
        l_908 = l_907;
        l_908 = ((*g_655) | ((l_908 == (*l_878)) || g_83[0]));
        (***g_574) = g_909;
        if (l_910[7])
        {
            int *l_913 = &g_722.f3;
            short l_932 = 0L;
            unsigned short ***l_958 = &g_447;
            union U1 l_964 = {0L};
            short l_971 = 0x2F2DL;
            unsigned l_988 = 4294967291UL;
            int *l_1002[7] = {(void*)0, &g_657.f3, (void*)0, &g_657.f3, (void*)0, &g_657.f3, (void*)0};
            char l_1018 = (-1L);
            int i;
            if (((((*g_419) = l_750[2]) == (void*)0) > 0UL))
            {
                int l_917 = 1L;
                short ***l_925 = &g_419;
                short **l_927 = &l_750[1];
                short ***l_926 = &l_927;
                (*l_879) = l_913;

                ;
                for (g_477.f3 = 0; (g_477.f3 != 15); g_477.f3 = safe_add_func_uint8_t_u_u(g_477.f3, 9))
                {
                    unsigned *l_916 = &g_828.f4;
                    char *l_918[2][6] = {{&g_409, &g_409, &g_409, &g_409, &g_409, &g_409}, {&g_409, &g_409, &g_409, &g_409, &g_409, &g_409}};
                    int l_919 = (-4L);
                    int i, j;
                    (*g_876) = &l_908;

                    ;
                }


                if ((((*l_925) = l_924[1][9]) == ((*l_926) = &g_420)))
                {
                    unsigned l_931[10];
                    unsigned char *l_943 = &g_194;
                    int i;
                    for (i = 0; i < 10; i++)
                        l_931[i] = 0xF555FF2CL;
                    if ((*l_913))
                    {
                        union U1 l_928 = {0xD998EE40L};
                        (*g_876) = &l_917;

                        ;
                        (*g_574) = (*g_574);
                        (*g_43) = (*l_913);
                        (*g_876) = ((*l_877) = &l_917);


                    }
                    else
                    {
                        (*l_878) = (safe_rshift_func_int16_t_s_s(l_931[7], 8));
                        (*l_878) = l_932;
                        return g_557.f0;



                    }

                    ;

                    (*l_879) = l_944;

                    ;
                    (*g_187) = &l_908;


                }
                else
                {
                    int l_949 = (-4L);
                    unsigned char *l_951 = &g_818[0];
                    for (g_323.f0 = 12; (g_323.f0 <= (-9)); g_323.f0 = safe_sub_func_int32_t_s_s(g_323.f0, 3))
                    {
                        if ((*g_62))
                            break;
                    }
                    (*l_913) = ((safe_add_func_uint32_t_u_u(((&g_415 != &g_415) ^ (-10L)), l_949)) == func_10((!((((*l_951) = (((***g_446) != g_950) > (*g_62))) != 0xD3L) >= (((safe_unary_minus_func_uint8_t_u((**g_654))) > g_554[1][1]) < l_949))), g_324.f1, g_154[1][6].f4, g_76));
                    for (g_120.f3 = 0; (g_120.f3 <= 1); g_120.f3 += 1)
                    {
                        int i;
                        return g_818[g_120.f3];



                    }
                }


                ;

                ;
                ;
            }
            else
            {
                int l_959 = 0xFCAE2FFFL;
                for (g_63 = 0; (g_63 < (-1)); g_63 = safe_sub_func_uint16_t_u_u(g_63, 6))
                {
                    struct S0 *l_956 = &g_120;
                    for (g_477.f1 = 0; (g_477.f1 <= 1); g_477.f1 += 1)
                    {
                        int i;
                        (*g_176) = (*g_176);
                        l_956 = l_955;

                        ;
                        return g_818[g_477.f1];
                    }
                    (*l_955) = func_2((safe_unary_minus_func_uint16_t_u((l_958 != (void*)0))), (*l_878), l_910[0], l_959, (*g_655));
                }
            }


            ;

            ;
            ;
            if ((safe_sub_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_u((*g_448), (*l_913))), 4L)))
            {
                int l_967 = (-10L);
                int *l_969[3][7][6] = {{{&g_63, (void*)0, &g_83[0], &g_711[0].f3, (void*)0, &g_154[1][6].f3}, {&g_63, (void*)0, &g_83[0], &g_711[0].f3, (void*)0, &g_154[1][6].f3}, {&g_63, (void*)0, &g_83[0], &g_711[0].f3, (void*)0, &g_154[1][6].f3}, {&g_63, (void*)0, &g_83[0], &g_711[0].f3, (void*)0, &g_154[1][6].f3}, {&g_63, (void*)0, &g_83[0], &g_711[0].f3, (void*)0, &g_154[1][6].f3}, {&g_63, (void*)0, &g_83[0], &g_711[0].f3, (void*)0, &g_154[1][6].f3}, {&g_63, (void*)0, &g_83[0], &g_711[0].f3, (void*)0, &g_154[1][6].f3}}, {{&g_63, (void*)0, &g_83[0], &g_711[0].f3, (void*)0, &g_154[1][6].f3}, {&g_63, (void*)0, &g_83[0], &g_711[0].f3, (void*)0, &g_154[1][6].f3}, {&g_63, (void*)0, &g_83[0], &g_711[0].f3, (void*)0, &g_154[1][6].f3}, {&g_63, (void*)0, &g_83[0], &g_711[0].f3, (void*)0, &g_154[1][6].f3}, {&g_63, (void*)0, &g_83[0], &g_711[0].f3, (void*)0, &g_154[1][6].f3}, {&g_63, (void*)0, &g_83[0], &g_711[0].f3, (void*)0, &g_154[1][6].f3}, {&g_63, (void*)0, &g_83[0], &g_711[0].f3, (void*)0, &g_154[1][6].f3}}, {{&g_63, (void*)0, &g_83[0], &g_711[0].f3, (void*)0, &g_154[1][6].f3}, {&g_63, (void*)0, &g_83[0], &g_711[0].f3, (void*)0, &g_154[1][6].f3}, {&g_63, (void*)0, &g_83[0], &g_711[0].f3, (void*)0, &g_154[1][6].f3}, {&g_63, (void*)0, &g_83[0], &g_711[0].f3, (void*)0, &g_154[1][6].f3}, {&g_63, (void*)0, &g_83[0], &g_711[0].f3, (void*)0, &g_154[1][6].f3}, {&g_63, (void*)0, &g_83[0], &g_711[0].f3, (void*)0, &g_154[1][6].f3}, {&g_63, (void*)0, &g_83[0], &g_711[0].f3, (void*)0, &g_154[1][6].f3}}};
                unsigned l_1019 = 0UL;
                int i, j, k;
                for (g_829.f2 = 0; (g_829.f2 == 10); g_829.f2++)
                {
                    int l_970 = (-7L);
                    if (l_967)
                        break;
                    (*g_876) = l_969[0][6][3];

                    ;
                    (*g_176) = func_2(l_970, (l_971 = (*l_878)), (0x3B8FF634L | (safe_lshift_func_uint16_t_u_s((safe_add_func_uint32_t_u_u(((safe_div_func_uint16_t_u_u(l_908, g_364.f1)) ^ l_970), (l_983 = (safe_mul_func_int16_t_s_s((l_980 || 1L), ((safe_rshift_func_uint16_t_u_u((****g_445), l_908)) || l_970)))))), g_832.f3))), l_984, g_722.f1);
                    (*l_955) = (*g_328);
                }


                for (g_887.f3 = 9; (g_887.f3 != (-19)); --g_887.f3)
                {
                    int l_989 = 7L;
                    unsigned short **l_990 = &g_448;
                    int **l_993 = &l_913;
                    union U1 l_1004 = {1L};
                    union U1 *l_1005 = (void*)0;
                    union U1 *l_1006 = &g_73;
                    short *l_1013 = &g_657.f2;
                    unsigned char *l_1016 = &g_818[0];
                    char *l_1017[5] = {(void*)0, &g_950, (void*)0, &g_950, (void*)0};
                    int i;
                    if (l_987)
                    {
                        (*l_913) = (l_988 | l_989);
                        (*l_913) = (5L || ((**g_445) == l_990));
                        if (l_989)
                            break;
                    }
                    else
                    {
                        unsigned char l_992 = 254UL;
                        (*g_44) = &l_908;

                        ;
                        (*g_176) = g_991;
                        (*l_944) = ((l_992 | l_910[7]) | func_15(l_871));


                    }
                    if ((((*l_913) = (-4L)) == (**g_447)))
                    {
                        (*l_877) = (*l_868);
                    }
                    else
                    {
                        (*l_868) = (*l_993);

                        ;
                    }
                    if (((~(*l_1001)) & (((*l_913) = ((*l_878) = func_10(((4294967293UL == ((*l_878) = (*l_944))) ^ (g_476.f4 > ((safe_lshift_func_uint8_t_u_u((safe_add_func_int16_t_s_s((0x7EL > (safe_mul_func_int8_t_s_s((~(l_1013 == (g_420 = l_750[2]))), (g_950 = (safe_add_func_uint8_t_u_u(((*l_1016) = 247UL), g_324.f4)))))), (*g_448))), (*g_655))) > l_1018))), g_154[1][6].f3, (**l_993), g_514.f2))) ^ l_1019)))
                    {
                        (*l_996) = (*l_993);

                        ;
                    }
                    else
                    {
                        return g_249.f2;




                    }

                    ;
                }


                (*l_878) = (safe_div_func_uint8_t_u_u((*g_655), 0x36L));
            }
            else
            {
                unsigned short l_1027 = 0xFA65L;
                int *l_1034[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_1034[i] = (void*)0;
                for (l_1003 = 23; (l_1003 >= 4); l_1003 = safe_sub_func_int32_t_s_s(l_1003, 1))
                {
                    unsigned char *l_1033[5][10] = {{&g_194, &l_980, (void*)0, &l_980, (void*)0, &g_818[0], (void*)0, &l_980, (void*)0, &l_980}, {&g_194, &l_980, (void*)0, &l_980, (void*)0, &g_818[0], (void*)0, &l_980, (void*)0, &l_980}, {&g_194, &l_980, (void*)0, &l_980, (void*)0, &g_818[0], (void*)0, &l_980, (void*)0, &l_980}, {&g_194, &l_980, (void*)0, &l_980, (void*)0, &g_818[0], (void*)0, &l_980, (void*)0, &l_980}, {&g_194, &l_980, (void*)0, &l_980, (void*)0, &g_818[0], (void*)0, &l_980, (void*)0, &l_980}};
                    int i, j;
                    (*l_877) = (void*)0;
                    (*l_868) = (*l_879);
                }
            }



        }
        else
        {
            int l_1038 = 5L;
            int l_1062 = 0x57711286L;
            for (l_908 = 0; (l_908 <= 0); l_908 += 1)
            {
                int *l_1035 = &g_722.f3;
                unsigned short **l_1042 = &g_448;
                char l_1053 = 1L;
                l_1035 = ((*g_876) = (*l_868));

                ;
                ;
                for (g_19 = 0; (g_19 <= 1); g_19 += 1)
                {
                    union U1 **l_1036 = &g_72;
                    int *l_1037 = &g_657.f3;
                    unsigned short **l_1041 = (void*)0;
                    (*l_1036) = &l_871;

                    ;
                    (*l_868) = l_1037;

                    ;
                    if ((*l_1037))
                        break;
                    for (g_514.f1 = 0; (g_514.f1 <= 6); g_514.f1 += 1)
                    {
                        unsigned char *l_1054 = &g_194;
                        union U1 l_1056 = {0x3A872A44L};
                        int i, j, k;
                        g_154[g_19][(l_908 + 6)] = g_154[(l_908 + 1)][(g_514.f1 + 2)];
                        g_188[(l_908 + 5)][g_19][(l_908 + 4)] = (*g_876);
                    }
                }
                for (g_657.f3 = 1; (g_657.f3 >= 0); g_657.f3 -= 1)
                {
                    unsigned l_1060 = 7UL;
                    int i, j;
                    for (g_189 = 6; (g_189 >= 0); g_189 -= 1)
                    {
                        unsigned char *l_1058 = &l_980;
                        unsigned char **l_1057 = &l_1058;
                        unsigned short *****l_1059 = &g_445;
                        int i;
                        g_83[l_908] = (((*g_654) != ((*l_1057) = &l_980)) | (&g_445 == l_1059));
                        if (l_1060)
                            break;
                    }
                    g_154[l_908][(l_908 + 4)] = g_154[l_908][g_657.f3];
                    if (l_1061)
                        continue;
                    for (l_751 = 0; (l_751 <= 0); l_751 += 1)
                    {
                        (*l_868) = (*g_876);
                    }
                }
            }

            ;


            (*g_44) = (*l_879);

            ;
        }


        ;


        ;
        ;
    }
    else
    {
        int l_1063 = 3L;
        (*l_1001) = l_1063;
        (*l_879) = &g_63;

        ;
    }


    ;


    ;
    ;
    return (*l_944);




}







static struct S0 func_2(unsigned p_3, int p_4, unsigned short p_5, unsigned short p_6, unsigned char p_7)
{
    char l_854[9][10] = {{3L, 1L, (-2L), 1L, (-9L), (-4L), (-9L), 1L, (-2L), 1L}, {3L, 1L, (-2L), 1L, (-9L), (-4L), (-9L), 1L, (-2L), 1L}, {3L, 1L, (-2L), 1L, (-9L), (-4L), (-9L), 1L, (-2L), 1L}, {3L, 1L, (-2L), 1L, (-9L), (-4L), (-9L), 1L, (-2L), 1L}, {3L, 1L, (-2L), 1L, (-9L), (-4L), (-9L), 1L, (-2L), 1L}, {3L, 1L, (-2L), 1L, (-9L), (-4L), (-9L), 1L, (-2L), 1L}, {3L, 1L, (-2L), 1L, (-9L), (-4L), (-9L), 1L, (-2L), 1L}, {3L, 1L, (-2L), 1L, (-9L), (-4L), (-9L), 1L, (-2L), 1L}, {3L, 1L, (-2L), 1L, (-9L), (-4L), (-9L), 1L, (-2L), 1L}};
    struct S0 ***l_857 = (void*)0;
    struct S0 ****l_858 = &l_857;
    struct S0 ***l_859[3][8] = {{&g_575, &g_575, (void*)0, &g_575, &g_575, &g_575, &g_575, &g_575}, {&g_575, &g_575, (void*)0, &g_575, &g_575, &g_575, &g_575, &g_575}, {&g_575, &g_575, (void*)0, &g_575, &g_575, &g_575, &g_575, &g_575}};
    struct S0 ****l_860 = (void*)0;
    struct S0 ****l_861 = &l_859[1][1];
    int **l_862 = &g_62;
    int *l_863 = &g_657.f3;
    int **l_864 = &l_863;
    int ***l_865 = (void*)0;
    int ***l_866 = &l_862;
    int i, j;
    (**l_864) = (safe_add_func_uint32_t_u_u((((safe_mul_func_int8_t_s_s((l_854[1][9] | (safe_sub_func_int32_t_s_s((l_854[1][9] | (((*l_858) = l_857) != ((*l_861) = l_859[1][1]))), (g_867[0] = p_3)))), g_514.f3)) && 0x83L) >= p_7), (**l_864)));
    return (**g_575);
}







static char func_10(unsigned p_11, char p_12, unsigned char p_13, char p_14)
{
    char l_761 = 0L;
    unsigned l_770 = 0xD55331E1L;
    int l_785 = 2L;
    unsigned *l_819[8][8] = {{&g_364.f1, (void*)0, (void*)0, (void*)0, (void*)0, &g_154[1][6].f1, (void*)0, (void*)0}, {&g_364.f1, (void*)0, (void*)0, (void*)0, (void*)0, &g_154[1][6].f1, (void*)0, (void*)0}, {&g_364.f1, (void*)0, (void*)0, (void*)0, (void*)0, &g_154[1][6].f1, (void*)0, (void*)0}, {&g_364.f1, (void*)0, (void*)0, (void*)0, (void*)0, &g_154[1][6].f1, (void*)0, (void*)0}, {&g_364.f1, (void*)0, (void*)0, (void*)0, (void*)0, &g_154[1][6].f1, (void*)0, (void*)0}, {&g_364.f1, (void*)0, (void*)0, (void*)0, (void*)0, &g_154[1][6].f1, (void*)0, (void*)0}, {&g_364.f1, (void*)0, (void*)0, (void*)0, (void*)0, &g_154[1][6].f1, (void*)0, (void*)0}, {&g_364.f1, (void*)0, (void*)0, (void*)0, (void*)0, &g_154[1][6].f1, (void*)0, (void*)0}};
    union U1 *l_830 = (void*)0;
    union U1 l_847 = {-1L};
    int *l_848 = &g_514.f3;
    int i, j;
    for (g_52 = 0; (g_52 == 49); g_52++)
    {
        unsigned short *****l_800 = &g_445;
        char l_801 = 8L;
        short l_807 = 0x8110L;
        for (g_323.f0 = 0; (g_323.f0 <= (-24)); --g_323.f0)
        {
            unsigned char *l_759 = (void*)0;
            unsigned char **l_758 = &l_759;
            int l_760[7] = {0L, (-1L), 0L, (-1L), 0L, (-1L), 0L};
            int i;
            l_760[3] = (((*l_758) = &g_194) != (*g_654));

            ;
            for (g_657.f2 = 0; (g_657.f2 <= 1); g_657.f2 += 1)
            {
                int *l_762 = &g_154[1][6].f3;
                (*l_762) = l_761;
            }
        }
        if (p_13)
            break;
        for (g_102 = 0; (g_102 <= 1); g_102 += 1)
        {
            union U1 l_769[9][2][10] = {{{{0x1189707FL}, {0xF1F20193L}, {-3L}, {0x1D7C0417L}, {0x037601E5L}, {-1L}, {9L}, {-2L}, {0x17146FDBL}, {0x12FEEED0L}}, {{0x1189707FL}, {0xF1F20193L}, {-3L}, {0x1D7C0417L}, {0x037601E5L}, {-1L}, {9L}, {-2L}, {0x17146FDBL}, {0x12FEEED0L}}}, {{{0x1189707FL}, {0xF1F20193L}, {-3L}, {0x1D7C0417L}, {0x037601E5L}, {-1L}, {9L}, {-2L}, {0x17146FDBL}, {0x12FEEED0L}}, {{0x1189707FL}, {0xF1F20193L}, {-3L}, {0x1D7C0417L}, {0x037601E5L}, {-1L}, {9L}, {-2L}, {0x17146FDBL}, {0x12FEEED0L}}}, {{{0x1189707FL}, {0xF1F20193L}, {-3L}, {0x1D7C0417L}, {0x037601E5L}, {-1L}, {9L}, {-2L}, {0x17146FDBL}, {0x12FEEED0L}}, {{0x1189707FL}, {0xF1F20193L}, {-3L}, {0x1D7C0417L}, {0x037601E5L}, {-1L}, {9L}, {-2L}, {0x17146FDBL}, {0x12FEEED0L}}}, {{{0x1189707FL}, {0xF1F20193L}, {-3L}, {0x1D7C0417L}, {0x037601E5L}, {-1L}, {9L}, {-2L}, {0x17146FDBL}, {0x12FEEED0L}}, {{0x1189707FL}, {0xF1F20193L}, {-3L}, {0x1D7C0417L}, {0x037601E5L}, {-1L}, {9L}, {-2L}, {0x17146FDBL}, {0x12FEEED0L}}}, {{{0x1189707FL}, {0xF1F20193L}, {-3L}, {0x1D7C0417L}, {0x037601E5L}, {-1L}, {9L}, {-2L}, {0x17146FDBL}, {0x12FEEED0L}}, {{0x1189707FL}, {0xF1F20193L}, {-3L}, {0x1D7C0417L}, {0x037601E5L}, {-1L}, {9L}, {-2L}, {0x17146FDBL}, {0x12FEEED0L}}}, {{{0x1189707FL}, {0xF1F20193L}, {-3L}, {0x1D7C0417L}, {0x037601E5L}, {-1L}, {9L}, {-2L}, {0x17146FDBL}, {0x12FEEED0L}}, {{0x1189707FL}, {0xF1F20193L}, {-3L}, {0x1D7C0417L}, {0x037601E5L}, {-1L}, {9L}, {-2L}, {0x17146FDBL}, {0x12FEEED0L}}}, {{{0x1189707FL}, {0xF1F20193L}, {-3L}, {0x1D7C0417L}, {0x037601E5L}, {-1L}, {9L}, {-2L}, {0x17146FDBL}, {0x12FEEED0L}}, {{0x1189707FL}, {0xF1F20193L}, {-3L}, {0x1D7C0417L}, {0x037601E5L}, {-1L}, {9L}, {-2L}, {0x17146FDBL}, {0x12FEEED0L}}}, {{{0x1189707FL}, {0xF1F20193L}, {-3L}, {0x1D7C0417L}, {0x037601E5L}, {-1L}, {9L}, {-2L}, {0x17146FDBL}, {0x12FEEED0L}}, {{0x1189707FL}, {0xF1F20193L}, {-3L}, {0x1D7C0417L}, {0x037601E5L}, {-1L}, {9L}, {-2L}, {0x17146FDBL}, {0x12FEEED0L}}}, {{{0x1189707FL}, {0xF1F20193L}, {-3L}, {0x1D7C0417L}, {0x037601E5L}, {-1L}, {9L}, {-2L}, {0x17146FDBL}, {0x12FEEED0L}}, {{0x1189707FL}, {0xF1F20193L}, {-3L}, {0x1D7C0417L}, {0x037601E5L}, {-1L}, {9L}, {-2L}, {0x17146FDBL}, {0x12FEEED0L}}}};
            int *l_789 = &g_83[0];
            union U1 *l_805 = &l_769[0][1][4];
            int l_843 = 0x553178A9L;
            int i, j, k;
            l_785 = (((safe_rshift_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u((safe_add_func_uint32_t_u_u(l_769[0][1][4].f1, 0x97F7DD7EL)), l_761)), 2)) && l_770) && ((safe_lshift_func_int16_t_s_s((safe_add_func_int16_t_s_s(l_761, (safe_lshift_func_uint8_t_u_u(((safe_mul_func_uint16_t_u_u(l_770, ((safe_lshift_func_int8_t_s_u(l_770, (((safe_div_func_int8_t_s_s(0xDFL, (**g_654))) != 0x44L) == 0x84918103L))) & 1L))) < 0UL), 2)))), p_12)) != 255UL));
            for (g_120.f3 = 0; (g_120.f3 <= 1); g_120.f3 += 1)
            {
                int l_786 = 0x9DE1A5D5L;
                unsigned short *l_806[10][8][1] = {{{(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}}, {{(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}}, {{(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}}, {{(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}}, {{(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}}, {{(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}}, {{(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}}, {{(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}}, {{(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}}, {{(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}}};
                int ***l_809 = &g_187;
                int ****l_808 = &l_809;
                char *l_813 = (void*)0;
                char *l_814 = &l_761;
                unsigned short *l_815 = &g_749[6];
                unsigned char *l_816 = &g_194;
                unsigned char *l_817 = &g_818[0];
                unsigned **l_820 = (void*)0;
                unsigned *l_821[1][3][2];
                short l_824 = (-9L);
                int l_844[8] = {0xD66F2312L, 3L, 0xD66F2312L, 3L, 0xD66F2312L, 3L, 0xD66F2312L, 3L};
                int i, j, k;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 3; j++)
                    {
                        for (k = 0; k < 2; k++)
                            l_821[i][j][k] = (void*)0;
                    }
                }
                l_786 = 0L;
                if (p_13)
                {
                    if ((l_785 = (0xFA3FL >= l_769[0][1][4].f0)))
                    {
                        int l_787 = 1L;
                        int i, j;
                        if (l_787)
                            break;
                        (*g_44) = &l_786;

                        ;
                        g_154[g_102][(g_120.f3 + 4)] = g_788;
                        (*g_328) = (*g_328);
                    }
                    else
                    {
                        int *l_790 = &g_332.f3;
                        (*g_187) = l_789;
                        (*g_187) = l_790;
                        (*g_44) = &l_785;

                        ;
                        if (p_11)
                            break;
                    }

                    ;
                }
                else
                {
                    unsigned char *l_797 = &g_194;
                    union U1 *l_803 = &g_323;
                    union U1 **l_804[5][3][4] = {{{&g_72, &g_72, (void*)0, &l_803}, {&g_72, &g_72, (void*)0, &l_803}, {&g_72, &g_72, (void*)0, &l_803}}, {{&g_72, &g_72, (void*)0, &l_803}, {&g_72, &g_72, (void*)0, &l_803}, {&g_72, &g_72, (void*)0, &l_803}}, {{&g_72, &g_72, (void*)0, &l_803}, {&g_72, &g_72, (void*)0, &l_803}, {&g_72, &g_72, (void*)0, &l_803}}, {{&g_72, &g_72, (void*)0, &l_803}, {&g_72, &g_72, (void*)0, &l_803}, {&g_72, &g_72, (void*)0, &l_803}}, {{&g_72, &g_72, (void*)0, &l_803}, {&g_72, &g_72, (void*)0, &l_803}, {&g_72, &g_72, (void*)0, &l_803}}};
                    int i, j, k;
                    (*g_44) = l_789;

                    ;
                    if ((safe_mul_func_uint16_t_u_u(0x379BL, (p_12 && (safe_mod_func_uint8_t_u_u(((*l_797) = (p_14 || (safe_mod_func_int16_t_s_s((p_13 || (****g_445)), l_785)))), (safe_lshift_func_uint8_t_u_s((**g_654), (l_800 == l_800)))))))))
                    {
                        int *l_802 = &g_722.f3;
                        (*g_187) = l_802;
                        (*g_43) = p_13;
                    }
                    else
                    {
                        if (p_13)
                            break;
                    }
                    l_805 = l_803;

                    ;
                }

                ;
                (*g_187) = l_789;
            }

            ;
        }
    }


    (*l_848) = (~l_847.f1);
    return p_12;


}







static unsigned func_15(union U1 p_16)
{
    int l_619 = 5L;
    int l_620 = 0x829DF67CL;
    int l_621 = 0x66AC97FFL;
    int *l_666 = (void*)0;
    unsigned l_671 = 0x5A3EF7C1L;
    unsigned **l_679 = &g_279;
    unsigned short l_680[6] = {9UL, 9UL, 0x28BEL, 9UL, 9UL, 0x28BEL};
    int **l_700 = &g_415;
    unsigned short l_728 = 0x3C29L;
    union U1 l_730[9] = {{0x44112CF2L}, {0x44112CF2L}, {0xC5536F4FL}, {0x44112CF2L}, {0x44112CF2L}, {0xC5536F4FL}, {0x44112CF2L}, {0x44112CF2L}, {0xC5536F4FL}};
    unsigned *l_748 = (void*)0;
    int i;
    l_620 = ((-10L) & l_619);
    if (((l_620 != l_620) & (l_621 = (-6L))))
    {
        int *l_622 = &g_83[0];
        unsigned **l_653 = &g_279;
        l_622 = &l_621;

        ;
        for (g_332.f2 = 0; (g_332.f2 <= 0); g_332.f2 += 1)
        {
            char l_623 = 0x11L;
            int *l_630[8][8][4] = {{{&g_476.f3, &g_83[0], &g_324.f3, &g_83[0]}, {&g_476.f3, &g_83[0], &g_324.f3, &g_83[0]}, {&g_476.f3, &g_83[0], &g_324.f3, &g_83[0]}, {&g_476.f3, &g_83[0], &g_324.f3, &g_83[0]}, {&g_476.f3, &g_83[0], &g_324.f3, &g_83[0]}, {&g_476.f3, &g_83[0], &g_324.f3, &g_83[0]}, {&g_476.f3, &g_83[0], &g_324.f3, &g_83[0]}, {&g_476.f3, &g_83[0], &g_324.f3, &g_83[0]}}, {{&g_476.f3, &g_83[0], &g_324.f3, &g_83[0]}, {&g_476.f3, &g_83[0], &g_324.f3, &g_83[0]}, {&g_476.f3, &g_83[0], &g_324.f3, &g_83[0]}, {&g_476.f3, &g_83[0], &g_324.f3, &g_83[0]}, {&g_476.f3, &g_83[0], &g_324.f3, &g_83[0]}, {&g_476.f3, &g_83[0], &g_324.f3, &g_83[0]}, {&g_476.f3, &g_83[0], &g_324.f3, &g_83[0]}, {&g_476.f3, &g_83[0], &g_324.f3, &g_83[0]}}, {{&g_476.f3, &g_83[0], &g_324.f3, &g_83[0]}, {&g_476.f3, &g_83[0], &g_324.f3, &g_83[0]}, {&g_476.f3, &g_83[0], &g_324.f3, &g_83[0]}, {&g_476.f3, &g_83[0], &g_324.f3, &g_83[0]}, {&g_476.f3, &g_83[0], &g_324.f3, &g_83[0]}, {&g_476.f3, &g_83[0], &g_324.f3, &g_83[0]}, {&g_476.f3, &g_83[0], &g_324.f3, &g_83[0]}, {&g_476.f3, &g_83[0], &g_324.f3, &g_83[0]}}, {{&g_476.f3, &g_83[0], &g_324.f3, &g_83[0]}, {&g_476.f3, &g_83[0], &g_324.f3, &g_83[0]}, {&g_476.f3, &g_83[0], &g_324.f3, &g_83[0]}, {&g_476.f3, &g_83[0], &g_324.f3, &g_83[0]}, {&g_476.f3, &g_83[0], &g_324.f3, &g_83[0]}, {&g_476.f3, &g_83[0], &g_324.f3, &g_83[0]}, {&g_476.f3, &g_83[0], &g_324.f3, &g_83[0]}, {&g_476.f3, &g_83[0], &g_324.f3, &g_83[0]}}, {{&g_476.f3, &g_83[0], &g_324.f3, &g_83[0]}, {&g_476.f3, &g_83[0], &g_324.f3, &g_83[0]}, {&g_476.f3, &g_83[0], &g_324.f3, &g_83[0]}, {&g_476.f3, &g_83[0], &g_324.f3, &g_83[0]}, {&g_476.f3, &g_83[0], &g_324.f3, &g_83[0]}, {&g_476.f3, &g_83[0], &g_324.f3, &g_83[0]}, {&g_476.f3, &g_83[0], &g_324.f3, &g_83[0]}, {&g_476.f3, &g_83[0], &g_324.f3, &g_83[0]}}, {{&g_476.f3, &g_83[0], &g_324.f3, &g_83[0]}, {&g_476.f3, &g_83[0], &g_324.f3, &g_83[0]}, {&g_476.f3, &g_83[0], &g_324.f3, &g_83[0]}, {&g_476.f3, &g_83[0], &g_324.f3, &g_83[0]}, {&g_476.f3, &g_83[0], &g_324.f3, &g_83[0]}, {&g_476.f3, &g_83[0], &g_324.f3, &g_83[0]}, {&g_476.f3, &g_83[0], &g_324.f3, &g_83[0]}, {&g_476.f3, &g_83[0], &g_324.f3, &g_83[0]}}, {{&g_476.f3, &g_83[0], &g_324.f3, &g_83[0]}, {&g_476.f3, &g_83[0], &g_324.f3, &g_83[0]}, {&g_476.f3, &g_83[0], &g_324.f3, &g_83[0]}, {&g_476.f3, &g_83[0], &g_324.f3, &g_83[0]}, {&g_476.f3, &g_83[0], &g_324.f3, &g_83[0]}, {&g_476.f3, &g_83[0], &g_324.f3, &g_83[0]}, {&g_476.f3, &g_83[0], &g_324.f3, &g_83[0]}, {&g_476.f3, &g_83[0], &g_324.f3, &g_83[0]}}, {{&g_476.f3, &g_83[0], &g_324.f3, &g_83[0]}, {&g_476.f3, &g_83[0], &g_324.f3, &g_83[0]}, {&g_476.f3, &g_83[0], &g_324.f3, &g_83[0]}, {&g_476.f3, &g_83[0], &g_324.f3, &g_83[0]}, {&g_476.f3, &g_83[0], &g_324.f3, &g_83[0]}, {&g_476.f3, &g_83[0], &g_324.f3, &g_83[0]}, {&g_476.f3, &g_83[0], &g_324.f3, &g_83[0]}, {&g_476.f3, &g_83[0], &g_324.f3, &g_83[0]}}};
            int **l_631 = &g_43;
            int l_632 = 0xC68C13C5L;
            union U1 *l_663 = (void*)0;
            int i, j, k;
            for (g_364.f2 = 0; (g_364.f2 <= 0); g_364.f2 += 1)
            {
                int **l_626 = &l_622;
                short l_660[10] = {0xA838L, 0L, 0xA838L, 0L, 0xA838L, 0L, 0xA838L, 0L, 0xA838L, 0L};
                int i;
                if (l_623)
                {
                    for (g_323.f1 = 0; (g_323.f1 <= 0); g_323.f1 += 1)
                    {
                        int l_629 = 2L;
                        if (p_16.f1)
                            break;
                        (*g_44) = (*g_44);
                    }

                }
                else
                {
                    int **l_633 = &l_630[7][5][3];
                    for (g_477.f4 = 0; (g_477.f4 <= 0); g_477.f4 += 1)
                    {
                        short l_644[1];
                        unsigned ***l_652 = &g_278[2];
                        int i;
                        for (i = 0; i < 1; i++)
                            l_644[i] = 0x6F09L;
                        (**l_626) = ((***g_446) > (p_16.f0 & 0x42L));
                        (*l_631) = l_622;

                        ;
                        (*l_631) = (*l_631);
                        return g_179;


                    }
                    if (p_16.f0)
                    {
                        g_657 = (*g_176);
                        (*g_44) = (*l_631);
                    }
                    else
                    {
                        return p_16.f0;
                    }
                }

                for (g_120.f4 = (-27); (g_120.f4 < 44); g_120.f4 = safe_add_func_int8_t_s_s(g_120.f4, 2))
                {
                    for (l_623 = 6; (l_623 >= 0); l_623 -= 1)
                    {
                        union U1 **l_664 = &l_663;
                        (*l_664) = l_663;
                    }
                }
            }
            (*g_44) = (*g_44);
        }
    }
    else
    {
        int *l_665 = &g_83[0];
        (*g_187) = l_665;
        l_666 = &l_620;

        ;
    }

    ;
    (*g_44) = &l_620;

    ;
    for (p_16.f1 = 0; (p_16.f1 <= 0); p_16.f1 += 1)
    {
        int **l_672[3];
        unsigned ***l_677 = (void*)0;
        unsigned ***l_678 = &g_278[1];
        int *l_681 = &g_364.f3;
        short l_684 = 0xD275L;
        union U1 l_699 = {-5L};
        int *l_720 = &g_189;
        unsigned l_739 = 4294967295UL;
        int i;
        for (i = 0; i < 3; i++)
            l_672[i] = &g_43;
        (*g_44) = (l_666 = (*g_44));

        ;
        for (g_657.f3 = 1; (g_657.f3 >= 0); g_657.f3 -= 1)
        {
            unsigned **l_694 = &g_279;
            int *l_695 = &g_189;
            unsigned short *l_696 = &l_680[0];
            unsigned char *l_697 = (void*)0;
            unsigned char *l_698 = &g_194;
            union U1 **l_744 = &g_72;
            union U1 ***l_743[9][8] = {{&l_744, &l_744, &l_744, &l_744, &l_744, &l_744, (void*)0, &l_744}, {&l_744, &l_744, &l_744, &l_744, &l_744, &l_744, (void*)0, &l_744}, {&l_744, &l_744, &l_744, &l_744, &l_744, &l_744, (void*)0, &l_744}, {&l_744, &l_744, &l_744, &l_744, &l_744, &l_744, (void*)0, &l_744}, {&l_744, &l_744, &l_744, &l_744, &l_744, &l_744, (void*)0, &l_744}, {&l_744, &l_744, &l_744, &l_744, &l_744, &l_744, (void*)0, &l_744}, {&l_744, &l_744, &l_744, &l_744, &l_744, &l_744, (void*)0, &l_744}, {&l_744, &l_744, &l_744, &l_744, &l_744, &l_744, (void*)0, &l_744}, {&l_744, &l_744, &l_744, &l_744, &l_744, &l_744, (void*)0, &l_744}};
            unsigned **l_747[6] = {&g_279, &g_279, (void*)0, &g_279, &g_279, (void*)0};
            int i, j;
            (*g_44) = l_695;

            ;
            for (g_514.f4 = 0; (g_514.f4 <= 1); g_514.f4 += 1)
            {
                int l_710 = (-5L);
                int *l_721 = (void*)0;
                int *l_746 = &l_620;
                for (l_619 = 0; l_619 < 2; l_619 += 1)
                {
                    for (l_699.f0 = 0; l_699.f0 < 10; l_699.f0 += 1)
                    {
                        struct S0 tmp = {0UL,8UL,1L,0L,4294967286UL};
                        g_154[l_619][l_699.f0] = tmp;
                    }
                }
                if ((l_700 != &g_415))
                {
                    int *l_701 = &g_83[0];
                    short l_718 = 0x8727L;
                    int i, j, k;
                    g_188[(g_514.f4 + 2)][g_514.f4][(p_16.f1 + 8)] = l_701;
                    (*g_44) = l_695;
                    if ((*l_695))
                    {
                        g_711[0] = (*g_176);
                    }
                    else
                    {
                        short *l_719 = &g_154[1][6].f2;
                        (*g_44) = (l_721 = ((*g_187) = l_720));

                        ;
                        (*g_176) = (***g_574);
                        if ((*l_695))
                            continue;
                    }

                    ;
                }
                else
                {
                    for (l_699.f1 = 0; (l_699.f1 <= 2); l_699.f1 += 1)
                    {
                        int l_723 = 0x1AAD1E86L;
                        int i, j, k;
                        (**g_575) = g_722;
                        l_723 = 0xF42DCEDCL;
                    }

                                        (*g_187) = &l_620;
                }

                ;
                if ((*l_695))
                    break;
                for (g_645 = 5; (g_645 <= (-10)); g_645--)
                {
                    int *l_729 = &g_324.f3;
                    char l_731[10] = {1L, 1L, 0x58L, 1L, 1L, 0x58L, 1L, 1L, 0x58L, 1L};
                    char *l_740 = &l_731[8];
                    int i;
                    (*g_187) = l_729;
                }
            }
            (*g_187) = (l_666 = &l_621);

            ;
            (*g_575) = (*g_575);
        }

        ;
    }

    ;

        ;
    return g_504.f3;



}







static union U1 func_17(unsigned p_18)
{
    int *l_24[3];
    unsigned char *l_553 = &g_194;
    union U1 l_560 = {0L};
    int *l_601 = &g_332.f3;
    int **l_602 = &l_24[0];
    short *l_614 = &g_364.f2;
    int i;
    for (i = 0; i < 3; i++)
        l_24[i] = &g_25;
    (*g_187) = func_20(p_18, l_24[1], func_26(g_25, p_18, g_25));

    ;

    ;

    ;
    ;

    (*g_328) = g_540;
    if ((g_554[1][1] = ((safe_mod_func_int8_t_s_s((p_18 || ((safe_mod_func_int32_t_s_s(p_18, p_18)) ^ (****g_445))), (safe_sub_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u(((*l_553) = (safe_div_func_uint32_t_u_u((((0x12L != (p_18 < (65535UL == 1L))) != 65535UL) != (*g_279)), p_18))), 0)), p_18)))) < 0x24L)))
    {
        int ***l_561 = (void*)0;
        int l_578 = (-1L);
        unsigned char l_610[7] = {0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL};
        char *l_613 = &g_409;
        int i;
        for (g_477.f3 = 0; (g_477.f3 != (-19)); g_477.f3 = safe_sub_func_uint8_t_u_u(g_477.f3, 6))
        {
            (*g_176) = g_557;
            for (g_324.f2 = 0; g_324.f2 < 9; g_324.f2 += 1)
            {
                struct S0 tmp = {4294967295UL,0x64A109D7L,1L,0x6C026484L,2UL};
                g_199[g_324.f2] = tmp;
            }
            (*g_187) = l_24[1];
            if (p_18)
                break;
        }
        for (g_514.f1 = (-10); (g_514.f1 <= 17); g_514.f1 = safe_add_func_uint16_t_u_u(g_514.f1, 3))
        {
            for (g_476.f1 = 0; (g_476.f1 <= 1); g_476.f1 += 1)
            {
                int i;
                (*g_187) = (void*)0;
                (*g_44) = l_24[g_476.f1];

                ;
                (*g_44) = l_24[g_476.f1];
                return l_560;

                            }
        }
        if (p_18)
        {
            union U1 l_581 = {0x2882CCD5L};
            return l_581;

                    }
        else
        {
            int *l_582 = &g_189;
            int l_596 = (-10L);
            (*g_187) = (*g_44);
            (*g_44) = l_582;

            ;
            for (g_120.f4 = 2; (g_120.f4 >= 15); g_120.f4 = safe_add_func_int8_t_s_s(g_120.f4, 5))
            {
                int *l_585[5][4] = {{&g_514.f3, &g_514.f3, &g_514.f3, &g_189}, {&g_514.f3, &g_514.f3, &g_514.f3, &g_189}, {&g_514.f3, &g_514.f3, &g_514.f3, &g_189}, {&g_514.f3, &g_514.f3, &g_514.f3, &g_189}, {&g_514.f3, &g_514.f3, &g_514.f3, &g_189}};
                int ***l_603 = &g_44;
                int i, j;
                (*g_44) = l_585[0][1];
                (**l_603) = (*g_44);
            }

            ;
        }

        ;
        (*g_43) = (safe_mul_func_uint8_t_u_u(((*l_553) = (safe_div_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s((-1L), 3)), (((**g_44) | 0x2943B098L) & (l_610[0] == (p_18 && (safe_sub_func_int8_t_s_s(((*l_613) = p_18), (l_614 != l_614))))))))), ((safe_add_func_uint8_t_u_u((safe_mod_func_int32_t_s_s((p_18 <= (*g_420)), p_18)), p_18)) < 0UL)));
    }
    else
    {
        (**l_602) = (-4L);
    }

    ;
    return l_560;

    }







static int * func_20(unsigned p_21, int * p_22, int * p_23)
{
    short l_198 = (-1L);
    unsigned char l_208 = 0x9AL;
    int l_224 = 3L;
    int **l_232 = &g_188[2][0][8];
    int **l_243 = &g_43;
    int *l_245 = &g_83[0];
    unsigned short l_269 = 1UL;
    int *l_303 = &g_83[0];
    union U1 **l_347 = &g_97;
    int *l_360 = &g_63;
    short l_361[9] = {0x2B18L, 0x2B18L, 4L, 0x2B18L, 0x2B18L, 4L, 0x2B18L, 0x2B18L, 4L};
    unsigned short l_368 = 0x4A5FL;
    unsigned char l_369 = 0UL;
    int *l_405[1][7][8] = {{{&g_324.f3, (void*)0, &g_324.f3, (void*)0, &g_324.f3, (void*)0, &g_324.f3, (void*)0}, {&g_324.f3, (void*)0, &g_324.f3, (void*)0, &g_324.f3, (void*)0, &g_324.f3, (void*)0}, {&g_324.f3, (void*)0, &g_324.f3, (void*)0, &g_324.f3, (void*)0, &g_324.f3, (void*)0}, {&g_324.f3, (void*)0, &g_324.f3, (void*)0, &g_324.f3, (void*)0, &g_324.f3, (void*)0}, {&g_324.f3, (void*)0, &g_324.f3, (void*)0, &g_324.f3, (void*)0, &g_324.f3, (void*)0}, {&g_324.f3, (void*)0, &g_324.f3, (void*)0, &g_324.f3, (void*)0, &g_324.f3, (void*)0}, {&g_324.f3, (void*)0, &g_324.f3, (void*)0, &g_324.f3, (void*)0, &g_324.f3, (void*)0}}};
    int *l_418 = (void*)0;
    unsigned l_509 = 0xF3F68DA2L;
    int l_511[9] = {0xAD7CEA23L, 0xAD7CEA23L, 0L, 0xAD7CEA23L, 0xAD7CEA23L, 0L, 0xAD7CEA23L, 0xAD7CEA23L, 0L};
    int i, j, k;
    (*g_42) = func_46(l_198, (*g_44), (*g_97));

    ;
    ;

    ;
    if (l_198)
    {
        unsigned char l_223[2];
        int ***l_231[4];
        union U1 l_233[9] = {{0xB81C32DAL}, {0xB81C32DAL}, {0xB81C32DAL}, {0xB81C32DAL}, {0xB81C32DAL}, {0xB81C32DAL}, {0xB81C32DAL}, {0xB81C32DAL}, {0xB81C32DAL}};
        struct S0 *l_234[3][4] = {{(void*)0, &g_154[1][2], (void*)0, &g_154[1][2]}, {(void*)0, &g_154[1][2], (void*)0, &g_154[1][2]}, {(void*)0, &g_154[1][2], (void*)0, &g_154[1][2]}};
        int *l_246 = &g_154[1][6].f3;
        int i, j;
        for (i = 0; i < 2; i++)
            l_223[i] = 1UL;
        for (i = 0; i < 4; i++)
            l_231[i] = &g_44;
        (*g_176) = g_199[6];
        (**g_44) = ((safe_mul_func_int8_t_s_s(p_21, ((safe_mod_func_int32_t_s_s((g_194 ^ (safe_mul_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s((l_208 && ((0x0DL & 0x0BL) >= (safe_sub_func_int32_t_s_s((l_223[1] = (((void*)0 != (*g_44)) < (((safe_rshift_func_uint16_t_u_u((safe_add_func_uint32_t_u_u(3UL, (safe_div_func_int16_t_s_s(((safe_sub_func_uint16_t_u_u((((safe_mul_func_uint16_t_u_u((safe_add_func_uint16_t_u_u(p_21, l_208)), 0xC393L)) != p_21) && l_208), 1UL)) != 0x8FL), g_199[6].f0)))), 15)) & p_21) && g_106.f2))), l_224)))), g_120.f2)), 0x01L))), p_21)) ^ g_189))) >= p_21);
        for (g_76 = 0; (g_76 <= 1); g_76 += 1)
        {
            unsigned *l_227 = &g_52;
            union U1 **l_228[9] = {&g_97, &g_72, &g_97, &g_72, &g_97, &g_72, &g_97, &g_72, &g_97};
            int i;
        }
        if ((p_21 >= p_21))
        {
            struct S0 **l_235 = &l_234[1][1];
            int l_238 = 0x43BCCA17L;
            int **l_239 = &g_43;
            int *l_240 = &l_233[1].f0;
            int *l_241 = (void*)0;
            int *l_242 = &g_19;
            int l_244 = 0x3372CC07L;
            unsigned short *l_247 = (void*)0;
            unsigned short *l_248 = &g_102;
            (*l_235) = l_234[0][0];
            for (g_52 = 0; (g_52 == 37); g_52 = safe_add_func_uint8_t_u_u(g_52, 4))
            {
                (*p_22) = (**g_44);
            }
            (*g_44) = func_26(((*l_248) = g_199[6].f1), g_83[0], (*p_22));

            ;
        }
        else
        {
            (*g_44) = (*g_44);
        }

        ;
    }
    else
    {
        short *l_251 = &l_198;
        short *l_252 = &g_154[1][6].f2;
        int l_255 = 0L;
        int **l_260[10] = {&g_188[2][0][8], &g_188[2][0][8], &g_188[5][1][4], &g_188[2][0][8], &g_188[2][0][8], &g_188[5][1][4], &g_188[2][0][8], &g_188[2][0][8], &g_188[5][1][4], &g_188[2][0][8]};
        unsigned short l_263 = 65529UL;
        unsigned char *l_264 = &g_194;
        int i;
        g_250 = g_249;
        if ((p_21 == (((*l_252) = ((*l_251) = g_120.f2)) >= (safe_mod_func_int16_t_s_s((l_255 < ((safe_lshift_func_uint16_t_u_u(0UL, (safe_sub_func_int8_t_s_s((p_21 | ((void*)0 == l_260[7])), ((*l_264) = (((safe_lshift_func_int16_t_s_u(((void*)0 == &p_21), l_263)) && p_21) != (-1L))))))) >= p_21)), 0x7000L)))))
        {
            (*g_176) = (*g_176);
            (*g_42) = (*g_42);
        }
        else
        {
            short l_267 = 0x791FL;
            struct S0 **l_268 = (void*)0;
            (*g_43) = (((g_83[0] == (l_268 != (void*)0)) == g_250.f1) && l_269);
        }
    }

    ;
    for (p_21 = 0; (p_21 == 36); p_21 = safe_add_func_int8_t_s_s(p_21, 1))
    {
        unsigned **l_281 = (void*)0;
        struct S0 *l_284 = &g_120;
        int l_290[5];
        int l_295 = 0xC3A3F2C9L;
        unsigned short *l_315 = &g_298[1][8][4];
        union U1 *l_322 = &g_323;
        union U1 **l_346 = (void*)0;
        int *l_357 = &l_290[4];
        int i;
        for (i = 0; i < 5; i++)
            l_290[i] = 0xB6EA8F3CL;
        for (g_73.f0 = 5; (g_73.f0 < (-25)); g_73.f0--)
        {
            unsigned ***l_280[7];
            int l_287[10][4][6] = {{{(-5L), (-5L), 0x47BCE47EL, (-7L), 0x6846D414L, (-7L)}, {(-5L), (-5L), 0x47BCE47EL, (-7L), 0x6846D414L, (-7L)}, {(-5L), (-5L), 0x47BCE47EL, (-7L), 0x6846D414L, (-7L)}, {(-5L), (-5L), 0x47BCE47EL, (-7L), 0x6846D414L, (-7L)}}, {{(-5L), (-5L), 0x47BCE47EL, (-7L), 0x6846D414L, (-7L)}, {(-5L), (-5L), 0x47BCE47EL, (-7L), 0x6846D414L, (-7L)}, {(-5L), (-5L), 0x47BCE47EL, (-7L), 0x6846D414L, (-7L)}, {(-5L), (-5L), 0x47BCE47EL, (-7L), 0x6846D414L, (-7L)}}, {{(-5L), (-5L), 0x47BCE47EL, (-7L), 0x6846D414L, (-7L)}, {(-5L), (-5L), 0x47BCE47EL, (-7L), 0x6846D414L, (-7L)}, {(-5L), (-5L), 0x47BCE47EL, (-7L), 0x6846D414L, (-7L)}, {(-5L), (-5L), 0x47BCE47EL, (-7L), 0x6846D414L, (-7L)}}, {{(-5L), (-5L), 0x47BCE47EL, (-7L), 0x6846D414L, (-7L)}, {(-5L), (-5L), 0x47BCE47EL, (-7L), 0x6846D414L, (-7L)}, {(-5L), (-5L), 0x47BCE47EL, (-7L), 0x6846D414L, (-7L)}, {(-5L), (-5L), 0x47BCE47EL, (-7L), 0x6846D414L, (-7L)}}, {{(-5L), (-5L), 0x47BCE47EL, (-7L), 0x6846D414L, (-7L)}, {(-5L), (-5L), 0x47BCE47EL, (-7L), 0x6846D414L, (-7L)}, {(-5L), (-5L), 0x47BCE47EL, (-7L), 0x6846D414L, (-7L)}, {(-5L), (-5L), 0x47BCE47EL, (-7L), 0x6846D414L, (-7L)}}, {{(-5L), (-5L), 0x47BCE47EL, (-7L), 0x6846D414L, (-7L)}, {(-5L), (-5L), 0x47BCE47EL, (-7L), 0x6846D414L, (-7L)}, {(-5L), (-5L), 0x47BCE47EL, (-7L), 0x6846D414L, (-7L)}, {(-5L), (-5L), 0x47BCE47EL, (-7L), 0x6846D414L, (-7L)}}, {{(-5L), (-5L), 0x47BCE47EL, (-7L), 0x6846D414L, (-7L)}, {(-5L), (-5L), 0x47BCE47EL, (-7L), 0x6846D414L, (-7L)}, {(-5L), (-5L), 0x47BCE47EL, (-7L), 0x6846D414L, (-7L)}, {(-5L), (-5L), 0x47BCE47EL, (-7L), 0x6846D414L, (-7L)}}, {{(-5L), (-5L), 0x47BCE47EL, (-7L), 0x6846D414L, (-7L)}, {(-5L), (-5L), 0x47BCE47EL, (-7L), 0x6846D414L, (-7L)}, {(-5L), (-5L), 0x47BCE47EL, (-7L), 0x6846D414L, (-7L)}, {(-5L), (-5L), 0x47BCE47EL, (-7L), 0x6846D414L, (-7L)}}, {{(-5L), (-5L), 0x47BCE47EL, (-7L), 0x6846D414L, (-7L)}, {(-5L), (-5L), 0x47BCE47EL, (-7L), 0x6846D414L, (-7L)}, {(-5L), (-5L), 0x47BCE47EL, (-7L), 0x6846D414L, (-7L)}, {(-5L), (-5L), 0x47BCE47EL, (-7L), 0x6846D414L, (-7L)}}, {{(-5L), (-5L), 0x47BCE47EL, (-7L), 0x6846D414L, (-7L)}, {(-5L), (-5L), 0x47BCE47EL, (-7L), 0x6846D414L, (-7L)}, {(-5L), (-5L), 0x47BCE47EL, (-7L), 0x6846D414L, (-7L)}, {(-5L), (-5L), 0x47BCE47EL, (-7L), 0x6846D414L, (-7L)}}};
            unsigned char *l_288 = (void*)0;
            unsigned char *l_289[5];
            unsigned short *l_299 = (void*)0;
            unsigned short *l_300 = &g_298[1][2][0];
            unsigned char l_312 = 0x3CL;
            int l_318 = 0xB0D43386L;
            int i, j, k;
            for (i = 0; i < 7; i++)
                l_280[i] = &g_278[2];
            for (i = 0; i < 5; i++)
                l_289[i] = &g_194;
        }
    }
    if (l_361[8])
    {
        unsigned short *l_366 = &g_102;
        unsigned short **l_365[10][4][5] = {{{&l_366, (void*)0, &l_366, (void*)0, &l_366}, {&l_366, (void*)0, &l_366, (void*)0, &l_366}, {&l_366, (void*)0, &l_366, (void*)0, &l_366}, {&l_366, (void*)0, &l_366, (void*)0, &l_366}}, {{&l_366, (void*)0, &l_366, (void*)0, &l_366}, {&l_366, (void*)0, &l_366, (void*)0, &l_366}, {&l_366, (void*)0, &l_366, (void*)0, &l_366}, {&l_366, (void*)0, &l_366, (void*)0, &l_366}}, {{&l_366, (void*)0, &l_366, (void*)0, &l_366}, {&l_366, (void*)0, &l_366, (void*)0, &l_366}, {&l_366, (void*)0, &l_366, (void*)0, &l_366}, {&l_366, (void*)0, &l_366, (void*)0, &l_366}}, {{&l_366, (void*)0, &l_366, (void*)0, &l_366}, {&l_366, (void*)0, &l_366, (void*)0, &l_366}, {&l_366, (void*)0, &l_366, (void*)0, &l_366}, {&l_366, (void*)0, &l_366, (void*)0, &l_366}}, {{&l_366, (void*)0, &l_366, (void*)0, &l_366}, {&l_366, (void*)0, &l_366, (void*)0, &l_366}, {&l_366, (void*)0, &l_366, (void*)0, &l_366}, {&l_366, (void*)0, &l_366, (void*)0, &l_366}}, {{&l_366, (void*)0, &l_366, (void*)0, &l_366}, {&l_366, (void*)0, &l_366, (void*)0, &l_366}, {&l_366, (void*)0, &l_366, (void*)0, &l_366}, {&l_366, (void*)0, &l_366, (void*)0, &l_366}}, {{&l_366, (void*)0, &l_366, (void*)0, &l_366}, {&l_366, (void*)0, &l_366, (void*)0, &l_366}, {&l_366, (void*)0, &l_366, (void*)0, &l_366}, {&l_366, (void*)0, &l_366, (void*)0, &l_366}}, {{&l_366, (void*)0, &l_366, (void*)0, &l_366}, {&l_366, (void*)0, &l_366, (void*)0, &l_366}, {&l_366, (void*)0, &l_366, (void*)0, &l_366}, {&l_366, (void*)0, &l_366, (void*)0, &l_366}}, {{&l_366, (void*)0, &l_366, (void*)0, &l_366}, {&l_366, (void*)0, &l_366, (void*)0, &l_366}, {&l_366, (void*)0, &l_366, (void*)0, &l_366}, {&l_366, (void*)0, &l_366, (void*)0, &l_366}}, {{&l_366, (void*)0, &l_366, (void*)0, &l_366}, {&l_366, (void*)0, &l_366, (void*)0, &l_366}, {&l_366, (void*)0, &l_366, (void*)0, &l_366}, {&l_366, (void*)0, &l_366, (void*)0, &l_366}}};
        int l_367 = 6L;
        union U1 *l_391 = &g_323;
        unsigned char l_392 = 1UL;
        unsigned short ****l_450 = (void*)0;
        int *l_451 = &g_332.f3;
        union U1 l_501 = {0x75A4D654L};
        int ***l_510 = &l_243;
        int i, j, k;
        for (g_324.f2 = 16; (g_324.f2 >= (-9)); g_324.f2 = safe_sub_func_int8_t_s_s(g_324.f2, 1))
        {
            (*g_44) = (*g_44);
            (*g_328) = g_364;
        }
        (*l_347) = (void*)0;

        ;
        if (((l_365[8][1][4] == (void*)0) | (l_368 ^ ((*l_245) = l_369))))
        {
            short l_373[4];
            struct S0 *l_377[7] = {&g_324, &g_120, &g_324, &g_120, &g_324, &g_120, &g_324};
            int *l_380 = &g_324.f3;
            int *l_404 = (void*)0;
            int i;
            for (i = 0; i < 4; i++)
                l_373[i] = (-1L);
            (*g_187) = (*g_42);


            if ((*p_22))
            {
                int **l_370 = &l_360;
                int *l_371 = &g_19;
                int *l_372[4] = {&g_73.f0, &g_323.f0, &g_73.f0, &g_323.f0};
                unsigned short ***l_399 = &l_365[0][2][1];
                struct S0 *l_403[7] = {(void*)0, (void*)0, &g_154[1][0], (void*)0, (void*)0, &g_154[1][0], (void*)0};
                char *l_408 = &g_409;
                int i;
                if ((*p_22))
                {
                    char l_376 = (-3L);
                    int *l_379 = &l_367;
                    for (g_120.f3 = (-28); (g_120.f3 == 6); g_120.f3++)
                    {
                        struct S0 **l_378 = &g_176;
                        (*l_303) = l_376;
                        (*l_378) = l_377[4];

                        ;
                    }

                    ;
                    (*l_370) = l_379;

                    ;
                    (*l_243) = p_23;

                    ;
                }
                else
                {
                    unsigned char *l_383 = &g_194;
                    unsigned char *l_384 = &l_369;
                    int ***l_387 = (void*)0;
                    int ***l_388 = &l_243;
                    (*g_44) = l_380;

                    ;
                    l_367 = (0xFE9918F8L == ((safe_lshift_func_uint8_t_u_s((((*l_384) = ((*l_383) = p_21)) != (safe_div_func_int32_t_s_s(((*p_22) = ((254UL != p_21) > (+((**l_370) ^ (safe_lshift_func_uint16_t_u_s((+((void*)0 == l_391)), l_392)))))), l_367))), 1)) || 0x4D8781CCL));
                    for (g_189 = (-11); (g_189 != 18); g_189++)
                    {
                        struct S0 **l_396 = &l_377[4];
                        struct S0 ***l_395 = &l_396;
                        (*g_176) = (*g_328);
                        (**l_370) = ((p_21 = p_21) & (&g_320 != (void*)0));
                        if ((**g_42))
                            continue;
                        (*l_395) = &g_176;

                        ;
                    }
                    (*l_243) = p_22;

                    ;
                }

                ;
                ;
                ;
                if ((4294967290UL || p_21))
                {
                    unsigned short ****l_400 = &l_399;
                    int l_401[4];
                    int i;
                    for (i = 0; i < 4; i++)
                        l_401[i] = 0xC5F1FE55L;
                    (*l_303) = 0xF0B8B540L;
                    if (((safe_mul_func_int8_t_s_s(g_73.f1, (((*l_400) = l_399) == &l_365[8][1][4]))) < (*l_303)))
                    {
                        l_401[1] = ((*p_22) = ((*g_279) & p_21));
                    }
                    else
                    {
                        struct S0 **l_402[7][8] = {{&l_377[4], (void*)0, (void*)0, (void*)0, (void*)0, &l_377[4], (void*)0, (void*)0}, {&l_377[4], (void*)0, (void*)0, (void*)0, (void*)0, &l_377[4], (void*)0, (void*)0}, {&l_377[4], (void*)0, (void*)0, (void*)0, (void*)0, &l_377[4], (void*)0, (void*)0}, {&l_377[4], (void*)0, (void*)0, (void*)0, (void*)0, &l_377[4], (void*)0, (void*)0}, {&l_377[4], (void*)0, (void*)0, (void*)0, (void*)0, &l_377[4], (void*)0, (void*)0}, {&l_377[4], (void*)0, (void*)0, (void*)0, (void*)0, &l_377[4], (void*)0, (void*)0}, {&l_377[4], (void*)0, (void*)0, (void*)0, (void*)0, &l_377[4], (void*)0, (void*)0}};
                        int i, j;
                        g_42 = &p_23;

                        ;
                        (*g_328) = (*g_176);
                        (*g_187) = (*l_370);


                        l_403[0] = (void*)0;
                    }

                    ;

                }
                else
                {
                    (*g_44) = l_404;

                    ;
                    (*g_42) = l_405[0][5][2];

                    ;
                }

                ;
                ;

                if (((*l_360) = (((*l_408) = (p_21 & ((-1L) | (p_21 < l_367)))) > p_21)))
                {
                    struct S0 *l_410 = &g_364;
                    l_377[4] = l_410;


                }
                else
                {
                    int l_413 = 0x66982638L;
                    for (g_364.f3 = 0; (g_364.f3 < (-5)); g_364.f3 = safe_sub_func_int16_t_s_s(g_364.f3, 2))
                    {
                        int ***l_416 = (void*)0;
                        int ***l_417 = &g_414;
                        (*l_303) = l_413;
                        (*l_417) = g_414;
                    }
                    return l_418;




                }


                (*g_176) = (*g_328);
            }
            else
            {
                unsigned l_433 = 0x8981D3EAL;
                (*g_176) = (*g_328);
                for (g_25 = 0; (g_25 <= 1); g_25 += 1)
                {
                    short ***l_421 = (void*)0;
                    short ***l_422 = &g_419;
                    short **l_424[1][2][2];
                    short ***l_423 = &l_424[0][0][1];
                    unsigned char *l_434 = &g_194;
                    unsigned char *l_437 = &l_392;
                    int l_438 = (-10L);
                    unsigned short *****l_449 = &g_445;
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 2; j++)
                        {
                            for (k = 0; k < 2; k++)
                                l_424[i][j][k] = &g_420;
                        }
                    }
                    (*l_423) = ((*l_422) = g_419);
                    (*l_303) = ((*l_380) = (((((g_179 && (safe_sub_func_uint16_t_u_u(p_21, (safe_mul_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u(((*l_434) = (((void*)0 != &l_391) | (safe_add_func_uint32_t_u_u(l_433, ((*g_42) == p_23))))), ((*l_437) = (safe_div_func_int8_t_s_s(p_21, g_250.f3))))), (-1L)))))) == (*p_22)) || l_438) && l_433) == l_438));
                    for (l_224 = 2; (l_224 <= 8); l_224 += 1)
                    {
                        if (l_433)
                            break;
                    }
                    (*g_187) = func_26((((safe_mul_func_uint8_t_u_u((p_21 | ((safe_div_func_uint8_t_u_u(g_76, ((safe_rshift_func_uint16_t_u_s((((*l_380) = (g_250.f0 || p_21)) > ((**g_419) = (p_21 & (*g_279)))), 3)) | 1L))) | 1UL)), ((l_450 = ((*l_449) = g_445)) != (void*)0))) & 0x1AC0L) & 0xD1D2AA15L), (**g_447), (*p_22));

                    ;
                    for (l_368 = 0; (l_368 <= 1); l_368 += 1)
                    {
                        (*l_243) = func_26((*l_380), (*l_360), (*p_22));
                        if ((*p_22))
                            continue;
                    }
                }

                ;
                (*g_42) = l_451;

                ;
            }

            ;
            ;
            ;

            ;

            ;
            (*g_328) = (*g_328);
        }
        else
        {
            char l_459 = (-1L);
            unsigned char *l_468 = &l_208;
            unsigned char *l_471[5][7] = {{&l_369, &l_369, &l_392, &l_369, &l_369, &g_194, &l_369}, {&l_369, &l_369, &l_392, &l_369, &l_369, &g_194, &l_369}, {&l_369, &l_369, &l_392, &l_369, &l_369, &g_194, &l_369}, {&l_369, &l_369, &l_392, &l_369, &l_369, &g_194, &l_369}, {&l_369, &l_369, &l_392, &l_369, &l_369, &g_194, &l_369}};
            int l_482 = 0x02101419L;
            union U1 *l_488[7];
            unsigned short ***l_491 = (void*)0;
            int **l_499 = &g_188[2][0][8];
            int i, j;
            for (i = 0; i < 7; i++)
                l_488[i] = &g_323;
            if ((safe_mul_func_int8_t_s_s((safe_mod_func_uint8_t_u_u(((*l_245) = (safe_sub_func_int16_t_s_s(((safe_unary_minus_func_uint8_t_u(l_459)) | ((safe_sub_func_uint32_t_u_u((p_21 = ((safe_div_func_uint32_t_u_u((((*l_360) = (safe_add_func_uint8_t_u_u(((*l_468) = (safe_rshift_func_int16_t_s_s(l_459, 14))), g_199[6].f4))) < l_459), (*p_22))) <= (safe_lshift_func_int16_t_s_u(p_21, 3)))), 1L)) & 0x38FCL)), ((*l_451) >= (*l_303))))), 0xA2L)), l_459)))
            {
                int l_489 = 6L;
                for (g_120.f2 = 5; (g_120.f2 != 14); g_120.f2++)
                {
                    char *l_483 = &l_459;
                    for (l_368 = 0; (l_368 < 4); l_368 = safe_add_func_int8_t_s_s(l_368, 9))
                    {
                        g_477 = g_476;
                    }
                    for (l_392 = 0; (l_392 <= 0); l_392 += 1)
                    {
                        if ((*l_451))
                            break;
                        (*l_232) = (void*)0;
                    }
                    (*l_451) = (p_21 || (safe_add_func_int8_t_s_s(((*p_22) || 0L), (safe_lshift_func_int8_t_s_u(((*l_483) = l_482), 2)))));
                }
                for (g_120.f1 = 0; (g_120.f1 == 57); g_120.f1 = safe_add_func_int32_t_s_s(g_120.f1, 3))
                {
                    int **l_490 = &l_418;
                    for (g_25 = (-20); (g_25 == 26); ++g_25)
                    {
                        int **l_492 = &l_451;
                        (*l_347) = l_488[0];

                        ;
                        (*l_451) = l_489;
                        (*l_245) = ((l_459 >= l_482) ^ p_21);
                        (*g_328) = (*g_328);
                    }
                }

                ;
                for (g_364.f1 = 0; (g_364.f1 > 15); g_364.f1 = safe_add_func_uint8_t_u_u(g_364.f1, 6))
                {
                    union U1 l_502 = {0L};
                    (*l_451) = (+((*l_303) = (safe_lshift_func_uint16_t_u_s(4UL, (**g_419)))));
                    if ((l_482 ^ ((*l_468) = (safe_div_func_int16_t_s_s(p_21, p_21)))))
                    {
                        union U1 l_503 = {-1L};
                        (*g_44) = (*g_44);
                    }
                    else
                    {
                        (*g_42) = p_22;

                        ;
                        (*l_360) = (g_332.f1 || (*l_451));
                        (*g_176) = (*g_328);
                    }
                    (*l_347) = (void*)0;

                    ;
                    (*g_328) = g_504;
                }
            }
            else
            {
                for (g_102 = 0; (g_102 != 11); g_102 = safe_add_func_uint8_t_u_u(g_102, 9))
                {
                    (*l_232) = p_23;
                }
            }

            ;
            (*l_451) = l_459;
        }

        ;
        ;
        ;
        ;

        ;
        ;
        (*l_451) = (p_21 != p_21);
    }
    else
    {
        int **l_525 = &g_415;
        int l_528 = 0x7567B505L;
        union U1 l_537 = {0x08BD77BFL};
        (*l_245) = l_511[6];
        (*l_347) = &g_323;

        ;
        for (g_120.f4 = 0; (g_120.f4 == 38); g_120.f4++)
        {
            int *l_518 = &l_224;
            int *l_539 = &l_511[6];
            (*g_328) = g_514;
            for (g_477.f3 = 0; (g_477.f3 <= (-23)); g_477.f3 = safe_sub_func_uint8_t_u_u(g_477.f3, 6))
            {
                int *l_538 = (void*)0;
                for (g_19 = 0; (g_19 <= 1); g_19 += 1)
                {
                    int l_517 = 0L;
                    int i, j, k;
                    if (l_517)
                        break;
                    (*g_44) = p_23;

                    ;
                    for (l_369 = 0; (l_369 <= 0); l_369 += 1)
                    {
                        int **l_526[3][5][9] = {{{(void*)0, &g_415, &g_415, &g_415, (void*)0, &g_415, &g_415, &g_415, (void*)0}, {(void*)0, &g_415, &g_415, &g_415, (void*)0, &g_415, &g_415, &g_415, (void*)0}, {(void*)0, &g_415, &g_415, &g_415, (void*)0, &g_415, &g_415, &g_415, (void*)0}, {(void*)0, &g_415, &g_415, &g_415, (void*)0, &g_415, &g_415, &g_415, (void*)0}, {(void*)0, &g_415, &g_415, &g_415, (void*)0, &g_415, &g_415, &g_415, (void*)0}}, {{(void*)0, &g_415, &g_415, &g_415, (void*)0, &g_415, &g_415, &g_415, (void*)0}, {(void*)0, &g_415, &g_415, &g_415, (void*)0, &g_415, &g_415, &g_415, (void*)0}, {(void*)0, &g_415, &g_415, &g_415, (void*)0, &g_415, &g_415, &g_415, (void*)0}, {(void*)0, &g_415, &g_415, &g_415, (void*)0, &g_415, &g_415, &g_415, (void*)0}, {(void*)0, &g_415, &g_415, &g_415, (void*)0, &g_415, &g_415, &g_415, (void*)0}}, {{(void*)0, &g_415, &g_415, &g_415, (void*)0, &g_415, &g_415, &g_415, (void*)0}, {(void*)0, &g_415, &g_415, &g_415, (void*)0, &g_415, &g_415, &g_415, (void*)0}, {(void*)0, &g_415, &g_415, &g_415, (void*)0, &g_415, &g_415, &g_415, (void*)0}, {(void*)0, &g_415, &g_415, &g_415, (void*)0, &g_415, &g_415, &g_415, (void*)0}, {(void*)0, &g_415, &g_415, &g_415, (void*)0, &g_415, &g_415, &g_415, (void*)0}}};
                        int l_527 = (-9L);
                        int i, j, k;
                        l_405[l_369][g_19][(l_369 + 1)] = (*g_44);


                        (*l_243) = p_22;

                        ;
                        (*l_232) = &l_527;


                        return p_22;



                    }
                }
                for (g_514.f1 = 0; (g_514.f1 <= 0); g_514.f1 += 1)
                {
                    return (*g_44);


                }
            }
        }
    }

    ;
    ;
    ;
    ;


    return (*g_44);



}







static int * func_26(unsigned short p_27, unsigned short p_28, int p_29)
{
    int *l_30 = (void*)0;
    int *l_31[9][10][2] = {{{&g_25, &g_25}, {&g_25, &g_25}, {&g_25, &g_25}, {&g_25, &g_25}, {&g_25, &g_25}, {&g_25, &g_25}, {&g_25, &g_25}, {&g_25, &g_25}, {&g_25, &g_25}, {&g_25, &g_25}}, {{&g_25, &g_25}, {&g_25, &g_25}, {&g_25, &g_25}, {&g_25, &g_25}, {&g_25, &g_25}, {&g_25, &g_25}, {&g_25, &g_25}, {&g_25, &g_25}, {&g_25, &g_25}, {&g_25, &g_25}}, {{&g_25, &g_25}, {&g_25, &g_25}, {&g_25, &g_25}, {&g_25, &g_25}, {&g_25, &g_25}, {&g_25, &g_25}, {&g_25, &g_25}, {&g_25, &g_25}, {&g_25, &g_25}, {&g_25, &g_25}}, {{&g_25, &g_25}, {&g_25, &g_25}, {&g_25, &g_25}, {&g_25, &g_25}, {&g_25, &g_25}, {&g_25, &g_25}, {&g_25, &g_25}, {&g_25, &g_25}, {&g_25, &g_25}, {&g_25, &g_25}}, {{&g_25, &g_25}, {&g_25, &g_25}, {&g_25, &g_25}, {&g_25, &g_25}, {&g_25, &g_25}, {&g_25, &g_25}, {&g_25, &g_25}, {&g_25, &g_25}, {&g_25, &g_25}, {&g_25, &g_25}}, {{&g_25, &g_25}, {&g_25, &g_25}, {&g_25, &g_25}, {&g_25, &g_25}, {&g_25, &g_25}, {&g_25, &g_25}, {&g_25, &g_25}, {&g_25, &g_25}, {&g_25, &g_25}, {&g_25, &g_25}}, {{&g_25, &g_25}, {&g_25, &g_25}, {&g_25, &g_25}, {&g_25, &g_25}, {&g_25, &g_25}, {&g_25, &g_25}, {&g_25, &g_25}, {&g_25, &g_25}, {&g_25, &g_25}, {&g_25, &g_25}}, {{&g_25, &g_25}, {&g_25, &g_25}, {&g_25, &g_25}, {&g_25, &g_25}, {&g_25, &g_25}, {&g_25, &g_25}, {&g_25, &g_25}, {&g_25, &g_25}, {&g_25, &g_25}, {&g_25, &g_25}}, {{&g_25, &g_25}, {&g_25, &g_25}, {&g_25, &g_25}, {&g_25, &g_25}, {&g_25, &g_25}, {&g_25, &g_25}, {&g_25, &g_25}, {&g_25, &g_25}, {&g_25, &g_25}, {&g_25, &g_25}}};
    int **l_197 = &l_31[7][1][0];
    int i, j, k;
    p_29 = (!g_25);
    for (g_19 = 0; (g_19 >= 21); g_19 = safe_add_func_int16_t_s_s(g_19, 9))
    {
        int **l_41 = &l_31[1][0][1];
        int ***l_40[2];
        char l_45 = 0xB2L;
        union U1 l_50 = {0L};
        int i;
        for (i = 0; i < 2; i++)
            l_40[i] = &l_41;
        if (p_28)
            break;
    }
    return (*g_187);


}







static int ** func_34(int ** p_35, int p_36, int * p_37, int ** p_38, int * p_39)
{
    int ***l_192 = &g_42;
    unsigned char *l_193 = &g_194;
    if ((p_36 >= (safe_sub_func_uint8_t_u_u(((*l_193) = (&g_187 != l_192)), 0UL))))
    {
        (*g_43) = 0xAD67A6C1L;
    }
    else
    {
        int *l_195 = (void*)0;
        union U1 l_196 = {0L};
        (*p_38) = (*p_38);
    }
    return &g_62;


}







static int * func_46(int p_47, int * p_48, union U1 p_49)
{
    unsigned *l_51 = &g_52;
    int l_55 = 0x2059515EL;
    int **l_59[5] = {&g_43, &g_43, &g_43, &g_43, &g_43};
    int **l_132 = (void*)0;
    int ***l_131 = &l_132;
    unsigned **l_133 = &l_51;
    unsigned short *l_137 = (void*)0;
    struct S0 *l_165 = &g_154[1][6];
    int i;
    if (((((((*l_51) = g_25) > ((safe_add_func_int8_t_s_s(1L, l_55)) >= (*g_43))) < func_56(l_59[0], g_25)) < g_120.f3) != ((safe_div_func_uint32_t_u_u(((((*l_131) = &p_48) != &p_48) == g_120.f1), 0xEAE813F2L)) > 0x45D8L)))
    {
        int *l_134 = &g_120.f3;
        char l_135 = (-1L);
        struct S0 *l_168 = &g_154[1][6];
        l_133 = &l_51;
        l_134 = &g_83[0];

        ;
        for (g_76 = 0; (g_76 <= 4); g_76 += 1)
        {
            unsigned short *l_136[6][7][2] = {{{&g_102, &g_102}, {&g_102, &g_102}, {&g_102, &g_102}, {&g_102, &g_102}, {&g_102, &g_102}, {&g_102, &g_102}, {&g_102, &g_102}}, {{&g_102, &g_102}, {&g_102, &g_102}, {&g_102, &g_102}, {&g_102, &g_102}, {&g_102, &g_102}, {&g_102, &g_102}, {&g_102, &g_102}}, {{&g_102, &g_102}, {&g_102, &g_102}, {&g_102, &g_102}, {&g_102, &g_102}, {&g_102, &g_102}, {&g_102, &g_102}, {&g_102, &g_102}}, {{&g_102, &g_102}, {&g_102, &g_102}, {&g_102, &g_102}, {&g_102, &g_102}, {&g_102, &g_102}, {&g_102, &g_102}, {&g_102, &g_102}}, {{&g_102, &g_102}, {&g_102, &g_102}, {&g_102, &g_102}, {&g_102, &g_102}, {&g_102, &g_102}, {&g_102, &g_102}, {&g_102, &g_102}}, {{&g_102, &g_102}, {&g_102, &g_102}, {&g_102, &g_102}, {&g_102, &g_102}, {&g_102, &g_102}, {&g_102, &g_102}, {&g_102, &g_102}}};
            struct S0 **l_169 = (void*)0;
            struct S0 **l_171 = &l_168;
            struct S0 ***l_170 = &l_171;
            int i, j, k;
            (*l_134) = (+(*l_134));
            (*l_134) = l_135;
        }
    }
    else
    {
        (**l_132) = (*p_48);
        for (g_120.f3 = 1; (g_120.f3 >= 0); g_120.f3 -= 1)
        {
            if ((*g_43))
            {
                struct S0 *l_175 = &g_154[1][6];
                for (g_52 = 0; (g_52 <= 1); g_52 += 1)
                {
                    int i, j;
                    for (g_25 = 0; (g_25 <= 1); g_25 += 1)
                    {
                        return p_48;


                    }
                    (*l_165) = g_154[g_52][g_52];
                    for (g_25 = 0; (g_25 > 1); g_25++)
                    {
                        union U1 **l_174[6] = {&g_72, &g_72, &g_97, &g_72, &g_72, &g_97};
                        int i;
                        g_72 = &p_49;

                        ;
                        g_176 = l_175;
                        return p_48;



                    }
                }
            }
            else
            {
                (*g_43) = (*g_43);
            }
        }
    }

    ;
    ;
    ;
    ;
    for (g_102 = (-19); (g_102 >= 26); g_102 = safe_add_func_uint32_t_u_u(g_102, 1))
    {
        int *l_180 = (void*)0;
        unsigned short *l_181 = &g_102;
    }
    return &g_63;


}







static unsigned func_56(int ** p_57, int p_58)
{
    int *l_60[3];
    int **l_61[5] = {&l_60[0], &l_60[1], &l_60[0], &l_60[1], &l_60[0]};
    union U1 **l_92 = &g_72;
    union U1 ***l_91 = &l_92;
    unsigned short *l_114[8][8] = {{&g_102, &g_102, &g_102, &g_102, &g_102, &g_102, &g_102, &g_102}, {&g_102, &g_102, &g_102, &g_102, &g_102, &g_102, &g_102, &g_102}, {&g_102, &g_102, &g_102, &g_102, &g_102, &g_102, &g_102, &g_102}, {&g_102, &g_102, &g_102, &g_102, &g_102, &g_102, &g_102, &g_102}, {&g_102, &g_102, &g_102, &g_102, &g_102, &g_102, &g_102, &g_102}, {&g_102, &g_102, &g_102, &g_102, &g_102, &g_102, &g_102, &g_102}, {&g_102, &g_102, &g_102, &g_102, &g_102, &g_102, &g_102, &g_102}, {&g_102, &g_102, &g_102, &g_102, &g_102, &g_102, &g_102, &g_102}};
    int *l_128 = &g_120.f3;
    int i, j;
    for (i = 0; i < 3; i++)
        l_60[i] = &g_25;
    g_62 = l_60[1];

    ;
    for (g_63 = (-29); (g_63 != (-25)); g_63 = safe_add_func_int8_t_s_s(g_63, 4))
    {
        unsigned l_93 = 0xCFCE320EL;
        union U1 *l_96[1];
        int l_108 = 0xE45A2DC9L;
        int i;
        for (i = 0; i < 1; i++)
            l_96[i] = (void*)0;
        if ((p_58 < g_25))
        {
            int l_70 = (-8L);
            int l_84 = 5L;
            union U1 *l_94 = (void*)0;
            for (p_58 = (-29); (p_58 != (-6)); ++p_58)
            {
                unsigned l_71 = 4294967288UL;
                int *l_82 = &g_83[0];
                if ((safe_mul_func_int8_t_s_s(l_70, l_71)))
                {
                    union U1 **l_74[2][10] = {{&g_72, &g_72, &g_72, &g_72, &g_72, &g_72, &g_72, &g_72, &g_72, &g_72}, {&g_72, &g_72, &g_72, &g_72, &g_72, &g_72, &g_72, &g_72, &g_72, &g_72}};
                    union U1 ***l_75 = &l_74[1][3];
                    int *l_77 = &g_25;
                    int i, j;
                    g_72 = g_72;
                    g_76 = (((*l_75) = (void*)0) == (void*)0);


                    g_62 = l_77;

                    ;
                }
                else
                {
                    int *l_81[5];
                    int i;
                    for (i = 0; i < 5; i++)
                        l_81[i] = &g_63;
                    for (l_71 = 0; (l_71 <= 4); l_71 += 1)
                    {
                        unsigned l_80 = 0x172C66C3L;
                        int i;
                        l_80 = (0x9DL > (safe_div_func_uint32_t_u_u(0xE56F6324L, p_58)));
                        g_62 = l_81[1];

                        ;
                    }

                    ;
                }

                ;
                l_82 = (g_62 = (void*)0);

                ;
                ;
            }

            ;
            if (((l_84 = g_25) <= (safe_sub_func_int32_t_s_s((*g_43), (safe_rshift_func_uint8_t_u_u((((safe_add_func_uint16_t_u_u(p_58, (l_91 != &l_92))) ^ g_83[0]) <= l_93), 4))))))
            {
                if (l_93)
                    break;
            }
            else
            {
                l_94 = ((*l_92) = l_94);

                ;
            }

            ;
        }
        else
        {
            int *l_95 = &g_83[0];
            l_95 = &g_25;

            ;
            g_62 = (*p_57);
            g_97 = ((**l_91) = l_96[0]);

            ;
            ;
        }

        ;
        ;
        ;
        if ((**p_57))
        {
            union U1 **l_100[6] = {&l_96[0], &l_96[0], &l_96[0], &l_96[0], &l_96[0], &l_96[0]};
            unsigned short *l_101[5];
            int l_103 = 0xE2C54351L;
            int i;
            for (i = 0; i < 5; i++)
                l_101[i] = &g_102;
            if ((safe_mul_func_uint16_t_u_u((l_103 = (l_100[3] == &l_96[0])), 0x8280L)))
            {
                for (g_73.f0 = 11; (g_73.f0 >= (-10)); --g_73.f0)
                {
                    volatile struct S0 *l_107 = &g_106;
                    (*l_107) = g_106;
                }
            }
            else
            {
                l_108 = (*g_43);
            }
        }
        else
        {
            int *l_109 = &l_108;
            l_109 = &l_108;
            return g_76;
        }
        if ((*g_43))
        {
            return g_73.f0;
        }
        else
        {
            unsigned short l_116 = 0UL;
            struct S0 *l_123 = &g_120;
            int *l_124 = &g_83[0];
            for (p_58 = 0; (p_58 >= 0); p_58 -= 1)
            {
                union U1 ***l_110 = &l_92;
                int l_127[5][3] = {{9L, 0xA936FBACL, 9L}, {9L, 0xA936FBACL, 9L}, {9L, 0xA936FBACL, 9L}, {9L, 0xA936FBACL, 9L}, {9L, 0xA936FBACL, 9L}};
                int i, j;
                if (((l_110 != g_111) || p_58))
                {
                    char l_115 = 0x2EL;
                    int *l_117 = &g_83[0];
                    for (g_102 = 0; (g_102 <= 0); g_102 += 1)
                    {
                        int i;
                        g_83[p_58] = (safe_mul_func_uint8_t_u_u(g_83[p_58], (l_114[1][6] == (void*)0)));
                        return g_63;
                    }
                    g_83[0] = ((l_115 <= g_25) ^ l_116);
                    l_117 = &l_108;

                    ;
                }
                else
                {
                    int l_118 = 0xEB4CA122L;
                    l_118 = (**p_57);
                    for (g_102 = 0; (g_102 <= 0); g_102 += 1)
                    {
                        struct S0 *l_119 = &g_120;
                        struct S0 **l_121 = (void*)0;
                        struct S0 **l_122 = &l_119;
                        (*l_122) = l_119;
                        g_62 = &g_83[0];

                        ;
                        (*l_122) = l_123;
                    }
                    for (g_102 = 0; (g_102 <= 0); g_102 += 1)
                    {
                        int ***l_126 = &l_61[2];
                        int ****l_125 = &l_126;
                        l_124 = (void*)0;

                        ;
                        l_127[3][1] = (g_83[0] = ((+(&p_57 == ((*l_125) = &l_61[2]))) <= g_120.f0));
                    }
                }
            }

            ;
            ;
            l_128 = &g_83[0];

            ;
            return p_58;
        }
    }

    ;
    return p_58;
}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_19, "g_19", print_hash_value);
    transparent_crc(g_25, "g_25", print_hash_value);
    transparent_crc(g_52, "g_52", print_hash_value);
    transparent_crc(g_63, "g_63", print_hash_value);
    transparent_crc(g_73.f0, "g_73.f0", print_hash_value);
    transparent_crc(g_73.f1, "g_73.f1", print_hash_value);
    transparent_crc(g_76, "g_76", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_83[i], "g_83[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_102, "g_102", print_hash_value);
    transparent_crc(g_106.f0, "g_106.f0", print_hash_value);
    transparent_crc(g_106.f1, "g_106.f1", print_hash_value);
    transparent_crc(g_106.f2, "g_106.f2", print_hash_value);
    transparent_crc(g_106.f3, "g_106.f3", print_hash_value);
    transparent_crc(g_106.f4, "g_106.f4", print_hash_value);
    transparent_crc(g_120.f0, "g_120.f0", print_hash_value);
    transparent_crc(g_120.f1, "g_120.f1", print_hash_value);
    transparent_crc(g_120.f2, "g_120.f2", print_hash_value);
    transparent_crc(g_120.f3, "g_120.f3", print_hash_value);
    transparent_crc(g_120.f4, "g_120.f4", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(g_154[i][j].f0, "g_154[i][j].f0", print_hash_value);
            transparent_crc(g_154[i][j].f1, "g_154[i][j].f1", print_hash_value);
            transparent_crc(g_154[i][j].f2, "g_154[i][j].f2", print_hash_value);
            transparent_crc(g_154[i][j].f3, "g_154[i][j].f3", print_hash_value);
            transparent_crc(g_154[i][j].f4, "g_154[i][j].f4", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_160.f0, "g_160.f0", print_hash_value);
    transparent_crc(g_160.f1, "g_160.f1", print_hash_value);
    transparent_crc(g_160.f2, "g_160.f2", print_hash_value);
    transparent_crc(g_160.f3, "g_160.f3", print_hash_value);
    transparent_crc(g_160.f4, "g_160.f4", print_hash_value);
    transparent_crc(g_179, "g_179", print_hash_value);
    transparent_crc(g_189, "g_189", print_hash_value);
    transparent_crc(g_194, "g_194", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_199[i].f0, "g_199[i].f0", print_hash_value);
        transparent_crc(g_199[i].f1, "g_199[i].f1", print_hash_value);
        transparent_crc(g_199[i].f2, "g_199[i].f2", print_hash_value);
        transparent_crc(g_199[i].f3, "g_199[i].f3", print_hash_value);
        transparent_crc(g_199[i].f4, "g_199[i].f4", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_249.f0, "g_249.f0", print_hash_value);
    transparent_crc(g_249.f1, "g_249.f1", print_hash_value);
    transparent_crc(g_249.f2, "g_249.f2", print_hash_value);
    transparent_crc(g_249.f3, "g_249.f3", print_hash_value);
    transparent_crc(g_249.f4, "g_249.f4", print_hash_value);
    transparent_crc(g_250.f0, "g_250.f0", print_hash_value);
    transparent_crc(g_250.f1, "g_250.f1", print_hash_value);
    transparent_crc(g_250.f2, "g_250.f2", print_hash_value);
    transparent_crc(g_250.f3, "g_250.f3", print_hash_value);
    transparent_crc(g_250.f4, "g_250.f4", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 10; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_298[i][j][k], "g_298[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_316.f0, "g_316.f0", print_hash_value);
    transparent_crc(g_316.f1, "g_316.f1", print_hash_value);
    transparent_crc(g_316.f2, "g_316.f2", print_hash_value);
    transparent_crc(g_316.f3, "g_316.f3", print_hash_value);
    transparent_crc(g_316.f4, "g_316.f4", print_hash_value);
    transparent_crc(g_320.f0, "g_320.f0", print_hash_value);
    transparent_crc(g_320.f1, "g_320.f1", print_hash_value);
    transparent_crc(g_320.f2, "g_320.f2", print_hash_value);
    transparent_crc(g_320.f3, "g_320.f3", print_hash_value);
    transparent_crc(g_320.f4, "g_320.f4", print_hash_value);
    transparent_crc(g_323.f0, "g_323.f0", print_hash_value);
    transparent_crc(g_323.f1, "g_323.f1", print_hash_value);
    transparent_crc(g_324.f0, "g_324.f0", print_hash_value);
    transparent_crc(g_324.f1, "g_324.f1", print_hash_value);
    transparent_crc(g_324.f2, "g_324.f2", print_hash_value);
    transparent_crc(g_324.f3, "g_324.f3", print_hash_value);
    transparent_crc(g_324.f4, "g_324.f4", print_hash_value);
    transparent_crc(g_332.f0, "g_332.f0", print_hash_value);
    transparent_crc(g_332.f1, "g_332.f1", print_hash_value);
    transparent_crc(g_332.f2, "g_332.f2", print_hash_value);
    transparent_crc(g_332.f3, "g_332.f3", print_hash_value);
    transparent_crc(g_332.f4, "g_332.f4", print_hash_value);
    transparent_crc(g_364.f0, "g_364.f0", print_hash_value);
    transparent_crc(g_364.f1, "g_364.f1", print_hash_value);
    transparent_crc(g_364.f2, "g_364.f2", print_hash_value);
    transparent_crc(g_364.f3, "g_364.f3", print_hash_value);
    transparent_crc(g_364.f4, "g_364.f4", print_hash_value);
    transparent_crc(g_409, "g_409", print_hash_value);
    transparent_crc(g_476.f0, "g_476.f0", print_hash_value);
    transparent_crc(g_476.f1, "g_476.f1", print_hash_value);
    transparent_crc(g_476.f2, "g_476.f2", print_hash_value);
    transparent_crc(g_476.f3, "g_476.f3", print_hash_value);
    transparent_crc(g_476.f4, "g_476.f4", print_hash_value);
    transparent_crc(g_477.f0, "g_477.f0", print_hash_value);
    transparent_crc(g_477.f1, "g_477.f1", print_hash_value);
    transparent_crc(g_477.f2, "g_477.f2", print_hash_value);
    transparent_crc(g_477.f3, "g_477.f3", print_hash_value);
    transparent_crc(g_477.f4, "g_477.f4", print_hash_value);
    transparent_crc(g_504.f0, "g_504.f0", print_hash_value);
    transparent_crc(g_504.f1, "g_504.f1", print_hash_value);
    transparent_crc(g_504.f2, "g_504.f2", print_hash_value);
    transparent_crc(g_504.f3, "g_504.f3", print_hash_value);
    transparent_crc(g_504.f4, "g_504.f4", print_hash_value);
    transparent_crc(g_514.f0, "g_514.f0", print_hash_value);
    transparent_crc(g_514.f1, "g_514.f1", print_hash_value);
    transparent_crc(g_514.f2, "g_514.f2", print_hash_value);
    transparent_crc(g_514.f3, "g_514.f3", print_hash_value);
    transparent_crc(g_514.f4, "g_514.f4", print_hash_value);
    transparent_crc(g_540.f0, "g_540.f0", print_hash_value);
    transparent_crc(g_540.f1, "g_540.f1", print_hash_value);
    transparent_crc(g_540.f2, "g_540.f2", print_hash_value);
    transparent_crc(g_540.f3, "g_540.f3", print_hash_value);
    transparent_crc(g_540.f4, "g_540.f4", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_554[i][j], "g_554[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_557.f0, "g_557.f0", print_hash_value);
    transparent_crc(g_557.f1, "g_557.f1", print_hash_value);
    transparent_crc(g_557.f2, "g_557.f2", print_hash_value);
    transparent_crc(g_557.f3, "g_557.f3", print_hash_value);
    transparent_crc(g_557.f4, "g_557.f4", print_hash_value);
    transparent_crc(g_645, "g_645", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(g_656[i][j], "g_656[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_657.f0, "g_657.f0", print_hash_value);
    transparent_crc(g_657.f1, "g_657.f1", print_hash_value);
    transparent_crc(g_657.f2, "g_657.f2", print_hash_value);
    transparent_crc(g_657.f3, "g_657.f3", print_hash_value);
    transparent_crc(g_657.f4, "g_657.f4", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_711[i].f0, "g_711[i].f0", print_hash_value);
        transparent_crc(g_711[i].f1, "g_711[i].f1", print_hash_value);
        transparent_crc(g_711[i].f2, "g_711[i].f2", print_hash_value);
        transparent_crc(g_711[i].f3, "g_711[i].f3", print_hash_value);
        transparent_crc(g_711[i].f4, "g_711[i].f4", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_722.f0, "g_722.f0", print_hash_value);
    transparent_crc(g_722.f1, "g_722.f1", print_hash_value);
    transparent_crc(g_722.f2, "g_722.f2", print_hash_value);
    transparent_crc(g_722.f3, "g_722.f3", print_hash_value);
    transparent_crc(g_722.f4, "g_722.f4", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_734[i][j][k], "g_734[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_742.f0, "g_742.f0", print_hash_value);
    transparent_crc(g_742.f1, "g_742.f1", print_hash_value);
    transparent_crc(g_742.f2, "g_742.f2", print_hash_value);
    transparent_crc(g_742.f3, "g_742.f3", print_hash_value);
    transparent_crc(g_742.f4, "g_742.f4", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_749[i], "g_749[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_788.f0, "g_788.f0", print_hash_value);
    transparent_crc(g_788.f1, "g_788.f1", print_hash_value);
    transparent_crc(g_788.f2, "g_788.f2", print_hash_value);
    transparent_crc(g_788.f3, "g_788.f3", print_hash_value);
    transparent_crc(g_788.f4, "g_788.f4", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_818[i], "g_818[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_828.f0, "g_828.f0", print_hash_value);
    transparent_crc(g_828.f1, "g_828.f1", print_hash_value);
    transparent_crc(g_828.f2, "g_828.f2", print_hash_value);
    transparent_crc(g_828.f3, "g_828.f3", print_hash_value);
    transparent_crc(g_828.f4, "g_828.f4", print_hash_value);
    transparent_crc(g_829.f0, "g_829.f0", print_hash_value);
    transparent_crc(g_829.f1, "g_829.f1", print_hash_value);
    transparent_crc(g_829.f2, "g_829.f2", print_hash_value);
    transparent_crc(g_829.f3, "g_829.f3", print_hash_value);
    transparent_crc(g_829.f4, "g_829.f4", print_hash_value);
    transparent_crc(g_832.f0, "g_832.f0", print_hash_value);
    transparent_crc(g_832.f1, "g_832.f1", print_hash_value);
    transparent_crc(g_832.f2, "g_832.f2", print_hash_value);
    transparent_crc(g_832.f3, "g_832.f3", print_hash_value);
    transparent_crc(g_832.f4, "g_832.f4", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_867[i], "g_867[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_887.f0, "g_887.f0", print_hash_value);
    transparent_crc(g_887.f1, "g_887.f1", print_hash_value);
    transparent_crc(g_887.f2, "g_887.f2", print_hash_value);
    transparent_crc(g_887.f3, "g_887.f3", print_hash_value);
    transparent_crc(g_887.f4, "g_887.f4", print_hash_value);
    transparent_crc(g_891.f0, "g_891.f0", print_hash_value);
    transparent_crc(g_891.f1, "g_891.f1", print_hash_value);
    transparent_crc(g_891.f2, "g_891.f2", print_hash_value);
    transparent_crc(g_891.f3, "g_891.f3", print_hash_value);
    transparent_crc(g_891.f4, "g_891.f4", print_hash_value);
    transparent_crc(g_909.f0, "g_909.f0", print_hash_value);
    transparent_crc(g_909.f1, "g_909.f1", print_hash_value);
    transparent_crc(g_909.f2, "g_909.f2", print_hash_value);
    transparent_crc(g_909.f3, "g_909.f3", print_hash_value);
    transparent_crc(g_909.f4, "g_909.f4", print_hash_value);
    transparent_crc(g_950, "g_950", print_hash_value);
    transparent_crc(g_968, "g_968", print_hash_value);
    transparent_crc(g_991.f0, "g_991.f0", print_hash_value);
    transparent_crc(g_991.f1, "g_991.f1", print_hash_value);
    transparent_crc(g_991.f2, "g_991.f2", print_hash_value);
    transparent_crc(g_991.f3, "g_991.f3", print_hash_value);
    transparent_crc(g_991.f4, "g_991.f4", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
