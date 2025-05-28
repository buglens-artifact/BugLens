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



static char g_7[10][10][2] = {{{(-9L),0x87L},{0x95L,0L},{0x95L,0x87L},{(-9L),0x95L},{0x87L,0L},{0x5FL,0x5FL},{(-9L),0x5FL},{0x5FL,0L},{0x87L,0x95L},{(-9L),0x87L}},{{0x95L,0L},{0x95L,0x87L},{(-9L),0x95L},{0x87L,0L},{0x5FL,0x5FL},{(-9L),0x5FL},{0x5FL,0L},{0x87L,0x95L},{(-9L),0x87L},{0x95L,0L}},{{0x95L,0x87L},{(-9L),0x95L},{0x87L,0L},{0L,0L},{(-1L),0L},{0L,0x36L},{1L,(-9L)},{(-1L),1L},{(-9L),0x36L},{(-9L),1L}},{{(-1L),(-9L)},{1L,0x36L},{0L,0L},{(-1L),0L},{0L,0x36L},{1L,(-9L)},{(-1L),1L},{(-9L),0x36L},{(-9L),1L},{(-1L),(-9L)}},{{1L,0x36L},{0L,0L},{(-1L),0L},{0L,0x36L},{1L,(-9L)},{(-1L),1L},{(-9L),0x36L},{(-9L),1L},{(-1L),(-9L)},{1L,0x36L}},{{0L,0L},{(-1L),0L},{0L,0x36L},{1L,(-9L)},{(-1L),1L},{(-9L),0x36L},{(-9L),1L},{(-1L),(-9L)},{1L,0x36L},{0L,0L}},{{(-1L),0L},{0L,0x36L},{1L,(-9L)},{(-1L),1L},{(-9L),0x36L},{(-9L),1L},{(-1L),(-9L)},{1L,0x36L},{0L,0L},{(-1L),0L}},{{0L,(-1L)},{0L,1L},{0xF4L,0L},{1L,(-1L)},{1L,0L},{0xF4L,1L},{0L,(-1L)},{(-9L),(-9L)},{0xF4L,(-9L)},{(-9L),(-1L)}},{{0L,1L},{0xF4L,0L},{1L,(-1L)},{1L,0L},{0xF4L,1L},{0L,(-1L)},{(-9L),(-9L)},{0xF4L,(-9L)},{(-9L),(-1L)},{0L,1L}},{{0xF4L,0L},{1L,(-1L)},{1L,0L},{0xF4L,1L},{0L,(-1L)},{(-9L),(-9L)},{0xF4L,(-9L)},{(-9L),(-1L)},{0L,1L},{0xF4L,0L}}};
static short g_11 = 0x817DL;
static short g_15 = (-7L);
static short *g_14 = &g_15;
static int g_22 = 0xF49DCB7BL;
static int g_42 = 0x77F45A32L;
static int g_82 = 0x7FAEFF9BL;
static unsigned short g_90 = 0UL;
static unsigned char g_93 = 0UL;
static int g_95[4][5][6] = {{{(-10L),0x7B07E043L,(-4L),0x24405C6DL,0x7B07E043L,0xE977603CL},{0xC77BB9FEL,0xE977603CL,(-4L),(-10L),0xC797A355L,0xC797A355L},{0x2ED11754L,0xE977603CL,0xE977603CL,0x2ED11754L,0x7B07E043L,1L},{0x2ED11754L,0x7B07E043L,1L,(-10L),0xE977603CL,1L},{0xC77BB9FEL,0xC797A355L,0xE977603CL,0x24405C6DL,0xE977603CL,0xC797A355L}},{{(-10L),0x7B07E043L,(-4L),0x24405C6DL,0x7B07E043L,0xE977603CL},{0xC77BB9FEL,0xB4391DAAL,0x7236CF92L,0xC797A355L,0xA21EB82DL,0xA21EB82DL},{0xE977603CL,0xB4391DAAL,0xB4391DAAL,0xE977603CL,9L,0L},{0xE977603CL,9L,0L,0xC797A355L,0xB4391DAAL,0L},{0x7B07E043L,0xA21EB82DL,0xB4391DAAL,1L,0xB4391DAAL,0xA21EB82DL}},{{0xC797A355L,9L,0x7236CF92L,1L,9L,0xB4391DAAL},{0x7B07E043L,0xB4391DAAL,0x7236CF92L,0xC797A355L,0xA21EB82DL,0xA21EB82DL},{0xE977603CL,0xB4391DAAL,0xB4391DAAL,0xE977603CL,9L,0L},{0xE977603CL,9L,0L,0xC797A355L,0xB4391DAAL,0L},{0x7B07E043L,0xA21EB82DL,0xB4391DAAL,1L,0xB4391DAAL,0xA21EB82DL}},{{0xC797A355L,9L,0x7236CF92L,1L,9L,0xB4391DAAL},{0x7B07E043L,0xB4391DAAL,0x7236CF92L,0xC797A355L,0xA21EB82DL,0xA21EB82DL},{0xE977603CL,0xB4391DAAL,0xB4391DAAL,0xE977603CL,9L,0L},{0xE977603CL,9L,0L,0xC797A355L,0xB4391DAAL,0L},{0x7B07E043L,0xA21EB82DL,0xB4391DAAL,1L,0xB4391DAAL,0xA21EB82DL}}};
static int *g_98 = &g_82;
static int g_111 = (-4L);
static short g_116 = (-1L);
static short g_124 = 0x95DBL;
static unsigned g_133[9][7][4] = {{{18446744073709551612UL,0xBE38E84DL,0xFA0937D7L,0xFA0937D7L},{0x91ED130EL,0x91ED130EL,0xFA0937D7L,0x609C17E6L},{18446744073709551612UL,1UL,0UL,0xBE38E84DL},{0xBE38E84DL,1UL,0x91ED130EL,1UL},{0x91ED130EL,1UL,0xBE38E84DL,6UL},{1UL,0x609C17E6L,0xFA0937D7L,0x91ED130EL},{0UL,0xFDE10119L,0xFDE10119L,0UL}},{{0UL,6UL,0xFA0937D7L,18446744073709551612UL},{1UL,0UL,0xBE38E84DL,0x340CD4C6L},{0x91ED130EL,18446744073709551615UL,0x91ED130EL,0x340CD4C6L},{0xBE38E84DL,0UL,1UL,18446744073709551612UL},{0xFA0937D7L,6UL,0UL,0UL},{0xFDE10119L,0xFDE10119L,0UL,0x91ED130EL},{0xFA0937D7L,0x609C17E6L,1UL,6UL}},{{0xBE38E84DL,1UL,0x91ED130EL,1UL},{0x91ED130EL,1UL,0xBE38E84DL,6UL},{1UL,0x609C17E6L,0xFA0937D7L,0x91ED130EL},{0UL,0xFDE10119L,0xFDE10119L,0UL},{0UL,6UL,0xFA0937D7L,18446744073709551612UL},{1UL,0UL,0xBE38E84DL,0x340CD4C6L},{0x91ED130EL,18446744073709551615UL,0x91ED130EL,0x340CD4C6L}},{{0xBE38E84DL,0UL,1UL,18446744073709551612UL},{0xFA0937D7L,6UL,0UL,0UL},{0xFDE10119L,0xFDE10119L,0UL,0x91ED130EL},{0xFA0937D7L,0x609C17E6L,1UL,6UL},{0xBE38E84DL,1UL,0x91ED130EL,1UL},{0x91ED130EL,1UL,0xBE38E84DL,0xFA0937D7L},{0xFDE10119L,18446744073709551615UL,0x609C17E6L,0xBE38E84DL}},{{0x91ED130EL,6UL,6UL,0x91ED130EL},{0x91ED130EL,0xFA0937D7L,0x609C17E6L,1UL},{0xFDE10119L,0x91ED130EL,18446744073709551612UL,0UL},{0xBE38E84DL,0x340CD4C6L,0xBE38E84DL,0UL},{18446744073709551612UL,0x91ED130EL,0xFDE10119L,1UL},{0x609C17E6L,0xFA0937D7L,0x91ED130EL,0x91ED130EL},{6UL,6UL,0x91ED130EL,0xBE38E84DL}},{{0x609C17E6L,18446744073709551615UL,0xFDE10119L,0xFA0937D7L},{18446744073709551612UL,0xFDE10119L,0xBE38E84DL,0xFDE10119L},{0xBE38E84DL,0xFDE10119L,18446744073709551612UL,0xFA0937D7L},{0xFDE10119L,18446744073709551615UL,0x609C17E6L,0xBE38E84DL},{0x91ED130EL,6UL,6UL,0x91ED130EL},{0x91ED130EL,0xFA0937D7L,0x609C17E6L,1UL},{0xFDE10119L,0x91ED130EL,18446744073709551612UL,0UL}},{{0xBE38E84DL,0x340CD4C6L,0xBE38E84DL,0UL},{18446744073709551612UL,0x91ED130EL,0xFDE10119L,1UL},{0x609C17E6L,0xFA0937D7L,0x91ED130EL,0x91ED130EL},{6UL,6UL,0x91ED130EL,0xBE38E84DL},{0x609C17E6L,18446744073709551615UL,0xFDE10119L,0xFA0937D7L},{18446744073709551612UL,0xFDE10119L,0xBE38E84DL,0xFDE10119L},{0xBE38E84DL,0xFDE10119L,18446744073709551612UL,0xFA0937D7L}},{{0xFDE10119L,18446744073709551615UL,0x609C17E6L,0xBE38E84DL},{0x91ED130EL,6UL,6UL,0xFDE10119L},{0xFDE10119L,0UL,0x91ED130EL,0x609C17E6L},{18446744073709551615UL,0xFDE10119L,0xFA0937D7L,1UL},{6UL,18446744073709551612UL,6UL,1UL},{0xFA0937D7L,0xFDE10119L,18446744073709551615UL,0x609C17E6L},{0x91ED130EL,0UL,0xFDE10119L,0xFDE10119L}},{{0x340CD4C6L,0x340CD4C6L,0xFDE10119L,6UL},{0x91ED130EL,0xBE38E84DL,18446744073709551615UL,0UL},{0xFA0937D7L,18446744073709551615UL,6UL,18446744073709551615UL},{6UL,18446744073709551615UL,0xFA0937D7L,0UL},{18446744073709551615UL,0xBE38E84DL,0x91ED130EL,6UL},{0xFDE10119L,0x340CD4C6L,0x340CD4C6L,0xFDE10119L},{0xFDE10119L,0UL,0x91ED130EL,0x609C17E6L}}};
static unsigned g_135 = 0UL;
static unsigned g_139 = 1UL;
static unsigned short g_160 = 0xE4FFL;
static int g_162 = 5L;
static unsigned g_175 = 0UL;
static char g_177 = 0xD5L;
static int *g_178 = &g_95[2][2][5];
static short *g_180[7] = {&g_124,&g_124,&g_124,&g_124,&g_124,&g_124,&g_124};
static char g_190 = 0x20L;
static unsigned char *g_213 = (void*)0;
static unsigned char **g_212 = &g_213;
static unsigned short g_253 = 65531UL;
static unsigned g_264[9] = {0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL};
static int **g_266 = &g_178;
static short g_272[8] = {0L,0x0D3EL,0L,0L,0x0D3EL,0L,0L,0x0D3EL};
static unsigned short g_328 = 0x94ACL;
static int g_368 = 1L;
static unsigned *g_378 = &g_175;
static unsigned **g_377 = &g_378;
static char g_418[5][2] = {{0x69L,0x69L},{0x69L,0x69L},{0x69L,0x69L},{0x69L,0x69L},{0x69L,0x69L}};
static short **g_552 = &g_180[3];
static short ***g_551 = &g_552;
static unsigned g_595 = 18446744073709551612UL;
static unsigned char g_633 = 0x09L;
static unsigned *g_661 = &g_264[0];
static unsigned **g_660 = &g_661;
static int **g_673 = &g_178;
static unsigned g_676[3][2][3] = {{{0x631107D0L,0x631107D0L,0x631107D0L},{0x19250DC0L,0x19250DC0L,0x19250DC0L}},{{0x631107D0L,0x631107D0L,0x631107D0L},{0x19250DC0L,0x19250DC0L,0x19250DC0L}},{{0x631107D0L,0x631107D0L,0x631107D0L},{0x19250DC0L,0x19250DC0L,0x19250DC0L}}};
static int g_738[8] = {(-4L),0x9E4A1216L,(-4L),(-4L),0x9E4A1216L,(-4L),(-4L),0x9E4A1216L};
static int g_743 = 0L;
static short ****g_797 = (void*)0;
static short g_879 = (-1L);
static unsigned g_897 = 4294967295UL;
static short **g_918 = &g_180[3];
static char *g_962 = (void*)0;
static char **g_961 = &g_962;
static unsigned g_1023 = 0UL;
static unsigned ***g_1103[7][5][5] = {{{&g_377,(void*)0,&g_377,&g_377,&g_377},{&g_377,&g_377,(void*)0,&g_377,&g_377},{(void*)0,&g_377,(void*)0,&g_377,&g_377},{&g_377,&g_377,&g_377,&g_377,(void*)0},{(void*)0,(void*)0,&g_377,&g_377,&g_377}},{{&g_377,&g_377,(void*)0,(void*)0,&g_377},{&g_377,&g_377,(void*)0,&g_377,&g_377},{(void*)0,&g_377,&g_377,&g_377,&g_377},{&g_377,(void*)0,(void*)0,&g_377,&g_377},{&g_377,(void*)0,&g_377,&g_377,&g_377}},{{&g_377,&g_377,&g_377,&g_377,(void*)0},{(void*)0,&g_377,&g_377,&g_377,&g_377},{&g_377,(void*)0,&g_377,&g_377,&g_377},{&g_377,(void*)0,&g_377,&g_377,&g_377},{(void*)0,&g_377,&g_377,&g_377,&g_377}},{{&g_377,&g_377,&g_377,&g_377,&g_377},{(void*)0,&g_377,&g_377,&g_377,(void*)0},{&g_377,&g_377,&g_377,&g_377,&g_377},{&g_377,(void*)0,&g_377,&g_377,(void*)0},{&g_377,&g_377,&g_377,(void*)0,&g_377}},{{(void*)0,(void*)0,(void*)0,(void*)0,&g_377},{&g_377,&g_377,(void*)0,&g_377,(void*)0},{&g_377,(void*)0,&g_377,&g_377,&g_377},{(void*)0,&g_377,&g_377,&g_377,&g_377},{&g_377,&g_377,&g_377,(void*)0,&g_377}},{{&g_377,&g_377,&g_377,(void*)0,&g_377},{&g_377,(void*)0,&g_377,&g_377,(void*)0},{&g_377,&g_377,(void*)0,&g_377,&g_377},{&g_377,&g_377,&g_377,&g_377,&g_377},{(void*)0,(void*)0,&g_377,&g_377,(void*)0}},{{&g_377,&g_377,&g_377,&g_377,&g_377},{&g_377,&g_377,(void*)0,&g_377,(void*)0},{(void*)0,&g_377,&g_377,&g_377,&g_377},{&g_377,(void*)0,&g_377,&g_377,(void*)0},{&g_377,&g_377,&g_377,&g_377,&g_377}}};
static unsigned ****g_1102 = &g_1103[2][0][0];
static unsigned g_1200 = 0xD821A375L;
static int *g_1316 = &g_111;
static int **g_1315 = &g_1316;
static int *g_1322 = &g_743;
static unsigned short g_1557 = 0x9973L;



