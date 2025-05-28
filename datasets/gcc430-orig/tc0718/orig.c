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
   signed f0 : 15;
   const short f1;
   unsigned f2;
   const unsigned long long f3;
   volatile unsigned f4;
   const short f5;
   volatile unsigned f6 : 2;
   unsigned long long f7;
   unsigned long long f8;
   volatile char f9;
};

union U1 {
   unsigned short f0;
};


static int g_2 = 0L;
static union U1 g_12 = {0UL};
static int *g_13 = &g_2;
static struct S0 g_56 = {-83,0x23FAL,4294967289UL,0UL,0UL,0xEB94L,1,18446744073709551614UL,0x4E5477A75E3AA9C1LL,-3L};
static struct S0 * const g_55 = &g_56;
static struct S0 *g_57 = (void*)0;
static int g_61 = (-10L);
static int * volatile g_60 = &g_61;
static int g_74[9] = {(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L)};
static struct S0 **g_84 = &g_57;
static struct S0 *** volatile g_83 = &g_84;
static int * volatile ** volatile g_121 = (void*)0;
static struct S0 g_128 = {143,0L,0x0D84A95BL,0xA926FAA81BD54BCFLL,0xB35CAECAL,0x6BF1L,0,18446744073709551615UL,0x946F2EC8A6940942LL,0x22L};
static int *g_179 = &g_61;
static int ** volatile g_178 = &g_179;
static int * volatile g_189 = (void*)0;
static int * volatile g_195 = &g_74[0];
static int * volatile g_244 = &g_74[8];
static int * volatile g_252 = &g_74[7];
static int **g_271 = (void*)0;
static int *** volatile g_270[6] = {&g_271,&g_271,&g_271,&g_271,&g_271,&g_271};
static int *** volatile g_277 = &g_271;
static int * volatile g_289 = &g_74[7];
static int * const volatile g_296 = &g_74[1];
static const struct S0 g_467 = {117,0xD0D2L,0x36068087L,18446744073709551609UL,0x8C7A3BD8L,0x8461L,0,0x9549125997C0ABCFLL,0xF56B2D733C961493LL,0xBAL};
static int *** volatile g_477 = &g_271;
static struct S0 g_490 = {33,0x42DFL,0xBE5443D2L,0x1D4735528518AC3DLL,18446744073709551615UL,9L,0,0x1E2821D64F1DF2DCLL,0x23DB8272E4031009LL,-9L};
static struct S0 g_519[4][1][2] = {{{{64,-7L,0xC8995E21L,0x572F9DA4165C183ELL,0xC8555D86L,0x5192L,0,0x4B5F37C1D4588692LL,18446744073709551615UL,0x3BL},{6,0xADADL,0x676F98F0L,0xB5B05CEEE61D6F7ELL,0x3440D838L,-10L,0,18446744073709551608UL,0UL,-1L}}},{{{64,-7L,0xC8995E21L,0x572F9DA4165C183ELL,0xC8555D86L,0x5192L,0,0x4B5F37C1D4588692LL,18446744073709551615UL,0x3BL},{6,0xADADL,0x676F98F0L,0xB5B05CEEE61D6F7ELL,0x3440D838L,-10L,0,18446744073709551608UL,0UL,-1L}}},{{{64,-7L,0xC8995E21L,0x572F9DA4165C183ELL,0xC8555D86L,0x5192L,0,0x4B5F37C1D4588692LL,18446744073709551615UL,0x3BL},{6,0xADADL,0x676F98F0L,0xB5B05CEEE61D6F7ELL,0x3440D838L,-10L,0,18446744073709551608UL,0UL,-1L}}},{{{64,-7L,0xC8995E21L,0x572F9DA4165C183ELL,0xC8555D86L,0x5192L,0,0x4B5F37C1D4588692LL,18446744073709551615UL,0x3BL},{6,0xADADL,0x676F98F0L,0xB5B05CEEE61D6F7ELL,0x3440D838L,-10L,0,18446744073709551608UL,0UL,-1L}}}};
static const union U1 *g_586 = &g_12;
static const union U1 **g_585 = &g_586;
static int ** const volatile g_602 = &g_179;
static int * volatile g_655 = &g_74[7];
static struct S0 g_725 = {67,-1L,0xB6A08A68L,0x76CA1F13FC1F1BEBLL,0x43AAA940L,0x3F11L,1,0x9AA5B46791A72BE2LL,8UL,0xB1L};
static volatile char g_746[10] = {1L,0x5AL,1L,0xF3L,0xF3L,1L,0x5AL,1L,0xF3L,0xF3L};
static int *** volatile g_769 = &g_271;
static struct S0 g_797 = {101,0L,1UL,0x8682BB9DA2A7721BLL,0x4BDBAD33L,5L,0,0xBD16360CDFBDB1F6LL,0x5167C439878CBCCFLL,-1L};
static unsigned g_910 = 0x8C212803L;
static volatile struct S0 g_911 = {170,0x37CCL,0xB9435D71L,0x4F8FA99F2C46A50DLL,5UL,0x8CB0L,1,0x2F0609AF2527958BLL,1UL,-1L};
static volatile struct S0 g_986 = {-107,1L,2UL,0UL,0x239872DCL,0xC599L,0,0x966756CC4D0FF6F7LL,0x86205C6ACC6DED0ELL,9L};
static unsigned char g_992 = 250UL;
static int ** const volatile g_1027 = (void*)0;
static struct S0 g_1041 = {104,0xC1F7L,0x03A343C1L,0x277C876E5123046ALL,1UL,0xDBF0L,1,0x213EFBE65C977DCELL,6UL,0xB5L};
static int ** const volatile g_1049 = &g_179;
static int ** volatile g_1069 = &g_179;
static int ** volatile g_1128 = &g_179;
static int ** volatile g_1146 = &g_179;
static int ** volatile g_1151[6] = {&g_179,&g_179,&g_179,&g_179,&g_179,&g_179};
static volatile unsigned g_1219 = 0UL;
static struct S0 g_1233 = {174,1L,0UL,0xF04C9ED8D1B97506LL,0UL,0x4C08L,1,0x027425407A35565FLL,0UL,0xF3L};
static volatile struct S0 g_1248[9][8] = {{{-65,0L,1UL,18446744073709551615UL,0UL,0x262CL,0,0x8F13BA174FC4A8CFLL,0x38EEE3B5BF030F58LL,0xA4L},{144,0xEBF0L,4UL,0x53127C721C6BCAC7LL,5UL,0x15FAL,1,0x0CDD7B0B427AE397LL,0xB8E130556C6DA87DLL,0x07L},{69,6L,0x78441BC5L,4UL,0x2E14080CL,1L,1,4UL,0UL,-9L},{-125,1L,0UL,0x49078543A9ABBBCCLL,18446744073709551608UL,3L,1,1UL,0x7AA4D3DF6A0E4770LL,0x2BL},{69,6L,0x78441BC5L,4UL,0x2E14080CL,1L,1,4UL,0UL,-9L},{144,0xEBF0L,4UL,0x53127C721C6BCAC7LL,5UL,0x15FAL,1,0x0CDD7B0B427AE397LL,0xB8E130556C6DA87DLL,0x07L},{-65,0L,1UL,18446744073709551615UL,0UL,0x262CL,0,0x8F13BA174FC4A8CFLL,0x38EEE3B5BF030F58LL,0xA4L},{-177,0x5759L,7UL,1UL,18446744073709551607UL,-4L,0,0x8884DE1E697A62B2LL,0x64D420D9D54A2645LL,-1L}},{{-125,1L,0UL,0x49078543A9ABBBCCLL,18446744073709551608UL,3L,1,1UL,0x7AA4D3DF6A0E4770LL,0x2BL},{42,0x01ADL,0x78AAA6AAL,6UL,0x7B80C907L,2L,0,18446744073709551615UL,0x5E9A6CBC1E368913LL,0xE5L},{69,6L,0x78441BC5L,4UL,0x2E14080CL,1L,1,4UL,0UL,-9L},{69,6L,0x78441BC5L,4UL,0x2E14080CL,1L,1,4UL,0UL,-9L},{42,0x01ADL,0x78AAA6AAL,6UL,0x7B80C907L,2L,0,18446744073709551615UL,0x5E9A6CBC1E368913LL,0xE5L},{-125,1L,0UL,0x49078543A9ABBBCCLL,18446744073709551608UL,3L,1,1UL,0x7AA4D3DF6A0E4770LL,0x2BL},{17,0x6EACL,4294967291UL,18446744073709551608UL,18446744073709551609UL,0L,1,9UL,0xD88D9E2B778887DALL,4L},{-125,1L,0UL,0x49078543A9ABBBCCLL,18446744073709551608UL,3L,1,1UL,0x7AA4D3DF6A0E4770LL,0x2BL}},{{42,0x01ADL,0x78AAA6AAL,6UL,0x7B80C907L,2L,0,18446744073709551615UL,0x5E9A6CBC1E368913LL,0xE5L},{-125,1L,0UL,0x49078543A9ABBBCCLL,18446744073709551608UL,3L,1,1UL,0x7AA4D3DF6A0E4770LL,0x2BL},{17,0x6EACL,4294967291UL,18446744073709551608UL,18446744073709551609UL,0L,1,9UL,0xD88D9E2B778887DALL,4L},{-125,1L,0UL,0x49078543A9ABBBCCLL,18446744073709551608UL,3L,1,1UL,0x7AA4D3DF6A0E4770LL,0x2BL},{42,0x01ADL,0x78AAA6AAL,6UL,0x7B80C907L,2L,0,18446744073709551615UL,0x5E9A6CBC1E368913LL,0xE5L},{69,6L,0x78441BC5L,4UL,0x2E14080CL,1L,1,4UL,0UL,-9L},{69,6L,0x78441BC5L,4UL,0x2E14080CL,1L,1,4UL,0UL,-9L},{42,0x01ADL,0x78AAA6AAL,6UL,0x7B80C907L,2L,0,18446744073709551615UL,0x5E9A6CBC1E368913LL,0xE5L}},{{-125,1L,0UL,0x49078543A9ABBBCCLL,18446744073709551608UL,3L,1,1UL,0x7AA4D3DF6A0E4770LL,0x2BL},{-177,0x5759L,7UL,1UL,18446744073709551607UL,-4L,0,0x8884DE1E697A62B2LL,0x64D420D9D54A2645LL,-1L},{-177,0x5759L,7UL,1UL,18446744073709551607UL,-4L,0,0x8884DE1E697A62B2LL,0x64D420D9D54A2645LL,-1L},{-125,1L,0UL,0x49078543A9ABBBCCLL,18446744073709551608UL,3L,1,1UL,0x7AA4D3DF6A0E4770LL,0x2BL},{144,0xEBF0L,4UL,0x53127C721C6BCAC7LL,5UL,0x15FAL,1,0x0CDD7B0B427AE397LL,0xB8E130556C6DA87DLL,0x07L},{42,0x01ADL,0x78AAA6AAL,6UL,0x7B80C907L,2L,0,18446744073709551615UL,0x5E9A6CBC1E368913LL,0xE5L},{144,0xEBF0L,4UL,0x53127C721C6BCAC7LL,5UL,0x15FAL,1,0x0CDD7B0B427AE397LL,0xB8E130556C6DA87DLL,0x07L},{-125,1L,0UL,0x49078543A9ABBBCCLL,18446744073709551608UL,3L,1,1UL,0x7AA4D3DF6A0E4770LL,0x2BL}},{{-177,0x5759L,7UL,1UL,18446744073709551607UL,-4L,0,0x8884DE1E697A62B2LL,0x64D420D9D54A2645LL,-1L},{144,0xEBF0L,4UL,0x53127C721C6BCAC7LL,5UL,0x15FAL,1,0x0CDD7B0B427AE397LL,0xB8E130556C6DA87DLL,0x07L},{-177,0x5759L,7UL,1UL,18446744073709551607UL,-4L,0,0x8884DE1E697A62B2LL,0x64D420D9D54A2645LL,-1L},{69,6L,0x78441BC5L,4UL,0x2E14080CL,1L,1,4UL,0UL,-9L},{17,0x6EACL,4294967291UL,18446744073709551608UL,18446744073709551609UL,0L,1,9UL,0xD88D9E2B778887DALL,4L},{17,0x6EACL,4294967291UL,18446744073709551608UL,18446744073709551609UL,0L,1,9UL,0xD88D9E2B778887DALL,4L},{69,6L,0x78441BC5L,4UL,0x2E14080CL,1L,1,4UL,0UL,-9L},{-177,0x5759L,7UL,1UL,18446744073709551607UL,-4L,0,0x8884DE1E697A62B2LL,0x64D420D9D54A2645LL,-1L}},{{144,0xEBF0L,4UL,0x53127C721C6BCAC7LL,5UL,0x15FAL,1,0x0CDD7B0B427AE397LL,0xB8E130556C6DA87DLL,0x07L},{144,0xEBF0L,4UL,0x53127C721C6BCAC7LL,5UL,0x15FAL,1,0x0CDD7B0B427AE397LL,0xB8E130556C6DA87DLL,0x07L},{17,0x6EACL,4294967291UL,18446744073709551608UL,18446744073709551609UL,0L,1,9UL,0xD88D9E2B778887DALL,4L},{42,0x01ADL,0x78AAA6AAL,6UL,0x7B80C907L,2L,0,18446744073709551615UL,0x5E9A6CBC1E368913LL,0xE5L},{-65,0L,1UL,18446744073709551615UL,0UL,0x262CL,0,0x8F13BA174FC4A8CFLL,0x38EEE3B5BF030F58LL,0xA4L},{42,0x01ADL,0x78AAA6AAL,6UL,0x7B80C907L,2L,0,18446744073709551615UL,0x5E9A6CBC1E368913LL,0xE5L},{17,0x6EACL,4294967291UL,18446744073709551608UL,18446744073709551609UL,0L,1,9UL,0xD88D9E2B778887DALL,4L},{144,0xEBF0L,4UL,0x53127C721C6BCAC7LL,5UL,0x15FAL,1,0x0CDD7B0B427AE397LL,0xB8E130556C6DA87DLL,0x07L}},{{144,0xEBF0L,4UL,0x53127C721C6BCAC7LL,5UL,0x15FAL,1,0x0CDD7B0B427AE397LL,0xB8E130556C6DA87DLL,0x07L},{-177,0x5759L,7UL,1UL,18446744073709551607UL,-4L,0,0x8884DE1E697A62B2LL,0x64D420D9D54A2645LL,-1L},{69,6L,0x78441BC5L,4UL,0x2E14080CL,1L,1,4UL,0UL,-9L},{17,0x6EACL,4294967291UL,18446744073709551608UL,18446744073709551609UL,0L,1,9UL,0xD88D9E2B778887DALL,4L},{17,0x6EACL,4294967291UL,18446744073709551608UL,18446744073709551609UL,0L,1,9UL,0xD88D9E2B778887DALL,4L},{69,6L,0x78441BC5L,4UL,0x2E14080CL,1L,1,4UL,0UL,-9L},{-177,0x5759L,7UL,1UL,18446744073709551607UL,-4L,0,0x8884DE1E697A62B2LL,0x64D420D9D54A2645LL,-1L},{144,0xEBF0L,4UL,0x53127C721C6BCAC7LL,5UL,0x15FAL,1,0x0CDD7B0B427AE397LL,0xB8E130556C6DA87DLL,0x07L}},{{-177,0x5759L,7UL,1UL,18446744073709551607UL,-4L,0,0x8884DE1E697A62B2LL,0x64D420D9D54A2645LL,-1L},{-125,1L,0UL,0x49078543A9ABBBCCLL,18446744073709551608UL,3L,1,1UL,0x7AA4D3DF6A0E4770LL,0x2BL},{144,0xEBF0L,4UL,0x53127C721C6BCAC7LL,5UL,0x15FAL,1,0x0CDD7B0B427AE397LL,0xB8E130556C6DA87DLL,0x07L},{42,0x01ADL,0x78AAA6AAL,6UL,0x7B80C907L,2L,0,18446744073709551615UL,0x5E9A6CBC1E368913LL,0xE5L},{144,0xEBF0L,4UL,0x53127C721C6BCAC7LL,5UL,0x15FAL,1,0x0CDD7B0B427AE397LL,0xB8E130556C6DA87DLL,0x07L},{-125,1L,0UL,0x49078543A9ABBBCCLL,18446744073709551608UL,3L,1,1UL,0x7AA4D3DF6A0E4770LL,0x2BL},{-177,0x5759L,7UL,1UL,18446744073709551607UL,-4L,0,0x8884DE1E697A62B2LL,0x64D420D9D54A2645LL,-1L},{-177,0x5759L,7UL,1UL,18446744073709551607UL,-4L,0,0x8884DE1E697A62B2LL,0x64D420D9D54A2645LL,-1L}},{{-125,1L,0UL,0x49078543A9ABBBCCLL,18446744073709551608UL,3L,1,1UL,0x7AA4D3DF6A0E4770LL,0x2BL},{42,0x01ADL,0x78AAA6AAL,6UL,0x7B80C907L,2L,0,18446744073709551615UL,0x5E9A6CBC1E368913LL,0xE5L},{69,6L,0x78441BC5L,4UL,0x2E14080CL,1L,1,4UL,0UL,-9L},{69,6L,0x78441BC5L,4UL,0x2E14080CL,1L,1,4UL,0UL,-9L},{42,0x01ADL,0x78AAA6AAL,6UL,0x7B80C907L,2L,0,18446744073709551615UL,0x5E9A6CBC1E368913LL,0xE5L},{-125,1L,0UL,0x49078543A9ABBBCCLL,18446744073709551608UL,3L,1,1UL,0x7AA4D3DF6A0E4770LL,0x2BL},{17,0x6EACL,4294967291UL,18446744073709551608UL,18446744073709551609UL,0L,1,9UL,0xD88D9E2B778887DALL,4L},{-125,1L,0UL,0x49078543A9ABBBCCLL,18446744073709551608UL,3L,1,1UL,0x7AA4D3DF6A0E4770LL,0x2BL}}};
static int * const volatile g_1287[3] = {&g_74[7],&g_74[7],&g_74[7]};
static int * volatile g_1288 = &g_74[7];
static volatile int g_1308 = 0x50F5B0F8L;
static int ** volatile g_1310 = (void*)0;
static int ** const volatile g_1321 = &g_13;
static int ** volatile g_1322 = &g_179;
static int *g_1371 = &g_2;
static union U1 g_1399[1] = {{0xB6C7L}};
static unsigned short g_1434 = 0x1AB9L;
static int ** volatile g_1436 = &g_1371;
static int ** volatile g_1441[3][4] = {{&g_1371,&g_1371,&g_1371,&g_1371},{&g_1371,&g_1371,&g_1371,&g_1371},{&g_1371,&g_1371,&g_1371,&g_1371}};
static int ** volatile g_1442 = (void*)0;
static int ** volatile g_1443 = (void*)0;
static unsigned g_1456 = 6UL;
static long long g_1477 = (-4L);
static const union U1 *** volatile g_1489 = (void*)0;
static int ** const volatile g_1508 = &g_1371;
static const int *g_1511[5][8][2] = {{{&g_2,(void*)0},{&g_74[6],&g_2},{&g_61,&g_74[0]},{&g_61,&g_2},{&g_74[6],(void*)0},{&g_2,&g_74[7]},{&g_61,&g_61},{&g_74[7],&g_74[7]}},{{&g_74[7],&g_74[7]},{&g_74[7],&g_2},{&g_74[7],&g_61},{&g_74[7],(void*)0},{&g_61,&g_74[7]},{&g_74[7],&g_74[7]},{&g_61,(void*)0},{&g_74[7],&g_61}},{{&g_74[7],&g_2},{&g_74[7],&g_74[7]},{&g_74[7],&g_74[7]},{&g_74[7],&g_74[7]},{&g_2,&g_74[7]},{&g_61,&g_74[7]},{(void*)0,&g_61},{&g_74[7],&g_74[7]}},{{&g_74[7],&g_61},{(void*)0,&g_74[7]},{&g_61,&g_74[7]},{&g_2,&g_74[7]},{&g_74[7],&g_74[7]},{&g_74[7],&g_74[7]},{&g_74[7],&g_2},{&g_74[7],&g_61}},{{&g_74[7],(void*)0},{&g_61,&g_74[7]},{&g_74[7],&g_74[7]},{&g_61,(void*)0},{&g_74[7],&g_61},{&g_74[7],&g_2},{&g_74[7],&g_74[7]},{&g_74[7],&g_74[7]}}};
static const int ** volatile g_1510[3][7] = {{&g_1511[3][3][1],&g_1511[3][3][1],&g_1511[3][3][1],&g_1511[3][3][1],&g_1511[3][3][1],&g_1511[3][3][1],&g_1511[3][3][1]},{&g_1511[3][3][1],&g_1511[3][3][1],&g_1511[3][3][1],&g_1511[3][3][1],&g_1511[3][3][1],&g_1511[3][3][1],&g_1511[3][3][1]},{&g_1511[3][3][1],&g_1511[3][3][1],&g_1511[3][3][1],&g_1511[3][3][1],&g_1511[3][3][1],&g_1511[3][3][1],&g_1511[3][3][1]}};
static int ** volatile g_1514 = &g_179;



