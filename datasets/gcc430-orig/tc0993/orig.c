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
   const char f0;
   const long long f1;
   int f2;
   const unsigned long long f3;
   int f4;
};

struct S1 {
   long long f0;
   int f1;
   int f2;
   unsigned short f3;
   short f4;
   short f5;
};


static const struct S1 g_28 = {-2L,4L,0x8636EEBCL,0UL,0x3E62L,-2L};
static unsigned long long g_52 = 4UL;
static int g_54[3] = {0x3E97A0EDL,0x3E97A0EDL,0x3E97A0EDL};
static int *g_53 = &g_54[2];
static struct S1 g_77 = {0x0B499DA406727EBDLL,5L,0x2206D238L,1UL,0x1DA0L,0x0B47L};
static const int *g_82 = &g_77.f2;
static short *g_142[5][10][5] = {{{&g_77.f5,&g_77.f4,&g_77.f4,(void*)0,&g_77.f4},{&g_77.f4,&g_77.f4,&g_77.f4,&g_77.f5,(void*)0},{(void*)0,&g_77.f4,&g_77.f5,&g_77.f4,&g_77.f5},{&g_77.f5,(void*)0,&g_77.f4,&g_77.f5,&g_77.f4},{&g_77.f5,&g_77.f5,&g_77.f4,&g_77.f4,&g_77.f4},{&g_77.f4,&g_77.f4,&g_77.f5,&g_77.f4,&g_77.f4},{&g_77.f4,&g_77.f4,&g_77.f4,(void*)0,&g_77.f5},{(void*)0,&g_77.f4,&g_77.f4,&g_77.f4,&g_77.f5},{&g_77.f4,(void*)0,&g_77.f5,&g_77.f4,(void*)0},{(void*)0,&g_77.f4,(void*)0,&g_77.f4,(void*)0}},{{&g_77.f4,&g_77.f4,(void*)0,(void*)0,&g_77.f4},{&g_77.f4,&g_77.f4,&g_77.f4,&g_77.f5,&g_77.f5},{(void*)0,&g_77.f4,(void*)0,&g_77.f4,&g_77.f4},{&g_77.f5,&g_77.f5,(void*)0,&g_77.f4,&g_77.f4},{(void*)0,&g_77.f4,&g_77.f4,(void*)0,(void*)0},{&g_77.f5,&g_77.f4,(void*)0,&g_77.f4,(void*)0},{&g_77.f4,(void*)0,(void*)0,&g_77.f5,&g_77.f5},{(void*)0,&g_77.f4,&g_77.f4,(void*)0,&g_77.f4},{&g_77.f4,(void*)0,(void*)0,&g_77.f5,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,&g_77.f4}},{{&g_77.f4,&g_77.f4,&g_77.f4,(void*)0,(void*)0},{(void*)0,&g_77.f4,(void*)0,&g_77.f5,&g_77.f5},{(void*)0,&g_77.f4,(void*)0,(void*)0,&g_77.f5},{&g_77.f5,(void*)0,&g_77.f4,&g_77.f4,(void*)0},{(void*)0,&g_77.f4,(void*)0,&g_77.f4,(void*)0},{&g_77.f4,&g_77.f4,(void*)0,(void*)0,&g_77.f4},{&g_77.f4,&g_77.f4,&g_77.f4,&g_77.f5,&g_77.f5},{(void*)0,&g_77.f4,(void*)0,&g_77.f5,&g_77.f4},{&g_77.f4,&g_77.f4,&g_77.f4,&g_77.f4,&g_77.f5},{&g_77.f4,&g_77.f5,(void*)0,&g_77.f5,(void*)0}},{{(void*)0,(void*)0,&g_77.f4,&g_77.f5,&g_77.f5},{(void*)0,&g_77.f4,&g_77.f4,&g_77.f4,&g_77.f5},{&g_77.f4,&g_77.f4,(void*)0,(void*)0,&g_77.f4},{&g_77.f4,(void*)0,&g_77.f4,&g_77.f4,&g_77.f5},{&g_77.f4,&g_77.f5,&g_77.f4,&g_77.f5,&g_77.f5},{&g_77.f4,(void*)0,(void*)0,&g_77.f5,&g_77.f5},{&g_77.f5,(void*)0,&g_77.f4,&g_77.f5,&g_77.f4},{&g_77.f4,&g_77.f5,&g_77.f4,(void*)0,&g_77.f4},{&g_77.f4,(void*)0,(void*)0,&g_77.f4,&g_77.f5},{(void*)0,&g_77.f5,&g_77.f4,&g_77.f4,(void*)0}},{{&g_77.f4,&g_77.f4,&g_77.f4,&g_77.f5,&g_77.f4},{(void*)0,(void*)0,(void*)0,&g_77.f4,&g_77.f4},{&g_77.f4,&g_77.f4,&g_77.f4,&g_77.f5,&g_77.f4},{&g_77.f4,&g_77.f4,&g_77.f4,&g_77.f4,&g_77.f5},{&g_77.f4,&g_77.f5,(void*)0,&g_77.f5,(void*)0},{(void*)0,(void*)0,&g_77.f4,&g_77.f5,&g_77.f5},{(void*)0,&g_77.f4,&g_77.f4,&g_77.f4,&g_77.f4},{&g_77.f5,&g_77.f5,&g_77.f5,(void*)0,(void*)0},{&g_77.f4,&g_77.f4,&g_77.f4,&g_77.f4,&g_77.f5},{&g_77.f5,&g_77.f4,&g_77.f4,&g_77.f4,&g_77.f5}}};
static int g_157 = 0L;
static int * const g_156 = &g_157;
static const short *g_165[2] = {&g_28.f5,&g_28.f5};
static unsigned g_188 = 4294967292UL;
static unsigned short g_213 = 65535UL;
static short g_214[1][6] = {{6L,6L,6L,6L,6L,6L}};
static unsigned g_240 = 4294967295UL;
static char g_255[1][4][5] = {{{0x18L,0x18L,0x18L,0x18L,0x18L},{0x18L,0x18L,0x18L,0x18L,0x18L},{0x18L,0x18L,0x18L,0x18L,0x18L},{0x18L,0x18L,0x18L,0x18L,0x18L}}};
static struct S1 g_257 = {0xDFEC0DF3DED07D7DLL,-1L,-1L,0UL,0x1710L,0x6551L};
static long long *g_265 = &g_77.f0;
static unsigned char g_280[8] = {255UL,255UL,255UL,255UL,255UL,255UL,255UL,255UL};
static short **g_281 = &g_142[1][9][0];
static struct S1 g_288 = {-9L,-1L,9L,4UL,2L,3L};
static unsigned long long *g_318 = &g_52;
static unsigned long long **g_317[3] = {&g_318,&g_318,&g_318};
static struct S1 *g_333 = &g_257;
static unsigned short g_336 = 65534UL;
static struct S0 g_338 = {0x5AL,8L,-8L,0x7EA47254F7FA114DLL,1L};
static struct S0 g_404 = {0x3DL,0x7C7479FFF37F25A0LL,0x0A1CC50CL,18446744073709551615UL,0xB8EB95F6L};
static unsigned short *g_421 = &g_336;
static unsigned short **g_420[1][1] = {{&g_421}};
static struct S0 *** const g_436 = (void*)0;
static struct S0 *g_462 = &g_404;
static unsigned char g_473 = 255UL;
static unsigned *g_484 = &g_240;
static unsigned **g_483 = &g_484;
static char g_656[8] = {0xFAL,0xFAL,0xFAL,0xFAL,0xFAL,0xFAL,0xFAL,0xFAL};
static unsigned char g_720 = 0xE1L;
static unsigned long long g_770[9] = {0xD65BAF9B78D78017LL,0xD65BAF9B78D78017LL,0x92D403F07D260D51LL,0xD65BAF9B78D78017LL,0xD65BAF9B78D78017LL,0x92D403F07D260D51LL,0xD65BAF9B78D78017LL,0xD65BAF9B78D78017LL,0x92D403F07D260D51LL};
static struct S0 g_835 = {-10L,6L,0x54326AC0L,0x04B69E99F8BD3AEALL,4L};
static long long **g_852 = &g_265;
static long long ***g_851 = &g_852;
static unsigned char *g_864[1][7] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
static unsigned char **g_863 = &g_864[0][1];
static unsigned *g_877 = &g_240;
static unsigned **g_876 = &g_877;
static unsigned long long g_893 = 18446744073709551610UL;
static unsigned g_926 = 0UL;



