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



static int g_4 = (-7L);
static int g_8[4][3] = {{0L,0L,0L},{0L,0L,0L},{0L,0L,0L},{0L,0L,0L}};
static short g_18 = 0x8D96L;
static int g_28 = 0xBF0A0CD9L;
static int g_84 = (-8L);
static int g_92 = 0L;
static unsigned g_106 = 0UL;
static unsigned short g_150 = 0x72FDL;
static unsigned g_200[2][6] = {{1UL,1UL,1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL,1UL,1UL}};
static int g_227 = 0L;
static unsigned g_229 = 1UL;
static short g_231 = (-1L);
static short g_263 = 0x7784L;
static int g_269 = 0x73CE92AEL;
static unsigned g_304 = 7UL;
static int g_316 = 0L;
static int g_336 = 0xE60BA30CL;
static unsigned g_352[6][2][2] = {{{0xC7877F76L,0xC7877F76L},{0xC7877F76L,0xC7877F76L}},{{0xC7877F76L,0xC7877F76L},{0xC7877F76L,0xC7877F76L}},{{0xC7877F76L,0xC7877F76L},{0xC7877F76L,0xC7877F76L}},{{0xC7877F76L,0xC7877F76L},{0xC7877F76L,0xC7877F76L}},{{0xC7877F76L,0xC7877F76L},{0xC7877F76L,0xC7877F76L}},{{0xC7877F76L,0xC7877F76L},{0xC7877F76L,0xC7877F76L}}};
static int g_391 = 1L;
static int g_426 = 0xF79BD083L;
static char g_427 = 0xE1L;
static char g_604[6] = {0x22L,0x22L,0x22L,0x22L,0x22L,0x22L};
static unsigned g_636 = 0xD8E6DC0EL;
static unsigned short g_723 = 0x7994L;
static unsigned g_760 = 4294967293UL;
static int g_821 = 0x2D7906EFL;
static int g_841 = 0xBD3F069AL;
static unsigned char g_910[10] = {0xDAL,0xDAL,0xDAL,0xDAL,0xDAL,0xDAL,0xDAL,0xDAL,0xDAL,0xDAL};
static int g_958 = (-10L);
static char g_970 = 0x2AL;
static int g_1058 = 0x5E54EA6BL;
static char g_1211 = 3L;
static short g_1410 = (-1L);
static int g_1508[7] = {9L,9L,9L,9L,9L,9L,9L};
static int g_1510 = 3L;
static const unsigned short g_1717 = 0xC9E5L;
static int g_1844 = 0x585FCCC5L;
static unsigned g_1845[9][3][3] = {{{0xEF8FD7B6L,0xEF8FD7B6L,0xAEE06732L},{0xEF8FD7B6L,0x0EFE47BAL,1UL},{0x46CE0925L,0x0223F47CL,4294967289UL}},{{1UL,0x600DFE3EL,0x46CE0925L},{4UL,0x46CE0925L,4294967289UL},{0x99384E5BL,1UL,1UL}},{{0xAEE06732L,0UL,0xAEE06732L},{0x96FBE069L,0UL,0x912AE914L},{0x912AE914L,1UL,0x600DFE3EL}},{{0UL,0x46CE0925L,0xEF8FD7B6L},{0x990ED8D8L,0x600DFE3EL,1UL},{0UL,0x0223F47CL,0xFC023182L}},{{0x912AE914L,0x0EFE47BAL,0x0EFE47BAL},{0x96FBE069L,0xEF8FD7B6L,0x0EFE47BAL},{0xAEE06732L,0x990ED8D8L,0xFC023182L}},{{0x99384E5BL,0xAEE06732L,1UL},{4UL,0x39429CB3L,0xEF8FD7B6L},{1UL,0xAEE06732L,0x600DFE3EL}},{{0x46CE0925L,0x990ED8D8L,0x912AE914L},{0xEF8FD7B6L,0xEF8FD7B6L,0xAEE06732L},{0xEF8FD7B6L,0x0EFE47BAL,1UL}},{{0x46CE0925L,0x0223F47CL,4294967289UL},{1UL,0x600DFE3EL,0x46CE0925L},{4UL,0xAEE06732L,4UL}},{{0x39429CB3L,0x0EFE47BAL,0UL},{0x99384E5BL,4294967295UL,0x99384E5BL},{1UL,4294967295UL,0x600DFE3EL}}};



static unsigned char func_1(void);
static unsigned char func_5(unsigned char p_6, int p_7);
static short func_11(unsigned char p_12, const short p_13, unsigned p_14);
static unsigned char func_19(int p_20, unsigned short p_21);
static unsigned char func_22(unsigned p_23, int p_24, char p_25, short p_26);
static int func_30(short p_31, unsigned short p_32, unsigned short p_33, short p_34, unsigned char p_35);
static unsigned short func_36(unsigned p_37, unsigned char p_38, int p_39, unsigned short p_40);
static char func_41(unsigned p_42);
static const unsigned char func_52(unsigned p_53, unsigned p_54, unsigned p_55, short p_56, unsigned p_57);
static int func_73(const unsigned char p_74);
static unsigned char func_1(void)
{
    short l_15 = (-10L);
    int l_27 = 0x177CCE45L;
    int l_1709 = 0xC70E776BL;
    unsigned l_1913 = 0UL;
    l_1709 = ((safe_mul_func_uint16_t_u_u(((g_4 = 5UL) & ((0UL >= func_5(g_8[2][1], (((g_910[0] = (safe_lshift_func_uint16_t_u_s((func_11((((l_15 <= (safe_lshift_func_int16_t_s_u(l_15, (g_18 = g_8[2][1])))) && func_19((func_22((l_27 = l_15), l_15, (g_28 = l_15), g_18) <= 0x7EL), g_8[0][0])) || l_15), g_8[2][1], l_15) || g_821), 13))) <= 0x4CL) <= g_8[0][2]))) != 0x6596A452L)), 0x49A6L)) | 1L);
    for (g_958 = 17; (g_958 >= 29); g_958++)
    {
        unsigned l_1714 = 0UL;
        int l_1769 = (-1L);
        const char l_1811 = (-1L);
        int l_1812 = (-5L);
        if (l_15)
            break;
        if ((safe_mul_func_int8_t_s_s((l_1714 != (safe_mod_func_uint32_t_u_u(1UL, g_1717))), (safe_sub_func_uint32_t_u_u((safe_add_func_int16_t_s_s((safe_sub_func_int8_t_s_s((g_28 || 0xA686A692L), g_92)), (+l_1709))), (!(safe_add_func_int8_t_s_s(g_426, ((safe_div_func_int8_t_s_s((safe_div_func_uint8_t_u_u(g_28, l_15)), 0xA3L)) >= 65530UL)))))))))
        {
            char l_1736 = (-1L);
            char l_1790 = 0x84L;
            int l_1804[6];
            unsigned l_1815[5];
            char l_1902 = 0xDCL;
            int i;
            for (i = 0; i < 6; i++)
                l_1804[i] = (-1L);
            for (i = 0; i < 5; i++)
                l_1815[i] = 0x9D162694L;
            if ((safe_rshift_func_uint16_t_u_u(4UL, (safe_rshift_func_uint16_t_u_s((safe_sub_func_int32_t_s_s(((((l_1714 > 0x8DB5L) | l_1736) != 0x4062L) | l_1736), (safe_sub_func_uint8_t_u_u(((safe_rshift_func_uint8_t_u_u(((safe_sub_func_int32_t_s_s(((g_231 = 0x2EADL) ^ (safe_mod_func_uint8_t_u_u((safe_add_func_int16_t_s_s(l_1736, (safe_add_func_int32_t_s_s((safe_lshift_func_int16_t_s_s(g_1508[2], l_1714)), g_8[0][2])))), g_200[0][1]))), 1UL)) > g_958), 3)) != g_8[2][0]), g_426)))), 11)))))
            {
                unsigned char l_1768 = 0xA3L;
                int l_1826[6] = {0x795DD2AAL,(-1L),(-1L),0x795DD2AAL,(-1L),(-1L)};
                int l_1827[6][7] = {{6L,0L,(-5L),0x39AD2AE5L,(-4L),(-5L),0xCC358B35L},{(-4L),0xCC358B35L,(-1L),(-1L),0xCC358B35L,(-4L),0L},{6L,0x39AD2AE5L,0x029FE7ADL,6L,0xCC358B35L,0x73C66E4CL,0x39AD2AE5L},{(-9L),0L,(-4L),1L,(-4L),0L,(-9L)},{0L,0x39AD2AE5L,(-1L),(-4L),(-9L),0L,(-4L)},{6L,0xCC358B35L,0x73C66E4CL,0x39AD2AE5L,0x39AD2AE5L,0x73C66E4CL,0xCC358B35L}};
                int i, j;
                for (g_263 = 21; (g_263 > (-30)); g_263--)
                {
                    char l_1767[10][3][2] = {{{(-10L),(-10L)},{0x7AL,0x75L},{0xAEL,1L}},{{0L,0x15L},{0x17L,0L},{0xB0L,0x60L}},{{0xB0L,0L},{0x17L,0x15L},{0L,1L}},{{0xAEL,0x75L},{0x7AL,(-10L)},{(-10L),0x17L}},{{(-9L),0x17L},{(-10L),(-10L)},{0x7AL,0x75L}},{{0xAEL,1L},{0L,0x15L},{0x17L,0L}},{{0xB0L,0xAEL},{0x7AL,0xB0L},{0x15L,(-9L)}},{{0xB0L,0x75L},{0L,0x17L},{1L,0xB0L}},{{0xB0L,0x15L},{0xFFL,0x15L},{0xB0L,0xB0L}},{{1L,0x17L},{0L,0x75L},{0xB0L,(-9L)}}};
                    int l_1814 = (-4L);
                    int i, j, k;
                    g_8[0][0] = ((safe_mod_func_uint32_t_u_u((l_27 <= ((+((safe_add_func_uint32_t_u_u(g_760, (safe_div_func_uint16_t_u_u((g_150 = (0xB7E7L || (safe_mod_func_int8_t_s_s((safe_div_func_uint32_t_u_u((safe_sub_func_uint16_t_u_u((g_723 = g_841), (((safe_sub_func_uint8_t_u_u(func_11((g_910[3] = g_352[3][0][0]), (l_1767[8][2][0] = (!g_604[5])), (((g_231 = (((l_1714 >= ((func_11(g_760, l_1709, g_636) >= l_1714) < g_336)) > g_1211) < g_269)) < 0x9B01L) & l_1714)), l_1714)) != g_1058) >= g_1508[3]))), 1L)), g_84)))), g_841)))) <= 65535UL)) > l_1768)), g_84)) && l_1709);
                    if (((func_30(l_1769, (safe_mod_func_int16_t_s_s(((l_1736 < g_391) && (g_150 = (safe_rshift_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s(l_1714, g_106)), (safe_rshift_func_int16_t_s_s((safe_add_func_int16_t_s_s((safe_lshift_func_int16_t_s_u((g_263 && (safe_lshift_func_int8_t_s_u(((safe_add_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s(func_11(l_1768, g_200[1][3], l_1790), 5)), 0x9B87L)) <= l_1768), g_352[5][0][1]))), 9)), g_229)), 0)))), 4)))), 0x6960L)), g_231, l_1709, l_1714) | l_1769) >= l_15))
                    {
                        unsigned l_1813 = 0xA96C80C3L;
                        g_426 = (safe_mod_func_uint8_t_u_u((safe_unary_minus_func_uint16_t_u((safe_div_func_uint16_t_u_u((safe_mul_func_int8_t_s_s(((g_92 = ((safe_div_func_uint8_t_u_u((g_910[5] = ((safe_add_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_s(g_352[0][0][0], (g_150 >= g_269))) < ((l_1804[3] = l_1768) && (((g_8[2][1] == (0xA30F76A4L > g_304)) & ((safe_mul_func_int8_t_s_s((func_11(((safe_sub_func_uint8_t_u_u((g_910[5] = (0xB168CBCBL > (safe_lshift_func_int8_t_s_u(func_30(l_1769, g_106, l_1709, l_1769, g_426), l_1736)))), 0xA8L)) | g_1211), l_1811, g_427) && g_1508[2]), g_760)) > 8UL)) & l_1768))), 0x3604L)) < l_1769)), (-1L))) <= 65526UL)) < l_1812), 0x16L)), 0xF0F4L)))), l_1769));
                        l_1814 = l_1813;
                        if (l_1812)
                            break;
                    }
                    else
                    {
                        return l_1768;
                    }
                    l_1827[4][6] = (func_30(g_231, l_1767[6][1][1], l_1815[2], g_4, func_11(((safe_rshift_func_uint8_t_u_u((safe_add_func_uint32_t_u_u((safe_mod_func_int32_t_s_s(((((g_18 = (0UL & l_1790)) != 65533UL) >= (safe_sub_func_int8_t_s_s(((l_1804[3] = g_1508[1]) && (safe_div_func_uint32_t_u_u((l_1826[4] = l_1804[3]), l_1709))), 255UL))) > l_1736), g_958)), g_200[0][1])), g_231)) > 0x2CC7L), l_1709, g_1510)) | l_1767[9][0][0]);
                    g_8[1][1] = l_15;
                }
                l_1709 = (g_391 | (-3L));
            }
            else
            {
                unsigned short l_1840 = 9UL;
                int l_1846 = 0xF6FE2AAAL;
                int l_1873 = 0xFCF6436BL;
                if (l_1812)
                {
                    unsigned l_1853 = 0x12E13EDAL;
                    int l_1856 = 0x97C89C00L;
                    if ((safe_rshift_func_int16_t_s_s(l_1714, g_821)))
                    {
                        return l_1769;
                    }
                    else
                    {
                        unsigned l_1837 = 0xC454C2A0L;
                        g_8[1][1] = g_636;
                        g_92 = (l_1736 || (safe_unary_minus_func_uint8_t_u(((safe_mul_func_int16_t_s_s(((safe_div_func_int8_t_s_s(0x81L, ((!g_227) ^ 0xC5L))) ^ (safe_sub_func_uint32_t_u_u((g_636 = func_11((l_1837 = (g_1410 ^ g_200[0][5])), (safe_mod_func_int16_t_s_s(func_11(g_821, l_1812, g_1410), l_1840)), g_970)), 1UL))), 0xD7DCL)) <= g_723))));
                    }
                    for (l_1709 = (-19); (l_1709 >= (-19)); l_1709 = safe_add_func_uint32_t_u_u(l_1709, 7))
                    {
                        g_391 = ((safe_unary_minus_func_int16_t_s((g_1844 ^ g_604[1]))) != (g_1845[5][2][0] & (~l_1815[2])));
                        if (l_1804[3])
                            continue;
                        l_1846 = g_304;
                    }
                    for (l_1736 = 0; (l_1736 == (-3)); l_1736 = safe_sub_func_uint16_t_u_u(l_1736, 7))
                    {
                        short l_1857 = (-1L);
                        g_391 = (g_426 = (l_1840 > 2UL));
                        l_1857 = (safe_div_func_uint16_t_u_u(func_36((((g_1058 && (l_1709 = ((safe_div_func_int32_t_s_s(g_84, func_30(l_1853, ((l_1769 = (g_910[3] = (func_11(g_910[3], (((g_92 = g_18) < ((g_231 = 0x565AL) != 0UL)) != (((safe_sub_func_int8_t_s_s((!g_150), (g_1508[0] > g_229))) != g_427) != g_1508[2])), g_200[0][1]) && g_4))) || 1UL), l_1709, l_1856, g_336))) <= g_1844))) > g_958) < (-1L)), g_336, g_821, g_427), 0xABDBL));
                    }
                    l_1804[4] = ((func_73(g_426) || (safe_sub_func_uint8_t_u_u((safe_mul_func_int16_t_s_s((l_1812 > (safe_add_func_uint32_t_u_u((~(((safe_rshift_func_int8_t_s_s(g_106, (g_1211 = (safe_sub_func_uint16_t_u_u(0UL, ((((g_1508[1] ^ (g_150 = (func_11(g_910[6], (l_1709 <= (safe_unary_minus_func_int32_t_s(((g_970 = l_27) <= 0L)))), g_352[2][1][0]) != g_841))) ^ l_1804[3]) | 0xE6C5L) <= 0x5E8AL)))))) != 0xD0L) != 0x6E96L)), l_15))), g_760)), 0xFEL))) != l_1846);
                }
                else
                {
                    unsigned short l_1874 = 0xF6E9L;
                    int l_1896 = 1L;
                    int l_1897 = 0x90C75656L;
                    g_391 = (l_1874 = (safe_lshift_func_uint8_t_u_u(((~l_15) | l_1846), (l_1873 = l_27))));
                    if ((safe_unary_minus_func_uint8_t_u((g_910[3] = (l_1874 && (safe_mod_func_uint8_t_u_u(l_1840, (l_1804[1] = l_27))))))))
                    {
                        g_336 = (g_8[0][2] = (safe_rshift_func_uint16_t_u_s(65535UL, 14)));
                    }
                    else
                    {
                        unsigned char l_1898 = 0UL;
                        int l_1899 = 0xA6A5DF4CL;
                        l_1899 = ((((safe_add_func_uint8_t_u_u((0x7CL | (l_1897 = (((safe_sub_func_uint16_t_u_u(((safe_mod_func_uint8_t_u_u((l_1873 = (g_391 != (safe_rshift_func_int8_t_s_u(0x88L, 5)))), l_1815[4])) == (0xB7F32B43L >= (safe_sub_func_uint32_t_u_u(((safe_lshift_func_int8_t_s_s((safe_mod_func_int16_t_s_s(l_1896, l_1846)), 2)) <= l_1714), g_1844)))), l_1874)) & l_27) ^ l_1812))), l_1898)) ^ 0L) || g_316) >= 0L);
                        if (g_958)
                            break;
                    }
                    l_1769 = (0x1BD9CBC2L | (g_636 = l_1874));
                }
                l_1804[0] = g_723;
                g_391 = (1L >= (l_1902 ^ (l_1714 < (safe_add_func_uint8_t_u_u((safe_div_func_uint8_t_u_u(((-1L) >= l_1790), (safe_rshift_func_uint16_t_u_s(g_958, g_336)))), (safe_lshift_func_int8_t_s_u((safe_lshift_func_int8_t_s_s((((g_970 != func_11(g_391, l_1812, l_1769)) || l_1846) < l_1840), 2)), l_1769)))))));
            }
            l_1709 = l_1913;
        }
        else
        {
            g_426 = 0x917DCE34L;
        }
    }
    for (g_4 = (-20); (g_4 > 11); g_4 = safe_add_func_int8_t_s_s(g_4, 6))
    {
        unsigned char l_1916 = 0xD2L;
        l_1709 = (g_1717 != (l_1916 = ((g_200[0][1] <= l_1913) > l_1709)));
    }
    return l_15;
}







