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



static unsigned g_18 = 1UL;
static int g_31 = 0xE1C2E937L;
static int *g_30 = &g_31;
static int *g_63 = &g_31;
static int **g_62 = &g_63;
static int g_77[7] = {4L,0x41177734L,4L,4L,0x41177734L,4L,4L};
static char g_117 = 0L;
static unsigned char g_130 = 0x18L;
static unsigned char g_132 = 0UL;
static char g_144 = 1L;
static unsigned g_153[3][9] = {{0xF07BE03BL,4294967293UL,4294967293UL,0xF07BE03BL,0x5DD4C412L,0x98537666L,0x5DD4C412L,0xF07BE03BL,4294967293UL},{0x5DD4C412L,0x5DD4C412L,0x3B2B88CAL,0x98537666L,0x5842A7B7L,0x98537666L,0x3B2B88CAL,0x5DD4C412L,0x5DD4C412L},{4294967293UL,0xF07BE03BL,0x5DD4C412L,0x98537666L,0x5DD4C412L,0xF07BE03BL,4294967293UL,4294967293UL,0xF07BE03BL}};
static short g_173 = 0xFE23L;
static unsigned *g_234 = &g_153[2][7];
static unsigned **g_233 = &g_234;
static unsigned char ****g_303 = (void*)0;
static unsigned char ****g_336 = (void*)0;
static short g_391[10] = {0x6A66L,0x6A66L,0x19DAL,0x6A66L,0x6A66L,0x19DAL,0x6A66L,0x6A66L,0x19DAL,0x6A66L};
static int g_398 = 0L;
static int g_458 = 0xF75E2CB2L;
static unsigned short g_469 = 65535UL;
static int g_478[5][8][5] = {{{0L,(-4L),0xB2B10520L,1L,0x48E04DEAL},{2L,0xCF47D083L,0xBCCFAD7AL,0xCF47D083L,2L},{(-5L),0L,0x48E04DEAL,0xB2B10520L,0xA2A39980L},{0x740A5400L,8L,0x6ACC8447L,0x348EFD2CL,0xF27F89A3L},{0xCC63517BL,0xC289B293L,0xAC36FA80L,0L,0xA2A39980L},{0xBCCFAD7AL,0x348EFD2CL,0x348EFD2CL,0xBCCFAD7AL,2L},{0xA2A39980L,(-10L),0x94BF6E2DL,(-1L),0x48E04DEAL},{0x8CAC0E5EL,2L,1L,0x85FB4C9CL,3L}},{{0x94BF6E2DL,0L,(-1L),(-1L),(-1L)},{8L,0x8CAC0E5EL,8L,0xBCCFAD7AL,1L},{0L,(-7L),0xC8AB4C13L,0L,0xB2B10520L},{(-1L),0x64A66D13L,2L,0x348EFD2CL,(-3L)},{0L,(-1L),0xC8AB4C13L,0xB2B10520L,0xC8AB4C13L},{1L,1L,8L,0xCF47D083L,0x85FB4C9CL},{0x48E04DEAL,0x214CC444L,(-1L),1L,(-5L)},{0xF27F89A3L,3L,1L,0x740A5400L,0x6ACC8447L}},{{2L,0x214CC444L,0x94BF6E2DL,0x94BF6E2DL,0x214CC444L},{(-3L),1L,0x348EFD2CL,(-1L),2L},{0xC289B293L,(-1L),0xAC36FA80L,2L,1L},{0xCF47D083L,0x64A66D13L,0x7CE2D472L,1L,0x64A66D13L},{0L,(-5L),(-1L),(-5L),0L},{0x6ACC8447L,1L,0x64A66D13L,0x7CE2D472L,0x85FB4C9CL},{1L,2L,0xAC36FA80L,(-1L),0xC289B293L},{2L,8L,0xF27F89A3L,1L,0x85FB4C9CL}},{{(-1L),(-1L),(-1L),(-1L),0L},{0x85FB4C9CL,2L,0x8CAC0E5EL,(-1L),0x64A66D13L},{(-4L),0L,0xC8AB4C13L,0x48E04DEAL,0xA2A39980L},{0x8CAC0E5EL,0x740A5400L,1L,(-1L),(-1L)},{2L,(-4L),2L,(-1L),(-10L)},{0x740A5400L,(-3L),0xBCCFAD7AL,1L,0x7CE2D472L},{0L,0x214CC444L,0L,(-1L),0xB2B10520L},{1L,(-1L),0xBCCFAD7AL,0x7CE2D472L,0xBCCFAD7AL}},{{0xC8AB4C13L,0xC8AB4C13L,2L,(-5L),0x48E04DEAL},{0x64A66D13L,0x348EFD2CL,1L,1L,0x6ACC8447L},{0xC289B293L,0xA2A39980L,0xC8AB4C13L,1L,0xAC36FA80L},{3L,0x348EFD2CL,0x8CAC0E5EL,0x8CAC0E5EL,0x348EFD2CL},{0xB2B10520L,0xC8AB4C13L,(-1L),0L,0x94BF6E2DL},{8L,(-1L),0xF27F89A3L,3L,1L},{(-5L),0x214CC444L,0xAC36FA80L,0xAC36FA80L,0L},{0xCF47D083L,0x348EFD2CL,8L,0x348EFD2CL,0xCF47D083L}}};
static unsigned short g_494 = 65535UL;
static unsigned *g_565 = &g_153[0][3];
static unsigned char *g_574 = &g_132;
static unsigned char **g_573[5][7] = {{&g_574,&g_574,&g_574,&g_574,&g_574,&g_574,&g_574},{&g_574,(void*)0,(void*)0,&g_574,&g_574,&g_574,&g_574},{&g_574,&g_574,&g_574,&g_574,&g_574,&g_574,(void*)0},{&g_574,&g_574,&g_574,&g_574,&g_574,&g_574,&g_574},{&g_574,(void*)0,&g_574,&g_574,&g_574,&g_574,&g_574}};
static unsigned g_581 = 0xEE7E35A4L;
static unsigned ***g_593 = &g_233;
static unsigned ***g_595 = (void*)0;
static int g_670 = 0L;
static unsigned char g_674 = 0x72L;
static int ***g_683 = &g_62;
static int ****g_682 = &g_683;
static int *g_684 = &g_77[2];
static unsigned short g_708 = 0UL;
static short **g_721 = (void*)0;
static short *g_723 = &g_391[2];
static short **g_722 = &g_723;
static unsigned g_765 = 0UL;
static char *g_772 = &g_144;
static char **g_771 = &g_772;
static unsigned g_847[7][7][2] = {{{0x226E78F1L,5UL},{5UL,0x226E78F1L},{5UL,5UL},{0x226E78F1L,5UL},{5UL,0x226E78F1L},{5UL,5UL},{0x226E78F1L,5UL}},{{5UL,0x226E78F1L},{5UL,5UL},{0x226E78F1L,5UL},{5UL,0x226E78F1L},{5UL,5UL},{0x226E78F1L,5UL},{5UL,0x226E78F1L}},{{5UL,5UL},{0x226E78F1L,5UL},{5UL,0x226E78F1L},{5UL,5UL},{0x226E78F1L,5UL},{5UL,0x226E78F1L},{5UL,5UL}},{{0x226E78F1L,5UL},{5UL,0x226E78F1L},{5UL,5UL},{0x226E78F1L,5UL},{5UL,0x226E78F1L},{5UL,5UL},{0x226E78F1L,5UL}},{{5UL,0x226E78F1L},{5UL,5UL},{0x226E78F1L,5UL},{5UL,0x226E78F1L},{5UL,5UL},{0x226E78F1L,5UL},{5UL,0x226E78F1L}},{{5UL,5UL},{0x226E78F1L,5UL},{5UL,0x226E78F1L},{5UL,5UL},{0x226E78F1L,5UL},{5UL,0x226E78F1L},{5UL,5UL}},{{0x226E78F1L,5UL},{5UL,0x226E78F1L},{5UL,5UL},{0x226E78F1L,5UL},{5UL,0x226E78F1L},{5UL,5UL},{0x226E78F1L,5UL}}};
static short g_900[8] = {8L,8L,8L,8L,8L,8L,8L,8L};
static unsigned char g_901 = 0xF6L;
static unsigned g_1005[7][6][4] = {{{4294967295UL,1UL,4294967295UL,4294967295UL},{0x3DEFBE4EL,0x3DEFBE4EL,4294967295UL,0xA4818077L},{0UL,0xFEB44587L,0UL,0x3CE7BAC4L},{1UL,4294967295UL,3UL,0UL},{0UL,4294967295UL,5UL,0x3CE7BAC4L},{4294967295UL,0xFEB44587L,4294967295UL,0xA4818077L}},{{8UL,0x3DEFBE4EL,4294967295UL,4294967295UL},{0UL,1UL,0UL,4294967295UL},{4UL,3UL,4294967295UL,0UL},{0x804367FBL,4294967295UL,0UL,3UL},{4294967295UL,0x6033D60AL,1UL,4UL},{0xCD9E6E8EL,0xFEB44587L,0x804367FBL,0x91904101L}},{{4294967295UL,4294967295UL,4294967295UL,0UL},{4294967295UL,0UL,0UL,4294967295UL},{1UL,0x3DEFBE4EL,0x91904101L,0x804367FBL},{0x7F97F273L,0UL,4UL,1UL},{0xC6212031L,0xFEB44587L,8UL,1UL},{3UL,0UL,4294967295UL,0x804367FBL}},{{0x3CE7BAC4L,0x3DEFBE4EL,0x7F97F273L,4294967295UL},{0xFEB44587L,0UL,0UL,0UL},{0x7F97F273L,4294967295UL,0UL,0x91904101L},{0x6033D60AL,0xFEB44587L,0x3DEFBE4EL,4UL},{4294967295UL,0xA4818077L,4294967295UL,8UL},{4294967295UL,0x804367FBL,0x3DEFBE4EL,4294967295UL}},{{0x6033D60AL,8UL,0UL,0x7F97F273L},{0x7F97F273L,5UL,0UL,0UL},{0xFEB44587L,0xFEB44587L,0x7F97F273L,0UL},{0x3CE7BAC4L,4294967295UL,4294967295UL,0x3DEFBE4EL},{3UL,0x7F97F273L,8UL,4294967295UL},{0xC6212031L,0x7F97F273L,4UL,0x3DEFBE4EL}},{{0x7F97F273L,4294967295UL,0x91904101L,0UL},{1UL,0xFEB44587L,0UL,0UL},{4294967295UL,5UL,4294967295UL,0x7F97F273L},{4294967295UL,8UL,0x804367FBL,4294967295UL},{0xCD9E6E8EL,0x804367FBL,0xCD9E6E8EL,0UL},{0x91904101L,0UL,0xCD9E6E8EL,0xFEB44587L}},{{3UL,4294967295UL,1UL,0x6033D60AL},{4294967295UL,8UL,0UL,0UL},{0UL,0UL,0UL,0UL},{0x3CE7BAC4L,4UL,0x6033D60AL,1UL},{0x91904101L,0x804367FBL,0xFEB44587L,0xCD9E6E8EL},{4294967295UL,4294967295UL,0UL,0xCD9E6E8EL}}};
static unsigned char *****g_1043[2][7] = {{(void*)0,&g_336,&g_336,(void*)0,&g_336,&g_336,&g_336},{(void*)0,&g_336,&g_336,(void*)0,&g_336,&g_336,&g_336}};
static int *g_1165[2] = {&g_77[2],&g_77[2]};
static char g_1174 = 1L;
static char g_1178 = (-7L);
static short ***g_1282 = &g_721;



static short func_1(void);
static int * func_2(unsigned p_3, int * p_4, int * p_5, int * p_6);
static int * func_8(short p_9, int p_10, unsigned char p_11, int * p_12, int p_13);
static unsigned char func_14(unsigned p_15, char p_16, int p_17);
static unsigned func_19(int p_20, unsigned p_21, int * p_22, int * p_23, unsigned char p_24);
static unsigned func_25(int * p_26, unsigned char p_27, short p_28, int p_29);
static unsigned short func_50(char p_51, char p_52, unsigned p_53, int * p_54, int p_55);
static int * func_58(int ** p_59, int * p_60, unsigned p_61);
static int ** func_64(char p_65, char p_66, short p_67);
static short func_68(unsigned short p_69, int p_70, unsigned short p_71);
static short func_1(void)
{
    unsigned char l_7 = 0x44L;
    int *l_33 = &g_31;
    int **l_32 = &l_33;
    int *l_35 = &g_31;
    unsigned l_852 = 4294967295UL;
    (***g_682) = ((*l_32) = func_2(l_7, ((**g_683) = func_8((l_7 | (255UL ^ func_14((g_18 || func_19(g_18, func_25(g_30, ((((void*)0 != &g_31) && (~(((*l_32) = &g_31) == &g_31))) != 3L), l_7, (*g_30)), l_35, &g_31, (*l_35))), g_18, l_852))), g_674, g_581, l_35, l_852)), l_35, l_35));

    ;
    ;
    ;

    ;
    return (**g_722);
}







