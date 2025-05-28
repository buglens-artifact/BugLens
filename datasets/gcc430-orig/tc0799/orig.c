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



static unsigned g_10 = 0xC9F3690FL;
static int g_23[9][7][4] = {{{0x0E426067L,7L,0x251C6076L,(-1L)},{0L,7L,(-1L),0x5417612DL},{0x7BC35240L,(-8L),(-8L),0x7BC35240L},{0x0E426067L,0xF451D52AL,(-8L),(-1L)},{0x7BC35240L,0x9EA4D59FL,(-1L),0L},{0L,(-8L),0x251C6076L,0L},{0x0E426067L,0x9EA4D59FL,0xFCC1031CL,(-1L)}},{{0x5417612DL,0xF451D52AL,(-1L),0x7BC35240L},{0x5417612DL,(-8L),0xFCC1031CL,0x5417612DL},{0x0E426067L,7L,0x251C6076L,(-1L)},{0L,7L,(-1L),0x5417612DL},{0x7BC35240L,(-8L),0xF0BD907CL,(-1L)},{0x73637828L,(-8L),0xF0BD907CL,0x185F1871L},{(-1L),0x251C6076L,7L,0x0E426067L}},{{0x0E426067L,0xF0BD907CL,(-1L),0x0E426067L},{0x73637828L,0x251C6076L,1L,0x185F1871L},{(-3L),(-8L),7L,(-1L)},{(-3L),0xF0BD907CL,1L,(-3L)},{0x73637828L,0xFCC1031CL,(-1L),0x185F1871L},{0x0E426067L,0xFCC1031CL,7L,(-3L)},{(-1L),0xF0BD907CL,0xF0BD907CL,(-1L)}},{{0x73637828L,(-8L),0xF0BD907CL,0x185F1871L},{(-1L),0x251C6076L,7L,0x0E426067L},{0x0E426067L,0xF0BD907CL,(-1L),0x0E426067L},{0x73637828L,0x251C6076L,1L,0x185F1871L},{(-3L),(-8L),7L,(-1L)},{(-3L),0xF0BD907CL,1L,(-3L)},{0x73637828L,0xFCC1031CL,(-1L),0x185F1871L}},{{0x0E426067L,0xFCC1031CL,7L,(-3L)},{(-1L),0xF0BD907CL,0xF0BD907CL,(-1L)},{0x73637828L,(-8L),0xF0BD907CL,0x185F1871L},{(-1L),0x251C6076L,7L,0x0E426067L},{0x0E426067L,0xF0BD907CL,(-1L),0x0E426067L},{0x73637828L,0x251C6076L,1L,0x185F1871L},{(-3L),(-8L),7L,(-1L)}},{{(-3L),(-1L),0xF0BD907CL,0x0E426067L},{0x185F1871L,(-8L),1L,(-4L)},{(-1L),(-8L),0xF451D52AL,0x0E426067L},{(-3L),(-1L),(-1L),(-3L)},{0x185F1871L,0x251C6076L,(-1L),(-4L)},{(-3L),0xFCC1031CL,0xF451D52AL,(-1L)},{(-1L),(-1L),1L,(-1L)}},{{0x185F1871L,0xFCC1031CL,0xF0BD907CL,(-4L)},{0x0E426067L,0x251C6076L,0xF451D52AL,(-3L)},{0x0E426067L,(-1L),0xF0BD907CL,0x0E426067L},{0x185F1871L,(-8L),1L,(-4L)},{(-1L),(-8L),0xF451D52AL,0x0E426067L},{(-3L),(-1L),(-1L),(-3L)},{0x185F1871L,0x251C6076L,(-1L),(-4L)}},{{(-3L),0xFCC1031CL,0xF451D52AL,(-1L)},{(-1L),(-1L),1L,(-1L)},{0x185F1871L,0xFCC1031CL,0xF0BD907CL,(-4L)},{0x0E426067L,0x251C6076L,0xF451D52AL,(-3L)},{0x0E426067L,(-1L),0xF0BD907CL,0x0E426067L},{0x185F1871L,(-8L),1L,(-4L)},{(-1L),(-8L),0xF451D52AL,0x0E426067L}},{{(-3L),(-1L),(-1L),(-3L)},{0x185F1871L,0x251C6076L,(-1L),(-4L)},{(-3L),0xFCC1031CL,0xF451D52AL,(-1L)},{(-1L),7L,0xF451D52AL,0x185F1871L},{0x5417612DL,1L,0x9EA4D59FL,0L},{0x73637828L,(-1L),(-8L),(-4L)},{0x73637828L,7L,0x9EA4D59FL,0x73637828L}}};
static short g_51 = (-1L);
static int g_69[3] = {2L,2L,2L};
static int *g_68[4] = {&g_23[4][0][0],&g_23[4][0][0],&g_23[4][0][0],&g_23[4][0][0]};
static unsigned g_75 = 3UL;
static short g_78[10][6][4] = {{{0x2F2EL,0x1F98L,0x2F2EL,0x1F98L},{0x2F2EL,0x1F98L,0x2F2EL,0x1F98L},{0x2F2EL,0x1F98L,0x2F2EL,0x1F98L},{0x2F2EL,0x1F98L,0x2F2EL,0x1F98L},{0x2F2EL,0x1F98L,0x2F2EL,0x1F98L},{0x2F2EL,0x1F98L,0x2F2EL,0x1F98L}},{{0x2F2EL,0x1F98L,0x2F2EL,0x1F98L},{0x2F2EL,0x1F98L,0x2F2EL,0x1F98L},{0x2F2EL,0x1F98L,0x2F2EL,0x1F98L},{0x2F2EL,0x1F98L,0x2F2EL,0x1F98L},{0x2F2EL,0x1F98L,0x2F2EL,0x1F98L},{0x2F2EL,0x1F98L,0x2F2EL,0x1F98L}},{{0x2F2EL,0x1F98L,0x2F2EL,0x1F98L},{0x2F2EL,0x1F98L,0x2F2EL,0x1F98L},{0x2F2EL,0x1F98L,0x2F2EL,0x1F98L},{0x2F2EL,0x1F98L,0x2F2EL,0x1F98L},{0x2F2EL,0x1F98L,0x2F2EL,0x1F98L},{0x2F2EL,0x1F98L,0x2F2EL,0x1F98L}},{{0x2F2EL,0x1F98L,0x2F2EL,0x1F98L},{0x2F2EL,0x1F98L,0x2F2EL,0x1F98L},{0x2F2EL,0x1F98L,0x2F2EL,0x1F98L},{0x2F2EL,0x1F98L,0x2F2EL,0x1F98L},{0x2F2EL,0x1F98L,0x2F2EL,0x1F98L},{0x2F2EL,0x1F98L,0x2F2EL,0x1F98L}},{{0x2F2EL,0x1F98L,0x2F2EL,0x1F98L},{0x2F2EL,0x1F98L,0x2F2EL,0x1F98L},{0x2F2EL,0x1F98L,0x2F2EL,0x1F98L},{0x2F2EL,0x1F98L,0x2F2EL,0x1F98L},{0x2F2EL,0x1F98L,0x2F2EL,0x1F98L},{0x2F2EL,0x1F98L,0x2F2EL,0x1F98L}},{{0x2F2EL,0x1F98L,0x2F2EL,0x1F98L},{0x2F2EL,0x1F98L,0x2F2EL,0x1F98L},{0x2F2EL,0x1F98L,0x2F2EL,0x1F98L},{0x2F2EL,0x1F98L,0x2F2EL,0x1F98L},{0x2F2EL,0x1F98L,0x2F2EL,0x1F98L},{0x2F2EL,0x1F98L,0x2F2EL,0x1F98L}},{{0x2F2EL,0x1F98L,0x2F2EL,0x1F98L},{0x2F2EL,0x1F98L,0x2F2EL,0x1F98L},{0x2F2EL,0x1F98L,0x2F2EL,0x1F98L},{0x2F2EL,0x1F98L,0x2F2EL,0x1F98L},{0x2F2EL,0x1F98L,0x2F2EL,0x1F98L},{0x2F2EL,0x1F98L,0x2F2EL,0x1F98L}},{{0x2F2EL,0x1F98L,0x2F2EL,0x1F98L},{0x2F2EL,0x1F98L,0x2F2EL,0x1F98L},{0x2F2EL,0x1F98L,0x2F2EL,0x1F98L},{0x2F2EL,0x1F98L,0x2F2EL,0x1F98L},{0x2F2EL,0x1F98L,0x2F2EL,0x1F98L},{0x2F2EL,0x1F98L,0x2F2EL,0x1F98L}},{{0x2F2EL,0x1F98L,0x2F2EL,0x1F98L},{0x2F2EL,0x1F98L,0x2F2EL,0x1F98L},{0x2F2EL,0x1F98L,0x2F2EL,0x1F98L},{0x2F2EL,0x1F98L,0x2F2EL,0x1F98L},{0x2F2EL,0x1F98L,0x2F2EL,0x1F98L},{0x2F2EL,0x1F98L,0x2F2EL,0x1F98L}},{{0x2F2EL,0x1F98L,0x2F2EL,0x1F98L},{0x2F2EL,0x1F98L,0x2F2EL,0x1F98L},{0x2F2EL,0x1F98L,0x2F2EL,0x1F98L},{0x2F2EL,0x1F98L,0x2F2EL,0x1F98L},{0x2F2EL,0x1F98L,0x2F2EL,0x1F98L},{0x2F2EL,0x1F98L,0x2F2EL,0x1F98L}}};
static short *g_103 = &g_78[3][5][1];
static short **g_102 = &g_103;
static short ***g_101 = &g_102;
static long long g_107 = 0L;
static char g_116 = (-10L);
static unsigned *g_139[9][6][4] = {{{&g_10,&g_75,&g_75,(void*)0},{&g_75,(void*)0,&g_10,(void*)0},{(void*)0,&g_10,&g_10,&g_75},{(void*)0,&g_10,(void*)0,(void*)0},{&g_75,(void*)0,&g_75,(void*)0},{&g_75,&g_75,(void*)0,(void*)0}},{{&g_75,(void*)0,&g_75,&g_10},{&g_10,&g_10,&g_10,(void*)0},{(void*)0,(void*)0,&g_75,(void*)0},{&g_75,(void*)0,&g_75,(void*)0},{&g_75,(void*)0,&g_10,(void*)0},{&g_75,&g_10,&g_75,&g_10}},{{&g_10,(void*)0,&g_10,(void*)0},{&g_10,&g_75,&g_75,(void*)0},{&g_75,(void*)0,&g_10,&g_10},{&g_75,&g_75,&g_75,&g_75},{&g_75,&g_75,&g_75,&g_10},{(void*)0,(void*)0,&g_10,(void*)0}},{{&g_10,&g_75,&g_75,(void*)0},{&g_75,(void*)0,&g_75,&g_10},{&g_10,&g_10,&g_10,(void*)0},{(void*)0,(void*)0,&g_75,(void*)0},{&g_75,(void*)0,&g_75,(void*)0},{&g_75,(void*)0,&g_10,(void*)0}},{{&g_75,&g_10,&g_75,&g_10},{&g_10,(void*)0,&g_10,(void*)0},{&g_10,&g_75,&g_75,(void*)0},{&g_75,(void*)0,&g_10,&g_10},{&g_75,&g_75,&g_75,&g_75},{&g_75,&g_75,&g_75,(void*)0}},{{&g_75,&g_10,&g_10,(void*)0},{&g_10,&g_10,(void*)0,&g_10},{&g_10,(void*)0,(void*)0,&g_75},{&g_10,(void*)0,&g_10,(void*)0},{&g_75,&g_10,&g_10,&g_10},{&g_10,&g_10,&g_75,&g_10}},{{(void*)0,&g_10,&g_75,(void*)0},{(void*)0,(void*)0,&g_75,&g_75},{&g_75,(void*)0,(void*)0,&g_10},{&g_75,&g_10,&g_75,(void*)0},{(void*)0,&g_10,&g_75,(void*)0},{(void*)0,(void*)0,&g_75,&g_10}},{{&g_10,(void*)0,&g_10,(void*)0},{&g_75,&g_10,&g_10,(void*)0},{&g_10,&g_10,(void*)0,&g_10},{&g_10,(void*)0,(void*)0,&g_75},{&g_10,(void*)0,&g_10,(void*)0},{&g_75,&g_10,&g_10,&g_10}},{{&g_10,&g_10,&g_75,&g_10},{(void*)0,&g_10,&g_75,(void*)0},{(void*)0,(void*)0,&g_75,&g_75},{&g_75,(void*)0,(void*)0,&g_10},{&g_75,&g_10,&g_75,(void*)0},{(void*)0,&g_10,&g_75,(void*)0}}};
static unsigned **g_138 = &g_139[1][5][1];
static unsigned char g_154 = 0x6EL;
static int **g_174 = &g_68[1];
static short *g_188 = &g_51;
static unsigned short g_193 = 65535UL;
static unsigned **g_222 = &g_139[0][1][0];
static unsigned ***g_221[10] = {&g_222,&g_222,&g_222,&g_222,&g_222,&g_222,&g_222,&g_222,&g_222,&g_222};
static unsigned short *g_237 = &g_193;
static unsigned short **g_236 = &g_237;
static unsigned short g_263 = 0x407EL;
static unsigned long long g_286 = 0xFAAC60DA332FD426LL;
static int *g_294[10][2] = {{&g_23[4][0][0],&g_69[0]},{&g_23[4][0][0],&g_69[0]},{&g_23[4][0][0],&g_69[0]},{&g_23[4][0][0],&g_69[0]},{&g_23[4][0][0],&g_69[0]},{&g_23[4][0][0],&g_69[0]},{&g_23[4][0][0],&g_69[0]},{&g_23[4][0][0],&g_69[0]},{&g_23[4][0][0],&g_69[0]},{&g_23[4][0][0],&g_69[0]}};
static int *g_323[2] = {(void*)0,(void*)0};
static int g_362 = 0x4D76916EL;
static int *g_444[7][3][1] = {{{(void*)0},{(void*)0},{&g_362}},{{&g_69[0]},{&g_362},{(void*)0}},{{(void*)0},{&g_362},{&g_69[0]}},{{&g_362},{(void*)0},{(void*)0}},{{&g_362},{&g_69[0]},{&g_362}},{{(void*)0},{(void*)0},{&g_362}},{{&g_69[0]},{&g_362},{(void*)0}}};
static unsigned g_501 = 18446744073709551615UL;
static int g_502 = 0x6E4435F6L;



