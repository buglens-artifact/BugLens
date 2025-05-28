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


union U0 {
   signed f0 : 15;
   short f1;
};


static unsigned g_7 = 7UL;
static char g_15 = 1L;
static unsigned g_17 = 0x97515801L;
static unsigned g_22 = 0x23E52509L;
static unsigned *g_21 = &g_22;
static int g_25[7][1] = {{0x86F25DB2L},{0xF8716B5BL},{0xF8716B5BL},{0x86F25DB2L},{0xF8716B5BL},{0xF8716B5BL},{0x86F25DB2L}};
static int g_37 = 0xE10EF7D5L;
static int g_38 = 0xEBDAB6ACL;
static unsigned g_43 = 1UL;
static short g_64 = 0x1EB1L;
static int g_82 = 0xAD74ECB9L;
static int g_85 = (-7L);
static unsigned **g_90[7] = {&g_21,&g_21,&g_21,&g_21,&g_21,&g_21,&g_21};
static unsigned ***g_89 = &g_90[3];
static int *g_100 = &g_25[4][0];
static int **g_99[6][8] = {{&g_100,&g_100,&g_100,&g_100,&g_100,&g_100,&g_100,&g_100},{&g_100,&g_100,&g_100,&g_100,&g_100,&g_100,&g_100,&g_100},{&g_100,&g_100,&g_100,&g_100,&g_100,&g_100,&g_100,&g_100},{&g_100,&g_100,&g_100,&g_100,&g_100,&g_100,&g_100,&g_100},{&g_100,&g_100,&g_100,&g_100,&g_100,&g_100,&g_100,&g_100},{&g_100,&g_100,&g_100,&g_100,&g_100,&g_100,&g_100,&g_100}};
static int ***g_148 = &g_99[5][0];
static unsigned char g_155 = 248UL;
static unsigned g_158 = 0UL;
static union U0 g_171[7] = {{0x4EAFE298L},{0x4EAFE298L},{0x4EAFE298L},{0x4EAFE298L},{0x4EAFE298L},{0x4EAFE298L},{0x4EAFE298L}};
static int *g_214 = &g_82;
static unsigned char *g_240 = (void*)0;
static unsigned char **g_239 = &g_240;
static union U0 *g_253 = &g_171[6];
static unsigned g_263 = 0xA2927434L;
static char g_299 = 0L;
static unsigned short *g_303 = (void*)0;
static int *g_316 = (void*)0;
static unsigned g_321 = 1UL;
static unsigned short g_349 = 65533UL;
static char **g_378 = (void*)0;
static unsigned *g_420 = (void*)0;
static unsigned **g_419 = &g_420;
static unsigned g_433 = 0xF67A6107L;
static char g_449 = 5L;
static short **g_526 = (void*)0;
static short g_558 = 0x2D03L;
static short ***g_573[4][4][3] = {{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}}};
static short ***g_578 = &g_526;
static unsigned short g_641[5][4][6] = {{{1UL,2UL,65529UL,65535UL,0x83E7L,65534UL},{1UL,1UL,2UL,2UL,1UL,1UL},{65529UL,65535UL,1UL,2UL,0UL,0x2CC6L},{1UL,0x6C0FL,8UL,65535UL,2UL,0xED0BL}},{{2UL,0x6C0FL,65534UL,1UL,0x6C0FL,65535UL},{65535UL,1UL,8UL,1UL,0xF506L,1UL},{2UL,3UL,2UL,65534UL,0UL,65529UL},{2UL,0x83E7L,0xED0BL,1UL,0x83E7L,0x2CC6L}},{{65535UL,0xF506L,1UL,1UL,1UL,65534UL},{2UL,65535UL,65535UL,65534UL,3UL,8UL},{2UL,2UL,1UL,1UL,2UL,2UL},{65535UL,1UL,65529UL,1UL,1UL,0xED0BL}},{{2UL,0UL,0x2CC6L,65534UL,65535UL,1UL},{2UL,0x6C0FL,65534UL,1UL,0x6C0FL,65535UL},{65535UL,1UL,8UL,1UL,0xF506L,1UL},{2UL,3UL,2UL,65534UL,0UL,65529UL}},{{2UL,0x83E7L,0xED0BL,1UL,0x83E7L,0x2CC6L},{65535UL,0xF506L,1UL,1UL,1UL,65534UL},{2UL,65535UL,65535UL,65534UL,3UL,8UL},{2UL,2UL,1UL,1UL,2UL,2UL}}};
static short g_661 = 0xCD8EL;
static int g_696 = 0x8717CA1FL;
static int *g_718 = (void*)0;
static unsigned short g_771 = 1UL;
static unsigned g_814 = 4294967287UL;
static int *g_821 = &g_85;
static char g_832 = 3L;
static char g_868 = (-1L);
static short g_983 = 0x7BD0L;
static unsigned g_1024 = 0x983F3814L;
static unsigned g_1064[8][4][3] = {{{4294967295UL,0xEEBB2A73L,4294967295UL},{0x9251B4F9L,0xFCD60F4BL,0xEE16300EL},{4294967295UL,1UL,4294967295UL},{0x35CE774FL,8UL,0xEE16300EL}},{{0UL,4294967289UL,4294967295UL},{0x513DB112L,8UL,0x9251B4F9L},{4294967295UL,1UL,0x09D3EB84L},{0x513DB112L,0xFCD60F4BL,0x513DB112L}},{{0UL,0xEEBB2A73L,0x09D3EB84L},{0x35CE774FL,4294967295UL,0x9251B4F9L},{4294967295UL,0xEEBB2A73L,4294967295UL},{0x9251B4F9L,0xFCD60F4BL,0xEE16300EL}},{{4294967295UL,1UL,4294967295UL},{0x35CE774FL,8UL,0xEE16300EL},{0UL,4294967289UL,4294967295UL},{0x513DB112L,8UL,0x9251B4F9L}},{{4294967295UL,1UL,0x09D3EB84L},{0x513DB112L,0xFCD60F4BL,0x513DB112L},{0UL,0xEEBB2A73L,0x09D3EB84L},{0x35CE774FL,4294967295UL,0x9251B4F9L}},{{4294967295UL,0xEEBB2A73L,4294967295UL},{0x9251B4F9L,0xFCD60F4BL,0xEE16300EL},{4294967295UL,1UL,4294967295UL},{0x35CE774FL,8UL,0xEE16300EL}},{{0UL,4294967289UL,4294967295UL},{0x513DB112L,8UL,0x9251B4F9L},{4294967295UL,1UL,0x09D3EB84L},{0x513DB112L,0xFCD60F4BL,0x513DB112L}},{{0UL,0xEEBB2A73L,0x09D3EB84L},{0x35CE774FL,4294967295UL,0x9251B4F9L},{4294967295UL,0xEEBB2A73L,4294967295UL},{0x9251B4F9L,0xFCD60F4BL,0x35CE774FL}}};