static unsigned func_1(void);
static short func_16(short * p_17, short p_18);
static int * func_23(int * p_24, unsigned p_25, short p_26, short * p_27, int p_28);
static char func_38(int * p_39);
static int func_43(short * p_44, short * p_45, unsigned short p_46, int * p_47);
static int * func_49(int p_50, int * p_51, char p_52, short * p_53, int p_54);
static int * func_55(short p_56, short p_57, int * p_58, unsigned char p_59, int p_60);
static short * func_61(unsigned char p_62, short * p_63, short p_64, char p_65);
static unsigned func_68(char p_69);
static unsigned short func_79(short p_80);
static unsigned func_1(void)
{
    int l_2 = 0x44182BD7L;
    short *l_10 = &g_11;
    char *l_1515 = &g_177;
    unsigned char l_1523 = 255UL;
    int l_1529[5] = {(-1L),(-1L),(-1L),(-1L),(-1L)};
    int l_1530 = (-1L);
    unsigned **l_1556 = &g_661;
    int l_1558 = 8L;
    int *l_1583[10][10] = {{&g_82,&g_743,&g_738[4],&g_738[4],&g_743,&g_82,&g_738[2],(void*)0,(void*)0,&g_738[2]},{&g_82,&g_368,&g_738[2],&g_95[2][4][0],&g_743,&g_743,(void*)0,(void*)0,&g_368,&l_1530},{&g_82,&g_95[3][1][4],&l_1530,&g_82,&g_743,&g_82,&l_1530,&g_95[3][1][4],&g_82,(void*)0},{&g_82,&l_1530,&g_95[3][1][4],&g_82,(void*)0,(void*)0,&g_743,&g_738[4],&g_368,(void*)0},{&g_95[2][4][0],&g_738[2],&g_368,&g_82,&g_368,&g_82,&g_82,&g_368,&g_82,&g_368},{&g_738[4],&g_738[4],&g_743,&g_82,&g_738[2],(void*)0,(void*)0,&g_738[2],&g_368,&g_368},{&l_1530,&g_738[2],&g_743,&g_95[2][4][0],&g_82,&g_368,(void*)0,&g_82,(void*)0,&g_368},{&g_368,&g_738[4],&g_95[2][4][0],&g_738[4],&g_368,&g_743,&g_82,(void*)0,&g_738[2],&g_743},{&g_743,&g_738[2],&g_82,&l_1530,&g_95[2][4][0],&g_95[3][1][4],&g_743,&g_368,&g_743,&g_743},{&g_82,&l_1530,&l_1530,(void*)0,(void*)0,&l_1530,(void*)0,&g_738[2],&g_368,&g_95[3][1][4]}};
    int i, j;
    (*g_1322) &= ((l_2 ^ (l_2 & (l_2 , (safe_mul_func_uint16_t_u_u((safe_sub_func_int8_t_s_s(g_7[4][8][0], ((*l_1515) = (safe_mul_func_int16_t_s_s(((*l_10) ^= 0x6AE4L), ((((*g_14) = (safe_add_func_uint16_t_u_u((g_14 != (l_2 , &g_15)), func_16(&g_15, l_2)))) , l_2) > 1L)))))), l_2))))) == l_2);
    (*g_673) = (*g_266);
    for (g_42 = (-23); (g_42 >= (-13)); g_42 = safe_add_func_int8_t_s_s(g_42, 9))
    {
        short l_1520[8][2] = {{0xAB86L,0x0186L},{0L,0L},{0L,0x0186L},{0xAB86L,(-1L)},{0x0186L,(-1L)},{0xAB86L,0x0186L},{0L,0L},{0L,0x0186L}};
        int l_1528 = 8L;
        unsigned char *l_1535 = (void*)0;
        unsigned char *l_1536 = &g_93;
        char l_1580 = 0x65L;
        int i, j;
    }
    return (*g_378);
}







static short func_16(short * p_17, short p_18)
{
    int l_763 = 0x3A8575FFL;
    unsigned **l_1333[10];
    unsigned short **l_1344 = (void*)0;
    unsigned ****l_1382 = &g_1103[2][0][0];
    unsigned *****l_1390 = &l_1382;
    int *l_1413 = &g_22;
    unsigned char **l_1419[3][5] = {{&g_213,&g_213,&g_213,&g_213,&g_213},{&g_213,&g_213,&g_213,&g_213,&g_213},{&g_213,&g_213,&g_213,&g_213,&g_213}};
    unsigned **l_1513 = &g_661;
    int i, j;
    for (i = 0; i < 10; i++)
        l_1333[i] = &g_661;
    return (*l_1413);
}