static unsigned long long func_1(void);
static int * func_2(char p_3, unsigned short p_4, int p_5);
static int * func_12(short p_13, unsigned long long p_14, short p_15, int p_16);
static short func_17(int * p_18, int * p_19, int * p_20, unsigned char p_21);
static int * func_24(int * p_25, int p_26, unsigned char p_27, int * p_28, int * p_29);
static int * func_30(int * p_31, int * p_32, char p_33, unsigned char p_34);
static int * func_35(unsigned short p_36, int * p_37, unsigned char p_38);
static int * func_44(int * p_45, unsigned short p_46);
static int func_60(int * p_61);
static int * func_62(int * p_63, int * p_64, short * p_65, short * p_66);
static unsigned long long func_1(void)
{
    char l_11 = (-9L);
    int **l_448 = &g_323[1];
    long long l_449 = 0xB8F442A86003ACB5LL;
    int *l_450 = &g_69[1];
    int *l_451 = &g_23[2][4][0];
    unsigned char *l_452 = &g_154;
    int ***l_465[9][10][2] = {{{(void*)0,(void*)0},{(void*)0,(void*)0},{&g_174,(void*)0},{&l_448,&l_448},{&l_448,(void*)0},{&g_174,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{&g_174,&g_174},{&g_174,(void*)0}},{{(void*)0,(void*)0},{&l_448,(void*)0},{(void*)0,&l_448},{&g_174,&g_174},{&l_448,(void*)0},{&l_448,&l_448},{&g_174,(void*)0},{(void*)0,(void*)0},{&l_448,&g_174},{&g_174,(void*)0}},{{(void*)0,(void*)0},{&l_448,&g_174},{(void*)0,&l_448},{&l_448,&g_174},{&l_448,&g_174},{&g_174,&l_448},{&g_174,(void*)0},{&g_174,&l_448},{&l_448,(void*)0},{(void*)0,&l_448}},{{(void*)0,(void*)0},{&g_174,(void*)0},{(void*)0,&l_448},{(void*)0,(void*)0},{&l_448,&l_448},{&g_174,(void*)0},{&g_174,&l_448},{&g_174,&g_174},{&l_448,&g_174},{&l_448,&l_448}},{{(void*)0,&g_174},{&l_448,(void*)0},{(void*)0,&g_174},{&g_174,&g_174},{(void*)0,&l_448},{(void*)0,&g_174},{&l_448,(void*)0},{&g_174,(void*)0},{&g_174,&l_448},{&l_448,&l_448}},{{(void*)0,(void*)0},{(void*)0,&g_174},{(void*)0,&g_174},{(void*)0,(void*)0},{&g_174,&l_448},{(void*)0,(void*)0},{&g_174,&g_174},{&g_174,&g_174},{&g_174,&l_448},{&g_174,&g_174}},{{&g_174,&g_174},{&g_174,(void*)0},{(void*)0,&l_448},{&g_174,(void*)0},{(void*)0,&g_174},{(void*)0,&g_174},{(void*)0,(void*)0},{(void*)0,&l_448},{&l_448,(void*)0},{(void*)0,&g_174}},{{(void*)0,&l_448},{(void*)0,&g_174},{(void*)0,&g_174},{(void*)0,&l_448},{(void*)0,&g_174},{&l_448,(void*)0},{(void*)0,&g_174},{&g_174,&g_174},{(void*)0,(void*)0},{&l_448,(void*)0}},{{(void*)0,&l_448},{&g_174,&l_448},{&g_174,(void*)0},{(void*)0,&g_174},{(void*)0,(void*)0},{(void*)0,(void*)0},{&g_174,(void*)0},{(void*)0,(void*)0},{(void*)0,&g_174},{(void*)0,(void*)0}}};
    int ****l_464 = &l_465[8][4][0];
    unsigned **l_489 = &g_139[1][5][1];
    unsigned short l_518 = 0xEF39L;
    short **l_523 = &g_188;
    int *l_578 = &g_69[0];
    unsigned l_592 = 0x064BC4B1L;
    unsigned long long *l_609 = &g_286;
    unsigned l_622[6][5] = {{0x63DCFED6L,0x63DCFED6L,0x63DCFED6L,0x63DCFED6L,0x63DCFED6L},{4294967293UL,4294967290UL,4294967293UL,4294967290UL,4294967293UL},{0x63DCFED6L,0x63DCFED6L,0x63DCFED6L,0x63DCFED6L,0x63DCFED6L},{4294967293UL,4294967290UL,4294967293UL,4294967290UL,4294967293UL},{0x63DCFED6L,0x63DCFED6L,0x63DCFED6L,0x63DCFED6L,0x63DCFED6L},{4294967293UL,4294967290UL,4294967293UL,4294967290UL,4294967293UL}};
    int i, j, k;
    (*l_448) = func_2((safe_div_func_uint32_t_u_u((safe_div_func_int64_t_s_s(g_10, l_11)), 1UL)), l_11, g_10);


    ;
    ;

    (*l_451) = ((*l_450) = l_449);
    if (((*l_450) = ((l_452 = &g_154) != &g_154)))
    {
        long long *l_461 = &l_449;
        int l_466 = 0x10BE3B38L;
        int *l_468 = (void*)0;
        short *l_474 = &g_51;
        short l_513[3];
        int *l_522 = &g_502;
        long long l_541 = 1L;
        short l_542 = 1L;
        unsigned l_558[3][8] = {{0x91AA6152L,0x0ED63285L,0x91AA6152L,0x91AA6152L,0x0ED63285L,0x91AA6152L,0x91AA6152L,0x0ED63285L},{0x0ED63285L,0x91AA6152L,0x91AA6152L,0x0ED63285L,0x91AA6152L,0x91AA6152L,0x0ED63285L,0x91AA6152L},{0x0ED63285L,0x0ED63285L,18446744073709551614UL,0x0ED63285L,0x0ED63285L,18446744073709551614UL,0x91AA6152L,0x91AA6152L}};
        int l_576 = 0xB55CC886L;
        int *l_598 = &g_69[0];
        int i, j;
        for (i = 0; i < 3; i++)
            l_513[i] = 0x7CBDL;
        if ((1UL & ((safe_lshift_func_int16_t_s_u((safe_mod_func_uint32_t_u_u((g_107 < (((safe_sub_func_int64_t_s_s(((*l_461) = (safe_mod_func_uint8_t_u_u(g_286, g_263))), func_60(&g_69[1]))) && func_60(&g_23[4][0][0])) <= (safe_rshift_func_uint16_t_u_s(((void*)0 != l_464), (***g_101))))), l_466)), 6)) <= l_466)))
        {
            short l_467 = 0L;
            int *l_492 = (void*)0;
            int *l_544 = &g_69[2];
            unsigned long long *l_596 = &g_286;
            unsigned long long **l_595 = &l_596;
            (*l_448) = l_468;
            for (g_116 = 0; (g_116 != 29); ++g_116)
            {
                (*g_174) = (void*)0;
            }
            for (l_467 = 10; (l_467 != (-19)); l_467 = safe_sub_func_uint8_t_u_u(l_467, 7))
            {
                unsigned char l_484 = 0xEEL;
                unsigned **l_490[7] = {&g_139[5][0][3],(void*)0,&g_139[5][0][3],&g_139[5][0][3],(void*)0,&g_139[5][0][3],&g_139[5][0][3]};
                int *l_491 = &g_23[4][0][0];
                int l_499 = 0x817A4A9DL;
                unsigned l_509 = 1UL;
                int *l_579 = &g_23[4][0][0];
                int i;
                if ((*l_451))
                {
                    int *l_473 = &g_69[1];
                    for (g_154 = 0; (g_154 <= 3); g_154 += 1)
                    {
                        (*l_451) = l_466;
                    }
                    (*l_448) = func_62(&g_23[4][0][0], l_473, l_474, ((*g_102) = (**g_101)));
                }
                else
                {
                    unsigned ****l_475 = &g_221[2];
                    unsigned ****l_477 = &g_221[5];
                    unsigned *****l_476 = &l_477;
                    int l_493 = (-1L);
                    int *l_500 = &l_499;
                    if (((*l_451) = ((l_475 != ((*l_476) = (void*)0)) < l_467)))
                    {
                        unsigned short l_498[7][8] = {{0UL,65528UL,0UL,0UL,1UL,1UL,0UL,0UL},{65528UL,65528UL,1UL,0x861EL,0xA639L,0x861EL,1UL,65528UL},{65528UL,0UL,0UL,1UL,1UL,0UL,0UL,65528UL},{0UL,0UL,65528UL,0x861EL,65528UL,0UL,0UL,0UL},{0UL,0x861EL,0UL,0UL,0x861EL,0UL,1UL,0UL},{0x861EL,0UL,1UL,0UL,0x861EL,0UL,0UL,0x861EL},{0UL,0UL,0UL,0UL,65528UL,0x861EL,65528UL,0UL}};
                        int i, j;
                        (*g_174) = l_492;
                    }
                    else
                    {
                        unsigned l_510[2][3][5] = {{{0UL,18446744073709551615UL,0x84C5DAD1L,0x84C5DAD1L,18446744073709551615UL},{0UL,18446744073709551615UL,0x84C5DAD1L,0x84C5DAD1L,18446744073709551615UL},{0UL,18446744073709551615UL,0x84C5DAD1L,0x84C5DAD1L,18446744073709551615UL}},{{0UL,18446744073709551615UL,0x84C5DAD1L,0x84C5DAD1L,18446744073709551615UL},{0UL,18446744073709551615UL,0x84C5DAD1L,0x84C5DAD1L,18446744073709551615UL},{0UL,18446744073709551615UL,0x84C5DAD1L,0x84C5DAD1L,18446744073709551615UL}}};
                        unsigned short *l_521 = &g_263;
                        int i, j, k;
                        (*l_491) = (safe_rshift_func_uint16_t_u_u((safe_add_func_uint64_t_u_u(((l_474 != (void*)0) && g_69[0]), (safe_rshift_func_uint8_t_u_u(l_509, ((*l_452) = l_510[1][0][1]))))), (g_23[3][5][3] > ((*l_451) ^ (((*l_500) = (safe_div_func_int8_t_s_s((((*g_237) = ((((*l_500) < (*l_491)) != (*l_491)) ^ l_513[0])) ^ 1L), g_69[0]))) ^ l_513[0])))));
                        (*l_448) = func_35(((*l_521) = (safe_sub_func_uint16_t_u_u((!(l_518 = (safe_mod_func_int32_t_s_s((*l_491), (*l_500))))), ((*g_237) = (safe_div_func_uint16_t_u_u((*l_500), func_60(&l_466))))))), l_522, g_23[4][0][0]);
                    }

                    ;
                }
            }



            (*l_448) = l_492;
        }
        else
        {
            int *l_597 = &g_23[8][0][1];
            (*g_174) = l_597;
        }



        (*g_174) = ((*l_448) = l_598);
    }
    else
    {
        short ***l_603 = (void*)0;
        short ***l_604 = (void*)0;
        short ***l_605 = &l_523;
        long long l_606[9][6][4] = {{{0x4968D74341144AEBLL,0x5111BC94BA48F854LL,0x95784320228DEF0CLL,0x0612D27825520998LL},{0xA1B6B604E4BC1600LL,0x8E749CEDFAB1147BLL,0x599DC1D6468E7D10LL,0x3CEBF29FDE2EDCB7LL},{0x0612D27825520998LL,(-1L),0xB31842482A9F16BALL,0x9F9D6A897D877B9BLL},{1L,0L,0x3CEBF29FDE2EDCB7LL,0x0FA42E86FB179EA9LL},{(-5L),0xA1B6B604E4BC1600LL,1L,(-7L)},{8L,0xCF4D680AB066457BLL,0x9F2C553AE4421EA4LL,0xCF4D680AB066457BLL}},{{3L,0L,0L,0x5204567D09328D4FLL},{0x8E749CEDFAB1147BLL,0x62E26A32E214D462LL,9L,8L},{1L,0x3AFB673E63186CC9LL,0xB6B958F9A38609F8LL,0x9F2C553AE4421EA4LL},{1L,0xB31842482A9F16BALL,9L,0x4968D74341144AEBLL},{0x8E749CEDFAB1147BLL,0x9F2C553AE4421EA4LL,0L,2L},{3L,0xDAE037AD1B5A7920LL,0x9F2C553AE4421EA4LL,0x599DC1D6468E7D10LL}},{{8L,(-3L),1L,1L},{(-5L),1L,0x3CEBF29FDE2EDCB7LL,3L},{1L,8L,0xB31842482A9F16BALL,0xDCC1DE6D6BE06A0BLL},{0x0612D27825520998LL,0x68D268A4C9F2352ALL,0x599DC1D6468E7D10LL,0xB44080DAADBAFFEBLL},{0xA1B6B604E4BC1600LL,3L,0x95784320228DEF0CLL,1L},{0x4968D74341144AEBLL,0x5530D01B6D3D1242LL,0x68D268A4C9F2352ALL,0x3AFB673E63186CC9LL}},{{1L,0x9F9D6A897D877B9BLL,(-1L),(-6L)},{(-10L),3L,0x283A9E9F3121299ALL,(-5L)},{(-1L),1L,1L,(-1L)},{0x3AFB673E63186CC9LL,0xADF7D790D501E037LL,0x9EE5D7E4FEBED2FFLL,0x62E26A32E214D462LL},{0xB44080DAADBAFFEBLL,1L,(-10L),0x5357627B9C38BE8CLL},{9L,0L,0xDCC1DE6D6BE06A0BLL,0xDCC1DE6D6BE06A0BLL}},{{0L,(-1L),3L,7L},{0L,3L,3L,(-8L)},{0x9EE5D7E4FEBED2FFLL,8L,0x9F9D6A897D877B9BLL,9L},{1L,0xCF4D680AB066457BLL,(-3L),0x9F2C553AE4421EA4LL},{3L,(-6L),0xB6B958F9A38609F8LL,(-10L)},{(-5L),3L,(-1L),(-1L)}},{{0L,(-3L),0x3CEBF29FDE2EDCB7LL,(-1L)},{0x5111BC94BA48F854LL,0x5357627B9C38BE8CLL,0L,0x0FA42E86FB179EA9LL},{0x0FA42E86FB179EA9LL,0L,1L,(-3L)},{7L,0x5204567D09328D4FLL,0xDCC1DE6D6BE06A0BLL,0x4968D74341144AEBLL},{(-1L),3L,0x4968D74341144AEBLL,0x283A9E9F3121299ALL},{3L,0xB908DC2A6BFE889ALL,3L,1L}},{{0x8E749CEDFAB1147BLL,0x68D268A4C9F2352ALL,0L,0x5530D01B6D3D1242LL},{1L,0x599DC1D6468E7D10LL,1L,0x68D268A4C9F2352ALL},{0x3CEBF29FDE2EDCB7LL,(-10L),1L,0L},{1L,7L,0L,0x3CEBF29FDE2EDCB7LL},{0x8E749CEDFAB1147BLL,0xA1B6B604E4BC1600LL,3L,0xB6B958F9A38609F8LL},{3L,0xB6B958F9A38609F8LL,0x4968D74341144AEBLL,0xB31842482A9F16BALL}},{{(-1L),0x62E26A32E214D462LL,0xDCC1DE6D6BE06A0BLL,0x5111BC94BA48F854LL},{7L,0L,1L,(-6L)},{0x0FA42E86FB179EA9LL,1L,0L,7L},{0x5111BC94BA48F854LL,0x9F9D6A897D877B9BLL,0x3CEBF29FDE2EDCB7LL,(-7L)},{0L,1L,(-1L),0x0612D27825520998LL},{(-5L),1L,0xB6B958F9A38609F8LL,1L}},{{0xA1B6B604E4BC1600LL,(-7L),0x62E26A32E214D462LL,3L},{(-1L),0x5111BC94BA48F854LL,0xB6B958F9A38609F8LL,0xB6B958F9A38609F8LL},{0x9F2C553AE4421EA4LL,0x9F2C553AE4421EA4LL,0xA1B6B604E4BC1600LL,(-8L)},{3L,0x95784320228DEF0CLL,7L,0x9EE5D7E4FEBED2FFLL},{0x0FA42E86FB179EA9LL,0x283A9E9F3121299ALL,(-10L),7L},{(-1L),0x283A9E9F3121299ALL,0x599DC1D6468E7D10LL,0x9EE5D7E4FEBED2FFLL}}};
        int l_607[6][7][6] = {{{0xABBFB59DL,0L,(-1L),0x23A2A2D4L,0xD9286445L,0xEBDCF4E9L},{(-1L),2L,(-1L),(-4L),1L,0x0451ACE8L},{0x2420517AL,0x33BE53E6L,0xEBDCF4E9L,(-10L),6L,0x300DC3AEL},{(-10L),6L,0x300DC3AEL,0x65661D17L,0xB585503DL,(-1L)},{0L,5L,0L,(-7L),0xB3650C27L,(-7L)},{0L,(-7L),0L,0x443E0CE2L,1L,0x25BADF66L},{0x23A2A2D4L,1L,4L,0L,0xFF7B2476L,(-10L)}},{{(-1L),0x66BE052EL,(-4L),0L,1L,0x443E0CE2L},{0x23A2A2D4L,0xB3650C27L,5L,0x443E0CE2L,0x33BE53E6L,0xE02AD34BL},{0L,0x5258B64EL,1L,(-7L),0xF12025F1L,5L},{0L,1L,(-1L),0x65661D17L,2L,0xABBFB59DL},{(-10L),0xA18BDCD3L,(-1L),(-10L),5L,(-2L)},{0x5FD2C503L,(-7L),0x9958927BL,0x8D78CF08L,1L,0x676C953AL},{0L,0x23A2A2D4L,0x91A42F66L,(-9L),1L,0x03639FB4L}},{{0x8704CCE7L,(-7L),0x43994DC2L,(-3L),5L,(-8L)},{0xE9FA2899L,0xA9872B7DL,0x7DA9C870L,(-1L),0x1548C630L,0x8D78CF08L},{0x03639FB4L,(-6L),0x6B81440FL,0x8704CCE7L,5L,0xD3B6C7BFL},{0x8D78CF08L,1L,(-8L),(-2L),0x25BADF66L,0L},{6L,(-4L),(-1L),0x6D40DFACL,(-1L),0xD8102357L},{(-2L),(-1L),0xC8D7D886L,(-8L),0L,0xD8102357L},{(-4L),0xE02AD34BL,(-1L),0xC8D7D886L,(-6L),0L}},{{0L,1L,(-8L),(-4L),(-4L),0xD3B6C7BFL},{0x22AC7F24L,0x65661D17L,0x6B81440FL,0xD8102357L,(-1L),0x8D78CF08L},{(-8L),0x300DC3AEL,0x7DA9C870L,0x7DA9C870L,0x300DC3AEL,(-8L)},{0xC8D7D886L,0x25BADF66L,0x43994DC2L,(-1L),0xABBFB59DL,0x03639FB4L},{(-3L),0x1548C630L,0x91A42F66L,0x9958927BL,(-1L),0x676C953AL},{(-3L),(-10L),0x9958927BL,(-1L),0x2420517AL,(-2L)},{0xC8D7D886L,0xABBFB59DL,0xD3B6C7BFL,(-1L),0x23A2A2D4L,(-8L)}},{{0x676C953AL,(-4L),(-8L),0L,(-10L),(-3L)},{0x5FD2C503L,(-1L),(-8L),(-1L),(-4L),0xBC58C653L},{(-2L),(-10L),0x5FD2C503L,(-3L),0xEBDCF4E9L,0xD3B6C7BFL},{(-1L),4L,0L,0x8D78CF08L,(-10L),0x03639FB4L},{0x43994DC2L,4L,0L,0x6B81440FL,0xEBDCF4E9L,(-2L)},{(-2L),(-10L),0x8D78CF08L,0x6D40DFACL,(-4L),0x938C81E7L},{0L,(-1L),0x43994DC2L,(-8L),(-10L),0x6D40DFACL}},{{0x91A42F66L,(-4L),0x8704CCE7L,0L,0x23A2A2D4L,0x8704CCE7L},{0x8704CCE7L,0x1548C630L,(-9L),0x897FE39DL,(-6L),0x7DA9C870L},{(-8L),(-1L),(-1L),(-1L),(-1L),(-9L)},{(-4L),1L,(-1L),0L,0x1548C630L,0x7DA9C870L},{6L,0L,(-9L),(-9L),0xABBFB59DL,0x8704CCE7L},{(-9L),0xABBFB59DL,0x8704CCE7L,0xC8D7D886L,0xAA71A2E7L,0x6D40DFACL},{(-1L),5L,0x43994DC2L,0x938C81E7L,0x25BADF66L,0x938C81E7L}}};
        unsigned long long *l_608 = (void*)0;
        unsigned long long **l_610 = &l_609;
        unsigned ****l_617 = &g_221[6];
        unsigned *****l_618 = (void*)0;
        unsigned ****l_620[4];
        unsigned *****l_619 = &l_620[3];
        int l_621 = 0xDAF83F99L;
        int i, j, k;
        for (i = 0; i < 4; i++)
            l_620[i] = (void*)0;
        (*l_578) = (0UL != (safe_mod_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u(((0x9A43L == (l_606[5][5][3] = (((*g_101) = (*g_101)) == ((*l_605) = &g_103)))) == ((l_607[0][3][3] != (l_608 == ((*l_610) = l_609))) && (((safe_lshift_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u(((*l_451) = (safe_add_func_int32_t_s_s((l_617 == ((*l_619) = &g_221[2])), l_607[2][6][3]))), 5)), l_607[0][3][3])) ^ l_607[0][3][3]) >= (*g_237)))), l_621)), l_622[2][0])));

        ;

    }



    ;
    return g_193;
}







