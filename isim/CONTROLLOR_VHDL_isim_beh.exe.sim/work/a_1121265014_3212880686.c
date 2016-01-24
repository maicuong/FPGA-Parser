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
static const char *ng0 = "C:/FPGAPrj/CONTROLLOR/TEXT_INPUT_VHDL.vhd";
extern char *IEEE_P_3499444699;

char *ieee_p_3499444699_sub_2213602152_3536714472(char *, char *, int , int );


static void work_a_1121265014_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(60, ng0);

LAB3:    t1 = (t0 + 3272U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 8520);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 8328);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1121265014_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(61, ng0);

LAB3:    t1 = (t0 + 4552U);
    t2 = *((char **)t1);
    t1 = (t0 + 8584);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 8344);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1121265014_3212880686_p_2(char *t0)
{
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    unsigned char t8;
    char *t9;
    unsigned char t10;
    unsigned char t11;
    char *t12;
    unsigned char t13;
    unsigned char t14;
    unsigned char t15;
    char *t16;
    int t17;
    unsigned char t18;
    char *t19;
    int t20;
    char *t21;
    int t22;
    unsigned char t23;
    char *t24;
    int t25;
    int t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;

LAB0:    xsi_set_current_line(70, ng0);
    t2 = (t0 + 992U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 8360);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(82, ng0);
    t4 = (t0 + 1352U);
    t9 = *((char **)t4);
    t10 = *((unsigned char *)t9);
    t11 = (t10 == (unsigned char)3);
    if (t11 == 1)
        goto LAB11;

LAB12:    t4 = (t0 + 1512U);
    t12 = *((char **)t4);
    t13 = *((unsigned char *)t12);
    t14 = (t13 == (unsigned char)3);
    t8 = t14;

LAB13:    if (t8 != 0)
        goto LAB8;

LAB10:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 1032U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(83, ng0);
    t4 = (t0 + 3912U);
    t16 = *((char **)t4);
    t17 = *((int *)t16);
    t18 = (t17 > 0);
    if (t18 == 1)
        goto LAB17;

LAB18:    t15 = (unsigned char)0;

LAB19:    if (t15 != 0)
        goto LAB14;

LAB16:
LAB15:    goto LAB9;

LAB11:    t8 = (unsigned char)1;
    goto LAB13;

LAB14:    xsi_set_current_line(85, ng0);
    t4 = (t0 + 3912U);
    t24 = *((char **)t4);
    t25 = *((int *)t24);
    t26 = (t25 + 1);
    t4 = (t0 + 8648);
    t27 = (t4 + 56U);
    t28 = *((char **)t27);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    *((int *)t30) = t26;
    xsi_driver_first_trans_fast(t4);
    goto LAB15;

LAB17:    t4 = (t0 + 3912U);
    t19 = *((char **)t4);
    t20 = *((int *)t19);
    t4 = (t0 + 5288U);
    t21 = *((char **)t4);
    t22 = *((int *)t21);
    t23 = (t20 < t22);
    t15 = t23;
    goto LAB19;

}

static void work_a_1121265014_3212880686_p_3(char *t0)
{
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    unsigned char t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    xsi_set_current_line(116, ng0);
    t2 = (t0 + 992U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 8376);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(117, ng0);
    t4 = (t0 + 1992U);
    t8 = *((char **)t4);
    t4 = (t0 + 17125);
    t10 = 1;
    if (8U == 8U)
        goto LAB11;

LAB12:    t10 = 0;

LAB13:    if (t10 != 0)
        goto LAB8;

LAB10:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 1032U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(118, ng0);
    t14 = (t0 + 8712);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    *((unsigned char *)t18) = (unsigned char)1;
    xsi_driver_first_trans_fast(t14);
    goto LAB9;

LAB11:    t11 = 0;

LAB14:    if (t11 < 8U)
        goto LAB15;
    else
        goto LAB13;

LAB15:    t12 = (t8 + t11);
    t13 = (t4 + t11);
    if (*((unsigned char *)t12) != *((unsigned char *)t13))
        goto LAB12;

LAB16:    t11 = (t11 + 1);
    goto LAB14;

}

static void work_a_1121265014_3212880686_p_4(char *t0)
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
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(123, ng0);
    t1 = (t0 + 4392U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    if (t3 != 0)
        goto LAB3;

LAB4:
LAB5:    t8 = (t0 + 8776);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)3;
    xsi_driver_first_trans_fast(t8);

