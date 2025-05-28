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


union U0 {
   short f0;
   unsigned f1;
   int f2;
   int f3;
};

union U1 {
   unsigned short f0;
   int f1;
   unsigned f2;
   char f3;
};


static unsigned char g_2 = 0xBFL;
static int g_4 = 0xAB6EC79CL;
static const union U0 g_35 = {0x1137L};
static int g_45 = 1L;
static int g_57 = 0xB1996FCDL;
static unsigned char g_66 = 0UL;
static int *g_76 = &g_4;
static int **g_75 = &g_76;
static char g_84[2][7][10] = {{{(-3L),(-1L),0xABL,0xCDL,1L,2L,1L,0xCDL,0xABL,(-1L)},{0xECL,1L,3L,2L,(-4L),(-1L),0x2EL,0x8FL,0L,0x12L},{0x98L,0x3DL,1L,0xABL,0L,(-1L),(-1L),0xC1L,0x2EL,(-3L)},{0xECL,0xDBL,0xB5L,0xC1L,2L,2L,0xC1L,0xB5L,0xDBL,0xECL},{(-3L),0x2EL,0xC1L,(-1L),(-1L),0L,1L,(-1L),3L,0x0CL},{0x98L,0x8FL,(-3L),0xDBL,1L,1L,0x12L,0xABL,0xB5L,0xC2L},{1L,1L,0L,0xC9L,0x12L,0xC9L,0L,1L,1L,0x3DL}},{{(-1L),(-7L),3L,0xC1L,0x8FL,0L,0xB5L,1L,0xABL,0x98L},{0xC9L,0x98L,0x12L,0xC1L,1L,0x0CL,(-4L),0xEEL,1L,1L},{0x2EL,1L,0xFFL,0xC9L,0xC9L,0xFFL,1L,0x2EL,0xB5L,(-1L)},{1L,0x2EL,0xCDL,0xDBL,0L,0xC2L,(-7L),0xB5L,3L,0xC9L},{0xEEL,0xFFL,0xCDL,0L,0x0CL,0xB5L,1L,0x2EL,0L,0x2EL},{(-3L),0xECL,0xFFL,(-1L),0xFFL,0xECL,(-3L),0xEEL,0xDBL,1L},{0xC1L,(-4L),0x12L,1L,0xC2L,0L,0xCDL,1L,0x8FL,0xEEL}}};
static int g_90[4][10][6] = {{{0x642676EBL,(-10L),0xF2429B40L,7L,7L,0xF2429B40L},{0L,0L,0L,0x3A4231C6L,0xAE4FB5D9L,1L},{(-1L),0x7FE1BC6EL,7L,0x004C0D6AL,0x42098501L,0L},{0x06017AB3L,(-1L),7L,(-3L),0L,1L},{0x48C36471L,(-3L),0L,0x642676EBL,0L,0xF2429B40L},{0x642676EBL,0L,0xF2429B40L,(-1L),0x156DBBF4L,(-1L)},{1L,5L,0x54CD5CA7L,0x424908F8L,0x6747B33BL,(-10L)},{0x6747B33BL,0x54CD5CA7L,0xB7A12B0EL,0L,0x9F6D4B68L,0x12ED6996L},{(-1L),(-9L),0x004C0D6AL,(-1L),0x48C36471L,1L},{0x42098501L,1L,0xEACEED78L,0xAC094E54L,0xEACEED78L,1L}},{{1L,0x48C36471L,1L,(-10L),0xAC094E54L,0x42098501L},{0x4B4F5124L,6L,1L,(-1L),1L,0x004C0D6AL},{0xF2429B40L,6L,(-1L),0x579173DEL,0xAC094E54L,0L},{0xD328F3C5L,0x48C36471L,(-9L),0xB7A12B0EL,0xEACEED78L,0x5FDD6C55L},{0x7FE1BC6EL,1L,1L,0xDDAC0D4FL,0x48C36471L,0x971D2F7AL},{0x5FDD6C55L,(-9L),1L,0L,0x9F6D4B68L,0x54CD5CA7L},{0xDDAC0D4FL,0L,6L,(-1L),0xAE4FB5D9L,0x424908F8L},{0x156DBBF4L,1L,0xB7A12B0EL,0L,0xD328F3C5L,(-1L)},{0x642676EBL,1L,1L,1L,1L,0x642676EBL},{(-1L),0x5FDD6C55L,0x7FE1BC6EL,0x48C36471L,(-10L),(-3L)}},{{(-1L),1L,0x6747B33BL,0xFB0E7D4EL,0x579173DEL,0x004C0D6AL},{(-1L),1L,0xFB0E7D4EL,0x48C36471L,0x9F6D4B68L,0x3A4231C6L},{(-1L),(-10L),(-1L),1L,5L,7L},{0x642676EBL,0x971D2F7AL,(-10L),0L,6L,0xCF7E1B1CL},{0x156DBBF4L,(-1L),0xDDAC0D4FL,(-1L),0x5FDD6C55L,(-1L)},{0x7FE1BC6EL,(-1L),1L,(-10L),1L,(-5L)},{0xAC094E54L,0x54CD5CA7L,1L,0x7FE1BC6EL,0xB7A12B0EL,0x5FDD6C55L},{1L,0xEACEED78L,0xAC094E54L,0xEACEED78L,1L,0x42098501L},{0x54CD5CA7L,0x156DBBF4L,0x3846C405L,(-9L),(-1L),(-1L)},{0x06017AB3L,0L,0x579173DEL,0x156DBBF4L,0x42098501L,(-1L)}},{{0xFB0E7D4EL,1L,0x3846C405L,0x971D2F7AL,1L,0x42098501L},{0x42098501L,(-5L),0xAC094E54L,0x424908F8L,0x3846C405L,0x5FDD6C55L},{1L,(-1L),0x54CD5CA7L,(-1L),6L,1L},{0x12ED6996L,0xB7A12B0EL,1L,0x4B4F5124L,0x579173DEL,(-1L)},{7L,(-1L),0x06017AB3L,1L,0x12ED6996L,(-1L)},{0x06017AB3L,(-9L),0xAC094E54L,0x12ED6996L,0x156DBBF4L,0x156DBBF4L},{0L,(-1L),(-1L),0L,0x5FDD6C55L,0x579173DEL},{(-1L),0L,0x3A4231C6L,1L,0x642676EBL,1L},{(-10L),(-3L),(-1L),0xB7A12B0EL,0x642676EBL,0L},{0x9F6D4B68L,0L,1L,(-9L),0x5FDD6C55L,0x3846C405L}}};
static int *g_99 = &g_90[1][2][5];
static unsigned g_106 = 0UL;
static char g_107 = 0x8AL;
static int g_109 = (-5L);
static unsigned g_114 = 0xDFB7EED9L;
static short g_116 = 0x9F1BL;
static short *g_115 = &g_116;
static union U1 g_122 = {0x91A1L};
static union U1 *g_121 = &g_122;
static unsigned short g_131 = 0x15ABL;
static int g_190 = 0x2D8E3CACL;
static int *g_189 = &g_190;
static char *g_194[9][8][3] = {{{(void*)0,(void*)0,&g_122.f3},{&g_122.f3,&g_84[0][1][4],(void*)0},{&g_122.f3,&g_84[1][4][3],(void*)0},{&g_84[0][2][8],&g_107,&g_122.f3},{&g_107,&g_84[1][4][3],(void*)0},{&g_84[0][1][4],&g_84[0][1][4],&g_84[0][2][8]},{&g_84[1][0][4],(void*)0,&g_84[1][5][9]},{&g_107,&g_84[0][1][1],&g_107}},{{&g_107,&g_122.f3,&g_84[0][1][4]},{&g_107,(void*)0,&g_107},{&g_122.f3,(void*)0,&g_107},{(void*)0,&g_122.f3,&g_84[0][1][4]},{&g_122.f3,(void*)0,(void*)0},{&g_107,&g_84[0][2][8],(void*)0},{&g_107,&g_84[1][5][9],&g_107},{&g_107,&g_107,&g_107}},{{&g_84[0][1][4],&g_107,(void*)0},{&g_84[0][1][4],&g_84[0][1][4],&g_107},{&g_84[1][4][3],(void*)0,&g_84[0][1][4]},{&g_84[0][1][1],&g_84[0][1][4],&g_107},{&g_84[0][1][4],(void*)0,(void*)0},{&g_107,(void*)0,&g_107},{(void*)0,&g_84[1][4][3],&g_84[1][4][3]},{&g_84[0][1][4],&g_107,(void*)0}},{{&g_84[1][5][9],(void*)0,(void*)0},{(void*)0,&g_107,&g_84[0][1][4]},{&g_107,&g_84[0][1][4],(void*)0},{&g_84[0][1][4],&g_107,&g_84[0][1][4]},{&g_122.f3,(void*)0,&g_107},{&g_107,&g_107,&g_84[0][1][4]},{&g_122.f3,&g_84[1][4][3],&g_122.f3},{(void*)0,(void*)0,&g_84[0][1][1]}},{{&g_122.f3,(void*)0,&g_107},{&g_84[0][2][4],&g_84[0][1][4],&g_84[0][1][4]},{(void*)0,(void*)0,&g_122.f3},{&g_84[0][2][4],&g_84[0][1][4],&g_122.f3},{&g_122.f3,&g_107,&g_84[0][1][4]},{(void*)0,&g_84[0][1][4],&g_84[0][1][4]},{&g_122.f3,&g_122.f3,&g_107},{&g_107,&g_84[0][1][1],&g_107}},{{&g_122.f3,&g_107,(void*)0},{&g_84[0][1][4],&g_84[0][1][4],&g_84[0][2][8]},{&g_107,&g_122.f3,(void*)0},{(void*)0,&g_122.f3,&g_107},{&g_84[1][5][9],&g_84[0][1][4],&g_107},{&g_84[0][1][4],&g_84[0][1][4],&g_84[0][1][4]},{(void*)0,&g_107,&g_84[0][1][4]},{&g_107,&g_107,&g_84[0][1][4]}},{{&g_107,&g_84[1][0][4],&g_107},{&g_84[0][2][4],&g_84[0][1][4],&g_107},{(void*)0,&g_84[1][0][4],(void*)0},{&g_107,&g_122.f3,&g_84[0][2][4]},{&g_84[1][5][9],&g_84[0][1][4],&g_107},{&g_84[0][1][4],(void*)0,&g_84[0][1][4]},{(void*)0,&g_107,&g_107},{&g_84[0][2][8],&g_84[0][1][4],&g_84[0][1][4]}},{{(void*)0,&g_107,(void*)0},{&g_84[0][1][4],&g_107,&g_107},{(void*)0,(void*)0,(void*)0},{&g_84[0][2][8],&g_84[0][2][4],&g_84[0][1][1]},{(void*)0,&g_107,(void*)0},{&g_84[0][1][4],&g_84[0][1][4],&g_107},{&g_84[1][5][9],&g_107,&g_107},{&g_107,&g_84[0][1][4],&g_107}},{{(void*)0,(void*)0,&g_122.f3},{&g_84[0][2][4],&g_107,&g_107},{&g_107,(void*)0,&g_107},{&g_107,&g_84[0][1][1],&g_107},{&g_84[0][1][4],(void*)0,(void*)0},{(void*)0,&g_107,&g_84[0][1][1]},{(void*)0,&g_107,(void*)0},{&g_84[0][1][1],&g_107,&g_107}}};
static char *g_195 = (void*)0;
static union U0 g_215[9][8][3] = {{{{0x27DDL},{0L},{0xE4DFL}},{{0L},{0xD4BCL},{0x9DB8L}},{{0xA34DL},{0L},{0x6C70L}},{{1L},{0L},{0xA171L}},{{8L},{0x784EL},{-3L}},{{0x73FCL},{2L},{1L}},{{0xC984L},{0xC984L},{1L}},{{-1L},{-1L},{5L}}},{{{0x8500L},{0xE4DFL},{8L}},{{0x8CF2L},{-9L},{0x485BL}},{{0L},{0x8500L},{8L}},{{7L},{0L},{5L}},{{0x6C70L},{0xC984L},{0x8500L}},{{-1L},{4L},{0x9DEFL}},{{0L},{-1L},{0L}},{{-5L},{0xD4BCL},{0x7218L}}},{{{0xB92CL},{1L},{0xC984L}},{{0x9DB8L},{-1L},{1L}},{{0x8500L},{0x1879L},{0xE4C8L}},{{0x9DB8L},{0x5FCDL},{0x485BL}},{{0xB92CL},{0x573AL},{-3L}},{{-5L},{0L},{0L}},{{0L},{0x5125L},{0x5125L}},{{-1L},{0x84C8L},{0x97A7L}}},{{{0x6C70L},{0x060AL},{0L}},{{7L},{0xB33EL},{8L}},{{0L},{1L},{0x573AL}},{{0x8CF2L},{0xB33EL},{0x73FCL}},{{0x8500L},{0x060AL},{0xA34DL}},{{1L},{0x84C8L},{0x485BL}},{{1L},{0x5125L},{-1L}},{{0x4ED2L},{0L},{-1L}}},{{{1L},{0x573AL},{0x27DDL}},{{-1L},{0x5FCDL},{-1L}},{{9L},{0x1879L},{0L}},{{0xB602L},{-1L},{-1L}},{{0x784EL},{1L},{0x27DDL}},{{0L},{0xD4BCL},{-1L}},{{0x8500L},{-1L},{-1L}},{{0x485BL},{0xD4BCL},{0x6B48L}}},{{{0x6C70L},{8L},{0xB92CL}},{{0x8CF2L},{0xC5C3L},{-1L}},{{0x7CB9L},{0xA34DL},{-1L}},{{0x7218L},{5L},{7L}},{{0x7CB9L},{0x27DDL},{0xE4DFL}},{{0x8CF2L},{-2L},{0xB602L}},{{0x6C70L},{1L},{-3L}},{{0x6B48L},{0x4B37L},{0x97A7L}}},{{{0xA34DL},{0x573AL},{0L}},{{0x0489L},{-1L},{0x6B48L}},{{0xF97FL},{0xE4C8L},{0x784EL}},{{0x485BL},{0xC5C3L},{0x9DEFL}},{{0x1879L},{0xE4C8L},{8L}},{{0x7218L},{-1L},{0x90BFL}},{{0x060AL},{0x573AL},{0xE4DFL}},{{1L},{0x4B37L},{-5L}}},{{{1L},{1L},{0xA34DL}},{{0xA171L},{-2L},{8L}},{{0xA34DL},{0x27DDL},{1L}},{{0x28AEL},{5L},{0x6B48L}},{{0L},{0xA34DL},{1L}},{{0x9DB8L},{0xC5C3L},{8L}},{{-1L},{8L},{0xA34DL}},{{0x7218L},{0xD4BCL},{-5L}}},{{{0xE4DFL},{0xC984L},{0xE4DFL}},{{0L},{0x768DL},{0x90BFL}},{{9L},{1L},{8L}},{{1L},{0xB3EEL},{0x9DEFL}},{{0xA34DL},{0x5125L},{0x784EL}},{{1L},{0xB33EL},{0x6B48L}},{{9L},{-1L},{0L}},{{0x73FCL},{-1L},{0x485BL}}}};
static union U0 *g_343 = &g_215[7][4][2];
static union U0 **g_342[4][2] = {{&g_343,&g_343},{&g_343,&g_343},{&g_343,&g_343},{&g_343,&g_343}};
static union U0 ***g_341[8][2] = {{&g_342[2][1],&g_342[2][1]},{&g_342[2][1],&g_342[2][1]},{&g_342[2][1],&g_342[2][1]},{&g_342[2][1],&g_342[2][1]},{&g_342[2][1],&g_342[2][1]},{&g_342[2][1],&g_342[2][1]},{&g_342[2][1],&g_342[2][1]},{&g_342[2][1],&g_342[2][1]}};
static union U0 ****g_340[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
static unsigned *g_351 = &g_106;
static unsigned **g_350 = &g_351;
static unsigned short g_358 = 0xC37CL;
static union U1 **g_370[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
static union U1 ***g_369 = &g_370[0];
static union U1 ***g_371 = (void*)0;
static union U1 ***g_373[3][10][8] = {{{(void*)0,&g_370[0],(void*)0,&g_370[2],&g_370[2],&g_370[0],&g_370[2],&g_370[2]},{(void*)0,&g_370[1],(void*)0,&g_370[1],&g_370[2],&g_370[1],&g_370[2],&g_370[1]},{(void*)0,&g_370[0],(void*)0,&g_370[2],&g_370[2],&g_370[0],&g_370[2],&g_370[2]},{(void*)0,&g_370[1],(void*)0,&g_370[1],&g_370[2],&g_370[1],&g_370[2],&g_370[1]},{(void*)0,&g_370[0],(void*)0,&g_370[2],&g_370[2],&g_370[0],&g_370[2],&g_370[2]},{(void*)0,&g_370[1],(void*)0,&g_370[1],&g_370[2],&g_370[1],&g_370[2],&g_370[1]},{(void*)0,&g_370[0],(void*)0,&g_370[2],&g_370[2],&g_370[0],&g_370[2],&g_370[2]},{(void*)0,&g_370[1],(void*)0,&g_370[1],&g_370[2],&g_370[1],&g_370[2],&g_370[1]},{(void*)0,&g_370[0],(void*)0,&g_370[2],&g_370[2],&g_370[0],&g_370[2],&g_370[2]},{(void*)0,&g_370[1],(void*)0,&g_370[1],&g_370[2],&g_370[1],&g_370[2],&g_370[1]}},{{(void*)0,&g_370[0],(void*)0,&g_370[2],&g_370[2],&g_370[0],&g_370[2],&g_370[2]},{(void*)0,&g_370[1],(void*)0,&g_370[1],&g_370[2],&g_370[1],&g_370[2],&g_370[1]},{(void*)0,&g_370[0],(void*)0,&g_370[2],&g_370[2],&g_370[0],&g_370[2],&g_370[2]},{(void*)0,&g_370[1],(void*)0,&g_370[1],&g_370[2],&g_370[1],&g_370[2],&g_370[1]},{(void*)0,&g_370[0],(void*)0,&g_370[2],&g_370[2],&g_370[0],&g_370[2],&g_370[2]},{(void*)0,&g_370[1],(void*)0,&g_370[1],&g_370[2],&g_370[1],&g_370[2],&g_370[1]},{(void*)0,&g_370[0],(void*)0,&g_370[2],&g_370[2],&g_370[0],&g_370[2],&g_370[2]},{(void*)0,&g_370[1],(void*)0,&g_370[1],&g_370[2],&g_370[1],&g_370[2],&g_370[1]},{(void*)0,&g_370[0],(void*)0,&g_370[2],&g_370[2],&g_370[0],&g_370[2],&g_370[2]},{(void*)0,&g_370[1],(void*)0,&g_370[1],&g_370[2],&g_370[1],&g_370[2],&g_370[1]}},{{(void*)0,&g_370[0],(void*)0,&g_370[2],&g_370[2],&g_370[0],&g_370[2],&g_370[2]},{(void*)0,&g_370[1],(void*)0,&g_370[1],&g_370[2],&g_370[1],&g_370[2],&g_370[1]},{(void*)0,&g_370[0],(void*)0,&g_370[2],&g_370[2],&g_370[0],&g_370[2],&g_370[2]},{(void*)0,&g_370[1],(void*)0,&g_370[1],&g_370[2],&g_370[1],&g_370[2],&g_370[1]},{(void*)0,&g_370[0],(void*)0,&g_370[2],&g_370[2],&g_370[0],&g_370[2],&g_370[2]},{(void*)0,&g_370[1],(void*)0,&g_370[1],&g_370[2],&g_370[1],&g_370[2],&g_370[1]},{(void*)0,&g_370[0],(void*)0,&g_370[2],&g_370[2],&g_370[0],&g_370[2],&g_370[2]},{(void*)0,&g_370[1],(void*)0,&g_370[1],&g_370[2],&g_370[1],&g_370[2],&g_370[1]},{(void*)0,&g_370[0],(void*)0,&g_370[2],&g_370[2],&g_370[0],&g_370[2],&g_370[2]},{(void*)0,&g_370[1],(void*)0,&g_370[1],&g_370[2],&g_370[1],&g_370[2],&g_370[1]}}};
static int g_416 = 0L;
static const union U1 g_466 = {0UL};
static const unsigned g_514 = 1UL;
static int g_541 = 0xE1CA2ACCL;
static unsigned short g_543 = 65535UL;
static int ***g_596 = &g_75;
static int ****g_595 = &g_596;
static short g_603 = (-1L);
static unsigned char g_605 = 1UL;
static unsigned char g_607[3] = {247UL,247UL,247UL};
static int ** const g_630 = (void*)0;
static unsigned char *g_667 = &g_607[0];
static unsigned char **g_666 = &g_667;
static char g_790 = 0xA8L;
static char **g_802[2][7][6] = {{{&g_194[7][7][2],&g_195,&g_194[1][4][2],(void*)0,&g_194[0][6][1],(void*)0},{&g_194[0][6][1],&g_194[7][7][2],&g_194[1][4][2],&g_194[7][7][2],&g_194[8][2][1],&g_194[2][4][2]},{&g_194[0][6][1],(void*)0,&g_194[1][4][2],&g_195,&g_194[7][7][2],&g_194[1][4][2]},{&g_194[1][4][2],&g_194[1][4][2],(void*)0,(void*)0,&g_194[1][4][2],&g_194[1][4][2]},{&g_195,&g_194[1][4][2],&g_194[1][4][2],&g_194[8][2][1],&g_194[1][4][2],&g_194[2][4][2]},{&g_194[1][4][2],&g_194[0][6][1],&g_194[1][4][2],&g_194[1][4][2],&g_194[1][4][2],&g_194[0][6][1]},{&g_194[1][4][2],&g_194[2][4][2],&g_194[1][4][2],&g_194[8][2][1],&g_194[1][4][2],&g_194[1][4][2]}},{{&g_195,&g_194[1][4][2],&g_194[1][4][2],(void*)0,(void*)0,&g_194[1][4][2]},{&g_194[1][4][2],&g_194[1][4][2],&g_194[7][7][2],&g_195,&g_194[1][4][2],(void*)0},{&g_194[0][6][1],&g_194[2][4][2],&g_194[8][2][1],&g_194[7][7][2],&g_194[1][4][2],&g_194[7][7][2]},{&g_194[8][2][1],&g_194[0][6][1],&g_194[8][2][1],&g_194[1][4][2],&g_194[1][4][2],(void*)0},{(void*)0,&g_194[1][4][2],&g_194[7][7][2],&g_194[1][4][2],&g_194[1][4][2],&g_194[1][4][2]},{&g_194[1][4][2],&g_194[1][4][2],&g_194[1][4][2],&g_194[1][4][2],&g_194[7][7][2],&g_194[1][4][2]},{(void*)0,(void*)0,&g_194[1][4][2],&g_194[1][4][2],&g_194[8][2][1],&g_194[0][6][1]}}};
static char ***g_801 = &g_802[1][3][3];
static union U0 *****g_825 = &g_340[2];
static unsigned short *g_882 = &g_122.f0;
static char g_954 = 0x88L;
static const int g_969 = 0x596DC5FAL;
static short **g_1002 = &g_115;
static short ***g_1001 = &g_1002;
static int g_1026 = 1L;
static union U0 ******g_1126 = (void*)0;
static union U0 *******g_1125 = &g_1126;
static int g_1174 = (-1L);
static unsigned g_1176 = 1UL;
static const union U1 *g_1217[1][4][5] = {{{&g_466,&g_466,&g_466,&g_466,&g_466},{&g_466,&g_466,&g_466,&g_466,&g_466},{&g_466,&g_466,&g_466,&g_466,&g_466},{&g_466,&g_466,&g_466,&g_466,&g_466}}};
static const union U1 **g_1216[2][8][2] = {{{&g_1217[0][0][0],&g_1217[0][0][0]},{&g_1217[0][1][2],&g_1217[0][0][0]},{&g_1217[0][0][0],&g_1217[0][1][2]},{&g_1217[0][0][0],&g_1217[0][0][0]},{&g_1217[0][1][2],&g_1217[0][0][0]},{&g_1217[0][0][0],&g_1217[0][1][2]},{&g_1217[0][0][0],&g_1217[0][0][0]},{&g_1217[0][1][2],&g_1217[0][0][0]}},{{&g_1217[0][0][0],&g_1217[0][1][2]},{&g_1217[0][0][0],&g_1217[0][0][0]},{&g_1217[0][1][2],&g_1217[0][0][0]},{&g_1217[0][0][0],&g_1217[0][1][2]},{&g_1217[0][0][0],&g_1217[0][0][0]},{&g_1217[0][1][2],&g_1217[0][0][0]},{&g_1217[0][0][0],&g_1217[0][1][2]},{&g_1217[0][0][0],&g_1217[0][0][0]}}};
static int *g_1231 = (void*)0;
static unsigned g_1312 = 0x59D31735L;
static union U0 *** const * const g_1332 = &g_341[7][1];
static union U0 *** const * const * const g_1331 = &g_1332;
static union U0 *** const * const * const *g_1330 = &g_1331;
static union U0 *** const * const * const **g_1329 = &g_1330;
static unsigned g_1376[8][4] = {{6UL,1UL,0x099516DAL,1UL},{1UL,0xFC6AF568L,5UL,0x099516DAL},{1UL,0xFC6AF568L,0xFC6AF568L,1UL},{0xFC6AF568L,1UL,1UL,6UL},{0xFC6AF568L,1UL,0xFC6AF568L,5UL},{1UL,6UL,5UL,5UL},{1UL,1UL,0x099516DAL,6UL},{6UL,1UL,0x099516DAL,1UL}};
static char g_1382 = 9L;
static union U1 g_1461 = {65535UL};



static union U1 func_1(void);
static int func_14(unsigned p_15, int p_16);
static unsigned char func_19(unsigned p_20, int p_21);
static const unsigned func_26(int * p_27);
static int * func_28(const int p_29, int * p_30, union U0 p_31, int * p_32, const union U0 p_33);
static int func_36(unsigned p_37, union U1 p_38, int * p_39);
static union U1 func_41(unsigned p_42);
static unsigned char func_50(int ** const p_51, char p_52);
static int ** const func_53(int * p_54, int * const p_55);
static int ** func_67(unsigned short p_68, unsigned short p_69, union U1 p_70);
static union U1 func_1(void)
{
    int l_5[9] = {0x15AA9614L,0x87E08A11L,0x87E08A11L,0x15AA9614L,0x87E08A11L,0x87E08A11L,0x15AA9614L,0x87E08A11L,0x87E08A11L};
    short l_1173 = 0xAB78L;
    int l_1175 = 5L;
    int l_1177 = 1L;
    const int *l_1187 = (void*)0;
    const int **l_1186 = &l_1187;
    const int ***l_1185 = &l_1186;
    int *l_1190 = &g_90[2][9][3];
    unsigned **l_1195 = &g_351;
    const int l_1202 = 0x258E2977L;
    int l_1234[9][2][1] = {{{0x695F1347L},{0xA5A23881L}},{{0x38E4C135L},{0x38E4C135L}},{{0xA5A23881L},{0x695F1347L}},{{0x3AB5B0EEL},{0xA5A23881L}},{{0x3AB5B0EEL},{0x695F1347L}},{{0xA5A23881L},{0x38E4C135L}},{{0x38E4C135L},{0xA5A23881L}},{{0x695F1347L},{0x3AB5B0EEL}},{{0xA5A23881L},{0x3AB5B0EEL}}};
    const union U1 **l_1238 = (void*)0;
    union U1 *l_1317 = &g_122;
    union U0 *** const * const * const **l_1333[10][10] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
    int l_1368[4];
    short l_1369 = 3L;
    short l_1381 = 0L;
    union U0 * const *l_1419[3][9][2] = {{{&g_343,&g_343},{&g_343,&g_343},{&g_343,&g_343},{&g_343,&g_343},{&g_343,&g_343},{&g_343,&g_343},{&g_343,&g_343},{&g_343,&g_343},{&g_343,&g_343}},{{&g_343,&g_343},{&g_343,&g_343},{&g_343,&g_343},{&g_343,&g_343},{&g_343,&g_343},{&g_343,&g_343},{&g_343,&g_343},{&g_343,&g_343},{&g_343,&g_343}},{{&g_343,&g_343},{&g_343,&g_343},{&g_343,&g_343},{&g_343,&g_343},{&g_343,&g_343},{&g_343,&g_343},{&g_343,&g_343},{&g_343,&g_343},{&g_343,&g_343}}};
    union U0 * const **l_1418 = &l_1419[0][8][0];
    union U0 * const *** const l_1417 = &l_1418;
    union U0 * const *** const *l_1416 = &l_1417;
    union U0 * const *** const **l_1415 = &l_1416;
    unsigned l_1424[6] = {0xF46B3CBFL,0x6BB8DF45L,0xF46B3CBFL,0xF46B3CBFL,0x6BB8DF45L,0xF46B3CBFL};
    unsigned l_1425 = 0UL;
    int *l_1428 = &g_1174;
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_1368[i] = (-1L);
    if (g_2)
    {
        int *l_3[6];
        union U0 l_34 = {0x1D89L};
        unsigned short l_871 = 0UL;
        int i;
        for (i = 0; i < 6; i++)
            l_3[i] = &g_4;
        g_4 |= (+g_2);
        g_4 ^= l_5[7];
        l_1177 = (l_5[7] >= (safe_mod_func_int8_t_s_s(g_2, (safe_sub_func_uint32_t_u_u((safe_lshift_func_int8_t_s_s(((safe_mul_func_uint8_t_u_u(l_5[7], g_4)) < (g_1176 &= (l_1175 &= (g_1174 |= ((func_14((l_3[0] == (void*)0), (safe_sub_func_uint8_t_u_u(func_19((l_5[7] || (safe_sub_func_int32_t_s_s(((((safe_mod_func_int32_t_s_s(g_4, func_26(func_28(l_5[7], &g_4, l_34, &g_4, g_35)))) <= g_605) & 65535UL) | l_5[7]), l_871))), l_5[6]), 0L))) & l_5[7]) ^ l_1173))))), 3)), g_2)))));
    }
    else
    {
        unsigned short l_1178 = 0x9F9BL;
        union U0 ****l_1183 = &g_341[0][1];
        int ***l_1184 = &g_75;
        const int ****l_1188 = &l_1185;
        int *l_1189[2];
        int **l_1197 = &l_1190;
        int ***l_1196 = &l_1197;
        unsigned char l_1205 = 0UL;
        unsigned short ** const l_1301 = &g_882;
        union U1 ***l_1304 = &g_370[0];
        unsigned l_1398 = 0x182BD149L;
        short l_1404 = (-1L);
        short ****l_1435 = &g_1001;
        unsigned l_1446 = 18446744073709551615UL;
        int i;
        for (i = 0; i < 2; i++)
            l_1189[i] = &g_122.f1;
        (*g_76) = ((*g_189) = (((*g_667) || (***l_1184)) || (-1L)));
        (**l_1184) = l_1190;
        if ((safe_mul_func_int16_t_s_s(((((safe_mul_func_uint8_t_u_u(func_19((**g_350), ((void*)0 != l_1195)), l_1178)) | func_50(((*l_1196) = &l_1190), (safe_lshift_func_uint16_t_u_s(((((func_50((**g_595), (safe_add_func_int16_t_s_s(l_1202, (safe_lshift_func_uint8_t_u_u(g_4, g_131))))) || 0xEBL) & l_1205) < (-1L)) >= g_1174), g_514)))) || (**l_1197)) && (*g_189)), l_1205)))
        {
            short l_1218 = 1L;
            int *l_1223 = &g_90[2][9][3];
            for (g_1176 = 26; (g_1176 < 6); g_1176--)
            {
                int *l_1208[6][2][9] = {{{&l_1177,&g_90[1][7][0],&g_1026,&g_190,&g_45,(void*)0,&l_1177,&g_541,(void*)0},{&g_190,(void*)0,&l_1177,&g_190,&g_90[1][2][5],&l_5[5],&l_1177,&g_45,&l_1177}},{{&l_1177,&g_57,&l_5[1],&l_5[1],&g_57,&l_1177,(void*)0,&g_541,&l_1177},{&g_1026,&l_1177,&l_5[1],&l_5[5],&g_541,&g_4,&l_1177,&g_1026,(void*)0}},{{&l_5[5],&g_1026,&g_1026,&l_1177,&g_90[3][2][1],(void*)0,&g_190,&g_45,(void*)0},{&l_5[1],&g_1026,(void*)0,(void*)0,&g_57,&g_4,&g_90[1][2][5],&l_5[7],(void*)0}},{{&g_190,&g_57,(void*)0,&g_190,&g_90[1][7][0],(void*)0,&g_1026,(void*)0,&l_5[7]},{&g_190,&g_57,&g_190,(void*)0,&l_1177,(void*)0,(void*)0,&l_1177,(void*)0}},{{&l_5[1],&l_5[7],&l_5[1],&g_190,&g_90[1][7][0],&g_90[1][2][5],(void*)0,&g_90[2][0][0],(void*)0},{&l_5[5],&l_1175,&l_5[7],&g_1026,&g_57,&g_416,(void*)0,&g_45,&l_5[7]}},{{(void*)0,&g_90[1][2][5],&g_4,&g_190,&g_90[3][2][1],&l_5[1],&l_5[7],&g_45,(void*)0},{&g_90[1][2][5],(void*)0,&g_416,(void*)0,(void*)0,(void*)0,(void*)0,&g_90[2][0][0],(void*)0}}};
                char l_1235 = 1L;
                int i, j, k;
                for (g_109 = 3; (g_109 >= 0); g_109 -= 1)
                {
                    unsigned short l_1211 = 0x9399L;
                    int *l_1239 = (void*)0;
                    for (g_122.f2 = 0; (g_122.f2 <= 3); g_122.f2 += 1)
                    {
                        unsigned l_1212 = 0xA26892A9L;
                        const union U1 ***l_1215[10];
                        int i;
                        for (i = 0; i < 10; i++)
                            l_1215[i] = (void*)0;
                        (***l_1196) = (((**l_1197) == (safe_mod_func_int32_t_s_s(l_1211, l_1212))) > (safe_mul_func_uint16_t_u_u(((*g_882) = (*g_882)), 8UL)));
                        (**l_1197) &= (((g_1216[0][3][1] = (void*)0) == g_370[g_109]) || (l_1218 && (safe_rshift_func_uint8_t_u_s((safe_rshift_func_int8_t_s_s(0x72L, l_1218)), 0))));
                        (*g_99) |= l_1211;
                    }
                    for (l_1177 = 0; (l_1177 <= 3); l_1177 += 1)
                    {
                        (*l_1186) = l_1223;
                        (*g_99) = 0x64C0270FL;
                    }
                    if (l_1211)
                    {
                        int l_1224 = 0xEFFAF22FL;
                        unsigned char *l_1232 = (void*)0;
                        unsigned char *l_1233 = &g_66;
                        (*g_189) = 6L;
                        (*g_99) = (func_50(&l_1190, (**l_1197)) == l_1224);
                        (*l_1190) ^= (((void*)0 != (*g_1125)) || ((safe_mul_func_uint8_t_u_u((**g_666), (((**g_1002) |= (0UL == (safe_sub_func_int32_t_s_s((safe_lshift_func_int8_t_s_s(((((*l_1233) &= (**g_666)) <= l_1211) & ((l_1195 == (void*)0) < l_1224)), l_1234[5][1][0])), l_1235)))) && (***g_1001)))) && l_1211));
                    }
                    else
                    {
                        int l_1240 = (-1L);
                        int l_1249 = 8L;
                        short l_1250 = 0L;
                        unsigned l_1251[2][9] = {{0x3FB78515L,18446744073709551611UL,0x27B45DA3L,0x8A9A914BL,18446744073709551611UL,0x8A9A914BL,0x27B45DA3L,18446744073709551611UL,0x3FB78515L},{0x3FB78515L,18446744073709551611UL,0x27B45DA3L,0x8A9A914BL,18446744073709551611UL,0x8A9A914BL,0x27B45DA3L,18446744073709551611UL,0x3FB78515L}};
                        int i, j;
                        (***l_1196) = ((safe_add_func_uint32_t_u_u((g_370[g_109] != l_1238), (l_1240 <= (safe_lshift_func_uint16_t_u_s((*g_882), (safe_lshift_func_uint8_t_u_s((safe_add_func_int32_t_s_s((safe_rshift_func_int16_t_s_s(((*l_1223) || (***g_1001)), 7)), l_1249)), l_1211))))))) >= l_1250);
                        l_1251[0][1] |= (*g_189);
                    }
                }
            }
        }
        else
        {
            unsigned l_1254 = 0x7949695AL;
            int l_1270[2][4][9] = {{{0L,1L,0x1DC1158DL,0x108E5E71L,1L,0L,1L,0x1F76854CL,(-7L)},{1L,(-10L),0x5BF87D85L,0L,0x51648065L,1L,1L,0x3E5545B5L,1L},{0L,0xC36A9410L,0x9140E4DBL,0x9140E4DBL,0xC36A9410L,0L,0x1DC1158DL,1L,(-7L)},{0L,0xC36A9410L,0x3E5545B5L,0x51648065L,1L,0x6A4D5E4BL,0x9140E4DBL,0x108E5E71L,0x108E5E71L}},{{0x1DC1158DL,(-10L),0x6A4D5E4BL,0x1F76854CL,0x6A4D5E4BL,(-10L),0x1DC1158DL,0x9140E4DBL,0x3E5545B5L},{1L,0x108E5E71L,0x6A4D5E4BL,0x1DC1158DL,0x1F76854CL,0x5BF87D85L,1L,(-10L),0L},{0x9140E4DBL,1L,0x3E5545B5L,(-10L),(-10L),0x3E5545B5L,1L,0x9140E4DBL,0xEC914A50L},{(-7L),(-7L),0x9140E4DBL,(-10L),0L,0xEC914A50L,0xC36A9410L,0x108E5E71L,0x5BF87D85L}}};
            unsigned l_1279 = 4294967295UL;
            int l_1307[7] = {0x8A7039B2L,0x8A7039B2L,0x8A7039B2L,0x8A7039B2L,0x8A7039B2L,0x8A7039B2L,0x8A7039B2L};
            union U1 *l_1314 = &g_122;
            unsigned short l_1322 = 65530UL;
            int i, j, k;
            for (g_543 = (-1); (g_543 < 42); g_543++)
            {
                unsigned char *l_1267 = &g_66;
                int l_1290[3];
                int l_1294 = 0x5BC35E6AL;
                union U1 *l_1315 = (void*)0;
                int i;
                for (i = 0; i < 3; i++)
                    l_1290[i] = 0x24FF6D52L;
                if ((l_1254 < (safe_lshift_func_int8_t_s_s(((**l_1197) & ((((**g_1002) < (safe_add_func_int8_t_s_s(l_1254, ((*g_882) ^ (1L != (*g_667)))))) <= (safe_mod_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_s((**g_666), (safe_lshift_func_int16_t_s_u((safe_sub_func_uint8_t_u_u(((*l_1267) = (***l_1196)), 0UL)), 13)))), 4294967288UL))) <= 0x0A4B6242L)), 2))))
                {
                    union U0 * const *l_1269 = (void*)0;
                    union U0 * const **l_1268 = &l_1269;
                    int l_1291[4][3] = {{(-7L),(-7L),(-7L)},{0xC7EE24B7L,0x4D6337E8L,0xC7EE24B7L},{(-7L),(-7L),(-7L)},{0xC7EE24B7L,0x4D6337E8L,0xC7EE24B7L}};
                    char *l_1292 = (void*)0;
                    char *l_1293[5] = {&g_122.f3,&g_122.f3,&g_122.f3,&g_122.f3,&g_122.f3};
                    int *l_1308 = &g_1026;
                    union U1 *l_1313 = &g_122;
                    int i, j;
                    l_1270[0][2][3] |= (l_1268 == &l_1269);
                    if ((safe_mul_func_int8_t_s_s((safe_mod_func_uint8_t_u_u((!(*g_667)), (0x3AB1L & ((safe_sub_func_uint32_t_u_u(((+((*g_882) > (((safe_mod_func_int32_t_s_s(l_1279, (l_1291[1][2] = ((**l_1195) = ((l_1290[1] = (safe_mul_func_uint16_t_u_u((1L < (safe_lshift_func_uint8_t_u_s((**g_666), (safe_rshift_func_uint16_t_u_u(((safe_mod_func_int8_t_s_s((safe_mod_func_uint16_t_u_u(((l_1290[1] ^ func_26(&l_1175)) != (*l_1190)), 1L)), l_1291[0][2])) <= (*g_882)), (*g_882)))))), (*g_882)))) | 0x01L))))) && l_1279) < 0L))) != l_1294), (*g_99))) | l_1254)))), (*g_667))))
                    {
                        unsigned short *l_1311 = &g_358;
                        l_1270[1][0][7] ^= 0x120A76EAL;
                        (**l_1197) = (safe_rshift_func_uint16_t_u_u((safe_add_func_uint16_t_u_u(((safe_lshift_func_uint16_t_u_u((l_1301 == (void*)0), ((*l_1311) = (!(safe_rshift_func_uint8_t_u_u(l_1270[0][1][1], (((void*)0 == l_1304) && (safe_rshift_func_uint16_t_u_s((l_1307[0] = (*g_882)), (+(func_26(l_1308) != (safe_add_func_int16_t_s_s((*g_115), (***g_1001)))))))))))))) & (*l_1190)), g_1312)), 8));
                        (*l_1190) = l_1270[0][0][5];
                        (***l_1188) = &l_1307[0];
                    }
                    else
                    {
                        union U1 **l_1316[9][4][2] = {{{(void*)0,&l_1315},{&l_1315,&l_1314},{&l_1314,&l_1314},{&l_1315,(void*)0}},{{&l_1315,(void*)0},{(void*)0,&l_1313},{&g_121,(void*)0},{&l_1314,&l_1315}},{{&l_1314,(void*)0},{&g_121,&l_1313},{(void*)0,(void*)0},{&l_1315,(void*)0}},{{&l_1315,&l_1314},{&l_1314,&l_1314},{&l_1315,&l_1313},{&l_1314,&l_1313}},{{&l_1315,&l_1314},{&l_1314,&l_1314},{&l_1315,(void*)0},{&l_1315,(void*)0}},{{(void*)0,&l_1313},{&g_121,(void*)0},{&l_1314,&l_1315},{&l_1314,(void*)0}},{{&g_121,&l_1313},{(void*)0,(void*)0},{&l_1315,(void*)0},{&l_1315,&l_1314}},{{&l_1314,&l_1314},{&l_1315,&l_1313},{&l_1314,&l_1313},{&l_1315,&l_1314}},{{&l_1314,&l_1314},{&l_1315,(void*)0},{&l_1315,(void*)0},{(void*)0,&l_1313}}};
                        int i, j, k;
                        l_1314 = l_1313;
                        (*g_75) = &l_1291[0][1];
                        l_1317 = l_1315;
                        (*l_1308) |= (l_1294 > (((((*g_351) <= (safe_rshift_func_int8_t_s_s((4294967290UL || func_26((***g_595))), (safe_mod_func_uint8_t_u_u((***l_1196), l_1322))))) <= (safe_lshift_func_uint16_t_u_u(8UL, 2))) ^ (**g_666)) > 0L));
                    }
                }
                else
                {
                    for (g_1176 = 0; (g_1176 <= 19); g_1176 = safe_add_func_uint32_t_u_u(g_1176, 1))
                    {
                        (**l_1197) |= 0L;
                        if ((*g_99))
                            continue;
                        if (l_1270[0][2][3])
                            continue;
                    }
                }
                for (l_1254 = 0; (l_1254 <= 1); l_1254 += 1)
                {
                    unsigned char l_1327 = 0UL;
                    l_1327 ^= (*g_99);
                    (*g_189) = (-10L);
                    (*g_189) = l_1294;
                }
                if ((*g_189))
                    break;
            }
            return (*l_1314);
        }
        for (g_605 = 0; (g_605 <= 1); g_605 += 1)
        {
            int *l_1328 = &g_541;
            int *l_1342 = &g_90[1][2][5];
            union U0 l_1343 = {-7L};
            const int *l_1347[4][4] = {{&g_1026,&g_1026,&g_1026,&g_1026},{&g_1026,&g_1026,&g_1026,&g_1026},{&g_1026,&g_1026,&g_1026,&g_1026},{&g_1026,&g_1026,&g_1026,&g_1026}};
            int *l_1363[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            unsigned l_1391 = 1UL;
            union U1 l_1434 = {0x3AABL};
            const int l_1447 = 0xA53ABC3BL;
            int i, j;
            for (g_107 = 1; (g_107 >= 0); g_107 -= 1)
            {
                (*g_189) &= 0x027D2F32L;
                for (g_106 = 0; (g_106 <= 2); g_106 += 1)
                {
                    for (g_45 = 0; g_45 < 4; g_45 += 1)
                    {
                        for (l_1205 = 0; l_1205 < 2; l_1205 += 1)
                        {
                            g_342[g_45][l_1205] = &g_343;
                        }
                    }
                    (*g_75) = l_1328;
                }
            }
            (*l_1190) ^= ((*g_882) <= ((l_1333[1][7] = g_1329) == (void*)0));
        }
    }
    return g_1461;
}







static int func_14(unsigned p_15, int p_16)
{
    int *l_1064 = &g_90[1][2][5];
    int l_1098 = (-7L);
    int ***l_1121[6][10] = {{&g_75,&g_75,&g_75,&g_75,&g_75,&g_75,&g_75,&g_75,&g_75,&g_75},{&g_75,&g_75,&g_75,&g_75,&g_75,&g_75,&g_75,&g_75,&g_75,&g_75},{&g_75,&g_75,&g_75,&g_75,&g_75,&g_75,&g_75,&g_75,&g_75,&g_75},{&g_75,&g_75,&g_75,&g_75,&g_75,&g_75,&g_75,&g_75,&g_75,&g_75},{&g_75,&g_75,&g_75,&g_75,&g_75,&g_75,&g_75,&g_75,&g_75,&g_75},{&g_75,&g_75,&g_75,&g_75,&g_75,&g_75,&g_75,&g_75,&g_75,&g_75}};
    union U0 *l_1141 = &g_215[4][0][2];
    union U1 l_1170[7] = {{65527UL},{65527UL},{65527UL},{65527UL},{65527UL},{65527UL},{65527UL}};
    int *l_1171 = &g_57;
    unsigned char l_1172 = 0x41L;
    int i, j;
    for (g_358 = 0; (g_358 > 45); ++g_358)
    {
        unsigned short l_1065 = 1UL;
        int ** const l_1077[4][2][4] = {{{&g_189,(void*)0,(void*)0,(void*)0},{&g_189,&g_189,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,&g_189},{&g_189,(void*)0,(void*)0,(void*)0}},{{&g_189,&g_189,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&g_189}},{{&g_189,(void*)0,(void*)0,(void*)0},{&g_189,&g_189,(void*)0,(void*)0}}};
        union U0 *******l_1122[3];
        unsigned short **l_1169 = &g_882;
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_1122[i] = (void*)0;
        (**g_596) = l_1064;
        if (l_1065)
        {
            short l_1068 = (-1L);
            int *l_1080 = &g_90[1][2][5];
            int * const *l_1120 = (void*)0;
            int * const **l_1119 = &l_1120;
            union U0 ********l_1123 = (void*)0;
            union U0 ********l_1124[9][4];
            short *l_1133 = &g_603;
            int i, j;
            for (i = 0; i < 9; i++)
            {
                for (j = 0; j < 4; j++)
                    l_1124[i][j] = &l_1122[0];
            }
            for (g_954 = 0; (g_954 == 10); g_954++)
            {
                unsigned l_1097 = 18446744073709551609UL;
                (****g_595) = l_1068;
                for (g_109 = 0; g_109 < 8; g_109 += 1)
                {
                    for (g_66 = 0; g_66 < 2; g_66 += 1)
                    {
                        g_341[g_109][g_66] = &g_342[1][1];
                    }
                }
                for (g_122.f2 = 0; (g_122.f2 > 31); ++g_122.f2)
                {
                    unsigned short l_1085 = 65535UL;
                    int ***l_1086 = (void*)0;
                    int ***l_1087 = (void*)0;
                    int ***l_1088 = &g_75;
                    char *l_1095 = &g_790;
                    unsigned char l_1096 = 255UL;
                    int ** const l_1110 = &g_99;
                    for (g_106 = 0; (g_106 <= 3); g_106 += 1)
                    {
                        int ** const l_1078 = &g_189;
                        unsigned *l_1079 = &g_215[7][4][2].f1;
                        int i, j, k;
                        g_90[g_106][g_106][(g_106 + 2)] = 0L;
                        if (p_15)
                            break;
                        (*l_1064) = ((p_15 > (safe_lshift_func_uint16_t_u_s((p_16 != ((*l_1079) = func_50((*g_596), (((**g_1002) & (safe_rshift_func_uint8_t_u_s((safe_lshift_func_int16_t_s_u(func_50(l_1077[3][0][3], func_50(l_1078, (*l_1064))), 3)), 6))) != (**g_350))))), 2))) <= 3L);
                    }
                    for (g_190 = 1; (g_190 >= 0); g_190 -= 1)
                    {
                        (***g_595) = l_1080;
                        l_1085 ^= ((**g_75) = ((!((safe_mul_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s((*g_115), 1)), 6UL)) <= (****g_595))) != (-9L)));
                    }
                    if (func_50(((*l_1088) = (*g_596)), (safe_rshift_func_uint16_t_u_u((((*l_1064) = (g_190 &= (l_1097 ^= ((safe_mul_func_uint8_t_u_u(func_50(&l_1064, ((*l_1095) = (safe_sub_func_uint8_t_u_u(((*g_882) < (+(func_50(&g_99, (p_15 | (*l_1064))) & ((**g_666) = (*g_667))))), (p_15 || (***g_1001)))))), l_1096)) & p_16)))) | l_1098), p_15))))
                    {
                        (**g_596) = (*g_75);
                        if (p_16)
                            continue;
                    }
                    else
                    {
                        unsigned l_1105 = 0UL;
                        g_57 ^= (safe_sub_func_uint16_t_u_u(((((safe_add_func_uint8_t_u_u(0xF7L, (safe_lshift_func_int16_t_s_u(((l_1105 < (*g_76)) | 0x0E2D19FFL), 3)))) != 3L) | (safe_rshift_func_uint16_t_u_s((safe_mul_func_int16_t_s_s((***g_1001), func_50(l_1110, (safe_sub_func_int8_t_s_s((((safe_rshift_func_uint16_t_u_u((safe_add_func_int8_t_s_s(l_1105, (safe_add_func_int32_t_s_s(((65533UL == (*g_882)) <= l_1105), p_16)))), 2)) || (*g_882)) & 0xA345L), p_16))))), 14))) && 8L), (*g_882)));
                        (**g_75) = 0x0AC8AAE4L;
                        (**g_596) = (*g_75);
                    }
                }
                l_1064 = (*g_75);
            }
            l_1080 = l_1080;
            g_57 |= (((l_1119 == l_1121[1][0]) || ((*l_1064) = ((g_1125 = l_1122[0]) != &g_1126))) < (p_16 ^ (safe_mod_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s((safe_rshift_func_int16_t_s_u((0xAFBDL == (***g_1001)), (func_50((*g_596), p_15) ^ p_15))), p_15)), 255UL))));
            (*g_76) ^= ((((*l_1133) = ((**g_1002) &= p_16)) & g_541) | p_16);
        }
        else
        {
            char l_1136 = 0x22L;
            union U0 *l_1142 = (void*)0;
            unsigned short *l_1143 = (void*)0;
            unsigned short *l_1144 = &g_122.f0;
            (***g_596) = (g_57 |= ((((*g_882) = 0x2B1FL) > (5UL > (safe_sub_func_int16_t_s_s(((((**g_350) = (p_15 ^ (l_1136 && ((*l_1144) = ((safe_sub_func_uint32_t_u_u(p_15, p_16)) > (((safe_mul_func_int8_t_s_s((*l_1064), ((*g_667) &= l_1136))) && (l_1141 == l_1142)) & l_1136)))))) > p_16) < p_16), p_15)))) == (*l_1064)));
            for (p_15 = 6; (p_15 != 19); p_15 = safe_add_func_uint32_t_u_u(p_15, 9))
            {
                unsigned char l_1148 = 0xACL;
                unsigned short l_1157 = 65535UL;
                char l_1160[7][7][5] = {{{0xA7L,0xF8L,(-10L),0L,0xEFL},{(-1L),0x36L,0x36L,(-1L),0L},{5L,0x79L,(-3L),0L,(-8L)},{1L,0x7DL,0L,(-1L),0xC1L},{9L,(-3L),0xF8L,0L,0xE7L},{0x59L,0L,0x7DL,(-1L),0xF8L},{0L,1L,1L,0L,0L}},{{0x7AL,0L,1L,(-1L),0x78L},{(-1L),(-10L),0x79L,0L,(-1L)},{(-9L),1L,0L,(-1L),0x91L},{0x99L,0xF8L,(-10L),0L,0xEFL},{(-1L),0x36L,0x36L,(-1L),0L},{5L,0x79L,(-3L),0L,(-8L)},{1L,0x7DL,0L,(-1L),0xC1L}},{{9L,(-3L),0xF8L,0L,0xE7L},{0x59L,0L,0x7DL,(-1L),0xF8L},{0L,1L,1L,0L,0L},{0x7AL,0L,1L,(-1L),0x78L},{(-1L),(-10L),0x79L,0L,(-1L)},{(-9L),0xECL,2L,1L,(-4L)},{0xF8L,0x8CL,0x57L,(-3L),0x64L}},{{1L,0x4AL,0x4AL,1L,(-7L)},{(-10L),0xA7L,(-2L),(-3L),0L},{0L,0xB1L,0x68L,1L,1L},{1L,(-2L),0x8CL,(-3L),0x84L},{0L,2L,0xB1L,1L,0x4DL},{(-3L),0xFCL,0xFCL,(-3L),0x36L},{0x7DL,0x68L,0xECL,1L,0xAFL}},{{0x79L,0x57L,0xA7L,(-3L),0xFDL},{0x36L,0xECL,2L,1L,(-4L)},{0xF8L,0x8CL,0x57L,(-3L),0x64L},{1L,0x4AL,0x4AL,1L,(-7L)},{(-10L),0xA7L,(-2L),(-3L),0L},{0L,0xB1L,0x68L,1L,1L},{1L,(-2L),0x8CL,(-3L),0x84L}},{{0L,2L,0xB1L,1L,0x4DL},{(-3L),0xFCL,0xFCL,(-3L),0x36L},{0x7DL,0x68L,0xECL,1L,0xAFL},{0x79L,9L,0x99L,0L,0xFCL},{1L,1L,0x7AL,0xAFL,0xB1L},{0x64L,5L,9L,0L,0x8CL},{0xAFL,(-1L),(-1L),0xAFL,0x68L}},{{0x84L,0x99L,(-1L),0L,(-2L)},{(-7L),(-9L),0x59L,0xAFL,0x4AL},{0xFDL,(-1L),5L,0L,0x57L},{0x4DL,0x7AL,(-9L),0xAFL,2L},{0L,0L,0L,0L,0xA7L},{(-4L),0x59L,1L,0xAFL,0xECL},{0x36L,9L,0x99L,0L,0xFCL}}};
                int ** const l_1163[5][8] = {{(void*)0,&g_99,&g_99,(void*)0,&g_189,(void*)0,&g_99,&g_99},{&g_99,&g_189,&g_189,&g_189,&g_189,&g_99,&g_189,&g_189},{(void*)0,&g_189,(void*)0,&g_99,&g_99,(void*)0,&g_189,(void*)0},{&g_99,&g_99,&g_189,&g_99,&g_99,&g_99,&g_99,&g_189},{&g_99,&g_99,&g_99,&g_189,&g_99,&g_99,&g_99,&g_99}};
                int i, j, k;
                if ((**g_75))
                {
                    int l_1147 = 0x0FF5F428L;
                    (*l_1064) = l_1147;
                    if (l_1148)
                        continue;
                }
                else
                {
                    char l_1158 = 0L;
                    unsigned char l_1164[2][1][3] = {{{0x16L,1UL,0x10L}},{{0x10L,0x16L,0x10L}}};
                    union U0 *****l_1168 = (void*)0;
                    int i, j, k;
                    for (g_116 = 0; (g_116 == 19); ++g_116)
                    {
                        unsigned short l_1159 = 1UL;
                        int l_1165[9] = {0x9C059FA9L,0x9C059FA9L,0x9C059FA9L,0x9C059FA9L,0x9C059FA9L,0x9C059FA9L,0x9C059FA9L,0x9C059FA9L,0x9C059FA9L};
                        int i;
                        if (l_1136)
                            break;
                        l_1158 = ((0xFFL != (safe_mod_func_uint8_t_u_u(((**g_666) = ((func_50((*g_596), p_16) || 0UL) < p_15)), (safe_sub_func_uint16_t_u_u((0xF6ABL || (safe_sub_func_uint32_t_u_u((0UL <= (-8L)), p_16))), p_16))))) < l_1157);
                        l_1165[4] = ((****g_595) = (((l_1159 != ((l_1160[5][5][3] != (safe_add_func_int16_t_s_s(((func_50((**g_595), l_1158) || p_16) > p_16), (func_50(l_1163[0][0], p_16) != l_1164[0][0][0])))) <= (**g_350))) != 1L) ^ p_16));
                        l_1141 = l_1142;
                    }
                    (*l_1064) &= (safe_rshift_func_uint8_t_u_u(0xB7L, ((void*)0 != l_1168)));
                    if (p_16)
                        continue;
                    (****g_595) ^= l_1164[1][0][2];
                }
            }
        }
        (***g_596) = (-7L);
        l_1169 = (void*)0;
    }
    (*l_1171) = (p_15 >= l_1172);
    return p_16;
}