static int * func_23(int * p_24, unsigned p_25, short p_26, short * p_27, int p_28)
{
    short l_770[3][9] = {{1L,1L,1L,1L,1L,1L,1L,1L,1L},{(-10L),(-10L),(-10L),(-10L),(-10L),(-10L),(-10L),(-10L),(-10L)},{1L,1L,1L,1L,1L,1L,1L,1L,1L}};
    int *l_780[4][9] = {{&g_111,&g_162,&g_162,&g_162,&g_162,&g_162,&g_111,&g_111,&g_162},{&g_162,&g_162,&g_162,&g_162,&g_162,&g_162,&g_162,&g_162,&g_162},{&g_111,&g_162,&g_111,&g_162,&g_162,&g_162,&g_162,&g_111,&g_162},{&g_162,&g_111,&g_162,&g_162,&g_162,&g_162,&g_162,&g_162,&g_162}};
    int *l_783 = (void*)0;
    short *l_784 = (void*)0;
    unsigned char ***l_787 = &g_212;
    char *l_858[1];
    char **l_857 = &l_858[0];
    int l_940 = 0L;
    char l_1002[8][1] = {{8L},{0x2AL},{8L},{0x2AL},{8L},{0x2AL},{8L},{0x2AL}};
    int *l_1031 = &g_95[0][3][1];
    short *l_1054 = (void*)0;
    unsigned short *l_1077 = &g_253;
    int l_1096 = 0x3E496422L;
    int l_1112[7][8][4] = {{{4L,0xD986D487L,0xF4B8F2EEL,0xAB751097L},{(-8L),(-1L),0x9E142E7CL,0xF4B8F2EEL},{(-1L),0xD6944B59L,0xD6944B59L,(-1L)},{0x2036F5D4L,0x3A7FB635L,0x298005CCL,0x6BD1A7C6L},{0xD6944B59L,0L,(-1L),0xE1402334L},{0xD986D487L,4L,0x508BAF85L,0xE1402334L},{(-8L),0L,8L,0x6BD1A7C6L},{0x786A42F2L,0x3A7FB635L,0xF4B8F2EEL,(-1L)}},{{0xC2D8295CL,0xD6944B59L,0xE1402334L,0xF4B8F2EEL},{0x3A7FB635L,(-1L),(-1L),0xAB751097L},{0x2036F5D4L,0xD986D487L,0xCAB1E21CL,0x9F6F417DL},{0xEF2D51B0L,0L,0xEF2D51B0L,0x508BAF85L},{(-1L),0x6BD1A7C6L,0x508BAF85L,0x9E142E7CL},{0xC2D8295CL,0xCAB1E21CL,0x2F6C4736L,0x6BD1A7C6L},{0x6BD1A7C6L,(-6L),0x2F6C4736L,0xAB751097L},{0xC2D8295CL,0x2036F5D4L,0x508BAF85L,0x2F6C4736L}},{{(-1L),(-1L),0xEF2D51B0L,0x3A7FB635L},{0xEF2D51B0L,0x3A7FB635L,0xCAB1E21CL,0x786A42F2L},{0x2036F5D4L,0xCAB1E21CL,(-1L),0x508BAF85L},{0x3A7FB635L,0x19FE7C27L,0xE1402334L,0xE1402334L},{0xC2D8295CL,8L,0xE1402334L,0x2036F5D4L},{(-1L),(-1L),(-1L),1L},{0L,0xAB751097L,0x9F6F417DL,(-1L)},{0xD80B5798L,0xAB751097L,0xD986D487L,1L}},{{0xAB751097L,(-1L),0x48945118L,0x2036F5D4L},{(-1L),8L,0xAB751097L,4L},{0xF65F61F1L,0xD6944B59L,0x19FE7C27L,0x9F6F417DL},{0L,0x2F6C4736L,0xE1402334L,(-1L)},{0xEF2D51B0L,1L,(-1L),1L},{0x2F6C4736L,0x3A7FB635L,4L,(-1L)},{0xD80B5798L,(-1L),0xAB751097L,0x57EECBCDL},{(-6L),(-1L),0L,(-1L)}},{{(-6L),0x2F6C4736L,0xAB751097L,0x19FE7C27L},{0xD80B5798L,(-1L),4L,0x9F6F417DL},{0x2F6C4736L,0xF4B8F2EEL,(-1L),0x2036F5D4L},{0xEF2D51B0L,0xD80B5798L,0xE1402334L,0x57EECBCDL},{0L,0x3A7FB635L,0x19FE7C27L,0xE1402334L},{0xF65F61F1L,0xAB751097L,0xAB751097L,0xF65F61F1L},{(-1L),1L,0x48945118L,(-1L)},{0xAB751097L,0xF4B8F2EEL,0xD986D487L,4L}},{{0xD80B5798L,0xEF2D51B0L,0x9F6F417DL,4L},{0L,0xF4B8F2EEL,(-1L),(-1L)},{(-1L),1L,0xE1402334L,0xF65F61F1L},{8L,0xAB751097L,4L,0xE1402334L},{0xEF2D51B0L,4L,0x19FE7C27L,(-1L)},{0x6BD1A7C6L,0xD6944B59L,0xD80B5798L,(-1L)},{0x9F6F417DL,0x57EECBCDL,0x9F6F417DL,8L},{(-1L),0x9E142E7CL,8L,0x2F6C4736L}},{{(-1L),0xD80B5798L,0L,0x9E142E7CL},{0x9E142E7CL,0x2036F5D4L,0L,(-1L)},{(-1L),0x6BD1A7C6L,8L,0L},{(-1L),4L,0x9F6F417DL,0xEF2D51B0L},{0x9F6F417DL,0xEF2D51B0L,0xD80B5798L,0xE1402334L},{0x6BD1A7C6L,0xD80B5798L,0x19FE7C27L,8L},{0xEF2D51B0L,(-1L),0L,0L},{(-1L),(-1L),(-8L),(-1L)}}};
    unsigned l_1133[9][10][2] = {{{4294967291UL,3UL},{2UL,4UL},{0UL,2UL},{7UL,0x0EE718B0L},{7UL,2UL},{0UL,4UL},{2UL,3UL},{4294967291UL,2UL},{0x0EE718B0L,7UL},{7UL,4294967295UL}},{{4294967291UL,4UL},{4294967295UL,4UL},{4294967291UL,4294967295UL},{7UL,7UL},{0x0EE718B0L,2UL},{4294967291UL,3UL},{2UL,4UL},{0UL,2UL},{7UL,0x0EE718B0L},{7UL,2UL}},{{0UL,4UL},{2UL,3UL},{4294967291UL,2UL},{0x0EE718B0L,7UL},{4294967291UL,0xA18ED1F4L},{4UL,2UL},{0xA18ED1F4L,2UL},{4UL,0xA18ED1F4L},{4294967291UL,4294967291UL},{0UL,0x1D8A24F1L}},{{4UL,4294967295UL},{0x1D8A24F1L,2UL},{3UL,0x1D8A24F1L},{4294967291UL,0UL},{4294967291UL,0x1D8A24F1L},{3UL,2UL},{0x1D8A24F1L,4294967295UL},{4UL,0x1D8A24F1L},{0UL,4294967291UL},{4294967291UL,0xA18ED1F4L}},{{4UL,2UL},{0xA18ED1F4L,2UL},{4UL,0xA18ED1F4L},{4294967291UL,4294967291UL},{0UL,0x1D8A24F1L},{4UL,4294967295UL},{0x1D8A24F1L,2UL},{3UL,0x1D8A24F1L},{4294967291UL,0UL},{4294967291UL,0x1D8A24F1L}},{{3UL,2UL},{0x1D8A24F1L,4294967295UL},{4UL,0x1D8A24F1L},{0UL,4294967291UL},{4294967291UL,0xA18ED1F4L},{4UL,2UL},{0xA18ED1F4L,2UL},{4UL,0xA18ED1F4L},{4294967291UL,4294967291UL},{0UL,0x1D8A24F1L}},{{4UL,4294967295UL},{0x1D8A24F1L,2UL},{3UL,0x1D8A24F1L},{4294967291UL,0UL},{4294967291UL,0x1D8A24F1L},{3UL,2UL},{0x1D8A24F1L,4294967295UL},{4UL,0x1D8A24F1L},{0UL,4294967291UL},{4294967291UL,0xA18ED1F4L}},{{4UL,2UL},{0xA18ED1F4L,0x0EE718B0L},{0xA18ED1F4L,0UL},{4294967295UL,4294967295UL},{0x453D5DE6L,0UL},{0xA18ED1F4L,0x90C35709L},{0UL,0x0EE718B0L},{0x17B57D62L,0UL},{4294967295UL,0x453D5DE6L},{4294967295UL,0UL}},{{0x17B57D62L,0x0EE718B0L},{0UL,0x90C35709L},{0xA18ED1F4L,0UL},{0x453D5DE6L,4294967295UL},{4294967295UL,0UL},{0xA18ED1F4L,0x0EE718B0L},{0UL,0x0EE718B0L},{0xA18ED1F4L,0UL},{4294967295UL,4294967295UL},{0x453D5DE6L,0UL}}};
    unsigned ***l_1138 = &g_660;
    unsigned l_1141 = 4294967286UL;
    unsigned char *l_1142 = &g_633;
    int *l_1143 = &g_738[4];
    unsigned char l_1158[3][7][4] = {{{0xF4L,0UL,0UL,0xF4L},{0UL,0xF4L,0UL,0UL},{0xF4L,0xF4L,0x48L,0xF4L},{0xF4L,0UL,0UL,0xF4L},{0UL,0xF4L,0UL,0UL},{0xF4L,0xF4L,0x48L,0xF4L},{0xF4L,0UL,0UL,0xF4L}},{{0UL,0xF4L,0UL,0UL},{0xF4L,0xF4L,0x48L,0xF4L},{0xF4L,0UL,0UL,0xF4L},{0UL,0xF4L,0UL,0UL},{0xF4L,0xF4L,0x48L,0xF4L},{0xF4L,0UL,0UL,0xF4L},{0UL,0xF4L,0UL,0UL}},{{0xF4L,0xF4L,0x48L,0xF4L},{0xF4L,0UL,0UL,0xF4L},{0UL,0xF4L,0UL,0UL},{0xF4L,0xF4L,0x48L,0xF4L},{0xF4L,0UL,0UL,0xF4L},{0UL,0xF4L,0UL,0UL},{0xF4L,0xF4L,0x48L,0xF4L}}};
    int *l_1205[7][1] = {{&g_738[4]},{&g_743},{&g_738[4]},{&g_738[4]},{&g_743},{&g_738[4]},{&g_738[4]}};
    short *****l_1247 = (void*)0;
    unsigned char l_1263[4][7] = {{0x10L,1UL,0x10L,1UL,0x55L,1UL,0x10L},{0x68L,0x68L,0xDCL,0x68L,0x68L,0xDCL,0x68L},{0x55L,1UL,0x10L,1UL,0x10L,1UL,0x55L},{255UL,0x68L,255UL,255UL,0x68L,255UL,255UL}};
    int l_1320 = 0xD6E493CBL;
    int *l_1321 = &l_1320;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_858[i] = &g_418[4][1];
    if ((((safe_rshift_func_uint16_t_u_s(p_26, (((*g_552) != (void*)0) ^ (*p_24)))) & 0x8AADL) != p_28))
    {
        short *l_773 = &l_770[0][1];
        int l_781 = (-8L);
        short *l_782 = &g_15;
        (*g_266) = (*g_673);
        for (g_93 = 0; (g_93 > 28); g_93 = safe_add_func_int8_t_s_s(g_93, 9))
        {
            (*g_98) ^= (-1L);
        }
        (*g_673) = (void*)0;
    }
    else
    {
        char l_799[5][10][5] = {{{1L,3L,1L,3L,1L},{0x81L,0x81L,0x81L,0x81L,0x81L},{1L,3L,1L,3L,1L},{0x81L,0x81L,0x81L,0x81L,0x81L},{1L,3L,1L,3L,1L},{0x81L,0x81L,0x81L,0x81L,0x81L},{1L,3L,1L,3L,1L},{0x81L,0x81L,0x81L,0x81L,0x81L},{1L,3L,1L,3L,1L},{0x81L,0x81L,0x81L,0x81L,0x81L}},{{1L,3L,1L,3L,1L},{0x81L,0x81L,0x81L,0x81L,0x81L},{1L,3L,1L,3L,1L},{0x81L,0x81L,0x81L,0x81L,0x81L},{1L,3L,1L,3L,1L},{0x81L,0x81L,0x81L,0x81L,0x81L},{1L,3L,1L,3L,1L},{0x81L,0x81L,0x81L,0x81L,0x81L},{1L,3L,1L,3L,1L},{0x81L,0x81L,0x81L,0x81L,0x81L}},{{1L,3L,1L,3L,1L},{0x81L,0x81L,0x81L,0x81L,0x81L},{1L,3L,1L,3L,1L},{0x81L,0x81L,0x81L,0x81L,0x81L},{1L,3L,1L,3L,1L},{0x81L,0x81L,0x81L,0x81L,0x81L},{1L,3L,1L,3L,1L},{0x81L,0x81L,0x81L,0x81L,0x81L},{1L,3L,1L,3L,1L},{0x81L,0x81L,0x81L,0x81L,0x81L}},{{1L,3L,1L,3L,1L},{0x81L,0x81L,0x81L,0x81L,0x81L},{1L,3L,1L,3L,1L},{0x81L,0x81L,0x81L,0x81L,0x81L},{1L,3L,1L,3L,1L},{0x81L,0x81L,0x81L,0x81L,0x81L},{1L,3L,1L,3L,1L},{0x81L,0x81L,0x81L,0x81L,0x81L},{1L,3L,1L,3L,1L},{0x81L,0x81L,0x81L,0x81L,0x81L}},{{1L,3L,1L,3L,1L},{0x81L,0x81L,0x81L,0x81L,0x81L},{1L,3L,1L,3L,1L},{0x81L,0x81L,0x81L,0x81L,0x81L},{1L,3L,1L,3L,1L},{0x81L,0x81L,0x81L,0x81L,0x81L},{1L,3L,1L,3L,1L},{0x81L,0x81L,0x81L,0x81L,0x81L},{1L,3L,1L,3L,1L},{0x81L,0x81L,0x81L,0x81L,0x81L}}};
        short *l_803 = &l_770[0][1];
        unsigned l_807 = 0x2E88746DL;
        unsigned char l_808 = 0xEAL;
        int *l_814[9][2] = {{&g_22,&g_22},{&g_22,&g_22},{&g_22,&g_22},{&g_22,&g_22},{&g_22,&g_22},{&g_22,&g_22},{&g_22,&g_22},{&g_22,&g_22},{&g_22,&g_22}};
        char *l_856[10][5] = {{&g_7[4][8][0],(void*)0,&l_799[3][2][4],(void*)0,&g_7[4][8][0]},{&g_177,(void*)0,&g_7[4][3][0],&g_7[4][8][0],&g_7[4][3][0]},{&g_7[4][3][0],&g_7[4][3][0],&l_799[3][2][4],&g_7[4][8][0],&g_177},{(void*)0,&g_177,&g_177,(void*)0,&g_7[4][3][0]},{(void*)0,&g_7[4][8][0],&g_418[2][0],&g_418[2][0],&g_7[4][8][0]},{&g_7[4][3][0],&g_177,&g_418[2][0],&l_799[3][2][4],&l_799[3][2][4]},{&g_177,&g_7[4][3][0],&g_177,&g_418[2][0],&l_799[3][2][4]},{&g_7[4][8][0],(void*)0,&l_799[3][2][4],(void*)0,&g_7[4][8][0]},{&g_177,(void*)0,&g_7[4][3][0],&g_7[4][8][0],&g_7[4][3][0]},{&g_7[4][3][0],&g_7[4][3][0],&l_799[3][2][4],&g_7[4][8][0],&g_177}};
        char **l_855 = &l_856[2][4];
        unsigned l_910 = 0xB0FB0860L;
        int l_950[6][6] = {{0L,0L,0L,0L,0L,0L},{0L,0L,0L,0L,0L,0L},{0L,0L,0L,0L,0L,0L},{0L,0L,0L,0L,0L,0L},{0L,0L,0L,0L,0L,0L},{0L,0L,0L,0L,0L,0L}};
        unsigned ***l_1013 = (void*)0;
        unsigned ****l_1012[4] = {&l_1013,&l_1013,&l_1013,&l_1013};
        int *l_1028 = &g_743;
        unsigned char **l_1053 = &g_213;
        int *l_1071 = &g_738[4];
        short ***l_1121 = &g_918;
        short l_1130 = 7L;
        int i, j, k;
        if ((*p_24))
        {
            unsigned char *l_788 = &g_93;
            int l_789 = 0x3D0EB46EL;
            unsigned l_790 = 1UL;
            short ****l_795[7];
            unsigned short l_800 = 65534UL;
            int i;
            for (i = 0; i < 7; i++)
                l_795[i] = &g_551;
            l_789 = ((g_95[3][4][1] != p_28) | ((*l_788) &= ((void*)0 == l_787)));
            (*g_98) = (*g_98);
            if (((*g_98) = l_790))
            {
                int *l_791 = &g_738[4];
                (*l_791) &= (*g_98);
                return (*g_266);
            }
            else
            {
                short ****l_794 = &g_551;
                short *****l_796 = (void*)0;
                int *l_798 = &g_42;
                int **l_834 = &l_780[0][8];
                (*l_798) = (safe_rshift_func_int16_t_s_s((((p_28 , (*g_552)) != (p_27 = func_61(((((l_789 , l_794) != (g_797 = l_795[5])) >= func_38(l_798)) | ((((*l_788) &= ((l_789 == l_799[4][7][2]) , 1UL)) ^ l_790) < l_799[4][7][2])), &l_770[0][1], (*p_27), p_26))) || l_800), 10));
                if ((*g_178))
                {
                    short l_804 = 0xE25AL;
                    unsigned char **l_821 = &l_788;
                    if ((func_79(((****g_797) ^= (((*l_803) = (((*l_788) = (l_799[2][9][2] < ((safe_sub_func_uint32_t_u_u(l_804, (*g_378))) , 0xB038L))) & g_135)) > p_26))) , l_804))
                    {
                        short l_813 = 0xC0C2L;
                        char *l_830[5][7][7] = {{{&g_7[1][0][0],&g_177,&g_177,&g_7[1][0][0],&g_177,&g_177,&g_7[1][0][0]},{&g_190,&l_799[1][9][2],&g_190,&g_190,&l_799[1][9][2],&g_190,&g_190},{&g_7[1][0][0],&g_7[1][0][0],&g_7[4][8][0],&g_7[1][0][0],&g_7[1][0][0],&g_7[4][8][0],&g_7[1][0][0]},{&l_799[1][9][2],&g_190,&g_190,&l_799[1][9][2],&g_190,&g_190,&l_799[1][9][2]},{&g_177,&g_7[1][0][0],&g_177,&g_177,&g_7[1][0][0],&g_177,&g_177},{&l_799[1][9][2],&l_799[1][9][2],&g_177,&l_799[1][9][2],&l_799[1][9][2],&g_177,&l_799[1][9][2]},{&g_7[1][0][0],&g_177,&g_177,&g_7[1][0][0],&g_177,&g_177,&g_7[1][0][0]}},{{&g_190,&l_799[1][9][2],&g_190,&g_190,&l_799[1][9][2],&g_190,&g_190},{&g_7[1][0][0],&g_7[1][0][0],&g_7[1][0][0],&g_177,&g_177,&g_7[1][0][0],&g_177},{&g_190,&g_177,&g_177,&g_190,&g_177,&g_177,&g_190},{&g_7[4][8][0],&g_177,&g_7[4][8][0],&g_7[4][8][0],&g_177,&g_7[4][8][0],&g_7[4][8][0]},{&g_190,&g_190,&l_799[1][9][2],&g_190,&g_190,&l_799[1][9][2],&g_190},{&g_177,&g_7[4][8][0],&g_7[4][8][0],&g_177,&g_7[4][8][0],&g_7[4][8][0],&g_177},{&g_177,&g_190,&g_177,&g_177,&g_190,&g_177,&g_177}},{{&g_177,&g_177,&g_7[1][0][0],&g_177,&g_177,&g_7[1][0][0],&g_177},{&g_190,&g_177,&g_177,&g_190,&g_177,&g_177,&g_190},{&g_7[4][8][0],&g_177,&g_7[4][8][0],&g_7[4][8][0],&g_177,&g_7[4][8][0],&g_7[4][8][0]},{&g_190,&g_190,&l_799[1][9][2],&g_190,&g_190,&l_799[1][9][2],&g_190},{&g_177,&g_7[4][8][0],&g_7[4][8][0],&g_177,&g_7[4][8][0],&g_7[4][8][0],&g_177},{&g_177,&g_190,&g_177,&g_177,&g_190,&g_177,&g_177},{&g_177,&g_177,&g_7[1][0][0],&g_177,&g_177,&g_7[1][0][0],&g_177}},{{&g_190,&g_177,&g_177,&g_190,&g_177,&g_177,&g_190},{&g_7[4][8][0],&g_177,&g_7[4][8][0],&g_7[4][8][0],&g_177,&g_7[4][8][0],&g_7[4][8][0]},{&g_190,&g_190,&l_799[1][9][2],&g_190,&g_190,&l_799[1][9][2],&g_190},{&g_177,&g_7[4][8][0],&g_7[4][8][0],&g_177,&g_7[4][8][0],&g_7[4][8][0],&g_177},{&g_177,&g_190,&g_177,&g_177,&g_190,&g_177,&g_177},{&g_177,&g_177,&g_7[1][0][0],&g_177,&g_177,&g_7[1][0][0],&g_177},{&g_190,&g_177,&g_177,&g_190,&g_177,&g_177,&g_190}},{{&g_7[4][8][0],&g_177,&g_7[4][8][0],&g_7[4][8][0],&g_177,&g_7[4][8][0],&g_7[4][8][0]},{&g_190,&g_190,&l_799[1][9][2],&g_190,&g_190,&l_799[1][9][2],&g_190},{&g_177,&g_7[4][8][0],&g_7[4][8][0],&g_177,&g_7[4][8][0],&g_7[4][8][0],&g_177},{&g_177,&g_190,&g_177,&g_177,&g_190,&g_177,&g_177},{&g_177,&g_177,&g_7[1][0][0],&g_177,&g_177,&g_7[1][0][0],&g_177},{&g_190,&g_177,&g_177,&g_190,&g_177,&g_177,&g_190},{&g_7[4][8][0],&g_177,&g_7[4][8][0],&g_7[4][8][0],&g_177,&g_7[4][8][0],&g_7[4][8][0]}}};
                        unsigned char *l_831 = (void*)0;
                        unsigned char *l_832 = &g_633;
                        int i, j, k;
                        (*l_798) = (l_808 == (safe_lshift_func_int8_t_s_s((p_26 <= (+((((**g_377) = (((g_272[7] , (safe_mod_func_int8_t_s_s(((((*g_98) , (*g_661)) , l_789) , g_133[8][6][1]), 8L))) > (***g_551)) >= (*p_27))) || l_804) ^ 4294967287UL))), 7)));
                        p_24 = ((safe_lshift_func_int16_t_s_u((((safe_rshift_func_uint16_t_u_s((safe_add_func_uint32_t_u_u((l_821 == ((*l_787) = (*l_787))), ((func_68((*l_798)) > (safe_add_func_int16_t_s_s((((((*l_832) = (0x532A63C2L <= (((safe_lshift_func_int16_t_s_s(((***g_551) = (p_28 != (**g_266))), 6)) == p_28) >= (((safe_rshift_func_int16_t_s_s((safe_sub_func_int8_t_s_s((g_190 = (g_22 != 0L)), p_28)), 2)) , l_813) > p_28)))) ^ g_738[0]) != (*p_24)) < (**g_673)), l_800))) || (*g_14)))), (*g_14))) && 253UL) , (*l_798)), g_272[7])) , (void*)0);
                    }
                    else
                    {
                        int *l_833[7];
                        int i;
                        for (i = 0; i < 7; i++)
                            l_833[i] = &g_743;
                        return l_833[0];
                    }
                }
                else
                {
                    (*l_798) = l_770[1][0];
                }
                (*g_673) = ((((*l_834) = (void*)0) == &g_111) , l_814[2][1]);
                (*l_798) &= (**g_673);
            }
        }
        else
        {
            unsigned char l_839 = 0x86L;
            int l_865 = (-1L);
            int *l_866 = &g_95[2][1][2];
            unsigned **l_867 = &g_661;
            short *l_891[6][6][7] = {{{&l_770[0][5],&g_272[7],(void*)0,&g_124,(void*)0,&g_272[4],&g_116},{&g_272[7],(void*)0,(void*)0,&l_770[0][0],&g_15,&g_116,&g_272[4]},{&g_879,&g_15,&g_116,&g_124,&g_272[4],&g_15,&g_15},{&g_116,&l_770[0][1],&g_124,&g_272[7],&l_770[0][2],&g_124,(void*)0},{&g_272[7],&l_770[0][1],&g_272[2],(void*)0,&g_15,&g_116,&l_770[0][1]},{&l_770[0][1],&l_770[0][1],(void*)0,&g_879,(void*)0,(void*)0,&g_272[7]}},{{&g_116,&l_770[0][1],&g_124,&l_770[0][5],&g_124,&g_124,&g_272[0]},{&g_272[1],&g_15,&g_272[7],&g_124,(void*)0,&g_272[0],&g_272[7]},{&l_770[0][1],(void*)0,(void*)0,&g_15,&g_116,&g_116,&l_770[2][4]},{&g_116,&l_770[0][1],&l_770[2][2],&g_272[7],(void*)0,(void*)0,&g_124},{&g_272[7],&g_124,&g_116,&g_879,&l_770[0][1],(void*)0,&l_770[0][1]},{&g_116,(void*)0,(void*)0,&g_116,&l_770[0][1],&g_124,&g_124}},{{&l_770[0][1],&g_116,&g_879,&g_15,(void*)0,&g_15,&g_272[0]},{&g_272[7],(void*)0,&g_15,(void*)0,&l_770[0][1],&g_116,&g_124},{&g_272[4],&g_15,&g_124,&l_770[0][1],&g_124,&l_770[0][1],&l_770[1][6]},{&l_770[0][1],&g_272[7],&g_15,&g_15,(void*)0,&g_272[4],(void*)0},{&g_879,&l_770[0][1],&g_15,&g_15,&g_124,(void*)0,&g_15},{&g_124,(void*)0,(void*)0,&l_770[0][2],&l_770[0][1],&l_770[0][5],(void*)0}},{{&g_116,&g_124,&g_272[7],&g_879,&l_770[2][2],&g_15,&l_770[0][1]},{(void*)0,&g_15,&l_770[0][1],&g_124,&g_879,&g_124,&l_770[0][1]},{(void*)0,(void*)0,&g_15,&g_15,(void*)0,&g_15,&g_272[0]},{&g_124,&g_124,&l_770[0][1],&l_770[1][4],(void*)0,&g_116,&g_124},{&g_272[2],&g_116,&g_272[7],&g_124,&g_879,&g_272[4],&g_116},{&g_272[7],&g_272[7],&l_770[0][1],(void*)0,&l_770[2][2],&g_124,(void*)0}},{{&l_770[1][4],&g_879,&g_15,&l_770[0][1],&l_770[0][1],&l_770[0][1],&g_124},{&g_879,&l_770[0][1],&g_879,&g_272[7],&g_124,&g_272[4],(void*)0},{&g_124,&g_15,(void*)0,(void*)0,(void*)0,&l_770[1][4],&g_124},{(void*)0,&l_770[0][5],&g_124,&g_116,&g_124,(void*)0,&g_879},{&g_116,&g_116,&g_15,&l_770[0][5],&g_272[5],&g_879,&g_116},{&g_272[7],&g_15,&g_15,&g_272[7],&g_124,&g_15,&l_770[0][1]}},{{&g_272[7],&l_770[0][1],&g_15,(void*)0,&g_272[7],&l_770[0][0],&g_124},{&g_15,(void*)0,&g_124,&l_770[0][1],&g_272[0],&g_879,&g_116},{(void*)0,&g_15,&g_272[7],&g_15,&g_116,&l_770[0][1],&g_15},{&l_770[2][4],&l_770[2][2],(void*)0,&l_770[0][5],&g_15,(void*)0,&g_272[4]},{&l_770[0][1],&g_272[7],&g_272[7],&g_124,&g_116,&g_124,&g_879},{&l_770[0][5],&g_15,&l_770[1][7],&l_770[1][4],&g_15,&g_116,&l_770[0][1]}}};
            short l_896 = (-2L);
            unsigned **l_947 = &g_378;
            char **l_999[7][2] = {{&l_856[8][2],&l_856[8][2]},{&l_856[2][4],&l_856[8][2]},{&l_856[8][2],&l_856[2][4]},{&l_856[8][2],&l_856[8][2]},{&l_856[2][4],&l_856[8][2]},{&l_856[8][2],&l_856[2][4]},{&l_856[8][2],&l_856[8][2]}};
            int i, j, k;
        }
        p_28 = (safe_mod_func_uint16_t_u_u(65531UL, 65529UL));
    }
    if (((*l_1031) = (g_162 <= (((p_28 && 1UL) >= ((*l_1143) &= (p_28 < (((p_25 && ((+(~p_25)) > ((safe_add_func_uint8_t_u_u(((*l_1142) &= ((((**l_857) |= (l_1141 == ((***g_551) , func_38((*g_266))))) && (*l_1031)) != (**g_377))), (*l_1031))) == 0UL))) > p_26) <= (*l_1031))))) <= 0xD446L))))
    {
        unsigned l_1148[2];
        int *l_1159[5][10] = {{(void*)0,&g_95[2][2][0],&g_95[3][4][1],&g_95[3][4][1],&g_95[2][2][0],(void*)0,&g_738[0],(void*)0,&g_95[2][2][0],&g_95[3][4][1]},{&g_82,&g_738[4],&g_82,&g_95[3][4][1],&g_738[0],&g_738[0],&g_95[3][4][1],&g_82,&g_738[4],&g_82},{&g_82,(void*)0,&g_738[4],&g_95[2][2][0],&g_738[0],&g_738[4],(void*)0,(void*)0,&g_738[4],&g_738[0]},{&g_738[4],(void*)0,(void*)0,&g_738[4],&g_738[0],&g_82,&g_738[0],&g_738[4],(void*)0,(void*)0},{&g_738[0],(void*)0,&g_95[2][2][0],&g_95[3][4][1],&g_95[3][4][1],&g_95[2][2][0],(void*)0,&g_738[0],(void*)0,&g_95[2][2][0]}};
        unsigned char **l_1190 = &l_1142;
        int *l_1223 = &g_95[2][3][5];
        unsigned **l_1260 = &g_378;
        unsigned **l_1267 = &g_661;
        int *l_1288 = &g_22;
        int l_1311 = 0x3555C5C0L;
        int i, j;
        for (i = 0; i < 2; i++)
            l_1148[i] = 0x9F247C17L;
        for (p_28 = (-20); (p_28 != 26); p_28 = safe_add_func_int8_t_s_s(p_28, 9))
        {
            int l_1155 = 0xB4460A66L;
            int l_1189 = 0x657F53B2L;
            unsigned char l_1201 = 0x94L;
            short *****l_1219[5];
            unsigned l_1238 = 6UL;
            int i;
            for (i = 0; i < 5; i++)
                l_1219[i] = &g_797;
            (*l_1031) |= ((-1L) & (((2UL == 0x85L) & (p_28 >= (safe_rshift_func_int16_t_s_u((*p_27), g_124)))) , (((**g_918) = 0L) | func_79((l_1148[0] = 0x8230L)))));
            if ((safe_add_func_uint16_t_u_u(p_28, ((((safe_add_func_int32_t_s_s(p_25, ((safe_add_func_int32_t_s_s(l_1155, p_26)) && ((**l_857) = l_1155)))) , (safe_rshift_func_int16_t_s_u(((((((**g_377) = l_1158[2][4][0]) & func_38(&l_1155)) , (((*l_1031) = l_1148[1]) == 7L)) >= l_1148[0]) , (*p_27)), l_1148[0]))) == 0xCEFBL) > 65529UL))))
            {
                short l_1160 = (-1L);
                (*g_673) = l_1159[0][3];
                (*l_1143) = (l_1160 || ((*l_1142) &= ((safe_sub_func_int16_t_s_s(((-9L) <= (((safe_mul_func_int8_t_s_s((safe_mul_func_int16_t_s_s((func_68(((*l_1143) = (safe_rshift_func_uint8_t_u_u((((*p_27) || p_25) > ((**g_918) = ((p_28 == func_38(l_1159[0][3])) > (**g_377)))), 4)))) > 255UL), 0L)), 0xB8L)) , p_28) | l_1160)), l_1160)) , 246UL)));
                (*l_1143) = (((*l_1031) = (safe_mod_func_uint32_t_u_u((((***g_551) , l_1155) | (***g_551)), (safe_sub_func_int16_t_s_s((((0x0AF8E1DAL && p_26) != p_28) & (((safe_add_func_uint16_t_u_u((p_26 <= l_1160), (0xA1L == 0UL))) , l_1160) || l_1155)), g_595))))) <= l_1160);
            }
            else
            {
                short *l_1196 = &g_879;
                char l_1197 = 0x80L;
                (**g_266) = (l_1155 , ((*p_27) <= p_26));
                for (g_190 = 0; (g_190 >= 1); ++g_190)
                {
                    char l_1191 = 0x88L;
                    (*g_673) = (*g_266);
                    l_1189 = (safe_mod_func_int8_t_s_s((safe_mod_func_int8_t_s_s(((((safe_rshift_func_uint16_t_u_u((((*l_1143) = ((*l_1031) &= (((((**l_1190) = (safe_mod_func_uint8_t_u_u(func_79((*p_27)), ((safe_mul_func_uint16_t_u_u(((p_25 , ((((safe_sub_func_int8_t_s_s((-9L), ((void*)0 != &p_27))) || 0x3FL) | (~(+(((*g_178) &= l_1189) | l_1189)))) , l_1190)) == l_1190), 1UL)) , 0x9AL)))) ^ l_1189) ^ g_328) | 65533UL))) <= p_28), l_1191)) | 0x685FL) <= 0x01L) <= 0xEAD544C0L), 5L)), 1L));
                }
                if ((**g_673))
                {
                    for (g_162 = 0; (g_162 < 21); ++g_162)
                    {
                        if ((**g_673))
                            break;
                    }
                    (*g_266) = (*g_266);
                }
                else
                {
                    unsigned *l_1198 = &g_1023;
                    (*g_178) = (safe_add_func_int32_t_s_s(((&l_770[1][8] == l_1196) , l_1197), ((*l_1198) |= (**g_377))));
                    (*g_266) = (*g_673);
                }
            }
            if ((safe_unary_minus_func_int32_t_s((func_38((*g_266)) | ((*l_1143) <= g_1200)))))
            {
                unsigned short l_1202 = 0xD763L;
                int l_1203 = (-8L);
                int *l_1204 = &l_1155;
                (*l_1143) ^= (l_1202 ^= (+l_1201));
                l_1203 = (*l_1031);
                return l_1205[3][0];
            }
            else
            {
                unsigned short l_1208 = 0x723BL;
                int ***l_1217[7][4][3] = {{{&g_673,&g_673,&g_673},{&g_673,&g_673,&g_673},{&g_673,&g_673,&g_673},{&g_673,&g_673,&g_673}},{{&g_673,&g_673,&g_673},{&g_673,&g_673,&g_673},{&g_673,&g_673,&g_673},{&g_673,&g_673,&g_673}},{{&g_673,&g_673,&g_673},{&g_673,&g_673,&g_673},{&g_673,&g_673,&g_673},{&g_673,&g_673,&g_673}},{{&g_673,&g_673,&g_673},{&g_673,&g_673,&g_673},{&g_673,&g_673,&g_673},{&g_673,&g_673,&g_673}},{{&g_673,&g_673,&g_673},{&g_673,&g_673,&g_673},{&g_673,&g_673,&g_673},{&g_673,&g_673,&g_673}},{{&g_673,&g_673,&g_673},{&g_673,&g_673,&g_673},{&g_673,&g_673,&g_673},{&g_673,&g_673,&g_673}},{{&g_673,&g_673,&g_673},{&g_673,&g_673,&g_673},{&g_673,&g_673,&g_673},{&g_673,&g_673,&g_673}}};
                short *****l_1218 = &g_797;
                int i, j, k;
                if ((*l_1143))
                {
                    (*l_1143) &= (safe_mod_func_int16_t_s_s((**g_918), func_79((*p_27))));
                    (*l_1143) ^= ((*l_1031) = l_1208);
                }
                else
                {
                    unsigned char l_1220[10] = {0x7BL,0x7BL,0x7BL,0x7BL,0x7BL,0x7BL,0x7BL,0x7BL,0x7BL,0x7BL};
                    unsigned l_1232 = 18446744073709551615UL;
                    int *l_1233 = &l_1189;
                    int i;
                    if ((((*l_787) = &g_213) != (((safe_mod_func_int16_t_s_s(((((**g_377) | (((p_28 >= p_25) <= ((safe_add_func_uint32_t_u_u(((func_38((*g_673)) , l_1220[2]) ^ 0x424CD299L), (*g_378))) , p_26)) , p_26)) > (**g_377)) , l_1220[2]), l_1220[2])) || 0x51CE5990L) , &l_1142)))
                    {
                        (*g_673) = func_55((*p_27), (safe_lshift_func_uint8_t_u_u((p_26 , (p_26 ^ l_1220[1])), 0)), l_1223, ((**l_1190) = p_28), (*l_1223));
                        (*l_1143) = (&g_962 != (void*)0);
                    }
                    else
                    {
                        int l_1224 = 5L;
                        unsigned *l_1231[4][4] = {{(void*)0,&g_676[0][1][0],&g_676[1][0][1],&g_676[1][0][1]},{&g_676[1][0][2],&g_676[1][0][2],(void*)0,&g_676[1][0][1]},{&l_1148[0],&g_676[0][1][0],&l_1148[0],(void*)0},{&l_1148[0],(void*)0,(void*)0,&l_1148[0]}};
                        int i, j;
                        if (l_1224)
                            break;
                        (*l_1031) = ((!(((safe_mod_func_uint8_t_u_u((((p_25 |= ((***l_1138) = (safe_rshift_func_uint8_t_u_s(l_1224, 2)))) , &l_784) == &p_27), l_1232)) , g_133[0][6][2]) <= (*p_27))) , p_28);
                        (*g_673) = func_55(l_1224, (*p_27), l_1233, (+(&g_162 != p_24)), ((((**l_1190) ^= (0L | 0xBDA6AA95L)) , (*p_27)) == (safe_mul_func_uint8_t_u_u((safe_sub_func_int8_t_s_s((((*g_673) = l_1233) == (void*)0), (-1L))), l_1238))));
                        (*l_1223) = ((*l_1233) = ((((((safe_sub_func_int32_t_s_s(p_28, func_38(((*g_673) = &l_1224)))) || ((safe_rshift_func_int8_t_s_s(((**g_377) | p_25), 5)) != ((*p_27) = (((p_28 && l_1155) | 0L) == (safe_sub_func_uint8_t_u_u((((*l_1077) = (p_26 == p_25)) | g_418[2][1]), p_26)))))) != (**g_552)) < (**g_918)) , &g_178) == &g_98));
                    }
                }
                for (g_897 = 28; (g_897 <= 13); --g_897)
                {
                    (*l_1223) ^= ((void*)0 != l_1247);
                }
            }
            for (g_111 = 2; (g_111 <= (-11)); g_111 = safe_sub_func_uint8_t_u_u(g_111, 6))
            {
                (*l_1143) = func_38(((*g_673) = l_1159[2][1]));
                if (p_26)
                    break;
            }
        }
        for (g_111 = 0; (g_111 > (-20)); g_111 = safe_sub_func_uint8_t_u_u(g_111, 5))
        {
            int l_1262 = 0x514D2729L;
            int *l_1264 = &g_42;
            short l_1286 = 7L;
            for (g_1023 = (-12); (g_1023 >= 52); g_1023 = safe_add_func_int8_t_s_s(g_1023, 8))
            {
                unsigned l_1261 = 1UL;
                for (g_135 = 0; (g_135 <= 3); g_135 += 1)
                {
                    unsigned short l_1254[8][3] = {{0xBABCL,0xBABCL,0xAE0CL},{0xBABCL,0xBABCL,0xAE0CL},{0xBABCL,0xBABCL,0xAE0CL},{0xBABCL,0xBABCL,0xAE0CL},{0xBABCL,0xBABCL,0xAE0CL},{0xBABCL,0xBABCL,0xAE0CL},{0xBABCL,0xBABCL,0xAE0CL},{0xBABCL,0xBABCL,0xAE0CL}};
                    int i, j;
                    (*g_266) = &p_28;
                    (**g_266) = (l_1254[3][1] == ((*l_1142) &= (((func_79((safe_mul_func_int8_t_s_s(p_26, ((~(safe_unary_minus_func_int32_t_s((**g_673)))) != (((safe_mod_func_uint16_t_u_u((l_1260 != (void*)0), func_79((*g_14)))) && (((*p_27) == (&g_797 != &g_797)) & l_1261)) < l_1262))))) && 0x84L) , (***g_551)) <= p_26)));
                    if (l_1263[2][4])
                        break;
                }
                if (((*l_1223) = l_1261))
                {
                    return l_1264;
                }
                else
                {
                    for (g_160 = (-10); (g_160 <= 27); g_160 = safe_add_func_int8_t_s_s(g_160, 3))
                    {
                        (*g_266) = &p_28;
                        (*l_1138) = l_1267;
                    }
                }
                (*l_1143) = ((safe_mul_func_int8_t_s_s((((safe_lshift_func_int16_t_s_u(((***g_551) ^= (safe_lshift_func_int8_t_s_s(p_26, 0))), 2)) ^ 0x56F093C0L) != func_79((safe_sub_func_int8_t_s_s(((p_28 = (*l_1264)) < 0xD7958C1CL), ((**l_857) = l_1261))))), (safe_add_func_int32_t_s_s((safe_add_func_int16_t_s_s((((safe_rshift_func_uint16_t_u_u((((*p_27) = ((safe_mod_func_int8_t_s_s((safe_mod_func_int8_t_s_s(l_1261, l_1286)), (-1L))) , (*p_27))) == l_1261), 2)) , l_1261) , l_1261), 0x7ECAL)), 4294967290UL)))) || l_1261);
                (*l_1143) = p_25;
                if (p_25)
                    goto lbl_1287;
            }
        }
        (*l_1223) = p_28;
        if (((*l_1223) = p_28))
        {
lbl_1287:
            (*l_1223) = func_38(&l_940);
            (*l_1223) &= (**g_266);
            return l_1288;
        }
        else
        {
            (*l_1143) = (((p_28 , p_28) , (safe_sub_func_uint8_t_u_u((safe_sub_func_int16_t_s_s((((!(*p_27)) < ((safe_lshift_func_int16_t_s_s(((!(p_25 || (((safe_add_func_int16_t_s_s(((***g_551) &= (safe_add_func_uint32_t_u_u(p_26, ((safe_add_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u(func_79((safe_rshift_func_uint8_t_u_u(func_38(&l_940), 7))), (safe_add_func_int8_t_s_s(((((safe_mul_func_int8_t_s_s((((*l_1077) = (((*l_1142) |= 8UL) ^ p_25)) & (*p_27)), p_26)) && p_26) , 65535UL) > g_111), 0x3BL)))), l_1311)) , (**g_266))))), g_7[6][6][1])) , (*g_660)) == &p_25))) > (-1L)), 15)) , 0L)) || 0x8A5DL), (*p_27))), 246UL))) >= 0xBF8E0A18L);
        }
    }
    else
    {
        int l_1314 = (-8L);
        short ***l_1319 = &g_552;
        (*g_673) = func_55(((*p_27) |= 0x1221L), (safe_mod_func_uint8_t_u_u(l_1314, ((((*g_378) = (g_1315 == (void*)0)) >= 0x0B3A2CC2L) ^ (safe_rshift_func_int16_t_s_u(((**g_918) ^= ((func_38((*g_266)) >= (l_1319 != l_1319)) , l_1320)), g_7[7][9][1]))))), l_1321, l_1314, p_26);
        (*l_1321) |= (l_1314 , (&g_213 != &g_213));
    }
    (*l_1143) |= ((*l_1321) = (*l_1031));
    return g_1322;
}