static unsigned char func_5(unsigned char p_6, int p_7)
{
    int l_1280[10][10][2] = {{{0L,0xF60F93C0L},{0x89A7D8A7L,0L},{(-8L),(-6L)},{(-1L),0xAAA980C8L},{0xD9335D50L,0x8766E173L},{0L,0xBAF85F15L},{(-6L),0L},{(-8L),3L},{0xDB52E7E8L,(-4L)},{0x60F32606L,0xF506548EL}},{{(-1L),0xF506548EL},{0x60F32606L,(-4L)},{0xDB52E7E8L,3L},{(-8L),0L},{(-6L),0xBAF85F15L},{0L,0x8766E173L},{0xD9335D50L,0xAAA980C8L},{(-1L),(-6L)},{(-8L),0L},{0x89A7D8A7L,0xF60F93C0L}},{{0L,0xF506548EL},{0xC4F72BB8L,(-1L)},{(-6L),0x31CD2340L},{0xDB52E7E8L,0L},{0x190C2C22L,3L},{0x953CCF7AL,0xBAF85F15L},{0xD9335D50L,0x79E012FDL},{0L,(-8L)},{(-1L),0L},{0x190C2C22L,(-1L)}},{{0x4353B53BL,0xF60F93C0L},{0x60F32606L,(-1L)},{(-10L),(-10L)},{(-6L),(-4L)},{0x89A7D8A7L,(-1L)},{0xAAA980C8L,3L},{0xF60F93C0L,1L},{0xC4F72BB8L,(-6L)},{0xC4F72BB8L,1L},{0xF60F93C0L,0xAAA980C8L}},{{1L,0L},{3L,0x739E37C7L},{0x190C2C22L,0x3F62817CL},{0x3F62817CL,0x51522B66L},{0xBAF85F15L,0L},{0x37848966L,0L},{(-1L),8L},{0xFDD7BD34L,0xDC00EDB3L},{0xC4F72BB8L,0x1BB2565DL},{0xF506548EL,0L}},{{(-1L),0xAAA980C8L},{(-1L),0L},{0x60F32606L,8L},{0x190C2C22L,0x51522B66L},{0x8766E173L,0x79E012FDL},{8L,0L},{3L,0L},{0xDC00EDB3L,0x190C2C22L},{0xFDD7BD34L,1L},{0xF506548EL,0x953CCF7AL}},{{0x6169BFDCL,0L},{0xF60F93C0L,8L},{0xDC00EDB3L,0xD9335D50L},{0x60F32606L,0x739E37C7L},{0xBAF85F15L,0x79E012FDL},{0x51522B66L,0x79E012FDL},{0xBAF85F15L,0x739E37C7L},{0x60F32606L,0xD9335D50L},{0xDC00EDB3L,8L},{0xF60F93C0L,0L}},{{0x6169BFDCL,0x953CCF7AL},{0xF506548EL,1L},{0xFDD7BD34L,0x190C2C22L},{0xDC00EDB3L,0L},{3L,0L},{8L,0x79E012FDL},{0x8766E173L,0x51522B66L},{0x190C2C22L,8L},{0x60F32606L,0L},{(-1L),0xAAA980C8L}},{{(-1L),0L},{0xF506548EL,0x1BB2565DL},{0xC4F72BB8L,0xDC00EDB3L},{0xFDD7BD34L,0xC4F72BB8L},{0x51522B66L,(-1L)},{0xD9335D50L,(-6L)},{0x6169BFDCL,8L},{0L,0L},{(-1L),0x60F32606L},{0L,(-1L)}},{{0x3F62817CL,(-10L)},{0L,0x3F62817CL},{(-4L),0x9A392AA2L},{(-4L),0x3F62817CL},{0L,(-10L)},{0x3F62817CL,(-1L)},{0L,0x60F32606L},{(-1L),0L},{0L,8L},{0x6169BFDCL,(-6L)}}};
    int l_1281 = (-1L);
    short l_1290[10] = {0x2D8DL,0xF1BAL,0x289AL,0x289AL,0xF1BAL,0x2D8DL,0xF1BAL,0x289AL,0x289AL,0xF1BAL};
    int l_1303 = (-1L);
    int l_1304 = (-3L);
    unsigned l_1305 = 4294967288UL;
    unsigned l_1314 = 1UL;
    short l_1535 = 0xBA9DL;
    int l_1538 = 0xDE80284AL;
    unsigned short l_1630 = 0x16FEL;
    unsigned l_1707 = 0x67E4BB05L;
    int i, j, k;
    l_1280[9][7][0] = p_6;
    l_1281 = 1L;
    if ((g_391 = ((safe_add_func_uint32_t_u_u(func_11((safe_div_func_int8_t_s_s((0x5871487AL >= (safe_sub_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u(l_1290[3], (safe_div_func_int8_t_s_s((g_604[5] = l_1280[9][8][1]), l_1281)))), ((safe_sub_func_uint16_t_u_u(((0xF125DF1EL ^ (safe_add_func_int8_t_s_s(p_7, ((safe_div_func_uint16_t_u_u((p_6 | (l_1304 = (safe_mul_func_int8_t_s_s(p_6, ((safe_mul_func_uint8_t_u_u((l_1303 = l_1280[2][6][0]), l_1290[3])) >= 0x3FL))))), 0xA682L)) < 0x2D61L)))) | p_7), 0xA5EDL)) < (-9L))))), 3L)), p_7, l_1305), (-1L))) > 0x84ECL)))
    {
        int l_1317[5] = {(-1L),(-1L),(-1L),(-1L),(-1L)};
        int l_1328 = 0L;
        int l_1344 = 6L;
        unsigned char l_1458 = 0UL;
        int l_1652 = 0xA6AA0822L;
        int i;
        if (func_11((p_6 = g_723), (l_1314 = (((safe_mul_func_int16_t_s_s(1L, ((0xF1E2L == g_958) < g_958))) | (((func_73(g_352[5][0][1]) < (safe_rshift_func_int8_t_s_u(5L, 5))) <= ((safe_rshift_func_uint8_t_u_u((safe_add_func_int8_t_s_s(p_7, p_7)), p_7)) || 254UL)) <= g_352[1][0][1])) <= p_7)), g_1211))
        {
            unsigned char l_1326 = 0xBCL;
            int l_1374 = (-1L);
            unsigned l_1436 = 1UL;
            int l_1440[1][1][1];
            int i, j, k;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 1; j++)
                {
                    for (k = 0; k < 1; k++)
                        l_1440[i][j][k] = 8L;
                }
            }
            g_336 = (-9L);
            if (g_636)
            {
                return g_958;
            }
            else
            {
                char l_1327 = (-7L);
                int l_1334 = 0xED7E1CE9L;
                int l_1352 = 0xEB567C63L;
                short l_1353 = (-5L);
                const short l_1393[6][1][1] = {{{0xA266L}},{{0xA266L}},{{0xE35AL}},{{0xA266L}},{{0xA266L}},{{0xE35AL}}};
                int i, j, k;
                if ((safe_mul_func_uint8_t_u_u(l_1317[1], ((safe_sub_func_int16_t_s_s(g_910[3], p_6)) >= (l_1328 = ((safe_lshift_func_int16_t_s_s((l_1303 = (func_52((((g_352[5][0][1] > p_7) <= g_426) != 2L), ((-8L) || (safe_lshift_func_int8_t_s_s((safe_lshift_func_int16_t_s_u(func_73((0x48L >= l_1290[3])), 1)), p_6))), l_1326, l_1327, g_604[0]) || 0x66L)), l_1326)) && p_6))))))
                {
                    short l_1339 = 0xB43DL;
                    unsigned l_1340 = 1UL;
                    int l_1341 = 0x39DAF714L;
                    int l_1392 = 0x8C21510EL;
                    for (g_821 = 0; g_821 < 5; g_821 += 1)
                    {
                        l_1317[g_821] = 1L;
                    }
                    if ((p_7 < (safe_lshift_func_int16_t_s_s(((((safe_mul_func_int16_t_s_s(((l_1304 = ((safe_unary_minus_func_int16_t_s(p_6)) != (l_1341 = (l_1334 >= ((l_1326 >= (func_73(g_200[0][1]) || (safe_div_func_uint32_t_u_u(func_36((func_11(g_958, (l_1339 = (safe_rshift_func_int16_t_s_u(((+g_269) > 0x9C12E648L), 0))), l_1340) == 255UL), g_760, l_1303, p_6), (-9L))))) != g_821))))) != p_6), g_8[2][1])) == p_6) && 0x7DL) | 255UL), p_6))))
                    {
                        char l_1351 = 0xBCL;
                        unsigned char l_1375 = 0xB0L;
                        int l_1376 = 0L;
                        l_1328 = (l_1341 = ((safe_add_func_int8_t_s_s(g_304, (func_30(l_1326, l_1344, (l_1317[1] = g_427), (l_1352 = ((l_1351 = (safe_lshift_func_int16_t_s_s((safe_mul_func_int16_t_s_s(1L, (((safe_sub_func_int32_t_s_s((g_636 == (p_6 != p_7)), p_7)) == g_427) & g_92))), 7))) & p_6)), l_1353) <= p_7))) <= 4UL));
                        l_1376 = func_41((g_200[0][1] = (l_1317[1] || (safe_sub_func_uint32_t_u_u((safe_lshift_func_int16_t_s_s((safe_mul_func_int16_t_s_s(g_841, (safe_add_func_uint16_t_u_u((safe_mul_func_int8_t_s_s(func_73(g_8[3][2]), g_910[3])), (safe_mod_func_uint32_t_u_u(0x78B22ED0L, ((((safe_mod_func_int8_t_s_s((0x84L & ((((l_1374 = (safe_lshift_func_uint16_t_u_u((safe_div_func_uint32_t_u_u(p_7, (g_760 = ((g_352[3][1][1] = (safe_add_func_int32_t_s_s(g_970, 0x52079D90L))) & 1L)))), 13))) <= p_6) <= 0xF342827BL) && 1UL)), l_1375)) >= 0x02L) && g_352[5][0][1]) ^ g_821))))))), p_7)), (-1L))))));
                        l_1303 = func_36(p_7, g_1211, func_52((((l_1376 = func_11(g_391, (l_1374 = g_200[0][1]), (p_6 || p_6))) <= 0xF96B6391L) == g_106), l_1281, l_1314, l_1326, g_821), p_7);
                    }
                    else
                    {
                        unsigned char l_1377 = 0xD3L;
                        l_1352 = (l_1377 = l_1290[0]);
                        return l_1326;
                    }
                    if ((safe_lshift_func_int16_t_s_s((g_18 = g_263), ((p_6 = (l_1352 = 0x14L)) | (safe_div_func_uint32_t_u_u((safe_add_func_uint32_t_u_u((func_11((safe_rshift_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u(g_910[3], (~(p_7 != (safe_rshift_func_int8_t_s_u(((l_1317[1] <= 0x591ED229L) || ((-9L) && (l_1392 = (l_1341 = ((safe_rshift_func_int8_t_s_u((func_11((g_841 && (l_1334 && (-1L))), g_106, g_106) || p_7), 0)) < 0x75F5863EL))))), 5)))))), p_7)), l_1393[1][0][0], g_200[0][5]) & g_269), 6L)), l_1328))))))
                    {
                        unsigned char l_1404[2];
                        int l_1409[1][1];
                        int i, j;
                        for (i = 0; i < 2; i++)
                            l_1404[i] = 255UL;
                        for (i = 0; i < 1; i++)
                        {
                            for (j = 0; j < 1; j++)
                                l_1409[i][j] = 0x501A7468L;
                        }
                        l_1304 = ((safe_rshift_func_int8_t_s_u((safe_mul_func_uint16_t_u_u(g_304, g_604[5])), 6)) <= (safe_mod_func_int16_t_s_s((p_6 <= (p_7 < l_1290[8])), (safe_sub_func_uint32_t_u_u(l_1392, (safe_rshift_func_uint8_t_u_s((l_1404[0] > ((safe_lshift_func_uint16_t_u_u(func_11(p_7, (l_1344 < p_7), g_723), 6)) < 0L)), p_7)))))));
                        l_1374 = 0xE9ED950DL;
                        l_1409[0][0] = (safe_rshift_func_int8_t_s_s(l_1404[0], 5));
                        l_1352 = (0x9251L != (g_1410 = (-9L)));
                    }
                    else
                    {
                        g_8[2][1] = (!func_19((safe_lshift_func_int8_t_s_u(l_1374, (safe_unary_minus_func_int16_t_s(((g_150 = 1UL) | g_352[0][1][0]))))), (safe_lshift_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u((g_316 & g_841), (func_11(g_8[2][1], (func_11((safe_mul_func_int8_t_s_s(func_11((l_1317[1] = (((p_6 <= g_821) ^ (safe_unary_minus_func_uint8_t_u((safe_sub_func_uint32_t_u_u((safe_sub_func_int32_t_s_s(0x709FFEEAL, 0x0559BBF0L)), g_336))))) >= 0xFBF8L)), g_28, l_1341), 6L)), p_6, g_723) || g_200[0][1]), g_316) & 0x0CCB9167L))), 8))));
                        g_8[0][0] = ((((l_1328 = g_8[0][1]) ^ (safe_rshift_func_int16_t_s_u((-1L), l_1317[1]))) || (l_1374 = ((safe_mod_func_int16_t_s_s((l_1326 | p_6), 0x3B9CL)) > (g_336 == (safe_mul_func_uint8_t_u_u((((l_1281 = (safe_div_func_int16_t_s_s((g_18 = p_7), (safe_mod_func_int32_t_s_s((+l_1339), 0x24439438L))))) < g_636) < 1UL), 6L)))))) || g_427);
                        l_1374 = l_1340;
                    }
                }
                else
                {
                    short l_1435 = 1L;
                    int l_1461 = 0xF933B380L;
                    if ((l_1435 & g_92))
                    {
                        unsigned char l_1455[8][6] = {{0xF0L,7UL,6UL,0xE6L,0xE6L,6UL},{0xE6L,0xE6L,6UL,7UL,0xF0L,6UL},{7UL,0xF0L,6UL,0xF0L,7UL,6UL},{0xF0L,7UL,6UL,0xE6L,0xE6L,6UL},{0xE6L,0xE6L,6UL,7UL,0xF0L,6UL},{7UL,0xF0L,6UL,0xF0L,7UL,6UL},{0xF0L,7UL,6UL,0xE6L,0xE6L,6UL},{0xF0L,0xF0L,0UL,0xE6L,7UL,0UL}};
                        int i, j;
                        g_8[2][0] = 1L;
                        g_8[2][1] = (func_22(g_229, l_1436, (g_1211 = (~(g_604[4] = g_200[1][0]))), (l_1440[0][0][0] = (l_1352 = func_30((g_8[2][1] == l_1317[1]), (l_1374 = 0x2841L), (safe_unary_minus_func_int16_t_s((l_1304 = ((func_30((safe_div_func_uint16_t_u_u((func_30(l_1393[1][0][0], g_200[0][1], func_30(l_1303, g_958, p_7, l_1436, l_1304), g_336, p_7) <= 0x96A1L), g_1410)), l_1327, g_92, p_6, p_6) && g_150) | 0x4D41L)))), g_316, l_1280[2][9][0])))) > g_1058);
                        l_1461 = (safe_mod_func_int8_t_s_s((safe_lshift_func_int8_t_s_s((safe_mul_func_uint8_t_u_u(func_52(g_604[5], l_1317[1], (safe_rshift_func_int16_t_s_u(((safe_lshift_func_uint16_t_u_s(((g_426 && p_7) < (((safe_rshift_func_int16_t_s_u(l_1455[7][3], (safe_add_func_uint32_t_u_u(l_1458, (((((l_1374 <= p_7) > (p_6 >= l_1435)) == l_1317[3]) || p_7) | g_316))))) ^ p_6) < g_760)), 7)) || g_336), 4)), g_970, l_1317[1]), g_910[3])), g_910[3])), 0xCFL));
                    }
                    else
                    {
                        g_391 = func_11(g_28, (((!(safe_div_func_int8_t_s_s(func_73(g_841), g_352[4][0][1]))) != 246UL) & (l_1461 | (p_7 || 0L))), (g_636 || g_427));
                    }
                }
                g_391 = (safe_div_func_int16_t_s_s(p_6, p_7));
                g_958 = 6L;
            }
            return g_150;
        }
        else
        {
            unsigned l_1470 = 9UL;
            unsigned l_1524 = 0x25DA3D9CL;
            int l_1525[8][7] = {{0xFA4D4872L,0x56665AB7L,0L,(-1L),(-2L),1L,(-1L)},{0x32B9BF0CL,0xB400B673L,0x1EA8ABA1L,(-1L),0xFA4D4872L,1L,1L},{0x1EA8ABA1L,0x8357FB59L,0L,0x8357FB59L,0x1EA8ABA1L,0x97291B8EL,(-3L)},{(-3L),0x8357FB59L,0L,0x56665AB7L,(-1L),(-1L),0xFA4D4872L},{0x8357FB59L,0xB400B673L,(-1L),1L,0L,0L,1L},{(-3L),0x56665AB7L,(-3L),0L,1L,0xB400B673L,1L},{0x1EA8ABA1L,2L,(-1L),0x97291B8EL,1L,(-3L),0xFA4D4872L},{0x32B9BF0CL,(-3L),0xB400B673L,2L,2L,0xB400B673L,(-3L)}};
            int i, j;
            for (g_1211 = (-12); (g_1211 >= (-9)); g_1211++)
            {
                const int l_1490 = 5L;
                const unsigned char l_1511 = 255UL;
                int l_1512 = 0L;
                unsigned l_1513 = 0x65811816L;
                l_1303 = (safe_sub_func_uint16_t_u_u(l_1470, ((-7L) && ((safe_sub_func_uint32_t_u_u(((safe_mul_func_int16_t_s_s(((p_6 < l_1303) >= (safe_add_func_uint8_t_u_u((func_52(p_6, p_6, (l_1304 = (+(safe_mul_func_uint16_t_u_u(65532UL, (func_41(g_200[0][1]) || 0x1EL))))), g_8[0][0], p_6) <= p_7), 0x24L))), 1UL)) <= p_6), g_958)) | 3UL))));
                for (g_723 = 0; (g_723 <= 1); g_723 += 1)
                {
                    const int l_1499 = 0x2E8A9540L;
                    int l_1509 = 0x4DD005DEL;
                    for (g_304 = 0; (g_304 <= 1); g_304 += 1)
                    {
                        int i, j, k;
                        g_8[(g_723 + 2)][(g_723 + 1)] = (func_11(g_8[(g_304 + 1)][g_723], l_1304, g_1211) <= (safe_mul_func_int8_t_s_s((safe_unary_minus_func_int8_t_s((safe_div_func_uint8_t_u_u(g_8[(g_304 + 1)][g_723], g_8[(g_304 + 1)][g_723])))), (safe_sub_func_int32_t_s_s(p_6, (g_352[(g_304 + 2)][g_723][g_723] = g_426))))));
                        g_8[(g_304 + 1)][(g_723 + 1)] = func_11((safe_sub_func_uint16_t_u_u((safe_div_func_uint32_t_u_u((l_1470 | g_8[(g_723 + 2)][(g_723 + 1)]), l_1470)), (!g_1410))), l_1490, p_6);
                        g_8[2][1] = (safe_sub_func_uint16_t_u_u((safe_mod_func_int8_t_s_s((safe_div_func_int16_t_s_s((safe_rshift_func_int16_t_s_s(g_970, 8)), func_11(p_6, l_1499, (!(safe_sub_func_int16_t_s_s(p_6, (((l_1290[1] < (g_8[(g_723 + 2)][(g_723 + 1)] = ((g_604[3] = (safe_mul_func_int8_t_s_s(5L, (l_1317[1] <= (safe_rshift_func_int16_t_s_u(0x8248L, 4)))))) <= 0x78L))) & 255UL) & p_7))))))), p_7)), g_84));
                    }
                    l_1512 = func_11(((+(l_1499 > ((safe_sub_func_int32_t_s_s(func_11(l_1490, g_304, p_6), func_11(l_1314, g_336, (l_1509 = func_11(l_1470, (((func_30(l_1499, l_1281, l_1490, g_910[3], p_6) > p_6) && g_1508[2]) && p_7), l_1470))))) & g_1510))) == p_7), l_1511, g_970);
                    g_8[1][0] = func_30(l_1513, p_7, ((safe_mod_func_int8_t_s_s((g_269 > (-1L)), (safe_lshift_func_uint16_t_u_u((l_1317[4] != (safe_mul_func_uint8_t_u_u(g_8[1][2], (g_352[5][0][1] >= func_11((safe_lshift_func_uint16_t_u_u(l_1290[1], (safe_add_func_uint8_t_u_u((p_6 > 65535UL), l_1524)))), p_6, p_7))))), 6)))) | 0xE6L), p_6, g_304);
                }
            }
            g_391 = (l_1525[3][1] = p_7);
            for (g_1510 = 0; (g_1510 >= 0); ++g_1510)
            {
                return g_760;
            }
        }
        for (l_1304 = 0; (l_1304 <= 4); l_1304 += 1)
        {
            int l_1560 = 1L;
            short l_1586 = 0L;
            unsigned char l_1631 = 247UL;
            unsigned l_1676 = 0UL;
            int i;
            if (((safe_div_func_uint32_t_u_u((func_73(l_1317[l_1304]) | p_7), 0x6C9AC45AL)) & (l_1317[l_1304] >= 0UL)))
            {
                unsigned l_1534[1][3];
                int l_1542 = 0L;
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 3; j++)
                        l_1534[i][j] = 0xDF0D51A0L;
                }
                for (g_316 = 0; (g_316 <= 1); g_316 += 1)
                {
                    int i;
                    l_1317[(g_316 + 1)] = l_1317[(g_316 + 2)];
                    l_1328 = l_1314;
                    for (g_1211 = 0; (g_1211 <= 1); g_1211 += 1)
                    {
                        int i, j, k;
                        l_1317[l_1304] = 0xCF04F28CL;
                        l_1317[3] = (l_1280[(g_316 + 8)][(g_316 + 4)][g_1211] || ((~0x8C4EL) < ((g_352[5][0][1] = (l_1290[3] & (safe_lshift_func_uint16_t_u_u(0x1B35L, ((func_30(g_231, p_7, ((8UL & (safe_add_func_uint32_t_u_u((func_11(l_1280[8][4][1], (((g_391 != g_8[3][2]) >= 0x25FCL) < p_7), l_1534[0][0]) ^ p_7), g_970))) == 0x36L), p_6, l_1280[(g_316 + 8)][(g_316 + 4)][g_1211]) >= 1UL) < 254UL))))) >= g_8[1][1])));
                    }
                }
                l_1317[l_1304] = func_22(p_6, p_6, l_1317[l_1304], l_1328);
                if (p_7)
                    break;
                l_1542 = (((l_1317[4] = (g_229 >= func_30(g_106, l_1535, (safe_sub_func_int8_t_s_s((l_1538 || p_7), (l_1317[l_1304] = (safe_unary_minus_func_uint8_t_u(p_6))))), (safe_mod_func_uint32_t_u_u(g_352[5][0][1], (~((((l_1534[0][0] == 0x24L) != p_7) && p_7) || g_427)))), l_1305))) || g_821) ^ p_6);
            }
            else
            {
                char l_1547[5] = {6L,6L,6L,6L,6L};
                int l_1561 = 0x06477935L;
                int i;
                l_1561 = (func_19(((-7L) != ((p_7 != (safe_lshift_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(l_1317[l_1304], (l_1547[0] == g_604[1]))), 0))) != ((safe_mul_func_int32_t_s_s(p_7, ((safe_mod_func_uint16_t_u_u((safe_div_func_uint16_t_u_u(7UL, (l_1317[1] & (safe_div_func_int32_t_s_s(((!(l_1560 = (((safe_mod_func_uint32_t_u_u(g_316, g_1058)) | 0UL) >= 1L))) != 0L), p_6))))), g_970)) <= (-1L)))) & p_7))), l_1547[2]) || 252UL);
                g_92 = (5L != (safe_add_func_int8_t_s_s((l_1317[4] = 1L), 0xDEL)));
                g_841 = l_1547[1];
                l_1317[1] = (l_1290[4] | l_1538);
            }
            if (l_1560)
            {
                int l_1582 = 0xC0A83221L;
                if (g_231)
                {
                    int l_1583[4][8][8] = {{{0x70196FA2L,0L,1L,0x9AF59831L,0x1D33E9D3L,(-2L),0x81AEC657L,0L},{7L,0L,0x6AC8F111L,6L,0x0C88BD3AL,0x63EAE051L,1L,6L},{(-1L),0x6AC94D75L,(-6L),0L,0xC6C20A45L,6L,0x9AF59831L,0x05C8D722L},{0x32685F67L,(-3L),0x034E0A91L,0x9CBD1A4AL,0xBFEEF50BL,0x32685F67L,0x63E25EFFL,0x81EDD639L},{0x3DDE2B6FL,0x1D33E9D3L,0x1D4B9D07L,0x3BC84F54L,(-1L),5L,5L,(-1L)},{1L,0L,0L,1L,1L,0x81EDD639L,(-1L),0xB1013A6EL},{0x49DC5452L,0L,0xC6F9B341L,0xB5CC5C0AL,0xCDC8A0BAL,0x4CDC856EL,0xBC868752L,6L},{0x9AF59831L,0L,9L,1L,0xDF1D7FDEL,0x81EDD639L,0xBFEEF50BL,0x81AEC657L}},{{0x9CBD1A4AL,0L,0x609C0591L,0xDDEF44C8L,0L,5L,0x35D6ECBAL,0x86738CC9L},{(-10L),0x1D33E9D3L,3L,9L,0xC0E2EBC0L,0x32685F67L,1L,5L},{0x07522329L,0L,(-9L),3L,0xAD13FCF2L,(-3L),(-1L),(-1L)},{0xB849C300L,0xB7FC6511L,0x35D6ECBAL,0x7D762DFDL,0L,0xB32F027DL,(-1L),(-1L)},{5L,0xE719DFC3L,0x63EAE051L,0x70196FA2L,0xFBF01FBBL,0x9AF59831L,0x82302AF1L,0xD07D34DEL},{(-3L),0x9AF5DCC4L,7L,0x1F2A9DF5L,0x32685F67L,1L,(-1L),0L},{0xD8D8EA83L,0x4DC796CAL,(-1L),6L,6L,0xB7FC6511L,0x49DC5452L,0x81EDD639L},{0x63EAE051L,0x81AEC657L,8L,0x1F313A19L,0x167441BAL,0x034E0A91L,8L,0xE719DFC3L}},{{0x05C8D722L,0xD8D17EEEL,0x8A1C7EF0L,0x49DC5452L,0x6AC94D75L,5L,1L,0x6AC8F111L},{(-1L),0x05C8D722L,0xAFE69DEBL,0xFBF01FBBL,1L,0x81AEC657L,7L,0xB1013A6EL},{0x32685F67L,0x1D33E9D3L,0xDF1D7FDEL,1L,0xAD13FCF2L,0x45C891D2L,0x0CF840CAL,(-1L)},{8L,0xE719DFC3L,0x07522329L,0x6EF44D62L,0x74BBAD22L,0x23D16684L,0x609C0591L,0x23D16684L},{0xD420E5A4L,0x4DC796CAL,0x6EF44D62L,0x4DC796CAL,0xD420E5A4L,0x70196FA2L,0xE719DFC3L,0x2F973022L},{0L,0xAD13FCF2L,(-1L),0x9CBD1A4AL,(-1L),1L,0x3DDE2B6FL,0x4DC796CAL},{0x81AEC657L,0xB5CC5C0AL,(-1L),0x82302AF1L,1L,0x32685F67L,0xE719DFC3L,(-1L)},{(-1L),0x0C88BD3AL,0x6EF44D62L,0x2F973022L,0xD8D8EA83L,0x3BC84F54L,0x609C0591L,0L}},{{0x4CDC856EL,(-1L),0x07522329L,9L,5L,0x609C0591L,0x0CF840CAL,0xB6B0F269L},{0L,0x45C891D2L,0xDF1D7FDEL,0x6B486B35L,(-1L),(-6L),7L,(-2L)},{0x6EF44D62L,0L,0xAFE69DEBL,0x86738CC9L,0xB6B0F269L,0xBFEEF50BL,1L,0x167441BAL},{0xFB7341D1L,0x167441BAL,0x8A1C7EF0L,0xCE475162L,0x32685F67L,0xCDC8A0BAL,0x05C8D722L,(-2L)},{0xE719DFC3L,(-1L),0xD07D34DEL,0xBC868752L,0x0CF840CAL,0xA76E46CDL,0x8A1C7EF0L,0x4DC796CAL},{(-9L),1L,(-1L),0xEDA6143DL,0x9AF59831L,0x1D4B9D07L,0L,6L},{(-1L),0x6F6717CAL,0x7EB64F7DL,0xAFE69DEBL,0xCDC8A0BAL,0x49DC5452L,0x3DDE2B6FL,(-1L)},{0xD8D8EA83L,0xE719DFC3L,0L,0xB6B0F269L,(-1L),0xB849C300L,(-1L),0xBC868752L}}};
                    int i, j, k;
                    for (p_6 = 0; (p_6 <= 59); p_6++)
                    {
                        g_8[2][1] = (safe_div_func_int8_t_s_s((~(((safe_sub_func_uint32_t_u_u(((safe_add_func_int16_t_s_s(g_821, (safe_mul_func_uint8_t_u_u((safe_mod_func_int8_t_s_s(func_22((l_1583[0][3][7] = (~(safe_mod_func_int16_t_s_s((safe_div_func_int8_t_s_s((safe_mul_func_uint8_t_u_u((l_1582 = p_6), (g_910[4] = 0x37L))), g_970)), g_200[0][5])))), g_1211, g_150, g_227), p_7)), g_316)))) >= g_1410), g_1410)) & p_6) ^ 1UL)), p_6));
                        return g_269;
                    }
                    for (p_7 = (-25); (p_7 >= 13); p_7++)
                    {
                        return l_1586;
                    }
                    l_1560 = g_760;
                }
                else
                {
                    l_1281 = (safe_sub_func_int8_t_s_s((l_1560 = (g_1211 = g_200[0][1])), p_7));
                }
            }
            else
            {
                unsigned short l_1589[1][3][7] = {{{0x9413L,0x9413L,0x9413L,0x9413L,0x9413L,0x9413L,0x9413L},{0x3DA5L,0x3DA5L,0x3DA5L,0x3DA5L,0x3DA5L,0x3DA5L,0x3DA5L},{0x9413L,0x9413L,0x9413L,0x9413L,0x9413L,0x9413L,0x9413L}}};
                int l_1611 = 3L;
                int l_1624 = 0L;
                short l_1681 = 0x45DFL;
                unsigned short l_1693[9][10] = {{65534UL,0UL,65529UL,0UL,65534UL,0UL,65529UL,0UL,65534UL,0UL},{65534UL,0UL,65534UL,0x3801L,65534UL,0UL,65534UL,0x3801L,65534UL,0UL},{65534UL,0x3801L,65529UL,0x3801L,65534UL,0x3801L,65529UL,0x3801L,65534UL,0x3801L},{65534UL,0x3801L,65534UL,0UL,65534UL,0x3801L,65534UL,0UL,65534UL,0x3801L},{65534UL,0UL,65529UL,0UL,65534UL,0UL,65529UL,0UL,65534UL,0UL},{65534UL,0UL,65534UL,0x3801L,65534UL,0UL,65534UL,0x3801L,65534UL,0UL},{65534UL,0x3801L,65529UL,0x3801L,65534UL,0x3801L,65529UL,0x3801L,65534UL,0x3801L},{65534UL,0x3801L,65534UL,0UL,65534UL,0x3801L,65534UL,0UL,65534UL,0x3801L},{65534UL,0UL,65529UL,0UL,65534UL,0UL,65529UL,0UL,65534UL,0UL}};
                int i, j, k;
                l_1589[0][1][6] = (g_1510 ^ g_1211);
                for (g_821 = 0; (g_821 < (-11)); g_821 = safe_sub_func_int32_t_s_s(g_821, 3))
                {
                    short l_1608 = (-4L);
                    int l_1694 = 0x20854F24L;
                    g_336 = ((safe_rshift_func_uint8_t_u_u((func_30(((g_18 ^ (safe_mul_func_uint8_t_u_u(l_1280[7][0][0], (l_1280[9][7][0] > g_304)))) != ((l_1317[l_1304] = (safe_mul_func_int8_t_s_s(func_11((((safe_div_func_int32_t_s_s((p_6 & (safe_rshift_func_int8_t_s_u((safe_add_func_int16_t_s_s(g_636, (safe_rshift_func_uint16_t_u_s((safe_mod_func_int16_t_s_s((l_1608 != (safe_add_func_int8_t_s_s((!(l_1611 || ((safe_rshift_func_uint8_t_u_s(g_352[5][0][1], 4)) || l_1611))), 0L))), g_841)), 6)))), 1))), g_28)) > g_604[2]) <= 0L), g_910[8], l_1344), l_1305))) > p_6)), g_604[5], p_7, p_6, g_958) >= p_7), l_1458)) && p_7);
                    for (l_1344 = 0; (l_1344 >= (-18)); l_1344 = safe_sub_func_uint8_t_u_u(l_1344, 4))
                    {
                        int l_1629 = 0x84CFF558L;
                        l_1624 = (safe_mul_func_uint8_t_u_u(l_1344, ((0x594C550CL == (l_1560 = l_1458)) != (0xE1E9L ^ (safe_add_func_uint8_t_u_u((safe_mod_func_int32_t_s_s(func_52(l_1611, (((safe_sub_func_uint32_t_u_u(4294967295UL, p_6)) != 0x1FL) == 0x2795L), p_7, p_7, p_6), p_6)), p_7))))));
                        l_1303 = (((g_304 = p_7) < (g_841 = (safe_sub_func_int32_t_s_s((0UL && p_7), func_11(p_6, (l_1630 = (0x96ED0D82L >= ((g_8[2][1] = l_1608) && (safe_div_func_uint8_t_u_u((l_1629 = p_6), g_604[1]))))), (((-8L) & l_1631) == g_229)))))) <= 0L);
                        return p_6;
                    }
                    for (l_1608 = 9; (l_1608 > (-13)); --l_1608)
                    {
                        unsigned l_1646 = 4294967295UL;
                        const int l_1651 = 0L;
                        short l_1655 = (-1L);
                        l_1624 = func_30((safe_sub_func_uint16_t_u_u(g_229, (l_1304 <= ((g_1508[2] == ((~((safe_add_func_int8_t_s_s(((g_970 = (g_427 = (func_11((g_910[3] = (safe_lshift_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s(((safe_mul_func_int8_t_s_s(g_200[0][1], (((safe_mod_func_uint8_t_u_u((p_6 && p_6), l_1611)) || l_1646) && (g_1211 = ((g_723 = ((safe_lshift_func_int16_t_s_u((safe_sub_func_int32_t_s_s((l_1646 <= p_7), l_1651)), 3)) < l_1608)) & g_231))))) & g_200[0][1]), 0)), 6))), g_1508[6], l_1646) != 0x0C2CL))) | p_6), 0L)) >= (-4L))) <= g_229)) > l_1652)))), p_6, g_426, l_1651, l_1608);
                        l_1317[l_1304] = (safe_sub_func_uint32_t_u_u(l_1655, ((-6L) >= (safe_mul_func_uint8_t_u_u(1UL, (((safe_sub_func_int32_t_s_s(g_200[0][5], (safe_mul_func_int16_t_s_s(((safe_mod_func_uint8_t_u_u((g_910[7] = ((l_1560 = (func_11(l_1317[l_1304], g_910[3], g_28) != func_11((g_391 >= l_1646), l_1317[0], l_1655))) ^ p_6)), p_7)) <= p_7), 1UL)))) | l_1317[l_1304]) && p_6))))));
                        l_1681 = (safe_mod_func_int8_t_s_s(((safe_div_func_uint32_t_u_u(0x926E9C6EL, (((l_1317[1] = (l_1608 | (!(((func_52(g_84, ((((safe_mul_func_uint8_t_u_u(p_7, ((safe_mul_func_uint16_t_u_u(((l_1560 && g_1410) || (safe_sub_func_uint32_t_u_u((safe_mod_func_int8_t_s_s(func_11(l_1676, (l_1317[4] = p_6), (safe_rshift_func_int16_t_s_s(((g_426 = (safe_lshift_func_uint16_t_u_s(((l_1303 = ((p_6 & l_1655) | 0x8C13L)) ^ 0xCE49L), 0))) > g_1508[2]), 13))), g_28)), 0x8F2B2F82L))), g_427)) >= g_910[8]))) | 1UL) | l_1624) | 9UL), g_604[5], l_1589[0][0][4], p_6) || 1UL) && 0UL) >= l_1646)))) || p_7) ^ g_1508[2]))) == g_8[1][0]), g_958));
                        l_1694 = (safe_add_func_uint8_t_u_u((p_7 || func_41(l_1631)), ((safe_lshift_func_int16_t_s_u(l_1631, (safe_lshift_func_uint8_t_u_u(((!3UL) == 4294967293UL), func_11(((safe_sub_func_uint32_t_u_u((0x16L <= (l_1303 = l_1631)), ((safe_unary_minus_func_int8_t_s((safe_sub_func_uint8_t_u_u((g_970 && 1UL), g_1510)))) < l_1693[0][0]))) | l_1681), p_7, g_8[2][1]))))) >= g_1510)));
                    }
                }
            }
        }
    }
    else
    {
        unsigned l_1697 = 4294967291UL;
        unsigned l_1706 = 4294967290UL;
        int l_1708[7] = {3L,3L,3L,3L,3L,3L,3L};
        int i;
        l_1708[3] = (l_1697 > (func_11((safe_mul_func_int16_t_s_s((4294967293UL != (func_41(p_6) == ((-5L) ^ (((safe_rshift_func_uint8_t_u_s((p_7 & ((((((safe_lshift_func_uint16_t_u_s(l_1697, 7)) <= (safe_div_func_uint8_t_u_u(func_11(l_1697, ((-3L) < 0xF7D29B82L), l_1314), p_7))) < g_316) <= p_6) || p_6) && g_1510)), l_1697)) != g_8[2][1]) <= g_1058)))), l_1706)), g_1508[6], l_1707) != p_7));
    }
    return g_604[5];
}







