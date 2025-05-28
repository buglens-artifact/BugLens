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


struct S0 {
   short f0;
   int f1;
   short f2;
};

struct S1 {
   unsigned short f0;
};


static struct S1 g_2 = {0x070AL};
static unsigned g_21 = 0xA60813C2L;
static int g_31 = 9L;
static int g_34 = 0x4F57B17BL;
static unsigned g_44[10][4] = {{0UL,7UL,4294967288UL,4294967288UL},{0xBA8A7E8BL,0xBA8A7E8BL,0UL,4294967288UL},{0x456014EFL,7UL,0x456014EFL,0UL},{0x456014EFL,0UL,0UL,0x456014EFL},{0xBA8A7E8BL,0UL,4294967288UL,0UL},{0UL,7UL,4294967288UL,4294967288UL},{0xBA8A7E8BL,0xBA8A7E8BL,0UL,4294967288UL},{0x456014EFL,7UL,0x456014EFL,0UL},{0x456014EFL,0UL,0UL,0x456014EFL},{0xBA8A7E8BL,0UL,4294967288UL,0UL}};
static char g_65 = 1L;
static unsigned char g_94[5] = {0x50L,0x50L,0x50L,0x50L,0x50L};
static int *g_97 = &g_31;
static struct S1 *g_99[3] = {&g_2,&g_2,&g_2};
static struct S0 g_112 = {0xB907L,0x6C5754D5L,-5L};
static char *g_143 = &g_65;
static unsigned *g_148[10][3][5] = {{{(void*)0,&g_44[3][1],&g_44[3][1],(void*)0,&g_44[3][0]},{&g_44[6][0],&g_44[3][1],&g_44[7][1],(void*)0,(void*)0},{&g_44[8][0],(void*)0,&g_44[7][2],(void*)0,&g_44[8][0]}},{{&g_44[9][3],&g_44[5][1],(void*)0,&g_44[3][1],(void*)0},{&g_44[3][1],&g_44[2][0],(void*)0,&g_44[3][1],(void*)0},{&g_44[3][1],&g_44[2][2],&g_44[3][1],&g_44[5][1],(void*)0}},{{&g_44[1][0],&g_44[3][1],&g_44[8][3],(void*)0,&g_44[8][0]},{(void*)0,&g_44[1][2],(void*)0,&g_44[3][1],(void*)0},{&g_44[4][2],&g_44[3][1],&g_44[3][1],(void*)0,&g_44[3][0]}},{{&g_44[3][1],(void*)0,&g_44[3][1],&g_44[3][1],&g_44[3][1]},{&g_44[1][2],(void*)0,&g_44[2][2],&g_44[3][1],&g_44[3][1]},{&g_44[5][1],(void*)0,&g_44[3][1],&g_44[3][1],&g_44[3][1]}},{{&g_44[3][1],&g_44[3][1],(void*)0,&g_44[3][1],&g_44[3][1]},{&g_44[2][0],(void*)0,&g_44[2][2],&g_44[3][1],(void*)0},{(void*)0,&g_44[3][1],&g_44[5][1],&g_44[3][1],&g_44[7][1]}},{{&g_44[3][1],(void*)0,(void*)0,(void*)0,&g_44[3][1]},{&g_44[3][1],&g_44[3][0],&g_44[8][0],&g_44[3][1],&g_44[3][1]},{&g_44[3][1],&g_44[6][0],&g_44[3][1],(void*)0,&g_44[3][1]}},{{&g_44[8][0],&g_44[3][1],&g_44[6][0],&g_44[5][1],&g_44[3][1]},{&g_44[1][2],&g_44[4][2],&g_44[0][0],&g_44[5][1],&g_44[7][2]},{(void*)0,&g_44[3][1],&g_44[3][1],&g_44[3][1],&g_44[3][1]}},{{(void*)0,(void*)0,&g_44[4][2],&g_44[0][0],&g_44[1][0]},{&g_44[3][1],&g_44[4][2],(void*)0,(void*)0,&g_44[8][3]},{&g_44[3][1],&g_44[3][1],(void*)0,&g_44[3][1],&g_44[3][1]}},{{(void*)0,(void*)0,&g_44[5][1],&g_44[2][0],&g_44[4][2]},{&g_44[6][0],&g_44[3][1],(void*)0,(void*)0,&g_44[3][1]},{&g_44[3][1],(void*)0,&g_44[3][1],(void*)0,(void*)0}},{{(void*)0,(void*)0,&g_44[3][1],&g_44[4][2],&g_44[8][0]},{&g_44[3][1],&g_44[3][1],&g_44[3][1],(void*)0,&g_44[3][1]},{(void*)0,(void*)0,(void*)0,&g_44[3][1],&g_44[7][1]}}};
static unsigned g_152 = 0x93F2D2C6L;
static char g_186[7][9][4] = {{{(-9L),0x9DL,(-9L),2L},{(-9L),2L,2L,(-9L)},{0x33L,2L,0x98L,2L},{2L,0x9DL,0x98L,0x98L},{0x33L,0x33L,2L,0x98L},{(-9L),0x9DL,(-9L),2L},{(-9L),2L,2L,(-9L)},{0x33L,2L,0x98L,2L},{2L,0x9DL,0x98L,0x98L}},{{0x33L,0x33L,2L,(-9L)},{2L,0x98L,2L,0x33L},{2L,0x33L,0x33L,2L},{0x9DL,0x33L,(-9L),0x33L},{0x33L,0x98L,(-9L),(-9L)},{0x9DL,0x9DL,0x33L,(-9L)},{2L,0x98L,2L,0x33L},{2L,0x33L,0x33L,2L},{0x9DL,0x33L,(-9L),0x33L}},{{0x33L,0x98L,(-9L),(-9L)},{0x9DL,0x9DL,0x33L,(-9L)},{2L,0x98L,2L,0x33L},{2L,0x33L,0x33L,2L},{0x9DL,0x33L,(-9L),0x33L},{0x33L,0x98L,(-9L),(-9L)},{0x9DL,0x9DL,0x33L,(-9L)},{2L,0x98L,2L,0x33L},{2L,0x33L,0x33L,2L}},{{0x9DL,0x33L,(-9L),0x33L},{0x33L,0x98L,(-9L),(-9L)},{0x9DL,0x9DL,0x33L,(-9L)},{2L,0x98L,2L,0x33L},{2L,0x33L,0x33L,2L},{0x9DL,0x33L,(-9L),0x33L},{0x33L,0x98L,0x9DL,0x9DL},{2L,2L,(-9L),0x9DL},{0x98L,0x33L,0x98L,(-9L)}},{{0x98L,(-9L),(-9L),0x98L},{2L,(-9L),0x9DL,(-9L)},{(-9L),0x33L,0x9DL,0x9DL},{2L,2L,(-9L),0x9DL},{0x98L,0x33L,0x98L,(-9L)},{0x98L,(-9L),(-9L),0x98L},{2L,(-9L),0x9DL,(-9L)},{(-9L),0x33L,0x9DL,0x9DL},{2L,2L,(-9L),0x9DL}},{{0x98L,0x33L,0x98L,(-9L)},{0x98L,(-9L),(-9L),0x98L},{2L,(-9L),0x9DL,(-9L)},{(-9L),0x33L,0x9DL,0x9DL},{2L,2L,(-9L),0x9DL},{0x98L,0x33L,0x98L,(-9L)},{0x98L,(-9L),(-9L),0x98L},{2L,(-9L),0x9DL,(-9L)},{(-9L),0x33L,0x9DL,0x9DL}},{{2L,2L,(-9L),0x9DL},{0x98L,0x33L,0x98L,(-9L)},{0x98L,(-9L),(-9L),0x98L},{2L,2L,0x98L,2L},{2L,0x9DL,0x98L,0x98L},{0x33L,0x33L,2L,0x98L},{(-9L),0x9DL,(-9L),2L},{(-9L),2L,2L,(-9L)},{0x33L,2L,0x98L,2L}}};
static char *g_185 = &g_186[1][5][3];
static unsigned g_271 = 0xEA1B74DEL;
static struct S0 g_282 = {5L,0x952B0980L,-1L};
static char **g_298 = &g_185;
static char ***g_297 = &g_298;
static char ***g_301 = &g_298;
static unsigned char g_302 = 0x65L;
static struct S1 ***g_334 = (void*)0;
static struct S1 **g_336[8] = {&g_99[1],&g_99[1],&g_99[1],&g_99[1],&g_99[1],&g_99[1],&g_99[1],&g_99[1]};
static struct S1 ***g_335 = &g_336[5];
static unsigned g_372[7][10][3] = {{{0x0C654F21L,0xA9D7E2D9L,0x5C55A6DBL},{0x32876BD8L,0xC495F101L,0x48F00F30L},{0UL,0xFCF9E425L,4294967290UL},{0xCA58404EL,4294967293UL,3UL},{0x5E30AFCAL,4294967295UL,0xB25053CBL},{0xC588D4D5L,9UL,4294967295UL},{3UL,0UL,4294967287UL},{6UL,0UL,4294967287UL},{0x7304A5D0L,0UL,4294967295UL},{0xA5E7D4B7L,0x81E60A54L,0xB25053CBL}},{{0x198F1B2DL,0UL,3UL},{0x557B021DL,0xA9512BAAL,4294967290UL},{4294967289UL,0x0DC7968EL,0x48F00F30L},{4294967295UL,0x73A78029L,0x5C55A6DBL},{1UL,0UL,0x3BD019D2L},{4294967295UL,0x3BD019D2L,4294967295UL},{0x81E60A54L,0x486B52A1L,0x158F6FA1L},{0xFCF9E425L,5UL,0xC588D4D5L},{4294967289UL,0x1A930AC7L,0UL},{0x3BD019D2L,0x158F6FA1L,0xA5E7D4B7L}},{{4294967289UL,0x5E30AFCAL,9UL},{0xFCF9E425L,0x85DBEB43L,1UL},{0x557B021DL,0xA5E7D4B7L,7UL},{0x3BD019D2L,5UL,0x1A930AC7L},{0x81E60A54L,4294967290UL,0xB25053CBL},{0x6E405D19L,0x1A930AC7L,0x5C55A6DBL},{0x5EC5E385L,0UL,0x9CB063B3L},{0UL,0x32876BD8L,0x557B021DL},{4294967291UL,0x158F6FA1L,4294967290UL},{5UL,0x3FAE959DL,0UL}},{{0x158F6FA1L,0UL,0xC588D4D5L},{0x5C55A6DBL,0UL,0x0DC7968EL},{0x52700F43L,0x3FAE959DL,0x198F1B2DL},{0UL,0x158F6FA1L,0xC495F101L},{1UL,0x32876BD8L,0x48F00F30L},{3UL,0UL,0x3FAE959DL},{1UL,0x1A930AC7L,4294967295UL},{0x9CB063B3L,4294967290UL,0x0C654F21L},{4294967295UL,5UL,0xBBDB3903L},{0xA5E7D4B7L,0xA5E7D4B7L,4294967295UL}},{{4294967290UL,0xA590BD28L,0xB51DFCB4L},{0x482857D9L,1UL,0UL},{4294967295UL,0x54409EFDL,0x9F7B7DE3L},{0x85DBEB43L,0x482857D9L,0UL},{0x486B52A1L,0xBBDB3903L,0xB51DFCB4L},{0xB25053CBL,1UL,4294967295UL},{0x09ED0CE8L,9UL,0xBBDB3903L},{0x1A930AC7L,4294967295UL,0x0C654F21L},{9UL,0x7304A5D0L,4294967295UL},{0UL,4294967287UL,0x3FAE959DL}},{{1UL,0UL,0x48F00F30L},{4294967294UL,1UL,0xC495F101L},{0UL,0x557B021DL,0x198F1B2DL},{0xFCF9E425L,0x9F7B7DE3L,0UL},{4294967295UL,3UL,0xA9512BAAL},{4294967295UL,0xFCF9E425L,0xF7ED305FL},{4294967293UL,0xC588D4D5L,0x7304A5D0L},{0xF7ED305FL,4294967290UL,0UL},{0xA5E7D4B7L,0x54409EFDL,0x79582722L},{0x5572DAFAL,0x09ED0CE8L,4294967289UL}},{{0xA590BD28L,4294967295UL,4294967295UL},{7UL,0x7304A5D0L,6UL},{6UL,0x486B52A1L,0x486B52A1L},{0x54409EFDL,0x158F6FA1L,0x52700F43L},{4294967295UL,0xA5E7D4B7L,0xC588D4D5L},{0xB51DFCB4L,7UL,0UL},{4294967295UL,1UL,0xFCF9E425L},{0x0DC7968EL,7UL,0UL},{0x5C55A6DBL,0xA5E7D4B7L,0x5EC5E385L},{4294967294UL,0x158F6FA1L,4294967287UL}}};
static struct S1 g_411 = {0xC6F4L};
static struct S0 *g_423 = (void*)0;
static int g_535 = 0x9DEA1739L;
static struct S1 *****g_567 = (void*)0;
static short g_638 = 4L;
static unsigned *g_664 = &g_21;
static unsigned **g_663 = &g_664;
static unsigned **g_672 = &g_148[8][2][3];
static unsigned ***g_671 = &g_672;
static unsigned char *g_681 = &g_94[4];
static unsigned char **g_680[3][1][2] = {{{&g_681,&g_681}},{{&g_681,&g_681}},{{&g_681,&g_681}}};
static unsigned char ***g_679[10] = {&g_680[0][0][1],&g_680[0][0][1],&g_680[1][0][1],(void*)0,&g_680[1][0][1],&g_680[0][0][1],&g_680[0][0][1],&g_680[1][0][1],(void*)0,&g_680[1][0][1]};
static struct S1 *g_687 = &g_411;
static unsigned g_712 = 9UL;



