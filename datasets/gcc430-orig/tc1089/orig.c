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



static int g_6 = 0x43D9532BL;
static short g_23 = 6L;
static unsigned char g_66 = 0xDDL;
static unsigned g_87 = 0xEEBDC1AAL;
static char g_110 = (-1L);
static unsigned g_115 = 0xDBA9F0D2L;
static int g_125 = 0xB24BDB38L;
static unsigned g_137 = 1UL;
static int g_184 = (-7L);
static short g_220 = 0L;
static int g_230 = (-6L);
static unsigned g_285 = 0x9B6EF0C4L;
static unsigned g_311 = 9UL;
static int g_343 = (-1L);
static int g_357 = 0x9ED53E53L;
static unsigned g_385 = 4294967295UL;
static int g_424 = 1L;
static char g_452 = 2L;
static short g_453 = 0x4296L;
static short g_455 = 1L;
static short g_517 = 0x904AL;
static int g_536 = 0x6A0829CAL;
static unsigned char g_574 = 0UL;
static unsigned char g_646 = 0x03L;
static const unsigned short g_671 = 0UL;
static unsigned short g_705 = 65535UL;
static const short g_718 = 0xCEA1L;
static unsigned char g_798 = 254UL;
static unsigned short g_836 = 0x2DD3L;
static int g_895 = 0xA6DC296AL;