static short func_11(unsigned char p_12, const short p_13, unsigned p_14)
{
    return p_12;
}







static unsigned char func_19(int p_20, unsigned short p_21)
{
    int l_1007 = 0xA3B4CB1CL;
    int l_1010 = 0L;
    int l_1011 = 0xD9E7EB31L;
    unsigned char l_1018 = 0x87L;
    unsigned l_1042 = 4294967295UL;
    int l_1118 = 1L;
    unsigned char l_1144 = 0x3EL;
    unsigned l_1251 = 0UL;
    g_958 = g_18;
    l_1018 = (((safe_mod_func_uint16_t_u_u(((safe_rshift_func_uint16_t_u_u(((safe_mul_func_uint8_t_u_u(((l_1007 = 65532UL) & ((safe_div_func_uint32_t_u_u(l_1010, (g_391 = (0xD36307E5L || (((((+p_20) >= (l_1011 = l_1010)) & (safe_add_func_uint16_t_u_u(g_841, (((safe_rshift_func_int8_t_s_u(l_1010, ((safe_mul_func_uint8_t_u_u(249UL, g_8[1][1])) < 1UL))) & g_106) & l_1010)))) ^ 0x64L) && p_20))))) == l_1010)), p_21)) <= g_336), l_1010)) <= p_21), l_1010)) == g_427) < l_1010);
    if ((safe_rshift_func_uint16_t_u_u(p_20, (l_1007 = ((func_30(p_21, (g_150 = ((l_1011 = 0xD9L) || g_92)), l_1007, l_1007, g_352[5][0][1]) > p_21) ^ l_1010)))))
    {
        unsigned char l_1031 = 0x22L;
        int l_1059 = (-5L);
        unsigned short l_1143[6][1][3] = {{{0x64E2L,0x64E2L,0xBB87L}},{{65533UL,0UL,0xBB87L}},{{0UL,65533UL,0xBB87L}},{{0x64E2L,0x64E2L,0xBB87L}},{{65533UL,0UL,0xBB87L}},{{0UL,65533UL,0xBB87L}}};
        int l_1154 = 1L;
        int i, j, k;
        if (((safe_mod_func_uint16_t_u_u(l_1010, l_1007)) && func_30(g_18, (safe_sub_func_int16_t_s_s(g_18, ((g_263 <= g_723) || ((((safe_mod_func_int16_t_s_s((safe_mul_func_uint8_t_u_u((g_336 == (safe_rshift_func_uint16_t_u_u(g_970, p_20))), 246UL)), l_1007)) >= 0L) || l_1031) >= g_958)))), g_352[5][0][1], p_21, g_426)))
        {
            unsigned short l_1036[5] = {0x4F92L,0x4F92L,0x4F92L,0x4F92L,0x4F92L};
            int l_1037[9];
            unsigned l_1044[2][9] = {{0x152099FEL,1UL,0x152099FEL,0x152099FEL,1UL,0x152099FEL,0x152099FEL,1UL,0x152099FEL},{0UL,0x9034977EL,0UL,0UL,0UL,4294967295UL,4294967295UL,0UL,4294967295UL}};
            int i, j;
            for (i = 0; i < 9; i++)
                l_1037[i] = (-1L);
            for (g_231 = 21; (g_231 < 14); g_231 = safe_sub_func_uint32_t_u_u(g_231, 7))
            {
                short l_1043 = (-10L);
                int l_1068 = 0x14968536L;
                if ((((safe_mod_func_uint8_t_u_u(((p_20 || g_263) & (!func_30((l_1037[0] = l_1036[4]), (p_20 != (l_1042 = (safe_mod_func_int32_t_s_s(func_30(l_1036[4], p_20, l_1036[4], ((safe_mod_func_int32_t_s_s(((g_723 >= p_21) < (-6L)), 4294967290UL)) < 0xDDL), g_229), g_604[1])))), l_1043, g_821, l_1044[1][6]))), l_1007)) > 4294967294UL) || 0x61L))
                {
                    for (g_263 = 4; (g_263 >= 0); g_263 -= 1)
                    {
                        int i;
                        return g_604[(g_263 + 1)];
                    }
                    for (g_150 = 0; (g_150 <= 1); g_150 += 1)
                    {
                        int i, j;
                        g_841 = (g_200[g_150][(g_150 + 1)] < 0xA66FBA6EL);
                        g_336 = (-9L);
                        return g_352[5][0][1];
                    }
                    g_391 = 0xEF90687FL;
                    if (p_20)
                        continue;
                }
                else
                {
                    int l_1051 = 0x6742A25EL;
                    l_1059 = ((safe_unary_minus_func_uint16_t_u(func_30(((safe_mod_func_uint32_t_u_u((safe_unary_minus_func_int8_t_s(((p_21 || (p_21 != (safe_mod_func_uint32_t_u_u((l_1051 = p_20), p_21)))) | g_316))), l_1043)) | ((safe_lshift_func_uint16_t_u_s((func_30(((safe_div_func_int32_t_s_s((safe_lshift_func_int16_t_s_u(g_427, (g_723 = l_1031))), ((255UL ^ p_20) || 0x9AL))) && 65529UL), g_1058, g_910[3], g_970, p_21) || g_304), p_20)) >= p_20)), l_1036[4], p_21, l_1059, g_231))) == 9UL);
                    for (g_28 = 4; (g_28 >= 0); g_28 -= 1)
                    {
                        int l_1069[3][10][2] = {{{0xEACB226CL,0L},{0L,2L},{0xEACB226CL,2L},{0L,0L},{0xEACB226CL,0L},{0L,2L},{0xEACB226CL,2L},{0L,0L},{0xEACB226CL,0L},{0L,2L}},{{0xEACB226CL,2L},{0L,0L},{0xEACB226CL,0L},{0L,2L},{0xEACB226CL,2L},{0L,0L},{0xEACB226CL,0L},{0L,2L},{0xEACB226CL,2L},{0L,0L}},{{0xEACB226CL,0L},{0L,2L},{0xEACB226CL,2L},{0L,0L},{0xEACB226CL,0L},{0L,2L},{0xEACB226CL,2L},{0L,0L},{0xEACB226CL,0L},{0L,2L}}};
                        int i, j, k;
                        g_841 = (0x33B9L != 65533UL);
                        g_92 = (((func_30(func_30(((safe_lshift_func_uint16_t_u_u((g_910[(g_28 + 2)] & (safe_mul_func_int8_t_s_s((4294967294UL && ((l_1068 = (safe_rshift_func_uint16_t_u_s(l_1036[4], (p_20 | (g_910[(g_28 + 2)] & l_1007))))) & l_1059)), l_1051))), 14)) & (g_18 > 0xCB6C9122L)), p_21, g_18, p_21, p_20), l_1018, g_1058, l_1069[0][0][1], g_263) && l_1068) > g_263) | 6L);
                        g_426 = (safe_rshift_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u(1L, 5)), 13));
                        l_1059 = (-1L);
                    }
                    if (g_427)
                    {
                        short l_1084 = (-2L);
                        g_336 = (g_391 = p_20);
                        l_1068 = (-1L);
                        l_1011 = (safe_div_func_uint8_t_u_u(func_30((l_1043 | (l_1059 = ((safe_sub_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u((func_30(((~((l_1044[1][0] > (safe_mul_func_int16_t_s_s(((-3L) | 0x51DEAE01L), func_30(l_1051, (safe_div_func_int16_t_s_s((g_263 = ((func_30(l_1084, g_604[5], (safe_add_func_uint32_t_u_u(((safe_mul_func_int16_t_s_s(l_1042, 65535UL)) || 1UL), 0x365E3889L)), p_20, l_1036[3]) & p_21) & 5L)), p_20)), l_1059, l_1051, l_1068)))) < p_20)) && p_20), p_21, g_636, p_20, g_316) && (-1L)), p_20)), g_336)) | 0x5CAC9CD9L))), g_636, p_20, g_227, g_106), 0x72L));
                        l_1051 = 0L;
                    }
                    else
                    {
                        unsigned char l_1117 = 0UL;
                        g_426 = 0L;
                        g_92 = (safe_rshift_func_int16_t_s_s((safe_mul_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s((safe_div_func_uint16_t_u_u(((safe_add_func_int32_t_s_s(p_21, p_20)) != ((safe_mul_func_uint16_t_u_u((safe_div_func_int32_t_s_s((func_30((0xB871L >= ((safe_div_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u(l_1011, (safe_rshift_func_int16_t_s_u(g_636, p_21)))), (safe_lshift_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u((safe_lshift_func_uint16_t_u_u(0x7B27L, 10)), (g_150 = (func_30(((l_1051 = (func_30(((safe_mod_func_uint32_t_u_u(l_1051, l_1043)) != 1L), l_1117, g_200[0][1], g_150, g_723) && 0UL)) != g_760), l_1117, p_21, l_1118, g_304) > p_20)))), g_84)))) != p_20)), p_21, l_1068, l_1031, l_1068) < (-5L)), p_20)), p_21)) > l_1031)), g_352[4][0][1])), g_723)), g_352[4][1][0])), 6));
                    }
                    if (g_200[0][1])
                    {
                        l_1068 = (l_1043 <= g_841);
                        return p_21;
                    }
                    else
                    {
                        char l_1125 = 0x7CL;
                        l_1051 = ((((safe_lshift_func_uint8_t_u_u(((0UL && 0UL) ^ ((safe_lshift_func_int16_t_s_s((~g_8[0][2]), 6)) ^ ((l_1059 = g_304) != l_1051))), 1)) || (g_723 & (g_84 != l_1125))) >= ((!(safe_mod_func_uint16_t_u_u(((safe_unary_minus_func_uint8_t_u((safe_div_func_int8_t_s_s(g_604[5], 0xA4L)))) > l_1037[4]), l_1031))) != l_1125)) ^ l_1118);
                        l_1068 = p_20;
                        l_1144 = ((-5L) == (g_604[5] && ((l_1042 == p_20) == (func_30(g_229, p_20, (safe_div_func_uint8_t_u_u(((safe_div_func_int32_t_s_s(p_20, (safe_div_func_int8_t_s_s(l_1125, (safe_sub_func_uint8_t_u_u(((safe_mod_func_uint32_t_u_u((~(g_304 = p_21)), l_1043)) ^ l_1125), p_21)))))) & g_336), g_426)), l_1143[3][0][1], p_20) | p_21))));
                        l_1068 = l_1036[4];
                    }
                }
            }
        }
        else
        {
            unsigned l_1145 = 0x7DA7DA78L;
            unsigned l_1153 = 3UL;
            if (((l_1059 = l_1143[2][0][2]) && l_1145))
            {
                l_1011 = (safe_div_func_uint8_t_u_u(((safe_sub_func_uint16_t_u_u((safe_unary_minus_func_int32_t_s(p_20)), 0xEDE3L)) > (((-1L) >= (safe_div_func_uint8_t_u_u((p_21 <= l_1010), (p_20 ^ g_760)))) || (0x3D35L == l_1153))), 1UL));
            }
            else
            {
                l_1154 = func_41((l_1059 = l_1145));
            }
            g_841 = ((g_636 >= l_1010) < p_20);
            l_1007 = p_21;
            l_1059 = func_41((l_1118 < 0UL));
        }
        for (g_958 = (-12); (g_958 > 16); ++g_958)
        {
            short l_1171 = 0x7F85L;
            int l_1172 = (-10L);
            for (g_821 = 4; (g_821 >= 0); g_821 -= 1)
            {
                const short l_1166 = 1L;
                int l_1173 = 0x90029065L;
                for (g_336 = 1; (g_336 >= 0); g_336 -= 1)
                {
                    int l_1157 = 0x8EA4A45BL;
                    int i;
                    l_1157 = g_604[g_821];
                }
                for (p_21 = 0; (p_21 <= 5); p_21 += 1)
                {
                    int i;
                    if (func_41(g_604[p_21]))
                    {
                        char l_1167[5];
                        int l_1170 = (-1L);
                        int i;
                        for (i = 0; i < 5; i++)
                            l_1167[i] = (-1L);
                        l_1171 = (l_1170 = ((safe_mod_func_int32_t_s_s((safe_sub_func_int32_t_s_s(((safe_sub_func_uint32_t_u_u((g_604[p_21] >= (safe_add_func_uint8_t_u_u((((func_73(l_1166) <= (0x3BB131D0L >= 0xA157C793L)) && func_30(((l_1166 <= (l_1167[4] = (l_1059 = (l_1154 = 65528UL)))) > (safe_sub_func_int32_t_s_s(((((g_8[2][1] < p_20) != (-1L)) < g_391) < p_21), p_20))), p_20, p_20, l_1042, l_1007)) > 0xD2L), l_1170))), p_21)) < l_1011), 0x92666B51L)), 4294967295UL)) > l_1144));
                        return g_150;
                    }
                    else
                    {
                        l_1154 = p_21;
                    }
                    l_1172 = p_21;
                    l_1173 = p_20;
                }
            }
        }
        for (g_391 = 0; (g_391 != 9); g_391 = safe_add_func_int16_t_s_s(g_391, 1))
        {
            g_841 = func_73(l_1018);
            for (g_84 = 0; (g_84 < (-2)); g_84 = safe_sub_func_uint16_t_u_u(g_84, 1))
            {
                return p_21;
            }
        }
    }
    else
    {
        char l_1188[2][6] = {{0L,0L,0L,0L,0L,0L},{0L,0L,0L,0L,0L,0L}};
        int l_1189 = 0x8649E4D6L;
        unsigned char l_1204[10][8] = {{0x95L,8UL,0UL,255UL,0x78L,254UL,0xAFL,8UL},{6UL,1UL,0UL,0UL,0UL,1UL,6UL,254UL},{0x78L,255UL,1UL,8UL,0x78L,1UL,6UL,255UL},{0UL,8UL,0x95L,1UL,0x78L,1UL,0x95L,8UL},{0xFCL,254UL,0UL,255UL,0xAFL,1UL,0xFCL,255UL},{0x78L,8UL,1UL,0UL,0xFCL,1UL,0xFCL,0UL},{0UL,0UL,0UL,1UL,6UL,254UL,0x95L,0UL},{6UL,254UL,0x95L,0UL,0xAFL,255UL,6UL,255UL},{6UL,255UL,1UL,255UL,6UL,1UL,0x78L,8UL},{0UL,255UL,0xAFL,1UL,0xFCL,255UL,0x95L,255UL}};
        int i, j;
        for (l_1144 = 0; (l_1144 <= 1); l_1144 += 1)
        {
            int l_1205 = 0x268F642FL;
            int l_1226 = 0x5312C5AEL;
            int l_1278 = 1L;
            int i;
            l_1189 = (safe_div_func_int8_t_s_s(g_910[(l_1144 + 8)], (((((safe_mul_func_uint8_t_u_u(g_604[(l_1144 + 3)], ((((((g_723 && (g_604[3] <= func_73(g_352[5][0][1]))) != (((safe_mod_func_int8_t_s_s((safe_lshift_func_int16_t_s_s(g_910[(l_1144 + 8)], (l_1118 = 0L))), (safe_div_func_uint8_t_u_u(((l_1010 = (g_28 == l_1188[0][3])) != 0x3AL), 255UL)))) & 0x1457L) ^ 0UL)) != 0x6F5BL) == p_20) ^ 0L) < 255UL))) || l_1188[0][3]) > 246UL) <= 4294967295UL) ^ 0x0E25L)));
            l_1118 = ((((g_910[(l_1144 + 3)] = (safe_rshift_func_uint16_t_u_u(p_21, 3))) != g_28) || (p_20 <= (-2L))) > (safe_mul_func_int8_t_s_s(p_20, (safe_add_func_int32_t_s_s((safe_mul_func_uint16_t_u_u(((g_18 = (safe_mod_func_uint8_t_u_u(((safe_sub_func_int32_t_s_s((l_1188[0][3] & p_20), ((safe_rshift_func_uint16_t_u_u(l_1204[2][6], (g_229 && 0xCD63B4E9L))) & 65530UL))) || 0L), l_1205))) <= l_1205), 0xB6C4L)), l_1042)))));
            for (l_1007 = 1; (l_1007 >= 0); l_1007 -= 1)
            {
                unsigned l_1210[5][7] = {{0xCF74EFEEL,4294967286UL,4294967286UL,0xCF74EFEEL,3UL,0xCF74EFEEL,4294967286UL},{0xB2F941FBL,0xB2F941FBL,0x1AAB7DDDL,4294967288UL,0x1AAB7DDDL,0xB2F941FBL,0xB2F941FBL},{0xB5E51DD2L,4294967286UL,4294967287UL,4294967286UL,0xB5E51DD2L,0xB5E51DD2L,4294967286UL},{4UL,0x11E85D91L,4UL,0x1AAB7DDDL,0x1AAB7DDDL,4UL,0x11E85D91L},{4294967286UL,3UL,4294967287UL,4294967287UL,3UL,0xB5E51DD2L,4294967287UL}};
                int l_1221 = (-1L);
                int l_1253 = 0x7B6B593CL;
                int i, j;
                if ((l_1221 = (((p_21 != ((safe_div_func_uint16_t_u_u(func_22(p_21, (safe_rshift_func_uint8_t_u_u((g_910[3] = func_41(l_1210[1][5])), ((g_1211 = l_1210[1][5]) == p_21))), (safe_lshift_func_uint16_t_u_u(g_8[0][2], (safe_unary_minus_func_int16_t_s((safe_rshift_func_int16_t_s_s((l_1205 > (l_1189 = (safe_div_func_uint16_t_u_u((l_1118 = (safe_rshift_func_int8_t_s_s(g_316, p_20))), 1L)))), 6)))))), g_316), p_20)) == g_1058)) <= 0x4F71DBCCL) & p_20)))
                {
                    unsigned char l_1224 = 248UL;
                    if (p_21)
                    {
                        l_1118 = 0x93CC4BF4L;
                        l_1224 = (safe_add_func_uint8_t_u_u(249UL, 0xD1L));
                    }
                    else
                    {
                        char l_1225 = 0xBBL;
                        g_426 = l_1225;
                    }
                    l_1226 = g_910[(l_1144 + 8)];
                    for (g_958 = 0; (g_958 <= 1); g_958 += 1)
                    {
                        return l_1189;
                    }
                }
                else
                {
                    for (g_18 = 0; (g_18 <= 1); g_18 += 1)
                    {
                        char l_1229 = (-6L);
                        g_841 = ((g_958 = g_958) & (safe_rshift_func_int16_t_s_u((l_1226 = (l_1229 > g_427)), l_1205)));
                        if (p_21)
                            break;
                        return p_20;
                    }
                    l_1118 = (safe_lshift_func_int16_t_s_u(g_227, 6));
                    for (g_391 = 1; (g_391 >= 0); g_391 -= 1)
                    {
                        int i, j;
                        l_1221 = 4L;
                        if (l_1188[g_391][(l_1144 + 2)])
                            break;
                    }
                }
                for (p_21 = 0; (p_21 <= 1); p_21 += 1)
                {
                    char l_1237 = 0L;
                    int l_1238 = 0x58AF7231L;
                    int l_1279 = 3L;
                    if ((g_1211 <= (func_73((l_1221 = l_1204[2][4])) >= g_910[(l_1144 + 8)])))
                    {
                        int l_1252 = 0x4FDAA38CL;
                        short l_1256 = (-1L);
                        int l_1257 = 0x59D11FC4L;
                        int i, j, k;
                        g_391 = ((safe_unary_minus_func_uint16_t_u(l_1204[2][1])) >= (g_910[0] = (safe_rshift_func_uint8_t_u_s(0xF1L, ((g_636 = (g_352[p_21][p_21][p_21] = ((p_20 & 0x70E28A20L) || (((func_73(((~(l_1238 = (safe_sub_func_uint32_t_u_u((p_20 || (l_1237 = g_604[4])), p_21)))) <= (safe_mod_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u((((safe_mod_func_uint8_t_u_u((safe_div_func_int16_t_s_s(g_841, ((safe_div_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s(p_21, p_21)), g_263)) || 3UL))), l_1251)) > 1L) | g_8[2][1]), g_269)), g_970)))) ^ 0x47CAL) <= 4294967286UL) >= 0xBFAD60CEL)))) && 0x5C71A48BL)))));
                        l_1189 = 0x1E67A749L;
                        l_1189 = (func_22(((g_910[3] = l_1252) || l_1253), (l_1118 = (safe_rshift_func_int16_t_s_u(((l_1221 = ((func_73(l_1238) & (l_1256 ^ p_20)) >= (!0L))) ^ g_352[2][1][1]), (~(l_1257 = (g_352[p_21][p_21][p_21] || g_604[0])))))), p_20, g_760) == l_1205);
                    }
                    else
                    {
                        short l_1276 = 7L;
                        int l_1277 = 1L;
                        l_1279 = (safe_div_func_int16_t_s_s((safe_add_func_uint32_t_u_u(((g_910[3] == (p_21 == ((safe_mod_func_int32_t_s_s(((g_760 = g_352[5][0][1]) & ((p_20 | p_20) > ((l_1278 = (safe_mul_func_int16_t_s_s((l_1238 = (((safe_mod_func_uint16_t_u_u((l_1221 = (l_1277 = ((safe_mod_func_int16_t_s_s((g_604[(l_1144 + 3)] & func_73(g_28)), (safe_mod_func_int8_t_s_s((l_1226 = (((safe_mul_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(0x19L, l_1276)), 1UL)) < p_20) & 0xFCL)), g_352[4][1][1])))) && l_1007))), p_21)) | g_958) && p_20)), 1UL))) <= p_20))), 4294967295UL)) == g_910[3]))) < l_1276), l_1210[1][5])), g_28));
                        return p_21;
                    }
                    return l_1205;
                }
            }
        }
        l_1118 = g_200[1][3];
    }
    return l_1011;
}







