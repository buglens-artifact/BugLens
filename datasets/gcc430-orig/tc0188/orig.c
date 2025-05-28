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



static unsigned g_2[9][8][3] = {{{0xEC71CB27L,4UL,4294967289UL},{4294967295UL,0x88E00F68L,3UL},{9UL,0x08AF066BL,4294967295UL},{0x4BB489F7L,0x4BB489F7L,0xEE4E9120L},{4294967291UL,0UL,9UL},{4294967293UL,3UL,0x0EB44952L},{1UL,9UL,0x9B389519L},{0xDBECCCE1L,4294967293UL,0x0EB44952L}},{{0x08AF066BL,0x7928FBC7L,9UL},{0x5BA5616DL,4294967295UL,0xEE4E9120L},{0UL,0x8877E069L,4294967295UL},{0x0EB44952L,0x71F09A2BL,3UL},{4294967294UL,4294967289UL,4294967289UL},{4294967286UL,0x0547507AL,4294967295UL},{4294967289UL,0x9D2E819DL,4294967292UL},{0x88E00F68L,0xC37FC054L,0xD37AD435L}},{{0x3F9E923EL,4294967289UL,0x9B389519L},{0UL,0xC37FC054L,0xDBECCCE1L},{4294967294UL,4294967292UL,4UL},{0x4BB489F7L,0x71F09A2BL,4294967295UL},{1UL,0UL,0x9CA3EAA3L},{4294967295UL,4294967286UL,0xEE4E9120L},{4294967292UL,1UL,4294967292UL},{0x388A0193L,0UL,0x4BB489F7L}},{{4294967291UL,0x08AF066BL,0x1BF07968L},{3UL,0x0EB44952L,0x0547507AL},{0x9D2E819DL,0x68906353L,0x1FBF6859L},{3UL,4294967295UL,0xA7BC6C89L},{4294967291UL,4294967292UL,4294967289UL},{0x388A0193L,7UL,0x31E468A0L},{4294967292UL,0x9B389519L,0xE6E3245FL},{4294967295UL,0x0547507AL,4294967286UL}},{{1UL,1UL,0x41A62A96L},{0x4BB489F7L,0x1CED8F6EL,4294967295UL},{4294967294UL,0xE6E3245FL,0xEC71CB27L},{0UL,4294967295UL,0x71F09A2BL},{0x3F9E923EL,4294967294UL,0xEC71CB27L},{0x0547507AL,0x88E00F68L,4294967295UL},{0UL,0x8877E069L,0x41A62A96L},{0xF9BEAB1DL,4294967293UL,4294967286UL}},{{0xEC71CB27L,0UL,0xE6E3245FL},{0x4F147909L,0x31E468A0L,0x31E468A0L},{0UL,4294967295UL,4294967289UL},{0x31E468A0L,4294967295UL,0xA7BC6C89L},{0x9B389519L,0x3F9E923EL,0x1FBF6859L},{0xC37FC054L,0x5BA5616DL,0x0547507AL},{0UL,0x3F9E923EL,0x1BF07968L},{0xEE4E9120L,0xF9BEAB1DL,0x31E468A0L}},{{0UL,0x9D2E819DL,0UL},{0xD37AD435L,7UL,0x4F147909L},{4294967291UL,4294967292UL,0xEC71CB27L},{0xF9BEAB1DL,0xA7BC6C89L,0xF9BEAB1DL},{0xE6E3245FL,4294967292UL,0UL},{0x5BA5616DL,0xDBECCCE1L,0x0547507AL},{9UL,0x9CA3EAA3L,0x3F9E923EL},{4294967286UL,1UL,0UL}},{{9UL,0x68906353L,4294967294UL},{0x5BA5616DL,4294967293UL,0x4BB489F7L},{0xE6E3245FL,0x1FBF6859L,1UL},{0xF9BEAB1DL,0xC37FC054L,4294967295UL},{4294967291UL,0x3F9E923EL,4294967292UL},{0xD37AD435L,0xD37AD435L,0x388A0193L},{0UL,1UL,4294967291UL},{0xEE4E9120L,4294967295UL,3UL}},{{0x7928FBC7L,4294967291UL,0x9D2E819DL},{0x71F09A2BL,0xEE4E9120L,3UL},{0x3F9E923EL,0x1BF07968L,4294967291UL},{7UL,0x1CED8F6EL,0x388A0193L},{0x8877E069L,0x29989D22L,4294967292UL},{3UL,4294967295UL,4294967295UL},{0x41A62A96L,1UL,1UL},{0UL,4294967295UL,0x4BB489F7L}}};
static int g_3 = 0xF3C88FEDL;
static char g_13 = 1L;
static int g_15 = 0x6D4C01E0L;
static char g_65 = 0x81L;
static char *g_64[7][3][7] = {{{&g_65,&g_65,&g_65,(void*)0,(void*)0,&g_65,&g_65},{&g_65,&g_65,&g_65,&g_65,&g_65,&g_65,(void*)0},{&g_65,&g_65,&g_65,&g_65,&g_65,&g_65,(void*)0}},{{&g_65,&g_65,&g_65,&g_65,&g_65,&g_65,&g_65},{&g_65,&g_65,(void*)0,&g_65,&g_65,&g_65,&g_65},{&g_65,&g_65,&g_65,&g_65,&g_65,&g_65,&g_65}},{{&g_65,&g_65,&g_65,&g_65,&g_65,&g_65,&g_65},{&g_65,&g_65,&g_65,&g_65,&g_65,(void*)0,&g_65},{&g_65,&g_65,&g_65,&g_65,&g_65,&g_65,&g_65}},{{&g_65,&g_65,&g_65,&g_65,&g_65,&g_65,&g_65},{&g_65,&g_65,&g_65,&g_65,&g_65,&g_65,&g_65},{&g_65,&g_65,&g_65,&g_65,&g_65,(void*)0,&g_65}},{{&g_65,&g_65,&g_65,&g_65,&g_65,&g_65,&g_65},{&g_65,&g_65,(void*)0,(void*)0,&g_65,&g_65,&g_65},{&g_65,&g_65,&g_65,&g_65,&g_65,&g_65,&g_65}},{{&g_65,&g_65,&g_65,&g_65,&g_65,&g_65,&g_65},{&g_65,&g_65,&g_65,&g_65,&g_65,&g_65,&g_65},{&g_65,&g_65,&g_65,&g_65,&g_65,&g_65,&g_65}},{{&g_65,&g_65,&g_65,&g_65,&g_65,(void*)0,&g_65},{&g_65,(void*)0,(void*)0,&g_65,&g_65,&g_65,&g_65},{&g_65,&g_65,&g_65,&g_65,(void*)0,&g_65,&g_65}}};
static int *g_68 = &g_3;
static int **g_67 = &g_68;
static unsigned short g_71[6][3][1] = {{{0x4DAAL},{0x3708L},{3UL}},{{3UL},{3UL},{3UL}},{{0x3708L},{0x4DAAL},{0x3708L}},{{3UL},{3UL},{3UL}},{{3UL},{0x3708L},{0x4DAAL}},{{0x3708L},{3UL},{3UL}}};
static short g_73 = 5L;
static int g_85 = 0xCB2CAB94L;
static char g_88 = 0x84L;
static unsigned char g_89 = 2UL;
static int *g_92 = &g_15;
static unsigned short g_124 = 0UL;
static short *g_141 = &g_73;
static short **g_140[3][3][6] = {{{&g_141,&g_141,&g_141,&g_141,(void*)0,&g_141},{&g_141,&g_141,&g_141,&g_141,&g_141,&g_141},{&g_141,&g_141,&g_141,&g_141,&g_141,&g_141}},{{&g_141,(void*)0,(void*)0,&g_141,&g_141,&g_141},{&g_141,&g_141,&g_141,&g_141,&g_141,&g_141},{&g_141,&g_141,&g_141,&g_141,&g_141,&g_141}},{{&g_141,&g_141,&g_141,&g_141,&g_141,&g_141},{(void*)0,(void*)0,&g_141,&g_141,&g_141,&g_141},{(void*)0,&g_141,&g_141,&g_141,&g_141,&g_141}}};
static int g_153[5][4][6] = {{{4L,0x6B69ECCDL,4L,4L,0x6B69ECCDL,4L},{4L,0x6B69ECCDL,4L,4L,0x6B69ECCDL,4L},{4L,0x6B69ECCDL,4L,4L,0x6B69ECCDL,4L},{4L,0x6B69ECCDL,4L,4L,0x6B69ECCDL,4L}},{{4L,0x6B69ECCDL,4L,4L,0x6B69ECCDL,4L},{4L,0x6B69ECCDL,4L,4L,0x6B69ECCDL,4L},{4L,0x6B69ECCDL,4L,4L,0x6B69ECCDL,4L},{4L,0x6B69ECCDL,4L,4L,0x6B69ECCDL,4L}},{{4L,0x6B69ECCDL,4L,4L,0x6B69ECCDL,4L},{4L,0x6B69ECCDL,4L,4L,0x6B69ECCDL,4L},{4L,0x6B69ECCDL,4L,4L,0x6B69ECCDL,4L},{4L,0x6B69ECCDL,4L,4L,0x6B69ECCDL,4L}},{{4L,0x6B69ECCDL,4L,4L,0x6B69ECCDL,4L},{4L,0x6B69ECCDL,4L,4L,0x6B69ECCDL,4L},{4L,0x6B69ECCDL,4L,4L,0x6B69ECCDL,4L},{4L,0x6B69ECCDL,4L,4L,0x6B69ECCDL,4L}},{{4L,0x6B69ECCDL,4L,4L,0x6B69ECCDL,4L},{4L,0x6B69ECCDL,4L,4L,0x6B69ECCDL,4L},{4L,0x6B69ECCDL,4L,4L,0x6B69ECCDL,4L},{4L,0x6B69ECCDL,4L,4L,0x6B69ECCDL,4L}}};
static const char *g_173 = (void*)0;
static const char **g_172 = &g_173;
static char g_222 = (-7L);
static int g_257 = 8L;
static unsigned char *g_263[2] = {&g_89,&g_89};
static unsigned char *g_266 = (void*)0;
static unsigned char *g_267 = &g_89;
static short g_274 = 1L;
static int g_275 = 6L;
static char g_277 = (-5L);
static char g_278 = 0xA3L;
static unsigned g_279 = 0x866C2582L;
static short *g_294[4][5][8] = {{{(void*)0,&g_274,&g_274,&g_73,(void*)0,&g_274,&g_73,(void*)0},{&g_274,&g_274,&g_274,&g_73,&g_73,(void*)0,&g_73,&g_274},{&g_274,&g_73,&g_274,&g_73,&g_73,&g_274,&g_73,&g_73},{(void*)0,&g_73,&g_274,&g_274,&g_73,&g_73,&g_73,&g_274},{&g_274,&g_274,(void*)0,&g_73,(void*)0,&g_274,&g_274,&g_274}},{{(void*)0,&g_274,&g_274,&g_73,&g_274,&g_274,&g_274,&g_73},{&g_274,&g_73,&g_274,&g_274,&g_274,(void*)0,&g_73,&g_73},{(void*)0,&g_73,&g_73,&g_73,(void*)0,&g_274,&g_73,&g_73},{(void*)0,&g_274,&g_73,&g_73,&g_274,&g_274,&g_274,(void*)0},{&g_73,&g_274,&g_73,&g_73,(void*)0,(void*)0,&g_73,&g_73}},{{&g_274,&g_274,&g_73,&g_73,&g_73,&g_73,&g_274,&g_274},{&g_274,&g_73,&g_73,(void*)0,&g_73,&g_73,&g_274,&g_274},{&g_73,&g_274,&g_274,&g_73,&g_274,&g_274,&g_274,&g_73},{&g_274,&g_73,&g_73,&g_73,(void*)0,&g_274,&g_274,(void*)0},{&g_73,&g_73,&g_274,&g_73,&g_274,&g_73,&g_73,&g_73}},{{&g_73,&g_274,&g_73,&g_274,&g_73,(void*)0,&g_274,&g_274},{&g_274,&g_274,&g_73,&g_274,&g_274,&g_274,&g_73,&g_274},{&g_73,(void*)0,&g_73,&g_73,&g_274,&g_73,&g_274,&g_274},{&g_274,&g_73,&g_73,&g_274,(void*)0,&g_73,&g_73,&g_274},{&g_274,&g_274,&g_274,&g_73,&g_274,&g_73,&g_73,&g_274}}};
static short ** const g_293 = &g_294[0][2][3];
static short ** const *g_292 = &g_293;
static unsigned g_318 = 0xA4792FF8L;
static char g_354 = 0x84L;
static int g_365 = 0x1AB6FB1EL;
static unsigned char g_366[3] = {2UL,2UL,2UL};
static unsigned char g_374[8] = {0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL};
static const unsigned short g_381 = 0xDEF9L;
static const unsigned short *g_380[9][7][4] = {{{(void*)0,&g_381,&g_381,(void*)0},{&g_381,(void*)0,&g_381,&g_381},{&g_381,&g_381,&g_381,&g_381},{&g_381,(void*)0,&g_381,&g_381},{&g_381,&g_381,&g_381,&g_381},{&g_381,&g_381,&g_381,&g_381},{&g_381,&g_381,&g_381,&g_381}},{{(void*)0,&g_381,&g_381,&g_381},{&g_381,&g_381,&g_381,&g_381},{&g_381,&g_381,&g_381,&g_381},{&g_381,&g_381,(void*)0,&g_381},{&g_381,&g_381,(void*)0,&g_381},{&g_381,(void*)0,&g_381,&g_381},{&g_381,&g_381,&g_381,(void*)0}},{{&g_381,&g_381,&g_381,&g_381},{&g_381,&g_381,(void*)0,&g_381},{&g_381,&g_381,(void*)0,&g_381},{(void*)0,&g_381,&g_381,&g_381},{&g_381,&g_381,&g_381,&g_381},{&g_381,&g_381,&g_381,&g_381},{&g_381,&g_381,&g_381,&g_381}},{{&g_381,(void*)0,&g_381,&g_381},{&g_381,(void*)0,(void*)0,&g_381},{&g_381,&g_381,&g_381,(void*)0},{(void*)0,&g_381,&g_381,&g_381},{(void*)0,&g_381,&g_381,(void*)0},{(void*)0,&g_381,&g_381,&g_381},{&g_381,&g_381,&g_381,&g_381}},{{&g_381,&g_381,&g_381,&g_381},{&g_381,&g_381,&g_381,&g_381},{&g_381,&g_381,&g_381,&g_381},{&g_381,&g_381,&g_381,&g_381},{&g_381,(void*)0,&g_381,&g_381},{&g_381,(void*)0,&g_381,(void*)0},{(void*)0,&g_381,&g_381,&g_381}},{{(void*)0,(void*)0,&g_381,&g_381},{&g_381,&g_381,&g_381,(void*)0},{&g_381,&g_381,&g_381,&g_381},{(void*)0,(void*)0,&g_381,&g_381},{(void*)0,&g_381,&g_381,&g_381},{&g_381,&g_381,&g_381,&g_381},{&g_381,&g_381,&g_381,&g_381}},{{&g_381,&g_381,&g_381,&g_381},{&g_381,&g_381,&g_381,&g_381},{&g_381,&g_381,&g_381,&g_381},{&g_381,(void*)0,&g_381,&g_381},{&g_381,&g_381,&g_381,&g_381},{&g_381,&g_381,&g_381,&g_381},{&g_381,&g_381,(void*)0,&g_381}},{{&g_381,(void*)0,&g_381,&g_381},{&g_381,(void*)0,&g_381,(void*)0},{&g_381,&g_381,&g_381,&g_381},{&g_381,&g_381,&g_381,&g_381},{&g_381,&g_381,&g_381,&g_381},{&g_381,(void*)0,&g_381,&g_381},{&g_381,&g_381,&g_381,&g_381}},{{&g_381,&g_381,&g_381,&g_381},{&g_381,(void*)0,&g_381,&g_381},{(void*)0,&g_381,&g_381,&g_381},{&g_381,&g_381,(void*)0,&g_381},{&g_381,&g_381,(void*)0,(void*)0},{&g_381,(void*)0,&g_381,&g_381},{&g_381,(void*)0,&g_381,&g_381}}};
static unsigned char g_411 = 0x25L;
static const char g_440 = 0L;
static unsigned char g_451[6] = {0x97L,0x97L,0x97L,0x97L,0x97L,0x97L};
static unsigned char g_475 = 2UL;
static short g_514 = (-1L);
static int g_515[3] = {1L,1L,1L};
static unsigned g_584 = 0xCCD23C4DL;
static unsigned short g_593[10][6][4] = {{{1UL,0x7D93L,0x9A7AL,65527UL},{0x7D93L,0x2BDEL,1UL,0x2942L},{6UL,0x0BE3L,65534UL,3UL},{0x2BDEL,65535UL,65535UL,0x0BE3L},{65527UL,0UL,0UL,6UL},{0x9A7AL,0x7D93L,1UL,65534UL}},{{0x9A7AL,0x855DL,0UL,0xB825L},{65527UL,65534UL,65535UL,65526UL},{0x2BDEL,0x9A7AL,0x9A7AL,0x2BDEL},{65526UL,65535UL,65534UL,65527UL},{0xB825L,0UL,0x855DL,0x9A7AL},{65534UL,1UL,0x7D93L,0x9A7AL}},{{6UL,0UL,0UL,65527UL},{0x0BE3L,65535UL,65535UL,0x2BDEL},{3UL,0x9A7AL,3UL,65526UL},{0xEB69L,65534UL,0xE616L,0xB825L},{65535UL,0x855DL,0xB825L,65534UL},{0UL,0x7D93L,0xB825L,6UL}},{{65535UL,0UL,0xE616L,0x0BE3L},{0xEB69L,65535UL,3UL,3UL},{3UL,3UL,65535UL,0xEB69L},{0x0BE3L,0xE616L,0UL,65535UL},{6UL,0xB825L,0x7D93L,0UL},{65534UL,0xB825L,0x855DL,65535UL}},{{0xB825L,0xE616L,65534UL,0xEB69L},{65526UL,3UL,0x9A7AL,3UL},{0x2BDEL,65535UL,65534UL,0xE616L},{1UL,0x2BDEL,0x7D93L,0x2F27L},{65526UL,0x855DL,3UL,6UL},{65526UL,0x2942L,0x7D93L,65535UL}},{{1UL,6UL,65534UL,1UL},{65535UL,65526UL,65526UL,65535UL},{1UL,65534UL,6UL,1UL},{65535UL,0x7D93L,0x2942L,65526UL},{6UL,3UL,0x855DL,65526UL},{0x2F27L,0x7D93L,0x2BDEL,1UL}},{{0xE616L,65534UL,0xEB69L,65535UL},{0UL,65526UL,0UL,1UL},{0x0BE3L,6UL,65528UL,65535UL},{65534UL,0x2942L,65535UL,6UL},{0x2BDEL,0x855DL,65535UL,0x2F27L},{65534UL,0x2BDEL,65528UL,0xE616L}},{{0x0BE3L,0xEB69L,0UL,0UL},{0UL,0UL,0xEB69L,0x0BE3L},{0xE616L,65528UL,0x2BDEL,65534UL},{0x2F27L,65535UL,0x855DL,0x2BDEL},{6UL,65535UL,0x2942L,65534UL},{65535UL,65528UL,6UL,0x0BE3L}},{{1UL,0UL,65526UL,0UL},{65535UL,0xEB69L,65534UL,0xE616L},{1UL,0xE616L,0xB825L,1UL},{0x2942L,65535UL,6UL,65526UL},{0x2942L,0xEB69L,0xB825L,65527UL},{65534UL,65526UL,0x9A7AL,0UL}},{{65528UL,0x2942L,0x2942L,65528UL},{0UL,0x9A7AL,65526UL,65534UL},{65527UL,0xB825L,0xEB69L,0x2942L},{65526UL,6UL,65535UL,0x2942L},{1UL,0xB825L,0xE616L,65534UL},{0UL,0x9A7AL,1UL,65528UL}}};
static unsigned g_638 = 5UL;
static const int g_675 = 0xD76F4CCDL;
static const int *g_731 = &g_15;
static unsigned short *g_761 = &g_124;
static unsigned short **g_760 = &g_761;
static unsigned short ** const *g_759 = &g_760;
static char **g_862 = (void*)0;
static unsigned char g_909 = 0x4DL;
static const short g_923 = 0x29A8L;
static char g_942 = 6L;
static unsigned *g_1055 = &g_318;
static unsigned **g_1054 = &g_1055;
static unsigned ***g_1053 = &g_1054;
static int g_1184[4][4] = {{1L,1L,0L,0x4E2A2F09L},{0x019B4B2EL,(-1L),0x019B4B2EL,0L},{0x019B4B2EL,0L,0L,0x019B4B2EL},{1L,0L,0x4E2A2F09L,0L}};
static unsigned g_1303 = 0UL;
static unsigned char g_1344 = 1UL;
static short g_1397 = 0L;
static unsigned short g_1403 = 0xD066L;
static unsigned *g_1531 = &g_1303;
static unsigned **g_1530 = &g_1531;
static unsigned short ***g_1596 = (void*)0;
static unsigned short ****g_1595 = &g_1596;
static unsigned short *****g_1594[5] = {&g_1595,&g_1595,&g_1595,&g_1595,&g_1595};
static unsigned *g_1671 = &g_318;
static const int g_1711[2] = {(-6L),(-6L)};
static unsigned short g_1715 = 2UL;
static unsigned g_1772 = 0xF758FC56L;
static short g_1783 = 2L;
static unsigned g_1794 = 0x96E2414CL;
static int g_1805 = (-1L);



