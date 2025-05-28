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
   unsigned short f1;
};


static unsigned char g_2[9] = {255UL,0x2BL,255UL,255UL,0x2BL,255UL,255UL,0x2BL,255UL};
static int g_3 = 0x02D149FEL;
static volatile int g_4 = (-1L);
static volatile int g_5 = (-1L);
static volatile int g_6 = 0x6B6EB6B9L;
static volatile int g_7 = 1L;
static int g_8 = (-1L);
static int g_62[5] = {1L,1L,1L,1L,1L};
static char g_79 = (-3L);
static short g_80[7][7] = {{(-7L),(-7L),(-8L),0x3F14L,(-8L),(-7L),(-7L)},{(-7L),0x3D5EL,(-5L),0x3D5EL,(-7L),(-7L),0x3D5EL},{0xA97CL,1L,0xA97CL,(-8L),(-8L),0xA97CL,1L},{0x3D5EL,0xC99CL,(-5L),(-5L),0xC99CL,0x3D5EL,0xC99CL},{0xA97CL,(-8L),(-8L),0xA97CL,0x3F14L,(-8L),(-7L)},{0xC99CL,0xC99CL,(-7L),0xCE07L,(-7L),0xC99CL,0xC99CL},{1L,(-7L),0xA97CL,(-7L),1L,1L,(-7L)}};
static unsigned g_87 = 4294967295UL;
static struct S0 g_94 = {1L,65527UL};
static int g_98 = 0xBB8780ECL;
static int g_184[5][9] = {{0L,0xBE3635EDL,0xE6428253L,0L,0xBE4E106FL,0x4CAB2A87L,1L,0x6F1915A3L,0xE6428253L},{1L,0xBE4E106FL,0xD0201380L,0x4CAB2A87L,0x1364F4DCL,0x4CAB2A87L,0xD0201380L,0xBE4E106FL,1L},{0xE6428253L,0x6F1915A3L,1L,0x4CAB2A87L,0xBE4E106FL,0L,0xE6428253L,0xBE3635EDL,0L},{0x4CAB2A87L,0x6F1915A3L,0xD0201380L,0L,(-1L),8L,8L,(-1L),0L},{0xE6428253L,0xBE4E106FL,0xE6428253L,8L,0xF40CEA4DL,0xD0201380L,8L,0xBE3635EDL,1L}};
static unsigned char g_193 = 253UL;
static int g_263 = 0xDCCD9286L;
static short g_270 = 0x22F4L;
static short g_339 = 0x24E5L;
static unsigned g_380[6][3] = {{1UL,0xEEFB9554L,0xEEFB9554L},{0xC23C86C2L,0xC12BE62CL,0xC23C86C2L},{1UL,1UL,0xEEFB9554L},{4294967293UL,0xC12BE62CL,4294967293UL},{1UL,0xEEFB9554L,0xEEFB9554L},{0xC23C86C2L,0xC12BE62CL,0xC23C86C2L}};
static struct S0 g_383 = {-7L,0x2607L};
static short g_479 = 0xC4D0L;
static const int g_494 = (-1L);
static unsigned g_505 = 4294967288UL;
static char g_535 = 1L;



static unsigned func_1(void);
static int func_9(unsigned short p_10, short p_11, int p_12);
static int func_13(const struct S0 p_14);
static struct S0 func_15(short p_16);
static const int func_18(char p_19, unsigned p_20, unsigned p_21, unsigned char p_22, struct S0 p_23);
static short func_26(int p_27, const unsigned p_28);
static unsigned char func_31(const unsigned p_32, struct S0 p_33, short p_34);
static char func_35(int p_36);
static struct S0 func_40(const unsigned p_41, int p_42, unsigned p_43);
static unsigned func_46(int p_47, unsigned char p_48, unsigned char p_49, int p_50, unsigned char p_51);
static unsigned func_1(void)
{
    unsigned char l_560 = 0x43L;
    for (g_3 = 0; (g_3 <= 8); g_3 += 1)
    {
        unsigned char l_17 = 255UL;
        int i;
        for (g_8 = 2; (g_8 <= 8); g_8 += 1)
        {
            int l_506 = 0x029F9DC9L;
            int i;
            l_560 = func_9((((g_2[g_8] = 255UL) ^ (func_13(func_15(l_17)) & (((0x412FL ^ (g_505 = ((l_17 == g_8) >= l_17))) == (l_506 = 247UL)) | g_3))) && 9UL), l_17, g_3);
        }
        if (g_2[g_3])
            break;
    }
    return g_535;
}