static const unsigned func_1(void);
static unsigned char func_9(int p_10);
static short func_17(unsigned p_18);
static unsigned func_19(short p_20);
static unsigned func_28(unsigned short p_29);
static unsigned char func_32(unsigned char p_33, unsigned p_34);
static unsigned char func_35(char p_36, unsigned p_37);
static unsigned char func_40(unsigned p_41, unsigned char p_42, short p_43, unsigned char p_44, int p_45);
static short func_46(int p_47, unsigned p_48);
static const unsigned char func_56(const char p_57, int p_58);
static const unsigned func_1(void)
{
    char l_572 = 1L;
    int l_573 = 0x8A064C34L;
    unsigned short l_603 = 0x841DL;
    short l_762 = 1L;
    int l_767 = 1L;
    unsigned char l_773 = 0xEEL;
    unsigned l_847 = 1UL;
    l_573 = (safe_add_func_int32_t_s_s((safe_sub_func_int8_t_s_s(((g_6 = 0UL) == ((safe_div_func_uint8_t_u_u(func_9((g_230 = (((safe_sub_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s((safe_lshift_func_int16_t_s_s(func_17(func_19((!(safe_lshift_func_uint16_t_u_s(g_23, 11))))), g_230)), ((((((((safe_lshift_func_uint8_t_u_s((func_40(func_40(g_385, (l_572 == g_385), ((g_574 = l_573) < g_230), l_572, g_385), l_573, g_230, g_385, g_230) == l_573), g_230)) < l_572) < 4294967295UL) < l_573) == 0UL) <= l_572) > l_573) & l_573))), g_230)) >= 0L) <= 0x21AE5752L))), g_385)) != l_572)), l_573)), 0x9D65889FL));
    g_343 = (((safe_add_func_int16_t_s_s((safe_mod_func_uint8_t_u_u((g_343 | (safe_lshift_func_uint8_t_u_u((~l_572), (safe_rshift_func_int8_t_s_u(l_603, 6))))), (-1L))), func_56(l_573, (safe_rshift_func_uint8_t_u_u(g_87, l_603))))) < (g_536 & 0x8B554F51L)) ^ g_574);
    g_343 = ((g_452 = (l_573 > 0UL)) ^ 0x88L);
    for (g_311 = 0; (g_311 < 32); g_311++)
    {
        unsigned l_610 = 0x82608EA9L;
        int l_630 = 0x23636DABL;
        unsigned l_660 = 0xC6657AF9L;
        int l_665 = 0xB13DE81FL;
        unsigned short l_678 = 0x9624L;
        unsigned l_733 = 5UL;
        const unsigned l_768 = 4294967294UL;
        unsigned short l_810 = 0x50E5L;
        unsigned short l_835 = 0xA7C7L;
        if (((l_573 = (safe_mod_func_uint16_t_u_u(l_610, g_517))) | ((safe_lshift_func_uint16_t_u_s(((safe_div_func_int16_t_s_s((((((((l_572 || (l_572 || (-1L))) & ((g_285 == (safe_sub_func_int16_t_s_s(((((g_66 >= (0xC4L > g_517)) < g_385) <= l_610) ^ g_311), l_610))) <= l_610)) > l_603) & g_536) >= g_455) == l_572) == 0L), g_453)) != 0x1DB4L), l_610)) < g_6)))
        {
            unsigned short l_617 = 1UL;
            unsigned short l_633 = 0x2597L;
            short l_655 = 0xBC13L;
            int l_666 = 2L;
            int l_667 = 0xBBA0FB76L;
            int l_754 = 0x4FD674DFL;
            short l_782 = 0x92EFL;
            short l_809 = (-7L);
            if ((((l_617 | ((safe_mod_func_int8_t_s_s((((g_453 = g_343) <= l_610) >= (safe_lshift_func_int8_t_s_u(func_35((safe_lshift_func_int16_t_s_u(1L, ((safe_add_func_int32_t_s_s(0xA6BB1EE9L, l_617)) > (safe_rshift_func_uint8_t_u_s(func_56((safe_lshift_func_int8_t_s_u((l_573 != ((l_630 = 0UL) || (safe_lshift_func_uint16_t_u_s((l_610 | l_603), 2)))), 3)), l_617), 6))))), l_633), 0))), 0xDDL)) == g_115)) | (-2L)) & 0xB5A0L))
            {
                int l_654 = 0xBE17F785L;
                for (g_452 = 0; (g_452 < 26); g_452++)
                {
                    for (g_230 = 0; (g_230 == 1); ++g_230)
                    {
                        unsigned short l_647 = 1UL;
                        if (g_230)
                            break;
                        g_536 = (safe_rshift_func_int16_t_s_u(((safe_add_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u(g_343, 5)), (((!g_66) > (g_343 != (safe_mod_func_uint16_t_u_u(g_385, (~(l_647 = (g_646 = g_66))))))) > g_137))) & (safe_mod_func_int16_t_s_s(((safe_mod_func_uint8_t_u_u(g_536, g_184)) <= ((safe_sub_func_uint16_t_u_u((l_654 == g_87), g_125)) >= (-5L))), g_230))), 14));
                        if (l_655)
                            continue;
                    }
                }
                l_654 = (l_630 = 0x0DBB5357L);
                g_343 = l_610;
                l_573 = 0x51BBD46DL;
            }
            else
            {
                unsigned short l_658 = 0xC599L;
                int l_659 = 0xCDC563D8L;
                int l_668 = 0x643829F9L;
                unsigned l_726 = 4294967290UL;
                const unsigned l_757 = 4294967287UL;
                l_668 = (((l_667 = ((g_6 <= (safe_lshift_func_uint16_t_u_u((l_659 = func_17(l_658)), (l_660 = (g_646 && (l_658 == l_610)))))) ^ (l_666 = (safe_lshift_func_int8_t_s_u((l_630 >= ((g_230 && (l_665 = (safe_rshift_func_int16_t_s_s((l_573 <= l_610), 14)))) || g_574)), 3))))) >= 0xE1L) <= g_385);
                if ((safe_mod_func_uint16_t_u_u((l_573 < (g_137 = g_137)), g_671)))
                {
                    char l_683 = 0x30L;
                    int l_688 = 0x96264A47L;
                    int l_689 = 0x0A7E8EA7L;
                    if ((safe_sub_func_int16_t_s_s((safe_sub_func_int16_t_s_s((((g_646 = (l_678 = (safe_rshift_func_int8_t_s_s(g_137, 7)))) != g_87) || (l_630 | (l_689 = ((safe_add_func_int8_t_s_s(0x2CL, (g_574 = l_678))) > ((l_659 = func_56(g_110, (l_688 = (safe_lshift_func_uint8_t_u_u(func_46(l_683, (l_573 = (safe_mod_func_int32_t_s_s((l_667 = (safe_sub_func_uint8_t_u_u(l_678, (l_666 = (g_452 = func_35(l_659, g_184)))))), g_23)))), 5))))) == g_125))))), l_658)), g_285)))
                    {
                        l_573 = (l_689 = g_125);
                        l_666 = g_343;
                    }
                    else
                    {
                        l_667 = g_110;
                    }
                    if (l_603)
                        continue;
                    for (g_285 = (-15); (g_285 >= 23); g_285 = safe_add_func_uint8_t_u_u(g_285, 6))
                    {
                        short l_692 = 1L;
                        l_692 = (l_630 && (g_455 = (func_46(l_683, g_125) > g_671)));
                    }
                    if (((safe_mod_func_uint16_t_u_u(l_660, g_646)) != (safe_add_func_uint8_t_u_u(g_87, (g_110 = (l_689 = (safe_mod_func_int32_t_s_s((safe_div_func_uint16_t_u_u((g_705 = ((safe_add_func_uint8_t_u_u(l_659, (safe_rshift_func_uint8_t_u_s(((((g_424 <= (l_573 = (((6L || (l_633 > g_574)) < (0x5D458C6BL | 0xDC30212BL)) == g_230))) || 0xB233140DL) & (-2L)) || g_125), l_617)))) | l_688)), l_658)), g_311))))))))
                    {
                        unsigned char l_708 = 0xAEL;
                        g_536 = (func_40(l_655, g_343, ((safe_add_func_uint16_t_u_u(g_220, (((g_574 = 254UL) & l_603) || func_40(l_658, l_573, l_668, l_708, l_689)))) ^ 0L), l_683, g_343) ^ (-1L));
                        g_536 = l_708;
                    }
                    else
                    {
                        unsigned short l_713 = 0x5A82L;
                        int l_725 = 0xF57227E6L;
                        g_125 = (g_343 = ((safe_mod_func_uint32_t_u_u((l_713 > g_184), g_357)) > (((safe_div_func_uint32_t_u_u(g_718, (safe_div_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s(g_230, 9)), (l_725 = (l_666 = 65535UL)))), l_659)))) | (l_678 >= (l_668 > 0UL))) < l_726)));
                        l_573 = (!func_17(func_9(g_230)));
                        g_125 = (g_311 >= l_655);
                        l_665 = func_46(((safe_lshift_func_uint8_t_u_s(l_726, (l_655 == l_725))) <= l_725), l_713);
                    }
                }
                else
                {
                    unsigned short l_732 = 0xD8A7L;
                    int l_739 = 0x9205E0FEL;
                    for (g_343 = 0; (g_343 >= 9); g_343 = safe_add_func_int32_t_s_s(g_343, 4))
                    {
                        char l_731 = (-1L);
                        g_424 = l_731;
                        g_424 = ((!((((func_40(l_572, (((l_668 = l_732) != l_666) | 4UL), (l_733 | (-2L)), (g_66 != (-1L)), ((safe_add_func_int8_t_s_s(((l_732 < g_718) && 255UL), g_453)) < l_603)) || l_658) | l_678) != 0x22L) || 0xD27EL)) || g_517);
                    }
                    if (g_87)
                    {
                        g_424 = 0xA2CB5EB9L;
                        g_536 = g_87;
                        return g_220;
                    }
                    else
                    {
                        unsigned l_738 = 0xCE155D0AL;
                        l_665 = (safe_rshift_func_int8_t_s_u(0xA2L, 2));
                        l_739 = (l_738 = 0x7EA0D173L);
                        g_125 = (safe_div_func_int8_t_s_s(((safe_div_func_uint8_t_u_u((safe_add_func_uint16_t_u_u(((248UL > func_17(((safe_mod_func_uint32_t_u_u(((safe_sub_func_int16_t_s_s(g_517, (((l_666 = (safe_div_func_int16_t_s_s((safe_mod_func_uint8_t_u_u((~(g_646 = (l_754 = g_6))), (safe_rshift_func_uint8_t_u_s(((l_739 && l_757) != (safe_add_func_uint32_t_u_u((l_668 = 0xA2376B66L), g_718))), g_424)))), (g_705 = (g_455 | g_357))))) & l_738) > l_658))) == l_660), g_453)) || g_646))) ^ g_115), g_718)), 4UL)) > l_667), g_424));
                        l_573 = 0x38E4270DL;
                    }
                    for (l_660 = 0; (l_660 > 20); l_660 = safe_add_func_int16_t_s_s(l_660, 7))
                    {
                        g_343 = g_357;
                    }
                }
            }
            g_536 = ((g_517 == l_603) >= ((g_125 = g_311) == (l_666 = (g_424 = func_56(l_573, (l_665 = (g_357 = func_17((l_762 | func_56((safe_mod_func_uint16_t_u_u((func_56(((l_667 = (~((l_767 = ((0x5046L == ((((safe_div_func_int8_t_s_s(l_762, g_646)) >= 0UL) && l_666) && 4294967294UL)) & g_230)) & l_655))) > l_768), g_110) & g_184), 1L)), g_646))))))))));
            if ((g_6 != (g_705 = ((safe_sub_func_int8_t_s_s((safe_lshift_func_int8_t_s_u((~g_536), (func_40(l_754, g_646, l_773, l_762, l_768) < ((safe_mod_func_int16_t_s_s((safe_mod_func_uint16_t_u_u((!func_17(func_35((g_452 = (safe_add_func_int16_t_s_s((safe_lshift_func_int16_t_s_s((l_617 || g_646), 11)), g_671))), g_184))), (-1L))), l_660)) >= l_573)))), l_633)) > l_782))))
            {
                const unsigned short l_789 = 0x85F7L;
                short l_826 = 0x2BA6L;
                int l_837 = (-5L);
                g_125 = (!(safe_div_func_int8_t_s_s((1UL < (l_667 = func_17(l_678))), ((safe_rshift_func_uint16_t_u_s((0x77CBL <= (safe_mod_func_int32_t_s_s(l_789, (((g_424 & func_46((l_630 = l_655), g_110)) | l_633) && g_536)))), l_573)) && g_424))));
                l_630 = (g_536 = (((safe_rshift_func_uint8_t_u_s(l_768, 6)) | (func_35(g_110, g_452) < (g_574 = (g_718 < l_603)))) <= func_46((g_424 >= (safe_mod_func_uint16_t_u_u(func_40((l_665 = g_705), (safe_lshift_func_int8_t_s_s((g_798 = 0x8AL), 3)), g_125, g_285, g_23), (-1L)))), g_6)));
                if ((safe_rshift_func_uint8_t_u_u(func_40((l_665 = func_17(l_789)), (safe_add_func_int32_t_s_s((safe_mod_func_uint16_t_u_u(((((safe_lshift_func_int8_t_s_s((-3L), (0x79BE0D40L < ((((safe_lshift_func_int16_t_s_u(0x33F6L, g_452)) <= 1UL) & 0x3A38EF0BL) ^ l_809)))) <= (-5L)) <= g_718) | g_517), 0x22C0L)), 4294967295UL)), g_536, l_810, g_455), 2)))
                {
                    unsigned l_813 = 0UL;
                    l_813 = (safe_div_func_int16_t_s_s(g_705, 1UL));
                }
                else
                {
                    int l_822 = 0xF67C02A0L;
                    g_424 = (safe_rshift_func_uint8_t_u_s(((g_115 = 0xDDC2D682L) < g_125), 3));
                    l_837 = (safe_add_func_int8_t_s_s((((safe_mod_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s((l_603 || ((((l_822 || (safe_sub_func_uint16_t_u_u((safe_unary_minus_func_uint8_t_u(l_762)), (g_285 > (g_125 = ((((g_87 >= ((g_718 | l_826) | (func_17((((safe_lshift_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s(((safe_div_func_int32_t_s_s((((safe_rshift_func_int16_t_s_u(g_285, (g_455 | l_610))) != l_822) == g_424), g_66)) | g_798), 6)), g_285)) != l_789) <= 0x4982L)) | 0xA8D5F6F4L))) ^ g_455) == l_835) >= 1UL)))))) & l_782) >= l_822) || l_573)), 4)), g_285)) && g_453) && 0x56L), g_836));
                }
                l_667 = (l_665 | g_66);
            }
            else
            {
                unsigned l_838 = 0xD553DD75L;
                unsigned short l_894 = 1UL;
                unsigned l_896 = 0xB41CEA16L;
                if ((0xDD05L & (l_838 <= func_35(g_357, (((g_452 = (g_455 < g_285)) ^ (4294967295UL & (g_536 = (((safe_div_func_int32_t_s_s((safe_lshift_func_int8_t_s_s(((l_603 > (safe_div_func_uint8_t_u_u(l_809, g_517))) & g_671), 6)), l_660)) & g_343) == l_782)))) > g_137)))))
                {
                    g_343 = (g_424 = g_343);
                    for (g_230 = 0; (g_230 < 23); g_230++)
                    {
                        l_665 = (9UL == l_847);
                    }
                    g_125 = 0xDBC05FA5L;
                }
                else
                {
                    const int l_856 = (-10L);
                    int l_857 = 0L;
                    l_857 = ((safe_add_func_uint32_t_u_u(g_452, (safe_sub_func_uint32_t_u_u(func_56((safe_mod_func_uint8_t_u_u(func_32((0L == ((((safe_sub_func_uint8_t_u_u(l_838, l_617)) & ((l_835 & func_17(((~(g_220 & l_767)) ^ 0xAAL))) <= l_856)) >= l_617) == 255UL)), g_125), g_536)), l_838), (-1L))))) > l_856);
                    for (l_733 = (-4); (l_733 < 49); ++l_733)
                    {
                        g_125 = (l_838 ^ l_633);
                    }
                    g_125 = (((safe_lshift_func_int8_t_s_s((safe_mod_func_int8_t_s_s((l_838 > func_46(l_617, (safe_sub_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s((safe_div_func_uint32_t_u_u(0xFFE4FF95L, (safe_mod_func_int32_t_s_s((safe_add_func_int8_t_s_s((((safe_mod_func_int8_t_s_s((g_895 = (safe_add_func_int32_t_s_s(l_768, (g_798 && (safe_add_func_int8_t_s_s((l_630 = (g_110 = ((safe_mod_func_uint32_t_u_u((safe_add_func_uint8_t_u_u((safe_div_func_int16_t_s_s(0xA1C3L, (safe_rshift_func_int8_t_s_u((l_894 = (safe_rshift_func_uint16_t_u_s((((g_798 = ((func_17((l_857 = g_574)) == (safe_div_func_int16_t_s_s(((g_23 = ((safe_lshift_func_int16_t_s_s((((l_665 = ((((g_452 = g_285) == g_220) ^ g_453) >= 0xCB39L)) != (-8L)) || 0x8239L), l_773)) | l_782)) <= g_718), g_671))) || l_847)) > 0xDAL) | 6L), g_220))), 7)))), g_311)), l_856)) >= l_754))), 0x4FL)))))), l_838)) < g_184) || g_87), g_453)), l_856)))), l_896)), l_667)))), 0x43L)), 5)) || l_856) && 4L);
                }
                g_424 = 0xCBC20039L;
            }
        }
        else
        {
            char l_899 = 0x64L;
            const unsigned short l_900 = 0x138EL;
            for (l_767 = (-9); (l_767 <= (-1)); l_767 = safe_add_func_uint8_t_u_u(l_767, 1))
            {
                if (l_899)
                    break;
                return l_900;
            }
            if (l_603)
                continue;
            g_125 = g_895;
        }
        g_536 = 0x6F8CEC4DL;
    }
    return l_603;
}







