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
   unsigned f0;
   signed f1 : 9;
   unsigned f2;
   unsigned f3;
};


static char g_8 = (-1L);
static union U0 g_43 = {4294967293UL};
static unsigned g_44 = 4294967290UL;
static unsigned g_72 = 4294967294UL;
static unsigned char g_78 = 7UL;
static unsigned short g_80 = 65533UL;
static int g_83 = 8L;
static unsigned g_143 = 0x75E556C3L;
static unsigned char g_188 = 0xAFL;
static unsigned g_248 = 4294967295UL;
static short g_271 = 0x5F83L;
static unsigned g_294 = 4294967295UL;
static unsigned g_305 = 0x9765A480L;
static unsigned char g_312 = 0xCDL;
static unsigned char g_392 = 255UL;
static int g_460 = 0x1FF890C7L;
static unsigned g_485 = 0x3116022AL;
static unsigned short g_514 = 0x81D6L;
static union U0 g_515 = {4294967295UL};
static int g_536 = 0x552B3754L;
static unsigned g_655 = 5UL;
static unsigned g_739 = 1UL;
static int g_802 = 0x9C41F314L;



static int func_1(void);
static const short func_4(short p_5, unsigned char p_6, unsigned short p_7);
static unsigned char func_21(int p_22, union U0 p_23);
static union U0 func_24(unsigned char p_25, unsigned short p_26, unsigned char p_27, unsigned short p_28);
static unsigned short func_29(union U0 p_30, unsigned char p_31, unsigned short p_32);
static unsigned short func_35(int p_36, union U0 p_37, union U0 p_38);
static int func_39(unsigned short p_40, union U0 p_41, union U0 p_42);
static unsigned char func_45(short p_46, unsigned short p_47, unsigned p_48, int p_49, const union U0 p_50);
static int func_53(int p_54, char p_55, unsigned char p_56, int p_57, unsigned p_58);
static unsigned short func_61(const char p_62);
static int func_1(void)
{
    unsigned short l_9 = 65530UL;
    short l_10 = 0x5792L;
    union U0 l_33 = {0x89EC0021L};
    int l_735 = (-2L);
    unsigned l_758 = 8UL;
    unsigned char l_759 = 0x07L;
    unsigned char l_760 = 0x62L;
    unsigned char l_787 = 1UL;
    unsigned l_801 = 0x6EBD45C8L;
    g_515.f1 = (safe_mod_func_int16_t_s_s(((g_739 |= (func_4(g_8, l_9, ((l_10 >= (((l_735 = (safe_sub_func_int32_t_s_s(((safe_sub_func_uint16_t_u_u((l_10 != (((l_33.f1 = (safe_sub_func_int16_t_s_s((((safe_rshift_func_uint8_t_u_u(func_21(g_8, func_24(l_9, func_29(l_33, (safe_unary_minus_func_int16_t_s(l_10)), func_35(func_39(l_10, g_43, g_43), l_33, g_515)), l_10, g_515.f2)), l_33.f2)) | 0L) || l_33.f2), 0xDBF2L))) == 1L) >= 0x806FD953L)), l_9)) | 65535UL), l_9))) ^ g_305) != 0xD141FC25L)) >= 1UL)) || 1L)) <= g_305), g_305));
    l_760 = ((safe_lshift_func_int16_t_s_u((safe_rshift_func_uint8_t_u_s((+(safe_lshift_func_uint16_t_u_s(((-9L) && g_44), 5))), g_43.f1)), 3)) != func_35(g_8, func_24(l_9, (safe_mod_func_uint32_t_u_u((65533UL <= ((safe_lshift_func_uint16_t_u_s((safe_rshift_func_uint8_t_u_s((g_188 = (((safe_add_func_uint8_t_u_u(l_10, (safe_lshift_func_uint8_t_u_s((0x3A1EL != (safe_lshift_func_int8_t_s_s((0xB9C1F8C7L >= l_758), l_33.f1))), 5)))) <= l_33.f1) >= 1UL)), g_655)), l_735)) & l_33.f1)), 0x63A46405L)), g_739, l_759), g_43));
    l_735 = g_536;
    for (l_33.f3 = (-22); (l_33.f3 == 14); l_33.f3 = safe_add_func_uint32_t_u_u(l_33.f3, 1))
    {
        short l_767 = 0L;
        int l_773 = 0x14D38A60L;
        int l_774 = (-1L);
        int l_788 = 0x4406BC56L;
        unsigned char l_800 = 1UL;
        int l_807 = 0xF2710870L;
        unsigned char l_814 = 0UL;
    }
    return l_760;
}