static long long func_1(void);
static struct S1 func_2(unsigned char p_3, unsigned p_4, int p_5, short p_6, struct S1 p_7);
static unsigned char func_8(unsigned long long p_9);
static unsigned short func_12(unsigned p_13, long long p_14, unsigned p_15);
static unsigned long long func_16(struct S0 p_17, struct S0 p_18, int p_19, struct S1 p_20, struct S0 p_21);
static struct S0 func_22(const struct S1 p_23, short p_24, char p_25, struct S1 p_26, int p_27);
static unsigned char func_29(short p_30, const char p_31);
static char func_34(int p_35, unsigned short p_36, int p_37);
static int * func_39(int * p_40, unsigned short p_41, int * const p_42, unsigned p_43);
static int * func_44(unsigned long long p_45, unsigned long long p_46, int p_47, int * p_48, struct S1 p_49);
static long long func_1(void)
{
    long long l_38[2];
    short *l_256 = &g_77.f5;
    struct S1 l_405 = {0x9655BBAA5CEB300CLL,0xA331FA30L,0x363EA6A0L,2UL,0x0599L,0x62B1L};
    struct S0 l_406 = {-8L,3L,-1L,18446744073709551615UL,0L};
    unsigned char *l_621[7][9] = {{(void*)0,&g_280[7],&g_280[7],(void*)0,&g_280[2],&g_280[3],(void*)0,&g_280[7],&g_280[3]},{&g_473,&g_280[3],(void*)0,&g_280[7],&g_473,&g_473,&g_473,&g_473,(void*)0},{&g_280[7],&g_280[7],&g_473,&g_473,&g_280[7],&g_280[7],(void*)0,&g_473,&g_473},{&g_280[0],&g_280[7],(void*)0,&g_473,(void*)0,&g_280[7],&g_280[0],(void*)0,&g_473},{&g_280[1],&g_280[7],&g_280[2],&g_280[7],&g_280[7],&g_280[2],(void*)0,&g_280[2],&g_280[7]},{&g_280[1],(void*)0,(void*)0,&g_280[1],&g_280[3],&g_473,&g_473,(void*)0,&g_473},{(void*)0,&g_280[7],&g_473,&g_280[7],&g_280[3],&g_280[3],&g_280[7],&g_473,&g_280[7]}};
    struct S1 *l_841 = &l_405;
    unsigned * const *l_869 = &g_484;
    unsigned * const **l_868[9][1] = {{&l_869},{&l_869},{&l_869},{&l_869},{&l_869},{&l_869},{&l_869},{&l_869},{&l_869}};
    int * const l_930[9][5][5] = {{{&g_288.f2,&l_406.f4,&g_77.f2,&g_157,&l_405.f2},{&g_54[2],&g_54[0],&g_257.f2,&g_77.f2,&g_157},{&g_257.f2,&g_157,&l_406.f4,&g_835.f2,(void*)0},{&g_157,&g_338.f2,&g_404.f2,(void*)0,&g_338.f2},{&l_406.f2,&g_257.f2,&g_835.f2,(void*)0,&g_157}},{{&g_54[2],(void*)0,(void*)0,&g_404.f2,&g_338.f2},{&l_406.f4,&g_77.f2,&g_77.f2,&l_406.f4,&g_77.f2},{&g_54[0],(void*)0,&l_405.f2,&g_404.f2,&g_54[1]},{(void*)0,(void*)0,(void*)0,(void*)0,&g_77.f2},{&g_338.f4,&l_406.f4,&g_54[2],&g_404.f2,&g_338.f4}},{{&l_406.f2,&g_77.f2,(void*)0,(void*)0,&g_404.f4},{&g_404.f4,&g_54[1],(void*)0,&g_54[2],&g_338.f4},{&l_405.f2,(void*)0,&g_835.f2,&l_406.f4,(void*)0},{&g_404.f2,&g_338.f4,(void*)0,&g_338.f4,&g_338.f4},{&g_338.f4,(void*)0,&g_338.f4,(void*)0,&g_157}},{{&g_54[2],&g_835.f4,&l_406.f4,&g_338.f2,&g_404.f4},{&g_157,&g_404.f4,&g_54[2],&g_835.f2,&g_404.f4},{&l_406.f4,(void*)0,&l_406.f4,&g_404.f4,(void*)0},{(void*)0,&g_77.f2,&g_338.f4,&g_257.f2,(void*)0},{&g_404.f4,&g_157,(void*)0,&g_404.f4,&g_54[1]}},{{&l_405.f2,&g_835.f2,&g_835.f2,&l_406.f4,&g_257.f2},{&g_157,&g_257.f2,(void*)0,&g_338.f4,(void*)0},{&g_157,&g_157,(void*)0,&l_405.f2,&l_406.f4},{&g_404.f4,&g_338.f2,&g_54[2],&l_405.f2,&g_157},{&l_406.f4,&g_257.f2,(void*)0,&g_257.f2,&g_338.f4}},{{&g_404.f2,&g_338.f2,&g_157,&g_338.f4,&g_338.f4},{&l_406.f4,&g_157,(void*)0,&g_338.f4,&g_77.f2},{&g_404.f2,&g_404.f4,&l_406.f2,&g_157,(void*)0},{(void*)0,&g_77.f2,&g_157,&g_404.f4,&l_405.f2},{(void*)0,(void*)0,&g_257.f2,&g_257.f2,(void*)0}},{{&g_288.f2,&g_288.f2,(void*)0,&l_405.f2,(void*)0},{&g_338.f4,&g_404.f4,(void*)0,&g_54[2],&g_54[1]},{&g_835.f2,&g_288.f2,&g_77.f2,&g_835.f2,&l_406.f2},{&g_338.f4,&g_257.f2,&l_406.f4,&g_338.f4,&g_404.f4},{&g_288.f2,&l_406.f4,(void*)0,&g_77.f2,&g_257.f2}},{{(void*)0,&g_404.f2,&g_404.f4,&g_835.f4,&g_338.f4},{(void*)0,(void*)0,&g_835.f4,&l_406.f4,&g_77.f2},{&g_404.f2,&g_54[2],&g_835.f2,&g_54[2],&g_404.f2},{&g_338.f4,&g_404.f4,(void*)0,&l_406.f4,&g_77.f2},{&g_338.f4,(void*)0,&g_157,&g_338.f2,&g_257.f2}},{{&l_405.f2,&l_406.f4,&g_157,&g_404.f4,&g_77.f2},{&g_257.f2,&g_338.f2,(void*)0,&l_406.f4,&g_404.f2},{&g_77.f2,&g_77.f2,(void*)0,&g_77.f2,&g_77.f2},{(void*)0,&g_404.f4,&g_835.f4,&g_404.f2,&g_338.f4},{&g_338.f4,(void*)0,&l_406.f4,&g_835.f4,&g_257.f2}}};
    const unsigned short l_933 = 65533UL;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_38[i] = 0x0A6219FF40B36FE0LL;
    (*l_841) = func_2((l_405.f2 = func_8((safe_sub_func_uint16_t_u_u(func_12((((0x35240CA70051EFDBLL & (func_16(func_22(g_28, ((*l_256) = (g_28.f5 && (func_29((safe_rshift_func_uint8_t_u_s(g_28.f3, 5)), func_34(g_28.f2, l_38[1], g_28.f1)) | g_255[0][1][4]))), g_28.f0, g_257, (*g_156)), g_404, g_338.f3, l_405, l_406) >= l_405.f4)) <= l_38[1]) & l_406.f2), g_28.f3, l_405.f2), l_405.f4)))), g_338.f0, g_28.f4, l_405.f0, g_28);


    ;
    ;

    for (g_404.f2 = 0; (g_404.f2 <= 1); g_404.f2 += 1)
    {
        struct S1 l_842 = {0x3032A0E78C54BDD4LL,1L,-10L,65535UL,0xD5A9L,0x4944L};
        unsigned l_858 = 4294967295UL;
        int *l_859 = &g_77.f2;
        unsigned **l_874[1];
        int i;
        for (i = 0; i < 1; i++)
            l_874[i] = &g_484;
        (*l_841) = l_842;
        for (g_338.f2 = 1; (g_338.f2 >= 0); g_338.f2 -= 1)
        {
            int l_853 = 0x7A804C51L;
            struct S0 *l_865 = &g_404;
            char l_870 = 0x1AL;
            unsigned char l_871[4][9] = {{0x91L,1UL,1UL,0x91L,1UL,1UL,1UL,1UL,1UL},{247UL,0x3AL,0x3AL,247UL,0x3AL,0x3AL,247UL,0x3AL,0x3AL},{1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL},{247UL,0x3AL,0x3AL,247UL,0x3AL,0x3AL,247UL,0x3AL,0x3AL}};
            int * const l_927 = &g_257.f2;
            int *l_929 = &g_338.f4;
            int i, j;
            if (((((safe_mod_func_uint64_t_u_u(0x6C0F01FB6CBD6B12LL, (safe_add_func_int32_t_s_s(((*g_318) <= (l_853 = (safe_add_func_uint8_t_u_u(g_240, (safe_rshift_func_uint16_t_u_s(((g_851 = (void*)0) != &g_852), 10)))))), ((((l_38[g_404.f2] < (safe_add_func_uint64_t_u_u(((func_8(((func_8((safe_add_func_int16_t_s_s(((l_842.f0 && l_842.f0) ^ (-8L)), l_405.f2))) & (*g_318)) ^ l_38[g_404.f2])) > 1UL) ^ l_842.f3), l_842.f1))) & g_257.f4) | 0x962A8649L) && l_38[1]))))) ^ l_858) <= 0x3DCFL) < l_38[1]))
            {
                const int l_861[5][9] = {{0x5FC6C8BEL,1L,0x919CF279L,0x4AA7D59CL,0xD20DD2D1L,0xBED663B3L,0x5B6DE166L,0L,(-1L)},{0xC569608AL,0x71461EE7L,0L,0xCEE28EF4L,0x7C438C4EL,0xCEE28EF4L,0L,0x71461EE7L,0xC569608AL},{0xD20DD2D1L,1L,(-1L),0x7C438C4EL,0x5B6DE166L,0xCEE28EF4L,(-8L),0x919CF279L,0x71461EE7L},{1L,0xCEE28EF4L,0xBED663B3L,(-6L),(-6L),0xBED663B3L,0xCEE28EF4L,1L,0x4AA7D59CL},{0xD20DD2D1L,0x5B6DE166L,(-8L),(-1L),(-6L),0x5FC6C8BEL,(-1L),0x7C438C4EL,0x7C438C4EL}};
                unsigned *l_867 = &l_858;
                int l_903 = 0x551E56D2L;
                int i, j;
                for (l_842.f5 = 4; (l_842.f5 >= 0); l_842.f5 -= 1)
                {
                    int **l_862 = &g_53;
                    for (l_405.f3 = 0; (l_405.f3 <= 4); l_405.f3 += 1)
                    {
                        int **l_860 = &g_53;
                        (*l_860) = l_859;

                        ;
                        if (l_861[3][4])
                            continue;
                        if ((*g_156))
                            continue;
                    }


                    (*l_862) = &g_157;

                    ;
                    for (g_720 = 0; (g_720 <= 4); g_720 += 1)
                    {
                        g_863 = &l_621[2][5];

                        ;
                    }
                    for (l_405.f1 = 0; (l_405.f1 <= 6); l_405.f1 += 1)
                    {
                        struct S0 **l_866 = &g_462;
                        (*l_859) = l_406.f2;
                        g_462 = &g_835;

                        ;
                        (*l_866) = l_865;

                        ;
                        (*l_862) = (void*)0;

                        ;
                    }

                    ;
                }
                if ((((l_861[1][6] <= l_861[3][4]) & ((**g_483) != l_870)) != l_405.f2))
                {
                    const unsigned l_880 = 6UL;
                    int * const l_886 = (void*)0;
                    if (l_406.f3)
                        break;
                    if (l_871[2][0])
                    {
                        if ((*g_156))
                            break;
                    }
                    else
                    {
                        unsigned l_872 = 0x59F64E68L;
                        unsigned ***l_873 = &g_483;
                        unsigned ***l_875 = &l_874[0];
                        int **l_881 = &l_859;
                        char *l_882 = &l_870;
                        char *l_883 = (void*)0;
                        char *l_884 = &g_656[0];
                        long long *l_885[3][6][2] = {{{&g_288.f0,(void*)0},{&g_288.f0,&l_38[1]},{&l_405.f0,&g_288.f0},{&l_38[1],(void*)0},{&l_842.f0,&l_842.f0},{&l_405.f0,&l_842.f0}},{{&l_842.f0,(void*)0},{&l_38[1],&g_288.f0},{&l_405.f0,&l_38[1]},{&g_288.f0,&l_405.f0},{&l_38[1],&l_842.f0},{&g_288.f0,&l_38[1]}},{{&l_842.f0,&l_405.f0},{&g_288.f0,&g_288.f0},{&g_288.f0,&g_288.f0},{&g_288.f0,&l_405.f0},{&l_842.f0,&l_38[1]},{&g_288.f0,&l_842.f0}}};
                        int i, j, k;
                        (*g_156) = ((l_872 | l_861[3][4]) & ((*l_859) && func_12((*g_484), (((((*l_873) = &g_484) != (g_876 = ((*l_875) = l_874[0]))) <= (safe_sub_func_uint64_t_u_u(l_406.f4, (-8L)))) & (**g_852)), l_870)));
                        (*l_881) = (void*)0;

                        ;
                        (*l_881) = func_39(((*l_881) = &g_54[1]), ((l_861[4][8] != (((**g_852) = (l_405.f5 >= l_38[g_404.f2])) != (g_288.f0 = 0x03C64B4A779474EFLL))) != 0xFD4D179DF2290FB2LL), l_886, (*g_484));

                        ;
                        (*g_156) = (safe_lshift_func_int16_t_s_s(((((l_861[3][4] & g_473) <= (1L < g_336)) & (*g_156)) < l_871[2][0]), l_880));
                    }
                    for (l_842.f5 = 4; (l_842.f5 >= 0); l_842.f5 -= 1)
                    {
                        l_853 = l_861[4][6];
                    }
                    if ((safe_mod_func_int16_t_s_s((l_405.f4 <= (**g_483)), 0xC1C6L)))
                    {
                        char *l_900 = &g_255[0][3][2];
                        int l_904 = 7L;
                        (*g_156) = (safe_lshift_func_int16_t_s_s((l_853 != g_28.f0), (g_893 && ((safe_mod_func_int32_t_s_s(((safe_sub_func_uint8_t_u_u((l_903 = ((safe_mod_func_int8_t_s_s((l_870 >= ((*l_900) = (-10L))), (l_853 ^ (*g_421)))) < (*l_859))), 0xEAL)) || 1L), l_904)) <= l_861[3][4]))));
                    }
                    else
                    {
                        struct S1 **l_905 = &g_333;
                        (*l_905) = &g_288;

                        ;
                        (*l_859) = (*g_156);
                        if (l_405.f2)
                            break;
                        if ((*l_859))
                            continue;
                    }
                }
                else
                {
                    struct S1 l_906[5][1] = {{{0xDD4DFF60A000D716LL,0x87BF26C2L,0x16217139L,9UL,-2L,0L}},{{0x9C8F05D30D7CF04DLL,0L,0x3D8C2E8AL,0x9D31L,1L,1L}},{{0xDD4DFF60A000D716LL,0x87BF26C2L,0x16217139L,9UL,-2L,0L}},{{0x9C8F05D30D7CF04DLL,0L,0x3D8C2E8AL,0x9D31L,1L,1L}},{{0xDD4DFF60A000D716LL,0x87BF26C2L,0x16217139L,9UL,-2L,0L}}};
                    int i, j;
                    (*l_841) = l_906[0][0];
                    for (l_405.f2 = 0; (l_405.f2 <= 4); l_405.f2 += 1)
                    {
                        int **l_907 = &l_859;
                        if ((*g_156))
                            break;
                        if ((*g_156))
                            break;
                        (*l_907) = l_859;
                    }
                    for (g_257.f5 = 3; (g_257.f5 >= 0); g_257.f5 -= 1)
                    {
                        return (*g_265);


                    }
                }
            }
            else
            {
                if ((*g_156))
                    break;
                (*g_156) = l_405.f4;
            }

            ;
            for (l_405.f3 = 0; (l_405.f3 <= 4); l_405.f3 += 1)
            {
                long long **l_916 = &g_265;
                unsigned **l_922 = &g_877;
                int l_928 = 2L;
                for (g_257.f5 = 0; (g_257.f5 <= 4); g_257.f5 += 1)
                {
                    long long **l_915[1];
                    unsigned short * const l_921 = &g_257.f3;
                    int i;
                    for (i = 0; i < 1; i++)
                        l_915[i] = &g_265;
                    for (l_405.f2 = 0; (l_405.f2 <= 4); l_405.f2 += 1)
                    {
                        unsigned ** const l_912[3] = {(void*)0,(void*)0,(void*)0};
                        unsigned ** const *l_911 = &l_912[0];
                        unsigned ** const **l_910 = &l_911;
                        int i;
                        (*g_156) = (safe_rshift_func_int16_t_s_s(((((*l_859) != (l_405.f5 && (&g_876 != ((*l_910) = &g_483)))) || (safe_lshift_func_uint16_t_u_u(((l_915[0] != l_916) != (safe_lshift_func_int8_t_s_u(g_77.f3, l_406.f4))), 12))) <= (safe_mod_func_uint32_t_u_u(((l_921 != (void*)0) ^ 9L), (**g_876)))), 1));

                        ;
                    }
                    if ((*g_156))
                        break;
                }
                for (l_406.f2 = 3; (l_406.f2 >= 0); l_406.f2 -= 1)
                {
                    int **l_932[9] = {&g_53,&g_53,&g_53,&g_53,&g_53,&g_53,&g_53,&g_53,&g_53};
                    int i;
                    (*g_156) = ((*l_859) = ((*g_877) || (*g_877)));
                    for (g_720 = 0; (g_720 <= 4); g_720 += 1)
                    {
                        struct S1 l_923 = {0x50BAE9719BC291CDLL,6L,0x6D9556EDL,0xD7C8L,1L,0L};
                        struct S1 *l_924 = &g_257;
                        int *l_925 = (void*)0;
                        int **l_931 = &g_53;
                        l_922 = (void*)0;

                        ;
                        (*l_924) = l_923;
                        l_929 = func_39((g_53 = l_925), g_926, l_927, func_8(l_928));

                        ;
                        ;
                        (*l_931) = func_39(&g_54[2], l_928, l_930[6][2][2], (**g_876));

                        ;
                    }
                    (*l_929) = (*l_859);
                    g_82 = l_859;

                    ;
                }

                ;
            }

            ;
        }

        ;
    }


    ;
    ;
    ;
    (*g_156) = l_933;
    (*g_156) = ((*g_484) | 0x2A1B0E02L);
    return (*g_265);


}







