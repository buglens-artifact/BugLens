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



static int g_3 = 1L;
static int g_5 = 0x7013DCE9L;
static int * const volatile g_4 = &g_5;
static char g_16 = 1L;
static int g_30 = 0xDC86695CL;
static unsigned char g_34 = 0x89L;
static char g_67 = (-1L);
static unsigned g_69 = 0UL;
static int g_71 = 1L;
static volatile int g_137 = 1L;
static volatile unsigned char g_140 = 0xD6L;
static volatile unsigned g_183 = 1UL;
static int g_204 = 0x7A404EFFL;
static int *g_207 = &g_204;
static short g_225 = 5L;
static unsigned g_239 = 0xCE0AEDB7L;
static unsigned short g_257 = 0xF0A9L;
static unsigned short g_261 = 0x9336L;
static unsigned g_263 = 0UL;
static unsigned short *g_350 = &g_257;
static unsigned short **g_349 = &g_350;
static unsigned short *** volatile g_348 = &g_349;
static volatile unsigned g_353 = 4294967295UL;
static volatile unsigned *g_352 = &g_353;
static volatile unsigned ** volatile g_351 = &g_352;
static short **g_359 = (void*)0;
static volatile unsigned short g_527 = 0x4E22L;
static char g_558 = 0x41L;
static int ** volatile g_570 = &g_207;
static int ** const volatile g_593 = &g_207;
static int ** volatile g_653 = (void*)0;



static int func_1(void);
static int func_6(unsigned char p_7, int * const p_8, unsigned p_9, int * p_10);
static int * func_11(int * p_12);
static unsigned short func_17(short p_18);
static char * func_19(unsigned short p_20, char * p_21, char p_22, int * const p_23);
static char * func_24(int * p_25);
static short func_42(unsigned char p_43, unsigned p_44, int * p_45, char * p_46, unsigned short p_47);
static char * func_48(char * p_49, char p_50, unsigned char * p_51, char * p_52);
static char func_53(unsigned char * p_54, int * p_55, unsigned char * p_56, unsigned char p_57, unsigned p_58);
static unsigned char * func_59(int p_60, unsigned char * p_61);
static int func_1(void)
{
    int *l_2 = &g_3;
    int *l_605 = &g_204;
    (*g_4) = ((*l_2) = (-1L));
    if (func_6(g_5, func_11(l_2), g_261, l_2))
    {
        for (g_204 = 28; (g_204 > 1); --g_204)
        {
            char l_604 = 0xBAL;
            for (g_261 = 0; (g_261 == 43); g_261++)
            {
                for (g_71 = 0; (g_71 < (-11)); g_71--)
                {
                    (*l_2) = l_604;
                }
            }
        }
    }
    else
    {
        int **l_606 = &l_605;
        (*l_606) = l_605;
        for (g_257 = 0; (g_257 >= 48); g_257 = safe_add_func_uint32_t_u_u(g_257, 1))
        {
            int **l_609 = &g_207;
            int *l_610 = &g_71;
            int *l_611 = &g_3;
            int *l_612 = &g_71;
            int *l_613 = &g_30;
            int *l_614 = &g_71;
            int *l_615 = (void*)0;
            int *l_616 = (void*)0;
            int *l_617 = &g_5;
            int *l_618 = (void*)0;
            int *l_619 = &g_5;
            int *l_620 = &g_3;
            int *l_621 = &g_71;
            int *l_622 = &g_5;
            int *l_623 = &g_30;
            int *l_624 = &g_71;
            int *l_625 = &g_3;
            int *l_626 = &g_3;
            int *l_627 = &g_71;
            int *l_628 = &g_3;
            int *l_629 = &g_5;
            int *l_630 = &g_3;
            int *l_631 = &g_71;
            int *l_632 = &g_30;
            int *l_633 = &g_3;
            int *l_634 = &g_204;
            int *l_635 = &g_204;
            int *l_636 = &g_204;
            int *l_637 = &g_30;
            int *l_638 = &g_5;
            int *l_639 = &g_30;
            int *l_640 = &g_3;
            int *l_641 = &g_3;
            int *l_642 = &g_5;
            int *l_643 = (void*)0;
            int *l_644 = &g_204;
            int *l_645 = &g_3;
            int *l_646 = &g_71;
            unsigned l_647 = 0x0247A357L;
            (*l_609) = ((*l_606) = (*l_606));

            ;
            l_647--;
            (**g_593) = 0x97816C64L;
        }


        return g_257;
    }




    for (g_16 = (-12); (g_16 <= (-27)); g_16 = safe_sub_func_int32_t_s_s(g_16, 2))
    {
        int *l_652 = &g_30;
        l_2 = l_652;

        ;
        (*l_652) = ((*l_652) | (*l_605));
    }

    ;
    return (*l_2);
}