static int func_1(void);
static int func_16(unsigned char p_17, const unsigned p_18);
static int * func_31(char * p_32, char * p_33, char * p_34, unsigned p_35, int p_36);
static char * func_37(int * p_38, int p_39);
static int * func_40(char * p_41, int * p_42, unsigned p_43);
static int * func_45(int * p_46, int ** p_47, short p_48, short p_49, char * const p_50);
static int * func_51(short p_52);
static int ** func_56(unsigned char p_57);
static unsigned func_58(char * p_59);
static char * func_60(int * p_61, char * p_62);
static int func_1(void)
{
    unsigned short l_10 = 0x1404L;
    char *l_44 = (void*)0;
    int l_1652 = 6L;
    int l_1677[4][6][6] = {{{(-1L),1L,1L,(-1L),0L,(-1L)},{0L,2L,0xD57FA182L,0x564CDA69L,(-1L),0xFFBE87B0L},{0xFFBE87B0L,0x564CDA69L,0x75BF9551L,0x1516A611L,(-1L),0xEC33FB9FL},{0x56859D81L,2L,0x30EFF360L,0xD57FA182L,0L,(-6L)},{2L,1L,0x564CDA69L,0x1516A611L,0xFFBE87B0L,(-1L)},{(-6L),0x56859D81L,0x564CDA69L,0x564CDA69L,0x56859D81L,(-6L)}},{{(-1L),0x564CDA69L,0x30EFF360L,(-1L),2L,0xEC33FB9FL},{0x1516A611L,0x56859D81L,0x75BF9551L,0xD57FA182L,(-6L),0xFFBE87B0L},{0x1516A611L,1L,0xD57FA182L,(-1L),(-1L),(-1L)},{(-1L),2L,1L,0x564CDA69L,0x1516A611L,0xFFBE87B0L},{(-6L),0x564CDA69L,0xEC33FB9FL,0x1516A611L,0x1516A611L,0xEC33FB9FL},{2L,2L,(-1L),0xD57FA182L,(-1L),(-6L)}},{{0x56859D81L,1L,1L,0x1516A611L,(-6L),(-1L)},{0xFFBE87B0L,0x56859D81L,1L,0x564CDA69L,2L,(-6L)},{0L,0x564CDA69L,(-1L),(-1L),0x56859D81L,0xEC33FB9FL},{(-1L),0x56859D81L,0xEC33FB9FL,0xD57FA182L,0xFFBE87B0L,0xFFBE87B0L},{(-1L),1L,1L,(-1L),0L,(-1L)},{0L,2L,0xD57FA182L,0x564CDA69L,(-1L),0xFFBE87B0L}},{{0xFFBE87B0L,0x564CDA69L,0x75BF9551L,0x1516A611L,(-1L),0xEC33FB9FL},{0x56859D81L,2L,0x30EFF360L,0xD57FA182L,0L,(-6L)},{2L,1L,0x564CDA69L,0x1516A611L,0xFFBE87B0L,(-1L)},{(-6L),0x56859D81L,0x564CDA69L,0x564CDA69L,0x56859D81L,(-6L)},{(-1L),0x564CDA69L,0x30EFF360L,(-1L),2L,0xEC33FB9FL},{0x1516A611L,0x56859D81L,0x75BF9551L,0xD57FA182L,(-6L),0xFFBE87B0L}}};
    char l_1709 = 0xCBL;
    unsigned char l_1744 = 0x6CL;
    unsigned char l_1786 = 9UL;
    int l_1788 = 0xA9BEBB6FL;
    int l_1807[10];
    unsigned ****l_1842 = &g_1053;
    int l_1843 = 0x4D5B5BBEL;
    short *l_1844 = (void*)0;
    short *l_1845 = &g_1783;
    int i, j, k;
    for (i = 0; i < 10; i++)
        l_1807[i] = 0x91B20769L;
    for (g_3 = 0; (g_3 <= 2); g_3 += 1)
    {
        unsigned l_11 = 4UL;
        char *l_12 = &g_13;
        int *l_14 = &g_15;
        int *l_63[9][9] = {{&g_15,&g_15,&g_15,&g_3,&g_15,&g_3,(void*)0,&g_3,&g_15},{(void*)0,(void*)0,&g_15,&g_3,(void*)0,&g_3,&g_15,&g_3,&g_15},{(void*)0,(void*)0,&g_15,&g_3,&g_15,&g_3,&g_15,&g_3,&g_15},{&g_15,&g_15,&g_15,&g_3,&g_15,&g_3,(void*)0,&g_3,&g_15},{(void*)0,(void*)0,&g_15,&g_3,(void*)0,&g_3,&g_15,&g_3,&g_15},{(void*)0,(void*)0,&g_15,&g_3,&g_15,&g_3,&g_15,&g_3,&g_15},{&g_15,&g_15,&g_15,&g_3,&g_15,&g_3,(void*)0,&g_3,&g_15},{(void*)0,(void*)0,&g_15,&g_3,(void*)0,&g_3,&g_15,&g_3,&g_15},{(void*)0,(void*)0,&g_15,&g_3,&g_15,&g_3,&g_15,&g_3,&g_3}};
        unsigned l_1667[9][10][2] = {{{4294967293UL,0x63A8CCBAL},{0x98ED602EL,0xC3594FAFL},{0UL,0UL},{4294967294UL,0xE528C56EL},{0UL,0x8AA99E9AL},{4294967294UL,0x18C096EBL},{4294967295UL,4294967287UL},{0UL,4294967294UL},{0x3541643AL,0xB492F3BDL},{0xCECE5C3EL,0x98ED602EL}},{{0x31A04FF4L,2UL},{4294967295UL,0xB1CE887FL},{0xC7565040L,0UL},{0x18C096EBL,4294967287UL},{0xA289E240L,4294967293UL},{0xBDEF7E6BL,4294967286UL},{2UL,4294967286UL},{0xBDEF7E6BL,4294967293UL},{0xA289E240L,4294967287UL},{0x18C096EBL,0UL}},{{0xC7565040L,0xB1CE887FL},{4294967295UL,2UL},{0x31A04FF4L,0x98ED602EL},{0xCECE5C3EL,0xB492F3BDL},{0x3541643AL,4294967294UL},{0UL,4294967287UL},{4294967295UL,0x18C096EBL},{4294967294UL,0x8AA99E9AL},{0UL,0xE528C56EL},{4294967294UL,0UL}},{{0UL,0xC3594FAFL},{0x98ED602EL,0x63A8CCBAL},{4294967293UL,4294967295UL},{0x47D07990L,1UL},{0x613E9509L,0x141B60CCL},{4294967295UL,6UL},{4294967295UL,4294967295UL},{0x2FCDACE6L,4294967295UL},{0x73A36577L,4294967294UL},{0x652859B9L,4294967295UL}},{{0UL,0UL},{1UL,1UL},{0xCB3F66F9L,4294967290UL},{1UL,0xC7565040L},{0x923E1CCEL,0xBDEF7E6BL},{4294967287UL,0xECBF636CL},{0xDF6896F4L,0xDF6896F4L},{0xC3594FAFL,0xE528C56EL},{0x8CB47A69L,0xDF6896F4L},{0x613E9509L,4294967293UL}},{{0x31A04FF4L,0x613E9509L},{0xA78D0B82L,0x876E3719L},{0xA78D0B82L,0x613E9509L},{0x31A04FF4L,4294967293UL},{0x613E9509L,0xDF6896F4L},{0x8CB47A69L,0xE528C56EL},{0UL,0x3541643AL},{0x3541643AL,0xA289E240L},{0x47D07990L,8UL},{1UL,0x652859B9L}},{{4294967295UL,0xCECE5C3EL},{0UL,0x63A8CCBAL},{0UL,0x0CD17D5BL},{0x0F35E8F1L,4294967286UL},{0xDF6896F4L,6UL},{0x923E1CCEL,0x9FDA96B6L},{0x8AA99E9AL,0UL},{0xB1CE887FL,1UL},{0x9FDA96B6L,5UL},{4294967295UL,0UL}},{{1UL,4294967295UL},{0xECBF636CL,4294967295UL},{0x141B60CCL,0UL},{1UL,0xB492F3BDL},{4294967293UL,2UL},{0x0CD17D5BL,4294967287UL},{6UL,4294967295UL},{4294967295UL,0x47D07990L},{0xB492F3BDL,0x73A36577L},{0x18C096EBL,4294967294UL}},{{9UL,0x141B60CCL},{1UL,0xC7565040L},{4294967286UL,4294967295UL},{0x652859B9L,0UL},{4294967295UL,1UL},{0x4054B658L,0xECBF636CL},{8UL,1UL},{0xC7565040L,1UL},{8UL,0xECBF636CL},{0x4054B658L,1UL}}};
        char l_1675 = 0x0AL;
        unsigned short l_1691[8][5] = {{7UL,7UL,0x4DBFL,1UL,65533UL},{8UL,0x0BEFL,6UL,6UL,0x0BEFL},{1UL,0x0338L,0x72B3L,1UL,0x3CC2L},{0x15F1L,0x31CEL,65535UL,0x31CEL,0x15F1L},{0x72B3L,65533UL,0x0338L,0x3CC2L,65533UL},{0x15F1L,8UL,8UL,0x15F1L,2UL},{1UL,7UL,0xFF00L,65533UL,65533UL},{6UL,0x15F1L,6UL,2UL,0x15F1L}};
        unsigned char l_1712 = 0x47L;
        short l_1748 = (-4L);
        unsigned l_1766 = 1UL;
        unsigned short l_1806 = 0x4222L;
        short l_1808 = 0x386FL;
        unsigned short ** const *l_1816[2][7][4] = {{{&g_760,&g_760,(void*)0,&g_760},{&g_760,&g_760,&g_760,&g_760},{&g_760,&g_760,&g_760,&g_760},{&g_760,&g_760,&g_760,(void*)0},{&g_760,&g_760,(void*)0,(void*)0},{&g_760,&g_760,&g_760,&g_760},{&g_760,&g_760,&g_760,&g_760}},{{&g_760,&g_760,(void*)0,&g_760},{&g_760,&g_760,&g_760,&g_760},{&g_760,&g_760,&g_760,&g_760},{&g_760,&g_760,&g_760,(void*)0},{&g_760,&g_760,&g_760,(void*)0},{&g_760,&g_760,&g_760,&g_760},{&g_760,&g_760,&g_760,&g_760}}};
        int l_1819 = 0x92DD077FL;
        int l_1821 = 0x4F01B87CL;
        short l_1822 = 0x2FEAL;
        unsigned l_1824 = 1UL;
        int i, j, k;
        (*l_14) ^= (safe_mod_func_int8_t_s_s((4294967291UL && (safe_mul_func_uint16_t_u_u(((safe_rshift_func_int16_t_s_s(l_10, 12)) > ((*l_12) = l_11)), 9L))), g_2[3][3][1]));
        for (l_11 = 0; (l_11 <= 2); l_11 += 1)
        {
            int l_21 = 1L;
            int **l_30 = &l_14;
            char * const l_944 = &g_354;
            char *l_994 = &g_278;
            unsigned l_1007 = 0x1D29DA0EL;
            int l_1651[8] = {1L,1L,1L,1L,1L,1L,1L,1L};
            int l_1653 = 0L;
            unsigned l_1654[1];
            char l_1659 = 0xA8L;
            unsigned char l_1678 = 0x25L;
            unsigned l_1694 = 4294967295UL;
            short l_1710 = 0xF3E6L;
            int i;
            for (i = 0; i < 1; i++)
                l_1654[i] = 0x851CB231L;
        }
    }
    (*g_92) = (((*g_141) = (*g_141)) <= ((((-1L) | l_1807[8]) >= (((((**g_67) = l_1807[3]) < (((*l_1845) = (l_1843 |= (l_1677[2][5][0] = (l_1652 = (l_1842 != &g_1053))))) >= (+(l_1786 & ((*g_761) |= 0x9D72L))))) > l_10) != l_10)) || 0xB5L));
    return (*g_68);
}