static unsigned char func_19(unsigned p_20, int p_21)
{
    unsigned l_874[2][9][7] = {{{18446744073709551606UL,0x6AF00F9EL,18446744073709551606UL,18446744073709551615UL,18446744073709551606UL,0xBFEC6285L,18446744073709551615UL},{0x0D01D2A1L,0x6AF00F9EL,0xDDB45EE4L,0xAA3BDD02L,18446744073709551606UL,1UL,0xAA3BDD02L},{0x0D01D2A1L,2UL,18446744073709551606UL,0xAA3BDD02L,0xBFEC6285L,0xBFEC6285L,0xAA3BDD02L},{18446744073709551606UL,0x6AF00F9EL,18446744073709551606UL,18446744073709551615UL,18446744073709551606UL,0xBFEC6285L,18446744073709551615UL},{0x0D01D2A1L,0x6AF00F9EL,0xDDB45EE4L,0xAA3BDD02L,18446744073709551606UL,1UL,0xAA3BDD02L},{0x0D01D2A1L,2UL,18446744073709551606UL,0xAA3BDD02L,0xBFEC6285L,0xBFEC6285L,0xAA3BDD02L},{18446744073709551606UL,0x6AF00F9EL,18446744073709551606UL,18446744073709551615UL,18446744073709551606UL,0xBFEC6285L,18446744073709551615UL},{0x0D01D2A1L,0x6AF00F9EL,0xDDB45EE4L,0xAA3BDD02L,18446744073709551606UL,1UL,0xAA3BDD02L},{0x0D01D2A1L,2UL,18446744073709551606UL,0xAA3BDD02L,0xBFEC6285L,0xBFEC6285L,0xAA3BDD02L}},{{18446744073709551606UL,0x6AF00F9EL,18446744073709551606UL,18446744073709551615UL,18446744073709551606UL,0xBFEC6285L,18446744073709551615UL},{0x0D01D2A1L,0x6AF00F9EL,0xDDB45EE4L,0xAA3BDD02L,18446744073709551606UL,1UL,0xAA3BDD02L},{0x0D01D2A1L,2UL,18446744073709551606UL,0xAA3BDD02L,0xBFEC6285L,18446744073709551615UL,0xA96B4F0DL},{18446744073709551615UL,18446744073709551606UL,18446744073709551615UL,0x300F5D90L,0xAA3BDD02L,18446744073709551615UL,0x300F5D90L},{0x2A98F4F9L,18446744073709551606UL,0x6E15CE95L,0xA96B4F0DL,0xAA3BDD02L,0x72D69489L,0xA96B4F0DL},{0x2A98F4F9L,0xBFEC6285L,18446744073709551615UL,0xA96B4F0DL,18446744073709551615UL,18446744073709551615UL,0xA96B4F0DL},{18446744073709551615UL,18446744073709551606UL,18446744073709551615UL,0x300F5D90L,0xAA3BDD02L,18446744073709551615UL,0x300F5D90L},{0x2A98F4F9L,18446744073709551606UL,0x6E15CE95L,0xA96B4F0DL,0xAA3BDD02L,0x72D69489L,0xA96B4F0DL},{0x2A98F4F9L,0xBFEC6285L,18446744073709551615UL,0xA96B4F0DL,18446744073709551615UL,18446744073709551615UL,0xA96B4F0DL}}};
    union U1 l_877 = {65535UL};
    int *l_878[2][6][10] = {{{&g_90[1][2][5],&g_90[1][2][5],&g_416,(void*)0,&g_4,&g_190,(void*)0,&g_57,(void*)0,&g_90[3][3][2]},{&g_190,&g_45,&g_90[1][2][5],&g_90[1][2][5],&g_4,(void*)0,&g_190,&g_541,(void*)0,&g_190},{&g_4,(void*)0,&g_57,&g_4,&g_57,&g_90[1][2][5],&g_45,(void*)0,&g_90[1][2][5],&g_541},{(void*)0,&g_45,(void*)0,(void*)0,&g_541,&g_90[1][2][5],&g_416,&g_190,&g_416,&g_190},{&g_416,&g_45,(void*)0,&g_190,&g_45,&g_416,&g_45,&g_190,(void*)0,&g_45},{&g_541,&g_90[1][2][5],&g_90[3][9][5],&g_4,(void*)0,&g_90[1][5][4],&g_90[2][7][0],&g_416,&g_45,&g_190}},{{&g_90[1][2][5],(void*)0,&g_90[1][5][4],(void*)0,&g_416,&g_90[1][5][4],(void*)0,&g_57,&g_541,(void*)0},{&g_90[1][2][5],(void*)0,&g_541,&g_57,&g_416,&g_45,&g_90[1][2][5],&g_90[2][7][0],&g_4,&g_416},{&g_90[1][2][5],(void*)0,(void*)0,&g_416,&g_541,(void*)0,&g_4,&g_90[1][2][5],(void*)0,(void*)0},{&g_541,&g_416,&g_90[1][5][4],(void*)0,&g_57,&g_45,&g_45,&g_57,(void*)0,&g_90[1][5][4]},{&g_90[2][7][0],&g_90[2][7][0],&g_190,(void*)0,&g_90[1][2][5],&g_57,&g_57,(void*)0,&g_4,&g_416},{(void*)0,&g_90[1][2][5],&g_416,(void*)0,(void*)0,(void*)0,&g_57,&g_90[1][2][5],(void*)0,&g_90[2][7][0]}}};
    unsigned short *l_879 = &g_543;
    unsigned short *l_881 = &l_877.f0;
    unsigned short **l_880[6][1] = {{&l_881},{&l_881},{&l_881},{&l_881},{&l_881},{&l_881}};
    unsigned *l_889 = &g_215[7][4][2].f1;
    union U0 **l_890 = &g_343;
    short l_989 = (-1L);
    union U0 * const *l_1015 = &g_343;
    union U0 * const **l_1014 = &l_1015;
    union U0 * const *** const l_1013 = &l_1014;
    union U0 * const *** const *l_1012 = &l_1013;
    union U0 * const *** const **l_1011[2];
    int **l_1045 = &l_878[1][0][1];
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_1011[i] = &l_1012;
    g_45 = (((!(**g_666)) < (**g_666)) ^ ((*g_115) <= (-1L)));
    if ((((**g_350) = (p_21 <= (l_879 == (g_882 = l_879)))) <= (((safe_lshift_func_uint16_t_u_u(((**g_666) & p_21), (safe_add_func_uint32_t_u_u(((*l_889) = 0xAC66A1B5L), p_20)))) < (l_890 == (void*)0)) <= p_20)))
    {
        g_57 &= ((**g_666) != p_20);
        return p_20;
    }
    else
    {
        unsigned l_903[8][8] = {{18446744073709551615UL,0x47750427L,0xA20515ECL,18446744073709551615UL,0xA20515ECL,0x47750427L,18446744073709551615UL,18446744073709551615UL},{18446744073709551615UL,0xBC2C4985L,0xA20515ECL,8UL,0xA20515ECL,0xBC2C4985L,18446744073709551615UL,8UL},{18446744073709551615UL,0x47750427L,0xA20515ECL,18446744073709551615UL,0xA20515ECL,0x47750427L,18446744073709551615UL,18446744073709551615UL},{18446744073709551615UL,0xBC2C4985L,0xA20515ECL,8UL,0xA20515ECL,0xBC2C4985L,18446744073709551615UL,8UL},{18446744073709551615UL,0x47750427L,0xA20515ECL,18446744073709551615UL,0xA20515ECL,0x47750427L,18446744073709551615UL,18446744073709551615UL},{18446744073709551615UL,0xBC2C4985L,0xA20515ECL,8UL,0xA20515ECL,0xBC2C4985L,18446744073709551615UL,8UL},{18446744073709551615UL,0x47750427L,0xA20515ECL,18446744073709551615UL,0xA20515ECL,0x47750427L,18446744073709551615UL,18446744073709551615UL},{18446744073709551615UL,0xBC2C4985L,0xA20515ECL,8UL,0xA20515ECL,0xBC2C4985L,18446744073709551615UL,8UL}};
        char **l_910[2];
        int l_911 = 1L;
        int l_925 = 1L;
        int l_926[2];
        char l_927 = 0L;
        int ***l_928 = (void*)0;
        short **l_932[10][8] = {{(void*)0,&g_115,&g_115,&g_115,&g_115,(void*)0,&g_115,&g_115},{&g_115,&g_115,&g_115,&g_115,&g_115,&g_115,&g_115,&g_115},{&g_115,(void*)0,(void*)0,&g_115,&g_115,(void*)0,&g_115,&g_115},{&g_115,&g_115,&g_115,&g_115,&g_115,&g_115,&g_115,&g_115},{&g_115,&g_115,(void*)0,&g_115,&g_115,(void*)0,&g_115,&g_115},{&g_115,(void*)0,(void*)0,(void*)0,(void*)0,&g_115,(void*)0,&g_115},{&g_115,&g_115,&g_115,&g_115,&g_115,(void*)0,&g_115,(void*)0},{&g_115,(void*)0,&g_115,&g_115,&g_115,&g_115,&g_115,(void*)0},{&g_115,(void*)0,&g_115,(void*)0,(void*)0,(void*)0,&g_115,&g_115},{&g_115,&g_115,&g_115,(void*)0,(void*)0,&g_115,(void*)0,(void*)0}};
        unsigned short **l_956[2];
        short ***l_1000 = (void*)0;
        union U0 ***l_1037 = &g_342[2][1];
        int i, j;
        for (i = 0; i < 2; i++)
            l_910[i] = &g_195;
        for (i = 0; i < 2; i++)
            l_926[i] = 0x37B9BA74L;
        for (i = 0; i < 2; i++)
            l_956[i] = &l_879;
        for (g_541 = 1; (g_541 >= 0); g_541 -= 1)
        {
            int l_891 = 0xA241D5FDL;
            int *l_892[2][1][6] = {{{&g_57,(void*)0,&g_57,&g_57,(void*)0,&g_57}},{{&g_57,(void*)0,&g_57,&g_57,(void*)0,&g_57}}};
            char **l_908 = (void*)0;
            int i, j, k;
            (**g_596) = (void*)0;
            l_891 = 0x1DE8F275L;
            for (p_20 = 0; (p_20 <= 1); p_20 += 1)
            {
                int *l_905 = &g_90[0][0][2];
                for (l_877.f0 = 0; (l_877.f0 <= 2); l_877.f0 += 1)
                {
                    for (g_57 = 0; (g_57 <= 1); g_57 += 1)
                    {
                        (***g_595) = l_892[1][0][2];
                    }
                }
                for (l_877.f2 = 0; (l_877.f2 <= 1); l_877.f2 += 1)
                {
                    for (g_109 = 0; (g_109 <= 1); g_109 += 1)
                    {
                        short *l_904[9] = {&g_116,&g_116,&g_116,&g_116,&g_116,&g_116,&g_116,&g_116,&g_116};
                        char ***l_909 = &l_908;
                        int l_912 = (-6L);
                        int i, j, k;
                        (*l_905) = (safe_lshift_func_uint8_t_u_u(((0x434A8655L >= (safe_rshift_func_int16_t_s_u((safe_sub_func_uint8_t_u_u(((*g_667) = (safe_lshift_func_uint16_t_u_s(func_50(&l_878[1][0][1], (safe_add_func_uint8_t_u_u(l_903[2][7], (((*g_882) | (l_904[6] == (void*)0)) >= (func_26(l_905) != (safe_lshift_func_int8_t_s_s((l_911 = (g_84[g_109][(g_541 + 3)][(p_20 + 3)] &= ((((*l_909) = ((*g_801) = l_908)) == l_910[1]) < (**g_350)))), l_912))))))), l_912))), 0x20L)), (*g_882)))) == l_912), p_21));
                        (*l_905) = p_20;
                        (*l_905) = g_84[g_109][(g_541 + 3)][(p_20 + 3)];
                        (*l_905) = 0xBD72606CL;
                    }
                }
            }
        }
        for (g_416 = (-9); (g_416 <= 20); g_416 = safe_add_func_uint16_t_u_u(g_416, 9))
        {
            int *l_917 = (void*)0;
            unsigned l_918 = 0x92676C5AL;
            int ** const l_922 = &l_878[1][0][1];
            if (l_911)
                break;
            l_927 ^= ((safe_lshift_func_uint16_t_u_s((!((*l_879) = 0x4A8EL)), ((l_911 < (g_90[2][3][4] &= l_918)) > (g_541 ^ (((*l_881) = (safe_sub_func_uint16_t_u_u((safe_unary_minus_func_uint16_t_u(p_21)), 1UL))) == (func_50(l_922, (l_926[0] ^= (l_925 = (safe_sub_func_int16_t_s_s(p_20, 0x4942L))))) ^ p_21)))))) | 0x33L);
            for (g_122.f3 = 0; (g_122.f3 <= 0); g_122.f3 += 1)
            {
                union U1 **l_929 = &g_121;
                if (p_21)
                    break;
                g_57 |= (l_928 != (*g_595));
                (*l_929) = &l_877;
            }
            for (p_20 = 26; (p_20 > 55); ++p_20)
            {
                short ***l_933 = &l_932[5][2];
                int l_951 = 0x2FD1049FL;
                (*l_933) = l_932[5][2];
                g_215[7][4][2].f3 = ((*g_351) > p_21);
                for (g_106 = 0; (g_106 < 57); g_106 = safe_add_func_uint16_t_u_u(g_106, 8))
                {
                    unsigned l_940[3];
                    int l_941 = 0x85743497L;
                    int l_950 = 0L;
                    unsigned short ***l_955[9] = {&l_880[4][0],&l_880[4][0],&l_880[4][0],&l_880[4][0],&l_880[4][0],&l_880[4][0],&l_880[4][0],&l_880[4][0],&l_880[4][0]};
                    int i;
                    for (i = 0; i < 3; i++)
                        l_940[i] = 0x82DE5C88L;
                    for (l_925 = 0; (l_925 < (-18)); --l_925)
                    {
                        unsigned char l_938 = 255UL;
                        int *l_939[8] = {&g_541,&g_541,&g_541,&g_541,&g_541,&g_541,&g_541,&g_541};
                        int i;
                        l_938 &= p_20;
                        g_90[0][6][0] ^= (0L < ((void*)0 != l_939[7]));
                        l_941 = l_940[2];
                    }
                    for (l_877.f0 = 0; l_877.f0 < 2; l_877.f0 += 1)
                    {
                        for (g_114 = 0; g_114 < 6; g_114 += 1)
                        {
                            for (l_925 = 0; l_925 < 10; l_925 += 1)
                            {
                                l_878[l_877.f0][g_114][l_925] = &g_416;
                            }
                        }
                    }
                    for (g_790 = 12; (g_790 > (-22)); g_790 = safe_sub_func_uint16_t_u_u(g_790, 3))
                    {
                        unsigned char *l_952 = &g_605;
                        int l_953 = 0x93D28DFFL;
                        l_953 |= ((safe_sub_func_uint32_t_u_u(((*g_351) <= (((g_666 = &g_667) != (void*)0) != ((*g_667) = (*g_667)))), (((l_951 = ((safe_mul_func_int8_t_s_s((l_925 = (((((safe_lshift_func_int16_t_s_s(((((*l_952) = (l_950 != func_50((**g_595), l_951))) && p_20) == (*g_882)), 8)) <= (-1L)) > 0L) < 0x3C6D0688L) && 0x70FBF512L)), 0x67L)) <= (*g_351))) ^ (*g_115)) > (-10L)))) >= p_20);
                        if (p_21)
                            break;
                        g_954 = p_21;
                    }
                    l_956[0] = &l_881;
                }
            }
        }
        (**g_596) = &l_925;
        for (g_57 = 0; (g_57 <= 21); g_57++)
        {
            int *****l_981[4][10][4] = {{{&g_595,&g_595,&g_595,(void*)0},{&g_595,&g_595,&g_595,&g_595},{&g_595,&g_595,&g_595,&g_595},{(void*)0,&g_595,(void*)0,&g_595},{&g_595,&g_595,&g_595,&g_595},{&g_595,&g_595,&g_595,&g_595},{&g_595,&g_595,&g_595,&g_595},{&g_595,&g_595,&g_595,(void*)0},{&g_595,(void*)0,&g_595,(void*)0},{&g_595,(void*)0,&g_595,&g_595}},{{&g_595,&g_595,&g_595,&g_595},{&g_595,&g_595,(void*)0,(void*)0},{&g_595,&g_595,&g_595,&g_595},{(void*)0,(void*)0,&g_595,&g_595},{(void*)0,(void*)0,&g_595,&g_595},{(void*)0,&g_595,&g_595,(void*)0},{&g_595,&g_595,(void*)0,&g_595},{&g_595,&g_595,&g_595,&g_595},{(void*)0,(void*)0,&g_595,(void*)0},{&g_595,(void*)0,&g_595,(void*)0}},{{&g_595,&g_595,&g_595,&g_595},{(void*)0,&g_595,&g_595,&g_595},{(void*)0,&g_595,&g_595,(void*)0},{&g_595,&g_595,&g_595,&g_595},{&g_595,&g_595,&g_595,&g_595},{(void*)0,&g_595,&g_595,&g_595},{&g_595,(void*)0,(void*)0,&g_595},{&g_595,&g_595,&g_595,&g_595},{(void*)0,&g_595,&g_595,&g_595},{(void*)0,&g_595,&g_595,&g_595}},{{(void*)0,&g_595,&g_595,&g_595},{&g_595,(void*)0,&g_595,&g_595},{&g_595,&g_595,&g_595,&g_595},{(void*)0,&g_595,(void*)0,&g_595},{&g_595,(void*)0,&g_595,&g_595},{&g_595,(void*)0,(void*)0,&g_595},{&g_595,&g_595,&g_595,(void*)0},{&g_595,&g_595,&g_595,&g_595},{&g_595,(void*)0,(void*)0,&g_595},{&g_595,&g_595,&g_595,&g_595}}};
            union U0 *l_1020 = &g_215[4][0][1];
            unsigned l_1050[7][9] = {{18446744073709551615UL,0UL,18446744073709551615UL,0UL,18446744073709551615UL,0UL,18446744073709551615UL,0UL,18446744073709551615UL},{0x63A4B366L,0x63A4B366L,0x63A4B366L,0x63A4B366L,0x63A4B366L,0x63A4B366L,0x63A4B366L,0x63A4B366L,0x63A4B366L},{18446744073709551615UL,0UL,18446744073709551615UL,0UL,18446744073709551615UL,0UL,18446744073709551615UL,0UL,18446744073709551615UL},{0x63A4B366L,0x63A4B366L,0x63A4B366L,0x63A4B366L,0x63A4B366L,0x63A4B366L,0x63A4B366L,0x63A4B366L,0x63A4B366L},{18446744073709551615UL,0UL,18446744073709551615UL,0UL,18446744073709551615UL,0UL,18446744073709551615UL,0UL,18446744073709551615UL},{0x63A4B366L,0x63A4B366L,0x63A4B366L,0x63A4B366L,0x63A4B366L,0x63A4B366L,0x63A4B366L,0x63A4B366L,0x63A4B366L},{18446744073709551615UL,0UL,18446744073709551615UL,0UL,18446744073709551615UL,0UL,18446744073709551615UL,0UL,18446744073709551615UL}};
            unsigned char l_1058 = 0xB4L;
            int i, j, k;
            if (p_21)
            {
                unsigned short l_965 = 65535UL;
                int * const *l_970 = &g_189;
                char *l_979[4];
                int i;
                for (i = 0; i < 4; i++)
                    l_979[i] = &g_84[1][6][6];
                (*g_76) = (****g_595);
                (***g_595) = (void*)0;
                for (g_416 = (-22); (g_416 == 14); ++g_416)
                {
                    const int *l_968 = &g_969;
                    const int **l_967 = &l_968;
                    const int ***l_966 = &l_967;
                    int l_971 = (-4L);
                    int *****l_980 = &g_595;
                    l_971 = (safe_lshift_func_uint16_t_u_s((safe_mul_func_uint8_t_u_u(p_20, (((*g_882) = l_965) <= (((*l_966) = (void*)0) == l_970)))), 2));
                    for (g_107 = 0; (g_107 <= 2); g_107 += 1)
                    {
                        int l_988[9][9] = {{0x9815A1C3L,0x82CCB0FBL,0x69A97D84L,1L,0x16E6899EL,0L,1L,1L,0L},{1L,0xB1A9F770L,0x55AC8193L,(-1L),(-4L),0x4E431A19L,6L,(-1L),0x312DABDDL},{6L,0x82CCB0FBL,1L,(-1L),(-1L),(-1L),1L,0x82CCB0FBL,6L},{1L,0x9049D2B2L,0x6F108924L,1L,(-1L),0x4E431A19L,0x9815A1C3L,0x82CCB0FBL,0x69A97D84L},{0x312DABDDL,(-9L),0x9815A1C3L,0x312DABDDL,0xB1A9F770L,0L,0x97A4C672L,(-1L),0x6F108924L},{1L,(-1L),0x9815A1C3L,(-1L),(-1L),0x9815A1C3L,0x69A97D84L,1L,0x55AC8193L},{6L,(-1L),0x6F108924L,1L,0xB1A9F770L,0x69A97D84L,0x69A97D84L,0xB1A9F770L,1L},{1L,0L,1L,0L,(-1L),(-1L),0x97A4C672L,(-1L),0x55AC8193L},{0x9815A1C3L,0L,0x55AC8193L,0x69A97D84L,(-1L),6L,0x9815A1C3L,0xC514640FL,0x6F108924L}};
                        int i, j;
                        l_989 |= ((safe_unary_minus_func_int16_t_s((*g_115))) || (safe_add_func_uint8_t_u_u(((safe_add_func_int16_t_s_s((safe_sub_func_int32_t_s_s(((void*)0 != l_979[2]), (l_980 != l_981[2][7][1]))), (safe_sub_func_uint32_t_u_u(((((*g_115) &= (safe_sub_func_int32_t_s_s((p_20 < (func_50((***l_980), (safe_rshift_func_int8_t_s_u((l_988[2][2] = func_50((***l_980), p_21)), p_21))) >= 6L)), (*g_351)))) >= p_20) && p_20), p_20)))) && p_21), 0x15L)));
                        (**g_596) = &l_988[2][2];
                        return (**g_666);
                    }
                }
                for (g_45 = 0; (g_45 < 4); g_45 = safe_add_func_int32_t_s_s(g_45, 1))
                {
                    for (l_925 = 4; (l_925 >= 1); l_925 -= 1)
                    {
                        unsigned short l_992 = 0x0BD4L;
                        l_992 |= 0xC9526033L;
                    }
                }
            }
            else
            {
                short ***l_997 = (void*)0;
                short ***l_999 = &l_932[5][2];
                short ****l_998[10] = {&l_999,&l_999,&l_999,&l_999,&l_999,&l_999,&l_999,&l_999,&l_999,&l_999};
                int l_1003 = (-1L);
                int i;
                l_1003 = ((safe_lshift_func_int8_t_s_u((l_925 = ((safe_rshift_func_int16_t_s_s((l_997 == (l_1000 = &l_932[2][3])), 6)) < ((*g_115) = (((*g_115) < (p_21 != ((void*)0 == g_1001))) != (((**g_350) = (**g_350)) | (0x98C2L || ((void*)0 == l_932[2][5]))))))), (*g_667))) ^ 0x0634D621L);
            }
            for (p_20 = 0; (p_20 < 45); p_20 = safe_add_func_int8_t_s_s(p_20, 9))
            {
                union U1 l_1008 = {0UL};
                int l_1009 = 0xB8B95274L;
                int l_1019 = 0x4CAC820FL;
                l_1009 |= (safe_sub_func_uint16_t_u_u((~p_20), (*g_115)));
                if (((*g_115) != (*g_882)))
                {
                    int *l_1010 = &g_57;
                    union U0 * const *** const ***l_1016 = &l_1011[1];
                    union U0 ******l_1018[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
                    union U0 *******l_1017 = &l_1018[2];
                    int i;
                    g_90[1][9][1] = p_20;
                    l_1019 &= (~(l_1009 = (((*l_1016) = l_1011[1]) != ((*l_1017) = &g_825))));
                }
                else
                {
                    char l_1021[2][2] = {{0x99L,0x99L},{0x99L,0x99L}};
                    int i, j;
                    l_1019 ^= p_20;
                    for (g_122.f1 = 1; (g_122.f1 >= 0); g_122.f1 -= 1)
                    {
                        int i, j, k;
                        l_1020 = &g_215[(g_122.f1 + 5)][(g_122.f1 + 6)][g_122.f1];
                        l_1021[1][1] = l_1008.f3;
                        g_1026 = (safe_mod_func_int32_t_s_s(p_20, (safe_rshift_func_int8_t_s_s(0xE0L, 3))));
                    }
                }
                for (g_541 = 0; (g_541 > 14); g_541 = safe_add_func_uint8_t_u_u(g_541, 2))
                {
                    int *l_1029 = &l_926[0];
                    int l_1051[9];
                    int i;
                    for (i = 0; i < 9; i++)
                        l_1051[i] = (-2L);
                    (**g_596) = (l_878[1][0][0] = &l_1019);
                    if ((l_1008.f0 && ((safe_mod_func_int8_t_s_s(((*g_882) == 0x71D8L), (safe_mod_func_int32_t_s_s((safe_sub_func_uint16_t_u_u(((safe_unary_minus_func_uint32_t_u(((void*)0 != l_1037))) < (0x1AC1L && 0UL)), 7UL)), (**g_350))))) <= (**g_75))))
                    {
                        int ***l_1042[10][6][1] = {{{(void*)0},{&g_75},{&g_75},{&g_75},{&g_75},{&g_75}},{{&g_75},{&g_75},{&g_75},{&g_75},{(void*)0},{&g_75}},{{&g_75},{&g_75},{(void*)0},{&g_75},{&g_75},{&g_75}},{{&g_75},{&g_75},{&g_75},{&g_75},{&g_75},{&g_75}},{{(void*)0},{&g_75},{&g_75},{&g_75},{(void*)0},{&g_75}},{{&g_75},{&g_75},{&g_75},{&g_75},{&g_75},{&g_75}},{{&g_75},{&g_75},{(void*)0},{&g_75},{&g_75},{&g_75}},{{(void*)0},{&g_75},{&g_75},{&g_75},{&g_75},{&g_75}},{{&g_75},{&g_75},{&g_75},{&g_75},{(void*)0},{&g_75}},{{&g_75},{&g_75},{(void*)0},{&g_75},{&g_75},{&g_75}}};
                        int ***l_1043[1][2];
                        int ***l_1044[8] = {&g_75,&g_75,&g_75,&g_75,&g_75,&g_75,&g_75,&g_75};
                        int i, j, k;
                        for (i = 0; i < 1; i++)
                        {
                            for (j = 0; j < 2; j++)
                                l_1043[i][j] = &g_75;
                        }
                        (***g_596) ^= (p_21 == ((-5L) || (safe_rshift_func_uint16_t_u_u((p_20 ^ (!p_21)), (safe_lshift_func_uint16_t_u_u(((*g_882) ^ func_50((l_1045 = (*g_596)), (safe_add_func_uint16_t_u_u((safe_add_func_int8_t_s_s((0x69L || (((void*)0 != &g_666) >= p_21)), p_21)), (*g_882))))), 0))))));
                    }
                    else
                    {
                        (*g_75) = (**g_596);
                        (**g_596) = l_1029;
                    }
                    if (l_1050[1][8])
                    {
                        l_1051[8] |= (***g_596);
                        (**g_75) = (*l_1029);
                        (*g_76) |= p_20;
                    }
                    else
                    {
                        (****g_595) = (-1L);
                        (***g_595) = &l_1009;
                        (*l_1029) = 0x3E459666L;
                        (****g_595) = (safe_add_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u((((**g_666) | l_1008.f0) >= p_20), 1)), (*g_882)));
                    }
                    for (l_877.f0 = 0; (l_877.f0 >= 32); ++l_877.f0)
                    {
                        unsigned l_1061 = 0x84103E47L;
                        if ((*l_1029))
                            break;
                        (**g_596) = &l_1019;
                        (*l_890) = (*l_890);
                        (*l_1029) = ((***g_596) = (l_1058 <= ((!(**g_350)) < ((*l_889) = (safe_sub_func_uint32_t_u_u(l_1061, (0x4BL < p_21)))))));
                    }
                }
                for (g_107 = 0; g_107 < 5; g_107 += 1)
                {
                    g_340[g_107] = &g_341[7][1];
                }
            }
            return (**g_666);
        }
    }
    g_541 = 1L;
    return (**g_666);
}