static unsigned char func_9(int p_10)
{
    unsigned char l_579 = 5UL;
    int l_593 = 0L;
    for (g_452 = (-3); (g_452 <= (-26)); --g_452)
    {
        unsigned short l_594 = 0x4517L;
        for (g_424 = 0; (g_424 < (-8)); g_424 = safe_sub_func_int8_t_s_s(g_424, 2))
        {
            short l_588 = (-1L);
            g_536 = (((((func_17((l_579 ^ (l_594 = (safe_rshift_func_int8_t_s_s(func_32((safe_div_func_int32_t_s_s(((safe_div_func_int32_t_s_s(0x283435E1L, p_10)) == (l_593 = ((safe_add_func_uint32_t_u_u(l_588, g_125)) ^ (safe_rshift_func_int8_t_s_s(func_17((safe_add_func_int16_t_s_s(l_588, (-1L)))), 0))))), 0x447BB21DL)), l_579), g_517))))) != g_453) ^ 0x40DDFC67L) != g_230) <= p_10) ^ 0x0BBBL);
        }
        l_593 = l_593;
    }
    return p_10;
}







static short func_17(unsigned p_18)
{
    short l_560 = 0x591AL;
    char l_561 = 0x04L;
    int l_562 = (-4L);
    unsigned short l_567 = 0UL;
    unsigned l_568 = 6UL;
    int l_569 = 0L;
    l_569 = (safe_mod_func_uint8_t_u_u(((((((safe_add_func_uint32_t_u_u((((l_562 = ((l_560 || l_561) || l_561)) <= (safe_lshift_func_uint16_t_u_u(g_66, (l_560 != func_40(func_46((safe_lshift_func_uint8_t_u_u(g_87, 6)), l_560), l_561, l_567, p_18, p_18))))) ^ 0xE3394736L), g_517)) || 0x35L) ^ 0x1BC2L) <= 0L) || 0x1CL) ^ p_18), l_568));
    l_569 = (!l_568);
    l_569 = 0x508D6991L;
    return p_18;
}







