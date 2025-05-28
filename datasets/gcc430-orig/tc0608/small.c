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



static long long g_2 = 0x76F5020F89B54615LL;
static int g_5 = 1L;
static int g_9 = 7L;
static unsigned short g_11 = 0x14A5L;
static unsigned char g_57[4][5][5] = {{{8UL, 0x54L, 255UL, 0UL, 0x96L}, {8UL, 0x54L, 255UL, 0UL, 0x96L}, {8UL, 0x54L, 255UL, 0UL, 0x96L}, {8UL, 0x54L, 255UL, 0UL, 0x96L}, {8UL, 0x54L, 255UL, 0UL, 0x96L}}, {{8UL, 0x54L, 255UL, 0UL, 0x96L}, {8UL, 0x54L, 255UL, 0UL, 0x96L}, {8UL, 0x54L, 255UL, 0UL, 0x96L}, {8UL, 0x54L, 255UL, 0UL, 0x96L}, {8UL, 0x54L, 255UL, 0UL, 0x96L}}, {{8UL, 0x54L, 255UL, 0UL, 0x96L}, {8UL, 0x54L, 255UL, 0UL, 0x96L}, {8UL, 0x54L, 255UL, 0UL, 0x96L}, {8UL, 0x54L, 255UL, 0UL, 0x96L}, {8UL, 0x54L, 255UL, 0UL, 0x96L}}, {{8UL, 0x54L, 255UL, 0UL, 0x96L}, {8UL, 0x54L, 255UL, 0UL, 0x96L}, {8UL, 0x54L, 255UL, 0UL, 0x96L}, {8UL, 0x54L, 255UL, 0UL, 0x96L}, {8UL, 0x54L, 255UL, 0UL, 0x96L}}};
static unsigned g_63[8][2] = {{0x410F7135L, 0xA21DEC74L}, {0x410F7135L, 0xA21DEC74L}, {0x410F7135L, 0xA21DEC74L}, {0x410F7135L, 0xA21DEC74L}, {0x410F7135L, 0xA21DEC74L}, {0x410F7135L, 0xA21DEC74L}, {0x410F7135L, 0xA21DEC74L}, {0x410F7135L, 0xA21DEC74L}};
static char g_65[7][10] = {{0xF1L, (-1L), 0x46L, (-1L), 1L, 1L, (-1L), 0x46L, (-1L), 0xF1L}, {0xF1L, (-1L), 0x46L, (-1L), 1L, 1L, (-1L), 0x46L, (-1L), 0xF1L}, {0xF1L, (-1L), 0x46L, (-1L), 1L, 1L, (-1L), 0x46L, (-1L), 0xF1L}, {0xF1L, (-1L), 0x46L, (-1L), 1L, 1L, (-1L), 0x46L, (-1L), 0xF1L}, {0xF1L, (-1L), 0x46L, (-1L), 1L, 1L, (-1L), 0x46L, (-1L), 0xF1L}, {0xF1L, (-1L), 0x46L, (-1L), 1L, 1L, (-1L), 0x46L, (-1L), 0xF1L}, {0xF1L, (-1L), 0x46L, (-1L), 1L, 1L, (-1L), 0x46L, (-1L), 0xF1L}};
static unsigned long long g_68 = 0x53CDCE3FF50EDC67LL;
static short g_71 = (-5L);
static unsigned long long *g_87 = &g_68;
static unsigned long long **g_86[3][10] = {{(void*)0, (void*)0, (void*)0, (void*)0, &g_87, &g_87, &g_87, &g_87, &g_87, &g_87}, {(void*)0, (void*)0, (void*)0, (void*)0, &g_87, &g_87, &g_87, &g_87, &g_87, &g_87}, {(void*)0, (void*)0, (void*)0, (void*)0, &g_87, &g_87, &g_87, &g_87, &g_87, &g_87}};
static unsigned char **g_97 = (void*)0;
static unsigned g_123 = 0x2C8C6773L;
static int *g_124 = &g_9;
static short g_149 = 1L;
static unsigned g_151 = 0xB94001E8L;
static unsigned char g_238 = 0xFFL;
static unsigned short g_239[4] = {0UL, 0UL, 0UL, 0UL};
static unsigned long long g_263 = 18446744073709551615UL;
static short g_264 = 0xB3FDL;
static int g_284 = 0xE468E58CL;
static unsigned long long g_286 = 18446744073709551609UL;
static char g_297 = 2L;
static unsigned short g_318[4][8] = {{0x9A4CL, 65529UL, 0x9A4CL, 0xDA4BL, 65534UL, 0UL, 65526UL, 65526UL}, {0x9A4CL, 65529UL, 0x9A4CL, 0xDA4BL, 65534UL, 0UL, 65526UL, 65526UL}, {0x9A4CL, 65529UL, 0x9A4CL, 0xDA4BL, 65534UL, 0UL, 65526UL, 65526UL}, {0x9A4CL, 65529UL, 0x9A4CL, 0xDA4BL, 65534UL, 0UL, 65526UL, 65526UL}};
static unsigned g_340 = 0UL;
static int *g_371 = &g_9;
static int *g_406 = &g_9;
static short g_462 = (-1L);
static int g_469[3][9][6] = {{{0xEE703BB9L, (-8L), 0x670A2257L, (-4L), (-4L), 0x670A2257L}, {0xEE703BB9L, (-8L), 0x670A2257L, (-4L), (-4L), 0x670A2257L}, {0xEE703BB9L, (-8L), 0x670A2257L, (-4L), (-4L), 0x670A2257L}, {0xEE703BB9L, (-8L), 0x670A2257L, (-4L), (-4L), 0x670A2257L}, {0xEE703BB9L, (-8L), 0x670A2257L, (-4L), (-4L), 0x670A2257L}, {0xEE703BB9L, (-8L), 0x670A2257L, (-4L), (-4L), 0x670A2257L}, {0xEE703BB9L, (-8L), 0x670A2257L, (-4L), (-4L), 0x670A2257L}, {0xEE703BB9L, (-8L), 0x670A2257L, (-4L), (-4L), 0x670A2257L}, {0xEE703BB9L, (-8L), 0x670A2257L, (-4L), (-4L), 0x670A2257L}}, {{0xEE703BB9L, (-8L), 0x670A2257L, (-4L), (-4L), 0x670A2257L}, {0xEE703BB9L, (-8L), 0x670A2257L, (-4L), (-4L), 0x670A2257L}, {0xEE703BB9L, (-8L), 0x670A2257L, (-4L), (-4L), 0x670A2257L}, {0xEE703BB9L, (-8L), 0x670A2257L, (-4L), (-4L), 0x670A2257L}, {0xEE703BB9L, (-8L), 0x670A2257L, (-4L), (-4L), 0x670A2257L}, {0xEE703BB9L, (-8L), 0x670A2257L, (-4L), (-4L), 0x670A2257L}, {0xEE703BB9L, (-8L), 0x670A2257L, (-4L), (-4L), 0x670A2257L}, {0xEE703BB9L, (-8L), 0x670A2257L, (-4L), (-4L), 0x670A2257L}, {0xEE703BB9L, (-8L), 0x670A2257L, (-4L), (-4L), 0x670A2257L}}, {{0xEE703BB9L, (-8L), 0x670A2257L, (-4L), (-4L), 0x670A2257L}, {0xEE703BB9L, (-8L), 0x670A2257L, (-4L), (-4L), 0x670A2257L}, {0xEE703BB9L, (-8L), 0x670A2257L, (-4L), (-4L), 0x670A2257L}, {0xEE703BB9L, (-8L), 0x670A2257L, (-4L), (-4L), 0x670A2257L}, {0xEE703BB9L, (-8L), 0x670A2257L, (-4L), (-4L), 0x670A2257L}, {0xEE703BB9L, (-8L), 0x670A2257L, (-4L), (-4L), 0x670A2257L}, {0xEE703BB9L, (-8L), 0x670A2257L, (-4L), (-4L), 0x670A2257L}, {0xEE703BB9L, (-8L), 0x670A2257L, (-4L), (-4L), 0x670A2257L}, {0xEE703BB9L, (-8L), 0x670A2257L, (-4L), (-4L), 0x670A2257L}}};
static char g_470 = 3L;
static long long *g_526 = &g_2;
static long long **g_525 = &g_526;
static unsigned g_531 = 6UL;
static int *g_549 = (void*)0;
static unsigned g_612[1] = {0xE89A8581L};
static int *g_644 = &g_284;
static char *g_708 = &g_65[4][0];
static char **g_707 = &g_708;
static unsigned g_735 = 0x4591586BL;
static int g_853 = 0x462439B5L;
static int **g_872 = (void*)0;
static int ***g_871 = &g_872;
static unsigned short *g_907 = &g_11;
static int *g_910[7][1][6] = {{{(void*)0, &g_284, &g_5, &g_284, &g_284, &g_9}}, {{(void*)0, &g_284, &g_5, &g_284, &g_284, &g_9}}, {{(void*)0, &g_284, &g_5, &g_284, &g_284, &g_9}}, {{(void*)0, &g_284, &g_5, &g_284, &g_284, &g_9}}, {{(void*)0, &g_284, &g_5, &g_284, &g_284, &g_9}}, {{(void*)0, &g_284, &g_5, &g_284, &g_284, &g_9}}, {{(void*)0, &g_284, &g_5, &g_284, &g_284, &g_9}}};
static short *g_939 = (void*)0;
static short **g_938[6] = {&g_939, &g_939, &g_939, &g_939, &g_939, &g_939};
static int *g_1073 = &g_284;
static unsigned g_1150 = 0UL;
static int *g_1293[3] = {(void*)0, (void*)0, (void*)0};
static unsigned ***g_1321 = (void*)0;
static unsigned *g_1404 = (void*)0;
static unsigned **g_1403 = &g_1404;
static unsigned long long ***g_1437[4] = {&g_86[2][6], &g_86[2][6], &g_86[2][6], &g_86[2][6]};
static unsigned long long ****g_1436 = &g_1437[1];
static int g_1523 = 0L;
static unsigned char g_1546 = 0x1FL;
static unsigned char ***g_1572 = &g_97;
static unsigned char ****g_1571[2][5] = {{&g_1572, &g_1572, &g_1572, &g_1572, &g_1572}, {&g_1572, &g_1572, &g_1572, &g_1572, &g_1572}};
static unsigned *g_1583 = &g_531;
static unsigned **g_1582 = &g_1583;
static unsigned g_1593[9] = {0x2B01C544L, 0x2B01C544L, 0x2B01C544L, 0x2B01C544L, 0x2B01C544L, 0x2B01C544L, 0x2B01C544L, 0x2B01C544L, 0x2B01C544L};
static int g_1638 = 0xF6DC7CCDL;
static unsigned g_1664 = 4294967295UL;
static long long g_1693 = 1L;
static int *g_1773 = &g_284;
static int *g_1797 = &g_469[1][0][3];



