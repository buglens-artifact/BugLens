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




static long long
(safe_unary_minus_func_int64_t_s)(long long si )
{
 
  return


    (si==(-(9223372036854775807LL)-1)) ?
    ((si)) :


    -si;
}

static long long
(safe_add_func_int64_t_s_s)(long long si1, long long si2 )
{
 
  return


    (((si1>0) && (si2>0) && (si1 > ((9223372036854775807LL)-si2))) || ((si1<0) && (si2<0) && (si1 < ((-(9223372036854775807LL)-1)-si2)))) ?
    ((si1)) :


    (si1 + si2);
}

static long long
(safe_sub_func_int64_t_s_s)(long long si1, long long si2 )
{
 
  return


    (((si1^si2) & (((si1 ^ ((si1^si2) & (~(9223372036854775807LL))))-si2)^si2)) < 0) ?
    ((si1)) :


    (si1 - si2);
}

static long long
(safe_mul_func_int64_t_s_s)(long long si1, long long si2 )
{
 
  return


    (((si1 > 0) && (si2 > 0) && (si1 > ((9223372036854775807LL) / si2))) || ((si1 > 0) && (si2 <= 0) && (si2 < ((-(9223372036854775807LL)-1) / si1))) || ((si1 <= 0) && (si2 > 0) && (si1 < ((-(9223372036854775807LL)-1) / si2))) || ((si1 <= 0) && (si2 <= 0) && (si1 != 0) && (si2 < ((9223372036854775807LL) / si1)))) ?
    ((si1)) :


    si1 * si2;
}

static long long
(safe_mod_func_int64_t_s_s)(long long si1, long long si2 )
{
 
  return

    ((si2 == 0) || ((si1 == (-(9223372036854775807LL)-1)) && (si2 == (-1)))) ?
    ((si1)) :

    (si1 % si2);
}

static long long
(safe_div_func_int64_t_s_s)(long long si1, long long si2 )
{
 
  return

    ((si2 == 0) || ((si1 == (-(9223372036854775807LL)-1)) && (si2 == (-1)))) ?
    ((si1)) :

    (si1 / si2);
}

static long long
(safe_lshift_func_int64_t_s_s)(long long left, int right )
{
 
  return

    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((9223372036854775807LL) >> ((int)right)))) ?
    ((left)) :

    (left << ((int)right));
}

static long long
(safe_lshift_func_int64_t_s_u)(long long left, unsigned int right )
{
 
  return

    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((9223372036854775807LL) >> ((unsigned int)right)))) ?
    ((left)) :

    (left << ((unsigned int)right));
}

static long long
(safe_rshift_func_int64_t_s_s)(long long left, int right )
{
 
  return

    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :

    (left >> ((int)right));
}

static long long
(safe_rshift_func_int64_t_s_u)(long long left, unsigned int right )
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




static unsigned long long
(safe_unary_minus_func_uint64_t_u)(unsigned long long ui )
{
 
  return -ui;
}

static unsigned long long
(safe_add_func_uint64_t_u_u)(unsigned long long ui1, unsigned long long ui2 )
{
 
  return ui1 + ui2;
}

static unsigned long long
(safe_sub_func_uint64_t_u_u)(unsigned long long ui1, unsigned long long ui2 )
{
 
  return ui1 - ui2;
}

static unsigned long long
(safe_mul_func_uint64_t_u_u)(unsigned long long ui1, unsigned long long ui2 )
{
 
  return ((unsigned long long int)ui1) * ((unsigned long long int)ui2);
}

static unsigned long long
(safe_mod_func_uint64_t_u_u)(unsigned long long ui1, unsigned long long ui2 )
{
 
  return

    (ui2 == 0) ?
    ((ui1)) :

    (ui1 % ui2);
}

static unsigned long long
(safe_div_func_uint64_t_u_u)(unsigned long long ui1, unsigned long long ui2 )
{
 
  return

    (ui2 == 0) ?
    ((ui1)) :

    (ui1 / ui2);
}

static unsigned long long
(safe_lshift_func_uint64_t_u_s)(unsigned long long left, int right )
{
 
  return

    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((18446744073709551615ULL) >> ((int)right)))) ?
    ((left)) :

    (left << ((int)right));
}

static unsigned long long
(safe_lshift_func_uint64_t_u_u)(unsigned long long left, unsigned int right )
{
 
  return

    ((((unsigned int)right) >= 32) || (left > ((18446744073709551615ULL) >> ((unsigned int)right)))) ?
    ((left)) :

    (left << ((unsigned int)right));
}

static unsigned long long
(safe_rshift_func_uint64_t_u_s)(unsigned long long left, int right )
{
 
  return

    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :

    (left >> ((int)right));
}

static unsigned long long
(safe_rshift_func_uint64_t_u_u)(unsigned long long left, unsigned int right )
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



static unsigned g_4 = 0x2667A876L;
static short g_34 = 0x1362L;
static int g_54[8] = {0x377963F6L,0x377963F6L,0x377963F6L,0x377963F6L,0x377963F6L,0x377963F6L,0x377963F6L,0x377963F6L};
static int *g_53[8][4] = {{&g_54[3],&g_54[3],&g_54[3],&g_54[3]},{&g_54[3],&g_54[3],&g_54[3],&g_54[3]},{&g_54[3],&g_54[3],&g_54[3],&g_54[3]},{&g_54[3],&g_54[3],&g_54[3],&g_54[3]},{&g_54[3],&g_54[3],&g_54[3],&g_54[3]},{&g_54[3],&g_54[3],&g_54[3],&g_54[3]},{&g_54[3],&g_54[3],&g_54[3],&g_54[3]},{&g_54[3],&g_54[3],&g_54[3],&g_54[3]}};
static short g_56 = 0xE522L;
static char g_62 = 1L;
static unsigned char g_64 = 0x87L;
static char g_98 = (-7L);
static char *g_97 = &g_98;
static unsigned g_133 = 0x40CD912EL;
static short g_141[1][1][5] = {{{0x9FB2L,0x9FB2L,0x9FB2L,0x9FB2L,0x9FB2L}}};
static unsigned short g_161 = 65534UL;
static unsigned char g_176 = 1UL;
static volatile int g_177[6][1] = {{0x05D55F32L},{0x05D55F32L},{0x05D55F32L},{0xD5446B8AL},{0x05D55F32L},{0x05D55F32L}};
static unsigned g_211[6] = {0x8D4ABBEEL,0x6DF66AD1L,0x8D4ABBEEL,0x8D4ABBEEL,0x6DF66AD1L,0x8D4ABBEEL};
static char **g_237[3] = {&g_97,&g_97,&g_97};
static char ***g_236 = &g_237[0];
static short *g_246[1] = {(void*)0};
static unsigned g_253 = 1UL;
static int *g_300 = &g_54[3];
static unsigned char *g_315[8][4] = {{&g_64,(void*)0,&g_64,&g_64},{&g_64,&g_64,&g_64,(void*)0},{&g_64,(void*)0,&g_64,&g_64},{&g_64,&g_64,&g_64,(void*)0},{&g_64,(void*)0,&g_64,&g_64},{&g_64,&g_64,&g_64,(void*)0},{&g_64,(void*)0,&g_64,&g_64},{&g_64,&g_64,&g_64,(void*)0}};
static unsigned char **g_314 = &g_315[6][1];
static char g_318 = 0xFDL;
static volatile int *g_406 = &g_177[4][0];
static volatile int g_465 = 0L;
static unsigned short g_523 = 0UL;
static volatile unsigned char g_619[9] = {255UL,255UL,255UL,255UL,255UL,255UL,255UL,255UL,255UL};
static volatile unsigned char *g_618 = &g_619[2];
static volatile unsigned char **g_617 = &g_618;
static unsigned char ***g_634 = &g_314;
static unsigned char ****g_633 = &g_634;
static unsigned char *****g_632[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
static char g_674[5] = {0x51L,0x51L,0x51L,0x51L,0x51L};
static int **g_707 = &g_300;
static int ***g_706 = &g_707;
static char g_797 = 0L;
static int g_799 = 8L;
static int g_813[4][10] = {{0x634B1F13L,0x634B1F13L,0xC2DE9E34L,0x634B1F13L,0x634B1F13L,0xC2DE9E34L,0x634B1F13L,0x634B1F13L,0xC2DE9E34L,0x634B1F13L},{0x634B1F13L,0x5547D62AL,0x5547D62AL,0x634B1F13L,0x5547D62AL,0x5547D62AL,0x634B1F13L,0x5547D62AL,0x5547D62AL,0x634B1F13L},{0x5547D62AL,0x634B1F13L,0x5547D62AL,0x5547D62AL,0x634B1F13L,0x5547D62AL,0x5547D62AL,0x634B1F13L,0x5547D62AL,0x5547D62AL},{0x634B1F13L,0x634B1F13L,0xC2DE9E34L,0x634B1F13L,0x634B1F13L,0xC2DE9E34L,0x634B1F13L,0x634B1F13L,0xC2DE9E34L,0x634B1F13L}};
static volatile int g_824 = (-2L);
static unsigned short *g_883 = &g_161;
static unsigned short **g_882 = &g_883;
static unsigned char ******g_918[8] = {&g_632[0],&g_632[0],&g_632[0],&g_632[0],&g_632[0],&g_632[0],&g_632[0],&g_632[0]};
static unsigned char *******g_917 = &g_918[2];



static unsigned func_1(void);
static int * func_2(char p_3);
static int func_5(int p_6);
static unsigned short func_19(unsigned short p_20, char p_21, unsigned p_22, unsigned char p_23, int p_24);
static int func_39(short * p_40, int p_41, int * p_42);
static short * func_43(int p_44, char p_45);
static int * func_46(unsigned char p_47, short * p_48, unsigned char p_49, int * p_50);
static int * func_66(unsigned char * p_67, char p_68, char p_69, short * p_70, unsigned short p_71);
static unsigned short func_74(int * p_75, unsigned short p_76, short * p_77, unsigned short p_78, int p_79);
static unsigned short func_85(int p_86);
static unsigned func_1(void)
{
    int **l_1149 = (void*)0;
    g_53[4][2] = func_2(g_4);


    ;






    ;
    return g_177[4][0];
}







static int * func_2(char p_3)
{
    unsigned l_9 = 0x4543BEB7L;
    unsigned char l_14 = 2UL;
    short *l_33 = &g_34;
    char *l_796 = &g_797;
    int *l_798 = &g_799;
    int *l_1119 = &g_54[1];
    char ***l_1139 = &g_237[0];
    if (((*l_798) = func_5((safe_rshift_func_int8_t_s_s(l_9, (safe_mod_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u(l_14, (((safe_add_func_int16_t_s_s(0x15AAL, (safe_sub_func_uint16_t_u_u(func_19((safe_mod_func_uint32_t_u_u((safe_mod_func_int8_t_s_s((safe_lshift_func_int8_t_s_s(((((*l_33) = (safe_rshift_func_uint16_t_u_s(g_4, 14))) | ((safe_rshift_func_uint16_t_u_u(l_14, 3)) || ((safe_add_func_int32_t_s_s(func_39(func_43(g_4, g_4), ((((*l_796) = (0x5998D6ABL & 0x292416A1L)) >= 0L) | 3UL), l_798), p_3)) != 4294967295UL))) > p_3), 1)), l_14)), 0xA03A404AL)), l_9, p_3, l_9, g_813[2][4]), 0x2189L)))) || g_34) && 0xF4DFFCEAL))), p_3)))))))
    {
        unsigned l_1097 = 0x3A272228L;
        unsigned char *l_1104 = (void*)0;
        int l_1120[7];
        int i;
        for (i = 0; i < 7; i++)
            l_1120[i] = 0L;
        (*l_798) = 8L;
        if ((safe_add_func_int16_t_s_s(func_85(p_3), (0x52667B5AL & ((*l_798) = l_1097)))))
        {
            unsigned l_1102 = 0x7FA6DCE1L;
            int l_1103[8];
            int **l_1105 = &g_53[4][3];
            int *l_1106 = &g_54[3];
            int **l_1107 = &g_53[4][3];
            int **l_1108 = &g_53[4][3];
            int **l_1109 = &g_53[4][3];
            int **l_1110 = &g_53[4][3];
            int **l_1111 = &g_53[2][2];
            int **l_1112 = &g_53[4][3];
            int **l_1113 = (void*)0;
            int **l_1114 = &g_53[4][3];
            int **l_1115 = &g_53[1][0];
            int **l_1116 = &l_798;
            int i;
            for (i = 0; i < 8; i++)
                l_1103[i] = 0L;
            (*g_406) = (((safe_sub_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u(l_1102, (*g_883))), l_1103[2])) | (l_1104 == &l_14)) < l_1102);
            (**g_706) = (void*)0;

            ;
            (*l_1108) = l_1119;
        }
        else
        {
            return l_1119;


        }

        ;
        l_1120[2] = p_3;
    }
    else
    {
        int *l_1121 = &g_799;
        return l_1121;


    }


    ;



    ;


    ;
    for (l_14 = (-24); (l_14 >= 29); l_14++)
    {
        unsigned short l_1126 = 65535UL;
        int l_1145 = 0xDE03C99BL;
        (*g_406) = ((safe_sub_func_uint8_t_u_u(p_3, l_1126)) & (safe_rshift_func_int16_t_s_s(((*l_33) = l_1126), p_3)));
        (*l_798) = ((l_1145 = (safe_add_func_int32_t_s_s(p_3, (safe_mod_func_uint16_t_u_u(4UL, ((*l_33) = (safe_lshift_func_uint16_t_u_u((safe_add_func_uint8_t_u_u((**g_617), ((safe_sub_func_int32_t_s_s((&g_237[0] != l_1139), (safe_rshift_func_uint8_t_u_u(((*l_1119) = p_3), l_1126)))) && (((safe_unary_minus_func_int8_t_s((((((0x73L <= (safe_lshift_func_uint8_t_u_u((((*l_1119) < p_3) | (*l_1119)), l_1126))) ^ (*l_798)) ^ 0x9E02E54BL) | l_1126) && 8UL))) & l_1126) | 4UL)))), p_3)))))))) || p_3);
        for (g_797 = 0; (g_797 <= 2); g_797 += 1)
        {
            return (**g_706);


        }
    }
    for (g_98 = 26; (g_98 >= 29); g_98++)
    {
        int *l_1148 = &g_799;
        (**g_706) = (**g_706);
        return l_1148;


    }
    return (*g_707);


}







