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
   char f0;
   signed f1 : 21;
};


static int g_3[2][7][5] = {{{1L,0x6E3245F1L,0xD8F6EFBAL,0x3E64F147L,0x3E64F147L},{6L,2L,6L,0xE1E2C0D3L,6L},{1L,0x3E64F147L,0x6E3245F1L,0x6E3245F1L,0x3E64F147L},{0x7979B389L,0xE1E2C0D3L,0x8FBC781CL,0xE1E2C0D3L,0x7979B389L},{0x3E64F147L,0x6E3245F1L,0x6E3245F1L,0x3E64F147L,1L},{6L,0xE1E2C0D3L,6L,2L,6L},{0x3E64F147L,0x3E64F147L,0xD8F6EFBAL,0x6E3245F1L,1L}},{{0x7979B389L,2L,0x8FBC781CL,2L,0x7979B389L},{1L,0x6E3245F1L,0xD8F6EFBAL,0x3E64F147L,0x3E64F147L},{6L,2L,6L,0xE1E2C0D3L,6L},{1L,0x3E64F147L,0x6E3245F1L,0x6E3245F1L,0x3E64F147L},{0x7979B389L,0xE1E2C0D3L,0x8FBC781CL,0xE1E2C0D3L,0x7979B389L},{0x3E64F147L,0x6E3245F1L,0x6E3245F1L,0x3E64F147L,1L},{6L,0xE1E2C0D3L,6L,2L,6L}}};
static int g_13 = (-3L);
static unsigned g_69[9] = {0x3D96456CL,0x3D96456CL,0x3D96456CL,0x3D96456CL,0x3D96456CL,0x3D96456CL,0x3D96456CL,0x3D96456CL,0x3D96456CL};
static union U0 g_76 = {0x58L};
static union U0 *g_89 = &g_76;
static union U0 **g_88[4][7][7] = {{{&g_89,(void*)0,&g_89,&g_89,&g_89,&g_89,&g_89},{&g_89,&g_89,&g_89,&g_89,&g_89,(void*)0,&g_89},{&g_89,&g_89,&g_89,&g_89,&g_89,&g_89,&g_89},{&g_89,&g_89,&g_89,&g_89,&g_89,(void*)0,&g_89},{&g_89,(void*)0,&g_89,&g_89,&g_89,&g_89,&g_89},{&g_89,(void*)0,(void*)0,&g_89,&g_89,(void*)0,&g_89},{&g_89,&g_89,&g_89,&g_89,&g_89,&g_89,&g_89}},{{(void*)0,(void*)0,&g_89,&g_89,&g_89,&g_89,&g_89},{&g_89,(void*)0,&g_89,&g_89,&g_89,&g_89,&g_89},{&g_89,&g_89,&g_89,&g_89,(void*)0,&g_89,(void*)0},{&g_89,&g_89,&g_89,(void*)0,&g_89,&g_89,(void*)0},{(void*)0,&g_89,(void*)0,&g_89,&g_89,(void*)0,&g_89},{&g_89,&g_89,&g_89,&g_89,&g_89,&g_89,&g_89},{&g_89,&g_89,&g_89,&g_89,&g_89,(void*)0,(void*)0}},{{&g_89,&g_89,(void*)0,&g_89,&g_89,&g_89,&g_89},{(void*)0,(void*)0,(void*)0,&g_89,&g_89,&g_89,&g_89},{&g_89,(void*)0,(void*)0,&g_89,&g_89,&g_89,(void*)0},{&g_89,&g_89,&g_89,(void*)0,&g_89,&g_89,(void*)0},{&g_89,&g_89,&g_89,&g_89,&g_89,&g_89,&g_89},{&g_89,&g_89,&g_89,(void*)0,&g_89,&g_89,&g_89},{&g_89,&g_89,&g_89,&g_89,&g_89,&g_89,&g_89}},{{&g_89,(void*)0,&g_89,&g_89,&g_89,&g_89,&g_89},{&g_89,&g_89,(void*)0,&g_89,&g_89,&g_89,&g_89},{&g_89,&g_89,&g_89,(void*)0,&g_89,&g_89,&g_89},{(void*)0,&g_89,&g_89,(void*)0,&g_89,&g_89,&g_89},{&g_89,&g_89,&g_89,(void*)0,&g_89,&g_89,&g_89},{&g_89,&g_89,&g_89,&g_89,&g_89,(void*)0,&g_89},{&g_89,&g_89,&g_89,&g_89,&g_89,&g_89,&g_89}}};
static int g_102 = 0x9E1F9A5DL;
static int *g_178[2] = {&g_102,&g_102};
static const union U0 *g_183 = &g_76;
static const int *g_231 = &g_102;
static unsigned char g_311 = 0x3BL;
static int **g_316 = (void*)0;
static unsigned g_327 = 8UL;
static int *g_376 = (void*)0;
static unsigned g_394[1][5] = {{0xB538A22CL,0xB538A22CL,0xB538A22CL,0xB538A22CL,0xB538A22CL}};
static int *g_434 = &g_102;
static union U0 g_545 = {0x4BL};
static short g_651 = 0x1FFCL;
static unsigned char g_676 = 5UL;
static unsigned g_730 = 0xEDBA6118L;
static int g_805 = 1L;
static const int **g_815 = &g_231;



