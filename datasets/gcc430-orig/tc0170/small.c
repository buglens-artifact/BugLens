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
   int f0;
   unsigned char f1;
   unsigned short f2;
   const unsigned f3;
};

struct S1 {
   unsigned f0;
   int f1;
   int f2;
   const struct S0 f3;
};

struct S2 {
   short f0;
   const int f1;
   short f2;
};


static char g_10 = 0x46L;
static struct S0 g_12 = {-1L,0x93L,65535UL,18446744073709551612UL};
static short g_14 = 0xFCF3L;
static int g_25 = (-1L);
static struct S0 g_34[6][6] = {{{0L,0x6AL,65535UL,0UL},{0x12A2EF7EL,1UL,1UL,0x2455F992L},{0L,0x6AL,65535UL,0UL},{0L,0x6AL,65535UL,0UL},{0x12A2EF7EL,1UL,1UL,0x2455F992L},{0L,0x6AL,65535UL,0UL}},{{0L,0x6AL,65535UL,0UL},{0x12A2EF7EL,1UL,1UL,0x2455F992L},{0L,0x6AL,65535UL,0UL},{0L,0x6AL,65535UL,0UL},{0x12A2EF7EL,1UL,1UL,0x2455F992L},{0L,0x6AL,65535UL,0UL}},{{0L,0x6AL,65535UL,0UL},{0x12A2EF7EL,1UL,1UL,0x2455F992L},{0L,0x6AL,65535UL,0UL},{0L,0x6AL,65535UL,0UL},{0x12A2EF7EL,1UL,1UL,0x2455F992L},{0L,0x6AL,65535UL,0UL}},{{0L,0x6AL,65535UL,0UL},{0x12A2EF7EL,1UL,1UL,0x2455F992L},{0L,0x6AL,65535UL,0UL},{0L,0x6AL,65535UL,0UL},{0x12A2EF7EL,1UL,1UL,0x2455F992L},{0L,0x6AL,65535UL,0UL}},{{0L,0x6AL,65535UL,0UL},{0x12A2EF7EL,1UL,1UL,0x2455F992L},{0L,0x6AL,65535UL,0UL},{0L,0x6AL,65535UL,0UL},{0x12A2EF7EL,1UL,1UL,0x2455F992L},{0L,0x6AL,65535UL,0UL}},{{0L,0x6AL,65535UL,0UL},{0x12A2EF7EL,1UL,1UL,0x2455F992L},{0L,0x6AL,65535UL,0UL},{0L,0x6AL,65535UL,0UL},{0x12A2EF7EL,1UL,1UL,0x2455F992L},{0L,0x6AL,65535UL,0UL}}};
static struct S0 *g_33[1][7] = {{&g_34[3][5],&g_34[3][5],&g_34[3][5],&g_34[3][5],&g_34[3][5],&g_34[3][5],&g_34[3][5]}};
static short g_37 = 0L;
static struct S1 g_69[8] = {{4294967295UL,-1L,0x1C2B46DFL,{0x61739BB5L,0x37L,7UL,0xE9900F1DL}},{4294967295UL,-1L,0x1C2B46DFL,{0x61739BB5L,0x37L,7UL,0xE9900F1DL}},{4294967295UL,0xA0C94A74L,0x4C660729L,{0x90294961L,0x5BL,0x6FFBL,18446744073709551614UL}},{0x739A3A41L,0xDBE4B24DL,-10L,{0xE821FD1BL,255UL,1UL,0x7D15778CL}},{0x739A3A41L,0xDBE4B24DL,-10L,{0xE821FD1BL,255UL,1UL,0x7D15778CL}},{4294967295UL,-1L,0x1C2B46DFL,{0x61739BB5L,0x37L,7UL,0xE9900F1DL}},{0x739A3A41L,0xDBE4B24DL,-10L,{0xE821FD1BL,255UL,1UL,0x7D15778CL}},{0x739A3A41L,0xDBE4B24DL,-10L,{0xE821FD1BL,255UL,1UL,0x7D15778CL}}};
static int **g_95 = (void*)0;
static unsigned long long g_107 = 18446744073709551615UL;
static int *g_116 = &g_69[4].f2;
static struct S1 *g_125 = &g_69[6];
static struct S1 **g_124 = &g_125;
static char g_150 = 0x08L;
static unsigned long long *g_156 = &g_107;
static short *g_171[4][5] = {{&g_37,&g_37,&g_37,&g_37,&g_37},{&g_37,&g_37,&g_37,&g_37,&g_37},{&g_37,&g_37,&g_37,&g_37,&g_37},{&g_37,&g_37,&g_37,&g_37,&g_37}};
static short **g_170 = &g_171[3][0];
static short ***g_169 = &g_170;
static long long g_173 = (-7L);
static unsigned char *g_175 = &g_34[3][5].f1;
static struct S2 *g_180 = (void*)0;
static unsigned short *g_199 = &g_34[3][5].f2;
static unsigned short ** const g_198 = &g_199;
static int g_207 = 0x6EF55013L;
static struct S2 g_244 = {-5L,1L,1L};
static unsigned long long g_294 = 0x38A6AAD285BDA2F7LL;
static struct S2 g_301 = {0x27BFL,0x70419DD8L,-1L};
static const unsigned g_346 = 0x6C6504D1L;
static const int *g_435 = &g_25;
static const int **g_434[3] = {&g_435,&g_435,&g_435};
static const int ***g_433 = &g_434[2];
static const int ****g_432 = &g_433;
static struct S0 g_456 = {0xD850105DL,248UL,65532UL,18446744073709551612UL};
static long long g_498 = 1L;
static short *g_531 = &g_14;
static short g_537 = 0xB103L;
static struct S0 g_541 = {1L,0x9FL,0x969AL,1UL};
static struct S0 *g_540[1] = {&g_541};
static struct S1 g_574 = {3UL,0x0B398D1BL,0L,{1L,0xCBL,65533UL,1UL}};
static struct S1 ***g_600[3] = {&g_124,&g_124,&g_124};
static struct S1 ****g_599 = &g_600[2];
static unsigned *g_603 = &g_574.f0;
static unsigned **g_602 = &g_603;
static struct S2 * const *g_663 = (void*)0;
static unsigned long long g_804 = 1UL;
static int *g_826 = (void*)0;
static int **g_825 = &g_826;
static unsigned g_854 = 0xDD8EE433L;
static unsigned g_900[7] = {0xB53EE083L,0xB53EE083L,0xB53EE083L,0xB53EE083L,0xB53EE083L,0xB53EE083L,0xB53EE083L};
static struct S1 g_902 = {9UL,0x2937E561L,0x75154581L,{0x8E8FD237L,1UL,0xA8CCL,18446744073709551615UL}};
static const unsigned char *g_947[3][3] = {{&g_902.f3.f1,&g_902.f3.f1,&g_69[4].f3.f1},{&g_902.f3.f1,&g_902.f3.f1,&g_69[4].f3.f1},{&g_902.f3.f1,&g_902.f3.f1,&g_69[4].f3.f1}};
static const unsigned char ** const g_946 = &g_947[1][2];
static const unsigned char ** const *g_945 = &g_946;
static char *g_1004 = &g_150;
static char **g_1003 = &g_1004;
static struct S0 * const *g_1057 = &g_33[0][4];
static int *g_1078[5][7][3] = {{{&g_25,&g_25,&g_25},{&g_25,&g_574.f2,&g_69[4].f2},{&g_574.f2,&g_574.f2,&g_69[4].f2},{&g_902.f2,&g_69[4].f2,&g_25},{&g_574.f2,&g_25,&g_69[4].f2},{&g_69[4].f2,&g_69[4].f2,&g_25},{&g_902.f2,&g_574.f2,&g_207}},{{&g_902.f2,&g_574.f2,&g_574.f2},{&g_69[4].f2,&g_25,&g_574.f2},{&g_574.f2,&g_902.f2,&g_574.f2},{&g_902.f2,&g_207,&g_207},{&g_574.f2,&g_207,&g_25},{&g_25,&g_902.f2,&g_69[4].f2},{&g_25,&g_25,&g_25}},{{&g_25,&g_574.f2,&g_69[4].f2},{&g_574.f2,&g_574.f2,&g_69[4].f2},{&g_574.f2,&g_69[4].f2,&g_574.f2},{&g_902.f2,&g_574.f2,&g_25},{&g_69[4].f2,&g_69[4].f2,&g_574.f2},{&g_574.f2,&g_207,&g_69[4].f2},{&g_574.f2,&g_25,&g_902.f2}},{{&g_69[4].f2,&g_574.f2,&g_207},{&g_902.f2,&g_574.f2,&g_902.f2},{&g_574.f2,&g_25,&g_69[4].f2},{&g_902.f2,&g_25,&g_574.f2},{&g_574.f2,&g_574.f2,&g_25},{&g_207,&g_574.f2,&g_574.f2},{&g_574.f2,&g_25,&g_69[4].f2}},{{&g_902.f2,&g_207,&g_69[4].f2},{&g_574.f2,&g_69[4].f2,&g_574.f2},{&g_902.f2,&g_574.f2,&g_25},{&g_69[4].f2,&g_69[4].f2,&g_574.f2},{&g_574.f2,&g_207,&g_69[4].f2},{&g_574.f2,&g_25,&g_902.f2},{&g_69[4].f2,&g_574.f2,&g_207}}};
static struct S0 *g_1088 = &g_541;
static struct S0 **g_1102 = &g_33[0][4];
static int g_1242 = 3L;
static struct S1 g_1267 = {6UL,0L,0xB0646DEAL,{0xA602DC48L,249UL,0x3487L,0x02510B47L}};
static short ****g_1270[10] = {&g_169,&g_169,&g_169,&g_169,&g_169,&g_169,&g_169,&g_169,&g_169,&g_169};
static short g_1356 = 3L;
static struct S0 g_1378 = {4L,1UL,0xF335L,18446744073709551609UL};
static struct S2 *g_1383 = &g_244;
static unsigned long long **g_1426 = (void*)0;
static unsigned long long ***g_1425[8][6] = {{&g_1426,&g_1426,&g_1426,&g_1426,&g_1426,&g_1426},{(void*)0,&g_1426,(void*)0,&g_1426,(void*)0,&g_1426},{&g_1426,&g_1426,&g_1426,&g_1426,&g_1426,&g_1426},{(void*)0,&g_1426,(void*)0,&g_1426,(void*)0,&g_1426},{&g_1426,&g_1426,&g_1426,&g_1426,&g_1426,&g_1426},{(void*)0,&g_1426,(void*)0,&g_1426,(void*)0,&g_1426},{&g_1426,&g_1426,&g_1426,&g_1426,&g_1426,&g_1426},{(void*)0,&g_1426,(void*)0,&g_1426,(void*)0,&g_1426}};
static struct S0 **g_1450 = &g_1088;
static int g_1466 = (-3L);
static unsigned g_1469 = 18446744073709551611UL;



