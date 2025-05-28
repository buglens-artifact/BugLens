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
   unsigned f0 : 22;
};


static unsigned g_6[8][2][9] = {{{1UL,1UL,1UL,4294967286UL,4294967286UL,1UL,1UL,0x74ADF298L,0x74ADF298L},{0xFCF09CC2L,0xF6FB807CL,0x01480146L,0x06EC6E54L,0x01480146L,0xF6FB807CL,0xFCF09CC2L,0UL,0x06EC6E54L}},{{1UL,0x2AF0488FL,0UL,4294967288UL,0x403CA955L,0xFFB91E60L,0x2AF0488FL,4294967295UL,1UL},{0x25F5F996L,0x544D1878L,4294967289UL,0UL,0xFEC1B16EL,0x26F37911L,0UL,0UL,0x26F37911L}},{{0xC80F219AL,0xCA4E8652L,0x74ADF298L,0xCA4E8652L,0xC80F219AL,8UL,4294967292UL,0x74ADF298L,4294967288UL},{0xFDD8FB8CL,4294967295UL,8UL,1UL,0x7790660DL,0xF368A901L,4294967295UL,0x25F5F996L,0UL}},{{0x0BA1BF2BL,0x2AF0488FL,0x24770669L,0xFFB91E60L,0xC80F219AL,1UL,1UL,0xC80F219AL,0xFFB91E60L},{0x544D1878L,0x457D6700L,0x544D1878L,0xF368A901L,0xF6FB807CL,4294967289UL,0x457D6700L,0xFDD8FB8CL,0x9DF9481FL}},{{4294967292UL,0x2D3650DFL,8UL,0x403CA955L,4294967293UL,0xCA4E8652L,0x925EF2C3L,0x24770669L,4294967288UL},{1UL,0xFCF09CC2L,0UL,0xF368A901L,0xFEC1B16EL,0xFEC1B16EL,0xF368A901L,0UL,0xFCF09CC2L}},{{0x2D3650DFL,0x74ADF298L,0UL,0xFFB91E60L,1UL,0x2D3650DFL,4294967293UL,4294967286UL,4294967295UL},{2UL,0xFEC1B16EL,0xFCF09CC2L,1UL,4294967290UL,0x5ED7C6AEL,4294967292UL,0xF368A901L,1UL}},{{1UL,0x74ADF298L,0x403CA955L,0x925EF2C3L,0x925EF2C3L,0x403CA955L,0x74ADF298L,1UL,0x24770669L},{0xFDD8FB8CL,0xFCF09CC2L,4294967290UL,0x544D1878L,4294967295UL,0UL,0xF6FB807CL,0x9DF9481FL,4294967289UL}},{{4294967286UL,0x2D3650DFL,4294967295UL,0xC80F219AL,0x2AF0488FL,1UL,0x24770669L,4294967295UL,0x24770669L},{0xF368A901L,0x457D6700L,0x26F37911L,0x26F37911L,0x457D6700L,0xF368A901L,4294967290UL,0xFEC1B16EL,0x5ED7C6AEL}}};
static struct S0 g_41 = {1709};
static int g_89 = 0x28EF6BE7L;
static int * volatile g_88 = &g_89;
static struct S0 * volatile g_90 = &g_41;
static int g_96[2][6][6] = {{{1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L}},{{1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L}}};
static struct S0 * volatile g_102[7][9] = {{&g_41,&g_41,&g_41,&g_41,&g_41,&g_41,&g_41,&g_41,&g_41},{&g_41,&g_41,&g_41,&g_41,&g_41,&g_41,&g_41,&g_41,&g_41},{&g_41,&g_41,&g_41,&g_41,&g_41,&g_41,&g_41,&g_41,&g_41},{&g_41,&g_41,&g_41,&g_41,&g_41,&g_41,&g_41,&g_41,&g_41},{&g_41,&g_41,&g_41,&g_41,&g_41,&g_41,&g_41,&g_41,&g_41},{&g_41,&g_41,&g_41,&g_41,&g_41,&g_41,&g_41,&g_41,&g_41},{&g_41,&g_41,&g_41,&g_41,&g_41,&g_41,&g_41,&g_41,&g_41}};
static struct S0 * volatile g_103 = &g_41;
static int * volatile g_147 = &g_96[1][4][3];
static int * volatile g_149 = &g_89;
static struct S0 g_155 = {1197};
static int *g_158 = &g_96[1][1][3];
static int ** volatile g_157 = &g_158;
static int ** volatile g_183 = &g_158;
static struct S0 *g_222[5][4] = {{(void*)0,&g_155,(void*)0,(void*)0},{&g_155,&g_155,&g_155,&g_155},{&g_155,(void*)0,(void*)0,&g_155},{(void*)0,&g_155,(void*)0,(void*)0},{&g_155,&g_155,&g_155,&g_155}};
static struct S0 **g_221 = &g_222[1][0];
static struct S0 *** volatile g_220 = &g_221;
static int ** volatile g_244[2][4][4] = {{{&g_158,&g_158,&g_158,&g_158},{&g_158,&g_158,&g_158,&g_158},{&g_158,&g_158,&g_158,&g_158},{&g_158,(void*)0,(void*)0,&g_158}},{{&g_158,&g_158,&g_158,&g_158},{&g_158,&g_158,&g_158,&g_158},{&g_158,&g_158,&g_158,&g_158},{&g_158,&g_158,&g_158,&g_158}}};
static int ** volatile g_245 = &g_158;
static int * volatile g_322 = &g_96[1][4][3];
static unsigned char g_331 = 1UL;
static volatile char g_373 = (-8L);
static unsigned g_396 = 0x33D7443FL;
static struct S0 *** volatile g_398[4][9] = {{&g_221,&g_221,&g_221,&g_221,&g_221,&g_221,&g_221,&g_221,&g_221},{&g_221,&g_221,&g_221,&g_221,&g_221,&g_221,&g_221,&g_221,&g_221},{&g_221,&g_221,&g_221,&g_221,&g_221,&g_221,(void*)0,&g_221,&g_221},{&g_221,&g_221,&g_221,&g_221,&g_221,&g_221,&g_221,(void*)0,&g_221}};
static struct S0 * volatile g_432 = &g_41;
static int g_454 = 0xBFB7129CL;
static int * volatile g_453 = &g_454;
static int g_503 = 0x27C2E3E6L;
static unsigned short g_507 = 0x959DL;
static struct S0 * volatile g_509 = &g_155;
static volatile long long g_532 = (-7L);
static int * volatile g_550[8] = {&g_454,&g_96[1][4][3],&g_454,&g_96[1][4][3],&g_454,&g_96[1][4][3],&g_454,&g_96[1][4][3]};
static int * volatile g_554[9] = {&g_96[0][0][4],&g_96[1][4][3],&g_96[0][0][4],&g_96[0][0][4],&g_96[1][4][3],&g_96[0][0][4],&g_96[0][0][4],&g_96[1][4][3],&g_96[0][0][4]};
static int * volatile g_555 = &g_503;
static struct S0 * volatile g_557 = &g_155;
static int * volatile g_571[4] = {&g_454,&g_454,&g_454,&g_454};
static int * volatile g_578 = &g_503;
static struct S0 * volatile g_579[1][4][9] = {{{&g_155,&g_155,&g_155,&g_155,&g_155,&g_155,&g_155,&g_155,&g_155},{&g_155,&g_41,&g_155,&g_41,&g_155,&g_41,&g_155,&g_41,&g_155},{&g_155,&g_155,&g_155,&g_155,&g_155,&g_155,&g_155,&g_155,&g_155},{&g_155,&g_41,&g_155,&g_41,&g_155,&g_41,&g_155,&g_41,&g_155}}};
static struct S0 * volatile g_590 = &g_155;
static unsigned long long g_616 = 0x1B769A7FC2B12201LL;
static int * volatile g_643 = &g_96[0][3][1];
static struct S0 * volatile g_658 = (void*)0;
static volatile int g_660 = 0x5E53BEF6L;
static int * volatile g_712 = (void*)0;
static char g_715[2][1][7] = {{{3L,3L,3L,3L,3L,3L,3L}},{{(-9L),0L,(-9L),0L,(-9L),0L,(-9L)}}};
static struct S0 g_716 = {124};
static char g_723 = 0x41L;
static short g_761 = 0x5ABCL;
static volatile int ** volatile g_826 = (void*)0;
static volatile int ** volatile *g_825 = &g_826;
static struct S0 * volatile g_1053 = &g_716;
static int *g_1109 = &g_96[1][5][0];
static struct S0 * volatile g_1131 = (void*)0;
static short g_1153 = (-1L);
static int g_1180 = 4L;
static struct S0 * volatile g_1247 = &g_41;
static unsigned g_1336 = 0xA815CC91L;
static int g_1401[7] = {5L,1L,5L,5L,1L,5L,5L};
static int ** volatile g_1426[10] = {&g_158,&g_158,&g_158,&g_158,&g_158,&g_158,&g_158,&g_158,&g_158,&g_158};
static int g_1492 = 0x7495EF1EL;
static int ** volatile g_1495 = (void*)0;
static struct S0 g_1551 = {1331};
static struct S0 g_1595 = {358};
static struct S0 * volatile g_1665 = &g_155;