static char func_1(void);
static int * func_5(const int p_6, union U1 p_7, int * p_8, int * p_9, int * const p_10);
static int * func_14(int p_15, unsigned p_16, int * p_17);
static int func_18(int * p_19, long long p_20);
static int * func_21(int * p_22, unsigned p_23, unsigned p_24);
static unsigned func_25(short p_26);
static short func_27(int * p_28, int * p_29, unsigned short p_30, int * p_31, int p_32);
static unsigned char func_37(int p_38);
static char func_42(int * p_43, unsigned long long p_44, int * p_45);
static int * func_46(int p_47, unsigned long long p_48, unsigned short p_49);
static char func_1(void)
{
    int *l_33 = &g_2;
    union U1 l_1330 = {0x9618L};
    unsigned char l_1348 = 0x1DL;
    union U1 *l_1397 = (void*)0;
    union U1 **l_1396[4] = {&l_1397,&l_1397,&l_1397,&l_1397};
    union U1 ***l_1395 = &l_1396[1];
    struct S0 ***l_1507 = &g_84;
    int i;
    for (g_2 = (-20); (g_2 > (-9)); g_2++)
    {
        const unsigned short l_11 = 2UL;
        int *l_34 = &g_2;
        long long l_41 = 0x392715EE56E31BB0LL;
        unsigned l_1323 = 18446744073709551614UL;
    }
    if ((safe_lshift_func_int8_t_s_s(((~(*l_33)) != g_1248[7][5].f4), 7)))
    {
        int l_1345[2];
        union U1 l_1353 = {0x9716L};
        int *l_1354 = &g_74[8];
        int l_1372[5][10][5] = {{{0L,(-9L),0x50521E3CL,0x88B30EA5L,0x1B4993D9L},{0xE07A5BA5L,0x5E8D320EL,0L,0L,0x5E8D320EL},{(-3L),(-5L),(-9L),(-1L),0x5EF062C5L},{(-4L),(-10L),(-2L),0x055BD55CL,0x1F112571L},{1L,(-3L),(-1L),7L,0xCDB7105CL},{(-4L),1L,6L,4L,(-9L)},{(-3L),0x055BD55CL,0x1B4993D9L,(-3L),0x5DB010A9L},{0xE07A5BA5L,1L,1L,(-1L),0xCDB7105CL},{(-1L),(-1L),0xC283F6EFL,2L,2L},{0x055BD55CL,0xFF094B8BL,0x6CBA796AL,(-4L),0x6DF62F4AL}},{{0x8DDEBB98L,0x5DB010A9L,(-5L),0x0AECF2B3L,0x5E8D320EL},{0L,0L,(-5L),4L,(-9L)},{(-4L),2L,0x6CBA796AL,(-1L),(-3L)},{6L,1L,0xC283F6EFL,0x41543A82L,(-4L)},{0x5DB010A9L,1L,1L,(-1L),0xC283F6EFL},{0x5130C711L,0L,0x1B4993D9L,0L,0x5130C711L},{0x1C2E1230L,0x5DB010A9L,6L,0xFD9E9800L,0L},{0x5DB010A9L,(-9L),(-1L),1L,0x41543A82L},{1L,(-4L),(-2L),0x5DB010A9L,0L},{0xFD9E9800L,1L,(-9L),0x1C2E1230L,0x5130C711L}},{{(-10L),0x1C2E1230L,5L,0xCDB7105CL,(-9L)},{(-7L),3L,0xDA454F40L,1L,1L},{0x1C2E1230L,0xFF094B8BL,0L,7L,0x5DB010A9L},{0x6DF62F4AL,0xC283F6EFL,0x0AECF2B3L,1L,0x8758BF3AL},{(-1L),4L,0x6CBA796AL,(-10L),4L},{(-9L),4L,6L,1L,(-4L)},{0x5E8D320EL,0xC283F6EFL,0x8758BF3AL,0x5130C711L,0xFD9E9800L},{(-3L),0xFF094B8BL,0x88B30EA5L,0x6DF62F4AL,0x1F112571L},{(-5L),3L,7L,0x8DDEBB98L,1L},{0x5DB010A9L,0x1C2E1230L,0x1C2E1230L,0x5DB010A9L,6L}},{{(-1L),(-1L),0x871AD3D5L,0x5E8D320EL,0x1F112571L},{0x5EF062C5L,0x5E8D320EL,(-9L),0x0AECF2B3L,(-4L)},{0x5130C711L,0x8758BF3AL,0xC283F6EFL,0x5E8D320EL,(-1L)},{(-7L),1L,0xE1711E7EL,0x5DB010A9L,4L},{5L,(-10L),0xE07A5BA5L,0x8DDEBB98L,0xD02A5269L},{1L,0x0AECF2B3L,0xC283F6EFL,0x6DF62F4AL,(-9L)},{(-1L),0L,(-2L),0x5130C711L,1L},{6L,(-3L),(-1L),1L,0xFF094B8BL},{0xCDB7105CL,5L,0x1C2E1230L,(-10L),0x50521E3CL},{1L,0x41543A82L,0x5130C711L,6L,0x5EF062C5L}},{{0x1B4993D9L,0xE07A5BA5L,0L,0x14F23942L,0x8758BF3AL},{0x1C2E1230L,0L,0xE1711E7EL,0x41543A82L,(-10L)},{6L,0x1C2E1230L,0x055BD55CL,1L,1L},{(-10L),0x8758BF3AL,(-10L),(-7L),(-5L)},{5L,(-7L),(-9L),0x41543A82L,1L},{0x8758BF3AL,(-5L),(-1L),0x1C2E1230L,(-1L)},{1L,(-1L),(-9L),1L,0xE07A5BA5L},{0L,(-8L),(-10L),0x5EF062C5L,(-8L)},{(-1L),0x7344B56CL,0x055BD55CL,5L,2L},{0L,(-1L),0xE1711E7EL,0x2FF21DB5L,(-9L)}}};
        int ** const *l_1435 = &g_271;
        short l_1476 = 0x751AL;
        unsigned l_1482 = 0x7D3934FCL;
        const union U1 **l_1490 = &g_586;
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_1345[i] = (-2L);
        if ((*l_33))
        {
            unsigned short l_1334 = 65526UL;
            int *l_1347 = (void*)0;
            struct S0 *l_1392[6][10][3] = {{{&g_725,&g_56,&g_1041},{&g_1041,&g_490,&g_1041},{&g_56,&g_1041,&g_797},{(void*)0,&g_490,(void*)0},{&g_797,&g_56,&g_519[1][0][1]},{&g_725,&g_1041,&g_1041},{&g_797,&g_519[1][0][0],&g_519[1][0][0]},{(void*)0,&g_519[1][0][1],(void*)0},{&g_56,&g_56,&g_519[1][0][0]},{&g_1041,(void*)0,&g_1041}},{{&g_725,&g_1041,&g_519[1][0][1]},{(void*)0,(void*)0,(void*)0},{&g_56,&g_56,&g_797},{&g_725,&g_519[1][0][1],&g_1041},{&g_56,&g_519[1][0][0],&g_1041},{(void*)0,&g_1041,(void*)0},{&g_725,&g_56,&g_1041},{&g_1041,&g_490,&g_1041},{&g_56,&g_1041,&g_797},{(void*)0,&g_490,(void*)0}},{{&g_797,&g_56,&g_519[1][0][1]},{&g_725,&g_1041,&g_1041},{&g_797,&g_519[1][0][0],&g_519[1][0][0]},{(void*)0,&g_519[1][0][1],(void*)0},{&g_56,&g_56,&g_519[1][0][0]},{&g_1041,(void*)0,&g_1041},{&g_725,&g_1041,&g_519[1][0][1]},{(void*)0,(void*)0,(void*)0},{&g_56,&g_56,&g_797},{&g_725,&g_519[1][0][1],&g_1041}},{{&g_56,&g_519[1][0][0],&g_1041},{(void*)0,&g_1041,(void*)0},{&g_725,&g_56,&g_1041},{&g_1041,&g_490,&g_1041},{&g_56,&g_1041,&g_797},{(void*)0,&g_490,(void*)0},{&g_797,&g_56,&g_519[1][0][1]},{&g_725,&g_1041,&g_1041},{&g_797,&g_519[1][0][0],&g_519[1][0][0]},{(void*)0,&g_519[1][0][1],(void*)0}},{{&g_56,&g_56,&g_519[1][0][0]},{&g_1041,(void*)0,&g_1041},{&g_725,&g_1041,&g_519[1][0][1]},{(void*)0,(void*)0,(void*)0},{&g_56,&g_56,&g_797},{&g_725,&g_519[1][0][1],&g_1041},{&g_56,&g_519[1][0][0],&g_1041},{(void*)0,&g_1041,(void*)0},{&g_725,&g_56,&g_1041},{&g_1041,&g_490,&g_1041}},{{&g_56,&g_1041,&g_797},{(void*)0,&g_490,(void*)0},{&g_797,&g_56,&g_519[1][0][1]},{&g_725,&g_1041,&g_1041},{&g_797,&g_519[1][0][0],&g_519[1][0][0]},{(void*)0,&g_519[1][0][1],(void*)0},{&g_56,&g_56,&g_519[1][0][0]},{&g_1041,(void*)0,&g_1041},{&g_725,&g_1041,&g_519[1][0][1]},{(void*)0,(void*)0,(void*)0}}};
            unsigned char l_1394 = 0x41L;
            unsigned short l_1423 = 0UL;
            int i, j, k;
            if ((**g_1069))
            {
                unsigned l_1341 = 0xB952DCA6L;
                int l_1359 = 0xE5B78395L;
                if ((*l_33))
                {
                    (*g_13) = 1L;
                    (*g_13) = (*g_289);
                }
                else
                {
                    unsigned l_1346[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_1346[i] = 18446744073709551615UL;
                    if ((safe_unary_minus_func_uint8_t_u(((&g_1027 == (void*)0) || g_519[1][0][1].f0))))
                    {
                        unsigned char l_1342[10] = {0x40L,0x40L,0x40L,0x40L,0x40L,0x40L,0x40L,0x40L,0x40L,0x40L};
                        int i;
                        (*g_1322) = (void*)0;

                        ;
                        (*g_13) = ((((safe_mod_func_int64_t_s_s(l_1334, 1UL)) , (*g_586)) , (((safe_lshift_func_uint8_t_u_u(((safe_sub_func_uint16_t_u_u((((safe_sub_func_uint16_t_u_u(((**g_585) , g_128.f7), ((l_1341 && g_1248[7][5].f8) ^ (l_1342[2] | ((safe_add_func_uint32_t_u_u((func_18(&g_2, g_467.f3) > l_1342[2]), l_1334)) == 6L))))) & l_1342[2]) && g_56.f6), g_725.f2)) < (-2L)), g_128.f2)) , l_1345[1]) < g_519[1][0][1].f3)) , (*l_33));
                    }
                    else
                    {
                        return g_56.f9;
                    }

                    ;
                    (*g_13) = ((((((+l_1345[1]) , l_1348) != (*g_195)) <= 4294967291UL) & (*l_33)) < l_1341);
                    (*l_33) = ((*g_586) , ((safe_sub_func_uint64_t_u_u((!l_1341), (g_986.f3 > ((func_18(&g_74[0], ((safe_mul_func_int16_t_s_s((func_18((l_1353 , l_1354), g_1041.f0) >= g_519[1][0][1].f3), g_1041.f3)) >= l_1346[2])) & g_1041.f3) >= 0xE9L)))) , (*l_33)));
                }

                ;
                l_1354 = (*g_1321);

                ;
                (*l_33) = (0x6B92BBC9L | (*l_1354));
                l_1359 = (safe_lshift_func_int8_t_s_u(g_797.f8, (safe_add_func_int8_t_s_s((*l_33), ((4294967286UL <= ((g_911.f2 , (!0xB07BF963L)) || (*l_1354))) > (0x325DF2B422C0836CLL < ((*l_1354) || g_128.f2)))))));
            }
            else
            {
                unsigned short l_1362 = 0x81BBL;
                union U1 ***l_1398 = (void*)0;
                int *l_1400 = &g_2;
                const unsigned l_1424 = 1UL;
                if ((safe_mul_func_uint16_t_u_u((l_33 == (*g_1146)), l_1362)))
                {
                    int l_1375 = 9L;
                    struct S0 *** const l_1380 = (void*)0;
                    if ((safe_lshift_func_int16_t_s_u((l_1362 | (safe_mul_func_uint16_t_u_u(func_37((safe_lshift_func_uint8_t_u_u(((*g_585) == (((func_18(func_14((*l_1354), (safe_mul_func_int16_t_s_s((*l_33), g_1233.f3)), g_1371), (&g_179 != &g_179)) <= g_1233.f8) | 5L) , (*g_585))), l_1372[3][8][0]))), g_725.f7))), g_992)))
                    {
                        char l_1391 = (-2L);
                        union U1 l_1393 = {0x36EFL};
                        (*g_1371) = (((safe_mul_func_uint16_t_u_u(l_1375, (((safe_lshift_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u(((**g_84) , ((func_18(l_33, (((void*)0 != l_1380) , (safe_mod_func_uint64_t_u_u((safe_mod_func_int64_t_s_s((safe_add_func_int16_t_s_s(g_1233.f3, ((safe_lshift_func_int8_t_s_s(((*l_33) < ((g_56.f9 >= (safe_add_func_uint32_t_u_u((+((g_1233.f5 < 4294967288UL) , g_519[1][0][1].f3)), g_128.f2))) == l_1391)), 2)) && 0x0C5E2CE91B4305AELL))), g_725.f1)), 0x413BDA2EA7DF3EB2LL)))) , l_1391) | 0xF9C3L)), 0x11518F3FL)), g_56.f1)) , g_986.f4) , (*l_33)))) || 3UL) < g_490.f3);
                        (*g_84) = l_1392[5][6][2];

                        ;
                        (*g_1371) = (l_1393 , l_1394);
                    }
                    else
                    {
                        int * const l_1401 = &g_2;
                        int *l_1402 = &l_1372[0][0][2];
                        (*l_33) = (*g_1288);
                        (*l_1400) = ((func_42(func_21(((g_128.f1 , g_1233.f6) , func_5(((*g_57) , (l_1395 != ((*g_57) , l_1398))), g_1399[0], &g_74[7], l_1400, l_1401)), g_12.f0, g_490.f2), g_490.f1, l_1402) >= 0UL) ^ 0x1A668662D40CF71FLL);

                        ;
                        ;
                        ;
                        ;
                    }

                    ;
                    ;
                    ;
                    ;
                    ;
                    ;
                }
                else
                {
                    int *l_1409[3][1][7] = {{{&g_2,&g_61,&g_61,&g_2,&g_2,(void*)0,&g_2}},{{&g_2,&g_61,&g_61,&g_2,&g_2,(void*)0,&g_2}},{{&g_2,&g_61,&g_61,&g_2,&g_2,(void*)0,&g_2}}};
                    int i, j, k;
                    for (g_56.f2 = 0; (g_56.f2 <= 4); g_56.f2 += 1)
                    {
                        l_33 = (*g_1146);

                        ;
                        (*g_1371) = (**g_1128);
                    }

                    ;
                    for (g_1233.f2 = 0; (g_1233.f2 >= 52); ++g_1233.f2)
                    {
                        (*g_13) = (**g_1128);
                    }
                    for (g_1041.f8 = 0; (g_1041.f8 >= 47); g_1041.f8 = safe_add_func_uint16_t_u_u(g_1041.f8, 1))
                    {
                        int *l_1422[1];
                        int i;
                        for (i = 0; i < 1; i++)
                            l_1422[i] = &g_74[2];
                        l_1354 = func_14(((*l_33) >= (safe_mul_func_uint8_t_u_u((((((func_18(l_1409[0][0][3], (*l_33)) != ((((safe_add_func_uint32_t_u_u(((safe_rshift_func_uint16_t_u_u((g_467.f6 >= (safe_mod_func_uint32_t_u_u((g_1233.f8 < ((((g_467.f2 || (safe_rshift_func_int8_t_s_s(0x8CL, ((safe_mul_func_uint16_t_u_u(((safe_mul_func_int8_t_s_s((func_18(l_1422[0], g_56.f8) ^ l_1423), g_467.f1)) ^ g_490.f5), g_56.f1)) && 0UL)))) , (-6L)) ^ (*l_33)) ^ g_56.f8)), (*g_13)))), g_1041.f7)) || g_797.f2), g_1233.f8)) ^ g_725.f3) <= (*l_1354)) | g_519[1][0][1].f3)) && g_519[1][0][1].f6) == 0UL) > (*l_1354)) | (*l_33)), l_1424))), g_1041.f2, l_1400);

                        ;
                        (*g_13) = (&g_84 == (void*)0);
                        (*g_1371) = (((safe_unary_minus_func_uint8_t_u(((void*)0 != &g_84))) > (g_1233.f8 || ((safe_rshift_func_int8_t_s_s((safe_mul_func_int8_t_s_s((*l_1354), g_1041.f9)), (safe_sub_func_uint32_t_u_u(0x06742F0BL, (safe_lshift_func_uint8_t_u_s(func_18(&g_2, (*l_1400)), 1)))))) , 255UL))) == g_1434);
                        (*l_1354) = ((void*)0 != l_1435);
                    }

                    ;
                }

                ;
                ;
                ;
                ;
                ;
                ;
                ;
                ;
                return g_490.f5;


            }

            ;
            ;
            (*g_1436) = (*g_1128);

            ;
            (*g_13) = (*g_13);
            (*l_1354) = (g_1233.f7 <= (l_1435 == &g_271));
        }
        else
        {
            int *l_1439 = &g_61;
            if ((safe_rshift_func_int8_t_s_u((*l_1439), func_18(func_14(g_797.f0, (g_56.f3 >= g_1434), l_33), (*l_33)))))
            {
                int *l_1440 = (void*)0;
                int **l_1444 = &l_33;
                struct S0 ***l_1453[8][2][10] = {{{&g_84,&g_84,&g_84,&g_84,&g_84,&g_84,&g_84,&g_84,&g_84,&g_84},{&g_84,&g_84,(void*)0,&g_84,&g_84,(void*)0,&g_84,&g_84,&g_84,&g_84}},{{&g_84,&g_84,&g_84,&g_84,&g_84,&g_84,&g_84,&g_84,&g_84,&g_84},{&g_84,&g_84,&g_84,&g_84,&g_84,&g_84,&g_84,&g_84,&g_84,&g_84}},{{&g_84,&g_84,&g_84,&g_84,&g_84,&g_84,&g_84,&g_84,&g_84,&g_84},{&g_84,&g_84,&g_84,&g_84,&g_84,&g_84,&g_84,&g_84,&g_84,&g_84}},{{&g_84,&g_84,&g_84,&g_84,&g_84,&g_84,&g_84,&g_84,&g_84,&g_84},{&g_84,&g_84,&g_84,&g_84,&g_84,&g_84,&g_84,&g_84,&g_84,&g_84}},{{&g_84,&g_84,&g_84,&g_84,&g_84,&g_84,&g_84,&g_84,&g_84,&g_84},{&g_84,&g_84,&g_84,&g_84,&g_84,&g_84,&g_84,&g_84,&g_84,&g_84}},{{&g_84,&g_84,&g_84,&g_84,&g_84,&g_84,&g_84,&g_84,&g_84,&g_84},{&g_84,&g_84,&g_84,&g_84,&g_84,&g_84,(void*)0,&g_84,(void*)0,&g_84}},{{&g_84,(void*)0,&g_84,(void*)0,&g_84,&g_84,&g_84,&g_84,(void*)0,(void*)0},{&g_84,(void*)0,&g_84,&g_84,&g_84,&g_84,(void*)0,&g_84,&g_84,&g_84}},{{&g_84,&g_84,&g_84,&g_84,(void*)0,&g_84,(void*)0,&g_84,(void*)0,&g_84},{&g_84,(void*)0,&g_84,(void*)0,&g_84,&g_84,&g_84,&g_84,(void*)0,(void*)0}}};
                int i, j, k;
                (*l_1444) = l_1440;

                ;
                for (g_56.f7 = 0; (g_56.f7 >= 25); ++g_56.f7)
                {
                    int **l_1451 = &l_33;
                    union U1 l_1452 = {65535UL};
                    struct S0 **l_1457 = &g_57;
                    (*l_1451) = l_33;
                    if ((*g_296))
                        continue;
                    if (((((*l_1354) || 0UL) || (((*l_1354) , g_986.f6) >= ((&g_84 != l_1453[0][0][7]) > ((safe_mod_func_int32_t_s_s(g_1456, g_490.f8)) <= ((((func_18((*l_1444), g_490.f5) > 0x6EL) || g_1399[0].f0) , l_1457) == &g_57))))) | (*g_1371)))
                    {
                        unsigned short l_1472 = 0UL;
                        int *l_1473 = (void*)0;
                        (*l_1354) = (safe_add_func_uint8_t_u_u(255UL, ((safe_lshift_func_uint16_t_u_s((((~(safe_rshift_func_int16_t_s_u((safe_rshift_func_uint16_t_u_s(((*l_1439) > (safe_sub_func_uint64_t_u_u(func_18((*g_1321), (safe_sub_func_int16_t_s_s((safe_add_func_uint32_t_u_u(func_18(&g_61, g_128.f7), l_1472)), func_18(l_1473, (safe_mul_func_int16_t_s_s(1L, g_1233.f8)))))), g_1233.f1))), g_1434)), 0))) ^ g_2) , g_911.f0), g_725.f8)) , g_128.f2)));
                        (*g_1069) = (*g_1321);

                        ;
                        (*l_1354) = l_1476;
                        if (l_1472)
                            break;
                    }
                    else
                    {
                        return g_1477;
                    }

                    ;
                }

                ;
                (*g_13) = ((safe_sub_func_uint32_t_u_u((((*g_1322) == l_1439) > ((safe_rshift_func_uint16_t_u_u(g_490.f7, (l_1482 == g_1041.f0))) > ((*l_1439) == 0UL))), (func_18(&g_61, g_725.f1) , (*l_1439)))) , (*l_1439));
            }
            else
            {
                const short l_1483[8][8] = {{0xC27CL,0xC27CL,(-1L),0xC27CL,0xC27CL,(-1L),0xC27CL,0xC27CL},{0x3619L,0xC27CL,0x3619L,0x3619L,0xC27CL,0x3619L,0x3619L,0xC27CL},{0xC27CL,0x3619L,0x3619L,0xC27CL,0x3619L,0x3619L,0xC27CL,0x3619L},{0xC27CL,0xC27CL,(-1L),0xC27CL,0xC27CL,(-1L),0xC27CL,0xC27CL},{0x3619L,0xC27CL,0x3619L,0x3619L,0xC27CL,0x3619L,0x3619L,0xC27CL},{0xC27CL,0x3619L,0x3619L,0xC27CL,0x3619L,0x3619L,0xC27CL,0x3619L},{0xC27CL,0xC27CL,(-1L),0xC27CL,0xC27CL,(-1L),0xC27CL,0xC27CL},{0x3619L,0xC27CL,0x3619L,0x3619L,0xC27CL,0x3619L,0x3619L,0xC27CL}};
                union U1 **l_1488 = &l_1397;
                const int *l_1509 = &g_74[5];
                int i, j;
                if (l_1483[6][4])
                {
                    int **l_1487 = &l_1439;
                    for (g_490.f7 = 0; (g_490.f7 == 38); g_490.f7++)
                    {
                        char l_1486 = 0x51L;
                        (*l_33) = (g_56.f9 && (*l_33));
                        l_33 = l_1439;

                        ;
                        if (l_1486)
                            continue;
                        return l_1483[0][5];
                    }

                    ;
                    (*l_1487) = &l_1372[2][7][3];

                    ;
                    if ((*g_655))
                    {
                        (*l_1439) = (l_1488 != (void*)0);
                        l_1490 = &g_586;
                    }
                    else
                    {
                        int l_1493 = 1L;
                        (*l_1487) = l_33;

                        ;
                        (*g_179) = (g_490.f9 , (safe_mul_func_uint16_t_u_u(((*l_1354) & g_986.f3), g_56.f7)));
                        (**g_1069) = l_1493;
                        (*l_1487) = func_46(g_12.f0, ((~(*l_33)) > (!((void*)0 != l_1487))), g_1041.f8);

                        ;
                        ;
                    }

                    ;
                    ;
                }
                else
                {
                    int *l_1506 = (void*)0;
                    if ((safe_add_func_int64_t_s_s(g_519[1][0][1].f9, (*l_33))))
                    {
                        const int **l_1512 = (void*)0;
                        const int **l_1513 = &g_1511[1][3][0];
                        (*g_1508) = func_21((*g_1321), (*l_33), g_74[7]);

                        ;
                        ;
                        (*l_1513) = l_1509;
                        (*l_33) = (*g_179);
                    }
                    else
                    {
                        (*g_1514) = l_1506;

                        ;
                    }

                    ;
                    ;
                    ;
                    (*g_13) = ((safe_add_func_uint64_t_u_u(0UL, (((*g_84) != (void*)0) != (*l_1439)))) , ((safe_lshift_func_uint8_t_u_s((safe_add_func_uint32_t_u_u(((safe_sub_func_int8_t_s_s((((safe_mul_func_int8_t_s_s(g_56.f6, (g_56.f0 <= ((g_725.f8 >= g_725.f1) ^ (safe_sub_func_uint32_t_u_u((safe_add_func_int16_t_s_s((*l_1354), 0UL)), (*l_1439))))))) & g_12.f0) & 1UL), 0xCCL)) & (*l_1439)), 0xFDF08F8FL)), 0)) & 0x00EDL));
                }

                ;
                ;
                ;
                ;
                ;
            }

            ;
            ;
            ;
            ;
            ;
        }

        ;
        ;
        ;
        ;
        ;
        ;
    }
    else
    {
        (*g_84) = (**l_1507);
    }

    ;
    ;
    ;
    ;
    ;
    return l_1348;
}







