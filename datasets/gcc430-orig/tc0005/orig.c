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
   volatile char f0;
};


static char g_12 = 0x77L;
static int g_28 = 0xC702B5BDL;
static int * volatile g_27 = &g_28;
static int *g_83 = &g_28;
static int **g_82 = &g_83;
static int *** volatile g_81 = &g_82;
static int g_85 = 0L;
static int g_130[9][5][5] = {{{0x2F6955C0L, 0x8DFF48E3L, 0x531B7E96L, 0xF67D394CL, (-1L)}, {0x2F6955C0L, 0x8DFF48E3L, 0x531B7E96L, 0xF67D394CL, (-1L)}, {0x2F6955C0L, 0x8DFF48E3L, 0x531B7E96L, 0xF67D394CL, (-1L)}, {0x2F6955C0L, 0x8DFF48E3L, 0x531B7E96L, 0xF67D394CL, (-1L)}, {0x2F6955C0L, 0x8DFF48E3L, 0x531B7E96L, 0xF67D394CL, (-1L)}}, {{0x2F6955C0L, 0x8DFF48E3L, 0x531B7E96L, 0xF67D394CL, (-1L)}, {0x2F6955C0L, 0x8DFF48E3L, 0x531B7E96L, 0xF67D394CL, (-1L)}, {0x2F6955C0L, 0x8DFF48E3L, 0x531B7E96L, 0xF67D394CL, (-1L)}, {0x2F6955C0L, 0x8DFF48E3L, 0x531B7E96L, 0xF67D394CL, (-1L)}, {0x2F6955C0L, 0x8DFF48E3L, 0x531B7E96L, 0xF67D394CL, (-1L)}}, {{0x2F6955C0L, 0x8DFF48E3L, 0x531B7E96L, 0xF67D394CL, (-1L)}, {0x2F6955C0L, 0x8DFF48E3L, 0x531B7E96L, 0xF67D394CL, (-1L)}, {0x2F6955C0L, 0x8DFF48E3L, 0x531B7E96L, 0xF67D394CL, (-1L)}, {0x2F6955C0L, 0x8DFF48E3L, 0x531B7E96L, 0xF67D394CL, (-1L)}, {0x2F6955C0L, 0x8DFF48E3L, 0x531B7E96L, 0xF67D394CL, (-1L)}}, {{0x2F6955C0L, 0x8DFF48E3L, 0x531B7E96L, 0xF67D394CL, (-1L)}, {0x2F6955C0L, 0x8DFF48E3L, 0x531B7E96L, 0xF67D394CL, (-1L)}, {0x2F6955C0L, 0x8DFF48E3L, 0x531B7E96L, 0xF67D394CL, (-1L)}, {0x2F6955C0L, 0x8DFF48E3L, 0x531B7E96L, 0xF67D394CL, (-1L)}, {0x2F6955C0L, 0x8DFF48E3L, 0x531B7E96L, 0xF67D394CL, (-1L)}}, {{0x2F6955C0L, 0x8DFF48E3L, 0x531B7E96L, 0xF67D394CL, (-1L)}, {0x2F6955C0L, 0x8DFF48E3L, 0x531B7E96L, 0xF67D394CL, (-1L)}, {0x2F6955C0L, 0x8DFF48E3L, 0x531B7E96L, 0xF67D394CL, (-1L)}, {0x2F6955C0L, 0x8DFF48E3L, 0x531B7E96L, 0xF67D394CL, (-1L)}, {0x2F6955C0L, 0x8DFF48E3L, 0x531B7E96L, 0xF67D394CL, (-1L)}}, {{0x2F6955C0L, 0x8DFF48E3L, 0x531B7E96L, 0xF67D394CL, (-1L)}, {0x2F6955C0L, 0x8DFF48E3L, 0x531B7E96L, 0xF67D394CL, (-1L)}, {0x2F6955C0L, 0x8DFF48E3L, 0x531B7E96L, 0xF67D394CL, (-1L)}, {0x2F6955C0L, 0x8DFF48E3L, 0x531B7E96L, 0xF67D394CL, (-1L)}, {0x2F6955C0L, 0x8DFF48E3L, 0x531B7E96L, 0xF67D394CL, (-1L)}}, {{0x2F6955C0L, 0x8DFF48E3L, 0x531B7E96L, 0xF67D394CL, (-1L)}, {0x2F6955C0L, 0x8DFF48E3L, 0x531B7E96L, 0xF67D394CL, (-1L)}, {0x2F6955C0L, 0x8DFF48E3L, 0x531B7E96L, 0xF67D394CL, (-1L)}, {0x2F6955C0L, 0x8DFF48E3L, 0x531B7E96L, 0xF67D394CL, (-1L)}, {0x2F6955C0L, 0x8DFF48E3L, 0x531B7E96L, 0xF67D394CL, (-1L)}}, {{0x2F6955C0L, 0x8DFF48E3L, 0x531B7E96L, 0xF67D394CL, (-1L)}, {0x2F6955C0L, 0x8DFF48E3L, 0x531B7E96L, 0xF67D394CL, (-1L)}, {0x2F6955C0L, 0x8DFF48E3L, 0x531B7E96L, 0xF67D394CL, (-1L)}, {0x2F6955C0L, 0x8DFF48E3L, 0x531B7E96L, 0xF67D394CL, (-1L)}, {0x2F6955C0L, 0x8DFF48E3L, 0x531B7E96L, 0xF67D394CL, (-1L)}}, {{0x2F6955C0L, 0x8DFF48E3L, 0x531B7E96L, 0xF67D394CL, (-1L)}, {0x2F6955C0L, 0x8DFF48E3L, 0x531B7E96L, 0xF67D394CL, (-1L)}, {0x2F6955C0L, 0x8DFF48E3L, 0x531B7E96L, 0xF67D394CL, (-1L)}, {0x2F6955C0L, 0x8DFF48E3L, 0x531B7E96L, 0xF67D394CL, (-1L)}, {0x2F6955C0L, 0x8DFF48E3L, 0x531B7E96L, 0xF67D394CL, (-1L)}}};
static volatile int * volatile g_152 = (void*)0;
static union U0 g_189 = {0xE7L};
static union U0 *g_188 = &g_189;
static union U0 ** volatile g_187[2] = {&g_188, &g_188};
static int * volatile g_211 = &g_130[6][2][2];
static int * volatile g_228 = &g_85;
static int * volatile g_233 = (void*)0;
static int * volatile g_234 = &g_85;
static int ** volatile g_258 = &g_83;
static volatile int g_259 = 0L;
static volatile int g_260 = 1L;
static int g_261 = 0xF28FBD83L;
static volatile int g_262 = 1L;
static volatile int g_263[7][3][3] = {{{(-1L), 0xEA24C7B2L, 0x32A4950DL}, {(-1L), 0xEA24C7B2L, 0x32A4950DL}, {(-1L), 0xEA24C7B2L, 0x32A4950DL}}, {{(-1L), 0xEA24C7B2L, 0x32A4950DL}, {(-1L), 0xEA24C7B2L, 0x32A4950DL}, {(-1L), 0xEA24C7B2L, 0x32A4950DL}}, {{(-1L), 0xEA24C7B2L, 0x32A4950DL}, {(-1L), 0xEA24C7B2L, 0x32A4950DL}, {(-1L), 0xEA24C7B2L, 0x32A4950DL}}, {{(-1L), 0xEA24C7B2L, 0x32A4950DL}, {(-1L), 0xEA24C7B2L, 0x32A4950DL}, {(-1L), 0xEA24C7B2L, 0x32A4950DL}}, {{(-1L), 0xEA24C7B2L, 0x32A4950DL}, {(-1L), 0xEA24C7B2L, 0x32A4950DL}, {(-1L), 0xEA24C7B2L, 0x32A4950DL}}, {{(-1L), 0xEA24C7B2L, 0x32A4950DL}, {(-1L), 0xEA24C7B2L, 0x32A4950DL}, {(-1L), 0xEA24C7B2L, 0x32A4950DL}}, {{(-1L), 0xEA24C7B2L, 0x32A4950DL}, {(-1L), 0xEA24C7B2L, 0x32A4950DL}, {(-1L), 0xEA24C7B2L, 0x32A4950DL}}};
static volatile int g_264 = (-3L);
static int g_265 = 1L;
static int g_266 = 0x10D91D20L;
static int ** volatile g_270 = &g_83;
static int ** volatile g_282[1][2] = {{(void*)0, (void*)0}};
static int ** volatile g_283[6] = {&g_83, &g_83, &g_83, &g_83, &g_83, &g_83};
static int ** volatile g_284 = &g_83;
static int ** volatile g_329 = &g_83;
static volatile unsigned long long g_343 = 0xE09FF4784D76C3EFLL;
static int ** volatile g_396 = &g_83;
static long long g_422 = 6L;
static union U0 ** volatile g_446[5][4] = {{&g_188, &g_188, &g_188, &g_188}, {&g_188, &g_188, &g_188, &g_188}, {&g_188, &g_188, &g_188, &g_188}, {&g_188, &g_188, &g_188, &g_188}, {&g_188, &g_188, &g_188, &g_188}};
static union U0 ** volatile g_465[3] = {&g_188, &g_188, &g_188};
static int * volatile g_467 = &g_85;
static unsigned g_488 = 18446744073709551610UL;
static union U0 g_538[9] = {{-1L}, {-1L}, {-1L}, {-1L}, {-1L}, {-1L}, {-1L}, {-1L}, {-1L}};
static int ** volatile g_547 = &g_83;
static int * volatile g_554[7] = {&g_85, &g_85, &g_261, &g_85, &g_85, &g_261, &g_85};
static int ** volatile g_583[6][9] = {{&g_83, (void*)0, &g_83, &g_83, &g_83, (void*)0, &g_83, &g_83, &g_83}, {&g_83, (void*)0, &g_83, &g_83, &g_83, (void*)0, &g_83, &g_83, &g_83}, {&g_83, (void*)0, &g_83, &g_83, &g_83, (void*)0, &g_83, &g_83, &g_83}, {&g_83, (void*)0, &g_83, &g_83, &g_83, (void*)0, &g_83, &g_83, &g_83}, {&g_83, (void*)0, &g_83, &g_83, &g_83, (void*)0, &g_83, &g_83, &g_83}, {&g_83, (void*)0, &g_83, &g_83, &g_83, (void*)0, &g_83, &g_83, &g_83}};
static int ** volatile g_599 = (void*)0;
static unsigned g_609 = 0UL;
static int ** const volatile g_651[6][6][2] = {{{&g_83, &g_83}, {&g_83, &g_83}, {&g_83, &g_83}, {&g_83, &g_83}, {&g_83, &g_83}, {&g_83, &g_83}}, {{&g_83, &g_83}, {&g_83, &g_83}, {&g_83, &g_83}, {&g_83, &g_83}, {&g_83, &g_83}, {&g_83, &g_83}}, {{&g_83, &g_83}, {&g_83, &g_83}, {&g_83, &g_83}, {&g_83, &g_83}, {&g_83, &g_83}, {&g_83, &g_83}}, {{&g_83, &g_83}, {&g_83, &g_83}, {&g_83, &g_83}, {&g_83, &g_83}, {&g_83, &g_83}, {&g_83, &g_83}}, {{&g_83, &g_83}, {&g_83, &g_83}, {&g_83, &g_83}, {&g_83, &g_83}, {&g_83, &g_83}, {&g_83, &g_83}}, {{&g_83, &g_83}, {&g_83, &g_83}, {&g_83, &g_83}, {&g_83, &g_83}, {&g_83, &g_83}, {&g_83, &g_83}}};
static int ** volatile g_654 = &g_83;
static int * volatile g_715 = &g_130[4][3][1];
static int ** volatile g_717 = (void*)0;
static int *** volatile g_784[3] = {&g_82, &g_82, &g_82};
static union U0 **g_790 = (void*)0;
static union U0 *** volatile g_789 = &g_790;
static int ** volatile g_827 = &g_83;
static volatile union U0 g_868 = {0x86L};
static volatile union U0 *g_867 = &g_868;
static union U0 g_880[3][5][9] = {{{{-1L}, {1L}, {0x7CL}, {0x17L}, {-2L}, {0x74L}, {1L}, {4L}, {-1L}}, {{-1L}, {1L}, {0x7CL}, {0x17L}, {-2L}, {0x74L}, {1L}, {4L}, {-1L}}, {{-1L}, {1L}, {0x7CL}, {0x17L}, {-2L}, {0x74L}, {1L}, {4L}, {-1L}}, {{-1L}, {1L}, {0x7CL}, {0x17L}, {-2L}, {0x74L}, {1L}, {4L}, {-1L}}, {{-1L}, {1L}, {0x7CL}, {0x17L}, {-2L}, {0x74L}, {1L}, {4L}, {-1L}}}, {{{-1L}, {1L}, {0x7CL}, {0x17L}, {-2L}, {0x74L}, {1L}, {4L}, {-1L}}, {{-1L}, {1L}, {0x7CL}, {0x17L}, {-2L}, {0x74L}, {1L}, {4L}, {-1L}}, {{-1L}, {1L}, {0x7CL}, {0x17L}, {-2L}, {0x74L}, {1L}, {4L}, {-1L}}, {{-1L}, {1L}, {0x7CL}, {0x17L}, {-2L}, {0x74L}, {1L}, {4L}, {-1L}}, {{-1L}, {1L}, {0x7CL}, {0x17L}, {-2L}, {0x74L}, {1L}, {4L}, {-1L}}}, {{{-1L}, {1L}, {0x7CL}, {0x17L}, {-2L}, {0x74L}, {1L}, {4L}, {-1L}}, {{-1L}, {1L}, {0x7CL}, {0x17L}, {-2L}, {0x74L}, {1L}, {4L}, {-1L}}, {{-1L}, {1L}, {0x7CL}, {0x17L}, {-2L}, {0x74L}, {1L}, {4L}, {-1L}}, {{-1L}, {1L}, {0x7CL}, {0x17L}, {-2L}, {0x74L}, {1L}, {4L}, {-1L}}, {{-1L}, {1L}, {0x7CL}, {0x17L}, {-2L}, {0x74L}, {1L}, {4L}, {-1L}}}};
static const int *g_909 = (void*)0;
static const int ** volatile g_908 = &g_909;
static int *** volatile g_936 = &g_82;
static volatile int * volatile *g_937 = &g_152;
static int * volatile g_952 = (void*)0;
static int *g_965 = &g_261;