static unsigned func_1(void);
static struct S0 func_13(int p_14, unsigned char p_15, int p_16, unsigned short p_17);
static short func_26(short p_27);
static unsigned func_28(unsigned long long p_29);
static int func_30(unsigned p_31, unsigned long long p_32, unsigned p_33, struct S0 p_34, unsigned long long p_35);
static unsigned long long func_36(struct S0 p_37, short p_38, int p_39, int p_40);
static long long func_46(long long p_47, int p_48);
static unsigned func_49(char p_50, unsigned short p_51, unsigned short p_52, int p_53, unsigned char p_54);
static char func_55(int p_56, char p_57, unsigned p_58, unsigned p_59, short p_60);
static long long func_61(int p_62, unsigned short p_63, int p_64, unsigned char p_65);
static unsigned func_1(void)
{
    unsigned short l_7 = 0x976BL;
    struct S0 ***l_1472 = &g_221;
    unsigned char l_1481[3][7] = {{0UL,0x2DL,0x2DL,0UL,0xBDL,255UL,0xBDL},{0UL,0x2DL,0x2DL,0UL,0xBDL,255UL,0xBDL},{0UL,0x2DL,0x2DL,0UL,0xBDL,255UL,0xBDL}};
    char l_1511 = 0x29L;
    int *l_1528[1][9] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
    int *l_1568 = &g_1180;
    long long l_1574 = (-1L);
    int **l_1576 = &l_1568;
    int l_1589 = 2L;
    int l_1594 = 0x60B05C09L;
    struct S0 l_1603 = {1678};
    int i, j;
    if ((+(safe_add_func_int8_t_s_s(((safe_lshift_func_uint16_t_u_s(65528UL, g_6[4][0][3])) && (-1L)), l_7))))
    {
        short l_20 = (-1L);
        int *l_1477[1];
        struct S0 l_1479[1] = {{708}};
        char l_1494 = 0L;
        int l_1536 = 0L;
        char l_1537 = 0x08L;
        int i;
        for (i = 0; i < 1; i++)
            l_1477[i] = &g_1180;
        for (l_7 = (-29); (l_7 <= 58); l_7 = safe_add_func_int16_t_s_s(l_7, 1))
        {
            unsigned short l_10 = 0x60BEL;
            int *l_1425 = &g_89;
            struct S0 l_1434 = {1248};
            struct S0 **l_1498 = &g_222[1][0];
            if (l_10)
            {
                return g_6[4][0][4];
            }
            else
            {
                unsigned char l_1443 = 0x66L;
                if (g_6[1][1][5])
                {
                    char l_1442[2];
                    int l_1444 = (-1L);
                    int i;
                    for (i = 0; i < 2; i++)
                        l_1442[i] = (-1L);
                    for (l_10 = (-27); (l_10 != 37); l_10 = safe_add_func_uint16_t_u_u(l_10, 5))
                    {
                        char l_25 = (-1L);
                        struct S0 *l_1424 = &g_155;
                        int **l_1427 = &g_1109;
                    }
                    for (l_20 = 16; (l_20 == (-4)); l_20 = safe_sub_func_uint32_t_u_u(l_20, 1))
                    {
                        unsigned short l_1432[6][8][5] = {{{1UL,65535UL,0xF6A6L,65535UL,0x5051L},{9UL,0x1446L,5UL,65535UL,0xBF7BL},{65527UL,0x475DL,6UL,0xDBA8L,0x6392L},{0xA937L,65529UL,2UL,0xDBA8L,0x0492L},{0xC3CEL,1UL,0x8DD2L,65535UL,0xA954L},{65535UL,65535UL,0x4F6AL,65535UL,65535UL},{1UL,0xCEC0L,1UL,9UL,0xF6A6L},{0xA954L,0x4F6AL,65535UL,0xDC90L,0x4358L}},{{0xD454L,0xCEC0L,0x6310L,8UL,65529UL},{0x1FE9L,0xE4CAL,65535UL,0x4358L,65535UL},{1UL,65530UL,0UL,0x1446L,0x0492L},{65535UL,0xBF7BL,0xD454L,0x8D81L,0x475DL},{0x8DD2L,1UL,0x0B29L,0x225AL,0x2869L},{0x4358L,0x475DL,0x225AL,65527UL,9UL},{0x5051L,0x475DL,0x4F6AL,0x9E4FL,0x8D81L},{6UL,1UL,0x2869L,0xF6A6L,0xF3B1L}},{{0x506CL,0xBF7BL,1UL,1UL,0xBF7BL},{65529UL,65530UL,1UL,0x8DC7L,0xA937L},{0UL,0xE4CAL,0x9AF7L,0x0B29L,0x6310L},{0x9AF7L,0xCEC0L,0xDBA8L,0UL,0x8DD2L},{0UL,0xD454L,0xF6A6L,0x7944L,0x6392L},{65529UL,5UL,6UL,0xA937L,0x7944L},{0x506CL,0x8DC7L,0x560AL,0xCEC0L,0x225AL},{6UL,0UL,65535UL,0x560AL,5UL}},{{0x5051L,1UL,0x1446L,0xBF7BL,5UL},{0x4358L,0x0492L,1UL,65535UL,0x225AL},{0x8DD2L,65535UL,0xDC90L,0xA937L,1UL},{0x8D81L,65527UL,65527UL,0x8D81L,0x560AL},{1UL,0x475DL,1UL,0UL,65527UL},{0x8DD2L,0xCEC0L,0x5051L,0x506CL,0xDF6AL},{1UL,0x7944L,0xD454L,0UL,0x9E4FL},{0xC3CEL,6UL,65535UL,0x8D81L,1UL}},{{0xA954L,0x0492L,0UL,0xA937L,0x1446L},{65535UL,1UL,0x1446L,0x5051L,0xD454L},{0xD454L,8UL,0xF3B1L,1UL,0x7944L},{0xE4CAL,0x8D81L,0xF3B1L,0x8DC7L,65529UL},{0x475DL,65529UL,0x1446L,2UL,1UL},{0xDF6AL,0x1446L,0UL,0x9E4FL,0UL},{0x8DC7L,0x8DC7L,65535UL,1UL,5UL},{0x225AL,0x4F6AL,0xD454L,0xCEC0L,0x6310L}},{{65535UL,0x6392L,0x5051L,8UL,65530UL},{0x506CL,0x4F6AL,1UL,0x1FE9L,65535UL},{0UL,0x8DC7L,65527UL,65535UL,0x2869L},{0xF3B1L,0x1446L,0xDC90L,0xE4CAL,0xC3CEL},{0xF6A6L,65529UL,0xBF7BL,0x0B29L,65535UL},{0x4F6AL,0x8D81L,0x0492L,0x475DL,0x4F6AL},{0xD454L,0x1446L,0x1FE9L,0x6310L,9UL},{1UL,0UL,0xA937L,0x6392L,0x475DL}}};
                        struct S0 l_1433 = {366};
                        int i, j, k;
                        (*l_1425) = func_30(((safe_mod_func_int32_t_s_s(l_1432[5][2][1], 0x88096E24L)) >= 1L), ((void*)0 == (*g_825)), ((!g_6[2][1][7]) | (((l_1433 , &g_1180) != l_1425) , g_1153)), l_1434, g_1180);



                        return g_1180;
                    }
                    (*g_1247) = (*g_509);
                    for (g_454 = 0; (g_454 <= 6); g_454 += 1)
                    {
                        long long l_1437 = 5L;
                    }
                }
                else
                {
                    struct S0 l_1457 = {513};
                    if ((l_1443 && l_1443))
                    {
                        return g_454;
                    }
                    else
                    {
                        int *l_1445 = &g_96[1][4][3];
                        int **l_1446 = &l_1445;
                        (*l_1446) = l_1445;
                        (*l_1445) = (safe_mod_func_int8_t_s_s((safe_sub_func_int32_t_s_s(((*g_220) != &g_222[3][0]), 0x41D66D2AL)), 1L));
                    }
                    for (g_507 = 0; (g_507 != 36); g_507 = safe_add_func_uint64_t_u_u(g_507, 7))
                    {
                        (*g_1109) &= (((*l_1425) < ((safe_add_func_int32_t_s_s((safe_add_func_uint16_t_u_u(((-1L) >= 0x598FL), ((l_1457 , l_7) , (1L == ((*g_825) != (void*)0))))), 4294967295UL)) || 0x070307AE807A2CC5LL)) < g_616);
                    }
                    for (g_761 = 7; (g_761 == 12); g_761 = safe_add_func_uint16_t_u_u(g_761, 6))
                    {
                        struct S0 l_1460[4][8][6] = {{{{1893},{1676},{303},{303},{1676},{1893}},{{1043},{840},{531},{126},{675},{1893}},{{531},{912},{303},{1229},{1397},{303}},{{531},{675},{1229},{126},{1010},{126}},{{1043},{675},{1043},{303},{1397},{1229}},{{1893},{912},{1043},{1893},{675},{126}},{{126},{840},{1229},{1893},{1676},{303}},{{1893},{1676},{303},{303},{1676},{1893}}},{{{1043},{840},{531},{126},{675},{1893}},{{531},{912},{303},{1229},{1397},{303}},{{531},{675},{1229},{126},{1010},{126}},{{1043},{675},{1043},{303},{1397},{1229}},{{1893},{912},{1043},{1893},{675},{126}},{{126},{840},{1229},{1893},{1676},{1007}},{{1885},{1229},{1007},{1007},{1229},{1885}},{{1592},{126},{722},{163},{1893},{1885}}},{{{722},{303},{1007},{1310},{1999},{1007}},{{722},{1893},{1310},{163},{1043},{163}},{{1592},{1893},{1592},{1007},{1999},{1310}},{{1885},{303},{1592},{1885},{1893},{163}},{{163},{126},{1310},{1885},{1229},{1007}},{{1885},{1229},{1007},{1007},{1229},{1885}},{{1592},{126},{722},{163},{1893},{1885}},{{722},{303},{1007},{1310},{1999},{1007}}},{{{722},{1893},{1310},{163},{1043},{163}},{{1592},{1893},{1592},{1007},{1999},{1310}},{{1885},{303},{1592},{1885},{1893},{163}},{{163},{126},{1310},{1885},{1229},{1007}},{{1885},{1229},{1007},{1007},{1229},{1885}},{{1592},{126},{722},{163},{1999},{680}},{{1310},{126},{163},{1007},{531},{163}},{{1310},{1999},{1007},{1592},{1893},{1592}}}};
                        int i, j, k;
                        l_1460[2][4][3] = l_1434;
                    }
                    for (g_503 = 6; (g_503 >= 0); g_503 -= 1)
                    {
                        struct S0 *l_1461 = &l_1457;
                        (*l_1461) = (*g_1247);
                    }
                }
            }
            (*l_1425) |= (*g_322);
            for (g_507 = 18; (g_507 >= 18); g_507 = safe_add_func_int32_t_s_s(g_507, 1))
            {
                unsigned char l_1475 = 0x4CL;
                int *l_1480[6][9][4] = {{{&g_96[1][4][3],&g_96[1][4][3],&g_96[1][4][3],&g_96[1][4][3]},{&g_96[1][4][3],&g_96[1][4][3],&g_96[1][4][3],&g_96[1][4][3]},{&g_96[1][4][3],&g_96[1][4][3],&g_96[1][4][3],&g_96[1][4][3]},{&g_96[1][4][3],&g_96[1][4][3],&g_96[1][4][3],&g_96[1][4][3]},{&g_96[1][4][3],&g_96[1][4][3],&g_96[1][4][3],&g_96[1][4][3]},{&g_96[1][4][3],&g_96[1][4][3],&g_96[1][4][3],&g_96[1][4][3]},{&g_96[1][4][3],&g_96[1][4][3],&g_96[1][4][3],&g_96[1][4][3]},{&g_96[1][4][3],&g_96[1][4][3],&g_96[1][4][3],&g_96[1][4][3]},{&g_96[1][4][3],&g_96[1][4][3],&g_96[1][4][3],&g_96[1][4][3]}},{{&g_96[1][4][3],&g_96[1][4][3],&g_96[1][4][3],&g_96[1][4][3]},{&g_96[1][4][3],&g_96[1][4][3],&g_96[1][4][3],&g_96[1][4][3]},{&g_96[1][4][3],&g_96[1][4][3],&g_96[1][4][3],&g_96[1][4][3]},{&g_96[1][4][3],&g_96[1][4][3],&g_96[1][4][3],&g_96[1][4][3]},{&g_96[1][4][3],&g_96[1][4][3],&g_96[1][4][3],&g_96[1][4][3]},{&g_96[1][4][3],&g_96[1][4][3],&g_96[1][4][3],&g_96[1][4][3]},{&g_96[1][4][3],&g_96[1][4][3],&g_96[1][4][3],&g_96[1][4][3]},{&g_96[1][4][3],&g_96[1][4][3],&g_96[1][4][3],&g_96[1][4][3]},{&g_96[1][4][3],&g_96[1][4][3],&g_96[1][4][3],&g_96[1][4][3]}},{{&g_96[1][4][3],&g_96[1][4][3],&g_96[1][4][3],&g_96[1][4][3]},{&g_96[1][4][3],&g_96[1][4][3],&g_96[1][4][3],&g_96[1][4][3]},{&g_96[1][4][3],&g_96[1][4][3],&g_96[1][4][3],&g_96[1][4][3]},{&g_96[1][4][3],&g_96[1][4][3],&g_96[1][4][3],&g_96[1][4][3]},{&g_96[1][4][3],&g_96[1][4][3],&g_96[1][4][3],&g_96[1][4][3]},{&g_96[1][4][3],&g_96[1][4][3],&g_96[1][4][3],&g_96[1][4][3]},{&g_96[1][4][3],&g_96[1][4][3],&g_96[1][4][3],&g_96[1][4][3]},{&g_96[1][4][3],&g_96[1][4][3],&g_96[1][4][3],&g_96[1][4][3]},{&g_96[1][4][3],&g_96[1][4][3],&g_96[1][4][3],&g_96[1][4][3]}},{{&g_96[1][4][3],&g_96[1][4][3],&g_96[1][4][3],&g_96[1][4][3]},{&g_96[1][4][3],&g_96[1][4][3],&g_96[1][4][3],&g_96[1][4][3]},{&g_96[1][4][3],&g_96[1][4][3],&g_96[1][4][3],&g_96[1][4][3]},{&g_96[1][4][3],&g_96[1][4][3],&g_96[1][4][3],&g_96[1][4][3]},{&g_96[1][4][3],&g_96[1][4][3],&g_96[1][4][3],&g_96[1][4][3]},{&g_96[1][4][3],&g_96[1][4][3],&g_96[1][4][3],&g_96[1][4][3]},{&g_96[1][4][3],&g_96[1][4][3],&g_96[1][4][3],&g_96[1][4][3]},{&g_96[1][4][3],&g_96[1][4][3],&g_96[1][4][3],&g_96[1][4][3]},{&g_96[1][4][3],&g_96[1][4][3],&g_96[1][4][3],&g_96[1][4][3]}},{{&g_96[1][4][3],&g_96[1][4][3],&g_96[1][4][3],&g_96[1][4][3]},{&g_96[1][4][3],&g_96[1][4][3],&g_96[1][4][3],&g_96[1][4][3]},{&g_96[1][4][3],&g_96[1][4][3],&g_96[1][4][3],&g_96[1][4][3]},{&g_96[1][4][3],&g_96[1][4][3],&g_96[1][4][3],&g_96[1][4][3]},{&g_96[1][4][3],&g_96[1][4][3],&g_96[1][4][3],&g_96[1][4][3]},{&g_96[1][4][3],&g_96[1][4][3],&g_96[1][4][3],&g_96[1][4][3]},{&g_96[1][4][3],&g_96[1][4][3],&g_96[1][4][3],&g_96[1][4][3]},{&g_96[1][4][3],&g_96[1][4][3],&g_96[1][4][3],&g_96[1][4][3]},{&g_96[1][4][3],&g_96[1][4][3],&g_96[1][4][3],&g_96[1][4][3]}},{{&g_96[1][4][3],&g_96[1][4][3],&g_96[1][4][3],&g_96[1][4][3]},{&g_96[1][4][3],&g_96[1][4][3],&g_96[1][4][3],&g_96[1][4][3]},{&g_96[1][4][3],&g_96[1][4][3],&g_96[1][4][3],&g_96[1][4][3]},{&g_96[1][4][3],&g_96[1][4][3],&g_96[1][4][3],&g_96[1][4][3]},{&g_96[1][4][3],&g_96[1][4][3],&g_96[1][4][3],&g_96[1][4][3]},{&g_96[1][4][3],&g_96[1][4][3],&g_96[1][4][3],&g_96[1][4][3]},{&g_96[1][4][3],&g_96[1][4][3],&g_96[1][4][3],&g_96[1][4][3]},{&g_96[1][4][3],&g_96[1][4][3],&g_96[1][4][3],&g_96[1][4][3]},{&g_96[1][4][3],&g_96[1][4][3],&g_96[1][4][3],&g_96[1][4][3]}}};
                int i, j, k;
                (*l_1425) = (l_20 <= (((safe_sub_func_int64_t_s_s(l_7, ((safe_sub_func_uint32_t_u_u((g_532 <= (safe_rshift_func_int16_t_s_u((safe_rshift_func_int8_t_s_s(g_396, 5)), l_20))), g_155.f0)) | (&g_221 == l_1472)))) & ((safe_sub_func_uint8_t_u_u(l_1475, g_503)) == 0UL)) && l_1475));
                for (g_1180 = 0; (g_1180 <= 3); g_1180 += 1)
                {
                    struct S0 *l_1476 = (void*)0;
                    int l_1493 = 0L;
                    if (l_1475)
                    {
                        int i, j;
                        (*g_1247) = (*g_509);
                    }
                    else
                    {
                        int **l_1478 = &l_1425;
                        int i, j;
                        g_102[(g_1180 + 2)][(g_1180 + 5)] = l_1476;
                        (*l_1478) = l_1477[0];

                        ;
                        (*l_1478) = (*l_1478);
                    }
                }
            }

            ;
        }


        for (g_1492 = (-26); (g_1492 > (-21)); ++g_1492)
        {
            unsigned l_1501 = 0UL;
            int *l_1518 = &g_1180;
            char l_1530[2];
            int i;
            for (i = 0; i < 2; i++)
                l_1530[i] = 0x43L;
            if (l_1501)
                break;
            for (l_1501 = 0; (l_1501 <= 3); l_1501 += 1)
            {
                int i, j;
                (*g_1247) = l_1479[0];
            }
        }
    }
    else
    {
        unsigned long long l_1542 = 0x430AA4D1A6693AC8LL;
        struct S0 *l_1550 = &g_41;
        int l_1593 = 0xC8320E35L;
        if ((safe_rshift_func_int8_t_s_s(((l_1542 , (+(((0x56131116B7C0C3FCLL | (func_30(l_1542, (safe_unary_minus_func_uint32_t_u(((func_28((g_616 & ((safe_lshift_func_int8_t_s_s(((safe_rshift_func_uint16_t_u_u((l_1542 ^ ((g_1153 < l_1542) || ((l_1550 != l_1550) > 6UL))), 4)) < g_1401[1]), 7)) < g_532))) & g_1492) | 4294967295UL))), l_1542, g_1551, g_1401[0]) , 1L)) , 0x6534B653L) < 0L))) , 0xEBL), 7)))
        {
            struct S0 l_1552[5][10] = {{{75},{1394},{419},{419},{1394},{75},{813},{1881},{1859},{1881}},{{428},{419},{1859},{1687},{1859},{419},{428},{813},{418},{418}},{{428},{418},{75},{2011},{2011},{75},{418},{428},{1394},{813}},{{75},{418},{428},{1394},{813},{1394},{428},{418},{75},{2011}},{{1859},{419},{428},{813},{418},{418},{813},{428},{419},{1859}}};
            int i, j;
            (*g_90) = l_1552[3][6];
            (*g_1109) &= l_1542;
        }
        else
        {
            return g_503;
        }

        ;


        (*g_1109) = ((safe_mod_func_uint16_t_u_u((g_761 , l_1542), l_1542)) < 18446744073709551609UL);
        for (l_1511 = 1; (l_1511 >= 0); l_1511 -= 1)
        {
            struct S0 l_1561[3] = {{1818},{1818},{1818}};
            int *l_1569 = &g_1180;
            int **l_1571 = (void*)0;
            int ***l_1570 = &l_1571;
            int i;
            (*g_1109) ^= l_1542;
            (*l_1568) ^= ((safe_lshift_func_int16_t_s_u((safe_add_func_int32_t_s_s((g_532 , (*g_147)), 0x4C0C8F48L)), 14)) == 4294967291UL);
            (*g_825) = (void*)0;
            for (l_1542 = 0; (l_1542 <= 6); l_1542 += 1)
            {
                int l_1575 = 2L;
                (*g_1109) = l_1575;
                for (g_454 = 0; (g_454 <= 6); g_454 += 1)
                {
                    int i, j, k;
                    g_96[l_1511][(l_1511 + 3)][(l_1511 + 1)] |= (0x83C585A6104817BCLL || (func_26(g_331) > ((void*)0 == l_1576)));
                    (*g_1109) = (((((((safe_add_func_uint16_t_u_u((+(((g_723 <= func_26(g_396)) && l_1542) , ((safe_sub_func_int64_t_s_s(((safe_lshift_func_int8_t_s_u((safe_rshift_func_int16_t_s_u(l_1575, 15)), ((g_1401[2] > ((safe_rshift_func_uint8_t_u_s(g_96[1][4][3], (+(safe_mod_func_uint8_t_u_u(func_26(l_1589), g_96[l_1511][(l_1511 + 3)][(l_1511 + 1)]))))) , g_454)) != g_1153))) ^ g_396), g_616)) , g_1401[5]))), g_6[4][0][3])) > g_1401[1]) && 1UL) >= g_96[l_1511][(l_1511 + 3)][(l_1511 + 1)]) , 0x7EE66210L) , (void*)0) != (void*)0);
                    for (g_331 = 0; (g_331 <= 1); g_331 += 1)
                    {
                        char l_1590 = 0x7AL;
                        (*g_1109) ^= l_1590;
                        return g_89;
                    }
                }
            }
        }
        (*g_453) = ((safe_add_func_int64_t_s_s((l_1593 > l_1594), g_716.f0)) >= (((l_1542 < ((func_30((**l_1576), (((g_503 , (1UL ^ (+g_532))) , &l_1568) != (void*)0), (**l_1576), g_1595, l_1542) , (**l_1576)) != 0x441CA068L)) < 0UL) == g_6[6][0][2]));
    }

    ;


    (*l_1576) = (*l_1576);
lbl_1614:
    for (g_1180 = (-5); (g_1180 <= (-1)); ++g_1180)
    {
        unsigned short l_1600 = 0x9545L;
        struct S0 ***l_1601[10][8] = {{&g_221,&g_221,&g_221,&g_221,&g_221,&g_221,&g_221,&g_221},{&g_221,&g_221,&g_221,&g_221,&g_221,&g_221,&g_221,&g_221},{&g_221,&g_221,&g_221,&g_221,&g_221,&g_221,&g_221,&g_221},{&g_221,&g_221,&g_221,&g_221,&g_221,&g_221,&g_221,&g_221},{&g_221,&g_221,&g_221,&g_221,&g_221,&g_221,&g_221,&g_221},{&g_221,&g_221,&g_221,&g_221,&g_221,&g_221,&g_221,&g_221},{&g_221,&g_221,&g_221,&g_221,&g_221,&g_221,&g_221,&g_221},{&g_221,&g_221,&g_221,&g_221,&g_221,&g_221,&g_221,&g_221},{&g_221,&g_221,&g_221,&g_221,&g_221,&g_221,&g_221,&g_221},{&g_221,&g_221,&g_221,&g_221,&g_221,&g_221,&g_221,&g_221}};
        struct S0 l_1602[8][8][4] = {{{{1169},{227},{1306},{227}},{{822},{1883},{2043},{227}},{{2043},{227},{1137},{1540}},{{680},{1859},{1306},{1527}},{{680},{1883},{1137},{227}},{{1137},{1859},{1137},{1883}},{{1169},{1859},{947},{227}},{{680},{1830},{2043},{1859}}},{{{1137},{227},{2043},{1883}},{{680},{1527},{947},{1527}},{{1169},{1830},{1137},{1527}},{{1137},{1527},{337},{1883}},{{822},{227},{947},{1859}},{{822},{1830},{337},{227}},{{1137},{1859},{1137},{1883}},{{1169},{1859},{947},{227}}},{{{680},{1830},{2043},{1859}},{{1137},{227},{2043},{1883}},{{680},{1527},{947},{1527}},{{1169},{1830},{1137},{1527}},{{1137},{1527},{337},{1883}},{{822},{227},{947},{1859}},{{822},{1830},{337},{227}},{{1137},{1859},{1137},{1883}}},{{{1169},{1859},{947},{227}},{{680},{1830},{2043},{1859}},{{1137},{227},{2043},{1883}},{{680},{1527},{947},{1527}},{{1169},{1830},{947},{1540}},{{947},{1540},{253},{662}},{{2043},{1830},{680},{1883}},{{2043},{5},{253},{1830}}},{{{947},{1883},{947},{662}},{{1137},{1883},{680},{1830}},{{337},{5},{1306},{1883}},{{947},{1830},{1306},{662}},{{337},{1540},{680},{1540}},{{1137},{5},{947},{1540}},{{947},{1540},{253},{662}},{{2043},{1830},{680},{1883}}},{{{2043},{5},{253},{1830}},{{947},{1883},{947},{662}},{{1137},{1883},{680},{1830}},{{337},{5},{1306},{1883}},{{947},{1830},{1306},{662}},{{337},{1540},{680},{1540}},{{1137},{5},{947},{1540}},{{947},{1540},{253},{662}}},{{{2043},{1830},{680},{1883}},{{2043},{5},{253},{1830}},{{947},{1883},{947},{662}},{{1137},{1883},{680},{1830}},{{337},{1813},{947},{1830}},{{253},{1540},{947},{5}},{{2043},{1883},{822},{1883}},{{337},{1813},{253},{1883}}},{{{253},{1883},{1306},{5}},{{1137},{1540},{822},{1830}},{{1137},{1813},{1306},{1540}},{{253},{1830},{253},{5}},{{337},{1830},{822},{1540}},{{2043},{1813},{947},{1830}},{{253},{1540},{947},{5}},{{2043},{1883},{822},{1883}}}};
        int l_1604 = 0x974ABE9DL;
        int i, j, k;
        (*g_453) &= (l_1600 | (l_1601[5][0] == &g_221));
        l_1603 = l_1602[7][6][3];
        l_1604 |= (((void*)0 != (*g_220)) | (g_1595.f0 & (((*g_1109) | g_715[0][0][0]) >= 0x82L)));
    }
    for (g_1180 = 24; (g_1180 <= 7); g_1180--)
    {
        int l_1628 = 0L;
        unsigned l_1662 = 4294967295UL;
        int *l_1666 = &g_1180;
        int ***l_1673 = &l_1576;
        for (g_454 = 8; (g_454 >= (-11)); g_454 = safe_sub_func_uint64_t_u_u(g_454, 2))
        {
            int l_1619[7];
            long long l_1622 = 0x6CCF6B176DAA4F0ALL;
            int l_1630 = (-1L);
            int l_1631 = 1L;
            unsigned char l_1663 = 247UL;
            struct S0 l_1664[10][3][8] = {{{{911},{199},{1466},{1717},{135},{983},{219},{1073}},{{1419},{1717},{1838},{92},{632},{1614},{92},{1353}},{{47},{632},{135},{1458},{1717},{759},{732},{1334}}},{{{674},{135},{257},{1555},{199},{1172},{1820},{840}},{{92},{1227},{122},{1353},{1683},{806},{1683},{1353}},{{1466},{1021},{1466},{135},{767},{882},{364},{259}}},{{{2002},{250},{1496},{732},{2019},{1148},{47},{1496}},{{877},{667},{2002},{1172},{47},{1021},{364},{47}},{{1418},{1194},{734},{1418},{574},{806},{250},{759}}},{{{759},{952},{141},{983},{1838},{1283},{155},{914}},{{257},{1304},{1334},{1961},{732},{92},{1304},{135}},{{2019},{1194},{1760},{734},{667},{1267},{589},{882}}},{{{199},{2019},{1614},{1073},{1283},{1148},{364},{734}},{{317},{1961},{632},{840},{155},{767},{732},{732}},{{1283},{885},{1760},{1760},{885},{1283},{952},{1073}}},{{{355},{122},{1418},{47},{250},{1113},{155},{806}},{{882},{759},{259},{47},{667},{219},{1961},{1073}},{{1267},{667},{734},{1760},{1194},{2019},{1267},{732}}},{{{155},{1760},{1496},{1304},{250},{1400},{1073},{487}},{{1172},{1194},{1683},{667},{1961},{911},{47},{364}},{{122},{732},{952},{487},{1466},{952},{589},{155}}},{{{355},{141},{535},{983},{806},{2022},{1466},{535}},{{840},{135},{1325},{877},{983},{1717},{355},{1172}},{{494},{1073},{914},{952},{47},{952},{914},{1073}}},{{{1172},{589},{1148},{199},{1283},{914},{1194},{1000}},{{1458},{1194},{2032},{882},{1172},{1760},{1194},{155}},{{1113},{882},{1148},{914},{135},{806},{914},{882}}},{{{135},{806},{914},{882},{1760},{1113},{355},{1496}},{{574},{1172},{1325},{1304},{1194},{1353},{1466},{983}},{{914},{759},{535},{1148},{732},{914},{589},{952}}}};
            int i, j, k;
            for (i = 0; i < 7; i++)
                l_1619[i] = 0x526551FEL;
            if ((*g_555))
            {
                unsigned char l_1613 = 0xF5L;
                int *l_1616 = &g_454;
                int l_1627[8][1] = {{0x45356841L},{1L},{0x45356841L},{1L},{0x45356841L},{1L},{0x45356841L},{1L}};
                char l_1629 = 1L;
                struct S0 *l_1644[7][10] = {{&g_1551,&g_1551,&g_1551,&g_1551,&g_1551,(void*)0,&g_1551,&g_41,&l_1603,&g_1551},{&g_1551,&g_1595,&g_155,&g_1551,(void*)0,(void*)0,&g_1551,&g_155,&g_1595,&g_1551},{(void*)0,&g_1551,&g_155,&g_1595,&g_1551,(void*)0,&g_1595,&g_41,&g_1595,(void*)0},{&g_1551,&g_1551,&g_1551,&g_1551,&g_1551,(void*)0,&g_1551,&g_41,&l_1603,&g_1551},{&g_1551,&g_1595,&g_155,&g_1551,(void*)0,(void*)0,&g_1551,&g_155,&g_1595,&g_1551},{(void*)0,&g_1551,&g_155,&g_1595,&g_1551,(void*)0,&g_1595,&g_41,&g_1595,(void*)0},{&g_1551,&g_1551,&g_1551,&g_1551,&g_1551,(void*)0,&g_1551,&g_41,&l_1603,&g_1551}};
                char l_1655[6][3][3] = {{{0x2BL,1L,(-1L)},{0x2BL,0x7CL,1L},{0x8AL,1L,1L}},{{0xCCL,(-5L),(-1L)},{0x8AL,(-5L),0L},{0x2BL,1L,0x7CL}},{{0x8AL,0L,(-1L)},{7L,(-1L),(-1L)},{(-1L),1L,0x7CL}},{{7L,1L,(-5L)},{0x8AL,(-1L),0x7CL},{0x8AL,0L,(-1L)}},{{7L,(-1L),(-1L)},{(-1L),1L,0x7CL},{7L,1L,(-5L)}},{{0x8AL,(-1L),0x7CL},{0x8AL,0L,(-1L)},{7L,(-1L),(-1L)}}};
                int i, j, k;
                for (l_1589 = 12; (l_1589 != 10); l_1589--)
                {
                    unsigned l_1615 = 0x0D0B2E0AL;
                    struct S0 *l_1643 = &g_1595;
                    for (g_761 = (-14); (g_761 <= (-30)); --g_761)
                    {
                        (*g_1109) = l_1613;
                        if (l_1613)
                            continue;
                        if (g_503)
                            goto lbl_1614;
                        return l_1615;
                    }
                    (*l_1576) = l_1616;

                    ;
                    l_1631 |= ((safe_mod_func_uint64_t_u_u(l_1619[0], func_55((l_1615 , (((safe_rshift_func_int16_t_s_s(l_1622, (**l_1576))) == (*l_1616)) || l_1629)), l_1628, g_1180, l_1630, (*l_1568)))) , (*g_555));
                    if (((safe_sub_func_int64_t_s_s((((void*)0 == (*g_825)) <= (safe_add_func_uint64_t_u_u(g_6[4][0][3], ((safe_unary_minus_func_uint16_t_u((!l_1628))) <= ((safe_sub_func_int32_t_s_s(0xCF08FEA6L, (safe_mod_func_int32_t_s_s((g_715[1][0][6] > l_1622), (*g_1109))))) ^ (g_89 , g_503)))))), (-1L))) & g_454))
                    {
                        struct S0 l_1641 = {1403};
                        struct S0 *l_1642 = &l_1641;
                        (*l_1642) = l_1641;
                        l_1644[5][9] = l_1643;
                    }
                    else
                    {
                        int *l_1656 = &g_454;
                        (*l_1576) = ((safe_rshift_func_int8_t_s_s((*l_1616), (l_1628 , (safe_add_func_uint8_t_u_u(((safe_sub_func_int32_t_s_s((safe_mod_func_int16_t_s_s(l_1619[6], 0xD0C2L)), g_1180)) , (+((((((safe_sub_func_uint32_t_u_u((((l_1630 >= (l_1655[0][2][1] & l_1630)) | ((((*g_220) != &g_222[1][0]) , (void*)0) == (void*)0)) <= (*l_1616)), 0x67A77F6FL)) , g_1336) , 255UL) , (*g_220)) != (void*)0) > 0xC0BB1B01F51D88EALL))), 1L))))) , l_1656);
                    }
                }
            }
            else
            {
                struct S0 l_1660 = {10};
                for (g_1492 = 0; (g_1492 >= 0); g_1492 -= 1)
                {
                    for (g_89 = 0; (g_89 <= 0); g_89 += 1)
                    {
                        int i, j, k;
                        return g_715[(g_1492 + 1)][g_1492][(g_1492 + 2)];
                    }
                    (*l_1576) = &l_1631;

                    ;
                }


                if ((*g_555))
                    continue;

                for (g_616 = 25; (g_616 > 49); g_616 = safe_add_func_uint16_t_u_u(g_616, 7))
                {
                    short l_1661 = 0xDD74L;
                    for (g_89 = 0; (g_89 <= 6); g_89 += 1)
                    {
                        struct S0 l_1659 = {271};
                        l_1660 = l_1659;
                        return l_1619[0];
                    }
                }
                (*l_1576) = l_1666;

                ;
            }
        }
        (*l_1576) = l_1666;

        ;
        g_1492 &= (((safe_rshift_func_int8_t_s_u(((safe_add_func_int32_t_s_s(((g_761 ^ (g_1551.f0 , (***l_1673))) < (***l_1673)), g_1595.f0)) <= (***l_1673)), g_503)) , (*g_643)) < (**l_1576));
    }
    return g_96[1][4][3];
}