static int * func_5(const int p_6, union U1 p_7, int * p_8, int * p_9, int * const p_10)
{
    int *l_1298 = &g_74[3];
    struct S0 *** const l_1299 = &g_84;
    for (g_128.f2 = (-2); (g_128.f2 <= 8); g_128.f2 = safe_add_func_int16_t_s_s(g_128.f2, 7))
    {
        long long l_1292 = 0xB2CF809562CEA011LL;
        if (l_1292)
            break;
    }
    for (g_490.f8 = 0; (g_490.f8 <= 5); g_490.f8 += 1)
    {
        int **l_1293 = &g_13;
        int i;
        (*l_1293) = (void*)0;

        ;
        (*l_1293) = l_1298;

        ;
        if ((*p_8))
            continue;
        (*g_13) = (*p_10);
    }

    ;
    if ((((void*)0 != l_1299) & (safe_mul_func_uint16_t_u_u((((*l_1298) && (p_9 == l_1298)) , (0x1ECD09CB3F72321BLL | (g_128.f6 , (((g_1041.f3 <= ((((((safe_mod_func_int16_t_s_s((p_7.f0 < p_7.f0), 0xA3C7L)) > g_911.f6) == g_519[1][0][1].f2) & 0x5FL) && g_1248[7][5].f1) != 0UL)) < 0x120BL) , (*l_1298))))), g_519[1][0][1].f2))))
    {
        int *l_1306 = &g_2;
        union U1 *l_1307[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
        int i;
        for (g_1233.f7 = 12; (g_1233.f7 <= 34); g_1233.f7 = safe_add_func_uint16_t_u_u(g_1233.f7, 6))
        {
            return l_1306;


        }
        for (g_128.f7 = 1; (g_128.f7 <= 9); g_128.f7 += 1)
        {
            short l_1317 = 0x011CL;
            int *l_1318[8][3] = {{&g_61,&g_61,&g_74[7]},{&g_74[7],&g_61,&g_61},{&g_61,&g_61,&g_61},{&g_61,&g_74[7],&g_61},{&g_74[7],&g_74[5],&g_74[7]},{&g_74[7],&g_74[7],&g_61},{&g_61,&g_74[3],&g_61},{&g_61,&g_74[7],&g_74[7]}};
            int i, j;
            (*g_585) = l_1307[0];
            if (g_1308)
            {
                int **l_1309 = &g_179;
                int **l_1311 = &l_1298;
                struct S0 **l_1312 = &g_57;
                (*l_1309) = p_9;

                ;
                (*l_1311) = p_10;

                ;
                (*l_1299) = l_1312;
                (*p_9) = (p_6 , (safe_lshift_func_uint16_t_u_s((func_18(p_8, ((g_467.f0 == (((safe_rshift_func_int8_t_s_s(((p_7.f0 >= ((**l_1309) == l_1317)) , 0xD3L), 5)) && 0UL) , p_7.f0)) ^ 1UL)) || p_7.f0), 12)));
            }
            else
            {
                l_1298 = l_1318[5][2];

                ;
                return l_1306;


            }

            ;
            ;
            return p_9;


        }
        (*p_9) = (((g_725.f1 , p_7.f0) >= (*l_1298)) != (0x604DAD7DEB2C2D49LL & ((*g_84) != (**g_83))));
        (*l_1298) = (((((*l_1306) != 0L) || (safe_lshift_func_int16_t_s_u(p_6, (g_74[1] <= (((((((p_6 , ((0x3186CA31L != (1UL <= (0xA91FL == (g_1233.f3 || p_7.f0)))) & g_12.f0)) < p_7.f0) < 0x16D7C9A96A3B5D42LL) < g_1233.f8) , (void*)0) == (void*)0) ^ g_61))))) >= g_490.f3) || g_911.f0);
    }
    else
    {
        (*g_1321) = p_10;

        ;
    }
    return p_8;


}







static int * func_14(int p_15, unsigned p_16, int * p_17)
{
    int *l_1289 = &g_61;
    for (p_15 = (-8); (p_15 >= (-19)); --p_15)
    {
        (*g_1288) = (*p_17);
    }
    return l_1289;


}







static int func_18(int * p_19, long long p_20)
{
    unsigned char l_1284 = 254UL;
    return l_1284;
}







static int * func_21(int * p_22, unsigned p_23, unsigned p_24)
{
    unsigned char l_1153 = 254UL;
    const union U1 *l_1164 = &g_12;
    int l_1211[7][7][1] = {{{0xBDA2ECD9L},{0x78DA2E37L},{0x5E69C64EL},{0xC0CB7B66L},{2L},{0xE1F362E2L},{2L}},{{0xC0CB7B66L},{0x5E69C64EL},{0x78DA2E37L},{0xBDA2ECD9L},{0x78DA2E37L},{0x5E69C64EL},{0xC0CB7B66L}},{{2L},{0xE1F362E2L},{2L},{0xC0CB7B66L},{0x5E69C64EL},{0x78DA2E37L},{0xBDA2ECD9L}},{{0x78DA2E37L},{0x5E69C64EL},{0xC0CB7B66L},{2L},{0xE1F362E2L},{2L},{0xC0CB7B66L}},{{0x5E69C64EL},{0x78DA2E37L},{0xBDA2ECD9L},{0x78DA2E37L},{0x5E69C64EL},{0xC0CB7B66L},{2L}},{{0xE1F362E2L},{2L},{0xC0CB7B66L},{0x5E69C64EL},{0x78DA2E37L},{0xBDA2ECD9L},{0x78DA2E37L}},{{0x5E69C64EL},{0xC0CB7B66L},{2L},{0xE1F362E2L},{2L},{0xC0CB7B66L},{0x5E69C64EL}}};
    const struct S0 **l_1228[1];
    int *l_1229 = (void*)0;
    unsigned char l_1263 = 0x87L;
    union U1 *l_1281 = &g_12;
    union U1 **l_1280[2][6];
    union U1 ***l_1279 = &l_1280[0][0];
    unsigned char l_1282 = 0xE1L;
    int *l_1283 = &g_61;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_1228[i] = (void*)0;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 6; j++)
            l_1280[i][j] = &l_1281;
    }
    for (g_56.f2 = 28; (g_56.f2 == 36); g_56.f2 = safe_add_func_int64_t_s_s(g_56.f2, 1))
    {
        unsigned char l_1149 = 0x2FL;
        int *l_1150 = &g_2;
        int **l_1152[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int *l_1186 = (void*)0;
        unsigned long long l_1187[2][5] = {{0x9C9DEA68F9DE84C3LL,5UL,5UL,0x9C9DEA68F9DE84C3LL,5UL},{0x9C9DEA68F9DE84C3LL,0x9C9DEA68F9DE84C3LL,0x53F53A3F2B3FD339LL,0x9C9DEA68F9DE84C3LL,0x9C9DEA68F9DE84C3LL}};
        union U1 *l_1201 = (void*)0;
        unsigned short l_1224 = 0x03A1L;
        int l_1230[4][1][1];
        unsigned l_1240 = 18446744073709551615UL;
        int i, j, k;
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 1; j++)
            {
                for (k = 0; k < 1; k++)
                    l_1230[i][j][k] = 0x937BCA81L;
            }
        }
        if (l_1149)
            break;
        p_22 = l_1150;

        ;
        l_1153 = (*p_22);
        if ((l_1153 >= (safe_sub_func_int64_t_s_s((((l_1153 >= ((*p_22) | (((0x1FL >= ((safe_sub_func_int16_t_s_s(g_490.f9, (safe_unary_minus_func_int8_t_s(g_56.f5)))) >= l_1153)) >= g_797.f8) < (*p_22)))) >= g_490.f8) < 0xE893L), p_23))))
        {
            for (g_490.f2 = 0; (g_490.f2 >= 10); ++g_490.f2)
            {
                int *l_1161 = &g_2;
                p_22 = p_22;
                if ((*p_22))
                    continue;
                return l_1161;


            }
        }
        else
        {
            unsigned long long l_1171 = 18446744073709551614UL;
            unsigned l_1205 = 1UL;
            union U1 **l_1221 = (void*)0;
            unsigned char l_1266[8] = {0xBBL,0xBBL,0xBBL,0xBBL,0xBBL,0xBBL,0xBBL,0xBBL};
            int i;
            if ((((*p_22) , &g_178) != (l_1153 , &g_1069)))
            {
                struct S0 *l_1165 = &g_128;
                int l_1170 = 0L;
                for (g_725.f2 = (-28); (g_725.f2 == 58); g_725.f2 = safe_add_func_int16_t_s_s(g_725.f2, 9))
                {
                    (*g_585) = (p_23 , l_1164);

                    ;
                    for (g_725.f8 = 0; (g_725.f8 <= 9); g_725.f8 += 1)
                    {
                        int i;
                        (*g_289) = (*p_22);
                        (*g_84) = (p_23 , l_1165);

                        ;
                        l_1171 = (safe_add_func_uint64_t_u_u(p_23, (g_56.f1 <= (l_1170 <= ((~g_74[7]) > ((-9L) & p_24))))));
                    }
                    (*g_244) = (safe_lshift_func_int16_t_s_s(((*l_1150) <= (&g_585 != (void*)0)), (safe_add_func_int16_t_s_s(p_23, (safe_mul_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u(l_1153, (safe_rshift_func_uint8_t_u_s((g_56.f0 >= (safe_add_func_int32_t_s_s((safe_mul_func_int8_t_s_s((0UL == g_467.f0), ((p_24 == (*l_1150)) || 0x56L))), g_128.f8))), 2)))), g_986.f5))))));
                }
            }
            else
            {
                int *l_1188 = (void*)0;
                int l_1202 = 0x1AA0321AL;
                union U1 **l_1220 = &l_1201;
                struct S0 **l_1256 = (void*)0;
                if ((*l_1150))
                {
                    for (g_128.f2 = 0; (g_128.f2 <= 9); g_128.f2 += 1)
                    {
                        int i;
                        l_1186 = p_22;

                        ;
                        l_1187[1][2] = (0xC6AC4E716927AC61LL < (p_24 | l_1171));
                    }

                    ;
                    l_1188 = p_22;

                    ;
                    return l_1188;


                }
                else
                {
                    long long l_1210 = 0x26711D9046BCC395LL;
                    int *l_1218[2][6][3] = {{{&l_1211[2][0][0],&l_1211[2][0][0],&l_1211[2][0][0]},{&l_1211[6][0][0],&l_1211[6][0][0],&l_1211[6][0][0]},{&l_1211[2][0][0],&l_1211[2][0][0],&l_1211[2][0][0]},{&l_1211[6][0][0],&l_1211[6][0][0],&l_1211[6][0][0]},{&l_1211[2][0][0],&l_1211[2][0][0],&l_1211[2][0][0]},{&l_1211[6][0][0],&l_1211[6][0][0],&l_1211[6][0][0]}},{{&l_1211[2][0][0],&l_1211[2][0][0],&l_1211[2][0][0]},{&l_1211[6][0][0],&l_1211[6][0][0],&l_1211[6][0][0]},{&l_1211[2][0][0],&l_1211[2][0][0],&l_1211[2][0][0]},{&l_1211[6][0][0],&l_1211[6][0][0],&l_1211[6][0][0]},{&l_1211[2][0][0],&l_1211[2][0][0],&l_1211[2][0][0]},{&l_1211[6][0][0],&l_1211[6][0][0],&l_1211[6][0][0]}}};
                    int i, j, k;
                    if ((((safe_mul_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u((l_1153 , (safe_sub_func_int16_t_s_s((-1L), (((~(safe_mul_func_uint16_t_u_u((((((l_1171 <= (g_1041.f4 , p_23)) , ((safe_add_func_int64_t_s_s((0xC2L >= g_467.f1), (safe_add_func_int8_t_s_s((((p_24 , l_1201) != (void*)0) & l_1171), 0xA1L)))) , l_1202)) >= 0xFE2CD50A6A2A1A21LL) & g_519[1][0][1].f2) <= (-9L)), 0x9AEEL))) >= 0x4DD1L) || 0xBEB3L)))), 0xFA59307BL)), l_1171)) > 0xC979FECFL) > g_519[1][0][1].f8))
                    {
                        const int l_1208[5] = {2L,2L,2L,2L,2L};
                        int i;
                        l_1205 = (safe_mod_func_uint16_t_u_u(p_23, p_24));
                        l_1211[6][0][0] = (safe_mul_func_int8_t_s_s(p_24, (l_1208[0] <= ((safe_unary_minus_func_uint64_t_u(l_1210)) , (+l_1205)))));
                        l_1218[1][4][1] = p_22;


                        l_1211[6][0][0] = g_1219;
                    }
                    else
                    {
                        char l_1225[10] = {0x0DL,0x0DL,0x0DL,0x0DL,0x0DL,0x0DL,0x0DL,0x0DL,0x0DL,0x0DL};
                        int i;
                        (*g_296) = ((&g_586 == (g_56.f9 , &g_586)) ^ l_1211[4][0][0]);
                        l_1211[6][0][0] = ((l_1220 != l_1221) | (p_24 >= (((safe_lshift_func_int16_t_s_u((l_1205 , (((g_725.f7 && (((*p_22) | (((0xD3AC73DA63E426A6LL <= (~p_24)) <= (*g_60)) , l_1224)) , p_23)) <= p_24) , p_24)), p_23)) != g_467.f0) , g_911.f3)));
                        l_1225[9] = (*p_22);
                        l_1229 = p_22;

                        ;
                    }


                    l_1230[1][0][0] = (*p_22);
                    l_1218[1][5][0] = l_1218[1][4][1];
                    if ((*p_22))
                        break;
                }
                (*g_585) = (void*)0;

                ;
                if (((((g_1233 , g_467.f7) , (((0L && (safe_mod_func_int32_t_s_s((safe_add_func_int16_t_s_s(p_24, ((g_725.f6 , l_1171) | p_23))), (*p_22)))) <= (safe_mul_func_int8_t_s_s(((g_128.f0 > p_24) != g_490.f1), p_24))) && l_1240)) , g_12) , (*g_296)))
                {
                    long long l_1251[2];
                    struct S0 **l_1264 = &g_57;
                    int *l_1265 = &l_1211[6][0][0];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_1251[i] = 0x121BCDB092006558LL;
                    if ((*p_22))
                    {
                        p_22 = p_22;
                    }
                    else
                    {
                        unsigned short l_1241 = 0xE43EL;
                        l_1241 = 0x6B50CB0AL;
                        return p_22;


                    }
                    for (g_725.f8 = 0; (g_725.f8 < 36); g_725.f8 = safe_add_func_int8_t_s_s(g_725.f8, 6))
                    {
                        l_1188 = l_1265;

                        ;
                        if (l_1266[0])
                            continue;
                        (*l_1188) = ((*l_1265) <= (safe_add_func_int8_t_s_s(p_23, g_725.f9)));
                    }

                    ;
                }
                else
                {
                    l_1202 = (0x54L | 0UL);
                }

                ;
            }
            p_22 = p_22;
        }
    }

    ;
    (*l_1283) = ((safe_add_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((((((l_1211[6][0][0] || ((safe_rshift_func_uint8_t_u_u(p_23, 2)) & 2L)) == ((safe_mul_func_int16_t_s_s((p_24 | ((g_986.f1 ^ ((void*)0 == l_1279)) > g_467.f1)), 0x61D9L)) , 0x0F89L)) | l_1153) , p_24) , p_24), 1UL)), l_1282)), g_467.f1)) >= (*g_13));
    return p_22;


}