static unsigned func_1(void);
static unsigned short func_9(const long long p_10, unsigned p_11);
static unsigned func_15(unsigned p_16);
static int * func_29(unsigned p_30);
static short func_34(unsigned long long p_35, int * p_36, const int * p_37);
static unsigned short func_38(int * p_39, int p_40, char p_41, const short p_42);
static int * func_43(unsigned p_44, unsigned long long p_45, int * p_46);
static int * func_47(int * const p_48, const unsigned long long p_49, int * p_50, int * const p_51, int p_52);
static int * func_53(int * p_54);
static int * func_55(int * p_56, unsigned char p_57, unsigned long long p_58);
static unsigned func_1(void)
{
    unsigned l_8 = 1UL;
    const int *l_33 = &g_28;
    int *l_951 = (void*)0;
    (*g_27) = (0x6FE7D8A87013DCE9LL & ((safe_mul_func_int64_t_s_s((safe_mod_func_uint64_t_u_u(18446744073709551606UL, l_8)), (func_9((g_12 <= (-6L)), (((safe_rshift_func_uint16_t_u_s((func_15(l_8) != l_8), (safe_unary_minus_func_uint32_t_u((safe_sub_func_uint64_t_u_u(((safe_add_func_int64_t_s_s((-1L), l_8)) <= l_8), g_12)))))) < g_12) | 0x945CB81ECA6C8490LL)) == g_12))) < l_8));
    g_965 = func_29((safe_lshift_func_uint16_t_u_s(((l_33 == &g_28) >= (g_28 | func_15((func_34((g_28 || ((0xF47B5881F6C987F9LL || ((*l_33) && (func_38(func_43(g_28, g_28, &g_28), g_609, g_28, (*l_33)) < (-2L)))) && (*l_33))), l_951, l_951) && 1L)))), 4)));



    ;
    ;
    ;
    return (*l_33);
}







static unsigned short func_9(const long long p_10, unsigned p_11)
{
    unsigned short l_22[2][5];
    int l_23[5][10][2] = {{{0x0C090200L, 1L}, {0x0C090200L, 1L}, {0x0C090200L, 1L}, {0x0C090200L, 1L}, {0x0C090200L, 1L}, {0x0C090200L, 1L}, {0x0C090200L, 1L}, {0x0C090200L, 1L}, {0x0C090200L, 1L}, {0x0C090200L, 1L}}, {{0x0C090200L, 1L}, {0x0C090200L, 1L}, {0x0C090200L, 1L}, {0x0C090200L, 1L}, {0x0C090200L, 1L}, {0x0C090200L, 1L}, {0x0C090200L, 1L}, {0x0C090200L, 1L}, {0x0C090200L, 1L}, {0x0C090200L, 1L}}, {{0x0C090200L, 1L}, {0x0C090200L, 1L}, {0x0C090200L, 1L}, {0x0C090200L, 1L}, {0x0C090200L, 1L}, {0x0C090200L, 1L}, {0x0C090200L, 1L}, {0x0C090200L, 1L}, {0x0C090200L, 1L}, {0x0C090200L, 1L}}, {{0x0C090200L, 1L}, {0x0C090200L, 1L}, {0x0C090200L, 1L}, {0x0C090200L, 1L}, {0x0C090200L, 1L}, {0x0C090200L, 1L}, {0x0C090200L, 1L}, {0x0C090200L, 1L}, {0x0C090200L, 1L}, {0x0C090200L, 1L}}, {{0x0C090200L, 1L}, {0x0C090200L, 1L}, {0x0C090200L, 1L}, {0x0C090200L, 1L}, {0x0C090200L, 1L}, {0x0C090200L, 1L}, {0x0C090200L, 1L}, {0x0C090200L, 1L}, {0x0C090200L, 1L}, {0x0C090200L, 1L}}};
    int *l_26 = (void*)0;
    int i, j, k;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 5; j++)
            l_22[i][j] = 0xA0F0L;
    }
    l_23[0][3][1] = l_22[0][4];
    l_23[0][3][1] = l_22[0][2];
    (*g_27) = (((safe_div_func_uint32_t_u_u(g_12, g_12)) != 0UL) <= l_23[0][3][1]);
    return g_28;
}







static unsigned func_15(unsigned p_16)
{
    return g_12;
}







static int * func_29(unsigned p_30)
{
    const unsigned char l_954 = 252UL;
    int *l_955 = &g_266;
    union U0 ***l_956 = (void*)0;
    (*l_955) = ((p_30 | p_30) ^ func_34(func_34(func_9(l_954, g_880[1][1][6].f0), l_955, l_955), l_955, l_955));
    if ((l_956 != (void*)0))
    {
        unsigned l_959 = 0xA0C5FFF8L;
        for (g_422 = 0; (g_422 != 6); g_422 = safe_add_func_uint64_t_u_u(g_422, 3))
        {
            l_959 = (*l_955);
        }
    }
    else
    {
        short l_960[3][4] = {{0x83FAL, 0x6566L, 0x83FAL, 0x6566L}, {0x83FAL, 0x6566L, 0x83FAL, 0x6566L}, {0x83FAL, 0x6566L, 0x83FAL, 0x6566L}};
        int *l_961[5] = {&g_130[0][2][2], (void*)0, &g_130[0][2][2], (void*)0, &g_130[0][2][2]};
        const int **l_964 = &g_909;
        int i, j;
        (*l_964) = (*g_908);
    }
    return l_955;


}







static short func_34(unsigned long long p_35, int * p_36, const int * p_37)
{
    int *l_953 = &g_130[1][4][1];
    (*l_953) = p_35;
    return g_130[4][3][0];
}