static struct S0 func_13(int p_14, unsigned char p_15, int p_16, unsigned short p_17)
{
    int **l_1140[4][7] = {{&g_158,&g_158,&g_158,(void*)0,(void*)0,(void*)0,(void*)0},{&g_158,&g_1109,&g_158,&g_158,&g_158,(void*)0,&g_158},{&g_1109,&g_1109,&g_158,&g_158,&g_158,&g_158,&g_158},{&g_158,&g_158,&g_158,(void*)0,(void*)0,(void*)0,&g_1109}};
    int ***l_1139 = &l_1140[1][6];
    struct S0 **l_1141 = (void*)0;
    struct S0 l_1152 = {1429};
    int *l_1154 = &g_89;
    struct S0 ***l_1208 = &g_221;
    int l_1375 = 0xB612212BL;
    int i, j;
lbl_1182:
    for (p_17 = 0; (p_17 <= 47); p_17++)
    {
        unsigned l_1136 = 0x9FBC1886L;
        (*g_1109) = (l_1136 , (0UL > g_723));
    }
    if (func_30((p_14 > ((safe_sub_func_int8_t_s_s(((-9L) >= (*g_453)), p_17)) == (safe_lshift_func_int16_t_s_u(p_14, (g_715[0][0][0] || g_96[1][4][3]))))), ((safe_mod_func_uint8_t_u_u(p_14, ((safe_lshift_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s(g_155.f0, 2)), g_396)) , g_616))) <= 1L), g_454, l_1152, p_14))
    {
        int *l_1155 = &g_89;
        int l_1173[7];
        struct S0 l_1177 = {1065};
        struct S0 **l_1179 = &g_222[3][0];
        int ***l_1200 = &l_1140[1][6];
        unsigned l_1216 = 0UL;
        unsigned l_1271 = 0xC04F7FBDL;
        long long l_1292 = 0x10D73798D5E5A89ELL;
        int l_1346 = 0x67A73C33L;
        int i;
        for (i = 0; i < 7; i++)
            l_1173[i] = 0L;
lbl_1225:
        g_1153 &= (func_46(p_16, p_16) , (((*g_432) , &g_221) == (void*)0));


lbl_1313:
        for (g_761 = 1; (g_761 >= 0); g_761 -= 1)
        {
            int l_1168 = 0L;
            struct S0 l_1181 = {1256};
            l_1155 = l_1154;

            ;
            for (g_1153 = 0; (g_1153 <= 3); g_1153 += 1)
            {
                unsigned short l_1174 = 1UL;
                int i, j;
                if ((safe_add_func_int64_t_s_s(((((safe_mod_func_uint8_t_u_u((safe_add_func_int8_t_s_s((safe_sub_func_int64_t_s_s(((safe_sub_func_uint8_t_u_u(g_716.f0, p_15)) , (safe_lshift_func_uint8_t_u_s(l_1168, 4))), (safe_mod_func_int64_t_s_s((p_16 ^ 0xB43FL), 0x5C6B227AF9E2E9CBLL)))), p_17)), (*l_1155))) == 0xCDF4L) ^ l_1168) <= p_16), 3L)))
                {
                    l_1168 = (l_1177 , (((((~(((safe_unary_minus_func_int32_t_s(9L)) >= ((void*)0 != &l_1168)) , g_41.f0)) <= func_26(func_26(((l_1141 != l_1179) , g_1180)))) , l_1168) ^ 0x75L) || g_1180));
                }
                else
                {
                    return l_1181;


                }
                for (p_17 = 0; (p_17 <= 3); p_17 += 1)
                {
                    int i, j, k;
                    if ((*l_1155))
                    {
                        if (p_15)
                            goto lbl_1182;
                    }
                    else
                    {
                        l_1155 = &l_1168;

                        ;
                    }
                }
                (*g_157) = &p_14;

                ;
                for (g_454 = 0; (g_454 <= 3); g_454 += 1)
                {
                    (*g_158) ^= (!1L);
                }
            }

            ;
        }
        for (g_396 = 0; (g_396 <= 0); g_396 += 1)
        {
            int l_1191 = 0x8920D81DL;
            int l_1205 = 0xCF59C1F3L;
            int *l_1212[9];
            struct S0 l_1213 = {1108};
            struct S0 ***l_1245 = (void*)0;
            struct S0 l_1246 = {937};
            int l_1290 = (-1L);
            int *l_1311 = &g_454;
            short l_1323 = 0xB2F9L;
            unsigned char l_1327 = 0x20L;
            int l_1357 = (-1L);
            int i;
            for (i = 0; i < 9; i++)
                l_1212[i] = &g_503;
            g_454 ^= (((((0xBAA1FD89123491DCLL == (safe_rshift_func_uint8_t_u_s(((g_723 >= p_15) >= (func_26(g_507) == (((((safe_add_func_int8_t_s_s((((safe_lshift_func_uint8_t_u_u(g_89, 3)) <= (safe_mod_func_int16_t_s_s(g_331, g_96[1][4][1]))) > (-4L)), p_16)) & 18446744073709551615UL) >= g_96[1][5][3]) != 1UL) < l_1191))), p_14))) < 0x043240ABL) , l_1191) && 0x3566L) == 2L);
            if ((p_17 , (safe_rshift_func_uint16_t_u_u(0UL, (safe_sub_func_uint64_t_u_u((safe_add_func_uint32_t_u_u(g_41.f0, ((*g_220) == (void*)0))), (l_1191 & (safe_add_func_int64_t_s_s((((g_715[0][0][0] , ((((((l_1191 | (g_507 == p_14)) , p_14) < g_1153) < p_15) <= p_17) , 0x18L)) ^ l_1191) > 0x6F6F0D17L), 0xA453D5DE648DA1D8LL)))))))))
            {
                int l_1209 = 0xCD264A5FL;
                unsigned char l_1210 = 0x07L;
                struct S0 l_1258 = {664};
                int *l_1273 = (void*)0;
                unsigned short l_1291 = 4UL;
                if (p_16)
                {
                    unsigned short l_1206 = 0xDA9CL;
                    for (g_1180 = 0; (g_1180 >= 0); g_1180 -= 1)
                    {
                        struct S0 ***l_1207 = &g_221;
                        int l_1211 = 0L;
                        l_1212[2] = (func_55(l_1209, l_1210, p_16, l_1211, p_15) , &p_14);


                        return l_1213;


                    }
                }
                else
                {
                    (*g_1109) ^= ((void*)0 == (*l_1200));
                }
                if (func_55((*l_1154), ((g_503 , (((((safe_add_func_int8_t_s_s((l_1210 || l_1216), (((p_15 > (g_723 | ((0UL <= (p_15 , (g_716.f0 , p_14))) | 0xD377L))) ^ (-5L)) == 0xB4L))) , l_1210) | g_373) & p_14) != p_16)) , l_1209), g_723, g_155.f0, g_96[0][1][0]))
                {
                    unsigned char l_1223 = 253UL;
                    if ((((0L == (safe_lshift_func_uint16_t_u_u(((safe_sub_func_int32_t_s_s(l_1209, g_331)) < (safe_mod_func_int16_t_s_s((((l_1223 , (l_1213 , p_15)) , l_1223) <= (*l_1154)), 0x239EL))), p_16))) > g_723) || 65535UL))
                    {
                        short l_1224 = 0xB2C5L;
                        l_1224 ^= (~(*g_322));
                        if (p_16)
                            goto lbl_1225;
                    }
                    else
                    {
                        unsigned char l_1230 = 0xBFL;
                        (*g_578) &= ((safe_rshift_func_uint16_t_u_u(((safe_lshift_func_uint16_t_u_u(((l_1212[6] != (void*)0) & ((p_17 > l_1223) != l_1230)), p_16)) != 0x01BEL), 15)) < p_15);
                    }
                    for (g_89 = 0; (g_89 <= 0); g_89 += 1)
                    {
                        int i;
                        (*g_643) = 0xFCDD96A8L;
                        (*g_1109) &= (safe_lshift_func_uint16_t_u_s(g_1153, ((safe_lshift_func_int8_t_s_s(((safe_sub_func_uint64_t_u_u(p_15, (g_6[4][0][3] | p_16))) , p_16), 0)) || 0UL)));
                        l_1209 &= ((safe_add_func_int64_t_s_s((((void*)0 != &g_554[(g_396 + 7)]) , (safe_add_func_int8_t_s_s(l_1210, p_17))), (&l_1141 == (g_1180 , (g_660 , l_1245))))) , p_14);
                        if (p_16)
                            continue;
                    }
                    return l_1213;


                }
                else
                {
                    for (g_1153 = 0; (g_1153 <= 3); g_1153 += 1)
                    {
                        int i, j;
                        (*l_1154) ^= p_15;
                        if ((*g_147))
                            continue;
                        g_222[g_396][g_1153] = g_222[(g_1153 + 1)][(g_396 + 2)];
                        (*g_1247) = l_1246;
                    }
                }
                for (l_1205 = 0; (l_1205 >= 0); l_1205 -= 1)
                {
                    unsigned long long l_1250 = 0x896D2F08BE9B94C3LL;
                    char l_1257[4] = {0x98L,0x98L,0x98L,0x98L};
                    int l_1261 = 0xBD8738AAL;
                    struct S0 l_1272 = {971};
                    int i;
                    if (((+(safe_lshift_func_uint8_t_u_u(((l_1250 > g_723) , g_454), (0x1357L & (safe_lshift_func_uint8_t_u_u(g_723, 3)))))) , (safe_rshift_func_uint16_t_u_s((safe_add_func_int32_t_s_s(0x309865DAL, l_1257[2])), 4))))
                    {
                        return l_1258;


                    }
                    else
                    {
                        int l_1259 = (-5L);
                        struct S0 *l_1260[8] = {&l_1213,&l_1213,&l_1213,&l_1213,&l_1213,&l_1213,&l_1213,&l_1213};
                        int i;
                        l_1261 = ((((g_532 | l_1259) == g_616) , (*l_1179)) == l_1260[0]);
                    }
                    if ((safe_rshift_func_uint8_t_u_s(0x77L, p_15)))
                    {
                        struct S0 ***l_1270 = (void*)0;
                        if (p_17)
                            break;
                        if (p_15)
                            break;
                        l_1271 &= (safe_lshift_func_int16_t_s_u(((safe_lshift_func_int16_t_s_s((((safe_sub_func_uint32_t_u_u((0xA5B83761L != p_14), ((*l_1154) != l_1250))) <= ((p_15 , p_17) >= (((p_14 < g_89) & (l_1270 == &l_1141)) & (-1L)))) & 4294967295UL), g_89)) , p_17), l_1261));
                    }
                    else
                    {
                        struct S0 *l_1274[4];
                        int i;
                        for (i = 0; i < 4; i++)
                            l_1274[i] = &l_1177;
                        l_1272 = l_1272;
                        l_1258 = (((func_26((p_14 && (65530UL > ((l_1258 , &p_14) == l_1273)))) , &l_1212[2]) == &l_1212[2]) , (*g_590));
                        l_1272 = (*g_90);
                    }
                    for (g_761 = 0; (g_761 >= 0); g_761 -= 1)
                    {
                        int l_1287 = 0xA3E3CCBEL;
                        int i, j, k;
                        l_1258 = (*g_590);
                        (*l_1154) = (safe_lshift_func_int8_t_s_s((((safe_lshift_func_uint16_t_u_u(((safe_add_func_uint16_t_u_u((safe_unary_minus_func_uint16_t_u((safe_add_func_int16_t_s_s((safe_unary_minus_func_int8_t_s(g_660)), (safe_rshift_func_int8_t_s_s(g_96[0][4][3], 4)))))), (((l_1261 != ((-1L) || 0xAFL)) != p_14) || (g_616 | l_1287)))) >= (p_17 <= g_723)), g_396)) && p_15) <= 0x6958D723B5CD3547LL), p_17));
                        return (*g_90);


                    }
                    for (p_17 = 0; (p_17 <= 0); p_17 += 1)
                    {
                        p_14 = ((g_6[4][0][3] <= (safe_mod_func_int32_t_s_s((g_96[0][3][1] > (func_26(g_616) & l_1290)), l_1257[0]))) > l_1291);
                        if (l_1292)
                            continue;
                        (*g_245) = (void*)0;

                        ;
                    }
                }
            }
            else
            {
                unsigned long long l_1309 = 0xE1C78ADBE0536F71LL;
                (*l_1154) = ((safe_mod_func_uint8_t_u_u((((*l_1139) == (*g_825)) , ((safe_add_func_uint8_t_u_u(g_715[0][0][0], (*l_1311))) <= g_331)), 0xE0L)) & 0x8EL);
                for (g_1153 = 0; (g_1153 <= 0); g_1153 += 1)
                {
                    char l_1322[3][2][5] = {{{0x95L,0x94L,0xFBL,(-5L),(-5L)},{(-5L),0x58L,(-5L),0xB5L,0x5CL}},{{0xFBL,0x94L,0x95L,(-4L),0x5CL},{0x4EL,(-8L),(-8L),(-5L),0xF4L}},{{0x5CL,(-5L),(-8L),0x95L,0x58L},{0x5CL,(-8L),0xF4L,(-8L),0x5CL}}};
                    int *l_1324 = &g_1180;
                    int i, j, k;
                    for (g_507 = 0; (g_507 <= 0); g_507 += 1)
                    {
                        unsigned l_1312 = 0xF8640EB1L;
                        if (l_1312)
                            break;
                        if (g_761)
                            goto lbl_1313;
                    }
                    for (l_1292 = 0; (l_1292 <= 7); l_1292 += 1)
                    {
                        int *l_1319 = &g_454;
                        int i, j, k;
                        (*l_1311) ^= (((safe_add_func_int16_t_s_s(g_715[0][0][0], (((+((g_6[1][0][5] || (safe_unary_minus_func_int32_t_s((*g_578)))) != ((g_1153 < (l_1319 != ((safe_lshift_func_int8_t_s_u(((void*)0 != l_1200), ((l_1309 == (l_1322[1][0][4] && l_1323)) < g_1153))) , &g_96[1][4][3]))) >= 0x419A34BEA1A0233CLL))) > 0x6433L) >= l_1309))) && g_331) ^ 1L);
                        g_550[(g_396 + 3)] = l_1324;
                        p_14 &= (~((((*g_557) , 0xC3F59AABL) || 6L) , ((void*)0 != &l_1319)));
                        if (p_17)
                            goto lbl_1313;
                    }
                    for (g_723 = 0; (g_723 >= 0); g_723 -= 1)
                    {
                        struct S0 l_1332 = {37};
                        p_14 = (~(p_16 && (((((0xBAF6ED72L & l_1327) , (safe_add_func_uint32_t_u_u(0x4B2F6B44L, p_14))) , ((p_14 == 0xDD932AF0CD3BDA6ALL) < p_15)) || (((!((safe_sub_func_uint64_t_u_u(((g_507 | l_1309) , g_1153), 1UL)) | (*g_147))) , &g_221) == (void*)0)) , g_503)));
                        return l_1332;


                    }
                }
                for (g_723 = 0; (g_723 >= 0); g_723 -= 1)
                {
                    int *l_1333[2][9][6] = {{{&l_1290,&g_454,&l_1290,&g_454,&l_1290,&g_454},{(void*)0,&g_454,(void*)0,&g_454,(void*)0,&g_454},{&l_1290,&g_454,&l_1290,&g_454,&l_1290,&g_454},{(void*)0,&g_454,(void*)0,&g_454,(void*)0,&g_454},{&l_1290,&g_454,&l_1290,&g_454,&l_1290,&g_454},{(void*)0,&g_454,(void*)0,&g_454,(void*)0,&g_454},{&l_1290,&g_454,&l_1290,&g_454,&l_1290,&g_454},{(void*)0,&g_454,(void*)0,&g_454,(void*)0,&g_454},{&l_1290,&g_454,&l_1290,&g_454,&l_1290,&g_454}},{{(void*)0,&g_454,(void*)0,&g_454,(void*)0,&g_454},{&l_1290,&g_454,&l_1290,&g_454,&l_1290,&g_454},{(void*)0,&g_454,(void*)0,&g_454,(void*)0,&g_454},{&l_1290,&g_454,&l_1290,&g_454,&l_1290,&g_454},{(void*)0,&g_454,(void*)0,&g_454,(void*)0,&g_454},{&l_1290,&g_454,&l_1290,&g_454,&l_1290,&g_454},{(void*)0,&g_454,(void*)0,&g_454,(void*)0,&g_454},{&l_1290,&g_454,&l_1290,&g_454,&l_1290,&g_454},{(void*)0,&g_454,(void*)0,&g_454,(void*)0,&g_454}}};
                    int i, j, k;
                    g_550[(g_723 + 6)] = l_1333[0][8][5];
                    for (p_17 = 0; (p_17 <= 1); p_17 += 1)
                    {
                        int i, j, k;
                        p_14 = g_6[(p_17 + 2)][(g_396 + 1)][(p_17 + 4)];
                        if (g_723)
                            goto lbl_1182;

                    }
                }


            }


            for (l_1292 = 0; (l_1292 >= 0); l_1292 -= 1)
            {
                char l_1337 = 6L;
                int *l_1338 = &l_1290;
                (*l_1154) |= (*g_578);
                for (l_1216 = 0; (l_1216 <= 0); l_1216 += 1)
                {
                    int *l_1345 = (void*)0;
                    struct S0 l_1351 = {1290};
                    p_14 |= ((safe_lshift_func_uint16_t_u_s(func_55(g_1336, g_96[0][2][1], ((g_532 != (-1L)) | ((!(l_1337 | g_6[4][0][3])) & (&l_1290 != l_1338))), (*l_1338), p_16), 15)) < g_6[0][1][3]);
                    if (((((safe_mod_func_uint32_t_u_u(((g_96[1][3][5] != p_17) < ((g_507 == (*l_1338)) , func_26(func_26((safe_rshift_func_int16_t_s_u(((((g_715[0][0][0] , ((g_716.f0 ^ (safe_sub_func_int8_t_s_s((l_1345 == &p_14), (p_15 != p_15)))) != 0x7A9C166EL)) == g_616) && 0x707462CEL) | 255UL), g_96[1][4][3])))))), l_1346)) != g_616) && (-1L)) , 0xF64E9D62L))
                    {
                        int **l_1347 = &l_1154;
                        (*g_1109) &= (((0x36BF80002D13CC50LL & ((void*)0 != l_1347)) | (safe_unary_minus_func_uint16_t_u(0xE0D1L))) == ((((((-10L) && (!((&p_14 != l_1345) & ((**l_1347) || (**l_1347))))) && g_532) <= p_14) ^ p_17) || p_16));
                    }
                    else
                    {
                        int l_1352 = (-1L);
                        int i, j, k;
                        if (g_716.f0)
                            goto lbl_1182;

                        p_14 &= func_55(((safe_rshift_func_int8_t_s_s(((p_17 == (l_1200 != (void*)0)) >= 0x971A3F60D7958C1CLL), 6)) , ((l_1351 , l_1352) , ((**g_220) == (*g_221)))), p_15, (*l_1154), g_1336, p_17);
                        l_1212[2] = &p_14;
                        (*g_1109) &= p_14;
                    }
                    if (p_14)
                    {
                        unsigned l_1362 = 18446744073709551615UL;
                        (*l_1338) |= ((((safe_lshift_func_int16_t_s_u((-1L), 12)) == (safe_add_func_uint8_t_u_u(l_1357, (func_26((((p_17 , (g_715[0][0][5] ^ ((p_16 | p_15) == ((safe_lshift_func_int16_t_s_s(g_96[1][3][4], 15)) || (g_41.f0 > (safe_lshift_func_int8_t_s_s(l_1362, 3))))))) <= g_503) != p_16)) != 0xB32AL)))) & (*l_1311)) & g_331);
                    }
                    else
                    {
                        return l_1351;



                    }
                }
            }


        }
    }
    else
    {
        int l_1365 = 4L;
        struct S0 l_1366 = {1304};
        int **l_1400 = &l_1154;
        (*g_245) = &p_14;

        ;
        if (p_15)
        {
            struct S0 *l_1367 = &l_1152;
            int l_1373[7] = {0x8FCCF73AL,0x5E8B4922L,0x8FCCF73AL,0x8FCCF73AL,0x5E8B4922L,0x8FCCF73AL,0x8FCCF73AL};
            int i;
            for (p_15 = 0; (p_15 >= 19); ++p_15)
            {
                int *l_1390 = (void*)0;
                struct S0 l_1399 = {401};
                (*l_1154) |= l_1365;
                if (((p_14 != (-7L)) || (&l_1366 != l_1367)))
                {
                    unsigned short l_1374 = 65535UL;
                    struct S0 ***l_1377 = &l_1141;
                    if ((**g_245))
                    {
                        short l_1372 = 0xA5D8L;
                        int l_1376[8] = {0x92915144L,0x92915144L,0x92915144L,0x92915144L,0x92915144L,0x92915144L,0x92915144L,0x92915144L};
                        int i;
                        (*l_1367) = (*g_432);
                        (*g_825) = (*g_825);
                        (*l_1154) = 1L;
                        (*g_1109) = func_46((l_1366.f0 | (l_1372 , p_14)), l_1376[1]);


                    }
                    else
                    {
                        unsigned l_1380 = 4294967288UL;
                        struct S0 ***l_1389 = &l_1141;
                        (*l_1154) = (!(l_1377 != (((((safe_rshift_func_int16_t_s_s((l_1380 , (((((((p_16 == (((safe_sub_func_uint8_t_u_u(p_16, (safe_sub_func_uint64_t_u_u((safe_lshift_func_int8_t_s_s(func_26(p_15), ((-1L) || (~(((g_454 | (safe_sub_func_int64_t_s_s(g_6[1][1][2], l_1374))) , g_6[4][0][3]) > l_1380))))), p_14)))) != (*g_158)) > l_1373[3])) >= 0x9E391AF45D223CBFLL) >= (*l_1154)) && p_15) <= (-1L)) , g_723) | 0x1B69L)), l_1366.f0)) > l_1374) , l_1374) >= (-1L)) , l_1389)));
                    }


                    if (func_46(p_16, l_1374))
                    {
                        l_1390 = &l_1365;

                        ;
                        return (*g_432);
                    }
                    else
                    {
                        (*g_183) = &p_14;

                        ;
                    }

                    ;
                }
                else
                {
                    (*g_1109) = (safe_add_func_int8_t_s_s(((3UL ^ 0xF5L) < (safe_mod_func_uint32_t_u_u(((void*)0 == l_1367), 4UL))), ((safe_rshift_func_uint8_t_u_s((0x8983A9EAL | ((((g_715[0][0][0] , (((g_761 >= (((((safe_mod_func_int64_t_s_s(g_373, g_1153)) > l_1366.f0) >= 1UL) == g_396) , g_715[0][0][0])) & g_6[0][0][3]) , l_1399)) , (*l_1139)) != l_1400) < g_1401[1])), g_507)) < p_17)));
                    if (p_15)
                        continue;
                }
            }
            (**l_1400) = (-1L);
        }
        else
        {
            unsigned char l_1408 = 0x66L;
            int **l_1419 = &g_158;
            for (p_17 = (-6); (p_17 != 20); p_17 = safe_add_func_int8_t_s_s(p_17, 8))
            {
                p_14 = func_46(((((**l_1400) | (p_14 ^ (0x8DD9CFF1L || 0x46AD76F0L))) | func_26((safe_rshift_func_int8_t_s_s((((safe_sub_func_int32_t_s_s(((l_1408 > g_532) | (safe_lshift_func_uint8_t_u_u((+p_16), 4))), p_16)) >= (2L > (**l_1400))) | g_616), g_1401[1])))) , 0x000357236B619C93LL), p_17);


                if ((**l_1400))
                    break;
            }


            p_14 ^= (~(safe_add_func_int16_t_s_s(((p_15 || ((p_16 < func_26(g_507)) , l_1408)) ^ (~((g_723 != (g_155.f0 >= (safe_sub_func_uint32_t_u_u((**l_1400), g_616)))) , 0xCC84L))), l_1408)));
            for (g_396 = 0; (g_396 < 55); g_396 = safe_add_func_uint8_t_u_u(g_396, 9))
            {
                struct S0 l_1420 = {1735};
                for (l_1408 = 7; (l_1408 != 58); ++l_1408)
                {
                    (*l_1139) = l_1419;
                    return l_1420;


                }
            }
        }


    }


    for (p_14 = (-30); (p_14 <= 3); p_14++)
    {
        struct S0 l_1423[10] = {{1003},{1003},{1003},{1003},{1003},{1003},{1003},{1003},{1003},{1003}};
        int i;
        return l_1423[9];


    }
    return l_1152;


}