static const unsigned func_26(int * p_27)
{
    int l_844 = 3L;
    unsigned char l_864 = 5UL;
    int l_865 = (-1L);
    int l_866 = (-2L);
    unsigned l_867[8] = {0x3AE1FAF6L,0x3AE1FAF6L,0x3AE1FAF6L,0x3AE1FAF6L,0x3AE1FAF6L,0x3AE1FAF6L,0x3AE1FAF6L,0x3AE1FAF6L};
    int l_868 = (-1L);
    unsigned char l_869 = 0x6BL;
    int *l_870 = &g_190;
    int i;
    (*p_27) |= 0L;
    for (g_358 = 0; (g_358 < 27); ++g_358)
    {
        (*p_27) ^= (safe_lshift_func_int16_t_s_s(l_844, l_844));
    }
    (*l_870) = ((*p_27) = (safe_rshift_func_int8_t_s_s((safe_rshift_func_int16_t_s_u((*g_115), (l_844 >= (safe_mul_func_int8_t_s_s((safe_unary_minus_func_int8_t_s(l_844)), ((safe_mul_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u((*g_667), (safe_add_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u((((func_50(&p_27, (l_867[4] = (l_866 &= (((void*)0 == &g_131) < func_50((*g_596), (l_865 = (safe_mul_func_uint16_t_u_u(((safe_add_func_uint8_t_u_u(((-1L) > l_844), l_844)) != l_864), l_864)))))))) > l_868) != l_869) | 255UL), 0x774AL)), (*g_667))))), 0UL)) | (*p_27))))))), l_844)));
    return (*l_870);
}