static int func_1(void);
static int func_2(int p_3, char p_4, int p_5, union U0 p_6);
static unsigned short func_10(short p_11, unsigned p_12, unsigned short p_13);
static unsigned short func_18(unsigned * p_19, unsigned * p_20);
static unsigned func_33(unsigned * p_34);
static char func_39(int p_40);
static int func_48(unsigned ** p_49, unsigned * p_50, unsigned ** p_51, unsigned p_52, unsigned p_53);
static unsigned * func_55(int p_56);
static unsigned *** func_67(unsigned char p_68, unsigned ** p_69);
static short func_72(unsigned ** p_73, unsigned p_74, unsigned p_75);
static int func_1(void)
{
    unsigned short l_14 = 65528UL;
    unsigned *l_16 = &g_17;
    unsigned char *l_1090 = &g_155;
    char *l_1091 = (void*)0;
    char *l_1092[3][8][10] = {{{&g_832,&g_449,&g_832,&g_449,&g_868,&g_299,&g_832,&g_15,&g_299,&g_832},{&g_449,&g_15,&g_832,&g_449,&g_868,&g_15,&g_868,&g_449,&g_832,&g_15},{&g_868,&g_832,(void*)0,(void*)0,&g_832,(void*)0,&g_15,&g_832,&g_832,&g_449},{&g_449,&g_449,&g_832,&g_299,&g_832,(void*)0,(void*)0,&g_832,&g_299,&g_832},{&g_868,&g_868,&g_299,&g_832,&g_299,&g_15,(void*)0,&g_868,&g_15,(void*)0},{&g_449,&g_449,(void*)0,&g_449,&g_449,&g_299,(void*)0,&g_299,&g_449,&g_449},{&g_832,&g_868,&g_832,(void*)0,(void*)0,&g_832,(void*)0,&g_15,&g_832,&g_832},{&g_15,&g_449,&g_15,&g_832,&g_868,&g_449,&g_15,&g_15,&g_449,&g_868}},{{&g_449,&g_832,&g_832,&g_449,&g_832,&g_449,&g_868,&g_299,&g_832,&g_15},{&g_832,&g_15,(void*)0,&g_832,&g_868,&g_15,&g_15,&g_299,&g_15,&g_15},{&g_832,&g_449,&g_299,&g_449,&g_832,&g_868,&g_832,&g_832,&g_832,&g_868},{&g_299,&g_449,&g_15,&g_832,&g_832,&g_299,&g_868,&g_449,&g_449,&g_868},{&g_15,&g_832,&g_15,&g_15,&g_832,&g_15,&g_15,&g_449,&g_299,&g_15},{(void*)0,&g_299,&g_449,&g_832,&g_868,&g_299,&g_832,(void*)0,&g_449,(void*)0},{(void*)0,&g_15,&g_449,&g_832,&g_449,&g_15,(void*)0,&g_15,&g_15,&g_299},{&g_15,(void*)0,&g_15,&g_15,&g_299,&g_299,&g_449,&g_449,&g_15,&g_15}},{{&g_299,(void*)0,&g_868,&g_868,&g_868,&g_868,(void*)0,&g_299,&g_449,&g_832},{&g_832,&g_15,&g_15,&g_449,&g_299,&g_15,&g_832,&g_299,&g_15,&g_868},{&g_449,&g_299,&g_15,&g_299,&g_832,&g_299,&g_15,&g_299,&g_449,&g_15},{&g_832,(void*)0,(void*)0,&g_832,(void*)0,&g_15,&g_832,&g_832,&g_449,&g_832},{&g_449,&g_15,&g_15,&g_832,&g_15,&g_15,&g_832,&g_15,&g_15,&g_449},{&g_15,&g_832,&g_15,&g_15,&g_868,&g_832,&g_15,&g_449,&g_832,&g_15},{&g_832,&g_449,&g_832,&g_832,&g_868,&g_449,&g_868,&g_832,&g_832,&g_449},{&g_868,&g_15,&g_299,&g_832,&g_15,&g_299,&g_449,&g_15,&g_15,&g_832}}};
    int l_1093 = 0xEDBEC3BCL;
    int l_1094 = (-1L);
    union U0 l_1095[1] = {{1L}};
    int i, j, k;
    (*g_214) = (func_2(g_7, (l_1094 = (g_7 <= ((l_1093 = (safe_mod_func_int32_t_s_s((((*l_1090) = (func_10(l_14, (g_7 && ((*l_16) = (g_15 ^ (g_15 || g_15)))), func_18(g_21, l_16)) <= l_14)) >= l_14), l_14))) >= l_14))), l_14, l_1095[0]) != l_14);
    l_1094 = l_1095[0].f0;
    return l_1093;
}







static int func_2(int p_3, char p_4, int p_5, union U0 p_6)
{
    union U0 *l_1099 = &g_171[4];
    union U0 *l_1100 = &g_171[2];
    for (g_82 = 0; (g_82 >= (-8)); --g_82)
    {
        union U0 **l_1098[5];
        int i;
        for (i = 0; i < 5; i++)
            l_1098[i] = &g_253;
        (**g_148) = (void*)0;
        l_1100 = (l_1099 = (void*)0);
    }
    for (g_661 = (-24); (g_661 <= (-20)); g_661++)
    {
        for (g_832 = 0; (g_832 >= (-7)); g_832 = safe_sub_func_int16_t_s_s(g_832, 8))
        {
            return p_5;
        }
    }
    return p_4;
}







static unsigned short func_10(short p_11, unsigned p_12, unsigned short p_13)
{
    int l_1082 = 0x258BC3DCL;
    unsigned short *l_1087 = (void*)0;
    unsigned short *l_1088[2];
    unsigned *l_1089 = &g_17;
    int i;
    for (i = 0; i < 2; i++)
        l_1088[i] = &g_641[1][1][0];
    for (g_43 = (-16); (g_43 >= 31); g_43 = safe_add_func_uint16_t_u_u(g_43, 3))
    {
        int *l_1083 = &g_85;
        (*g_214) = l_1082;
        (**g_148) = l_1083;
        (**g_148) = (void*)0;
    }
    for (g_82 = 0; (g_82 >= 0); g_82 = safe_add_func_int32_t_s_s(g_82, 7))
    {
        char l_1086 = 0xE0L;
        return l_1086;
    }
    (*g_214) = (((l_1082 ^ (g_641[1][1][0] = p_12)) && (8L | (func_39((*g_214)) & g_7))) ^ 1UL);
    (*g_821) = ((l_1082 == p_12) >= l_1082);
    return l_1082;
}