static int func_16(unsigned char p_17, const unsigned p_18)
{
    char *l_1008 = &g_942;
    int l_1009 = (-1L);
    char * const *l_1021 = &l_1008;
    char * const **l_1020 = &l_1021;
    int l_1103 = (-1L);
    int l_1128 = 0x5353E5D7L;
    int l_1131[2][2] = {{(-6L),(-6L)},{(-6L),(-6L)}};
    int l_1145 = 0xC31EEFE5L;
    unsigned char l_1155[4][6][1] = {{{0xBAL},{0xBCL},{4UL},{254UL},{0UL},{0UL}},{{0UL},{254UL},{4UL},{0xBCL},{0xBAL},{0xBCL}},{{4UL},{254UL},{0UL},{0UL},{0UL},{254UL}},{{4UL},{0xBCL},{0xBAL},{0xBCL},{4UL},{254UL}}};
    unsigned *l_1277 = &g_279;
    unsigned *l_1283 = (void*)0;
    int l_1289 = (-1L);
    unsigned l_1308 = 1UL;
    unsigned char l_1379[2];
    char *l_1413 = (void*)0;
    unsigned ** const *l_1446 = &g_1054;
    unsigned l_1467[9] = {0xD9582C9EL,0xD9582C9EL,0xD9582C9EL,0xD9582C9EL,0xD9582C9EL,0xD9582C9EL,0xD9582C9EL,0xD9582C9EL,0xD9582C9EL};
    unsigned short ** const **l_1479 = &g_759;
    char *l_1492 = &g_222;
    unsigned short l_1568[1][6] = {{0x1C02L,0x1C02L,0x1C02L,0x1C02L,0x1C02L,0x1C02L}};
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_1379[i] = 1UL;
    if (l_1009)
    {
        int *l_1010 = (void*)0;
        int l_1129 = (-1L);
        int l_1132 = 6L;
        int l_1134 = (-1L);
        int l_1135 = 0x8FC5D356L;
        int l_1142 = 0xC10B0292L;
        int l_1144 = 0L;
        int l_1146 = 0L;
        int l_1147 = (-2L);
        char *l_1163 = &g_278;
        int l_1232 = 0x03BC9800L;
        int l_1233 = 0x79C5576FL;
        int l_1234 = (-1L);
        char l_1235 = 0xC5L;
        int l_1236 = 0x3440BA57L;
        int l_1237[9][1][6] = {{{0x8CBDC4B0L,0x8CBDC4B0L,0x8CBDC4B0L,0x8CBDC4B0L,0x8CBDC4B0L,0x8CBDC4B0L}},{{0x8CBDC4B0L,0x8CBDC4B0L,0x8CBDC4B0L,0x8CBDC4B0L,0x8CBDC4B0L,0x8CBDC4B0L}},{{0x8CBDC4B0L,0x8CBDC4B0L,0x8CBDC4B0L,0x8CBDC4B0L,0x8CBDC4B0L,0x8CBDC4B0L}},{{0x8CBDC4B0L,0x8CBDC4B0L,0x8CBDC4B0L,0x8CBDC4B0L,0x8CBDC4B0L,0x8CBDC4B0L}},{{0x8CBDC4B0L,0x8CBDC4B0L,0x8CBDC4B0L,0x8CBDC4B0L,0x8CBDC4B0L,0x8CBDC4B0L}},{{0x8CBDC4B0L,0x8CBDC4B0L,0x8CBDC4B0L,0x8CBDC4B0L,0x8CBDC4B0L,0x8CBDC4B0L}},{{0x8CBDC4B0L,0x8CBDC4B0L,0x8CBDC4B0L,0x8CBDC4B0L,0x8CBDC4B0L,0x8CBDC4B0L}},{{0x8CBDC4B0L,0x8CBDC4B0L,0x8CBDC4B0L,0x8CBDC4B0L,0x8CBDC4B0L,0x8CBDC4B0L}},{{0x8CBDC4B0L,0x8CBDC4B0L,0x8CBDC4B0L,0x8CBDC4B0L,0x8CBDC4B0L,0x8CBDC4B0L}}};
        int i, j, k;
        (*g_67) = l_1010;
        if (l_1009)
        {
            short l_1013 = 0xF36BL;
            int l_1060 = 0L;
            unsigned ****l_1082 = (void*)0;
            int l_1137 = 7L;
            int l_1140 = (-1L);
            int l_1141 = 0xEFD19CFCL;
            int l_1143[8][8][4] = {{{0x9B6218C6L,0xAE78EC48L,(-1L),(-8L)},{0x2C67449EL,0x0B9BD843L,0xFEED1AE0L,0x88905F0FL},{3L,0x0D8DB4E8L,(-1L),0x61E77C10L},{(-2L),(-8L),0x9B6218C6L,(-1L)},{(-1L),6L,(-1L),(-1L)},{0x02CD8132L,(-1L),0x02CD8132L,6L},{0xFEED1AE0L,0xAACCFB8FL,0xAE78EC48L,0x0B9BD843L},{(-7L),(-1L),(-6L),0xAACCFB8FL}},{{6L,(-2L),(-6L),0xB9ABEE7BL},{(-7L),0x2C67449EL,0xAE78EC48L,(-1L)},{0xFEED1AE0L,(-1L),0x02CD8132L,(-8L)},{0x02CD8132L,(-8L),(-1L),(-6L)},{(-1L),0xFEED1AE0L,0x9B6218C6L,(-1L)},{(-2L),(-10L),(-1L),0x8FA1785FL},{3L,(-2L),0xFEED1AE0L,(-1L)},{0x2C67449EL,(-1L),(-1L),0x2C67449EL}},{{0x9B6218C6L,3L,(-10L),0xFEED1AE0L},{(-1L),0xB9ABEE7BL,0x0B9BD843L,(-7L)},{(-1L),0x02CD8132L,4L,(-7L)},{(-10L),0xB9ABEE7BL,0x35BE71CEL,0xFEED1AE0L},{(-8L),3L,3L,0x2C67449EL},{0xAE78EC48L,(-1L),(-8L),(-1L)},{(-1L),(-2L),0x2C67449EL,0x8FA1785FL},{(-1L),(-10L),0x4D4C9097L,0x2C67449EL}},{{(-2L),(-8L),0xAE78EC48L,(-1L)},{0x0D8DB4E8L,(-10L),(-10L),(-10L)},{3L,0x2C67449EL,(-10L),0x02CD8132L},{0x02CD8132L,(-2L),4L,(-2L)},{(-1L),(-6L),0xAACCFB8FL,0xA07AF196L},{(-1L),0xC0BA35E6L,4L,0x88905F0FL},{0x02CD8132L,0xA07AF196L,(-10L),0x0B9BD843L},{3L,4L,(-10L),0x61E77C10L}},{{0x0D8DB4E8L,(-8L),0xAE78EC48L,0xC0BA35E6L},{(-2L),0xAE78EC48L,(-1L),3L},{0x61E77C10L,3L,(-2L),0xFEED1AE0L},{0x2C67449EL,0x88905F0FL,0x4D4C9097L,0x4D4C9097L},{0x8FA1785FL,0x8FA1785FL,0x35BE71CEL,(-1L)},{0x4D4C9097L,(-1L),(-8L),0xAACCFB8FL},{(-1L),(-1L),(-1L),(-8L)},{6L,(-1L),0x88905F0FL,0xAACCFB8FL}},{{(-1L),(-1L),0xB9ABEE7BL,(-1L)},{(-1L),0x8FA1785FL,6L,0x4D4C9097L},{(-2L),0x88905F0FL,(-8L),0xFEED1AE0L},{0x35BE71CEL,3L,0x02CD8132L,3L},{(-7L),0xAE78EC48L,(-1L),0xC0BA35E6L},{(-1L),(-8L),(-1L),0x61E77C10L},{0x31E28677L,4L,0x31E28677L,0x0B9BD843L},{(-8L),0xA07AF196L,3L,(-7L)}},{{(-1L),0x4D4C9097L,(-10L),(-1L)},{4L,(-8L),(-10L),6L},{(-1L),(-10L),3L,0x9B6218C6L},{6L,0x8FA1785FL,(-1L),(-1L)},{(-1L),(-1L),0xAE78EC48L,(-10L)},{0xA07AF196L,6L,3L,0x8FA1785FL},{(-1L),0xC0BA35E6L,0x9B6218C6L,0x35BE71CEL},{0x31E28677L,(-1L),6L,0xFEED1AE0L}},{{(-10L),0x2C67449EL,0x2C67449EL,(-10L)},{3L,(-6L),0xC0BA35E6L,6L},{0xAACCFB8FL,6L,(-7L),(-1L)},{0x2C67449EL,(-1L),(-8L),(-1L)},{(-8L),6L,(-7L),6L},{0x0B9BD843L,(-6L),0x31E28677L,(-10L)},{3L,0x2C67449EL,0x0B9BD843L,0xFEED1AE0L},{0x8FA1785FL,(-1L),(-10L),0x35BE71CEL}}};
            int l_1154 = 0x1CD06F28L;
            short * const *l_1172 = &g_141;
            short * const **l_1171 = &l_1172;
            int *l_1186 = &l_1144;
            unsigned short **l_1196 = &g_761;
            unsigned short ***l_1195 = &l_1196;
            int i, j, k;
            if ((p_18 & ((void*)0 != &g_862)))
            {
                (*g_92) = (safe_sub_func_uint32_t_u_u((l_1013 <= (safe_sub_func_uint8_t_u_u(((*g_267) &= p_17), ((safe_add_func_int8_t_s_s(p_17, 250UL)) || g_923)))), (*g_731)));
                for (g_318 = 0; (g_318 == 55); g_318 = safe_add_func_int32_t_s_s(g_318, 6))
                {
                    unsigned l_1028 = 0xD02AB721L;
                    if ((!(l_1020 != &g_862)))
                    {
                        (*g_92) = p_18;
                    }
                    else
                    {
                        int *l_1022 = &l_1009;
                        int l_1023 = 0xA4CE9A9DL;
                        int *l_1024 = &g_515[2];
                        int *l_1025 = &l_1009;
                        int *l_1026 = &l_1023;
                        int *l_1027[1];
                        int i;
                        for (i = 0; i < 1; i++)
                            l_1027[i] = (void*)0;
                        ++l_1028;
                    }
                    for (g_85 = 0; (g_85 == 11); g_85 = safe_add_func_uint16_t_u_u(g_85, 8))
                    {
                        return p_17;
                    }
                    (*g_92) = 0x5782F5B9L;
                }
            }
            else
            {
                unsigned short *l_1041 = &g_593[0][3][3];
                int l_1044 = 6L;
                unsigned ***l_1057 = &g_1054;
                unsigned ****l_1056 = &l_1057;
                if (((safe_mul_func_uint8_t_u_u((safe_sub_func_int32_t_s_s((safe_add_func_uint32_t_u_u((l_1009 <= (*g_761)), ((!(***g_759)) <= p_17))), g_85)), 0x6FL)) ^ (safe_mod_func_uint8_t_u_u((l_1044 = (((p_17 | (((((*l_1041) = (***g_759)) < (((*g_267)++) || (*g_267))) != 0xB0L) || l_1009)) & p_17) ^ g_942)), l_1009))))
                {
                    return l_1013;
                }
                else
                {
                    char *l_1047 = &g_278;
                    (*g_92) ^= (safe_add_func_uint32_t_u_u(l_1009, 4294967295UL));
                }
                l_1009 = ((safe_unary_minus_func_int8_t_s(((safe_rshift_func_uint16_t_u_s((safe_lshift_func_int16_t_s_s((((g_1053 != ((*l_1056) = &g_1054)) > (((safe_sub_func_int32_t_s_s((+((*g_92) = (l_1060 |= 0xCEB0C480L))), l_1013)) <= 0xB746B799L) || (safe_mul_func_int16_t_s_s(((safe_sub_func_int16_t_s_s(((*g_141) = 0xE0B5L), 1UL)) >= l_1009), ((*g_761)--))))) >= ((safe_rshift_func_int8_t_s_u(p_17, 2)) && p_17)), 13)), l_1009)) > l_1009))) != 6UL);
                (*g_92) |= p_18;
                for (g_279 = 16; (g_279 >= 55); g_279++)
                {
                    unsigned l_1079 = 0x53621AC1L;
                    (*g_67) = l_1010;
                    for (l_1013 = 12; (l_1013 >= (-1)); --l_1013)
                    {
                        int *l_1073 = (void*)0;
                        int *l_1074 = &g_365;
                        int *l_1075 = &l_1044;
                        int *l_1076 = &g_15;
                        int *l_1077 = &l_1060;
                        int *l_1078[5] = {&g_365,&g_365,&g_365,&g_365,&g_365};
                        int i;
                        l_1079++;
                        if ((*g_731))
                            break;
                        (*g_92) = (l_1009 & (&g_1053 == l_1082));
                    }
                }
            }
            for (g_275 = 0; (g_275 > 4); g_275 = safe_add_func_int16_t_s_s(g_275, 2))
            {
                int l_1130 = 0x9E294FE2L;
                int l_1136[7][8][4] = {{{7L,0xB953D1B1L,0x43FEEAA8L,0x322AA004L},{0x85ECB13EL,1L,5L,2L},{0xC9BC91D6L,0L,0xDCBB6F08L,2L},{8L,0x09227012L,0xE43FBF33L,0xA9649CD2L},{0x40612B14L,0xD0BF9A4CL,0xD0BF9A4CL,0x40612B14L},{0x09227012L,0xB4FFB9ECL,8L,0xEC0AD06AL},{0x60B828A8L,0L,0x652D1ADAL,0x0F2D0FDEL},{(-1L),0xDCBB6F08L,0x85ECB13EL,0x0F2D0FDEL}},{{2L,0L,1L,2L},{1L,(-1L),0x1632BFE8L,2L},{7L,0x322AA004L,1L,1L},{0xB953D1B1L,0xE43FBF33L,0x22613771L,(-1L)},{0x322AA004L,0xB953D1B1L,0xB4FFB9ECL,(-5L)},{0x22613771L,2L,0xE43FBF33L,0x6A786777L},{8L,0xDCBB6F08L,8L,1L},{0x40612B14L,7L,(-1L),1L}},{{1L,8L,0x1A64A5A4L,8L},{0x88914076L,0x652D1ADAL,0x6A786777L,1L},{(-1L),0x43FEEAA8L,0L,0xB953D1B1L},{0x652D1ADAL,2L,0xB4FFB9ECL,0xDCBB6F08L},{0x652D1ADAL,0x40612B14L,0L,0x85ECB13EL},{(-1L),0xDCBB6F08L,0x6A786777L,8L},{0x88914076L,0xB4FFB9ECL,0x1A64A5A4L,5L},{1L,(-1L),(-1L),0xEC0AD06AL}},{{0x40612B14L,0x22613771L,8L,1L},{8L,0L,0xE43FBF33L,0xC9BC91D6L},{0x22613771L,0xEC0AD06AL,0xB4FFB9ECL,0xA9649CD2L},{0x322AA004L,0x88914076L,0x22613771L,0xF7CF2B5AL},{0xB953D1B1L,0xDCBB6F08L,1L,1L},{7L,7L,0x1632BFE8L,(-9L)},{0x322AA004L,0xD0BF9A4CL,1L,0xC55A52EBL},{0x1632BFE8L,8L,(-5L),1L}},{{(-7L),8L,2L,0xC55A52EBL},{8L,0xD0BF9A4CL,0x2281FABBL,0x652D1ADAL},{(-1L),0x1A64A5A4L,(-1L),(-9L)},{0x09227012L,0x22613771L,5L,1L},{0x2281FABBL,1L,0xF7CF2B5AL,0x43FEEAA8L},{0x322AA004L,0x60B828A8L,8L,0xD0BF9A4CL},{(-1L),0xB953D1B1L,2L,1L},{0xD0BF9A4CL,0xC9BC91D6L,8L,0x60B828A8L}},{{0xB953D1B1L,(-7L),0x2281FABBL,0L},{0xEC0AD06AL,0x2281FABBL,0xEC0AD06AL,0xDCBB6F08L},{0x60B828A8L,0x22613771L,1L,(-5L)},{(-6L),0x0C0926E5L,1L,0x22613771L},{0x322AA004L,0x09227012L,1L,0x65632F2FL},{(-6L),0xEC0AD06AL,1L,1L},{0x60B828A8L,2L,0xEC0AD06AL,0x9E00317FL},{0xEC0AD06AL,0x9E00317FL,0x2281FABBL,0x322AA004L}},{{0xB953D1B1L,(-6L),8L,2L},{0xD0BF9A4CL,0x22613771L,2L,0xA9649CD2L},{(-1L),0x1632BFE8L,8L,0xE43FBF33L},{0x322AA004L,0x65632F2FL,0xF7CF2B5AL,(-7L)},{0x2281FABBL,(-1L),5L,1L},{0x09227012L,(-1L),(-1L),0xE43FBF33L},{5L,0x43FEEAA8L,0xC55A52EBL,1L},{(-9L),0x65632F2FL,(-5L),(-6L)}}};
                short ***l_1170 = (void*)0;
                unsigned short ***l_1180 = &g_760;
                int i, j, k;
            }
            (*l_1186) = (safe_lshift_func_uint16_t_u_u(((-2L) || ((*g_759) == ((*l_1195) = &g_761))), 9));
            (*g_92) ^= ((safe_sub_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u((~p_18), (*l_1186))), ((((((safe_rshift_func_int16_t_s_u((p_18 || ((((p_18 & (safe_rshift_func_int8_t_s_s(1L, 1))) || (safe_mod_func_uint16_t_u_u(((**g_760) = 0x9103L), (*l_1186)))) > (+(*g_1055))) && p_18)), 3)) && 0UL) > p_17) != 1L) | 8UL) > p_18))) ^ p_18);
        }
        else
        {
            const unsigned char **l_1209 = (void*)0;
            int l_1217 = (-1L);
            int l_1218 = 0x8B86C078L;
            int *l_1219 = &l_1144;
            int *l_1220 = &l_1134;
            int *l_1221 = (void*)0;
            int *l_1222 = &l_1142;
            int *l_1223 = &l_1218;
            int *l_1224 = &l_1134;
            int *l_1225 = &g_515[1];
            int *l_1226 = &l_1144;
            int *l_1227 = &l_1131[1][1];
            int *l_1228 = &g_515[2];
            int *l_1229 = &l_1147;
            int *l_1230[3][10] = {{&l_1129,(void*)0,&g_365,&l_1217,&g_365,(void*)0,&l_1129,&l_1131[0][1],&l_1147,&l_1147},{&l_1129,&l_1147,&l_1142,&l_1147,&l_1147,&l_1142,&l_1147,&l_1129,&l_1009,&l_1131[0][1]},{&l_1142,&l_1147,&l_1129,&l_1009,&l_1131[0][1],&l_1009,&l_1129,&l_1147,&l_1142,&l_1147}};
            int l_1231 = 0xAE7C5C1AL;
            unsigned l_1238[2];
            int i, j;
            for (i = 0; i < 2; i++)
                l_1238[i] = 3UL;
            for (g_89 = 0; (g_89 != 33); g_89++)
            {
                unsigned short **l_1214 = (void*)0;
                unsigned short ***l_1215 = &l_1214;
                int l_1216 = 0x57C0C8F2L;
                for (l_1146 = 0; (l_1146 <= 3); l_1146 += 1)
                {
                    (*l_1020) = &g_64[0][2][1];
                    for (g_73 = 0; (g_73 <= 3); g_73 += 1)
                    {
                        l_1145 |= (l_1209 == &g_267);
                    }
                    for (p_17 = 0; (p_17 <= 3); p_17 += 1)
                    {
                        (*g_92) = 0x100034AFL;
                        (*g_67) = (void*)0;
                        (*g_92) = (*g_731);
                    }
                }
                (*g_92) = (*g_731);
                if (p_17)
                    continue;
                (*g_92) = (safe_sub_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(((*g_759) != ((*l_1215) = l_1214)), (l_1216 = (-1L)))), l_1217));
            }
            ++l_1238[1];
            for (g_65 = 0; (g_65 < 15); g_65++)
            {
                (*g_67) = (void*)0;
                for (l_1128 = 10; (l_1128 <= (-22)); l_1128 = safe_sub_func_uint8_t_u_u(l_1128, 3))
                {
                    (*g_67) = &l_1144;
                    for (l_1231 = 0; (l_1231 <= (-1)); l_1231 = safe_sub_func_uint8_t_u_u(l_1231, 9))
                    {
                        short l_1247[4][4] = {{0L,0L,0L,0L},{0L,0L,0L,0L},{0L,0L,0L,0L},{0L,0L,0L,0L}};
                        int i, j;
                        (*g_68) |= (l_1247[3][2] == 251UL);
                    }
                    (*g_67) = func_45(&l_1009, &l_1010, l_1155[2][1][0], (((*g_141) = 0xA126L) > p_18), (**l_1020));
                    (*l_1229) = (*g_68);
                }
                return p_18;
            }
        }
        for (g_475 = 0; (g_475 != 29); ++g_475)
        {
            (*g_67) = (void*)0;
            (*g_92) = (-1L);
        }
        (*g_92) = (!(*g_92));
    }
    else
    {
        unsigned l_1254 = 0x8BD117B4L;
        int l_1290 = (-10L);
        int l_1294 = 0x983020F7L;
        int l_1298 = 0x6D9454DAL;
        int l_1300 = 0x3A810E0AL;
        int l_1301 = 9L;
        short ***l_1328 = &g_140[0][0][2];
        char **l_1331 = &l_1008;
        int l_1362 = 2L;
        int l_1363 = (-4L);
        int l_1364 = 8L;
        int l_1365 = 0x4D78BB5FL;
        int l_1366 = 8L;
        int l_1367[1];
        char l_1414 = 0x7EL;
        int **l_1428 = &g_68;
        int l_1476 = 0L;
        unsigned short *l_1491[3][10] = {{&g_71[3][1][0],&g_593[1][5][3],&g_71[3][1][0],&g_593[1][5][3],&g_71[3][1][0],&g_593[1][5][3],&g_71[3][1][0],&g_593[1][5][3],&g_71[3][1][0],&g_593[1][5][3]},{&g_71[3][1][0],&g_593[1][5][3],&g_71[3][1][0],&g_593[1][5][3],&g_71[3][1][0],&g_593[1][5][3],&g_71[3][1][0],&g_593[1][5][3],&g_71[3][1][0],&g_593[1][5][3]},{&g_71[3][1][0],&g_593[1][5][3],&g_71[3][1][0],&g_593[1][5][3],&g_71[3][1][0],&g_593[1][5][3],&g_71[3][1][0],&g_593[1][5][3],&g_71[3][1][0],&g_593[1][5][3]}};
        int i, j;
        for (i = 0; i < 1; i++)
            l_1367[i] = 0x071C0B28L;
    }
    return p_17;
}