static const short func_4(short p_5, unsigned char p_6, unsigned short p_7)
{
    short l_736 = 6L;
    union U0 l_737 = {4294967295UL};
    int l_738 = 1L;
    l_736 &= (p_7 | 65526UL);
    l_738 &= (l_737.f1 = l_736);
    return g_305;
}







static unsigned char func_21(int p_22, union U0 p_23)
{
    union U0 l_699 = {0x26E0E5A1L};
    const unsigned char l_709 = 0xF6L;
    const union U0 l_712 = {0x11C89E5FL};
    if ((l_699.f1 = func_29(l_699, l_699.f0, g_515.f1)))
    {
        unsigned l_700 = 0UL;
        int l_713 = 9L;
        const union U0 l_720 = {0x2B5CDED6L};
        unsigned char l_734 = 247UL;
lbl_725:
        l_699.f1 = g_143;
        if ((((0x29EF7A29L | l_712.f1) || 4294967292UL) > g_188))
        {
            unsigned l_716 = 0xB2221CEBL;
            int l_719 = 0xBC55500EL;
            unsigned l_721 = 0UL;
            g_43.f1 = (1L == p_23.f1);
        }
        else
        {
            for (g_188 = 0; (g_188 == 21); g_188 = safe_add_func_int8_t_s_s(g_188, 9))
            {
                unsigned l_724 = 0x99254EB8L;
                if (l_724)
                    break;
                if (g_515.f1)
                    goto lbl_725;
            }
        }
        l_699.f1 = (safe_rshift_func_uint16_t_u_u(((p_23.f1 || l_712.f0) >= p_22), g_43.f1));
    }
    else
    {
        p_23.f1 |= g_312;
    }
    return g_83;
}







static union U0 func_24(unsigned char p_25, unsigned short p_26, unsigned char p_27, unsigned short p_28)
{
    int l_691 = 0x3DC98100L;
    short l_694 = 0xA7ADL;
    for (g_515.f3 = 0; (g_515.f3 >= 5); g_515.f3++)
    {
        union U0 l_695 = {0xC45A414DL};
        union U0 l_696 = {4294967292UL};
        short l_697 = 0L;
        unsigned l_698 = 0UL;
        g_460 = (g_515.f1 >= p_27);
        return l_696;
    }
    l_691 = (p_26 && g_655);
    return g_43;
}







static unsigned short func_29(union U0 p_30, unsigned char p_31, unsigned short p_32)
{
    unsigned l_684 = 0x01C32341L;
    int l_685 = (-1L);
    unsigned l_686 = 0UL;
    l_684 = (safe_rshift_func_int16_t_s_u((safe_lshift_func_uint8_t_u_u((p_31 & (0x7B25B388L || p_30.f3)), 5)), 14));
    l_685 = l_684;
    g_83 ^= l_686;
    return l_686;
}







static unsigned short func_35(int p_36, union U0 p_37, union U0 p_38)
{
    int l_537 = 0xC98A87C7L;
    int l_598 = (-4L);
    unsigned l_627 = 0xD12C9894L;
    union U0 l_672 = {4294967293UL};
    for (p_38.f2 = 0; (p_38.f2 > 20); ++p_38.f2)
    {
        unsigned short l_524 = 7UL;
        int l_531 = 0x5951E3A4L;
        int l_532 = 5L;
        union U0 l_557 = {1UL};
        unsigned short l_558 = 0x9E98L;
        short l_632 = 0x539DL;
        unsigned l_633 = 0xEDBEB683L;
        int l_679 = 8L;
        p_36 = g_80;
    }
    return l_672.f2;
}







