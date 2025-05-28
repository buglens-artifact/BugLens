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
   volatile char f0;
   short f1;
   const unsigned char f2;
   char * f3;
};


static int g_2 = 0xDF2F4A8BL;
static char g_21 = 0x05L;
static char g_43 = 0x90L;
static unsigned g_47 = 4294967295UL;
static short g_48[9] = {0xCEEEL,0xCEEEL,0xCEEEL,0xCEEEL,0xCEEEL,0xCEEEL,0xCEEEL,0xCEEEL,0xCEEEL};
static unsigned char g_55 = 0x74L;
static char *g_57 = &g_21;
static char * const *g_56 = &g_57;
static int g_66[1][4][10] = {{{0x4BB8EBACL,0x4BB8EBACL,(-8L),0x9A8624A7L,0x4F910717L,0x9A8624A7L,(-8L),0x4BB8EBACL,0x4BB8EBACL,(-8L)},{(-1L),0x9A8624A7L,0x45CF3152L,0x45CF3152L,0x9A8624A7L,(-1L),(-8L),(-1L),0x9A8624A7L,0x45CF3152L},{0x93872454L,0x4BB8EBACL,0x93872454L,0x45CF3152L,(-8L),(-8L),0x45CF3152L,0x93872454L,0x4BB8EBACL,0x93872454L},{0x93872454L,(-1L),0x4BB8EBACL,0x9A8624A7L,0x4BB8EBACL,(-1L),0x93872454L,0x45CF3152L,0x9A8624A7L,(-1L)}}};
static int *g_110 = (void*)0;
static int **g_109 = &g_110;
static unsigned short g_129 = 6UL;
static unsigned short g_131 = 2UL;
static unsigned g_135 = 0UL;
static int g_138 = 0xB031DE90L;
static union U0 g_140 = {0L};
static unsigned g_153 = 7UL;
static volatile short g_180 = 1L;
static volatile short *g_179 = &g_180;
static volatile short * const *g_178 = &g_179;
static volatile short * const **g_177 = &g_178;
static unsigned short g_181 = 0xE1D0L;
static volatile unsigned g_188[10] = {4294967288UL,4294967288UL,0x09B231F3L,1UL,0x09B231F3L,4294967288UL,4294967288UL,0x09B231F3L,1UL,0x09B231F3L};
static volatile unsigned *g_187 = &g_188[1];
static volatile unsigned **g_186 = &g_187;
static unsigned g_210 = 0x5D496808L;
static volatile int g_289 = 0xF453BB76L;
static unsigned short *g_327 = (void*)0;
static unsigned short **g_326 = &g_327;
static union U0 g_353 = {0xE6L};
static union U0 *g_352 = &g_353;
static int g_375 = 0x2E531E6CL;
static short *g_394 = &g_48[1];
static short * const *g_393 = &g_394;
static union U0 g_403 = {0x60L};
static unsigned g_410[9][1][5] = {{{9UL,0UL,6UL,4294967289UL,1UL}},{{0xCE6FC17AL,0xE4AA0D40L,4294967295UL,4294967290UL,1UL}},{{0x094E8484L,0UL,0UL,0x094E8484L,0xDCED69E6L}},{{4294967295UL,9UL,0UL,6UL,4294967289UL}},{{6UL,8UL,4294967295UL,0xCE6FC17AL,0UL}},{{0xE4AA0D40L,4294967295UL,6UL,6UL,4294967295UL}},{{1UL,0UL,4294967292UL,0x094E8484L,4294967295UL}},{{8UL,1UL,9UL,4294967290UL,0UL}},{{0UL,4294967290UL,1UL,4294967289UL,4294967289UL}}};
static unsigned *g_409 = &g_410[1][0][1];
static const int *g_416 = &g_2;
static const int **g_415[9][4] = {{&g_416,&g_416,&g_416,&g_416},{&g_416,&g_416,&g_416,&g_416},{&g_416,&g_416,&g_416,&g_416},{&g_416,&g_416,&g_416,&g_416},{&g_416,&g_416,&g_416,&g_416},{&g_416,&g_416,&g_416,&g_416},{&g_416,&g_416,&g_416,&g_416},{&g_416,&g_416,&g_416,&g_416},{&g_416,&g_416,&g_416,&g_416}};
static volatile int *g_482[8] = {&g_289,&g_289,&g_289,&g_289,&g_289,&g_289,&g_289,&g_289};
static unsigned char g_542 = 251UL;
static volatile int **g_591 = &g_482[6];
static volatile int ***g_590[10][5][4] = {{{&g_591,&g_591,(void*)0,(void*)0},{&g_591,&g_591,(void*)0,&g_591},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{&g_591,(void*)0,(void*)0,&g_591}},{{&g_591,(void*)0,&g_591,(void*)0},{(void*)0,(void*)0,&g_591,&g_591},{&g_591,&g_591,&g_591,&g_591},{(void*)0,(void*)0,&g_591,(void*)0},{(void*)0,(void*)0,(void*)0,&g_591}},{{&g_591,(void*)0,(void*)0,(void*)0},{&g_591,(void*)0,(void*)0,(void*)0},{&g_591,(void*)0,(void*)0,&g_591},{&g_591,&g_591,(void*)0,(void*)0},{&g_591,&g_591,(void*)0,&g_591}},{{(void*)0,&g_591,&g_591,(void*)0},{(void*)0,(void*)0,&g_591,&g_591},{&g_591,(void*)0,&g_591,(void*)0},{(void*)0,&g_591,&g_591,&g_591},{&g_591,&g_591,(void*)0,(void*)0}},{{&g_591,&g_591,(void*)0,&g_591},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&g_591,(void*)0,&g_591},{(void*)0,&g_591,&g_591,(void*)0},{(void*)0,&g_591,(void*)0,(void*)0}},{{(void*)0,&g_591,(void*)0,&g_591},{(void*)0,(void*)0,&g_591,&g_591},{&g_591,&g_591,&g_591,(void*)0},{&g_591,&g_591,&g_591,(void*)0},{&g_591,&g_591,&g_591,&g_591}},{{&g_591,&g_591,(void*)0,&g_591},{&g_591,(void*)0,(void*)0,(void*)0},{&g_591,&g_591,&g_591,&g_591},{&g_591,&g_591,&g_591,&g_591},{&g_591,&g_591,&g_591,&g_591}},{{&g_591,(void*)0,&g_591,&g_591},{(void*)0,(void*)0,(void*)0,&g_591},{(void*)0,&g_591,(void*)0,&g_591},{(void*)0,&g_591,&g_591,&g_591},{(void*)0,&g_591,(void*)0,(void*)0}},{{&g_591,(void*)0,(void*)0,&g_591},{&g_591,&g_591,(void*)0,&g_591},{(void*)0,&g_591,&g_591,(void*)0},{(void*)0,&g_591,(void*)0,(void*)0},{(void*)0,&g_591,(void*)0,&g_591}},{{(void*)0,(void*)0,&g_591,&g_591},{(void*)0,&g_591,(void*)0,(void*)0},{&g_591,(void*)0,&g_591,(void*)0},{&g_591,&g_591,&g_591,&g_591},{(void*)0,&g_591,(void*)0,&g_591}}};
static volatile int ****g_589 = &g_590[6][2][0];
static union U0 g_602 = {0xBFL};
static unsigned char g_621 = 255UL;
static union U0 g_624 = {0xAAL};
static int *g_652 = &g_66[0][2][6];
static unsigned g_673 = 0xB7B710BCL;
static union U0 g_728 = {0L};
static union U0 g_730 = {0x06L};
static const char *g_744 = (void*)0;
static const char **g_743 = &g_744;
static const unsigned *g_835 = (void*)0;
static const unsigned **g_834 = &g_835;
static const unsigned ***g_833[2] = {&g_834,&g_834};
static union U0 g_846 = {0x5EL};
static short **g_887 = (void*)0;
static short ***g_886 = &g_887;
static unsigned char ** const g_897 = (void*)0;
static const int g_905[10][5][2] = {{{0x17DF8599L,0xF06EE087L},{0x17DF8599L,0x17DF8599L},{0xF06EE087L,0x17DF8599L},{0x17DF8599L,0xF06EE087L},{0x17DF8599L,0x17DF8599L}},{{0xF06EE087L,0x17DF8599L},{0x17DF8599L,0xF06EE087L},{0x17DF8599L,0x17DF8599L},{0xF06EE087L,0x17DF8599L},{0x17DF8599L,0xF06EE087L}},{{0x17DF8599L,0x17DF8599L},{0xF06EE087L,0x17DF8599L},{0x17DF8599L,0xF06EE087L},{0x17DF8599L,0x17DF8599L},{0xF06EE087L,0x17DF8599L}},{{0x17DF8599L,0xF06EE087L},{0x17DF8599L,0x17DF8599L},{0xF06EE087L,0x17DF8599L},{0x17DF8599L,0xF06EE087L},{0x17DF8599L,0x17DF8599L}},{{0xF06EE087L,0x17DF8599L},{0x17DF8599L,0xF06EE087L},{0x17DF8599L,0x17DF8599L},{0xF06EE087L,0x17DF8599L},{0x17DF8599L,0xF06EE087L}},{{0x17DF8599L,0x17DF8599L},{0xF06EE087L,0x17DF8599L},{0x17DF8599L,0xF06EE087L},{0x17DF8599L,0x17DF8599L},{0xF06EE087L,0x17DF8599L}},{{0x17DF8599L,0xF06EE087L},{0x17DF8599L,0x17DF8599L},{0xF06EE087L,0x17DF8599L},{0x17DF8599L,0xF06EE087L},{0x17DF8599L,0x17DF8599L}},{{0xF06EE087L,0x17DF8599L},{0x17DF8599L,0xF06EE087L},{0x17DF8599L,0x17DF8599L},{0xF06EE087L,0xF06EE087L},{0xF06EE087L,0xC48835D1L}},{{0xF06EE087L,0xF06EE087L},{0xC48835D1L,0xF06EE087L},{0xF06EE087L,0xC48835D1L},{0xF06EE087L,0xF06EE087L},{0xC48835D1L,0xF06EE087L}},{{0xF06EE087L,0xC48835D1L},{0xF06EE087L,0xF06EE087L},{0xC48835D1L,0xF06EE087L},{0xF06EE087L,0xC48835D1L},{0xF06EE087L,0xF06EE087L}}};
static const int g_908 = 0x37C5103FL;
static const int g_909 = 0xEFA594B3L;
static const char **g_940[5] = {&g_744,&g_744,&g_744,&g_744,&g_744};
static unsigned short g_960 = 5UL;
static int ***g_978 = &g_109;
static int ****g_977 = &g_978;
static int *****g_976[8][4][8] = {{{&g_977,&g_977,(void*)0,&g_977,&g_977,&g_977,&g_977,&g_977},{&g_977,(void*)0,&g_977,&g_977,(void*)0,&g_977,&g_977,&g_977},{(void*)0,(void*)0,&g_977,(void*)0,&g_977,&g_977,&g_977,(void*)0},{&g_977,&g_977,&g_977,&g_977,&g_977,&g_977,(void*)0,&g_977}},{{(void*)0,&g_977,(void*)0,&g_977,(void*)0,&g_977,&g_977,&g_977},{&g_977,&g_977,&g_977,&g_977,&g_977,&g_977,&g_977,&g_977},{&g_977,&g_977,&g_977,(void*)0,&g_977,&g_977,&g_977,&g_977},{&g_977,&g_977,&g_977,&g_977,&g_977,(void*)0,&g_977,&g_977}},{{&g_977,&g_977,&g_977,&g_977,&g_977,&g_977,&g_977,&g_977},{&g_977,(void*)0,&g_977,&g_977,&g_977,&g_977,&g_977,&g_977},{(void*)0,&g_977,&g_977,&g_977,&g_977,&g_977,&g_977,&g_977},{(void*)0,(void*)0,(void*)0,(void*)0,&g_977,&g_977,&g_977,&g_977}},{{&g_977,&g_977,(void*)0,&g_977,&g_977,(void*)0,&g_977,&g_977},{&g_977,&g_977,(void*)0,(void*)0,&g_977,&g_977,&g_977,&g_977},{&g_977,(void*)0,&g_977,(void*)0,&g_977,&g_977,(void*)0,&g_977},{&g_977,&g_977,&g_977,&g_977,&g_977,&g_977,&g_977,(void*)0}},{{(void*)0,(void*)0,&g_977,&g_977,&g_977,&g_977,&g_977,&g_977},{&g_977,&g_977,&g_977,&g_977,(void*)0,&g_977,&g_977,&g_977},{&g_977,(void*)0,&g_977,&g_977,&g_977,&g_977,(void*)0,&g_977},{&g_977,&g_977,&g_977,(void*)0,(void*)0,(void*)0,&g_977,(void*)0}},{{&g_977,&g_977,&g_977,&g_977,&g_977,&g_977,&g_977,&g_977},{&g_977,(void*)0,&g_977,&g_977,&g_977,&g_977,&g_977,&g_977},{&g_977,(void*)0,(void*)0,&g_977,(void*)0,(void*)0,&g_977,(void*)0},{&g_977,&g_977,&g_977,(void*)0,(void*)0,(void*)0,&g_977,(void*)0}},{{(void*)0,&g_977,&g_977,(void*)0,&g_977,&g_977,&g_977,(void*)0},{&g_977,&g_977,&g_977,(void*)0,&g_977,&g_977,&g_977,(void*)0},{(void*)0,(void*)0,&g_977,&g_977,(void*)0,(void*)0,&g_977,&g_977},{(void*)0,&g_977,(void*)0,&g_977,(void*)0,&g_977,(void*)0,&g_977}},{{&g_977,(void*)0,(void*)0,&g_977,&g_977,&g_977,(void*)0,(void*)0},{&g_977,&g_977,&g_977,&g_977,&g_977,(void*)0,&g_977,&g_977},{(void*)0,(void*)0,&g_977,&g_977,&g_977,&g_977,&g_977,(void*)0},{&g_977,&g_977,&g_977,(void*)0,&g_977,&g_977,(void*)0,(void*)0}}};
static const int ***g_1014 = &g_415[5][1];
static union U0 g_1027 = {0x48L};
static const union U0 *g_1075[2] = {&g_403,&g_403};
static const union U0 **g_1074[6] = {&g_1075[1],&g_1075[1],&g_1075[1],&g_1075[1],&g_1075[1],&g_1075[1]};
static union U0 g_1079 = {-1L};
static int g_1094[9][7][3] = {{{(-1L),0x6BAFFD3CL,(-1L)},{0L,1L,(-6L)},{0L,0x6BAFFD3CL,0x2076B26AL},{0x2644375AL,(-1L),(-1L)},{0xF0505A45L,0x6BAFFD3CL,(-7L)},{0xC0F80402L,1L,0x274EAC0CL},{3L,0x6BAFFD3CL,0L}},{{0L,(-1L),(-6L)},{(-9L),0x6BAFFD3CL,2L},{0x2644375AL,1L,(-1L)},{0xE59F4929L,0x6BAFFD3CL,0x79772DF9L},{0xC0F80402L,(-1L),0x274EAC0CL},{(-1L),0x6BAFFD3CL,(-1L)},{0L,1L,(-6L)}},{{0L,0x6BAFFD3CL,0x2076B26AL},{0x2644375AL,(-1L),(-1L)},{0xF0505A45L,0x6BAFFD3CL,(-7L)},{0xC0F80402L,1L,0x274EAC0CL},{3L,0x6BAFFD3CL,0L},{0L,(-1L),(-6L)},{(-9L),0x6BAFFD3CL,2L}},{{0x2644375AL,1L,(-1L)},{0xE59F4929L,0x6BAFFD3CL,0x79772DF9L},{0xC0F80402L,(-1L),0x274EAC0CL},{(-1L),0x6BAFFD3CL,(-1L)},{0L,1L,(-6L)},{0L,0x6BAFFD3CL,0x2076B26AL},{0x2644375AL,(-1L),(-1L)}},{{0xF0505A45L,0x6BAFFD3CL,(-7L)},{0xC0F80402L,1L,0x274EAC0CL},{0x2076B26AL,0xB87B37FDL,1L},{(-9L),1L,0x6740C3F4L},{(-1L),0xB87B37FDL,0xC80D9593L},{0x80ED03A2L,1L,1L},{0x79772DF9L,0xB87B37FDL,0xE6DC7E1DL}},{{1L,1L,0x68FFC9BFL},{2L,0xB87B37FDL,(-8L)},{(-9L),1L,0x6740C3F4L},{0L,0xB87B37FDL,0x9B197373L},{0x80ED03A2L,1L,1L},{(-7L),0xB87B37FDL,3L},{1L,1L,0x68FFC9BFL}},{{0x2076B26AL,0xB87B37FDL,1L},{(-9L),1L,0x6740C3F4L},{(-1L),0xB87B37FDL,0xC80D9593L},{0x80ED03A2L,1L,1L},{0x79772DF9L,0xB87B37FDL,0xE6DC7E1DL},{1L,1L,0x68FFC9BFL},{2L,0xB87B37FDL,(-8L)}},{{(-9L),1L,0x6740C3F4L},{0L,0xB87B37FDL,0x9B197373L},{0x80ED03A2L,1L,1L},{(-7L),0xB87B37FDL,3L},{1L,1L,0x68FFC9BFL},{0x2076B26AL,0xB87B37FDL,1L},{(-9L),1L,0x6740C3F4L}},{{(-1L),0xB87B37FDL,0xC80D9593L},{0x80ED03A2L,1L,1L},{0x79772DF9L,0xB87B37FDL,0xE6DC7E1DL},{1L,1L,0x68FFC9BFL},{2L,0xB87B37FDL,(-8L)},{(-9L),1L,0x68FFC9BFL},{0x79772DF9L,(-1L),1L}}};
static volatile int *****g_1127 = &g_589;
static volatile int ******g_1126 = &g_1127;
static volatile int *******g_1125 = &g_1126;
static volatile char g_1138 = 0L;
static union U0 g_1175 = {1L};