static char func_38(int * p_39)
{
    int l_41[9] = {0L,0L,0L,0L,0L,0L,0L,0L,0L};
    short *l_48 = &g_15;
    int *l_751 = &g_82;
    unsigned l_756 = 18446744073709551608UL;
    int l_760 = 0xD140684DL;
    int i;
    for (g_42 = 2; (g_42 <= 8); g_42 += 1)
    {
        short *l_121 = &g_116;
        short **l_120 = &l_121;
        int *l_742 = &g_743;
        int *l_744 = &g_738[4];
        unsigned char l_757 = 0x06L;
        int i;
    }
    (*g_673) = p_39;
    (*g_266) = p_39;
    return (*l_751);
}







static int func_43(short * p_44, short * p_45, unsigned short p_46, int * p_47)
{
    unsigned **l_483[8][7][4] = {{{&g_378,&g_378,&g_378,&g_378},{&g_378,(void*)0,(void*)0,&g_378},{(void*)0,&g_378,(void*)0,(void*)0},{&g_378,&g_378,&g_378,&g_378},{&g_378,(void*)0,(void*)0,&g_378},{(void*)0,&g_378,(void*)0,(void*)0},{&g_378,&g_378,&g_378,&g_378}},{{&g_378,(void*)0,(void*)0,&g_378},{(void*)0,&g_378,(void*)0,(void*)0},{&g_378,&g_378,&g_378,&g_378},{&g_378,(void*)0,(void*)0,&g_378},{(void*)0,&g_378,(void*)0,(void*)0},{&g_378,&g_378,&g_378,&g_378},{&g_378,(void*)0,(void*)0,&g_378}},{{(void*)0,&g_378,(void*)0,(void*)0},{&g_378,&g_378,&g_378,&g_378},{&g_378,(void*)0,(void*)0,&g_378},{(void*)0,&g_378,(void*)0,(void*)0},{&g_378,&g_378,&g_378,&g_378},{&g_378,(void*)0,(void*)0,&g_378},{(void*)0,&g_378,(void*)0,(void*)0}},{{&g_378,&g_378,&g_378,&g_378},{&g_378,(void*)0,(void*)0,&g_378},{(void*)0,&g_378,(void*)0,(void*)0},{&g_378,&g_378,&g_378,&g_378},{&g_378,(void*)0,(void*)0,&g_378},{(void*)0,&g_378,(void*)0,(void*)0},{&g_378,&g_378,&g_378,&g_378}},{{&g_378,(void*)0,(void*)0,&g_378},{(void*)0,(void*)0,&g_378,&g_378},{(void*)0,(void*)0,&g_378,(void*)0},{(void*)0,&g_378,&g_378,(void*)0},{&g_378,(void*)0,&g_378,&g_378},{(void*)0,(void*)0,&g_378,(void*)0},{(void*)0,&g_378,&g_378,(void*)0}},{{&g_378,(void*)0,&g_378,&g_378},{(void*)0,(void*)0,&g_378,(void*)0},{(void*)0,&g_378,&g_378,(void*)0},{&g_378,(void*)0,&g_378,&g_378},{(void*)0,(void*)0,&g_378,(void*)0},{(void*)0,&g_378,&g_378,(void*)0},{&g_378,(void*)0,&g_378,&g_378}},{{(void*)0,(void*)0,&g_378,(void*)0},{(void*)0,&g_378,&g_378,(void*)0},{&g_378,(void*)0,&g_378,&g_378},{(void*)0,(void*)0,&g_378,(void*)0},{(void*)0,&g_378,&g_378,(void*)0},{&g_378,(void*)0,&g_378,&g_378},{(void*)0,(void*)0,&g_378,(void*)0}},{{(void*)0,&g_378,&g_378,(void*)0},{&g_378,(void*)0,&g_378,&g_378},{(void*)0,(void*)0,&g_378,(void*)0},{(void*)0,&g_378,&g_378,(void*)0},{&g_378,(void*)0,&g_378,&g_378},{(void*)0,(void*)0,&g_378,(void*)0},{(void*)0,&g_378,&g_378,(void*)0}}};
    unsigned ***l_484[8][1] = {{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}};
    int l_497 = 0x0BADD7ECL;
    unsigned l_561 = 0x28F05CAFL;
    int ***l_591[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    unsigned **l_663 = &g_661;
    unsigned char **l_689 = &g_213;
    int l_713[4][4];
    short *l_724 = &g_124;
    int i, j, k;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
            l_713[i][j] = 9L;
    }
    if (func_68(((safe_lshift_func_int16_t_s_s((-6L), 2)) , ((g_377 = l_483[7][5][1]) != (void*)0))))
    {
        int l_485 = (-1L);
        char *l_535 = &g_418[2][1];
        char l_575 = 0x54L;
        int l_590 = (-2L);
        int l_592 = (-2L);
        short **l_631 = &g_180[2];
        int l_648[4][4][10] = {{{0x44FD655FL,0L,(-3L),0L,1L,0xFC75C710L,0x7467A51BL,0x4C791B61L,0x4C791B61L,0x7467A51BL},{0L,8L,0xE1B4A4F1L,0xE1B4A4F1L,8L,0L,0x6022C7CAL,0x44FD655FL,0x08186BF5L,0x0FF486F8L},{0x08186BF5L,(-1L),1L,0L,3L,0L,0xEA12EE60L,0x16E58260L,0x34FA77B0L,0xFC75C710L},{0x08186BF5L,0L,8L,0L,1L,0L,0xFC75C710L,0x346A2E7BL,0x7467A51BL,0x346A2E7BL}},{{0L,0xFC75C710L,0x346A2E7BL,0x7467A51BL,0x346A2E7BL,0xFC75C710L,0L,1L,0L,8L},{0x44FD655FL,(-3L),0xFC75C710L,0x34FA77B0L,0x16E58260L,0xEA12EE60L,0L,3L,0L,1L},{0x34FA77B0L,(-3L),0x0FF486F8L,0x08186BF5L,0x44FD655FL,0x6022C7CAL,0L,8L,0xE1B4A4F1L,0xDF3428E6L},{0xE1B4A4F1L,(-3L),0x16E58260L,(-1L),(-1L),0x16E58260L,(-3L),0xE1B4A4F1L,0x61539BA5L,0L}},{{3L,0x61539BA5L,0L,0L,0xFC75C710L,1L,0x2D876EA3L,0x6022C7CAL,0x08186BF5L,(-1L)},{0L,0x346A2E7BL,0L,0xFC75C710L,0x16E58260L,0x6022C7CAL,(-1L),0xE1B4A4F1L,0x7467A51BL,0x2D876EA3L},{8L,0x4C791B61L,0x16E58260L,0L,(-6L),0L,0x16E58260L,0x4C791B61L,8L,0x0FF486F8L},{0x2D876EA3L,0x08186BF5L,3L,0x0FF486F8L,0x44FD655FL,0xE1B4A4F1L,1L,0x7467A51BL,0L,8L}},{{0x7467A51BL,0x34FA77B0L,(-3L),0x0FF486F8L,0x08186BF5L,0x44FD655FL,0x6022C7CAL,0L,8L,0xE1B4A4F1L},{(-1L),0x7467A51BL,0L,0L,8L,8L,0L,0L,0x7467A51BL,(-1L)},{0x44FD655FL,0L,0x4C791B61L,0xFC75C710L,8L,(-1L),0xE1B4A4F1L,0L,0x08186BF5L,(-6L)},{0x0FF486F8L,0L,0L,0L,8L,0x346A2E7BL,0x44FD655FL,1L,0x61539BA5L,(-1L)}}};
        unsigned **l_668 = &g_661;
        short l_683[9][4] = {{6L,0x8DE4L,2L,0xCB48L},{0x8DE4L,0x4D69L,0xCEDBL,(-6L)},{2L,0xCEDBL,0xCEDBL,2L},{0x8DE4L,(-5L),0xAB5EL,0xCB48L},{0x964CL,0x0080L,0xCB48L,0x6AEEL},{0xCB48L,0x6AEEL,1L,0x6AEEL},{0xCEDBL,0x0080L,0x4D69L,0xCB48L},{6L,(-5L),0x6AEEL,2L},{0x4D69L,0xCEDBL,(-6L),(-6L)}};
        unsigned char **l_691 = &g_213;
        unsigned char l_692[8][8][3] = {{{0xC7L,0x32L,255UL},{0x4CL,0UL,253UL},{0UL,6UL,0x32L},{5UL,255UL,0x99L},{247UL,0xE5L,1UL},{253UL,255UL,0x48L},{0xA5L,0x0DL,0x0DL},{0x4DL,0xE3L,0xF7L}},{{0x0DL,1UL,0xD3L},{4UL,0x4CL,251UL},{0x5FL,0x3CL,0UL},{0UL,0x4CL,255UL},{0UL,1UL,0x32L},{1UL,0xE3L,0x4AL},{0x1FL,0x0DL,8UL},{0xB6L,255UL,0x01L}},{{1UL,0xE5L,1UL},{0UL,255UL,1UL},{7UL,6UL,0x1CL},{0x99L,0UL,4UL},{0x79L,0x32L,255UL},{0x48L,1UL,0x01L},{0x32L,0xD3L,0x0DL},{0xB6L,0UL,251UL}},{{0x07L,255UL,7UL},{0xF7L,0xE3L,0x4DL},{0xC7L,0xC7L,247UL},{249UL,0x9FL,0xF7L},{0xA5L,7UL,0UL},{0xA4L,0xF7L,255UL},{0x79L,0xA5L,0UL},{0xE3L,4UL,0xF7L}},{{255UL,0xE5L,247UL},{5UL,0UL,0x4DL},{0UL,247UL,7UL},{0UL,251UL,251UL},{0x57L,1UL,0x0DL},{251UL,255UL,0x01L},{255UL,0x79L,0UL},{0x02L,5UL,0xE3L}},{{0x7BL,0x79L,0x5FL},{253UL,255UL,249UL},{0x1FL,1UL,0x07L},{0UL,251UL,0x99L},{0x3CL,247UL,0x54L},{255UL,0UL,255UL},{0x32L,0xE5L,0x1FL},{1UL,4UL,0x4CL}},{{247UL,0xA5L,255UL},{0x4AL,0xF7L,0x99L},{247UL,7UL,8UL},{1UL,0x9FL,5UL},{0x32L,0xC7L,255UL},{5UL,0x02L,0xF7L},{0x32L,0x79L,0x07L},{0x99L,0x99L,0xB6L}},{{255UL,0UL,0x32L},{0x99L,0xF7L,0x48L},{6UL,0x32L,1UL},{255UL,0x99L,0x48L},{0x79L,0x5FL,0x32L},{0UL,0x9FL,0xB6L},{0xE5L,8UL,0x07L},{0x48L,255UL,0xF7L}}};
        int *l_723 = &g_42;
        int i, j, k;
        for (g_368 = 1; (g_368 >= 0); g_368 -= 1)
        {
            int *l_486 = &g_82;
            unsigned short l_514 = 1UL;
            int l_547 = 2L;
            short *l_596 = &g_272[5];
            unsigned char *l_601 = &g_93;
            unsigned l_616 = 0x82F16D6BL;
            unsigned l_621 = 4294967295UL;
            unsigned l_641 = 18446744073709551615UL;
            short l_652 = 0x8275L;
            int **l_672[3];
            int i;
            for (i = 0; i < 3; i++)
                l_672[i] = &l_486;
            (*l_486) &= l_485;
        }
        for (g_93 = 18; (g_93 == 44); g_93 = safe_add_func_int8_t_s_s(g_93, 9))
        {
            unsigned char ***l_690[8][5][6] = {{{&g_212,&g_212,(void*)0,(void*)0,&g_212,&l_689},{&g_212,(void*)0,&l_689,&g_212,&g_212,&l_689},{&g_212,&g_212,&l_689,(void*)0,&g_212,&g_212},{&l_689,(void*)0,(void*)0,&g_212,&g_212,&l_689},{&l_689,&l_689,(void*)0,(void*)0,&g_212,&g_212}},{{&g_212,(void*)0,&l_689,&l_689,&l_689,&l_689},{&l_689,&l_689,&l_689,(void*)0,&l_689,&l_689},{&l_689,(void*)0,(void*)0,&l_689,&g_212,&l_689},{&g_212,&g_212,(void*)0,(void*)0,&l_689,&l_689},{&l_689,(void*)0,&g_212,&g_212,&l_689,&l_689}},{{&l_689,&g_212,&g_212,(void*)0,&g_212,&g_212},{&g_212,(void*)0,(void*)0,&g_212,&l_689,&l_689},{&g_212,&l_689,(void*)0,(void*)0,&l_689,&g_212},{&g_212,(void*)0,&g_212,&l_689,&g_212,&l_689},{&g_212,&l_689,&g_212,(void*)0,&g_212,&l_689}},{{&g_212,(void*)0,(void*)0,&l_689,&g_212,&l_689},{&g_212,&g_212,(void*)0,(void*)0,&g_212,&l_689},{&g_212,(void*)0,&l_689,&g_212,&g_212,&l_689},{&g_212,&g_212,&l_689,(void*)0,&g_212,&g_212},{&l_689,(void*)0,(void*)0,&g_212,&g_212,&l_689}},{{&l_689,&l_689,(void*)0,(void*)0,&g_212,&g_212},{&g_212,(void*)0,&l_689,&l_689,&l_689,&l_689},{&l_689,&l_689,&l_689,(void*)0,&l_689,&l_689},{&l_689,(void*)0,(void*)0,&l_689,&g_212,&l_689},{&g_212,&g_212,(void*)0,(void*)0,&l_689,&l_689}},{{&l_689,(void*)0,&g_212,&g_212,&l_689,&l_689},{&l_689,&g_212,&g_212,(void*)0,&g_212,&g_212},{&g_212,(void*)0,(void*)0,&g_212,&l_689,&l_689},{&g_212,&l_689,(void*)0,(void*)0,&l_689,&g_212},{&g_212,(void*)0,&g_212,&l_689,&g_212,&l_689}},{{&g_212,&l_689,&g_212,(void*)0,&g_212,&l_689},{&g_212,(void*)0,(void*)0,&l_689,&g_212,&l_689},{&g_212,&g_212,(void*)0,(void*)0,&g_212,&l_689},{&g_212,(void*)0,&l_689,&g_212,&g_212,&l_689},{&g_212,&g_212,&l_689,(void*)0,&g_212,&g_212}},{{&l_689,(void*)0,(void*)0,&g_212,&g_212,&l_689},{&l_689,&l_689,(void*)0,(void*)0,&g_212,&g_212},{&g_212,(void*)0,&l_689,&l_689,&l_689,&l_689},{&l_689,&l_689,&l_689,(void*)0,&l_689,&l_689},{&l_689,(void*)0,(void*)0,&l_689,&g_212,&l_689}}};
            int l_693[1][1][7] = {{{0x712698A9L,0x712698A9L,9L,0x712698A9L,0x712698A9L,9L,0x712698A9L}}};
            int i, j, k;
            l_693[0][0][3] |= (((*g_378) || ((g_212 = (l_691 = l_689)) == (void*)0)) >= (l_692[1][2][2] = 0xE6L));
        }
        if ((safe_add_func_uint16_t_u_u((((safe_rshift_func_int16_t_s_u(((**l_631) = (((safe_unary_minus_func_uint8_t_u(p_46)) , (-1L)) <= func_79((***g_551)))), (((*p_44) , (void*)0) != (void*)0))) <= l_485) != (l_592 &= l_485)), (*p_45))))
        {
            short *l_704 = &g_15;
            for (g_93 = 0; (g_93 > 11); ++g_93)
            {
                short *l_705 = &g_272[6];
                int l_708 = (-1L);
                l_590 &= ((safe_unary_minus_func_int16_t_s((safe_mod_func_int16_t_s_s((l_704 == ((**g_551) = l_705)), 0x7A16L)))) , (((*g_378) , func_79((safe_lshift_func_uint16_t_u_u(func_79((*g_14)), 1)))) || ((g_177 , l_708) != 0x8FD8193DL)));
            }
            return l_592;
        }
        else
        {
            int l_709 = (-5L);
            unsigned ***l_714 = &g_377;
            short ****l_715 = &g_551;
            int l_722 = 1L;
            if (l_709)
            {
                l_590 ^= (safe_sub_func_uint16_t_u_u(p_46, p_46));
            }
            else
            {
                unsigned l_712 = 0x4238CF56L;
                l_712 |= ((g_162 = p_46) , (!0xB13FFB5DL));
                (*g_673) = func_55(l_712, l_713[1][3], &l_590, (l_714 == (g_7[4][8][0] , (void*)0)), l_712);
            }
            (*g_673) = p_47;
        }
        if ((*l_723))
        {
            int l_725 = 0L;
            unsigned char l_736 = 0x80L;
            if (l_725)
            {
                unsigned short l_737 = 0x71B5L;
                l_592 &= (safe_sub_func_int8_t_s_s((safe_rshift_func_int8_t_s_s(((p_46 , ((safe_rshift_func_uint8_t_u_s(p_46, 0)) , 0L)) < (p_46 >= (l_725 , (((safe_sub_func_uint8_t_u_u((((((func_68((safe_rshift_func_int8_t_s_u(l_736, 0))) , ((l_736 || (((*l_535) &= (((p_46 & p_46) , p_46) <= (-4L))) ^ p_46)) , (*p_44))) >= (*l_723)) >= 0L) == l_737) ^ g_738[4]), l_725)) >= p_46) | p_46)))), 1)), g_175));
            }
            else
            {
                unsigned ***l_739 = &l_668;
                (*g_266) = (*g_266);
                (*g_673) = (*g_266);
                (*l_739) = &g_661;
            }
        }
        else
        {
            p_47 = p_47;
        }
    }
    else
    {
        int l_740 = 0x9FBE2B7DL;
        int l_741 = (-10L);
        l_740 = (l_741 &= l_740);
    }
    return p_46;
}