static int func_5(int p_6)
{
    short *l_1083[8] = {&g_34,&g_34,&g_34,&g_34,&g_34,&g_34,&g_34,&g_34};
    int l_1084 = 0xB09C935FL;
    int l_1086 = 1L;
    unsigned *l_1089 = &g_211[1];
    int *l_1092[6] = {&l_1084,(void*)0,&l_1084,&l_1084,(void*)0,&l_1084};
    short **l_1094 = &l_1083[6];
    short ***l_1093 = &l_1094;
    int i;
    (*g_707) = &l_1086;

    ;
    if ((safe_mod_func_uint32_t_u_u(p_6, (0x96L && 0x5FL))))
    {
        (**g_706) = (**g_706);
        (*g_406) = (-1L);
        l_1092[1] = (**g_706);


    }
    else
    {
        return p_6;


    }


    (*l_1093) = &g_246[0];

    ;
    return p_6;


}







static unsigned short func_19(unsigned short p_20, char p_21, unsigned p_22, unsigned char p_23, int p_24)
{
    int *l_1072 = &g_799;
    short *l_1073[3];
    short **l_1074[7] = {&l_1073[1],&l_1073[1],&l_1073[1],&l_1073[1],&l_1073[1],&l_1073[1],&l_1073[1]};
    unsigned short l_1075 = 0xFBF5L;
    int *l_1076[10][1][4] = {{{&g_813[2][5],&g_813[2][5],&g_813[2][2],&g_813[2][5]}},{{&g_813[2][5],&g_813[0][9],&g_813[0][9],&g_813[2][5]}},{{&g_813[0][9],&g_813[2][5],&g_813[0][9],&g_813[0][9]}},{{&g_813[2][5],&g_813[2][5],&g_813[2][2],&g_813[2][5]}},{{&g_813[2][5],&g_813[0][9],&g_813[0][9],&g_813[2][5]}},{{&g_813[0][9],&g_813[2][5],&g_813[0][9],&g_813[0][9]}},{{&g_813[2][5],&g_813[2][5],&g_813[2][2],&g_813[2][5]}},{{&g_813[2][5],&g_813[0][9],&g_813[0][9],&g_813[2][5]}},{{&g_813[0][9],&g_813[2][5],&g_813[0][9],&g_813[0][9]}},{{&g_813[2][5],&g_813[2][5],&g_813[2][2],&g_813[2][5]}}};
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_1073[i] = &g_141[0][0][2];
    (*l_1072) = (*l_1072);
    (*l_1072) = ((*g_97) != 1UL);
    for (g_161 = 0; (g_161 <= 5); g_161 += 1)
    {
        int i;
        if (g_54[(g_161 + 2)])
        {
            unsigned l_1077 = 18446744073709551610UL;
            return l_1077;
        }
        else
        {
            if (p_23)
                break;
        }
    }
    for (p_23 = 0; (p_23 <= 6); p_23 += 1)
    {
        unsigned l_1078 = 7UL;
        return l_1078;
    }
    return p_22;
}