static int func_6(unsigned char p_7, int * const p_8, unsigned p_9, int * p_10)
{
    int **l_362 = &g_207;
    int *l_363 = &g_3;
    int *l_364 = &g_3;
    int *l_365 = &g_204;
    int *l_366 = &g_204;
    int *l_367 = &g_30;
    int *l_368 = (void*)0;
    int *l_369 = (void*)0;
    int *l_370 = (void*)0;
    int l_371 = 0x68CD56C2L;
    int *l_372 = (void*)0;
    int *l_373 = (void*)0;
    int *l_374 = &g_71;
    int *l_375 = &l_371;
    int *l_376 = &g_5;
    int *l_377 = (void*)0;
    int *l_378 = &g_3;
    int *l_379 = &g_5;
    int *l_380 = &g_204;
    int *l_381 = &g_5;
    int *l_382 = &l_371;
    int *l_383 = &g_5;
    int *l_384 = (void*)0;
    int *l_385 = &l_371;
    int *l_386 = &l_371;
    int *l_387 = &g_3;
    int *l_388 = (void*)0;
    int *l_389 = &g_3;
    int l_390 = 0x9EEE24A9L;
    int *l_391 = (void*)0;
    int *l_392 = &l_390;
    int *l_393 = &g_5;
    int *l_394 = (void*)0;
    int *l_395 = &g_5;
    int l_396 = 0L;
    int *l_397 = &g_30;
    int *l_398 = &l_371;
    int *l_399 = &g_30;
    int l_400 = 0x50F805FCL;
    int *l_401 = &g_204;
    int *l_402 = &g_5;
    int *l_403 = &l_390;
    int *l_404 = &g_5;
    int *l_405 = (void*)0;
    int *l_406 = &l_371;
    int *l_407 = &l_400;
    int l_408 = 0x4C687C59L;
    int *l_409 = &g_30;
    int *l_410 = &l_371;
    int *l_411 = (void*)0;
    int *l_412 = &g_3;
    int *l_413 = &g_30;
    int *l_414 = &g_3;
    int *l_415 = &g_71;
    int *l_416 = (void*)0;
    int *l_417 = &l_371;
    int *l_418 = (void*)0;
    int *l_419 = &l_390;
    int *l_420 = &l_396;
    int *l_421 = (void*)0;
    int *l_422 = &l_390;
    int *l_423 = &g_30;
    int *l_424 = &l_400;
    int *l_425 = &g_204;
    int *l_426 = &g_5;
    int *l_427 = &l_390;
    int *l_428 = &l_400;
    int *l_429 = &g_5;
    int l_430 = 0x97499E0CL;
    int *l_431 = &l_371;
    int *l_432 = &l_408;
    int *l_433 = &l_400;
    int *l_434 = (void*)0;
    int *l_435 = &l_371;
    int *l_436 = &g_3;
    int l_437 = 0xF20AB2C1L;
    int *l_438 = &g_30;
    int *l_439 = &g_71;
    int l_440 = 7L;
    int *l_441 = &l_440;
    int *l_442 = &g_3;
    int *l_443 = (void*)0;
    int l_444 = 7L;
    int l_445 = 0xD507F36AL;
    int *l_446 = &l_437;
    int *l_447 = &l_437;
    int l_448 = 0L;
    int *l_449 = &g_71;
    int *l_450 = &g_204;
    int *l_451 = &l_408;
    int *l_452 = &g_3;
    int *l_453 = &l_444;
    int *l_454 = &l_371;
    int *l_455 = (void*)0;
    int *l_456 = &l_437;
    int l_457 = (-1L);
    int *l_458 = &l_437;
    int *l_459 = &l_457;
    int *l_460 = &g_5;
    int *l_461 = &l_457;
    int *l_462 = (void*)0;
    int *l_463 = &l_444;
    int *l_464 = &l_390;
    int *l_465 = &l_408;
    int *l_466 = &l_444;
    int *l_467 = &l_371;
    int *l_468 = &l_445;
    int l_469 = 0x1C1880EFL;
    int *l_470 = &l_448;
    int *l_471 = (void*)0;
    int *l_472 = &l_371;
    int *l_473 = &g_204;
    int *l_474 = &g_204;
    int *l_475 = &g_71;
    int l_476 = 0xA6071FA6L;
    int *l_477 = (void*)0;
    int *l_478 = (void*)0;
    int *l_479 = &l_371;
    int *l_480 = &l_444;
    int *l_481 = &l_396;
    int *l_482 = (void*)0;
    int *l_483 = &l_476;
    int *l_484 = &l_440;
    int *l_485 = &l_437;
    int *l_486 = &l_445;
    int *l_487 = &g_5;
    int *l_488 = &l_476;
    int *l_489 = &l_469;
    int *l_490 = &l_437;
    int *l_491 = &l_457;
    int *l_492 = &l_371;
    int *l_493 = &l_437;
    int l_494 = 0x1C8523BBL;
    int *l_495 = &l_448;
    int l_496 = 0x66C8D2CAL;
    int *l_497 = (void*)0;
    int *l_498 = &l_400;
    int *l_499 = &l_430;
    int l_500 = 0xEDDAC260L;
    int *l_501 = (void*)0;
    int *l_502 = (void*)0;
    int *l_503 = &g_3;
    int *l_504 = &g_3;
    int *l_505 = (void*)0;
    int *l_506 = &l_494;
    int *l_507 = &g_5;
    int *l_508 = &l_371;
    int *l_509 = (void*)0;
    int *l_510 = (void*)0;
    int l_511 = 0x304BBA9FL;
    int *l_512 = &l_469;
    int *l_513 = &l_437;
    int *l_514 = (void*)0;
    int l_515 = 0x05BCD613L;
    int *l_516 = &l_390;
    int l_517 = 0x3E70040EL;
    int *l_518 = &g_30;
    int l_519 = 1L;
    int *l_520 = (void*)0;
    int l_521 = (-1L);
    int *l_522 = &l_390;
    int *l_523 = &l_437;
    int *l_524 = &l_430;
    int *l_525 = &l_519;
    int *l_526 = &l_400;
    short *l_532 = &g_225;
    short l_533 = 4L;
    unsigned char l_545 = 0xE5L;
    char *l_557 = &g_16;
    unsigned char l_559 = 0x58L;
    unsigned l_573 = 5UL;
    char *l_591 = (void*)0;
    (*l_362) = &g_71;

    ;
    g_527++;
    if (((*l_432) = (safe_mod_func_int16_t_s_s((l_532 != (void*)0), ((*l_532) |= (*l_499))))))
    {
        unsigned char l_534 = 1UL;
        l_534--;
    }
    else
    {
        unsigned l_537 = 0x2242C101L;
        int l_540 = 1L;
        int l_541 = 0L;
        int l_542 = 0x9984260BL;
        int l_543 = 0x312F68C6L;
        int l_544 = 0xFF51BFF6L;
        unsigned l_548 = 0xDCF7481FL;
        int *l_594 = &g_5;
        --l_537;
        ++l_545;
        l_548++;
        if ((safe_mod_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u((*l_435), 2)), (safe_rshift_func_uint16_t_u_u(p_9, ((l_537 & 0xEA24C7B2L) >= (g_558 &= ((func_17((p_9 > (*g_352))) < 0xEBL) < l_541))))))))
        {
            (*l_506) = 0x9C864BF7L;
        }
        else
        {
            unsigned char *l_575 = &l_559;
            int l_576 = (-1L);
            if ((&g_140 != &p_7))
            {
                char l_564 = 0x3CL;
                int *l_589 = (void*)0;
                char *l_590 = &g_67;
                (*l_441) = (l_559 | (safe_sub_func_int16_t_s_s((((void*)0 == &g_352) ^ g_239), (safe_add_func_int16_t_s_s((!((void*)0 != p_8)), l_564)))));
                for (l_537 = (-6); (l_537 >= 23); l_537 = safe_add_func_int8_t_s_s(l_537, 1))
                {
                    for (l_519 = (-14); (l_519 < (-28)); l_519 = safe_sub_func_uint32_t_u_u(l_519, 7))
                    {
                        int **l_569 = &l_411;
                        (*l_569) = p_8;

                        ;
                        (*g_570) = p_8;

                        ;
                        (*l_524) ^= (*g_207);
                    }
                }


                ;
                (*l_401) = (*p_8);
                if (((*l_441) = (safe_lshift_func_int16_t_s_s(l_573, 7))))
                {
                    unsigned short l_574 = 0x5D11L;
                    char *l_585 = &l_564;
                    char **l_584 = &l_585;
                    char **l_586 = (void*)0;
                    char *l_588 = &l_564;
                    char **l_587 = &l_588;
                    char *l_592 = &g_558;
                    (*l_472) = (l_574 < (((g_239 ^= func_53(&g_34, p_10, l_575, ((g_527 ^ 65529UL) == ((*l_557) ^= l_576)), (safe_mod_func_uint16_t_u_u(((((*l_592) = (safe_sub_func_uint8_t_u_u(((safe_sub_func_uint8_t_u_u((safe_unary_minus_func_int8_t_s(((((*l_587) = ((*l_584) = &g_67)) == (l_591 = (l_590 = &l_564))) <= (*g_350)))), (*l_402))) < (*g_350)), p_9))) >= l_541) >= l_548), p_9)))) > 0x7485A7D7L) & 0x99FDL));

                    ;
                    ;
                    ;
                    ;
                    (*g_593) = p_8;

                    ;
                    (*l_362) = p_10;
                }
                else
                {
                    (*l_362) = l_594;

                    ;
                }

                ;
                ;
                ;
            }
            else
            {
                int *l_597 = (void*)0;
                (*l_412) = ((*l_376) ^= (*p_10));
                for (l_469 = 0; (l_469 == 29); l_469 = safe_add_func_uint16_t_u_u(l_469, 1))
                {
                    (*l_362) = p_10;

                    ;
                    if ((*l_594))
                        break;
                    (*l_362) = p_10;
                    (*l_362) = &l_541;

                    ;
                }


            }


            ;

        }


        ;

    }


    ;

    return (*g_4);
}