static int * func_31(char * p_32, char * p_33, char * p_34, unsigned p_35, int p_36)
{
    int *l_995[4][2][4] = {{{&g_3,(void*)0,&g_515[2],&g_3},{&g_515[2],(void*)0,(void*)0,&g_515[2]}},{{&g_515[2],&g_15,&g_515[2],&g_515[2]},{(void*)0,&g_3,&g_15,&g_515[2]}},{{(void*)0,&g_15,(void*)0,&g_515[2]},{&g_15,&g_3,(void*)0,&g_515[2]}},{{&g_515[2],&g_365,&g_3,&g_3},{&g_3,&g_3,&g_3,(void*)0}}};
    short l_996 = 0x9EEDL;
    unsigned l_997 = 0UL;
    int i, j, k;
    ++l_997;
    for (g_354 = (-14); (g_354 == (-22)); g_354 = safe_sub_func_int32_t_s_s(g_354, 2))
    {
        char * const l_1004 = &g_88;
        const char l_1005 = 0x22L;
        int l_1006[7][7] = {{0x94451E00L,0x6AC4C164L,0L,0x6AC4C164L,0x94451E00L,0x6AC4C164L,0L},{(-7L),0xA4CE8B08L,0x2074E3F2L,0x2074E3F2L,0xA4CE8B08L,(-7L),(-2L)},{0x59930A0CL,0L,0x59930A0CL,0x6AC4C164L,0x59930A0CL,0L,0x59930A0CL},{(-7L),0x2074E3F2L,(-2L),0xA4CE8B08L,0xA4CE8B08L,(-2L),0x2074E3F2L},{0x94451E00L,0L,0L,0L,0x94451E00L,0L,0L},{0xA4CE8B08L,0xA4CE8B08L,(-2L),0x2074E3F2L,(-7L),(-7L),0x2074E3F2L},{0x59930A0CL,0x6AC4C164L,0x59930A0CL,0L,0x59930A0CL,0x6AC4C164L,0x59930A0CL}};
        int i, j;
        for (g_85 = 0; (g_85 != 6); ++g_85)
        {
            l_995[2][0][2] = l_995[3][0][3];
        }
        (*g_67) = func_45((*g_67), &l_995[2][0][3], p_35, p_35, l_1004);
        if (p_36)
            break;
        l_1006[2][1] ^= l_1005;
    }
    return (*g_67);
}