static int * func_2(unsigned p_3, int * p_4, int * p_5, int * p_6)
{
    int l_1339 = 0L;
    char **l_1381 = &g_772;
    int *l_1410 = &g_478[3][3][1];
    if (l_1339)
    {
        short **l_1340[9] = {&g_723,&g_723,&g_723,&g_723,&g_723,&g_723,&g_723,&g_723,&g_723};
        int i;
        l_1340[1] = l_1340[6];
    }
    else
    {
        int l_1373 = 3L;
        if ((*g_30))
        {
            short l_1352 = 1L;
            unsigned short *l_1370 = &g_469;
            unsigned short *l_1371 = &g_494;
            for (g_173 = 0; (g_173 >= (-15)); g_173 = safe_sub_func_uint8_t_u_u(g_173, 3))
            {
                char l_1351 = 0x2FL;
                unsigned short *l_1353 = &g_469;
                int l_1364 = 0x3422B943L;
                unsigned short *l_1365 = &g_494;
                for (g_117 = 0; (g_117 <= 4); ++g_117)
                {
                    return p_6;


                }
                (*g_30) = (safe_lshift_func_int8_t_s_s(((*g_772) = (*g_772)), (safe_sub_func_uint16_t_u_u((((*l_1365) = (((safe_lshift_func_int16_t_s_u(p_3, l_1351)) != (((*l_1353) = l_1352) <= (((safe_sub_func_uint32_t_u_u(l_1351, l_1339)) | (p_3 == (((safe_mul_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u((l_1364 = (safe_lshift_func_uint8_t_u_s(l_1339, 7))), 15)), (-5L))) != 0xAAL) & l_1351))) || l_1339))) & 0xAE97L)) & 0x35B2L), (**g_722)))));
            }
            (*g_30) = (safe_mul_func_uint16_t_u_u(((*l_1371) = ((*l_1370) = (safe_mod_func_uint32_t_u_u((***g_593), 0xF4060BBDL)))), p_3));
        }
        else
        {
            unsigned short l_1372 = 0xC2EAL;
            (*p_6) = (l_1373 < (((**g_722) = p_3) >= g_130));
        }
        for (g_130 = 0; (g_130 != 22); ++g_130)
        {
            int *l_1378 = &g_77[2];
            char ***l_1380[6] = {&g_771,&g_771,&g_771,&g_771,&g_771,&g_771};
            int i;
            for (g_494 = 22; (g_494 >= 7); g_494--)
            {
                int **l_1379 = &g_30;
                (**g_683) = (*g_62);
                (*l_1379) = ((***g_682) = l_1378);

                ;
                ;
                for (g_398 = 2; (g_398 <= 9); g_398 += 1)
                {
                    int i;
                    (*g_62) = (***g_682);
                    if (g_391[g_398])
                    {
                        return l_1378;


                    }
                    else
                    {
                        (***g_682) = (*g_62);
                        (**g_683) = p_6;

                        ;
                    }

                    ;
                    return (***g_682);


                }
            }
            l_1381 = (void*)0;

            ;
        }

        ;
        ;
        for (g_130 = 0; (g_130 > 45); ++g_130)
        {
            unsigned short l_1393 = 0UL;
            int l_1394 = 0x4B278221L;
            l_1373 = (*p_5);
            if ((safe_rshift_func_int16_t_s_u((safe_rshift_func_int16_t_s_u(0x1064L, ((l_1339 <= ((**g_233) = p_3)) & (*g_574)))), 11)))
            {
                unsigned short l_1392 = 0x77B6L;
                (*p_5) = ((*g_684) | (((safe_div_func_uint32_t_u_u(((*g_565) = (safe_div_func_uint32_t_u_u(l_1339, (l_1339 & func_25(&l_1339, func_14(l_1392, l_1373, ((*p_5) = ((l_1393 = ((*g_565) = l_1339)) & 0x5C9F7054L))), p_3, l_1339))))), 4294967287UL)) >= l_1394) && 0x5994DB85L));

                ;
            }
            else
            {
                int *l_1399[6][9] = {{&l_1339,&g_31,&g_31,&l_1339,&g_31,&g_31,&l_1339,&g_31,&g_31},{&l_1339,&g_31,&g_31,&l_1339,&g_31,&g_31,&l_1339,&g_31,&g_31},{&l_1339,&g_31,&g_31,&l_1339,&g_31,&g_31,&l_1339,&g_31,&g_31},{&l_1339,&g_31,&g_31,&l_1339,&g_31,&g_31,&l_1339,&g_478[1][1][3],&g_478[1][1][3]},{&g_31,&g_478[1][1][3],&g_478[1][1][3],&g_31,&g_478[1][1][3],&g_478[1][1][3],&g_31,&g_478[1][1][3],&g_478[1][1][3]},{&g_31,&g_478[1][1][3],&g_478[1][1][3],&g_31,&g_478[1][1][3],&g_478[1][1][3],&g_31,&g_478[1][1][3],&g_478[1][1][3]}};
                int i, j;
                for (g_173 = 0; (g_173 <= 4); g_173 += 1)
                {
                    unsigned l_1404 = 0xC5A599F6L;
                    if ((*p_6))
                        break;
                    for (g_398 = 3; (g_398 >= 0); g_398 -= 1)
                    {
                        (*g_684) = (safe_sub_func_int8_t_s_s(0x80L, (safe_sub_func_uint16_t_u_u(l_1373, l_1373))));
                    }
                    for (g_1174 = 0; (g_1174 <= 7); g_1174 += 1)
                    {
                        int l_1405 = 0x84AAB707L;
                        char *l_1408 = &g_117;
                        short l_1409 = 0x5EEEL;
                        int i, j;
                        (***g_682) = (**g_683);
                        (***g_682) = (l_1399[0][1] = (***g_682));
                        (*g_684) = (*p_6);
                        (*p_6) = ((safe_mul_func_int8_t_s_s((((*g_723) = (((p_3 || ((((((*g_574) = (safe_rshift_func_uint16_t_u_u((l_1404 && func_14(p_3, (*g_772), l_1405)), 10))) >= (((g_900[(g_173 + 1)] = (safe_div_func_uint8_t_u_u((((*g_684) = (l_1373 == (((*l_1408) = p_3) & p_3))) | 0x79851E75L), 0x1DL))) != l_1373) | l_1409)) <= (*p_5)) || 7L) != l_1339)) && p_3) >= p_3)) ^ g_144), l_1394)) != (*p_6));
                    }
                }


                (**g_683) = (l_1399[5][0] = (***g_682));
            }
        }

        ;
        (*p_6) = (*p_5);
    }

    ;
    ;
    ;
    (***g_682) = &l_1339;

    ;
    return l_1410;



}