static int * func_11(int * p_12)
{
    unsigned l_13 = 0x60E704F3L;
    int l_14 = 0x160CBEB9L;
    char *l_15 = &g_16;
    char *l_312 = &g_67;
    char **l_311 = &l_312;
    const char *l_314 = (void*)0;
    const char **l_313 = &l_314;
    int l_317 = 0x16474E88L;
    int l_333 = (-1L);
    unsigned short *l_346 = &g_257;
    (*p_12) &= (l_13 || 0xE677L);
    if ((l_333 = ((((*l_15) = (l_14 = l_13)) < ((func_17(((((*l_311) = func_19(l_13, func_24(&g_5), l_13, &g_5)) == ((*l_313) = &g_67)) ^ (l_317 = (safe_lshift_func_int16_t_s_u(l_13, l_13))))) <= l_13) == l_13)) || (*g_4))))
    {
        unsigned l_334 = 4294967292UL;
        unsigned *l_336 = &g_263;
        char *l_339 = &g_16;
        int l_340 = 0x13F6EE53L;
        unsigned short *l_345 = &g_261;
        g_204 |= ((*g_4) >= 0x9E81E94FL);
        l_340 = ((safe_unary_minus_func_uint16_t_u(l_13)) == l_334);
        for (l_340 = 0; (l_340 < (-17)); l_340--)
        {
            int * const l_343 = &l_14;
            int **l_344 = &g_207;
            unsigned short ***l_347 = (void*)0;
            (*l_344) = l_343;

            ;
            (*p_12) |= (l_345 != l_346);
            (*g_348) = &l_346;

            ;
        }


        ;
    }
    else
    {
        volatile unsigned ** volatile l_354 = &g_352;
        int l_355 = 0xDE02C90DL;
        short *l_357 = &g_225;
        short **l_356 = &l_357;
        short ***l_358 = (void*)0;
        short ***l_360 = (void*)0;
        short ***l_361 = &l_356;
        l_354 = g_351;
        (*p_12) &= l_355;
        (*l_361) = (g_359 = l_356);

        ;
    }


    ;
    ;

    return p_12;




}







