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
   signed f0 : 11;
   volatile unsigned f1 : 22;
   unsigned f2 : 1;
   signed f3 : 8;
   unsigned f4 : 25;
   volatile signed f5 : 14;
};


static volatile unsigned short g_15 = 0x493EL;
static int g_16 = 0x4EA14C55L;
static short g_18 = 0x2BF5L;
static short g_39 = 0x79A1L;
static volatile int g_41[5] = {0x6FAE7A48L, 0x6FAE7A48L, 0x6FAE7A48L, 0x6FAE7A48L, 0x6FAE7A48L};
static volatile int *g_40 = &g_41[4];
static int g_82 = (-9L);
static int *g_81 = &g_82;
static int **g_80 = &g_81;
static int g_91[6] = {0L, 0L, 0L, 0L, 0L, 0L};
static int *g_93 = &g_91[3];
static short g_104 = 0L;
static unsigned char g_113[3][10][4] = {{{0x70L, 8UL, 0x33L, 1UL}, {0x70L, 8UL, 0x33L, 1UL}, {0x70L, 8UL, 0x33L, 1UL}, {0x70L, 8UL, 0x33L, 1UL}, {0x70L, 8UL, 0x33L, 1UL}, {0x70L, 8UL, 0x33L, 1UL}, {0x70L, 8UL, 0x33L, 1UL}, {0x70L, 8UL, 0x33L, 1UL}, {0x70L, 8UL, 0x33L, 1UL}, {0x70L, 8UL, 0x33L, 1UL}}, {{0x70L, 8UL, 0x33L, 1UL}, {0x70L, 8UL, 0x33L, 1UL}, {0x70L, 8UL, 0x33L, 1UL}, {0x70L, 8UL, 0x33L, 1UL}, {0x70L, 8UL, 0x33L, 1UL}, {0x70L, 8UL, 0x33L, 1UL}, {0x70L, 8UL, 0x33L, 1UL}, {0x70L, 8UL, 0x33L, 1UL}, {0x70L, 8UL, 0x33L, 1UL}, {0x70L, 8UL, 0x33L, 1UL}}, {{0x70L, 8UL, 0x33L, 1UL}, {0x70L, 8UL, 0x33L, 1UL}, {0x70L, 8UL, 0x33L, 1UL}, {0x70L, 8UL, 0x33L, 1UL}, {0x70L, 8UL, 0x33L, 1UL}, {0x70L, 8UL, 0x33L, 1UL}, {0x70L, 8UL, 0x33L, 1UL}, {0x70L, 8UL, 0x33L, 1UL}, {0x70L, 8UL, 0x33L, 1UL}, {0x70L, 8UL, 0x33L, 1UL}}};
static char g_170 = 0x07L;
static struct S0 g_177 = {-18,1911,0,-4,4612,106};
static struct S0 g_184[10][1] = {{{-9,756,0,8,1826,-123}}, {{-9,756,0,8,1826,-123}}, {{-9,756,0,8,1826,-123}}, {{-9,756,0,8,1826,-123}}, {{-9,756,0,8,1826,-123}}, {{-9,756,0,8,1826,-123}}, {{-9,756,0,8,1826,-123}}, {{-9,756,0,8,1826,-123}}, {{-9,756,0,8,1826,-123}}, {{-9,756,0,8,1826,-123}}};
static struct S0 g_204 = {19,740,0,-5,4319,86};
static struct S0 *g_203 = &g_204;
static struct S0 **g_202[4][7] = {{(void*)0, &g_203, &g_203, &g_203, &g_203, &g_203, &g_203}, {(void*)0, &g_203, &g_203, &g_203, &g_203, &g_203, &g_203}, {(void*)0, &g_203, &g_203, &g_203, &g_203, &g_203, &g_203}, {(void*)0, &g_203, &g_203, &g_203, &g_203, &g_203, &g_203}};
static unsigned g_206 = 0x9E9CABACL;
static struct S0 g_213 = {29,1609,0,-1,4275,2};
static struct S0 g_215[10][7] = {{{22,1400,0,-2,5311,49}, {-15,725,0,-10,4570,-116}, {-39,509,0,15,2918,-67}, {-4,1445,0,-1,1508,-43}, {-39,509,0,15,2918,-67}, {-15,725,0,-10,4570,-116}, {22,1400,0,-2,5311,49}}, {{22,1400,0,-2,5311,49}, {-15,725,0,-10,4570,-116}, {-39,509,0,15,2918,-67}, {-4,1445,0,-1,1508,-43}, {-39,509,0,15,2918,-67}, {-15,725,0,-10,4570,-116}, {22,1400,0,-2,5311,49}}, {{22,1400,0,-2,5311,49}, {-15,725,0,-10,4570,-116}, {-39,509,0,15,2918,-67}, {-4,1445,0,-1,1508,-43}, {-39,509,0,15,2918,-67}, {-15,725,0,-10,4570,-116}, {22,1400,0,-2,5311,49}}, {{22,1400,0,-2,5311,49}, {-15,725,0,-10,4570,-116}, {-39,509,0,15,2918,-67}, {-4,1445,0,-1,1508,-43}, {-39,509,0,15,2918,-67}, {-15,725,0,-10,4570,-116}, {22,1400,0,-2,5311,49}}, {{22,1400,0,-2,5311,49}, {-15,725,0,-10,4570,-116}, {-39,509,0,15,2918,-67}, {-4,1445,0,-1,1508,-43}, {-39,509,0,15,2918,-67}, {-15,725,0,-10,4570,-116}, {22,1400,0,-2,5311,49}}, {{22,1400,0,-2,5311,49}, {-15,725,0,-10,4570,-116}, {-39,509,0,15,2918,-67}, {-4,1445,0,-1,1508,-43}, {-39,509,0,15,2918,-67}, {-15,725,0,-10,4570,-116}, {22,1400,0,-2,5311,49}}, {{22,1400,0,-2,5311,49}, {-15,725,0,-10,4570,-116}, {-39,509,0,15,2918,-67}, {-4,1445,0,-1,1508,-43}, {-39,509,0,15,2918,-67}, {-15,725,0,-10,4570,-116}, {22,1400,0,-2,5311,49}}, {{22,1400,0,-2,5311,49}, {-15,725,0,-10,4570,-116}, {-39,509,0,15,2918,-67}, {-4,1445,0,-1,1508,-43}, {-39,509,0,15,2918,-67}, {-15,725,0,-10,4570,-116}, {22,1400,0,-2,5311,49}}, {{22,1400,0,-2,5311,49}, {-15,725,0,-10,4570,-116}, {-39,509,0,15,2918,-67}, {-4,1445,0,-1,1508,-43}, {-39,509,0,15,2918,-67}, {-15,725,0,-10,4570,-116}, {22,1400,0,-2,5311,49}}, {{22,1400,0,-2,5311,49}, {-15,725,0,-10,4570,-116}, {-39,509,0,15,2918,-67}, {-4,1445,0,-1,1508,-43}, {-39,509,0,15,2918,-67}, {-15,725,0,-10,4570,-116}, {22,1400,0,-2,5311,49}}};
static unsigned short g_230 = 0xC9F8L;
static unsigned char g_275[9] = {1UL, 1UL, 0x35L, 1UL, 1UL, 0x35L, 1UL, 1UL, 0x35L};
static unsigned char g_277 = 0x4BL;
static unsigned char *g_315[2] = {&g_275[0], &g_275[0]};
static unsigned char **g_314 = &g_315[0];
static unsigned char ***g_313 = &g_314;
static int g_332 = 0xC1E4EE88L;
static unsigned g_336[3][3][1] = {{{0x5C1A0240L}, {0x5C1A0240L}, {0x5C1A0240L}}, {{0x5C1A0240L}, {0x5C1A0240L}, {0x5C1A0240L}}, {{0x5C1A0240L}, {0x5C1A0240L}, {0x5C1A0240L}}};
static int g_339 = 0x121A7B5CL;
static short g_341 = (-1L);
static short *g_340[4][8] = {{&g_341, &g_341, &g_341, &g_341, &g_341, &g_341, &g_341, &g_341}, {&g_341, &g_341, &g_341, &g_341, &g_341, &g_341, &g_341, &g_341}, {&g_341, &g_341, &g_341, &g_341, &g_341, &g_341, &g_341, &g_341}, {&g_341, &g_341, &g_341, &g_341, &g_341, &g_341, &g_341, &g_341}};
static int g_357 = 0x7C8E040BL;
static int *g_376 = (void*)0;
static struct S0 g_382 = {-44,1491,0,-2,5479,65};
static char g_406 = 0x65L;
static struct S0 g_442 = {21,348,0,-9,5614,-30};
static struct S0 g_444 = {-22,555,0,-11,2036,-73};
static char *g_457 = &g_406;
static unsigned short g_472[2] = {0xE96FL, 0xE96FL};
static struct S0 g_540 = {13,592,0,8,5063,107};
static struct S0 g_541 = {-21,711,0,-14,3853,122};
static struct S0 g_557 = {14,521,0,-10,3996,66};
static struct S0 g_560[6] = {{-19,1125,0,9,4289,13}, {41,1559,0,-4,401,-3}, {-19,1125,0,9,4289,13}, {41,1559,0,-4,401,-3}, {-19,1125,0,9,4289,13}, {41,1559,0,-4,401,-3}};
static int *g_591 = &g_357;
static short **g_594[2][5][7] = {{{&g_340[1][5], &g_340[1][5], (void*)0, (void*)0, &g_340[1][5], &g_340[1][5], &g_340[0][0]}, {&g_340[1][5], &g_340[1][5], (void*)0, (void*)0, &g_340[1][5], &g_340[1][5], &g_340[0][0]}, {&g_340[1][5], &g_340[1][5], (void*)0, (void*)0, &g_340[1][5], &g_340[1][5], &g_340[0][0]}, {&g_340[1][5], &g_340[1][5], (void*)0, (void*)0, &g_340[1][5], &g_340[1][5], &g_340[0][0]}, {&g_340[1][5], &g_340[1][5], (void*)0, (void*)0, &g_340[1][5], &g_340[1][5], &g_340[0][0]}}, {{&g_340[1][5], &g_340[1][5], (void*)0, (void*)0, &g_340[1][5], &g_340[1][5], &g_340[0][0]}, {&g_340[1][5], &g_340[1][5], (void*)0, (void*)0, &g_340[1][5], &g_340[1][5], &g_340[0][0]}, {&g_340[1][5], &g_340[1][5], (void*)0, (void*)0, &g_340[1][5], &g_340[1][5], &g_340[0][0]}, {&g_340[1][5], &g_340[1][5], (void*)0, (void*)0, &g_340[1][5], &g_340[1][5], &g_340[0][0]}, {&g_340[1][5], &g_340[1][5], (void*)0, (void*)0, &g_340[1][5], &g_340[1][5], &g_340[0][0]}}};
static struct S0 g_599[6] = {{-13,1406,0,-3,2846,-55}, {-13,1406,0,-3,2846,-55}, {-13,1406,0,-3,2846,-55}, {-13,1406,0,-3,2846,-55}, {-13,1406,0,-3,2846,-55}, {-13,1406,0,-3,2846,-55}};
static volatile struct S0 g_604 = {-39,857,0,14,1034,54};
static short *g_614 = (void*)0;
static struct S0 g_615 = {-37,144,0,-2,161,55};
static struct S0 g_616 = {-4,1820,0,-15,10,16};
static volatile struct S0 g_619 = {13,1216,0,-14,1737,0};
static struct S0 g_629[2][9] = {{{-5,678,0,-11,5432,16}, {-31,1883,0,-1,821,73}, {20,667,0,-12,922,-24}, {-31,1883,0,-1,821,73}, {-5,678,0,-11,5432,16}, {-31,1883,0,-1,821,73}, {20,667,0,-12,922,-24}, {-31,1883,0,-1,821,73}, {-5,678,0,-11,5432,16}}, {{-5,678,0,-11,5432,16}, {-31,1883,0,-1,821,73}, {20,667,0,-12,922,-24}, {-31,1883,0,-1,821,73}, {-5,678,0,-11,5432,16}, {-31,1883,0,-1,821,73}, {20,667,0,-12,922,-24}, {-31,1883,0,-1,821,73}, {-5,678,0,-11,5432,16}}};
static struct S0 g_630[6][4][1] = {{{{33,2047,0,14,3955,-52}}, {{33,2047,0,14,3955,-52}}, {{33,2047,0,14,3955,-52}}, {{33,2047,0,14,3955,-52}}}, {{{33,2047,0,14,3955,-52}}, {{33,2047,0,14,3955,-52}}, {{33,2047,0,14,3955,-52}}, {{33,2047,0,14,3955,-52}}}, {{{33,2047,0,14,3955,-52}}, {{33,2047,0,14,3955,-52}}, {{33,2047,0,14,3955,-52}}, {{33,2047,0,14,3955,-52}}}, {{{33,2047,0,14,3955,-52}}, {{33,2047,0,14,3955,-52}}, {{33,2047,0,14,3955,-52}}, {{33,2047,0,14,3955,-52}}}, {{{33,2047,0,14,3955,-52}}, {{33,2047,0,14,3955,-52}}, {{33,2047,0,14,3955,-52}}, {{33,2047,0,14,3955,-52}}}, {{{33,2047,0,14,3955,-52}}, {{33,2047,0,14,3955,-52}}, {{33,2047,0,14,3955,-52}}, {{33,2047,0,14,3955,-52}}}};
static unsigned *g_660 = &g_206;
static unsigned *g_661 = &g_336[0][0][0];
static struct S0 g_670 = {-18,599,0,-10,3336,91};
static struct S0 g_671 = {20,1282,0,-15,2177,-63};
static struct S0 g_715 = {1,736,0,1,3216,-117};
static volatile int g_731 = 0x7C079769L;
static unsigned g_738 = 5UL;
static struct S0 g_742[7][8][2] = {{{{38,847,0,2,2561,66}, {-35,69,0,6,4710,-62}}, {{38,847,0,2,2561,66}, {-35,69,0,6,4710,-62}}, {{38,847,0,2,2561,66}, {-35,69,0,6,4710,-62}}, {{38,847,0,2,2561,66}, {-35,69,0,6,4710,-62}}, {{38,847,0,2,2561,66}, {-35,69,0,6,4710,-62}}, {{38,847,0,2,2561,66}, {-35,69,0,6,4710,-62}}, {{38,847,0,2,2561,66}, {-35,69,0,6,4710,-62}}, {{38,847,0,2,2561,66}, {-35,69,0,6,4710,-62}}}, {{{38,847,0,2,2561,66}, {-35,69,0,6,4710,-62}}, {{38,847,0,2,2561,66}, {-35,69,0,6,4710,-62}}, {{38,847,0,2,2561,66}, {-35,69,0,6,4710,-62}}, {{38,847,0,2,2561,66}, {-35,69,0,6,4710,-62}}, {{38,847,0,2,2561,66}, {-35,69,0,6,4710,-62}}, {{38,847,0,2,2561,66}, {-35,69,0,6,4710,-62}}, {{38,847,0,2,2561,66}, {-35,69,0,6,4710,-62}}, {{38,847,0,2,2561,66}, {-35,69,0,6,4710,-62}}}, {{{38,847,0,2,2561,66}, {-35,69,0,6,4710,-62}}, {{38,847,0,2,2561,66}, {-35,69,0,6,4710,-62}}, {{38,847,0,2,2561,66}, {-35,69,0,6,4710,-62}}, {{38,847,0,2,2561,66}, {-35,69,0,6,4710,-62}}, {{38,847,0,2,2561,66}, {-35,69,0,6,4710,-62}}, {{38,847,0,2,2561,66}, {-35,69,0,6,4710,-62}}, {{38,847,0,2,2561,66}, {-35,69,0,6,4710,-62}}, {{38,847,0,2,2561,66}, {-35,69,0,6,4710,-62}}}, {{{38,847,0,2,2561,66}, {-35,69,0,6,4710,-62}}, {{38,847,0,2,2561,66}, {-35,69,0,6,4710,-62}}, {{38,847,0,2,2561,66}, {-35,69,0,6,4710,-62}}, {{38,847,0,2,2561,66}, {-35,69,0,6,4710,-62}}, {{38,847,0,2,2561,66}, {-35,69,0,6,4710,-62}}, {{38,847,0,2,2561,66}, {-35,69,0,6,4710,-62}}, {{38,847,0,2,2561,66}, {-35,69,0,6,4710,-62}}, {{38,847,0,2,2561,66}, {-35,69,0,6,4710,-62}}}, {{{38,847,0,2,2561,66}, {-35,69,0,6,4710,-62}}, {{38,847,0,2,2561,66}, {-35,69,0,6,4710,-62}}, {{38,847,0,2,2561,66}, {-35,69,0,6,4710,-62}}, {{38,847,0,2,2561,66}, {-35,69,0,6,4710,-62}}, {{38,847,0,2,2561,66}, {-35,69,0,6,4710,-62}}, {{38,847,0,2,2561,66}, {-35,69,0,6,4710,-62}}, {{38,847,0,2,2561,66}, {-35,69,0,6,4710,-62}}, {{38,847,0,2,2561,66}, {-35,69,0,6,4710,-62}}}, {{{38,847,0,2,2561,66}, {-35,69,0,6,4710,-62}}, {{38,847,0,2,2561,66}, {-35,69,0,6,4710,-62}}, {{38,847,0,2,2561,66}, {-35,69,0,6,4710,-62}}, {{38,847,0,2,2561,66}, {-35,69,0,6,4710,-62}}, {{38,847,0,2,2561,66}, {-35,69,0,6,4710,-62}}, {{38,847,0,2,2561,66}, {-35,69,0,6,4710,-62}}, {{38,847,0,2,2561,66}, {-35,69,0,6,4710,-62}}, {{38,847,0,2,2561,66}, {-35,69,0,6,4710,-62}}}, {{{38,847,0,2,2561,66}, {-35,69,0,6,4710,-62}}, {{38,847,0,2,2561,66}, {-35,69,0,6,4710,-62}}, {{38,847,0,2,2561,66}, {-35,69,0,6,4710,-62}}, {{38,847,0,2,2561,66}, {-35,69,0,6,4710,-62}}, {{38,847,0,2,2561,66}, {-35,69,0,6,4710,-62}}, {{38,847,0,2,2561,66}, {-35,69,0,6,4710,-62}}, {{38,847,0,2,2561,66}, {-35,69,0,6,4710,-62}}, {{38,847,0,2,2561,66}, {-35,69,0,6,4710,-62}}}};
static struct S0 g_743 = {-29,1008,0,10,5116,-126};
static struct S0 g_766[5][3][2] = {{{{-31,931,0,8,2244,41}, {-32,1969,0,15,3805,93}}, {{-31,931,0,8,2244,41}, {-32,1969,0,15,3805,93}}, {{-31,931,0,8,2244,41}, {-32,1969,0,15,3805,93}}}, {{{-31,931,0,8,2244,41}, {-32,1969,0,15,3805,93}}, {{-31,931,0,8,2244,41}, {-32,1969,0,15,3805,93}}, {{-31,931,0,8,2244,41}, {-32,1969,0,15,3805,93}}}, {{{-31,931,0,8,2244,41}, {-32,1969,0,15,3805,93}}, {{-31,931,0,8,2244,41}, {-32,1969,0,15,3805,93}}, {{-31,931,0,8,2244,41}, {-32,1969,0,15,3805,93}}}, {{{-31,931,0,8,2244,41}, {-32,1969,0,15,3805,93}}, {{-31,931,0,8,2244,41}, {-32,1969,0,15,3805,93}}, {{-31,931,0,8,2244,41}, {-32,1969,0,15,3805,93}}}, {{{-31,931,0,8,2244,41}, {-32,1969,0,15,3805,93}}, {{-31,931,0,8,2244,41}, {-32,1969,0,15,3805,93}}, {{-31,931,0,8,2244,41}, {-32,1969,0,15,3805,93}}}};
static struct S0 g_768 = {41,480,0,-5,1007,120};



