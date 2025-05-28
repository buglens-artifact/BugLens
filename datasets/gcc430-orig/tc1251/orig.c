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
   signed f0 : 20;
   long long f1;
   short f2;
};


static short g_7[4][3] = {{0x85A9L,0x85A9L,0x85A9L},{0x85A9L,0x85A9L,0x85A9L},{0x85A9L,0x85A9L,0x85A9L},{0x85A9L,0x85A9L,0x85A9L}};
static unsigned char g_13[10][8][3] = {{{0UL,0x89L,255UL},{0xEBL,0x39L,253UL},{1UL,1UL,254UL},{0xBAL,0xEBL,0xF0L},{254UL,5UL,0xA6L},{0xFDL,0UL,0UL},{1UL,1UL,5UL},{0x2BL,0xD0L,0x45L}},{{0UL,0xA3L,251UL},{255UL,255UL,1UL},{1UL,0UL,251UL},{0UL,251UL,0x98L},{0x0CL,3UL,0x0FL},{0UL,0x6CL,0x28L},{255UL,0x8BL,0x33L},{0x20L,0xBAL,0UL}},{{1UL,0x89L,0x11L},{0xDCL,0x20L,0x27L},{0UL,0x1EL,0x73L},{0UL,0xD0L,0x19L},{0x32L,0UL,0x83L},{0xD0L,5UL,0x39L},{255UL,0x11L,255UL},{0x27L,0x65L,0x6CL}},{{3UL,255UL,0x1EL},{0xDBL,0UL,0xB1L},{0x0CL,255UL,1UL},{0xDBL,0xC8L,0x6BL},{3UL,0x8BL,0x2AL},{0x27L,0x2BL,249UL},{255UL,0xBBL,0x11L},{0xD0L,0x27L,0x45L}},{{0x32L,255UL,254UL},{0UL,1UL,255UL},{0UL,1UL,1UL},{0xDCL,5UL,1UL},{1UL,0x88L,255UL},{0x20L,1UL,0x6CL},{255UL,1UL,1UL},{0UL,5UL,253UL}},{{0x0CL,0x1AL,1UL},{0xBAL,255UL,0xD0L},{254UL,0x8BL,0xA3L},{0x6DL,0xD0L,0xD0L},{0xBBL,255UL,0xBFL},{0xF0L,0x6DL,1UL},{0xAEL,3UL,5UL},{249UL,0x59L,0UL}},{{0xBFL,1UL,1UL},{255UL,0x45L,0x53L},{0x1AL,0x0FL,254UL},{0xFDL,0xF0L,0x19L},{255UL,0x1AL,0xBBL},{0x19L,1UL,255UL},{1UL,251UL,0x2AL},{0x28L,0x28L,0xB1L}},{{0UL,255UL,0x0CL},{0xDCL,0xE0L,0x6DL},{255UL,5UL,0xBFL},{0x59L,0xDCL,0x6DL},{1UL,255UL,0x0CL},{249UL,0x61L,0xB1L},{1UL,0xBFL,0x2AL},{253UL,0x45L,255UL}},{{0x89L,1UL,0xBBL},{0x65L,0xEBL,0x19L},{251UL,0x89L,254UL},{0xE0L,0xD0L,0x53L},{1UL,1UL,1UL},{0xD0L,255UL,0UL},{1UL,255UL,5UL},{1UL,0x19L,1UL}},{{254UL,0x93L,0xBFL},{0x61L,1UL,0xD0L},{0x0FL,0xBBL,0x62L},{253UL,0x27L,0xDBL},{0x7DL,1UL,0x32L},{251UL,0x98L,0x6BL},{0x70L,0UL,0x52L},{0x53L,5UL,0x61L}}};
static short g_25 = 0xFD6BL;
static short *g_24 = &g_25;
static short *g_28 = &g_25;
static int g_62 = 0xC9828A5DL;
static unsigned long long g_78 = 18446744073709551615UL;
static unsigned long long g_96[4] = {0xD3C73EBF557C78B2LL,0xD3C73EBF557C78B2LL,0xD3C73EBF557C78B2LL,0xD3C73EBF557C78B2LL};
static unsigned short g_99 = 0x015BL;
static int g_123 = (-9L);
static int *g_125 = &g_123;
static unsigned g_151[9][6][4] = {{{0x3998E518L,0x3998E518L,0x3998E518L,0x3998E518L},{0x3998E518L,0x3998E518L,0x3998E518L,0x3998E518L},{0x3998E518L,0x3998E518L,0x3998E518L,0x3998E518L},{0x3998E518L,0x3998E518L,0x3998E518L,0x3998E518L},{0x3998E518L,0x3998E518L,0x3998E518L,0x3998E518L},{0x3998E518L,0x3998E518L,0x3998E518L,0x3998E518L}},{{0x3998E518L,0x3998E518L,0x3998E518L,0x3998E518L},{0x3998E518L,0x3998E518L,0x3998E518L,0x3998E518L},{0x3998E518L,0x3998E518L,0x3998E518L,0x3998E518L},{0x3998E518L,0x3998E518L,0x3998E518L,0x3998E518L},{0x3998E518L,0x3998E518L,0x3998E518L,0x3998E518L},{0x3998E518L,0x3998E518L,0x3998E518L,0x3998E518L}},{{0x3998E518L,0x3998E518L,0x3998E518L,0x3998E518L},{0x3998E518L,0x3998E518L,0x3998E518L,0x3998E518L},{0x3998E518L,0x3998E518L,0x3998E518L,0x3998E518L},{0x3998E518L,0x3998E518L,0x3998E518L,0x3998E518L},{0x3998E518L,0x3998E518L,0x3998E518L,0x3998E518L},{0x3998E518L,0x3998E518L,0x3998E518L,0x3998E518L}},{{0x3998E518L,0x3998E518L,0x3998E518L,0x3998E518L},{0x3998E518L,0x3998E518L,0x3998E518L,0x3998E518L},{0x3998E518L,0x3998E518L,0x3998E518L,0x3998E518L},{0x3998E518L,0x3998E518L,0x3998E518L,0x3998E518L},{0x3998E518L,0x3998E518L,0x3998E518L,0x3998E518L},{0x3998E518L,0x3998E518L,0x3998E518L,0x3998E518L}},{{0x3998E518L,0x3998E518L,0x3998E518L,0x3998E518L},{0x3998E518L,0x3998E518L,0x3998E518L,0x3998E518L},{0x3998E518L,0x3998E518L,0x3998E518L,0x3998E518L},{0x3998E518L,0x3998E518L,0x3998E518L,0x3998E518L},{0x3998E518L,0x3998E518L,0x3998E518L,0x3998E518L},{0x3998E518L,0x3998E518L,0x3998E518L,0x3998E518L}},{{0x3998E518L,0x3998E518L,0x3998E518L,0x3998E518L},{0x3998E518L,0x3998E518L,0x3998E518L,0x3998E518L},{0x3998E518L,0x3998E518L,0x3998E518L,0x3998E518L},{0x3998E518L,0x3998E518L,0x3998E518L,0x3998E518L},{0x3998E518L,0x3998E518L,0x3998E518L,0x3998E518L},{0x3998E518L,0x3998E518L,0x3998E518L,0x3998E518L}},{{0x3998E518L,0x3998E518L,0x3998E518L,0x3998E518L},{0x3998E518L,0x3998E518L,0x3998E518L,0x3998E518L},{0x3998E518L,0x3998E518L,0x3998E518L,0x3998E518L},{0x3998E518L,0x3998E518L,0x3998E518L,0x3998E518L},{0x3998E518L,0x3998E518L,0x3998E518L,0x3998E518L},{0x3998E518L,0x3998E518L,0x3998E518L,0x3998E518L}},{{0x3998E518L,0x3998E518L,0x3998E518L,0x3998E518L},{0x3998E518L,0x3998E518L,0x3998E518L,0x3998E518L},{0x3998E518L,0x3998E518L,0x3998E518L,0x3998E518L},{0x3998E518L,0x3998E518L,0x3998E518L,0x3998E518L},{0x3998E518L,0x3998E518L,0x3998E518L,0x3998E518L},{0x3998E518L,0x3998E518L,0x3998E518L,0x3998E518L}},{{0x3998E518L,0x3998E518L,0x3998E518L,0x3998E518L},{0x3998E518L,0x3998E518L,0x3998E518L,0x3998E518L},{0x3998E518L,0x3998E518L,0x3998E518L,0x3998E518L},{0x3998E518L,0x3998E518L,0x3998E518L,0x3998E518L},{0x3998E518L,0x3998E518L,0x3998E518L,0x3998E518L},{0x3998E518L,0x3998E518L,0x3998E518L,0x3998E518L}}};
static union U0 g_179[9] = {{0x7623DB1CL},{0x7623DB1CL},{0x7623DB1CL},{0x7623DB1CL},{0x7623DB1CL},{0x7623DB1CL},{0x7623DB1CL},{0x7623DB1CL},{0x7623DB1CL}};
static union U0 *g_178 = &g_179[1];
static union U0 *g_183 = &g_179[1];
static const short g_189[7][10] = {{0xB491L,0x25D3L,1L,0x25D3L,0xB491L,9L,0x25D3L,4L,(-1L),0xB491L},{0xB491L,(-10L),(-3L),0x25D3L,0L,0L,0x25D3L,(-3L),(-10L),0xB491L},{0L,0x25D3L,(-3L),(-10L),0xB491L,0L,(-10L),4L,(-10L),0L},{0xB491L,0x25D3L,1L,0x25D3L,0xB491L,9L,0x25D3L,4L,(-1L),0xB491L},{0xB491L,(-10L),0L,4L,0L,0L,4L,0L,(-3L),0x84C2L},{0L,4L,0L,(-3L),0x84C2L,0L,(-3L),0xB491L,(-3L),0L},{0x84C2L,4L,9L,4L,0x84C2L,0xF0CBL,4L,0xB491L,1L,0x84C2L}};
static int g_191[3] = {0xD21A56CEL,0xD21A56CEL,0xD21A56CEL};
static unsigned g_204[10] = {1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL};
static long long g_207 = 4L;
static char g_245 = 9L;
static unsigned *g_258 = &g_151[8][2][0];
static const unsigned long long g_290 = 18446744073709551615UL;
static long long * const g_300[3][9][8] = {{{&g_207,&g_207,&g_207,&g_207,&g_207,&g_207,&g_207,&g_207},{&g_207,&g_207,&g_207,&g_207,&g_207,&g_207,&g_207,&g_207},{&g_207,&g_207,&g_207,&g_207,&g_207,(void*)0,&g_207,&g_207},{(void*)0,&g_207,(void*)0,&g_207,(void*)0,&g_207,&g_207,&g_207},{(void*)0,&g_207,(void*)0,(void*)0,&g_207,&g_207,(void*)0,(void*)0},{(void*)0,&g_207,(void*)0,&g_207,(void*)0,&g_207,(void*)0,&g_207},{(void*)0,&g_207,&g_207,&g_207,&g_207,&g_207,(void*)0,&g_207},{&g_207,&g_207,(void*)0,&g_207,&g_207,&g_207,(void*)0,&g_207},{&g_207,&g_207,&g_207,&g_207,&g_207,(void*)0,&g_207,&g_207}},{{&g_207,(void*)0,&g_207,&g_207,&g_207,&g_207,&g_207,&g_207},{&g_207,&g_207,&g_207,&g_207,&g_207,(void*)0,&g_207,&g_207},{&g_207,&g_207,(void*)0,&g_207,&g_207,&g_207,&g_207,(void*)0},{&g_207,&g_207,&g_207,&g_207,&g_207,&g_207,&g_207,&g_207},{&g_207,&g_207,(void*)0,(void*)0,&g_207,&g_207,&g_207,&g_207},{&g_207,&g_207,&g_207,&g_207,&g_207,&g_207,&g_207,&g_207},{&g_207,&g_207,&g_207,(void*)0,&g_207,&g_207,&g_207,&g_207},{&g_207,&g_207,&g_207,&g_207,(void*)0,&g_207,(void*)0,&g_207},{&g_207,&g_207,&g_207,&g_207,(void*)0,&g_207,&g_207,&g_207}},{{&g_207,&g_207,(void*)0,&g_207,&g_207,&g_207,&g_207,&g_207},{(void*)0,&g_207,&g_207,&g_207,&g_207,(void*)0,&g_207,&g_207},{&g_207,&g_207,&g_207,(void*)0,&g_207,(void*)0,&g_207,(void*)0},{(void*)0,&g_207,(void*)0,&g_207,&g_207,&g_207,&g_207,&g_207},{&g_207,&g_207,&g_207,&g_207,&g_207,&g_207,&g_207,(void*)0},{&g_207,&g_207,&g_207,&g_207,&g_207,(void*)0,(void*)0,&g_207},{&g_207,&g_207,(void*)0,&g_207,&g_207,(void*)0,&g_207,&g_207},{&g_207,&g_207,(void*)0,&g_207,(void*)0,&g_207,&g_207,&g_207},{&g_207,&g_207,(void*)0,&g_207,&g_207,(void*)0,&g_207,(void*)0}}};
static long long * const *g_299[10][4] = {{&g_300[0][5][1],&g_300[0][5][2],&g_300[2][0][5],&g_300[2][0][5]},{&g_300[2][0][5],&g_300[2][0][5],&g_300[0][5][1],&g_300[2][0][5]},{&g_300[2][0][5],&g_300[0][5][2],&g_300[2][0][5],&g_300[0][5][1]},{&g_300[2][0][5],&g_300[0][5][1],&g_300[0][5][1],&g_300[2][0][5]},{&g_300[2][0][5],&g_300[0][5][1],&g_300[2][0][5],&g_300[0][5][1]},{&g_300[0][5][1],&g_300[0][5][2],&g_300[2][0][5],&g_300[2][0][5]},{&g_300[2][0][5],&g_300[2][0][5],&g_300[0][5][1],&g_300[2][0][5]},{&g_300[2][0][5],&g_300[2][0][5],&g_300[0][5][1],&g_300[2][0][5]},{&g_300[0][5][1],&g_300[2][0][5],&g_300[2][0][5],&g_300[0][5][1]},{&g_300[0][5][2],&g_300[2][0][5],&g_300[2][0][5],&g_300[2][0][5]}};
static long long * const **g_298[10] = {&g_299[7][0],&g_299[7][0],&g_299[7][0],&g_299[7][0],&g_299[7][0],&g_299[7][0],&g_299[7][0],&g_299[7][0],&g_299[7][0],&g_299[7][0]};
static char *g_305 = &g_245;
static unsigned char g_325[5][1][8] = {{{1UL,0x18L,1UL,249UL,1UL,0x76L,0UL,0UL}},{{0x5CL,1UL,0x53L,0UL,0x49L,6UL,1UL,1UL}},{{0x5CL,1UL,1UL,1UL,1UL,0x5CL,0x18L,255UL}},{{1UL,0UL,6UL,0x18L,0x53L,0UL,0UL,251UL}},{{0x49L,255UL,0UL,0x18L,254UL,0x18L,0UL,255UL}}};
static const union U0 g_331 = {0xE0CBFE1FL};
static const short * const **g_341 = (void*)0;
static const short g_347 = 0x0A8BL;
static unsigned short g_375 = 4UL;
static unsigned short *g_384 = &g_375;
static unsigned char *g_420[4][2] = {{&g_325[4][0][0],(void*)0},{(void*)0,&g_325[4][0][0]},{(void*)0,(void*)0},{&g_325[4][0][0],(void*)0}};
static unsigned char **g_419 = &g_420[3][0];
static const short g_456 = 0x1427L;
static unsigned long long *g_483 = &g_96[2];
static unsigned long long **g_482[1][9] = {{&g_483,&g_483,&g_483,&g_483,&g_483,&g_483,&g_483,&g_483,&g_483}};
static short **g_512 = &g_24;
static short ***g_511 = &g_512;
static short ****g_510[8] = {&g_511,&g_511,&g_511,&g_511,&g_511,&g_511,&g_511,&g_511};
static unsigned short g_532 = 0x8A13L;
static const short *g_585[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
static const int g_632 = 0xC57A362CL;
static const int *g_631 = &g_632;
static unsigned long long g_645 = 0xEB804DC9B6320923LL;
static short g_674 = 1L;
static short * const g_673 = &g_674;



static unsigned long long func_1(void);
static short func_8(unsigned p_9, long long p_10, short * const p_11, short * p_12);
static const unsigned char func_16(long long p_17, short * p_18);
static short * func_20(short * p_21, short * p_22, int p_23);
static int * func_29(unsigned char p_30, short ** p_31, unsigned p_32, int p_33);
static unsigned char func_34(short * p_35, short ** p_36, union U0 p_37);
static short * func_38(char p_39, unsigned short p_40);
static unsigned func_43(const short * p_44, short * p_45, int * p_46, long long p_47, int * p_48);
static const short * func_49(short ** p_50, short * const p_51, const short * p_52);
static short ** func_55(unsigned long long p_56, const unsigned p_57);
static unsigned long long func_1(void)
{
    short *l_6 = &g_7[3][2];
    int l_19 = 5L;
    short *l_27 = &g_25;
    short **l_26[6];
    short *l_675 = &g_674;
    int *l_686[7] = {&g_123,&g_123,&g_191[0],&g_123,&g_123,&g_191[0],&g_123};
    unsigned short l_687 = 4UL;
    int **l_688 = &g_125;
    int i;
    for (i = 0; i < 6; i++)
        l_26[i] = &l_27;
    l_687 = ((safe_add_func_uint8_t_u_u((!(((*l_6) = (safe_rshift_func_uint8_t_u_u(1UL, 2))) | func_8(g_13[1][2][0], (0x09L != (safe_lshift_func_uint8_t_u_u(0xE3L, func_16(l_19, func_20(g_24, (g_28 = (void*)0), g_13[1][2][0]))))), g_673, l_675))), l_19)) > 0x10F34E1C31545393LL);

    ;
    ;


    ;
    (*l_688) = &g_191[1];
    (*g_125) = (-1L);
    return (*g_483);
}







static short func_8(unsigned p_9, long long p_10, short * const p_11, short * p_12)
{
    int **l_676 = (void*)0;
    int **l_677[7] = {&g_125,(void*)0,(void*)0,&g_125,(void*)0,(void*)0,&g_125};
    const int *l_683[4];
    int i;
    for (i = 0; i < 4; i++)
        l_683[i] = &g_191[1];
    g_125 = &g_191[1];
    for (g_245 = 0; (g_245 != 12); g_245 = safe_add_func_int16_t_s_s(g_245, 6))
    {
        const int **l_682[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int i;
        if (p_10)
            break;
        for (g_25 = (-14); (g_25 < 19); ++g_25)
        {
            (*g_125) = p_10;
        }
        l_683[2] = &g_632;
    }


    for (p_10 = 0; (p_10 == (-30)); p_10 = safe_sub_func_uint8_t_u_u(p_10, 5))
    {
        return (*p_11);
    }
    return (*g_24);
}







static const unsigned char func_16(long long p_17, short * p_18)
{
    int l_668 = 0x5C5F0750L;
    short **l_669[5];
    int **l_670 = &g_125;
    int *l_672 = &g_123;
    int **l_671 = &l_672;
    int i;
    for (i = 0; i < 5; i++)
        l_669[i] = (void*)0;
    (*l_671) = ((*l_670) = &g_191[1]);

    ;
    ;
    return (**l_670);
}







static short * func_20(short * p_21, short * p_22, int p_23)
{
    unsigned l_41 = 0x2CA8E1F9L;
    unsigned char l_42[8][9][2] = {{{2UL,3UL},{2UL,249UL},{0xE2L,0x0BL},{249UL,1UL},{0UL,1UL},{0x76L,255UL},{255UL,0xE2L},{246UL,0xE2L},{255UL,255UL}},{{0x76L,1UL},{0UL,1UL},{249UL,0x0BL},{0xE2L,249UL},{2UL,3UL},{2UL,249UL},{0xE2L,0x0BL},{249UL,1UL},{0UL,1UL}},{{0x76L,255UL},{255UL,0xE2L},{246UL,0xE2L},{255UL,255UL},{0x76L,1UL},{0UL,1UL},{249UL,0x0BL},{0xE2L,249UL},{2UL,3UL}},{{2UL,249UL},{0xE2L,0x0BL},{249UL,1UL},{0UL,1UL},{0x76L,255UL},{255UL,0xE2L},{246UL,0xE2L},{255UL,255UL},{0x76L,1UL}},{{0UL,1UL},{249UL,246UL},{0x0BL,2UL},{0x76L,0UL},{0x76L,2UL},{0x0BL,246UL},{2UL,1UL},{249UL,0xE2L},{1UL,1UL}},{{1UL,0x0BL},{2UL,0x0BL},{1UL,1UL},{1UL,0xE2L},{249UL,1UL},{2UL,246UL},{0x0BL,2UL},{0x76L,0UL},{0x76L,2UL}},{{0x0BL,246UL},{2UL,1UL},{249UL,0xE2L},{1UL,1UL},{1UL,0x0BL},{2UL,0x0BL},{1UL,1UL},{1UL,0xE2L},{249UL,1UL}},{{2UL,246UL},{0x0BL,2UL},{0x76L,0UL},{0x76L,2UL},{0x0BL,246UL},{2UL,1UL},{249UL,0xE2L},{1UL,1UL},{1UL,0x0BL}}};
    short **l_53 = &g_28;
    const short **l_184 = (void*)0;
    const short **l_185 = (void*)0;
    const short **l_186 = (void*)0;
    const short *l_188 = &g_189[4][1];
    const short **l_187 = &l_188;
    int *l_190[2];
    unsigned short *l_362 = &g_99;
    union U0 l_450 = {0xAE2C2784L};
    int **l_667 = &g_125;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_190[i] = &g_191[1];
    (*l_667) = func_29(func_34(func_38(l_41, ((*l_362) = (g_13[2][6][0] >= (!(l_42[5][8][0] == func_43(((*l_187) = func_49(l_53, &g_25, &g_25)), g_24, l_190[0], p_23, l_190[0])))))), l_53, l_450), l_53, p_23, p_23);

    ;

    ;

    ;
    return p_22;


}







static int * func_29(unsigned char p_30, short ** p_31, unsigned p_32, int p_33)
{
    for (g_245 = (-17); (g_245 > (-12)); g_245++)
    {
        if ((*g_631))
            break;
    }
    for (g_123 = 9; (g_123 >= 2); g_123 -= 1)
    {
        int **l_657 = &g_125;
        const long long *l_660 = (void*)0;
        char **l_661 = (void*)0;
        (*l_657) = &g_62;

        ;
        (*l_657) = &g_191[0];

        ;
        for (p_33 = 9; (p_33 >= 1); p_33 -= 1)
        {
            int *l_665 = &g_191[0];
            int i;
            for (g_207 = 1; (g_207 <= 9); g_207 += 1)
            {
                for (g_245 = 1; (g_245 <= 9); g_245 += 1)
                {
                    int i;
                    (*g_125) = ((7L && g_204[p_33]) > (safe_sub_func_uint8_t_u_u(((void*)0 == l_660), g_204[g_245])));
                }
                for (g_645 = 0; (g_645 <= 2); g_645 += 1)
                {
                    char ***l_662 = (void*)0;
                    char ***l_663 = (void*)0;
                    char ***l_664 = &l_661;
                    (*l_664) = l_661;
                }
            }
            (*l_657) = &g_62;

            ;
            if ((g_204[p_33] != 0x90L))
            {
                (*l_657) = &g_123;

                ;
                (*l_657) = l_665;

                ;
            }
            else
            {
                int ***l_666[4] = {&l_657,&l_657,&l_657,&l_657};
                int i;
                (**l_657) = 0xFCDA4777L;
                l_657 = l_657;
                g_631 = (void*)0;

                ;
            }

            ;
        }

        ;
    }

    ;
    return &g_62;


}







static unsigned char func_34(short * p_35, short ** p_36, union U0 p_37)
{
    const short **l_451 = (void*)0;
    const short **l_452 = (void*)0;
    const short *l_454 = &g_189[4][1];
    const short **l_453 = &l_454;
    const short *l_455 = &g_456;
    int l_457 = (-1L);
    int *l_459 = &l_457;
    int **l_458 = &l_459;
    long long *l_460 = &g_207;
    int *l_461 = &g_191[0];
    union U0 *l_466[9] = {&g_179[4],&g_179[4],&g_179[4],&g_179[4],&g_179[4],&g_179[4],&g_179[4],&g_179[4],&g_179[4]};
    unsigned * const *l_516 = &g_258;
    unsigned char **l_519[4][9][3] = {{{&g_420[3][1],&g_420[0][1],&g_420[3][1]},{&g_420[0][1],&g_420[3][1],&g_420[3][1]},{&g_420[3][1],&g_420[3][1],(void*)0},{&g_420[3][0],&g_420[0][1],(void*)0},{&g_420[3][1],(void*)0,(void*)0},{(void*)0,&g_420[3][1],&g_420[3][0]},{&g_420[0][1],(void*)0,&g_420[0][1]},{&g_420[0][1],(void*)0,(void*)0},{(void*)0,&g_420[0][1],&g_420[0][1]}},{{(void*)0,&g_420[0][1],&g_420[3][0]},{&g_420[3][1],(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,&g_420[3][1],&g_420[3][0]},{&g_420[0][1],(void*)0,&g_420[0][1]},{&g_420[0][1],(void*)0,(void*)0},{(void*)0,&g_420[0][1],&g_420[0][1]},{(void*)0,&g_420[0][1],&g_420[3][0]},{&g_420[3][1],(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,&g_420[3][1],&g_420[3][0]},{&g_420[0][1],(void*)0,&g_420[0][1]},{&g_420[0][1],(void*)0,(void*)0},{(void*)0,&g_420[0][1],&g_420[0][1]},{(void*)0,&g_420[0][1],&g_420[3][0]},{&g_420[3][1],(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,&g_420[3][1],&g_420[3][0]}},{{&g_420[0][1],(void*)0,&g_420[0][1]},{&g_420[0][1],(void*)0,(void*)0},{(void*)0,&g_420[0][1],&g_420[0][1]},{(void*)0,&g_420[0][1],&g_420[3][0]},{&g_420[3][1],(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,&g_420[3][1],&g_420[3][0]},{&g_420[0][1],(void*)0,&g_420[0][1]},{&g_420[0][1],(void*)0,(void*)0}}};
    int l_530 = 0xC970AC85L;
    unsigned char l_590 = 0UL;
    char **l_623 = &g_305;
    unsigned short l_650 = 0x759DL;
    unsigned short l_654 = 4UL;
    int i, j, k;
lbl_486:
    (*l_461) = func_43((l_455 = ((*l_453) = (void*)0)), func_38(l_457, l_457), ((*l_458) = g_258), ((*l_460) = p_37.f0), g_258);

    ;
    ;
    ;
    if (((*l_459) = (safe_mod_func_uint64_t_u_u((0x623DF4E2175B5E6ELL != (**l_458)), (((0L || (*p_35)) <= ((**l_458) ^ 0UL)) || (**l_458))))))
    {
        union U0 **l_467 = &g_183;
        unsigned char *l_468 = (void*)0;
        unsigned char *l_469 = &g_325[3][0][7];
        int l_470 = (-5L);
        short *l_471 = &g_25;
        unsigned l_476 = 18446744073709551606UL;
        short ****l_498 = (void*)0;
        char *l_537 = &g_245;
        char *l_538 = &g_245;
        (*l_459) = (safe_lshift_func_uint16_t_u_u(0x72D7L, func_43(&g_25, l_471, &g_191[1], p_37.f0, &l_470)));
        if (((*l_459) = ((void*)0 != &g_151[8][3][2])))
        {
            int **l_485 = &g_125;
            for (g_123 = (-12); (g_123 < 13); g_123 = safe_add_func_int64_t_s_s(g_123, 2))
            {
                int l_484 = (-4L);
                l_484 = (((*g_384) = p_37.f0) == (safe_add_func_uint32_t_u_u(l_476, (safe_unary_minus_func_uint64_t_u((g_191[1] > (safe_rshift_func_int8_t_s_s(((((*g_305) = (safe_add_func_int32_t_s_s((**l_458), (p_37.f0 >= (*l_459))))) || ((void*)0 == g_482[0][7])) ^ (*l_461)), l_470))))))));
                return p_37.f0;



            }
            (*l_485) = ((*l_458) = (void*)0);

            ;
            ;
            (*l_461) = (*l_461);
        }
        else
        {
            int *l_487[7];
            short **l_496 = &g_28;
            short ***l_495 = &l_496;
            short ****l_494 = &l_495;
            unsigned **l_561[4];
            int i;
            for (i = 0; i < 7; i++)
                l_487[i] = &g_191[1];
            for (i = 0; i < 4; i++)
                l_561[i] = &g_258;
            for (g_99 = 0; (g_99 <= 3); g_99 += 1)
            {
                int l_514 = 0x961D5FEAL;
                unsigned short *l_531 = &g_532;
                long long ***l_556 = (void*)0;
                int i;
            }
            if (((safe_mod_func_int32_t_s_s(((**l_458) = 0xFA471C38L), (~g_191[1]))) >= p_37.f0))
            {
                unsigned ***l_562 = &l_561[3];
                unsigned **l_564 = &g_258;
                unsigned ***l_563 = &l_564;
                (*l_563) = ((*l_562) = l_561[2]);
                for (g_25 = 0; (g_25 <= (-5)); --g_25)
                {
                    if (p_37.f0)
                        break;
                    (*l_458) = l_487[0];

                    ;
                }

                ;
            }
            else
            {
                short l_574 = 0x170DL;
                for (l_457 = (-15); (l_457 != 17); l_457 = safe_add_func_uint16_t_u_u(l_457, 4))
                {
                    for (l_476 = 0; (l_476 != 20); ++l_476)
                    {
                        int l_571 = 0xCEF59449L;
                        return l_571;



                    }
                    for (g_78 = 0; (g_78 != 30); g_78 = safe_add_func_int64_t_s_s(g_78, 4))
                    {
                        return p_37.f0;



                    }
                    (*l_459) = (+l_574);
                }
            }

            ;
            (*l_458) = (*l_458);
        }

        ;
    }
    else
    {
        unsigned l_577 = 0xB7085187L;
        int l_582 = 0x8BA621C0L;
        int *l_594 = &g_191[1];
        int *l_604 = &l_457;
        (**l_458) = ((safe_sub_func_int16_t_s_s((((*l_460) = (p_37.f0 & (p_37.f0 >= ((*g_483) = l_577)))) ^ (0x4014L <= (*g_384))), ((*l_461) ^ p_37.f0))) == (safe_mod_func_int64_t_s_s((*l_461), (safe_mod_func_uint8_t_u_u((l_582 = (p_37.f0 == (*l_461))), 0x0CL)))));
        for (l_577 = (-25); (l_577 < 20); l_577++)
        {
            int *l_603 = &l_582;
        }
        (*l_594) = (safe_sub_func_uint8_t_u_u(p_37.f0, (*l_604)));
    }

    ;
    for (g_78 = (-25); (g_78 > 10); ++g_78)
    {
        int l_647 = 1L;
        int l_653[9] = {8L,0xC5C8E9D3L,0xC5C8E9D3L,8L,0xC5C8E9D3L,0xC5C8E9D3L,8L,0xC5C8E9D3L,0xC5C8E9D3L};
        int i;
        (*l_461) = p_37.f0;
        for (l_530 = (-23); (l_530 > 20); ++l_530)
        {
            unsigned l_646 = 0xC9C47F10L;
            if ((safe_add_func_uint16_t_u_u((*g_384), (*p_35))))
            {
                unsigned l_635 = 0UL;
                if (((0x92L != p_37.f0) || (p_37.f0 >= (*p_35))))
                {
                    return p_37.f0;



                }
                else
                {
                    char ***l_624 = &l_623;
                    p_37.f0 = (((*g_305) = (p_37.f0 > p_37.f0)) > (((*l_624) = l_623) == &g_305));
                    (*l_458) = &g_62;

                    ;
                    for (g_245 = 13; (g_245 >= 7); g_245 = safe_sub_func_int16_t_s_s(g_245, 1))
                    {
                        if (l_457)
                            goto lbl_486;
                    }
                }

                ;
                for (l_457 = (-13); (l_457 != (-23)); l_457 = safe_sub_func_int8_t_s_s(l_457, 6))
                {
                    for (g_62 = 0; (g_62 != (-18)); g_62 = safe_sub_func_uint64_t_u_u(g_62, 9))
                    {
                        const int *l_634 = &g_62;
                        const int **l_633 = &l_634;
                        (*l_633) = (g_631 = &g_191[1]);

                        ;
                        ;
                        p_37.f0 = ((&p_35 != ((*g_511) = &p_35)) & l_635);

                        ;
                    }
                }
            }
            else
            {
                union U0 **l_636 = &g_183;
                int l_639 = 1L;
                unsigned long long *l_644[9][3] = {{&g_645,&g_645,(void*)0},{(void*)0,&g_645,&g_645},{(void*)0,&g_78,&g_645},{(void*)0,&g_645,(void*)0},{&g_645,(void*)0,&g_645},{&g_645,&g_645,&g_645},{(void*)0,(void*)0,(void*)0},{&g_645,&g_645,&g_645},{(void*)0,&g_78,(void*)0}};
                unsigned short *l_651 = &g_99;
                int l_652[10];
                int i, j;
                for (i = 0; i < 10; i++)
                    l_652[i] = (-7L);
                (*l_636) = &p_37;

                ;
                (*l_458) = (void*)0;

                ;
                for (g_207 = 0; (g_207 == (-12)); g_207 = safe_sub_func_uint64_t_u_u(g_207, 4))
                {
                    (*l_461) = l_639;
                }
                p_37.f0 = ((*l_461) = (p_37.f0 == (l_653[3] = (safe_rshift_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_u((!(l_639 = ((l_646 = ((*g_483) = 0UL)) ^ l_647))), (((*g_305) = (safe_lshift_func_int8_t_s_u(0x56L, ((*p_35) & ((*l_651) = l_650))))) ^ l_652[6]))) == (***g_511)), 15)))));
            }

            ;
        }
    }

    ;
    return l_654;



}







static short * func_38(char p_39, unsigned short p_40)
{
    const short l_366 = (-1L);
    unsigned char l_370 = 255UL;
    long long *l_373 = &g_207;
    long long **l_372 = &l_373;
    long long ***l_371[2];
    unsigned short *l_383 = &g_375;
    int *l_393[8] = {&g_191[1],&g_191[1],&g_191[1],&g_191[1],&g_191[1],&g_191[1],&g_191[1],&g_191[1]};
    int **l_444 = (void*)0;
    int **l_445 = &l_393[0];
    int i;
    for (i = 0; i < 2; i++)
        l_371[i] = &l_372;
    for (g_62 = 0; (g_62 != 20); g_62 = safe_add_func_int64_t_s_s(g_62, 6))
    {
        int *l_365 = &g_191[2];
        long long *l_367 = &g_179[1].f1;
        long long ***l_374 = &l_372;
        int l_424 = 0xCEC235C9L;
        (*l_365) = 1L;
        if (((0xF71C8740L != (p_39 <= (((*l_367) = (0x9BEB74CA7D177FFDLL > l_366)) <= 18446744073709551607UL))) ^ ((safe_add_func_uint16_t_u_u(((l_370 ^ (l_371[1] != l_374)) <= ((l_366 != p_39) | 0xCBL)), p_39)) == g_375)))
        {
            int *l_380 = &g_191[1];
            union U0 *l_385 = &g_179[1];
            long long *l_418 = &g_207;
            unsigned char **l_421[5][10] = {{&g_420[3][0],&g_420[3][0],&g_420[0][0],&g_420[0][0],&g_420[3][0],&g_420[3][0],&g_420[0][0],&g_420[0][0],&g_420[3][0],&g_420[3][0]},{&g_420[3][0],&g_420[0][0],&g_420[0][0],&g_420[3][0],&g_420[3][0],&g_420[0][0],&g_420[0][0],&g_420[3][0],&g_420[3][0],&g_420[0][0]},{&g_420[3][0],&g_420[3][0],&g_420[0][0],&g_420[0][0],&g_420[3][0],&g_420[3][0],&g_420[0][0],&g_420[0][0],&g_420[3][0],&g_420[3][0]},{&g_420[3][0],&g_420[0][0],&g_420[0][0],&g_420[3][0],&g_420[3][0],&g_420[0][0],&g_420[0][0],&g_420[3][0],&g_420[3][0],&g_420[0][0]},{&g_420[3][0],&g_420[3][0],&g_420[0][0],&g_420[0][0],&g_420[3][0],&g_420[3][0],&g_420[0][0],&g_420[0][0],&g_420[3][0],&g_420[3][0]}};
            int l_425 = 0x7D43EE36L;
            int i, j;
            for (p_39 = 13; (p_39 > 5); p_39 = safe_sub_func_int32_t_s_s(p_39, 6))
            {
                for (g_123 = 0; (g_123 >= (-10)); --g_123)
                {
                    return &g_25;


                }
            }
            l_380 = l_365;
            for (g_99 = (-28); (g_99 > 27); ++g_99)
            {
                int l_392 = 9L;
                unsigned **l_398 = &g_258;
                long long *l_417 = &g_207;
                if ((*l_365))
                {
                    unsigned l_391 = 0xAF3439A2L;
                    if ((p_39 <= ((g_384 = l_383) != (void*)0)))
                    {
                        union U0 **l_386 = (void*)0;
                        union U0 *l_387[5][8] = {{(void*)0,&g_179[3],&g_179[1],(void*)0,&g_179[1],(void*)0,(void*)0,&g_179[1]},{&g_179[1],&g_179[1],&g_179[1],&g_179[1],&g_179[0],&g_179[1],&g_179[1],&g_179[1]},{&g_179[1],&g_179[1],(void*)0,&g_179[3],&g_179[1],&g_179[1],&g_179[1],&g_179[3]},{&g_179[1],&g_179[1],&g_179[1],&g_179[1],&g_179[1],&g_179[1],&g_179[0],&g_179[1]},{&g_179[5],&g_179[1],(void*)0,&g_179[1],(void*)0,(void*)0,&g_179[1],(void*)0}};
                        int i, j;
                        g_183 = (l_387[2][7] = l_385);

                        ;
                    }
                    else
                    {
                        union U0 **l_388 = &g_183;
                        int *l_389 = &g_62;
                        int **l_390 = &l_380;
                        (*l_388) = &g_179[2];

                        ;
                        (*l_390) = l_389;

                        ;
                        (*l_365) = (l_392 = l_391);
                        (*l_365) = p_39;
                    }

                    ;
                }
                else
                {
                    l_393[4] = &g_191[1];
                    return l_383;


                }

                ;
                if ((p_39 >= (((0x5323L > ((((safe_mod_func_uint32_t_u_u((+p_39), (safe_sub_func_uint64_t_u_u((l_398 == (void*)0), (safe_add_func_int16_t_s_s(p_39, (*g_384))))))) >= ((**l_398) = (*l_365))) == g_290) || 0x6D02A296EA8E6980LL)) != 0xF531C439L) && p_40)))
                {
                    for (g_78 = 17; (g_78 <= 52); ++g_78)
                    {
                        unsigned char *l_405 = &g_325[4][0][3];
                        int l_406[6][6][1] = {{{(-1L)},{1L},{0x3D11B82DL},{1L},{(-1L)},{(-2L)}},{{(-1L)},{1L},{0x3D11B82DL},{1L},{(-1L)},{(-2L)}},{{(-1L)},{1L},{0x3D11B82DL},{1L},{(-1L)},{(-2L)}},{{(-1L)},{1L},{0x3D11B82DL},{1L},{(-1L)},{(-2L)}},{{(-1L)},{1L},{0x3D11B82DL},{1L},{(-1L)},{(-2L)}},{{(-1L)},{1L},{0x3D11B82DL},{1L},{(-1L)},{(-2L)}}};
                        int i, j, k;
                        (*l_365) = l_392;
                        if ((*l_380))
                            continue;
                        l_406[0][2][0] = (safe_sub_func_int8_t_s_s((*g_305), ((*l_405) = g_204[8])));
                    }
                    for (g_123 = 0; (g_123 <= 7); g_123 += 1)
                    {
                        int l_407[3];
                        int i;
                        for (i = 0; i < 3; i++)
                            l_407[i] = (-6L);
                        if (p_40)
                            break;
                        (*l_365) = p_39;
                        l_407[1] = ((*l_365) = g_331.f0);
                    }
                }
                else
                {
                    int **l_408 = (void*)0;
                    int **l_409 = (void*)0;
                    int **l_410 = &l_393[4];
                    short *l_422 = (void*)0;
                    (*l_410) = &l_392;


                    if ((safe_sub_func_uint8_t_u_u(0UL, ((safe_lshift_func_int16_t_s_u((safe_lshift_func_uint16_t_u_u(((((**l_410) && (246UL || ((*g_305) = (l_392 == g_25)))) == p_40) > (((l_417 != l_418) > ((g_347 > 0xE1L) || (-6L))) & (*l_380))), (**l_410))), (*g_384))) && (*l_365)))))
                    {
                        long long l_423 = 0x5087847914ABDAEDLL;
                        l_421[2][3] = g_419;
                        l_423 = (p_39 == ((*g_305) != (l_422 == (void*)0)));
                    }
                    else
                    {
                        (*l_410) = &l_392;
                    }
                    return &g_25;


                }
            }

            ;
            (*l_365) = (+(((p_39 == p_39) != p_39) || (p_39 & (p_40 != (+(l_425 = l_424))))));
        }
        else
        {
            unsigned char l_434 = 0UL;
            const int l_440 = (-2L);
            int l_441 = 0x255D955EL;
            int l_443 = 8L;
            for (g_245 = 2; (g_245 <= 9); g_245 += 1)
            {
                char *l_437[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                int i;
                if ((safe_add_func_uint16_t_u_u((~(safe_add_func_uint8_t_u_u(((void*)0 != &g_258), ((safe_lshift_func_int8_t_s_u((*g_305), 2)) && (safe_rshift_func_uint16_t_u_u(0xB56BL, 10)))))), (((p_39 = (l_434 && (safe_add_func_int16_t_s_s(p_39, (*g_24))))) ^ (safe_rshift_func_uint8_t_u_u(p_40, l_440))) == l_441))))
                {
                    int **l_442[6] = {&l_393[4],&l_393[4],&l_393[4],&l_393[4],&l_393[4],&l_393[4]};
                    int i;
                    g_125 = &l_424;

                    ;
                }
                else
                {
                    l_443 = p_40;
                }
            }


        }


    }
    (*l_445) = &g_62;


    for (p_40 = 14; (p_40 != 38); ++p_40)
    {
        if ((**l_445))
            break;
        for (g_375 = 0; (g_375 != 38); ++g_375)
        {
            (**l_445) = ((p_39 > 0UL) || p_40);
        }
    }
    for (g_245 = 0; g_245 < 2; g_245 += 1)
    {
        l_371[g_245] = &l_372;
    }
    return &g_25;


}







static unsigned func_43(const short * p_44, short * p_45, int * p_46, long long p_47, int * p_48)
{
    unsigned l_199 = 0x42BC99A0L;
    int l_268 = 0x0541D072L;
    long long l_272[3];
    union U0 **l_281 = (void*)0;
    short **l_294 = &g_24;
    const long long *l_304 = &g_207;
    const long long **l_303 = &l_304;
    const long long ***l_302 = &l_303;
    int l_358 = 0xB21E731DL;
    int i;
    for (i = 0; i < 3; i++)
        l_272[i] = 0x5708CA354A29A4ACLL;
lbl_287:
    for (g_62 = 8; (g_62 == (-26)); --g_62)
    {
        unsigned *l_255[7][9][4] = {{{&g_204[1],&g_204[1],&g_151[0][3][0],&g_204[1]},{&g_204[1],&g_204[9],&g_204[1],&g_204[1]},{&g_151[8][2][0],&g_151[8][2][0],&g_204[1],&g_204[1]},{&g_204[5],&g_204[1],&g_151[8][2][0],&g_204[9]},{&g_204[1],&g_151[8][2][0],&g_151[0][3][0],&g_151[8][2][0]},{(void*)0,&g_151[8][2][0],(void*)0,&g_204[9]},{&g_151[8][2][0],&g_204[1],&g_204[1],&g_204[1]},{&g_204[1],&g_151[8][2][0],&g_204[1],&g_204[1]},{&g_204[0],&g_204[1],&g_204[1],&g_204[0]}},{{&g_204[1],&g_204[9],&g_204[1],(void*)0},{&g_151[8][2][0],&g_204[1],(void*)0,&g_204[1]},{(void*)0,&g_204[1],&g_151[0][3][0],&g_204[1]},{&g_204[1],&g_204[1],&g_151[8][2][0],(void*)0},{&g_204[5],&g_204[9],&g_204[1],&g_204[0]},{&g_151[8][2][0],&g_204[1],&g_204[1],&g_204[1]},{&g_151[8][2][0],&g_151[8][2][0],&g_204[1],&g_204[1]},{&g_204[5],&g_204[1],&g_151[8][2][0],&g_204[9]},{&g_204[1],&g_151[8][2][0],&g_151[0][3][0],&g_151[8][2][0]}},{{(void*)0,&g_151[8][2][0],(void*)0,&g_204[9]},{&g_151[8][2][0],&g_204[1],&g_204[1],&g_204[1]},{&g_204[1],&g_151[8][2][0],&g_204[1],&g_204[1]},{&g_204[0],&g_204[1],&g_204[1],&g_204[0]},{&g_204[1],&g_204[9],&g_204[1],(void*)0},{&g_151[8][2][0],&g_204[1],(void*)0,&g_204[1]},{(void*)0,&g_204[1],&g_151[0][3][0],&g_204[1]},{&g_204[1],&g_204[0],&g_151[0][3][0],&g_204[1]},{&g_151[8][2][0],&g_204[1],&g_204[5],&g_204[1]}},{{&g_151[0][3][0],&g_204[1],&g_204[9],&g_204[9]},{&g_151[0][3][0],&g_151[0][3][0],&g_204[5],&g_204[1]},{&g_151[8][2][0],&g_204[9],&g_151[0][3][0],&g_204[1]},{&g_204[1],(void*)0,&g_204[1],&g_151[0][3][0]},{&g_204[1],(void*)0,&g_204[1],&g_204[1]},{(void*)0,&g_204[9],&g_151[8][2][0],&g_204[1]},{&g_204[1],&g_151[0][3][0],&g_204[1],&g_204[9]},{&g_204[1],&g_204[1],&g_204[1],&g_204[1]},{&g_204[1],&g_204[1],&g_151[8][2][0],&g_204[1]}},{{(void*)0,&g_204[0],&g_204[1],&g_204[5]},{&g_204[1],&g_204[5],&g_204[1],&g_204[5]},{&g_204[1],&g_204[0],&g_151[0][3][0],&g_204[1]},{&g_151[8][2][0],&g_204[1],&g_204[5],&g_204[1]},{&g_151[0][3][0],&g_204[1],&g_204[9],&g_204[9]},{&g_151[0][3][0],&g_151[0][3][0],&g_204[5],&g_204[1]},{&g_151[8][2][0],&g_204[9],&g_151[0][3][0],&g_204[1]},{&g_204[1],(void*)0,&g_204[1],&g_151[0][3][0]},{&g_204[1],(void*)0,&g_204[1],&g_204[1]}},{{(void*)0,&g_204[9],&g_151[8][2][0],&g_204[1]},{&g_204[1],&g_151[0][3][0],&g_204[1],&g_204[9]},{&g_204[1],&g_204[1],&g_204[1],&g_204[1]},{&g_204[1],&g_204[1],&g_151[8][2][0],&g_204[1]},{(void*)0,&g_204[1],&g_204[1],&g_151[8][2][0]},{&g_204[1],&g_151[8][2][0],&g_204[5],&g_151[8][2][0]},{&g_204[0],&g_204[1],&g_204[1],&g_204[1]},{(void*)0,&g_204[1],&g_151[8][2][0],&g_151[8][2][0]},{&g_204[1],&g_204[0],&g_204[1],&g_204[1]}},{{&g_204[1],&g_204[1],&g_151[8][2][0],&g_204[9]},{(void*)0,&g_204[1],&g_204[1],&g_204[1]},{&g_204[0],&g_204[1],&g_204[5],&g_204[1]},{&g_204[1],&g_204[1],&g_204[1],&g_204[1]},{&g_204[1],&g_204[1],&g_151[0][3][0],&g_204[9]},{&g_204[9],&g_204[1],&g_204[0],&g_204[1]},{&g_151[8][2][0],&g_204[0],&g_204[0],&g_151[8][2][0]},{&g_204[9],&g_204[1],&g_151[0][3][0],&g_204[1]},{&g_204[1],&g_204[1],&g_204[1],&g_151[8][2][0]}}};
        unsigned long long *l_259 = &g_96[3];
        int **l_265 = &g_125;
        int i, j, k;
        for (g_123 = 0; g_123 < 9; g_123 += 1)
        {
            union U0 tmp = {1L};
            g_179[g_123] = tmp;
        }
        g_125 = &g_191[1];

        ;
        for (g_78 = 12; (g_78 <= 55); g_78 = safe_add_func_uint16_t_u_u(g_78, 6))
        {
            long long l_219[3];
            int l_262 = 1L;
            const unsigned *l_264 = &g_204[1];
            int i;
            for (i = 0; i < 3; i++)
                l_219[i] = 0x6F2FD1BDCF168B12LL;
            for (g_99 = (-18); (g_99 < 10); ++g_99)
            {
                int **l_198 = &g_125;
                (*l_198) = &g_191[0];
                if ((*p_46))
                    break;
                if ((l_199 = (*p_48)))
                {
                    const unsigned char l_200 = 0x8BL;
                    (*p_46) = (*p_46);
                    if (l_200)
                        continue;
                }
                else
                {
                    unsigned *l_203 = &g_204[1];
                    long long *l_206 = &g_207;
                    long long **l_205 = &l_206;
                    long long *l_209 = &g_207;
                    long long **l_208 = &l_209;
                    union U0 **l_218 = &g_183;
                    (*g_125) = ((g_151[8][2][0] == p_47) != ((safe_sub_func_int32_t_s_s(0x0025C80AL, (~((*l_203) = g_123)))) != (((*l_205) = &p_47) != ((*l_208) = &p_47))));

                    ;
                    ;
                    (*p_48) = (safe_lshift_func_uint8_t_u_u(g_191[1], ((safe_rshift_func_uint8_t_u_s(255UL, (g_78 != ((((safe_sub_func_uint32_t_u_u((safe_add_func_int64_t_s_s(((**l_205) = (-9L)), (**l_198))), (**l_198))) < ((void*)0 == l_218)) <= (&g_125 != (void*)0)) == l_219[2])))) < (**l_198))));
                }
            }
            for (g_25 = 0; (g_25 == 22); g_25++)
            {
                union U0 **l_235 = &g_178;
                unsigned l_251 = 0UL;
                for (g_207 = 0; (g_207 <= 9); g_207++)
                {
                    long long l_224 = 4L;
                    unsigned short *l_225 = (void*)0;
                    unsigned short *l_226 = (void*)0;
                    unsigned short *l_227 = &g_99;
                    unsigned *l_228 = &g_151[4][0][0];
                    unsigned l_231 = 0xE12B1052L;
                    char *l_260 = &g_245;
                    short *l_261 = &g_179[1].f2;
                    unsigned **l_263 = &l_228;
                }
            }
        }
        (*l_265) = p_46;

        ;
    }
    for (p_47 = (-7); (p_47 != (-24)); p_47 = safe_sub_func_int8_t_s_s(p_47, 8))
    {
        long long l_279 = 0L;
        int *l_280 = &g_123;
        long long *l_285 = &g_179[1].f1;
        union U0 **l_286[3][6] = {{&g_178,&g_178,&g_178,&g_178,&g_178,&g_178},{&g_178,&g_178,&g_178,&g_178,&g_178,&g_178},{&g_178,&g_178,&g_178,&g_178,&g_178,&g_178}};
        int i, j;
        if ((l_268 = 0L))
        {
            int **l_269 = &g_125;
            (*l_269) = &g_191[1];

            ;
            (*p_48) = (safe_add_func_int8_t_s_s(l_272[1], (safe_mod_func_int8_t_s_s(p_47, (safe_add_func_uint16_t_u_u(g_96[2], (g_13[1][2][0] ^ (safe_lshift_func_uint16_t_u_u(l_279, 0)))))))));
            l_280 = p_46;

            ;
            if (l_268)
                break;
        }
        else
        {
            return (*g_258);
        }

        ;
        ;
        (*g_125) = ((((void*)0 == l_281) & (*l_280)) | ((safe_sub_func_int64_t_s_s(((*l_285) = (safe_unary_minus_func_uint8_t_u(p_47))), 1L)) == g_151[3][5][1]));
        g_183 = &g_179[1];

        ;
        if (l_268)
            goto lbl_287;
    }
    for (g_123 = 2; (g_123 >= 0); g_123 -= 1)
    {
        const unsigned long long *l_291 = (void*)0;
        short **l_295 = &g_28;
        long long * const **l_301[9];
        int l_306 = 0x44EE2E7EL;
        int *l_337 = &g_191[2];
        int *l_353 = (void*)0;
        int i;
        for (i = 0; i < 9; i++)
            l_301[i] = &g_299[3][0];
    }
    return p_47;
}







static const short * func_49(short ** p_50, short * const p_51, const short * p_52)
{
    short **l_54[8][2][10] = {{{&g_28,&g_24,(void*)0,&g_28,&g_28,&g_28,&g_24,&g_24,&g_24,&g_28},{&g_28,(void*)0,&g_28,&g_24,&g_28,&g_24,&g_24,&g_28,&g_28,&g_24}},{{&g_28,&g_24,&g_24,&g_24,&g_24,&g_28,&g_24,&g_24,&g_28,&g_28},{&g_28,&g_28,&g_24,&g_24,&g_24,(void*)0,&g_28,&g_28,&g_28,&g_24}},{{&g_28,&g_24,&g_28,(void*)0,&g_24,&g_28,&g_24,&g_24,&g_24,&g_28},{&g_28,&g_24,&g_24,&g_24,&g_28,&g_24,&g_28,&g_24,&g_28,&g_24}},{{&g_28,&g_24,&g_28,&g_24,&g_28,&g_28,&g_28,&g_24,(void*)0,(void*)0},{(void*)0,&g_28,&g_28,&g_24,&g_24,&g_28,&g_24,&g_24,&g_24,(void*)0}},{{(void*)0,&g_24,&g_28,&g_28,&g_28,&g_28,&g_28,&g_24,&g_28,&g_24},{&g_24,&g_28,&g_24,&g_28,&g_28,(void*)0,(void*)0,(void*)0,(void*)0,&g_28}},{{(void*)0,&g_28,&g_28,(void*)0,&g_24,&g_28,&g_24,&g_28,&g_28,&g_24},{&g_28,&g_28,&g_24,&g_28,&g_24,&g_28,&g_28,&g_28,&g_24,(void*)0}},{{&g_28,&g_28,&g_24,&g_28,&g_28,&g_28,&g_28,(void*)0,&g_24,&g_28},{&g_24,&g_28,&g_24,&g_24,&g_28,(void*)0,&g_28,(void*)0,&g_28,&g_24}},{{&g_28,&g_28,&g_28,&g_28,&g_24,(void*)0,&g_28,&g_24,(void*)0,&g_28},{&g_24,&g_28,&g_24,&g_28,&g_28,&g_24,&g_24,&g_24,&g_28,&g_28}}};
    int l_58 = 3L;
    short **l_139[7] = {&g_28,&g_28,&g_28,&g_28,&g_28,&g_28,&g_28};
    short ***l_138 = &l_139[5];
    int l_150 = 1L;
    long long **l_172[4];
    unsigned long long *l_175[1];
    union U0 **l_182[3];
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_172[i] = (void*)0;
    for (i = 0; i < 1; i++)
        l_175[i] = &g_96[2];
    for (i = 0; i < 3; i++)
        l_182[i] = (void*)0;
    if ((((l_54[1][1][0] != ((*l_138) = func_55(l_58, l_58))) ^ l_58) <= g_13[1][2][0]))
    {
        char l_146 = 0x2DL;
        int l_149[6][6] = {{5L,0xAC2CD0B6L,0x99F8D79DL,0xDD4F9EB4L,(-1L),(-1L)},{0xAC2CD0B6L,0L,0L,0xAC2CD0B6L,0x96D56EF3L,(-1L)},{1L,(-1L),0x99F8D79DL,(-8L),0xDD4F9EB4L,(-8L)},{0x96D56EF3L,0L,0x96D56EF3L,0xC0C57D8AL,0xDD4F9EB4L,5L},{0x99F8D79DL,(-1L),1L,0x96D56EF3L,0x96D56EF3L,1L},{0L,0L,0xAC2CD0B6L,0x96D56EF3L,(-1L),0xC0C57D8AL}};
        int i, j;
        for (g_99 = 0; (g_99 != 23); g_99++)
        {
            unsigned long long *l_152 = &g_78;
            unsigned long long *l_153 = &g_96[1];
            int l_154 = 0xDA0F0CF8L;
            l_154 = (l_58 | ((safe_mod_func_uint64_t_u_u((safe_mod_func_uint64_t_u_u((g_25 || g_99), ((*l_152) = ((!l_146) | (safe_rshift_func_int16_t_s_s((l_149[4][5] = l_58), (g_151[8][2][0] = (l_150 = (*g_24))))))))), ((*l_153) = l_146))) != l_146));
            return (*p_50);


        }
        for (g_62 = 25; (g_62 == 10); g_62 = safe_sub_func_uint32_t_u_u(g_62, 7))
        {
            int **l_157 = (void*)0;
            int **l_158 = &g_125;
            (*l_158) = &g_62;

            ;
            return &g_25;


        }
    }
    else
    {
        int **l_159 = &g_125;
        unsigned long long *l_163[4];
        const short *l_171 = &g_25;
        int i;
        for (i = 0; i < 4; i++)
            l_163[i] = &g_78;
        (*l_159) = &g_62;

        ;
        if ((safe_unary_minus_func_int32_t_s(((*g_125) = (l_150 <= (safe_sub_func_int64_t_s_s(g_96[2], (l_163[1] == &g_96[2]))))))))
        {
            int l_169[10][8][3] = {{{0x5D452AC6L,8L,0x8EEBD4AFL},{0x8E686C56L,(-8L),0xE1FE0044L},{(-4L),(-1L),3L},{0x8A259DFFL,(-5L),5L},{2L,2L,0x1DE66CF5L},{0x46899120L,0x8A259DFFL,0xC6894C8FL},{0x7F148B74L,5L,0x7687A611L},{0xD125F7AEL,(-1L),1L}},{{0x72F705CCL,0x7F148B74L,0x7687A611L},{(-1L),0x7F129304L,0xC6894C8FL},{(-1L),0xF1E68E90L,0x1DE66CF5L},{(-1L),(-1L),5L},{1L,3L,2L},{(-8L),0L,0xB8070DB4L},{0x9B0027CEL,0x1DE66CF5L,0L},{5L,(-1L),0L}},{{0x5D452AC6L,0x7381F490L,0x5D452AC6L},{1L,1L,1L},{0x2C680C6BL,8L,0x5565FB1AL},{0x7F129304L,0x6768D720L,1L},{5L,(-7L),0xF1E68E90L},{0x7F129304L,0xDFB8A680L,(-1L)},{0x2C680C6BL,0x5D452AC6L,1L},{1L,0xCAC37E68L,1L}},{{0x5D452AC6L,1L,0L},{5L,0L,0xDFB8A680L},{0x9B0027CEL,(-1L),5L},{(-8L),(-1L),0L},{1L,0xBFAB05A5L,0xBFAB05A5L},{(-1L),0L,(-8L)},{(-1L),0xF6268143L,3L},{(-1L),1L,1L}},{{0x72F705CCL,1L,(-8L)},{0xD125F7AEL,1L,0xD269C2A3L},{0x7F148B74L,0xF6268143L,(-4L)},{(-5L),0xC6894C8FL,1L},{0x7F148B74L,3L,(-5L)},{(-1L),0xF0FED554L,1L},{(-8L),0x2BD449D2L,0x56B61A9CL},{1L,0x8A259DFFL,0x6768D720L}},{{0x8EEBD4AFL,0xF6268143L,0L},{0x6768D720L,0x6768D720L,1L},{1L,0xF1E68E90L,1L},{5L,0x8E686C56L,(-1L)},{(-4L),5L,(-7L)},{(-1L),5L,(-1L)},{0x7381F490L,0x5A38379FL,1L},{0x46899120L,(-1L),1L}},{{0L,8L,0L},{8L,0xCAC37E68L,0x6768D720L},{(-1L),0L,0x56B61A9CL},{0xC6894C8FL,1L,1L},{0L,2L,(-5L)},{1L,0x7F129304L,1L},{(-7L),0x8EEBD4AFL,1L},{0L,(-1L),(-2L)}},{{0x5A38379FL,(-1L),0x5565FB1AL},{0x8E686C56L,0xDFB8A680L,(-1L)},{0x5A38379FL,(-4L),2L},{0L,1L,0L},{(-7L),0x7F148B74L,3L},{1L,0xE1FE0044L,0x8A259DFFL},{0L,0x5D452AC6L,(-4L)},{0xC6894C8FL,0x46899120L,0x8E686C56L}},{{(-1L),0x86F7500BL,0x5D452AC6L},{8L,(-1L),(-1L)},{0L,(-5L),0x2BD449D2L},{(-5L),(-6L),0x6768D720L},{8L,0x5565FB1AL,0L},{(-1L),0L,(-2L)},{1L,0x5565FB1AL,0x7687A611L},{0L,(-6L),0L}},{{0xF6268143L,1L,0x8EEBD4AFL},{5L,0xCAC37E68L,0xBCD5FB04L},{0L,0xBFAB05A5L,1L},{0xD269C2A3L,(-5L),0L},{0x5565FB1AL,0xF1E68E90L,(-1L)},{0xD125F7AEL,0xB8070DB4L,0x8A259DFFL},{(-1L),(-1L),(-1L)},{0xE1FE0044L,(-1L),8L}}};
            int i, j, k;
            for (l_58 = (-1); (l_58 <= 26); l_58 = safe_add_func_uint64_t_u_u(l_58, 3))
            {
                long long l_166 = 1L;
                int *l_170[7][7] = {{&g_62,&g_62,&l_58,&g_123,(void*)0,&g_123,&l_58},{&g_62,&g_62,&l_58,&g_123,(void*)0,&g_123,&l_58},{&g_62,&g_62,&l_58,&g_123,(void*)0,&g_123,&l_58},{&g_62,&g_62,&l_58,&g_123,(void*)0,&g_123,&l_58},{&g_62,&g_62,&l_58,&g_123,(void*)0,&g_123,&l_58},{&g_62,&g_62,&l_58,&g_123,(void*)0,&g_123,&l_58},{&g_62,&g_62,&l_58,&g_123,(void*)0,&g_123,&l_58}};
                int i, j;
                if (l_166)
                    break;
                (*l_159) = &l_58;

                ;
                g_123 = (safe_sub_func_int8_t_s_s(((g_13[1][2][0] == l_58) || (l_169[7][7][0] && l_58)), 0x8EL));
                if ((*g_125))
                    continue;
            }

            ;
            return l_171;



        }
        else
        {
            long long ***l_173 = (void*)0;
            long long ***l_174 = &l_172[2];
            (*l_174) = l_172[2];
        }
        (*g_125) = (((&l_58 == (void*)0) & 0xDF932BF644599FCFLL) != (((*g_24) ^ ((void*)0 != l_175[0])) && 5L));
    }

    ;

    for (l_58 = (-2); (l_58 == 29); l_58 = safe_add_func_int16_t_s_s(l_58, 3))
    {
        union U0 *l_180[7] = {&g_179[4],&g_179[4],&g_179[4],&g_179[4],&g_179[4],&g_179[4],&g_179[4]};
        int l_181 = 0x8AEBE663L;
        int i;
        l_180[2] = g_178;
        (*g_125) = ((1L > (l_150 = (l_181 | l_181))) | 0xA79FL);
    }
    g_183 = &g_179[1];
    return (*p_50);


}







static short ** func_55(unsigned long long p_56, const unsigned p_57)
{
    short l_59 = 0xC491L;
    int *l_61 = &g_62;
    long long l_95 = 0x64756850E27E8F7BLL;
    int *l_100 = &g_62;
    int **l_133 = (void*)0;
    int **l_134 = (void*)0;
    int **l_135 = (void*)0;
    int **l_136 = &g_125;
    short **l_137 = &g_28;
    if (l_59)
    {
        char l_60[1];
        int **l_64 = (void*)0;
        int **l_65 = (void*)0;
        int **l_66[9][5] = {{&l_61,(void*)0,&l_61,&l_61,&l_61},{&l_61,(void*)0,&l_61,(void*)0,&l_61},{&l_61,(void*)0,(void*)0,&l_61,(void*)0},{&l_61,&l_61,&l_61,&l_61,&l_61},{&l_61,&l_61,(void*)0,(void*)0,(void*)0},{&l_61,&l_61,&l_61,&l_61,&l_61},{(void*)0,(void*)0,&l_61,(void*)0,&l_61},{(void*)0,(void*)0,&l_61,&l_61,(void*)0},{&l_61,&l_61,&l_61,&l_61,&l_61}};
        short *l_87 = &g_25;
        int i, j;
        for (i = 0; i < 1; i++)
            l_60[i] = 0xF8L;
        for (l_59 = 0; (l_59 <= 0); l_59 += 1)
        {
            int **l_63 = &l_61;
            (*l_63) = l_61;
        }
        l_61 = l_61;
        for (g_62 = 0; (g_62 < (-4)); g_62--)
        {
            unsigned long long *l_77[6][5][3] = {{{&g_78,&g_78,&g_78},{(void*)0,&g_78,&g_78},{&g_78,&g_78,&g_78},{&g_78,&g_78,&g_78},{&g_78,&g_78,(void*)0}},{{&g_78,&g_78,&g_78},{&g_78,&g_78,&g_78},{(void*)0,&g_78,&g_78},{&g_78,&g_78,&g_78},{&g_78,&g_78,&g_78}},{{&g_78,&g_78,(void*)0},{&g_78,&g_78,&g_78},{&g_78,&g_78,&g_78},{(void*)0,&g_78,&g_78},{&g_78,&g_78,&g_78}},{{&g_78,&g_78,&g_78},{&g_78,&g_78,&g_78},{(void*)0,&g_78,&g_78},{&g_78,&g_78,(void*)0},{&g_78,&g_78,&g_78}},{{&g_78,&g_78,&g_78},{&g_78,&g_78,&g_78},{&g_78,&g_78,&g_78},{(void*)0,&g_78,&g_78},{&g_78,&g_78,(void*)0}},{{&g_78,&g_78,&g_78},{&g_78,&g_78,&g_78},{&g_78,&g_78,&g_78},{&g_78,&g_78,&g_78},{(void*)0,&g_78,&g_78}}};
            int l_81[1][3];
            int *l_82 = &l_81[0][1];
            short **l_94 = &l_87;
            int i, j, k;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 3; j++)
                    l_81[i][j] = 2L;
            }
            if (((safe_add_func_int16_t_s_s(((*l_61) & (p_56 < g_62)), (p_56 > (safe_sub_func_int8_t_s_s((((safe_rshift_func_int16_t_s_s((safe_add_func_uint64_t_u_u((g_78 = p_56), (p_56 && (((&g_24 != &g_24) <= (safe_mod_func_int64_t_s_s((l_81[0][2] > p_56), p_57))) < 0xAC0D74891BC53C27LL)))), l_81[0][2])) < p_57) & 0xB3L), (*l_61)))))) != p_57))
            {
                l_82 = l_61;

                ;
            }
            else
            {
                (*l_82) = (((safe_lshift_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u(((p_57 >= ((void*)0 == l_87)) & 0L), p_57)), 0)) > 0L) >= (safe_add_func_int16_t_s_s(((safe_sub_func_int64_t_s_s((g_62 != 0x4BL), (safe_sub_func_int8_t_s_s((g_25 == 255UL), (*l_61))))) && 0L), (*l_61))));
                return &g_24;


            }

            ;
            g_96[2] = (l_95 = (~(*l_82)));
            for (l_59 = 0; (l_59 < (-26)); l_59 = safe_sub_func_int16_t_s_s(l_59, 2))
            {
                l_82 = (void*)0;

                ;
            }

            ;
            g_99 = (-1L);
        }
        l_100 = l_61;
    }
    else
    {
        unsigned char l_103 = 0x16L;
        for (g_62 = 3; (g_62 < (-7)); g_62 = safe_sub_func_uint64_t_u_u(g_62, 3))
        {
            short **l_106 = &g_28;
            l_103 = p_57;
            for (g_78 = 0; (g_78 < 12); g_78++)
            {
                return l_106;


            }
        }
    }
    if ((p_57 == (18446744073709551611UL == p_56)))
    {
        int l_109 = 0x5DC34743L;
        int l_118 = (-9L);
        int *l_119 = &l_109;
        int *l_120 = (void*)0;
        int *l_121 = (void*)0;
        int *l_122 = &g_123;
        int **l_124[5] = {&l_100,&l_100,&l_100,&l_100,&l_100};
        long long *l_126[1][5] = {{&l_95,&l_95,&l_95,&l_95,&l_95}};
        unsigned short *l_127[9][6] = {{&g_99,&g_99,&g_99,&g_99,&g_99,&g_99},{&g_99,&g_99,&g_99,&g_99,&g_99,(void*)0},{&g_99,(void*)0,&g_99,&g_99,&g_99,&g_99},{&g_99,(void*)0,&g_99,&g_99,&g_99,&g_99},{&g_99,&g_99,(void*)0,(void*)0,&g_99,&g_99},{&g_99,&g_99,(void*)0,&g_99,&g_99,(void*)0},{&g_99,&g_99,(void*)0,&g_99,&g_99,&g_99},{(void*)0,&g_99,(void*)0,&g_99,&g_99,(void*)0},{&g_99,&g_99,(void*)0,&g_99,&g_99,&g_99}};
        short **l_130 = &g_28;
        int i, j;
        (*l_122) = ((*l_119) = ((+(p_56 || ((*l_61) = (((safe_mod_func_int64_t_s_s(g_13[1][2][0], (((l_109 > p_56) ^ ((safe_sub_func_int64_t_s_s((*l_61), (safe_mod_func_int32_t_s_s((~g_96[2]), (l_109 && (-1L)))))) == (safe_lshift_func_uint8_t_u_s((((l_118 = (((safe_add_func_uint16_t_u_u(((void*)0 != &g_62), (-10L))) != p_56) > 0x9FB00B4203E263A3LL)) ^ p_56) < g_62), l_109)))) & (*g_24)))) == (*l_61)) ^ g_25)))) | 0L));
        g_125 = &g_123;

        ;
        (*l_61) = ((((*l_119) = p_56) == (0UL & 0x1CBC00A2L)) & (0x5ED0L && ((*g_24) = ((((((((*l_122) = ((void*)0 != l_126[0][1])) & (*l_61)) != (safe_sub_func_uint16_t_u_u((*l_61), (&g_24 == l_130)))) ^ 0x89L) != 0UL) >= 255UL) >= g_96[2]))));
    }
    else
    {
        int *l_131 = &g_62;
        int **l_132 = &l_61;
        (*l_132) = l_131;
    }
    (*l_136) = l_61;

    ;
    (*g_125) = (*g_125);
    return l_137;


}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_7[i][j], "g_7[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_13[i][j][k], "g_13[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_25, "g_25", print_hash_value);
    transparent_crc(g_62, "g_62", print_hash_value);
    transparent_crc(g_78, "g_78", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_96[i], "g_96[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_99, "g_99", print_hash_value);
    transparent_crc(g_123, "g_123", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_151[i][j][k], "g_151[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_179[i].f0, "g_179[i].f0", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(g_189[i][j], "g_189[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_191[i], "g_191[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_204[i], "g_204[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_207, "g_207", print_hash_value);
    transparent_crc(g_245, "g_245", print_hash_value);
    transparent_crc(g_290, "g_290", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 8; k++)
            {
                transparent_crc(g_325[i][j][k], "g_325[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_331.f0, "g_331.f0", print_hash_value);
    transparent_crc(g_347, "g_347", print_hash_value);
    transparent_crc(g_375, "g_375", print_hash_value);
    transparent_crc(g_456, "g_456", print_hash_value);
    transparent_crc(g_532, "g_532", print_hash_value);
    transparent_crc(g_632, "g_632", print_hash_value);
    transparent_crc(g_645, "g_645", print_hash_value);
    transparent_crc(g_674, "g_674", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