static struct S0 func_1(void);
static int func_2(unsigned char p_3);
static unsigned char func_4(int p_5, unsigned long long p_6);
static unsigned long long func_8(unsigned long long p_9);
static struct S0 * func_20(short p_21, unsigned char p_22, struct S0 * p_23);
static struct S1 * func_41(const int p_42, struct S1 * p_43, const long long p_44, unsigned p_45);
static struct S1 * func_47(int p_48, int p_49, unsigned p_50);
static int func_51(int ** p_52, long long p_53, int ** p_54, struct S0 ** p_55, struct S0 ** p_56);
static int ** func_58(int ** p_59, short * p_60);
static short * func_62(struct S0 * p_63, int * p_64, struct S1 p_65, unsigned char p_66, struct S1 * p_67);
static struct S0 func_1(void)
{
    int l_7 = (-2L);
    int *l_1183 = &g_902.f2;
    unsigned char *l_1214 = &g_34[3][5].f1;
    unsigned char *l_1215 = &g_34[3][5].f1;
    long long *l_1219 = &g_173;
    long long ** const l_1218[9] = {&l_1219,&l_1219,&l_1219,&l_1219,&l_1219,&l_1219,&l_1219,&l_1219,&l_1219};
    unsigned ***l_1252 = &g_602;
    int l_1253[9] = {0xA4E35C29L,0xA4E35C29L,0xA4E35C29L,0xA4E35C29L,0xA4E35C29L,0xA4E35C29L,0xA4E35C29L,0xA4E35C29L,0xA4E35C29L};
    struct S0 l_1264 = {3L,6UL,0x12ECL,18446744073709551606UL};
    unsigned l_1280 = 0UL;
    const int *** const *l_1319 = &g_433;
    char l_1323 = 0x4BL;
    struct S1 *l_1333 = &g_574;
    unsigned l_1348 = 1UL;
    const char l_1374[5] = {(-1L),(-1L),(-1L),(-1L),(-1L)};
    int **l_1445 = &l_1183;
    short *l_1446 = &g_537;
    int *l_1487[9][6][4] = {{{&g_207,&g_574.f2,(void*)0,&g_574.f2},{&g_574.f2,&l_1253[4],&g_1466,&g_207},{&g_902.f2,&g_902.f2,(void*)0,(void*)0},{&g_207,&g_207,&g_207,&g_69[4].f2},{&l_1253[8],&g_207,&g_207,&g_902.f2},{(void*)0,&l_1253[0],&g_902.f2,&g_207}},{{&g_1267.f2,&l_1253[0],&g_574.f2,&g_902.f2},{&l_1253[0],&g_207,&g_69[4].f2,&g_69[4].f2},{&g_1466,&g_207,&g_69[4].f2,(void*)0},{(void*)0,&g_902.f2,&g_207,&g_207},{&g_902.f2,&l_1253[4],&l_1253[8],&g_574.f2},{(void*)0,&g_574.f2,&g_69[4].f2,(void*)0}},{{&g_902.f2,&g_902.f2,&g_1267.f2,&g_207},{&l_1253[3],&g_902.f2,&l_1253[3],&l_1253[0]},{(void*)0,&g_902.f2,&g_69[4].f2,&g_207},{&g_574.f2,&g_574.f2,&g_574.f2,&g_574.f2},{(void*)0,&g_207,&g_207,&g_902.f2},{&l_1253[3],&g_902.f2,&g_1466,&g_902.f2}},{{&g_902.f2,&l_1253[0],(void*)0,&g_207},{&g_902.f2,&l_1253[8],&g_1466,&g_574.f2},{&l_1253[3],&g_207,&g_207,&g_902.f2},{(void*)0,&g_69[4].f2,&g_574.f2,&g_1267.f2},{&g_574.f2,(void*)0,&g_69[4].f2,&g_207},{(void*)0,&l_1253[3],&l_1253[3],&g_207}},{{&l_1253[3],&g_69[4].f2,(void*)0,&l_1253[8]},{&g_69[4].f2,&l_1253[3],&g_1466,&g_574.f2},{&g_1267.f2,&g_69[4].f2,&g_902.f2,&l_1253[3]},{&g_1267.f2,&l_1253[0],&g_574.f2,&g_69[4].f2},{&g_902.f2,&g_1466,&g_1466,&g_902.f2},{&l_1253[8],&g_1267.f2,(void*)0,&g_902.f2}},{{&l_1253[3],&g_574.f2,&l_1253[3],&l_1253[0]},{&g_207,&l_1253[4],&g_69[4].f2,&l_1253[0]},{&g_1466,&g_574.f2,(void*)0,&g_902.f2},{(void*)0,&g_1267.f2,&g_1267.f2,&g_902.f2},{&g_207,&g_1466,&g_1466,&g_69[4].f2},{&l_1253[4],&l_1253[0],&g_902.f2,&l_1253[3]}},{{&g_902.f2,&g_69[4].f2,&g_207,&g_69[4].f2},{&g_207,&g_1267.f2,&g_1267.f2,&g_1466},{&g_207,&l_1253[4],&g_25,&g_902.f2},{&g_69[4].f2,&g_207,&g_574.f2,&g_1267.f2},{&g_1267.f2,&g_1267.f2,&g_1267.f2,(void*)0},{&g_1267.f2,&l_1253[4],&g_1267.f2,&g_1466}},{{&g_69[4].f2,&g_207,&g_69[4].f2,&g_69[4].f2},{&g_902.f2,&l_1253[3],&g_1466,&g_207},{&g_902.f2,&g_902.f2,&g_1466,(void*)0},{&g_902.f2,&g_902.f2,&g_69[4].f2,&g_902.f2},{&g_69[4].f2,&g_902.f2,&g_1267.f2,(void*)0},{&g_1267.f2,(void*)0,&g_1267.f2,&g_902.f2}},{{&g_1267.f2,&l_1253[3],&g_574.f2,&g_902.f2},{&g_69[4].f2,&g_574.f2,&g_25,(void*)0},{&g_207,(void*)0,&g_1267.f2,&g_574.f2},{&g_207,&g_902.f2,&l_1253[0],(void*)0},{&l_1253[3],&g_902.f2,(void*)0,&g_207},{&l_1253[3],&g_69[4].f2,&g_1267.f2,&g_1267.f2}}};
    int i, j, k;
    if (func_2(func_4(l_7, (g_14 = func_8(g_10)))))
    {
        int l_1165 = 0L;
        unsigned char l_1166 = 0x3FL;
        struct S0 l_1167 = {0x89061962L,0xF8L,0x25F2L,0x62DF11CCL};
        short * const *l_1175 = &g_171[3][0];
        short * const ** const l_1174[10] = {&l_1175,&l_1175,&l_1175,&l_1175,&l_1175,&l_1175,&l_1175,&l_1175,&l_1175,&l_1175};
        int *l_1180 = &g_25;
        struct S2 *l_1186 = (void*)0;
        unsigned short l_1196 = 0x870FL;
        unsigned char l_1210 = 0xADL;
        int i;
        for (g_12.f0 = 6; (g_12.f0 >= 1); g_12.f0 -= 1)
        {
            int *l_1171 = &g_207;
            int i;
            if (((((g_900[g_12.f0] > ((*g_199) = (safe_rshift_func_uint8_t_u_u(((*g_175) = (((safe_mod_func_int16_t_s_s((0x58EC8A075F9CF2E6LL > g_900[g_12.f0]), (safe_rshift_func_int16_t_s_u(func_4(l_7, (*g_156)), (*g_199))))) > ((void*)0 != &g_170)) >= 18446744073709551615UL)), l_1165)))) >= 5UL) >= l_1166) >= 0xF4C2A9C855102802LL))
            {
                return l_1167;
            }
            else
            {
                struct S1 ***l_1176 = &g_124;
                int l_1178 = 0xC3269219L;
                struct S0 l_1182 = {1L,0x55L,0xF35DL,0x5ED03974L};
                for (g_537 = 2; (g_537 >= 0); g_537 -= 1)
                {
                    const struct S1 ***l_1177 = (void*)0;
                    for (g_902.f1 = 2; (g_902.f1 >= 0); g_902.f1 -= 1)
                    {
                        int *l_1168 = &g_574.f2;
                        unsigned long long **l_1170 = &g_156;
                        unsigned long long ***l_1169 = &l_1170;
                        int i;
                        (*l_1168) = l_7;
                        (*l_1169) = &g_156;
                        (**g_433) = l_1171;
                        (*g_1102) = func_20(func_8((((void*)0 != l_1174[6]) || (l_1176 != l_1177))), l_1178, (*g_1102));
                    }
                    for (l_7 = 0; (l_7 <= 0); l_7 += 1)
                    {
                        int *l_1179 = &g_574.f2;
                        int *l_1181 = &g_902.f2;
                        l_1181 = (l_1180 = l_1179);
                        return l_1182;
                    }
                }
                return (**g_1102);
            }
        }
        (***g_432) = l_1183;
        for (g_902.f2 = (-30); (g_902.f2 == (-4)); ++g_902.f2)
        {
            struct S2 **l_1187 = (void*)0;
            struct S2 **l_1188 = (void*)0;
            struct S2 **l_1189 = &g_180;
            int l_1195 = 1L;
            char l_1211 = 0xC7L;
            int l_1212 = 0x6E949C0DL;
            struct S0 l_1213[4] = {{0xF2EAE1E2L,0xDFL,0x3AEDL,6UL},{0xF2EAE1E2L,0xDFL,0x3AEDL,6UL},{0xF2EAE1E2L,0xDFL,0x3AEDL,6UL},{0xF2EAE1E2L,0xDFL,0x3AEDL,6UL}};
            int i;
            (*l_1189) = l_1186;
            (*l_1180) = (*g_435);
            for (g_150 = 2; (g_150 == (-19)); g_150 = safe_sub_func_uint16_t_u_u(g_150, 4))
            {
                long long *l_1194[10] = {&g_173,&g_173,&g_173,&g_173,&g_173,&g_173,&g_173,&g_173,&g_173,&g_173};
                unsigned char *l_1199 = (void*)0;
                unsigned char *l_1200 = (void*)0;
                int l_1209 = 1L;
                int i;
                (***g_432) = l_1183;
                if ((((*g_175) = 3UL) == (((0x8A198BECL & (safe_add_func_int64_t_s_s((l_1195 = 0xF3729EFB2009ABE2LL), ((l_1196 > (safe_sub_func_uint8_t_u_u((g_12.f1 = ((*l_1183) < func_8((*g_156)))), (safe_lshift_func_int8_t_s_s((safe_add_func_uint16_t_u_u((**g_198), ((((safe_add_func_int32_t_s_s((safe_lshift_func_int16_t_s_s(((*g_531) = ((**g_946) <= (*l_1183))), l_1209)), 0x602EBE76L)) <= l_1210) & l_1211) || (*g_531)))), l_1209))))) < (*l_1183))))) & g_34[3][5].f2) | l_1212)))
                {
                    return (**g_1102);
                }
                else
                {
                    return l_1213[1];
                }
            }
        }
    }
    else
    {
        (*l_1183) = (l_1214 != l_1215);
        (**g_433) = (void*)0;
    }
    if ((safe_rshift_func_int16_t_s_u(((l_1218[1] != &l_1219) && (*g_156)), (*g_199))))
    {
        const unsigned long long l_1236 = 0x081F4A8A4DE49479LL;
        unsigned l_1251 = 0xCB00BE82L;
        struct S2 *l_1272[4][3][10] = {{{&g_301,(void*)0,(void*)0,&g_301,&g_301,(void*)0,(void*)0,&g_301,&g_301,(void*)0},{&g_301,&g_301,(void*)0,(void*)0,&g_301,&g_301,(void*)0,(void*)0,&g_301,&g_301},{&g_301,(void*)0,(void*)0,&g_301,&g_301,(void*)0,(void*)0,&g_301,&g_301,(void*)0}},{{&g_301,&g_301,(void*)0,(void*)0,&g_301,&g_301,(void*)0,(void*)0,&g_301,&g_301},{&g_301,(void*)0,(void*)0,&g_301,&g_301,(void*)0,(void*)0,&g_301,&g_301,(void*)0},{&g_301,&g_301,(void*)0,(void*)0,&g_301,&g_301,(void*)0,(void*)0,&g_301,&g_301}},{{&g_301,(void*)0,(void*)0,&g_301,&g_301,(void*)0,(void*)0,&g_301,&g_301,(void*)0},{&g_301,&g_301,(void*)0,(void*)0,&g_301,&g_301,(void*)0,(void*)0,&g_301,&g_301},{&g_301,(void*)0,(void*)0,&g_301,&g_301,(void*)0,(void*)0,&g_301,&g_301,(void*)0}},{{&g_301,&g_301,(void*)0,(void*)0,&g_301,&g_301,(void*)0,(void*)0,&g_301,&g_301},{&g_301,(void*)0,(void*)0,&g_301,&g_301,(void*)0,(void*)0,&g_301,&g_301,(void*)0},{&g_301,&g_301,(void*)0,(void*)0,&g_301,&g_301,(void*)0,(void*)0,&g_301,&g_301}}};
        const int *l_1273 = &l_1253[7];
        int l_1324 = 9L;
        struct S1 *l_1332 = &g_69[4];
        struct S0 *l_1377 = &g_1378;
        short **l_1414 = &g_171[2][0];
        int i, j, k;
        for (g_294 = (-5); (g_294 <= 28); g_294 = safe_add_func_uint32_t_u_u(g_294, 8))
        {
            struct S0 **l_1229 = &g_33[0][0];
            int l_1241 = 0xEC94B407L;
            for (g_456.f0 = (-4); (g_456.f0 > 23); g_456.f0 = safe_add_func_int8_t_s_s(g_456.f0, 9))
            {
                unsigned l_1224 = 0xEF372E4CL;
                char l_1227 = 0L;
                (*l_1183) = l_1224;
                if (l_1224)
                    continue;
                for (g_902.f1 = (-26); (g_902.f1 != 23); g_902.f1 = safe_add_func_int32_t_s_s(g_902.f1, 8))
                {
                    struct S0 **l_1228 = &g_1088;
                    (*l_1183) = ((((*g_156) < l_1227) && (**g_1003)) ^ (((l_1228 != l_1229) < 1L) > (*g_156)));
                }
                g_1242 = (safe_lshift_func_uint16_t_u_s((safe_sub_func_int32_t_s_s(((safe_rshift_func_uint16_t_u_s((((l_1236 < 0xE206960EL) >= (65535UL && (((*g_603) = 4294967295UL) > (safe_add_func_uint8_t_u_u((safe_sub_func_int32_t_s_s((l_1241 & l_1227), l_1241)), 1L))))) <= ((*g_156) = ((l_1227 != 0xEA779620L) != 0x359A884FL))), 0)) ^ (*l_1183)), g_498)), 0));
            }
        }
        if ((l_1251 || (*l_1183)))
        {
            int *l_1263[7][4] = {{&g_207,&g_207,&g_207,&g_207},{&g_207,&g_207,&g_207,&g_207},{&g_207,&g_207,&g_207,&g_207},{&g_207,&g_207,&g_207,&g_207},{&g_207,&g_207,&g_207,&g_207},{&g_207,&g_207,&g_207,&g_207},{&g_207,&g_207,&g_207,&g_207}};
            short **l_1279 = &g_531;
            short l_1283[2][3] = {{0x9BB8L,1L,1L},{0x9BB8L,1L,1L}};
            struct S2 **l_1288[10] = {&l_1272[3][1][8],&l_1272[3][1][8],&l_1272[3][1][8],&l_1272[3][1][8],&l_1272[3][1][8],&l_1272[3][1][8],&l_1272[3][1][8],&l_1272[3][1][8],&l_1272[3][1][8],&l_1272[3][1][8]};
            int i, j;
            for (g_456.f1 = 14; (g_456.f1 == 52); g_456.f1++)
            {
                long long l_1262 = 0x582CB713CFC83F27LL;
                const unsigned short l_1284[10][5] = {{3UL,3UL,3UL,3UL,3UL},{65535UL,65535UL,65535UL,65535UL,65535UL},{3UL,3UL,3UL,3UL,3UL},{65535UL,65535UL,65535UL,65535UL,65535UL},{3UL,3UL,3UL,3UL,3UL},{65535UL,65535UL,65535UL,65535UL,65535UL},{3UL,3UL,3UL,3UL,3UL},{65535UL,65535UL,65535UL,65535UL,65535UL},{3UL,3UL,3UL,3UL,3UL},{65535UL,65535UL,65535UL,65535UL,65535UL}};
                int i, j;
                (***g_432) = (**g_433);
                (*l_1183) = (safe_lshift_func_int8_t_s_u((safe_rshift_func_int8_t_s_u(0x84L, l_1251)), 0));
                for (g_574.f2 = 17; (g_574.f2 > (-26)); g_574.f2 = safe_sub_func_int8_t_s_s(g_574.f2, 6))
                {
                    struct S1 *l_1266 = &g_1267;
                    if (l_1262)
                    {
                        (*g_825) = l_1263[4][0];
                        return l_1264;
                    }
                    else
                    {
                        struct S1 **l_1265[6] = {&g_125,&g_125,&g_125,&g_125,&g_125,&g_125};
                        short ****l_1269 = (void*)0;
                        short *****l_1268[10][7][3] = {{{&l_1269,&l_1269,&l_1269},{&l_1269,&l_1269,(void*)0},{&l_1269,&l_1269,&l_1269},{&l_1269,&l_1269,&l_1269},{&l_1269,&l_1269,&l_1269},{&l_1269,&l_1269,&l_1269},{(void*)0,&l_1269,&l_1269}},{{&l_1269,&l_1269,&l_1269},{&l_1269,&l_1269,&l_1269},{&l_1269,&l_1269,&l_1269},{&l_1269,(void*)0,&l_1269},{&l_1269,(void*)0,&l_1269},{&l_1269,&l_1269,&l_1269},{&l_1269,&l_1269,&l_1269}},{{&l_1269,&l_1269,&l_1269},{&l_1269,&l_1269,(void*)0},{&l_1269,(void*)0,&l_1269},{&l_1269,&l_1269,(void*)0},{&l_1269,&l_1269,&l_1269},{&l_1269,&l_1269,&l_1269},{&l_1269,&l_1269,(void*)0}},{{&l_1269,&l_1269,(void*)0},{&l_1269,&l_1269,&l_1269},{(void*)0,(void*)0,&l_1269},{&l_1269,(void*)0,&l_1269},{(void*)0,&l_1269,&l_1269},{&l_1269,&l_1269,&l_1269},{&l_1269,&l_1269,&l_1269}},{{(void*)0,(void*)0,&l_1269},{&l_1269,(void*)0,&l_1269},{&l_1269,&l_1269,(void*)0},{&l_1269,&l_1269,&l_1269},{&l_1269,(void*)0,&l_1269},{&l_1269,(void*)0,(void*)0},{&l_1269,&l_1269,&l_1269}},{{&l_1269,&l_1269,&l_1269},{&l_1269,&l_1269,&l_1269},{&l_1269,(void*)0,(void*)0},{&l_1269,(void*)0,&l_1269},{&l_1269,&l_1269,&l_1269},{&l_1269,(void*)0,&l_1269},{&l_1269,&l_1269,&l_1269}},{{(void*)0,&l_1269,&l_1269},{&l_1269,&l_1269,&l_1269},{&l_1269,&l_1269,&l_1269},{&l_1269,&l_1269,&l_1269},{&l_1269,&l_1269,&l_1269},{(void*)0,&l_1269,&l_1269},{&l_1269,&l_1269,&l_1269}},{{&l_1269,&l_1269,&l_1269},{&l_1269,&l_1269,&l_1269},{&l_1269,&l_1269,&l_1269},{&l_1269,&l_1269,&l_1269},{(void*)0,&l_1269,&l_1269},{&l_1269,&l_1269,&l_1269},{&l_1269,&l_1269,&l_1269}},{{&l_1269,&l_1269,&l_1269},{&l_1269,&l_1269,&l_1269},{&l_1269,&l_1269,&l_1269},{&l_1269,&l_1269,&l_1269},{(void*)0,&l_1269,&l_1269},{&l_1269,&l_1269,&l_1269},{&l_1269,&l_1269,&l_1269}},{{&l_1269,&l_1269,(void*)0},{&l_1269,&l_1269,&l_1269},{(void*)0,(void*)0,&l_1269},{&l_1269,&l_1269,(void*)0},{&l_1269,(void*)0,&l_1269},{&l_1269,&l_1269,(void*)0},{&l_1269,&l_1269,&l_1269}}};
                        int l_1271[1][9][8] = {{{9L,0xF280E073L,9L,0x1984BB19L,(-5L),2L,0xFB9C6E19L,0xFB9C6E19L},{0xFB9C6E19L,0L,0L,0L,0L,0xFB9C6E19L,(-5L),(-10L)},{0xFB9C6E19L,0x262B67ECL,1L,0L,(-5L),0L,1L,0x262B67ECL},{9L,1L,2L,0L,(-10L),0x1984BB19L,0x1984BB19L,(-10L)},{0L,(-10L),(-10L),0L,9L,0x262B67ECL,0x1984BB19L,0xFB9C6E19L},{1L,0L,2L,0x1984BB19L,2L,0L,1L,(-5L)},{2L,0L,(-10L),1L,0xF280E073L,0xF280E073L,1L,(-10L)},{0L,0L,9L,2L,0xF280E073L,0L,0x262B67ECL,0L},{(-5L),(-10L),2L,(-10L),(-5L),0xFB9C6E19L,0L,0L}}};
                        int i, j, k;
                        l_1266 = (void*)0;
                        l_1271[0][4][0] = (&g_169 != (g_1270[1] = &g_169));
                        g_180 = l_1272[3][1][8];
                    }
                }
                for (g_244.f2 = 6; (g_244.f2 >= 0); g_244.f2 -= 1)
                {
                    const unsigned l_1285 = 1UL;
                    int i;
                    (*l_1183) = g_900[g_244.f2];
                    (***g_432) = l_1273;
                    if ((*g_435))
                    {
                        struct S0 *l_1281[8][1][5];
                        int i, j, k;
                        for (i = 0; i < 8; i++)
                        {
                            for (j = 0; j < 1; j++)
                            {
                                for (k = 0; k < 5; k++)
                                    l_1281[i][j][k] = &g_456;
                            }
                        }
                        (*l_1183) = (safe_mod_func_int64_t_s_s(((*l_1219) = g_900[g_244.f2]), (((255UL | (safe_sub_func_uint16_t_u_u((safe_unary_minus_func_uint8_t_u((g_301.f0 & ((void*)0 == l_1279)))), 65535UL))) ^ (((1UL <= g_541.f2) <= l_1280) < g_900[g_244.f2])) | 0xE41F321C5AE7A3C9LL)));
                        (*g_1102) = l_1281[1][0][3];
                    }
                    else
                    {
                        int l_1282 = 0x70E36C08L;
                        if (l_1282)
                            break;
                        if (l_1283[1][2])
                            break;
                        (*l_1183) = l_1284[3][4];
                        if (l_1285)
                            break;
                    }
                    for (g_14 = 7; (g_14 >= 0); g_14 -= 1)
                    {
                        struct S2 ***l_1289 = &l_1288[6];
                        int i;
                        l_1253[(g_14 + 1)] = (safe_lshift_func_int16_t_s_u((((*l_1289) = l_1288[6]) != (void*)0), 9));
                        l_1253[(g_14 + 1)] = (****g_432);
                        (*g_825) = l_1263[1][0];
                    }
                }
            }
        }
        else
        {
            int *l_1295 = &l_1253[2];
            const unsigned *l_1308 = (void*)0;
            for (g_574.f1 = (-14); (g_574.f1 >= (-17)); g_574.f1 = safe_sub_func_uint32_t_u_u(g_574.f1, 1))
            {
                int *l_1296 = &g_25;
                struct S0 l_1309 = {0x3D2D412CL,8UL,0xF99FL,0x5D2725F1L};
                if ((*l_1273))
                {
                    (***g_432) = (**g_433);
                }
                else
                {
                    int l_1299 = 0x04B05781L;
                    for (l_1280 = (-6); (l_1280 != 35); l_1280 = safe_add_func_uint32_t_u_u(l_1280, 4))
                    {
                        int *l_1294[8];
                        int i;
                        for (i = 0; i < 8; i++)
                            l_1294[i] = (void*)0;
                        l_1253[8] = ((*l_1183) = ((*g_156) ^ (+((**g_946) != (*l_1183)))));
                        (*l_1183) = (*l_1183);
                        (**g_433) = l_1295;
                        (**g_433) = l_1296;
                    }
                    (*l_1296) = (*l_1183);
                    (*l_1296) = (((((*l_1295) == (safe_rshift_func_int16_t_s_s(((*g_603) > l_1299), 1))) || ((*g_199) = ((*l_1296) < (*l_1296)))) <= ((*l_1183) >= ((*l_1295) != (safe_add_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u((((g_902.f0 >= (safe_lshift_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s(((~(l_1308 != (void*)0)) ^ (**g_946)), 5)), (*l_1296)))) & (-9L)) | (*l_1295)), 2)), (*l_1273)))))) > g_574.f2);
                    for (g_541.f0 = 3; (g_541.f0 >= 0); g_541.f0 -= 1)
                    {
                        if ((*l_1295))
                            break;
                        (***g_432) = (***g_432);
                    }
                }
                return l_1309;
            }
        }
        if ((((*g_156) | func_8((*l_1183))) & func_8((*l_1273))))
        {
            int *l_1310 = &g_1267.f2;
            short **l_1344 = &g_171[0][4];
            struct S0 **l_1345 = &g_33[0][0];
            unsigned char **l_1375 = &g_175;
            for (g_150 = 0; (g_150 <= 2); g_150 += 1)
            {
                int *l_1336 = &g_574.f2;
                int i;
                (**g_433) = l_1310;
                for (g_456.f1 = 0; (g_456.f1 < 25); g_456.f1 = safe_add_func_int32_t_s_s(g_456.f1, 4))
                {
                    unsigned char l_1320[2];
                    int *l_1335 = &g_207;
                    int i;
                    for (i = 0; i < 2; i++)
                        l_1320[i] = 1UL;
                    for (g_1267.f2 = 0; (g_1267.f2 <= 2); g_1267.f2 += 1)
                    {
                        int i, j;
                        (*l_1183) = (safe_add_func_uint64_t_u_u((safe_lshift_func_int8_t_s_u((((****g_432) & 5L) > (safe_lshift_func_uint16_t_u_s(0xC050L, (g_34[3][5].f3 & ((l_1319 != (void*)0) != l_1320[1]))))), 4)), (((g_541.f2 = ((*g_199) = (safe_add_func_uint8_t_u_u(((((g_173 = (*l_1273)) & (2UL != l_1320[1])) ^ 3L) | (*g_156)), (****l_1319))))) && l_1320[1]) >= (*g_603))));
                        (*l_1183) = (l_1324 = (0x54L <= l_1323));
                    }
                    for (g_107 = 0; (g_107 != 29); g_107++)
                    {
                        (*g_1102) = (void*)0;
                    }
                    for (g_14 = 0; (g_14 < 15); g_14 = safe_add_func_int64_t_s_s(g_14, 7))
                    {
                        unsigned char *l_1329[6][3] = {{&g_12.f1,&g_12.f1,&g_12.f1},{&l_1320[0],&l_1320[0],&l_1320[0]},{&g_12.f1,&g_12.f1,&g_12.f1},{&l_1320[0],&l_1320[0],&l_1320[0]},{&g_12.f1,&g_12.f1,&g_12.f1},{&l_1320[0],&l_1320[0],&l_1320[0]}};
                        const int l_1330 = (-8L);
                        int *l_1331 = &g_207;
                        struct S1 **l_1334 = &l_1333;
                        int i, j;
                        if (l_1320[1])
                            break;
                        if (l_1320[1])
                            break;
                        (*l_1334) = l_1333;
                    }
                    l_1336 = l_1335;
                }
            }
            (***l_1319) = (***l_1319);
            (*l_1183) = (safe_lshift_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s((*l_1273), ((*g_1004) = ((*g_156) >= 0x591624045E0F0A5DLL)))), 1));
            for (g_902.f2 = 2; (g_902.f2 >= 0); g_902.f2 -= 1)
            {
                int **l_1343 = &g_1078[4][3][1];
                struct S0 **l_1346 = &g_540[0];
                unsigned char **l_1372 = &l_1215;
                unsigned char ***l_1371 = &l_1372;
                int i;
                if (((safe_mod_func_int16_t_s_s(g_900[(g_902.f2 + 3)], ((*g_156) | (*g_156)))) && (*l_1310)))
                {
                    (*l_1343) = (void*)0;
                    for (g_12.f0 = 2; (g_12.f0 >= 0); g_12.f0 -= 1)
                    {
                        int *l_1347 = &g_69[4].f2;
                        int i;
                        l_1347 = &l_1253[(g_902.f2 + 6)];
                        if (l_1253[(g_12.f0 + 1)])
                            continue;
                    }
                }
                else
                {
                    char l_1355 = 0x17L;
                    if ((((((*l_1344) == (void*)0) != (l_1348 = (-1L))) >= (~(((g_156 = &g_107) != &g_294) == (safe_mod_func_int16_t_s_s((0xD2443652L == ((((*g_603) = (**g_602)) & ((*l_1310) = ((safe_sub_func_int32_t_s_s((safe_sub_func_uint16_t_u_u((&g_900[1] == l_1310), (**g_198))), (*l_1310))) < 0xF396FC8D03284B8ELL))) && (*l_1273))), (*g_199)))))) != 0x87L))
                    {
                        (***g_432) = &l_1324;
                        (***l_1319) = (*l_1343);
                    }
                    else
                    {
                        (*l_1310) = l_1355;
                        if (g_1356)
                            break;
                    }
                }
                for (g_456.f2 = 0; (g_456.f2 <= 6); g_456.f2 += 1)
                {
                    unsigned long long l_1359[1][9][8] = {{{18446744073709551614UL,0UL,18446744073709551614UL,0x45373AB34115CCB6LL,18446744073709551614UL,0UL,18446744073709551614UL,0xEF096A448A3ED760LL},{0x32C484BBDC520354LL,18446744073709551611UL,18446744073709551615UL,18446744073709551614UL,18446744073709551615UL,18446744073709551615UL,0xFCE57A69705DED49LL,9UL},{0xEF096A448A3ED760LL,0x45373AB34115CCB6LL,0x1ECDB0E161503F93LL,18446744073709551614UL,18446744073709551615UL,0xF8C64AADDE6C066ELL,0UL,0x45373AB34115CCB6LL},{0x32C484BBDC520354LL,0x1ECDB0E161503F93LL,0xB194EDB50D85AC0CLL,9UL,18446744073709551614UL,18446744073709551614UL,9UL,0xB194EDB50D85AC0CLL},{18446744073709551614UL,18446744073709551614UL,0x2AA87F6D7ABAC107LL,0xFCE57A69705DED49LL,0x32C484BBDC520354LL,18446744073709551615UL,0xF2A74F36DF57511CLL,18446744073709551611UL},{0xB194EDB50D85AC0CLL,0xFCE57A69705DED49LL,0x1A6438737243F1EALL,0xF8C64AADDE6C066ELL,18446744073709551611UL,0x1ECDB0E161503F93LL,0UL,18446744073709551611UL},{0xFCE57A69705DED49LL,0UL,18446744073709551608UL,0xFCE57A69705DED49LL,0xF8C64AADDE6C066ELL,0xB194EDB50D85AC0CLL,0xC64EE9B59A4B63E3LL,18446744073709551614UL},{0x45373AB34115CCB6LL,18446744073709551611UL,0UL,18446744073709551611UL,0x45373AB34115CCB6LL,6UL,0xF2A74F36DF57511CLL,0x32C484BBDC520354LL},{18446744073709551614UL,0xC64EE9B59A4B63E3LL,0x1ECDB0E161503F93LL,18446744073709551608UL,0xC64EE9B59A4B63E3LL,9UL,0xB194EDB50D85AC0CLL,18446744073709551611UL}}};
                    struct S0 l_1360[4] = {{1L,0xB1L,0UL,1UL},{1L,0xB1L,0UL,1UL},{1L,0xB1L,0UL,1UL},{1L,0xB1L,0UL,1UL}};
                    unsigned short l_1365 = 65535UL;
                    int l_1370 = (-4L);
                    int i, j, k;
                    if ((safe_add_func_uint32_t_u_u(l_1359[0][1][7], (*l_1273))))
                    {
                        return l_1360[3];
                    }
                    else
                    {
                        unsigned char ****l_1373 = &l_1371;
                        (*l_1310) = ((safe_rshift_func_uint16_t_u_s(((0xAFL ^ ((safe_sub_func_int64_t_s_s(l_1365, (safe_add_func_int16_t_s_s(l_1359[0][1][7], (safe_rshift_func_uint16_t_u_s((*l_1273), l_1370)))))) == 0x4E6162AC57588F36LL)) || 9L), 3)) >= ((&g_946 == ((*l_1373) = l_1371)) && 2UL));
                        if (l_1374[3])
                            continue;
                        (***l_1319) = ((*g_825) = &l_1253[3]);
                    }
                    (*l_1371) = l_1375;
                    (*g_826) = (***g_433);
                    if (((*l_1310) || (255UL <= 255UL)))
                    {
                        struct S0 * const l_1376 = &g_12;
                        const struct S0 *l_1380 = &g_902.f3;
                        const struct S0 **l_1379 = &l_1380;
                        const struct S0 *l_1382 = &l_1264;
                        const struct S0 **l_1381 = &l_1382;
                        l_1377 = l_1376;
                        (*l_1381) = ((*l_1379) = (*g_1102));
                    }
                    else
                    {
                        return (*g_1088);
                    }
                    for (g_12.f1 = 0; (g_12.f1 <= 0); g_12.f1 += 1)
                    {
                        return (*g_1088);
                    }
                }
                if ((*l_1183))
                    continue;
                for (g_12.f0 = 0; (g_12.f0 <= 2); g_12.f0 += 1)
                {
                    struct S0 **l_1386 = &g_33[0][0];
                    int l_1400 = (-4L);
                    const int *l_1401 = &g_574.f2;
                    (***l_1319) = (*l_1343);
                    g_1383 = g_1383;
                    (*l_1310) = (*l_1273);
                    for (g_10 = 1; (g_10 <= 6); g_10 += 1)
                    {
                        struct S0 ***l_1387[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                        int l_1396[4][3][8] = {{{(-1L),0xB7C35706L,0x150B710DL,(-1L),0xD482569EL,1L,0L,0x293F7913L},{1L,(-1L),0x7824D64AL,0L,0x7824D64AL,(-1L),1L,0xF39A8B18L},{0x90A4F961L,0L,0xB5BC08DEL,0xB7C90690L,(-1L),0L,0xB7C90690L,1L}},{{0x150B710DL,0xB7C35706L,(-1L),0L,(-1L),0L,1L,0L},{0x90A4F961L,1L,0L,1L,0x7824D64AL,0xF807BFF6L,0xB7C35706L,0L},{1L,(-1L),0x7A4049E3L,0xD482569EL,0xD482569EL,0x7A4049E3L,(-1L),1L}},{{(-1L),0x42C2ED90L,1L,0xF39A8B18L,0xB7C35706L,0x7824D64AL,0x150B710DL,0xB7C90690L},{0xD482569EL,0xBAA3FB28L,0L,0L,0xF39A8B18L,0x7824D64AL,0x293F7913L,1L},{0x293F7913L,1L,0xD482569EL,0L,1L,(-1L),1L,0xF807BFF6L}},{{0L,0xBAA3FB28L,(-1L),0x7A4049E3L,1L,0x7A4049E3L,(-1L),0xBAA3FB28L},{0x7824D64AL,(-1L),0xBFD0DF5FL,1L,0x3EDC3FD9L,0x424BB269L,(-1L),0x3EDC3FD9L},{0L,0xF807BFF6L,0x42C2ED90L,0L,0x7824D64AL,(-3L),(-1L),1L}}};
                        unsigned short *l_1397 = (void*)0;
                        unsigned short *l_1398 = &l_1264.f2;
                        int l_1399 = 0xBF8658D8L;
                        int i, j, k;
                        (*l_1310) = func_4((*l_1310), ((0UL | (safe_add_func_uint8_t_u_u(((g_1102 = l_1386) != (l_1346 = &g_33[0][3])), (4UL | (*l_1273))))) >= (((safe_lshift_func_uint16_t_u_s((0xC695L >= (func_4((*l_1310), ((safe_add_func_int64_t_s_s(((*l_1219) = (((*l_1398) = ((l_1396[2][2][3] = ((safe_sub_func_int8_t_s_s((safe_sub_func_int32_t_s_s((((**g_198) = (*l_1310)) <= l_1396[2][2][3]), (*l_1273))), 0x6EL)) && 18446744073709551615UL)) > (*l_1273))) >= l_1399)), g_107)) != (*l_1183))) <= 0xA1A2L)), l_1400)) == 250UL) || (*g_603))));
                        (***g_432) = l_1401;
                        (*l_1310) = ((*g_156) || ((*g_156) = (*g_156)));
                    }
                }
            }
        }
        else
        {
            unsigned char l_1415 = 0x41L;
            unsigned long long *l_1416 = &g_804;
            l_1324 = ((*l_1183) = (safe_add_func_int16_t_s_s((((**g_602) = (safe_add_func_uint8_t_u_u((safe_add_func_uint64_t_u_u((*g_156), (9L && ((((*l_1416) = (((*g_531) = (safe_sub_func_uint64_t_u_u(((((void*)0 == &g_900[4]) != 0x19394F3EL) >= ((((*l_1183) <= (safe_rshift_func_uint8_t_u_u((((18446744073709551615UL <= (safe_lshift_func_uint8_t_u_s((((((void*)0 == l_1414) < 0UL) < 0x0EL) > (*l_1273)), l_1415))) && l_1415) || l_1415), (*l_1183)))) && l_1415) || (*l_1273))), (-5L)))) & 1UL)) == (*l_1273)) && (*l_1183))))), (-1L)))) > l_1415), 0L)));
        }
        l_1273 = (void*)0;
    }
    else
    {
        int *l_1417 = &l_1253[3];
        int ***l_1447 = &l_1445;
        unsigned l_1448 = 8UL;
        short *l_1449[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int **l_1468 = (void*)0;
        int i;
        (**g_433) = l_1417;
        for (l_1264.f1 = 4; (l_1264.f1 < 51); l_1264.f1++)
        {
            int *l_1420 = &g_1267.f2;
            short ***l_1438[7][5] = {{&g_170,&g_170,(void*)0,&g_170,&g_170},{&g_170,&g_170,&g_170,&g_170,&g_170},{&g_170,&g_170,(void*)0,&g_170,&g_170},{&g_170,&g_170,&g_170,&g_170,&g_170},{&g_170,&g_170,&g_170,&g_170,&g_170},{&g_170,&g_170,&g_170,(void*)0,(void*)0},{&g_170,&g_170,&g_170,&g_170,(void*)0}};
            struct S0 *l_1442 = &g_34[3][3];
            int i, j;
            l_1420 = l_1417;
            (*l_1183) = (safe_mod_func_int32_t_s_s((*l_1183), 9UL));
            for (l_1280 = 0; (l_1280 < 54); ++l_1280)
            {
                unsigned l_1427[1];
                int **l_1436 = (void*)0;
                short ***l_1437 = (void*)0;
                int i;
                for (i = 0; i < 1; i++)
                    l_1427[i] = 0x3C7CC3BCL;
                for (g_574.f0 = 0; (g_574.f0 <= 6); g_574.f0 += 1)
                {
                    for (g_107 = 0; g_107 < 5; g_107 += 1)
                    {
                        for (g_902.f0 = 0; g_902.f0 < 7; g_902.f0 += 1)
                        {
                            for (l_1323 = 0; l_1323 < 3; l_1323 += 1)
                            {
                                g_1078[g_107][g_902.f0][l_1323] = &g_25;
                            }
                        }
                    }
                }
                if (((((void*)0 != g_1425[6][0]) | (+l_1427[0])) || ((*g_199) = (!(l_1427[0] ^ (-1L))))))
                {
                    unsigned l_1428 = 0xBDD46F09L;
                    unsigned short *l_1433 = (void*)0;
                    int *l_1439 = &g_207;
                    (*g_825) = (void*)0;
                    if (func_4(l_1427[0], ((((l_1428 == (safe_sub_func_uint16_t_u_u(((*g_199) = (!(**g_198))), (g_12.f2 = (safe_rshift_func_int16_t_s_s((****l_1319), l_1427[0])))))) == 6L) & (safe_rshift_func_uint16_t_u_u(0UL, 9))) && (*l_1417))))
                    {
                        (*l_1183) = (****l_1319);
                        (*l_1420) = (l_1437 != l_1438[6][0]);
                    }
                    else
                    {
                        (***l_1319) = (**g_433);
                        (*g_825) = l_1439;
                    }
                }
                else
                {
                    for (g_173 = 0; (g_173 >= (-25)); --g_173)
                    {
                        (*l_1183) = (***g_433);
                    }
                    (*g_1102) = l_1442;
                    if ((****g_432))
                        continue;
                }
                (**g_433) = l_1417;
            }
        }
        if (((safe_add_func_uint8_t_u_u((***g_945), 0x35L)) != g_1242))
        {
            unsigned long long l_1453 = 0xB2CE3556EBB7D113LL;
            long long l_1458[4];
            int *l_1470 = &g_1466;
            struct S0 l_1475[3] = {{-1L,255UL,0UL,0x960254EBL},{-1L,255UL,0UL,0x960254EBL},{-1L,255UL,0UL,0x960254EBL}};
            int i;
            for (i = 0; i < 4; i++)
                l_1458[i] = 0xFA87F2BFA93FB5FFLL;
            (**l_1445) = ((((*g_156) = ((**l_1445) | (*g_156))) == (safe_mod_func_uint64_t_u_u((***l_1447), l_1453))) <= (1UL && l_1453));
            (*l_1417) = 0x4FB9DA8BL;
            if ((((**g_1003) ^ (**g_1003)) <= l_1453))
            {
                unsigned short l_1454[9] = {0xF4A6L,0xF4A6L,0xF4A6L,0xF4A6L,0xF4A6L,0xF4A6L,0xF4A6L,0xF4A6L,0xF4A6L};
                int *l_1455 = &g_574.f2;
                int i;
                (*l_1455) = (l_1454[8] && ((*l_1417) = ((*l_1183) = 6L)));
            }
            else
            {
                int *l_1472[10][3][5] = {{{(void*)0,&g_69[4].f2,&g_1466,&g_574.f2,&l_1253[6]},{(void*)0,&g_574.f2,&g_25,&g_574.f2,&g_69[4].f2},{&g_902.f2,(void*)0,&g_69[4].f2,&g_902.f2,(void*)0}},{{&g_207,&l_1253[6],(void*)0,&g_902.f2,&g_574.f2},{&l_1253[2],(void*)0,&g_69[4].f2,&g_574.f2,&g_574.f2},{&l_1253[3],&g_1466,&l_1253[3],&g_902.f2,(void*)0}},{{&g_69[4].f2,&l_1253[3],&l_1253[4],&g_902.f2,&g_25},{&l_1253[3],&g_207,&g_69[4].f2,&g_574.f2,(void*)0},{&l_1253[2],&g_69[4].f2,&l_1253[4],&g_25,&g_574.f2}},{{&g_207,(void*)0,&l_1253[3],&g_1267.f2,(void*)0},{&g_902.f2,&g_902.f2,&g_69[4].f2,&g_69[4].f2,&g_25},{&g_69[4].f2,(void*)0,(void*)0,(void*)0,(void*)0}},{{&g_69[4].f2,&g_69[4].f2,&g_69[4].f2,&g_69[4].f2,&g_574.f2},{&g_69[4].f2,&g_207,&g_207,&g_1267.f2,&g_574.f2},{&g_69[4].f2,&l_1253[3],&l_1253[2],&g_25,(void*)0}},{{&g_69[4].f2,&g_1466,&g_207,&g_574.f2,&g_69[4].f2},{&g_902.f2,(void*)0,&g_69[4].f2,&g_902.f2,(void*)0},{&g_207,&l_1253[6],(void*)0,&g_902.f2,&g_574.f2}},{{&l_1253[2],(void*)0,&g_69[4].f2,&g_574.f2,&g_574.f2},{&l_1253[3],&g_1466,&l_1253[3],&g_902.f2,(void*)0},{&g_69[4].f2,&l_1253[3],&l_1253[4],(void*)0,&g_69[4].f2}},{{&g_902.f2,(void*)0,&g_1267.f2,(void*)0,&g_902.f2},{&g_902.f2,(void*)0,&g_574.f2,&g_69[4].f2,&g_902.f2},{&g_574.f2,&g_69[4].f2,&g_902.f2,&g_25,&g_902.f2}},{{&g_25,&g_207,(void*)0,&l_1253[3],&g_69[4].f2},{&g_1267.f2,&g_69[4].f2,(void*)0,(void*)0,(void*)0},{&g_69[4].f2,(void*)0,&g_69[4].f2,&l_1253[3],&g_1466}},{{(void*)0,(void*)0,&g_69[4].f2,&g_25,(void*)0},{&g_69[4].f2,&l_1253[3],&g_902.f2,&g_69[4].f2,&g_574.f2},{&g_1267.f2,(void*)0,&g_69[4].f2,(void*)0,&l_1253[3]}}};
                int i, j, k;
                for (g_854 = 0; (g_854 != 44); g_854 = safe_add_func_int64_t_s_s(g_854, 5))
                {
                    unsigned short l_1459 = 65535UL;
                }
                for (g_854 = 0; (g_854 <= 58); ++g_854)
                {
                    return l_1475[0];
                }
            }
            (**l_1447) = l_1470;
        }
        else
        {
            unsigned long long l_1480[9][5] = {{1UL,0xCB7B021D6B317C07LL,0xA4BB4DBB7E51EC90LL,0x7A7F2ACC8C7BCC4CLL,9UL},{18446744073709551615UL,1UL,1UL,0UL,0UL},{1UL,1UL,1UL,0xB04D3CE248E392EELL,0xF5DCFFB6C8F0D7F8LL},{1UL,0xB5321CC20195425ELL,0x7A7F2ACC8C7BCC4CLL,1UL,0x88EED1AC9318D1FFLL},{18446744073709551615UL,1UL,0xCB7B021D6B317C07LL,0xEC3B371E79E17A66LL,9UL},{1UL,0UL,0x7A7F2ACC8C7BCC4CLL,0x88EED1AC9318D1FFLL,0x7A7F2ACC8C7BCC4CLL},{0xA4BB4DBB7E51EC90LL,0xA4BB4DBB7E51EC90LL,1UL,0xB5321CC20195425ELL,0x7A7F2ACC8C7BCC4CLL},{0xB04D3CE248E392EELL,0xF5DCFFB6C8F0D7F8LL,1UL,9UL,9UL},{0xA7E8C417D224D3AELL,9UL,0xA4BB4DBB7E51EC90LL,0UL,0x88EED1AC9318D1FFLL}};
            int ****l_1485 = &l_1447;
            unsigned char l_1486 = 0UL;
            int i, j;
            l_1486 = (safe_rshift_func_uint8_t_u_s((65531UL <= ((**l_1445) >= (safe_lshift_func_int8_t_s_u(l_1480[6][4], 7)))), (((safe_lshift_func_int8_t_s_u(((**g_1003) = ((safe_sub_func_uint8_t_u_u(l_1480[8][3], ((void*)0 != l_1485))) && ((*l_1417) = ((func_8((***l_1447)) | g_902.f1) <= 4L)))), (**g_946))) & (****l_1485)) >= 0x40C4AC34L)));
            (**l_1445) = (***g_433);
            (***g_432) = (**l_1447);
        }
    }
    (**l_1445) = (*l_1183);
    (**g_433) = l_1487[3][0][0];
    return l_1264;
}