static unsigned func_1(void);
static struct S0 func_5(unsigned char p_6, unsigned p_7, unsigned char p_8, short p_9, char p_10);
static unsigned func_19(short p_20, short * p_21);
static short * func_32(short p_33, unsigned short p_34, short * p_35, int p_36, int p_37);
static short func_53(int ** p_54, unsigned p_55, int p_56, unsigned p_57);
static unsigned func_60(int p_61, int ** p_62, short * p_63, unsigned p_64);
static short func_67(short p_68);
static int * func_69(short * p_70);
static int func_74(int p_75, int ** p_76);
static int ** func_78(int ** p_79);
static unsigned func_1(void)
{
    unsigned char l_4 = 0xD9L;
    short *l_17 = &g_18;
    int l_534 = 0x9DC5050FL;
    int l_769[5][8] = {{0x19B3BDCEL, 0x1FA471FEL, 0x19B3BDCEL, 0x1FA471FEL, 0x19B3BDCEL, 0x1FA471FEL, 0x19B3BDCEL, 0x1FA471FEL}, {0x19B3BDCEL, 0x1FA471FEL, 0x19B3BDCEL, 0x1FA471FEL, 0x19B3BDCEL, 0x1FA471FEL, 0x19B3BDCEL, 0x1FA471FEL}, {0x19B3BDCEL, 0x1FA471FEL, 0x19B3BDCEL, 0x1FA471FEL, 0x19B3BDCEL, 0x1FA471FEL, 0x19B3BDCEL, 0x1FA471FEL}, {0x19B3BDCEL, 0x1FA471FEL, 0x19B3BDCEL, 0x1FA471FEL, 0x19B3BDCEL, 0x1FA471FEL, 0x19B3BDCEL, 0x1FA471FEL}, {0x19B3BDCEL, 0x1FA471FEL, 0x19B3BDCEL, 0x1FA471FEL, 0x19B3BDCEL, 0x1FA471FEL, 0x19B3BDCEL, 0x1FA471FEL}};
    int i, j;
    l_769[3][4] = ((safe_lshift_func_uint8_t_u_s(((l_4 , func_5((((((safe_mod_func_int32_t_s_s((((((1UL < ((safe_mod_func_uint8_t_u_u(l_4, g_15)) | (0L <= (l_534 = (((*l_17) = g_16) | (l_4 == ((func_19((safe_mod_func_int8_t_s_s(((l_4 | (safe_sub_func_uint8_t_u_u(255UL, 0xFAL))) >= (-1L)), g_16)), l_17) , (**g_314)) & l_4))))))) , l_534) == g_184[2][0].f2) >= l_4) && l_4), g_406)) ^ l_4) | 0x73922109L) , (**g_314)) , l_534), l_4, g_177.f2, l_4, g_444.f0)) , 0UL), 6)) || 0x9DL);


    ;
    ;




    ;
    ;
    return g_766[4][0][1].f0;
}