static char * func_37(int * p_38, int p_39)
{
    int l_960[8] = {0L,0L,1L,0L,0L,1L,0L,0L};
    unsigned short ****l_965 = (void*)0;
    int l_978 = 7L;
    int l_979 = 0x48D7CE95L;
    char **l_980 = (void*)0;
    char **l_981 = &g_64[6][0][4];
    unsigned short *l_992 = &g_593[0][3][3];
    unsigned *l_993[4][10];
    int i, j;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 10; j++)
            l_993[i][j] = &g_279;
    }
    l_960[7] |= ((*g_92) = (*p_38));
    (*g_67) = &p_39;
    l_979 = ((safe_mod_func_uint16_t_u_u(((((((safe_add_func_uint8_t_u_u((l_965 == &g_759), (l_978 = (safe_mul_func_uint16_t_u_u((*g_761), ((safe_sub_func_int16_t_s_s(p_39, p_39)) & (safe_add_func_int32_t_s_s((((***g_759) || (!((*g_141) = l_960[0]))) > (safe_mul_func_uint16_t_u_u(p_39, (safe_lshift_func_int8_t_s_s((+(safe_rshift_func_uint16_t_u_u((*g_761), 14))), 3))))), 1L)))))))) != (***g_759)) | p_39) & 1L) > p_39) || g_354), l_960[7])) && l_960[2]);
    (*g_67) = func_40(func_60(&p_39, ((*l_981) = (void*)0)), (*g_67), (l_979 = (((*g_761) | (!(l_978 = ((*g_141) = (safe_sub_func_uint32_t_u_u(((safe_rshift_func_int8_t_s_s(p_39, (safe_add_func_int16_t_s_s((l_960[7] && (l_979 ^ (+(((*l_992) |= (safe_add_func_uint16_t_u_u(p_39, l_960[7]))) ^ l_979)))), (***g_759))))) >= l_978), g_584)))))) ^ l_979)));
    return (*l_981);
}







