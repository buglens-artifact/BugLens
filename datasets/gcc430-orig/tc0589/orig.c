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


struct S0 {
   short f0;
   short f1;
   unsigned char f2;
   unsigned char f3;
   signed f4 : 31;
   short f5;
   int f6;
   char f7;
   short f8;
};

struct S1 {
   int f0;
   unsigned f1;
   signed f2 : 13;
   unsigned f3;
   char f4;
};

struct S2 {
   unsigned char f0;
   unsigned short f1;
   signed f2 : 6;
   struct S1 f3;
};

union U3 {
   int f0;
};

union U4 {
   int f0;
   int f1;
};

union U5 {
   char f0;
   unsigned char f1;
   char * f2;
};


static unsigned g_17[10] = {1UL,1UL,0UL,0UL,1UL,1UL,1UL,0UL,0UL,1UL};
static struct S0 g_32 = {7L,-9L,7UL,3UL,-151,0xAB8AL,0L,0x82L,0xC906L};
static char **g_50 = (void*)0;
static union U3 g_53 = {0L};
static char g_64[10] = {0xC4L,0xC4L,0xC4L,0xC4L,0xC4L,0xC4L,0xC4L,0xC4L,0xC4L,0xC4L};
static int g_72 = 0x447E3892L;
static int g_102 = 1L;
static struct S1 g_116 = {0xE268291DL,1UL,39,1UL,-8L};
static union U5 g_119 = {0x24L};
static union U5 *g_118 = &g_119;
static struct S1 g_126 = {-1L,1UL,-20,0x617B476EL,-1L};
static union U4 g_128 = {0L};
static unsigned g_139[3][9][8] = {{{4294967295UL,1UL,0xE6F63E18L,0x43EB0363L,6UL,0xB83498CCL,4294967289UL,1UL},{1UL,0x4916DE7AL,0x1316C4F0L,1UL,0x3390C0CCL,0xE22FAA98L,4294967286UL,4294967290UL},{1UL,0xF002CDD9L,0UL,4294967288UL,1UL,0xE33FDBF3L,0xFFA272E7L,0xE33FDBF3L},{0x4916DE7AL,0xFFA272E7L,0xF002CDD9L,0UL,1UL,0x43EB0363L,1UL,6UL},{0x1316C4F0L,0xE86B1698L,4294967295UL,4294967286UL,4294967295UL,0xB83498CCL,4294967288UL,0UL},{4294967286UL,0xE6F63E18L,4294967295UL,0x075B0AE6L,0x43EB0363L,4294967295UL,1UL,1UL},{4294967295UL,4294967286UL,0xF002CDD9L,6UL,0x4916DE7AL,0x3390C0CCL,0UL,1UL},{9UL,0UL,4294967290UL,0xE33FDBF3L,1UL,1UL,0xE33FDBF3L,4294967290UL},{0UL,0UL,4294967286UL,0UL,1UL,0x51B88579L,0x4916DE7AL,0x075B0AE6L}},{{0xE86B1698L,1UL,4294967288UL,0xE22FAA98L,4294967295UL,4294967289UL,0x3390C0CCL,0x075B0AE6L},{1UL,0x075B0AE6L,0xC83836BFL,0UL,0xE33FDBF3L,0xF002CDD9L,4294967289UL,4294967290UL},{0x43EB0363L,0xE22FAA98L,0UL,0xE33FDBF3L,0xB83498CCL,0UL,0x1316C4F0L,1UL},{1UL,0x061D6041L,4294967289UL,6UL,4294967289UL,0x061D6041L,1UL,1UL},{0xFFA272E7L,0x4916DE7AL,1UL,0x075B0AE6L,0UL,4294967295UL,0UL,0UL},{4294967290UL,0UL,1UL,4294967286UL,0UL,0xD753EC00L,1UL,6UL},{0xFFA272E7L,1UL,1UL,0x075B0AE6L,0x4916DE7AL,0x51B88579L,1UL,0UL},{0UL,0xE33FDBF3L,0x51B88579L,0UL,0xE6F63E18L,4294967295UL,4294967295UL,0xE6F63E18L},{0x1316C4F0L,0xE22FAA98L,0xE22FAA98L,0x1316C4F0L,1UL,0xC83836BFL,1UL,4294967289UL}},{{0xF002CDD9L,0xB83498CCL,4294967286UL,4294967286UL,0UL,0xE33FDBF3L,0x061D6041L,4294967295UL},{0x061D6041L,0xB83498CCL,0UL,0xE86B1698L,0UL,0xC83836BFL,0xE6F63E18L,4294967288UL},{1UL,0xE22FAA98L,1UL,0x43EB0363L,0xF002CDD9L,4294967295UL,6UL,0UL},{1UL,0xE33FDBF3L,0xC83836BFL,0x51B88579L,1UL,0x51B88579L,0xC83836BFL,0xE33FDBF3L},{4294967286UL,1UL,0UL,0UL,0x1316C4F0L,0x3390C0CCL,0xD753EC00L,9UL},{0xC83836BFL,4294967290UL,0UL,1UL,4294967286UL,0UL,0xD753EC00L,1UL},{4294967286UL,1UL,0UL,0x3390C0CCL,4294967295UL,0xD753EC00L,0xC83836BFL,0xF002CDD9L},{4294967295UL,0xD753EC00L,0xC83836BFL,0xF002CDD9L,9UL,0x075B0AE6L,6UL,6UL},{4294967289UL,0UL,1UL,1UL,0UL,4294967289UL,0xE6F63E18L,0xE86B1698L}}};
static struct S2 g_147 = {5UL,0x7242L,-1,{1L,4294967295UL,25,4294967292UL,-1L}};
static struct S2 g_152 = {0x91L,0UL,2,{0xE5584E04L,1UL,17,0xC28B900DL,6L}};
static union U3 *g_167 = &g_53;
static int *g_185 = &g_152.f3.f0;
static struct S0 g_195[2][6] = {{{-1L,-1L,0x92L,254UL,-24044,0x64B6L,0x51B0F9FAL,6L,0L},{-1L,-1L,0x92L,254UL,-24044,0x64B6L,0x51B0F9FAL,6L,0L},{-1L,-1L,0x92L,254UL,-24044,0x64B6L,0x51B0F9FAL,6L,0L},{-1L,-1L,0x92L,254UL,-24044,0x64B6L,0x51B0F9FAL,6L,0L},{-1L,-1L,0x92L,254UL,-24044,0x64B6L,0x51B0F9FAL,6L,0L},{-1L,-1L,0x92L,254UL,-24044,0x64B6L,0x51B0F9FAL,6L,0L}},{{-1L,-1L,0x92L,254UL,-24044,0x64B6L,0x51B0F9FAL,6L,0L},{-1L,-1L,0x92L,254UL,-24044,0x64B6L,0x51B0F9FAL,6L,0L},{-1L,-1L,0x92L,254UL,-24044,0x64B6L,0x51B0F9FAL,6L,0L},{-1L,-1L,0x92L,254UL,-24044,0x64B6L,0x51B0F9FAL,6L,0L},{-1L,-1L,0x92L,254UL,-24044,0x64B6L,0x51B0F9FAL,6L,0L},{-1L,-1L,0x92L,254UL,-24044,0x64B6L,0x51B0F9FAL,6L,0L}}};
static struct S0 g_197[2] = {{0xB2E2L,-1L,1UL,252UL,42152,0xE2A8L,-1L,-1L,0xA335L},{0xB2E2L,-1L,1UL,252UL,42152,0xE2A8L,-1L,-1L,0xA335L}};
static struct S0 *g_219[3] = {&g_195[1][0],&g_195[1][0],&g_195[1][0]};
static struct S0 **g_218 = &g_219[2];
static struct S1 *g_265 = (void*)0;
static struct S2 g_295[4][4] = {{{1UL,65535UL,-0,{9L,4294967288UL,3,0x8A6A471CL,1L}},{1UL,65535UL,-0,{9L,4294967288UL,3,0x8A6A471CL,1L}},{1UL,65535UL,-0,{9L,4294967288UL,3,0x8A6A471CL,1L}},{1UL,65535UL,-0,{9L,4294967288UL,3,0x8A6A471CL,1L}}},{{1UL,65535UL,-0,{9L,4294967288UL,3,0x8A6A471CL,1L}},{1UL,65535UL,-0,{9L,4294967288UL,3,0x8A6A471CL,1L}},{1UL,65535UL,-0,{9L,4294967288UL,3,0x8A6A471CL,1L}},{1UL,65535UL,-0,{9L,4294967288UL,3,0x8A6A471CL,1L}}},{{1UL,65535UL,-0,{9L,4294967288UL,3,0x8A6A471CL,1L}},{1UL,65535UL,-0,{9L,4294967288UL,3,0x8A6A471CL,1L}},{1UL,65535UL,-0,{9L,4294967288UL,3,0x8A6A471CL,1L}},{1UL,65535UL,-0,{9L,4294967288UL,3,0x8A6A471CL,1L}}},{{1UL,65535UL,-0,{9L,4294967288UL,3,0x8A6A471CL,1L}},{1UL,65535UL,-0,{9L,4294967288UL,3,0x8A6A471CL,1L}},{1UL,65535UL,-0,{9L,4294967288UL,3,0x8A6A471CL,1L}},{1UL,65535UL,-0,{9L,4294967288UL,3,0x8A6A471CL,1L}}}};
static struct S2 *g_294[6][3][2] = {{{&g_152,&g_147},{&g_295[0][0],&g_295[0][0]},{&g_152,&g_295[0][0]}},{{&g_295[0][0],&g_147},{&g_152,&g_295[0][0]},{&g_152,&g_152}},{{&g_295[0][0],&g_147},{&g_295[0][0],&g_152},{&g_152,&g_295[0][0]}},{{&g_152,&g_147},{&g_295[0][0],&g_295[0][0]},{&g_152,&g_295[0][0]}},{{&g_295[0][0],&g_147},{&g_152,&g_295[0][0]},{&g_152,&g_152}},{{&g_295[0][0],&g_147},{&g_295[0][0],&g_152},{&g_152,&g_295[0][0]}}};
static struct S2 **g_306 = &g_294[1][1][1];
static struct S2 ***g_305[7] = {&g_306,&g_306,&g_306,&g_306,&g_306,&g_306,&g_306};
static unsigned short *g_317[6][10][4] = {{{&g_147.f1,&g_147.f1,&g_147.f1,&g_147.f1},{&g_147.f1,&g_147.f1,&g_147.f1,&g_147.f1},{&g_147.f1,&g_147.f1,&g_147.f1,&g_147.f1},{&g_147.f1,&g_147.f1,&g_147.f1,&g_147.f1},{&g_147.f1,&g_147.f1,&g_147.f1,&g_147.f1},{&g_147.f1,&g_147.f1,&g_147.f1,&g_147.f1},{&g_147.f1,&g_147.f1,&g_147.f1,&g_147.f1},{&g_147.f1,&g_147.f1,&g_147.f1,&g_147.f1},{&g_147.f1,&g_147.f1,&g_147.f1,&g_147.f1},{&g_147.f1,&g_147.f1,&g_147.f1,&g_147.f1}},{{&g_147.f1,&g_147.f1,&g_147.f1,&g_147.f1},{&g_147.f1,&g_147.f1,&g_147.f1,&g_147.f1},{&g_147.f1,&g_147.f1,&g_147.f1,&g_147.f1},{&g_147.f1,&g_147.f1,&g_147.f1,&g_147.f1},{&g_147.f1,&g_147.f1,&g_147.f1,&g_147.f1},{&g_147.f1,&g_147.f1,&g_147.f1,&g_147.f1},{&g_147.f1,&g_147.f1,&g_147.f1,&g_147.f1},{&g_147.f1,&g_147.f1,&g_147.f1,&g_147.f1},{&g_147.f1,&g_147.f1,&g_147.f1,&g_147.f1},{&g_147.f1,&g_147.f1,&g_147.f1,&g_147.f1}},{{&g_147.f1,&g_147.f1,&g_147.f1,&g_147.f1},{&g_147.f1,&g_147.f1,&g_147.f1,&g_147.f1},{&g_147.f1,&g_147.f1,&g_147.f1,&g_147.f1},{&g_147.f1,&g_147.f1,&g_147.f1,&g_147.f1},{&g_147.f1,&g_147.f1,&g_147.f1,&g_147.f1},{&g_147.f1,&g_147.f1,&g_147.f1,&g_147.f1},{&g_147.f1,&g_147.f1,&g_147.f1,&g_147.f1},{&g_147.f1,&g_147.f1,&g_147.f1,&g_147.f1},{&g_147.f1,&g_147.f1,&g_147.f1,&g_147.f1},{&g_147.f1,&g_147.f1,&g_147.f1,&g_147.f1}},{{&g_147.f1,&g_147.f1,&g_147.f1,&g_147.f1},{&g_147.f1,&g_147.f1,&g_147.f1,&g_147.f1},{&g_147.f1,&g_147.f1,&g_147.f1,&g_147.f1},{&g_147.f1,&g_147.f1,&g_147.f1,&g_147.f1},{&g_147.f1,&g_147.f1,&g_147.f1,&g_147.f1},{&g_147.f1,&g_147.f1,&g_147.f1,&g_147.f1},{&g_147.f1,&g_147.f1,&g_147.f1,&g_147.f1},{&g_147.f1,&g_147.f1,&g_147.f1,&g_147.f1},{&g_147.f1,&g_147.f1,&g_147.f1,&g_147.f1},{&g_147.f1,&g_147.f1,&g_147.f1,&g_147.f1}},{{&g_147.f1,&g_147.f1,&g_147.f1,&g_147.f1},{&g_147.f1,&g_147.f1,&g_147.f1,&g_147.f1},{&g_147.f1,&g_147.f1,&g_147.f1,&g_147.f1},{&g_147.f1,&g_147.f1,&g_147.f1,&g_147.f1},{&g_147.f1,&g_147.f1,&g_147.f1,&g_147.f1},{&g_147.f1,&g_147.f1,&g_147.f1,&g_147.f1},{&g_147.f1,&g_147.f1,&g_147.f1,&g_147.f1},{&g_147.f1,&g_147.f1,&g_147.f1,&g_147.f1},{&g_147.f1,&g_147.f1,&g_147.f1,&g_147.f1},{&g_147.f1,&g_147.f1,&g_147.f1,&g_147.f1}},{{&g_147.f1,&g_147.f1,&g_147.f1,&g_147.f1},{&g_147.f1,&g_147.f1,&g_147.f1,&g_147.f1},{&g_147.f1,&g_147.f1,&g_147.f1,&g_147.f1},{&g_147.f1,&g_147.f1,&g_147.f1,&g_147.f1},{&g_147.f1,&g_147.f1,&g_147.f1,&g_147.f1},{&g_147.f1,&g_147.f1,&g_147.f1,&g_147.f1},{&g_147.f1,&g_147.f1,&g_147.f1,&g_147.f1},{&g_147.f1,&g_147.f1,&g_147.f1,&g_147.f1},{&g_147.f1,&g_147.f1,&g_147.f1,&g_147.f1},{&g_147.f1,&g_147.f1,&g_147.f1,&g_147.f1}}};
static struct S0 ****g_365 = (void*)0;
static int *g_385 = (void*)0;