static int * func_2(char p_3, unsigned short p_4, int p_5)
{
    int *l_22 = &g_23[4][0][0];
    char *l_155[3];
    long long *l_156 = &g_107;
    int l_162 = 0L;
    int **l_447 = &g_323[1];
    int i;
    for (i = 0; i < 3; i++)
        l_155[i] = &g_116;
    (*l_447) = func_12(func_17(l_22, func_24(func_30(l_22, func_35(g_23[4][0][3], l_22, g_23[4][0][0]), g_78[2][0][1], (+(((*l_156) = ((p_3 = (((**g_102) || (safe_add_func_int16_t_s_s((g_154 = (safe_div_func_int64_t_s_s(((((255UL && p_4) && (**g_102)) <= g_107) <= (*l_22)), p_5))), 0xB7CCL))) > g_116)) || 0x05L)) < 0x4E0C13267D7153F6LL))), g_116, l_162, &l_162, g_139[1][5][1]), &l_162, p_4), p_5, p_4, p_5);


    ;
    ;

    return (*l_447);


}







static int * func_12(short p_13, unsigned long long p_14, short p_15, int p_16)
{
    int *l_304[1];
    short *l_347 = &g_78[2][0][1];
    unsigned char l_379 = 255UL;
    short ***l_401 = (void*)0;
    unsigned short **l_436 = &g_237;
    int *l_445 = &g_23[4][0][0];
    int *l_446 = &g_362;
    int i;
    for (i = 0; i < 1; i++)
        l_304[i] = &g_69[0];
    if (func_60(((*g_174) = &p_16)))
    {
        short **l_298 = (void*)0;
        short **l_300 = &g_188;
        short ***l_299 = &l_300;
        short **l_302 = &g_188;
        short ***l_301 = &l_302;
        short **l_303 = (void*)0;
        unsigned char *l_310 = &g_154;
        int l_322 = 0x9EEDA6F0L;
        int l_337 = (-8L);
        int *l_366 = (void*)0;
        short l_367 = 1L;
        unsigned l_377 = 4294967295UL;
        unsigned short *l_397[5];
        unsigned char l_398 = 0x55L;
        char *l_399 = &g_116;
        unsigned l_400[6][8][5] = {{{0x99DBEDF4L,0x5FB7EBAFL,4294967291UL,0x208D608FL,4294967293UL},{1UL,1UL,0x9260F66DL,1UL,1UL},{4294967291UL,0x67828940L,0x2182470CL,0x67828940L,4294967291UL},{0x59BBAEF0L,1UL,4294967295UL,1UL,1UL},{4294967291UL,0x9FE3ABD0L,4294967295UL,0x208D608FL,0UL},{0x9260F66DL,0x5F804B06L,0xD32828C4L,1UL,1UL},{5UL,0x208D608FL,5UL,1UL,4294967291UL},{1UL,4294967295UL,1UL,1UL,1UL}},{{0x2F8CE7E0L,0x54A875C4L,0x2182470CL,0x208D608FL,0x99DBEDF4L},{0x59BBAEF0L,0x9260F66DL,1UL,1UL,0x9260F66DL},{0x99DBEDF4L,0x9FE3ABD0L,5UL,0x67828940L,0UL},{0x5F804B06L,0x9260F66DL,0xD32828C4L,0x9260F66DL,0x5F804B06L},{5UL,0x54A875C4L,4294967295UL,1UL,0x2F8CE7E0L},{0x5F804B06L,4294967295UL,4294967295UL,0x5F804B06L,1UL},{0x99DBEDF4L,0x208D608FL,0x2182470CL,0x54A875C4L,0x2F8CE7E0L},{0x59BBAEF0L,0x5F804B06L,0x59BBAEF0L,1UL,0x5F804B06L}},{{0x2F8CE7E0L,0x9FE3ABD0L,0UL,0x54A875C4L,0UL},{1UL,1UL,0xD32828C4L,0x5F804B06L,0x9260F66DL},{5UL,0x67828940L,0UL,1UL,0x99DBEDF4L},{0x9260F66DL,4294967295UL,0x59BBAEF0L,0x9260F66DL,1UL},{4294967291UL,0x67828940L,0x2182470CL,0x67828940L,0x2F8CE7E0L},{1UL,0x9260F66DL,0x59BBAEF0L,4294967295UL,0x9260F66DL},{0x2F8CE7E0L,0x3D8E3869L,5UL,0x54A875C4L,4294967295UL},{0x5F804B06L,1UL,4294967287UL,0x9260F66DL,0x9260F66DL}},{{0UL,0x54A875C4L,0UL,0x9FE3ABD0L,0x2F8CE7E0L},{0x9260F66DL,0x59BBAEF0L,4294967295UL,0x9260F66DL,4294967295UL},{0x99DBEDF4L,0x67828940L,0UL,0x54A875C4L,4294967291UL},{1UL,0x5F804B06L,4294967295UL,4294967295UL,0x5F804B06L},{4294967291UL,0x3D8E3869L,0UL,0x208D608FL,4294967295UL},{1UL,0x5F804B06L,4294967287UL,0x5F804B06L,1UL},{0UL,0x67828940L,5UL,0x9FE3ABD0L,0x99DBEDF4L},{1UL,0x59BBAEF0L,0x59BBAEF0L,1UL,4294967295UL}},{{4294967291UL,0x54A875C4L,0UL,0x67828940L,0x99DBEDF4L},{1UL,1UL,1UL,4294967295UL,1UL},{0x99DBEDF4L,0x3D8E3869L,4294967295UL,0x67828940L,4294967295UL},{0x9260F66DL,0x9260F66DL,4294967287UL,1UL,0x5F804B06L},{0UL,0x208D608FL,4294967295UL,0x9FE3ABD0L,4294967291UL},{0x5F804B06L,0x59BBAEF0L,1UL,0x5F804B06L,4294967295UL},{0x2F8CE7E0L,0x208D608FL,0UL,0x208D608FL,0x2F8CE7E0L},{1UL,0x9260F66DL,0x59BBAEF0L,4294967295UL,0x59BBAEF0L}},{{4294967295UL,1UL,0x2182470CL,0x9FE3ABD0L,4294967293UL},{1UL,4294967295UL,1UL,0x59BBAEF0L,0x59BBAEF0L},{0UL,0x9FE3ABD0L,0UL,0x5FB7EBAFL,4294967295UL},{0x59BBAEF0L,0xD32828C4L,1UL,0x59BBAEF0L,1UL},{5UL,0x3D8E3869L,0x2F8CE7E0L,0x9FE3ABD0L,0UL},{4294967287UL,1UL,1UL,1UL,1UL},{0UL,1UL,0UL,1UL,4294967293UL},{4294967295UL,1UL,1UL,1UL,4294967295UL}}};
        char l_402 = 0x15L;
        int i, j, k;
        for (i = 0; i < 5; i++)
            l_397[i] = (void*)0;
        if (((l_298 = (*g_101)) != (l_303 = ((*l_301) = ((*l_299) = (*g_101))))))
        {
            unsigned l_305 = 0x88EB7DA8L;
            char l_332 = (-8L);
            int *l_336 = (void*)0;
            short *l_388 = &g_78[6][0][2];
            unsigned long long l_391 = 18446744073709551615UL;
            (*g_174) = l_304[0];
            if (l_305)
            {
                p_16 = p_14;
                for (p_15 = 0; (p_15 <= 3); p_15 += 1)
                {
                    short l_321 = 0x809DL;
                    p_16 = ((safe_sub_func_int64_t_s_s(((&g_286 == &g_286) >= ((safe_sub_func_uint8_t_u_u((&g_154 == l_310), (((*g_237) & func_60(func_44(&g_23[4][0][0], (safe_add_func_uint64_t_u_u(0x382B749A9FFF2E2DLL, (p_13 > (((safe_add_func_uint32_t_u_u((safe_sub_func_int32_t_s_s((safe_div_func_int64_t_s_s(((safe_lshift_func_uint16_t_u_s((**g_236), (*g_103))) == 0xAA4DL), 0xF3BA3BC391C3C8AFLL)), l_321)), 0x24040A8EL)) == (**g_236)) != l_321))))))) <= l_322))) < p_13)), l_321)) | g_286);
                    for (g_193 = 0; (g_193 <= 0); g_193 += 1)
                    {
                        int i;
                        return l_304[g_193];



                    }
                    for (l_321 = 3; (l_321 >= 0); l_321 -= 1)
                    {
                        return g_323[1];



                    }
                }
                for (g_51 = 0; (g_51 > 20); g_51 = safe_add_func_uint8_t_u_u(g_51, 7))
                {
                    unsigned l_335 = 0xAB524498L;
                    int *l_341 = (void*)0;
                    p_16 = (((g_78[4][0][0] < g_23[4][1][1]) > p_14) > ((0x499AB779L >= (!(safe_mod_func_int64_t_s_s(((safe_add_func_int8_t_s_s((((safe_sub_func_uint64_t_u_u(0x5B46407B08E14C4DLL, (l_332 > ((*l_310) = 0x8CL)))) != (safe_sub_func_int8_t_s_s(l_335, func_60((l_336 = &p_16))))) != p_15), p_13)) <= 1UL), l_337)))) != g_116));

                    ;
                    for (l_335 = 0; (l_335 > 22); l_335++)
                    {
                        char l_340 = (-8L);
                        p_16 = l_340;
                    }
                    (*g_174) = l_341;
                }

                ;
                (*g_174) = &g_69[1];
            }
            else
            {
                int *l_342 = &l_322;
                (*g_174) = func_30(&g_69[1], l_342, (+((**g_236) | p_14)), (6L | func_60(&p_16)));


            }


            ;
            for (g_10 = 0; (g_10 <= 3); g_10 += 1)
            {
                int *l_345 = &g_23[7][2][3];
                int ***l_357 = (void*)0;
                short *l_381[9];
                int i;
                for (i = 0; i < 9; i++)
                    l_381[i] = &l_367;
                for (l_332 = 0; (l_332 <= 2); l_332 += 1)
                {
                    unsigned l_350 = 5UL;
                    if ((safe_add_func_int32_t_s_s(l_337, p_14)))
                    {
                        short **l_346[6] = {&g_188,&g_188,&g_188,&g_188,&g_188,&g_188};
                        int i;
                        (*g_174) = func_62(&p_16, l_345, (**g_101), (l_347 = (g_188 = (*g_102))));

                        ;
                    }
                    else
                    {
                        (*g_174) = &g_69[0];
                    }
                    for (g_193 = 0; (g_193 <= 2); g_193 += 1)
                    {
                        int *l_348 = &g_69[0];
                        char *l_349[6][1][8] = {{{&g_116,&l_332,&g_116,&g_116,&l_332,(void*)0,(void*)0,&l_332}},{{&l_332,&g_116,&g_116,&l_332,&g_116,&l_332,&l_332,&l_332}},{{&g_116,&l_332,&l_332,&l_332,&g_116,(void*)0,&l_332,&l_332}},{{&l_332,&l_332,(void*)0,&l_332,(void*)0,&l_332,&l_332,&g_116}},{{&l_332,&g_116,&g_116,&l_332,&l_332,(void*)0,&l_332,&l_332}},{{&l_332,&l_332,&l_332,&g_116,&l_332,&l_332,&g_116,&l_332}}};
                        unsigned short ***l_351 = &g_236;
                        int i, j, k;
                        l_348 = &g_23[7][0][0];

                        ;
                        (*g_174) = func_44(&g_69[0], (*g_237));
                        (*l_345) = (g_69[g_193] = (g_107 || (l_350 = (g_116 = (*l_348)))));
                        (*l_351) = &g_237;
                    }
                    for (p_13 = 0; (p_13 <= 3); p_13 += 1)
                    {
                        if (p_16)
                            break;
                        return l_304[0];



                    }
                }
                if (((g_323[1] = l_304[0]) != (void*)0))
                {
                    int *l_352 = &g_69[2];
                    for (g_51 = 3; (g_51 >= 0); g_51 -= 1)
                    {
                        int ****l_358 = (void*)0;
                        int ***l_360 = &g_174;
                        int ****l_359 = &l_360;
                        unsigned *l_361 = &g_75;
                        l_336 = l_352;

                        ;
                        (*l_352) = (safe_sub_func_uint32_t_u_u((((safe_div_func_uint64_t_u_u(((g_23[8][0][0] & ((*l_310) = 0UL)) >= 0x48DAL), g_78[9][3][2])) < ((l_357 != ((*l_359) = &g_174)) & p_13)) > p_15), (&g_102 == (void*)0)));
                        (*l_336) = (*l_352);
                        p_16 = (4294967295UL >= ((*l_361) = 0UL));
                    }
                    if (p_15)
                        continue;
                    for (g_51 = 0; (g_51 <= 3); g_51 += 1)
                    {
                        p_16 = p_15;
                    }
                    if (g_362)
                        continue;
                }
                else
                {
                    for (l_332 = 0; (l_332 <= 3); l_332 += 1)
                    {
                        unsigned char l_365 = 0UL;
                        (*g_174) = l_304[0];
                        l_365 = (safe_sub_func_int64_t_s_s((*l_345), g_286));
                    }
                    for (l_332 = 0; l_332 < 10; l_332 += 1)
                    {
                        g_221[l_332] = &g_222;
                    }
                }
                for (p_14 = 0; (p_14 <= 3); p_14 += 1)
                {
                    int l_368 = 0xCAE64A78L;
                    short l_378 = 0x759DL;
                    for (l_337 = 3; (l_337 >= 0); l_337 -= 1)
                    {
                        l_366 = ((*g_174) = &l_322);

                        ;
                        if (l_367)
                            continue;
                        if (l_368)
                            break;
                        (*l_366) = (p_13 != ((((**g_102) = (+(***g_101))) && (((***l_299) = 0x4645L) || (safe_rshift_func_uint16_t_u_s(((safe_mod_func_int32_t_s_s((!p_16), (safe_lshift_func_uint8_t_u_u(p_16, 6)))) == (safe_sub_func_int8_t_s_s(g_69[0], ((p_15 <= ((*l_345) = (*l_345))) != (l_377 < l_378))))), (**g_102))))) >= l_379));
                    }
                    (*g_174) = l_304[0];
                    for (l_332 = 3; (l_332 >= 0); l_332 -= 1)
                    {
                        short **l_380[5][9] = {{&g_103,&g_103,&g_103,&l_347,&l_347,&l_347,&g_103,&g_103,&g_103},{&g_103,&g_103,&g_103,&g_103,&g_103,&g_103,&g_103,&g_103,&g_103},{&g_103,&g_103,&g_103,&l_347,&l_347,&l_347,&g_103,&g_103,&g_103},{&g_103,&g_103,&g_103,&g_103,&g_103,&g_103,&g_103,&g_103,&g_103},{&g_103,&g_103,&g_103,&l_347,&l_347,&l_347,&g_103,&g_103,&g_103}};
                        int *l_382 = &g_69[1];
                        unsigned *l_387[9][5] = {{&l_377,&g_75,&l_377,&l_377,&g_75},{&l_377,(void*)0,(void*)0,&l_377,&g_75},{(void*)0,&g_10,&g_75,&g_75,&g_75},{(void*)0,&l_377,(void*)0,&g_75,&l_377},{&g_75,&l_377,&l_377,&g_75,&l_377},{&g_10,&g_10,&g_75,&l_377,(void*)0},{&l_377,(void*)0,&l_377,&l_377,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,&g_75},{&g_10,(void*)0,&g_75,(void*)0,&g_10}};
                        int i, j;
                        (*g_174) = func_62(l_304[0], &g_23[4][0][0], (*g_102), (l_381[3] = &l_378));
                        (*g_174) = func_44(l_382, (g_116 < (g_154 < ((safe_mod_func_int16_t_s_s(((g_193 || g_116) && (safe_div_func_uint32_t_u_u((l_322 = (l_368 || (7UL < (((*l_382) = p_13) | ((*l_345) = p_14))))), p_16))), l_378)) || 0xD3E306D3B504CB59LL))));
                        (*g_174) = func_44(((*g_174) = func_44(((*g_174) = func_62(l_382, &g_362, (*g_102), l_388)), (safe_lshift_func_int8_t_s_u(9L, 4)))), (((*g_237) < l_378) >= p_15));
                        if (p_14)
                            continue;
                    }


                }


                for (g_362 = 0; (g_362 <= 3); g_362 += 1)
                {
                    for (g_193 = 0; (g_193 <= 3); g_193 += 1)
                    {
                        (*l_345) = 0x239A254CL;
                        (*g_174) = &p_16;
                        if (p_15)
                            continue;
                        l_336 = &g_23[4][0][0];

                        ;
                    }
                    if (p_16)
                        break;
                    for (l_367 = 3; (l_367 >= 0); l_367 -= 1)
                    {
                        (*g_174) = (void*)0;
                    }
                }
            }

            ;

            ;
            ;
            (*g_174) = &p_16;
        }
        else
        {
            unsigned l_392[9][3] = {{18446744073709551612UL,0x35AFF299L,7UL},{0xF8B1D5CBL,0xC489D7E1L,0x0CD781E9L},{0UL,18446744073709551614UL,18446744073709551614UL},{18446744073709551614UL,0x5B634DC5L,0x0CD781E9L},{0xC489D7E1L,0x35AFF299L,0x0CD781E9L},{0x48661F43L,0x0CD781E9L,18446744073709551614UL},{18446744073709551612UL,18446744073709551612UL,7UL},{0x0CD781E9L,0x0CD781E9L,18446744073709551612UL},{0xEA1EED2AL,0x35AFF299L,0x537133D2L}};
            int i, j;
            p_16 = l_392[4][1];
        }


        ;
        ;
        ;
        ;
        ;

        ;
        p_16 = p_13;
        p_16 = (((((*l_310) = (safe_div_func_int16_t_s_s(((***l_301) = ((((safe_sub_func_int8_t_s_s(((*l_399) = func_60(func_35((l_398 = (~((**g_236) = 0x0FD4L))), &l_322, p_15))), (l_400[2][4][3] != p_16))) | (((((p_16 | (((l_401 == &g_102) >= p_14) || 0xD3L)) == g_263) > l_402) > 0UL) <= (***g_101))) < 1L) != 1L)), p_14))) < g_23[0][2][1]) >= 5UL) != 0x38CFL);
    }
    else
    {
        int *l_403[9];
        unsigned short **l_434[3][8][5] = {{{(void*)0,&g_237,&g_237,&g_237,&g_237},{(void*)0,&g_237,&g_237,(void*)0,&g_237},{&g_237,&g_237,&g_237,&g_237,&g_237},{(void*)0,&g_237,(void*)0,&g_237,(void*)0},{&g_237,&g_237,&g_237,&g_237,&g_237},{&g_237,&g_237,&g_237,&g_237,&g_237},{(void*)0,&g_237,&g_237,&g_237,&g_237},{&g_237,&g_237,(void*)0,&g_237,&g_237}},{{&g_237,&g_237,&g_237,&g_237,&g_237},{(void*)0,&g_237,&g_237,&g_237,&g_237},{&g_237,&g_237,&g_237,&g_237,&g_237},{&g_237,(void*)0,&g_237,&g_237,&g_237},{(void*)0,&g_237,(void*)0,&g_237,&g_237},{&g_237,&g_237,&g_237,&g_237,&g_237},{&g_237,&g_237,&g_237,(void*)0,(void*)0},{&g_237,&g_237,&g_237,&g_237,&g_237}},{{&g_237,(void*)0,&g_237,&g_237,&g_237},{&g_237,&g_237,(void*)0,(void*)0,&g_237},{&g_237,&g_237,(void*)0,&g_237,&g_237},{&g_237,(void*)0,(void*)0,&g_237,&g_237},{(void*)0,&g_237,(void*)0,&g_237,&g_237},{&g_237,&g_237,&g_237,&g_237,&g_237},{&g_237,(void*)0,&g_237,&g_237,&g_237},{&g_237,&g_237,(void*)0,&g_237,&g_237}}};
        unsigned short ***l_435 = &g_236;
        unsigned short ***l_437 = (void*)0;
        unsigned short ***l_438 = &l_436;
        unsigned long long *l_439[8][2][2] = {{{&g_286,&g_286},{&g_286,&g_286}},{{&g_286,&g_286},{&g_286,&g_286}},{{&g_286,&g_286},{&g_286,&g_286}},{{&g_286,&g_286},{&g_286,&g_286}},{{&g_286,&g_286},{&g_286,&g_286}},{{&g_286,&g_286},{&g_286,&g_286}},{{&g_286,&g_286},{&g_286,&g_286}},{{&g_286,&g_286},{&g_286,&g_286}}};
        int l_440 = 0x2735253CL;
        unsigned short l_443 = 0xE4E3L;
        int i, j, k;
        for (i = 0; i < 9; i++)
            l_403[i] = (void*)0;
        l_403[5] = (void*)0;
        (*g_174) = &p_16;
        for (g_107 = 0; (g_107 > 23); g_107++)
        {
            long long l_412 = (-6L);
            int l_424 = 0xB9D9854AL;
            int l_425 = 8L;
            for (g_154 = 0; (g_154 <= 43); g_154 = safe_add_func_uint32_t_u_u(g_154, 5))
            {
                char l_423[2][8];
                int i, j;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 8; j++)
                        l_423[i][j] = (-1L);
                }
                l_412 = (safe_sub_func_int8_t_s_s(g_154, ((safe_sub_func_uint8_t_u_u(0x5DL, p_14)) | p_15)));
                if (l_412)
                    break;
                for (p_15 = (-18); (p_15 > (-29)); --p_15)
                {
                    unsigned char l_415 = 0xDDL;
                    int *l_416 = &g_23[4][3][0];
                    int l_422 = (-2L);
                    (*g_174) = &g_69[0];
                    if (l_415)
                    {
                        l_416 = &p_16;

                        ;
                    }
                    else
                    {
                        unsigned short l_417 = 0x6144L;
                        long long l_421 = 0x658008881C93F80DLL;
                        p_16 = l_417;
                        (*g_174) = &g_23[4][0][0];
                        (*l_416) = (safe_unary_minus_func_int8_t_s(((safe_rshift_func_uint16_t_u_u(p_13, (**g_236))) & (l_421 = (*l_416)))));
                        (*l_416) = (l_401 != (g_101 = &g_102));
                    }

                    ;
                    l_422 = (p_14 != ((*l_416) = p_16));
                }
                l_424 = l_423[1][7];
            }
            p_16 = (((*g_237) = p_13) > l_425);
        }
        l_443 = (safe_sub_func_int16_t_s_s((safe_sub_func_uint64_t_u_u((((safe_rshift_func_uint8_t_u_s((safe_div_func_uint32_t_u_u(func_60(&g_23[8][0][2]), (0L | (((((*l_435) = l_434[0][0][3]) == ((*l_438) = l_436)) < p_16) >= (((((l_440 = (0x131A02425F4D44ACLL != (p_14 = 0UL))) & (safe_sub_func_int8_t_s_s(g_51, p_15))) ^ 0x0BL) ^ p_15) >= p_15))))), g_286)) ^ p_15) & p_16), g_286)), 0xF8D1L));

        ;
    }


    ;
    ;

    for (g_116 = 0; (g_116 <= 2); g_116 += 1)
    {
        return g_444[4][0][0];



    }
    (*l_445) = (&p_16 != (l_304[0] = &g_69[0]));
    return l_446;



}