static int * func_8(short p_9, int p_10, unsigned char p_11, int * p_12, int p_13)
{
    int l_857[4];
    unsigned short l_865 = 0UL;
    int l_912 = (-1L);
    unsigned l_943 = 0xF83A96D3L;
    int *l_963 = &g_478[0][0][2];
    unsigned char *****l_1001 = &g_303;
    unsigned **l_1128 = &g_565;
    int *l_1151[7][5][5] = {{{&g_458,&g_458,&g_458,&g_458,&l_857[2]},{&l_857[3],&g_77[2],&g_77[1],(void*)0,&l_912},{&l_912,&g_458,&l_912,&l_857[2],&g_458},{&l_912,&g_31,&g_458,(void*)0,&g_458},{&g_458,&g_458,&l_857[2],&g_458,&g_77[2]}},{{&g_77[1],(void*)0,&g_458,&l_912,&l_857[3]},{&g_77[2],&g_458,&l_912,&g_77[2],&l_857[2]},{&l_912,(void*)0,&g_77[1],(void*)0,&l_912},{&l_912,&g_458,&g_458,&l_857[2],&g_458},{&l_912,&g_31,(void*)0,&g_77[2],&g_458}},{{&g_77[2],&g_458,&l_857[2],&g_458,&g_458},{&g_77[1],&g_77[2],&g_77[1],&l_912,&l_912},{&g_458,&g_458,&l_857[2],&g_458,&l_857[2]},{&l_912,(void*)0,&g_77[1],&g_77[2],&l_857[3]},{&l_912,&g_77[2],&l_857[2],&l_857[2],&g_77[2]}},{{&l_857[3],&g_31,&g_458,&g_77[2],(void*)0},{&g_458,&g_458,&l_912,&g_458,&g_458},{&g_458,(void*)0,&g_77[1],&g_31,&l_857[3]},{&g_458,&l_912,&l_912,&g_458,&g_458},{&l_912,(void*)0,&g_458,(void*)0,&l_857[3]}},{{&l_857[2],&g_458,&l_857[2],&g_458,&g_458},{&l_857[3],&g_31,(void*)0,(void*)0,(void*)0},{&g_77[2],&g_77[2],&l_912,&g_458,&g_458},{&g_458,&g_77[2],(void*)0,&g_31,&l_912},{&g_458,&l_912,&l_857[2],&g_458,&g_458}},{{&l_912,&g_77[2],&g_458,&g_77[2],&l_912},{&l_857[2],&g_77[2],&l_912,&g_458,&g_77[2]},{&l_912,&g_31,&g_77[1],(void*)0,(void*)0},{&g_458,&g_458,&l_912,&g_77[2],&g_77[2]},{&g_458,(void*)0,&g_458,&g_31,&l_912}},{{&g_77[2],&l_912,&g_458,&g_77[2],&g_458},{&l_857[3],(void*)0,&g_458,(void*)0,&l_912},{&l_857[2],&g_458,&g_458,&g_458,&g_458},{&l_912,&g_31,&g_458,&g_77[2],(void*)0},{&g_458,&l_857[2],&g_458,&l_857[2],&g_458}}};
    int ***l_1162 = &g_62;
    unsigned l_1206[4][10][3] = {{{0UL,0x239C059FL,0xF8F06742L},{4294967287UL,0xF8F06742L,0xB2138698L},{4294967287UL,0x99E3786DL,0x99E3786DL},{0UL,4294967293UL,0UL},{0x99E3786DL,0xBBC7ADF7L,0x5CC12873L},{1UL,0x7461D149L,0xC55C5AB7L},{0x7461D149L,0UL,1UL},{0x33D2DBDFL,0x7461D149L,0x9FC51E13L},{0xE5A06C1AL,0xBBC7ADF7L,0xFE0D89DDL},{0xFE0D89DDL,4294967293UL,0xBBC7ADF7L}},{{4294967292UL,0x99E3786DL,0UL},{0xC5E96493L,0xF8F06742L,0UL},{0xBBC7ADF7L,0x239C059FL,0xBBC7ADF7L},{0xBC5FE914L,9UL,0xFE0D89DDL},{5UL,0x862FA039L,0x9FC51E13L},{9UL,0xE5A06C1AL,1UL},{0UL,0xC5E96493L,0xC55C5AB7L},{9UL,0xB2138698L,0x5CC12873L},{5UL,4294967292UL,0UL},{0xBC5FE914L,4294967292UL,0x99E3786DL}},{{0xBBC7ADF7L,1UL,0xB2138698L},{0xC5E96493L,1UL,0xF8F06742L},{4294967292UL,4294967292UL,9UL},{0xFE0D89DDL,4294967292UL,0xC5E96493L},{0xE5A06C1AL,0xB2138698L,4294967287UL},{0x33D2DBDFL,0xC5E96493L,4294967293UL},{0x7461D149L,0xE5A06C1AL,4294967287UL},{1UL,0x862FA039L,0xC5E96493L},{0x99E3786DL,9UL,9UL},{0UL,0x239C059FL,0xF8F06742L}},{{4294967287UL,0xBBC7ADF7L,0xC5E96493L},{9UL,4294967292UL,4294967292UL},{9UL,0UL,0xFE0D89DDL},{4294967292UL,0UL,0xE5A06C1AL},{0x7461D149L,4294967293UL,0x33D2DBDFL},{4294967293UL,0xFE0D89DDL,0x7461D149L},{0x5EFA1228L,4294967293UL,1UL},{0UL,0UL,0x99E3786DL},{0x99E3786DL,0UL,0UL},{0xC55C5AB7L,4294967292UL,4294967287UL}}};
    short **l_1207 = &g_723;
    unsigned char l_1235 = 1UL;
    int *l_1259 = &l_857[2];
    int *l_1263 = (void*)0;
    unsigned char **l_1335 = &g_574;
    int *l_1338 = (void*)0;
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_857[i] = 4L;
    (*p_12) = (&g_336 == (void*)0);
    for (g_398 = (-5); (g_398 >= 13); g_398++)
    {
        char l_862 = 0L;
        unsigned ****l_872 = (void*)0;
        unsigned l_873[8] = {1UL,8UL,1UL,8UL,1UL,8UL,1UL,8UL};
        int l_875 = 0L;
        int *l_876 = &l_857[2];
        int *l_915[3];
        short *l_1028 = &g_900[4];
        int i;
        for (i = 0; i < 3; i++)
            l_915[i] = &l_857[2];
    }
lbl_1077:
    (*g_684) = (p_11 != p_9);
    if ((~(((*l_963) ^ p_10) == (*l_963))))
    {
        int **l_1062[7] = {&g_30,&g_30,&g_30,&g_30,&g_30,&g_30,&g_30};
        int ***l_1063 = (void*)0;
        int l_1069 = 0x5364B863L;
        int i;
        (**g_683) = func_58((*g_683), (*g_62), (*g_565));

        ;
    }
    else
    {
        int *l_1078 = (void*)0;
        short l_1119 = (-4L);
        unsigned char l_1143 = 0xD9L;
        short **l_1209[9] = {&g_723,&g_723,&g_723,&g_723,&g_723,&g_723,&g_723,&g_723,&g_723};
        unsigned *l_1219 = &g_847[2][2][1];
        int *l_1223 = &l_857[1];
        short l_1224 = (-3L);
        unsigned char l_1249 = 0x81L;
        int **l_1279 = &l_1259;
        unsigned l_1287[8][8][2] = {{{3UL,3UL},{3UL,3UL},{3UL,3UL},{3UL,3UL},{3UL,3UL},{3UL,3UL},{3UL,3UL},{3UL,3UL}},{{3UL,3UL},{3UL,3UL},{3UL,3UL},{3UL,3UL},{3UL,3UL},{3UL,3UL},{3UL,3UL},{3UL,3UL}},{{3UL,3UL},{3UL,3UL},{3UL,3UL},{3UL,3UL},{3UL,3UL},{3UL,3UL},{3UL,3UL},{3UL,3UL}},{{3UL,3UL},{3UL,3UL},{3UL,3UL},{3UL,3UL},{3UL,3UL},{3UL,3UL},{3UL,3UL},{3UL,3UL}},{{3UL,3UL},{3UL,3UL},{3UL,3UL},{3UL,3UL},{3UL,3UL},{3UL,3UL},{3UL,3UL},{3UL,3UL}},{{3UL,3UL},{3UL,3UL},{3UL,3UL},{3UL,3UL},{3UL,3UL},{3UL,3UL},{3UL,3UL},{3UL,3UL}},{{3UL,3UL},{3UL,3UL},{3UL,3UL},{3UL,3UL},{3UL,3UL},{3UL,3UL},{3UL,3UL},{3UL,3UL}},{{3UL,3UL},{3UL,3UL},{3UL,3UL},{3UL,3UL},{3UL,3UL},{3UL,3UL},{3UL,3UL},{3UL,3UL}}};
        unsigned l_1336 = 9UL;
        int i, j, k;
        (*g_62) = &p_10;

        ;
        if ((*p_12))
        {
            unsigned char l_1111 = 0xCEL;
            int *l_1113 = &g_77[3];
            unsigned l_1166 = 4294967295UL;
            short ***l_1208[5][10] = {{&g_721,&g_722,&g_722,&g_721,&g_722,&g_722,&g_721,&g_722,&g_722,&g_721},{&g_722,&g_721,&g_722,&g_722,&g_721,&g_722,&g_722,&g_721,&g_722,&g_722},{&g_721,&g_721,&l_1207,&g_721,&g_721,&l_1207,&g_721,&g_721,&l_1207,&g_721},{&g_721,&g_722,&g_722,&g_721,&g_722,&g_722,&g_721,&g_722,&g_722,&g_721},{&g_722,&g_721,&g_722,&g_722,&g_721,&g_722,&g_722,&g_721,&g_722,&g_722}};
            int i, j;
            for (g_130 = 0; (g_130 <= 34); g_130 = safe_add_func_uint8_t_u_u(g_130, 9))
            {
                unsigned char l_1097 = 0UL;
                unsigned short *l_1098 = &g_469;
                unsigned short *l_1099 = &l_865;
                int l_1100 = (-10L);
                unsigned l_1112 = 0UL;
                unsigned ****l_1118 = &g_593;
                int l_1122[4][2][5] = {{{(-9L),1L,0xA7671BEEL,0x1336025DL,1L},{0xD697C349L,1L,0x008822D0L,0x008822D0L,1L}},{{(-9L),0x9B8A2E56L,0x008822D0L,0x1336025DL,0x9B8A2E56L},{(-9L),1L,0xA7671BEEL,0x1336025DL,1L}},{{0xD697C349L,1L,0x008822D0L,0x008822D0L,1L},{(-9L),0x9B8A2E56L,0x008822D0L,0x1336025DL,0x9B8A2E56L}},{{(-9L),1L,0xA7671BEEL,0x1336025DL,1L},{0xD697C349L,1L,0x008822D0L,0x008822D0L,1L}}};
                int i, j, k;
                for (p_13 = 0; (p_13 > (-25)); p_13--)
                {
                    for (g_173 = (-20); (g_173 < (-18)); ++g_173)
                    {
                        char l_1076 = 0x45L;
                        if (l_1076)
                            break;
                        if (g_117)
                            goto lbl_1077;
                        (***g_682) = &l_912;

                        ;
                    }
                }
                l_1078 = &p_13;

                ;
            }

            ;
            ;
            for (p_10 = 0; (p_10 != 1); p_10 = safe_add_func_uint32_t_u_u(p_10, 1))
            {
                int l_1160 = 6L;
                int *l_1164[5][1][8] = {{{(void*)0,(void*)0,&g_77[3],(void*)0,(void*)0,&g_458,(void*)0,(void*)0}},{{&l_857[3],(void*)0,&l_857[3],&g_458,(void*)0,&g_31,(void*)0,&g_458}},{{(void*)0,(void*)0,&l_857[3],(void*)0,(void*)0,(void*)0,&l_912,&g_31}},{{(void*)0,(void*)0,&l_912,&g_31,&l_912,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,&l_912,&g_458,&g_77[3],&g_458,&l_912,(void*)0}}};
                int i, j, k;
                (*p_12) = (*p_12);
                if ((safe_mul_func_int8_t_s_s((p_11 || (*l_1113)), p_11)))
                {
                    return l_1113;



                }
                else
                {
                    unsigned l_1161[8][7][4] = {{{0UL,0xBC958A23L,0UL,7UL},{0x8DF0A7D3L,0xBC958A23L,0xC26DA3FFL,0xBC958A23L},{0x8DF0A7D3L,7UL,0UL,0xBC958A23L},{0UL,0xBC958A23L,0UL,7UL},{0x8DF0A7D3L,0xBC958A23L,0xC26DA3FFL,0xBC958A23L},{0x8DF0A7D3L,7UL,0UL,0xBC958A23L},{0UL,0xBC958A23L,0UL,7UL}},{{0x8DF0A7D3L,0xBC958A23L,0xC26DA3FFL,0xBC958A23L},{0x8DF0A7D3L,7UL,0UL,0xBC958A23L},{0UL,0xBC958A23L,0UL,7UL},{0x8DF0A7D3L,0xBC958A23L,0xC26DA3FFL,0xBC958A23L},{0x8DF0A7D3L,7UL,0UL,0xBC958A23L},{0UL,0xBC958A23L,0UL,7UL},{0x8DF0A7D3L,0xBC958A23L,0xC26DA3FFL,0xBC958A23L}},{{0x8DF0A7D3L,7UL,0UL,0xBC958A23L},{0UL,0xBC958A23L,0UL,7UL},{0x8DF0A7D3L,0xBC958A23L,0xC26DA3FFL,0xBC958A23L},{0x8DF0A7D3L,7UL,0UL,0xBC958A23L},{0UL,0xBC958A23L,0UL,7UL},{0x8DF0A7D3L,0xBC958A23L,0xC26DA3FFL,0xBC958A23L},{0x8DF0A7D3L,7UL,0UL,0xBC958A23L}},{{0UL,0xBC958A23L,0UL,7UL},{0x8DF0A7D3L,0xBC958A23L,0xC26DA3FFL,0xBC958A23L},{0x8DF0A7D3L,7UL,0UL,0xBC958A23L},{0UL,0xBC958A23L,0UL,7UL},{0x8DF0A7D3L,0xBC958A23L,0xC26DA3FFL,0xBC958A23L},{0x8DF0A7D3L,7UL,0UL,0xBC958A23L},{0UL,0xBC958A23L,0UL,7UL}},{{0x8DF0A7D3L,0xBC958A23L,0xC26DA3FFL,0xBC958A23L},{0x8DF0A7D3L,7UL,0UL,0xBC958A23L},{0UL,0xBC958A23L,0UL,7UL},{0x8DF0A7D3L,0xBC958A23L,0xC26DA3FFL,0xBC958A23L},{0x8DF0A7D3L,7UL,0UL,0xBC958A23L},{0UL,0xBC958A23L,0UL,7UL},{0x8DF0A7D3L,0xBC958A23L,0xC26DA3FFL,0xBC958A23L}},{{0x8DF0A7D3L,7UL,0UL,0xBC958A23L},{0UL,0xBC958A23L,0UL,7UL},{0x8DF0A7D3L,0xBC958A23L,0xC26DA3FFL,0xBC958A23L},{0x8DF0A7D3L,7UL,0UL,0xBC958A23L},{0UL,0xBC958A23L,0UL,7UL},{0x8DF0A7D3L,0xBC958A23L,0xC26DA3FFL,0xBC958A23L},{0x8DF0A7D3L,7UL,0xC26DA3FFL,7UL}},{{0xC26DA3FFL,7UL,0xC26DA3FFL,0x1702B1FEL},{0UL,7UL,0x8DF0A7D3L,7UL},{0UL,0x1702B1FEL,0xC26DA3FFL,7UL},{0xC26DA3FFL,7UL,0xC26DA3FFL,0x1702B1FEL},{0UL,7UL,0x8DF0A7D3L,7UL},{0UL,0x1702B1FEL,0xC26DA3FFL,7UL},{0xC26DA3FFL,7UL,0xC26DA3FFL,0x1702B1FEL}},{{0UL,7UL,0x8DF0A7D3L,7UL},{0UL,0x1702B1FEL,0xC26DA3FFL,7UL},{0xC26DA3FFL,7UL,0xC26DA3FFL,0x1702B1FEL},{0UL,7UL,0x8DF0A7D3L,7UL},{0UL,0x1702B1FEL,0xC26DA3FFL,7UL},{0xC26DA3FFL,7UL,0xC26DA3FFL,0x1702B1FEL},{0UL,7UL,0x8DF0A7D3L,7UL}}};
                    int l_1195 = (-6L);
                    unsigned short *l_1196 = &g_708;
                    unsigned char ***l_1205 = &g_573[1][1];
                    int i, j, k;
                    if ((l_1161[1][6][2] = (*p_12)))
                    {
                        int ****l_1163 = &l_1162;
                        (*l_1113) = ((**g_233) <= 4294967288UL);
                        return g_1165[0];



                    }
                    else
                    {
                        (*l_963) = 0x3E447E13L;
                        if (l_1166)
                            break;
                    }
                    for (g_398 = 0; (g_398 <= 3); g_398 += 1)
                    {
                        char *l_1173 = &g_1174;
                        int l_1175 = 0x886629F7L;
                        unsigned char *l_1176 = &l_1111;
                        unsigned *l_1177 = &g_847[3][2][0];
                        (*g_684) = (safe_rshift_func_int16_t_s_u(p_10, 8));
                        (***g_682) = &l_1175;

                        ;
                        p_12 = ((***g_682) = func_58(func_64((*g_772), (~(safe_mod_func_int8_t_s_s((safe_unary_minus_func_int16_t_s((safe_sub_func_uint32_t_u_u((**g_233), ((safe_mul_func_int8_t_s_s((safe_mod_func_uint32_t_u_u((***g_593), (safe_lshift_func_int8_t_s_s((safe_lshift_func_int16_t_s_s(8L, ((*p_12) != (***g_683)))), (*l_1113))))), (safe_mod_func_int8_t_s_s((safe_unary_minus_func_int32_t_s((l_1195 = ((*l_963) = (*p_12))))), (*l_1113))))) || 1UL))))), l_1175))), (**g_722)), l_1164[2][0][0], p_11));

                        ;
                        ;
                    }
                    (***g_682) = func_58(&l_1078, &p_10, (*l_1113));

                    ;
                }

                ;
            }

            ;
            ;
            (***g_682) = &p_10;

            ;
            (*l_963) = ((l_1209[6] = l_1207) == (void*)0);
        }
        else
        {
            unsigned l_1220 = 0xDC6893F5L;
            int *l_1221 = &l_857[0];
            int l_1254 = 0x96016B51L;
            unsigned short l_1255 = 0UL;
            int *l_1311[3][10] = {{&g_77[2],&l_857[2],&g_77[2],&l_857[2],&g_77[2],&l_857[2],&g_77[2],&l_857[2],&g_77[2],&l_857[2]},{&g_77[2],&l_857[2],&g_77[2],&l_857[2],&g_77[2],&l_857[2],&g_77[2],&l_857[2],&g_77[2],&l_857[2]},{&g_77[2],&l_857[2],&g_77[2],&l_857[2],&g_77[2],&l_857[2],&g_77[2],&l_857[2],&g_77[2],&l_857[2]}};
            unsigned short *l_1329 = &g_469;
            int i, j;
            for (g_765 = 0; (g_765 <= 36); g_765 = safe_add_func_uint8_t_u_u(g_765, 3))
            {
                unsigned l_1217[7][1] = {{0x1CA34862L},{4294967295UL},{0x1CA34862L},{0x1CA34862L},{4294967295UL},{0x1CA34862L},{0x1CA34862L}};
                int *l_1222[6][4][5] = {{{&l_912,(void*)0,(void*)0,(void*)0,&l_912},{&l_912,(void*)0,&l_857[3],&l_912,&l_857[3]},{(void*)0,(void*)0,(void*)0,&g_77[2],&g_478[0][0][1]},{&l_857[2],(void*)0,&l_857[2],(void*)0,&l_857[2]}},{{(void*)0,&g_77[2],&g_478[3][3][1],&l_857[0],&l_912},{&l_857[3],(void*)0,(void*)0,&g_77[2],&g_458},{&l_857[3],(void*)0,&g_77[2],&g_478[3][3][1],&g_478[3][3][1]},{&g_458,(void*)0,&g_31,(void*)0,&g_458}},{{&l_857[3],(void*)0,&l_912,&l_912,(void*)0},{&l_857[3],&g_31,&g_458,&l_912,&g_458},{(void*)0,&l_857[3],&g_77[2],(void*)0,(void*)0},{&l_857[2],&l_912,&g_77[0],&g_478[3][1][0],&g_458}},{{(void*)0,&g_77[2],&g_478[3][3][1],&g_478[3][3][1],&g_478[3][3][1]},{&l_912,&g_31,&l_912,&g_478[3][1][0],&g_458},{&l_912,(void*)0,(void*)0,(void*)0,&l_912},{&l_857[2],(void*)0,&l_857[2],&l_912,&l_857[2]}},{{(void*)0,&l_912,(void*)0,&l_912,&g_478[0][0][1]},{&g_31,(void*)0,&l_912,(void*)0,&l_857[3]},{(void*)0,&l_912,&g_478[3][3][1],&g_478[3][3][1],&l_912},{&l_857[2],&g_478[3][1][0],&l_857[2],&l_857[0],&g_458}},{{&l_857[0],(void*)0,&g_478[3][3][1],(void*)0,&g_478[0][0][1]},{&g_458,&l_912,&g_458,&l_912,&g_458},{&l_857[0],&l_912,(void*)0,(void*)0,(void*)0},{&l_857[2],(void*)0,&g_458,&g_77[2],&l_857[2]}}};
                int i, j, k;
                for (g_494 = 0; (g_494 != 42); g_494 = safe_add_func_int8_t_s_s(g_494, 1))
                {
                    int ***l_1216 = &g_62;
                    unsigned *l_1218 = &l_943;
                    if ((*p_12))
                        break;
                    (*l_963) = (((l_1219 = l_1218) != l_1078) && l_1220);

                    ;
                    return l_1078;



                }
                (***g_682) = l_1222[5][0][1];

                ;
            }

            ;
            (***g_682) = &p_10;

            ;
            for (l_865 = (-19); (l_865 != 8); l_865 = safe_add_func_int32_t_s_s(l_865, 1))
            {
                unsigned l_1256 = 0x665C0AF6L;
                unsigned l_1257 = 0x28A0125BL;
                int *l_1280 = &l_857[2];
                unsigned short *l_1326 = &l_1255;
            }
            (**g_683) = &p_10;
        }

        ;
        ;
        (*l_1279) = &p_13;

        ;
    }

    ;
    ;
    ;
    return l_1338;



}