static unsigned short func_18(unsigned * p_19, unsigned * p_20)
{
    char *l_721 = (void*)0;
    int l_727 = 0L;
    union U0 **l_747 = (void*)0;
    int l_764 = 0x1B159FEEL;
    short *l_770 = &g_661;
    short **l_769 = &l_770;
    unsigned char l_774 = 1UL;
    int **l_843[1];
    short l_861 = 4L;
    unsigned char l_895 = 0x9AL;
    char l_907 = 0x16L;
    int l_925 = 0xBEBA9DFBL;
    int ****l_942[3][8][1] = {{{&g_148},{&g_148},{&g_148},{&g_148},{(void*)0},{&g_148},{(void*)0},{&g_148}},{{(void*)0},{&g_148},{&g_148},{&g_148},{&g_148},{&g_148},{(void*)0},{&g_148}},{{(void*)0},{&g_148},{(void*)0},{&g_148},{&g_148},{&g_148},{&g_148},{&g_148}}};
    unsigned l_944 = 0x11837A86L;
    unsigned char l_945 = 1UL;
    unsigned char l_996 = 1UL;
    int l_1025 = 3L;
    unsigned **l_1029 = (void*)0;
    unsigned **l_1036 = (void*)0;
    unsigned **l_1060 = (void*)0;
    unsigned *l_1061 = &g_1024;
    char l_1079 = 0xE2L;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_843[i] = &g_100;
    for (g_22 = (-17); (g_22 >= 43); g_22++)
    {
        char l_28[7];
        short l_749[4] = {(-1L),(-1L),(-1L),(-1L)};
        int l_775[10];
        char l_784 = 0L;
        union U0 *l_820 = &g_171[2];
        int i;
        for (i = 0; i < 7; i++)
            l_28[i] = 0xABL;
        for (i = 0; i < 10; i++)
            l_775[i] = 1L;
        for (g_25[0][0] = 0; (g_25[0][0] == 6); ++g_25[0][0])
        {
            int l_719[4] = {(-6L),(-6L),(-6L),(-6L)};
            int *l_738 = &g_25[6][0];
            unsigned char *l_751[10] = {&g_155,&g_155,(void*)0,&g_155,&g_155,&g_155,&g_155,(void*)0,&g_155,&g_155};
            unsigned l_804[5] = {0UL,0UL,0UL,0UL,0UL};
            unsigned short *l_811 = &g_641[1][1][0];
            union U0 *l_818[5][8][6] = {{{&g_171[2],&g_171[0],&g_171[2],&g_171[2],&g_171[0],&g_171[2]},{&g_171[2],&g_171[0],&g_171[2],&g_171[2],&g_171[0],&g_171[2]},{&g_171[2],&g_171[0],&g_171[2],&g_171[2],&g_171[0],&g_171[2]},{&g_171[2],&g_171[0],&g_171[2],&g_171[2],&g_171[0],&g_171[2]},{&g_171[2],&g_171[0],&g_171[2],&g_171[2],&g_171[0],&g_171[2]},{&g_171[2],&g_171[0],&g_171[2],&g_171[2],&g_171[0],&g_171[2]},{&g_171[2],&g_171[0],&g_171[2],&g_171[2],&g_171[0],&g_171[2]},{&g_171[2],&g_171[0],&g_171[2],&g_171[2],&g_171[0],&g_171[2]}},{{&g_171[2],&g_171[0],&g_171[2],&g_171[2],&g_171[0],&g_171[2]},{&g_171[2],&g_171[0],&g_171[2],&g_171[2],&g_171[0],&g_171[2]},{&g_171[2],&g_171[0],&g_171[2],&g_171[2],&g_171[0],&g_171[2]},{&g_171[2],&g_171[0],&g_171[2],&g_171[2],&g_171[0],&g_171[2]},{&g_171[2],&g_171[0],&g_171[2],&g_171[2],&g_171[0],&g_171[2]},{&g_171[2],&g_171[0],&g_171[2],&g_171[2],&g_171[0],&g_171[2]},{&g_171[2],&g_171[0],&g_171[2],&g_171[2],&g_171[0],&g_171[2]},{&g_171[2],&g_171[0],&g_171[2],&g_171[2],&g_171[0],&g_171[2]}},{{&g_171[2],&g_171[0],&g_171[2],&g_171[2],&g_171[0],&g_171[2]},{&g_171[2],&g_171[0],&g_171[2],&g_171[2],&g_171[0],&g_171[2]},{&g_171[2],&g_171[0],&g_171[2],&g_171[2],&g_171[0],&g_171[2]},{&g_171[2],&g_171[0],&g_171[2],&g_171[2],&g_171[0],&g_171[2]},{&g_171[2],&g_171[0],&g_171[2],&g_171[2],&g_171[0],&g_171[2]},{&g_171[2],&g_171[0],&g_171[2],&g_171[2],&g_171[0],&g_171[2]},{&g_171[2],&g_171[0],&g_171[2],&g_171[2],&g_171[0],&g_171[2]},{&g_171[2],&g_171[0],&g_171[2],&g_171[2],&g_171[0],&g_171[2]}},{{&g_171[2],&g_171[0],&g_171[2],&g_171[2],&g_171[0],&g_171[2]},{&g_171[2],&g_171[0],&g_171[2],&g_171[2],&g_171[0],&g_171[2]},{&g_171[2],&g_171[0],&g_171[2],&g_171[2],&g_171[0],&g_171[2]},{&g_171[2],&g_171[0],&g_171[2],&g_171[2],&g_171[0],&g_171[2]},{&g_171[2],&g_171[0],&g_171[2],&g_171[2],&g_171[0],&g_171[2]},{&g_171[2],&g_171[0],&g_171[2],&g_171[2],&g_171[0],&g_171[2]},{&g_171[2],&g_171[0],&g_171[2],&g_171[2],&g_171[0],&g_171[2]},{&g_171[2],&g_171[0],(void*)0,(void*)0,&g_171[2],(void*)0}},{{(void*)0,&g_171[2],(void*)0,(void*)0,&g_171[2],(void*)0},{(void*)0,&g_171[2],(void*)0,(void*)0,&g_171[2],(void*)0},{(void*)0,&g_171[2],(void*)0,(void*)0,&g_171[2],(void*)0},{(void*)0,&g_171[2],(void*)0,(void*)0,&g_171[2],(void*)0},{(void*)0,&g_171[2],(void*)0,(void*)0,&g_171[2],(void*)0},{(void*)0,&g_171[2],(void*)0,(void*)0,&g_171[2],(void*)0},{(void*)0,&g_171[2],(void*)0,(void*)0,&g_171[2],(void*)0},{(void*)0,&g_171[2],(void*)0,(void*)0,&g_171[2],(void*)0}}};
            unsigned l_833 = 0xDB64E89BL;
            int i, j, k;
        }
    }
    for (g_832 = 0; (g_832 >= (-4)); g_832 = safe_sub_func_int8_t_s_s(g_832, 8))
    {
        unsigned *l_859 = &g_158;
        unsigned ****l_860 = &g_89;
        int l_865[6] = {0xD70E3CD4L,0xD70E3CD4L,0xD70E3CD4L,0xD70E3CD4L,0xD70E3CD4L,0xD70E3CD4L};
        char *l_866 = (void*)0;
        char *l_867 = &g_868;
        short l_875 = 0x6C82L;
        int i;
        if ((safe_sub_func_int8_t_s_s(((~func_33(l_859)) <= (&g_89 == l_860)), (g_155 = (249UL && ((*l_867) = (func_72(&p_20, ((l_861 != (((func_72((*g_89), (safe_div_func_int8_t_s_s((func_39((safe_unary_minus_func_uint32_t_u(l_865[3]))) != 0L), (-6L))), (*p_19)) < l_865[3]) <= (*p_19)) > 0L)) != l_865[5]), l_865[3]) < 4294967286UL)))))))
        {
            unsigned l_869 = 0x0419F2D7L;
            (*g_821) = ((*g_214) = l_869);
        }
        else
        {
            short l_871 = 0xC2F7L;
            unsigned **l_874 = &l_859;
            int l_881 = (-1L);
            for (g_299 = 0; (g_299 <= 0); g_299 += 1)
            {
                int *l_872 = &l_865[3];
                (*g_821) = ((***g_148) = l_865[3]);
                for (g_263 = 1; (g_263 <= 6); g_263 += 1)
                {
                    for (g_449 = 0; (g_449 >= 0); g_449 -= 1)
                    {
                        int i;
                        (***g_148) = (safe_unary_minus_func_uint32_t_u(l_865[(g_449 + 1)]));
                        if (l_871)
                            continue;
                    }
                }
                for (l_871 = 0; (l_871 >= 0); l_871 -= 1)
                {
                    unsigned short l_878 = 65535UL;
                    int l_882 = (-1L);
                    int *l_883 = &l_865[3];
                    l_872 = p_20;
                    for (g_158 = 0; (g_158 <= 0); g_158 += 1)
                    {
                        union U0 **l_873[9] = {&g_253,&g_253,&g_253,&g_253,&g_253,&g_253,&g_253,&g_253,&g_253};
                        int i;
                        g_253 = (void*)0;
                        (**g_148) = (**g_148);
                        if (l_865[5])
                            continue;
                        return l_865[3];
                    }
                }
            }
            for (g_43 = 0; (g_43 == 42); g_43 = safe_add_func_uint8_t_u_u(g_43, 1))
            {
                short l_887 = 7L;
                (**g_148) = p_19;
                if (l_887)
                    continue;
                (**g_148) = (**g_148);
                l_865[3] = (*g_821);
            }
            if (l_865[2])
                continue;
            if (l_865[3])
                break;
        }
        (**g_148) = (**g_148);
        if (l_875)
            break;
    }
    if ((*g_214))
    {
        for (g_832 = 0; (g_832 != (-30)); --g_832)
        {
            unsigned l_890 = 0x1B7C327FL;
            return l_890;
        }
    }
    else
    {
        unsigned char l_900 = 255UL;
        int *l_926 = &g_25[1][0];
        int *l_1027[5][5] = {{&g_82,&g_82,&g_82,&g_82,&g_82},{&g_37,&g_82,&g_37,&g_82,&g_37},{&g_82,&g_82,&g_82,&g_82,&g_82},{&g_37,&g_82,&g_37,&g_82,&g_37},{&g_82,&g_82,&g_82,&g_82,&g_82}};
        int ****l_1049 = &g_148;
        unsigned **l_1062 = (void*)0;
        int i, j;
        (**g_148) = func_55(((*p_19) > (safe_sub_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s((l_895 || func_72((*g_89), ((void*)0 == (*g_148)), (*p_19))), 1)), 0L))));
        if ((*g_214))
        {
            char l_908[9][8] = {{0xBCL,0x45L,1L,1L,0xDBL,0x9AL,0xA8L,0xF8L},{1L,0xDBL,0L,0x19L,0L,0xDBL,1L,0L},{0xEBL,0L,0xA8L,0x36L,7L,0x2FL,1L,0L},{0x5FL,0x05L,0xCBL,0xF8L,7L,0x5FL,0L,0x19L},{0xEBL,0x82L,0x36L,0L,0L,0x36L,0x82L,0xEBL},{1L,1L,0xB3L,0xA8L,0xDBL,0x9BL,0L,0xB3L},{0xEBL,0xDBL,0L,0xCBL,0xA8L,0x9BL,1L,0x5FL},{0xACL,1L,0x5FL,0x36L,0L,0x36L,0x5FL,1L},{0x5FL,0x82L,0xBCL,0xB3L,0x45L,0x5FL,0x05L,0xCBL}};
            unsigned char *l_909 = &l_774;
            int ****l_941[3][3][5] = {{{&g_148,&g_148,&g_148,&g_148,&g_148},{(void*)0,&g_148,&g_148,&g_148,&g_148},{&g_148,&g_148,(void*)0,&g_148,&g_148}},{{&g_148,&g_148,&g_148,&g_148,(void*)0},{&g_148,&g_148,&g_148,&g_148,&g_148},{&g_148,&g_148,(void*)0,&g_148,(void*)0}},{{&g_148,&g_148,(void*)0,&g_148,&g_148},{(void*)0,&g_148,(void*)0,&g_148,&g_148},{&g_148,&g_148,&g_148,&g_148,&g_148}}};
            unsigned **l_964 = &g_21;
            unsigned short l_986 = 65527UL;
            unsigned short *l_1004 = (void*)0;
            unsigned short *l_1005 = &l_986;
            int i, j, k;
            if (((*p_19) & (safe_rshift_func_uint8_t_u_u(((*l_909) = (!((safe_sub_func_int32_t_s_s((func_39(l_900) && (safe_rshift_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u((safe_sub_func_uint16_t_u_u((0x025BL & func_72(&p_20, l_900, (*p_19))), l_907)), 10)), l_900))), l_908[8][6])) > 0xB9L))), l_908[8][6]))))
            {
                unsigned l_918 = 0x0F9CC212L;
                int l_931 = 0x7BE78416L;
                int *****l_957 = &l_942[0][4][0];
                unsigned short *l_969 = &g_349;
                char *l_970 = &l_907;
                if ((safe_lshift_func_uint8_t_u_s((safe_sub_func_int8_t_s_s(((safe_lshift_func_int8_t_s_u(0xFAL, 3)) | (safe_sub_func_uint16_t_u_u(l_918, (safe_lshift_func_uint16_t_u_u(0UL, ((void*)0 == &l_900)))))), 0x0DL)), 1)))
                {
                    short l_940 = 1L;
                    unsigned **l_943 = &g_21;
                    char *l_946 = &g_868;
                    char *l_947[6][7][2] = {{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}}};
                    int *l_950 = &g_37;
                    int *l_951 = &l_931;
                    int i, j, k;
                    (**g_148) = (l_926 = func_55((safe_sub_func_int8_t_s_s((safe_sub_func_int32_t_s_s(l_925, (((*g_214) = (func_72((*g_89), l_918, (*g_21)) || 0xC4F445DEL)) <= l_918))), 0x0BL))));
                    (*g_821) = (safe_add_func_int8_t_s_s((g_299 = (g_832 = (((*l_946) = (safe_sub_func_int8_t_s_s((func_39((((l_931 = l_918) < (l_918 && l_940)) == 1L)) > l_918), 0xFCL))) | 249UL))), l_940));
                    for (l_727 = 0; (l_727 == 23); ++l_727)
                    {
                        return l_940;
                    }
                    l_951 = (l_950 = func_55((l_918 == 0x27L)));
                }
                else
                {
                    unsigned char l_956[9][8] = {{5UL,0x21L,0x6DL,0x21L,5UL,0UL,0x6DL,0xC6L},{1UL,255UL,0x3AL,255UL,255UL,0x3AL,0x16L,0x21L},{0UL,255UL,0x3AL,0x7EL,0xFBL,252UL,0x6DL,255UL},{255UL,0UL,0x6DL,0xC6L,0x7EL,9UL,0xDEL,0xDEL},{0x3AL,0UL,1UL,1UL,0UL,0x3AL,255UL,0x6DL},{0xDEL,0x16L,1UL,0UL,255UL,255UL,0x21L,0x16L},{255UL,0x21L,9UL,0UL,0x6DL,0xE6L,0xC6L,0x6DL},{1UL,0x6DL,0xFBL,1UL,255UL,0x16L,0xC3L,0xDEL},{0x21L,1UL,252UL,0xC6L,252UL,1UL,0x21L,255UL}};
                    unsigned char *l_962 = &l_895;
                    unsigned *l_963 = (void*)0;
                    int i, j;
                    for (g_868 = 4; (g_868 >= 16); g_868 = safe_add_func_uint32_t_u_u(g_868, 1))
                    {
                        return (*l_926);
                    }
                    (**g_148) = p_19;
                }
                (*g_821) = (safe_rshift_func_uint8_t_u_u(l_900, (((safe_rshift_func_uint16_t_u_s(((*l_969) = g_263), 15)) | g_38) & ((l_970 == l_970) && 0xD367L))));
                (**g_148) = l_926;
            }
            else
            {
                unsigned char l_973 = 0UL;
                unsigned *l_993 = &g_263;
                for (g_38 = (-6); (g_38 >= (-6)); ++g_38)
                {
                    unsigned l_975 = 4294967295UL;
                    char *l_980 = (void*)0;
                    char *l_981 = &g_449;
                    int *l_998 = (void*)0;
                    int *l_999 = &g_82;
                    union U0 **l_1001 = &g_253;
                }
            }
            (**g_148) = func_55((0x7F41L | ((*l_1005) = ((*p_19) || (*p_19)))));
        }
        else
        {
            unsigned ***l_1006[8] = {&g_419,&g_419,&g_419,&g_419,&g_419,&g_419,&g_419,&g_419};
            unsigned ****l_1007 = (void*)0;
            unsigned ****l_1008 = &g_89;
            char *l_1009[3];
            int *l_1014 = &l_764;
            int l_1017[2];
            short ***l_1023 = &l_769;
            int ****l_1050 = &g_148;
            unsigned l_1063 = 4294967295UL;
            int i;
            for (i = 0; i < 3; i++)
                l_1009[i] = &g_868;
            for (i = 0; i < 2; i++)
                l_1017[i] = 1L;
            g_253 = &g_171[2];
            if (((l_1006[0] != ((*l_1008) = l_1006[0])) && ((*l_926) = (*l_926))))
            {
                int *l_1012 = (void*)0;
                for (g_433 = 1; (g_433 <= 6); g_433 += 1)
                {
                    int l_1010 = 0x77E54825L;
                    int *l_1011[1][9][7] = {{{&l_925,&l_925,&l_925,&l_925,&l_925,&l_925,&l_925},{&l_925,(void*)0,&l_925,(void*)0,(void*)0,&l_925,(void*)0},{&l_925,&l_925,&l_925,&l_925,&l_925,&l_925,&l_925},{&l_925,(void*)0,&l_925,&l_925,(void*)0,&l_925,&l_925},{&l_925,&l_925,&l_925,&l_925,&l_925,&l_925,&l_925},{(void*)0,&l_925,&l_925,(void*)0,&l_925,&l_925,(void*)0},{&l_925,&l_925,&l_925,&l_925,&l_925,&l_925,&l_925},{(void*)0,(void*)0,&l_925,(void*)0,(void*)0,&l_925,(void*)0},{&l_925,&l_925,&l_925,&l_925,&l_925,&l_925,&l_925}}};
                    int *l_1013[1];
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                        l_1013[i] = &l_1010;
                    (**g_148) = l_1012;
                    for (l_1010 = 0; (l_1010 <= 6); l_1010 += 1)
                    {
                        l_1014 = l_1013[0];
                    }
                }
                return g_15;
            }
            else
            {
                int l_1015 = 0x9B8C9814L;
                unsigned char *l_1016 = &l_774;
                int l_1018 = 0xAD190091L;
                l_1018 = (l_1017[1] = ((l_1015 = (&g_89 != &g_89)) == ((*l_1016) = (*l_926))));
            }
            if ((((void*)0 == l_926) | (safe_lshift_func_uint8_t_u_s((((65535UL >= ((((safe_mod_func_int8_t_s_s((((*l_770) = (*l_1014)) == ((void*)0 == &g_253)), (*l_926))) || (+g_155)) | (!((l_1023 == &l_769) >= g_1024))) > 5L)) >= l_1025) < 4294967295UL), (*l_926)))))
            {
                unsigned l_1026[8][9];
                int *l_1028 = &l_1025;
                int i, j;
                for (i = 0; i < 8; i++)
                {
                    for (j = 0; j < 9; j++)
                        l_1026[i][j] = 0xC8520A39L;
                }
                l_1028 = l_1027[4][3];
                (**g_148) = p_20;
            }
            else
            {
                int l_1032 = 0x93B78B8AL;
                unsigned **l_1035 = (void*)0;
                (**g_148) = &l_1017[1];
                if (func_72(l_1029, (l_1032 = ((((*l_1014) >= (l_1032 > (g_449 = g_771))) > ((safe_lshift_func_uint8_t_u_u((*l_1014), 7)) & (*l_926))) | l_1032)), (*p_19)))
                {
                    int l_1041[9][6][3] = {{{0x9E98D27DL,(-1L),(-9L)},{(-2L),(-9L),(-2L)},{0x3F57EFD9L,(-9L),(-1L)},{(-1L),(-1L),0x1CC913AFL},{(-9L),0xA04375F8L,0L},{0x76E95600L,0x1CC913AFL,0xC1855CF1L}},{{(-9L),(-1L),0xD311A49BL},{(-1L),0x8991EB1DL,0x8991EB1DL},{0x3F57EFD9L,0L,0x8991EB1DL},{(-2L),0x76E95600L,0xD311A49BL},{0x9E98D27DL,(-2L),0xC1855CF1L},{0x10ED398AL,1L,0L}},{{(-9L),(-2L),0x1CC913AFL},{0xA04375F8L,0x76E95600L,0x1CC913AFL},{0xD311A49BL,0xD311A49BL,0x9E98D27DL},{0xD311A49BL,(-1L),(-9L)},{(-2L),(-9L),0x10ED398AL},{(-9L),(-1L),(-2L)}},{{0xA04375F8L,(-2L),0x10ED398AL},{1L,0x8991EB1DL,(-9L)},{0x9E98D27DL,1L,0x9E98D27DL},{0xC1855CF1L,1L,0x1CC913AFL},{0x1CC913AFL,0x8991EB1DL,(-1L)},{1L,(-2L),0xD311A49BL}},{{0x3F57EFD9L,(-1L),0x73AC37C2L},{1L,(-9L),(-1L)},{0x1CC913AFL,(-1L),(-1L)},{0xC1855CF1L,0xD311A49BL,(-1L)},{0x9E98D27DL,0x3F57EFD9L,(-1L)},{1L,0x9E98D27DL,0x73AC37C2L}},{{0xA04375F8L,0L,0xD311A49BL},{(-9L),0x9E98D27DL,(-1L)},{(-2L),0x3F57EFD9L,0x1CC913AFL},{0xD311A49BL,0xD311A49BL,0x9E98D27DL},{0xD311A49BL,(-1L),(-9L)},{(-2L),(-9L),0x10ED398AL}},{{(-9L),(-1L),(-2L)},{0xA04375F8L,(-2L),0x10ED398AL},{1L,0x8991EB1DL,(-9L)},{0x9E98D27DL,1L,0x9E98D27DL},{0xC1855CF1L,1L,0x1CC913AFL},{0x1CC913AFL,0x8991EB1DL,(-1L)}},{{1L,(-2L),0xD311A49BL},{0x3F57EFD9L,(-1L),0x73AC37C2L},{1L,(-9L),(-1L)},{0x1CC913AFL,0L,0L},{(-1L),0x10ED398AL,0L},{0x3F57EFD9L,0x8991EB1DL,0xA04375F8L}},{{0xC1855CF1L,0x3F57EFD9L,(-9L)},{1L,0x73AC37C2L,0x10ED398AL},{(-1L),0x3F57EFD9L,0x9E98D27DL},{0x76E95600L,0x8991EB1DL,(-2L)},{0x10ED398AL,0x10ED398AL,0x3F57EFD9L},{0x10ED398AL,0L,(-1L)}}};
                    int i, j, k;
                    return l_1041[7][0][1];
                }
                else
                {
                    unsigned short *l_1047 = &g_771;
                    int l_1048 = 2L;
                    unsigned char *l_1057 = &l_774;
                    for (l_996 = 18; (l_996 <= 4); l_996 = safe_sub_func_uint8_t_u_u(l_996, 1))
                    {
                        char l_1046[5];
                        int i;
                        for (i = 0; i < 5; i++)
                            l_1046[i] = 3L;
                        (*l_1014) = ((safe_add_func_int32_t_s_s(((*g_214) = l_1046[4]), l_1032)) != l_1032);
                        (*g_214) = l_1046[3];
                        if ((*l_1014))
                            continue;
                    }
                    (***l_1049) = (**g_148);
                }
                (****l_1049) = (safe_sub_func_uint16_t_u_u((*l_1014), 0x21C5L));
            }
            if (func_39(((*g_214) = (g_1064[0][0][1] != (*l_1014)))))
            {
                unsigned l_1065 = 0x46DA4F0DL;
                (*g_214) = (*g_821);
                (*g_214) = (*l_926);
                l_1065 = 0x04EBD043L;
                (*l_1014) = 4L;
            }
            else
            {
                unsigned l_1066 = 2UL;
                unsigned char *l_1073 = &l_895;
                unsigned char *l_1074 = &l_945;
                int l_1075[5];
                unsigned **l_1076 = (void*)0;
                unsigned short *l_1077 = (void*)0;
                int l_1078 = 5L;
                int i;
                for (i = 0; i < 5; i++)
                    l_1075[i] = 0x1346410BL;
                (*g_821) = l_1066;
                (*g_821) = l_1066;
                (*g_821) = ((l_1075[2] = ((safe_lshift_func_int8_t_s_s((*l_1014), l_1066)) | (safe_lshift_func_uint8_t_u_u(((~((*p_19) == (0x0FCEL || l_1066))) < ((*l_1074) = ((*l_1073) = (safe_lshift_func_uint16_t_u_u(g_641[1][1][0], 15))))), 0)))) == ((*l_1014) != (l_1078 = l_1066)));
                (***l_1049) = (***l_1050);
            }
        }
    }
    return l_1079;
}