static short func_17(int * p_18, int * p_19, int * p_20, unsigned char p_21)
{
    int *l_175 = &g_69[0];
    short *l_176 = &g_78[2][0][1];
    int *l_178[4] = {&g_69[0],&g_69[0],&g_69[0],&g_69[0]};
    int **l_177[6] = {&l_178[1],&l_178[1],&l_178[1],&l_178[1],&l_178[1],&l_178[1]};
    int *l_179[9] = {&g_23[0][4][1],&g_23[0][4][1],&g_23[0][4][1],&g_23[0][4][1],&g_23[0][4][1],&g_23[0][4][1],&g_23[0][4][1],&g_23[0][4][1],&g_23[0][4][1]};
    unsigned **l_205 = &g_139[1][5][1];
    long long *l_214[9][10] = {{&g_107,&g_107,(void*)0,&g_107,&g_107,&g_107,&g_107,&g_107,(void*)0,&g_107},{&g_107,&g_107,&g_107,&g_107,&g_107,&g_107,&g_107,&g_107,&g_107,&g_107},{&g_107,&g_107,&g_107,&g_107,&g_107,(void*)0,&g_107,(void*)0,(void*)0,&g_107},{&g_107,&g_107,&g_107,&g_107,&g_107,&g_107,&g_107,&g_107,(void*)0,&g_107},{&g_107,&g_107,&g_107,&g_107,&g_107,&g_107,&g_107,&g_107,&g_107,&g_107},{&g_107,&g_107,(void*)0,(void*)0,&g_107,&g_107,&g_107,(void*)0,&g_107,&g_107},{&g_107,&g_107,(void*)0,&g_107,&g_107,(void*)0,&g_107,(void*)0,&g_107,&g_107},{&g_107,&g_107,&g_107,(void*)0,&g_107,&g_107,&g_107,(void*)0,&g_107,&g_107},{&g_107,&g_107,(void*)0,&g_107,&g_107,&g_107,&g_107,(void*)0,(void*)0,&g_107}};
    unsigned ***l_224 = &g_222;
    long long l_297[7] = {0x2E13752D6634696DLL,0x1ED3C886F7CE8DBDLL,0x2E13752D6634696DLL,0x2E13752D6634696DLL,0x1ED3C886F7CE8DBDLL,0x2E13752D6634696DLL,0x2E13752D6634696DLL};
    int i, j;
    l_179[8] = func_30(l_175, (p_20 = func_62((*g_174), (p_19 = func_62(func_62(func_62(l_175, p_18, l_176, l_176), l_175, (*g_102), l_176), p_19, l_176, (**g_101))), l_176, l_176)), p_21, p_21);

    ;
    ;
    for (p_21 = 2; (p_21 != 50); p_21++)
    {
        int *l_184 = &g_23[4][0][0];
        short *l_189 = &g_78[2][0][1];
        short l_215 = 0x681CL;
        unsigned short *l_232 = &g_193;
        unsigned short **l_231[9][6] = {{&l_232,&l_232,&l_232,&l_232,&l_232,&l_232},{&l_232,&l_232,(void*)0,&l_232,&l_232,&l_232},{&l_232,(void*)0,(void*)0,&l_232,(void*)0,&l_232},{&l_232,&l_232,&l_232,&l_232,(void*)0,(void*)0},{&l_232,&l_232,(void*)0,(void*)0,(void*)0,&l_232},{(void*)0,&l_232,&l_232,&l_232,(void*)0,(void*)0},{(void*)0,(void*)0,&l_232,&l_232,&l_232,&l_232},{&l_232,&l_232,(void*)0,(void*)0,&l_232,&l_232},{(void*)0,&l_232,&l_232,&l_232,&l_232,(void*)0}};
        unsigned **l_239[3][7] = {{&g_139[1][5][1],&g_139[1][5][1],&g_139[1][5][1],&g_139[1][5][1],&g_139[2][2][1],&g_139[1][5][1],&g_139[2][2][1]},{&g_139[1][5][1],&g_139[1][5][1],&g_139[1][5][1],&g_139[1][5][1],&g_139[3][3][2],&g_139[1][5][1],&g_139[1][5][1]},{&g_139[1][5][1],&g_139[2][2][1],&g_139[3][3][2],&g_139[3][3][2],&g_139[2][2][1],&g_139[1][5][1],&g_139[1][5][1]}};
        unsigned char l_251 = 0UL;
        long long l_284 = (-9L);
        int i, j;
        for (g_75 = 15; (g_75 != 54); g_75 = safe_add_func_int16_t_s_s(g_75, 1))
        {
            short l_190 = 0L;
            int l_208 = 1L;
            long long *l_213[2];
            int l_230 = 0xED7CC9DEL;
            unsigned **l_238[2];
            int *l_250 = &l_230;
            int i;
            for (i = 0; i < 2; i++)
                l_213[i] = &g_107;
            for (i = 0; i < 2; i++)
                l_238[i] = (void*)0;
            l_184 = ((*g_174) = func_44((*g_174), p_21));
            for (g_51 = (-7); (g_51 < (-9)); g_51 = safe_sub_func_uint32_t_u_u(g_51, 5))
            {
                int *l_194 = &g_69[0];
                unsigned **l_220 = &g_139[4][1][0];
                int l_227 = 0x1D7207EEL;
                p_20 = func_44((*g_174), p_21);
                for (g_10 = 0; (g_10 <= 2); g_10 += 1)
                {
                    int *l_187 = &g_23[4][0][0];
                    unsigned char *l_191 = &g_154;
                    unsigned short *l_192 = &g_193;
                    int *l_195 = &g_69[g_10];
                    int i;
                    (*g_174) = func_62(((*g_174) = func_62(l_179[(g_10 + 2)], func_44(l_187, g_69[g_10]), g_188, (*g_102))), &g_69[g_10], (*g_102), l_189);
                }
            }
        }

        ;
        (*g_174) = func_62(p_18, (*g_174), (**g_101), &l_215);
        for (g_51 = 3; (g_51 >= 0); g_51 -= 1)
        {
            char l_257 = 0xFCL;
            int l_258 = 0x5572A2F3L;
            char l_271 = (-2L);
            int l_287 = 0L;
            short l_288 = (-1L);
            for (g_193 = 0; (g_193 <= 2); g_193 += 1)
            {
                char *l_254 = &g_116;
                unsigned char *l_255 = (void*)0;
                unsigned char *l_256[1][4][9] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
                int l_268 = 0x9B2CAB1EL;
                int i, j, k;
                if (((((((*l_254) = 0x6DL) == (l_257 = g_69[g_193])) | (*l_184)) ^ l_258) && ((safe_sub_func_uint32_t_u_u(func_60(func_44(l_178[(g_193 + 1)], (*g_237))), p_21)) > p_21)))
                {
                    int i;
                    g_69[g_193] = (safe_lshift_func_int8_t_s_s(g_69[0], 1));
                }
                else
                {
                    int i;
                    p_20 = func_30(l_178[g_51], l_178[g_51], g_78[2][0][1], (g_263 = (g_154 = (p_21 == g_51))));
                    for (l_251 = 1; (l_251 <= 5); l_251 += 1)
                    {
                        return (*g_188);
                    }
                    l_268 = (((safe_mod_func_uint32_t_u_u((((*l_184) = 1L) >= (safe_sub_func_uint16_t_u_u(((0xDDL < ((((void*)0 != (*g_236)) || 0xBF76EF71A364701ALL) || 3UL)) | ((void*)0 != &l_205)), 0xC10DL))), 0x4B14B88DL)) < 0L) & 1L);
                }
                (*g_174) = func_44(l_184, (**g_236));
            }
            for (g_263 = 0; (g_263 <= 5); g_263 += 1)
            {
                int *l_281 = &g_69[0];
                short *l_282 = &g_78[2][0][1];
                int ***l_293 = &g_174;
                (*g_174) = p_19;
                p_18 = (*g_174);
                for (g_116 = 0; (g_116 <= 5); g_116 += 1)
                {
                    unsigned short *l_269 = (void*)0;
                    int l_272[8][2] = {{2L,0xF4517339L},{0xDF3DF780L,0xF4517339L},{2L,0xDF3DF780L},{0x875923DCL,0x875923DCL},{0x875923DCL,0xDF3DF780L},{2L,0xF4517339L},{0xDF3DF780L,0xF4517339L},{2L,0xDF3DF780L}};
                    int i, j;
                    if ((l_269 == ((*g_236) = (*g_236))))
                    {
                        int *l_283[2][5][10] = {{{&g_69[2],&l_272[1][1],&l_272[6][1],(void*)0,&l_272[6][1],&l_272[1][1],&g_69[2],&l_272[1][1],&l_272[6][1],(void*)0},{&l_272[6][1],(void*)0,&l_272[6][1],&l_272[1][1],&g_69[2],&l_272[1][1],&l_272[6][1],(void*)0,&l_272[6][1],&l_272[1][1]},{&g_69[2],(void*)0,&g_23[1][2][1],(void*)0,&g_69[2],&g_69[1],&g_69[2],(void*)0,&g_23[1][2][1],(void*)0},{&g_69[2],&l_272[1][1],&l_272[6][1],(void*)0,&l_272[6][1],&l_272[1][1],&g_69[2],&l_272[1][1],&l_272[6][1],(void*)0},{&l_272[6][1],(void*)0,&l_272[6][1],&l_272[1][1],&g_69[2],&l_272[1][1],&l_272[6][1],(void*)0,&l_272[6][1],&l_272[1][1]}},{{&g_69[2],(void*)0,&g_23[1][2][1],(void*)0,&g_69[2],&g_69[1],&g_69[2],(void*)0,&g_23[1][2][1],(void*)0},{&g_69[2],&l_272[1][1],&l_272[6][1],(void*)0,&l_272[6][1],&l_272[1][1],&g_69[2],&l_272[1][1],&l_272[6][1],(void*)0},{&l_272[6][1],(void*)0,&l_272[6][1],&l_272[1][1],&g_69[2],&l_272[1][1],&l_272[6][1],(void*)0,&l_272[6][1],&l_272[1][1]},{&g_69[2],(void*)0,&g_23[1][2][1],(void*)0,&g_69[2],&g_69[1],&g_69[2],(void*)0,&g_23[1][2][1],(void*)0},{&g_69[2],&l_272[1][1],&l_272[6][1],(void*)0,&l_272[6][1],&l_272[1][1],&g_69[2],&l_272[1][1],&l_272[6][1],(void*)0}}};
                        unsigned long long *l_285 = &g_286;
                        int i, j, k;
                        (*g_174) = func_30((*g_174), (p_18 = (p_20 = &l_258)), ((safe_unary_minus_func_int64_t_s(l_271)) > (l_257 & l_272[3][1])), g_69[0]);


                        ;
                        ;
                        (*p_18) = (((safe_lshift_func_int16_t_s_u((p_21 != (safe_rshift_func_uint16_t_u_u(((*l_232) = l_258), (!(l_272[1][0] | (((safe_mod_func_uint32_t_u_u((!(l_287 = ((&l_224 == &g_221[9]) <= ((*l_285) = ((safe_mod_func_uint64_t_u_u((g_116 || ((!((*l_184) = func_60(func_30(l_184, func_62(func_62(((*g_174) = (*g_174)), (l_281 = p_19), l_269, l_282), l_283[0][3][3], &l_215, (**g_101)), g_154, g_116)))) || 0x55588CD4L)), l_284)) | (*p_20)))))), (*p_20))) < g_263) || p_21)))))), l_288)) | g_107) >= p_21);

                        ;
                        (*p_18) = (safe_div_func_uint64_t_u_u((safe_sub_func_uint16_t_u_u(func_60(p_19), (*g_188))), p_21));
                    }
                    else
                    {
                        unsigned long long l_295 = 0UL;
                        unsigned char *l_296 = &l_251;
                        (*l_184) = (l_293 == l_293);
                        (**l_293) = g_294[9][0];


                        (*g_174) = (*g_174);
                    }


                    ;
                    ;
                    ;
                    return (*l_281);


                }
            }
        }
    }

    ;
    ;
    return l_297[6];
}