static int * func_28(const int p_29, int * p_30, union U0 p_31, int * p_32, const union U0 p_33)
{
    short l_40 = 0xC73FL;
    int ** const l_805 = &g_76;
    int l_831 = 9L;
    union U1 *l_832 = &g_122;
    int *l_839[3];
    int i;
    for (i = 0; i < 3; i++)
        l_839[i] = &g_90[1][3][4];
    if (func_36(l_40, func_41(l_40), p_30))
    {
        char ***l_803 = &g_802[0][5][0];
        int ** const l_804 = (void*)0;
        int *l_811 = &g_45;
        union U0 *****l_823 = (void*)0;
        for (l_40 = 0; (l_40 <= 2); l_40 += 1)
        {
            unsigned char l_792 = 255UL;
            int *l_809 = &g_90[0][6][1];
            if (l_792)
            {
                unsigned char l_793[2][1];
                int ***l_800 = &g_75;
                int *l_807 = (void*)0;
                int i, j;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_793[i][j] = 0UL;
                }
                if (l_793[1][0])
                {
                    int *l_806 = &g_57;
                    (*l_806) = (safe_mod_func_uint16_t_u_u((safe_mul_func_int16_t_s_s(((safe_mul_func_uint8_t_u_u((*g_667), ((func_50((*g_596), ((*g_595) == l_800)) ^ (+((*g_351) = ((l_803 = g_801) != (void*)0)))) || func_50(l_804, func_50(l_805, p_33.f0))))) >= p_29), 0x6B8FL)), g_90[1][4][3]));
                    (*l_806) &= (*p_32);
                    (**l_800) = l_807;
                }
                else
                {
                    int *l_808 = &g_4;
                    unsigned short *l_814 = &g_131;
                    p_30 = l_808;
                    (***g_595) = l_809;
                    if (((****g_595) = (*l_808)))
                    {
                        int **l_810[2];
                        const int *l_813[1][3][1];
                        const int **l_812 = &l_813[0][2][0];
                        int i, j, k;
                        for (i = 0; i < 2; i++)
                            l_810[i] = &l_807;
                        for (i = 0; i < 1; i++)
                        {
                            for (j = 0; j < 3; j++)
                            {
                                for (k = 0; k < 1; k++)
                                    l_813[i][j][k] = &g_57;
                            }
                        }
                        (*l_805) = (**l_800);
                        l_811 = ((***g_595) = p_30);
                        (*l_812) = &p_29;
                    }
                    else
                    {
                        unsigned short **l_815 = &l_814;
                        (**g_75) |= ((**g_666) <= (((*l_815) = l_814) != &g_358));
                    }
                }
                (*l_809) = 7L;
            }
            else
            {
                int l_816 = 0L;
                int ** const l_819[6] = {&g_76,&g_76,&g_76,&g_76,&g_76,&g_76};
                union U0 *** const *l_822 = (void*)0;
                union U0 *** const **l_821 = &l_822;
                union U0 *** const ***l_820 = &l_821;
                union U0 ******l_824[7][2] = {{&l_823,&l_823},{&l_823,&l_823},{&l_823,&l_823},{&l_823,&l_823},{&l_823,&l_823},{&l_823,&l_823},{&l_823,&l_823}};
                int i, j;
                if (l_816)
                    break;
                (*l_809) = (safe_sub_func_uint32_t_u_u((func_50(l_819[2], (((*l_820) = (void*)0) != (g_825 = l_823))) <= (safe_add_func_int32_t_s_s((-1L), 7UL))), (~((*g_351) = (((*g_115) = ((p_33.f0 ^ 247UL) || (0x0FCDL == 0xC21EL))) & (-7L))))));
                (***g_595) = (void*)0;
            }
            for (g_109 = 0; (g_109 <= 2); g_109 += 1)
            {
                unsigned l_828 = 1UL;
                l_828 = func_50((*g_596), p_31.f0);
                for (g_122.f1 = 0; (g_122.f1 <= 2); g_122.f1 += 1)
                {
                    int ** const l_830[7][10] = {{&g_189,&g_189,&l_809,&g_99,&l_809,&g_189,&g_189,&l_809,&g_99,&l_809},{&g_189,&g_189,&l_809,&g_99,&l_809,&g_189,&g_189,&l_809,&g_99,&l_809},{&g_189,&g_189,&l_809,&g_99,&l_809,&g_189,&g_189,&l_809,&g_99,&l_809},{&g_189,&g_189,&l_809,&g_99,&l_809,&g_189,&g_189,&l_809,&g_99,&l_809},{&g_189,&g_189,&l_809,&g_99,&l_809,&g_189,&g_189,&l_809,&g_99,&l_809},{&g_189,&g_189,&l_809,&g_99,&l_809,&g_189,&g_189,&l_809,&g_99,&l_809},{&g_189,&g_189,&l_809,&g_99,&l_809,&g_189,&g_189,&l_809,&g_99,&l_809}};
                    int i, j;
                    if ((*p_30))
                        break;
                    for (p_31.f1 = 0; (p_31.f1 <= 2); p_31.f1 += 1)
                    {
                        const unsigned char l_829[7] = {0xCFL,0xCFL,0xCFL,0xCFL,0xCFL,0xCFL,0xCFL};
                        union U1 **l_833 = &l_832;
                        int i, j, k;
                        if (l_829[3])
                            break;
                        l_831 ^= ((*l_809) = func_50(l_830[2][6], (*l_809)));
                        (*l_833) = l_832;
                    }
                }
            }
        }
        p_31.f3 = (*l_811);
    }
    else
    {
        union U0 *l_836[10] = {&g_215[0][4][0],(void*)0,&g_215[1][0][0],(void*)0,&g_215[0][4][0],&g_215[0][4][0],(void*)0,&g_215[1][0][0],(void*)0,&g_215[0][4][0]};
        int i;
        for (g_57 = 0; (g_57 == 3); g_57 = safe_add_func_uint32_t_u_u(g_57, 9))
        {
            union U0 **l_837 = (void*)0;
            union U0 **l_838[6] = {&g_343,&g_343,&l_836[7],&l_836[7],&g_343,&l_836[7]};
            int i;
            l_836[7] = l_836[7];
        }
    }
    return l_839[2];
}