static unsigned func_33(unsigned * p_34)
{
    int l_36[7][8] = {{0x31DDA87BL,0x3A64E785L,0x57994279L,(-3L),0xB0D58E7EL,(-3L),0x57994279L,0x3A64E785L},{(-1L),5L,0x57617C0EL,0L,0xA450C197L,0x43EC3E1BL,0xDB956746L,0x57994279L},{0x3A64E785L,(-3L),0x309AB83EL,0xDB956746L,(-1L),(-1L),0xDB956746L,0x309AB83EL},{0xDB956746L,0xDB956746L,0x57617C0EL,0x43EC3E1BL,0L,0xE05243B9L,0x57994279L,0x31DDA87BL},{0L,0xE05243B9L,0x57994279L,0x31DDA87BL,7L,0x309AB83EL,7L,0x31DDA87BL},{0xE05243B9L,0x57617C0EL,0xE05243B9L,0x43EC3E1BL,0x4898D08FL,0x3A64E785L,(-3L),0x309AB83EL},{0L,0xA450C197L,0x43EC3E1BL,0xDB956746L,0x57994279L,0x4898D08FL,0x4898D08FL,0x57994279L}};
    unsigned *l_42 = &g_43;
    int *l_45 = &l_36[6][4];
    int l_450[5][10] = {{(-1L),0x3BD710D5L,3L,0x3BD710D5L,(-1L),0x3BD710D5L,3L,0x3BD710D5L,(-1L),0x3BD710D5L},{0L,0x3BD710D5L,0L,0x7E91CF66L,0L,0x3BD710D5L,0L,0x7E91CF66L,0L,0x3BD710D5L},{(-1L),0x7E91CF66L,3L,0x7E91CF66L,(-1L),0x7E91CF66L,3L,0x7E91CF66L,(-1L),0x7E91CF66L},{0L,0x7E91CF66L,0L,0x3BD710D5L,0L,0x7E91CF66L,0L,0x3BD710D5L,0L,0x7E91CF66L},{(-1L),0x3BD710D5L,3L,0x3BD710D5L,(-1L),0x3BD710D5L,3L,0x3BD710D5L,(-1L),0x3BD710D5L}};
    short l_467 = (-8L);
    int ***l_518 = &g_99[1][4];
    unsigned short *l_524 = &g_349;
    unsigned ***l_559[1];
    union U0 *l_560 = &g_171[2];
    unsigned short l_567 = 0x7DD3L;
    char *l_600 = &g_299;
    char **l_599 = &l_600;
    short ****l_639[5][4][1] = {{{&g_573[0][3][0]},{&g_573[0][3][0]},{(void*)0},{&g_573[0][3][0]}},{{&g_573[0][3][0]},{(void*)0},{&g_573[0][3][0]},{&g_573[0][3][0]}},{{(void*)0},{&g_573[0][3][0]},{&g_573[0][3][0]},{(void*)0}},{{&g_573[0][3][0]},{&g_573[0][3][0]},{(void*)0},{&g_573[0][3][0]}},{{&g_573[0][3][0]},{(void*)0},{&g_573[0][3][0]},{&g_573[0][3][0]}}};
    unsigned l_698 = 9UL;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_559[i] = &g_90[3];
    for (g_37 = 0; (g_37 <= 6); g_37 += 1)
    {
        unsigned char l_44 = 0xA5L;
        int ****l_445 = &g_148;
        unsigned ****l_466 = (void*)0;
        unsigned **l_471 = &g_420;
        short l_476 = 0x53DCL;
        for (g_38 = 5; (g_38 >= 2); g_38 -= 1)
        {
            unsigned **l_41 = &g_21;
            int *l_463[1][1];
            unsigned l_469 = 0UL;
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 1; j++)
                    l_463[i][j] = &g_82;
            }
        }
        (*l_45) = func_72(l_471, (safe_sub_func_uint16_t_u_u(((***g_89) <= (*g_100)), ((*l_45) = (((safe_lshift_func_int8_t_s_s((+l_476), (((*l_45) == 0x4683L) != (safe_rshift_func_int8_t_s_s((g_449 = (*l_45)), 3))))) | (****l_445)) == (safe_div_func_uint16_t_u_u((*l_45), 65535UL)))))), (****l_445));
    }
    for (g_263 = (-16); (g_263 != 11); g_263++)
    {
        unsigned char *l_484 = &g_155;
        int l_491[9] = {0x2D86601EL,0x3E43AFF5L,0x2D86601EL,0x2D86601EL,0x3E43AFF5L,0x2D86601EL,0x2D86601EL,0x3E43AFF5L,0x2D86601EL};
        int *l_500 = &l_491[8];
        int l_519 = (-10L);
        unsigned **l_551[5];
        unsigned l_552[1];
        unsigned short l_562 = 0x8D49L;
        short *l_615[10] = {&g_64,&g_64,&g_64,&g_64,&g_64,&g_64,&g_64,&g_64,&g_64,&g_64};
        int l_618[10] = {0xE4B68F21L,0xE4B68F21L,0xE4B68F21L,0xE4B68F21L,0xE4B68F21L,0xE4B68F21L,0xE4B68F21L,0xE4B68F21L,0xE4B68F21L,0xE4B68F21L};
        int l_624 = 0x014DEB2CL;
        unsigned l_646 = 0xBACBDBC0L;
        unsigned short *l_679[2];
        short **l_704 = &l_615[0];
        int i;
        for (i = 0; i < 5; i++)
            l_551[i] = (void*)0;
        for (i = 0; i < 1; i++)
            l_552[i] = 4294967295UL;
        for (i = 0; i < 2; i++)
            l_679[i] = &g_641[1][1][0];
        for (g_299 = 4; (g_299 >= 0); g_299 -= 1)
        {
            union U0 **l_483 = &g_253;
            unsigned char *l_485 = &g_155;
            int l_488[8][9][3] = {{{0x8B27398FL,0xE1464F7EL,(-1L)},{0x3ED526DDL,0x2AB22896L,0L},{1L,0x15D4280DL,5L},{0xD38B8C02L,(-7L),2L},{5L,0xC53C94F2L,0xE3CC6194L},{0x062805EBL,0x2717195AL,0x9ED82279L},{0L,1L,0xD264D60CL},{0x11EF6329L,(-1L),0x8B27398FL},{1L,0L,(-1L)}},{{0xC53C94F2L,0x8B27398FL,0xC53C94F2L},{1L,0L,(-1L)},{0xCEDB6F3AL,0L,0xA5284E26L},{5L,0x2AB22896L,(-1L)},{0xCFD34854L,(-1L),0x0334D9A9L},{5L,0xE3CC6194L,(-1L)},{0xCEDB6F3AL,0x64B21D8BL,3L},{1L,0x22196245L,0xE1464F7EL},{0xC53C94F2L,1L,0L}},{{1L,0xFFC98EF5L,5L},{0x11EF6329L,0x6EC776B1L,3L},{0L,0x836F3AD6L,0x8856C5A7L},{0x062805EBL,(-1L),5L},{5L,1L,0x2CF5A64AL},{0x836F3AD6L,(-1L),0xA1A5EEF7L},{(-7L),0x8EE927B6L,9L},{1L,0x0F28EA8EL,0x6EC776B1L},{0x8856C5A7L,0xA1A5EEF7L,0x6EC776B1L}},{{1L,0xDBDE20E0L,9L},{6L,0x4C1BCE0BL,0xA1A5EEF7L},{0x07D834A7L,0xB317A5AEL,0x2CF5A64AL},{(-1L),0xF2899232L,5L},{(-7L),0x2B9C000EL,0x8856C5A7L},{0xD264D60CL,1L,3L},{(-1L),3L,5L},{0x5819AA47L,5L,0L},{0x4C1BCE0BL,0xCFD34854L,0xCFD34854L}},{{(-1L),0x2CF5A64AL,(-1L)},{0x22196245L,6L,(-7L)},{5L,0x062805EBL,0xA1A5EEF7L},{(-1L),(-1L),2L},{0x2717195AL,0x062805EBL,0xDBDE20E0L},{5L,6L,0xE1464F7EL},{7L,0x2CF5A64AL,0L},{(-1L),0xCFD34854L,0x0334D9A9L},{0x836F3AD6L,1L,0x953FFB77L}},{{(-1L),(-1L),0L},{1L,0xA5284E26L,0x0F28EA8EL},{0x0334D9A9L,0xE3CC6194L,1L},{0xE3CC6194L,1L,0x836F3AD6L},{0x2B9C000EL,(-1L),6L},{(-1L),0x2717195AL,0x11EF6329L},{6L,0L,0x8B27398FL},{1L,(-1L),7L},{1L,0xFFC98EF5L,(-1L)}},{{6L,1L,0x8856C5A7L},{(-1L),1L,0x6EBD1A48L},{0x2B9C000EL,0x11EF6329L,(-1L)},{0xE3CC6194L,0xE1464F7EL,0xA5284E26L},{0x0334D9A9L,7L,0x4C1BCE0BL},{1L,0L,(-1L)},{(-1L),6L,0x2AB22896L},{0x836F3AD6L,0x2AB22896L,0x062805EBL},{(-1L),(-1L),0xF2899232L}},{{7L,0x8B27398FL,(-1L)},{5L,1L,0L},{0x2717195AL,1L,0xE3CC6194L},{(-1L),5L,0L},{(-1L),0x3ED526DDL,1L},{0L,(-1L),0x3ED526DDL},{6L,0x07D834A7L,0L},{0xFFC98EF5L,5L,0x15D4280DL},{0x0334D9A9L,0x062805EBL,1L}}};
            unsigned short *l_492 = (void*)0;
            unsigned short *l_493[9][1][10] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
            short *l_494 = &g_171[2].f1;
            char *l_536 = &g_449;
            int *l_540 = &l_488[4][5][1];
            int **l_555[6][2];
            int i, j, k;
            for (i = 0; i < 6; i++)
            {
                for (j = 0; j < 2; j++)
                    l_555[i][j] = &l_540;
            }
        }
    }
    return (***l_518);
}