static unsigned char func_1(void);
static unsigned func_6(unsigned p_7);
static int * func_12(unsigned p_13, long long p_14, unsigned p_15, short p_16);
static int func_17(long long p_18, unsigned short * p_19);
static char func_22(int p_23);
static int func_25(int * p_26, short p_27, unsigned short * p_28, int p_29, int * p_30);
static int * func_31(int * p_32, unsigned long long p_33, unsigned short * p_34, unsigned short * p_35, unsigned short * p_36);
static int * func_37(int * p_38, unsigned char p_39, int * p_40, unsigned p_41);
static int * func_42(int p_43);
static unsigned long long func_46(int p_47);
static unsigned char func_1(void)
{
    int *l_1374 = &g_284;
    unsigned short *l_1380 = &g_239[2];
    unsigned char l_1384 = 254UL;
    char *l_1395 = &g_65[3][0];
    unsigned l_1432 = 0x9FA55345L;
    long long *l_1441 = &g_2;
    int l_1458 = 0xECBB1D53L;
    int ****l_1487 = &g_871;
    unsigned long long l_1553 = 5UL;
    int *l_1567 = &g_5;
    unsigned short l_1581 = 1UL;
    unsigned short l_1633 = 1UL;
    unsigned char ***l_1648 = &g_97;
    int *l_1744 = &g_9;
    unsigned char l_1753 = 252UL;
    unsigned long long l_1777 = 0xA7B04466C060A495LL;
    char l_1819 = 0x91L;
    unsigned char *l_1820 = &g_57[2][3][0];
    long long ***l_1821 = &g_525;
    int *l_1824 = &g_9;
    if ((0x70L ^ g_2))
    {
        unsigned l_3 = 4294967286UL;
        int *l_4[5][6][1] = {{{&g_5}, {&g_5}, {&g_5}, {&g_5}, {&g_5}, {&g_5}}, {{&g_5}, {&g_5}, {&g_5}, {&g_5}, {&g_5}, {&g_5}}, {{&g_5}, {&g_5}, {&g_5}, {&g_5}, {&g_5}, {&g_5}}, {{&g_5}, {&g_5}, {&g_5}, {&g_5}, {&g_5}, {&g_5}}, {{&g_5}, {&g_5}, {&g_5}, {&g_5}, {&g_5}, {&g_5}}};
        int i, j, k;
        g_5 &= (l_3 >= l_3);
    }
    else
    {
        short l_1369 = 0x1975L;
        unsigned *l_1370 = (void*)0;
        unsigned *l_1371 = &g_63[2][0];
        short l_1379 = (-1L);
        int l_1381 = (-5L);
        short *l_1382 = &g_462;
        int l_1383 = 0x7D44A65FL;
        unsigned ****l_1396 = &g_1321;
        unsigned l_1409 = 1UL;
        int l_1431 = 0xB31EF2ECL;
        char l_1491[1][7] = {{(-7L), (-1L), (-7L), (-1L), (-7L), (-1L), (-7L)}};
        long long l_1509[5][4] = {{0xBE5850581DC0D47FLL, 0xAF7839966B2A00F1LL, 0xDFAAB2543D13BE32LL, 0xAF7839966B2A00F1LL}, {0xBE5850581DC0D47FLL, 0xAF7839966B2A00F1LL, 0xDFAAB2543D13BE32LL, 0xAF7839966B2A00F1LL}, {0xBE5850581DC0D47FLL, 0xAF7839966B2A00F1LL, 0xDFAAB2543D13BE32LL, 0xAF7839966B2A00F1LL}, {0xBE5850581DC0D47FLL, 0xAF7839966B2A00F1LL, 0xDFAAB2543D13BE32LL, 0xAF7839966B2A00F1LL}, {0xBE5850581DC0D47FLL, 0xAF7839966B2A00F1LL, 0xDFAAB2543D13BE32LL, 0xAF7839966B2A00F1LL}};
        int l_1547[9][9][3] = {{{(-1L), 0xCF4F1F25L, (-1L)}, {(-1L), 0xCF4F1F25L, (-1L)}, {(-1L), 0xCF4F1F25L, (-1L)}, {(-1L), 0xCF4F1F25L, (-1L)}, {(-1L), 0xCF4F1F25L, (-1L)}, {(-1L), 0xCF4F1F25L, (-1L)}, {(-1L), 0xCF4F1F25L, (-1L)}, {(-1L), 0xCF4F1F25L, (-1L)}, {(-1L), 0xCF4F1F25L, (-1L)}}, {{(-1L), 0xCF4F1F25L, (-1L)}, {(-1L), 0xCF4F1F25L, (-1L)}, {(-1L), 0xCF4F1F25L, (-1L)}, {(-1L), 0xCF4F1F25L, (-1L)}, {(-1L), 0xCF4F1F25L, (-1L)}, {(-1L), 0xCF4F1F25L, (-1L)}, {(-1L), 0xCF4F1F25L, (-1L)}, {(-1L), 0xCF4F1F25L, (-1L)}, {(-1L), 0xCF4F1F25L, (-1L)}}, {{(-1L), 0xCF4F1F25L, (-1L)}, {(-1L), 0xCF4F1F25L, (-1L)}, {(-1L), 0xCF4F1F25L, (-1L)}, {(-1L), 0xCF4F1F25L, (-1L)}, {(-1L), 0xCF4F1F25L, (-1L)}, {(-1L), 0xCF4F1F25L, (-1L)}, {(-1L), 0xCF4F1F25L, (-1L)}, {(-1L), 0xCF4F1F25L, (-1L)}, {(-1L), 0xCF4F1F25L, (-1L)}}, {{(-1L), 0xCF4F1F25L, (-1L)}, {(-1L), 0xCF4F1F25L, (-1L)}, {(-1L), 0xCF4F1F25L, (-1L)}, {(-1L), 0xCF4F1F25L, (-1L)}, {(-1L), 0xCF4F1F25L, (-1L)}, {(-1L), 0xCF4F1F25L, (-1L)}, {(-1L), 0xCF4F1F25L, (-1L)}, {(-1L), 0xCF4F1F25L, (-1L)}, {(-1L), 0xCF4F1F25L, (-1L)}}, {{(-1L), 0xCF4F1F25L, (-1L)}, {(-1L), 0xCF4F1F25L, (-1L)}, {(-1L), 0xCF4F1F25L, (-1L)}, {(-1L), 0xCF4F1F25L, (-1L)}, {(-1L), 0xCF4F1F25L, (-1L)}, {(-1L), 0xCF4F1F25L, (-1L)}, {(-1L), 0xCF4F1F25L, (-1L)}, {(-1L), 0xCF4F1F25L, (-1L)}, {(-1L), 0xCF4F1F25L, (-1L)}}, {{(-1L), 0xCF4F1F25L, (-1L)}, {(-1L), 0xCF4F1F25L, (-1L)}, {(-1L), 0xCF4F1F25L, (-1L)}, {(-1L), 0xCF4F1F25L, (-1L)}, {(-1L), 0xCF4F1F25L, (-1L)}, {(-1L), 0xCF4F1F25L, (-1L)}, {(-1L), 0xCF4F1F25L, (-1L)}, {(-1L), 0xCF4F1F25L, (-1L)}, {(-1L), 0xCF4F1F25L, (-1L)}}, {{(-1L), 0xCF4F1F25L, (-1L)}, {(-1L), 0xCF4F1F25L, (-1L)}, {(-1L), 0xCF4F1F25L, (-1L)}, {(-1L), 0xCF4F1F25L, (-1L)}, {(-1L), 0xCF4F1F25L, (-1L)}, {(-1L), 0xCF4F1F25L, (-1L)}, {(-1L), 0xCF4F1F25L, (-1L)}, {(-1L), 0xCF4F1F25L, (-1L)}, {(-1L), 0xCF4F1F25L, (-1L)}}, {{(-1L), 0xCF4F1F25L, (-1L)}, {(-1L), 0xCF4F1F25L, (-1L)}, {(-1L), 0xCF4F1F25L, (-1L)}, {(-1L), 0xCF4F1F25L, (-1L)}, {(-1L), 0xCF4F1F25L, (-1L)}, {(-1L), 0xCF4F1F25L, (-1L)}, {(-1L), 0xCF4F1F25L, (-1L)}, {(-1L), 0xCF4F1F25L, (-1L)}, {(-1L), 0xCF4F1F25L, (-1L)}}, {{(-1L), 0xCF4F1F25L, (-1L)}, {(-1L), 0xCF4F1F25L, (-1L)}, {(-1L), 0xCF4F1F25L, (-1L)}, {(-1L), 0xCF4F1F25L, (-1L)}, {(-1L), 0xCF4F1F25L, (-1L)}, {(-1L), 0xCF4F1F25L, (-1L)}, {(-1L), 0xCF4F1F25L, (-1L)}, {(-1L), 0xCF4F1F25L, (-1L)}, {(-1L), 0xCF4F1F25L, (-1L)}}};
        short l_1580 = 0L;
        long long l_1613 = (-5L);
        int **l_1617 = (void*)0;
        int l_1637[3][2][10] = {{{0x9C45F574L, (-2L), 0x051FE01CL, (-2L), 0x9C45F574L, 0xD8AF1FFCL, (-7L), (-2L), (-8L), (-2L)}, {0x9C45F574L, (-2L), 0x051FE01CL, (-2L), 0x9C45F574L, 0xD8AF1FFCL, (-7L), (-2L), (-8L), (-2L)}}, {{0x9C45F574L, (-2L), 0x051FE01CL, (-2L), 0x9C45F574L, 0xD8AF1FFCL, (-7L), (-2L), (-8L), (-2L)}, {0x9C45F574L, (-2L), 0x051FE01CL, (-2L), 0x9C45F574L, 0xD8AF1FFCL, (-7L), (-2L), (-8L), (-2L)}}, {{0x9C45F574L, (-2L), 0x051FE01CL, (-2L), 0x9C45F574L, 0xD8AF1FFCL, (-7L), (-2L), (-8L), (-2L)}, {0x9C45F574L, (-2L), 0x051FE01CL, (-2L), 0x9C45F574L, 0xD8AF1FFCL, (-7L), (-2L), (-8L), (-2L)}}};
        long long l_1640[6] = {0L, 0L, 1L, 0L, 0L, 1L};
        short l_1687 = 8L;
        char **l_1699 = &g_708;
        char l_1793[3][6];
        int *l_1806 = &g_5;
        int i, j, k;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 6; j++)
                l_1793[i][j] = (-3L);
        }
        if ((l_1384 ^= (((l_1383 = ((g_5 < (func_6(g_2) , (((*l_1371) = l_1369) > (((*l_1382) &= (safe_add_func_uint8_t_u_u(func_25(l_1374, (safe_mod_func_int64_t_s_s((((*l_1374) = (safe_div_func_uint8_t_u_u(((((*l_1374) , ((*l_1374) ^ (*l_1374))) , l_1369) <= l_1379), g_264))) , (-5L)), l_1379)), l_1380, g_531, l_1374), l_1381))) < l_1369)))) && (*g_87))) != l_1381) > l_1369)))
        {
            short ***l_1385[6][3][3] = {{{&g_938[1], &g_938[3], &g_938[1]}, {&g_938[1], &g_938[3], &g_938[1]}, {&g_938[1], &g_938[3], &g_938[1]}}, {{&g_938[1], &g_938[3], &g_938[1]}, {&g_938[1], &g_938[3], &g_938[1]}, {&g_938[1], &g_938[3], &g_938[1]}}, {{&g_938[1], &g_938[3], &g_938[1]}, {&g_938[1], &g_938[3], &g_938[1]}, {&g_938[1], &g_938[3], &g_938[1]}}, {{&g_938[1], &g_938[3], &g_938[1]}, {&g_938[1], &g_938[3], &g_938[1]}, {&g_938[1], &g_938[3], &g_938[1]}}, {{&g_938[1], &g_938[3], &g_938[1]}, {&g_938[1], &g_938[3], &g_938[1]}, {&g_938[1], &g_938[3], &g_938[1]}}, {{&g_938[1], &g_938[3], &g_938[1]}, {&g_938[1], &g_938[3], &g_938[1]}, {&g_938[1], &g_938[3], &g_938[1]}}};
            int l_1386 = (-5L);
            unsigned short *l_1387 = (void*)0;
            unsigned long long ***l_1421 = &g_86[1][1];
            unsigned long long ****l_1420 = &l_1421;
            unsigned l_1430 = 1UL;
            int *l_1489[6] = {&g_9, &g_9, &g_9, &g_9, &g_9, &g_9};
            char l_1504 = 0x28L;
            char l_1568 = 0x81L;
            int i, j, k;
            if ((((l_1385[3][1][0] != ((!((g_2 , ((l_1382 = &l_1379) != (l_1386 , l_1380))) && l_1386)) , &g_938[3])) , 0xBD925691L) == 0x84730BF1L))
            {
                int *l_1392 = &g_5;
                unsigned l_1400 = 0x15FCC157L;
                unsigned char *l_1433 = &g_57[1][1][0];
                unsigned long long l_1470 = 18446744073709551612UL;
                long long l_1472 = (-8L);
                for (g_5 = (-22); (g_5 > (-23)); --g_5)
                {
                    int l_1399 = 0x95B2DD48L;
                    int *l_1401 = &l_1383;
                    for (g_2 = (-16); (g_2 == (-30)); --g_2)
                    {
                        char *l_1398 = (void*)0;
                        char **l_1397 = &l_1398;
                        int **l_1402 = &l_1392;
                        (*l_1402) = l_1401;

                        ;
                    }
                }

                ;
                (*g_406) = ((g_1403 != &g_1404) | (safe_rshift_func_int16_t_s_s((*l_1392), (4UL >= l_1379))));
                if ((safe_add_func_int32_t_s_s(l_1409, (0x541277EAF6B66EF3LL == (safe_mod_func_uint8_t_u_u((safe_mul_func_int8_t_s_s((*l_1392), (safe_mul_func_uint8_t_u_u(252UL, (safe_sub_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u(((void*)0 == l_1420), 1)), (safe_lshift_func_uint8_t_u_s((((*l_1392) > ((*l_1433) |= (g_469[2][2][3] && ((safe_rshift_func_int8_t_s_s(((safe_lshift_func_uint16_t_u_s((safe_div_func_uint32_t_u_u((((*l_1392) < l_1430) <= g_263), l_1386)), l_1431)) , l_1432), 1)) >= g_318[3][7])))) | 0xFD2B2EB2B4EE011FLL), (*g_708))))))))), l_1379))))))
                {
                    int l_1434 = (-7L);
                    int l_1461 = 0xC7B0EB6BL;
                    int l_1473 = 1L;
                    if (((l_1434 < (safe_unary_minus_func_uint16_t_u(((-4L) || ((void*)0 == g_1436))))) & 0L))
                    {
                        int **l_1438[6] = {&l_1374, &g_549, &l_1374, &g_549, &l_1374, &g_549};
                        int i;
                        g_1293[0] = l_1374;


                        (*g_406) = (!(*l_1374));
                        g_1293[0] = &l_1386;


                        g_549 = l_1392;

                        ;
                    }
                    else
                    {
                        unsigned short *l_1452 = &g_318[0][0];
                        char *l_1453 = (void*)0;
                        int l_1454[1][8] = {{0L, 1L, 0L, 1L, 0L, 1L, 0L, 1L}};
                        int **l_1455 = &g_1073;
                        unsigned *l_1459 = (void*)0;
                        unsigned *l_1460[9] = {&l_1409, &l_1409, &l_1409, &l_1409, &l_1409, &l_1409, &l_1409, &l_1409, &l_1409};
                        int l_1471 = 0x6B0078AFL;
                        int i, j;
                        l_1454[0][4] = ((0x09C6L != (((((*g_87) , l_1441) != ((*g_525) = (*g_525))) || (((*g_707) = l_1395) != ((safe_mul_func_int16_t_s_s(((*l_1374) = (*l_1374)), (safe_mul_func_uint16_t_u_u(((*g_907) ^= 65535UL), ((safe_rshift_func_int8_t_s_u(g_239[3], (((*l_1395) = ((safe_add_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u(((*l_1452) = 0UL), 11)), 0x9DCFL)) == g_57[2][3][0])) , (*l_1392)))) | g_286))))) , l_1453))) , 0xC529L)) > 4UL);
                        (*l_1455) = l_1374;

                        ;
                        (*l_1455) = (void*)0;

                        ;
                        l_1461 = ((safe_mod_func_int32_t_s_s(((*l_1374) = 1L), l_1430)) == (*g_907));
                    }

                    ;


                }
                else
                {
                    int l_1476 = 1L;
                    unsigned short l_1477 = 0x7BAEL;
                    (*g_406) ^= 0xA2DE1159L;
                    (*g_406) |= ((255UL ^ (((*l_1382) = l_1383) < ((((((*g_907) ^= (safe_lshift_func_int8_t_s_u(((*l_1395) |= ((void*)0 != &g_1437[1])), g_71))) ^ (l_1386 &= (((((&g_1403 == (*l_1396)) , g_735) , (l_1476 = 0x0885L)) | l_1477) < 0xDF4C5AD782A54E7DLL))) ^ (*l_1374)) & (*l_1374)) <= 248UL))) , l_1409);
                }

                ;


            }
            else
            {
                int ****l_1486 = &g_871;
                int *l_1534 = &l_1383;
                unsigned **l_1557 = &g_1404;
                unsigned short l_1560 = 0xF3A6L;
                int l_1562 = 0xF355E51FL;
                if ((l_1383 = (safe_add_func_int32_t_s_s((-8L), (safe_rshift_func_int8_t_s_s((-1L), 4))))))
                {
                    unsigned l_1484[5][1][9] = {{{7UL, 4294967295UL, 7UL, 1UL, 0x349A5CD8L, 0x36B2DB87L, 1UL, 0x18B18639L, 4294967295UL}}, {{7UL, 4294967295UL, 7UL, 1UL, 0x349A5CD8L, 0x36B2DB87L, 1UL, 0x18B18639L, 4294967295UL}}, {{7UL, 4294967295UL, 7UL, 1UL, 0x349A5CD8L, 0x36B2DB87L, 1UL, 0x18B18639L, 4294967295UL}}, {{7UL, 4294967295UL, 7UL, 1UL, 0x349A5CD8L, 0x36B2DB87L, 1UL, 0x18B18639L, 4294967295UL}}, {{7UL, 4294967295UL, 7UL, 1UL, 0x349A5CD8L, 0x36B2DB87L, 1UL, 0x18B18639L, 4294967295UL}}};
                    int i, j, k;
                    for (l_1432 = 0; (l_1432 < 5); l_1432++)
                    {
                        char l_1485 = 0x80L;
                        l_1485 = l_1484[3][0][8];
                    }
                    for (g_238 = 0; g_238 < 6; g_238 += 1)
                    {
                        g_938[g_238] = &g_939;
                    }
                    return l_1430;
                }
                else
                {
                    int *****l_1488 = &l_1487;
                    unsigned l_1490 = 0xC9BB751FL;
                    (*l_1374) = (l_1486 != ((*l_1488) = l_1487));
                    l_1489[5] = &l_1383;


                    for (g_5 = 0; (g_5 <= 2); g_5 += 1)
                    {
                        char l_1496 = 1L;
                        unsigned short *l_1497[3][3] = {{(void*)0, (void*)0, &g_318[1][4]}, {(void*)0, (void*)0, &g_318[1][4]}, {(void*)0, (void*)0, &g_318[1][4]}};
                        unsigned long long l_1500 = 3UL;
                        unsigned char *l_1501 = &l_1384;
                        char l_1512 = 0x05L;
                        int i, j;
                        (*l_1374) = (((l_1491[0][1] ^ g_149) > ((l_1431 ^ (safe_lshift_func_uint8_t_u_s(((*g_907) == ((safe_add_func_uint16_t_u_u((((*g_87) & 18446744073709551613UL) != l_1496), (*g_907))) && g_57[2][1][4])), 5))) != l_1496)) == (*g_644));
                        (*l_1374) |= ((*g_526) , ((*g_87) < (safe_add_func_uint8_t_u_u((!((*l_1501) = l_1500)), ((**g_707) = ((*g_406) | l_1431))))));
                        (*g_406) = ((l_1491[0][6] && ((**g_525) && ((safe_div_func_int16_t_s_s(l_1504, (safe_mul_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u(((0UL <= (((*l_1374) != (safe_lshift_func_uint8_t_u_s(g_853, 4))) ^ l_1512)) < l_1379), (*g_907))), 0x07F1L)))) ^ (-1L)))) && 65535UL);
                        (*g_644) = (safe_sub_func_uint64_t_u_u(0UL, (l_1512 , (safe_div_func_int32_t_s_s(((safe_add_func_uint32_t_u_u(l_1381, ((*g_87) , g_264))) , 0x35C2F8BDL), 0xC5D7D586L)))));
                    }
                    (*l_1374) ^= l_1409;
                }


                for (g_735 = (-14); (g_735 < 23); g_735 = safe_add_func_int16_t_s_s(g_735, 1))
                {
                    l_1489[0] = &l_1386;
                    return l_1379;
                }
                for (g_9 = 0; (g_9 <= 12); g_9 = safe_add_func_uint16_t_u_u(g_9, 3))
                {
                    unsigned long long l_1532[3];
                    int **l_1533 = &g_371;
                    int l_1548 = 0xFCF15EB6L;
                    short l_1561 = 7L;
                    int i;
                    for (i = 0; i < 3; i++)
                        l_1532[i] = 4UL;
                    if (l_1532[0])
                        break;
                    (*l_1533) = &l_1383;

                    ;
                    (*l_1533) = l_1534;
                    for (g_149 = 0; (g_149 <= (-14)); g_149--)
                    {
                        unsigned l_1543 = 0x422EF737L;
                        unsigned **l_1551[7][5][6] = {{{&g_1404, &g_1404, &g_1404, &g_1404, &g_1404, &g_1404}, {&g_1404, &g_1404, &g_1404, &g_1404, &g_1404, &g_1404}, {&g_1404, &g_1404, &g_1404, &g_1404, &g_1404, &g_1404}, {&g_1404, &g_1404, &g_1404, &g_1404, &g_1404, &g_1404}, {&g_1404, &g_1404, &g_1404, &g_1404, &g_1404, &g_1404}}, {{&g_1404, &g_1404, &g_1404, &g_1404, &g_1404, &g_1404}, {&g_1404, &g_1404, &g_1404, &g_1404, &g_1404, &g_1404}, {&g_1404, &g_1404, &g_1404, &g_1404, &g_1404, &g_1404}, {&g_1404, &g_1404, &g_1404, &g_1404, &g_1404, &g_1404}, {&g_1404, &g_1404, &g_1404, &g_1404, &g_1404, &g_1404}}, {{&g_1404, &g_1404, &g_1404, &g_1404, &g_1404, &g_1404}, {&g_1404, &g_1404, &g_1404, &g_1404, &g_1404, &g_1404}, {&g_1404, &g_1404, &g_1404, &g_1404, &g_1404, &g_1404}, {&g_1404, &g_1404, &g_1404, &g_1404, &g_1404, &g_1404}, {&g_1404, &g_1404, &g_1404, &g_1404, &g_1404, &g_1404}}, {{&g_1404, &g_1404, &g_1404, &g_1404, &g_1404, &g_1404}, {&g_1404, &g_1404, &g_1404, &g_1404, &g_1404, &g_1404}, {&g_1404, &g_1404, &g_1404, &g_1404, &g_1404, &g_1404}, {&g_1404, &g_1404, &g_1404, &g_1404, &g_1404, &g_1404}, {&g_1404, &g_1404, &g_1404, &g_1404, &g_1404, &g_1404}}, {{&g_1404, &g_1404, &g_1404, &g_1404, &g_1404, &g_1404}, {&g_1404, &g_1404, &g_1404, &g_1404, &g_1404, &g_1404}, {&g_1404, &g_1404, &g_1404, &g_1404, &g_1404, &g_1404}, {&g_1404, &g_1404, &g_1404, &g_1404, &g_1404, &g_1404}, {&g_1404, &g_1404, &g_1404, &g_1404, &g_1404, &g_1404}}, {{&g_1404, &g_1404, &g_1404, &g_1404, &g_1404, &g_1404}, {&g_1404, &g_1404, &g_1404, &g_1404, &g_1404, &g_1404}, {&g_1404, &g_1404, &g_1404, &g_1404, &g_1404, &g_1404}, {&g_1404, &g_1404, &g_1404, &g_1404, &g_1404, &g_1404}, {&g_1404, &g_1404, &g_1404, &g_1404, &g_1404, &g_1404}}, {{&g_1404, &g_1404, &g_1404, &g_1404, &g_1404, &g_1404}, {&g_1404, &g_1404, &g_1404, &g_1404, &g_1404, &g_1404}, {&g_1404, &g_1404, &g_1404, &g_1404, &g_1404, &g_1404}, {&g_1404, &g_1404, &g_1404, &g_1404, &g_1404, &g_1404}, {&g_1404, &g_1404, &g_1404, &g_1404, &g_1404, &g_1404}}};
                        unsigned ***l_1552 = &g_1403;
                        unsigned long long ***l_1554 = (void*)0;
                        unsigned long long **l_1556 = &g_87;
                        unsigned long long ***l_1555 = &l_1556;
                        unsigned short *l_1558 = &g_239[3];
                        int *l_1559 = (void*)0;
                        int *l_1563 = &l_1383;
                        int *l_1564 = &g_5;
                        unsigned char ***l_1566[9];
                        unsigned char ****l_1565 = &l_1566[6];
                        int i, j, k;
                        for (i = 0; i < 9; i++)
                            l_1566[i] = (void*)0;
                        l_1548 &= (safe_mul_func_uint32_t_u_u(g_297, ((((safe_add_func_uint16_t_u_u(l_1509[4][3], (*g_907))) , (((((l_1547[0][0][1] |= (safe_mul_func_int8_t_s_s(0xBAL, (((l_1543 , ((((**g_525) > (((((18446744073709551611UL == (func_25(&l_1383, (safe_sub_func_uint8_t_u_u(g_65[1][9], 0x8DL)), &g_318[0][0], g_1546, &l_1386) >= l_1509[2][1])) , 0xB4L) , 0x80L) < g_735) || 0xCF26L)) , (void*)0) != (void*)0)) ^ 6UL) && (-8L))))) , 0x13E8FE330060DC2ALL) , 0L) < 0x88L) & (*g_644))) < (**l_1533)) != 0x6A0F696C1A84471BLL)));
                        (*l_1534) = (safe_mul_func_int16_t_s_s((((((*l_1552) = l_1551[2][0][2]) != ((l_1553 ^ ((*l_1421) == ((*l_1555) = (**g_1436)))) , l_1557)) <= func_25(((*l_1533) = &l_1547[5][7][0]), ((*l_1382) = (*l_1534)), l_1558, l_1562, l_1563)) >= 5UL), 65535UL));

                        ;
                        ;
                        (*l_1533) = l_1564;

                        ;
                        l_1568 |= func_25(l_1563, (((*l_1382) = (**l_1533)) != (g_263 || ((6L | (**l_1533)) || ((((*l_1374) , ((*l_1565) = &g_97)) == &g_97) , (*g_526))))), &g_239[1], g_462, l_1567);


                    }

                    ;
                }


                ;
            }


            ;


            ;
            ;

            for (g_71 = 0; (g_71 <= 20); ++g_71)
            {
                unsigned long long l_1575 = 0x4EAE292C53CE141BLL;
                l_1581 = ((*g_644) = func_25(&g_9, (func_25(&l_1386, l_1575, l_1380, l_1491[0][5], &g_284) & 0xC1L), &g_239[0], (*l_1567), &l_1386));
            }
        }
        else
        {
            unsigned ***l_1584 = &g_1582;
            unsigned **l_1586 = &l_1371;
            unsigned ***l_1585 = &l_1586;
            (*l_1585) = ((*l_1584) = g_1582);

            ;
        }

        ;

        ;



        ;
        ;
        if ((*g_644))
        {
            unsigned long long l_1596 = 0xE94FCB46A8FAEF67LL;
            int *l_1610[9][8] = {{&g_284, &g_5, &g_284, &g_5, &g_284, &g_5, &g_284, &g_5}, {&g_284, &g_5, &g_284, &g_5, &g_284, &g_5, &g_284, &g_5}, {&g_284, &g_5, &g_284, &g_5, &g_284, &g_5, &g_284, &g_5}, {&g_284, &g_5, &g_284, &g_5, &g_284, &g_5, &g_284, &g_5}, {&g_284, &g_5, &g_284, &g_5, &g_284, &g_5, &g_284, &g_5}, {&g_284, &g_5, &g_284, &g_5, &g_284, &g_5, &g_284, &g_5}, {&g_284, &g_5, &g_284, &g_5, &g_284, &g_5, &g_284, &g_5}, {&g_284, &g_5, &g_284, &g_5, &g_284, &g_5, &g_284, &g_5}, {&g_284, &g_5, &g_284, &g_5, &g_284, &g_5, &g_284, &g_5}};
            short l_1646 = (-5L);
            unsigned short *l_1663 = &g_318[0][0];
            int l_1669 = 0L;
            unsigned char ****l_1675 = &l_1648;
            unsigned l_1700 = 4294967295UL;
            int i, j;
            (*l_1567) ^= ((((*l_1441) |= (l_1491[0][1] || l_1491[0][1])) && (safe_mul_func_uint16_t_u_u(((*g_907) = (g_470 , (*g_907))), l_1409))) && ((safe_mod_func_int8_t_s_s(((g_1593[4] ^ g_318[0][0]) < (safe_lshift_func_uint16_t_u_u(1UL, ((((l_1596 , 0x89EB51DCL) >= (*l_1374)) , l_1509[4][3]) >= l_1596)))), 0xD7L)) & 0L));
            if ((safe_mod_func_uint64_t_u_u(0xE409D24B8CA60A67LL, (safe_sub_func_uint8_t_u_u(l_1596, (*g_708))))))
            {
                int **l_1616 = &l_1610[4][3];
                unsigned ****l_1630 = &g_1321;
                int l_1636 = 8L;
                for (g_149 = (-14); (g_149 == 19); g_149 = safe_add_func_int32_t_s_s(g_149, 3))
                {
                    unsigned l_1608 = 1UL;
                    unsigned short *l_1609[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_1609[i] = &g_239[1];
                    for (l_1409 = (-2); (l_1409 != 45); l_1409 = safe_add_func_int32_t_s_s(l_1409, 5))
                    {
                        int l_1605 = 0xF2AD782CL;
                        (*g_644) |= 0x1771F72AL;
                        if (l_1605)
                            continue;
                    }
                    for (g_123 = 0; (g_123 >= 15); g_123 = safe_add_func_int16_t_s_s(g_123, 1))
                    {
                        if (l_1608)
                            break;
                        g_124 = l_1610[1][3];

                        ;
                    }
                }

                ;
                for (g_462 = 0; (g_462 > (-24)); g_462 = safe_sub_func_uint16_t_u_u(g_462, 7))
                {
                    long long l_1618[8][2] = {{8L, 8L}, {8L, 8L}, {8L, 8L}, {8L, 8L}, {8L, 8L}, {8L, 8L}, {8L, 8L}, {8L, 8L}};
                    unsigned char *l_1625 = (void*)0;
                    unsigned char *l_1626 = &l_1384;
                    int *l_1627[3];
                    int l_1639 = 0xA0E369D0L;
                    int i, j;
                    for (i = 0; i < 3; i++)
                        l_1627[i] = (void*)0;
                    l_1627[0] = ((l_1613 | ((safe_rshift_func_int16_t_s_s(7L, ((l_1617 = l_1616) == (l_1618[6][1] , (*g_871))))) && (*g_526))) , l_1627[0]);

                    ;
                    (*g_406) = (((**g_707) |= (safe_div_func_int16_t_s_s((((((void*)0 == l_1630) , ((**l_1616) &= (**g_1582))) != (safe_lshift_func_uint16_t_u_u((l_1633 > (((((*l_1371) = (((safe_add_func_uint32_t_u_u((((l_1613 && l_1636) , &g_1321) != (void*)0), l_1637[1][0][4])) ^ (**g_525)) && g_1638)) == (*g_1583)) < l_1639) >= 0x3FL)), 3))) , 0xD099L), (*g_907)))) <= l_1640[3]);
                }

                ;
            }
            else
            {
                short *l_1647 = &l_1369;
                short *l_1649 = &l_1646;
                int l_1654 = (-1L);
                short ***l_1655 = &g_938[1];
                unsigned long long l_1658 = 0x9FA4C7E19484288CLL;
                unsigned ***l_1659 = &g_1403;
                int l_1721 = (-1L);
                (*l_1567) = (safe_lshift_func_int16_t_s_u((safe_unary_minus_func_int32_t_s((safe_mul_func_int16_t_s_s(((*l_1647) = ((*l_1382) = (*l_1567))), ((*l_1649) = ((void*)0 == l_1648)))))), 10));
                if (((safe_mul_func_int8_t_s_s(((**g_707) = ((((!(((*l_1382) &= (+l_1369)) > (safe_sub_func_uint32_t_u_u((*g_1583), ((safe_lshift_func_int16_t_s_u(((*g_1583) & ((func_25(((((&g_469[2][5][4] != &l_1637[0][0][8]) >= 0xF086L) ^ 3L) , &g_1638), l_1654, &g_239[0], l_1658, &g_9) | l_1658) != 0L)), (*g_907))) , 0xE5F58555L))))) != (*g_708)) , &g_1403) != l_1659)), l_1654)) && 0xDA53AEF2L))
                {
                    unsigned char l_1662[7][9][4] = {{{0x26L, 0x64L, 0xFDL, 0xB9L}, {0x26L, 0x64L, 0xFDL, 0xB9L}, {0x26L, 0x64L, 0xFDL, 0xB9L}, {0x26L, 0x64L, 0xFDL, 0xB9L}, {0x26L, 0x64L, 0xFDL, 0xB9L}, {0x26L, 0x64L, 0xFDL, 0xB9L}, {0x26L, 0x64L, 0xFDL, 0xB9L}, {0x26L, 0x64L, 0xFDL, 0xB9L}, {0x26L, 0x64L, 0xFDL, 0xB9L}}, {{0x26L, 0x64L, 0xFDL, 0xB9L}, {0x26L, 0x64L, 0xFDL, 0xB9L}, {0x26L, 0x64L, 0xFDL, 0xB9L}, {0x26L, 0x64L, 0xFDL, 0xB9L}, {0x26L, 0x64L, 0xFDL, 0xB9L}, {0x26L, 0x64L, 0xFDL, 0xB9L}, {0x26L, 0x64L, 0xFDL, 0xB9L}, {0x26L, 0x64L, 0xFDL, 0xB9L}, {0x26L, 0x64L, 0xFDL, 0xB9L}}, {{0x26L, 0x64L, 0xFDL, 0xB9L}, {0x26L, 0x64L, 0xFDL, 0xB9L}, {0x26L, 0x64L, 0xFDL, 0xB9L}, {0x26L, 0x64L, 0xFDL, 0xB9L}, {0x26L, 0x64L, 0xFDL, 0xB9L}, {0x26L, 0x64L, 0xFDL, 0xB9L}, {0x26L, 0x64L, 0xFDL, 0xB9L}, {0x26L, 0x64L, 0xFDL, 0xB9L}, {0x26L, 0x64L, 0xFDL, 0xB9L}}, {{0x26L, 0x64L, 0xFDL, 0xB9L}, {0x26L, 0x64L, 0xFDL, 0xB9L}, {0x26L, 0x64L, 0xFDL, 0xB9L}, {0x26L, 0x64L, 0xFDL, 0xB9L}, {0x26L, 0x64L, 0xFDL, 0xB9L}, {0x26L, 0x64L, 0xFDL, 0xB9L}, {0x26L, 0x64L, 0xFDL, 0xB9L}, {0x26L, 0x64L, 0xFDL, 0xB9L}, {0x26L, 0x64L, 0xFDL, 0xB9L}}, {{0x26L, 0x64L, 0xFDL, 0xB9L}, {0x26L, 0x64L, 0xFDL, 0xB9L}, {0x26L, 0x64L, 0xFDL, 0xB9L}, {0x26L, 0x64L, 0xFDL, 0xB9L}, {0x26L, 0x64L, 0xFDL, 0xB9L}, {0x26L, 0x64L, 0xFDL, 0xB9L}, {0x26L, 0x64L, 0xFDL, 0xB9L}, {0x26L, 0x64L, 0xFDL, 0xB9L}, {0x26L, 0x64L, 0xFDL, 0xB9L}}, {{0x26L, 0x64L, 0xFDL, 0xB9L}, {0x26L, 0x64L, 0xFDL, 0xB9L}, {0x26L, 0x64L, 0xFDL, 0xB9L}, {0x26L, 0x64L, 0xFDL, 0xB9L}, {0x26L, 0x64L, 0xFDL, 0xB9L}, {0x26L, 0x64L, 0xFDL, 0xB9L}, {0x26L, 0x64L, 0xFDL, 0xB9L}, {0x26L, 0x64L, 0xFDL, 0xB9L}, {0x26L, 0x64L, 0xFDL, 0xB9L}}, {{0x26L, 0x64L, 0xFDL, 0xB9L}, {0x26L, 0x64L, 0xFDL, 0xB9L}, {0x26L, 0x64L, 0xFDL, 0xB9L}, {0x26L, 0x64L, 0xFDL, 0xB9L}, {0x26L, 0x64L, 0xFDL, 0xB9L}, {0x26L, 0x64L, 0xFDL, 0xB9L}, {0x26L, 0x64L, 0xFDL, 0xB9L}, {0x26L, 0x64L, 0xFDL, 0xB9L}, {0x26L, 0x64L, 0xFDL, 0xB9L}}};
                    int *l_1667 = &l_1654;
                    int l_1679[5][7][6] = {{{(-5L), (-2L), 0xADDB16A6L, (-2L), (-5L), (-3L)}, {(-5L), (-2L), 0xADDB16A6L, (-2L), (-5L), (-3L)}, {(-5L), (-2L), 0xADDB16A6L, (-2L), (-5L), (-3L)}, {(-5L), (-2L), 0xADDB16A6L, (-2L), (-5L), (-3L)}, {(-5L), (-2L), 0xADDB16A6L, (-2L), (-5L), (-3L)}, {(-5L), (-2L), 0xADDB16A6L, (-2L), (-5L), (-3L)}, {(-5L), (-2L), 0xADDB16A6L, (-2L), (-5L), (-3L)}}, {{(-5L), (-2L), 0xADDB16A6L, (-2L), (-5L), (-3L)}, {(-5L), (-2L), 0xADDB16A6L, (-2L), (-5L), (-3L)}, {(-5L), (-2L), 0xADDB16A6L, (-2L), (-5L), (-3L)}, {(-5L), (-2L), 0xADDB16A6L, (-2L), (-5L), (-3L)}, {(-5L), (-2L), 0xADDB16A6L, (-2L), (-5L), (-3L)}, {(-5L), (-2L), 0xADDB16A6L, (-2L), (-5L), (-3L)}, {(-5L), (-2L), 0xADDB16A6L, (-2L), (-5L), (-3L)}}, {{(-5L), (-2L), 0xADDB16A6L, (-2L), (-5L), (-3L)}, {(-5L), (-2L), 0xADDB16A6L, (-2L), (-5L), (-3L)}, {(-5L), (-2L), 0xADDB16A6L, (-2L), (-5L), (-3L)}, {(-5L), (-2L), 0xADDB16A6L, (-2L), (-5L), (-3L)}, {(-5L), (-2L), 0xADDB16A6L, (-2L), (-5L), (-3L)}, {(-5L), (-2L), 0xADDB16A6L, (-2L), (-5L), (-3L)}, {(-5L), (-2L), 0xADDB16A6L, (-2L), (-5L), (-3L)}}, {{(-5L), (-2L), 0xADDB16A6L, (-2L), (-5L), (-3L)}, {(-5L), (-2L), 0xADDB16A6L, (-2L), (-5L), (-3L)}, {(-5L), (-2L), 0xADDB16A6L, (-2L), (-5L), (-3L)}, {(-5L), (-2L), 0xADDB16A6L, (-2L), (-5L), (-3L)}, {(-5L), (-2L), 0xADDB16A6L, (-2L), (-5L), (-3L)}, {(-5L), (-2L), 0xADDB16A6L, (-2L), (-5L), (-3L)}, {(-5L), (-2L), 0xADDB16A6L, (-2L), (-5L), (-3L)}}, {{(-5L), (-2L), 0xADDB16A6L, (-2L), (-5L), (-3L)}, {(-5L), (-2L), 0xADDB16A6L, (-2L), (-5L), (-3L)}, {(-5L), (-2L), 0xADDB16A6L, (-2L), (-5L), (-3L)}, {(-5L), (-2L), 0xADDB16A6L, (-2L), (-5L), (-3L)}, {(-5L), (-2L), 0xADDB16A6L, (-2L), (-5L), (-3L)}, {(-5L), (-2L), 0xADDB16A6L, (-2L), (-5L), (-3L)}, {(-5L), (-2L), 0xADDB16A6L, (-2L), (-5L), (-3L)}}};
                    int i, j, k;
                    (*l_1374) = (safe_div_func_int8_t_s_s(l_1658, (**g_707)));
                    if ((func_25(&l_1654, l_1662[5][8][2], &l_1581, g_462, &g_1638) || (*g_526)))
                    {
                        return g_1664;



                    }
                    else
                    {
                        long long l_1668 = 0x25E3125602B39E55LL;
                        int **l_1670[9] = {(void*)0, &l_1374, (void*)0, &l_1374, (void*)0, &l_1374, (void*)0, &l_1374, (void*)0};
                        unsigned char *l_1671 = &l_1662[5][8][2];
                        int *l_1672 = &g_5;
                        int i;
                        (*g_644) ^= (safe_rshift_func_int16_t_s_s(func_25(l_1667, l_1658, &g_318[2][6], ((((*g_1436) == (void*)0) <= (l_1669 = (l_1668 = l_1654))) > func_25(l_1672, l_1658, &g_239[1], g_65[1][0], l_1667)), l_1610[1][3]), 7));
                        l_1667 = (g_910[5][0][2] = &l_1654);


                        l_1654 = 0x2826DBA1L;
                        (*g_644) ^= (*g_406);
                    }


                    if ((*g_644))
                    {
                        unsigned long long l_1673 = 0x27F9FE3B3FE85071LL;
                        unsigned char *l_1674 = &g_57[2][3][0];
                        char *l_1676 = &l_1491[0][0];
                        unsigned char *l_1677 = &l_1662[2][8][0];
                        int **l_1678 = &l_1667;
                        (*l_1678) = &g_1638;

                        ;
                    }
                    else
                    {
                        int **l_1680 = &g_1293[0];
                        (*l_1680) = ((g_469[2][2][1] &= g_286) , (l_1679[3][3][5] , l_1667));


                    }


                    ;
                    if ((safe_sub_func_int8_t_s_s((**g_707), (*l_1667))))
                    {
                        unsigned **l_1690 = &g_1404;
                        unsigned char *l_1691[3];
                        int l_1692 = 0xBE249657L;
                        int i;
                        for (i = 0; i < 3; i++)
                            l_1691[i] = &g_238;
                        g_549 = l_1610[7][2];

                        ;
                        (*g_549) = ((safe_sub_func_int8_t_s_s(((*g_1583) >= (*g_1583)), 0x13L)) > (g_1693 = (l_1692 = (((safe_sub_func_int32_t_s_s((*l_1667), l_1687)) ^ ((*g_406) = l_1658)) , (safe_sub_func_uint16_t_u_u((((*l_1690) = l_1667) == (void*)0), 1UL))))));

                        ;
                    }
                    else
                    {
                        return l_1654;





                    }

                    ;
                    ;
                }
                else
                {
                    unsigned long long l_1697 = 0xEBC77588EAEA22CCLL;
                    int l_1698 = 6L;
                    unsigned *l_1701 = &l_1409;
                    unsigned char *l_1702 = &g_238;
                    int *l_1703[6][1] = {{&l_1698}, {&l_1698}, {&l_1698}, {&l_1698}, {&l_1698}, {&l_1698}};
                    int i, j;
                    (*l_1374) &= (safe_unary_minus_func_uint64_t_u((safe_add_func_int16_t_s_s(l_1697, ((l_1698 ^= (**g_525)) | (*g_526))))));
                    if ((((((&l_1432 != (((*l_1702) &= ((*g_406) != (l_1658 | ((*l_1701) &= ((*g_1583) |= ((((*l_1395) = ((void*)0 == &l_1487)) > (+(l_1698 , (l_1699 != &g_708)))) && func_25(&l_1698, l_1700, &g_318[1][2], g_63[5][0], l_1610[1][3]))))))) , &l_1432)) >= (*l_1374)) == l_1654) , l_1613) > (*g_907)))
                    {
                        return l_1658;



                    }
                    else
                    {
                        int **l_1704[10][4] = {{&g_1293[2], &g_1293[0], &g_1293[2], &g_1293[0]}, {&g_1293[2], &g_1293[0], &g_1293[2], &g_1293[0]}, {&g_1293[2], &g_1293[0], &g_1293[2], &g_1293[0]}, {&g_1293[2], &g_1293[0], &g_1293[2], &g_1293[0]}, {&g_1293[2], &g_1293[0], &g_1293[2], &g_1293[0]}, {&g_1293[2], &g_1293[0], &g_1293[2], &g_1293[0]}, {&g_1293[2], &g_1293[0], &g_1293[2], &g_1293[0]}, {&g_1293[2], &g_1293[0], &g_1293[2], &g_1293[0]}, {&g_1293[2], &g_1293[0], &g_1293[2], &g_1293[0]}, {&g_1293[2], &g_1293[0], &g_1293[2], &g_1293[0]}};
                        int ****l_1720 = &g_871;
                        int i, j;
                        l_1610[2][2] = l_1703[3][0];


                        (*l_1374) = func_25(&g_5, (((*l_1371) = ((**g_1582) |= (*l_1374))) , (((safe_div_func_uint32_t_u_u((((*g_1583) , &l_1409) == &l_1409), 4294967289UL)) , l_1721) , (*l_1567))), &g_239[1], g_68, &l_1698);
                        g_371 = &g_284;

                        ;
                    }

                    ;

                }


                ;


                ;

                return l_1658;






            }

            ;
            ;
        }
        else
        {
            short l_1722 = (-4L);
            int *l_1740 = (void*)0;
            unsigned short *l_1743 = (void*)0;
            (*l_1374) = l_1722;
            if ((safe_sub_func_uint64_t_u_u((((*g_907) ^= (&l_1509[4][3] == (void*)0)) < ((*l_1380) = ((void*)0 == &l_1722))), (*g_526))))
            {
                int *l_1727 = &l_1547[0][0][1];
                int **l_1728 = &g_371;
                long long **l_1739 = (void*)0;
                unsigned char *l_1745 = &g_1546;
                unsigned long long l_1746 = 0x5622F8191A76621FLL;
                for (g_68 = 0; g_68 < 6; g_68 += 1)
                {
                    l_1640[g_68] = 1L;
                }
                (*l_1567) &= 0x67FC00B6L;
                (*l_1728) = l_1727;

                ;
                (*g_406) ^= (safe_add_func_uint64_t_u_u((safe_sub_func_uint64_t_u_u((safe_sub_func_uint16_t_u_u((*g_907), (safe_lshift_func_uint8_t_u_u((~(safe_mod_func_int16_t_s_s(((void*)0 == l_1739), (l_1722 | ((*l_1745) = ((l_1722 > (*l_1374)) > (((!l_1640[3]) & (((*l_1567) || 1L) , 6L)) || (**g_707)))))))), 3)))), l_1746)), (*l_1374)));
            }
            else
            {
                (*l_1567) = ((*l_1374) &= (*g_406));
            }


            for (g_1664 = 0; (g_1664 <= 0); g_1664 += 1)
            {
                int i;
                if (g_612[g_1664])
                    break;
            }
        }

        ;


        if ((((*g_406) = (*l_1744)) != (safe_mod_func_uint64_t_u_u(((*g_87) ^= l_1580), (safe_div_func_uint64_t_u_u((l_1509[4][3] == (((safe_div_func_int64_t_s_s((l_1753 >= (safe_rshift_func_uint16_t_u_s(((safe_add_func_int16_t_s_s((((*g_526) = (*l_1567)) == ((*g_708) > (safe_rshift_func_uint8_t_u_u(((l_1509[1][3] >= (g_264 < (safe_lshift_func_uint16_t_u_u(0x6B59L, (*g_907))))) <= (*g_1583)), 3)))), (*g_907))) == 0xA90B394CL), l_1369))), 0xB9AEE99C31501A6DLL)) != (**g_1582)) , (*g_644))), 0xDCF6758350AF77C3LL))))))
        {
            unsigned char l_1766 = 0xD7L;
            int l_1769[4][10] = {{3L, 0L, 3L, 0L, 3L, 0L, 3L, 0L, 3L, 0L}, {3L, 0L, 3L, 0L, 3L, 0L, 3L, 0L, 3L, 0L}, {3L, 0L, 3L, 0L, 3L, 0L, 3L, 0L, 3L, 0L}, {3L, 0L, 3L, 0L, 3L, 0L, 3L, 0L, 3L, 0L}};
            unsigned short *l_1774 = &g_239[1];
            int i, j;
            for (g_264 = 0; (g_264 <= 22); ++g_264)
            {
                short l_1772[7] = {0L, 0xFAC8L, 0L, 0xFAC8L, 0L, 0xFAC8L, 0L};
                int *l_1778[4] = {(void*)0, &g_1638, (void*)0, &g_1638};
                unsigned l_1783 = 0xE2297F47L;
                unsigned short *l_1792 = &l_1633;
                int i;
                for (g_284 = (-10); (g_284 > 2); g_284 = safe_add_func_uint8_t_u_u(g_284, 1))
                {
                    (*l_1567) |= l_1766;
                }
                for (g_1664 = 0; (g_1664 >= 24); g_1664 = safe_add_func_int8_t_s_s(g_1664, 7))
                {
                    int l_1775 = 0xED0DDA72L;
                    int **l_1776 = &g_644;
                    for (g_853 = 0; (g_853 >= 0); g_853 -= 1)
                    {
                        int i, j;
                        l_1744 = (void*)0;

                        ;
                        l_1769[1][9] ^= (~l_1491[g_853][(g_853 + 2)]);
                        l_1772[4] &= (safe_lshift_func_uint8_t_u_s(l_1769[1][9], 7));
                    }
                    (*g_406) &= (0xADL == func_25(g_1773, l_1772[0], l_1774, l_1775, ((((*l_1374) & 2L) || ((l_1776 = (*g_871)) != (((-7L) == l_1777) , (*g_871)))) , l_1778[0])));

                    ;
                    ;
                    for (l_1379 = (-23); (l_1379 >= 21); l_1379++)
                    {
                        (*g_1773) = l_1766;
                    }
                    (*g_1773) = (((safe_mul_func_uint16_t_u_u(0x0F5BL, (*g_907))) && 0x28CC65C2L) != (l_1783 <= ((safe_sub_func_uint32_t_u_u((*g_1583), (safe_lshift_func_int8_t_s_u(0L, (+(((*g_526) = ((safe_mul_func_int8_t_s_s((**g_707), func_25(&g_5, l_1793[0][3], &g_318[2][1], g_1546, &l_1769[0][4]))) , (**g_525))) == 0xE6BD8D039BDA2323LL)))))) , l_1775)));
                }
            }

            ;
        }
        else
        {
            unsigned long long l_1796[5] = {7UL, 0xD6B5C4A9C95B9755LL, 7UL, 0xD6B5C4A9C95B9755LL, 7UL};
            int *l_1802 = &l_1637[1][0][4];
            int *l_1803 = &g_1523;
            char l_1804 = (-1L);
            int *l_1805 = &g_284;
            int i;
            l_1806 = l_1805;

            ;
            (*g_644) ^= 0x9F8527EAL;
            for (g_264 = 0; (g_264 != (-16)); g_264--)
            {
                int *l_1809 = (void*)0;
                int **l_1810[1][3][8] = {{{(void*)0, &g_910[6][0][4], &g_910[3][0][2], &g_910[6][0][4], (void*)0, &l_1744, (void*)0, &g_910[6][0][4]}, {(void*)0, &g_910[6][0][4], &g_910[3][0][2], &g_910[6][0][4], (void*)0, &l_1744, (void*)0, &g_910[6][0][4]}, {(void*)0, &g_910[6][0][4], &g_910[3][0][2], &g_910[6][0][4], (void*)0, &l_1744, (void*)0, &g_910[6][0][4]}}};
                int i, j, k;
                g_644 = l_1809;

                ;
                (*g_1773) = (-4L);
                l_1567 = (void*)0;

                ;
                (*l_1805) = (*l_1744);
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



    ;
    ;
    ;
    (*g_406) = ((*g_406) > (((safe_rshift_func_uint8_t_u_u(((*l_1820) = (safe_lshift_func_int16_t_s_s(((0x5C69L & (safe_rshift_func_uint16_t_u_u(0xBE63L, (*l_1374)))) || l_1819), 8))), 4)) , &g_525) == l_1821));
    for (g_297 = 16; (g_297 >= (-20)); g_297 = safe_sub_func_int32_t_s_s(g_297, 1))
    {
        int **l_1825 = &l_1744;
        (*l_1825) = l_1824;

        ;
    }
    return (*l_1374);
}







static unsigned func_6(unsigned p_7)
{
    int *l_8 = &g_9;
    int l_966 = 0x3F85E67FL;
    unsigned short *l_985 = &g_318[0][3];
    int *l_986 = &g_284;
    int *l_987 = &g_5;
    char l_995 = 0L;
    unsigned long long *l_1018 = &g_286;
    short **l_1085 = &g_939;
    unsigned short l_1087[8][3][6] = {{{0x3C20L, 0x2391L, 1UL, 6UL, 0UL, 0x62AFL}, {0x3C20L, 0x2391L, 1UL, 6UL, 0UL, 0x62AFL}, {0x3C20L, 0x2391L, 1UL, 6UL, 0UL, 0x62AFL}}, {{0x3C20L, 0x2391L, 1UL, 6UL, 0UL, 0x62AFL}, {0x3C20L, 0x2391L, 1UL, 6UL, 0UL, 0x62AFL}, {0x3C20L, 0x2391L, 1UL, 6UL, 0UL, 0x62AFL}}, {{0x3C20L, 0x2391L, 1UL, 6UL, 0UL, 0x62AFL}, {0x3C20L, 0x2391L, 1UL, 6UL, 0UL, 0x62AFL}, {0x3C20L, 0x2391L, 1UL, 6UL, 0UL, 0x62AFL}}, {{0x3C20L, 0x2391L, 1UL, 6UL, 0UL, 0x62AFL}, {0x3C20L, 0x2391L, 1UL, 6UL, 0UL, 0x62AFL}, {0x3C20L, 0x2391L, 1UL, 6UL, 0UL, 0x62AFL}}, {{0x3C20L, 0x2391L, 1UL, 6UL, 0UL, 0x62AFL}, {0x3C20L, 0x2391L, 1UL, 6UL, 0UL, 0x62AFL}, {0x3C20L, 0x2391L, 1UL, 6UL, 0UL, 0x62AFL}}, {{0x3C20L, 0x2391L, 1UL, 6UL, 0UL, 0x62AFL}, {0x3C20L, 0x2391L, 1UL, 6UL, 0UL, 0x62AFL}, {0x3C20L, 0x2391L, 1UL, 6UL, 0UL, 0x62AFL}}, {{0x3C20L, 0x2391L, 1UL, 6UL, 0UL, 0x62AFL}, {0x3C20L, 0x2391L, 1UL, 6UL, 0UL, 0x62AFL}, {0x3C20L, 0x2391L, 1UL, 6UL, 0UL, 0x62AFL}}, {{0x3C20L, 0x2391L, 1UL, 6UL, 0UL, 0x62AFL}, {0x3C20L, 0x2391L, 1UL, 6UL, 0UL, 0x62AFL}, {0x3C20L, 0x2391L, 1UL, 6UL, 0UL, 0x62AFL}}};
    unsigned *l_1091[9] = {&g_340, &g_735, &g_340, &g_735, &g_340, &g_735, &g_340, &g_735, &g_340};
    unsigned **l_1090[3];
    int l_1107[7][8][3] = {{{0xE61991B1L, 0xFCEB7339L, 0L}, {0xE61991B1L, 0xFCEB7339L, 0L}, {0xE61991B1L, 0xFCEB7339L, 0L}, {0xE61991B1L, 0xFCEB7339L, 0L}, {0xE61991B1L, 0xFCEB7339L, 0L}, {0xE61991B1L, 0xFCEB7339L, 0L}, {0xE61991B1L, 0xFCEB7339L, 0L}, {0xE61991B1L, 0xFCEB7339L, 0L}}, {{0xE61991B1L, 0xFCEB7339L, 0L}, {0xE61991B1L, 0xFCEB7339L, 0L}, {0xE61991B1L, 0xFCEB7339L, 0L}, {0xE61991B1L, 0xFCEB7339L, 0L}, {0xE61991B1L, 0xFCEB7339L, 0L}, {0xE61991B1L, 0xFCEB7339L, 0L}, {0xE61991B1L, 0xFCEB7339L, 0L}, {0xE61991B1L, 0xFCEB7339L, 0L}}, {{0xE61991B1L, 0xFCEB7339L, 0L}, {0xE61991B1L, 0xFCEB7339L, 0L}, {0xE61991B1L, 0xFCEB7339L, 0L}, {0xE61991B1L, 0xFCEB7339L, 0L}, {0xE61991B1L, 0xFCEB7339L, 0L}, {0xE61991B1L, 0xFCEB7339L, 0L}, {0xE61991B1L, 0xFCEB7339L, 0L}, {0xE61991B1L, 0xFCEB7339L, 0L}}, {{0xE61991B1L, 0xFCEB7339L, 0L}, {0xE61991B1L, 0xFCEB7339L, 0L}, {0xE61991B1L, 0xFCEB7339L, 0L}, {0xE61991B1L, 0xFCEB7339L, 0L}, {0xE61991B1L, 0xFCEB7339L, 0L}, {0xE61991B1L, 0xFCEB7339L, 0L}, {0xE61991B1L, 0xFCEB7339L, 0L}, {0xE61991B1L, 0xFCEB7339L, 0L}}, {{0xE61991B1L, 0xFCEB7339L, 0L}, {0xE61991B1L, 0xFCEB7339L, 0L}, {0xE61991B1L, 0xFCEB7339L, 0L}, {0xE61991B1L, 0xFCEB7339L, 0L}, {0xE61991B1L, 0xFCEB7339L, 0L}, {0xE61991B1L, 0xFCEB7339L, 0L}, {0xE61991B1L, 0xFCEB7339L, 0L}, {0xE61991B1L, 0xFCEB7339L, 0L}}, {{0xE61991B1L, 0xFCEB7339L, 0L}, {0xE61991B1L, 0xFCEB7339L, 0L}, {0xE61991B1L, 0xFCEB7339L, 0L}, {0xE61991B1L, 0xFCEB7339L, 0L}, {0xE61991B1L, 0xFCEB7339L, 0L}, {0xE61991B1L, 0xFCEB7339L, 0L}, {0xE61991B1L, 0xFCEB7339L, 0L}, {0xE61991B1L, 0xFCEB7339L, 0L}}, {{0xE61991B1L, 0xFCEB7339L, 0L}, {0xE61991B1L, 0xFCEB7339L, 0L}, {0xE61991B1L, 0xFCEB7339L, 0L}, {0xE61991B1L, 0xFCEB7339L, 0L}, {0xE61991B1L, 0xFCEB7339L, 0L}, {0xE61991B1L, 0xFCEB7339L, 0L}, {0xE61991B1L, 0xFCEB7339L, 0L}, {0xE61991B1L, 0xFCEB7339L, 0L}}};
    int *l_1189 = &l_1107[0][1][1];
    long long l_1193 = 0x6577295542F505FELL;
    int *l_1220 = (void*)0;
    unsigned short l_1229 = 0xF1ACL;
    unsigned short *l_1254[1];
    unsigned short l_1266 = 0UL;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_1090[i] = &l_1091[3];
    for (i = 0; i < 1; i++)
        l_1254[i] = &g_318[2][6];
    if (((*l_8) = 0L))
    {
        unsigned short *l_10 = &g_11;
        long long *l_330 = &g_2;
        unsigned l_590[3][9] = {{0UL, 18446744073709551615UL, 0x91416BC2L, 18446744073709551615UL, 0UL, 18446744073709551615UL, 0UL, 18446744073709551615UL, 0x91416BC2L}, {0UL, 18446744073709551615UL, 0x91416BC2L, 18446744073709551615UL, 0UL, 18446744073709551615UL, 0UL, 18446744073709551615UL, 0x91416BC2L}, {0UL, 18446744073709551615UL, 0x91416BC2L, 18446744073709551615UL, 0UL, 18446744073709551615UL, 0UL, 18446744073709551615UL, 0x91416BC2L}};
        int i, j;
        (*g_644) = (((((*l_10) ^= p_7) , func_12((l_8 != (void*)0), (((p_7 , 1L) || func_17(((*l_330) = (safe_div_func_uint32_t_u_u((func_22((0x04L > (-9L))) , ((*l_8) &= (safe_lshift_func_uint16_t_u_s(g_264, p_7)))), 4294967291UL))), &g_318[2][6])) , l_590[1][6]), p_7, p_7)) != (void*)0) != l_966);


        ;
    }
    else
    {
        long long l_973 = (-10L);
        int *l_981 = &g_5;
        unsigned *l_984 = &g_63[3][1];
        short ***l_988[8][5] = {{&g_938[4], &g_938[3], &g_938[1], (void*)0, &g_938[5]}, {&g_938[4], &g_938[3], &g_938[1], (void*)0, &g_938[5]}, {&g_938[4], &g_938[3], &g_938[1], (void*)0, &g_938[5]}, {&g_938[4], &g_938[3], &g_938[1], (void*)0, &g_938[5]}, {&g_938[4], &g_938[3], &g_938[1], (void*)0, &g_938[5]}, {&g_938[4], &g_938[3], &g_938[1], (void*)0, &g_938[5]}, {&g_938[4], &g_938[3], &g_938[1], (void*)0, &g_938[5]}, {&g_938[4], &g_938[3], &g_938[1], (void*)0, &g_938[5]}};
        unsigned char *l_989 = &g_238;
        int *l_992[1];
        int *l_1002 = &g_9;
        int l_1003 = 7L;
        int l_1038 = 8L;
        unsigned long long *l_1059 = &g_68;
        unsigned short *l_1088 = (void*)0;
        short l_1098 = 8L;
        int *l_1108 = &l_1107[3][2][1];
        unsigned long long l_1109[3];
        int l_1110 = (-3L);
        int ***l_1134 = &g_872;
        char l_1219[1][2][9] = {{{1L, 0x7BL, 1L, 0x7BL, 1L, 0x7BL, 1L, 0x7BL, 1L}, {1L, 0x7BL, 1L, 0x7BL, 1L, 0x7BL, 1L, 0x7BL, 1L}}};
        unsigned long long l_1221 = 1UL;
        short l_1338 = 0xD536L;
        int *l_1350 = &g_284;
        unsigned long long l_1363 = 18446744073709551615UL;
        int l_1364[1];
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_992[i] = &l_966;
        for (i = 0; i < 3; i++)
            l_1109[i] = 0UL;
        for (i = 0; i < 1; i++)
            l_1364[i] = (-8L);
        if (((safe_add_func_uint32_t_u_u((safe_lshift_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u(l_973, ((*l_989) = (((p_7 <= ((*g_526) && (safe_sub_func_int8_t_s_s((((safe_lshift_func_int8_t_s_u((((safe_unary_minus_func_int64_t_s((*l_8))) , (((**g_707) &= (safe_mul_func_uint16_t_u_u((*l_8), l_973))) & (*l_8))) >= func_25((func_25(l_981, ((((((*l_984) = ((safe_add_func_int32_t_s_s((l_966 = (p_7 , p_7)), g_57[2][3][0])) == 0xD44956270BA4FB19LL)) , (*g_526)) != (**g_525)) < (*l_981)) , (*l_981)), l_985, g_2, l_986) , l_987), p_7, &g_11, p_7, l_987)), 7)) , l_988[4][0]) == (void*)0), (*l_981))))) , p_7) || (*l_981))))), p_7)), g_11)) && 252UL))
        {
            long long l_1000 = (-2L);
            int l_1020 = 1L;
            int l_1072[10] = {9L, 0xC93EA00BL, 9L, 0xC93EA00BL, 9L, 0xC93EA00BL, 9L, 0xC93EA00BL, 9L, 0xC93EA00BL};
            int i;
            for (g_9 = 0; (g_9 >= 0); g_9 -= 1)
            {
                unsigned short *l_1001 = (void*)0;
                int *l_1024[7] = {&l_966, &l_966, &g_5, &l_966, &l_966, &g_5, &l_966};
                char **l_1026 = (void*)0;
                int i;
                if (g_612[g_9])
                {
                    int *l_990 = &g_9;
                    int **l_991[2];
                    unsigned short *l_1027 = &g_11;
                    unsigned char *l_1030 = &g_238;
                    int l_1044 = 0xCE2ACF41L;
                    unsigned long long **l_1060 = (void*)0;
                    unsigned long long **l_1061 = &g_87;
                    int i;
                    for (i = 0; i < 2; i++)
                        l_991[i] = &g_124;
                    l_1003 = (p_7 <= ((g_612[g_9] |= (~(func_25((l_992[0] = l_990), (l_995 && ((safe_lshift_func_uint16_t_u_s((*g_907), 0)) > (safe_mul_func_uint16_t_u_u(l_1000, (func_25(&l_966, p_7, l_985, p_7, &l_966) > (*l_990)))))), l_1001, (*l_987), l_1002) || 1UL))) , g_612[g_9]));

                    ;
                    if (g_612[g_9])
                    {
                        unsigned long long *l_1017[8][2][4] = {{{&g_286, &g_286, (void*)0, &g_263}, {&g_286, &g_286, (void*)0, &g_263}}, {{&g_286, &g_286, (void*)0, &g_263}, {&g_286, &g_286, (void*)0, &g_263}}, {{&g_286, &g_286, (void*)0, &g_263}, {&g_286, &g_286, (void*)0, &g_263}}, {{&g_286, &g_286, (void*)0, &g_263}, {&g_286, &g_286, (void*)0, &g_263}}, {{&g_286, &g_286, (void*)0, &g_263}, {&g_286, &g_286, (void*)0, &g_263}}, {{&g_286, &g_286, (void*)0, &g_263}, {&g_286, &g_286, (void*)0, &g_263}}, {{&g_286, &g_286, (void*)0, &g_263}, {&g_286, &g_286, (void*)0, &g_263}}, {{&g_286, &g_286, (void*)0, &g_263}, {&g_286, &g_286, (void*)0, &g_263}}};
                        int l_1019 = 4L;
                        int i, j, k;
                        (*l_986) = ((safe_div_func_uint64_t_u_u(((((p_7 & ((*g_907) &= func_25(&l_966, (safe_sub_func_int16_t_s_s((safe_add_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s((safe_mul_func_uint8_t_u_u(p_7, (safe_mod_func_uint64_t_u_u(18446744073709551608UL, ((**g_525) = (((*l_989) = (safe_unary_minus_func_int32_t_s((l_1017[3][0][0] == l_1018)))) | p_7)))))), 0)), (&g_735 != l_992[0]))), 1UL)), l_985, l_1000, l_992[0]))) >= l_1019) ^ p_7) > p_7), p_7)) == 65533UL);
                        l_1019 = (l_1000 ^ p_7);
                        l_1020 = p_7;
                    }
                    else
                    {
                        unsigned l_1023 = 9UL;
                        l_1023 = ((*l_986) = (0L || ((*l_987) && (safe_rshift_func_uint16_t_u_s((*g_907), 15)))));
                        g_124 = &l_966;

                        ;
                        g_910[3][0][0] = l_1024[2];
                        l_1024[2] = l_1002;


                    }

                    ;

                    if (((l_1020 || p_7) && 0UL))
                    {
                        int *l_1025 = &g_284;
                        unsigned char *l_1028 = (void*)0;
                        unsigned char **l_1029 = &l_989;
                        int *l_1031 = &g_469[2][2][1];
                        int l_1039[9] = {0x6B94D31CL, 0xE42EE938L, 0x6B94D31CL, 0xE42EE938L, 0x6B94D31CL, 0xE42EE938L, 0x6B94D31CL, 0xE42EE938L, 0x6B94D31CL};
                        int i;
                        l_1025 = l_1024[1];

                        ;
                        if (l_1000)
                            break;
                        (*l_986) = (((0x6DL == ((*g_87) == ((p_7 <= p_7) && 0x55FE3DBBL))) <= l_1020) < p_7);
                        (*l_986) = (safe_add_func_uint16_t_u_u(func_25(l_1002, (((p_7 >= ((g_65[6][2] , (!(safe_lshift_func_int16_t_s_u(((safe_lshift_func_uint16_t_u_s((0L ^ (*g_644)), p_7)) && (p_7 | (+(((*l_1030) = (l_1038 , l_1039[3])) & g_853)))), (*g_907))))) | l_1020)) & 8UL) != (*g_708)), &g_11, p_7, &g_9), 4UL));

                        ;
                    }
                    else
                    {
                        unsigned long long l_1049[2][7] = {{0x65AEB670DD6B1573LL, 0x0F1727A1969E597BLL, 0x65AEB670DD6B1573LL, 0x0F1727A1969E597BLL, 0x65AEB670DD6B1573LL, 0x0F1727A1969E597BLL, 0x65AEB670DD6B1573LL}, {0x65AEB670DD6B1573LL, 0x0F1727A1969E597BLL, 0x65AEB670DD6B1573LL, 0x0F1727A1969E597BLL, 0x65AEB670DD6B1573LL, 0x0F1727A1969E597BLL, 0x65AEB670DD6B1573LL}};
                        int *l_1052 = (void*)0;
                        int i, j;
                        (*l_986) = (safe_mul_func_uint8_t_u_u(((safe_mod_func_int16_t_s_s((l_1044 |= l_1000), (*g_907))) != (safe_lshift_func_int16_t_s_s(((((safe_add_func_uint32_t_u_u(((p_7 == (l_1049[0][4] , (safe_mod_func_uint8_t_u_u((g_57[2][3][0] = p_7), p_7)))) >= 1L), (*l_981))) || 0x929A1A3CL) , (*l_990)) ^ p_7), p_7))), 0UL));
                        if ((*g_644))
                            break;
                        g_938[3] = &g_939;
                    }
                    if ((l_1072[8] = (safe_div_func_uint64_t_u_u(0UL, (safe_rshift_func_int16_t_s_s(((*l_986) = (safe_lshift_func_uint16_t_u_s((((*l_1061) = l_1059) != (void*)0), 5))), (((~(g_462 | (safe_lshift_func_int16_t_s_u((safe_add_func_int16_t_s_s((l_1020 = 0xB34FL), p_7)), 8)))) , ((((((safe_div_func_uint64_t_u_u(((safe_lshift_func_uint16_t_u_s((l_1020 >= (safe_rshift_func_int8_t_s_s(((((*l_990) <= p_7) == p_7) ^ (*l_981)), l_1000))), 1)) | p_7), (-10L))) | (*l_981)) , p_7) != 0x2F5BL) | 0x76AA5B6E716E1DCCLL) || g_151)) | (*l_981))))))))
                    {
                        (*g_644) = (-7L);
                        g_1073 = l_992[0];

                        ;
                    }
                    else
                    {
                        int l_1074 = 0xB1A5B099L;
                        (*l_986) &= l_1074;
                    }
                }
                else
                {
                    int **l_1075 = &g_371;
                    int l_1076 = 0xEC8B1582L;
                    (*l_1075) = l_1024[2];

                    ;
                    return l_1076;





                }

                ;

                for (l_995 = 3; (l_995 >= 0); l_995 -= 1)
                {
                    int *l_1077[7][3] = {{(void*)0, &l_1072[8], (void*)0}, {(void*)0, &l_1072[8], (void*)0}, {(void*)0, &l_1072[8], (void*)0}, {(void*)0, &l_1072[8], (void*)0}, {(void*)0, &l_1072[8], (void*)0}, {(void*)0, &l_1072[8], (void*)0}, {(void*)0, &l_1072[8], (void*)0}};
                    int i, j;
                    for (g_297 = 3; (g_297 >= 0); g_297 -= 1)
                    {
                        unsigned short **l_1082 = &l_1001;
                        short **l_1086 = &g_939;
                        int *l_1089[2];
                        int i, j, k;
                        for (i = 0; i < 2; i++)
                            l_1089[i] = &g_5;
                        (*l_986) &= (((*g_907) , p_7) | (*g_708));
                        return g_68;




                    }
                }
            }

            ;


            ;
            return p_7;




        }
        else
        {
            unsigned ***l_1092 = &l_1090[2];
            (*l_1092) = l_1090[2];
        }

        ;
        for (g_264 = 2; (g_264 == (-16)); g_264--)
        {
            int *l_1097 = &g_9;
            unsigned short *l_1099 = &g_239[1];
            long long l_1111 = 0x297901D0DA1A27DCLL;
            unsigned l_1113 = 0x3740E355L;
            int ***l_1124 = &g_872;
            unsigned short *l_1172 = (void*)0;
            unsigned short *l_1184 = &l_1087[4][0][2];
            unsigned long long l_1192 = 0xDFA87D95C3C83114LL;
            int *l_1204 = (void*)0;
            unsigned long long **l_1247[6][9] = {{(void*)0, (void*)0, &g_87, &l_1018, &l_1059, &l_1018, &g_87, (void*)0, (void*)0}, {(void*)0, (void*)0, &g_87, &l_1018, &l_1059, &l_1018, &g_87, (void*)0, (void*)0}, {(void*)0, (void*)0, &g_87, &l_1018, &l_1059, &l_1018, &g_87, (void*)0, (void*)0}, {(void*)0, (void*)0, &g_87, &l_1018, &l_1059, &l_1018, &g_87, (void*)0, (void*)0}, {(void*)0, (void*)0, &g_87, &l_1018, &l_1059, &l_1018, &g_87, (void*)0, (void*)0}, {(void*)0, (void*)0, &g_87, &l_1018, &l_1059, &l_1018, &g_87, (void*)0, (void*)0}};
            int i, j;
        }
        (*g_1073) = 8L;
        (*l_1189) &= (safe_add_func_uint64_t_u_u(((*l_1350) < p_7), ((((((((void*)0 != &l_1219[0][1][8]) <= ((func_25(&l_966, p_7, &g_318[0][0], g_239[1], &l_1364[0]) , 0UL) , p_7)) >= (**g_525)) , l_1018) == (void*)0) , (*l_987)) || p_7)));

        ;
    }


    ;
    return (*l_987);
}