static int func_36(unsigned p_37, union U1 p_38, int * p_39)
{
    char l_771 = 0x2BL;
    unsigned char *l_772[10] = {&g_66,&g_605,&g_66,&g_66,&g_605,&g_66,&g_66,&g_605,&g_66,&g_66};
    int l_773[6] = {0xD7997CA4L,0xD7997CA4L,0xD7997CA4L,0xD7997CA4L,0xD7997CA4L,0xD7997CA4L};
    int ** const l_774 = &g_99;
    unsigned short *l_775 = &g_543;
    unsigned short *l_776 = &g_358;
    union U1 l_777[7] = {{9UL},{9UL},{0x4E62L},{9UL},{9UL},{0x4E62L},{9UL}};
    int *l_785 = &g_4;
    int **l_784 = &l_785;
    unsigned **l_787 = &g_351;
    unsigned ***l_786 = &l_787;
    char *l_788 = &l_771;
    char *l_789 = &g_790;
    int *l_791 = &l_773[3];
    int i;
    l_773[2] ^= (l_771 ^ (((**g_75) | ((*g_99) &= ((void*)0 == l_772[4]))) > (*p_39)));
    (*l_791) ^= (+func_50(l_774, ((((**g_666) = func_50(func_67(((*g_666) != (void*)0), ((*l_776) ^= ((*l_775) = g_466.f3)), l_777[2]), ((safe_lshift_func_uint16_t_u_u((((*l_788) = (safe_add_func_int32_t_s_s(((safe_add_func_uint16_t_u_u(l_777[2].f0, func_50((l_784 = l_774), ((*l_789) = ((*l_788) = ((((*l_786) = &g_351) != &g_351) != p_37)))))) || p_37), p_38.f0))) > (*g_667)), 11)) | 0x633DD917L))) ^ (*l_785)) > g_514)));
    return (*p_39);
}







