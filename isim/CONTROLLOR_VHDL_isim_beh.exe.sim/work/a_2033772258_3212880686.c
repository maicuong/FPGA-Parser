/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
extern char *STD_STANDARD;
extern char *IEEE_P_2592010699;
static const char *ng2 = "C:/FPGAPrj/CONTROLLOR/CONTROLLOR_VHDL.vhd";

unsigned char ieee_p_2592010699_sub_2545490612_503743352(char *, unsigned char , unsigned char );


int work_a_2033772258_3212880686_sub_3980356590_3057020925(char *t1, char *t2)
{
    char t3[248];
    char t4[24];
    char t5[16];
    char t12[8];
    char t18[8];
    int t0;
    char *t6;
    char *t7;
    int t8;
    unsigned int t9;
    char *t10;
    char *t11;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t19;
    char *t20;
    char *t21;
    unsigned char t22;
    char *t23;
    int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    int t28;
    char *t29;
    char *t30;
    int t31;
    int t32;
    int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    int t37;

LAB0:    t6 = (t5 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 1;
    t7 = (t6 + 4U);
    *((int *)t7) = 15;
    t7 = (t6 + 8U);
    *((int *)t7) = 1;
    t8 = (15 - 1);
    t9 = (t8 * 1);
    t9 = (t9 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t9;
    t7 = (t3 + 4U);
    t10 = ((STD_STANDARD) + 384);
    t11 = (t7 + 88U);
    *((char **)t11) = t10;
    t13 = (t7 + 56U);
    *((char **)t13) = t12;
    xsi_type_set_default_value(t10, t12, 0);
    t14 = (t7 + 80U);
    *((unsigned int *)t14) = 4U;
    t15 = (t3 + 124U);
    t16 = ((STD_STANDARD) + 384);
    t17 = (t15 + 88U);
    *((char **)t17) = t16;
    t19 = (t15 + 56U);
    *((char **)t19) = t18;
    xsi_type_set_default_value(t16, t18, 0);
    t20 = (t15 + 80U);
    *((unsigned int *)t20) = 4U;
    t21 = (t4 + 4U);
    t22 = (t2 != 0);
    if (t22 == 1)
        goto LAB3;

LAB2:    t23 = (t4 + 12U);
    *((char **)t23) = t5;
    t24 = (1 - 1);
    t9 = (t24 * 1);
    t25 = (4U * t9);
    t26 = (0 + t25);
    t27 = (t2 + t26);
    t28 = *((int *)t27);
    t29 = (t15 + 56U);
    t30 = *((char **)t29);
    t29 = (t30 + 0);
    *((int *)t29) = t28;
    t8 = 1;
    t24 = 15;

LAB4:    if (t8 <= t24)
        goto LAB5;

LAB7:    t6 = (t15 + 56U);
    t10 = *((char **)t6);
    t8 = *((int *)t10);
    t0 = t8;

LAB1:    return t0;
LAB3:    *((char **)t21) = t2;
    goto LAB2;

LAB5:    t28 = (t8 - 1);
    t9 = (t28 * 1);
    t25 = (4U * t9);
    t26 = (0 + t25);
    t6 = (t2 + t26);
    t31 = *((int *)t6);
    t10 = (t15 + 56U);
    t11 = *((char **)t10);
    t32 = *((int *)t11);
    t22 = (t31 > t32);
    if (t22 != 0)
        goto LAB8;

LAB10:
LAB9:
LAB6:    if (t8 == t24)
        goto LAB7;

LAB11:    t28 = (t8 + 1);
    t8 = t28;
    goto LAB4;

LAB8:    t33 = (t8 - 1);
    t34 = (t33 * 1);
    t35 = (4U * t34);
    t36 = (0 + t35);
    t10 = (t2 + t36);
    t37 = *((int *)t10);
    t13 = (t15 + 56U);
    t14 = *((char **)t13);
    t13 = (t14 + 0);
    *((int *)t13) = t37;
    goto LAB9;

LAB12:;
}

unsigned char work_a_2033772258_3212880686_sub_342515307_3057020925(char *t1, char *t2, char *t3)
{
    char t4[248];
    char t5[24];
    char t9[8];
    char t15[8];
    unsigned char t0;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t16;
    char *t17;
    char *t18;
    unsigned char t19;
    char *t20;
    char *t21;
    int t22;
    char *t23;
    int t24;
    int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    unsigned char t30;
    char *t31;
    char *t32;
    int t33;
    int t34;
    int t35;
    int t36;
    int t37;
    int t38;
    int t39;
    unsigned char t40;

LAB0:    t6 = (t4 + 4U);
    t7 = ((STD_STANDARD) + 384);
    t8 = (t6 + 88U);
    *((char **)t8) = t7;
    t10 = (t6 + 56U);
    *((char **)t10) = t9;
    xsi_type_set_default_value(t7, t9, 0);
    t11 = (t6 + 80U);
    *((unsigned int *)t11) = 4U;
    t12 = (t4 + 124U);
    t13 = ((IEEE_P_2592010699) + 3320);
    t14 = (t12 + 88U);
    *((char **)t14) = t13;
    t16 = (t12 + 56U);
    *((char **)t16) = t15;
    xsi_type_set_default_value(t13, t15, 0);
    t17 = (t12 + 80U);
    *((unsigned int *)t17) = 1U;
    t18 = (t5 + 4U);
    t19 = (t2 != 0);
    if (t19 == 1)
        goto LAB3;

LAB2:    t20 = (t5 + 12U);
    *((char **)t20) = t3;
    t21 = (t3 + 0U);
    t22 = *((int *)t21);
    t23 = (t3 + 8U);
    t24 = *((int *)t23);
    t25 = (0 - t22);
    t26 = (t25 * t24);
    t27 = (1U * t26);
    t28 = (0 + t27);
    t29 = (t2 + t28);
    t30 = *((unsigned char *)t29);
    t31 = (t12 + 56U);
    t32 = *((char **)t31);
    t31 = (t32 + 0);
    *((unsigned char *)t31) = t30;
    t7 = (t3 + 8U);
    t22 = *((int *)t7);
    t8 = (t3 + 4U);
    t24 = *((int *)t8);
    t10 = (t3 + 0U);
    t25 = *((int *)t10);
    t33 = t25;
    t34 = t24;

LAB4:    t35 = (t34 * t22);
    t36 = (t33 * t22);
    if (t36 <= t35)
        goto LAB5;

LAB7:    t7 = (t12 + 56U);
    t8 = *((char **)t7);
    t19 = *((unsigned char *)t8);
    t0 = t19;

LAB1:    return t0;
LAB3:    *((char **)t18) = t2;
    goto LAB2;

LAB5:    t11 = (t12 + 56U);
    t13 = *((char **)t11);
    t19 = *((unsigned char *)t13);
    t11 = (t3 + 0U);
    t37 = *((int *)t11);
    t14 = (t3 + 8U);
    t38 = *((int *)t14);
    t39 = (t33 - t37);
    t26 = (t39 * t38);
    t27 = (1U * t26);
    t28 = (0 + t27);
    t16 = (t2 + t28);
    t30 = *((unsigned char *)t16);
    t40 = ieee_p_2592010699_sub_2545490612_503743352(IEEE_P_2592010699, t19, t30);
    t17 = (t12 + 56U);
    t21 = *((char **)t17);
    t17 = (t21 + 0);
    *((unsigned char *)t17) = t40;

LAB6:    if (t33 == t34)
        goto LAB7;

LAB8:    t24 = (t33 + t22);
    t33 = t24;
    goto LAB4;

LAB9:;
}

static void work_a_2033772258_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(240, ng2);

LAB3:    t1 = (t0 + 3432U);
    t2 = *((char **)t1);
    t3 = work_a_2033772258_3212880686_sub_3980356590_3057020925(t0, t2);
    t1 = (t0 + 9488);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((int *)t7) = t3;
    xsi_driver_first_trans_fast(t1);

LAB2:    t8 = (t0 + 9344);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_2033772258_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;

LAB0:    xsi_set_current_line(241, ng2);

LAB3:    t1 = (t0 + 3752U);
    t2 = *((char **)t1);
    t1 = (t0 + 15728U);
    t3 = work_a_2033772258_3212880686_sub_342515307_3057020925(t0, t2, t1);
    t4 = (t0 + 9552);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t3;
    xsi_driver_first_trans_fast(t4);

LAB2:    t9 = (t0 + 9360);
    *((int *)t9) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_2033772258_3212880686_p_2(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(242, ng2);

LAB3:    t1 = (t0 + 4712U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 9616);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 9376);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_2033772258_3212880686_p_3(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(243, ng2);

LAB3:    t1 = (t0 + 4872U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 9680);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 9392);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_2033772258_3212880686_p_4(char *t0)
{
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    int t9;
    char *t10;
    int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    char *t17;

LAB0:    xsi_set_current_line(388, ng2);
    t2 = (t0 + 992U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 9408);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(389, ng2);
    t4 = (t0 + 3272U);
    t8 = *((char **)t4);
    t9 = *((int *)t8);
    t4 = (t0 + 7048U);
    t10 = *((char **)t4);
    t4 = (t10 + 0);
    *((int *)t4) = t9;
    xsi_set_current_line(390, ng2);
    t2 = (t0 + 1672U);
    t4 = *((char **)t2);
    t2 = (t0 + 7048U);
    t5 = *((char **)t2);
    t9 = *((int *)t5);
    t11 = (t9 - 1);
    t12 = (t11 * 1);
    xsi_vhdl_check_range_of_index(1, 10, 1, t9);
    t13 = (1U * t12);
    t14 = (0 + t13);
    t2 = (t4 + t14);
    t1 = *((unsigned char *)t2);
    t8 = (t0 + 9744);
    t10 = (t8 + 56U);
    t15 = *((char **)t10);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    *((unsigned char *)t17) = t1;
    xsi_driver_first_trans_fast(t8);
    goto LAB3;

LAB5:    t4 = (t0 + 1032U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

}


extern void work_a_2033772258_3212880686_init()
{
	static char *pe[] = {(void *)work_a_2033772258_3212880686_p_0,(void *)work_a_2033772258_3212880686_p_1,(void *)work_a_2033772258_3212880686_p_2,(void *)work_a_2033772258_3212880686_p_3,(void *)work_a_2033772258_3212880686_p_4};
	static char *se[] = {(void *)work_a_2033772258_3212880686_sub_3980356590_3057020925,(void *)work_a_2033772258_3212880686_sub_342515307_3057020925};
	xsi_register_didat("work_a_2033772258_3212880686", "isim/CONTROLLOR_VHDL_isim_beh.exe.sim/work/a_2033772258_3212880686.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