static int func_2(unsigned char p_3)
{
    unsigned short l_699 = 1UL;
    int *l_740 = (void*)0;
    struct S2 *l_750 = &g_301;
    struct S0 *l_782 = &g_34[3][4];
    unsigned l_797 = 0x0DB5271DL;
    int **l_823 = &g_116;
    short *l_824 = &g_14;
    const int *l_846 = &g_207;
    unsigned long long l_868 = 1UL;
    int l_873 = 3L;
    char *l_884 = &g_10;
    struct S1 *l_901 = &g_902;
    unsigned short **l_956 = &g_199;
    unsigned short ***l_955 = &l_956;
    short ***l_1002 = &g_170;
    long long l_1008 = 0xE9A7B45B5E707AE5LL;
    unsigned short l_1045 = 0x24EDL;
    unsigned char **l_1150 = &g_175;
    unsigned char ***l_1149 = &l_1150;
    for (g_456.f2 = 19; (g_456.f2 > 42); g_456.f2 = safe_add_func_uint32_t_u_u(g_456.f2, 2))
    {
        struct S2 *l_697 = (void*)0;
        long long l_711[1][4][1];
        unsigned long long **l_718 = &g_156;
        int *l_737 = &g_25;
        struct S1 **l_745 = (void*)0;
        const char *l_775[10] = {(void*)0,&g_10,(void*)0,&g_10,&g_10,&g_10,(void*)0,&g_10,&g_10,&g_10};
        unsigned *l_827 = &l_797;
        unsigned *l_828 = &g_69[4].f0;
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 4; j++)
            {
                for (k = 0; k < 1; k++)
                    l_711[i][j][k] = 1L;
            }
        }
        for (g_14 = (-4); (g_14 > 5); g_14++)
        {
            if ((***g_433))
                break;
            for (g_12.f2 = 0; (g_12.f2 <= 2); g_12.f2 += 1)
            {
                struct S2 **l_698 = &g_180;
                int i;
                (*g_116) = func_8((safe_lshift_func_uint16_t_u_u((**g_198), 4)));
                (*l_698) = l_697;
                (*g_116) = (p_3 >= (l_699 <= p_3));
            }
            if ((*g_435))
                continue;
        }
        for (g_541.f1 = 0; (g_541.f1 > 45); ++g_541.f1)
        {
            long long l_712 = 1L;
            const unsigned *l_725 = (void*)0;
            const unsigned **l_724 = &l_725;
            int **l_733 = &g_116;
            unsigned long long l_744 = 2UL;
            for (l_699 = 0; (l_699 <= 0); l_699 += 1)
            {
                char *l_713 = &g_10;
                struct S0 **l_726 = (void*)0;
                int * const l_728 = &g_207;
                (*g_116) = ((safe_rshift_func_int8_t_s_s((func_8((*g_156)) | func_8((*g_156))), 5)) & (((*g_156) <= (g_244.f2 < func_4((((safe_lshift_func_int8_t_s_u(g_574.f3.f1, 2)) > (safe_unary_minus_func_int64_t_s(((safe_lshift_func_int8_t_s_s(((*l_713) = ((safe_sub_func_uint8_t_u_u(func_8(l_711[0][3][0]), (-6L))) && l_712)), l_699)) ^ (*g_603))))) || 1L), p_3))) >= p_3));
                for (g_541.f2 = 0; (g_541.f2 <= 0); g_541.f2 += 1)
                {
                    for (g_25 = 0; g_25 < 4; g_25 += 1)
                    {
                        for (g_294 = 0; g_294 < 5; g_294 += 1)
                        {
                            g_171[g_25][g_294] = &g_537;
                        }
                    }
                    for (g_301.f2 = 0; (g_301.f2 >= 0); g_301.f2 -= 1)
                    {
                        int l_714 = 0xEBBD5590L;
                        (*g_116) = l_714;
                    }
                    if (l_711[0][3][0])
                        continue;
                    if (p_3)
                        break;
                }
                for (g_541.f2 = 0; (g_541.f2 <= 2); g_541.f2 += 1)
                {
                    for (g_25 = 0; (g_25 <= 2); g_25 += 1)
                    {
                        char l_715 = 0L;
                        const unsigned long long ***l_719 = (void*)0;
                        const unsigned long long ***l_720 = (void*)0;
                        const unsigned long long *l_723 = (void*)0;
                        const unsigned long long **l_722 = &l_723;
                        const unsigned long long ***l_721 = &l_722;
                        int *l_727 = &g_207;
                        int **l_729 = &l_727;
                        int i;
                        (*g_116) = (l_715 > 1L);
                        (*l_727) = (((safe_sub_func_uint8_t_u_u((l_718 == ((*l_721) = (void*)0)), (+(func_51(&g_116, ((void*)0 != l_724), &g_116, l_726, &g_540[0]) & (**g_198))))) != 0L) <= p_3);
                        (*l_729) = l_728;
                    }
                    (**g_433) = (**g_433);
                    for (g_244.f2 = 0; (g_244.f2 <= 0); g_244.f2 += 1)
                    {
                        long long l_730 = 8L;
                        return l_730;
                    }
                    for (g_207 = 0; (g_207 <= 2); g_207 += 1)
                    {
                        int i;
                        (*g_116) = (safe_rshift_func_int16_t_s_u((*g_531), 2));
                        if (l_712)
                            break;
                        return l_711[0][0][0];
                    }
                }
            }
            for (g_14 = 0; (g_14 >= 0); g_14 -= 1)
            {
                int *l_736[10] = {&g_574.f2,&g_574.f2,&g_574.f2,&g_574.f2,&g_574.f2,&g_574.f2,&g_574.f2,&g_574.f2,&g_574.f2,&g_574.f2};
                int i;
            }
        }
        for (g_294 = 0; (g_294 == 35); g_294++)
        {
            struct S0 **l_777 = (void*)0;
            int l_787 = 0x55A24777L;
            int l_788 = 0x2A2D4A09L;
            int *l_798[4] = {&g_574.f2,&g_574.f2,&g_574.f2,&g_574.f2};
            int i;
            (*l_737) = (*l_737);
            for (g_541.f1 = 26; (g_541.f1 == 34); g_541.f1 = safe_add_func_uint32_t_u_u(g_541.f1, 8))
            {
                const unsigned short l_764 = 0xBD1DL;
                short *l_780 = &g_301.f0;
                struct S1 *l_784[6][7] = {{(void*)0,&g_69[1],&g_69[4],&g_69[4],&g_69[1],&g_69[4],&g_69[4]},{&g_69[1],&g_69[1],(void*)0,&g_574,&g_574,(void*)0,&g_574},{&g_574,&g_69[4],&g_69[4],&g_574,&g_69[4],(void*)0,&g_574},{(void*)0,&g_574,&g_69[4],&g_69[4],&g_574,(void*)0,&g_69[4]},{&g_574,&g_574,(void*)0,&g_69[1],&g_69[1],(void*)0,&g_574},{&g_574,&g_69[4],(void*)0,&g_574,&g_69[4],&g_69[4],&g_574}};
                long long *l_786 = (void*)0;
                int i, j;
                for (g_498 = (-25); (g_498 != 10); g_498 = safe_add_func_uint8_t_u_u(g_498, 4))
                {
                    char l_765[10] = {(-3L),(-3L),(-3L),(-3L),(-3L),(-3L),(-3L),(-3L),(-3L),(-3L)};
                    int i;
                    (***g_432) = (***g_432);
                    for (g_12.f1 = 0; (g_12.f1 <= 0); g_12.f1 += 1)
                    {
                        int l_763 = (-1L);
                        (*g_116) = (safe_sub_func_uint8_t_u_u(1UL, (safe_rshift_func_uint16_t_u_s(((*l_737) = (safe_add_func_uint8_t_u_u(l_763, ((void*)0 == &g_180)))), 3))));
                        if (l_764)
                            break;
                    }
                    if (l_764)
                        continue;
                    if ((((*g_156) | p_3) ^ ((*l_737) = l_765[4])))
                    {
                        (*g_116) = func_8((*g_156));
                    }
                    else
                    {
                        const struct S0 *l_767[6][3][9] = {{{(void*)0,&g_541,(void*)0,(void*)0,&g_12,&g_12,&g_574.f3,(void*)0,(void*)0},{&g_34[3][5],&g_456,&g_34[1][5],&g_541,&g_541,&g_34[1][5],&g_456,&g_34[3][5],&g_69[4].f3},{&g_69[4].f3,(void*)0,&g_12,&g_69[4].f3,&g_69[4].f3,(void*)0,&g_541,(void*)0,&g_541}},{{&g_69[4].f3,&g_34[3][5],&g_34[3][5],&g_456,&g_456,&g_541,&g_34[0][3],&g_34[3][5],&g_34[0][3]},{&g_12,(void*)0,&g_34[5][1],&g_34[5][1],(void*)0,&g_12,(void*)0,&g_69[4].f3,&g_12},{&g_541,&g_456,&g_456,&g_34[3][5],&g_34[3][5],&g_69[4].f3,&g_34[3][5],&g_34[3][5],&g_34[3][5]}},{{(void*)0,(void*)0,&g_12,&g_12,&g_574.f3,(void*)0,(void*)0,(void*)0,&g_574.f3},{&g_69[4].f3,&g_34[3][5],&g_34[3][5],&g_69[4].f3,&g_574.f3,&g_574.f3,&g_34[0][3],&g_34[3][5],&g_456},{(void*)0,&g_12,&g_12,&g_574.f3,&g_69[4].f3,&g_69[4].f3,&g_541,&g_12,(void*)0}},{{&g_34[3][5],&g_34[3][5],&g_69[4].f3,&g_34[1][5],&g_574.f3,&g_34[3][5],&g_574.f3,&g_34[1][5],&g_69[4].f3},{&g_69[4].f3,&g_69[4].f3,&g_12,&g_69[4].f3,&g_574.f3,&g_69[4].f3,(void*)0,&g_12,&g_69[4].f3},{&g_541,&g_34[5][0],&g_69[4].f3,(void*)0,&g_34[3][5],&g_34[3][5],&g_34[5][0],&g_574.f3,&g_456}},{{&g_541,&g_541,&g_12,&g_12,(void*)0,&g_12,&g_12,&g_541,&g_541},{&g_34[3][5],&g_34[3][5],&g_541,&g_456,&g_574.f3,&g_34[3][5],&g_34[1][5],&g_541,&g_69[4].f3},{(void*)0,(void*)0,(void*)0,&g_69[4].f3,&g_12,(void*)0,&g_541,(void*)0,(void*)0}},{{&g_456,&g_574.f3,&g_34[1][5],&g_34[3][5],&g_34[1][5],&g_574.f3,&g_456,&g_34[3][5],&g_34[3][5]},{(void*)0,&g_12,(void*)0,&g_69[4].f3,&g_12,(void*)0,&g_12,&g_12,(void*)0},{&g_34[5][0],&g_456,&g_34[3][5],&g_574.f3,&g_34[3][5],(void*)0,&g_34[3][5],&g_34[3][5],(void*)0}}};
                        const struct S0 **l_766[10] = {&l_767[1][2][0],&l_767[5][1][7],&l_767[1][2][0],&l_767[5][1][7],&l_767[1][2][0],&l_767[5][1][7],&l_767[1][2][0],&l_767[5][1][7],&l_767[1][2][0],&l_767[5][1][7]};
                        int i, j, k;
                        g_540[0] = (void*)0;
                        (*g_116) = (*g_435);
                    }
                }
                for (g_244.f0 = 0; (g_244.f0 != (-3)); g_244.f0--)
                {
                    unsigned long long * const **l_776 = (void*)0;
                    int l_781 = 0x78A0C35FL;
                    short *l_785 = &g_37;
                    for (g_244.f2 = 0; (g_244.f2 >= 9); g_244.f2 = safe_add_func_uint16_t_u_u(g_244.f2, 7))
                    {
                        long long l_774 = 1L;
                        (*g_116) = (*l_737);
                        (*l_737) = (safe_add_func_uint32_t_u_u(l_774, (l_775[4] == &g_150)));
                        if ((*l_737))
                            continue;
                    }
                    (**g_433) = l_737;
                    if (((void*)0 == l_776))
                    {
                        (*g_116) = 0x8630CF5FL;
                        if (p_3)
                            break;
                    }
                    else
                    {
                        struct S0 ***l_778 = &l_777;
                        int l_783 = 0xA62ED38CL;
                        (*l_778) = l_777;
                        if ((*l_737))
                            continue;
                        (*l_737) = ((func_8(((0xAF76L ^ ((safe_unary_minus_func_uint64_t_u((l_780 == (l_785 = func_62(func_20(l_781, (*g_175), l_782), &l_781, (*g_125), l_783, l_784[2][5]))))) != 0xB3FFF38F71D27F0CLL)) ^ 0L)) == 8L) || l_764);
                        (***g_599) = (*g_124);
                    }
                }
                if ((((l_787 = p_3) != (l_788 > (*g_199))) != p_3))
                {
                    unsigned l_791 = 1UL;
                    unsigned short *l_796 = &g_12.f2;
                    (*g_116) = (g_301.f0 <= ((0x25CE2D40L > (safe_mod_func_int16_t_s_s((func_4(p_3, l_791) <= (safe_rshift_func_uint16_t_u_s((safe_sub_func_int16_t_s_s((l_796 == (void*)0), ((*l_796) = (1UL != (((g_69[4].f1 && 1UL) || (*g_175)) <= (-3L)))))), 8))), l_797))) == g_69[4].f1));
                    if (p_3)
                    {
                        return p_3;
                    }
                    else
                    {
                        unsigned long long *l_803 = &g_804;
                        long long l_805 = 0x97CAFDA0547236EBLL;
                        l_798[1] = &l_787;
                        (*l_737) = (!func_8(((*g_156) = (safe_add_func_uint32_t_u_u((*g_603), (g_574.f3.f2 < (func_4((****g_432), ((safe_add_func_int8_t_s_s(((p_3 || (((*l_737) > 0UL) < p_3)) <= (*g_156)), ((func_8(((*l_803) = (*g_156))) > 4UL) | g_456.f3))) && l_805)) == 9UL)))))));
                        (*l_737) = p_3;
                        return p_3;
                    }
                }
                else
                {
                    const unsigned short l_806 = 0x7E2FL;
                    if (p_3)
                        break;
                    (*l_737) = p_3;
                    g_574.f2 = ((*g_116) = l_699);
                    if (l_806)
                        continue;
                }
            }
        }
        if (func_4((*g_435), ((safe_add_func_int32_t_s_s((safe_lshift_func_int8_t_s_u(((safe_mod_func_int32_t_s_s((*l_737), (**g_602))) < (((**l_823) = (safe_add_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u(((*l_828) = ((*l_827) = (l_699 || (safe_add_func_int8_t_s_s((-3L), (safe_mod_func_uint8_t_u_u(p_3, p_3))))))), p_3)), 0x81L))) == 0xB68CC04DL)), (*l_737))), (*g_603))) < g_574.f3.f3)))
        {
            for (g_12.f2 = 7; (g_12.f2 == 36); g_12.f2 = safe_add_func_uint8_t_u_u(g_12.f2, 7))
            {
                int l_832[9] = {0L,9L,0L,9L,0L,9L,0L,9L,0L};
                int i;
                for (l_699 = 0; (l_699 <= 2); l_699 += 1)
                {
                    long long l_831 = 0x19CE6A30227A9CECLL;
                    l_831 = func_8(p_3);
                    for (g_804 = 0; (g_804 <= 2); g_804 += 1)
                    {
                        return l_832[1];
                    }
                }
                (*g_116) = l_832[3];
                (*g_825) = (*g_825);
            }
            (**l_823) = (safe_sub_func_uint32_t_u_u(func_8((**l_823)), (safe_lshift_func_uint8_t_u_u((*l_737), 4))));
        }
        else
        {
            (**g_433) = (**g_433);
        }
    }
    if ((*g_116))
    {
        struct S2 *l_851[6] = {&g_301,&g_301,&g_301,&g_301,&g_301,&g_301};
        int i;
        for (g_294 = 0; (g_294 != 24); g_294++)
        {
            struct S2 **l_841 = &g_180;
            for (g_541.f1 = 0; (g_541.f1 >= 29); g_541.f1 = safe_add_func_uint8_t_u_u(g_541.f1, 7))
            {
                for (l_797 = 0; l_797 < 4; l_797 += 1)
                {
                    for (g_574.f2 = 0; g_574.f2 < 5; g_574.f2 += 1)
                    {
                        g_171[l_797][g_574.f2] = (void*)0;
                    }
                }
            }
            (***g_432) = (*l_823);
            (*l_841) = l_750;
        }
        for (g_10 = 0; (g_10 < (-1)); g_10--)
        {
            for (g_574.f1 = 4; (g_574.f1 != 6); ++g_574.f1)
            {
                short l_850 = (-1L);
                for (g_173 = 2; (g_173 >= 0); g_173 -= 1)
                {
                    int l_853[2][7] = {{0xBAA155F1L,0x23AA6868L,0x0F4A2EBEL,0x23AA6868L,0xBAA155F1L,0xBAA155F1L,0x23AA6868L},{0xA4E290ABL,0x39B6E1CAL,0xA4E290ABL,0x23AA6868L,0x23AA6868L,0xA4E290ABL,0x39B6E1CAL}};
                    int i, j;
                    (*g_825) = (*l_823);
                    if ((**g_825))
                    {
                        l_846 = (**g_433);
                        (*g_116) = (*g_826);
                    }
                    else
                    {
                        int *l_847 = &g_69[4].f2;
                        (***g_432) = l_847;
                    }
                    (*g_826) = (safe_lshift_func_int16_t_s_s((l_850 && p_3), 3));
                    if ((***g_433))
                    {
                        struct S2 **l_852[2];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_852[i] = (void*)0;
                        (**g_433) = (*l_823);
                        (**g_433) = (*g_825);
                        g_180 = l_851[2];
                    }
                    else
                    {
                        return l_853[0][4];
                    }
                }
                if (g_854)
                    break;
            }
        }
    }
    else
    {
        char l_865 = 0L;
        int *l_878 = (void*)0;
        int l_898 = (-1L);
        unsigned l_914 = 0x695BEE7DL;
        unsigned long long l_933 = 0x8FF89D26E0501B24LL;
        long long *l_935 = &g_173;
        long long **l_934 = &l_935;
        int *l_998 = &g_25;
        short ***l_1001 = &g_170;
        struct S2 * const l_1012 = (void*)0;
        int * const l_1019 = &g_69[4].f2;
        struct S0 **l_1037 = (void*)0;
        struct S1 *l_1046[6][1][4] = {{{(void*)0,(void*)0,&g_69[4],(void*)0}},{{(void*)0,&g_902,&g_902,(void*)0}},{{&g_902,(void*)0,&g_902,&g_902}},{{&g_902,&g_902,(void*)0,&g_902}},{{&g_902,&g_69[4],&g_69[4],&g_902}},{{&g_69[4],&g_902,&g_69[4],&g_69[4]}}};
        int i, j, k;
        if ((safe_add_func_uint64_t_u_u((safe_sub_func_uint32_t_u_u(((safe_lshift_func_int8_t_s_u((**l_823), (p_3 ^ (safe_mod_func_uint64_t_u_u(((*g_156) = (safe_add_func_uint32_t_u_u(func_8(((((l_865 < ((safe_rshift_func_int8_t_s_s((p_3 <= ((l_868 > ((safe_sub_func_int16_t_s_s(((safe_mod_func_uint8_t_u_u((func_8((**l_823)) ^ l_873), (safe_lshift_func_int8_t_s_u(l_865, 6)))) >= 0xD2BA4A3FL), 0xB146L)) >= 0x9B320473L)) == p_3)), g_244.f2)) && 4L)) & (*g_199)) & 0x53L) > (**g_198))), 0x57A1165FL))), 7L))))) | p_3), 0xD786A168L)), 0L)))
        {
            short l_881 = (-4L);
            int *l_888[6][10][4] = {{{&g_207,&g_69[4].f2,&g_207,&l_873},{&g_574.f2,&g_207,&g_574.f2,&g_207},{&g_574.f2,&g_574.f2,(void*)0,&g_574.f2},{&g_69[4].f2,&l_873,&g_207,&l_873},{&g_25,&l_873,&l_873,&g_207},{&g_69[4].f2,&g_69[4].f2,&g_25,&g_207},{&l_873,&g_25,&g_207,&g_25},{&l_873,(void*)0,&g_25,&g_207},{&g_69[4].f2,&g_25,&l_873,(void*)0},{&g_25,&g_574.f2,&g_207,&g_574.f2}},{{&g_69[4].f2,(void*)0,(void*)0,&l_873},{&g_574.f2,&l_873,&g_574.f2,&g_25},{&g_574.f2,&g_25,&g_207,&g_207},{&g_207,(void*)0,&g_207,&g_574.f2},{(void*)0,&l_873,&g_574.f2,&l_873},{&g_25,&g_69[4].f2,&g_574.f2,&g_574.f2},{&g_207,&l_873,&g_574.f2,&g_25},{&g_207,&g_25,(void*)0,&g_574.f2},{(void*)0,&g_207,&g_25,&g_25},{&g_25,&l_873,(void*)0,&g_25}},{{(void*)0,&g_69[4].f2,(void*)0,&g_574.f2},{&l_873,&g_25,&g_25,&l_873},{&g_207,&l_873,&l_873,&g_207},{&g_574.f2,&g_25,&g_69[4].f2,(void*)0},{&g_207,&g_207,&g_69[4].f2,(void*)0},{&g_207,&g_207,&g_207,(void*)0},{&l_873,&g_207,&g_207,(void*)0},{&g_574.f2,&g_25,&g_69[4].f2,&g_207},{&l_873,&l_873,&l_873,&l_873},{&g_574.f2,&g_25,(void*)0,&g_69[4].f2}},{{&l_873,&l_873,&g_207,&g_69[4].f2},{&g_25,(void*)0,&g_207,&g_574.f2},{&l_873,&l_873,&g_207,&g_207},{&l_873,&g_574.f2,(void*)0,&g_207},{&g_207,&g_25,&l_873,&g_25},{&g_207,&l_873,&g_574.f2,(void*)0},{&g_574.f2,&g_25,&g_25,&g_25},{(void*)0,&g_574.f2,&g_207,&g_207},{&g_574.f2,&g_207,(void*)0,&g_207},{&g_207,&g_25,&g_25,&g_207}},{{&g_574.f2,&g_207,&l_873,&g_25},{&g_207,&g_574.f2,&g_207,&g_574.f2},{&l_873,&g_574.f2,&g_25,&g_207},{&g_574.f2,(void*)0,(void*)0,&g_574.f2},{&g_574.f2,&l_873,(void*)0,(void*)0},{(void*)0,(void*)0,&g_574.f2,&l_873},{&g_574.f2,&g_69[4].f2,&g_25,&g_574.f2},{&g_25,&g_574.f2,&g_207,&g_25},{&g_25,&g_207,&g_25,&g_574.f2},{&g_25,&g_207,(void*)0,&l_873}},{{(void*)0,(void*)0,&g_207,&g_574.f2},{&g_207,(void*)0,&l_873,&g_574.f2},{&g_207,(void*)0,&g_574.f2,(void*)0},{&g_25,&g_574.f2,&g_574.f2,&g_207},{&g_25,&l_873,&g_207,&l_873},{(void*)0,&g_25,(void*)0,&g_69[4].f2},{&g_69[4].f2,(void*)0,&g_25,&g_207},{&l_873,&g_574.f2,&l_873,(void*)0},{(void*)0,&g_207,&g_25,&g_25},{&g_574.f2,(void*)0,&g_574.f2,&g_574.f2}}};
            struct S1 *l_889 = (void*)0;
            struct S0 *l_897 = &g_12;
            int i, j, k;
            for (g_12.f0 = 0; (g_12.f0 < 4); ++g_12.f0)
            {
                int l_892[2][3][10] = {{{0x82CB5CE5L,0x7DDF644AL,2L,0x38A2CCE4L,0L,0xD6388123L,1L,0x79EB90E2L,0x79EB90E2L,1L},{7L,0x7DDF644AL,1L,1L,0x7DDF644AL,7L,0L,(-9L),0x445C55D0L,0xD6388123L},{(-9L),0xADECC74AL,1L,7L,0x38A2CCE4L,4L,0L,2L,0L,4L}},{{(-9L),0x79EB90E2L,0x82CB5CE5L,0x79EB90E2L,4L,0x38A2CCE4L,7L,1L,0xADECC74AL,(-9L)},{0x38A2CCE4L,7L,1L,0xADECC74AL,(-9L),0x82CB5CE5L,0x01888D4BL,0x01888D4BL,0x82CB5CE5L,(-9L)},{2L,0xADECC74AL,0xADECC74AL,2L,4L,1L,(-1L),0x38A2CCE4L,0x445C55D0L,7L}}};
                unsigned *l_899 = &g_900[4];
                int i, j, k;
                (**g_599) = (void*)0;
                (**g_433) = l_878;
                for (g_456.f0 = (-14); (g_456.f0 <= 11); ++g_456.f0)
                {
                    if (((*g_116) = ((-1L) & ((*g_156) = (18446744073709551606UL & l_881)))))
                    {
                        char *l_885 = &l_865;
                        int l_886 = 0xA83B81DDL;
                        int *l_887 = &g_207;
                        (**l_823) = (!5L);
                        (*l_887) = (((**l_823) = ((safe_add_func_uint8_t_u_u((*g_175), ((l_884 != l_885) ^ p_3))) <= (l_886 <= p_3))) & 5UL);
                    }
                    else
                    {
                        (*g_825) = l_888[3][8][1];
                        (**l_823) = p_3;
                        (**g_433) = (**g_433);
                    }
                }
                l_901 = func_41(p_3, l_889, g_25, ((*l_899) = ((*l_846) < ((*g_603) = ((safe_lshift_func_uint8_t_u_s((*g_175), (((**g_170) = l_892[0][2][8]) != p_3))) != (safe_add_func_uint64_t_u_u((*g_156), (l_898 = (safe_rshift_func_int8_t_s_u((((*g_531) = (l_897 == &g_34[0][0])) < 0xE2C4L), 4))))))))));
            }
            (*g_116) = func_8(p_3);
        }
        else
        {
            short l_932 = 0xCE13L;
            int l_939 = 0L;
            int l_940 = 0x9A35A934L;
            struct S1 l_967 = {0x767CD469L,1L,0xC86727D8L,{0x421DD962L,255UL,0xCC88L,0x13130B4FL}};
            int **l_972 = &l_878;
            if ((safe_add_func_int8_t_s_s((safe_rshift_func_int16_t_s_u(p_3, 10)), (p_3 != (safe_mod_func_uint8_t_u_u(((((g_173 = (safe_rshift_func_int16_t_s_u((**g_170), 5))) >= g_541.f1) & ((*g_531) = (+(*l_846)))) | (*g_175)), p_3))))))
            {
                short l_930 = 0L;
                unsigned char l_931 = 0xEDL;
                unsigned long long l_938 = 0x2C69D98FF3D47B54LL;
                int l_941 = 0L;
                (*l_823) = (*g_825);
                for (l_865 = 0; (l_865 <= 3); l_865 += 1)
                {
                    int *l_911 = &l_898;
                    if ((g_37 != (+g_69[4].f0)))
                    {
                        (*g_825) = l_911;
                        (**g_825) = p_3;
                    }
                    else
                    {
                        struct S1 **l_915 = (void*)0;
                        int l_916 = 1L;
                        (*l_911) = (func_8(p_3) == (safe_mul_func_int8_t_s_s(0L, ((*g_175) = (l_914 > g_12.f0)))));
                        if ((****g_432))
                            continue;
                        (**g_599) = l_915;
                        l_933 = (p_3 || (((l_916 || (+((safe_rshift_func_uint8_t_u_u(((+((**g_198) = (*g_199))) < (safe_unary_minus_func_uint32_t_u(0UL))), ((((safe_mod_func_int32_t_s_s(p_3, (safe_lshift_func_int8_t_s_s(g_25, p_3)))) | 0x0C2D2DF3L) && (safe_sub_func_int64_t_s_s((safe_add_func_uint16_t_u_u((safe_sub_func_uint64_t_u_u(func_8(l_930), l_931)), l_932)), p_3))) != 0x70A112C4L))) ^ p_3))) > (**g_602)) || p_3));
                    }
                    for (g_150 = 3; (g_150 >= 0); g_150 -= 1)
                    {
                        long long ***l_936 = (void*)0;
                        long long ***l_937 = &l_934;
                        if (l_932)
                            break;
                        (*l_937) = l_934;
                        (*l_911) = ((*l_911) == 6UL);
                    }
                    if ((l_940 = ((*l_911) = (l_939 = func_8(((*g_156) = l_938))))))
                    {
                        l_941 = p_3;
                        (**g_433) = (**g_433);
                    }
                    else
                    {
                        unsigned char l_942 = 0xD3L;
                        return l_942;
                    }
                    for (g_541.f2 = 0; (g_541.f2 <= 2); g_541.f2 += 1)
                    {
                        (*l_911) = (safe_add_func_int8_t_s_s(func_8(p_3), (g_945 == &g_946)));
                    }
                }
                (**g_433) = &l_940;
                for (g_12.f1 = 0; (g_12.f1 < 17); ++g_12.f1)
                {
                    unsigned char l_950 = 2UL;
                    l_950 = p_3;
                    for (g_10 = 0; (g_10 >= 0); g_10 -= 1)
                    {
                        int i, j;
                        g_33[g_10][(g_10 + 1)] = l_782;
                    }
                    for (l_933 = (-6); (l_933 <= 14); l_933++)
                    {
                        (*g_825) = (*l_823);
                        if (l_950)
                            continue;
                    }
                }
            }
            else
            {
                const struct S1 *l_965[1][3];
                const struct S1 **l_964 = &l_965[0][1];
                const struct S1 ***l_963[5][5][5] = {{{&l_964,&l_964,(void*)0,&l_964,&l_964},{&l_964,(void*)0,&l_964,&l_964,(void*)0},{&l_964,(void*)0,(void*)0,&l_964,(void*)0},{&l_964,&l_964,&l_964,(void*)0,&l_964},{&l_964,&l_964,(void*)0,(void*)0,&l_964}},{{&l_964,&l_964,&l_964,&l_964,&l_964},{&l_964,&l_964,(void*)0,&l_964,&l_964},{&l_964,&l_964,&l_964,&l_964,&l_964},{&l_964,(void*)0,(void*)0,&l_964,(void*)0},{&l_964,(void*)0,&l_964,&l_964,&l_964}},{{&l_964,&l_964,&l_964,(void*)0,&l_964},{&l_964,&l_964,&l_964,&l_964,&l_964},{&l_964,&l_964,(void*)0,&l_964,&l_964},{&l_964,&l_964,&l_964,&l_964,&l_964},{&l_964,&l_964,(void*)0,&l_964,(void*)0}},{{&l_964,&l_964,(void*)0,&l_964,&l_964},{(void*)0,(void*)0,&l_964,(void*)0,(void*)0},{&l_964,&l_964,&l_964,&l_964,&l_964},{&l_964,(void*)0,&l_964,(void*)0,(void*)0},{&l_964,&l_964,&l_964,&l_964,&l_964}},{{(void*)0,&l_964,(void*)0,(void*)0,(void*)0},{&l_964,&l_964,(void*)0,&l_964,&l_964},{(void*)0,&l_964,(void*)0,(void*)0,&l_964},{&l_964,&l_964,&l_964,&l_964,&l_964},{(void*)0,&l_964,&l_964,&l_964,(void*)0}}};
                const struct S1 ****l_962 = &l_963[3][2][3];
                int *l_966 = (void*)0;
                int l_975 = 7L;
                int i, j, k;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 3; j++)
                        l_965[i][j] = (void*)0;
                }
                for (g_574.f0 = 0; (g_574.f0 == 42); g_574.f0++)
                {
                    unsigned char l_959[5][1] = {{255UL},{255UL},{255UL},{255UL},{255UL}};
                    short *l_969 = &g_14;
                    struct S0 **l_973[6];
                    int l_974 = (-1L);
                    int *l_976 = &l_974;
                    int *l_977 = &g_69[4].f2;
                    int i, j;
                    for (i = 0; i < 6; i++)
                        l_973[i] = &l_782;
                    if (((g_69[4].f3.f3 ^ 1L) >= ((*g_116) = (((***g_169) = (((p_3 > (l_955 == (void*)0)) | p_3) <= (safe_sub_func_int32_t_s_s(l_959[4][0], (((**l_823) > (***g_433)) != 4294967293UL))))) | p_3))))
                    {
                        unsigned long long **l_961 = &g_156;
                        unsigned long long ***l_960 = &l_961;
                        struct S1 *l_968[2][5] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_902,&g_69[4],&g_902,&g_69[4],&g_902}};
                        int ***l_970 = (void*)0;
                        int ***l_971[1][5][3] = {{{&g_95,&g_95,&g_95},{&l_823,&g_95,&l_823},{&g_95,&g_95,&g_95},{&l_823,&g_95,&l_823},{&g_95,&g_95,&g_95}}};
                        int i, j, k;
                        (***g_432) = (*l_823);
                        g_574.f2 = (l_974 = func_8((((p_3 == func_51((l_972 = &g_116), l_967.f3.f0, &g_116, &l_782, l_973[3])) <= 65530UL) ^ 0xD5L)));
                        l_975 = ((**l_823) = ((**g_198) >= 0x7261L));
                        l_976 = (*l_823);
                    }
                    else
                    {
                        (*l_976) = ((*g_116) = func_8((*g_156)));
                        (*l_976) = 9L;
                        if ((*l_976))
                            break;
                        (***g_432) = (*l_823);
                    }
                    if (((void*)0 == &g_10))
                    {
                        int ***l_980 = (void*)0;
                        (**l_823) = ((~((*g_116) & (*g_603))) | 0x5EL);
                    }
                    else
                    {
                        (*l_977) = ((&g_170 == (void*)0) && (safe_sub_func_uint32_t_u_u(4294967295UL, (*g_603))));
                    }
                }
                for (g_574.f2 = 5; (g_574.f2 <= (-8)); g_574.f2--)
                {
                    int *l_985 = &l_898;
                    (*g_116) = p_3;
                    (*g_825) = l_985;
                    for (g_207 = 0; (g_207 <= 3); g_207 += 1)
                    {
                        unsigned long long *l_992 = &l_933;
                        unsigned long long *l_993 = &g_804;
                        (*l_972) = &l_975;
                        (***g_432) = (***g_432);
                        (**g_825) = (safe_add_func_int8_t_s_s(((*g_156) < ((*l_993) = ((*l_992) = (safe_lshift_func_uint8_t_u_u((safe_add_func_uint16_t_u_u(func_4(((**g_825) = ((**l_823) = (func_4((*g_826), func_4((*g_116), p_3)) >= (**g_825)))), (*g_156)), 0x23B3L)), 5))))), 255UL));
                    }
                }
                for (g_574.f0 = (-9); (g_574.f0 > 44); ++g_574.f0)
                {
                    for (g_902.f2 = 12; (g_902.f2 != (-21)); g_902.f2 = safe_sub_func_int32_t_s_s(g_902.f2, 6))
                    {
                        if (p_3)
                            break;
                        if (p_3)
                            break;
                    }
                    l_878 = l_998;
                }
            }
            if (p_3)
            {
                for (g_541.f0 = 0; (g_541.f0 <= 2); g_541.f0 += 1)
                {
                    return p_3;
                }
                return p_3;
            }
            else
            {
                (**g_433) = (**g_433);
            }
            if (((((&g_946 == &g_946) || (g_173 || ((1L < (g_498 | ((**g_198) != ((*l_824) = ((**g_946) < (((*g_156) = (safe_add_func_uint16_t_u_u((l_1001 == l_1002), (*g_199)))) > p_3)))))) && p_3))) >= (*l_998)) && g_10))
            {
                char ***l_1005 = &g_1003;
                int *l_1011[4][10] = {{&l_967.f2,&l_967.f2,(void*)0,&g_902.f2,(void*)0,&l_967.f2,&l_967.f2,(void*)0,&g_902.f2,(void*)0},{&l_940,&l_940,&g_902.f2,&l_967.f2,&g_902.f2,&l_940,&l_940,&g_902.f2,&l_967.f2,&g_902.f2},{&l_940,&l_940,&g_902.f2,&l_967.f2,&g_902.f2,&l_940,&l_940,&g_902.f2,&l_967.f2,&g_902.f2},{&l_940,&l_940,&g_902.f2,&l_967.f2,&g_902.f2,&l_940,&l_940,&g_902.f2,&l_967.f2,&g_902.f2}};
                int i, j;
                (***g_432) = (void*)0;
                if ((((*l_1005) = g_1003) == &g_1004))
                {
                    for (g_173 = 0; (g_173 > (-28)); g_173 = safe_sub_func_int64_t_s_s(g_173, 6))
                    {
                        (***g_432) = &l_898;
                        (***g_432) = (**g_433);
                        return l_1008;
                    }
                }
                else
                {
                    for (g_456.f1 = 0; (g_456.f1 < 13); ++g_456.f1)
                    {
                        (*l_972) = l_1011[3][3];
                        if (p_3)
                            break;
                    }
                }
                (*l_998) = (-1L);
                for (g_12.f0 = 0; g_12.f0 < 4; g_12.f0 += 1)
                {
                    for (l_699 = 0; l_699 < 10; l_699 += 1)
                    {
                        l_1011[g_12.f0][l_699] = &g_25;
                    }
                }
            }
            else
            {
                struct S2 **l_1013 = &g_180;
                int *l_1014 = &g_25;
                (***g_432) = ((*g_825) = &l_898);
                (*l_1013) = l_1012;
                if (l_967.f1)
                {
                    (*g_825) = &l_939;
                    (***g_432) = l_1014;
                }
                else
                {
                    int l_1017[1];
                    int **l_1020[8][8][1] = {{{(void*)0},{&g_116},{(void*)0},{&g_116},{(void*)0},{&g_116},{(void*)0},{&g_116}},{{(void*)0},{&g_116},{(void*)0},{&g_116},{(void*)0},{&g_116},{(void*)0},{&g_116}},{{(void*)0},{&g_116},{(void*)0},{&g_116},{(void*)0},{&g_116},{(void*)0},{&g_116}},{{(void*)0},{&g_116},{(void*)0},{&g_116},{(void*)0},{&g_116},{(void*)0},{&g_116}},{{(void*)0},{&g_116},{(void*)0},{&g_116},{(void*)0},{&g_116},{(void*)0},{&g_116}},{{(void*)0},{&g_116},{(void*)0},{&g_116},{(void*)0},{&g_116},{(void*)0},{&g_116}},{{(void*)0},{&g_116},{(void*)0},{&g_116},{(void*)0},{&g_116},{(void*)0},{&g_116}},{{(void*)0},{&g_116},{(void*)0},{&g_116},{(void*)0},{&g_116},{(void*)0},{&g_116}}};
                    int **l_1021 = &l_878;
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                        l_1017[i] = 2L;
                    (*g_826) = ((*l_1014) = (((*g_199) = (*l_998)) <= ((***l_1002) = (safe_rshift_func_uint8_t_u_s((*g_175), l_1017[0])))));
                    for (l_967.f2 = 2; (l_967.f2 >= 0); l_967.f2 -= 1)
                    {
                        long long l_1018 = 0x7963B4A99C868172LL;
                        return l_1018;
                    }
                    (*l_1021) = l_1019;
                }
            }
            for (g_541.f0 = 0; (g_541.f0 > 2); g_541.f0 = safe_add_func_int8_t_s_s(g_541.f0, 1))
            {
                unsigned char l_1038 = 255UL;
                for (g_804 = 0; (g_804 < 14); g_804++)
                {
                    int *l_1028[2][4][4];
                    struct S1 *l_1032 = &g_69[4];
                    struct S1 **l_1033 = &l_901;
                    struct S2 * const **l_1034 = &g_663;
                    struct S2 * const *l_1036 = &l_1012;
                    struct S2 * const **l_1035 = &l_1036;
                    int i, j, k;
                    for (i = 0; i < 2; i++)
                    {
                        for (j = 0; j < 4; j++)
                        {
                            for (k = 0; k < 4; k++)
                                l_1028[i][j][k] = &g_69[4].f2;
                        }
                    }
                    for (g_456.f1 = 0; (g_456.f1 >= 24); g_456.f1++)
                    {
                        short l_1029 = (-9L);
                        l_1028[1][0][0] = (void*)0;
                        return l_1029;
                    }
                    (*l_1033) = l_1032;
                    (*l_1035) = ((*l_1034) = &l_750);
                    if (p_3)
                        break;
                }
                l_939 = (p_3 <= l_1038);
                for (l_865 = 5; (l_865 >= 0); l_865 -= 1)
                {
                    int i;
                    (***g_432) = (*g_825);
                    if (g_900[(l_865 + 1)])
                        continue;
                    (*l_1019) = ((*g_175) <= (safe_lshift_func_int16_t_s_u(4L, 9)));
                    for (g_301.f0 = 0; (g_301.f0 <= 2); g_301.f0 += 1)
                    {
                        int i;
                        l_1045 = (safe_add_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u((**g_1003), 0)), (*g_199)));
                        l_901 = l_1046[2][0][0];
                    }
                }
            }
        }
    }
    if ((*l_846))
    {
        return p_3;
    }
    else
    {
        long long *l_1059 = &g_173;
        int l_1069 = (-8L);
        int l_1091 = 0xBFE44531L;
        const unsigned char **l_1114 = (void*)0;
        const unsigned char ***l_1113 = &l_1114;
        unsigned l_1119 = 0x4985797DL;
        unsigned long long **l_1156 = &g_156;
        unsigned long long ** const *l_1155 = &l_1156;
        if ((*l_846))
        {
            int * const l_1047 = &g_69[4].f2;
            int **l_1048[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int **l_1049 = &l_740;
            int i;
            (*l_1049) = l_1047;
        }
        else
        {
            long long *l_1060 = &g_498;
            int l_1126 = (-10L);
            int **l_1130 = &l_740;
            for (g_173 = 14; (g_173 > (-19)); g_173 = safe_sub_func_uint64_t_u_u(g_173, 7))
            {
                long long l_1054 = 0x4CB77C0A8911B573LL;
                struct S0 **l_1056 = &g_33[0][0];
                struct S0 ***l_1055[8][6][1] = {{{(void*)0},{&l_1056},{&l_1056},{&l_1056},{(void*)0},{&l_1056}},{{&l_1056},{&l_1056},{&l_1056},{&l_1056},{(void*)0},{&l_1056}},{{&l_1056},{&l_1056},{(void*)0},{&l_1056},{&l_1056},{&l_1056}},{{&l_1056},{&l_1056},{(void*)0},{&l_1056},{&l_1056},{&l_1056}},{{(void*)0},{&l_1056},{&l_1056},{&l_1056},{&l_1056},{&l_1056}},{{(void*)0},{&l_1056},{&l_1056},{&l_1056},{(void*)0},{&l_1056}},{{&l_1056},{&l_1056},{&l_1056},{&l_1056},{(void*)0},{&l_1056}},{{&l_1056},{&l_1056},{(void*)0},{&l_1056},{&l_1056},{&l_1056}}};
                int *l_1058[1];
                int i, j, k;
                for (i = 0; i < 1; i++)
                    l_1058[i] = &g_207;
                for (g_456.f2 = 0; (g_456.f2 == 40); g_456.f2++)
                {
                    return l_1054;
                }
                g_1057 = (void*)0;
                (*l_823) = l_1058[0];
                return p_3;
            }
            if ((((((***l_955) = p_3) >= p_3) != (l_1059 != l_1060)) != 0x46D6BAEEAE479C91LL))
            {
                short l_1080 = 4L;
                int l_1081[5] = {0x91A06ED3L,0x91A06ED3L,0x91A06ED3L,0x91A06ED3L,0x91A06ED3L};
                long long l_1092 = (-1L);
                int *l_1094 = &l_873;
                int i;
                for (g_537 = 15; (g_537 <= (-29)); g_537--)
                {
                    int *l_1079 = &g_574.f2;
                    for (g_207 = 6; (g_207 >= 0); g_207 -= 1)
                    {
                        int i;
                        l_1069 = (func_8((safe_rshift_func_uint16_t_u_u((g_900[g_207] | ((func_4(p_3, (safe_lshift_func_int16_t_s_s((safe_sub_func_int64_t_s_s(g_574.f1, 1L)), 11))) & (***g_945)) || (&g_946 == &g_946))), (3UL < 1L)))) & p_3);
                    }
                    for (g_14 = 0; (g_14 == 14); g_14 = safe_add_func_int32_t_s_s(g_14, 7))
                    {
                        int l_1074 = 0xF9F12936L;
                        int *l_1077 = &g_207;
                        (*l_1077) = (((safe_add_func_int64_t_s_s(l_1069, (func_8(p_3) >= p_3))) | (((*g_175) = (*g_175)) < l_1074)) <= (safe_sub_func_uint32_t_u_u((**g_602), (**g_602))));
                        (*g_825) = g_1078[2][6][0];
                        l_1079 = &l_1069;
                    }
                }
                if ((l_1081[2] = func_8(func_4(l_1080, (*g_156)))))
                {
                    const struct S0 *l_1089 = &g_12;
                    const struct S0 **l_1090 = &l_1089;
                    l_1069 = (safe_mod_func_int64_t_s_s(l_1069, (func_4(l_1069, ((*g_156) = (*g_156))) ^ (safe_sub_func_uint16_t_u_u(((**l_956) = ((**g_602) < (l_1091 = ((safe_mod_func_uint64_t_u_u(0x243AF60E8F0F13F7LL, 0x1737273BAA60C0B3LL)) < ((+((g_1088 == ((*l_1090) = l_1089)) ^ p_3)) <= (**g_1003)))))), l_1092)))));
                }
                else
                {
                    short l_1103 = (-8L);
                    if ((l_1081[2] = p_3))
                    {
                        return l_1081[2];
                    }
                    else
                    {
                        int *l_1093[1][3];
                        int i, j;
                        for (i = 0; i < 1; i++)
                        {
                            for (j = 0; j < 3; j++)
                                l_1093[i][j] = &g_207;
                        }
                        l_1094 = l_1093[0][1];
                        (*l_1094) = p_3;
                    }
                    if ((l_740 != (void*)0))
                    {
                        return p_3;
                    }
                    else
                    {
                        char l_1097 = (-1L);
                        struct S0 **l_1101 = &g_33[0][0];
                        struct S0 ***l_1100[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
                        int i;
                        (*l_1094) = (safe_add_func_uint8_t_u_u((l_1097 | 0xF4C9CB89L), ((safe_add_func_uint16_t_u_u((*l_1094), l_1103)) >= 0x32L)));
                    }
                }
                (*l_823) = &l_1069;
                for (g_541.f2 = 0; (g_541.f2 > 10); g_541.f2++)
                {
                    struct S0 *l_1112[6][4] = {{&g_34[0][5],&g_34[1][4],&g_34[0][5],&g_34[3][5]},{&g_34[5][3],&g_456,&g_34[3][5],&g_34[3][5]},{&g_34[1][4],&g_34[1][4],&g_12,&g_456},{&g_456,&g_34[5][3],&g_12,&g_34[5][3]},{&g_34[1][4],&g_34[0][5],&g_34[3][5],&g_12},{&g_34[5][3],&g_34[0][5],&g_34[0][5],&g_34[5][3]}};
                    struct S2 ** const l_1115 = &g_180;
                    int l_1116 = (-1L);
                    int i, j;
                    (*g_116) = func_8(((*g_156) = ((safe_rshift_func_uint16_t_u_s(((**l_956) = (safe_rshift_func_uint16_t_u_s(func_8((((safe_mod_func_int64_t_s_s(func_4((((void*)0 != l_1112[0][2]) >= p_3), ((void*)0 == l_1113)), (*l_1094))) ^ (l_1115 == (void*)0)) ^ 0xAE0CL)), l_1116))), l_1116)) | (*g_603))));
                }
            }
            else
            {
                int *l_1120 = (void*)0;
                int *l_1121 = &l_1091;
                (*l_1121) = (safe_mod_func_uint16_t_u_u(65535UL, l_1119));
                for (g_498 = (-1); (g_498 > 28); g_498 = safe_add_func_uint8_t_u_u(g_498, 6))
                {
                    int **l_1129 = &l_1120;
                    if (func_4((safe_sub_func_uint16_t_u_u(((***l_955) = (**g_198)), l_1126)), (((**g_946) || ((**g_1003) = (**g_1003))) > (safe_mod_func_uint8_t_u_u((func_8(((*g_156) = ((l_1129 != (l_1130 = l_1129)) == ((**g_602) < 0x06EE5C4CL)))) == 0xBAL), l_1126)))))
                    {
                        long long l_1131 = 9L;
                        return l_1131;
                    }
                    else
                    {
                        (***g_432) = &l_1091;
                    }
                }
                if ((safe_sub_func_uint16_t_u_u((func_8(func_4((safe_add_func_int8_t_s_s(func_4(p_3, (*g_156)), (((*g_1004) = (safe_mod_func_int32_t_s_s(p_3, 4294967291UL))) < 0x03L))), p_3)) & p_3), p_3)))
                {
                    unsigned short l_1151 = 65535UL;
                    for (g_902.f2 = 0; (g_902.f2 < (-5)); g_902.f2--)
                    {
                        (**g_433) = ((*l_1130) = ((*g_825) = &l_1069));
                        (**g_825) = 0xAFA9EB3DL;
                    }
                    if ((safe_lshift_func_uint8_t_u_s((0UL != func_8((safe_sub_func_uint64_t_u_u(((-1L) <= (*g_156)), g_900[4])))), func_8((safe_sub_func_uint64_t_u_u(0xA44B5B4D8EA22187LL, (*g_156)))))))
                    {
                        unsigned l_1146 = 0xBA7A1091L;
                        unsigned char **l_1148[8][10] = {{&g_175,&g_175,&g_175,&g_175,&g_175,&g_175,&g_175,&g_175,&g_175,(void*)0},{&g_175,&g_175,&g_175,&g_175,&g_175,&g_175,&g_175,&g_175,&g_175,&g_175},{&g_175,&g_175,&g_175,&g_175,&g_175,&g_175,&g_175,&g_175,&g_175,&g_175},{&g_175,&g_175,&g_175,&g_175,&g_175,&g_175,&g_175,&g_175,&g_175,&g_175},{&g_175,&g_175,&g_175,&g_175,&g_175,(void*)0,(void*)0,&g_175,&g_175,&g_175},{&g_175,&g_175,&g_175,&g_175,&g_175,(void*)0,&g_175,(void*)0,&g_175,&g_175},{&g_175,&g_175,&g_175,(void*)0,&g_175,&g_175,&g_175,&g_175,&g_175,&g_175},{&g_175,&g_175,&g_175,&g_175,&g_175,&g_175,(void*)0,&g_175,(void*)0,&g_175}};
                        unsigned char ***l_1147 = &l_1148[0][7];
                        int i, j;
                        (*l_1121) = ((l_1146 != (65535UL == (l_1147 != l_1149))) | (*g_1004));
                        (*l_1121) = l_1151;
                        return p_3;
                    }
                    else
                    {
                        int *l_1152 = &l_1069;
                        (*g_825) = l_1152;
                        (*l_1130) = (*l_1130);
                    }
                    (*l_823) = (void*)0;
                }
                else
                {
                    int *l_1153 = &g_69[4].f2;
                    l_1153 = &l_1069;
                }
                l_1091 = ((safe_unary_minus_func_int8_t_s((**g_1003))) <= (((void*)0 != l_1155) || 0UL));
            }
        }
        (**g_433) = &l_873;
    }
    for (g_902.f2 = 0; (g_902.f2 <= 2); g_902.f2 += 1)
    {
        int l_1157[6][1] = {{0x68C8BD0FL},{(-3L)},{0x68C8BD0FL},{(-3L)},{0x68C8BD0FL},{(-3L)}};
        unsigned l_1158 = 0x77149F52L;
        int i, j;
        l_1157[2][0] = (****g_432);
        l_873 = l_1158;
        return p_3;
    }
    return (*l_846);
}







static unsigned char func_4(int p_5, unsigned long long p_6)
{
    struct S0 *l_19 = &g_12;
    struct S0 *l_32[6] = {&g_12,&g_12,&g_12,&g_12,&g_12,&g_12};
    struct S0 **l_31[1];
    int l_35 = 0L;
    short *l_36 = &g_37;
    int *l_38 = &g_25;
    int *l_68 = &l_35;
    int i;
    for (i = 0; i < 1; i++)
        l_31[i] = &l_32[1];
    (*l_38) = (safe_sub_func_uint16_t_u_u((safe_add_func_uint64_t_u_u(0x9D60A2215256EE97LL, (l_19 != (g_33[0][0] = func_20(g_12.f0, g_12.f1, &g_12))))), ((*l_36) = func_8(l_35))));
    for (g_14 = 0; (g_14 >= (-30)); g_14 = safe_sub_func_uint16_t_u_u(g_14, 1))
    {
        const long long l_46 = 0xFB861A7160C63704LL;
        int **l_57 = (void*)0;
        int **l_61 = &l_38;
        struct S1 *l_70 = (void*)0;
        struct S0 **l_276 = &g_33[0][0];
    }
    return (*g_175);
}







static unsigned long long func_8(unsigned long long p_9)
{
    struct S0 *l_11 = &g_12;
    int l_13 = (-1L);
    l_11 = (void*)0;
    return l_13;
}







static struct S0 * func_20(short p_21, unsigned char p_22, struct S0 * p_23)
{
    int * const l_24 = &g_25;
    int *l_27 = (void*)0;
    int **l_26 = &l_27;
    short *l_30 = &g_14;
    (*l_26) = l_24;
    g_25 = (safe_rshift_func_int16_t_s_u(((*l_30) = (*l_24)), 11));
    return &g_12;
}







static struct S1 * func_41(const int p_42, struct S1 * p_43, const long long p_44, unsigned p_45)
{
    struct S2 *l_660 = &g_301;
    short l_661 = 0x3C17L;
    unsigned long long l_662 = 1UL;
    struct S2 **l_664 = (void*)0;
    char l_679 = 0x44L;
    int l_680 = 0x0E07202FL;
    struct S1 *l_690 = &g_69[0];
    if (((safe_add_func_uint16_t_u_u(p_45, ((**g_170) = (safe_sub_func_int64_t_s_s((-1L), (l_661 = ((g_180 = l_660) != l_660))))))) > (((void*)0 == (*g_599)) >= ((l_662 < ((func_8((g_663 == (l_664 = &l_660))) | l_662) | (*g_156))) < 4294967294UL))))
    {
        (***g_432) = &p_42;
        (**g_599) = &p_43;
    }
    else
    {
        char *l_667 = &g_10;
        int *l_668 = &g_574.f2;
        (*l_668) = (safe_rshift_func_int8_t_s_u(((*l_667) = 2L), 4));
    }
    if ((safe_rshift_func_int16_t_s_s(0x9CB6L, (l_680 = ((safe_lshift_func_int8_t_s_u((safe_add_func_uint8_t_u_u(p_42, g_69[4].f3.f3)), ((safe_add_func_uint32_t_u_u(((*g_175) && (safe_sub_func_int16_t_s_s((l_661 ^ p_42), p_42))), func_8(func_8(((~(g_12.f3 & func_8(l_679))) <= 0x8FL))))) != l_679))) > (**g_602))))))
    {
        int *l_681 = &g_574.f2;
        (*l_681) = (p_42 >= ((*g_175) = (*g_175)));
    }
    else
    {
        int *l_684[4][2][10] = {{{(void*)0,(void*)0,&l_680,&l_680,(void*)0,(void*)0,&l_680,(void*)0,(void*)0,&l_680},{&g_25,&g_25,&g_25,&l_680,&l_680,&l_680,&g_25,&l_680,(void*)0,&l_680}},{{&l_680,(void*)0,(void*)0,&l_680,(void*)0,(void*)0,&l_680,&l_680,(void*)0,(void*)0},{(void*)0,&l_680,&l_680,(void*)0,(void*)0,&l_680,(void*)0,(void*)0,&l_680,&l_680}},{{(void*)0,&l_680,&g_25,&l_680,&l_680,&g_25,&l_680,(void*)0,&l_680,&g_25},{&l_680,(void*)0,&l_680,(void*)0,&l_680,&g_25,&g_25,&l_680,(void*)0,&l_680}},{{(void*)0,(void*)0,&l_680,&l_680,&g_25,&l_680,&l_680,(void*)0,(void*)0,&l_680},{(void*)0,&l_680,&g_25,&g_25,&l_680,(void*)0,&l_680,(void*)0,&l_680,&g_25}}};
        int i, j, k;
        for (g_541.f0 = (-10); (g_541.f0 < (-6)); g_541.f0 = safe_add_func_uint32_t_u_u(g_541.f0, 8))
        {
            long long l_685 = 7L;
            char l_688 = 0xA0L;
            int *l_689 = &g_69[4].f2;
            (***g_432) = l_684[1][0][4];
            l_688 = (((0xADA9EB47D17CE522LL >= (18446744073709551612UL <= l_685)) || p_42) | (p_42 & (safe_lshift_func_uint16_t_u_u(0x3842L, 14))));
            (**g_433) = l_689;
        }
    }
    return l_690;
}







static struct S1 * func_47(int p_48, int p_49, unsigned p_50)
{
    char l_516 = 0x84L;
    int **l_530[2];
    struct S1 *l_536 = (void*)0;
    struct S0 *l_538[10][3] = {{(void*)0,&g_34[3][5],(void*)0},{&g_34[3][5],(void*)0,&g_456},{(void*)0,(void*)0,&g_34[3][5]},{&g_34[5][5],&g_34[3][5],&g_34[3][5]},{&g_34[3][5],&g_34[5][5],&g_34[5][5]},{&g_34[5][5],&g_34[3][5],&g_12},{(void*)0,&g_34[3][4],&g_12},{&g_34[3][5],&g_12,&g_34[5][5]},{(void*)0,&g_34[3][5],&g_34[3][5]},{&g_12,&g_12,&g_34[3][5]}};
    char *l_554 = &g_150;
    char **l_553 = &l_554;
    unsigned long long **l_569 = &g_156;
    unsigned long long ***l_568 = &l_569;
    struct S0 **l_596 = &l_538[1][2];
    struct S0 ***l_595 = &l_596;
    unsigned char l_653 = 255UL;
    int i, j;
    for (i = 0; i < 2; i++)
        l_530[i] = &g_116;
    for (p_48 = 0; (p_48 <= 0); p_48 += 1)
    {
        unsigned char l_509 = 0UL;
        int *l_517 = &g_25;
        int *l_518 = (void*)0;
        (*l_517) = ((safe_add_func_uint32_t_u_u(l_509, ((safe_lshift_func_int16_t_s_s((~((safe_lshift_func_int8_t_s_s(0xF9L, (safe_lshift_func_int16_t_s_u(l_516, 15)))) >= l_516)), 12)) >= p_48))) & (*g_156));
        (*l_517) = p_49;
        (**g_433) = l_518;
        for (g_150 = 0; (g_150 <= 3); g_150 += 1)
        {
            (*l_517) = p_48;
        }
    }
    for (g_456.f2 = (-27); (g_456.f2 > 44); g_456.f2++)
    {
        unsigned char *l_523[10] = {&g_34[3][5].f1,&g_456.f1,&g_456.f1,&g_34[3][5].f1,&g_456.f1,&g_456.f1,&g_34[3][5].f1,&g_456.f1,&g_456.f1,&g_34[3][5].f1};
        int *l_524 = (void*)0;
        short *l_532 = &g_37;
        struct S0 **l_533 = &g_33[0][4];
        unsigned short l_534 = 0x6C50L;
        unsigned l_535 = 0xB14C194DL;
        struct S1 *l_542[2][6][9] = {{{&g_69[0],&g_69[4],&g_69[4],&g_69[3],&g_69[3],&g_69[4],&g_69[4],&g_69[0],&g_69[3]},{&g_69[0],&g_69[7],&g_69[1],&g_69[4],&g_69[4],&g_69[4],&g_69[7],(void*)0,&g_69[4]},{&g_69[7],&g_69[6],&g_69[3],&g_69[4],(void*)0,&g_69[4],&g_69[5],&g_69[4],&g_69[3]},{&g_69[3],&g_69[1],&g_69[4],&g_69[4],&g_69[1],&g_69[4],&g_69[4],&g_69[7],&g_69[0]},{&g_69[4],&g_69[4],(void*)0,&g_69[4],&g_69[4],&g_69[4],&g_69[7],&g_69[7],(void*)0},{&g_69[4],&g_69[4],&g_69[4],&g_69[4],(void*)0,&g_69[4],&g_69[3],&g_69[1],&g_69[1]}},{{&g_69[3],&g_69[1],&g_69[4],&g_69[4],&g_69[4],&g_69[1],&g_69[3],(void*)0,&g_69[4]},{&g_69[4],&g_69[4],&g_69[4],&g_69[4],(void*)0,&g_69[4],&g_69[4],(void*)0,&g_69[6]},{&g_69[4],(void*)0,(void*)0,&g_69[4],&g_69[4],(void*)0,(void*)0,(void*)0,&g_69[4]},{(void*)0,&g_69[4],&g_69[7],&g_69[3],&g_69[3],(void*)0,&g_69[0],&g_69[4],(void*)0},{&g_69[4],&g_69[5],&g_69[4],&g_69[4],&g_69[4],(void*)0,&g_69[1],&g_69[4],&g_69[4]},{&g_69[4],&g_69[7],&g_69[4],(void*)0,&g_69[4],&g_69[4],&g_69[3],&g_69[4],&g_69[3]}}};
        struct S2 *l_562 = &g_301;
        int i, j, k;
        p_48 = func_8(((safe_add_func_uint8_t_u_u((l_523[7] == (void*)0), (((g_25 || ((((0xB6C3901BFB572EDALL ^ 0x387FF231405779FDLL) && (((g_69[4].f2 = (l_516 & g_12.f3)) & ((g_244.f0 ^ p_48) && 0L)) & (*g_199))) > l_516) && 0xF0L)) || p_49) || 0x10L))) < p_50));
        p_49 = (safe_mod_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u(((!(safe_unary_minus_func_uint64_t_u(((*g_156) = (*g_156))))) <= l_534), l_535)), (*g_175)));
        (*g_124) = l_536;
        if (l_535)
        {
            const unsigned char l_543 = 0xEBL;
            if ((g_207 = 4L))
            {
                struct S0 **l_539 = (void*)0;
                g_537 = (-9L);
                g_540[0] = ((*l_533) = l_538[1][2]);
                return l_542[1][1][8];
            }
            else
            {
                p_48 = l_543;
                return (*g_124);
            }
        }
        else
        {
            int **l_544 = &l_524;
            struct S0 **l_547 = (void*)0;
            struct S0 ***l_548 = &l_533;
            const unsigned long long *l_572 = &g_294;
            const unsigned long long **l_571 = &l_572;
            const unsigned long long ***l_570 = &l_571;
            struct S1 *l_601 = &g_69[4];
            (***g_432) = l_524;
            p_49 = ((*g_156) & p_48);
            (**l_548) = l_538[1][2];
            if ((p_49 = ((((p_50 >= (((***g_432) = &p_48) != ((*l_544) = &p_49))) != func_8((*g_156))) < ((((*g_156) > (safe_lshift_func_uint8_t_u_s(((*g_175) = func_8((safe_lshift_func_int8_t_s_s(p_49, (p_48 == ((void*)0 == l_553)))))), p_50))) >= p_48) | 0xB204BF3CB29C5139LL)) && 0xF41CL)))
            {
                long long l_559 = (-1L);
                (*l_524) = (safe_add_func_int8_t_s_s(g_456.f1, 0x0FL));
                for (g_12.f1 = 0; (g_12.f1 == 23); ++g_12.f1)
                {
                    (**l_544) = l_559;
                    (*l_524) = p_48;
                    p_48 = p_48;
                }
            }
            else
            {
                int *l_564 = &g_207;
                struct S1 *l_575 = &g_574;
                char l_590 = 9L;
                unsigned l_592 = 0xD2591FF2L;
                if (((*g_531) < p_49))
                {
                    char l_565[8][2][4] = {{{0xA4L,(-6L),0x34L,0xEDL},{(-4L),(-9L),0xAAL,(-9L)}},{{(-6L),(-2L),0xF3L,0x62L},{1L,0xE5L,(-2L),1L}},{{0xE5L,(-9L),(-1L),(-4L)},{0xE5L,0xA4L,(-2L),0x29L}},{{1L,(-4L),0xF3L,0xF3L},{(-6L),(-6L),0xAAL,(-4L)}},{{(-4L),1L,0x34L,(-9L)},{0xA4L,0xE5L,0xF3L,0x34L}},{{(-9L),0xE5L,0x78L,(-9L)},{0xE5L,1L,0xA4L,(-4L)}},{{(-2L),(-6L),(-2L),0xF3L},{(-9L),(-4L),0x00L,0x29L}},{{(-6L),0xA4L,0x34L,(-4L)},{0xEDL,(-9L),0x34L,1L}}};
                    int i, j, k;
                    (**l_544) = p_50;
                    for (g_301.f0 = 0; (g_301.f0 < 28); g_301.f0 = safe_add_func_uint16_t_u_u(g_301.f0, 8))
                    {
                        struct S2 **l_563 = &g_180;
                        (**l_544) = (*l_524);
                        (**g_433) = (void*)0;
                        (*l_563) = l_562;
                        (*l_544) = l_564;
                    }
                    for (g_25 = 0; (g_25 <= 2); g_25 += 1)
                    {
                        (*l_564) = (*l_524);
                        l_565[2][1][3] = (p_49 ^ 0xEC612C24L);
                        if (l_565[2][0][3])
                            continue;
                        if (l_565[2][1][3])
                            continue;
                    }
                    if ((((safe_sub_func_uint64_t_u_u(((*g_156) = (p_48 >= (p_48 < l_565[2][1][2]))), g_301.f0)) <= ((*l_524) = g_25)) != (l_568 == l_570)))
                    {
                        struct S1 *l_573[6][6] = {{&g_69[4],&g_69[4],&g_574,&g_69[4],&g_69[4],&g_574},{&g_69[4],&g_69[4],&g_574,&g_69[4],&g_69[4],&g_574},{&g_69[4],&g_69[4],&g_574,&g_69[4],&g_69[4],&g_574},{&g_69[4],&g_69[4],&g_574,&g_69[4],&g_69[4],&g_574},{&g_69[4],&g_69[4],&g_574,&g_69[4],&g_69[4],&g_574},{&g_69[4],&g_69[4],&g_574,&g_69[4],&g_69[4],&g_574}};
                        int i, j;
                        (*l_524) = p_50;
                        (*g_124) = (l_573[1][5] = l_542[1][3][2]);
                    }
                    else
                    {
                        (*l_524) = p_48;
                        if ((*l_524))
                            continue;
                        (***g_432) = (**g_433);
                        if (p_49)
                            continue;
                    }
                }
                else
                {
                    int **l_578[10][4] = {{&l_564,&g_116,&l_564,&g_116},{&l_564,&g_116,&l_564,&g_116},{&l_564,&g_116,&l_564,&g_116},{&l_564,&g_116,&l_564,&g_116},{&l_564,&g_116,&l_564,&g_116},{&l_564,&g_116,&l_564,&g_116},{&l_564,&g_116,&l_564,&g_116},{&l_564,&g_116,&l_564,&g_116},{&l_564,&g_116,&l_564,&g_116},{&l_564,&g_116,&l_564,&g_116}};
                    char l_585 = 0xCAL;
                    struct S2 **l_589 = &g_180;
                    struct S2 ***l_588 = &l_589;
                    struct S0 **l_591 = &g_33[0][0];
                    int i, j;
                    for (g_37 = 9; (g_37 >= 0); g_37 -= 1)
                    {
                        return l_575;
                    }
                    p_48 = ((*l_564) = ((**l_544) = (safe_lshift_func_int8_t_s_u(g_244.f2, p_50))));
                    if (l_592)
                    {
                        (*l_564) = p_50;
                    }
                    else
                    {
                        (**g_433) = &p_49;
                        return (*g_124);
                    }
                }
                (*l_524) = (0xD563EE7987132F3ELL == ((***l_568) = (safe_add_func_int32_t_s_s((l_595 == (void*)0), (g_574.f3.f3 || (safe_mod_func_uint64_t_u_u(((void*)0 == g_599), p_49)))))));
                (***g_599) = l_601;
            }
        }
    }
    if (((65528UL ^ (g_602 != (void*)0)) > ((*g_199) = 0x9D5DL)))
    {
        for (g_150 = 0; (g_150 >= 0); g_150 -= 1)
        {
            unsigned l_617 = 0x60026FFAL;
            for (g_207 = 0; (g_207 <= 0); g_207 += 1)
            {
                return l_536;
            }
            for (g_37 = 0; (g_37 >= 0); g_37 -= 1)
            {
                for (p_48 = 0; (p_48 >= 0); p_48 -= 1)
                {
                    long long l_606 = 2L;
                    for (g_12.f1 = 0; (g_12.f1 <= 1); g_12.f1 += 1)
                    {
                        unsigned char l_607 = 0x47L;
                        int *l_618 = &g_25;
                        g_207 = ((((((p_49 = (safe_lshift_func_int8_t_s_u((g_10 = (p_50 & p_49)), l_606))) != ((l_607 && (safe_mod_func_int32_t_s_s(4L, 1L))) | (safe_unary_minus_func_int32_t_s((((safe_add_func_int64_t_s_s((safe_mod_func_uint64_t_u_u((*g_156), g_25)), ((safe_add_func_int64_t_s_s(l_617, (-1L))) <= g_294))) & (**g_198)) >= p_48))))) > p_48) >= (**g_170)) != p_48) > 0x3837A93CL);
                        (***g_432) = &p_49;
                        l_618 = &p_48;
                    }
                }
            }
        }
    }
    else
    {
        unsigned l_619 = 0xD3334793L;
        (***g_432) = &p_49;
        for (g_537 = 0; (g_537 <= 0); g_537 += 1)
        {
            int l_620 = 0L;
            l_620 = l_619;
            return (*g_124);
        }
    }
    for (g_10 = (-22); (g_10 != 6); g_10 = safe_add_func_uint8_t_u_u(g_10, 7))
    {
        int l_623 = 0x4EEE126BL;
        short ** const *l_632 = &g_170;
        short ** const **l_631 = &l_632;
        int **l_640 = (void*)0;
        const int l_643 = 0xD6A3BBE9L;
        struct S1 *l_646[4][1] = {{&g_574},{&g_69[0]},{&g_574},{&g_69[0]}};
        struct S0 **l_652 = &g_540[0];
        struct S2 **l_655 = &g_180;
        int i, j;
        p_49 = (&l_569 == (void*)0);
        if (l_623)
            continue;
    }
    return (*g_124);
}