static unsigned short func_17(short p_18)
{
    char l_318 = 0x2AL;
    short *l_321 = &g_225;
    int *l_322 = &g_30;
    if (func_42(g_30, ((0xA8L | 0x79L) > (l_318 ^ (safe_mod_func_int16_t_s_s(p_18, ((*g_4) & (((p_18 < l_318) <= ((*l_321) = 0xFE39L)) == p_18)))))), l_322, &l_318, g_3))
    {
        int **l_323 = &g_207;
        (*l_322) ^= p_18;
        (*l_323) = (void*)0;

        ;
    }
    else
    {
        char l_326 = 8L;
        unsigned char *l_331 = &g_34;
        unsigned *l_332 = &g_69;
        (*l_322) = ((safe_add_func_uint32_t_u_u((((-1L) <= (*l_322)) >= (((*l_321) = (g_225 >= l_326)) == 0L)), ((*l_332) = ((*l_322) != (safe_mod_func_uint32_t_u_u(l_326, (safe_add_func_int32_t_s_s((((p_18 || (func_53(&g_34, &g_3, l_331, g_137, g_204) || 0x28FA397CL)) | p_18) < l_326), 0xE9942918L)))))))) > g_239);
    }


    return p_18;
}







static char * func_19(unsigned short p_20, char * p_21, char p_22, int * const p_23)
{
    unsigned short l_308 = 0UL;
    short *l_309 = &g_225;
    int *l_310 = &g_30;
    (*g_207) |= (safe_sub_func_int16_t_s_s((3UL != l_308), ((*l_309) = l_308)));
    (*l_310) = ((*g_207) = (-4L));
    return &g_67;


}







