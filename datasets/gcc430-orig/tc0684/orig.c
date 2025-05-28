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



static int g_15 = 0x88EB9876L;
static short g_25[8] = {0L,0L,0L,0L,0L,0L,0L,0L};
static int g_31 = 0x53E80C65L;
static char g_37 = 0x1BL;
static unsigned char g_47 = 252UL;
static unsigned char g_65 = 0xCCL;
static unsigned char *g_64 = &g_65;
static const unsigned * const g_80 = (void*)0;
static unsigned g_86[4][10] = {{0x15CED7C6L,1UL,1UL,0x15CED7C6L,1UL,1UL,0x15CED7C6L,1UL,1UL,0x15CED7C6L},{1UL,0x15CED7C6L,1UL,1UL,0x15CED7C6L,1UL,1UL,0x15CED7C6L,1UL,1UL},{0x15CED7C6L,0x15CED7C6L,4294967295UL,0x15CED7C6L,0x15CED7C6L,4294967295UL,0x15CED7C6L,0x15CED7C6L,4294967295UL,0x15CED7C6L},{0x15CED7C6L,1UL,1UL,0x15CED7C6L,1UL,1UL,0x15CED7C6L,1UL,4294967295UL,1UL}};
static int *g_89 = &g_15;
static unsigned char g_110 = 0xB2L;
static unsigned short g_130[1][8][2] = {{{0xB305L,8UL},{0xB305L,0xB305L},{0xB305L,8UL},{0xB305L,0xB305L},{0xB305L,8UL},{0xB305L,0xB305L},{0xB305L,8UL},{0xB305L,0xB305L}}};
static int *g_187 = &g_15;
static int **g_186 = &g_187;
static unsigned g_263[4][9] = {{0xA86E48C6L,0xA86E48C6L,4294967295UL,4294967295UL,4294967295UL,0xA86E48C6L,0xA86E48C6L,4294967295UL,4294967295UL},{4294967295UL,0x09FAE641L,4294967295UL,4294967295UL,4294967295UL,4294967295UL,0x09FAE641L,4294967295UL,4294967295UL},{4294967295UL,4294967295UL,4294967295UL,4294967295UL,0x09FAE641L,4294967295UL,4294967295UL,4294967295UL,4294967295UL},{0xA86E48C6L,4294967295UL,4294967295UL,4294967295UL,0xA86E48C6L,0xA86E48C6L,4294967295UL,4294967295UL,4294967295UL}};
static int *g_367 = &g_31;
static int **g_366 = &g_367;
static unsigned char g_375 = 3UL;
static const unsigned char g_381 = 246UL;
static const unsigned char *g_382 = (void*)0;
static unsigned short *g_384 = (void*)0;
static unsigned short **g_383 = &g_384;
static const int *g_392[7] = {&g_15,&g_15,&g_15,&g_15,&g_15,&g_15,&g_15};
static unsigned g_435 = 1UL;
static unsigned g_436 = 0x14767FC0L;
static short g_444 = 0x8DFEL;
static unsigned char **g_450 = &g_64;
static unsigned *g_473 = (void*)0;
static unsigned **g_472 = &g_473;
static const int *g_483 = &g_15;
static unsigned short g_513 = 0UL;
static short g_526 = 0xB00EL;
static unsigned short g_534 = 0x1E4FL;
static short g_542 = 5L;
static unsigned char *g_554 = &g_375;
static short *g_692 = &g_526;
static short **g_691 = &g_692;
static int *g_697 = &g_15;
static const unsigned g_753 = 1UL;
static unsigned short g_788 = 0x4BD9L;
static unsigned short g_839 = 0x8E0EL;
static int g_892[5][6] = {{0xE10A4E6FL,0xDFE2268CL,0xE10A4E6FL,0xDFE2268CL,0xE10A4E6FL,0xDFE2268CL},{0xE10A4E6FL,0xDFE2268CL,0xE10A4E6FL,0xDFE2268CL,0xE10A4E6FL,0xDFE2268CL},{0xE10A4E6FL,0xDFE2268CL,0xE10A4E6FL,0xDFE2268CL,0xE10A4E6FL,0xDFE2268CL},{0xE10A4E6FL,0xDFE2268CL,0xE10A4E6FL,0xDFE2268CL,0xE10A4E6FL,0xDFE2268CL},{0xE10A4E6FL,0xDFE2268CL,0xE10A4E6FL,0xDFE2268CL,0xE10A4E6FL,0xDFE2268CL}};
static unsigned g_924[2] = {2UL,2UL};
static unsigned g_934 = 4294967295UL;
static short g_943[7][8] = {{0xFE47L,0xFE47L,0xFE47L,0xFE47L,0xFE47L,0xFE47L,0xFE47L,0xFE47L},{0xFE47L,0xFE47L,0xFE47L,0xFE47L,0xFE47L,0xFE47L,0xFE47L,0xFE47L},{0xFE47L,0xFE47L,0xFE47L,0xFE47L,0xFE47L,0xFE47L,0xFE47L,0xFE47L},{0xFE47L,0xFE47L,0xFE47L,0xFE47L,0xFE47L,0xFE47L,0xFE47L,0xFE47L},{0xFE47L,0xFE47L,0xFE47L,0xFE47L,0xFE47L,0xFE47L,0xFE47L,0xFE47L},{0xFE47L,0xFE47L,0xFE47L,0xFE47L,0xFE47L,0xFE47L,0xFE47L,0xFE47L},{0xFE47L,0xFE47L,0xFE47L,0xFE47L,0xFE47L,0xFE47L,0xFE47L,0xFE47L}};
static short g_947 = 0xAC37L;
static char g_974 = 1L;
static unsigned g_986[4][7][2] = {{{1UL,0xBF377199L},{4294967294UL,0UL},{2UL,0xA71DD847L},{0xF0C53E60L,0xA71DD847L},{2UL,0UL},{4294967294UL,0xBF377199L},{1UL,1UL}},{{0UL,0xF0C53E60L},{4294967287UL,4294967295UL},{4294967295UL,4294967295UL},{5UL,4294967295UL},{0x2F502E62L,2UL},{0x2F502E62L,4294967295UL},{5UL,4294967295UL}},{{4294967295UL,4294967295UL},{4294967287UL,0xF0C53E60L},{0UL,1UL},{1UL,0xBF377199L},{4294967294UL,0UL},{2UL,0xA71DD847L},{0xF0C53E60L,0xA71DD847L}},{{1UL,1UL},{9UL,0x2AFC8D7EL},{0xF0C53E60L,0xF0C53E60L},{1UL,4294967287UL},{0UL,2UL},{4294967295UL,0x2F502E62L},{0xEF1FE4D0L,4294967295UL}}};
static unsigned g_987 = 4294967295UL;
static unsigned g_988 = 0UL;
static unsigned g_989 = 0x7417713CL;
static unsigned g_990 = 0UL;
static unsigned g_991[8] = {0x2FF346BDL,0UL,0x2FF346BDL,0UL,0x2FF346BDL,0UL,0x2FF346BDL,0UL};
static unsigned g_992 = 4294967295UL;
static unsigned g_993 = 0x8C933C0CL;
static unsigned g_994 = 4294967295UL;
static unsigned g_995 = 0xF6C77109L;
static unsigned g_996 = 3UL;
static unsigned g_997 = 0x372A96D8L;
static unsigned g_998 = 0x8BBA4448L;
static unsigned g_999[9] = {4294967287UL,4294967287UL,4294967287UL,4294967287UL,4294967287UL,4294967287UL,4294967287UL,4294967287UL,4294967287UL};
static unsigned g_1000[9] = {0x683EE2D0L,0x683EE2D0L,4294967288UL,0x683EE2D0L,0x683EE2D0L,4294967288UL,0x683EE2D0L,0x683EE2D0L,4294967288UL};
static unsigned g_1001 = 4294967295UL;
static unsigned g_1002 = 0xA1C3728CL;
static unsigned g_1003 = 0x27D631C0L;
static unsigned g_1004 = 0UL;
static unsigned g_1005 = 7UL;
static unsigned g_1006 = 1UL;
static unsigned g_1007[7] = {0x408BB89BL,0x408BB89BL,0x408BB89BL,0x408BB89BL,0x408BB89BL,0x408BB89BL,0x408BB89BL};
static unsigned g_1008[9][5][4] = {{{4294967292UL,0x913065BDL,0UL,4294967295UL},{0x4D375F3CL,0UL,0xD3089D50L,0x12FD2A34L},{4294967295UL,0UL,0x440593F3L,4294967295UL},{0x12FD2A34L,0x913065BDL,0xAE64F6ECL,4294967295UL},{0UL,0xA01BBF1EL,0xA01BBF1EL,0UL}},{{0UL,0x6FD4A3D4L,0xAE64F6ECL,0UL},{0x12FD2A34L,4294967295UL,0x440593F3L,0x5D8A738DL},{4294967295UL,0x812F8E67L,0xD3089D50L,0x5D8A738DL},{0x4D375F3CL,4294967295UL,0UL,0UL},{4294967292UL,0x6FD4A3D4L,4294967295UL,0UL}},{{0xDBB95FCCL,0xA01BBF1EL,4294967295UL,4294967295UL},{4294967292UL,0x913065BDL,0UL,4294967295UL},{4294967295UL,0x913065BDL,0xA01BBF1EL,0xCBBDE64AL},{0xDBB95FCCL,0x913065BDL,0x6FD4A3D4L,0x5D8A738DL},{0xCBBDE64AL,0xD3089D50L,4294967295UL,0xDBB95FCCL}},{{0x12FD2A34L,0x812F8E67L,0x812F8E67L,0x12FD2A34L},{0x12FD2A34L,6UL,4294967295UL,4294967292UL},{0xCBBDE64AL,0UL,0x6FD4A3D4L,0UL},{0xDBB95FCCL,0x440593F3L,0xA01BBF1EL,0UL},{4294967295UL,0UL,0x913065BDL,4294967292UL}},{{0UL,6UL,0UL,0x12FD2A34L},{0x0A996C8CL,0x812F8E67L,0UL,0xDBB95FCCL},{0UL,0xD3089D50L,0x913065BDL,0x5D8A738DL},{4294967295UL,0x913065BDL,0xA01BBF1EL,0xCBBDE64AL},{0xDBB95FCCL,0x913065BDL,0x6FD4A3D4L,0x5D8A738DL}},{{0xCBBDE64AL,0xD3089D50L,4294967295UL,0xDBB95FCCL},{0x12FD2A34L,0x812F8E67L,0x812F8E67L,0x12FD2A34L},{0x12FD2A34L,6UL,4294967295UL,4294967292UL},{0xCBBDE64AL,0UL,0x6FD4A3D4L,0UL},{0xDBB95FCCL,0x440593F3L,0xA01BBF1EL,0UL}},{{4294967295UL,0UL,0x913065BDL,4294967292UL},{0UL,6UL,0UL,0x12FD2A34L},{0x0A996C8CL,0x812F8E67L,0UL,0xDBB95FCCL},{0UL,0xD3089D50L,0x913065BDL,0x5D8A738DL},{4294967295UL,0x913065BDL,0xA01BBF1EL,0xCBBDE64AL}},{{0xDBB95FCCL,0x913065BDL,0x6FD4A3D4L,0UL},{0x0A996C8CL,0x440593F3L,0xD3089D50L,4294967295UL},{0xDBB95FCCL,6UL,6UL,0xDBB95FCCL},{0xDBB95FCCL,4294967295UL,0xD3089D50L,0xCBBDE64AL},{0x0A996C8CL,0xA01BBF1EL,0xAE64F6ECL,0x12FD2A34L}},{{4294967295UL,0xF1C37F64L,0x6FD4A3D4L,0x12FD2A34L},{4294967292UL,0xA01BBF1EL,0x812F8E67L,0xCBBDE64AL},{4294967295UL,4294967295UL,0xA01BBF1EL,0xDBB95FCCL},{0x5D8A738DL,6UL,0xA01BBF1EL,4294967295UL},{4294967295UL,0x440593F3L,0x812F8E67L,0UL}}};
static unsigned g_1009[9][1][2] = {{{0x6930F1A1L,0x6930F1A1L}},{{4294967293UL,0xEAFBC485L}},{{7UL,0xEAFBC485L}},{{4294967293UL,0x6930F1A1L}},{{0x6930F1A1L,4294967293UL}},{{0xEAFBC485L,7UL}},{{0xEAFBC485L,4294967293UL}},{{0x6930F1A1L,0x6930F1A1L}},{{4294967293UL,0xEAFBC485L}}};
static unsigned g_1010 = 0x020D68D2L;
static unsigned g_1011[4][9][5] = {{{0UL,0xFF275F80L,0xFF275F80L,0UL,0UL},{0UL,1UL,7UL,0UL,0xDDDE3F7CL},{0x191AA0D5L,1UL,0xFF275F80L,0x191AA0D5L,0xDDDE3F7CL},{0UL,0xFF275F80L,0xFF275F80L,0UL,0UL},{0UL,1UL,7UL,0UL,0xDDDE3F7CL},{0x191AA0D5L,1UL,0xFF275F80L,0x191AA0D5L,0xDDDE3F7CL},{0UL,0xFF275F80L,0xFF275F80L,0UL,0UL},{0UL,1UL,7UL,0UL,0xDDDE3F7CL},{0x191AA0D5L,0x14FFDBC5L,0x423E129EL,0UL,1UL}},{{0xDDDE3F7CL,0x423E129EL,0x423E129EL,0xDDDE3F7CL,0xFF275F80L},{0xDDDE3F7CL,0x14FFDBC5L,0x49E36DE0L,0xDDDE3F7CL,1UL},{0UL,0x14FFDBC5L,0x423E129EL,0UL,1UL},{0xDDDE3F7CL,0x423E129EL,0x423E129EL,0xDDDE3F7CL,0xFF275F80L},{0xDDDE3F7CL,0x14FFDBC5L,0x49E36DE0L,0xDDDE3F7CL,1UL},{0UL,0x14FFDBC5L,0x423E129EL,0UL,1UL},{0xDDDE3F7CL,0x423E129EL,0x423E129EL,0xDDDE3F7CL,0xFF275F80L},{0xDDDE3F7CL,0x14FFDBC5L,0x49E36DE0L,0xDDDE3F7CL,1UL},{0UL,0x14FFDBC5L,0x423E129EL,0UL,1UL}},{{0xDDDE3F7CL,0x423E129EL,0x423E129EL,0xDDDE3F7CL,0xFF275F80L},{0xDDDE3F7CL,0x14FFDBC5L,0x49E36DE0L,0xDDDE3F7CL,1UL},{0UL,0x14FFDBC5L,0x423E129EL,0UL,1UL},{0xDDDE3F7CL,0x423E129EL,0x423E129EL,0xDDDE3F7CL,0xFF275F80L},{0xDDDE3F7CL,0x14FFDBC5L,0x49E36DE0L,0xDDDE3F7CL,1UL},{0UL,0x14FFDBC5L,0x423E129EL,0UL,1UL},{0xDDDE3F7CL,0x423E129EL,0x423E129EL,0xDDDE3F7CL,0xFF275F80L},{0xDDDE3F7CL,0x14FFDBC5L,0x49E36DE0L,0xDDDE3F7CL,1UL},{0UL,0x14FFDBC5L,0x423E129EL,0UL,1UL}},{{0xDDDE3F7CL,0x84D04812L,0x84D04812L,0x423E129EL,0x71BE9BDAL},{0x423E129EL,0x191AA0D5L,0UL,0x423E129EL,1UL},{0x49E36DE0L,0x191AA0D5L,0x84D04812L,0x49E36DE0L,1UL},{0x423E129EL,0x84D04812L,0x84D04812L,0x423E129EL,0x71BE9BDAL},{0x423E129EL,0x191AA0D5L,0UL,0x423E129EL,1UL},{0x49E36DE0L,0x191AA0D5L,0x84D04812L,0x49E36DE0L,1UL},{0x423E129EL,0x84D04812L,0x84D04812L,0x423E129EL,0x71BE9BDAL},{0x423E129EL,0x191AA0D5L,0UL,0x423E129EL,1UL},{0x49E36DE0L,0x191AA0D5L,0x84D04812L,0x49E36DE0L,1UL}}};
static unsigned g_1012[7][6][6] = {{{0xB44BBD5AL,0x5D271F4FL,2UL,0x48F9269BL,2UL,0x5D271F4FL},{0xD72613F4L,1UL,3UL,0xB8E54EEEL,2UL,4294967292UL},{0x2EFC00B8L,0x5D271F4FL,1UL,0x2EFC00B8L,4294967292UL,4294967288UL},{0xB1DA0805L,0x5D271F4FL,0xA71A3AB5L,0xB44BBD5AL,2UL,0x08B67A45L},{0xB8E54EEEL,1UL,4294967293UL,1UL,2UL,2UL},{0x5E870BD0L,0x5D271F4FL,0x5D271F4FL,0x5E870BD0L,4294967292UL,3UL}},{{0x48F9269BL,0x5D271F4FL,4294967292UL,0xB1DA0805L,2UL,1UL},{1UL,1UL,4294967288UL,0xD72613F4L,2UL,0xA71A3AB5L},{0UL,0x5D271F4FL,0x08B67A45L,0UL,0x5D271F4FL,2UL},{1UL,4294967288UL,0x08B67A45L,0xB8E54EEEL,0x08B67A45L,4294967288UL},{0x5E870BD0L,4294967293UL,4294967292UL,0UL,0x08B67A45L,0x5D271F4FL},{0xB1DA0805L,4294967288UL,4294967293UL,0xB1DA0805L,0x5D271F4FL,0xA71A3AB5L}},{{0xD72613F4L,4294967288UL,1UL,1UL,0x08B67A45L,3UL},{0UL,4294967293UL,2UL,0x2EFC00B8L,0x08B67A45L,0x08B67A45L},{0x48F9269BL,4294967288UL,4294967288UL,0x48F9269BL,0x5D271F4FL,4294967292UL},{0xB8E54EEEL,4294967288UL,0x5D271F4FL,0xD72613F4L,0x08B67A45L,4294967293UL},{0x2EFC00B8L,4294967293UL,0xA71A3AB5L,0x5E870BD0L,0x08B67A45L,1UL},{0xB44BBD5AL,4294967288UL,3UL,0xB44BBD5AL,0x5D271F4FL,2UL}},{{1UL,4294967288UL,0x08B67A45L,0xB8E54EEEL,0x08B67A45L,4294967288UL},{0x5E870BD0L,4294967293UL,4294967292UL,0UL,0x08B67A45L,0x5D271F4FL},{0xB1DA0805L,4294967288UL,4294967293UL,0xB1DA0805L,0x5D271F4FL,0xA71A3AB5L},{0xD72613F4L,4294967288UL,1UL,1UL,0x08B67A45L,3UL},{0UL,4294967293UL,2UL,0x2EFC00B8L,0x08B67A45L,0x08B67A45L},{0x48F9269BL,4294967288UL,4294967288UL,0x48F9269BL,0x5D271F4FL,4294967292UL}},{{0xB8E54EEEL,4294967288UL,0x5D271F4FL,4294967293UL,1UL,0UL},{0xA71A3AB5L,0UL,0x49095EEFL,2UL,1UL,0UL},{0x5D271F4FL,0x4A563BAAL,0x34AD2B0BL,0x5D271F4FL,0UL,0x4ABA7635L},{4294967288UL,0x4A563BAAL,1UL,3UL,1UL,0x4A563BAAL},{2UL,0UL,0UL,4294967292UL,1UL,0UL},{1UL,0x4A563BAAL,0UL,1UL,0UL,0x49095EEFL}},{{4294967293UL,0x4A563BAAL,0UL,4294967288UL,1UL,0x34AD2B0BL},{4294967292UL,0UL,0x4ABA7635L,0xA71A3AB5L,1UL,1UL},{0x08B67A45L,0x4A563BAAL,0x4A563BAAL,0x08B67A45L,0UL,0UL},{3UL,0x4A563BAAL,0UL,4294967293UL,1UL,0UL},{0xA71A3AB5L,0UL,0x49095EEFL,2UL,1UL,0UL},{0x5D271F4FL,0x4A563BAAL,0x34AD2B0BL,0x5D271F4FL,0UL,0x4ABA7635L}},{{4294967288UL,0x4A563BAAL,1UL,3UL,1UL,0x4A563BAAL},{2UL,0UL,0UL,4294967292UL,1UL,0UL},{1UL,0x4A563BAAL,0UL,1UL,0UL,0x49095EEFL},{4294967293UL,0x4A563BAAL,0UL,4294967288UL,1UL,0x34AD2B0BL},{4294967292UL,0UL,1UL,1UL,0x34AD2B0BL,0x34AD2B0BL},{3UL,0x49095EEFL,0x49095EEFL,3UL,0x4A563BAAL,0UL}}};
static unsigned g_1013 = 0x5BEB5766L;
static unsigned g_1014 = 0xF7929CC5L;
static unsigned g_1015 = 9UL;
static unsigned g_1016 = 0UL;
static unsigned g_1017[1][10] = {{7UL,7UL,7UL,7UL,7UL,7UL,7UL,7UL,7UL,7UL}};
static unsigned g_1018 = 0x1F640B9BL;
static unsigned g_1019 = 4294967295UL;
static unsigned g_1020[7] = {0xB847B1C1L,0xB847B1C1L,0xB847B1C1L,0xB847B1C1L,0xB847B1C1L,0xB847B1C1L,0xB847B1C1L};
static unsigned g_1021 = 0xF26D9FC8L;
static unsigned g_1022 = 0xC5C5FD46L;
static unsigned g_1023 = 0x343C9100L;
static unsigned g_1024[7] = {0UL,0UL,0x7E3BB9D0L,0UL,0UL,0x7E3BB9D0L,0UL};
static unsigned g_1025 = 0x35CD70C8L;
static unsigned g_1026 = 4294967295UL;
static unsigned g_1027[8] = {0x286A84C4L,0xA9A105F1L,0xA9A105F1L,0x286A84C4L,0xA9A105F1L,0xA9A105F1L,0x286A84C4L,0xA9A105F1L};
static unsigned g_1028 = 0x523B9C19L;
static unsigned g_1029 = 4294967295UL;
static unsigned g_1030 = 1UL;
static unsigned g_1031 = 0UL;
static unsigned g_1032 = 4294967295UL;
static unsigned g_1033 = 0xD3EB6143L;
static unsigned g_1034 = 0x8B5D8E81L;
static unsigned g_1035 = 0x31C2F712L;
static unsigned g_1036[3] = {5UL,5UL,5UL};
static unsigned g_1037 = 0UL;
static unsigned g_1038 = 4294967295UL;
static unsigned g_1039 = 0xA5B63F49L;
static unsigned g_1040 = 7UL;
static unsigned g_1041 = 0x8A334AE4L;
static unsigned g_1042 = 4294967288UL;
static unsigned g_1043 = 4294967288UL;
static unsigned g_1044 = 6UL;
static unsigned g_1045 = 4294967295UL;
static unsigned g_1046 = 0x260D46BDL;
static unsigned g_1047[4] = {0UL,0UL,0UL,0UL};
static unsigned g_1048 = 0xD5A12D46L;
static unsigned g_1049[2][4] = {{6UL,4294967290UL,4294967290UL,6UL},{4294967290UL,6UL,4294967290UL,4294967290UL}};
static unsigned g_1050 = 0x9181F6C8L;
static unsigned g_1051 = 0x09CFE05EL;
static unsigned g_1052[7][4][5] = {{{1UL,0x82A6C98BL,0x179CB0BFL,4294967295UL,4294967295UL},{1UL,0UL,0xE03162E1L,7UL,4294967295UL},{0UL,2UL,0xB6D3F764L,0UL,1UL},{4294967293UL,0UL,0xE03162E1L,0x75E15422L,0UL}},{{4294967293UL,9UL,0x179CB0BFL,9UL,4294967293UL},{0UL,7UL,0x7453B921L,0x75E15422L,8UL},{1UL,7UL,0UL,0UL,0x6BEEEEBEL},{1UL,9UL,0x83F875FCL,7UL,0x27FFDFEEL}},{{0x9397DBD0L,1UL,4294967291UL,0UL,0UL},{0x27FFDFEEL,0x6BEEEEBEL,0UL,4294967293UL,4294967292UL},{0x9397DBD0L,0x3C1C5276L,5UL,4294967293UL,0x8D30B9CAL},{0x8D30B9CAL,0x40FD5C55L,4294967295UL,0UL,0UL}},{{0UL,0x3C1C5276L,4294967295UL,1UL,0UL},{0UL,0x6BEEEEBEL,0UL,1UL,0x8D30B9CAL},{0UL,1UL,4294967295UL,0x4ABD1CFAL,4294967292UL},{0UL,8UL,4294967295UL,8UL,0UL}},{{0UL,1UL,5UL,0x4ABD1CFAL,0x27FFDFEEL},{0UL,1UL,0UL,1UL,4294967286UL},{0x8D30B9CAL,8UL,4294967291UL,1UL,0x27FFDFEEL},{0x9397DBD0L,1UL,4294967291UL,0UL,0UL}},{{0x27FFDFEEL,0x6BEEEEBEL,0UL,4294967293UL,4294967292UL},{0x9397DBD0L,0x3C1C5276L,5UL,4294967293UL,0x8D30B9CAL},{0x8D30B9CAL,0x40FD5C55L,4294967295UL,0UL,0UL},{0UL,0x3C1C5276L,4294967295UL,1UL,0UL}},{{0UL,0x6BEEEEBEL,0UL,1UL,0x8D30B9CAL},{0UL,1UL,4294967295UL,0x4ABD1CFAL,4294967292UL},{0UL,8UL,4294967295UL,8UL,4294967286UL},{2UL,0x1BFF2380L,0UL,5UL,4294967295UL}}};
static unsigned g_1053[2] = {0x7D0CCDD0L,0x7D0CCDD0L};
static unsigned g_1054[1][1] = {{1UL}};
static unsigned g_1055 = 0x7EF8EDC1L;
static unsigned g_1056 = 4294967295UL;
static unsigned g_1057 = 0x6AD82B78L;
static short g_1163 = 0x11BCL;
static short * const g_1162 = &g_1163;
static short * const *g_1161 = &g_1162;
static short * const **g_1160[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
static short * const ***g_1159[7] = {&g_1160[5],&g_1160[5],&g_1160[5],&g_1160[5],&g_1160[5],&g_1160[5],&g_1160[5]};
static int ****g_1196 = (void*)0;
static int *g_1229 = &g_892[1][4];
static char *g_1275 = &g_974;
static char **g_1274 = &g_1275;
static char ***g_1273 = &g_1274;
static char ****g_1272 = &g_1273;
static unsigned g_1286 = 4294967295UL;
static int g_1377 = (-1L);
static const unsigned g_1440 = 8UL;
static unsigned char g_1518 = 248UL;
static short * const g_1528 = &g_526;
static int g_1539 = 0x90E90BABL;
static const int g_1575[2] = {0xA99ED273L,0xA99ED273L};
static int g_1581 = 1L;
static unsigned *g_1666[3] = {&g_435,&g_435,&g_435};
static unsigned g_1700 = 0x63E9033DL;
static unsigned char g_1740 = 9UL;
static const unsigned char **g_1789 = &g_382;
static const unsigned char ***g_1788[4][3][1] = {{{&g_1789},{&g_1789},{&g_1789}},{{&g_1789},{&g_1789},{&g_1789}},{{&g_1789},{&g_1789},{&g_1789}},{{&g_1789},{&g_1789},{&g_1789}}};
static const unsigned char ****g_1787[4][4] = {{&g_1788[1][2][0],&g_1788[2][1][0],&g_1788[1][2][0],&g_1788[2][1][0]},{&g_1788[1][2][0],&g_1788[2][1][0],&g_1788[1][2][0],&g_1788[2][1][0]},{&g_1788[1][2][0],&g_1788[2][1][0],&g_1788[1][2][0],&g_1788[2][1][0]},{&g_1788[1][2][0],&g_1788[2][1][0],&g_1788[1][2][0],&g_1788[2][1][0]}};
static unsigned char *g_1797[2][6] = {{(void*)0,&g_375,(void*)0,&g_47,&g_47,(void*)0},{&g_110,&g_110,&g_47,&g_375,&g_47,&g_110}};
static unsigned char ** const g_1796 = &g_1797[0][0];
static unsigned char ** const * const g_1795 = &g_1796;
static unsigned char ** const * const *g_1794[4] = {&g_1795,&g_1795,&g_1795,&g_1795};
static const unsigned g_1856 = 1UL;
static short g_1867 = 0x6263L;
static short g_1870 = 0xB066L;
static int g_1929 = (-2L);



static unsigned func_1(void);
static int func_2(short p_3);
static const unsigned func_4(unsigned p_5, int p_6, unsigned p_7, unsigned p_8);
static unsigned char func_11(int p_12, short p_13, const char p_14);
static short func_16(int p_17, const int p_18, int p_19, unsigned p_20, unsigned short p_21);
static unsigned func_26(char p_27, unsigned p_28);
static unsigned func_41(unsigned p_42);
static unsigned char func_49(int p_50, char * p_51, unsigned char * p_52);
static unsigned char * func_53(unsigned char * p_54);
static unsigned short func_61(unsigned char * p_62, unsigned char p_63);
static unsigned func_1(void)
{
    unsigned l_22 = 4294967295UL;
    short *l_23 = (void*)0;
    short *l_24 = &g_25[5];
    int *l_29 = (void*)0;
    int *l_30 = &g_31;
    char *l_36 = &g_37;
    unsigned char l_38[2];
    char l_1942 = 9L;
    int i;
    for (i = 0; i < 2; i++)
        l_38[i] = 1UL;
    (*g_89) = func_2((((func_4((safe_mod_func_uint8_t_u_u(func_11((((g_15 ^ g_15) && (func_16(((((*l_24) = l_22) <= (-1L)) , (((func_26((l_22 != 0x71L), ((((((*l_30) = 0x2B058EFAL) , ((*l_36) = (((((safe_mod_func_uint32_t_u_u(g_31, (safe_add_func_uint8_t_u_u((251UL <= g_15), 255UL)))) <= (-5L)) , &g_31) == l_30) != l_22))) < l_22) , l_38[1]) | (-5L))) | l_38[1]) && g_986[2][0][0]) || (*g_483))), l_22, g_1052[2][3][4], l_38[1], g_992) <= l_22)) , (**g_366)), l_38[1], l_38[0]), l_38[1])), l_38[0], g_990, l_38[1]) == l_22) < l_22) , l_22));
    return l_1942;
}







static int func_2(short p_3)
{
    int l_1941 = 0xF224A1FDL;
    (*g_89) = l_1941;
    return p_3;
}







static const unsigned func_4(unsigned p_5, int p_6, unsigned p_7, unsigned p_8)
{
    int l_1625 = 0xE17E38A4L;
    int l_1629 = 0xDE53B7A6L;
    short ***l_1727 = &g_691;
    short *** const *l_1726 = &l_1727;
    short *** const **l_1725 = &l_1726;
    unsigned l_1748 = 0xD093F5F8L;
    int **l_1807 = &g_1229;
    unsigned short l_1819 = 9UL;
    short ****l_1826 = &l_1727;
    unsigned short ***l_1849 = &g_383;
    unsigned char l_1891 = 0x6EL;
    const int l_1912[2][6][3] = {{{0x366E6F7BL,0x67EF3F7BL,0x67EF3F7BL},{0xB7F8A1DDL,(-1L),0x2EDCAEF4L},{0x1ABE5729L,0x366E6F7BL,(-1L)},{0xB7F8A1DDL,0xB7F8A1DDL,(-5L)},{0x366E6F7BL,0x1ABE5729L,(-1L)},{(-1L),0xB7F8A1DDL,(-1L)}},{{0x67EF3F7BL,0x366E6F7BL,4L},{1L,0x2EDCAEF4L,0x2EDCAEF4L},{0x366E6F7BL,(-1L),4L},{(-5L),1L,1L},{0x366E6F7BL,0x366E6F7BL,0xAF9A3934L},{1L,(-5L),0xB7F8A1DDL}}};
    int l_1937[3];
    unsigned *l_1940 = &g_924[0];
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_1937[i] = (-1L);
    for (g_375 = (-4); (g_375 > 39); g_375 = safe_add_func_int16_t_s_s(g_375, 1))
    {
        unsigned short l_1632 = 0xCC0BL;
        int l_1652 = (-8L);
        int l_1675 = (-2L);
        unsigned * const l_1699 = &g_1700;
        unsigned * const *l_1698 = &l_1699;
        unsigned * const **l_1697 = &l_1698;
        const char *l_1710 = &g_37;
        char ****l_1728 = &g_1273;
        const short l_1737 = (-1L);
        unsigned short l_1747 = 0xC5A0L;
        const char l_1762 = 9L;
        char l_1763 = 1L;
        int *l_1778[9][5] = {{&g_1539,&g_892[1][4],&g_892[1][4],&g_1539,(void*)0},{&g_892[0][1],&g_892[1][4],&l_1629,&g_892[0][2],&g_892[0][2]},{&l_1675,&g_1539,&l_1675,(void*)0,&g_1539},{&g_892[0][2],&g_1539,&g_15,&g_892[0][2],&g_15},{&g_892[3][2],&g_892[3][2],&l_1629,&g_1539,&g_15},{(void*)0,&g_892[0][1],&g_15,&g_15,&g_892[0][1]},{&g_15,&g_892[1][4],&l_1675,&g_15,(void*)0},{&g_892[1][4],&g_892[0][1],&l_1629,&g_892[0][1],&g_892[1][4]},{&l_1675,&g_892[3][2],&g_892[1][4],(void*)0,&g_892[3][2]}};
        int * const *l_1804 = &g_367;
        int * const **l_1803[9][9][3] = {{{&l_1804,&l_1804,&l_1804},{&l_1804,&l_1804,&l_1804},{&l_1804,&l_1804,&l_1804},{&l_1804,&l_1804,(void*)0},{&l_1804,&l_1804,&l_1804},{(void*)0,&l_1804,&l_1804},{&l_1804,(void*)0,(void*)0},{&l_1804,&l_1804,&l_1804},{&l_1804,&l_1804,(void*)0}},{{&l_1804,&l_1804,&l_1804},{&l_1804,&l_1804,&l_1804},{&l_1804,&l_1804,(void*)0},{&l_1804,&l_1804,&l_1804},{(void*)0,&l_1804,&l_1804},{&l_1804,(void*)0,&l_1804},{&l_1804,&l_1804,&l_1804},{&l_1804,&l_1804,&l_1804},{&l_1804,&l_1804,&l_1804}},{{&l_1804,&l_1804,&l_1804},{&l_1804,&l_1804,(void*)0},{&l_1804,&l_1804,&l_1804},{(void*)0,&l_1804,&l_1804},{&l_1804,(void*)0,(void*)0},{&l_1804,&l_1804,&l_1804},{&l_1804,&l_1804,(void*)0},{&l_1804,&l_1804,&l_1804},{&l_1804,&l_1804,&l_1804}},{{&l_1804,&l_1804,(void*)0},{&l_1804,&l_1804,&l_1804},{(void*)0,&l_1804,&l_1804},{&l_1804,(void*)0,&l_1804},{&l_1804,&l_1804,&l_1804},{&l_1804,&l_1804,&l_1804},{&l_1804,&l_1804,&l_1804},{&l_1804,&l_1804,&l_1804},{&l_1804,&l_1804,(void*)0}},{{&l_1804,&l_1804,&l_1804},{(void*)0,&l_1804,&l_1804},{&l_1804,(void*)0,(void*)0},{&l_1804,&l_1804,&l_1804},{&l_1804,&l_1804,(void*)0},{&l_1804,&l_1804,&l_1804},{&l_1804,&l_1804,&l_1804},{&l_1804,&l_1804,&l_1804},{&l_1804,&l_1804,&l_1804}},{{&l_1804,&l_1804,&l_1804},{&l_1804,&l_1804,(void*)0},{&l_1804,&l_1804,(void*)0},{&l_1804,&l_1804,(void*)0},{&l_1804,&l_1804,&l_1804},{&l_1804,(void*)0,&l_1804},{&l_1804,&l_1804,&l_1804},{&l_1804,&l_1804,&l_1804},{&l_1804,&l_1804,&l_1804}},{{&l_1804,&l_1804,&l_1804},{&l_1804,&l_1804,(void*)0},{&l_1804,&l_1804,&l_1804},{&l_1804,(void*)0,&l_1804},{&l_1804,(void*)0,&l_1804},{&l_1804,(void*)0,&l_1804},{&l_1804,&l_1804,&l_1804},{&l_1804,&l_1804,&l_1804},{&l_1804,&l_1804,(void*)0}},{{&l_1804,&l_1804,(void*)0},{&l_1804,&l_1804,(void*)0},{&l_1804,&l_1804,&l_1804},{&l_1804,(void*)0,&l_1804},{&l_1804,&l_1804,&l_1804},{&l_1804,&l_1804,&l_1804},{&l_1804,&l_1804,&l_1804},{&l_1804,&l_1804,&l_1804},{&l_1804,&l_1804,(void*)0}},{{&l_1804,&l_1804,&l_1804},{&l_1804,(void*)0,&l_1804},{&l_1804,(void*)0,&l_1804},{&l_1804,(void*)0,&l_1804},{&l_1804,&l_1804,&l_1804},{&l_1804,&l_1804,&l_1804},{&l_1804,&l_1804,(void*)0},{&l_1804,&l_1804,(void*)0},{&l_1804,&l_1804,(void*)0}}};
        int * const ***l_1802 = &l_1803[5][7][1];
        short ****l_1827 = &l_1727;
        int l_1837 = (-3L);
        unsigned l_1896 = 2UL;
        int l_1913 = 0L;
        int i, j, k;
    }
    (*g_89) = (((*l_1940) = (safe_lshift_func_int16_t_s_s(p_6, 7))) , l_1937[1]);
    (*g_89) = (p_6 ^ 0x70L);
    return p_8;
}







static unsigned char func_11(int p_12, short p_13, const char p_14)
{
    unsigned short *** const l_1502[2] = {&g_383,&g_383};
    int *l_1503 = &g_892[1][4];
    unsigned char l_1606 = 8UL;
    int i;
    for (g_1002 = 0; (g_1002 <= 4); g_1002 += 1)
    {
        char l_1517 = 0L;
        unsigned char l_1525 = 0UL;
        int *l_1554 = &g_1539;
        int l_1608 = 0xBBDB6605L;
        (*g_89) = (l_1502[0] != &g_383);
        l_1503 = l_1503;
        for (p_13 = 0; (p_13 <= 4); p_13 += 1)
        {
            unsigned short ***l_1510[5] = {&g_383,&g_383,&g_383,&g_383,&g_383};
            unsigned short * const *l_1513 = &g_384;
            unsigned short * const **l_1512[10];
            int *l_1555 = &g_892[1][4];
            unsigned char *l_1573 = &g_65;
            short l_1578 = 0xFB02L;
            unsigned char l_1587 = 0xB9L;
            int i, j;
            for (i = 0; i < 10; i++)
                l_1512[i] = &l_1513;
            (*g_89) = (!g_892[p_13][g_1002]);
            for (g_534 = 0; (g_534 <= 4); g_534 += 1)
            {
                int i, j;
                (*l_1503) = g_892[g_1002][g_534];
                (*g_186) = &g_892[g_1002][g_534];
                if ((*g_483))
                {
                    int i;
                    for (g_1030 = 0; (g_1030 <= 3); g_1030 += 1)
                    {
                        unsigned short ****l_1511 = &l_1510[0];
                        unsigned short * const ***l_1514 = &l_1512[3];
                        int i, j;
                        (*g_697) = (g_263[g_1030][(g_1002 + 4)] | ((((safe_add_func_uint32_t_u_u((safe_add_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u(p_14, 0)), ((((*l_1511) = l_1510[0]) != ((*l_1514) = l_1512[2])) >= (((func_16((**g_366), (g_25[5] && func_16(p_14, (safe_add_func_uint32_t_u_u((((func_16((*g_367), p_12, g_892[p_13][g_1002], p_14, p_12) >= (*g_1275)) <= 0x0A3B2FDEL) != 7UL), 0UL)), (*g_367), g_892[p_13][g_1002], p_12)), p_13, l_1517, l_1517) & p_14) && 0L) || g_892[g_1002][g_534])))), g_1518)) <= p_14) , (**g_1274)) && 0L));
                    }
                    (*g_89) = (safe_mul_func_int16_t_s_s((((****g_1272) = (safe_rshift_func_int16_t_s_s(g_892[p_13][g_1002], 2))) , (((((safe_rshift_func_int8_t_s_u(l_1525, 0)) || (safe_mod_func_int32_t_s_s(p_14, (p_14 , func_16((*g_367), g_892[p_13][g_1002], (**g_366), g_892[g_1002][g_534], (*l_1503)))))) != (-4L)) , p_14) | l_1517)), 0UL));
                }
                else
                {
                    const unsigned short l_1535 = 0xC08AL;
                    int l_1536 = 0xBDE5E4EAL;
                    unsigned *l_1537 = &g_1286;
                    unsigned *l_1538 = &g_435;
                    (*g_89) = (((*g_1528) = (0x01L <= (g_1528 == (((g_1539 = ((safe_add_func_uint8_t_u_u(((*g_554) == (((safe_mul_func_uint16_t_u_u(p_13, l_1517)) , (*g_472)) == (((*l_1503) = ((*l_1538) = ((*l_1537) = ((safe_mul_func_int8_t_s_s(l_1525, 251UL)) , ((((l_1536 = (l_1535 > (*g_1162))) == p_13) , 0L) , p_12))))) , (void*)0))), 0x5FL)) >= p_13)) || l_1517) , &p_13)))) , l_1525);
                }
                (*g_186) = &g_892[p_13][g_1002];
                for (l_1525 = 0; (l_1525 <= 3); l_1525 += 1)
                {
                    return p_12;
                }
            }
            for (g_994 = 0; (g_994 <= 3); g_994 += 1)
            {
                unsigned l_1557 = 4294967293UL;
                int i, j;
                (*g_697) = (((safe_mod_func_uint32_t_u_u((safe_add_func_int8_t_s_s((g_263[g_994][(g_994 + 3)] != (safe_lshift_func_int16_t_s_u((-6L), 9))), ((safe_rshift_func_uint8_t_u_s(func_16((g_263[g_994][(g_994 + 4)] >= (safe_lshift_func_uint16_t_u_u(g_892[p_13][p_13], 12))), (**g_366), ((p_14 >= (((safe_sub_func_int16_t_s_s((**g_1161), l_1517)) || ((safe_unary_minus_func_uint8_t_u(l_1525)) , p_12)) || (*l_1503))) > (**g_1274)), p_12, l_1525), 7)) , p_14))), p_13)) < g_892[p_13][p_13]) || p_13);
                for (g_996 = 0; (g_996 <= 0); g_996 += 1)
                {
                    int *l_1553[10][9][2] = {{{&g_892[4][5],&g_892[3][5]},{&g_15,&g_892[4][5]},{&g_1539,&g_1539},{&g_1539,&g_892[4][5]},{&g_15,&g_892[3][5]},{&g_892[4][5],&g_892[3][5]},{&g_15,&g_892[4][5]},{&g_1539,&g_1539},{&g_1539,&g_892[4][5]}},{{&g_15,&g_892[3][5]},{&g_892[4][5],&g_892[3][5]},{&g_15,&g_892[4][5]},{&g_1539,&g_1539},{&g_1539,&g_892[4][5]},{&g_15,&g_892[3][5]},{&g_892[4][5],&g_892[3][5]},{&g_15,&g_892[4][5]},{&g_1539,&g_1539}},{{&g_1539,&g_892[4][5]},{&g_15,&g_892[3][5]},{&g_892[4][5],&g_892[3][5]},{&g_15,&g_892[4][5]},{&g_1539,&g_1539},{&g_1539,&g_892[4][5]},{&g_15,&g_892[3][5]},{&g_892[4][5],&g_892[3][5]},{&g_15,&g_892[4][5]}},{{&g_1539,&g_1539},{&g_1539,&g_892[4][5]},{&g_15,&g_892[3][5]},{&g_892[4][5],&g_892[3][5]},{&g_15,&g_892[4][5]},{&g_1539,&g_1539},{&g_1539,&g_892[4][5]},{&g_15,&g_892[3][5]},{&g_892[4][5],&g_892[3][5]}},{{&g_892[4][5],&g_1539},{&g_892[3][5],&g_892[3][5]},{&g_892[3][5],&g_1539},{&g_892[4][5],&g_892[p_13][g_1002]},{&g_1539,&g_892[p_13][g_1002]},{&g_892[4][5],&g_1539},{&g_892[3][5],&g_892[3][5]},{&g_892[3][5],&g_1539},{&g_892[4][5],&g_892[p_13][g_1002]}},{{&g_1539,&g_892[p_13][g_1002]},{&g_892[4][5],&g_1539},{&g_892[3][5],&g_892[3][5]},{&g_892[3][5],&g_1539},{&g_892[4][5],&g_892[p_13][g_1002]},{&g_1539,&g_892[p_13][g_1002]},{&g_892[4][5],&g_1539},{&g_892[3][5],&g_892[3][5]},{&g_892[3][5],&g_1539}},{{&g_892[4][5],&g_892[p_13][g_1002]},{&g_1539,&g_892[p_13][g_1002]},{&g_892[4][5],&g_1539},{&g_892[3][5],&g_892[3][5]},{&g_892[3][5],&g_1539},{&g_892[4][5],&g_892[p_13][g_1002]},{&g_1539,&g_892[p_13][g_1002]},{&g_892[4][5],&g_1539},{&g_892[3][5],&g_892[3][5]}},{{&g_892[3][5],&g_1539},{&g_892[4][5],&g_892[p_13][g_1002]},{&g_1539,&g_892[p_13][g_1002]},{&g_892[4][5],&g_1539},{&g_892[3][5],&g_892[3][5]},{&g_892[3][5],&g_1539},{&g_892[4][5],&g_892[p_13][g_1002]},{&g_1539,&g_892[p_13][g_1002]},{&g_892[4][5],&g_1539}},{{&g_892[3][5],&g_892[3][5]},{&g_892[3][5],&g_1539},{&g_892[4][5],&g_892[p_13][g_1002]},{&g_1539,&g_892[p_13][g_1002]},{&g_892[4][5],&g_1539},{&g_892[3][5],&g_892[3][5]},{&g_892[3][5],&g_1539},{&g_892[4][5],&g_892[p_13][g_1002]},{&g_1539,&g_892[p_13][g_1002]}},{{&g_892[4][5],&g_1539},{&g_892[3][5],&g_892[3][5]},{&g_892[3][5],&g_15},{&g_892[p_13][g_1002],&g_1539},{&g_15,&g_1539},{&g_892[p_13][g_1002],&g_15},{&g_892[4][5],&g_892[4][5]},{&g_892[4][5],&g_15},{&g_892[p_13][g_1002],&g_1539}}};
                    int i, j, k;
                    (*g_186) = l_1553[6][1][1];
                    l_1554 = (*g_186);
                    for (g_1286 = 0; (g_1286 <= 0); g_1286 += 1)
                    {
                        int *l_1556[1][5][5] = {{{&g_15,&g_15,&g_15,&g_15,&g_15},{&g_892[p_13][p_13],&g_892[p_13][p_13],&g_892[p_13][p_13],&g_892[p_13][p_13],&g_892[p_13][p_13]},{&g_15,&g_15,&g_15,&g_15,&g_15},{&g_892[p_13][p_13],&g_892[p_13][p_13],&g_892[p_13][p_13],&g_892[p_13][p_13],&g_892[p_13][p_13]},{&g_15,&g_15,&g_15,&g_15,&g_15}}};
                        int i, j, k;
                        l_1555 = &g_892[p_13][g_1002];
                        (*g_186) = (((*g_367) = (-1L)) , l_1556[0][3][2]);
                    }
                    if (l_1557)
                        continue;
                }
            }
            for (g_788 = 2; (g_788 <= 6); g_788 += 1)
            {
                unsigned char l_1560 = 5UL;
                char l_1561 = (-5L);
                int * const *l_1563[8];
                int * const **l_1562 = &l_1563[5];
                int ***l_1564 = &g_186;
                const int *l_1574 = &g_1575[0];
                const char **l_1582 = (void*)0;
                int i;
                for (i = 0; i < 8; i++)
                    l_1563[i] = (void*)0;
                (*g_186) = (*g_186);
            }
        }
        (*g_89) = (p_14 ^ (~0L));
        for (g_436 = 2; (g_436 <= 6); g_436 += 1)
        {
            int l_1597 = (-10L);
            int l_1607 = 0xF36D8597L;
            int i, j;
            (*g_186) = &g_892[g_1002][g_1002];
            l_1608 = ((g_534 = (((g_892[g_1002][(g_1002 + 1)] = (g_892[g_1002][(g_1002 + 1)] | (safe_add_func_uint32_t_u_u((l_1597 = (((*g_691) = (*g_691)) != (void*)0)), (((g_892[g_1002][g_1002] != (safe_mod_func_uint16_t_u_u((p_13 == ((safe_mul_func_uint16_t_u_u(func_16(p_14, (((p_12 <= 0xDDL) || (safe_add_func_uint32_t_u_u(p_12, 0x7079CD24L))) < (*g_554)), (**g_366), p_12, p_14), (*l_1503))) < 0xA881392DL)), (*g_1528)))) & g_892[g_1002][(g_1002 + 1)]) >= l_1606))))) & l_1607) , p_13)) , 0x8049DD34L);
            if (p_14)
                continue;
        }
    }
    (*l_1503) = p_12;
    return (*l_1503);
}