static unsigned func_25(short p_26)
{
    unsigned l_591 = 18446744073709551613UL;
    int l_652 = 0xAB625AA7L;
    int *l_679 = &g_2;
    int l_737[4];
    unsigned l_757 = 0x29C64C91L;
    unsigned long long l_758 = 1UL;
    union U1 *l_792 = (void*)0;
    union U1 **l_791 = &l_792;
    struct S0 **l_806 = &g_57;
    int l_809[9] = {8L,0L,8L,0L,8L,0L,8L,0L,8L};
    int ***l_827 = &g_271;
    int *l_1094 = &g_61;
    int *l_1100 = &l_652;
    char l_1124 = 0xEFL;
    int i;
    for (i = 0; i < 4; i++)
        l_737[i] = 0xBBF51CEFL;
    if (l_591)
    {
        const int l_631 = 0x4B680EE6L;
        struct S0 ***l_633 = &g_84;
        union U1 l_649 = {0x74E5L};
        int **l_650 = &g_179;
        int l_658 = (-1L);
        int **l_676 = &g_13;
        int *l_678 = &l_658;
        union U1 *l_784 = &g_12;
        union U1 **l_783 = &l_784;
        int * const *l_829 = &g_179;
        int * const ** const l_828 = &l_829;
        for (g_56.f2 = 4; (g_56.f2 <= 5); g_56.f2 = safe_add_func_int32_t_s_s(g_56.f2, 1))
        {
            union U1 *l_600 = &g_12;
            union U1 **l_599 = &l_600;
            int *l_601 = (void*)0;
            for (p_26 = 28; (p_26 != (-28)); --p_26)
            {
                unsigned l_598[10] = {4294967291UL,0x13609233L,0x13609233L,4294967291UL,0x13609233L,0x13609233L,4294967291UL,0x13609233L,0x13609233L,4294967291UL};
                union U1 l_616 = {65530UL};
                struct S0 **l_618[8];
                int l_651 = 1L;
                int i;
                for (i = 0; i < 8; i++)
                    l_618[i] = &g_57;
                l_598[3] = ((safe_lshift_func_uint8_t_u_s(255UL, 1)) & (p_26 <= p_26));
                (*g_602) = l_601;

                ;
                for (g_490.f2 = 14; (g_490.f2 >= 18); g_490.f2 = safe_add_func_int16_t_s_s(g_490.f2, 1))
                {
                    struct S0 ** const l_617 = &g_57;
                    int l_629 = 0x4648DFD7L;
                    int **l_630 = (void*)0;
                    int *l_635 = &g_74[3];
                    int *l_640 = &g_74[7];
                    if ((safe_sub_func_uint16_t_u_u(0x2A26L, (safe_lshift_func_uint8_t_u_s((p_26 | (safe_unary_minus_func_uint64_t_u(((p_26 <= (safe_add_func_uint64_t_u_u(0x3D99F85ADEC9BD05LL, l_591))) > 0x0FDFL)))), ((safe_rshift_func_uint16_t_u_s(((safe_rshift_func_uint16_t_u_s(((l_616 , l_617) == l_618[6]), 8)) >= g_490.f0), g_74[7])) , p_26))))))
                    {
                        int *l_632 = &l_629;
                        if (l_598[1])
                            break;
                        if (l_591)
                            continue;
                        l_632 = (((((*l_600) , (~g_56.f6)) > p_26) && l_591) , l_601);

                        ;
                    }
                    else
                    {
                        int *l_634 = &g_74[7];
                        int l_636 = 0x356115D8L;
                        int *l_639[6] = {&g_61,&g_61,&g_61,&g_61,&g_61,&g_61};
                        int i;
                        (*g_244) = (!(((g_519[1][0][1].f0 ^ (0xA4DDL | (l_631 == ((0x2CFCE5E37722A83DLL >= g_519[1][0][1].f8) , ((void*)0 != l_633))))) != p_26) , (*g_60)));
                        l_635 = l_634;
                        l_635 = (g_56.f5 , (g_490.f6 , l_639[2]));

                        ;
                        (*l_634) = (*g_195);
                    }

                    ;
                    (*l_640) = ((p_26 > g_519[1][0][1].f1) && g_490.f0);
                    for (g_128.f2 = 0; (g_128.f2 != 51); g_128.f2 = safe_add_func_int32_t_s_s(g_128.f2, 3))
                    {
                        const int *l_646[9] = {&g_61,&g_61,&g_61,&g_61,&g_61,&g_61,&g_61,&g_61,&g_61};
                        const int **l_645 = &l_646[2];
                        int i;
                        (*g_252) = (safe_rshift_func_int8_t_s_u(l_591, ((**l_617) , (*l_635))));
                        (*l_645) = &l_631;


                    }
                    if (p_26)
                        break;
                }
                l_651 = (safe_mul_func_int8_t_s_s(((*g_477) != (l_649 , l_650)), g_467.f2));
            }
            l_652 = p_26;
        }
        for (p_26 = (-18); (p_26 == 9); ++p_26)
        {
            int *l_671[10][9][2] = {{{&g_2,&g_61},{&g_61,&g_2},{&g_61,&g_74[7]},{&g_61,&g_2},{&g_61,&g_61},{&g_2,&g_61},{&g_74[7],&g_61},{&g_2,&g_61},{&g_61,&g_2}},{{&g_61,&g_74[7]},{&g_61,&g_2},{&g_61,&g_61},{&g_2,&g_61},{&g_74[7],&g_61},{&g_2,&g_61},{&g_61,&g_2},{&g_61,&g_74[7]},{&g_61,&g_2}},{{&g_61,&g_61},{&g_2,&g_61},{&g_74[7],&g_61},{&g_2,&g_61},{&g_61,&g_2},{&g_61,&g_74[7]},{&g_61,&g_2},{&g_61,&g_61},{&g_2,&g_61}},{{&g_74[7],&g_61},{&g_2,&g_61},{&g_61,&g_2},{&g_61,&g_74[7]},{&g_61,&g_2},{&g_61,&g_61},{&g_2,&g_61},{&g_74[7],&g_61},{&g_2,&g_61}},{{&g_61,&g_2},{&g_61,&g_74[7]},{&g_61,&g_2},{&g_61,&g_61},{&g_2,&g_61},{&g_74[7],&g_74[7]},{&g_74[1],&g_61},{&g_61,&g_74[1]},{&g_74[7],&g_74[7]}},{{&g_74[7],&g_74[1]},{&g_61,&g_61},{&g_74[1],&g_74[7]},{&g_74[7],&g_74[7]},{&g_74[1],&g_61},{&g_61,&g_74[1]},{&g_74[7],&g_74[7]},{&g_74[7],&g_74[1]},{&g_61,&g_61}},{{&g_74[1],&g_74[7]},{&g_74[7],&g_74[7]},{&g_74[1],&g_61},{&g_61,&g_74[1]},{&g_74[7],&g_74[7]},{&g_74[7],&g_74[1]},{&g_61,&g_61},{&g_74[1],&g_74[7]},{&g_74[7],&g_74[7]}},{{&g_74[1],&g_61},{&g_61,&g_74[1]},{&g_74[7],&g_74[7]},{&g_74[7],&g_74[1]},{&g_61,&g_61},{&g_74[1],&g_74[7]},{&g_74[7],&g_74[7]},{&g_74[1],&g_61},{&g_61,&g_74[1]}},{{&g_74[7],&g_74[7]},{&g_74[7],&g_74[1]},{&g_61,&g_61},{&g_74[1],&g_74[7]},{&g_74[7],&g_74[7]},{&g_74[1],&g_61},{&g_61,&g_74[1]},{&g_74[7],&g_74[7]},{&g_74[7],&g_74[1]}},{{&g_61,&g_61},{&g_74[1],&g_74[7]},{&g_74[7],&g_74[7]},{&g_74[1],&g_61},{&g_61,&g_74[1]},{&g_74[7],&g_74[7]},{&g_74[7],&g_74[1]},{&g_61,&g_61},{&g_74[1],&g_2}}};
            int i, j, k;
            (*g_655) = (g_490.f7 > g_467.f3);
            if ((((safe_mod_func_int16_t_s_s(g_56.f1, p_26)) >= p_26) <= l_658))
            {
                unsigned l_667 = 0x7D33FC89L;
                int *l_670 = &l_658;
                if ((*g_60))
                    break;
                (*g_296) = (safe_sub_func_int8_t_s_s(1L, ((-1L) && ((safe_sub_func_uint64_t_u_u(p_26, ((**g_585) , (l_652 != p_26)))) & 0UL))));
                (*l_650) = l_670;

                ;
                return g_128.f9;


            }
            else
            {
                int *l_677 = &g_61;
                (*l_677) = (p_26 && 3L);
                if (p_26)
                    break;
                (*l_650) = l_679;

                ;
            }

            ;
            (*l_650) = (void*)0;

            ;
            (*g_252) = ((**l_676) , (*l_679));
        }
        if ((safe_mod_func_uint64_t_u_u(g_467.f7, 0xB006EBA47751EA08LL)))
        {
            long long l_693 = 3L;
            int *l_698[3];
            struct S0 ***l_738 = &g_84;
            int i;
            for (i = 0; i < 3; i++)
                l_698[i] = (void*)0;
            for (g_128.f2 = 0; (g_128.f2 <= 5); g_128.f2 += 1)
            {
                unsigned long long l_722 = 8UL;
                struct S0 **l_761 = &g_57;
                unsigned long long l_778 = 18446744073709551615UL;
                int i;
                if (g_74[g_128.f2])
                {
                    int *l_692[9] = {&g_74[g_128.f2],(void*)0,&g_74[g_128.f2],(void*)0,&g_74[g_128.f2],(void*)0,&g_74[g_128.f2],(void*)0,&g_74[g_128.f2]};
                    struct S0 ***l_726[9][1] = {{&g_84},{&g_84},{&g_84},{&g_84},{&g_84},{&g_84},{&g_84},{&g_84},{&g_84}};
                    int i, j;
                    if (((safe_add_func_uint8_t_u_u((g_56.f5 & 0x2256L), 0x98L)) , l_693))
                    {
                        const int *l_704 = &g_2;
                        const int **l_703[2];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_703[i] = &l_704;
                        (*l_650) = (*l_676);

                        ;
                    }
                    else
                    {
                        struct S0 * const l_719 = &g_519[1][0][1];
                        int i;
                        g_74[(g_128.f2 + 2)] = 1L;
                        (*l_678) = (0x259A592EL ^ ((!(((p_26 == g_74[2]) & (safe_sub_func_int16_t_s_s((safe_add_func_int16_t_s_s((~(*l_679)), g_490.f1)), (((safe_rshift_func_uint16_t_u_u((g_56.f4 || g_56.f9), (safe_rshift_func_uint8_t_u_s(g_519[1][0][1].f3, ((g_128.f5 == g_74[7]) , 0x87L))))) >= g_519[1][0][1].f1) != (*l_679))))) & p_26)) | p_26));
                        (*l_678) = (p_26 >= (((safe_rshift_func_uint16_t_u_u(g_74[(g_128.f2 + 2)], 9)) != ((g_467.f1 ^ g_519[1][0][1].f3) , ((((((-2L) ^ (safe_mod_func_uint64_t_u_u(g_467.f2, (safe_mul_func_int8_t_s_s(((void*)0 != l_719), (safe_sub_func_int16_t_s_s(((&g_74[(g_128.f2 + 2)] != (void*)0) != (-9L)), 0xF69FL))))))) || l_722) , &g_74[(g_128.f2 + 2)]) == &l_652) , 0x60C6CF92EE93C7A4LL))) > p_26));
                        (*l_650) = &g_74[(g_128.f2 + 2)];

                        ;
                    }

                    ;
                    if ((p_26 > (g_725 , ((l_726[1][0] == (p_26 , l_738)) != p_26))))
                    {
                        unsigned short l_745 = 65535UL;
                        (*g_296) = ((void*)0 == (**l_738));
                        (*l_678) = (p_26 <= (((((((((((safe_mul_func_uint8_t_u_u((p_26 , g_725.f9), 0x64L)) || 0x79C4L) , p_26) , l_745) == l_722) & 0L) != (-7L)) | 2UL) >= 4294967294UL) || 0x6535L) || g_746[3]));
                    }
                    else
                    {
                        (*g_655) = ((safe_lshift_func_int16_t_s_s((((safe_sub_func_int32_t_s_s(0L, 0x8917E6D4L)) , (safe_mod_func_int64_t_s_s(0x8E3369B15F8D2772LL, (p_26 & (safe_sub_func_uint16_t_u_u(4UL, ((((safe_rshift_func_uint16_t_u_u(p_26, p_26)) > ((l_757 <= 0x891639A294E05DD0LL) , (*l_679))) || g_128.f9) , p_26))))))) > 0xB59B06E116585498LL), 5)) | 1UL);
                        (*l_678) = p_26;
                        (*l_738) = (*g_83);
                        (*l_678) = (*g_195);
                    }
                }
                else
                {
                    for (g_61 = 8; (g_61 >= 0); g_61 -= 1)
                    {
                        int i;
                        (*l_678) = g_74[g_61];
                    }
                    (*l_678) = (*g_252);
                    if ((*g_296))
                        continue;
                }
                if ((p_26 <= func_27((*l_676), &l_652, g_467.f0, &g_74[g_128.f2], g_74[7])))
                {
                    unsigned long long l_762 = 0xB5C6FCD4B213191ALL;
                    (*g_252) = ((g_467.f0 , g_519[1][0][1].f6) >= p_26);
                    for (l_757 = 0; (l_757 <= 8); l_757 += 1)
                    {
                        int i;
                        if (g_74[(g_128.f2 + 2)])
                            break;
                        if (l_762)
                            break;
                    }
                }
                else
                {
                    int *l_773 = &g_74[g_128.f2];
                    l_652 = (*g_13);
                    (*l_678) = (safe_mod_func_int64_t_s_s(p_26, (0x2674L ^ ((1UL < (*l_678)) <= (safe_rshift_func_uint16_t_u_s(p_26, 3))))));
                    for (p_26 = (-9); (p_26 != (-6)); ++p_26)
                    {
                        short l_772[7] = {0xBF52L,0x11FEL,0xBF52L,0xBF52L,0x11FEL,0xBF52L,0xBF52L};
                        int i;
                        (*g_769) = &l_679;

                        ;
                        (*l_678) = (0x9DF4L >= (safe_lshift_func_int8_t_s_s(g_128.f8, g_490.f7)));
                        l_772[3] = 8L;
                        return g_128.f9;



                    }
                    if ((+p_26))
                    {
                        (*l_650) = l_773;

                        ;
                    }
                    else
                    {
                        (*l_678) = (((safe_mul_func_int16_t_s_s(((g_725.f7 <= (-9L)) == l_778), 0xC42AL)) > (*l_679)) && (g_725.f6 != (((void*)0 == &g_586) || (p_26 , p_26))));
                    }
                }
            }


            (*l_678) = ((safe_add_func_uint16_t_u_u((((safe_mod_func_uint64_t_u_u(0x208B3F7B70E0B90ALL, g_519[1][0][1].f3)) , (((void*)0 != l_783) > ((-3L) <= (safe_lshift_func_int16_t_s_u(p_26, (safe_sub_func_int8_t_s_s(p_26, ((((((safe_mul_func_uint16_t_u_u((0x02L < g_519[1][0][1].f7), 0xBEA6L)) <= p_26) <= p_26) , &l_652) == &l_652) >= (*l_679))))))))) & 0xDD1203ADL), p_26)) == 0x9BL);
            (*l_650) = l_698[0];

            ;
            for (g_128.f8 = 0; (g_128.f8 <= 3); g_128.f8 += 1)
            {
                int *l_793 = (void*)0;
                int i;
                (*l_650) = l_793;
            }
        }
        else
        {
            struct S0 *l_796 = &g_797;
            int *l_800 = &g_61;
            int *l_819 = &l_809[2];
            for (g_56.f8 = 21; (g_56.f8 < 31); g_56.f8 = safe_add_func_uint8_t_u_u(g_56.f8, 8))
            {
                l_796 = (**g_83);

                ;
                (*g_84) = (**g_83);
            }

            ;
            (*g_585) = (*g_585);
            if ((safe_lshift_func_uint16_t_u_u((**l_676), (*l_679))))
            {
                (*l_650) = l_800;

                ;
            }
            else
            {
                int l_801 = 0L;
                struct S0 *l_815 = (void*)0;
                int l_816 = 0L;
                int *l_820 = &l_809[2];
                (*l_650) = (l_801 , l_800);

                ;
                for (l_801 = (-26); (l_801 != (-10)); l_801++)
                {
                    if (p_26)
                    {
                        (*l_800) = (p_26 > (safe_lshift_func_uint16_t_u_s((&g_178 != (void*)0), 7)));
                    }
                    else
                    {
                        return g_725.f1;
                    }
                    for (g_490.f7 = 1; (g_490.f7 <= 8); g_490.f7 += 1)
                    {
                        union U1 *l_814 = (void*)0;
                        int i;
                        (*l_783) = l_814;

                        ;
                        g_74[g_490.f7] = g_74[g_490.f7];
                    }
                }

                ;
                l_816 = (l_815 == l_796);
                (*l_820) = func_27((*l_650), (*l_650), (*l_820), (*l_650), (*l_820));


            }


            ;
        }


        ;
        for (g_490.f2 = 0; (g_490.f2 <= 9); g_490.f2 += 1)
        {
            int *l_821 = (void*)0;
            long long l_830[5];
            struct S0 ** const l_879[4] = {&g_57,&g_57,&g_57,&g_57};
            const unsigned l_908 = 0x888DD5B0L;
            struct S0 ** const *l_920 = &l_879[1];
            char l_926 = 0x5BL;
            union U1 l_935 = {7UL};
            int *l_952 = &g_74[4];
            int i;
            for (i = 0; i < 5; i++)
                l_830[i] = 0x18736853ACD204DELL;
            for (l_591 = 2; (l_591 <= 9); l_591 += 1)
            {
                struct S0 * const *l_826 = &g_55;
                int *l_834 = &g_2;
                int i;
                l_821 = (*l_676);

                ;
                l_830[0] = (safe_mod_func_uint32_t_u_u((((safe_rshift_func_uint8_t_u_s(g_746[g_490.f2], 3)) , (l_826 == (*l_633))) <= (l_827 != ((**g_585) , ((&l_809[2] != (*l_676)) , l_828)))), g_797.f2));
                for (g_56.f8 = 0; (g_56.f8 < 39); ++g_56.f8)
                {
                    unsigned l_833 = 4UL;
                    int l_835 = 0xE01E515AL;
                    (*l_650) = l_834;

                    ;
                    l_835 = (*l_678);
                    for (l_649.f0 = (-25); (l_649.f0 == 30); ++l_649.f0)
                    {
                        int *l_838 = &g_74[7];
                        (*l_650) = l_838;

                        ;
                        (*l_678) = l_835;
                        return g_797.f6;
                    }
                    for (g_61 = 0; (g_61 < (-18)); --g_61)
                    {
                        long long l_847[6][3][4] = {{{0x9B45DD1449D78F1ELL,0x443950BCF90FF394LL,0x443950BCF90FF394LL,0x9B45DD1449D78F1ELL},{(-1L),0x443950BCF90FF394LL,0x9087CB414EE07361LL,0x9B45DD1449D78F1ELL},{0x9B45DD1449D78F1ELL,0x443950BCF90FF394LL,0x443950BCF90FF394LL,0x9B45DD1449D78F1ELL}},{{(-1L),0x443950BCF90FF394LL,0x9087CB414EE07361LL,0x9B45DD1449D78F1ELL},{0x9B45DD1449D78F1ELL,0x443950BCF90FF394LL,0x443950BCF90FF394LL,0x9B45DD1449D78F1ELL},{(-1L),0x443950BCF90FF394LL,0x9087CB414EE07361LL,0x9B45DD1449D78F1ELL}},{{0x9B45DD1449D78F1ELL,0x443950BCF90FF394LL,0x443950BCF90FF394LL,0x9B45DD1449D78F1ELL},{(-1L),0x443950BCF90FF394LL,0x9087CB414EE07361LL,0x9B45DD1449D78F1ELL},{0x9B45DD1449D78F1ELL,0x443950BCF90FF394LL,0x443950BCF90FF394LL,0x9B45DD1449D78F1ELL}},{{(-1L),0x443950BCF90FF394LL,0x9087CB414EE07361LL,0x9B45DD1449D78F1ELL},{0x9B45DD1449D78F1ELL,0x443950BCF90FF394LL,0x443950BCF90FF394LL,0x9B45DD1449D78F1ELL},{(-1L),0x443950BCF90FF394LL,0x9087CB414EE07361LL,0x9B45DD1449D78F1ELL}},{{0x9B45DD1449D78F1ELL,0x443950BCF90FF394LL,0x443950BCF90FF394LL,0x9B45DD1449D78F1ELL},{(-1L),0x443950BCF90FF394LL,0x9087CB414EE07361LL,0x9B45DD1449D78F1ELL},{0x9B45DD1449D78F1ELL,0x443950BCF90FF394LL,0x443950BCF90FF394LL,0x9B45DD1449D78F1ELL}},{{(-1L),0x443950BCF90FF394LL,0x9087CB414EE07361LL,0x9B45DD1449D78F1ELL},{0x9B45DD1449D78F1ELL,0x443950BCF90FF394LL,0x443950BCF90FF394LL,0x9B45DD1449D78F1ELL},{(-1L),0x443950BCF90FF394LL,0x9087CB414EE07361LL,0x9B45DD1449D78F1ELL}}};
                        int i, j, k;
                        l_847[5][0][3] = (safe_lshift_func_uint8_t_u_s((safe_mul_func_int16_t_s_s(g_490.f9, 0x672DL)), ((p_26 , 1UL) <= (safe_sub_func_uint64_t_u_u((((g_797.f8 , g_519[1][0][1].f0) , ((*g_13) && 6L)) , g_797.f0), l_833)))));
                        (*l_678) = p_26;
                        (*l_678) = (safe_lshift_func_uint8_t_u_s((8L || (safe_sub_func_uint32_t_u_u(g_56.f0, (*l_834)))), (safe_add_func_int8_t_s_s((&l_826 != &l_826), (!g_56.f2)))));
                    }
                }
                (*l_650) = l_834;

                ;
            }

            ;
            for (l_758 = 0; (l_758 >= 29); ++l_758)
            {
                int * const l_856 = &l_809[2];
                int *l_895 = (void*)0;
                if (p_26)
                {
                    int **l_857 = &l_678;
                    (*l_857) = l_856;

                    ;
                    if (((safe_rshift_func_int16_t_s_s((safe_mod_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_s((&g_271 == ((safe_unary_minus_func_uint32_t_u((+((safe_mod_func_int64_t_s_s((!(p_26 , g_519[1][0][1].f5)), p_26)) >= 0UL)))) , l_827)), 2)) , (safe_unary_minus_func_int8_t_s(p_26))), ((((safe_sub_func_uint8_t_u_u((safe_mod_func_int32_t_s_s(((g_56.f5 == (*l_856)) || p_26), 0xEFAE687AL)), p_26)) , (**g_83)) != (void*)0) , g_467.f3))), p_26)), g_797.f5)) , 0L))
                    {
                        int l_874 = (-1L);
                        (**l_857) = (&g_586 != &g_586);
                        if ((*l_856))
                            break;
                        (*l_678) = (*g_655);
                        if (l_874)
                            break;
                    }
                    else
                    {
                        (*l_650) = l_821;

                        ;
                        (*l_856) = (safe_mul_func_int8_t_s_s(((safe_mul_func_int16_t_s_s((-1L), ((*g_655) , p_26))) > ((-1L) < (((l_879[1] == &g_55) , ((safe_rshift_func_uint8_t_u_s((p_26 != ((((safe_sub_func_uint64_t_u_u((&g_61 == ((safe_rshift_func_uint8_t_u_u(g_725.f1, p_26)) , l_856)), g_56.f1)) | 6L) | (*l_856)) , 0x0CL)), p_26)) , g_56.f1)) , g_467.f0))), g_56.f1));
                    }
                }
                else
                {
                    int **l_886 = &l_678;
                    (*l_886) = l_856;

                    ;
                    (*g_178) = l_856;

                    ;
                    (*l_650) = (*l_886);
                }

                ;
                if ((*l_856))
                {
                    for (g_56.f7 = 0; (g_56.f7 <= 4); g_56.f7 += 1)
                    {
                        (*l_856) = (-1L);
                        (*l_856) = (safe_sub_func_int64_t_s_s(g_128.f2, g_128.f0));
                    }
                    (*l_678) = 1L;
                }
                else
                {
                    int *l_894 = &l_658;
                    if ((0x915E4E1CL | 0xBAE0BC7AL))
                    {
                        (*l_650) = l_821;

                        ;
                        (*l_650) = l_894;

                        ;
                    }
                    else
                    {
                        (*l_856) = (~((g_519[1][0][1].f5 >= p_26) > g_725.f2));
                        if (p_26)
                            continue;
                        (*l_894) = 4L;
                        (*g_296) = (*l_679);
                    }
                }
            }
            for (g_128.f7 = 0; (g_128.f7 <= 17); g_128.f7 = safe_add_func_uint32_t_u_u(g_128.f7, 2))
            {
                const unsigned char l_907 = 0x04L;
                union U1 * const l_929 = &l_649;
                int *l_934 = &g_61;
                (*l_828) = (*l_828);
                if ((p_26 != ((p_26 == (+(((g_725.f2 > 255UL) < ((-1L) & (safe_mod_func_int64_t_s_s(((safe_add_func_uint16_t_u_u(((**l_806) , p_26), ((safe_rshift_func_uint16_t_u_u(l_907, 5)) , g_490.f8))) | g_725.f3), p_26)))) && l_908))) != 0x872BA24DL)))
                {
                    short l_909 = 0x2D0CL;
                    l_909 = 0xFFAB7989L;
                    if (g_910)
                        continue;
                }
                else
                {
                    int *l_921 = &g_61;
                    unsigned char l_943 = 0xA7L;
                    const unsigned l_944 = 0x62E40DEBL;
                    int *l_947 = &l_652;
                    (*l_650) = l_921;

                    ;
                    (**l_650) = (safe_add_func_uint8_t_u_u(((p_26 <= g_56.f9) < g_519[1][0][1].f8), g_128.f8));
                    if ((*l_678))
                    {
                        if ((*g_289))
                            break;
                    }
                    else
                    {
                        l_921 = l_934;
                        (**l_829) = (*g_179);
                        (*l_650) = (void*)0;

                        ;
                    }

                    ;
                    if ((*g_289))
                    {
                        union U1 l_942 = {65535UL};
                        int **l_945[1];
                        int i;
                        for (i = 0; i < 1; i++)
                            l_945[i] = &g_13;
                        (*l_650) = (g_911.f9 , (void*)0);

                        ;
                        (*l_934) = (((*l_828) != l_945[0]) < p_26);
                        (*l_650) = (*g_178);
                    }
                    else
                    {
                        return p_26;
                    }

                    ;
                }
                (*g_296) = ((&g_84 != (void*)0) || ((&g_271 == (void*)0) , 0xE111L));
                if ((*g_244))
                    continue;
            }
            for (g_490.f8 = 0; (g_490.f8 >= 33); ++g_490.f8)
            {
                (*g_178) = l_952;

                ;
                (***l_828) = ((*l_679) == (*g_60));
            }
        }


        ;
    }
    else
    {
        unsigned short l_957 = 0UL;
        int l_959 = 0xE840E5A7L;
        long long l_975 = (-1L);
        char l_976 = 3L;
        short l_988 = 1L;
        int *l_989[8][6][3] = {{{&l_652,&l_809[0],&l_652},{&l_652,(void*)0,&g_74[7]},{&g_61,&g_61,&g_74[7]},{&g_61,(void*)0,(void*)0},{&g_74[7],&l_809[0],(void*)0},{&g_61,&g_74[0],&g_61}},{{&g_61,&g_74[7],(void*)0},{&l_652,&l_652,(void*)0},{&l_652,&g_74[7],&g_74[7]},{(void*)0,&g_74[0],&g_74[7]},{&l_652,&l_809[0],&l_652},{&l_652,(void*)0,&g_74[7]}},{{&g_61,&g_61,&g_74[7]},{&g_61,(void*)0,(void*)0},{&g_74[7],&l_809[0],(void*)0},{&g_61,&g_74[0],&g_61},{&g_61,&g_74[7],(void*)0},{&l_652,&l_652,(void*)0}},{{&l_652,&g_74[7],&g_74[7]},{(void*)0,&g_74[0],&g_74[7]},{&l_652,&l_809[0],&l_652},{&l_652,(void*)0,&g_74[7]},{&g_61,&g_61,&g_74[7]},{&g_61,(void*)0,(void*)0}},{{&g_74[7],&l_809[0],(void*)0},{&g_61,&g_74[0],&g_61},{&g_61,&g_74[7],(void*)0},{&l_652,&l_652,(void*)0},{&l_652,&g_74[7],&g_74[7]},{(void*)0,(void*)0,&l_652}},{{&l_809[0],&g_74[7],&l_809[0]},{&g_61,&g_74[7],&l_652},{&l_652,&l_652,(void*)0},{&g_74[0],&g_74[7],&g_74[7]},{(void*)0,&g_74[7],&g_61},{&g_74[0],(void*)0,&g_74[0]}},{{&l_652,(void*)0,&g_61},{&g_61,&g_61,&g_74[7]},{&l_809[0],(void*)0,(void*)0},{&g_74[7],(void*)0,&l_652},{&l_809[0],&g_74[7],&l_809[0]},{&g_61,&g_74[7],&l_652}},{{&l_652,&l_652,(void*)0},{&g_74[0],&g_74[7],&g_74[7]},{(void*)0,&g_74[7],&g_61},{&g_74[0],(void*)0,&g_74[0]},{&l_652,(void*)0,&g_61},{&g_61,&g_61,&g_74[7]}}};
        union U1 ** const l_1074[1] = {(void*)0};
        const char l_1079 = 0xB8L;
        int **l_1105 = (void*)0;
        int **l_1106 = &l_1100;
        unsigned long long l_1109 = 0xA62B979F9A3EE8BDLL;
        struct S0 *l_1129 = &g_128;
        int i, j, k;
        for (g_490.f2 = (-7); (g_490.f2 < 22); g_490.f2 = safe_add_func_int16_t_s_s(g_490.f2, 9))
        {
            char l_977 = 0x28L;
            int *l_978 = &g_61;
            long long l_1010 = 1L;
            unsigned long long l_1042 = 7UL;
            int l_1093 = (-1L);
            for (g_490.f8 = 0; (g_490.f8 > 56); g_490.f8 = safe_add_func_int16_t_s_s(g_490.f8, 1))
            {
                char l_958 = (-9L);
                int **l_960 = &g_179;
                union U1 *l_1009[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_1009[i] = &g_12;
                l_957 = 0L;
                l_959 = l_958;
                (*l_960) = (l_957 , &l_959);

                ;
                if ((safe_mul_func_int8_t_s_s(0x11L, ((safe_mul_func_uint16_t_u_u((p_26 | ((safe_rshift_func_int16_t_s_s(p_26, 13)) , (!(*l_978)))), 0xCE7AL)) , (*l_679)))))
                {
                    int *l_985 = &l_959;
                    for (p_26 = 0; (p_26 == 13); p_26++)
                    {
                        const unsigned l_987 = 5UL;
                        if ((*g_13))
                            break;
                        (*l_985) = ((((safe_rshift_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u((*l_978), (-8L))), ((&l_959 != l_985) > p_26))) , g_910) , ((g_986 , l_987) | (((((p_26 || g_490.f3) || l_988) , g_74[7]) ^ p_26) , g_56.f0))) < (*l_978));
                    }
                }
                else
                {
                    int *l_993 = &l_809[4];
                    long long l_1005 = 1L;
                    (*l_993) = p_26;
                    for (g_725.f8 = 0; (g_725.f8 < 26); ++g_725.f8)
                    {
                        unsigned long long l_998 = 0x1353BB39CF85F482LL;
                    }
                    for (g_61 = 0; (g_61 >= (-3)); --g_61)
                    {
                        int *l_1008 = &l_652;
                        (*g_602) = l_1008;

                        ;
                        l_1009[1] = l_1009[1];
                    }

                    ;
                }

                ;
            }
            (*l_978) = (l_1010 < 1L);
            if (((p_26 == (*l_978)) >= ((*l_679) & p_26)))
            {
                unsigned char l_1017 = 0x1FL;
                union U1 l_1020 = {0x20C0L};
                int *l_1025 = (void*)0;
                int **l_1026 = (void*)0;
                int **l_1028[2];
                int l_1035[8][10][3] = {{{(-9L),0xA65AC246L,(-9L)},{1L,0x878B1994L,1L},{(-9L),0xA65AC246L,(-9L)},{1L,0x878B1994L,1L},{(-9L),0xA65AC246L,(-9L)},{1L,0x878B1994L,1L},{(-9L),0xA65AC246L,(-9L)},{1L,0x878B1994L,1L},{(-9L),0xA65AC246L,(-9L)},{1L,0x878B1994L,1L}},{{(-9L),0xA65AC246L,(-9L)},{1L,0x878B1994L,1L},{(-9L),0xA65AC246L,(-9L)},{(-9L),1L,(-9L)},{9L,(-1L),9L},{(-9L),1L,(-9L)},{9L,(-1L),9L},{(-9L),1L,(-9L)},{9L,(-1L),9L},{(-9L),1L,(-9L)}},{{9L,(-1L),9L},{(-9L),1L,(-9L)},{9L,(-1L),9L},{(-9L),1L,(-9L)},{9L,(-1L),9L},{(-9L),1L,(-9L)},{9L,(-1L),9L},{(-9L),1L,(-9L)},{9L,(-1L),9L},{(-9L),1L,(-9L)}},{{9L,(-1L),9L},{(-9L),1L,(-9L)},{9L,(-1L),9L},{(-9L),1L,(-9L)},{9L,(-1L),9L},{(-9L),1L,(-9L)},{9L,(-1L),9L},{(-9L),1L,(-9L)},{9L,(-1L),9L},{(-9L),1L,(-9L)}},{{9L,(-1L),9L},{(-9L),1L,(-9L)},{9L,(-1L),9L},{(-9L),1L,(-9L)},{9L,(-1L),9L},{(-9L),1L,(-9L)},{9L,(-1L),9L},{(-9L),1L,(-9L)},{9L,(-1L),9L},{(-9L),1L,(-9L)}},{{9L,(-1L),9L},{(-9L),1L,(-9L)},{9L,(-1L),9L},{(-9L),1L,(-9L)},{9L,(-1L),9L},{(-9L),1L,(-9L)},{9L,(-1L),9L},{(-9L),1L,(-9L)},{9L,(-1L),9L},{(-9L),1L,(-9L)}},{{9L,(-1L),9L},{(-9L),1L,(-9L)},{9L,(-1L),9L},{(-9L),1L,(-9L)},{9L,(-1L),9L},{(-9L),1L,(-9L)},{9L,(-1L),9L},{(-9L),1L,(-9L)},{9L,(-1L),9L},{(-9L),1L,(-9L)}},{{9L,(-1L),9L},{(-9L),1L,(-9L)},{9L,(-1L),9L},{(-9L),1L,(-9L)},{9L,(-1L),9L},{(-9L),1L,(-9L)},{9L,0x76E44BAAL,(-1L)},{0x878B1994L,(-9L),0x878B1994L},{(-1L),0x76E44BAAL,(-1L)},{0x878B1994L,(-9L),0x878B1994L}}};
                struct S0 *l_1040 = &g_1041;
                unsigned short l_1046[10];
                int i, j, k;
                for (i = 0; i < 2; i++)
                    l_1028[i] = (void*)0;
                for (i = 0; i < 10; i++)
                    l_1046[i] = 0UL;
                (*l_978) = (safe_sub_func_uint16_t_u_u((safe_add_func_int8_t_s_s((p_26 < (1L >= g_467.f5)), (((g_128.f1 && (safe_lshift_func_int16_t_s_s((*l_679), 2))) , &l_959) == (void*)0))), ((((((*l_978) && g_797.f7) , p_26) && 0x972DL) | l_1017) | 0x1591DDD0L)));
                l_989[3][3][0] = l_978;
                if (p_26)
                {
                    for (g_725.f7 = (-29); (g_725.f7 == 12); g_725.f7 = safe_add_func_uint32_t_u_u(g_725.f7, 9))
                    {
                        (*l_978) = p_26;
                        l_989[6][0][0] = (g_56.f3 , l_978);
                    }
                    return (*l_978);


                }
                else
                {
                    long long l_1043 = (-7L);
                    int *l_1048[9] = {&l_809[2],&l_809[2],&l_809[2],&l_809[2],&l_809[2],&l_809[2],&l_809[2],&l_809[2],&l_809[2]};
                    int i;
                    if ((((((safe_lshift_func_uint16_t_u_s((safe_mul_func_int8_t_s_s(g_986.f4, 0x9EL)), ((g_56.f7 <= (1UL != l_1035[6][8][2])) && (safe_add_func_uint32_t_u_u(0x83432D9DL, (((((safe_add_func_uint64_t_u_u((l_1040 == (void*)0), (&g_271 == &l_1028[0]))) > 0xA706L) , (*l_679)) || g_128.f3) < l_1042)))))) , (**g_83)) != (*g_84)) , l_1043) == 0x5D81E70F60115942LL))
                    {
                        return (*l_978);


                    }
                    else
                    {
                        (*g_178) = l_978;

                        ;
                    }

                    ;
                    if ((*l_978))
                        break;
                    l_1048[1] = (*g_178);


                }

                ;
                (*g_178) = &l_959;

                ;
            }
            else
            {
                struct S0 *l_1050 = (void*)0;
                int l_1057 = 1L;
                short l_1058[2][3] = {{0x0C1DL,(-1L),0x0C1DL},{0x0C1DL,(-1L),0x0C1DL}};
                union U1 l_1059 = {3UL};
                union U1 * const *l_1075 = &l_792;
                int i, j;
                (*g_1049) = &l_652;

                ;
                if (((void*)0 != l_1050))
                {
                    (*g_179) = (safe_mod_func_uint32_t_u_u(((safe_rshift_func_int16_t_s_u((*l_978), 0)) ^ p_26), (**g_1049)));
                    (*l_978) = (l_1058[0][0] != ((((l_1059 , (g_490.f9 , (safe_lshift_func_uint16_t_u_s((g_797.f6 && g_992), ((((g_467.f7 != (g_128.f0 , p_26)) , &g_271) != l_827) , l_1057))))) , 7L) == p_26) > g_128.f2));
                }
                else
                {
                    int *l_1068 = &l_1057;
                    struct S0 **l_1073 = &g_57;
                    (*l_978) = p_26;
                    (*l_978) = (safe_mul_func_int16_t_s_s(p_26, (safe_lshift_func_uint16_t_u_s(g_725.f5, 4))));
                    for (g_725.f2 = 0; (g_725.f2 <= 36); g_725.f2 = safe_add_func_int64_t_s_s(g_725.f2, 1))
                    {
                        (*g_1069) = l_1068;

                        ;
                        (*l_1068) = (g_725.f8 , (safe_unary_minus_func_uint32_t_u((safe_mod_func_uint32_t_u_u(((+(l_1073 == (*g_83))) != ((((((void*)0 != &l_806) , l_1074[0]) == l_1075) , (*l_978)) < g_128.f0)), (*g_13))))));
                    }

                    ;
                    (*l_978) = (*g_296);
                }

                ;
            }


            if (p_26)
            {
                short l_1076 = 0x489FL;
                int **l_1080 = &l_989[4][0][0];
                (*l_1080) = &l_959;
            }
            else
            {
                int *l_1089 = (void*)0;
                (*l_978) = (((safe_mul_func_uint16_t_u_u((safe_mod_func_int8_t_s_s(((safe_sub_func_uint64_t_u_u(((safe_mod_func_uint8_t_u_u((*l_978), 253UL)) , (((((((func_27(&l_959, &l_959, p_26, l_978, p_26) , 1L) & p_26) , g_986.f5) > 0xE11230B4C368BACDLL) == p_26) != 1L) || g_467.f1)), g_519[1][0][1].f3)) != p_26), p_26)), g_2)) , p_26) != g_128.f3);


                for (g_797.f7 = (-21); (g_797.f7 == 30); g_797.f7++)
                {
                    unsigned char l_1092 = 0xCDL;
                    l_1092 = p_26;
                    if (p_26)
                        continue;
                    l_1094 = (l_1093 , &l_1093);

                    ;
                }


            }



        }




        for (l_591 = (-6); (l_591 != 44); ++l_591)
        {
            int *l_1097 = &l_809[2];
            l_1097 = l_1097;
        }
        (*l_1106) = &l_959;

        ;
        if ((p_26 | (safe_sub_func_uint32_t_u_u(((*l_1106) != ((p_26 ^ l_1109) , (void*)0)), ((void*)0 == l_806)))))
        {
            (**l_1106) = p_26;
            (*l_1106) = (void*)0;

            ;
        }
        else
        {
            unsigned long long l_1120[9][2][4] = {{{0xCF40A098FCD635E8LL,0xF1A1A8710BCF3FB6LL,0x22BFBEDCEBD0E90FLL,8UL},{18446744073709551615UL,0xF1A1A8710BCF3FB6LL,0xF1A1A8710BCF3FB6LL,18446744073709551615UL}},{{0xF1A1A8710BCF3FB6LL,18446744073709551615UL,0xCF40A098FCD635E8LL,18446744073709551606UL},{0xF1A1A8710BCF3FB6LL,0xCF40A098FCD635E8LL,0xF1A1A8710BCF3FB6LL,0x22BFBEDCEBD0E90FLL}},{{18446744073709551615UL,18446744073709551606UL,0x22BFBEDCEBD0E90FLL,0x22BFBEDCEBD0E90FLL},{0xCF40A098FCD635E8LL,0xCF40A098FCD635E8LL,8UL,18446744073709551606UL}},{{18446744073709551606UL,18446744073709551615UL,8UL,18446744073709551615UL},{0xCF40A098FCD635E8LL,0xF1A1A8710BCF3FB6LL,0x22BFBEDCEBD0E90FLL,8UL}},{{18446744073709551615UL,0xF1A1A8710BCF3FB6LL,0xF1A1A8710BCF3FB6LL,18446744073709551615UL},{0xF1A1A8710BCF3FB6LL,18446744073709551615UL,0xCF40A098FCD635E8LL,18446744073709551606UL}},{{0xF1A1A8710BCF3FB6LL,0xCF40A098FCD635E8LL,0xF1A1A8710BCF3FB6LL,0x22BFBEDCEBD0E90FLL},{18446744073709551615UL,18446744073709551606UL,0x22BFBEDCEBD0E90FLL,0x22BFBEDCEBD0E90FLL}},{{0xCF40A098FCD635E8LL,0xCF40A098FCD635E8LL,8UL,18446744073709551606UL},{18446744073709551606UL,18446744073709551615UL,8UL,18446744073709551615UL}},{{0xCF40A098FCD635E8LL,0xF1A1A8710BCF3FB6LL,0x22BFBEDCEBD0E90FLL,8UL},{18446744073709551615UL,0xF1A1A8710BCF3FB6LL,0xF1A1A8710BCF3FB6LL,18446744073709551615UL}},{{0xF1A1A8710BCF3FB6LL,18446744073709551615UL,0xCF40A098FCD635E8LL,18446744073709551606UL},{0xF1A1A8710BCF3FB6LL,0xCF40A098FCD635E8LL,18446744073709551615UL,18446744073709551606UL}}};
            int *l_1126 = (void*)0;
            int i, j, k;
            for (g_128.f7 = 2; (g_128.f7 <= 8); g_128.f7 += 1)
            {
                long long l_1121 = (-3L);
                int *l_1123 = &g_2;
                if ((*g_252))
                {
                    short l_1116 = (-3L);
                    int *l_1125 = &g_2;
                    for (l_957 = 0; (l_957 <= 3); l_957 += 1)
                    {
                        int *l_1119 = &l_652;
                        int i;
                        g_74[g_128.f7] = (((safe_lshift_func_uint8_t_u_s((safe_mod_func_int8_t_s_s(((((safe_mul_func_int16_t_s_s(((((*g_55) , l_737[l_957]) && (((l_1116 , (safe_mul_func_uint16_t_u_u(g_1041.f8, g_797.f5))) && 8UL) != 18446744073709551608UL)) , 1L), l_1120[5][0][2])) < (*l_679)) || g_467.f5) && l_1121), p_26)), 7)) <= (*g_13)) && 0x21L);
                    }
                    for (l_1109 = 0; (l_1109 <= 8); l_1109 += 1)
                    {
                        union U1 ***l_1122 = &l_791;
                        (*l_1122) = &l_792;
                        (*l_1106) = l_1123;

                        ;
                        (*l_1106) = l_1125;
                    }
                    l_1125 = l_1126;

                    ;
                    if ((*l_1100))
                        break;
                }
                else
                {
                    int * const l_1127 = &g_74[7];
                    (*g_585) = (*g_585);
                    (*g_1128) = l_1127;

                    ;
                    for (g_992 = 0; (g_992 <= 8); g_992 += 1)
                    {
                        int i;
                        (*l_806) = l_1129;

                        ;
                        if (g_74[g_992])
                            continue;
                        g_74[g_128.f7] = (((safe_sub_func_int8_t_s_s(((!(g_74[g_128.f7] == (safe_sub_func_uint64_t_u_u(((+(0UL & p_26)) && (*l_1127)), g_910)))) < (safe_add_func_uint32_t_u_u((safe_add_func_uint64_t_u_u((((((p_26 ^ g_911.f7) >= ((safe_add_func_uint16_t_u_u(((p_26 & (safe_add_func_uint64_t_u_u((safe_add_func_uint32_t_u_u((safe_mod_func_uint8_t_u_u(p_26, g_519[1][0][1].f5)), 0xF47E635AL)), g_12.f0))) >= 0xE9DDL), 0xAB00L)) >= p_26)) >= 0xE3L) != p_26) , p_26), 18446744073709551613UL)), (*g_179)))), g_797.f0)) == (*l_1100)) , p_26);
                    }
                }
                for (g_725.f7 = 1; (g_725.f7 <= 8); g_725.f7 += 1)
                {
                    for (g_128.f2 = 0; (g_128.f2 <= 8); g_128.f2 += 1)
                    {
                        int i;
                        g_74[g_128.f2] = 0xBCF65F69L;
                    }
                }
                if (p_26)
                    break;
            }

            ;
            ;
        }

        ;
        ;
    }

    ;



    (*g_1146) = &l_809[2];

    ;
    (*g_195) = (((((((&l_792 != ((**l_806) , &l_792)) & g_490.f1) , g_519[1][0][1].f6) || (g_56.f8 != 0x24L)) | ((**g_585) , g_725.f2)) < g_56.f2) , p_26);
    return p_26;


}