static int func_9(unsigned short p_10, short p_11, int p_12)
{
    unsigned short l_512 = 1UL;
    int l_524[5][7] = {{0x52280851L,0x52280851L,0x52280851L,0x52280851L,0x52280851L,0x52280851L,0x52280851L},{3L,3L,3L,3L,3L,3L,3L},{0x52280851L,0x52280851L,0x52280851L,0x52280851L,0x52280851L,0x52280851L,0x52280851L},{3L,3L,3L,3L,3L,3L,3L},{0x52280851L,0x52280851L,0x52280851L,0x52280851L,0x52280851L,0x52280851L,0x52280851L}};
    int l_532 = 0xE311C17CL;
    int l_536 = 0x211B0DEFL;
    struct S0 l_543 = {0x195220DCL,65535UL};
    const char l_559 = 0x0CL;
    int i, j;
    for (g_98 = 7; (g_98 >= 0); g_98 -= 1)
    {
        struct S0 l_507[9][3][6] = {{{{0L,0xAB3BL},{8L,1UL},{0xA6E6A6A1L,0UL},{-1L,0x853BL},{2L,0UL},{0xE322E201L,0x5E10L}},{{-9L,7UL},{0xD9A10FABL,65535UL},{0x6606CCB5L,1UL},{1L,0UL},{-6L,0x9C44L},{1L,0UL}},{{0x6606CCB5L,1UL},{0x21300CB9L,2UL},{0x6606CCB5L,1UL},{0x5928F8E1L,1UL},{0L,0xAB3BL},{0xE322E201L,0x5E10L}}},{{{-1L,4UL},{0x5928F8E1L,1UL},{0xA6E6A6A1L,0UL},{0x1CE8F43FL,0x1D58L},{8L,0x361AL},{0xD8CD2DE1L,1UL}},{{0xB041698DL,0x8074L},{0xD8CD2DE1L,1UL},{8L,0x361AL},{0x1CE8F43FL,0x1D58L},{0xA6E6A6A1L,0UL},{0x5928F8E1L,1UL}},{{-1L,4UL},{0xE322E201L,0x5E10L},{0L,0xAB3BL},{0x5928F8E1L,1UL},{0x6606CCB5L,1UL},{0x21300CB9L,2UL}}},{{{0x6606CCB5L,1UL},{1L,0UL},{-6L,0x9C44L},{1L,0UL},{0x6606CCB5L,1UL},{0xD9A10FABL,65535UL}},{{-9L,7UL},{0xE322E201L,0x5E10L},{2L,0UL},{-1L,0x853BL},{0xA6E6A6A1L,0UL},{8L,1UL}},{{0L,0xAB3BL},{0xD8CD2DE1L,1UL},{0x3D9BAE1AL,65526UL},{0xE322E201L,0x5E10L},{8L,0x361AL},{8L,1UL}}},{{{2L,0xC5C7L},{0x5928F8E1L,1UL},{2L,0UL},{0x7878195AL,0x9389L},{0L,0xAB3BL},{0xD9A10FABL,65535UL}},{{8L,0x361AL},{0x21300CB9L,2UL},{-6L,0x9C44L},{8L,1UL},{-6L,0x9C44L},{0x21300CB9L,2UL}},{{8L,0x361AL},{0xD9A10FABL,65535UL},{0L,0xAB3BL},{0x7878195AL,0x9389L},{2L,0UL},{0x5928F8E1L,1UL}}},{{{2L,0xC5C7L},{8L,1UL},{8L,0x361AL},{0xE322E201L,0x5E10L},{-3L,65533UL},{0xD9A10FABL,65535UL}},{{-6L,0x9C44L},{0x03017559L,0UL},{-1L,4UL},{0xE322E201L,0x5E10L},{0L,0xAB3BL},{0x5928F8E1L,1UL}},{{0x6606CCB5L,1UL},{0x1CE8F43FL,0x1D58L},{2L,0xC5C7L},{8L,65529UL},{0xA6E6A6A1L,0UL},{8L,65529UL}}},{{{2L,0xC5C7L},{0x7878195AL,0x9389L},{2L,0xC5C7L},{0xD8CD2DE1L,1UL},{-6L,0x9C44L},{0x5928F8E1L,1UL}},{{-9L,7UL},{0xD8CD2DE1L,1UL},{-1L,4UL},{0L,0xD4B1L},{0x95ED0CD5L,65533UL},{0xD9A10FABL,65535UL}},{{2L,0UL},{0xD9A10FABL,65535UL},{0x95ED0CD5L,65533UL},{0L,0xD4B1L},{-1L,4UL},{0xD8CD2DE1L,1UL}}},{{{-9L,7UL},{0x5928F8E1L,1UL},{-6L,0x9C44L},{0xD8CD2DE1L,1UL},{2L,0xC5C7L},{0x7878195AL,0x9389L}},{{2L,0xC5C7L},{8L,65529UL},{0xA6E6A6A1L,0UL},{8L,65529UL},{2L,0xC5C7L},{0x1CE8F43FL,0x1D58L}},{{0x6606CCB5L,1UL},{0x5928F8E1L,1UL},{0L,0xAB3BL},{0xE322E201L,0x5E10L},{-1L,4UL},{0x03017559L,0UL}}},{{{-6L,0x9C44L},{0xD9A10FABL,65535UL},{-3L,65533UL},{0x5928F8E1L,1UL},{0x95ED0CD5L,65533UL},{0x03017559L,0UL}},{{0x3D9BAE1AL,65526UL},{0xD8CD2DE1L,1UL},{0L,0xAB3BL},{-1L,0x853BL},{-6L,0x9C44L},{0x1CE8F43FL,0x1D58L}},{{0x95ED0CD5L,65533UL},{0x7878195AL,0x9389L},{0xA6E6A6A1L,0UL},{0x03017559L,0UL},{0xA6E6A6A1L,0UL},{0x7878195AL,0x9389L}}},{{{0x95ED0CD5L,65533UL},{0x1CE8F43FL,0x1D58L},{-6L,0x9C44L},{-1L,0x853BL},{0L,0xAB3BL},{0xD8CD2DE1L,1UL}},{{0x3D9BAE1AL,65526UL},{0x03017559L,0UL},{0x95ED0CD5L,65533UL},{0x5928F8E1L,1UL},{-3L,65533UL},{0xD9A10FABL,65535UL}},{{-6L,0x9C44L},{0x03017559L,0UL},{-1L,4UL},{0xE322E201L,0x5E10L},{0L,0xAB3BL},{0x5928F8E1L,1UL}}}};
        char l_551 = 0x72L;
        int i, j, k;
        g_383 = l_507[2][0][1];
        for (p_12 = 8; (p_12 >= 0); p_12 -= 1)
        {
            int l_517[4][1] = {{0xD0C369FCL},{(-7L)},{0xD0C369FCL},{(-7L)}};
            struct S0 l_525 = {0x0892A1AFL,0x1860L};
            int i, j;
            for (g_505 = 0; (g_505 <= 8); g_505 += 1)
            {
                unsigned short l_516 = 65534UL;
                if ((safe_sub_func_uint32_t_u_u((g_380[2][2] = (safe_lshift_func_uint8_t_u_u(l_512, func_46(((p_10 != 65535UL) == (g_87 < (safe_unary_minus_func_uint32_t_u((l_516 >= g_98))))), p_12, l_517[0][0], (safe_add_func_uint16_t_u_u(g_6, l_512)), g_270)))), g_184[4][3])))
                {
                    unsigned l_520 = 0x2FBA7ADAL;
                    l_517[0][0] = l_520;
                }
                else
                {
                    unsigned l_523 = 2UL;
                    l_524[0][2] = (safe_lshift_func_uint16_t_u_u(func_46(l_523, l_517[2][0], (l_516 > g_98), g_62[1], p_12), 0));
                }
                g_94 = l_525;
            }
            g_6 = l_507[2][0][1].f1;
        }
        for (g_94.f1 = 3; (g_94.f1 <= 8); g_94.f1 += 1)
        {
            struct S0 l_526 = {0x29EF7A29L,0x46D7L};
            for (g_270 = 0; (g_270 <= 8); g_270 += 1)
            {
                unsigned l_527 = 0UL;
                int l_542 = (-1L);
                l_526 = l_507[2][0][1];
                if ((l_527 == (g_479 = l_507[2][0][1].f0)))
                {
                    l_507[2][0][1].f0 = (safe_lshift_func_uint8_t_u_u(0UL, 2));
                    for (g_94.f0 = 0; (g_94.f0 <= 4); g_94.f0 += 1)
                    {
                        int i, j;
                        g_383.f0 = func_46(l_524[g_94.f0][(g_94.f0 + 2)], l_524[g_94.f0][(g_94.f0 + 2)], g_479, p_12, func_46(p_10, (safe_rshift_func_uint16_t_u_s((l_532 || ((p_12 & p_11) && (safe_add_func_uint16_t_u_u((g_535 = (g_193 < 0xF2253683L)), g_380[4][1])))), l_536)), p_11, l_526.f0, g_193));
                    }
                    g_383 = g_383;
                }
                else
                {
                    int l_541[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_541[i] = 0L;
                    l_542 = (safe_lshift_func_int8_t_s_u(p_11, (((safe_rshift_func_int8_t_s_s(p_12, (l_507[2][0][1].f0 = (func_46(((0x99L | (p_12 & 0x52L)) != l_541[1]), l_512, g_380[3][0], l_532, g_263) ^ 65535UL)))) < p_11) == p_11)));
                    for (l_532 = 8; (l_532 >= 3); l_532 -= 1)
                    {
                        l_543 = l_543;
                    }
                    for (g_79 = 8; (g_79 >= 0); g_79 -= 1)
                    {
                        unsigned l_544 = 1UL;
                        int l_545[5];
                        int i;
                        for (i = 0; i < 5; i++)
                            l_545[i] = 0x19C95952L;
                        g_383 = g_383;
                        g_383 = g_94;
                        if (l_544)
                            break;
                        l_543.f0 = (p_12 == (((p_11 | (p_11 <= (0x3808C54DL | (p_11 != (0x45347FB7L || (l_524[0][2] = (l_545[3] = 4294967289UL))))))) | ((((g_87 = (l_544 | p_11)) != 0x18113695L) == 0xB4L) ^ 0x5F6DF905L)) && p_11));
                    }
                    l_541[1] = g_79;
                }
                l_526 = g_94;
            }
            for (l_526.f1 = 0; (l_526.f1 <= 8); l_526.f1 += 1)
            {
                int l_546[7] = {(-3L),(-7L),(-3L),(-3L),(-7L),(-3L),(-3L)};
                struct S0 l_548[2] = {{0x94F13510L,65535UL},{0x94F13510L,65535UL}};
                int i;
                for (l_543.f0 = 8; (l_543.f0 >= 2); l_543.f0 -= 1)
                {
                    int i;
                    if ((g_2[l_526.f1] <= 0x8CDEL))
                    {
                        int i;
                        l_546[6] = g_2[g_94.f1];
                    }
                    else
                    {
                        unsigned l_547 = 0x2A7F3747L;
                        return l_547;
                    }
                    l_548[0] = l_548[0];
                    if (g_494)
                        break;
                    l_507[6][0][2] = g_94;
                }
            }
            for (g_193 = 1; (g_193 <= 8); g_193 += 1)
            {
                struct S0 l_549[10][4][2] = {{{{-7L,65535UL},{0x7E37C25FL,0x9A65L}},{{0x015EAD10L,0x628BL},{0x7CD141FCL,0UL}},{{0x7E37C25FL,0x9A65L},{0x7CD141FCL,0UL}},{{0x015EAD10L,0x628BL},{0x7E37C25FL,0x9A65L}}},{{{-7L,65535UL},{-7L,65535UL}},{{-7L,65535UL},{0x7E37C25FL,0x9A65L}},{{0x015EAD10L,0x628BL},{0x7CD141FCL,0UL}},{{0x7E37C25FL,0x9A65L},{0x7CD141FCL,0UL}}},{{{0x015EAD10L,0x628BL},{0x7E37C25FL,0x9A65L}},{{-7L,65535UL},{-7L,65535UL}},{{-7L,65535UL},{0x7E37C25FL,0x9A65L}},{{0x015EAD10L,0x628BL},{0x7CD141FCL,0UL}}},{{{0x7E37C25FL,0x9A65L},{0x7CD141FCL,0UL}},{{0x015EAD10L,0x628BL},{0x7E37C25FL,0x9A65L}},{{-7L,65535UL},{-7L,65535UL}},{{-7L,65535UL},{0x7E37C25FL,0x9A65L}}},{{{0x015EAD10L,0x628BL},{0x7CD141FCL,0UL}},{{0x7E37C25FL,0x9A65L},{0x7CD141FCL,0UL}},{{0x015EAD10L,0x628BL},{0x7E37C25FL,0x9A65L}},{{-7L,65535UL},{-7L,65535UL}}},{{{-7L,65535UL},{0x7E37C25FL,0x9A65L}},{{0x015EAD10L,0x628BL},{0x7CD141FCL,0UL}},{{0x7E37C25FL,0x9A65L},{0x7CD141FCL,0UL}},{{0x015EAD10L,0x628BL},{0x7E37C25FL,0x9A65L}}},{{{-7L,65535UL},{-7L,65535UL}},{{-7L,65535UL},{0x7E37C25FL,0x9A65L}},{{0x015EAD10L,0x628BL},{0x7CD141FCL,0UL}},{{0x7E37C25FL,0x9A65L},{0x7CD141FCL,0UL}}},{{{0x015EAD10L,0x628BL},{0x7E37C25FL,0x9A65L}},{{-7L,65535UL},{-7L,65535UL}},{{-7L,65535UL},{0x7E37C25FL,0x9A65L}},{{0x015EAD10L,0x628BL},{0x7CD141FCL,0UL}}},{{{0x7E37C25FL,0x9A65L},{0x7CD141FCL,0UL}},{{0x015EAD10L,0x628BL},{0x7E37C25FL,0x9A65L}},{{-7L,65535UL},{-7L,65535UL}},{{-7L,65535UL},{0x7E37C25FL,0x9A65L}}},{{{0x015EAD10L,0x628BL},{0x7CD141FCL,0UL}},{{0x7E37C25FL,0x9A65L},{0x7CD141FCL,0UL}},{{0x015EAD10L,0x628BL},{0x7E37C25FL,0x9A65L}},{{-7L,65535UL},{-7L,65535UL}}}};
                int i, j, k;
                g_383 = l_549[9][3][0];
                g_383 = g_383;
                for (g_339 = 7; (g_339 >= 0); g_339 -= 1)
                {
                    short l_554 = 0x5476L;
                    for (g_535 = 6; (g_535 >= 0); g_535 -= 1)
                    {
                        int l_550[1];
                        int i, j;
                        for (i = 0; i < 1; i++)
                            l_550[i] = 6L;
                        g_4 = (l_550[0] = ((l_507[2][0][1].f0 = (-1L)) == ((g_80[g_535][g_535] != (l_549[9][3][0].f0 = p_10)) <= g_184[4][6])));
                        if (l_551)
                            break;
                        g_62[1] = g_6;
                        g_94.f0 = ((safe_sub_func_uint8_t_u_u(l_554, (7UL | func_46((func_46(l_549[9][3][0].f0, l_554, p_11, ((safe_sub_func_int8_t_s_s((l_551 | g_2[5]), (safe_sub_func_int32_t_s_s(((((g_383.f1 = l_526.f1) || (l_549[9][3][0].f1 ^ g_339)) ^ 0xC312L) < g_4), 4294967291UL)))) != l_559), l_526.f1) | g_184[4][3]), l_554, g_184[4][3], l_559, l_550[0])))) != l_526.f1);
                    }
                }
                g_383 = g_383;
            }
            for (g_87 = 0; (g_87 <= 8); g_87 += 1)
            {
                return l_526.f1;
            }
        }
    }
    return l_536;
}







static int func_13(const struct S0 p_14)
{
    unsigned l_493[4];
    unsigned l_501 = 0UL;
    int l_502 = (-1L);
    int l_503 = 0x6E7F205EL;
    int l_504 = 0x427D3280L;
    int i;
    for (i = 0; i < 4; i++)
        l_493[i] = 0UL;
    l_504 = ((l_493[3] && (8L == g_494)) >= (l_493[3] ^ ((safe_rshift_func_int16_t_s_u((l_493[3] != ((func_35(p_14.f0) ^ (safe_add_func_int16_t_s_s(p_14.f1, (((safe_sub_func_int16_t_s_s((l_503 = ((((l_502 = l_501) != p_14.f0) != p_14.f1) ^ 0UL)), l_493[3])) >= 4294967291UL) > 1L)))) == l_501)), 9)) < 65534UL)));
    return g_184[3][1];
}







static struct S0 func_15(short p_16)
{
    const unsigned l_29 = 0x021FBB9CL;
    int l_340 = 0xC73CEE87L;
    int l_341 = 0L;
    int l_342[9] = {0xE02DAD57L,0xC8457E02L,0xC8457E02L,0xE02DAD57L,0xC8457E02L,0xC8457E02L,0xE02DAD57L,0xC8457E02L,0xC8457E02L};
    struct S0 l_343 = {0x10572C18L,0x4D7EL};
    int l_392[2][1];
    int l_393 = (-1L);
    char l_405 = 1L;
    int l_449 = 0xD4D85108L;
    unsigned l_452 = 4294967292UL;
    unsigned short l_470 = 0UL;
    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
            l_392[i][j] = 0xC3C3448DL;
    }
    l_342[7] = func_18((safe_add_func_int8_t_s_s(((func_26(p_16, l_29) == ((g_3 ^ (((l_342[4] = (l_341 = (l_340 = (safe_lshift_func_int8_t_s_s((safe_lshift_func_int16_t_s_u(p_16, 6)), ((safe_mod_func_uint16_t_u_u(65530UL, g_3)) > (g_339 = (safe_rshift_func_uint8_t_u_s(((~l_29) >= (0x3D48L != p_16)), 5))))))))) < p_16) != 0xD16FL)) != (-1L))) || g_79), g_8)), g_8, g_8, p_16, l_343);
    l_343 = func_40(p_16, func_18(((g_79 & 0L) || (g_8 < (l_341 | g_62[0]))), g_5, (safe_rshift_func_uint16_t_u_s((safe_rshift_func_uint8_t_u_u(((l_340 = l_342[8]) >= ((0x1D877348L || g_62[4]) > 0x93L)), 3)), g_94.f0)), g_87, l_343), l_29);
    if (((((l_342[8] = ((-6L) & (l_341 = l_342[7]))) && l_340) | func_46((250UL | (g_339 & (((l_392[1][0] = ((l_343.f0 = ((g_184[1][5] | ((g_263 == func_46(((g_6 == (safe_sub_func_int32_t_s_s(((+((safe_sub_func_int32_t_s_s((p_16 < l_340), l_340)) != 0x89L)) == l_340), p_16))) >= l_29), l_340, g_193, g_80[1][5], p_16)) && p_16)) && l_29)) | p_16)) | p_16) == l_343.f1))), g_193, l_393, p_16, p_16)) <= g_270))
    {
        unsigned l_404 = 3UL;
        l_405 = (safe_rshift_func_int16_t_s_s((safe_sub_func_uint16_t_u_u((((safe_sub_func_int8_t_s_s(p_16, p_16)) == g_5) > (safe_lshift_func_int8_t_s_u(l_341, 5))), ((g_383.f0 = 0x67E793F1L) <= (safe_mod_func_uint16_t_u_u((p_16 | (0x3170L ^ l_404)), g_80[6][0]))))), p_16));
    }
    else
    {
        int l_414 = 0x807A97E9L;
        int l_420 = 0x2C4FCC78L;
        unsigned short l_443 = 65526UL;
        const struct S0 l_475 = {-1L,65535UL};
        l_392[0][0] = (safe_sub_func_int16_t_s_s((0x3BB9L > (((safe_mod_func_int16_t_s_s((l_414 = func_26(l_340, (safe_lshift_func_int8_t_s_s((1L < ((safe_sub_func_int16_t_s_s(p_16, 0xAFBAL)) == 0xDC669B84L)), l_393)))), g_380[5][0])) ^ 0x2B3754F4L) & l_392[0][0])), p_16));
        if ((g_4 || ((func_26(g_87, p_16) < p_16) <= g_383.f0)))
        {
            short l_424[10];
            struct S0 l_453 = {9L,0xC479L};
            short l_474[3];
            int i;
            for (i = 0; i < 10; i++)
                l_424[i] = 0xE8C9L;
            for (i = 0; i < 3; i++)
                l_474[i] = 0x923BL;
            for (g_87 = 0; (g_87 <= 0); g_87 += 1)
            {
                if (g_80[1][5])
                    break;
                g_62[1] = g_184[4][3];
                for (l_343.f1 = 0; (l_343.f1 <= 0); l_343.f1 += 1)
                {
                    struct S0 l_415[1] = {{-1L,65535UL}};
                    int i, j;
                    l_415[0] = l_415[0];
                    l_392[(l_343.f1 + 1)][l_343.f1] = l_392[g_87][l_343.f1];
                    if (p_16)
                        continue;
                }
            }
            for (g_383.f1 = (-9); (g_383.f1 >= 2); g_383.f1++)
            {
                unsigned l_421 = 0x9E3E908EL;
                int l_448[2][4] = {{0x8E5F2EC2L,0x8E5F2EC2L,(-1L),(-1L)},{0x8E5F2EC2L,0x8E5F2EC2L,2L,0x8E5F2EC2L}};
                struct S0 l_454 = {0x455512B6L,0x4CC6L};
                int i, j;
                if ((safe_mod_func_int8_t_s_s((g_79 = (l_414 = (~0xB2L))), l_420)))
                {
                    short l_437 = 0x9870L;
                    int l_438 = 0x4D5A5CD8L;
                    g_4 = (1L >= (l_421 = p_16));
                    g_4 = ((safe_sub_func_int32_t_s_s(l_424[4], ((safe_rshift_func_uint8_t_u_s(l_421, (l_438 = ((func_46(g_3, (safe_mod_func_uint8_t_u_u(p_16, (safe_mod_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s(((l_414 = p_16) || p_16), ((safe_add_func_uint16_t_u_u(((l_424[5] || (safe_mod_func_int32_t_s_s((-1L), p_16))) & g_8), p_16)) | 65533UL))), 0x57L)))), l_437, l_392[0][0], g_94.f0) <= l_342[7]) | 0x6FDDL)))) | g_270))) ^ p_16);
                    l_343 = func_40((safe_add_func_uint16_t_u_u(func_46((safe_sub_func_uint8_t_u_u(func_26(((-1L) || ((((((l_438 = ((p_16 != l_443) >= (safe_lshift_func_uint8_t_u_u(p_16, 2)))) ^ ((l_448[1][3] = p_16) < (l_437 >= (g_80[1][5] = ((((func_35(p_16) & (p_16 ^ p_16)) > l_449) > (-3L)) || p_16))))) < 0xC4L) == l_421) > g_383.f0) < 0xA4814FABL)), g_339), l_421)), l_437, p_16, p_16, g_3), p_16)), p_16, g_383.f0);
                }
                else
                {
                    unsigned l_455[3][2] = {{0UL,0x69E3CBB9L},{0UL,0UL},{0x69E3CBB9L,0UL}};
                    int i, j;
                    for (g_263 = 0; (g_263 > (-7)); --g_263)
                    {
                        l_452 = l_443;
                        g_94 = l_453;
                        g_94 = l_454;
                    }
                    l_455[1][1] = g_380[3][0];
                    g_6 = l_449;
                }
            }
            l_420 = (~p_16);
            for (l_453.f1 = 0; (l_453.f1 < 13); l_453.f1 = safe_add_func_int8_t_s_s(l_453.f1, 8))
            {
                unsigned l_460 = 18446744073709551608UL;
                struct S0 l_471 = {0x97C70FB8L,0xAF63L};
                g_383.f0 = (p_16 != (g_193 = (safe_add_func_uint8_t_u_u(((g_5 ^ (0xB58CL > (~((l_460 == (l_453.f1 != ((0xE9L || (((safe_sub_func_uint32_t_u_u((l_453.f1 >= l_453.f0), (((-1L) ^ p_16) == l_460))) == l_405) ^ l_424[1])) > l_453.f1))) > (-7L))))) != g_94.f1), l_341))));
                if (p_16)
                {
                    struct S0 l_476[4][3][6] = {{{{0xDD79DD35L,0x2A18L},{0xA80BB46DL,65534UL},{0x5A8A1E2BL,65531UL},{-9L,7UL},{0x5A8A1E2BL,65531UL},{0xA80BB46DL,65534UL}},{{1L,5UL},{0xDD79DD35L,0x2A18L},{0x5A8A1E2BL,65531UL},{-8L,0x406DL},{0x0CFF893DL,0UL},{-9L,7UL}},{{0xC6EC0023L,65535UL},{-8L,0x406DL},{0xA80BB46DL,65534UL},{0xA80BB46DL,65534UL},{-8L,0x406DL},{0xC6EC0023L,65535UL}}},{{{0xA80BB46DL,65534UL},{-8L,0x406DL},{0xC6EC0023L,65535UL},{0x6C5E300AL,0x42E9L},{0x0CFF893DL,0UL},{0x5A8A1E2BL,65531UL}},{{0x5A8A1E2BL,65531UL},{0xDD79DD35L,0x2A18L},{1L,5UL},{0xDD79DD35L,0x2A18L},{0x5A8A1E2BL,65531UL},{-8L,0x406DL}},{{0x5A8A1E2BL,65531UL},{0xA80BB46DL,65534UL},{0xDD79DD35L,0x2A18L},{0x6C5E300AL,0x42E9L},{0xF8009D34L,0UL},{0xF8009D34L,0UL}}},{{{0xA80BB46DL,65534UL},{0x0CFF893DL,0UL},{0x0CFF893DL,0UL},{0xA80BB46DL,65534UL},{1L,5UL},{0xF8009D34L,0UL}},{{0xC6EC0023L,65535UL},{0xF8009D34L,0UL},{0xDD79DD35L,0x2A18L},{-8L,0x406DL},{0x6C5E300AL,0x42E9L},{-8L,0x406DL}},{{1L,5UL},{0L,65535UL},{1L,5UL},{-9L,7UL},{0x6C5E300AL,0x42E9L},{0x5A8A1E2BL,65531UL}}},{{{0xDD79DD35L,0x2A18L},{0xF8009D34L,0UL},{0xC6EC0023L,65535UL},{1L,5UL},{1L,5UL},{0xC6EC0023L,65535UL}},{{0x0CFF893DL,0UL},{0x0CFF893DL,0UL},{0xA80BB46DL,65534UL},{1L,5UL},{0xF8009D34L,0UL},{-9L,7UL}},{{0xDD79DD35L,0x2A18L},{0xA80BB46DL,65534UL},{0x5A8A1E2BL,65531UL},{-9L,7UL},{0x5A8A1E2BL,65531UL},{0xA80BB46DL,65534UL}}}};
                    int l_480 = 1L;
                    int i, j, k;
                    for (l_420 = 0; (l_420 == 18); l_420 = safe_add_func_int16_t_s_s(l_420, 1))
                    {
                        int l_465 = 0x0B4E08BBL;
                        g_4 = l_460;
                        l_471 = func_40(((g_94.f1 = (g_383.f1 = g_5)) | p_16), g_184[4][3], (((((g_8 >= p_16) < (((p_16 | (l_453.f0 = l_465)) < (safe_add_func_int32_t_s_s((((safe_sub_func_uint8_t_u_u(p_16, (l_470 = ((((l_414 = (l_465 & l_460)) != 249UL) > l_424[6]) < l_465)))) ^ g_184[4][3]) || 65529UL), 0x923FF9E3L))) >= l_424[0])) >= l_341) >= l_460) >= g_80[1][5]));
                    }
                    for (p_16 = 0; (p_16 == 7); p_16++)
                    {
                        l_474[0] = p_16;
                        if (l_420)
                            break;
                        l_476[3][2][0] = l_475;
                        if (l_471.f1)
                            break;
                    }
                    l_476[3][2][0] = l_476[3][2][0];
                    l_480 = ((l_476[3][2][0].f0 = (l_453.f0 = (func_35(l_460) > (safe_rshift_func_uint8_t_u_u(g_263, p_16))))) && (l_420 == func_31((g_479 = p_16), func_40((g_87 = l_476[3][2][0].f0), l_453.f0, l_476[3][2][0].f0), g_8)));
                }
                else
                {
                    g_94.f0 = (safe_rshift_func_uint8_t_u_u(0x32L, (safe_mod_func_int8_t_s_s((g_79 = g_383.f0), (l_471.f0 = l_443)))));
                }
                for (l_470 = 0; (l_470 <= 6); l_470 += 1)
                {
                    struct S0 l_485 = {5L,0x1646L};
                    for (g_87 = 1; (g_87 <= 6); g_87 += 1)
                    {
                        int i;
                        l_343 = l_485;
                        if (l_342[(l_470 + 1)])
                            continue;
                    }
                    for (g_94.f0 = 0; (g_94.f0 <= 0); g_94.f0 += 1)
                    {
                        int i, j;
                        l_392[(g_94.f0 + 1)][g_94.f0] = (l_342[(g_94.f0 + 4)] = l_342[l_470]);
                        return l_485;
                    }
                }
            }
        }
        else
        {
            unsigned char l_492 = 0x68L;
            g_4 = func_26((l_414 = (safe_sub_func_uint16_t_u_u((l_420 = (safe_add_func_int16_t_s_s(l_470, ((g_62[1] = (((safe_rshift_func_int16_t_s_u((((+0UL) | ((-5L) & p_16)) ^ l_492), 8)) ^ (g_62[1] ^ l_443)) | g_62[1])) == (1UL ^ 0x32L))))), p_16))), g_184[2][1]);
        }
    }
    return l_343;
}