static struct S1 func_2(unsigned char p_3, unsigned p_4, int p_5, short p_6, struct S1 p_7)
{
    int * const *l_622[2][8] = {{&g_156,&g_156,&g_53,&g_156,&g_156,(void*)0,(void*)0,&g_156},{&g_156,&g_53,&g_53,&g_156,&g_53,&g_156,&g_53,&g_156}};
    int *l_625 = &g_54[2];
    short *l_630 = (void*)0;
    struct S1 **l_635 = (void*)0;
    int *l_639 = &g_157;
    const struct S1 l_718 = {0L,-7L,0xD0D79337L,1UL,9L,0L};
    unsigned l_725 = 0xE3D8DCD3L;
    char l_765 = 0xD5L;
    int *l_782 = &g_257.f2;
    int *l_790 = &g_288.f2;
    const long long *l_824 = &g_338.f1;
    const long long **l_823 = &l_824;
    struct S0 *l_834 = &g_835;
    int i, j;
    if ((&g_156 != l_622[1][0]))
    {
        int *l_623 = (void*)0;
        int **l_624[1];
        short ***l_668 = &g_281;
        short ****l_667[6] = {&l_668,&l_668,&l_668,&l_668,&l_668,&l_668};
        int i;
        for (i = 0; i < 1; i++)
            l_624[i] = (void*)0;
        l_625 = l_623;

        ;
        for (g_77.f0 = 0; (g_77.f0 != 16); ++g_77.f0)
        {
            int *l_638[4] = {&g_77.f2,&g_77.f2,&g_77.f2,&g_77.f2};
            const unsigned long long l_657[4] = {3UL,3UL,3UL,3UL};
            short *l_658 = (void*)0;
            short *l_659 = &g_288.f4;
            unsigned l_673 = 0UL;
            long long **l_678[1][2][2];
            int l_690 = (-1L);
            int l_692 = (-9L);
            struct S0 * const l_709 = &g_338;
            struct S0 **l_710 = &g_462;
            int i, j, k;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 2; j++)
                {
                    for (k = 0; k < 2; k++)
                        l_678[i][j][k] = &g_265;
                }
            }
            if ((safe_rshift_func_uint8_t_u_u(0x3FL, ((p_7.f5 && 0L) || 0xC25880665A0E690FLL))))
            {
                short *l_631 = &g_214[0][3];
                short *l_632 = &g_288.f5;
                int l_636 = 2L;
                (*g_53) = (((l_631 = l_630) == l_632) != (l_636 = (safe_rshift_func_uint16_t_u_u(p_7.f5, (p_7.f3 && (!(&g_333 != l_635)))))));

                ;
            }
            else
            {
                int *l_637 = &g_54[0];
                if ((*g_82))
                {
                    if ((*g_82))
                        break;
                }
                else
                {
                    if ((*g_156))
                        break;
                    l_637 = l_637;
                    l_639 = l_638[1];

                    ;
                }

                ;
            }

            ;
            l_639 = &g_54[0];

            ;
        }

        ;
    }
    else
    {
        int *l_711 = &g_157;
        int **l_712 = &l_711;
        int **l_713 = &l_639;
        int **l_714 = &l_625;
        (*l_714) = ((*l_713) = ((*l_712) = l_711));

        ;
    }

    ;
    ;
    if ((*g_156))
    {
        int *l_715 = &g_77.f2;
        int **l_716 = (void*)0;
        int **l_717[3][5] = {{&l_715,&l_715,&l_639,&l_715,&l_715},{&l_639,&l_715,&l_639,&l_639,&l_715},{&l_715,&l_639,&l_639,&l_715,&l_639}};
        char *l_719[2];
        struct S0 l_721 = {0x88L,0x730C17F64D36DE51LL,1L,6UL,0x9DA1093EL};
        short l_722[5] = {4L,4L,4L,4L,4L};
        struct S1 l_733 = {-8L,0x4F92C039L,1L,65534UL,4L,0x96EFL};
        int i, j;
        for (i = 0; i < 2; i++)
            l_719[i] = (void*)0;
        g_82 = l_715;

        ;
        p_7.f2 = func_16(func_22(l_718, ((void*)0 != g_318), (g_720 = 0x3DL), l_718, (*g_53)), l_721, l_722[4], p_7, l_721);


        ;
        ;
        for (g_338.f4 = 0; (g_338.f4 == (-21)); g_338.f4 = safe_sub_func_uint32_t_u_u(g_338.f4, 4))
        {
            struct S0 l_728 = {-1L,5L,0xB972AB71L,0xD94102629B4F3514LL,0L};
            struct S1 l_729 = {-1L,-1L,4L,0x21D9L,-8L,0L};
            int *l_732 = (void*)0;
            unsigned short *l_766 = &g_213;
            long long *l_780 = (void*)0;
            g_82 = &g_54[1];

            ;
            if ((*g_82))
            {
                int *l_736 = &g_54[0];
                int * const l_737 = &l_721.f4;
                for (g_473 = 0; (g_473 == 46); g_473 = safe_add_func_int64_t_s_s(g_473, 4))
                {
                    int *l_740 = &g_54[0];
                    unsigned short *l_753 = (void*)0;
                    unsigned short *l_754 = (void*)0;
                    unsigned short *l_755[3][6][5] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_257.f3,&l_733.f3,&l_733.f3,&l_729.f3,&l_733.f3},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_288.f3,&l_733.f3,&g_288.f3,(void*)0,&l_733.f3},{(void*)0,&g_257.f3,&g_257.f3,(void*)0,&g_257.f3},{&l_733.f3,&l_733.f3,&g_257.f3,&l_733.f3,&l_733.f3}},{{&g_257.f3,(void*)0,&g_257.f3,&g_257.f3,(void*)0},{&l_733.f3,(void*)0,&g_288.f3,&l_733.f3,&g_288.f3},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_288.f3,&l_733.f3,&g_288.f3,(void*)0,&l_733.f3},{(void*)0,&g_257.f3,&g_257.f3,(void*)0,&g_257.f3},{&l_733.f3,&l_733.f3,&g_257.f3,&l_733.f3,&l_733.f3}},{{&g_257.f3,(void*)0,&g_257.f3,&g_257.f3,(void*)0},{&l_733.f3,(void*)0,&g_288.f3,&l_733.f3,&g_288.f3},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_288.f3,&l_733.f3,&g_288.f3,(void*)0,&l_733.f3},{(void*)0,&g_257.f3,&g_257.f3,(void*)0,&g_257.f3},{&l_733.f3,&l_733.f3,&g_257.f3,&l_733.f3,&l_733.f3}}};
                    int i, j, k;
                    if ((*g_82))
                    {
                        unsigned short l_738 = 65531UL;
                        unsigned *l_739 = &g_188;
                        l_740 = func_39(func_39((l_736 = (g_53 = &g_157)), p_7.f3, l_737, ((*l_739) = ((*g_484) = (l_738 > p_7.f2)))), (*g_421), l_739, p_7.f1);

                        ;
                        ;
                        if ((*l_740))
                            continue;
                    }
                    else
                    {
                        struct S1 *l_741 = &g_77;
                        int l_742[8][5] = {{0xE5074AB9L,0xDB175C19L,1L,1L,0xDB175C19L},{0xDB175C19L,1L,0xE5074AB9L,0xDB175C19L,1L},{(-1L),0xDB175C19L,1L,0xDB175C19L,(-1L)},{0xE5074AB9L,0xDB175C19L,0xE5074AB9L,1L,0xDB175C19L},{(-5L),0xE5074AB9L,0xE5074AB9L,(-5L),1L},{(-1L),(-5L),0L,0xDB175C19L,0xDB175C19L},{1L,(-5L),1L,1L,(-5L)},{0xDB175C19L,0xE5074AB9L,1L,0xDB175C19L,1L}};
                        int i, j;
                        (*l_741) = p_7;
                        (*l_737) = (*g_82);
                        l_736 = func_39(l_732, ((*g_421) = (safe_lshift_func_uint8_t_u_s(((((safe_add_func_int8_t_s_s(p_7.f2, g_213)) <= (*g_318)) & (func_8(p_6) <= p_7.f0)) <= (0xC0E6A00388A910D4LL <= (*g_265))), p_4))), l_740, p_7.f4);

                        ;
                    }
                    (*l_715) = ((safe_sub_func_int32_t_s_s((((*l_737) == 0x6A66L) || (safe_lshift_func_uint16_t_u_u(0x2016L, ((*l_639) = (0x6584L || ((safe_mod_func_uint64_t_u_u(((p_7.f3 = ((*g_421) = func_8((*g_318)))) < p_6), 0xC5C4BB80A656475FLL)) < (p_6 <= 1L))))))), (**g_483))) < p_7.f1);
                    for (g_52 = 0; (g_52 <= 2); g_52 += 1)
                    {
                        int i, j;
                        if (p_7.f3)
                            break;
                    }
                    l_740 = l_732;

                    ;
                }

                ;
            }
            else
            {
                long long *l_764 = &g_257.f0;
                int l_772 = (-5L);
                if (((*l_715) = p_7.f1))
                {
                    struct S1 l_756[3][3] = {{{0xB821DB447F249184LL,1L,0x09968A10L,0UL,-6L,0x5C2BL},{0xB821DB447F249184LL,1L,0x09968A10L,0UL,-6L,0x5C2BL},{0xB821DB447F249184LL,1L,0x09968A10L,0UL,-6L,0x5C2BL}},{{-1L,0x51BBD5D8L,0x0297D8EDL,0x0625L,-1L,-1L},{-1L,0x51BBD5D8L,0x0297D8EDL,0x0625L,-1L,-1L},{-1L,0x51BBD5D8L,0x0297D8EDL,0x0625L,-1L,-1L}},{{0xB821DB447F249184LL,1L,0x09968A10L,0UL,-6L,0x5C2BL},{0xB821DB447F249184LL,1L,0x09968A10L,0UL,-6L,0x5C2BL},{0xB821DB447F249184LL,1L,0x09968A10L,0UL,-6L,0x5C2BL}}};
                    int i, j;
                    for (g_288.f2 = 7; (g_288.f2 >= 0); g_288.f2 -= 1)
                    {
                        struct S1 *l_757 = &l_729;
                        struct S0 **l_758 = (void*)0;
                        struct S0 **l_759 = &g_462;
                        int i;
                        (*l_757) = l_756[0][2];
                        (*l_759) = &l_721;

                        ;
                        (*l_715) = (0UL > (g_280[g_288.f2] && ((p_6 || (*l_715)) ^ (*l_715))));
                        l_732 = (void*)0;
                    }

                    ;
                    return l_729;


                }
                else
                {
                    unsigned char l_771 = 0x20L;
                    short *l_773[1][10][7] = {{{&g_77.f4,&l_722[4],(void*)0,&g_77.f4,&g_257.f4,&g_214[0][5],&l_722[4]},{(void*)0,&l_729.f4,&g_77.f4,&l_729.f4,&g_77.f4,&l_729.f4,(void*)0},{&l_729.f4,&l_722[4],&g_257.f4,&g_77.f4,(void*)0,&l_729.f4,&g_77.f4},{&g_77.f4,&g_257.f4,&g_214[0][5],&l_722[4],&l_722[4],&g_214[0][5],&g_257.f4},{&l_722[4],&g_214[0][4],&g_257.f4,&l_729.f4,&g_214[0][4],&g_77.f4,&g_257.f4},{&g_214[0][5],&l_722[4],&g_77.f4,&g_214[0][5],&g_257.f4,&g_214[0][5],&g_77.f4},{(void*)0,(void*)0,(void*)0,&l_729.f4,&l_722[4],&g_257.f4,(void*)0},{(void*)0,&g_77.f4,&g_257.f4,&l_722[4],&l_729.f4,&l_729.f4,&l_722[4]},{&g_214[0][5],&g_257.f4,&g_214[0][5],&g_77.f4,&l_722[4],&g_214[0][5],&g_214[0][4]},{&l_729.f4,&g_257.f4,&g_77.f4,&g_214[0][5],&g_257.f4,(void*)0,&g_257.f4}}};
                    int l_774 = 0x2E8C3D03L;
                    long long *l_779 = (void*)0;
                    long long **l_781 = &l_764;
                    int i, j, k;
                    if ((safe_add_func_uint16_t_u_u((&g_53 == &l_715), (safe_sub_func_uint16_t_u_u((l_764 == l_764), (func_8((*g_318)) == p_7.f3))))))
                    {
                        return l_729;
                    }
                    else
                    {
                        unsigned short **l_767 = &l_766;
                        int l_768 = 0xB7435EE5L;
                        unsigned long long *l_769[9] = {&g_770[2],&g_770[4],&g_770[2],&g_770[4],&g_770[2],&g_770[4],&g_770[2],&g_770[4],&g_770[2]};
                        int i;
                        l_765 = (*g_82);
                        p_7.f2 = ((((l_630 == ((*l_767) = l_766)) || l_768) | 0UL) || p_7.f3);
                    }
                    (*l_715) = ((l_774 = l_772) != ((*g_421) = func_12((safe_mod_func_int32_t_s_s(0x7C3F5426L, func_12(p_7.f5, l_772, p_5))), ((*l_764) = (safe_sub_func_uint8_t_u_u(g_257.f5, g_288.f3))), p_5)));

                    ;
                    ;
                    if ((p_4 & (l_779 != ((*l_781) = l_780))))
                    {
                        g_82 = &g_157;

                        ;
                    }
                    else
                    {
                        if (p_7.f4)
                            break;
                        if ((*g_53))
                            continue;
                        (*g_156) = (l_772 = 0xD223A024L);
                    }

                    ;
                    ;
                    for (g_288.f4 = 0; (g_288.f4 <= 2); g_288.f4 += 1)
                    {
                        int *l_783 = &l_772;
                        int i, j;
                        l_783 = l_782;

                        ;
                    }
                }

                ;
                ;
                ;
                ;
                for (g_77.f5 = (-23); (g_77.f5 <= 19); g_77.f5 = safe_add_func_int8_t_s_s(g_77.f5, 3))
                {
                    for (g_338.f2 = 0; (g_338.f2 != 4); ++g_338.f2)
                    {
                        (*g_156) = func_16((*g_462), l_728, (*g_156), l_729, l_728);
                    }
                    if ((*g_82))
                        continue;
                }
                g_82 = (void*)0;

                ;
                g_53 = &l_772;

                ;
            }

            ;
            if (p_6)
                break;
        }

        ;
        for (g_77.f3 = 0; (g_77.f3 == 12); ++g_77.f3)
        {
            unsigned short l_806 = 65526UL;
            int *l_807 = &g_404.f4;
            l_733 = p_7;
            for (l_725 = 0; (l_725 <= 4); l_725 += 1)
            {
                short * const ** const *l_805 = (void*)0;
                short * const ** const **l_804 = &l_805;
                int i;
                g_82 = &g_54[2];

                ;
                if (g_280[l_725])
                    continue;
                for (p_7.f2 = 0; (p_7.f2 <= 1); p_7.f2 += 1)
                {
                    const unsigned char l_793 = 246UL;
                    int i, j, k;
                    l_807 = func_39(&g_157, g_280[p_7.f2], (g_53 = func_39(l_790, ((*g_421) = (safe_mod_func_uint64_t_u_u(l_793, (p_7.f5 && (safe_lshift_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s(l_793, 6)), (safe_sub_func_uint8_t_u_u((safe_mod_func_int32_t_s_s(((*g_156) = ((*l_782) = (safe_rshift_func_int8_t_s_s(((l_804 != (void*)0) <= l_806), 4)))), l_793)), l_806)))))))), &g_54[0], p_4)), (**g_483));

                    ;
                    ;
                    if (p_3)
                        continue;
                }
            }

            ;
        }
    }
    else
    {
        unsigned long long **l_808 = &g_318;
        char *l_809 = &g_656[0];
        int *l_814 = &g_257.f2;
        struct S1 *l_822 = &g_77;
        int *l_827 = (void*)0;
        if ((((void*)0 != l_808) && ((*l_809) = g_52)))
        {
            unsigned long long l_828 = 0xB5E2040D11607DEALL;
            int *l_830 = &g_338.f2;
            for (p_7.f2 = (-15); (p_7.f2 != 17); p_7.f2++)
            {
                long long * const l_818 = &g_257.f0;
                int **l_829[5][5] = {{&l_782,&l_782,&l_782,&l_782,&l_782},{&l_827,&g_53,&l_827,&g_53,&l_827},{&l_782,&l_782,&l_782,&l_782,&l_782},{&l_827,&g_53,&l_827,&g_53,&l_827},{&l_782,&l_782,&l_782,&l_782,&l_782}};
                struct S0 *l_833 = &g_338;
                int i, j;
                for (g_404.f2 = 1; (g_404.f2 >= 11); g_404.f2++)
                {
                    int **l_815[7][1] = {{&l_639},{&g_53},{&g_53},{&l_639},{&g_53},{&g_53},{&l_639}};
                    struct S1 **l_821[6];
                    const long long ***l_825 = (void*)0;
                    const long long ***l_826 = &l_823;
                    int i, j;
                    for (i = 0; i < 6; i++)
                        l_821[i] = &g_333;
                    g_53 = l_814;

                    ;
                    for (g_257.f0 = 0; (g_257.f0 > 27); g_257.f0 = safe_add_func_uint8_t_u_u(g_257.f0, 7))
                    {
                        unsigned l_819 = 0UL;
                        struct S1 *l_820[10][9][2] = {{{&g_257,&g_257},{&g_257,&g_257},{&g_257,&g_288},{&g_288,&g_257},{&g_77,&g_257},{&g_77,&g_257},{&g_288,&g_288},{&g_257,&g_257},{&g_257,&g_257}},{{&g_257,&g_257},{&g_257,&g_288},{&g_288,&g_257},{&g_77,&g_257},{&g_77,&g_257},{&g_288,&g_288},{&g_257,&g_257},{&g_257,&g_257},{&g_257,&g_257}},{{&g_257,&g_288},{&g_288,&g_257},{&g_77,&g_257},{&g_77,&g_257},{&g_288,&g_288},{&g_257,&g_257},{&g_257,&g_257},{&g_257,&g_257},{&g_257,&g_288}},{{&g_288,&g_257},{&g_77,&g_257},{&g_77,&g_257},{&g_288,&g_288},{&g_257,&g_257},{&g_257,&g_257},{&g_257,&g_257},{&g_257,&g_288},{&g_288,&g_257}},{{&g_77,&g_257},{&g_77,&g_257},{&g_288,&g_288},{&g_257,&g_257},{&g_257,&g_257},{&g_257,&g_257},{&g_257,&g_288},{&g_288,&g_257},{&g_77,&g_257}},{{&g_77,&g_257},{&g_288,&g_288},{&g_257,&g_257},{&g_257,&g_257},{&g_257,&g_257},{&g_257,&g_288},{&g_288,&g_257},{&g_77,&g_257},{&g_77,&g_257}},{{&g_288,&g_288},{&g_257,&g_257},{&g_257,&g_257},{&g_257,&g_257},{&g_257,&g_288},{&g_288,&g_257},{&g_77,&g_257},{&g_77,&g_257},{&g_288,&g_288}},{{&g_257,&g_257},{&g_257,&g_257},{&g_257,&g_257},{&g_257,&g_288},{&g_288,&g_257},{&g_77,&g_257},{&g_77,&g_257},{&g_288,&g_288},{&g_257,&g_257}},{{&g_257,&g_257},{&g_257,&g_257},{&g_257,&g_288},{&g_288,&g_257},{&g_77,&g_257},{&g_77,&g_257},{&g_288,&g_288},{&g_257,&g_257},{&g_257,&g_257}},{{&g_257,&g_257},{&g_257,&g_288},{&g_288,&g_257},{&g_77,&g_257},{&g_77,&g_257},{&g_288,&g_288},{&g_257,&g_257},{&g_257,&g_257},{&g_257,&g_257}}};
                        int i, j, k;
                        (*g_53) = (((p_7.f3 >= p_7.f1) != (((void*)0 != l_818) > g_257.f4)) <= ((**l_808) = ((l_819 > (&g_77 != l_820[2][7][1])) & (*l_790))));
                        return p_7;
                    }
                    l_822 = (void*)0;

                    ;
                    (*l_826) = l_823;
                }
                l_830 = func_39(l_827, l_828, &g_157, p_7.f2);

                ;
                for (g_404.f4 = 7; (g_404.f4 > (-22)); g_404.f4 = safe_sub_func_uint64_t_u_u(g_404.f4, 3))
                {
                    l_834 = l_833;

                    ;
                }
            }

            ;
            ;
            ;
            ;
        }
        else
        {
            const struct S1 l_838 = {-4L,0L,4L,0xD2F4L,7L,6L};
            for (p_5 = 0; (p_5 >= 0); p_5 -= 1)
            {
                return p_7;
            }
            if ((*l_814))
            {
                int **l_836 = &l_790;
                (*l_836) = &g_157;

                ;
                for (p_7.f2 = 1; (p_7.f2 >= 0); p_7.f2 -= 1)
                {
                    struct S0 **l_837 = &l_834;
                    (*l_837) = l_834;
                    for (g_288.f0 = 1; (g_288.f0 >= 0); g_288.f0 -= 1)
                    {
                        return (*g_333);
                    }
                }
                return (*g_333);
            }
            else
            {
                (*l_822) = (*g_333);
                (*l_822) = l_838;
            }
        }

        ;
        ;
        ;
    }


    ;
    ;
    ;
    (*l_639) = (safe_add_func_int8_t_s_s((0x7063L | (*l_639)), g_288.f2));
    return p_7;
}