static char * func_24(int * p_25)
{
    int * const l_28 = &g_5;
    unsigned char l_38 = 255UL;
    int *l_304 = &g_71;
    const int *l_305 = &g_3;
    for (g_3 = 0; (g_3 <= (-26)); g_3 = safe_sub_func_uint16_t_u_u(g_3, 1))
    {
        int *l_29 = &g_30;
        int *l_37 = &g_30;
        unsigned char *l_72 = &g_34;
        unsigned l_283 = 1UL;
        (*l_29) ^= ((!0L) || (&g_5 == l_28));
    }
    (*l_304) &= ((*g_207) = ((0L < 1L) && (*l_28)));
    l_305 = (void*)0;

    ;
    return &g_67;


}







static short func_42(unsigned char p_43, unsigned p_44, int * p_45, char * p_46, unsigned short p_47)
{
    char l_191 = 0xD5L;
    int *l_195 = (void*)0;
    int *l_196 = &g_30;
    unsigned char *l_221 = &g_34;
    for (g_71 = 0; (g_71 > (-7)); g_71--)
    {
        int *l_192 = &g_30;
        (*l_192) = l_191;
        (*l_192) = (*g_4);
    }
    if (((*l_196) &= ((*p_46) & (safe_add_func_uint8_t_u_u(p_43, g_3)))))
    {
        int l_201 = 0xCE8F1705L;
        unsigned char *l_210 = (void*)0;
        unsigned short l_222 = 0x8E9AL;
        char *l_236 = &g_67;
        char **l_235 = &l_236;
        unsigned *l_237 = (void*)0;
        unsigned *l_238 = &g_239;
        short *l_240 = &g_225;
        volatile int *l_241 = &g_137;
        if ((g_140 || p_44))
        {
            (*l_196) = (*p_45);
        }
        else
        {
            unsigned l_197 = 1UL;
            unsigned char *l_198 = (void*)0;
            int *l_202 = (void*)0;
            int *l_203 = &g_204;
            int **l_205 = &l_202;
            int **l_206 = &l_203;
            unsigned char **l_223 = (void*)0;
            unsigned char **l_224 = &l_198;
            unsigned char l_226 = 0x42L;
            (*l_196) = l_197;
            (*l_203) &= ((*l_196) = func_53(&p_43, p_45, &g_34, (p_43++), l_201));
            (*l_196) = (((p_45 = &g_3) != ((*l_205) = l_202)) & (((g_207 = ((*l_206) = &l_201)) == &g_3) <= (*p_46)));

            ;
            ;
            ;
            (*l_196) |= (safe_mod_func_int16_t_s_s(func_53(l_210, (p_45 = ((*l_205) = &l_201)), func_59((safe_rshift_func_uint8_t_u_u(l_201, (g_225 = (((safe_rshift_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s(((*l_221) = ((safe_add_func_int8_t_s_s((safe_add_func_uint16_t_u_u(0xC864L, g_5)), ((l_221 == ((*l_224) = func_59((l_222 = 0x0389EC31L), &g_34))) ^ 0x3AL))) & p_43)), g_5)), 7)) >= (*p_46)) | g_3)))), l_221), l_226, g_69), p_47));

            ;
            ;
            ;
        }

        ;
        ;
        (*l_196) &= ((g_71 | (~g_71)) > (65527UL <= (((safe_mod_func_uint16_t_u_u(((0x0720L <= ((*l_240) = (safe_add_func_int8_t_s_s(((*g_207) || ((g_69 <= (*p_46)) <= ((*l_238) = (safe_mod_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u(0x88B3L, (((*l_235) = l_210) == p_46))), l_222))))), g_140)))) && g_204), p_44)) == g_67) == g_204)));

        ;
        l_241 = &g_137;
    }
    else
    {
        unsigned short *l_256 = &g_257;
        unsigned short *l_260 = &g_261;
        unsigned *l_262 = &g_263;
        int l_264 = 0xE172707FL;
        (*g_207) = ((*l_196) = (((safe_mod_func_uint16_t_u_u(((*l_256) ^= (safe_sub_func_uint32_t_u_u((safe_add_func_int8_t_s_s(((safe_add_func_uint32_t_u_u((safe_mod_func_uint16_t_u_u(((p_47 ^ (safe_mod_func_int8_t_s_s(((((*p_45) < g_204) != 0x52A4L) || g_30), 1UL))) != p_47), g_137)), 0x83F7B260L)) & l_264), 0x5FL)), (*p_45)))), (*l_196))) >= l_264) && 0x84L));
    }



    return g_3;
}