static struct S2 func_1(void);
static int * func_2(short p_3, short p_4, union U5 p_5, unsigned char p_6);
static short func_7(short p_8);
static char func_26(struct S0 p_27, char * p_28, int * p_29, union U3 p_30, union U3 p_31);
static char * func_33(char * p_34);
static unsigned func_38(struct S0 p_39);
static struct S0 func_40(struct S2 p_41, struct S0 p_42, struct S1 p_43, struct S0 p_44);
static int * func_54(unsigned char p_55);
static struct S1 func_58(unsigned p_59, int p_60, struct S0 p_61, char p_62);
static char func_65(union U5 p_66);
static struct S2 func_1(void)
{
    char *l_35 = &g_32.f7;
    union U3 l_386 = {0xFE52DBB7L};
    unsigned char *l_391 = &g_195[0][3].f3;
    unsigned short l_392 = 0x3BF2L;
    unsigned char *l_393[7][7] = {{&g_195[0][3].f2,&g_152.f0,&g_152.f0,&g_195[0][3].f2,&g_119.f1,&g_195[0][3].f2,&g_152.f0},{&g_295[0][0].f0,&g_195[0][3].f2,&g_119.f1,&g_32.f2,&g_119.f1,&g_195[0][3].f2,&g_295[0][0].f0},{&g_119.f1,&g_152.f0,&g_152.f0,&g_152.f0,&g_119.f1,&g_119.f1,&g_152.f0},{(void*)0,(void*)0,(void*)0,&g_295[0][0].f0,&g_119.f1,&g_152.f0,&g_119.f1},{&g_152.f0,&g_119.f1,&g_152.f0,&g_152.f0,&g_119.f1,&g_152.f0,&g_119.f1},{(void*)0,&g_295[0][0].f0,&g_119.f1,&g_152.f0,&g_119.f1,&g_152.f0,&g_119.f1},{&g_119.f1,&g_119.f1,&g_152.f0,&g_152.f0,&g_152.f0,&g_119.f1,&g_119.f1}};
    short l_394 = 1L;
    unsigned short l_395[5];
    union U5 l_399 = {-6L};
    int **l_420 = (void*)0;
    int **l_421 = &g_385;
    struct S2 l_422 = {248UL,0xCD0AL,1,{0xB4CB2677L,0x693CCDD7L,39,1UL,-1L}};
    int i, j;
    for (i = 0; i < 5; i++)
        l_395[i] = 0x578FL;
    (*l_421) = func_2(func_7((safe_sub_func_uint16_t_u_u(((safe_lshift_func_int16_t_s_u((!(safe_mod_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u(g_17[4], (safe_sub_func_int32_t_s_s(g_17[4], g_17[4])))), ((g_17[4] != (safe_add_func_uint8_t_u_u((l_386.f0 = (safe_mod_func_int16_t_s_s(((safe_mul_func_int16_t_s_s((0x02L <= ((*l_391) = (func_26(g_32, func_33(l_35), g_385, l_386, l_386) >= g_295[0][0].f0))), g_32.f3)) >= l_392), g_139[1][2][7]))), l_394))) & l_395[2])))), 4)) == g_17[4]), 0x8EE7L))), g_32.f6, l_399, g_32.f2);
    return l_422;
}







static int * func_2(short p_3, short p_4, union U5 p_5, unsigned char p_6)
{
    char *l_401 = &g_147.f3.f4;
    int l_406 = 0xFCC43FD2L;
    struct S1 *l_410 = &g_126;
    int *l_414 = &g_295[0][0].f3.f0;
    int *l_415 = &g_116.f0;
    for (g_152.f0 = 3; (g_152.f0 <= 9); g_152.f0 += 1)
    {
        struct S0 l_400 = {0x7D29L,0x63CFL,255UL,0x79L,15705,0x3B5AL,0x2715FB80L,0x2EL,0x8250L};
        int *l_402 = (void*)0;
        union U3 l_403 = {-1L};
        struct S1 l_407 = {0x6FE87BB7L,0x7FB6F480L,32,0xE8B42C1FL,6L};
        struct S1 **l_411 = &g_265;
        for (g_116.f0 = 7; (g_116.f0 >= 0); g_116.f0 -= 1)
        {
            union U3 l_404 = {-7L};
            int *l_405 = (void*)0;
            struct S1 *l_408 = &g_126;
            char l_409 = 0xF8L;
            int i;
            l_406 = func_26(l_400, l_401, l_402, l_403, (l_404 = ((*g_167) = l_403)));
            g_185 = &l_406;
            (*l_408) = l_407;
            l_406 = (l_409 = (g_17[(g_116.f0 + 2)] && l_406));
        }
        (*l_411) = l_410;
        for (g_32.f5 = 9; (g_32.f5 >= 2); g_32.f5 -= 1)
        {
            int *l_412 = (void*)0;
            int *l_413 = &g_197[1].f6;
            int i;
            (*l_413) = (g_17[g_152.f0] && ((*l_401) = 0x4BL));
            return &g_102;
        }
    }
    l_406 = 1L;
    (*l_415) = ((*l_414) = l_406);
    for (g_152.f3.f0 = 28; (g_152.f3.f0 >= 8); g_152.f3.f0 = safe_sub_func_uint16_t_u_u(g_152.f3.f0, 6))
    {
        int *l_418 = &g_128.f0;
        int **l_419 = &l_418;
        (*l_419) = l_418;
        for (g_128.f0 = 0; (g_128.f0 <= 6); g_128.f0 += 1)
        {
            return &g_102;
        }
        if ((*l_418))
            continue;
    }
    return &g_102;
}