static unsigned char func_14(unsigned p_15, char p_16, int p_17)
{
    int **l_853 = &g_30;
    short l_854 = 8L;
    (*l_853) = ((*g_62) = (*l_853));

    ;
    return l_854;
}







static unsigned func_19(int p_20, unsigned p_21, int * p_22, int * p_23, unsigned char p_24)
{
    unsigned l_46 = 5UL;
    unsigned l_47 = 2UL;
    int *l_56 = &g_31;
    int **l_57 = &g_30;
    short *l_720 = &g_391[4];
    short **l_719 = &l_720;
    short **l_724 = &g_723;
    char **l_775 = &g_772;
    int l_810[3][2][1];
    int *l_814 = &g_478[3][3][1];
    int i, j, k;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 1; k++)
                l_810[i][j][k] = 0L;
        }
    }
    (*g_684) = (safe_div_func_int16_t_s_s((safe_mod_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s((safe_sub_func_uint32_t_u_u(g_31, l_46)), ((l_47 == ((((safe_lshift_func_uint16_t_u_s(func_50((l_56 != ((*l_57) = p_22)), g_31, p_21, p_22, func_25(func_58(g_62, p_22, g_18), (*l_56), p_20, (*l_56))), 6)) == (*l_56)) > (*l_56)) <= 0xBE10L)) | (*l_56)))), p_21)), 1UL)), p_20));



    ;
    for (g_117 = 0; (g_117 <= 23); g_117 = safe_add_func_uint8_t_u_u(g_117, 8))
    {
        int l_694 = 6L;
        unsigned ****l_707[1];
        unsigned char ****l_732 = (void*)0;
        unsigned l_744 = 0xA8E1C431L;
        char *l_763 = &g_144;
        char **l_776 = &l_763;
        unsigned short *l_783[3][10][3] = {{{(void*)0,&g_708,&g_708},{&g_708,(void*)0,&g_494},{(void*)0,&g_494,(void*)0},{&g_708,(void*)0,&g_708},{(void*)0,&g_708,&g_494},{&g_708,&g_469,&g_708},{(void*)0,&g_708,&g_708},{&g_708,(void*)0,&g_494},{(void*)0,&g_494,(void*)0},{&g_708,(void*)0,&g_708}},{{(void*)0,&g_708,&g_494},{&g_708,&g_469,&g_708},{(void*)0,&g_708,&g_708},{&g_708,(void*)0,&g_494},{(void*)0,&g_494,(void*)0},{&g_708,(void*)0,&g_708},{(void*)0,&g_708,&g_494},{&g_708,&g_469,&g_708},{(void*)0,&g_708,&g_708},{&g_708,(void*)0,&g_494}},{{(void*)0,&g_494,(void*)0},{&g_708,(void*)0,&g_708},{(void*)0,&g_708,&g_494},{&g_708,&g_469,&g_494},{&g_494,&g_708,(void*)0},{&g_494,&g_469,&g_708},{&g_494,&g_708,&g_494},{&g_494,(void*)0,&g_708},{&g_494,&g_494,&g_708},{&g_494,(void*)0,&g_494}}};
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_707[i] = &g_595;
    }
    if ((**l_57))
    {
        int **l_817 = &l_56;
        unsigned l_820 = 4294967295UL;
        int ****l_825 = &g_683;
        (***g_682) = (*l_57);

        ;
        (*l_56) = (safe_mod_func_int16_t_s_s((safe_div_func_int16_t_s_s(func_68(g_130, (((****l_825) = ((**g_771) = (l_825 == l_825))) != (safe_sub_func_int32_t_s_s((~(safe_add_func_uint32_t_u_u(p_21, p_21))), p_24))), p_21), g_469)), g_478[3][3][1]));


        for (l_46 = 13; (l_46 == 38); ++l_46)
        {
            int *l_846[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int i;
            for (g_765 = 0; (g_765 <= 0); g_765 += 1)
            {
                char l_834 = 0L;
                (*p_22) = ((l_834 >= 2L) > ((safe_mul_func_uint8_t_u_u(255UL, (8L | (g_765 < 0x81E8L)))) != 255UL));
                (**l_57) = ((*l_825) == (void*)0);
                (***l_825) = p_23;

                ;
                for (p_21 = 0; (p_21 <= 0); p_21 += 1)
                {
                    int i, j, k;
                    if (l_810[(g_765 + 2)][p_21][p_21])
                        break;
                    return (***g_593);
                }
            }
            p_23 = (*l_817);
            (*g_62) = (*l_57);

            ;
        }
    }
    else
    {
        int **l_848[9][2] = {{&g_30,&g_30},{&g_30,&g_30},{&g_30,&g_30},{&g_30,&g_30},{&g_30,&g_30},{&g_30,&g_30},{&g_30,&g_30},{&g_30,&g_30},{&g_30,&g_30}};
        int **l_849 = &l_56;
        int i, j;
        (***g_682) = (*l_57);

        ;
    }


    for (g_494 = 14; (g_494 <= 51); g_494++)
    {
        return p_20;
    }
    return (*l_814);
}







static unsigned func_25(int * p_26, unsigned char p_27, short p_28, int p_29)
{
    char l_34 = (-2L);
    return l_34;
}