static int * func_12(unsigned p_13, long long p_14, unsigned p_15, short p_16)
{
    int **l_601 = (void*)0;
    int l_609 = 6L;
    unsigned short *l_615 = &g_239[1];
    int *l_619 = &l_609;
    int *l_651[9][10] = {{(void*)0, (void*)0, &g_5, &l_609, (void*)0, (void*)0, (void*)0, &l_609, &g_5, (void*)0}, {(void*)0, (void*)0, &g_5, &l_609, (void*)0, (void*)0, (void*)0, &l_609, &g_5, (void*)0}, {(void*)0, (void*)0, &g_5, &l_609, (void*)0, (void*)0, (void*)0, &l_609, &g_5, (void*)0}, {(void*)0, (void*)0, &g_5, &l_609, (void*)0, (void*)0, (void*)0, &l_609, &g_5, (void*)0}, {(void*)0, (void*)0, &g_5, &l_609, (void*)0, (void*)0, (void*)0, &l_609, &g_5, (void*)0}, {(void*)0, (void*)0, &g_5, &l_609, (void*)0, (void*)0, (void*)0, &l_609, &g_5, (void*)0}, {(void*)0, (void*)0, &g_5, &l_609, (void*)0, (void*)0, (void*)0, &l_609, &g_5, (void*)0}, {(void*)0, (void*)0, &g_5, &l_609, (void*)0, (void*)0, (void*)0, &l_609, &g_5, (void*)0}, {(void*)0, (void*)0, &g_5, &l_609, (void*)0, (void*)0, (void*)0, &l_609, &g_5, (void*)0}};
    unsigned l_693 = 1UL;
    unsigned char *l_704 = &g_57[2][1][3];
    char **l_709 = (void*)0;
    int *l_716 = &g_5;
    int *l_757 = &g_284;
    long long **l_780 = (void*)0;
    unsigned long long ***l_784 = &g_86[2][6];
    char l_848 = 0L;
    long long l_856 = 1L;
    int l_870[9][4] = {{(-9L), (-9L), 0L, (-3L)}, {(-9L), (-9L), 0L, (-3L)}, {(-9L), (-9L), 0L, (-3L)}, {(-9L), (-9L), 0L, (-3L)}, {(-9L), (-9L), 0L, (-3L)}, {(-9L), (-9L), 0L, (-3L)}, {(-9L), (-9L), 0L, (-3L)}, {(-9L), (-9L), 0L, (-3L)}, {(-9L), (-9L), 0L, (-3L)}};
    long long l_892 = 0x960B99EA5BDCA24FLL;
    unsigned l_908 = 4294967293UL;
    int ***l_929[8][4][8] = {{{&l_601, &g_872, &g_872, &g_872, &l_601, &l_601, &g_872, &g_872}, {&l_601, &g_872, &g_872, &g_872, &l_601, &l_601, &g_872, &g_872}, {&l_601, &g_872, &g_872, &g_872, &l_601, &l_601, &g_872, &g_872}, {&l_601, &g_872, &g_872, &g_872, &l_601, &l_601, &g_872, &g_872}}, {{&l_601, &g_872, &g_872, &g_872, &l_601, &l_601, &g_872, &g_872}, {&l_601, &g_872, &g_872, &g_872, &l_601, &l_601, &g_872, &g_872}, {&l_601, &g_872, &g_872, &g_872, &l_601, &l_601, &g_872, &g_872}, {&l_601, &g_872, &g_872, &g_872, &l_601, &l_601, &g_872, &g_872}}, {{&l_601, &g_872, &g_872, &g_872, &l_601, &l_601, &g_872, &g_872}, {&l_601, &g_872, &g_872, &g_872, &l_601, &l_601, &g_872, &g_872}, {&l_601, &g_872, &g_872, &g_872, &l_601, &l_601, &g_872, &g_872}, {&l_601, &g_872, &g_872, &g_872, &l_601, &l_601, &g_872, &g_872}}, {{&l_601, &g_872, &g_872, &g_872, &l_601, &l_601, &g_872, &g_872}, {&l_601, &g_872, &g_872, &g_872, &l_601, &l_601, &g_872, &g_872}, {&l_601, &g_872, &g_872, &g_872, &l_601, &l_601, &g_872, &g_872}, {&l_601, &g_872, &g_872, &g_872, &l_601, &l_601, &g_872, &g_872}}, {{&l_601, &g_872, &g_872, &g_872, &l_601, &l_601, &g_872, &g_872}, {&l_601, &g_872, &g_872, &g_872, &l_601, &l_601, &g_872, &g_872}, {&l_601, &g_872, &g_872, &g_872, &l_601, &l_601, &g_872, &g_872}, {&l_601, &g_872, &g_872, &g_872, &l_601, &l_601, &g_872, &g_872}}, {{&l_601, &g_872, &g_872, &g_872, &l_601, &l_601, &g_872, &g_872}, {&l_601, &g_872, &g_872, &g_872, &l_601, &l_601, &g_872, &g_872}, {&l_601, &g_872, &g_872, &g_872, &l_601, &l_601, &g_872, &g_872}, {&l_601, &g_872, &g_872, &g_872, &l_601, &l_601, &g_872, &g_872}}, {{&l_601, &g_872, &g_872, &g_872, &l_601, &l_601, &g_872, &g_872}, {&l_601, &g_872, &g_872, &g_872, &l_601, &l_601, &g_872, &g_872}, {&l_601, &g_872, &g_872, &g_872, &l_601, &l_601, &g_872, &g_872}, {&l_601, &g_872, &g_872, &g_872, &l_601, &l_601, &g_872, &g_872}}, {{&l_601, &g_872, &g_872, &g_872, &l_601, &l_601, &g_872, &g_872}, {&l_601, &g_872, &g_872, &g_872, &l_601, &l_601, &g_872, &g_872}, {&l_601, &g_872, &g_872, &g_872, &l_601, &l_601, &g_872, &g_872}, {&l_601, &g_872, &g_872, &g_872, &l_601, &l_601, &g_872, &g_872}}};
    int i, j, k;
    for (g_149 = (-21); (g_149 >= 10); g_149 = safe_add_func_int16_t_s_s(g_149, 1))
    {
        int l_618[2][9] = {{(-1L), (-9L), 1L, 0x82918FA1L, 0x82918FA1L, 1L, (-9L), (-1L), 1L}, {(-1L), (-9L), 1L, 0x82918FA1L, 0x82918FA1L, 1L, (-9L), (-1L), 1L}};
        unsigned char *l_620 = &g_57[2][3][0];
        int *l_646 = &l_618[0][1];
        unsigned short *l_647 = &g_318[0][0];
        short l_652[10] = {(-1L), (-1L), 0xC1C5L, (-1L), (-1L), 0xC1C5L, (-1L), (-1L), 0xC1C5L, (-1L)};
        int *l_654 = &l_618[1][4];
        int *l_696 = &l_618[1][4];
        int **l_754[3];
        int i, j;
        for (i = 0; i < 3; i++)
            l_754[i] = (void*)0;
        for (g_284 = (-26); (g_284 == (-19)); g_284++)
        {
            (*g_371) = (*g_406);
        }
        if ((safe_mod_func_uint32_t_u_u(g_263, p_16)))
        {
            unsigned short l_610 = 5UL;
            for (g_9 = 11; (g_9 <= 5); g_9 = safe_sub_func_uint64_t_u_u(g_9, 1))
            {
                int ***l_602 = &l_601;
                unsigned *l_603 = &g_63[5][0];
                int *l_604 = &g_284;
                short *l_608 = &g_264;
                int *l_611[10][1] = {{&l_609}, {&l_609}, {&l_609}, {&l_609}, {&l_609}, {&l_609}, {&l_609}, {&l_609}, {&l_609}, {&l_609}};
                int i, j;
                g_612[0] = (safe_sub_func_int64_t_s_s((p_16 ^ ((((*l_603) = (0x04L & (((*g_87) &= 0UL) , (((*l_602) = l_601) != (void*)0)))) | ((*l_604) ^= 0xAA68083CL)) >= g_5)), ((safe_mul_func_int16_t_s_s((p_16 >= ((*l_608) = (safe_unary_minus_func_int32_t_s(p_16)))), l_609)) != l_610)));
            }
        }
        else
        {
            unsigned l_613 = 4294967287UL;
            int *l_614 = &g_9;
            (*g_406) = ((l_613 | g_318[0][6]) , ((*g_526) < func_25(l_614, p_16, l_615, ((safe_add_func_int16_t_s_s(p_13, l_618[0][1])) , p_16), l_619)));

            ;
            (*l_619) &= (*g_371);
            (*l_619) &= ((void*)0 != l_620);
        }
        for (g_286 = 0; (g_286 > 19); ++g_286)
        {
            long long l_635[6] = {0xFC7A88E9C4E1D4A6LL, 0xFC7A88E9C4E1D4A6LL, 5L, 0xFC7A88E9C4E1D4A6LL, 0xFC7A88E9C4E1D4A6LL, 5L};
            int **l_638 = &g_371;
            unsigned short *l_639 = (void*)0;
            unsigned short l_655 = 1UL;
            unsigned l_676 = 4294967288UL;
            unsigned l_731 = 2UL;
            short l_742 = 0L;
            char *l_750 = (void*)0;
            int i;
        }
        g_124 = &l_618[0][1];

        ;
    }


    for (g_263 = 0; (g_263 >= 18); g_263 = safe_add_func_int32_t_s_s(g_263, 8))
    {
        unsigned char l_758 = 0xC5L;
        unsigned short *l_759 = &g_318[0][0];
        int *l_764 = &g_5;
        unsigned short l_765[3][6][10] = {{{0xCAACL, 65535UL, 0x57B2L, 0x3790L, 0xCAACL, 65535UL, 0xDC84L, 65535UL, 0xCAACL, 0x3790L}, {0xCAACL, 65535UL, 0x57B2L, 0x3790L, 0xCAACL, 65535UL, 0xDC84L, 65535UL, 0xCAACL, 0x3790L}, {0xCAACL, 65535UL, 0x57B2L, 0x3790L, 0xCAACL, 65535UL, 0xDC84L, 65535UL, 0xCAACL, 0x3790L}, {0xCAACL, 65535UL, 0x57B2L, 0x3790L, 0xCAACL, 65535UL, 0xDC84L, 65535UL, 0xCAACL, 0x3790L}, {0xCAACL, 65535UL, 0x57B2L, 0x3790L, 0xCAACL, 65535UL, 0xDC84L, 65535UL, 0xCAACL, 0x3790L}, {0xCAACL, 65535UL, 0x57B2L, 0x3790L, 0xCAACL, 65535UL, 0xDC84L, 65535UL, 0xCAACL, 0x3790L}}, {{0xCAACL, 65535UL, 0x57B2L, 0x3790L, 0xCAACL, 65535UL, 0xDC84L, 65535UL, 0xCAACL, 0x3790L}, {0xCAACL, 65535UL, 0x57B2L, 0x3790L, 0xCAACL, 65535UL, 0xDC84L, 65535UL, 0xCAACL, 0x3790L}, {0xCAACL, 65535UL, 0x57B2L, 0x3790L, 0xCAACL, 65535UL, 0xDC84L, 65535UL, 0xCAACL, 0x3790L}, {0xCAACL, 65535UL, 0x57B2L, 0x3790L, 0xCAACL, 65535UL, 0xDC84L, 65535UL, 0xCAACL, 0x3790L}, {0xCAACL, 65535UL, 0x57B2L, 0x3790L, 0xCAACL, 65535UL, 0xDC84L, 65535UL, 0xCAACL, 0x3790L}, {0xCAACL, 65535UL, 0x57B2L, 0x3790L, 0xCAACL, 65535UL, 0xDC84L, 65535UL, 0xCAACL, 0x3790L}}, {{0xCAACL, 65535UL, 0x57B2L, 0x3790L, 0xCAACL, 65535UL, 0xDC84L, 65535UL, 0xCAACL, 0x3790L}, {0xCAACL, 65535UL, 0x57B2L, 0x3790L, 0xCAACL, 65535UL, 0xDC84L, 65535UL, 0xCAACL, 0x3790L}, {0xCAACL, 65535UL, 0x57B2L, 0x3790L, 0xCAACL, 65535UL, 0xDC84L, 65535UL, 0xCAACL, 0x3790L}, {0xCAACL, 65535UL, 0x57B2L, 0x3790L, 0xCAACL, 65535UL, 0xDC84L, 65535UL, 0xCAACL, 0x3790L}, {0xCAACL, 65535UL, 0x57B2L, 0x3790L, 0xCAACL, 65535UL, 0xDC84L, 65535UL, 0xCAACL, 0x3790L}, {0xCAACL, 65535UL, 0x57B2L, 0x3790L, 0xCAACL, 65535UL, 0xDC84L, 65535UL, 0xCAACL, 0x3790L}}};
        int *l_766 = &g_284;
        int **l_767 = &g_124;
        int l_779 = 0L;
        long long l_810 = 0x3EDFFAE5F632862DLL;
        unsigned l_819 = 0xEECF6DEBL;
        int *l_921 = &g_5;
        long long **l_924 = &g_526;
        int l_940 = 0xBB31F39BL;
        int i, j, k;
        (*g_371) = (g_57[2][3][0] | (1L < (-1L)));
        (*l_767) = l_764;

        ;
        for (g_151 = (-17); (g_151 >= 11); g_151 = safe_add_func_uint32_t_u_u(g_151, 2))
        {
            char l_774[9][6] = {{0xD2L, 0L, 0x2BL, 0L, 0xD2L, 0x02L}, {0xD2L, 0L, 0x2BL, 0L, 0xD2L, 0x02L}, {0xD2L, 0L, 0x2BL, 0L, 0xD2L, 0x02L}, {0xD2L, 0L, 0x2BL, 0L, 0xD2L, 0x02L}, {0xD2L, 0L, 0x2BL, 0L, 0xD2L, 0x02L}, {0xD2L, 0L, 0x2BL, 0L, 0xD2L, 0x02L}, {0xD2L, 0L, 0x2BL, 0L, 0xD2L, 0x02L}, {0xD2L, 0L, 0x2BL, 0L, 0xD2L, 0x02L}, {0xD2L, 0L, 0x2BL, 0L, 0xD2L, 0x02L}};
            short *l_781[7][7][1] = {{{&g_462}, {&g_462}, {&g_462}, {&g_462}, {&g_462}, {&g_462}, {&g_462}}, {{&g_462}, {&g_462}, {&g_462}, {&g_462}, {&g_462}, {&g_462}, {&g_462}}, {{&g_462}, {&g_462}, {&g_462}, {&g_462}, {&g_462}, {&g_462}, {&g_462}}, {{&g_462}, {&g_462}, {&g_462}, {&g_462}, {&g_462}, {&g_462}, {&g_462}}, {{&g_462}, {&g_462}, {&g_462}, {&g_462}, {&g_462}, {&g_462}, {&g_462}}, {{&g_462}, {&g_462}, {&g_462}, {&g_462}, {&g_462}, {&g_462}, {&g_462}}, {{&g_462}, {&g_462}, {&g_462}, {&g_462}, {&g_462}, {&g_462}, {&g_462}}};
            short **l_782 = &l_781[2][1][0];
            unsigned long long ****l_783 = (void*)0;
            unsigned char l_797 = 0x6BL;
            int l_818 = 4L;
            int *l_845 = (void*)0;
            long long l_851 = 0L;
            unsigned char l_857 = 0x6AL;
            int *l_881 = &l_609;
            int ***l_931 = (void*)0;
            unsigned long long l_960[10][7][3] = {{{0xE1856AFDFCA8BC77LL, 6UL, 18446744073709551610UL}, {0xE1856AFDFCA8BC77LL, 6UL, 18446744073709551610UL}, {0xE1856AFDFCA8BC77LL, 6UL, 18446744073709551610UL}, {0xE1856AFDFCA8BC77LL, 6UL, 18446744073709551610UL}, {0xE1856AFDFCA8BC77LL, 6UL, 18446744073709551610UL}, {0xE1856AFDFCA8BC77LL, 6UL, 18446744073709551610UL}, {0xE1856AFDFCA8BC77LL, 6UL, 18446744073709551610UL}}, {{0xE1856AFDFCA8BC77LL, 6UL, 18446744073709551610UL}, {0xE1856AFDFCA8BC77LL, 6UL, 18446744073709551610UL}, {0xE1856AFDFCA8BC77LL, 6UL, 18446744073709551610UL}, {0xE1856AFDFCA8BC77LL, 6UL, 18446744073709551610UL}, {0xE1856AFDFCA8BC77LL, 6UL, 18446744073709551610UL}, {0xE1856AFDFCA8BC77LL, 6UL, 18446744073709551610UL}, {0xE1856AFDFCA8BC77LL, 6UL, 18446744073709551610UL}}, {{0xE1856AFDFCA8BC77LL, 6UL, 18446744073709551610UL}, {0xE1856AFDFCA8BC77LL, 6UL, 18446744073709551610UL}, {0xE1856AFDFCA8BC77LL, 6UL, 18446744073709551610UL}, {0xE1856AFDFCA8BC77LL, 6UL, 18446744073709551610UL}, {0xE1856AFDFCA8BC77LL, 6UL, 18446744073709551610UL}, {0xE1856AFDFCA8BC77LL, 6UL, 18446744073709551610UL}, {0xE1856AFDFCA8BC77LL, 6UL, 18446744073709551610UL}}, {{0xE1856AFDFCA8BC77LL, 6UL, 18446744073709551610UL}, {0xE1856AFDFCA8BC77LL, 6UL, 18446744073709551610UL}, {0xE1856AFDFCA8BC77LL, 6UL, 18446744073709551610UL}, {0xE1856AFDFCA8BC77LL, 6UL, 18446744073709551610UL}, {0xE1856AFDFCA8BC77LL, 6UL, 18446744073709551610UL}, {0xE1856AFDFCA8BC77LL, 6UL, 18446744073709551610UL}, {0xE1856AFDFCA8BC77LL, 6UL, 18446744073709551610UL}}, {{0xE1856AFDFCA8BC77LL, 6UL, 18446744073709551610UL}, {0xE1856AFDFCA8BC77LL, 6UL, 18446744073709551610UL}, {0xE1856AFDFCA8BC77LL, 6UL, 18446744073709551610UL}, {0xE1856AFDFCA8BC77LL, 6UL, 18446744073709551610UL}, {0xE1856AFDFCA8BC77LL, 6UL, 18446744073709551610UL}, {0xE1856AFDFCA8BC77LL, 6UL, 18446744073709551610UL}, {0xE1856AFDFCA8BC77LL, 6UL, 18446744073709551610UL}}, {{0xE1856AFDFCA8BC77LL, 6UL, 18446744073709551610UL}, {0xE1856AFDFCA8BC77LL, 6UL, 18446744073709551610UL}, {0xE1856AFDFCA8BC77LL, 6UL, 18446744073709551610UL}, {0xE1856AFDFCA8BC77LL, 6UL, 18446744073709551610UL}, {0xE1856AFDFCA8BC77LL, 6UL, 18446744073709551610UL}, {0xE1856AFDFCA8BC77LL, 6UL, 18446744073709551610UL}, {0xE1856AFDFCA8BC77LL, 6UL, 18446744073709551610UL}}, {{0xE1856AFDFCA8BC77LL, 6UL, 18446744073709551610UL}, {0xE1856AFDFCA8BC77LL, 6UL, 18446744073709551610UL}, {0xE1856AFDFCA8BC77LL, 6UL, 18446744073709551610UL}, {0xE1856AFDFCA8BC77LL, 6UL, 18446744073709551610UL}, {0xE1856AFDFCA8BC77LL, 6UL, 18446744073709551610UL}, {0xE1856AFDFCA8BC77LL, 6UL, 18446744073709551610UL}, {0xE1856AFDFCA8BC77LL, 6UL, 18446744073709551610UL}}, {{0xE1856AFDFCA8BC77LL, 6UL, 18446744073709551610UL}, {0xE1856AFDFCA8BC77LL, 6UL, 18446744073709551610UL}, {0xE1856AFDFCA8BC77LL, 6UL, 18446744073709551610UL}, {0xE1856AFDFCA8BC77LL, 6UL, 18446744073709551610UL}, {0xE1856AFDFCA8BC77LL, 6UL, 18446744073709551610UL}, {0xE1856AFDFCA8BC77LL, 6UL, 18446744073709551610UL}, {0xE1856AFDFCA8BC77LL, 6UL, 18446744073709551610UL}}, {{0xE1856AFDFCA8BC77LL, 6UL, 18446744073709551610UL}, {0xE1856AFDFCA8BC77LL, 6UL, 18446744073709551610UL}, {0xE1856AFDFCA8BC77LL, 6UL, 18446744073709551610UL}, {0xE1856AFDFCA8BC77LL, 6UL, 18446744073709551610UL}, {0xE1856AFDFCA8BC77LL, 6UL, 18446744073709551610UL}, {0xE1856AFDFCA8BC77LL, 6UL, 18446744073709551610UL}, {0xE1856AFDFCA8BC77LL, 6UL, 18446744073709551610UL}}, {{0xE1856AFDFCA8BC77LL, 6UL, 18446744073709551610UL}, {0xE1856AFDFCA8BC77LL, 6UL, 18446744073709551610UL}, {0xE1856AFDFCA8BC77LL, 6UL, 18446744073709551610UL}, {0xE1856AFDFCA8BC77LL, 6UL, 18446744073709551610UL}, {0xE1856AFDFCA8BC77LL, 6UL, 18446744073709551610UL}, {0xE1856AFDFCA8BC77LL, 6UL, 18446744073709551610UL}, {0xE1856AFDFCA8BC77LL, 6UL, 18446744073709551610UL}}};
            int i, j, k;
            if (((l_784 = ((1L > ((safe_div_func_int8_t_s_s(((safe_sub_func_uint16_t_u_u(l_774[2][4], ((safe_add_func_int8_t_s_s((safe_lshift_func_int16_t_s_u(g_612[0], l_779)), func_25(&l_609, ((-6L) > (!(l_780 != ((((*l_782) = l_781[2][5][0]) != &g_264) , (void*)0)))), &g_318[0][0], g_123, &g_5))) > 65535UL))) > 0x24L), 1L)) ^ g_462)) , (void*)0)) != &g_86[2][6]))
            {
                if (p_14)
                    break;
            }
            else
            {
                unsigned l_798 = 1UL;
                int *l_805 = &l_609;
                unsigned short *l_816 = (void*)0;
                unsigned char l_820 = 0UL;
                int ****l_873[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_873[i] = &g_871;
                if (p_13)
                {
                    (*g_371) ^= ((*l_757) = l_774[2][3]);
                }
                else
                {
                    unsigned char l_785 = 6UL;
                    unsigned short l_786 = 1UL;
                    int l_789 = 0L;
                    int l_790 = (-6L);
                    unsigned char l_799 = 0x90L;
                    l_790 ^= (l_785 || (l_786 == (safe_add_func_uint64_t_u_u((!l_786), ((*g_87) = (((*l_766) ^= l_786) == l_789))))));
                    for (l_758 = 0; (l_758 <= 2); l_758 += 1)
                    {
                        int i, j, k;
                        if (g_469[l_758][(l_758 + 3)][l_758])
                            break;
                        (*l_766) ^= ((*l_619) |= 0xE24CCC2DL);
                    }
                    for (p_15 = 1; (p_15 <= 1); p_15 = safe_add_func_int16_t_s_s(p_15, 1))
                    {
                        int *l_804[8];
                        int i;
                        for (i = 0; i < 8; i++)
                            l_804[i] = &g_284;
                        (*l_619) ^= ((safe_mul_func_int16_t_s_s((l_799 = ((p_15 , l_797) != ((((&g_9 != (void*)0) >= l_798) || (~(*g_644))) != 1L))), (((*l_759) = ((safe_lshift_func_int16_t_s_u(func_25(&g_5, ((((safe_div_func_uint8_t_u_u(g_123, 0xDFL)) < (-5L)) || l_798) , p_14), &g_318[0][0], g_612[0], l_804[7]), g_57[2][3][0])) , g_612[0])) >= 0xD3EAL))) , p_13);
                    }
                }
                if (func_25(l_805, (g_264 &= (safe_rshift_func_uint8_t_u_s(1UL, (((*l_619) = g_318[0][0]) && 65526UL)))), &l_765[2][0][1], ((func_25(&g_284, g_71, &l_765[2][0][1], g_63[3][1], l_805) , (void*)0) != &g_708), &g_284))
                {
                    int l_815 = 0x37AACC61L;
                    int *l_817 = &g_284;
                    l_818 &= (((g_63[5][1] || (safe_add_func_uint8_t_u_u((g_123 >= ((*l_805) > (((safe_div_func_uint8_t_u_u(func_25(&g_284, (l_815 = g_123), l_816, p_14, l_817), p_15)) && 0x1FL) && p_13))), p_14))) ^ 0x89L) ^ p_15);
                    (*g_406) &= func_25(l_817, l_819, &l_765[0][1][7], p_13, l_805);
                    for (g_149 = 2; (g_149 >= 0); g_149 -= 1)
                    {
                        (*l_767) = &g_5;

                        ;
                    }

                    ;
                    if (l_820)
                        continue;
                }
                else
                {
                    unsigned short *l_829 = &g_318[0][0];
                    int l_830 = 0xCFB8C404L;
                    long long *l_831 = &l_810;
                    unsigned *l_832[7][7] = {{&g_63[5][0], &g_63[3][1], &g_63[3][1], &g_63[3][1], &g_63[5][0], &g_63[3][1], &g_63[3][1]}, {&g_63[5][0], &g_63[3][1], &g_63[3][1], &g_63[3][1], &g_63[5][0], &g_63[3][1], &g_63[3][1]}, {&g_63[5][0], &g_63[3][1], &g_63[3][1], &g_63[3][1], &g_63[5][0], &g_63[3][1], &g_63[3][1]}, {&g_63[5][0], &g_63[3][1], &g_63[3][1], &g_63[3][1], &g_63[5][0], &g_63[3][1], &g_63[3][1]}, {&g_63[5][0], &g_63[3][1], &g_63[3][1], &g_63[3][1], &g_63[5][0], &g_63[3][1], &g_63[3][1]}, {&g_63[5][0], &g_63[3][1], &g_63[3][1], &g_63[3][1], &g_63[5][0], &g_63[3][1], &g_63[3][1]}, {&g_63[5][0], &g_63[3][1], &g_63[3][1], &g_63[3][1], &g_63[5][0], &g_63[3][1], &g_63[3][1]}};
                    int *l_852 = &g_469[1][8][2];
                    int i, j;
                    (*l_767) = &l_818;

                    ;
                    if ((((((*l_766) = (+(g_63[1][1] = (safe_sub_func_uint8_t_u_u(0x95L, ((((*l_831) = ((*g_526) &= (p_14 = (p_14 , (((g_71 = (safe_rshift_func_int16_t_s_s((((((*l_615) = p_13) && func_25(l_805, (safe_div_func_int32_t_s_s((*g_644), (safe_lshift_func_uint16_t_u_s(g_11, 14)))), l_829, l_774[2][4], l_805)) & p_15) , l_830), p_16))) ^ 0x4B4BL) != 0x0E81DC3CL))))) == 18446744073709551610UL) == (*l_805))))))) && 0UL) < (*l_805)) , 8L))
                    {
                        (*l_757) = (safe_unary_minus_func_uint8_t_u(8UL));
                    }
                    else
                    {
                        unsigned short **l_836 = &l_615;
                        int *l_843 = &g_469[1][0][1];
                        int l_844 = (-1L);
                        l_845 = &l_830;

                        ;
                        (*l_767) = (*l_767);
                    }

                    ;
                    ;
                    (*l_766) ^= (safe_sub_func_int8_t_s_s(func_25(&g_5, ((void*)0 == &l_845), &g_318[0][0], ((*l_852) &= l_851), &l_830), l_857));

                    ;
                    for (p_16 = 0; (p_16 <= (-1)); p_16 = safe_sub_func_int32_t_s_s(p_16, 9))
                    {
                        (*g_371) = (safe_add_func_int64_t_s_s(((safe_rshift_func_uint16_t_u_s(p_13, 14)) , (safe_lshift_func_uint8_t_u_s(((((p_16 > (((safe_add_func_uint8_t_u_u((((((((*g_87) ^ (((void*)0 != &g_97) > ((p_14 && ((p_16 & ((safe_lshift_func_uint16_t_u_s(((p_16 , (g_462 , (void*)0)) == &l_797), 15)) < 1L)) != g_238)) | 0x09L))) < (*g_87)) > (*l_805)) , 1UL) ^ 0x7156FF12E537FB57LL) , p_14), g_63[3][1])) , 0xCA70D3E6B1AF2C42LL) != (*g_87))) > l_830) && l_870[0][2]) == p_16), 7))), p_13));
                        (*l_767) = &l_818;

                        ;
                        (*l_757) = 0L;
                    }

                    ;
                }

                ;

                if (((g_871 = g_871) == (void*)0))
                {
                    unsigned char l_878 = 247UL;
                    int *l_879 = &l_609;
                    int *l_880 = (void*)0;
                    for (g_853 = 0; (g_853 > (-16)); g_853--)
                    {
                        unsigned char *l_876 = &l_797;
                        unsigned char **l_877 = &l_876;
                        l_878 = (((*l_877) = l_876) == (void*)0);
                        return l_880;



                    }
                    l_881 = (*l_767);

                    ;
                }
                else
                {
                    unsigned short *l_884 = &g_11;
                    int l_891 = 3L;
                    (*l_766) &= (safe_lshift_func_int8_t_s_u(0x6DL, 3));
                    (*l_767) = (*l_767);
                }

                ;
                if (p_13)
                    break;

            }

            ;
            ;

            ;
            for (g_340 = 0; (g_340 != 59); g_340++)
            {
                int l_901 = 0x261FF28DL;
                char *l_906 = &l_774[3][1];
                int *l_909 = &g_853;
                long long ***l_925 = &l_780;
                unsigned l_941 = 8UL;
                int *l_942 = &g_9;
                if (((safe_lshift_func_int16_t_s_u((((*g_371) = (g_57[1][0][3] , (safe_mod_func_uint32_t_u_u(func_25(&l_818, ((safe_rshift_func_uint16_t_u_s((~l_901), 4)) == g_286), &g_318[3][0], ((*l_909) = ((*l_766) == l_908)), (*l_767)), g_57[3][2][4])))) && 0xF75EEA8BL), 13)) >= p_14))
                {
                    return g_910[6][0][4];


                }
                else
                {
                    unsigned short *l_917 = (void*)0;
                    int *l_918 = &g_5;
                    (*g_644) ^= (((*g_87) = 18446744073709551615UL) || (safe_sub_func_uint8_t_u_u(1UL, 0x74L)));
                    (*l_766) &= (((safe_mod_func_uint8_t_u_u(func_25(&l_870[6][3], p_14, l_917, l_901, l_918), g_239[3])) > 0x8431L) || (*g_87));
                }

                ;
                for (l_908 = 1; (l_908 < 55); ++l_908)
                {
                    (*l_767) = l_921;

                    ;
                }

                ;
                if ((((safe_mod_func_uint8_t_u_u((((*l_716) != (p_13 != ((((*l_925) = l_924) == &g_526) , 0x7829L))) | 1UL), 0xD3L)) , (*g_907)) , (*l_921)))
                {
                    return (*l_767);


                }
                else
                {
                    unsigned l_928 = 4294967295UL;
                    int ****l_930 = (void*)0;
                    int ****l_932 = &l_931;
                    unsigned short *l_961[3][2][7] = {{{(void*)0, &g_11, &g_239[1], &g_239[1], &g_11, (void*)0, &g_11}, {(void*)0, &g_11, &g_239[1], &g_239[1], &g_11, (void*)0, &g_11}}, {{(void*)0, &g_11, &g_239[1], &g_239[1], &g_11, (void*)0, &g_11}, {(void*)0, &g_11, &g_239[1], &g_239[1], &g_11, (void*)0, &g_11}}, {{(void*)0, &g_11, &g_239[1], &g_239[1], &g_11, (void*)0, &g_11}, {(void*)0, &g_11, &g_239[1], &g_239[1], &g_11, (void*)0, &g_11}}};
                    int i, j, k;
                    if ((safe_sub_func_uint8_t_u_u(255UL, (((p_16 < 0x67B92C90L) & (l_928 == ((((l_929[3][2][7] = l_929[3][2][7]) != ((g_612[0] | p_13) , ((*l_932) = l_931))) , (p_16 != (**g_707))) || g_71))) , p_15))))
                    {
                        short ***l_937 = &l_782;
                        (*g_406) ^= ((safe_rshift_func_int16_t_s_s(g_286, (safe_lshift_func_int16_t_s_s(p_13, 15)))) > (((*l_937) = &l_781[2][5][0]) != g_938[3]));
                    }
                    else
                    {
                        if (p_16)
                            break;
                    }
                    if (p_14)
                    {
                        unsigned short *l_945[4];
                        int *l_946 = &l_870[3][2];
                        int i;
                        for (i = 0; i < 4; i++)
                            l_945[i] = &g_239[1];
                        l_942 = (void*)0;

                        ;
                        (*g_644) &= (safe_sub_func_int64_t_s_s(func_25(&l_818, ((*l_716) > (*l_716)), l_945[2], g_2, l_946), (p_16 >= 0xEEF3C548L)));

                        ;
                        return (*l_767);


                    }
                    else
                    {
                        int *l_957 = &l_870[6][3];
                        unsigned *l_958 = (void*)0;
                        unsigned *l_959 = &g_531;
                        unsigned short *l_962 = (void*)0;
                        l_942 = l_957;

                        ;
                    }

                    ;
                }

                ;
                ;
            }
        }


        for (p_16 = (-29); (p_16 > (-13)); ++p_16)
        {
            int *l_965 = (void*)0;
            (*l_767) = l_965;

            ;
            for (l_908 = 0; l_908 < 4; l_908 += 1)
            {
                g_239[l_908] = 0x275BL;
            }
        }
    }

    ;
    ;
    g_371 = &g_5;

    ;
    return &g_5;


}







static int func_17(long long p_18, unsigned short * p_19)
{
    long long l_333[10][3][6] = {{{5L, 0x7C74CE602A5E3CC6LL, 0L, 1L, 0L, 0x7C74CE602A5E3CC6LL}, {5L, 0x7C74CE602A5E3CC6LL, 0L, 1L, 0L, 0x7C74CE602A5E3CC6LL}, {5L, 0x7C74CE602A5E3CC6LL, 0L, 1L, 0L, 0x7C74CE602A5E3CC6LL}}, {{5L, 0x7C74CE602A5E3CC6LL, 0L, 1L, 0L, 0x7C74CE602A5E3CC6LL}, {5L, 0x7C74CE602A5E3CC6LL, 0L, 1L, 0L, 0x7C74CE602A5E3CC6LL}, {5L, 0x7C74CE602A5E3CC6LL, 0L, 1L, 0L, 0x7C74CE602A5E3CC6LL}}, {{5L, 0x7C74CE602A5E3CC6LL, 0L, 1L, 0L, 0x7C74CE602A5E3CC6LL}, {5L, 0x7C74CE602A5E3CC6LL, 0L, 1L, 0L, 0x7C74CE602A5E3CC6LL}, {5L, 0x7C74CE602A5E3CC6LL, 0L, 1L, 0L, 0x7C74CE602A5E3CC6LL}}, {{5L, 0x7C74CE602A5E3CC6LL, 0L, 1L, 0L, 0x7C74CE602A5E3CC6LL}, {5L, 0x7C74CE602A5E3CC6LL, 0L, 1L, 0L, 0x7C74CE602A5E3CC6LL}, {5L, 0x7C74CE602A5E3CC6LL, 0L, 1L, 0L, 0x7C74CE602A5E3CC6LL}}, {{5L, 0x7C74CE602A5E3CC6LL, 0L, 1L, 0L, 0x7C74CE602A5E3CC6LL}, {5L, 0x7C74CE602A5E3CC6LL, 0L, 1L, 0L, 0x7C74CE602A5E3CC6LL}, {5L, 0x7C74CE602A5E3CC6LL, 0L, 1L, 0L, 0x7C74CE602A5E3CC6LL}}, {{5L, 0x7C74CE602A5E3CC6LL, 0L, 1L, 0L, 0x7C74CE602A5E3CC6LL}, {5L, 0x7C74CE602A5E3CC6LL, 0L, 1L, 0L, 0x7C74CE602A5E3CC6LL}, {5L, 0x7C74CE602A5E3CC6LL, 0L, 1L, 0L, 0x7C74CE602A5E3CC6LL}}, {{5L, 0x7C74CE602A5E3CC6LL, 0L, 1L, 0L, 0x7C74CE602A5E3CC6LL}, {5L, 0x7C74CE602A5E3CC6LL, 0L, 1L, 0L, 0x7C74CE602A5E3CC6LL}, {5L, 0x7C74CE602A5E3CC6LL, 0L, 1L, 0L, 0x7C74CE602A5E3CC6LL}}, {{5L, 0x7C74CE602A5E3CC6LL, 0L, 1L, 0L, 0x7C74CE602A5E3CC6LL}, {5L, 0x7C74CE602A5E3CC6LL, 0L, 1L, 0L, 0x7C74CE602A5E3CC6LL}, {5L, 0x7C74CE602A5E3CC6LL, 0L, 1L, 0L, 0x7C74CE602A5E3CC6LL}}, {{5L, 0x7C74CE602A5E3CC6LL, 0L, 1L, 0L, 0x7C74CE602A5E3CC6LL}, {5L, 0x7C74CE602A5E3CC6LL, 0L, 1L, 0L, 0x7C74CE602A5E3CC6LL}, {5L, 0x7C74CE602A5E3CC6LL, 0L, 1L, 0L, 0x7C74CE602A5E3CC6LL}}, {{5L, 0x7C74CE602A5E3CC6LL, 0L, 1L, 0L, 0x7C74CE602A5E3CC6LL}, {5L, 0x7C74CE602A5E3CC6LL, 0L, 1L, 0L, 0x7C74CE602A5E3CC6LL}, {5L, 0x7C74CE602A5E3CC6LL, 0L, 1L, 0L, 0x7C74CE602A5E3CC6LL}}};
    unsigned long long **l_334 = &g_87;
    int l_335 = 0x1BD60221L;
    short *l_336[7] = {&g_71, &g_264, &g_71, &g_264, &g_71, &g_264, &g_71};
    int l_337 = 0x32F83690L;
    int *l_341 = &g_284;
    int *l_347 = &g_284;
    int l_391[2];
    int *l_397 = &g_9;
    long long *l_433 = &g_2;
    long long **l_432 = &l_433;
    char *l_476 = (void*)0;
    long long l_545[1];
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_391[i] = (-6L);
    for (i = 0; i < 1; i++)
        l_545[i] = 1L;
    (*l_341) = (safe_mul_func_int16_t_s_s((l_337 = (((l_333[3][0][2] , (void*)0) == (g_65[3][4] , l_334)) ^ (l_335 = 0L))), (p_18 , ((safe_mod_func_uint32_t_u_u(0x272FBF61L, p_18)) & (p_18 , g_340)))));
    for (g_9 = 0; (g_9 <= 3); g_9 += 1)
    {
        if (p_18)
            break;
        for (g_151 = 0; g_151 < 4; g_151 += 1)
        {
            g_239[g_151] = 1UL;
        }
        for (g_286 = 0; (g_286 <= 2); g_286 += 1)
        {
            for (g_2 = 0; (g_2 <= 3); g_2 += 1)
            {
                int i, j, k;
                return l_333[(g_9 + 5)][g_286][(g_286 + 3)];
            }
            if (p_18)
                break;
            l_341 = &l_335;

            ;
            for (l_335 = 0; (l_335 <= 3); l_335 += 1)
            {
                g_124 = &g_5;

                ;
            }
        }
    }

    ;
    ;
    if ((6UL ^ p_18))
    {
        unsigned l_342[8][7][4] = {{{0xAF6C1783L, 0xD9E3C752L, 0xC8BDA012L, 1UL}, {0xAF6C1783L, 0xD9E3C752L, 0xC8BDA012L, 1UL}, {0xAF6C1783L, 0xD9E3C752L, 0xC8BDA012L, 1UL}, {0xAF6C1783L, 0xD9E3C752L, 0xC8BDA012L, 1UL}, {0xAF6C1783L, 0xD9E3C752L, 0xC8BDA012L, 1UL}, {0xAF6C1783L, 0xD9E3C752L, 0xC8BDA012L, 1UL}, {0xAF6C1783L, 0xD9E3C752L, 0xC8BDA012L, 1UL}}, {{0xAF6C1783L, 0xD9E3C752L, 0xC8BDA012L, 1UL}, {0xAF6C1783L, 0xD9E3C752L, 0xC8BDA012L, 1UL}, {0xAF6C1783L, 0xD9E3C752L, 0xC8BDA012L, 1UL}, {0xAF6C1783L, 0xD9E3C752L, 0xC8BDA012L, 1UL}, {0xAF6C1783L, 0xD9E3C752L, 0xC8BDA012L, 1UL}, {0xAF6C1783L, 0xD9E3C752L, 0xC8BDA012L, 1UL}, {0xAF6C1783L, 0xD9E3C752L, 0xC8BDA012L, 1UL}}, {{0xAF6C1783L, 0xD9E3C752L, 0xC8BDA012L, 1UL}, {0xAF6C1783L, 0xD9E3C752L, 0xC8BDA012L, 1UL}, {0xAF6C1783L, 0xD9E3C752L, 0xC8BDA012L, 1UL}, {0xAF6C1783L, 0xD9E3C752L, 0xC8BDA012L, 1UL}, {0xAF6C1783L, 0xD9E3C752L, 0xC8BDA012L, 1UL}, {0xAF6C1783L, 0xD9E3C752L, 0xC8BDA012L, 1UL}, {0xAF6C1783L, 0xD9E3C752L, 0xC8BDA012L, 1UL}}, {{0xAF6C1783L, 0xD9E3C752L, 0xC8BDA012L, 1UL}, {0xAF6C1783L, 0xD9E3C752L, 0xC8BDA012L, 1UL}, {0xAF6C1783L, 0xD9E3C752L, 0xC8BDA012L, 1UL}, {0xAF6C1783L, 0xD9E3C752L, 0xC8BDA012L, 1UL}, {0xAF6C1783L, 0xD9E3C752L, 0xC8BDA012L, 1UL}, {0xAF6C1783L, 0xD9E3C752L, 0xC8BDA012L, 1UL}, {0xAF6C1783L, 0xD9E3C752L, 0xC8BDA012L, 1UL}}, {{0xAF6C1783L, 0xD9E3C752L, 0xC8BDA012L, 1UL}, {0xAF6C1783L, 0xD9E3C752L, 0xC8BDA012L, 1UL}, {0xAF6C1783L, 0xD9E3C752L, 0xC8BDA012L, 1UL}, {0xAF6C1783L, 0xD9E3C752L, 0xC8BDA012L, 1UL}, {0xAF6C1783L, 0xD9E3C752L, 0xC8BDA012L, 1UL}, {0xAF6C1783L, 0xD9E3C752L, 0xC8BDA012L, 1UL}, {0xAF6C1783L, 0xD9E3C752L, 0xC8BDA012L, 1UL}}, {{0xAF6C1783L, 0xD9E3C752L, 0xC8BDA012L, 1UL}, {0xAF6C1783L, 0xD9E3C752L, 0xC8BDA012L, 1UL}, {0xAF6C1783L, 0xD9E3C752L, 0xC8BDA012L, 1UL}, {0xAF6C1783L, 0xD9E3C752L, 0xC8BDA012L, 1UL}, {0xAF6C1783L, 0xD9E3C752L, 0xC8BDA012L, 1UL}, {0xAF6C1783L, 0xD9E3C752L, 0xC8BDA012L, 1UL}, {0xAF6C1783L, 0xD9E3C752L, 0xC8BDA012L, 1UL}}, {{0xAF6C1783L, 0xD9E3C752L, 0xC8BDA012L, 1UL}, {0xAF6C1783L, 0xD9E3C752L, 0xC8BDA012L, 1UL}, {0xAF6C1783L, 0xD9E3C752L, 0xC8BDA012L, 1UL}, {0xAF6C1783L, 0xD9E3C752L, 0xC8BDA012L, 1UL}, {0xAF6C1783L, 0xD9E3C752L, 0xC8BDA012L, 1UL}, {0xAF6C1783L, 0xD9E3C752L, 0xC8BDA012L, 1UL}, {0xAF6C1783L, 0xD9E3C752L, 0xC8BDA012L, 1UL}}, {{0xAF6C1783L, 0xD9E3C752L, 0xC8BDA012L, 1UL}, {0xAF6C1783L, 0xD9E3C752L, 0xC8BDA012L, 1UL}, {0xAF6C1783L, 0xD9E3C752L, 0xC8BDA012L, 1UL}, {0xAF6C1783L, 0xD9E3C752L, 0xC8BDA012L, 1UL}, {0xAF6C1783L, 0xD9E3C752L, 0xC8BDA012L, 1UL}, {0xAF6C1783L, 0xD9E3C752L, 0xC8BDA012L, 1UL}, {0xAF6C1783L, 0xD9E3C752L, 0xC8BDA012L, 1UL}}};
        int *l_410[1];
        int l_424 = 0xFA41E1E8L;
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_410[i] = (void*)0;
        for (g_286 = 0; (g_286 <= 3); g_286 += 1)
        {
            short l_352 = 0xE7CFL;
            long long *l_355 = &l_333[3][0][2];
            int *l_356 = (void*)0;
            int l_357[8] = {0xE5A47770L, 0x4C7BAD7CL, 0xE5A47770L, 0x4C7BAD7CL, 0xE5A47770L, 0x4C7BAD7CL, 0xE5A47770L, 0x4C7BAD7CL};
            long long **l_434 = &l_433;
            unsigned l_435 = 2UL;
            unsigned l_461 = 4294967295UL;
            int i;
            if (l_342[6][1][3])
                break;
        }
        for (g_9 = 0; (g_9 != (-5)); --g_9)
        {
            int **l_475 = &l_410[0];
            (*l_341) = (*l_397);
            for (g_264 = (-10); (g_264 != (-23)); g_264 = safe_sub_func_int8_t_s_s(g_264, 8))
            {
                (*l_341) |= p_18;
            }
            (*l_475) = &g_284;
        }


        return (*l_397);
    }
    else
    {
        char *l_478[8][6][4] = {{{&g_470, &g_297, &g_65[1][0], &g_297}, {&g_470, &g_297, &g_65[1][0], &g_297}, {&g_470, &g_297, &g_65[1][0], &g_297}, {&g_470, &g_297, &g_65[1][0], &g_297}, {&g_470, &g_297, &g_65[1][0], &g_297}, {&g_470, &g_297, &g_65[1][0], &g_297}}, {{&g_470, &g_297, &g_65[1][0], &g_297}, {&g_470, &g_297, &g_65[1][0], &g_297}, {&g_470, &g_297, &g_65[1][0], &g_297}, {&g_470, &g_297, &g_65[1][0], &g_297}, {&g_470, &g_297, &g_65[1][0], &g_297}, {&g_470, &g_297, &g_65[1][0], &g_297}}, {{&g_470, &g_297, &g_65[1][0], &g_297}, {&g_470, &g_297, &g_65[1][0], &g_297}, {&g_470, &g_297, &g_65[1][0], &g_297}, {&g_470, &g_297, &g_65[1][0], &g_297}, {&g_470, &g_297, &g_65[1][0], &g_297}, {&g_470, &g_297, &g_65[1][0], &g_297}}, {{&g_470, &g_297, &g_65[1][0], &g_297}, {&g_470, &g_297, &g_65[1][0], &g_297}, {&g_470, &g_297, &g_65[1][0], &g_297}, {&g_470, &g_297, &g_65[1][0], &g_297}, {&g_470, &g_297, &g_65[1][0], &g_297}, {&g_470, &g_297, &g_65[1][0], &g_297}}, {{&g_470, &g_297, &g_65[1][0], &g_297}, {&g_470, &g_297, &g_65[1][0], &g_297}, {&g_470, &g_297, &g_65[1][0], &g_297}, {&g_470, &g_297, &g_65[1][0], &g_297}, {&g_470, &g_297, &g_65[1][0], &g_297}, {&g_470, &g_297, &g_65[1][0], &g_297}}, {{&g_470, &g_297, &g_65[1][0], &g_297}, {&g_470, &g_297, &g_65[1][0], &g_297}, {&g_470, &g_297, &g_65[1][0], &g_297}, {&g_470, &g_297, &g_65[1][0], &g_297}, {&g_470, &g_297, &g_65[1][0], &g_297}, {&g_470, &g_297, &g_65[1][0], &g_297}}, {{&g_470, &g_297, &g_65[1][0], &g_297}, {&g_470, &g_297, &g_65[1][0], &g_297}, {&g_470, &g_297, &g_65[1][0], &g_297}, {&g_470, &g_297, &g_65[1][0], &g_297}, {&g_470, &g_297, &g_65[1][0], &g_297}, {&g_470, &g_297, &g_65[1][0], &g_297}}, {{&g_470, &g_297, &g_65[1][0], &g_297}, {&g_470, &g_297, &g_65[1][0], &g_297}, {&g_470, &g_297, &g_65[1][0], &g_297}, {&g_470, &g_297, &g_65[1][0], &g_297}, {&g_470, &g_297, &g_65[1][0], &g_297}, {&g_470, &g_297, &g_65[1][0], &g_297}}};
        char **l_477 = &l_478[0][1][2];
        char *l_480 = &g_470;
        char **l_479 = &l_480;
        int l_487[1][1];
        unsigned long long *l_492 = &g_286;
        unsigned long long *l_493 = &g_263;
        int l_494 = 1L;
        unsigned short l_502 = 0x6D3DL;
        short *l_507[3];
        unsigned char ***l_511 = &g_97;
        int **l_518 = &l_397;
        int ***l_517 = &l_518;
        unsigned *l_571 = (void*)0;
        int l_587 = 3L;
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 1; j++)
                l_487[i][j] = 0x65884617L;
        }
        for (i = 0; i < 3; i++)
            l_507[i] = &g_462;
        (*g_406) |= ((l_476 == ((*l_479) = ((*l_477) = l_476))) , (((void*)0 == l_480) && 0L));

        ;
        (*l_397) = (((0x6AECD74C835DAAD4LL < (((safe_lshift_func_uint16_t_u_u((p_18 & (*l_397)), ((safe_div_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_s(l_487[0][0], p_18)), ((l_487[0][0] > (safe_div_func_uint64_t_u_u((0L > (safe_lshift_func_uint8_t_u_u(((l_494 = (g_239[1] |= ((func_25(&g_9, (((*l_493) = ((*l_492) ^= ((*g_87) |= (func_25(&l_487[0][0], p_18, p_19, (*l_341), &l_487[0][0]) > 0xAFL)))) , 1L), l_336[5], p_18, &g_5) >= 0x4AL) != g_9))) != (*p_19)), 2))), g_63[6][0]))) , (*g_371)))) , 8UL))) | l_487[0][0]) != (*l_397))) , l_494) != 0xFEEB3D3DDB24B96ALL);

        ;
        for (l_337 = 2; (l_337 >= 0); l_337 -= 1)
        {
            int l_501 = 0xB00A2339L;
            int ***l_519 = (void*)0;
            unsigned char *l_588[9][8] = {{&g_57[3][1][3], &g_57[2][3][0], &g_57[2][3][0], &g_238, &g_57[3][1][3], &g_238, &g_57[1][1][2], &g_238}, {&g_57[3][1][3], &g_57[2][3][0], &g_57[2][3][0], &g_238, &g_57[3][1][3], &g_238, &g_57[1][1][2], &g_238}, {&g_57[3][1][3], &g_57[2][3][0], &g_57[2][3][0], &g_238, &g_57[3][1][3], &g_238, &g_57[1][1][2], &g_238}, {&g_57[3][1][3], &g_57[2][3][0], &g_57[2][3][0], &g_238, &g_57[3][1][3], &g_238, &g_57[1][1][2], &g_238}, {&g_57[3][1][3], &g_57[2][3][0], &g_57[2][3][0], &g_238, &g_57[3][1][3], &g_238, &g_57[1][1][2], &g_238}, {&g_57[3][1][3], &g_57[2][3][0], &g_57[2][3][0], &g_238, &g_57[3][1][3], &g_238, &g_57[1][1][2], &g_238}, {&g_57[3][1][3], &g_57[2][3][0], &g_57[2][3][0], &g_238, &g_57[3][1][3], &g_238, &g_57[1][1][2], &g_238}, {&g_57[3][1][3], &g_57[2][3][0], &g_57[2][3][0], &g_238, &g_57[3][1][3], &g_238, &g_57[1][1][2], &g_238}, {&g_57[3][1][3], &g_57[2][3][0], &g_57[2][3][0], &g_238, &g_57[3][1][3], &g_238, &g_57[1][1][2], &g_238}};
            int l_589 = 0L;
            int i, j;
            if (((((safe_div_func_uint8_t_u_u(p_18, p_18)) && (*p_19)) || l_501) || l_502))
            {
                if ((*g_371))
                    break;
                (*l_341) = ((*l_397) = p_18);
            }
            else
            {
                unsigned long long l_508 = 0x938AF954AE5F485ALL;
                unsigned *l_509 = (void*)0;
                unsigned *l_510 = &g_63[4][1];
                short **l_512 = &l_336[5];
                int *l_520 = &l_501;
                (*g_406) ^= (safe_mod_func_int8_t_s_s((safe_add_func_uint64_t_u_u((((l_507[2] == ((*l_512) = (func_25(&l_391[1], p_18, &g_239[2], p_18, &l_391[1]) , p_19))) , (void*)0) == (void*)0), g_462)), l_502));
                (*l_341) = (-9L);
                (*l_347) = (((safe_mul_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s((p_18 || ((((**l_512) = (safe_sub_func_uint64_t_u_u(l_508, ((safe_rshift_func_int8_t_s_u((((**l_432) = ((void*)0 == &g_86[2][4])) <= (*g_87)), (***l_517))) <= (*g_406))))) < g_63[3][1]) >= (*g_87))), 13)), 0xFFL)) , 0x846FCA40L) | 0x33276626L);
                (*l_341) |= p_18;
            }
            for (l_502 = 0; (l_502 <= 2); l_502 += 1)
            {
                unsigned long long l_527[6] = {18446744073709551607UL, 18446744073709551607UL, 0x901407AD30C7C62ELL, 18446744073709551607UL, 18446744073709551607UL, 0x901407AD30C7C62ELL};
                long long l_544 = 1L;
                int l_572 = 0L;
                int i;
                for (g_71 = 0; (g_71 <= 0); g_71 += 1)
                {
                    int i, j, k;
                    return g_469[l_502][(l_337 + 3)][(g_71 + 4)];
                }
                (*l_518) = &g_5;

                ;
                for (g_284 = 2; (g_284 >= 0); g_284 -= 1)
                {
                    (**l_517) = (void*)0;

                    ;
                    l_527[5] |= (((+p_18) | g_5) >= (((func_25(&g_9, g_57[2][3][0], &g_318[3][6], g_63[0][1], ((g_525 != &l_433) , &l_391[1])) != 0xC3BF75CD74CA90F3LL) , (void*)0) != (void*)0));
                }

                ;
                (*g_371) = p_18;
                for (g_123 = 0; (g_123 <= 2); g_123 += 1)
                {
                    int l_534 = 1L;
                    int *l_547 = (void*)0;
                    if (((*g_406) = (*g_371)))
                    {
                        short l_530 = 0xFD96L;
                        (*l_341) = ((*g_406) = (safe_div_func_int8_t_s_s(g_2, (g_531 = l_530))));
                        (**l_517) = (void*)0;

                        ;
                    }
                    else
                    {
                        int *l_535 = &l_487[0][0];
                        long long l_546 = 0L;
                        int **l_548[5][2][8] = {{{&g_371, &g_406, &l_535, &l_547, &l_347, (void*)0, &g_406, &l_341}, {&g_371, &g_406, &l_535, &l_547, &l_347, (void*)0, &g_406, &l_341}}, {{&g_371, &g_406, &l_535, &l_547, &l_347, (void*)0, &g_406, &l_341}, {&g_371, &g_406, &l_535, &l_547, &l_347, (void*)0, &g_406, &l_341}}, {{&g_371, &g_406, &l_535, &l_547, &l_347, (void*)0, &g_406, &l_341}, {&g_371, &g_406, &l_535, &l_547, &l_347, (void*)0, &g_406, &l_341}}, {{&g_371, &g_406, &l_535, &l_547, &l_347, (void*)0, &g_406, &l_341}, {&g_371, &g_406, &l_535, &l_547, &l_347, (void*)0, &g_406, &l_341}}, {{&g_371, &g_406, &l_535, &l_547, &l_347, (void*)0, &g_406, &l_341}, {&g_371, &g_406, &l_535, &l_547, &l_347, (void*)0, &g_406, &l_341}}};
                        int i, j, k;
                        (*l_347) = (safe_mul_func_int16_t_s_s(p_18, ((0x6CL ^ (l_534 = p_18)) != func_25(l_535, (l_494 |= (p_18 > func_25((l_547 = ((**l_517) = (func_25(&g_9, ((safe_mod_func_int16_t_s_s((safe_mod_func_int8_t_s_s((safe_mod_func_uint8_t_u_u((p_18 , (safe_mul_func_uint8_t_u_u((l_544 <= l_545[0]), g_65[1][0]))), (-1L))), p_18)), l_546)) ^ p_18), &g_239[1], g_65[1][0], l_547) , l_535))), p_18, p_19, g_238, g_549))), p_19, g_9, &g_9))));

                        ;
                        ;
                        (*g_371) = (((void*)0 != &l_507[2]) , (g_2 , (safe_rshift_func_uint8_t_u_s(0UL, 5))));
                        l_572 &= ((*l_341) = (safe_add_func_uint16_t_u_u(((*p_19) &= (safe_div_func_int16_t_s_s(((*l_547) = 6L), (g_462 = (0x69L ^ (safe_unary_minus_func_int64_t_s((*g_526)))))))), (((safe_add_func_int64_t_s_s((safe_mul_func_uint16_t_u_u(l_544, ((safe_div_func_uint8_t_u_u(g_286, (safe_sub_func_uint32_t_u_u((+(safe_mod_func_uint8_t_u_u((safe_div_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u((p_18 , ((&g_63[3][1] == l_571) , p_18)), 15)), p_18)), p_18))), g_239[2])))) & p_18))), l_527[5])) , &g_5) == &g_284))));
                    }

                    ;
                    ;
                    (**l_517) = (**l_517);
                }

                ;
            }

            ;
            (*l_518) = &g_9;

            ;
            l_589 ^= ((*l_347) = (safe_sub_func_int8_t_s_s(((void*)0 == &l_337), ((1UL < ((safe_div_func_int8_t_s_s((**l_518), ((((safe_div_func_int8_t_s_s((func_25(&g_5, (safe_sub_func_uint64_t_u_u((safe_mul_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s(((***l_517) <= (((safe_sub_func_uint32_t_u_u(((l_587 , (g_318[0][0] |= ((g_65[1][0] >= ((*l_347) ^= p_18)) | p_18))) < l_501), g_11)) <= p_18) , 0L)), 12)), 1UL)), p_18)), &g_239[1], (***l_517), &g_5) ^ p_18), (**l_518))) , p_18) != 0xDFAE10E6B8DF7288LL) , 1UL))) , 0x1AFDL)) != (**l_518)))));
            for (l_502 = 0; (l_502 <= 2); l_502 += 1)
            {
                l_347 = &l_391[1];

                ;
                for (g_284 = 0; (g_284 >= 0); g_284 -= 1)
                {
                    int i, j;
                    if (l_487[g_284][g_284])
                        break;
                }
            }
        }


        ;
        (**l_517) = &g_5;

        ;
    }

    ;

    ;
    ;
    (*g_406) |= ((*l_347) = 0x86C61810L);
    return (*g_406);
}