static short func_7(short p_8)
{
    unsigned l_398 = 8UL;
    for (g_32.f1 = 0; (g_32.f1 > 29); g_32.f1++)
    {
        return l_398;
    }
    return g_32.f3;
}







static char func_26(struct S0 p_27, char * p_28, int * p_29, union U3 p_30, union U3 p_31)
{
    struct S0 *l_387 = &g_32;
    struct S1 *l_388[10][9] = {{(void*)0,&g_126,&g_126,(void*)0,&g_152.f3,&g_116,(void*)0,&g_152.f3,&g_152.f3},{&g_152.f3,&g_126,(void*)0,&g_126,&g_152.f3,(void*)0,&g_116,&g_116,&g_152.f3},{&g_147.f3,&g_116,&g_152.f3,&g_116,&g_147.f3,(void*)0,(void*)0,&g_116,&g_152.f3},{&g_147.f3,&g_152.f3,(void*)0,(void*)0,(void*)0,(void*)0,&g_126,&g_126,&g_126},{(void*)0,&g_152.f3,(void*)0,(void*)0,&g_152.f3,(void*)0,(void*)0,&g_147.f3,(void*)0},{&g_152.f3,&g_152.f3,&g_126,(void*)0,&g_126,&g_152.f3,(void*)0,&g_116,&g_116},{(void*)0,&g_152.f3,&g_152.f3,&g_116,&g_152.f3,&g_152.f3,(void*)0,(void*)0,&g_126},{(void*)0,&g_116,&g_152.f3,(void*)0,&g_116,(void*)0,&g_126,&g_152.f3,(void*)0},{(void*)0,(void*)0,&g_126,&g_152.f3,&g_152.f3,&g_126,(void*)0,(void*)0,&g_295[0][0].f3},{(void*)0,&g_152.f3,(void*)0,&g_152.f3,&g_152.f3,&g_295[0][0].f3,&g_152.f3,&g_116,(void*)0}};
    struct S1 **l_389 = &l_388[7][1];
    int l_390[3];
    int i, j;
    for (i = 0; i < 3; i++)
        l_390[i] = 0xE4CC1448L;
    l_387 = l_387;
    (*l_389) = l_388[7][1];
    return l_390[2];
}