static short func_26(short p_27)
{
    unsigned long long l_1130 = 18446744073709551614UL;
    struct S0 l_1132 = {1947};
    unsigned l_1133 = 18446744073709551610UL;
    l_1132 = (l_1130 , (*g_103));
    return l_1133;
}







static unsigned func_28(unsigned long long p_29)
{
    int l_42 = 0xF321248CL;
    unsigned l_43 = 18446744073709551615UL;
    int **l_1020 = &g_158;
    struct S0 l_1021[8][3] = {{{995},{446},{1948}},{{1948},{446},{995}},{{446},{156},{156}},{{802},{1948},{995}},{{100},{873},{1948}},{{100},{1149},{446}},{{802},{1731},{802}},{{446},{1149},{100}}};
    struct S0 l_1091[7] = {{1728},{1728},{1728},{1728},{1728},{1728},{1728}};
    short l_1100 = 0x8232L;
    int i, j;
    if (func_30((p_29 >= func_36(g_41, (p_29 | l_42), (l_42 < (l_42 ^ 0x70FCBC84L)), l_43)), p_29, l_42, g_716, p_29))
    {
        int l_1024 = 8L;
        struct S0 *l_1025 = (void*)0;
        int l_1068 = 0x45B51AE2L;
        struct S0 l_1092 = {829};
        unsigned char l_1098 = 0UL;
        if ((l_1020 != l_1020))
        {
            unsigned l_1028 = 18446744073709551615UL;
            struct S0 l_1045 = {903};
            int *l_1052[3];
            int l_1056[6] = {9L,0xC864F304L,0xC864F304L,9L,0xC864F304L,0xC864F304L};
            struct S0 *l_1063 = &l_1045;
            int i;
            for (i = 0; i < 3; i++)
                l_1052[i] = &g_89;
            if ((g_761 , (l_1024 ^ 0x4183D943L)))
            {
                unsigned short l_1044 = 0xFAF0L;
                int l_1048 = 8L;
                int *l_1062[10][4] = {{&g_96[1][0][0],&g_503,(void*)0,(void*)0},{&l_42,&l_42,(void*)0,&g_503},{&g_96[1][0][0],(void*)0,&l_42,&g_96[1][0][0]},{(void*)0,&l_42,&l_1048,&l_42},{&l_1048,&l_42,(void*)0,&g_96[1][0][0]},{&l_42,(void*)0,&l_42,&l_1048},{&g_503,&g_503,&g_503,&g_503},{&g_503,&g_96[1][0][0],&l_42,(void*)0},{&l_42,&g_503,(void*)0,(void*)0},{&l_1048,&g_96[1][0][0],&l_1048,(void*)0}};
                int i, j;
                for (g_89 = 2; (g_89 > (-12)); g_89 = safe_sub_func_uint64_t_u_u(g_89, 4))
                {
                    unsigned long long l_1031[4];
                    int *l_1049 = &g_503;
                    int i;
                    for (i = 0; i < 4; i++)
                        l_1031[i] = 0xA5432D63A7BA6409LL;
                    if ((p_29 , (((l_1031[0] , (((safe_mod_func_uint16_t_u_u(((l_1031[0] , ((safe_lshift_func_uint16_t_u_s((7L < (safe_add_func_uint32_t_u_u((0xFBL <= 0xFAL), (*g_578)))), 7)) == ((((safe_sub_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s((l_1028 , (((safe_sub_func_int8_t_s_s((g_715[0][0][2] , 1L), g_715[0][0][0])) , g_761) >= p_29)), 0)), 0x1376L)) <= l_1024) , 0x295AL) & 0x2DD3L))) == p_29), 0x368EL)) >= 0xAA899A93L) == p_29)) > l_1031[0]) & l_1044)))
                    {
                        struct S0 *l_1046 = &g_155;
                        int *l_1047[3];
                        int i;
                        for (i = 0; i < 3; i++)
                            l_1047[i] = &l_42;
                        (*l_1046) = l_1045;
                        if (p_29)
                            continue;
                        l_1048 |= l_1044;
                    }
                    else
                    {
                        return g_331;
                    }
                    (*l_1049) ^= (g_616 , (g_373 != p_29));
                }
                if (l_1044)
                {
                    unsigned char l_1055 = 0UL;
                    for (l_42 = 0; (l_42 < 15); l_42 = safe_add_func_int8_t_s_s(l_42, 2))
                    {
                        struct S0 l_1054[7] = {{27},{27},{27},{27},{27},{27},{27}};
                        int i;
                        (*l_1020) = l_1052[1];

                        ;
                        (*g_1053) = (*g_590);
                        (**l_1020) = l_1054[2].f0;
                    }


                    if ((*g_555))
                    {
                        l_1056[3] = p_29;
                        l_42 = (*g_578);
                    }
                    else
                    {
                        int *l_1057 = &g_503;
                        l_1057 = &l_1048;

                        ;
                    }
                    for (g_331 = (-9); (g_331 == 47); g_331++)
                    {
                        (*l_1020) = l_1052[1];

                        ;
                    }
                }
                else
                {
                    struct S0 **l_1060 = (void*)0;
                    int l_1061 = 0xB72F3AF7L;
                    l_1061 = ((void*)0 != l_1060);
                }


                (*l_1020) = l_1062[9][0];

                ;
            }
            else
            {
                g_503 ^= (*g_322);
                l_1063 = &l_1021[4][0];

                ;
            }


            ;
            for (l_1024 = 10; (l_1024 < (-17)); --l_1024)
            {
                unsigned l_1069 = 7UL;
                l_1069 = ((g_331 ^ func_55(g_89, (p_29 , ((p_29 , (+(p_29 , ((safe_lshift_func_int16_t_s_u((0x79L == l_1068), ((g_660 , &l_1020) == g_825))) != p_29)))) <= p_29)), g_155.f0, l_1024, g_716.f0)) , p_29);
            }
            return g_6[4][0][3];


        }
        else
        {
            char l_1090[4] = {0xE0L,0xE0L,0xE0L,0xE0L};
            int l_1101 = 0L;
            int *l_1102[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int i;
            if ((safe_lshift_func_int16_t_s_s((+(safe_add_func_int64_t_s_s((safe_lshift_func_uint16_t_u_s(p_29, 7)), l_1068))), 14)))
            {
                int *l_1078 = &l_42;
                struct S0 l_1089 = {624};
                (*l_1078) = ((safe_rshift_func_uint16_t_u_u(0UL, 7)) , (-1L));
                l_1068 |= (func_46((safe_add_func_int8_t_s_s(0xD1L, p_29)), ((((safe_rshift_func_uint16_t_u_s(((safe_sub_func_int16_t_s_s(((~g_6[4][0][3]) , p_29), 3UL)) || ((safe_lshift_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s((g_454 > p_29), l_1090[0])), g_716.f0)) & g_89)), 1)) , 1L) >= (-1L)) ^ 0UL)) ^ p_29);


                (*g_221) = (void*)0;
            }
            else
            {
                unsigned l_1099 = 0x0922DCA1L;
                (*g_221) = (*g_221);
                l_1091[6] = (*g_90);
                l_1101 ^= l_1090[2];
            }
            l_42 = (*g_555);
        }
    }
    else
    {
        int *l_1110 = &g_454;
        for (g_396 = 0; (g_396 != 15); g_396++)
        {
            int **l_1120 = &g_1109;
            for (g_503 = 0; (g_503 >= (-2)); g_503 = safe_sub_func_int32_t_s_s(g_503, 1))
            {
                for (g_616 = 0; (g_616 > 18); ++g_616)
                {
                    for (p_29 = 0; (p_29 <= 1); p_29 += 1)
                    {
                        int i, j, k;
                        g_1109 = &g_96[p_29][(p_29 + 2)][(p_29 + 4)];
                    }
                }
                (*l_1020) = l_1110;

                ;
            }
            l_42 |= (safe_mod_func_uint64_t_u_u(((*l_1110) , (0x82L >= g_507)), (safe_unary_minus_func_uint32_t_u((safe_lshift_func_int8_t_s_u((safe_sub_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_s(p_29, 15)) && (l_1120 != &l_1110)), ((((l_1020 == (*g_825)) | (safe_add_func_int16_t_s_s((~(safe_lshift_func_int8_t_s_u((**l_1120), g_96[1][4][3]))), 0x29DBL))) , p_29) & 0x1935L))), 6))))));
            if ((*l_1110))
                continue;
            if (p_29)
                continue;
        }
    }

    ;


    if ((*g_149))
    {
        int l_1125 = 1L;
        (*g_1109) = (65534UL > l_1125);
    }
    else
    {
        int *l_1126 = &g_89;
        int *l_1129 = &g_503;
        (*l_1020) = l_1126;

        ;
        (*g_158) = (*g_1109);
        (*l_1129) |= (p_29 , func_55((*l_1126), p_29, (g_715[0][0][0] , g_716.f0), p_29, (((safe_add_func_uint16_t_u_u((((**l_1020) && (*l_1126)) , 65528UL), (*l_1126))) , g_96[1][4][3]) < (*l_1126))));
    }


    return p_29;
}