static int func_39(unsigned short p_40, union U0 p_41, union U0 p_42)
{
    int l_51 = (-4L);
    int l_52 = (-9L);
    const int l_63 = 0x87B332E0L;
    const union U0 l_156 = {1UL};
    union U0 l_492 = {2UL};
    short l_508 = 1L;
    int l_513 = 0L;
    if ((((g_44 ^= (-9L)) ^ func_45((l_51 = l_51), l_52, (+(~l_52)), func_53(((safe_sub_func_uint16_t_u_u(func_61(l_63), l_52)) <= g_8), (g_83 |= ((safe_sub_func_uint8_t_u_u(((p_41.f2 ^ 65527UL) && 8UL), 1UL)) | l_63)), p_41.f2, p_40, l_63), l_156)) < p_42.f2))
    {
        const union U0 l_491 = {0x908A3E8CL};
        unsigned l_493 = 0x1144EA5EL;
        l_493 = func_45(g_392, (p_42.f1 || (safe_sub_func_uint16_t_u_u(p_42.f1, l_51))), l_156.f3, g_294, (l_492 = l_491));
        l_51 = g_44;
        l_52 = g_143;
        p_42.f1 = (safe_lshift_func_int16_t_s_u((safe_rshift_func_int8_t_s_u((safe_rshift_func_int16_t_s_s((safe_sub_func_uint8_t_u_u((((l_52 <= g_78) <= l_156.f0) < g_248), p_42.f2)), ((((g_392 != (g_188 = ((safe_lshift_func_uint8_t_u_u(((((safe_add_func_uint16_t_u_u(p_42.f3, p_41.f1)) | (safe_lshift_func_uint16_t_u_s(g_485, l_156.f2))) == g_271) & g_72), 1)) > p_42.f0))) <= 1L) && 0xC7L) | 0x0BL))), p_41.f3)), l_508));
    }
    else
    {
        return l_51;
    }
    for (g_460 = 0; (g_460 < (-20)); g_460 = safe_sub_func_uint16_t_u_u(g_460, 8))
    {
        unsigned l_511 = 4294967289UL;
        return l_511;
    }
    g_43.f1 = (4294967286UL | (safe_unary_minus_func_int16_t_s((l_513 & (g_514 = g_294)))));
    return g_392;
}