static int * func_49(int p_50, int * p_51, char p_52, short * p_53, int p_54)
{
    char l_206 = 0x63L;
    int l_211 = 3L;
    unsigned short l_230[9];
    short **l_231 = &g_180[3];
    unsigned char *l_243[6] = {&g_93,&g_93,&g_93,&g_93,&g_93,&g_93};
    char *l_279[8] = {&g_177,&g_7[0][6][0],&g_177,&g_7[0][6][0],&g_177,&g_7[0][6][0],&g_177,&g_7[0][6][0]};
    unsigned *l_284 = &g_139;
    unsigned l_287 = 0x3F59F7A6L;
    short *l_288 = &g_272[1];
    int *l_305 = (void*)0;
    int l_311[3][9] = {{0x7C01A6B6L,0x7C01A6B6L,(-1L),0x7C01A6B6L,0x7C01A6B6L,(-1L),0x7C01A6B6L,0x7C01A6B6L,(-1L)},{0L,0L,0xE3756379L,0L,0L,0xE3756379L,0L,0L,0xE3756379L},{0x7C01A6B6L,0x7C01A6B6L,(-1L),0x7C01A6B6L,0x7C01A6B6L,(-1L),0x7C01A6B6L,0x7C01A6B6L,(-1L)}};
    short l_324 = 0x8F6AL;
    unsigned short l_380 = 65527UL;
    unsigned short l_467 = 0xB443L;
    int *l_480 = (void*)0;
    int i, j;
    for (i = 0; i < 9; i++)
        l_230[i] = 0x25C9L;
lbl_289:
    for (g_82 = 2; (g_82 <= (-11)); g_82 = safe_sub_func_int32_t_s_s(g_82, 2))
    {
        int *l_199[10];
        unsigned short l_236 = 0x208BL;
        int i;
        for (i = 0; i < 10; i++)
            l_199[i] = (void*)0;
        for (g_90 = (-10); (g_90 >= 58); g_90++)
        {
            unsigned l_214 = 0xFE52CA10L;
            int **l_219 = &l_199[9];
            int l_223 = 0x6AAEE7DBL;
            int l_245[2][10][7] = {{{0x9AA3DB18L,0x005261B6L,0x53D33326L,0x8AE4827AL,(-1L),0x795880F0L,(-1L)},{0x0527F5A8L,0x005261B6L,1L,(-1L),0x9AA3DB18L,9L,(-1L)},{0xE2816CC0L,(-9L),0x3FD81BFAL,0L,1L,(-1L),1L},{8L,0xE44FFD43L,0xE44FFD43L,8L,0x6F15CA27L,0x90A0D858L,(-9L)},{(-7L),0xE2816CC0L,(-1L),9L,(-10L),0x5AC6F5D7L,0xA0F36B3FL},{(-1L),0x2D7B22F3L,0x3E30775BL,(-5L),0xC3E68B0BL,0x3876E539L,(-9L)},{0xF0F9C1C6L,0x3876E539L,(-5L),6L,0L,0x5AEAADFAL,1L},{0x005261B6L,(-10L),0xA0F36B3FL,3L,0x1AB118BCL,0x3E30775BL,(-1L)},{0x90A0D858L,9L,0xDC55A09BL,(-10L),(-10L),0xF0F9C1C6L,(-3L)},{8L,6L,0xA0F36B3FL,0x5AC6F5D7L,(-10L),9L,(-1L)}},{{(-1L),0x32388180L,1L,0L,0x0527F5A8L,6L,1L},{0xCB1D280DL,0xE2816CC0L,0xC0FDD523L,0xA0F36B3FL,0xC0FDD523L,0xE2816CC0L,0xCB1D280DL},{0x5AEAADFAL,0xC3E68B0BL,8L,0x09EE697CL,3L,0x6F15CA27L,3L},{0xC0FDD523L,0x5AEAADFAL,0x0527F5A8L,0xE44FFD43L,7L,(-1L),0x7BF1BFE3L},{0x1C866570L,(-1L),8L,8L,(-7L),0x2D7B22F3L,7L},{0xC3E68B0BL,1L,0xC0FDD523L,0x9AA3DB18L,(-1L),9L,0x1AB118BCL},{0x3876E539L,0x1AB118BCL,1L,0x5AEAADFAL,0x90A0D858L,(-4L),(-1L)},{0L,9L,0xA0F36B3FL,0x1C866570L,(-4L),(-1L),(-7L)},{0L,0L,(-1L),0x1AB118BCL,(-5L),0x90A0D858L,0x1C866570L},{0x3876E539L,0x8AE4827AL,0xB88BA211L,(-1L),0xC3E68B0BL,0xC3E68B0BL,(-1L)}}};
            int i, j, k;
        }
    }
    if (((safe_rshift_func_uint8_t_u_u((((!(safe_mul_func_uint8_t_u_u((p_50 , (&g_162 == (((p_52 = func_79(l_206)) > (safe_mod_func_int32_t_s_s((&l_211 == (void*)0), (((*l_288) ^= ((**l_231) |= (safe_lshift_func_int8_t_s_u((l_284 == (void*)0), (safe_mul_func_int8_t_s_s((l_206 , 0x71L), l_287)))))) , 1UL)))) , &g_162))), l_287))) , (void*)0) != p_51), 3)) ^ (*g_98)))
    {
        int *l_290 = &l_211;
        if (l_206)
            goto lbl_289;
        (*g_266) = l_290;
    }
    else
    {
        unsigned short l_304[8][1][6] = {{{6UL,0x6B98L,0x6B98L,6UL,65531UL,1UL}},{{1UL,6UL,65535UL,6UL,1UL,0xCB4CL}},{{6UL,1UL,0xCB4CL,65531UL,65535UL,1UL}},{{0xCB4CL,1UL,6UL,65535UL,6UL,1UL}},{{6UL,0xCB4CL,65531UL,1UL,1UL,65531UL}},{{6UL,6UL,1UL,65535UL,0x6B98L,65535UL}},{{0xCB4CL,6UL,0xCB4CL,65531UL,1UL,1UL}},{{1UL,0xCB4CL,0xCB4CL,1UL,6UL,65535UL}}};
        int l_323 = 0L;
        unsigned ***l_379 = &g_377;
        int *l_387 = &l_323;
        int **l_388 = &l_305;
        unsigned l_404 = 0xDA1DD340L;
        short ***l_426 = &l_231;
        short *l_440 = &g_272[7];
        int i, j, k;
        for (p_50 = 0; (p_50 <= 7); p_50 += 1)
        {
            unsigned *l_303[10][6][4] = {{{&g_139,&g_139,&g_175,&g_175},{&g_139,&g_139,&g_175,&g_175},{&g_139,&g_139,&g_175,&g_175},{&g_139,&g_139,&g_175,&g_175},{&g_139,&g_139,&g_175,&g_175},{&g_139,&g_139,&g_175,&g_175}},{{&g_139,&g_139,&g_175,&g_175},{&g_139,&g_139,&g_175,&g_175},{&g_139,&g_139,&g_175,&g_175},{&g_139,&g_139,&g_175,&g_175},{&g_139,&g_139,&g_175,&g_175},{&g_139,&g_139,&g_175,&g_175}},{{&g_139,&g_139,&g_175,&g_175},{&g_139,&g_139,&g_175,&g_175},{&g_139,&g_139,&g_175,&g_175},{&g_139,&g_139,&g_175,&g_175},{&g_139,&g_139,&g_175,&g_175},{&g_139,&g_139,&g_175,&g_175}},{{&g_139,&g_139,&g_175,&g_175},{&g_139,&g_139,&g_175,&g_175},{&g_139,&g_139,&g_175,&g_175},{&g_139,&g_139,&g_175,&g_175},{&g_139,&g_139,&g_175,&g_175},{&g_139,&g_139,&g_175,&g_175}},{{&g_139,&g_139,&g_175,&g_175},{&g_139,&g_139,&g_175,&g_175},{&g_139,&g_139,&g_175,&g_175},{&g_139,&g_139,&g_175,&g_175},{&g_139,&g_139,&g_175,&g_175},{&g_139,&g_139,&g_175,&g_175}},{{&g_139,&g_139,&g_175,&g_175},{&g_139,&g_139,&g_175,&g_175},{&g_139,&g_139,&g_175,&g_175},{&g_139,&g_139,&g_175,&g_175},{&g_139,&g_139,&g_175,&g_175},{&g_139,&g_139,&g_175,&g_175}},{{&g_139,&g_139,&g_175,&g_175},{&g_139,&g_139,&g_175,&g_175},{&g_139,&g_139,&g_175,&g_175},{&g_139,&g_139,&g_175,&g_175},{&g_139,&g_139,&g_175,&g_175},{&g_139,&g_139,&g_175,&g_175}},{{&g_139,&g_139,&g_175,&g_175},{&g_139,&g_139,&g_175,&g_175},{&g_139,&g_139,&g_175,&g_175},{&g_139,&g_139,&g_175,&g_175},{&g_139,&g_139,&g_175,&g_175},{&g_139,&g_139,&g_175,&g_175}},{{&g_139,&g_139,&g_175,&g_175},{&g_139,&g_139,&g_175,&g_175},{&g_139,&g_139,&g_175,&g_175},{&g_139,&g_139,&g_175,&g_175},{&g_139,&g_139,&g_175,&g_175},{&g_139,&g_139,&g_175,&g_175}},{{&g_139,&g_139,&g_175,&g_175},{&g_139,&g_139,&g_175,&g_175},{&g_139,&g_139,&g_175,&g_175},{&g_139,&g_139,&g_175,&g_175},{&g_139,&g_139,&g_175,&g_175},{&g_139,&g_139,&g_175,&g_175}}};
            short l_306 = 0x3D8DL;
            int l_307 = (-2L);
            int l_332 = 0xC78BC886L;
            int *l_376 = &l_311[2][6];
            int i, j, k;
        }
        (*l_379) = (((p_50 <= p_52) != func_79((((void*)0 != &l_243[5]) ^ (*p_53)))) , g_377);
        (*g_178) = (((l_380 && (~((((p_51 == (void*)0) >= (safe_mod_func_int32_t_s_s((*p_51), (safe_mod_func_uint8_t_u_u((safe_sub_func_int32_t_s_s(((func_68(g_264[2]) , (*g_266)) != ((*l_388) = l_387)), l_311[2][6])), p_54))))) , (void*)0) != &g_213))) || p_52) , (-1L));
        if ((*p_51))
        {
            unsigned short *l_398 = (void*)0;
            unsigned short *l_425 = &g_160;
            int l_441 = 0L;
            int *l_470 = &g_368;
            int *l_471[5][8][4] = {{{&l_311[0][3],&g_22,&l_323,&l_311[0][3]},{&g_95[3][4][1],&g_368,&g_22,&g_95[3][4][1]},{&g_22,&g_95[3][4][1],&g_22,&l_311[1][2]},{&g_22,&l_323,(void*)0,&l_211},{&g_42,&l_311[2][6],(void*)0,&g_95[3][4][1]},{&g_22,&l_323,&l_211,&g_82},{&l_211,&g_42,&g_82,&g_82},{&g_368,&g_368,&g_95[2][4][1],&g_95[3][4][1]}},{{&g_22,&g_82,&l_211,&g_22},{&g_95[3][4][1],&g_95[3][4][1],(void*)0,&l_211},{&g_95[3][4][1],&g_95[3][4][1],&l_323,&g_22},{&g_95[3][4][1],&g_82,&g_22,&g_95[3][4][1]},{&l_311[0][7],&g_368,&g_95[3][4][1],&g_82},{&g_82,&g_42,&g_22,&g_82},{&g_95[3][4][1],&l_323,&g_22,&g_95[3][4][1]},{&g_22,&l_311[2][6],&l_311[0][7],&l_211}},{{&g_95[3][4][1],&l_323,&g_82,&l_323},{&g_42,&l_311[0][3],&l_211,&g_95[3][4][1]},{&g_42,&g_22,&l_211,&g_22},{&g_368,&g_42,&g_22,&g_368},{&g_368,&l_211,&l_211,&g_95[3][4][1]},{&g_42,&g_368,&l_211,&l_323},{&g_42,&g_95[3][4][1],&g_82,&g_368},{&g_95[3][4][1],&g_22,&l_311[0][7],&g_22}},{{&g_22,&g_368,&g_22,&l_311[0][7]},{&g_95[3][4][1],&g_368,&g_22,&g_368},{&g_82,&g_95[3][4][1],&g_95[3][4][1],&g_82},{&l_311[0][7],&g_95[3][4][1],(void*)0,(void*)0},{&l_311[0][7],&g_22,&g_95[3][4][1],&g_42},{&l_311[0][7],&l_323,&g_95[2][4][1],&g_42},{&l_211,&g_22,&g_82,(void*)0},{&g_22,&g_95[3][4][1],&g_22,&g_22}},{{(void*)0,&l_211,&g_22,&l_323},{&g_82,(void*)0,&l_323,&g_22},{&g_22,&l_323,&l_311[1][2],&g_95[3][4][1]},{&l_311[0][3],&l_323,&g_95[2][4][1],(void*)0},{(void*)0,&l_311[0][7],(void*)0,&g_22},{&l_311[0][7],&l_323,&g_368,&g_82},{&g_82,&g_82,&l_211,&l_323},{&g_95[3][1][3],&l_311[0][3],&l_211,&g_95[3][1][3]}}};
            int i, j, k;
            for (g_93 = 0; (g_93 >= 42); g_93++)
            {
                unsigned short l_405 = 0UL;
                char l_408[5][5][6] = {{{0x04L,1L,1L,0x04L,0x51L,1L},{1L,0x04L,0L,0x04L,1L,0x3DL},{0x04L,1L,0x3DL,0x3DL,1L,0x04L},{1L,0x04L,0x51L,1L,0x51L,0x04L},{0x51L,1L,0x3DL,0L,0L,0x3DL}},{{0x51L,0x51L,0L,1L,5L,1L},{1L,0x51L,1L,0x3DL,0L,0L},{0x04L,1L,0x04L,5L,0L,1L},{1L,5L,0x3DL,5L,1L,1L},{5L,1L,1L,1L,1L,5L}},{{0x04L,5L,0L,1L,0L,5L},{0L,0x04L,1L,0x3DL,0x3DL,1L},{0L,0L,0x3DL,1L,0x51L,1L},{0x04L,0L,0x04L,1L,0x3DL,0x3DL},{5L,0x04L,0x04L,5L,0L,1L}},{{1L,5L,0x3DL,5L,1L,1L},{5L,1L,1L,1L,1L,5L},{0x04L,5L,0L,1L,0L,5L},{0L,0x04L,1L,0x3DL,0x3DL,1L},{0L,0L,0x3DL,1L,0x51L,1L}},{{0x04L,0L,0x04L,1L,0x3DL,0x3DL},{5L,0x04L,0x04L,5L,0L,1L},{1L,5L,0x3DL,5L,1L,1L},{5L,0x3DL,0L,0L,0x3DL,1L},{1L,1L,5L,0x3DL,5L,1L}}};
                unsigned ***l_411 = &g_377;
                int i, j, k;
                for (g_116 = (-8); (g_116 < 5); ++g_116)
                {
                    short ***l_393 = &l_231;
                    int l_403 = 0x4255D528L;
                    (**g_266) = (((((*l_393) = &p_53) != (void*)0) && (-2L)) == ((safe_mul_func_int8_t_s_s(((safe_mul_func_int16_t_s_s((l_398 == ((!(safe_sub_func_uint32_t_u_u(p_50, (&g_272[7] != (((safe_mul_func_int8_t_s_s(func_79((*p_53)), g_124)) , l_403) , (void*)0))))) , (void*)0)), (*g_14))) || l_404), l_403)) , l_405));
                }
                (*g_178) = (((!func_79((((safe_mul_func_int8_t_s_s(l_408[3][2][3], (safe_lshift_func_uint16_t_u_s(((void*)0 != l_411), (((g_418[1][0] ^= (safe_mod_func_uint32_t_u_u(((-1L) == ((safe_mod_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s((~0x7979L), 5)), (p_52 |= g_7[4][9][1]))) && (p_52 >= (func_79((0x47L ^ (p_52 >= 0x75L))) > p_50)))), 0xB78395CCL))) == 0xF2L) >= 0L))))) < (-1L)) , 1L))) ^ 0x7876L) > l_408[4][1][1]);
            }
            (*g_178) = (0xDE910B26L || (safe_rshift_func_uint8_t_u_u((((((safe_rshift_func_int16_t_s_s(((((void*)0 != (*l_379)) > l_287) > p_50), 2)) >= p_52) & ((*l_425) = func_79((*p_53)))) | ((void*)0 == l_426)) == 1L), p_52)));
            for (g_135 = 0; (g_135 < 9); ++g_135)
            {
                unsigned short l_429 = 0x03E6L;
                int *l_430 = &g_82;
                int l_431 = (-1L);
                short **l_439 = &g_180[4];
                int ***l_448 = &g_266;
            }
            for (l_467 = 0; (l_467 == 15); l_467++)
            {
                int *l_474 = (void*)0;
                for (p_54 = 0; (p_54 <= 2); p_54 += 1)
                {
                    for (g_190 = 0; (g_190 <= 2); g_190 += 1)
                    {
                        return l_474;
                    }
                    if ((*p_51))
                        continue;
                }
            }
        }
        else
        {
            char l_477 = (-10L);
            (*g_266) = func_55((safe_add_func_uint16_t_u_u(((func_68((((((l_477 && ((&g_98 != (void*)0) != (p_52 != func_68(g_418[1][0])))) , (g_82 >= ((*p_53) == (*p_53)))) <= g_190) , 0xA70AA734L) , g_82)) >= 0x2A4767FBL) == p_54), (*l_387))), l_477, (*g_266), g_175, (*l_387));
            (*l_387) |= (safe_sub_func_uint32_t_u_u(p_50, 0x949E6192L));
            p_50 = 0xF302C0D9L;
        }
    }
    return l_480;
}