static union U1 func_41(unsigned p_42)
{
    int *l_48 = &g_4;
    int ****l_598[1];
    int ****l_599 = &g_596;
    unsigned char l_614 = 255UL;
    union U0 ***l_624 = &g_342[2][1];
    union U0 ****l_637 = &l_624;
    unsigned char **l_668 = (void*)0;
    int l_715 = 1L;
    unsigned short l_725 = 0x056DL;
    union U1 l_768 = {65535UL};
    int i;
    for (i = 0; i < 1; i++)
        l_598[i] = (void*)0;
    for (p_42 = 5; (p_42 != 55); p_42++)
    {
        int * const l_56 = &g_45;
        union U0 ****l_638 = &g_341[7][1];
        int ** const l_659 = &l_48;
        unsigned l_710 = 0xEA987338L;
        int l_711[4][1] = {{0xE0C40F3AL},{0x1E49EE1BL},{0xE0C40F3AL},{0x1E49EE1BL}};
        int i, j;
        for (g_45 = (-28); (g_45 < 19); ++g_45)
        {
            int **l_49 = &l_48;
            unsigned char l_589 = 249UL;
            char l_594 = 8L;
            int *****l_597[2][2] = {{&g_595,&g_595},{&g_595,&g_595}};
            short *l_600 = &g_215[7][4][2].f0;
            short *l_601 = (void*)0;
            short *l_602 = &g_603;
            unsigned char *l_604 = &g_605;
            unsigned char *l_606 = &g_607[0];
            unsigned char l_608 = 255UL;
            unsigned char **l_671 = &l_604;
            int i, j;
            (*l_49) = l_48;
        }
        for (g_122.f3 = 0; (g_122.f3 <= 11); g_122.f3 = safe_add_func_uint32_t_u_u(g_122.f3, 3))
        {
            unsigned short *l_714 = &g_131;
            char *l_718 = &g_107;
            int l_719[8][9][3] = {{{(-1L),(-1L),2L},{6L,(-6L),2L},{(-6L),6L,2L},{(-1L),(-1L),2L},{6L,(-6L),2L},{(-6L),6L,2L},{(-1L),(-1L),2L},{6L,(-6L),2L},{(-6L),6L,2L}},{{(-1L),(-1L),2L},{6L,(-6L),2L},{(-6L),6L,2L},{(-1L),(-1L),2L},{6L,(-6L),2L},{(-6L),6L,2L},{(-1L),(-1L),2L},{6L,(-6L),2L},{(-6L),6L,2L}},{{(-1L),(-1L),2L},{6L,(-6L),2L},{(-1L),(-6L),0xF2ADC1FFL},{6L,6L,0xF2ADC1FFL},{(-6L),(-1L),0xF2ADC1FFL},{(-1L),(-6L),0xF2ADC1FFL},{6L,6L,0xF2ADC1FFL},{(-6L),(-1L),0xF2ADC1FFL},{(-1L),(-6L),0xF2ADC1FFL}},{{6L,6L,0xF2ADC1FFL},{(-6L),(-1L),0xF2ADC1FFL},{(-1L),(-6L),0xF2ADC1FFL},{6L,6L,0xF2ADC1FFL},{(-6L),(-1L),0xF2ADC1FFL},{(-1L),(-6L),0xF2ADC1FFL},{6L,6L,0xF2ADC1FFL},{(-6L),(-1L),0xF2ADC1FFL},{(-1L),(-6L),0xF2ADC1FFL}},{{6L,6L,0xF2ADC1FFL},{(-6L),(-1L),0xF2ADC1FFL},{(-1L),(-6L),0xF2ADC1FFL},{6L,6L,0xF2ADC1FFL},{(-6L),(-1L),0xF2ADC1FFL},{(-1L),(-6L),0xF2ADC1FFL},{6L,6L,0xF2ADC1FFL},{(-6L),(-1L),0xF2ADC1FFL},{(-1L),(-6L),0xF2ADC1FFL}},{{6L,6L,0xF2ADC1FFL},{(-6L),(-1L),0xF2ADC1FFL},{(-1L),(-6L),0xF2ADC1FFL},{6L,6L,0xF2ADC1FFL},{(-6L),(-1L),0xF2ADC1FFL},{(-1L),(-6L),0xF2ADC1FFL},{6L,6L,(-1L)},{0x98E9EB4BL,(-1L),(-1L)},{(-1L),0x98E9EB4BL,(-1L)}},{{0x43B57AF9L,0x43B57AF9L,(-1L)},{0x98E9EB4BL,(-1L),(-1L)},{(-1L),0x98E9EB4BL,(-1L)},{0x43B57AF9L,0x43B57AF9L,(-1L)},{0x98E9EB4BL,(-1L),(-1L)},{(-1L),0x98E9EB4BL,(-1L)},{0x43B57AF9L,0x43B57AF9L,(-1L)},{0x98E9EB4BL,(-1L),(-1L)},{(-1L),0x98E9EB4BL,(-1L)}},{{0x43B57AF9L,0x43B57AF9L,(-1L)},{0x98E9EB4BL,(-1L),(-1L)},{(-1L),0x98E9EB4BL,(-1L)},{0x43B57AF9L,0x43B57AF9L,(-1L)},{0x98E9EB4BL,(-1L),(-1L)},{(-1L),0x98E9EB4BL,(-1L)},{0x43B57AF9L,0x43B57AF9L,(-1L)},{0x98E9EB4BL,(-1L),(-1L)},{(-1L),0x98E9EB4BL,(-1L)}}};
            int i, j, k;
        }
    }
    return l_768;
}







static unsigned char func_50(int ** const p_51, char p_52)
{
    return g_2;
}







static int ** const func_53(int * p_54, int * const p_55)
{
    char l_377 = 1L;
    int ** const l_379 = &g_99;
    int l_388 = 0x6E67F9E8L;
    int l_427 = 0L;
    int **l_475[5][3][9] = {{{&g_99,&g_99,(void*)0,&g_189,&g_189,(void*)0,&g_99,&g_99,&g_189},{&g_189,&g_76,&g_99,&g_99,&g_76,(void*)0,&g_99,&g_189,(void*)0},{&g_76,&g_99,&g_189,&g_76,&g_99,&g_99,&g_99,&g_76,&g_189}},{{&g_76,&g_76,&g_99,&g_76,&g_99,(void*)0,&g_99,&g_99,&g_99},{&g_76,&g_99,&g_76,&g_99,&g_189,&g_189,&g_76,&g_76,&g_189},{&g_189,&g_99,&g_99,&g_99,&g_189,(void*)0,&g_76,&g_189,&g_189}},{{&g_76,&g_189,&g_99,&g_76,&g_99,(void*)0,&g_76,&g_76,&g_76},{&g_99,&g_189,(void*)0,&g_99,&g_99,(void*)0,&g_189,&g_99,(void*)0},{&g_99,&g_99,&g_99,&g_76,&g_99,&g_189,&g_99,&g_99,&g_189}},{{&g_99,&g_189,(void*)0,&g_99,&g_99,&g_189,&g_99,&g_99,(void*)0},{&g_189,&g_189,(void*)0,&g_99,&g_99,&g_189,&g_99,&g_189,&g_76},{&g_189,&g_99,&g_99,&g_189,&g_99,&g_189,&g_189,&g_189,&g_189}},{{&g_99,&g_99,(void*)0,&g_99,&g_99,&g_99,&g_76,&g_99,&g_189},{&g_189,&g_99,(void*)0,&g_76,&g_99,&g_99,&g_76,&g_189,&g_99},{&g_189,&g_76,&g_99,&g_99,&g_76,&g_189,(void*)0,&g_76,&g_76}}};
    unsigned l_478 = 1UL;
    char **l_499 = (void*)0;
    unsigned char *l_505 = (void*)0;
    unsigned char *l_508 = (void*)0;
    unsigned char **l_507 = &l_508;
    unsigned char l_520 = 246UL;
    unsigned char l_535 = 0UL;
    unsigned l_550 = 18446744073709551611UL;
    const unsigned *l_567 = &g_106;
    const unsigned **l_566 = &l_567;
    union U1 **l_577 = &g_121;
    union U0 *l_580 = &g_215[1][4][1];
    union U0 **l_581 = &g_343;
    unsigned char l_584 = 0x7EL;
    int i, j, k;
    for (g_57 = 0; (g_57 != 7); ++g_57)
    {
        short l_64 = 6L;
        unsigned char *l_65 = &g_66;
        int l_399[2][4][6] = {{{0x466553DFL,1L,0x8AD8FBCBL,0x9D7D4181L,1L,0L},{0x46506FC2L,0x466553DFL,0x09325D2AL,1L,(-5L),0L},{(-5L),0x46506FC2L,0x8AD8FBCBL,0x9AE13F88L,0x9AE13F88L,0x8AD8FBCBL},{(-5L),(-5L),0x07EBC8C0L,1L,4L,0x4FAB12C8L}},{{0x46506FC2L,(-5L),0xEC986705L,0x9D7D4181L,0x9AE13F88L,0x07EBC8C0L},{0x466553DFL,0x46506FC2L,0xEC986705L,0x466553DFL,(-5L),0x4FAB12C8L},{1L,0x466553DFL,0x07EBC8C0L,0x466553DFL,1L,0x8AD8FBCBL},{0x466553DFL,1L,0x8AD8FBCBL,0x9D7D4181L,1L,0L}}};
        unsigned char l_403 = 1UL;
        union U0 *l_404 = &g_215[8][3][0];
        int *l_443 = &l_399[1][2][4];
        char **l_468 = &g_195;
        int i, j, k;
    }
    for (g_122.f0 = 0; (g_122.f0 <= 2); g_122.f0 += 1)
    {
        unsigned char l_469 = 0xAFL;
        int l_491 = 0x1F86E53AL;
        int *l_493 = &g_90[0][2][0];
        unsigned ***l_518 = (void*)0;
        const char *l_531[1];
        short l_545[4];
        unsigned ***l_572 = &g_350;
        char * const *l_579 = &g_194[1][4][2];
        char * const **l_578 = &l_579;
        int i;
        for (i = 0; i < 1; i++)
            l_531[i] = &l_377;
        for (i = 0; i < 4; i++)
            l_545[i] = (-1L);
        for (g_107 = 1; (g_107 >= 0); g_107 -= 1)
        {
            short l_474 = 0x6E27L;
            int l_501 = 0x4F50EF10L;
            int ** const l_509 = &l_493;
        }
        (*l_493) = (*g_189);
        for (g_109 = 0; (g_109 <= 2); g_109 += 1)
        {
            const unsigned *l_517 = &g_514;
            const unsigned **l_516 = &l_517;
            const unsigned ***l_515[10] = {&l_516,&l_516,&l_516,&l_516,&l_516,&l_516,&l_516,&l_516,&l_516,&l_516};
            int l_519 = (-1L);
            int i;
            for (g_416 = 3; (g_416 >= 0); g_416 -= 1)
            {
                const unsigned *l_513 = &g_514;
                const unsigned **l_512 = &l_513;
                const unsigned ***l_511 = &l_512;
                const unsigned ****l_510[5] = {&l_511,&l_511,&l_511,&l_511,&l_511};
                int i, j, k;
                (*l_379) = &g_90[g_122.f0][(g_122.f0 + 7)][(g_109 + 1)];
                l_519 = ((l_515[2] = (void*)0) != l_518);
                (**l_379) = g_90[g_122.f0][(g_109 + 7)][(g_122.f0 + 1)];
            }
            (*l_493) = ((*g_189) = ((void*)0 == &g_373[2][9][2]));
            (*g_189) = (l_520 && (*l_493));
            (*g_75) = (void*)0;
            for (g_66 = 0; (g_66 <= 2); g_66 += 1)
            {
                short l_521 = 7L;
                int *l_527 = &l_491;
                char *l_532 = (void*)0;
                unsigned char *l_540 = (void*)0;
                unsigned char *l_542 = (void*)0;
                unsigned char *l_544 = &l_520;
                char l_565 = 0L;
                int l_575 = (-1L);
                union U1 **l_576 = &g_121;
                int i, j, k;
                for (l_469 = 0; (l_469 <= 2); l_469 += 1)
                {
                    unsigned char *l_530 = &l_520;
                    for (g_106 = 0; (g_106 <= 2); g_106 += 1)
                    {
                        int i, j, k;
                        if (l_521)
                            break;
                        if ((*g_189))
                            continue;
                    }
                    for (g_114 = 0; (g_114 <= 2); g_114 += 1)
                    {
                        int l_526 = 0x4A5F599CL;
                        int **l_528 = (void*)0;
                        int **l_529 = (void*)0;
                    }
                    (*g_99) = (((*l_530) &= (*l_493)) && ((l_531[0] != l_532) ^ (safe_rshift_func_int16_t_s_s(l_519, ((*g_115) = 0x4A87L)))));
                    for (g_107 = 2; (g_107 >= 0); g_107 -= 1)
                    {
                        (*l_493) = (*p_54);
                        (*g_75) = (*g_75);
                        (*l_527) |= 0xBECD6239L;
                    }
                }
                if (((((l_535 ^= ((void*)0 == &g_215[(g_122.f0 + 4)][(g_109 + 3)][g_109])) ^ (*l_493)) & ((void*)0 != &g_351)) != ((&g_116 == (void*)0) <= (((safe_rshift_func_uint8_t_u_s(((*l_544) = (g_543 |= (l_519 = (g_541 = (safe_add_func_int16_t_s_s(0x2441L, g_358)))))), (*l_493))) || (*g_189)) && l_545[0]))))
                {
                    int l_561 = 3L;
                    int l_562 = 5L;
                    if ((safe_lshift_func_uint8_t_u_s(((safe_add_func_uint32_t_u_u(((*l_527) = (0x64723AB5L | (l_550 | (safe_lshift_func_int8_t_s_u((safe_lshift_func_int16_t_s_u((((safe_mul_func_int8_t_s_s((*l_493), ((*l_544) = (((l_562 = (safe_sub_func_uint16_t_u_u((safe_add_func_int16_t_s_s((*g_115), (*l_493))), l_561))) < (*l_493)) || g_84[0][1][4])))) ^ ((*g_115) ^ 0x44A4L)) <= (*l_493)), g_541)), g_131))))), l_519)) != 0xB7B6D051L), l_561)))
                    {
                        (**l_379) = (*p_55);
                        (*g_189) = (-5L);
                        p_54 = p_54;
                        if ((*p_54))
                            break;
                    }
                    else
                    {
                        (*g_189) &= (((g_4 && (*l_493)) && ((*l_527) > g_116)) == ((**g_350) >= (((((void*)0 == &g_116) && (l_519 && 1UL)) == l_562) >= l_519)));
                    }
                    for (g_107 = 1; (g_107 >= 0); g_107 -= 1)
                    {
                        int i, j, k;
                        (*g_75) = &g_90[g_66][(g_66 + 2)][(g_107 + 4)];
                        l_565 ^= (*l_493);
                    }
                    (*g_99) ^= 1L;
                }
                else
                {
                    for (g_57 = 0; g_57 < 10; g_57 += 1)
                    {
                        l_515[g_57] = &l_566;
                    }
                }
                (*l_527) = ((safe_rshift_func_uint8_t_u_s(((safe_rshift_func_uint16_t_u_s((l_572 != (void*)0), 1)) && (((*l_493) & (safe_add_func_int32_t_s_s((*p_54), (l_575 == (l_576 != ((*g_369) = l_577)))))) <= (((**g_350) = ((*l_493) < (l_578 != &l_499))) < (*l_493)))), 1)) == (*l_527));
                (*l_577) = (*l_577);
            }
        }
    }
    (*l_581) = l_580;
    l_584 = ((*p_55) || (safe_mod_func_int8_t_s_s(0x23L, g_541)));
    return &g_189;
}