static int func_1(void);
static struct S1 * func_3(struct S0 p_4, unsigned p_5, int p_6, char p_7);
static struct S0 func_8(struct S1 * p_9, char p_10);
static struct S0 func_13(struct S0 p_14);
static short func_16(short p_17);
static short func_54(struct S1 * p_55, unsigned short p_56);
static struct S1 * func_57(unsigned short p_58, unsigned * p_59);
static char func_66(char p_67, char * p_68);
static short func_73(unsigned * p_74, char * p_75, struct S0 p_76, unsigned * p_77);
static unsigned * func_78(int * p_79, unsigned * p_80, int p_81, struct S1 * p_82);
static int func_1(void)
{
    unsigned short l_11 = 0xEB4CL;
    struct S0 *l_527 = &g_282;
    unsigned l_532 = 9UL;
    char ***l_533[8] = {&g_298,&g_298,&g_298,&g_298,&g_298,&g_298,&g_298,&g_298};
    int *l_534 = &g_535;
    struct S1 *l_537[5];
    struct S1 ***l_559 = &g_336[5];
    unsigned l_572 = 0xB01BE40DL;
    int l_579 = 0x92769CC5L;
    unsigned *l_676 = &g_44[3][1];
    short l_720 = 0xE43EL;
    unsigned char **l_732[10] = {&g_681,(void*)0,(void*)0,&g_681,(void*)0,(void*)0,&g_681,(void*)0,(void*)0,&g_681};
    unsigned char l_742 = 247UL;
    int i;
    for (i = 0; i < 5; i++)
        l_537[i] = &g_2;
    l_537[4] = (g_2 , func_3(((*l_527) = func_8(&g_2, (6UL == l_11))), (safe_mod_func_uint16_t_u_u((((*l_534) |= ((safe_add_func_uint8_t_u_u(255UL, l_532)) | (l_533[2] != (l_532 , &g_298)))) < l_532), g_372[2][2][1])), g_372[5][6][2], (*g_185)));
    for (l_11 = 0; (l_11 < 59); l_11++)
    {
        struct S1 *l_541 = &g_2;
        struct S1 ***l_560[8] = {&g_336[5],&g_336[5],&g_336[5],&g_336[5],&g_336[5],&g_336[5],&g_336[5],&g_336[5]};
        unsigned l_561 = 0xB08DBDC7L;
        struct S0 l_593[7] = {{-5L,0x4E50EC06L,0xC412L},{-5L,0x4E50EC06L,0xC412L},{-5L,0x4E50EC06L,0xC412L},{-5L,0x4E50EC06L,0xC412L},{-5L,0x4E50EC06L,0xC412L},{-5L,0x4E50EC06L,0xC412L},{-5L,0x4E50EC06L,0xC412L}};
        int l_616 = (-1L);
        unsigned char *l_646 = &g_302;
        unsigned char **l_645 = &l_646;
        unsigned char l_674[6][4] = {{0xE5L,8UL,1UL,0x5FL},{0x39L,8UL,8UL,0x39L},{8UL,0x39L,0xE5L,0UL},{8UL,0xE5L,8UL,1UL},{0x39L,0UL,1UL,1UL},{0xE5L,0xE5L,0x5FL,0UL}};
        int **l_701 = &l_534;
        int ***l_700[6][5] = {{&l_701,&l_701,&l_701,&l_701,&l_701},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&l_701,&l_701,&l_701,&l_701,&l_701},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&l_701,&l_701,&l_701,&l_701,&l_701},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
        struct S1 l_714 = {0UL};
        struct S1 *l_715 = &g_2;
        short *l_739[2][3][6] = {{{&l_720,&g_112.f2,&g_112.f0,&g_112.f0,&g_112.f2,&l_720},{&g_112.f0,&g_112.f2,&l_720,&l_593[2].f2,&g_282.f0,&g_112.f0},{&g_112.f0,&l_720,&l_720,&l_720,&g_112.f0,&g_112.f2}},{{&g_112.f0,&g_112.f0,&l_720,&l_593[2].f2,(void*)0,(void*)0},{&g_112.f0,&g_282.f0,&g_282.f0,&g_112.f0,&l_720,(void*)0},{&l_720,(void*)0,&l_720,&g_112.f2,&l_593[2].f2,&g_112.f2}}};
        unsigned char l_740 = 0xECL;
        unsigned short *l_741 = &l_714.f0;
        int i, j, k;
        for (g_112.f0 = 5; (g_112.f0 >= 2); g_112.f0 -= 1)
        {
            int l_540 = (-4L);
            struct S1 **l_542 = &g_99[1];
            int i;
            if (l_540)
                break;
            (*g_97) = (*l_534);
            (*l_542) = l_541;
            (*l_534) = (safe_lshift_func_uint16_t_u_u(g_21, 14));
        }
        if ((*l_534))
        {
            (*l_534) &= ((*g_97) = (-1L));
        }
        else
        {
            int l_547 = 1L;
            struct S1 **l_550[2];
            struct S1 l_568 = {65529UL};
            struct S1 ****l_571 = &l_560[6];
            struct S1 *****l_570 = &l_571;
            struct S0 **l_588[9][6][2] = {{{&g_423,&g_423},{&g_423,(void*)0},{&g_423,(void*)0},{&g_423,&l_527},{&g_423,&l_527},{&l_527,(void*)0}},{{(void*)0,&g_423},{&l_527,&g_423},{&g_423,&g_423},{(void*)0,&g_423},{&g_423,&g_423},{&l_527,&g_423}},{{(void*)0,(void*)0},{&l_527,&l_527},{&g_423,&l_527},{&g_423,(void*)0},{&g_423,(void*)0},{&g_423,&g_423}},{{&l_527,&l_527},{(void*)0,&g_423},{&l_527,&g_423},{&l_527,&l_527},{&g_423,(void*)0},{(void*)0,&g_423}},{{&g_423,&l_527},{&l_527,&g_423},{(void*)0,&g_423},{(void*)0,&g_423},{&l_527,&l_527},{&g_423,&g_423}},{{(void*)0,(void*)0},{&g_423,&l_527},{&l_527,&g_423},{&l_527,&g_423},{(void*)0,&l_527},{&l_527,&g_423}},{{&g_423,(void*)0},{&g_423,(void*)0},{&g_423,&l_527},{&g_423,&l_527},{&l_527,(void*)0},{(void*)0,&g_423}},{{&l_527,&g_423},{&g_423,&g_423},{(void*)0,&g_423},{&g_423,&g_423},{&l_527,&g_423},{(void*)0,(void*)0}},{{&l_527,(void*)0},{(void*)0,&l_527},{&g_423,(void*)0},{&g_423,&g_423},{&l_527,(void*)0},{&l_527,(void*)0}}};
            char l_596[4];
            struct S1 *l_599 = &g_2;
            unsigned *l_608[6];
            struct S0 l_614[7][4][6] = {{{{0x0F98L,0L,-10L},{0x0F98L,0L,-10L},{0x0F98L,0L,-10L},{0x0F98L,0L,-10L},{0x0F98L,0L,-10L},{0x0F98L,0L,-10L}},{{0x0F98L,0L,-10L},{0x0F98L,0L,-10L},{0x0F98L,0L,-10L},{0x0F98L,0L,-10L},{0x0F98L,0L,-10L},{0x0F98L,0L,-10L}},{{0x0F98L,0L,-10L},{0x0F98L,0L,-10L},{0x0F98L,0L,-10L},{0x0F98L,0L,-10L},{0x0F98L,0L,-10L},{0x0F98L,0L,-10L}},{{0x0F98L,0L,-10L},{0x0F98L,0L,-10L},{0x0F98L,0L,-10L},{0x0F98L,0L,-10L},{0x0F98L,0L,-10L},{0x0F98L,0L,-10L}}},{{{0x0F98L,0L,-10L},{0x0F98L,0L,-10L},{0x0F98L,0L,-10L},{0x0F98L,0L,-10L},{0x0F98L,0L,-10L},{0x0F98L,0L,-10L}},{{0x0F98L,0L,-10L},{0x0F98L,0L,-10L},{0x0F98L,0L,-10L},{0x0F98L,0L,-10L},{0x0F98L,0L,-10L},{0x0F98L,0L,-10L}},{{0x0F98L,0L,-10L},{0x0F98L,0L,-10L},{0x0F98L,0L,-10L},{0x0F98L,0L,-10L},{0x0F98L,0L,-10L},{0x0F98L,0L,-10L}},{{0x0F98L,0L,-10L},{0x0F98L,0L,-10L},{0x0F98L,0L,-10L},{0x0F98L,0L,-10L},{0x0F98L,0L,-10L},{0x0F98L,0L,-10L}}},{{{0x0F98L,0L,-10L},{0x0F98L,0L,-10L},{0x0F98L,0L,-10L},{0x0F98L,0L,-10L},{0x0F98L,0L,-10L},{0x0F98L,0L,-10L}},{{0x0F98L,0L,-10L},{0x0F98L,0L,-10L},{0x0F98L,0L,-10L},{0x0F98L,0L,-10L},{0x0F98L,0L,-10L},{0x0F98L,0L,-10L}},{{0x0F98L,0L,-10L},{0x0F98L,0L,-10L},{0x0F98L,0L,-10L},{0x0F98L,0L,-10L},{0x0F98L,0L,-10L},{0x0F98L,0L,-10L}},{{0x0F98L,0L,-10L},{0x0F98L,0L,-10L},{0x0F98L,0L,-10L},{0x0F98L,0L,-10L},{0x0F98L,0L,-10L},{0x0F98L,0L,-10L}}},{{{0x0F98L,0L,-10L},{0x0F98L,0L,-10L},{0x0F98L,0L,-10L},{0x0F98L,0L,-10L},{0x0F98L,0L,-10L},{0x0F98L,0L,-10L}},{{0x0F98L,0L,-10L},{0x0F98L,0L,-10L},{0x0F98L,0L,-10L},{0x0F98L,0L,-10L},{0x0F98L,0L,-10L},{0x0F98L,0L,-10L}},{{0x0F98L,0L,-10L},{0x0F98L,0L,-10L},{0x0F98L,0L,-10L},{0x0F98L,0L,-10L},{0x0F98L,0L,-10L},{0x0F98L,0L,-10L}},{{0x0F98L,0L,-10L},{0x0F98L,0L,-10L},{0x0F98L,0L,-10L},{0x0F98L,0L,-10L},{0x0F98L,0L,-10L},{0x0F98L,0L,-10L}}},{{{0x0F98L,0L,-10L},{0x0F98L,0L,-10L},{0x0F98L,0L,-10L},{0x0F98L,0L,-10L},{0x0F98L,0L,-10L},{0x0F98L,0L,-10L}},{{0x0F98L,0L,-10L},{0x0F98L,0L,-10L},{0x0F98L,0L,-10L},{0x0F98L,0L,-10L},{0x0F98L,0L,-10L},{0x0F98L,0L,-10L}},{{0x0F98L,0L,-10L},{0x0F98L,0L,-10L},{0x0F98L,0L,-10L},{0x0F98L,0L,-10L},{0x0F98L,0L,-10L},{0x0F98L,0L,-10L}},{{0x0F98L,0L,-10L},{0x0F98L,0L,-10L},{0x0F98L,0L,-10L},{0x0F98L,0L,-10L},{0x0F98L,0L,-10L},{0x0F98L,0L,-10L}}},{{{0x0F98L,0L,-10L},{0x0F98L,0L,-10L},{0x0F98L,0L,-10L},{0x0F98L,0L,-10L},{0x0F98L,0L,-10L},{0x0F98L,0L,-10L}},{{0x0F98L,0L,-10L},{0x0F98L,0L,-10L},{0x0F98L,0L,-10L},{0x0F98L,0L,-10L},{0x0F98L,0L,-10L},{0x0F98L,0L,-10L}},{{0x0F98L,0L,-10L},{0x0F98L,0L,-10L},{0x0F98L,0L,-10L},{0x0F98L,0L,-10L},{0x0F98L,0L,-10L},{0x0F98L,0L,-10L}},{{0x0F98L,0L,-10L},{0x0F98L,0L,-10L},{0x0F98L,0L,-10L},{0x0F98L,0L,-10L},{0x0F98L,0L,-10L},{0x0F98L,0L,-10L}}},{{{0x0F98L,0L,-10L},{0x0F98L,0L,-10L},{0x0F98L,0L,-10L},{0x0F98L,0L,-10L},{0x0F98L,0L,-10L},{0x0F98L,0L,-10L}},{{0x0F98L,0L,-10L},{0x0F98L,0L,-10L},{0x0F98L,0L,-10L},{0x0F98L,0L,-10L},{0x0F98L,0L,-10L},{0x0F98L,0L,-10L}},{{0x0F98L,0L,-10L},{0x0F98L,0L,-10L},{0x0F98L,0L,-10L},{0x0F98L,0L,-10L},{0x0F98L,0L,-10L},{0x0F98L,0L,-10L}},{{0x0F98L,0L,-10L},{0x0F98L,0L,-10L},{0x0F98L,0L,-10L},{0x0F98L,0L,-10L},{0x0F98L,0L,-10L},{0x0F98L,0L,-10L}}}};
            unsigned char *l_615 = &g_94[4];
            short l_647 = 0x0428L;
            short *l_650 = &g_112.f2;
            unsigned *l_678 = &g_372[5][6][2];
            unsigned char ***l_682 = &g_680[1][0][1];
            char ***l_699 = &g_298;
            int l_733 = 0x8BE5ECFBL;
            int i, j, k;
            for (i = 0; i < 2; i++)
                l_550[i] = (void*)0;
            for (i = 0; i < 4; i++)
                l_596[i] = 1L;
            for (i = 0; i < 6; i++)
                l_608[i] = &g_44[3][1];
            for (g_152 = 0; (g_152 >= 49); ++g_152)
            {
                char l_562 = 1L;
                short l_576 = 0x0899L;
                struct S1 l_577 = {0xF569L};
                int l_585 = 0x694AF2D0L;
                short l_592 = 0x86FEL;
                (*l_534) = 0xBE726E59L;
                if ((*g_97))
                    break;
                (*g_97) &= l_547;
                if ((safe_sub_func_int32_t_s_s(l_547, ((l_550[0] != ((255UL & (safe_lshift_func_int16_t_s_u((-5L), 0))) , &l_537[2])) >= (safe_mul_func_uint8_t_u_u((safe_add_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s((l_559 != l_560[0]), g_302)), ((l_561 != 4294967295UL) < l_561))), 0x70L))))))
                {
                    (*g_97) = l_547;
                }
                else
                {
                    struct S1 l_569 = {0x2464L};
                    int *l_580 = (void*)0;
                    unsigned l_591[9][3][2] = {{{0xE252D31AL,0x5D27EC53L},{1UL,0x3F02EBE5L},{0x8F361103L,0UL}},{{4294967290UL,4294967290UL},{0xC58E6B42L,0x056B84ABL},{0x694510BCL,0xC26F4A1AL}},{{0xB27CA392L,0xCBFB6770L},{0x5D27EC53L,0xB27CA392L},{0x8F361103L,0xE252D31AL}},{{0x8F361103L,0xB27CA392L},{0x5D27EC53L,0xCBFB6770L},{0xB27CA392L,1UL}},{{0x3F02EBE5L,4294967295UL},{0x694510BCL,0xE252D31AL},{0xE252D31AL,0x2866B4ADL}},{{4294967295UL,0x056B84ABL},{0xB27CA392L,0x0F034C55L},{0xC26F4A1AL,0x655FD144L}},{{9UL,0xE252D31AL},{7UL,0x6AC8422AL},{0x03D50E7FL,0UL}},{{0xB27CA392L,0UL},{0x03D50E7FL,0x6AC8422AL},{7UL,0xE252D31AL}},{{9UL,0x655FD144L},{0xC26F4A1AL,0x0F034C55L},{0xB27CA392L,0x056B84ABL}}};
                    int i, j, k;
                    if ((l_562 < (safe_mul_func_int8_t_s_s(1L, (safe_add_func_uint8_t_u_u((((g_567 == ((l_569 = l_568) , l_570)) == (l_572 && (safe_mod_func_int8_t_s_s(l_561, ((g_372[4][6][0] < ((safe_unary_minus_func_uint32_t_u((func_13((*l_527)) , l_562))) == l_561)) , l_576))))) == g_94[4]), (*l_534)))))))
                    {
                        unsigned short l_578[6] = {0xB2E0L,0xB114L,0xB2E0L,0xB2E0L,0xB114L,0xB2E0L};
                        int i;
                        (*l_541) = l_577;
                        return l_578[3];
                    }
                    else
                    {
                        int **l_581 = (void*)0;
                        int *l_582[1][3];
                        int i, j;
                        for (i = 0; i < 1; i++)
                        {
                            for (j = 0; j < 3; j++)
                                l_582[i][j] = &g_535;
                        }
                        if (l_579)
                            break;
                        l_582[0][0] = l_580;


                        (*l_527) = func_13((((l_585 &= ((safe_mod_func_uint8_t_u_u(g_282.f2, g_411.f0)) && ((l_537[3] = (void*)0) == &l_577))) || (((***g_297) = ((*g_143) = (safe_sub_func_uint16_t_u_u(((&l_527 == l_588[3][3][0]) < 3UL), (((safe_mul_func_uint16_t_u_u(l_585, ((*l_534) < l_577.f0))) , l_591[4][1][1]) , l_592))))) < 0xC5L)) , l_593[2]));
                    }
                }
            }
            for (l_579 = 0; (l_579 == (-24)); l_579 = safe_sub_func_int32_t_s_s(l_579, 4))
            {
                struct S1 l_607 = {0UL};
                if (l_596[3])
                {
                    return (*g_97);
                }
                else
                {
                    int l_601 = 0xA88A0F4EL;
                    for (g_282.f2 = (-19); (g_282.f2 != (-26)); g_282.f2 = safe_sub_func_int16_t_s_s(g_282.f2, 1))
                    {
                        struct S1 *l_600 = &l_568;
                        int l_604 = 0x248036C4L;
                        (*l_534) &= (l_599 == l_600);
                        (*g_97) = l_601;
                        (*l_534) = (safe_sub_func_int8_t_s_s(l_604, (g_34 , 0x14L)));
                    }
                    (*l_534) |= (*g_97);
                }
                (*g_97) ^= func_16(g_65);
                for (g_282.f1 = 0; (g_282.f1 == 12); g_282.f1 = safe_add_func_int32_t_s_s(g_282.f1, 7))
                {
                    (*l_534) |= (((*l_541) = l_607) , (*g_97));
                }
            }
            if ((func_73(l_608[3], (**g_301), g_282, &l_532) , ((safe_add_func_uint32_t_u_u((l_593[2].f1 = ((((((***g_297) = (*g_143)) && (safe_unary_minus_func_uint8_t_u((~(safe_mod_func_uint32_t_u_u(l_593[2].f1, (l_616 &= (l_614[0][3][2] , (((((*l_615) |= func_16(((-1L) == l_593[2].f1))) != g_112.f0) , (*l_534)) > 0xB999L))))))))) >= l_561) ^ 6L) <= 0x9011L)), (-1L))) & l_596[1])))
            {
                int *l_619 = (void*)0;
                unsigned l_652 = 18446744073709551615UL;
                struct S0 l_675 = {0x799EL,0xA77398B3L,0xAB75L};
                short l_692 = 0xCDD0L;
                for (l_568.f0 = (-19); (l_568.f0 <= 31); l_568.f0 = safe_add_func_uint16_t_u_u(l_568.f0, 5))
                {
                    char l_648[3];
                    unsigned l_651 = 0xB5C66CB2L;
                    int i;
                    for (i = 0; i < 3; i++)
                        l_648[i] = 0xA0L;
                    l_619 = &g_535;

                    ;
                    for (g_112.f2 = 21; (g_112.f2 > (-23)); g_112.f2 = safe_sub_func_uint8_t_u_u(g_112.f2, 6))
                    {
                        unsigned l_630[9] = {0xFBA6FBE8L,0UL,0xFBA6FBE8L,0xFBA6FBE8L,0UL,0xFBA6FBE8L,0xFBA6FBE8L,0UL,0xFBA6FBE8L};
                        unsigned l_633[5];
                        unsigned **l_635 = (void*)0;
                        unsigned ***l_634 = &l_635;
                        short *l_649[8][1] = {{&g_112.f0},{(void*)0},{&g_112.f0},{(void*)0},{&g_112.f0},{(void*)0},{&g_112.f0},{(void*)0}};
                        int i, j;
                        for (i = 0; i < 5; i++)
                            l_633[i] = 18446744073709551611UL;
                        (*g_97) = (((safe_mod_func_uint16_t_u_u(((((*g_97) , (safe_mod_func_uint32_t_u_u((((safe_lshift_func_int16_t_s_s((l_616 = (((((safe_lshift_func_uint16_t_u_s(l_630[8], (safe_mul_func_uint8_t_u_u(l_633[0], (((*l_634) = &g_148[8][2][3]) != ((((((safe_add_func_int32_t_s_s(g_638, ((*l_619) = (safe_sub_func_uint32_t_u_u(((((safe_lshift_func_int8_t_s_u((safe_rshift_func_uint16_t_u_s((l_645 != (((void*)0 == &g_112) , &l_646)), g_44[3][1])), 7)) == 0x4F31L) > 0x4D86060AL) < 1L), (*g_97)))))) ^ g_638) == 2UL) ^ g_34) , 0x63L) , (void*)0)))))) , (-10L)) == l_647) || l_648[2]) & l_593[2].f1)), 11)) , &l_647) != l_650), l_651))) , l_561) , 0x44E8L), l_652)) , g_282.f1) >= 6L);

                        ;
                    }
                }

                ;
                for (g_411.f0 = 0; (g_411.f0 <= 6); g_411.f0 += 1)
                {
                    struct S1 l_653[7][4][1] = {{{{1UL}},{{65526UL}},{{1UL}},{{0UL}}},{{{0xA216L}},{{0xA216L}},{{0UL}},{{1UL}}},{{{65526UL}},{{1UL}},{{0UL}},{{0xA216L}}},{{{0xA216L}},{{0UL}},{{1UL}},{{65526UL}}},{{{1UL}},{{0UL}},{{0xA216L}},{{0xA216L}}},{{{0UL}},{{1UL}},{{65526UL}},{{1UL}}},{{{0UL}},{{0xA216L}},{{0xA216L}},{{0UL}}}};
                    unsigned *l_662 = (void*)0;
                    unsigned **l_661 = &l_662;
                    unsigned **l_670 = (void*)0;
                    unsigned ***l_669 = &l_670;
                    unsigned ****l_673 = &g_671;
                    int *l_677[4][6][2] = {{{&g_282.f1,&l_593[2].f1},{&l_593[2].f1,&g_112.f1},{&g_282.f1,&g_282.f1},{&g_112.f1,&l_593[2].f1},{&g_282.f1,&l_593[2].f1},{&g_112.f1,&g_282.f1}},{{&g_282.f1,&g_112.f1},{&l_593[2].f1,&g_282.f1},{&l_593[2].f1,&g_112.f1},{&g_282.f1,&g_282.f1},{&g_112.f1,&l_593[2].f1},{&g_282.f1,&l_593[2].f1}},{{&g_112.f1,&g_282.f1},{&g_282.f1,&g_112.f1},{&l_593[2].f1,&g_282.f1},{&l_593[2].f1,&g_112.f1},{&g_282.f1,&g_282.f1},{&g_112.f1,&l_593[2].f1}},{{&g_282.f1,&l_593[2].f1},{&g_112.f1,&g_282.f1},{&g_282.f1,&g_112.f1},{&l_593[2].f1,&g_282.f1},{&l_593[2].f1,&g_112.f1},{&g_282.f1,&g_282.f1}}};
                    int i, j, k;
                }
                (*g_97) = (func_73((*g_672), (**g_297), g_282, l_678) <= (g_679[6] == (l_682 = &g_680[1][0][1])));
                for (l_532 = (-4); (l_532 != 36); l_532++)
                {
                    unsigned *l_702 = &g_372[5][6][2];
                    int l_703 = 0x940B6508L;
                    struct S1 l_713 = {1UL};
                    l_703 &= ((safe_sub_func_uint32_t_u_u(func_73((*g_672), (func_8(g_687, (safe_add_func_int32_t_s_s(((**l_701) = (((((l_674[4][0] || (l_692 > l_674[3][1])) & l_561) , (safe_lshift_func_uint8_t_u_u(((safe_sub_func_uint32_t_u_u(l_561, (*l_534))) , (safe_add_func_uint16_t_u_u(((((&g_298 != l_699) || l_596[3]) , l_700[4][1]) == &l_701), l_614[0][3][2].f1))), (*g_681)))) , (void*)0) == &g_335)), 0x651B2AD5L))) , (**g_297)), l_593[2], l_702), 1UL)) && (*l_534));
                    (*g_97) = (*g_97);
                    for (g_112.f0 = 1; (g_112.f0 >= 0); g_112.f0 -= 1)
                    {
                        unsigned *l_710 = &l_561;
                        struct S1 *l_711 = (void*)0;
                        int i;
                        l_714 = ((safe_add_func_int8_t_s_s((safe_add_func_uint16_t_u_u((g_282 , (safe_mod_func_uint32_t_u_u((func_73(l_710, (*g_298), func_8(l_711, (**g_298)), l_608[1]) , ((*l_678) = l_703)), g_712))), (**l_701))), l_703)) , l_713);
                    }
                    if ((*g_97))
                        continue;
                }
            }
            else
            {
                unsigned *l_721 = &l_572;
                struct S1 ****l_724 = &g_334;
                unsigned short *l_725 = &g_2.f0;
                (*g_97) &= func_54(l_715, (*l_534));
                (**l_701) = (((*l_678) = (safe_add_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u(((*l_725) = (((l_720 >= (~l_547)) , func_78(&g_535, l_721, (*g_97), func_57(((*l_725) = (safe_sub_func_int16_t_s_s((l_724 == l_724), g_282.f1))), l_608[3]))) == l_676)), g_282.f1)), 0x1CL))) != l_579);
                g_282.f1 |= ((((safe_add_func_int16_t_s_s(((0x3BL > (((((*g_143) = ((***l_699) = (safe_rshift_func_uint16_t_u_s((safe_add_func_int16_t_s_s(g_372[0][0][2], (*l_534))), 9)))) > (((*g_97) = (g_112.f1 != (&l_646 == ((*l_682) = l_732[9])))) != (0x7584L || (func_16((((*l_650) = l_733) || 2L)) & 9UL)))) >= l_596[2]) != 0x01L)) || (*l_534)), 0xA8EBL)) <= (*g_681)) & (**l_701)) != l_568.f0);
            }
        }
        g_112.f1 ^= ((((*l_741) = (((safe_add_func_int32_t_s_s((safe_unary_minus_func_int8_t_s((safe_lshift_func_uint8_t_u_u((g_44[3][1] >= (g_112.f2 &= 0x7D45L)), l_740)))), ((~((*g_681) = func_73((**g_671), (**g_297), g_282, &l_561))) || (*l_534)))) , &g_298) != l_533[2])) | 65530UL) | g_271);
    }




    return l_742;
}