static unsigned func_1(void);
static int * const func_4(int * p_5, int * p_6, short p_7, int p_8);
static int * func_9(const int p_10, int * p_11);
static char func_18(int * p_19, int * p_20, unsigned short p_21, int p_22, unsigned char p_23);
static unsigned short func_25(int * p_26, int p_27, const short p_28);
static int * func_29(int * p_30, unsigned short p_31);
static int * func_32(unsigned short p_33, char p_34, int * p_35, int * p_36, unsigned p_37);
static unsigned short func_48(int * p_49);
static int * func_50(int * p_51, union U0 p_52, unsigned p_53, int * p_54, union U0 p_55);
static int * func_56(unsigned char p_57, const int * p_58, short p_59, char p_60, int p_61);
static unsigned func_1(void)
{
    union U0 l_2[5] = {{0xEBL},{0xEBL},{0xEBL},{0xEBL},{0xEBL}};
    int l_571[10] = {0x6694ED48L,0xED9EC142L,0xED9EC142L,0x6694ED48L,0xED9EC142L,0xED9EC142L,0x6694ED48L,0xED9EC142L,0xED9EC142L,0x6694ED48L};
    unsigned l_653 = 0x04E7753EL;
    int *l_671 = &l_571[0];
    int * const *l_693 = &l_671;
    int * const * const *l_692 = &l_693;
    unsigned short l_710 = 8UL;
    unsigned l_756 = 3UL;
    union U0 *l_789[5] = {&g_76,&g_76,&g_76,&g_76,&g_76};
    int i;
    for (g_3[1][2][1] = 0; (g_3[1][2][1] <= 4); g_3[1][2][1] += 1)
    {
        const unsigned short l_12 = 0x840EL;
        int **l_572[7][8][4] = {{{&g_434,(void*)0,&g_376,&g_376},{(void*)0,&g_178[1],&g_178[1],&g_178[1]},{&g_178[1],(void*)0,&g_434,&g_434},{&g_178[1],&g_178[1],&g_178[1],&g_178[1]},{&g_178[0],&g_376,&g_376,&g_376},{&g_376,&g_178[1],&g_178[1],&g_376},{(void*)0,&g_178[1],&g_178[1],&g_376},{&g_178[1],&g_376,(void*)0,(void*)0}},{{&g_178[0],&g_178[1],&g_178[1],&g_178[1]},{&g_376,&g_376,&g_376,&g_376},{&g_376,&g_434,&g_178[0],&g_376},{&g_376,&g_178[0],(void*)0,&g_434},{&g_376,&g_376,(void*)0,&g_178[1]},{&g_376,&g_178[1],&g_178[0],(void*)0},{&g_376,&g_178[1],&g_376,&g_178[1]},{&g_376,&g_178[1],&g_178[1],&g_376}},{{&g_178[0],&g_178[1],(void*)0,&g_178[0]},{&g_376,(void*)0,&g_178[1],(void*)0},{&g_376,&g_178[1],&g_434,(void*)0},{&g_178[1],(void*)0,&g_376,&g_178[0]},{(void*)0,&g_178[1],&g_376,&g_376},{&g_178[1],&g_178[1],&g_178[1],&g_178[1]},{&g_376,&g_178[1],(void*)0,(void*)0},{&g_434,&g_178[1],&g_178[1],&g_178[1]}},{{&g_178[1],&g_376,&g_376,&g_434},{&g_178[1],&g_178[0],&g_178[1],&g_376},{&g_434,&g_434,(void*)0,&g_376},{&g_376,&g_376,&g_178[1],&g_178[1]},{&g_178[1],&g_178[1],&g_376,(void*)0},{(void*)0,&g_178[1],&g_376,&g_178[1]},{&g_178[1],&g_376,&g_434,&g_376},{&g_376,&g_434,&g_376,&g_178[1]}},{{&g_434,(void*)0,&g_178[1],&g_376},{&g_376,&g_178[1],&g_376,(void*)0},{&g_178[0],&g_178[1],&g_178[0],&g_434},{&g_376,&g_178[0],&g_376,&g_178[0]},{&g_178[1],&g_376,&g_178[1],&g_178[0]},{&g_434,(void*)0,&g_178[1],&g_376},{&g_178[1],&g_178[1],&g_376,&g_178[1]},{&g_376,&g_178[1],&g_178[0],&g_376}},{{&g_178[0],&g_376,&g_376,&g_178[0]},{&g_376,&g_178[1],&g_178[1],&g_376},{&g_434,(void*)0,&g_376,&g_178[1]},{(void*)0,&g_178[1],&g_178[0],&g_178[1]},{&g_434,(void*)0,&g_178[0],&g_376},{&g_178[1],&g_178[1],&g_434,&g_178[0]},{&g_178[1],&g_376,(void*)0,&g_376},{&g_434,&g_178[1],&g_376,&g_178[1]}},{{&g_376,&g_178[1],&g_178[1],&g_376},{&g_178[1],(void*)0,&g_178[0],&g_178[0]},{&g_178[1],&g_376,&g_178[1],&g_178[0]},{&g_376,&g_178[0],&g_376,&g_434},{&g_434,&g_178[1],(void*)0,(void*)0},{&g_178[1],&g_178[1],&g_434,&g_376},{&g_178[1],(void*)0,&g_178[0],&g_178[1]},{&g_434,&g_178[1],(void*)0,(void*)0}}};
        int **l_573 = &g_178[1];
        int l_587 = 0x7325C9C5L;
        int ***l_597 = &l_572[6][6][0];
        int *l_614[10][10] = {{&g_3[1][0][0],&g_3[1][0][0],&g_3[0][3][4],&l_571[2],&g_13,&g_13,&l_571[2],&g_3[0][3][4],&g_3[1][0][0],&g_3[1][0][0]},{&g_13,&l_571[2],&g_3[0][3][4],&g_3[1][0][0],&g_3[1][0][0],&g_3[0][3][4],&l_571[2],&g_13,&g_13,&l_571[2]},{&g_13,&g_3[1][0][0],&l_571[2],&l_571[2],&g_3[1][0][0],&g_13,&g_3[0][3][4],&g_3[0][3][4],&g_13,&g_3[1][0][0]},{&g_3[1][0][0],&l_571[2],&l_571[2],&g_3[1][0][0],&g_13,&g_3[0][3][4],&g_3[0][3][4],&g_13,&g_3[1][0][0],&l_571[2]},{&g_3[1][0][0],&g_3[1][0][0],&g_3[0][3][4],&l_571[2],&g_13,&g_13,&l_571[2],&g_3[0][3][4],&g_3[1][0][0],&g_3[1][0][0]},{&g_13,&l_571[2],&g_3[0][3][4],&g_3[1][0][0],&g_3[1][0][0],&g_3[0][3][4],&l_571[2],&g_13,&g_13,&l_571[2]},{&g_13,&g_3[1][0][0],&l_571[2],&l_571[2],&g_3[1][0][0],&g_13,&g_3[0][3][4],&g_3[0][3][4],&g_13,&g_3[1][0][0]},{&g_3[1][0][0],&l_571[2],&l_571[2],&g_3[1][0][0],&g_13,&g_3[0][3][4],&g_3[0][3][4],&g_13,&g_3[1][0][0],&l_571[2]},{&g_3[1][0][0],&g_3[1][0][0],&g_3[0][3][4],&l_571[2],&g_13,&g_13,&l_571[2],&g_3[0][3][4],&g_3[1][0][0],&g_3[1][0][0]},{&g_13,&l_571[2],&g_3[0][3][4],&g_3[1][0][0],&g_3[1][0][0],&g_3[0][3][4],&l_571[2],&g_13,&g_13,&l_571[2]}};
        union U0 ***l_670 = &g_88[1][6][5];
        int i, j, k;
        (*l_573) = func_4(func_9(l_12, &g_3[1][2][1]), func_32(g_3[1][1][0], (safe_mod_func_int32_t_s_s(((safe_rshift_func_int8_t_s_s((g_327 ^ g_3[0][4][4]), 4)) <= (safe_mod_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s((g_327 != g_3[0][3][1]), l_571[0])), l_571[7]))), l_571[0])), &g_3[1][2][1], &g_3[1][2][3], l_571[4]), l_571[0], l_571[2]);

        ;
        (*l_573) = &g_13;
        for (g_327 = 0; (g_327 <= 4); g_327 += 1)
        {
            int *l_594 = &g_3[1][6][2];
            for (g_311 = 0; (g_311 <= 4); g_311 += 1)
            {
                unsigned l_586 = 1UL;
                int *l_595 = (void*)0;
                const unsigned short l_596 = 0xAD6FL;
                (*g_376) = (safe_add_func_int32_t_s_s(((safe_lshift_func_int16_t_s_s(((((g_327 != g_102) >= (!((+(safe_rshift_func_uint16_t_u_s(func_25(&l_571[0], ((safe_sub_func_int8_t_s_s((safe_sub_func_uint16_t_u_u(((safe_mod_func_int32_t_s_s((-6L), 0x7B9A53DDL)) >= func_25(func_32(l_586, (l_587 || (g_13 && (safe_lshift_func_uint8_t_u_s(((!(safe_sub_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u((l_571[9] && 0x787AL), 10)), g_69[1]))) > 0xE5L), 5)))), l_594, l_595, g_3[1][2][1]), l_586, l_596)), 0x4D82L)), 0x27L)) || (*l_594)), g_394[0][1]), 0))) > (*l_594)))) == g_311) > 0xF4AEADAEL), g_394[0][1])) >= l_596), (*g_434)));
                return g_3[1][2][1];
            }
            (*l_573) = func_32(g_311, l_571[5], l_594, &g_3[0][0][4], g_102);
        }
        (*l_597) = &g_434;
        for (g_311 = 0; (g_311 <= 4); g_311 += 1)
        {
            int l_605[6][9][1] = {{{0x8EB9F7FAL},{0x0DAD3A88L},{1L},{0xFA9F35B0L},{0x836AE0CCL},{(-1L)},{0x72A32509L},{0xD5CA52ACL},{0xC907EA7DL}},{{0x836AE0CCL},{1L},{0x628923D6L},{0x628923D6L},{1L},{0x836AE0CCL},{0xC907EA7DL},{0xD5CA52ACL},{0x72A32509L}},{{(-1L)},{0x836AE0CCL},{0xFA9F35B0L},{1L},{0x0DAD3A88L},{0x8EB9F7FAL},{0x836AE0CCL},{0x8EB9F7FAL},{0x0DAD3A88L}},{{1L},{0xFA9F35B0L},{0x836AE0CCL},{(-1L)},{0x72A32509L},{0xD5CA52ACL},{0xC907EA7DL},{0x836AE0CCL},{1L}},{{0x628923D6L},{0x628923D6L},{1L},{0x836AE0CCL},{0xC907EA7DL},{0xD5CA52ACL},{0x72A32509L},{(-1L)},{0x836AE0CCL}},{{0xFA9F35B0L},{1L},{0x0DAD3A88L},{0x8EB9F7FAL},{0x836AE0CCL},{0x8EB9F7FAL},{0x0DAD3A88L},{1L},{0xFA9F35B0L}}};
            int *l_637 = &g_3[1][2][1];
            int l_649 = 0xD67207D6L;
            int l_669 = (-6L);
            int l_674 = 0L;
            unsigned l_687 = 0xB5B9A7A0L;
            int i, j, k;
            for (g_545.f0 = 0; (g_545.f0 <= 4); g_545.f0 += 1)
            {
                (*g_434) = (safe_lshift_func_int8_t_s_u(1L, 0));
            }
        }
    }


    ;
