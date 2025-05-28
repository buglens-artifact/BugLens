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
   unsigned long long f0;
   volatile int f1;
   unsigned long long f2;
   volatile unsigned f3;
   char f4;
   int f5;
   short f6;
   volatile short f7;
};


static volatile int g_2 = 0xB0E446DFL;
static int g_3 = 0x45DB34E6L;
static int g_16 = 0x46B8D963L;
static int *g_62 = &g_16;
static int **g_61 = &g_62;
static volatile struct S0 g_78 = {18446744073709551615UL,0x668F781BL,1UL,2UL,0L,0xCE519C81L,0x9349L,0L};
static struct S0 g_103 = {18446744073709551606UL,0x946A2B7FL,0xA40B10513B6624E9LL,0xFA9F1E56L,0L,0x82010857L,4L,0x3072L};
static volatile struct S0 g_117 = {0x9215A14429F1C2FFLL,-1L,18446744073709551611UL,8UL,0L,0x127D3B87L,0x0396L,0x9DBCL};
static volatile struct S0 g_118 = {0UL,0x514EF7FEL,0UL,0x17D14272L,0xC0L,5L,0x2B5DL,0x6640L};
static struct S0 g_120 = {5UL,0x9B0BCF61L,0x66E2C43C23CF8C3DLL,0xD0BAEE16L,4L,1L,-1L,0x36DAL};
static volatile struct S0 g_157 = {18446744073709551615UL,0x02FAEDEBL,0xED2A1A5AB319EDEBLL,0x4D12FDF6L,0xDFL,0L,0x1CDEL,0L};
static struct S0 g_159 = {18446744073709551615UL,-10L,0x7566D79C76D5E060LL,0UL,0x95L,0L,0x3C1BL,0L};
static struct S0 *g_161 = (void*)0;
static struct S0 **g_160 = &g_161;
static struct S0 g_164 = {0x8A7DDC295C5011C8LL,0x0DCB6084L,0UL,0xE2858D32L,0x65L,0x1E43403CL,7L,0x6B0EL};
static struct S0 g_215 = {0x450267AAC2503615LL,0L,18446744073709551612UL,1UL,0x74L,0xD0AB60F1L,-9L,6L};
static volatile struct S0 g_220 = {1UL,-1L,0UL,18446744073709551615UL,-3L,0x34E6FD65L,0x5289L,0x9514L};
static struct S0 g_246 = {1UL,0x826EAED4L,0xD8C49E0325EEF5AALL,0x8B3A1682L,-4L,-10L,-8L,-1L};
static struct S0 g_270 = {0UL,0xA3D8A235L,0x207944348006E1E5LL,1UL,0xC1L,0xCD837A46L,1L,-3L};
static struct S0 g_277 = {0UL,-1L,18446744073709551615UL,6UL,0x30L,0xDAC9BB0EL,0x0E9CL,0xFF43L};
static struct S0 g_341 = {0x7DBE32C00E36DE2CLL,-4L,18446744073709551615UL,0xA4BD3031L,-7L,0x0B242C87L,0x62FDL,0xAF3AL};
static struct S0 g_342 = {0UL,0x53BEDF84L,0x7907BC61F652B751LL,0xC9E225EAL,2L,0L,0xC527L,0x5E7EL};
static struct S0 g_343 = {0x0AA76A31EEF8D0AELL,-9L,1UL,0UL,0x3BL,1L,-1L,-1L};
static struct S0 g_380 = {0xD6E4B812A76508F8LL,1L,0xE0DB1E4F117ED82ELL,18446744073709551615UL,1L,-4L,0xA1E2L,3L};
static long long g_387 = 1L;
static volatile struct S0 g_395 = {0x8C272DE33B3EC210LL,0x813479EBL,0xA091661B09A1C742LL,18446744073709551614UL,-1L,0x8F0860BCL,-1L,-1L};
static struct S0 g_399 = {0x6E2DEAE43791DF9ALL,0x5E7923DDL,0UL,18446744073709551615UL,1L,0x9EA72F12L,0x887EL,0x79B1L};