static int func_39(short * p_40, int p_41, int * p_42)
{
    char **l_800 = &g_97;
    int l_801 = (-10L);
    short l_802[8] = {0xE4F6L,(-1L),(-1L),0xE4F6L,(-1L),(-1L),0xE4F6L,(-1L)};
    unsigned char ***l_815[2][8] = {{&g_314,&g_314,&g_314,&g_314,&g_314,&g_314,&g_314,&g_314},{&g_314,&g_314,&g_314,&g_314,&g_314,&g_314,&g_314,&g_314}};
    int l_848[4][7] = {{0xFB43B57AL,(-1L),(-1L),0xFB43B57AL,(-1L),(-1L),0xFB43B57AL},{8L,0x47154804L,8L,8L,0x47154804L,8L,8L},{0xFB43B57AL,0xFB43B57AL,(-1L),0xFB43B57AL,0xFB43B57AL,(-1L),0xFB43B57AL},{0x47154804L,8L,8L,0x47154804L,8L,8L,0x47154804L}};
    int l_849 = 0x6F71EED5L;
    int ****l_954 = &g_706;
    unsigned l_965 = 0x115CC9F2L;
    char l_983 = 1L;
    int l_984[2][5] = {{0x01D2A166L,0L,0x01D2A166L,0x0F5D90E0L,0x0F5D90E0L},{0x01D2A166L,0L,0x01D2A166L,0x0F5D90E0L,0x0F5D90E0L}};
    unsigned char *l_998 = (void*)0;
    short **l_1025 = &g_246[0];
    unsigned char *l_1056 = &g_64;
    int i, j;
    l_800 = &g_97;
    l_802[5] = l_801;
    if ((*g_406))
    {
        unsigned char ***l_814 = &g_314;
        int l_827 = 0L;
        char ****l_871[1][10][4] = {{{&g_236,&g_236,&g_236,&g_236},{&g_236,&g_236,&g_236,&g_236},{&g_236,&g_236,&g_236,&g_236},{&g_236,&g_236,&g_236,&g_236},{&g_236,&g_236,&g_236,&g_236},{&g_236,&g_236,&g_236,&g_236},{&g_236,&g_236,&g_236,&g_236},{&g_236,&g_236,&g_236,&g_236},{&g_236,&g_236,&g_236,&g_236},{&g_236,&g_236,&g_236,&g_236}}};
        unsigned char l_907[3][1][7] = {{{9UL,9UL,9UL,9UL,9UL,9UL,9UL}},{{1UL,1UL,1UL,1UL,1UL,1UL,1UL}},{{9UL,9UL,9UL,9UL,9UL,9UL,9UL}}};
        short *l_930 = &g_141[0][0][4];
        unsigned char *l_936[7][4] = {{&g_176,&l_907[0][0][6],&l_907[0][0][6],&g_176},{&l_907[0][0][6],&g_176,&l_907[0][0][6],&l_907[0][0][6]},{&g_176,&g_176,(void*)0,&g_176},{&g_176,&l_907[0][0][6],&l_907[0][0][6],&g_176},{&l_907[0][0][6],&g_176,&l_907[0][0][6],&l_907[0][0][6]},{&g_176,&g_176,(void*)0,&g_176},{&g_176,&l_907[0][0][6],&l_907[0][0][6],&g_176}};
        unsigned char *******l_949 = &g_918[2];
        int *l_966 = &g_54[1];
        short l_993 = 0x8633L;
        unsigned char l_1060 = 0UL;
        int l_1061 = (-1L);
        unsigned char ****l_1064[2][2][4] = {{{&g_634,&g_634,&g_634,&g_634},{&g_634,&g_634,&g_634,&g_634}},{{&g_634,&g_634,&g_634,&g_634},{&g_634,&g_634,&g_634,&g_634}}};
        int i, j, k;
        if ((l_814 == l_815[0][2]))
        {
            int l_820 = 0x5B9AEA98L;
            char ****l_831 = &g_236;
            unsigned char ******l_898[4];
            int *l_911 = &g_54[3];
            unsigned *l_933 = &g_253;
            int i;
            for (i = 0; i < 4; i++)
                l_898[i] = &g_632[3];
            for (g_56 = 11; (g_56 <= (-28)); g_56 = safe_sub_func_int16_t_s_s(g_56, 3))
            {
                unsigned char *l_832 = &g_64;
                unsigned char *l_833 = &g_64;
                short *l_852 = &g_56;
                char *****l_872 = &l_831;
                unsigned short *l_881 = &g_161;
                unsigned short **l_880 = &l_881;
                int l_884 = (-3L);
                int l_909[9][6] = {{0x6D1DCE22L,3L,0x1E7F80F5L,0xAC921150L,0xAC921150L,0x1E7F80F5L},{0xB29B1E63L,0xB29B1E63L,7L,(-1L),0xAC921150L,0x6FF6FA42L},{0xAC921150L,3L,0xA8FB2591L,(-1L),3L,7L},{0xB29B1E63L,0xAC921150L,0xA8FB2591L,0xAC921150L,0xB29B1E63L,0x6FF6FA42L},{0x6D1DCE22L,0xAC921150L,7L,0x6D1DCE22L,3L,0x1E7F80F5L},{0x6D1DCE22L,3L,0x1E7F80F5L,0xAC921150L,0xAC921150L,0x1E7F80F5L},{0xB29B1E63L,0xB29B1E63L,7L,0x3E8223DCL,9L,3L},{9L,0x9B117977L,0x6D1DCE22L,0x3E8223DCL,0x9B117977L,0xB29B1E63L},{1L,9L,0x6D1DCE22L,9L,1L,3L}};
                unsigned short l_921 = 1UL;
                int i, j;
                for (g_318 = 8; (g_318 >= (-5)); g_318 = safe_sub_func_int16_t_s_s(g_318, 1))
                {
                    int *l_821 = &g_54[6];
                    unsigned char *l_823 = &g_176;
                    unsigned char *l_850 = &g_64;
                    if (l_820)
                    {
                        (*g_406) = (*p_42);
                        (**g_706) = p_42;

                        ;
                        (*g_707) = &l_801;

                        ;
                        (**g_706) = (*g_707);
                    }
                    else
                    {
                        (**g_706) = (**g_706);
                        (*p_42) = (*g_406);
                        return (*p_42);
                    }

                    ;
                    if ((*p_42))
                    {
                        (*g_707) = p_42;

                        ;
                    }
                    else
                    {
                        unsigned char *l_822 = &g_64;
                        int l_830 = 0x888453BAL;
                        (**g_706) = l_821;

                        ;
                        (**g_706) = func_66((l_823 = l_822), (p_41 >= (g_824 ^ ((func_85((***g_706)) ^ (0xAC1EA952L <= 1UL)) <= ((safe_add_func_uint16_t_u_u(l_827, (safe_lshift_func_uint8_t_u_s(l_827, l_801)))) & p_41)))), l_830, p_40, l_820);

                        ;
                        return (*g_406);
                    }

                    ;
                    for (p_41 = 3; (p_41 >= 0); p_41 -= 1)
                    {
                        short *l_846 = &l_802[7];
                        short *l_847[4][2] = {{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}};
                        char *l_851 = &g_674[3];
                        int i, j;
                        (*p_42) = ((void*)0 != l_831);
                    }
                    for (g_797 = 0; (g_797 <= 3); g_797 += 1)
                    {
                        unsigned char ******l_857 = (void*)0;
                        unsigned char ******l_858 = &g_632[4];
                        int l_869 = 0xC822BF3CL;
                        unsigned short *l_870 = &g_161;
                        (**g_706) = (**g_706);
                        (**g_707) = (safe_mod_func_int8_t_s_s((safe_sub_func_uint32_t_u_u((l_827 || (((*l_858) = &g_633) == &g_633)), (safe_add_func_uint32_t_u_u(g_674[3], (*p_42))))), ((*l_833) = (((*p_40) = (safe_rshift_func_uint8_t_u_s((safe_rshift_func_int16_t_s_u((safe_lshift_func_uint16_t_u_u(65535UL, 11)), 1)), ((safe_sub_func_uint16_t_u_u(((*l_870) = l_869), ((void*)0 != l_850))) && g_813[2][4])))) || 0UL))));
                    }
                }
            }

            ;
        }
        else
        {
            short l_962 = (-1L);
            unsigned char ***l_972 = &g_314;
            int l_985 = 3L;
            int *l_986 = (void*)0;
            unsigned l_987 = 0x853AA3BDL;
            int l_988 = 0x59C2F81EL;
            int l_996 = 0x3FCE692CL;
            (*p_42) = ((safe_lshift_func_uint8_t_u_s(func_85((((0UL > ((safe_rshift_func_int16_t_s_u((safe_rshift_func_int8_t_s_s(0x66L, 7)), func_85(l_962))) < (safe_lshift_func_int8_t_s_s(0xC6L, p_41)))) > (l_962 || ((((0xDB79L ^ ((*g_883) = (*g_883))) > l_965) ^ p_41) | 1L))) | (-3L))), l_962)) >= 0x272AA967L);
            if (l_962)
            {
                unsigned l_970 = 0xB00B7383L;
                unsigned char ***l_974 = &g_314;
                if (l_907[0][0][5])
                {
                    int *l_975 = &g_54[3];
                    l_966 = (void*)0;

                    ;
                    (**g_706) = (void*)0;
                    for (g_176 = 0; (g_176 != 14); ++g_176)
                    {
                        unsigned char *l_969 = &g_64;
                        int l_971 = 1L;
                        unsigned char ***l_973 = &g_314;
                        short *l_978 = &l_802[5];
                        l_975 = func_66(l_969, l_970, (8L && (l_971 = p_41)), &l_802[4], (0xFFL | (l_972 != (l_974 = l_973))));
                        (*g_406) = (l_984[0][2] = (((*g_883) = l_971) || ((safe_rshift_func_uint8_t_u_s(func_85((*p_42)), 7)) >= (p_41 <= (((!((*l_978) = p_41)) ^ l_970) ^ ((*p_42) && ((safe_sub_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u(0x9EL, 4)), l_971)) <= l_983)))))));
                        return l_985;
                    }
                }
                else
                {
                    l_986 = ((**g_706) = l_986);
                    (*g_707) = (void*)0;
                    (*p_42) = (l_988 = l_987);
                }

                ;
                (*p_42) = (((*g_706) = (*g_706)) != (void*)0);
                for (g_161 = 0; (g_161 >= 53); g_161++)
                {
                    return (*p_42);
                }
            }
            else
            {
                int *l_991 = &l_988;
                short *l_992[3];
                int *l_997 = &l_827;
                int i;
                for (i = 0; i < 3; i++)
                    l_992[i] = &g_56;
                (*p_42) = (0x043CDA2CL != g_813[0][1]);
                if ((p_41 >= ((safe_add_func_int16_t_s_s((0x2DL <= (-9L)), (*l_966))) != ((*l_997) = (l_996 = ((*l_991) = (((*p_42) = (*p_42)) ^ g_54[0])))))))
                {
                    unsigned short l_1007 = 0x8E01L;
                    (*g_707) = func_66(l_998, (safe_rshift_func_int16_t_s_s((((&g_706 == &g_706) || ((p_41 < (0x1B516544L && (g_211[5] = (safe_sub_func_int8_t_s_s(p_41, (safe_lshift_func_int16_t_s_s(7L, (*p_40)))))))) ^ (**g_882))) != 0x0CL), (*p_40))), p_41, &g_56, (*g_883));

                    ;
                    for (g_253 = 0; (g_253 <= 14); ++g_253)
                    {
                        (**g_706) = (void*)0;

                        ;
                    }

                    ;
                }
                else
                {
                    return (*p_42);
                }

                ;
                (*l_966) = ((*p_42) = func_85((*p_42)));
                if ((safe_unary_minus_func_uint8_t_u((*l_991))))
                {
                    if (((*l_966) = (*l_997)))
                    {
                        (***l_954) = p_42;

                        ;
                    }
                    else
                    {
                        unsigned l_1017 = 18446744073709551612UL;
                        int **l_1018 = &l_966;
                        (*g_707) = p_42;

                        ;
                        (*l_1018) = ((*g_707) = (void*)0);

                        ;
                        ;
                    }

                    ;
                    ;
                }
                else
                {
                    (*g_707) = (*g_707);
                }

                ;
                ;
            }

            ;
            ;
        }

        ;
        ;
        for (g_797 = 0; (g_797 >= 29); g_797++)
        {
            int l_1043[6][4][5] = {{{0xFD446D4AL,1L,0L,0L,1L},{3L,0x1B4E5D94L,(-1L),0x05387877L,0xEE70A9D4L},{0xFD446D4AL,0x3537F219L,0L,0xBC77BDFAL,1L},{(-1L),0x1B4E5D94L,0xB0A4942DL,0x05387877L,1L}},{{0xFD446D4AL,1L,0L,0L,1L},{3L,0x1B4E5D94L,(-1L),0x05387877L,0xEE70A9D4L},{0xFD446D4AL,0x3537F219L,0L,0xBC77BDFAL,1L},{(-1L),0x1B4E5D94L,0xB0A4942DL,0x05387877L,1L}},{{0xFD446D4AL,1L,0L,0L,1L},{3L,0x1B4E5D94L,(-1L),0x05387877L,0xEE70A9D4L},{0xFD446D4AL,0x3537F219L,0L,0xBC77BDFAL,1L},{(-1L),0x1B4E5D94L,0xB0A4942DL,0x05387877L,1L}},{{0xFD446D4AL,1L,0L,0L,1L},{3L,0x1B4E5D94L,(-1L),0x05387877L,0xEE70A9D4L},{0xFD446D4AL,0x3537F219L,0L,0xAE16D071L,0xFD446D4AL},{0xB0A4942DL,(-1L),0x9E87CCB6L,(-1L),(-1L)}},{{0xBC77BDFAL,0xFD446D4AL,0xDD575E12L,0xDD575E12L,0xFD446D4AL},{(-1L),(-1L),(-1L),(-1L),3L},{0xBC77BDFAL,0x55166175L,0xDD575E12L,0xAE16D071L,0xFD446D4AL},{0xB0A4942DL,(-1L),0x9E87CCB6L,(-1L),(-1L)}},{{0xBC77BDFAL,0xFD446D4AL,0xDD575E12L,0xDD575E12L,0xFD446D4AL},{(-1L),(-1L),(-1L),(-1L),3L},{0xBC77BDFAL,0x55166175L,0xDD575E12L,0xAE16D071L,0xFD446D4AL},{0xB0A4942DL,(-1L),0x9E87CCB6L,(-1L),(-1L)}}};
            unsigned char *l_1054 = &l_907[0][0][5];
            int *l_1055[8][1] = {{&g_54[7]},{(void*)0},{(void*)0},{&g_54[7]},{(void*)0},{(void*)0},{&g_54[7]},{(void*)0}};
            unsigned char *****l_1062 = (void*)0;
            unsigned char *****l_1063[5] = {&g_633,&g_633,&g_633,&g_633,&g_633};
            int i, j, k;
            for (g_253 = 25; (g_253 > 35); g_253++)
            {
                int l_1026 = 0x5B1D87D1L;
                unsigned char *l_1027[9][4][4] = {{{&l_907[0][0][6],&l_907[0][0][5],&g_176,&l_907[0][0][5]},{(void*)0,&g_64,&g_64,&l_907[0][0][5]},{&l_907[0][0][5],&l_907[0][0][5],&l_907[0][0][5],&l_907[0][0][5]},{&g_176,(void*)0,&l_907[0][0][5],&l_907[0][0][5]}},{{&g_176,&l_907[0][0][5],&g_64,&l_907[2][0][3]},{&l_907[0][0][5],&g_176,&g_64,&l_907[0][0][5]},{&g_176,&l_907[2][0][3],&l_907[0][0][5],(void*)0},{&g_64,&l_907[0][0][5],&g_64,&g_176}},{{&l_907[0][0][5],&l_907[0][0][6],&l_907[0][0][5],&g_176},{&l_907[0][0][5],&g_64,&g_176,&g_64},{&g_64,(void*)0,&g_64,&g_64},{&l_907[0][0][5],(void*)0,&g_64,&l_907[0][0][5]}},{{&g_64,&l_907[0][0][5],&g_176,&l_907[0][0][5]},{&l_907[0][0][5],&g_176,&g_176,&l_907[1][0][0]},{&g_176,&l_907[1][0][0],&l_907[0][0][5],&l_907[2][0][5]},{(void*)0,&g_64,&l_907[0][0][3],&l_907[0][0][5]}},{{&l_907[0][0][5],&g_176,&l_907[2][0][5],&g_64},{(void*)0,(void*)0,&g_176,&g_176},{&g_64,&g_64,&g_176,&g_64},{&l_907[0][0][5],&g_176,(void*)0,&l_907[0][0][5]}},{{&g_64,&l_907[0][0][5],&l_907[0][0][5],(void*)0},{&l_907[0][0][5],&l_907[0][0][5],(void*)0,&l_907[0][0][5]},{&l_907[0][0][5],&g_176,&l_907[0][0][5],&g_64},{&g_176,&g_64,&g_64,&g_176}},{{&g_64,(void*)0,&l_907[0][0][5],&g_64},{&g_64,&g_176,&l_907[0][0][5],&l_907[0][0][5]},{&g_176,&g_64,&g_176,&l_907[2][0][5]},{&l_907[0][0][5],&l_907[1][0][0],&l_907[0][0][5],&l_907[1][0][0]}},{{(void*)0,&g_176,(void*)0,&l_907[0][0][5]},{&g_176,&l_907[0][0][5],&l_907[2][0][5],&l_907[0][0][5]},{&g_64,(void*)0,(void*)0,&g_64},{&g_64,(void*)0,&l_907[2][0][5],&g_64}},{{&g_176,&g_64,(void*)0,&g_64},{&g_64,&l_907[0][0][5],&g_176,&g_64},{&g_64,&g_176,&g_176,(void*)0},{&g_176,&l_907[0][0][5],(void*)0,&g_176}}};
                int l_1038[8] = {1L,1L,1L,1L,1L,1L,1L,1L};
                int i, j, k;
                for (l_801 = 14; (l_801 > 0); --l_801)
                {
                    unsigned char *****l_1028 = (void*)0;
                    unsigned char *****l_1029 = &g_633;
                    int l_1037 = 0x00673107L;
                    l_1025 = &p_40;

                    ;
                    if (l_1026)
                    {
                        if ((*p_42))
                            break;
                    }
                    else
                    {
                        int l_1032 = 0xFEC0EDD2L;
                        (*g_707) = func_66(l_1027[3][2][2], p_41, ((((**g_917) = l_1028) == (l_1029 = l_1028)) ^ ((safe_lshift_func_int8_t_s_s((p_41 > l_1032), 4)) != (+(((*g_883) = func_85(func_85(((safe_add_func_uint8_t_u_u((l_1026 = ((safe_rshift_func_int16_t_s_s((*p_40), (*p_40))) < (l_1037 | (*p_40)))), l_1038[7])) > 0xCA1EL)))) && 0xD7D1L)))), p_40, p_41);

                        ;
                        ;
                        (***g_706) = (safe_lshift_func_int16_t_s_s((((safe_sub_func_int32_t_s_s((((func_85((*p_42)) | l_1043[1][2][3]) || (safe_lshift_func_int16_t_s_u((safe_lshift_func_uint8_t_u_s((safe_lshift_func_int8_t_s_u(l_1032, (l_1043[1][2][3] = func_85(l_1038[2])))), ((safe_sub_func_uint16_t_u_u(0xD9F2L, l_1037)) || (safe_lshift_func_int16_t_s_u((p_41 > l_1032), (*g_883)))))), (**g_882)))) >= l_1026), l_1032)) && (****l_954)) | 0UL), 11));
                    }

                    ;
                    (**g_706) = func_66(l_1054, (*g_97), (g_141[0][0][1] < (*g_406)), p_40, p_41);

                    ;
                }

                ;
                return l_1043[1][2][3];
            }
            l_1055[3][0] = p_42;


            (**g_706) = func_66((l_1056 = l_1054), (safe_sub_func_uint8_t_u_u(p_41, (safe_unary_minus_func_int16_t_s((*p_40))))), ((((*g_618) | 253UL) < (+((l_848[3][0] = l_1060) && l_1061))) & p_41), &l_993, p_41);

            ;
            ;
            (*g_406) = (((((l_1064[1][1][0] = &l_815[0][5]) != &l_815[1][2]) > p_41) ^ (*p_40)) ^ ((((safe_sub_func_int32_t_s_s((p_41 != ((**g_617) == ((**l_800) = (l_930 != (void*)0)))), g_4)) & p_41) && 4UL) != (-1L)));
        }

        ;
    }
    else
    {
        for (g_133 = 29; (g_133 <= 25); g_133 = safe_sub_func_int8_t_s_s(g_133, 5))
        {
            for (l_983 = 21; (l_983 != 14); --l_983)
            {
                int l_1071[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_1071[i] = 0x33CD3160L;
                return l_1071[2];
            }
        }
    }

    ;

    return (*g_406);
}