lbl_827:
    for (g_76.f0 = 0; (g_76.f0 != 23); g_76.f0++)
    {
        const int l_697 = 0xED9B40E9L;
        short l_698 = 0x12BAL;
        unsigned char l_699 = 1UL;
        int l_700 = 0L;
        (*l_671) = ((0x29L || (((*l_671) < (((0L < (l_692 != &g_316)) & 6L) > (((safe_unary_minus_func_int8_t_s((-8L))) | (safe_lshift_func_int16_t_s_u((((func_48(&l_571[0]) && 4294967290UL) < l_697) == g_76.f0), l_698))) ^ 0x6CL))) < g_327)) | l_699);
        (***l_692) = l_700;
    }
    if ((*g_434))
    {
        int *l_701 = &g_3[1][2][1];
        int l_702 = 0x5FA17156L;
        int *l_704 = &l_571[2];
        if ((*l_701))
        {
            char l_703 = 4L;
            unsigned l_707 = 0xDCF5EA2FL;
            int **l_711 = &l_701;
            (*l_711) = func_29(func_56((((*l_701) >= (l_703 & (func_48(l_704) == (safe_sub_func_int32_t_s_s(0x5CA00D17L, g_76.f0))))) & ((l_707 == ((safe_mul_func_int8_t_s_s(g_651, ((-8L) <= l_707))) >= 0x247BE15FL)) || (***l_692))), &l_571[0], (*l_701), (**l_693), l_710), (**l_693));

            ;
            ;
            for (g_13 = 9; (g_13 >= 1); g_13 -= 1)
            {
                int i;
                l_571[g_13] = l_571[g_13];
                (*l_711) = &l_571[g_13];

                ;
                return g_3[1][2][1];
            }
        }
        else
        {
            int **l_718 = &l_671;
            (*l_718) = &l_702;

            ;
            return g_394[0][1];
        }

        ;
        ;
    }
    else
    {
        unsigned char l_723 = 0UL;
        int ***l_749 = &g_316;
        int *l_813 = &g_3[1][2][1];
        for (g_545.f0 = 22; (g_545.f0 >= 27); g_545.f0 = safe_add_func_uint8_t_u_u(g_545.f0, 1))
        {
            for (g_13 = (-7); (g_13 <= (-16)); g_13--)
            {
                (*l_671) = l_723;
            }
            (**l_693) = (safe_lshift_func_uint16_t_u_s(l_723, g_102));
            (***l_692) = (safe_sub_func_uint16_t_u_u(g_676, (safe_mod_func_uint32_t_u_u(g_730, (**l_693)))));
        }
        if ((g_69[2] >= (safe_add_func_uint8_t_u_u(l_723, g_327))))
        {
            char l_733[2][9] = {{7L,0L,7L,0xFBL,(-1L),(-1L),0xFBL,7L,0L},{0L,7L,0xFBL,(-1L),(-1L),0xFBL,7L,0L,7L}};
            union U0 *l_739 = &g_545;
            int l_757 = 1L;
            union U0 *l_788 = (void*)0;
            int i, j;
            if (l_733[0][0])
            {
                int *l_734 = &g_13;
                int **l_750[7] = {&l_671,&l_671,&l_671,&l_671,&l_671,&l_671,&l_671};
                int **l_751 = (void*)0;
                int **l_752[2][10] = {{&l_734,&g_178[1],&l_734,&l_734,&g_178[1],&l_734,&g_178[1],&l_734,&l_734,&l_734},{&l_734,&l_734,&g_178[0],&g_178[0],&l_734,&l_734,&l_734,&g_178[0],&g_178[0],&l_734}};
                int **l_753[6];
                int **l_754[10] = {(void*)0,(void*)0,&g_434,&g_434,(void*)0,(void*)0,(void*)0,&g_434,&g_434,(void*)0};
                int **l_755 = &g_434;
                int i, j;
                for (i = 0; i < 6; i++)
                    l_753[i] = &g_376;
                l_734 = func_29(l_734, g_3[0][6][2]);

                ;
                for (g_327 = 0; (g_327 != 43); g_327 = safe_add_func_uint32_t_u_u(g_327, 7))
                {
                    int *l_737 = &g_13;
                    int **l_742 = &g_178[0];
                    for (g_311 = 0; (g_311 <= 0); g_311 += 1)
                    {
                        int **l_738 = &l_737;
                        union U0 **l_740 = (void*)0;
                        union U0 **l_741 = &g_89;
                        (*l_738) = l_737;
                        (*l_741) = l_739;

                        ;
                    }
                    if (l_733[0][7])
                        continue;
                    (*l_742) = (**l_692);
                }

                ;

                for (g_676 = (-5); (g_676 <= 39); g_676++)
                {
                    unsigned char l_745 = 0UL;
                    int **l_746 = &g_178[1];
                    (*l_746) = func_32(g_730, (0x16L < g_3[1][2][1]), &g_13, l_734, l_745);
                }
                (*l_755) = func_4(func_50(&g_3[1][2][1], (*g_89), ((*l_734) & (safe_lshift_func_int16_t_s_s(((void*)0 == l_749), 7))), l_734, l_2[1]), l_734, g_3[1][2][1], l_733[0][0]);
            }
            else
            {
                return g_76.f0;
            }

            ;

            ;
            l_757 = l_756;
            for (g_676 = 29; (g_676 != 32); g_676 = safe_add_func_uint8_t_u_u(g_676, 5))
            {
                int *l_760 = &l_757;
                int *l_761 = &l_571[3];
                short l_783[8];
                unsigned char l_791 = 0xEAL;
                int i;
                for (i = 0; i < 8; i++)
                    l_783[i] = 3L;
                (***l_692) = func_48(l_760);
                g_231 = l_761;

                ;
                for (l_757 = 0; (l_757 == (-29)); l_757 = safe_sub_func_uint32_t_u_u(l_757, 3))
                {
                    unsigned l_790 = 0x71FDE2AEL;
                    for (g_327 = 6; (g_327 >= 14); g_327 = safe_add_func_int32_t_s_s(g_327, 1))
                    {
                        unsigned short l_770 = 0xF3CCL;
                        (*g_434) = ((safe_mod_func_int16_t_s_s((g_651 == ((0x49FC9054L == ((&l_693 == &g_316) > g_311)) != (safe_sub_func_uint16_t_u_u(l_770, (~(g_394[0][0] == (((safe_rshift_func_int16_t_s_u(((0x4276L ^ l_733[0][0]) != 0x9AC63B00L), g_651)) >= 254UL) && g_730))))))), 65526UL)) || (*g_376));
                        (*g_376) = 4L;
                        (*g_376) = 1L;
                        (**l_693) = ((safe_lshift_func_int16_t_s_u((safe_mod_func_uint8_t_u_u((safe_add_func_int16_t_s_s(((*l_749) != (void*)0), ((safe_rshift_func_uint16_t_u_s(((0UL < 0xB8L) != l_733[0][3]), (safe_lshift_func_int8_t_s_s(l_783[2], (safe_add_func_int16_t_s_s((safe_mul_func_uint16_t_u_u((l_788 != l_789[1]), l_790)), l_791)))))) != g_394[0][1]))), l_770)), g_676)) == g_545.f0);
                    }
                    (*g_434) = (safe_rshift_func_int16_t_s_u(((((0xADE5B3A7L > func_25(&g_102, (l_790 & (func_48(func_29(&l_757, g_13)) | (((safe_lshift_func_int8_t_s_s(0x2DL, (l_749 == l_749))) != 0x77A3L) > l_733[0][0]))), g_13)) == g_327) > g_3[1][4][1]) & g_676), 15));
                }
                return g_3[1][2][1];



            }
            return l_733[0][4];


        }
        else
        {
            int *l_801 = &g_102;
            for (g_545.f0 = (-15); (g_545.f0 < (-18)); g_545.f0 = safe_sub_func_uint32_t_u_u(g_545.f0, 2))
            {
                int **l_800[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_800[i] = (void*)0;
                l_801 = (**l_692);

                ;
                g_434 = &g_102;
            }

            ;
            for (l_653 = 0; (l_653 <= 0); l_653 += 1)
            {
                short l_803 = (-1L);
                int *l_804 = &l_571[0];
                int l_816 = 0x98E1C88AL;
                for (g_651 = 8; (g_651 >= 0); g_651 -= 1)
                {
                    char l_810 = (-1L);
                    int **l_811[10][7][3] = {{{&l_804,(void*)0,&g_178[1]},{&l_804,&g_178[1],&l_804},{&g_178[1],&l_801,&l_801},{&g_178[1],&l_804,(void*)0},{&g_376,&l_804,&l_804},{&g_178[1],&l_801,&g_178[0]},{&g_178[1],&g_178[1],&g_178[1]}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&g_178[1]},{&l_801,&g_376,&g_178[0]},{(void*)0,&g_178[1],&l_804},{&l_671,(void*)0,(void*)0},{&l_671,(void*)0,&l_801},{(void*)0,&l_804,&l_804}},{{&l_801,&g_434,&g_178[1]},{(void*)0,&g_434,&g_178[1]},{(void*)0,&g_434,&g_178[1]},{&g_178[1],&l_804,(void*)0},{&g_178[1],(void*)0,&g_376},{&g_376,(void*)0,&g_376},{&g_178[1],&g_178[1],(void*)0}},{{&g_178[1],&g_376,&g_178[1]},{&l_804,(void*)0,&g_178[1]},{&l_804,(void*)0,&g_178[1]},{&l_804,&g_178[1],(void*)0},{&g_178[1],(void*)0,&g_376},{&l_804,&l_804,&l_804},{&g_376,&l_804,(void*)0}},{{&g_376,(void*)0,&l_804},{&g_376,&g_376,&g_178[1]},{&l_804,&g_178[1],&g_376},{&g_178[1],&l_804,&g_178[1]},{&g_376,(void*)0,&l_804},{&g_434,(void*)0,(void*)0},{&l_801,&g_178[1],&l_804}},{{&l_801,&g_178[1],&g_376},{&g_434,&g_178[1],(void*)0},{&g_376,&l_804,&g_376},{&g_178[1],(void*)0,(void*)0},{&l_804,&l_804,(void*)0},{&g_376,&g_178[1],&g_178[1]},{&g_376,&g_178[1],&g_376}},{{&g_376,&g_178[1],&g_376},{&l_804,(void*)0,&g_178[1]},{&g_178[1],(void*)0,(void*)0},{&g_178[0],&l_804,(void*)0},{(void*)0,&g_178[1],&g_376},{&g_178[0],&g_376,(void*)0},{&g_178[1],(void*)0,&g_376}},{{&l_804,&l_804,&l_804},{&g_376,&l_804,(void*)0},{&g_376,(void*)0,&l_804},{&g_376,&g_376,&g_178[1]},{&l_804,&g_178[1],&g_376},{&g_178[1],&l_804,&g_178[1]},{&g_376,(void*)0,&l_804}},{{&g_434,(void*)0,&g_376},{&g_376,&l_804,&l_804},{&g_376,(void*)0,&g_178[1]},{&l_804,&g_178[1],&l_801},{&g_178[1],&g_178[1],(void*)0},{&g_178[0],&l_804,&g_178[1]},{&l_804,&g_178[1],(void*)0}},{{(void*)0,&g_178[1],&g_178[0]},{&g_434,(void*)0,(void*)0},{(void*)0,&l_804,(void*)0},{&g_178[1],(void*)0,&g_178[0]},{&g_376,&g_178[0],(void*)0},{&l_671,&g_178[1],&g_178[1]},{&l_801,&l_804,(void*)0}}};
                    int i, j, k;
                    if (g_394[l_653][(l_653 + 4)])
                        break;
                    if (g_69[g_651])
                    {
                        int **l_802 = &l_801;
                        (*l_802) = (**l_692);

                        ;
                        (**l_693) = (l_803 || g_69[1]);
                        l_804 = (void*)0;

                        ;
                    }
                    else
                    {
                        return g_805;
                    }

                    ;
                    ;
                    l_804 = func_32((*l_801), g_69[4], func_32(g_730, (((+(***l_692)) >= l_803) | 4294967291UL), &l_571[0], &l_571[0], g_3[1][2][1]), &l_571[0], (*l_801));

                    ;
                    for (g_311 = 0; (g_311 <= 0); g_311 += 1)
                    {
                        int *l_812 = (void*)0;
                        l_813 = l_812;

                        ;
                    }
                }

                ;
                (*l_801) = func_48(l_801);

                ;
                if ((*l_804))
                {
                    unsigned char l_814[3][3][4] = {{{0xFEL,7UL,0xFEL,7UL},{0xFEL,7UL,0xFEL,7UL},{0xFEL,7UL,0xFEL,7UL}},{{0xFEL,7UL,0xFEL,7UL},{0xFEL,7UL,0xFEL,7UL},{0xFEL,7UL,0xFEL,7UL}},{{0xFEL,7UL,0xFEL,7UL},{0xFEL,7UL,0xFEL,7UL},{0xFEL,7UL,0xFEL,7UL}}};
                    int i, j, k;
                    return l_814[2][0][3];
                }
                else
                {
                    int l_824 = 0L;
                    if ((&g_178[1] != g_815))
                    {
                        (*g_434) = l_816;
                        if ((**g_815))
                            break;
                    }
                    else
                    {
                        char l_817 = (-1L);
                        if (l_817)
                            break;
                        if ((*g_231))
                            break;
                        (***l_692) = (safe_mul_func_uint8_t_u_u((7UL <= (*l_804)), (safe_mod_func_int8_t_s_s(0x62L, (safe_sub_func_uint32_t_u_u((g_76.f0 | (l_824 && (safe_mod_func_int8_t_s_s(((*g_376) == g_69[1]), g_69[7])))), ((-3L) == l_817)))))));
                    }
                    if ((*g_231))
                        break;
                }
            }

            ;
        }

        ;
    }
    if (g_545.f0)
        goto lbl_827;
    return g_69[1];
}