static int func_30(unsigned p_31, unsigned long long p_32, unsigned p_33, struct S0 p_34, unsigned long long p_35)
{
    int **l_722 = &g_158;
    unsigned l_726 = 2UL;
    int l_731 = 0x7CEDBE4DL;
    int l_748 = (-9L);
    struct S0 ***l_751 = (void*)0;
    unsigned l_778[1][2][7];
    int l_832 = 1L;
    int l_842 = (-6L);
    unsigned short l_884 = 0x79EEL;
    struct S0 l_945[3] = {{794},{794},{794}};
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 7; k++)
                l_778[i][j][k] = 0x45FD7592L;
        }
    }
lbl_1016:
    if ((safe_unary_minus_func_uint16_t_u((safe_sub_func_int16_t_s_s((safe_sub_func_uint16_t_u_u((+(((((&g_221 != &g_221) != (l_722 == l_722)) , g_723) || (((p_32 >= (safe_sub_func_int8_t_s_s(g_715[0][0][0], (((l_726 ^ (((safe_sub_func_uint16_t_u_u((safe_add_func_int64_t_s_s((l_731 < 0x96L), p_32)), p_31)) & p_34.f0) & g_715[0][0][4])) , 0xE4300806881A4158LL) >= p_35)))) || g_331) | p_32)) , 0xF7BCL)), (-7L))), 0x8E08L)))))
    {
        unsigned long long l_742 = 18446744073709551610UL;
        struct S0 ***l_743[10];
        int **l_744[2][5] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_158,&g_158,&g_158,&g_158,&g_158}};
        int **l_749 = &g_158;
        unsigned l_797 = 0x93584642L;
        unsigned long long l_824 = 0UL;
        unsigned long long l_852 = 7UL;
        unsigned long long l_853 = 18446744073709551615UL;
        unsigned char l_881 = 1UL;
        unsigned short l_883[1];
        long long l_926[2][10] = {{0xA1DE41C9BECFE3A2LL,(-4L),(-4L),0xA1DE41C9BECFE3A2LL,0xA1DE41C9BECFE3A2LL,(-4L),(-4L),0xA1DE41C9BECFE3A2LL,0xA1DE41C9BECFE3A2LL,(-4L)},{0xA1DE41C9BECFE3A2LL,0xA1DE41C9BECFE3A2LL,(-4L),(-4L),0xA1DE41C9BECFE3A2LL,0xA1DE41C9BECFE3A2LL,(-4L),(-4L),0xA1DE41C9BECFE3A2LL,0xA1DE41C9BECFE3A2LL}};
        unsigned l_967 = 0xFDF504BEL;
        int **l_1014 = (void*)0;
        int *l_1015 = &g_454;
        int i, j;
        for (i = 0; i < 10; i++)
            l_743[i] = &g_221;
        for (i = 0; i < 1; i++)
            l_883[i] = 9UL;
lbl_885:
        for (g_503 = 0; (g_503 <= 8); g_503 += 1)
        {
            int l_747 = (-1L);
            int i;
        }
        if (l_884)
        {
            unsigned l_893[8][5] = {{0x5FD65406L,0x5FD65406L,9UL,0x33CDBCC4L,18446744073709551615UL},{18446744073709551615UL,18446744073709551615UL,0x30F5A180L,0x30F5A180L,18446744073709551615UL},{18446744073709551615UL,0UL,18446744073709551615UL,18446744073709551615UL,0x30F5A180L},{0x5FD65406L,0x33CDBCC4L,0x6D24BF56L,0x33CDBCC4L,0x5FD65406L},{0x30F5A180L,18446744073709551615UL,18446744073709551615UL,0UL,18446744073709551615UL},{0x5FD65406L,18446744073709551615UL,18446744073709551615UL,0x5FD65406L,0UL},{0x33CDBCC4L,0x5FD65406L,0x6D24BF56L,18446744073709551615UL,18446744073709551615UL},{0x30F5A180L,0x5FD65406L,0x30F5A180L,0UL,0x5FD65406L}};
            int l_894 = 0xC8A8435DL;
            int i, j;
            if (l_884)
                goto lbl_885;
            l_894 &= (*g_453);
            for (l_742 = 0; (l_742 <= 44); ++l_742)
            {
                struct S0 ***l_901 = &g_221;
                int l_904 = (-1L);
                (*l_749) = ((((((safe_lshift_func_int8_t_s_s(g_761, ((((((safe_mod_func_uint8_t_u_u(p_32, g_331)) , (l_751 != l_901)) > (safe_sub_func_uint8_t_u_u((p_35 || p_33), g_723))) == l_904) | 1L) >= g_96[1][4][3]))) ^ p_35) | l_904) , l_904) , 0xE2L) , &l_904);

                ;
                (**l_722) = p_33;
            }
        }
        else
        {
            struct S0 **l_905 = &g_222[1][0];
            int l_929 = 4L;
            struct S0 l_944 = {1986};
            unsigned long long l_955 = 0x58B5A3821ED228D6LL;
            int ***l_1001[5];
            int i;
            for (i = 0; i < 5; i++)
                l_1001[i] = &l_749;
            if (p_35)
            {
                struct S0 l_906 = {1348};
                if ((p_35 <= (l_905 != (void*)0)))
                {
                    struct S0 l_907 = {782};
                    l_907 = l_906;
                    p_34 = p_34;
                    for (g_761 = 1; (g_761 >= 0); g_761 -= 1)
                    {
                        int l_908 = 0x9AA3DD74L;
                        return l_908;
                    }
                    g_454 &= ((func_55(g_761, (safe_add_func_uint8_t_u_u(0UL, 0xE1L)), (safe_lshift_func_uint16_t_u_s((safe_mod_func_uint8_t_u_u(((p_34.f0 || g_155.f0) , (safe_unary_minus_func_int32_t_s(p_31))), func_55((p_32 < (+(p_32 < (safe_sub_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u(((((p_32 | 4294967288UL) >= g_503) < g_96[1][4][3]) || 1L), g_89)), g_616))))), l_906.f0, g_507, p_32, g_96[1][4][3]))), p_34.f0)), g_155.f0, p_34.f0) < 0UL) | l_906.f0);
                }
                else
                {
                    unsigned char l_920 = 0xE1L;
                    int l_921 = 0xA4B4034FL;
                    short l_930 = 7L;
                    struct S0 l_938 = {1443};
                    l_921 = l_920;
                    for (l_881 = 0; (l_881 == 6); l_881++)
                    {
                        unsigned char l_931 = 0x55L;
                        (*l_749) = (void*)0;

                        ;
                        l_929 = ((((g_331 != (p_31 | 0xCFL)) , g_96[1][4][3]) != l_920) < 4294967295UL);
                        (*l_722) = &l_929;

                        ;
                    }


                    l_938 = ((safe_lshift_func_int16_t_s_s(((p_35 >= (p_32 >= (func_46(g_6[2][0][3], p_33) >= 7L))) != (1L > (l_832 != (((l_906.f0 ^ p_31) & g_6[1][1][4]) ^ 0x84E1BF12995BDD68LL)))), p_31)) , p_34);


                }
                for (l_824 = (-18); (l_824 <= 1); l_824++)
                {
                    int l_943 = 0L;
                    for (p_32 = 0; (p_32 <= 44); p_32 = safe_add_func_uint16_t_u_u(p_32, 8))
                    {
                        return l_943;
                    }
                    for (l_797 = 1; (l_797 <= 6); l_797 += 1)
                    {
                        if (p_32)
                            break;
                    }
                    l_944 = p_34;
                    l_945[1] = p_34;
                }
            }
            else
            {
                unsigned char l_954 = 0x95L;
                int l_956 = (-1L);
                struct S0 l_971 = {895};
                if ((safe_add_func_uint16_t_u_u((safe_add_func_uint16_t_u_u(((~((((safe_add_func_uint32_t_u_u((p_31 != p_33), p_32)) , ((safe_lshift_func_int8_t_s_u((g_660 ^ g_723), 3)) , 1L)) == g_96[1][4][3]) | p_31)) <= l_956), p_33)), p_35)))
                {
                    unsigned l_957 = 0x813858DBL;
                    l_957 = func_46(g_454, p_31);


                    if (l_797)
                        goto lbl_1016;
                }
                else
                {
                    unsigned l_958 = 0xDACB0282L;
                    struct S0 ***l_978 = (void*)0;
                    l_967 &= ((~(p_31 == 255UL)) , ((l_958 != func_55((safe_lshift_func_int8_t_s_u((safe_sub_func_int64_t_s_s(l_955, (p_32 < (((g_373 != (safe_mod_func_int32_t_s_s(0x2C7E5C84L, (p_32 || (safe_add_func_uint8_t_u_u(l_955, g_715[0][0][3])))))) != 6L) , 0xCBD4147BL)))), g_155.f0)), p_32, p_32, l_958, l_955)) < p_33));
                    for (g_616 = (-7); (g_616 == 32); ++g_616)
                    {
                        struct S0 l_970 = {951};
                        l_970 = p_34;
                        (*g_432) = l_971;
                    }
                    if (l_971.f0)
                        goto lbl_885;
                    for (l_955 = 0; (l_955 <= 23); l_955 = safe_add_func_uint32_t_u_u(l_955, 1))
                    {
                        (*g_643) &= (p_31 || (((l_944.f0 == p_35) == ((safe_add_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s((l_978 != &g_221), 15)), p_34.f0)) <= l_958)) ^ 18446744073709551609UL));
                        return p_31;
                    }
                }
                for (l_954 = 0; (l_954 < 14); l_954 = safe_add_func_int32_t_s_s(l_954, 7))
                {
                    int l_1000 = (-5L);
                    for (l_797 = 25; (l_797 == 49); l_797 = safe_add_func_uint8_t_u_u(l_797, 3))
                    {
                        unsigned short l_995 = 65531UL;
                        l_832 ^= (((safe_rshift_func_uint8_t_u_u((((0x0DE1126E12667EDALL != ((safe_rshift_func_uint8_t_u_u(g_89, 7)) , 1L)) | 18446744073709551608UL) , p_32), g_761)) > l_995) || p_32);
                    }
                }
                l_748 = (safe_rshift_func_int16_t_s_s(((safe_rshift_func_int8_t_s_u(((*g_825) != l_744[1][0]), p_34.f0)) | g_761), (safe_lshift_func_int8_t_s_s(((safe_sub_func_uint16_t_u_u(p_31, 0x9301L)) , (safe_rshift_func_int16_t_s_u((p_35 >= 1L), (~(safe_sub_func_uint32_t_u_u((((void*)0 == &g_221) ^ g_761), p_35)))))), 1))));
            }
            l_744[0][2] = l_1014;
            l_832 ^= 0x5FCA04A5L;
        }
        (*l_749) = l_1015;

        ;
        (*g_158) = p_34.f0;
    }
    else
    {
        return p_35;
    }

    ;
    for (l_731 = 0; l_731 < 7; l_731 += 1)
    {
        for (g_396 = 0; g_396 < 9; g_396 += 1)
        {
            g_102[l_731][g_396] = &l_945[2];
        }
    }

    for (l_832 = 0; (l_832 != (-17)); --l_832)
    {
        int *l_1019 = (void*)0;
        (*l_722) = l_1019;

        ;
    }

    ;
    return (*g_322);


}







static unsigned long long func_36(struct S0 p_37, short p_38, int p_39, int p_40)
{
    char l_69 = 0x62L;
    unsigned char l_714[9] = {255UL,253UL,253UL,255UL,253UL,253UL,255UL,253UL,253UL};
    int i;
    g_715[0][0][0] &= (((((safe_lshift_func_int8_t_s_s(((p_38 >= g_6[5][1][5]) & (func_46((func_49((func_55(g_6[2][0][7], (func_61((((safe_unary_minus_func_int16_t_s((0xDEL > (safe_lshift_func_int8_t_s_s((l_69 && l_69), ((safe_lshift_func_int8_t_s_s((g_6[4][0][3] || ((0x01FE44AAL <= (safe_rshift_func_int8_t_s_s((safe_mod_func_uint32_t_u_u(((g_41.f0 > l_69) != p_38), 0xFD7DC893L)), p_40))) , l_69)), 3)) > 0xBE80AAC8L)))))) , (-1L)) , 0xE5592ED9L), p_38, g_6[4][0][3], l_69) >= 1UL), g_6[4][1][8], g_6[4][0][3], p_38) & (-1L)), g_6[1][1][3], p_40, g_6[4][0][3], g_6[3][1][8]) != l_69), p_37.f0) ^ g_6[4][0][3])), 2)) != l_714[6]) , (*g_555)) < p_37.f0) >= 0x5EBBL);

    ;

    (*g_432) = p_37;
    return l_69;
}







static long long func_46(long long p_47, int p_48)
{
    struct S0 ***l_397 = (void*)0;
    struct S0 ***l_399 = &g_221;
    int **l_400 = &g_158;
    struct S0 l_416 = {610};
    short l_417 = 0x3916L;
    int l_478 = 0L;
    unsigned char l_544 = 0xE0L;
    int l_547 = (-7L);
    unsigned l_565[10];
    int l_604 = 3L;
    long long l_632 = 0x289DB9304B3DD063LL;
    unsigned l_703 = 0xE5856AF1L;
    int l_704[5];
    int ***l_709 = &l_400;
    long long l_710[1];
    unsigned l_711 = 4294967292UL;
    int *l_713[3][1];
    int i, j;
    for (i = 0; i < 10; i++)
        l_565[i] = 1UL;
    for (i = 0; i < 5; i++)
        l_704[i] = 0x694D39F4L;
    for (i = 0; i < 1; i++)
        l_710[i] = 0xE3E455EE8E78C0A6LL;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
            l_713[i][j] = &l_478;
    }