static union U0 func_1(void);
static const char ** func_5(int p_6, char p_7, unsigned char p_8);
static unsigned char func_9(unsigned p_10, char ** p_11);
static unsigned func_14(int p_15, char * p_16, int p_17, int p_18, unsigned p_19);
static unsigned short func_26(unsigned p_27, const unsigned char p_28, char * const * p_29, char * p_30);
static unsigned func_32(char p_33, unsigned p_34);
static int * func_71(char * p_72, const int * const * p_73, int ** p_74, unsigned short p_75);
static const int ** func_76(int * p_77, int * p_78, unsigned * p_79);
static int * func_81(unsigned p_82, unsigned p_83, int p_84, char p_85);
static unsigned short func_86(short p_87);
static union U0 func_1(void)
{
    int l_23[9][3][9] = {{{0x36717B38L,0x6A77D77FL,(-4L),0x63E3202FL,0L,0x64E48C0CL,0x3AF8EF5DL,(-1L),0x8BEA8E43L},{0x923F8C0EL,0L,(-1L),0x3AF8EF5DL,(-10L),(-1L),0x77ACAEC2L,(-1L),(-10L)},{0x4DB2A93FL,(-1L),(-1L),0x4DB2A93FL,1L,0xD33D73C1L,0x45799333L,0x1145714FL,1L}},{{0x923F8C0EL,0L,(-1L),0x52E4A6B2L,1L,0x98791B16L,(-1L),1L,0L},{0x36717B38L,(-7L),(-1L),0x923F8C0EL,1L,0x1145714FL,(-1L),0x64E48C0CL,0x53649D95L},{0x3AF8EF5DL,0L,(-4L),0xC3D8D589L,(-10L),0x24B2E809L,0x45799333L,(-1L),0L}},{{0x77ACAEC2L,0L,0xB108F980L,(-1L),0L,9L,0x77ACAEC2L,0xD005767AL,1L},{0x45799333L,(-7L),0L,0xC3D8D589L,0x0B0881DDL,9L,0x3AF8EF5DL,0xD33D73C1L,(-10L)},{(-1L),0L,(-1L),0x923F8C0EL,1L,0x24B2E809L,0x36717B38L,0xD005767AL,0x8BEA8E43L}},{{(-1L),(-1L),(-7L),0x52E4A6B2L,1L,0x1145714FL,0x923F8C0EL,(-1L),1L},{0x45799333L,0L,(-9L),1L,(-1L),1L,1L,0x38140A97L,0xA4C924B5L},{1L,(-1L),3L,0x53649D95L,(-3L),0xCFF29C21L,1L,(-1L),0xA4C924B5L}},{{0x53649D95L,(-9L),0x45180735L,1L,(-10L),(-5L),0x0B0881DDL,0L,0x1A16747BL},{0x0B0881DDL,(-1L),0L,1L,1L,0x38140A97L,0x53649D95L,(-5L),0x89C674F9L},{1L,(-10L),0x2A8F302DL,0x53649D95L,1L,(-5L),1L,(-5L),1L}},{{1L,(-5L),(-5L),1L,0xC57F39CEL,0xCFF29C21L,0x8BEA8E43L,0L,(-3L)},{1L,3L,(-5L),4L,0x447D0519L,1L,0L,(-1L),1L},{0x0B0881DDL,0x5161E33EL,0x2A8F302DL,1L,0xC57F39CEL,0L,0L,0x38140A97L,0xEDA781B5L}},{{0x53649D95L,0xA4A104ACL,0L,1L,1L,5L,0x8BEA8E43L,0x7BDD4840L,1L},{1L,0xA4A104ACL,0x45180735L,0L,1L,0xB80EBBD4L,1L,0L,(-3L)},{0x8BEA8E43L,0x5161E33EL,3L,1L,(-10L),0xB80EBBD4L,0x53649D95L,(-1L),0x45180735L}},{{(-1L),0x7BDD4840L,0L,0L,3L,0xA4C924B5L,9L,0x89C674F9L,0L},{(-1L),(-5L),0xCFF29C21L,(-1L),(-1L),1L,0L,0xC57F39CEL,0x2A8F302DL},{(-4L),1L,0L,0L,(-1L),(-1L),0L,0x533F2A6AL,(-5L)}},{{0x32DC1B2DL,0xFC0336AEL,0x7BDD4840L,(-7L),3L,(-1L),0L,0x447D0519L,(-5L)},{(-7L),0L,0x38140A97L,0L,0x7D24B5E4L,0x1A16747BL,9L,1L,0x2A8F302DL},{9L,0xFC0336AEL,(-1L),0L,(-9L),0x533F2A6AL,(-7L),0x1A16747BL,0L}}};
    char *l_58 = &g_21;
    int *l_958 = &g_2;
    unsigned l_982 = 0xB90423B5L;
    unsigned l_1000 = 0x36FCA75FL;
    int ******l_1128[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    short *l_1139[9];
    char l_1142[1];
    const int * const *l_1148 = &g_416;
    int l_1152[5][7][7] = {{{0x516C053CL,0x82B7CF4EL,(-8L),(-1L),0x24D176B7L,8L,9L},{7L,8L,0x8B8B523BL,(-7L),0x82B7CF4EL,(-1L),0x516C053CL},{0x57F3FAD8L,0xB6251A0BL,(-1L),(-10L),0x968D816EL,0xEEFF0FA9L,0L},{0xB6251A0BL,0xD1BA9485L,0xCD7B1EE2L,0x8B8B523BL,0x1EA0429CL,0xCF419E3EL,(-1L)},{0x9B489EA7L,0x85050DA7L,0x1C723E48L,0xEEFF0FA9L,0xA09474FDL,8L,0xCD7B1EE2L},{0xEEFF0FA9L,(-7L),1L,(-1L),(-10L),0x8FAB48E2L,(-7L)},{0xD1BA9485L,0xC9629202L,0x1EA0429CL,0xD92DC92DL,(-1L),(-10L),0xEEFF0FA9L}},{{8L,0x59FB6763L,0xCF419E3EL,0x06EAEC79L,0xCF419E3EL,0x59FB6763L,8L},{0x5D717E98L,(-1L),0x9B489EA7L,0x02381A0EL,0x47D9C249L,0x5C508A2FL,0x8FAB48E2L},{0L,(-1L),8L,(-2L),0x8FAB48E2L,0L,2L},{0x57F3FAD8L,(-10L),0x9B489EA7L,0x016E583CL,(-4L),0x1EA0429CL,(-7L)},{0xD92DC92DL,0L,0xCF419E3EL,0x1C723E48L,0x7E6E0E30L,0x516C053CL,0x57F3FAD8L},{0x12163485L,(-6L),0x1EA0429CL,(-1L),0x02381A0EL,0x59FB6763L,(-5L)},{0xC3596902L,0x8FAB48E2L,1L,0L,9L,0x82B7CF4EL,0xB6251A0BL}},{{0xEADCE34BL,(-8L),0x1C723E48L,0L,0x8FAB48E2L,0xD1BA9485L,0xBE1594E1L},{0x02381A0EL,0xCD7B1EE2L,(-1L),(-1L),(-7L),(-2L),(-1L)},{(-1L),0xC9629202L,0x02381A0EL,0x1C723E48L,1L,0x1C723E48L,0x02381A0EL},{0x47D9C249L,0x47D9C249L,0L,0x016E583CL,0xA09474FDL,(-6L),0x59FB6763L},{8L,9L,0x5C508A2FL,(-1L),(-10L),0x516C053CL,9L},{(-1L),0L,1L,0x016E583CL,0x06EAEC79L,(-1L),(-2L)},{(-7L),0x02381A0EL,9L,0x24D176B7L,0L,(-1L),0xC9629202L}},{{(-10L),1L,0x06EAEC79L,2L,0xCF419E3EL,0xBE1594E1L,(-7L)},{0x8B8B523BL,0x516C053CL,(-1L),0x82B7CF4EL,(-7L),0x8B8B523BL,8L},{0xD92DC92DL,(-1L),0x47D9C249L,(-1L),0xEADCE34BL,0x8B8B523BL,9L},{2L,0xB6251A0BL,(-4L),0x0227004DL,0x016E583CL,0xBE1594E1L,0x02381A0EL},{(-1L),(-1L),0x24D176B7L,8L,0xEEFF0FA9L,(-1L),0xEEFF0FA9L},{(-1L),(-7L),(-7L),(-1L),0xB6251A0BL,(-1L),(-1L)},{(-1L),0xD1BA9485L,0x0227004DL,0x85050DA7L,(-7L),0x516C053CL,0x968D816EL}},{{0L,(-1L),0x5D717E98L,1L,0x8B8B523BL,(-10L),(-1L)},{0x7E6E0E30L,0L,2L,0x0227004DL,7L,(-1L),0xEEFF0FA9L},{9L,0xCF419E3EL,0x12163485L,(-6L),0x1EA0429CL,(-1L),0x02381A0EL},{(-10L),9L,(-7L),(-8L),8L,1L,0x1C723E48L},{0L,0xA09474FDL,0x1C723E48L,(-10L),0x8B8B523BL,0xC9629202L,(-1L)},{0L,0L,(-1L),0x1C723E48L,0xB6251A0BL,0xEEFF0FA9L,0x6DE339BEL},{(-1L),0x5C508A2FL,9L,8L,0x1C723E48L,0x9B489EA7L,0xC3596902L}}};
    const short l_1174 = 0xE79DL;
    int i, j, k;
    for (i = 0; i < 9; i++)
        l_1139[i] = &g_48[6];
    for (i = 0; i < 1; i++)
        l_1142[i] = 0x99L;
    for (g_2 = 0; (g_2 > (-30)); g_2--)
    {
        char *l_20[4][2][4] = {{{(void*)0,&g_21,&g_21,&g_21},{&g_21,&g_21,&g_21,&g_21}},{{&g_21,&g_21,&g_21,&g_21},{&g_21,(void*)0,&g_21,&g_21}},{{&g_21,&g_21,&g_21,(void*)0},{&g_21,&g_21,&g_21,&g_21}},{{&g_21,&g_21,&g_21,&g_21},{&g_21,&g_21,&g_21,(void*)0}}};
        char **l_22 = &l_20[2][0][2];
        int l_41 = 1L;
        char *l_42 = &g_43;
        unsigned *l_46 = &g_47;
        unsigned char *l_665 = &g_542;
        const char ***l_941 = (void*)0;
        const char ***l_942 = &g_940[1];
        unsigned short l_986 = 5UL;
        const int * const *l_989 = (void*)0;
        short ***l_998 = (void*)0;
        unsigned l_1015 = 4294967293UL;
        short l_1092 = (-8L);
        int i, j, k;
    }
    (*l_958) = (-1L);
    (*l_958) = (safe_sub_func_int32_t_s_s(((**l_1148) < ((safe_rshift_func_uint16_t_u_s((safe_add_func_uint8_t_u_u((**l_1148), ((safe_div_func_int32_t_s_s((l_1174 & ((*g_1126) != (g_976[0][2][7] = &g_977))), (g_375 = ((*g_652) = (*g_416))))) > ((*g_57) = 0L)))), 1)) <= 0xA6L)), ((*l_958) < (-1L))));
    return g_1175;


    }







static const char ** func_5(int p_6, char p_7, unsigned char p_8)
{
    char *l_669[7][10] = {{&g_21,&g_43,&g_43,&g_21,&g_43,&g_21,&g_43,&g_43,&g_21,&g_43},{&g_21,&g_43,&g_43,&g_21,&g_43,&g_43,&g_43,&g_43,&g_43,&g_43},{&g_21,&g_43,&g_43,&g_21,&g_43,&g_21,&g_43,&g_43,&g_21,&g_43},{&g_21,&g_43,&g_43,&g_21,&g_43,&g_21,&g_43,&g_43,&g_21,&g_43},{&g_43,(void*)0,&g_21,&g_43,&g_43,(void*)0,(void*)0,(void*)0,(void*)0,&g_43},{&g_43,&g_21,&g_21,&g_43,&g_43,&g_43,(void*)0,&g_21,&g_43,&g_43},{&g_43,(void*)0,&g_21,&g_43,&g_43,&g_43,&g_21,(void*)0,&g_43,&g_43}};
    int l_674 = (-1L);
    int * const ***l_682 = (void*)0;
    int **l_695[7];
    unsigned char l_721 = 1UL;
    const unsigned *l_722[6][6][5] = {{{&g_153,&g_673,(void*)0,&g_153,&g_410[1][0][1]},{&g_153,(void*)0,&g_673,(void*)0,&g_153},{&g_410[7][0][3],&g_410[1][0][1],&g_47,&g_47,&g_153},{(void*)0,&g_153,&g_47,&g_135,&g_673},{&g_153,&g_153,&g_135,&g_410[1][0][1],&g_673},{&g_410[0][0][1],&g_153,&g_153,&g_410[2][0][1],&g_153}},{{(void*)0,&g_410[2][0][1],&g_153,&g_673,&g_153},{&g_153,&g_153,&g_135,(void*)0,&g_410[1][0][1]},{&g_410[2][0][1],&g_153,&g_153,&g_410[1][0][1],&g_410[2][0][3]},{&g_673,&g_410[1][0][1],&g_135,&g_135,&g_410[1][0][1]},{(void*)0,&g_135,&g_153,&g_410[1][0][1],&g_153},{&g_135,&g_673,(void*)0,&g_410[1][0][1],(void*)0}},{{&g_673,&g_153,&g_135,(void*)0,&g_410[1][0][1]},{&g_673,&g_135,(void*)0,(void*)0,&g_673},{&g_673,(void*)0,&g_410[1][0][1],&g_135,&g_135},{&g_410[1][0][1],&g_47,&g_673,&g_153,&g_410[7][0][3]},{&g_153,&g_410[1][0][1],(void*)0,(void*)0,(void*)0},{&g_410[1][0][1],&g_47,&g_410[2][0][3],&g_47,&g_673}},{{(void*)0,&g_153,&g_153,&g_410[2][0][3],&g_135},{&g_135,&g_153,&g_410[1][0][1],(void*)0,&g_410[1][0][1]},{&g_410[7][0][1],&g_153,(void*)0,&g_135,&g_673},{&g_673,&g_153,&g_135,&g_153,&g_153},{&g_673,&g_47,(void*)0,&g_410[0][0][1],&g_410[1][0][1]},{&g_410[1][0][1],&g_410[1][0][1],(void*)0,&g_153,&g_410[2][0][2]}},{{&g_153,&g_47,&g_153,&g_410[1][0][1],&g_410[1][0][1]},{&g_153,(void*)0,&g_153,&g_673,&g_47},{(void*)0,&g_135,&g_135,&g_153,&g_410[1][0][1]},{&g_47,&g_410[1][0][1],(void*)0,&g_135,&g_673},{&g_410[1][0][1],(void*)0,&g_135,&g_410[1][0][1],&g_153},{&g_673,&g_673,&g_153,&g_673,&g_410[1][0][1]}},{{&g_153,&g_153,&g_153,&g_153,&g_410[1][0][1]},{(void*)0,&g_47,(void*)0,&g_410[1][0][1],&g_47},{&g_410[1][0][1],&g_673,&g_153,&g_135,(void*)0},{&g_47,(void*)0,&g_410[1][0][1],&g_135,&g_47},{&g_153,&g_153,&g_135,&g_410[1][0][1],&g_410[1][0][1]},{&g_673,&g_410[1][0][1],(void*)0,&g_410[1][0][1],(void*)0}}};
    short l_723 = 0x76C6L;
    const int *l_724 = &g_375;
    union U0 *l_729 = &g_730;
    unsigned short *l_773 = &g_129;
    char l_780 = 0x66L;
    union U0 **l_798[1];
    const int * const l_907[5] = {&g_909,&g_909,&g_909,&g_909,&g_909};
    const int * const *l_906[2][10][5] = {{{&l_907[0],&l_907[0],&l_907[0],&l_907[0],&l_907[0]},{&l_907[0],&l_907[0],&l_907[0],&l_907[0],&l_907[0]},{&l_907[0],&l_907[0],&l_907[0],&l_907[0],&l_907[0]},{&l_907[0],&l_907[0],&l_907[0],&l_907[0],&l_907[0]},{&l_907[0],&l_907[0],&l_907[0],&l_907[0],&l_907[0]},{&l_907[0],&l_907[0],&l_907[0],&l_907[0],&l_907[0]},{&l_907[0],&l_907[0],&l_907[0],&l_907[0],&l_907[0]},{&l_907[0],&l_907[0],&l_907[0],&l_907[0],&l_907[0]},{&l_907[0],&l_907[0],&l_907[0],&l_907[0],&l_907[0]},{&l_907[0],&l_907[0],&l_907[0],&l_907[0],&l_907[0]}},{{&l_907[0],&l_907[0],&l_907[0],&l_907[0],&l_907[0]},{&l_907[0],&l_907[0],&l_907[0],&l_907[0],&l_907[0]},{&l_907[0],&l_907[0],&l_907[0],&l_907[0],&l_907[0]},{&l_907[0],&l_907[0],&l_907[0],&l_907[0],&l_907[0]},{&l_907[0],&l_907[0],&l_907[0],&l_907[0],&l_907[0]},{&l_907[0],&l_907[0],&l_907[0],&l_907[0],&l_907[0]},{&l_907[0],&l_907[0],&l_907[0],&l_907[0],&l_907[0]},{&l_907[0],&l_907[0],&l_907[0],&l_907[0],&l_907[0]},{&l_907[0],&l_907[0],&l_907[0],&l_907[0],&l_907[0]},{&l_907[0],&l_907[0],&l_907[0],&l_907[0],&l_907[0]}}};
    int i, j, k;
    for (i = 0; i < 7; i++)
        l_695[i] = (void*)0;
    for (i = 0; i < 1; i++)
        l_798[i] = &g_352;
    for (g_153 = (-23); (g_153 >= 11); g_153 = safe_add_func_uint8_t_u_u(g_153, 8))
    {
        int *l_668 = &g_66[0][2][6];
        const int * const *l_670 = &g_416;
        (*g_109) = func_71(&g_21, func_76(l_668, func_71(l_669[3][4], l_670, &g_110, ((((safe_div_func_int16_t_s_s((*g_179), (g_673 ^ (*l_668)))) & 65526UL) > (*l_668)) || l_674)), &g_673), &g_110, (**l_670));

        ;
    }
    if (((*g_652) = l_674))
    {
        int *l_675[2];
        char **l_683 = (void*)0;
        int i;
        for (i = 0; i < 2; i++)
            l_675[i] = &l_674;
        (*g_109) = l_675[0];

        ;
        (*g_109) = func_81((*g_187), p_6, (safe_rshift_func_uint8_t_u_u(((((safe_lshift_func_int16_t_s_u(p_7, (~(safe_sub_func_int8_t_s_s((**g_56), p_7))))) & (g_47 || 0xDEL)) ^ p_7) & (*g_409)), 4)), p_7);

        ;
    }
    else
    {
        const int *l_684 = &g_66[0][2][3];
        const int **l_685 = &l_684;
        int ***l_688[1];
        int ****l_687 = &l_688[0];
        int *****l_686 = &l_687;
        int ******l_689 = &l_686;
        char l_698 = 0xDBL;
        const char **l_745 = &g_744;
        int *****l_770 = &l_687;
        union U0 *l_845 = &g_846;
        char * const *l_849 = (void*)0;
        short **l_884 = &g_394;
        short ***l_883 = &l_884;
        char l_899 = 0x85L;
        int i;
        for (i = 0; i < 1; i++)
            l_688[i] = &g_109;
    }


    if (p_7)
    {
        (*g_652) = (*l_724);
        for (g_131 = 0; (g_131 < 26); g_131 = safe_add_func_uint8_t_u_u(g_131, 2))
        {
            return &g_744;



        }
    }
    else
    {
        g_352 = &g_730;

        ;
    }

    ;
    return g_940[1];



}







static unsigned char func_9(unsigned p_10, char ** p_11)
{
    unsigned l_517 = 0x74000F16L;
    int l_518 = 0x160D8239L;
    int l_519 = (-1L);
    short l_588 = 0x4073L;
    char *l_595 = &g_43;
    int l_598 = 0x5BF55795L;
    char **l_600[1][10] = {{(void*)0,(void*)0,&g_57,(void*)0,(void*)0,&g_57,(void*)0,(void*)0,&g_57,(void*)0}};
    unsigned short *l_605 = &g_131;
    unsigned char *l_647 = &g_542;
    int i, j;
lbl_604:
    l_519 = (1L && (p_10 > ((safe_div_func_int16_t_s_s(func_86(p_10), (safe_mod_func_uint32_t_u_u(p_10, l_517)))) ^ (0L != (l_518 = p_10)))));
    for (l_518 = (-29); (l_518 > (-18)); ++l_518)
    {
        union U0 **l_522 = &g_352;
        int *l_535[7][5][7] = {{{&g_375,&l_519,&l_519,&g_375,&l_519,&l_519,&g_375},{&l_519,&g_375,&l_519,&l_519,&g_375,&l_519,&l_519},{&g_375,&g_375,&g_66[0][2][6],&g_375,&g_375,&g_66[0][2][6],&g_375},{&g_375,&l_519,&l_519,&g_375,&l_519,&l_519,&g_375},{&l_519,&g_375,&l_519,&l_519,&g_375,&l_519,&l_519}},{{&g_375,&g_375,&g_66[0][2][6],&g_375,&g_375,&g_66[0][2][6],&g_375},{&g_375,&l_519,&l_519,&g_375,&l_519,&l_519,&g_375},{&l_519,&g_375,&l_519,&l_519,&g_375,&l_519,&l_519},{&g_375,&g_375,&g_66[0][2][6],&g_375,&g_375,&g_66[0][2][6],&g_375},{&g_375,&l_519,&l_519,&g_375,&l_519,&l_519,&g_375}},{{&l_519,&g_375,&l_519,&l_519,&g_375,&l_519,&l_519},{&g_375,&g_375,&g_66[0][2][6],&g_375,&g_375,&g_66[0][2][6],&g_375},{&g_375,&l_519,&l_519,&g_375,&l_519,&l_519,&g_375},{&l_519,&g_375,&l_519,&l_519,&g_375,&l_519,&l_519},{&g_375,&g_375,&g_66[0][2][6],&g_375,&g_375,&g_66[0][2][6],&g_375}},{{&g_375,&l_519,&l_519,&g_375,&l_519,&l_519,&g_375},{&l_519,&g_375,&l_519,&l_519,&g_375,&l_519,&l_519},{&g_375,&g_375,&g_66[0][2][6],&g_375,&g_375,&g_66[0][2][6],&g_375},{&g_375,&l_519,&l_519,&g_375,&l_519,&l_519,&g_375},{&l_519,&g_375,&l_519,&l_519,&g_375,&l_519,&l_519}},{{&g_375,&g_375,&g_66[0][2][6],&g_375,&g_375,&g_66[0][2][6],&g_375},{&g_375,&l_519,&l_519,&g_375,&g_66[0][2][6],&g_66[0][2][6],&l_519},{&g_66[0][2][6],&l_519,&g_66[0][2][6],&g_66[0][2][6],&l_519,&g_66[0][2][6],&g_66[0][2][6]},{&l_519,&l_519,&g_375,&l_519,&l_519,&g_375,&l_519},{&l_519,&g_66[0][2][6],&g_66[0][2][6],&l_519,&g_66[0][2][6],&g_66[0][2][6],&l_519}},{{&g_66[0][2][6],&l_519,&g_66[0][2][6],&g_66[0][2][6],&l_519,&g_66[0][2][6],&g_66[0][2][6]},{&l_519,&l_519,&g_375,&l_519,&l_519,&g_375,&l_519},{&l_519,&g_66[0][2][6],&g_66[0][2][6],&l_519,&g_66[0][2][6],&g_66[0][2][6],&l_519},{&g_66[0][2][6],&l_519,&g_66[0][2][6],&g_66[0][2][6],&l_519,&g_66[0][2][6],&g_66[0][2][6]},{&l_519,&l_519,&g_375,&l_519,&l_519,&g_375,&l_519}},{{&l_519,&g_66[0][2][6],&g_66[0][2][6],&l_519,&g_66[0][2][6],&g_66[0][2][6],&l_519},{&g_66[0][2][6],&l_519,&g_66[0][2][6],&g_66[0][2][6],&l_519,&g_66[0][2][6],&g_66[0][2][6]},{&l_519,&l_519,&g_375,&l_519,&l_519,&g_375,&l_519},{&l_519,&g_66[0][2][6],&g_66[0][2][6],&l_519,&g_66[0][2][6],&g_66[0][2][6],&l_519},{&g_66[0][2][6],&l_519,&g_66[0][2][6],&g_66[0][2][6],&l_519,&g_66[0][2][6],&g_66[0][2][6]}}};
        int l_597 = 7L;
        union U0 *l_623[5][8] = {{&g_353,&g_403,&g_353,&g_403,&g_353,&g_403,&g_353,&g_403},{&g_353,&g_403,&g_353,&g_403,&g_353,&g_403,&g_353,&g_403},{&g_353,&g_403,&g_353,&g_403,&g_353,&g_403,&g_353,&g_403},{&g_353,&g_403,&g_353,&g_403,&g_353,&g_403,&g_353,&g_403},{&g_353,&g_403,&g_353,&g_403,&g_353,&g_403,&g_353,&g_403}};
        unsigned char *l_634 = &g_621;
        unsigned char **l_633 = &l_634;
        int i, j, k;
        (*g_109) = (void*)0;

        ;
        (*l_522) = &g_140;

        ;
        for (g_55 = 0; (g_55 >= 43); g_55++)
        {
            const unsigned short l_540 = 9UL;
            int l_543 = 0x6F864AFCL;
            int **l_549 = &l_535[0][1][6];
            int **l_550 = &g_110;
            union U0 *l_556 = (void*)0;
            const unsigned l_563 = 0x772EF0DBL;
            short **l_612 = &g_394;
            int ***l_614 = (void*)0;
            int ****l_613 = &l_614;
            unsigned char ***l_635 = &l_633;
        }
        if (p_10)
            continue;
    }
    (*g_109) = &l_598;

    ;
    for (g_43 = (-23); (g_43 != 23); ++g_43)
    {
        int ****l_655 = (void*)0;
        char *l_657 = &g_21;
        unsigned short *l_664[1];
        int i;
        for (i = 0; i < 1; i++)
            l_664[i] = &g_129;
        if ((safe_lshift_func_int8_t_s_u((**p_11), 3)))
        {
            (*g_109) = g_652;

            ;
        }
        else
        {
            for (g_131 = (-29); (g_131 > 51); g_131++)
            {
                if (g_21)
                    goto lbl_604;
                for (g_542 = 0; (g_542 <= 8); g_542 += 1)
                {
                    unsigned l_656 = 0x3B12F56EL;
                    for (g_129 = 0; (g_129 <= 8); g_129 += 1)
                    {
                        int i;
                        (*g_652) = g_48[g_542];
                        (*g_652) = func_32(((void*)0 == l_655), p_10);
                        return l_656;


                    }
                }
                (*g_109) = &l_519;

                ;
            }

            ;
        }

        ;
        (*g_109) = func_71(l_657, &g_416, &g_110, (g_129 = (safe_sub_func_uint8_t_u_u(p_10, ((safe_sub_func_int16_t_s_s((p_10 & (safe_div_func_uint8_t_u_u(p_10, ((p_10 & (g_181 = ((*l_605) = 0x9A34L))) & (p_10 ^ l_518))))), 0xD2A6L)) > (**g_56))))));

        ;
    }

    ;
    return l_517;


}







static unsigned func_14(int p_15, char * p_16, int p_17, int p_18, unsigned p_19)
{
    int *l_422 = &g_66[0][0][5];
    unsigned short **l_423 = &g_327;
    const int l_428 = 0x2713DB18L;
    unsigned **l_445 = &g_409;
    unsigned ***l_444[8][10] = {{&l_445,&l_445,&l_445,&l_445,&l_445,&l_445,&l_445,&l_445,&l_445,&l_445},{&l_445,&l_445,&l_445,&l_445,&l_445,&l_445,&l_445,&l_445,&l_445,&l_445},{&l_445,&l_445,&l_445,&l_445,&l_445,&l_445,&l_445,&l_445,&l_445,&l_445},{&l_445,&l_445,&l_445,&l_445,&l_445,&l_445,&l_445,&l_445,&l_445,&l_445},{&l_445,&l_445,&l_445,&l_445,&l_445,&l_445,&l_445,&l_445,&l_445,&l_445},{&l_445,&l_445,&l_445,&l_445,&l_445,&l_445,&l_445,(void*)0,&l_445,&l_445},{&l_445,(void*)0,(void*)0,&l_445,&l_445,&l_445,(void*)0,(void*)0,&l_445,&l_445},{&l_445,(void*)0,(void*)0,&l_445,&l_445,&l_445,(void*)0,(void*)0,&l_445,&l_445}};
    int l_447 = 0x80D96407L;
    char * const *l_463 = (void*)0;
    unsigned char l_503 = 9UL;
    int i, j;
lbl_424:
    l_422 = (void*)0;

    ;
    (*g_110) = (l_423 == (void*)0);
lbl_464:
    for (p_18 = 2; (p_18 <= 8); p_18 += 1)
    {
        unsigned char l_427 = 0x7BL;
        const unsigned l_429 = 0UL;
        int i;
        if (p_18)
            goto lbl_424;
        (*g_110) = (safe_sub_func_int8_t_s_s((+g_48[p_18]), ((0UL | ((((255UL ^ (*g_57)) <= (func_86((*g_394)) > p_15)) > ((((l_427 = 0x3EL) == (l_428 ^ p_19)) && l_429) <= 3UL)) == l_429)) > p_18)));
    }
    if ((safe_mod_func_int32_t_s_s(p_18, (p_15 & l_428))))
    {
        int l_432 = (-8L);
        unsigned short l_446 = 0x1679L;
        char * const *l_450 = &g_57;
        char *l_451 = &g_43;
        short *l_457[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        unsigned short **l_477 = &g_327;
        int l_498 = 0x4FDCADB4L;
        int *l_505 = (void*)0;
        int i;
        if (((**g_109) = func_86((l_432 || (**g_393)))))
        {
            const int l_435 = (-6L);
            unsigned short l_448 = 0UL;
            unsigned char *l_449 = &g_55;
            int l_478 = 1L;
            int *l_504 = &l_447;
            if ((safe_sub_func_int16_t_s_s((l_435 >= (safe_sub_func_int16_t_s_s((p_18 == func_26((**g_186), (((*l_449) = ((safe_rshift_func_uint8_t_u_s((((~p_17) == 0xBBF9C2A4L) >= (*g_409)), (func_32((((safe_add_func_uint16_t_u_u((l_447 = (safe_mod_func_int8_t_s_s((l_444[2][2] != (void*)0), func_32(l_432, l_446)))), l_435)) || g_55) | l_448), p_17) || p_15))) || l_435)) >= 7L), l_450, l_451)), l_435))), 0x9A9EL)))
            {
                short **l_456 = &g_394;
                int l_458 = 5L;
                int * const *l_466 = &g_110;
                int * const * const *l_465 = &l_466;
                unsigned short l_473 = 0x4A64L;
                if (((*g_416) & (func_32((safe_add_func_uint16_t_u_u(((safe_div_func_uint16_t_u_u((((*l_456) = &g_48[3]) == (l_457[0] = &g_48[4])), l_458)) & (safe_sub_func_int32_t_s_s((safe_sub_func_uint32_t_u_u(p_15, func_26((*g_409), l_458, l_463, p_16))), 0x27F4EFB9L))), p_15)), p_18) || p_18)))
                {
                    union U0 *l_468[3];
                    int l_472 = 0x4341FC42L;
                    int i;
                    for (i = 0; i < 3; i++)
                        l_468[i] = (void*)0;
                    if (p_19)
                        goto lbl_464;
                    if (p_17)
                        goto lbl_474;
lbl_474:
                    if (l_432)
                    {
                        int * const * const **l_467 = &l_465;
                        int *l_469[6];
                        int i;
                        for (i = 0; i < 6; i++)
                            l_469[i] = &g_375;
                        (**l_466) = (p_15 < (((*l_467) = l_465) != (void*)0));
                        (*g_109) = func_81(p_19, ((*g_416) >= ((****l_467) < ((p_19 != ((g_375 = ((*g_409) && (l_468[1] == &g_403))) || (safe_div_func_int8_t_s_s(l_472, func_86(p_18))))) < 255UL))), p_18, l_446);

                        ;
                        if (p_15)
                            goto lbl_502;
                    }
                    else
                    {
                        (*g_109) = (*g_109);
                        g_289 = ((***l_465) = l_473);
                        (*g_109) = (void*)0;

                        ;
                    }

                    ;
                    l_458 = func_26((*g_187), (safe_lshift_func_int16_t_s_u((&g_327 != l_477), 0)), &g_57, &g_21);

                    ;
                }
                else
                {
                    short ** const * const l_486 = &l_456;
                    int l_497 = 0xE3347DF2L;
                    int *l_499 = &l_497;
lbl_481:
                    l_478 = 1L;
                    for (g_135 = 22; (g_135 >= 55); g_135 = safe_add_func_int8_t_s_s(g_135, 3))
                    {
                        volatile int **l_483 = &g_482[6];
                        if (l_432)
                            goto lbl_481;
                        (*g_109) = (*g_109);
                        (*l_483) = g_482[0];
                    }
                    for (g_21 = (-18); (g_21 > 14); g_21++)
                    {
                        (*g_109) = &p_17;

                        ;
                        if (l_448)
                            break;
                    }

                    ;
                    l_499 = func_81((g_153 = ((*g_409) = ((*g_179) | ((&g_393 != l_486) | (func_32(l_448, (safe_add_func_int32_t_s_s((func_32(((safe_rshift_func_uint8_t_u_s((safe_div_func_int16_t_s_s((safe_lshift_func_int16_t_s_s((safe_mod_func_int32_t_s_s(func_32((&g_57 == &p_16), l_446), p_15)), p_15)), p_19)), 1)) < l_497), p_17) != 0x241724FFL), p_19))) || p_17))))), l_497, l_498, l_497);

                    ;
                    ;
                }

                ;

                p_18 = 3L;
            }
            else
            {
lbl_502:
                for (g_138 = 0; (g_138 >= (-26)); g_138--)
                {
                    return p_15;
                }
                (*l_504) = l_503;
                return l_446;
            }

            ;

        }
        else
        {
            (*g_109) = (*g_109);
        }

        ;

        (*g_109) = (l_505 = (*g_109));

        ;
    }
    else
    {
        unsigned l_508 = 1UL;
        unsigned short *l_509[7] = {(void*)0,(void*)0,&g_131,(void*)0,(void*)0,&g_131,(void*)0};
        int *l_512 = &g_375;
        int i;
        (*l_512) = ((**g_109) = (safe_lshift_func_int8_t_s_s(((!(g_129 = l_508)) & ((g_403.f0 > 0UL) & (0xBA16L & func_86(l_503)))), (0xA6E103EEL && (safe_div_func_uint8_t_u_u(((**g_393) | p_17), g_131))))));
    }

    ;
    return p_15;


}







static unsigned short func_26(unsigned p_27, const unsigned char p_28, char * const * p_29, char * p_30)
{
    int *l_65[2];
    int *l_80 = &g_2;
    unsigned l_90 = 4294967295UL;
    unsigned **l_91 = (void*)0;
    unsigned *l_93 = &g_47;
    unsigned **l_92 = &l_93;
    unsigned *l_95 = &g_47;
    unsigned **l_94 = &l_95;
    int **l_417[10] = {&l_80,&l_80,&l_80,&l_80,&l_80,&l_80,&l_80,&l_80,&l_80,&l_80};
    int i;
    for (i = 0; i < 2; i++)
        l_65[i] = &g_66[0][2][6];
    for (g_43 = 0; (g_43 == 13); g_43++)
    {
        int l_67 = (-5L);
        int l_68 = 1L;
        for (g_55 = 0; (g_55 == 57); g_55++)
        {
            int *l_64[2];
            int **l_63[9][3] = {{(void*)0,&l_64[0],&l_64[1]},{&l_64[0],(void*)0,&l_64[1]},{&l_64[0],&l_64[1],(void*)0},{&l_64[0],(void*)0,(void*)0},{&l_64[1],&l_64[1],(void*)0},{(void*)0,(void*)0,&l_64[0]},{(void*)0,&l_64[0],&l_64[0]},{&l_64[1],(void*)0,(void*)0},{&l_64[0],(void*)0,&l_64[0]}};
            int i, j;
            for (i = 0; i < 2; i++)
                l_64[i] = &g_2;
            l_65[0] = (void*)0;
        }
        l_67 = (&g_66[0][2][4] != (void*)0);
        l_68 = g_66[0][2][6];
        l_68 = (6L > g_47);
    }


    g_66[0][2][1] = (safe_div_func_int32_t_s_s((p_28 < g_2), p_28));
    (*g_109) = func_71(p_30, func_76(l_80, (l_65[0] = func_81(p_28, (func_86((g_48[4] = (safe_add_func_int16_t_s_s((l_90 || (&p_27 == ((*l_94) = ((*l_92) = &g_47)))), (*l_80))))) && 0x60D3L), p_28, (**g_56))), g_409), l_417[9], p_28);

    ;
    (*g_109) = (*g_109);
    return (*l_80);
}







static unsigned func_32(char p_33, unsigned p_34)
{
    union U0 **l_49 = (void*)0;
    union U0 *l_51 = (void*)0;
    union U0 **l_50 = &l_51;
    int l_54 = 0x50090E7AL;
    (*l_50) = (void*)0;
    for (g_47 = 2; (g_47 <= 8); g_47 += 1)
    {
        int *l_52 = (void*)0;
        int *l_53 = (void*)0;
        l_54 = g_43;
        g_55 = (p_34 != l_54);
    }
    return p_33;
}







static int * func_71(char * p_72, const int * const * p_73, int ** p_74, unsigned short p_75)
{
    char l_420 = 0x2DL;
    int *l_421 = &g_66[0][2][6];
    (*l_421) = func_86((safe_mod_func_uint32_t_u_u(4294967295UL, l_420)));
    return l_421;


}







static const int ** func_76(int * p_77, int * p_78, unsigned * p_79)
{
    unsigned **l_412[5][10][5] = {{{(void*)0,&g_409,(void*)0,&g_409,&g_409},{(void*)0,(void*)0,&g_409,&g_409,&g_409},{&g_409,&g_409,&g_409,&g_409,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&g_409,(void*)0,&g_409},{&g_409,&g_409,&g_409,&g_409,&g_409},{(void*)0,(void*)0,(void*)0,(void*)0,&g_409},{&g_409,&g_409,&g_409,&g_409,&g_409},{&g_409,(void*)0,&g_409,&g_409,&g_409},{&g_409,&g_409,&g_409,&g_409,&g_409}},{{&g_409,&g_409,&g_409,&g_409,(void*)0},{(void*)0,&g_409,&g_409,&g_409,&g_409},{&g_409,&g_409,&g_409,&g_409,(void*)0},{&g_409,(void*)0,&g_409,&g_409,&g_409},{&g_409,&g_409,&g_409,&g_409,(void*)0},{&g_409,&g_409,(void*)0,&g_409,&g_409},{(void*)0,&g_409,&g_409,&g_409,&g_409},{&g_409,&g_409,&g_409,(void*)0,&g_409},{&g_409,&g_409,&g_409,&g_409,(void*)0},{&g_409,&g_409,&g_409,&g_409,&g_409}},{{&g_409,&g_409,&g_409,&g_409,&g_409},{(void*)0,(void*)0,&g_409,&g_409,&g_409},{&g_409,&g_409,&g_409,&g_409,&g_409},{&g_409,&g_409,&g_409,&g_409,&g_409},{&g_409,&g_409,&g_409,(void*)0,(void*)0},{&g_409,&g_409,(void*)0,&g_409,&g_409},{(void*)0,&g_409,&g_409,&g_409,&g_409},{(void*)0,&g_409,&g_409,(void*)0,&g_409},{&g_409,&g_409,&g_409,&g_409,&g_409},{(void*)0,&g_409,&g_409,&g_409,(void*)0}},{{&g_409,&g_409,&g_409,&g_409,&g_409},{(void*)0,&g_409,&g_409,&g_409,&g_409},{(void*)0,&g_409,&g_409,&g_409,(void*)0},{&g_409,&g_409,&g_409,&g_409,(void*)0},{&g_409,&g_409,&g_409,(void*)0,(void*)0},{(void*)0,&g_409,&g_409,&g_409,&g_409},{&g_409,&g_409,&g_409,&g_409,&g_409},{(void*)0,&g_409,&g_409,(void*)0,&g_409},{&g_409,&g_409,&g_409,&g_409,&g_409},{&g_409,&g_409,&g_409,&g_409,&g_409}},{{(void*)0,&g_409,&g_409,&g_409,(void*)0},{&g_409,(void*)0,&g_409,&g_409,&g_409},{&g_409,&g_409,&g_409,(void*)0,&g_409},{&g_409,&g_409,&g_409,&g_409,&g_409},{&g_409,&g_409,&g_409,&g_409,&g_409},{&g_409,&g_409,&g_409,&g_409,&g_409},{&g_409,&g_409,&g_409,&g_409,&g_409},{(void*)0,&g_409,&g_409,&g_409,(void*)0},{&g_409,&g_409,&g_409,(void*)0,&g_409},{(void*)0,(void*)0,&g_409,&g_409,&g_409}}};
    unsigned ***l_411 = &l_412[0][6][3];
    const int *l_414 = &g_2;
    const int **l_413 = &l_414;
    int i, j, k;
    (*l_411) = &p_79;


    return g_415[5][1];


}







static int * func_81(unsigned p_82, unsigned p_83, int p_84, char p_85)
{
    short * const l_101 = &g_48[1];
    short * const *l_100[8][8] = {{&l_101,&l_101,&l_101,&l_101,(void*)0,&l_101,&l_101,&l_101},{&l_101,&l_101,&l_101,&l_101,&l_101,&l_101,&l_101,&l_101},{&l_101,&l_101,&l_101,&l_101,&l_101,&l_101,(void*)0,&l_101},{&l_101,&l_101,(void*)0,&l_101,&l_101,&l_101,&l_101,&l_101},{&l_101,&l_101,&l_101,&l_101,&l_101,&l_101,&l_101,&l_101},{&l_101,&l_101,&l_101,&l_101,(void*)0,&l_101,&l_101,&l_101},{&l_101,&l_101,(void*)0,&l_101,&l_101,&l_101,(void*)0,&l_101},{&l_101,&l_101,&l_101,&l_101,&l_101,&l_101,&l_101,&l_101}};
    char **l_144 = &g_57;
    int *l_154[1];
    unsigned char l_168 = 0x66L;
    short l_172 = (-1L);
    unsigned char *l_257 = &g_55;
    unsigned l_293 = 0x7B91546AL;
    unsigned short l_342 = 1UL;
    int i, j;
    for (i = 0; i < 1; i++)
        l_154[i] = (void*)0;
    for (g_47 = 0; (g_47 <= 0); g_47 += 1)
    {
        int l_111 = 1L;
        short *l_124[9] = {&g_48[5],(void*)0,(void*)0,&g_48[5],(void*)0,(void*)0,&g_48[5],(void*)0,(void*)0};
        union U0 *l_139 = &g_140;
        unsigned l_167 = 8UL;
        int i;
        for (p_82 = 0; (p_82 <= 8); p_82 += 1)
        {
            short * const **l_102 = &l_100[5][3];
            int l_112 = 1L;
            (*l_102) = l_100[5][3];
            for (g_43 = 0; (g_43 >= 0); g_43 -= 1)
            {
                int i, j, k;
                if ((g_66[g_47][(g_43 + 3)][p_82] | ((g_48[p_82] == 0x87L) || 0L)))
                {
                    int *l_115 = &g_66[g_47][(g_43 + 3)][p_82];
                    int i, j, k;
                    g_66[g_43][(g_43 + 2)][(g_43 + 1)] = (((safe_div_func_int32_t_s_s((((safe_rshift_func_uint16_t_u_u((65535UL >= p_84), ((safe_rshift_func_uint8_t_u_s(func_86((g_109 != (void*)0)), (&g_47 != (void*)0))) > (l_111 < (0x9AL && p_84))))) || g_47) >= g_21), 0xE3977822L)) <= l_112) & p_85);
                    g_66[g_43][(g_43 + 3)][(g_43 + 2)] = func_86((safe_lshift_func_uint8_t_u_s((0x23L == (**g_56)), 7)));
                    (*l_115) = ((void*)0 == &g_47);
                    for (p_83 = 0; (p_83 <= 8); p_83 += 1)
                    {
                        int *l_116 = &g_66[0][2][6];
                        return l_116;


                    }
                }
                else
                {
                    int *l_121 = &g_66[g_47][(g_43 + 3)][p_82];
                    short **l_125 = &l_124[4];
                    unsigned short *l_128 = &g_129;
                    unsigned short *l_130 = &g_131;
                    unsigned *l_134 = &g_135;
                    int i;
                    (*l_121) = (safe_div_func_int32_t_s_s(((safe_sub_func_uint16_t_u_u(0xC26EL, (g_48[(g_47 + 6)] = g_66[0][2][6]))) != p_83), g_66[g_47][(g_43 + 3)][p_82]));
                    if (((safe_sub_func_uint8_t_u_u((&g_48[p_82] != ((*l_125) = l_124[7])), (**g_56))) < (safe_mul_func_uint16_t_u_u(((*l_130) = ((*l_128) = p_84)), (((1UL & 1L) || ((*l_134) = p_83)) != ((0xD12DL <= (g_138 = (safe_add_func_uint16_t_u_u(g_66[g_47][(g_43 + 3)][p_82], l_111)))) <= g_2))))))
                    {
                        union U0 **l_141 = &l_139;
                        (*l_141) = l_139;
                    }
                    else
                    {
                        unsigned short l_145 = 1UL;
                        l_111 = (((*l_134) = (safe_sub_func_uint8_t_u_u(0x37L, (0x9CL == ((void*)0 == l_144))))) ^ func_86(((l_145 < (safe_unary_minus_func_int16_t_s((safe_sub_func_int16_t_s_s(0x76EEL, (safe_div_func_uint8_t_u_u((safe_add_func_int16_t_s_s(l_112, l_145)), (((!(p_83 | p_82)) ^ p_84) && g_66[0][1][4])))))))) >= g_153)));
                    }
                    (*g_109) = l_134;

                    ;
                }
            }


            return l_154[0];


        }
        for (p_83 = 0; (p_83 <= 0); p_83 += 1)
        {
            int i;
            l_168 = (g_140.f0 >= (safe_rshift_func_int8_t_s_s((safe_sub_func_uint16_t_u_u((func_86(p_82) && (g_48[g_47] = (safe_sub_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s((safe_lshift_func_uint16_t_u_s(l_111, func_86(g_21))), 2)), ((((safe_lshift_func_uint8_t_u_u(((p_84 < p_82) >= (6UL > g_140.f2)), 5)) ^ p_82) < l_167) && 0UL))))), g_153)), 2)));
            for (l_167 = 0; (l_167 <= 0); l_167 += 1)
            {
                unsigned char *l_169 = &g_55;
                int i, j, k;
                g_66[g_47][(l_167 + 2)][g_47] = (0x5C82D1F4L >= ((g_48[7] ^ ((*l_169) = g_48[g_47])) | 0xA4FAL));
                for (g_129 = 0; (g_129 <= 0); g_129 += 1)
                {
                    int i, j, k;
                    g_66[l_167][(l_167 + 2)][(l_167 + 2)] = p_84;
                    if (g_48[g_47])
                        continue;
                    (*g_109) = l_154[0];

                    ;
                }
            }
        }
    }
    for (g_153 = 0; (g_153 <= 0); g_153 += 1)
    {
        int *l_174[1];
        unsigned *l_185 = &g_135;
        unsigned **l_184 = &l_185;
        short *l_243[5] = {&l_172,&l_172,&l_172,&l_172,&l_172};
        short **l_242[7][6] = {{&l_243[1],(void*)0,(void*)0,&l_243[1],(void*)0,&l_243[1]},{&l_243[1],&l_243[1],(void*)0,&l_243[1],&l_243[1],&l_243[0]},{&l_243[1],&l_243[1],&l_243[1],&l_243[1],(void*)0,&l_243[3]},{&l_243[1],(void*)0,&l_243[3],&l_243[1],&l_243[1],&l_243[3]},{&l_243[1],&l_243[1],&l_243[1],&l_243[1],&l_243[1],&l_243[0]},{&l_243[1],(void*)0,(void*)0,&l_243[1],(void*)0,&l_243[1]},{&l_243[1],&l_243[1],(void*)0,&l_243[1],&l_243[1],&l_243[0]}};
        unsigned l_245 = 4294967295UL;
        int ***l_254 = (void*)0;
        int ****l_255 = &l_254;
        unsigned char *l_256 = &l_168;
        unsigned char **l_258 = &l_257;
        unsigned short *l_259 = &g_181;
        char *l_270 = &g_43;
        unsigned l_306 = 0xF5E08FB8L;
        int *l_324 = &g_66[0][2][6];
        union U0 *l_343[3][9] = {{(void*)0,(void*)0,&g_140,(void*)0,(void*)0,&g_140,&g_140,&g_140,&g_140},{(void*)0,(void*)0,(void*)0,&g_140,(void*)0,(void*)0,(void*)0,&g_140,&g_140},{&g_140,&g_140,(void*)0,&g_140,&g_140,&g_140,(void*)0,&g_140,&g_140}};
        int i, j;
        for (i = 0; i < 1; i++)
            l_174[i] = (void*)0;
    }
    return (*g_109);


}