static unsigned short func_38(int * p_39, int p_40, char p_41, const short p_42)
{
    int l_828 = 0xAA58A5D0L;
    union U0 *l_869 = (void*)0;
    union U0 *l_879 = &g_880[1][1][6];
    int l_940[10][9][2] = {{{(-2L), (-4L)}, {(-2L), (-4L)}, {(-2L), (-4L)}, {(-2L), (-4L)}, {(-2L), (-4L)}, {(-2L), (-4L)}, {(-2L), (-4L)}, {(-2L), (-4L)}, {(-2L), (-4L)}}, {{(-2L), (-4L)}, {(-2L), (-4L)}, {(-2L), (-4L)}, {(-2L), (-4L)}, {(-2L), (-4L)}, {(-2L), (-4L)}, {(-2L), (-4L)}, {(-2L), (-4L)}, {(-2L), (-4L)}}, {{(-2L), (-4L)}, {(-2L), (-4L)}, {(-2L), (-4L)}, {(-2L), (-4L)}, {(-2L), (-4L)}, {(-2L), (-4L)}, {(-2L), (-4L)}, {(-2L), (-4L)}, {(-2L), (-4L)}}, {{(-2L), (-4L)}, {(-2L), (-4L)}, {(-2L), (-4L)}, {(-2L), (-4L)}, {(-2L), (-4L)}, {(-2L), (-4L)}, {(-2L), (-4L)}, {(-2L), (-4L)}, {(-2L), (-4L)}}, {{(-2L), (-4L)}, {(-2L), (-4L)}, {(-2L), (-4L)}, {(-2L), (-4L)}, {(-2L), (-4L)}, {(-2L), (-4L)}, {(-2L), (-4L)}, {(-2L), (-4L)}, {(-2L), (-4L)}}, {{(-2L), (-4L)}, {(-2L), (-4L)}, {(-2L), (-4L)}, {(-2L), (-4L)}, {(-2L), (-4L)}, {(-2L), (-4L)}, {(-2L), (-4L)}, {(-2L), (-4L)}, {(-2L), (-4L)}}, {{(-2L), (-4L)}, {(-2L), (-4L)}, {(-2L), (-4L)}, {(-2L), (-4L)}, {(-2L), (-4L)}, {(-2L), (-4L)}, {(-2L), (-4L)}, {(-2L), (-4L)}, {(-2L), (-4L)}}, {{(-2L), (-4L)}, {(-2L), (-4L)}, {(-2L), (-4L)}, {(-2L), (-4L)}, {(-2L), (-4L)}, {(-2L), (-4L)}, {(-2L), (-4L)}, {(-2L), (-4L)}, {(-2L), (-4L)}}, {{(-2L), (-4L)}, {(-2L), (-4L)}, {(-2L), (-4L)}, {(-2L), (-4L)}, {(-2L), (-4L)}, {(-2L), (-4L)}, {(-2L), (-4L)}, {(-2L), (-4L)}, {(-2L), (-4L)}}, {{(-2L), (-4L)}, {(-2L), (-4L)}, {(-2L), (-4L)}, {(-2L), (-4L)}, {(-2L), (-4L)}, {(-2L), (-4L)}, {(-2L), (-4L)}, {(-2L), (-4L)}, {(-2L), (-4L)}}};
    unsigned l_945 = 0UL;
    unsigned short l_950[6] = {0xB389L, 0xB389L, 9UL, 0xB389L, 0xB389L, 9UL};
    int i, j, k;
    if ((safe_lshift_func_uint8_t_u_s((safe_lshift_func_int8_t_s_u(p_40, 5)), (0xD3E59B6E3357479DLL || g_538[8].f0))))
    {
        int *l_825[5][2] = {{(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}};
        int **l_826 = &l_825[4][0];
        int i, j;
        (*l_826) = &p_40;


    }
    else
    {
        union U0 ***l_837 = &g_790;
        int l_842[1];
        union U0 *l_857 = (void*)0;
        int **l_870 = &g_83;
        int i;
        for (i = 0; i < 1; i++)
            l_842[i] = 0x14A7977FL;
        (*g_827) = &p_40;

        ;
        (*g_83) = l_828;
        if (l_828)
        {
            union U0 ***l_845 = (void*)0;
            int l_847 = 0x7D7936B3L;
            int *** const l_856 = &g_82;
            if ((safe_add_func_uint64_t_u_u(g_263[2][1][1], (p_40 == (safe_sub_func_int8_t_s_s((safe_lshift_func_int16_t_s_s(0x22D8L, (+((safe_add_func_int64_t_s_s(((void*)0 == l_837), (safe_mod_func_int64_t_s_s((safe_add_func_uint16_t_u_u((l_842[0] <= ((safe_lshift_func_uint8_t_u_u((l_837 != l_845), (((((func_15(l_828) || p_42) > p_40) >= 0xCEC485A1L) >= l_828) > 0UL))) != p_41)), p_40)), (-1L))))) || g_261)))), 0xD3L))))))
            {
                int **l_846 = &g_83;
                (*l_846) = &l_828;

                ;
                if ((l_847 || (safe_div_func_int64_t_s_s(((func_15(g_488) != 0xFF7427F5L) <= ((safe_sub_func_int64_t_s_s((l_842[0] < g_28), (((~func_15((**l_846))) != ((!(safe_lshift_func_int8_t_s_u(((l_856 != (void*)0) & p_40), 2))) == l_828)) >= g_263[6][1][1]))) >= 0x6577L)), 7UL))))
                {
                    (**l_846) = ((l_857 != l_857) ^ l_842[0]);
                }
                else
                {
                    union U0 *l_858 = &g_189;
                    for (g_488 = 0; (g_488 <= 4); g_488 += 1)
                    {
                        union U0 **l_859 = &g_188;
                        (*l_859) = l_858;
                        (*g_83) = ((safe_add_func_uint8_t_u_u(((p_40 != ((func_15(p_40) > g_265) <= (((void*)0 != &g_465[1]) >= g_263[5][2][2]))) | (&g_188 == (void*)0)), 255UL)) && p_41);
                    }
                }
                for (g_266 = 9; (g_266 >= (-3)); --g_266)
                {
                    long long l_866 = 0x7AB7ACCCEEA473D6LL;
                    for (g_422 = 0; (g_422 != (-29)); g_422 = safe_sub_func_int32_t_s_s(g_422, 8))
                    {
                        return l_866;


                    }
                }
                if ((((g_867 == l_869) ^ (l_870 == l_846)) != g_538[8].f0))
                {
                    (*l_846) = &p_40;

                    ;
                    (*l_870) = (void*)0;

                    ;
                    for (l_828 = (-21); (l_828 == (-5)); ++l_828)
                    {
                        int l_883 = 0xB450A989L;
                        (*l_870) = &p_40;

                        ;
                        (**l_870) = (g_609 > (g_130[4][2][4] != (safe_mod_func_int8_t_s_s(((safe_lshift_func_uint16_t_u_s(((0x4B335AEF1A0CB82BLL && (1UL <= p_42)) > (((~((safe_mod_func_int32_t_s_s((g_263[6][1][0] & (l_879 != (void*)0)), (safe_div_func_int8_t_s_s((g_266 > 0x408BL), g_422)))) & p_42)) ^ g_85) > g_488)), 11)) > p_40), 255UL))));
                        p_40 = l_883;
                    }

                    ;
                }
                else
                {
                    return p_42;


                }

                ;
            }
            else
            {
                unsigned l_900 = 4294967295UL;
                int *l_935 = &g_266;
                for (g_266 = 0; (g_266 >= 0); g_266 -= 1)
                {
                    int i;
                    if (func_15(l_842[g_266]))
                    {
                        int i;
                        (**l_870) = (safe_lshift_func_uint16_t_u_u(((void*)0 == &l_842[g_266]), ((+(safe_mod_func_int32_t_s_s((safe_add_func_uint16_t_u_u(func_15((((safe_div_func_int32_t_s_s((((safe_lshift_func_uint8_t_u_s((safe_lshift_func_int16_t_s_u(((**g_270) < (func_15((&g_465[(g_266 + 1)] == l_845)) != (safe_mod_func_int64_t_s_s(((!(p_41 ^ g_130[5][1][1])) == ((safe_mod_func_uint64_t_u_u(((p_42 | g_28) ^ l_842[g_266]), g_609)) <= (*g_83))), g_422)))), p_42)), p_40)) ^ 1L) == p_42), g_261)) | l_828) || 0x4C26L)), l_900)), 0xA3BD537FL))) < g_261)));
                        (*g_83) = func_15(((g_263[4][2][0] && (func_15(g_422) || (0xC6C0E0DDF580AAD0LL <= ((safe_sub_func_uint16_t_u_u(l_842[g_266], p_42)) | (safe_add_func_uint64_t_u_u(((**l_870) && (1L || (func_15(((((safe_lshift_func_int16_t_s_s(((void*)0 == &p_39), 7)) || (-2L)) ^ 0x0C36443DL) | (**l_870))) < g_28))), g_260)))))) & g_28));
                        (*g_83) = (0x828A4E0CL & g_259);
                    }
                    else
                    {
                        const int *l_907 = (void*)0;
                        (*g_908) = l_907;
                        (**l_870) = (p_42 > func_15(l_828));
                        (*l_870) = &p_40;
                    }
                    for (g_85 = 2; (g_85 >= 0); g_85 -= 1)
                    {
                        (*g_83) = (~func_15((safe_rshift_func_uint16_t_u_u(l_842[g_266], 12))));
                        return g_343;


                    }
                    for (g_12 = 0; (g_12 <= 4); g_12 += 1)
                    {
                        return g_130[5][0][2];


                    }
                }
                for (g_488 = 0; (g_488 == 60); g_488 = safe_add_func_int8_t_s_s(g_488, 7))
                {
                    unsigned l_934 = 0xA92A9589L;
                    for (g_261 = (-26); (g_261 == 22); ++g_261)
                    {
                        int *l_922 = &g_28;
                        (*l_870) = &p_40;
                    }
                    if (l_900)
                        continue;
                    (*g_83) = (safe_mod_func_uint64_t_u_u((safe_div_func_uint32_t_u_u((p_41 & (func_15(func_15((safe_unary_minus_func_uint32_t_u(((safe_mod_func_uint64_t_u_u(p_42, (safe_sub_func_int64_t_s_s((safe_add_func_uint16_t_u_u(p_41, l_934)), (**l_870))))) || g_343))))) != func_15(g_265))), (**l_870))), (**l_870)));
                }
                (*l_870) = func_53(l_935);

                ;
                (*l_870) = l_935;

                ;
            }

            ;
        }
        else
        {
            (*g_936) = &p_39;

            ;
            g_937 = (void*)0;

            ;
        }

        ;

        ;
    }



    ;
    l_950[0] = ((g_259 ^ (func_15((safe_sub_func_int64_t_s_s(p_40, (l_940[4][3][0] > (safe_div_func_uint16_t_u_u((safe_sub_func_uint64_t_u_u(((l_940[4][3][0] != l_945) | (safe_add_func_int64_t_s_s(p_42, 0x36E425BBFAC23240LL))), ((safe_mod_func_uint16_t_u_u(g_422, g_265)) >= 0x12F95A28L))), g_28)))))) < 0xAC39L)) < l_945);
    return g_262;



}







static int * func_43(unsigned p_44, unsigned long long p_45, int * p_46)
{
    char l_59 = 1L;
    int **l_722[10][9][2] = {{{(void*)0, &g_83}, {(void*)0, &g_83}, {(void*)0, &g_83}, {(void*)0, &g_83}, {(void*)0, &g_83}, {(void*)0, &g_83}, {(void*)0, &g_83}, {(void*)0, &g_83}, {(void*)0, &g_83}}, {{(void*)0, &g_83}, {(void*)0, &g_83}, {(void*)0, &g_83}, {(void*)0, &g_83}, {(void*)0, &g_83}, {(void*)0, &g_83}, {(void*)0, &g_83}, {(void*)0, &g_83}, {(void*)0, &g_83}}, {{(void*)0, &g_83}, {(void*)0, &g_83}, {(void*)0, &g_83}, {(void*)0, &g_83}, {(void*)0, &g_83}, {(void*)0, &g_83}, {(void*)0, &g_83}, {(void*)0, &g_83}, {(void*)0, &g_83}}, {{(void*)0, &g_83}, {(void*)0, &g_83}, {(void*)0, &g_83}, {(void*)0, &g_83}, {(void*)0, &g_83}, {(void*)0, &g_83}, {(void*)0, &g_83}, {(void*)0, &g_83}, {(void*)0, &g_83}}, {{(void*)0, &g_83}, {(void*)0, &g_83}, {(void*)0, &g_83}, {(void*)0, &g_83}, {(void*)0, &g_83}, {(void*)0, &g_83}, {(void*)0, &g_83}, {(void*)0, &g_83}, {(void*)0, &g_83}}, {{(void*)0, &g_83}, {(void*)0, &g_83}, {(void*)0, &g_83}, {(void*)0, &g_83}, {(void*)0, &g_83}, {(void*)0, &g_83}, {(void*)0, &g_83}, {(void*)0, &g_83}, {(void*)0, &g_83}}, {{(void*)0, &g_83}, {(void*)0, &g_83}, {(void*)0, &g_83}, {(void*)0, &g_83}, {(void*)0, &g_83}, {(void*)0, &g_83}, {(void*)0, &g_83}, {(void*)0, &g_83}, {(void*)0, &g_83}}, {{(void*)0, &g_83}, {(void*)0, &g_83}, {(void*)0, &g_83}, {(void*)0, &g_83}, {(void*)0, &g_83}, {(void*)0, &g_83}, {(void*)0, &g_83}, {(void*)0, &g_83}, {(void*)0, &g_83}}, {{(void*)0, &g_83}, {(void*)0, &g_83}, {(void*)0, &g_83}, {(void*)0, &g_83}, {(void*)0, &g_83}, {(void*)0, &g_83}, {(void*)0, &g_83}, {(void*)0, &g_83}, {(void*)0, &g_83}}, {{(void*)0, &g_83}, {(void*)0, &g_83}, {(void*)0, &g_83}, {(void*)0, &g_83}, {(void*)0, &g_83}, {(void*)0, &g_83}, {(void*)0, &g_83}, {(void*)0, &g_83}, {(void*)0, &g_83}}};
    int *l_726 = &g_28;
    union U0 ** const l_744[7][10] = {{&g_188, &g_188, (void*)0, &g_188, &g_188, &g_188, &g_188, &g_188, &g_188, &g_188}, {&g_188, &g_188, (void*)0, &g_188, &g_188, &g_188, &g_188, &g_188, &g_188, &g_188}, {&g_188, &g_188, (void*)0, &g_188, &g_188, &g_188, &g_188, &g_188, &g_188, &g_188}, {&g_188, &g_188, (void*)0, &g_188, &g_188, &g_188, &g_188, &g_188, &g_188, &g_188}, {&g_188, &g_188, (void*)0, &g_188, &g_188, &g_188, &g_188, &g_188, &g_188, &g_188}, {&g_188, &g_188, (void*)0, &g_188, &g_188, &g_188, &g_188, &g_188, &g_188, &g_188}, {&g_188, &g_188, (void*)0, &g_188, &g_188, &g_188, &g_188, &g_188, &g_188, &g_188}};
    int i, j, k;
    p_46 = func_47(func_53(func_55(p_46, p_45, l_59)), p_45, p_46, &g_28, g_488);

    ;


    (*g_234) = (*g_467);
    for (p_45 = (-6); (p_45 != 18); p_45 = safe_add_func_uint32_t_u_u(p_45, 9))
    {
        int *l_725 = (void*)0;
        int *l_727 = (void*)0;
        int l_743[6][4][7] = {{{0x65B1FCA0L, 0x9B527351L, 0xF4ADC2F5L, 0xC582C046L, (-2L), 0x038F1517L, 0xF28AF75BL}, {0x65B1FCA0L, 0x9B527351L, 0xF4ADC2F5L, 0xC582C046L, (-2L), 0x038F1517L, 0xF28AF75BL}, {0x65B1FCA0L, 0x9B527351L, 0xF4ADC2F5L, 0xC582C046L, (-2L), 0x038F1517L, 0xF28AF75BL}, {0x65B1FCA0L, 0x9B527351L, 0xF4ADC2F5L, 0xC582C046L, (-2L), 0x038F1517L, 0xF28AF75BL}}, {{0x65B1FCA0L, 0x9B527351L, 0xF4ADC2F5L, 0xC582C046L, (-2L), 0x038F1517L, 0xF28AF75BL}, {0x65B1FCA0L, 0x9B527351L, 0xF4ADC2F5L, 0xC582C046L, (-2L), 0x038F1517L, 0xF28AF75BL}, {0x65B1FCA0L, 0x9B527351L, 0xF4ADC2F5L, 0xC582C046L, (-2L), 0x038F1517L, 0xF28AF75BL}, {0x65B1FCA0L, 0x9B527351L, 0xF4ADC2F5L, 0xC582C046L, (-2L), 0x038F1517L, 0xF28AF75BL}}, {{0x65B1FCA0L, 0x9B527351L, 0xF4ADC2F5L, 0xC582C046L, (-2L), 0x038F1517L, 0xF28AF75BL}, {0x65B1FCA0L, 0x9B527351L, 0xF4ADC2F5L, 0xC582C046L, (-2L), 0x038F1517L, 0xF28AF75BL}, {0x65B1FCA0L, 0x9B527351L, 0xF4ADC2F5L, 0xC582C046L, (-2L), 0x038F1517L, 0xF28AF75BL}, {0x65B1FCA0L, 0x9B527351L, 0xF4ADC2F5L, 0xC582C046L, (-2L), 0x038F1517L, 0xF28AF75BL}}, {{0x65B1FCA0L, 0x9B527351L, 0xF4ADC2F5L, 0xC582C046L, (-2L), 0x038F1517L, 0xF28AF75BL}, {0x65B1FCA0L, 0x9B527351L, 0xF4ADC2F5L, 0xC582C046L, (-2L), 0x038F1517L, 0xF28AF75BL}, {0x65B1FCA0L, 0x9B527351L, 0xF4ADC2F5L, 0xC582C046L, (-2L), 0x038F1517L, 0xF28AF75BL}, {0x65B1FCA0L, 0x9B527351L, 0xF4ADC2F5L, 0xC582C046L, (-2L), 0x038F1517L, 0xF28AF75BL}}, {{0x65B1FCA0L, 0x9B527351L, 0xF4ADC2F5L, 0xC582C046L, (-2L), 0x038F1517L, 0xF28AF75BL}, {0x65B1FCA0L, 0x9B527351L, 0xF4ADC2F5L, 0xC582C046L, (-2L), 0x038F1517L, 0xF28AF75BL}, {0x65B1FCA0L, 0x9B527351L, 0xF4ADC2F5L, 0xC582C046L, (-2L), 0x038F1517L, 0xF28AF75BL}, {0x65B1FCA0L, 0x9B527351L, 0xF4ADC2F5L, 0xC582C046L, (-2L), 0x038F1517L, 0xF28AF75BL}}, {{0x65B1FCA0L, 0x9B527351L, 0xF4ADC2F5L, 0xC582C046L, (-2L), 0x038F1517L, 0xF28AF75BL}, {0x65B1FCA0L, 0x9B527351L, 0xF4ADC2F5L, 0xC582C046L, (-2L), 0x038F1517L, 0xF28AF75BL}, {0x65B1FCA0L, 0x9B527351L, 0xF4ADC2F5L, 0xC582C046L, (-2L), 0x038F1517L, 0xF28AF75BL}, {0x65B1FCA0L, 0x9B527351L, 0xF4ADC2F5L, 0xC582C046L, (-2L), 0x038F1517L, 0xF28AF75BL}}};
        union U0 ***l_791 = &g_790;
        int l_803 = 0x280689EDL;
        int i, j, k;
        (*g_547) = l_726;

        ;
        if ((**g_258))
            continue;
        l_727 = l_725;
        if ((safe_rshift_func_int16_t_s_s(((g_189.f0 ^ ((safe_add_func_int16_t_s_s((safe_lshift_func_int8_t_s_u((g_422 && (p_44 == 0x77E7L)), g_261)), (g_85 < ((!(safe_sub_func_int16_t_s_s((g_261 | g_130[4][4][1]), (safe_div_func_int8_t_s_s(0xAAL, p_44))))) | 0x6D421C05D77FBA96LL)))) == g_609)) ^ p_44), g_12)))
        {
            int *l_745[6] = {&g_85, &g_85, (void*)0, &g_85, &g_85, (void*)0};
            int l_759[2];
            int *l_782 = &g_266;
            int i;
            for (i = 0; i < 2; i++)
                l_759[i] = 0x2854B603L;
            for (g_266 = (-11); (g_266 >= 25); g_266 = safe_add_func_int64_t_s_s(g_266, 1))
            {
                long long l_742 = 1L;
                int l_762[8] = {0L, 0L, 8L, 0L, 0L, 8L, 0L, 0L};
                int *l_781 = &l_759[1];
                int i;
                for (g_265 = (-24); (g_265 <= (-17)); g_265 = safe_add_func_int16_t_s_s(g_265, 6))
                {
                    l_743[1][2][1] = l_742;
                }
                (*g_258) = p_46;
                for (g_265 = 0; (g_265 <= 3); g_265 += 1)
                {
                    int l_760[1][2];
                    int l_771 = 0x02F9F1EDL;
                    int *l_772 = &l_762[5];
                    int i, j;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 2; j++)
                            l_760[i][j] = 0xC10900F2L;
                    }
                    for (l_742 = 3; (l_742 >= 0); l_742 -= 1)
                    {
                        int * const l_756 = (void*)0;
                        int l_761 = 0xC6DCF44BL;
                        int i, j, k;
                        p_46 = l_745[4];

                        ;
                        l_760[0][0] = ((safe_lshift_func_int16_t_s_u(l_743[(l_742 + 2)][l_742][(g_265 + 2)], (safe_sub_func_int64_t_s_s((0x61933289L == ((safe_sub_func_uint32_t_u_u(g_259, l_742)) <= (safe_sub_func_int32_t_s_s((p_45 < ((l_756 != p_46) <= (safe_div_func_int8_t_s_s(((p_45 == (l_759[1] >= l_742)) > p_44), 0x7FL)))), 0x2E5F008AL)))), p_45)))) | (-6L));
                        l_761 = (*g_228);
                        l_762[5] = (0L | (l_742 & p_44));
                    }
                    for (l_742 = 0; (l_742 <= 0); l_742 += 1)
                    {
                        int i, j, k;
                        l_771 = ((safe_add_func_uint8_t_u_u(((l_762[g_265] | func_15(l_762[(l_742 + 7)])) ^ g_262), (((p_45 > ((l_742 != func_15((((safe_sub_func_int32_t_s_s((safe_div_func_int8_t_s_s(g_265, 0x16L)), (safe_lshift_func_uint16_t_u_s((p_45 >= 8L), p_45)))) || p_44) ^ 0UL))) != l_762[0])) || l_760[0][0]) | (-8L)))) || p_45);
                        l_772 = (*g_284);

                        ;
                        l_781 = (*g_258);

                        ;
                    }

                    ;
                }

                ;
            }

            ;
            l_725 = l_782;

            ;
        }
        else
        {
            int l_783[7][2];
            const union U0 *l_794[4] = {&g_189, &g_189, &g_189, &g_189};
            const union U0 **l_793 = &l_794[1];
            const union U0 ***l_792[8][8] = {{(void*)0, (void*)0, &l_793, &l_793, &l_793, (void*)0, &l_793, (void*)0}, {(void*)0, (void*)0, &l_793, &l_793, &l_793, (void*)0, &l_793, (void*)0}, {(void*)0, (void*)0, &l_793, &l_793, &l_793, (void*)0, &l_793, (void*)0}, {(void*)0, (void*)0, &l_793, &l_793, &l_793, (void*)0, &l_793, (void*)0}, {(void*)0, (void*)0, &l_793, &l_793, &l_793, (void*)0, &l_793, (void*)0}, {(void*)0, (void*)0, &l_793, &l_793, &l_793, (void*)0, &l_793, (void*)0}, {(void*)0, (void*)0, &l_793, &l_793, &l_793, (void*)0, &l_793, (void*)0}, {(void*)0, (void*)0, &l_793, &l_793, &l_793, (void*)0, &l_793, (void*)0}};
            int *l_810 = &g_130[0][1][1];
            int *** const l_819 = &g_82;
            int i, j;
            for (i = 0; i < 7; i++)
            {
                for (j = 0; j < 2; j++)
                    l_783[i][j] = 1L;
            }
            if (p_45)
                break;
            if (func_15(g_264))
            {
                int ***l_785 = &g_82;
                l_783[6][1] = 0xFDE4302FL;
                p_46 = func_47(p_46, l_783[1][1], func_47(p_46, g_422, p_46, (*g_396), (*g_83)), &g_28, l_783[6][1]);


                l_783[5][0] = (-3L);
                (*l_785) = &p_46;

                ;
            }
            else
            {
                int *l_811 = (void*)0;
                char l_820[10] = {0xB8L, 7L, 0xB8L, 7L, 0xB8L, 7L, 0xB8L, 7L, 0xB8L, 7L};
                int i;
                for (g_266 = 2; (g_266 >= (-27)); g_266--)
                {
                    union U0 **l_788[9][9][3] = {{{(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}}, {{(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}}, {{(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}}, {{(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}}, {{(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}}, {{(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}}, {{(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}}, {{(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}}, {{(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}}};
                    int i, j, k;
                    (*g_789) = l_788[7][6][2];
                }
                l_803 = ((p_44 & ((l_791 == l_792[3][7]) < func_15(g_260))) >= ((safe_div_func_int64_t_s_s(((safe_rshift_func_int16_t_s_s(p_45, p_44)) > (safe_sub_func_uint16_t_u_u(p_44, ((safe_add_func_int16_t_s_s(g_12, g_265)) != (*l_726))))), p_45)) < 4UL));
                l_725 = (void*)0;
                l_820[7] = (safe_rshift_func_uint16_t_u_s((safe_add_func_uint32_t_u_u(p_44, (safe_mod_func_uint16_t_u_u((((l_810 == l_811) != p_44) && (safe_add_func_int8_t_s_s(0x4DL, (safe_unary_minus_func_int8_t_s((safe_sub_func_int16_t_s_s(func_15(g_259), (g_85 >= (l_819 != &g_82))))))))), (-1L))))), g_130[7][4][3]));
            }


        }


        ;
    }



    ;
    p_46 = p_46;
    return p_46;



}







static int * func_47(int * const p_48, const unsigned long long p_49, int * p_50, int * const p_51, int p_52)
{
    int * const l_546 = (void*)0;
    int *l_555 = &g_85;
    const unsigned short l_560[5][8] = {{0xCF73L, 65535UL, 5UL, 0xCD43L, 0x5B4FL, 6UL, 65527UL, 0x0195L}, {0xCF73L, 65535UL, 5UL, 0xCD43L, 0x5B4FL, 6UL, 65527UL, 0x0195L}, {0xCF73L, 65535UL, 5UL, 0xCD43L, 0x5B4FL, 6UL, 65527UL, 0x0195L}, {0xCF73L, 65535UL, 5UL, 0xCD43L, 0x5B4FL, 6UL, 65527UL, 0x0195L}, {0xCF73L, 65535UL, 5UL, 0xCD43L, 0x5B4FL, 6UL, 65527UL, 0x0195L}};
    union U0 ** const l_640 = (void*)0;
    unsigned long long l_671[5] = {0xF9711694EFF56801LL, 18446744073709551615UL, 0xF9711694EFF56801LL, 18446744073709551615UL, 0xF9711694EFF56801LL};
    int *l_721[1];
    int i, j;
    for (i = 0; i < 1; i++)
        l_721[i] = &g_265;
    (*g_547) = l_546;

    ;
    (*l_555) = ((safe_sub_func_int16_t_s_s(p_52, p_49)) ^ ((safe_sub_func_uint32_t_u_u((func_15(p_52) ^ ((safe_rshift_func_int16_t_s_u((func_15(p_49) & ((func_15(func_15(g_85)) > g_189.f0) ^ g_266)), 5)) ^ p_52)), g_422)) | 0UL));
    if ((g_343 || ((g_265 < (safe_mod_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u((!(0x5F45L & (*l_555))), 10)), (g_12 | 6L)))) & (((func_15(((void*)0 != &g_188)) < g_343) == l_560[0][4]) || 0x2C777CFBL))))
    {
        int **l_561 = (void*)0;
        int l_562 = 0x7B53206BL;
        union U0 *l_591 = &g_189;
        (*l_555) = (*l_555);
        l_555 = l_555;
        l_562 = 0L;
        if ((safe_add_func_uint16_t_u_u((*l_555), func_15(g_259))))
        {
            long long l_581 = 0x1E6FFA7BBCC71C9FLL;
            int *l_582 = &g_261;
            for (g_488 = 8; (g_488 < 43); ++g_488)
            {
                union U0 *l_572 = (void*)0;
                int l_574 = 1L;
                union U0 **l_585[10] = {&g_188, &l_572, &l_572, &l_572, &l_572, &g_188, &l_572, &l_572, &l_572, &l_572};
                int i;
            }
        }
        else
        {
            int l_597 = (-1L);
            int *l_598 = &g_266;
            const int l_628 = 1L;
            union U0 **l_641 = &l_591;
            p_50 = (*g_284);

            ;
            for (g_12 = 0; (g_12 <= (-30)); --g_12)
            {
                char l_620[7] = {0x33L, 0x33L, 0L, 0x33L, 0x33L, 0L, 0x33L};
                int i;
                for (g_85 = 9; (g_85 >= 18); g_85 = safe_add_func_int8_t_s_s(g_85, 5))
                {
                    int **l_604 = &g_83;
                    int l_635 = (-10L);
                    (*l_604) = (*g_284);
                    (*l_598) = 1L;
                    for (g_261 = 0; (g_261 <= 11); g_261 = safe_add_func_int16_t_s_s(g_261, 6))
                    {
                        (*l_598) = ((safe_div_func_uint16_t_u_u(g_609, func_15(g_12))) != (safe_add_func_uint8_t_u_u(g_189.f0, g_488)));
                        (*l_604) = (*g_270);
                        l_555 = l_598;

                        ;
                    }
                }
                if ((g_130[1][3][0] > l_620[6]))
                {
                    int *l_637 = (void*)0;
                    for (g_266 = 2; (g_266 >= 0); g_266 -= 1)
                    {
                        int *l_636 = &g_130[1][0][2];
                        (*l_636) = (*l_555);
                        l_637 = &p_52;

                        ;
                    }

                    ;
                }
                else
                {
                    for (g_422 = (-9); (g_422 > (-6)); g_422++)
                    {
                        return (*g_258);


                    }
                    if ((*p_51))
                        continue;
                }
                l_641 = l_640;

                ;
                for (g_85 = 3; (g_85 >= 0); g_85 -= 1)
                {
                    p_52 = (*g_228);
                }
            }

            ;
            ;
            (*l_598) = (func_15(g_265) < (*l_598));
        }

        ;
    }
    else
    {
        unsigned char l_663 = 0x7BL;
        const int *l_681 = &g_261;
        int *l_683 = (void*)0;
        for (g_488 = 0; (g_488 != 12); ++g_488)
        {
            int *l_653 = &g_28;
            int *l_672 = (void*)0;
            for (g_261 = 0; (g_261 <= 5); g_261 += 1)
            {
                int l_682 = 0x934F1742L;
                int i;
                p_50 = (*g_329);

                ;
                if ((p_49 & g_422))
                {
                    for (p_52 = 0; (p_52 <= 14); ++p_52)
                    {
                        union U0 **l_646 = &g_188;
                        union U0 ***l_647 = &l_646;
                        (*l_647) = l_646;
                        return l_555;


                    }
                    for (g_266 = 0; (g_266 < (-13)); g_266 = safe_sub_func_int64_t_s_s(g_266, 7))
                    {
                        int *l_650 = &g_266;
                        int **l_652 = &l_555;
                        (*l_652) = l_650;

                        ;
                    }

                    ;
                    (*g_654) = l_653;

                    ;
                    return (*g_329);


                }
                else
                {
                    union U0 **l_669 = &g_188;
                    union U0 ***l_668 = &l_669;
                    int l_670 = 0xFAF9129CL;
                    int *l_673 = &g_261;
                    (*l_555) = (safe_add_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u((safe_mod_func_int32_t_s_s((g_261 >= ((!((safe_rshift_func_uint8_t_u_u(p_52, 7)) < g_422)) & g_488)), l_663)), g_130[6][0][2])), (safe_sub_func_int16_t_s_s(0x241AL, (((safe_mod_func_uint64_t_u_u((&g_465[1] != l_668), l_670)) >= 0xDE3B995ED30B9D45LL) <= g_85)))));
                    l_671[0] = (func_15(g_259) != 0xAA947EE7L);
                    if (func_15(g_609))
                    {
                        (*g_258) = &p_52;

                        ;
                        return l_673;



                    }
                    else
                    {
                        int **l_674 = &l_672;
                        (*l_674) = &l_670;

                        ;
                        p_50 = l_672;

                        ;
                    }

                    ;
                    ;
                    return (*g_329);


                }
            }
            return l_683;


        }
        (*l_555) = 0x22BB784CL;
    }

    ;
    for (g_12 = 0; (g_12 >= 4); ++g_12)
    {
        unsigned long long l_686 = 0x045C803C38529125LL;
        unsigned short l_705 = 65535UL;
        if (l_686)
            break;
    }
    return l_721[0];


}







static int * func_53(int * p_54)
{
    unsigned char l_272 = 0x0DL;
    int *l_306 = &g_265;
    union U0 *l_373 = &g_189;
    int l_376 = 0L;
    int l_406 = 0x5181354AL;
    int ***l_418 = &g_82;
    unsigned long long l_473 = 0x32DC3F6B30E7C98DLL;
    int *l_503 = &g_266;
    unsigned long long l_507 = 0x8CC405556075902CLL;
    int l_510 = 0xC79128AFL;
    for (g_85 = 0; (g_85 <= 4); g_85 += 1)
    {
        unsigned l_281 = 0xB7C80019L;
        int ***l_287 = &g_82;
        int **l_320 = &l_306;
        for (g_12 = 1; (g_12 >= 0); g_12 -= 1)
        {
            long long l_257[4] = {0xA8D5DC91545B19DELL, 0L, 0xA8D5DC91545B19DELL, 0L};
            int *l_276 = &g_130[8][2][2];
            int i;
            if (l_257[2])
                break;
            (*g_258) = p_54;


        }
        (*l_320) = p_54;


    }



    if ((*l_306))
    {
        int l_326[4];
        int *l_328[4][8][8] = {{{&g_265, (void*)0, &g_261, &g_261, &l_326[0], (void*)0, &g_85, &g_266}, {&g_265, (void*)0, &g_261, &g_261, &l_326[0], (void*)0, &g_85, &g_266}, {&g_265, (void*)0, &g_261, &g_261, &l_326[0], (void*)0, &g_85, &g_266}, {&g_265, (void*)0, &g_261, &g_261, &l_326[0], (void*)0, &g_85, &g_266}, {&g_265, (void*)0, &g_261, &g_261, &l_326[0], (void*)0, &g_85, &g_266}, {&g_265, (void*)0, &g_261, &g_261, &l_326[0], (void*)0, &g_85, &g_266}, {&g_265, (void*)0, &g_261, &g_261, &l_326[0], (void*)0, &g_85, &g_266}, {&g_265, (void*)0, &g_261, &g_261, &l_326[0], (void*)0, &g_85, &g_266}}, {{&g_265, (void*)0, &g_261, &g_261, &l_326[0], (void*)0, &g_85, &g_266}, {&g_265, (void*)0, &g_261, &g_261, &l_326[0], (void*)0, &g_85, &g_266}, {&g_265, (void*)0, &g_261, &g_261, &l_326[0], (void*)0, &g_85, &g_266}, {&g_265, (void*)0, &g_261, &g_261, &l_326[0], (void*)0, &g_85, &g_266}, {&g_265, (void*)0, &g_261, &g_261, &l_326[0], (void*)0, &g_85, &g_266}, {&g_265, (void*)0, &g_261, &g_261, &l_326[0], (void*)0, &g_85, &g_266}, {&g_265, (void*)0, &g_261, &g_261, &l_326[0], (void*)0, &g_85, &g_266}, {&g_265, (void*)0, &g_261, &g_261, &l_326[0], (void*)0, &g_85, &g_266}}, {{&g_265, (void*)0, &g_261, &g_261, &l_326[0], (void*)0, &g_85, &g_266}, {&g_265, (void*)0, &g_261, &g_261, &l_326[0], (void*)0, &g_85, &g_266}, {&g_265, (void*)0, &g_261, &g_261, &l_326[0], (void*)0, &g_85, &g_266}, {&g_265, (void*)0, &g_261, &g_261, &l_326[0], (void*)0, &g_85, &g_266}, {&g_265, (void*)0, &g_261, &g_261, &l_326[0], (void*)0, &g_85, &g_266}, {&g_265, (void*)0, &g_261, &g_261, &l_326[0], (void*)0, &g_85, &g_266}, {&g_265, (void*)0, &g_261, &g_261, &l_326[0], (void*)0, &g_85, &g_266}, {&g_265, (void*)0, &g_261, &g_261, &l_326[0], (void*)0, &g_85, &g_266}}, {{&g_265, (void*)0, &g_261, &g_261, &l_326[0], (void*)0, &g_85, &g_266}, {&g_265, (void*)0, &g_261, &g_261, &l_326[0], (void*)0, &g_85, &g_266}, {&g_265, (void*)0, &g_261, &g_261, &l_326[0], (void*)0, &g_85, &g_266}, {&g_265, (void*)0, &g_261, &g_261, &l_326[0], (void*)0, &g_85, &g_266}, {&g_265, (void*)0, &g_261, &g_261, &l_326[0], (void*)0, &g_85, &g_266}, {&g_265, (void*)0, &g_261, &g_261, &l_326[0], (void*)0, &g_85, &g_266}, {&g_265, (void*)0, &g_261, &g_261, &l_326[0], (void*)0, &g_85, &g_266}, {&g_265, (void*)0, &g_261, &g_261, &l_326[0], (void*)0, &g_85, &g_266}}};
        char l_342 = 0L;
        int ***l_366 = (void*)0;
        long long l_392[4];
        int *l_402 = &g_261;
        int i, j, k;
        for (i = 0; i < 4; i++)
            l_326[i] = 9L;
        for (i = 0; i < 4; i++)
            l_392[i] = 0x0B9685FBB2A4EBFBLL;
        if (((void*)0 != &g_188))
        {
            for (g_265 = (-4); (g_265 < 27); ++g_265)
            {
                if ((*p_54))
                    break;
            }
            return p_54;


        }
        else
        {
            int *l_325[7];
            int i;
            for (i = 0; i < 7; i++)
                l_325[i] = &g_266;
            for (g_266 = (-7); (g_266 == (-19)); --g_266)
            {
                unsigned char l_327 = 0UL;
                (*g_329) = l_328[3][7][0];

                ;
            }


            if ((*p_54))
            {
                long long l_339 = 0xFE78D9450399C950LL;
                if (func_15((*l_306)))
                {
                    long long l_335 = (-7L);
                    int **l_336 = &g_83;
                    (*l_336) = (*g_284);
                    l_339 = ((g_259 || (*l_306)) | (g_266 ^ (safe_lshift_func_int8_t_s_s(g_261, 5))));
                    for (g_261 = 26; (g_261 != 5); g_261--)
                    {
                        (*g_329) = p_54;


                        g_343 = 4L;
                        (*l_336) = p_54;
                    }
                }
                else
                {
                    int *l_344[9][8] = {{&l_326[0], &g_261, &l_326[0], &g_28, &l_326[2], &g_261, (void*)0, &g_85}, {&l_326[0], &g_261, &l_326[0], &g_28, &l_326[2], &g_261, (void*)0, &g_85}, {&l_326[0], &g_261, &l_326[0], &g_28, &l_326[2], &g_261, (void*)0, &g_85}, {&l_326[0], &g_261, &l_326[0], &g_28, &l_326[2], &g_261, (void*)0, &g_85}, {&l_326[0], &g_261, &l_326[0], &g_28, &l_326[2], &g_261, (void*)0, &g_85}, {&l_326[0], &g_261, &l_326[0], &g_28, &l_326[2], &g_261, (void*)0, &g_85}, {&l_326[0], &g_261, &l_326[0], &g_28, &l_326[2], &g_261, (void*)0, &g_85}, {&l_326[0], &g_261, &l_326[0], &g_28, &l_326[2], &g_261, (void*)0, &g_85}, {&l_326[0], &g_261, &l_326[0], &g_28, &l_326[2], &g_261, (void*)0, &g_85}};
                    int **l_345 = &l_325[4];
                    int i, j;
                    (*l_345) = l_344[1][6];


                    for (g_265 = 0; (g_265 > 19); g_265 = safe_add_func_uint32_t_u_u(g_265, 7))
                    {
                        unsigned char l_348 = 4UL;
                        l_348 = (*p_54);
                        if ((*p_54))
                            break;
                    }
                }


            }
            else
            {
                for (g_265 = 0; g_265 < 9; g_265 += 1)
                {
                    for (g_85 = 0; g_85 < 5; g_85 += 1)
                    {
                        for (g_343 = 0; g_343 < 5; g_343 += 1)
                        {
                            g_130[g_265][g_85][g_343] = 0x87F70153L;
                        }
                    }
                }
                return p_54;



            }


        }


        for (l_272 = 0; (l_272 <= 1); l_272 += 1)
        {
            long long l_354 = (-8L);
            union U0 *l_374 = (void*)0;
            char l_395[3];
            unsigned l_398[4][3][9] = {{{0xF8F3B270L, 4294967295UL, 4294967295UL, 0xED76638FL, 4294967295UL, 4294967295UL, 0xF8F3B270L, 1UL, 0x3039616EL}, {0xF8F3B270L, 4294967295UL, 4294967295UL, 0xED76638FL, 4294967295UL, 4294967295UL, 0xF8F3B270L, 1UL, 0x3039616EL}, {0xF8F3B270L, 4294967295UL, 4294967295UL, 0xED76638FL, 4294967295UL, 4294967295UL, 0xF8F3B270L, 1UL, 0x3039616EL}}, {{0xF8F3B270L, 4294967295UL, 4294967295UL, 0xED76638FL, 4294967295UL, 4294967295UL, 0xF8F3B270L, 1UL, 0x3039616EL}, {0xF8F3B270L, 4294967295UL, 4294967295UL, 0xED76638FL, 4294967295UL, 4294967295UL, 0xF8F3B270L, 1UL, 0x3039616EL}, {0xF8F3B270L, 4294967295UL, 4294967295UL, 0xED76638FL, 4294967295UL, 4294967295UL, 0xF8F3B270L, 1UL, 0x3039616EL}}, {{0xF8F3B270L, 4294967295UL, 4294967295UL, 0xED76638FL, 4294967295UL, 4294967295UL, 0xF8F3B270L, 1UL, 0x3039616EL}, {0xF8F3B270L, 4294967295UL, 4294967295UL, 0xED76638FL, 4294967295UL, 4294967295UL, 0xF8F3B270L, 1UL, 0x3039616EL}, {0xF8F3B270L, 4294967295UL, 4294967295UL, 0xED76638FL, 4294967295UL, 4294967295UL, 0xF8F3B270L, 1UL, 0x3039616EL}}, {{0xF8F3B270L, 4294967295UL, 4294967295UL, 0xED76638FL, 4294967295UL, 4294967295UL, 0xF8F3B270L, 1UL, 0x3039616EL}, {0xF8F3B270L, 4294967295UL, 4294967295UL, 0xED76638FL, 4294967295UL, 4294967295UL, 0xF8F3B270L, 1UL, 0x3039616EL}, {0xF8F3B270L, 4294967295UL, 4294967295UL, 0xED76638FL, 4294967295UL, 4294967295UL, 0xF8F3B270L, 1UL, 0x3039616EL}}};
            int **l_400 = &l_328[3][7][1];
            int l_401 = 0xE366A0CDL;
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_395[i] = 1L;
            for (g_261 = 2; (g_261 >= 0); g_261 -= 1)
            {
                int **l_353 = &l_306;
                int i;
                (*g_211) = (safe_mod_func_int32_t_s_s(l_326[(g_261 + 1)], (safe_lshift_func_uint16_t_u_u(l_326[(g_261 + 1)], 1))));
                (*l_353) = p_54;


                if ((*p_54))
                    break;
                for (g_266 = 0; (g_266 <= 1); g_266 += 1)
                {
                    for (l_342 = 0; (l_342 <= 0); l_342 += 1)
                    {
                        int i, j, k;
                        l_328[g_266][(l_342 + 1)][(g_266 + 6)] = (void*)0;
                        return p_54;



                    }
                }
            }
            for (g_12 = 2; (g_12 >= 0); g_12 -= 1)
            {
                l_354 = (*p_54);
                for (l_342 = 0; (l_342 <= 2); l_342 += 1)
                {
                    int ***l_355 = &g_82;
                    (*l_355) = (void*)0;

                    ;
                }
            }
            for (l_354 = 1; (l_354 >= 0); l_354 -= 1)
            {
                unsigned char l_358 = 0x2AL;
                char l_375 = 0x82L;
                if ((*g_234))
                    break;
                if (l_354)
                    break;
                l_376 = (((((((safe_sub_func_int32_t_s_s(l_358, (safe_rshift_func_uint16_t_u_s((safe_lshift_func_int16_t_s_u((g_28 > func_15((*l_306))), (safe_add_func_uint16_t_u_u((safe_unary_minus_func_uint64_t_u((((l_366 != (void*)0) & (*l_306)) || (safe_mod_func_uint32_t_u_u((safe_div_func_int64_t_s_s((safe_rshift_func_int16_t_s_s((0x1DC8L >= ((l_373 == l_374) != 0x636EL)), l_375)), l_358)), (-1L)))))), l_358)))), 3)))) >= 0x7A68L) || 0x01B43F70L) < (*l_306)) | g_85) & (*l_306)) ^ g_130[0][4][1]);
                for (l_376 = 0; (l_376 <= 1); l_376 += 1)
                {
                    int l_387 = 0x98859DBFL;
                    int i, j, k;
                    for (g_266 = 0; g_266 < 4; g_266 += 1)
                    {
                        for (l_375 = 0; l_375 < 8; l_375 += 1)
                        {
                            for (g_265 = 0; g_265 < 8; g_265 += 1)
                            {
                                l_328[g_266][l_375][g_265] = (void*)0;
                            }
                        }
                    }
                    if (g_263[l_272][l_376][(l_376 + 1)])
                        continue;
                    if ((0x51BFL ^ ((&g_263[(l_376 + 1)][(l_354 + 1)][(l_272 + 1)] != p_54) > (safe_rshift_func_uint16_t_u_s(0x4701L, ((safe_mod_func_int32_t_s_s((safe_lshift_func_uint8_t_u_u(1UL, (g_263[l_272][l_376][(l_376 + 1)] < ((func_15(g_261) >= (safe_sub_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s(l_375, 4)), l_387))) <= 0xD1L)))), l_375)) == g_12))))))
                    {
                        int i, j, k;
                        g_263[(l_354 + 2)][(l_376 + 1)][(l_354 + 1)] = (safe_rshift_func_int8_t_s_u((safe_mod_func_int16_t_s_s(l_392[0], (safe_rshift_func_int8_t_s_s((func_15(l_395[1]) ^ l_395[1]), 0)))), func_15((g_259 <= l_375))));
                        g_263[(l_376 + 1)][(l_354 + 1)][(l_272 + 1)] = 1L;
                        (*g_396) = &l_376;

                        ;
                    }
                    else
                    {
                        unsigned char l_397 = 255UL;
                        l_398[0][1][6] = ((l_397 >= (((&g_188 == &l_373) > g_259) & (g_130[1][3][4] & g_12))) || (g_262 ^ g_265));
                    }


                    return p_54;



                }
            }
            for (g_261 = 2; (g_261 >= 0); g_261 -= 1)
            {
                unsigned l_399 = 4294967295UL;
                for (g_85 = 0; (g_85 <= 2); g_85 += 1)
                {
                    int i, j, k;
                    return p_54;



                }
                l_399 = (0xCAF806E90A49770BLL | (*l_306));
                for (g_12 = 1; (g_12 >= 0); g_12 -= 1)
                {
                    l_400 = &p_54;

                    ;
                }
            }

            ;
            for (g_261 = 0; (g_261 <= 1); g_261 += 1)
            {
                p_54 = (*l_400);


                (*l_400) = (*g_329);



                l_401 = func_15(func_15((*l_306)));
                return l_402;



            }
        }
    }
    else
    {
        int l_405[6];
        const union U0 *l_427[5] = {&g_189, &g_189, &g_189, &g_189, &g_189};
        int **l_504 = &l_306;
        const unsigned short l_543[5][2][5] = {{{0UL, 0x3C16L, 0xE002L, 0xE002L, 0x3C16L}, {0UL, 0x3C16L, 0xE002L, 0xE002L, 0x3C16L}}, {{0UL, 0x3C16L, 0xE002L, 0xE002L, 0x3C16L}, {0UL, 0x3C16L, 0xE002L, 0xE002L, 0x3C16L}}, {{0UL, 0x3C16L, 0xE002L, 0xE002L, 0x3C16L}, {0UL, 0x3C16L, 0xE002L, 0xE002L, 0x3C16L}}, {{0UL, 0x3C16L, 0xE002L, 0xE002L, 0x3C16L}, {0UL, 0x3C16L, 0xE002L, 0xE002L, 0x3C16L}}, {{0UL, 0x3C16L, 0xE002L, 0xE002L, 0x3C16L}, {0UL, 0x3C16L, 0xE002L, 0xE002L, 0x3C16L}}};
        int i, j, k;
        for (i = 0; i < 6; i++)
            l_405[i] = 8L;
        if ((safe_rshift_func_uint16_t_u_s(l_405[2], l_406)))
        {
            const int *l_407 = &l_405[5];
            int l_424 = 0xA3469A72L;
            union U0 *l_448[4];
            int **l_489 = &g_83;
            int i;
            for (i = 0; i < 4; i++)
                l_448[i] = &g_189;
            if ((p_54 == l_407))
            {
                char l_421 = 8L;
                const int *l_423 = &g_266;
                union U0 *l_445 = &g_189;
                if ((l_405[2] & func_15((safe_sub_func_int32_t_s_s((safe_div_func_int32_t_s_s((safe_sub_func_uint8_t_u_u((safe_mod_func_int8_t_s_s(0x5AL, ((l_405[3] < ((&g_283[3] == l_418) & ((safe_lshift_func_uint8_t_u_u(l_421, (((g_422 | func_15(l_421)) & 1L) ^ 0x74EF8BDCD6B1DEE5LL))) == g_263[4][2][0]))) || (*p_54)))), l_405[2])), 0x5DACC439L)), l_421)))))
                {
                    l_424 = (l_423 != (void*)0);
                }
                else
                {
                    unsigned short l_433 = 65534UL;
                    int *l_442[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_442[i] = (void*)0;
                    for (g_85 = 15; (g_85 != 1); g_85--)
                    {
                        char l_430[8][8] = {{0xB2L, (-9L), 0xFCL, (-9L), 0xB2L, (-9L), 0xFCL, (-9L)}, {0xB2L, (-9L), 0xFCL, (-9L), 0xB2L, (-9L), 0xFCL, (-9L)}, {0xB2L, (-9L), 0xFCL, (-9L), 0xB2L, (-9L), 0xFCL, (-9L)}, {0xB2L, (-9L), 0xFCL, (-9L), 0xB2L, (-9L), 0xFCL, (-9L)}, {0xB2L, (-9L), 0xFCL, (-9L), 0xB2L, (-9L), 0xFCL, (-9L)}, {0xB2L, (-9L), 0xFCL, (-9L), 0xB2L, (-9L), 0xFCL, (-9L)}, {0xB2L, (-9L), 0xFCL, (-9L), 0xB2L, (-9L), 0xFCL, (-9L)}, {0xB2L, (-9L), 0xFCL, (-9L), 0xB2L, (-9L), 0xFCL, (-9L)}};
                        int i, j;
                        (*g_270) = (*g_329);
                        l_405[2] = (((void*)0 != l_427[1]) >= (safe_sub_func_uint64_t_u_u(((l_405[2] > 0L) < (func_15(g_266) < l_430[3][4])), (safe_mod_func_int8_t_s_s((~((*l_423) & (*l_407))), l_433)))));
                    }
                    l_376 = (func_15((safe_mod_func_uint8_t_u_u(g_12, (safe_add_func_uint8_t_u_u((safe_add_func_uint64_t_u_u(l_433, (&p_54 == &p_54))), l_433))))) & (safe_lshift_func_uint16_t_u_u(g_130[8][2][0], 4)));
                    l_424 = ((void*)0 == &g_283[2]);
                }
                for (g_85 = 0; (g_85 != (-25)); g_85 = safe_sub_func_int8_t_s_s(g_85, 7))
                {
                    union U0 **l_447[2];
                    int l_449 = 0x75516BE7L;
                    long long l_450 = 0x367D935B7661AF54LL;
                    int i;
                    for (i = 0; i < 2; i++)
                        l_447[i] = &l_445;
                    l_448[0] = l_445;
                    l_450 = l_449;
                    (*g_258) = &l_449;

                    ;
                    if ((*l_423))
                        continue;

                }


                p_54 = (void*)0;

                ;
            }
            else
            {
                union U0 *l_452[4][5] = {{&g_189, &g_189, &g_189, (void*)0, (void*)0}, {&g_189, &g_189, &g_189, (void*)0, (void*)0}, {&g_189, &g_189, &g_189, (void*)0, (void*)0}, {&g_189, &g_189, &g_189, (void*)0, (void*)0}};
                int l_463[3][8];
                int i, j;
                for (i = 0; i < 3; i++)
                {
                    for (j = 0; j < 8; j++)
                        l_463[i][j] = 0xBA498BDAL;
                }
                if ((((g_85 >= (safe_unary_minus_func_int64_t_s(((void*)0 == l_452[1][4])))) >= (*l_306)) ^ (safe_lshift_func_uint8_t_u_s(func_15(((safe_sub_func_uint8_t_u_u(0xC8L, (safe_div_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u(g_130[5][3][1], ((safe_sub_func_uint8_t_u_u(func_15((g_85 == (l_463[1][0] <= (func_15((l_405[2] < 0xD0L)) == (*p_54))))), (*l_407))) ^ g_260))), 0xB683L)))) != g_85)), 1))))
                {
                    union U0 *l_464 = &g_189;
                    union U0 **l_466 = &l_452[1][4];
                    l_464 = (void*)0;

                    ;
                    (*l_466) = l_448[2];
                }
                else
                {
                    char l_474 = 0L;
                    int *l_479 = &g_85;
                    (*g_467) = (l_373 == (void*)0);
                    for (l_406 = 0; (l_406 < 18); ++l_406)
                    {
                        unsigned long long l_472 = 7UL;
                        l_473 = ((safe_lshift_func_uint8_t_u_s(l_405[1], g_262)) >= (func_15(l_405[2]) == (func_15(l_472) < 0xD3L)));
                        p_54 = (*g_396);
                    }


                    return p_54;


                }
            }



            if ((((void*)0 != &g_396) || g_189.f0))
            {
                int l_490 = (-1L);
                p_54 = p_54;
                if ((g_261 > ((p_54 == (void*)0) ^ g_265)))
                {
                    for (g_261 = 0; (g_261 <= 0); g_261 += 1)
                    {
                        return p_54;


                    }
                }
                else
                {
                    l_490 = ((!(safe_sub_func_uint64_t_u_u(func_15(g_189.f0), (g_488 ^ (&p_54 != l_489))))) <= (g_12 != 65535UL));
                }
                return p_54;


            }
            else
            {
                int *l_491 = (void*)0;
                int l_502 = 0xD4A69015L;
                (*l_489) = l_491;

                ;
                (*l_489) = l_491;
                l_502 = 0x97E5E5FEL;
                l_424 = (*g_228);
            }

            ;
        }
        else
        {
            l_376 = (*p_54);
        }


        (*l_504) = p_54;


        if ((g_28 != ((((((safe_sub_func_uint32_t_u_u(l_405[2], l_405[2])) || (((*l_503) || (&p_54 != (void*)0)) >= (((+(g_260 | l_507)) ^ (safe_add_func_int16_t_s_s((l_510 ^ g_422), 65535UL))) && (*l_503)))) ^ g_28) < 8UL) >= 0xB9L) > g_28)))
        {
            short l_513 = (-1L);
            union U0 *l_514 = (void*)0;
            int *l_531 = &g_261;
            (*l_503) = (safe_lshift_func_int16_t_s_u(((g_261 <= (g_85 <= (g_259 || (l_513 <= g_189.f0)))) | ((((func_15(((g_266 && (((l_514 != (void*)0) < 7UL) ^ g_130[3][1][3])) || 246UL)) || l_513) ^ l_513) != l_513) >= (*l_503))), 11));
            for (g_261 = 0; (g_261 != 25); g_261 = safe_add_func_int16_t_s_s(g_261, 5))
            {
                long long l_517 = 0x880438FF366F8B33LL;
                int **l_522 = &l_503;
                union U0 *l_532 = (void*)0;
            }
            for (g_85 = 0; (g_85 <= 4); g_85 += 1)
            {
                union U0 *l_537 = &g_538[8];
                int l_544 = 0L;
                int i;
                (*l_504) = (*g_284);


                if ((safe_add_func_int16_t_s_s((((&g_27 != (void*)0) & g_262) < g_12), ((l_537 == l_514) && (!(-10L))))))
                {
                    int *l_539[6];
                    int i;
                    for (i = 0; i < 6; i++)
                        l_539[i] = &g_265;
                    l_539[1] = p_54;


                    (*l_504) = l_539[1];


                }
                else
                {
                    char l_540 = 0L;
                    (*l_504) = l_531;

                    ;
                    if (l_540)
                        break;
                    p_54 = p_54;
                }


                (*l_503) = ((((safe_add_func_int16_t_s_s((*l_531), (func_15(g_343) ^ (g_261 >= ((-8L) && (~0x8121743CL)))))) && l_543[0][0][1]) == ((((l_544 > (~2L)) & 1UL) > l_544) || g_488)) & (*l_531));
                for (l_544 = 0; (l_544 <= 4); l_544 += 1)
                {
                    (*g_270) = (void*)0;

                    ;
                    (*l_504) = p_54;


                    for (g_266 = 4; (g_266 >= 0); g_266 -= 1)
                    {
                        int i, j, k;
                        (*l_504) = &g_130[(l_544 + 1)][g_266][l_544];

                        ;
                        g_130[g_266][g_266][l_544] = g_130[(g_266 + 2)][g_266][g_85];
                    }


                }


            }


        }
        else
        {
            char l_545 = 0x26L;
            (*l_504) = p_54;
        }


    }




    return p_54;


}







static int * func_55(int * p_56, unsigned char p_57, unsigned long long p_58)
{
    short l_98 = (-10L);
    int ***l_116 = &g_82;
    int l_252 = 0x322B6666L;
    for (p_57 = (-27); (p_57 > 1); p_57++)
    {
        const int l_74 = 0xEF04E4CAL;
        int *l_84 = &g_85;
        int *** const l_129 = &g_82;
        int l_185[7][1][7] = {{{(-9L), (-9L), 0x8B7E62A8L, (-9L), (-9L), 0x8B7E62A8L, (-9L)}}, {{(-9L), (-9L), 0x8B7E62A8L, (-9L), (-9L), 0x8B7E62A8L, (-9L)}}, {{(-9L), (-9L), 0x8B7E62A8L, (-9L), (-9L), 0x8B7E62A8L, (-9L)}}, {{(-9L), (-9L), 0x8B7E62A8L, (-9L), (-9L), 0x8B7E62A8L, (-9L)}}, {{(-9L), (-9L), 0x8B7E62A8L, (-9L), (-9L), 0x8B7E62A8L, (-9L)}}, {{(-9L), (-9L), 0x8B7E62A8L, (-9L), (-9L), 0x8B7E62A8L, (-9L)}}, {{(-9L), (-9L), 0x8B7E62A8L, (-9L), (-9L), 0x8B7E62A8L, (-9L)}}};
        int i, j, k;
        for (p_58 = 0; (p_58 > 55); ++p_58)
        {
            const unsigned long long l_64 = 0xEE08A9CBEBA43638LL;
            int *l_78 = &g_28;
            int ** const l_77[2][10][4] = {{{&l_78, &l_78, &l_78, &l_78}, {&l_78, &l_78, &l_78, &l_78}, {&l_78, &l_78, &l_78, &l_78}, {&l_78, &l_78, &l_78, &l_78}, {&l_78, &l_78, &l_78, &l_78}, {&l_78, &l_78, &l_78, &l_78}, {&l_78, &l_78, &l_78, &l_78}, {&l_78, &l_78, &l_78, &l_78}, {&l_78, &l_78, &l_78, &l_78}, {&l_78, &l_78, &l_78, &l_78}}, {{&l_78, &l_78, &l_78, &l_78}, {&l_78, &l_78, &l_78, &l_78}, {&l_78, &l_78, &l_78, &l_78}, {&l_78, &l_78, &l_78, &l_78}, {&l_78, &l_78, &l_78, &l_78}, {&l_78, &l_78, &l_78, &l_78}, {&l_78, &l_78, &l_78, &l_78}, {&l_78, &l_78, &l_78, &l_78}, {&l_78, &l_78, &l_78, &l_78}, {&l_78, &l_78, &l_78, &l_78}}};
            int *l_119 = &g_85;
            unsigned short l_167 = 2UL;
            int * const l_180 = (void*)0;
            int i, j, k;
        }
    }
    for (g_12 = 0; (g_12 <= (-7)); --g_12)
    {
        unsigned short l_209 = 65534UL;
        union U0 *l_231[8] = {&g_189, (void*)0, &g_189, (void*)0, &g_189, (void*)0, &g_189, (void*)0};
        int ***l_256 = &g_82;
        int i;
        for (l_98 = 3; (l_98 <= (-30)); l_98 = safe_sub_func_int16_t_s_s(l_98, 2))
        {
            unsigned short l_227 = 0x79F0L;
            union U0 * const *l_248 = (void*)0;
            int *l_255 = &g_85;
            for (p_58 = 1; (p_58 == 53); p_58++)
            {
                int *l_254 = &g_130[6][2][2];
                if ((*p_56))
                {
                    unsigned long long l_208[3][3][6] = {{{0x66A66F2389C7B444LL, 1UL, 0x66A66F2389C7B444LL, 0x9E0C7EA7626E11B9LL, 0UL, 0xE1782E8E32242569LL}, {0x66A66F2389C7B444LL, 1UL, 0x66A66F2389C7B444LL, 0x9E0C7EA7626E11B9LL, 0UL, 0xE1782E8E32242569LL}, {0x66A66F2389C7B444LL, 1UL, 0x66A66F2389C7B444LL, 0x9E0C7EA7626E11B9LL, 0UL, 0xE1782E8E32242569LL}}, {{0x66A66F2389C7B444LL, 1UL, 0x66A66F2389C7B444LL, 0x9E0C7EA7626E11B9LL, 0UL, 0xE1782E8E32242569LL}, {0x66A66F2389C7B444LL, 1UL, 0x66A66F2389C7B444LL, 0x9E0C7EA7626E11B9LL, 0UL, 0xE1782E8E32242569LL}, {0x66A66F2389C7B444LL, 1UL, 0x66A66F2389C7B444LL, 0x9E0C7EA7626E11B9LL, 0UL, 0xE1782E8E32242569LL}}, {{0x66A66F2389C7B444LL, 1UL, 0x66A66F2389C7B444LL, 0x9E0C7EA7626E11B9LL, 0UL, 0xE1782E8E32242569LL}, {0x66A66F2389C7B444LL, 1UL, 0x66A66F2389C7B444LL, 0x9E0C7EA7626E11B9LL, 0UL, 0xE1782E8E32242569LL}, {0x66A66F2389C7B444LL, 1UL, 0x66A66F2389C7B444LL, 0x9E0C7EA7626E11B9LL, 0UL, 0xE1782E8E32242569LL}}};
                    int *l_253 = &g_85;
                    int i, j, k;
                    if ((*g_83))
                    {
                        int *l_210 = &g_130[4][2][3];
                        (*l_210) = (((((safe_mod_func_uint64_t_u_u((safe_unary_minus_func_uint16_t_u((safe_rshift_func_int8_t_s_s(g_130[0][4][0], ((l_208[0][1][3] ^ ((-7L) && p_57)) | (p_58 & (((*g_81) == (void*)0) | g_28))))))), func_15(g_12))) | l_209) || p_57) >= p_58) == p_57);
                        (*g_82) = (**g_81);
                        (**l_116) = (*g_82);
                    }
                    else
                    {
                        const long long l_226 = (-1L);
                        (*g_211) = func_15(p_58);
                        l_227 = func_15((safe_rshift_func_int8_t_s_s((safe_add_func_uint16_t_u_u(((safe_sub_func_int32_t_s_s((safe_mod_func_int8_t_s_s(p_57, p_57)), (+(safe_rshift_func_int8_t_s_u((safe_mod_func_int16_t_s_s(1L, 0x9D17L)), (&g_188 == (void*)0)))))) <= p_57), ((((((safe_lshift_func_int8_t_s_s(func_15((1UL <= 0x80L)), 7)) & p_57) <= l_226) <= 0x6ACC421F7912FA8CLL) != 0xACE5422AL) >= (***l_116)))), 0)));
                        (*l_116) = &p_56;

                        ;
                        (*g_82) = (*g_82);
                    }
                    (*g_228) = (*p_56);
                    if ((safe_lshift_func_int8_t_s_u(p_57, ((void*)0 != &g_188))))
                    {
                        union U0 *l_232 = &g_189;
                        l_232 = l_231[4];

                        ;
                        (*g_234) = (0x7113E70040E6F50DLL | (g_189.f0 | 8UL));
                    }
                    else
                    {
                        int *l_251 = &g_130[8][0][1];
                        (*l_251) = (safe_mod_func_uint32_t_u_u((safe_unary_minus_func_int16_t_s((p_57 != (safe_div_func_int8_t_s_s((safe_sub_func_int8_t_s_s(func_15((safe_sub_func_int8_t_s_s((safe_mod_func_int64_t_s_s((safe_lshift_func_int16_t_s_u((l_248 == &g_188), 4)), ((+(((void*)0 != (*g_82)) ^ p_58)) ^ (!(safe_div_func_uint16_t_u_u((***l_116), g_12)))))), 6L))), 0xBAL)), g_189.f0))))), (*p_56)));
                        l_252 = (*g_27);
                        (*g_82) = l_253;
                        (**l_116) = (**g_81);
                    }
                }
                else
                {
                    for (g_85 = 0; g_85 < 9; g_85 += 1)
                    {
                        for (g_189.f0 = 0; g_189.f0 < 5; g_189.f0 += 1)
                        {
                            for (l_252 = 0; l_252 < 5; l_252 += 1)
                            {
                                g_130[g_85][g_189.f0][l_252] = 0xE27E5E99L;
                            }
                        }
                    }
                    (**l_116) = p_56;
                    if ((*g_27))
                        continue;
                }
                (*l_254) = 0xEB93942DL;
                if ((*l_254))
                    break;
            }

            ;
            ;
            ;
            (**l_116) = (*g_82);
            return l_255;



        }
        (*g_234) = (l_256 != l_116);
    }
    return (**g_81);


}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_12, "g_12", print_hash_value);
    transparent_crc(g_28, "g_28", print_hash_value);
    transparent_crc(g_85, "g_85", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_130[i][j][k], "g_130[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_189.f0, "g_189.f0", print_hash_value);
    transparent_crc(g_259, "g_259", print_hash_value);
    transparent_crc(g_260, "g_260", print_hash_value);
    transparent_crc(g_261, "g_261", print_hash_value);
    transparent_crc(g_262, "g_262", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_263[i][j][k], "g_263[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_264, "g_264", print_hash_value);
    transparent_crc(g_265, "g_265", print_hash_value);
    transparent_crc(g_266, "g_266", print_hash_value);
    transparent_crc(g_343, "g_343", print_hash_value);
    transparent_crc(g_422, "g_422", print_hash_value);
    transparent_crc(g_488, "g_488", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_538[i].f0, "g_538[i].f0", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_609, "g_609", print_hash_value);
    transparent_crc(g_868.f0, "g_868.f0", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 9; k++)
            {
                transparent_crc(g_880[i][j][k].f0, "g_880[i][j][k].f0", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