static int * func_55(short p_56, short p_57, int * p_58, unsigned char p_59, int p_60)
{
    int *l_122[1];
    int **l_123 = &g_98;
    unsigned char *l_152 = &g_93;
    unsigned char *l_154[10][2];
    unsigned char **l_153 = &l_154[1][0];
    int i, j;
    for (i = 0; i < 1; i++)
        l_122[i] = &g_95[3][4][1];
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 2; j++)
            l_154[i][j] = &g_93;
    }
    p_58 = ((*l_123) = l_122[0]);
    for (g_82 = 0; (g_82 >= 0); g_82 -= 1)
    {
        int l_134 = 0x4EEC52D1L;
        short *l_136[9][8];
        unsigned char *l_150 = &g_93;
        int *l_194 = &g_42;
        int i, j;
        for (i = 0; i < 9; i++)
        {
            for (j = 0; j < 8; j++)
                l_136[i][j] = &g_124;
        }
        g_124 |= (*g_98);
        for (p_60 = 3; (p_60 >= 0); p_60 -= 1)
        {
            unsigned short *l_125 = (void*)0;
            unsigned short *l_126 = &g_90;
            unsigned char *l_137 = &g_93;
            unsigned *l_138 = &g_139;
            unsigned char **l_151[5][8][6] = {{{&l_150,&l_137,&l_150,&l_150,&l_150,&l_150},{&l_137,&l_137,&l_150,&l_137,&l_137,&l_150},{&l_137,&l_137,&l_150,&l_150,&l_137,&l_150},{&l_137,&l_137,&l_150,(void*)0,&l_137,&l_150},{&l_150,(void*)0,&l_150,&l_137,&l_137,&l_150},{&l_137,&l_137,&l_150,&l_137,&l_137,&l_150},{&l_137,&l_137,&l_150,&l_137,(void*)0,&l_150},{(void*)0,&l_150,&l_150,&l_137,&l_150,&l_150}},{{&l_137,&l_150,&l_150,&l_137,&l_137,&l_150},{&l_150,&l_137,&l_150,&l_150,&l_150,&l_150},{&l_137,&l_137,&l_150,&l_137,&l_137,&l_150},{&l_137,&l_137,&l_150,&l_150,&l_137,&l_150},{&l_137,&l_137,&l_150,(void*)0,&l_137,&l_150},{&l_150,(void*)0,&l_150,&l_137,&l_137,&l_150},{&l_137,&l_137,&l_137,&l_137,&l_150,&l_137},{&l_137,(void*)0,&l_137,&l_137,&l_150,&l_137}},{{&l_150,&l_137,&l_137,(void*)0,&l_137,&l_137},{(void*)0,&l_137,&l_137,&l_137,&l_137,&l_137},{&l_137,&l_150,&l_137,&l_137,&l_137,&l_137},{&l_137,&l_137,&l_137,&l_137,&l_137,&l_137},{&l_137,&l_137,&l_137,&l_137,(void*)0,&l_137},{&l_137,&l_137,&l_137,&l_150,&l_137,&l_137},{&l_137,&l_150,&l_137,&l_150,&l_137,&l_137},{&l_150,&l_137,&l_137,&l_137,&l_150,&l_137}},{{&l_137,(void*)0,&l_137,&l_137,&l_150,&l_137},{&l_150,&l_137,&l_137,(void*)0,&l_137,&l_137},{(void*)0,&l_137,&l_137,&l_137,&l_137,&l_137},{&l_137,&l_150,&l_137,&l_137,&l_137,&l_137},{&l_137,&l_137,&l_137,&l_137,&l_137,&l_137},{&l_137,&l_137,&l_137,&l_137,(void*)0,&l_137},{&l_150,(void*)0,(void*)0,&l_150,&l_137,(void*)0},{&l_137,&l_150,&l_150,&l_137,&l_150,(void*)0}},{{&l_137,&l_150,(void*)0,&l_150,&l_137,&l_150},{&l_137,(void*)0,(void*)0,&l_137,&l_150,(void*)0},{&l_150,&l_137,&l_150,(void*)0,&l_137,(void*)0},{(void*)0,&l_137,(void*)0,&l_137,(void*)0,&l_150},{&l_137,&l_137,(void*)0,&l_137,&l_137,(void*)0},{&l_137,&l_137,&l_150,(void*)0,&l_137,(void*)0},{(void*)0,&l_137,(void*)0,&l_137,(void*)0,&l_150},{&l_150,(void*)0,(void*)0,&l_150,&l_137,(void*)0}}};
            int *l_159 = &g_111;
            unsigned l_161 = 9UL;
            int l_186[7] = {0x75DABC1DL,0x75DABC1DL,1L,0x75DABC1DL,0x75DABC1DL,1L,0x75DABC1DL};
            int i, j, k;
            (*p_58) = (((*l_126) = 8UL) , (((((*l_138) |= (safe_lshift_func_uint8_t_u_s(((*l_137) = ((safe_sub_func_int32_t_s_s((((~((((((g_133[8][6][1] &= (safe_lshift_func_uint8_t_u_u(g_7[4][8][0], 0))) | l_134) || (*p_58)) , 7UL) & p_57) <= (g_135 = 0x6307DCF4L))) , l_136[2][7]) == l_125), 0x8BD33210L)) | 0xBFD9FC31L)), 7))) & 0xE21F576CL) == 4UL) <= 0x6333L));
            l_122[g_82] = (((safe_mod_func_int8_t_s_s((0x70L || (safe_lshift_func_uint16_t_u_u(((safe_mul_func_int8_t_s_s((((safe_lshift_func_uint16_t_u_s(((*l_126) = (+(p_60 && g_22))), 11)) , ((l_161 = ((*p_58) = (g_160 &= ((safe_add_func_uint32_t_u_u(g_95[0][2][4], ((((l_152 = l_150) == ((((l_153 == &l_154[1][0]) | (p_57 & (p_56 = (safe_add_func_int8_t_s_s((safe_sub_func_int32_t_s_s((((*l_159) = ((((g_116 &= (*g_14)) && (**l_123)) || p_56) , 0x15947182L)) , (*p_58)), 0L)), p_60))))) ^ 0x25B7F872L) , (void*)0)) <= p_60) && (*g_14)))) <= p_60)))) , l_159)) == &g_22), p_60)) > p_60), 13))), g_124)) >= p_57) , &g_22);
            for (g_116 = 0; (g_116 <= 3); g_116 += 1)
            {
                char *l_176 = &g_177;
                int i, j, k;
                g_162 ^= (g_95[g_116][(g_82 + 1)][(g_82 + 5)] = (*p_58));
                for (g_139 = (-16); (g_139 == 26); ++g_139)
                {
                }
            }
        }
    }
    return &g_22;
}