static struct S0 func_5(unsigned char p_6, unsigned p_7, unsigned char p_8, short p_9, char p_10)
{
    int **l_537 = &g_81;
    int l_538 = (-1L);
    unsigned *l_539[3];
    short *l_553 = &g_104;
    short l_595 = 0xAE5EL;
    int l_598[2][6][1] = {{{(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}}, {{(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}}};
    unsigned char *l_610 = &g_113[0][6][0];
    short *l_684 = &g_341;
    unsigned l_695 = 4294967295UL;
    unsigned **l_708 = &l_539[1];
    unsigned ***l_707 = &l_708;
    int *l_752 = (void*)0;
    struct S0 ***l_764 = &g_202[0][2];
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_539[i] = &g_336[0][0][0];
    if ((safe_rshift_func_int16_t_s_u(0L, g_177.f5)))
    {
        return g_540;
    }
    else
    {
        struct S0 *l_542 = &g_442;
        int **l_574[2];
        int *l_590 = &g_357;
        short *l_597 = &g_341;
        char l_645[7][7][5] = {{{0L, 0x87L, 0L, 0xABL, (-1L)}, {0L, 0x87L, 0L, 0xABL, (-1L)}, {0L, 0x87L, 0L, 0xABL, (-1L)}, {0L, 0x87L, 0L, 0xABL, (-1L)}, {0L, 0x87L, 0L, 0xABL, (-1L)}, {0L, 0x87L, 0L, 0xABL, (-1L)}, {0L, 0x87L, 0L, 0xABL, (-1L)}}, {{0L, 0x87L, 0L, 0xABL, (-1L)}, {0L, 0x87L, 0L, 0xABL, (-1L)}, {0L, 0x87L, 0L, 0xABL, (-1L)}, {0L, 0x87L, 0L, 0xABL, (-1L)}, {0L, 0x87L, 0L, 0xABL, (-1L)}, {0L, 0x87L, 0L, 0xABL, (-1L)}, {0L, 0x87L, 0L, 0xABL, (-1L)}}, {{0L, 0x87L, 0L, 0xABL, (-1L)}, {0L, 0x87L, 0L, 0xABL, (-1L)}, {0L, 0x87L, 0L, 0xABL, (-1L)}, {0L, 0x87L, 0L, 0xABL, (-1L)}, {0L, 0x87L, 0L, 0xABL, (-1L)}, {0L, 0x87L, 0L, 0xABL, (-1L)}, {0L, 0x87L, 0L, 0xABL, (-1L)}}, {{0L, 0x87L, 0L, 0xABL, (-1L)}, {0L, 0x87L, 0L, 0xABL, (-1L)}, {0L, 0x87L, 0L, 0xABL, (-1L)}, {0L, 0x87L, 0L, 0xABL, (-1L)}, {0L, 0x87L, 0L, 0xABL, (-1L)}, {0L, 0x87L, 0L, 0xABL, (-1L)}, {0L, 0x87L, 0L, 0xABL, (-1L)}}, {{0L, 0x87L, 0L, 0xABL, (-1L)}, {0L, 0x87L, 0L, 0xABL, (-1L)}, {0L, 0x87L, 0L, 0xABL, (-1L)}, {0L, 0x87L, 0L, 0xABL, (-1L)}, {0L, 0x87L, 0L, 0xABL, (-1L)}, {0L, 0x87L, 0L, 0xABL, (-1L)}, {0L, 0x87L, 0L, 0xABL, (-1L)}}, {{0L, 0x87L, 0L, 0xABL, (-1L)}, {0L, 0x87L, 0L, 0xABL, (-1L)}, {0L, 0x87L, 0L, 0xABL, (-1L)}, {0L, 0x87L, 0L, 0xABL, (-1L)}, {0L, 0x87L, 0L, 0xABL, (-1L)}, {0L, 0x87L, 0L, 0xABL, (-1L)}, {0L, 0x87L, 0L, 0xABL, (-1L)}}, {{0L, 0x87L, 0L, 0xABL, (-1L)}, {0L, 0x87L, 0L, 0xABL, (-1L)}, {0L, 0x87L, 0L, 0xABL, (-1L)}, {0L, 0x87L, 0L, 0xABL, (-1L)}, {0L, 0x87L, 0L, 0xABL, (-1L)}, {0L, 0x87L, 0L, 0xABL, (-1L)}, {0L, 0x87L, 0L, 0xABL, (-1L)}}};
        int *l_664 = (void*)0;
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_574[i] = &g_81;
        (*l_542) = g_541;
        for (g_341 = 0; (g_341 < 1); g_341++)
        {
            int *l_554 = &g_339;
            struct S0 **l_558 = &l_542;
            char *l_572 = &g_406;
            short *l_611[3];
            unsigned l_663 = 4294967295UL;
            unsigned short l_669 = 65526UL;
            int i;
            for (i = 0; i < 3; i++)
                l_611[i] = &l_595;
            for (p_10 = 0; (p_10 < (-13)); p_10--)
            {
                int *l_569[4][10] = {{&g_16, &g_16, &g_16, &g_357, &g_357, &g_357, &g_16, &g_16, &g_16, &g_16}, {&g_16, &g_16, &g_16, &g_357, &g_357, &g_357, &g_16, &g_16, &g_16, &g_16}, {&g_16, &g_16, &g_16, &g_357, &g_357, &g_357, &g_16, &g_16, &g_16, &g_16}, {&g_16, &g_16, &g_16, &g_357, &g_357, &g_357, &g_16, &g_16, &g_16, &g_16}};
                int **l_568[2][2] = {{&l_569[2][2], &l_569[2][7]}, {&l_569[2][2], &l_569[2][7]}};
                int l_573 = 1L;
                short *l_596[4][2][10] = {{{&g_104, &g_39, &g_39, &g_39, &g_104, &g_341, &g_104, &g_39, &g_39, &g_39}, {&g_104, &g_39, &g_39, &g_39, &g_104, &g_341, &g_104, &g_39, &g_39, &g_39}}, {{&g_104, &g_39, &g_39, &g_39, &g_104, &g_341, &g_104, &g_39, &g_39, &g_39}, {&g_104, &g_39, &g_39, &g_39, &g_104, &g_341, &g_104, &g_39, &g_39, &g_39}}, {{&g_104, &g_39, &g_39, &g_39, &g_104, &g_341, &g_104, &g_39, &g_39, &g_39}, {&g_104, &g_39, &g_39, &g_39, &g_104, &g_341, &g_104, &g_39, &g_39, &g_39}}, {{&g_104, &g_39, &g_39, &g_39, &g_104, &g_341, &g_104, &g_39, &g_39, &g_39}, {&g_104, &g_39, &g_39, &g_39, &g_104, &g_341, &g_104, &g_39, &g_39, &g_39}}};
                int i, j, k;
                if ((safe_add_func_uint32_t_u_u(4294967288UL, 0x33EB8F7BL)))
                {
                    int *l_551[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_551[i] = &g_339;
                    for (g_18 = 3; (g_18 >= 0); g_18 -= 1)
                    {
                        int *l_549 = &g_339;
                        short *l_550 = &g_18;
                        int **l_552 = &g_93;
                        (*g_80) = l_549;

                        ;
                        (*l_552) = ((*g_80) = l_551[1]);

                        ;
                    }
                    (*g_80) = l_554;

                    ;
                }
                else
                {
                    for (g_406 = 23; (g_406 != (-6)); g_406--)
                    {
                        return g_557;


                    }
                    for (g_16 = 0; (g_16 <= 3); g_16 += 1)
                    {
                        struct S0 ***l_559 = &g_202[1][5];
                        (*l_559) = l_558;


                        return g_560[3];



                    }
                }
                for (p_8 = (-15); (p_8 <= 50); p_8 = safe_add_func_uint8_t_u_u(p_8, 2))
                {
                    unsigned l_577[8];
                    int i;
                    for (i = 0; i < 8; i++)
                        l_577[i] = 4294967295UL;
                    for (g_39 = 1; (g_39 != (-29)); --g_39)
                    {
                        int *l_567 = &g_16;
                        int **l_566 = &l_567;
                        int ***l_565[7][10] = {{&l_566, &l_566, &l_566, &l_566, &l_566, &l_566, (void*)0, (void*)0, &l_566, &l_566}, {&l_566, &l_566, &l_566, &l_566, &l_566, &l_566, (void*)0, (void*)0, &l_566, &l_566}, {&l_566, &l_566, &l_566, &l_566, &l_566, &l_566, (void*)0, (void*)0, &l_566, &l_566}, {&l_566, &l_566, &l_566, &l_566, &l_566, &l_566, (void*)0, (void*)0, &l_566, &l_566}, {&l_566, &l_566, &l_566, &l_566, &l_566, &l_566, (void*)0, (void*)0, &l_566, &l_566}, {&l_566, &l_566, &l_566, &l_566, &l_566, &l_566, (void*)0, (void*)0, &l_566, &l_566}, {&l_566, &l_566, &l_566, &l_566, &l_566, &l_566, (void*)0, (void*)0, &l_566, &l_566}};
                        int l_582 = 0x5B0D8066L;
                        unsigned short *l_583 = &g_472[1];
                        int i, j;
                        l_568[0][0] = (void*)0;
                        (*l_554) = (l_582 = (((*l_583) = (safe_add_func_int8_t_s_s((l_572 != ((l_573 || ((l_582 == (-1L)) , p_9)) , &p_10)), 0x81L))) >= l_582));
                        (*g_80) = &l_573;

                        ;
                        (*g_40) = (p_9 != (-1L));
                    }
                }



                for (l_573 = 12; (l_573 >= (-6)); l_573--)
                {
                    (*g_40) = ((safe_mul_func_int16_t_s_s((-3L), ((safe_rshift_func_int8_t_s_s((-6L), (((l_590 = l_554) == (g_591 = l_554)) | ((safe_add_func_uint16_t_u_u(((g_594[1][3][4] = &g_340[3][4]) == &g_340[2][1]), p_9)) & ((0x7BL == 0L) >= l_595))))) , g_557.f4))) && p_6);

                    ;
                    ;
                    (*g_80) = &g_339;

                    ;
                    if ((*l_554))
                    {
                        (*l_537) = l_554;
                        if (l_598[0][5][0])
                            continue;
                        (*l_537) = (*l_537);
                        (**l_558) = g_599[2];
                    }
                    else
                    {
                        (*g_80) = (void*)0;

                        ;
                        (*l_537) = l_554;

                        ;
                    }
                    if ((*g_40))
                        continue;
                }
                if (l_573)
                    continue;

            }
            for (p_6 = 0; (p_6 >= 38); ++p_6)
            {
                int l_605 = 0xF5A6E253L;
                int *l_618[4] = {&l_598[0][3][0], (void*)0, &l_598[0][3][0], (void*)0};
                int i;
                for (g_170 = 0; (g_170 == 17); ++g_170)
                {
                    int l_612 = 0xCCAC9D5BL;
                    short **l_613 = &l_611[1];
                    int *l_620 = &l_598[0][5][0];
                    (**l_558) = g_604;
                    for (g_104 = 0; (g_104 <= 1); g_104 += 1)
                    {
                        (*g_80) = &g_91[4];

                        ;
                    }
                    (*g_40) = (p_10 > (**g_314));
                    if (((*l_554) = func_60(((*l_590) = func_60(l_605, &g_81, ((*l_613) = ((safe_lshift_func_uint16_t_u_u(0xFE29L, 2)) , func_32(((func_60(((255UL != l_605) , ((g_604.f3 & (safe_lshift_func_uint8_t_u_s(((*g_314) == l_610), ((*l_554) >= (**g_314))))) , l_605)), &l_554, l_611[2], l_605) > p_10) , 8L), g_541.f4, &l_595, l_612, (*g_591)))), l_612)), l_574[1], g_614, g_204.f3)))
                    {
                        g_616 = g_615;
                        (*g_80) = (void*)0;

                        ;
                    }
                    else
                    {
                        int *l_617 = &l_538;
                        l_618[3] = l_617;
                        (*l_542) = g_619;
                        (*g_80) = l_620;

                        ;
                    }

                    ;
                }


            }


            for (p_10 = 0; (p_10 <= 1); p_10 = safe_add_func_int32_t_s_s(p_10, 3))
            {
                unsigned char ***l_641 = &g_314;
                struct S0 **l_642 = &l_542;
                int **l_643 = (void*)0;
                int ***l_644 = &l_643;
                int *l_649 = &g_339;
                char **l_657 = (void*)0;
                unsigned l_662 = 4294967295UL;
                for (l_538 = 0; (l_538 <= 29); l_538 = safe_add_func_int32_t_s_s(l_538, 7))
                {
                    (**l_558) = (*l_542);
                }
                for (g_82 = 14; (g_82 > 15); ++g_82)
                {
                    if (p_10)
                        break;
                    for (l_538 = 0; (l_538 != 29); l_538++)
                    {
                        (**l_558) = g_629[0][0];
                        if (p_9)
                            break;
                        return g_630[1][1][0];


                    }
                }
                if ((((((safe_mul_func_int8_t_s_s(((void*)0 != &g_406), (g_557.f3 & (((safe_rshift_func_uint8_t_u_s((safe_mod_func_uint8_t_u_u((safe_add_func_int16_t_s_s((((8L || (safe_mul_func_uint16_t_u_u(p_10, ((p_7 <= func_60((l_641 == &g_314), &l_554, &l_595, p_9)) | g_540.f1)))) , p_10) ^ g_357), p_8)), 0x23L)), 2)) == (**g_314)) == l_645[4][6][2])))) , 4L) , p_10) , 1L) <= p_10))
                {
                    int *l_648 = &l_598[0][2][0];
                    short **l_665 = &g_340[1][5];
                    (*g_40) = p_6;
                    (*g_40) = (!p_9);
                    for (g_82 = (-17); (g_82 > (-7)); ++g_82)
                    {
                        char l_650 = 0x62L;
                        char ***l_658 = &l_657;
                        unsigned **l_659[2];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_659[i] = &l_539[1];
                        l_648 = (void*)0;

                        ;
                        l_649 = l_648;

                        ;
                        (*g_40) = (((l_650 & (safe_rshift_func_uint16_t_u_u((((safe_lshift_func_int16_t_s_s((((safe_mod_func_int32_t_s_s((g_382.f0 , l_650), p_10)) && p_6) <= l_650), l_662)) != p_7) && 0x47FD82C2L), l_663))) , p_8) , (*g_40));
                        if (l_598[0][5][0])
                            continue;
                    }

                    ;
                    ;
                    for (p_9 = 0; (p_9 <= 1); p_9 += 1)
                    {
                        (*l_537) = l_664;

                        ;
                        l_665 = &g_340[2][1];
                    }
                }
                else
                {
                    int *l_666 = &l_598[1][4][0];
                    if (p_9)
                        break;
                    (*g_80) = l_666;

                    ;
                }

                ;
            }
            (*g_40) = ((255UL > (251UL | p_10)) || (((safe_rshift_func_int8_t_s_s(((0x67E7L && p_6) , 0L), g_619.f1)) , p_7) , p_9));
        }


        ;
        ;
        ;
    }


    ;
    ;
    if (p_8)
    {
        g_671 = g_670;
    }
    else
    {
        unsigned **l_674 = &l_539[2];
        int l_680 = 0xCF226F6FL;
        int **l_682 = &g_81;
        short *l_683 = &g_104;
        short *l_741 = &g_104;
        int **l_767 = &g_93;
        for (g_341 = 4; (g_341 >= 0); g_341 -= 1)
        {
            unsigned ***l_675 = &l_674;
            int l_676 = (-9L);
            unsigned short *l_677 = &g_472[1];
            int **l_681 = &g_93;
            int l_710 = 0L;
            short l_749[6][8][5] = {{{0x978FL, 0xCED5L, 7L, 7L, 0xCED5L}, {0x978FL, 0xCED5L, 7L, 7L, 0xCED5L}, {0x978FL, 0xCED5L, 7L, 7L, 0xCED5L}, {0x978FL, 0xCED5L, 7L, 7L, 0xCED5L}, {0x978FL, 0xCED5L, 7L, 7L, 0xCED5L}, {0x978FL, 0xCED5L, 7L, 7L, 0xCED5L}, {0x978FL, 0xCED5L, 7L, 7L, 0xCED5L}, {0x978FL, 0xCED5L, 7L, 7L, 0xCED5L}}, {{0x978FL, 0xCED5L, 7L, 7L, 0xCED5L}, {0x978FL, 0xCED5L, 7L, 7L, 0xCED5L}, {0x978FL, 0xCED5L, 7L, 7L, 0xCED5L}, {0x978FL, 0xCED5L, 7L, 7L, 0xCED5L}, {0x978FL, 0xCED5L, 7L, 7L, 0xCED5L}, {0x978FL, 0xCED5L, 7L, 7L, 0xCED5L}, {0x978FL, 0xCED5L, 7L, 7L, 0xCED5L}, {0x978FL, 0xCED5L, 7L, 7L, 0xCED5L}}, {{0x978FL, 0xCED5L, 7L, 7L, 0xCED5L}, {0x978FL, 0xCED5L, 7L, 7L, 0xCED5L}, {0x978FL, 0xCED5L, 7L, 7L, 0xCED5L}, {0x978FL, 0xCED5L, 7L, 7L, 0xCED5L}, {0x978FL, 0xCED5L, 7L, 7L, 0xCED5L}, {0x978FL, 0xCED5L, 7L, 7L, 0xCED5L}, {0x978FL, 0xCED5L, 7L, 7L, 0xCED5L}, {0x978FL, 0xCED5L, 7L, 7L, 0xCED5L}}, {{0x978FL, 0xCED5L, 7L, 7L, 0xCED5L}, {0x978FL, 0xCED5L, 7L, 7L, 0xCED5L}, {0x978FL, 0xCED5L, 7L, 7L, 0xCED5L}, {0x978FL, 0xCED5L, 7L, 7L, 0xCED5L}, {0x978FL, 0xCED5L, 7L, 7L, 0xCED5L}, {0x978FL, 0xCED5L, 7L, 7L, 0xCED5L}, {0x978FL, 0xCED5L, 7L, 7L, 0xCED5L}, {0x978FL, 0xCED5L, 7L, 7L, 0xCED5L}}, {{0x978FL, 0xCED5L, 7L, 7L, 0xCED5L}, {0x978FL, 0xCED5L, 7L, 7L, 0xCED5L}, {0x978FL, 0xCED5L, 7L, 7L, 0xCED5L}, {0x978FL, 0xCED5L, 7L, 7L, 0xCED5L}, {0x978FL, 0xCED5L, 7L, 7L, 0xCED5L}, {0x978FL, 0xCED5L, 7L, 7L, 0xCED5L}, {0x978FL, 0xCED5L, 7L, 7L, 0xCED5L}, {0x978FL, 0xCED5L, 7L, 7L, 0xCED5L}}, {{0x978FL, 0xCED5L, 7L, 7L, 0xCED5L}, {0x978FL, 0xCED5L, 7L, 7L, 0xCED5L}, {0x978FL, 0xCED5L, 7L, 7L, 0xCED5L}, {0x978FL, 0xCED5L, 7L, 7L, 0xCED5L}, {0x978FL, 0xCED5L, 7L, 7L, 0xCED5L}, {0x978FL, 0xCED5L, 7L, 7L, 0xCED5L}, {0x978FL, 0xCED5L, 7L, 7L, 0xCED5L}, {0x978FL, 0xCED5L, 7L, 7L, 0xCED5L}}};
            int *l_753[2][4][6] = {{{(void*)0, &g_82, &g_82, &l_680, &g_82, &g_82}, {(void*)0, &g_82, &g_82, &l_680, &g_82, &g_82}, {(void*)0, &g_82, &g_82, &l_680, &g_82, &g_82}, {(void*)0, &g_82, &g_82, &l_680, &g_82, &g_82}}, {{(void*)0, &g_82, &g_82, &l_680, &g_82, &g_82}, {(void*)0, &g_82, &g_82, &l_680, &g_82, &g_82}, {(void*)0, &g_82, &g_82, &l_680, &g_82, &g_82}, {(void*)0, &g_82, &g_82, &l_680, &g_82, &g_82}}};
            int l_765 = 0xB7ECBD49L;
            int i, j, k;
            (*g_80) = (((((g_82 = (safe_lshift_func_uint16_t_u_s(g_615.f0, (((*l_675) = l_674) != (void*)0)))) != (*g_660)) && p_7) == ((*l_677) = l_676)) , &l_676);

            ;
        }
        (*l_767) = ((*l_682) = &g_91[3]);

        ;
        ;
    }
    return g_768;


}







static unsigned func_19(short p_20, short * p_21)
{
    int l_29[2];
    short *l_38 = &g_39;
    int *l_338[8];
    int **l_337 = &l_338[6];
    struct S0 **l_378 = &g_203;
    struct S0 **l_380 = (void*)0;
    int l_429 = 0x404C4F26L;
    unsigned char l_448 = 5UL;
    char *l_518 = (void*)0;
    int i;
    for (i = 0; i < 2; i++)
        l_29[i] = 0xB659BAAAL;
    for (i = 0; i < 8; i++)
        l_338[i] = &g_339;
    if (((safe_rshift_func_uint8_t_u_s((safe_unary_minus_func_int32_t_s((g_16 <= (g_16 , ((l_29[1] = 2UL) >= (safe_lshift_func_uint8_t_u_s(p_20, 0))))))), 3)) , ((p_20 , func_32((l_38 == &g_39), l_29[1], &g_39, l_29[1], l_29[0])) != &p_20)))
    {
        int *l_59 = &l_29[0];
        int **l_58 = &l_59;
        int *l_331 = &g_332;
        unsigned *l_335 = &g_336[0][0][0];
        struct S0 ***l_379 = &l_378;
        short *l_395 = &g_104;
        unsigned char **l_501[7];
        int i;
        for (i = 0; i < 7; i++)
            l_501[i] = (void*)0;
        for (g_39 = (-13); (g_39 == (-25)); --g_39)
        {
            if (g_16)
                break;
        }
        (*l_59) = ((safe_lshift_func_int8_t_s_u((safe_lshift_func_uint8_t_u_s((safe_lshift_func_int16_t_s_s((safe_mul_func_int16_t_s_s(func_53(l_58, func_60(((safe_sub_func_int16_t_s_s(func_67((&l_29[1] == g_40)), ((**l_58) = ((safe_lshift_func_int16_t_s_u(((safe_add_func_int32_t_s_s((~(l_29[0] != (safe_add_func_uint32_t_u_u(((*l_335) = ((((*l_331) = p_20) & l_29[1]) && (safe_mod_func_int32_t_s_s((g_204.f4 | (p_20 ^ l_29[0])), p_20)))), (*l_59))))), g_177.f4)) != l_29[1]), 2)) , 0x4B15L)))) , g_204.f0), l_337, g_340[1][5], p_20), p_20, p_20), p_20)), 11)), 2)), p_20)) , 0x7724C9B8L);

        ;
        ;
        ;


        if ((((*l_379) = l_378) != l_380))
        {
            struct S0 *l_381 = &g_382;
            l_381 = (void*)0;

            ;
        }
        else
        {
            unsigned *l_391[9][2] = {{&g_336[0][0][0], &g_336[0][1][0]}, {&g_336[0][0][0], &g_336[0][1][0]}, {&g_336[0][0][0], &g_336[0][1][0]}, {&g_336[0][0][0], &g_336[0][1][0]}, {&g_336[0][0][0], &g_336[0][1][0]}, {&g_336[0][0][0], &g_336[0][1][0]}, {&g_336[0][0][0], &g_336[0][1][0]}, {&g_336[0][0][0], &g_336[0][1][0]}, {&g_336[0][0][0], &g_336[0][1][0]}};
            int l_392 = 0xAEF3973BL;
            int l_393 = (-1L);
            int **l_394 = &g_376;
            unsigned char l_396 = 0x90L;
            short l_430 = 0xFEB5L;
            unsigned l_431 = 0xBD58EF1EL;
            char *l_456[6][3] = {{&g_170, &g_170, &g_406}, {&g_170, &g_170, &g_406}, {&g_170, &g_170, &g_406}, {&g_170, &g_170, &g_406}, {&g_170, &g_170, &g_406}, {&g_170, &g_170, &g_406}};
            int *l_500[10][6][3] = {{{&l_429, &g_91[3], &l_429}, {&l_429, &g_91[3], &l_429}, {&l_429, &g_91[3], &l_429}, {&l_429, &g_91[3], &l_429}, {&l_429, &g_91[3], &l_429}, {&l_429, &g_91[3], &l_429}}, {{&l_429, &g_91[3], &l_429}, {&l_429, &g_91[3], &l_429}, {&l_429, &g_91[3], &l_429}, {&l_429, &g_91[3], &l_429}, {&l_429, &g_91[3], &l_429}, {&l_429, &g_91[3], &l_429}}, {{&l_429, &g_91[3], &l_429}, {&l_429, &g_91[3], &l_429}, {&l_429, &g_91[3], &l_429}, {&l_429, &g_91[3], &l_429}, {&l_429, &g_91[3], &l_429}, {&l_429, &g_91[3], &l_429}}, {{&l_429, &g_91[3], &l_429}, {&l_429, &g_91[3], &l_429}, {&l_429, &g_91[3], &l_429}, {&l_429, &g_91[3], &l_429}, {&l_429, &g_91[3], &l_429}, {&l_429, &g_91[3], &l_429}}, {{&l_429, &g_91[3], &l_429}, {&l_429, &g_91[3], &l_429}, {&l_429, &g_91[3], &l_429}, {&l_429, &g_91[3], &l_429}, {&l_429, &g_91[3], &l_429}, {&l_429, &g_91[3], &l_429}}, {{&l_429, &g_91[3], &l_429}, {&l_429, &g_91[3], &l_429}, {&l_429, &g_91[3], &l_429}, {&l_429, &g_91[3], &l_429}, {&l_429, &g_91[3], &l_429}, {&l_429, &g_91[3], &l_429}}, {{&l_429, &g_91[3], &l_429}, {&l_429, &g_91[3], &l_429}, {&l_429, &g_91[3], &l_429}, {&l_429, &g_91[3], &l_429}, {&l_429, &g_91[3], &l_429}, {&l_429, &g_91[3], &l_429}}, {{&l_429, &g_91[3], &l_429}, {&l_429, &g_91[3], &l_429}, {&l_429, &g_91[3], &l_429}, {&l_429, &g_91[3], &l_429}, {&l_429, &g_91[3], &l_429}, {&l_429, &g_91[3], &l_429}}, {{&l_429, &g_91[3], &l_429}, {&l_429, &g_91[3], &l_429}, {&l_429, &g_91[3], &l_429}, {&l_429, &g_91[3], &l_429}, {&l_429, &g_91[3], &l_429}, {&l_429, &g_91[3], &l_429}}, {{&l_429, &g_91[3], &l_429}, {&l_429, &g_91[3], &l_429}, {&l_429, &g_91[3], &l_429}, {&l_429, &g_91[3], &l_429}, {&l_429, &g_91[3], &l_429}, {&l_429, &g_91[3], &l_429}}};
            int i, j, k;
            if ((safe_rshift_func_uint8_t_u_u(((((safe_sub_func_uint16_t_u_u((((l_392 = (&p_20 == ((safe_mod_func_int16_t_s_s(0xAAEEL, (safe_add_func_uint32_t_u_u(g_215[2][5].f3, ((void*)0 == l_391[6][0]))))) , &p_20))) ^ (g_91[3] , func_60(l_393, l_394, l_395, g_213.f3))) && (**l_337)), p_20)) < 65535UL) || 0L) && l_396), 0)))
            {
                struct S0 *l_443 = &g_444;
                int l_459[2][5][5] = {{{1L, 1L, 0L, 1L, 1L}, {1L, 1L, 0L, 1L, 1L}, {1L, 1L, 0L, 1L, 1L}, {1L, 1L, 0L, 1L, 1L}, {1L, 1L, 0L, 1L, 1L}}, {{1L, 1L, 0L, 1L, 1L}, {1L, 1L, 0L, 1L, 1L}, {1L, 1L, 0L, 1L, 1L}, {1L, 1L, 0L, 1L, 1L}, {1L, 1L, 0L, 1L, 1L}}};
                char l_502 = (-1L);
                unsigned short *l_509[4][4][1] = {{{&g_472[1]}, {&g_472[1]}, {&g_472[1]}, {&g_472[1]}}, {{&g_472[1]}, {&g_472[1]}, {&g_472[1]}, {&g_472[1]}}, {{&g_472[1]}, {&g_472[1]}, {&g_472[1]}, {&g_472[1]}}, {{&g_472[1]}, {&g_472[1]}, {&g_472[1]}, {&g_472[1]}}};
                int i, j, k;
                for (g_357 = 0; (g_357 <= 3); g_357 += 1)
                {
                    char *l_401 = &g_170;
                    int l_411 = 0L;
                    unsigned short *l_412[3];
                    int **l_413 = (void*)0;
                    int i;
                    for (i = 0; i < 3; i++)
                        l_412[i] = &g_230;
                    if ((g_277 > (-1L)))
                    {
                        short **l_414 = &l_38;
                        (*g_80) = (*l_58);

                        ;
                        (*l_337) = ((*l_394) = (*g_80));

                        ;
                    }
                    else
                    {
                        (*l_394) = (*g_80);

                        ;
                        if (p_20)
                            break;
                        (**l_58) = ((*l_331) = (*l_59));
                        (*l_59) = p_20;
                    }

                    ;
                    for (g_170 = 1; (g_170 >= 0); g_170 -= 1)
                    {
                        int l_415 = (-5L);
                        int **l_418 = (void*)0;
                        int i, j;
                        (*l_394) = l_391[(g_170 + 1)][g_170];

                        ;
                        if (l_415)
                            break;
                        (**l_337) = (p_20 > ((safe_mod_func_int32_t_s_s(func_60(g_204.f4, l_418, func_32((0x429BEF84L | (((((**l_394) | ((((safe_mod_func_int16_t_s_s(((safe_sub_func_uint32_t_u_u(((g_230 = (safe_sub_func_int8_t_s_s(l_431, 0x42L))) != g_104), 0UL)) && p_20), (**l_58))) | p_20) & p_20) , (*l_331))) == p_20) | (*l_331)) == 9UL)), g_177.f3, &g_341, (*g_376), p_20), p_20), p_20)) < p_20));
                        (**l_58) = (safe_lshift_func_uint16_t_u_u(g_275[0], 4));
                    }

                    ;
                    if (((*l_337) != (void*)0))
                    {
                        int ***l_440 = &l_58;
                        struct S0 *l_441 = &g_442;
                        (*l_58) = (*g_80);

                        ;
                        l_443 = ((**l_379) = l_441);

                        ;
                        ;
                        return p_20;



                    }
                    else
                    {
                        (*l_58) = (*l_58);
                        if ((**l_58))
                            break;
                    }
                    for (p_20 = 1; (p_20 >= 0); p_20 -= 1)
                    {
                        char l_447 = (-9L);
                        (*l_331) = (safe_rshift_func_uint16_t_u_u((((**l_58) | l_447) || p_20), ((**l_337) != (l_448 = g_382.f2))));
                        (*l_394) = (*g_80);

                        ;
                        (**l_58) = (*l_331);
                        (*l_394) = (*g_80);
                    }
                    for (g_206 = 0; (g_206 <= 3); g_206 += 1)
                    {
                        unsigned char l_455 = 0UL;
                        char **l_458 = &l_456[3][1];
                        (*l_394) = (*l_337);

                        ;
                        (*g_80) = (g_277 , (*g_80));
                        (*g_376) = (safe_mul_func_int8_t_s_s(((safe_mod_func_uint8_t_u_u((l_413 != (void*)0), 8L)) , p_20), (safe_sub_func_uint8_t_u_u(l_455, (1L || (((l_455 , (((((*l_458) = (g_213.f0 , (g_457 = l_456[3][1]))) != &g_170) < g_382.f0) > l_459[0][4][3])) == g_204.f2) <= 0x9E82D39DL))))));
                    }

                    ;
                }

                ;

                ;
                ;
                (*l_331) = (*l_59);
                if (p_20)
                {
                    int l_462 = 0x67A100F9L;
                    int *l_469[9][5][5] = {{{&g_357, &g_16, &g_357, &g_16, &l_462}, {&g_357, &g_16, &g_357, &g_16, &l_462}, {&g_357, &g_16, &g_357, &g_16, &l_462}, {&g_357, &g_16, &g_357, &g_16, &l_462}, {&g_357, &g_16, &g_357, &g_16, &l_462}}, {{&g_357, &g_16, &g_357, &g_16, &l_462}, {&g_357, &g_16, &g_357, &g_16, &l_462}, {&g_357, &g_16, &g_357, &g_16, &l_462}, {&g_357, &g_16, &g_357, &g_16, &l_462}, {&g_357, &g_16, &g_357, &g_16, &l_462}}, {{&g_357, &g_16, &g_357, &g_16, &l_462}, {&g_357, &g_16, &g_357, &g_16, &l_462}, {&g_357, &g_16, &g_357, &g_16, &l_462}, {&g_357, &g_16, &g_357, &g_16, &l_462}, {&g_357, &g_16, &g_357, &g_16, &l_462}}, {{&g_357, &g_16, &g_357, &g_16, &l_462}, {&g_357, &g_16, &g_357, &g_16, &l_462}, {&g_357, &g_16, &g_357, &g_16, &l_462}, {&g_357, &g_16, &g_357, &g_16, &l_462}, {&g_357, &g_16, &g_357, &g_16, &l_462}}, {{&g_357, &g_16, &g_357, &g_16, &l_462}, {&g_357, &g_16, &g_357, &g_16, &l_462}, {&g_357, &g_16, &g_357, &g_16, &l_462}, {&g_357, &g_16, &g_357, &g_16, &l_462}, {&g_357, &g_16, &g_357, &g_16, &l_462}}, {{&g_357, &g_16, &g_357, &g_16, &l_462}, {&g_357, &g_16, &g_357, &g_16, &l_462}, {&g_357, &g_16, &g_357, &g_16, &l_462}, {&g_357, &g_16, &g_357, &g_16, &l_462}, {&g_357, &g_16, &g_357, &g_16, &l_462}}, {{&g_357, &g_16, &g_357, &g_16, &l_462}, {&g_357, &g_16, &g_357, &g_16, &l_462}, {&g_357, &g_16, &g_357, &g_16, &l_462}, {&g_357, &g_16, &g_357, &g_16, &l_462}, {&g_357, &g_16, &g_357, &g_16, &l_462}}, {{&g_357, &g_16, &g_357, &g_16, &l_462}, {&g_357, &g_16, &g_357, &g_16, &l_462}, {&g_357, &g_16, &g_357, &g_16, &l_462}, {&g_357, &g_16, &g_357, &g_16, &l_462}, {&g_357, &g_16, &g_357, &g_16, &l_462}}, {{&g_357, &g_16, &g_357, &g_16, &l_462}, {&g_357, &g_16, &g_357, &g_16, &l_462}, {&g_357, &g_16, &g_357, &g_16, &l_462}, {&g_357, &g_16, &g_357, &g_16, &l_462}, {&g_357, &g_16, &g_357, &g_16, &l_462}}};
                    int l_470 = 0x1958C0B2L;
                    unsigned short *l_471 = &g_230;
                    int l_499 = 0x69E232B5L;
                    int i, j, k;
                    (*g_80) = ((((((**g_314) = (*l_331)) >= ((((*l_395) = l_462) , &g_203) == ((safe_add_func_uint8_t_u_u(((p_20 >= (safe_mul_func_uint16_t_u_u((l_459[0][0][3] , (g_472[1] = ((*l_471) = func_60((l_470 = (safe_mod_func_uint16_t_u_u((g_184[2][0].f0 | (((*l_38) = l_392) , (*l_331))), 65535UL))), &g_376, l_395, g_406)))), p_20))) ^ p_20), l_462)) , (void*)0))) > p_20) > l_459[0][4][3]) , (void*)0);

                    ;
                    for (g_341 = (-10); (g_341 == (-6)); g_341 = safe_add_func_int16_t_s_s(g_341, 4))
                    {
                        char l_498 = 0x56L;
                        l_499 = (safe_sub_func_uint8_t_u_u((safe_add_func_int8_t_s_s((((*l_335) = ((safe_mod_func_int32_t_s_s(((safe_mul_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s((safe_lshift_func_int16_t_s_u((safe_rshift_func_uint16_t_u_s((((((((*l_38) = (safe_rshift_func_int16_t_s_s((*l_331), (g_444.f0 == l_462)))) != p_20) < (l_470 = (g_230 , ((safe_add_func_uint32_t_u_u((safe_mul_func_uint16_t_u_u(1UL, (safe_mul_func_uint16_t_u_u((g_177.f4 >= ((safe_unary_minus_func_uint16_t_u(g_170)) || 0x2FL)), (*l_331))))), p_20)) && l_498)))) <= p_20) ^ 0xD8A4CF80L) , 0x0BCFL), 1)), 1)), 0)), p_20)) && (**l_58)), 0x9470A197L)) & p_20)) >= l_462), p_20)), p_20));
                        (*g_80) = &l_459[0][4][0];

                        ;
                    }

                    ;
                    (*g_80) = l_500[9][0][1];

                    ;
                }
                else
                {
                    (*l_394) = (*l_394);
                    (*g_80) = (*l_394);

                    ;
                    (*l_331) = ((l_502 = ((void*)0 != l_501[3])) == l_459[0][3][1]);
                    (*l_331) = ((**l_337) = (safe_sub_func_int32_t_s_s((g_213.f2 & (**l_337)), ((((**l_337) , ((safe_mul_func_int16_t_s_s(0x60D6L, l_502)) , p_20)) , (safe_rshift_func_int8_t_s_u((~g_91[3]), p_20))) > (**l_337)))));
                }

                ;
            }
            else
            {
                short l_516 = (-1L);
                short l_526 = 0x12E0L;
                if ((*l_59))
                {
                    char *l_517 = &g_406;
                    int l_519 = 0xD1FB8C1EL;
                    (**l_58) = (safe_mul_func_uint8_t_u_u(((*l_331) = (((safe_sub_func_uint16_t_u_u((p_20 ^ ((((p_20 , l_516) != 1UL) , l_517) == l_518)), (**l_58))) ^ g_177.f4) | l_519)), (-9L)));
                }
                else
                {
                    short l_529[7];
                    int i;
                    for (i = 0; i < 7; i++)
                        l_529[i] = 0xB179L;
                    (*l_59) = 1L;
                    (*l_59) = (safe_lshift_func_uint16_t_u_s((safe_rshift_func_int16_t_s_s((0xD236L >= (safe_lshift_func_uint8_t_u_s((*l_331), 0))), l_526)), 6));
                    if (l_526)
                    {
                        return p_20;
                    }
                    else
                    {
                        struct S0 **l_530 = &g_203;
                        (*l_59) = (safe_mul_func_uint8_t_u_u(((*l_331) != ((0x50L > ((**g_314) = l_529[3])) , 0x414942E2L)), ((0x4FE59565L == (((*l_379) = l_530) == l_530)) , (((safe_rshift_func_int8_t_s_u(((0xEBL ^ p_20) && l_529[5]), 5)) , l_516) == p_20))));
                        return (*l_331);
                    }
                }
                return p_20;
            }

            ;

            ;
            ;
        }



        ;
        ;
        (*l_58) = (*l_337);

        ;
    }
    else
    {
        unsigned l_533 = 0x8BDC09ACL;
        return l_533;
    }


    ;
    ;



    ;
    ;
    for (l_429 = 0; (l_429 <= 8); l_429 += 1)
    {
        return p_20;



    }
    return g_204.f0;



}







static short * func_32(short p_33, unsigned short p_34, short * p_35, int p_36, int p_37)
{
    volatile int **l_42[3][5][7] = {{{&g_40, &g_40, (void*)0, &g_40, &g_40, &g_40, &g_40}, {&g_40, &g_40, (void*)0, &g_40, &g_40, &g_40, &g_40}, {&g_40, &g_40, (void*)0, &g_40, &g_40, &g_40, &g_40}, {&g_40, &g_40, (void*)0, &g_40, &g_40, &g_40, &g_40}, {&g_40, &g_40, (void*)0, &g_40, &g_40, &g_40, &g_40}}, {{&g_40, &g_40, (void*)0, &g_40, &g_40, &g_40, &g_40}, {&g_40, &g_40, (void*)0, &g_40, &g_40, &g_40, &g_40}, {&g_40, &g_40, (void*)0, &g_40, &g_40, &g_40, &g_40}, {&g_40, &g_40, (void*)0, &g_40, &g_40, &g_40, &g_40}, {&g_40, &g_40, (void*)0, &g_40, &g_40, &g_40, &g_40}}, {{&g_40, &g_40, (void*)0, &g_40, &g_40, &g_40, &g_40}, {&g_40, &g_40, (void*)0, &g_40, &g_40, &g_40, &g_40}, {&g_40, &g_40, (void*)0, &g_40, &g_40, &g_40, &g_40}, {&g_40, &g_40, (void*)0, &g_40, &g_40, &g_40, &g_40}, {&g_40, &g_40, (void*)0, &g_40, &g_40, &g_40, &g_40}}};
    int i, j, k;
    g_40 = g_40;
    return &g_39;


}







static short func_53(int ** p_54, unsigned p_55, int p_56, unsigned p_57)
{
    unsigned char *l_350 = &g_275[7];
    unsigned char *l_351 = &g_275[0];
    unsigned char **l_352 = &l_351;
    int l_353 = 0x6769AABBL;
    short *l_354 = &g_104;
    char l_355 = 0xB9L;
    int *l_356[2][1][9] = {{{(void*)0, &g_357, (void*)0, &g_357, (void*)0, &g_357, (void*)0, &g_357, (void*)0}}, {{(void*)0, &g_357, (void*)0, &g_357, (void*)0, &g_357, (void*)0, &g_357, (void*)0}}};
    int ***l_358[2][1][5];
    unsigned *l_359 = (void*)0;
    unsigned *l_360 = (void*)0;
    unsigned *l_361 = &g_206;
    short **l_369 = (void*)0;
    short **l_370 = (void*)0;
    short **l_371 = &g_340[2][3];
    short l_374 = 0x5EA2L;
    int l_375 = 0x1989D66AL;
    int l_377[6][1];
    int i, j, k;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 5; k++)
                l_358[i][j][k] = &g_80;
        }
    }
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 1; j++)
            l_377[i][j] = (-1L);
    }
    l_353 = (safe_sub_func_uint16_t_u_u((((**p_54) = (safe_sub_func_int32_t_s_s((((safe_rshift_func_uint8_t_u_u(0x1CL, 3)) , (l_350 = l_350)) == ((*l_352) = ((*g_314) = l_351))), (**g_80)))) , (l_353 && (((((((+(65533UL && func_60(((((g_213.f4 < 0xB747F85BL) <= p_57) , 0x36L) > g_204.f2), &g_93, l_354, g_215[2][5].f4))) , g_204.f0) > (*g_81)) == 65528UL) | (*g_81)) || g_177.f2) >= l_353))), l_355));
    p_54 = (g_80 = p_54);


    (*g_81) = (((*l_361) = g_339) >= ((safe_add_func_uint8_t_u_u(func_60((safe_rshift_func_uint16_t_u_s(1UL, 3)), (p_54 = (g_80 = ((((**p_54) = (**g_80)) && (safe_mul_func_int16_t_s_s((safe_unary_minus_func_int32_t_s((**g_80))), p_56))) , &g_81))), ((*l_371) = (void*)0), (g_39 ^ (safe_mod_func_int32_t_s_s((l_374 = (*g_81)), (*g_81))))), l_375)) && (**p_54)));

    ;

    ;
    (*p_54) = g_376;

    ;
    return l_377[3][0];
}