static const int func_18(char p_19, unsigned p_20, unsigned p_21, unsigned char p_22, struct S0 p_23)
{
    const char l_346[6][5][8] = {{{8L,0L,(-1L),0xA2L,0x4FL,0x25L,(-10L),0x12L},{6L,0L,0x77L,(-3L),0x6CL,0x19L,0x5FL,0L},{0x5FL,0x0DL,0x82L,0xEAL,0xEBL,0x83L,6L,0x12L},{(-10L),0x06L,0xA2L,0x68L,(-6L),0x3FL,1L,(-1L)},{0x82L,1L,0x8BL,0x6CL,0x55L,(-10L),0L,0x76L}},{{0x3FL,0xE4L,1L,2L,0xBBL,0xBBL,2L,1L},{(-5L),(-5L),0x0DL,0L,0x11L,0x84L,0x06L,0L},{0xEAL,(-1L),0x51L,4L,0x68L,(-1L),0xF4L,0L},{(-1L),0xB0L,(-1L),0L,0xE0L,(-1L),(-10L),1L},{0xF0L,(-1L),1L,2L,0x4FL,0L,2L,0x76L}},{{3L,(-1L),0x83L,0x6CL,0xB0L,0xA2L,(-3L),(-1L)},{0xE0L,0x76L,0xEAL,0x68L,0x5FL,1L,0x4FL,0x12L},{0x77L,0xA2L,(-1L),0xEAL,0L,(-10L),0xE4L,0L},{1L,0x11L,7L,(-1L),0L,(-6L),0x30L,0x9AL},{0xF6L,0x77L,(-1L),(-1L),0L,0x8AL,0x33L,(-10L)}},{{0x84L,0x25L,(-5L),0x24L,0x68L,0x76L,0L,0x76L},{0L,1L,6L,1L,0L,(-3L),(-10L),8L},{0x51L,(-3L),4L,1L,3L,2L,0xF4L,1L},{0xE4L,0L,4L,1L,(-1L),1L,(-10L),0x2BL},{3L,0L,6L,8L,2L,0x30L,0L,0xBBL}},{{1L,(-1L),(-5L),7L,0x76L,0xF4L,0x33L,2L},{7L,0x8AL,(-1L),0L,0xEAL,0L,0x30L,0x0DL},{0xF0L,(-1L),7L,1L,(-3L),0x84L,0xE7L,0x4FL},{0x2BL,0x4FL,0x9AL,(-10L),(-10L),2L,0x11L,3L},{2L,(-1L),0x7DL,0x82L,1L,0x8BL,0x6CL,0x55L}},{{0x4FL,(-1L),8L,(-6L),0x51L,1L,(-1L),7L},{(-1L),0L,3L,0xE7L,0xE7L,3L,0L,(-1L)},{1L,0x76L,0L,(-10L),0x55L,0x6CL,0x8BL,1L},{(-1L),0x30L,(-1L),0xF6L,(-10L),0x6CL,7L,0x82L},{(-3L),0x76L,(-9L),0xEAL,0xB0L,3L,0xF4L,(-1L)}}};
    const unsigned l_347 = 1UL;
    int l_358 = (-3L);
    int l_367 = 0x1137BF34L;
    int l_368 = 0x2DCA1358L;
    int l_381 = (-4L);
    int l_382 = 0L;
    int i, j, k;
    p_23.f0 = ((-1L) && (safe_rshift_func_int16_t_s_s((+l_346[2][1][3]), (l_358 = (l_347 < (g_80[1][5] | (safe_mod_func_int8_t_s_s(g_3, (safe_rshift_func_uint16_t_u_u((!(safe_add_func_uint8_t_u_u(l_346[4][1][3], ((safe_add_func_uint16_t_u_u((safe_mod_func_int32_t_s_s(g_98, 3UL)), l_346[3][4][4])) == 1UL)))), l_346[3][4][0]))))))))));
    p_23.f0 = func_31(((g_98 < p_19) <= func_46(l_346[2][1][3], func_46(((~(safe_add_func_uint32_t_u_u((safe_lshift_func_int16_t_s_u((safe_sub_func_int16_t_s_s(func_46((((safe_sub_func_int8_t_s_s(0x22L, g_184[4][3])) || (func_46((func_46((g_184[3][5] = p_23.f1), func_46(l_358, l_346[4][3][4], l_346[2][1][3], p_20, l_346[2][1][3]), g_98, p_22, g_8) > 0xA7C3L), g_270, l_347, p_19, g_339) == 254UL)) || l_367), g_193, l_346[0][2][6], g_94.f0, g_98), l_368)), 7)), l_368))) == g_339), p_19, g_94.f1, g_94.f1, g_94.f1), g_263, p_22, l_347)), p_23, l_358);
    g_383 = func_40(g_94.f0, (((g_3 || 0xBDF6C71EL) < (safe_mod_func_uint32_t_u_u(g_184[1][4], (p_23.f0 = l_346[4][1][2])))) & ((g_8 != (safe_lshift_func_uint8_t_u_s((safe_mod_func_uint16_t_u_u((safe_add_func_int8_t_s_s((safe_rshift_func_int16_t_s_u(((g_270 <= func_46((+(~(((safe_unary_minus_func_int32_t_s((((g_87 >= (g_380[3][0] = ((-9L) ^ l_358))) ^ l_367) & 0x27AAL))) > p_23.f1) && p_21))), l_367, p_22, g_184[1][7], l_381)) != 0xFBEEL), l_382)), g_98)), l_347)), 7))) <= l_347)), l_346[2][1][3]);
    return l_367;
}