static short func_16(int p_17, const int p_18, int p_19, unsigned p_20, unsigned short p_21)
{
    short l_1478 = 0xE536L;
    char *l_1481 = &g_974;
    int l_1483 = (-1L);
    for (g_1035 = 0; (g_1035 <= 50); g_1035++)
    {
        (*g_697) = 3L;
    }
    if ((*g_89))
    {
        return p_18;
    }
    else
    {
        int l_1482 = (-10L);
        l_1483 = (safe_mul_func_uint8_t_u_u(((((~p_20) & (safe_add_func_uint32_t_u_u(((void*)0 == &g_1160[6]), p_19))) > ((safe_sub_func_uint16_t_u_u(l_1478, (safe_mul_func_uint8_t_u_u(((p_19 , ((void*)0 == l_1481)) != 0x5D5B1533L), p_20)))) | p_19)) < l_1482), l_1478));
        for (g_1004 = 8; (g_1004 == 55); g_1004 = safe_add_func_int32_t_s_s(g_1004, 1))
        {
            unsigned short l_1486[6][4][5] = {{{0x59A3L,0x65E5L,65530UL,0xE980L,0xE980L},{0x2F4DL,0UL,0x2F4DL,0x3CEDL,0UL},{0xE980L,1UL,0UL,0xE980L,0UL},{8UL,8UL,0UL,0UL,0x6C70L}},{{0xBBC0L,0x59A3L,0UL,0UL,0x59A3L},{0x6C70L,65535UL,0x2F4DL,0x6C70L,0x3CEDL},{0x65E5L,0x59A3L,65530UL,0x59A3L,0x65E5L},{0x2F4DL,8UL,65535UL,0x3CEDL,8UL}},{{0x65E5L,1UL,1UL,0x65E5L,0UL},{0x6C70L,0UL,0UL,8UL,8UL},{0xBBC0L,0x65E5L,0xBBC0L,0UL,0x65E5L},{8UL,65535UL,0xAA9FL,65535UL,0xAA9FL}},{{1UL,1UL,0x65E5L,0UL,0xBBC0L},{0UL,0x2F4DL,0xAA9FL,0xAA9FL,0x2F4DL},{0xBBC0L,0x7C3AL,65530UL,0xBBC0L,65535UL},{0x3CEDL,0x2F4DL,0UL,0x2F4DL,0x3CEDL}},{{65530UL,1UL,0x7C3AL,65535UL,1UL},{0x3CEDL,1UL,1UL,0x3CEDL,0xAA9FL},{0xBBC0L,0UL,0x65E5L,1UL,1UL},{0UL,0x3CEDL,0UL,0xAA9FL,0x3CEDL}},{{1UL,0x7C3AL,65535UL,1UL,65535UL},{65535UL,65535UL,0UL,0x3CEDL,0x2F4DL},{65530UL,0xBBC0L,65535UL,65535UL,0xBBC0L},{0x2F4DL,1UL,0UL,0x2F4DL,0xAA9FL}}};
            int l_1487 = 1L;
            int i, j, k;
            l_1487 = ((*g_89) = l_1486[2][1][0]);
            if (p_17)
                break;
        }
    }
    for (l_1483 = 17; (l_1483 >= 15); --l_1483)
    {
        unsigned char *l_1501 = &g_47;
        for (p_17 = 0; (p_17 > (-14)); p_17 = safe_sub_func_int8_t_s_s(p_17, 1))
        {
            unsigned l_1492[10] = {4294967286UL,3UL,3UL,3UL,3UL,4294967286UL,3UL,3UL,3UL,3UL};
            int i;
            return l_1492[7];
        }
        for (g_1041 = 0; (g_1041 >= 23); g_1041 = safe_add_func_int8_t_s_s(g_1041, 1))
        {
            short ** const l_1497[10] = {&g_692,(void*)0,(void*)0,&g_692,(void*)0,(void*)0,&g_692,(void*)0,(void*)0,&g_692};
            int i;
            for (g_435 = 0; (g_435 == 27); g_435 = safe_add_func_int32_t_s_s(g_435, 6))
            {
                short *l_1500 = &g_25[5];
                (*g_186) = ((l_1497[4] != ((((safe_rshift_func_uint8_t_u_s(p_17, (****g_1272))) >= ((*g_89) = (((l_1483 , l_1500) != (*g_1161)) && l_1483))) & p_21) , (void*)0)) , (void*)0);
            }
        }
        if ((*g_483))
            break;
    }
    return p_19;
}