static unsigned char func_8(unsigned long long p_9)
{
    unsigned long long l_620 = 8UL;
    (*g_156) = (*g_156);
    (*g_156) = l_620;
    return g_54[2];
}







static unsigned short func_12(unsigned p_13, long long p_14, unsigned p_15)
{
    struct S1 **l_528 = &g_333;
    int **l_529 = &g_53;
    unsigned *l_560[9][2][5] = {{{&g_188,(void*)0,&g_188,&g_188,&g_188},{&g_188,&g_188,&g_188,&g_188,&g_188}},{{&g_188,(void*)0,&g_188,&g_188,&g_188},{&g_188,&g_188,&g_188,&g_188,&g_188}},{{&g_188,(void*)0,&g_188,&g_188,&g_188},{&g_188,&g_188,&g_188,&g_188,&g_188}},{{&g_188,(void*)0,&g_188,&g_188,&g_188},{&g_188,&g_188,&g_188,&g_188,&g_188}},{{&g_188,(void*)0,&g_188,&g_188,&g_188},{&g_188,&g_188,&g_188,&g_188,&g_188}},{{&g_188,(void*)0,&g_188,&g_188,&g_188},{&g_188,&g_188,&g_188,&g_240,(void*)0}},{{(void*)0,&g_188,(void*)0,&g_240,&g_240},{&g_188,&g_188,&g_188,&g_240,(void*)0}},{{(void*)0,&g_188,(void*)0,&g_240,&g_240},{&g_188,&g_188,&g_188,&g_240,(void*)0}},{{(void*)0,&g_188,(void*)0,&g_240,&g_240},{&g_188,&g_188,&g_188,&g_240,(void*)0}}};
    struct S1 l_565 = {0x5A6ABDD28EF2A2A8LL,-7L,0x708757EFL,65535UL,0xA852L,0xAAF2L};
    struct S1 *l_572 = &g_77;
    unsigned char l_617 = 0UL;
    int i, j, k;
    (*l_528) = &g_288;

    ;
    (*l_529) = &g_54[0];

    ;
    for (g_288.f5 = 0; (g_288.f5 <= 4); g_288.f5 += 1)
    {
        short *l_532 = &g_77.f5;
        unsigned char l_533 = 0UL;
        struct S1 l_568 = {0x123F4C71A94523FALL,-1L,-1L,65535UL,0L,0x1CABL};
        struct S0 **l_602 = &g_462;
        int l_604 = (-9L);
        unsigned long long l_607[1];
        long long l_618 = 0x7D7568F614782887LL;
        int i;
        for (i = 0; i < 1; i++)
            l_607[i] = 18446744073709551607UL;
        (*g_53) = (safe_rshift_func_int16_t_s_s((((*l_532) = (!(**l_529))) >= 1UL), (l_533 | (p_13 = ((**g_483) = (**l_529))))));
        for (g_473 = 0; (g_473 <= 7); g_473 += 1)
        {
            struct S1 **l_536 = (void*)0;
            struct S1 *l_570 = (void*)0;
            struct S1 *l_571 = &g_77;
            long long *l_576 = &l_568.f0;
            int l_578 = 0xD1AF62EEL;
            int *l_595[2][8] = {{(void*)0,(void*)0,&g_157,(void*)0,&g_288.f2,(void*)0,&g_157,(void*)0},{(void*)0,&l_568.f2,&g_288.f2,&g_157,&g_157,&g_288.f2,&l_568.f2,(void*)0}};
            struct S0 ** const l_601 = (void*)0;
            int *l_612 = (void*)0;
            unsigned char l_616 = 255UL;
            int i, j;
            for (l_533 = 1; (l_533 <= 4); l_533 += 1)
            {
                struct S1 **l_534 = &g_333;
                struct S1 ***l_535 = &l_528;
                int l_543[4];
                long long *l_546 = &g_77.f0;
                struct S1 *l_569 = &g_257;
                int i;
                for (i = 0; i < 4; i++)
                    l_543[i] = (-1L);
            }
            (*l_571) = (**l_528);
            (*l_528) = l_572;

            ;
            for (l_565.f5 = 5; (l_565.f5 >= 0); l_565.f5 -= 1)
            {
                const unsigned l_573 = 0x02D4F9E6L;
                struct S1 l_579[8][3] = {{{-1L,0L,2L,65535UL,0x65E1L,0xEFCAL},{0x6DC7B4C6519C0C65LL,0x33117480L,0xD869ACDBL,0xBB3DL,0x4030L,1L},{0x6DC7B4C6519C0C65LL,0x33117480L,0xD869ACDBL,0xBB3DL,0x4030L,1L}},{{0x9FD47C655232CB13LL,1L,1L,9UL,-1L,-1L},{-10L,0x8D0F6813L,0xF4C74B15L,0x9064L,0x2B3BL,0x1DB6L},{-10L,0x8D0F6813L,0xF4C74B15L,0x9064L,0x2B3BL,0x1DB6L}},{{-1L,0L,2L,65535UL,0x65E1L,0xEFCAL},{0x6DC7B4C6519C0C65LL,0x33117480L,0xD869ACDBL,0xBB3DL,0x4030L,1L},{0x6DC7B4C6519C0C65LL,0x33117480L,0xD869ACDBL,0xBB3DL,0x4030L,1L}},{{0x9FD47C655232CB13LL,1L,1L,9UL,-1L,-1L},{-10L,0x8D0F6813L,0xF4C74B15L,0x9064L,0x2B3BL,0x1DB6L},{-10L,0x8D0F6813L,0xF4C74B15L,0x9064L,0x2B3BL,0x1DB6L}},{{-1L,0L,2L,65535UL,0x65E1L,0xEFCAL},{0x6DC7B4C6519C0C65LL,0x33117480L,0xD869ACDBL,0xBB3DL,0x4030L,1L},{0x6DC7B4C6519C0C65LL,0x33117480L,0xD869ACDBL,0xBB3DL,0x4030L,1L}},{{0x9FD47C655232CB13LL,1L,1L,9UL,-1L,-1L},{-10L,0x8D0F6813L,0xF4C74B15L,0x9064L,0x2B3BL,0x1DB6L},{-10L,0x8D0F6813L,0xF4C74B15L,0x9064L,0x2B3BL,0x1DB6L}},{{-1L,0L,2L,65535UL,0x65E1L,0xEFCAL},{0x6DC7B4C6519C0C65LL,0x33117480L,0xD869ACDBL,0xBB3DL,0x4030L,1L},{0x6DC7B4C6519C0C65LL,0x33117480L,0xD869ACDBL,0xBB3DL,0x4030L,1L}},{{0x9FD47C655232CB13LL,1L,1L,9UL,-1L,-1L},{-10L,0x8D0F6813L,0xF4C74B15L,0x9064L,0x2B3BL,0x1DB6L},{-10L,0x8D0F6813L,0xF4C74B15L,0x9064L,0x2B3BL,0x1DB6L}}};
                int *l_608 = (void*)0;
                int l_614[6];
                struct S0 *l_615 = &g_338;
                int i, j;
                for (i = 0; i < 6; i++)
                    l_614[i] = 7L;
                for (p_13 = 1; (p_13 <= 4); p_13 += 1)
                {
                    int *l_580 = &g_404.f4;
                    short * const *l_597 = (void*)0;
                    short * const **l_596[6][8] = {{(void*)0,(void*)0,(void*)0,&l_597,&l_597,&l_597,&l_597,(void*)0},{(void*)0,(void*)0,(void*)0,&l_597,&l_597,&l_597,&l_597,(void*)0},{(void*)0,(void*)0,(void*)0,&l_597,&l_597,&l_597,&l_597,(void*)0},{(void*)0,(void*)0,(void*)0,&l_597,&l_597,&l_597,&l_597,(void*)0},{(void*)0,(void*)0,(void*)0,&l_597,&l_597,&l_597,&l_597,(void*)0},{(void*)0,(void*)0,(void*)0,&l_597,&l_597,&l_597,&l_597,(void*)0}};
                    int **l_611 = &l_595[1][6];
                    int **l_613 = &l_608;
                    int i, j;
                }
            }
        }
    }

    ;
    (*l_529) = &g_54[1];
    return p_15;
}