static short func_26(int p_27, const unsigned p_28)
{
    unsigned l_30 = 0x5D088182L;
    int l_180 = (-1L);
    unsigned char l_255 = 0x0FL;
    unsigned l_282 = 0x89930569L;
    struct S0 l_300 = {0x6C108B41L,0UL};
    l_30 = 1L;
    if (p_28)
    {
        int l_37 = 0x87A9B65CL;
        struct S0 l_183 = {3L,1UL};
        int l_290[1][2];
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 2; j++)
                l_290[i][j] = 0x61872BC7L;
        }
        if ((((l_183.f0 = func_31(((l_180 = func_35(l_37)) >= (safe_lshift_func_uint16_t_u_u(g_8, 7))), l_183, g_184[4][3])) > l_30) ^ l_37))
        {
            g_6 = l_37;
            g_94.f0 = (g_62[0] = p_27);
        }
        else
        {
            unsigned short l_260 = 0x7858L;
            struct S0 l_261 = {0x4C937B7EL,0UL};
            struct S0 l_283 = {-8L,0xE83FL};
            if (l_30)
            {
                unsigned char l_256 = 0xBAL;
                int l_259[4][6][6] = {{{0L,(-1L),0xDD55966BL,0xD8CCFA67L,0x314F9FACL,(-1L)},{0xD8CCFA67L,0x314F9FACL,(-1L),6L,(-1L),0x314F9FACL},{0xB7BAD2B1L,0xA1ABCA9EL,0L,0xDE0B8B0CL,1L,0xCCE86A94L},{1L,(-8L),0x168CD2F3L,0xC1E20310L,0xDD55966BL,0x8115E5B6L},{0L,(-8L),0xDE0B8B0CL,0x02CFCB36L,1L,0L},{6L,0xA1ABCA9EL,(-1L),1L,(-1L),0L}},{{0x593E916CL,0x314F9FACL,0x8115E5B6L,0x8115E5B6L,0x314F9FACL,0x593E916CL},{1L,(-1L),6L,0L,0xCCE86A94L,(-1L)},{0xDD55966BL,(-1L),1L,(-1L),0x8115E5B6L,0xB7BAD2B1L},{0xDD55966BL,(-1L),(-1L),0xC9903641L,(-1L),0x314F9FACL},{0x593E916CL,0L,0x168CD2F3L,0xDD55966BL,0x070A53DDL,(-8L)},{0L,0xA1ABCA9EL,0xB7BAD2B1L,0xA1ABCA9EL,0L,0xDE0B8B0CL}},{{0xCCE86A94L,(-1L),0L,6L,0xD8CCFA67L,0xC9903641L},{0x070A53DDL,0L,0x314F9FACL,(-1L),0xC1E20310L,0xC9903641L},{0xA1ABCA9EL,1L,0L,(-8L),0x314F9FACL,0xDE0B8B0CL},{0xC1E20310L,(-1L),0xB7BAD2B1L,0xCCE86A94L,(-8L),(-8L)},{1L,0x168CD2F3L,0x168CD2F3L,1L,0xDE0B8B0CL,0x314F9FACL},{0x168CD2F3L,(-1L),0x8115E5B6L,0x845FADD7L,0xC9903641L,0xC1E20310L}},{{0L,0L,0xA1ABCA9EL,0x314F9FACL,0xC9903641L,0xD8CCFA67L},{0xD8CCFA67L,(-1L),0xCCE86A94L,1L,0xDE0B8B0CL,0L},{0L,0x168CD2F3L,0xDD55966BL,0x070A53DDL,(-8L),0x070A53DDL},{(-1L),(-1L),(-1L),0L,0x314F9FACL,(-1L)},{6L,1L,(-8L),0x168CD2F3L,0xC1E20310L,0xDD55966BL},{(-1L),0L,0L,0x168CD2F3L,0xD8CCFA67L,0L}}};
                struct S0 l_289 = {0xAED387AFL,0x9F09L};
                int i, j, k;
                for (g_94.f1 = 29; (g_94.f1 > 22); g_94.f1 = safe_sub_func_int16_t_s_s(g_94.f1, 8))
                {
                    g_5 = (safe_lshift_func_uint16_t_u_u(g_94.f1, 13));
                }
                g_62[1] = g_80[1][5];
                l_261 = func_40(((safe_rshift_func_int16_t_s_s((((safe_rshift_func_uint16_t_u_u((0x29L >= g_4), (l_255 = 0xD624L))) & ((p_28 == g_80[3][1]) || (+(l_256 = 4294967295UL)))) > l_183.f1), ((safe_mod_func_uint16_t_u_u(((+(0L | (l_259[0][5][5] & g_3))) < p_28), p_27)) <= l_260))) | l_37), l_183.f0, l_183.f0);
                if (g_87)
                {
                    short l_262 = 0xB3B7L;
                    int l_271 = 0x6B4E15A3L;
                    l_259[0][1][3] = (((func_35(l_262) >= l_30) > (l_262 | (g_263 = p_28))) | (safe_lshift_func_int16_t_s_u(g_184[4][3], 12)));
                    for (g_94.f0 = 3; (g_94.f0 >= 0); g_94.f0 -= 1)
                    {
                        short l_280 = 0x97DBL;
                        int l_281 = 8L;
                        l_271 = ((p_28 == ((((l_261.f0 < ((safe_rshift_func_int8_t_s_s(1L, (safe_add_func_int16_t_s_s(((func_46((l_180 = g_62[1]), l_37, l_262, (g_270 = l_183.f1), g_94.f1) || g_79) > l_262), p_27)))) >= p_27)) || l_260) < g_94.f0) <= p_27)) >= 251UL);
                        l_282 = func_46((safe_lshift_func_uint8_t_u_u(p_28, 7)), l_183.f0, (func_46((l_280 = ((((safe_lshift_func_uint8_t_u_u((((safe_rshift_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u((g_7 && p_28), ((!(0xF9B8L | (l_271 = g_62[1]))) >= l_37))), p_28)) ^ (0UL != p_28)) & g_270), 4)) != l_180) > l_37) != p_27)), l_262, g_193, p_27, g_3) && p_27), p_28, l_281);
                    }
                    l_283 = g_94;
                }
                else
                {
                    unsigned l_284[2][2];
                    struct S0 l_288[9] = {{0xFA09FD40L,65528UL},{0xFA09FD40L,65528UL},{0xFA09FD40L,65528UL},{0xFA09FD40L,65528UL},{0xFA09FD40L,65528UL},{0xFA09FD40L,65528UL},{0xFA09FD40L,65528UL},{0xFA09FD40L,65528UL},{0xFA09FD40L,65528UL}};
                    int i, j;
                    for (i = 0; i < 2; i++)
                    {
                        for (j = 0; j < 2; j++)
                            l_284[i][j] = 0x1FB5AA45L;
                    }
                    for (g_263 = 4; (g_263 >= 1); g_263 -= 1)
                    {
                        struct S0 l_285[3] = {{1L,0xBAF5L},{1L,0xBAF5L},{1L,0xBAF5L}};
                        int i;
                        l_285[2] = func_40(g_6, g_94.f0, l_284[0][0]);
                    }
                    for (g_263 = 0; (g_263 <= (-20)); g_263 = safe_sub_func_uint16_t_u_u(g_263, 4))
                    {
                        g_6 = 1L;
                        if (g_263)
                            break;
                        p_27 = g_62[3];
                        p_27 = l_259[2][1][4];
                    }
                    l_289 = l_288[2];
                }
            }
            else
            {
                struct S0 l_295 = {0xAB370156L,0x42DAL};
                l_283.f0 = l_290[0][1];
                for (g_98 = 0; (g_98 < (-5)); g_98 = safe_sub_func_int8_t_s_s(g_98, 2))
                {
                    struct S0 l_296 = {2L,2UL};
                    for (l_255 = 0; (l_255 <= 51); ++l_255)
                    {
                        return g_98;
                    }
                    l_296 = l_295;
                    g_94 = g_94;
                }
            }
            return g_94.f1;
        }
        for (l_183.f1 = (-12); (l_183.f1 < 30); l_183.f1++)
        {
            struct S0 l_299 = {1L,1UL};
            l_300 = l_299;
            if (g_98)
                break;
        }
    }
    else
    {
        unsigned l_305 = 0xE2DCA83EL;
        int l_317[9][4];
        int i, j;
        for (i = 0; i < 9; i++)
        {
            for (j = 0; j < 4; j++)
                l_317[i][j] = (-1L);
        }
        l_300.f0 = (safe_add_func_int32_t_s_s(func_46((0x9EL || (safe_rshift_func_uint16_t_u_s(g_94.f0, l_305))), p_28, (1L < g_8), (p_27 = ((((safe_rshift_func_uint8_t_u_u((g_184[1][6] | (l_317[4][3] = (safe_sub_func_int32_t_s_s((safe_mod_func_uint32_t_u_u((g_87 = (safe_add_func_int8_t_s_s((l_305 <= (safe_sub_func_uint8_t_u_u(((safe_unary_minus_func_int16_t_s(((l_305 | 7UL) | g_79))) || g_80[6][0]), 0L))), g_193))), g_8)), l_300.f1)))), 1)) <= 5L) != l_282) >= 0UL)), l_305), p_28));
        p_27 = p_27;
        g_94 = l_300;
    }
    p_27 = ((((1L && (g_270 = ((g_79 = p_27) || (l_300.f1 <= func_46(g_80[6][4], (l_300.f0 = (l_180 = ((((g_87 > (0x8DCEL == (l_282 | (safe_sub_func_uint16_t_u_u(l_282, (((safe_lshift_func_int16_t_s_s((0x09EC394CL == p_28), p_27)) == l_282) > 0x83L)))))) != g_270) | g_98) & p_28))), p_27, p_28, p_28))))) || l_300.f0) && g_3) || p_27);
    for (l_300.f1 = 21; (l_300.f1 == 8); --l_300.f1)
    {
        int l_330 = 0xC8762215L;
        if (p_27)
            break;
        p_27 = (safe_mod_func_uint8_t_u_u(255UL, (safe_sub_func_int16_t_s_s(g_270, (g_80[6][0] = func_46((!p_27), p_28, l_255, p_27, (g_193 = (l_300.f0 = (safe_add_func_int16_t_s_s(func_35(l_330), l_180))))))))));
    }
    return l_30;
}