static int ** func_67(unsigned short p_68, unsigned short p_69, union U1 p_70)
{
    unsigned short l_74 = 0xD287L;
    int **l_78 = &g_76;
    int ***l_77 = &l_78;
    char *l_83[3];
    unsigned char *l_85[9] = {&g_66,&g_66,&g_66,&g_66,&g_66,&g_66,&g_66,&g_66,&g_66};
    int l_86 = (-3L);
    int l_120 = 0xD85517B9L;
    union U1 *l_124 = &g_122;
    unsigned l_157[7];
    char l_169[5][5][6] = {{{0x42L,1L,0x9FL,0x42L,(-1L),(-1L)},{(-1L),0x07L,0x64L,0x74L,0xEDL,5L},{(-1L),0L,0x2FL,4L,0xEDL,9L},{0x07L,(-1L),0x9FL,1L,1L,0x9FL},{0L,0L,0x64L,1L,(-1L),8L}},{{0x07L,0x0CL,5L,0xEDL,0x74L,0x64L},{1L,0x07L,5L,4L,0L,8L},{0x42L,4L,0x64L,0x0CL,4L,0x9FL},{0x0CL,4L,0x9FL,(-1L),0L,5L},{0x74L,0x07L,0x9FL,0x07L,0x74L,0xE0L}},{{0x74L,0x0CL,(-1L),(-1L),(-1L),0x2FL},{0x0CL,0L,0x80L,0x0CL,1L,0x2FL},{0x42L,(-1L),(-1L),4L,(-1L),0xE0L},{1L,0x76L,0x9FL,0xEDL,(-1L),5L},{0x07L,(-1L),0x9FL,1L,1L,0x9FL}},{{0L,0L,0x64L,1L,(-1L),8L},{0x07L,0x0CL,5L,0xEDL,0x74L,0x64L},{1L,0x07L,5L,4L,0L,8L},{0x42L,4L,0x64L,0x0CL,4L,(-1L)},{0x88L,(-9L),(-1L),(-1L),(-1L),(-1L)}},{{1L,0xD5L,0x74L,0xD5L,1L,0x42L},{1L,0x88L,0L,(-1L),9L,0x76L},{0x88L,(-1L),4L,0x88L,(-6L),0x76L},{0xBBL,9L,0L,(-9L),(-1L),0x42L},{(-6L),3L,0x74L,1L,(-1L),(-1L)}}};
    const unsigned l_182 = 4UL;
    unsigned l_235 = 2UL;
    int l_303 = 0xB258F4B7L;
    union U0 ** const *l_328 = (void*)0;
    union U0 *l_339 = (void*)0;
    union U0 **l_338 = &l_339;
    union U0 ***l_337 = &l_338;
    union U0 ****l_336 = &l_337;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_83[i] = &g_84[0][1][4];
    for (i = 0; i < 7; i++)
        l_157[i] = 1UL;
    if (((safe_mul_func_uint16_t_u_u((((p_68 != l_74) & (g_75 == ((*l_77) = &g_76))) || (g_35.f0 <= (safe_add_func_uint32_t_u_u(((safe_sub_func_int8_t_s_s((**l_78), ((p_70.f3 = g_35.f0) || 0x34L))) == (l_86 |= ((((void*)0 != l_83[1]) >= 0x2605L) != 0L))), (***l_77))))), g_2)) ^ g_35.f0))
    {
        int *l_91 = &g_45;
        for (g_66 = 0; (g_66 < 25); g_66 = safe_add_func_uint16_t_u_u(g_66, 6))
        {
            int *l_94 = &g_90[1][2][5];
            int *l_102 = (void*)0;
            for (p_70.f1 = 1; (p_70.f1 >= 0); p_70.f1 -= 1)
            {
                int *l_100 = &g_4;
                unsigned short l_132 = 0x8C69L;
                for (l_86 = 1; (l_86 >= 0); l_86 -= 1)
                {
                    int **l_92 = (void*)0;
                    int **l_93[5][5] = {{&l_91,&l_91,&l_91,&l_91,&l_91},{&l_91,(void*)0,&l_91,(void*)0,&l_91},{&l_91,&l_91,&l_91,&l_91,&l_91},{&l_91,(void*)0,&l_91,(void*)0,&l_91},{&l_91,&l_91,&l_91,&l_91,&l_91}};
                    int i, j, k;
                    for (p_69 = 0; (p_69 <= 8); p_69 += 1)
                    {
                        int *l_89 = &g_90[1][2][5];
                        int i, j, k;
                        (*l_89) ^= g_84[p_70.f1][p_70.f1][(p_69 + 1)];
                        (**l_77) = l_91;
                    }
                    l_94 = (l_91 = ((*g_75) = l_91));
                    for (l_74 = 0; (l_74 <= 1); l_74 += 1)
                    {
                        return &g_76;
                    }
                    if (g_84[l_86][(p_70.f1 + 2)][(l_86 + 6)])
                        continue;
                }
                for (l_74 = 3; (l_74 <= 8); l_74 += 1)
                {
                    int **l_101 = &l_94;
                    unsigned *l_105 = &g_106;
                    short *l_108[1];
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                        l_108[i] = (void*)0;
                    (*g_99) = (safe_add_func_int32_t_s_s(2L, ((safe_mul_func_uint16_t_u_u((g_84[p_70.f1][(p_70.f1 + 1)][l_74] == (*l_91)), (g_109 ^= (((((g_99 != ((*l_78) = l_100)) == (((*l_101) = (void*)0) == l_102)) & ((safe_sub_func_int8_t_s_s(p_68, (g_107 &= (((*l_105) = (&l_91 == (void*)0)) >= 0xB834A4F5L)))) > 0x31009988L)) >= p_69) >= g_57)))) && (-1L))));
                    for (l_86 = 0; (l_86 <= 2); l_86 += 1)
                    {
                        (*g_99) = p_68;
                    }
                    if ((safe_sub_func_uint32_t_u_u(((((safe_rshift_func_uint8_t_u_s((g_114 = g_57), (**l_78))) & ((g_115 == &g_116) > (safe_sub_func_int32_t_s_s((safe_unary_minus_func_uint8_t_u(l_120)), g_90[1][2][5])))) < (-1L)) != p_69), (((void*)0 == (*g_75)) < (*g_99)))))
                    {
                        union U1 **l_123[9][9][1] = {{{&g_121},{&g_121},{&g_121},{&g_121},{&g_121},{&g_121},{&g_121},{&g_121},{&g_121}},{{&g_121},{&g_121},{&g_121},{&g_121},{&g_121},{&g_121},{&g_121},{&g_121},{&g_121}},{{&g_121},{&g_121},{&g_121},{&g_121},{&g_121},{&g_121},{&g_121},{&g_121},{&g_121}},{{&g_121},{&g_121},{&g_121},{&g_121},{&g_121},{&g_121},{&g_121},{&g_121},{&g_121}},{{&g_121},{&g_121},{&g_121},{&g_121},{&g_121},{&g_121},{&g_121},{&g_121},{&g_121}},{{&g_121},{&g_121},{&g_121},{&g_121},{&g_121},{&g_121},{&g_121},{&g_121},{&g_121}},{{&g_121},{&g_121},{&g_121},{&g_121},{&g_121},{&g_121},{&g_121},{&g_121},{&g_121}},{{&g_121},{&g_121},{&g_121},{&g_121},{&g_121},{&g_121},{&g_121},{&g_121},{&g_121}},{{&g_121},{&g_121},{&g_121},{&g_121},{&g_121},{&g_121},{&g_121},{&g_121},{&g_121}}};
                        int i, j, k;
                        (*g_99) = (**g_75);
                        (*g_75) = (*g_75);
                        l_124 = g_121;
                        (*l_101) = l_91;
                    }
                    else
                    {
                        int **l_127 = &g_99;
                        short * const l_130 = (void*)0;
                        (*g_99) = (7UL & ((g_116 & (*g_115)) != ((void*)0 != &g_99)));
                        l_132 ^= (((*g_115) = (safe_mul_func_int8_t_s_s(((void*)0 != l_127), (g_90[1][6][2] < (g_131 = (safe_add_func_uint8_t_u_u((p_69 >= p_70.f3), ((void*)0 == l_130)))))))) || (*g_115));
                        (*g_99) = ((*g_75) != (void*)0);
                    }
                }
            }
            (*l_78) = (*g_75);
        }
    }
    else
    {
        short l_137[6][10] = {{0x8DE3L,0x42BEL,0x6BD6L,0xC311L,0x5833L,(-1L),0xD2E1L,0xDB9AL,1L,1L},{0x42BEL,2L,(-1L),0xFAD3L,0xFAD3L,(-1L),2L,0x42BEL,0xC311L,0xD2E1L},{0x8DE3L,0x6BD6L,(-6L),0x42BEL,(-9L),0xFAD3L,0xEF8DL,0xD2E1L,0xEF8DL,0xFAD3L},{1L,(-9L),(-6L),(-9L),1L,0xD2E1L,0xC311L,0x42BEL,2L,(-1L)},{0xC311L,0x5833L,(-1L),0xD2E1L,0xDB9AL,1L,1L,0xDB9AL,0x42BEL,0x248FL},{0x42BEL,0x42BEL,0xEF8DL,0x248FL,1L,0x6BD6L,1L,0xC311L,0xFAD3L,0x3B57L}};
        int l_156[1];
        unsigned short *l_158 = (void*)0;
        unsigned short *l_159 = &g_122.f0;
        unsigned short *l_160 = &g_131;
        union U1 *l_174 = &g_122;
        char *l_192 = &l_169[0][2][5];
        const int *l_205 = (void*)0;
        const int **l_204 = &l_205;
        const int ***l_203 = &l_204;
        int l_256 = (-1L);
        unsigned short l_257 = 1UL;
        union U0 *l_259 = &g_215[7][4][2];
        union U0 **l_258 = &l_259;
        union U0 ***l_334 = (void*)0;
        union U0 ****l_333 = &l_334;
        const char *l_347 = (void*)0;
        const char **l_346 = &l_347;
        int l_348 = 0xD9B1718FL;
        union U1 **l_367 = &l_174;
        union U1 ***l_366 = &l_367;
        int i, j;
        for (i = 0; i < 1; i++)
            l_156[i] = 0x8910C71AL;
        if (((safe_lshift_func_int16_t_s_u((safe_mod_func_int32_t_s_s((7L & l_137[1][5]), (safe_mod_func_int16_t_s_s((safe_add_func_int8_t_s_s((((*l_160) = ((*l_159) = (safe_sub_func_uint32_t_u_u((safe_add_func_uint8_t_u_u(p_70.f3, (l_157[0] = (((*g_99) = (safe_mul_func_uint16_t_u_u((((**g_75) >= (safe_mul_func_int8_t_s_s((safe_sub_func_uint8_t_u_u((***l_77), l_137[1][5])), p_70.f3))) <= (safe_sub_func_uint8_t_u_u(p_69, (safe_mod_func_int8_t_s_s((l_156[0] = (g_84[0][2][0] |= (p_70.f3 && 0x5E81L))), p_69))))), l_137[1][5]))) || p_70.f3)))), (***l_77))))) & 0x6A7BL), g_35.f0)), 0x7F94L)))), 12)) < 0x5CA3L))
        {
            const unsigned l_165 = 0x32C3757FL;
            int ** const l_168[8] = {&g_99,&g_99,&g_99,&g_99,&g_99,&g_99,&g_99,&g_99};
            int i;
            for (g_122.f3 = 0; (g_122.f3 > 18); g_122.f3 = safe_add_func_uint16_t_u_u(g_122.f3, 3))
            {
                (*g_99) = (p_69 >= (safe_mul_func_int8_t_s_s(((((6L | g_107) || ((9UL ^ (+((l_165 > ((safe_add_func_int8_t_s_s((p_68 >= (&g_106 != (void*)0)), (l_168[7] != &g_99))) == (**g_75))) < g_122.f3))) ^ l_169[0][0][0])) <= 0x21L) > 0xCA80L), 1L)));
            }
        }
        else
        {
            return &g_99;
        }
        if (l_137[5][9])
        {
            union U1 **l_172 = (void*)0;
            union U1 **l_173[1];
            int l_175 = 0x718C347CL;
            int l_183[10] = {0xF8561985L,0xF8561985L,0xF8561985L,0xF8561985L,0xF8561985L,0xF8561985L,0xF8561985L,0xF8561985L,0xF8561985L,0xF8561985L};
            int l_191 = 0L;
            int **l_230[9] = {&g_189,&g_189,&g_189,&g_189,&g_189,&g_189,&g_189,&g_189,&g_189};
            union U0 **l_260 = &l_259;
            int i;
            for (i = 0; i < 1; i++)
                l_173[i] = &l_124;
            for (p_70.f2 = (-23); (p_70.f2 == 25); p_70.f2++)
            {
                (*g_99) &= 0x9D214D04L;
                if (p_70.f1)
                    continue;
                if ((**g_75))
                    continue;
            }
            (**l_77) = &l_156[0];
            l_174 = &p_70;
            if ((!0xC0E3A3C0L))
            {
                int *l_188 = &l_86;
                char **l_193[4] = {&l_83[1],&l_83[1],&l_83[1],&l_83[1]};
                short l_202 = 0xBC8AL;
                int l_227[2];
                int *l_251 = &l_86;
                int i;
                for (i = 0; i < 2; i++)
                    l_227[i] = 0x25B391CDL;
                l_124 = &g_122;
                l_191 ^= (l_175 && (((l_175 |= ((**l_78) &= 0xCCD75A54L)) | (*g_99)) < (p_70.f2 <= (safe_mul_func_int16_t_s_s((((g_122.f3 = ((safe_rshift_func_int16_t_s_u((safe_lshift_func_uint16_t_u_u(g_66, 0)), 1)) ^ l_182)) && (0x83L == (l_183[3] |= p_70.f3))) && (safe_mul_func_uint8_t_u_u((safe_add_func_uint16_t_u_u(((g_189 = l_188) != (void*)0), (*l_188))), g_2))), p_70.f3)))));
                (*g_76) = ((g_195 = (g_194[1][4][2] = l_192)) != &g_107);
                if ((*g_76))
                {
                    union U0 *l_214 = &g_215[7][4][2];
                    for (g_122.f2 = 27; (g_122.f2 >= 4); g_122.f2 = safe_sub_func_uint8_t_u_u(g_122.f2, 1))
                    {
                        unsigned l_206 = 4294967288UL;
                        l_206 = ((*g_99) = ((***l_77) = (((safe_sub_func_int16_t_s_s((*g_115), (p_70.f1 <= (-8L)))) || ((safe_add_func_int16_t_s_s(l_202, (&l_78 != l_203))) | ((*l_188) = p_70.f3))) != (*g_115))));
                    }
                    (*g_189) &= (-4L);
                    for (p_68 = 0; (p_68 > 46); p_68++)
                    {
                        char l_213 = 0x2FL;
                        (***l_77) ^= (safe_lshift_func_uint8_t_u_u(((safe_sub_func_uint16_t_u_u(((g_121 = &g_122) != &g_122), ((*l_159) ^= (((p_70.f1 ^ (0L < 0x80L)) || (*g_195)) > (*l_188))))) || (((&g_84[0][1][4] != (g_194[8][3][1] = (void*)0)) | p_70.f0) == (*g_115))), l_191));
                        if (l_213)
                            break;
                        (*l_78) = (*g_75);
                    }
                    if (((*g_76) ^= (g_2 | p_68)))
                    {
                        (**g_75) = ((***l_77) > g_122.f0);
                    }
                    else
                    {
                        union U0 **l_216 = &l_214;
                        unsigned *l_221[9] = {(void*)0,&l_157[0],(void*)0,&l_157[0],(void*)0,&l_157[0],(void*)0,&l_157[0],(void*)0};
                        int **l_222 = (void*)0;
                        int i;
                        (**g_75) = ((0x7AFEDB2CL >= p_68) > ((*g_115) &= ((*l_188) = p_70.f3)));
                        (*l_216) = l_214;
                        (*g_76) |= (safe_mul_func_int16_t_s_s(((p_70.f1 | (!(safe_sub_func_uint32_t_u_u((g_215[7][4][2].f1 = g_131), p_70.f1)))) == 0xBD26FD5DL), g_45));
                        return l_222;
                    }
                }
                else
                {
                    short l_240 = (-1L);
                    union U0 *l_243 = &g_215[8][4][2];
                    int *l_252 = &l_183[3];
                    g_190 ^= (((*l_159) = (((*l_188) = ((-1L) != (((safe_mod_func_int8_t_s_s((safe_rshift_func_int8_t_s_s(0xE6L, (**l_78))), l_227[0])) && (safe_sub_func_uint16_t_u_u((((*l_77) = &g_99) != l_230[8]), (safe_mul_func_uint16_t_u_u(((*l_160) = (safe_lshift_func_uint16_t_u_s(l_235, ((safe_mul_func_uint8_t_u_u(((safe_sub_func_int16_t_s_s(((((*g_99) || (&g_122 != (void*)0)) >= p_70.f0) <= p_68), 0xFD32L)) > l_240), p_70.f3)) != p_70.f0)))), g_45))))) || g_35.f0))) > 0xD69E7574L)) && p_69);
                    for (g_114 = 2; (g_114 <= 15); g_114 = safe_add_func_uint8_t_u_u(g_114, 4))
                    {
                        union U0 **l_244 = &l_243;
                        union U0 **l_245 = (void*)0;
                        union U0 *l_247 = &g_215[7][4][2];
                        union U0 **l_246 = &l_247;
                        (*l_246) = ((*l_244) = l_243);
                        (**l_77) = l_188;
                    }
                    if ((safe_add_func_uint8_t_u_u(g_114, p_70.f1)))
                    {
                        int *l_250[7] = {&l_156[0],&l_183[3],&l_156[0],&l_156[0],&l_183[3],&l_156[0],&l_156[0]};
                        int i;
                        l_250[0] = (*g_75);
                    }
                    else
                    {
                        int l_255[7][10] = {{0x94175DB8L,1L,(-1L),1L,0x94175DB8L,1L,1L,0x94175DB8L,1L,(-1L)},{3L,3L,(-1L),0x94175DB8L,0x3E3A944DL,0x94175DB8L,(-1L),3L,3L,(-1L)},{1L,0x94175DB8L,1L,1L,0x94175DB8L,1L,(-1L),1L,0x94175DB8L,1L},{0x17102662L,3L,0x17102662L,1L,(-1L),(-1L),0x94175DB8L,1L,(-1L),1L},{1L,0x3E3A944DL,(-1L),0x17102662L,(-1L),0x3E3A944DL,1L,1L,0x3E3A944DL,(-1L)},{0x3E3A944DL,1L,1L,0x3E3A944DL,(-1L),0x17102662L,(-1L),0x3E3A944DL,1L,1L},{(-1L),1L,0x94175DB8L,1L,1L,0x94175DB8L,1L,(-1L),1L,0x94175DB8L}};
                        int i, j;
                        l_252 = l_251;
                        (*g_189) ^= (safe_add_func_uint32_t_u_u((p_68 != (g_66 < 0x24L)), 1L));
                        l_256 ^= (4294967294UL >= (l_255[1][4] = (**g_75)));
                    }
                }
            }
            else
            {
                union U0 ***l_261 = &l_260;
                unsigned char l_276[5];
                union U1 ***l_293 = (void*)0;
                union U1 ***l_294 = (void*)0;
                union U1 ***l_295 = &l_173[0];
                int i;
                for (i = 0; i < 5; i++)
                    l_276[i] = 0xE7L;
                (*g_189) = ((*g_76) = (g_107 < l_257));
                if ((l_258 != ((*l_261) = l_260)))
                {
                    int l_277 = 0L;
                    (*g_99) &= (safe_lshift_func_int16_t_s_s((p_70.f2 < (safe_sub_func_int16_t_s_s(((*g_115) = (safe_lshift_func_uint8_t_u_s(((5UL == ((safe_lshift_func_int8_t_s_s((((safe_lshift_func_uint8_t_u_s(0xDCL, ((((**l_78) = (safe_lshift_func_uint16_t_u_s((p_68 >= (&l_137[1][5] != (void*)0)), (***l_77)))) | (safe_mul_func_uint16_t_u_u(g_4, 9UL))) || 0xB770L))) ^ 0x66CFC290L) != g_4), l_276[2])) == g_84[0][1][4])) < l_277), l_276[1]))), l_277))), p_69));
                    (*l_204) = (*g_75);
                }
                else
                {
                    unsigned l_280 = 0x0D718863L;
                    int *l_281 = &l_86;
                    unsigned *l_288 = &l_157[0];
                    int l_289 = 1L;
                    l_289 &= (((*l_288) = (((((*l_160) &= l_280) > (((*g_75) = l_281) != (void*)0)) != ((*l_281) = ((safe_mul_func_uint8_t_u_u((+g_90[1][2][5]), g_84[0][1][4])) < p_70.f3))) == (safe_sub_func_int32_t_s_s((l_256 = ((&g_75 == &g_75) <= (safe_mul_func_int16_t_s_s(0x4BECL, p_70.f1)))), p_70.f1)))) || 0x1A3A432BL);
                    for (l_257 = 19; (l_257 < 19); l_257 = safe_add_func_int32_t_s_s(l_257, 7))
                    {
                        union U1 *l_292 = &g_122;
                        l_292 = &g_122;
                        (*l_281) = p_70.f2;
                        (**l_78) = (*g_76);
                    }
                    (**l_203) = (**l_77);
                }
                (***l_77) = (*g_99);
                (*l_295) = l_173[0];
            }
        }
        else
        {
            int *l_296 = &g_190;
            union U0 ***l_329 = &l_258;
            union U0 ****l_330 = &l_329;
            union U0 *****l_335[10] = {&l_333,&l_333,&l_333,&l_333,&l_333,&l_333,&l_333,&l_333,&l_333,&l_333};
            const char *l_345[4][3][8] = {{{&l_169[0][0][0],&l_169[3][3][5],&l_169[0][0][0],&g_84[0][1][4],&g_84[0][0][2],&g_84[0][1][4],&l_169[0][0][0],&l_169[3][3][5]},{&g_84[0][0][2],&g_84[0][1][4],&l_169[0][0][0],&l_169[3][3][5],&l_169[0][0][0],&g_84[0][1][4],&g_84[0][0][2],&g_84[0][1][4]},{&g_84[0][0][2],&l_169[3][3][5],&l_169[0][0][0],&l_169[3][3][5],&g_84[0][0][2],&g_107,&g_84[0][0][2],&l_169[3][3][5]}},{{&l_169[0][0][0],&l_169[3][3][5],&l_169[0][0][0],&g_84[0][1][4],&g_84[0][0][2],&g_84[0][1][4],&l_169[0][0][0],&l_169[3][3][5]},{&g_84[0][0][2],&g_84[0][1][4],&l_169[0][0][0],&l_169[3][3][5],&l_169[0][0][0],&g_84[0][1][4],&g_84[0][0][2],&g_84[0][1][4]},{&g_84[0][0][2],&l_169[3][3][5],&l_169[0][0][0],&l_169[3][3][5],&g_84[0][0][2],&g_107,&g_84[0][0][2],&l_169[3][3][5]}},{{&l_169[0][0][0],&l_169[3][3][5],&l_169[0][0][0],&g_84[0][1][4],&l_169[0][0][0],&g_107,&l_169[0][0][0],&g_84[0][1][4]},{&l_169[0][0][0],&g_107,&l_169[0][0][0],&g_84[0][1][4],&l_169[0][0][0],&g_107,&l_169[0][0][0],&g_107},{&l_169[0][0][0],&g_84[0][1][4],&g_84[0][0][2],&g_84[0][1][4],&l_169[0][0][0],&l_169[3][3][5],&l_169[0][0][0],&g_84[0][1][4]}},{{&l_169[0][0][0],&g_84[0][1][4],&l_169[0][0][0],&g_107,&l_169[0][0][0],&g_107,&l_169[0][0][0],&g_84[0][1][4]},{&l_169[0][0][0],&g_107,&l_169[0][0][0],&g_84[0][1][4],&l_169[0][0][0],&g_107,&l_169[0][0][0],&g_107},{&l_169[0][0][0],&g_84[0][1][4],&g_84[0][0][2],&g_84[0][1][4],&l_169[0][0][0],&l_169[3][3][5],&l_169[0][0][0],&g_84[0][1][4]}}};
            const char **l_344[7][6][6] = {{{&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7]},{&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7]},{&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7]},{&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7]},{&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7]},{&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7]}},{{&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7]},{&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7]},{&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7]},{&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7]},{&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7]},{&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7]}},{{&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7]},{&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7]},{&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7]},{&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7]},{&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7]},{&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7]}},{{&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7]},{&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7]},{&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7]},{&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7]},{&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7]},{&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7]}},{{&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7]},{&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7]},{&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7]},{&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7]},{&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7]},{&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7]}},{{&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7]},{&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7]},{&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7]},{&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7]},{&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7]},{&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7]}},{{&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7]},{&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7]},{&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7]},{&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7]},{&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7]},{&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7],&l_345[1][2][7]}}};
            int i, j, k;
            for (g_122.f3 = 0; (g_122.f3 <= 3); g_122.f3 += 1)
            {
                (*l_78) = l_296;
                for (p_69 = 0; (p_69 <= 2); p_69 += 1)
                {
                    short l_297[3][8] = {{0x21A4L,6L,6L,0x21A4L,1L,0x21A4L,6L,6L},{6L,1L,0x1AB3L,0x1AB3L,1L,6L,1L,0x1AB3L},{0x21A4L,1L,0x21A4L,6L,6L,0x21A4L,1L,0x21A4L}};
                    int *l_308 = (void*)0;
                    int i, j;
                }
                (*g_99) = (*g_189);
                return &g_189;
            }
            (*g_189) ^= 1L;
            (*g_99) ^= (l_256 = ((safe_sub_func_uint16_t_u_u((g_114 && (g_66 = (safe_unary_minus_func_int8_t_s((safe_lshift_func_int16_t_s_u((((**l_78) != (***l_77)) & (safe_lshift_func_uint16_t_u_s(0x77CEL, 10))), ((((safe_lshift_func_uint16_t_u_u((**l_78), 7)) & 0UL) & (safe_add_func_int8_t_s_s(((*l_296) | g_106), p_70.f3))) > g_114))))))), 0x2F02L)) ^ g_35.f0));
            if (((*g_189) = ((safe_mul_func_int8_t_s_s((safe_rshift_func_int8_t_s_s((l_328 == ((*l_330) = l_329)), ((((*l_160) |= ((safe_sub_func_uint8_t_u_u((*l_296), (((((l_336 = l_333) != (g_340[3] = (void*)0)) || (*g_115)) >= (((g_190 == (((&g_195 != (l_346 = l_344[3][1][1])) && 0x36609B1DL) < p_70.f3)) > 0xB0L) > p_70.f3)) == 0x593CL))) >= p_68)) || (*g_115)) > 0x1BB0L))), p_69)) && (-3L))))
            {
                (**l_203) = (*l_204);
            }
            else
            {
                int **l_349[4][6] = {{&g_189,&g_189,&g_189,&g_189,&g_189,&g_189},{&g_189,&g_189,&g_189,&g_189,&g_189,&g_189},{&g_189,&g_189,&g_189,&g_189,&g_189,&g_189},{&g_189,&g_189,&g_189,&g_189,&g_189,&g_189}};
                unsigned **l_353 = &g_351;
                union U1 ***l_372 = &g_370[0];
                int i, j;
                if (((**l_78) && l_348))
                {
                    unsigned ***l_352[9][9] = {{(void*)0,&g_350,&g_350,&g_350,&g_350,(void*)0,&g_350,&g_350,&g_350},{&g_350,&g_350,&g_350,&g_350,&g_350,&g_350,&g_350,&g_350,&g_350},{&g_350,&g_350,&g_350,(void*)0,(void*)0,&g_350,&g_350,&g_350,(void*)0},{&g_350,&g_350,&g_350,&g_350,(void*)0,&g_350,&g_350,&g_350,&g_350},{&g_350,&g_350,&g_350,&g_350,&g_350,&g_350,&g_350,&g_350,&g_350},{&g_350,&g_350,&g_350,&g_350,&g_350,&g_350,&g_350,&g_350,&g_350},{&g_350,&g_350,&g_350,&g_350,&g_350,&g_350,&g_350,&g_350,&g_350},{&g_350,&g_350,&g_350,&g_350,&g_350,&g_350,&g_350,&g_350,&g_350},{(void*)0,&g_350,&g_350,(void*)0,&g_350,(void*)0,&g_350,&g_350,(void*)0}};
                    int i, j;
                    for (l_303 = 6; (l_303 >= 0); l_303 -= 1)
                    {
                        (*l_204) = (*l_204);
                        return l_349[2][1];
                    }
                    l_353 = g_350;
                    for (g_109 = (-21); (g_109 <= (-11)); g_109++)
                    {
                        unsigned short l_359 = 0x3CDBL;
                        (*l_296) = (safe_sub_func_uint8_t_u_u((g_358 = (g_66 = (*l_296))), ((1UL && (((*l_160) = 65535UL) < g_190)) < (***l_77))));
                        if (l_359)
                            continue;
                        (*g_99) |= (-1L);
                        if ((*l_296))
                            break;
                    }
                }
                else
                {
                    union U1 ****l_368[3][2][5] = {{{&l_366,(void*)0,(void*)0,&l_366,&l_366},{(void*)0,&l_366,(void*)0,&l_366,(void*)0}},{{&l_366,&l_366,(void*)0,(void*)0,&l_366},{&l_366,&l_366,&l_366,&l_366,&l_366}},{{&l_366,(void*)0,(void*)0,&l_366,&l_366},{(void*)0,&l_366,(void*)0,&l_366,(void*)0}}};
                    int i, j, k;
                    for (p_70.f0 = 8; (p_70.f0 != 19); p_70.f0 = safe_add_func_uint32_t_u_u(p_70.f0, 4))
                    {
                        int **l_362 = &g_76;
                        return l_362;
                    }
                    (*g_189) ^= (safe_rshift_func_uint16_t_u_s(((((void*)0 != &l_334) || (safe_unary_minus_func_int32_t_s(((p_69 & (((g_371 = (g_369 = l_366)) != (g_373[0][1][0] = l_372)) < 3L)) != g_358)))) >= p_70.f0), (p_68 != (-1L))));
                }
            }
        }
    }
    (*l_78) = &l_86;
    return &g_76;
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
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_35.f0, "g_35.f0", print_hash_value);
    transparent_crc(g_45, "g_45", print_hash_value);
    transparent_crc(g_57, "g_57", print_hash_value);
    transparent_crc(g_66, "g_66", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 10; k++)
            {
                transparent_crc(g_84[i][j][k], "g_84[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 10; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_90[i][j][k], "g_90[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_106, "g_106", print_hash_value);
    transparent_crc(g_107, "g_107", print_hash_value);
    transparent_crc(g_109, "g_109", print_hash_value);
    transparent_crc(g_114, "g_114", print_hash_value);
    transparent_crc(g_116, "g_116", print_hash_value);
    transparent_crc(g_122.f3, "g_122.f3", print_hash_value);
    transparent_crc(g_131, "g_131", print_hash_value);
    transparent_crc(g_190, "g_190", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_215[i][j][k].f0, "g_215[i][j][k].f0", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_358, "g_358", print_hash_value);
    transparent_crc(g_416, "g_416", print_hash_value);
    transparent_crc(g_466.f0, "g_466.f0", print_hash_value);
    transparent_crc(g_466.f3, "g_466.f3", print_hash_value);
    transparent_crc(g_514, "g_514", print_hash_value);
    transparent_crc(g_541, "g_541", print_hash_value);
    transparent_crc(g_543, "g_543", print_hash_value);
    transparent_crc(g_603, "g_603", print_hash_value);
    transparent_crc(g_605, "g_605", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_607[i], "g_607[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_790, "g_790", print_hash_value);
    transparent_crc(g_954, "g_954", print_hash_value);
    transparent_crc(g_969, "g_969", print_hash_value);
    transparent_crc(g_1026, "g_1026", print_hash_value);
    transparent_crc(g_1174, "g_1174", print_hash_value);
    transparent_crc(g_1176, "g_1176", print_hash_value);
    transparent_crc(g_1312, "g_1312", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_1376[i][j], "g_1376[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_1382, "g_1382", print_hash_value);
    transparent_crc(g_1461.f0, "g_1461.f0", print_hash_value);
    transparent_crc(g_1461.f3, "g_1461.f3", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