static int func_51(int ** p_52, long long p_53, int ** p_54, struct S0 ** p_55, struct S0 ** p_56)
{
    int l_279 = (-7L);
    struct S2 *l_300 = &g_301;
    struct S1 **l_303 = &g_125;
    unsigned l_355 = 7UL;
    const int l_360[10] = {0x05259986L,0x05259986L,0x05259986L,0x05259986L,0x05259986L,0x05259986L,0x05259986L,0x05259986L,0x05259986L,0x05259986L};
    unsigned *l_394[9][3] = {{&l_355,&g_69[4].f0,&l_355},{&g_69[4].f0,&l_355,&l_355},{&g_69[4].f0,&g_69[4].f0,&l_355},{&l_355,&g_69[4].f0,&l_355},{&g_69[4].f0,&l_355,&g_69[4].f0},{&l_355,&l_355,&g_69[4].f0},{(void*)0,(void*)0,&g_69[4].f0},{(void*)0,(void*)0,&g_69[4].f0},{&l_355,&l_355,&g_69[4].f0}};
    unsigned * const *l_393 = &l_394[5][2];
    const unsigned char l_411 = 249UL;
    int l_436 = 0x5F817359L;
    struct S0 *l_455 = &g_456;
    int l_486 = 0x3E193466L;
    short ***l_505 = &g_170;
    int i, j;
    for (p_53 = 0; (p_53 <= 0); p_53 += 1)
    {
        char l_289[4];
        int l_295 = 0L;
        struct S1 **l_304 = &g_125;
        unsigned char l_320 = 0UL;
        int i;
        for (i = 0; i < 4; i++)
            l_289[i] = 0xE3L;
        for (g_12.f0 = 0; (g_12.f0 <= 0); g_12.f0 += 1)
        {
            struct S0 **l_288 = &g_33[0][3];
            int l_290[5][3] = {{1L,1L,1L},{1L,3L,1L},{3L,1L,1L},{1L,1L,0L},{1L,3L,0x8F0AD81EL}};
            unsigned long long *l_291 = (void*)0;
            unsigned long long *l_292 = (void*)0;
            unsigned long long *l_293 = &g_294;
            int *l_307[6] = {&g_69[4].f2,&g_69[4].f2,(void*)0,&g_69[4].f2,&g_69[4].f2,(void*)0};
            unsigned char l_328 = 255UL;
            int **l_348 = &g_116;
            int i, j;
            if ((l_295 = (safe_lshift_func_int8_t_s_s((((0x4BDDL >= (~l_279)) || (safe_rshift_func_int8_t_s_s((((safe_lshift_func_int16_t_s_s((safe_sub_func_int8_t_s_s(func_8((*g_156)), (safe_rshift_func_uint8_t_u_s((l_288 != (p_55 = (void*)0)), 0)))), ((***g_169) = l_289[2]))) && l_290[1][1]) <= func_8(((*l_293) = p_53))), l_290[1][2]))) & 0xEA31L), 6))))
            {
                unsigned short l_306 = 2UL;
                const struct S2 *l_325 = &g_301;
                if ((l_295 = (((***g_169) = func_8((*g_156))) < p_53)))
                {
                    int *l_296 = (void*)0;
                    int *l_297 = &g_207;
                    (*l_297) = (&g_124 != &g_124);
                    for (g_107 = 0; (g_107 <= 0); g_107 += 1)
                    {
                        struct S2 *l_298 = (void*)0;
                        struct S2 **l_299 = (void*)0;
                        l_300 = l_298;
                        if ((**p_54))
                            continue;
                    }
                    if (l_289[2])
                    {
                        int **l_302 = &g_116;
                        struct S1 ***l_305 = &g_124;
                        (*l_302) = (*p_54);
                        (*l_305) = (l_304 = l_303);
                        if (l_289[2])
                            continue;
                        (*l_297) = (*g_116);
                    }
                    else
                    {
                        short l_321 = (-6L);
                        (*l_297) = (**p_54);
                        if (l_306)
                            break;
                        l_307[0] = &l_295;
                        l_295 = (safe_lshift_func_int8_t_s_s((((5UL | ((((safe_sub_func_uint64_t_u_u(((void*)0 != &g_125), (+(safe_sub_func_int64_t_s_s(((safe_lshift_func_int16_t_s_s(p_53, (safe_rshift_func_uint8_t_u_s((*l_297), 7)))) >= (*l_297)), ((l_289[2] & ((safe_lshift_func_int16_t_s_s((p_53 != l_279), l_320)) > 0xD7B7L)) ^ 9L)))))) && l_289[3]) > (*g_199)) && l_321)) == l_321) || 255UL), 3));
                    }
                    return (**p_54);
                }
                else
                {
                    int * const l_322 = &g_69[4].f2;
                    int **l_323 = (void*)0;
                    int **l_324 = &g_116;
                    const struct S2 **l_326 = &l_325;
                    (*l_324) = l_322;
                    (*l_326) = l_325;
                    for (g_37 = 0; (g_37 <= 5); g_37 += 1)
                    {
                        int i;
                        l_307[g_12.f0] = l_307[g_37];
                        if ((**p_54))
                            continue;
                    }
                }
                if (l_289[2])
                    continue;
                if (l_306)
                    continue;
            }
            else
            {
                long long l_327[7][9] = {{0xEAFBB84C374B97D0LL,1L,0x1D1072CD44564142LL,1L,0xEAFBB84C374B97D0LL,0x1D1072CD44564142LL,0xF53BB106D1848EE3LL,0xF53BB106D1848EE3LL,0x1D1072CD44564142LL},{0xEAFBB84C374B97D0LL,1L,0x1D1072CD44564142LL,1L,0xEAFBB84C374B97D0LL,0x1D1072CD44564142LL,0xF53BB106D1848EE3LL,0xF53BB106D1848EE3LL,0x1D1072CD44564142LL},{0xEAFBB84C374B97D0LL,1L,0x1D1072CD44564142LL,1L,0xEAFBB84C374B97D0LL,0x1D1072CD44564142LL,0xF53BB106D1848EE3LL,0xF53BB106D1848EE3LL,0x1D1072CD44564142LL},{0xEAFBB84C374B97D0LL,1L,0x1D1072CD44564142LL,1L,0xEAFBB84C374B97D0LL,0x1D1072CD44564142LL,0xF53BB106D1848EE3LL,0xF53BB106D1848EE3LL,0x1D1072CD44564142LL},{0xEAFBB84C374B97D0LL,1L,0x1D1072CD44564142LL,1L,0xEAFBB84C374B97D0LL,0x1D1072CD44564142LL,0xF53BB106D1848EE3LL,0xF53BB106D1848EE3LL,0x1D1072CD44564142LL},{0xEAFBB84C374B97D0LL,1L,0x1D1072CD44564142LL,1L,0xEAFBB84C374B97D0LL,0x1D1072CD44564142LL,0xF53BB106D1848EE3LL,0xF53BB106D1848EE3LL,0x1D1072CD44564142LL},{0xEAFBB84C374B97D0LL,1L,0x1D1072CD44564142LL,1L,0xEAFBB84C374B97D0LL,0x1D1072CD44564142LL,0xF53BB106D1848EE3LL,1L,0x927283CA3E1B3F87LL}};
                int *l_336[10] = {(void*)0,(void*)0,&l_279,(void*)0,(void*)0,&l_279,(void*)0,(void*)0,&l_279,(void*)0};
                int i, j;
                l_328 = l_327[1][0];
                for (g_294 = 0; (g_294 <= 6); g_294 += 1)
                {
                    int l_331 = 0x5EF5EFCAL;
                    int i;
                    l_279 = (safe_mod_func_uint8_t_u_u(l_289[g_12.f0], g_12.f2));
                    for (g_12.f2 = 0; (g_12.f2 <= 0); g_12.f2 += 1)
                    {
                        int **l_332 = (void*)0;
                        int **l_333 = &l_307[0];
                        int i;
                        l_279 = (l_320 >= p_53);
                        l_331 = 0x669E67C9L;
                        (*l_333) = l_307[g_12.f2];
                    }
                }
                for (g_207 = 0; (g_207 >= 0); g_207 -= 1)
                {
                    int *l_335 = &l_279;
                    unsigned long long l_337 = 0xD9A5195AE9B3B88DLL;
                    const unsigned *l_345 = &g_346;
                    if ((((**p_54) & (g_69[4].f3.f0 && p_53)) & g_69[4].f1))
                    {
                        int **l_334 = &l_307[0];
                        (*l_334) = (*p_54);
                        l_336[3] = l_335;
                    }
                    else
                    {
                        unsigned *l_344 = &g_69[4].f0;
                        unsigned **l_343 = &l_344;
                        int **l_347 = &l_307[0];
                        (*l_335) = ((6L != (((l_289[1] ^ l_337) == ((*g_156) < (g_175 != &l_320))) || (safe_unary_minus_func_uint32_t_u(1UL)))) != (safe_sub_func_uint8_t_u_u((safe_add_func_uint32_t_u_u(func_8((((*l_343) = l_335) == (l_345 = l_307[1]))), 0xF83595F5L)), p_53)));
                        (*l_347) = &l_279;
                    }
                }
            }
            (*l_348) = (*p_54);
            if ((safe_sub_func_int8_t_s_s(func_8((*g_156)), func_8((*g_156)))))
            {
                unsigned long long l_351 = 0xC97F00F2E9F4E442LL;
                int l_352 = 0x130D6F0EL;
                struct S2 **l_353[6] = {&g_180,&g_180,&g_180,&g_180,&g_180,&g_180};
                int i;
                l_352 = l_351;
                l_300 = &g_244;
                l_295 = (g_244.f1 < (**p_54));
                if (l_289[2])
                    continue;
            }
            else
            {
                short l_354 = 0L;
                l_354 = func_8(l_279);
                (*l_348) = (*l_348);
            }
        }
        for (g_244.f0 = 0; (g_244.f0 >= 0); g_244.f0 -= 1)
        {
            if (l_355)
                break;
        }
    }
    for (l_355 = 12; (l_355 == 43); ++l_355)
    {
        int *l_362 = &l_279;
        char *l_452 = &g_10;
        int *l_453 = (void*)0;
        int *l_454 = &l_279;
    }
    for (g_173 = (-19); (g_173 <= 19); g_173++)
    {
        unsigned char *l_461[10] = {&g_34[3][5].f1,&g_12.f1,&g_456.f1,&g_456.f1,&g_12.f1,&g_34[3][5].f1,&g_12.f1,&g_456.f1,&g_456.f1,&g_12.f1};
        int l_462 = 1L;
        char *l_465 = &g_150;
        int *l_466 = (void*)0;
        int *l_467[6][3];
        int i, j;
        for (i = 0; i < 6; i++)
        {
            for (j = 0; j < 3; j++)
                l_467[i][j] = &g_69[4].f2;
        }
        g_207 = (safe_add_func_int64_t_s_s((l_461[9] != (void*)0), (l_462 == ((-1L) >= (p_53 && (safe_rshift_func_int8_t_s_s(((void*)0 != &l_462), ((*l_465) = 0x5BL))))))));
        for (p_53 = 8; (p_53 >= 0); p_53 -= 1)
        {
            unsigned short l_472[5] = {0x3480L,0x3480L,0x3480L,0x3480L,0x3480L};
            int l_485 = 0x70C23EE3L;
            char l_496 = 0L;
            int i;
        }
        for (g_244.f0 = 26; (g_244.f0 < (-10)); --g_244.f0)
        {
            short ***l_503 = &g_170;
            short ****l_504 = &g_169;
            int l_506 = 0xC0E6407EL;
            l_506 = (func_8((*g_156)) != (((*l_504) = l_503) == l_505));
        }
    }
    return (***g_433);
}