static short * func_43(int p_44, char p_45)
{
    short *l_55 = &g_56;
    short *l_58 = (void*)0;
    short **l_57 = &l_58;
    char *l_61 = &g_62;
    unsigned char *l_63[10] = {&g_64,&g_64,&g_64,&g_64,&g_64,&g_64,&g_64,&g_64,&g_64,&g_64};
    int l_65 = (-1L);
    unsigned *l_794[10];
    int *l_795 = (void*)0;
    int i;
    for (i = 0; i < 10; i++)
        l_794[i] = &g_253;
    (**g_706) = func_46((safe_add_func_int32_t_s_s(((255UL == (((void*)0 == g_53[4][3]) < (l_55 != l_55))) < g_54[3]), 0xCB4E3473L)), ((*l_57) = l_55), (l_65 = (safe_rshift_func_uint8_t_u_u((g_64 = (((*l_61) = (&l_55 == &l_55)) > p_44)), 5))), &g_54[7]);


    ;
    ;



    ;


    ;
    (**g_706) = l_795;

    ;
    return &g_141[0][0][0];


}







static int * func_46(unsigned char p_47, short * p_48, unsigned char p_49, int * p_50)
{
    short *l_80 = (void*)0;
    int l_87 = 0x2A30FB9CL;
    int **l_438 = &g_53[4][3];
    unsigned char *l_477 = &g_176;
    int *l_527 = &g_54[2];
    unsigned l_532 = 4UL;
    char ****l_538 = &g_236;
    int l_565 = 0xD8DA9810L;
    unsigned char ***l_566 = (void*)0;
    short *l_724 = (void*)0;
    int *l_793 = &g_54[5];
    (*l_438) = func_66(&g_64, ((0xFE8EL | (safe_lshift_func_int8_t_s_u(0xEDL, 3))) >= ((((*p_48) & (func_74(&g_54[4], p_47, l_80, ((safe_lshift_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u(func_85(l_87), 13)), p_49)) >= g_133), g_133) == g_211[5])) > 8UL) && 0x4AFD26DEL)), p_49, l_80, p_47);


    ;


    ;
    for (g_253 = 0; (g_253 <= 3); g_253 += 1)
    {
        unsigned l_439 = 0xC4AD0809L;
        char l_452 = 0xE8L;
        int l_455 = 1L;
        char l_508 = 0L;
        if ((l_439 <= ((*p_48) = (safe_lshift_func_int8_t_s_u(0x3EL, l_87)))))
        {
            unsigned *l_445 = &g_211[5];
            int l_449 = 0x2EC4304AL;
            int l_453 = 0L;
            short *l_454[8] = {(void*)0,&g_141[0][0][3],(void*)0,&g_141[0][0][3],(void*)0,&g_141[0][0][3],(void*)0,&g_141[0][0][3]};
            short l_492 = (-1L);
            unsigned char **l_530 = (void*)0;
            int i;
            if ((safe_mod_func_uint32_t_u_u(((*l_445) = (safe_unary_minus_func_uint32_t_u(0xE0054F94L))), (safe_unary_minus_func_int32_t_s((safe_rshift_func_int16_t_s_s((l_455 = (l_453 = (((p_47 == ((l_449 = (p_47 > p_49)) | p_49)) < 0xF96A998EL) ^ ((safe_add_func_int16_t_s_s((func_85((*p_50)) < (((*p_48) = l_452) ^ 3UL)), l_453)) != g_4)))), p_49)))))))
            {
                return p_50;


            }
            else
            {
                unsigned char l_497[4];
                int l_501 = 1L;
                int l_502 = 0L;
                int **l_521 = &g_53[4][3];
                int i;
                for (i = 0; i < 4; i++)
                    l_497[i] = 0UL;
                if ((((*l_445) = func_85((*p_50))) || (-10L)))
                {
                    unsigned char *l_468 = (void*)0;
                    int *l_472[10][6][4] = {{{&l_87,&l_455,(void*)0,&g_54[3]},{&g_54[2],&l_87,(void*)0,&l_453},{&l_449,&g_54[3],&g_54[2],&g_54[3]},{&l_87,&l_455,&g_54[0],&g_54[3]},{&l_453,&l_449,&l_87,&l_449},{&l_455,&g_54[1],&l_449,&g_54[1]}},{{&l_449,&g_54[2],&g_54[1],&l_453},{&l_87,&l_455,&l_449,&l_453},{&l_455,&g_54[3],&l_87,&g_54[3]},{&l_449,&l_453,&g_54[2],&g_54[2]},{&l_87,&l_87,&l_87,&l_455},{(void*)0,(void*)0,&l_453,&l_449}},{{&l_87,&l_87,(void*)0,&l_453},{&l_455,&l_87,(void*)0,&l_449},{&g_54[2],&g_54[3],&g_54[3],&l_453},{&g_54[3],(void*)0,&l_455,(void*)0},{&g_54[3],&g_54[0],&l_455,&l_87},{&l_449,&g_54[3],(void*)0,&g_54[0]}},{{&l_87,&l_87,(void*)0,&g_54[3]},{(void*)0,&l_449,&l_455,&l_453},{&g_54[3],&l_455,&l_449,&g_54[3]},{&g_54[3],&g_54[3],&g_54[3],&l_453},{(void*)0,&l_453,&l_453,&g_54[3]},{&g_54[3],&g_54[5],(void*)0,(void*)0}},{{&g_54[3],(void*)0,(void*)0,&l_453},{&l_453,&l_87,&g_54[1],&l_87},{&l_449,&l_455,&l_449,&g_54[3]},{&l_453,(void*)0,&l_449,&g_54[3]},{&l_449,&g_54[3],&l_449,&l_453},{&l_449,&g_54[3],&l_449,&g_54[3]}},{{&l_453,&l_453,&l_449,(void*)0},{&l_449,&l_453,&g_54[1],&l_455},{&l_453,&g_54[3],(void*)0,&g_54[3]},{&g_54[3],&l_449,(void*)0,(void*)0},{&g_54[3],(void*)0,&l_453,&l_87},{(void*)0,&g_54[3],&g_54[3],&g_54[0]}},{{&g_54[3],&l_449,&l_449,(void*)0},{&g_54[3],&l_455,&l_455,&l_455},{&g_54[3],(void*)0,(void*)0,(void*)0},{&l_449,&g_54[1],(void*)0,&g_54[2]},{&l_453,&g_54[3],&l_449,&l_87},{&g_54[1],&l_453,&l_453,&g_54[1]}},{{&g_54[3],&l_87,(void*)0,&l_455},{&g_54[3],&l_453,(void*)0,&l_453},{&g_54[3],&g_54[3],&l_453,&l_453},{(void*)0,&l_453,(void*)0,&l_455},{(void*)0,&l_87,&l_87,&g_54[1]},{&g_54[3],&l_453,&g_54[5],&l_87}},{{&l_453,&g_54[3],&g_54[3],&g_54[2]},{&g_54[3],&g_54[1],&g_54[1],(void*)0},{&g_54[3],(void*)0,&l_453,&l_455},{&l_453,(void*)0,&l_87,&g_54[5]},{&l_87,&l_453,&l_87,&g_54[2]},{&g_54[2],(void*)0,(void*)0,&g_54[3]}},{{(void*)0,&g_54[3],&g_54[5],(void*)0},{&l_87,&l_87,(void*)0,&g_54[1]},{&l_87,(void*)0,(void*)0,(void*)0},{&g_54[3],&l_87,&g_54[3],&g_54[5]},{&g_54[3],&l_449,&l_449,&g_54[0]},{&l_87,(void*)0,&l_449,&l_449}}};
                    int i, j, k;
                    for (g_176 = 0; (g_176 <= 3); g_176 += 1)
                    {
                        int l_464 = 1L;
                        short *l_471 = (void*)0;
                        int i, j;
                        (*l_438) = func_66(g_315[(g_176 + 1)][g_176], p_49, ((((*p_48) < (((*p_50) = l_453) >= ((l_439 != 0xD0L) <= 0L))) && 0x59C1B1CBL) ^ 0UL), l_454[4], g_176);
                        (*p_50) = (safe_mod_func_uint8_t_u_u((0UL & ((-9L) && func_85(l_449))), (safe_add_func_int8_t_s_s((safe_sub_func_int16_t_s_s(((*p_48) = (l_453 = (l_464 && (g_465 || (p_47 & ((void*)0 == &p_48)))))), 0x6FA9L)), p_49))));
                        g_53[6][2] = func_66(l_468, (((safe_rshift_func_int8_t_s_s(((&g_161 == (void*)0) < 65535UL), 5)) && (*g_97)) | (*p_50)), (*g_97), l_471, p_47);
                        l_472[4][5][1] = &l_455;
                    }
                    return &g_54[3];


                }
                else
                {
                    unsigned l_478 = 0UL;
                    int l_500 = 1L;
                    int *l_511 = (void*)0;
                    if ((safe_lshift_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u((*g_97), p_47)), 8)))
                    {
                        unsigned short l_491 = 1UL;
                        (*l_438) = func_66(l_477, (*g_97), l_478, &g_141[0][0][2], (l_478 && ((safe_lshift_func_uint8_t_u_s((safe_add_func_uint32_t_u_u((safe_rshift_func_int8_t_s_s((0x046506FCL > (safe_sub_func_int8_t_s_s((safe_sub_func_int32_t_s_s((0x205F2733L | l_491), (((*g_97) == p_47) ^ l_452))), l_449))), 4)), l_491)), 2)) < 8L)));
                        (*g_406) = (g_253 >= (((func_85(l_452) && (*p_48)) <= l_492) | ((safe_lshift_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u(((l_453 && l_478) <= l_497[3]), g_177[4][0])), l_491)) != g_176)));
                        l_500 = (safe_rshift_func_uint16_t_u_u((0x7C0EL <= l_491), 14));
                    }
                    else
                    {
                        int **l_507 = &g_300;
                        (*g_406) = ((l_502 = (p_49 ^ ((l_501 = (p_48 == p_48)) != 0L))) & func_85((*p_50)));
                        l_500 = (safe_mod_func_int32_t_s_s(((*p_50) || (safe_add_func_int16_t_s_s(l_500, 0xC35EL))), (((p_50 == ((*l_507) = p_50)) || l_502) || p_49)));

                        ;
                        (*p_50) = l_508;
                        (*l_507) = p_50;
                    }
                    for (g_161 = 18; (g_161 >= 9); --g_161)
                    {
                        int l_514[2];
                        int **l_520 = &g_53[7][0];
                        unsigned short *l_522 = &g_523;
                        unsigned short l_524 = 5UL;
                        int i;
                        for (i = 0; i < 2; i++)
                            l_514[i] = 0L;
                        (*l_438) = l_511;
                        (*l_438) = &l_500;
                        (*p_50) = (safe_lshift_func_uint8_t_u_u(func_85(l_514[0]), 6));
                        l_524 = (((safe_lshift_func_int8_t_s_s(p_49, 2)) || (safe_unary_minus_func_int32_t_s((((*p_48) = (safe_sub_func_int16_t_s_s((l_520 != l_521), ((l_449 ^ (func_85(((((func_85((*p_50)) >= p_47) ^ p_49) && ((*l_522) = ((*p_48) || g_177[4][0]))) != (*p_48))) <= 0x9FAFL)) > l_508)))) ^ p_49)))) >= 0x02L);
                    }


                }
                for (g_176 = 0; (g_176 > 23); g_176++)
                {
                    l_527 = ((*l_521) = &g_54[0]);
                    if ((*p_50))
                        break;
                    (*l_521) = &g_54[3];
                }
            }
            (*p_50) = func_85(func_85((safe_rshift_func_int8_t_s_s(((void*)0 == l_530), ((*p_48) || ((*p_48) = l_439))))));
            (*g_406) = 0x74361D8EL;
        }
        else
        {
            (*g_406) = 0L;
        }
        if ((((*l_477) = l_452) | ((void*)0 == l_477)))
        {
            int **l_531 = &g_300;
            volatile int **l_533 = &g_406;
            (*l_531) = ((*l_438) = &l_455);


            ;
            if (l_532)
                continue;


            (*l_533) = &g_177[1][0];

            ;
            if (((g_133 = (~(safe_rshift_func_uint16_t_u_s(g_141[0][0][2], 3)))) >= (*l_527)))
            {
                unsigned l_543 = 1UL;
                int l_544 = (-2L);
                for (p_49 = 2; (p_49 > 60); ++p_49)
                {
                    (**l_533) = (&g_236 != l_538);
                    g_406 = &g_177[0][0];
                    for (l_455 = 9; (l_455 <= 10); ++l_455)
                    {
                        short *l_545 = &g_141[0][0][2];
                        unsigned short *l_546[10] = {&g_161,&g_161,&g_161,&g_161,&g_161,&g_161,&g_161,&g_161,&g_161,&g_161};
                        unsigned short l_547 = 65535UL;
                        unsigned *l_548 = &l_439;
                        int i;
                        (*l_527) = (p_47 <= ((safe_add_func_int16_t_s_s((*p_48), (((*l_545) = (l_544 = l_543)) | 0xA0D9L))) & (((*l_548) = ((((g_523 = (p_49 != p_49)) | 0x2DB0L) > 0x84L) > (((1L >= 0xFFL) & 0x157CL) && l_547))) != 9UL)));
                    }
                }
                for (p_49 = 0; (p_49 <= 2); p_49 += 1)
                {
                    for (l_455 = 3; (l_455 >= 0); l_455 -= 1)
                    {
                        int i, j;
                        (*l_531) = &g_54[6];

                        ;
                        (**l_533) = (-5L);
                        (*l_531) = &g_54[3];
                    }
                    (*l_533) = &g_465;

                    ;
                    if ((*p_50))
                        continue;
                }

                ;
                ;
            }
            else
            {
                char l_551 = 0x79L;
                (**l_533) = (safe_add_func_int32_t_s_s((+((*p_50) = (&g_246[0] == (void*)0))), ((*g_300) = l_551)));
                if ((*g_406))
                    break;


            }

            ;
            ;
        }
        else
        {
            for (g_176 = 0; (g_176 >= 16); g_176 = safe_add_func_int32_t_s_s(g_176, 4))
            {
                int *l_554 = &l_87;
                return p_50;


            }
        }



    }


    ;
    if ((*l_527))
    {
        unsigned l_557 = 0xD2792A16L;
        int l_560[1][3][10] = {{{(-1L),0L,(-1L),0x1659CEBBL,0x1659CEBBL,(-1L),0L,(-1L),0x1659CEBBL,0x1659CEBBL},{(-1L),0L,(-1L),0x1659CEBBL,0x1659CEBBL,(-1L),0L,(-1L),0x1659CEBBL,0x1659CEBBL},{(-1L),0L,(-1L),0x1659CEBBL,0x1659CEBBL,(-1L),0L,(-1L),0x1659CEBBL,0x1659CEBBL}}};
        unsigned short *l_561 = &g_523;
        char *l_562 = &g_318;
        unsigned char ***l_567[1];
        short l_581 = (-4L);
        unsigned char ****l_588 = &l_567[0];
        unsigned char ******l_640 = &g_632[3];
        char ***l_659 = &g_237[1];
        unsigned short l_701 = 65535UL;
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_567[i] = &g_314;
        if (func_85(((+(~((safe_lshift_func_int8_t_s_s((((((*l_561) = (l_557 < (safe_rshift_func_int16_t_s_s(l_560[0][2][5], 12)))) ^ (((void*)0 != &g_161) > ((*l_562) = ((*g_97) = p_47)))) == 65535UL) || (safe_add_func_int32_t_s_s((*p_50), 5UL))), 2)) != (l_565 & 1UL)))) & g_253)))
        {
            unsigned char ****l_568 = &l_566;
            (*g_406) = (func_85((*p_50)) != (((*p_48) = (&g_314 == ((*l_568) = (l_567[0] = l_566)))) != 0x6A94L));


        }
        else
        {
            unsigned l_573 = 18446744073709551606UL;
            int l_574 = (-1L);
            int *l_594 = &g_54[3];
            unsigned char *l_642 = &g_176;
            char ***l_658 = (void*)0;
            short *l_664 = &l_581;
            unsigned char ****l_712 = &l_566;
            (*g_406) = l_560[0][2][5];
            if ((l_574 = ((*p_50) = ((-1L) <= ((((safe_lshift_func_uint16_t_u_u(((safe_mod_func_uint8_t_u_u((l_573 = 0xC1L), p_47)) <= (l_574 ^ l_557)), (safe_lshift_func_uint8_t_u_s((safe_lshift_func_int8_t_s_s((safe_sub_func_uint32_t_u_u(3UL, (*g_406))), l_557)), l_574)))) & p_47) && 0xAA86L) < (*l_527))))))
            {
                unsigned char ****l_586 = &l_566;
                unsigned char *****l_587[3];
                int l_593 = 0xAF9136AEL;
                int i;
                for (i = 0; i < 3; i++)
                    l_587[i] = (void*)0;
                if ((((p_49 | ((*g_97) = (l_557 ^ ((*l_561) = p_47)))) || (safe_sub_func_int32_t_s_s((safe_sub_func_int32_t_s_s((((void*)0 == &g_246[0]) >= ((l_588 = l_586) == (void*)0)), (0x4106L != (((*l_561) = (safe_mod_func_int8_t_s_s((safe_lshift_func_int8_t_s_u((l_573 <= p_49), l_593)), p_49))) != l_573)))), l_574))) | 0xA3C1L))
                {
                    short l_601 = 8L;
                    unsigned char *l_604 = &g_64;
                    int *l_607 = (void*)0;
                    l_594 = ((*l_438) = &l_593);


                    ;
                    if (((((safe_add_func_uint32_t_u_u(((safe_sub_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s((1UL & l_601), (g_62 ^ l_593))), ((safe_rshift_func_uint8_t_u_s((&p_47 != ((*g_314) = l_604)), 6)) || (g_133 ^ (l_601 <= (safe_mod_func_int8_t_s_s(((*p_48) && 1UL), p_47))))))) <= (*p_50)), p_47)) ^ (*p_50)) ^ p_47) & l_601))
                    {
                        (*l_438) = (void*)0;
                        (*l_438) = l_607;
                    }
                    else
                    {
                        int **l_614 = &g_53[4][1];
                        int **l_615 = (void*)0;
                        int **l_616 = &l_527;
                        unsigned char **l_620[4];
                        unsigned char ******l_635 = &l_587[2];
                        unsigned char ******l_636 = &g_632[3];
                        short *l_637 = &l_581;
                        int i;
                        for (i = 0; i < 4; i++)
                            l_620[i] = &l_604;
                        (*p_50) = (safe_rshift_func_int16_t_s_u((safe_sub_func_int8_t_s_s((safe_add_func_uint8_t_u_u((((*l_616) = p_50) != p_50), (g_617 != (g_314 = l_620[2])))), (safe_rshift_func_int16_t_s_u(((safe_rshift_func_uint8_t_u_s(p_49, 6)) | ((*l_561) = (g_62 ^ (safe_unary_minus_func_uint32_t_u(g_619[2]))))), 14)))), 4));

                        ;
                        (*l_594) = ((((safe_sub_func_uint32_t_u_u((p_47 >= 0x41L), g_177[4][0])) > (*p_50)) < 0x1F02L) >= g_141[0][0][4]);
                    }

                    ;
                    return l_607;




                }
                else
                {
                    unsigned char *******l_641 = &l_640;
                    int l_651 = (-1L);
                    short *l_654 = &g_141[0][0][2];
                    (*g_406) = ((*l_594) = (safe_lshift_func_uint16_t_u_u(p_47, 3)));
                    (*l_527) = (l_593 = (&g_632[3] == ((*l_641) = l_640)));
                    (*l_438) = func_66(l_642, l_581, (*g_97), &g_141[0][0][2], (l_651 = (safe_lshift_func_uint8_t_u_s((((!(*p_48)) != (safe_rshift_func_int8_t_s_u((safe_lshift_func_int8_t_s_s((l_560[0][1][0] <= (safe_rshift_func_uint16_t_u_s(((*l_561) = l_651), ((safe_add_func_int16_t_s_s((*p_48), ((*l_654) = (*l_594)))) ^ (-2L))))), 7)), (*l_594)))) <= 0x29L), 4))));
                }

                ;
            }
            else
            {
                char ****l_657 = &g_236;
                unsigned l_662 = 4294967295UL;
                int l_663 = 1L;
                unsigned short l_667 = 0UL;
                unsigned l_682[8] = {4294967288UL,4294967288UL,9UL,4294967288UL,4294967288UL,9UL,4294967288UL,4294967288UL};
                unsigned char ****l_714[6] = {&l_567[0],&g_634,&l_567[0],&l_567[0],&g_634,&l_567[0]};
                int *l_727 = &l_560[0][2][5];
                int i;
                l_594 = func_66(&p_47, (*l_527), ((safe_lshift_func_int16_t_s_u(((l_658 = &g_237[1]) != l_659), (safe_rshift_func_int16_t_s_s((*l_594), (l_663 = (((*l_527) <= (p_49 >= (+l_662))) == (*l_527))))))) | 3L), l_664, (*l_594));

                ;
                (*p_50) = l_557;
                for (l_574 = 12; (l_574 < (-28)); l_574 = safe_sub_func_uint32_t_u_u(l_574, 3))
                {
                    (*l_594) = (l_667 < 0x5389CDA3L);
                    for (l_557 = (-22); (l_557 == 18); l_557++)
                    {
                        return &g_54[3];


                    }
                }
                if (l_560[0][2][5])
                {
                    unsigned char *l_686 = &g_176;
                    unsigned char ***l_687 = &g_314;
                    short *l_688 = (void*)0;
                    int l_691 = 0x862D2EB6L;
                    char l_700 = 1L;
                    int ***l_704 = &l_438;
                    for (l_532 = 26; (l_532 < 47); l_532 = safe_add_func_uint16_t_u_u(l_532, 4))
                    {
                        unsigned *l_675 = (void*)0;
                        unsigned *l_676 = &g_211[5];
                        char **l_677 = (void*)0;
                        char **l_679[2][2] = {{&l_562,&l_562},{&l_562,&l_562}};
                        char ***l_678 = &l_679[0][0];
                        volatile int **l_683[5];
                        int i, j;
                        for (i = 0; i < 5; i++)
                            l_683[i] = &g_406;
                        (*l_438) = func_66(((***g_633) = &p_47), ((safe_mod_func_uint32_t_u_u((1L > 3UL), ((*l_676) = g_674[3]))) < 0xA4C629ECL), (0x6FL != ((((*l_659) = l_677) != ((*l_678) = &g_97)) | (safe_mod_func_uint8_t_u_u(((0x7B50L != p_47) ^ l_662), l_682[5])))), p_48, p_47);
                        g_406 = &g_177[4][0];

                        ;
                        (*p_50) = (*g_406);
                        (*g_406) = (safe_mod_func_int16_t_s_s((*l_594), l_682[5]));
                    }



                    (*l_438) = func_66(l_686, ((*l_588) != l_687), l_581, l_688, ((*p_50) != ((*g_406) <= 0x0EB2EE29L)));
                    if ((((safe_mod_func_uint8_t_u_u((l_691 ^ ((0x246F871AL <= 0xF7903263L) >= p_47)), l_700)) == l_701) == p_49))
                    {
                        int ****l_705 = &l_704;
                        unsigned char *****l_713 = &l_712;
                        short **l_715 = (void*)0;
                        short **l_716 = &l_664;
                        (*l_527) = (1UL && (((*l_562) = (((safe_rshift_func_uint16_t_u_u((((*l_705) = l_704) != g_706), 0)) >= (safe_mod_func_uint32_t_u_u((((*p_48) & func_85((*l_594))) ^ (safe_sub_func_int8_t_s_s(((0x0881C58BL < l_663) & g_56), p_49))), l_682[2]))) > (*g_406))) > 248UL));
                        (*l_438) = func_66(&p_49, l_662, (((*l_713) = l_712) == l_714[1]), (l_80 = ((*l_716) = p_48)), ((*l_561) = (safe_lshift_func_uint16_t_u_s(g_176, 11))));

                        ;
                        ;
                    }
                    else
                    {
                        unsigned char *l_719 = (void*)0;
                        (*l_438) = (void*)0;
                        (**g_706) = func_66(l_719, ((*g_97) = (*l_594)), (safe_rshift_func_uint16_t_u_s(p_49, ((*l_664) = (((safe_sub_func_uint8_t_u_u(((((g_177[4][0] ^ l_662) == (l_663 || l_581)) >= l_701) != p_49), p_49)) < (*p_50)) && 0xF111L)))), p_48, g_253);

                        ;
                    }

                    ;
                    ;
                    (*g_707) = p_50;

                    ;
                }
                else
                {
                    (*l_438) = func_66((**g_634), p_49, p_47, l_724, ((-5L) != (safe_rshift_func_uint16_t_u_u(func_85(l_560[0][0][3]), g_161))));
                    return p_50;


                }

                ;

                ;

                ;
            }

            ;


            ;
            ;
            ;
        }

        ;



        ;
    }
    else
    {
        int l_764 = 0x48725432L;
        unsigned char ****l_767[2][1];
        unsigned char *l_781 = &g_64;
        int i, j;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 1; j++)
                l_767[i][j] = &g_634;
        }
        (*g_707) = p_50;

        ;
        (*g_707) = p_50;
        for (g_176 = 25; (g_176 == 4); g_176 = safe_sub_func_int8_t_s_s(g_176, 1))
        {
            unsigned char l_732 = 246UL;
            short *l_737 = &g_141[0][0][1];
            int l_783 = 0xD035E96FL;
            char **l_787 = &g_97;
            (*g_406) = (safe_add_func_int16_t_s_s((*p_48), (1L <= ((!(((p_47 | func_85(l_732)) == (safe_rshift_func_uint8_t_u_u(p_49, p_49))) & (g_177[4][0] > g_523))) >= 1L))));
            if ((((*l_737) = ((*p_48) = (safe_rshift_func_int8_t_s_u(((*g_97) = l_732), 0)))) || 0L))
            {
                short **l_740 = &g_246[0];
                int l_750[1][2];
                short l_765 = 0x92FEL;
                unsigned char ****l_766 = &g_634;
                int ***l_770 = &l_438;
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 2; j++)
                        l_750[i][j] = 6L;
                }
                p_50 = (*g_707);
                for (g_161 = 0; (g_161 <= 3); g_161 += 1)
                {
                    int i;
                    if (((*p_50) = ((safe_rshift_func_uint16_t_u_u(((void*)0 != l_740), 14)) < ((safe_rshift_func_uint16_t_u_u(g_674[g_161], 6)) || (safe_unary_minus_func_uint8_t_u((safe_lshift_func_uint16_t_u_s(((0x61L < ((g_674[(g_161 + 1)] = 0x5FL) != (p_47 = ((safe_rshift_func_int8_t_s_s((&g_141[0][0][2] == (void*)0), 7)) < func_85((safe_sub_func_uint8_t_u_u(253UL, 8UL))))))) > (*p_48)), (*p_48)))))))))
                    {
                        unsigned *l_751 = &g_211[5];
                        int i, j;
                        g_53[(g_161 + 2)][g_161] = (**g_706);
                        if (l_750[0][1])
                            break;
                        (*g_406) = (((*l_751) = 0xD9ECA17EL) ^ l_750[0][1]);
                    }
                    else
                    {
                        unsigned l_756 = 0xCB6D87A9L;
                        (*g_406) = ((((((safe_rshift_func_int16_t_s_u(1L, (g_98 > p_49))) < ((**g_707) = (safe_sub_func_int16_t_s_s(l_756, ((*p_48) <= (safe_add_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s((g_465 || (safe_unary_minus_func_uint16_t_u((safe_lshift_func_uint8_t_u_u(((g_318 & l_764) ^ 0x7321L), 5))))), l_765)), p_47))))))) != l_750[0][1]) == 6L) != l_750[0][0]) >= p_49);
                        return (**g_706);


                    }
                }
                if ((((l_766 == l_767[0][0]) ^ 0xFCD3L) > (func_85(((safe_rshift_func_int8_t_s_s(((*g_97) = l_765), (&g_707 != l_770))) != (*p_48))) ^ l_764)))
                {
                    int l_782 = (-3L);
                    (**l_770) = p_50;
                    if ((safe_sub_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_s(p_47, l_732)), (safe_lshift_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u((((*p_48) > (func_85(func_85(((*p_50) = l_732))) > ((+p_49) != p_47))) || (g_141[0][0][2] < (*l_527))), (-1L))), g_133)))))
                    {
                        (*l_527) = func_85((*p_50));
                        (**l_770) = (void*)0;
                        (**g_707) = (*p_50);
                        return p_50;


                    }
                    else
                    {
                        (**l_770) = func_66(l_781, l_782, (l_750[0][1] | (**g_617)), &g_141[0][0][0], (l_783 = g_211[2]));
                        (***g_706) = l_783;
                        (*g_300) = (0xD8451DC9L && 0xBE82A2E0L);
                    }
                }
                else
                {
                    unsigned char **l_786 = (void*)0;
                    for (g_64 = 19; (g_64 != 36); g_64 = safe_add_func_uint8_t_u_u(g_64, 3))
                    {
                        (**g_707) = ((**l_766) == l_786);
                    }
                }
            }
            else
            {
                unsigned l_792 = 0xC4A356C3L;
                if (((l_787 = l_787) != (void*)0))
                {
                    return (**g_706);


                }
                else
                {
                    if (((*g_633) != (void*)0))
                    {
                        unsigned short *l_789 = (void*)0;
                        unsigned short **l_788 = &l_789;
                        (***g_706) = (p_48 == ((*l_788) = p_48));

                        ;
                        (*g_707) = p_50;
                        (***g_706) = (safe_rshift_func_uint16_t_u_u(p_47, 10));
                        (*g_707) = (void*)0;

                        ;
                    }
                    else
                    {
                        (*g_406) = ((***g_706) = (**g_707));
                        if ((***g_706))
                            break;
                        (*l_527) = l_792;
                        (*l_438) = ((*g_707) = p_50);
                    }

                    ;
                }

                ;
            }

            ;
            return l_793;


        }
    }

    ;


    (*g_406) = ((*p_50) = func_85((*p_50)));
    return p_50;



}