static char func_39(int p_40)
{
    return g_7;
}







static int func_48(unsigned ** p_49, unsigned * p_50, unsigned ** p_51, unsigned p_52, unsigned p_53)
{
    unsigned **l_435 = &g_21;
    int l_436 = 0x00B4D399L;
    int *l_437 = &l_436;
    int *l_438 = (void*)0;
    (**g_148) = func_55((p_52 | ((*g_214) = func_72(l_435, l_436, l_436))));
    for (g_82 = 0; (g_82 <= 6); g_82 += 1)
    {
        int *l_439[4];
        int i;
        for (i = 0; i < 4; i++)
            l_439[i] = &l_436;
        l_438 = ((**g_148) = (l_437 = (**g_148)));
        (**g_148) = l_439[1];
        if ((***g_148))
            break;
        for (g_321 = 0; g_321 < 7; g_321 += 1)
        {
            g_90[g_321] = (void*)0;
        }
        for (g_349 = 0; (g_349 <= 6); g_349 += 1)
        {
            if ((*g_100))
                break;
            (**g_148) = l_439[1];
            for (g_85 = 0; (g_85 <= 6); g_85 += 1)
            {
                (***g_148) = ((void*)0 == &g_253);
                for (l_436 = 6; (l_436 >= 2); l_436 -= 1)
                {
                    (**g_148) = (l_437 = p_50);
                }
                (**g_148) = l_439[3];
            }
        }
    }
    return (*g_214);
}