static short func_1(void);
static int * func_6(int * p_7, int * p_8, int * p_9);
static unsigned func_11(int * p_12);
static char func_23(int ** p_24, unsigned long long p_25, long long p_26);
static int ** func_27(char p_28, char p_29);
static char func_30(int ** p_31, int ** p_32, int p_33, int ** p_34, int p_35);
static long long func_37(int p_38, char p_39);
static long long func_46(int * p_47, unsigned short p_48, unsigned long long p_49, int * p_50, int p_51);
static int func_57(int ** p_58, int ** p_59, int * p_60);
static int ** func_63(unsigned p_64, char p_65);
static short func_1(void)
{
    int *l_398 = &g_159.f5;
    for (g_3 = (-18); (g_3 < (-11)); ++g_3)
    {
        unsigned char l_10 = 0xB7L;
        struct S0 *l_400 = &g_380;
        (*g_61) = func_6((((l_10 ^ func_11(&g_3)) , (safe_lshift_func_int8_t_s_u((g_341.f7 >= 0xFCDBL), 0))) , (*g_61)), (*g_61), l_398);
        (*l_400) = (l_10 , g_399);
        (*l_400) = (((void*)0 != (*g_61)) , (*l_400));
    }
    for (g_343.f5 = 9; (g_343.f5 >= (-8)); g_343.f5--)
    {
        int *l_403 = &g_277.f5;
        int *l_404 = &g_159.f5;
        (*g_61) = func_6(l_403, func_6(func_6((*g_61), (((&l_398 == &l_403) <= 3L) , (*g_61)), l_403), l_403, l_398), l_404);
        (**g_61) = (**g_61);
        if ((**g_61))
            break;
    }
    for (g_399.f5 = 4; (g_399.f5 < (-13)); g_399.f5 = safe_sub_func_uint32_t_u_u(g_399.f5, 3))
    {
        (*g_61) = func_6((*g_61), (*g_61), ((0xAFL & (((g_270.f7 & (*l_398)) ^ ((g_380.f4 , 0x13135EF4L) , (g_270.f6 || g_380.f6))) && g_78.f0)) , l_398));
        (**g_61) = (**g_61);
    }
    return g_399.f1;
}







static int * func_6(int * p_7, int * p_8, int * p_9)
{
    (*g_61) = (*g_61);
    return p_8;
}







static unsigned func_11(int * p_12)
{
    volatile int *l_13 = &g_2;
    int *l_15 = &g_3;
    int **l_14 = &l_15;
    int l_367 = (-7L);
    struct S0 ***l_369 = &g_160;
    (*l_13) = g_2;
    (*l_14) = (void*)0;
    for (g_16 = (-26); (g_16 <= (-25)); g_16 = safe_add_func_uint64_t_u_u(g_16, 9))
    {
        int **l_36 = &l_15;
        int l_368 = 0x146B0D7DL;
    }
    for (g_215.f5 = 2; (g_215.f5 <= 22); g_215.f5++)
    {
        struct S0 ***l_388 = &g_160;
        int l_389 = 1L;
        struct S0 *l_394 = &g_342;
        (*l_13) = (safe_sub_func_uint8_t_u_u(((*p_12) | (safe_mod_func_int16_t_s_s((((g_387 , l_388) != &g_160) == l_389), 0x6956L))), (((safe_sub_func_int8_t_s_s((*l_13), ((l_389 <= (((safe_sub_func_uint16_t_u_u(l_389, g_341.f5)) && g_380.f0) == 0xFEL)) == 0xA0CEEA60L))) , g_246.f2) < g_215.f4)));
        (*l_394) = g_159;
        (*l_394) = (*l_394);
        (*l_394) = g_395;
    }
    return g_103.f7;
}