static unsigned func_19(short p_20)
{
    unsigned l_49 = 4294967292UL;
    int l_69 = 0x429ADBD3L;
    int l_96 = 0xC2B408DBL;
    int l_555 = (-10L);
    if ((g_23 && (safe_sub_func_int32_t_s_s((safe_mod_func_uint32_t_u_u(func_28((safe_add_func_uint8_t_u_u(255UL, func_32((l_96 = func_35(p_20, ((l_69 = (safe_rshift_func_int8_t_s_u((func_40(p_20, g_23, func_46(l_49, (safe_add_func_int32_t_s_s(((safe_div_func_int16_t_s_s(((safe_rshift_func_uint8_t_u_s(func_56((p_20 | (p_20 >= 1L)), p_20), p_20)) | l_49), p_20)) < 4UL), 1L))), p_20, l_49) && p_20), g_23))) >= 8UL))), g_23)))), p_20)), 0x394039B8L))))
    {
        unsigned char l_449 = 0x3AL;
        int l_451 = 0xFD259BF9L;
        int l_454 = (-5L);
        for (l_69 = 0; (l_69 > 7); l_69 = safe_add_func_uint16_t_u_u(l_69, 6))
        {
            unsigned short l_446 = 0xF41BL;
            int l_450 = (-1L);
            g_343 = (safe_mod_func_int16_t_s_s(g_285, (func_35(g_66, (l_450 = (safe_div_func_int32_t_s_s((l_446 = g_343), (safe_sub_func_uint8_t_u_u(l_449, g_424)))))) | (l_451 = l_96))));
            l_451 = ((g_455 = ((g_453 = (g_452 = func_28(p_20))) <= l_454)) && ((safe_div_func_int32_t_s_s(p_20, func_46(func_28(((l_450 = 4UL) | p_20)), l_69))) > g_23));
            for (g_23 = 22; (g_23 == (-12)); --g_23)
            {
                int l_460 = 0xF88D4BEEL;
                if (l_460)
                    break;
            }
        }
        g_424 = (l_451 = 0xC6B1F425L);
        g_424 = (safe_sub_func_uint8_t_u_u((l_451 = p_20), ((safe_div_func_int16_t_s_s((safe_lshift_func_int16_t_s_s(l_454, 15)), (0x87615C54L ^ 0xC45BD6CCL))) != p_20)));
    }
    else
    {
        int l_518 = (-1L);
        int l_531 = 8L;
        char l_533 = 0xA1L;
        int l_554 = (-6L);
        g_343 = (g_343 ^ g_184);
        for (g_311 = 0; (g_311 <= 26); g_311++)
        {
            short l_477 = 0x3454L;
            int l_481 = 0x199A37B8L;
            int l_483 = 0L;
            unsigned char l_505 = 0x1DL;
            if ((p_20 >= (safe_rshift_func_uint8_t_u_u((safe_mod_func_int8_t_s_s((g_452 = (safe_mod_func_uint8_t_u_u(0xFBL, (g_452 & g_424)))), (g_110 | (safe_mod_func_int16_t_s_s(l_477, (((p_20 <= (safe_unary_minus_func_uint16_t_u((safe_add_func_uint32_t_u_u((l_481 = p_20), (safe_unary_minus_func_int16_t_s(((4294967295UL && g_115) < p_20)))))))) >= g_385) & g_453)))))), l_483))))
            {
                unsigned l_488 = 4294967295UL;
                int l_515 = 0x4C7FEDC7L;
                int l_516 = 0x0EED4F98L;
                for (l_49 = (-3); (l_49 < 32); ++l_49)
                {
                    short l_506 = (-5L);
                    int l_532 = 0x48672F2DL;
                    l_96 = p_20;
                    g_125 = p_20;
                    l_488 = (!(safe_sub_func_uint32_t_u_u(g_357, p_20)));
                    for (g_66 = (-17); (g_66 <= 44); g_66 = safe_add_func_uint8_t_u_u(g_66, 4))
                    {
                        unsigned l_493 = 0xE1AD2ED4L;
                        int l_498 = 0x76738694L;
                        g_125 = (((g_115 = (g_357 || (safe_sub_func_uint32_t_u_u(0x2D749A86L, l_483)))) || g_110) <= (l_493 = (g_87 = 0UL)));
                        l_518 = (safe_mod_func_uint32_t_u_u((safe_lshift_func_int16_t_s_u(((l_498 = (p_20 == l_488)) == (safe_div_func_uint32_t_u_u(func_46((((safe_mod_func_uint32_t_u_u(p_20, (g_115 = (safe_mod_func_uint16_t_u_u(l_96, (l_505 ^ (l_506 >= p_20))))))) && (safe_div_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_s((safe_div_func_int16_t_s_s((l_481 = ((((g_517 = (l_516 = (l_515 = (safe_mod_func_uint16_t_u_u(func_46(g_452, g_66), 65535UL))))) | 0x54L) || 0x34EA3520L) == g_285)), 1UL)), g_385)), g_455))) >= 1L), g_357), p_20))), 10)), 0xB1EAC5E9L));
                        l_532 = (safe_add_func_uint16_t_u_u((l_531 = (g_23 == func_46((2UL < (+(safe_add_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(0xBC03L, (g_455 != g_66))), g_285)))), ((safe_mod_func_int8_t_s_s((-4L), g_184)) ^ ((((safe_sub_func_int32_t_s_s((safe_sub_func_int32_t_s_s(func_40(g_110, g_285, g_115, l_518, g_184), 1UL)), l_481)) < 0xC58BL) != l_506) <= l_518))))), 0x6115L));
                    }
                }
                g_343 = 0x4D628F1BL;
                l_533 = p_20;
                return l_533;
            }
            else
            {
                unsigned l_541 = 4294967295UL;
                l_531 = (g_23 <= (-3L));
                l_481 = g_517;
                l_481 = (g_125 = 0xDFAF08C8L);
                l_541 = (((safe_rshift_func_uint16_t_u_u((func_35((((g_536 = l_69) < 0xDD98L) <= func_32(g_517, ((safe_mod_func_uint16_t_u_u(((safe_sub_func_uint8_t_u_u(((l_96 = (func_35(g_285, (((l_531 = p_20) < p_20) & (((p_20 > g_343) == g_452) < p_20))) == g_285)) > p_20), 0x29L)) & 0x8EL), 0xE970L)) ^ l_69))), g_230) ^ 0UL), l_69)) != g_311) != 0x03L);
            }
            l_531 = p_20;
        }
        g_536 = (((safe_mod_func_int16_t_s_s(g_125, (l_69 = ((l_555 = (l_69 != (safe_sub_func_uint16_t_u_u(((safe_sub_func_int16_t_s_s((l_531 = (safe_mod_func_uint32_t_u_u(0xF7CAF32CL, l_531))), (safe_mod_func_int8_t_s_s(l_518, 1L)))) > func_46(l_69, ((((safe_div_func_int32_t_s_s(((((l_554 = p_20) > (p_20 <= p_20)) ^ p_20) != p_20), 0x26989A22L)) >= (-6L)) >= 0xF123CABCL) < l_96))), 0x8BE1L)))) || p_20)))) > l_518) || l_555);
    }
    g_125 = 9L;
    return g_125;
}