static int * const func_4(int * p_5, int * p_6, short p_7, int p_8)
{
    return &g_102;


}







static int * func_9(const int p_10, int * p_11)
{
    int *l_24 = &g_3[1][2][1];
    union U0 **l_558 = &g_89;
    int **l_561[8][6][5] = {{{&g_376,&g_376,&g_376,&g_376,&g_376},{&g_376,&g_376,&g_376,&g_376,&g_376},{&g_376,&g_376,&g_178[1],&g_376,&g_376},{&g_376,&g_376,&g_376,&g_376,&g_376},{&g_376,&g_178[1],&g_178[1],&g_376,&g_178[1]},{&g_376,&g_376,&g_376,&g_376,&g_376}},{{&g_178[1],&g_376,&g_178[1],&g_178[1],&g_376},{&g_376,&g_178[1],&g_178[1],&g_376,&g_178[1]},{&g_376,&g_376,&g_376,&g_376,&g_376},{&g_178[1],&g_376,&g_178[1],&g_178[1],&g_376},{&g_376,&g_178[1],&g_178[1],&g_376,&g_178[1]},{&g_376,&g_376,&g_376,&g_376,&g_376}},{{&g_178[1],&g_376,&g_178[1],&g_178[1],&g_376},{&g_376,&g_178[1],&g_178[1],&g_376,&g_178[1]},{&g_376,&g_376,&g_376,&g_376,&g_376},{&g_178[1],&g_376,&g_178[1],&g_178[1],&g_376},{&g_376,&g_178[1],&g_178[1],&g_376,&g_178[1]},{&g_376,&g_376,&g_376,&g_376,&g_376}},{{&g_178[1],&g_376,&g_178[1],&g_178[1],&g_376},{&g_376,&g_178[1],&g_178[1],&g_376,&g_178[1]},{&g_376,&g_376,&g_376,&g_376,&g_376},{&g_178[1],&g_376,&g_178[1],&g_178[1],&g_376},{&g_376,&g_178[1],&g_178[1],&g_376,&g_178[1]},{&g_376,&g_376,&g_376,&g_376,&g_376}},{{&g_178[1],&g_376,&g_178[1],&g_178[1],&g_376},{&g_376,&g_178[1],&g_178[1],&g_376,&g_178[1]},{&g_376,&g_376,&g_376,&g_376,&g_376},{&g_178[1],&g_376,&g_178[1],&g_178[1],&g_376},{&g_376,&g_178[1],&g_178[1],&g_376,&g_178[1]},{&g_376,&g_376,&g_376,&g_376,&g_376}},{{&g_178[1],&g_376,&g_178[1],&g_178[1],&g_376},{&g_376,&g_178[1],&g_178[1],&g_376,&g_178[1]},{&g_376,&g_376,&g_376,&g_376,&g_376},{&g_178[1],&g_376,&g_178[1],&g_178[1],&g_376},{&g_376,&g_178[1],&g_178[1],&g_376,&g_178[1]},{&g_376,&g_376,&g_376,&g_376,&g_376}},{{&g_178[1],&g_376,&g_178[1],&g_178[1],&g_376},{&g_376,&g_178[1],&g_178[1],&g_376,&g_178[1]},{&g_376,&g_376,&g_376,&g_376,&g_376},{&g_178[1],&g_376,&g_178[1],&g_178[1],&g_376},{&g_376,&g_178[1],&g_178[1],&g_376,&g_178[1]},{&g_376,&g_376,&g_376,&g_376,&g_178[1]}},{{&g_376,&g_178[1],&g_376,&g_376,&g_178[1]},{&g_178[1],&g_376,&g_376,&g_178[1],&g_376},{&g_178[1],&g_178[1],&g_376,&g_178[1],&g_178[1]},{&g_376,&g_178[1],&g_376,&g_376,&g_178[1]},{&g_178[1],&g_376,&g_376,&g_178[1],&g_376},{&g_178[1],&g_178[1],&g_376,&g_178[1],&g_178[1]}}};
    int *l_562[7];
    int i, j, k;
    for (i = 0; i < 7; i++)
        l_562[i] = (void*)0;
    for (g_13 = 0; (g_13 != 18); g_13 = safe_add_func_uint16_t_u_u(g_13, 7))
    {
        int l_483 = (-2L);
        const int *l_557 = &g_102;
        char l_560 = 0L;
    }
    p_11 = func_50(p_11, (**l_558), (*l_24), func_50(func_29(p_11, g_102), (*g_183), (*l_24), l_24, (**l_558)), (**l_558));

    ;
    ;
    return l_562[4];


}