static char func_22(int p_23)
{
    int l_24 = 6L;
    int *l_49 = (void*)0;
    int **l_48 = &l_49;
    int *l_50 = &g_9;
    unsigned long long *l_285[3];
    unsigned char l_316[3];
    unsigned short *l_317 = &g_318[0][0];
    int i;
    for (i = 0; i < 3; i++)
        l_285[i] = &g_286;
    for (i = 0; i < 3; i++)
        l_316[i] = 0xA1L;
    l_24 &= g_2;
    if (func_25(((*l_48) = func_31(func_37(&l_24, g_2, func_42(((*g_124) = (func_46(((*l_50) = (((((*l_48) = &l_24) != (void*)0) < p_23) == p_23))) == (l_24 = (((p_23 < ((g_286 = (safe_div_func_uint16_t_u_u((safe_add_func_int16_t_s_s((g_284 |= ((safe_sub_func_int16_t_s_s((p_23 , 1L), 0xA80DL)) >= (-9L))), 0x5AEEL)), 0xED39L))) < 1UL)) <= p_23) != p_23))))), g_264), l_316[1], l_317, l_317, &g_318[0][0])), p_23, l_317, g_318[0][0], &g_5))
    {
        int *l_322 = &g_9;
        short *l_325 = &g_264;
        short *l_326[7];
        unsigned short **l_327 = &l_317;
        int i;
        for (i = 0; i < 7; i++)
            l_326[i] = &g_71;
        g_284 ^= ((*l_322) = (((0x33L < ((void*)0 == &l_48)) , func_25(l_322, (g_149 = ((*l_325) = (safe_sub_func_int16_t_s_s((0xD8ABL & g_63[1][1]), g_57[2][3][0])))), ((*l_327) = l_317), (*l_322), l_322)) , (-1L)));
    }
    else
    {
        return (*l_50);
    }

    ;
    ;
    return g_284;
}