static char func_23(int ** p_24, unsigned long long p_25, long long p_26)
{
    struct S0 **l_310 = (void*)0;
    int l_311 = 0xBF411E99L;
    if (((void*)0 != l_310))
    {
        struct S0 *l_314 = &g_159;
        if (l_311)
        {
            unsigned long long l_317 = 0xD8B81C6B790A924BLL;
            long long l_320 = 0xB43B178A9D31F01ELL;
            int *l_321 = (void*)0;
            int *l_322 = (void*)0;
            int *l_323 = (void*)0;
            int *l_324 = &g_120.f5;
            (*l_324) = (safe_lshift_func_uint8_t_u_s(((((0xC6B0E95291765340LL | (((((l_314 == ((**g_160) , (*g_160))) <= p_25) >= (p_25 <= (safe_lshift_func_uint16_t_u_u(l_311, (((l_317 <= ((safe_add_func_int8_t_s_s(p_25, 0xBBL)) , p_25)) == g_103.f0) , 0x38C1L))))) && l_320) , g_159.f0)) || 0xB2BD2A3ABB0B635DLL) != 0xFFL) >= g_215.f5), 6));
            return g_277.f3;
        }
        else
        {
            int *l_325 = &g_3;
            (*p_24) = l_325;
        }
        (*g_61) = (*p_24);
        (*l_314) = (*g_161);
    }
    else
    {
        (*g_61) = &l_311;
    }
    if ((**g_61))
    {
        (*p_24) = (*p_24);
    }
    else
    {
        struct S0 *l_326 = &g_270;
        (*g_61) = &l_311;
        (*g_160) = l_326;
        (*g_61) = (*g_61);
    }
    for (g_103.f0 = 0; (g_103.f0 != 4); g_103.f0 = safe_add_func_uint16_t_u_u(g_103.f0, 1))
    {
        int *l_329 = &g_164.f5;
        unsigned l_363 = 0x7458CF2BL;
    }
    for (g_246.f2 = 0; (g_246.f2 != 56); ++g_246.f2)
    {
        (*g_160) = (void*)0;
    }
    return g_2;
}







static int ** func_27(char p_28, char p_29)
{
    int **l_309 = &g_62;
    for (g_164.f6 = 0; (g_164.f6 <= (-16)); g_164.f6--)
    {
        for (g_215.f6 = (-28); (g_215.f6 == 14); ++g_215.f6)
        {
            for (g_277.f2 = 0; (g_277.f2 == 25); g_277.f2 = safe_add_func_uint16_t_u_u(g_277.f2, 3))
            {
                (*g_61) = (*g_61);
            }
        }
    }
    return l_309;
}