static int * func_40(char * p_41, int * p_42, unsigned p_43)
{
    unsigned short * const l_950 = &g_593[2][2][3];
    int l_955 = 0xBEE7C824L;
    char *l_956 = &g_88;
    short l_957 = 0x80EBL;
    for (g_909 = 0; (g_909 <= 43); g_909 = safe_add_func_int8_t_s_s(g_909, 1))
    {
        unsigned short *l_951[9] = {&g_71[0][2][0],&g_71[0][2][0],&g_71[0][2][0],&g_71[0][2][0],&g_71[0][2][0],&g_71[0][2][0],&g_71[0][2][0],&g_71[0][2][0],&g_71[0][2][0]};
        unsigned short l_952[2];
        int i;
        for (i = 0; i < 2; i++)
            l_952[i] = 65535UL;
        l_952[0] ^= ((p_43 || ((l_950 == l_951[2]) >= 0L)) || p_43);
        (*p_42) = 1L;
    }
    p_42 = ((*g_67) = (void*)0);
    (*g_67) = func_51(((*g_141) = (p_43 & ((p_43 > ((l_955 < p_43) > ((l_957 || p_43) && l_955))) == (*g_761)))));
    (*g_92) &= (safe_add_func_int32_t_s_s(l_957, (-4L)));
    return (*g_67);
}







static int * func_45(int * p_46, int ** p_47, short p_48, short p_49, char * const p_50)
{
    int *l_945 = &g_515[2];
    return l_945;
}







static int * func_51(short p_52)
{
    int *l_55 = &g_3;
    for (g_13 = 0; (g_13 == 8); g_13 = safe_add_func_uint32_t_u_u(g_13, 3))
    {
        if (g_3)
            break;
    }
    return l_55;
}







static int ** func_56(unsigned char p_57)
{
    int l_890 = 0x21FA1C16L;
    int l_892 = (-3L);
    int l_904 = 0L;
    int l_906[10] = {(-1L),0L,0L,(-1L),0x379F07E2L,(-1L),0L,0L,0L,(-9L)};
    int *l_913[6] = {&g_3,&g_3,&l_904,&g_3,&g_3,&l_904};
    int i;
    (*g_92) &= ((l_890 | (-5L)) >= l_890);
    for (p_57 = 0; (p_57 <= 0); p_57 += 1)
    {
        short ***l_891 = &g_140[1][0][3];
        int l_902 = 0L;
        int l_903 = (-2L);
        int l_905 = (-1L);
        int l_908 = 0x432EB818L;
        int *l_912[8] = {&l_892,&l_903,&l_892,&l_903,&l_892,&l_903,&l_892,&l_903};
        int l_943 = 0L;
        int i;
        (*l_891) = (void*)0;
        for (g_275 = 0; (g_275 <= 0); g_275 += 1)
        {
            int *l_893 = &g_15;
            int *l_894 = &l_892;
            int *l_895 = &g_515[2];
            int *l_896 = &g_15;
            int *l_897 = (void*)0;
            int *l_898 = (void*)0;
            int *l_899 = &l_892;
            int *l_900 = &g_15;
            int *l_901[4] = {&g_15,&g_15,&g_15,&g_15};
            short l_907 = 0L;
            int i;
            g_909++;
            (*g_92) = p_57;
            for (g_15 = 3; (g_15 >= 0); g_15 -= 1)
            {
                int i, j, k;
                (*l_895) = g_71[g_275][g_275][g_275];
            }
            for (l_905 = 0; (l_905 <= 0); l_905 += 1)
            {
                int l_916 = 0L;
                unsigned *l_933[2];
                int l_934 = 8L;
                char *l_941 = &g_277;
                int i, j, k;
                for (i = 0; i < 2; i++)
                    l_933[i] = &g_318;
                for (g_124 = 0; (g_124 <= 0); g_124 += 1)
                {
                    short *l_921 = &g_514;
                    short *l_922 = &l_907;
                    int *l_924[2];
                    int i, j, k;
                    for (i = 0; i < 2; i++)
                        l_924[i] = &l_906[8];
                    if ((safe_mod_func_uint8_t_u_u((g_71[(p_57 + 3)][(g_124 + 1)][p_57] & (l_916 == p_57)), ((safe_mod_func_int16_t_s_s((safe_mul_func_int16_t_s_s((*g_141), ((*l_922) ^= ((*l_921) ^= (&g_731 != (void*)0))))), (*l_895))) && g_923))))
                    {
                        int *l_925 = &l_908;
                        l_925 = l_924[1];
                    }
                    else
                    {
                        unsigned char l_926 = 0UL;
                        if (l_926)
                            break;
                        (*g_67) = (void*)0;
                    }
                }
                (*l_893) = ((safe_mul_func_int8_t_s_s((safe_add_func_uint8_t_u_u(((g_71[(g_275 + 5)][(g_275 + 1)][g_275] | (safe_mul_func_uint8_t_u_u((((*l_941) = ((l_916 < (2L >= ((*l_899) ^= (g_638--)))) < (safe_rshift_func_int16_t_s_u((safe_rshift_func_uint8_t_u_s((+8UL), 2)), ((*g_761) = (**g_760)))))) & (((p_57 ^ p_57) == (&l_934 != &l_905)) ^ (*g_731))), g_942))) <= g_71[(g_275 + 5)][(g_275 + 1)][g_275]), p_57)), l_943)) || p_57);
            }
        }
    }
    return &g_68;
}