static unsigned char func_22(unsigned p_23, int p_24, char p_25, short p_26)
{
    short l_29 = 0L;
    int l_43 = (-9L);
    int l_979 = 0L;
    unsigned l_980 = 0x5F0072FBL;
    l_29 = 0L;
    p_24 = func_30(((l_979 = func_36((func_41((l_43 = l_29)) & (safe_add_func_uint16_t_u_u(g_8[2][1], (safe_lshift_func_uint16_t_u_u(((l_29 != (-5L)) & (!(l_29 | ((safe_mul_func_int8_t_s_s(l_29, 0x23L)) != p_23)))), l_29))))), p_24, l_29, g_821)) && l_980), g_8[1][0], l_980, l_980, p_26);
    return g_427;
}







static int func_30(short p_31, unsigned short p_32, unsigned short p_33, short p_34, unsigned char p_35)
{
    unsigned l_983 = 9UL;
    int l_984[9][10] = {{0xDED50B1AL,0xDED50B1AL,0x35FD8686L,(-1L),0x262200B5L,0x51ED0738L,0x7506B92FL,0xDED50B1AL,(-1L),0x7506B92FL},{(-8L),0x8C547D63L,6L,0L,0x8C547D63L,0x322C5E59L,0x7506B92FL,0x322C5E59L,0x8C547D63L,0L},{0x105E75DCL,0xDED50B1AL,0x105E75DCL,6L,0x7506B92FL,0xD8876968L,6L,0x28C6CB6EL,(-3L),0x105E75DCL},{0x28C6CB6EL,(-8L),(-1L),(-1L),0xDED50B1AL,0xC35DE915L,0x28C6CB6EL,0x28C6CB6EL,0xC35DE915L,0xDED50B1AL},{(-8L),0x105E75DCL,0x105E75DCL,(-8L),(-3L),0x8C547D63L,0xDED50B1AL,0x322C5E59L,0x105E75DCL,0x28C6CB6EL},{(-3L),0x28C6CB6EL,6L,0xD8876968L,0x7506B92FL,6L,0x105E75DCL,0xDED50B1AL,0x105E75DCL,6L},{(-1L),(-8L),0x35FD8686L,(-8L),(-1L),0x4768E386L,0L,(-1L),0xC35DE915L,0x7506B92FL},{0xDED50B1AL,(-3L),0xD8876968L,(-1L),0L,0x8C547D63L,0x7506B92FL,(-3L),(-3L),0x7506B92FL},{0x322C5E59L,(-1L),6L,6L,(-1L),0x322C5E59L,0xD8876968L,(-8L),0x8C547D63L,6L}};
    int l_995 = 0x27A4F838L;
    int l_1000[5][10] = {{0xDFEA5A93L,1L,7L,5L,0xDFEA5A93L,0xFD6031EFL,5L,1L,0xFD6031EFL,1L},{0xDFEA5A93L,6L,3L,0xDFEA5A93L,3L,6L,0xDFEA5A93L,0x72D7B464L,0x72D7B464L,0xDFEA5A93L},{0x72D7B464L,1L,3L,3L,1L,0x72D7B464L,6L,1L,6L,0x72D7B464L},{5L,1L,0xFD6031EFL,1L,5L,0xFD6031EFL,0xDFEA5A93L,0xDFEA5A93L,0xFD6031EFL,5L},{5L,6L,6L,5L,3L,0x72D7B464L,5L,0x72D7B464L,3L,5L}};
    int i, j;
    g_841 = (safe_add_func_uint8_t_u_u(((-2L) || 0xCAE2L), g_636));
    g_391 = l_983;
    l_1000[4][7] = (((l_984[4][3] = g_229) | l_983) || (safe_sub_func_int16_t_s_s((safe_mod_func_uint8_t_u_u((safe_mul_func_int16_t_s_s((g_18 = (safe_add_func_uint8_t_u_u(g_92, ((g_910[3] = (safe_sub_func_int32_t_s_s(((l_983 >= l_995) > (l_984[4][3] = ((p_35 <= ((-1L) && ((safe_sub_func_uint8_t_u_u(l_995, p_34)) < g_336))) == 4294967295UL))), 0x785C3501L))) == p_35)))), 0x1527L)), 0x9DL)), g_760)));
    g_391 = g_269;
    return l_984[7][4];
}