static char func_30(int ** p_31, int ** p_32, int p_33, int ** p_34, int p_35)
{
    int *l_52 = (void*)0;
    unsigned long long l_163 = 1UL;
    long long l_217 = 1L;
    int l_223 = (-1L);
    int l_253 = 0x0B4551D6L;
    unsigned l_296 = 1UL;
    if ((((func_37((safe_rshift_func_uint8_t_u_u(((&g_3 == (void*)0) <= ((((safe_rshift_func_uint8_t_u_u((safe_add_func_int64_t_s_s(func_46(l_52, g_3, ((safe_mod_func_uint32_t_u_u(((safe_rshift_func_int8_t_s_u(((func_57(g_61, func_63(p_33, (p_35 , g_3)), l_52) , &l_52) == (void*)0), 0)) , g_120.f5), 0xCFBF85D4L)) <= l_163), (*p_34), g_103.f6), p_33)), p_35)) && p_33) , p_35) >= 0xF019L)), 7)), p_33) == g_16) , l_163) >= g_159.f5))
    {
        short l_180 = 0xAA91L;
        int *l_189 = &g_3;
        int *l_194 = &g_103.f5;
        int *l_255 = &g_16;
        for (g_120.f6 = 0; (g_120.f6 < (-16)); g_120.f6--)
        {
            long long l_181 = 0x0F463211C853B706LL;
            int *l_188 = &g_164.f5;
            (*l_188) = (g_78.f1 <= (g_159.f0 <= (safe_rshift_func_int16_t_s_u(((((l_180 < g_3) , g_159.f2) ^ l_181) != (safe_mod_func_int64_t_s_s((((1UL <= p_33) , ((safe_rshift_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s(l_180, p_33)), 7)) , p_35)) ^ 0x3AE6E0BB03CE56EDLL), p_35))), l_181))));
            (*p_31) = l_189;
            (*g_61) = l_52;
        }
        (*p_34) = l_189;
        (*l_194) = func_46((*g_61), (((safe_lshift_func_uint16_t_u_u(g_103.f4, (safe_mod_func_int16_t_s_s(1L, g_118.f7)))) > p_35) | p_33), g_16, (*p_32), p_35);
    }
    else
    {
        int *l_301 = &g_215.f5;
        int ***l_302 = &g_61;
        for (g_120.f0 = 11; (g_120.f0 == 26); g_120.f0++)
        {
            int *l_295 = &g_277.f5;
            for (p_35 = 0; (p_35 != 18); p_35 = safe_add_func_uint32_t_u_u(p_35, 5))
            {
                int *l_294 = (void*)0;
                for (g_164.f5 = (-28); (g_164.f5 < 13); ++g_164.f5)
                {
                    int *l_293 = &g_159.f5;
                    (*g_61) = (*p_34);
                    (*p_34) = l_293;
                    (*g_61) = l_294;
                }
            }
            (*l_295) = ((((**g_160) , (void*)0) == &g_61) >= (g_120.f4 , (g_103.f6 < ((((void*)0 != l_295) & l_296) , 1L))));
        }
        for (g_103.f6 = 0; (g_103.f6 >= 0); g_103.f6 = safe_add_func_uint64_t_u_u(g_103.f6, 6))
        {
            for (g_270.f2 = (-27); (g_270.f2 == 43); g_270.f2++)
            {
                (*p_32) = l_52;
                (*l_301) = (func_57(&l_52, (p_33 , (void*)0), l_301) , 0x077D0F53L);
            }
            return p_33;
        }
        (*l_302) = &g_62;
    }
    return l_253;
}







static long long func_37(int p_38, char p_39)
{
    struct S0 *l_171 = &g_164;
    int **l_174 = (void*)0;
    (*g_160) = l_171;
    (*g_61) = (*g_61);
    (*g_160) = l_171;
    for (g_120.f4 = 0; (g_120.f4 == 1); g_120.f4++)
    {
        int ***l_175 = &l_174;
        (*l_175) = l_174;
        (*g_161) = (*l_171);
    }
    return g_118.f0;
}







static long long func_46(int * p_47, unsigned short p_48, unsigned long long p_49, int * p_50, int p_51)
{
    struct S0 *l_165 = &g_164;
    int l_166 = 0x7CA1ED44L;
    unsigned l_169 = 0x908BB067L;
    int *l_170 = &g_103.f5;
    (*l_165) = g_164;
    (*l_170) = ((&g_62 != &g_62) , (((((func_57(func_63(((((l_166 ^ ((l_166 < (9L <= ((g_159.f1 > (((safe_lshift_func_int8_t_s_s((2L >= 1UL), 4)) <= l_169) >= g_103.f0)) || 0L))) && g_118.f0)) , p_49) | 8UL) , g_120.f2), g_16), g_61, p_50) , 0xBE22E70253244882LL) ^ p_49) <= 0x53L) ^ 0x8EL) ^ 0xCA09L));
    return (*l_170);
}







static int func_57(int ** p_58, int ** p_59, int * p_60)
{
    long long l_155 = 6L;
    struct S0 ***l_162 = &g_160;
    (*g_61) = (*p_58);
    for (g_103.f4 = 0; (g_103.f4 == (-15)); g_103.f4 = safe_sub_func_uint8_t_u_u(g_103.f4, 8))
    {
        unsigned char l_156 = 0xCCL;
        volatile struct S0 *l_158 = &g_78;
        l_156 = l_155;
        if (l_155)
            continue;
        (*l_158) = g_157;
        (*l_158) = g_159;
    }
    (*l_162) = g_160;
    return g_103.f5;
}