static short func_27(int * p_28, int * p_29, unsigned short p_30, int * p_31, int p_32)
{
    char l_278 = (-1L);
    struct S0 *l_287 = (void*)0;
    int **l_295 = &g_179;
    unsigned l_325 = 1UL;
    union U1 l_341 = {0xDCDAL};
    unsigned l_372 = 0xD2F6D3F1L;
    int l_373 = 0L;
    unsigned long long l_375[2];
    long long l_417 = (-1L);
    int *l_419[6][8] = {{&g_2,&g_2,&g_2,&g_2,&g_2,&g_2,&g_2,&g_2},{&g_2,&g_2,&g_2,&g_2,&g_2,&g_2,&g_2,&g_2},{&g_2,&g_2,&g_2,&g_2,&g_2,&g_2,&g_2,&g_2},{&g_2,&g_2,&g_2,&g_2,&g_2,&g_2,&g_2,&g_2},{&g_2,&g_2,&g_2,&g_2,&g_2,&g_2,&g_2,&g_2},{&g_2,&g_2,&g_2,&g_2,&g_2,&g_2,&g_2,&g_2}};
    int *l_498 = &g_74[7];
    struct S0 **l_530[5];
    int i, j;
    for (i = 0; i < 2; i++)
        l_375[i] = 0x7BD63A894B2788A9LL;
    for (i = 0; i < 5; i++)
        l_530[i] = (void*)0;
    for (g_128.f7 = 0; (g_128.f7 <= 45); ++g_128.f7)
    {
        int **l_276 = &g_13;
        (*g_277) = l_276;

        ;
        for (g_56.f7 = 1; (g_56.f7 <= 5); g_56.f7 += 1)
        {
            return g_128.f1;
        }
        l_278 = 0xBA7469F8L;
    }
    for (g_56.f8 = 0; (g_56.f8 < 14); ++g_56.f8)
    {
        char l_288 = 0xCAL;
        int **l_290 = &g_179;
        unsigned l_303[10][3][6] = {{{0xB700F523L,0xB700F523L,0xB700F523L,0xB700F523L,0xB700F523L,0xB700F523L},{0xB700F523L,0xB700F523L,0xB700F523L,0xB700F523L,0xB700F523L,0xB700F523L},{0xB700F523L,0xB700F523L,0xB700F523L,0xB700F523L,0xB700F523L,0xB700F523L}},{{0xB700F523L,0xB700F523L,0xB700F523L,0xB700F523L,0xB700F523L,0xB700F523L},{0xB700F523L,0xB700F523L,0xB700F523L,0xB700F523L,0xB700F523L,0xB700F523L},{0xB700F523L,0xB700F523L,0xB700F523L,0xB700F523L,0xB700F523L,0xB700F523L}},{{0xB700F523L,0xB700F523L,0xB700F523L,0xB700F523L,0xB700F523L,0xB700F523L},{0xB700F523L,0xB700F523L,0xB700F523L,0xB700F523L,0xB700F523L,0xB700F523L},{0xB700F523L,0xB700F523L,0xB700F523L,0xB700F523L,0xB700F523L,0xB700F523L}},{{0xB700F523L,0xB700F523L,0xB700F523L,0xB700F523L,0xB700F523L,0xB700F523L},{0xB700F523L,0xB700F523L,0xB700F523L,0xB700F523L,0xB700F523L,0xB700F523L},{0xB700F523L,0xB700F523L,0xB700F523L,0xB700F523L,0xB700F523L,0xB700F523L}},{{0xB700F523L,0xB700F523L,0xB700F523L,0xB700F523L,0xB700F523L,0xB700F523L},{0xB700F523L,0xB700F523L,0xB700F523L,0xB700F523L,0xB700F523L,0xB700F523L},{0xB700F523L,0xB700F523L,0xB700F523L,0xB700F523L,0xB700F523L,0xB700F523L}},{{0xB700F523L,0xB700F523L,0xB700F523L,0xB700F523L,0xB700F523L,0xB700F523L},{0xB700F523L,0xB700F523L,0xB700F523L,0xB700F523L,0xB700F523L,0xB700F523L},{0xB700F523L,0xB700F523L,0xB700F523L,0xB700F523L,0xB700F523L,0xB700F523L}},{{0xB700F523L,0xB700F523L,0xB700F523L,0xB700F523L,0xB700F523L,0xB700F523L},{0xB700F523L,0xB700F523L,0xB700F523L,0xB700F523L,0xB700F523L,0xB700F523L},{0xB700F523L,0xB700F523L,0xB700F523L,0xB700F523L,0xB700F523L,0xB700F523L}},{{0xB700F523L,0xB700F523L,0xB700F523L,0xB700F523L,0xB700F523L,0xB700F523L},{0xB700F523L,0xB700F523L,0xB700F523L,0xB700F523L,0xB700F523L,0xB700F523L},{0xB700F523L,0xB700F523L,0xB700F523L,0xB700F523L,0xB700F523L,0xB700F523L}},{{0xB700F523L,0xB700F523L,0xB700F523L,0xB700F523L,0xB700F523L,0xB700F523L},{0xB700F523L,0xB700F523L,0xB700F523L,0xB700F523L,0xB700F523L,0xB700F523L},{0xB700F523L,0xB700F523L,0xB700F523L,0xB700F523L,0xB700F523L,0xB700F523L}},{{0xB700F523L,0xB700F523L,0xB700F523L,0xB700F523L,0xB700F523L,0xB700F523L},{0xB700F523L,0xB700F523L,0xB700F523L,0xB700F523L,0xB700F523L,0xB700F523L},{0xB700F523L,0xB700F523L,0xB700F523L,0xB700F523L,0xB700F523L,0xB700F523L}}};
        unsigned l_304[8] = {2UL,2UL,2UL,2UL,2UL,2UL,2UL,2UL};
        struct S0 ***l_342 = (void*)0;
        int i, j, k;
        (*g_289) = (safe_lshift_func_uint16_t_u_u((0x1743C508AB74A17DLL | ((((*g_195) & (*g_13)) , g_56.f8) < (((0x9E69E6C6L >= l_278) & g_74[7]) && (((safe_rshift_func_uint8_t_u_s((((safe_rshift_func_uint16_t_u_u((l_278 || (0x165BL < l_278)), 13)) , (*g_84)) == l_287), 0)) , g_128.f0) || g_128.f7)))), l_288));
        (*l_290) = (void*)0;

        ;
        if (((safe_rshift_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(p_32, ((((p_32 > (!0x0E9FL)) , (~((l_278 < g_2) , p_32))) | 0xD0E7BC49L) != l_278))), (&g_84 == (void*)0))) != g_128.f1))
        {
            (*l_290) = (*g_178);
            (*g_296) = ((((((void*)0 == (*g_83)) == (((p_30 , l_295) == (void*)0) == p_32)) > g_128.f8) & (g_56.f2 <= (0x9C37545C5AFCEADCLL <= p_30))) , (*g_60));
        }
        else
        {
            int l_305 = 0x63024330L;
            int l_306 = 0x284332C9L;
            if (((((***g_83) , &l_295) != ((((((safe_mod_func_uint16_t_u_u(((safe_lshift_func_int8_t_s_s((+(safe_add_func_uint16_t_u_u(65529UL, 0x0540L))), 4)) & l_303[8][2][5]), p_30)) <= 0x35E5ED2078140AC2LL) | g_56.f3) , (void*)0) != (void*)0) , &l_290)) >= g_56.f8))
            {
                l_305 = l_304[6];
            }
            else
            {
                long long l_315 = 0xD242701AC507ADD0LL;
                int l_322 = 2L;
                l_306 = (g_128.f6 & g_128.f0);
                l_322 = (g_128.f2 == (((safe_sub_func_int64_t_s_s((safe_mod_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s(g_128.f2, 10)), (p_32 & p_30))), (safe_sub_func_int8_t_s_s(l_315, (p_32 | ((((safe_sub_func_int8_t_s_s((((l_315 ^ (safe_mod_func_int8_t_s_s((safe_mul_func_uint8_t_u_u(((*g_277) == (void*)0), g_56.f0)), p_32))) != p_30) , l_315), g_56.f5)) & g_128.f1) && g_2) , (-1L))))))) ^ 0x0359L) <= l_315));
                if (((safe_add_func_uint64_t_u_u(p_32, l_325)) || (!(p_32 >= (safe_mod_func_uint32_t_u_u(p_32, l_306))))))
                {
                    (*l_295) = &l_322;

                    ;
                    (*l_295) = p_31;


                }
                else
                {
                    char l_334 = (-1L);
                    for (g_56.f2 = 0; (g_56.f2 == 56); g_56.f2 = safe_add_func_uint8_t_u_u(g_56.f2, 7))
                    {
                        (*g_289) = (g_56.f8 > (l_305 == (l_315 , ((p_30 & g_56.f6) , (safe_mod_func_int16_t_s_s((((safe_sub_func_int8_t_s_s((((((**g_84) , (g_56.f7 & 1L)) != 8L) , p_30) && g_56.f8), p_32)) | p_32) && l_334), p_30))))));
                        l_322 = (safe_add_func_uint64_t_u_u(((**g_84) , (safe_rshift_func_int8_t_s_u((safe_lshift_func_int16_t_s_s(((p_30 , (l_341 , (g_74[7] , (g_56.f2 , &g_84)))) != (g_56.f8 , l_342)), 6)), ((safe_mul_func_int16_t_s_s((l_315 && p_32), p_30)) <= 0x5E80L)))), g_56.f1));
                    }
                    for (l_288 = (-25); (l_288 < 23); ++l_288)
                    {
                        union U1 *l_348 = &g_12;
                        union U1 **l_347 = &l_348;
                        (*l_347) = &g_12;
                    }
                }


                for (l_305 = (-26); (l_305 == (-14)); l_305 = safe_add_func_int32_t_s_s(l_305, 2))
                {
                    return g_56.f6;
                }
            }


        }


    }


    if (((!(0x909CL && (0L ^ ((safe_add_func_int8_t_s_s((+((safe_mul_func_int8_t_s_s((-1L), ((((*p_28) < ((g_56.f1 > g_128.f1) >= p_32)) , 0x4912L) ^ 0x8310L))) <= 0x590AF42D96D5BA97LL)), 0x0CL)) | p_32)))) >= g_12.f0))
    {
        int *l_355 = (void*)0;
        int l_358 = (-1L);
        unsigned char l_365 = 3UL;
        union U1 *l_370 = &l_341;
        struct S0 *l_393 = &g_56;
        if ((g_128.f0 , (*p_28)))
        {
            for (g_56.f7 = 2; (g_56.f7 <= 8); g_56.f7 += 1)
            {
                int i;
                (*l_295) = &g_74[g_56.f7];

                ;
                return p_32;
            }
        }
        else
        {
            char l_359 = 0xC7L;
            long long l_360 = 0L;
            union U1 *l_371 = &l_341;
            int l_374 = 0x4A245415L;
            (*l_295) = p_31;


            l_359 = (p_30 >= p_32);
            l_374 = ((l_360 ^ p_32) | ((((~(safe_sub_func_uint64_t_u_u(g_56.f0, 1L))) , 0xD1AF15F833B014EBLL) && p_32) >= g_56.f4));
            l_375[0] = (*g_252);
        }
        for (l_278 = 19; (l_278 >= 7); l_278 = safe_sub_func_int32_t_s_s(l_278, 6))
        {
            if ((*p_29))
                break;
        }
        if ((safe_lshift_func_int16_t_s_s((l_358 & ((void*)0 == l_370)), 3)))
        {
            unsigned l_382 = 0x0C372297L;
            int l_395 = 1L;
            (*l_295) = &l_358;

            ;
            (*g_179) = (*g_13);
            for (l_365 = 0; (l_365 <= 5); l_365 += 1)
            {
                unsigned l_394 = 0x59FF7757L;
                int *l_399 = &l_358;
                unsigned l_408 = 4294967286UL;
                l_395 = (((l_382 , (safe_mul_func_int16_t_s_s((((p_32 <= ((safe_mod_func_int64_t_s_s((-5L), p_32)) & 65535UL)) >= 0xAAL) || (g_12.f0 && l_394)), l_382))) == p_30) != p_32);
                (*l_295) = p_29;


                (*l_399) = ((safe_lshift_func_uint8_t_u_s((g_128.f1 > ((l_382 , ((*p_31) && (**l_295))) , l_394)), 3)) > (safe_unary_minus_func_uint8_t_u(g_56.f5)));
                (*l_399) = (g_56.f7 && ((~(safe_mod_func_int8_t_s_s(((l_295 == (*g_277)) > (p_30 , (safe_lshift_func_int8_t_s_s((((p_32 == (0xE7ED444AL > (safe_mul_func_int8_t_s_s((0xB6E73D4B730C5E3ALL <= ((p_32 > 0x3AL) > (-5L))), 0UL)))) && p_32) != g_56.f1), 1)))), l_408))) | 0x2F461F9DL));
            }


        }
        else
        {
            l_358 = (1L > (safe_lshift_func_int8_t_s_u(1L, ((safe_mul_func_uint8_t_u_u(g_128.f1, 0xA4L)) , g_128.f1))));
        }


    }
    else
    {
        struct S0 *l_418[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
        int *l_420 = &g_74[3];
        union U1 *l_423 = &g_12;
        int i;
        if (((*g_13) <= 1UL))
        {
            int l_437 = 0x3301B3E1L;
            (*l_295) = l_420;

            ;
            for (g_128.f8 = (-8); (g_128.f8 == 25); g_128.f8++)
            {
                union U1 **l_424 = &l_423;
                int l_445[5];
                int i;
                for (i = 0; i < 5; i++)
                    l_445[i] = 0x5969EDB4L;
                (*l_424) = l_423;
                (*l_295) = p_28;


                if ((((((safe_add_func_uint32_t_u_u((safe_add_func_int16_t_s_s(p_32, p_32)), (safe_mod_func_uint64_t_u_u(((((safe_mod_func_uint64_t_u_u(((safe_mod_func_uint16_t_u_u(p_32, p_32)) & p_30), ((*p_29) , (safe_sub_func_uint32_t_u_u(((*g_277) == &p_28), l_437))))) , 0L) , 0xFF8A7F07L) >= (*g_179)), g_128.f3)))) <= p_30) , l_437) || l_437) == (**l_295)))
                {
                    int l_438 = 2L;
                    l_438 = (*l_420);
                    (*l_420) = ((((safe_mul_func_uint8_t_u_u(g_128.f3, 0x86L)) , (safe_rshift_func_int8_t_s_u(l_438, ((+0xA302CC0FL) , (safe_mul_func_uint8_t_u_u(g_56.f5, (l_445[0] & ((*p_29) <= (safe_rshift_func_int8_t_s_s(p_32, (safe_lshift_func_int8_t_s_u(0x1AL, l_438)))))))))))) & 0x1D19L) > (*p_29));
                }
                else
                {
                    if (((**g_83) == (void*)0))
                    {
                        unsigned l_454 = 0x464ABD41L;
                        (*l_420) = (safe_lshift_func_int16_t_s_s((-8L), p_32));
                        l_454 = ((safe_sub_func_uint64_t_u_u(((*g_277) == &g_13), g_128.f1)) && (*p_29));
                        (*g_195) = l_445[0];
                    }
                    else
                    {
                        (*l_295) = ((safe_rshift_func_uint8_t_u_u((safe_add_func_uint32_t_u_u((p_32 <= 4UL), 4294967290UL)), 1)) , &l_437);

                        ;
                    }


                    return l_437;


                }
            }


        }
        else
        {
            const int l_465 = (-10L);
            struct S0 *l_466 = &g_128;
            if (((safe_rshift_func_uint16_t_u_s(((((((*l_420) < (0x901A2359L && (safe_sub_func_int64_t_s_s(p_30, p_32)))) && (safe_rshift_func_uint16_t_u_u(p_30, 11))) | g_56.f1) , ((l_465 != g_128.f6) , l_466)) == (void*)0), (*l_420))) != 0xF6BCL))
            {
                const unsigned long long l_472 = 0xC58894BF49D698AELL;
                (*l_420) = (((*l_420) , p_32) > (((g_467 , p_29) == (l_465 , ((safe_mod_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u(p_32, l_465)), l_472)) , &g_2))) > l_472));
                return (*l_420);
            }
            else
            {
                unsigned char l_473 = 255UL;
                l_473 = (*g_13);
                for (p_32 = (-9); (p_32 < 8); p_32 = safe_add_func_uint16_t_u_u(p_32, 9))
                {
                    int ***l_476 = (void*)0;
                    (*g_477) = (*g_277);
                }
            }
            return p_30;
        }


        (*l_295) = (*l_295);
    }


    for (l_372 = 0; (l_372 < 18); l_372 = safe_add_func_uint8_t_u_u(l_372, 9))
    {
        int l_488 = 0xCA02F0E0L;
        struct S0 *l_489 = &g_490;
        unsigned short l_497 = 0xFF42L;
        unsigned l_499 = 1UL;
        unsigned long long l_548 = 0UL;
        struct S0 ***l_550 = &l_530[2];
        union U1 *l_589[6] = {&g_12,&g_12,&g_12,&g_12,&g_12,&g_12};
        int i;
        (*l_295) = p_28;


        for (g_128.f7 = 0; (g_128.f7 != 37); ++g_128.f7)
        {
            unsigned l_486 = 0x0CC65EF9L;
            int **l_487[3];
            int i;
            for (i = 0; i < 3; i++)
                l_487[i] = &g_13;
            (*l_295) = p_29;


            for (g_56.f7 = 0; (g_56.f7 <= 5); g_56.f7 += 1)
            {
                int i;
                p_31 = p_28;


                l_486 = (*g_244);
                l_487[1] = l_487[1];
            }
            l_488 = (0x6B6392A8839D2C61LL || g_467.f3);
        }


        l_489 = (*g_84);

        ;
        for (g_61 = (-20); (g_61 < 18); g_61++)
        {
            unsigned l_528 = 0UL;
            struct S0 **l_529 = &g_57;
            int *l_531 = &g_74[1];
            union U1 l_545 = {65526UL};
            (*l_295) = p_31;


            if (((safe_rshift_func_int8_t_s_u(g_61, 0)) <= (safe_lshift_func_int8_t_s_u(p_30, ((***g_83) , l_497)))))
            {
                int l_524 = 0x372BFDE4L;
                p_28 = l_498;

                ;
                (*p_28) = ((g_74[7] != 0xC4L) >= p_32);
                if ((((**l_295) , g_56.f5) | l_499))
                {
                    (*l_498) = ((safe_add_func_int32_t_s_s((*p_28), (safe_lshift_func_int8_t_s_u((safe_add_func_uint8_t_u_u(g_490.f8, (safe_unary_minus_func_int8_t_s((safe_mod_func_uint16_t_u_u((0x2CF9C368L ^ (+((((((p_32 & (safe_add_func_uint32_t_u_u((p_32 != ((p_30 > ((safe_mul_func_int8_t_s_s(g_74[8], (g_56.f6 >= (g_2 <= p_30)))) >= 0xED17D936634F77C9LL)) & 0x99L)), 1UL))) & 0L) != (*l_498)) != (*p_31)) , 0L) || 0xE7118666125E4D65LL))), g_56.f0)))))), 1)))) > 0L);
                }
                else
                {
                    char l_527 = 0L;
                    (*l_498) = (safe_mod_func_uint32_t_u_u((safe_mul_func_int8_t_s_s(p_32, p_30)), ((g_519[1][0][1] , ((safe_mod_func_uint32_t_u_u(((safe_lshift_func_uint16_t_u_s((9UL < ((p_30 <= l_524) != (safe_lshift_func_int16_t_s_u(l_527, (*l_498))))), g_519[1][0][1].f7)) , l_528), l_528)) , l_527)) ^ (-1L))));
                    l_530[2] = l_529;
                    l_531 = p_29;


                }


                (*g_289) = (p_30 , (**g_178));
            }
            else
            {
                unsigned char l_532 = 255UL;
                int l_549 = 0L;
                (*l_531) = l_532;
                (*g_252) = l_497;
                l_549 = (safe_mod_func_uint32_t_u_u(((((safe_sub_func_uint64_t_u_u(((safe_mod_func_uint32_t_u_u((l_499 , (safe_mod_func_int64_t_s_s((g_467.f7 ^ (g_56.f5 <= (safe_lshift_func_uint16_t_u_u(g_74[7], (!(safe_lshift_func_uint16_t_u_s((l_545 , 0xE3D8L), 15))))))), p_32))), (safe_add_func_int64_t_s_s(l_548, (l_532 >= g_519[1][0][1].f5))))) , 18446744073709551609UL), l_532)) >= (*l_531)) , (-1L)) , 1UL), p_32));
                if ((&g_84 == l_550))
                {
                    for (g_128.f8 = 0; (g_128.f8 < 22); g_128.f8++)
                    {
                        int *l_553[6][10] = {{&g_2,&g_2,&g_74[2],&l_488,(void*)0,&l_488,&l_549,&l_488,(void*)0,&l_488},{&l_488,&l_373,&l_488,&l_488,(void*)0,&g_74[7],&l_549,&l_549,&g_74[7],(void*)0},{&g_74[2],&g_2,&g_2,&g_74[2],&l_488,(void*)0,&l_488,&l_549,&l_488,(void*)0},{&g_74[7],&g_74[4],&l_488,&g_74[4],&g_74[7],&l_549,&g_2,&l_488,&g_74[2],&l_549},{(void*)0,&l_549,&l_488,&l_488,&l_549,(void*)0,&g_74[4],&l_549,(void*)0,&l_549},{&g_2,&l_488,(void*)0,&g_74[2],(void*)0,&l_488,&g_2,&g_74[4],&l_373,&l_373}};
                        int i, j;
                        l_553[2][3] = &l_488;
                    }
                    if (l_549)
                        break;
                }
                else
                {
                    char l_570 = 0x0EL;
                    l_549 = (4L ^ (((safe_mod_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u(g_490.f0, 13)), 4)), (((((*l_531) , &l_295) != (void*)0) > (safe_lshift_func_int8_t_s_s(g_490.f8, (g_519[1][0][1].f9 >= (safe_unary_minus_func_uint8_t_u(p_32)))))) ^ ((l_550 == (void*)0) > g_61)))) != (-1L)) & 0x8F0CL));
                    for (g_490.f7 = 0; (g_490.f7 == 6); g_490.f7 = safe_add_func_uint16_t_u_u(g_490.f7, 3))
                    {
                        union U1 **l_567 = (void*)0;
                        int * const l_571 = &l_373;
                        int **l_572 = &l_419[2][3];
                        if ((*p_28))
                            break;
                        (*l_531) = (safe_add_func_uint8_t_u_u(p_30, (((void*)0 != l_567) == ((safe_add_func_int8_t_s_s((-3L), (((**g_83) == (g_56.f5 , (void*)0)) > g_56.f7))) <= (l_570 ^ (*p_31))))));
                        (*l_498) = 0x929FF10FL;
                        (*l_572) = l_571;
                    }
                    for (l_488 = 0; (l_488 > 2); ++l_488)
                    {
                        struct S0 ** const *l_590 = &l_530[2];
                        (*l_295) = (*l_295);
                        (*l_531) = (254UL & ((safe_lshift_func_uint16_t_u_u(((safe_rshift_func_int16_t_s_u(p_30, p_30)) < (g_56.f8 == (~((safe_sub_func_int32_t_s_s((**g_178), ((safe_lshift_func_int8_t_s_s((safe_rshift_func_int16_t_s_s((((g_585 == ((safe_mul_func_int8_t_s_s(g_61, ((&l_341 == l_589[2]) != 0x2B5D3AB3L))) , &g_586)) , l_590) != &g_84), p_32)), 7)) , (*g_13)))) || (*l_531))))), g_467.f0)) , g_519[1][0][1].f0));
                    }
                }
            }


            (*l_295) = p_28;


        }
    }





    return (*l_498);
}