static unsigned func_26(char p_27, unsigned p_28)
{
    unsigned short l_45 = 0xEF54L;
    unsigned char *l_46 = &g_47;
    int l_48 = 5L;
    unsigned *l_950 = &g_934;
    unsigned short *l_1453 = &l_45;
    char *l_1466 = &g_37;
    char ***l_1467 = &g_1274;
    short l_1468 = 0xA827L;
    int l_1469 = 0x94E0122FL;
    (*g_89) = ((safe_sub_func_uint16_t_u_u(((*l_1453) = (func_41(((g_25[5] && ((*l_46) = (safe_lshift_func_int16_t_s_s((l_45 = p_27), 11)))) & ((l_48 = p_28) , ((*l_950) = (func_49(l_48, l_46, ((*g_450) = func_53(l_46))) , l_48))))) , l_45)), 0xDD89L)) ^ 0xE8CAL);
    (*g_186) = (void*)0;
    (*g_89) = ((safe_add_func_int8_t_s_s(((****g_1272) = l_48), l_1469)) == l_45);
    return p_27;
}







static unsigned func_41(unsigned p_42)
{
    int *l_951 = &g_15;
    char *l_972 = &g_37;
    char *l_973 = &g_974;
    int l_975[7] = {0xA035A8C3L,0xA035A8C3L,0xA035A8C3L,0xA035A8C3L,0xA035A8C3L,0xA035A8C3L,0xA035A8C3L};
    unsigned l_1090 = 4294967295UL;
    unsigned char l_1092 = 0x82L;
    int l_1113 = 0L;
    int *l_1177 = &g_892[0][0];
    const unsigned l_1240 = 1UL;
    unsigned l_1325 = 0xB7283F9FL;
    short ** const *l_1346 = &g_691;
    short ** const **l_1345[10][9] = {{(void*)0,(void*)0,&l_1346,(void*)0,(void*)0,&l_1346,(void*)0,(void*)0,&l_1346},{(void*)0,(void*)0,&l_1346,(void*)0,(void*)0,&l_1346,(void*)0,(void*)0,&l_1346},{(void*)0,(void*)0,&l_1346,(void*)0,(void*)0,&l_1346,(void*)0,(void*)0,&l_1346},{(void*)0,(void*)0,&l_1346,(void*)0,(void*)0,&l_1346,(void*)0,(void*)0,&l_1346},{(void*)0,(void*)0,&l_1346,(void*)0,(void*)0,&l_1346,(void*)0,(void*)0,&l_1346},{(void*)0,(void*)0,&l_1346,(void*)0,(void*)0,&l_1346,(void*)0,(void*)0,&l_1346},{(void*)0,(void*)0,&l_1346,(void*)0,(void*)0,&l_1346,(void*)0,(void*)0,&l_1346},{(void*)0,(void*)0,&l_1346,(void*)0,(void*)0,&l_1346,(void*)0,(void*)0,&l_1346},{(void*)0,(void*)0,&l_1346,(void*)0,(void*)0,&l_1346,(void*)0,(void*)0,&l_1346},{(void*)0,(void*)0,&l_1346,(void*)0,(void*)0,&l_1346,(void*)0,(void*)0,&l_1346}};
    int ***l_1367 = &g_366;
    char l_1416 = 0x27L;
    int i, j;
    (*g_186) = l_951;
    for (g_839 = 10; (g_839 > 10); g_839++)
    {
        unsigned char *l_954 = &g_65;
        int *l_957[5];
        int i;
        for (i = 0; i < 5; i++)
            l_957[i] = (void*)0;
        (*g_89) = (l_954 == (void*)0);
        for (g_110 = 23; (g_110 <= 6); g_110 = safe_sub_func_uint8_t_u_u(g_110, 8))
        {
            (*g_186) = l_951;
            if (p_42)
                continue;
        }
        l_957[3] = ((*g_186) = l_951);
        (*g_186) = (*g_186);
    }
    if ((safe_add_func_int32_t_s_s((*g_483), ((safe_rshift_func_int16_t_s_u((((*l_973) = ((*l_951) == ((*g_89) >= (safe_add_func_uint32_t_u_u(p_42, ((*l_951) != ((safe_mul_func_int16_t_s_s(((*g_692) = 0L), ((safe_mul_func_uint8_t_u_u((p_42 > ((0xF32FL != (safe_mod_func_uint32_t_u_u((((*l_972) = (safe_add_func_int16_t_s_s(1L, p_42))) | (*l_951)), 6L))) , (*l_951))), p_42)) , p_42))) , 1UL))))))) ^ l_975[5]), 2)) && 0x205BL))))
    {
        unsigned short l_976[10] = {0x861BL,0x861BL,0x4443L,0x861BL,0x861BL,0x4443L,0x861BL,0x861BL,0x4443L,0x861BL};
        const unsigned *l_980 = &g_753;
        const unsigned **l_979 = &l_980;
        unsigned * const *l_983 = &g_473;
        unsigned char *l_1061 = &g_375;
        unsigned *l_1087 = &g_999[0];
        int l_1091 = 0xDD58840AL;
        int ** const *l_1112 = &g_186;
        int ** const **l_1111 = &l_1112;
        short ***l_1165 = &g_691;
        short ****l_1164 = &l_1165;
        char ** const l_1184 = &l_972;
        char ** const *l_1183 = &l_1184;
        char ** const **l_1182[6];
        unsigned char * const *l_1193 = &l_1061;
        unsigned char * const **l_1192 = &l_1193;
        unsigned char * const ***l_1191 = &l_1192;
        unsigned char l_1215 = 0x90L;
        unsigned l_1360 = 1UL;
        int ***l_1383 = &g_366;
        unsigned l_1425[6][2][4] = {{{4294967289UL,0x2AB53204L,0x2AB53204L,4294967289UL},{4294967289UL,0x2AB53204L,0x2AB53204L,4294967289UL}},{{4294967289UL,0x2AB53204L,0x2AB53204L,4294967289UL},{4294967289UL,0x2AB53204L,0x2AB53204L,4294967289UL}},{{4294967289UL,0x2AB53204L,0x2AB53204L,4294967289UL},{4294967289UL,0x2AB53204L,0x2AB53204L,4294967289UL}},{{4294967289UL,0x2AB53204L,0x2AB53204L,4294967289UL},{4294967289UL,0x2AB53204L,0x2AB53204L,4294967289UL}},{{4294967289UL,0x2AB53204L,0x2AB53204L,4294967289UL},{4294967289UL,0x2AB53204L,0x2AB53204L,4294967289UL}},{{4294967289UL,0x2AB53204L,0x2AB53204L,4294967289UL},{4294967289UL,0x2AB53204L,0x2AB53204L,4294967289UL}}};
        int i, j, k;
        for (i = 0; i < 6; i++)
            l_1182[i] = &l_1183;
        if (((*l_951) | (l_976[3] , ((*g_89) < ((l_976[3] | p_42) , l_976[3])))))
        {
            unsigned char *l_981 = &g_65;
            int l_982 = 1L;
            unsigned * const l_985[5][6][8] = {{{(void*)0,&g_1051,&g_1051,(void*)0,&g_1008[2][3][0],&g_1035,&g_1026,&g_1053[0]},{(void*)0,&g_1053[0],&g_1042,&g_994,(void*)0,&g_1000[0],&g_1056,&g_997},{&g_1030,&g_1053[0],&g_1032,&g_1049[1][2],&g_1024[2],&g_1035,&g_1009[3][0][1],&g_1014},{&g_1038,&g_1051,(void*)0,(void*)0,&g_995,&g_997,&g_1032,&g_1028},{&g_1045,&g_1047[0],&g_1011[0][0][0],&g_1008[2][3][0],&g_1036[2],&g_1028,&g_1057,&g_1044},{&g_1051,&g_1042,&g_995,&g_1057,&g_1006,&g_989,&g_1006,&g_1057}},{{&g_1042,&g_1024[2],&g_1042,&g_1021,&g_1032,&g_1008[2][3][0],&g_1014,&g_1057},{&g_1044,(void*)0,&g_1024[2],&g_994,&g_997,&g_1033,&g_1032,&g_993},{&g_1044,&g_1009[3][0][1],&g_1008[2][3][0],&g_1038,&g_1032,&g_989,&g_1051,&g_1000[0]},{&g_1042,&g_997,(void*)0,&g_1011[0][0][0],&g_994,(void*)0,&g_993,&g_1008[2][3][0]},{&g_1038,&g_986[2][0][0],&g_1036[2],&g_1053[0],&g_1026,&g_1035,&g_1008[2][3][0],(void*)0},{&g_1033,&g_1044,&g_1014,&g_1019,&g_986[2][0][0],&g_986[2][0][0],&g_1019,&g_1014}},{{(void*)0,(void*)0,(void*)0,&g_986[2][0][0],&g_1014,&g_1006,&g_1028,&g_1016},{&g_1021,(void*)0,&g_1035,(void*)0,&g_1042,(void*)0,&g_1038,&g_1016},{(void*)0,&g_993,&g_1009[3][0][1],&g_986[2][0][0],&g_995,&g_1040,&g_1047[0],&g_1014},{&g_1000[0],&g_1045,&g_1053[0],&g_1019,&g_1021,&g_1057,(void*)0,(void*)0},{&g_989,(void*)0,&g_1021,&g_1053[0],&g_1044,&g_997,&g_986[2][0][0],&g_1008[2][3][0]},{&g_1047[0],&g_1000[0],&g_989,&g_1011[0][0][0],&g_993,&g_1011[0][0][0],&g_989,&g_1000[0]}},{{&g_1049[1][2],&g_993,&g_1044,&g_1057,&g_1028,&g_1036[2],&g_1008[2][3][0],&g_1011[0][0][0]},{&g_1030,&g_1038,&g_1009[3][0][1],(void*)0,&g_1049[1][2],&g_1047[0],&g_1008[2][3][0],&g_1000[0]},{(void*)0,(void*)0,&g_1044,&g_1036[2],&g_993,&g_1056,&g_1006,(void*)0},{&g_993,&g_1056,&g_1006,(void*)0,&g_1009[3][0][1],&g_989,&g_1002,&g_1051},{&g_1044,(void*)0,&g_1036[2],(void*)0,(void*)0,&g_993,&g_997,&g_1035},{&g_1021,&g_991[1],&g_995,&g_1033,&g_1033,&g_995,&g_991[1],&g_1021}},{{&g_995,&g_1028,&g_1024[2],&g_1056,&g_1045,&g_997,&g_1057,&g_1004},{&g_1042,&g_994,(void*)0,&g_1000[0],&g_1056,&g_997,&g_1047[0],&g_986[2][0][0]},{&g_1014,&g_1028,&g_1008[2][3][0],(void*)0,(void*)0,&g_995,&g_1035,&g_1036[2]},{&g_986[2][0][0],&g_991[1],&g_1030,&g_1032,&g_995,&g_993,(void*)0,&g_1016},{&g_1026,(void*)0,&g_1056,&g_1047[0],&g_1000[0],&g_989,&g_1011[0][0][0],&g_993},{&g_994,&g_1056,&g_1004,(void*)0,&g_1004,&g_1056,&g_994,&g_1028}}};
            unsigned * const *l_984[4][1];
            int *l_1058 = &g_892[2][4];
            int i, j, k;
            for (i = 0; i < 4; i++)
            {
                for (j = 0; j < 1; j++)
                    l_984[i][j] = &l_985[4][0][1];
            }
            (*l_1058) = ((*l_951) = (safe_mod_func_uint16_t_u_u((l_976[3] && (l_979 == (p_42 , (l_984[3][0] = l_983)))), 65534UL)));
            if ((*g_697))
            {
                const int *l_1059 = &l_982;
                const int *l_1060 = &g_892[3][1];
                unsigned short l_1068 = 7UL;
                int *l_1069[3];
                unsigned short *l_1074 = (void*)0;
                unsigned char *l_1077 = &g_375;
                int i;
                for (i = 0; i < 3; i++)
                    l_1069[i] = &l_982;
                l_1060 = (((*l_951) ^ ((**g_450) , 0UL)) , l_1059);
                l_982 = (p_42 , ((*g_697) , ((*l_1060) == (safe_rshift_func_int8_t_s_s(((safe_add_func_int32_t_s_s(((*g_187) = 0x5F95AC49L), ((safe_add_func_int32_t_s_s(((*l_1058) = p_42), l_1068)) != 4294967295UL))) | p_42), 7)))));
                (*g_186) = (func_49((safe_sub_func_int16_t_s_s(p_42, ((((*l_1058) | (p_42 , (1UL || ((safe_add_func_int16_t_s_s(p_42, (l_981 == l_1077))) , (*l_1058))))) && 0x4B9C3351L) > 0UL))), &g_37, (*g_450)) , (void*)0);
            }
            else
            {
                unsigned char l_1082 = 0UL;
                unsigned char **l_1093 = (void*)0;
                unsigned char **l_1094 = &g_554;
                unsigned l_1095 = 0x16D5816CL;
                (*l_1058) = (safe_sub_func_uint16_t_u_u(((((safe_add_func_uint8_t_u_u((l_1082 ^ l_976[9]), (safe_lshift_func_uint16_t_u_u((l_1091 = ((safe_sub_func_uint16_t_u_u(0x47C9L, (((l_1087 = (*g_472)) == (void*)0) , (safe_lshift_func_uint8_t_u_s(((*l_1058) <= (func_61(((*g_450) = l_1061), l_1090) >= 0xB307L)), p_42))))) != 4UL)), l_1082)))) , g_1047[2]) && (*l_1058)) & l_1092), p_42));
                (*l_951) = (((65531UL == ((*g_692) = ((((*g_450) != ((*l_1058) , ((*l_1094) = (*g_450)))) && (!0x6BL)) , l_1082))) > (**g_450)) == l_1095);
                l_1091 = p_42;
            }
        }
        else
        {
            const unsigned short l_1103[5] = {0x11F6L,0x11F6L,0x11F6L,0x11F6L,0x11F6L};
            const int *l_1129 = &g_892[0][4];
            char ** const ***l_1185 = &l_1182[0];
            char ** const **l_1187 = &l_1183;
            char ** const ***l_1186 = &l_1187;
            unsigned l_1188 = 4294967295UL;
            unsigned char ***l_1190[3][4] = {{&g_450,&g_450,&g_450,&g_450},{&g_450,&g_450,&g_450,&g_450},{&g_450,&g_450,&g_450,&g_450}};
            unsigned char ****l_1189 = &l_1190[1][3];
            int ***l_1195 = &g_186;
            int ****l_1194 = &l_1195;
            int i, j;
            for (g_1013 = 0; (g_1013 != 59); g_1013 = safe_add_func_uint16_t_u_u(g_1013, 4))
            {
                int ****l_1110 = (void*)0;
                int *l_1139 = &g_892[1][4];
            }
            for (g_998 = 0; (g_998 != 9); g_998 = safe_add_func_uint16_t_u_u(g_998, 9))
            {
                unsigned l_1155 = 0x277B0A11L;
                short ****l_1166 = &l_1165;
                int l_1174 = 0xC81B4DCDL;
            }
            l_1091 = (((*g_367) = ((*l_1177) & ((p_42 , (****l_1111)) , ((****l_1111) = 1L)))) , ((***l_1195) = ((((****l_1111) , l_1194) == g_1196) & p_42)));
            if ((*l_951))
            {
                (*g_186) = (**l_1112);
                for (g_1046 = 0; (g_1046 != 2); g_1046 = safe_add_func_int8_t_s_s(g_1046, 1))
                {
                    unsigned l_1205 = 4294967289UL;
                    int l_1209 = 0x0BD7031AL;
                    unsigned short *l_1214 = (void*)0;
                    for (g_1057 = 7; (g_1057 < 15); ++g_1057)
                    {
                        unsigned short *l_1208 = &g_839;
                        (*l_1177) = (-1L);
                        (****l_1194) = (-1L);
                        (****l_1194) = (safe_lshift_func_uint16_t_u_s(((((*g_483) > (safe_lshift_func_uint8_t_u_s((l_1205 = ((****l_1191) = (*l_1129))), 5))) , p_42) && (safe_sub_func_uint8_t_u_u(((l_1209 = ((*l_1208) = l_1205)) , 0UL), (*g_554)))), 5));
                        (**l_1195) = l_1177;
                    }
                    (**g_186) = ((((safe_mul_func_int16_t_s_s(p_42, p_42)) <= (safe_mul_func_int8_t_s_s(9L, ((((p_42 , g_1022) , (void*)0) == l_1214) != p_42)))) > (l_1215 = ((*l_1087) = (****l_1111)))) <= 8L);
                }
                return p_42;
            }
            else
            {
                int l_1223 = 3L;
                int l_1227 = 0x2E388CD9L;
                char **l_1252 = &l_973;
                char ***l_1251 = &l_1252;
                char ****l_1250[10][8] = {{&l_1251,&l_1251,&l_1251,&l_1251,&l_1251,&l_1251,&l_1251,&l_1251},{&l_1251,&l_1251,&l_1251,&l_1251,&l_1251,&l_1251,&l_1251,&l_1251},{&l_1251,&l_1251,&l_1251,&l_1251,&l_1251,&l_1251,&l_1251,&l_1251},{&l_1251,&l_1251,&l_1251,&l_1251,&l_1251,&l_1251,&l_1251,&l_1251},{&l_1251,&l_1251,&l_1251,&l_1251,&l_1251,&l_1251,&l_1251,&l_1251},{&l_1251,&l_1251,&l_1251,&l_1251,&l_1251,&l_1251,&l_1251,&l_1251},{&l_1251,&l_1251,&l_1251,&l_1251,&l_1251,&l_1251,&l_1251,&l_1251},{&l_1251,&l_1251,&l_1251,&l_1251,&l_1251,&l_1251,&l_1251,&l_1251},{&l_1251,&l_1251,&l_1251,&l_1251,&l_1251,&l_1251,&l_1251,&l_1251},{&l_1251,&l_1251,&l_1251,&l_1251,&l_1251,&l_1251,&l_1251,&l_1251}};
                int i, j;
                for (g_1010 = 0; (g_1010 == 31); g_1010++)
                {
                    unsigned char l_1220 = 0UL;
                    unsigned short *l_1226 = &g_130[0][2][0];
                    (**g_186) = (*g_89);
                    l_1227 = (((*l_1226) = ((safe_add_func_int32_t_s_s((l_1220 , 0x90091010L), ((safe_rshift_func_uint8_t_u_u((l_1223 ^ p_42), ((*l_1061) = ((safe_rshift_func_uint16_t_u_u((((*l_951) = p_42) <= p_42), (((p_42 || l_1220) == l_1220) >= p_42))) ^ l_1220)))) | l_1220))) < l_1220)) ^ l_1220);
                    (*l_1177) = l_1220;
                    (***l_1111) = &l_1227;
                }
                for (g_1035 = 0; (g_1035 <= 5); g_1035 += 1)
                {
                    char *l_1238 = (void*)0;
                    int i;
                    if (g_999[(g_1035 + 2)])
                    {
                        int *l_1228 = &l_1091;
                        (***l_1194) = &l_1227;
                        (*l_951) = ((**g_186) = (***l_1195));
                        (***l_1194) = l_1228;
                        g_1229 = &l_1227;
                    }
                    else
                    {
                        unsigned char *l_1239[4];
                        int i;
                        for (i = 0; i < 4; i++)
                            l_1239[i] = &l_1215;
                        (*g_1229) = ((((safe_rshift_func_uint16_t_u_u((0L > func_49((safe_rshift_func_uint16_t_u_s(5UL, (safe_sub_func_int32_t_s_s(((safe_sub_func_int16_t_s_s(func_49(p_42, l_1238, l_1239[3]), 0x426AL)) != p_42), 0L)))), &g_974, l_1239[3])), l_1223)) | p_42) & 1L) , (*g_1229));
                        if (l_1240)
                            break;
                        if (p_42)
                            continue;
                        (**l_1112) = &g_892[3][4];
                    }
                    for (g_47 = 0; (g_47 <= 5); g_47 += 1)
                    {
                        (****l_1111) = ((*g_89) = p_42);
                        return p_42;
                    }
                }
                for (g_994 = 2; (g_994 <= 7); g_994 += 1)
                {
                    char **l_1249[2][10][3] = {{{&l_973,&l_973,&l_972},{&l_972,&l_973,&l_972},{&l_973,&l_972,&l_973},{&l_972,&l_972,&l_972},{&l_973,&l_973,&l_972},{&l_973,&l_972,&l_972},{&l_972,&l_972,&l_973},{&l_973,&l_973,&l_973},{&l_973,&l_973,&l_973},{&l_972,&l_972,&l_972}},{{&l_973,&l_973,&l_972},{&l_972,&l_973,&l_972},{&l_973,&l_972,&l_973},{&l_972,&l_972,&l_972},{&l_973,&l_973,&l_972},{&l_973,&l_972,&l_972},{&l_972,&l_972,&l_973},{&l_973,&l_973,&l_973},{&l_973,&l_973,&l_973},{&l_972,&l_972,&l_972}}};
                    char ***l_1248 = &l_1249[0][1][0];
                    char *** const *l_1247[6][5][8] = {{{&l_1248,&l_1248,&l_1248,(void*)0,&l_1248,&l_1248,&l_1248,(void*)0},{&l_1248,&l_1248,&l_1248,&l_1248,&l_1248,&l_1248,&l_1248,&l_1248},{&l_1248,&l_1248,&l_1248,(void*)0,&l_1248,&l_1248,&l_1248,(void*)0},{&l_1248,&l_1248,&l_1248,&l_1248,&l_1248,&l_1248,&l_1248,&l_1248},{&l_1248,&l_1248,&l_1248,(void*)0,&l_1248,&l_1248,&l_1248,(void*)0}},{{&l_1248,&l_1248,&l_1248,&l_1248,&l_1248,&l_1248,&l_1248,&l_1248},{&l_1248,&l_1248,&l_1248,(void*)0,&l_1248,&l_1248,&l_1248,(void*)0},{&l_1248,&l_1248,&l_1248,&l_1248,&l_1248,&l_1248,&l_1248,&l_1248},{&l_1248,&l_1248,&l_1248,(void*)0,&l_1248,&l_1248,&l_1248,(void*)0},{&l_1248,&l_1248,&l_1248,&l_1248,&l_1248,&l_1248,&l_1248,&l_1248}},{{&l_1248,&l_1248,&l_1248,(void*)0,&l_1248,&l_1248,&l_1248,(void*)0},{&l_1248,&l_1248,&l_1248,&l_1248,&l_1248,&l_1248,&l_1248,&l_1248},{&l_1248,&l_1248,&l_1248,(void*)0,&l_1248,&l_1248,&l_1248,(void*)0},{&l_1248,&l_1248,&l_1248,&l_1248,&l_1248,&l_1248,&l_1248,&l_1248},{&l_1248,&l_1248,&l_1248,(void*)0,&l_1248,&l_1248,&l_1248,(void*)0}},{{&l_1248,&l_1248,&l_1248,&l_1248,&l_1248,&l_1248,&l_1248,&l_1248},{&l_1248,&l_1248,&l_1248,(void*)0,&l_1248,&l_1248,&l_1248,(void*)0},{&l_1248,&l_1248,&l_1248,&l_1248,&l_1248,&l_1248,&l_1248,&l_1248},{&l_1248,&l_1248,&l_1248,(void*)0,&l_1248,&l_1248,&l_1248,(void*)0},{&l_1248,&l_1248,&l_1248,&l_1248,&l_1248,&l_1248,&l_1248,&l_1248}},{{&l_1248,&l_1248,&l_1248,(void*)0,&l_1248,&l_1248,&l_1248,(void*)0},{&l_1248,&l_1248,&l_1248,&l_1248,&l_1248,&l_1248,&l_1248,&l_1248},{&l_1248,&l_1248,&l_1248,(void*)0,&l_1248,&l_1248,&l_1248,(void*)0},{&l_1248,&l_1248,&l_1248,&l_1248,&l_1248,&l_1248,&l_1248,&l_1248},{&l_1248,&l_1248,&l_1248,(void*)0,&l_1248,&l_1248,&l_1248,(void*)0}},{{&l_1248,&l_1248,&l_1248,&l_1248,&l_1248,&l_1248,&l_1248,&l_1248},{&l_1248,&l_1248,&l_1248,(void*)0,&l_1248,&l_1248,&l_1248,(void*)0},{&l_1248,&l_1248,&l_1248,&l_1248,&l_1248,&l_1248,&l_1248,&l_1248},{&l_1248,&l_1248,&l_1248,(void*)0,&l_1248,&l_1248,&l_1248,(void*)0},{&l_1248,&l_1248,&l_1248,&l_1248,&l_1248,&l_1248,&l_1248,&l_1248}}};
                    char ****l_1254 = &l_1248;
                    int l_1257 = 0L;
                    int i, j, k;
                    for (g_1022 = 0; (g_1022 <= 1); g_1022 += 1)
                    {
                        short l_1245 = 0xFED2L;
                        l_1227 = func_49((*g_367), l_972, (*g_450));
                        (*g_697) = ((safe_mul_func_uint8_t_u_u(((***l_1192) = (g_375 < (*l_951))), (safe_lshift_func_int16_t_s_s((g_1012[0][0][5] ^ l_1245), 8)))) <= (!l_1227));
                        (*g_186) = &l_1227;
                        (**l_1195) = (***l_1111);
                    }
                    for (g_1025 = 0; (g_1025 <= 1); g_1025 += 1)
                    {
                        return l_1223;
                    }
                    for (g_1042 = 0; (g_1042 <= 3); g_1042 += 1)
                    {
                        int *l_1246[8][5][3];
                        int i, j, k;
                        for (i = 0; i < 8; i++)
                        {
                            for (j = 0; j < 5; j++)
                            {
                                for (k = 0; k < 3; k++)
                                    l_1246[i][j][k] = (void*)0;
                            }
                        }
                        (**l_1112) = l_1246[4][1][2];
                    }
                    for (g_435 = 0; (g_435 <= 7); g_435 += 1)
                    {
                        char *****l_1253[2];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_1253[i] = &l_1250[7][1];
                        l_951 = &l_1227;
                        (*l_951) = (l_1247[2][0][0] == (l_1254 = l_1250[8][0]));
                        (*g_697) = (((((safe_sub_func_uint32_t_u_u(((((((**l_1184) = l_1257) , (*g_554)) || (safe_rshift_func_uint16_t_u_u(((*l_1177) > (safe_rshift_func_int8_t_s_u(0L, ((p_42 | l_1257) >= 65535UL)))), p_42))) , p_42) > 1UL), 0x1E6D1C6DL)) , l_1257) < 4294967291UL) > p_42) <= l_1257);
                    }
                }
            }
        }
        for (g_31 = 0; (g_31 >= 0); g_31 -= 1)
        {
            char l_1264[6][3] = {{1L,0L,1L},{0x3FL,0L,0L},{0L,0L,0L},{0x3FL,0x3FL,0L},{1L,0L,1L},{0x3FL,0L,0L}};
            unsigned char *l_1285 = &g_375;
            unsigned char ***l_1316 = &g_450;
            unsigned short **l_1321 = &g_384;
            unsigned *l_1330[6];
            int ***l_1369 = &g_366;
            int l_1386 = 0xBCC07016L;
            char ****l_1388 = &g_1273;
            int l_1390 = (-7L);
            int i, j;
            for (i = 0; i < 6; i++)
                l_1330[i] = &g_1003;
            (*g_89) = (*g_483);
            for (g_375 = 1; (g_375 <= 4); g_375 += 1)
            {
                unsigned l_1267 = 0x69179E34L;
                unsigned char ** const l_1277 = &g_64;
                int *l_1280 = &l_1091;
                int i, j;
                for (g_436 = 0; (g_436 <= 0); g_436 += 1)
                {
                    unsigned char ***l_1276 = &g_450;
                    int i, j;
                    for (l_1113 = 0; (l_1113 <= 4); l_1113 += 1)
                    {
                        int i, j, k;
                        if (g_986[(g_31 + 3)][(g_31 + 3)][(g_31 + 1)])
                            break;
                    }
                    g_892[(g_31 + 1)][g_31] = (((*l_1276) = ((safe_add_func_uint32_t_u_u((p_42 && l_1264[1][2]), (((void*)0 == &g_382) >= ((safe_mul_func_int8_t_s_s(l_1267, (&g_383 != (void*)0))) & (safe_rshift_func_int8_t_s_s(g_1021, (safe_lshift_func_int8_t_s_s((g_1272 == &g_1273), 2)))))))) , (void*)0)) == l_1277);
                    for (g_1022 = 0; (g_1022 <= 0); g_1022 += 1)
                    {
                        char **l_1282[4] = {&l_973,&l_973,&l_973,&l_973};
                        char ***l_1281 = &l_1282[3];
                        int i, j;
                        (*l_1177) = ((**g_1274) > ((safe_lshift_func_int8_t_s_s(((((((g_943[g_375][g_375] = ((void*)0 != l_1280)) , (**g_1272)) != ((*l_1281) = (**g_1272))) && ((((((-8L) ^ ((g_943[g_375][g_375] , (safe_mod_func_int8_t_s_s((&g_943[g_375][g_375] == ((***l_1164) = (void*)0)), g_943[g_375][g_375]))) < g_892[(g_31 + 1)][g_31])) && p_42) , g_892[(g_31 + 1)][g_31]) || 0xBE5BL) != (*g_1162))) , l_1285) == (void*)0), p_42)) && g_892[(g_31 + 1)][g_31]));
                    }
                    if (g_1286)
                    {
                        (*g_89) = (safe_mul_func_int16_t_s_s(p_42, (safe_mul_func_int8_t_s_s((((-4L) > 9UL) && (-1L)), (safe_mul_func_int16_t_s_s(p_42, ((safe_rshift_func_uint16_t_u_u(0x6130L, 1)) , p_42)))))));
                        return p_42;
                    }
                    else
                    {
                        unsigned short *l_1297 = &l_976[3];
                        int l_1304 = 1L;
                        (*g_186) = l_1177;
                        (***l_1112) = (safe_mul_func_int16_t_s_s(p_42, ((((*g_383) = (void*)0) == l_1297) < (safe_add_func_uint16_t_u_u(0x5F87L, p_42)))));
                        if (p_42)
                            break;
                        (*g_187) = ((*l_1280) = ((((((-1L) | ((safe_mod_func_uint32_t_u_u(((((p_42 && ((safe_sub_func_int32_t_s_s(((p_42 > ((**g_1161) = 0L)) | p_42), (l_1304 <= p_42))) >= (safe_mod_func_int8_t_s_s((p_42 >= p_42), p_42)))) , p_42) == 0xF898L) & 0xB2EE7F43L), 1L)) != g_25[0])) != l_1264[2][0]) , 0x0068603DL) & 0x0894E157L) || l_1304));
                    }
                }
                g_892[g_375][g_375] = (((p_42 & l_1264[1][2]) >= (*g_554)) && ((safe_sub_func_int16_t_s_s((((p_42 , ((p_42 && (**g_1161)) & (safe_lshift_func_int16_t_s_u((*l_1177), p_42)))) != p_42) <= (*g_64)), p_42)) | 255UL));
            }
            (***l_1111) = (void*)0;
            for (g_444 = 8; (g_444 >= 0); g_444 -= 1)
            {
                short *l_1324 = (void*)0;
                unsigned char l_1349 = 0UL;
                unsigned char *l_1354 = (void*)0;
                int l_1365[6][4][10] = {{{1L,0x26129C65L,0L,6L,(-4L),0x1A6C677DL,0x67D0E95DL,0xEC8B3E47L,5L,0xAA0F4604L},{(-1L),3L,(-10L),(-6L),0x408CAC5BL,(-3L),(-9L),6L,0x31D10659L,0x625B013CL},{5L,1L,0xC2B53D1CL,1L,0x1E8AB509L,0x96887FE2L,1L,3L,0xCE978764L,0xECEFC91BL},{0x9396303CL,6L,8L,1L,(-1L),1L,0x927C7DC0L,0x2361AD01L,1L,0x7ABBE9B3L}},{{0xAFE2CE4AL,0xB10EF951L,0xFEEFF942L,(-10L),0xD61B763AL,1L,0L,(-1L),3L,6L},{1L,9L,0x625B013CL,0x408CAC5BL,0x32098349L,0xF10CBB44L,(-10L),0x3CF3DBB2L,(-9L),(-3L)},{0xB02C66E7L,0x0464A978L,0xB02C66E7L,3L,(-1L),0x32098349L,0x4BC23E80L,0xCD41E0FCL,0x79483142L,0x96887FE2L},{5L,0xA40C09EBL,5L,(-6L),0x3F4E6819L,0x1E8AB509L,0xAFE2CE4AL,0xCD41E0FCL,(-10L),0x7A8166AEL}},{{0x2CBDE791L,(-4L),0xB02C66E7L,0xD55ECDF3L,0x79483142L,0xFEEFF942L,3L,0x3CF3DBB2L,0xC2B53D1CL,0xAA0F4604L},{0x1494FCA3L,1L,(-4L),6L,0L,(-1L),0x1A6C677DL,1L,0xFEEFF942L,0L},{0x8EC0AC84L,8L,(-4L),0x46D743E3L,(-9L),1L,0x3F4E6819L,0x4E8F2345L,6L,9L},{(-4L),0xEC8B3E47L,0xD61B763AL,0x1E8AB509L,6L,0x7E02BA6EL,(-6L),0x6CFAB8CBL,(-1L),0xECEFC91BL}},{{(-1L),0x30AD3325L,1L,5L,0x32098349L,6L,6L,0x408CAC5BL,0xEC8B3E47L,0xC2B53D1CL},{1L,0x96887FE2L,0x0EAABF29L,1L,(-4L),8L,0x3CF3DBB2L,0xAFE2CE4AL,(-4L),0x9396303CL},{1L,(-4L),0xCE978764L,0xF9F063C4L,0xD61B763AL,0x4E8F2345L,0x8EC0AC84L,0x2361AD01L,0x0464A978L,0xB10EF951L},{0x67D0E95DL,0x4E8F2345L,(-6L),8L,6L,5L,(-4L),(-4L),5L,6L}},{{0x2361AD01L,1L,1L,0x2361AD01L,(-10L),0x8EC0AC84L,0x6CFAB8CBL,0xCD41E0FCL,1L,0x2CBDE791L},{0x30AD3325L,9L,5L,(-10L),0L,(-1L),1L,0x6CFAB8CBL,1L,(-2L)},{0x79483142L,(-1L),1L,0x2361AD01L,5L,3L,(-5L),0xAFE2CE4AL,5L,(-4L)},{0xC2B53D1CL,1L,0x4BC23E80L,8L,0x1494FCA3L,0x6CFAB8CBL,0x96887FE2L,0L,(-4L),(-1L)}},{{(-5L),(-6L),0x31D10659L,3L,1L,0xEC8B3E47L,0xA40C09EBL,0x1494FCA3L,0x67D0E95DL,1L},{0xAA0F4604L,(-4L),6L,6L,3L,0xF9F063C4L,0L,0x7ABBE9B3L,(-9L),0xB02C66E7L},{0x8EC0AC84L,0xFEEFF942L,0x3CF3DBB2L,0x1E8AB509L,0xF9F063C4L,0x4BC23E80L,0x1A6C677DL,0x2CBDE791L,1L,1L},{1L,0x0464A978L,0xAD53584FL,0xA40C09EBL,0x26129C65L,1L,(-1L),0x96D8EA45L,0x927C7DC0L,0x999F99C9L}}};
                int i, j, k;
                g_892[(g_31 + 3)][(g_31 + 2)] = 4L;
                for (g_1023 = 0; (g_1023 <= 6); g_1023 += 1)
                {
                    unsigned char *l_1313 = &g_375;
                    unsigned char ****l_1317 = &l_1316;
                    int l_1318 = 0xF3A552EDL;
                    int i, j;
                    (**l_1112) = (*g_186);
                    l_1318 = (g_1053[g_31] >= (safe_mul_func_uint16_t_u_u(p_42, p_42)));
                    for (g_1013 = 0; (g_1013 <= 1); g_1013 += 1)
                    {
                        int *l_1319 = (void*)0;
                        int l_1320 = (-2L);
                        unsigned short ***l_1322 = (void*)0;
                        unsigned short ***l_1323[4][1][3] = {{{(void*)0,&l_1321,(void*)0}},{{&g_383,&g_383,&g_383}},{{(void*)0,&l_1321,(void*)0}},{{&g_383,&g_383,&g_383}}};
                        int i, j, k;
                        (***l_1111) = &g_892[(g_31 + 3)][(g_31 + 2)];
                        (**l_1112) = l_1319;
                        l_1320 = p_42;
                        (*l_1177) = ((l_1264[1][2] , &g_384) != (l_1321 = l_1321));
                    }
                    if ((l_1324 == (*g_691)))
                    {
                        (*g_186) = (*g_186);
                        return p_42;
                    }
                    else
                    {
                        int l_1326[4];
                        int i;
                        for (i = 0; i < 4; i++)
                            l_1326[i] = 1L;
                        l_1326[0] = l_1325;
                    }
                }
                (*g_186) = &g_892[(g_31 + 3)][(g_31 + 2)];
                (*g_187) = ((g_1053[g_31] = l_1264[4][1]) == g_892[(g_31 + 3)][(g_31 + 2)]);
                for (g_1013 = 1; (g_1013 <= 6); g_1013 += 1)
                {
                    int l_1331 = 0L;
                    unsigned char *l_1350 = &g_47;
                    const int *l_1366[1];
                    int ****l_1368 = &l_1367;
                    unsigned short *l_1374 = &g_130[0][2][0];
                    unsigned short *l_1375 = &g_513;
                    unsigned short *l_1376 = &g_788;
                    int i;
                    for (i = 0; i < 1; i++)
                        l_1366[i] = &g_892[(g_31 + 3)][(g_31 + 2)];
                    (***l_1111) = (***l_1111);
                    (*g_186) = ((safe_add_func_uint8_t_u_u(((((((safe_unary_minus_func_int16_t_s((-1L))) , (p_42 , l_1330[1])) != (void*)0) , p_42) | ((*g_64) ^ 246UL)) >= p_42), l_1264[1][2])) , &g_892[(g_31 + 3)][(g_31 + 2)]);
                    if ((+(((*g_554) = (***l_1112)) ^ (safe_sub_func_int8_t_s_s(l_1331, (safe_rshift_func_int16_t_s_s(((0UL || ((*g_89) = (safe_unary_minus_func_uint8_t_u((safe_add_func_uint8_t_u_u(((*l_1350) = ((safe_rshift_func_uint8_t_u_u(((safe_sub_func_uint32_t_u_u((g_1053[g_31] = g_892[(g_31 + 3)][(g_31 + 2)]), (safe_mod_func_int32_t_s_s((g_892[(g_31 + 3)][(g_31 + 2)] | (g_892[(g_31 + 3)][(g_31 + 2)] > (+(~((p_42 > (l_1345[5][4] != ((safe_mul_func_uint8_t_u_u(0x7EL, 0xF5L)) , &g_1160[5]))) <= l_1349))))), l_1331)))) , 0x46L), 5)) , (****l_1111))), 254UL)))))) , p_42), 10)))))))
                    {
                        unsigned char **l_1353[2][1];
                        int l_1357 = 0xE52F6C07L;
                        int i, j;
                        for (i = 0; i < 2; i++)
                        {
                            for (j = 0; j < 1; j++)
                                l_1353[i][j] = &l_1061;
                        }
                        (***l_1111) = l_1330[1];
                        (*g_187) = (0xD6L & (p_42 , (safe_mul_func_uint8_t_u_u(p_42, ((safe_add_func_uint16_t_u_u(0xFA4CL, 0x020CL)) || (*g_554))))));
                    }
                    else
                    {
                        unsigned *l_1361 = &g_86[3][6];
                        int l_1364[9] = {0x32475175L,0x32475175L,0x32475175L,0x32475175L,0x32475175L,0x32475175L,0x32475175L,0x32475175L,0x32475175L};
                        int i;
                        l_1364[2] = (((**g_186) = (l_1360 || (((p_42 != 65534UL) | (((*l_1361) = 4294967288UL) , (safe_add_func_int16_t_s_s((p_42 , p_42), 6L)))) , g_1053[g_31]))) >= p_42);
                        (*g_697) = l_1365[4][3][8];
                        l_1366[0] = (void*)0;
                    }
                    (*g_697) = ((((***l_1192) = p_42) < (p_42 >= (l_1264[1][2] && (((safe_add_func_int8_t_s_s((safe_sub_func_uint16_t_u_u(((*l_1376) = ((*l_1375) = ((*l_1374) = 1UL))), p_42)), p_42)) <= 9L) , 0xD0L)))) == g_1377);
                }
            }
            for (g_1041 = 2; (g_1041 <= 6); g_1041 += 1)
            {
                short *****l_1380 = &l_1164;
                int ****l_1384 = (void*)0;
                int ****l_1385 = &l_1383;
                unsigned char *l_1387 = &g_65;
                int l_1389 = 0xB6F1CBB6L;
                int i, j;
                g_892[g_31][(g_31 + 5)] = (safe_sub_func_uint32_t_u_u((((*l_1380) = &l_1165) != ((safe_sub_func_uint32_t_u_u((((*g_1162) , (l_1386 = (((*l_1385) = l_1383) == (p_42 , l_1369)))) | (l_1390 = (((l_1264[1][2] < (((*g_554) , (((*g_1275) = (**g_1274)) , &g_1273)) == l_1388)) != l_1389) | p_42))), l_1389)) , &l_1165)), 0x7AC02433L));
                for (g_1001 = 1; (g_1001 <= 6); g_1001 += 1)
                {
                    unsigned short l_1393 = 1UL;
                    for (g_1163 = 6; (g_1163 >= 0); g_1163 -= 1)
                    {
                        unsigned l_1394 = 0xE3981DE9L;
                        int l_1395 = 0x137D88D6L;
                        int i, j;
                        (*g_697) = (g_1007[(g_31 + 4)] , ((l_1395 = (safe_add_func_uint32_t_u_u(((255UL > (((****g_1272) || p_42) | (*g_89))) == p_42), 0x4412A7B3L))) >= g_943[g_1041][g_31]));
                        (***l_1111) = (void*)0;
                    }
                    (*g_186) = &l_1389;
                    if ((*l_1177))
                        break;
                }
                for (g_1019 = 0; (g_1019 <= 6); g_1019 += 1)
                {
                    (*g_697) = 0x56F22646L;
                    if (l_1264[1][2])
                        continue;
                }
            }
        }
        for (g_996 = 0; (g_996 >= 17); g_996 = safe_add_func_uint8_t_u_u(g_996, 9))
        {
            unsigned short l_1412 = 1UL;
            int l_1418 = 0L;
            int *l_1419 = &l_1091;
            short l_1437[1];
            int i;
            for (i = 0; i < 1; i++)
                l_1437[i] = 0x30F0L;
            for (g_993 = 18; (g_993 > 48); g_993 = safe_add_func_uint32_t_u_u(g_993, 7))
            {
                char l_1404 = 1L;
                const short l_1407 = 0xD547L;
                int l_1415 = 0xFE1938DFL;
                for (l_1090 = 0; (l_1090 == 12); l_1090++)
                {
                    unsigned *l_1413 = (void*)0;
                    unsigned *l_1414[10][3] = {{&g_1000[0],&g_1000[8],&g_1000[0]},{&g_1000[0],&g_1054[0][0],&g_1000[8]},{&g_1054[0][0],&g_1000[0],&g_1000[0]},{&g_1000[8],&g_1000[0],&g_1031},{&g_995,&g_1054[0][0],(void*)0},{&g_1000[8],&g_1000[8],(void*)0},{&g_1054[0][0],&g_995,&g_1031},{&g_1000[0],&g_1000[8],&g_1000[0]},{&g_1000[0],&g_1054[0][0],&g_1000[8]},{&g_1054[0][0],&g_1000[0],&g_1000[0]}};
                    int l_1417 = 0L;
                    int i, j;
                    if (((((((safe_add_func_uint16_t_u_u(p_42, ((((p_42 , (l_1404 , ((safe_sub_func_uint32_t_u_u(l_1407, (((((***l_1192) = ((safe_rshift_func_uint8_t_u_s(0x56L, 0)) ^ (l_1407 & p_42))) < (4294967295UL < ((l_1415 = (safe_mod_func_int8_t_s_s(((**g_1274) = p_42), l_1412))) <= p_42))) < (-7L)) , (*l_1177)))) & 0UL))) , l_1412) , &l_1164) == &g_1159[1]))) , (void*)0) != (*l_1164)) != l_1416) >= l_1417) == p_42))
                    {
                        l_1418 = 0xF3651959L;
                        return p_42;
                    }
                    else
                    {
                        (*g_186) = &g_15;
                        l_1419 = (*g_186);
                    }
                    for (l_1215 = 0; (l_1215 > 49); l_1215 = safe_add_func_uint16_t_u_u(l_1215, 1))
                    {
                        unsigned char *l_1422 = &g_47;
                        (*g_187) = p_42;
                    }
                    (*l_1177) = (safe_mul_func_int8_t_s_s(p_42, (*l_1419)));
                    if ((*l_1419))
                        continue;
                }
                (***l_1111) = &l_1418;
                return l_1425[0][0][3];
            }
            for (g_1046 = 0; (g_1046 <= 1); ++g_1046)
            {
                (*g_186) = &l_1091;
                if (p_42)
                    continue;
                (*g_186) = (***l_1111);
                for (g_513 = 4; (g_513 <= 56); g_513 = safe_add_func_uint8_t_u_u(g_513, 3))
                {
                    for (l_1418 = 1; (l_1418 >= 0); l_1418 -= 1)
                    {
                        unsigned char *l_1432 = &l_1092;
                        unsigned short *l_1441[4][9][4] = {{{(void*)0,&l_1412,(void*)0,&l_976[3]},{&g_788,&g_534,&l_976[3],&g_839},{&g_534,&g_788,&g_534,(void*)0},{(void*)0,(void*)0,&g_534,&g_534},{&l_976[3],&g_534,&g_839,(void*)0},{(void*)0,&g_130[0][2][0],&g_839,&l_1412},{&l_976[3],&g_839,&g_534,&g_534},{(void*)0,(void*)0,&g_534,(void*)0},{&g_534,(void*)0,&l_976[3],&g_788}},{{&g_788,&l_976[3],(void*)0,&l_976[3]},{(void*)0,&l_976[3],&l_976[8],&g_788},{&l_976[3],(void*)0,(void*)0,(void*)0},{&g_513,(void*)0,(void*)0,&g_534},{&g_130[0][2][0],(void*)0,&g_839,(void*)0},{&g_788,&g_839,&g_534,&g_534},{&g_788,&l_976[3],&g_839,&g_534},{&g_130[0][2][0],&g_534,&g_534,&g_130[0][2][0]},{&g_839,&g_130[0][0][1],&g_130[0][2][0],&l_976[8]}},{{&g_534,&g_534,(void*)0,&l_1412},{&l_976[3],(void*)0,&l_976[3],&l_1412},{&g_130[0][0][1],&g_534,(void*)0,&l_976[8]},{&l_976[3],&g_130[0][0][1],&l_976[3],&g_130[0][2][0]},{&l_976[3],&g_534,&g_788,&g_534},{&l_1412,&l_976[3],&l_976[8],&g_534},{&g_513,&g_839,&l_976[8],(void*)0},{&l_1412,(void*)0,&g_788,&g_788},{&l_976[3],&l_976[3],&l_976[3],&g_513}},{{&l_976[3],&g_513,(void*)0,&g_130[0][0][1]},{&g_130[0][0][1],&g_534,&l_976[3],(void*)0},{&l_976[3],&g_534,(void*)0,&g_130[0][0][1]},{&g_534,&g_513,&g_130[0][2][0],&g_513},{&g_839,&l_976[3],&g_534,&g_788},{&g_130[0][2][0],(void*)0,&g_839,(void*)0},{&g_788,&g_839,&g_534,&g_534},{&g_788,&l_976[3],&g_839,&g_534},{&g_130[0][2][0],&g_534,&g_534,&g_130[0][2][0]}}};
                        int i, j, k;
                        (*l_1177) = ((*l_1419) = ((safe_rshift_func_int8_t_s_u(((*l_973) = (****g_1272)), 5)) < (*l_1419)));
                        (*l_1177) = p_42;
                    }
                }
            }
        }
    }
    else
    {
        int *l_1448 = (void*)0;
        for (g_934 = 0; (g_934 < 40); g_934++)
        {
            short * const *l_1451 = &g_1162;
            short * const **l_1452 = &l_1451;
            for (g_1001 = 0; (g_1001 >= 19); g_1001 = safe_add_func_int8_t_s_s(g_1001, 9))
            {
                for (g_1377 = 0; (g_1377 <= (-28)); g_1377--)
                {
                    for (g_788 = 0; g_788 < 8; g_788 += 1)
                    {
                        g_1027[g_788] = 0x5C4D9B34L;
                    }
                    if (p_42)
                        continue;
                }
                return p_42;
            }
            (*g_186) = l_1448;
            for (g_1056 = 0; (g_1056 <= 3); g_1056 += 1)
            {
                int i, j;
                (*l_951) = (safe_rshift_func_int16_t_s_s(g_263[g_1056][(g_1056 + 1)], 3));
                (*l_951) = (-4L);
                (*g_186) = l_1177;
            }
            (*l_1177) = (((*l_1452) = l_1451) != (void*)0);
        }
    }
    return p_42;
}