static unsigned * func_55(int p_56)
{
    short *l_63[3];
    int l_65 = 0xECA2A428L;
    int l_66 = (-3L);
    unsigned **l_76 = &g_21;
    unsigned ****l_333 = &g_89;
    int *l_334 = (void*)0;
    int *l_335 = &l_66;
    unsigned char l_350 = 0x2EL;
    int *l_367 = &l_66;
    char *l_380 = &g_15;
    char **l_379 = &l_380;
    int i;
    for (i = 0; i < 3; i++)
        l_63[i] = &g_64;
    if (func_39((((safe_lshift_func_int16_t_s_s((l_66 = (safe_add_func_uint32_t_u_u((p_56 | (safe_rshift_func_uint16_t_u_u(((l_65 = 0x236CL) == p_56), 8))), l_66))), 11)) && ((*l_335) = (((*g_214) = ((func_39(((*g_214) = (~((((*l_333) = func_67((safe_rshift_func_int16_t_s_u(func_72(l_76, (~(safe_div_func_int8_t_s_s(g_25[0][0], func_39(((l_66 != (p_56 != 0x9AL)) >= g_43))))), p_56), 8)), l_76)) == &g_90[3]) ^ p_56)))) == p_56) <= 0x0FL)) | 0xE41F5763L))) > g_43)))
    {
        unsigned short *l_348[4][5][1] = {{{&g_349},{&g_349},{&g_349},{(void*)0},{&g_349}},{{(void*)0},{&g_349},{&g_349},{&g_349},{(void*)0}},{{&g_349},{(void*)0},{&g_349},{&g_349},{&g_349}},{{(void*)0},{&g_349},{(void*)0},{&g_349},{&g_349}}};
        int l_351[8][10][3] = {{{4L,2L,0xFBF150C9L},{0x41241078L,0xE176B3DDL,0x315900BAL},{0x78300466L,(-1L),0xEAC531B9L},{0x17C25CDBL,0x41241078L,0x315900BAL},{6L,4L,0xFBF150C9L},{1L,7L,0xC810448BL},{0x2DB91D49L,0x322FB90FL,2L},{0xC39AD116L,(-6L),0x1A0847B1L},{0x6D9D4937L,0x0083E1DDL,1L},{0xC810448BL,0L,0L}},{{0x2841F47CL,0L,(-3L)},{0L,4L,(-5L)},{1L,0L,(-2L)},{0xFF009544L,0x0EF32D9AL,0x43B0D8F9L},{0x1E00628DL,0x34EAE28CL,(-4L)},{0x43B0D8F9L,1L,0xA8B97A13L},{0x34EAE28CL,0xE291C010L,0x5B8DC5F0L},{0x17CCAD50L,0x65E72275L,(-1L)},{0x3BD3D90AL,0x9676EB1AL,0x9676EB1AL},{(-3L),(-3L),1L}},{{1L,(-1L),0xEC79FE2DL},{0L,0x5BAC8DA6L,0x17CCAD50L},{1L,(-9L),1L},{0L,0xABC182B6L,7L},{7L,0xEBE0AD6EL,(-6L)},{(-8L),0xBFBA87FDL,0xB0FD3614L},{0xBEB0EB3CL,0L,0L},{0L,(-3L),(-8L)},{0x3179C46FL,(-1L),0x5F87B978L},{0xBDA7D396L,(-1L),0xB2672286L}},{{0xEBE0AD6EL,0x5B8DC5F0L,0x3BD3D90AL},{0x6262A0CCL,0xC7E0C1E9L,0x1A0847B1L},{4L,0L,0xF501CBCAL},{1L,0x17CCAD50L,0xC39AD116L},{1L,0xE291C010L,0xF9CFB12DL},{8L,1L,0xB671ABEAL},{0x45496BD6L,4L,0L},{0x17CCAD50L,0x43B0D8F9L,0L},{(-1L),0xBAF42E43L,(-1L)},{0x315900BAL,0xB0FD3614L,(-5L)}},{{0L,0L,1L},{(-6L),(-1L),0xFF009544L},{(-1L),7L,0x6D9D4937L},{(-6L),0x311864CAL,(-3L)},{0L,(-4L),0xFBF150C9L},{0x315900BAL,(-1L),0x943134DEL},{(-1L),0xEAC531B9L,0x1E00628DL},{0x17CCAD50L,0L,0x65E72275L},{0x45496BD6L,(-2L),0L},{8L,0L,0xC7E0C1E9L}},{{1L,0xF9CFB12DL,(-1L)},{1L,0x65E72275L,0xA8B97A13L},{4L,0xEC79FE2DL,(-1L)},{0x6262A0CCL,0L,0xC1C48D3FL},{(-6L),0x2DB91D49L,0xFBF150C9L},{0x2BAECEEBL,(-8L),0x0529A7F6L},{(-10L),1L,0x2DB91D49L},{0xF59F785AL,(-1L),0x943134DEL},{2L,2L,0x0083E1DDL},{0L,0x943134DEL,(-3L)}},{{0xF501CBCAL,2L,(-10L)},{0x43B0D8F9L,0x5BAC8DA6L,1L},{0xA40525D4L,0xF501CBCAL,(-10L)},{4L,0x2BAECEEBL,(-3L)},{(-1L),0xBEB0EB3CL,0x0083E1DDL},{1L,7L,0x943134DEL},{(-2L),0xFE5EFDCAL,0x2DB91D49L},{0xB2672286L,0xB671ABEAL,0x0529A7F6L},{0x0083E1DDL,6L,0xFBF150C9L},{0x17CCAD50L,0xF59F785AL,0xC1C48D3FL}},{{(-1L),7L,1L},{0x41241078L,8L,0L},{0x3179C46FL,0xE291C010L,0x6D9D4937L},{(-3L),0xBFBA87FDL,0L},{0x6D9D4937L,(-1L),0xFC5C4973L},{0xBFBA87FDL,0x6262A0CCL,1L},{0xF9CFB12DL,0L,0x2841F47CL},{8L,(-7L),(-7L)},{1L,0x3BD3D90AL,(-1L)},{0xB0FD3614L,(-5L),0xBDA7D396L}}};
        unsigned *l_352[3];
        int l_353 = 0x0E25FBF8L;
        unsigned *l_372[2][9] = {{&g_263,(void*)0,&g_263,(void*)0,(void*)0,&g_263,(void*)0,&g_263,(void*)0},{&g_263,(void*)0,(void*)0,&g_263,(void*)0,&g_263,(void*)0,&g_263,(void*)0}};
        char *l_398 = (void*)0;
        int l_413 = 0x56ECF8EFL;
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_352[i] = &g_263;
        if ((+((safe_add_func_int8_t_s_s((safe_rshift_func_int16_t_s_s((func_39(p_56) | (safe_mod_func_int8_t_s_s((safe_rshift_func_int16_t_s_s(((safe_sub_func_uint8_t_u_u(((l_351[1][4][1] = (safe_rshift_func_int16_t_s_s((g_303 != l_348[0][3][0]), (l_350 && 0xE3L)))) & func_72((**l_333), (l_352[2] == ((**g_89) = (***l_333))), l_353)), p_56)) < g_158), 8)), p_56))), 14)), p_56)) <= 8L)))
        {
            int *l_356[10] = {&g_38,&g_38,&l_351[1][4][1],&g_38,&g_38,&l_351[1][4][1],&g_38,&g_38,&l_351[1][4][1],&g_38};
            int i;
            for (l_65 = 5; (l_65 == (-8)); l_65 = safe_sub_func_int16_t_s_s(l_65, 1))
            {
                int **l_357 = &l_356[6];
                int *l_358 = (void*)0;
                l_358 = ((*l_357) = ((**g_148) = l_356[9]));
                l_353 = ((*l_335) = ((safe_mod_func_uint8_t_u_u(((~p_56) ^ ((safe_rshift_func_int8_t_s_u(func_39((*g_214)), 6)) != (func_39((*l_335)) && (l_356[9] == (void*)0)))), p_56)) > (safe_lshift_func_int8_t_s_u(func_39(p_56), 2))));
                if ((*g_100))
                    continue;
            }
            for (g_64 = 7; (g_64 >= 3); g_64 -= 1)
            {
                (*g_214) = (&l_350 == ((*g_239) = (*g_239)));
                for (g_82 = 9; (g_82 >= 0); g_82 -= 1)
                {
                    unsigned char l_365[2][1];
                    int i, j;
                    for (i = 0; i < 2; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_365[i][j] = 1UL;
                    }
                    for (l_66 = 0; (l_66 <= 2); l_66 += 1)
                    {
                        int i;
                        return l_352[l_66];
                    }
                    l_365[1][0] = ((*l_335) = p_56);
                }
            }
        }
        else
        {
            int *l_366 = &g_85;
            (**g_148) = l_366;
            if (l_351[3][1][1])
            {
                (*g_214) = p_56;
                (**g_148) = l_367;
                for (g_64 = (-14); (g_64 <= (-15)); --g_64)
                {
                    union U0 **l_370 = (void*)0;
                    union U0 **l_371 = &g_253;
                    (*l_371) = (void*)0;
                    return l_372[1][8];
                }
            }
            else
            {
                (*g_214) = 0x69ECA57AL;
                (*g_214) = (*l_366);
                (**g_148) = &l_65;
                for (p_56 = 0; (p_56 <= (-30)); --p_56)
                {
                    int *l_375 = &g_25[0][0];
                    union U0 *l_376 = (void*)0;
                    union U0 **l_377 = &l_376;
                    (**g_148) = l_375;
                    if (p_56)
                        continue;
                    (**g_148) = l_375;
                    (*l_377) = l_376;
                }
            }
        }
        l_379 = g_378;
        for (l_350 = 0; (l_350 <= 32); l_350 = safe_add_func_int32_t_s_s(l_350, 1))
        {
            int *l_383 = &g_82;
            (**g_148) = l_383;
            for (p_56 = 1; (p_56 <= 6); p_56 += 1)
            {
                unsigned short l_387 = 0x1306L;
                union U0 *l_396 = &g_171[2];
                int l_407[3];
                int l_408 = 9L;
                unsigned l_416 = 0x93E3E66BL;
                int i;
                for (i = 0; i < 3; i++)
                    l_407[i] = (-3L);
                (*l_335) = (0x815BL <= p_56);
                for (g_299 = 4; (g_299 >= 2); g_299 -= 1)
                {
                    unsigned l_386[10][5] = {{1UL,0xAB1EB8AEL,0xAB1EB8AEL,1UL,0xAB1EB8AEL},{0x3884A26DL,1UL,0x87BFC06CL,1UL,0x3884A26DL},{0xAB1EB8AEL,1UL,0xAB1EB8AEL,0xAB1EB8AEL,1UL},{0x3884A26DL,0x27C9763CL,0x087E2338L,1UL,0x087E2338L},{1UL,1UL,4294967290UL,1UL,1UL},{0x087E2338L,1UL,0x087E2338L,0x27C9763CL,0x3884A26DL},{1UL,0xAB1EB8AEL,0xAB1EB8AEL,1UL,0xAB1EB8AEL},{0x3884A26DL,1UL,0x87BFC06CL,1UL,0x3884A26DL},{0xAB1EB8AEL,1UL,0xAB1EB8AEL,0xAB1EB8AEL,1UL},{0x3884A26DL,0x27C9763CL,0x087E2338L,1UL,0x087E2338L}};
                    int i, j;
                    (**g_148) = l_383;
                    (*l_335) = (safe_add_func_int32_t_s_s((l_386[4][2] = func_39(l_353)), 0x8993D4E9L));
                }
                if ((~l_387))
                {
                    int *l_400[2][5][7];
                    int i, j, k;
                    for (i = 0; i < 2; i++)
                    {
                        for (j = 0; j < 5; j++)
                        {
                            for (k = 0; k < 7; k++)
                                l_400[i][j][k] = &l_66;
                        }
                    }
                    if ((safe_div_func_int16_t_s_s(((*l_335) = (safe_mod_func_int8_t_s_s((*l_367), (*l_335)))), (safe_div_func_int16_t_s_s((*l_383), (g_349 = ((safe_sub_func_uint16_t_u_u((((((p_56 || (-1L)) | p_56) > (l_396 != (void*)0)) && ((0x98L | p_56) | p_56)) & 0x56220A6EL), p_56)) || g_25[2][0])))))))
                    {
                        union U0 **l_397 = &g_253;
                        (**g_148) = (**g_148);
                        (**g_148) = &l_353;
                        (*l_397) = (void*)0;
                    }
                    else
                    {
                        char *l_399 = (void*)0;
                        int i;
                        if ((*g_214))
                            break;
                        (*g_214) = (l_387 == ((p_56 & 1UL) >= (l_398 == l_399)));
                        (**g_148) = l_400[0][2][2];
                        (**g_148) = l_383;
                    }
                    l_400[0][2][2] = l_400[0][4][1];
                    l_408 = (((*g_214) = (l_407[0] = (safe_add_func_uint8_t_u_u(((safe_unary_minus_func_uint8_t_u(p_56)) != (((*l_335) = 0L) | l_353)), ((func_39(p_56) || (safe_lshift_func_uint8_t_u_u((g_349 != ((!(safe_unary_minus_func_int32_t_s((*l_383)))) && (p_56 != (p_56 == 0xF5L)))), 6))) <= p_56))))) ^ 0L);
                    for (g_321 = 0; (g_321 <= 2); g_321 += 1)
                    {
                        int i;
                        (*l_367) = p_56;
                        (**g_148) = l_352[g_321];
                        (***g_148) = (*l_383);
                    }
                }
                else
                {
                    (*l_367) = (safe_rshift_func_int16_t_s_s(((safe_sub_func_uint32_t_u_u((l_387 < 0xDEL), ((*l_383) = func_72((*g_89), ((l_413 & ((***g_148) = (0x83L ^ ((safe_div_func_uint8_t_u_u(0UL, ((p_56 == func_39((***g_148))) | p_56))) && p_56)))) <= l_416), l_351[1][4][1])))) || (*g_100)), g_43));
                }
            }
        }
    }
    else
    {
        int *l_417[8] = {(void*)0,(void*)0,&g_25[0][0],(void*)0,(void*)0,&g_25[0][0],(void*)0,(void*)0};
        int i;
        (**g_148) = l_417[2];
lbl_418:
        (**g_148) = &l_66;
        (**g_148) = l_417[2];
        if (g_7)
            goto lbl_418;
    }
    return (***l_333);
}