static unsigned func_28(unsigned short p_29)
{
    char l_236 = 0x1FL;
    int l_260 = 0x0E7C7BFAL;
    int l_278 = 0L;
    if (((~p_29) > (safe_lshift_func_int8_t_s_s((g_137 & p_29), 4))))
    {
        short l_235 = 0L;
        int l_261 = 0xF444C74AL;
        int l_338 = 1L;
        int l_341 = (-10L);
        int l_342 = 0xEFC62F17L;
        g_125 = g_110;
        l_236 = l_235;
        for (g_184 = 0; (g_184 > 19); g_184 = safe_add_func_int32_t_s_s(g_184, 4))
        {
            unsigned l_250 = 0x40159466L;
            int l_251 = (-9L);
            unsigned short l_293 = 0x1B45L;
            int l_300 = 0xECCB464EL;
            unsigned short l_363 = 0x62FEL;
            unsigned char l_400 = 255UL;
            if (p_29)
            {
                char l_246 = (-1L);
                unsigned l_269 = 1UL;
                int l_315 = 0x91E37F5DL;
                int l_321 = 1L;
                if (func_46(p_29, g_230))
                {
                    char l_239 = 0xF6L;
                    l_239 = 0L;
                }
                else
                {
                    g_125 = (safe_mod_func_int16_t_s_s(0x26D9L, (safe_add_func_int16_t_s_s(g_87, p_29))));
                    for (g_137 = 4; (g_137 <= 7); g_137++)
                    {
                        g_125 = 0x475C12EEL;
                    }
                }
                if (l_246)
                {
                    unsigned l_247 = 1UL;
                    int l_262 = (-7L);
                    l_261 = ((l_247 & (safe_add_func_uint8_t_u_u((l_251 = l_250), (g_110 <= (((p_29 | g_220) >= ((func_46((safe_mod_func_uint8_t_u_u((safe_add_func_uint32_t_u_u((((safe_rshift_func_int16_t_s_s((safe_mod_func_uint16_t_u_u((l_260 = func_56((((((l_247 & (l_246 == 0x861A52A7L)) && 0x10L) > p_29) | (-2L)) != l_246), g_110)), p_29)), p_29)) >= p_29) > l_235), l_235)), 0xBCL)), l_250) & 0x46787E30L) <= l_236)) && p_29))))) != 1UL);
                    if ((l_262 = p_29))
                    {
                        l_251 = p_29;
                        l_260 = (-3L);
                        g_125 = ((g_23 || l_246) ^ 0xD7E930A5L);
                        if (p_29)
                            break;
                    }
                    else
                    {
                        unsigned char l_270 = 0UL;
                        l_270 = ((safe_sub_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u(func_40((g_115 > (func_46(((func_46(((l_260 = g_184) & 0xD0L), l_251) < (safe_add_func_int32_t_s_s(((func_35(func_35(l_261, ((func_56(g_115, (!(p_29 && p_29))) || l_269) > l_247)), l_247) != l_236) || p_29), 0x67E5E51FL))) >= g_110), g_184) > 0x2FL)), p_29, p_29, p_29, g_137), 5)), g_23)) > (-1L));
                        if (g_137)
                            continue;
                        g_125 = (p_29 < l_269);
                    }
                    g_125 = ((p_29 = l_262) & (+l_246));
                    if (p_29)
                        continue;
                }
                else
                {
                    for (l_260 = 0; (l_260 > (-29)); l_260 = safe_sub_func_int8_t_s_s(l_260, 6))
                    {
                        short l_275 = (-2L);
                        l_261 = (l_251 = ((l_250 < (safe_lshift_func_int16_t_s_s((l_275 = l_250), 0))) && (g_137 = 0x323BEAA7L)));
                        if (g_230)
                            break;
                        l_251 = (safe_mod_func_int32_t_s_s(g_137, func_46(p_29, g_137)));
                        l_278 = (!(g_125 = (g_184 <= p_29)));
                    }
                }
                if ((g_125 = ((l_251 < (safe_add_func_uint32_t_u_u(g_115, (safe_sub_func_uint32_t_u_u((safe_add_func_uint8_t_u_u(p_29, (g_285 = (g_110 = l_246)))), (g_137 = (l_269 & (((((l_261 = func_56(l_269, (func_35((func_56(g_66, (~g_115)) & l_269), l_269) > p_29))) < g_115) != 0xF9L) > 0x454A8DD3L) || l_269)))))))) != g_184)))
                {
                    short l_286 = 0x1E53L;
                    g_125 = (0x7AL >= (l_251 = (g_66 = 255UL)));
                    g_125 = l_286;
                    g_125 = 0xBAC08D49L;
                }
                else
                {
                    int l_310 = 0x093F065FL;
                    int l_331 = 0xC7B0A1C4L;
                    int l_344 = 0x704B462EL;
                    unsigned l_347 = 1UL;
                    for (g_87 = 21; (g_87 >= 5); g_87 = safe_sub_func_uint16_t_u_u(g_87, 8))
                    {
                        int l_309 = 0L;
                        l_300 = (safe_sub_func_int32_t_s_s(((safe_add_func_uint16_t_u_u((l_293 | (l_251 = 0UL)), 7UL)) == (l_293 <= g_285)), (~(l_278 && (safe_sub_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u(0UL, (p_29 ^ (safe_add_func_int8_t_s_s(g_115, (-7L)))))), p_29))))));
                        g_125 = ((g_184 || (func_56(p_29, l_236) != (g_311 = (safe_lshift_func_uint8_t_u_u(p_29, ((safe_rshift_func_int8_t_s_s(0x2AL, (p_29 <= (safe_rshift_func_int8_t_s_s((func_46((safe_div_func_uint32_t_u_u(func_46(l_235, l_261), 5UL)), l_309) <= g_110), l_310))))) || 4L)))))) | 0xD8A4D542L);
                    }
                    if ((l_278 = l_269))
                    {
                        int l_312 = 0L;
                        int l_320 = 0L;
                        l_315 = (l_312 | (4294967295UL && ((l_310 | p_29) == l_278)));
                        l_320 = (g_110 ^ (!(((0L == g_125) < ((safe_div_func_uint32_t_u_u(((l_278 = (0L && g_23)) | (((((safe_mod_func_int16_t_s_s(l_315, g_311)) != l_236) || func_40(l_260, g_137, g_23, l_235, g_66)) ^ l_320) & g_311)), l_321)) & g_184)) >= 0xED9E4B0AL)));
                    }
                    else
                    {
                        unsigned l_322 = 0x86D66B3BL;
                        l_321 = func_46(l_322, p_29);
                        l_261 = 0xA96EA25EL;
                        l_261 = ((l_236 | ((safe_lshift_func_uint8_t_u_s(p_29, 3)) > 0L)) != 0x8EA5L);
                    }
                    l_344 = (p_29 <= (safe_div_func_uint32_t_u_u((l_331 = func_35((safe_add_func_uint8_t_u_u(p_29, 249UL)), (safe_rshift_func_uint8_t_u_s((l_260 = l_310), 3)))), ((p_29 > (safe_mod_func_uint8_t_u_u((l_261 < (safe_sub_func_int16_t_s_s(((safe_lshift_func_int8_t_s_s(((g_343 = func_40((l_341 = ((l_338 = 0UL) < ((safe_mod_func_uint16_t_u_u(g_230, p_29)) == 0xCA81L))), g_110, l_342, l_250, g_230)) & 0L), l_261)) && 1UL), g_115))), 0xC2L))) ^ l_310))));
                    l_331 = (safe_div_func_uint32_t_u_u((l_260 = (p_29 == l_310)), (l_347 || 0x9320L)));
                }
            }
            else
            {
                short l_348 = 1L;
                l_348 = g_115;
                if (g_23)
                    continue;
                g_343 = (l_260 = (func_35(p_29, l_251) > g_23));
            }
            l_278 = p_29;
            for (l_236 = (-10); (l_236 >= (-1)); l_236++)
            {
                char l_362 = 0x74L;
                int l_394 = 0xC617FC8DL;
                short l_431 = 1L;
                l_341 = p_29;
                g_125 = 3L;
                for (l_300 = (-26); (l_300 == (-7)); ++l_300)
                {
                    unsigned char l_374 = 0xE9L;
                    int l_392 = 1L;
                    int l_393 = 0L;
                    g_125 = l_342;
                    if (((func_35(g_343, (safe_lshift_func_uint16_t_u_s((func_35(g_357, p_29) != (l_278 == (g_311 != p_29))), (safe_add_func_int8_t_s_s(((g_110 = g_137) != ((safe_sub_func_uint16_t_u_u((g_23 & p_29), l_362)) >= l_363)), 0L))))) <= g_230) == 1UL))
                    {
                        unsigned l_372 = 0xE6EF8F05L;
                        int l_373 = 0x4A11D5B9L;
                        g_343 = (safe_sub_func_int16_t_s_s((safe_rshift_func_int8_t_s_u((((safe_rshift_func_uint8_t_u_s(((l_260 = (g_220 = 8L)) == func_35((l_373 = ((safe_lshift_func_int16_t_s_s(l_372, 3)) ^ l_342)), l_261)), 5)) ^ (l_374 <= ((safe_add_func_int8_t_s_s((l_372 | (safe_lshift_func_uint8_t_u_s((safe_sub_func_uint8_t_u_u(func_40((safe_rshift_func_uint8_t_u_s((((safe_mod_func_uint32_t_u_u((func_46(g_230, g_230) > 1L), 0xF6752EA9L)) >= g_343) >= g_385), p_29)), p_29, l_235, p_29, l_372), p_29)), 7))), p_29)) >= g_385))) == l_372), 0)), p_29));
                        l_251 = p_29;
                        l_394 = (l_372 | (safe_lshift_func_uint8_t_u_s((g_115 < g_137), ((l_362 && g_137) ^ (+(g_220 = ((l_393 = ((safe_sub_func_uint32_t_u_u(p_29, ((g_66 = g_220) == l_278))) == (l_341 = (l_392 = l_261)))) > 0L)))))));
                        l_392 = ((l_251 = ((l_341 = ((safe_add_func_uint16_t_u_u(g_220, func_56((l_373 = func_56((g_110 = p_29), (((((l_341 != g_357) != ((l_394 = 0xAF7A5287L) <= 0x287341B7L)) | g_137) > g_311) && (safe_unary_minus_func_int16_t_s(((safe_rshift_func_int8_t_s_s((!(l_261 = p_29)), 0)) > g_357)))))), l_393))) | g_125)) != l_400)) <= (-2L));
                    }
                    else
                    {
                        int l_421 = (-6L);
                        g_125 = ((safe_rshift_func_int16_t_s_u((safe_lshift_func_uint8_t_u_u(0x78L, (l_421 = (!((!(safe_sub_func_int32_t_s_s(g_110, ((((safe_sub_func_uint32_t_u_u(func_40(p_29, (l_338 = (l_394 = ((safe_div_func_uint32_t_u_u(p_29, (safe_add_func_uint16_t_u_u(((safe_rshift_func_uint8_t_u_s((func_40((l_260 & l_394), (g_66 = (safe_add_func_uint8_t_u_u((safe_div_func_uint8_t_u_u(p_29, l_363)), (safe_rshift_func_uint16_t_u_u(0x60C8L, p_29))))), l_393, l_393, g_220) && p_29), 2)) | 255UL), p_29)))) > 0x4CL))), p_29, g_115, l_421), g_87)) != 0x93C5L) != 0xD5822716L) <= g_137)))) >= g_23))))), 12)) < 65535UL);
                        g_343 = l_251;
                        l_338 = (((safe_rshift_func_uint16_t_u_u(0UL, (+(g_424 = 0x8DE6L)))) ^ (safe_sub_func_int16_t_s_s(0L, (p_29 == (g_285 | func_56(((p_29 > 4294967295UL) | ((func_35((l_421 = (g_87 && ((safe_rshift_func_uint8_t_u_u(((safe_lshift_func_uint8_t_u_u(l_431, p_29)) || 0L), l_260)) && 0x2282L))), p_29) <= p_29) != g_115)), p_29)))))) && g_23);
                        l_260 = p_29;
                    }
                }
            }
        }
        l_338 = (safe_div_func_int16_t_s_s(p_29, 1UL));
    }
    else
    {
        const unsigned char l_438 = 1UL;
        int l_439 = 0x601CE15DL;
        g_125 = (safe_mod_func_int8_t_s_s((safe_rshift_func_int8_t_s_s(func_56(l_438, (((0xB1123547L != (l_260 = (l_438 == func_46((g_357 = (g_184 = ((l_439 = l_438) >= (l_438 && (246UL | (((l_278 = l_236) | func_56(((0xA6133F4DL || (0x61E1L & g_66)) >= p_29), g_125)) || g_357)))))), p_29)))) | p_29) == 0xF5L)), 3)), 251UL));
    }
    return g_285;
}