static char * func_33(char * p_34)
{
    struct S2 l_45 = {9UL,65535UL,5,{0x0EC31937L,0xA8781562L,14,5UL,-7L}};
    struct S0 l_46 = {1L,0x8E20L,0UL,246UL,12445,0L,-6L,0x40L,-1L};
    int l_309[4];
    char l_313[8][10][1] = {{{(-1L)},{1L},{0xDDL},{1L},{(-1L)},{(-4L)},{(-1L)},{1L},{0xDDL},{1L}},{{(-1L)},{(-4L)},{(-1L)},{1L},{0xDDL},{1L},{(-1L)},{(-4L)},{(-1L)},{1L}},{{0xDDL},{1L},{(-1L)},{(-4L)},{(-1L)},{1L},{0xDDL},{1L},{(-1L)},{(-4L)}},{{(-1L)},{1L},{0xDDL},{1L},{(-1L)},{(-4L)},{(-1L)},{1L},{0xDDL},{1L}},{{(-1L)},{(-4L)},{(-1L)},{1L},{0xDDL},{1L},{(-1L)},{(-4L)},{(-1L)},{1L}},{{0xDDL},{1L},{(-1L)},{(-4L)},{(-1L)},{1L},{0xDDL},{1L},{(-1L)},{(-4L)}},{{(-1L)},{1L},{0xDDL},{1L},{(-1L)},{(-4L)},{(-1L)},{1L},{0xDDL},{1L}},{{(-1L)},{(-4L)},{(-1L)},{1L},{0xDDL},{1L},{(-1L)},{(-4L)},{(-1L)},{1L}}};
    int *l_314 = &g_126.f0;
    unsigned short *l_315[6] = {&l_45.f1,&g_152.f1,&l_45.f1,&l_45.f1,&g_152.f1,&l_45.f1};
    unsigned short l_322 = 0xE874L;
    unsigned l_331[9] = {0x08A8FABBL,0x08A8FABBL,0x08A8FABBL,0x08A8FABBL,0x08A8FABBL,0x08A8FABBL,0x08A8FABBL,0x08A8FABBL,0x08A8FABBL};
    union U5 *l_335 = &g_119;
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_309[i] = (-3L);
    if ((safe_mod_func_uint32_t_u_u(func_38((l_46 = func_40(l_45, l_46, l_45.f3, l_46))), l_309[1])))
    {
        struct S0 *l_310 = &g_197[1];
        (*g_185) = 0x08722E18L;
        (*g_218) = l_310;
        for (l_45.f1 = (-11); (l_45.f1 <= 60); l_45.f1++)
        {
            if (l_45.f3.f4)
                break;
            l_314 = func_54(l_313[3][2][0]);
        }
    }
    else
    {
        unsigned short **l_316 = &l_315[2];
        unsigned short *l_319 = &l_45.f1;
        unsigned short **l_318 = &l_319;
        union U5 l_323 = {5L};
        struct S2 **l_329 = (void*)0;
        int l_334 = 1L;
        int *l_341 = &g_295[0][0].f3.f0;
        struct S0 ***l_368 = &g_218;
        struct S0 ****l_367[3][6] = {{&l_368,&l_368,&l_368,&l_368,&l_368,&l_368},{&l_368,&l_368,&l_368,&l_368,&l_368,&l_368},{&l_368,&l_368,&l_368,&l_368,&l_368,&l_368}};
        struct S2 *l_376 = &l_45;
        union U4 *l_379 = &g_128;
        struct S1 l_382 = {0xDB7B4E78L,0UL,-35,7UL,0L};
        int **l_384 = &g_185;
        int i, j;
        if ((0x8B6AEAC0L & (((*l_316) = l_315[2]) == ((*l_318) = (g_317[0][1][2] = (void*)0)))))
        {
            char l_326 = (-2L);
            struct S2 **l_330 = &g_294[1][0][0];
            int l_363 = 0x2F24E1A2L;
            struct S1 *l_383 = &l_45.f3;
            if ((((0x96D1D10DL ^ (*l_314)) == (((((safe_mul_func_int8_t_s_s((((l_322 == 0xCDL) == func_65((g_119 = l_323))) <= 0xDCL), 0x63L)) | (safe_lshift_func_int8_t_s_u((0xE632L <= l_326), l_326))) > l_326) ^ g_152.f0) == l_326)) | l_326))
            {
                int **l_332[1];
                int l_333[10][9] = {{0L,0x2CE8A9F1L,2L,0x2CE8A9F1L,0L,1L,1L,2L,0L},{(-1L),0L,(-1L),0xB3F0954DL,0x0695E0FEL,(-1L),8L,(-4L),3L},{0x2CE8A9F1L,0xA825F128L,1L,0xB4D982BFL,0xB4D982BFL,1L,0xA825F128L,0x2CE8A9F1L,0xA825F128L},{0x91415BD8L,9L,8L,0xB3F0954DL,(-10L),1L,0x0695E0FEL,1L,(-10L)},{0L,0xA825F128L,0xA825F128L,0L,0x2CE8A9F1L,2L,0x2CE8A9F1L,0L,0xA825F128L},{3L,0L,0x0695E0FEL,9L,0xA58D8C05L,9L,0x0695E0FEL,0L,3L},{0xA825F128L,0L,0x2CE8A9F1L,2L,0x2CE8A9F1L,0L,0xA825F128L,0xA825F128L,0L},{(-10L),1L,0x0695E0FEL,1L,(-10L),0xB3F0954DL,8L,9L,0x91415BD8L},{0xA825F128L,0x2CE8A9F1L,0xA825F128L,1L,0xB4D982BFL,0xB4D982BFL,1L,0xA825F128L,0x2CE8A9F1L},{3L,(-4L),8L,(-1L),0x0695E0FEL,0xB3F0954DL,(-1L),0L,(-1L)}};
                int i, j;
                for (i = 0; i < 1; i++)
                    l_332[i] = &l_314;
                l_314 = (g_185 = func_54((safe_add_func_uint32_t_u_u((l_329 != l_330), (l_331[5] && 0xAB99L)))));
                l_334 = ((((*l_314) = 0xD9EDL) & l_333[0][6]) <= l_326);
                g_185 = &g_102;
            }
            else
            {
                union U5 **l_336 = &l_335;
                int **l_337 = &g_185;
                (*l_336) = l_335;
                (*l_337) = &l_309[2];
            }
            if ((l_326 == ((safe_mod_func_uint8_t_u_u(g_195[0][3].f7, (l_334 && func_65((*l_335))))) < l_326)))
            {
                int *l_340 = (void*)0;
                unsigned short *l_358 = &g_147.f1;
                short *l_361 = &l_46.f0;
                short *l_362 = &l_46.f8;
                struct S0 *****l_366 = &g_365;
                l_341 = l_340;
                (*g_185) = (safe_lshift_func_uint16_t_u_u(((*l_314) && (safe_sub_func_uint32_t_u_u((safe_mod_func_int8_t_s_s((safe_add_func_int8_t_s_s((safe_add_func_int32_t_s_s((safe_add_func_uint16_t_u_u((*l_314), (l_363 = ((*l_358) = ((*l_314) && ((*l_314) < ((*l_314) | (safe_mod_func_int16_t_s_s((*l_314), (safe_mul_func_int16_t_s_s(((g_317[0][1][3] = g_317[5][3][0]) != l_358), ((*l_362) = ((*l_361) = (safe_rshift_func_uint16_t_u_u(g_126.f2, g_17[4]))))))))))))))), g_32.f3)), (*l_314))), (*l_314))), 0UL))), g_197[1].f3));
                (*l_314) = (0UL & ((safe_unary_minus_func_uint32_t_u(l_326)) == (((*l_366) = g_365) != l_367[1][5])));
            }
            else
            {
                union U5 l_369 = {0x18L};
                struct S2 *l_373 = &g_147;
                for (g_128.f0 = 0; (g_128.f0 <= 1); g_128.f0 += 1)
                {
                    struct S2 l_370 = {0x6EL,0x007AL,4,{1L,0x0B496DEBL,-67,0UL,0x44L}};
                    if ((func_65(l_369) & (*p_34)))
                    {
                        struct S2 l_371 = {0x43L,0UL,-7,{0xBA2F5ED9L,0xBE40C4DFL,-60,4294967295UL,0x0DL}};
                        int **l_372[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                        int i;
                        l_371 = l_370;
                        (*g_185) = (0xEF2E33E0L < l_363);
                        l_314 = &l_309[1];
                        (*l_341) = (*g_185);
                    }
                    else
                    {
                        int **l_374 = (void*)0;
                        int **l_375 = &l_314;
                        (*g_306) = l_373;
                        if ((*l_341))
                            continue;
                        g_185 = ((*l_375) = &l_334);
                        if ((*g_185))
                            continue;
                    }
                    for (l_45.f0 = 0; (l_45.f0 <= 1); l_45.f0 += 1)
                    {
                        (*g_306) = l_376;
                    }
                }
            }
            for (g_126.f4 = 18; (g_126.f4 != (-22)); g_126.f4--)
            {
                union U4 **l_380 = (void*)0;
                union U4 **l_381 = &l_379;
                (*l_381) = l_379;
                for (g_147.f3.f1 = 0; g_147.f3.f1 < 2; g_147.f3.f1 += 1)
                {
                    for (g_152.f3.f3 = 0; g_152.f3.f3 < 6; g_152.f3.f3 += 1)
                    {
                        struct S0 tmp = {-8L,-1L,0x5BL,0xF7L,-2933,0x6AD4L,5L,1L,0x9739L};
                        g_195[g_147.f3.f1][g_152.f3.f3] = tmp;
                    }
                }
            }
            (*l_383) = l_382;
        }
        else
        {
            return p_34;
        }
        (*l_384) = func_54(g_126.f4);
    }
    return p_34;
}







static unsigned func_38(struct S0 p_39)
{
    union U5 l_210 = {0xBAL};
    union U3 **l_211 = &g_167;
    struct S0 *l_215 = (void*)0;
    struct S0 **l_214[8];
    struct S0 ***l_213 = &l_214[3];
    struct S0 ***l_217 = &l_214[6];
    union U4 *l_232 = &g_128;
    int *l_251 = &g_197[1].f6;
    char *l_272[10][10][2] = {{{&g_64[0],&l_210.f0},{&g_64[0],&g_64[0]},{&l_210.f0,&g_64[0]},{&g_64[0],&l_210.f0},{&g_64[0],&g_64[0]},{&l_210.f0,&g_64[0]},{&g_64[0],&l_210.f0},{&g_64[0],&g_64[0]},{&l_210.f0,&g_64[0]},{&g_64[0],&l_210.f0}},{{&g_64[0],&g_64[0]},{&l_210.f0,&g_64[0]},{&g_64[0],&l_210.f0},{&g_64[0],&g_64[0]},{&l_210.f0,&g_64[0]},{&g_64[0],&l_210.f0},{&g_64[0],&g_64[0]},{&l_210.f0,&g_64[0]},{&g_64[0],&l_210.f0},{&g_64[0],&g_64[0]}},{{&l_210.f0,&g_64[0]},{&g_64[0],&l_210.f0},{&g_64[0],&g_64[0]},{&l_210.f0,&g_64[0]},{&g_64[0],&l_210.f0},{&g_64[0],&g_64[0]},{&l_210.f0,&g_64[0]},{&g_64[0],&l_210.f0},{&g_64[0],&g_64[0]},{&l_210.f0,&g_64[0]}},{{&g_64[0],&l_210.f0},{&g_64[0],&g_64[0]},{&l_210.f0,&g_64[0]},{&g_64[0],&l_210.f0},{&g_64[0],&g_64[0]},{&l_210.f0,&g_64[0]},{&g_64[0],&l_210.f0},{&g_64[0],&g_64[0]},{&l_210.f0,&g_64[0]},{&g_64[0],&l_210.f0}},{{&g_64[0],&g_64[0]},{&l_210.f0,&g_64[0]},{&g_64[0],&l_210.f0},{&g_64[0],&g_64[0]},{&l_210.f0,&g_64[0]},{&g_64[0],&l_210.f0},{&g_64[0],&g_64[0]},{&l_210.f0,&g_64[0]},{&g_64[0],&l_210.f0},{&g_64[0],&g_64[0]}},{{&l_210.f0,&l_210.f0},{&l_210.f0,&g_64[2]},{&l_210.f0,&l_210.f0},{&g_64[2],&l_210.f0},{&l_210.f0,&g_64[2]},{&l_210.f0,&l_210.f0},{&g_64[2],&l_210.f0},{&l_210.f0,&g_64[2]},{&l_210.f0,&l_210.f0},{&g_64[2],&l_210.f0}},{{&l_210.f0,&g_64[2]},{&l_210.f0,&l_210.f0},{&g_64[2],&l_210.f0},{&l_210.f0,&g_64[2]},{&l_210.f0,&l_210.f0},{&g_64[2],&l_210.f0},{&l_210.f0,&g_64[2]},{&l_210.f0,&l_210.f0},{&g_64[2],&l_210.f0},{&l_210.f0,&g_64[2]}},{{&l_210.f0,&l_210.f0},{&g_64[2],&l_210.f0},{&l_210.f0,&g_64[2]},{&l_210.f0,&l_210.f0},{&g_64[2],&l_210.f0},{&l_210.f0,&g_64[2]},{&l_210.f0,&l_210.f0},{&g_64[2],&l_210.f0},{&l_210.f0,&g_64[2]},{&l_210.f0,&l_210.f0}},{{&g_64[2],&l_210.f0},{&l_210.f0,&g_64[2]},{&l_210.f0,&l_210.f0},{&g_64[2],&l_210.f0},{&l_210.f0,&g_64[2]},{&l_210.f0,&l_210.f0},{&g_64[2],&l_210.f0},{&l_210.f0,&g_64[2]},{&l_210.f0,&l_210.f0},{&g_64[2],&l_210.f0}},{{&l_210.f0,&g_64[2]},{&l_210.f0,&l_210.f0},{&g_64[2],&l_210.f0},{&l_210.f0,&g_64[2]},{&l_210.f0,&l_210.f0},{&g_64[2],&l_210.f0},{&l_210.f0,&g_64[2]},{&l_210.f0,&l_210.f0},{&g_64[2],&l_210.f0},{&l_210.f0,&g_64[2]}}};
    char **l_271 = &l_272[6][9][0];
    union U5 l_285 = {0x3FL};
    int l_287 = 0L;
    int i, j, k;
    for (i = 0; i < 8; i++)
        l_214[i] = &l_215;
    for (g_152.f3.f1 = (-28); (g_152.f3.f1 != 13); g_152.f3.f1 = safe_add_func_uint8_t_u_u(g_152.f3.f1, 3))
    {
        struct S0 *l_207 = &g_197[1];
        struct S0 **l_206 = &l_207;
        (*l_206) = &g_195[0][3];
    }
    if ((safe_sub_func_uint8_t_u_u(255UL, func_65(l_210))))
    {
        union U3 ***l_212 = &l_211;
        struct S0 ****l_216[7][9][4] = {{{&l_213,&l_213,(void*)0,&l_213},{&l_213,&l_213,&l_213,(void*)0},{&l_213,(void*)0,&l_213,(void*)0},{&l_213,&l_213,&l_213,&l_213},{&l_213,&l_213,(void*)0,&l_213},{&l_213,&l_213,&l_213,&l_213},{&l_213,&l_213,(void*)0,&l_213},{&l_213,&l_213,&l_213,&l_213},{&l_213,&l_213,&l_213,&l_213}},{{&l_213,&l_213,&l_213,&l_213},{&l_213,&l_213,(void*)0,&l_213},{&l_213,&l_213,&l_213,&l_213},{&l_213,&l_213,&l_213,&l_213},{&l_213,&l_213,(void*)0,&l_213},{&l_213,&l_213,&l_213,(void*)0},{&l_213,(void*)0,&l_213,(void*)0},{&l_213,&l_213,&l_213,&l_213},{&l_213,&l_213,(void*)0,&l_213}},{{&l_213,&l_213,&l_213,&l_213},{&l_213,&l_213,(void*)0,&l_213},{&l_213,&l_213,&l_213,&l_213},{&l_213,&l_213,&l_213,&l_213},{&l_213,&l_213,&l_213,&l_213},{&l_213,&l_213,&l_213,&l_213},{&l_213,&l_213,&l_213,&l_213},{(void*)0,&l_213,&l_213,(void*)0},{&l_213,&l_213,&l_213,&l_213}},{{&l_213,&l_213,&l_213,&l_213},{&l_213,&l_213,(void*)0,&l_213},{&l_213,&l_213,&l_213,&l_213},{&l_213,&l_213,&l_213,(void*)0},{&l_213,&l_213,&l_213,&l_213},{&l_213,&l_213,&l_213,&l_213},{&l_213,&l_213,&l_213,&l_213},{&l_213,&l_213,(void*)0,&l_213},{&l_213,&l_213,&l_213,&l_213}},{{&l_213,&l_213,&l_213,&l_213},{&l_213,&l_213,&l_213,&l_213},{(void*)0,&l_213,&l_213,(void*)0},{&l_213,&l_213,&l_213,&l_213},{&l_213,&l_213,&l_213,&l_213},{&l_213,&l_213,(void*)0,&l_213},{&l_213,&l_213,&l_213,&l_213},{&l_213,&l_213,&l_213,(void*)0},{&l_213,&l_213,&l_213,&l_213}},{{&l_213,&l_213,&l_213,&l_213},{&l_213,&l_213,&l_213,&l_213},{&l_213,&l_213,&l_213,(void*)0},{&l_213,&l_213,&l_213,&l_213},{&l_213,&l_213,&l_213,&l_213},{&l_213,(void*)0,&l_213,&l_213},{&l_213,&l_213,&l_213,&l_213},{&l_213,&l_213,&l_213,&l_213},{&l_213,(void*)0,&l_213,&l_213}},{{&l_213,&l_213,&l_213,&l_213},{&l_213,(void*)0,(void*)0,&l_213},{&l_213,&l_213,&l_213,&l_213},{(void*)0,&l_213,&l_213,&l_213},{(void*)0,(void*)0,&l_213,&l_213},{&l_213,&l_213,(void*)0,&l_213},{&l_213,&l_213,&l_213,(void*)0},{&l_213,&l_213,&l_213,&l_213},{&l_213,&l_213,&l_213,&l_213}}};
        int l_228 = 1L;
        int i, j, k;
        (*l_212) = l_211;
        (*g_185) = ((l_213 = l_213) == l_217);
        (*l_217) = g_218;
        for (g_147.f3.f3 = 0; (g_147.f3.f3 >= 12); g_147.f3.f3 = safe_add_func_uint16_t_u_u(g_147.f3.f3, 8))
        {
            union U5 **l_222 = (void*)0;
            union U5 **l_223 = &g_118;
            int l_229[1];
            char *l_230 = &g_126.f4;
            char *l_231 = &g_64[8];
            char ***l_233 = &g_50;
            int l_234 = 0x8D94FF48L;
            unsigned short *l_235 = &g_152.f1;
            int i;
            for (i = 0; i < 1; i++)
                l_229[i] = 0x783D5683L;
            (*l_223) = &g_119;
            (*g_185) = (safe_mul_func_uint16_t_u_u(g_152.f3.f4, (safe_mod_func_uint16_t_u_u((((*l_231) = ((*l_230) = (l_229[0] = l_228))) <= p_39.f3), ((*l_235) = ((g_197[1].f0 = (l_232 != (void*)0)) & (0xB7912393L < ((l_233 == (void*)0) == ((l_234 = l_210.f1) != 0x70L)))))))));
            (*l_223) = (*l_223);
            return p_39.f8;
        }
    }
    else
    {
        char l_250 = 0xF1L;
        int *l_254 = (void*)0;
        union U5 *l_258 = &l_210;
        union U4 **l_259[1][5][3] = {{{&l_232,&l_232,&l_232},{&l_232,&l_232,&l_232},{&l_232,&l_232,&l_232},{&l_232,&l_232,&l_232},{&l_232,&l_232,&l_232}}};
        int **l_269 = (void*)0;
        int **l_270 = &l_254;
        int i, j, k;
        if ((safe_lshift_func_uint8_t_u_u(0x71L, 7)))
        {
            union U3 *l_245 = &g_53;
            for (g_152.f1 = 15; (g_152.f1 >= 19); g_152.f1 = safe_add_func_int8_t_s_s(g_152.f1, 8))
            {
                union U5 l_240 = {0xD4L};
                int *l_243 = &g_152.f3.f0;
                (*g_185) = (func_65(l_240) >= g_195[0][3].f2);
                for (g_102 = 0; (g_102 == 17); g_102 = safe_add_func_uint32_t_u_u(g_102, 5))
                {
                    int **l_244 = &l_243;
                    (*l_244) = l_243;
                    for (g_126.f1 = 0; (g_126.f1 <= 1); g_126.f1 += 1)
                    {
                        int i, j;
                        g_195[g_126.f1][g_126.f1] = g_195[g_126.f1][(g_126.f1 + 2)];
                    }
                }
                (*l_211) = l_245;
            }
        }
        else
        {
            for (g_128.f1 = 0; (g_128.f1 == (-5)); g_128.f1--)
            {
                int **l_252 = (void*)0;
                int **l_253 = &g_185;
                union U4 **l_261 = &l_232;
                struct S1 *l_266[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_266[i] = &g_116;
                (*l_251) = (safe_add_func_int8_t_s_s(l_250, ((((*l_253) = l_251) == l_254) != (65527UL < (safe_sub_func_int8_t_s_s(0xFFL, 1L))))));
                for (g_152.f3.f0 = 2; (g_152.f3.f0 >= 0); g_152.f3.f0 -= 1)
                {
                    union U4 **l_262 = &l_232;
                    if ((*g_185))
                    {
                        union U5 **l_257[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                        union U4 ***l_260[5][5][5] = {{{(void*)0,&l_259[0][0][1],&l_259[0][0][1],&l_259[0][0][1],&l_259[0][2][1]},{(void*)0,(void*)0,(void*)0,&l_259[0][2][1],&l_259[0][0][1]},{&l_259[0][0][1],&l_259[0][1][0],&l_259[0][0][1],(void*)0,&l_259[0][3][0]},{(void*)0,(void*)0,&l_259[0][0][1],(void*)0,&l_259[0][0][1]},{(void*)0,&l_259[0][0][1],(void*)0,(void*)0,&l_259[0][0][1]}},{{&l_259[0][1][1],&l_259[0][0][1],&l_259[0][0][1],&l_259[0][2][1],&l_259[0][0][1]},{(void*)0,(void*)0,&l_259[0][1][0],&l_259[0][2][1],&l_259[0][0][1]},{&l_259[0][0][1],&l_259[0][2][1],(void*)0,&l_259[0][3][0],&l_259[0][3][0]},{(void*)0,&l_259[0][0][1],(void*)0,(void*)0,&l_259[0][0][1]},{&l_259[0][1][1],&l_259[0][0][1],(void*)0,&l_259[0][0][1],(void*)0}},{{(void*)0,&l_259[0][2][1],&l_259[0][3][0],&l_259[0][1][0],&l_259[0][1][1]},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&l_259[0][0][1],&l_259[0][0][1],(void*)0,(void*)0,&l_259[0][1][0]},{&l_259[0][2][1],&l_259[0][0][1],(void*)0,&l_259[0][1][0],&l_259[0][0][1]},{(void*)0,(void*)0,&l_259[0][1][0],&l_259[0][0][1],&l_259[0][1][0]}},{{&l_259[0][1][0],&l_259[0][1][0],&l_259[0][0][1],(void*)0,(void*)0},{&l_259[0][1][0],&l_259[0][0][1],(void*)0,&l_259[0][3][0],&l_259[0][1][1]},{(void*)0,(void*)0,&l_259[0][0][1],&l_259[0][2][1],(void*)0},{&l_259[0][2][1],&l_259[0][0][1],&l_259[0][0][1],&l_259[0][2][1],&l_259[0][0][1]},{&l_259[0][0][1],&l_259[0][1][0],&l_259[0][0][1],(void*)0,&l_259[0][3][0]}},{{(void*)0,(void*)0,&l_259[0][0][1],&l_259[0][1][0],&l_259[0][0][1]},{&l_259[0][2][1],(void*)0,&l_259[0][3][0],&l_259[0][3][0],(void*)0},{&l_259[0][2][1],(void*)0,&l_259[0][0][1],&l_259[0][0][1],(void*)0},{(void*)0,(void*)0,(void*)0,&l_259[0][0][1],&l_259[0][0][1]},{(void*)0,&l_259[0][0][1],&l_259[0][1][1],&l_259[0][0][1],&l_259[0][0][1]}}};
                        int i, j, k;
                        l_258 = &g_119;
                        l_262 = (l_261 = l_259[0][0][1]);
                        (*l_253) = &g_102;
                    }
                    else
                    {
                        struct S1 *l_264 = &g_147.f3;
                        struct S1 **l_263[6][6][6] = {{{&l_264,&l_264,&l_264,&l_264,&l_264,&l_264},{&l_264,&l_264,&l_264,(void*)0,&l_264,&l_264},{&l_264,&l_264,&l_264,&l_264,&l_264,&l_264},{&l_264,&l_264,&l_264,&l_264,&l_264,&l_264},{&l_264,&l_264,&l_264,&l_264,&l_264,(void*)0},{&l_264,&l_264,&l_264,&l_264,&l_264,(void*)0}},{{&l_264,&l_264,&l_264,&l_264,&l_264,&l_264},{&l_264,&l_264,&l_264,&l_264,(void*)0,&l_264},{&l_264,&l_264,&l_264,&l_264,&l_264,&l_264},{&l_264,(void*)0,&l_264,&l_264,&l_264,&l_264},{(void*)0,&l_264,&l_264,&l_264,&l_264,(void*)0},{(void*)0,&l_264,&l_264,&l_264,&l_264,(void*)0}},{{&l_264,&l_264,&l_264,&l_264,&l_264,&l_264},{(void*)0,&l_264,(void*)0,&l_264,&l_264,&l_264},{&l_264,&l_264,&l_264,&l_264,(void*)0,&l_264},{&l_264,(void*)0,&l_264,(void*)0,&l_264,&l_264},{&l_264,(void*)0,&l_264,&l_264,(void*)0,&l_264},{&l_264,&l_264,&l_264,&l_264,&l_264,&l_264}},{{(void*)0,&l_264,&l_264,&l_264,&l_264,&l_264},{(void*)0,(void*)0,&l_264,&l_264,&l_264,(void*)0},{&l_264,(void*)0,&l_264,&l_264,&l_264,&l_264},{&l_264,&l_264,&l_264,&l_264,(void*)0,(void*)0},{&l_264,&l_264,&l_264,(void*)0,&l_264,&l_264},{(void*)0,&l_264,&l_264,&l_264,&l_264,&l_264}},{{&l_264,&l_264,&l_264,&l_264,&l_264,&l_264},{&l_264,&l_264,&l_264,&l_264,&l_264,&l_264},{&l_264,(void*)0,&l_264,&l_264,&l_264,&l_264},{&l_264,(void*)0,&l_264,&l_264,(void*)0,&l_264},{&l_264,(void*)0,&l_264,&l_264,&l_264,&l_264},{&l_264,&l_264,&l_264,&l_264,&l_264,(void*)0}},{{(void*)0,&l_264,&l_264,&l_264,(void*)0,&l_264},{&l_264,&l_264,&l_264,&l_264,(void*)0,(void*)0},{&l_264,&l_264,&l_264,&l_264,&l_264,&l_264},{&l_264,&l_264,(void*)0,&l_264,&l_264,&l_264},{&l_264,(void*)0,&l_264,(void*)0,&l_264,&l_264},{&l_264,&l_264,&l_264,&l_264,&l_264,&l_264}}};
                        int i, j, k;
                        g_265 = &g_126;
                    }
                    for (g_72 = 2; (g_72 >= 0); g_72 -= 1)
                    {
                        l_266[0] = &g_126;
                    }
                }
                return g_195[0][3].f2;
            }
            for (g_126.f4 = 0; (g_126.f4 == (-22)); --g_126.f4)
            {
                for (g_147.f3.f3 = 0; g_147.f3.f3 < 2; g_147.f3.f3 += 1)
                {
                    struct S0 tmp = {-1L,0x2193L,0x00L,0UL,-41709,6L,-2L,0x1EL,0xCF20L};
                    g_197[g_147.f3.f3] = tmp;
                }
                if ((*g_185))
                    continue;
                if ((*l_251))
                    break;
            }
        }
        (*l_270) = &g_102;
        (*l_254) = (*g_185);
    }
    if ((l_271 != (void*)0))
    {
        int *l_273 = &g_197[1].f6;
        char *l_274 = (void*)0;
        union U3 *l_275 = &g_53;
        g_185 = l_273;
        (*g_185) = ((void*)0 == l_274);
        (*l_211) = l_275;
    }
    else
    {
        int *l_279 = &g_32.f6;
        int **l_280 = &l_279;
        for (g_126.f0 = 14; (g_126.f0 != 9); g_126.f0 = safe_sub_func_int16_t_s_s(g_126.f0, 9))
        {
            union U5 *l_278 = &l_210;
            l_278 = l_278;
        }
        (*g_185) = p_39.f3;
        (*l_280) = l_279;
        g_185 = &g_102;
    }
    if ((g_32.f2 == 0x07L))
    {
        struct S2 l_281 = {0x59L,0x792DL,6,{0x602AEEA7L,4294967288UL,57,4294967288UL,0L}};
        struct S2 *l_282 = &g_152;
        union U5 l_283 = {-3L};
        union U5 *l_284[9][6] = {{(void*)0,(void*)0,(void*)0,&l_283,&l_283,(void*)0},{&g_119,&g_119,&l_210,(void*)0,(void*)0,&g_119},{&g_119,&g_119,&g_119,(void*)0,&g_119,&l_210},{&g_119,&g_119,&g_119,(void*)0,&g_119,&g_119},{&l_283,(void*)0,&l_210,&l_283,&g_119,(void*)0},{&l_283,&g_119,(void*)0,&g_119,&l_283,&l_210},{&g_119,&g_119,(void*)0,(void*)0,&g_119,&g_119},{&g_119,(void*)0,&g_119,&g_119,&g_119,(void*)0},{&l_210,&l_210,(void*)0,&l_283,&l_283,&g_119}};
        int *l_286 = &g_126.f0;
        int i, j;
        (*l_282) = l_281;
        (*g_185) = ((void*)0 == &l_214[6]);
        (*l_211) = (*l_211);
        (*l_286) = (((l_281.f2 > (0UL > 3L)) != ((*l_251) = p_39.f8)) | func_65((l_285 = (l_210 = l_283))));
    }
    else
    {
        int *l_289 = (void*)0;
        struct S2 *l_292 = (void*)0;
        int l_304[2];
        struct S2 ***l_308 = &g_306;
        struct S2 ****l_307 = &l_308;
        int i;
        for (i = 0; i < 2; i++)
            l_304[i] = 0x7B180F11L;
        for (g_147.f3.f0 = 0; (g_147.f3.f0 <= 1); g_147.f3.f0 += 1)
        {
            union U4 *l_290 = &g_128;
            int *l_296 = &g_197[1].f6;
            struct S2 **l_299[3];
            struct S2 ***l_298 = &l_299[1];
            union U5 l_300 = {0x6FL};
            int i;
            for (i = 0; i < 3; i++)
                l_299[i] = &l_292;
            (*g_185) = l_287;
            for (g_126.f1 = 0; (g_126.f1 <= 1); g_126.f1 += 1)
            {
                int **l_288[7][4][2];
                union U4 *l_291 = (void*)0;
                int i, j, k;
                for (i = 0; i < 7; i++)
                {
                    for (j = 0; j < 4; j++)
                    {
                        for (k = 0; k < 2; k++)
                            l_288[i][j][k] = &g_185;
                    }
                }
                l_289 = (void*)0;
                l_291 = l_290;
                for (p_39.f0 = 0; (p_39.f0 <= 1); p_39.f0 += 1)
                {
                    for (g_152.f3.f3 = 0; (g_152.f3.f3 <= 1); g_152.f3.f3 += 1)
                    {
                        struct S2 **l_293[4];
                        int i;
                        for (i = 0; i < 4; i++)
                            l_293[i] = (void*)0;
                        g_294[5][0][1] = (l_292 = &g_152);
                        g_185 = l_296;
                    }
                    for (g_128.f1 = 0; (g_128.f1 <= 1); g_128.f1 += 1)
                    {
                        struct S2 l_297 = {0x54L,65527UL,0,{0x6F715648L,0xCB349FEEL,65,0x88EDDE48L,-9L}};
                        if (p_39.f0)
                            break;
                        if ((*g_185))
                            continue;
                        l_297 = l_297;
                    }
                }
            }
            (*l_298) = &g_294[5][0][1];
            for (p_39.f1 = 0; (p_39.f1 <= 1); p_39.f1 += 1)
            {
                int i, j;
                g_195[p_39.f1][(p_39.f1 + 1)] = g_195[p_39.f1][(g_147.f3.f0 + 4)];
                for (p_39.f0 = 0; (p_39.f0 <= 1); p_39.f0 += 1)
                {
                    p_39.f6 = func_65(l_300);
                    return g_32.f6;
                }
            }
        }
        (*l_251) = ((safe_unary_minus_func_uint32_t_u((safe_add_func_int8_t_s_s(l_304[1], 0x43L)))) | (g_152.f2 >= (g_305[6] != ((*l_307) = (void*)0))));
    }
    return (*l_251);
}







static struct S0 func_40(struct S2 p_41, struct S0 p_42, struct S1 p_43, struct S0 p_44)
{
    char *l_49 = &g_32.f7;
    char **l_48 = &l_49;
    char ***l_47[8][4] = {{&l_48,&l_48,&l_48,&l_48},{&l_48,&l_48,&l_48,&l_48},{&l_48,&l_48,&l_48,&l_48},{&l_48,&l_48,&l_48,&l_48},{&l_48,&l_48,&l_48,&l_48},{&l_48,&l_48,&l_48,&l_48},{&l_48,&l_48,&l_48,&l_48},{&l_48,&l_48,&l_48,&l_48}};
    union U3 *l_52 = &g_53;
    union U5 l_202[2] = {{0x3EL},{0x3EL}};
    int **l_203[10][10][2] = {{{(void*)0,&g_185},{&g_185,&g_185},{&g_185,&g_185},{&g_185,&g_185},{&g_185,&g_185},{&g_185,&g_185},{&g_185,&g_185},{&g_185,&g_185},{&g_185,&g_185},{&g_185,&g_185}},{{(void*)0,&g_185},{&g_185,&g_185},{&g_185,&g_185},{&g_185,&g_185},{(void*)0,&g_185},{&g_185,&g_185},{&g_185,&g_185},{(void*)0,&g_185},{&g_185,&g_185},{&g_185,&g_185}},{{&g_185,(void*)0},{&g_185,&g_185},{&g_185,&g_185},{&g_185,&g_185},{&g_185,&g_185},{(void*)0,&g_185},{&g_185,&g_185},{&g_185,&g_185},{&g_185,&g_185},{&g_185,(void*)0}},{{(void*)0,&g_185},{&g_185,&g_185},{&g_185,&g_185},{&g_185,&g_185},{&g_185,&g_185},{&g_185,&g_185},{&g_185,&g_185},{&g_185,&g_185},{&g_185,&g_185},{&g_185,&g_185}},{{&g_185,&g_185},{&g_185,&g_185},{&g_185,&g_185},{(void*)0,(void*)0},{&g_185,&g_185},{&g_185,&g_185},{&g_185,(void*)0},{&g_185,&g_185},{&g_185,&g_185},{&g_185,&g_185}},{{&g_185,&g_185},{&g_185,&g_185},{(void*)0,&g_185},{&g_185,(void*)0},{(void*)0,&g_185},{&g_185,(void*)0},{&g_185,&g_185},{(void*)0,&g_185},{&g_185,&g_185},{&g_185,&g_185}},{{&g_185,&g_185},{&g_185,&g_185},{&g_185,(void*)0},{&g_185,&g_185},{&g_185,&g_185},{&g_185,&g_185},{(void*)0,&g_185},{&g_185,&g_185},{&g_185,&g_185},{&g_185,&g_185}},{{(void*)0,&g_185},{&g_185,&g_185},{&g_185,&g_185},{&g_185,(void*)0},{&g_185,&g_185},{&g_185,&g_185},{&g_185,&g_185},{&g_185,&g_185},{&g_185,&g_185},{&g_185,&g_185}},{{&g_185,&g_185},{&g_185,&g_185},{&g_185,&g_185},{&g_185,&g_185},{&g_185,(void*)0},{&g_185,(void*)0},{&g_185,&g_185},{&g_185,&g_185},{&g_185,&g_185},{(void*)0,&g_185}},{{&g_185,&g_185},{&g_185,&g_185},{&g_185,&g_185},{&g_185,(void*)0},{&g_185,&g_185},{&g_185,&g_185},{(void*)0,&g_185},{&g_185,&g_185},{&g_185,&g_185},{&g_185,&g_185}}};
    int i, j, k;
    g_50 = (void*)0;
    for (p_41.f0 = 0; (p_41.f0 <= 3); p_41.f0 += 1)
    {
        union U3 *l_51 = (void*)0;
        char *l_56 = (void*)0;
        int l_57 = 0x04697E54L;
        int *l_190 = &g_126.f0;
        int l_191 = (-10L);
        struct S0 *l_194 = &g_195[0][3];
        struct S0 *l_196 = &g_197[1];
        l_52 = l_51;
        l_190 = func_54((l_57 = (l_56 != (*l_48))));
        for (p_42.f3 = 0; (p_42.f3 <= 3); p_42.f3 += 1)
        {
            int i, j;
            (*l_190) = (l_191 > (safe_sub_func_uint8_t_u_u(p_44.f7, p_44.f0)));
        }
        (*l_196) = ((*l_194) = p_44);
    }
    g_185 = func_54((safe_rshift_func_int16_t_s_s((g_197[1].f8 = (safe_rshift_func_uint16_t_u_u(func_65(l_202[1]), (p_43.f0 > g_139[1][2][7])))), 5)));
    (*g_185) = 0x56D30B18L;
    return p_44;
}







static int * func_54(unsigned char p_55)
{
    char *l_63[5] = {&g_64[3],&g_64[3],&g_64[3],&g_64[3],&g_64[3]};
    union U5 l_67 = {1L};
    struct S0 l_123 = {0x9F96L,1L,253UL,1UL,-42595,0xCD93L,4L,-1L,0xD7FAL};
    struct S1 *l_125[8] = {&g_116,&g_116,&g_116,&g_116,&g_116,&g_116,&g_116,&g_116};
    union U4 *l_127 = &g_128;
    union U4 **l_129 = &l_127;
    int *l_160 = &g_152.f3.f0;
    union U5 l_188[2] = {{0x17L},{0x17L}};
    short l_189 = (-7L);
    int i;
    g_126 = func_58(((g_64[0] = (g_32.f0 > g_32.f0)) ^ func_65(l_67)), (safe_rshift_func_uint16_t_u_s(p_55, 15)), l_123, l_67.f1);
    (*l_129) = l_127;
    for (l_123.f8 = 3; (l_123.f8 <= 9); l_123.f8 += 1)
    {
        union U5 *l_140 = &g_119;
        int l_141 = 1L;
        union U4 **l_149[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        struct S0 l_164 = {0xAB04L,-1L,0xB3L,0xCDL,31426,0x965DL,0x18C778EFL,-1L,0x41C7L};
        struct S2 l_186 = {3UL,65535UL,4,{0x0B9E8D0FL,0x9D7E22B2L,63,0x64F51604L,0L}};
        int i;
        if (g_64[l_123.f8])
        {
            int *l_132 = &g_102;
            (*l_132) = (safe_mul_func_uint8_t_u_u(p_55, p_55));
            if ((((safe_rshift_func_int16_t_s_u((l_141 = (safe_sub_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s(func_65(l_67), (((-4L) > g_139[1][2][7]) && p_55))), (l_140 != l_140)))), g_139[1][2][5])) & g_32.f7) || p_55))
            {
                struct S0 *l_143 = (void*)0;
                struct S0 **l_142 = &l_143;
                struct S0 ***l_144 = &l_142;
                if (g_116.f2)
                    break;
                (*l_144) = l_142;
                if (p_55)
                    break;
            }
            else
            {
                if (g_32.f3)
                    break;
            }
        }
        else
        {
            int *l_146 = (void*)0;
            int **l_145 = &l_146;
            struct S0 l_170 = {1L,-1L,0xEFL,0xB0L,16310,0xF249L,-1L,4L,0xB2E5L};
            (*l_145) = &g_102;
            for (g_116.f4 = 9; (g_116.f4 >= 1); g_116.f4 -= 1)
            {
                struct S2 *l_156 = &g_152;
                int l_157[7] = {2L,2L,0x63535620L,2L,2L,0x63535620L,2L};
                struct S0 *l_161 = &g_32;
                union U3 *l_166 = &g_53;
                int i;
                for (g_128.f1 = 0; (g_128.f1 <= 9); g_128.f1 += 1)
                {
                    struct S2 *l_148 = &g_147;
                    union U4 ***l_150 = &l_129;
                    union U3 *l_153[4][4] = {{&g_53,&g_53,&g_53,&g_53},{&g_53,&g_53,&g_53,&g_53},{&g_53,&g_53,&g_53,&g_53},{&g_53,&g_53,&g_53,&g_53}};
                    int *l_155 = &g_126.f0;
                    int i, j;
                    (*l_148) = g_147;
                    (*l_150) = l_149[0];
                    for (g_147.f3.f4 = 7; (g_147.f3.f4 >= 0); g_147.f3.f4 -= 1)
                    {
                        struct S2 *l_151 = &g_152;
                        union U3 **l_154 = &l_153[2][2];
                        (*l_145) = &l_141;
                        (*l_151) = g_147;
                        (*l_146) = (((*l_154) = l_153[2][2]) == &g_53);
                        (*l_145) = (l_155 = (void*)0);
                    }
                }
                (*l_156) = g_147;
                l_123.f6 = (l_157[3] == ((1L < g_116.f1) | (safe_add_func_int32_t_s_s(l_123.f5, (g_126.f1 > 0x5DBCL)))));
                for (g_152.f3.f0 = 8; (g_152.f3.f0 >= 1); g_152.f3.f0 -= 1)
                {
                    (*l_145) = l_160;
                    for (g_152.f3.f4 = 3; (g_152.f3.f4 >= 0); g_152.f3.f4 -= 1)
                    {
                        struct S0 **l_162 = &l_161;
                        char ***l_163[3][1][6] = {{{&g_50,&g_50,(void*)0,(void*)0,&g_50,&g_50}},{{&g_50,(void*)0,(void*)0,&g_50,&g_50,(void*)0}},{{&g_50,&g_50,(void*)0,(void*)0,&g_50,&g_50}}};
                        struct S0 *l_165 = &l_164;
                        int i, j, k;
                        (*l_162) = l_161;
                        g_50 = &l_63[(g_152.f3.f4 + 1)];
                        (*l_165) = l_164;
                        g_167 = l_166;
                    }
                    for (l_164.f6 = 0; (l_164.f6 <= 9); l_164.f6 += 1)
                    {
                        short l_168[4];
                        int *l_169 = &l_157[6];
                        struct S0 *l_171 = &l_170;
                        int i;
                        for (i = 0; i < 4; i++)
                            l_168[i] = 1L;
                        if (p_55)
                            break;
                        (*l_169) = l_168[1];
                        (*l_171) = l_170;
                    }
                }
            }
        }
        for (l_123.f5 = 9; (l_123.f5 >= 2); l_123.f5 -= 1)
        {
            short l_184 = (-2L);
            struct S2 *l_187 = &g_147;
            (*l_160) = p_55;
            g_116.f0 = (safe_add_func_uint16_t_u_u((g_116.f4 | (safe_rshift_func_int16_t_s_u(((p_55 || (safe_add_func_int8_t_s_s(p_55, (((safe_mul_func_int16_t_s_s((*l_160), (p_55 || p_55))) <= (((safe_mod_func_uint8_t_u_u((p_55 > p_55), 255UL)) != (*l_160)) <= 0xA250L)) <= 0xE035L)))) <= l_184), 12))), 0x949AL));
            l_160 = g_185;
            g_152 = ((*l_187) = l_186);
        }
    }
    (*l_160) = ((func_65(l_188[1]) ^ (-10L)) < l_189);
    return l_160;
}







static struct S1 func_58(unsigned p_59, int p_60, struct S0 p_61, char p_62)
{
    struct S1 l_124 = {1L,0x62ADE66CL,-29,0UL,1L};
    return l_124;
}







static char func_65(union U5 p_66)
{
    struct S1 l_68 = {-1L,0UL,25,0UL,0L};
    struct S1 *l_69 = &l_68;
    int *l_70 = &g_53.f0;
    int *l_71[5][7][7] = {{{&l_68.f0,&l_68.f0,&l_68.f0,&g_32.f6,&l_68.f0,&g_32.f6,&g_32.f6},{&g_32.f6,&g_32.f6,&g_32.f6,&g_32.f6,&g_32.f6,&g_32.f6,&g_32.f6},{&l_68.f0,&l_68.f0,&g_32.f6,&g_32.f6,(void*)0,&l_68.f0,&l_68.f0},{(void*)0,&l_68.f0,&l_68.f0,&g_32.f6,(void*)0,&g_32.f6,&g_32.f6},{&l_68.f0,&g_32.f6,&g_32.f6,&l_68.f0,(void*)0,&l_68.f0,&g_32.f6},{&g_32.f6,(void*)0,&l_68.f0,&l_68.f0,(void*)0,&g_32.f6,&l_68.f0},{&l_68.f0,&g_32.f6,&l_68.f0,&g_32.f6,&g_32.f6,&g_32.f6,&g_32.f6}},{{&l_68.f0,&l_68.f0,&g_32.f6,&g_32.f6,&l_68.f0,&l_68.f0,&l_68.f0},{&l_68.f0,&l_68.f0,&l_68.f0,&l_68.f0,&g_32.f6,&g_32.f6,&l_68.f0},{(void*)0,&g_32.f6,&l_68.f0,&l_68.f0,(void*)0,&l_68.f0,&g_32.f6},{&g_32.f6,&l_68.f0,&g_32.f6,&l_68.f0,&l_68.f0,&g_32.f6,&l_68.f0},{&g_32.f6,&g_32.f6,&l_68.f0,&l_68.f0,&l_68.f0,&l_68.f0,(void*)0},{&g_32.f6,&l_68.f0,&l_68.f0,&l_68.f0,&g_32.f6,(void*)0,&l_68.f0},{&g_32.f6,&l_68.f0,&g_32.f6,(void*)0,&l_68.f0,&l_68.f0,&l_68.f0}},{{&l_68.f0,&l_68.f0,&l_68.f0,(void*)0,&g_32.f6,(void*)0,(void*)0},{&l_68.f0,&g_32.f6,&l_68.f0,&g_32.f6,&g_32.f6,&l_68.f0,&l_68.f0},{&l_68.f0,&l_68.f0,&g_32.f6,&l_68.f0,&l_68.f0,&g_32.f6,(void*)0},{&l_68.f0,&l_68.f0,&l_68.f0,&l_68.f0,&g_32.f6,(void*)0,&l_68.f0},{&g_32.f6,&l_68.f0,&l_68.f0,&g_32.f6,&l_68.f0,(void*)0,&l_68.f0},{&l_68.f0,&l_68.f0,&l_68.f0,(void*)0,&l_68.f0,&g_32.f6,(void*)0},{&l_68.f0,&l_68.f0,&l_68.f0,(void*)0,&g_32.f6,&l_68.f0,(void*)0}},{{&l_68.f0,&l_68.f0,&l_68.f0,&l_68.f0,&l_68.f0,&l_68.f0,(void*)0},{&l_68.f0,&l_68.f0,&g_32.f6,&l_68.f0,&g_32.f6,&g_32.f6,&l_68.f0},{&g_32.f6,&l_68.f0,&l_68.f0,(void*)0,&g_32.f6,(void*)0,&l_68.f0},{&g_32.f6,&l_68.f0,&l_68.f0,(void*)0,&l_68.f0,(void*)0,(void*)0},{&g_32.f6,&g_32.f6,&l_68.f0,(void*)0,&l_68.f0,&l_68.f0,&l_68.f0},{&g_32.f6,&g_32.f6,&l_68.f0,&l_68.f0,&l_68.f0,&g_32.f6,&g_32.f6},{&g_32.f6,&l_68.f0,&l_68.f0,&g_32.f6,&l_68.f0,&g_32.f6,&g_32.f6}},{{&l_68.f0,&l_68.f0,&g_32.f6,(void*)0,&g_32.f6,&g_32.f6,&g_32.f6},{&g_32.f6,&g_32.f6,(void*)0,&g_32.f6,&g_32.f6,&g_32.f6,&g_32.f6},{&l_68.f0,&g_32.f6,(void*)0,&g_32.f6,&l_68.f0,&g_32.f6,&g_32.f6},{&g_32.f6,&l_68.f0,&g_32.f6,&l_68.f0,&g_32.f6,&l_68.f0,&g_32.f6},{&g_32.f6,&g_32.f6,&l_68.f0,&l_68.f0,&l_68.f0,&g_32.f6,&g_32.f6},{&l_68.f0,&l_68.f0,&l_68.f0,&g_32.f6,&g_32.f6,&g_32.f6,&g_32.f6},{&g_32.f6,&l_68.f0,&l_68.f0,&g_32.f6,&g_32.f6,&g_32.f6,&g_32.f6}}};
    union U3 *l_74 = &g_53;
    union U3 **l_73 = &l_74;
    union U3 ***l_75[1];
    union U3 **l_76 = &l_74;
    union U5 *l_120[3][10] = {{(void*)0,&g_119,(void*)0,&g_119,(void*)0,&g_119,(void*)0,&g_119,(void*)0,&g_119},{&g_119,&g_119,&g_119,&g_119,&g_119,&g_119,&g_119,&g_119,&g_119,&g_119},{(void*)0,&g_119,(void*)0,&g_119,(void*)0,&g_119,(void*)0,&g_119,(void*)0,&g_119}};
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_75[i] = &l_73;
    (*l_69) = l_68;
    g_72 = ((*l_70) = l_68.f2);
    l_76 = l_73;
    for (l_68.f1 = 0; (l_68.f1 != 16); l_68.f1++)
    {
        unsigned l_79 = 0x4792CDF4L;
        int l_80 = (-3L);
        int l_81 = 4L;
        int *l_115 = &l_80;
        if ((*l_70))
        {
            short l_96 = 0xF141L;
            short *l_101[6][3] = {{&l_96,&g_32.f8,&g_32.f8},{&l_96,&g_32.f8,&g_32.f0},{&l_96,&g_32.f8,&g_32.f8},{&l_96,&g_32.f8,&g_32.f8},{&l_96,&g_32.f8,&g_32.f0},{&l_96,&g_32.f8,&g_32.f8}};
            int i, j;
            l_81 = (l_80 = ((*l_70) = l_79));
            if (g_32.f3)
                break;
            (*l_70) = (safe_mod_func_int32_t_s_s((safe_sub_func_int16_t_s_s((g_102 = (safe_rshift_func_uint16_t_u_u(((0x32F9L | (-2L)) == ((safe_rshift_func_uint8_t_u_s((p_66.f1 = (safe_mod_func_uint32_t_u_u(p_66.f1, 1UL))), (safe_mul_func_uint16_t_u_u(0UL, ((safe_lshift_func_int16_t_s_u(l_96, 3)) == (safe_lshift_func_uint8_t_u_u((l_80 <= (safe_sub_func_int16_t_s_s(l_80, g_32.f3))), l_80))))))) <= g_32.f8)), 7))), 0x723DL)), l_96));
            for (l_79 = 0; (l_79 <= 2); l_79 += 1)
            {
                int *l_106 = &g_32.f6;
                for (l_96 = 2; (l_96 >= 0); l_96 -= 1)
                {
                    unsigned l_103 = 4294967295UL;
                    int **l_107 = &l_71[0][4][5];
                    for (l_68.f3 = 0; (l_68.f3 <= 2); l_68.f3 += 1)
                    {
                        int *l_104 = &g_32.f6;
                        int **l_105 = &l_71[4][1][2];
                        int i, j;
                        (*l_70) = (l_103 != l_80);
                        (*l_105) = l_104;
                        g_53.f0 = p_66.f1;
                    }
                    (*l_107) = l_106;
                }
                g_53.f0 = (safe_mul_func_uint16_t_u_u(l_80, (safe_lshift_func_uint8_t_u_u(g_32.f8, g_53.f0))));
            }
        }
        else
        {
            struct S0 *l_112 = &g_32;
            struct S0 **l_113 = &l_112;
            int **l_114 = (void*)0;
            struct S1 *l_117 = &g_116;
            (*l_113) = l_112;
            l_115 = l_71[2][6][4];
            (*l_117) = g_116;
        }
        if (g_116.f4)
            break;
        if ((*l_70))
            continue;
        l_120[1][6] = (g_118 = &p_66);
    }
    return (*l_70);
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
        transparent_crc(g_17[i], "g_17[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_32.f0, "g_32.f0", print_hash_value);
    transparent_crc(g_32.f1, "g_32.f1", print_hash_value);
    transparent_crc(g_32.f2, "g_32.f2", print_hash_value);
    transparent_crc(g_32.f3, "g_32.f3", print_hash_value);
    transparent_crc(g_32.f4, "g_32.f4", print_hash_value);
    transparent_crc(g_32.f5, "g_32.f5", print_hash_value);
    transparent_crc(g_32.f6, "g_32.f6", print_hash_value);
    transparent_crc(g_32.f7, "g_32.f7", print_hash_value);
    transparent_crc(g_32.f8, "g_32.f8", print_hash_value);
    transparent_crc(g_53.f0, "g_53.f0", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_64[i], "g_64[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_72, "g_72", print_hash_value);
    transparent_crc(g_102, "g_102", print_hash_value);
    transparent_crc(g_116.f0, "g_116.f0", print_hash_value);
    transparent_crc(g_116.f1, "g_116.f1", print_hash_value);
    transparent_crc(g_116.f2, "g_116.f2", print_hash_value);
    transparent_crc(g_116.f3, "g_116.f3", print_hash_value);
    transparent_crc(g_116.f4, "g_116.f4", print_hash_value);
    transparent_crc(g_119.f0, "g_119.f0", print_hash_value);
    transparent_crc(g_119.f1, "g_119.f1", print_hash_value);
    transparent_crc(g_126.f0, "g_126.f0", print_hash_value);
    transparent_crc(g_126.f1, "g_126.f1", print_hash_value);
    transparent_crc(g_126.f2, "g_126.f2", print_hash_value);
    transparent_crc(g_126.f3, "g_126.f3", print_hash_value);
    transparent_crc(g_126.f4, "g_126.f4", print_hash_value);
    transparent_crc(g_128.f0, "g_128.f0", print_hash_value);
    transparent_crc(g_128.f1, "g_128.f1", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 8; k++)
            {
                transparent_crc(g_139[i][j][k], "g_139[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_147.f0, "g_147.f0", print_hash_value);
    transparent_crc(g_147.f1, "g_147.f1", print_hash_value);
    transparent_crc(g_147.f2, "g_147.f2", print_hash_value);
    transparent_crc(g_147.f3.f0, "g_147.f3.f0", print_hash_value);
    transparent_crc(g_147.f3.f1, "g_147.f3.f1", print_hash_value);
    transparent_crc(g_147.f3.f2, "g_147.f3.f2", print_hash_value);
    transparent_crc(g_147.f3.f3, "g_147.f3.f3", print_hash_value);
    transparent_crc(g_147.f3.f4, "g_147.f3.f4", print_hash_value);
    transparent_crc(g_152.f0, "g_152.f0", print_hash_value);
    transparent_crc(g_152.f1, "g_152.f1", print_hash_value);
    transparent_crc(g_152.f2, "g_152.f2", print_hash_value);
    transparent_crc(g_152.f3.f0, "g_152.f3.f0", print_hash_value);
    transparent_crc(g_152.f3.f1, "g_152.f3.f1", print_hash_value);
    transparent_crc(g_152.f3.f2, "g_152.f3.f2", print_hash_value);
    transparent_crc(g_152.f3.f3, "g_152.f3.f3", print_hash_value);
    transparent_crc(g_152.f3.f4, "g_152.f3.f4", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_195[i][j].f0, "g_195[i][j].f0", print_hash_value);
            transparent_crc(g_195[i][j].f1, "g_195[i][j].f1", print_hash_value);
            transparent_crc(g_195[i][j].f2, "g_195[i][j].f2", print_hash_value);
            transparent_crc(g_195[i][j].f3, "g_195[i][j].f3", print_hash_value);
            transparent_crc(g_195[i][j].f4, "g_195[i][j].f4", print_hash_value);
            transparent_crc(g_195[i][j].f5, "g_195[i][j].f5", print_hash_value);
            transparent_crc(g_195[i][j].f6, "g_195[i][j].f6", print_hash_value);
            transparent_crc(g_195[i][j].f7, "g_195[i][j].f7", print_hash_value);
            transparent_crc(g_195[i][j].f8, "g_195[i][j].f8", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_197[i].f0, "g_197[i].f0", print_hash_value);
        transparent_crc(g_197[i].f1, "g_197[i].f1", print_hash_value);
        transparent_crc(g_197[i].f2, "g_197[i].f2", print_hash_value);
        transparent_crc(g_197[i].f3, "g_197[i].f3", print_hash_value);
        transparent_crc(g_197[i].f4, "g_197[i].f4", print_hash_value);
        transparent_crc(g_197[i].f5, "g_197[i].f5", print_hash_value);
        transparent_crc(g_197[i].f6, "g_197[i].f6", print_hash_value);
        transparent_crc(g_197[i].f7, "g_197[i].f7", print_hash_value);
        transparent_crc(g_197[i].f8, "g_197[i].f8", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_295[i][j].f0, "g_295[i][j].f0", print_hash_value);
            transparent_crc(g_295[i][j].f1, "g_295[i][j].f1", print_hash_value);
            transparent_crc(g_295[i][j].f2, "g_295[i][j].f2", print_hash_value);
            transparent_crc(g_295[i][j].f3.f0, "g_295[i][j].f3.f0", print_hash_value);
            transparent_crc(g_295[i][j].f3.f1, "g_295[i][j].f3.f1", print_hash_value);
            transparent_crc(g_295[i][j].f3.f2, "g_295[i][j].f3.f2", print_hash_value);
            transparent_crc(g_295[i][j].f3.f3, "g_295[i][j].f3.f3", print_hash_value);
            transparent_crc(g_295[i][j].f3.f4, "g_295[i][j].f3.f4", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