static unsigned short func_86(short p_87)
{
    unsigned char l_96 = 0UL;
    short *l_97[8][9][3] = {{{&g_48[3],&g_48[1],&g_48[6]},{&g_48[1],&g_48[7],&g_48[1]},{&g_48[1],&g_48[1],&g_48[5]},{&g_48[1],&g_48[4],&g_48[1]},{&g_48[1],(void*)0,&g_48[1]},{&g_48[3],&g_48[5],&g_48[0]},{(void*)0,(void*)0,(void*)0},{&g_48[1],&g_48[7],&g_48[0]},{&g_48[3],&g_48[1],&g_48[1]}},{{&g_48[4],(void*)0,&g_48[1]},{&g_48[5],&g_48[1],&g_48[5]},{&g_48[1],(void*)0,&g_48[4]},{&g_48[1],&g_48[1],&g_48[3]},{&g_48[0],&g_48[7],&g_48[1]},{(void*)0,(void*)0,(void*)0},{&g_48[0],&g_48[5],&g_48[3]},{&g_48[1],(void*)0,&g_48[1]},{&g_48[1],&g_48[4],&g_48[1]}},{{&g_48[5],&g_48[1],&g_48[1]},{&g_48[4],&g_48[1],&g_48[3]},{&g_48[3],(void*)0,(void*)0},{&g_48[1],&g_48[4],&g_48[1]},{(void*)0,(void*)0,&g_48[3]},{&g_48[3],&g_48[1],&g_48[4]},{&g_48[1],&g_48[1],&g_48[5]},{&g_48[1],&g_48[4],&g_48[1]},{&g_48[1],(void*)0,&g_48[1]}},{{&g_48[3],&g_48[5],&g_48[0]},{(void*)0,(void*)0,(void*)0},{&g_48[1],&g_48[7],&g_48[0]},{&g_48[3],&g_48[1],&g_48[1]},{&g_48[4],(void*)0,&g_48[1]},{&g_48[5],&g_48[1],&g_48[5]},{&g_48[1],(void*)0,&g_48[4]},{(void*)0,&g_48[1],&g_48[1]},{&g_48[1],&g_48[4],&g_48[0]}},{{(void*)0,(void*)0,&g_48[5]},{&g_48[1],(void*)0,&g_48[1]},{(void*)0,&g_48[5],&g_48[6]},{&g_48[1],(void*)0,&g_48[7]},{&g_48[1],(void*)0,&g_48[6]},{&g_48[7],&g_48[4],&g_48[1]},{&g_48[1],&g_48[3],&g_48[5]},{&g_48[0],&g_48[2],&g_48[0]},{&g_48[5],&g_48[3],&g_48[1]}},{{&g_48[1],&g_48[4],&g_48[7]},{&g_48[6],(void*)0,&g_48[1]},{&g_48[7],(void*)0,&g_48[1]},{&g_48[6],&g_48[5],(void*)0},{&g_48[1],(void*)0,&g_48[1]},{&g_48[5],(void*)0,(void*)0},{&g_48[0],&g_48[4],&g_48[1]},{&g_48[1],&g_48[1],(void*)0},{&g_48[7],&g_48[1],&g_48[1]}},{{&g_48[1],&g_48[1],&g_48[1]},{&g_48[1],&g_48[1],&g_48[7]},{(void*)0,&g_48[1],&g_48[1]},{&g_48[1],&g_48[4],&g_48[0]},{(void*)0,(void*)0,&g_48[5]},{&g_48[1],(void*)0,&g_48[1]},{(void*)0,&g_48[5],&g_48[6]},{&g_48[1],(void*)0,&g_48[7]},{&g_48[1],(void*)0,&g_48[6]}},{{&g_48[7],&g_48[4],&g_48[1]},{&g_48[1],&g_48[3],&g_48[5]},{&g_48[0],&g_48[2],&g_48[7]},{(void*)0,(void*)0,&g_48[5]},{&g_48[7],&g_48[1],&g_48[1]},{&g_48[3],&g_48[1],(void*)0},{&g_48[0],&g_48[2],&g_48[1]},{&g_48[3],(void*)0,&g_48[1]},{&g_48[7],&g_48[4],&g_48[4]}}};
    int l_98[10] = {0x56630802L,0x56630802L,(-1L),0x56630802L,0x56630802L,(-1L),0x56630802L,0x56630802L,(-1L),0x56630802L};
    short l_99 = (-1L);
    int i, j, k;
    l_99 = (((g_55 = 0x77L) != (~p_87)) | (l_98[0] = (+l_96)));
    return p_87;
}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_21, "g_21", print_hash_value);
    transparent_crc(g_43, "g_43", print_hash_value);
    transparent_crc(g_47, "g_47", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_48[i], "g_48[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_55, "g_55", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 10; k++)
            {
                transparent_crc(g_66[i][j][k], "g_66[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_129, "g_129", print_hash_value);
    transparent_crc(g_131, "g_131", print_hash_value);
    transparent_crc(g_135, "g_135", print_hash_value);
    transparent_crc(g_138, "g_138", print_hash_value);
    transparent_crc(g_140.f0, "g_140.f0", print_hash_value);
    transparent_crc(g_140.f2, "g_140.f2", print_hash_value);
    transparent_crc(g_153, "g_153", print_hash_value);
    transparent_crc(g_180, "g_180", print_hash_value);
    transparent_crc(g_181, "g_181", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_188[i], "g_188[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_210, "g_210", print_hash_value);
    transparent_crc(g_289, "g_289", print_hash_value);
    transparent_crc(g_353.f0, "g_353.f0", print_hash_value);
    transparent_crc(g_353.f2, "g_353.f2", print_hash_value);
    transparent_crc(g_375, "g_375", print_hash_value);
    transparent_crc(g_403.f0, "g_403.f0", print_hash_value);
    transparent_crc(g_403.f2, "g_403.f2", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_410[i][j][k], "g_410[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_542, "g_542", print_hash_value);
    transparent_crc(g_602.f0, "g_602.f0", print_hash_value);
    transparent_crc(g_602.f2, "g_602.f2", print_hash_value);
    transparent_crc(g_621, "g_621", print_hash_value);
    transparent_crc(g_624.f0, "g_624.f0", print_hash_value);
    transparent_crc(g_624.f2, "g_624.f2", print_hash_value);
    transparent_crc(g_673, "g_673", print_hash_value);
    transparent_crc(g_728.f0, "g_728.f0", print_hash_value);
    transparent_crc(g_728.f2, "g_728.f2", print_hash_value);
    transparent_crc(g_730.f0, "g_730.f0", print_hash_value);
    transparent_crc(g_730.f2, "g_730.f2", print_hash_value);
    transparent_crc(g_846.f0, "g_846.f0", print_hash_value);
    transparent_crc(g_846.f2, "g_846.f2", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_905[i][j][k], "g_905[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_908, "g_908", print_hash_value);
    transparent_crc(g_909, "g_909", print_hash_value);
    transparent_crc(g_960, "g_960", print_hash_value);
    transparent_crc(g_1027.f0, "g_1027.f0", print_hash_value);
    transparent_crc(g_1027.f2, "g_1027.f2", print_hash_value);
    transparent_crc(g_1079.f0, "g_1079.f0", print_hash_value);
    transparent_crc(g_1079.f2, "g_1079.f2", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_1094[i][j][k], "g_1094[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_1138, "g_1138", print_hash_value);
    transparent_crc(g_1175.f0, "g_1175.f0", print_hash_value);
    transparent_crc(g_1175.f2, "g_1175.f2", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