static unsigned *** func_67(unsigned char p_68, unsigned ** p_69)
{
    int *l_331[3];
    unsigned ***l_332 = &g_90[2];
    int i;
    for (i = 0; i < 3; i++)
        l_331[i] = &g_82;
    (**g_148) = l_331[0];
    return l_332;
}







static short func_72(unsigned ** p_73, unsigned p_74, unsigned p_75)
{
    unsigned short l_86 = 0xAA22L;
    int l_123 = 5L;
    int **l_186[7] = {&g_100,&g_100,&g_100,&g_100,&g_100,&g_100,&g_100};
    unsigned *l_205 = &g_22;
    short l_233[9] = {9L,(-1L),9L,(-1L),9L,(-1L),9L,(-1L),9L};
    unsigned char l_267 = 0x18L;
    unsigned char l_311[2][5][8] = {{{247UL,8UL,255UL,0UL,1UL,1UL,253UL,0x2CL},{0x79L,247UL,2UL,0UL,0x2CL,246UL,255UL,246UL},{252UL,0x85L,1UL,0x85L,252UL,255UL,0UL,1UL},{9UL,0x79L,0xF2L,246UL,255UL,252UL,7UL,0x85L},{8UL,255UL,0xF2L,2UL,255UL,255UL,0UL,0xF2L}},{{255UL,1UL,1UL,1UL,1UL,0x2CL,255UL,0x37L},{0UL,1UL,2UL,251UL,251UL,2UL,1UL,0UL},{0x79L,0x85L,0x37L,0x2CL,7UL,9UL,0xF2L,0x43L},{9UL,252UL,0UL,255UL,0x2CL,9UL,0xDAL,0x85L},{253UL,0x85L,251UL,246UL,247UL,2UL,0UL,0x2CL}}};
    union U0 *l_329 = &g_171[2];
    int i, j, k;
    return g_15;
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_15, "g_15", print_hash_value);
    transparent_crc(g_17, "g_17", print_hash_value);
    transparent_crc(g_22, "g_22", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_25[i][j], "g_25[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_37, "g_37", print_hash_value);
    transparent_crc(g_38, "g_38", print_hash_value);
    transparent_crc(g_43, "g_43", print_hash_value);
    transparent_crc(g_64, "g_64", print_hash_value);
    transparent_crc(g_82, "g_82", print_hash_value);
    transparent_crc(g_85, "g_85", print_hash_value);
    transparent_crc(g_155, "g_155", print_hash_value);
    transparent_crc(g_158, "g_158", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_171[i].f0, "g_171[i].f0", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_263, "g_263", print_hash_value);
    transparent_crc(g_299, "g_299", print_hash_value);
    transparent_crc(g_321, "g_321", print_hash_value);
    transparent_crc(g_349, "g_349", print_hash_value);
    transparent_crc(g_433, "g_433", print_hash_value);
    transparent_crc(g_449, "g_449", print_hash_value);
    transparent_crc(g_558, "g_558", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_641[i][j][k], "g_641[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_661, "g_661", print_hash_value);
    transparent_crc(g_696, "g_696", print_hash_value);
    transparent_crc(g_771, "g_771", print_hash_value);
    transparent_crc(g_814, "g_814", print_hash_value);
    transparent_crc(g_832, "g_832", print_hash_value);
    transparent_crc(g_868, "g_868", print_hash_value);
    transparent_crc(g_983, "g_983", print_hash_value);
    transparent_crc(g_1024, "g_1024", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_1064[i][j][k], "g_1064[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