static unsigned short func_36(unsigned p_37, unsigned char p_38, int p_39, unsigned short p_40)
{
    unsigned l_907 = 0xB8E8BEB1L;
    unsigned l_928 = 0x3257EECDL;
    unsigned short l_929 = 65528UL;
    unsigned short l_932 = 0xD52EL;
    int l_937[9] = {0x26172A01L,0x26172A01L,0x26172A01L,0x26172A01L,0x26172A01L,0x26172A01L,0x26172A01L,0x26172A01L,0x26172A01L};
    unsigned short l_944 = 0UL;
    int l_955[9] = {(-1L),0x4765E7BEL,(-1L),0x4765E7BEL,(-1L),0x4765E7BEL,(-1L),0x4765E7BEL,(-1L)};
    int i;
    g_391 = ((safe_add_func_uint32_t_u_u((g_821 <= g_723), (g_200[0][1] == (safe_mul_func_uint8_t_u_u(0x3AL, (l_907 ^ ((safe_sub_func_uint16_t_u_u(((0x60FA48C7L < (g_604[5] | (g_910[3] = g_336))) != 4UL), (-7L))) <= g_92))))))) >= 0xD1533BEDL);
    if ((safe_mul_func_int8_t_s_s(func_41((p_37 | (g_910[3] = l_907))), l_907)))
    {
        unsigned l_915[4] = {0x5A4E367FL,0x5A4E367FL,0x5A4E367FL,0x5A4E367FL};
        int i;
        if ((safe_mod_func_int8_t_s_s(l_915[1], 252UL)))
        {
            return p_39;
        }
        else
        {
            unsigned short l_916 = 0x5F04L;
            return l_916;
        }
    }
    else
    {
        unsigned l_921 = 0xC5FB32A1L;
        int l_927 = 0xCD57EFCCL;
        int l_953 = 0x12A044A2L;
        int l_954 = 0xB7415562L;
        int l_975 = 0x83EDAF59L;
        g_426 = ((safe_add_func_int8_t_s_s(((l_907 | p_40) ^ l_907), (safe_sub_func_int32_t_s_s((l_921 = (l_907 | g_229)), (p_38 <= (((p_39 >= g_269) || (safe_mod_func_int16_t_s_s((l_928 = (safe_mul_func_int16_t_s_s((safe_unary_minus_func_int16_t_s(l_927)), g_106))), 0x9246L))) | p_39)))))) | 0x5AL);
        l_929 = g_427;
        l_955[3] = ((+(safe_rshift_func_uint16_t_u_u((l_932 ^ (safe_sub_func_uint8_t_u_u(((((l_937[2] = 0x5290L) < ((safe_lshift_func_uint8_t_u_s((safe_mod_func_uint32_t_u_u((func_52((l_927 = l_932), p_37, ((safe_mod_func_int32_t_s_s(l_944, (((safe_lshift_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s((((l_953 = (safe_rshift_func_int8_t_s_u((safe_sub_func_uint16_t_u_u(7UL, (!(p_39 ^ 1UL)))), 4))) <= (l_954 = 4294967291UL)) ^ p_39), 2)), g_910[0])) & p_39) ^ g_200[1][1]))) < l_932), g_200[1][5], g_723) && g_760), g_316)), 6)) != l_921)) < g_910[7]) > 0UL), 0x05L))), p_37))) ^ g_910[0]);
        if (p_37)
        {
            int l_959 = (-1L);
            int l_960 = 0x0A623352L;
            for (g_304 = 0; (g_304 >= 54); g_304 = safe_add_func_int32_t_s_s(g_304, 1))
            {
                int l_966 = (-1L);
                int l_971 = 0L;
                l_959 = g_958;
                if (g_227)
                {
                    const unsigned char l_963 = 0UL;
                    int l_967[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_967[i] = (-2L);
                    if ((l_937[3] = (l_960 ^ ((safe_div_func_uint16_t_u_u((l_963 && (safe_rshift_func_uint16_t_u_u((l_967[2] = l_966), 13))), l_959)) & g_150))))
                    {
                        unsigned l_968 = 0xC954B186L;
                        int l_969 = 0x3B4F9D7CL;
                        if (l_907)
                            break;
                        l_968 = p_38;
                        l_969 = p_39;
                    }
                    else
                    {
                        unsigned l_972 = 0x2FAF3CA8L;
                        l_967[0] = ((l_971 = (p_40 ^ (g_970 = p_39))) <= 0x4564L);
                        l_967[0] = g_352[4][0][1];
                        l_972 = l_954;
                    }
                }
                else
                {
                    if (g_8[2][1])
                        break;
                }
                l_955[5] = 0xF2E63F5FL;
            }
            l_960 = ((l_975 = (1UL & (l_954 = (safe_mul_func_uint8_t_u_u(p_38, g_426))))) && (((safe_unary_minus_func_int8_t_s((safe_rshift_func_int8_t_s_u((l_937[5] = func_41(g_150)), 2)))) <= g_910[9]) | l_907));
        }
        else
        {
            l_927 = p_39;
        }
    }
    for (g_391 = 1; (g_391 >= 0); g_391 -= 1)
    {
        int i;
        return l_937[(g_391 + 7)];
    }
    return p_37;
}







static char func_41(unsigned p_42)
{
    unsigned short l_46 = 0x18BAL;
    int l_49[5] = {(-1L),(-1L),(-1L),(-1L),(-1L)};
    int l_64 = (-1L);
    int l_881[2];
    int l_882 = (-2L);
    int i;
    for (i = 0; i < 2; i++)
        l_881[i] = 9L;
    l_882 = (((safe_div_func_int16_t_s_s(0x4830L, l_46)) <= (l_881[1] = (l_46 && (safe_rshift_func_uint16_t_u_s(l_46, ((l_49[1] = 0x64L) | ((safe_add_func_uint8_t_u_u((0xBEL | func_52((safe_add_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u((l_64 = ((safe_rshift_func_int8_t_s_s((0xADL && g_8[1][2]), l_46)) ^ l_46)), 0)), p_42)), g_18, g_18, l_46, l_46)), p_42)) ^ l_46))))))) == g_316);
    for (g_231 = 13; (g_231 > 4); g_231 = safe_sub_func_int8_t_s_s(g_231, 1))
    {
        unsigned short l_891 = 0UL;
        int l_892 = 0x7F6806DCL;
        l_49[1] = (~(safe_sub_func_uint8_t_u_u((l_881[1] = g_636), (g_604[1] = (l_892 = (l_49[4] <= (l_891 = (safe_div_func_int32_t_s_s((-1L), (safe_rshift_func_uint8_t_u_s(0x7CL, 6)))))))))));
        if (p_42)
            break;
        g_426 = g_427;
    }
    for (g_231 = 0; (g_231 >= (-26)); --g_231)
    {
        return p_42;
    }
    return g_426;
}