static unsigned func_60(int p_61, int ** p_62, short * p_63, unsigned p_64)
{
    short ***l_342 = (void*)0;
    short **l_343 = &g_340[0][3];
    l_343 = (void*)0;

    ;
    return p_61;
}







static short func_67(short p_68)
{
    short *l_71 = &g_39;
    int l_324 = (-1L);
    (*g_80) = func_69(l_71);

    ;
    ;
    ;

    return l_324;
}







static int * func_69(short * p_70)
{
    unsigned short l_77 = 0x5D11L;
    int *l_323[3];
    int i;
    for (i = 0; i < 3; i++)
        l_323[i] = &g_91[3];
    g_177.f0 = (safe_sub_func_int32_t_s_s(func_74(l_77, func_78(g_80)), l_77));


    ;
    ;

    return l_323[0];


}







static int func_74(int p_75, int ** p_76)
{
    unsigned l_239 = 4294967291UL;
    struct S0 **l_246[9][7] = {{&g_203, &g_203, &g_203, &g_203, &g_203, &g_203, &g_203}, {&g_203, &g_203, &g_203, &g_203, &g_203, &g_203, &g_203}, {&g_203, &g_203, &g_203, &g_203, &g_203, &g_203, &g_203}, {&g_203, &g_203, &g_203, &g_203, &g_203, &g_203, &g_203}, {&g_203, &g_203, &g_203, &g_203, &g_203, &g_203, &g_203}, {&g_203, &g_203, &g_203, &g_203, &g_203, &g_203, &g_203}, {&g_203, &g_203, &g_203, &g_203, &g_203, &g_203, &g_203}, {&g_203, &g_203, &g_203, &g_203, &g_203, &g_203, &g_203}, {&g_203, &g_203, &g_203, &g_203, &g_203, &g_203, &g_203}};
    int l_247 = 0x04378A84L;
    short l_250[8][9] = {{0x4AB4L, 0x4AB4L, (-1L), 0x4C22L, 0x4124L, (-9L), 5L, 0x4AB4L, (-1L)}, {0x4AB4L, 0x4AB4L, (-1L), 0x4C22L, 0x4124L, (-9L), 5L, 0x4AB4L, (-1L)}, {0x4AB4L, 0x4AB4L, (-1L), 0x4C22L, 0x4124L, (-9L), 5L, 0x4AB4L, (-1L)}, {0x4AB4L, 0x4AB4L, (-1L), 0x4C22L, 0x4124L, (-9L), 5L, 0x4AB4L, (-1L)}, {0x4AB4L, 0x4AB4L, (-1L), 0x4C22L, 0x4124L, (-9L), 5L, 0x4AB4L, (-1L)}, {0x4AB4L, 0x4AB4L, (-1L), 0x4C22L, 0x4124L, (-9L), 5L, 0x4AB4L, (-1L)}, {0x4AB4L, 0x4AB4L, (-1L), 0x4C22L, 0x4124L, (-9L), 5L, 0x4AB4L, (-1L)}, {0x4AB4L, 0x4AB4L, (-1L), 0x4C22L, 0x4124L, (-9L), 5L, 0x4AB4L, (-1L)}};
    unsigned l_281 = 0UL;
    unsigned char *l_295 = &g_275[0];
    unsigned char **l_294 = &l_295;
    unsigned char ***l_293[7][2] = {{&l_294, &l_294}, {&l_294, &l_294}, {&l_294, &l_294}, {&l_294, &l_294}, {&l_294, &l_294}, {&l_294, &l_294}, {&l_294, &l_294}};
    int i, j;
    if ((safe_add_func_uint8_t_u_u(g_113[0][6][0], g_177.f2)))
    {
        int *l_238 = &g_91[0];
        struct S0 **l_242[5];
        struct S0 ***l_243 = &l_242[1];
        unsigned *l_248 = &g_206;
        unsigned short *l_249[7][1] = {{&g_230}, {&g_230}, {&g_230}, {&g_230}, {&g_230}, {&g_230}, {&g_230}};
        unsigned char *l_292 = &g_113[0][6][0];
        unsigned char **l_291[4] = {&l_292, &l_292, &l_292, &l_292};
        unsigned char ***l_290 = &l_291[2];
        unsigned char l_309 = 0UL;
        int i, j;
        for (i = 0; i < 5; i++)
            l_242[i] = &g_203;
        (*g_80) = l_238;

        ;
        (*g_93) = ((g_39 || (*l_238)) == ((l_239 , g_204.f2) < ((-1L) < (0x47CC1243L & (safe_sub_func_uint16_t_u_u(5UL, p_75))))));
        if ((((((*l_243) = l_242[1]) == ((0L <= ((**g_80) < (l_239 , (safe_add_func_uint8_t_u_u(g_213.f3, 0x3CL))))) , l_246[6][1])) , (l_250[1][0] = (((*l_248) = (((*l_238) = ((p_75 , ((((l_247 = 4294967291UL) , g_39) >= g_213.f2) ^ 0L)) && 0xF3L)) != 0x56BB4594L)) || g_213.f0))) ^ 65532UL))
        {
            unsigned short l_262 = 0x5D32L;
            int l_271[10][10] = {{0x77B13800L, 0x24A4F3CDL, 3L, 5L, 0x77B13800L, 0xF512955AL, 7L, 0xF512955AL, 0x77B13800L, 5L}, {0x77B13800L, 0x24A4F3CDL, 3L, 5L, 0x77B13800L, 0xF512955AL, 7L, 0xF512955AL, 0x77B13800L, 5L}, {0x77B13800L, 0x24A4F3CDL, 3L, 5L, 0x77B13800L, 0xF512955AL, 7L, 0xF512955AL, 0x77B13800L, 5L}, {0x77B13800L, 0x24A4F3CDL, 3L, 5L, 0x77B13800L, 0xF512955AL, 7L, 0xF512955AL, 0x77B13800L, 5L}, {0x77B13800L, 0x24A4F3CDL, 3L, 5L, 0x77B13800L, 0xF512955AL, 7L, 0xF512955AL, 0x77B13800L, 5L}, {0x77B13800L, 0x24A4F3CDL, 3L, 5L, 0x77B13800L, 0xF512955AL, 7L, 0xF512955AL, 0x77B13800L, 5L}, {0x77B13800L, 0x24A4F3CDL, 3L, 5L, 0x77B13800L, 0xF512955AL, 7L, 0xF512955AL, 0x77B13800L, 5L}, {0x77B13800L, 0x24A4F3CDL, 3L, 5L, 0x77B13800L, 0xF512955AL, 7L, 0xF512955AL, 0x77B13800L, 5L}, {0x77B13800L, 0x24A4F3CDL, 3L, 5L, 0x77B13800L, 0xF512955AL, 7L, 0xF512955AL, 0x77B13800L, 5L}, {0x77B13800L, 0x24A4F3CDL, 3L, 5L, 0x77B13800L, 0xF512955AL, 7L, 0xF512955AL, 0x77B13800L, 5L}};
            unsigned char *l_272 = &g_113[1][3][1];
            unsigned char *l_273 = (void*)0;
            unsigned char *l_274 = &g_275[0];
            unsigned char *l_276 = &g_277;
            unsigned char l_280 = 255UL;
            int i, j;
            for (g_170 = 0; (g_170 <= 4); g_170 = safe_add_func_int16_t_s_s(g_170, 7))
            {
                unsigned l_255 = 0xB152677FL;
                p_75 = ((safe_mul_func_int8_t_s_s(g_104, (((*l_238) = (!g_177.f2)) || l_255))) && l_255);
                if ((*g_81))
                {
                    for (g_206 = (-20); (g_206 != 43); g_206++)
                    {
                        return (**g_80);
                    }
                }
                else
                {
                    return (**p_76);
                }
                for (l_255 = 0; (l_255 > 41); l_255 = safe_add_func_uint8_t_u_u(l_255, 3))
                {
                    (*g_81) = (**p_76);
                    (*g_80) = (*p_76);
                    if ((*g_93))
                        break;
                    for (g_104 = 0; (g_104 <= (-8)); g_104 = safe_sub_func_uint16_t_u_u(g_104, 5))
                    {
                        (*g_93) = l_262;
                    }
                }
            }
            (**l_243) = (void*)0;

            ;
            (*g_81) = (safe_rshift_func_int16_t_s_s(((l_262 & 0x32L) || ((safe_sub_func_int32_t_s_s((**p_76), g_204.f3)) > (((safe_sub_func_uint32_t_u_u(((safe_add_func_int8_t_s_s((!(((*l_272) = (l_262 == (l_271[1][3] = (*g_93)))) > ((*l_276) = ((*l_274) = 0UL)))), (safe_lshift_func_int16_t_s_u((-8L), ((*l_238) >= l_280))))) <= l_281), (**p_76))) , g_213.f4) || 0xB188L))), 15));
            (*g_80) = (void*)0;

            ;
        }
        else
        {
            int **l_282[3][9][6] = {{{&g_93, &l_238, &l_238, (void*)0, &l_238, &l_238}, {&g_93, &l_238, &l_238, (void*)0, &l_238, &l_238}, {&g_93, &l_238, &l_238, (void*)0, &l_238, &l_238}, {&g_93, &l_238, &l_238, (void*)0, &l_238, &l_238}, {&g_93, &l_238, &l_238, (void*)0, &l_238, &l_238}, {&g_93, &l_238, &l_238, (void*)0, &l_238, &l_238}, {&g_93, &l_238, &l_238, (void*)0, &l_238, &l_238}, {&g_93, &l_238, &l_238, (void*)0, &l_238, &l_238}, {&g_93, &l_238, &l_238, (void*)0, &l_238, &l_238}}, {{&g_93, &l_238, &l_238, (void*)0, &l_238, &l_238}, {&g_93, &l_238, &l_238, (void*)0, &l_238, &l_238}, {&g_93, &l_238, &l_238, (void*)0, &l_238, &l_238}, {&g_93, &l_238, &l_238, (void*)0, &l_238, &l_238}, {&g_93, &l_238, &l_238, (void*)0, &l_238, &l_238}, {&g_93, &l_238, &l_238, (void*)0, &l_238, &l_238}, {&g_93, &l_238, &l_238, (void*)0, &l_238, &l_238}, {&g_93, &l_238, &l_238, (void*)0, &l_238, &l_238}, {&g_93, &l_238, &l_238, (void*)0, &l_238, &l_238}}, {{&g_93, &l_238, &l_238, (void*)0, &l_238, &l_238}, {&g_93, &l_238, &l_238, (void*)0, &l_238, &l_238}, {&g_93, &l_238, &l_238, (void*)0, &l_238, &l_238}, {&g_93, &l_238, &l_238, (void*)0, &l_238, &l_238}, {&g_93, &l_238, &l_238, (void*)0, &l_238, &l_238}, {&g_93, &l_238, &l_238, (void*)0, &l_238, &l_238}, {&g_93, &l_238, &l_238, (void*)0, &l_238, &l_238}, {&g_93, &l_238, &l_238, (void*)0, &l_238, &l_238}, {&g_93, &l_238, &l_238, (void*)0, &l_238, &l_238}}};
            struct S0 **l_300 = &g_203;
            short *l_301[9][6][4] = {{{(void*)0, &g_39, &g_39, &g_39}, {(void*)0, &g_39, &g_39, &g_39}, {(void*)0, &g_39, &g_39, &g_39}, {(void*)0, &g_39, &g_39, &g_39}, {(void*)0, &g_39, &g_39, &g_39}, {(void*)0, &g_39, &g_39, &g_39}}, {{(void*)0, &g_39, &g_39, &g_39}, {(void*)0, &g_39, &g_39, &g_39}, {(void*)0, &g_39, &g_39, &g_39}, {(void*)0, &g_39, &g_39, &g_39}, {(void*)0, &g_39, &g_39, &g_39}, {(void*)0, &g_39, &g_39, &g_39}}, {{(void*)0, &g_39, &g_39, &g_39}, {(void*)0, &g_39, &g_39, &g_39}, {(void*)0, &g_39, &g_39, &g_39}, {(void*)0, &g_39, &g_39, &g_39}, {(void*)0, &g_39, &g_39, &g_39}, {(void*)0, &g_39, &g_39, &g_39}}, {{(void*)0, &g_39, &g_39, &g_39}, {(void*)0, &g_39, &g_39, &g_39}, {(void*)0, &g_39, &g_39, &g_39}, {(void*)0, &g_39, &g_39, &g_39}, {(void*)0, &g_39, &g_39, &g_39}, {(void*)0, &g_39, &g_39, &g_39}}, {{(void*)0, &g_39, &g_39, &g_39}, {(void*)0, &g_39, &g_39, &g_39}, {(void*)0, &g_39, &g_39, &g_39}, {(void*)0, &g_39, &g_39, &g_39}, {(void*)0, &g_39, &g_39, &g_39}, {(void*)0, &g_39, &g_39, &g_39}}, {{(void*)0, &g_39, &g_39, &g_39}, {(void*)0, &g_39, &g_39, &g_39}, {(void*)0, &g_39, &g_39, &g_39}, {(void*)0, &g_39, &g_39, &g_39}, {(void*)0, &g_39, &g_39, &g_39}, {(void*)0, &g_39, &g_39, &g_39}}, {{(void*)0, &g_39, &g_39, &g_39}, {(void*)0, &g_39, &g_39, &g_39}, {(void*)0, &g_39, &g_39, &g_39}, {(void*)0, &g_39, &g_39, &g_39}, {(void*)0, &g_39, &g_39, &g_39}, {(void*)0, &g_39, &g_39, &g_39}}, {{(void*)0, &g_39, &g_39, &g_39}, {(void*)0, &g_39, &g_39, &g_39}, {(void*)0, &g_39, &g_39, &g_39}, {(void*)0, &g_39, &g_39, &g_39}, {(void*)0, &g_39, &g_39, &g_39}, {(void*)0, &g_39, &g_39, &g_39}}, {{(void*)0, &g_39, &g_39, &g_39}, {(void*)0, &g_39, &g_39, &g_39}, {(void*)0, &g_39, &g_39, &g_39}, {(void*)0, &g_39, &g_39, &g_39}, {(void*)0, &g_39, &g_39, &g_39}, {(void*)0, &g_39, &g_39, &g_39}}};
            int l_302 = (-1L);
            char *l_310 = &g_170;
            unsigned char ***l_316[6] = {&l_291[2], &l_291[2], (void*)0, &l_291[2], &l_291[2], (void*)0};
            int i, j, k;
            g_93 = ((*g_80) = (void*)0);

            ;
            ;
            g_213.f0 = ((*l_238) = (safe_lshift_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s((safe_unary_minus_func_uint8_t_u((g_177.f2 && (safe_mod_func_int8_t_s_s(((g_213.f0 <= ((l_290 == l_293[5][0]) ^ (g_104 , (l_247 = (safe_sub_func_uint32_t_u_u((safe_mod_func_uint8_t_u_u(((void*)0 != l_300), ((**l_294) = p_75))), (-1L))))))) || g_184[2][0].f3), l_250[1][0]))))), g_204.f3)), g_213.f3)));
            g_184[2][0].f0 = (g_213.f3 = ((l_302 , (250UL < ((*l_310) = (0xC2FCE0FFL >= (((((safe_add_func_int32_t_s_s((safe_add_func_uint32_t_u_u((safe_rshift_func_int8_t_s_u(((((l_250[1][1] == ((1UL < l_281) > l_250[1][0])) >= (*l_238)) <= ((l_309 ^ g_204.f3) | p_75)) <= p_75), l_247)), 5L)), g_184[2][0].f4)) , 0x0044L) || g_275[2]) , p_75) , 1L))))) > 0x72L));
            for (l_239 = 2; (l_239 <= 6); l_239 += 1)
            {
                int *l_318 = &l_302;
                for (g_170 = 3; (g_170 >= 0); g_170 -= 1)
                {
                    unsigned char ***l_312 = &l_294;
                    int l_317 = 4L;
                    for (l_302 = 0; (l_302 <= 3); l_302 += 1)
                    {
                        unsigned l_311 = 0x8E8E41D3L;
                        (*p_76) = (*g_80);
                        return l_311;



                    }
                    for (p_75 = 0; (p_75 <= 3); p_75 += 1)
                    {
                        int i, j, k;
                        (*l_238) = ((l_317 = (((g_313 = l_312) == (l_290 = l_316[3])) != (0x3157L > p_75))) | p_75);

                        ;
                        l_318 = ((*g_80) = l_318);

                        ;
                    }
                }

                ;
                ;
                ;
                return (*l_238);



            }
        }

        ;
        ;
        ;
        (*l_238) = 4L;
    }
    else
    {
        int l_319 = 0xA1322547L;
        int l_322 = 0x232949D9L;
        (*g_80) = &l_247;

        ;
        (*g_80) = (*p_76);
        (*g_93) = (l_319 == ((safe_sub_func_uint8_t_u_u((**g_314), g_213.f0)) <= (l_322 && 4294967295UL)));
    }

    ;
    ;
    ;
    return l_250[1][5];


}