static int ** func_63(unsigned p_64, char p_65)
{
    int **l_73 = &g_62;
    unsigned long long l_83 = 0xEE15D11E9056FF37LL;
    int l_93 = 0xECDE22F5L;
    for (p_64 = 0; (p_64 != 8); ++p_64)
    {
        int l_70 = 5L;
        int **l_104 = &g_62;
        for (p_65 = 0; (p_65 != 7); p_65++)
        {
            int **l_72 = &g_62;
            int l_74 = 0xE1734826L;
            (*g_61) = (*g_61);
        }
    }
    for (g_103.f2 = 0; (g_103.f2 != 31); g_103.f2 = safe_add_func_int64_t_s_s(g_103.f2, 6))
    {
        int *l_110 = &g_16;
        struct S0 *l_137 = &g_120;
        struct S0 *l_138 = &g_103;
        if (p_64)
        {
            int *l_109 = &l_93;
            g_103.f5 = (g_78.f5 && p_65);
            (*l_109) = 0L;
        }
        else
        {
            int *l_122 = &g_3;
            (*l_73) = l_110;
            for (l_83 = 0; (l_83 >= 55); l_83++)
            {
                int *l_123 = &g_103.f5;
                for (p_65 = 1; (p_65 >= (-9)); p_65--)
                {
                    short l_119 = (-1L);
                    int *l_130 = (void*)0;
                    (*l_73) = ((safe_rshift_func_int8_t_s_u(g_78.f4, 3)) , (*g_61));
                    if (p_64)
                        continue;
                    g_118 = g_117;
                    if ((((p_65 < (p_65 , p_65)) , ((p_64 | l_119) , 0xDA2347DCL)) != g_118.f0))
                    {
                        struct S0 *l_121 = &g_120;
                        (*l_73) = (*g_61);
                        (*l_121) = g_120;
                        l_123 = l_122;
                        (*g_61) = (*g_61);
                    }
                    else
                    {
                        unsigned long long l_128 = 1UL;
                        volatile struct S0 *l_129 = &g_117;
                        (*l_129) = ((((p_64 == (((safe_sub_func_int32_t_s_s((((((((safe_lshift_func_uint16_t_u_u((9L != l_128), p_65)) | ((*l_122) | g_118.f6)) != (0x791078B8L < p_65)) & ((p_65 != 6UL) || 0xC50EEEE7CDA8B219LL)) , g_120.f0) ^ (*l_110)) , (*l_110)), g_120.f4)) != g_103.f0) && 0L)) , 0xFEL) ^ g_103.f5) , g_78);
                        (*l_73) = l_130;
                        (*l_73) = (*g_61);
                    }
                }
            }
            if (p_64)
                continue;
            if (((((p_64 == ((safe_mod_func_uint64_t_u_u(((p_65 || (safe_rshift_func_uint16_t_u_s((safe_lshift_func_int8_t_s_s((0L != g_120.f0), g_120.f4)), (((*l_122) & ((l_137 == l_138) , ((((*l_122) >= (*l_110)) , g_118.f1) > 0x2D929A3F8350F044LL))) ^ 0UL)))) & g_120.f0), (*l_110))) < g_3)) >= (*l_122)) , (*l_122)) | 0xDAL))
            {
                int **l_142 = &l_110;
                for (g_120.f5 = 0; (g_120.f5 < (-2)); g_120.f5 = safe_sub_func_uint64_t_u_u(g_120.f5, 5))
                {
                    int **l_141 = &l_110;
                    return &g_62;
                }
                for (p_64 = 29; (p_64 != 58); p_64 = safe_add_func_uint8_t_u_u(p_64, 5))
                {
                    int l_147 = 7L;
                    for (g_120.f6 = 4; (g_120.f6 < 0); g_120.f6 = safe_sub_func_uint16_t_u_u(g_120.f6, 8))
                    {
                        int *l_148 = &l_93;
                        (*l_148) = l_147;
                    }
                    if ((*l_122))
                        break;
                }
            }
            else
            {
                for (g_120.f5 = 0; (g_120.f5 == 5); g_120.f5 = safe_add_func_int32_t_s_s(g_120.f5, 6))
                {
                    int *l_151 = (void*)0;
                    int *l_152 = &l_93;
                    (*l_152) = 0xEFBC47EFL;
                }
            }
        }
    }
    return l_73;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_16, "g_16", print_hash_value);
    transparent_crc(g_78.f0, "g_78.f0", print_hash_value);
    transparent_crc(g_78.f1, "g_78.f1", print_hash_value);
    transparent_crc(g_78.f2, "g_78.f2", print_hash_value);
    transparent_crc(g_78.f3, "g_78.f3", print_hash_value);
    transparent_crc(g_78.f4, "g_78.f4", print_hash_value);
    transparent_crc(g_78.f5, "g_78.f5", print_hash_value);
    transparent_crc(g_78.f6, "g_78.f6", print_hash_value);
    transparent_crc(g_78.f7, "g_78.f7", print_hash_value);
    transparent_crc(g_103.f0, "g_103.f0", print_hash_value);
    transparent_crc(g_103.f1, "g_103.f1", print_hash_value);
    transparent_crc(g_103.f2, "g_103.f2", print_hash_value);
    transparent_crc(g_103.f3, "g_103.f3", print_hash_value);
    transparent_crc(g_103.f4, "g_103.f4", print_hash_value);
    transparent_crc(g_103.f5, "g_103.f5", print_hash_value);
    transparent_crc(g_103.f6, "g_103.f6", print_hash_value);
    transparent_crc(g_103.f7, "g_103.f7", print_hash_value);
    transparent_crc(g_117.f0, "g_117.f0", print_hash_value);
    transparent_crc(g_117.f1, "g_117.f1", print_hash_value);
    transparent_crc(g_117.f2, "g_117.f2", print_hash_value);
    transparent_crc(g_117.f3, "g_117.f3", print_hash_value);
    transparent_crc(g_117.f4, "g_117.f4", print_hash_value);
    transparent_crc(g_117.f5, "g_117.f5", print_hash_value);
    transparent_crc(g_117.f6, "g_117.f6", print_hash_value);
    transparent_crc(g_117.f7, "g_117.f7", print_hash_value);
    transparent_crc(g_118.f0, "g_118.f0", print_hash_value);
    transparent_crc(g_118.f1, "g_118.f1", print_hash_value);
    transparent_crc(g_118.f2, "g_118.f2", print_hash_value);
    transparent_crc(g_118.f3, "g_118.f3", print_hash_value);
    transparent_crc(g_118.f4, "g_118.f4", print_hash_value);
    transparent_crc(g_118.f5, "g_118.f5", print_hash_value);
    transparent_crc(g_118.f6, "g_118.f6", print_hash_value);
    transparent_crc(g_118.f7, "g_118.f7", print_hash_value);
    transparent_crc(g_120.f0, "g_120.f0", print_hash_value);
    transparent_crc(g_120.f1, "g_120.f1", print_hash_value);
    transparent_crc(g_120.f2, "g_120.f2", print_hash_value);
    transparent_crc(g_120.f3, "g_120.f3", print_hash_value);
    transparent_crc(g_120.f4, "g_120.f4", print_hash_value);
    transparent_crc(g_120.f5, "g_120.f5", print_hash_value);
    transparent_crc(g_120.f6, "g_120.f6", print_hash_value);
    transparent_crc(g_120.f7, "g_120.f7", print_hash_value);
    transparent_crc(g_157.f0, "g_157.f0", print_hash_value);
    transparent_crc(g_157.f1, "g_157.f1", print_hash_value);
    transparent_crc(g_157.f2, "g_157.f2", print_hash_value);
    transparent_crc(g_157.f3, "g_157.f3", print_hash_value);
    transparent_crc(g_157.f4, "g_157.f4", print_hash_value);
    transparent_crc(g_157.f5, "g_157.f5", print_hash_value);
    transparent_crc(g_157.f6, "g_157.f6", print_hash_value);
    transparent_crc(g_157.f7, "g_157.f7", print_hash_value);
    transparent_crc(g_159.f0, "g_159.f0", print_hash_value);
    transparent_crc(g_159.f1, "g_159.f1", print_hash_value);
    transparent_crc(g_159.f2, "g_159.f2", print_hash_value);
    transparent_crc(g_159.f3, "g_159.f3", print_hash_value);
    transparent_crc(g_159.f4, "g_159.f4", print_hash_value);
    transparent_crc(g_159.f5, "g_159.f5", print_hash_value);
    transparent_crc(g_159.f6, "g_159.f6", print_hash_value);
    transparent_crc(g_159.f7, "g_159.f7", print_hash_value);
    transparent_crc(g_164.f0, "g_164.f0", print_hash_value);
    transparent_crc(g_164.f1, "g_164.f1", print_hash_value);
    transparent_crc(g_164.f2, "g_164.f2", print_hash_value);
    transparent_crc(g_164.f3, "g_164.f3", print_hash_value);
    transparent_crc(g_164.f4, "g_164.f4", print_hash_value);
    transparent_crc(g_164.f5, "g_164.f5", print_hash_value);
    transparent_crc(g_164.f6, "g_164.f6", print_hash_value);
    transparent_crc(g_164.f7, "g_164.f7", print_hash_value);
    transparent_crc(g_215.f0, "g_215.f0", print_hash_value);
    transparent_crc(g_215.f1, "g_215.f1", print_hash_value);
    transparent_crc(g_215.f2, "g_215.f2", print_hash_value);
    transparent_crc(g_215.f3, "g_215.f3", print_hash_value);
    transparent_crc(g_215.f4, "g_215.f4", print_hash_value);
    transparent_crc(g_215.f5, "g_215.f5", print_hash_value);
    transparent_crc(g_215.f6, "g_215.f6", print_hash_value);
    transparent_crc(g_215.f7, "g_215.f7", print_hash_value);
    transparent_crc(g_220.f0, "g_220.f0", print_hash_value);
    transparent_crc(g_220.f1, "g_220.f1", print_hash_value);
    transparent_crc(g_220.f2, "g_220.f2", print_hash_value);
    transparent_crc(g_220.f3, "g_220.f3", print_hash_value);
    transparent_crc(g_220.f4, "g_220.f4", print_hash_value);
    transparent_crc(g_220.f5, "g_220.f5", print_hash_value);
    transparent_crc(g_220.f6, "g_220.f6", print_hash_value);
    transparent_crc(g_220.f7, "g_220.f7", print_hash_value);
    transparent_crc(g_246.f0, "g_246.f0", print_hash_value);
    transparent_crc(g_246.f1, "g_246.f1", print_hash_value);
    transparent_crc(g_246.f2, "g_246.f2", print_hash_value);
    transparent_crc(g_246.f3, "g_246.f3", print_hash_value);
    transparent_crc(g_246.f4, "g_246.f4", print_hash_value);
    transparent_crc(g_246.f5, "g_246.f5", print_hash_value);
    transparent_crc(g_246.f6, "g_246.f6", print_hash_value);
    transparent_crc(g_246.f7, "g_246.f7", print_hash_value);
    transparent_crc(g_270.f0, "g_270.f0", print_hash_value);
    transparent_crc(g_270.f1, "g_270.f1", print_hash_value);
    transparent_crc(g_270.f2, "g_270.f2", print_hash_value);
    transparent_crc(g_270.f3, "g_270.f3", print_hash_value);
    transparent_crc(g_270.f4, "g_270.f4", print_hash_value);
    transparent_crc(g_270.f5, "g_270.f5", print_hash_value);
    transparent_crc(g_270.f6, "g_270.f6", print_hash_value);
    transparent_crc(g_270.f7, "g_270.f7", print_hash_value);
    transparent_crc(g_277.f0, "g_277.f0", print_hash_value);
    transparent_crc(g_277.f1, "g_277.f1", print_hash_value);
    transparent_crc(g_277.f2, "g_277.f2", print_hash_value);
    transparent_crc(g_277.f3, "g_277.f3", print_hash_value);
    transparent_crc(g_277.f4, "g_277.f4", print_hash_value);
    transparent_crc(g_277.f5, "g_277.f5", print_hash_value);
    transparent_crc(g_277.f6, "g_277.f6", print_hash_value);
    transparent_crc(g_277.f7, "g_277.f7", print_hash_value);
    transparent_crc(g_341.f0, "g_341.f0", print_hash_value);
    transparent_crc(g_341.f1, "g_341.f1", print_hash_value);
    transparent_crc(g_341.f2, "g_341.f2", print_hash_value);
    transparent_crc(g_341.f3, "g_341.f3", print_hash_value);
    transparent_crc(g_341.f4, "g_341.f4", print_hash_value);
    transparent_crc(g_341.f5, "g_341.f5", print_hash_value);
    transparent_crc(g_341.f6, "g_341.f6", print_hash_value);
    transparent_crc(g_341.f7, "g_341.f7", print_hash_value);
    transparent_crc(g_342.f0, "g_342.f0", print_hash_value);
    transparent_crc(g_342.f1, "g_342.f1", print_hash_value);
    transparent_crc(g_342.f2, "g_342.f2", print_hash_value);
    transparent_crc(g_342.f3, "g_342.f3", print_hash_value);
    transparent_crc(g_342.f4, "g_342.f4", print_hash_value);
    transparent_crc(g_342.f5, "g_342.f5", print_hash_value);
    transparent_crc(g_342.f6, "g_342.f6", print_hash_value);
    transparent_crc(g_342.f7, "g_342.f7", print_hash_value);
    transparent_crc(g_343.f0, "g_343.f0", print_hash_value);
    transparent_crc(g_343.f1, "g_343.f1", print_hash_value);
    transparent_crc(g_343.f2, "g_343.f2", print_hash_value);
    transparent_crc(g_343.f3, "g_343.f3", print_hash_value);
    transparent_crc(g_343.f4, "g_343.f4", print_hash_value);
    transparent_crc(g_343.f5, "g_343.f5", print_hash_value);
    transparent_crc(g_343.f6, "g_343.f6", print_hash_value);
    transparent_crc(g_343.f7, "g_343.f7", print_hash_value);
    transparent_crc(g_380.f0, "g_380.f0", print_hash_value);
    transparent_crc(g_380.f1, "g_380.f1", print_hash_value);
    transparent_crc(g_380.f2, "g_380.f2", print_hash_value);
    transparent_crc(g_380.f3, "g_380.f3", print_hash_value);
    transparent_crc(g_380.f4, "g_380.f4", print_hash_value);
    transparent_crc(g_380.f5, "g_380.f5", print_hash_value);
    transparent_crc(g_380.f6, "g_380.f6", print_hash_value);
    transparent_crc(g_380.f7, "g_380.f7", print_hash_value);
    transparent_crc(g_387, "g_387", print_hash_value);
    transparent_crc(g_395.f0, "g_395.f0", print_hash_value);
    transparent_crc(g_395.f1, "g_395.f1", print_hash_value);
    transparent_crc(g_395.f2, "g_395.f2", print_hash_value);
    transparent_crc(g_395.f3, "g_395.f3", print_hash_value);
    transparent_crc(g_395.f4, "g_395.f4", print_hash_value);
    transparent_crc(g_395.f5, "g_395.f5", print_hash_value);
    transparent_crc(g_395.f6, "g_395.f6", print_hash_value);
    transparent_crc(g_395.f7, "g_395.f7", print_hash_value);
    transparent_crc(g_399.f0, "g_399.f0", print_hash_value);
    transparent_crc(g_399.f1, "g_399.f1", print_hash_value);
    transparent_crc(g_399.f2, "g_399.f2", print_hash_value);
    transparent_crc(g_399.f3, "g_399.f3", print_hash_value);
    transparent_crc(g_399.f4, "g_399.f4", print_hash_value);
    transparent_crc(g_399.f5, "g_399.f5", print_hash_value);
    transparent_crc(g_399.f6, "g_399.f6", print_hash_value);
    transparent_crc(g_399.f7, "g_399.f7", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