static unsigned char func_31(const unsigned p_32, struct S0 p_33, short p_34)
{
    unsigned char l_185 = 250UL;
    int l_208 = 0x7FFD3E07L;
    struct S0 l_209[10] = {{1L,0UL},{1L,0UL},{1L,0UL},{1L,0UL},{1L,0UL},{1L,0UL},{1L,0UL},{1L,0UL},{1L,0UL},{1L,0UL}};
    short l_244 = 0xF41AL;
    char l_246 = 0xE4L;
    int i;
    for (g_87 = 0; (g_87 <= 4); g_87 += 1)
    {
        short l_190 = 0xEF60L;
        int l_215 = (-1L);
        unsigned char l_245 = 5UL;
        for (g_94.f1 = 0; (g_94.f1 <= 4); g_94.f1 += 1)
        {
            int i, j;
            return g_184[g_87][(g_87 + 1)];
        }
        for (g_98 = 6; (g_98 >= 0); g_98 -= 1)
        {
            struct S0 l_210 = {0x20364D17L,65534UL};
            struct S0 l_220[3] = {{0L,0x063AL},{0L,0x063AL},{0L,0x063AL}};
            int i, j;
            if ((l_185 = g_80[g_98][(g_87 + 2)]))
            {
                int l_198 = (-1L);
                p_33.f0 = (g_62[1] = (safe_sub_func_int16_t_s_s(p_33.f0, ((safe_mod_func_uint16_t_u_u(g_80[1][5], l_185)) || l_190))));
                for (l_185 = 0; (l_185 == 49); l_185 = safe_add_func_uint16_t_u_u(l_185, 1))
                {
                    if (((g_193 = g_184[3][5]) && 255UL))
                    {
                        if (g_87)
                            break;
                    }
                    else
                    {
                        char l_207 = 4L;
                        l_208 = (safe_sub_func_int32_t_s_s((safe_sub_func_int8_t_s_s(((l_198 = (g_94.f0 & 5UL)) || (((((safe_rshift_func_int8_t_s_u((safe_add_func_uint8_t_u_u(g_62[3], ((0x1FADEA91L == g_87) > ((safe_sub_func_int8_t_s_s((safe_add_func_int8_t_s_s(((l_185 != (p_34 = ((0x8559L || (~((l_185 < ((p_33.f0 = p_33.f0) ^ l_185)) | p_34))) != p_32))) <= p_32), g_62[1])), g_98)) & l_198)))), l_185)) | 3L) < l_207) >= 0xE0AF2857L) || 1UL)), 0xC4L)), p_32));
                        l_209[3] = g_94;
                    }
                    l_210 = (p_33 = g_94);
                    if (p_34)
                        continue;
                }
                g_62[1] = (+(p_33.f0 = g_80[6][4]));
                l_215 = ((-2L) ^ ((g_62[1] <= (p_33.f0 > (safe_sub_func_int16_t_s_s((safe_add_func_int8_t_s_s(0x39L, l_198)), l_190)))) & 0x5A846277L));
            }
            else
            {
                struct S0 l_216 = {-1L,65530UL};
                for (p_33.f0 = 4; (p_33.f0 >= 0); p_33.f0 -= 1)
                {
                    int i, j;
                    g_94 = l_216;
                    l_215 = g_184[g_87][g_98];
                    if (g_62[p_33.f0])
                        continue;
                }
                l_210.f0 = ((0xE848L & g_3) <= 0x25L);
            }
            for (l_185 = 0; (l_185 <= 4); l_185 += 1)
            {
                int i, j;
                if (g_80[g_98][(l_185 + 1)])
                {
                    unsigned short l_217 = 0x64CFL;
                    for (l_210.f0 = 0; (l_210.f0 <= 6); l_210.f0 += 1)
                    {
                        l_208 = l_217;
                        g_94 = g_94;
                    }
                }
                else
                {
                    struct S0 l_218 = {1L,0UL};
                    if (p_32)
                    {
                        struct S0 l_219 = {0x20C17890L,65535UL};
                        int i, j;
                        if (g_94.f1)
                            break;
                        l_218 = p_33;
                        l_220[1] = l_219;
                        g_6 = ((safe_rshift_func_int16_t_s_s((g_62[1] <= ((safe_rshift_func_int16_t_s_u((safe_lshift_func_int16_t_s_u((g_80[g_98][g_98] = l_185), g_87)), 15)) > l_215)), p_34)) & 0UL);
                    }
                    else
                    {
                        p_33 = p_33;
                        return g_6;
                    }
                    for (p_34 = 0; (p_34 <= 4); p_34 += 1)
                    {
                        unsigned l_237 = 1UL;
                        l_210.f0 = (safe_add_func_int16_t_s_s((((g_79 = 0x2EL) > (safe_add_func_int32_t_s_s((p_34 ^ ((l_220[1].f0 = (p_33.f1 <= (l_208 = (safe_mod_func_int32_t_s_s(((p_34 & (l_209[3].f0 = (safe_add_func_uint16_t_u_u(p_32, g_80[g_98][(l_185 + 1)])))) > (0UL != (safe_mod_func_uint32_t_u_u((((0x999902EAL > 4294967286UL) && p_33.f1) != 0x4F62E680L), 0xD8E7BA68L)))), (-1L)))))) < l_237)), (-1L)))) || p_33.f0), p_33.f0));
                        g_94.f0 = (safe_rshift_func_uint8_t_u_u(0x35L, ((safe_sub_func_int16_t_s_s(((safe_lshift_func_int16_t_s_s((p_33.f1 != ((4294967288UL ^ (g_79 == g_80[g_98][(l_185 + 1)])) >= 0x91L)), 7)) > (((l_209[3].f0 = (l_244 > l_245)) <= l_210.f0) & 1L)), 0xD824L)) | 0L)));
                        if (g_80[g_98][(g_87 + 2)])
                            continue;
                    }
                }
            }
        }
    }
    l_246 = l_244;
    l_208 = (g_62[3] = p_32);
    return p_33.f1;
}