static struct S1 * func_3(struct S0 p_4, unsigned p_5, int p_6, char p_7)
{
    struct S1 *l_536 = &g_2;
    return l_536;


}







static struct S0 func_8(struct S1 * p_9, char p_10)
{
    unsigned char l_12[5] = {0xADL,0xADL,0xADL,0xADL,0xADL};
    unsigned l_462[10] = {8UL,8UL,8UL,8UL,8UL,8UL,8UL,8UL,8UL,8UL};
    int *l_463 = &g_112.f1;
    int l_467 = 0x53D8A287L;
    struct S0 l_471 = {3L,-1L,6L};
    struct S1 *l_483 = &g_411;
    unsigned *l_503 = &g_44[0][0];
    struct S0 *l_508 = &l_471;
    int i;
    for (p_10 = 4; (p_10 >= 0); p_10 -= 1)
    {
        struct S0 l_15 = {0x9CB0L,9L,0xDF11L};
        unsigned char *l_458 = (void*)0;
        short *l_459 = (void*)0;
        short *l_460 = (void*)0;
        short *l_461 = &l_15.f0;
        int *l_464 = (void*)0;
        int *l_465 = (void*)0;
        int *l_466 = (void*)0;
        unsigned char *l_480[3][4][9] = {{{&l_12[p_10],&l_12[p_10],&g_94[0],&g_94[0],(void*)0,&l_12[p_10],&l_12[p_10],(void*)0,&g_94[0]},{&l_12[p_10],(void*)0,&l_12[p_10],&g_94[0],&l_12[p_10],&g_302,&l_12[p_10],&l_12[p_10],&l_12[p_10]},{&l_12[p_10],&l_12[p_10],&g_94[4],&g_94[0],&l_12[p_10],(void*)0,&l_12[p_10],&l_12[p_10],(void*)0},{&l_12[p_10],&l_12[p_10],&g_94[0],&g_94[0],(void*)0,&l_12[p_10],&l_12[p_10],(void*)0,&l_12[p_10]}},{{&l_12[p_10],&l_12[p_10],&l_12[p_10],&l_12[p_10],&l_12[p_10],&g_94[0],&g_94[4],&l_12[p_10],&g_302},{&l_12[p_10],&l_12[p_10],(void*)0,&l_12[p_10],&l_12[p_10],&l_12[p_10],&g_94[4],&l_12[p_10],(void*)0},{&l_12[p_10],&l_12[p_10],&g_94[0],&l_12[p_10],&l_12[p_10],&g_94[4],&g_94[4],&l_12[p_10],&l_12[p_10]},{&l_12[p_10],&l_12[p_10],&l_12[p_10],&l_12[p_10],&l_12[p_10],&g_94[0],&g_94[4],&l_12[p_10],&g_302}},{{&l_12[p_10],&l_12[p_10],(void*)0,&l_12[p_10],&l_12[p_10],&l_12[p_10],&g_94[4],&l_12[p_10],(void*)0},{&l_12[p_10],&l_12[p_10],&g_94[0],&l_12[p_10],&l_12[p_10],&g_94[4],&g_94[4],&l_12[p_10],&l_12[p_10]},{&l_12[p_10],&l_12[p_10],&l_12[p_10],&l_12[p_10],&l_12[p_10],&g_94[0],&g_94[4],&l_12[p_10],&g_302},{&l_12[p_10],&l_12[p_10],(void*)0,&l_12[p_10],&l_12[p_10],&l_12[p_10],&g_94[4],&l_12[p_10],(void*)0}}};
        unsigned *l_484 = (void*)0;
        unsigned *l_485 = &g_44[3][1];
        unsigned *l_486 = (void*)0;
        unsigned *l_487 = &g_372[0][1][0];
        int *l_488 = &g_34;
        struct S1 **l_489[2][7] = {{(void*)0,&g_99[1],(void*)0,&l_483,&g_99[1],&g_99[1],&l_483},{(void*)0,&g_99[1],(void*)0,&l_483,&g_99[1],&g_99[1],&l_483}};
        unsigned short *l_490 = &g_411.f0;
        unsigned l_491 = 2UL;
        short l_526 = 0L;
        int i, j, k;
        g_282 = func_13(l_15);
        l_467 &= ((((((((safe_rshift_func_uint16_t_u_s((((*l_461) = (safe_mod_func_int32_t_s_s((l_15.f1 = l_12[p_10]), (safe_add_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u(((safe_rshift_func_uint16_t_u_s((p_10 != ((*g_97) > 4294967289UL)), 7)) == (g_94[4] &= p_10)), 10)), (func_54(p_9, (0x79273565L == func_54(p_9, l_12[0]))) < p_10)))))) == g_186[1][2][1]), l_462[9])) ^ p_10) , (void*)0) != l_463) & (*l_463)) , (*l_463)) > p_10) == p_10);
        for (g_112.f1 = 0; (g_112.f1 >= 29); g_112.f1 = safe_add_func_uint32_t_u_u(g_112.f1, 8))
        {
            struct S0 l_470[9][1] = {{{0xA165L,1L,0xAE71L}},{{0L,0x89C0ED1AL,0L}},{{0xA165L,1L,0xAE71L}},{{0L,0x89C0ED1AL,0L}},{{0xA165L,1L,0xAE71L}},{{0L,0x89C0ED1AL,0L}},{{0xA165L,1L,0xAE71L}},{{0L,0x89C0ED1AL,0L}},{{0xA165L,1L,0xAE71L}}};
            int i, j;
            if (p_10)
            {
                return l_470[3][0];
            }
            else
            {
                return l_471;
            }
        }
    }
    return g_112;
}