static int ** func_78(int ** p_79)
{
    short l_83 = (-7L);
    unsigned char *l_156 = &g_113[2][6][2];
    unsigned char **l_155 = &l_156;
    struct S0 *l_212 = &g_213;
    if ((g_82 ^ l_83))
    {
        int l_92 = 0x7F7A3747L;
        int l_114[7] = {1L, 1L, 0x447BFCA4L, 1L, 1L, 0x447BFCA4L, 1L};
        char l_118 = (-1L);
        int **l_173 = &g_81;
        int i;
        for (g_82 = (-12); (g_82 == 18); g_82 = safe_add_func_int32_t_s_s(g_82, 1))
        {
            unsigned l_100 = 0x2B7F3A40L;
            short *l_116 = &g_39;
            int l_117 = 9L;
            struct S0 *l_176 = &g_177;
            struct S0 **l_178 = &l_176;
            for (g_39 = 20; (g_39 >= (-5)); g_39--)
            {
                int l_97 = 0x4BFA3C5BL;
            }
        }
        for (l_118 = 27; (l_118 < (-12)); l_118 = safe_sub_func_int32_t_s_s(l_118, 7))
        {
            unsigned char l_181 = 0UL;
            struct S0 *l_214 = &g_215[2][5];
            int *l_234 = &g_82;
            if (((**p_79) = l_181))
            {
                struct S0 **l_186 = (void*)0;
                int l_195[3][6] = {{3L, (-2L), 0x9A1AEF99L, 1L, 1L, 0x9A1AEF99L}, {3L, (-2L), 0x9A1AEF99L, 1L, 1L, 0x9A1AEF99L}, {3L, (-2L), 0x9A1AEF99L, 1L, 1L, 0x9A1AEF99L}};
                int *l_211 = (void*)0;
                int i, j;
                for (g_82 = 2; (g_82 <= 6); g_82 += 1)
                {
                    struct S0 *l_183 = &g_184[2][0];
                    struct S0 **l_182 = &l_183;
                    struct S0 ***l_185[3];
                    char *l_201 = &g_170;
                    unsigned *l_205 = &g_206;
                    int i;
                    for (i = 0; i < 3; i++)
                        l_185[i] = &l_182;
                    l_114[g_82] = (((*l_205) = ((l_186 = l_182) == ((safe_rshift_func_int16_t_s_s(((!(-1L)) , ((safe_lshift_func_uint8_t_u_u(((**l_155) = (safe_lshift_func_int8_t_s_s((l_114[g_82] , (**l_173)), (safe_sub_func_uint16_t_u_u(l_195[0][1], ((0xF735C8EAL || (safe_mod_func_uint8_t_u_u(l_195[0][1], ((*l_201) = (safe_mod_func_int8_t_s_s((safe_unary_minus_func_int8_t_s(g_91[3])), l_114[g_82])))))) <= 3UL)))))), l_83)) , (-1L))), g_39)) , g_202[0][2]))) , (**p_79));

                    ;
                    (*g_80) = &l_114[g_82];

                    ;
                    (**p_79) = 0x25324488L;
                    for (g_39 = 0; (g_39 <= 2); g_39 += 1)
                    {
                        int i, j, k;
                        (*g_81) = (g_113[g_39][(g_39 + 1)][(g_39 + 1)] , (safe_add_func_uint8_t_u_u((g_113[g_39][g_82][g_39] && g_91[(g_39 + 2)]), (0x9D9AL && ((**l_173) >= l_181)))));
                    }
                }


                for (g_82 = (-27); (g_82 == (-2)); ++g_82)
                {
                    l_211 = &l_195[0][2];

                    ;
                    (*l_211) = 0xCDD564CCL;
                    (*g_80) = (*g_80);
                }

                ;
                (*l_173) = (*g_80);
                l_214 = l_212;

                ;
            }
            else
            {
                short l_218 = 0L;
                unsigned short *l_229 = &g_230;
                short l_231 = 1L;
                int l_235 = 1L;
                (*g_93) = ((**p_79) = (7L | (safe_add_func_uint8_t_u_u(l_218, (((g_204.f2 , (((((((safe_sub_func_uint16_t_u_u(g_91[3], g_213.f3)) & (((**l_173) <= (((((safe_mod_func_int32_t_s_s(((safe_rshift_func_uint16_t_u_s((safe_add_func_uint32_t_u_u((**l_173), (safe_sub_func_uint8_t_u_u(((((**l_173) & ((*l_229) = l_181)) & g_177.f0) , l_83), l_231)))), 6)) != l_83), (*g_81))) || g_215[2][5].f3) > 0x7889L) , l_214) != (void*)0)) <= l_231)) && l_181) > g_177.f0) || (*g_93)) , (void*)0) == (void*)0)) < l_181) >= l_218)))));
                if ((*g_81))
                    break;
                for (g_104 = (-1); (g_104 > 3); g_104++)
                {
                    (*p_79) = l_234;

                    ;
                }
                l_235 = (**p_79);
            }

            ;
        }

        ;
    }
    else
    {
        (*g_93) = ((**g_80) = 0xE49BDA0EL);
    }


    return p_79;


}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_15, "g_15", print_hash_value);
    transparent_crc(g_16, "g_16", print_hash_value);
    transparent_crc(g_18, "g_18", print_hash_value);
    transparent_crc(g_39, "g_39", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_41[i], "g_41[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_82, "g_82", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_91[i], "g_91[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_104, "g_104", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 10; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_113[i][j][k], "g_113[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_170, "g_170", print_hash_value);
    transparent_crc(g_177.f0, "g_177.f0", print_hash_value);
    transparent_crc(g_177.f1, "g_177.f1", print_hash_value);
    transparent_crc(g_177.f2, "g_177.f2", print_hash_value);
    transparent_crc(g_177.f3, "g_177.f3", print_hash_value);
    transparent_crc(g_177.f4, "g_177.f4", print_hash_value);
    transparent_crc(g_177.f5, "g_177.f5", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_184[i][j].f0, "g_184[i][j].f0", print_hash_value);
            transparent_crc(g_184[i][j].f1, "g_184[i][j].f1", print_hash_value);
            transparent_crc(g_184[i][j].f2, "g_184[i][j].f2", print_hash_value);
            transparent_crc(g_184[i][j].f3, "g_184[i][j].f3", print_hash_value);
            transparent_crc(g_184[i][j].f4, "g_184[i][j].f4", print_hash_value);
            transparent_crc(g_184[i][j].f5, "g_184[i][j].f5", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_204.f0, "g_204.f0", print_hash_value);
    transparent_crc(g_204.f1, "g_204.f1", print_hash_value);
    transparent_crc(g_204.f2, "g_204.f2", print_hash_value);
    transparent_crc(g_204.f3, "g_204.f3", print_hash_value);
    transparent_crc(g_204.f4, "g_204.f4", print_hash_value);
    transparent_crc(g_204.f5, "g_204.f5", print_hash_value);
    transparent_crc(g_206, "g_206", print_hash_value);
    transparent_crc(g_213.f0, "g_213.f0", print_hash_value);
    transparent_crc(g_213.f1, "g_213.f1", print_hash_value);
    transparent_crc(g_213.f2, "g_213.f2", print_hash_value);
    transparent_crc(g_213.f3, "g_213.f3", print_hash_value);
    transparent_crc(g_213.f4, "g_213.f4", print_hash_value);
    transparent_crc(g_213.f5, "g_213.f5", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_215[i][j].f0, "g_215[i][j].f0", print_hash_value);
            transparent_crc(g_215[i][j].f1, "g_215[i][j].f1", print_hash_value);
            transparent_crc(g_215[i][j].f2, "g_215[i][j].f2", print_hash_value);
            transparent_crc(g_215[i][j].f3, "g_215[i][j].f3", print_hash_value);
            transparent_crc(g_215[i][j].f4, "g_215[i][j].f4", print_hash_value);
            transparent_crc(g_215[i][j].f5, "g_215[i][j].f5", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_230, "g_230", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_275[i], "g_275[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_277, "g_277", print_hash_value);
    transparent_crc(g_332, "g_332", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_336[i][j][k], "g_336[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_339, "g_339", print_hash_value);
    transparent_crc(g_341, "g_341", print_hash_value);
    transparent_crc(g_357, "g_357", print_hash_value);
    transparent_crc(g_382.f0, "g_382.f0", print_hash_value);
    transparent_crc(g_382.f1, "g_382.f1", print_hash_value);
    transparent_crc(g_382.f2, "g_382.f2", print_hash_value);
    transparent_crc(g_382.f3, "g_382.f3", print_hash_value);
    transparent_crc(g_382.f4, "g_382.f4", print_hash_value);
    transparent_crc(g_382.f5, "g_382.f5", print_hash_value);
    transparent_crc(g_406, "g_406", print_hash_value);
    transparent_crc(g_442.f0, "g_442.f0", print_hash_value);
    transparent_crc(g_442.f1, "g_442.f1", print_hash_value);
    transparent_crc(g_442.f2, "g_442.f2", print_hash_value);
    transparent_crc(g_442.f3, "g_442.f3", print_hash_value);
    transparent_crc(g_442.f4, "g_442.f4", print_hash_value);
    transparent_crc(g_442.f5, "g_442.f5", print_hash_value);
    transparent_crc(g_444.f0, "g_444.f0", print_hash_value);
    transparent_crc(g_444.f1, "g_444.f1", print_hash_value);
    transparent_crc(g_444.f2, "g_444.f2", print_hash_value);
    transparent_crc(g_444.f3, "g_444.f3", print_hash_value);
    transparent_crc(g_444.f4, "g_444.f4", print_hash_value);
    transparent_crc(g_444.f5, "g_444.f5", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_472[i], "g_472[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_540.f0, "g_540.f0", print_hash_value);
    transparent_crc(g_540.f1, "g_540.f1", print_hash_value);
    transparent_crc(g_540.f2, "g_540.f2", print_hash_value);
    transparent_crc(g_540.f3, "g_540.f3", print_hash_value);
    transparent_crc(g_540.f4, "g_540.f4", print_hash_value);
    transparent_crc(g_540.f5, "g_540.f5", print_hash_value);
    transparent_crc(g_541.f0, "g_541.f0", print_hash_value);
    transparent_crc(g_541.f1, "g_541.f1", print_hash_value);
    transparent_crc(g_541.f2, "g_541.f2", print_hash_value);
    transparent_crc(g_541.f3, "g_541.f3", print_hash_value);
    transparent_crc(g_541.f4, "g_541.f4", print_hash_value);
    transparent_crc(g_541.f5, "g_541.f5", print_hash_value);
    transparent_crc(g_557.f0, "g_557.f0", print_hash_value);
    transparent_crc(g_557.f1, "g_557.f1", print_hash_value);
    transparent_crc(g_557.f2, "g_557.f2", print_hash_value);
    transparent_crc(g_557.f3, "g_557.f3", print_hash_value);
    transparent_crc(g_557.f4, "g_557.f4", print_hash_value);
    transparent_crc(g_557.f5, "g_557.f5", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_560[i].f0, "g_560[i].f0", print_hash_value);
        transparent_crc(g_560[i].f1, "g_560[i].f1", print_hash_value);
        transparent_crc(g_560[i].f2, "g_560[i].f2", print_hash_value);
        transparent_crc(g_560[i].f3, "g_560[i].f3", print_hash_value);
        transparent_crc(g_560[i].f4, "g_560[i].f4", print_hash_value);
        transparent_crc(g_560[i].f5, "g_560[i].f5", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_599[i].f0, "g_599[i].f0", print_hash_value);
        transparent_crc(g_599[i].f1, "g_599[i].f1", print_hash_value);
        transparent_crc(g_599[i].f2, "g_599[i].f2", print_hash_value);
        transparent_crc(g_599[i].f3, "g_599[i].f3", print_hash_value);
        transparent_crc(g_599[i].f4, "g_599[i].f4", print_hash_value);
        transparent_crc(g_599[i].f5, "g_599[i].f5", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_604.f0, "g_604.f0", print_hash_value);
    transparent_crc(g_604.f1, "g_604.f1", print_hash_value);
    transparent_crc(g_604.f2, "g_604.f2", print_hash_value);
    transparent_crc(g_604.f3, "g_604.f3", print_hash_value);
    transparent_crc(g_604.f4, "g_604.f4", print_hash_value);
    transparent_crc(g_604.f5, "g_604.f5", print_hash_value);
    transparent_crc(g_615.f0, "g_615.f0", print_hash_value);
    transparent_crc(g_615.f1, "g_615.f1", print_hash_value);
    transparent_crc(g_615.f2, "g_615.f2", print_hash_value);
    transparent_crc(g_615.f3, "g_615.f3", print_hash_value);
    transparent_crc(g_615.f4, "g_615.f4", print_hash_value);
    transparent_crc(g_615.f5, "g_615.f5", print_hash_value);
    transparent_crc(g_616.f0, "g_616.f0", print_hash_value);
    transparent_crc(g_616.f1, "g_616.f1", print_hash_value);
    transparent_crc(g_616.f2, "g_616.f2", print_hash_value);
    transparent_crc(g_616.f3, "g_616.f3", print_hash_value);
    transparent_crc(g_616.f4, "g_616.f4", print_hash_value);
    transparent_crc(g_616.f5, "g_616.f5", print_hash_value);
    transparent_crc(g_619.f0, "g_619.f0", print_hash_value);
    transparent_crc(g_619.f1, "g_619.f1", print_hash_value);
    transparent_crc(g_619.f2, "g_619.f2", print_hash_value);
    transparent_crc(g_619.f3, "g_619.f3", print_hash_value);
    transparent_crc(g_619.f4, "g_619.f4", print_hash_value);
    transparent_crc(g_619.f5, "g_619.f5", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(g_629[i][j].f0, "g_629[i][j].f0", print_hash_value);
            transparent_crc(g_629[i][j].f1, "g_629[i][j].f1", print_hash_value);
            transparent_crc(g_629[i][j].f2, "g_629[i][j].f2", print_hash_value);
            transparent_crc(g_629[i][j].f3, "g_629[i][j].f3", print_hash_value);
            transparent_crc(g_629[i][j].f4, "g_629[i][j].f4", print_hash_value);
            transparent_crc(g_629[i][j].f5, "g_629[i][j].f5", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_630[i][j][k].f0, "g_630[i][j][k].f0", print_hash_value);
                transparent_crc(g_630[i][j][k].f1, "g_630[i][j][k].f1", print_hash_value);
                transparent_crc(g_630[i][j][k].f2, "g_630[i][j][k].f2", print_hash_value);
                transparent_crc(g_630[i][j][k].f3, "g_630[i][j][k].f3", print_hash_value);
                transparent_crc(g_630[i][j][k].f4, "g_630[i][j][k].f4", print_hash_value);
                transparent_crc(g_630[i][j][k].f5, "g_630[i][j][k].f5", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_670.f0, "g_670.f0", print_hash_value);
    transparent_crc(g_670.f1, "g_670.f1", print_hash_value);
    transparent_crc(g_670.f2, "g_670.f2", print_hash_value);
    transparent_crc(g_670.f3, "g_670.f3", print_hash_value);
    transparent_crc(g_670.f4, "g_670.f4", print_hash_value);
    transparent_crc(g_670.f5, "g_670.f5", print_hash_value);
    transparent_crc(g_671.f0, "g_671.f0", print_hash_value);
    transparent_crc(g_671.f1, "g_671.f1", print_hash_value);
    transparent_crc(g_671.f2, "g_671.f2", print_hash_value);
    transparent_crc(g_671.f3, "g_671.f3", print_hash_value);
    transparent_crc(g_671.f4, "g_671.f4", print_hash_value);
    transparent_crc(g_671.f5, "g_671.f5", print_hash_value);
    transparent_crc(g_715.f0, "g_715.f0", print_hash_value);
    transparent_crc(g_715.f1, "g_715.f1", print_hash_value);
    transparent_crc(g_715.f2, "g_715.f2", print_hash_value);
    transparent_crc(g_715.f3, "g_715.f3", print_hash_value);
    transparent_crc(g_715.f4, "g_715.f4", print_hash_value);
    transparent_crc(g_715.f5, "g_715.f5", print_hash_value);
    transparent_crc(g_731, "g_731", print_hash_value);
    transparent_crc(g_738, "g_738", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_742[i][j][k].f0, "g_742[i][j][k].f0", print_hash_value);
                transparent_crc(g_742[i][j][k].f1, "g_742[i][j][k].f1", print_hash_value);
                transparent_crc(g_742[i][j][k].f2, "g_742[i][j][k].f2", print_hash_value);
                transparent_crc(g_742[i][j][k].f3, "g_742[i][j][k].f3", print_hash_value);
                transparent_crc(g_742[i][j][k].f4, "g_742[i][j][k].f4", print_hash_value);
                transparent_crc(g_742[i][j][k].f5, "g_742[i][j][k].f5", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_743.f0, "g_743.f0", print_hash_value);
    transparent_crc(g_743.f1, "g_743.f1", print_hash_value);
    transparent_crc(g_743.f2, "g_743.f2", print_hash_value);
    transparent_crc(g_743.f3, "g_743.f3", print_hash_value);
    transparent_crc(g_743.f4, "g_743.f4", print_hash_value);
    transparent_crc(g_743.f5, "g_743.f5", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_766[i][j][k].f0, "g_766[i][j][k].f0", print_hash_value);
                transparent_crc(g_766[i][j][k].f1, "g_766[i][j][k].f1", print_hash_value);
                transparent_crc(g_766[i][j][k].f2, "g_766[i][j][k].f2", print_hash_value);
                transparent_crc(g_766[i][j][k].f3, "g_766[i][j][k].f3", print_hash_value);
                transparent_crc(g_766[i][j][k].f4, "g_766[i][j][k].f4", print_hash_value);
                transparent_crc(g_766[i][j][k].f5, "g_766[i][j][k].f5", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_768.f0, "g_768.f0", print_hash_value);
    transparent_crc(g_768.f1, "g_768.f1", print_hash_value);
    transparent_crc(g_768.f2, "g_768.f2", print_hash_value);
    transparent_crc(g_768.f3, "g_768.f3", print_hash_value);
    transparent_crc(g_768.f4, "g_768.f4", print_hash_value);
    transparent_crc(g_768.f5, "g_768.f5", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