static unsigned char func_45(short p_46, unsigned short p_47, unsigned p_48, int p_49, const union U0 p_50)
{
    short l_168 = 0x5938L;
    int l_169 = 0x29B62C09L;
    int l_172 = (-1L);
    int l_244 = 0x41331432L;
    unsigned char l_269 = 255UL;
    unsigned l_311 = 0x941ABE3FL;
    char l_476 = 0L;
    int l_484 = (-8L);
    char l_488 = 0x26L;
    if (((safe_add_func_int32_t_s_s((l_172 = ((((+(((g_72 >= l_172) == p_49) == 0L)) > 0x89L) & l_172) < 0x1AAA12BEL)), g_72)) ^ l_169))
    {
        char l_173 = 0L;
        l_173 = 0xF0B4F352L;
        g_83 = 7L;
    }
    else
    {
        unsigned short l_174 = 0x77A3L;
        int l_187 = 0x68A9B376L;
        char l_191 = 0xA5L;
        int l_198 = (-1L);
        short l_203 = 0xECEAL;
        const unsigned short l_461 = 0x6390L;
        int l_464 = 0x67C69454L;
        if (((l_174 <= (p_50.f1 ^ (safe_sub_func_int32_t_s_s((safe_sub_func_uint32_t_u_u((safe_mod_func_int32_t_s_s(((safe_add_func_int16_t_s_s((g_188 = (safe_add_func_uint32_t_u_u(l_174, (((safe_lshift_func_uint16_t_u_s(p_48, (~l_172))) > (l_187 = p_50.f1)) != g_80)))), l_174)) == (safe_sub_func_int8_t_s_s(((p_47 = g_83) || g_72), 7UL))), g_78)), g_143)), g_143)))) && l_191))
        {
            short l_199 = 0xA68CL;
            int l_202 = 1L;
            unsigned l_209 = 0x4D00D91CL;
            l_169 &= ((g_83 = (safe_sub_func_uint32_t_u_u(((l_203 && p_47) > 0xF7L), (-9L)))) == l_168);
            if ((l_168 || (l_174 | (safe_mod_func_int32_t_s_s(l_209, l_168)))))
            {
                unsigned l_214 = 0UL;
                int l_215 = (-4L);
                int l_242 = (-1L);
                g_43.f1 = l_203;
lbl_249:
                if ((0xD8L >= ((safe_mod_func_int32_t_s_s((0x7E51FD47L <= ((safe_rshift_func_uint8_t_u_s((l_172 = (g_80 > ((g_8 ^ (((l_215 ^= l_214) > g_78) & 0x4BL)) < ((((safe_add_func_int8_t_s_s((safe_sub_func_uint32_t_u_u(g_80, ((safe_unary_minus_func_uint8_t_u((safe_rshift_func_uint8_t_u_u((l_209 >= g_72), 5)))) >= g_188))), p_50.f2)) != g_43.f1) > p_50.f2) & g_43.f1)))), l_214)) & l_199)), g_188)) | 3L)))
                {
                    const unsigned char l_241 = 248UL;
                    for (g_83 = 0; (g_83 > (-10)); g_83 = safe_sub_func_uint16_t_u_u(g_83, 5))
                    {
                        if (g_80)
                            break;
                        if (g_43.f1)
                            goto lbl_249;
                    }
                    for (p_47 = 17; (p_47 < 27); ++p_47)
                    {
                        short l_227 = 2L;
                        l_227 &= g_78;
                    }
                    for (l_191 = 5; (l_191 < 5); l_191 = safe_add_func_uint16_t_u_u(l_191, 7))
                    {
                        int l_230 = 0x1D7C410AL;
                        unsigned l_243 = 1UL;
                        g_83 = ((0xFDL >= l_230) > (l_202 = l_172));
                        l_215 = (safe_sub_func_int32_t_s_s((safe_mod_func_uint8_t_u_u((safe_mod_func_int32_t_s_s((p_50.f1 && p_48), (l_202 = (4294967292UL ^ (((g_8 > (p_50.f2 <= p_50.f1)) ^ l_199) && p_46))))), p_46)), 6UL));
                        l_172 = ((p_50.f0 == (l_243 | p_47)) > 5L);
                        l_244 = g_188;
                    }
                }
                else
                {
                    int l_245 = 0x543B9BA4L;
                    l_202 = p_50.f3;
                }
                l_215 = p_49;
            }
            else
            {
                unsigned l_250 = 4294967295UL;
                l_172 |= g_188;
                if (l_209)
                    goto lbl_251;
lbl_251:
                l_187 = l_250;
                g_83 = p_49;
            }
        }
        else
        {
            int l_264 = 0x28F88B38L;
            int l_272 = 7L;
            if (g_8)
            {
                for (l_191 = 0; (l_191 != (-25)); l_191 = safe_sub_func_uint8_t_u_u(l_191, 5))
                {
                    const int l_258 = 8L;
                    if ((safe_sub_func_int16_t_s_s(0x119EL, 65526UL)))
                    {
                        return l_174;
                    }
                    else
                    {
                        unsigned l_259 = 0x8A8F1D4CL;
                        l_259 = g_80;
                    }
                    l_272 = (g_271 = ((g_83 = (safe_sub_func_int8_t_s_s((p_48 == (g_43.f3 = (safe_sub_func_uint8_t_u_u(l_264, (safe_lshift_func_uint16_t_u_u(0UL, (((g_78 ^= (g_188 = (safe_mod_func_int32_t_s_s(p_50.f2, g_143)))) | p_47) < g_43.f1))))))), (l_269 >= (safe_unary_minus_func_uint32_t_u((l_269 || p_49))))))) != 0x29E3FC97L));
                    l_198 = l_269;
                }
            }
            else
            {
                unsigned l_273 = 0x63E1A428L;
                g_43.f1 = 0L;
                l_273 ^= l_168;
            }
        }
        if (g_8)
        {
            const int l_286 = 1L;
            unsigned l_287 = 1UL;
            unsigned l_288 = 0x45B850C9L;
            int l_289 = 1L;
            g_83 = ((l_198 = g_80) && (-7L));
            for (g_248 = 4; (g_248 <= 34); ++g_248)
            {
                short l_306 = 0L;
                int l_314 = (-1L);
                char l_324 = (-5L);
                unsigned l_343 = 5UL;
                unsigned short l_344 = 0xA9F5L;
                unsigned l_347 = 4294967287UL;
                if ((((((safe_sub_func_int32_t_s_s(0xB2D01FADL, (l_289 = (safe_rshift_func_uint8_t_u_s(((4294967286UL ^ p_50.f2) ^ (safe_add_func_int32_t_s_s(p_50.f1, (((0x81DFL | (safe_sub_func_uint32_t_u_u((0x46CCL < (p_50.f0 ^ (((((safe_lshift_func_int16_t_s_u((g_271 = (p_46 & 0UL)), l_286)) <= l_168) < p_46) >= l_287) <= l_288))), p_46))) == 0xA575AA0CL) > (-1L))))), l_172))))) <= g_78) != 0x48L) & 0x0AL) ^ 3UL))
                {
                    unsigned l_304 = 1UL;
                    g_83 = ((safe_add_func_int32_t_s_s(0x17AB8700L, (p_50.f2 == g_188))) & ((safe_mod_func_uint32_t_u_u(g_294, 0x720F163DL)) >= p_48));
                    if (l_286)
                        break;
                    l_306 = (((((g_78 = ((safe_lshift_func_int16_t_s_u(p_48, l_304)) != g_305)) != l_286) != g_188) | g_188) | l_244);
                    g_83 ^= (((((((g_312 = p_50.f1) & p_48) <= 8UL) >= 0x02L) | l_288) == g_80) ^ l_304);
                }
                else
                {
                    unsigned short l_313 = 0xFC45L;
                    if (p_50.f2)
                    {
                        int l_315 = 6L;
                        if (l_313)
                            break;
                        if (p_49)
                            break;
                        l_314 &= 0x36921B34L;
                        l_315 = g_72;
                    }
                    else
                    {
                        char l_325 = 0x3BL;
                        int l_326 = (-5L);
                        l_326 = ((g_80 = (g_83 && g_43.f1)) == (((safe_lshift_func_int8_t_s_s(g_83, (((((l_314 ^= p_48) | (g_72 && (((safe_sub_func_uint16_t_u_u((g_43.f1 ^ p_50.f2), g_248)) <= ((((p_47 = (safe_add_func_uint32_t_u_u((((safe_rshift_func_uint16_t_u_s(g_43.f1, 0)) < g_78) ^ p_50.f2), p_49))) >= g_188) < l_324) == 0xA4ECL)) & (-9L)))) > 0x025CL) | l_168) || g_72))) <= 0x1DD0L) ^ l_325));
                    }
                    g_83 = (((4UL ^ g_80) > (safe_rshift_func_int8_t_s_u((g_305 == (!g_312)), 5))) > 0x624DL);
                }
                if ((g_43.f1 == g_43.f1))
                {
                    g_83 = p_50.f1;
                }
                else
                {
                    unsigned short l_329 = 1UL;
                    int l_337 = 0x2CFCB363L;
                    l_187 = (g_312 != g_294);
                    if (g_78)
                    {
                        g_83 = p_47;
                    }
                    else
                    {
                        unsigned l_330 = 4294967294UL;
                        int l_338 = 0xCCC99036L;
                        l_187 |= (l_289 |= func_53(((((+(g_43.f3 = (l_329 = (g_80 <= p_50.f1)))) | (l_330 && ((safe_rshift_func_uint8_t_u_s(p_50.f0, g_72)) && (safe_add_func_int16_t_s_s(((p_46 = 0x039DL) & p_50.f0), ((((safe_rshift_func_uint16_t_u_u(g_188, g_80)) > l_324) != p_49) != l_244)))))) < 0xDE0B8B0CL) & p_48), l_330, l_337, p_50.f0, p_50.f1));
                        l_338 = (6UL && g_248);
                        l_338 = ((safe_lshift_func_uint16_t_u_s((((l_324 >= p_49) == l_203) && 4L), (l_344 ^= ((l_343 <= 0xD02BA2B4L) && p_50.f0)))) < l_286);
                        g_43.f1 = p_46;
                    }
                }
                g_83 ^= (l_198 = (safe_add_func_int8_t_s_s(g_143, l_347)));
                g_83 = (-1L);
            }
            g_43.f1 = ((l_287 > 0x64L) <= p_50.f1);
        }
        else
        {
            short l_384 = (-3L);
            int l_418 = 1L;
            int l_433 = 0x45F873B4L;
lbl_479:
            for (g_80 = 0; (g_80 == 49); g_80 = safe_add_func_uint8_t_u_u(g_80, 7))
            {
                unsigned char l_358 = 0UL;
                int l_365 = 2L;
                if (((l_358 & (safe_rshift_func_uint8_t_u_s((((3L <= p_50.f3) ^ (l_203 <= 0xA404D156L)) && g_312), (((safe_add_func_uint16_t_u_u((safe_sub_func_int16_t_s_s((l_172 == p_50.f3), (l_365 &= 0x63ACL))), p_46)) ^ g_305) > p_50.f3)))) == g_271))
                {
                    return p_50.f0;
                }
                else
                {
                    int l_378 = 0xA41FB5AAL;
                    int l_393 = (-8L);
                    for (g_72 = (-18); (g_72 >= 14); g_72 = safe_add_func_int16_t_s_s(g_72, 1))
                    {
                        short l_379 = 0L;
                        l_187 |= (safe_rshift_func_int8_t_s_s((safe_lshift_func_int8_t_s_s((((safe_lshift_func_int16_t_s_s((((safe_lshift_func_uint8_t_u_u(((safe_add_func_uint16_t_u_u((0xEDL ^ l_378), l_379)) ^ (l_393 = (safe_rshift_func_uint16_t_u_u((((safe_lshift_func_uint16_t_u_s((l_384 <= (l_172 &= (safe_add_func_int32_t_s_s(p_46, (0x6501L != g_78))))), (g_271 = (safe_lshift_func_uint8_t_u_s(g_305, (safe_unary_minus_func_uint16_t_u(((g_392 = (g_312 = ((safe_rshift_func_uint8_t_u_s(g_305, 5)) > g_83))) ^ l_379)))))))) == l_378) < g_72), g_305)))), g_8)) || 0x36AA9CF4L) >= g_188), 4)) < 0xDCL) < p_50.f2), 3)), 7));
                    }
                    g_43.f1 = (l_358 && (p_50.f0 < ((safe_sub_func_int32_t_s_s((!g_143), p_47)) | (p_47 || p_50.f0))));
                }
                for (g_83 = (-29); (g_83 < 10); g_83++)
                {
                    for (p_47 = 0; (p_47 == 16); p_47++)
                    {
                        const unsigned l_400 = 0UL;
                        l_187 = l_400;
                    }
                }
                if (g_248)
                {
                    int l_401 = 0x68128F69L;
                    l_365 |= l_401;
                }
                else
                {
                    l_169 ^= ((g_43.f1 = (0x83EEL | ((~0L) <= 0UL))) | p_47);
                    g_83 ^= (l_269 == ((safe_rshift_func_uint16_t_u_s(g_8, 3)) == p_50.f2));
                    l_187 = g_72;
                    if (g_392)
                        break;
                }
            }
            if ((safe_unary_minus_func_uint32_t_u(((safe_rshift_func_uint8_t_u_u(((safe_sub_func_int16_t_s_s(((g_271 |= l_384) <= ((p_50.f3 >= (((p_46 |= (safe_lshift_func_uint16_t_u_s((p_49 <= (0xD1F9L | (l_172 |= 0UL))), 10))) <= ((safe_sub_func_int8_t_s_s(l_244, 1L)) & l_191)) != g_80)) == 0xEB4F25C2L)), 0xB086L)) <= 0x31L), 0)) > p_50.f2))))
            {
                int l_415 = 6L;
                int l_436 = 0x8720E440L;
                unsigned char l_441 = 0x18L;
                l_418 = (l_198 = (((((g_392 > (l_415 < (safe_rshift_func_int8_t_s_s(0xBCL, 0)))) >= 0x2E99EA02L) < l_415) == ((g_43.f3 = p_49) & l_384)) >= 0xC8C2L));
lbl_463:
                if ((safe_mod_func_int32_t_s_s(g_78, p_50.f3)))
                {
                    g_83 &= (l_198 = l_187);
                    if (g_294)
                        goto lbl_463;
                    g_83 ^= (g_143 & (g_294 != (p_49 ^ g_294)));
                }
                else
                {
                    unsigned l_423 = 0x0ECD0386L;
                    if ((l_433 = (g_312 < (l_418 = (g_305 > (((((safe_sub_func_int8_t_s_s(((g_248 ^ l_423) >= 9UL), (safe_lshift_func_uint8_t_u_s(l_423, ((safe_lshift_func_int8_t_s_s(p_50.f3, (((safe_lshift_func_int16_t_s_u((safe_lshift_func_uint8_t_u_s((+l_384), 6)), (safe_unary_minus_func_uint16_t_u(p_47)))) == p_50.f1) != p_50.f3))) >= l_418))))) || g_312) || g_83) < p_49) != 65535UL))))))
                    {
                        return p_50.f1;
                    }
                    else
                    {
                        int l_437 = 0x77B6DBF4L;
                        int l_438 = 0x5D843B03L;
                        l_438 |= (((~(safe_lshift_func_int16_t_s_s(func_53(p_50.f2, l_436, g_43.f1, l_437, p_46), 14))) == p_50.f1) >= (l_174 && (g_8 | p_50.f3)));
                    }
                    for (l_187 = (-18); (l_187 <= (-4)); l_187 = safe_add_func_int32_t_s_s(l_187, 1))
                    {
                        l_244 &= l_441;
                    }
                    for (g_43.f0 = 0; (g_43.f0 > 18); g_43.f0++)
                    {
                        short l_462 = 1L;
                        l_462 = ((safe_lshift_func_uint16_t_u_s(((safe_sub_func_int32_t_s_s((((g_460 &= (safe_rshift_func_uint8_t_u_s((safe_sub_func_int8_t_s_s(0L, (safe_lshift_func_uint16_t_u_s((g_43.f2 && (((g_188 != (l_423 & func_61(((0L >= ((l_433 < l_423) > p_50.f0)) == ((safe_rshift_func_uint16_t_u_s((safe_sub_func_int8_t_s_s((func_61(g_83) < 0x3769L), l_415)), p_47)) == 0x74L))))) == g_83) != g_305)), 12)))), p_50.f2))) != g_271) ^ (-7L)), l_461)) == p_50.f2), 0)) ^ g_83);
                    }
                }
                if (func_53((l_418 = g_43.f2), (!((func_61(func_61(((0x43L < (g_80 | (l_436 = g_8))) == (l_464 | (safe_add_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u(p_47, l_415)), g_271)))))) > (-1L)) < p_50.f2)), g_188, g_43.f3, p_50.f3))
                {
                    short l_472 = 0x3728L;
                    for (g_72 = 0; (g_72 > 29); g_72++)
                    {
                        int l_471 = (-10L);
                        l_472 = (1L >= (l_172 = (l_471 = l_436)));
                        l_169 ^= l_384;
                    }
                }
                else
                {
                    return p_50.f1;
                }
            }
            else
            {
                short l_477 = 1L;
                int l_478 = (-1L);
                l_478 = (safe_unary_minus_func_uint32_t_u(g_271));
                if (g_43.f1)
                    goto lbl_479;
            }
        }
    }
    g_83 = g_248;
    return p_50.f1;
}