static struct S0 func_13(struct S0 p_14)
{
    int l_26 = 3L;
    int *l_29 = &l_26;
    int *l_30 = &g_31;
    unsigned short l_35 = 65535UL;
    struct S1 *l_37[2][9] = {{&g_2,&g_2,&g_2,&g_2,&g_2,&g_2,&g_2,&g_2,&g_2},{&g_2,&g_2,&g_2,&g_2,&g_2,&g_2,&g_2,&g_2,&g_2}};
    short l_38 = 0xA1E2L;
    char *l_72 = &g_65;
    struct S0 l_393 = {0x1C95L,0x1C377F9DL,-1L};
    unsigned char *l_397 = &g_94[1];
    unsigned char **l_396 = &l_397;
    unsigned **l_446 = (void*)0;
    unsigned **l_447 = &g_148[8][2][3];
    int i, j;
    l_38 = (func_16(g_2.f0) < (safe_add_func_uint8_t_u_u(((p_14.f1 = ((*l_30) |= ((*l_29) = (safe_mod_func_int16_t_s_s(l_26, (safe_lshift_func_uint8_t_u_s(0xBEL, 6))))))) == (safe_add_func_uint32_t_u_u(((((((((((g_34 ^= 0x2FL) , g_34) > l_35) & (safe_unary_minus_func_uint32_t_u(g_2.f0))) , (void*)0) != l_37[1][4]) || 6L) & p_14.f0) || p_14.f0) == p_14.f0), g_2.f0))), g_2.f0)));
    for (l_38 = 20; (l_38 < 5); l_38--)
    {
        unsigned short l_41 = 65535UL;
        unsigned *l_42 = (void*)0;
        unsigned *l_43 = &g_44[3][1];
        int l_190 = 0x9CF0709EL;
        unsigned *l_421 = &g_152;
    }
    g_97 = &g_31;