static int func_25(int * p_26, short p_27, unsigned short * p_28, int p_29, int * p_30)
{
    int **l_321 = &g_124;
    (*l_321) = p_26;


    (*l_321) = (void*)0;

    ;
    return (*p_26);
}







static int * func_31(int * p_32, unsigned long long p_33, unsigned short * p_34, unsigned short * p_35, unsigned short * p_36)
{
    unsigned char l_319[4][4] = {{0UL, 0UL, 0xECL, 0x2EL}, {0UL, 0UL, 0xECL, 0x2EL}, {0UL, 0UL, 0xECL, 0x2EL}, {0UL, 0UL, 0xECL, 0x2EL}};
    int **l_320 = &g_124;
    int i, j;
    (*l_320) = func_42(l_319[0][3]);
    (*g_124) = (**l_320);
    (**l_320) = (*p_32);
    (**l_320) = (*g_124);
    return p_32;


}







static int * func_37(int * p_38, unsigned char p_39, int * p_40, unsigned p_41)
{
    unsigned l_307 = 0UL;
    char *l_312 = &g_297;
    int **l_315 = &g_124;
    (*l_315) = func_42(func_46(((((safe_mul_func_int16_t_s_s((l_307 | (safe_add_func_uint16_t_u_u((safe_sub_func_int32_t_s_s(func_46((*g_124)), g_5)), ((((*l_312) = l_307) != (!l_307)) , (safe_mul_func_int8_t_s_s((&g_87 != (void*)0), (((p_41 < (-2L)) , 0xDDL) > 0x35L))))))), p_41)) , 0L) , p_41) , (*p_40))));
    return &g_5;


}