lbl_456:
    (*l_399) = &g_222[1][0];

    ;
    (*l_400) = &p_48;

    ;
    if ((0x8E4A41DF838516C4LL >= (safe_mod_func_uint32_t_u_u((+(**l_400)), (p_48 , (**l_400))))))
    {
        int **l_415 = &g_158;
        struct S0 ***l_434 = &g_221;
        struct S0 l_508[9] = {{880},{1658},{880},{1658},{880},{1658},{880},{1658},{880}};
        unsigned l_558 = 0UL;
        int *l_586 = &g_503;
        unsigned short l_615 = 0UL;
        int l_626 = 0x676A7357L;
        int i;
        if ((((func_55(((safe_mod_func_int8_t_s_s(((((((void*)0 == &p_48) < (safe_sub_func_uint64_t_u_u(((safe_lshift_func_int8_t_s_s(0xA1L, 1)) >= (safe_sub_func_uint8_t_u_u(((((((safe_mod_func_uint32_t_u_u((p_47 <= p_48), (safe_add_func_uint16_t_u_u((l_415 != &g_149), (((g_373 || g_6[4][1][4]) || 0x64E5L) ^ (**l_400)))))) != g_89) <= g_41.f0) , l_416) , l_417) < (**l_415)), p_48))), 0x9C6820D95D459A4CLL))) & p_48) ^ p_47) , (**l_400)), 0x16L)) & g_41.f0), g_41.f0, (**l_415), (**l_400), g_96[1][4][3]) >= p_48) , (void*)0) == (void*)0))
        {
            struct S0 l_418[4][3] = {{{98},{1189},{1189}},{{1189},{1116},{838}},{{98},{1116},{98}},{{624},{1189},{838}}};
            struct S0 *l_419 = &g_155;
            int i, j;
            (*l_419) = l_418[0][0];
        }
        else
        {
            unsigned l_427 = 1UL;
            struct S0 l_431 = {1537};
            int *l_488[8][8] = {{&g_96[1][3][2],&g_96[1][5][2],&g_96[1][5][2],&g_96[1][3][2],&g_96[1][5][2],&g_96[1][5][2],&g_96[1][3][2],&g_96[1][5][2]},{&g_96[1][3][2],&g_96[1][3][2],&g_89,&g_96[1][3][2],&g_96[1][3][2],&g_89,&g_96[1][3][2],&g_96[1][3][2]},{&g_96[1][5][2],&g_96[1][3][2],&g_96[1][5][2],&g_96[1][5][2],&g_96[1][3][2],&g_96[1][5][2],&g_96[1][5][2],&g_96[1][3][2]},{&g_96[1][3][2],&g_96[1][5][2],&g_96[1][5][2],&g_96[1][3][2],&g_96[1][5][2],&g_96[1][5][2],&g_96[1][3][2],&g_96[1][5][2]},{&g_96[1][3][2],&g_96[1][3][2],&g_89,&g_96[1][3][2],&g_96[1][3][2],&g_89,&g_96[1][3][2],&g_96[1][3][2]},{&g_89,&g_96[1][5][2],&g_89,&g_89,&g_96[1][5][2],&g_89,&g_89,&g_96[1][5][2]},{&g_96[1][5][2],&g_89,&g_89,&g_96[1][5][2],&g_89,&g_89,&g_96[1][5][2],&g_89},{&g_96[1][5][2],&g_96[1][5][2],&g_96[1][3][2],&g_96[1][5][2],&g_96[1][5][2],&g_96[1][3][2],&g_96[1][5][2],&g_96[1][5][2]}};
            int i, j;
            for (g_89 = 0; (g_89 <= 6); g_89 += 1)
            {
                unsigned l_420 = 4UL;
                int l_433 = (-3L);
                unsigned long long l_437[1];
                struct S0 l_441 = {1555};
                struct S0 **l_506 = &g_222[1][0];
                int i;
                for (i = 0; i < 1; i++)
                    l_437[i] = 0xB647A3EA6D4CD5FDLL;
                if ((((p_47 == l_420) <= (((0x04FFL == (safe_sub_func_uint16_t_u_u(((void*)0 == l_400), (**l_415)))) == ((((safe_mod_func_uint32_t_u_u((((!(safe_rshift_func_uint8_t_u_s(((-1L) == p_48), 0))) ^ g_96[1][4][3]) >= l_427), (*g_322))) | l_420) < l_420) <= g_41.f0)) < g_155.f0)) > p_48))
                {
                    struct S0 **l_428 = &g_222[1][0];
                    int l_429 = 0L;
                    if (((g_89 , l_428) == l_428))
                    {
                        struct S0 *l_430 = (void*)0;
                        (**g_183) = l_429;
                        (*l_428) = l_430;
                    }
                    else
                    {
                        if (p_47)
                            break;
                        (*g_432) = l_431;
                        l_433 = p_47;
                    }
                    l_429 ^= ((p_48 , l_434) == ((safe_lshift_func_uint8_t_u_s(l_437[0], ((*g_90) , ((p_48 , ((((((safe_rshift_func_int16_t_s_s((g_155.f0 > 0x921DL), (safe_unary_minus_func_uint8_t_u(1UL)))) < ((**l_415) ^ 0x75483D43F8D3BAAFLL)) , p_48) ^ (-1L)) && 0xF660C1D4L) <= p_48)) == 6L)))) , &g_221));
                    for (l_417 = 0; (l_417 <= 1); l_417 += 1)
                    {
                        int i, j;
                        (*g_158) = (*g_322);
                        l_441 = (*g_90);
                    }
                }
                else
                {
                    unsigned long long l_452 = 0xF737CDF0E98E4130LL;
                    struct S0 l_455 = {1072};
                    for (l_433 = 1; (l_433 >= 0); l_433 -= 1)
                    {
                        int i, j;
                        (*g_453) |= (g_396 , (p_47 ^ ((safe_mod_func_uint64_t_u_u((safe_lshift_func_int16_t_s_u((**l_400), ((((safe_sub_func_uint64_t_u_u((((g_96[0][2][0] , p_48) || (((safe_sub_func_uint16_t_u_u(8UL, p_47)) != ((safe_mod_func_int64_t_s_s((-5L), ((l_441 , l_420) & p_47))) , l_452)) , 1UL)) > p_47), p_47)) , (*l_400)) == (void*)0) , 0x54D7L))), g_396)) , p_48)));
                        l_431 = l_455;
                    }
                    for (g_331 = 0; (g_331 <= 1); g_331 += 1)
                    {
                        if (l_455.f0)
                            goto lbl_456;
                    }
                    (*g_183) = &p_48;
                    for (l_417 = 0; (l_417 <= 6); l_417 += 1)
                    {
                        char l_463 = (-1L);
                        l_433 ^= (((0xEFL > ((safe_mod_func_uint64_t_u_u((safe_lshift_func_int16_t_s_s((safe_sub_func_uint8_t_u_u(l_420, (l_463 > (**l_400)))), 12)), p_48)) < ((safe_add_func_int32_t_s_s(p_47, (safe_sub_func_uint64_t_u_u(p_47, p_47)))) & (**l_415)))) , (**l_415)) ^ g_89);
                        return g_6[4][0][3];


                    }
                }
                for (p_48 = 0; (p_48 <= 6); p_48 += 1)
                {
                    unsigned short l_470[1][6] = {{0UL,0UL,0UL,0UL,0UL,0UL}};
                    int *l_477 = (void*)0;
                    struct S0 **l_490 = (void*)0;
                    int l_518 = 3L;
                    int i, j;
                    l_478 = (0xF0AC6990L <= (safe_add_func_int8_t_s_s(p_48, (((p_48 ^ 0xD56A67A99ABB8A98LL) <= ((((-4L) ^ (l_470[0][4] , (safe_rshift_func_int16_t_s_u((safe_sub_func_int8_t_s_s(((~((-5L) || (safe_rshift_func_int8_t_s_s((l_431 , (p_48 & p_47)), 4)))) < p_48), p_48)), 3)))) >= p_47) , g_6[4][0][3])) | g_155.f0))));
                    if ((g_373 == (safe_sub_func_uint16_t_u_u(((((p_48 & (safe_unary_minus_func_uint32_t_u(g_6[4][0][3]))) ^ ((((((l_431 , &g_222[1][0]) != (*l_434)) & (safe_mod_func_uint16_t_u_u(g_89, (safe_add_func_uint64_t_u_u(((safe_lshift_func_int16_t_s_u((l_427 ^ g_41.f0), 6)) , 18446744073709551615UL), p_48))))) , 0xD806CB66L) <= p_47) , p_47)) != 1L) >= p_47), g_454))))
                    {
                        int l_489[1][7];
                        int i, j;
                        for (i = 0; i < 1; i++)
                        {
                            for (j = 0; j < 7; j++)
                                l_489[i][j] = 1L;
                        }
                        (*l_400) = l_488[3][4];

                        ;
                        l_489[0][0] &= (*g_147);
                        (*l_415) = &l_489[0][2];

                        ;
                        (*g_183) = (*l_400);
                    }
                    else
                    {
                        char l_491 = (-5L);
                        l_491 ^= (l_490 != l_490);
                        (*l_415) = (void*)0;

                        ;
                        l_433 ^= (safe_mod_func_uint8_t_u_u(g_6[4][0][0], g_89));
                    }


                    (*l_400) = &p_48;

                    ;
                    if ((~((*g_221) != (**l_434))))
                    {
                        (*l_400) = (*g_183);
                        return p_48;


                    }
                    else
                    {
                        struct S0 l_494 = {488};
                        (*g_90) = l_494;
                        if (p_48)
                            continue;
                        g_507 ^= (((((p_48 <= (**l_415)) && (((-1L) == (safe_rshift_func_int8_t_s_s((((safe_rshift_func_int8_t_s_u((p_47 | (safe_lshift_func_uint16_t_u_u((safe_sub_func_int8_t_s_s(p_47, 0x7AL)), 14))), 2)) >= (((g_503 && (**g_183)) || ((safe_lshift_func_int8_t_s_u(((void*)0 == l_506), g_331)) == (**l_415))) < g_96[0][3][3])) == p_48), p_48))) && (*g_453))) , l_494.f0) && 0x3415L) & p_48);
                        (*g_509) = l_508[3];
                    }
                    for (g_454 = 0; (g_454 <= 6); g_454 += 1)
                    {
                        l_518 = (~(safe_add_func_uint16_t_u_u((g_396 < g_6[2][0][2]), ((((safe_lshift_func_int16_t_s_u(g_331, (+((0x7A5CB3B7L && p_47) == 0x23L)))) <= (~(safe_mod_func_uint64_t_u_u(g_454, (safe_add_func_uint16_t_u_u(p_48, 0x3654L)))))) < 0x733EL) < g_373))));
                    }
                }
            }
        }
        for (l_417 = 6; (l_417 >= 1); l_417 -= 1)
        {
            int l_531 = 0x231F455AL;
            struct S0 l_536 = {159};
            if ((**g_245))
            {
                (**l_415) ^= g_532;
            }
            else
            {
                unsigned char l_535 = 0xA7L;
                struct S0 l_537 = {497};
                for (g_507 = 2; (g_507 <= 6); g_507 += 1)
                {
                    int i, j;
                    (**l_400) |= (safe_mod_func_int32_t_s_s(((((l_535 , &g_102[l_417][(g_507 + 1)]) != ((g_373 && p_47) , (void*)0)) , (void*)0) == (void*)0), 4294967295UL));
                    (**l_400) = (g_507 < (g_396 < (**l_400)));
                    return g_503;


                }
                for (g_331 = 0; (g_331 <= 6); g_331 += 1)
                {
                    (*l_415) = (*g_245);
                    (*g_158) |= (*g_322);
                }
                if (l_535)
                {
                    return g_89;


                }
                else
                {
                    return l_535;


                }
            }
            for (g_331 = 0; (g_331 <= 8); g_331 += 1)
            {
                (*l_400) = (*l_415);
                (*l_415) = &p_48;
                if (l_547)
                {
                    return g_373;


                }
                else
                {
                    (*l_415) = &p_48;
                    for (g_89 = 1; (g_89 >= 0); g_89 -= 1)
                    {
                        int i, j, k;
                        if (g_96[g_89][(g_89 + 3)][(g_89 + 4)])
                            break;
                    }
                }
                if ((safe_rshift_func_uint8_t_u_s(0xFBL, 6)))
                {
                    unsigned char l_552[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_552[i] = 1UL;
                    for (l_478 = 3; (l_478 <= 8); l_478 += 1)
                    {
                        int *l_551 = &g_96[1][4][3];
                        (*l_551) |= (**l_400);
                    }
                    return l_552[0];


                }
                else
                {
                    int *l_553 = (void*)0;
                    (*g_555) |= (**l_415);
                }
                for (g_503 = 0; (g_503 <= 1); g_503 += 1)
                {
                    for (l_547 = 1; (l_547 >= 0); l_547 -= 1)
                    {
                        unsigned char l_556 = 255UL;
                        if (l_556)
                            break;
                        return g_331;


                    }
                    return p_48;


                }
            }
            for (g_507 = 0; (g_507 <= 6); g_507 += 1)
            {
                if ((**l_415))
                    break;
                (*g_557) = l_536;
            }
        }
        if ((0x09L ^ ((**l_434) == (((((**l_400) | l_558) > (safe_lshift_func_uint8_t_u_u(g_96[1][2][4], (safe_add_func_uint32_t_u_u(((l_400 == ((safe_lshift_func_int8_t_s_s((((void*)0 == (*g_220)) >= l_565[8]), 6)) , (void*)0)) > 0x97L), g_6[1][1][7]))))) != (**l_400)) , (**l_434)))))
        {
            int l_570 = 1L;
            int *l_572 = &l_570;
            (*l_572) ^= (safe_sub_func_uint64_t_u_u((**l_400), (0x6E5F10C5271646CELL | ((l_397 == (void*)0) | (((safe_add_func_uint32_t_u_u((**l_415), 0xEE67AB61L)) & 0x274A1E5535A50737LL) || g_503)))));
        }
        else
        {
            short l_595 = 0x8947L;
            unsigned l_603 = 0xFBC13B21L;
            struct S0 ***l_606 = (void*)0;
            int *l_612 = (void*)0;
            if ((**l_415))
            {
                short l_577 = 7L;
                struct S0 *l_580[1][3][1];
                int *l_581 = &l_478;
                int i, j, k;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 3; j++)
                    {
                        for (k = 0; k < 1; k++)
                            l_580[i][j][k] = (void*)0;
                    }
                }
                (*g_578) ^= (((0xA111E429L ^ ((**l_415) >= p_47)) || (((0xD460L > p_47) != (+((p_47 > (safe_lshift_func_uint8_t_u_s(1UL, (**l_400)))) & (safe_sub_func_int8_t_s_s(((g_89 >= p_48) >= 8UL), g_6[4][1][2]))))) > p_47)) == l_577);
                (*g_557) = ((**l_415) , (*g_103));
                (*l_415) = l_581;

                ;
                (*l_581) ^= ((((l_580[0][0][0] == (**l_399)) == (!((safe_mod_func_uint16_t_u_u((g_96[1][4][2] & g_41.f0), g_507)) || g_507))) | 0x3512L) != (safe_lshift_func_uint8_t_u_s(((void*)0 == (**l_434)), g_532)));
            }
            else
            {
                struct S0 *l_596 = &g_155;
                int l_605 = 1L;
                int *l_617 = &l_605;
                (*l_415) = l_586;

                ;
                for (p_48 = 24; (p_48 != 16); --p_48)
                {
                    unsigned l_589[10][9][2] = {{{4294967295UL,0x4C996F71L},{3UL,0x4238F75DL},{0x4852A487L,0UL},{0x97E26731L,1UL},{4294967295UL,4294967291UL},{0UL,0xC58EDBC7L},{3UL,9UL},{0x19511C74L,0xCFE55327L},{4294967286UL,1UL}},{{0x2AEACD5BL,3UL},{5UL,0x3B18CDBEL},{0xCFE55327L,4294967293UL},{0UL,2UL},{0x4852A487L,0x97E26731L},{1UL,0UL},{0x3B18CDBEL,0x4238F75DL},{4294967295UL,0xC58EDBC7L},{3UL,0x3B18CDBEL}},{{1UL,4294967295UL},{0x0B3F904EL,0xF23553FDL},{0x2AEACD5BL,3UL},{0x19511C74L,4294967295UL},{4294967295UL,1UL},{4294967295UL,2UL},{9UL,1UL},{0UL,1UL},{9UL,2UL}},{{4294967295UL,1UL},{4294967295UL,4294967295UL},{0x19511C74L,3UL},{0x2AEACD5BL,0xF23553FDL},{0x0B3F904EL,4294967295UL},{1UL,0x3B18CDBEL},{4294967293UL,0UL},{0x8D065B64L,4294967295UL},{0x72436EF2L,1UL}},{{0xB53C642AL,0xFE3C9750L},{4UL,0x0756DF95L},{0x3B18CDBEL,0xF45FC707L},{1UL,0x72436EF2L},{4294967291UL,1UL},{0xC7B61CBCL,0x19511C74L},{0x74A0FDC9L,1UL},{4294967295UL,4294967295UL},{1UL,0UL}},{{0x3B18CDBEL,3UL},{3UL,0xB53C642AL},{0xFE3C9750L,0UL},{4UL,4294967295UL},{0x575AFB0AL,0x0B3F904EL},{0xCD6EA679L,4294967295UL},{0x28072122L,1UL},{1UL,0xEECD8D16L},{0x97E26731L,0xCD6EA679L}},{{4294967291UL,4UL},{1UL,4294967286UL},{0x575AFB0AL,0x8FCF7C13L},{0x72436EF2L,0xFE3C9750L},{0UL,0UL},{4294967295UL,3UL},{9UL,0xF45FC707L},{4294967293UL,4UL},{0x28072122L,4294967293UL}},{{0x74A0FDC9L,5UL},{0x74A0FDC9L,4294967293UL},{0x28072122L,4UL},{4294967293UL,0xF45FC707L},{9UL,3UL},{4294967295UL,0UL},{0UL,0xFE3C9750L},{0x72436EF2L,0x8FCF7C13L},{0x575AFB0AL,4294967286UL}},{{1UL,4UL},{4294967291UL,0xCD6EA679L},{0x97E26731L,0xEECD8D16L},{1UL,1UL},{0x28072122L,4294967295UL},{0xCD6EA679L,0x0B3F904EL},{0x575AFB0AL,4294967295UL},{4UL,0UL},{0xFE3C9750L,0x8FCF7C13L}},{{1UL,9UL},{0x67CD13A4L,0xEECD8D16L},{0xB53C642AL,0UL},{0UL,0xAB0DD7D5L},{0x4238F75DL,0x1A3F1D23L},{4294967295UL,0xB53C642AL},{8UL,0x97E26731L},{0xAB0DD7D5L,5UL},{0x67CD13A4L,0x575AFB0AL}}};
                    int *l_607[3][5] = {{&l_478,&l_478,&l_478,&l_478,&l_478},{&g_454,&g_96[1][4][3],&g_454,&g_96[1][4][3],&g_454},{&l_478,&l_478,&l_478,&l_478,&l_478}};
                    int i, j, k;
                    for (g_331 = 0; (g_331 <= 6); g_331 += 1)
                    {
                        int i;
                        (*l_586) = (p_47 != l_589[5][6][0]);
                        (*g_590) = l_508[(g_331 + 2)];
                        l_595 ^= ((safe_rshift_func_uint8_t_u_u((l_508[(g_331 + 2)].f0 , (g_6[4][0][3] , (((*l_586) , g_6[3][0][8]) , 247UL))), 2)) > p_48);
                    }
                }
                (*g_158) = (!(safe_add_func_int8_t_s_s((*l_617), (0UL | (&g_221 != l_399)))));
            }

            ;
            for (l_604 = 0; (l_604 >= (-7)); l_604 = safe_sub_func_uint64_t_u_u(l_604, 9))
            {
                long long l_631[10] = {1L,1L,0L,0x272BD0FDFB4E4B7BLL,0L,1L,1L,0L,0x272BD0FDFB4E4B7BLL,0L};
                struct S0 l_633 = {1398};
                struct S0 *l_634 = &l_633;
                int i;
                (*l_634) = ((((((void*)0 == (*l_399)) | ((safe_add_func_int16_t_s_s((l_626 , 1L), (safe_mod_func_int32_t_s_s((((**l_400) , l_434) != (p_48 , &g_221)), 0x588D3286L)))) || (**l_415))) , l_631[2]) | 0x1AC7F4AB3A53488DLL) , l_633);
            }
            for (g_454 = 0; (g_454 < 13); g_454 = safe_add_func_int8_t_s_s(g_454, 1))
            {
                unsigned char l_646 = 0xABL;
                struct S0 *l_663 = &g_155;
                (*g_643) &= (safe_add_func_int64_t_s_s(((safe_add_func_int64_t_s_s((safe_sub_func_uint16_t_u_u(p_47, p_47)), ((void*)0 == l_400))) , g_503), (-5L)));
            }
        }

        ;
        (*g_453) ^= (**l_415);
    }
    else
    {
        unsigned char l_675 = 247UL;
        int l_676 = 0x0ADF89EFL;
        struct S0 *l_678[2];
        int *l_680 = (void*)0;
        int *l_681 = &l_676;
        struct S0 ***l_696 = &g_221;
        int i;
        for (i = 0; i < 2; i++)
            l_678[i] = &g_41;
        for (g_396 = 0; (g_396 <= 42); ++g_396)
        {
            unsigned l_673 = 0xE9C009E7L;
            long long l_674 = 0xBF6532884691C896LL;
            int *l_677[3][3] = {{(void*)0,(void*)0,&g_503},{(void*)0,(void*)0,&g_503},{(void*)0,(void*)0,&g_503}};
            unsigned l_679 = 0x5AD07C97L;
            int i, j;
            for (g_507 = 0; (g_507 <= 3); g_507 += 1)
            {
                int l_671 = 0x77414692L;
                unsigned long long l_672 = 0UL;
                int i, j;
                l_676 ^= (safe_add_func_int16_t_s_s(((((void*)0 == g_222[g_507][g_507]) ^ func_55(((p_48 | p_47) , ((p_47 != (func_55(g_616, g_660, p_47, (l_671 < 0x79FDAE08L), g_616) | 65535UL)) < p_48)), l_672, g_331, l_673, l_674)) == l_675), 0xE270L));
                (*l_400) = l_677[0][2];

                ;
                for (l_674 = 6; (l_674 >= 1); l_674 -= 1)
                {
                    int i, j;
                    g_102[(g_507 + 1)][l_674] = l_678[0];
                }
            }
            (*g_149) |= (p_47 < ((g_331 != p_48) && g_155.f0));
        }

        ;
        (*l_681) &= (g_155.f0 || (&g_157 != &l_400));
        for (l_676 = 0; (l_676 < (-7)); --l_676)
        {
            struct S0 l_684 = {1911};
            int l_695 = 0x10506841L;
            l_695 |= ((l_684 , ((safe_rshift_func_int16_t_s_s(p_48, 12)) > (safe_sub_func_uint16_t_u_u((safe_sub_func_int32_t_s_s(((*l_681) == g_503), 5UL)), g_454)))) && g_454);
            (*g_322) ^= 0L;
            p_48 ^= (-4L);
        }
        l_416 = (((p_48 | (((l_696 != ((!(safe_add_func_uint8_t_u_u(((((g_96[1][4][3] || g_89) , func_55(((g_41.f0 != ((safe_sub_func_int16_t_s_s((0xA1ACL != (((((safe_sub_func_uint32_t_u_u((((void*)0 == (*g_221)) && g_96[1][3][3]), l_703)) ^ p_48) , (void*)0) == (void*)0) > p_47)), p_47)) , g_96[1][4][3])) & p_48), l_704[0], g_41.f0, p_47, p_47)) || p_48) >= 0x09CE0813A4AF614CLL), g_331))) , (void*)0)) > 0L) < (*l_681))) , g_503) , l_416);
    }

    ;
    p_48 ^= ((safe_lshift_func_int8_t_s_s(p_47, l_711)) & 0xF3C3E672F5479ED8LL);
    return g_96[0][3][3];


}