static int * func_66(unsigned char * p_67, char p_68, char p_69, short * p_70, unsigned short p_71)
{
    unsigned l_432 = 0x02C48C57L;
    int *l_437 = &g_54[3];
    (*g_406) = ((l_432 != ((*l_437) = (safe_lshift_func_int16_t_s_u((safe_rshift_func_int8_t_s_s(((~l_432) || func_85(p_68)), 0)), (g_133 & l_432))))) && (*l_437));
    return &g_54[6];


}







static unsigned short func_74(int * p_75, unsigned short p_76, short * p_77, unsigned short p_78, int p_79)
{
    unsigned l_213 = 0x507D193BL;
    short l_214[2];
    int *l_215 = &g_54[2];
    int *l_290 = (void*)0;
    int l_349[1][5][7] = {{{7L,0xC8147694L,0x5D0FBC60L,0xC8147694L,7L,4L,7L},{0xAA1A6C84L,0x78E13C53L,0x78E13C53L,0xAA1A6C84L,0x78E13C53L,0x78E13C53L,0xAA1A6C84L},{0xA8006184L,0xC8147694L,0xA8006184L,1L,7L,1L,0xA8006184L},{0xAA1A6C84L,0xAA1A6C84L,0xD17ABD9CL,0xAA1A6C84L,0xAA1A6C84L,0xD17ABD9CL,0xAA1A6C84L},{7L,1L,0xA8006184L,0xC8147694L,0xA8006184L,1L,7L}}};
    char l_401 = 0L;
    unsigned l_413 = 4294967287UL;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_214[i] = (-1L);
    if ((*p_75))
    {
        short *l_162 = &g_56;
        char **l_169 = &g_97;
        int l_212 = 0x9039BF07L;
        unsigned char *l_263[7][4] = {{&g_64,(void*)0,&g_176,(void*)0},{(void*)0,&g_64,&g_176,&g_176},{&g_64,&g_64,&g_176,&g_64},{&g_64,(void*)0,&g_64,&g_176},{&g_64,&g_176,&g_176,&g_64},{&g_64,&g_176,&g_64,&g_176},{&g_176,(void*)0,&g_64,&g_64}};
        unsigned *l_284 = &g_133;
        unsigned char l_286 = 0xAEL;
        int **l_303 = (void*)0;
        int ***l_302 = &l_303;
        unsigned short *l_304 = (void*)0;
        unsigned short *l_305 = &g_161;
        unsigned char l_342[6] = {0x0DL,0x0DL,246UL,0x0DL,0x0DL,246UL};
        unsigned l_377 = 0x5CF7ADF2L;
        int i, j;
        for (g_133 = 27; (g_133 != 38); g_133++)
        {
            char **l_145 = &g_97;
            char ***l_144 = &l_145;
            int **l_146 = &g_53[4][3];
            int l_178[7][2];
            int i, j;
            for (i = 0; i < 7; i++)
            {
                for (j = 0; j < 2; j++)
                    l_178[i][j] = (-9L);
            }
            (*l_144) = &g_97;
            (*l_146) = &g_54[3];
            for (g_98 = (-7); (g_98 <= 6); ++g_98)
            {
                short l_174 = 1L;
                short *l_245[7][1][8] = {{{(void*)0,&g_141[0][0][2],&g_141[0][0][3],&l_174,&g_141[0][0][2],&l_174,&g_141[0][0][2],&l_174}},{{&l_174,&g_141[0][0][2],&l_174,&g_141[0][0][2],(void*)0,&l_174,&g_141[0][0][2],&l_214[0]}},{{&g_56,&g_141[0][0][2],(void*)0,(void*)0,&l_214[1],&l_214[1],(void*)0,(void*)0}},{{&g_56,&g_56,&l_174,&l_174,(void*)0,(void*)0,&g_56,(void*)0}},{{&l_174,(void*)0,&g_141[0][0][2],&l_174,&g_141[0][0][2],&l_174,&g_141[0][0][2],(void*)0}},{{(void*)0,&g_141[0][0][2],(void*)0,&l_174,&g_141[0][0][2],&g_141[0][0][2],&g_141[0][0][2],(void*)0}},{{&l_214[0],&g_141[0][0][2],&l_214[0],(void*)0,(void*)0,&l_214[0],&g_141[0][0][2],&l_214[0]}}};
                int i, j, k;
                if ((g_54[0] >= g_133))
                {
                    short *l_154 = &g_141[0][0][2];
                    short **l_153 = &l_154;
                    short *l_155 = &g_141[0][0][2];
                    unsigned short *l_160 = &g_161;
                    int l_189 = 8L;
                    for (g_64 = 0; (g_64 <= 54); g_64 = safe_add_func_uint8_t_u_u(g_64, 3))
                    {
                        (*l_146) = (void*)0;
                        (*l_146) = (void*)0;
                    }
                    if (((safe_add_func_int16_t_s_s(((*l_155) = (((*l_153) = &g_56) == (void*)0)), (safe_mod_func_int16_t_s_s(0L, (safe_rshift_func_uint16_t_u_u(((*l_160) = 9UL), 9)))))) & (&g_56 == l_162)))
                    {
                        unsigned char *l_175 = &g_176;
                        (*p_75) = (g_64 >= (4294967295UL > ((*p_75) | (safe_add_func_uint32_t_u_u((((safe_add_func_int8_t_s_s(0x1BL, (*g_97))) ^ (*p_75)) != ((*l_175) = (safe_lshift_func_int16_t_s_u(((void*)0 == l_169), (safe_sub_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s((&g_53[2][3] == &p_75), p_79)), l_174)))))), g_177[4][0])))));
                        return l_178[4][0];



                    }
                    else
                    {
                        unsigned char **l_183 = (void*)0;
                        unsigned char **l_184 = (void*)0;
                        unsigned char *l_186[9][5][2] = {{{&g_176,&g_176},{&g_64,&g_64},{&g_176,&g_176},{&g_64,&g_176},{&g_176,&g_64}},{{&g_64,&g_176},{&g_176,&g_64},{&g_64,&g_176},{&g_176,&g_176},{&g_176,&g_64}},{{&g_176,&g_64},{&g_176,&g_176},{&g_176,&g_176},{&g_64,&g_176},{&g_64,&g_176}},{{&g_176,&g_176},{&g_176,&g_64},{&g_176,&g_64},{&g_176,&g_176},{&g_176,&g_176}},{{&g_64,&g_176},{&g_64,&g_176},{&g_176,&g_176},{&g_176,&g_64},{&g_176,&g_64}},{{&g_176,&g_176},{&g_176,&g_176},{&g_64,&g_176},{&g_64,&g_176},{&g_176,&g_176}},{{&g_176,&g_64},{&g_176,&g_64},{&g_176,&g_176},{&g_176,&g_176},{&g_64,&g_176}},{{&g_64,&g_176},{&g_176,&g_176},{&g_176,&g_64},{&g_176,&g_64},{&g_176,&g_176}},{{&g_176,&g_176},{&g_64,&g_176},{&g_64,&g_176},{&g_176,&g_176},{&g_176,&g_64}}};
                        unsigned char **l_185 = &l_186[0][1][0];
                        int l_201 = 0x1D5C63F2L;
                        unsigned *l_210[3];
                        int i, j, k;
                        for (i = 0; i < 3; i++)
                            l_210[i] = &g_211[5];
                        (*p_75) = (((safe_lshift_func_uint16_t_u_u(p_76, ((-8L) || g_54[3]))) > (~p_78)) != 0x3702682AL);
                        (*p_75) = ((safe_rshift_func_int8_t_s_s(p_79, (((*l_185) = &g_64) != (void*)0))) || (g_64 >= (safe_sub_func_uint16_t_u_u(((*l_160) = (8L != l_189)), (safe_unary_minus_func_uint8_t_u(g_176))))));
                        (*p_75) = (safe_rshift_func_uint8_t_u_s((safe_lshift_func_int8_t_s_u(p_78, 1)), ((safe_add_func_uint32_t_u_u(p_79, ((safe_sub_func_int16_t_s_s(l_189, (((safe_add_func_uint16_t_u_u(p_78, l_201)) & ((&g_54[5] != p_75) == (safe_sub_func_uint16_t_u_u(((*l_160) = (safe_add_func_int32_t_s_s((-2L), ((safe_lshift_func_uint16_t_u_u(((l_212 = ((safe_sub_func_uint32_t_u_u(4294967295UL, l_189)) > 0x338DL)) && 0xCDB462DFL), 10)) < l_213)))), l_214[0])))) & p_79))) > 0x3FL))) && l_214[1])));
                        (*l_146) = l_215;
                    }

                    ;
                    l_189 = (safe_add_func_int8_t_s_s(((((safe_sub_func_int8_t_s_s(7L, ((*g_97) | l_212))) != g_211[5]) <= (((safe_sub_func_int32_t_s_s((&p_78 != &g_161), ((0UL & l_174) == g_133))) > g_177[3][0]) & l_189)) | g_161), 255UL));
                }
                else
                {
                    short *l_241[3];
                    int l_242[9];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_241[i] = (void*)0;
                    for (i = 0; i < 9; i++)
                        l_242[i] = (-1L);
                    for (p_78 = (-15); (p_78 > 54); p_78 = safe_add_func_uint32_t_u_u(p_78, 1))
                    {
                        unsigned char l_230 = 0xC7L;
                        unsigned *l_235 = &g_211[1];
                        char ****l_238 = &l_144;
                        int *l_239 = (void*)0;
                        int *l_240 = &l_212;
                        (*l_240) = ((*p_75) = ((safe_mod_func_int16_t_s_s(g_133, p_79)) > (0x9845L ^ (safe_sub_func_uint16_t_u_u(((safe_mod_func_int8_t_s_s((((l_230 = g_211[5]) & p_79) >= (safe_add_func_int16_t_s_s(p_79, (safe_sub_func_int32_t_s_s((l_235 == &g_211[5]), ((((*l_238) = g_236) != &g_237[0]) && 0x8EF45CCAL)))))), 255UL)) < p_78), 0xEF39L)))));

                        ;
                        (*l_240) = l_174;
                    }
                    (*p_75) = (((l_242[1] = ((*l_144) != (*l_144))) || g_4) < (p_79 && (safe_lshift_func_uint16_t_u_u(g_211[5], (((&g_141[0][0][2] != (g_246[0] = l_245[2][0][0])) < (safe_rshift_func_int16_t_s_u((g_253 = (g_141[0][0][4] = (safe_add_func_uint16_t_u_u(65530UL, (((safe_lshift_func_uint8_t_u_u(((p_76 ^ p_78) < p_76), 5)) && l_174) == g_161))))), 5))) || 7L)))));


                    (*l_146) = &l_212;
                }


            }

            ;
            for (g_62 = 0; (g_62 == (-5)); g_62 = safe_sub_func_uint8_t_u_u(g_62, 7))
            {
                if ((*l_215))
                    break;
                for (g_161 = 0; (g_161 != 52); ++g_161)
                {
                    int *l_260 = &g_54[3];
                    for (g_253 = 0; (g_253 <= 38); g_253 = safe_add_func_int32_t_s_s(g_253, 1))
                    {
                        (*l_146) = l_260;
                    }
                    return l_212;



                }
            }
        }



        for (g_62 = 0; (g_62 != (-17)); --g_62)
        {
            char ****l_264 = (void*)0;
            unsigned *l_265 = &g_133;
            unsigned short *l_275 = &g_161;
            int l_285 = 0x6BC5B733L;
            if ((l_263[1][2] != l_263[2][0]))
            {
                int l_266 = 3L;
                int **l_274 = &g_53[2][1];
                int ***l_273 = &l_274;
                for (g_161 = 0; (g_161 <= 7); g_161 += 1)
                {
                    int i;
                    if ((g_54[g_161] = (((void*)0 == l_264) == g_54[g_161])))
                    {
                        l_266 = (l_265 == p_75);
                        p_75 = &g_54[3];
                    }
                    else
                    {
                        (*l_215) = (safe_lshift_func_int8_t_s_u(p_79, (safe_lshift_func_int16_t_s_s(((l_212 > (~p_78)) & (*p_75)), l_212))));
                        if ((*p_75))
                            break;
                    }
                }
                (*l_215) = (l_212 != (((*l_273) = &p_75) == &p_75));

                ;
                if (((l_275 != (void*)0) != ((safe_lshift_func_int16_t_s_s(((safe_sub_func_int32_t_s_s(((safe_add_func_uint16_t_u_u(65535UL, ((safe_lshift_func_uint8_t_u_s(((void*)0 == l_284), (***g_236))) && (p_78 | 1L)))) != ((***l_273) = (((**l_274) >= l_212) > 0x85BFL))), l_212)) & l_285), 8)) & g_161)))
                {
                    (*l_274) = p_75;
                }
                else
                {
                    unsigned l_287 = 0x6CA54231L;
                    (***l_273) = (l_286 && ((!(((void*)0 == (*l_169)) <= l_287)) == (1UL ^ g_177[5][0])));
                    if ((***l_273))
                        continue;
                }
            }
            else
            {
                unsigned char l_301 = 0xB8L;
                (*p_75) = (~(*p_75));
                for (p_76 = 0; (p_76 != 9); ++p_76)
                {
                    return l_212;



                }
                l_290 = p_75;

                ;
                if ((g_54[3] >= p_76))
                {
                    volatile int *l_292 = &g_177[4][0];
                    volatile int **l_291 = &l_292;
                    int l_297 = 0xA56F4A34L;
                    (*l_291) = &g_177[4][0];
                    for (g_176 = (-14); (g_176 != 10); g_176 = safe_add_func_uint32_t_u_u(g_176, 1))
                    {
                        return p_78;



                    }
                    for (p_76 = 0; (p_76 != 13); p_76++)
                    {
                        short *l_298 = &g_141[0][0][3];
                        (*l_290) = ((((*l_298) = ((l_297 = ((void*)0 == &g_237[0])) & 0xB1F6L)) <= 0x4ED2L) | l_212);
                        return p_79;



                    }
                    return (*l_215);



                }
                else
                {
                    int **l_299 = &g_53[0][3];
                    g_300 = ((*l_299) = (void*)0);

                    ;
                    (*l_290) = l_301;
                }

                ;
            }
        }

        ;
        ;
        if ((((void*)0 == l_302) == ((*l_305) = (((void*)0 != &g_54[3]) & (g_64 = g_54[4])))))
        {
            int **l_306 = &g_53[3][3];
            (*l_306) = p_75;
            return g_56;



        }
        else
        {
            unsigned char l_313[9] = {0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL};
            int l_334 = (-6L);
            char ***l_362 = &l_169;
            unsigned l_376[3][3][6] = {{{0xD72B14D1L,0xA42E7EDEL,0xFA4CD265L,0xC43B6EC8L,5UL,0xD72B14D1L},{0xF035AD8DL,1UL,18446744073709551606UL,0xD72B14D1L,2UL,0x6FB554D0L},{5UL,18446744073709551606UL,18446744073709551606UL,5UL,1UL,18446744073709551614UL}},{{0x73FE96F0L,0xD72B14D1L,5UL,0xC43B6EC8L,0xFA4CD265L,0xA42E7EDEL},{0x220B9DF3L,0x6FB554D0L,18446744073709551615UL,0xB8C2FD8BL,0xFA4CD265L,1UL},{0UL,0xD72B14D1L,0xF035AD8DL,5UL,1UL,0UL}},{{0x6FB554D0L,18446744073709551606UL,1UL,18446744073709551606UL,0x6FB554D0L,0xEE6B636FL},{18446744073709551614UL,18446744073709551615UL,0xFA4CD265L,5UL,0UL,18446744073709551606UL},{0xA42E7EDEL,0x2978253EL,5UL,18446744073709551615UL,0UL,18446744073709551606UL}}};
            unsigned l_379 = 0xAB3733D6L;
            int i, j, k;
            if ((*p_75))
            {
                unsigned char ***l_316[6][5] = {{&g_314,&g_314,&g_314,&g_314,&g_314},{&g_314,&g_314,&g_314,&g_314,&g_314},{&g_314,&g_314,&g_314,&g_314,&g_314},{&g_314,&g_314,&g_314,&g_314,&g_314},{&g_314,&g_314,&g_314,&g_314,&g_314},{&g_314,&g_314,&g_314,&g_314,&g_314}};
                char *l_317 = &g_318;
                int l_348 = 0xB4CDF532L;
                int **l_378 = &g_53[1][0];
                int i, j;
                if (((*p_75) = ((***g_236) != ((*l_317) = (safe_sub_func_uint32_t_u_u((safe_sub_func_int16_t_s_s((0xC709768DL | (safe_rshift_func_uint8_t_u_s(l_313[5], 3))), g_253)), ((g_314 = g_314) != &g_315[6][1])))))))
                {
                    for (g_98 = (-6); (g_98 < 1); g_98 = safe_add_func_uint16_t_u_u(g_98, 4))
                    {
                        unsigned short l_324 = 0x31B9L;
                        short *l_325 = &g_141[0][0][2];
                        int **l_326 = (void*)0;
                        int **l_327 = &g_53[2][3];
                        (*p_75) = ((*l_215) > (safe_rshift_func_int8_t_s_s((((*l_325) = (safe_unary_minus_func_uint16_t_u((l_324 | (&g_315[5][3] == (void*)0))))) | (*l_215)), p_78)));
                        (*l_327) = l_215;
                    }
                    g_53[4][3] = p_75;
                }
                else
                {
                    int l_333 = (-2L);
                    int l_345 = 0x23228502L;
                    short *l_351 = (void*)0;
                    short *l_352 = &l_214[0];
                    if ((safe_rshift_func_int8_t_s_u(((***g_236) = (-1L)), 2)))
                    {
                        int **l_330 = &g_53[4][3];
                        char **l_337 = &l_317;
                        (*l_330) = p_75;
                        (*l_215) = (p_79 || (((safe_add_func_int16_t_s_s(p_78, (l_334 = (func_85(l_333) & 0x5CL)))) < (safe_lshift_func_int16_t_s_u((((*l_337) = l_317) != (void*)0), 9))) && ((safe_lshift_func_uint16_t_u_s(l_313[5], 13)) != (l_333 = (safe_rshift_func_int16_t_s_u(func_85((*p_75)), l_342[5]))))));
                        (*p_75) = ((safe_sub_func_uint32_t_u_u((l_345 != ((((**l_337) = (g_176 ^ func_85((*p_75)))) == (p_78 && ((+(safe_sub_func_uint8_t_u_u(p_78, l_348))) <= p_78))) & l_349[0][0][4])), g_56)) != 0x9529L);
                    }
                    else
                    {
                        int **l_350[3];
                        int i;
                        for (i = 0; i < 3; i++)
                            l_350[i] = &l_215;
                        p_75 = &g_54[3];
                    }
                    if ((func_85((~(l_345 | ((*l_352) = func_85((p_78 && (func_85((*p_75)) >= l_313[5]))))))) | l_313[5]))
                    {
                        int *l_353 = (void*)0;
                        int **l_354[10] = {&g_53[1][0],(void*)0,&g_53[1][0],(void*)0,&g_53[1][0],(void*)0,&g_53[1][0],(void*)0,&g_53[1][0],(void*)0};
                        int i;
                        p_75 = l_353;

                        ;
                        return l_345;



                    }
                    else
                    {
                        int *l_355[9];
                        char ****l_363[7] = {&l_362,&l_362,&l_362,&l_362,&l_362,&l_362,&l_362};
                        int i;
                        for (i = 0; i < 9; i++)
                            l_355[i] = &l_333;
                        l_333 = ((*p_75) = l_334);
                        (*p_75) = (((l_348 = (safe_sub_func_int32_t_s_s(l_348, (safe_lshift_func_int8_t_s_s(((*l_317) = p_79), 0))))) || ((void*)0 == l_316[3][2])) >= (func_85((safe_rshift_func_uint16_t_u_u(((*l_305) = ((~l_313[2]) != (g_4 != ((&g_237[0] == (g_236 = l_362)) == l_345)))), p_79))) & 4294967295UL));

                        ;
                    }

                    ;
                    (*p_75) = (safe_sub_func_uint8_t_u_u((((*l_305) = (*l_215)) && g_211[5]), (safe_mod_func_int16_t_s_s(((safe_sub_func_int32_t_s_s((*p_75), (*p_75))) | (safe_add_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s((safe_rshift_func_int16_t_s_s(l_376[2][1][3], p_76)), l_376[2][2][2])), p_76))), l_377))));
                }

                ;
                l_212 = (+((*p_75) = (*p_75)));
                (*l_378) = p_75;
                (*p_75) = l_379;
            }
            else
            {
                char **l_402 = &g_97;
                for (g_98 = (-2); (g_98 != (-14)); --g_98)
                {
                    unsigned char l_384 = 1UL;
                    unsigned l_400[3][10] = {{4294967292UL,4294967295UL,0xC8562FB6L,3UL,0xC8562FB6L,3UL,0UL,0UL,3UL,4294967295UL},{3UL,0UL,0UL,3UL,4294967295UL,0x9E5A8098L,4294967295UL,3UL,0UL,0UL},{4294967295UL,0UL,0xC8562FB6L,1UL,1UL,0xC8562FB6L,0UL,4294967295UL,0UL,0xC8562FB6L}};
                    int i, j;
                    (*p_75) = ((safe_add_func_int16_t_s_s((g_177[4][0] || l_384), (safe_sub_func_uint8_t_u_u((((!(safe_unary_minus_func_int32_t_s(0L))) && ((safe_rshift_func_int8_t_s_s((p_78 >= (safe_sub_func_uint32_t_u_u(p_79, l_384))), 2)) ^ p_76)) || (((safe_rshift_func_uint8_t_u_s(p_79, (safe_add_func_uint16_t_u_u((((safe_sub_func_int8_t_s_s(((safe_rshift_func_uint16_t_u_u(0xC2CFL, g_133)) ^ l_379), p_78)) & l_400[1][9]) < (***g_236)), l_334)))) < p_76) & l_401)), l_384)))) <= 255UL);
                }
                (*l_362) = l_402;
            }

            ;
            for (l_377 = 10; (l_377 < 3); l_377 = safe_sub_func_uint8_t_u_u(l_377, 9))
            {
                int **l_405 = &g_300;
                (*l_405) = &g_54[7];

                ;
            }
            if (l_379)
            {
                for (l_377 = 0; (l_377 <= 2); l_377 += 1)
                {
                    g_406 = &g_177[4][0];
                }
            }
            else
            {
                int *l_407 = &l_212;
                int **l_408 = &l_215;
                unsigned short l_412 = 2UL;
                (*l_408) = l_407;

                ;
                (*g_406) = (safe_rshift_func_int16_t_s_u((l_376[2][1][3] <= p_78), (!p_76)));
                for (p_79 = 0; (p_79 <= 2); p_79 += 1)
                {
                    int l_428[6] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
                    short *l_429 = &g_141[0][0][4];
                    int i;
                }
            }

            ;
        }

        ;
        ;
    }
    else
    {
        (*l_215) = 0xA2D9B171L;
    }





    ;
    ;
    return g_253;


}