static int * func_42(int p_43)
{
    int *l_287 = &g_9;
    char *l_296[2];
    unsigned l_298[2];
    int *l_303 = (void*)0;
    int *l_304 = &g_284;
    int i;
    for (i = 0; i < 2; i++)
        l_296[i] = &g_297;
    for (i = 0; i < 2; i++)
        l_298[i] = 0x2BDF74A5L;
    (*g_124) = (&p_43 != (l_287 = l_287));
    (*l_287) = ((safe_mod_func_uint32_t_u_u((4294967290UL == (safe_mod_func_uint16_t_u_u(g_65[2][4], (safe_sub_func_uint64_t_u_u(((p_43 , (safe_lshift_func_int8_t_s_s((l_298[1] ^= (*l_287)), 0))) ^ (p_43 , (safe_rshift_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u(0x93L, 7)), 10)))), p_43))))), g_297)) >= p_43);
    (*l_304) = ((*l_287) = p_43);
    return l_287;


}







static unsigned long long func_46(int p_47)
{
    int *l_52[2][2];
    int **l_51 = &l_52[0][1];
    char l_55 = 0x03L;
    unsigned char *l_56 = &g_57[2][3][0];
    unsigned *l_62 = &g_63[3][1];
    char *l_64[4][6] = {{&l_55, &g_65[1][0], &l_55, &g_65[1][0], &g_65[2][3], &l_55}, {&l_55, &g_65[1][0], &l_55, &g_65[1][0], &g_65[2][3], &l_55}, {&l_55, &g_65[1][0], &l_55, &g_65[1][0], &g_65[2][3], &l_55}, {&l_55, &g_65[1][0], &l_55, &g_65[1][0], &g_65[2][3], &l_55}};
    char l_66 = 0x9DL;
    unsigned long long *l_67 = &g_68;
    int l_261 = 1L;
    unsigned l_277 = 0UL;
    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
            l_52[i][j] = &g_5;
    }
    (*l_51) = (void*)0;


    p_47 |= 0x52AD14CAL;
    if ((g_2 != ((safe_sub_func_uint32_t_u_u(p_47, g_2)) >= (p_47 > ((*l_67) = (((*l_56) |= l_55) >= (l_66 &= (safe_div_func_int8_t_s_s(p_47, (((safe_mul_func_uint16_t_u_u((((*l_62) = g_11) , (p_47 , ((p_47 >= p_47) , g_63[3][1]))), g_11)) , 0x032B8146L) || g_5))))))))))
    {
        unsigned long long l_72 = 7UL;
        unsigned char *l_73 = (void*)0;
        unsigned char **l_74 = (void*)0;
        unsigned char **l_75 = &l_56;
        unsigned char **l_95 = &l_56;
        unsigned long long **l_98 = &g_87;
        int *l_99 = &g_9;
        int l_176 = 1L;
        long long l_190 = 0L;
        unsigned short *l_206 = &g_11;
        int **l_236 = &l_52[1][0];
        for (g_9 = 4; (g_9 >= (-18)); g_9--)
        {
            for (l_66 = 2; (l_66 <= 6); l_66 += 1)
            {
                int i, j;
                g_71 = g_65[l_66][(l_66 + 1)];
            }
        }
        if ((((0x540E5169L != l_72) || (((*l_75) = l_73) != (void*)0)) , (safe_add_func_uint32_t_u_u((1L != (safe_sub_func_int8_t_s_s(g_63[4][0], ((safe_sub_func_int32_t_s_s((safe_lshift_func_int16_t_s_u((safe_add_func_uint64_t_u_u(0x59469FD68CABD046LL, l_72)), g_63[3][1])), 0x81FF7B51L)) , g_71)))), 0x320B692EL))))
        {
            unsigned short l_100 = 65535UL;
            unsigned *l_140 = &g_63[3][1];
            int *l_164 = (void*)0;
            int l_165 = 0xFE9BFAC6L;
            for (g_71 = 3; (g_71 >= 0); g_71 -= 1)
            {
                unsigned long long ***l_88 = &g_86[2][6];
                unsigned char ***l_96 = &l_74;
                int l_107 = 1L;
                long long l_163 = 1L;
                unsigned long long *l_173 = &l_72;
                (*l_88) = g_86[2][6];
            }
            for (p_47 = 0; (p_47 > 20); p_47 = safe_add_func_int64_t_s_s(p_47, 9))
            {
                unsigned long long l_184 = 4UL;
                unsigned *l_187 = &g_63[3][1];
                for (g_123 = 0; (g_123 <= 6); g_123 += 1)
                {
                    int *l_179[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_179[i] = &g_9;
                }
            }
        }
        else
        {
            int *l_191[5][4][6] = {{{&g_5, &g_5, (void*)0, &g_9, &g_9, &g_9}, {&g_5, &g_5, (void*)0, &g_9, &g_9, &g_9}, {&g_5, &g_5, (void*)0, &g_9, &g_9, &g_9}, {&g_5, &g_5, (void*)0, &g_9, &g_9, &g_9}}, {{&g_5, &g_5, (void*)0, &g_9, &g_9, &g_9}, {&g_5, &g_5, (void*)0, &g_9, &g_9, &g_9}, {&g_5, &g_5, (void*)0, &g_9, &g_9, &g_9}, {&g_5, &g_5, (void*)0, &g_9, &g_9, &g_9}}, {{&g_5, &g_5, (void*)0, &g_9, &g_9, &g_9}, {&g_5, &g_5, (void*)0, &g_9, &g_9, &g_9}, {&g_5, &g_5, (void*)0, &g_9, &g_9, &g_9}, {&g_5, &g_5, (void*)0, &g_9, &g_9, &g_9}}, {{&g_5, &g_5, (void*)0, &g_9, &g_9, &g_9}, {&g_5, &g_5, (void*)0, &g_9, &g_9, &g_9}, {&g_5, &g_5, (void*)0, &g_9, &g_9, &g_9}, {&g_5, &g_5, (void*)0, &g_9, &g_9, &g_9}}, {{&g_5, &g_5, (void*)0, &g_9, &g_9, &g_9}, {&g_5, &g_5, (void*)0, &g_9, &g_9, &g_9}, {&g_5, &g_5, (void*)0, &g_9, &g_9, &g_9}, {&g_5, &g_5, (void*)0, &g_9, &g_9, &g_9}}};
            unsigned short *l_207 = &g_11;
            int **l_234[2][1][10] = {{{&g_124, &g_124, &l_191[1][3][0], &l_191[1][3][0], &g_124, &g_124, &g_124, &l_191[1][3][0], &l_191[1][3][0], &g_124}}, {{&g_124, &g_124, &l_191[1][3][0], &l_191[1][3][0], &g_124, &g_124, &g_124, &l_191[1][3][0], &l_191[1][3][0], &g_124}}};
            int i, j, k;
            if (p_47)
            {
                unsigned long long l_192 = 0x6A5165AAC15ABFE8LL;
                (*l_51) = l_191[1][3][0];


                l_192 &= (*l_99);
                for (g_68 = 0; (g_68 < 41); g_68 = safe_add_func_uint16_t_u_u(g_68, 8))
                {
                    unsigned long long l_197 = 0x07DA6FAB46776D98LL;
                    for (g_9 = 0; (g_9 != 4); g_9++)
                    {
                        l_197 &= (*g_124);
                    }
                }
            }
            else
            {
                unsigned short *l_212 = (void*)0;
                unsigned char **l_215 = &l_56;
                int l_222 = (-6L);
                int l_237 = 0x2F7A823AL;
                for (g_123 = 0; (g_123 <= 51); g_123 = safe_add_func_uint64_t_u_u(g_123, 4))
                {
                    return p_47;
                }
                if ((1UL <= 0x4F79F911611CA190LL))
                {
                    p_47 = (((((p_47 <= p_47) , (safe_lshift_func_uint16_t_u_u(g_68, 8))) | (1L < (g_63[3][1] <= (safe_rshift_func_uint16_t_u_u((((g_149 && 0x0B84L) , l_206) != l_207), p_47))))) == g_65[1][0]) , (*g_124));
                }
                else
                {
                    unsigned short *l_208 = &g_11;
                    int l_211 = 0x0E16A57DL;
                    if ((((g_65[1][0] ^= g_151) || ((*l_99) != (l_208 == &g_11))) , (-1L)))
                    {
                        long long l_218 = 0x63046C214296BABBLL;
                        unsigned short l_219 = 0xB4AFL;
                        l_176 &= ((*g_124) ^= (+p_47));
                        (*l_99) &= ((safe_mod_func_uint8_t_u_u(((l_211 <= ((void*)0 == l_212)) , (g_57[2][4][2] = (safe_lshift_func_int8_t_s_s(((void*)0 == l_215), 2)))), p_47)) == ((p_47 <= ((safe_rshift_func_uint8_t_u_u((((l_218 , ((l_219 = l_211) <= p_47)) , p_47) || p_47), 7)) & p_47)) != g_68));
                        (*g_124) = p_47;
                    }
                    else
                    {
                        return p_47;
                    }
                    (*l_51) = &g_9;


                }


                for (l_190 = 0; (l_190 != (-13)); l_190 = safe_sub_func_int8_t_s_s(l_190, 4))
                {
                    short *l_223 = (void*)0;
                    short *l_224 = &g_149;
                    unsigned long long ***l_225 = &g_86[1][7];
                    unsigned char **l_230 = (void*)0;
                    int **l_233[4] = {&l_191[0][0][4], &l_99, &l_191[0][0][4], &l_99};
                    int ***l_235[7] = {&l_233[1], &l_233[1], (void*)0, &l_233[1], &l_233[1], (void*)0, &l_233[1]};
                    int i;
                    if ((g_239[1] = (g_238 = ((*g_124) = ((((*l_224) = l_222) , ((l_237 = (l_222 &= ((~(((*l_225) = &g_87) == &g_87)) , (safe_add_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s((l_230 == l_215), 2)), ((g_9 , (safe_mod_func_uint32_t_u_u((p_47 == ((l_234[1][0][0] = l_233[2]) != (l_236 = &g_124))), (-1L)))) < 65535UL)))))) || p_47)) , 0x3E42A8C7L)))))
                    {
                        return (*g_87);
                    }
                    else
                    {
                        return p_47;
                    }
                }
            }


        }


        ;
    }
    else
    {
        unsigned l_256 = 0xAA924F23L;
        char l_276 = (-7L);
        for (g_11 = (-5); (g_11 == 50); ++g_11)
        {
            int *l_258[4] = {&g_9, (void*)0, &g_9, (void*)0};
            int i;
            p_47 = ((*g_124) = ((-6L) | p_47));
            for (g_238 = 0; (g_238 < 22); g_238++)
            {
                short l_249 = 0xC37FL;
                int l_257 = 0x0B8333B3L;
                for (g_149 = 0; (g_149 != (-6)); g_149--)
                {
                    unsigned long long l_246[5][6][8] = {{{18446744073709551612UL, 4UL, 0x736F6583A62AC4F3LL, 0x68607F2044AD6765LL, 0x5C85276405BA798FLL, 18446744073709551606UL, 0UL, 0x68607F2044AD6765LL}, {18446744073709551612UL, 4UL, 0x736F6583A62AC4F3LL, 0x68607F2044AD6765LL, 0x5C85276405BA798FLL, 18446744073709551606UL, 0UL, 0x68607F2044AD6765LL}, {18446744073709551612UL, 4UL, 0x736F6583A62AC4F3LL, 0x68607F2044AD6765LL, 0x5C85276405BA798FLL, 18446744073709551606UL, 0UL, 0x68607F2044AD6765LL}, {18446744073709551612UL, 4UL, 0x736F6583A62AC4F3LL, 0x68607F2044AD6765LL, 0x5C85276405BA798FLL, 18446744073709551606UL, 0UL, 0x68607F2044AD6765LL}, {18446744073709551612UL, 4UL, 0x736F6583A62AC4F3LL, 0x68607F2044AD6765LL, 0x5C85276405BA798FLL, 18446744073709551606UL, 0UL, 0x68607F2044AD6765LL}, {18446744073709551612UL, 4UL, 0x736F6583A62AC4F3LL, 0x68607F2044AD6765LL, 0x5C85276405BA798FLL, 18446744073709551606UL, 0UL, 0x68607F2044AD6765LL}}, {{18446744073709551612UL, 4UL, 0x736F6583A62AC4F3LL, 0x68607F2044AD6765LL, 0x5C85276405BA798FLL, 18446744073709551606UL, 0UL, 0x68607F2044AD6765LL}, {18446744073709551612UL, 4UL, 0x736F6583A62AC4F3LL, 0x68607F2044AD6765LL, 0x5C85276405BA798FLL, 18446744073709551606UL, 0UL, 0x68607F2044AD6765LL}, {18446744073709551612UL, 4UL, 0x736F6583A62AC4F3LL, 0x68607F2044AD6765LL, 0x5C85276405BA798FLL, 18446744073709551606UL, 0UL, 0x68607F2044AD6765LL}, {18446744073709551612UL, 4UL, 0x736F6583A62AC4F3LL, 0x68607F2044AD6765LL, 0x5C85276405BA798FLL, 18446744073709551606UL, 0UL, 0x68607F2044AD6765LL}, {18446744073709551612UL, 4UL, 0x736F6583A62AC4F3LL, 0x68607F2044AD6765LL, 0x5C85276405BA798FLL, 18446744073709551606UL, 0UL, 0x68607F2044AD6765LL}, {18446744073709551612UL, 4UL, 0x736F6583A62AC4F3LL, 0x68607F2044AD6765LL, 0x5C85276405BA798FLL, 18446744073709551606UL, 0UL, 0x68607F2044AD6765LL}}, {{18446744073709551612UL, 4UL, 0x736F6583A62AC4F3LL, 0x68607F2044AD6765LL, 0x5C85276405BA798FLL, 18446744073709551606UL, 0UL, 0x68607F2044AD6765LL}, {18446744073709551612UL, 4UL, 0x736F6583A62AC4F3LL, 0x68607F2044AD6765LL, 0x5C85276405BA798FLL, 18446744073709551606UL, 0UL, 0x68607F2044AD6765LL}, {18446744073709551612UL, 4UL, 0x736F6583A62AC4F3LL, 0x68607F2044AD6765LL, 0x5C85276405BA798FLL, 18446744073709551606UL, 0UL, 0x68607F2044AD6765LL}, {18446744073709551612UL, 4UL, 0x736F6583A62AC4F3LL, 0x68607F2044AD6765LL, 0x5C85276405BA798FLL, 18446744073709551606UL, 0UL, 0x68607F2044AD6765LL}, {18446744073709551612UL, 4UL, 0x736F6583A62AC4F3LL, 0x68607F2044AD6765LL, 0x5C85276405BA798FLL, 18446744073709551606UL, 0UL, 0x68607F2044AD6765LL}, {18446744073709551612UL, 4UL, 0x736F6583A62AC4F3LL, 0x68607F2044AD6765LL, 0x5C85276405BA798FLL, 18446744073709551606UL, 0UL, 0x68607F2044AD6765LL}}, {{18446744073709551612UL, 4UL, 0x736F6583A62AC4F3LL, 0x68607F2044AD6765LL, 0x5C85276405BA798FLL, 18446744073709551606UL, 0UL, 0x68607F2044AD6765LL}, {18446744073709551612UL, 4UL, 0x736F6583A62AC4F3LL, 0x68607F2044AD6765LL, 0x5C85276405BA798FLL, 18446744073709551606UL, 0UL, 0x68607F2044AD6765LL}, {18446744073709551612UL, 4UL, 0x736F6583A62AC4F3LL, 0x68607F2044AD6765LL, 0x5C85276405BA798FLL, 18446744073709551606UL, 0UL, 0x68607F2044AD6765LL}, {18446744073709551612UL, 4UL, 0x736F6583A62AC4F3LL, 0x68607F2044AD6765LL, 0x5C85276405BA798FLL, 18446744073709551606UL, 0UL, 0x68607F2044AD6765LL}, {18446744073709551612UL, 4UL, 0x736F6583A62AC4F3LL, 0x68607F2044AD6765LL, 0x5C85276405BA798FLL, 18446744073709551606UL, 0UL, 0x68607F2044AD6765LL}, {18446744073709551612UL, 4UL, 0x736F6583A62AC4F3LL, 0x68607F2044AD6765LL, 0x5C85276405BA798FLL, 18446744073709551606UL, 0UL, 0x68607F2044AD6765LL}}, {{18446744073709551612UL, 4UL, 0x736F6583A62AC4F3LL, 0x68607F2044AD6765LL, 0x5C85276405BA798FLL, 18446744073709551606UL, 0UL, 0x68607F2044AD6765LL}, {18446744073709551612UL, 4UL, 0x736F6583A62AC4F3LL, 0x68607F2044AD6765LL, 0x5C85276405BA798FLL, 18446744073709551606UL, 0UL, 0x68607F2044AD6765LL}, {18446744073709551612UL, 4UL, 0x736F6583A62AC4F3LL, 0x68607F2044AD6765LL, 0x5C85276405BA798FLL, 18446744073709551606UL, 0UL, 0x68607F2044AD6765LL}, {18446744073709551612UL, 4UL, 0x736F6583A62AC4F3LL, 0x68607F2044AD6765LL, 0x5C85276405BA798FLL, 18446744073709551606UL, 0UL, 0x68607F2044AD6765LL}, {18446744073709551612UL, 4UL, 0x736F6583A62AC4F3LL, 0x68607F2044AD6765LL, 0x5C85276405BA798FLL, 18446744073709551606UL, 0UL, 0x68607F2044AD6765LL}, {18446744073709551612UL, 4UL, 0x736F6583A62AC4F3LL, 0x68607F2044AD6765LL, 0x5C85276405BA798FLL, 18446744073709551606UL, 0UL, 0x68607F2044AD6765LL}}};
                    int i, j, k;
                    return l_246[1][4][2];
                }
                if ((*g_124))
                {
                    l_257 &= (p_47 = (0UL && ((safe_lshift_func_int16_t_s_s(l_249, 12)) && (((0xF448L && 1L) , (!(~(((*g_87) |= (safe_lshift_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u(g_9, (safe_lshift_func_uint8_t_u_u((l_256 == (-1L)), 2)))), l_256))) <= ((l_249 ^ p_47) <= (-10L)))))) > 0x4F500AEE977EAE81LL))));
                    (*l_51) = &p_47;
                    (*l_51) = l_258[1];
                }
                else
                {
                    unsigned long long *l_262 = &g_68;
                    short *l_272 = &g_71;
                    int l_275 = 1L;
                    if ((safe_sub_func_uint64_t_u_u(l_249, l_256)))
                    {
                        (*g_124) = (((l_261 && (g_57[1][2][1] <= (+(g_63[6][0] >= g_149)))) >= (g_263 = (g_65[1][0] = (l_262 == l_262)))) != ((g_264 != (safe_lshift_func_uint16_t_u_s(g_123, (((safe_rshift_func_int16_t_s_s((p_47 != l_249), g_63[3][1])) > l_257) >= p_47)))) , p_47));
                        (*g_124) |= 0x11199DAAL;
                    }
                    else
                    {
                        return (*g_87);
                    }
                    (*g_124) = (*g_124);
                    for (g_151 = 0; (g_151 >= 36); ++g_151)
                    {
                        short **l_271[7] = {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0};
                        int i;
                        (*g_124) = (((l_272 = &g_71) == (void*)0) == (safe_mul_func_uint16_t_u_u(l_275, (-3L))));
                    }
                }
            }
            p_47 ^= l_276;
            if (l_277)
                continue;
        }


    }


    ;
    return (*g_87);
}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_9, "g_9", print_hash_value);
    transparent_crc(g_11, "g_11", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_57[i][j][k], "g_57[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_63[i][j], "g_63[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(g_65[i][j], "g_65[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_68, "g_68", print_hash_value);
    transparent_crc(g_71, "g_71", print_hash_value);
    transparent_crc(g_123, "g_123", print_hash_value);
    transparent_crc(g_149, "g_149", print_hash_value);
    transparent_crc(g_151, "g_151", print_hash_value);
    transparent_crc(g_238, "g_238", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_239[i], "g_239[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_263, "g_263", print_hash_value);
    transparent_crc(g_264, "g_264", print_hash_value);
    transparent_crc(g_284, "g_284", print_hash_value);
    transparent_crc(g_286, "g_286", print_hash_value);
    transparent_crc(g_297, "g_297", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(g_318[i][j], "g_318[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_340, "g_340", print_hash_value);
    transparent_crc(g_462, "g_462", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_469[i][j][k], "g_469[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_470, "g_470", print_hash_value);
    transparent_crc(g_531, "g_531", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_612[i], "g_612[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_735, "g_735", print_hash_value);
    transparent_crc(g_853, "g_853", print_hash_value);
    transparent_crc(g_1150, "g_1150", print_hash_value);
    transparent_crc(g_1523, "g_1523", print_hash_value);
    transparent_crc(g_1546, "g_1546", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_1593[i], "g_1593[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1638, "g_1638", print_hash_value);
    transparent_crc(g_1664, "g_1664", print_hash_value);
    transparent_crc(g_1693, "g_1693", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