static char func_35(int p_36)
{
    unsigned l_57 = 18446744073709551612UL;
    struct S0 l_108 = {0xC892F938L,0xBC37L};
    struct S0 l_158[1][2][8] = {{{{1L,65533UL},{0x84604D86L,0xB6A1L},{7L,0xA1C0L},{-1L,0UL},{7L,0xA1C0L},{0x84604D86L,0xB6A1L},{1L,65533UL},{1L,65533UL}},{{0x84604D86L,0xB6A1L},{-1L,0UL},{0xCA71B24FL,0x4597L},{0xCA71B24FL,0x4597L},{-1L,0UL},{0x84604D86L,0xB6A1L},{-1L,0x32F8L},{0x84604D86L,0xB6A1L}}}};
    int i, j, k;
    if (g_5)
    {
        unsigned char l_39[3];
        int l_58 = 4L;
        int i;
        for (i = 0; i < 3; i++)
            l_39[i] = 0xB4L;
        if (g_6)
        {
            int l_38 = (-1L);
            return l_38;
        }
        else
        {
            short l_52 = 3L;
            int l_59 = 0L;
            l_39[0] = 5L;
            l_108 = func_40(((l_39[0] && (safe_sub_func_uint32_t_u_u(p_36, func_46(l_52, (8L & ((((p_36 > ((safe_sub_func_uint16_t_u_u((((safe_sub_func_int8_t_s_s((l_59 = (l_58 = ((l_57 <= g_8) && 0x8A97L))), (safe_lshift_func_uint16_t_u_u((g_62[1] = (((g_3 || 0x64L) && l_39[0]) || g_5)), p_36)))) != g_8) >= p_36), 1UL)) & g_3)) & (-1L)) && g_6) == 1UL)), l_39[0], g_8, g_8)))) && p_36), g_8, l_52);
        }
        g_7 = ((p_36 && ((p_36 >= g_62[3]) >= (l_58 | ((0L > (((l_108.f0 = ((safe_lshift_func_uint16_t_u_s(g_94.f0, 7)) && p_36)) < (((p_36 <= ((safe_lshift_func_int8_t_s_s(((safe_rshift_func_uint8_t_u_u(0xCDL, l_57)) > g_4), l_108.f1)) && (-1L))) & 0x3F9BL) <= l_57)) < g_62[1])) && 0xCCL)))) || g_80[6][3]);
        return g_4;
    }
    else
    {
        struct S0 l_129 = {-4L,0x874AL};
        struct S0 l_130 = {0x8734F539L,0x47A1L};
        l_108 = g_94;
        for (g_79 = 0; (g_79 <= 4); g_79 += 1)
        {
            unsigned char l_146 = 0x2CL;
            unsigned short l_155 = 65532UL;
            struct S0 l_167 = {0x00C7963AL,65535UL};
            int i;
            if (g_62[g_79])
            {
                unsigned l_120 = 4294967288UL;
                l_108 = l_108;
                for (l_108.f1 = 0; (l_108.f1 <= 6); l_108.f1 += 1)
                {
                    short l_119 = 0x5C81L;
                    int i;
                    l_120 = (g_94.f0 = (g_62[g_79] = (safe_add_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s(l_119, 9)), g_3))));
                    if (p_36)
                        break;
                    for (l_120 = 0; (l_120 <= 6); l_120 += 1)
                    {
                        int l_128 = (-2L);
                        if (g_4)
                            break;
                        if (g_87)
                            break;
                        l_128 = (safe_unary_minus_func_uint8_t_u(((safe_lshift_func_uint8_t_u_s(((p_36 != 0xCB08L) & ((safe_sub_func_uint32_t_u_u((g_62[1] ^ (g_6 ^ 8L)), (-4L))) != (p_36 <= g_80[1][5]))), (safe_sub_func_uint8_t_u_u(255UL, 0xB1L)))) & 0xC683L)));
                        l_129 = l_108;
                    }
                    g_7 = ((-6L) & p_36);
                }
                l_130 = g_94;
            }
            else
            {
                unsigned l_138 = 0x09466F02L;
                if (p_36)
                {
                    short l_133 = 0x5AE1L;
                    g_94 = l_108;
                    l_133 = (safe_add_func_uint32_t_u_u((g_87 = g_4), 0x867A3060L));
                    l_130.f0 = l_129.f0;
                }
                else
                {
                    int l_145 = (-6L);
                    g_94.f0 = (safe_lshift_func_int8_t_s_s(g_62[g_79], ((safe_rshift_func_uint16_t_u_s((((+(l_138 | l_138)) >= g_80[1][5]) > g_94.f0), 5)) >= g_79)));
                    l_145 = ((65534UL != ((g_5 >= ((p_36 <= (g_98 & 1L)) == (safe_add_func_uint32_t_u_u((((safe_sub_func_int8_t_s_s((safe_add_func_int8_t_s_s(p_36, (l_108.f1 == (0L >= (l_138 != g_62[1]))))), p_36)) > 0x5DE6L) >= 2UL), g_8)))) <= 0xCCL)) | g_80[2][0]);
                    if (l_129.f1)
                        continue;
                }
            }
            g_62[1] = p_36;
            for (l_108.f0 = 6; (l_108.f0 >= 0); l_108.f0 -= 1)
            {
                unsigned short l_153 = 0x03EAL;
                int l_154[2][7][3] = {{{0xEE3B782AL,2L,(-10L)},{0x93E82041L,0x93E82041L,0x049F0CEAL},{2L,0xEE3B782AL,0L},{0x84E5156CL,0x93E82041L,0x84E5156CL},{0L,2L,1L},{0x958F4877L,0x84E5156CL,0x84E5156CL},{1L,0L,0L}},{{0L,0x958F4877L,0x049F0CEAL},{1L,1L,(-10L)},{0x958F4877L,0L,(-7L)},{0L,1L,0L},{0x84E5156CL,0x958F4877L,0x93E82041L},{2L,0L,0L},{0x93E82041L,0x84E5156CL,(-7L)}}};
                struct S0 l_168 = {-1L,0x7A5FL};
                int i, j, k;
                for (l_129.f0 = 6; (l_129.f0 >= 0); l_129.f0 -= 1)
                {
                    if (p_36)
                        break;
                    if (g_7)
                        continue;
                    for (p_36 = 0; (p_36 <= 6); p_36 += 1)
                    {
                        int l_152 = 1L;
                        int i, j;
                        g_62[1] = ((+((g_87 & 0x48925B6BL) || (l_146 <= (g_5 == g_62[g_79])))) && (((p_36 == ((((g_80[g_79][p_36] = ((l_146 && (safe_rshift_func_int16_t_s_u((safe_mod_func_int32_t_s_s(p_36, ((safe_unary_minus_func_uint16_t_u((g_3 < l_129.f0))) ^ p_36))), p_36))) || g_94.f1)) < g_87) < l_152) < l_129.f1)) <= 0x9F8BL) ^ 65535UL));
                    }
                    g_5 = l_153;
                }
                if (((l_154[1][2][0] = g_4) ^ (l_155 == (safe_rshift_func_int8_t_s_s(0L, 5)))))
                {
                    for (l_130.f1 = 2; (l_130.f1 <= 6); l_130.f1 += 1)
                    {
                        g_6 = (p_36 ^ (g_62[1] && (~0x46L)));
                        l_158[0][0][4] = l_130;
                        return g_7;
                    }
                    return g_4;
                }
                else
                {
                    short l_173 = 1L;
                    int l_176 = 1L;
                    if (l_158[0][0][4].f0)
                        break;
                    if ((g_62[1] = ((((+((safe_rshift_func_int8_t_s_s((g_62[0] != (safe_unary_minus_func_uint8_t_u((safe_unary_minus_func_uint16_t_u(p_36))))), 0)) == ((l_129.f0 | (g_62[g_79] == 0x0A4EL)) || (safe_sub_func_int16_t_s_s(g_87, ((safe_rshift_func_uint16_t_u_u(((l_146 || l_130.f1) | (p_36 > p_36)), 11)) & l_155)))))) & 0UL) && 0UL) <= 0x6F7CF728L)))
                    {
                        l_168 = l_167;
                        l_154[1][5][0] = p_36;
                        l_173 = ((l_167.f1 > (g_87 = ((g_6 <= 0x5C298175L) < (g_94.f0 = g_8)))) <= (0xF84ECE7DL != ((safe_unary_minus_func_int32_t_s((-1L))) == (l_158[0][0][4].f0 & (safe_unary_minus_func_uint8_t_u((safe_mod_func_int16_t_s_s(g_80[1][5], g_8))))))));
                        g_5 = (65535UL && g_62[g_79]);
                    }
                    else
                    {
                        short l_177[6];
                        int i;
                        for (i = 0; i < 6; i++)
                            l_177[i] = (-1L);
                        g_5 = (l_158[0][0][4].f0 = ((safe_sub_func_uint32_t_u_u(((l_129.f1 <= ((p_36 >= g_8) == (l_176 = l_173))) < (g_87 = (l_168.f0 = (g_62[1] || (l_168.f0 == (((l_130.f1 >= g_94.f1) == p_36) <= g_62[1])))))), 1UL)) < l_177[2]));
                        g_94 = l_168;
                        if (l_158[0][0][4].f1)
                            continue;
                    }
                }
                if ((l_167.f0 = g_62[4]))
                {
                    for (p_36 = 0; (p_36 <= 6); p_36 += 1)
                    {
                        return g_4;
                    }
                    for (l_129.f1 = 0; (l_129.f1 <= 6); l_129.f1 += 1)
                    {
                        return l_153;
                    }
                }
                else
                {
                    for (g_87 = 2; (g_87 <= 6); g_87 += 1)
                    {
                        if (g_62[1])
                            break;
                    }
                    g_94 = l_168;
                    for (l_108.f1 = 0; (l_108.f1 <= 6); l_108.f1 += 1)
                    {
                        struct S0 l_178[7][10][2] = {{{{0x66DA5D0AL,0xE498L},{0x21AF0394L,0UL}},{{-1L,0xB2AAL},{0xD26139D5L,0xCBE2L}},{{0x21AF0394L,0UL},{0xA6D48C3AL,0x247EL}},{{6L,0x455AL},{-4L,0x8C35L}},{{-1L,0xAC4CL},{0L,65526UL}},{{0L,65526UL},{-1L,0xB2AAL}},{{0x1BB123D3L,0x4E6AL},{-8L,1UL}},{{0xF0B5294AL,0x9F6CL},{0L,65526UL}},{{0xE7F61CDAL,0x3B45L},{0x684D458FL,65535UL}},{{6L,0x455AL},{0xAC0D8A3BL,0xCDFAL}}},{{{0xED77FB83L,65528UL},{0xC75B22A6L,0xC6CEL}},{{-1L,0xA44DL},{0x0D410FCCL,65531UL}},{{-1L,0xAC4CL},{0x8E4B82FDL,0x23D6L}},{{0x4BE80861L,0xDA54L},{6L,0UL}},{{-1L,0xA44DL},{0xA00E7A82L,6UL}},{{6L,0UL},{0x684D458FL,65535UL}},{{0xA0F63375L,0x7139L},{-1L,0xB2AAL}},{{0xA6D48C3AL,0x247EL},{0L,9UL}},{{1L,0xA229L},{-1L,0xA44DL}},{{0L,0x07EDL},{-1L,0xA44DL}}},{{{1L,0xA229L},{0L,9UL}},{{0xA6D48C3AL,0x247EL},{-1L,0xB2AAL}},{{0xA0F63375L,0x7139L},{0x684D458FL,65535UL}},{{6L,0UL},{0xA00E7A82L,6UL}},{{-1L,0xA44DL},{6L,0UL}},{{0x4BE80861L,0xDA54L},{0x8E4B82FDL,0x23D6L}},{{-1L,0xAC4CL},{0x0D410FCCL,65531UL}},{{-1L,0xA44DL},{0xC75B22A6L,0xC6CEL}},{{0x0D410FCCL,65531UL},{0x684D458FL,65535UL}},{{0xED77FB83L,65528UL},{-5L,65533UL}}},{{{0xA6D48C3AL,0x247EL},{1L,0xA229L}},{{0L,9UL},{-1L,0xA44DL}},{{0xFF0F8D77L,2UL},{0xE34CB2FCL,0x28EDL}},{{1L,0xA229L},{1L,0xA229L}},{{-1L,0x26B4L},{-1L,0xB2AAL}},{{0xED77FB83L,65528UL},{1L,0x6B33L}},{{6L,0UL},{0xC75B22A6L,0xC6CEL}},{{0xE34CB2FCL,0x28EDL},{6L,0UL}},{{-1L,0xAC4CL},{0x4149EF3DL,0UL}},{{-1L,0xAC4CL},{6L,0UL}}},{{{0xE34CB2FCL,0x28EDL},{0xC75B22A6L,0xC6CEL}},{{6L,0UL},{1L,0x6B33L}},{{0xED77FB83L,65528UL},{-1L,0xB2AAL}},{{-1L,0x26B4L},{1L,0xA229L}},{{1L,0xA229L},{0xE34CB2FCL,0x28EDL}},{{0xFF0F8D77L,2UL},{-1L,0xA44DL}},{{0L,9UL},{1L,0xA229L}},{{0xA6D48C3AL,0x247EL},{-5L,65533UL}},{{0xED77FB83L,65528UL},{0x684D458FL,65535UL}},{{0x0D410FCCL,65531UL},{0xC75B22A6L,0xC6CEL}}},{{{-1L,0xA44DL},{0x0D410FCCL,65531UL}},{{-1L,0xAC4CL},{0x8E4B82FDL,0x23D6L}},{{0x4BE80861L,0xDA54L},{6L,0UL}},{{-1L,0xA44DL},{0xA00E7A82L,6UL}},{{6L,0UL},{0x684D458FL,65535UL}},{{0xA0F63375L,0x7139L},{-1L,0xB2AAL}},{{0xA6D48C3AL,0x247EL},{0L,9UL}},{{1L,0xA229L},{-1L,0xA44DL}},{{0xD6407CE1L,0xFBB3L},{0xC75B22A6L,0xC6CEL}},{{0x93FF6A6FL,0xF2E4L},{0x41CFB2A6L,0xC452L}}},{{{0x684D458FL,65535UL},{-1L,0xA44DL}},{{0x0D410FCCL,65531UL},{-1L,0xB2AAL}},{{-1L,0xAC4CL},{0L,0x07EDL}},{{0xC75B22A6L,0xC6CEL},{-1L,0xAC4CL}},{{-1L,0x26B4L},{0xED77FB83L,65528UL}},{{0xA6D48C3AL,0x247EL},{0x4BE80861L,0xDA54L}},{{0xC75B22A6L,0xC6CEL},{0xFF0F8D77L,2UL}},{{0x4BE80861L,0xDA54L},{-1L,0xB2AAL}},{{6L,0UL},{0xE34CB2FCL,0x28EDL}},{{0x684D458FL,65535UL},{0x93FF6A6FL,0xF2E4L}}}};
                        int i, j, k;
                        l_178[5][2][1] = l_167;
                        return g_79;
                    }
                }
                for (l_146 = 0; (l_146 <= 6); l_146 += 1)
                {
                    char l_179 = (-1L);
                    l_179 = 0L;
                    return l_155;
                }
            }
        }
        return l_130.f1;
    }
}