static unsigned long long func_16(struct S0 p_17, struct S0 p_18, int p_19, struct S1 p_20, struct S0 p_21)
{
    int *l_409 = &g_404.f2;
    int l_429[9][1] = {{0x67428BACL},{2L},{0x67428BACL},{2L},{0x67428BACL},{2L},{0x67428BACL},{2L},{0x67428BACL}};
    const unsigned l_452 = 0xB4B0FF07L;
    struct S1 l_460 = {8L,-2L,0xE0CE2E3FL,0x4AD2L,-4L,0xF664L};
    const long long **l_467 = (void*)0;
    unsigned char *l_518 = &g_473;
    unsigned char *l_521 = (void*)0;
    unsigned char *l_522 = (void*)0;
    unsigned char *l_523[2][6];
    long long **l_527 = &g_265;
    long long ***l_526 = &l_527;
    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 6; j++)
            l_523[i][j] = &g_280[1];
    }
    for (p_21.f2 = (-12); (p_21.f2 > 9); p_21.f2 = safe_add_func_uint16_t_u_u(p_21.f2, 1))
    {
        int **l_410 = &l_409;
        int *l_411 = &g_54[2];
        long long **l_437 = &g_265;
        unsigned *l_447 = (void*)0;
        (*l_410) = l_409;
    }
    p_19 = (safe_rshift_func_uint16_t_u_s((safe_rshift_func_uint8_t_u_u(((*l_409) = (safe_rshift_func_uint8_t_u_u(((*l_518) = (safe_sub_func_int16_t_s_s((-10L), ((*g_421) = (((*l_409) || g_404.f2) >= g_77.f5))))), (safe_add_func_uint32_t_u_u((*l_409), p_20.f5))))), g_255[0][1][4])), ((safe_add_func_int64_t_s_s(((void*)0 == l_526), 1L)) ^ 0x470298C647330CA3LL)));
    return (*l_409);
}







static struct S0 func_22(const struct S1 p_23, short p_24, char p_25, struct S1 p_26, int p_27)
{
    unsigned long long l_258 = 0x26BBD5D3B415BAB0LL;
    short *l_266[3];
    int l_267 = 0x55DEABE2L;
    int l_270 = 5L;
    int **l_271[7];
    int *l_272 = &g_54[2];
    struct S1 l_292 = {0L,0L,1L,65532UL,0x5E8DL,0L};
    const short **l_324 = &g_165[0];
    struct S0 *l_355[7];
    int *l_367 = &g_338.f4;
    unsigned char * const l_396 = &g_280[7];
    int i;
    for (i = 0; i < 3; i++)
        l_266[i] = &g_214[0][5];
    for (i = 0; i < 7; i++)
        l_271[i] = &g_53;
    for (i = 0; i < 7; i++)
        l_355[i] = &g_338;
    l_272 = func_39(&g_54[2], (l_258 <= (safe_rshift_func_uint8_t_u_u((((safe_lshift_func_uint8_t_u_s(l_258, ((safe_sub_func_uint16_t_u_u((p_23.f0 >= g_54[1]), (l_267 = ((void*)0 != g_265)))) != (l_270 = (((p_25 = (g_28.f0 > (safe_sub_func_int32_t_s_s((g_28.f2 | (*g_156)), 0x6C9004EAL)))) && 255UL) || l_258))))) ^ g_28.f2) || 0x0CBFDD4EE6E7DDC4LL), 4))), &g_54[2], p_26.f4);
    for (g_77.f3 = 0; (g_77.f3 > 33); ++g_77.f3)
    {
        const int l_277 = 0x26580088L;
        unsigned *l_278[1][10] = {{&g_188,&g_188,&g_188,&g_188,&g_188,&g_188,&g_188,&g_188,&g_188,&g_188}};
        unsigned char *l_279 = &g_280[7];
        short **l_282 = &l_266[1];
        short ***l_283 = &l_282;
        int l_312 = 0xD91B9809L;
        int l_314[2];
        unsigned long long ***l_319 = &g_317[2];
        int l_320[10][5] = {{1L,0x24369D65L,1L,0x8BA1115EL,3L},{(-4L),0L,(-9L),0x08E59141L,0L},{0xBB33F9A0L,0x24369D65L,(-1L),0x24369D65L,0xBB33F9A0L},{0L,0x08E59141L,(-9L),0L,(-4L)},{3L,0x8BA1115EL,1L,0x24369D65L,1L},{(-4L),(-4L),0x96188812L,0x08E59141L,(-4L)},{0x1C3A4AA9L,0x24369D65L,0x1C3A4AA9L,0x8BA1115EL,0xBB33F9A0L},{(-4L),(-9L),(-9L),(-4L),0L},{3L,0x24369D65L,0xA135BA08L,0x24369D65L,3L},{0L,(-4L),(-9L),(-9L),(-4L)}};
        struct S1 l_322 = {7L,-1L,0xF605241DL,0xB5C8L,0xF8D1L,0x7949L};
        struct S0 l_403 = {0L,2L,0xDE0D88B2L,18446744073709551609UL,-5L};
        int i, j;
        for (i = 0; i < 2; i++)
            l_314[i] = (-7L);
        if (((+((p_23.f4 & (0x6DL || g_188)) != ((safe_lshift_func_uint8_t_u_u((l_277 | (g_240 = p_26.f5)), ((*l_279) = ((*g_265) ^ (*g_265))))) >= (g_281 == ((*l_283) = l_282))))) < l_277))
        {
            (*g_156) = p_27;
            for (g_257.f3 = 14; (g_257.f3 > 29); ++g_257.f3)
            {
                int *l_286 = &l_267;
                struct S1 *l_287 = &g_288;
                (*g_156) = (*g_156);
                l_286 = &g_54[0];

                ;
                (*l_287) = p_26;
            }
        }
        else
        {
            struct S1 *l_289[7] = {&g_288,&g_257,&g_257,&g_288,&g_257,&g_257,&g_288};
            int l_304 = 2L;
            int i;
            g_257 = g_257;
            g_53 = &g_54[2];
            if ((*l_272))
                continue;
            for (g_257.f1 = (-23); (g_257.f1 < 24); ++g_257.f1)
            {
                int l_301 = 0x9E654A8AL;
                unsigned l_305 = 1UL;
                int l_306 = 0xFDEFD505L;
                unsigned short *l_307 = &g_213;
                l_292 = g_257;
                g_82 = func_39(&g_157, ((safe_lshift_func_int16_t_s_u(((**l_282) = l_277), ((*l_307) = (g_257.f2 <= (safe_add_func_uint8_t_u_u(((((safe_sub_func_int64_t_s_s(p_23.f3, (safe_sub_func_int8_t_s_s(l_301, (safe_sub_func_uint32_t_u_u(l_304, p_23.f4)))))) | (g_257.f1 < l_305)) > l_304) | l_306), 9L)))))) == l_277), l_278[0][2], g_255[0][1][1]);

                ;
            }
        }
        if ((l_277 || ((l_320[5][3] = (safe_add_func_uint32_t_u_u((safe_mod_func_uint64_t_u_u(((*g_318) = ((l_312 = (0x92040029L <= ((*g_156) = (*g_53)))) < ((p_26.f2 = ((safe_unary_minus_func_int32_t_s((l_314[1] | (18446744073709551611UL != (safe_rshift_func_int16_t_s_s((*l_272), 0)))))) > (p_23.f5 != (*g_82)))) | (((*l_319) = g_317[0]) == &g_318)))), l_314[1])), (-8L)))) <= p_26.f5)))
        {
            struct S1 *l_334[7];
            int l_337 = 0xDDF330B1L;
            int i;
            for (i = 0; i < 7; i++)
                l_334[i] = (void*)0;
            for (p_26.f2 = 0; (p_26.f2 <= 4); p_26.f2 += 1)
            {
                const short ** const l_323 = &g_165[0];
                int *l_325 = &l_292.f2;
                for (l_267 = 1; (l_267 >= 0); l_267 -= 1)
                {
                    struct S1 *l_321[8][3] = {{(void*)0,&g_77,&g_288},{&g_288,&g_77,(void*)0},{&g_77,(void*)0,(void*)0},{(void*)0,&g_288,(void*)0},{&g_257,&l_292,&g_288},{&g_257,&g_77,&g_77},{(void*)0,&g_288,(void*)0},{&g_77,&g_77,&g_257}};
                    int i, j;
                    l_322 = p_23;
                    g_82 = &g_54[2];

                    ;
                    if (l_314[l_267])
                        break;
                }
                l_324 = l_323;
                l_325 = &g_54[2];

                ;
                if ((*g_53))
                    continue;
                for (l_322.f4 = 0; (l_322.f4 <= 0); l_322.f4 += 1)
                {
                    int i, j;
                    for (p_26.f1 = 0; (p_26.f1 <= 1); p_26.f1 += 1)
                    {
                        struct S1 *l_326 = &l_292;
                        unsigned long long **l_335 = (void*)0;
                        int i, j, k;
                        (*l_326) = p_26;
                        (*l_325) = g_214[l_322.f4][l_322.f4];
                        (*g_156) = ((p_26.f2 <= ((g_280[p_26.f2] = ((safe_lshift_func_uint8_t_u_s((p_23.f4 || (g_280[7] && (safe_mod_func_int16_t_s_s((((((safe_rshift_func_int8_t_s_u((l_326 == (l_334[6] = (g_333 = (void*)0))), (g_142[(p_26.f1 + 3)][(p_26.f1 + 4)][(l_322.f4 + 3)] != g_165[l_322.f4]))) < (l_335 != &g_318)) || 0x6E002D4DL) <= (*l_272)) | (*g_53)), (*l_325))))), g_336)) || p_26.f4)) > p_23.f2)) ^ l_337);
                    }
                    if (g_214[l_322.f4][(l_322.f4 + 4)])
                        break;
                    return g_338;
                }
            }
            (*l_272) = (*g_156);
        }
        else
        {
            return g_338;
        }
        for (g_77.f2 = 0; (g_77.f2 <= 26); g_77.f2 = safe_add_func_int8_t_s_s(g_77.f2, 8))
        {
            int *l_341 = &g_54[2];
            struct S1 l_346[5][3] = {{{-8L,0x5B3C868FL,6L,0x20EFL,0x9391L,0L},{-8L,0x5B3C868FL,6L,0x20EFL,0x9391L,0L},{-8L,0x5B3C868FL,6L,0x20EFL,0x9391L,0L}},{{0L,-8L,-6L,65535UL,0xDC90L,-4L},{0L,-8L,-6L,65535UL,0xDC90L,-4L},{0L,-8L,-6L,65535UL,0xDC90L,-4L}},{{-8L,0x5B3C868FL,6L,0x20EFL,0x9391L,0L},{-8L,0x5B3C868FL,6L,0x20EFL,0x9391L,0L},{-8L,0x5B3C868FL,6L,0x20EFL,0x9391L,0L}},{{0L,-8L,-6L,65535UL,0xDC90L,-4L},{0L,-8L,-6L,65535UL,0xDC90L,-4L},{0L,-8L,-6L,65535UL,0xDC90L,-4L}},{{-8L,0x5B3C868FL,6L,0x20EFL,0x9391L,0L},{-8L,0x5B3C868FL,6L,0x20EFL,0x9391L,0L},{-8L,0x5B3C868FL,6L,0x20EFL,0x9391L,0L}}};
            struct S1 l_363 = {1L,-4L,0xCEFFC2D3L,65535UL,0x6B65L,3L};
            unsigned char *l_395 = (void*)0;
            int i, j;
            l_341 = &p_27;

            ;
            (*g_156) = p_26.f5;
            if (((*g_156) = (safe_mod_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s(0x9CL, 2)), l_322.f4))))
            {
                unsigned short l_354 = 0UL;
                struct S0 **l_356 = &l_355[0];
                int **l_361[5][5] = {{&l_341,&l_272,&l_272,&l_341,&l_272},{&l_341,&l_341,&l_341,&l_341,&l_341},{&l_341,&l_341,&l_272,&l_341,&l_341},{&l_341,&l_272,(void*)0,&l_341,&l_272},{(void*)0,&l_272,&l_341,&l_341,&l_272}};
                int **l_362 = &l_341;
                int i, j;
                l_322 = l_346[3][0];
                for (l_270 = (-6); (l_270 > 22); ++l_270)
                {
                    struct S0 *l_350 = &g_338;
                    struct S0 **l_349 = &l_350;
                    l_341 = &l_320[5][3];

                    ;
                    (*l_349) = &g_338;
                    for (g_257.f3 = 3; (g_257.f3 == 24); ++g_257.f3)
                    {
                        int *l_353[4][1];
                        int i, j;
                        for (i = 0; i < 4; i++)
                        {
                            for (j = 0; j < 1; j++)
                                l_353[i][j] = &l_270;
                        }
                    }
                }

                ;
                (*g_156) = p_25;
                (*g_156) = ((g_53 = func_39(func_39(func_39(&p_27, p_26.f2, ((*l_362) = func_39(&g_54[2], l_354, &g_54[2], ((((*l_356) = l_355[4]) == &g_338) >= (g_255[0][0][4] = ((safe_add_func_int8_t_s_s((safe_mod_func_uint16_t_u_u(g_52, 0xD03BL)), p_24)) >= l_314[1]))))), g_257.f4), g_288.f1, &g_54[1], l_320[6][3]), g_338.f4, &g_54[2], p_26.f1)) == &p_27);

                ;
            }
            else
            {
                const struct S0 *l_375 = (void*)0;
                const struct S0 **l_374 = &l_375;
                int *l_378 = (void*)0;
                for (p_25 = 0; (p_25 >= 0); p_25 -= 1)
                {
                    struct S1 *l_364 = &l_292;
                    struct S1 *l_365 = (void*)0;
                    struct S1 *l_366 = &l_363;
                    (*l_366) = ((*l_364) = l_363);
                    l_367 = (void*)0;

                    ;
                    (*g_156) = p_26.f5;
                }
                if (l_322.f2)
                    continue;
                for (g_288.f1 = (-16); (g_288.f1 <= (-2)); g_288.f1++)
                {
                    int **l_370 = &g_53;
                    struct S0 **l_371 = &l_355[6];
                    struct S0 ***l_372 = (void*)0;
                    struct S0 ***l_373 = &l_371;
                    int l_376[5];
                    unsigned short *l_377 = &l_292.f3;
                    int i;
                    for (i = 0; i < 5; i++)
                        l_376[i] = 0xBB20C371L;
                    l_378 = func_39(func_39(func_39(l_341, p_26.f2, ((*l_370) = &g_157), (l_376[3] = (((*l_373) = l_371) != l_374))), ((*l_377) = p_25), &g_54[0], l_322.f0), g_213, &g_54[0], p_27);

                    ;
                    ;
                    return g_338;
                }
            }