    ;
    (*g_97) ^= p_14.f0;
    return l_393;
}







static short func_16(short p_17)
{
    for (p_17 = (-21); (p_17 <= (-14)); p_17++)
    {
        unsigned short l_20 = 65530UL;
        g_21 ^= l_20;
    }
    return p_17;
}







static short func_54(struct S1 * p_55, unsigned short p_56)
{
    unsigned *l_380 = (void*)0;
    char *l_381 = (void*)0;
    struct S0 l_382 = {0x8290L,-2L,0x5DE9L};
    int *l_383 = (void*)0;
    struct S1 *l_384 = &g_2;
    int *l_385 = &l_382.f1;
    for (g_65 = 0; (g_65 <= 7); g_65 += 1)
    {
        struct S0 *l_375 = &g_282;
        struct S0 **l_376 = &l_375;
        int l_377 = 0xA5321530L;
        for (g_34 = 2; (g_34 <= 7); g_34 += 1)
        {
            if (p_56)
                break;
        }
        (*l_376) = l_375;
        return l_377;
    }
    (*l_385) = (safe_mul_func_int8_t_s_s((g_65 < p_56), p_56));
    return g_65;
}







static struct S1 * func_57(unsigned short p_58, unsigned * p_59)
{
    unsigned l_373 = 0x87285B82L;
    struct S1 *l_374 = &g_2;
    l_373 ^= p_58;
    return l_374;


}