static unsigned char func_37(int p_38)
{
    short l_54 = 0xE6BAL;
    unsigned char l_62 = 1UL;
    short l_264 = 0L;
    if ((func_42(func_46((safe_lshift_func_uint8_t_u_s(g_12.f0, 2)), (safe_mul_func_uint16_t_u_u((0xFBL ^ (p_38 , (p_38 ^ (p_38 && g_2)))), p_38)), l_54), l_62, &g_2) <= g_56.f0))
    {
        short l_248 = 0x4A28L;
        int l_249 = 1L;
        l_249 = (((+g_56.f1) | 0xA5CF373AL) | (p_38 >= l_248));
    }
    else
    {
        unsigned long long l_261 = 18446744073709551615UL;
        int **l_269 = &g_13;
        int ***l_272 = &g_271;
        int l_273 = 0xBDC58391L;
        for (g_56.f2 = 0; (g_56.f2 == 53); ++g_56.f2)
        {
            (*g_252) = p_38;
        }
        (*l_272) = ((safe_lshift_func_uint8_t_u_u((p_38 || (safe_mul_func_int8_t_s_s((safe_sub_func_int8_t_s_s((g_128.f2 , g_56.f7), (g_61 , (((safe_mul_func_uint16_t_u_u(0xA398L, l_261)) == p_38) , ((safe_mul_func_uint8_t_u_u(((~l_264) < (safe_rshift_func_int8_t_s_u((!((safe_sub_func_int8_t_s_s((p_38 ^ p_38), 0xA5L)) ^ p_38)), g_56.f9))), p_38)) > (*g_13)))))), p_38))), 2)) , l_269);

        ;
        l_273 = (***l_272);
    }

    ;
    ;
    ;
    ;
    return g_56.f5;
}