static int * func_24(int * p_25, int p_26, unsigned char p_27, int * p_28, int * p_29)
{
    unsigned l_163 = 0x1FE24285L;
    int *l_164[4][6] = {{&g_69[1],&g_69[2],&g_69[1],&g_69[1],&g_69[2],&g_69[1]},{&g_69[1],&g_69[2],&g_69[1],&g_69[1],&g_69[2],&g_69[1]},{&g_69[1],&g_69[2],&g_69[1],&g_69[1],&g_69[2],&g_69[1]},{&g_69[1],&g_69[2],&g_69[1],&g_69[1],&g_69[2],&g_69[1]}};
    int *l_169 = &g_23[5][5][2];
    short *l_170 = &g_78[9][1][2];
    int **l_171 = (void*)0;
    int **l_172 = &g_68[0];
    int ***l_173[2];
    int i, j;
    for (i = 0; i < 2; i++)
        l_173[i] = &l_172;
    (*l_172) = func_35(l_163, l_164[1][3], (safe_div_func_uint32_t_u_u((safe_lshift_func_int8_t_s_u((func_60(func_62(l_164[1][3], l_169, l_170, l_170)) < p_27), 4)), g_154)));
    g_174 = &g_68[1];
    return (*g_174);


}







static int * func_30(int * p_31, int * p_32, char p_33, unsigned char p_34)
{
    int *l_157[1][10][3] = {{{&g_69[0],&g_69[0],&g_69[0]},{&g_69[0],&g_69[2],&g_69[0]},{&g_69[0],&g_69[0],&g_69[2]},{&g_69[0],&g_69[2],&g_69[2]},{&g_69[2],&g_69[0],&g_69[0]},{&g_69[0],&g_69[0],&g_69[0]},{&g_69[0],&g_69[2],&g_69[0]},{&g_69[0],&g_69[0],&g_69[2]},{&g_69[0],&g_69[2],&g_69[2]},{&g_69[2],&g_69[0],&g_69[0]}}};
    int *l_160 = &g_23[2][4][2];
    short *l_161 = (void*)0;
    int i, j, k;
    (*p_31) = (func_60(l_157[0][9][0]) ^ (g_116 | g_116));
    (*p_32) = ((safe_sub_func_int32_t_s_s(func_60(func_62(l_160, p_31, l_161, l_161)), p_34)) < g_23[4][0][0]);
    return p_32;


}