static short * func_61(unsigned char p_62, short * p_63, short p_64, char p_65)
{
    int *l_118 = (void*)0;
    int *l_119 = &g_82;
    (*l_119) |= 0x8DBD8298L;
    return &g_116;
}







static unsigned func_68(char p_69)
{
    char l_72 = (-2L);
    unsigned short *l_89 = &g_90;
    int l_91 = 0x6C3A74F5L;
    unsigned char *l_92 = &g_93;
    int *l_94 = &g_95[3][4][1];
    int **l_96 = (void*)0;
    int **l_97[3];
    unsigned short l_114 = 0xAEB7L;
    short *l_115 = &g_116;
    unsigned l_117[8];
    int i;
    for (i = 0; i < 3; i++)
        l_97[i] = &l_94;
    for (i = 0; i < 8; i++)
        l_117[i] = 0x287126A3L;
    (*l_94) |= (safe_lshift_func_uint8_t_u_u(p_69, (l_72 & (((safe_lshift_func_uint8_t_u_u(((*l_92) = (safe_rshift_func_int8_t_s_u((safe_mul_func_uint16_t_u_u(((func_79(l_72) & l_72) && (l_91 = ((0L != (((safe_add_func_int8_t_s_s(((safe_sub_func_int8_t_s_s(((((l_72 != ((l_72 >= (safe_mod_func_uint16_t_u_u(((*l_89) = l_72), (*g_14)))) < g_22)) < p_69) | 0x2EL) <= p_69), 2L)) >= 0x3B7C1F66L), 0x0CL)) , 0L) , 255UL)) , l_72))), p_69)), 3))), l_72)) != 0x52566A56L) <= p_69))));
    g_98 = &l_91;
    (*l_94) = 0xDED4E1BEL;
    (*l_94) = (0xA94A57C3L <= ((safe_add_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u((safe_sub_func_int32_t_s_s((0xE7B382E3L || func_79(((*l_115) = ((g_7[4][8][0] , ((*g_98) & (safe_add_func_uint32_t_u_u((safe_lshift_func_int8_t_s_s(((safe_rshift_func_uint16_t_u_s((func_79((g_111 = (-1L))) & (safe_mod_func_uint16_t_u_u((((*l_94) != p_69) , 0x1FAEL), p_69))), (*g_14))) <= 1L), 4)), l_114)))) != p_69)))), l_117[4])), (-1L))), p_69)) <= 0xF243A456L));
    return g_7[4][8][0];
}