static char func_42(int * p_43, unsigned long long p_44, int * p_45)
{
    long long l_80 = 0x14F0912742E7FF2BLL;
    unsigned short l_107[5][5][6] = {{{0UL,1UL,65531UL,0xBCF7L,6UL,7UL},{65531UL,0xFC01L,65529UL,65532UL,6UL,65532UL},{65526UL,1UL,65526UL,0x17A8L,0x54C9L,65535UL},{65534UL,0x957FL,65526UL,7UL,65531UL,0xFF03L},{0xBCF7L,4UL,0x17A8L,7UL,1UL,0x17A8L}},{{65534UL,0x535AL,9UL,0x17A8L,0UL,65526UL},{65526UL,6UL,65534UL,65532UL,0x957FL,9UL},{65531UL,0xD328L,65534UL,0xBCF7L,0x535AL,65526UL},{0UL,0x7201L,9UL,0x2D83L,1UL,0x17A8L},{0x2D83L,1UL,0x17A8L,65534UL,9UL,0xFF03L}},{{65535UL,1UL,65526UL,65526UL,1UL,65535UL},{0x5585L,0x7201L,65526UL,0xD42CL,0x535AL,65532UL},{65526UL,0UL,6UL,65534UL,1UL,65529UL},{7UL,0xFC01L,65534UL,65535UL,1UL,0xD42CL},{0x17A8L,6UL,0x5585L,7UL,9UL,0x2D83L}},{{65532UL,1UL,65529UL,0xD42CL,4UL,0x2D83L},{0xBCF7L,1UL,0x5585L,0xBCF7L,0xD328L,0xD42CL},{0x2D83L,0x54C9L,65534UL,65531UL,0xFC01L,65529UL},{65534UL,4UL,6UL,9UL,0xFC01L,9UL},{65526UL,0x54C9L,65526UL,0UL,0xD328L,65532UL}},{{0xD42CL,1UL,7UL,65529UL,4UL,65526UL},{65531UL,1UL,0UL,65529UL,9UL,0UL},{0xD42CL,6UL,0xFF03L,0UL,1UL,65526UL},{65526UL,0xFC01L,0xD42CL,9UL,1UL,0xFF03L},{65534UL,0UL,0xD42CL,65531UL,6UL,65526UL}}};
    int l_129[9][1] = {{(-10L)},{0L},{0L},{(-10L)},{0L},{0L},{(-10L)},{0L},{0L}};
    int l_131 = (-1L);
    struct S0 **l_238[3];
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_238[i] = &g_57;
    for (g_61 = 0; (g_61 == 21); ++g_61)
    {
        int *l_65 = &g_61;
        int **l_66 = &l_65;
        (*l_66) = l_65;
        for (p_44 = 0; (p_44 != 40); p_44 = safe_add_func_int8_t_s_s(p_44, 8))
        {
            for (g_56.f7 = (-2); (g_56.f7 <= 22); g_56.f7++)
            {
                for (g_56.f2 = 12; (g_56.f2 >= 44); g_56.f2 = safe_add_func_int32_t_s_s(g_56.f2, 2))
                {
                    int *l_73 = &g_74[7];
                    (*l_73) = (*p_43);
                }
                if ((*p_43))
                    continue;
            }
            (*l_66) = &g_61;
            for (g_56.f8 = 0; (g_56.f8 >= 25); ++g_56.f8)
            {
                unsigned long long l_85 = 0x2630673EEFD7F9B6LL;
                if ((*p_45))
                {
                    if ((*g_60))
                        break;
                    if ((*g_60))
                        break;
                    for (g_56.f2 = 0; (g_56.f2 <= 24); g_56.f2 = safe_add_func_uint16_t_u_u(g_56.f2, 6))
                    {
                        l_80 = (safe_unary_minus_func_int8_t_s(((*g_57) , g_2)));
                        return p_44;
                    }
                    return (**l_66);
                }
                else
                {
                    for (g_56.f7 = 23; (g_56.f7 <= 32); g_56.f7++)
                    {
                        (*g_83) = &g_57;
                        return p_44;
                    }
                }
                return l_85;
            }
        }
    }
    (*g_60) = ((l_80 || p_44) > (g_56.f3 >= (safe_sub_func_uint8_t_u_u(0x9DL, ((safe_add_func_uint8_t_u_u(((*p_45) , (+p_44)), (safe_lshift_func_uint8_t_u_u((safe_sub_func_int32_t_s_s((*g_60), (&g_55 != (void*)0))), g_56.f5)))) >= 0x7D1DL)))));
    for (l_80 = 0; (l_80 < (-21)); --l_80)
    {
        int *l_96 = &g_74[4];
        union U1 l_112 = {65533UL};
        int l_144 = 7L;
        (*l_96) = (g_12.f0 ^ (g_56.f8 < (*p_45)));
        if (((safe_sub_func_uint32_t_u_u((g_56.f7 | (((safe_mul_func_int8_t_s_s(((l_80 & l_80) <= (safe_add_func_int8_t_s_s(((8L < l_80) == ((*l_96) >= (safe_mul_func_uint8_t_u_u(((safe_add_func_uint16_t_u_u(p_44, (g_74[6] , l_107[0][1][2]))) , (*l_96)), (*l_96))))), p_44))), g_56.f2)) == 4294967295UL) , (*l_96))), (*p_45))) & g_61))
        {
            return g_56.f2;
        }
        else
        {
            int **l_109[5];
            int ***l_108 = &l_109[0];
            int i;
            for (i = 0; i < 5; i++)
                l_109[i] = &g_13;
            (*l_108) = (l_80 , &p_45);


            for (g_61 = 8; (g_61 >= 0); g_61 -= 1)
            {
                int i;
                g_74[g_61] = g_74[g_61];
                (*l_96) = ((safe_sub_func_int16_t_s_s((-3L), (((l_112 , p_44) , &p_43) != (void*)0))) , (*g_60));
                for (g_56.f8 = 0; (g_56.f8 <= 8); g_56.f8 += 1)
                {
                    p_45 = ((safe_sub_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u((((safe_mul_func_uint32_t_u_u(g_56.f8, (0UL <= 0xC35819B7L))) & 0x7C56116C195823B3LL) & g_61), (p_44 , p_44))), (p_44 < (((((*l_96) != g_74[7]) , &g_13) == &p_43) <= 0x60L)))) , p_45);
                    for (l_112.f0 = 0; (l_112.f0 <= 8); l_112.f0 += 1)
                    {
                        int i;
                        g_74[g_56.f8] = ((*l_96) , (safe_lshift_func_uint16_t_u_s((*l_96), ((g_12 , &g_60) == &g_60))));
                        g_60 = p_43;

                        ;
                        (*l_96) = 0L;
                        g_60 = p_45;


                    }
                }
            }


            if ((*g_60))
            {
                int * volatile *l_123 = &g_60;
                int * volatile **l_122 = &l_123;
                (*l_96) = (***l_108);
                g_60 = l_96;

                ;
                (*l_122) = &g_60;
            }
            else
            {
                for (g_61 = 0; (g_61 <= 22); ++g_61)
                {
                    l_96 = p_45;


                }


            }


            for (p_44 = 0; (p_44 <= 4); p_44 += 1)
            {
                unsigned long long l_142 = 0UL;
                for (g_56.f7 = 0; (g_56.f7 <= 4); g_56.f7 += 1)
                {
                    int i, j, k;
                    p_43 = &g_61;

                    ;
                    (*p_43) = ((safe_mod_func_uint16_t_u_u((+(~(0L & (g_128 , 0UL)))), (l_107[g_56.f7][g_56.f7][g_56.f7] || (*l_96)))) , (*p_43));
                }
                for (g_128.f8 = 1; (g_128.f8 <= 4); g_128.f8 += 1)
                {
                    unsigned l_143[5] = {1UL,1UL,1UL,1UL,1UL};
                    int i;
                    for (g_56.f2 = 0; (g_56.f2 <= 4); g_56.f2 += 1)
                    {
                        return g_128.f8;
                    }
                    for (g_56.f7 = 1; (g_56.f7 <= 4); g_56.f7 += 1)
                    {
                        int *l_130 = &g_74[4];
                        l_129[6][0] = (*p_45);
                        l_130 = p_45;


                        l_131 = (*l_130);
                        l_144 = (((+p_44) != (((*l_130) | g_128.f7) <= (safe_add_func_uint16_t_u_u(1UL, p_44)))) | ((safe_lshift_func_int16_t_s_s((((*g_13) > (p_44 || (safe_sub_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_u(5UL, l_142)) , 65533UL), l_143[4])))) >= l_142), 0)) != 0UL));
                    }
                }
            }

            ;
        }


        ;

        return g_128.f8;
    }
    for (g_128.f8 = 4; (g_128.f8 < 57); g_128.f8 = safe_add_func_uint16_t_u_u(g_128.f8, 5))
    {
        unsigned long long l_149 = 0xC0C16224620E0A40LL;
        struct S0 **l_245 = &g_57;
        struct S0 ***l_246[6];
        struct S0 **l_247 = &g_57;
        int i;
        for (i = 0; i < 6; i++)
            l_246[i] = &l_238[2];
        for (l_80 = (-20); (l_80 <= 2); l_80 = safe_add_func_int32_t_s_s(l_80, 9))
        {
            unsigned l_170 = 4294967294UL;
            int l_191 = 0L;
            int **l_225 = &g_13;
            int ***l_224 = &l_225;
            struct S0 **l_237 = &g_57;
            if (l_149)
            {
                for (g_56.f8 = 0; (g_56.f8 >= 8); g_56.f8++)
                {
                    unsigned short l_171 = 1UL;
                    for (l_131 = 4; (l_131 >= 1); l_131 -= 1)
                    {
                        int *l_153 = (void*)0;
                        int **l_152 = &l_153;
                        struct S0 *l_160 = (void*)0;
                        int i, j, k;
                        (*l_152) = (void*)0;
                        if (l_107[l_131][l_131][(l_131 + 1)])
                            break;
                        if (l_107[l_131][l_131][(l_131 + 1)])
                            continue;
                        l_171 = (safe_mul_func_uint8_t_u_u((safe_mod_func_int64_t_s_s((safe_mod_func_int64_t_s_s(g_56.f2, 0xBF6FAEDB3878E06ALL)), (((4UL != ((l_160 == (void*)0) , ((0xD9L | ((safe_mul_func_uint8_t_u_u(p_44, p_44)) >= (((safe_add_func_uint32_t_u_u((safe_unary_minus_func_int8_t_s((safe_mul_func_uint16_t_u_u(p_44, l_170)))), (*g_13))) , &p_45) == &p_43))) >= 0x326A3C1AL))) | 1UL) , p_44))), p_44));
                    }
                }
            }
            else
            {
                return l_149;
            }
            for (l_131 = 0; (l_131 != (-20)); l_131 = safe_sub_func_uint32_t_u_u(l_131, 2))
            {
                unsigned l_232 = 0xDCAB47AAL;
                int ***l_243 = (void*)0;
                for (l_170 = 0; (l_170 >= 39); l_170++)
                {
                    unsigned l_192 = 18446744073709551615UL;
                    for (g_61 = 0; (g_61 > (-20)); --g_61)
                    {
                        int **l_180 = &g_179;
                        int *l_190[1][10][9] = {{{&l_131,(void*)0,(void*)0,&l_131,&g_61,&g_2,&g_61,(void*)0,&l_129[5][0]},{(void*)0,&l_131,&g_74[3],&g_74[7],&l_131,&g_74[7],(void*)0,(void*)0,&g_74[7]},{&g_61,(void*)0,&g_61,(void*)0,&g_61,(void*)0,&l_131,&g_74[3],&g_74[7]},{&g_61,&g_2,&g_61,(void*)0,&l_129[5][0],&l_131,(void*)0,&l_129[6][0],(void*)0},{(void*)0,(void*)0,&l_129[5][0],&l_129[5][0],(void*)0,(void*)0,&l_131,&g_61,&g_74[7]},{&g_61,(void*)0,&l_129[6][0],&l_129[5][0],(void*)0,&g_74[7],&l_129[5][0],(void*)0,(void*)0},{&l_131,&g_2,&g_74[7],&g_74[3],&g_74[7],&g_2,&l_131,&l_129[5][0],&l_129[6][0]},{&l_131,(void*)0,&g_74[7],&l_131,&g_74[3],&g_61,(void*)0,&g_2,(void*)0},{&l_129[5][0],&l_131,&l_129[6][0],&g_2,&g_2,&l_129[6][0],&l_131,&l_129[5][0],&l_131},{&g_74[7],&g_74[7],&l_129[5][0],&g_2,&g_61,&l_131,(void*)0,(void*)0,&g_61}}};
                        int i, j, k;
                        (*g_178) = &l_131;

                        ;
                        (*l_180) = (void*)0;

                        ;
                        l_191 = ((safe_rshift_func_uint8_t_u_u(((safe_sub_func_int32_t_s_s((safe_rshift_func_uint16_t_u_s((safe_mul_func_uint16_t_u_u(g_56.f8, ((*g_13) & (*p_45)))), ((*g_83) != &g_55))), (*p_45))) , ((g_128.f2 < (0x13L | g_128.f3)) , p_44)), 6)) < 0x3B790C2EL);
                        if (l_192)
                            continue;
                    }
                    for (g_56.f7 = (-19); (g_56.f7 == 42); g_56.f7 = safe_add_func_uint64_t_u_u(g_56.f7, 9))
                    {
                        (*g_195) = (*p_45);
                    }
                }
                for (l_191 = (-7); (l_191 < (-5)); l_191 = safe_add_func_uint64_t_u_u(l_191, 3))
                {
                    return g_56.f3;
                }
                for (g_56.f8 = 0; (g_56.f8 >= 13); g_56.f8 = safe_add_func_int32_t_s_s(g_56.f8, 8))
                {
                    const unsigned l_216 = 1UL;
                    int *l_217 = &g_74[7];
                    int **l_223 = &l_217;
                    int ***l_222[10][10][2] = {{{&l_223,&l_223},{(void*)0,&l_223},{&l_223,(void*)0},{(void*)0,&l_223},{(void*)0,&l_223},{&l_223,&l_223},{&l_223,&l_223},{(void*)0,(void*)0},{&l_223,&l_223},{&l_223,&l_223}},{{&l_223,&l_223},{&l_223,&l_223},{(void*)0,&l_223},{(void*)0,&l_223},{&l_223,&l_223},{&l_223,&l_223},{&l_223,&l_223},{&l_223,(void*)0},{(void*)0,&l_223},{&l_223,&l_223}},{{&l_223,&l_223},{&l_223,&l_223},{(void*)0,(void*)0},{&l_223,&l_223},{&l_223,&l_223},{&l_223,&l_223},{&l_223,&l_223},{(void*)0,&l_223},{(void*)0,&l_223},{&l_223,&l_223}},{{&l_223,&l_223},{&l_223,&l_223},{&l_223,(void*)0},{(void*)0,&l_223},{&l_223,&l_223},{&l_223,&l_223},{&l_223,&l_223},{(void*)0,(void*)0},{&l_223,&l_223},{&l_223,&l_223}},{{&l_223,&l_223},{&l_223,&l_223},{(void*)0,&l_223},{(void*)0,&l_223},{&l_223,&l_223},{&l_223,&l_223},{&l_223,&l_223},{&l_223,(void*)0},{(void*)0,&l_223},{&l_223,&l_223}},{{&l_223,&l_223},{&l_223,&l_223},{(void*)0,&l_223},{(void*)0,&l_223},{&l_223,&l_223},{&l_223,&l_223},{&l_223,&l_223},{&l_223,(void*)0},{&l_223,&l_223},{&l_223,&l_223}},{{&l_223,&l_223},{&l_223,&l_223},{(void*)0,&l_223},{&l_223,&l_223},{&l_223,&l_223},{&l_223,&l_223},{&l_223,&l_223},{&l_223,&l_223},{(void*)0,&l_223},{&l_223,&l_223}},{{&l_223,&l_223},{&l_223,&l_223},{&l_223,(void*)0},{&l_223,&l_223},{&l_223,&l_223},{&l_223,&l_223},{&l_223,&l_223},{(void*)0,&l_223},{&l_223,&l_223},{&l_223,&l_223}},{{&l_223,&l_223},{&l_223,&l_223},{&l_223,&l_223},{(void*)0,&l_223},{&l_223,&l_223},{&l_223,&l_223},{&l_223,&l_223},{&l_223,(void*)0},{&l_223,&l_223},{&l_223,&l_223}},{{&l_223,&l_223},{&l_223,&l_223},{(void*)0,&l_223},{&l_223,&l_223},{&l_223,&l_223},{&l_223,&l_223},{&l_223,&l_223},{&l_223,&l_223},{(void*)0,&l_223},{&l_223,&l_223}}};
                    char l_226[8][6][1] = {{{(-6L)},{0x8EL},{0xDBL},{0L},{(-6L)},{0L}},{{(-6L)},{0L},{0xDBL},{0x8EL},{(-6L)},{6L}},{{(-6L)},{0x8EL},{0xDBL},{0L},{(-6L)},{0L}},{{(-6L)},{0L},{0xDBL},{0x8EL},{(-6L)},{6L}},{{(-6L)},{0x8EL},{0xDBL},{0L},{(-6L)},{0L}},{{(-6L)},{0L},{0xDBL},{0x8EL},{(-6L)},{6L}},{{(-6L)},{0x8EL},{0xDBL},{0L},{(-6L)},{0L}},{{(-6L)},{0L},{0xDBL},{0x8EL},{(-6L)},{6L}}};
                    int i, j, k;
                    (*l_217) = ((safe_rshift_func_uint8_t_u_u(((((g_128.f5 < ((safe_mul_func_uint16_t_u_u(p_44, (safe_lshift_func_uint8_t_u_u(l_191, ((*p_45) > (safe_sub_func_uint64_t_u_u((((((~(safe_mod_func_int16_t_s_s(((safe_add_func_int64_t_s_s(((g_56.f5 <= p_44) & 3L), (((safe_mod_func_int16_t_s_s(p_44, (safe_mod_func_uint32_t_u_u(((g_128.f7 < l_170) != 8UL), l_149)))) , (void*)0) == (*g_83)))) || 0x686FL), g_128.f3))) & 0UL) , 0x3064C4D074B32EECLL) < g_74[7]) != l_216), 18446744073709551615UL))))))) > p_44)) <= g_56.f5) || g_56.f0) , g_56.f4), l_216)) == p_44);
                    (**l_223) = (safe_add_func_uint16_t_u_u((safe_add_func_int16_t_s_s(((*l_217) ^ 0xDD4508A8L), g_56.f0)), (((*g_83) == (((((+(g_56.f8 < (l_170 | (!((((l_222[9][7][1] != (((((g_56.f0 != g_128.f8) > (*p_45)) ^ l_170) ^ l_170) , l_224)) , g_128.f7) >= 0x30L) , p_44))))) ^ g_56.f0) & l_226[7][0][0]) | 0x48DAA51747AB6034LL) , (void*)0)) != (-1L))));
                    for (l_170 = (-12); (l_170 > 16); l_170++)
                    {
                        unsigned short l_231 = 0xF8D0L;
                        (*l_223) = func_46(l_149, p_44, p_44);

                        ;
                        ;
                        (*g_178) = func_46((safe_sub_func_int32_t_s_s(((*l_217) & p_44), 0x92DE4622L)), l_231, (((l_232 == (safe_mul_func_int16_t_s_s(g_128.f1, (((g_56.f0 >= (safe_mod_func_int32_t_s_s((((l_237 == l_238[1]) <= g_128.f0) < 0xAB41L), l_231))) & g_128.f7) | l_149)))) >= 0xED16D686L) , 0x10D9L));

                        ;
                    }

                    ;
                }
                p_43 = func_46((safe_add_func_int32_t_s_s((*p_43), (0x05L && (safe_mul_func_int8_t_s_s(l_131, ((***l_224) ^ g_74[6])))))), ((g_74[6] & g_128.f8) != (((l_243 == &g_178) || 0x2072C5E5L) <= 0x66E7C3D4A470AD43LL)), l_149);

                ;
                ;
            }
            if ((*p_43))
                break;
            if ((*p_43))
                break;
        }
        (*g_244) = l_149;
        l_247 = l_245;
    }
    return g_12.f0;
}