static unsigned func_49(char p_50, unsigned short p_51, unsigned short p_52, int p_53, unsigned char p_54)
{
    unsigned char l_150[4];
    unsigned long long l_151 = 0xC8D9F5F5C48625E2LL;
    struct S0 *l_154[5];
    int *l_243 = (void*)0;
    int **l_258 = &l_243;
    struct S0 **l_259 = &l_154[1];
    unsigned long long l_260[5];
    long long l_286 = (-1L);
    unsigned char l_299 = 0x6BL;
    short l_372 = 0xBB73L;
    int i;
    for (i = 0; i < 4; i++)
        l_150[i] = 0UL;
    for (i = 0; i < 5; i++)
        l_154[i] = &g_155;
    for (i = 0; i < 5; i++)
        l_260[i] = 0xE84C65A4133B3414LL;
lbl_292:
    if (p_50)
    {
        int l_171 = (-1L);
        struct S0 *l_180[5] = {&g_41,&g_41,&g_41,&g_41,&g_41};
        int l_195 = (-1L);
        int i;
        for (p_51 = 0; (p_51 <= 3); p_51 += 1)
        {
            struct S0 l_182 = {2009};
            int l_184 = 0x4FEB1527L;
            int i;
            for (p_53 = 3; (p_53 >= 0); p_53 -= 1)
            {
                int *l_156[6];
                int i;
                for (i = 0; i < 6; i++)
                    l_156[i] = &g_89;
                (*g_157) = l_156[0];

                ;
            }
            if ((**g_157))
            {
                int *l_181[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
                int i;
                g_89 &= (*g_147);
            }
            else
            {
                if (p_52)
                    break;
                (*g_90) = l_182;
                (*g_183) = (*g_157);
            }
            for (l_171 = 0; (l_171 <= 3); l_171 += 1)
            {
                l_184 |= ((l_154[0] != &g_155) < 3UL);
            }
        }
        (*g_158) ^= p_51;
        (*g_158) = (safe_lshift_func_int16_t_s_u((l_171 < (safe_mod_func_int32_t_s_s(l_171, func_55(p_54, g_96[1][4][3], g_96[1][0][2], l_171, p_51)))), 13));
        l_195 |= (safe_rshift_func_uint8_t_u_s(g_6[5][1][2], 4));
    }
    else
    {
        unsigned long long l_198 = 0x05BE9AF0AF18DE1ELL;
        int **l_199[4];
        int i;
        for (i = 0; i < 4; i++)
            l_199[i] = &g_158;
        for (l_151 = 0; (l_151 != 45); ++l_151)
        {
            return l_198;


        }
        (*g_158) ^= (!(l_198 & p_51));
    }
lbl_332:
    for (p_54 = 0; (p_54 != 35); p_54 = safe_add_func_uint16_t_u_u(p_54, 1))
    {
        int l_217[6][2][7] = {{{0L,0L,0xDA177585L,0L,0L,0xDA177585L,0L},{0L,7L,7L,0L,7L,7L,0L}},{{7L,0L,7L,7L,0L,7L,7L},{0L,0L,0xDA177585L,0L,0L,0xDA177585L,0L}},{{0L,7L,7L,0L,7L,7L,0L},{7L,0L,7L,7L,0L,7L,7L}},{{0L,0L,0xDA177585L,0L,0L,0xDA177585L,0L},{0L,7L,7L,0L,7L,7L,0L}},{{7L,0L,7L,7L,0L,7L,7L},{0L,0L,0xDA177585L,0L,0L,0xDA177585L,0L}},{{0L,7L,7L,0L,7L,7L,0L},{7L,0L,7L,7L,0L,7L,7L}}};
        struct S0 l_230 = {447};
        int **l_251 = &l_243;
        int i, j, k;
        for (p_50 = 0; (p_50 == (-27)); p_50--)
        {
            return g_89;


        }
        for (p_52 = 15; (p_52 >= 7); p_52 = safe_sub_func_int8_t_s_s(p_52, 2))
        {
            int *l_212 = &g_96[1][1][5];
            struct S0 l_231 = {1297};
            for (p_50 = 5; (p_50 >= 0); p_50 -= 1)
            {
                int l_218 = 0xDC1299E5L;
                struct S0 l_229 = {1849};
                unsigned char l_252 = 7UL;
                int *l_257 = &g_96[1][4][3];
                int i, j;
                if ((((safe_rshift_func_int8_t_s_s((p_50 | (safe_lshift_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s((g_102[p_50][(p_50 + 1)] == (void*)0), (g_41.f0 >= ((l_212 == &g_96[0][1][5]) <= ((g_96[1][4][3] || (safe_mod_func_uint8_t_u_u(g_6[3][1][3], (safe_sub_func_int16_t_s_s((l_150[3] | 1L), g_155.f0))))) == l_217[2][1][6]))))), g_41.f0))), l_218)) <= g_89) <= g_89))
                {
                    for (l_218 = 1; (l_218 >= 0); l_218 -= 1)
                    {
                        int **l_219[9] = {&g_158,&g_158,&l_212,&g_158,&g_158,&l_212,&g_158,&g_158,&l_212};
                        int i;
                        l_212 = (void*)0;

                        ;
                        (*g_220) = &l_154[(l_218 + 2)];

                        ;
                    }
                    (*g_158) = (safe_unary_minus_func_uint16_t_u(p_54));
                    if ((**g_157))
                        continue;
                    for (p_53 = 6; (p_53 >= 0); p_53 -= 1)
                    {
                        int *l_226 = (void*)0;
                        int *l_227 = (void*)0;
                        int *l_228 = &l_217[5][0][5];
                        (*l_228) &= (safe_add_func_int32_t_s_s((**g_183), (&g_89 != &g_96[1][3][3])));
                        (*l_228) ^= 0x75D9914FL;
                        l_230 = l_229;
                    }
                }
                else
                {
                    (*g_90) = (*g_103);
                    if (l_229.f0)
                        continue;
                }
                if (((l_231 , &l_154[4]) == (void*)0))
                {
                    for (g_89 = 5; (g_89 >= 0); g_89 -= 1)
                    {
                        int *l_232[7] = {&l_217[2][1][6],&l_217[2][1][6],&g_96[1][4][3],&l_217[2][1][6],&l_217[2][1][6],&g_96[1][4][3],&l_217[2][1][6]};
                        int **l_233[8][6] = {{&l_232[5],&l_212,&l_232[5],&l_212,&l_232[5],&l_212},{&l_232[5],&l_212,&l_232[5],&l_212,&l_232[5],&l_212},{&l_232[5],&l_212,&l_232[5],&l_212,&l_232[5],&l_212},{&l_232[5],&l_212,&l_232[5],&l_212,&l_232[5],&l_212},{&l_232[5],&l_212,&l_232[5],&l_212,&l_232[5],&l_212},{&l_232[5],&l_212,&l_232[5],&l_212,&l_232[5],&l_212},{&l_232[5],&l_212,&l_232[5],&l_212,&l_232[5],&l_212},{&l_232[5],&l_212,&l_232[5],&l_212,&l_232[5],&l_212}};
                        int i, j;
                        l_218 &= 0L;
                        (*g_183) = (*g_183);
                    }
                    for (p_51 = 0; (p_51 <= 6); p_51 += 1)
                    {
                        unsigned short l_240[7] = {0xC6FDL,0xC6FDL,0xC6FDL,0xC6FDL,0xC6FDL,0xC6FDL,0xC6FDL};
                        int i;
                    }
                }
                else
                {
                    int **l_246 = &g_158;
                    (*g_158) = (**g_157);
                    (*g_158) ^= (l_246 == l_246);
                    l_218 = (safe_rshift_func_int8_t_s_u(((((((safe_lshift_func_int16_t_s_s(g_155.f0, 8)) == g_6[4][0][3]) != (l_251 == &l_243)) , (g_89 | (-4L))) | p_51) , (**l_246)), g_96[1][3][3]));
                    for (p_51 = 0; (p_51 <= 4); p_51 += 1)
                    {
                        (*l_251) = (*g_183);


                        l_257 = ((~(((p_53 < (((0x21L != (**l_246)) & ((*g_90) , (l_252 >= (safe_add_func_uint16_t_u_u(((safe_sub_func_int64_t_s_s((*l_243), g_96[1][4][3])) ^ (((**l_246) , p_52) > (-1L))), 0x589FL))))) < p_53)) & p_52) , 4294967295UL)) , (void*)0);

                        ;
                    }

                    ;
                }

                ;
                l_230 = (*g_90);
            }

            ;
        }
        if ((*g_147))
            continue;
    }