static struct S0 func_40(const unsigned p_41, int p_42, unsigned p_43)
{
    struct S0 l_89 = {0xDABD3396L,0xC63FL};
    l_89 = l_89;
    for (g_87 = 0; (g_87 != 60); ++g_87)
    {
        int l_92 = (-1L);
        struct S0 l_93 = {0L,6UL};
        l_89.f0 = l_92;
        return l_93;
    }
    if (g_7)
    {
        unsigned short l_97[10][7][2] = {{{0UL,0x4B48L},{0xD15AL,0xED82L},{0xD15AL,0x4B48L},{0UL,0x4B48L},{0xD15AL,0xED82L},{0xD15AL,0x4B48L},{0UL,0x4B48L}},{{0xD15AL,0xED82L},{0xD15AL,0x4B48L},{0UL,0x4B48L},{0xD15AL,0xED82L},{0xD15AL,0x4B48L},{0UL,0x4B48L},{0xD15AL,0xED82L}},{{0xD15AL,0x4B48L},{0UL,0x4B48L},{0xD15AL,0xED82L},{0xD15AL,0x4B48L},{0UL,0x4B48L},{0xD15AL,0xED82L},{0xD15AL,0x4B48L}},{{0UL,0x4B48L},{0xD15AL,0xED82L},{0xD15AL,0x4B48L},{0UL,0x4B48L},{0xD15AL,0xED82L},{0xD15AL,0x4B48L},{0UL,0x4B48L}},{{0xD15AL,0xED82L},{0xD15AL,0x4B48L},{0UL,0x4B48L},{0xD15AL,0xED82L},{0xD15AL,0x4B48L},{0UL,0x4B48L},{0xD15AL,0xED82L}},{{0xD15AL,0xED82L},{0UL,0xED82L},{0UL,0x9E94L},{0UL,0xED82L},{0UL,0xED82L},{0UL,0x9E94L},{0UL,0xED82L}},{{0UL,0xED82L},{0UL,0x9E94L},{0UL,0xED82L},{0UL,0xED82L},{0UL,0x9E94L},{0UL,0xED82L},{0UL,0xED82L}},{{0UL,0x9E94L},{0UL,0xED82L},{0UL,0xED82L},{0UL,0x9E94L},{0UL,0xED82L},{0UL,0xED82L},{0UL,0x9E94L}},{{0UL,0xED82L},{0UL,0xED82L},{0UL,0x9E94L},{0UL,0xED82L},{0UL,0xED82L},{0UL,0x9E94L},{0UL,0xED82L}},{{0UL,0xED82L},{0UL,0x9E94L},{0UL,0xED82L},{0UL,0xED82L},{0UL,0x9E94L},{0UL,0xED82L},{0UL,0xED82L}}};
        int l_99 = (-5L);
        int l_100 = (-1L);
        int l_101 = 0x15B33599L;
        int i, j, k;
        g_94 = l_89;
        l_101 = (g_62[1] = ((safe_add_func_int32_t_s_s(func_46((g_98 = func_46(p_41, l_97[7][2][1], g_62[0], l_89.f1, l_89.f1)), (l_100 = (l_99 = 1UL)), p_43, p_42, p_41), (-1L))) | g_94.f0));
    }
    else
    {
        struct S0 l_102 = {0x7AC20A80L,65533UL};
        l_89 = l_102;
        for (g_98 = 10; (g_98 == 18); g_98 = safe_add_func_int32_t_s_s(g_98, 8))
        {
            struct S0 l_105 = {-1L,0x9831L};
            for (g_79 = 0; (g_79 <= 6); g_79 += 1)
            {
                g_94 = l_105;
                g_6 = (l_89.f0 = g_80[1][5]);
                g_5 = 0xE12EA524L;
            }
        }
    }
    g_62[1] = (safe_sub_func_int16_t_s_s(p_42, 0x64D6L));
    return l_89;
}