static char func_18(int * p_19, int * p_20, unsigned short p_21, int p_22, unsigned char p_23)
{
    short l_490[5][10][5] = {{{0xE0B7L,0x198BL,0x401BL,0xE33CL,0x401BL},{0x7716L,0x7716L,(-2L),0x5190L,(-1L)},{0xE0B7L,0L,0L,0x3342L,0x3342L},{0x5190L,0x55BDL,0x5190L,0x6328L,0x5112L},{0L,0L,0xE0B7L,(-1L),0x697BL},{(-2L),0x7716L,0x7716L,(-2L),0x5190L},{0x401BL,0x198BL,0xE0B7L,0x697BL,0L},{0xBF59L,0x52D9L,0x5190L,0x52D9L,0xBF59L},{0x198BL,(-1L),0L,0x697BL,0x10F6L},{3L,0x3847L,(-2L),(-2L),0x3847L}},{{0x3342L,0xE0B7L,0x401BL,(-1L),0x10F6L},{0x52D9L,(-2L),0xBF59L,0x6328L,0xBF59L},{0x10F6L,0x10F6L,0x198BL,0x3342L,0L},{(-1L),0x5190L,(-2L),0x7716L,0x7716L},{0x10F6L,0x401BL,0x10F6L,0x697BL,0L},{(-2L),0x5190L,(-1L),0x6328L,3L},{0xE0B7L,0x18B3L,0x18B3L,0xE0B7L,0x10F6L},{0x3847L,0x52D9L,(-1L),3L,0x5190L},{(-1L),0L,0x10F6L,0L,(-1L)},{0x52D9L,0x6328L,(-2L),3L,0x55BDL}},{{0x198BL,0xE33CL,0xE0B7L,0xE0B7L,0xE33CL},{0x7716L,(-1L),0x3847L,0x6328L,0x55BDL},{0L,0xE0B7L,(-1L),0x697BL,(-1L)},{0x55BDL,0x55BDL,0x52D9L,0x7716L,0x5190L},{0L,0x3342L,0x198BL,0x10F6L,0x10F6L},{0x7716L,0xBF59L,0x7716L,0x5112L,3L},{0x198BL,0x3342L,0L,0xE33CL,0L},{0x52D9L,0x55BDL,0x55BDL,0x52D9L,0x7716L},{(-1L),0xE0B7L,0L,0L,0x3342L},{0x3847L,(-1L),0x7716L,(-1L),0x3847L}},{{0xE0B7L,0xE33CL,0x198BL,0L,0x18B3L},{(-2L),0x6328L,0x52D9L,0x52D9L,0x6328L},{(-1L),0x18B3L,0L,0x198BL,0xE33CL},{0x55BDL,0x7716L,3L,0x52D9L,3L},{0xE33CL,0xE33CL,0x10F6L,(-1L),0x401BL},{0x55BDL,0xBF59L,0x5190L,0x3847L,0x3847L},{(-1L),0x697BL,(-1L),0xE0B7L,0L},{0x5190L,0xBF59L,0x55BDL,(-2L),(-1L)},{0x10F6L,0xE33CL,0xE33CL,0x10F6L,(-1L)},{3L,0x7716L,0x55BDL,(-1L),0xBF59L}},{{0L,0x18B3L,(-1L),0x18B3L,0L},{0x7716L,(-2L),0x5190L,(-1L),0x6328L},{0x3342L,0x198BL,0x10F6L,0x10F6L,0x198BL},{0x3847L,0x55BDL,3L,(-2L),0x6328L},{0x18B3L,0x10F6L,0L,0xE0B7L,0L},{0x6328L,0x6328L,0x7716L,0x3847L,0xBF59L},{0x18B3L,0x401BL,0x3342L,(-1L),(-1L)},{0x3847L,0x5112L,0x3847L,0x52D9L,(-1L)},{0x3342L,0x401BL,0x18B3L,0x198BL,0L},{0x7716L,0x6328L,0x6328L,0x7716L,0x3847L}}};
    unsigned short l_503 = 1UL;
    int l_547 = 0L;
    int i, j, k;
lbl_500:
    (*g_434) = 0x36DD8FA9L;
    if ((~l_490[0][8][2]))
    {
        int l_493 = 0L;
        (*g_434) = (safe_lshift_func_int8_t_s_u(func_48(&p_22), 2));
        (*g_434) = l_493;
    }
    else
    {
        unsigned l_494 = 18446744073709551615UL;
        int *l_499 = (void*)0;
        const char l_530 = 2L;
        for (p_23 = 0; (p_23 <= 3); p_23 += 1)
        {
            int *l_507[3];
            union U0 *l_521 = (void*)0;
            const unsigned l_548 = 4294967289UL;
            int i;
            for (i = 0; i < 3; i++)
                l_507[i] = (void*)0;
            l_494 = (*g_376);
            if ((safe_add_func_uint16_t_u_u((g_3[1][4][0] ^ l_494), l_490[2][6][3])))
            {
                int **l_497 = &g_178[1];
                (*l_497) = (void*)0;
                for (g_76.f0 = 1; (g_76.f0 >= 0); g_76.f0 -= 1)
                {
                    for (p_22 = 0; (p_22 <= 1); p_22 += 1)
                    {
                        int *l_498 = (void*)0;
                        int i, j, k;
                        g_178[p_22] = l_499;
                    }
                    if ((*g_376))
                    {
                        (*l_497) = &g_102;
                        if (p_23)
                            goto lbl_500;
                    }
                    else
                    {
                        return g_102;
                    }
                    return p_23;
                }
                if ((*g_376))
                    continue;
            }
            else
            {
                unsigned short l_509 = 0x2537L;
                for (g_327 = 0; (g_327 <= 4); g_327 += 1)
                {
                    unsigned short l_506[6];
                    int i;
                    for (i = 0; i < 6; i++)
                        l_506[i] = 0UL;
                    for (g_102 = 0; (g_102 <= 3); g_102 += 1)
                    {
                        int *l_508 = &g_102;
                        int l_510 = 0xA27C0370L;
                        int i, j, k;
                        l_510 = (l_490[g_102][(g_102 + 3)][g_327] <= (func_25(func_32((p_21 == (!(safe_lshift_func_uint8_t_u_s(l_503, 3)))), g_76.f0, &g_3[0][4][4], func_32((safe_rshift_func_uint16_t_u_s((&g_316 != &g_316), l_506[5])), l_506[2], l_507[0], l_508, p_21), p_23), l_509, g_311) == l_490[0][0][4]));
                    }
                    if ((safe_add_func_int16_t_s_s(0x70C0L, 0xB3C5L)))
                    {
                        union U0 ***l_513 = &g_88[2][4][0];
                        (*g_434) = ((void*)0 != &g_89);
                        (*l_513) = &g_89;
                    }
                    else
                    {
                        int ***l_516 = &g_316;
                        (*g_434) = (safe_mul_func_uint16_t_u_u(l_506[4], 0x258EL));
                        if ((*p_20))
                            break;
                        (*l_516) = &g_434;

                        ;
                    }
                    (*g_434) = ((p_21 <= (safe_rshift_func_int16_t_s_s((l_490[3][7][4] > (safe_sub_func_uint16_t_u_u((l_521 == (void*)0), g_102))), (safe_rshift_func_uint8_t_u_u(l_503, p_23))))) & (safe_rshift_func_uint16_t_u_u(g_102, 0)));
                    for (p_22 = 3; (p_22 >= 0); p_22 -= 1)
                    {
                        return p_23;
                    }
                }
                for (g_102 = 3; (g_102 >= 0); g_102 -= 1)
                {
                    const int *l_526 = &g_102;
                    int *l_529 = &g_3[0][2][2];
                    for (p_22 = 0; (p_22 <= 3); p_22 += 1)
                    {
                        return l_490[3][4][0];
                    }
                    for (l_494 = 0; (l_494 <= 3); l_494 += 1)
                    {
                        int **l_531 = &l_499;
                        int l_534[6];
                        int i;
                        for (i = 0; i < 6; i++)
                            l_534[i] = 0xB87D6A88L;
                        (*l_531) = func_56(g_69[1], l_526, g_3[0][3][1], (safe_add_func_uint8_t_u_u(((func_25(l_529, l_490[1][2][3], l_530) ^ p_23) == 0x1AL), g_69[1])), g_311);

                        ;
                        p_22 = 0L;
                        l_534[3] = (((((safe_mul_func_int8_t_s_s(g_69[5], (0UL >= (1L | ((*l_529) > ((*l_526) < (**l_531))))))) ^ func_25(&p_22, (&p_20 != l_531), (*l_526))) > 255UL) > g_13) || (*l_499));
                    }
                }
            }
            if (l_490[0][8][2])
                break;
            if ((*p_20))
                continue;
            for (p_22 = 0; (p_22 <= 3); p_22 += 1)
            {
                int *l_535[6];
                int **l_536 = (void*)0;
                int **l_537 = &l_507[0];
                union U0 l_544 = {-1L};
                int i;
                for (i = 0; i < 6; i++)
                    l_535[i] = &g_3[1][2][1];
                (*l_537) = func_50(l_499, (*g_183), l_490[0][8][3], l_535[0], (*g_89));
                for (g_311 = 0; (g_311 <= 3); g_311 += 1)
                {
                    (*g_434) = (safe_mul_func_uint16_t_u_u(((void*)0 == &g_88[2][6][0]), (safe_mul_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_s(((+g_394[0][4]) < p_22), (func_25(func_50(&g_13, l_544, p_23, &p_22, g_545), (*p_19), p_22) > (*p_19)))) != g_327), 0x4044L))));
                    if ((*g_376))
                    {
                        (*l_537) = func_56(g_69[1], &p_22, (+(g_102 != g_3[1][2][1])), (0x98611631L && (&g_434 != &g_231)), p_22);
                    }
                    else
                    {
                        union U0 **l_546 = &g_89;
                        p_20 = &p_22;

                        ;
                        (*l_546) = l_521;

                        ;
                        l_547 = func_48(&p_22);
                        return p_23;
                    }
                    for (l_544.f0 = 3; (l_544.f0 >= 0); l_544.f0 -= 1)
                    {
                        return g_311;
                    }
                    (*g_434) = (*g_231);
                }
                (*g_434) = (-1L);
                (*g_434) = (g_394[0][1] < g_545.f0);
                for (p_21 = 0; (p_21 <= 3); p_21 += 1)
                {
                    (*g_434) = l_548;
                    if (l_503)
                        continue;
                    (*l_537) = &p_22;
                    if ((*p_20))
                        continue;
                    for (g_311 = 0; (g_311 <= 3); g_311 += 1)
                    {
                        unsigned l_549 = 18446744073709551609UL;
                        int *l_550[2];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_550[i] = &g_3[1][6][3];
                        if (l_549)
                            break;
                        (*l_537) = l_550[0];
                    }
                }
            }


        }

        ;
    }
    return l_490[1][2][2];
}