static int func_53(int p_54, char p_55, unsigned char p_56, int p_57, unsigned p_58)
{
    unsigned l_84 = 0x59719BD9L;
    char l_99 = 0x23L;
    int l_100 = 0L;
    int l_106 = 0L;
    short l_132 = 0xC734L;
    unsigned l_141 = 4UL;
    const short l_142 = 0xBDA4L;
    int l_155 = 0xA4A6FB27L;
    l_84 = g_43.f3;
    if ((safe_mod_func_uint32_t_u_u(((safe_lshift_func_uint8_t_u_s(0UL, 1)) && ((func_61((l_84 ^ (safe_add_func_uint32_t_u_u(l_84, p_54)))) != (p_55 ^= 5L)) && (safe_add_func_int16_t_s_s(func_61((safe_sub_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s((l_100 = (g_78 = (((-10L) == l_84) & ((safe_lshift_func_int8_t_s_u(0xB1L, 2)) | l_99)))), g_43.f0)), 0x0CA1L))), 0x349FL)))), p_54)))
    {
        unsigned short l_103 = 0xFD42L;
        int l_108 = 0x85684CF7L;
        int l_129 = 0x2F9381BCL;
        if (((safe_rshift_func_int16_t_s_u(l_103, g_78)) < ((safe_mod_func_uint16_t_u_u((l_106 = l_103), (p_54 ^ ((g_8 & (g_80 = (g_78 < (p_57 ^ p_57)))) && (((g_80 = 0x6E32L) ^ 0x6ABBL) & 0x409B4FD7L))))) || g_72)))
        {
            int l_107 = 1L;
            short l_126 = 0x8A88L;
            if (g_78)
            {
                l_108 ^= (l_107 = l_106);
                for (g_78 = 24; (g_78 <= 27); g_78 = safe_add_func_uint32_t_u_u(g_78, 1))
                {
                    unsigned char l_111 = 248UL;
                    l_100 = 0x5E375EFDL;
                    if (l_108)
                        goto lbl_128;
                    l_107 = ((p_54 > l_111) == p_58);
                    l_100 = l_84;
                }
                l_108 = 1L;
            }
            else
            {
                unsigned char l_127 = 0UL;
                g_83 = (g_78 ^ (g_43.f2 && (l_127 = (safe_add_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u(g_43.f0, (0x8015L >= 7L))), 9)), ((safe_add_func_int32_t_s_s(p_57, (safe_add_func_uint16_t_u_u(l_103, (g_83 < ((safe_lshift_func_int16_t_s_s((safe_mod_func_uint32_t_u_u(l_126, l_106)), 13)) > g_78)))))) | g_43.f3))))));
                if (g_43.f3)
                    goto lbl_128;
            }