static char func_66(char p_67, char * p_68)
{
    struct S1 **l_212[5];
    struct S1 ***l_211 = &l_212[0];
    int l_225 = 1L;
    char ***l_299 = &g_298;
    int *l_369[5];
    int i;
    for (i = 0; i < 5; i++)
        l_212[i] = &g_99[1];
    for (i = 0; i < 5; i++)
        l_369[i] = (void*)0;
    for (g_31 = 24; (g_31 >= 15); --g_31)
    {
        struct S1 **l_206 = &g_99[1];
        struct S1 ***l_205 = &l_206;
        struct S1 ***l_207 = (void*)0;
        int l_208 = 0x4D15D3D0L;
        int ***l_247 = (void*)0;
        struct S0 l_250 = {9L,0x2DCF4C4EL,-1L};
        unsigned char *l_294 = &g_94[4];
        int **l_370[1][5];
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 5; j++)
                l_370[i][j] = &g_97;
        }
        for (g_152 = 0; (g_152 <= 4); g_152 += 1)
        {
            int i;
            return g_94[g_152];
        }
        if (p_67)
            break;
        for (g_2.f0 = 0; (g_2.f0 != 35); g_2.f0++)
        {
            char **l_200 = &g_185;
            char ***l_199 = &l_200;
            struct S1 l_248 = {0UL};
            int *l_253 = &l_225;
            struct S0 l_258 = {0L,-2L,3L};
            struct S1 l_288 = {65535UL};
            struct S1 *l_342 = (void*)0;
            struct S1 l_366 = {1UL};
            if (((safe_mod_func_uint8_t_u_u((((*l_199) = &g_185) != &g_185), (safe_sub_func_uint16_t_u_u((safe_mul_func_int8_t_s_s(func_16(p_67), ((l_205 == l_207) != 0x8F1CL))), l_208)))) || (&g_65 != (void*)0)))
            {
                struct S1 ****l_213 = &l_207;
                int l_214 = 0x9D2C9FDBL;
                struct S1 l_249 = {1UL};
                int l_251 = (-10L);
                unsigned l_303 = 0x7CBACDE2L;
                if ((safe_rshift_func_uint16_t_u_s(((((*l_213) = l_211) != &l_212[3]) & 0xDE6BL), l_214)))
                {
                    int **l_227 = &g_97;
                    int ***l_226 = &l_227;
                    int *l_230 = (void*)0;
                    int *l_231 = &g_112.f1;
                    int *l_232 = &l_208;
                    short *l_235 = &g_112.f2;
                    unsigned *l_246 = (void*)0;
                    unsigned char *l_252 = &g_94[4];
                    int *l_254[2][4][5] = {{{&l_251,&l_251,&l_251,&l_251,&l_251},{&l_251,&l_251,&l_251,&l_251,&l_251},{&l_251,&l_251,&l_251,&l_251,&l_251},{&l_251,&l_251,&l_251,&l_251,&l_251}},{{&l_251,&l_251,&l_251,&l_251,&l_251},{&l_251,&l_251,&l_251,&l_251,&l_251},{&l_251,&l_251,&l_251,&l_251,&l_251},{&l_251,&l_251,&l_251,&l_251,&l_251}}};
                    int i, j, k;
                    (*l_232) &= (((*l_231) = (safe_mod_func_int8_t_s_s((+(safe_lshift_func_int8_t_s_s((safe_add_func_uint16_t_u_u(p_67, ((safe_rshift_func_int16_t_s_s(func_16((safe_rshift_func_uint16_t_u_u(l_225, (&g_97 != ((*l_226) = &g_97))))), g_94[1])) || (safe_mul_func_uint8_t_u_u((***l_226), l_214))))), (*p_68)))), g_112.f2))) & 1UL);
                    (*l_232) = (safe_rshift_func_int16_t_s_s(func_16(((*l_235) |= 1L)), 4));
                    if (p_67)
                        continue;
                    if (((safe_mod_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s(((*l_252) ^= (((safe_lshift_func_uint16_t_u_s((((safe_lshift_func_int16_t_s_s((safe_mul_func_int8_t_s_s((*g_143), ((((l_214 = p_67) < (l_225 = (((void*)0 != l_247) && (l_251 = ((5L && (func_16(func_16(((l_249 = l_248) , ((*l_235) |= (l_250 , g_152))))) >= 6L)) , p_67))))) <= p_67) , g_2.f0))), p_67)) & l_248.f0) | p_67), 13)) && (-1L)) , g_186[1][2][0])), (*g_143))), g_44[9][0])) || (*l_232)))
                    {
                        l_253 = &g_31;

                        ;
                        l_254[0][2][2] = (*l_227);


                        l_214 |= (*g_97);
                    }
                    else
                    {
                        int l_257 = (-1L);
                        struct S0 *l_259 = &l_250;
                        (*l_253) = (safe_mul_func_uint8_t_u_u(g_44[3][1], func_16((l_257 < ((*l_232) > (*g_185))))));
                        (**l_226) = (void*)0;

                        ;
                        (*l_253) &= g_94[1];
                        (*l_259) = l_258;
                    }

                    ;
                    ;

                }
                else
                {
                    unsigned short l_269 = 0xFDAFL;
                    int l_305 = (-1L);
                    if ((*g_97))
                        break;
                    for (g_112.f0 = 0; (g_112.f0 < (-4)); g_112.f0 = safe_sub_func_uint16_t_u_u(g_112.f0, 7))
                    {
                        short *l_266[4] = {&g_112.f2,&g_112.f2,&g_112.f2,&g_112.f2};
                        int l_267 = 0x721220F7L;
                        int *l_268[10] = {&l_208,&l_208,&l_208,&l_250.f1,&l_208,&l_208,&l_208,&l_208,&l_250.f1,&l_208};
                        unsigned *l_270 = &g_271;
                        unsigned char *l_280 = &g_94[4];
                        struct S0 l_281 = {0L,0x598EF82AL,0x74ACL};
                        int i;
                        g_282 = ((((*l_270) &= ((safe_rshift_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u(g_65, (l_251 = (l_267 = 0xB14CL)))), ((void*)0 != l_268[6]))) && (l_269 = 0xD3A7C03DL))) > (safe_mod_func_int16_t_s_s((safe_sub_func_int8_t_s_s(((safe_add_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u(((*l_280) &= p_67), 0)), g_112.f1)) > g_31), g_112.f0)), g_112.f2))) , l_281);
                        return l_269;
                    }
                    for (l_258.f0 = 15; (l_258.f0 == 25); l_258.f0++)
                    {
                        int l_285 = 0xD0A81A91L;
                        struct S0 *l_291 = &g_282;
                        char ****l_300[10] = {&g_297,&l_199,&l_199,&g_297,&l_199,&l_199,&g_297,&l_199,&l_199,&g_297};
                        int *l_304[2][2];
                        int **l_306 = &g_97;
                        int i, j;
                        for (i = 0; i < 2; i++)
                        {
                            for (j = 0; j < 2; j++)
                                l_304[i][j] = &l_258.f1;
                        }
                        l_305 &= ((*l_253) = ((l_285 , (safe_lshift_func_uint8_t_u_u(((((l_288 , (safe_sub_func_uint32_t_u_u((l_291 != ((safe_sub_func_int8_t_s_s(((((((l_269 , (*p_68)) & ((&g_94[2] == l_294) == (safe_rshift_func_uint8_t_u_s(func_16((((g_302 = (g_297 != (g_301 = l_299))) ^ p_67) < (**g_298))), l_303)))) , g_282) , 0x4DL) > 250UL) <= l_285), l_251)) , (void*)0)), p_67))) || p_67) , 0x62L) ^ p_67), p_67))) >= (*l_253)));
                        (*l_306) = &g_31;
                        (*l_253) = (l_305 = (((**l_200) |= (-1L)) || (~(*p_68))));
                    }
                    if ((*g_97))
                    {
                        unsigned l_307 = 5UL;
                        if (l_307)
                            break;
                        return l_307;
                    }
                    else
                    {
                        int **l_308 = &g_97;
                        if (p_67)
                            break;
                        (*l_308) = (void*)0;

                        ;
                    }

                    ;
                }

                ;
                ;
                ;
                for (g_112.f0 = 0; (g_112.f0 != 11); g_112.f0 = safe_add_func_uint32_t_u_u(g_112.f0, 9))
                {
                    int *l_314 = (void*)0;
                    int l_326 = 1L;
                    for (g_21 = 18; (g_21 < 30); g_21++)
                    {
                        int *l_313[1][4][10] = {{{(void*)0,(void*)0,&l_258.f1,&l_214,&l_258.f1,(void*)0,(void*)0,&l_258.f1,&l_214,&l_258.f1},{(void*)0,(void*)0,&l_214,(void*)0,&l_214,(void*)0,(void*)0,&l_214,(void*)0,&l_214},{(void*)0,(void*)0,&l_214,(void*)0,&l_214,(void*)0,(void*)0,&l_214,(void*)0,&l_214},{(void*)0,(void*)0,&l_214,(void*)0,&l_214,(void*)0,(void*)0,&l_214,(void*)0,&l_214}}};
                        int **l_317 = (void*)0;
                        int **l_318 = &g_97;
                        int **l_319 = &l_313[0][0][5];
                        int i, j, k;
                        l_314 = l_313[0][0][4];
                        l_258.f1 = (safe_add_func_int32_t_s_s(p_67, (0x392BL || g_34)));
                        (*l_319) = ((*l_318) = &g_31);

                        ;

                        l_258.f1 &= (safe_mod_func_int8_t_s_s((*p_68), l_249.f0));
                    }

                    ;
                    for (g_282.f2 = 0; (g_282.f2 > 0); g_282.f2 = safe_add_func_uint8_t_u_u(g_282.f2, 1))
                    {
                        int *l_324[10][7][3] = {{{(void*)0,&g_282.f1,(void*)0},{(void*)0,&l_258.f1,&g_282.f1},{&l_258.f1,&g_112.f1,&g_112.f1},{&l_258.f1,&l_258.f1,&l_214},{&l_208,&g_282.f1,&l_258.f1},{(void*)0,(void*)0,&g_112.f1},{(void*)0,&l_250.f1,&g_282.f1}},{{&g_112.f1,(void*)0,&g_112.f1},{&g_31,&l_225,&l_258.f1},{&l_208,&l_214,&l_214},{&l_250.f1,&l_208,&g_112.f1},{&g_282.f1,&g_282.f1,&g_282.f1},{&l_250.f1,&g_282.f1,(void*)0},{&l_208,&l_225,&l_258.f1}},{{&g_31,(void*)0,&l_250.f1},{&g_112.f1,&l_214,(void*)0},{(void*)0,(void*)0,&g_112.f1},{(void*)0,&l_225,(void*)0},{&l_208,&g_282.f1,&l_258.f1},{&l_258.f1,&g_282.f1,&l_225},{&l_258.f1,&l_208,&l_258.f1}},{{(void*)0,&l_214,(void*)0},{(void*)0,&l_225,(void*)0},{(void*)0,&g_112.f1,&l_214},{&l_258.f1,&g_282.f1,&g_282.f1},{(void*)0,&g_282.f1,(void*)0},{&l_208,&l_225,&g_112.f1},{&l_225,(void*)0,(void*)0}},{{&g_31,(void*)0,&g_112.f1},{(void*)0,(void*)0,&l_208},{&l_258.f1,&l_225,(void*)0},{&g_112.f1,&g_282.f1,(void*)0},{&g_112.f1,&g_282.f1,&l_225},{(void*)0,&g_112.f1,(void*)0},{&g_282.f1,&l_250.f1,(void*)0}},{{(void*)0,&g_282.f1,&l_208},{&g_282.f1,&l_258.f1,&g_112.f1},{(void*)0,(void*)0,(void*)0},{&g_282.f1,&g_31,&g_112.f1},{(void*)0,&l_214,(void*)0},{&g_282.f1,&g_112.f1,&g_282.f1},{(void*)0,&l_208,&l_214}},{{&g_112.f1,&g_112.f1,(void*)0},{&g_112.f1,&l_214,&l_258.f1},{&l_258.f1,&g_31,&g_31},{(void*)0,(void*)0,&l_214},{&g_31,&l_258.f1,&g_31},{&l_225,&g_282.f1,&l_258.f1},{&l_208,&l_250.f1,(void*)0}},{{(void*)0,&g_112.f1,&l_214},{&l_258.f1,&g_282.f1,&g_282.f1},{(void*)0,&g_282.f1,(void*)0},{&l_208,&l_225,&g_112.f1},{&l_225,(void*)0,(void*)0},{&g_31,&l_208,(void*)0},{&l_214,&l_214,(void*)0}},{{&g_31,&l_250.f1,&g_112.f1},{(void*)0,(void*)0,&l_225},{&g_112.f1,&g_31,&l_250.f1},{&l_225,(void*)0,&l_225},{&l_225,&g_282.f1,&g_112.f1},{&g_112.f1,(void*)0,(void*)0},{&g_31,&g_31,(void*)0}},{{&l_258.f1,&g_282.f1,&g_282.f1},{&g_31,&l_258.f1,&g_112.f1},{&g_112.f1,&g_282.f1,&l_214},{&l_225,&g_112.f1,&g_31},{&l_225,(void*)0,&l_208},{&g_112.f1,&g_112.f1,&l_208},{(void*)0,&g_282.f1,(void*)0}}};
                        int i, j, k;
                        g_112.f1 |= func_16(p_67);
                        l_326 ^= (safe_unary_minus_func_uint8_t_u(p_67));
                        if (p_67)
                            continue;
                    }
                }
            }
            else
            {
                unsigned *l_329 = &g_152;
                struct S1 *l_341 = &l_248;
                int l_343 = 0xF33E96E9L;
                if ((safe_rshift_func_uint16_t_u_u((((*l_294) = (l_250 , ((void*)0 == l_329))) ^ (((**l_205) == ((safe_sub_func_uint8_t_u_u(255UL, (*g_143))) , (l_342 = ((safe_mul_func_uint16_t_u_u((g_334 != (g_335 = &l_206)), (safe_add_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s(l_225, g_65)), 65535UL)))) , l_341)))) , p_67)), g_282.f1)))
                {
                    (*l_253) = l_343;
                }
                else
                {
                    unsigned l_346 = 18446744073709551606UL;
                    unsigned short *l_351 = (void*)0;
                    unsigned short *l_352 = &l_288.f0;
                    unsigned short *l_353 = &l_248.f0;
                    unsigned *l_354 = &g_271;
                    int *l_355 = (void*)0;
                    int *l_356[4] = {&l_250.f1,&l_250.f1,&l_250.f1,&l_250.f1};
                    struct S1 ****l_359 = &l_207;
                    struct S1 ****l_361 = &l_207;
                    struct S1 *****l_360 = &l_361;
                    unsigned *l_365[4][3][1] = {{{&g_152},{&g_152},{(void*)0}},{{&g_152},{&g_152},{&g_152}},{{&g_152},{(void*)0},{&g_152}},{{&g_152},{&g_152},{&g_152}}};
                    int i, j, k;
                    g_112.f1 ^= (((*l_354) |= (p_67 <= ((((*l_342) , &p_67) != (**g_297)) , (safe_lshift_func_uint16_t_u_s(((*l_353) = (((((l_346 > (safe_mod_func_uint16_t_u_u(((*l_352) = (p_67 >= (func_16((*l_253)) < (safe_mod_func_uint32_t_u_u(p_67, (*l_253)))))), g_31))) == 255UL) <= g_186[1][7][3]) || (*l_253)) , 0x970DL)), g_186[1][5][3]))))) , (-4L));
                    for (l_258.f1 = 0; (l_258.f1 == (-23)); l_258.f1 = safe_sub_func_int16_t_s_s(l_258.f1, 1))
                    {
                        (*l_253) = ((*p_68) , (func_16(p_67) & p_67));
                    }
                    if ((l_359 == ((*l_360) = l_359)))
                    {
                        unsigned **l_362 = &l_329;
                        struct S1 l_367 = {65533UL};
                        (*l_253) = (func_16((((*l_362) = &g_21) != ((safe_rshift_func_int16_t_s_u(0L, 10)) , l_365[3][2][0]))) , p_67);

                        ;
                        l_367 = l_366;
                        g_97 = &l_343;

                        ;
                    }
                    else
                    {
                        int **l_368 = &l_356[3];
                        (*l_253) ^= p_67;
                        (*l_368) = &g_31;


                        if ((*g_97))
                            break;
                    }

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
            return (*p_68);


        }


        ;
        l_369[1] = l_369[0];
    }


    for (g_112.f2 = 0; (g_112.f2 <= 2); g_112.f2 += 1)
    {
        int **l_371 = &l_369[4];
        (*l_371) = &g_31;
    }


    return g_372[5][6][2];
}