static unsigned short func_25(int * p_26, int p_27, const short p_28)
{
    for (g_76.f0 = 0; (g_76.f0 <= (-19)); g_76.f0--)
    {
        if ((*g_376))
            break;
        return p_28;
    }
    return p_28;
}







static int * func_29(int * p_30, unsigned short p_31)
{
    const int *l_62 = &g_3[0][3][3];
    int l_67 = 0x97689278L;
    union U0 l_377 = {0x75L};
    int l_395 = 1L;
    p_30 = func_32((+(g_13 == (safe_mod_func_int32_t_s_s((safe_rshift_func_uint16_t_u_u((0xB99BL & (g_3[1][0][2] != ((safe_add_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s(1UL, (safe_rshift_func_int16_t_s_u(g_3[1][2][1], func_48(func_50(func_56(p_31, l_62, (((*l_62) < (safe_sub_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u(l_67, 0x83L)), (*l_62)))) && p_31), g_13, p_31), (*g_89), (*l_62), g_376, l_377)))))), p_31)) || 0x40L))), l_395)), (*p_30))))), g_3[1][4][2], &l_395, &l_395, p_31);

    ;
    ;
    return p_30;


}







static int * func_32(unsigned short p_33, char p_34, int * p_35, int * p_36, unsigned p_37)
{
    union U0 l_404[1] = {{-1L}};
    int l_459 = 0L;
    char l_471[8][1][6] = {{{0xECL,3L,3L,0xECL,3L,0xD7L}},{{0xD7L,3L,0xD7L,0L,0L,0xD7L}},{{0xECL,0xECL,0L,1L,0L,0xECL}},{{0L,3L,1L,1L,3L,0L}},{{0xECL,0L,1L,0L,0xECL,0xECL}},{{0xD7L,0L,0L,0xD7L,3L,0xD7L}},{{0xD7L,3L,0xD7L,0L,0L,0xD7L}},{{0xECL,0xECL,0L,1L,0L,0xECL}}};
    int i, j, k;
    return &g_13;


}