static const unsigned char func_52(unsigned p_53, unsigned p_54, unsigned p_55, short p_56, unsigned p_57)
{
    short l_369 = 0x9423L;
    int l_392 = 0x4657B57FL;
    unsigned short l_437 = 0x95F0L;
    unsigned char l_501 = 0x88L;
    short l_567 = 0x61D6L;
    unsigned char l_568 = 0x8BL;
    int l_667 = 0xA81BC29BL;
    unsigned l_697 = 4294967295UL;
    unsigned l_742 = 1UL;
    unsigned short l_880 = 2UL;
    if (g_28)
    {
        int l_67[2];
        int l_373 = 0x7B4985C6L;
        int l_436[3][5][3] = {{{0L,0xF460535FL,0L},{0L,(-9L),0xF460535FL},{(-9L),0L,0L},{0xF460535FL,0L,7L},{0x5EEBCE1EL,(-9L),0xEF499A69L}},{{0xF460535FL,0xF460535FL,0xEF499A69L},{(-9L),0x5EEBCE1EL,7L},{0L,(-9L),7L},{7L,0x5EEBCE1EL,(-9L)},{0x5EEBCE1EL,7L,7L}},{{(-9L),7L,0xF460535FL},{0xEF499A69L,0x5EEBCE1EL,0xC1848965L},{(-9L),(-9L),0xC1848965L},{0x5EEBCE1EL,0xEF499A69L,0xF460535FL},{7L,(-9L),7L}}};
        short l_637 = 0xA674L;
        short l_684 = 0L;
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_67[i] = 0xAF36EAF0L;
        if (g_8[1][2])
        {
            unsigned l_351 = 0UL;
            unsigned l_370 = 0x3A55AB99L;
            int l_401 = 0x5BDD39E8L;
            unsigned l_476[3];
            int l_491 = 0xFE8E1BFBL;
            int l_513[6] = {0xDDACA1B0L,0x7F0132B5L,0xDDACA1B0L,0xDDACA1B0L,0x7F0132B5L,0xDDACA1B0L};
            char l_520 = 0x4EL;
            unsigned char l_554[10][6][2] = {{{0xDCL,0xC6L},{0x4BL,0xDCL},{0UL,0UL},{0x66L,0xFBL},{0x4BL,7UL},{0xFBL,0xC6L}},{{0xA2L,0xFBL},{0UL,0x66L},{0UL,0xFBL},{0xA2L,0xC6L},{0xFBL,7UL},{0x4BL,0xFBL}},{{0x66L,0UL},{0UL,0xDCL},{0x4BL,0xC6L},{0xDCL,0xC6L},{0x4BL,0xDCL},{0UL,0UL}},{{0x66L,0xFBL},{0x4BL,7UL},{0xFBL,0xC6L},{0xA2L,0xFBL},{0UL,0x66L},{0UL,0xFBL}},{{0xA2L,0xC6L},{0xFBL,7UL},{0x4BL,0xFBL},{0x66L,0UL},{0UL,0xDCL},{0x4BL,0xC6L}},{{0xDCL,0xC6L},{0x4BL,0xDCL},{0UL,0UL},{0xA2L,0xBAL},{0xC6L,0xDCL},{0xBAL,0xFBL}},{{7UL,0xBAL},{0x4BL,0xA2L},{0x4BL,0xBAL},{7UL,0xFBL},{0xBAL,0xDCL},{0xC6L,0xBAL}},{{0xA2L,0x4BL},{0x4BL,0xCEL},{0xC6L,0xFBL},{0xCEL,0xFBL},{0xC6L,0xCEL},{0x4BL,0x4BL}},{{0xA2L,0xBAL},{0xC6L,0xDCL},{0xBAL,0xFBL},{7UL,0xBAL},{0x4BL,0xA2L},{0x4BL,0xBAL}},{{7UL,0xFBL},{0xBAL,0xDCL},{0xC6L,0xBAL},{0xA2L,0x4BL},{0x4BL,0xCEL},{0xC6L,0xFBL}}};
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_476[i] = 0x3050BCC9L;
            for (p_53 = 10; (p_53 > 14); ++p_53)
            {
                unsigned l_350 = 0xF1C9D62EL;
                int l_374 = (-1L);
                for (p_56 = 1; (p_56 >= 0); p_56 -= 1)
                {
                    int l_68 = 0xAD04870EL;
                    int i;
                    for (p_54 = 0; (p_54 <= 1); p_54 += 1)
                    {
                        int i;
                        if (l_67[p_56])
                            break;
                        if (l_68)
                            continue;
                        l_67[p_54] = l_67[0];
                    }
                    if (((((safe_mul_func_uint16_t_u_u((!l_67[p_56]), 65530UL)) || g_8[2][1]) <= (l_67[p_56] <= func_73(g_28))) || (g_352[5][0][1] = ((p_57 = (l_351 = (safe_rshift_func_int16_t_s_u((-9L), l_350)))) == p_54))))
                    {
                        unsigned l_371 = 0xB3D6E37FL;
                        unsigned l_372 = 1UL;
                        l_374 = (0xE05EL >= (safe_mod_func_int8_t_s_s((1UL <= ((safe_sub_func_int32_t_s_s(func_73((safe_rshift_func_uint16_t_u_u((l_67[p_56] = (func_73(p_56) <= g_28)), 9))), (4294967289UL < (!(safe_lshift_func_int16_t_s_u((safe_mod_func_uint32_t_u_u((~((((safe_mul_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((((-1L) == ((((g_352[5][0][1] = (g_352[5][0][1] | g_28)) || l_369) == 3UL) & l_370)) <= g_8[2][1]), g_28)), l_371)) || l_372) == l_373) >= p_53)), p_54)), p_56)))))) < l_350)), p_57)));
                        if (l_67[1])
                            break;
                        l_392 = ((safe_mul_func_int8_t_s_s(((g_391 = (g_150 = (safe_sub_func_int16_t_s_s(l_68, (p_53 || ((safe_mod_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u((safe_mul_func_int16_t_s_s(g_106, g_150)), (g_352[5][1][0] = (safe_add_func_int16_t_s_s((((safe_mul_func_uint16_t_u_u(g_150, (g_229 <= (65532UL <= g_200[0][1])))) == p_55) > 0x9460L), g_263))))), l_374)), 248UL)) >= g_336)))))) | 0x457CL), l_372)) <= g_304);
                        l_374 = 0x8B369BE1L;
                    }
                    else
                    {
                        int l_393 = 0L;
                        l_401 = (l_393 < (p_57 ^ (func_73(g_229) && (safe_div_func_uint8_t_u_u((((safe_mul_func_uint8_t_u_u(((safe_unary_minus_func_uint16_t_u(l_370)) ^ g_263), ((g_8[2][1] && g_269) > ((safe_mod_func_int8_t_s_s(p_55, 1L)) ^ p_54)))) || 65529UL) != g_231), g_227)))));
                        l_374 = (((l_393 & (safe_rshift_func_uint16_t_u_u(p_56, 3))) && ((-1L) == (l_392 | g_200[0][3]))) < (-9L));
                    }
                    for (p_55 = 0; (p_55 <= 1); p_55 += 1)
                    {
                        int i, j, k;
                        l_67[p_55] = g_352[(p_55 + 1)][p_56][p_56];
                        g_92 = (safe_div_func_int16_t_s_s((safe_rshift_func_int8_t_s_u((safe_add_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s(((safe_add_func_uint32_t_u_u((5UL == g_352[(p_55 + 4)][p_55][p_55]), ((safe_add_func_uint8_t_u_u((g_200[p_55][(p_55 + 4)] || (((safe_div_func_int16_t_s_s((safe_add_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u(((safe_mod_func_uint8_t_u_u((g_427 = (l_392 = (g_200[p_56][(p_55 + 3)] & (g_426 = (safe_mod_func_int8_t_s_s(g_92, 0x75L)))))), l_68)) <= (l_67[p_56] = 1L)), 5)), g_316)), 1L)) ^ g_150) >= g_269)), g_200[0][1])) != g_8[2][2]))) | 0xFB55L), 3)), (-1L))), p_53)), g_304));
                        g_426 = (safe_add_func_int32_t_s_s((l_401 = (+func_73((l_392 = (safe_mod_func_uint8_t_u_u((((l_373 != func_73(p_54)) != (safe_sub_func_int32_t_s_s(p_55, (safe_mod_func_uint32_t_u_u((l_351 != l_436[2][4][0]), g_426))))) | l_436[2][1][2]), l_374)))))), l_437));
                    }
                    g_92 = g_200[0][1];
                }
                for (l_350 = 0; (l_350 > 47); l_350 = safe_add_func_int16_t_s_s(l_350, 8))
                {
                    int l_446 = (-1L);
                    int l_457 = 0x65BF541DL;
                    short l_500 = 1L;
                    g_391 = (~((((safe_lshift_func_int16_t_s_u(g_269, 12)) != g_269) != ((p_57 || (l_373 > g_92)) <= p_55)) & (l_67[1] && (~(((l_392 = p_57) < 0xAF473722L) || (-10L))))));
                    if (((0x477DL <= ((safe_mul_func_int16_t_s_s(((safe_lshift_func_int8_t_s_u(p_56, (l_446 = (l_392 = (l_436[0][0][1] ^ g_231))))) < (safe_add_func_int8_t_s_s(((-1L) < (safe_mod_func_uint32_t_u_u((safe_div_func_int32_t_s_s(p_55, (0x835EFA3FL | ((-10L) | (safe_mod_func_uint16_t_u_u(p_56, 1L)))))), p_57))), 255UL))), l_369)) <= l_457)) < 4L))
                    {
                        l_373 = (l_457 = ((safe_sub_func_int32_t_s_s((((((((251UL & (safe_mul_func_uint16_t_u_u((l_436[0][2][0] = 0xD657L), l_67[1]))) ^ func_73(p_55)) | ((0x80L ^ (safe_sub_func_uint8_t_u_u(g_427, (safe_rshift_func_int8_t_s_s((safe_div_func_int32_t_s_s((0xD753L ^ p_53), l_374)), p_53))))) == g_352[5][0][1])) & 9L) > 0x88L) != 0x19L) != l_350), 8UL)) | 4UL));
                        if (g_229)
                            break;
                        l_392 = (func_73((l_401 = (l_67[0] = (safe_mod_func_int16_t_s_s((func_73(p_57) ^ g_427), g_316))))) | (p_53 < p_53));
                    }
                    else
                    {
                        l_446 = (safe_add_func_uint32_t_u_u(func_73(l_446), (safe_mul_func_uint8_t_u_u((((safe_mod_func_uint32_t_u_u(l_476[1], (safe_rshift_func_uint16_t_u_s(((((0x7DL != 250UL) ^ (safe_lshift_func_int16_t_s_u(0xD540L, 0))) != (l_374 = (l_436[0][3][0] | ((safe_rshift_func_uint8_t_u_s(((safe_lshift_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s(((((g_427 <= g_427) == g_352[4][1][1]) ^ g_391) < 0x5DL), 7)), 12)) != g_427), g_391)) >= p_55)))) && g_316), 9)))) > 255UL) || 0x086CL), l_392))));
                    }
                    if (p_56)
                        continue;
                    g_336 = (g_92 = (((l_401 = l_350) >= (!(l_369 >= (g_427 || (l_436[2][1][0] ^ ((safe_add_func_int16_t_s_s(0x93D3L, (safe_sub_func_uint8_t_u_u((l_491 = 0xC4L), ((safe_add_func_uint32_t_u_u((safe_mod_func_int32_t_s_s((((safe_mod_func_int8_t_s_s(((safe_mod_func_int8_t_s_s((0xE1C3L ^ (l_500 = (4L <= 0UL))), p_54)) ^ g_336), g_28)) | p_55) <= p_57), 0xE41BF4CAL)), l_350)) != p_57))))) | 0x4BA79364L)))))) <= g_28));
                }
                g_92 = l_501;
            }
            for (l_392 = 0; (l_392 >= 14); l_392++)
            {
                char l_504 = 0x26L;
                int l_505 = (-7L);
                unsigned short l_512 = 8UL;
                if (((func_73(g_28) > ((g_391 <= l_504) != (l_505 = (g_352[4][1][0] > p_54)))) || ((safe_add_func_uint16_t_u_u((g_150 = l_437), (l_505 & ((safe_sub_func_int32_t_s_s(0xC19D763DL, 0x76D4718CL)) != l_504)))) || l_512)))
                {
                    l_505 = g_150;
                    return g_229;
                }
                else
                {
                    if (g_426)
                        break;
                    return p_53;
                }
            }
            if (l_351)
            {
                const int l_521 = 0x11F597F7L;
                int l_522 = 0x94426EC2L;
                l_373 = (p_57 >= l_513[1]);
                l_373 = 0x7848C3DFL;
                g_391 = (safe_mul_func_uint16_t_u_u((l_522 = ((safe_mul_func_uint16_t_u_u(func_73((safe_add_func_int16_t_s_s(l_520, func_73(l_373)))), (l_436[2][0][0] = (p_57 < (0L < g_8[2][1]))))) | (((((~l_521) <= g_8[2][0]) ^ g_8[2][1]) > 0x6040L) <= 1L))), g_352[5][0][1]));
                g_391 = 0x89DF86A6L;
            }
            else
            {
                char l_527 = 0x44L;
                int l_528 = 0L;
                unsigned l_545 = 0x796625D7L;
                const short l_553 = (-1L);
                for (g_427 = 0; (g_427 > (-6)); g_427 = safe_sub_func_uint32_t_u_u(g_427, 9))
                {
                    l_436[2][4][0] = p_53;
                }
                l_528 = (safe_rshift_func_uint8_t_u_s(p_55, (l_527 = func_73(l_437))));
                if (l_351)
                {
                    char l_531 = 0xA4L;
                    int l_541 = 0xAAFE9774L;
                    for (l_437 = (-27); (l_437 <= 12); l_437++)
                    {
                        unsigned char l_532 = 0xDAL;
                        g_426 = p_56;
                        l_531 = (g_92 = 0xF0D0D283L);
                        l_532 = (~4L);
                    }
                    if (((+(g_316 && (safe_lshift_func_int8_t_s_u(((g_200[0][5] ^ (g_92 || (g_304 || (safe_unary_minus_func_int8_t_s(g_391))))) > (g_427 = (safe_rshift_func_int16_t_s_u((4294967295UL == l_436[2][4][0]), 7)))), 0)))) && p_57))
                    {
                        g_391 = 0x1B8BC6B3L;
                    }
                    else
                    {
                        g_92 = (safe_mod_func_uint8_t_u_u((2UL && 0xBDE05127L), (-1L)));
                        l_541 = (safe_unary_minus_func_uint32_t_u(((+l_528) < 0xFA281651L)));
                    }
                }
                else
                {
                    unsigned char l_544 = 0x80L;
                    short l_552[7] = {(-10L),(-10L),(-10L),(-10L),(-10L),(-10L),(-10L)};
                    int i;
                    for (l_370 = 0; (l_370 <= 1); l_370 += 1)
                    {
                        int i;
                        return l_513[(l_370 + 3)];
                    }
                    for (l_351 = 0; (l_351 < 12); l_351 = safe_add_func_int32_t_s_s(l_351, 6))
                    {
                        l_544 = g_316;
                        l_67[0] = func_73((l_392 = 0UL));
                    }
                    g_426 = (((((+(func_73((!(l_528 = (g_352[4][0][1] == (((l_436[0][1][2] <= (g_427 != (((l_545 = 0x1BL) && 0xC3L) || (safe_rshift_func_uint8_t_u_s(1UL, (func_73(l_527) < ((safe_lshift_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s(((l_544 <= 65528UL) > g_427), l_552[1])), 7)) > 0x52L))))))) || (-1L)) >= l_528))))) & 65535UL)) != l_553) == g_352[3][1][1]) | p_57) && l_554[3][4][1]);
                    if (l_544)
                    {
                        int l_569 = 0x569543AEL;
                        int l_570 = 0x9498F74CL;
                        l_392 = (l_570 = ((safe_rshift_func_uint16_t_u_s(((g_336 = (safe_div_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s(l_392, (safe_sub_func_uint8_t_u_u(((((l_569 = ((safe_lshift_func_uint8_t_u_u(p_55, 7)) > (l_491 = ((3L | (l_401 = (safe_add_func_int16_t_s_s(g_18, (p_56 <= l_567))))) <= ((p_54 || 0xF99FL) ^ (l_568 || g_8[2][1])))))) == l_528) > p_57) == p_56), p_54)))), g_92))) <= (-1L)), l_351)) & p_54));
                        l_392 = g_263;
                    }
                    else
                    {
                        g_336 = l_552[0];
                        l_436[2][4][0] = ((safe_lshift_func_uint8_t_u_s((safe_add_func_int8_t_s_s(g_150, 1L)), 5)) || (safe_sub_func_uint16_t_u_u(l_392, p_53)));
                    }
                }
                for (p_54 = 0; (p_54 <= 1); p_54 += 1)
                {
                    int l_577 = 0x1CC0EF0AL;
                    for (g_84 = 0; (g_84 <= 2); g_84 += 1)
                    {
                        l_528 = 2L;
                    }
                    l_577 = 7L;
                    for (g_227 = 0; (g_227 <= 2); g_227 += 1)
                    {
                        int i;
                        g_391 = l_476[g_227];
                        l_528 = l_513[(g_227 + 1)];
                    }
                    for (g_150 = 0; (g_150 <= 2); g_150 += 1)
                    {
                        int i;
                        return l_476[(p_54 + 1)];
                    }
                }
            }
            l_392 = ((l_401 = (safe_add_func_int16_t_s_s(l_567, ((p_54 & func_73((8UL < ((((safe_lshift_func_uint16_t_u_u(((safe_div_func_uint16_t_u_u((safe_div_func_int16_t_s_s((((l_501 || l_568) != p_53) > 0x04A2L), (safe_add_func_int32_t_s_s(func_73((((safe_rshift_func_int8_t_s_s((p_53 & (safe_lshift_func_uint8_t_u_u((l_373 >= 9UL), g_316))), g_8[2][0])) ^ g_316) || 0x4FL)), 0xFC7C2D0DL)))), 0x689AL)) && l_351), 13)) ^ l_67[1]) <= l_568) > 2L)))) < 4294967295UL)))) | (-1L));
        }
        else
        {
            unsigned char l_607 = 0xF0L;
            int l_660 = 0x15ED1D40L;
            l_373 = (l_607 = ((((func_73((g_84 <= p_54)) <= (safe_div_func_int32_t_s_s((safe_lshift_func_int16_t_s_s((safe_mod_func_int32_t_s_s(g_8[2][1], (safe_mod_func_int32_t_s_s(((g_604[5] = 65528UL) >= (l_392 > (l_501 > ((safe_lshift_func_int16_t_s_u(g_28, 8)) & g_352[4][1][0])))), g_427)))), p_57)), g_352[5][0][1]))) & g_352[2][1][0]) && p_57) && 0UL));
            for (l_437 = 0; (l_437 <= 1); l_437 += 1)
            {
                int l_672[3][10][6] = {{{0xB84ED382L,0xA20E88B2L,1L,0x6497466DL,0x29B417A8L,0x182EAF06L},{(-2L),1L,(-1L),0x6F308C83L,4L,0xBDADB449L},{0xF52B307CL,0L,0xC9533D40L,0x29B417A8L,0x37BB82C3L,0xB84ED382L},{0L,0x5834111CL,0L,4L,(-4L),(-1L)},{0xE99A5719L,0x6DCDBC2BL,0x4C8F8148L,(-1L),(-1L),0xC9533D40L},{0xA20E88B2L,(-1L),0x37BB82C3L,0L,0x80E45A62L,(-1L)},{1L,0x9E38258AL,(-2L),0x6497466DL,0L,0xE9FCBBCAL},{0x6DCDBC2BL,4L,(-7L),0xC9533D40L,(-4L),4L},{0xB4AFF16DL,0x6A0B1CDEL,4L,1L,0x5834111CL,0x80E45A62L},{(-1L),0xF52B307CL,0xD20586ADL,0xF52B307CL,(-1L),0x5834111CL}},{{(-1L),1L,(-1L),(-4L),(-1L),(-1L)},{0L,(-2L),0xF52B307CL,1L,0L,(-1L)},{(-4L),(-1L),(-1L),(-1L),0xC9533D40L,0x5834111CL},{0L,(-4L),0xD20586ADL,0x6DCDBC2BL,0x37BB82C3L,0x80E45A62L},{0x98C7A5CBL,3L,4L,0L,0x80E45A62L,4L},{(-1L),(-1L),(-7L),0x98C7A5CBL,0xD20586ADL,0xE9FCBBCAL},{(-1L),0L,(-2L),1L,(-7L),(-1L)},{(-1L),0x29B417A8L,0x0CA3918EL,0xE9FCBBCAL,(-1L),0xB1558AA7L},{1L,0L,(-1L),0x6F308C83L,(-1L),0x9E38258AL},{0xB84ED382L,0xB1558AA7L,0xE99A5719L,(-1L),(-1L),(-7L)}},{{4L,(-1L),0xB1558AA7L,0xFC8AFED7L,0x6F308C83L,(-4L)},{(-1L),0xB838E247L,1L,1L,0L,(-4L)},{0L,0L,0xB4AFF16DL,0L,0xBDADB449L,0x58E5EC7CL},{(-1L),0xB1558AA7L,0x5834111CL,0xB0239231L,(-1L),0xB838E247L},{(-1L),0x92EF5E45L,0xB0239231L,0L,0xC9533D40L,0x80E45A62L},{0L,0xBDADB449L,0x6497466DL,0xA8A067FCL,(-1L),0xF52B307CL},{(-4L),0x37BB82C3L,(-1L),1L,0x6497466DL,0xAAAD8218L},{3L,0xA8A067FCL,0L,4L,(-1L),0L},{0xC9533D40L,0x6A0B1CDEL,(-1L),0xB4AFF16DL,(-1L),(-4L)},{0xA8A067FCL,(-1L),1L,1L,0x6F308C83L,0xE9FCBBCAL}}};
                int i, j, k;
                l_67[l_437] = ((safe_lshift_func_uint8_t_u_u(p_53, 3)) || p_54);
                for (l_567 = 0; (l_567 <= 1); l_567 += 1)
                {
                    int l_674 = (-8L);
                    int i, j;
                    if (g_200[l_437][(l_567 + 3)])
                    {
                        char l_650 = 0x54L;
                        int i;
                        if (g_28)
                            break;
                        l_67[l_437] = ((safe_lshift_func_int8_t_s_s(0xCAL, (safe_rshift_func_uint8_t_u_s((g_84 || p_56), ((((safe_sub_func_uint16_t_u_u(g_269, (l_67[0] ^ (l_67[l_437] > (safe_div_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u((+p_55), g_352[5][0][1])), (safe_mul_func_int8_t_s_s((safe_mul_func_int8_t_s_s(((safe_lshift_func_int16_t_s_s(((((safe_sub_func_int32_t_s_s((safe_lshift_func_int8_t_s_u(((g_636 = (safe_div_func_int8_t_s_s((safe_add_func_uint8_t_u_u(((l_369 < p_56) >= l_607), 0x08L)), g_391))) | g_227), 7)), l_568)) < 0xF2L) > p_53) & 0x2EL), l_67[l_437])) <= (-1L)), l_607)), g_227)))))))) < l_67[l_437]) != 0x1A9FCB1AL) < l_607))))) == g_28);
                        l_637 = (g_391 = (g_426 | p_55));
                        l_650 = (((g_391 = (safe_mul_func_uint8_t_u_u((safe_div_func_int16_t_s_s((safe_add_func_uint8_t_u_u(((p_56 = func_73((g_231 <= 4294967295UL))) & (safe_add_func_uint32_t_u_u((p_54 & (l_67[l_437] = ((l_392 = (safe_mul_func_uint16_t_u_u((l_567 == l_369), 0xC5C7L))) <= g_604[4]))), (safe_div_func_int8_t_s_s(0xBAL, p_57))))), 1L)), p_54)), g_427))) & g_427) < l_373);
                    }
                    else
                    {
                        g_336 = p_54;
                        l_392 = (g_391 = (safe_add_func_uint16_t_u_u(0x97D9L, (safe_mul_func_int16_t_s_s((l_67[l_437] = func_73(((-1L) || (((safe_add_func_int16_t_s_s(0x89DCL, g_263)) && p_55) < (l_67[l_437] >= (g_316 & g_8[2][1])))))), 0x8DE9L)))));
                        if (g_200[l_437][(l_567 + 3)])
                            break;
                    }
                    for (p_54 = 0; (p_54 <= 1); p_54 += 1)
                    {
                        short l_659 = 0xD64DL;
                        unsigned char l_681[7] = {0x65L,0x65L,0xD4L,0x65L,0x65L,0xD4L,0x65L};
                        int l_689 = 0L;
                        int i;
                        g_336 = (-10L);
                        g_391 = (safe_sub_func_uint8_t_u_u((g_426 > (((g_336 > l_659) > (l_660 = (l_67[1] = (l_392 = p_57)))) != (safe_add_func_int8_t_s_s((l_672[2][0][0] = (safe_div_func_int16_t_s_s(((safe_mod_func_uint16_t_u_u(l_667, (safe_rshift_func_uint16_t_u_s(((safe_sub_func_uint16_t_u_u(p_56, (-8L))) | 0x806D19C9L), g_316)))) < 0UL), 0x7629L))), g_84)))), g_391));
                        l_674 = (safe_unary_minus_func_uint16_t_u(func_73((0xF22400E7L <= g_84))));
                        l_674 = (safe_div_func_int32_t_s_s((safe_div_func_uint8_t_u_u(((l_667 = (p_56 = ((safe_lshift_func_uint16_t_u_s(((l_437 >= ((g_84 ^ l_681[2]) <= (l_684 = (safe_mod_func_uint16_t_u_u(1UL, l_436[2][4][0]))))) != l_607), 7)) == (safe_sub_func_uint16_t_u_u(l_660, 0xCFADL))))) && (safe_div_func_uint32_t_u_u((((l_689 = func_73(g_352[4][1][1])) >= 0x3B0BL) ^ g_636), g_8[3][0]))), l_659)), p_54));
                    }
                }
                for (g_229 = 0; (g_229 <= 1); g_229 += 1)
                {
                    unsigned l_690[9];
                    int i;
                    for (i = 0; i < 9; i++)
                        l_690[i] = 0x2F65D3B4L;
                    l_660 = (0x9CL == ((l_690[7] <= p_56) == (l_67[1] > (safe_add_func_int32_t_s_s((((safe_sub_func_uint16_t_u_u(((safe_mul_func_int8_t_s_s((0xE2L > 0xA8L), g_263)) >= (l_667 = (!((g_92 ^ (g_391 < (-1L))) | l_67[1])))), 0xC7A9L)) && (-3L)) > 0xEE1AL), l_369)))));
                    for (g_263 = 0; (g_263 <= 1); g_263 += 1)
                    {
                        l_67[l_437] = (g_92 = 0L);
                        g_391 = (l_697 = g_8[2][1]);
                    }
                }
            }
        }
        g_92 = g_263;
        l_436[2][2][1] = (g_269 && ((safe_div_func_int16_t_s_s((safe_add_func_uint16_t_u_u((safe_div_func_int16_t_s_s((((g_604[5] != 0L) && g_352[5][1][0]) ^ (safe_mul_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u(0L, 5)), (safe_add_func_int32_t_s_s((p_55 != l_373), (g_391 > (safe_lshift_func_int16_t_s_s((func_73(p_57) == (-2L)), 0)))))))), g_352[1][1][0])), l_392)), p_57)) & p_54));
    }
    else
    {
        const unsigned short l_714 = 0x2568L;
        int l_724 = 1L;
        unsigned l_740 = 4294967295UL;
        unsigned short l_774 = 0xE7DCL;
        int l_780 = 1L;
        int l_793 = 0x7294365BL;
        if (func_73((l_392 = func_73(p_54))))
        {
            int l_721 = 1L;
            int l_722 = 8L;
            unsigned l_725 = 4294967294UL;
            unsigned short l_741 = 0x1E59L;
            const char l_743 = 0x47L;
            l_392 = ((p_53 < ((g_150 = (safe_rshift_func_uint16_t_u_s(l_714, 9))) || g_84)) && ((safe_lshift_func_int16_t_s_s((l_724 = (((g_352[5][0][1] != l_667) || (safe_lshift_func_int16_t_s_u(g_426, ((safe_add_func_int32_t_s_s((l_722 = l_721), 0x11C61DE6L)) | p_56)))) > g_723)), p_53)) != g_150));
            l_722 = ((g_604[5] | l_725) != l_697);
            g_336 = (safe_mul_func_int8_t_s_s((safe_sub_func_int16_t_s_s((((l_722 = p_55) == (g_18 != (g_352[5][0][1] >= (safe_lshift_func_int16_t_s_u((((g_723 || (safe_mod_func_int32_t_s_s((safe_div_func_int8_t_s_s(l_714, l_724)), 0x5D61D811L))) >= ((safe_lshift_func_int8_t_s_u(((l_567 & (l_740 = (p_53 || p_53))) <= l_741), 3)) >= l_725)) & l_742), g_231))))) > 0xB7L), l_743)), p_55));
            for (l_740 = 23; (l_740 < 9); l_740 = safe_sub_func_int8_t_s_s(l_740, 2))
            {
                short l_758[9][1][8] = {{{0L,(-1L),(-1L),0L,0L,(-1L),(-1L),0L}},{{0L,(-1L),(-1L),0L,0L,(-1L),(-1L),0L}},{{0L,(-1L),(-1L),0L,0L,(-1L),(-1L),0L}},{{0L,(-1L),(-1L),0L,0L,(-1L),(-1L),0L}},{{0L,(-1L),(-1L),0L,0L,(-1L),(-1L),0L}},{{0L,(-1L),(-1L),0L,0L,(-1L),(-1L),0L}},{{0L,(-1L),(-1L),0L,0L,(-1L),(-1L),0L}},{{0L,(-1L),(-1L),0L,0L,(-1L),(-1L),0L}},{{0L,(-1L),(-1L),0L,0L,(-1L),(-1L),0L}}};
                int i, j, k;
                for (l_741 = (-23); (l_741 < 27); l_741 = safe_add_func_uint16_t_u_u(l_741, 8))
                {
                    const int l_750[4][4][7] = {{{0x956FA709L,0x64B4F9E3L,0x53641241L,0x956FA709L,0x53641241L,0x64B4F9E3L,0x956FA709L},{7L,(-1L),0x1A599B6EL,0xFBCB5D2FL,(-1L),0xFBCB5D2FL,0x1A599B6EL},{0x956FA709L,0x956FA709L,(-5L),(-1L),0x61C3EAAEL,(-5L),0x61C3EAAEL},{0x8959F242L,0x1A599B6EL,0x1A599B6EL,0x8959F242L,0xFBCB5D2FL,7L,0x8959F242L}},{{0x91FF2FD1L,0x61C3EAAEL,0x53641241L,0x53641241L,0x61C3EAAEL,0x91FF2FD1L,0x64B4F9E3L},{0xD3FC5F45L,0x8959F242L,(-4L),(-1L),(-1L),(-4L),0x8959F242L},{0x61C3EAAEL,0x64B4F9E3L,0x91FF2FD1L,0x61C3EAAEL,0x53641241L,0x53641241L,0x61C3EAAEL},{7L,0x8959F242L,7L,0xFBCB5D2FL,0x8959F242L,0x1A599B6EL,0x1A599B6EL}},{{(-1L),0x61C3EAAEL,(-5L),0x61C3EAAEL,(-1L),(-5L),0x61C3EAAEL},{0xD3FC5F45L,7L,0x1A599B6EL,0xD3FC5F45L,0x1A599B6EL,7L,0xD3FC5F45L},{0x53641241L,0x61C3EAAEL,0x91FF2FD1L,0x64B4F9E3L,0x61C3EAAEL,0x64B4F9E3L,0x91FF2FD1L},{0xD3FC5F45L,0xD3FC5F45L,(-1L),(-1L),0x8959F242L,(-1L),0x8959F242L}},{{0x956FA709L,0x91FF2FD1L,0x91FF2FD1L,0x956FA709L,0x64B4F9E3L,0x53641241L,0x956FA709L},{0xFBCB5D2FL,0x8959F242L,0x1A599B6EL,0x1A599B6EL,0x8959F242L,0xFBCB5D2FL,7L},{(-1L),0x956FA709L,0xA8DF4357L,0x61C3EAAEL,0x61C3EAAEL,0xA8DF4357L,0x956FA709L},{0x8959F242L,7L,0xFBCB5D2FL,0x8959F242L,0x1A599B6EL,0x1A599B6EL,0x8959F242L}}};
                    int l_759 = 0x1A1D421CL;
                    int i, j, k;
                    l_392 = ((safe_sub_func_int16_t_s_s((l_750[0][0][3] > p_57), l_567)) <= (l_759 = ((safe_mod_func_int8_t_s_s((g_426 != (p_53 = (~(safe_sub_func_uint8_t_u_u((func_73(l_724) > (l_758[6][0][0] = (((safe_unary_minus_func_int16_t_s((safe_sub_func_int32_t_s_s(l_392, g_352[5][0][1])))) ^ 0x89BFL) <= p_57))), g_426))))), 1UL)) > 0x3936L)));
                    if (p_54)
                        continue;
                }
                g_426 = func_73(((g_760 = (1UL & 0xEAL)) > func_73(g_352[3][0][1])));
                for (l_722 = 0; (l_722 > 4); l_722 = safe_add_func_int32_t_s_s(l_722, 6))
                {
                    if (l_741)
                    {
                        g_426 = (safe_sub_func_int8_t_s_s(g_427, l_725));
                        if (g_8[0][0])
                            break;
                    }
                    else
                    {
                        return l_722;
                    }
                }
            }
        }
        else
        {
            char l_773 = 0L;
            short l_775 = (-1L);
            int l_776[1];
            int l_777 = 0xA473832DL;
            int i;
            for (i = 0; i < 1; i++)
                l_776[i] = 0x28582944L;
            l_667 = 0xDC82A3BDL;
            l_777 = ((safe_lshift_func_uint8_t_u_s(((safe_div_func_int8_t_s_s((safe_mul_func_uint16_t_u_u(((g_8[3][2] != (safe_lshift_func_int16_t_s_u(l_773, l_774))) > func_73(g_92)), (g_723 = (((((l_773 == g_316) || l_775) & l_724) && p_57) < l_776[0])))), p_55)) & p_56), 4)) | 0xF98A702BL);
        }
        g_426 = g_336;
        l_793 = (safe_mul_func_uint16_t_u_u(l_501, (l_780 || (l_724 || (l_724 = ((safe_sub_func_uint32_t_u_u((func_73((((safe_mul_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u((safe_sub_func_uint8_t_u_u((l_667 = g_200[0][1]), (l_392 = p_55))), 15)), (safe_mul_func_int16_t_s_s(g_636, (safe_sub_func_uint8_t_u_u(((-1L) >= g_604[5]), (p_55 & l_369))))))) != 255UL) && p_55)) ^ 0x300FEEB2L), p_53)) & l_568))))));
    }
    if ((func_73(l_742) && g_304))
    {
        unsigned short l_818 = 65531UL;
        unsigned l_819[5] = {1UL,1UL,1UL,1UL,1UL};
        int i;
        for (g_28 = 0; (g_28 <= 1); g_28 = safe_add_func_int8_t_s_s(g_28, 1))
        {
            unsigned l_796 = 0x4E050973L;
            unsigned l_813 = 0x42E55544L;
            g_426 = l_796;
            if ((safe_lshift_func_int16_t_s_u((safe_add_func_int8_t_s_s(((safe_rshift_func_uint16_t_u_s((((safe_lshift_func_uint8_t_u_s(((safe_add_func_uint16_t_u_u((0x36788746L < 0xA3A06458L), 0x5829L)) & (safe_add_func_int8_t_s_s((safe_lshift_func_int16_t_s_s(((+0x7A56L) > (safe_add_func_int16_t_s_s((g_231 = (l_813 = p_55)), g_269))), 3)), (0x56L <= (safe_sub_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_s((g_150 = ((g_723 & (l_818 <= (-7L))) != l_819[2])), l_818)), 0x66635514L)))))), g_263)) || p_55) && l_813), 6)) | p_57), g_229)), l_796)))
            {
                short l_820 = 0x27CEL;
                l_820 = g_8[2][2];
                if (g_821)
                    continue;
                g_426 = g_84;
            }
            else
            {
                return p_53;
            }
        }
        return g_84;
    }
    else
    {
        short l_824 = (-2L);
        unsigned l_831 = 0x6D1893D1L;
        int l_838 = 0xE0BA73ACL;
        g_426 = (safe_add_func_int8_t_s_s(l_697, l_824));
        l_838 = (g_426 = (safe_mul_func_int16_t_s_s(((safe_mod_func_int32_t_s_s((g_391 = (safe_mod_func_uint16_t_u_u(l_824, func_73(((g_304 = (l_831 || (safe_mod_func_uint8_t_u_u(g_92, (safe_lshift_func_uint16_t_u_s(((safe_sub_func_uint8_t_u_u(l_567, (g_84 | ((((l_667 = 1UL) >= g_200[0][1]) && p_54) & l_831)))) >= 0xEAL), l_831)))))) < 0x35F2CA80L))))), (-1L))) & l_838), 2L)));
        l_667 = (safe_sub_func_uint16_t_u_u(((g_841 = (func_73(g_200[1][1]) && 1L)) > (safe_add_func_int16_t_s_s((safe_mod_func_uint16_t_u_u((p_53 > p_55), l_369)), (safe_add_func_uint16_t_u_u((l_838 = (l_392 = ((1L <= (l_437 || (~(~g_8[3][2])))) && 1UL))), 1UL))))), l_568));
    }
    g_841 = (safe_rshift_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u(((safe_add_func_uint32_t_u_u((((safe_mod_func_int8_t_s_s((safe_mul_func_uint16_t_u_u((func_73(((safe_mul_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u(0x2617L, (safe_lshift_func_uint8_t_u_s((safe_lshift_func_int16_t_s_s(0x40AAL, p_56)), ((l_501 == (g_28 ^ (safe_mul_func_int8_t_s_s(0x6DL, (p_57 > (g_760 = ((((safe_mod_func_int16_t_s_s((((safe_add_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u(p_53, 5)), g_229)) > l_568) ^ p_55), p_55)) == l_568) ^ 0xC3L) && g_821))))))) < l_667))))), g_28)) && 0xE06F598CL)) > 0x53277636L), g_391)), 0x3EL)) == l_392) == g_604[5]), l_697)) < p_53), g_426)), l_697));
    l_392 = (g_391 = (safe_mod_func_int8_t_s_s((((safe_sub_func_int32_t_s_s(g_426, func_73((l_667 = 0xB2L)))) < 1L) < (safe_add_func_int8_t_s_s(g_352[4][1][1], l_880))), 7L)));
    return p_55;
}