lbl_128:
            l_108 = p_55;
            l_129 = (l_126 <= ((l_108 = l_100) ^ g_8));
        }
        else
        {
            return g_72;
        }
        l_108 = p_58;
    }
    else
    {
        unsigned char l_138 = 1UL;
        unsigned l_144 = 8UL;
        int l_145 = 0xE737D706L;
        int l_146 = (-7L);
        for (p_58 = 7; (p_58 >= 40); ++p_58)
        {
            g_43.f1 = p_55;
            g_83 |= 1L;
        }
        g_43.f1 = (l_132 == ((safe_mod_func_uint16_t_u_u((l_100 & (((safe_unary_minus_func_uint8_t_u((0UL || (0xD233L == (safe_mod_func_uint8_t_u_u(p_56, 251UL)))))) <= ((p_56 && l_138) & l_141)) > l_106)), p_58)) && l_84));
        l_146 = (l_145 ^= (((g_83 >= 0x9EL) <= ((p_57 || g_72) < g_83)) && (l_142 | (g_80 ^= (((g_143 = p_54) < 248UL) < l_144)))));
        g_43.f1 ^= (g_83 |= (safe_add_func_int32_t_s_s((l_99 && (0x862678A4L >= 1UL)), (l_155 ^= (safe_rshift_func_int16_t_s_s(((safe_mod_func_uint32_t_u_u((g_72 |= p_56), (l_100 = 0x3891D30EL))) > (safe_lshift_func_uint16_t_u_s(0x7A1FL, 9))), 7))))));
    }
    return p_56;
}