            ;
            for (p_26.f5 = (-16); (p_26.f5 != 4); p_26.f5 = safe_add_func_int16_t_s_s(p_26.f5, 2))
            {
                unsigned l_399[2][10][3] = {{{0x60DD0A64L,0xEB1BE502L,0UL},{0x60DD0A64L,0x60DD0A64L,0UL},{0x7D66E5B6L,0xEB1BE502L,0UL},{0xEB1BE502L,0xF326EFEEL,0UL},{0x7D66E5B6L,0xF326EFEEL,0xC9295CA9L},{0x60DD0A64L,0xEB1BE502L,0UL},{0x60DD0A64L,0x60DD0A64L,0UL},{0x7D66E5B6L,0xEB1BE502L,0UL},{0xEB1BE502L,0xF326EFEEL,0x7D66E5B6L},{0x3712E9B3L,4294967295UL,0xEB1BE502L}},{{0xAF964579L,6UL,0x7D66E5B6L},{0xAF964579L,0xAF964579L,0x60DD0A64L},{0x3712E9B3L,6UL,0x60DD0A64L},{6UL,4294967295UL,0x7D66E5B6L},{0x3712E9B3L,4294967295UL,0xEB1BE502L},{0xAF964579L,6UL,0x7D66E5B6L},{0xAF964579L,0xAF964579L,0x60DD0A64L},{0x3712E9B3L,6UL,0x60DD0A64L},{6UL,4294967295UL,0x7D66E5B6L},{0x3712E9B3L,4294967295UL,0xEB1BE502L}}};
                int i, j, k;
                for (g_288.f2 = 19; (g_288.f2 >= 23); g_288.f2 = safe_add_func_int32_t_s_s(g_288.f2, 1))
                {
                    unsigned l_400 = 0xC4D4B1AAL;
                    for (g_188 = 0; (g_188 <= 0); g_188 += 1)
                    {
                        struct S1 *l_383 = &l_322;
                        struct S1 *l_384 = &l_346[3][0];
                        (*l_384) = ((*l_383) = g_28);
                        return g_338;


                    }
                    g_82 = &g_54[0];

                    ;
                    for (g_338.f2 = 0; (g_338.f2 != 28); ++g_338.f2)
                    {
                        int l_390 = 8L;
                        l_341 = &p_27;

                        ;
                        (*g_53) = (g_336 && (safe_mod_func_int64_t_s_s((((*g_156) >= (safe_unary_minus_func_uint16_t_u((((l_390 < ((p_23.f2 > ((((safe_mod_func_int16_t_s_s((safe_sub_func_int8_t_s_s((((((l_395 == l_396) <= (safe_sub_func_uint16_t_u_u((((*g_318) = (((g_77.f3 | l_399[0][5][2]) <= (((*l_396) = (p_23.f5 > (*g_318))) | 0x10L)) >= l_399[0][5][2])) | l_320[6][1]), g_257.f2))) == 0L) == (*g_53)) != 0x0C87AF08L), l_400)), p_26.f1)) <= (*l_341)) | p_27) > p_26.f1)) <= p_23.f4)) > g_338.f0) && (*g_265))))) || p_23.f3), l_390)));
                    }
                    for (g_77.f4 = 0; (g_77.f4 >= (-1)); --g_77.f4)
                    {
                        (*g_156) = l_320[5][3];
                        g_53 = l_341;
                    }
                }

                ;
                return l_403;


            }
        }
    }

    ;
    ;
    return g_338;
}







static unsigned char func_29(short p_30, const char p_31)
{
    short *l_163[9][10][2] = {{{&g_77.f5,&g_77.f5},{&g_77.f5,&g_77.f5},{&g_77.f5,&g_77.f5},{&g_77.f5,&g_77.f5},{&g_77.f4,&g_77.f5},{(void*)0,&g_77.f5},{(void*)0,&g_77.f5},{&g_77.f4,&g_77.f5},{&g_77.f5,&g_77.f5},{&g_77.f5,&g_77.f5}},{{&g_77.f5,&g_77.f5},{&g_77.f5,&g_77.f5},{&g_77.f4,&g_77.f5},{(void*)0,&g_77.f5},{(void*)0,&g_77.f5},{&g_77.f4,&g_77.f5},{&g_77.f5,&g_77.f5},{&g_77.f5,&g_77.f5},{&g_77.f5,&g_77.f5},{&g_77.f5,&g_77.f5}},{{&g_77.f4,&g_77.f5},{(void*)0,&g_77.f5},{(void*)0,&g_77.f5},{&g_77.f4,&g_77.f5},{&g_77.f5,&g_77.f5},{&g_77.f5,&g_77.f5},{&g_77.f5,&g_77.f5},{&g_77.f5,&g_77.f5},{&g_77.f4,&g_77.f5},{(void*)0,&g_77.f5}},{{(void*)0,&g_77.f5},{&g_77.f4,&g_77.f5},{&g_77.f5,&g_77.f5},{&g_77.f5,&g_77.f5},{&g_77.f5,&g_77.f5},{&g_77.f5,&g_77.f5},{&g_77.f4,&g_77.f5},{(void*)0,&g_77.f5},{(void*)0,&g_77.f5},{&g_77.f4,&g_77.f5}},{{&g_77.f5,&g_77.f5},{&g_77.f5,&g_77.f5},{&g_77.f5,&g_77.f5},{&g_77.f5,&g_77.f5},{&g_77.f4,&g_77.f5},{(void*)0,&g_77.f5},{(void*)0,&g_77.f5},{&g_77.f4,&g_77.f5},{&g_77.f5,&g_77.f5},{&g_77.f5,&g_77.f5}},{{&g_77.f5,&g_77.f5},{&g_77.f5,&g_77.f5},{&g_77.f4,&g_77.f5},{(void*)0,&g_77.f5},{(void*)0,&g_77.f5},{&g_77.f4,&g_77.f5},{&g_77.f5,&g_77.f5},{&g_77.f5,&g_77.f5},{&g_77.f5,&g_77.f5},{&g_77.f5,&g_77.f5}},{{&g_77.f4,&g_77.f5},{(void*)0,&g_77.f5},{(void*)0,&g_77.f5},{&g_77.f4,&g_77.f5},{&g_77.f5,&g_77.f5},{&g_77.f5,&g_77.f5},{&g_77.f5,&g_77.f5},{&g_77.f5,&g_77.f5},{&g_77.f4,&g_77.f5},{(void*)0,&g_77.f5}},{{(void*)0,&g_77.f5},{&g_77.f4,&g_77.f5},{&g_77.f5,&g_77.f5},{&g_77.f5,&g_77.f5},{&g_77.f5,&g_77.f5},{&g_77.f5,&g_77.f5},{&g_77.f4,&g_77.f5},{(void*)0,&g_77.f5},{(void*)0,&g_77.f5},{&g_77.f4,&g_77.f5}},{{&g_77.f5,&g_77.f5},{&g_77.f5,&g_77.f5},{&g_77.f5,&g_77.f5},{&g_77.f5,&g_77.f5},{&g_77.f4,&g_77.f5},{(void*)0,&g_77.f5},{(void*)0,&g_77.f5},{&g_77.f4,&g_77.f5},{&g_77.f5,&g_77.f5},{&g_77.f5,&g_77.f5}}};
    short **l_164 = (void*)0;
    const short **l_166 = &g_165[0];
    int l_167[4] = {(-1L),(-1L),(-1L),(-1L)};
    const int l_183 = 0xE1C3F0FEL;
    int *l_196 = &g_77.f2;
    unsigned char l_215 = 0x45L;
    struct S1 l_253 = {1L,0L,1L,9UL,1L,0x0CD6L};
    int i, j, k;
    if ((safe_lshift_func_uint8_t_u_s((p_31 > (safe_sub_func_uint32_t_u_u(func_34(g_28.f1, ((g_142[0][6][2] = l_163[8][3][0]) == ((*l_166) = g_165[0])), (*g_82)), l_167[3]))), p_31)))
    {
        unsigned char l_172 = 0x0CL;
        int * const l_195 = (void*)0;
        unsigned long long *l_212 = &g_52;
        struct S1 *l_230 = &g_77;
        int **l_243 = &l_196;
        for (g_77.f4 = 0; (g_77.f4 > (-30)); g_77.f4 = safe_sub_func_uint64_t_u_u(g_77.f4, 8))
        {
            short l_176 = 0x9BA3L;
            long long *l_177 = (void*)0;
            long long *l_178[2][8] = {{&g_77.f0,&g_77.f0,&g_77.f0,&g_77.f0,&g_77.f0,&g_77.f0,&g_77.f0,&g_77.f0},{&g_77.f0,&g_77.f0,&g_77.f0,&g_77.f0,&g_77.f0,&g_77.f0,&g_77.f0,&g_77.f0}};
            int *l_184[9] = {&l_167[1],&l_167[1],&l_167[1],&l_167[1],&l_167[1],&l_167[1],&l_167[1],&l_167[1],&l_167[1]};
            int **l_244 = &l_196;
            int i, j;
        }
    }
    else
    {
        int l_252 = 0x1B944867L;
        struct S1 l_254 = {-2L,0x875C4BDEL,-9L,0x5F80L,0xB062L,9L};
        (*l_196) = l_252;
        l_254 = l_253;
    }
    return g_77.f3;
}