LAB2:    t13 = (t0 + 8392);
    *((int *)t13) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 8776);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB6:    goto LAB2;

}

static void work_a_1121265014_3212880686_p_5(char *t0)
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
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(124, ng0);
    t1 = (t0 + 4392U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    if (t3 != 0)
        goto LAB3;

LAB4:
LAB5:    t8 = (t0 + 8840);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)3;
    xsi_driver_first_trans_fast(t8);

LAB2:    t13 = (t0 + 8408);
    *((int *)t13) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 8840);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB6:    goto LAB2;

}

static void work_a_1121265014_3212880686_p_6(char *t0)
{
    char t10[16];
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    unsigned char t9;
    char *t11;
    int t12;
    char *t13;
    unsigned int t14;
    unsigned char t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    int t21;

LAB0:    xsi_set_current_line(128, ng0);
    t2 = (t0 + 992U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 8424);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(129, ng0);
    t4 = (t0 + 4392U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    if (t9 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(132, ng0);
    t2 = (t0 + 2152U);
    t4 = *((char **)t2);
    t12 = *((int *)t4);
    t21 = (t12 + 1);
    t2 = ieee_p_3499444699_sub_2213602152_3536714472(IEEE_P_3499444699, t10, t21, 9);
    t5 = (t10 + 12U);
    t14 = *((unsigned int *)t5);
    t14 = (t14 * 1U);
    t1 = (9U != t14);
    if (t1 == 1)
        goto LAB13;

LAB14:    t8 = (t0 + 8904);
    t11 = (t8 + 56U);
    t13 = *((char **)t11);
    t16 = (t13 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t2, 9U);
    xsi_driver_first_trans_fast(t8);

LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 1032U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(130, ng0);
    t4 = (t0 + 3912U);
    t11 = *((char **)t4);
    t12 = *((int *)t11);
    t4 = ieee_p_3499444699_sub_2213602152_3536714472(IEEE_P_3499444699, t10, t12, 9);
    t13 = (t10 + 12U);
    t14 = *((unsigned int *)t13);
    t14 = (t14 * 1U);
    t15 = (9U != t14);
    if (t15 == 1)
        goto LAB11;

LAB12:    t16 = (t0 + 8904);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memcpy(t20, t4, 9U);
    xsi_driver_first_trans_fast(t16);
    goto LAB9;

LAB11:    xsi_size_not_matching(9U, t14, 0);
    goto LAB12;

LAB13:    xsi_size_not_matching(9U, t14, 0);
    goto LAB14;

}

static void work_a_1121265014_3212880686_p_7(char *t0)
{
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    unsigned char t8;
    char *t9;
    unsigned char t10;
    char *t11;
    unsigned char t12;
    unsigned char t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;

LAB0:    xsi_set_current_line(148, ng0);
    t2 = (t0 + 992U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 8440);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(149, ng0);
    t4 = (t0 + 4392U);
    t9 = *((char **)t4);
    t10 = *((unsigned char *)t9);
    if (t10 == 1)
        goto LAB11;

LAB12:    t8 = (unsigned char)0;

LAB13:    if (t8 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(153, ng0);
    t2 = (t0 + 8968);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t9 = (t5 + 56U);
    t11 = *((char **)t9);
    *((unsigned char *)t11) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);

LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 1032U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(150, ng0);
    t4 = (t0 + 8968);
    t14 = (t4 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    *((unsigned char *)t17) = (unsigned char)3;
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(151, ng0);
    t2 = (t0 + 9032);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t9 = (t5 + 56U);
    t11 = *((char **)t9);
    *((unsigned char *)t11) = (unsigned char)1;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

LAB11:    t4 = (t0 + 3432U);
    t11 = *((char **)t4);
    t12 = *((unsigned char *)t11);
    t13 = (!(t12));
    t8 = t13;
    goto LAB13;

}


extern void work_a_1121265014_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1121265014_3212880686_p_0,(void *)work_a_1121265014_3212880686_p_1,(void *)work_a_1121265014_3212880686_p_2,(void *)work_a_1121265014_3212880686_p_3,(void *)work_a_1121265014_3212880686_p_4,(void *)work_a_1121265014_3212880686_p_5,(void *)work_a_1121265014_3212880686_p_6,(void *)work_a_1121265014_3212880686_p_7};
	xsi_register_didat("work_a_1121265014_3212880686", "isim/CONTROLLOR_VHDL_isim_beh.exe.sim/work/a_1121265014_3212880686.didat");
	xsi_register_executes(pe);
}