static int ** func_58(int ** p_59, short * p_60)
{
    unsigned short *l_121 = &g_12.f2;
    int *l_123 = (void*)0;
    struct S1 *l_133 = &g_69[4];
    int l_151 = 0x38B79B9AL;
    long long *l_221 = &g_173;
    unsigned long long l_264 = 18446744073709551615UL;
    int l_265 = 0x8FCEAAE3L;
    unsigned short **l_274[9][9][3] = {{{&l_121,&l_121,&l_121},{&l_121,&g_199,&g_199},{&l_121,(void*)0,&l_121},{&l_121,(void*)0,&l_121},{&g_199,(void*)0,&g_199},{&l_121,&g_199,(void*)0},{(void*)0,&l_121,&g_199},{&l_121,&l_121,(void*)0},{(void*)0,(void*)0,&g_199}},{{&l_121,&g_199,&l_121},{(void*)0,&l_121,&l_121},{&l_121,&l_121,&g_199},{(void*)0,(void*)0,&l_121},{&l_121,&l_121,&l_121},{(void*)0,(void*)0,(void*)0},{&l_121,&l_121,(void*)0},{&g_199,&l_121,&g_199},{&l_121,&g_199,(void*)0}},{{&l_121,(void*)0,(void*)0},{&l_121,&l_121,&l_121},{&l_121,&l_121,&g_199},{&g_199,(void*)0,&g_199},{&g_199,&g_199,&g_199},{&g_199,(void*)0,&l_121},{&g_199,&g_199,&g_199},{&l_121,(void*)0,(void*)0},{(void*)0,&l_121,(void*)0}},{{&g_199,&l_121,(void*)0},{&g_199,&g_199,&g_199},{&g_199,&l_121,&l_121},{&g_199,&l_121,&g_199},{&g_199,&l_121,&g_199},{&g_199,&g_199,&g_199},{&g_199,&l_121,&l_121},{(void*)0,&g_199,&l_121},{&l_121,&l_121,(void*)0}},{{&g_199,&l_121,&g_199},{&g_199,&l_121,(void*)0},{&g_199,&g_199,&l_121},{&g_199,&l_121,&l_121},{(void*)0,&l_121,&g_199},{&g_199,(void*)0,&g_199},{&g_199,&g_199,&g_199},{&g_199,(void*)0,&l_121},{&g_199,&g_199,&g_199}},{{&l_121,(void*)0,(void*)0},{(void*)0,&l_121,(void*)0},{&g_199,&l_121,(void*)0},{&g_199,&g_199,&g_199},{&g_199,&l_121,&l_121},{&g_199,&l_121,&g_199},{&g_199,&l_121,&g_199},{&g_199,&g_199,&l_121},{&g_199,&g_199,(void*)0}},{{&l_121,&g_199,&g_199},{&l_121,&l_121,(void*)0},{&l_121,&g_199,&l_121},{&g_199,&l_121,(void*)0},{(void*)0,&g_199,&g_199},{&l_121,(void*)0,(void*)0},{&g_199,&g_199,&l_121},{&l_121,&l_121,&l_121},{(void*)0,&g_199,&l_121}},{{&g_199,&g_199,(void*)0},{&l_121,&g_199,&g_199},{&l_121,&l_121,(void*)0},{&l_121,&g_199,&g_199},{&g_199,(void*)0,(void*)0},{&g_199,&g_199,&g_199},{&l_121,&l_121,(void*)0},{&g_199,&g_199,&l_121},{&l_121,&l_121,&l_121}},{{&g_199,&g_199,&l_121},{&g_199,&g_199,(void*)0},{&l_121,&g_199,&g_199},{&l_121,&l_121,(void*)0},{&l_121,&g_199,&l_121},{&g_199,&l_121,(void*)0},{(void*)0,&g_199,&g_199},{&l_121,(void*)0,(void*)0},{&g_199,&g_199,&l_121}}};
    int i, j, k;
    if ((((*l_121) = 0UL) ^ 0x9D97L))
    {
        int **l_122[5][3] = {{&g_116,&g_116,&g_116},{&g_116,&g_116,&g_116},{&g_116,&g_116,&g_116},{&g_116,&g_116,&g_116},{&g_116,&g_116,&g_116}};
        int i, j;
        l_123 = (void*)0;
        (*g_116) = 7L;
    }
    else
    {
        struct S1 ***l_126 = &g_124;
        int **l_127 = &l_123;
        (*g_116) = 0xC352BBFDL;
        (*l_126) = g_124;
        (*l_127) = &g_25;
    }
    for (g_10 = 0; (g_10 >= 0); g_10 -= 1)
    {
        int **l_128 = &l_123;
        struct S1 *l_134 = &g_69[4];
        unsigned long long *l_154 = &g_107;
        unsigned long long **l_196 = &g_156;
        char *l_218 = &g_150;
        int l_239 = 0xA6420E7FL;
        (*l_128) = (*p_59);
        for (g_37 = 0; (g_37 >= 0); g_37 -= 1)
        {
            struct S1 * const l_135 = &g_69[4];
            int l_148[3];
            short ** const *l_165 = (void*)0;
            short ***l_166 = (void*)0;
            short ****l_167 = &l_166;
            short ****l_168 = (void*)0;
            long long *l_172 = &g_173;
            unsigned char *l_174 = (void*)0;
            unsigned *l_177[3][8] = {{&g_69[4].f0,(void*)0,&g_69[4].f0,&g_69[4].f0,&g_69[4].f0,&g_69[4].f0,(void*)0,&g_69[4].f0},{(void*)0,&g_69[4].f0,&g_69[4].f0,(void*)0,&g_69[4].f0,&g_69[4].f0,(void*)0,(void*)0},{&g_69[4].f0,(void*)0,&g_69[4].f0,&g_69[4].f0,(void*)0,&g_69[4].f0,&g_69[4].f0,&g_69[4].f0}};
            unsigned **l_176 = &l_177[2][1];
            struct S2 *l_178 = (void*)0;
            int i, j;
            for (i = 0; i < 3; i++)
                l_148[i] = 0x1D642D50L;
        }
        for (l_151 = 0; (l_151 >= 0); l_151 -= 1)
        {
            struct S2 **l_191 = &g_180;
            unsigned long long **l_194 = &l_154;
            int l_217 = 1L;
            short *** const * const l_224 = &g_169;
            unsigned short **l_275 = (void*)0;
            for (g_12.f2 = 0; (g_12.f2 <= 0); g_12.f2 += 1)
            {
                for (g_37 = 0; (g_37 >= 0); g_37 -= 1)
                {
                    int ***l_189 = &g_95;
                    if ((&g_116 == ((*l_189) = &g_116)))
                    {
                        (**l_189) = (*l_128);
                    }
                    else
                    {
                        (*l_128) = (void*)0;
                        (*l_128) = (*g_95);
                        (*l_128) = (*g_95);
                    }
                }
            }
            (*l_128) = (void*)0;
            for (g_37 = 0; (g_37 >= 0); g_37 -= 1)
            {
                int *l_190 = &l_151;
                (*l_128) = l_190;
            }
            (*l_191) = g_180;
        }
    }
    g_207 = func_8(l_151);
    return p_59;
}