static unsigned short func_50(char p_51, char p_52, unsigned p_53, int * p_54, int p_55)
{
    int l_259 = 1L;
    unsigned char *l_298[2];
    unsigned char **l_297[6][1][1] = {{{&l_298[0]}},{{&l_298[0]}},{{&l_298[0]}},{{&l_298[0]}},{{&l_298[0]}},{{&l_298[0]}}};
    unsigned char ***l_296 = &l_297[5][0][0];
    int *l_312 = &g_77[2];
    short *l_318 = (void*)0;
    unsigned l_361 = 4294967295UL;
    int l_365 = 7L;
    int l_390 = 0L;
    int *l_394 = &g_77[2];
    int l_417 = 1L;
    unsigned char *****l_457[4][4][2] = {{{&g_336,&g_336},{&g_336,&g_303},{&g_336,(void*)0},{&g_303,(void*)0}},{{&g_336,&g_303},{&g_336,&g_336},{&g_336,&g_303},{&g_336,(void*)0}},{{&g_303,(void*)0},{&g_336,&g_303},{&g_336,&g_336},{&g_336,&g_303}},{{&g_336,(void*)0},{&g_303,(void*)0},{&g_336,&g_303},{&g_336,&g_336}}};
    unsigned l_558 = 0x89068B53L;
    char l_567 = 0xA4L;
    short l_580 = (-9L);
    unsigned ***l_591 = &g_233;
    unsigned char *l_613 = &g_130;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_298[i] = &g_132;
lbl_416:
    (*g_62) = (void*)0;

    ;
    (*g_62) = (*g_62);
    if ((safe_rshift_func_int16_t_s_s(l_259, l_259)))
    {
        short *l_264 = &g_173;
        int l_265 = 0L;
        unsigned char *l_280 = &g_132;
        short l_282 = 0x6634L;
        int ***l_290 = &g_62;
        int ****l_289 = &l_290;
        char l_313 = 5L;
        unsigned char ***l_329 = &l_297[5][0][0];
        char l_378 = 0x9BL;
        int *l_392 = (void*)0;
        int l_400 = (-6L);
        unsigned char l_411[3];
        int i;
        for (i = 0; i < 3; i++)
            l_411[i] = 0x9AL;
        if (((((*g_30) >= ((1UL || (g_77[2] = l_259)) >= (safe_sub_func_int8_t_s_s(func_25(&p_55, g_18, p_51, (*p_54)), (((*l_264) = func_25(&p_55, l_259, g_132, (*p_54))) && g_130))))) >= l_265) > g_144))
        {
            unsigned char **l_269 = (void*)0;
            unsigned char ***l_268 = &l_269;
            int *l_273[8][6] = {{&g_77[6],&g_77[2],&l_265,&g_77[6],&l_265,&g_77[2]},{&g_77[6],&g_77[2],&g_77[2],&g_77[6],&l_265,&g_77[2]},{&l_265,&g_31,&g_31,&l_265,&g_77[2],&l_265},{&g_77[2],&g_31,&g_77[2],&g_77[2],&g_77[2],&g_31},{&g_77[2],&g_31,&l_265,&g_77[2],&g_77[2],&g_77[2]},{&l_265,&g_31,&g_31,&l_265,&g_77[2],&l_265},{&g_77[2],&g_31,&g_77[2],&g_77[2],&g_77[2],&g_31},{&g_77[2],&g_31,&l_265,&g_77[2],&g_77[2],&g_77[2]}};
            short l_395 = 0xF4FDL;
            int i, j;
            if ((safe_lshift_func_uint16_t_u_u((g_77[4] && l_259), (l_268 != &l_269))))
            {
                unsigned char l_272 = 5UL;
                int *l_281 = (void*)0;
                int ***l_288 = &g_62;
                int ****l_287 = &l_288;
                for (g_130 = 0; (g_130 == 15); g_130++)
                {
                    l_272 = (p_51 | p_55);
                }
                g_77[1] = func_25(l_273[1][4], l_265, ((safe_div_func_uint32_t_u_u(0x56058C3EL, p_53)) != (safe_lshift_func_uint8_t_u_s(func_25((*g_62), l_259, ((safe_rshift_func_uint8_t_u_s((&l_272 == l_280), (0xCD6E0BD6L | p_52))) != 0xDC90A007L), (*g_30)), p_53))), l_259);
                l_265 = (p_55 = (l_282 = ((void*)0 == l_281)));
                for (p_53 = 0; (p_53 >= 22); p_53++)
                {
                    int ****l_294 = &l_290;
                    for (p_52 = 0; (p_52 > 23); p_52++)
                    {
                        unsigned l_293[2][9] = {{5UL,0xB456CCBCL,0xB456CCBCL,5UL,0xB456CCBCL,0xB456CCBCL,5UL,0xB456CCBCL,0xB456CCBCL},{5UL,0xB456CCBCL,0xB456CCBCL,5UL,0xB456CCBCL,0xB456CCBCL,5UL,0xB456CCBCL,0xB456CCBCL}};
                        unsigned char ****l_295 = &l_268;
                        unsigned char ****l_299 = (void*)0;
                        unsigned char ****l_300 = &l_296;
                        int l_304 = 8L;
                        int i, j;
                        g_77[6] = (((l_287 != l_289) > (g_173 = (safe_sub_func_int16_t_s_s((~g_31), (l_293[0][2] && ((void*)0 != l_294)))))) && ((((*l_295) = &l_269) != ((*l_300) = l_296)) <= func_25(l_273[1][4], g_18, p_55, (*p_54))));
                        p_55 = (l_304 = (safe_lshift_func_int8_t_s_u((g_303 != &l_296), 4)));
                    }
                    if ((*g_30))
                        break;
                }
            }
            else
            {
                int ***l_319 = (void*)0;
                short l_359 = 0x5C1EL;
                unsigned char ***l_396 = &l_269;
                int l_399[5] = {0x046506FCL,0x046506FCL,0x046506FCL,0x046506FCL,0x046506FCL};
                int i;
                if ((*p_54))
                {
                    unsigned short l_311 = 0xCC11L;
                    int l_332 = 0xBBF87CD8L;
                    unsigned char ****l_333 = &l_329;
                    if (((((!p_51) && (g_144 >= g_18)) & (safe_mul_func_uint8_t_u_u(((safe_div_func_int16_t_s_s(p_51, l_311)) > (func_25(l_312, (l_313 = 0xE1L), (safe_add_func_uint8_t_u_u(p_53, func_25(((*g_62) = l_273[1][4]), (*l_312), p_53, (*g_30)))), (*p_54)) & l_311)), g_130))) <= 0x99A7L))
                    {
                        short **l_316 = (void*)0;
                        short **l_317 = &l_264;
                        int l_320[8][3] = {{0x25E343D6L,0x25E343D6L,0x25E343D6L},{1L,1L,1L},{0x25E343D6L,0x25E343D6L,0x25E343D6L},{1L,1L,1L},{0x25E343D6L,0x25E343D6L,0x25E343D6L},{1L,1L,1L},{0x25E343D6L,0x25E343D6L,0x25E343D6L},{1L,1L,1L}};
                        char *l_325 = &l_313;
                        unsigned char ****l_328[8][7][4] = {{{&l_268,&l_296,&l_268,(void*)0},{&l_268,&l_296,&l_296,&l_268},{&l_296,&l_296,&l_296,&l_296},{&l_296,&l_296,&l_268,&l_268},{&l_268,&l_268,&l_268,&l_268},{&l_268,&l_268,&l_268,&l_296},{&l_268,&l_268,&l_268,&l_268}},{{&l_296,&l_296,&l_268,&l_268},{&l_268,&l_268,&l_268,&l_296},{&l_296,&l_268,&l_296,&l_268},{&l_296,&l_268,&l_296,&l_268},{&l_268,&l_296,&l_296,&l_268},{&l_296,&l_268,&l_268,&l_268},{&l_268,&l_296,&l_268,&l_296}},{{&l_296,&l_268,&l_296,&l_296},{&l_268,&l_268,&l_268,&l_296},{&l_296,&l_268,&l_268,&l_268},{&l_296,&l_268,&l_268,&l_296},{&l_296,&l_268,&l_268,&l_296},{&l_268,&l_268,&l_296,&l_268},{&l_296,&l_268,&l_268,&l_296}},{{&l_268,&l_268,&l_268,&l_296},{&l_296,&l_296,&l_296,&l_268},{&l_268,&l_268,&l_296,&l_296},{&l_296,&l_296,&l_296,&l_296},{&l_296,&l_296,&l_268,&l_268},{&l_268,&l_268,&l_268,&l_268},{&l_268,&l_296,&l_296,&l_268}},{{&l_296,&l_268,&l_268,&l_296},{&l_268,&l_268,&l_296,&l_268},{&l_268,&l_268,&l_268,&l_268},{&l_296,&l_268,&l_268,&l_268},{&l_268,&l_296,&l_296,&l_296},{&l_268,&l_296,&l_268,&l_296},{&l_268,&l_296,&l_268,&l_268}},{{&l_268,&l_268,&l_296,&l_268},{&l_268,&l_268,&l_268,&l_296},{&l_268,&l_268,&l_296,&l_296},{&l_268,&l_296,&l_268,&l_268},{&l_268,&l_296,&l_268,&l_268},{&l_268,&l_268,&l_296,&l_268},{&l_268,&l_296,&l_268,&l_268}},{{&l_296,&l_268,&l_268,&l_296},{&l_268,&l_296,&l_296,&l_268},{&l_268,&l_268,&l_268,&l_296},{&l_296,&l_296,&l_296,&l_296},{&l_268,&l_296,&l_296,&l_296},{&l_296,&l_296,&l_268,&l_296},{&l_296,&l_268,&l_296,&l_268}},{{&l_268,&l_296,&l_268,&l_296},{&l_268,&l_268,&l_268,&l_268},{&l_296,&l_268,&l_268,&l_268},{&l_296,&l_296,&l_296,&l_296},{&l_268,&l_268,&l_268,&l_296},{&l_268,&l_268,&l_296,&l_296},{&l_296,&l_296,&l_296,&l_268}}};
                        int i, j, k;
                        l_320[7][1] = ((((*l_317) = &g_173) != (l_318 = &g_173)) || ((&g_62 == l_319) | p_53));

                        ;
                        l_332 = (safe_mod_func_uint16_t_u_u(((safe_sub_func_int8_t_s_s((((*l_325) = 1L) & p_53), (safe_sub_func_int16_t_s_s(g_130, ((l_329 = &l_269) == (void*)0))))) || (safe_rshift_func_int8_t_s_u(0x8AL, 6))), p_51));

                        ;
                    }
                    else
                    {
                        unsigned char *****l_334 = (void*)0;
                        unsigned char *****l_335 = &g_303;
                        (*g_62) = (***l_289);
                        l_332 = (p_55 | ((((*l_335) = l_333) == g_336) >= p_51));

                        ;
                    }

                    ;
                    ;
                    ;
                    ;
                    if ((safe_rshift_func_uint16_t_u_u((safe_unary_minus_func_uint32_t_u((safe_mod_func_uint8_t_u_u(p_53, (safe_sub_func_int8_t_s_s(p_52, (safe_lshift_func_uint8_t_u_s(l_332, 0)))))))), 8)))
                    {
                        (*g_62) = (*g_62);
                    }
                    else
                    {
                        (*g_62) = l_273[6][2];
                    }
                    for (p_51 = 16; (p_51 >= (-25)); p_51 = safe_sub_func_uint16_t_u_u(p_51, 7))
                    {
                        unsigned l_358[1][4][3] = {{{0x61C810D3L,4294967295UL,0x61C810D3L},{0x61C810D3L,4294967295UL,0x61C810D3L},{0x61C810D3L,4294967295UL,0x61C810D3L},{0x61C810D3L,4294967295UL,0x61C810D3L}}};
                        char *l_360 = &l_313;
                        unsigned short l_362 = 0UL;
                        int i, j, k;
                        p_55 = ((safe_sub_func_uint16_t_u_u(0xD85AL, (*l_312))) || p_51);
                        (*l_312) = (*p_54);
                        if (l_311)
                            break;
                        (*l_312) = (safe_add_func_uint8_t_u_u(l_365, p_55));
                    }
                    if ((p_55 = (safe_rshift_func_uint8_t_u_u(l_332, 4))))
                    {
                        (***l_289) = &p_55;

                        ;
                        (*l_312) = func_68(p_52, (*g_30), ((0x806EC490L && ((safe_sub_func_int16_t_s_s(p_51, (l_378 = (safe_add_func_uint8_t_u_u((*l_312), p_55))))) && (*l_312))) & func_25(l_273[0][5], (safe_mod_func_uint32_t_u_u(((safe_sub_func_int16_t_s_s(g_153[0][3], g_31)) <= (****l_289)), 0x4C089983L)), g_18, (*g_30))));


                    }
                    else
                    {
                        l_265 = (!(p_55 = ((*l_312) = (*p_54))));
                        (*l_312) = 0x7A33482CL;
                    }


                }
                else
                {
                    int *l_383 = &g_77[2];
                    (**l_290) = (*g_62);
                }


                ;
                ;
                ;
                if ((safe_lshift_func_int16_t_s_s((safe_div_func_int8_t_s_s((((*l_280) = p_51) ^ (*l_312)), (safe_mul_func_uint8_t_u_u((*l_312), func_25(l_273[4][4], g_144, g_18, (g_391[4] = l_390)))))), 2)))
                {
                    (*g_62) = l_392;

                    ;
                    (**l_290) = &p_55;

                    ;
                }
                else
                {
                    int *l_393 = (void*)0;
                    (*l_312) = (l_393 != &g_77[2]);
                    for (p_51 = 0; (p_51 <= 6); p_51 += 1)
                    {
                        int i;
                        l_394 = (void*)0;

                        ;
                        (**l_290) = &g_77[p_51];

                        ;
                    }

                    ;
                    if ((*g_30))
                    {
                        unsigned char ****l_397 = &l_268;
                        (*l_312) = (*g_30);
                        (***l_289) = (void*)0;

                        ;
                    }
                    else
                    {
                        (*l_312) = 0x4A7FE7C1L;
                        l_273[5][1] = l_273[1][4];
                        return g_173;



                    }

                    ;
                }

                ;
                ;
                (*l_312) = (~((safe_add_func_uint16_t_u_u(p_51, (safe_add_func_int32_t_s_s(((safe_sub_func_uint8_t_u_u((l_411[2] = (((*p_54) == ((*p_54) && (safe_mod_func_uint16_t_u_u((g_31 & ((*l_264) = (-1L))), p_53)))) || ((((p_51 | g_31) > g_144) | (*p_54)) > (*g_234)))), p_53)) == p_55), 1UL)))) | 0xFFF9L));
            }

            ;
            ;
            ;
            ;
            ;
        }
        else
        {
            (*l_312) = (*p_54);
            (*l_312) = ((safe_add_func_int16_t_s_s(p_53, ((*l_264) = (safe_mul_func_int16_t_s_s((*l_312), p_55))))) <= 255UL);
            if (l_365)
                goto lbl_416;
        }

        ;
        ;
        ;

        ;
        (*l_312) = (l_417 || (p_51 && (safe_sub_func_uint8_t_u_u(p_53, 0L))));
        (*l_312) = 0L;
        return g_153[0][3];



    }
    else
    {
        char l_420[7] = {0x60L,0x60L,0x60L,0x60L,0x60L,0x60L,0x60L};
        int *l_437[1];
        short **l_467 = &l_318;
        int ***l_471 = (void*)0;
        int ****l_470 = &l_471;
        unsigned l_507[4] = {0x6851E367L,0x6851E367L,0x6851E367L,0x6851E367L};
        unsigned char **l_530 = (void*)0;
        unsigned char ***l_542 = &l_530;
        unsigned short l_543[5][10] = {{6UL,9UL,65532UL,6UL,65532UL,9UL,6UL,0xFB92L,0xFB92L,6UL},{0xFB92L,0xA01AL,65532UL,65532UL,0xA01AL,0xFB92L,9UL,0xA01AL,9UL,0xFB92L},{65526UL,0xA01AL,65532UL,0xA01AL,65526UL,65532UL,6UL,6UL,65532UL,65526UL},{65526UL,9UL,9UL,65526UL,65532UL,0xFB92L,65526UL,0xFB92L,65532UL,65526UL},{0xFB92L,65526UL,0xFB92L,65532UL,65526UL,9UL,9UL,65526UL,65532UL,0xFB92L}};
        unsigned **l_555 = &g_234;
        int i, j;
        for (i = 0; i < 1; i++)
            l_437[i] = &l_390;
        if (l_420[2])
        {
            for (g_130 = 20; (g_130 == 3); g_130 = safe_sub_func_uint16_t_u_u(g_130, 4))
            {
                int l_428 = 1L;
                int *l_429 = &g_31;
                int l_441[1][10][2] = {{{(-5L),(-5L)},{(-5L),(-5L)},{(-5L),(-5L)},{(-5L),(-5L)},{(-5L),(-5L)},{(-5L),(-5L)},{(-5L),(-5L)},{(-5L),(-5L)},{(-5L),(-5L)},{(-5L),(-5L)}}};
                int i, j, k;
                for (l_361 = 0; (l_361 > 15); ++l_361)
                {
                    unsigned char l_430 = 255UL;
                    for (g_117 = 2; (g_117 >= 0); g_117 -= 1)
                    {
                        int *l_425 = (void*)0;
                        int *l_426 = &l_390;
                        int *l_427 = &l_365;
                        short *l_440 = &g_391[4];
                        int i, j;
                        (*l_427) = ((*l_426) = ((*l_394) = ((g_77[(g_117 + 2)] ^ g_77[(g_117 + 2)]) || (g_130 >= g_153[0][3]))));
                        (*g_62) = (*g_62);
                        (*l_394) = l_428;
                        (*l_312) = func_25(l_429, ((l_430 & (safe_rshift_func_uint16_t_u_u(((~(safe_sub_func_uint16_t_u_u((!(p_55 ^ p_51)), ((safe_div_func_uint16_t_u_u((g_77[2] & ((*l_440) = (p_51 ^ (g_153[g_117][(g_117 + 2)] = func_25(l_437[0], (g_132 = ((safe_rshift_func_int8_t_s_u((-10L), 1)) < func_25((*g_62), p_55, (*l_429), (*g_30)))), l_430, (*p_54)))))), l_441[0][7][1])) > p_51)))) | g_398), 8))) <= g_130), g_117, l_430);
                    }
                    for (l_365 = 22; (l_365 <= (-10)); l_365 = safe_sub_func_uint16_t_u_u(l_365, 8))
                    {
                        char l_444 = 0L;
                        if (l_444)
                            break;
                    }
                    (*g_62) = (void*)0;
                }
                if ((*p_54))
                    continue;
            }
        }
        else
        {
            int l_449 = 0x1B290422L;
            int *l_521 = &l_390;
            (*g_62) = &p_55;

            ;
            (*g_63) = (*p_54);
            for (p_51 = 0; (p_51 <= 9); p_51 += 1)
            {
                unsigned char ****l_472[6] = {&l_296,&l_296,&l_296,&l_296,&l_296,&l_296};
                unsigned char ****l_473 = &l_296;
                char *l_479 = (void*)0;
                short **l_480 = (void*)0;
                int *l_481[2];
                unsigned char l_509 = 255UL;
                int i;
                for (i = 0; i < 2; i++)
                    l_481[i] = &g_458;
            }
        }

        ;
        for (l_365 = 5; (l_365 != (-15)); --l_365)
        {
            char l_531 = (-1L);
            for (l_417 = 0; (l_417 >= 10); l_417++)
            {
                short l_527 = (-1L);
                return l_527;


            }
            l_531 = (safe_lshift_func_int16_t_s_u((-6L), (l_530 != l_530)));
            p_54 = (*g_62);

            ;
        }

        ;
        if (func_25(((*g_62) = (void*)0), (safe_mod_func_int8_t_s_s((((safe_mod_func_int8_t_s_s(((safe_lshift_func_int16_t_s_u((*l_312), (safe_div_func_int32_t_s_s((*g_30), p_55)))) < (p_52 || (safe_rshift_func_uint16_t_u_s(p_52, g_117)))), g_132)) & ((((l_542 = &l_530) != (void*)0) | 0xB4C4L) > p_55)) < (*g_30)), l_543[4][5])), g_391[4], (*g_30)))
        {
            int *l_544[3][8][3] = {{{&g_31,&g_458,&g_31},{&l_390,&l_390,&l_390},{&g_31,&g_458,&g_31},{&l_390,&l_390,&l_390},{&g_31,&g_458,&g_31},{&l_390,&l_390,&l_390},{&g_31,&g_458,&g_31},{&l_390,&l_390,&l_390}},{{&g_31,&g_458,&g_31},{&l_390,&l_390,&l_390},{&g_31,&g_458,&g_31},{&l_390,&l_390,&l_390},{&g_31,&g_458,&g_31},{&l_390,&l_390,&l_390},{&g_31,&g_458,&g_31},{&l_390,&l_390,&l_390}},{{&g_31,&g_458,&g_31},{&l_390,&l_390,&l_390},{&g_31,&g_458,&g_31},{&l_390,&l_390,&l_390},{&g_31,&g_458,&g_31},{&l_390,&l_390,&l_390},{&g_31,&g_458,&g_31},{&l_390,&l_390,&l_390}}};
            int i, j, k;
            (*g_62) = (*g_62);
            l_544[2][4][0] = l_544[2][4][0];
            if ((*g_30))
            {
                unsigned short l_547 = 0x60BBL;
                short *l_548 = (void*)0;
                short *l_549 = (void*)0;
                short *l_550 = &g_173;
                int *l_559 = &g_77[1];
                char *l_564 = &l_420[2];
                char *l_566[8] = {&g_144,&g_144,&g_144,&g_144,&g_144,&g_144,&g_144,&g_144};
                int i;
                g_478[3][3][1] = (safe_mul_func_int8_t_s_s(((*g_234) | ((!((*l_550) = (p_55 != l_547))) >= p_52)), (&g_62 == (void*)0)));
                for (g_130 = 0; (g_130 != 10); g_130 = safe_add_func_int16_t_s_s(g_130, 1))
                {
                    for (g_173 = (-24); (g_173 != (-20)); g_173 = safe_add_func_int32_t_s_s(g_173, 8))
                    {
                        unsigned ***l_556 = &l_555;
                        (*l_556) = l_555;
                        l_544[2][4][0] = &p_55;
                    }
                    for (g_398 = 0; (g_398 <= 2); g_398 += 1)
                    {
                        unsigned ***l_557 = &g_233;
                        (*l_557) = &g_234;
                        if (l_558)
                            break;
                        if (l_547)
                            continue;
                    }
                }


                l_559 = l_544[2][4][0];

                ;
                (*l_312) = ((safe_div_func_int8_t_s_s(g_18, 1L)) || func_25(&p_55, ((safe_mul_func_int8_t_s_s((p_51 = (((g_173 | (((*l_564) = g_478[3][0][4]) == (*l_559))) == ((void*)0 == g_565)) ^ (*g_30))), p_53)) && 4294967291UL), p_55, l_567));
            }
            else
            {
                for (p_55 = 0; (p_55 == 18); p_55++)
                {
                    for (g_132 = 0; (g_132 >= 38); g_132 = safe_add_func_uint16_t_u_u(g_132, 3))
                    {
                        unsigned short l_572 = 5UL;
                        return l_572;
                    }
                }
                (*g_62) = &p_55;

                ;
                return p_51;


            }


        }
        else
        {
            unsigned char **l_579 = &l_298[0];
            g_573[1][1] = (*l_542);
            (*l_312) = (safe_lshift_func_int16_t_s_s(((safe_mul_func_int16_t_s_s((g_173 = (l_579 != ((*l_542) = (*l_542)))), (p_53 < l_580))) || 65529UL), 2));
        }

        ;
        p_54 = &l_390;

        ;
    }

    ;
    if (((*l_394) = ((p_53 ^ g_391[6]) <= g_581)))
    {
        (*l_312) = (0xA4FFL >= g_458);
        (*p_54) = ((*l_312) = ((*l_394) > (p_52 && p_55)));
        return p_52;
    }
    else
    {
        unsigned char ****l_587 = &l_296;
        int l_590[7];
        unsigned ***l_594 = &g_233;
        unsigned short l_609 = 1UL;
        int l_634 = 1L;
        short *l_685 = &g_391[4];
        int i;
        for (i = 0; i < 7; i++)
            l_590[i] = 0x8FD060D3L;
        for (l_580 = 0; (l_580 <= (-18)); l_580 = safe_sub_func_int8_t_s_s(l_580, 5))
        {
            unsigned char ****l_586 = &l_296;
            (*l_394) = (g_153[1][0] | (p_51 != (safe_mul_func_int8_t_s_s(g_581, (l_586 != (l_587 = g_336))))));

            ;
        }

        ;
        for (g_469 = (-23); (g_469 > 35); g_469++)
        {
            unsigned ****l_592[4];
            short l_596[9] = {0x4C8CL,0x5AB4L,0x5AB4L,0x4C8CL,0x5AB4L,0x5AB4L,0x4C8CL,0x5AB4L,0x5AB4L};
            int l_615 = (-7L);
            unsigned char ***l_621 = &g_573[1][5];
            unsigned char ***l_622[1];
            unsigned l_625 = 0xC15FA189L;
            int i;
            for (i = 0; i < 4; i++)
                l_592[i] = &l_591;
            for (i = 0; i < 1; i++)
                l_622[i] = (void*)0;
            (*l_312) = (l_596[5] = (l_590[1] ^ ((g_593 = (l_591 = l_591)) == (g_595 = l_594))));

            ;
            for (p_52 = 0; (p_52 < (-20)); p_52--)
            {
                (*p_54) = ((safe_rshift_func_int16_t_s_s((l_590[0] = (safe_sub_func_int8_t_s_s(g_478[0][3][2], (safe_lshift_func_uint8_t_u_u((g_398 <= 0L), 7))))), g_391[9])) > (*l_394));
                return p_55;
            }
            for (l_567 = 0; (l_567 != 22); l_567++)
            {
                unsigned char *l_612 = &g_132;
                int l_618 = 1L;
                (*g_62) = &l_590[1];

                ;
                for (l_609 = 1; (l_609 <= 4); l_609 += 1)
                {
                    for (l_361 = 0; (l_361 <= 4); l_361 += 1)
                    {
                        (*g_63) = (*p_54);
                    }
                    if (l_596[5])
                    {
                        int i, j;
                        (*l_394) = (l_612 == l_613);
                    }
                    else
                    {
                        unsigned l_614 = 0UL;
                        (*p_54) = l_614;
                        (*p_54) = ((((*l_394) = (+(l_615 = (+7UL)))) >= p_55) == p_52);
                    }
                }
                for (l_390 = 25; (l_390 < 13); l_390 = safe_sub_func_uint8_t_u_u(l_390, 5))
                {
                    for (p_53 = 0; (p_53 <= 3); p_53 += 1)
                    {
                        if (l_618)
                            break;
                        (*g_62) = (void*)0;

                        ;
                        return g_31;
                    }
                }
                (*g_62) = (*g_62);
            }

            ;
            if ((l_609 || (safe_lshift_func_int16_t_s_s((8L <= (func_25((*g_62), p_55, (*l_394), l_625) != 1UL)), 0))))
            {
                (*g_62) = &l_590[3];

                ;
                return l_625;


            }
            else
            {
                (*g_62) = (l_312 = &l_590[6]);

                ;
                ;
                (*g_62) = (void*)0;

                ;
            }

            ;
            ;
        }

        ;
        ;
        if ((l_590[1] <= (l_634 = p_52)))
        {
            return g_398;
        }
        else
        {
            short l_635[3][2];
            int *l_671 = &g_77[2];
            int i, j;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 2; j++)
                    l_635[i][j] = (-1L);
            }
            (*p_54) = (*g_30);
            if (l_590[1])
            {
                unsigned char l_655 = 255UL;
                short l_662 = 0x27BAL;
                unsigned l_666 = 0x9B3935C9L;
                int *l_675 = &g_31;
                if (l_635[1][1])
                {
                    (*p_54) = (~(((safe_mul_func_int16_t_s_s(3L, (l_609 > (safe_div_func_int8_t_s_s(l_635[1][1], g_18))))) < (safe_mod_func_uint16_t_u_u(1UL, 0x104EL))) != 65533UL));
                }
                else
                {
                    unsigned short *l_654[2];
                    int *l_659 = &l_590[1];
                    short *l_665 = &l_635[1][1];
                    unsigned short l_667 = 1UL;
                    int i;
                    for (i = 0; i < 2; i++)
                        l_654[i] = (void*)0;
lbl_658:
                    (*g_62) = &p_55;

                    ;
                    if ((((safe_sub_func_int32_t_s_s((**g_62), ((((((safe_rshift_func_uint16_t_u_s((l_635[1][1] ^ g_153[2][6]), 5)) < ((safe_lshift_func_int16_t_s_u((safe_lshift_func_uint8_t_u_s((((void*)0 == &p_53) ^ g_173), 5)), 13)) == (l_634 = (safe_lshift_func_int8_t_s_s(((p_53 = ((**g_62) >= (safe_rshift_func_int8_t_s_u(((*p_54) > p_53), 3)))) >= p_52), g_494))))) ^ 6UL) > 1UL) == 0xD7L) && (*g_30)))) == 0xD1DDD785L) ^ l_655))
                    {
                        (*g_62) = func_58(&g_30, (*g_62), ((*g_234) = (safe_div_func_int8_t_s_s((-6L), 250UL))));

                        ;
                    }
                    else
                    {
                        if (l_609)
                            goto lbl_658;
                        (*g_62) = (*g_62);
                        (**g_62) = (-1L);
                    }

                    ;
                    (*l_394) = ((func_25(func_58(&g_63, l_659, (*g_565)), l_655, (safe_sub_func_uint8_t_u_u(l_662, (safe_rshift_func_int8_t_s_s(((((((*l_659) | (l_655 & ((*l_665) = l_655))) != 0x193A0BA7L) || p_55) >= l_655) < (*l_659)), l_655)))), l_666) != 0xACF365B5L) >= l_667);


                }


                (*l_312) = ((0xC67CL != (((g_153[0][3] < ((*l_613) = p_53)) ^ l_635[1][1]) > (safe_mul_func_int16_t_s_s((g_670 != func_25(l_671, p_53, (l_655 & (safe_sub_func_int16_t_s_s((((*p_54) = (*g_30)) | (*l_312)), g_478[2][0][3]))), g_674)), p_55)))) || 65535UL);
                (*g_62) = l_675;

                ;
            }
            else
            {
                int l_679[2][10][3] = {{{4L,(-5L),(-5L)},{0xE5BC9734L,(-1L),2L},{0x8453BAF5L,(-5L),1L},{0x7786113FL,(-5L),(-1L)},{0x8F336543L,(-1L),9L},{(-1L),(-5L),(-5L)},{0x32E99073L,(-5L),0x7AB3BDDBL},{4L,(-1L),(-9L)},{0L,(-5L),0xC98F6AD0L},{4L,(-5L),(-5L)}},{{0xE5BC9734L,(-1L),2L},{0x8453BAF5L,(-5L),1L},{0x7786113FL,(-5L),(-1L)},{0x8F336543L,(-1L),9L},{(-1L),(-5L),(-5L)},{0x32E99073L,(-5L),0x7AB3BDDBL},{4L,(-1L),(-9L)},{0L,(-5L),0xC98F6AD0L},{4L,(-5L),(-5L)},{0xE5BC9734L,(-1L),2L}}};
                int *l_681[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                int i, j, k;
                for (p_51 = 0; (p_51 < (-15)); p_51--)
                {
                    unsigned short *l_678[4] = {&l_609,&l_609,&l_609,&l_609};
                    int *l_680 = &l_365;
                    int i;
                    (*l_671) = l_609;
                    if (l_679[1][1][1])
                        continue;
                    (*g_62) = (*g_62);
                    p_54 = (**g_683);

                    ;
                }

                ;
                return g_494;
            }

            ;
        }

        ;
        (*g_62) = func_58(&p_54, (*g_62), ((p_52 ^ ((*l_312) && func_25((*g_62), (*g_574), ((&l_580 == l_685) != (safe_div_func_uint8_t_u_u(0x3DL, (*l_312)))), (*p_54)))) != 4L));

        ;
    }

    ;

    ;
    return g_494;
}