static char func_34(int p_35, unsigned short p_36, int p_37)
{
    char l_50 = 0L;
    unsigned long long *l_51 = &g_52;
    int **l_55[2];
    struct S1 l_56[5][6][8] = {{{{0xBB49EDB2DAA5A9D4LL,0L,0x13DEA642L,65529UL,0xA85FL,0xF1DAL},{0xF06DCD3F6C24A69BLL,0L,0x34F7B726L,0x58D6L,0xC3E9L,3L},{0x8ADF120AA4486533LL,0x15DCBD5DL,0L,0x4C67L,-4L,0xE6B2L},{7L,-1L,6L,0xCD5BL,4L,0x77BDL},{0xB557DD5A8A1F86F2LL,1L,1L,1UL,1L,1L},{0L,0xDD65E72BL,0xCD9654EAL,0x1AD5L,-3L,0L},{0xA1C995BFD217CE36LL,0L,0L,0x8BD1L,0x442EL,-3L},{-2L,0x54BE8D2CL,-4L,0xADDAL,1L,0x9311L}},{{0xEF4046227A4C96F5LL,8L,-7L,65531UL,0xAC6DL,0xA280L},{-2L,0L,-6L,0x4C3CL,1L,1L},{-2L,0x5EBE3306L,6L,0x3A30L,0x9521L,1L},{4L,0xBDD19600L,0xCC3D6C75L,0x06FAL,4L,0L},{-6L,-6L,-2L,9UL,0x8B52L,-7L},{4L,-8L,0xBDB26F1AL,0xE1F4L,0L,-2L},{0xEF4046227A4C96F5LL,8L,-7L,65531UL,0xAC6DL,0xA280L},{0L,0xDD65E72BL,0xCD9654EAL,0x1AD5L,-3L,0L}},{{0xF06DCD3F6C24A69BLL,0L,0x34F7B726L,0x58D6L,0xC3E9L,3L},{0xCE14E34DAAEF5864LL,-1L,-2L,65535UL,0x49C3L,0x7D0CL},{4L,9L,0x200C290CL,0xACABL,9L,5L},{0xED8CCA49BD5B712FLL,0x1F982FD6L,0x778B1488L,0x3BA8L,1L,0L},{0x491B13FB221D915BLL,0x0ED8B559L,0xC9880E71L,1UL,0x2D76L,2L},{-1L,1L,0xFD87F621L,0xEFB2L,0xB8D4L,0L},{0xCF643F339D8DFC10LL,-10L,8L,0xC773L,0x37F3L,-7L},{-1L,0x7588BFDFL,0xFEE00061L,1UL,1L,-1L}},{{0xDE09C777C127BBD1LL,0x54CC1AE1L,-10L,0x8EFFL,0x28A1L,0xAAE1L},{-9L,-5L,-4L,65528UL,0xB588L,0x49E0L},{0xA1C995BFD217CE36LL,0L,0L,0x8BD1L,0x442EL,-3L},{-6L,-6L,-2L,9UL,0x8B52L,-7L},{-1L,0xD8D00BA8L,-3L,0x3155L,0L,-6L},{0x90A736CA90BE2757LL,1L,-8L,0xC362L,-4L,0xEE20L},{0x3C67237AF6748267LL,0xF849EEB4L,1L,65535UL,4L,-1L},{7L,0x382ABCCDL,0x7DF34B85L,65529UL,0xA613L,-1L}},{{-8L,-7L,0x294BA750L,0x8CB0L,6L,0x2105L},{8L,0x42E47CADL,0xAABCC59CL,0UL,6L,0xD69DL},{-2L,0x08496AEBL,-1L,8UL,2L,-1L},{-1L,0x7588BFDFL,0xFEE00061L,1UL,1L,-1L},{-6L,-6L,-2L,9UL,0x8B52L,-7L},{7L,-1L,6L,0xCD5BL,4L,0x77BDL},{-1L,0x7588BFDFL,0xFEE00061L,1UL,1L,-1L},{0xBB49EDB2DAA5A9D4LL,0L,0x13DEA642L,65529UL,0xA85FL,0xF1DAL}},{{0xED8CCA49BD5B712FLL,0x1F982FD6L,0x778B1488L,0x3BA8L,1L,0L},{0x97383CBDCB88E399LL,0x123B753BL,7L,0x9117L,0x9D61L,0xCCA4L},{0xB25F501B3ADA1D09LL,0x2DF00AC9L,-1L,0UL,3L,0L},{0xED8CCA49BD5B712FLL,0x1F982FD6L,0x778B1488L,0x3BA8L,1L,0L},{0x946680AE02F11925LL,0xFB43B78CL,9L,65535UL,-1L,0x2CF0L},{1L,-1L,0x1EDA5D48L,65535UL,0xCD7AL,0L},{-10L,6L,0xF02DCEE3L,0UL,-1L,1L},{-1L,0xD8D00BA8L,-3L,0x3155L,0L,-6L}}},{{{-6L,-6L,-2L,9UL,0x8B52L,-7L},{0xEF4046227A4C96F5LL,8L,-7L,65531UL,0xAC6DL,0xA280L},{0x07B9B31375F163BALL,1L,0L,65526UL,0xBD7CL,3L},{4L,-8L,0xBDB26F1AL,0xE1F4L,0L,-2L},{5L,6L,0x48041AE3L,65528UL,2L,0L},{0xBB49EDB2DAA5A9D4LL,0L,0x13DEA642L,65529UL,0xA85FL,0xF1DAL},{3L,0x1F7FC01AL,0x77628D16L,65527UL,0x470DL,0L},{0x491B13FB221D915BLL,0x0ED8B559L,0xC9880E71L,1UL,0x2D76L,2L}},{{0xED8CCA49BD5B712FLL,0x1F982FD6L,0x778B1488L,0x3BA8L,1L,0L},{1L,0L,0x8B728ABAL,0xF53FL,8L,-1L},{0L,0xDD65E72BL,0xCD9654EAL,0x1AD5L,-3L,0L},{0x97383CBDCB88E399LL,0x123B753BL,7L,0x9117L,0x9D61L,0xCCA4L},{-2L,0L,-6L,0x4C3CL,1L,1L},{-6L,-6L,-2L,9UL,0x8B52L,-7L},{-9L,-5L,-4L,65528UL,0xB588L,0x49E0L},{-6L,-6L,-2L,9UL,0x8B52L,-7L}},{{4L,0xBDD19600L,0xCC3D6C75L,0x06FAL,4L,0L},{0xCE14E34DAAEF5864LL,-1L,-2L,65535UL,0x49C3L,0x7D0CL},{0L,0L,-8L,0x1345L,0L,0L},{0xCE14E34DAAEF5864LL,-1L,-2L,65535UL,0x49C3L,0x7D0CL},{4L,0xBDD19600L,0xCC3D6C75L,0x06FAL,4L,0L},{0xF1AC7F9B73E17168LL,0x3A653075L,0x02811D3EL,3UL,-5L,-1L},{-2L,0x54BE8D2CL,-4L,0xADDAL,1L,0x9311L},{0xB557DD5A8A1F86F2LL,1L,1L,1UL,1L,1L}},{{7L,-1L,6L,0xCD5BL,4L,0x77BDL},{-10L,6L,0xF02DCEE3L,0UL,-1L,1L},{-1L,0x45122417L,0xC37093F0L,0xCA43L,1L,-1L},{0x9105A86EBCD7E497LL,0xF2DFE025L,0x3A31CAC5L,65531UL,0x7CF6L,0xE863L},{-5L,0x27B06419L,0xAF641A19L,0x9A73L,1L,0xADFCL},{1L,0xAFAABED9L,0x686DF840L,0xD562L,-7L,-1L},{6L,-5L,5L,2UL,0L,1L},{0xCE14E34DAAEF5864LL,-1L,-2L,65535UL,0x49C3L,0x7D0CL}},{{0x24CD905F98FFF8B0LL,-8L,0xC9646ABAL,6UL,-1L,0xF17EL},{-1L,0x1D89D757L,0xD7598019L,0xEB1BL,-1L,1L},{-1L,0x45122417L,0xC37093F0L,0xCA43L,1L,-1L},{0xEBCE04D8298A3CEELL,0L,0x9B325F0AL,0UL,0x5865L,0L},{0xBB5F034421CF7329LL,0xCB3D53BAL,0x9E5FB738L,0x6F98L,4L,7L},{0xDE09C777C127BBD1LL,0x54CC1AE1L,-10L,0x8EFFL,0x28A1L,0xAAE1L},{-2L,0x54BE8D2CL,-4L,0xADDAL,1L,0x9311L},{0x90A736CA90BE2757LL,1L,-8L,0xC362L,-4L,0xEE20L}},{{-5L,0x27B06419L,0xAF641A19L,0x9A73L,1L,0xADFCL},{7L,0x382ABCCDL,0x7DF34B85L,65529UL,0xA613L,-1L},{0L,0L,-8L,0x1345L,0L,0L},{0xB557DD5A8A1F86F2LL,1L,1L,1UL,1L,1L},{0xF06DCD3F6C24A69BLL,0L,0x34F7B726L,0x58D6L,0xC3E9L,3L},{0L,0L,-8L,0x1345L,0L,0L},{-9L,-5L,-4L,65528UL,0xB588L,0x49E0L},{2L,6L,4L,0x1A0DL,0x71E9L,2L}}},{{{0x8ADF120AA4486533LL,0x15DCBD5DL,0L,0x4C67L,-4L,0xE6B2L},{-2L,0x54BE8D2CL,-4L,0xADDAL,1L,0x9311L},{0L,0xDD65E72BL,0xCD9654EAL,0x1AD5L,-3L,0L},{1L,6L,1L,65528UL,0xA204L,0x7FD3L},{0xEBCE04D8298A3CEELL,0L,0x9B325F0AL,0UL,0x5865L,0L},{0xA1C995BFD217CE36LL,0L,0L,0x8BD1L,0x442EL,-3L},{3L,0x1F7FC01AL,0x77628D16L,65527UL,0x470DL,0L},{0x24CD905F98FFF8B0LL,-8L,0xC9646ABAL,6UL,-1L,0xF17EL}},{{0xCE14E34DAAEF5864LL,-1L,-2L,65535UL,0x49C3L,0x7D0CL},{0xBB49EDB2DAA5A9D4LL,0L,0x13DEA642L,65529UL,0xA85FL,0xF1DAL},{0x07B9B31375F163BALL,1L,0L,65526UL,0xBD7CL,3L},{-5L,0x27B06419L,0xAF641A19L,0x9A73L,1L,0xADFCL},{1L,6L,1L,65528UL,0xA204L,0x7FD3L},{8L,0x42E47CADL,0xAABCC59CL,0UL,6L,0xD69DL},{-10L,6L,0xF02DCEE3L,0UL,-1L,1L},{-2L,0x5EBE3306L,6L,0x3A30L,0x9521L,1L}},{{-8L,-7L,0x294BA750L,0x8CB0L,6L,0x2105L},{1L,-7L,6L,65535UL,-1L,-5L},{0xF1AC7F9B73E17168LL,0x3A653075L,0x02811D3EL,3UL,-5L,-1L},{7L,0x382ABCCDL,0x7DF34B85L,65529UL,0xA613L,-1L},{0x89B844B48DE1DC04LL,-1L,0x11500745L,65535UL,2L,0xDE4BL},{0L,0L,-8L,0x1345L,0L,0L},{0xC8F53D4211988AFCLL,0xF4919937L,0xE86CC2DAL,0xADADL,0x8373L,9L},{-9L,-5L,-4L,65528UL,0xB588L,0x49E0L}},{{-2L,0x5EBE3306L,6L,0x3A30L,0x9521L,1L},{-9L,-5L,-4L,65528UL,0xB588L,0x49E0L},{7L,-1L,6L,0xCD5BL,4L,0x77BDL},{4L,-8L,0xBDB26F1AL,0xE1F4L,0L,-2L},{0x97383CBDCB88E399LL,0x123B753BL,7L,0x9117L,0x9D61L,0xCCA4L},{0x165F177B5993E3A2LL,0xB7619C58L,1L,0UL,-4L,0xF403L},{-1L,0x1D89D757L,0xD7598019L,0xEB1BL,-1L,1L},{0xED8CCA49BD5B712FLL,0x1F982FD6L,0x778B1488L,0x3BA8L,1L,0L}},{{0x491B13FB221D915BLL,0x0ED8B559L,0xC9880E71L,1UL,0x2D76L,2L},{-1L,0x1D89D757L,0xD7598019L,0xEB1BL,-1L,1L},{6L,-5L,5L,2UL,0L,1L},{5L,6L,0x48041AE3L,65528UL,2L,0L},{-2L,0L,-6L,0x4C3CL,1L,1L},{9L,0x5E56AD49L,0L,65529UL,0xC0EAL,0xBE4CL},{0xEF4046227A4C96F5LL,8L,-7L,65531UL,0xAC6DL,0xA280L},{7L,-1L,6L,0xCD5BL,4L,0x77BDL}},{{5L,6L,0x48041AE3L,65528UL,2L,0L},{-5L,0x27B06419L,0xAF641A19L,0x9A73L,1L,0xADFCL},{5L,6L,0x48041AE3L,65528UL,2L,0L},{0x90A736CA90BE2757LL,1L,-8L,0xC362L,-4L,0xEE20L},{-2L,0L,-6L,0x4C3CL,1L,1L},{-9L,-5L,-4L,65528UL,0xB588L,0x49E0L},{3L,0x1F7FC01AL,0x77628D16L,65527UL,0x470DL,0L},{3L,0x1F7FC01AL,0x77628D16L,65527UL,0x470DL,0L}}},{{{0L,0L,-8L,0x1345L,0L,0L},{0x07B9B31375F163BALL,1L,0L,65526UL,0xBD7CL,3L},{0xB5D7992C5F34EB0ALL,8L,-1L,65535UL,0x9DDEL,0x83CDL},{0xB5D7992C5F34EB0ALL,8L,-1L,65535UL,0x9DDEL,0x83CDL},{0x07B9B31375F163BALL,1L,0L,65526UL,0xBD7CL,3L},{0L,0L,-8L,0x1345L,0L,0L},{0x2CD35FECE6570057LL,0L,7L,0x8F6EL,1L,7L},{0L,0xB361F3D4L,1L,0x4D67L,1L,-1L}},{{0xDE09C777C127BBD1LL,0x54CC1AE1L,-10L,0x8EFFL,0x28A1L,0xAAE1L},{0L,0x3EA3FEE2L,0xE7E12F40L,0x0348L,-8L,2L},{0x0CD436FCA15F1EE0LL,1L,0xD709BDCCL,8UL,-1L,1L},{-2L,0x08496AEBL,-1L,8UL,2L,-1L},{0x8E83926ECFD8255CLL,-4L,3L,0UL,0L,0xFA75L},{4L,9L,0x200C290CL,0xACABL,9L,5L},{0L,0xDD65E72BL,0xCD9654EAL,0x1AD5L,-3L,0L},{0xDB5619AF7C767D99LL,0xF0491844L,-6L,65534UL,0x3CB7L,0L}},{{1L,0xAFAABED9L,0x686DF840L,0xD562L,-7L,-1L},{4L,-8L,0xBDB26F1AL,0xE1F4L,0L,-2L},{-1L,0xD8D00BA8L,-3L,0x3155L,0L,-6L},{-2L,0x08496AEBL,-1L,8UL,2L,-1L},{3L,0x1F7FC01AL,0x77628D16L,65527UL,0x470DL,0L},{5L,6L,0x48041AE3L,65528UL,2L,0L},{0xA1C995BFD217CE36LL,0L,0L,0x8BD1L,0x442EL,-3L},{0L,0xB361F3D4L,1L,0x4D67L,1L,-1L}},{{0xF1AC7F9B73E17168LL,0x3A653075L,0x02811D3EL,3UL,-5L,-1L},{3L,0x1F7FC01AL,0x77628D16L,65527UL,0x470DL,0L},{0xE681A9B78C740E2DLL,0xE462BFC9L,0xA5CB8EC4L,0x45BEL,4L,-1L},{0xB5D7992C5F34EB0ALL,8L,-1L,65535UL,0x9DDEL,0x83CDL},{0x165F177B5993E3A2LL,0xB7619C58L,1L,0UL,-4L,0xF403L},{0x770C58F839568854LL,-1L,0x6750A3B4L,65535UL,0x944CL,-5L},{0L,0x3EA3FEE2L,0xE7E12F40L,0x0348L,-8L,2L},{3L,0x1F7FC01AL,0x77628D16L,65527UL,0x470DL,0L}},{{-6L,-6L,-2L,9UL,0x8B52L,-7L},{-1L,1L,0xFD87F621L,0xEFB2L,0xB8D4L,0L},{0xF1AC7F9B73E17168LL,0x3A653075L,0x02811D3EL,3UL,-5L,-1L},{0x90A736CA90BE2757LL,1L,-8L,0xC362L,-4L,0xEE20L},{0xB5D7992C5F34EB0ALL,8L,-1L,65535UL,0x9DDEL,0x83CDL},{8L,-8L,0x9DA7DC4CL,0xE1FAL,0x0966L,0x49DFL},{0x8ADF120AA4486533LL,0x15DCBD5DL,0L,0x4C67L,-4L,0xE6B2L},{1L,-1L,0x1EDA5D48L,65535UL,0xCD7AL,0L}},{{0xBB49EDB2DAA5A9D4LL,0L,0x13DEA642L,65529UL,0xA85FL,0xF1DAL},{0xDE09C777C127BBD1LL,0x54CC1AE1L,-10L,0x8EFFL,0x28A1L,0xAAE1L},{-9L,-5L,-4L,65528UL,0xB588L,0x49E0L},{0xA1C995BFD217CE36LL,0L,0L,0x8BD1L,0x442EL,-3L},{-6L,-6L,-2L,9UL,0x8B52L,-7L},{-1L,0xD8D00BA8L,-3L,0x3155L,0L,-6L},{0x90A736CA90BE2757LL,1L,-8L,0xC362L,-4L,0xEE20L},{0x3C67237AF6748267LL,0xF849EEB4L,1L,65535UL,4L,-1L}}},{{{1L,-1L,0x1EDA5D48L,65535UL,0xCD7AL,0L},{0xA1C995BFD217CE36LL,0L,0L,0x8BD1L,0x442EL,-3L},{-2L,0x3F2B610BL,0x6DE8FF6DL,0xAE2BL,0L,-4L},{0x0CD436FCA15F1EE0LL,1L,0xD709BDCCL,8UL,-1L,1L},{0xBB5F034421CF7329LL,0xCB3D53BAL,0x9E5FB738L,0x6F98L,4L,7L},{-1L,0L,0xD6A2F1C6L,0x60F3L,0x83EEL,0xB4BBL},{0L,0x3EA3FEE2L,0xE7E12F40L,0x0348L,-8L,2L},{0xBB5F034421CF7329LL,0xCB3D53BAL,0x9E5FB738L,0x6F98L,4L,7L}},{{1L,6L,1L,65528UL,0xA204L,0x7FD3L},{0xE681A9B78C740E2DLL,0xE462BFC9L,0xA5CB8EC4L,0x45BEL,4L,-1L},{-1L,0L,0xD6A2F1C6L,0x60F3L,0x83EEL,0xB4BBL},{1L,6L,1L,65528UL,0xA204L,0x7FD3L},{0x388CAFD7A66F30B2LL,0L,0x166428F1L,65526UL,1L,0x8CD5L},{-2L,0x3F2B610BL,0x6DE8FF6DL,0xAE2BL,0L,-4L},{-1L,0x45122417L,0xC37093F0L,0xCA43L,1L,-1L},{0L,0L,-8L,0x1345L,0L,0L}},{{-2L,0L,-6L,0x4C3CL,1L,1L},{0L,0xB361F3D4L,1L,0x4D67L,1L,-1L},{-1L,0xD8D00BA8L,-3L,0x3155L,0L,-6L},{-2L,0x5EBE3306L,6L,0x3A30L,0x9521L,1L},{8L,0x42E47CADL,0xAABCC59CL,0UL,6L,0xD69DL},{-9L,-5L,-4L,65528UL,0xB588L,0x49E0L},{0x165F177B5993E3A2LL,0xB7619C58L,1L,0UL,-4L,0xF403L},{-2L,0x08496AEBL,-1L,8UL,2L,-1L}},{{0x9DBB3B7CC63A23B0LL,0x2495124CL,1L,0x7C09L,0xD7E7L,1L},{0x90A736CA90BE2757LL,1L,-8L,0xC362L,-4L,0xEE20L},{8L,-8L,0x9DA7DC4CL,0xE1FAL,0x0966L,0x49DFL},{0x8E83926ECFD8255CLL,-4L,3L,0UL,0L,0xFA75L},{0L,0xB361F3D4L,1L,0x4D67L,1L,-1L},{0xF1AC7F9B73E17168LL,0x3A653075L,0x02811D3EL,3UL,-5L,-1L},{0x2CD35FECE6570057LL,0L,7L,0x8F6EL,1L,7L},{7L,-1L,6L,0xCD5BL,4L,0x77BDL}},{{1L,0L,0x8B728ABAL,0xF53FL,8L,-1L},{0xE681A9B78C740E2DLL,0xE462BFC9L,0xA5CB8EC4L,0x45BEL,4L,-1L},{0x770C58F839568854LL,-1L,0x6750A3B4L,65535UL,0x944CL,-5L},{0L,0xDD65E72BL,0xCD9654EAL,0x1AD5L,-3L,0L},{0x770C58F839568854LL,-1L,0x6750A3B4L,65535UL,0x944CL,-5L},{0xE681A9B78C740E2DLL,0xE462BFC9L,0xA5CB8EC4L,0x45BEL,4L,-1L},{1L,0L,0x8B728ABAL,0xF53FL,8L,-1L},{0xDB5619AF7C767D99LL,0xF0491844L,-6L,65534UL,0x3CB7L,0L}},{{0x90A736CA90BE2757LL,1L,-8L,0xC362L,-4L,0xEE20L},{0xBB49EDB2DAA5A9D4LL,0L,0x13DEA642L,65529UL,0xA85FL,0xF1DAL},{1L,-7L,6L,65535UL,-1L,-5L},{1L,0xAFAABED9L,0x686DF840L,0xD562L,-7L,-1L},{-2L,0x5EBE3306L,6L,0x3A30L,0x9521L,1L},{0x24CD905F98FFF8B0LL,-8L,0xC9646ABAL,6UL,-1L,0xF17EL},{-1L,0x1D89D757L,0xD7598019L,0xEB1BL,-1L,1L},{-1L,0x45122417L,0xC37093F0L,0xCA43L,1L,-1L}}}};
    struct S1 *l_57 = &l_56[0][4][1];
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_55[i] = (void*)0;
    g_82 = func_39(func_44(l_50, ((*l_51) = ((0xB4D05C44L & 4UL) > p_36)), g_28.f3, (g_53 = g_53), ((*l_57) = l_56[0][1][1])), g_28.f2, g_156, g_28.f5);

    ;
    return p_37;
}