static unsigned char func_32(unsigned char p_33, unsigned p_34)
{
    unsigned char l_105 = 249UL;
    unsigned l_114 = 0x589394F4L;
    int l_116 = 0xCD535912L;
    for (p_33 = (-9); (p_33 < 50); ++p_33)
    {
        int l_111 = 1L;
        int l_112 = 0L;
        int l_113 = 0L;
        int l_207 = 0x56AD3AFEL;
        unsigned char l_218 = 0x06L;
        l_116 = ((0xE195L <= g_66) >= (func_40((p_34 >= (~((safe_div_func_int32_t_s_s(p_33, (safe_lshift_func_uint16_t_u_u((g_115 = ((func_46((l_112 = (safe_sub_func_uint16_t_u_u(((g_87 = (p_34 > l_105)) ^ (((safe_div_func_int16_t_s_s((l_111 = (((~((!g_66) != (((((safe_lshift_func_int8_t_s_s(p_33, 6)) <= (g_110 = 0x2BBD67DEL)) & g_66) >= g_23) | 0x852CL))) | 0xB487L) == g_66)), p_34)) >= 65533UL) > g_66)), (-1L)))), l_113) <= l_105) <= l_114)), 7)))) || 0x5F9E9296L))), l_113, p_33, g_23, p_33) & p_34));
        g_125 = (safe_div_func_uint8_t_u_u((((safe_add_func_int8_t_s_s((p_34 == g_115), ((((func_46(g_115, g_115) && ((safe_sub_func_uint32_t_u_u((1L & g_23), (l_112 = (safe_add_func_int32_t_s_s(0L, 0x152693CEL))))) < p_33)) >= 0L) <= 0xF5642680L) ^ g_66))) && l_105) && p_34), 1L));
        g_125 = (l_112 = p_34);
        if ((safe_lshift_func_int16_t_s_s(func_56(((-1L) == (g_23 = ((safe_mod_func_int8_t_s_s((g_110 != (safe_rshift_func_int8_t_s_u(g_115, 1))), g_125)) != 0x09L))), g_110), g_87)))
        {
            int l_136 = 0x2777C731L;
            const int l_140 = (-7L);
            if (((((~(g_115 = ((safe_mod_func_uint32_t_u_u(func_56(((p_34 == ((l_116 = g_115) <= ((l_136 = (safe_lshift_func_int8_t_s_u(g_110, l_114))) & (g_23 = (g_23 < (g_137 = l_105)))))) < (0x917AL >= (safe_add_func_uint16_t_u_u(p_34, (l_140 <= 0x096BL))))), p_33), l_140)) || p_33))) == p_33) | l_114) != p_33))
            {
                return l_114;
            }
            else
            {
                int l_141 = 0x7F729EE1L;
                int l_156 = 5L;
                unsigned l_195 = 0UL;
                if ((g_125 = l_116))
                {
                    g_125 = g_66;
                    l_141 = p_33;
                }
                else
                {
                    int l_180 = 0xB49F5E64L;
                    l_136 = p_34;
                    for (g_115 = 19; (g_115 <= 15); g_115--)
                    {
                        int l_146 = (-1L);
                        unsigned char l_165 = 251UL;
                        char l_181 = 0xCFL;
                        g_125 = (safe_lshift_func_int8_t_s_s(l_112, l_146));
                        l_156 = (safe_add_func_uint16_t_u_u((p_34 <= ((2L <= ((safe_unary_minus_func_int8_t_s((safe_rshift_func_uint8_t_u_u(l_140, g_115)))) >= ((((p_33 && (l_141 <= ((!l_141) > ((safe_rshift_func_uint8_t_u_u(g_125, 0)) <= ((safe_rshift_func_uint8_t_u_s((l_146 >= p_33), p_34)) != p_33))))) ^ l_114) ^ 0x58BFL) == 0x9DL))) != g_137)), 0xEA24L));
                        g_125 = (safe_div_func_int16_t_s_s((func_40(g_66, ((safe_lshift_func_int8_t_s_s(((l_136 = (func_40((g_137 = 0xD1579E77L), (safe_mod_func_int8_t_s_s((l_156 = (0x69A13370L < (((0x5AL == p_33) | (safe_lshift_func_int16_t_s_u(((l_165 | g_23) & (safe_add_func_int32_t_s_s((safe_mod_func_int8_t_s_s(g_125, (safe_mod_func_uint8_t_u_u(((safe_div_func_int16_t_s_s((safe_mod_func_int32_t_s_s(((safe_add_func_uint8_t_u_u(func_46(p_34, g_66), l_141)) || l_156), g_87)), l_141)) | 0L), 0x84L)))), 0x9FC300F0L))), 0))) | 0xB7L))), (-7L))), l_180, g_125, l_146) != p_34)) >= l_140), p_33)) < 65535UL), p_34, g_87, l_181) ^ 5L), l_112));
                    }
                    for (g_125 = (-18); (g_125 == 22); g_125++)
                    {
                        g_184 = 0x5CBBC646L;
                    }
                    l_116 = l_156;
                }
                g_125 = ((p_34 > (g_110 = p_33)) <= ((p_33 >= (((safe_div_func_int32_t_s_s(g_137, (safe_lshift_func_int8_t_s_u(l_136, l_141)))) || ((p_33 <= (safe_div_func_int16_t_s_s((l_156 = (l_112 = g_137)), (safe_div_func_uint32_t_u_u((((l_195 == 5UL) & 1L) != 0x4CB20B97L), 9UL))))) > l_111)) != p_33)) < l_195));
            }
            l_136 = ((((safe_lshift_func_uint8_t_u_u(func_35((g_87 > (safe_sub_func_uint32_t_u_u((func_56(((safe_lshift_func_uint16_t_u_u((safe_div_func_uint16_t_u_u(0xAEC0L, 0xCE25L)), 9)) == l_105), l_140) & func_46((((l_111 || (safe_unary_minus_func_uint16_t_u(((-1L) < (!(g_110 = (((safe_mod_func_uint8_t_u_u(p_33, g_137)) >= l_111) | 1UL))))))) | l_136) == g_115), l_207)), g_87))), g_23), 1)) | g_115) || 0x9C52FCFAL) < g_125);
            return g_23;
        }
        else
        {
            int l_208 = 0x0117A253L;
            int l_217 = (-1L);
            int l_229 = 2L;
            short l_232 = 0xDAA8L;
            l_116 = (p_34 <= ((l_111 = l_112) == 7L));
            l_208 = (p_34 != 0x15L);
            for (p_34 = (-1); (p_34 > 2); p_34 = safe_add_func_int16_t_s_s(p_34, 1))
            {
                unsigned l_219 = 0UL;
                int l_231 = 0x9120BB8AL;
                l_116 = ((g_110 = (l_219 = (safe_sub_func_uint32_t_u_u(func_35((p_33 & func_40(p_34, g_66, (g_23 = 0xDB0FL), p_33, (l_112 = (safe_rshift_func_uint8_t_u_u((0xE2193700L > ((safe_mul_func_int8_t_s_s(p_33, ((2UL > ((l_217 = ((g_125 = (p_33 > g_66)) >= l_113)) | p_34)) != (-2L)))) < p_33)), g_66))))), g_184), l_218)))) == p_33);
                g_220 = (g_125 = 0L);
                g_125 = func_40(g_115, l_219, (l_231 = ((func_40(((((safe_lshift_func_int8_t_s_u((p_34 ^ (+g_184)), (l_111 == (safe_lshift_func_int8_t_s_u(p_34, 0))))) >= g_220) >= ((l_217 = g_66) != (((safe_div_func_int32_t_s_s((l_229 = ((p_33 && g_184) == 1L)), l_208)) || g_66) != l_116))) <= g_230), g_184, g_23, l_208, p_33) | 0x21L) == g_230)), l_218, l_232);
                l_217 = g_115;
            }
            l_217 = (-10L);
        }
    }
    return g_220;
}