static unsigned func_58(char * p_59)
{
    const int * const l_656 = &g_515[2];
    const int * const *l_655 = &l_656;
    int l_657 = 6L;
    unsigned l_663 = 0x1E9C7C64L;
    int l_717 = 0xA7C6361CL;
    int l_718 = (-1L);
    unsigned short *l_753 = &g_71[2][0][0];
    const unsigned short **l_799 = &g_380[4][1][0];
    const unsigned short ***l_798[6][1][5] = {{{(void*)0,&l_799,&l_799,&l_799,&l_799}},{{(void*)0,&l_799,&l_799,&l_799,&l_799}},{{(void*)0,&l_799,&l_799,&l_799,&l_799}},{{(void*)0,&l_799,&l_799,&l_799,&l_799}},{{(void*)0,&l_799,&l_799,&l_799,&l_799}},{{(void*)0,&l_799,&l_799,&l_799,&l_799}}};
    int i, j, k;
lbl_758:
    l_657 |= (&g_92 == l_655);
    if (((safe_lshift_func_int8_t_s_s(((*p_59) |= 0x02L), 1)) >= ((*l_656) >= ((**l_655) != (**l_655)))))
    {
        int *l_660 = &g_15;
        int *l_661 = &g_15;
        int *l_662[4][8];
        int i, j;
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 8; j++)
                l_662[i][j] = &g_15;
        }
        l_663++;
    }
    else
    {
        char l_668 = 0xCBL;
        unsigned ** const l_689 = (void*)0;
        int *l_693 = &g_515[1];
        char l_698 = 0xBDL;
        int l_700 = (-1L);
        short *l_712[2][1];
        unsigned l_785 = 0x584D269EL;
        unsigned short ***l_802 = &g_760;
        int ***l_839 = &g_67;
        unsigned l_872 = 4294967294UL;
        const int **l_887[2][2];
        const int **l_888[9] = {&g_731,&g_731,&g_731,&g_731,&g_731,&g_731,&g_731,&g_731,&g_731};
        const int **l_889 = &g_731;
        int i, j;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 1; j++)
                l_712[i][j] = &g_73;
        }
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
                l_887[i][j] = &g_731;
        }
        if (((safe_lshift_func_int8_t_s_s(((*p_59) |= l_668), ((&g_318 == (void*)0) ^ l_668))) && 0L))
        {
            const int *l_674 = &g_675;
            const int **l_673[6][10] = {{&l_674,&l_674,&l_674,&l_674,&l_674,&l_674,&l_674,&l_674,&l_674,&l_674},{&l_674,&l_674,&l_674,&l_674,&l_674,&l_674,&l_674,&l_674,&l_674,&l_674},{&l_674,&l_674,&l_674,&l_674,&l_674,&l_674,&l_674,&l_674,&l_674,&l_674},{&l_674,&l_674,&l_674,&l_674,&l_674,&l_674,&l_674,&l_674,&l_674,&l_674},{&l_674,&l_674,&l_674,&l_674,&l_674,&l_674,&l_674,&l_674,&l_674,&l_674},{&l_674,&l_674,&l_674,&l_674,&l_674,&l_674,&l_674,&l_674,&l_674,&l_674}};
            int l_679 = (-1L);
            unsigned short *l_699 = &g_593[0][3][3];
            int l_721 = (-1L);
            unsigned short l_722[8][1] = {{0x72B7L},{0x72B7L},{0x4FC6L},{0x72B7L},{0x72B7L},{0x4FC6L},{0x72B7L},{0x72B7L}};
            int i, j;
            l_657 |= (safe_sub_func_int32_t_s_s((l_668 < (((l_673[0][8] = (void*)0) != &l_674) >= (l_668 >= (l_679 = (safe_sub_func_int16_t_s_s((safe_unary_minus_func_int16_t_s((-6L))), (*l_656))))))), ((safe_rshift_func_uint16_t_u_u((l_668 != (((*l_674) >= (*g_141)) > 0x9B71L)), (*l_674))) >= g_584)));
            for (g_85 = 8; (g_85 >= (-29)); g_85 = safe_sub_func_int32_t_s_s(g_85, 6))
            {
                int l_686 = (-1L);
                int *l_688 = &l_657;
                unsigned *l_692 = &g_318;
                unsigned **l_691[9] = {&l_692,&l_692,&l_692,&l_692,&l_692,&l_692,&l_692,&l_692,&l_692};
                unsigned ***l_690 = &l_691[7];
                int i;
                if ((safe_sub_func_uint32_t_u_u(l_686, 0L)))
                {
                    int *l_687 = &l_657;
                    (*g_67) = l_687;
                    l_688 = (*g_67);
                }
                else
                {
                    (*l_688) ^= (-1L);
                }
                (*l_690) = l_689;
            }
            (*g_67) = l_693;
            if (((*l_693) > (safe_lshift_func_uint16_t_u_s(((*l_699) = (safe_lshift_func_int16_t_s_s((*l_693), l_698))), (g_374[0] && ((*g_267) || l_700))))))
            {
                int l_703 = (-1L);
                int l_709 = 0x3CD66C7CL;
                int *l_726 = (void*)0;
lbl_725:
                for (l_700 = 0; (l_700 < (-20)); l_700--)
                {
                    if (l_703)
                        break;
                }
                for (l_657 = 11; (l_657 >= 26); ++l_657)
                {
                    unsigned char l_708 = 0xC7L;
                    short *l_713 = &g_274;
                    int l_716 = (-1L);
                    int l_719 = (-1L);
                    int l_720 = (-10L);
                    l_709 |= ((safe_sub_func_uint32_t_u_u(g_366[1], (*l_656))) <= l_708);
                    if ((safe_rshift_func_int16_t_s_u(l_708, (l_712[0][0] != ((**g_292) = l_713)))))
                    {
                        int *l_714 = &l_700;
                        int *l_715[10] = {&l_700,&g_515[2],&g_3,&g_515[2],&l_700,&l_700,&g_515[2],&g_3,&g_515[2],&l_700};
                        int i;
                        (*l_693) = (**l_655);
                        if ((**l_655))
                            break;
                        ++l_722[4][0];
                    }
                    else
                    {
                        if (l_668)
                            goto lbl_725;
                    }
                }
                for (l_679 = 0; (l_679 <= 2); l_679 += 1)
                {
                    for (g_65 = 2; (g_65 >= 0); g_65 -= 1)
                    {
                        (*g_67) = &l_709;
                        (**g_67) = ((*l_693) >= (*p_59));
                        l_726 = ((*g_67) = (*g_67));
                        return g_638;
                    }
                    for (g_475 = 0; (g_475 <= 2); g_475 += 1)
                    {
                        int *l_727 = &g_515[2];
                        (*g_67) = l_727;
                        if ((*l_693))
                            continue;
                    }
                }
                for (g_279 = 0; (g_279 == 10); g_279 = safe_add_func_int16_t_s_s(g_279, 4))
                {
                    unsigned short l_748 = 1UL;
                    int l_754 = (-1L);
                    if (l_709)
                    {
                        const int *l_730 = &g_3;
                        short l_738 = (-1L);
                        unsigned short *l_747 = &g_71[2][0][0];
                        char *l_749 = &g_65;
                        int *l_750 = &l_718;
                        g_731 = l_730;
                        (*l_750) |= (safe_add_func_uint32_t_u_u((*l_693), (((safe_add_func_int32_t_s_s((*g_92), (safe_sub_func_uint8_t_u_u((((*l_699) &= (*l_730)) & ((l_738 == ((safe_sub_func_int16_t_s_s((safe_lshift_func_int8_t_s_u(((*l_749) = (((*l_730) & (*l_730)) == (safe_sub_func_uint32_t_u_u(1UL, (((*p_59) = (safe_lshift_func_uint16_t_u_u(((*l_747) = (*l_674)), (*l_730)))) != l_748))))), 5)), (*l_730))) && 0UL)) & 250UL)), (*l_656))))) <= (*l_693)) | (*l_730))));
                        (*l_750) = (((safe_lshift_func_int8_t_s_s((((((*p_59) && 0x0BL) ^ ((void*)0 != l_753)) == (*l_750)) || 0xC6L), ((*l_750) ^ (**l_655)))) > 4294967290UL) < 0x50F59CA1L);
                    }
                    else
                    {
                        l_754 &= (**g_67);
                        return g_73;
                    }
                }
            }
            else
            {
                unsigned l_757[5] = {0UL,0UL,0UL,0UL,0UL};
                int i;
                (*l_693) = ((safe_lshift_func_uint8_t_u_u((0UL < (*p_59)), 1)) | l_757[4]);
                (*l_693) = (*g_68);
            }
        }
        else
        {
            int l_768 = 0L;
            int * const l_779 = &g_3;
            int *l_781 = &g_15;
            const int *l_784[10] = {&g_515[2],&l_700,(void*)0,&l_700,&g_515[2],&g_515[2],&l_700,(void*)0,&l_700,&g_515[2]};
            int i;
lbl_782:
            (*g_92) &= (*l_656);
            for (l_700 = 0; (l_700 <= 2); l_700 += 1)
            {
                int *l_778[6][7] = {{&g_515[2],(void*)0,&l_657,(void*)0,&g_515[2],&g_515[2],&g_3},{&g_515[0],&g_3,&l_657,&g_515[l_700],(void*)0,(void*)0,&g_515[0]},{&g_515[l_700],&g_515[2],&g_15,(void*)0,(void*)0,&g_15,&g_515[2]},{&g_515[0],&g_515[l_700],&g_3,&g_3,&g_515[1],&g_15,&g_515[2]},{&g_515[2],&g_15,&g_515[2],&g_3,(void*)0,&g_15,(void*)0},{&g_15,(void*)0,(void*)0,&g_15,&g_515[2],&g_515[l_700],&g_3}};
                int i, j;
                (*g_67) = &g_515[l_700];
                if (g_584)
                    goto lbl_758;
                (**g_67) = ((void*)0 != g_759);
                if ((safe_mul_func_uint16_t_u_u(((*g_761)--), g_451[(l_700 + 3)])))
                {
                    int i;
                    (*g_67) = (*g_67);
                    (*g_92) ^= (~(g_451[(l_700 + 2)] > (+(safe_rshift_func_int8_t_s_s(g_451[l_700], (*l_693))))));
                }
                else
                {
                    unsigned l_772 = 0UL;
                    const int l_775 = (-4L);
                    int *l_777 = (void*)0;
                    unsigned *l_786 = &g_638;
                    if ((*g_731))
                        break;
                    if (l_768)
                    {
                        int *l_769 = &g_515[2];
                        int *l_770 = &g_15;
                        int *l_771[6] = {(void*)0,(void*)0,&g_515[0],(void*)0,(void*)0,&g_515[0]};
                        int **l_776[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                        int i;
                        ++l_772;
                        (*g_68) = ((*l_770) ^= (l_768 < (l_775 < g_515[l_700])));
                        l_778[3][2] = (l_777 = ((*g_67) = (void*)0));
                    }
                    else
                    {
                        int **l_780[8] = {(void*)0,(void*)0,&l_778[3][2],(void*)0,(void*)0,&l_778[3][2],(void*)0,(void*)0};
                        const int **l_783 = (void*)0;
                        int i;
                        l_781 = l_779;
                        if (l_668)
                            goto lbl_782;
                        l_784[7] = (*l_655);
                        if (l_785)
                            continue;
                    }
                    if ((((**l_655) ^ (*l_779)) < ((*l_786) = (*l_693))))
                    {
                        (*l_693) |= (*g_731);
                    }
                    else
                    {
                        unsigned short l_787[4][4][6] = {{{65531UL,0xCA52L,65531UL,0xDFD6L,0UL,0xDFD6L},{65531UL,0xCA52L,65531UL,0xDFD6L,0UL,0xDFD6L},{65531UL,0xCA52L,65531UL,0xDFD6L,0UL,0xDFD6L},{65531UL,0xCA52L,65531UL,0xDFD6L,0UL,0xDFD6L}},{{65531UL,0xCA52L,65531UL,0xDFD6L,0UL,0xDFD6L},{65531UL,0xCA52L,65531UL,0xDFD6L,0UL,0xDFD6L},{65531UL,0xCA52L,65531UL,0xDFD6L,0UL,0xDFD6L},{65531UL,0xCA52L,65531UL,0xDFD6L,0UL,0xDFD6L}},{{65531UL,0xCA52L,65531UL,0xDFD6L,0UL,0xDFD6L},{65531UL,0xCA52L,65531UL,0xDFD6L,0UL,0xDFD6L},{65531UL,0xCA52L,65531UL,0xDFD6L,0UL,0xDFD6L},{65531UL,0xCA52L,65531UL,0xDFD6L,0UL,0xDFD6L}},{{65531UL,0xCA52L,65531UL,0xDFD6L,0UL,0xDFD6L},{65531UL,0xCA52L,65531UL,0xDFD6L,0UL,0xDFD6L},{65531UL,0xCA52L,65531UL,0xDFD6L,0UL,0xDFD6L},{65531UL,0xCA52L,65531UL,0xDFD6L,0UL,0xDFD6L}}};
                        int i, j, k;
                        --l_787[2][3][0];
                    }
                }
            }
        }
        for (g_257 = 26; (g_257 >= 19); g_257 = safe_sub_func_uint16_t_u_u(g_257, 7))
        {
            unsigned l_792 = 0x45149762L;
            unsigned short ***l_800 = &g_760;
            int l_820 = 0x98677280L;
            int l_863[2];
            int i;
            for (i = 0; i < 2; i++)
                l_863[i] = 0L;
            if (l_792)
                break;
            if ((**l_655))
                continue;
        }
        (*l_889) = (*l_655);
    }
    return (**l_655);
}