static unsigned short func_48(int * p_49)
{
    union U0 l_389 = {0xEDL};
    int *l_390[3];
    int **l_391 = &g_376;
    int i;
    for (i = 0; i < 3; i++)
        l_390[i] = &g_3[0][5][3];
    (*l_391) = func_50(p_49, l_389, g_311, l_390[2], l_389);

    ;
    g_394[0][1] = (((safe_mod_func_int32_t_s_s(9L, g_311)) > g_13) >= (g_69[3] != (**l_391)));
    return (**l_391);
}







static int * func_50(int * p_51, union U0 p_52, unsigned p_53, int * p_54, union U0 p_55)
{
    union U0 * const *l_379 = &g_89;
    union U0 * const **l_378 = &l_379;
    int *l_380 = &g_102;
    unsigned short l_387 = 0xF2F1L;
    int **l_388 = &l_380;
    (*l_380) = ((l_378 != (void*)0) != 4294967287UL);
    (*l_388) = func_56(p_55.f0, l_380, ((safe_rshift_func_uint16_t_u_s((safe_mod_func_int16_t_s_s(p_55.f0, (safe_sub_func_uint16_t_u_u(l_387, 0UL)))), 2)) & (*l_380)), p_55.f0, p_55.f0);

    ;
    return &g_13;


}