static unsigned char func_35(char p_36, unsigned p_37)
{
    unsigned short l_72 = 0xE69CL;
    unsigned l_73 = 0xEAB1A690L;
    int l_76 = (-10L);
    const unsigned short l_77 = 0x4EDDL;
    int l_78 = 0L;
    l_78 = ((g_23 ^ 8UL) >= (((safe_mod_func_uint16_t_u_u(0x618EL, (l_76 = func_56(func_40(l_72, p_37, p_36, ((((l_72 | (l_73 > (safe_mod_func_int8_t_s_s(0x0CL, g_66)))) == l_72) <= p_36) != 0xEDL), l_73), g_23)))) | g_23) < l_77));
    l_76 = (l_78 = (1L == 0xF5726B06L));
    l_76 = (safe_sub_func_uint8_t_u_u(((((safe_unary_minus_func_uint32_t_u(l_76)) <= 248UL) || ((safe_unary_minus_func_uint16_t_u((((safe_sub_func_uint8_t_u_u((safe_sub_func_int32_t_s_s(func_56((g_87 = ((l_78 || 3UL) > p_37)), ((p_36 ^ (safe_div_func_uint32_t_u_u(func_46(p_37, ((safe_sub_func_uint8_t_u_u((safe_div_func_int16_t_s_s(g_66, (safe_sub_func_int32_t_s_s((g_23 < p_36), 0xA1FB9D33L)))), p_37)) <= g_23)), g_66))) != 0xC965L)), l_78)), 1L)) & g_23) | p_36))) & 0UL)) <= g_23), l_72));
    return g_66;
}