static short func_73(unsigned * p_74, char * p_75, struct S0 p_76, unsigned * p_77)
{
    unsigned short l_187 = 4UL;
    (*g_97) = func_16(p_76.f0);
    return l_187;
}







static unsigned * func_78(int * p_79, unsigned * p_80, int p_81, struct S1 * p_82)
{
    int *l_84 = &g_31;
    int *l_85[4];
    unsigned char *l_92 = (void*)0;
    unsigned char *l_93[9][4][7] = {{{&g_94[2],&g_94[4],&g_94[4],&g_94[4],&g_94[4],&g_94[2],&g_94[4]},{&g_94[4],(void*)0,&g_94[1],&g_94[0],(void*)0,&g_94[0],&g_94[1]},{&g_94[4],&g_94[4],&g_94[0],&g_94[3],&g_94[2],&g_94[4],&g_94[4]},{&g_94[3],(void*)0,&g_94[2],(void*)0,&g_94[3],&g_94[3],&g_94[0]}},{{(void*)0,&g_94[4],&g_94[4],&g_94[0],&g_94[4],&g_94[2],&g_94[4]},{(void*)0,&g_94[4],&g_94[4],&g_94[0],&g_94[4],&g_94[3],&g_94[4]},{&g_94[2],&g_94[4],&g_94[4],&g_94[2],&g_94[3],&g_94[0],&g_94[4]},{&g_94[4],&g_94[4],&g_94[3],&g_94[0],&g_94[3],&g_94[4],&g_94[4]}},{{&g_94[4],&g_94[4],&g_94[4],&g_94[4],&g_94[4],&g_94[4],&g_94[4]},{&g_94[1],&g_94[4],&g_94[1],&g_94[3],(void*)0,(void*)0,&g_94[4]},{&g_94[4],&g_94[4],&g_94[4],(void*)0,&g_94[3],&g_94[4],&g_94[4]},{&g_94[0],&g_94[3],&g_94[3],(void*)0,&g_94[2],(void*)0,&g_94[3]}},{{&g_94[4],&g_94[4],&g_94[4],&g_94[4],&g_94[4],&g_94[4],&g_94[4]},{(void*)0,&g_94[3],&g_94[4],&g_94[3],(void*)0,&g_94[4],(void*)0},{&g_94[2],&g_94[4],&g_94[0],&g_94[4],&g_94[4],&g_94[0],&g_94[4]},{&g_94[3],&g_94[4],&g_94[4],&g_94[0],&g_94[2],&g_94[3],&g_94[2]}},{{&g_94[2],&g_94[4],&g_94[4],&g_94[0],&g_94[3],&g_94[2],&g_94[4]},{(void*)0,&g_94[4],(void*)0,&g_94[0],(void*)0,&g_94[4],(void*)0},{&g_94[4],&g_94[4],&g_94[4],(void*)0,&g_94[2],&g_94[0],&g_94[4]},{&g_94[2],&g_94[3],&g_94[2],&g_94[0],&g_94[4],&g_94[4],&g_94[3]}},{{(void*)0,&g_94[4],&g_94[4],&g_94[4],&g_94[4],(void*)0,&g_94[4]},{&g_94[4],&g_94[0],&g_94[4],&g_94[4],(void*)0,&g_94[4],&g_94[4]},{&g_94[2],&g_94[0],&g_94[4],&g_94[4],(void*)0,&g_94[0],&g_94[0]},{&g_94[0],&g_94[0],&g_94[4],&g_94[0],&g_94[0],(void*)0,&g_94[4]}},{{&g_94[3],&g_94[4],&g_94[4],&g_94[4],(void*)0,&g_94[3],&g_94[4]},{&g_94[4],&g_94[3],(void*)0,&g_94[4],(void*)0,&g_94[0],(void*)0},{&g_94[3],&g_94[4],&g_94[4],&g_94[3],&g_94[4],&g_94[4],&g_94[4]},{&g_94[0],(void*)0,&g_94[4],&g_94[4],&g_94[4],(void*)0,&g_94[0]}},{{&g_94[2],(void*)0,&g_94[4],&g_94[4],&g_94[2],&g_94[2],&g_94[4]},{&g_94[4],&g_94[3],&g_94[4],&g_94[0],&g_94[4],&g_94[4],(void*)0},{(void*)0,&g_94[4],&g_94[4],&g_94[4],&g_94[4],&g_94[4],&g_94[4]},{&g_94[2],&g_94[0],&g_94[4],&g_94[4],&g_94[3],&g_94[4],&g_94[0]}},{{&g_94[4],&g_94[4],&g_94[0],&g_94[4],&g_94[2],&g_94[4],&g_94[4]},{(void*)0,(void*)0,&g_94[4],(void*)0,(void*)0,&g_94[3],&g_94[1]},{(void*)0,&g_94[4],&g_94[4],&g_94[2],&g_94[2],&g_94[4],&g_94[4]},{&g_94[0],&g_94[4],&g_94[2],&g_94[4],&g_94[4],(void*)0,&g_94[4]}}};
    struct S1 *l_98[9] = {&g_2,(void*)0,(void*)0,&g_2,(void*)0,(void*)0,&g_2,(void*)0,(void*)0};
    unsigned *l_133[6][8] = {{&g_44[3][1],&g_44[2][1],&g_44[3][1],&g_44[3][1],&g_44[3][1],&g_44[2][1],&g_44[3][1],&g_44[0][0]},{&g_44[3][1],&g_44[2][1],&g_44[3][1],&g_44[0][0],(void*)0,(void*)0,&g_44[0][0],&g_44[3][1]},{&g_44[3][1],&g_44[3][1],&g_44[2][1],(void*)0,(void*)0,&g_44[3][1],&g_44[5][3],&g_44[3][1]},{&g_44[3][1],&g_44[3][1],(void*)0,&g_44[3][1],&g_44[3][1],(void*)0,&g_44[3][1],&g_44[3][1]},{&g_44[3][1],(void*)0,&g_44[5][3],(void*)0,(void*)0,&g_44[5][3],(void*)0,&g_44[3][1]},{&g_44[2][1],(void*)0,&g_44[5][3],&g_44[0][0],&g_44[3][1],&g_44[3][1],&g_44[3][1],&g_44[0][0]}};
    struct S1 **l_138 = &l_98[8];
    int *l_154 = &g_112.f1;
    int l_173 = 0x237CEF4FL;
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_85[i] = &g_31;
    l_85[0] = l_84;
    (*p_79) &= 0L;
    if ((safe_mod_func_uint8_t_u_u((0xDEE1L < ((*l_84) = (safe_rshift_func_uint8_t_u_s(func_16((safe_lshift_func_uint16_t_u_u(p_81, (((g_2.f0 & ((*l_84) = func_16(g_2.f0))) , (safe_sub_func_int32_t_s_s(g_44[3][1], func_16(g_44[6][2])))) , ((+g_31) && p_81))))), g_2.f0)))), g_44[1][3])))
    {
        unsigned short l_115[4][9] = {{5UL,4UL,0x7910L,5UL,0x7910L,4UL,5UL,0x9346L,0x9346L},{0xBA4BL,0x9346L,4UL,0xBA4BL,4UL,0x9346L,0xBA4BL,0x7910L,0x7910L},{0xBA4BL,0x9346L,4UL,0xBA4BL,4UL,0x9346L,0xBA4BL,0x7910L,0x7910L},{0xBA4BL,0x9346L,4UL,0xBA4BL,4UL,0x9346L,0xBA4BL,0x7910L,0x7910L}};
        int l_119 = 0x3227D8CFL;
        int *l_130 = &g_31;
        int i, j;
        g_97 = l_84;

        ;
        g_99[1] = l_98[7];
        for (g_2.f0 = 0; (g_2.f0 <= 22); ++g_2.f0)
        {
            short l_120 = (-1L);
            int l_122 = 0x023AE71BL;
            struct S1 **l_137 = &l_98[7];
            struct S1 ***l_136[3];
            int i;
            for (i = 0; i < 3; i++)
                l_136[i] = &l_137;
            for (g_34 = 0; (g_34 > 19); ++g_34)
            {
                short l_129[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_129[i] = 0x2F2FL;
                for (p_81 = 0; (p_81 <= (-14)); p_81 = safe_sub_func_int32_t_s_s(p_81, 4))
                {
                    unsigned l_118 = 0x8B784503L;
                    int l_121 = (-1L);
                    l_122 |= (l_121 |= (l_120 ^= ((safe_mod_func_int16_t_s_s((safe_mod_func_uint8_t_u_u((safe_mod_func_int32_t_s_s((*p_79), (g_112 , (safe_sub_func_int32_t_s_s((-1L), l_115[2][6]))))), (p_81 ^ g_31))), 1L)) < (safe_add_func_uint8_t_u_u(l_118, l_119)))));
                    for (l_119 = 12; (l_119 <= (-4)); --l_119)
                    {
                        (*g_97) = func_16(func_16((safe_mul_func_int16_t_s_s(func_16(p_81), (l_121 &= ((safe_sub_func_int32_t_s_s((l_129[0] | (((((((void*)0 == p_82) & 0x0B25L) && 1UL) | (l_129[0] > g_2.f0)) , 0xA7L) == p_81)), 0xC0F6DB6AL)) == (*p_79)))))));
                        l_130 = &g_31;
                        (*p_79) = (g_44[3][1] , (safe_add_func_uint32_t_u_u((*l_130), ((~(&g_44[9][3] != l_133[3][4])) | l_121))));
                        if (l_118)
                            break;
                    }
                    if ((*l_130))
                        continue;
                }
                for (g_112.f1 = (-13); (g_112.f1 <= (-22)); g_112.f1--)
                {
                    (*p_79) &= ((-5L) ^ 0UL);
                }
            }
            l_138 = &l_98[7];
        }
        l_85[0] = l_130;
    }
    else
    {
        char l_172 = 0x2EL;
        unsigned char *l_176 = &g_94[0];
        int l_179 = 0xD6962B2EL;
        unsigned char l_180 = 255UL;
        for (g_21 = (-28); (g_21 > 27); ++g_21)
        {
            char *l_141 = &g_65;
            char **l_142 = &l_141;
            int l_169 = 5L;
            if ((&g_65 != (g_143 = ((*l_142) = l_141))))
            {
                for (g_34 = (-28); (g_34 != (-24)); ++g_34)
                {
                    return &g_44[8][0];


                }
            }
            else
            {
                int *l_156 = &g_31;
                struct S1 *l_171 = (void*)0;
                for (g_112.f2 = 0; (g_112.f2 != 27); g_112.f2++)
                {
                    for (g_65 = 5; (g_65 >= 1); g_65 -= 1)
                    {
                        return g_148[8][2][3];


                    }
                }
                if (((*g_97) = (*g_97)))
                {
                    for (g_34 = 8; (g_34 >= 0); g_34 -= 1)
                    {
                        unsigned *l_151 = &g_152;
                        int l_153 = 1L;
                        int **l_155 = &l_85[0];
                        if ((*g_97))
                            break;
                        (*l_155) = (((0x68L <= (safe_sub_func_int16_t_s_s(((((((*l_151) |= g_31) , g_112.f0) < (((*p_80) , 0x90F8BFC2L) || (g_112.f2 >= ((0x11L >= (l_153 = ((0xAB484368L > (&g_65 == &g_65)) | 0x15FE6623L))) , l_153)))) ^ g_31) ^ (*p_80)), g_2.f0))) >= 0x97B7L) , l_154);


                        return p_79;


                    }
                }
                else
                {
                    int **l_157 = &l_85[0];
                    (*l_157) = l_156;
                }
                for (g_31 = 0; (g_31 != (-12)); --g_31)
                {
                    for (g_112.f0 = 0; (g_112.f0 >= (-20)); g_112.f0 = safe_sub_func_uint8_t_u_u(g_112.f0, 4))
                    {
                        int l_162 = 1L;
                        int l_163 = 0x92AA995AL;
                        int l_164 = 0xC09CCC0EL;
                        l_164 |= (((*l_154) = ((l_162 , ((g_112.f1 , ((*g_143) = (g_44[3][1] > (*g_143)))) <= (((l_163 ^= 0xEAE63DA6L) >= (*l_156)) , 0xECL))) , ((*p_79) && (*p_79)))) && 0x20B21173L);
                        (*l_154) = (*g_97);
                        g_112.f1 = 0x872FA332L;
                    }
                    for (p_81 = (-21); (p_81 != (-29)); p_81 = safe_sub_func_int16_t_s_s(p_81, 5))
                    {
                        (*l_138) = &g_2;
                    }
                }
                (*p_79) &= (g_112.f1 != (g_112 , (((*g_143) ^ (((safe_lshift_func_uint16_t_u_u(l_169, p_81)) >= ((((safe_unary_minus_func_uint8_t_u(((void*)0 != l_171))) <= (l_169 <= l_169)) | l_172) ^ g_34)) > p_81)) | 9L)));
            }
            (*l_154) = (l_169 <= ((*p_80) ^= (l_173 <= (((void*)0 == &g_97) ^ (l_172 ^ (*g_143))))));
        }
        (*l_154) ^= (safe_mul_func_int8_t_s_s((l_176 == l_93[7][1][2]), ((((((safe_add_func_uint16_t_u_u(((l_172 & (g_94[4] = (((((*p_80) = ((((*l_84) == (*p_80)) , g_21) == l_179)) >= (((((*g_143) & ((void*)0 == (*l_138))) || l_179) | p_81) == g_34)) | p_81) != 0xD3FFL))) || p_81), p_81)) & l_180) , (*p_80)) > 8UL) & g_2.f0) ^ g_152)));
    }
    if (((safe_rshift_func_int8_t_s_u((g_94[4] | (&g_31 == (void*)0)), 5)) > ((*p_79) = ((void*)0 == &p_79))))
    {
        unsigned *l_183[7][4][8] = {{{&g_44[3][1],&g_44[3][3],&g_44[7][1],&g_44[3][1],(void*)0,&g_44[4][0],&g_44[3][1],&g_44[3][1]},{&g_44[7][2],&g_44[3][1],&g_44[7][1],&g_44[3][1],(void*)0,&g_44[8][2],&g_44[3][1],&g_44[5][1]},{(void*)0,&g_44[8][2],&g_44[3][1],&g_44[5][1],&g_44[3][1],&g_44[3][1],&g_44[4][2],(void*)0},{&g_44[3][1],(void*)0,&g_44[4][1],(void*)0,(void*)0,&g_44[3][1],(void*)0,&g_44[7][2]}},{{&g_44[4][0],&g_44[4][2],&g_44[5][1],&g_44[3][3],&g_44[3][1],&g_44[3][1],&g_44[1][2],&g_44[5][1]},{&g_44[4][3],(void*)0,&g_44[2][2],(void*)0,&g_44[3][1],(void*)0,&g_44[8][2],&g_44[3][1]},{(void*)0,(void*)0,&g_44[4][0],&g_44[1][2],&g_44[3][1],&g_44[3][1],&g_44[8][0],&g_44[3][1]},{&g_44[4][0],&g_44[3][2],&g_44[1][2],&g_44[4][1],&g_44[4][1],&g_44[1][2],&g_44[3][2],&g_44[4][0]}},{{&g_44[3][1],&g_44[3][1],&g_44[3][3],(void*)0,(void*)0,&g_44[4][0],&g_44[3][1],&g_44[7][1]},{&g_44[3][1],&g_44[3][1],&g_44[5][0],&g_44[3][1],(void*)0,&g_44[4][0],&g_44[1][2],&g_44[4][0]},{&g_44[3][1],&g_44[3][1],&g_44[3][1],&g_44[8][0],(void*)0,&g_44[0][3],(void*)0,&g_44[0][0]},{&g_44[4][0],(void*)0,&g_44[3][1],&g_44[2][1],&g_44[4][3],&g_44[4][1],&g_44[3][3],(void*)0}},{{&g_44[7][2],&g_44[3][3],&g_44[0][0],&g_44[3][1],&g_44[7][1],(void*)0,&g_44[5][1],(void*)0},{&g_44[2][1],&g_44[7][1],&g_44[4][3],&g_44[2][2],&g_44[7][2],&g_44[3][1],(void*)0,&g_44[3][2]},{&g_44[0][0],&g_44[4][1],&g_44[3][1],(void*)0,&g_44[4][1],&g_44[3][1],&g_44[7][1],&g_44[1][2]},{&g_44[3][1],(void*)0,&g_44[4][3],&g_44[3][1],&g_44[4][0],(void*)0,&g_44[3][1],&g_44[3][1]}},{{&g_44[7][2],&g_44[1][2],&g_44[8][0],(void*)0,&g_44[8][0],&g_44[1][2],&g_44[7][2],(void*)0},{(void*)0,&g_44[4][0],&g_44[3][1],&g_44[3][1],(void*)0,&g_44[1][2],&g_44[2][2],&g_44[9][1]},{&g_44[3][2],&g_44[9][2],&g_44[9][1],(void*)0,(void*)0,&g_44[3][1],&g_44[3][1],(void*)0},{(void*)0,&g_44[4][3],&g_44[3][1],&g_44[9][1],&g_44[8][0],&g_44[5][1],&g_44[4][3],&g_44[4][1]}},{{&g_44[7][2],&g_44[3][1],&g_44[3][1],(void*)0,&g_44[4][3],&g_44[3][1],&g_44[4][0],&g_44[3][1]},{&g_44[3][1],&g_44[3][1],&g_44[3][1],&g_44[3][1],&g_44[3][1],(void*)0,(void*)0,&g_44[4][0]},{&g_44[4][1],&g_44[7][2],(void*)0,&g_44[3][1],(void*)0,&g_44[3][1],(void*)0,(void*)0},{(void*)0,&g_44[3][1],&g_44[4][3],&g_44[4][0],&g_44[8][1],&g_44[2][2],(void*)0,(void*)0}},{{&g_44[0][0],&g_44[3][1],(void*)0,(void*)0,&g_44[3][3],&g_44[3][1],&g_44[3][1],&g_44[3][1]},{&g_44[5][1],&g_44[3][1],(void*)0,(void*)0,&g_44[3][1],&g_44[5][1],&g_44[9][2],&g_44[2][1]},{&g_44[3][1],&g_44[4][0],&g_44[3][1],&g_44[4][0],&g_44[7][2],&g_44[0][3],&g_44[3][1],&g_44[5][0]},{&g_44[4][0],&g_44[3][1],&g_44[7][1],&g_44[4][0],&g_44[9][1],&g_44[3][1],(void*)0,&g_44[2][1]}}};
        int i, j, k;
        return l_183[1][0][1];


    }
    else
    {
        int **l_184 = &l_154;
        (*g_97) = 0xF72D6A1BL;
        (*l_138) = &g_2;
        (*l_184) = (((*g_143) , (*l_84)) , &p_81);

        ;
        (*l_184) = &g_31;

        ;
    }

    ;
    return l_133[0][7];


}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2.f0, "g_2.f0", print_hash_value);
    transparent_crc(g_21, "g_21", print_hash_value);
    transparent_crc(g_31, "g_31", print_hash_value);
    transparent_crc(g_34, "g_34", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_44[i][j], "g_44[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_65, "g_65", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_94[i], "g_94[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_112.f0, "g_112.f0", print_hash_value);
    transparent_crc(g_112.f1, "g_112.f1", print_hash_value);
    transparent_crc(g_112.f2, "g_112.f2", print_hash_value);
    transparent_crc(g_152, "g_152", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_186[i][j][k], "g_186[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_271, "g_271", print_hash_value);
    transparent_crc(g_282.f0, "g_282.f0", print_hash_value);
    transparent_crc(g_282.f1, "g_282.f1", print_hash_value);
    transparent_crc(g_282.f2, "g_282.f2", print_hash_value);
    transparent_crc(g_302, "g_302", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 10; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_372[i][j][k], "g_372[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_411.f0, "g_411.f0", print_hash_value);
    transparent_crc(g_535, "g_535", print_hash_value);
    transparent_crc(g_638, "g_638", print_hash_value);
    transparent_crc(g_712, "g_712", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