static int * func_58(int ** p_59, int * p_60, unsigned p_61)
{
    int **l_74 = &g_63;
    int ***l_75 = &l_74;
    int *l_76 = &g_77[2];
    (*l_75) = func_64(((func_68(g_31, ((*l_76) = (safe_add_func_uint32_t_u_u(4294967290UL, (((*l_75) = l_74) == &g_63)))), g_18) != g_31) && g_153[2][1]), (safe_mod_func_uint16_t_u_u(func_25(&g_31, p_61, p_61, g_18), g_31)), p_61);


    return l_76;


}







static int ** func_64(char p_65, char p_66, short p_67)
{
    int l_241 = 0xBFCAAF9CL;
    int *l_242 = &g_77[5];
    unsigned l_245 = 0UL;
    int l_256 = (-10L);
    (*l_242) = l_241;
    (*l_242) = (safe_div_func_uint16_t_u_u(func_25(&g_77[5], l_245, (g_18 <= (safe_add_func_int16_t_s_s(((*g_234) && (((*l_242) = (safe_mul_func_uint8_t_u_u((g_132 = (safe_sub_func_uint16_t_u_u(func_25(&l_241, (safe_rshift_func_int8_t_s_u(p_67, 6)), (*l_242), (safe_add_func_int16_t_s_s(((*l_242) | ((*g_234) = 0x185D0FBCL)), g_77[4]))), p_66))), l_256))) ^ 0x1CL)), l_245))), p_66), p_66));
    return &g_63;


}