static unsigned char func_40(unsigned p_41, unsigned char p_42, short p_43, unsigned char p_44, int p_45)
{
    unsigned short l_68 = 65535UL;
    return l_68;
}







static short func_46(int p_47, unsigned p_48)
{
    return p_47;
}







static const unsigned char func_56(const char p_57, int p_58)
{
    int l_65 = 0xDC705BE7L;
    int l_67 = (-9L);
    l_67 = (g_23 & (!(safe_add_func_uint16_t_u_u((safe_sub_func_int32_t_s_s((safe_add_func_uint8_t_u_u(255UL, g_23)), l_65)), (g_66 = (l_65 ^ g_23))))));
    return l_67;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_6, "g_6", print_hash_value);
    transparent_crc(g_23, "g_23", print_hash_value);
    transparent_crc(g_66, "g_66", print_hash_value);
    transparent_crc(g_87, "g_87", print_hash_value);
    transparent_crc(g_110, "g_110", print_hash_value);
    transparent_crc(g_115, "g_115", print_hash_value);
    transparent_crc(g_125, "g_125", print_hash_value);
    transparent_crc(g_137, "g_137", print_hash_value);
    transparent_crc(g_184, "g_184", print_hash_value);
    transparent_crc(g_220, "g_220", print_hash_value);
    transparent_crc(g_230, "g_230", print_hash_value);
    transparent_crc(g_285, "g_285", print_hash_value);
    transparent_crc(g_311, "g_311", print_hash_value);
    transparent_crc(g_343, "g_343", print_hash_value);
    transparent_crc(g_357, "g_357", print_hash_value);
    transparent_crc(g_385, "g_385", print_hash_value);
    transparent_crc(g_424, "g_424", print_hash_value);
    transparent_crc(g_452, "g_452", print_hash_value);
    transparent_crc(g_453, "g_453", print_hash_value);
    transparent_crc(g_455, "g_455", print_hash_value);
    transparent_crc(g_517, "g_517", print_hash_value);
    transparent_crc(g_536, "g_536", print_hash_value);
    transparent_crc(g_574, "g_574", print_hash_value);
    transparent_crc(g_646, "g_646", print_hash_value);
    transparent_crc(g_671, "g_671", print_hash_value);
    transparent_crc(g_705, "g_705", print_hash_value);
    transparent_crc(g_718, "g_718", print_hash_value);
    transparent_crc(g_798, "g_798", print_hash_value);
    transparent_crc(g_836, "g_836", print_hash_value);
    transparent_crc(g_895, "g_895", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