static int * func_35(unsigned short p_36, int * p_37, unsigned char p_38)
{
    int *l_43 = &g_23[4][0][0];
    char l_49 = (-10L);
    short *l_50 = &g_51;
    int **l_67[8][4] = {{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}};
    long long l_149 = 3L;
    int i, j;
    for (p_38 = (-11); (p_38 < 49); p_38 = safe_add_func_int16_t_s_s(p_38, 9))
    {
        for (p_36 = 0; (p_36 != 20); ++p_36)
        {
            return l_43;


        }
    }
    g_68[0] = func_44(p_37, ((safe_add_func_uint16_t_u_u(((((*l_50) = l_49) != (+(safe_rshift_func_uint16_t_u_s(((g_23[4][0][0] <= ((safe_add_func_uint32_t_u_u(((safe_div_func_int8_t_s_s((safe_div_func_uint32_t_u_u(p_38, (l_149 = func_60(func_62(&g_23[4][0][0], (g_68[1] = l_43), l_50, l_50))))), (*l_43))) | p_36), (-1L))) ^ 0L)) & (-1L)), 14)))) <= g_78[2][0][1]), 1L)) & p_36));
    return &g_23[8][4][2];


}







static int * func_44(int * p_45, unsigned short p_46)
{
    return p_45;


}