static unsigned char func_49(int p_50, char * p_51, unsigned char * p_52)
{
    int l_793[2];
    int l_794 = 0xEEA187FBL;
    int l_805 = 0xE5B462C2L;
    short ***l_850 = (void*)0;
    unsigned short l_906 = 0x0B8DL;
    const int **l_928 = &g_483;
    const int ***l_927[7][7] = {{&l_928,&l_928,&l_928,&l_928,&l_928,&l_928,&l_928},{&l_928,&l_928,&l_928,&l_928,&l_928,&l_928,&l_928},{&l_928,&l_928,&l_928,&l_928,&l_928,&l_928,&l_928},{&l_928,&l_928,&l_928,&l_928,&l_928,&l_928,&l_928},{&l_928,&l_928,&l_928,&l_928,&l_928,&l_928,&l_928},{&l_928,&l_928,&l_928,&l_928,&l_928,&l_928,&l_928},{&l_928,&l_928,&l_928,&l_928,&l_928,&l_928,&l_928}};
    unsigned l_933 = 0xF3E9B3C2L;
    int l_949[6];
    int i, j;
    for (i = 0; i < 2; i++)
        l_793[i] = (-8L);
    for (i = 0; i < 6; i++)
        l_949[i] = 0xD49BFEF9L;
    l_794 = ((l_793[0] || p_50) , p_50);
    for (g_15 = 0; (g_15 <= 3); g_15 += 1)
    {
        int l_795 = 0xDD5587C6L;
        short l_812[4] = {0x6F43L,0x6F43L,0x6F43L,0x6F43L};
        char * const *l_833 = (void*)0;
        unsigned char l_838[4][7] = {{9UL,0xD5L,0xD5L,9UL,0UL,9UL,0xD5L},{7UL,7UL,0xD5L,0x65L,0xD5L,7UL,7UL},{7UL,0xD5L,0x65L,0xD5L,7UL,7UL,0xD5L},{9UL,0UL,9UL,0xD5L,0xD5L,9UL,0UL}};
        int * const ** const l_840 = (void*)0;
        int l_882 = 0xB78A8920L;
        int *l_888[10][3][8] = {{{&l_794,&l_795,&l_794,&l_794,&g_15,&l_794,(void*)0,&g_15},{&l_805,&l_795,&l_795,&g_15,&g_15,&l_795,&l_795,&l_805},{&g_15,(void*)0,&l_805,&l_794,&l_805,&l_805,(void*)0,&l_805}},{{&l_795,&l_805,&g_15,&g_15,&l_794,&l_805,&l_795,(void*)0},{(void*)0,&l_794,(void*)0,&g_15,(void*)0,&g_15,(void*)0,&l_794},{(void*)0,&l_794,&l_805,&l_805,&l_794,(void*)0,&g_15,&g_15}},{{&l_795,&g_15,&g_15,&g_15,(void*)0,&l_795,&g_15,&g_15},{&l_794,&g_15,&l_805,(void*)0,&l_805,&l_805,(void*)0,&l_805},{&l_805,&l_805,(void*)0,&l_805,&g_15,&l_794,&l_795,&l_794}},{{&l_795,(void*)0,&g_15,&g_15,&g_15,&l_795,(void*)0,&l_794},{(void*)0,&l_794,&l_805,&l_805,&l_794,(void*)0,&l_794,&l_805},{&g_15,(void*)0,&g_15,(void*)0,&l_794,(void*)0,(void*)0,&g_15}},{{&l_805,&l_794,&g_15,&g_15,&l_805,&l_795,&l_794,&g_15},{&l_805,&l_805,&l_794,&l_805,&l_794,&l_795,&l_795,&l_794},{&g_15,&l_795,&l_795,&l_794,&g_15,(void*)0,&l_805,&l_794}},{{&l_794,&g_15,&g_15,&l_795,&l_805,&l_794,&l_805,&l_795},{&g_15,&g_15,&l_794,&l_805,&l_795,(void*)0,&g_15,(void*)0},{&l_794,&l_795,(void*)0,&l_795,&l_794,(void*)0,&l_795,(void*)0}},{{&g_15,&l_794,&l_805,&g_15,&l_794,(void*)0,(void*)0,&l_795},{(void*)0,&l_805,&l_805,&l_794,&l_805,&l_794,&l_795,&l_795},{&l_794,(void*)0,(void*)0,(void*)0,(void*)0,&l_794,&g_15,&g_15}},{{&l_794,&l_805,&l_794,&l_805,&l_805,(void*)0,&l_805,(void*)0},{(void*)0,&l_794,&g_15,&l_805,&l_794,&g_15,&l_805,&g_15},{(void*)0,&l_794,&l_795,(void*)0,&l_795,&l_794,(void*)0,&l_795}},{{(void*)0,&l_795,&l_805,&l_794,&g_15,&g_15,&l_805,&l_795},{&l_794,&l_805,&l_795,&g_15,&g_15,&l_794,(void*)0,(void*)0},{&l_805,&l_795,&g_15,&g_15,&g_15,&g_15,&l_795,&l_805}},{{&l_794,&g_15,&g_15,&l_795,(void*)0,&g_15,&g_15,&g_15},{&l_794,(void*)0,(void*)0,&l_794,&l_795,&g_15,&l_794,&l_795},{(void*)0,&g_15,&l_795,&g_15,&l_805,&g_15,&l_795,&g_15}}};
        const unsigned char * const * const l_898 = (void*)0;
        const unsigned char * const * const *l_897 = &l_898;
        unsigned char l_939 = 0xDDL;
        int i, j, k;
        for (g_375 = 0; (g_375 <= 3); g_375 += 1)
        {
            unsigned l_813 = 4294967287UL;
            int *l_827 = &g_15;
            for (g_526 = 3; (g_526 >= 0); g_526 -= 1)
            {
                unsigned short l_825 = 6UL;
                int l_828 = (-4L);
                for (l_794 = 3; (l_794 >= 0); l_794 -= 1)
                {
                    unsigned l_800 = 4294967295UL;
                    short l_822[1][8][10] = {{{1L,0xF513L,0x0CE8L,0x9EFCL,(-1L),(-1L),(-1L),0x180CL,0x0CE8L,0x180CL},{(-1L),2L,0x15C9L,0x9EFCL,0x15C9L,2L,(-1L),1L,0x9D21L,0x9EFCL},{0x9D21L,0x180CL,0x15C9L,6L,1L,1L,1L,0x180CL,1L,1L},{(-1L),0x180CL,0x0CE8L,0x180CL,(-1L),(-1L),(-1L),0x9EFCL,0x0CE8L,0xF513L},{(-1L),2L,1L,0xF513L,0x15C9L,1L,(-1L),1L,0x15C9L,0xF513L},{0x9D21L,0xF513L,0x9D21L,6L,(-1L),2L,1L,0xF513L,0x15C9L,1L},{(-1L),0x9EFCL,0x0CE8L,0xF513L,0x9D21L,0xF513L,0x9D21L,6L,(-1L),2L},{0x9D21L,(-2L),0x0CE8L,1L,0x19EBL,0x345FL,0x9D21L,(-1L),0x7DFDL,1L}}};
                    short *l_823 = &g_542;
                    char *l_824 = &g_37;
                    int *l_826 = &l_795;
                    int i, j, k;
                    l_795 = (((l_795 == (safe_sub_func_uint32_t_u_u((safe_lshift_func_int16_t_s_u(0x4BA0L, 2)), p_50))) || l_800) | 65530UL);
                    l_813 = (safe_sub_func_uint8_t_u_u((l_805 = (248UL > (safe_sub_func_uint8_t_u_u(((+0xDA627542L) <= p_50), 0x46L)))), ((g_526 , p_50) | (safe_mul_func_int8_t_s_s((safe_mul_func_uint16_t_u_u(65535UL, ((safe_add_func_int8_t_s_s(p_50, 255UL)) , (*g_692)))), l_812[0])))));
                    for (g_444 = 3; (g_444 >= 0); g_444 -= 1)
                    {
                        return p_50;
                    }
                    if (((((safe_mod_func_uint32_t_u_u(l_800, ((*l_826) = (((((safe_sub_func_int8_t_s_s(g_130[0][2][0], ((((safe_add_func_uint8_t_u_u(1UL, (safe_rshift_func_uint8_t_u_u((p_50 >= ((((*l_824) = (1L & ((g_37 || l_822[0][6][9]) == ((0x3BE4L & ((*l_823) = (*g_692))) && l_812[0])))) > l_825) || l_793[0])), p_50)))) , l_825) != p_50) | 0x97AE69B8L))) ^ g_788) ^ l_800) , 0xF2F05FA0L) || p_50)))) , (*l_826)) , l_793[0]) > 2L))
                    {
                        (*g_186) = l_827;
                    }
                    else
                    {
                        l_828 = ((*l_826) = 0x51D71075L);
                    }
                }
            }
        }
        if (((((~(safe_lshift_func_int16_t_s_s((safe_add_func_uint32_t_u_u(((*g_692) , p_50), (4294967292UL && (l_833 == (void*)0)))), (0UL >= (g_839 = ((((((safe_rshift_func_uint16_t_u_u(((l_805 = l_795) , 0x644AL), (((((!((p_50 <= p_50) < l_812[0])) || 0x21385572L) & l_838[3][1]) , l_838[3][2]) ^ (*g_697)))) ^ 0L) && 0x6FL) | 3L) || l_812[3]) == 0x9B9E6746L)))))) , l_840) != (void*)0) , (*g_697)))
        {
            char l_841[9] = {2L,0xD8L,2L,0xD8L,2L,0xD8L,2L,0xD8L,2L};
            unsigned short *l_842 = (void*)0;
            unsigned short *l_843 = (void*)0;
            int *l_844 = (void*)0;
            int *l_845 = &l_805;
            int l_858 = (-7L);
            int i;
            (*l_845) = (4294967293UL && ((+0L) > (l_794 = l_841[7])));
            for (g_788 = 0; (g_788 <= 3); g_788 += 1)
            {
                int *l_846 = &l_805;
                int l_877 = (-6L);
                l_846 = (void*)0;
                for (g_31 = 3; (g_31 >= 0); g_31 -= 1)
                {
                    char l_847 = (-1L);
                    for (g_534 = 0; (g_534 <= 3); g_534 += 1)
                    {
                        int l_857 = 1L;
                        int l_859 = 0x5335A259L;
                        int l_860 = 0x756E56EBL;
                        (*l_845) = l_847;
                        (*l_845) = 0x5D663CB3L;
                        l_860 = ((((l_859 = ((((((*l_845) = (*g_697)) & ((safe_rshift_func_int16_t_s_s((l_850 != (void*)0), 2)) < l_847)) >= (((safe_mod_func_uint32_t_u_u((g_31 || (!p_50)), (*g_89))) , (safe_lshift_func_int8_t_s_u((((safe_lshift_func_int8_t_s_s((-1L), g_25[4])) || p_50) & 0x29CEL), l_857))) | l_858)) & p_50) && g_839)) > (*g_89)) , l_859) < (-1L));
                    }
                    l_795 = (safe_mul_func_uint8_t_u_u((*g_554), (safe_rshift_func_uint8_t_u_s(0xD2L, 6))));
                }
                for (g_37 = 3; (g_37 >= 0); g_37 -= 1)
                {
                    unsigned short *l_871 = &g_513;
                    int l_876 = 1L;
                    int *l_880 = (void*)0;
                    char *l_881 = &l_841[7];
                    char **l_884 = (void*)0;
                    char ***l_883 = &l_884;
                    char ****l_885 = &l_883;
                    int *l_886 = &l_795;
                    (*l_886) = (safe_lshift_func_uint8_t_u_u(((*g_554) = (safe_mul_func_int16_t_s_s(((**g_691) = (((safe_mul_func_uint16_t_u_u(((*l_871) = 0UL), p_50)) || (((*l_885) = ((&g_15 == ((p_50 & (((((safe_lshift_func_uint8_t_u_s(((l_877 = ((*l_871) = (safe_rshift_func_uint8_t_u_s(l_876, 1)))) < ((safe_mul_func_int8_t_s_s(g_839, ((*l_881) = ((((*l_845) = ((*g_367) = (((void*)0 != &g_392[2]) && (*l_845)))) , (-8L)) >= p_50)))) , 0x2864L)), 1)) == l_882) < 0x290FL) & (-1L)) , p_50)) , &l_876)) , l_883)) == (void*)0)) > l_876)), l_876))), 5));
                    for (l_794 = 0; (l_794 <= 3); l_794 += 1)
                    {
                        int *l_887 = &l_794;
                        (*g_186) = &l_877;
                        (*g_186) = l_887;
                        l_888[4][2][7] = (*g_186);
                        l_846 = (((*l_881) = g_526) , (*g_186));
                    }
                    (*g_186) = &l_876;
                }
            }
            for (p_50 = 0; (p_50 <= 3); p_50 += 1)
            {
                (*g_186) = (void*)0;
                if (p_50)
                    continue;
            }
            (*l_845) = ((-8L) & (safe_sub_func_uint32_t_u_u(0UL, p_50)));
        }
        else
        {
            char l_891 = 8L;
            l_891 = 0x2E8E551FL;
            g_892[1][4] = (l_805 = l_793[1]);
        }
        for (g_526 = 0; (g_526 <= 3); g_526 += 1)
        {
            unsigned short l_918[10] = {0UL,0UL,0x068AL,7UL,0x068AL,0UL,0UL,0x068AL,7UL,0x068AL};
            int l_923 = 0xE5A96099L;
            int l_925 = 0x603CE7C2L;
            int ***l_929 = &g_186;
            int i;
            if (p_50)
                break;
            for (l_795 = 0; (l_795 <= 3); l_795 += 1)
            {
                const unsigned char * const * const **l_899 = &l_897;
                unsigned short *l_902 = &g_513;
                unsigned short *l_903[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                int *l_907 = &l_795;
                int i;
                (*g_186) = ((!(~((((*g_692) || (safe_mod_func_int8_t_s_s((((safe_rshift_func_uint16_t_u_s(65526UL, 12)) , &g_450) != ((*l_899) = l_897)), ((((*g_697) < (safe_rshift_func_uint16_t_u_u((l_805 = ((*l_902) = (p_50 , p_50))), (safe_add_func_int32_t_s_s((l_906 = (l_793[0] <= (p_50 , l_794))), l_794))))) && 0x0EL) , (-3L))))) , 4L) | 0xA5L))) , l_907);
            }
            l_925 = ((l_793[0] != (((safe_mul_func_uint16_t_u_u(p_50, (((((*g_483) > (safe_rshift_func_int8_t_s_s((l_794 , g_513), ((safe_add_func_int8_t_s_s((((*g_554) = ((*g_554) | (safe_mod_func_int8_t_s_s(((l_923 = (safe_mul_func_uint8_t_u_u(l_918[8], (((safe_rshift_func_uint16_t_u_s(p_50, (safe_add_func_uint8_t_u_u(p_50, p_50)))) <= (-4L)) >= p_50)))) & 0x9EL), g_130[0][5][1])))) || (*g_554)), 0L)) > p_50)))) , (-1L)) > 0x09436276L) ^ l_805))) > g_924[0]) , 0xE3L)) != 0x2FA5L);
            for (g_444 = 3; (g_444 >= 0); g_444 -= 1)
            {
                unsigned ** const *l_926 = &g_472;
                int ****l_930 = (void*)0;
                int ****l_931 = &l_929;
                int l_932 = 1L;
                g_934 = (l_933 = (l_932 = (((g_892[2][4] = (l_926 != &g_472)) && (l_927[5][6] != ((*l_931) = l_929))) != (*g_554))));
                for (g_110 = 0; (g_110 <= 3); g_110 += 1)
                {
                    unsigned char *l_940[1];
                    int * const l_941 = &l_925;
                    int *l_942 = &l_805;
                    int *l_948 = (void*)0;
                    int i;
                    for (i = 0; i < 1; i++)
                        l_940[i] = &l_939;
                    g_892[1][1] = (*g_89);
                    if (p_50)
                        break;
                    if ((safe_mul_func_int16_t_s_s((*g_692), ((safe_add_func_uint8_t_u_u(((*g_554) | 0x9DL), p_50)) | ((0x7EL == (g_65 = l_939)) , 0xC0818D96L)))))
                    {
                        l_942 = l_941;
                    }
                    else
                    {
                        unsigned short l_946[7][7][1] = {{{0x0563L},{0x7C22L},{0x0563L},{0x7C22L},{0x0563L},{0x7C22L},{0x0563L}},{{0x7C22L},{0x0563L},{0x7C22L},{0x0563L},{0x7C22L},{0x0563L},{0x7C22L}},{{0x0563L},{0x7C22L},{0x0563L},{0x7C22L},{0x0563L},{0x7C22L},{0x0563L}},{{0x7C22L},{0x0563L},{0x7C22L},{0x0563L},{0x7C22L},{0x0563L},{0x7C22L}},{{0x0563L},{0x7C22L},{0x0563L},{0x7C22L},{0x0563L},{0x7C22L},{0x0563L}},{{0x7C22L},{0x0563L},{0x7C22L},{0x0563L},{0x7C22L},{0x0563L},{0x7C22L}},{{0x0563L},{0x7C22L},{0x0563L},{0x7C22L},{0x0563L},{0x7C22L},{0x0563L}}};
                        int i, j, k;
                        (*g_186) = &g_892[3][4];
                        (*l_942) = ((g_943[2][1] == 0xD8L) , ((safe_lshift_func_int8_t_s_s(p_50, ((***l_929) = l_946[1][0][0]))) <= (g_947 = 0L)));
                    }
                    (*g_186) = l_948;
                }
            }
        }
    }
    (*l_928) = (*l_928);
    return l_949[2];
}







static unsigned char * func_53(unsigned char * p_54)
{
    unsigned l_55 = 0x8A3E09E1L;
    unsigned *l_56 = &l_55;
    int l_68 = 0x6C34309EL;
    char *l_787 = &g_37;
    const int l_789 = 0x7133E0E6L;
    int l_790 = 0x265CF5AEL;
    unsigned l_791 = 5UL;
    short l_792 = (-9L);
    (*g_697) = (((((l_790 = ((((((0xCF28D0D4L == 4294967286UL) > ((*l_56) = l_55)) > (g_25[5] , ((*l_787) = ((l_68 = (safe_mul_func_int8_t_s_s((((safe_sub_func_uint32_t_u_u(g_31, ((!func_61(g_64, (safe_add_func_int32_t_s_s(l_68, l_68)))) , 0x4F452F1FL))) , g_435) | l_68), 0xC5L))) , l_68)))) ^ 0x06AC85F0L) <= g_788) <= l_789)) <= l_789) , l_791) & l_791) , l_792);
    return p_54;
}







static unsigned short func_61(unsigned char * p_62, unsigned char p_63)
{
    unsigned *l_79 = (void*)0;
    int l_96 = 0x67EE9F72L;
    int *l_106 = &l_96;
    char *l_149[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    unsigned short ** const l_156 = (void*)0;
    int **l_159 = &l_106;
    char l_164 = 0x69L;
    int *l_179[6][9] = {{&g_15,&l_96,&l_96,&l_96,&l_96,&g_15,&l_96,&l_96,&l_96},{&l_96,&l_96,&g_15,&l_96,&g_15,&l_96,&l_96,&g_15,&l_96},{&l_96,&l_96,&l_96,&g_15,&g_15,&l_96,&l_96,&l_96,&g_15},{&l_96,&g_15,&g_15,&l_96,&l_96,&l_96,&g_15,&g_15,&l_96},{&l_96,&g_15,&l_96,&g_15,&l_96,&l_96,&g_15,&l_96,&g_15},{&g_15,&l_96,&l_96,&l_96,&l_96,&g_15,&l_96,&l_96,&l_96}};
    const unsigned short **l_199 = (void*)0;
    unsigned short l_348 = 0x04D3L;
    int l_361 = 0x8C5D99A7L;
    unsigned short l_484 = 65535UL;
    int *l_497 = &g_15;
    unsigned ***l_766 = (void*)0;
    const unsigned *l_771 = &g_753;
    const unsigned **l_770 = &l_771;
    const unsigned ***l_769[6];
    int i, j;
    for (i = 0; i < 6; i++)
        l_769[i] = &l_770;
    for (g_65 = (-25); (g_65 >= 37); ++g_65)
    {
        unsigned l_72 = 1UL;
        int l_81 = (-1L);
        short *l_103 = &g_25[5];
        int l_124 = 0L;
        unsigned char l_154 = 0xD5L;
        int l_170 = 0xC5626D82L;
        unsigned short *l_172 = &g_130[0][2][0];
        unsigned short **l_171 = &l_172;
        int *l_233 = &g_31;
        unsigned short l_254 = 2UL;
        short l_309 = 0L;
        int **l_330 = &g_89;
        int *l_388 = &l_124;
    }
    for (g_37 = 0; (g_37 <= 0); g_37 = safe_add_func_uint8_t_u_u(g_37, 1))
    {
        const int *l_391 = &l_96;
        const int l_411 = 0x4C78A6BFL;
        int l_445 = 0xBC510959L;
        unsigned l_463 = 0UL;
        char **l_487 = (void*)0;
        int *l_503 = &g_15;
        (*l_159) = (void*)0;
        g_392[2] = l_391;
    }
    if ((safe_lshift_func_int16_t_s_u(0x45CBL, 0)))
    {
        unsigned *l_535 = &g_263[3][0];
        int l_536 = 0x1B7BE437L;
        unsigned *** const l_538[4] = {&g_472,&g_472,&g_472,&g_472};
        int l_555[8][10][3] = {{{(-8L),0L,(-8L)},{(-1L),(-3L),0xE8FB2FC8L},{(-1L),1L,0x12EA7D0AL},{1L,0x7D56BF6BL,0xD4B706BAL},{0x6DC99BBAL,0xC6410E49L,0xB4AE4E02L},{1L,(-1L),0xA3626D24L},{(-1L),1L,(-1L)},{(-1L),0x6E9D4CE8L,5L},{(-8L),1L,1L},{0xB1EC50DBL,0xACFCA807L,0xE73CFC83L}},{{(-6L),0x0694E060L,0x5949661BL},{1L,0x3449A364L,1L},{(-5L),0L,0xEE23EC0DL},{5L,0x3449A364L,7L},{(-1L),0x0694E060L,0x52E5A0FAL},{0xB1EC50DBL,(-5L),(-1L)},{0L,0x7A50B406L,(-6L)},{0x3F42CF27L,0x29DDAC62L,0x5C303600L},{0x6DC99BBAL,0xEE23EC0DL,(-1L)},{0x5C303600L,6L,1L}},{{1L,(-1L),0x5949661BL},{(-9L),0x86EEC211L,1L},{(-1L),0L,(-1L)},{0x39C29BB0L,0x6E9D4CE8L,0x5C303600L},{(-1L),1L,(-6L)},{(-1L),0x5D7600B4L,(-1L)},{0L,1L,0x52E5A0FAL},{1L,0x29DDAC62L,7L},{1L,(-1L),0xEE23EC0DL},{0x5C303600L,0L,1L}},{{1L,0xB4AE4E02L,0x5949661BL},{1L,(-8L),0xA3626D24L},{0L,0L,0x7A50B406L},{(-1L),0x051D85E3L,0x2C2E9884L},{(-1L),1L,(-8L)},{0x39C29BB0L,0xAC51B799L,(-1L)},{(-1L),(-1L),1L},{(-9L),0x29DDAC62L,(-1L)},{1L,(-1L),1L},{0x5C303600L,0xAC51B799L,(-9L)}},{{0x6DC99BBAL,1L,0x5949661BL},{0x3F42CF27L,0x051D85E3L,0xC31E78DDL},{0L,0x6DC99BBAL,0x52E5A0FAL},{0xE8FB2FC8L,1L,1L},{0x52E5A0FAL,(-1L),0L},{0xE73CFC83L,0x051D85E3L,0xAA0128ECL},{0x5949661BL,0x52E5A0FAL,0L},{0xD4B706BAL,0x7D56BF6BL,1L},{1L,1L,0x52E5A0FAL},{(-9L),0x6E9D4CE8L,0xB0A21169L}},{{0xB4AE4E02L,1L,0xB4AE4E02L},{0x39C29BB0L,0xDB1F84ADL,1L},{1L,0x6DC99BBAL,1L},{0x90683D84L,6L,0xC31E78DDL},{0x52E5A0FAL,0x7A50B406L,(-1L)},{0x90683D84L,0x3449A364L,0xAA0128ECL},{1L,(-6L),(-5L)},{0x39C29BB0L,0x7D56BF6BL,0xA3626D24L},{0xB4AE4E02L,(-8L),(-8L)},{(-9L),(-8L),(-9L)}},{{1L,(-1L),0xB4AE4E02L},{0xD4B706BAL,0x51D61283L,1L},{0x5949661BL,0x6DC99BBAL,(-6L)},{0xE73CFC83L,0x51D61283L,1L},{0x52E5A0FAL,(-1L),0xC6410E49L},{0xE8FB2FC8L,(-8L),0xAA0128ECL},{0x6DC99BBAL,(-8L),0L},{0xB1EC50DBL,0x7D56BF6BL,(-9L)},{0x0694E060L,(-6L),1L},{(-9L),0x3449A364L,0x3F42CF27L}},{{(-1L),0x7A50B406L,0xB4AE4E02L},{(-1L),6L,0x3F42CF27L},{1L,0x6DC99BBAL,1L},{7L,0xDB1F84ADL,(-9L)},{1L,0L,1L},{1L,0x29DDAC62L,1L},{1L,0x6DC99BBAL,(-1L)},{0x2C2E9884L,0x86EEC211L,0xB1EC50DBL},{(-6L),1L,0x12EA7D0AL},{5L,(-1L),0x90683D84L}}};
        int l_575 = (-1L);
        int *l_577 = &l_96;
        short l_578 = 0xC2FFL;
        int i, j, k;
        if ((!((g_534 <= 0xC541L) >= (l_536 = (((*g_472) = (*g_472)) != l_535)))))
        {
            const unsigned * const **l_537 = (void*)0;
            int l_539[4][3] = {{(-4L),(-4L),(-4L)},{0x59BA196AL,1L,0x59BA196AL},{(-4L),(-4L),(-4L)},{0x59BA196AL,1L,0x59BA196AL}};
            unsigned char *l_549[7] = {&g_375,&g_110,&g_110,&g_375,&g_110,&g_110,&g_375};
            const char l_552 = 0x8FL;
            int i, j;
            (**g_186) = ((l_536 | (((p_63 , ((l_537 == l_538[0]) <= 0UL)) ^ p_63) != (g_37 = l_539[2][1]))) & (((g_542 = ((safe_mod_func_uint16_t_u_u((((*p_62) != (-3L)) > (-10L)), p_63)) , g_444)) , l_536) != (*g_64)));
            for (g_110 = (-4); (g_110 < 52); g_110 = safe_add_func_int16_t_s_s(g_110, 6))
            {
                int **l_556 = &g_367;
                int l_561 = 0L;
                const int **l_567 = &g_483;
                const int ***l_566 = &l_567;
                unsigned l_571 = 0x35155014L;
            }
        }
        else
        {
            unsigned **l_572 = &l_79;
            int *l_576[9] = {(void*)0,&l_536,(void*)0,&l_536,(void*)0,&l_536,(void*)0,&l_536,(void*)0};
            int i;
            l_572 = &g_473;
            (*l_159) = ((safe_mod_func_uint16_t_u_u((p_63 == p_63), l_575)) , ((*g_186) = (*l_159)));
            l_577 = l_576[2];
            (*l_159) = (*l_159);
        }
        return l_578;
    }
    else
    {
        const char l_586 = 1L;
        unsigned l_588 = 0x5CFEA7BCL;
        const int *l_593 = (void*)0;
        int l_633[2];
        int *l_666 = &g_15;
        unsigned char l_693 = 5UL;
        int i;
        for (i = 0; i < 2; i++)
            l_633[i] = 0x7A60ED02L;
        for (l_96 = 11; (l_96 >= (-9)); --l_96)
        {
            int ***l_587[8][9][3] = {{{&l_159,(void*)0,&l_159},{&l_159,&l_159,(void*)0},{&l_159,&g_186,&g_186},{&l_159,&l_159,&l_159},{&g_186,&g_186,(void*)0},{(void*)0,&g_186,&g_186},{&g_186,&g_186,&l_159},{&l_159,&g_186,(void*)0},{(void*)0,&g_186,&l_159}},{{&l_159,&g_186,&g_186},{&l_159,&l_159,(void*)0},{&l_159,&g_186,&l_159},{&g_186,&l_159,&g_186},{(void*)0,(void*)0,&l_159},{(void*)0,&l_159,&l_159},{&l_159,&g_186,&g_186},{(void*)0,&l_159,&g_186},{&g_186,&g_186,&l_159}},{{&l_159,(void*)0,&l_159},{(void*)0,&g_186,&g_186},{&g_186,&g_186,&l_159},{&l_159,&l_159,&l_159},{&l_159,&g_186,&g_186},{&l_159,&l_159,&l_159},{&l_159,&l_159,&l_159},{(void*)0,&l_159,&l_159},{(void*)0,&l_159,&g_186}},{{(void*)0,&g_186,&l_159},{&l_159,&g_186,&l_159},{&g_186,&g_186,&g_186},{&l_159,&l_159,&l_159},{&g_186,&l_159,&l_159},{&g_186,(void*)0,&g_186},{&l_159,&g_186,&g_186},{&g_186,&l_159,(void*)0},{&g_186,&g_186,&g_186}},{{&l_159,(void*)0,&g_186},{&g_186,(void*)0,&l_159},{&l_159,&g_186,&l_159},{&l_159,&g_186,(void*)0},{&g_186,&l_159,&g_186},{&l_159,&g_186,&g_186},{&g_186,(void*)0,&l_159},{&g_186,&l_159,&g_186},{&l_159,&l_159,&l_159}},{{&g_186,&g_186,&l_159},{&l_159,(void*)0,&g_186},{&l_159,&l_159,&g_186},{&g_186,&g_186,&l_159},{(void*)0,&l_159,&l_159},{&l_159,&g_186,(void*)0},{(void*)0,&l_159,&l_159},{(void*)0,&g_186,(void*)0},{&l_159,&g_186,&l_159}},{{&l_159,&l_159,&l_159},{&g_186,&l_159,&g_186},{&g_186,&g_186,&g_186},{&l_159,&l_159,&l_159},{&l_159,&g_186,&l_159},{&l_159,&g_186,&l_159},{&l_159,&g_186,&g_186},{&l_159,&g_186,&l_159},{&g_186,&g_186,&g_186}},{{&g_186,&l_159,&g_186},{&l_159,&g_186,(void*)0},{&l_159,&l_159,(void*)0},{(void*)0,&l_159,&g_186},{&g_186,&g_186,&l_159},{&g_186,&g_186,&l_159},{&g_186,&l_159,&g_186},{&l_159,&g_186,&g_186},{(void*)0,&l_159,&l_159}}};
            short *l_613 = &g_444;
            short **l_612 = &l_613;
            const char l_620 = 4L;
            unsigned l_631 = 0UL;
            int i, j, k;
            (*l_159) = (*g_186);
        }
        (*l_666) = (((&l_666 == ((((void*)0 != g_691) , g_263[3][6]) , (void*)0)) || ((l_693 = p_63) || p_63)) > ((*g_89) > (-1L)));
    }
    for (g_110 = 0; (g_110 == 59); ++g_110)
    {
        int *l_696 = &g_15;
        unsigned short l_747[4];
        const unsigned *l_752 = &g_753;
        int i;
        for (i = 0; i < 4; i++)
            l_747[i] = 0xC0A6L;
        for (g_375 = 0; (g_375 <= 0); g_375 += 1)
        {
            (*g_186) = l_696;
            for (p_63 = 0; (p_63 <= 0); p_63 += 1)
            {
                for (g_542 = 0; (g_542 >= 0); g_542 -= 1)
                {
                    (*g_186) = g_697;
                }
            }
            for (g_526 = 0; (g_526 <= 0); g_526 += 1)
            {
                int i, j, k;
                (*g_697) = g_130[g_375][g_375][(g_375 + 1)];
                for (g_534 = 0; (g_534 <= 0); g_534 += 1)
                {
                    int *l_698 = &g_15;
                    (*l_159) = l_698;
                }
            }
        }
        l_696 = (*g_186);
        if ((*l_696))
        {
            l_696 = l_696;
        }
        else
        {
            for (l_96 = 0; (l_96 >= (-30)); l_96--)
            {
                unsigned l_701 = 1UL;
                unsigned **l_715[2][4][2] = {{{&l_79,(void*)0},{&g_473,&g_473},{&g_473,(void*)0},{&l_79,&l_79}},{{(void*)0,&l_79},{&l_79,(void*)0},{&g_473,&g_473},{&g_473,(void*)0}}};
                int l_722 = (-5L);
                int i, j, k;
                l_701 = p_63;
                for (g_37 = 0; (g_37 == (-28)); g_37 = safe_sub_func_uint16_t_u_u(g_37, 4))
                {
                    unsigned l_712 = 4294967295UL;
                    int l_725 = 0x286A31A9L;
                }
                if ((*g_483))
                    continue;
            }
            (*l_159) = (*l_159);
            for (l_361 = 0; (l_361 >= 8); l_361 = safe_add_func_uint32_t_u_u(l_361, 9))
            {
                unsigned char l_730 = 0xC5L;
                unsigned char l_731[4];
                int i;
                for (i = 0; i < 4; i++)
                    l_731[i] = 0x5CL;
                for (l_484 = 0; (l_484 <= 42); l_484 = safe_add_func_uint16_t_u_u(l_484, 1))
                {
                    (*g_186) = (void*)0;
                    if (l_730)
                        continue;
                    if ((*l_696))
                        continue;
                    if ((*g_697))
                        break;
                }
                (*l_159) = (*g_186);
                (*g_186) = l_696;
                return l_731[1];
            }
        }
        for (l_361 = 1; (l_361 <= 7); l_361 += 1)
        {
            int l_741[8] = {3L,3L,5L,3L,3L,5L,3L,3L};
            int l_774 = 1L;
            int l_784[7][4][9] = {{{0xB68F2185L,1L,0x77BCBD6BL,0x77BCBD6BL,1L,0xB68F2185L,0x0C9EAFD1L,0xD7686087L,1L},{4L,1L,0xB7D64EE4L,0x5B2E998CL,0x10831BE2L,0L,0x4183FE9AL,(-1L),0x8A48C7E8L},{0xB68F2185L,0xD7686087L,1L,0x77BCBD6BL,0xD7686087L,0xD52A7AB2L,0x0C9EAFD1L,0xE7D89DB2L,0x0C9EAFD1L},{4L,(-1L),0x014DEB2CL,0x5B2E998CL,0x7A613940L,0L,0x4183FE9AL,0x91482989L,0x9931891DL}},{{0xB68F2185L,0xE7D89DB2L,0L,0x77BCBD6BL,0xE7D89DB2L,1L,0x0C9EAFD1L,1L,0x624811D9L},{4L,0x91482989L,1L,0x5B2E998CL,0xD3AC8D53L,0L,0x4183FE9AL,1L,0x4183FE9AL},{0xB68F2185L,1L,0x77BCBD6BL,0x77BCBD6BL,1L,0xB68F2185L,0x0C9EAFD1L,0xD7686087L,1L},{4L,1L,0xB7D64EE4L,0x5B2E998CL,0x10831BE2L,0L,0x4183FE9AL,(-1L),0x8A48C7E8L}},{{0xB68F2185L,0xD7686087L,1L,0x77BCBD6BL,0xD7686087L,0xD52A7AB2L,0x0C9EAFD1L,0xE7D89DB2L,0x0C9EAFD1L},{4L,(-1L),0x014DEB2CL,0x5B2E998CL,0x7A613940L,0L,0x4183FE9AL,0x91482989L,0x9931891DL},{0xB68F2185L,0xE7D89DB2L,0L,0x77BCBD6BL,0xE7D89DB2L,0xA42F3179L,0x1FE6F172L,1L,(-1L)},{0L,0L,0x5BB2A744L,0xD1FAE481L,1L,0x3A4B8419L,9L,0L,9L}},{{5L,1L,0xDBD9A456L,0xDBD9A456L,1L,5L,0x1FE6F172L,0xD52A7AB2L,0L},{0L,0L,0xF7E7646BL,0xD1FAE481L,4L,0xF115DAACL,9L,0L,1L},{5L,0xD52A7AB2L,(-4L),0xDBD9A456L,0xD52A7AB2L,0x59ED372DL,0x1FE6F172L,0xB68F2185L,0x1FE6F172L},{0L,0L,(-4L),0xD1FAE481L,0L,(-1L),9L,0L,(-1L)}},{{5L,0xB68F2185L,(-1L),0xDBD9A456L,0xB68F2185L,0xA42F3179L,0x1FE6F172L,1L,(-1L)},{0L,0L,0x5BB2A744L,0xD1FAE481L,1L,0x3A4B8419L,9L,0L,9L},{5L,1L,0xDBD9A456L,0xDBD9A456L,1L,5L,0x1FE6F172L,0xD52A7AB2L,0L},{0L,0L,0xF7E7646BL,0xD1FAE481L,4L,0xF115DAACL,9L,0L,1L}},{{5L,0xD52A7AB2L,(-4L),0xDBD9A456L,0xD52A7AB2L,0x59ED372DL,0x1FE6F172L,0xB68F2185L,0x1FE6F172L},{0L,0L,1L,0x12135EABL,0xB7D64EE4L,0xD1FAE481L,0L,1L,0x1ABBFE67L},{0xDBD9A456L,0x77BCBD6BL,0x1FE6F172L,(-1L),0x77BCBD6BL,(-1L),5L,0L,0x59ED372DL},{(-4L),1L,(-1L),0x12135EABL,1L,0L,0L,0x5B2E998CL,0L}},{{0xDBD9A456L,0L,(-1L),(-1L),0L,0xDBD9A456L,5L,1L,0xA42F3179L},{(-4L),0x5B2E998CL,9L,0x12135EABL,0x014DEB2CL,0xD0511A0AL,0L,3L,0xE41E779EL},{0xDBD9A456L,1L,0L,(-1L),1L,(-4L),5L,0x77BCBD6BL,5L},{(-4L),3L,1L,0x12135EABL,0xB7D64EE4L,0xD1FAE481L,0L,1L,0x1ABBFE67L}}};
            int i, j, k;
            if (((*g_697) = 1L))
            {
                unsigned char l_740 = 1UL;
                int l_744 = 0xB50102A8L;
                l_744 = (((safe_rshift_func_int8_t_s_u(((safe_add_func_int16_t_s_s((safe_mod_func_uint32_t_u_u(p_63, ((safe_mod_func_int32_t_s_s(((*l_696) = p_63), (l_741[0] = l_740))) && ((*p_62) != (safe_add_func_int16_t_s_s((*l_696), l_741[3])))))), l_740)) || (*l_696)), 2)) & p_63) >= (*p_62));
                return p_63;
            }
            else
            {
                short ***l_745 = &g_691;
                (*l_745) = &g_692;
            }
        }
    }
    return (*l_497);
}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_15, "g_15", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_25[i], "g_25[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_31, "g_31", print_hash_value);
    transparent_crc(g_37, "g_37", print_hash_value);
    transparent_crc(g_47, "g_47", print_hash_value);
    transparent_crc(g_65, "g_65", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(g_86[i][j], "g_86[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_110, "g_110", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_130[i][j][k], "g_130[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(g_263[i][j], "g_263[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_375, "g_375", print_hash_value);
    transparent_crc(g_381, "g_381", print_hash_value);
    transparent_crc(g_435, "g_435", print_hash_value);
    transparent_crc(g_436, "g_436", print_hash_value);
    transparent_crc(g_444, "g_444", print_hash_value);
    transparent_crc(g_513, "g_513", print_hash_value);
    transparent_crc(g_526, "g_526", print_hash_value);
    transparent_crc(g_534, "g_534", print_hash_value);
    transparent_crc(g_542, "g_542", print_hash_value);
    transparent_crc(g_753, "g_753", print_hash_value);
    transparent_crc(g_788, "g_788", print_hash_value);
    transparent_crc(g_839, "g_839", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_892[i][j], "g_892[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_924[i], "g_924[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_934, "g_934", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(g_943[i][j], "g_943[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_947, "g_947", print_hash_value);
    transparent_crc(g_974, "g_974", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_986[i][j][k], "g_986[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_987, "g_987", print_hash_value);
    transparent_crc(g_988, "g_988", print_hash_value);
    transparent_crc(g_989, "g_989", print_hash_value);
    transparent_crc(g_990, "g_990", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_991[i], "g_991[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_992, "g_992", print_hash_value);
    transparent_crc(g_993, "g_993", print_hash_value);
    transparent_crc(g_994, "g_994", print_hash_value);
    transparent_crc(g_995, "g_995", print_hash_value);
    transparent_crc(g_996, "g_996", print_hash_value);
    transparent_crc(g_997, "g_997", print_hash_value);
    transparent_crc(g_998, "g_998", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_999[i], "g_999[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_1000[i], "g_1000[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1001, "g_1001", print_hash_value);
    transparent_crc(g_1002, "g_1002", print_hash_value);
    transparent_crc(g_1003, "g_1003", print_hash_value);
    transparent_crc(g_1004, "g_1004", print_hash_value);
    transparent_crc(g_1005, "g_1005", print_hash_value);
    transparent_crc(g_1006, "g_1006", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_1007[i], "g_1007[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_1008[i][j][k], "g_1008[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_1009[i][j][k], "g_1009[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_1010, "g_1010", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_1011[i][j][k], "g_1011[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_1012[i][j][k], "g_1012[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_1013, "g_1013", print_hash_value);
    transparent_crc(g_1014, "g_1014", print_hash_value);
    transparent_crc(g_1015, "g_1015", print_hash_value);
    transparent_crc(g_1016, "g_1016", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(g_1017[i][j], "g_1017[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_1018, "g_1018", print_hash_value);
    transparent_crc(g_1019, "g_1019", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_1020[i], "g_1020[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1021, "g_1021", print_hash_value);
    transparent_crc(g_1022, "g_1022", print_hash_value);
    transparent_crc(g_1023, "g_1023", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_1024[i], "g_1024[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1025, "g_1025", print_hash_value);
    transparent_crc(g_1026, "g_1026", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_1027[i], "g_1027[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1028, "g_1028", print_hash_value);
    transparent_crc(g_1029, "g_1029", print_hash_value);
    transparent_crc(g_1030, "g_1030", print_hash_value);
    transparent_crc(g_1031, "g_1031", print_hash_value);
    transparent_crc(g_1032, "g_1032", print_hash_value);
    transparent_crc(g_1033, "g_1033", print_hash_value);
    transparent_crc(g_1034, "g_1034", print_hash_value);
    transparent_crc(g_1035, "g_1035", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_1036[i], "g_1036[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1037, "g_1037", print_hash_value);
    transparent_crc(g_1038, "g_1038", print_hash_value);
    transparent_crc(g_1039, "g_1039", print_hash_value);
    transparent_crc(g_1040, "g_1040", print_hash_value);
    transparent_crc(g_1041, "g_1041", print_hash_value);
    transparent_crc(g_1042, "g_1042", print_hash_value);
    transparent_crc(g_1043, "g_1043", print_hash_value);
    transparent_crc(g_1044, "g_1044", print_hash_value);
    transparent_crc(g_1045, "g_1045", print_hash_value);
    transparent_crc(g_1046, "g_1046", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_1047[i], "g_1047[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1048, "g_1048", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_1049[i][j], "g_1049[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_1050, "g_1050", print_hash_value);
    transparent_crc(g_1051, "g_1051", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_1052[i][j][k], "g_1052[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_1053[i], "g_1053[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_1054[i][j], "g_1054[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_1055, "g_1055", print_hash_value);
    transparent_crc(g_1056, "g_1056", print_hash_value);
    transparent_crc(g_1057, "g_1057", print_hash_value);
    transparent_crc(g_1163, "g_1163", print_hash_value);
    transparent_crc(g_1286, "g_1286", print_hash_value);
    transparent_crc(g_1377, "g_1377", print_hash_value);
    transparent_crc(g_1440, "g_1440", print_hash_value);
    transparent_crc(g_1518, "g_1518", print_hash_value);
    transparent_crc(g_1539, "g_1539", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_1575[i], "g_1575[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1581, "g_1581", print_hash_value);
    transparent_crc(g_1700, "g_1700", print_hash_value);
    transparent_crc(g_1740, "g_1740", print_hash_value);
    transparent_crc(g_1856, "g_1856", print_hash_value);
    transparent_crc(g_1867, "g_1867", print_hash_value);
    transparent_crc(g_1870, "g_1870", print_hash_value);
    transparent_crc(g_1929, "g_1929", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