static unsigned short func_61(const char p_62)
{
    char l_70 = 0L;
    int l_71 = 3L;
    int l_73 = 0x46AC1DEAL;
    int l_76 = 0x7E9A03A1L;
    int l_77 = (-1L);
    int l_79 = 0x0DCB3DF1L;
    g_80 ^= (safe_add_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s((-6L), 3)), (l_79 = (g_78 = ((l_77 &= (1UL < ((safe_rshift_func_int16_t_s_s((g_72 = (l_71 = (l_70 || p_62))), (l_73 |= p_62))) ^ (safe_sub_func_int8_t_s_s((((l_76 |= g_43.f0) == (l_70 && ((((p_62 ^ p_62) & l_70) >= p_62) ^ 5UL))) <= 0x969E96C9L), g_43.f3))))) || l_71)))));
    return p_62;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_8, "g_8", print_hash_value);
    transparent_crc(g_43.f1, "g_43.f1", print_hash_value);
    transparent_crc(g_44, "g_44", print_hash_value);
    transparent_crc(g_72, "g_72", print_hash_value);
    transparent_crc(g_78, "g_78", print_hash_value);
    transparent_crc(g_80, "g_80", print_hash_value);
    transparent_crc(g_83, "g_83", print_hash_value);
    transparent_crc(g_143, "g_143", print_hash_value);
    transparent_crc(g_188, "g_188", print_hash_value);
    transparent_crc(g_248, "g_248", print_hash_value);
    transparent_crc(g_271, "g_271", print_hash_value);
    transparent_crc(g_294, "g_294", print_hash_value);
    transparent_crc(g_305, "g_305", print_hash_value);
    transparent_crc(g_312, "g_312", print_hash_value);
    transparent_crc(g_392, "g_392", print_hash_value);
    transparent_crc(g_460, "g_460", print_hash_value);
    transparent_crc(g_485, "g_485", print_hash_value);
    transparent_crc(g_514, "g_514", print_hash_value);
    transparent_crc(g_515.f0, "g_515.f0", print_hash_value);
    transparent_crc(g_515.f1, "g_515.f1", print_hash_value);
    transparent_crc(g_515.f2, "g_515.f2", print_hash_value);
    transparent_crc(g_515.f3, "g_515.f3", print_hash_value);
    transparent_crc(g_536, "g_536", print_hash_value);
    transparent_crc(g_655, "g_655", print_hash_value);
    transparent_crc(g_739, "g_739", print_hash_value);
    transparent_crc(g_802, "g_802", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