static unsigned func_46(int p_47, unsigned char p_48, unsigned char p_49, int p_50, unsigned char p_51)
{
    const struct S0 l_63 = {-6L,0UL};
    struct S0 l_64 = {0x95EA9899L,0UL};
    unsigned l_88 = 5UL;
    l_64 = l_63;
    l_88 = (g_62[1] = (l_64.f0 = (((((safe_sub_func_int16_t_s_s((safe_sub_func_uint8_t_u_u((safe_add_func_uint8_t_u_u(((safe_rshift_func_int16_t_s_u(p_50, (g_87 = (l_64.f0 >= ((safe_lshift_func_int8_t_s_u((g_80[1][5] = (g_79 = (safe_add_func_int8_t_s_s(1L, (p_51 >= 255UL))))), 4)) <= ((safe_lshift_func_int8_t_s_u((safe_rshift_func_int16_t_s_u(1L, 14)), 7)) <= (safe_sub_func_int32_t_s_s(l_63.f0, p_50)))))))) >= ((l_64.f1 >= 4294967290UL) < p_48)), 255UL)), p_47)), g_5)) <= l_63.f0) != l_64.f0) == 0xBCL) & p_50)));
    g_7 = (p_50 = g_8);
    return p_49;
}





int main (void)
{
    int i, j;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_2[i], "g_2[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_6, "g_6", print_hash_value);
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_8, "g_8", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_62[i], "g_62[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_79, "g_79", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_80[i][j], "g_80[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_87, "g_87", print_hash_value);
    transparent_crc(g_94.f0, "g_94.f0", print_hash_value);
    transparent_crc(g_94.f1, "g_94.f1", print_hash_value);
    transparent_crc(g_98, "g_98", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(g_184[i][j], "g_184[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_193, "g_193", print_hash_value);
    transparent_crc(g_263, "g_263", print_hash_value);
    transparent_crc(g_270, "g_270", print_hash_value);
    transparent_crc(g_339, "g_339", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_380[i][j], "g_380[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_383.f0, "g_383.f0", print_hash_value);
    transparent_crc(g_383.f1, "g_383.f1", print_hash_value);
    transparent_crc(g_479, "g_479", print_hash_value);
    transparent_crc(g_494, "g_494", print_hash_value);
    transparent_crc(g_505, "g_505", print_hash_value);
    transparent_crc(g_535, "g_535", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