static int * func_39(int * p_40, unsigned short p_41, int * const p_42, unsigned p_43)
{
    int *l_158 = &g_157;
    l_158 = l_158;
    return &g_54[2];


}







static int * func_44(unsigned long long p_45, unsigned long long p_46, int p_47, int * p_48, struct S1 p_49)
{
    unsigned long long l_58 = 0UL;
    struct S1 l_66 = {0xDF9D16581483B713LL,0xA71C73E2L,0x750D2B45L,0x538BL,0L,7L};
    struct S1 *l_151 = &l_66;
    struct S1 **l_150[1][4][3] = {{{&l_151,&l_151,&l_151},{&l_151,&l_151,&l_151},{&l_151,&l_151,&l_151},{&l_151,&l_151,&l_151}}};
    int *l_154 = (void*)0;
    int i, j, k;
    (*p_48) = l_58;
    for (p_46 = 0; (p_46 < 41); p_46 = safe_add_func_int16_t_s_s(p_46, 8))
    {
        unsigned long long *l_62 = &g_52;
        unsigned long long **l_61 = &l_62;
        int l_63[9] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
        int *l_79 = &g_77.f2;
        struct S1 l_84 = {0x117C768AC21EE263LL,-1L,0xFB1A0FE7L,5UL,1L,0x4C6FL};
        long long l_122[10][8] = {{0xA450838B68C0CF1ELL,0L,0xA450838B68C0CF1ELL,0xA450838B68C0CF1ELL,0L,0xA450838B68C0CF1ELL,0xA450838B68C0CF1ELL,0L},{0L,0xA450838B68C0CF1ELL,0xA450838B68C0CF1ELL,0L,0xA450838B68C0CF1ELL,0xA450838B68C0CF1ELL,0L,0xA450838B68C0CF1ELL},{0L,0L,0xA275FDE82951EB40LL,0L,0L,0xA275FDE82951EB40LL,0L,0L},{0xA450838B68C0CF1ELL,0L,0xA450838B68C0CF1ELL,0xA450838B68C0CF1ELL,0L,0xA450838B68C0CF1ELL,0xA450838B68C0CF1ELL,0L},{0L,0xA450838B68C0CF1ELL,0xA450838B68C0CF1ELL,0L,0xA450838B68C0CF1ELL,0xA450838B68C0CF1ELL,0L,0xA450838B68C0CF1ELL},{0L,0L,0xA275FDE82951EB40LL,0L,0L,0xA275FDE82951EB40LL,0L,0L},{0xA450838B68C0CF1ELL,0L,0xA450838B68C0CF1ELL,0xA450838B68C0CF1ELL,0L,0xA450838B68C0CF1ELL,0xA450838B68C0CF1ELL,0L},{0L,0xA450838B68C0CF1ELL,0xA450838B68C0CF1ELL,0L,0xA450838B68C0CF1ELL,0xA450838B68C0CF1ELL,0L,0xA450838B68C0CF1ELL},{0L,0L,0xA275FDE82951EB40LL,0L,0xA450838B68C0CF1ELL,0L,0xA450838B68C0CF1ELL,0xA450838B68C0CF1ELL},{0xA275FDE82951EB40LL,0xA450838B68C0CF1ELL,0xA275FDE82951EB40LL,0xA275FDE82951EB40LL,0xA450838B68C0CF1ELL,0xA275FDE82951EB40LL,0xA275FDE82951EB40LL,0xA450838B68C0CF1ELL}};
        short *l_143 = &l_66.f4;
        int i, j;
        l_63[0] = ((((*l_61) = &g_52) != &p_46) < p_49.f5);
        if ((*p_48))
        {
            struct S1 *l_64 = (void*)0;
            struct S1 *l_65 = (void*)0;
            int *l_74[1][9][8] = {{{&l_63[0],&l_66.f2,&l_66.f2,&l_63[0],&l_63[0],&l_66.f2,&g_54[1],&l_63[8]},{&l_63[3],&g_54[1],(void*)0,&g_54[2],&g_54[2],&l_66.f2,&g_54[2],&l_63[3]},{&l_63[0],&g_54[1],&l_66.f2,&l_66.f2,&g_54[2],&l_66.f2,&l_66.f2,&g_54[1]},{&g_54[1],&l_66.f2,&l_66.f2,&g_54[2],&l_66.f2,&l_66.f2,&l_63[3],&l_63[0]},{&l_63[3],&l_63[0],&l_63[5],&g_54[1],&g_54[1],&l_66.f2,&l_63[3],&l_63[3]},{&l_63[8],&g_54[1],&l_66.f2,&l_66.f2,&g_54[1],&l_63[8],&l_66.f2,&l_63[0]},{&g_54[1],&l_63[8],&l_66.f2,&l_63[0],&l_66.f2,&l_66.f2,&g_54[2],&l_66.f2},{&l_63[0],&l_63[3],(void*)0,&l_63[0],&g_54[1],&g_54[2],&g_54[1],&l_63[0]},{&l_66.f2,&g_54[1],&l_66.f2,&l_66.f2,&g_54[2],&l_66.f2,&l_66.f2,&l_63[3]}}};
            int *l_75[2];
            int **l_85 = (void*)0;
            int **l_86 = (void*)0;
            int **l_87 = &l_79;
            int i, j, k;
            for (i = 0; i < 2; i++)
                l_75[i] = &l_66.f2;
            l_66 = g_28;
            for (g_52 = 0; (g_52 <= 8); g_52 += 1)
            {
                struct S1 l_67 = {0x529DB5C078B0A32FLL,1L,-9L,7UL,0L,1L};
                int i;
                l_63[g_52] = l_63[g_52];
                l_67 = p_49;
            }
            g_77 = l_84;
            (*l_87) = (void*)0;

            ;
        }
        else
        {
            unsigned l_111 = 4294967293UL;
            int *l_116 = &l_63[0];
            for (l_84.f4 = 0; (l_84.f4 > 21); l_84.f4++)
            {
                int *l_96 = (void*)0;
                for (g_77.f1 = 24; (g_77.f1 < (-11)); g_77.f1 = safe_sub_func_int16_t_s_s(g_77.f1, 4))
                {
                    for (p_49.f2 = 1; (p_49.f2 <= 8); p_49.f2 += 1)
                    {
                        struct S1 *l_93 = &l_66;
                        struct S1 **l_92 = &l_93;
                        int i;
                        (*l_92) = &p_49;

                        ;
                        if (l_63[p_49.f2])
                            continue;
                        if (l_63[p_49.f2])
                            break;
                    }
                }
            }
        }

        ;
        for (l_66.f1 = (-27); (l_66.f1 == 10); ++l_66.f1)
        {
            char l_128 = 0x49L;
            int *l_133[3][5] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_77.f2,&g_77.f2,&g_77.f2,&g_77.f2,&g_77.f2},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
            int **l_155 = &l_79;
            int i, j;
        }
        if ((*p_48))
            break;
    }
    (*l_151) = (*l_151);
    return l_154;


}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_28.f0, "g_28.f0", print_hash_value);
    transparent_crc(g_28.f1, "g_28.f1", print_hash_value);
    transparent_crc(g_28.f2, "g_28.f2", print_hash_value);
    transparent_crc(g_28.f3, "g_28.f3", print_hash_value);
    transparent_crc(g_28.f4, "g_28.f4", print_hash_value);
    transparent_crc(g_28.f5, "g_28.f5", print_hash_value);
    transparent_crc(g_52, "g_52", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_54[i], "g_54[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_77.f0, "g_77.f0", print_hash_value);
    transparent_crc(g_77.f1, "g_77.f1", print_hash_value);
    transparent_crc(g_77.f2, "g_77.f2", print_hash_value);
    transparent_crc(g_77.f3, "g_77.f3", print_hash_value);
    transparent_crc(g_77.f4, "g_77.f4", print_hash_value);
    transparent_crc(g_77.f5, "g_77.f5", print_hash_value);
    transparent_crc(g_157, "g_157", print_hash_value);
    transparent_crc(g_188, "g_188", print_hash_value);
    transparent_crc(g_213, "g_213", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_214[i][j], "g_214[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_240, "g_240", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_255[i][j][k], "g_255[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_257.f0, "g_257.f0", print_hash_value);
    transparent_crc(g_257.f1, "g_257.f1", print_hash_value);
    transparent_crc(g_257.f2, "g_257.f2", print_hash_value);
    transparent_crc(g_257.f3, "g_257.f3", print_hash_value);
    transparent_crc(g_257.f4, "g_257.f4", print_hash_value);
    transparent_crc(g_257.f5, "g_257.f5", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_280[i], "g_280[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_288.f0, "g_288.f0", print_hash_value);
    transparent_crc(g_288.f1, "g_288.f1", print_hash_value);
    transparent_crc(g_288.f2, "g_288.f2", print_hash_value);
    transparent_crc(g_288.f3, "g_288.f3", print_hash_value);
    transparent_crc(g_288.f4, "g_288.f4", print_hash_value);
    transparent_crc(g_288.f5, "g_288.f5", print_hash_value);
    transparent_crc(g_336, "g_336", print_hash_value);
    transparent_crc(g_338.f0, "g_338.f0", print_hash_value);
    transparent_crc(g_338.f1, "g_338.f1", print_hash_value);
    transparent_crc(g_338.f2, "g_338.f2", print_hash_value);
    transparent_crc(g_338.f3, "g_338.f3", print_hash_value);
    transparent_crc(g_338.f4, "g_338.f4", print_hash_value);
    transparent_crc(g_404.f0, "g_404.f0", print_hash_value);
    transparent_crc(g_404.f1, "g_404.f1", print_hash_value);
    transparent_crc(g_404.f2, "g_404.f2", print_hash_value);
    transparent_crc(g_404.f3, "g_404.f3", print_hash_value);
    transparent_crc(g_404.f4, "g_404.f4", print_hash_value);
    transparent_crc(g_473, "g_473", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_656[i], "g_656[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_720, "g_720", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_770[i], "g_770[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_835.f0, "g_835.f0", print_hash_value);
    transparent_crc(g_835.f1, "g_835.f1", print_hash_value);
    transparent_crc(g_835.f2, "g_835.f2", print_hash_value);
    transparent_crc(g_835.f3, "g_835.f3", print_hash_value);
    transparent_crc(g_835.f4, "g_835.f4", print_hash_value);
    transparent_crc(g_893, "g_893", print_hash_value);
    transparent_crc(g_926, "g_926", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