static int func_60(int * p_61)
{
    int *l_72 = &g_69[2];
    short *l_77 = &g_78[2][0][1];
    short **l_76 = &l_77;
    unsigned char l_137 = 0xBCL;
    short *l_145 = (void*)0;
    int l_147 = 6L;
    int **l_148 = &g_68[1];
    (*l_72) = (*p_61);
    for (g_10 = 0; (g_10 <= 3); g_10 += 1)
    {
        int l_73 = 0x738E283FL;
        unsigned *l_74 = &g_75;
        short ***l_79 = (void*)0;
        short ***l_80[10][3][1] = {{{(void*)0},{(void*)0},{&l_76}},{{(void*)0},{(void*)0},{(void*)0}},{{&l_76},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{&l_76}},{{(void*)0},{(void*)0},{(void*)0}},{{&l_76},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{&l_76}},{{(void*)0},{(void*)0},{(void*)0}},{{&l_76},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{&l_76}}};
        int i, j, k;
        (*l_72) = (l_73 >= ((*l_74) = g_69[0]));
        l_76 = l_76;
        for (l_73 = 3; (l_73 >= 0); l_73 -= 1)
        {
            short **l_81 = &l_77;
            int l_92 = 0x45E92913L;
            int **l_96 = &g_68[1];
            int l_127 = 0xBE8B728AL;
            int *l_144[5][9] = {{&g_69[2],&g_23[4][0][0],&g_69[2],(void*)0,&g_69[2],&g_23[4][0][0],&g_69[2],(void*)0,&g_69[2]},{&g_23[1][4][3],&l_92,&g_69[2],&g_69[2],&l_92,&g_23[1][4][3],&l_92,&l_92,&g_23[1][4][3]},{&g_69[0],(void*)0,(void*)0,(void*)0,&g_69[0],(void*)0,(void*)0,(void*)0,&g_69[0]},{&l_92,&g_69[2],&g_69[2],&l_92,&g_23[1][4][3],&l_92,&l_92,&g_23[1][4][3],&l_92},{&g_69[2],(void*)0,&g_69[2],&g_23[4][0][0],&g_69[2],(void*)0,&g_69[2],&g_23[4][0][0],&g_69[2]}};
            short *l_146 = &g_78[2][0][1];
            int i, j;
        }
    }
    l_147 = ((*l_72) = 0x613AA2F0L);
    (*l_148) = p_61;


    return (*p_61);
}







static int * func_62(int * p_63, int * p_64, short * p_65, short * p_66)
{
    int *l_70[3];
    unsigned long long l_71 = 0xABED93686DF8401DLL;
    int i;
    for (i = 0; i < 3; i++)
        l_70[i] = &g_69[0];
    l_71 = 0x571F7FC0L;
    for (l_71 = 0; (l_71 <= 2); l_71 += 1)
    {
        int i;
        l_70[l_71] = l_70[l_71];
    }
    return &g_23[4][0][0];


}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_10, "g_10", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_23[i][j][k], "g_23[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_51, "g_51", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_69[i], "g_69[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_75, "g_75", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_78[i][j][k], "g_78[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_107, "g_107", print_hash_value);
    transparent_crc(g_116, "g_116", print_hash_value);
    transparent_crc(g_154, "g_154", print_hash_value);
    transparent_crc(g_193, "g_193", print_hash_value);
    transparent_crc(g_263, "g_263", print_hash_value);
    transparent_crc(g_286, "g_286", print_hash_value);
    transparent_crc(g_362, "g_362", print_hash_value);
    transparent_crc(g_501, "g_501", print_hash_value);
    transparent_crc(g_502, "g_502", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