static char * func_60(int * p_61, char * p_62)
{
    const unsigned char l_66[2][2][7] = {{{0x2BL,0x8AL,0x44L,0x28L,0x44L,0x8AL,0x2BL},{0xB2L,0x25L,0x9FL,0x78L,0x28L,0x63L,0x2BL}},{{0x28L,0x2BL,250UL,250UL,0x2BL,0x28L,0xB2L},{0x8AL,250UL,0x9FL,0xB2L,1UL,0x28L,0x28L}}};
    const int **l_69 = (void*)0;
    unsigned short *l_70 = &g_71[0][2][0];
    short *l_72 = &g_73;
    int l_86[2][9][8] = {{{1L,0xD755E4DDL,0x5A7F279EL,0L,0L,0x5A7F279EL,0xD755E4DDL,1L},{(-1L),1L,4L,(-1L),0x406D402EL,(-1L),(-7L),1L},{1L,0x88C485E2L,1L,1L,(-1L),(-1L),1L,0x20513F0FL},{0L,1L,1L,0xD755E4DDL,1L,0x5A7F279EL,1L,0xD755E4DDL},{0x5A7F279EL,(-1L),0x5A7F279EL,(-8L),0x5BA07B4DL,0xE4160578L,0x51F89566L,0x5BA07B4DL},{(-1L),0x51F89566L,1L,(-1L),(-8L),(-7L),0x5BA07B4DL,0x5A7F279EL},{(-1L),0x20513F0FL,(-6L),(-1L),0x5BA07B4DL,0xD755E4DDL,(-7L),(-7L)},{0x5A7F279EL,1L,1L,1L,1L,0x5A7F279EL,1L,(-1L)},{4L,0x51F89566L,(-8L),0x88C485E2L,1L,1L,4L,1L}},{{1L,0x5BA07B4DL,(-6L),0x88C485E2L,(-7L),(-6L),(-1L),(-1L)},{1L,(-7L),0x51F89566L,1L,4L,1L,0x51F89566L,(-7L)},{0x20513F0FL,1L,1L,(-1L),1L,(-8L),(-1L),0x5A7F279EL},{0x88C485E2L,4L,0xD755E4DDL,(-1L),0x20513F0FL,(-6L),(-1L),0x5BA07B4DL},{0x5A7F279EL,(-1L),1L,(-8L),(-1L),0x51F89566L,0x51F89566L,(-1L)},{(-1L),0x51F89566L,0x51F89566L,(-1L),(-8L),1L,(-1L),0x5A7F279EL},{0x5BA07B4DL,(-1L),(-6L),0x20513F0FL,(-1L),0xD755E4DDL,4L,0x20513F0FL},{1L,0x5BA07B4DL,0x51F89566L,0xE4160578L,0x5BA07B4DL,(-8L),0x5A7F279EL,(-1L)},{1L,(-7L),0xE4160578L,(-1L),0xE4160578L,(-7L),1L,(-8L)}}};
    unsigned l_149 = 8UL;
    char *l_154[9][10] = {{&g_65,&g_88,&g_88,&g_65,&g_88,&g_88,&g_65,&g_88,&g_65,&g_88},{&g_65,&g_88,&g_88,&g_65,&g_88,&g_88,&g_65,&g_88,&g_65,&g_88},{&g_65,&g_88,&g_88,&g_65,&g_88,&g_88,&g_65,&g_88,&g_65,&g_88},{&g_65,&g_88,&g_88,&g_65,&g_88,&g_88,&g_65,&g_88,&g_65,&g_88},{&g_65,&g_88,&g_88,&g_65,&g_88,&g_88,&g_65,&g_88,&g_65,&g_88},{&g_65,&g_88,&g_88,&g_65,&g_88,&g_88,&g_65,&g_88,&g_65,&g_88},{&g_65,&g_88,&g_88,&g_65,&g_88,&g_88,&g_65,&g_88,&g_65,&g_88},{&g_65,&g_88,&g_88,&g_65,&g_88,&g_88,&g_65,&g_88,&g_65,&g_88},{&g_65,(void*)0,&g_65,(void*)0,&g_65,(void*)0,&g_65,&g_88,&g_65,&g_88}};
    unsigned l_155 = 0xF1FEEA04L;
    int l_174[4][6][2] = {{{1L,(-1L)},{0x91A48057L,0x16F89097L},{0x9178C7C8L,0xD15A9C58L},{0xD15A9C58L,0xFB3ED897L},{0L,0x1C7262DFL},{(-5L),0x01709B17L}},{{(-2L),0xF3ABBA9BL},{0x16F89097L,1L},{0xFB3ED897L,0x89E89AD7L},{0xF3ABBA9BL,0x89E89AD7L},{0xFB3ED897L,1L},{0x16F89097L,0xF3ABBA9BL}},{{(-2L),0x01709B17L},{(-5L),0x1C7262DFL},{0L,0xFB3ED897L},{0xD15A9C58L,0xD15A9C58L},{0x9178C7C8L,0x16F89097L},{0x91A48057L,(-1L)}},{{1L,(-1L)},{(-5L),1L},{0x01709B17L,0xD75F413FL},{0x01709B17L,1L},{(-5L),(-1L)},{1L,(-1L)}}};
    unsigned short l_207 = 1UL;
    char **l_235 = &l_154[1][0];
    char ***l_234 = &l_235;
    int *l_238 = &l_174[0][2][1];
    char l_262 = 0xD5L;
    char l_304[4] = {0x19L,0x19L,0x19L,0x19L};
    unsigned short l_329 = 1UL;
    int *l_420 = &g_365;
    int l_561[9] = {(-1L),0x1D0EB130L,(-1L),0x1D0EB130L,(-1L),0x1D0EB130L,(-1L),0x1D0EB130L,(-1L)};
    int l_576 = 0xA1FFC2FDL;
    char *l_654 = &g_88;
    int i, j, k;
    return l_654;
}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_2[i][j][k], "g_2[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_13, "g_13", print_hash_value);
    transparent_crc(g_15, "g_15", print_hash_value);
    transparent_crc(g_65, "g_65", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_71[i][j][k], "g_71[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_73, "g_73", print_hash_value);
    transparent_crc(g_85, "g_85", print_hash_value);
    transparent_crc(g_88, "g_88", print_hash_value);
    transparent_crc(g_89, "g_89", print_hash_value);
    transparent_crc(g_124, "g_124", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_153[i][j][k], "g_153[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_222, "g_222", print_hash_value);
    transparent_crc(g_257, "g_257", print_hash_value);
    transparent_crc(g_274, "g_274", print_hash_value);
    transparent_crc(g_275, "g_275", print_hash_value);
    transparent_crc(g_277, "g_277", print_hash_value);
    transparent_crc(g_278, "g_278", print_hash_value);
    transparent_crc(g_279, "g_279", print_hash_value);
    transparent_crc(g_318, "g_318", print_hash_value);
    transparent_crc(g_354, "g_354", print_hash_value);
    transparent_crc(g_365, "g_365", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_366[i], "g_366[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_374[i], "g_374[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_381, "g_381", print_hash_value);
    transparent_crc(g_411, "g_411", print_hash_value);
    transparent_crc(g_440, "g_440", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_451[i], "g_451[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_475, "g_475", print_hash_value);
    transparent_crc(g_514, "g_514", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_515[i], "g_515[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_584, "g_584", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_593[i][j][k], "g_593[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_638, "g_638", print_hash_value);
    transparent_crc(g_675, "g_675", print_hash_value);
    transparent_crc(g_909, "g_909", print_hash_value);
    transparent_crc(g_923, "g_923", print_hash_value);
    transparent_crc(g_942, "g_942", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_1184[i][j], "g_1184[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_1303, "g_1303", print_hash_value);
    transparent_crc(g_1344, "g_1344", print_hash_value);
    transparent_crc(g_1397, "g_1397", print_hash_value);
    transparent_crc(g_1403, "g_1403", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_1711[i], "g_1711[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1715, "g_1715", print_hash_value);
    transparent_crc(g_1772, "g_1772", print_hash_value);
    transparent_crc(g_1783, "g_1783", print_hash_value);
    transparent_crc(g_1794, "g_1794", print_hash_value);
    transparent_crc(g_1805, "g_1805", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