static int func_73(const unsigned char p_74)
{
    unsigned char l_75[4] = {0x48L,0x48L,0x48L,0x48L};
    int l_83 = (-6L);
    int l_94[9];
    unsigned l_239 = 0x7BB412D5L;
    unsigned l_317 = 0xB233CB23L;
    int i;
    for (i = 0; i < 9; i++)
        l_94[i] = 0x0A263243L;
    for (g_18 = 3; (g_18 >= 0); g_18 -= 1)
    {
        int l_80 = 0x6156CF85L;
        int l_91[9][5][1] = {{{7L},{0x9127F4FEL},{(-5L)},{1L},{1L}},{{(-5L)},{0xB7C5EFF0L},{1L},{0x9127F4FEL},{(-9L)}},{{1L},{1L},{(-9L)},{0x9127F4FEL},{1L}},{{0xB7C5EFF0L},{(-5L)},{1L},{1L},{(-5L)}},{{0x9127F4FEL},{7L},{0x9127F4FEL},{(-5L)},{1L}},{{1L},{(-5L)},{0xB7C5EFF0L},{1L},{0x9127F4FEL}},{{(-9L)},{1L},{1L},{(-9L)},{0x9127F4FEL}},{{1L},{0x10CA98D2L},{1L},{0xB7C5EFF0L},{(-5L)}},{{1L},{7L},{0x581EE2C1L},{7L},{1L}}};
        unsigned short l_95 = 1UL;
        int l_151[5][4] = {{(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L)}};
        int i, j, k;
        g_92 = (l_91[8][4][0] = (safe_mod_func_int32_t_s_s((l_75[g_18] < (safe_div_func_int32_t_s_s(((+(247UL & (l_83 = ((l_80 = (g_18 == 8L)) & (safe_mod_func_uint8_t_u_u(l_75[2], g_8[2][1])))))) || (g_84 = p_74)), g_8[2][1]))), (safe_mul_func_int16_t_s_s((safe_mod_func_uint8_t_u_u((!(safe_rshift_func_uint16_t_u_s((g_28 >= l_75[3]), g_8[2][0]))), 247UL)), 0xD473L)))));
        if (g_92)
        {
            short l_93 = 3L;
            int l_98 = 0x3F75B290L;
            unsigned l_105[1];
            int l_131 = 0xE20030B0L;
            int i;
            for (i = 0; i < 1; i++)
                l_105[i] = 0x884A1846L;
            l_83 = l_93;
            if (l_94[4])
                continue;
            if ((l_93 >= (l_95 = l_80)))
            {
                l_98 = (safe_div_func_int8_t_s_s(g_92, l_93));
                g_92 = 0xBEB92859L;
                return g_28;
            }
            else
            {
                char l_124 = 0x06L;
                int l_125 = 0x6393687EL;
                if (p_74)
                    break;
                l_94[1] = (((l_75[g_18] < ((safe_mod_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u((safe_mul_func_int8_t_s_s(l_83, 0x92L)), 5)), (p_74 & 65528UL))) == ((l_80 < g_18) < (g_106 = ((g_18 <= (l_105[0] & g_92)) || (-1L)))))) && 0x9FE4BF81L) | l_94[4]);
                for (l_98 = 0; (l_98 > (-27)); --l_98)
                {
                    unsigned short l_130[9][6][4] = {{{0xAE7FL,65527UL,1UL,0xABF7L},{6UL,0x429DL,0x498DL,0x1505L},{1UL,0xAE7FL,9UL,9UL},{1UL,1UL,0x498DL,0UL},{6UL,9UL,1UL,0x429DL},{0xAE7FL,65535UL,65529UL,1UL}},{{0xABF7L,65535UL,0xABF7L,0x429DL},{65535UL,9UL,0UL,0UL},{0UL,1UL,0xAE7FL,9UL},{0x1505L,0xAE7FL,0xAE7FL,0x1505L},{0UL,0x429DL,0UL,0xABF7L},{65535UL,65527UL,0xABF7L,0x498DL}},{{0xABF7L,0x498DL,65529UL,0x498DL},{0xAE7FL,65527UL,1UL,0xABF7L},{6UL,0x429DL,0x498DL,0x1505L},{1UL,0xAE7FL,9UL,9UL},{1UL,1UL,6UL,9UL},{65535UL,0x429DL,65529UL,0xAE7FL}},{{65527UL,0xABF7L,0x498DL,65529UL},{0UL,0xABF7L,0UL,0xAE7FL},{0xABF7L,0x429DL,1UL,9UL},{9UL,65529UL,65527UL,0x429DL},{0UL,65527UL,65527UL,0UL},{9UL,0xAE7FL,1UL,0UL}},{{0xABF7L,0x1505L,0UL,6UL},{0UL,6UL,0x498DL,6UL},{65527UL,0x1505L,65529UL,0UL},{65535UL,0xAE7FL,6UL,0UL},{65529UL,65527UL,0x429DL,0x429DL},{65529UL,65529UL,6UL,9UL}},{{65535UL,0x429DL,65529UL,0xAE7FL},{65527UL,0xABF7L,0x498DL,65529UL},{0UL,0xABF7L,0UL,0xAE7FL},{0xABF7L,0x429DL,1UL,9UL},{9UL,65529UL,65527UL,0x429DL},{0UL,65527UL,65527UL,0UL}},{{9UL,0xAE7FL,1UL,0UL},{0xABF7L,0x1505L,0UL,6UL},{0UL,6UL,0x498DL,6UL},{65527UL,0x1505L,65529UL,0UL},{65535UL,0xAE7FL,65535UL,1UL},{0x498DL,0x1505L,0xAE7FL,0xAE7FL}},{{0x498DL,0x498DL,65535UL,0x429DL},{0xABF7L,0xAE7FL,0x498DL,65527UL},{0x1505L,0UL,6UL,0x498DL},{9UL,0UL,9UL,65527UL},{0UL,0xAE7FL,65529UL,0x429DL},{0x429DL,0x498DL,0x1505L,0xAE7FL}},{{1UL,0x1505L,0x1505L,1UL},{0x429DL,65527UL,65529UL,9UL},{0UL,0UL,9UL,65535UL},{9UL,65535UL,6UL,65535UL},{0x1505L,0UL,0x498DL,9UL},{0xABF7L,65527UL,65535UL,1UL}}};
                    int i, j, k;
                    for (l_93 = 0; (l_93 <= 0); l_93 += 1)
                    {
                        int i;
                        g_92 = ((safe_lshift_func_uint8_t_u_u((l_80 = l_105[l_93]), 7)) >= (safe_mul_func_int16_t_s_s(((safe_unary_minus_func_uint32_t_u(0x23651BE0L)) & (safe_add_func_int16_t_s_s(p_74, ((safe_add_func_uint8_t_u_u(248UL, ((safe_sub_func_int32_t_s_s(g_18, p_74)) < (safe_mod_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u(g_18, 8)), (p_74 ^ l_124)))))) && l_105[l_93])))), g_92)));
                        l_125 = p_74;
                        if (p_74)
                            break;
                        g_92 = (l_94[7] = 0xC135D3F9L);
                    }
                    g_92 = (l_125 >= (l_80 = (l_98 == (safe_mod_func_uint8_t_u_u((l_91[8][4][0] = (((safe_lshift_func_uint16_t_u_u((g_92 != l_130[7][0][3]), 14)) || (l_131 = 4294967295UL)) || (safe_sub_func_uint32_t_u_u(((p_74 == g_106) < 0xF542L), l_91[4][0][0])))), p_74)))));
                    g_92 = 0xF3FAEFD0L;
                }
            }
        }
        else
        {
            unsigned char l_136 = 255UL;
            int l_139 = 0L;
            for (g_106 = 15; (g_106 >= 57); g_106 = safe_add_func_uint32_t_u_u(g_106, 2))
            {
                l_136 = 0x56077E59L;
                return l_91[8][4][0];
            }
            l_91[8][4][0] = p_74;
            if ((safe_mul_func_int16_t_s_s((l_94[4] = (l_139 = g_92)), (l_75[0] && (l_136 >= 0x9AE4L)))))
            {
                if (((g_106 || (safe_add_func_uint16_t_u_u((0xBCCAL || g_8[2][1]), 0xF43BL))) != ((safe_lshift_func_int16_t_s_s(0L, (g_92 >= (safe_lshift_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s((safe_rshift_func_int8_t_s_u((!p_74), 2)), 13)), 1))))) <= p_74)))
                {
                    if (g_150)
                        break;
                    g_92 = l_136;
                }
                else
                {
                    if (g_92)
                        break;
                }
                l_151[4][2] = l_139;
                l_139 = p_74;
                for (g_150 = 0; (g_150 != 21); g_150 = safe_add_func_uint16_t_u_u(g_150, 4))
                {
                    return p_74;
                }
            }
            else
            {
                int l_159 = (-9L);
                int l_170 = 0x7FD1935DL;
                for (g_150 = 0; (g_150 != 3); g_150++)
                {
                    unsigned short l_156 = 0x115FL;
                    if (l_156)
                    {
                        l_159 = (safe_rshift_func_int16_t_s_s(g_92, 2));
                        l_91[8][4][0] = (g_18 & l_80);
                        g_92 = ((7UL > (1L ^ 248UL)) > (safe_mul_func_uint8_t_u_u(g_106, (safe_lshift_func_int16_t_s_u((0xE6BEL == (safe_rshift_func_int8_t_s_u(g_150, 2))), g_106)))));
                    }
                    else
                    {
                        l_91[8][4][0] = ((safe_mul_func_uint8_t_u_u(p_74, (safe_sub_func_int8_t_s_s((!l_159), (4UL == 0x62L))))) ^ g_8[3][0]);
                        return g_18;
                    }
                    return g_84;
                }
                g_92 = l_139;
                l_170 = p_74;
                if (l_136)
                    break;
            }
        }
        if (g_8[2][1])
            break;
    }
    if ((g_92 ^ ((safe_rshift_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u(((((safe_mod_func_uint32_t_u_u((safe_unary_minus_func_int32_t_s(((l_75[2] && ((p_74 != (safe_add_func_uint16_t_u_u((p_74 == (safe_lshift_func_uint16_t_u_s(p_74, 4))), p_74))) >= (g_150 = ((safe_mod_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_s((l_94[4] | g_8[0][2]), (safe_rshift_func_int8_t_s_u((safe_add_func_int8_t_s_s((p_74 > (-2L)), g_8[3][0])), g_8[2][1])))), 0x9BB54825L)) && 1UL)))) || g_106))), 8L)) == l_75[2]) || p_74) != l_94[1]), 1)), l_94[4])) == p_74)))
    {
        unsigned l_196[1][10] = {{0x6814FFF4L,0x6814FFF4L,0x6814FFF4L,0x6814FFF4L,0x6814FFF4L,0x6814FFF4L,0x6814FFF4L,0x6814FFF4L,0x6814FFF4L,0x6814FFF4L}};
        int l_272[8][3][1];
        int l_273 = (-7L);
        char l_318 = (-3L);
        int i, j, k;
        for (i = 0; i < 8; i++)
        {
            for (j = 0; j < 3; j++)
            {
                for (k = 0; k < 1; k++)
                    l_272[i][j][k] = 1L;
            }
        }
        for (l_83 = 28; (l_83 != 6); --l_83)
        {
            unsigned l_214 = 0x05CA3757L;
            char l_228 = 1L;
            int l_230 = 0x2CDE1B85L;
            int l_255 = (-1L);
            if (g_18)
            {
                unsigned short l_199 = 0x52E5L;
                int l_232 = 7L;
                if ((((safe_sub_func_int16_t_s_s((((+(l_196[0][4] && 0UL)) <= l_196[0][4]) || ((safe_div_func_int8_t_s_s(p_74, (g_200[0][1] = l_199))) != g_28)), ((0x424D4B57L <= (p_74 | l_199)) ^ 1UL))) > 251UL) || p_74))
                {
                    const unsigned char l_213 = 0x4AL;
                    for (g_150 = 0; (g_150 != 14); g_150++)
                    {
                        short l_225 = 0x6A08L;
                        int l_226 = 0x63019908L;
                        l_232 = (safe_add_func_int16_t_s_s(p_74, (g_231 = (l_230 = (safe_sub_func_uint32_t_u_u(0x8EA141B2L, ((g_229 = (((g_227 = ((safe_mul_func_int8_t_s_s((safe_mul_func_uint16_t_u_u(((l_226 = ((l_94[4] = ((safe_lshift_func_uint16_t_u_u(l_213, (l_214 & (((safe_mul_func_int16_t_s_s((!(safe_lshift_func_int8_t_s_s(g_150, (+((safe_lshift_func_uint16_t_u_u((0xE1E7L || 2L), ((((safe_div_func_int16_t_s_s(0xD79EL, (((safe_mod_func_int16_t_s_s(g_28, (-6L))) | 0xA7L) && l_225))) > 0x0BL) | l_214) || 0x55L))) || 0x3C4AL))))), p_74)) || g_84) & g_18)))) != 65535UL)) | 4UL)) || 0xE7F7L), g_106)), 255UL)) || g_92)) >= l_228) <= 0UL)) && g_150)))))));
                        l_232 = (-7L);
                        return l_230;
                    }
                    g_92 = (safe_sub_func_int16_t_s_s(p_74, ((((safe_add_func_uint32_t_u_u(l_94[4], (l_228 <= ((g_8[2][1] != (safe_mul_func_int8_t_s_s((5UL == ((((((g_92 && g_229) > (!(0x0B16L == l_75[3]))) & 65535UL) == l_214) | 0x2313L) != (-1L))), l_213))) < p_74)))) != 0x8FL) && g_200[0][1]) < (-1L))));
                    l_239 = ((g_150 || 0x74F7L) && p_74);
                }
                else
                {
                    unsigned l_242 = 1UL;
                    l_242 = (safe_lshift_func_uint8_t_u_s(l_232, 2));
                }
                if (l_199)
                {
                    l_94[4] = p_74;
                    l_255 = (g_92 = (safe_add_func_uint8_t_u_u((safe_div_func_int16_t_s_s(((safe_mul_func_int8_t_s_s(0xC4L, g_150)) && ((9UL || l_214) == (safe_add_func_int16_t_s_s((-1L), g_200[0][4])))), p_74)), (((l_230 = (safe_sub_func_uint32_t_u_u((safe_sub_func_int16_t_s_s((-9L), 0xAEC1L)), l_230))) > p_74) < 1UL))));
                    for (g_18 = (-3); (g_18 >= (-26)); g_18--)
                    {
                        g_92 = g_92;
                        return g_227;
                    }
                }
                else
                {
                    unsigned short l_258 = 0xC952L;
                    for (l_255 = 3; (l_255 <= 8); l_255 += 1)
                    {
                        int i;
                        return l_94[l_255];
                    }
                    g_92 = 5L;
                    if (l_258)
                    {
                        return p_74;
                    }
                    else
                    {
                        int l_268 = 0x72236B93L;
                        l_268 = ((safe_rshift_func_int8_t_s_u(((l_196[0][1] && (((safe_rshift_func_uint16_t_u_s(((g_263 = g_200[1][4]) || (safe_div_func_uint8_t_u_u(p_74, (g_106 ^ p_74)))), ((g_269 = (safe_mod_func_int8_t_s_s((l_268 != g_18), p_74))) | ((safe_add_func_int16_t_s_s((p_74 ^ 1UL), g_200[1][5])) | l_196[0][4])))) != l_258) >= 0xA02BL)) >= l_239), 1)) > p_74);
                        l_232 = l_196[0][4];
                        return p_74;
                    }
                }
            }
            else
            {
                int l_274 = 0x99F4FE02L;
                l_273 = (l_272[4][0][0] = g_92);
                g_92 = (9L >= (l_274 = (g_84 > 0L)));
                if ((safe_lshift_func_uint16_t_u_s(0x3928L, 6)))
                {
                    const char l_285 = 0x19L;
                    int l_295 = 1L;
                    l_255 = (((0x22L != ((p_74 >= g_18) != ((safe_lshift_func_uint8_t_u_u((p_74 ^ 0x40L), (g_200[0][1] <= g_8[3][2]))) != l_274))) & (safe_div_func_int32_t_s_s((safe_rshift_func_int16_t_s_s(0x8B93L, 0)), g_84))) <= l_285);
                    for (l_228 = 0; (l_228 <= (-24)); --l_228)
                    {
                        const short l_288 = 5L;
                        int l_289[8][1][10] = {{{0x40A12544L,3L,1L,(-7L),0x3F60D9F0L,(-7L),1L,3L,0x40A12544L,0x9F47FE89L}},{{0x985C0450L,0x176A0845L,(-6L),(-10L),(-1L),0x02127042L,(-1L),(-1L),0L,(-1L)}},{{(-1L),0x9F47FE89L,(-7L),(-10L),0xB7B9C365L,0xB06F0957L,0x985C0450L,0x1CEE7740L,0x40A12544L,0x176A0845L}},{{1L,(-1L),(-7L),0x1CEE7740L,(-10L),(-5L),1L,0x3F60D9F0L,0xB7B9C365L,0xB7B9C365L}},{{0x176A0845L,0x3F60D9F0L,0x7E7FAA3FL,0x356A93C2L,0x356A93C2L,0x7E7FAA3FL,0x3F60D9F0L,0x176A0845L,0x3B084D90L,(-1L)}},{{0x985C0450L,0L,1L,3L,1L,1L,(-10L),0x75E829FDL,1L,0x356A93C2L}},{{1L,0xB2F87FCBL,1L,1L,(-1L),0x75E829FDL,0xB06F0957L,0x176A0845L,0x75E829FDL,0x9F47FE89L}},{{(-1L),3L,0x7E7FAA3FL,(-1L),(-1L),5L,0x985C0450L,0x3F60D9F0L,0x02127042L,0x3F60D9F0L}}};
                        int l_305 = 0xFACB0148L;
                        int i, j, k;
                        l_289[7][0][7] = l_288;
                        l_94[2] = (safe_add_func_uint32_t_u_u(((g_150 = (l_273 = (p_74 != ((l_295 = (0xE559AB98L == (safe_rshift_func_int16_t_s_u(((safe_unary_minus_func_int16_t_s((((l_272[4][0][0] = (-1L)) && 0L) == l_83))) > (+g_150)), 11)))) & (((l_305 = (p_74 > (safe_lshift_func_uint16_t_u_s(((safe_mul_func_uint8_t_u_u((((g_304 = (l_289[7][0][7] = (safe_rshift_func_uint16_t_u_u((((safe_lshift_func_int16_t_s_s(0xE2B9L, g_8[2][1])) && g_18) && 1L), g_92)))) || l_273) == g_231), l_285)) > l_75[2]), 10)))) != (-1L)) == l_285))))) < p_74), p_74));
                        l_255 = g_8[2][1];
                        g_92 = (safe_div_func_int32_t_s_s(((safe_mul_func_uint16_t_u_u((g_150 = 0x8589L), (safe_mod_func_uint16_t_u_u((p_74 | (safe_mul_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u(g_316, (((((g_229 = g_263) > g_304) && p_74) & (l_295 = (l_317 > p_74))) == l_285))), l_318))), p_74)))) && g_8[0][1]), g_316));
                    }
                    g_92 = p_74;
                    if (g_8[0][2])
                        break;
                }
                else
                {
                    for (g_269 = 0; (g_269 != (-9)); --g_269)
                    {
                        char l_325[9];
                        int i;
                        for (i = 0; i < 9; i++)
                            l_325[i] = 1L;
                        l_255 = g_18;
                        l_94[6] = ((p_74 >= g_106) != (g_200[1][4] | (safe_sub_func_uint32_t_u_u((safe_div_func_uint8_t_u_u((g_18 == (p_74 > l_325[6])), p_74)), (+g_263)))));
                        if (l_272[4][0][0])
                            break;
                        if (l_274)
                            break;
                    }
                }
                g_92 = (safe_mod_func_int8_t_s_s(p_74, (safe_mul_func_int16_t_s_s(g_316, (safe_mul_func_uint16_t_u_u((g_28 == g_316), 0x6D94L))))));
            }
            if (p_74)
                break;
        }
        return g_200[0][1];
    }
    else
    {
        const unsigned l_335 = 1UL;
        int l_337 = 0x381A5F3EL;
        for (g_106 = 7; (g_106 >= 31); ++g_106)
        {
            for (g_18 = 3; (g_18 >= 0); g_18 -= 1)
            {
                char l_334 = 0L;
                int i;
                l_334 = l_75[g_18];
            }
        }
        g_336 = l_335;
        l_337 = l_83;
        for (g_18 = 6; (g_18 >= 2); g_18 -= 1)
        {
            int i;
            l_94[(g_18 + 2)] = (safe_rshift_func_int16_t_s_u(p_74, ((p_74 == (p_74 > (g_231 > (safe_add_func_int8_t_s_s(p_74, (safe_mod_func_int16_t_s_s((p_74 || (safe_add_func_int16_t_s_s(((((safe_div_func_int32_t_s_s((l_94[4] != p_74), g_229)) && p_74) <= g_229) && l_337), 0x4894L))), (-1L)))))))) >= l_337)));
            g_336 = (p_74 || p_74);
        }
    }
    return g_28;
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_4, "g_4", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_8[i][j], "g_8[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_18, "g_18", print_hash_value);
    transparent_crc(g_28, "g_28", print_hash_value);
    transparent_crc(g_84, "g_84", print_hash_value);
    transparent_crc(g_92, "g_92", print_hash_value);
    transparent_crc(g_106, "g_106", print_hash_value);
    transparent_crc(g_150, "g_150", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_200[i][j], "g_200[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_227, "g_227", print_hash_value);
    transparent_crc(g_229, "g_229", print_hash_value);
    transparent_crc(g_231, "g_231", print_hash_value);
    transparent_crc(g_263, "g_263", print_hash_value);
    transparent_crc(g_269, "g_269", print_hash_value);
    transparent_crc(g_304, "g_304", print_hash_value);
    transparent_crc(g_316, "g_316", print_hash_value);
    transparent_crc(g_336, "g_336", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_352[i][j][k], "g_352[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_391, "g_391", print_hash_value);
    transparent_crc(g_426, "g_426", print_hash_value);
    transparent_crc(g_427, "g_427", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_604[i], "g_604[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_636, "g_636", print_hash_value);
    transparent_crc(g_723, "g_723", print_hash_value);
    transparent_crc(g_760, "g_760", print_hash_value);
    transparent_crc(g_821, "g_821", print_hash_value);
    transparent_crc(g_841, "g_841", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_910[i], "g_910[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_958, "g_958", print_hash_value);
    transparent_crc(g_970, "g_970", print_hash_value);
    transparent_crc(g_1058, "g_1058", print_hash_value);
    transparent_crc(g_1211, "g_1211", print_hash_value);
    transparent_crc(g_1410, "g_1410", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_1508[i], "g_1508[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1510, "g_1510", print_hash_value);
    transparent_crc(g_1717, "g_1717", print_hash_value);
    transparent_crc(g_1844, "g_1844", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_1845[i][j][k], "g_1845[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