static short * func_62(struct S0 * p_63, int * p_64, struct S1 p_65, unsigned char p_66, struct S1 * p_67)
{
    const long long l_71 = (-3L);
    int l_72 = 0x9FE4D3D8L;
    char l_75 = 0xFDL;
    int l_81 = 0x478261C1L;
    struct S0 **l_108 = &g_33[0][0];
    int *l_110 = &g_69[4].f2;
    if (func_8((((l_72 = (l_71 != l_71)) && func_8((safe_mod_func_int8_t_s_s(l_75, (+l_72))))) == l_71)))
    {
        int *l_77 = &g_25;
        int **l_76 = &l_77;
        int *l_78 = (void*)0;
        int *l_79[4][5] = {{&g_69[4].f2,(void*)0,&g_69[4].f2,(void*)0,&g_69[4].f2},{&l_72,&l_72,&l_72,&l_72,&l_72},{&g_69[4].f2,(void*)0,&g_69[4].f2,(void*)0,&g_69[4].f2},{&l_72,&l_72,&l_72,&l_72,&l_72}};
        int i, j;
        (*l_76) = p_64;
        p_65.f2 = (**l_76);
    }
    else
    {
        int l_80 = 0x4CD7C082L;
        int l_94[9] = {0L,0xEF3EF0B8L,0L,0xEF3EF0B8L,0L,0xEF3EF0B8L,0L,0xEF3EF0B8L,0L};
        int *l_112 = (void*)0;
        unsigned l_117 = 1UL;
        short *l_120 = &g_14;
        int i;
        for (l_75 = 0; (l_75 >= 0); l_75 -= 1)
        {
            short *l_83 = &g_37;
            short **l_82 = &l_83;
            int *l_111 = &l_72;
            for (p_65.f0 = 0; (p_65.f0 <= 0); p_65.f0 += 1)
            {
                int *l_92 = (void*)0;
                int *l_93 = (void*)0;
                if ((((void*)0 != p_63) > (l_80 != l_81)))
                {
                    short **l_85 = (void*)0;
                    for (g_37 = 0; (g_37 <= 0); g_37 += 1)
                    {
                        short ***l_84 = (void*)0;
                        l_85 = l_82;
                    }
                }
                else
                {
                    struct S1 *l_88 = (void*)0;
                    struct S1 **l_89 = &l_88;
                    int *l_90[10][5][5] = {{{(void*)0,&g_69[4].f2,&g_69[4].f2,&g_69[4].f2,(void*)0},{(void*)0,&g_25,&l_72,&l_72,&g_25},{(void*)0,&l_72,&l_72,(void*)0,&g_69[4].f2},{&g_69[4].f2,&g_69[4].f2,&l_72,&g_25,&g_25},{(void*)0,(void*)0,(void*)0,&g_69[4].f2,(void*)0}},{{&g_25,&l_72,&l_72,&g_25,&l_72},{&g_25,&g_25,&g_69[4].f2,(void*)0,&g_69[4].f2},{(void*)0,&g_69[4].f2,&l_72,&l_72,&g_69[4].f2},{(void*)0,(void*)0,&g_69[4].f2,(void*)0,&l_72},{&g_25,&g_69[4].f2,&l_72,&g_69[4].f2,&g_25}},{{&g_69[4].f2,&g_69[4].f2,(void*)0,&l_72,&g_69[4].f2},{&g_25,(void*)0,(void*)0,&g_25,&l_72},{(void*)0,&g_25,&g_25,&g_69[4].f2,&g_69[4].f2},{&l_72,&g_25,&l_72,&l_72,&g_25},{&g_69[4].f2,(void*)0,&l_72,&g_69[4].f2,&l_72}},{{&g_69[4].f2,&g_69[4].f2,&l_72,&g_25,&g_69[4].f2},{&g_69[4].f2,(void*)0,&l_72,&l_72,(void*)0},{&g_69[4].f2,(void*)0,&l_72,&g_69[4].f2,&l_72},{&g_25,(void*)0,&g_25,(void*)0,&g_25},{&l_72,&g_69[4].f2,(void*)0,&l_72,&g_69[4].f2}},{{&g_25,(void*)0,(void*)0,&g_25,&l_72},{&g_69[4].f2,&g_25,&l_72,&g_69[4].f2,&g_69[4].f2},{&g_69[4].f2,&g_25,&g_69[4].f2,&l_72,&g_25},{&g_69[4].f2,(void*)0,&l_72,&g_69[4].f2,&l_72},{&g_69[4].f2,&g_69[4].f2,&g_25,&g_25,(void*)0}},{{&l_72,&g_69[4].f2,&l_72,&l_72,&g_69[4].f2},{(void*)0,(void*)0,&g_69[4].f2,&g_69[4].f2,&l_72},{&l_72,&l_72,&g_25,&l_72,&l_72},{&g_25,(void*)0,&g_69[4].f2,&l_72,(void*)0},{&l_72,&l_72,&l_72,&l_72,(void*)0}},{{&g_69[4].f2,&l_72,&g_25,(void*)0,(void*)0},{&l_72,&l_72,&l_72,(void*)0,&l_72},{(void*)0,&g_69[4].f2,&l_72,(void*)0,&l_72},{(void*)0,(void*)0,&g_25,&l_72,&l_72},{&g_25,&g_69[4].f2,&l_72,&l_72,&g_69[4].f2}},{{&l_72,&l_72,&l_72,&l_72,(void*)0},{&l_72,&g_69[4].f2,&g_25,&g_69[4].f2,&l_72},{&l_72,(void*)0,&l_72,(void*)0,(void*)0},{&l_72,&g_69[4].f2,&g_69[4].f2,&l_72,&l_72},{&l_72,&l_72,&g_25,(void*)0,(void*)0}},{{&g_25,&l_72,&g_25,&l_72,&l_72},{(void*)0,&l_72,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&g_25,&l_72,&g_69[4].f2},{&l_72,&l_72,(void*)0,(void*)0,&l_72},{&g_69[4].f2,&g_69[4].f2,&g_25,&g_69[4].f2,&l_72}},{{&l_72,&l_72,&g_25,&l_72,(void*)0},{&l_72,&g_69[4].f2,&g_25,&g_69[4].f2,&g_69[4].f2},{(void*)0,&l_72,&l_72,(void*)0,&l_72},{&l_72,(void*)0,&g_69[4].f2,&g_69[4].f2,&g_69[4].f2},{(void*)0,(void*)0,(void*)0,&l_72,(void*)0}}};
                    int **l_91 = &l_90[9][4][3];
                    int i, j, k;
                    l_72 = ((safe_unary_minus_func_uint32_t_u((safe_unary_minus_func_int64_t_s((((*l_89) = l_88) == &g_69[2]))))) > l_75);
                    (*l_91) = (void*)0;
                    (*l_91) = (void*)0;
                }
                l_94[3] = 1L;
            }
            for (l_81 = 0; (l_81 <= 0); l_81 += 1)
            {
                int ***l_96 = &g_95;
                int *l_99 = &g_25;
                int **l_98[9] = {&l_99,&l_99,&l_99,&l_99,&l_99,&l_99,&l_99,&l_99,&l_99};
                int ***l_97 = &l_98[7];
                unsigned short *l_100[8] = {&g_12.f2,&g_34[3][5].f2,&g_12.f2,&g_34[3][5].f2,&g_12.f2,&g_34[3][5].f2,&g_12.f2,&g_34[3][5].f2};
                unsigned short l_105 = 0x7030L;
                unsigned long long *l_106[9];
                int i;
                for (i = 0; i < 9; i++)
                    l_106[i] = &g_107;
                (*l_97) = ((*l_96) = g_95);
            }
        }
        (*l_110) = (((void*)0 == l_120) <= (-7L));
    }
    return &g_37;
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_10, "g_10", print_hash_value);
    transparent_crc(g_12.f0, "g_12.f0", print_hash_value);
    transparent_crc(g_12.f1, "g_12.f1", print_hash_value);
    transparent_crc(g_12.f2, "g_12.f2", print_hash_value);
    transparent_crc(g_12.f3, "g_12.f3", print_hash_value);
    transparent_crc(g_14, "g_14", print_hash_value);
    transparent_crc(g_25, "g_25", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_34[i][j].f0, "g_34[i][j].f0", print_hash_value);
            transparent_crc(g_34[i][j].f1, "g_34[i][j].f1", print_hash_value);
            transparent_crc(g_34[i][j].f2, "g_34[i][j].f2", print_hash_value);
            transparent_crc(g_34[i][j].f3, "g_34[i][j].f3", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_37, "g_37", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_69[i].f0, "g_69[i].f0", print_hash_value);
        transparent_crc(g_69[i].f1, "g_69[i].f1", print_hash_value);
        transparent_crc(g_69[i].f2, "g_69[i].f2", print_hash_value);
        transparent_crc(g_69[i].f3.f0, "g_69[i].f3.f0", print_hash_value);
        transparent_crc(g_69[i].f3.f1, "g_69[i].f3.f1", print_hash_value);
        transparent_crc(g_69[i].f3.f2, "g_69[i].f3.f2", print_hash_value);
        transparent_crc(g_69[i].f3.f3, "g_69[i].f3.f3", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_107, "g_107", print_hash_value);
    transparent_crc(g_150, "g_150", print_hash_value);
    transparent_crc(g_173, "g_173", print_hash_value);
    transparent_crc(g_207, "g_207", print_hash_value);
    transparent_crc(g_244.f0, "g_244.f0", print_hash_value);
    transparent_crc(g_244.f1, "g_244.f1", print_hash_value);
    transparent_crc(g_244.f2, "g_244.f2", print_hash_value);
    transparent_crc(g_294, "g_294", print_hash_value);
    transparent_crc(g_301.f0, "g_301.f0", print_hash_value);
    transparent_crc(g_301.f1, "g_301.f1", print_hash_value);
    transparent_crc(g_301.f2, "g_301.f2", print_hash_value);
    transparent_crc(g_346, "g_346", print_hash_value);
    transparent_crc(g_456.f0, "g_456.f0", print_hash_value);
    transparent_crc(g_456.f1, "g_456.f1", print_hash_value);
    transparent_crc(g_456.f2, "g_456.f2", print_hash_value);
    transparent_crc(g_456.f3, "g_456.f3", print_hash_value);
    transparent_crc(g_498, "g_498", print_hash_value);
    transparent_crc(g_537, "g_537", print_hash_value);
    transparent_crc(g_541.f0, "g_541.f0", print_hash_value);
    transparent_crc(g_541.f1, "g_541.f1", print_hash_value);
    transparent_crc(g_541.f2, "g_541.f2", print_hash_value);
    transparent_crc(g_541.f3, "g_541.f3", print_hash_value);
    transparent_crc(g_574.f0, "g_574.f0", print_hash_value);
    transparent_crc(g_574.f1, "g_574.f1", print_hash_value);
    transparent_crc(g_574.f2, "g_574.f2", print_hash_value);
    transparent_crc(g_574.f3.f0, "g_574.f3.f0", print_hash_value);
    transparent_crc(g_574.f3.f1, "g_574.f3.f1", print_hash_value);
    transparent_crc(g_574.f3.f2, "g_574.f3.f2", print_hash_value);
    transparent_crc(g_574.f3.f3, "g_574.f3.f3", print_hash_value);
    transparent_crc(g_804, "g_804", print_hash_value);
    transparent_crc(g_854, "g_854", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_900[i], "g_900[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_902.f0, "g_902.f0", print_hash_value);
    transparent_crc(g_902.f1, "g_902.f1", print_hash_value);
    transparent_crc(g_902.f2, "g_902.f2", print_hash_value);
    transparent_crc(g_902.f3.f0, "g_902.f3.f0", print_hash_value);
    transparent_crc(g_902.f3.f1, "g_902.f3.f1", print_hash_value);
    transparent_crc(g_902.f3.f2, "g_902.f3.f2", print_hash_value);
    transparent_crc(g_902.f3.f3, "g_902.f3.f3", print_hash_value);
    transparent_crc(g_1242, "g_1242", print_hash_value);
    transparent_crc(g_1267.f0, "g_1267.f0", print_hash_value);
    transparent_crc(g_1267.f1, "g_1267.f1", print_hash_value);
    transparent_crc(g_1267.f2, "g_1267.f2", print_hash_value);
    transparent_crc(g_1267.f3.f0, "g_1267.f3.f0", print_hash_value);
    transparent_crc(g_1267.f3.f1, "g_1267.f3.f1", print_hash_value);
    transparent_crc(g_1267.f3.f2, "g_1267.f3.f2", print_hash_value);
    transparent_crc(g_1267.f3.f3, "g_1267.f3.f3", print_hash_value);
    transparent_crc(g_1356, "g_1356", print_hash_value);
    transparent_crc(g_1378.f0, "g_1378.f0", print_hash_value);
    transparent_crc(g_1378.f1, "g_1378.f1", print_hash_value);
    transparent_crc(g_1378.f2, "g_1378.f2", print_hash_value);
    transparent_crc(g_1378.f3, "g_1378.f3", print_hash_value);
    transparent_crc(g_1466, "g_1466", print_hash_value);
    transparent_crc(g_1469, "g_1469", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