lbl_375:
    (*l_258) = (*g_245);


    if ((((p_51 , (l_259 == (func_55((p_51 , ((void*)0 != (*l_259))), l_260[2], (**l_258), p_54, p_52) , (void*)0))) ^ 0UL) , 0L))
    {
        unsigned short l_263 = 0UL;
        int l_288 = 0x0D9EC731L;
        if (p_54)
        {
            unsigned l_279[3][4][6] = {{{0x3499C1F7L,0x3450612BL,4294967295UL,4294967295UL,0x3450612BL,0x3499C1F7L},{0xC82F1767L,0x3499C1F7L,0xFE0E653EL,0x3450612BL,0xFE0E653EL,0x3499C1F7L},{0xFE0E653EL,0xC82F1767L,4294967295UL,1UL,1UL,4294967295UL},{0xFE0E653EL,0xFE0E653EL,1UL,0x3450612BL,4294967295UL,0x3450612BL}},{{0xC82F1767L,0xFE0E653EL,0xC82F1767L,4294967295UL,1UL,1UL},{0x3499C1F7L,0xC82F1767L,0xC82F1767L,0x3499C1F7L,0xFE0E653EL,0x3450612BL},{0x3450612BL,0x3499C1F7L,1UL,0x3499C1F7L,0x3450612BL,4294967295UL},{0x3499C1F7L,0x3450612BL,4294967295UL,4294967295UL,0x3450612BL,0x3499C1F7L}},{{0xC82F1767L,0x3499C1F7L,0xFE0E653EL,0x3450612BL,0xFE0E653EL,0x3499C1F7L},{0xFE0E653EL,0xC82F1767L,4294967295UL,1UL,1UL,4294967295UL},{0xFE0E653EL,0xFE0E653EL,1UL,0x3450612BL,4294967295UL,0x3450612BL},{0xC82F1767L,0xFE0E653EL,0xC82F1767L,0x3450612BL,4294967295UL,4294967295UL}}};
            int i, j, k;
            for (p_51 = 0; (p_51 > 52); p_51 = safe_add_func_uint64_t_u_u(p_51, 1))
            {
                struct S0 l_278 = {1772};
                short l_287 = 0x7955L;
                int *l_289 = &g_96[1][4][3];
                l_288 |= func_55(l_263, func_55(((safe_mod_func_int8_t_s_s((safe_sub_func_uint16_t_u_u((((safe_mod_func_int64_t_s_s(((safe_mod_func_int8_t_s_s(((safe_add_func_uint16_t_u_u(l_263, (safe_sub_func_int64_t_s_s((p_50 && (safe_sub_func_int16_t_s_s(func_55((l_278 , 0xE3E70061L), l_279[0][1][4], (l_278.f0 >= 0xB40F5E0B1498069FLL), l_263, p_52), g_6[6][1][3]))), l_279[0][3][3])))) , 0L), g_6[2][0][0])) ^ p_54), g_155.f0)) , l_287) <= l_279[1][1][5]), 0x784FL)), l_263)) <= g_155.f0), p_52, g_6[4][0][3], g_155.f0, p_54), g_6[4][0][3], p_53, l_278.f0);
                (*l_258) = l_289;

                ;
                if ((*l_243))
                    break;
                (*l_258) = l_289;
            }
        }
        else
        {
            int l_306[2];
            struct S0 l_312 = {1424};
            int i;
            for (i = 0; i < 2; i++)
                l_306[i] = 0x26FEDE40L;
            (*g_158) = p_50;
            for (l_288 = 0; (l_288 != 15); ++l_288)
            {
                unsigned short l_302 = 1UL;
                struct S0 l_307 = {814};
                int **l_315 = &l_243;
                if (p_50)
                    goto lbl_292;
                for (l_286 = 20; (l_286 != (-26)); --l_286)
                {
                    unsigned char l_305 = 1UL;
                    (**l_259) = ((safe_mod_func_uint8_t_u_u(func_55(((safe_sub_func_uint16_t_u_u(func_55(l_299, g_96[1][4][3], g_6[4][0][3], (((~((safe_rshift_func_int16_t_s_u(l_302, (p_53 & (0xFBF2L != p_50)))) != (g_41.f0 > ((((safe_sub_func_uint32_t_u_u(p_50, g_6[6][1][0])) , g_6[4][0][3]) , p_50) || g_96[1][4][3])))) , l_305) != l_305), p_53), 0x4034L)) , (**l_258)), g_6[2][0][1], l_306[1], g_155.f0, l_302), g_155.f0)) , l_307);
                    for (g_89 = (-23); (g_89 == (-24)); g_89--)
                    {
                        (*g_322) = ((((safe_mod_func_int8_t_s_s(((*l_243) ^ ((((l_312 , 4294967288UL) || ((safe_add_func_uint32_t_u_u(((void*)0 != l_315), ((void*)0 == &g_221))) != (safe_sub_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u((l_312.f0 > (((safe_mod_func_int8_t_s_s(g_96[1][4][3], 1UL)) >= (-1L)) || (**g_245))), p_54)), g_89)))) == (**l_258)) | l_312.f0)), l_312.f0)) , (-1L)) , 0x4C9280EBL) & l_263);
                    }
                    for (p_50 = 4; (p_50 >= 0); p_50 -= 1)
                    {
                        if ((**g_245))
                            break;
                        if (p_52)
                            goto lbl_292;
                        (**l_315) |= 0x58A8DD20L;
                    }
                }
            }
        }
    }
    else
    {
        int *l_324 = (void*)0;
        int *l_326 = &g_96[1][3][3];
        for (l_286 = 0; (l_286 <= 3); l_286 += 1)
        {
            struct S0 l_333 = {1282};
            int l_351[8];
            int i;
            for (i = 0; i < 8; i++)
                l_351[i] = 0x67EE8542L;
            (**l_258) ^= (!p_52);
            for (l_299 = 0; (l_299 <= 3); l_299 += 1)
            {
                unsigned char l_337 = 1UL;
                for (p_50 = 3; (p_50 >= 0); p_50 -= 1)
                {
                    long long l_325 = 0x89BC5D18551CB4CDLL;
                    for (p_54 = 0; (p_54 <= 1); p_54 += 1)
                    {
                        unsigned char l_323 = 0x55L;
                        return l_323;


                    }
                    if (((!18446744073709551615UL) , 0x2D6C3E22L))
                    {
                        (*l_258) = (*g_157);


                        return g_155.f0;


                    }
                    else
                    {
                        if ((*g_147))
                            break;
                    }
                    (*l_258) = l_324;

                    ;
                    (*g_158) &= l_325;
                }


                for (p_51 = 0; (p_51 <= 1); p_51 += 1)
                {
                    struct S0 l_334 = {1014};
                    int *l_381 = &l_351[7];
                    if ((((g_89 , (*g_183)) != l_326) >= ((safe_mod_func_int64_t_s_s(5L, p_53)) , (safe_rshift_func_int8_t_s_s(((0x6DL | g_331) != p_52), 0)))))
                    {
                        int l_340 = 1L;
                        int i, j, k;
                        if (p_51)
                            goto lbl_332;
                        (*l_326) = (((l_333 , (l_334 , (*g_220))) == (void*)0) < (((safe_mod_func_uint8_t_u_u(1UL, l_337)) , ((safe_mod_func_uint32_t_u_u((((0x15L | ((p_52 || l_340) ^ (-2L))) && g_155.f0) , 0xFF04916EL), 0x623D3B36L)) & l_340)) != 0xB122L));
                        (*l_258) = (*g_157);


                        (*l_258) = (void*)0;

                        ;
                    }
                    else
                    {
                        struct S0 ***l_349 = &g_221;
                        int l_350[3][6] = {{0x89EE8977L,1L,1L,0x89EE8977L,0xFA6C8D04L,0xFB1DF407L},{0xFB1DF407L,0x89EE8977L,6L,0x89EE8977L,0xFB1DF407L,1L},{0x89EE8977L,0xFB1DF407L,1L,1L,0xFB1DF407L,0x89EE8977L}};
                        int *l_374 = &g_89;
                        int i, j;
                        if (p_54)
                            break;
                        l_351[7] = ((safe_sub_func_uint64_t_u_u(((((p_51 != (l_333 , g_331)) >= (((safe_sub_func_uint8_t_u_u((3UL < g_155.f0), (safe_add_func_uint16_t_u_u(p_53, (g_41.f0 , (&g_221 == (((safe_mod_func_int32_t_s_s((-1L), 1L)) | 18446744073709551614UL) , l_349))))))) > l_350[0][0]) != l_334.f0)) || 0xE2F2C54B809A07D6LL) && l_333.f0), p_54)) >= g_96[1][4][3]);
                        (*l_374) ^= (safe_sub_func_uint8_t_u_u(p_54, (safe_lshift_func_uint16_t_u_u(((safe_lshift_func_uint16_t_u_s((0L >= (l_337 > (safe_lshift_func_uint16_t_u_u(((void*)0 == &g_221), (g_155.f0 & (safe_mod_func_int64_t_s_s(l_350[0][0], (safe_rshift_func_int8_t_s_u((safe_add_func_int32_t_s_s(p_52, (((safe_sub_func_int8_t_s_s((safe_sub_func_uint32_t_u_u(((safe_rshift_func_uint8_t_u_u(0xA9L, l_334.f0)) , g_41.f0), p_54)), g_41.f0)) , p_54) | l_372))), g_155.f0))))))))), g_373)) == g_6[5][1][4]), g_96[1][4][3]))));
                        if (l_333.f0)
                            goto lbl_375;
                    }
                    if ((safe_sub_func_uint32_t_u_u((p_52 , g_331), (p_52 < l_334.f0))))
                    {
                        (*l_326) |= 5L;
                        (*l_326) |= (g_6[4][0][3] > 1UL);
                        (*l_258) = (*g_157);


                    }
                    else
                    {
                        int *l_380 = &l_351[6];
                        (*g_158) = (safe_rshift_func_int16_t_s_u((p_54 & (8UL <= (l_380 == ((((l_334 , p_53) > (~(((g_331 , 0xDA5FFB03L) >= (l_334 , (((**g_220) != (*g_221)) ^ p_51))) > 1L))) && 0xAFL) , l_381)))), p_50));
                        (*l_381) ^= (**g_183);
                        return g_331;


                    }


                    (*g_158) ^= 0x3FAEA7D2L;
                }
                (*l_258) = (*g_157);


                g_396 |= (safe_add_func_int16_t_s_s((safe_mod_func_int8_t_s_s((0xBB284B5A019C382CLL & (safe_rshift_func_int16_t_s_u(g_6[4][0][3], 9))), func_55(l_337, l_337, p_50, p_50, p_52))), p_53));
            }
        }
    }
    return g_41.f0;


}







static char func_55(int p_56, char p_57, unsigned p_58, unsigned p_59, short p_60)
{
    unsigned long long l_118[8][6][3] = {{{0x07A57FB1E3A2289BLL,0xAFB2D28ECC62B0E7LL,1UL},{1UL,0x26E483898E21F576LL,0x7706B8BA9382BCC5LL},{0x9523B59FD8A59CA4LL,0xAFB2D28ECC62B0E7LL,0x84E00C6155EFB0F2LL},{0UL,0x4997D19F8FA16B15LL,0UL},{0xAFB2D28ECC62B0E7LL,0UL,0x56D7E5A20DB3BB4DLL},{8UL,0x96333BD900286ECFLL,0x1348BD332100D8DALL}},{{0x84E00C6155EFB0F2LL,0x56D7E5A20DB3BB4DLL,18446744073709551608UL},{18446744073709551615UL,18446744073709551615UL,0x3353D154C37BB759LL},{0x84E00C6155EFB0F2LL,1UL,0UL},{8UL,8UL,0x4997D19F8FA16B15LL},{0xAFB2D28ECC62B0E7LL,5UL,18446744073709551614UL},{0UL,0x4D70BF509ED19117LL,8UL}},{{0x9523B59FD8A59CA4LL,0x35FF0F84FEBEC88DLL,0UL},{1UL,0UL,8UL},{0x07A57FB1E3A2289BLL,18446744073709551614UL,18446744073709551614UL},{8UL,18446744073709551615UL,0x4997D19F8FA16B15LL},{18446744073709551607UL,18446744073709551609UL,0UL},{0x4F1AD9D65D8E4666LL,0xBE3BFD9FC31E8507LL,0x3353D154C37BB759LL}},{{0UL,0x9523B59FD8A59CA4LL,18446744073709551608UL},{0x26E483898E21F576LL,0xBE3BFD9FC31E8507LL,0x1348BD332100D8DALL},{0x56D7E5A20DB3BB4DLL,18446744073709551609UL,0x56D7E5A20DB3BB4DLL},{0xBE3BFD9FC31E8507LL,18446744073709551615UL,0UL},{5UL,18446744073709551614UL,0x84E00C6155EFB0F2LL},{0x1348BD332100D8DALL,0UL,0x7706B8BA9382BCC5LL}},{{0UL,0x35FF0F84FEBEC88DLL,1UL},{0xBEA04750EE913E1DLL,1UL,0x4F1AD9D65D8E4666LL},{0UL,0UL,0x9523B59FD8A59CA4LL},{0x7706B8BA9382BCC5LL,18446744073709551615UL,0x17DDF17533B9DB78LL},{18446744073709551609UL,0UL,0UL},{8UL,0x4D70BF509ED19117LL,0UL}},{{0x07A57FB1E3A2289BLL,18446744073709551609UL,0UL},{0x3353D154C37BB759LL,0x17DDF17533B9DB78LL,0x17DDF17533B9DB78LL},{0xAFB2D28ECC62B0E7LL,18446744073709551607UL,0x9523B59FD8A59CA4LL},{0xBE3BFD9FC31E8507LL,0x26E483898E21F576LL,0x4F1AD9D65D8E4666LL},{1UL,18446744073709551608UL,18446744073709551614UL},{0x4F1AD9D65D8E4666LL,8UL,0x1348BD332100D8DALL}},{{5UL,18446744073709551608UL,0x2F46FD790600712ALL},{0x4997D19F8FA16B15LL,0x26E483898E21F576LL,0x4997D19F8FA16B15LL},{18446744073709551608UL,18446744073709551607UL,18446744073709551609UL},{18446744073709551615UL,0x17DDF17533B9DB78LL,0xBEA04750EE913E1DLL},{0x2F46FD790600712ALL,18446744073709551609UL,0x84E00C6155EFB0F2LL},{8UL,0x4D70BF509ED19117LL,0x96333BD900286ECFLL}},{{0x2F46FD790600712ALL,0UL,0x07A57FB1E3A2289BLL},{18446744073709551615UL,18446744073709551615UL,0x26E483898E21F576LL},{18446744073709551608UL,0UL,0UL},{0x4997D19F8FA16B15LL,1UL,18446744073709551615UL},{5UL,1UL,0x56D7E5A20DB3BB4DLL},{0x4F1AD9D65D8E4666LL,0x4997D19F8FA16B15LL,18446744073709551615UL}}};
    struct S0 *l_121 = &g_41;
    int l_145 = 0x247F44F2L;
    int *l_148 = (void*)0;
    int i, j, k;
    if (((((p_59 , p_56) == (l_118[3][1][2] && (((safe_rshift_func_int8_t_s_u((l_118[3][1][2] , (((*g_90) , l_121) != l_121)), g_6[3][0][6])) , &g_89) != (void*)0))) , 0x4287L) && g_41.f0))
    {
        for (p_56 = 0; (p_56 >= 15); p_56 = safe_add_func_int32_t_s_s(p_56, 6))
        {
            return l_118[3][1][2];
        }
    }
    else
    {
        struct S0 **l_139 = &l_121;
        int l_146 = 0x524414FCL;
        for (p_57 = 0; (p_57 != (-9)); p_57 = safe_sub_func_uint8_t_u_u(p_57, 7))
        {
            short l_137 = 0x07D2L;
            struct S0 l_143 = {1533};
            for (p_56 = 0; (p_56 <= 19); ++p_56)
            {
                int l_136 = 0L;
                for (p_60 = 0; (p_60 >= (-10)); p_60 = safe_sub_func_uint8_t_u_u(p_60, 6))
                {
                    for (p_59 = (-30); (p_59 < 16); p_59 = safe_add_func_int64_t_s_s(p_59, 6))
                    {
                        struct S0 *l_132 = &g_41;
                        struct S0 **l_133 = &l_132;
                        (*l_133) = l_132;
                    }
                    for (g_89 = 0; (g_89 < (-16)); --g_89)
                    {
                        int *l_138 = &l_136;
                        l_137 |= l_136;
                        (*l_138) = 0L;
                    }
                }
                if (l_137)
                    continue;
                for (l_136 = 0; (l_136 <= 1); l_136 += 1)
                {
                    for (p_59 = 0; (p_59 <= 1); p_59 += 1)
                    {
                        struct S0 ***l_140 = &l_139;
                        int i, j, k;
                        if (g_96[l_136][(l_136 + 4)][p_59])
                            break;
                        (*l_140) = l_139;
                        return g_41.f0;
                    }
                    for (l_137 = 0; l_137 < 8; l_137 += 1)
                    {
                        for (p_58 = 0; p_58 < 6; p_58 += 1)
                        {
                            for (p_60 = 0; p_60 < 3; p_60 += 1)
                            {
                                l_118[l_137][p_58][p_60] = 3UL;
                            }
                        }
                    }
                    if (p_58)
                        break;
                    for (p_59 = (-15); (p_59 >= 42); p_59 = safe_add_func_int16_t_s_s(p_59, 1))
                    {
                        int *l_144[9] = {&g_96[1][4][3],&g_96[1][4][3],&g_96[1][4][3],&g_96[1][4][3],&g_96[1][4][3],&g_96[1][4][3],&g_96[1][4][3],&g_96[1][4][3],&g_96[1][4][3]};
                        int i;
                        (**l_139) = (*g_90);
                        (*l_121) = l_143;
                        l_145 ^= 9L;
                    }
                }
                return g_6[4][0][3];
            }
        }
        (*g_147) &= l_146;
    }
    (*g_149) ^= l_118[5][3][1];
    return g_6[4][0][3];
}







static long long func_61(int p_62, unsigned short p_63, int p_64, unsigned char p_65)
{
    char l_80 = 0xEEL;
    long long l_85 = (-1L);
    unsigned short l_86 = 0xFCEBL;
    struct S0 l_87 = {1738};
    unsigned short l_101 = 0UL;
    long long l_114[1];
    int *l_117 = (void*)0;
    int i;
    for (i = 0; i < 1; i++)
        l_114[i] = 0xDDFF55CBB879D152LL;
    (*g_88) ^= ((~(251UL | (safe_lshift_func_int16_t_s_s((~(p_65 | ((g_6[4][0][3] , (((((safe_add_func_int64_t_s_s((((l_80 , (g_6[4][0][3] & (((((p_65 , (safe_add_func_uint16_t_u_u((safe_mod_func_int16_t_s_s((((((l_80 > (((g_6[4][0][3] | ((l_80 > p_63) & l_80)) && p_64) & l_85)) , g_6[1][0][1]) < g_41.f0) != 0xCEF8C34F7C350235LL) > l_86), p_65)), l_86))) <= l_80) , l_87) , 18446744073709551615UL) , g_6[7][0][6]))) > l_87.f0) | l_80), 0UL)) , 0xDEL) >= l_80) | 0xEDL) ^ g_6[4][0][3])) & p_63))), 15)))) > 6UL);
lbl_105:
    (*g_90) = l_87;
    for (l_80 = 0; (l_80 <= (-30)); l_80--)
    {
        unsigned l_93 = 2UL;
        unsigned l_94 = 0x2B79F9BFL;
        int *l_95 = &g_96[1][4][3];
        (*l_95) ^= ((*g_88) <= (l_86 , (((((l_93 == (l_86 == p_65)) >= (l_85 != (0xA69D9FC0A4C35ED1LL & (l_94 <= g_89)))) || p_63) ^ p_62) ^ p_63)));
    }
    if ((l_86 == (safe_rshift_func_uint8_t_u_u(g_89, 4))))
    {
        unsigned l_99 = 0xEEDE604AL;
        int *l_100 = &g_96[0][2][3];
        struct S0 *l_110 = &g_41;
        if (((g_6[4][0][3] < 0x2CL) ^ (((l_99 <= l_99) , l_86) <= ((((&g_96[0][5][4] != l_100) > (0L == (p_62 , l_101))) | g_41.f0) | p_63))))
        {
            (*l_100) &= 0x32EE097EL;
            if (p_63)
                goto lbl_104;
lbl_104:
            (*g_103) = l_87;
            if (l_80)
                goto lbl_105;
            p_62 &= (*g_88);
        }
        else
        {
            int l_113 = 0x9C91ED13L;
            (*l_100) = (((((((safe_lshift_func_uint16_t_u_s(l_101, (safe_sub_func_uint64_t_u_u(0UL, (&l_87 != l_110))))) >= ((safe_lshift_func_int8_t_s_u(g_89, l_113)) != (+(((((l_114[0] , (+4294967295UL)) , ((6L | (*l_100)) , g_6[4][0][3])) , g_96[0][4][5]) || 0x1A8AL) , 0UL)))) < 18446744073709551615UL) , l_114[0]) ^ (*l_100)) == 0UL) , l_86);
            (*l_100) &= ((safe_rshift_func_uint16_t_u_s(l_113, 1)) , 0L);
        }
    }
    else
    {
        g_88 = l_117;

        ;
    }

    ;
    return g_96[1][1][1];
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 9; k++)
            {
                transparent_crc(g_6[i][j][k], "g_6[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_41.f0, "g_41.f0", print_hash_value);
    transparent_crc(g_89, "g_89", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_96[i][j][k], "g_96[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_155.f0, "g_155.f0", print_hash_value);
    transparent_crc(g_331, "g_331", print_hash_value);
    transparent_crc(g_373, "g_373", print_hash_value);
    transparent_crc(g_396, "g_396", print_hash_value);
    transparent_crc(g_454, "g_454", print_hash_value);
    transparent_crc(g_503, "g_503", print_hash_value);
    transparent_crc(g_507, "g_507", print_hash_value);
    transparent_crc(g_532, "g_532", print_hash_value);
    transparent_crc(g_616, "g_616", print_hash_value);
    transparent_crc(g_660, "g_660", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(g_715[i][j][k], "g_715[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_716.f0, "g_716.f0", print_hash_value);
    transparent_crc(g_723, "g_723", print_hash_value);
    transparent_crc(g_761, "g_761", print_hash_value);
    transparent_crc(g_1153, "g_1153", print_hash_value);
    transparent_crc(g_1180, "g_1180", print_hash_value);
    transparent_crc(g_1336, "g_1336", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_1401[i], "g_1401[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1492, "g_1492", print_hash_value);
    transparent_crc(g_1551.f0, "g_1551.f0", print_hash_value);
    transparent_crc(g_1595.f0, "g_1595.f0", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