static short func_68(unsigned short p_69, int p_70, unsigned short p_71)
{
    unsigned short l_80 = 1UL;
    int *l_86[7][9][2] = {{{(void*)0,&g_77[0]},{(void*)0,&g_77[2]},{&g_31,(void*)0},{&g_77[2],&g_77[0]},{&g_77[2],&g_77[0]},{&g_77[2],(void*)0},{(void*)0,(void*)0},{(void*)0,&g_77[3]},{&g_77[2],(void*)0}},{{(void*)0,(void*)0},{&g_77[2],&g_77[0]},{&g_77[2],&g_77[0]},{&g_77[2],(void*)0},{(void*)0,(void*)0},{&g_77[2],&g_77[3]},{(void*)0,(void*)0},{(void*)0,(void*)0},{&g_77[2],&g_77[0]}},{{&g_77[2],&g_77[0]},{&g_77[2],(void*)0},{(void*)0,(void*)0},{(void*)0,&g_77[3]},{&g_77[2],(void*)0},{(void*)0,(void*)0},{&g_77[2],&g_77[0]},{&g_77[2],&g_77[0]},{&g_77[2],(void*)0}},{{(void*)0,(void*)0},{&g_77[2],&g_77[3]},{(void*)0,(void*)0},{(void*)0,(void*)0},{&g_77[2],&g_77[0]},{&g_77[2],&g_77[0]},{&g_77[2],(void*)0},{(void*)0,(void*)0},{(void*)0,&g_77[3]}},{{&g_77[2],(void*)0},{(void*)0,(void*)0},{&g_77[2],&g_77[0]},{&g_77[2],&g_77[0]},{&g_77[2],(void*)0},{(void*)0,(void*)0},{&g_77[2],&g_77[3]},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{&g_77[2],&g_77[0]},{&g_77[2],&g_77[0]},{&g_77[2],(void*)0},{(void*)0,(void*)0},{(void*)0,&g_77[3]},{&g_77[2],&g_77[0]},{&g_77[2],(void*)0},{&g_77[2],&g_77[2]},{&g_77[2],&g_77[2]}},{{&g_77[2],(void*)0},{&g_77[2],&g_77[0]},{(void*)0,(void*)0},{(void*)0,&g_77[0]},{&g_77[2],(void*)0},{(void*)0,&g_77[2]},{&g_77[2],&g_77[2]},{(void*)0,(void*)0},{&g_77[2],&g_77[0]}}};
    int **l_89 = (void*)0;
    int *l_145 = &g_77[2];
    int ***l_199 = &l_89;
    int *l_227 = &g_31;
    int i, j, k;
    if ((safe_sub_func_uint32_t_u_u(l_80, l_80)))
    {
        int **l_81 = &g_63;
        (*g_62) = (*g_62);
        if ((**g_62))
        {
            int ***l_92 = &l_89;
            if ((p_70 = ((l_81 == (void*)0) & (func_25((*g_62), ((safe_lshift_func_int8_t_s_s(p_70, 3)) ^ (safe_div_func_uint32_t_u_u(0xA4A91A3DL, func_25(l_86[4][0][1], (**l_81), g_77[2], p_69)))), p_69, (**g_62)) > (*g_63)))))
            {
                int **l_87 = &g_63;
                int **l_88 = &g_63;
                if (((l_87 = &l_86[4][0][1]) != (l_89 = l_88)))
                {
                    char l_95[7][2][10] = {{{(-10L),0x5AL,1L,6L,0x44L,0x95L,(-2L),0x4EL,0x95L,(-1L)},{(-10L),0x0EL,(-1L),(-10L),0x49L,(-1L),(-1L),(-1L),0x49L,(-10L)}},{{(-1L),(-1L),(-1L),0x49L,(-10L),(-1L),0x0EL,(-10L),0xD5L,0xA3L},{0x4EL,(-2L),0x95L,0x44L,6L,1L,0x5AL,(-10L),0x95L,0x96L}},{{0x5AL,0x87L,(-1L),0xE1L,0xD5L,0xD5L,0xE1L,(-1L),0x87L,0x5AL},{0xA3L,0x4EL,(-1L),0xD5L,0x96L,0xCFL,0x0EL,0x4EL,(-1L),0x7FL}},{{0xE1L,(-10L),1L,0x4EL,0x96L,1L,0x44L,0x5AL,6L,0x5AL},{0x0EL,0x0CL,1L,(-1L),1L,0x0CL,0x0EL,0x95L,6L,0x0EL}},{{1L,(-1L),1L,1L,(-1L),6L,0x05L,0x7FL,0x69L,0x95L},{0xCFL,(-1L),0x44L,0xA3L,0x49L,(-1L),0x0EL,0x0EL,(-1L),0x49L}},{{0xD5L,0x0CL,0x0CL,0xD5L,0x92L,0x95L,0xCFL,1L,1L,0xD5L},{1L,0x49L,6L,0x92L,0xCFL,0x05L,0x0CL,0xCFL,1L,0x95L}},{{(-1L),0x87L,(-1L),0xD5L,0x7FL,0x44L,0x7FL,0xD5L,(-1L),0x87L},{(-1L),0x05L,0x95L,0xA3L,1L,0x92L,0xA3L,1L,0x69L,(-1L)}}};
                    int i, j, k;
                    (*l_89) = (*g_62);
                    p_70 = (p_69 & ((&g_62 != &g_62) || 1L));
                    p_70 = (g_18 ^ func_25((*l_88), g_77[0], (safe_mul_func_int16_t_s_s(p_71, ((void*)0 != l_92))), (**g_62)));
                    for (p_69 = 0; (p_69 != 46); p_69++)
                    {
                        g_77[1] = l_95[3][0][0];
                        p_70 = (g_77[2] < (***l_92));
                        (*l_87) = ((**l_92) = &p_70);

                        ;
                    }



                }
                else
                {
                    for (p_71 = 0; (p_71 <= 1); p_71 += 1)
                    {
                        (*l_89) = &p_70;

                        ;
                        (*l_88) = &p_70;
                        if ((*g_63))
                            break;
                        return p_69;


                    }


                    (*l_81) = &p_70;

                    ;
                }



                ;
                ;
                if (((void*)0 != l_88))
                {
                    char *l_116 = &g_117;
                    int l_118 = (-6L);
                    g_77[2] = (func_25((*g_62), (safe_add_func_uint32_t_u_u(0xE7B97028L, (safe_lshift_func_int16_t_s_u((safe_mul_func_int16_t_s_s((((safe_div_func_uint8_t_u_u(p_69, (safe_add_func_uint8_t_u_u((safe_mul_func_int16_t_s_s(g_18, func_25((*l_81), (safe_rshift_func_int16_t_s_u((safe_mod_func_uint8_t_u_u((safe_sub_func_int16_t_s_s((safe_add_func_uint8_t_u_u((g_18 < ((((*l_116) = (((p_69 >= g_77[2]) >= (((**g_62) ^ (*g_63)) < (**l_89))) != p_70)) != g_31) & 0xEB0DB54EL)), 1L)), 5L)), 0x76L)), g_18)), g_18, l_118))), g_77[2])))) != g_18) == 0x8EL), g_31)), g_77[2])))), p_69, p_71) ^ 0x14A32183L);
                    for (g_117 = 21; (g_117 > 22); g_117 = safe_add_func_uint32_t_u_u(g_117, 3))
                    {
                        return l_118;


                    }
                    (*l_88) = &p_70;

                    ;
                    return g_18;


                }
                else
                {
                    p_70 = 0x421FF5D1L;
                }
            }
            else
            {
                int *l_121 = &g_77[2];
                (*g_62) = l_121;

                ;
                p_70 = ((*g_63) = 0L);
            }



            ;
        }
        else
        {
            unsigned short l_122[5][4] = {{0x18F2L,65527UL,65535UL,65535UL},{0x7155L,0x7155L,0UL,65527UL},{65527UL,0x18F2L,0UL,0x18F2L},{0x7155L,0x2351L,65535UL,0UL},{0x18F2L,0x2351L,0x2351L,0x18F2L}};
            int i, j;
            return l_122[2][3];
        }



        ;
    }
    else
    {
        unsigned l_123[3][4] = {{0x8312C2B6L,0x8312C2B6L,0x8312C2B6L,0x8312C2B6L},{0x8312C2B6L,0x8312C2B6L,0x8312C2B6L,0x8312C2B6L},{0x8312C2B6L,0x8312C2B6L,0x8312C2B6L,0x8312C2B6L}};
        unsigned l_124 = 0UL;
        int *l_149 = (void*)0;
        int ***l_201 = &l_89;
        unsigned char l_236 = 1UL;
        int i, j;
        if (l_123[0][2])
        {
            unsigned l_127 = 0xA620E0AFL;
            int l_135 = 0x67889039L;
            int ***l_136 = (void*)0;
            unsigned char *l_159 = &g_130;
            unsigned char **l_158 = &l_159;
            unsigned *l_181 = &g_153[1][7];
            short l_214 = 5L;
            if (p_70)
            {
                int l_128[5][7][7] = {{{0xC557317AL,0x8262CBF2L,0xB9F5DD3FL,0xBBB315D7L,1L,(-1L),1L},{7L,0xB0A815ABL,0xE325ED22L,0x3EF36B23L,0xFBD8CA61L,0x3EF36B23L,0xE325ED22L},{0xC557317AL,(-6L),0x0806C526L,0xBBB315D7L,(-8L),(-2L),1L},{0xB0A815ABL,7L,0xE325ED22L,0L,0xC1E89F1BL,0x3EF36B23L,(-2L)},{1L,(-6L),0xB9F5DD3FL,(-1L),(-8L),(-1L),0xB9F5DD3FL},{0xB0A815ABL,0xB0A815ABL,9L,0L,0xFBD8CA61L,0x02682AE0L,(-2L)},{0xC557317AL,0x8262CBF2L,0xB9F5DD3FL,0xBBB315D7L,1L,(-1L),1L}},{{7L,0xB0A815ABL,0xE325ED22L,0x3EF36B23L,0xFBD8CA61L,0x3EF36B23L,0xE325ED22L},{0xC557317AL,(-6L),0x0806C526L,0xBBB315D7L,(-8L),(-2L),1L},{0xB0A815ABL,7L,0xE325ED22L,0L,0xC1E89F1BL,0x3EF36B23L,(-2L)},{1L,(-6L),0xB9F5DD3FL,(-1L),(-8L),(-1L),0xB9F5DD3FL},{0xB0A815ABL,0xB0A815ABL,9L,0L,0xFBD8CA61L,0x02682AE0L,(-2L)},{0xC557317AL,0x8262CBF2L,0xB9F5DD3FL,0xBBB315D7L,1L,0xDA70A41DL,1L},{0x88E96A69L,0x853F4F87L,0x9E6926EBL,9L,0x0EADA3A8L,9L,0x9E6926EBL}},{{(-1L),0xDFDFF98CL,(-8L),(-9L),0x891D5C63L,0x0D2D4BDAL,1L},{0x853F4F87L,0x88E96A69L,0x9E6926EBL,0xE325ED22L,0xF4BB6045L,9L,0xC1E89F1BL},{0x46DB42BEL,0xDFDFF98CL,(-2L),0xDA70A41DL,0x891D5C63L,0xDA70A41DL,(-2L)},{0x853F4F87L,0x853F4F87L,0xFBD8CA61L,0xE325ED22L,0x0EADA3A8L,(-2L),0xC1E89F1BL},{(-1L),0x0DC26B4EL,(-2L),(-9L),(-1L),0xDA70A41DL,1L},{0x88E96A69L,0x853F4F87L,0x9E6926EBL,9L,0x0EADA3A8L,9L,0x9E6926EBL},{(-1L),0xDFDFF98CL,(-8L),(-9L),0x891D5C63L,0x0D2D4BDAL,1L}},{{0x853F4F87L,0x88E96A69L,0x9E6926EBL,0xE325ED22L,0xF4BB6045L,9L,0xC1E89F1BL},{0x46DB42BEL,0xDFDFF98CL,(-2L),0xDA70A41DL,0x891D5C63L,0xDA70A41DL,(-2L)},{0x853F4F87L,0x853F4F87L,0xFBD8CA61L,0xE325ED22L,0x0EADA3A8L,(-2L),0xC1E89F1BL},{(-1L),0x0DC26B4EL,(-2L),(-9L),(-1L),0xDA70A41DL,1L},{0x88E96A69L,0x853F4F87L,0x9E6926EBL,9L,0x0EADA3A8L,9L,0x9E6926EBL},{(-1L),0xDFDFF98CL,0xC557317AL,(-4L),(-1L),0xE4BD68C6L,1L},{0xC1E89F1BL,0x9E6926EBL,0x38AF2192L,0x9AD97AB8L,0x88E96A69L,2L,7L}},{{(-2L),0x934F3F07L,0x93622BFCL,0xB8AB05D5L,(-1L),0xB8AB05D5L,0x93622BFCL},{0xC1E89F1BL,0xC1E89F1BL,0xB0A815ABL,0x9AD97AB8L,0x853F4F87L,1L,7L},{1L,0x13965C3EL,0x93622BFCL,(-4L),0x46DB42BEL,0xB8AB05D5L,1L},{0x9E6926EBL,0xC1E89F1BL,0x38AF2192L,2L,0x853F4F87L,2L,0x38AF2192L},{1L,0x934F3F07L,0xC557317AL,(-4L),(-1L),0xE4BD68C6L,1L},{0xC1E89F1BL,0x9E6926EBL,0x38AF2192L,0x9AD97AB8L,0x88E96A69L,2L,7L},{(-2L),0x934F3F07L,0x93622BFCL,0xB8AB05D5L,(-1L),0xB8AB05D5L,0x93622BFCL}}};
                int *l_146 = &g_77[2];
                int *l_148 = &l_128[1][2][6];
                int i, j, k;
                p_70 = 0xE5DFA243L;
                l_124 = (p_70 = l_123[1][2]);
                for (l_80 = 0; (l_80 > 16); l_80 = safe_add_func_uint8_t_u_u(l_80, 7))
                {
                    unsigned char *l_129 = &g_130;
                    unsigned char *l_131[5] = {&g_132,&g_132,&g_132,&g_132,&g_132};
                    int *l_137 = &g_77[0];
                    char *l_140 = (void*)0;
                    char *l_141 = &g_117;
                    int i;
                    l_135 = (l_127 < (g_18 > (((~(g_31 != (g_132 = ((*l_129) = l_128[0][5][5])))) | (safe_sub_func_uint16_t_u_u(p_69, (g_18 != g_31)))) && 0x02DB9AC5L)));
                    if (((((p_69 | ((&l_89 == l_136) != func_25(((*g_62) = l_137), (safe_sub_func_uint32_t_u_u(func_25(l_137, ((p_70 | ((*l_141) = 1L)) != ((g_62 == &l_137) >= g_130)), l_124, p_71), 0L)), g_132, (*l_137)))) && g_130) || p_71) >= g_31))
                    {
                        int *l_147 = &l_128[0][5][5];
                        if ((*l_137))
                            break;
                        p_70 = (safe_sub_func_uint16_t_u_u((&g_130 == (void*)0), ((0x8EL <= ((g_144 = (p_70 <= 0x9BL)) == (((*l_129) = func_25(l_145, ((l_146 = ((*g_62) = (*g_62))) != l_147), (((l_148 = l_148) == l_149) | p_70), g_18)) & (*l_137)))) != 65535UL)));
                        if ((*g_63))
                            break;
                        return p_71;
                    }
                    else
                    {
                        unsigned *l_152 = &g_153[0][3];
                        (*g_63) = ((g_144 | func_25((*g_62), g_18, p_70, (*g_63))) < (4294967295UL != ((*l_152) = (safe_rshift_func_int16_t_s_u(p_71, 1)))));
                        (*g_62) = (*g_62);
                        p_70 = ((4UL | ((-4L) | (safe_div_func_int8_t_s_s((&g_62 == &g_62), p_71)))) <= (**g_62));
                        if ((*l_137))
                            break;
                    }

                    ;
                }
                for (p_69 = (-15); (p_69 > 8); p_69 = safe_add_func_uint8_t_u_u(p_69, 5))
                {
                    unsigned char ***l_160 = &l_158;
                    (*l_160) = l_158;
                    l_149 = &p_70;

                    ;
                }

                ;
            }
            else
            {
                int **l_166 = &l_86[4][0][1];
                unsigned *l_182 = &g_153[0][3];
                unsigned char ***l_213 = &l_158;
                if (p_69)
                {
                    short l_163 = (-7L);
                    for (g_132 = 22; (g_132 == 60); ++g_132)
                    {
                        (*g_62) = &p_70;

                        ;
                        if ((*g_63))
                            break;
                        (*g_63) = 0xB2E1E597L;
                        return l_163;


                    }


                }
                else
                {
                    short *l_171 = (void*)0;
                    short *l_172[9][9][3] = {{{&g_173,&g_173,(void*)0},{&g_173,&g_173,&g_173},{&g_173,&g_173,&g_173},{&g_173,&g_173,&g_173},{&g_173,&g_173,&g_173},{&g_173,(void*)0,&g_173},{&g_173,&g_173,&g_173},{&g_173,&g_173,&g_173},{&g_173,&g_173,&g_173}},{{&g_173,&g_173,&g_173},{&g_173,&g_173,&g_173},{&g_173,&g_173,&g_173},{&g_173,&g_173,&g_173},{&g_173,&g_173,&g_173},{&g_173,&g_173,&g_173},{&g_173,&g_173,&g_173},{&g_173,&g_173,&g_173},{&g_173,&g_173,&g_173}},{{&g_173,&g_173,&g_173},{&g_173,&g_173,&g_173},{&g_173,&g_173,&g_173},{&g_173,&g_173,&g_173},{&g_173,&g_173,&g_173},{&g_173,&g_173,&g_173},{&g_173,&g_173,&g_173},{&g_173,&g_173,&g_173},{&g_173,&g_173,&g_173}},{{&g_173,&g_173,&g_173},{&g_173,&g_173,&g_173},{&g_173,&g_173,&g_173},{&g_173,&g_173,&g_173},{&g_173,&g_173,&g_173},{&g_173,&g_173,&g_173},{&g_173,&g_173,&g_173},{&g_173,&g_173,&g_173},{&g_173,&g_173,&g_173}},{{&g_173,&g_173,&g_173},{&g_173,(void*)0,&g_173},{&g_173,&g_173,&g_173},{&g_173,&g_173,&g_173},{&g_173,&g_173,&g_173},{&g_173,&g_173,&g_173},{&g_173,&g_173,&g_173},{&g_173,&g_173,&g_173},{&g_173,&g_173,&g_173}},{{(void*)0,&g_173,&g_173},{&g_173,(void*)0,&g_173},{&g_173,(void*)0,&g_173},{&g_173,&g_173,&g_173},{(void*)0,&g_173,&g_173},{&g_173,&g_173,&g_173},{(void*)0,&g_173,&g_173},{&g_173,&g_173,&g_173},{&g_173,&g_173,&g_173}},{{&g_173,&g_173,&g_173},{(void*)0,&g_173,&g_173},{&g_173,&g_173,&g_173},{&g_173,&g_173,&g_173},{&g_173,&g_173,&g_173},{&g_173,&g_173,&g_173},{&g_173,&g_173,&g_173},{&g_173,&g_173,&g_173},{&g_173,&g_173,&g_173}},{{&g_173,&g_173,&g_173},{&g_173,&g_173,&g_173},{&g_173,(void*)0,&g_173},{&g_173,(void*)0,&g_173},{&g_173,&g_173,&g_173},{(void*)0,&g_173,&g_173},{&g_173,&g_173,&g_173},{(void*)0,&g_173,&g_173},{&g_173,&g_173,&g_173}},{{&g_173,&g_173,&g_173},{&g_173,&g_173,&g_173},{&g_173,&g_173,&g_173},{(void*)0,&g_173,&g_173},{&g_173,&g_173,&g_173},{&g_173,&g_173,&g_173},{&g_173,&g_173,&g_173},{&g_173,&g_173,&g_173},{&g_173,&g_173,&g_173}}};
                    unsigned char *l_192 = &g_132;
                    int l_194 = 0x9A7503C9L;
                    unsigned char ***l_212[9][3][9] = {{{(void*)0,&l_158,&l_158,&l_158,&l_158,(void*)0,&l_158,&l_158,&l_158},{&l_158,&l_158,&l_158,&l_158,&l_158,&l_158,&l_158,&l_158,&l_158},{(void*)0,&l_158,(void*)0,(void*)0,(void*)0,(void*)0,&l_158,(void*)0,(void*)0}},{{&l_158,&l_158,&l_158,&l_158,&l_158,&l_158,&l_158,&l_158,&l_158},{(void*)0,(void*)0,&l_158,(void*)0,(void*)0,(void*)0,(void*)0,&l_158,(void*)0},{&l_158,&l_158,&l_158,&l_158,&l_158,&l_158,&l_158,&l_158,&l_158}},{{(void*)0,(void*)0,(void*)0,&l_158,(void*)0,(void*)0,(void*)0,(void*)0,&l_158},{&l_158,&l_158,&l_158,&l_158,&l_158,&l_158,&l_158,&l_158,&l_158},{(void*)0,&l_158,&l_158,&l_158,(void*)0,&l_158,&l_158,&l_158,&l_158}},{{&l_158,&l_158,&l_158,&l_158,&l_158,&l_158,&l_158,&l_158,&l_158},{&l_158,(void*)0,(void*)0,(void*)0,(void*)0,&l_158,(void*)0,(void*)0,(void*)0},{&l_158,&l_158,&l_158,&l_158,&l_158,&l_158,&l_158,&l_158,&l_158}},{{&l_158,(void*)0,&l_158,&l_158,&l_158,&l_158,(void*)0,&l_158,&l_158},{&l_158,&l_158,&l_158,&l_158,&l_158,&l_158,&l_158,&l_158,&l_158},{(void*)0,&l_158,(void*)0,&l_158,(void*)0,(void*)0,&l_158,(void*)0,&l_158}},{{&l_158,&l_158,&l_158,&l_158,&l_158,&l_158,&l_158,&l_158,&l_158},{(void*)0,(void*)0,&l_158,(void*)0,&l_158,(void*)0,(void*)0,&l_158,(void*)0},{&l_158,&l_158,&l_158,&l_158,&l_158,&l_158,&l_158,&l_158,&l_158}},{{&l_158,&l_158,&l_158,&l_158,(void*)0,&l_158,(void*)0,(void*)0,&l_158},{&l_158,&l_158,&l_158,&l_158,&l_158,&l_158,&l_158,&l_158,&l_158},{(void*)0,(void*)0,&l_158,&l_158,(void*)0,(void*)0,(void*)0,&l_158,&l_158}},{{&l_158,&l_158,&l_158,&l_158,&l_158,&l_158,&l_158,&l_158,&l_158},{&l_158,(void*)0,&l_158,(void*)0,(void*)0,&l_158,(void*)0,&l_158,(void*)0},{&l_158,&l_158,&l_158,&l_158,&l_158,&l_158,&l_158,&l_158,&l_158}},{{(void*)0,(void*)0,&l_158,(void*)0,(void*)0,(void*)0,(void*)0,&l_158,(void*)0},{&l_158,&l_158,&l_158,&l_158,&l_158,&l_158,&l_158,&l_158,&l_158},{(void*)0,(void*)0,(void*)0,&l_158,(void*)0,(void*)0,(void*)0,(void*)0,&l_158}}};
                    int i, j, k;
lbl_174:
                    p_70 = ((*l_145) = (safe_lshift_func_uint16_t_u_u((g_153[1][1] && ((g_18 == ((((l_166 == &g_63) > ((safe_rshift_func_int8_t_s_s(func_25((*g_62), (0x3880B83BL == (safe_sub_func_uint8_t_u_u(p_69, 0x85L))), (g_173 = p_70), p_71), p_71)) || p_70)) && p_71) || p_71)) & (*g_63))), p_70)));
                    for (p_71 = 2; (p_71 <= 6); p_71 += 1)
                    {
                        unsigned **l_183 = &l_182;
                        char *l_193 = &g_144;
                        int i;
                        if (p_70)
                            goto lbl_174;
                        if (g_132)
                            goto lbl_174;
                        g_77[p_71] = ((safe_mod_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_u(((**l_158) = (safe_mul_func_uint16_t_u_u(((func_25((*g_62), ((*l_159) = (l_181 != ((*l_183) = l_182))), p_71, (l_166 == &g_63)) > (((safe_rshift_func_uint16_t_u_s((safe_add_func_int32_t_s_s((safe_sub_func_uint16_t_u_u(g_153[2][5], (safe_lshift_func_int8_t_s_s(((*l_193) = (((void*)0 != l_192) > 0x66L)), 5)))), g_77[4])), 3)) | g_117) <= g_153[0][3])) || g_77[2]), g_117))), 5)), p_70)) == g_132);
                        (*l_145) = (l_194 = (**g_62));
                    }
                    for (g_173 = 0; (g_173 >= 2); g_173 = safe_add_func_int32_t_s_s(g_173, 3))
                    {
                        int *l_197 = &g_77[4];
                        int ****l_200 = &l_136;
                        g_77[2] = (func_25((l_197 = (void*)0), g_77[2], p_69, p_70) >= ((l_135 = (safe_unary_minus_func_uint32_t_u((((**g_62) || (g_144 || ((((*l_200) = (l_199 = &g_62)) != (l_201 = &g_62)) | g_31))) | p_71)))) ^ p_71));

                        ;
                        l_214 = (safe_sub_func_int32_t_s_s((p_69 == (g_132 > (g_153[2][0] & (+(safe_mul_func_int16_t_s_s((safe_mod_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_s(g_144, 6)) <= g_144), (safe_add_func_uint32_t_u_u(4294967289UL, (g_173 | (l_212[4][0][2] == l_213)))))), g_173)))))), (**g_62)));
                        l_149 = &p_70;

                        ;
                        (*l_145) = 0x97A70E4DL;
                    }

                    ;
                    ;
                    ;
                    ;
                    for (l_80 = 0; (l_80 <= 2); l_80 += 1)
                    {
                        return l_194;
                    }
                }


                ;
                ;
                ;
                ;
            }


            ;
            ;
            ;
            ;
            (*g_62) = &p_70;

            ;
            (**g_62) = p_69;
        }
        else
        {
            char l_217 = 0L;
            short *l_218 = &g_173;
            int ***l_223 = (void*)0;
            int *l_224 = &g_77[1];
            if ((safe_lshift_func_int8_t_s_s(((l_217 = ((*l_145) <= 0L)) > (((*l_218) = p_69) < (p_70 <= g_117))), (g_144 == (safe_mul_func_int16_t_s_s(g_31, (p_71 | 0UL)))))))
            {
                (*g_62) = &p_70;

                ;
            }
            else
            {
                (*g_62) = &p_70;

                ;
            }

            ;
            l_149 = (void*)0;
            if ((0xEF35BE7FL ^ (safe_lshift_func_int16_t_s_s(((*l_218) = ((l_223 == &l_89) >= g_77[6])), 9))))
            {
                l_224 = &p_70;

                ;
                for (l_217 = 0; (l_217 == (-28)); l_217--)
                {
                    int *l_228 = &g_77[6];
                    p_70 = (&l_217 == (void*)0);
                    l_228 = l_227;

                    ;
                }
            }
            else
            {
                char *l_235 = &g_144;
                l_236 = (p_70 < (safe_sub_func_int16_t_s_s(p_70, (((*l_235) = (func_25((*g_62), ((*l_224) | 0x4CAFF854L), (!(0x7445L && ((safe_add_func_int8_t_s_s((((void*)0 == g_233) || ((*l_235) = (((((-6L) < 0x036A4C61L) < g_130) < 0L) == 4294967286UL))), g_77[2])) | p_71))), (**g_62)) > p_70)) >= p_71))));
                (*l_224) = (**g_62);
                for (l_236 = 21; (l_236 <= 38); l_236 = safe_add_func_int16_t_s_s(l_236, 7))
                {
                    (**g_62) = p_69;
                }
            }

            ;
        }

        ;
        ;
        ;
        ;
    }



    ;
    ;
    return p_70;


}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_18, "g_18", print_hash_value);
    transparent_crc(g_31, "g_31", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_77[i], "g_77[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_117, "g_117", print_hash_value);
    transparent_crc(g_130, "g_130", print_hash_value);
    transparent_crc(g_132, "g_132", print_hash_value);
    transparent_crc(g_144, "g_144", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(g_153[i][j], "g_153[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_173, "g_173", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_391[i], "g_391[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_398, "g_398", print_hash_value);
    transparent_crc(g_458, "g_458", print_hash_value);
    transparent_crc(g_469, "g_469", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_478[i][j][k], "g_478[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_494, "g_494", print_hash_value);
    transparent_crc(g_581, "g_581", print_hash_value);
    transparent_crc(g_670, "g_670", print_hash_value);
    transparent_crc(g_674, "g_674", print_hash_value);
    transparent_crc(g_708, "g_708", print_hash_value);
    transparent_crc(g_765, "g_765", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_847[i][j][k], "g_847[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_900[i], "g_900[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_901, "g_901", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_1005[i][j][k], "g_1005[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_1174, "g_1174", print_hash_value);
    transparent_crc(g_1178, "g_1178", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