static char * func_48(char * p_49, char p_50, unsigned char * p_51, char * p_52)
{
    int *l_143 = (void*)0;
    int *l_144 = &g_71;
    int *l_145 = (void*)0;
    int *l_146 = (void*)0;
    int *l_147 = &g_71;
    int *l_148 = (void*)0;
    int *l_149 = &g_71;
    int *l_150 = (void*)0;
    int *l_151 = &g_71;
    int *l_152 = &g_71;
    int *l_153 = &g_71;
    int *l_154 = (void*)0;
    int *l_155 = &g_71;
    int *l_156 = &g_71;
    int *l_157 = &g_71;
    int *l_158 = (void*)0;
    int *l_159 = &g_71;
    int l_160 = 0x06D4EB3EL;
    int *l_161 = &l_160;
    int l_162 = 0x7434CA83L;
    int *l_163 = &l_162;
    int *l_164 = &l_160;
    int *l_165 = (void*)0;
    int *l_166 = &l_160;
    int *l_167 = (void*)0;
    int *l_168 = &g_71;
    int *l_169 = &l_162;
    int *l_170 = &g_71;
    int *l_171 = &l_160;
    int *l_172 = (void*)0;
    int *l_173 = &l_162;
    int *l_174 = &l_162;
    int *l_175 = (void*)0;
    int *l_176 = &l_160;
    int *l_177 = &l_160;
    int *l_178 = &g_71;
    int *l_179 = &l_160;
    int *l_180 = &g_71;
    int *l_181 = &g_71;
    int *l_182 = &g_71;
    ++g_183;
    for (g_67 = 0; (g_67 != (-15)); --g_67)
    {
        unsigned short l_188 = 65528UL;
        (*l_152) = l_188;
        g_71 |= ((*l_169) = (*g_4));
        if ((*g_4))
            break;
    }
    (*l_177) = (*g_4);
    return &g_67;


}