static int * func_46(int p_47, unsigned long long p_48, unsigned short p_49)
{
    int *l_59 = &g_2;
    int **l_58 = &l_59;
    g_57 = g_55;

    ;
    (*l_58) = &g_2;
    (*g_60) = (*g_13);
    return &g_2;


}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_12.f0, "g_12.f0", print_hash_value);
    transparent_crc(g_56.f0, "g_56.f0", print_hash_value);
    transparent_crc(g_56.f1, "g_56.f1", print_hash_value);
    transparent_crc(g_56.f2, "g_56.f2", print_hash_value);
    transparent_crc(g_56.f3, "g_56.f3", print_hash_value);
    transparent_crc(g_56.f4, "g_56.f4", print_hash_value);
    transparent_crc(g_56.f5, "g_56.f5", print_hash_value);
    transparent_crc(g_56.f6, "g_56.f6", print_hash_value);
    transparent_crc(g_56.f7, "g_56.f7", print_hash_value);
    transparent_crc(g_56.f8, "g_56.f8", print_hash_value);
    transparent_crc(g_56.f9, "g_56.f9", print_hash_value);
    transparent_crc(g_61, "g_61", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_74[i], "g_74[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_128.f0, "g_128.f0", print_hash_value);
    transparent_crc(g_128.f1, "g_128.f1", print_hash_value);
    transparent_crc(g_128.f2, "g_128.f2", print_hash_value);
    transparent_crc(g_128.f3, "g_128.f3", print_hash_value);
    transparent_crc(g_128.f4, "g_128.f4", print_hash_value);
    transparent_crc(g_128.f5, "g_128.f5", print_hash_value);
    transparent_crc(g_128.f6, "g_128.f6", print_hash_value);
    transparent_crc(g_128.f7, "g_128.f7", print_hash_value);
    transparent_crc(g_128.f8, "g_128.f8", print_hash_value);
    transparent_crc(g_128.f9, "g_128.f9", print_hash_value);
    transparent_crc(g_467.f0, "g_467.f0", print_hash_value);
    transparent_crc(g_467.f1, "g_467.f1", print_hash_value);
    transparent_crc(g_467.f2, "g_467.f2", print_hash_value);
    transparent_crc(g_467.f3, "g_467.f3", print_hash_value);
    transparent_crc(g_467.f4, "g_467.f4", print_hash_value);
    transparent_crc(g_467.f5, "g_467.f5", print_hash_value);
    transparent_crc(g_467.f6, "g_467.f6", print_hash_value);
    transparent_crc(g_467.f7, "g_467.f7", print_hash_value);
    transparent_crc(g_467.f8, "g_467.f8", print_hash_value);
    transparent_crc(g_467.f9, "g_467.f9", print_hash_value);
    transparent_crc(g_490.f0, "g_490.f0", print_hash_value);
    transparent_crc(g_490.f1, "g_490.f1", print_hash_value);
    transparent_crc(g_490.f2, "g_490.f2", print_hash_value);
    transparent_crc(g_490.f3, "g_490.f3", print_hash_value);
    transparent_crc(g_490.f4, "g_490.f4", print_hash_value);
    transparent_crc(g_490.f5, "g_490.f5", print_hash_value);
    transparent_crc(g_490.f6, "g_490.f6", print_hash_value);
    transparent_crc(g_490.f7, "g_490.f7", print_hash_value);
    transparent_crc(g_490.f8, "g_490.f8", print_hash_value);
    transparent_crc(g_490.f9, "g_490.f9", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_519[i][j][k].f0, "g_519[i][j][k].f0", print_hash_value);
                transparent_crc(g_519[i][j][k].f1, "g_519[i][j][k].f1", print_hash_value);
                transparent_crc(g_519[i][j][k].f2, "g_519[i][j][k].f2", print_hash_value);
                transparent_crc(g_519[i][j][k].f3, "g_519[i][j][k].f3", print_hash_value);
                transparent_crc(g_519[i][j][k].f4, "g_519[i][j][k].f4", print_hash_value);
                transparent_crc(g_519[i][j][k].f5, "g_519[i][j][k].f5", print_hash_value);
                transparent_crc(g_519[i][j][k].f6, "g_519[i][j][k].f6", print_hash_value);
                transparent_crc(g_519[i][j][k].f7, "g_519[i][j][k].f7", print_hash_value);
                transparent_crc(g_519[i][j][k].f8, "g_519[i][j][k].f8", print_hash_value);
                transparent_crc(g_519[i][j][k].f9, "g_519[i][j][k].f9", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_725.f0, "g_725.f0", print_hash_value);
    transparent_crc(g_725.f1, "g_725.f1", print_hash_value);
    transparent_crc(g_725.f2, "g_725.f2", print_hash_value);
    transparent_crc(g_725.f3, "g_725.f3", print_hash_value);
    transparent_crc(g_725.f4, "g_725.f4", print_hash_value);
    transparent_crc(g_725.f5, "g_725.f5", print_hash_value);
    transparent_crc(g_725.f6, "g_725.f6", print_hash_value);
    transparent_crc(g_725.f7, "g_725.f7", print_hash_value);
    transparent_crc(g_725.f8, "g_725.f8", print_hash_value);
    transparent_crc(g_725.f9, "g_725.f9", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_746[i], "g_746[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_797.f0, "g_797.f0", print_hash_value);
    transparent_crc(g_797.f1, "g_797.f1", print_hash_value);
    transparent_crc(g_797.f2, "g_797.f2", print_hash_value);
    transparent_crc(g_797.f3, "g_797.f3", print_hash_value);
    transparent_crc(g_797.f4, "g_797.f4", print_hash_value);
    transparent_crc(g_797.f5, "g_797.f5", print_hash_value);
    transparent_crc(g_797.f6, "g_797.f6", print_hash_value);
    transparent_crc(g_797.f7, "g_797.f7", print_hash_value);
    transparent_crc(g_797.f8, "g_797.f8", print_hash_value);
    transparent_crc(g_797.f9, "g_797.f9", print_hash_value);
    transparent_crc(g_910, "g_910", print_hash_value);
    transparent_crc(g_911.f0, "g_911.f0", print_hash_value);
    transparent_crc(g_911.f1, "g_911.f1", print_hash_value);
    transparent_crc(g_911.f2, "g_911.f2", print_hash_value);
    transparent_crc(g_911.f3, "g_911.f3", print_hash_value);
    transparent_crc(g_911.f4, "g_911.f4", print_hash_value);
    transparent_crc(g_911.f5, "g_911.f5", print_hash_value);
    transparent_crc(g_911.f6, "g_911.f6", print_hash_value);
    transparent_crc(g_911.f7, "g_911.f7", print_hash_value);
    transparent_crc(g_911.f8, "g_911.f8", print_hash_value);
    transparent_crc(g_911.f9, "g_911.f9", print_hash_value);
    transparent_crc(g_986.f0, "g_986.f0", print_hash_value);
    transparent_crc(g_986.f1, "g_986.f1", print_hash_value);
    transparent_crc(g_986.f2, "g_986.f2", print_hash_value);
    transparent_crc(g_986.f3, "g_986.f3", print_hash_value);
    transparent_crc(g_986.f4, "g_986.f4", print_hash_value);
    transparent_crc(g_986.f5, "g_986.f5", print_hash_value);
    transparent_crc(g_986.f6, "g_986.f6", print_hash_value);
    transparent_crc(g_986.f7, "g_986.f7", print_hash_value);
    transparent_crc(g_986.f8, "g_986.f8", print_hash_value);
    transparent_crc(g_986.f9, "g_986.f9", print_hash_value);
    transparent_crc(g_992, "g_992", print_hash_value);
    transparent_crc(g_1041.f0, "g_1041.f0", print_hash_value);
    transparent_crc(g_1041.f1, "g_1041.f1", print_hash_value);
    transparent_crc(g_1041.f2, "g_1041.f2", print_hash_value);
    transparent_crc(g_1041.f3, "g_1041.f3", print_hash_value);
    transparent_crc(g_1041.f4, "g_1041.f4", print_hash_value);
    transparent_crc(g_1041.f5, "g_1041.f5", print_hash_value);
    transparent_crc(g_1041.f6, "g_1041.f6", print_hash_value);
    transparent_crc(g_1041.f7, "g_1041.f7", print_hash_value);
    transparent_crc(g_1041.f8, "g_1041.f8", print_hash_value);
    transparent_crc(g_1041.f9, "g_1041.f9", print_hash_value);
    transparent_crc(g_1219, "g_1219", print_hash_value);
    transparent_crc(g_1233.f0, "g_1233.f0", print_hash_value);
    transparent_crc(g_1233.f1, "g_1233.f1", print_hash_value);
    transparent_crc(g_1233.f2, "g_1233.f2", print_hash_value);
    transparent_crc(g_1233.f3, "g_1233.f3", print_hash_value);
    transparent_crc(g_1233.f4, "g_1233.f4", print_hash_value);
    transparent_crc(g_1233.f5, "g_1233.f5", print_hash_value);
    transparent_crc(g_1233.f6, "g_1233.f6", print_hash_value);
    transparent_crc(g_1233.f7, "g_1233.f7", print_hash_value);
    transparent_crc(g_1233.f8, "g_1233.f8", print_hash_value);
    transparent_crc(g_1233.f9, "g_1233.f9", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(g_1248[i][j].f0, "g_1248[i][j].f0", print_hash_value);
            transparent_crc(g_1248[i][j].f1, "g_1248[i][j].f1", print_hash_value);
            transparent_crc(g_1248[i][j].f2, "g_1248[i][j].f2", print_hash_value);
            transparent_crc(g_1248[i][j].f3, "g_1248[i][j].f3", print_hash_value);
            transparent_crc(g_1248[i][j].f4, "g_1248[i][j].f4", print_hash_value);
            transparent_crc(g_1248[i][j].f5, "g_1248[i][j].f5", print_hash_value);
            transparent_crc(g_1248[i][j].f6, "g_1248[i][j].f6", print_hash_value);
            transparent_crc(g_1248[i][j].f7, "g_1248[i][j].f7", print_hash_value);
            transparent_crc(g_1248[i][j].f8, "g_1248[i][j].f8", print_hash_value);
            transparent_crc(g_1248[i][j].f9, "g_1248[i][j].f9", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_1308, "g_1308", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_1399[i].f0, "g_1399[i].f0", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1434, "g_1434", print_hash_value);
    transparent_crc(g_1456, "g_1456", print_hash_value);
    transparent_crc(g_1477, "g_1477", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