static int * func_56(unsigned char p_57, const int * p_58, short p_59, char p_60, int p_61)
{
    int l_68 = 0x15623A55L;
    union U0 *l_75 = &g_76;
    unsigned l_103[9] = {1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL};
    int *l_125 = (void*)0;
    int **l_124[6][5] = {{&l_125,&l_125,(void*)0,&l_125,(void*)0},{&l_125,&l_125,&l_125,&l_125,&l_125},{&l_125,&l_125,(void*)0,&l_125,(void*)0},{&l_125,&l_125,&l_125,&l_125,&l_125},{&l_125,&l_125,(void*)0,&l_125,(void*)0},{&l_125,&l_125,&l_125,&l_125,&l_125}};
    union U0 *l_180 = &g_76;
    int l_283 = 1L;
    int *l_297 = &l_68;
    int i, j;
    g_69[1] = (g_3[1][2][1] && ((g_13 != g_3[1][2][1]) == l_68));
    return &g_3[0][6][3];


}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_3[i][j][k], "g_3[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_13, "g_13", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_69[i], "g_69[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_76.f0, "g_76.f0", print_hash_value);
    transparent_crc(g_102, "g_102", print_hash_value);
    transparent_crc(g_311, "g_311", print_hash_value);
    transparent_crc(g_327, "g_327", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_394[i][j], "g_394[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_545.f0, "g_545.f0", print_hash_value);
    transparent_crc(g_651, "g_651", print_hash_value);
    transparent_crc(g_676, "g_676", print_hash_value);
    transparent_crc(g_730, "g_730", print_hash_value);
    transparent_crc(g_805, "g_805", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