static char func_53(unsigned char * p_54, int * p_55, unsigned char * p_56, unsigned char p_57, unsigned p_58)
{
    int *l_73 = &g_71;
    int l_74 = 0xA9564FCBL;
    l_74 ^= ((*l_73) = (*p_55));
    for (g_67 = 22; (g_67 == (-10)); g_67 = safe_sub_func_int16_t_s_s(g_67, 2))
    {
        int *l_77 = &g_71;
        int *l_78 = (void*)0;
        int *l_79 = &g_71;
        int *l_80 = &g_71;
        int *l_81 = &g_71;
        int *l_82 = &l_74;
        int *l_83 = (void*)0;
        int l_84 = 0xB003BA29L;
        int *l_85 = &g_71;
        int *l_86 = &g_71;
        int *l_87 = (void*)0;
        int *l_88 = &l_84;
        int *l_89 = &l_84;
        int *l_90 = &g_71;
        int *l_91 = &l_84;
        int *l_92 = &l_74;
        int *l_93 = &l_84;
        int *l_94 = (void*)0;
        int *l_95 = &g_71;
        int *l_96 = &g_71;
        int *l_97 = &l_84;
        int l_98 = 0x46B77D86L;
        int *l_99 = &l_98;
        int *l_100 = &l_74;
        int *l_101 = &l_84;
        int *l_102 = &l_84;
        int *l_103 = &g_71;
        int *l_104 = &g_71;
        int *l_105 = &l_84;
        int l_106 = 0x384C7D0EL;
        int *l_107 = &l_98;
        int *l_108 = &g_71;
        int *l_109 = (void*)0;
        int *l_110 = &l_74;
        int *l_111 = &l_106;
        int *l_112 = &l_74;
        int *l_113 = (void*)0;
        int *l_114 = &l_84;
        int *l_115 = &l_98;
        int *l_116 = (void*)0;
        int *l_117 = &l_74;
        int *l_118 = &l_74;
        int *l_119 = &l_98;
        int *l_120 = &l_98;
        int *l_121 = (void*)0;
        int *l_122 = &l_84;
        int *l_123 = &l_106;
        int *l_124 = &l_98;
        int *l_125 = &l_74;
        int *l_126 = (void*)0;
        int *l_127 = &l_98;
        int *l_128 = &l_74;
        int *l_129 = &g_71;
        int *l_130 = (void*)0;
        int *l_131 = &l_98;
        int *l_132 = &g_71;
        int *l_133 = &l_98;
        int *l_134 = &l_74;
        int *l_135 = &g_71;
        int *l_136 = &g_71;
        int *l_138 = (void*)0;
        int *l_139 = &l_106;
        (*l_73) = (0x5654L <= g_5);
        --g_140;
    }
    (*l_73) = ((void*)0 == &g_71);
    return (*l_73);
}







static unsigned char * func_59(int p_60, unsigned char * p_61)
{
    int *l_70 = &g_71;
    (*l_70) = 0x5A5285B5L;
    return &g_34;


}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_16, "g_16", print_hash_value);
    transparent_crc(g_30, "g_30", print_hash_value);
    transparent_crc(g_34, "g_34", print_hash_value);
    transparent_crc(g_67, "g_67", print_hash_value);
    transparent_crc(g_69, "g_69", print_hash_value);
    transparent_crc(g_71, "g_71", print_hash_value);
    transparent_crc(g_137, "g_137", print_hash_value);
    transparent_crc(g_140, "g_140", print_hash_value);
    transparent_crc(g_183, "g_183", print_hash_value);
    transparent_crc(g_204, "g_204", print_hash_value);
    transparent_crc(g_225, "g_225", print_hash_value);
    transparent_crc(g_239, "g_239", print_hash_value);
    transparent_crc(g_257, "g_257", print_hash_value);
    transparent_crc(g_261, "g_261", print_hash_value);
    transparent_crc(g_263, "g_263", print_hash_value);
    transparent_crc(g_353, "g_353", print_hash_value);
    transparent_crc(g_527, "g_527", print_hash_value);
    transparent_crc(g_558, "g_558", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