static unsigned short func_79(short p_80)
{
    int *l_81 = &g_82;
    (*l_81) = p_80;
    return p_80;
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_7[i][j][k], "g_7[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_11, "g_11", print_hash_value);
    transparent_crc(g_15, "g_15", print_hash_value);
    transparent_crc(g_22, "g_22", print_hash_value);
    transparent_crc(g_42, "g_42", print_hash_value);
    transparent_crc(g_82, "g_82", print_hash_value);
    transparent_crc(g_90, "g_90", print_hash_value);
    transparent_crc(g_93, "g_93", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_95[i][j][k], "g_95[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_111, "g_111", print_hash_value);
    transparent_crc(g_116, "g_116", print_hash_value);
    transparent_crc(g_124, "g_124", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_133[i][j][k], "g_133[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_135, "g_135", print_hash_value);
    transparent_crc(g_139, "g_139", print_hash_value);
    transparent_crc(g_160, "g_160", print_hash_value);
    transparent_crc(g_162, "g_162", print_hash_value);
    transparent_crc(g_175, "g_175", print_hash_value);
    transparent_crc(g_177, "g_177", print_hash_value);
    transparent_crc(g_190, "g_190", print_hash_value);
    transparent_crc(g_253, "g_253", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_264[i], "g_264[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_272[i], "g_272[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_328, "g_328", print_hash_value);
    transparent_crc(g_368, "g_368", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_418[i][j], "g_418[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_595, "g_595", print_hash_value);
    transparent_crc(g_633, "g_633", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_676[i][j][k], "g_676[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_738[i], "g_738[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_743, "g_743", print_hash_value);
    transparent_crc(g_879, "g_879", print_hash_value);
    transparent_crc(g_897, "g_897", print_hash_value);
    transparent_crc(g_1023, "g_1023", print_hash_value);
    transparent_crc(g_1200, "g_1200", print_hash_value);
    transparent_crc(g_1557, "g_1557", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