static unsigned short func_85(int p_86)
{
    unsigned char l_90 = 0xC9L;
    char *l_99 = &g_62;
    int l_120 = (-1L);
    int l_134 = 0x4E546F8AL;
    int **l_136[7][10][2] = {{{&g_53[4][3],&g_53[4][3]},{&g_53[4][3],&g_53[4][3]},{(void*)0,&g_53[4][3]},{&g_53[4][3],&g_53[4][3]},{&g_53[4][3],&g_53[4][3]},{&g_53[4][3],&g_53[4][3]},{(void*)0,&g_53[4][3]},{&g_53[4][3],&g_53[4][3]},{&g_53[4][3],&g_53[5][1]},{&g_53[4][3],&g_53[4][3]}},{{(void*)0,&g_53[4][3]},{(void*)0,&g_53[4][3]},{&g_53[4][3],&g_53[5][1]},{&g_53[4][3],&g_53[4][3]},{&g_53[4][3],&g_53[4][3]},{(void*)0,&g_53[4][3]},{&g_53[4][3],&g_53[4][3]},{&g_53[4][3],&g_53[4][3]},{&g_53[4][3],&g_53[4][3]},{(void*)0,&g_53[4][3]}},{{&g_53[4][3],&g_53[4][3]},{&g_53[4][3],&g_53[5][1]},{&g_53[4][3],&g_53[4][3]},{(void*)0,&g_53[4][3]},{(void*)0,&g_53[4][3]},{&g_53[4][3],&g_53[5][1]},{&g_53[4][3],&g_53[4][3]},{&g_53[4][3],&g_53[4][3]},{(void*)0,&g_53[4][3]},{&g_53[4][3],&g_53[4][3]}},{{&g_53[4][3],&g_53[4][3]},{&g_53[4][3],&g_53[4][3]},{&g_53[4][3],&g_53[4][3]},{&g_53[4][3],&g_53[4][3]},{(void*)0,&g_53[4][3]},{&g_53[5][1],(void*)0},{(void*)0,&g_53[4][3]},{(void*)0,(void*)0},{&g_53[5][1],&g_53[4][3]},{(void*)0,&g_53[4][3]}},{{&g_53[4][3],&g_53[4][3]},{&g_53[4][3],(void*)0},{(void*)0,&g_53[5][1]},{&g_53[4][3],&g_53[5][1]},{(void*)0,(void*)0},{&g_53[4][3],&g_53[4][3]},{&g_53[4][3],&g_53[4][3]},{(void*)0,&g_53[4][3]},{&g_53[5][1],(void*)0},{(void*)0,&g_53[4][3]}},{{(void*)0,(void*)0},{&g_53[5][1],&g_53[4][3]},{(void*)0,&g_53[4][3]},{&g_53[4][3],&g_53[4][3]},{&g_53[4][3],(void*)0},{(void*)0,&g_53[5][1]},{&g_53[4][3],&g_53[5][1]},{(void*)0,(void*)0},{&g_53[4][3],&g_53[4][3]},{&g_53[4][3],&g_53[4][3]}},{{(void*)0,&g_53[4][3]},{&g_53[5][1],(void*)0},{(void*)0,&g_53[4][3]},{(void*)0,(void*)0},{&g_53[5][1],&g_53[4][3]},{(void*)0,&g_53[4][3]},{&g_53[4][3],&g_53[4][3]},{&g_53[4][3],(void*)0},{(void*)0,&g_53[5][1]},{&g_53[4][3],&g_53[5][1]}}};
    int i, j, k;
    for (g_62 = 0; (g_62 != (-27)); g_62--)
    {
        char *l_95[5];
        unsigned char l_129 = 0x81L;
        unsigned *l_130 = (void*)0;
        unsigned *l_131 = (void*)0;
        unsigned *l_132[10] = {&g_133,&g_133,&g_133,&g_133,&g_133,&g_133,&g_133,&g_133,&g_133,&g_133};
        int l_135 = 0L;
        int l_137 = 1L;
        int l_138 = 0x64474F44L;
        unsigned char *l_139 = &l_90;
        short *l_140 = &g_141[0][0][2];
        int i;
        for (i = 0; i < 5; i++)
            l_95[i] = &g_62;
        if (l_90)
            break;
        for (l_90 = 7; (l_90 > 6); l_90 = safe_sub_func_uint32_t_u_u(l_90, 5))
        {
            int *l_110 = &g_54[0];
            for (g_64 = 0; (g_64 == 55); g_64++)
            {
                char **l_96[5][5];
                int *l_107 = (void*)0;
                int *l_108 = &g_54[0];
                int **l_115[9][8][3] = {{{&g_53[4][3],(void*)0,&l_108},{(void*)0,(void*)0,&l_110},{&l_108,&l_107,&g_53[4][3]},{(void*)0,&l_108,&g_53[4][3]},{&l_107,&g_53[4][3],&l_108},{&l_110,&g_53[2][0],(void*)0},{&l_108,&l_110,&g_53[4][3]},{&l_108,&l_108,&l_110}},{{&g_53[1][3],&g_53[5][2],&g_53[4][3]},{(void*)0,(void*)0,(void*)0},{&l_107,(void*)0,&l_107},{&l_107,&l_107,&l_107},{&g_53[6][3],&l_108,&g_53[2][0]},{&l_107,&l_107,&l_108},{&l_107,&g_53[2][2],&l_107},{(void*)0,&g_53[4][3],(void*)0}},{{&l_107,&g_53[4][3],(void*)0},{&l_107,(void*)0,(void*)0},{&g_53[6][0],&g_53[1][3],&l_108},{&l_108,&g_53[6][0],&g_53[1][1]},{&l_107,&l_108,&l_108},{&l_108,&g_53[4][3],&g_53[6][0]},{&l_107,&l_108,&g_53[4][3]},{&l_107,&g_53[6][0],&g_53[4][3]}},{{&l_110,&g_53[1][3],&g_53[4][3]},{(void*)0,(void*)0,&l_108},{&l_108,&g_53[4][3],&l_107},{&l_108,&g_53[4][3],(void*)0},{&g_53[4][3],&g_53[2][2],&g_53[6][0]},{(void*)0,&l_107,(void*)0},{&g_53[2][2],&l_108,&g_53[4][3]},{(void*)0,&l_107,&l_107}},{{&l_108,(void*)0,&l_108},{&l_108,(void*)0,&g_53[7][2]},{&g_53[4][3],&g_53[5][2],(void*)0},{&l_108,(void*)0,&l_110},{&l_107,&g_53[4][3],&g_53[6][0]},{&l_107,&l_107,&l_110},{(void*)0,(void*)0,(void*)0},{(void*)0,&g_53[4][3],(void*)0}},{{(void*)0,(void*)0,&l_110},{&l_108,&l_107,&g_53[6][0]},{&l_110,&l_107,&l_110},{&l_107,&l_110,(void*)0},{&l_110,&l_110,&g_53[1][3]},{(void*)0,&l_107,&l_110},{&l_108,&g_53[4][3],(void*)0},{&g_53[4][3],&l_107,&l_110}},{{&g_53[4][3],&g_53[4][3],(void*)0},{(void*)0,(void*)0,&l_108},{&g_53[4][3],&l_108,&g_53[6][0]},{&l_108,&g_53[1][1],(void*)0},{&g_53[4][0],&l_108,&g_53[4][3]},{&g_53[2][0],&g_53[6][1],&g_53[2][0]},{&g_53[4][3],(void*)0,&g_53[7][1]},{&l_110,&l_107,(void*)0}},{{&l_108,&l_107,(void*)0},{&g_53[4][3],&g_53[1][3],&g_53[4][3]},{&l_108,&g_53[2][0],&l_107},{&l_110,&g_53[6][0],&l_107},{&g_53[4][3],&g_53[1][2],(void*)0},{&g_53[2][0],&l_107,&l_108},{&g_53[4][0],(void*)0,(void*)0},{&l_108,&g_53[2][2],&l_110}},{{&g_53[4][3],&g_53[2][2],(void*)0},{(void*)0,(void*)0,&l_107},{&g_53[4][3],&l_107,(void*)0},{(void*)0,&g_53[4][3],&l_107},{&g_53[4][3],&g_53[2][0],&l_107},{&l_107,&g_53[2][0],&l_108},{(void*)0,&g_53[1][2],&g_53[4][0]},{&l_108,&g_53[7][2],&l_107}}};
                int i, j, k;
                for (i = 0; i < 5; i++)
                {
                    for (j = 0; j < 5; j++)
                        l_96[i][j] = (void*)0;
                }
                if (((g_97 = l_95[0]) == l_99))
                {
                    unsigned l_100 = 0xCF114091L;
                    return l_100;
                }
                else
                {
                    int **l_101 = &g_53[4][3];
                    (*l_101) = &g_54[3];
                    (*l_101) = &g_54[3];
                    for (g_98 = 0; (g_98 <= 4); g_98 += 1)
                    {
                        int i;
                        g_54[g_98] = g_54[g_98];
                    }
                    for (g_98 = 14; (g_98 != (-16)); g_98--)
                    {
                        int *l_104 = (void*)0;
                        int *l_105 = (void*)0;
                        int *l_106 = &g_54[3];
                        (*l_106) = p_86;
                        (*l_106) = 0x0B63B589L;
                        return g_4;
                    }
                }

                ;
                if (((*l_108) = 0L))
                {
                    int *l_109[1];
                    int **l_111 = &l_107;
                    int i;
                    for (i = 0; i < 1; i++)
                        l_109[i] = &g_54[3];
                    l_110 = l_109[0];
                    if (p_86)
                        break;
                    (*l_111) = &p_86;

                    ;
                    for (p_86 = 26; (p_86 != 5); p_86 = safe_sub_func_uint8_t_u_u(p_86, 6))
                    {
                        (*l_111) = &p_86;
                        (*l_108) = (p_86 > g_54[5]);
                    }
                }
                else
                {
                    int l_114 = 0L;
                    (*l_108) = l_114;
                }

                ;
                g_53[4][3] = &g_54[1];
            }
            if (p_86)
                break;
        }
        p_86 = (safe_add_func_int32_t_s_s((((*l_140) = (safe_rshift_func_int8_t_s_u(l_120, ((*l_139) = ((~5L) <= ((safe_mod_func_int32_t_s_s(((l_138 = (safe_lshift_func_int8_t_s_s(l_90, (g_98 = (safe_lshift_func_int8_t_s_s((((l_129 > (l_134 = p_86)) ^ (l_135 = l_129)) | (l_137 = (((l_136[0][1][1] != (void*)0) && p_86) > p_86))), (*g_97))))))) != l_129), p_86)) || 0xBB5C0823L)))))) | 0xB373L), l_129));
        return g_64;
    }
    return g_141[0][0][2];
}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_34, "g_34", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_54[i], "g_54[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_56, "g_56", print_hash_value);
    transparent_crc(g_62, "g_62", print_hash_value);
    transparent_crc(g_64, "g_64", print_hash_value);
    transparent_crc(g_98, "g_98", print_hash_value);
    transparent_crc(g_133, "g_133", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_141[i][j][k], "g_141[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_161, "g_161", print_hash_value);
    transparent_crc(g_176, "g_176", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_177[i][j], "g_177[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_211[i], "g_211[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_253, "g_253", print_hash_value);
    transparent_crc(g_318, "g_318", print_hash_value);
    transparent_crc(g_465, "g_465", print_hash_value);
    transparent_crc(g_523, "g_523", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_619[i], "g_619[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_674[i], "g_674[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_797, "g_797", print_hash_value);
    transparent_crc(g_799, "g_799", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(g_813[i][j], "g_813[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_824, "g_824", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
